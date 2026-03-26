// @IMPORTS: sync/0,SetTimer/2,WaitForMusicEnd1/0,Sleep/1,Trace/1,HasMusicAttribute/2,GetMusicAttribute/2,_strtoi/2,GetVariable/2,GetGameTime/1,HasMusicValue/3,GetMusicValue/3,SwitchMusic1/1,PlayMusic1/1,KillTimer/1,StopMusic1/0,GetActiveScene/1,SwitchMusic1/2,PlayMusic1/2,FadeMusic1/1,irand/2
// @STRINGS: W:Music time limit reached|W:horror|W:id|W:day|W:night|W:general|W:music|W:Playing: '|W:' from category: |W:Chosen agressive: |W:attack|W:Region|W:State|W:agressive
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string,string,string params=0
// @EVENT_7: op=0x13 vars=int
// @EVENT_12: op=0xbf vars=string
// @EVENT_8: op=0xde vars=
// @TASK_1: vars=bool,object params=1
// @EVENT_12: op=0x100 vars=string
// @EVENT_7: op=0x117 vars=int
// @EVENT_8: op=0x128 vars=
// @TASK_2: vars= params=1
// @EVENT_12: op=0x138 vars=string
// @PE: 0x91,0xbf,0xea,0x100,0x117,0x132,0x138,0x140

task_0_event_7(var_0_string, var_1_string, var_2_string, var_3_int, var_4_bool, var_5_object)
{
	var_6_string = ""; var_7_string = "";
	var_9_bool = var_5_object == (int)0;
	if(var_9_bool != 0) {
		Trace("Music time limit reached");
		var_12_bool = var_1_string != "";
		if(var_12_bool != 0) {
			func_63("");
			var_13_string = var_7_string;
			var_45_bool = var_0_string == var_7_string;
			if(var_45_bool != 0) {
				var_46_bool = 0; var_47_string = "";
				var_7_string = var_47_string;
				func_174(var_7_string, var_46_bool, var_47_string);
				if(var_46_bool != 0) {
					return 2;
				}
			} else {
				var_102_bool = 0;
				var_102_bool = 0;
				var_104_bool = var_0_string != "horror";
				if(var_104_bool != 0) {
					var_106_bool = var_7_string != "horror";
					if(var_106_bool != 0) {
						var_102_bool = 1;
					}
				}
				if(var_102_bool == 0) goto Label_58;
				var_107_bool = 0; var_108_string = "";
				var_7_string = var_108_string;
				func_174(var_7_string, var_107_bool, var_108_string);
				if(var_107_bool == 0) goto Label_58;
				return 2;
			}
		Label_58:
			var_55_bool = 0; var_56_bool = 0;
			func_116(var_7_string, var_55_bool, (bool)1);
		}
	}
	return 2;
	
}


task_0_event_12(var_0_string, var_1_string, var_2_string, var_3_string, var_4_bool, var_5_object)
{
	var_7_bool = var_5_object == "attack";
	if(var_7_bool != 0) {
		var_9_bool = var_2_string != "";
		if(var_9_bool != 0) {
			func_187();
			var_11_string = "";
			var_11_string = var_2_string;
			TaskCall(1);
			func_234(var_12_bool, var_13_object, var_11_string);
			TaskReturn();
			SetTimer((int)0, (int)15);
		}
	} else {
		func_187();
		var_21_string = "";
		var_5_object = var_21_string;
		TaskCall(2);
		func_306(var_21_string);
		TaskReturn();
	}
	return 0;
	
}


task_0_event_8(var_0_string, var_1_string, var_2_string, var_3_bool, var_4_object)
{
	var_5_bool = 0; var_6_string = "";
	func_63("");
	var_7_string = var_6_string;
	func_174(var_4_object, var_5_bool, var_6_string);
	var_46_bool = var_5_bool == 0; //@nz
	if(var_46_bool != 0) {
		StopMusic1();
	}
	return 0;
}


