// @IMPORTS: GetMainOutdoorScene/1,Trace/1,GetVariable/2,SetVariable/2,GetSceneByName/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,FindActor/2,self/1,CreateObjectVector/1,Teleport/4
// @STRINGS: W:pt_b11q02_doberman1|W:pers_doberman|W:b11q02_doberman.xml|A:add|W:pt_b11q02_doberman2|W:pt_b11q02_doberman3|W:teleport|W:mnogogrannik_han|W:pt_b11q02_teleport|W:fail|W:completed|W:b11q02|W:cot_kapella|W:nohan|W:player|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Teleport location '|W:' not found in scene '|A:size|A:get|A:Remove|A:clear
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x28 vars=string
// @EVENT_9: op=0x90 vars=int,float
// @PE: 0x28,0x90

task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string);
	var_3_bool = var_1_string == "teleport";
	if(var_3_bool != 0) {
		var_4_object = Obj(); var_5_string = ""; var_6_string = "";
		func_149(Obj());
		var_7_object = var_4_object;
		func_186(var_4_object, "mnogogrannik_han", "pt_b11q02_teleport");
	} else {
		var_29_bool = var_1_string == "fail";
		if(var_29_bool != 0) {
			func_84();
			goto Label_69;
		}
		var_47_bool = var_1_string == "completed";
		if(var_47_bool == 0) goto Label_69;
		func_92();
	}
Label_69:
	return 0;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_70();
	return 0;
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj();
	var_3_object = Obj();
	func_162(var_3_object);
	var_0_object = var_3_object;
	GetMainOutdoorScene(var_2_object);
	var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = "";
	var_2_object = var_7_object;
	func_168(var_6_object, var_7_object, "pt_b11q02_doberman1", "pers_doberman", "b11q02_doberman.xml");
	@@@var_0_object:add(var_6_object);
	var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = ""; var_28_string = "";
	var_2_object = var_25_object;
	func_168(var_24_object, var_25_object, "pt_b11q02_doberman2", "pers_doberman", "b11q02_doberman.xml");
	@@@var_0_object:add(var_24_object);
	var_29_object = Obj(); var_30_object = Obj(); var_31_string = ""; var_32_string = ""; var_33_string = "";
	var_2_object = var_30_object;
	func_168(var_29_object, var_30_object, "pt_b11q02_doberman3", "pers_doberman", "b11q02_doberman.xml");
	@@@var_0_object:add(var_29_object);
	var_34_int = 0;
	func_125((int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_162(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj();
	CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_70()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("b11q02", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_84();
	}
	func_114(var_4_int);
	return 2;
}


func_168(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string)
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


func_156(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj();
	self(var_53_object);
	var_53_object = var_51_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_114(var_0_object)
{
	EventDisable(26);
	var_40_object = Obj();
	var_40_object = var_0_object;
	func_210(var_40_object);
	var_51_object = Obj();
	func_156(var_51_object);
	RemoveActor(var_51_object);
	return 0;
}


func_210(var_40_object)
{
	var_41_int = 0; var_42_int = 0; var_43_object = Obj(); var_44_int = 0; var_45_int = 0; var_46_object = Obj();
	var_47_object = var_40_object;
	if(var_47_object != 0) {
		@@var_40_object:size(var_44_int);
		var_45_int = 0;

	Label_216:
		var_48_bool = var_45_int < var_44_int;
		if(var_48_bool != 0) {
			@@var_40_object:get(var_46_object, var_45_int);
			var_49_object = var_46_object;
			if(var_49_object != 0) {
				@@var_46_object:Remove();
			}
			var_46_object = 0;
			var_45_int = var_45_int + (int)1;
			goto Label_216;
		}
		@@var_40_object:clear();
	}
	return 6;
}


func_84()
{
	SetVariable("b11q02", (int)-1);
	func_114(var_4_int);
	return 0;
}


func_149(var_7_object)
{
	var_8_object = Obj(); var_9_object = Obj();
	FindActor(var_9_object, "player");
	var_9_object = var_7_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_186(var_4_object, var_5_string, var_6_string)
{
	var_11_object = Obj(); var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0);
	var_19_bool = var_4_object == 0; //@nz
	if(var_19_bool != 0) {
		return 8;
	}
	GetSceneByName(var_15_object, var_5_string);
	@@var_15_object:GetLocator(var_6_string, var_16_bool, var_17_cvector, var_18_cvector);
	var_20_bool = var_16_bool == 0; //@nz
	if(var_20_bool != 0) {
		var_22_int = "Teleport location '" + var_6_string;
		var_24_int = var_22_int + "' not found in scene '";
		var_25_int = var_24_int + var_5_string;
		var_27_int = var_25_int + "'";
		Trace(var_27_int);
	} else {
		Teleport(var_4_object, var_15_object, var_17_cvector, var_18_cvector);
	}
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_92()
{
	var_48_object = Obj(); var_49_object = Obj();
	SetVariable("b11q02", (int)1000);
	GetSceneByName(var_49_object, "cot_kapella");
	Trigger(var_49_object, "han");
	GetSceneByName(var_49_object, "mnogogrannik_han");
	Trigger(var_49_object, "nohan");
	func_114(var_49_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_125(var_34_int)
{
	var_35_float = 0; var_36_float = 0;
	GetGameTime(var_36_float);
	var_38_float = var_34_int * (int)24;
	var_39_bool = var_36_float >= var_38_float;
	if(var_39_bool != 0) {
		func_114(var_36_float);
	} else {
		var_56_float = var_34_int * (int)24;
		SetTimeEvent((int)0, var_56_float);
		Hold();
	}
	return 2;
	
}


