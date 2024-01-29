#pragma once
#include <string>
#include <DirectXTex.h>

//�e�N�X�`���R���o�[�^�[
class TextureConverter
{
public:
	//�g�p���@�̏o��
	static void OutPutUsage();
public:
	//�e�N�X�`����WIC����DDS�ɕϊ�(�t�@�C���p�X,�I�v�V�����̐�,�I�v�V�����z��)
	void ConvertTextureWICToDDS(const std::string& filePath,
		int32_t numOptions = 0, char* options[] = nullptr);

private:
	//�摜�̏��
	DirectX::TexMetadata metadata_;
	//�摜�C���[�W�̃R���e�i
	DirectX::ScratchImage scratchImage_;
	//�f�B���N�g���p�X
	std::wstring directoryPath_;
	//�t�@�C����
	std::wstring fileName_;
	//�t�@�C���g���q
	std::wstring fileExt_;

private:
	//�e�N�X�`���t�@�C���ǂݍ���(�t�@�C���p�X)
	void LoadWICTextureFromFile(const std::string& filePath);
	//�}���`�o�C�g����������C�h������ɕϊ�(�}���`�o�C�g������)
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);
	//�t�H���_�p�X�ƃt�@�C�����𕪗�
	void SeparateFilePath(const std::wstring& filePath);
	//DDS�e�N�X�`���Ƃ��ăt�@�C�������o��
	void SaveDDSTextureToFile(int32_t numOptions, char* options[]);
};