#include "ClearState.h"
#include <iostream>

void ClearState::Init() { std::cout << "Entering Clear State" << std::endl; }

// クリア状態の更新処理
void ClearState::Update(char keys[], char preKeys[]) {
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
		sceneNum = TITLE;
	}
}

// 描画
void ClearState::Draw() {
	Novice::ScreenPrintf(600, 350, "CLEAR");
	Novice::ScreenPrintf(510, 370, "press SPACE back to TITLE");
}