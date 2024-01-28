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
	assert(argc >= NumArgument);

	//COMライブラリの初期化
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//テクスチャコンバーター
	TextureConverter converter;
	
	//テクスチャ変換
	converter.ConvertTextureWICToDDS(argv[FilePath]);

	//COMライブラリ終了
	CoUninitialize();

	//system("pause");
	return 0;
}