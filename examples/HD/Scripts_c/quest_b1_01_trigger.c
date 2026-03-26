// @IMPORTS: GetMainOutdoorScene/1,AddScriptedActor/5,IsPlayerActor/2,SetTimer/2,Trigger/2,FindActor/2,CameraPlay/1,CameraWaitForPlayFinish/0,CameraSwitchToNormal/0,KillTimer/1,GetSceneByName/2,Teleport/4,RemoveActor/1,Hold/0,IsLoaded/1,self/1,AddActor/6,PlayGlobalMusic/1,SetSepia/2
// @STRINGS: W:cs_b1q01_unosha1|W:cs_play_all_trigger.bin|W:cs_b1q01_unosha2|W:cs_b1q01_worker1|W:cs_b1q01_worker2|W:cs_b1q01_unosha3|W:cs_play_all.bin|W:cs_b1q01_unosha4|W:cs_b1q01_worker3|W:cs_b1q01_worker4|W:cs_b1q01_burah1|W:cs_b1q01_burah.xml|W:cs_b1q01_burah2|A:ForceGeometryLoad|W:play|W:player|W:cs_b1q01.mot|W:remove|W:quest_b1_01|W:cutscene_end|W:warehouse_notkin|W:pt_door1|A:GetLocator|W:cleanup|W:restore|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty|W:attack
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,object,object,object,object,object,object,object,object,object,object,object params=0
// @EVENT_7: op=0x1c vars=int
// @EVENT_23: op=0x26 vars=object
// @EVENT_32: op=0xd7 vars=
// @EVENT_26: op=0xe3 vars=string
// @EVENT_6: op=0xff vars=
// @PE: 0x1c,0xd7

task_0_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_int)
{
	var_14_bool = (int)1 != var_12_int;
	if(var_14_bool != 0) {
		return 0;
	}
	var_15_object = Obj();
	var_15_object = var_11_object;
	func_342(var_15_object);
	return 0;
}


task_0_event_23(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_bool = 0;
	IsPlayerActor(var_12_object, var_19_bool);
	var_25_bool = var_19_bool == 0; //@nz
	if(var_25_bool != 0) {
		return 12;
	}
	var_11_object = var_12_object;
	GetMainOutdoorScene(var_20_object);
	var_26_object = Obj();
	var_26_object = var_11_object;
	func_342(var_26_object);
	SetTimer((int)1, (int)2);
	AddScriptedActor(var_7_object, "cs_b1q01_unosha3", "cs_play_all.bin", var_20_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_8_object, "cs_b1q01_unosha4", "cs_play_all.bin", var_20_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_3_object, "cs_b1q01_worker3", "cs_play_all.bin", var_20_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_4_object, "cs_b1q01_worker4", "cs_play_all.bin", var_20_object, CVector(0.0, 0.0, 0.0));
	var_45_object = Obj(); var_46_object = Obj(); var_47_string = ""; var_48_string = "";
	var_20_object = var_46_object;
	func_322(var_45_object, var_46_object, "cs_b1q01_burah1", "cs_b1q01_burah.xml");
	var_9_object = var_45_object;
	var_53_object = Obj(); var_54_object = Obj(); var_55_string = ""; var_56_string = "";
	var_20_object = var_54_object;
	func_322(var_53_object, var_54_object, "cs_b1q01_burah2", "cs_b1q01_burah.xml");
	var_10_object = var_53_object;
	@@@var_5_object:ForceGeometryLoad();
	@@@var_6_object:ForceGeometryLoad();
	@@@var_7_object:ForceGeometryLoad();
	@@@var_8_object:ForceGeometryLoad();
	@@@var_1_object:ForceGeometryLoad();
	@@@var_2_object:ForceGeometryLoad();
	@@@var_3_object:ForceGeometryLoad();
	@@@var_4_object:ForceGeometryLoad();
	@@@var_9_object:ForceGeometryLoad();
	@@@var_10_object:ForceGeometryLoad();
	Trigger(var_5_object, "play");
	Trigger(var_6_object, "play");
	Trigger(var_1_object, "play");
	Trigger(var_2_object, "play");
	FindActor(var_21_object, "player");
	func_351();
	var_64_object = Obj();
	var_21_object = var_64_object;
	func_273(var_64_object);
	CameraPlay("cs_b1q01.mot");
	CameraWaitForPlayFinish();
	var_79_object = Obj();
	var_21_object = var_79_object;
	func_296(var_79_object);
	func_356();
	func_178(var_16_cvector, var_17_cvector, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_cvector, var_23_cvector, var_24_bool);
	var_101_object = var_10_object;
	if(var_101_object != 0) {
		Trigger(var_10_object, "remove");
		var_10_object = 0;
	}
	CameraSwitchToNormal();
	KillTimer((int)1);
	var_104_bool = 0; var_105_string = ""; var_106_string = "";
	func_330(var_104_bool, "quest_b1_01", "cutscene_end");
	GetSceneByName(var_20_object, "warehouse_notkin");
	@@var_20_object:GetLocator("pt_door1", var_24_bool, var_22_cvector, var_23_cvector);
	Teleport(var_21_object, var_20_object, var_22_cvector, var_23_cvector);
	var_112_object = Obj();
	func_316(var_112_object);
	RemoveActor(var_112_object);
	return 12;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


task_0_event_32(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object)
{
	func_178(var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object);
	var_21_object = var_10_object;
	if(var_21_object != 0) {
		RemoveActor(var_10_object);
	}
	return 0;
}


task_0_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_string)
{
	var_13_bool = 0; var_14_bool = 0;
	var_16_bool = var_12_string == "cleanup";
	if(var_16_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_14_bool);
		var_17_bool = 0;
		var_17_bool = 0;
		var_18_bool = var_14_bool == 0; //@nz
		if(var_18_bool != 0) {
			var_19_bool = 0;
			func_271(var_19_bool);
			if(var_19_bool != 0) {
				var_17_bool = 1;
			}
		}
		if(var_17_bool != 0) {
			var_20_object = Obj();
			func_316(var_20_object);
			RemoveActor(var_20_object);
		}
	} else {
		var_24_bool = var_12_string == "restore";
		if(var_24_bool == 0) goto Label_254;
		var_0_bool = false;
	}
