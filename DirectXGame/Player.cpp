#include <assert.h>
#include "Player.h"
#include "TextureManager.h"

Player::Player() {}

Player::~Player() { 
	delete model_;
}

void Player::Initialize(Model* model, uint32_t textureHandle, ViewProjection* viewProjection) {
	
	model_ = Model::Create();
	worldTransform_.Initialize();
	//viewProjection_.Initialize();
	viewProjection_ = viewProjection;
	//NULLポインタチェック
	assert(model);

	model_ = model;
	playerTextureHandle_ = textureHandle;
	worldTransForm_.Initialize();
}

void Player::Update() {
	//行列を定数バッファに転送
	worldTransForm_.TransferMatrix();
}

void Player::Draw() {
	model_->Draw(worldTransForm_, *viewProjection_, playerTextureHandle_);
}

