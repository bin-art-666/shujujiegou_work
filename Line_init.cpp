#include"Line_init.h"
#include<iostream>

using namespace std;

//初始化地铁线路
void one_init(Line& one, int one_station_count)
{
	one.stations[0].setStation("八卦洲大桥南", "1号线", 100100,false,"1");
	one.stations[1].setStation("笆斗山", "1号线", 100101,false,"1");
	one.stations[2].setStation("燕子矶", "1号线", 100102,false,"1");
	one.stations[3].setStation("吉祥庵", "1号线", 100103,false,"1");
	one.stations[4].setStation("晓庄", "1号线", 100104,true,"1");

	one.stations[5].setStation("迈皋桥", "1号线", 100105,false,"1");
	one.stations[6].setStation("红山动物园", "1号线", 100106,false,"1");
	one.stations[7].setStation("南京站", "1号线", 100107,true,"1");
	one.stations[8].setStation("新模范马路", "1号线", 100108,false,"1");
	one.stations[9].setStation("玄武门", "1号线", 100109,false,"1");

	one.stations[10].setStation("鼓楼", "1号线", 100110, true,"1");
	one.stations[11].setStation("珠江路", "1号线", 100111, false,"1");
	one.stations[12].setStation("新街口", "1号线", 100112,true,"1");
	one.stations[13].setStation("张府园", "1号线", 100113, false,"1");
	one.stations[14].setStation("三山街", "1号线", 100114,true,"1");

	one.stations[15].setStation("中华门", "1号线", 100115, false,"1");
	one.stations[16].setStation("安德门", "1号线", 100116,true,"1");
	one.stations[17].setStation("天隆寺", "1号线", 100117, false,"1");
	one.stations[18].setStation("软件大道", "1号线", 100118, false,"1");
	one.stations[19].setStation("花神庙", "1号线", 100119, false,"1");

	one.stations[20].setStation("南京南站", "1号线", 100120,true,"1");
	one.stations[21].setStation("双龙大道", "1号线", 100121, false,"1");
	one.stations[22].setStation("河定桥", "1号线", 100122, false,"1");
	one.stations[23].setStation("胜太路", "1号线", 100123, false,"1");
	one.stations[24].setStation("百家湖", "1号线", 100124, false,"1");

	one.stations[25].setStation("小龙湾", "1号线", 100125, false,"1");
	one.stations[26].setStation("竹山路", "1号线", 100126,true,"1");
	one.stations[27].setStation("天印大道", "1号线", 100127, false,"1");
	one.stations[28].setStation("龙眠大道", "1号线", 100128, false,"1");
	one.stations[29].setStation("南医大·江苏经贸学院", "1号线", 100129, false,"1");

	one.stations[30].setStation("南京交院", "1号线", 100130, false,"1");
	one.stations[31].setStation("中国药科大学", "1号线", 100131, false,"1");
}

void two_init(Line& two, int two_station_count)
{
	//初始化二号线
	two.stations[0].setStation("鱼嘴", "2号线", 100200, false,"2");
	two.stations[1].setStation("天保街", "2号线", 100201, false,"2");
	two.stations[2].setStation("青莲街", "2号线", 100202, false,"2");
	two.stations[3].setStation("螺塘路", "2号线", 100203,true,"2");
	two.stations[4].setStation("油桥坊", "2号线", 100204, true,"2");

	two.stations[5].setStation("雨润大道", "2号线", 100205, false,"2");
	two.stations[6].setStation("元通", "2号线", 100206,true, "2");
	two.stations[7].setStation("奥体东", "2号线", 100207, false, "2");
	two.stations[8].setStation("兴隆大街", "2号线", 100208, false, "2");
	two.stations[9].setStation("集庆门大街", "2号线", 100209, false, "2");

	two.stations[10].setStation("云锦路", "2号线", 100210, false, "2");
	two.stations[11].setStation("莫愁路", "2号线", 100211,true, "2");
	two.stations[12].setStation("汉中门", "2号线", 100212, false, "2");
	two.stations[13].setStation("上海路", "2号线", 100213, true, "2");
	two.stations[14].setStation("新街口", "2号线", 100214,true, "2");

	two.stations[15].setStation("大行宫", "2号线", 100215,true, "2");
	two.stations[16].setStation("西安门", "2号线", 100216, false, "2");
	two.stations[17].setStation("明故宫", "2号线", 100217, false, "2");
	two.stations[18].setStation("苜蓿园", "2号线", 100218, false, "2");
	two.stations[19].setStation("下马坊", "2号线", 100219, false, "2");

	two.stations[20].setStation("孝陵卫", "2号线", 100220, false, "2");
	two.stations[21].setStation("钟灵街", "2号线", 100221, false, "2");
	two.stations[22].setStation("马群", "2号线", 100222,true, "2");
	two.stations[23].setStation("金马路", "2号线", 100223, true, "2");
	two.stations[24].setStation("仙鹤门", "2号线", 100224, false, "2");

	two.stations[25].setStation("学则路", "2号线", 100225, false, "2");
	two.stations[26].setStation("仙林中心", "2号线", 100226, false, "2");
	two.stations[27].setStation("羊山公园", "2号线", 100227, false, "2");
	two.stations[28].setStation("南大仙林校区", "2号线", 100228, false, "2");
	two.stations[29].setStation("经天路", "2号线", 100229, false, "2");
}

