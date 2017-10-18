#include "Core.h"
#include "Globals.h"


Core::Core() :
	m_isRunning(true),
	m_gameClock()
{
	m_window.create(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "BOGORE");
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

			// TODO : Render
			m_window.clear();

			elapsedTime = sf::milliseconds(elapsedTime.asMilliseconds() - LOOP_TIME_MS); // we get the time left
			m_gameClock.restart();
		}

	}
}

Core::~Core()
{
}