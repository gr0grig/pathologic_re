// @IMPORTS: IsPlayerActor/2,CameraSwitchToNormal/0,Hold/0,IsLoaded/1,RemoveActor/1,SetVariable/2,GetMainOutdoorScene/1,RegisterKeyCallback/1,CameraPlay/1,CameraWaitForPlayFinish/0,UnregisterKeyCallback/1,FindActor/2,self/1,CreateObjectVector/1,AddScriptedActor/6,Trigger/2,SetSepia/2
// @STRINGS: W:cleanup|W:restore|W:b10q02Cutscene|W:cs_b10q02_girl|W:cs_play_all.bin|A:ForceGeometryLoad|A:add|W:cs_b10q02_boy|W:cs_b10q02_doberman|W:cs_b10q02_littleboy|W:space|W:cs_b10q02.mot|W:quest_b10_02|W:place_bomb|W:player|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty|A:size|A:get|A:clear
// @RUN_OP: 0x11
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_23: op=0x0 vars=object
// @EVENT_24: op=0xd vars=int
// @EVENT_26: op=0x15 vars=string
// @EVENT_6: op=0x31 vars=
// @TASK_1: vars= params=0
// @PE: 0xd

task_0_event_23(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0;
	IsPlayerActor(var_1_object, var_3_bool);
	var_4_bool = var_3_bool == 0; //@nz
	if(var_4_bool != 0) {
		return 2;
	}
	EventDisable(23);
	TaskCall(1);
	func_67();
	TaskReturn();
	return 2;
}


task_0_event_24(var_0_bool, var_1_int)
{
	CameraSwitchToNormal();
	return 0;
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0;
	var_5_bool = var_1_string == "cleanup";
	if(var_5_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_3_bool);
		var_6_bool = 0;
		var_6_bool = 0;
		var_7_bool = var_3_bool == 0; //@nz
		if(var_7_bool != 0) {
			var_8_bool = 0;
			func_65(var_8_bool);
			if(var_8_bool != 0) {
				var_6_bool = 1;
			}
		}
		if(var_6_bool != 0) {
			var_9_object = Obj();
			func_222(var_9_object);
			RemoveActor(var_9_object);
		}
	} else {
		var_13_bool = var_1_string == "restore";
		if(var_13_bool == 0) goto Label_48;
		var_0_bool = false;
	}
Label_48:
	return 2;
	
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0;
	var_1_bool = 0;
	var_2_bool = var_0_bool;
	if(var_2_bool != 0) {
		var_3_bool = 0;
		func_65(var_3_bool);
		if(var_3_bool != 0) {
			var_1_bool = 1;
		}
	}
	if(var_1_bool != 0) {
		var_4_object = Obj();
		func_222(var_4_object);
		RemoveActor(var_4_object);
	}
	return 0;
}


main(var_0_bool)
{
	
Label_17:
	Hold();
	goto Label_17;
}
EMIT "Return(); Pop(0)";


func_65(var_3_bool)
{
	var_3_bool = 1;
	return 0;
}


