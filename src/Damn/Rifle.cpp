#include "Rifle.h"
#include "CAnimator.h"
#include "Entity.h"
#include<Transform.h>
#include<CMeshRenderer.h>
#include "RayCast.h"
#include "Vector3.h"
#include <iostream>
#include "EnemyHealth.h"
#include "Entity.h"
#include <ComponentArguments.h>
#include "PhysicsManager.h"
#include "CAudioEmitter.h"

void damn::Rifle::Init(eden_script::ComponentArguments* args)
{
	WeaponComponent::Init(args);
	_rifleDamage = args->GetValueToInt("Damage");
}

void damn::Rifle::Start()
{
	_tr = _ent->GetComponent<eden_ec::CTransform>();
	_ent->GetComponent<eden_ec::CMeshRenderer>()->SetInvisible(true);
	WeaponComponent::Start();
}

void damn::Rifle::Shoot()
{
	eden_ec::CTransform* _pTr = _player->GetComponent<eden_ec::CTransform>();
	if (_canShoot && _magazineAmmo > 0 && !isAnyAnimPlaying() && _player) {
		physics_wrapper::RayCastHitResult result;
		result = physics_manager::PhysicsManager::getInstance()->SingleHitRayCast(_pTr->GetPosition() + _pTr->GetForward()*-3, _pTr->GetPosition() + _pTr->GetForward() * -100, true);
		if (result.hasHit && result.entityHit->HasComponent("ENEMY_HEALTH")) {
			result.entityHit->GetComponent<damn::EnemyHealth>()->LoseHealth(_rifleDamage);
		}
		_canShoot = false;
		_magazineAmmo--;
		PlayShootAnim();
	}
	else if (_magazineAmmo <= 0) {
		Reload();
	}
}

void damn::Rifle::PlayIdleAnim()
{
	if (!_ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("idleRifle")) {
		_ent->GetComponent<eden_ec::CAnimator>()->PlayAnim("idleRifle");
	}
}

void damn::Rifle::PlayShootAnim()
{
	if (!_ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("shootRifle")) {
		_ent->GetComponent<eden_ec::CAnimator>()->PlayAnim("shootRifle");
	}
	if (_ent->HasComponent("AUDIO_EMITTER")) {
		_ent->GetComponent<eden_ec::CAudioEmitter>()->ChangeClip("rifleShoot.wav");
		_ent->GetComponent<eden_ec::CAudioEmitter>()->Play();
	}
}

void damn::Rifle::PlayReloadAnim()
{
	if (!_ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("reloadRifle")) {
		_ent->GetComponent<eden_ec::CAnimator>()->PlayAnim("reloadRifle");
	}
	if (_ent->HasComponent("AUDIO_EMITTER")) {
		_ent->GetComponent<eden_ec::CAudioEmitter>()->ChangeClip("rifleReload.wav");
		_ent->GetComponent<eden_ec::CAudioEmitter>()->Play();
	}
}

bool damn::Rifle::isAnyAnimPlaying()
{
	return (_ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("reloadRifle") || _ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("shootRifle"));
}
