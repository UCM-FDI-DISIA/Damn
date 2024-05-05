#include<math.h>

#include "Shotgun.h"
#include"CProyectileMovement.h"
#include<ComponentArguments.h>
#include<SceneManager.h>
#include<Transform.h>
#include<Entity.h>
#include<Vector3.h>
#include<CMeshRenderer.h>
#include "CAnimator.h"
#include "CAudioEmitter.h"


void damn::Shotgun::Init(eden_script::ComponentArguments* args)
{
	_numBalas = args->GetValueToInt("Balas");
	WeaponComponent::Init(args);
}

void damn::Shotgun::Start()
{
	_tr = _ent->GetComponent<eden_ec::CTransform>();
	_ent->GetComponent<eden_ec::CMeshRenderer>()->SetInvisible(true);
	WeaponComponent::Start();
}

void damn::Shotgun::Shoot()
{
	if (_canShoot && _magazineAmmo > 0 && !isAnyAnimPlaying()) {
		float alfa = (float) ANGLE / _numBalas;
		eden_utils::Vector3 dir = eden_utils::Vector3(0, 0, 0);
		eden_utils::Vector3 up = _cameraTransform->GetUp();
		eden_utils::Vector3 forward = eden_utils::Vector3(0,0,-1);
		eden_ec::Entity* bullet;
		float angle = 0;
		for (int i = 0; i < _numBalas; ++i) {
			angle = (float)((-alfa + alfa * i));
			dir = forward.RotatedAroundPoint(up, angle);
			
			bullet = CreateBullet("ShotgunShell");
			bullet->GetComponent<eden_ec::CProyectileMovement>()->SetDirection(dir.Normalized() * -1);
		}
		_canShoot = false;
		_elapsedTime = 0;
		_magazineAmmo--;
		PlayShootAnim();
	}
	else if (_magazineAmmo == 0)
		Reload();
}

void damn::Shotgun::PlayIdleAnim()
{
	if (!_ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("idleShotgun")) {
		_ent->GetComponent<eden_ec::CAnimator>()->PlayAnim("idleShotgun");
	}
}

void damn::Shotgun::PlayShootAnim()
{
	if (!_ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("shootShotgun")) {
		_ent->GetComponent<eden_ec::CAnimator>()->PlayAnim("shootShotgun");
	}
	if (_ent->HasComponent("AUDIO_EMITTER")) {
		_ent->GetComponent<eden_ec::CAudioEmitter>()->ChangeClip("shotgunShoot.wav");
		_ent->GetComponent<eden_ec::CAudioEmitter>()->Play();
	}
}

void damn::Shotgun::PlayReloadAnim()
{
	if (!_ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("reloadShotgun")) {
		_ent->GetComponent<eden_ec::CAnimator>()->PlayAnim("reloadShotgun");
	}
	if (_ent->HasComponent("AUDIO_EMITTER")) {
		_ent->GetComponent<eden_ec::CAudioEmitter>()->ChangeClip("shotgunReload.wav");
		_ent->GetComponent<eden_ec::CAudioEmitter>()->Play();
	}
}

bool damn::Shotgun::isAnyAnimPlaying()
{
	return (_ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("reloadShotgun") || _ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("shootShotgun"));
}

