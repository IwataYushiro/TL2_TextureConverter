#pragma once
#include <string>

//テクスチャコンバーター
class TextureConverter
{
public:
	//テクスチャをWICからDDSに変換(ファイルパス)
	void ConvertTextureWICToDDS(const std::string& filePath);
};