void three_init(Line& three, int three_station_count)
{
	//初始化三号线
	three.stations[0].setStation("林场", "3号线", 100300, false, "3");
	three.stations[1].setStation("星火路", "3号线", 100301, false, "3");
	three.stations[2].setStation("东大成贤学院", "3号线", 100302, false, "3");
	three.stations[3].setStation("泰冯路", "3号线", 100303,true, "3");
	three.stations[4].setStation("天润城", "3号线", 100304, false, "3");

	three.stations[5].setStation("柳州东路", "3号线", 100305, false, "3");
	three.stations[6].setStation("上元门", "3号线", 100306, false, "3");
	three.stations[7].setStation("五塘广场", "3号线", 100307,true, "3");
	three.stations[8].setStation("小市", "3号线", 100308, false, "3");
	three.stations[9].setStation("南京站", "3号线", 100309,true, "3");

	three.stations[10].setStation("南京林业大学·新庄", "3号线", 100310, false, "3");
	three.stations[11].setStation("鸡鸣寺", "3号线", 100311,true, "3");
	three.stations[12].setStation("浮桥", "3号线", 100312, false, "3");
	three.stations[13].setStation("大行宫", "3号线", 100313,true, "3");
	three.stations[14].setStation("常府街", "3号线", 100314, false, "3");

	three.stations[15].setStation("夫子庙", "3号线", 100315,true, "3");
	three.stations[16].setStation("武定门", "3号线", 100316, false, "3");
	three.stations[17].setStation("雨花门", "3号线", 100317, false, "3");
	three.stations[18].setStation("卡子门", "3号线", 100318, false, "3");
	three.stations[19].setStation("大明路", "3号线", 100319, false, "3");

	three.stations[20].setStation("明发广场", "3号线", 100320, false, "3");
	three.stations[21].setStation("南京南站", "3号线", 100321,true, "3");
	three.stations[22].setStation("宏运大道", "3号线", 100322, false, "3");
	three.stations[23].setStation("胜太西路", "3号线", 100323, false, "3");
	three.stations[24].setStation("天元西路", "3号线", 100324, false, "3");

	three.stations[25].setStation("九龙湖", "3号线", 100325, false, "3");
	three.stations[26].setStation("诚信大道", "3号线", 100326,true, "3");
	three.stations[27].setStation("东大九龙湖校区", "3号线", 100327, false, "3");
	three.stations[28].setStation("秣周东路", "3号线", 100328, false, "3");
}

void four_init(Line& four, int four_station_count)
{
	four.stations[0].setStation("龙江", "4号线", 100400, false, "4");
	four.stations[1].setStation("草场门", "4号线", 100401, true, "4");
	four.stations[2].setStation("云南路", "4号线", 100402,true, "4");
	four.stations[3].setStation("鼓楼", "4号线", 100403,true, "4");
	four.stations[4].setStation("鸡鸣寺", "4号线", 100404,true, "4");

	four.stations[5].setStation("九华山", "4号线", 100405, false, "4");
	four.stations[6].setStation("岗子村", "4号线", 100406, false, "4");
	four.stations[7].setStation("蒋王庙", "4号线", 100407, false, "4");
	four.stations[8].setStation("王家湾", "4号线", 100408, false, "4");
	four.stations[9].setStation("聚宝山", "4号线", 100409, false, "4");

	four.stations[10].setStation("徐庄·苏宁总部", "4号线", 100410, false, "4");
	four.stations[11].setStation("金马路", "4号线", 100411,true, "4");
	four.stations[12].setStation("汇通路", "4号线", 100412, false, "4");
	four.stations[13].setStation("灵山", "4号线", 100413, false, "4");
	four.stations[14].setStation("东流", "4号线", 100414, false, "4");

	four.stations[15].setStation("孟北", "4号线", 100415, false, "4");
	four.stations[16].setStation("西岗桦墅", "4号线", 100416, false, "4");
	four.stations[17].setStation("仙林湖", "4号线", 100417, false, "4");
}

