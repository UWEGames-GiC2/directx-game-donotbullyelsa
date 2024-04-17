#include "pch.h"
#include "GameMenu.h"
#include <iostream>

void GameMenu::Add2D(GameObject2D* GO)
{
	std::cout << m_GameObjects2D.size() << " ";
	m_GameObjects2D.push_back(GO);
	std::cout << m_GameObjects2D.size() << '\n';
}

void GameMenu::Update(float dt)
{

}

//list<GameObject*> GameMenu::Render()

list<GameObject2D*> GameMenu::Render2D()
{
	return m_GameObjects2D;
}