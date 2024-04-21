#include "CMOGO.h"

#pragma once
class Bullet: public CMOGO
{
public:
	Bullet(string _fileName, ID3D11Device* _pd3dDevice, IEffectFactory* _EF);

	void SetVelocity(Vector3 v3, Vector3 r3);

private:
	Vector3 RotateV3(Vector3 v3, Vector3 r3);
	float getMagnitude(Vector3 v3);
	float getAngleFromVector(Vector3 v3);
};

