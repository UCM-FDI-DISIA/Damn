#include "Rifle.h"
#include "CAnimator.h"
#include "Entity.h"
#include<Transform.h>
#include<CMeshRenderer.h>
#include "RayCast.h"
#include "Vector3.h"
#include <iostream>

void damn::Rifle::Init(eden_script::ComponentArguments* args)
{
	WeaponComponent::Init(args);
}

void damn::Rifle::Start()
{
	_tr = _ent->GetComponent<eden_ec::CTransform>();
	_ent->GetComponent<eden_ec::CMeshRenderer>()->SetInvisible(true);
	WeaponComponent::Start();
}

void damn::Rifle::Shoot()
{
	if (_canShoot && _magazineAmmo > 0 && !isAnyAnimPlaying()) {
		//physics_wrapper::RayCast* _rayCast = physics_wrapper::RayCast::getInstance();
		//physics_wrapper::RayCastHitResult result;
		//result = physics_wrapper::RayCast::getInstance()->SingleHitRayCast(_tr->GetPosition() + _tr->GetForward(), _tr->GetPosition() + _tr->GetForward() * 100, true);
		//std::cout << result.entityHit->GetEntityID() << '\n';
		_magazineAmmo--;
		PlayShootAnim();
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
}

void damn::Rifle::PlayReloadAnim()
{
	if (!_ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("reloadRifle")) {
		_ent->GetComponent<eden_ec::CAnimator>()->PlayAnim("reloadRifle");
	}
}

bool damn::Rifle::isAnyAnimPlaying()
{
	return (_ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("reloadRifle") || _ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("shootRifle"));
}
