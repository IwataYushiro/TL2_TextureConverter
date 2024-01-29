#include "TextureConverter.h"
#include <cstdio>
#include <cstdlib>
#include <cassert>

enum Argument
{
	ApplicationPath,	//アプリケーションのパス
	FilePath,			//渡されたファイルのパス
	NumArgument
};
int main(int argc, char* argv[])
{
	if (argc < NumArgument)
	{
		//使い方を表示
		TextureConverter::OutPutUsage();
		system("pause");
		return 0;
	}

	//COMライブラリの初期化
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//テクスチャコンバーター
	TextureConverter converter;
	
	//オプションの数
	int numOptions = argc - NumArgument;
	char* mp = argv[2];
	char* opt = argv[3];
	//オプション配列(ダブルポインタ)
	char** options = argv + NumArgument;
	
	//テクスチャ変換
	converter.ConvertTextureWICToDDS(argv[FilePath], numOptions, options);

	//COMライブラリ終了
	CoUninitialize();

	//
	return 0;
}