#include <cstdio>
#include <cstdlib>
#include "TextureConverter.h"

enum Argument
{
	ApplicationPath,	//�A�v���P�[�V�����̃p�X
	FilePath,			//�n���ꂽ�t�@�C���̃p�X
	NumArgument
};
int main(int argc, char* argv[])
{
	//argc�̐������J��Ԃ�
	for (int i = 0; i < argc; i++)
	{
		//������argv��i�Ԃ�\��
		printf(argv[i]);
		//���s
		printf("\n");
	}

	system("pause");
	return 0;
}