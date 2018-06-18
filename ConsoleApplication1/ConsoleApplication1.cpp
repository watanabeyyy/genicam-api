// ConsoleApplication1.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "../Dll_cam/CaptureDll.h"

int main()
{
	CaptureDll::MyCaptureDll *param = new CaptureDll::MyCaptureDll();
	if (param->err == 1) {
		cout << "error" << endl;
		return 0;
	}
	unsigned char* Output = (unsigned char*)malloc(param->length);
	param->AcquireImages(Output);
	//for (int i = 0;i<param->length;i++)
		//cout << +Output[i] << endl;
	cout << param->length << endl;
	delete param;
	cout << "Done! Press Enter to exit..." << endl;
	getchar();
    return 0;
}

