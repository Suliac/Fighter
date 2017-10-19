#include "Core.h"
#include "Globals.h"
#include "RenderComponent.h"

Core::Core() :
	m_isRunning(true),
	m_gameClock(),
	m_currentSceneIndex(0)
{
	m_window.create(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "BOGORE");
	
	Scene gameScene;
	m_scenes.push_back(gameScene);

	// TODO : Change that by XML loading into factories (?)
	Actor player = Actor("player1", *this);
	std::shared_ptr<ActorComponent> component = std::make_shared<RenderComponent>(RenderComponent(player, "player1rendercomponent"));
	player.AddComponent(component);

	Loop();
}


void Core::Loop(void)
{
		
	while (m_isRunning && m_window.isOpen())
	{
		sf::Event event;
		while (m_window.pollEvent(event)) // Close the windows
		{
			if (event.type == sf::Event::Closed)
				m_window.close();
		}
		
		// TODO : Manage time & gameloop 
		elapsedTime = m_gameClock.getElapsedTime();

		if (elapsedTime.asMilliseconds() > 1000)
		{
			// TODO : Manage states & scenes of the game

			// Actors update
			for (Actors::iterator it = m_actors.begin(); it != m_actors.end(); ++it)
			{
				it->Update(elapsedTime);
			}

			// Render
			m_window.clear();
			m_scenes[m_currentSceneIndex].Draw(m_window);

			// Restart clock and decrement elapsedtime
			elapsedTime = sf::milliseconds(elapsedTime.asMilliseconds() - LOOP_TIME_MS); // we get the time left
			m_gameClock.restart();
		}

	}
}

Core::~Core()
{
}