#include"Line_init.h"
#include<iostream>

using namespace std;

//��ʼ��������·
void one_init(Line& one, int one_station_count)
{
	one.stations[0].setStation("�����޴�����", "1����", 100100,false,"1");
	one.stations[1].setStation("�ʶ�ɽ", "1����", 100101,false,"1");
	one.stations[2].setStation("�����", "1����", 100102,false,"1");
	one.stations[3].setStation("������", "1����", 100103,false,"1");
	one.stations[4].setStation("��ׯ", "1����", 100104,true,"1");

	one.stations[5].setStation("������", "1����", 100105,false,"1");
	one.stations[6].setStation("��ɽ����԰", "1����", 100106,false,"1");
	one.stations[7].setStation("�Ͼ�վ", "1����", 100107,true,"1");
	one.stations[8].setStation("��ģ����·", "1����", 100108,false,"1");
	one.stations[9].setStation("������", "1����", 100109,false,"1");

	one.stations[10].setStation("��¥", "1����", 100110, true,"1");
	one.stations[11].setStation("�齭·", "1����", 100111, false,"1");
	one.stations[12].setStation("�½ֿ�", "1����", 100112,true,"1");
	one.stations[13].setStation("�Ÿ�԰", "1����", 100113, false,"1");
	one.stations[14].setStation("��ɽ��", "1����", 100114,true,"1");

	one.stations[15].setStation("�л���", "1����", 100115, false,"1");
	one.stations[16].setStation("������", "1����", 100116,true,"1");
	one.stations[17].setStation("��¡��", "1����", 100117, false,"1");
	one.stations[18].setStation("������", "1����", 100118, false,"1");
	one.stations[19].setStation("������", "1����", 100119, false,"1");

	one.stations[20].setStation("�Ͼ���վ", "1����", 100120,true,"1");
	one.stations[21].setStation("˫�����", "1����", 100121, false,"1");
	one.stations[22].setStation("�Ӷ���", "1����", 100122, false,"1");
	one.stations[23].setStation("ʤ̫·", "1����", 100123, false,"1");
	one.stations[24].setStation("�ټҺ�", "1����", 100124, false,"1");

	one.stations[25].setStation("С����", "1����", 100125, false,"1");
	one.stations[26].setStation("��ɽ·", "1����", 100126,true,"1");
	one.stations[27].setStation("��ӡ���", "1����", 100127, false,"1");
	one.stations[28].setStation("���ߴ��", "1����", 100128, false,"1");
	one.stations[29].setStation("��ҽ�󡤽��վ�óѧԺ", "1����", 100129, false,"1");

	one.stations[30].setStation("�Ͼ���Ժ", "1����", 100130, false,"1");
	one.stations[31].setStation("�й�ҩ�ƴ�ѧ", "1����", 100131, false,"1");
}

void two_init(Line& two, int two_station_count)
{
	//��ʼ��������
	two.stations[0].setStation("����", "2����", 100200, false,"2");
	two.stations[1].setStation("�챣��", "2����", 100201, false,"2");
	two.stations[2].setStation("������", "2����", 100202, false,"2");
	two.stations[3].setStation("����·", "2����", 100203,true,"2");
	two.stations[4].setStation("���ŷ�", "2����", 100204, true,"2");

	two.stations[5].setStation("������", "2����", 100205, false,"2");
	two.stations[6].setStation("Ԫͨ", "2����", 100206,true, "2");
	two.stations[7].setStation("���嶫", "2����", 100207, false, "2");
	two.stations[8].setStation("��¡���", "2����", 100208, false, "2");
	two.stations[9].setStation("�����Ŵ��", "2����", 100209, false, "2");

	two.stations[10].setStation("�ƽ�·", "2����", 100210, false, "2");
	two.stations[11].setStation("Ī��·", "2����", 100211,true, "2");
	two.stations[12].setStation("������", "2����", 100212, false, "2");
	two.stations[13].setStation("�Ϻ�·", "2����", 100213, true, "2");
	two.stations[14].setStation("�½ֿ�", "2����", 100214,true, "2");

	two.stations[15].setStation("���й�", "2����", 100215,true, "2");
	two.stations[16].setStation("������", "2����", 100216, false, "2");
	two.stations[17].setStation("���ʹ�", "2����", 100217, false, "2");
	two.stations[18].setStation("��ޣ԰", "2����", 100218, false, "2");
	two.stations[19].setStation("����", "2����", 100219, false, "2");

	two.stations[20].setStation("Т����", "2����", 100220, false, "2");
	two.stations[21].setStation("�����", "2����", 100221, false, "2");
	two.stations[22].setStation("��Ⱥ", "2����", 100222,true, "2");
	two.stations[23].setStation("����·", "2����", 100223, true, "2");
	two.stations[24].setStation("�ɺ���", "2����", 100224, false, "2");

	two.stations[25].setStation("ѧ��·", "2����", 100225, false, "2");
	two.stations[26].setStation("��������", "2����", 100226, false, "2");
	two.stations[27].setStation("��ɽ��԰", "2����", 100227, false, "2");
	two.stations[28].setStation("�ϴ�����У��", "2����", 100228, false, "2");
	two.stations[29].setStation("����·", "2����", 100229, false, "2");
}