void five_init(Line& five, int five_station_count)
{
	five.stations[0].setStation("吉印大道", "5号线", 100500,true, "5");
	five.stations[1].setStation("九龙湖南", "5号线", 100501, false, "5");
	five.stations[2].setStation("诚信大道", "5号线", 100502,true, "5");
	five.stations[3].setStation("前庄", "5号线", 100503, false, "5");
	five.stations[4].setStation("科宁路", "5号线", 100504, false, "5");

	five.stations[5].setStation("竹山路", "5号线", 100505,true, "5");
	five.stations[6].setStation("新亭路", "5号线", 100506, false, "5");
	five.stations[7].setStation("东山", "5号线", 100507, false, "5");
	five.stations[8].setStation("文靖路", "5号线", 100508, false, "5");
	five.stations[9].setStation("东山香樟园", "5号线", 100509, false, "5");

	five.stations[10].setStation("神机营", "5号线", 100510, false, "5");
	five.stations[11].setStation("大校场", "5号线", 100511, false, "5");
	five.stations[12].setStation("七桥瓮", "5号线", 100512, false, "5");
	five.stations[13].setStation("石门坎", "5号线", 100513, false, "5");
	five.stations[14].setStation("光华门", "5号线", 100514, false, "5");

	five.stations[15].setStation("通济门", "5号线", 100515, false, "5");
	five.stations[16].setStation("夫子庙", "5号线", 100516,true, "5");
	five.stations[17].setStation("三山街", "5号线", 100517,true, "5");
	five.stations[18].setStation("朝天宫", "5号线", 100518, false, "5");
	five.stations[19].setStation("上海路", "5号线", 100519,true, "5");

	five.stations[20].setStation("五台山", "5号线", 100520, false, "5");
	five.stations[21].setStation("云南路", "5号线", 100521,true, "5");
	five.stations[22].setStation("青春广场", "5号线", 100522, false, "5");
	five.stations[23].setStation("虹桥", "5号线", 100523, false, "5");
	five.stations[24].setStation("福建路", "5号线", 100524,true, "5");

	five.stations[25].setStation("盐仓桥", "5号线", 100525, false, "5");
	five.stations[26].setStation("下关", "5号线", 100526, false, "5");
	five.stations[27].setStation("静海寺", "5号线", 100527, false, "5");
	five.stations[28].setStation("南京西站", "5号线", 100528, false, "5");
	five.stations[29].setStation("方家营", "5号线", 100529, false, "5");
}

void seven_init(Line& seven, int seven_station_count)
{
	seven.stations[0].setStation("仙新路", "7号线", 100700, false, "7");
	seven.stations[1].setStation("尧化门", "7号线", 100701, false, "7");
	seven.stations[2].setStation("尧化新村", "7号线", 100702, false, "7");
	seven.stations[3].setStation("丁家庄南", "7号线", 100703, false, "7");
	seven.stations[4].setStation("丁家庄", "7号线", 100704, false, "7");

	seven.stations[5].setStation("万寿", "7号线", 100705, false, "7");
	seven.stations[6].setStation("晓庄", "7号线", 100706,true, "7");
	seven.stations[7].setStation("幕府山", "7号线", 100707, false, "7");
	seven.stations[8].setStation("五塘广场", "7号线", 100708,true, "7");
	seven.stations[9].setStation("幕府西路", "7号线", 100709, false, "7");

	seven.stations[10].setStation("钟阜路", "7号线", 100710, false, "7");
	seven.stations[11].setStation("福建路", "7号线", 100711,true, "7");
	seven.stations[12].setStation("古平岗", "7号线", 100712, false, "7");
	seven.stations[13].setStation("草场门", "7号线", 100713, true, "7");
	seven.stations[14].setStation("清凉山", "7号线", 100714, false, "7");

	seven.stations[15].setStation("莫愁湖", "7号线", 100715,true, "7");
	seven.stations[16].setStation("大士茶亭", "7号线", 100716, false, "7");
	seven.stations[17].setStation("南湖", "7号线", 100717, false, "7");
	seven.stations[18].setStation("应天大街", "7号线", 100718, false, "7");
	seven.stations[19].setStation("梦都大街东", "7号线", 100719, false, "7");

	seven.stations[20].setStation("新城科技园", "7号线", 100720, false, "7");
	seven.stations[21].setStation("中胜", "7号线", 100721,true, "7");
	seven.stations[22].setStation("嘉陵江东街", "7号线", 100722, false, "7");
	seven.stations[23].setStation("永初路", "7号线", 100723,true, "7");
	seven.stations[24].setStation("太清路", "7号线", 100724, false, "7");

	seven.stations[25].setStation("螺塘路", "7号线", 100725, true, "7");
	seven.stations[26].setStation("西善桥", "7号线", 100726, false, "7");
}

