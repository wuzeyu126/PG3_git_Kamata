#pragma once
#include "Novice.h"

// ゲームの異なる状態を表す列挙型
enum GameState {
	TITLE,
	STAGE,
	CLEAR,
};

// 状態インターフェースを表す基底クラス
class IScene {
public:
	virtual void Init() = 0;                            
	virtual void Update(char keys[], char preKeys[]) = 0; 
	virtual void Draw() = 0;                            
	virtual ~IScene() {}
	int GetSceneNum() const { return sceneNum; }

protected:
	static int sceneNum;
};