#pragma once
#include "SceneNode.h"

#include<iostream>
#include<memory>

typedef std::map<std::string, std::shared_ptr<SceneNode>> SceneNodes;

class Scene
{
public:
	Scene();
	~Scene();

	void Draw(sf::RenderWindow& p_windows);

	// Node factory ?
	void AddNode(std::string p_componentId, std::shared_ptr<SceneNode> p_nodePtr);
	void DeleteNode(std::string p_renderComponentId);
	std::shared_ptr<SceneNode> GetNode(std::string p_renderComponentId);

protected:
	SceneNodes m_sceneNodes;
};

