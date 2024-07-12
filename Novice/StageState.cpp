#include "StageState.h"
StageState::StageState() {}
// 初期化
void StageState::Init() {
	player_ = new Player();
	inputHandler_ = new InputHandle();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();
	inputHandler_->AssignMoveRightCommand2PressKeyD();
}

void StageState::Update(char keys[], char preKeys[]) {
	// Spaceキーを押すとクリア画面に移行
	if (!preKeys[DIK_SPACE] && keys[DIK_SPACE]) {
		sceneNum = CLEAR;
	}

	// get command
	iCommand_ = inputHandler_->HandleInput();
	// set command
	if (this->iCommand_) {
		iCommand_->Exec(*player_);
	}
	// 更新
	player_->Update();
}

void StageState::Draw() {
	Novice::ScreenPrintf(600, 350, "STAGE");
	Novice::ScreenPrintf(510, 370, "press SPACE to next scene");
	Novice::ScreenPrintf(560, 390, "MOVE: A & D");
	player_->Draw();
}