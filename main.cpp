#include "DxLib.h"

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	const int window_width = 1280;
	const int window_hight = 720;

	ChangeWindowMode(true);
	SetGraphMode(window_width, window_hight, 32);
	SetBackgroundColor(0, 0, 0);
	if (DxLib_Init() == -1)return -1;
	SetDrawScreen(DX_SCREEN_BACK);
	SetWindowText("DirectXGame");

	//�Q�[�����[�v
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{

		DrawPixel(320, 240, GetColor(255, 255, 255));	// �_��ł�

		//�t���b�v
		ScreenFlip();

	}

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}