#pragma once

#include<SFML\Graphics.hpp>
// Nodes of the scene to render 
class SceneNode
{
public:
	SceneNode(std::string p_spriteSheetPath, int p_spriteWidth, int p_spriteHeight, int p_numberSpritePerAnim, bool p_animationLoop = true);
	~SceneNode();

	sf::Sprite GetSprite(); // Next frame into get sprite ?

protected:
	sf::Texture m_texture;
	sf::Sprite m_sprite;
	sf::IntRect m_rectSourceSprite;

	unsigned int m_currentFrame;
	unsigned int m_numberFrame;
	bool m_isLooping;

	int m_spriteWidth;
	int m_spriteHeight;

	unsigned int m_currentState;
};

