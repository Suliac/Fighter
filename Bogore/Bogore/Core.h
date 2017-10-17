#pragma once

#include<SFML\Graphics.hpp>

class Core
{
public:
	Core();
	virtual ~Core();

	void Loop(void);

protected:
	bool m_isRunning;
	sf::RenderWindow m_window;
};

