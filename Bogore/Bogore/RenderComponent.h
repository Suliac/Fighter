#pragma once
#include "ActorComponent.h"

#include<SFML\Graphics.hpp>

class RenderComponent :
	public ActorComponent
{
public:
	RenderComponent();
	~RenderComponent();

protected:
	// TODO : create an object scene node and put every
	// info to draw in that class. RenderComponent will
	// juste get a pointer tab of thoses nodes
	sf::Texture m_texture;
	sf::Sprite sprite;
	sf::IntRect rectSourceSprite;

	size_t m_currentFrame;
	size_t m_numberFrame;
};

