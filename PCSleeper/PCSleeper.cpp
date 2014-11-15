// PCSleeper.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <Windows.h>
#include <stdlib.h>
#include <PowrProf.h>

#pragma comment(lib, "PowrProf.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	if (argc != 2 || _tcscmp(argv[1], _T("-s")) && _tcscmp(argv[1], _T("-h"))){
		printf("usage: PCSleeper [-s|-h]\n-s: suspend\n-h: hibernate\n");
		return 1;
	}
	bool state = _tcscmp(argv[1], _T("-h")) ? false : true;
	SetSuspendState(state, false, false);
	return 0;
}

