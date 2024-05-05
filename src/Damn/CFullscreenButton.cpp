#include "CFullscreenButton.h"
#include <ComponentArguments.h>
#include <RenderManager.h>
#include <Entity.h>
#include <iostream>
#include <CButton.h>

bool damn::CFullscreenButton::_isFullscreen = false;

void damn::CFullscreenButton::Init(eden_script::ComponentArguments* args) {
	_button = args->GetValueToString("Button");
}

void damn::CFullscreenButton::Start() {
	if((_button == "On" && !_isFullscreen) || (_button == "Off" && _isFullscreen)) _ent->GetComponent<eden_ec::CButton>()->Hide();
}

void damn::CFullscreenButton::SetIsFullscreen() {
	_isFullscreen = !_isFullscreen;
}

void damn::CFullscreenButton::Update(float t) {
	if ((_button == "Off" && _isFullscreen && _ent->GetComponent<eden_ec::CButton>()->IsVisible()) ||
		(_button == "On" && !_isFullscreen && _ent->GetComponent<eden_ec::CButton>()->IsVisible())) {
		_ent->GetComponent<eden_ec::CButton>()->Hide();
	}
	else if ((_button == "Off" && !_isFullscreen && !_ent->GetComponent<eden_ec::CButton>()->IsVisible()) ||
		(_button == "On" && _isFullscreen && !_ent->GetComponent<eden_ec::CButton>()->IsVisible())) {
		_ent->GetComponent<eden_ec::CButton>()->Show();
	}
}