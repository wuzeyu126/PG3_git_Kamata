#pragma once
#include "Iscene.h"
#include "Novice.h"

// タイトル状態を表すクラス
class TitleState : public IScene {
public:
	void Init() override;                           
	void Update(char keys[], char preKeys[]) override;
	void Draw() override;                           
};