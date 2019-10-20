#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include "Component.h"
#include "HealthSystem.h"
#include "ControlSystem.h"
#include "AISystem.h"
#include "RenderSystem.h"
#include "HealthComponent.h"
#include "InputComponent.h"
#include "PositionComponent.h"

class Game
{

public:
	Game();
	~Game();

	void close();
	void init();
	void update();
	void draw();

	void run();

private:

	SDL_Window* m_window;
	SDL_Surface* m_surface;
	SDL_Renderer* m_renderer;

	Entity* m_player;
	Entity* m_dog;
	Entity* m_cat;
	Entity* m_alien;

	AISystem m_aiSystem;
	RenderSystem m_renderSystem;
	ControlSystem m_controlSystem;
	HealthSystem m_healthSystem;

	bool game = true;
};

