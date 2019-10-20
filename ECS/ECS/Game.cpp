#include "Game.h"

Game::Game()
{
	m_aiSystem = AISystem();
	m_renderSystem = RenderSystem();
	m_controlSystem = ControlSystem();
	m_healthSystem = HealthSystem();

	m_player = new Entity();
	HealthComponent hc = HealthComponent(); PositionComponent pc = PositionComponent(100,100); InputComponent ip = InputComponent();
	m_player->addComponent(hc);m_player->addComponent(pc); m_player->addComponent(ip);
	m_renderSystem.addEntity(m_player); m_healthSystem.addEntity(m_player);
	m_player->setTag("Player");

	m_alien = new Entity();
	HealthComponent hc1 = HealthComponent(); PositionComponent pc1 = PositionComponent(300, 100);
	m_alien->addComponent(hc1); m_alien->addComponent(pc1);
	m_renderSystem.addEntity(m_alien); m_healthSystem.addEntity(m_alien); m_aiSystem.addEntity(m_alien); 
	m_alien->setTag("Alien");

	m_dog = new Entity();
	HealthComponent hc2 = HealthComponent(); PositionComponent pc2 = PositionComponent(100, 300);
	m_dog->addComponent(hc2); m_dog->addComponent(pc2);
	m_renderSystem.addEntity(m_dog); m_healthSystem.addEntity(m_dog); m_aiSystem.addEntity(m_dog);	
	m_dog->setTag("Dog");

	m_cat = new Entity();
	PositionComponent pc3 = PositionComponent(300, 300);
	m_cat->addComponent(pc3);
	m_renderSystem.addEntity(m_cat); m_aiSystem.addEntity(m_cat);
	m_cat->setTag("Cat");

	m_controlSystem.addEntity(m_player);

}

Game::~Game()
{

}

void Game::init()
{
	m_window = SDL_CreateWindow("ECS", 100, 100, 800, 600, SDL_WINDOW_SHOWN);
	m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_ACCELERATED);
}

void Game::close()
{

}

void Game::run()
{
	while (game)
	{
		update();
		draw();
	}
}

void Game::update()
{
	m_aiSystem.update();
	m_controlSystem.update();
	m_healthSystem.update();
	m_renderSystem.update();
}

void Game::draw()
{
	SDL_RenderClear(m_renderer);

	SDL_RenderPresent(m_renderer);
}