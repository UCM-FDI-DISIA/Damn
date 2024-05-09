#include "RomeComponent.h"
#include "Entity.h"
#include "CAnimator.h"

void damn::RomeComponent::Start()
{
	_ent->GetComponent<eden_ec::CAnimator>()->PlayAnim("sexy_dance");
}