task_1_event_12(var_0_string, var_1_string, var_2_string, var_3_bool, var_4_object, var_5_string)
{
	var_7_bool = var_5_string == "attack";
	if(var_7_bool != 0) {
		SetTimer((int)1, (int)10);
		var_0_string = false;
	} else {
		var_11_bool = var_5_string != "";
		if(var_11_bool == 0) goto Label_278;
		func_291(var_5_string);
		var_13_string = "";
		var_5_string = var_13_string;
		TaskCall(2);
		func_306(var_13_string);
		TaskReturn();
	}
Label_278:
	return 0;
	
}


task_1_event_7(var_0_string, var_1_string, var_2_string, var_3_bool, var_4_object, var_5_int)
{
	var_7_bool = var_5_int == (int)1;
	if(var_7_bool != 0) {
		FadeMusic1((int)2);
		KillTimer((int)1);
		var_0_string = true;
	}
	return 0;
}


task_1_event_8(var_0_string, var_1_string, var_2_string, var_3_bool, var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj();
	GetActiveScene(var_6_object);
	var_7_bool = var_1_string != var_6_object;
	if(var_7_bool != 0) {
		var_0_string = true;
		StopMusic1();
	}
	return 2;
}
EMIT "Stack[-1] = 0";


task_2_event_12(var_0_string, var_1_string, var_2_string, var_3_bool, var_4_object, var_5_string)
{
	var_7_bool = var_5_string == "";
	if(var_7_bool != 0) {
		FadeMusic1((int)1);
	}
	return 0;
}


main(var_0_string, var_1_string, var_2_string, var_3_bool, var_4_object)
{
	sync();
	SetTimer((int)0, (int)15);
	
Label_6:
	var_7_bool = 0; var_8_bool = 0;
	func_116(var_4_object, var_7_bool, (bool)0);
	if(var_7_bool != 0) {
		WaitForMusicEnd1();
	} else {
		Sleep((int)1);
	}
	goto Label_6;
	
}
EMIT "Return(); Pop(0)";


func_320(var_27_string, var_28_int)
{
	var_31_int = "Region" + var_28_int;
	var_27_string = var_31_int + "State";
	return 0;
}


func_291(var_0_string)
{
	var_0_string = true;
	KillTimer((int)1);
	return 0;
}


func_326(var_59_string, var_60_string)
{
	var_61_int = 0; var_62_bool = 0; var_63_int = 0; var_64_string = ""; var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_string = "";
	var_65_int = 0;
	
Label_328:
	var_71_int = var_65_int + (int)1;
	var_72_int = "agressive" + var_71_int;
	HasMusicValue(var_66_bool, var_60_string, var_72_int);
	var_73_bool = var_66_bool == 0; //@nz
	if(var_73_bool != 0) {
	} else {
		var_65_int = var_65_int + (int)1;
		goto Label_328;
	}
	var_74_int = var_65_int;
	if(var_74_int != 0) {
		irand(var_67_int, var_65_int);
		var_77_int = var_67_int + (int)1;
		var_78_int = "agressive" + var_77_int;
		GetMusicValue(var_68_string, var_60_string, var_78_int);
		var_68_string = var_59_string;
		return 8;
	}
	var_59_string = "";
	return 8;
	
}


func_234(var_0_string, var_1_string, var_11_string)
{
	SetTimer((int)1, (int)10);
	var_0_string = false;
	GetActiveScene(var_1_string);
	SwitchMusic1(var_11_string, (bool)1);
	WaitForMusicEnd1();
	
Label_247:
	var_17_bool = var_0_string == 0; //@nz
	if(var_17_bool != 0) {
		PlayMusic1(var_11_string, (bool)1);
		WaitForMusicEnd1();
		goto Label_247;
	}
	return 0;
}


func_174(var_1_string, var_5_bool, var_6_string)
{
	var_39_bool = 0; var_40_string = ""; var_41_bool = 0; var_42_string = "";
	HasMusicValue(var_41_bool, var_6_string, "music");
	var_44_bool = var_41_bool;
	if(var_44_bool != 0) {
		GetMusicValue(var_42_string, var_6_string, "music");
		var_5_bool = var_1_string == var_42_string;
		return 4;
	}
	var_5_bool = 0;
	return 4;
}


