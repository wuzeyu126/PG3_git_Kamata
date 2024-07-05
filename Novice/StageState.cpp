#include "StageState.h"

void StageState::Init() { }

// ステージ状態の更新処理
void StageState::Update(char keys[], char preKeys[]) {
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
		sceneNum = CLEAR;
	}
}


// 描画
void StageState::Draw() {
	Novice::ScreenPrintf(600, 350, "STAGE");
	Novice::ScreenPrintf(510, 370, "press SPACE to next scene");
}