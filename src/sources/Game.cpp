#include "../headers/Game.h"

Game::Game() : m_window("Arcanoid", sf::Vector2u(800, 600))
{
    m_clock.restart();
    srand(time(nullptr));
    m_elapsed = 0.0f;
}

Game::~Game() {}

sf::Time Game::GetElapsed() { return m_clock.getElapsedTime(); }
void Game::RestartClock() { m_elapsed += m_clock.restart().asSeconds(); }
Window *Game::GetWindow() { return &m_window; }

void Game::HandleInput()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        // 
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        // 
    }
}

void Game::Update()
{
    m_window.Update();
    float timestep = 1.0f;
    if (m_elapsed >= timestep)
    {
        m_elapsed -= timestep;
    }
}

void Game::Render()
{
    m_window.BeginDraw();
    // Render here.

    m_window.EndDraw();
}