#include "Actor.h"

Actor::Actor(std::string p_id) :
	m_actorId(p_id)
{
}


Actor::~Actor(void)
{
	m_components.clear();
}

void Actor::AddComponent(ActorComponent * p_component)
{
	m_components.insert(std::make_pair(p_component->GetComponentId(), p_component));
}

void Actor::Update(sf::Time dt)
{
	// L'update d'un actor consiste a lancer tous les update de ses composants
	for (ActorComponents::iterator it = m_components.begin(); it != m_components.end(); ++it)
	{
		it->second->Update(dt);
	}
}

void Actor::Init(void)
{
}

void Actor::Exit(void)
{
}
