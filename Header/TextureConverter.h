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
	//画像の情報
	DirectX::TexMetadata metadata_;
	//画像イメージのコンテナ
	DirectX::ScratchImage scratchImage_;
	//ディレクトリパス
	std::wstring directoryPath_;
	//ファイル名
	std::wstring fileName_;
	//ファイル拡張子
	std::wstring fileExt_;

private:
	//テクスチャファイル読み込み(ファイルパス)
	void LoadWICTextureFromFile(const std::string& filePath);
	//マルチバイト文字列をワイド文字列に変換(マルチバイト文字列)
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);
	//フォルダパスとファイル名を分離
	void SeparateFilePath(const std::wstring& filePath);
	//DDSテクスチャとしてファイル書き出し
	void SaveDDSTextureToFile();
};