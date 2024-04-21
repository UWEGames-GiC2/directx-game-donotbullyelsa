#include "CMOGO.h"

#pragma once
class Bullet: public CMOGO
{
public:
	Bullet(string _fileName, ID3D11Device* _pd3dDevice, IEffectFactory* _EF);

	void SetVelocity(Vector3 v3, Quaternion _q);
};

