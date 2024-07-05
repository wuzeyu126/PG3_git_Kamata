#pragma once
#pragma once
#include "ClearState.h"
#include "IScene.h"
#include "StageState.h"
#include "TitleState.h"
#include <memory>

// 状態管理を行うクラス
class GameManager {
public:
	// コンストラクタ
	GameManager();
	// デストラクタ
	~GameManager();
	// この関数でゲームループを呼び出す
	int Run(char keys[], char preKeys[]);

private:
	// シーンを保持するメンバー変数
	std::unique_ptr<IScene> sceneArr_[3];
	// どのステージを呼び出すかを管理する変数
	int currentSceneNo_; // 現在のシーン
	int prevSceneNo_;    // 前のシーン
};