#include "TextureConverter.h"
#include <cstdio>
#include <cstdlib>
#include <cassert>

enum Argument
{
	ApplicationPath,	//�A�v���P�[�V�����̃p�X
	FilePath,			//�n���ꂽ�t�@�C���̃p�X
	NumArgument
};
int main(int argc, char* argv[])
{
	if (argc < NumArgument)
	{
		//�g������\��
		TextureConverter::OutPutUsage();
		system("pause");
		return 0;
	}

	//COM���C�u�����̏�����
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//�e�N�X�`���R���o�[�^�[
	TextureConverter converter;
	
	//�I�v�V�����̐�
	int numOptions = argc - NumArgument;
	char* mp = argv[2];
	char* opt = argv[3];
	//�I�v�V�����z��(�_�u���|�C���^)
	char** options = argv + NumArgument;
	
	//�e�N�X�`���ϊ�
	converter.ConvertTextureWICToDDS(argv[FilePath], numOptions, options);

	//COM���C�u�����I��
	CoUninitialize();

	//
	return 0;
}