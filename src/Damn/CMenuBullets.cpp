#include "CMenuBullets.h"
#include <Transform.h>
#include <Entity.h>
#include <SceneManager.h>
#include <Vector3.h>
#include <Quaternion.h>
#include "CProyectileMovement.h"
#include <iostream>

void damn::CMenuBullets::Start() {
	_cameraTransform = eden::SceneManager::getInstance()->FindEntity("Camera")->GetComponent<eden_ec::CTransform>();
}

void damn::CMenuBullets::Update(float t) {
    int angle = rand() % (_maxAngle + 1) + _minAngle;

    eden_utils::Vector3 positionOffset(cosf((angle) * PI / 180.0f) * 10, 20.0f, sinf((angle) * PI / 180.0f) * 10);

    eden_utils::Vector3 bulletPosition = _cameraTransform->GetPosition() + positionOffset;

    eden_utils::Quaternion rotation = eden_utils::Quaternion(90, eden_utils::Vector3(1, 0, 0));

    if (_totalBullets < _maxBullets) {
        eden_ec::Entity* bullet = eden::SceneManager::getInstance()->InstantiateBlueprint("MenuBullet", bulletPosition, rotation);
        bullet->GetComponent<eden_ec::CProyectileMovement>()->SetDirection(eden_utils::Vector3(0, 0, 1));
        _instantiatedBullets.push_back(bullet);
        _totalBullets++;
    }
    _maxAngle++;
    _minAngle++;
    _maxAngle %= 360;
    _minAngle %= 360;

    for (auto it = _instantiatedBullets.begin(); it != _instantiatedBullets.end();) {
        if ((*it)->GetComponent<eden_ec::CTransform>()->GetPosition().GetY() < 0.0f) {
            (*it)->SetAlive(false);
            it = _instantiatedBullets.erase(it);
            _totalBullets--;
        }
        else ++it;
    }
}