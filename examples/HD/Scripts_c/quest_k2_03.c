// @IMPORTS: SetVariable/2,Trace/1,GetSceneByName/2,GetVariable/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6,FindActor/2
// @STRINGS: W:k2q03|W:place_arfist|W:r4_house_2_02|W:pt_k2q03_arfist|W:pers_wasted_male|W:k2q03_arfist.xml|W:place_danko|W:icot_eva_door|W:pt_k2q03_danko|W:NPC_Bakalavr|W:k2q03_danko.xml|W:completed|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|A:Close|W:locked|A:SetProperty
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_26: op=0x9 vars=string
// @EVENT_9: op=0x7c vars=int,float
// @PE: 0x7c

task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj();
	Trace(var_2_string);
	var_8_bool = var_2_string == "place_arfist";
	if(var_8_bool != 0) {
		GetSceneByName(var_5_object, "r4_house_2_02");
		var_10_object = Obj(); var_11_object = Obj(); var_12_string = ""; var_13_string = ""; var_14_string = "";
		var_5_object = var_11_object;
		func_135(var_10_object, var_11_object, "pt_k2q03_arfist", "pers_wasted_male", "k2q03_arfist.xml");
		var_0_object = var_10_object;
		var_5_object = 0;
	} else {
		var_29_bool = var_2_string == "place_danko";
		if(var_29_bool != 0) {
			var_30_string = ""; var_31_bool = 0;
			func_153("icot_eva_door", (bool)1);
			GetSceneByName(var_6_object, "r4_house_2_02");
			var_42_object = Obj(); var_43_object = Obj(); var_44_string = ""; var_45_string = ""; var_46_string = "";
			var_6_object = var_43_object;
			func_135(var_42_object, var_43_object, "pt_k2q03_danko", "NPC_Bakalavr", "k2q03_danko.xml");
			var_1_object = var_42_object;
			var_6_object = 0;
			goto Label_55;
		}
		var_48_bool = var_2_string == "completed";
		if(var_48_bool == 0) goto Label_55;
		func_75();
	}
Label_55:
	return 4;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_56();
	return 0;
}


main(var_0_object, var_1_object)
{
	SetVariable("k2q03", (int)1);
	var_4_int = 0;
	func_105((int)2);
	return 0;
}


func_129(var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj();
	self(var_27_object);
	var_27_object = var_25_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_67()
{
	SetVariable("k2q03", (int)-1);
	func_83(var_4_int, var_5_int);
	return 0;
}


func_135(var_10_object, var_11_object, var_12_string, var_13_string, var_14_string)
{
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj();
	@@var_11_object:GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector);
	var_23_bool = var_19_bool == 0; //@nz
	if(var_23_bool != 0) {
		var_25_int = "Locator " + var_12_string;
		var_27_int = var_25_int + " doesn't exist";
		Trace(var_27_int);
	} else {
		AddActor(Obj(), var_13_string, var_11_object, var_20_cvector, var_21_cvector, var_14_string);
	}
	var_22_object = var_10_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_105(var_4_int)
{
	var_5_float = 0; var_6_float = 0;
	GetGameTime(var_6_float);
	var_8_float = var_4_int * (int)24;
	var_9_bool = var_6_float >= var_8_float;
	if(var_9_bool != 0) {
		func_83(var_5_float, var_6_float);
	} else {
		var_30_float = var_4_int * (int)24;
		SetTimeEvent((int)0, var_30_float);
		Hold();
	}
	return 2;
	
}


func_75()
{
	SetVariable("k2q03", (int)1000);
	func_83(var_5_object, var_6_object);
	return 0;
}


func_83(var_0_object, var_1_object)
{
	EventDisable(26);
	var_10_string = ""; var_11_bool = 0;
	func_153("icot_eva_door", (bool)0);
	var_21_object = var_0_object;
	if(var_21_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_23_object = var_1_object;
	if(var_23_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_25_object = Obj();
	func_129(var_25_object);
	RemoveActor(var_25_object);
	return 0;
}


func_56()
{
	var_4_int = 0; var_5_int = 0;
	GetVariable("k2q03", var_5_int);
	var_8_bool = var_5_int != (int)1000;
	if(var_8_bool != 0) {
		func_67();
	}
	return 2;
}


func_153(var_10_string, var_11_bool)
{
	var_12_object = Obj(); var_13_object = Obj();
	FindActor(var_13_object, var_10_string);
	var_14_bool = var_13_object == 0; //@nz
	if(var_14_bool != 0) {
		var_16_int = "Door " + var_10_string;
		var_18_int = var_16_int + " not found";
		Trace(var_18_int);
	} else {
		var_19_bool = var_11_bool;
		if(var_19_bool != 0) {
			@@var_13_object:Close();
		}
		@@var_13_object:SetProperty("locked", var_11_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


