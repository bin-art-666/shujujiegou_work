#include"Line_draw_init.h"

void one_draw_init(Line& one, int one_station_count)
{
	one.stations[0].setStationxy(980, 230, RGB(18, 166, 231));
	one.stations[1].setStationxy(967, 234, RGB(18, 166, 231));
	one.stations[2].setStationxy(933, 244, RGB(18, 166, 231));
	one.stations[3].setStationxy(900, 264, RGB(18, 166, 231));
	one.stations[4].setStationxy(865, 283, RGB(18, 166, 231));
	one.stations[5].setStationxy(830, 300, RGB(18, 166, 231));
	one.stations[6].setStationxy(795, 320,RGB(18, 166, 231));


	one.stations[7].setStationxy(760, 335, RGB(18, 166, 231));	//南京站
	one.stations[8].setStationxy(757,350, RGB(18, 166, 231));
	one.stations[9].setStationxy(755,370, RGB(18, 166, 231));
	one.stations[10].setStationxy(755, 395, RGB(18, 166, 231));	//鼓楼
	one.stations[11].setStationxy(755, 415, RGB(18, 166, 231));
	one.stations[12].setStationxy(755, 435, RGB(18, 166, 231));	//新街口
	one.stations[13].setStationxy(755, 450, RGB(18, 166, 231));

	one.stations[14].setStationxy(755, 470, RGB(18, 166, 231));	//三山街
	one.stations[15].setStationxy(755, 500, RGB(18, 166, 231));
	one.stations[16].setStationxy(755, 525, RGB(18, 166, 231));//安德门

	one.stations[17].setStationxy(770, 540, RGB(18, 166, 231));//这三个要调节字体位置
	one.stations[18].setStationxy(780, 545, RGB(18, 166, 231));
	one.stations[19].setStationxy(790, 550, RGB(18, 166, 231));

	one.stations[20].setStationxy(800, 555, RGB(18, 166, 231));	//南京南站

	one.stations[21].setStationxy(830,568, RGB(18, 166, 231));
	one.stations[22].setStationxy(860,580, RGB(18, 166, 231));
	one.stations[23].setStationxy(890,595, RGB(18, 166, 231));
	one.stations[24].setStationxy(920,608, RGB(18, 166, 231));
	one.stations[25].setStationxy(950,622, RGB(18, 166, 231));
	one.stations[26].setStationxy(980,635, RGB(18, 166, 231));
	one.stations[27].setStationxy(1010,648, RGB(18, 166, 231));

	one.stations[28].setStationxy(1040,662, RGB(18, 166, 231));
	one.stations[29].setStationxy(1070,675, RGB(18, 166, 231));
	one.stations[30].setStationxy(1090,690, RGB(18, 166, 231));

	one.stations[31].setStationxy(1100,700, RGB(18, 166, 231));

	//one.drawLine();
}
void two_draw_init(Line& two, int two_station_count)
{
	two.stations[0].setStationxy(500,605, RGB(217, 53, 25));
	two.stations[1].setStationxy(545,605, RGB(217, 53, 25));
	two.stations[2].setStationxy(590,605, RGB(217, 53, 25));
	two.stations[3].setStationxy(630, 600, RGB(217, 53, 25));

	two.stations[4].setStationxy(665, 555, RGB(217, 53, 25));
	two.stations[5].setStationxy(645, 540, RGB(217, 53, 25));

	two.stations[6].setStationxy(630, 525, RGB(217, 53, 25));	//元通
	two.stations[7].setStationxy(630, 514, RGB(217, 53, 25));
	two.stations[8].setStationxy(630, 503, RGB(217, 53, 25));
	two.stations[9].setStationxy(630, 492, RGB(217, 53, 25));
	two.stations[10].setStationxy(630, 481, RGB(217, 53, 25));

	two.stations[11].setStationxy(630, 470, RGB(217, 53, 25));	//莫愁湖
	two.stations[12].setStationxy(665,442, RGB(217, 53, 25));	//汉中门
	two.stations[13].setStationxy(710,435, RGB(217, 53, 25));
	two.stations[14].setStationxy(755, 435, RGB(217, 53, 25));
	two.stations[15].setStationxy(800, 435, RGB(217, 53, 25));

	two.stations[16].setStationxy(840, 425, RGB(217, 53, 25));
	two.stations[17].setStationxy(880, 415, RGB(217, 53, 25));

	two.stations[18].setStationxy(935, 410, RGB(217, 53, 25));
	two.stations[19].setStationxy(1000,410, RGB(217, 53, 25));	//下马坊

	two.stations[20].setStationxy(1030, 390, RGB(217, 53, 25));
	two.stations[21].setStationxy(1038, 370, RGB(217, 53, 25));
	two.stations[22].setStationxy(1046, 357, RGB(217, 53, 25));
	two.stations[23].setStationxy(1054, 344, RGB(217, 53, 25));
	two.stations[24].setStationxy(1062, 330, RGB(217, 53, 25));
	two.stations[25].setStationxy(1070, 310, RGB(217, 53, 25));

	two.stations[26].setStationxy(1078, 290, RGB(217, 53, 25));
	two.stations[27].setStationxy(1086, 270, RGB(217, 53, 25));
	two.stations[28].setStationxy(1094, 250, RGB(217, 53, 25));
	two.stations[29].setStationxy(1100, 230, RGB(217, 53, 25));

	//two.drawLine();
	
}
void three_draw_init(Line& three, int three_station_count)
{
	three.stations[0].setStationxy(500, 60, RGB(2, 146, 77));
	three.stations[1].setStationxy(560, 110, RGB(2, 146, 77));
	three.stations[2].setStationxy(590, 140, RGB(2, 146, 77));
	three.stations[3].setStationxy(630, 190, RGB(2, 146, 77));

	three.stations[4].setStationxy(650, 210, RGB(2, 146, 77));
	three.stations[5].setStationxy(665, 225, RGB(2, 146, 77));
	three.stations[6].setStationxy(715, 290, RGB(2, 146, 77));	//上元门

	three.stations[7].setStationxy(730, 305, RGB(2, 146, 77));
	three.stations[8].setStationxy(745, 320, RGB(2, 146, 77));
	
	three.stations[9].setStationxy(760, 335, RGB(2, 146, 77));	//南京站
	three.stations[10].setStationxy(785, 350, RGB(2, 146, 77));

	three.stations[11].setStationxy(800, 395, RGB(2, 146, 77));
	three.stations[12].setStationxy(800, 415, RGB(2, 146, 77));
	three.stations[13].setStationxy(800, 435, RGB(2, 146, 77));
	three.stations[14].setStationxy(800, 450, RGB(2, 146, 77));
	three.stations[15].setStationxy(800, 465, RGB(2, 146, 77));
	three.stations[16].setStationxy(800, 480, RGB(2, 146, 77));		//武定门

	three.stations[17].setStationxy(800, 495, RGB(2, 146, 77));
	three.stations[18].setStationxy(800, 510, RGB(2, 146, 77));
	three.stations[19].setStationxy(800, 525, RGB(2, 146, 77));
	three.stations[20].setStationxy(800, 540, RGB(2, 146, 77));
	three.stations[21].setStationxy(800, 555, RGB(2, 146, 77));

	three.stations[22].setStationxy(800, 575, RGB(2, 146, 77));
	three.stations[23].setStationxy(800, 595, RGB(2, 146, 77));
	three.stations[24].setStationxy(800, 615, RGB(2, 146, 77));
	three.stations[25].setStationxy(800, 630, RGB(2, 146, 77));
	three.stations[26].setStationxy(800, 650, RGB(2, 146, 77));
	three.stations[27].setStationxy(800, 670, RGB(2, 146, 77));
	three.stations[28].setStationxy(800, 700, RGB(2, 146, 77));

	//three.drawLine();
}
void four_draw_init(Line& four, int four_station_count)
{
	four.stations[0].setStationxy(620, 380, RGB(127, 109, 161));
	four.stations[1].setStationxy(665, 395, RGB(127, 109, 161));
	four.stations[2].setStationxy(710, 395, RGB(127, 109, 161));
	four.stations[3].setStationxy(755, 395, RGB(127, 109, 161));

	four.stations[4].setStationxy(785, 395, RGB(127, 109, 161));
	four.stations[5].setStationxy(810, 395, RGB(127, 109, 161));

	four.stations[6].setStationxy(835, 395, RGB(127, 109, 161));
	four.stations[7].setStationxy(870, 378, RGB(127, 109, 161));
	four.stations[8].setStationxy(930, 361, RGB(127, 109, 161));

	four.stations[9].setStationxy(970, 344, RGB(127, 109, 161));
	four.stations[10].setStationxy(1010, 344, RGB(127, 109, 161));
	four.stations[11].setStationxy(1054, 344, RGB(127, 109, 161));//金马路

	four.stations[12].setStationxy(1094, 344, RGB(127, 109, 161));
	four.stations[13].setStationxy(1130, 320, RGB(127, 109, 161));

	four.stations[14].setStationxy(1140, 300, RGB(127, 109, 161));
	four.stations[15].setStationxy(1160, 270, RGB(127, 109, 161));
	four.stations[16].setStationxy(1180, 250, RGB(127, 109, 161));
	four.stations[17].setStationxy(1207, 230, RGB(127, 109, 161));


	//four.drawLine();
}
void five_draw_init(Line& five, int five_station_count)
{
	five.stations[0].setStationxy(755, 650, RGB(239, 222, 106));
	five.stations[1].setStationxy(775, 650, RGB(239, 222, 106));
	five.stations[2].setStationxy(800, 650, RGB(239, 222, 106));


	five.stations[3].setStationxy(870, 650, RGB(239, 222, 106));
	five.stations[4].setStationxy(950, 640, RGB(239, 222, 106));

	five.stations[5].setStationxy(980, 635, RGB(239, 222, 106));//竹山路

	five.stations[6].setStationxy(980, 610, RGB(239, 222, 106));
	five.stations[7].setStationxy(980, 590, RGB(239, 222, 106));
	five.stations[8].setStationxy(980, 570, RGB(239, 222, 106));
	five.stations[9].setStationxy(980, 550, RGB(239, 222, 106));
	five.stations[10].setStationxy(980, 530, RGB(239, 222, 106));
	five.stations[11].setStationxy(980, 510, RGB(239, 222, 106));

	five.stations[12].setStationxy(950, 495, RGB(239, 222, 106));
	five.stations[13].setStationxy(920, 480, RGB(239, 222, 106));

	five.stations[14].setStationxy(880, 465, RGB(239, 222, 106));
	five.stations[15].setStationxy(840, 465, RGB(239, 222, 106));

	five.stations[16].setStationxy( 800, 465, RGB(239, 222, 106));	//fuzimiao
	five.stations[17].setStationxy(755, 470, RGB(239, 222, 106));	//shanshanjie

	five.stations[18].setStationxy(710, 453, RGB(239, 222, 106));
	five.stations[19].setStationxy(710, 435, RGB(239, 222, 106));	//shnaghailu

	five.stations[20].setStationxy(710, 415, RGB(239, 222, 106));
	five.stations[21].setStationxy(710, 395, RGB(239, 222, 106));

	five.stations[22].setStationxy(692, 385, RGB(239, 222, 106));
	five.stations[23].setStationxy(674, 375, RGB(239, 222, 106));
	five.stations[24].setStationxy(654, 360, RGB(239, 222, 106));//fujianlu
	five.stations[25].setStationxy(640, 350, RGB(239, 222, 106));

	five.stations[26].setStationxy(625, 340, RGB(239, 222, 106));
	five.stations[27].setStationxy(610, 320, RGB(239, 222, 106));//静海
	five.stations[28].setStationxy(625, 310, RGB(239, 222, 106));
	five.stations[29].setStationxy(640, 300, RGB(239, 222, 106));


	//five.drawLine();
}
void seven_draw_init(Line& seven, int seven_station_count)
{
	seven.stations[0].setStationxy(1030,283, RGB(38, 111, 56));
	seven.stations[1].setStationxy(1000, 283, RGB(38, 111, 56));
	seven.stations[2].setStationxy(965, 283, RGB(38, 111, 56));
	seven.stations[3].setStationxy(940, 283, RGB(38, 111, 56));
	seven.stations[4].setStationxy(915, 283, RGB(38, 111, 56));

	seven.stations[5].setStationxy(890, 283, RGB(38, 111, 56));

	seven.stations[6].setStationxy(865, 283, RGB(38, 111, 56));	//晓庄

	seven.stations[7].setStationxy(800,283 , RGB(38, 111, 56));
	seven.stations[8].setStationxy(730, 305, RGB(38, 111, 56));	//五塘


	seven.stations[9].setStationxy(720, 325, RGB(38, 111, 56));
	seven.stations[10].setStationxy(707, 345, RGB(38, 111, 56));

	seven.stations[11].setStationxy(691, 360, RGB(38, 111, 56));
	seven.stations[12].setStationxy(675, 375, RGB(38, 111, 56));

	seven.stations[13].setStationxy(665, 395, RGB(38, 111, 56));	//huancheng

	seven.stations[14].setStationxy(665, 420, RGB(38, 111, 56));

	seven.stations[15].setStationxy(630, 470, RGB(38, 111, 56));	//莫愁

	seven.stations[16].setStationxy(642, 479, RGB(38, 111, 56));
	seven.stations[17].setStationxy(654, 488, RGB(38, 111, 56));

	seven.stations[18].setStationxy(665, 495, RGB(38, 111, 56));
	seven.stations[19].setStationxy(665, 505, RGB(38, 111, 56));
	seven.stations[20].setStationxy(665, 515, RGB(38, 111, 56));
	seven.stations[21].setStationxy(665, 525, RGB(38, 111, 56));	//

	seven.stations[22].setStationxy(650, 540, RGB(38, 111, 56));

	seven.stations[23].setStationxy(630, 540, RGB(38, 111, 56));	//换乘
	seven.stations[24].setStationxy(630, 570, RGB(38, 111, 56));


	seven.stations[25].setStationxy(630, 600, RGB(38, 111, 56));//换乘
	seven.stations[26].setStationxy(630, 640, RGB(38, 111, 56));

	//seven.drawLine();
}
void ten_draw_init(Line& ten, int ten_station_count)
{
	ten.stations[0].setStationxy(755, 525, RGB(176, 167, 102));
	ten.stations[1].setStationxy(735 ,525, RGB(176, 167, 102));

	ten.stations[2].setStationxy(715, 525, RGB(176, 167, 102));
	ten.stations[3].setStationxy(630, 525, RGB(176, 167, 102));//yauntong
	
	ten.stations[4].setStationxy(570, 515, RGB(176, 167, 102));//奥体

	

	ten.stations[5].setStationxy(570, 460, RGB(176, 167, 102));
	ten.stations[6].setStationxy(560, 435, RGB(176, 167, 102));
	ten.stations[7].setStationxy(520, 435, RGB(176, 167, 102));
	ten.stations[8].setStationxy(480, 435, RGB(176, 167, 102));

	ten.stations[9].setStationxy(440, 435, RGB(176, 167, 102)); 
	ten.stations[10].setStationxy(400, 435, RGB(176, 167, 102));
	ten.stations[11].setStationxy(390, 470, RGB(176, 167, 102));

	ten.stations[12].setStationxy(390, 505, RGB(176, 167, 102));
	ten.stations[13].setStationxy(390, 540, RGB(176, 167, 102));

	//ten.drawLine();
}


