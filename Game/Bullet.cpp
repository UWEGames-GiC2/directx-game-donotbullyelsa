#include "pch.h"
#include "Bullet.h"
#include <string>

Bullet::Bullet(string _fileName, ID3D11Device* _pd3dDevice, IEffectFactory* _EF): CMOGO(_fileName, _pd3dDevice, _EF)
{
	SetDrag(0.7);
	SetPhysicsOn(true);

	gravity_enabled = true;
}

void Bullet::SetVelocity(Vector3 v3, Quaternion _q)
{
	m_vel = (v3 * _q);
}