func_67()
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj();
	SetVariable("b10q02Cutscene", (int)1);
	GetMainOutdoorScene(var_9_object);
	func_228(Obj());
	var_15_object = var_10_object;
	var_18_object = Obj(); var_19_object = Obj(); var_20_string = ""; var_21_string = "";
	var_9_object = var_19_object;
	func_234(var_18_object, var_19_object, "cs_b10q02_girl", "cs_play_all.bin");
	var_18_object = var_11_object;
	@@var_11_object:ForceGeometryLoad();
	@@var_10_object:add(var_11_object);
	var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = "";
	var_9_object = var_27_object;
	func_234(var_26_object, var_27_object, "cs_b10q02_boy", "cs_play_all.bin");
	var_26_object = var_11_object;
	@@var_11_object:ForceGeometryLoad();
	@@var_10_object:add(var_11_object);
	var_30_object = Obj(); var_31_object = Obj(); var_32_string = ""; var_33_string = "";
	var_9_object = var_31_object;
	func_234(var_30_object, var_31_object, "cs_b10q02_doberman", "cs_play_all.bin");
	var_30_object = var_11_object;
	@@var_11_object:ForceGeometryLoad();
	@@var_10_object:add(var_11_object);
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = "";
	var_9_object = var_35_object;
	func_234(var_34_object, var_35_object, "cs_b10q02_littleboy", "cs_play_all.bin");
	var_34_object = var_11_object;
	@@var_11_object:ForceGeometryLoad();
	@@var_10_object:add(var_11_object);
	func_172(Obj());
	var_38_object = var_12_object;
	func_275();
	var_44_object = Obj();
	var_12_object = var_44_object;
	func_179(var_44_object);
	RegisterKeyCallback("space");
	CameraPlay("cs_b10q02.mot");
	CameraWaitForPlayFinish();
	UnregisterKeyCallback("space");
	var_61_object = Obj();
	var_12_object = var_61_object;
	func_202(var_61_object);
	func_280();
	CameraSwitchToNormal();
	var_74_object = Obj();
	var_10_object = var_74_object;
	func_254(var_74_object);
	var_85_bool = 0; var_86_string = ""; var_87_string = "";
	func_242(var_85_bool, "quest_b10_02", "place_bomb");
	var_91_object = Obj();
	func_222(var_91_object);
	RemoveActor(var_91_object);
	return 8;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_228(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	CreateObjectVector(var_17_object);
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_234(var_18_object, var_19_object, var_20_string, var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj();
	AddScriptedActor(var_23_object, var_20_string, var_21_string, var_19_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0));
	var_23_object = var_18_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_202(var_61_object)
{
	var_62_int = 0; var_63_int = 0;
	var_64_bool = var_61_object == 0; //@nz
	if(var_64_bool != 0) {
		return 2;
	}
	@@var_61_object:GetProperty("noaccess", var_63_int);
	var_67_bool = var_63_int > (int)1;
	if(var_67_bool != 0) {
		var_70_int = var_63_int - (int)1;
		@@var_61_object:SetProperty("noaccess", var_70_int);
	} else {
		@@var_61_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_172(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj();
	FindActor(var_40_object, "player");
	var_40_object = var_38_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_242(var_85_bool, var_86_string, var_87_string)
{
	var_88_object = Obj(); var_89_object = Obj();
	FindActor(var_89_object, var_86_string);
	var_90_bool = var_89_object == 0; //@ne
	if(var_90_bool != 0) {
		var_85_bool = 0;
		return 2;
	}
	Trigger(var_89_object, var_87_string);
	var_85_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_275()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_179(var_44_object)
{
	var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0;
	var_49_bool = var_44_object == 0; //@nz
	if(var_49_bool != 0) {
		return 4;
	}
	@@var_44_object:HasProperty("noaccess", var_47_bool);
	var_51_bool = var_47_bool;
	if(var_51_bool != 0) {
		@@var_44_object:GetProperty("noaccess", var_48_int);
		var_55_int = var_48_int + (int)1;
		@@var_44_object:SetProperty("noaccess", var_55_int);
	} else {
		@@var_44_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_254(var_74_object)
{
	var_75_int = 0; var_76_int = 0; var_77_object = Obj(); var_78_int = 0; var_79_int = 0; var_80_object = Obj();
	var_81_object = var_74_object;
	if(var_81_object != 0) {
		@@var_74_object:size(var_78_int);
		var_79_int = 0;

	Label_260:
		var_82_bool = var_79_int < var_78_int;
		if(var_82_bool != 0) {
			@@var_74_object:get(var_80_object, var_79_int);
			var_83_object = var_80_object;
			if(var_83_object != 0) {
				RemoveActor(var_80_object);
			}
			var_80_object = 0;
			var_79_int = var_79_int + (int)1;
			goto Label_260;
		}
		@@var_74_object:clear();
	}
	return 6;
}


func_280()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_222(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj();
	self(var_6_object);
	var_6_object = var_4_object;
	return 2;
}
EMIT "Stack[-1] = 0";