Label_254:
	return 2;
	
}


task_0_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_0_bool;
	if(var_13_bool != 0) {
		var_14_bool = 0;
		func_271(var_14_bool);
		if(var_14_bool != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		var_15_object = Obj();
		func_316(var_15_object);
		RemoveActor(var_15_object);
	}
	return 0;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	GetMainOutdoorScene(var_13_object);
	AddScriptedActor(var_5_object, "cs_b1q01_unosha1", "cs_play_all_trigger.bin", var_13_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_6_object, "cs_b1q01_unosha2", "cs_play_all_trigger.bin", var_13_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_1_object, "cs_b1q01_worker1", "cs_play_all_trigger.bin", var_13_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_2_object, "cs_b1q01_worker2", "cs_play_all_trigger.bin", var_13_object, CVector(0.0, 0.0, 0.0));
	func_223();
	return 2;
}
EMIT "Stack[-1] = 0";


func_322(var_45_object, var_46_object, var_47_string, var_48_string)
{
	var_49_object = Obj(); var_50_object = Obj();
	AddActor(var_50_object, var_47_string, var_46_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), var_48_string);
	var_50_object = var_45_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_223()
{
	
Label_223:
	Hold();
	goto Label_223;
}
EMIT "Return(); Pop(0)";


func_356()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_296(var_79_object)
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


func_330(var_104_bool, var_105_string, var_106_string)
{
	var_107_object = Obj(); var_108_object = Obj();
	FindActor(var_108_object, var_105_string);
	var_109_bool = var_108_object == 0; //@ne
	if(var_109_bool != 0) {
		var_104_bool = 0;
		return 2;
	}
	Trigger(var_108_object, var_106_string);
	var_104_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_271(var_14_bool)
{
	var_14_bool = 1;
	return 0;
}


func_273(var_64_object)
{
	var_65_bool = 0; var_66_int = 0; var_67_bool = 0; var_68_int = 0;
	var_69_bool = var_64_object == 0; //@nz
	if(var_69_bool != 0) {
		return 4;
	}
	@@var_64_object:HasProperty("noaccess", var_67_bool);
	var_71_bool = var_67_bool;
	if(var_71_bool != 0) {
		@@var_64_object:GetProperty("noaccess", var_68_int);
		var_75_int = var_68_int + (int)1;
		@@var_64_object:SetProperty("noaccess", var_75_int);
	} else {
		@@var_64_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_178(var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object)
{
	var_12_object = var_5_object;
	if(var_12_object != 0) {
		RemoveActor(var_5_object);
	}
	var_13_object = var_6_object;
	if(var_13_object != 0) {
		RemoveActor(var_6_object);
	}
	var_14_object = var_7_object;
	if(var_14_object != 0) {
		RemoveActor(var_7_object);
	}
	var_15_object = var_8_object;
	if(var_15_object != 0) {
		RemoveActor(var_8_object);
	}
	var_16_object = var_1_object;
	if(var_16_object != 0) {
		RemoveActor(var_1_object);
	}
	var_17_object = var_2_object;
	if(var_17_object != 0) {
		RemoveActor(var_2_object);
	}
	var_18_object = var_3_object;
	if(var_18_object != 0) {
		RemoveActor(var_3_object);
	}
	var_19_object = var_4_object;
	if(var_19_object != 0) {
		RemoveActor(var_4_object);
	}
	var_20_object = var_9_object;
	if(var_20_object != 0) {
		RemoveActor(var_9_object);
	}
	return 0;
}


func_342(var_26_object)
{
	var_27_bool = 0; var_28_bool = 0;
	IsPlayerActor(var_26_object, var_28_bool);
	var_29_bool = var_28_bool;
	if(var_29_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_316(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	self(var_17_object);
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_351()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


