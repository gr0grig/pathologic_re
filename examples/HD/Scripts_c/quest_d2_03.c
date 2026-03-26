// @IMPORTS: SetVariable/2,Trace/1,GetSceneByName/2,GetVariable/2,FindActor/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6,GetDiaryRoot/1
// @STRINGS: W:d2q03|W:birdmask|W:r4_house_2_02|W:r4_house_2_02@door1|W:r4_house_2_02@door2|W:pt_d2q03_birdmask|W:pers_birdmask|W:d2q03_birdmask.xml|W:completed|W:d2q03RepDown|W:icot_lara_supply|W:enabled|A:SetProperty|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|W:Can't retrieve diary root|A:Find|A:Remove
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x9 vars=string
// @EVENT_9: op=0x7a vars=int,float
// @PE: 0x7a,0xcb

task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj();
	Trace(var_1_string);
	var_5_bool = var_1_string == "birdmask";
	if(var_5_bool != 0) {
		GetSceneByName(var_3_object, "r4_house_2_02");
		var_7_string = ""; var_8_bool = 0;
		func_151("r4_house_2_02@door1", (bool)0);
		var_17_string = ""; var_18_bool = 0;
		func_151("r4_house_2_02@door2", (bool)0);
		var_19_object = Obj(); var_20_object = Obj(); var_21_string = ""; var_22_string = ""; var_23_string = "";
		var_3_object = var_20_object;
		func_133(var_19_object, var_20_object, "pt_d2q03_birdmask", "pers_birdmask", "d2q03_birdmask.xml");
		var_0_object = var_19_object;
		var_3_object = 0;
	} else {
		var_38_bool = var_1_string == "completed";
		if(var_38_bool == 0) goto Label_44;
		func_71();
	}
Label_44:
	return 2;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_45();
	return 0;
}


main(var_0_object)
{
	SetVariable("d2q03", (int)1);
	var_3_int = 0;
	func_103((int)2);
	return 0;
}


func_133(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string)
{
	var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_object = Obj();
	@@var_20_object:GetLocator(var_21_string, var_28_bool, var_29_cvector, var_30_cvector);
	var_32_bool = var_28_bool == 0; //@nz
	if(var_32_bool != 0) {
		var_34_int = "Locator " + var_21_string;
		var_36_int = var_34_int + " doesn't exist";
		Trace(var_36_int);
	} else {
		AddActor(Obj(), var_22_string, var_20_object, var_29_cvector, var_30_cvector, var_23_string);
	}
	var_31_object = var_19_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_71()
{
	var_39_object = Obj(); var_40_object = Obj();
	FindActor(var_40_object, "icot_lara_supply");
	@@var_40_object:SetProperty("enabled", (bool)1);
	SetVariable("d2q03", (int)1000);
	func_88(var_40_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_168()
{
	var_9_bool = 0; var_10_int = 0;
	func_186(var_9_bool, (int)37);
	return 0;
}


func_103(var_3_int)
{
	var_4_float = 0; var_5_float = 0;
	GetGameTime(var_5_float);
	var_7_float = var_3_int * (int)24;
	var_8_bool = var_5_float >= var_7_float;
	if(var_8_bool != 0) {
		func_88(var_5_float);
	} else {
		var_28_float = var_3_int * (int)24;
		SetTimeEvent((int)0, var_28_float);
		Hold();
	}
	return 2;
	
}


func_203()
{
	func_168();
	return 0;
}


func_45()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("d2q03", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		var_9_bool = var_4_int != (int)0;
		if(var_9_bool != 0) {
			SetVariable("d2q03RepDown", (int)1);
		}
		func_63();
	}
	return 2;
}


func_173(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	GetDiaryRoot(var_17_object);
	var_18_bool = var_17_object == 0; //@nz
	if(var_18_bool != 0) {
		Trace("Can't retrieve diary root");
		var_15_object = 0;
		return 2;
	}
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_151(var_7_string, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj();
	FindActor(var_10_object, var_7_string);
	var_11_bool = var_10_object == 0; //@nz
	if(var_11_bool != 0) {
		var_13_int = "Door " + var_7_string;
		var_15_int = var_13_int + " not found";
		Trace(var_15_int);
	} else {
		@@var_10_object:SetProperty("locked", var_8_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_88(var_0_object)
{
	EventDisable(26);
	func_203();
	var_21_object = var_0_object;
	if(var_21_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_23_object = Obj();
	func_127(var_23_object);
	RemoveActor(var_23_object);
	return 0;
}


func_186(var_9_bool, var_10_int)
{
	var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj();
	func_173(Obj());
	var_15_object = var_13_object;
	@@var_13_object:Find(var_10_int, var_14_object);
	var_20_bool = var_14_object == 0; //@nz
	if(var_20_bool != 0) {
		var_9_bool = 0;
		return 4;
	}
	@@var_14_object:Remove();
	var_9_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_127(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj();
	self(var_25_object);
	var_25_object = var_23_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_63()
{
	SetVariable("d2q03", (int)-1);
	func_88(var_4_int);
	return 0;
}


