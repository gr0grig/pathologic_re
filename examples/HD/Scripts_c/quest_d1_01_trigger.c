// @IMPORTS: GetMainOutdoorScene/1,AddScriptedActor/5,CameraSwitchToNormal/0,IsPlayerActor/2,Trigger/2,FindActor/2,RegisterKeyCallback/1,CameraPlay/1,CameraWaitForPlayFinish/0,UnregisterKeyCallback/1,sync/0,RemoveActor/1,Hold/0,IsLoaded/1,self/1,AddActor/6,Trace/1,AddActorByType/6,SetSepia/2
// @STRINGS: W:cs_d1q01_morlok|W:cs_play_all_trigger.bin|W:cs_d1q01_worker|W:d1q01_light|W:light_fire.xml|W:pt_d1q01_fire|W:scripted|W:play|W:player|W:space|W:cs_d1q01.mot|W:quest_d1_01|W:cutscene_end|W:cleanup|W:restore|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,object,object,object,object,bool params=0
// @EVENT_24: op=0x21 vars=int
// @EVENT_23: op=0x25 vars=object
// @EVENT_32: op=0x60 vars=
// @EVENT_26: op=0x75 vars=string
// @EVENT_6: op=0x91 vars=
// @PE: 0x21

task_0_event_24(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_int)
{
	CameraSwitchToNormal();
	return 0;
}


task_0_event_23(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_object)
{
	var_7_bool = 0; var_8_object = Obj(); var_9_bool = 0; var_10_object = Obj();
	var_11_bool = var_5_bool;
	if(var_11_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_6_object, var_9_bool);
	var_12_bool = var_9_bool == 0; //@nz
	if(var_12_bool != 0) {
		return 4;
	}
	var_5_bool = true;
	Trigger(var_1_object, "play");
	Trigger(var_2_object, "play");
	FindActor(var_10_object, "player");
	func_250();
	var_18_object = Obj();
	var_10_object = var_18_object;
	func_163(var_18_object);
	RegisterKeyCallback("space");
	CameraPlay("cs_d1q01.mot");
	CameraWaitForPlayFinish();
	UnregisterKeyCallback("space");
	var_35_object = Obj();
	var_10_object = var_35_object;
	func_186(var_35_object);
	func_255();
	CameraSwitchToNormal();
	var_48_bool = 0; var_49_string = ""; var_50_string = "";
	func_238(var_48_bool, "quest_d1_01", "cutscene_end");
	sync();
	RemoveActor(var_1_object);
	RemoveActor(var_2_object);
	return 4;
}
EMIT "Stack[-1] = 0";


task_0_event_32(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool)
{
	var_6_object = var_1_object;
	if(var_6_object != 0) {
		RemoveActor(var_1_object);
	}
	var_7_object = var_2_object;
	if(var_7_object != 0) {
		RemoveActor(var_2_object);
	}
	var_8_object = var_3_object;
	if(var_8_object != 0) {
		RemoveActor(var_3_object);
	}
	var_9_object = var_4_object;
	if(var_9_object != 0) {
		RemoveActor(var_4_object);
	}
	return 0;
}


task_0_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0;
	var_10_bool = var_6_string == "cleanup";
	if(var_10_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_8_bool);
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = var_8_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_bool = 0;
			func_161(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_206(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_144;
		var_0_bool = false;
	}
Label_144:
	return 2;
	
}


task_0_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_bool = var_0_bool;
	if(var_7_bool != 0) {
		var_8_bool = 0;
		func_161(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_206(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool)
{
	var_6_object = Obj(); var_7_object = Obj();
	GetMainOutdoorScene(var_7_object);
	AddScriptedActor(var_1_object, "cs_d1q01_morlok", "cs_play_all_trigger.bin", var_7_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_2_object, "cs_d1q01_worker", "cs_play_all_trigger.bin", var_7_object, CVector(0.0, 0.0, 0.0));
	var_14_object = Obj(); var_15_object = Obj(); var_16_string = ""; var_17_string = "";
	var_7_object = var_15_object;
	func_212(var_14_object, var_15_object, "d1q01_light", "light_fire.xml");
	var_3_object = var_14_object;
	var_22_object = Obj(); var_23_object = Obj(); var_24_string = ""; var_25_string = ""; var_26_string = "";
	var_7_object = var_23_object;
	func_220(var_22_object, var_23_object, "pt_d1q01_fire", "scripted", "fire.xml");
	var_4_object = var_22_object;
	func_113();
	return 2;
}
EMIT "Stack[-1] = 0";


func_161(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_163(var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0;
	var_23_bool = var_18_object == 0; //@nz
	if(var_23_bool != 0) {
		return 4;
	}
	@@var_18_object:HasProperty("noaccess", var_21_bool);
	var_25_bool = var_21_bool;
	if(var_25_bool != 0) {
		@@var_18_object:GetProperty("noaccess", var_22_int);
		var_29_int = var_22_int + (int)1;
		@@var_18_object:SetProperty("noaccess", var_29_int);
	} else {
		@@var_18_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_186(var_35_object)
{
	var_36_int = 0; var_37_int = 0;
	var_38_bool = var_35_object == 0; //@nz
	if(var_38_bool != 0) {
		return 2;
	}
	@@var_35_object:GetProperty("noaccess", var_37_int);
	var_41_bool = var_37_int > (int)1;
	if(var_41_bool != 0) {
		var_44_int = var_37_int - (int)1;
		@@var_35_object:SetProperty("noaccess", var_44_int);
	} else {
		@@var_35_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_206(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_238(var_48_bool, var_49_string, var_50_string)
{
	var_51_object = Obj(); var_52_object = Obj();
	FindActor(var_52_object, var_49_string);
	var_53_bool = var_52_object == 0; //@ne
	if(var_53_bool != 0) {
		var_48_bool = 0;
		return 2;
	}
	Trigger(var_52_object, var_50_string);
	var_48_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_113()
{
	
Label_113:
	Hold();
	goto Label_113;
}
EMIT "Return(); Pop(0)";


func_212(var_14_object, var_15_object, var_16_string, var_17_string)
{
	var_18_object = Obj(); var_19_object = Obj();
	AddActor(var_19_object, var_16_string, var_15_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), var_17_string);
	var_19_object = var_14_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_250()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_220(var_22_object, var_23_object, var_24_string, var_25_string, var_26_string)
{
	var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj();
	@@var_23_object:GetLocator(var_24_string, var_31_bool, var_32_cvector, var_33_cvector);
	var_35_bool = var_31_bool == 0; //@nz
	if(var_35_bool != 0) {
		var_37_int = "Locator " + var_24_string;
		var_39_int = var_37_int + " doesn't exist";
		Trace(var_39_int);
	} else {
		AddActorByType(Obj(), var_25_string, var_23_object, var_32_cvector, var_33_cvector, var_26_string);
	}
	var_34_object = var_22_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_255()
{
	SetSepia((int)0, (int)0);
	return 0;
}


