#include"lineButton.h"

using namespace std;



void lineButton::buttonDraw()
{
	setfillcolor(B_Color);
	setlinecolor(B_Color);
	fillroundrect(B_x1, B_y1, B_x2, B_y2, round_r, round_r);

	settextstyle(22, 0, _T("黑体"));
	settextcolor(BLACK);
	setbkmode(OPAQUE);
	setbkcolor(B_Color);
	char cname[50];
	strcpy(cname,B_name.c_str());

	outtextxy(B_x1 + 22, B_y1 + 8, _T(cname));
}

////线路查询按钮
//int x = 25;
//int y = 300;
//setfillcolor(RGB(18, 166, 231)); // 蓝色按钮
//setlinecolor(RGB(18, 166, 231));
//fillroundrect(x, y, x + 100, y + 35, 30, 30);
////1号线
//settextstyle(22, 0, _T("黑体"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(18, 166, 231)); // 浅蓝色背景
//outtextxy(x + 22, y + 8, _T("1号线"));
//
//
////2号线
//y += 50;
//setfillcolor(RGB(217, 53, 25)); // 蓝色按钮
//setlinecolor(RGB(217, 53, 25));
//fillroundrect(x, 350, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("黑体"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(217, 53, 25)); // 浅蓝色背景
//outtextxy(x + 22, 350 + 8, _T("2号线"));
//
//
////3号线
//y += 50;
//setfillcolor(RGB(2, 146, 77)); // 蓝色按钮
//setlinecolor(RGB(2, 146, 77));
//fillroundrect(x, 400, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("黑体"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(2, 146, 77)); // 浅蓝色背景
//outtextxy(x + 22, 400 + 8, _T("3号线"));
//
//
////4号线
//y += 50;
//setfillcolor(RGB(127, 109, 161));
//setlinecolor(RGB(127, 109, 161));
//fillroundrect(x, 450, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("黑体"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(127, 109, 161));
//outtextxy(x + 22, 450 + 8, _T("4号线"));
//
//
////5号线
//y += 50;
//setfillcolor(RGB(239, 222, 106)); // 蓝色按钮
//setlinecolor(RGB(239, 222, 106));
//fillroundrect(x, 500, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("黑体"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(239, 222, 106));
//outtextxy(x + 22, 500 + 8, _T("5号线"));
//
//
////7号线
//y += 50;
//setfillcolor(RGB(38, 111, 56)); // 蓝色按钮
//setlinecolor(RGB(38, 111, 56));
//fillroundrect(x, 550, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("黑体"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(38, 111, 56)); // 浅蓝色背景
//outtextxy(x + 22, 550 + 8, _T("7号线"));
//
//
////10号线
//y += 50;
//setfillcolor(RGB(176, 167, 102)); // 蓝色按钮
//setlinecolor(RGB(176, 167, 102));
//fillroundrect(x, 600, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("黑体"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(176, 167, 102)); // 浅蓝色背景
//outtextxy(x + 22, 600 + 8, _T("10号线"));
//
//
//
////第二列
//x = 150;
//y = 300;
//
////S1号线
//setfillcolor(RGB(76, 187, 180)); // 蓝色按钮
//setlinecolor(RGB(76, 187, 180));
//fillroundrect(x, 300, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("黑体"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(76, 187, 180)); // 浅蓝色背景
//outtextxy(x + 20, 300 + 8, _T("S1号线"));
//
//
////S3号线
//y += 50;
//setfillcolor(RGB(218, 94, 204)); // 蓝色按钮
//setlinecolor(RGB(218, 94, 204));
//fillroundrect(x, 350, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("黑体"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(218, 94, 204)); // 浅蓝色背景
//outtextxy(x + 20, 350 + 8, _T("S3号线"));
//
//
////S6号线
//y += 50;
//setfillcolor(RGB(199, 141, 218)); // 蓝色按钮
//setlinecolor(RGB(199, 141, 218));
//fillroundrect(x, 400, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("黑体"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(199, 141, 218)); // 浅蓝色背景
//outtextxy(x + 20, 400 + 8, _T("S6号线"));
//
//
////S7号线
//y += 50;
//setfillcolor(RGB(230, 155, 152)); // 蓝色按钮
//setlinecolor(RGB(230, 155, 152));
//fillroundrect(x, 450, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("黑体"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(230, 155, 152)); // 浅蓝色背景
//outtextxy(x + 20, 450 + 8, _T("S7号线"));
//
//
////S8号线
//y += 50;
//setfillcolor(RGB(238, 160, 85)); // 蓝色按钮
//setlinecolor(RGB(238, 160, 85));
//fillroundrect(x, 500, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("黑体"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(238, 160, 85)); // 浅蓝色背景
//outtextxy(x + 20, 500 + 8, _T("8号线"));
//
//
////S9号线
//y += 50;
//setfillcolor(RGB(250, 188, 41)); // 蓝色按钮
//setlinecolor(RGB(250, 188, 41));
//fillroundrect(x, 550, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("黑体"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(250, 188, 41)); // 浅蓝色背景
//outtextxy(x + 20, 550 + 8, _T("S9号线"));
//
////全部按钮
//y += 100;
//setfillcolor(RGB(250, 188, 41)); // 蓝色按钮
//setlinecolor(RGB(250, 188, 41));
//fillroundrect(25, 650, x + 100, y + 35, 30, 30);
//
//settextstyle(22, 0, _T("黑体"));
//settextcolor(BLACK);
//setbkmode(OPAQUE);
//setbkcolor(RGB(250, 188, 41)); // 浅蓝色背景
//outtextxy(25 + 20 + 50 + 10, 650 + 8, _T("全部"));