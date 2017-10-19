#pragma once
#include "SceneNode.h"
class SceneSpriteNode :
	public SceneNode
{
public:
	SceneSpriteNode();
	~SceneSpriteNode();

	 // Next frame into get sprite ?
	virtual void Draw(sf::RenderWindow & p_windows) override;
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

