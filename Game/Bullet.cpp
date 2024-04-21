#include "pch.h"
#include "Bullet.h"
#include "math.h"
#include <string>
#include <iostream>

Bullet::Bullet(string _fileName, ID3D11Device* _pd3dDevice, IEffectFactory* _EF): CMOGO(_fileName, _pd3dDevice, _EF)
{
	SetDrag(0.7);
	SetPhysicsOn(true);

	gravity_enabled = true;
}

void Bullet::SetVelocity(Vector3 v3, Vector3 r3)
{
	m_vel = RotateV3(v3, r3);
	//m_vel = v3;
}

Vector3 Bullet::RotateV3(Vector3 v3, Vector3 r3)
{
	std::cout << '\n';
	std::cout << v3.x << ' ' << v3.y << ' ' << v3.z << '\n';

	v3 = Vector3(getMagnitude(v3) * cos(-r3.y + getAngleFromVector(v3)), v3.y, getMagnitude(v3) * sin(-r3.y + getAngleFromVector(v3)));

	std::cout << r3.x << ' ' << r3.y << ' ' << r3.z << '\n';
	std::cout << v3.x << ' ' << v3.y << ' ' << v3.z << '\n';

	return v3;
}

float Bullet::getMagnitude(Vector3 v3)
{
	return sqrt(v3.x * v3.x + v3.z * v3.z);
}

//in radian
float Bullet::getAngleFromVector(Vector3 v3)
{
	return atan(v3.z / v3.x);
}