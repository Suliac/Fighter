#pragma once

#include<map>
#include<iostream>
#include<memory>
#include<string>
#include<SFML\System.hpp>

#include "ActorComponent.h"

class Core;

typedef std::map<std::string, std::shared_ptr<ActorComponent>> ActorComponents;

class Actor
{
public:
	Actor(std::string p_id, Core& p_owner);
	virtual ~Actor(void);

	// Update the actor
	void Update(sf::Time dt);

	// Init the actor
	void Init(void);

	// Clean exit
	void Exit(void);

	// Add component to our actor
	void AddComponent(std::shared_ptr<ActorComponent> p_component);

	inline Core& GetCore() { return m_ownerCore; }

protected:
	ActorComponents m_components;
	std::string m_actorId;
	Core& m_ownerCore;
};

