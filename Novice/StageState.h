#pragma once
#include "IScene.h"

// ステージ状態を表すクラス
class StageState : public IScene {
public:
	void Init() override;                           
	void Update(char keys[], char preKeys[]) override;
	void Draw() override;                           
};