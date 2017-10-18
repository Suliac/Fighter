#pragma once
#include <string>

class Actor;

class ActorComponent
{
public:
	ActorComponent();
	virtual ~ActorComponent();

	virtual void Update(sf::Time dt) = 0;
	virtual void Init(void) = 0;
	virtual void Exit(void) = 0;

	inline std::string GetComponentId() const { return m_componentId; }

protected:
	std::string m_componentId;
	Actor* m_owner;
};