void three_init(Line& three, int three_station_count)
{
	//��ʼ��������
	three.stations[0].setStation("�ֳ�", "3����", 100300, false, "3");
	three.stations[1].setStation("�ǻ�·", "3����", 100301, false, "3");
	three.stations[2].setStation("�������ѧԺ", "3����", 100302, false, "3");
	three.stations[3].setStation("̩��·", "3����", 100303,true, "3");
	three.stations[4].setStation("�����", "3����", 100304, false, "3");

	three.stations[5].setStation("���ݶ�·", "3����", 100305, false, "3");
	three.stations[6].setStation("��Ԫ��", "3����", 100306, false, "3");
	three.stations[7].setStation("�����㳡", "3����", 100307,true, "3");
	three.stations[8].setStation("С��", "3����", 100308, false, "3");
	three.stations[9].setStation("�Ͼ�վ", "3����", 100309,true, "3");

	three.stations[10].setStation("�Ͼ���ҵ��ѧ����ׯ", "3����", 100310, false, "3");
	three.stations[11].setStation("������", "3����", 100311,true, "3");
	three.stations[12].setStation("����", "3����", 100312, false, "3");
	three.stations[13].setStation("���й�", "3����", 100313,true, "3");
	three.stations[14].setStation("������", "3����", 100314, false, "3");

	three.stations[15].setStation("������", "3����", 100315,true, "3");
	three.stations[16].setStation("�䶨��", "3����", 100316, false, "3");
	three.stations[17].setStation("�껨��", "3����", 100317, false, "3");
	three.stations[18].setStation("������", "3����", 100318, false, "3");
	three.stations[19].setStation("����·", "3����", 100319, false, "3");

	three.stations[20].setStation("�����㳡", "3����", 100320, false, "3");
	three.stations[21].setStation("�Ͼ���վ", "3����", 100321,true, "3");
	three.stations[22].setStation("���˴��", "3����", 100322, false, "3");
	three.stations[23].setStation("ʤ̫��·", "3����", 100323, false, "3");
	three.stations[24].setStation("��Ԫ��·", "3����", 100324, false, "3");

	three.stations[25].setStation("������", "3����", 100325, false, "3");
	three.stations[26].setStation("���Ŵ��", "3����", 100326,true, "3");
	three.stations[27].setStation("���������У��", "3����", 100327, false, "3");
	three.stations[28].setStation("���ܶ�·", "3����", 100328, false, "3");
}

void four_init(Line& four, int four_station_count)
{
	four.stations[0].setStation("����", "4����", 100400, false, "4");
	four.stations[1].setStation("�ݳ���", "4����", 100401, true, "4");
	four.stations[2].setStation("����·", "4����", 100402,true, "4");
	four.stations[3].setStation("��¥", "4����", 100403,true, "4");
	four.stations[4].setStation("������", "4����", 100404,true, "4");

	four.stations[5].setStation("�Ż�ɽ", "4����", 100405, false, "4");
	four.stations[6].setStation("���Ӵ�", "4����", 100406, false, "4");
	four.stations[7].setStation("������", "4����", 100407, false, "4");
	four.stations[8].setStation("������", "4����", 100408, false, "4");
	four.stations[9].setStation("�۱�ɽ", "4����", 100409, false, "4");

	four.stations[10].setStation("��ׯ�������ܲ�", "4����", 100410, false, "4");
	four.stations[11].setStation("����·", "4����", 100411,true, "4");
	four.stations[12].setStation("��ͨ·", "4����", 100412, false, "4");
	four.stations[13].setStation("��ɽ", "4����", 100413, false, "4");
	four.stations[14].setStation("����", "4����", 100414, false, "4");

	four.stations[15].setStation("�ϱ�", "4����", 100415, false, "4");
	four.stations[16].setStation("��������", "4����", 100416, false, "4");
	four.stations[17].setStation("���ֺ�", "4����", 100417, false, "4");
}