void S_one_draw_init(Line& S_one, int S_one_station_count)
{
	S_one.stations[0].setStationxy(835, 725, RGB(76, 187, 180));
	S_one.stations[1].setStationxy(800, 725, RGB(76, 187, 180));
	S_one.stations[2].setStationxy(755, 720, RGB(76, 187, 180));
	S_one.stations[3].setStationxy(755, 700, RGB(76, 187, 180));
	S_one.stations[4].setStationxy(755, 675, RGB(76, 187, 180));
	S_one.stations[5].setStationxy(755, 650, RGB(76, 187, 180));
	S_one.stations[6].setStationxy(755, 625, RGB(76, 187, 180));
	S_one.stations[7].setStationxy(755, 595, RGB(76, 187, 180));
	S_one.stations[8].setStationxy(800, 555, RGB(76, 187, 180));

	//S_one.drawLine();
}
void S_three_draw_init(Line& S_three, int S_three_station_count)
{
	S_three.stations[0].setStationxy( 800, 555, RGB(218, 94, 204));

	S_three.stations[1].setStationxy(775, 555, RGB(218, 94, 204));
	S_three.stations[2].setStationxy(745, 555, RGB(218, 94, 204));
	S_three.stations[3].setStationxy(716, 555, RGB(218, 94, 204));

	S_three.stations[4].setStationxy(698, 555, RGB(218, 94, 204));
	S_three.stations[5].setStationxy(665, 555, RGB(218, 94, 204));
	S_three.stations[6].setStationxy(635,555 , RGB(218, 94, 204));
	S_three.stations[7].setStationxy(605, 565, RGB(218, 94, 204));


	S_three.stations[8].setStationxy(605, 580, RGB(218, 94, 204));
	S_three.stations[9].setStationxy(605, 595, RGB(218, 94, 204));
	S_three.stations[10].setStationxy(605, 615, RGB(218, 94, 204));


	S_three.stations[11].setStationxy(575, 620, RGB(218, 94, 204));
	S_three.stations[12].setStationxy(450, 635, RGB(218, 94, 204));

	S_three.stations[13].setStationxy(450, 670, RGB(218, 94, 204));
	S_three.stations[14].setStationxy(450, 700, RGB(218, 94, 204));
	S_three.stations[15].setStationxy(450, 730, RGB(218, 94, 204));
	S_three.stations[16].setStationxy(450, 760, RGB(218, 94, 204));
	S_three.stations[17].setStationxy(450, 795, RGB(218, 94, 204));
	S_three.stations[18].setStationxy(450, 820, RGB(218, 94, 204));

	//S_three.drawLine();
}
void S_six_draw_init(Line& S_six, int S_six_station_count)
{
	S_six.stations[0].setStationxy(1046, 357, RGB(199, 141, 218));
	S_six.stations[1].setStationxy(1069, 357, RGB(199, 141, 218));
	S_six.stations[2].setStationxy(1092, 357, RGB(199, 141, 218));
	S_six.stations[3].setStationxy(1115, 357, RGB(199, 141, 218));
	S_six.stations[4].setStationxy(1138, 357, RGB(199, 141, 218));
	S_six.stations[5].setStationxy(1161, 357, RGB(199, 141, 218));
	S_six.stations[6].setStationxy(1184, 357, RGB(199, 141, 218));
	S_six.stations[7].setStationxy(1207, 357, RGB(199, 141, 218));


	S_six.stations[8].setStationxy(1230, 377, RGB(199, 141, 218));
	S_six.stations[9].setStationxy(1253, 400, RGB(199, 141, 218));
	S_six.stations[10].setStationxy(1276, 400, RGB(199, 141, 218));
	S_six.stations[11].setStationxy(1300, 400, RGB(199, 141, 218));
	S_six.stations[12].setStationxy(1300, 420, RGB(199, 141, 218));

	//S_six.drawLine();

}
	
