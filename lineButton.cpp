#include"lineButton.h"

using namespace std;



void lineButton::buttonDraw()
{
	setfillcolor(B_Color);
	setlinecolor(B_Color);
	fillroundrect(B_x1, B_y1, B_x2, B_y2, round_r, round_r);

	settextstyle(22, 0, _T("����"));
	settextcolor(BLACK);
	setbkmode(OPAQUE);
	setbkcolor(B_Color);
	char cname[50];
	strcpy(cname,B_name.c_str());

	outtextxy(B_x1 + 22, B_y1 + 8, _T(cname));
}

////��·��ѯ��ť
//int x = 25;
//int y = 300;
//setfillcolor(RGB(18, 166, 231)); // ��ɫ��ť
//setlinecolor(RGB(18, 166, 231));
//fillroundrect(x, y, x + 100, y + 35, 30, 30);
////1����
//settextstyle(22, 0, _T("����"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(18, 166, 231)); // ǳ��ɫ����
//outtextxy(x + 22, y + 8, _T("1����"));
//
//
////2����
//y += 50;
//setfillcolor(RGB(217, 53, 25)); // ��ɫ��ť
//setlinecolor(RGB(217, 53, 25));
//fillroundrect(x, 350, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("����"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(217, 53, 25)); // ǳ��ɫ����
//outtextxy(x + 22, 350 + 8, _T("2����"));
//
//
////3����
//y += 50;
//setfillcolor(RGB(2, 146, 77)); // ��ɫ��ť
//setlinecolor(RGB(2, 146, 77));
//fillroundrect(x, 400, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("����"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(2, 146, 77)); // ǳ��ɫ����
//outtextxy(x + 22, 400 + 8, _T("3����"));
//
//
////4����
//y += 50;
//setfillcolor(RGB(127, 109, 161));
//setlinecolor(RGB(127, 109, 161));
//fillroundrect(x, 450, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("����"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(127, 109, 161));
//outtextxy(x + 22, 450 + 8, _T("4����"));
//
//
////5����
//y += 50;
//setfillcolor(RGB(239, 222, 106)); // ��ɫ��ť
//setlinecolor(RGB(239, 222, 106));
//fillroundrect(x, 500, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("����"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(239, 222, 106));
//outtextxy(x + 22, 500 + 8, _T("5����"));
//
//
////7����
//y += 50;
//setfillcolor(RGB(38, 111, 56)); // ��ɫ��ť
//setlinecolor(RGB(38, 111, 56));
//fillroundrect(x, 550, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("����"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(38, 111, 56)); // ǳ��ɫ����
//outtextxy(x + 22, 550 + 8, _T("7����"));
//
//
////10����
//y += 50;
//setfillcolor(RGB(176, 167, 102)); // ��ɫ��ť
//setlinecolor(RGB(176, 167, 102));
//fillroundrect(x, 600, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("����"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(176, 167, 102)); // ǳ��ɫ����
//outtextxy(x + 22, 600 + 8, _T("10����"));
//
//
//
////�ڶ���
//x = 150;
//y = 300;
//
////S1����
//setfillcolor(RGB(76, 187, 180)); // ��ɫ��ť
//setlinecolor(RGB(76, 187, 180));
//fillroundrect(x, 300, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("����"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(76, 187, 180)); // ǳ��ɫ����
//outtextxy(x + 20, 300 + 8, _T("S1����"));
//
//
////S3����
//y += 50;
//setfillcolor(RGB(218, 94, 204)); // ��ɫ��ť
//setlinecolor(RGB(218, 94, 204));
//fillroundrect(x, 350, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("����"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(218, 94, 204)); // ǳ��ɫ����
//outtextxy(x + 20, 350 + 8, _T("S3����"));
//
//
////S6����
//y += 50;
//setfillcolor(RGB(199, 141, 218)); // ��ɫ��ť
//setlinecolor(RGB(199, 141, 218));
//fillroundrect(x, 400, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("����"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(199, 141, 218)); // ǳ��ɫ����
//outtextxy(x + 20, 400 + 8, _T("S6����"));
//
//
////S7����
//y += 50;
//setfillcolor(RGB(230, 155, 152)); // ��ɫ��ť
//setlinecolor(RGB(230, 155, 152));
//fillroundrect(x, 450, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("����"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(230, 155, 152)); // ǳ��ɫ����
//outtextxy(x + 20, 450 + 8, _T("S7����"));
//
//
////S8����
//y += 50;
//setfillcolor(RGB(238, 160, 85)); // ��ɫ��ť
//setlinecolor(RGB(238, 160, 85));
//fillroundrect(x, 500, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("����"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(238, 160, 85)); // ǳ��ɫ����
//outtextxy(x + 20, 500 + 8, _T("8����"));
//
//
////S9����
//y += 50;
//setfillcolor(RGB(250, 188, 41)); // ��ɫ��ť
//setlinecolor(RGB(250, 188, 41));
//fillroundrect(x, 550, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("����"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(250, 188, 41)); // ǳ��ɫ����
//outtextxy(x + 20, 550 + 8, _T("S9����"));
//
////ȫ����ť
//y += 100;
//setfillcolor(RGB(250, 188, 41)); // ��ɫ��ť
//setlinecolor(RGB(250, 188, 41));
//fillroundrect(25, 650, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("����"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(250, 188, 41)); // ǳ��ɫ����
//outtextxy(25 + 20 + 50 + 10, 650 + 8, _T("ȫ��"));