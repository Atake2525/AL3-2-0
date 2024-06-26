#pragma once

#include "Audio.h"
#include "DirectXCommon.h"
#include "Input.h"
#include "Model.h"
#include "Sprite.h"
#include "ViewProjection.h"
#include "WorldTransform.h"
#include "Player.h"

/// <summary>
/// ゲームシーン
/// </summary>
class GameScene {

public: // メンバ関数
	/// <summary>
	/// コンストクラタ
	/// </summary>
	GameScene();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~GameScene();

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

	/// <summary>
	/// 毎フレーム処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

	//3Dモデル
	Model* playerModel_ = nullptr;

private: // メンバ変数
	DirectXCommon* dxCommon_ = nullptr;
	Input* input_ = nullptr;
	Audio* audio_ = nullptr;

	Player* player_ = nullptr;

	// テクスチャハンドル
	uint32_t playerTextureHandle_ = 0u;

	

	// モデル
	Model* playermodel_ = nullptr;

	//テクスチャハンドル
	uint32_t PlayerTextureHandle_ = 0;

	//ビュープロジェクション
	ViewProjection viewProjection_;

	/// <summary>
	/// ゲームシーン用
	/// </summary>
};