void S_seven_draw_init(Line& S_seven, int S_seven_station_count)
{
	S_seven.stations[0].setStationxy(835, 725, RGB(230, 155, 152));
	S_seven.stations[1].setStationxy(870, 725, RGB(230, 155, 152));
	S_seven.stations[2].setStationxy(930, 725, RGB(230, 155, 152));
	S_seven.stations[3].setStationxy(1010, 725, RGB(230, 155, 152));


	S_seven.stations[4].setStationxy(1070, 740, RGB(230, 155, 152));
	S_seven.stations[5].setStationxy(1090, 765, RGB(230, 155, 152));
	S_seven.stations[6].setStationxy(1110, 790, RGB(230, 155, 152));
	S_seven.stations[7].setStationxy(1130, 815, RGB(230, 155, 152));
	S_seven.stations[8].setStationxy(1150, 840, RGB(230, 155, 152));

	//S_seven.drawLine();
}
void S_eight_draw_init(Line& S_eight, int S_eight_station_count)
{
	S_eight.stations[0].setStationxy(620, 250, RGB(238, 160, 85));
	S_eight.stations[1].setStationxy(620, 230, RGB(238, 160, 85));
	S_eight.stations[2].setStationxy(620, 210, RGB(238, 160, 85));
	S_eight.stations[3].setStationxy(630, 190, RGB(238, 160, 85));

	S_eight.stations[4].setStationxy(672, 125, RGB(238, 160, 85));

	S_eight.stations[5].setStationxy(715, 60, RGB(238, 160, 85));
	S_eight.stations[6].setStationxy(785, 60, RGB(238, 160, 85));
	S_eight.stations[7].setStationxy(855, 60, RGB(238, 160, 85));
	S_eight.stations[8].setStationxy(905, 60, RGB(238, 160, 85));
	S_eight.stations[9].setStationxy(955, 60, RGB(238, 160, 85));

	S_eight.stations[10].setStationxy(980, 60, RGB(238, 160, 85));
	S_eight.stations[11].setStationxy(1010, 60, RGB(238, 160, 85));
	S_eight.stations[12].setStationxy(1040, 60, RGB(238, 160, 85));

	S_eight.stations[13].setStationxy(1075, 50, RGB(238, 160, 85));
	S_eight.stations[14].setStationxy(1110, 40, RGB(238, 160, 85));
	S_eight.stations[15].setStationxy(1145, 40, RGB(238, 160, 85));
	S_eight.stations[16].setStationxy(1170, 40, RGB(238, 160, 85));
	S_eight.stations[17].setStationxy(1195, 40, RGB(238, 160, 85));
	S_eight.stations[18].setStationxy(1230, 40, RGB(238, 160, 85));

	//S_eight.drawLine();

}
void S_nine_idraw_nit(Line& S_nine, int S_nine_station_count)
{
	S_nine.stations[0].setStationxy(755, 720, RGB(250, 188, 41));
	S_nine.stations[1].setStationxy(755, 740, RGB(250, 188, 41));
	S_nine.stations[2].setStationxy(755, 760, RGB(250, 188, 41));
	S_nine.stations[3].setStationxy(755, 780, RGB(250, 188, 41));
	S_nine.stations[4].setStationxy(755, 800, RGB(250, 188, 41));
	S_nine.stations[5].setStationxy(755, 820, RGB(250, 188, 41));

	//S_nine.drawLine();
}