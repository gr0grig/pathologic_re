// @IMPORTS: SetTimeEvent/2,Hold/0,SetVariable/2,IsPlayerActor/2,Trigger/2,GetMainOutdoorScene/1,RemoveActor/1,RegisterKeyCallback/1,CameraPlay/1,CameraWaitForPlayFinish/0,UnregisterKeyCallback/1,CameraSwitchToNormal/0,IsLoaded/1,self/1,CreateObjectVector/1,Trace/1,AddActor/6,AddScriptedActor/6,AddActorByType/6,SetSepia/2
// @STRINGS: W:cutscene_burn_d1|W:play|W:pt_cs_d1_01_worker|W:pers_worker|W:cutscene_d1_01_worker.xml|W:pt_cs_d1_01_woman|W:pers_woman|W:cutscene_d1_01_woman.xml|W:pt_cs_d1_01_alkash|W:pers_alkash|W:cutscene_d1_01_alkash.xml|W:cs_cannibal_alkash1|W:cs_play_all_trigger.bin|A:add|W:cs_cannibal_grabitel1|W:cs_cannibal_unosha1|W:cs_cannibal_unosha2|W:cs_cannibal_woman1|W:cs_cannibal_worker1|W:pt_cs_d1_01_fire|W:scripted|W:bonfire_big.xml|W:cs_cannibal_nudegirl|W:space|W:cs_cannibal.mot|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty|A:GetLocator|W:Locator |W: doesn't exist|A:size|A:get|A:clear
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool,bool,object,object,object params=0
// @EVENT_6: op=0x13 vars=
// @EVENT_9: op=0x20 vars=int,float
// @EVENT_23: op=0x38 vars=object
// @TASK_1: vars= params=1
// @EVENT_24: op=0xe7 vars=int
// @PE: 0x20,0xbd,0xca,0xe7

task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object)
{
	var_6_bool = var_2_bool;
	if(var_6_bool != 0) {
		func_189(var_5_object);
	} else {
		var_23_bool = var_1_bool;
		if(var_23_bool == 0) goto Label_31;
		var_1_bool = false;
		func_111(var_2_bool, var_3_object, var_4_object, var_5_object);
	}
Label_31:
	return 0;
	
}


task_0_event_9(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_float)
{
	var_9_bool = var_6_int == (int)0;
	if(var_9_bool != 0) {
		var_10_bool = 0;
		func_235(var_10_bool);
		if(var_10_bool != 0) {
			var_1_bool = true;
		} else {
			func_111(var_4_object, var_5_object, var_6_int, var_7_float);
	}
		var_65_bool = 0;
		func_235(var_65_bool);
		if(var_65_bool != 0) {
			var_2_bool = true;
			goto Label_55;
		}
		func_189(var_7_float);
	}
	goto Label_55;
	
Label_55:
	return 0;
	
}


task_0_event_23(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object)
{
	var_7_bool = 0; var_8_object = Obj(); var_9_bool = 0; var_10_object = Obj();
	var_11_bool = var_0_bool == 0; //@nz
	if(var_11_bool != 0) {
		return 4;
	}
	SetVariable("cutscene_burn_d1", (int)1);
	IsPlayerActor(var_6_object, var_9_bool);
	var_14_bool = var_9_bool;
	if(var_14_bool != 0) {
		EventDisable(23);
		var_15_object = Obj(); var_16_string = "";
		var_15_object = var_3_object;
		func_360(var_15_object, "play");
		Trigger(var_4_object, "play");
		var_28_object = Obj();
		var_6_object = var_28_object;
		TaskCall(1);
		func_202(var_28_object);
		TaskReturn();
		GetMainOutdoorScene(var_10_object);
		var_61_object = Obj(); var_62_object = Obj(); var_63_string = ""; var_64_string = ""; var_65_string = "";
		var_10_object = var_62_object;
		func_295(var_61_object, var_62_object, "pt_cs_d1_01_worker", "pers_worker", "cutscene_d1_01_worker.xml");
		var_79_object = Obj(); var_80_object = Obj(); var_81_string = ""; var_82_string = ""; var_83_string = "";
		var_10_object = var_80_object;
		func_295(var_79_object, var_80_object, "pt_cs_d1_01_woman", "pers_woman", "cutscene_d1_01_woman.xml");
		var_84_object = Obj(); var_85_object = Obj(); var_86_string = ""; var_87_string = ""; var_88_string = "";
		var_10_object = var_85_object;
		func_295(var_84_object, var_85_object, "pt_cs_d1_01_alkash", "pers_alkash", "cutscene_d1_01_alkash.xml");
		func_180(var_9_bool, var_10_object);
		var_10_object = 0;
	}
	return 4;
}


