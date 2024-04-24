#pragma once
#include "Model.h"
#include "WorldTransform.h"
#include "ViewProjection.h"

class Player {
public:

	/// <summsry>
	/// コンストラクタ
	/// <summsry>
	Player();

	/// <summsry>
	/// デストラクタ
	/// <summsry>
	~Player();

	/// <summsry>
	/// 初期化
	/// </summary>
	void Initialize(Model* model, uint32_t textureHandle, ViewProjection* viewProjection);

	/// <summsry>
	/// 更新
	/// </summary>
	void Update();

	/// <summsry>
	/// 描画
	/// </summary>
	void Draw();


	

	private:
		//ワールド変換データ
	    WorldTransform worldTransForm_;

		//モデル
	    Model* model_ = nullptr;
		
		uint32_t playerTextureHandle_ = 0u;

		//ワールドトランスフォーム
	    WorldTransform worldTransform_;

		//ビュープロジェクション
	   // ViewProjection viewProjection_;

		ViewProjection* viewProjection_ = nullptr;

};
