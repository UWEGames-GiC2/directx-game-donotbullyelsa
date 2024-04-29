#include "pch.h"
#include "Targets.h"
#include<iostream>

Targets::Targets(string _fileName, ID3D11Device* _pd3dDevice, IEffectFactory* _EF) : CMOGO(_fileName, _pd3dDevice, _EF)
{

	SetDrag(0.7);
	SetPhysicsOn(true);

	gravity_enabled = true;
}

void Targets::Tick(GameData* _GD, Vector2 v2_goto)
{
	Vector2 direction = v2_goto - Vector2(m_pos.x, m_pos.z);
	direction.Normalize();
	//SetPitch(atan(direction.y / direction.x));
	m_vel.x = direction.x * SPEED;
	m_vel.z = direction.y * SPEED;
}