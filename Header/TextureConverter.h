#pragma once
#include <string>
#include <DirectXTex.h>

//テクスチャコンバーター
class TextureConverter
{
public:
	//テクスチャをWICからDDSに変換(ファイルパス)
	void ConvertTextureWICToDDS(const std::string& filePath);

private:
	//テクスチャファイル読み込み(ファイルパス)
	void LoadWICTextureFromFile(const std::string& filePath);
	//マルチバイト文字列をワイド文字列に変換(マルチバイト文字列)
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

};