void ten_init(Line& ten, int ten_station_count)
{
	ten.stations[0].setStation("安德门", "10号线", 101000,true, "10");
	ten.stations[1].setStation("小行", "10号线", 101001, false, "10");
	ten.stations[2].setStation("中胜", "10号线", 101002,true, "10");
	ten.stations[3].setStation("元通", "10号线", 101003,true, "10");
	ten.stations[4].setStation("奥体中心", "10号线", 101004, false, "10");

	ten.stations[5].setStation("梦都大街", "10号线", 101005, false, "10");
	ten.stations[6].setStation("绿博园", "10号线", 101006, false, "10");
	ten.stations[7].setStation("江心洲", "10号线", 101007, false, "10");
	ten.stations[8].setStation("临江·青奥体育公园", "10号线", 101008, false, "10");
	ten.stations[9].setStation("浦口万汇城", "10号线", 101009, false, "10");

	ten.stations[10].setStation("南京工业大学", "10号线", 101010, false, "10");
	ten.stations[11].setStation("龙华路", "10号线", 101011, false, "10");
	ten.stations[12].setStation("文德路", "10号线", 101012, false, "10");
	ten.stations[13].setStation("雨山路", "10号线", 101013, false, "10");
}

void S_one_init(Line& S_one, int S_one_station_count)
{
	S_one.stations[0].setStation("空港新城江宁站", "S1号线",110100,true, "S1");
	S_one.stations[1].setStation("禄口机场", "S1号线", 110101, false, "S1");
	S_one.stations[2].setStation("翔宇路南", "S1号线", 110102,true, "S1");
	S_one.stations[3].setStation("翔宇路北", "S1号线", 110103, false, "S1");
	S_one.stations[4].setStation("正方中路", "S1号线", 110104, false, "S1");

	S_one.stations[5].setStation("吉印大道", "S1号线", 110105,true, "S1");
	S_one.stations[6].setStation("河海大学·佛城西路", "S1号线", 110106, false, "S1");
	S_one.stations[7].setStation("翠屏山", "S1号线", 110107, false, "S1");
	S_one.stations[8].setStation("南京南站", "S1号线", 110108,true, "S1");
}

void S_three_init(Line& S_three, int S_three_station_count)
{
	S_three.stations[0].setStation("南京南站", "S3号线", 110300,true, "S3");
	S_three.stations[1].setStation("明佳园", "S3号线", 110301, false, "S3");
	S_three.stations[2].setStation("铁心桥", "S3号线", 110302, false, "S3");
	S_three.stations[3].setStation("春江路", "S3号线", 110303, false, "S3");
	S_three.stations[4].setStation("贾西", "S3号线", 110304, false, "S3");

	S_three.stations[5].setStation("油坊桥", "S3号线", 110305,true, "S3");
	S_three.stations[6].setStation("永初路", "S3号线", 110306,true, "S3");
	S_three.stations[7].setStation("平良大街", "S3号线", 110307, false, "S3");
	S_three.stations[8].setStation("吴侯街", "S3号线", 110308, false, "S3");
	S_three.stations[9].setStation("高庙路", "S3号线", 110309, false, "S3");
	S_three.stations[9].setStation("高庙路", "S3号线", 110309, false, "S3");

	S_three.stations[10].setStation("天保", "S3号线", 110310, false, "S3");
	S_three.stations[11].setStation("刘村", "S3号线", 110311, false, "S3");
	S_three.stations[12].setStation("马骡圩", "S3号线", 110312, false, "S3");
	S_three.stations[13].setStation("兰花塘", "S3号线", 110313, false, "S3");
	S_three.stations[14].setStation("双垅", "S3号线", 110314, false, "S3");
	S_three.stations[15].setStation("石碛河", "S3号线", 110315, false, "S3");

	S_three.stations[16].setStation("桥林新城", "S3号线", 110316, false, "S3");
	S_three.stations[17].setStation("林山", "S3号线", 110317, false, "S3");
	S_three.stations[18].setStation("高家冲", "S3号线", 110318, false, "S3");
}

