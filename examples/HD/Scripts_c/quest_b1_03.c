// @IMPORTS: SetVariable/2,Trace/1,GetMainOutdoorScene/1,UnlockAchievement/1,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,FindActor/2,Trigger/2
// @STRINGS: W:quest_b1_01|W:remove_cutscene|W:b1q03|W:place_doberman|W:pt_b1q03_doberman|W:pers_doberman|W:b1q03_doberman.xml|W:doberman_dead|W:b1q03_dead|W:ACHIEVEMENT_DONT|W:cleanup|A:Remove|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0xe vars=string
// @EVENT_9: op=0x64 vars=int,float
// @PE: 0x64

task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj();
	Trace(var_1_string);
	var_5_bool = var_1_string == "place_doberman";
	if(var_5_bool != 0) {
		GetMainOutdoorScene(var_3_object);
		var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = "";
		var_3_object = var_7_object;
		func_111(var_6_object, var_7_object, "pt_b1q03_doberman", "pers_doberman", "b1q03_doberman.xml");
		var_0_object = var_6_object;
	} else {
		var_25_bool = var_1_string == "doberman_dead";
		if(var_25_bool != 0) {
			SetVariable("b1q03_dead", (int)1);
			UnlockAchievement("ACHIEVEMENT_DONT");
			goto Label_49;
		}
		var_30_bool = var_1_string == "cleanup";
		if(var_30_bool == 0) goto Label_49;
		func_69(Obj());
	}
Label_49:
	return 2;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_50();
	return 0;
}


main(var_0_object)
{
	var_1_bool = 0; var_2_string = ""; var_3_string = "";
	func_129(var_1_bool, "quest_b1_01", "remove_cutscene");
	SetVariable("b1q03", (int)1);
	var_9_int = 0;
	func_81((int)1);
	return 0;
}


func_129(var_1_bool, var_2_string, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj();
	FindActor(var_5_object, var_2_string);
	var_6_bool = var_5_object == 0; //@ne
	if(var_6_bool != 0) {
		var_1_bool = 0;
		return 2;
	}
	Trigger(var_5_object, var_3_string);
	var_1_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_69(var_0_object)
{
	EventDisable(26);
	var_15_object = var_0_object;
	if(var_15_object != 0) {
		@@@var_0_object:Remove();
		var_0_object = 0;
	}
	var_16_object = Obj();
	func_105(var_16_object);
	RemoveActor(var_16_object);
	return 0;
}


func_105(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj();
	self(var_18_object);
	var_18_object = var_16_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_111(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string)
{
	var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj();
	@@var_7_object:GetLocator(var_8_string, var_15_bool, var_16_cvector, var_17_cvector);
	var_19_bool = var_15_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_21_int = "Locator " + var_8_string;
		var_23_int = var_21_int + " doesn't exist";
		Trace(var_23_int);
	} else {
		@@var_7_object:AddStationaryActor(Obj(), var_16_cvector, var_17_cvector, var_9_string, var_10_string);
	}
	var_18_object = var_6_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_81(var_9_int)
{
	var_10_float = 0; var_11_float = 0;
	GetGameTime(var_11_float);
	var_13_float = var_9_int * (int)24;
	var_14_bool = var_11_float >= var_13_float;
	if(var_14_bool != 0) {
		func_69(var_11_float);
	} else {
		var_21_float = var_9_int * (int)24;
		SetTimeEvent((int)0, var_21_float);
		Hold();
	}
	return 2;
	
}


func_50()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("b1q03", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_61();
	}
	return 2;
}


func_61()
{
	SetVariable("b1q03", (int)-1);
	func_69(var_4_int);
	return 0;
}


