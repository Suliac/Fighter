#pragma once
#include <string>

#include<SFML\System.hpp>

class Actor;

class ActorComponent
{
public:
	ActorComponent(Actor& p_owner, std::string p_id);
	virtual ~ActorComponent();

	virtual void Update(sf::Time dt) = 0;
	virtual void Init(void) = 0;
	virtual void Exit(void) = 0;

	inline std::string GetComponentId() const { return m_componentId; }

protected:
	Actor& m_owner;
	std::string m_componentId;
};

