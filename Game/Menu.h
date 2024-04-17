#pragma once

#include "GameObject.h"
#include "GameObject2D.h"
#include <list>

class Menu
{
public:
    void Update(float dt);
    void Render();

private:
	list<GameObject2D*> GameObject2D;
};