func_145(var_1_string, var_2_string, var_48_string, var_49_string, var_50_bool)
{
	var_1_string = var_49_string;
	var_52_bool = var_49_string != "";
	if(var_52_bool != 0) {
		var_54_int = "Playing: '" + var_49_string;
		var_56_int = var_54_int + "' from category: ";
		var_57_int = var_56_int + var_48_string;
		Trace(var_57_int);
		var_58_bool = var_50_bool;
		if(var_58_bool != 0) {
			SwitchMusic1(var_49_string);
		} else {
			PlayMusic1(var_49_string);
		}
	}
	var_59_string = ""; var_60_string = "";
	var_48_string = var_60_string;
	func_326(var_59_string, var_60_string);
	var_2_string = var_59_string;
	var_81_int = "Chosen agressive: " + var_2_string;
	Trace(var_81_int);
	return 0;
	
}


func_306(var_13_string)
{
	PlayMusic1(var_13_string);
	WaitForMusicEnd1();
	return 0;
}


func_116(var_0_string, var_7_bool, var_8_bool)
{
	var_9_bool = 0; var_10_string = ""; var_11_bool = 0; var_12_string = "";
	var_13_string = "";
	func_63(var_13_string);
	var_0_string = var_13_string;
	HasMusicValue(var_11_bool, var_0_string, "music");
	var_46_bool = var_11_bool;
	if(var_46_bool != 0) {
		GetMusicValue(var_12_string, var_0_string, "music");
		var_48_string = ""; var_49_string = ""; var_50_bool = 0;
		var_48_string = var_0_string;
		var_12_string = var_49_string;
		var_8_bool = var_50_bool;
		func_145(var_11_bool, var_12_string, var_48_string, var_49_string, var_50_bool);
		var_7_bool = 1;
		return 4;
	}
	var_82_string = ""; var_83_string = ""; var_84_bool = 0;
	var_82_string = var_0_string;
	var_8_bool = var_84_bool;
	func_145(var_11_bool, var_12_string, var_82_string, "", var_84_bool);
	var_7_bool = 0;
	return 4;
}


func_187()
{
	KillTimer((int)0);
	return 0;
}


func_63(var_13_string)
{
	var_14_bool = 0; var_15_string = ""; var_16_int = 0; var_17_int = 0; var_18_float = 0; var_19_bool = 0; var_20_string = ""; var_21_int = 0; var_22_int = 0; var_23_float = 0;
	HasMusicAttribute(var_19_bool, "id");
	var_25_bool = var_19_bool;
	if(var_25_bool != 0) {
		GetMusicAttribute(var_20_string, "id");
		_strtoi(var_21_int, var_20_string);
		var_27_string = ""; var_28_int = 0;
		var_28_int = var_21_int - (int)1;
		func_320(var_27_string, var_28_int);
		GetVariable(var_27_string, var_22_int);
		var_22_int = var_22_int & (int)3;
		var_34_bool = 0;
		var_34_bool = 1;
		var_36_bool = var_22_int == (int)1;
		if(var_36_bool != 1) {
			var_38_bool = var_22_int == (int)2;
			if(var_38_bool != 1) {
				var_34_bool = 0;
			}
		}
		if(var_34_bool != 0) {
			var_13_string = "horror";
			return 10;
		EMIT "GOTO 0x72";
		}
		GetGameTime(var_23_float);
		var_23_float = var_23_float % (int)24;
		var_40_bool = 0;
		var_40_bool = 0;
		var_42_bool = var_23_float >= (int)9;
		if(var_42_bool != 0) {
			var_44_bool = var_23_float <= (int)19;
			if(var_44_bool != 0) {
				var_40_bool = 1;
			}
		}
		if(var_40_bool != 0) {
			var_13_string = "day";
		} else {
			var_13_string = "night";
	}
		var_13_string = "general";
		return 10;
	}
	return 10;
	
}


