#include "MenuBullets.h"
#include <Transform.h>
#include <Entity.h>
#include <SceneManager.h>
#include <Vector3.h>
#include <Quaternion.h>
#include "ProjectileMovement.h"
#include "MainMenuCameraRotation.h"

void damn::MenuBullets::Start() {
	_cameraTransform = eden::SceneManager::getInstance()->FindEntity("Camera")->GetComponent<eden_ec::CTransform>();
}

void damn::MenuBullets::Update(float t) {
    if (!_cameraTransform) return;

    _timer += t;
    if (_timer > _spawnTime) {
        int angle = rand() % (_totalAngle + 1) + _minAngle;

        eden_utils::Vector3 positionOffset((float)(cosf(((float)(angle)) * (float)(PI) / 180.0f) * 10.0f), 20.0f, (float)(sinf(((float)(angle)) * (float)(PI) / 180.0f) * 10.0f));

        eden_utils::Vector3 bulletPosition = _cameraTransform->GetPosition() + positionOffset;

        eden_utils::Quaternion rotation = eden_utils::Quaternion(90, eden_utils::Vector3(1, 0, 0));

        if (_totalBullets < _maxBullets) {
            eden_ec::Entity* bullet = eden::SceneManager::getInstance()->InstantiateBlueprint("MenuBullet", bulletPosition, rotation);
            bullet->GetComponent<damn::ProjectileMovement>()->SetDirection(eden_utils::Vector3(0, 0, 1));
            _instantiatedBullets.push_back(bullet);
            _totalBullets++;
        }
        _minAngle = (int)(std::abs(_ent->GetComponent<damn::MainMenuCameraRotation>()->GetGlobalRotation())) - 115;
        _minAngle %= 360;

        for (auto it = _instantiatedBullets.begin(); it != _instantiatedBullets.end();) {
            if ((*it)->GetComponent<eden_ec::CTransform>()->GetPosition().GetY() < 0.0f) {
                (*it)->SetAlive(false);
                it = _instantiatedBullets.erase(it);
                _totalBullets--;
            }
            else ++it;
        }

        _timer = 0;
    }
}