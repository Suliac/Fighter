#pragma once
#include "Actor.h"
#include "ActorComponent.h"
#include "SceneNode.h"

#include<iostream>
#include<memory>

class RenderComponent :
	public ActorComponent
{
public:
	RenderComponent(Actor& p_owner, std::string p_id);
	~RenderComponent();

	virtual void Update(sf::Time dt) override;
	virtual void Init(void) override;
	virtual void Exit(void) override;

	std::shared_ptr<SceneNode> CreateSceneNode(std::string p_renderComponentId, std::string p_spriteSheetPath, int p_spriteWidth, int p_spriteHeight, int p_numberSpritePerAnim);

protected:
	std::shared_ptr<SceneNode> m_nodeLinked;
};

