#include<iostream>
#include"Line.h"
#include"Station.h"
#include"NanJing_Subway.h"
#include"Line_init.h"
#include<easyx.h>
#include"drawEnter.h"
#include"Line_draw_init.h"
#include"lineButton.h"
#include<Windows.h>

using namespace std;



int main()
{
	//Ӳ�����ʼ�������ǵ��Ͼ�����վ�������ޣ��ұ����ڲ�ͬƽ̨�����������󣬴˴�����Ӳ����
	//��ʼ��·
	Line one("1����", 32, "1", RGB(18, 166, 231));
	Line two("2����", 30, "2", RGB(217, 53, 25));
	Line three("3����", 29, "3", RGB(2, 146, 77));
	Line four("4����", 18, "4", RGB(127, 109, 161));
	Line five("5����", 30, "5", RGB(239, 222, 106));
	Line seven("7����", 27, "7", RGB(38, 111, 56));
	Line ten("10����", 14, "10", RGB(176, 167, 102));

	Line S_one("S1����", 9, "S1", RGB(76, 187, 180));
	Line S_three("S3����", 19, "S3", RGB(218, 94, 204));
	Line S_six("S6����", 13, "S6", RGB(199, 141, 218));
	Line S_seven("S7����", 9, "S7", RGB(230, 155, 152));
	Line S_eight("S8����", 19, "S8", RGB(238, 160, 85));
	Line S_nine("S9����", 6, "S9", RGB(250, 188, 41));

	//��ʼ��·��վ��
	one_init(one, 32);
	two_init(two, 30);
	three_init(three, 29);
	four_init(four, 18);
	five_init(five, 30);
	seven_init(seven, 27);
	ten_init(ten, 14);

	S_one_init(S_one, 9);
	S_three_init(S_three, 19);
	S_six_init(S_six, 13);
	S_seven_init(S_seven, 9);
	S_eight_init(S_eight, 19);
	S_nine_init(S_nine, 6);

	Line lines[13] = { one,two,three,four,five,seven,ten,S_one,S_three,S_six,S_seven,S_eight,S_nine };

	Station index_stations[255];
	int k = 0;
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < lines[i].station_count; j++) {
			index_stations[k++] = (lines[i].stations[j]);
		}
	}

	system_m NanJing("�Ͼ�����", lines, 13);


	//����ͼ�λ�����
	drawEnter();


	//��ʼ����·վ���ͼ
	one_draw_init(one, 32);
	two_draw_init(two, 30);
	three_draw_init(three, 29);
	four_draw_init(four, 18);
	five_draw_init(five, 30);
	seven_draw_init(seven, 27);
	ten_draw_init(ten, 14);


	S_one_draw_init(S_one, 9);
	S_three_draw_init(S_three, 19);
	S_six_draw_init(S_six, 13);
	S_seven_draw_init(S_seven, 9);
	S_eight_draw_init(S_eight, 16);
	S_nine_idraw_nit(S_nine, 19);


	//��·��ѯ��ť
	lineButton B_one(25, 300, 125, 335, 30, RGB(18, 166, 231), "1����");
	lineButton B_two(25, 350, 125, 350 + 35, 30, RGB(217, 53, 25), "2����");
	lineButton B_three(25, 400, 125, 400 + 35, 30, RGB(2, 146, 77), "3����");

	lineButton B_four(25, 450, 125, 450 + 35, 30, RGB(127, 109, 161), "4����");
	lineButton B_five(25, 500, 125, 500 + 35, 30, RGB(239, 222, 106), "5����");
	lineButton B_seven(25, 550, 125, 550 + 35, 30, RGB(38, 111, 56), "7����");
	lineButton B_ten(25, 600, 125, 600 + 35, 30, RGB(176, 167, 102), "10����");


	lineButton B_S_one(150, 300, 250, 300 + 35, 30, RGB(76, 187, 180), "S1����");
	lineButton B_S_three(150, 350, 250, 350 + 35, 30, RGB(218, 94, 204), "S3����");

	lineButton B_S_six(150, 400, 250, 400 + 35, 30, RGB(199, 141, 218), "S6����");
	lineButton B_S_seven(150, 450, 250, 450 + 35, 30, RGB(230, 155, 152), "S7����");
	lineButton B_S_eight(150, 500, 250, 500 + 35, 30, RGB(238, 160, 85), "S8����");
	lineButton B_S_nine(150, 550, 250, 550 + 35, 30, RGB(250, 188, 41), "S9����");

	lineButton B_line_button_s[13] = { B_one,B_two,B_three,B_four,B_five,B_seven,B_ten,B_S_one,B_S_three,B_S_six,B_S_seven,B_S_eight,B_S_nine };

	for (int i = 0; i < 13; i++) {
		B_line_button_s[i].buttonDraw();
	}

	setfillcolor(RGB(250, 188, 41)); // ��ɫ��ť
	setlinecolor(RGB(250, 188, 41));
	fillroundrect(25, 650, 250, 650 + 35, 30, 30);

	settextstyle(22, 0, _T("����"));
	settextcolor(BLACK);
	setbkmode(OPAQUE);
	setbkcolor(RGB(250, 188, 41)); // ǳ��ɫ����
	outtextxy(25 + 20 + 50 + 10, 650 + 8, _T("ȫ��"));


	setfillcolor(RGB(250, 188, 41)); // ��ɫ��ť
	setlinecolor(RGB(250, 188, 41));
	fillroundrect(25, 700, 250, 700 + 35, 30, 30);

	settextstyle(22, 0, _T("����"));
	settextcolor(BLACK);
	setbkmode(OPAQUE);
	setbkcolor(RGB(250, 188, 41)); // ǳ��ɫ����
	outtextxy(25 + 20 + 50 + 10, 700 + 8, _T("ȫ������ࣩ"));




	////��·��ѯ
	settextstyle(20, 0, _T("����"));
	settextcolor(BLACK);
	setbkmode(OPAQUE);
	setbkcolor(WHITE);
	outtextxy(50, 85, _T("��·��ѯ"));

	// ���������������վ���յ�վ�����
	int inputY = 120; // ��һ��������Y����
	int inputX = 30; // �����X���꣨�������߽磩

	// ��ȡ"��㣺"��"�յ㣺"���ֵĿ�ȣ�ȷ����������
	int labelWidth = textwidth(_T("��㣺"));

	// ��������ʼX���꣨�����ֺ��棩
	int inputBoxStartX = inputX + labelWidth; // ���ֺ���10���ؼ��
	int inputBoxWidth = 180; // �������
	int inputBoxHeight = 35; // �����߶�

	//����ǩ
	settextstyle(20, 0, _T("����"));
	settextcolor(BLACK);
	setbkmode(OPAQUE);
	setbkcolor(WHITE);
	outtextxy(inputX, inputY, _T("��㣺"));

	// ��������
	setfillcolor(WHITE);
	setlinecolor(RGB(150, 150, 150));
	fillroundrect(inputBoxStartX, inputY, inputBoxStartX + inputBoxWidth, inputY + inputBoxHeight, 30, 30);
	//lineroundrect(inputBoxStartX, inputY, inputBoxStartX + inputBoxWidth, inputY + inputBoxHeight, 8, 8);

	//�յ��ǩ
	settextstyle(20, 0, _T("����"));
	settextcolor(BLACK);
	setbkmode(OPAQUE);
	setbkcolor(WHITE);
	outtextxy(inputX, inputY + 40, _T("�յ㣺"));

	// �յ������
	fillroundrect(inputBoxStartX, inputY + 40, inputBoxStartX + inputBoxWidth, inputY + 40 + inputBoxHeight, 30, 30);
	//lineroundrect(inputBoxStartX, inputY + 40, inputBoxStartX + inputBoxWidth, inputY + 40 + inputBoxHeight, 8, 8);

	// ��Ӳ�ѯ��ť����������·���һ
	int queryButtonY = inputY + 20 + inputBoxHeight + 30;
	setfillcolor(RGB(70, 130, 180)); // ��ɫ��ť
	setlinecolor(RGB(50, 100, 150));
	fillroundrect(inputBoxStartX, queryButtonY, inputBoxStartX + 80, queryButtonY + 40, 30, 30);

	// ��Ӳ�ѯ��ť����������·�����
	setfillcolor(RGB(70, 130, 180)); // ��ɫ��ť
	setlinecolor(RGB(50, 100, 150));
	fillroundrect(inputBoxStartX+100, queryButtonY, inputBoxStartX + inputBoxWidth, queryButtonY + 40, 30, 30);

	// ��ѯ��ť����
	settextstyle(15, 0, _T("����"));
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	outtextxy(inputBoxStartX + 4, queryButtonY + 9, _T("��ѯ���̣�"));

	// ��ѯ��ť����
	settextstyle(15, 0, _T("����"));
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	outtextxy(inputBoxStartX + 104, queryButtonY + 9, _T("��ѯ���٣�"));



	//��������

	ExMessage msg = { 0 };

	string start_name = {};
	string end_name = {};

	while (true) {
		if (peekmessage(&msg, EX_MOUSE | EX_CHAR)) {
			if (msg.message == WM_LBUTTONDOWN) {
				//����������

				if (msg.x > inputX && msg.x < inputX + inputBoxWidth && msg.y>inputY && msg.y < inputY + inputBoxHeight) {
					//�����������
					setfillcolor(WHITE);
					solidrectangle(300, 10, 1400, 900);
					for (int i = 0; i < 13; i++) {
						lines[i].drawLine();
					}
					cout << "�����ն�(��ɫ����)��������㣬Ȼ��س�" << endl;
					cout << "���: ";
					cin >> start_name;
					cout << endl;
				}
				else if (msg.x>inputBoxStartX&&msg.x<inputBoxStartX + inputBoxWidth&& msg.y>inputY +40&&msg.y<inputY+40+inputBoxHeight) {
					//����յ������
					//inputBoxStartX, inputY + 40, inputBoxStartX + inputBoxWidth, inputY + 40 + inputBoxHeight,
					setfillcolor(WHITE);
					solidrectangle(300, 10, 1400, 900);
					for (int i = 0; i < 13; i++) {
						lines[i].drawLine();
					}
					cout << "�����նˣ���ɫ�����������յ�,Ȼ��س�" << endl;
					cout << "�յ㣺";
					cin >> end_name;
					cout << endl;
				}
				else if (msg.x > inputBoxStartX && msg.x<inputBoxStartX + 80 && msg.y> queryButtonY && msg.y < queryButtonY + 40)
				{
					//չʾ���·��
					//inputBoxStartX, queryButtonY, inputBoxStartX + 80, queryButtonY + 40,
					//cout << "�������" << endl;

					if (start_name.empty() || end_name.empty())continue;

					Array path_all;
					cout << "����վ����·����" << endl;
					path_all = NanJing.__search_short__(start_name, end_name);

					setfillcolor(WHITE);
					solidrectangle(300, 10, 1400, 900);


					for (int i = 0; i < 13; i++) {
						lines[i].drawLineBriefLittle();
					}


					int k = 0;

					while (k < path_all.length()) {
						node find;
						find = NanJing.find_i_j(index_stations[path_all.array[k]]);
						k++;
						lines[find.i].stations[find.j].draw_station_big();
						//cout << find.i << "\t" << find.j << endl;
					}
				}
				else if (msg.x > inputBoxStartX+100 && msg.x<inputBoxStartX + inputBoxWidth && msg.y> queryButtonY && msg.y < queryButtonY + 40) {
					//չʾ���ٻ���վ
					//inputBoxStartX + 100, queryButtonY, inputBoxStartX + inputBoxWidth, queryButtonY + 40,
					//cout << "�������" << endl;

					if (start_name.empty() || end_name.empty())continue;
					Array path_all;

					cout << "���ٻ���վ·����" << endl;
					path_all = NanJing.__search_less__(start_name, end_name);


					setfillcolor(WHITE);
					solidrectangle(300, 10, 1400, 900);

					for (int i = 0; i < 13; i++) {
						lines[i].drawLineBriefLittle();
					}
					k = 0;

					while (k < path_all.length()) {
						node find;
						find = NanJing.find_i_j(index_stations[path_all.array[k]]);
						k++;
						lines[find.i].stations[find.j].draw_station_big();
						//cout << find.i << "\t" << find.j << endl;
					}
				}
				else if (msg.x > 25 && msg.x < 250 && msg.y>650 && msg.y < 685) {
					setfillcolor(WHITE);
					solidrectangle(300, 10, 1400, 900);
					for (int i = 0; i < 13; i++) {
						lines[i].drawLine();
					}
				}
				else if (msg.x > 25 && msg.x < 250 && msg.y>700 && msg.y < 735) {
					setfillcolor(WHITE);
					solidrectangle(300, 10, 1400, 900);
					for (int i = 0; i < 13; i++) {
						lines[i].drawLineBrief();
					}
				}
				else {
					//�ж��Ƿ�����ť
					for (int i = 0; i < 13; i++) {
						if (msg.x > B_line_button_s[i].B_x1 && msg.x < B_line_button_s[i].B_x2 && msg.y>B_line_button_s[i].B_y1 && msg.x < B_line_button_s[i].B_y2) {
							//cout << "���" << B_line_button_s[i].B_name;
							setfillcolor(WHITE);
							solidrectangle(300, 10, 1400, 900);
							lines[i].drawLine();
							continue;
						}
					}
				}


			}

		}
	}
	system("pause");
	return 0;
}