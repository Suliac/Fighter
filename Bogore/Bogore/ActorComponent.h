#pragma once
#include <string>

#include "Actor.h"

class ActorComponent
{
public:
	ActorComponent();
	virtual ~ActorComponent();

	virtual void Update(int deltaMs) = 0;
	virtual void Init(void) = 0;
	virtual void Exit(void) = 0;

	inline std::string GetComponentId() const { return m_componentId; }

protected:
	std::string m_componentId;
	Actor* m_owner;
};