void five_init(Line& five, int five_station_count)
{
	five.stations[0].setStation("��ӡ���", "5����", 100500,true, "5");
	five.stations[1].setStation("��������", "5����", 100501, false, "5");
	five.stations[2].setStation("���Ŵ��", "5����", 100502,true, "5");
	five.stations[3].setStation("ǰׯ", "5����", 100503, false, "5");
	five.stations[4].setStation("����·", "5����", 100504, false, "5");

	five.stations[5].setStation("��ɽ·", "5����", 100505,true, "5");
	five.stations[6].setStation("��ͤ·", "5����", 100506, false, "5");
	five.stations[7].setStation("��ɽ", "5����", 100507, false, "5");
	five.stations[8].setStation("�ľ�·", "5����", 100508, false, "5");
	five.stations[9].setStation("��ɽ����԰", "5����", 100509, false, "5");

	five.stations[10].setStation("���Ӫ", "5����", 100510, false, "5");
	five.stations[11].setStation("��У��", "5����", 100511, false, "5");
	five.stations[12].setStation("������", "5����", 100512, false, "5");
	five.stations[13].setStation("ʯ�ſ�", "5����", 100513, false, "5");
	five.stations[14].setStation("�⻪��", "5����", 100514, false, "5");

	five.stations[15].setStation("ͨ����", "5����", 100515, false, "5");
	five.stations[16].setStation("������", "5����", 100516,true, "5");
	five.stations[17].setStation("��ɽ��", "5����", 100517,true, "5");
	five.stations[18].setStation("���칬", "5����", 100518, false, "5");
	five.stations[19].setStation("�Ϻ�·", "5����", 100519,true, "5");

	five.stations[20].setStation("��̨ɽ", "5����", 100520, false, "5");
	five.stations[21].setStation("����·", "5����", 100521,true, "5");
	five.stations[22].setStation("�ഺ�㳡", "5����", 100522, false, "5");
	five.stations[23].setStation("����", "5����", 100523, false, "5");
	five.stations[24].setStation("����·", "5����", 100524,true, "5");

	five.stations[25].setStation("�β���", "5����", 100525, false, "5");
	five.stations[26].setStation("�¹�", "5����", 100526, false, "5");
	five.stations[27].setStation("������", "5����", 100527, false, "5");
	five.stations[28].setStation("�Ͼ���վ", "5����", 100528, false, "5");
	five.stations[29].setStation("����Ӫ", "5����", 100529, false, "5");
}

void seven_init(Line& seven, int seven_station_count)
{
	seven.stations[0].setStation("����·", "7����", 100700, false, "7");
	seven.stations[1].setStation("Ң����", "7����", 100701, false, "7");
	seven.stations[2].setStation("Ң���´�", "7����", 100702, false, "7");
	seven.stations[3].setStation("����ׯ��", "7����", 100703, false, "7");
	seven.stations[4].setStation("����ׯ", "7����", 100704, false, "7");

	seven.stations[5].setStation("����", "7����", 100705, false, "7");
	seven.stations[6].setStation("��ׯ", "7����", 100706,true, "7");
	seven.stations[7].setStation("Ļ��ɽ", "7����", 100707, false, "7");
	seven.stations[8].setStation("�����㳡", "7����", 100708,true, "7");
	seven.stations[9].setStation("Ļ����·", "7����", 100709, false, "7");

	seven.stations[10].setStation("�Ӹ�·", "7����", 100710, false, "7");
	seven.stations[11].setStation("����·", "7����", 100711,true, "7");
	seven.stations[12].setStation("��ƽ��", "7����", 100712, false, "7");
	seven.stations[13].setStation("�ݳ���", "7����", 100713, true, "7");
	seven.stations[14].setStation("����ɽ", "7����", 100714, false, "7");

	seven.stations[15].setStation("Ī���", "7����", 100715,true, "7");
	seven.stations[16].setStation("��ʿ��ͤ", "7����", 100716, false, "7");
	seven.stations[17].setStation("�Ϻ�", "7����", 100717, false, "7");
	seven.stations[18].setStation("Ӧ����", "7����", 100718, false, "7");
	seven.stations[19].setStation("�ζ���ֶ�", "7����", 100719, false, "7");

	seven.stations[20].setStation("�³ǿƼ�԰", "7����", 100720, false, "7");
	seven.stations[21].setStation("��ʤ", "7����", 100721,true, "7");
	seven.stations[22].setStation("���꽭����", "7����", 100722, false, "7");
	seven.stations[23].setStation("����·", "7����", 100723,true, "7");
	seven.stations[24].setStation("̫��·", "7����", 100724, false, "7");

	seven.stations[25].setStation("����·", "7����", 100725, true, "7");
	seven.stations[26].setStation("������", "7����", 100726, false, "7");
}

