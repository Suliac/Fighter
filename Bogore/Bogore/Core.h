#pragma once

#include<SFML\Graphics.hpp>

#include "Actor.h"

typedef std::vector<Actor> Actors;

class Core
{
public:
	Core();
	virtual ~Core();

	void Loop(void);

protected:
	sf::RenderWindow m_window;
	bool m_isRunning;

	Actors m_actors;

	sf::Clock m_gameClock;
	sf::Time elapsedTime;
};

