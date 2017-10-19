#include "Scene.h"



Scene::Scene()
{
}


Scene::~Scene()
{
}

void Scene::Draw(sf::RenderWindow & p_windows)
{
	p_windows.clear();

	for (SceneNodes::iterator it = m_sceneNodes.begin(); it != m_sceneNodes.end(); ++it)
	{
		p_windows.draw(it->second->GetSprite());
	}

	p_windows.display();

}

void Scene::AddNode(std::string p_componentId, std::shared_ptr<SceneNode> p_nodePtr)
{
	m_sceneNodes.insert(std::make_pair(p_componentId, p_nodePtr));
}

void Scene::DeleteNode(std::string p_renderComponentId)
{
	SceneNodes::iterator it;
	it = m_sceneNodes.find(p_renderComponentId);
	m_sceneNodes.erase(it);
}

std::shared_ptr<SceneNode> Scene::GetNode(std::string p_renderComponentId)
{
	return m_sceneNodes[p_renderComponentId];
}

