#include"drawEnter.h"

void drawEnter()
{
	int screenWidth = GetSystemMetrics(SM_CXSCREEN); // ��ȡ��Ļ���
	int screenHeight = GetSystemMetrics(SM_CYSCREEN); // ��ȡ��Ļ�߶�



	//initgraph(1200, 720,EX_SHOWCONSOLE | EX_DBLCLKS);
	initgraph(screenWidth - 100, screenHeight - 50, EX_SHOWCONSOLE | EX_DBLCLKS);
	setbkcolor(WHITE);
	cleardevice();		//��������

	//���Ͻǡ��Ͼ�������
	settextstyle(50, 0, _T("�����п�"));
	settextcolor(BLACK);
	outtextxy(25, 18, _T("�Ͼ�����"));

	int titleWidth = textwidth(_T("�Ͼ�����"));
	int helpButtonX = 25 + titleWidth + 20;

	//��Ӱ�����ť
	setfillcolor(RGB(240, 240, 240));
	setlinecolor(RGB(240, 240, 240));

	settextstyle(20, 0, _T("����"));
	settextcolor(RGB(80, 80, 80));
	outtextxy(helpButtonX + 10, 32, _T("����"));




	//�ָ���
	setlinecolor(BLACK);
	setlinestyle(PS_SOLID, 4);

	line(300, 30, 300, screenHeight - 100 );


	//�������崰��
	//����ȫ����·��������ʾ
	//�Ѷ�+++++++++++++++++
	//ͨ�����ú���

}