#include "Player.h"

// 初期化
Player::Player() {
	pos_.x = 620.0f;
	pos_.y = 200.0f;
	speed_ = 3.0f;
}

void Player::Init() {}
// 更新
void Player::Update() {}
// 描画
void Player::Draw() {
	Novice::DrawEllipse(int(pos_.x), int(pos_.y), 20, 20, 0.0f, RED, kFillModeSolid);
}
// 右
void Player::MoveRight() { this->pos_.x += speed_; }
// 左
void Player::MoveLeft() { this->pos_.x -= speed_; }