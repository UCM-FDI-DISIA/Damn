#include "ChangeCameraBackground.h"
#include <Entity.h>
#include <CCamera.h>
#include <ComponentArguments.h>

ChangeCameraBackground::ChangeCameraBackground(float r, float g, float b, float a) : _r(r), _g(g), _b(b), _a(a) {}

void ChangeCameraBackground::Init(eden_script::ComponentArguments* args) {
	_r = args->GetValueToFloat("r") / 255.0f;
	_g = args->GetValueToFloat("g") / 255.0f;
	_b = args->GetValueToFloat("b") / 255.0f;
	_a = args->GetValueToFloat("a");
}

void ChangeCameraBackground::Start() {
	_ent->GetComponent<eden_ec::CCamera>()->SetBackgroundColor(_r, _g, _b, _a);
}