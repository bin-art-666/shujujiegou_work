#include"drawEnter.h"

void drawEnter()
{
	int screenWidth = GetSystemMetrics(SM_CXSCREEN); // 获取屏幕宽度
	int screenHeight = GetSystemMetrics(SM_CYSCREEN); // 获取屏幕高度



	//initgraph(1200, 720,EX_SHOWCONSOLE | EX_DBLCLKS);
	initgraph(screenWidth - 100, screenHeight - 50, EX_SHOWCONSOLE | EX_DBLCLKS);
	setbkcolor(WHITE);
	cleardevice();		//清屏函数

	//左上角“南京地铁”
	settextstyle(50, 0, _T("华文行楷"));
	settextcolor(BLACK);
	outtextxy(25, 18, _T("南京地铁"));

	int titleWidth = textwidth(_T("南京地铁"));
	int helpButtonX = 25 + titleWidth + 20;

	//添加帮助按钮
	setfillcolor(RGB(240, 240, 240));
	setlinecolor(RGB(240, 240, 240));

	settextstyle(20, 0, _T("宋体"));
	settextcolor(RGB(80, 80, 80));
	outtextxy(helpButtonX + 10, 32, _T("帮助"));




	//分割线
	setlinecolor(BLACK);
	setlinestyle(PS_SOLID, 4);

	line(300, 30, 300, screenHeight - 100 );


	//制作主体窗口
	//制作全部线路的主体显示
	//难度+++++++++++++++++
	//通过调用函数

}