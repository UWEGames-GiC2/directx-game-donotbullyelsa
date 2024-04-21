#ifndef _CMOGO_H_
#define _CMOGO_H_

//=================================================================
//A Class for loading and displaying CMO as GameObjects
//=================================================================

#include "gameobject.h"
#include "Model.h"
#include <string>

using namespace std;
using namespace DirectX;

struct GameData;

class CMOGO : public GameObject
{
public:
	CMOGO(string _fileName, ID3D11Device* _pd3dDevice, IEffectFactory* _EF);
	virtual ~CMOGO();

	virtual void Tick(GameData* _GD) override;
	virtual void Draw(DrawData* _DD) override;

	virtual bool Intersects(const CMOGO& other) const;
	bool grounded = false;
	void stopGravity();
	Vector3 last_pos = { 0.0f, 0.0f, 0.0f };

	BoundingOrientedBox&		getCollider()		noexcept { return m_collider; }
	const BoundingOrientedBox&	getCollider() const noexcept { return m_collider; }

	const float GRAVITY_CONST = 2.0f;
	float gravity = 0.0f;

protected:
	unique_ptr<Model>  m_model;
	BoundingOrientedBox m_collider;

	//needs a slightly different raster state that the VBGOs so create one and let them all use it
	static ID3D11RasterizerState*  s_pRasterState;
	static int m_count;

	bool gravity_enabled = false;

	
};

#endif
