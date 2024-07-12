#pragma once
#include "Novice.h"
#include "Vector2.h"
class Player {
public:
	Player();
	void Init();
	void Update();
	void Draw();
	// メンバ変数
	void MoveRight();
	void MoveLeft();
private:
	// 速度
	float speed_;
	// 座標
	Vector2 pos_;
};