task_1_event_24(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int)
{
	CameraSwitchToNormal();
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object)
{
	var_0_bool = false;
	var_1_bool = false;
	var_2_bool = false;
	var_6_object = Obj();
	func_289(var_6_object);
	var_3_object = var_6_object;
	SetTimeEvent((int)0, (int)7);
	SetTimeEvent((int)1, (int)18);
	
Label_15:
	Hold();
	goto Label_15;
}
EMIT "Return(); Pop(0)";


func_384()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_289(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj();
	CreateObjectVector(var_8_object);
	var_8_object = var_6_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_321(var_43_object, var_44_object, var_45_string, var_46_string, var_47_string)
{
	var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_object = Obj(); var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_object = Obj();
	@@var_44_object:GetLocator(var_45_string, var_52_bool, var_53_cvector, var_54_cvector);
	var_56_bool = var_52_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_58_int = "Locator " + var_45_string;
		var_60_int = var_58_int + " doesn't exist";
		Trace(var_60_int);
	} else {
		AddActorByType(Obj(), var_46_string, var_44_object, var_53_cvector, var_54_cvector, var_47_string);
	}
	var_55_object = var_43_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_295(var_61_object, var_62_object, var_63_string, var_64_string, var_65_string)
{
	var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_object = Obj(); var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_object = Obj();
	@@var_62_object:GetLocator(var_63_string, var_70_bool, var_71_cvector, var_72_cvector);
	var_74_bool = var_70_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_76_int = "Locator " + var_63_string;
		var_78_int = var_76_int + " doesn't exist";
		Trace(var_78_int);
	} else {
		AddActor(Obj(), var_64_string, var_62_object, var_71_cvector, var_72_cvector, var_65_string);
	}
	var_73_object = var_61_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_360(var_15_object, var_16_string)
{
	var_17_int = 0; var_18_int = 0; var_19_object = Obj(); var_20_int = 0; var_21_int = 0; var_22_object = Obj();
	var_23_object = var_15_object;
	if(var_23_object != 0) {
		@@var_15_object:size(var_20_int);
		var_21_int = 0;

	Label_366:
		var_24_bool = var_21_int < var_20_int;
		if(var_24_bool != 0) {
			@@var_15_object:get(var_22_object, var_21_int);
			var_25_object = var_22_object;
			if(var_25_object != 0) {
				Trigger(var_22_object, var_16_string);
			}
			var_22_object = 0;
			var_21_int = var_21_int + (int)1;
			goto Label_366;
		}
	}
	return 6;
}


func_263(var_48_object)
{
	var_49_int = 0; var_50_int = 0;
	var_51_bool = var_48_object == 0; //@nz
	if(var_51_bool != 0) {
		return 2;
	}
	@@var_48_object:GetProperty("noaccess", var_50_int);
	var_54_bool = var_50_int > (int)1;
	if(var_54_bool != 0) {
		var_57_int = var_50_int - (int)1;
		@@var_48_object:SetProperty("noaccess", var_57_int);
	} else {
		@@var_48_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_202(var_28_object)
{
	func_379();
	var_31_object = Obj();
	var_28_object = var_31_object;
	func_240(var_31_object);
	RegisterKeyCallback("space");
	CameraPlay("cs_cannibal.mot");
	CameraWaitForPlayFinish();
	UnregisterKeyCallback("space");
	var_48_object = Obj();
	var_28_object = var_48_object;
	func_263(var_48_object);
	func_384();
	CameraSwitchToNormal();
	return 0;
}


func_235(var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0;
	IsLoaded(var_12_bool);
	var_12_bool = var_10_bool;
	return 2;
}


func_111(var_0_bool, var_3_object, var_4_object, var_5_object)
{
	var_13_object = Obj(); var_14_object = Obj();
	var_0_bool = true;
	GetMainOutdoorScene(var_14_object);
	var_15_object = Obj(); var_16_object = Obj(); var_17_string = ""; var_18_string = "";
	var_14_object = var_16_object;
	func_313(var_15_object, var_16_object, "cs_cannibal_alkash1", "cs_play_all_trigger.bin");
	@@@var_3_object:add(var_15_object);
	var_23_object = Obj(); var_24_object = Obj(); var_25_string = ""; var_26_string = "";
	var_14_object = var_24_object;
	func_313(var_23_object, var_24_object, "cs_cannibal_grabitel1", "cs_play_all_trigger.bin");
	@@@var_3_object:add(var_23_object);
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = "";
	var_14_object = var_28_object;
	func_313(var_27_object, var_28_object, "cs_cannibal_unosha1", "cs_play_all_trigger.bin");
	@@@var_3_object:add(var_27_object);
	var_31_object = Obj(); var_32_object = Obj(); var_33_string = ""; var_34_string = "";
	var_14_object = var_32_object;
	func_313(var_31_object, var_32_object, "cs_cannibal_unosha2", "cs_play_all_trigger.bin");
	@@@var_3_object:add(var_31_object);
	var_35_object = Obj(); var_36_object = Obj(); var_37_string = ""; var_38_string = "";
	var_14_object = var_36_object;
	func_313(var_35_object, var_36_object, "cs_cannibal_woman1", "cs_play_all_trigger.bin");
	@@@var_3_object:add(var_35_object);
	var_39_object = Obj(); var_40_object = Obj(); var_41_string = ""; var_42_string = "";
	var_14_object = var_40_object;
	func_313(var_39_object, var_40_object, "cs_cannibal_worker1", "cs_play_all_trigger.bin");
	@@@var_3_object:add(var_39_object);
	var_43_object = Obj(); var_44_object = Obj(); var_45_string = ""; var_46_string = ""; var_47_string = "";
	var_14_object = var_44_object;
	func_321(var_43_object, var_44_object, "pt_cs_d1_01_fire", "scripted", "bonfire_big.xml");
	var_5_object = var_43_object;
	var_61_object = Obj(); var_62_object = Obj(); var_63_string = ""; var_64_string = "";
	var_14_object = var_62_object;
	func_313(var_61_object, var_62_object, "cs_cannibal_nudegirl", "cs_play_all_trigger.bin");
	var_4_object = var_61_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_240(var_31_object)
{
	var_32_bool = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0;
	var_36_bool = var_31_object == 0; //@nz
	if(var_36_bool != 0) {
		return 4;
	}
	@@var_31_object:HasProperty("noaccess", var_34_bool);
	var_38_bool = var_34_bool;
	if(var_38_bool != 0) {
		@@var_31_object:GetProperty("noaccess", var_35_int);
		var_42_int = var_35_int + (int)1;
		@@var_31_object:SetProperty("noaccess", var_42_int);
	} else {
		@@var_31_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_339(var_89_object)
{
	var_90_int = 0; var_91_int = 0; var_92_object = Obj(); var_93_int = 0; var_94_int = 0; var_95_object = Obj();
	var_96_object = var_89_object;
	if(var_96_object != 0) {
		@@var_89_object:size(var_93_int);
		var_94_int = 0;

	Label_345:
		var_97_bool = var_94_int < var_93_int;
		if(var_97_bool != 0) {
			@@var_89_object:get(var_95_object, var_94_int);
			var_98_object = var_95_object;
			if(var_98_object != 0) {
				RemoveActor(var_95_object);
			}
			var_95_object = 0;
			var_94_int = var_94_int + (int)1;
			goto Label_345;
		}
		@@var_89_object:clear();
	}
	return 6;
}


func_180(var_3_object, var_4_object)
{
	var_89_object = Obj();
	var_89_object = var_3_object;
	func_339(var_89_object);
	var_100_object = var_4_object;
	if(var_100_object != 0) {
		RemoveActor(var_4_object);
	}
	return 0;
}


func_379()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_313(var_15_object, var_16_object, var_17_string, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj();
	AddScriptedActor(var_20_object, var_17_string, var_18_string, var_16_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0));
	var_20_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_283(var_79_object)
{
	var_80_object = Obj(); var_81_object = Obj();
	self(var_81_object);
	var_81_object = var_79_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_189(var_5_object)
{
	func_180(var_6_int, var_7_float);
	var_78_object = var_5_object;
	if(var_78_object != 0) {
		RemoveActor(var_5_object);
	}
	var_79_object = Obj();
	func_283(var_79_object);
	RemoveActor(var_79_object);
	return 0;
}


