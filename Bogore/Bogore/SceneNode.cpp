#include "SceneNode.h"



SceneNode::SceneNode(std::string p_spriteSheetPath, int p_spriteWidth, int p_spriteHeight, int p_numberSpritePerAnim, bool p_animationLoop):
	m_currentFrame(0),
	m_currentState(0),
	m_spriteWidth(p_spriteWidth),
	m_spriteHeight(p_spriteHeight),
	m_numberFrame(p_numberSpritePerAnim),
	m_isLooping(p_animationLoop)
{
	if (!m_texture.loadFromFile(p_spriteSheetPath))
	{
		// Error
		throw std::invalid_argument("spritesheet cannot be found");
	}

	m_sprite.setTexture(m_texture);
	m_rectSourceSprite = sf::IntRect(m_spriteWidth*m_currentFrame, m_spriteHeight*m_currentState, m_spriteWidth, m_spriteHeight);
	m_sprite.setTextureRect(m_rectSourceSprite);
}


SceneNode::~SceneNode()
{
}


sf::Sprite SceneNode::GetSprite()
{
	m_sprite.setTexture(m_texture);
	m_rectSourceSprite = sf::IntRect(m_spriteWidth*m_currentFrame, m_spriteHeight*m_currentState, m_spriteWidth, m_spriteHeight);
	m_sprite.setTextureRect(m_rectSourceSprite);
	
	m_currentFrame++;
	if (m_currentFrame >= m_numberFrame)
	{
		m_currentFrame = m_isLooping ? 0 : m_numberFrame - 1;		
	}

	return m_sprite;
}
