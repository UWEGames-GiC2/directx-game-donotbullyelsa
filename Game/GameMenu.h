#pragma once

#include "GameObject.h"
#include "GameObject2D.h"
#include <list>
#include <vector>

class GameMenu
{
public:
    void Add2D(GameObject2D* GO);
    void Update(float dt);
    //list<GameObject*> Render();
    list<GameObject2D*> Render2D();

private:
	list<GameObject2D*> m_GameObjects2D;
};

