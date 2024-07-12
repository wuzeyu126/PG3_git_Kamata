#pragma once
#include "ICommand.h"
#include "IScene.h"
#include "InputHandle.h"
#include "Player.h"

// ステージ状態を表すクラス
class StageState : public IScene {
public:
	StageState();
	void Init() override;
	void Update(char keys[], char preKeys[]) override;
	void Draw() override;

private:
	Player* player_ = nullptr;
	ICommand* iCommand_ = nullptr;
	InputHandle* inputHandler_ = nullptr;
};