void ten_init(Line& ten, int ten_station_count)
{
	ten.stations[0].setStation("������", "10����", 101000,true, "10");
	ten.stations[1].setStation("С��", "10����", 101001, false, "10");
	ten.stations[2].setStation("��ʤ", "10����", 101002,true, "10");
	ten.stations[3].setStation("Ԫͨ", "10����", 101003,true, "10");
	ten.stations[4].setStation("��������", "10����", 101004, false, "10");

	ten.stations[5].setStation("�ζ����", "10����", 101005, false, "10");
	ten.stations[6].setStation("�̲�԰", "10����", 101006, false, "10");
	ten.stations[7].setStation("������", "10����", 101007, false, "10");
	ten.stations[8].setStation("�ٽ������������԰", "10����", 101008, false, "10");
	ten.stations[9].setStation("�ֿ�����", "10����", 101009, false, "10");

	ten.stations[10].setStation("�Ͼ���ҵ��ѧ", "10����", 101010, false, "10");
	ten.stations[11].setStation("����·", "10����", 101011, false, "10");
	ten.stations[12].setStation("�ĵ�·", "10����", 101012, false, "10");
	ten.stations[13].setStation("��ɽ·", "10����", 101013, false, "10");
}

void S_one_init(Line& S_one, int S_one_station_count)
{
	S_one.stations[0].setStation("�ո��³ǽ���վ", "S1����",110100,true, "S1");
	S_one.stations[1].setStation("»�ڻ���", "S1����", 110101, false, "S1");
	S_one.stations[2].setStation("����·��", "S1����", 110102,true, "S1");
	S_one.stations[3].setStation("����·��", "S1����", 110103, false, "S1");
	S_one.stations[4].setStation("������·", "S1����", 110104, false, "S1");

	S_one.stations[5].setStation("��ӡ���", "S1����", 110105,true, "S1");
	S_one.stations[6].setStation("�Ӻ���ѧ�������·", "S1����", 110106, false, "S1");
	S_one.stations[7].setStation("����ɽ", "S1����", 110107, false, "S1");
	S_one.stations[8].setStation("�Ͼ���վ", "S1����", 110108,true, "S1");
}

void S_three_init(Line& S_three, int S_three_station_count)
{
	S_three.stations[0].setStation("�Ͼ���վ", "S3����", 110300,true, "S3");
	S_three.stations[1].setStation("����԰", "S3����", 110301, false, "S3");
	S_three.stations[2].setStation("������", "S3����", 110302, false, "S3");
	S_three.stations[3].setStation("����·", "S3����", 110303, false, "S3");
	S_three.stations[4].setStation("����", "S3����", 110304, false, "S3");

	S_three.stations[5].setStation("�ͷ���", "S3����", 110305,true, "S3");
	S_three.stations[6].setStation("����·", "S3����", 110306,true, "S3");
	S_three.stations[7].setStation("ƽ�����", "S3����", 110307, false, "S3");
	S_three.stations[8].setStation("����", "S3����", 110308, false, "S3");
	S_three.stations[9].setStation("����·", "S3����", 110309, false, "S3");
	S_three.stations[9].setStation("����·", "S3����", 110309, false, "S3");

	S_three.stations[10].setStation("�챣", "S3����", 110310, false, "S3");
	S_three.stations[11].setStation("����", "S3����", 110311, false, "S3");
	S_three.stations[12].setStation("������", "S3����", 110312, false, "S3");
	S_three.stations[13].setStation("������", "S3����", 110313, false, "S3");
	S_three.stations[14].setStation("˫��", "S3����", 110314, false, "S3");
	S_three.stations[15].setStation("ʯ�Ӻ�", "S3����", 110315, false, "S3");

	S_three.stations[16].setStation("�����³�", "S3����", 110316, false, "S3");
	S_three.stations[17].setStation("��ɽ", "S3����", 110317, false, "S3");
	S_three.stations[18].setStation("�߼ҳ�", "S3����", 110318, false, "S3");
}

