#pragma once

#include<map>
#include<iostream>
#include<string>

#include "ActorComponent.h"
#include<SFML\System.hpp>

typedef std::map<std::string, ActorComponent*> ActorComponents;

class Actor
{
public:
	Actor(std::string p_id);
	virtual ~Actor(void);

	 void Update(sf::Time dt);
	 void Init(void);
	 void Exit(void);

	void AddComponent(ActorComponent* p_component);

protected:
	std::map<std::string, ActorComponent*> m_components;
	std::string m_actorId;
};

