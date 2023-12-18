#pragma once
#include <string>
#include <DirectXTex.h>

//�e�N�X�`���R���o�[�^�[
class TextureConverter
{
public:
	//�e�N�X�`����WIC����DDS�ɕϊ�(�t�@�C���p�X)
	void ConvertTextureWICToDDS(const std::string& filePath);

private:
	//�e�N�X�`���t�@�C���ǂݍ���(�t�@�C���p�X)
	void LoadWICTextureFromFile(const std::string& filePath);
	//�}���`�o�C�g����������C�h������ɕϊ�(�}���`�o�C�g������)
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

};