void S_six_init(Line& S_six, int S_six_station_count)
{
	S_six.stations[0].setStation("马群", "S6号线", 110600,true, "S6");
	S_six.stations[1].setStation("白水桥", "S6号线", 110601, false, "S6");
	S_six.stations[2].setStation("麒麟门", "S6号线", 110602, false, "S6");
	S_six.stations[3].setStation("东郊小镇", "S6号线", 110603, false, "S6");
	S_six.stations[4].setStation("古泉", "S6号线", 110604, false, "S6");

	S_six.stations[5].setStation("南京猿人洞", "S6号线", 110605, false, "S6");
	S_six.stations[6].setStation("汤山", "S6号线", 110606, false, "S6");
	S_six.stations[7].setStation("泉都大街", "S6号线", 110607, false, "S6");
	S_six.stations[8].setStation("黄梅", "S6号线", 110608, false, "S6");
	S_six.stations[9].setStation("童世界", "S6号线", 110609, false, "S6");

	S_six.stations[10].setStation("华阳", "S6号线", 110610, false, "S6");
	S_six.stations[11].setStation("崇明", "S6号线", 110611, false, "S6");
	S_six.stations[12].setStation("句容", "S6号线", 110612, false, "S6");
}

void S_seven_init(Line& S_seven, int S_seven_station_count)
{
	S_seven.stations[0].setStation("空港新城江宁站", "S7号线", 110700,true, "S7");
	S_seven.stations[1].setStation("柘塘", "S7号线", 110701, false, "S7");
	S_seven.stations[2].setStation("空港新城溧水站", "S7号线", 110702, false, "S7");
	S_seven.stations[3].setStation("群力", "S7号线", 110703, false, "S7");
	S_seven.stations[4].setStation("卧龙湖", "S7号线", 110704, false, "S7");
	
	S_seven.stations[5].setStation("溧水", "S7号线", 110705, false, "S7");
	S_seven.stations[6].setStation("中山湖", "S7号线", 110706, false, "S7");
	S_seven.stations[7].setStation("幸庄", "S7号线", 110707, false, "S7");
	S_seven.stations[8].setStation("无想山", "S7号线", 110708, false, "S7");
}

void S_eight_init(Line& S_eight, int S_eight_station_count)
{
	S_eight.stations[0].setStation("长江大桥北", "S8号线", 110800, false, "S8");
	S_eight.stations[1].setStation("毛纺厂路", "S8号线", 110801, false, "S8");
	S_eight.stations[2].setStation("泰山新村", "S8号线", 110802, false, "S8");
	S_eight.stations[3].setStation("泰冯路", "S8号线", 110803,true, "S8");
	S_eight.stations[4].setStation("高新开发区", "S8号线", 110804, false, "S8");

	S_eight.stations[5].setStation("信息工程大学", "S8号线", 110805, false, "S8");
	S_eight.stations[6].setStation("卸甲甸", "S8号线", 110806, false, "S8");
	S_eight.stations[7].setStation("大厂", "S8号线", 110807, false, "S8");
	S_eight.stations[8].setStation("葛塘", "S8号线", 110808, false, "S8");
	S_eight.stations[9].setStation("长芦", "S8号线", 110809, false, "S8");

	S_eight.stations[10].setStation("化工园", "S8号线", 110810, false, "S8");
	S_eight.stations[11].setStation("六和开发区", "S8号线", 110811, false, "S8");
	S_eight.stations[12].setStation("龙池", "S8号线", 110812, false, "S8");
	S_eight.stations[13].setStation("雄州", "S8号线", 110813, false, "S8");
	S_eight.stations[14].setStation("凤凰山公园", "S8号线", 110814, false, "S8");

	S_eight.stations[15].setStation("方州广场", "S8号线", 110815, false, "S8");
	S_eight.stations[16].setStation("沈桥", "S8号线", 110816, false, "S8");
	S_eight.stations[17].setStation("八百桥", "S8号线", 110817, false, "S8");
	S_eight.stations[18].setStation("金牛湖", "S8号线", 110818, false, "S8");
}

void S_nine_init(Line& S_nine, int S_nine_station_count)
{
	S_nine.stations[0].setStation("翔宇路南", "S9号线", 110900,true, "S9");
	S_nine.stations[1].setStation("铜山", "S9号线", 110901, false, "S9");
	S_nine.stations[2].setStation("石湫", "S9号线", 110902, false, "S9");
	S_nine.stations[3].setStation("明觉", "S9号线", 110903, false, "S9");
	S_nine.stations[4].setStation("团结圩", "S9号线", 110904, false, "S9");

	S_nine.stations[5].setStation("高淳", "S9号线", 110905, false, "S9");
}