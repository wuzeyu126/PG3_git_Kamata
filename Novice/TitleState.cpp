#include "TitleState.h"

void TitleState::Init() {}

// タイトル状態の更新処理
void TitleState::Update(char keys[], char preKeys[]) {
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
		sceneNum = STAGE;
	}
}

//描画
void TitleState::Draw() {
	Novice::ScreenPrintf(600, 350, "TITLE");
	Novice::ScreenPrintf(510, 370, "press SPACE to next scene");
}