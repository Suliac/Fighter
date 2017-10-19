#pragma once

#include<SFML\Graphics.hpp>

#include "Actor.h"
#include "Scene.h"

typedef std::vector<Actor> Actors;

class Core
{
public:
	Core();
	virtual ~Core();

	void Loop(void);

	inline Scene& GetCurrentScene() { return m_scenes[m_currentSceneIndex]; }

protected:
	sf::RenderWindow m_window;
	bool m_isRunning;

	Actors m_actors;
	std::vector<Scene> m_scenes;
	size_t m_currentSceneIndex;

	sf::Clock m_gameClock;
	sf::Time elapsedTime;
};

