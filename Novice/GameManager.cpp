#include "GameManager.h"

GameManager::GameManager() {
	// 各シーンの配列
	sceneArr_[TITLE] = std::make_unique<TitleState>();
	sceneArr_[STAGE] = std::make_unique<StageState>();
	sceneArr_[CLEAR] = std::make_unique<ClearState>();
	// 現在のシーン
	currentSceneNo_ = TITLE;
}

GameManager::~GameManager() {}

int GameManager::Run(char keys[], char preKeys[]) {

	while (Novice::ProcessMessage() == 0) {

		Novice::BeginFrame(); // フレーム開始

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		// シーンのチェック
		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNum();

		// シーン変更チェック
		if (prevSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Init();
		}

		// 更新処理
		sceneArr_[currentSceneNo_]->Update(keys, preKeys); // シーンごとの更新処理

		// 描画処理
		sceneArr_[currentSceneNo_]->Draw();

		Novice::EndFrame(); // フレーム終了

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}
	return 0;
}