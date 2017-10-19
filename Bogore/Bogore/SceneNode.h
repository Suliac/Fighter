#pragma once

#include<SFML\Graphics.hpp>
// Nodes of the scene to render 
class SceneNode
{
public:
	SceneNode(std::string p_spriteSheetPath, int p_spriteWidth, int p_spriteHeight, int p_numberSpritePerAnim, bool p_animationLoop = true);
	~SceneNode();

	virtual void Draw(sf::RenderWindow & p_windows) = 0;
protected:
	
};

