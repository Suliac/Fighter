#include "ActorComponent.h"



ActorComponent::ActorComponent(Actor& p_owner, std::string p_id) :
	m_owner(p_owner),
	m_componentId(p_id)
{
}


ActorComponent::~ActorComponent(void)
{
}


