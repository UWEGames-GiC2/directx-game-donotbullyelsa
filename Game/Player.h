#ifndef _PLAYER_H_
#define _PLAYER_H_
#include "CMOGO.h"
#include "Bullet.h"

//=================================================================
//Base Player Class (i.e. a GO the player controls)
//=================================================================

class Player : public CMOGO
{

public:
	Player(string _fileName, ID3D11Device* _pd3dDevice, IEffectFactory* _EF);
	~Player();

	virtual void Tick(GameData* _GD) override;

	string Shoot(std::shared_ptr<Bullet> _bullet);
	std::vector<std::shared_ptr<Bullet>> bullet;

	bool canSpawnBullet();
	const float COOLDOWN_TIME = 1.0f;

protected:
	float weapon_cooldown = 0.0f;
	const int AMMO_LIMIT = 6;
	int ammo = AMMO_LIMIT;
	void Reload();
};

#endif