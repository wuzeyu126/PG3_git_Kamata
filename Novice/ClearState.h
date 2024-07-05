#pragma once
#include "IScene.h"

// クリア状態を表すクラス
class ClearState : public IScene {
public:
	void Init() override;                           
	void Update(char keys[], char preKeys[]) override;
	void Draw() override;                           
};