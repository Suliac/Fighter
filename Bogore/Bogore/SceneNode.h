#pragma once

#include<SFML\Graphics.hpp>
// Nodes of the scene to render 
class SceneNode
{
public:
	SceneNode();
	~SceneNode();

	virtual void Draw(sf::RenderWindow & p_windows) = 0;
protected:
	
};

