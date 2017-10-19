#include "RenderComponent.h"
#include "Core.h"

RenderComponent::RenderComponent(Actor& p_owner, std::string p_id) :
	ActorComponent(p_owner, p_id)
{
}


RenderComponent::~RenderComponent()
{
}

void RenderComponent::Update(sf::Time dt)
{
	/*std::shared_ptr<SceneNode> node = m_owner.GetCore().GetCurrentScene().GetNode(m_componentId);
	node->NextFrame();*/
}

void RenderComponent::Init(void)
{
	m_nodeLinked = CreateSceneNode(m_componentId, "../images/mage.png", 387, 350, 5);
	m_owner.GetCore().GetCurrentScene().AddNode(m_componentId,m_nodeLinked);
}

std::shared_ptr<SceneNode> RenderComponent::CreateSceneNode(std::string p_renderComponentId, std::string p_spriteSheetPath, int p_spriteWidth, int p_spriteHeight, int p_numberSpritePerAnim)
{
	SceneNode node = SceneNode(p_spriteSheetPath, p_spriteWidth, p_spriteHeight, p_numberSpritePerAnim);
	return std::make_shared<SceneNode>(node);
}

void RenderComponent::Exit(void)
{
}

