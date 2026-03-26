// @IMPORTS: SetOwnerDraw/1,SetNeedUpdate/1,ProcessEvents/0,Blit/3,Blit/4,SetVariable/2,PlaySound/1,GetVariable/2,FindActor/2
// @STRINGS: W:cross|W:rep_down|W:rep_up|W:player_exchange|W:player_mail|W:player_diary|W:rep_down_big|W:rep_down_small|W:player|W:reputation|A:GetProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool,bool,bool,bool,bool,float,float,float params=0
// @EVENT_1: op=0x11 vars=float
// @EVENT_0: op=0x14 vars=
// @PE: 0x11

task_0_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_float, var_7_float, var_8_float, var_9_float)
{
	var_6_float = var_6_float + var_9_float;
	return 0;
}


task_0_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_float, var_7_float, var_8_float)
{
	var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0; var_17_float = 0; var_18_float = 0; var_19_float = 0; var_20_float = 0; var_21_float = 0; var_22_float = 0;
	Blit("cross", (int)399, (int)299);
	var_26_bool = var_3_bool;
	if(var_26_bool != 0) {
		var_27_int = var_6_float - var_7_float;
		var_16_float = var_27_int / (float)2.0;
		var_30_bool = var_16_float > (int)2;
		if(var_30_bool != 0) {
			var_3_bool = false;
			var_31_float = 0;
			func_278(var_31_float);
			var_8_float = var_31_float;
			return 14;
		}
		var_16_float = var_16_float * (float)6.2829999923706055;
		var_45_float = cos(var_16_float);
		var_46_float = (float)0.5 * var_45_float;
		var_47_int = (float)0.5 - var_46_float;
		Blit("rep_down", (int)20, (int)500, var_47_int);
		return 14;
	}
	var_48_bool = var_2_bool;
	if(var_48_bool != 0) {
		var_49_int = var_6_float - var_7_float;
		var_17_float = var_49_int / (float)2.0;
		var_52_bool = var_17_float > (int)2;
		if(var_52_bool != 0) {
			var_2_bool = false;
			var_53_float = 0;
			func_278(var_53_float);
			var_8_float = var_53_float;
			return 14;
		}
		var_17_float = var_17_float * (float)6.2829999923706055;
		var_60_float = cos(var_17_float);
		var_61_float = (float)0.5 * var_60_float;
		var_62_int = (float)0.5 - var_61_float;
		Blit("rep_up", (int)20, (int)500, var_62_int);
		return 14;
	}
	var_63_bool = var_5_bool;
	if(var_63_bool != 0) {
		var_64_bool = 0;
		func_271(var_64_bool);
		var_69_bool = var_64_bool == 0; //@nz
		if(var_69_bool != 0) {
			var_5_bool = false;
			return 14;
		}
		var_70_int = var_6_float - var_7_float;
		var_18_float = var_70_int / (float)1.0;
		var_73_bool = var_18_float > (int)1;
		if(var_73_bool != 0) {
			var_0_bool = false;
			SetVariable("player_exchange", (int)0);
			return 14;
		}
		var_18_float = var_18_float * (float)6.2829999923706055;
		var_82_float = cos(var_18_float);
		var_83_float = (float)0.5 * var_82_float;
		var_84_int = (float)0.5 - var_83_float;
		Blit("exchange", (int)20, (int)500, var_84_int);
		return 14;
	}
	var_85_bool = var_0_bool;
	if(var_85_bool != 0) {
		var_86_bool = 0;
		func_257(var_86_bool);
		var_91_bool = var_86_bool == 0; //@nz
		if(var_91_bool != 0) {
			var_0_bool = false;
			return 14;
		}
		var_92_int = var_6_float - var_7_float;
		var_19_float = var_92_int / (float)2.0;
		var_95_bool = var_19_float > (int)2;
		if(var_95_bool != 0) {
			var_0_bool = false;
			SetVariable("player_mail", (int)0);
			return 14;
		}
		var_19_float = var_19_float * (float)6.2829999923706055;
		var_104_float = cos(var_19_float);
		var_105_float = (float)0.5 * var_104_float;
		var_106_int = (float)0.5 - var_105_float;
		Blit("mail", (int)20, (int)500, var_106_int);
		return 14;
	}
	var_107_bool = var_1_bool;
	if(var_107_bool != 0) {
		var_108_bool = 0;
		func_264(var_108_bool);
		var_113_bool = var_108_bool == 0; //@nz
		if(var_113_bool != 0) {
			var_1_bool = false;
			return 14;
		}
		var_114_int = var_6_float - var_7_float;
		var_20_float = var_114_int / (float)2.0;
		var_117_bool = var_20_float > (int)2;
		if(var_117_bool != 0) {
			var_1_bool = false;
			SetVariable("player_diary", (int)0);
			return 14;
		}
		var_20_float = var_20_float * (float)6.2829999923706055;
		var_126_float = cos(var_20_float);
		var_127_float = (float)0.5 * var_126_float;
		var_128_int = (float)0.5 - var_127_float;
		Blit("diary", (int)20, (int)470, var_128_int);
		return 14;
	}
	func_278((float)0);
	var_129_float = var_21_float;
	var_130_bool = var_4_bool == 0; //@nz
	if(var_130_bool != 0) {
		var_132_bool = var_21_float >= (int)0;
		if(var_132_bool != 0) {
			var_8_float = var_21_float;
			var_4_bool = true;
		}
		return 14;
	}
	var_133_bool = var_8_float != var_21_float;
	if(var_133_bool != 0) {
		var_135_bool = var_21_float < (int)0;
		if(var_135_bool != 0) {
			return 14;
		}
		var_7_float = var_6_float;
		var_136_float = 0;
		func_278(var_136_float);
		var_137_bool = var_8_float < var_136_float;
		if(var_137_bool != 0) {
			PlaySound("rep_up");
			var_2_bool = true;
		} else {
			var_139_float = 0;
			func_278(var_139_float);
			var_22_float = var_8_float - var_139_float;
			var_141_bool = var_22_float >= (float)0.30000001192092896;
			if(var_141_bool != 0) {
				PlaySound("rep_down_big");
			} else {
				PlaySound("rep_down_small");
	}
			var_144_bool = 0;
			func_271(var_144_bool);
			if(var_144_bool != 0) {
				PlaySound("exchange");
				var_7_float = var_6_float;
				var_5_bool = true;
				return 14;
			}
			var_146_bool = 0;
			func_257(var_146_bool);
			if(var_146_bool != 0) {
				PlaySound("mail");
				var_7_float = var_6_float;
				var_0_bool = true;
				return 14;
			}
			var_148_bool = 0;
			func_264(var_148_bool);
			if(var_148_bool != 0) {
				PlaySound("diary");
				var_7_float = var_6_float;
				var_1_bool = true;
			}
			return 14;
		}
		var_3_bool = true;
	}
	return 14;
	
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_float, var_7_float, var_8_float)
{
	var_6_float = 0;
	var_0_bool = false;
	var_1_bool = false;
	var_2_bool = false;
	var_3_bool = false;
	var_5_bool = false;
	var_8_float = -1;
	var_4_bool = false;
	SetOwnerDraw((bool)1);
	SetNeedUpdate((bool)1);
	ProcessEvents();
	return 0;
}


func_264(var_108_bool)
{
	var_109_int = 0; var_110_int = 0;
	GetVariable("player_diary", var_110_int);
	var_108_bool = var_110_int != (int)0;
	return 2;
}


func_257(var_86_bool)
{
	var_87_int = 0; var_88_int = 0;
	GetVariable("player_mail", var_88_int);
	var_86_bool = var_88_int != (int)0;
	return 2;
}


func_278(var_31_float)
{
	var_32_object = Obj(); var_33_float = 0; var_34_object = Obj(); var_35_float = 0;
	FindActor(var_34_object, "player");
	var_37_bool = var_34_object == 0; //@nz
	if(var_37_bool != 0) {
		var_31_float = -1;
		return 4;
	}
	@@var_34_object:GetProperty("reputation", var_35_float);
	var_35_float = var_31_float;
	return 4;
}
EMIT "Stack[-2] = 0";


func_271(var_64_bool)
{
	var_65_int = 0; var_66_int = 0;
	GetVariable("player_exchange", var_66_int);
	var_64_bool = var_66_int != (int)0;
	return 2;
}


