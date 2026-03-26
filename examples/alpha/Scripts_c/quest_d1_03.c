// @IMPORTS: SetVariable/2,GetSceneByName/2,Trace/1,AddActor/6,GetVariable/2,RemoveActor/1,Trigger/2,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: W:d1q03|W:dt_house_1_04|W:pt_butcher|A:GetLocator|W:Locator doesn't exist for qd1_03_butcher|W:pers_butcher|W:butcher_qd1_03.xml|W:butcher_fail|W:butcher_battle|W:butcher_death|W:d1q03IsKapella|W:kapella_finish|W:cleanup|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Adding diary entry
// @GLOBALS: 0:object:
// @RUN_OP: 0x1
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x1c vars=string
// @EVENT_9: op=0x8d vars=int,float
// @PE: 0x8d

task_0_event_26(var_0_object, var_1_string)
{
	var_2_int = 0; var_3_int = 0;
	Trace(var_1_string);
	var_5_bool = var_1_string == "butcher_fail";
	if(var_5_bool != 0) {
		func_226();
		func_88();
	} else {
		var_39_bool = var_1_string == "butcher_battle";
		if(var_39_bool != 0) {
			SetVariable("d1q03", (int)2);
			goto Label_79;
		}
		var_43_bool = var_1_string == "butcher_death";
		if(var_43_bool != 0) {
			GetVariable("d1q03IsKapella", var_3_int);
			var_45_int = var_3_int;
			if(var_45_int != 0) {
				func_194();
				func_88();
			} else {
				func_210();
				func_80();
		}
			var_67_bool = var_1_string == "kapella_finish";
			if(var_67_bool == 0) goto Label_79;
			RemoveActor(var_0_object);
			func_80();
		}
		goto Label_79;
	}
Label_79:
	return 2;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_96();
	return 0;
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_bool = 0; var_3_cvector = CVector(0,0,0); var_4_cvector = CVector(0,0,0); var_5_object = Obj(); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0);
	SetVariable("d1q03", (int)1);
	GetSceneByName(var_5_object, "dt_house_1_04");
	@@var_5_object:GetLocator("pt_butcher", var_6_bool, var_7_cvector, var_8_cvector);
	var_13_bool = var_6_bool == 0; //@nz
	if(var_13_bool != 0) {
		Trace("Locator doesn't exist for qd1_03_butcher");
	} else {
		AddActor(var_0_object, "pers_butcher", var_5_object, var_7_cvector, var_8_cvector, "butcher_qd1_03.xml");
	}
	var_15_int = 0;
	func_122((int)1);
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_0()
{
	return 0;
}


func_96()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("d1q03", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_88();
	}
	return 2;
}


func_194()
{
	var_46_object = Obj(); var_47_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_47_object, (int)39, (int)2, (int)12121);
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0;
	var_47_object = var_53_object;
	func_165(var_52_bool, var_53_object, (int)37);
	return 2;
}
EMIT "Stack[-1] = 0";


func_226()
{
	var_6_object = Obj(); var_7_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_7_object, (int)42, (int)2, (int)12124);
	var_12_bool = 0; var_13_object = Obj(); var_14_int = 0;
	var_7_object = var_13_object;
	func_165(var_12_bool, var_13_object, (int)37);
	return 2;
}
EMIT "Stack[-1] = 0";


func_165(var_12_bool, var_13_object, var_14_int)
{
	var_15_object = Obj(); var_16_object = Obj(); var_17_int = 0; var_18_object = Obj(); var_19_object = Obj(); var_20_int = 0;
	func_152(Obj());
	var_21_object = var_18_object;
	@@var_18_object:Find(var_14_int, var_19_object);
	var_26_bool = var_19_object == 0; //@nz
	if(var_26_bool != 0) {
		var_28_int = "Can't find diary parent with id: " + var_14_int;
		Trace(var_28_int);
		var_12_bool = 0;
		return 6;
	}
	@@var_19_object:AddChild(var_13_object);
	SetVariable("player_diary", (int)1);
	@@var_13_object:GetCategory(var_20_int);
	SetDiarySection(var_20_int);
	var_12_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_107(var_0_object)
{
	EventDisable(26);
	func_0();
	var_21_bool = var_0_object != 0; //@nn
	if(var_21_bool != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_23_object = Obj();
	func_146(var_23_object);
	RemoveActor(var_23_object);
	return 0;
}


func_80()
{
	SetVariable("d1q03", (int)1000);
	func_107(var_3_int);
	return 0;
}


func_210()
{
	var_55_object = Obj(); var_56_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_56_object, (int)40, (int)2, (int)12122);
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0;
	var_56_object = var_62_object;
	func_165(var_61_bool, var_62_object, (int)37);
	return 2;
}
EMIT "Stack[-1] = 0";


func_146(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj();
	self(var_25_object);
	var_25_object = var_23_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_88()
{
	SetVariable("d1q03", (int)-1);
	func_107(var_4_int);
	return 0;
}


func_122(var_15_int)
{
	var_16_float = 0; var_17_float = 0;
	GetGameTime(var_17_float);
	var_19_float = var_15_int * (int)24;
	var_20_bool = var_17_float >= var_19_float;
	if(var_20_bool != 0) {
		func_107(var_17_float);
	} else {
		var_28_float = var_15_int * (int)24;
		SetTimeEvent((int)0, var_28_float);
		Hold();
	}
	return 2;
	
}


func_152(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj();
	GetDiaryRoot(var_23_object);
	var_24_bool = var_23_object == 0; //@nz
	if(var_24_bool != 0) {
		Trace("Can't retrieve diary root");
		var_21_object = 0;
		return 2;
	}
	var_23_object = var_21_object;
	return 2;
}
EMIT "Stack[-1] = 0";