void S_six_init(Line& S_six, int S_six_station_count)
{
	S_six.stations[0].setStation("��Ⱥ", "S6����", 110600,true, "S6");
	S_six.stations[1].setStation("��ˮ��", "S6����", 110601, false, "S6");
	S_six.stations[2].setStation("������", "S6����", 110602, false, "S6");
	S_six.stations[3].setStation("����С��", "S6����", 110603, false, "S6");
	S_six.stations[4].setStation("��Ȫ", "S6����", 110604, false, "S6");

	S_six.stations[5].setStation("�Ͼ�Գ�˶�", "S6����", 110605, false, "S6");
	S_six.stations[6].setStation("��ɽ", "S6����", 110606, false, "S6");
	S_six.stations[7].setStation("Ȫ�����", "S6����", 110607, false, "S6");
	S_six.stations[8].setStation("��÷", "S6����", 110608, false, "S6");
	S_six.stations[9].setStation("ͯ����", "S6����", 110609, false, "S6");

	S_six.stations[10].setStation("����", "S6����", 110610, false, "S6");
	S_six.stations[11].setStation("����", "S6����", 110611, false, "S6");
	S_six.stations[12].setStation("����", "S6����", 110612, false, "S6");
}

void S_seven_init(Line& S_seven, int S_seven_station_count)
{
	S_seven.stations[0].setStation("�ո��³ǽ���վ", "S7����", 110700,true, "S7");
	S_seven.stations[1].setStation("����", "S7����", 110701, false, "S7");
	S_seven.stations[2].setStation("�ո��³���ˮվ", "S7����", 110702, false, "S7");
	S_seven.stations[3].setStation("Ⱥ��", "S7����", 110703, false, "S7");
	S_seven.stations[4].setStation("������", "S7����", 110704, false, "S7");
	
	S_seven.stations[5].setStation("��ˮ", "S7����", 110705, false, "S7");
	S_seven.stations[6].setStation("��ɽ��", "S7����", 110706, false, "S7");
	S_seven.stations[7].setStation("��ׯ", "S7����", 110707, false, "S7");
	S_seven.stations[8].setStation("����ɽ", "S7����", 110708, false, "S7");
}

void S_eight_init(Line& S_eight, int S_eight_station_count)
{
	S_eight.stations[0].setStation("�������ű�", "S8����", 110800, false, "S8");
	S_eight.stations[1].setStation("ë�ĳ�·", "S8����", 110801, false, "S8");
	S_eight.stations[2].setStation("̩ɽ�´�", "S8����", 110802, false, "S8");
	S_eight.stations[3].setStation("̩��·", "S8����", 110803,true, "S8");
	S_eight.stations[4].setStation("���¿�����", "S8����", 110804, false, "S8");

	S_eight.stations[5].setStation("��Ϣ���̴�ѧ", "S8����", 110805, false, "S8");
	S_eight.stations[6].setStation("ж�׵�", "S8����", 110806, false, "S8");
	S_eight.stations[7].setStation("��", "S8����", 110807, false, "S8");
	S_eight.stations[8].setStation("����", "S8����", 110808, false, "S8");
	S_eight.stations[9].setStation("��«", "S8����", 110809, false, "S8");

	S_eight.stations[10].setStation("����԰", "S8����", 110810, false, "S8");
	S_eight.stations[11].setStation("���Ϳ�����", "S8����", 110811, false, "S8");
	S_eight.stations[12].setStation("����", "S8����", 110812, false, "S8");
	S_eight.stations[13].setStation("����", "S8����", 110813, false, "S8");
	S_eight.stations[14].setStation("���ɽ��԰", "S8����", 110814, false, "S8");

	S_eight.stations[15].setStation("���ݹ㳡", "S8����", 110815, false, "S8");
	S_eight.stations[16].setStation("����", "S8����", 110816, false, "S8");
	S_eight.stations[17].setStation("�˰���", "S8����", 110817, false, "S8");
	S_eight.stations[18].setStation("��ţ��", "S8����", 110818, false, "S8");
}

void S_nine_init(Line& S_nine, int S_nine_station_count)
{
	S_nine.stations[0].setStation("����·��", "S9����", 110900,true, "S9");
	S_nine.stations[1].setStation("ͭɽ", "S9����", 110901, false, "S9");
	S_nine.stations[2].setStation("ʯ��", "S9����", 110902, false, "S9");
	S_nine.stations[3].setStation("����", "S9����", 110903, false, "S9");
	S_nine.stations[4].setStation("�Ž���", "S9����", 110904, false, "S9");

	S_nine.stations[5].setStation("�ߴ�", "S9����", 110905, false, "S9");
}