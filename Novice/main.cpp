#include "GameManager.h"
#include <Novice.h>

const char kWindowTitle[] = "GC1B_04_ゴ_タクウ";
const int kWindowWidth = 1280;
const int kWindowHeight = 720;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	// Noviceライブラリの初期化
	Novice::Initialize(kWindowTitle, kWindowWidth, kWindowHeight);

	// キー入力結果を受け取る配列
	char keys[256] = {0};
	char preKeys[256] = {0};

	GameManager* gameManager = new GameManager();
	gameManager->Run(keys, preKeys);

	// Noviceライブラリの終了
	Novice::Finalize();
	return 0;
}

