#include "Core.h"
#include "Globals.h"


Core::Core() :
	m_isRunning(true)
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


		m_window.clear();

	}
}

Core::~Core()
{
}