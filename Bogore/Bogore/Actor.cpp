#include "Actor.h"

Actor::Actor(std::string p_id, Core& p_owner) :
	m_actorId(p_id),
	m_ownerCore(p_owner)
{
}


Actor::~Actor(void)
{
	m_components.clear();
}

void Actor::AddComponent(std::shared_ptr<ActorComponent> p_component)
{
	m_components.insert(std::make_pair(p_component->GetComponentId(), p_component));
	p_component->Init();
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
