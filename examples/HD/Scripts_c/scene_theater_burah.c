// @IMPORTS: Hold/0,SetVariable/2,AddActor/6,CameraPlay/1,PlayGlobalMusic/1,CameraWaitForPlayFinish/0,CameraSwitchToNormal/0,RemoveActor/1,PlayMovie/1,GetStat/2,Trace/1,shift/3,SetStat/2,UnlockAchievement/1,FindActor/2,self/1,Trigger/2,GetGameTime/1,GetVariable/2
// @STRINGS: W:quest_b12_01|W:theater_load|W:theater_unload|W:Performance|W:cs_mask_burah|W:cs_mask_burah.xml|A:ForceGeometryLoad|W:.mot|W:nightmask|W:.ogg|W:NightMasks|W:.wmv|W:STAT_LOOK|W:Day: |W:Before stat |W:After stat |W:ACHIEVEMENT_LOOK|W:Achievement Unlocked!!!|W:player|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty
// @RUN_OP: 0xf
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_5: op=0x0 vars=
// @EVENT_6: op=0x9 vars=
// @PE: 0x0

task_0_event_5()
{
	func_19();
	var_111_bool = 0; var_112_string = ""; var_113_string = "";
	func_181(var_111_bool, "quest_b12_01", "theater_load");
	return 0;
}


task_0_event_6()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = "";
	func_181(var_0_bool, "quest_b12_01", "theater_unload");
	return 0;
}


main()
{
	
Label_15:
	Hold();
	goto Label_15;
}
EMIT "Return(); Pop(0)";


func_193(var_26_int)
{
	var_27_float = 0; var_28_float = 0;
	GetGameTime(var_28_float);
	var_30_int = 0;
	var_30_int = var_28_float / (int)24;
	var_26_int = (int)1 + var_30_int;
	return 2;
}


func_132(var_52_object)
{
	var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0;
	var_57_bool = var_52_object == 0; //@nz
	if(var_57_bool != 0) {
		return 4;
	}
	@@var_52_object:HasProperty("noaccess", var_55_bool);
	var_59_bool = var_55_bool;
	if(var_59_bool != 0) {
		@@var_52_object:GetProperty("noaccess", var_56_int);
		var_63_int = var_56_int + (int)1;
		@@var_52_object:SetProperty("noaccess", var_63_int);
	} else {
		@@var_52_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_202(var_19_int)
{
	var_20_float = 0; var_21_float = 0;
	GetGameTime(var_21_float);
	var_22_int = 0;
	var_21_float = var_22_int;
	var_19_int = var_22_int % (int)24;
	return 2;
}


func_175(var_42_object)
{
	var_43_object = Obj(); var_44_object = Obj();
	self(var_44_object);
	var_44_object = var_42_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_210(var_12_bool)
{
	var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0;
	func_202((int)0);
	var_19_int = var_16_int;
	var_25_bool = var_16_int < (int)7;
	if(var_25_bool != 0) {
		func_193((int)0);
		var_26_int = var_17_int;
		var_33_bool = var_17_int > (int)1;
		if(var_33_bool != 0) {
			var_35_int = "Performance" + var_17_int;
			GetVariable(var_35_int, var_18_int);
			var_12_bool = var_18_int == (int)0;
			return 6;
		}
	}
	var_12_bool = 0;
	return 6;
}


func_19()
{
	var_0_int = 0; var_1_int = 0; var_2_object = Obj(); var_3_object = Obj(); var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_int = 0;
	var_12_bool = 0;
	func_210(var_12_bool);
	if(var_12_bool != 0) {
		func_193((int)0);
		var_37_int = var_6_int;
		var_39_int = "Performance" + var_6_int;
		SetVariable(var_39_int, (int)1);
		var_42_object = Obj();
		func_175(var_42_object);
		AddActor(var_8_object, "cs_mask_burah", var_42_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "cs_mask_burah.xml");
		@@var_8_object:ForceGeometryLoad();
		func_125(Obj());
		var_48_object = var_9_object;
		var_52_object = Obj();
		var_9_object = var_52_object;
		func_132(var_52_object);
		var_68_int = var_6_int - (int)1;
		var_69_int = "cs_mask_burah" + var_68_int;
		var_71_int = var_69_int + ".mot";
		CameraPlay(var_71_int);
		var_74_int = var_6_int - (int)1;
		var_75_int = "nightmask" + var_74_int;
		var_77_int = var_75_int + ".ogg";
		PlayGlobalMusic(var_77_int);
		CameraWaitForPlayFinish();
		PlayGlobalMusic("");
		var_79_object = Obj();
		var_9_object = var_79_object;
		func_155(var_79_object);
		CameraSwitchToNormal();
		RemoveActor(var_8_object);
		var_92_int = var_6_int - (int)1;
		var_93_int = "NightMasks" + var_92_int;
		var_95_int = var_93_int + ".wmv";
		PlayMovie(var_95_int);
		GetStat("STAT_LOOK", var_10_int);
		var_98_int = "Day: " + var_6_int;
		Trace(var_98_int);
		var_100_int = "Before stat " + var_10_int;
		Trace(var_100_int);
		var_103_int = var_6_int - (int)1;
		shift(var_11_int, (int)1, var_103_int);
		var_10_int = var_10_int | var_11_int;
		SetStat("STAT_LOOK", var_10_int);
		var_106_int = "After stat " + var_10_int;
		Trace(var_106_int);
		var_108_bool = var_10_int == (int)4095;
		if(var_108_bool != 0) {
			UnlockAchievement("ACHIEVEMENT_LOOK");
			Trace("Achievement Unlocked!!!");
		}
		var_9_object = 0;
		var_8_object = 0;
	}
	return 12;
}


func_181(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj();
	FindActor(var_4_object, var_1_string);
	var_5_bool = var_4_object == 0; //@ne
	if(var_5_bool != 0) {
		var_0_bool = 0;
		return 2;
	}
	Trigger(var_4_object, var_2_string);
	var_0_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_155(var_79_object)
{
	var_80_int = 0; var_81_int = 0;
	var_82_bool = var_79_object == 0; //@nz
	if(var_82_bool != 0) {
		return 2;
	}
	@@var_79_object:GetProperty("noaccess", var_81_int);
	var_85_bool = var_81_int > (int)1;
	if(var_85_bool != 0) {
		var_88_int = var_81_int - (int)1;
		@@var_79_object:SetProperty("noaccess", var_88_int);
	} else {
		@@var_79_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_125(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj();
	FindActor(var_50_object, "player");
	var_50_object = var_48_object;
	return 2;
}
EMIT "Stack[-1] = 0";


