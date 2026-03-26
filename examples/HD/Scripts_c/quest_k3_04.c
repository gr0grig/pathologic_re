// @IMPORTS: SetVariable/2,GetSceneByName/2,Trace/1,GetMainOutdoorScene/1,GetVariable/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6,FindActor/2
// @STRINGS: W:icot_eva_door|W:k3q04|W:dt_house2_08|W:pt_k3q04_danko|W:NPC_Bakalavr|W:k3q04_danko.xml|W:place_burah_lopuh|W:burah_home@door1|W:house5_23|W:pt_k3q04_burah|W:NPC_Burah|W:k3q04_burah.xml|W:pt_d3q03_boy|W:pers_littleboy|W:k3q04_boy.xml|W:completed|W:fail|W:cleanup|A:Remove|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty|A:Close
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_26: op=0x1b vars=string
// @EVENT_9: op=0x98 vars=int,float
// @PE: 0x98

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj();
	Trace(var_3_string);
	var_7_bool = var_3_string == "place_burah_lopuh";
	if(var_7_bool != 0) {
		var_8_string = ""; var_9_bool = 0;
		func_199("burah_home@door1", (bool)1);
		GetSceneByName(var_5_object, "house5_23");
		var_19_object = Obj(); var_20_object = Obj(); var_21_string = ""; var_22_string = ""; var_23_string = "";
		var_5_object = var_20_object;
		func_163(var_19_object, var_20_object, "pt_k3q04_burah", "NPC_Burah", "k3q04_burah.xml");
		var_1_object = var_19_object;
		GetMainOutdoorScene(var_5_object);
		var_37_object = Obj(); var_38_object = Obj(); var_39_string = ""; var_40_string = ""; var_41_string = "";
		var_5_object = var_38_object;
		func_181(var_37_object, var_38_object, "pt_d3q03_boy", "pers_littleboy", "k3q04_boy.xml");
		var_2_object = var_37_object;
		var_5_object = 0;
	} else {
		var_56_bool = var_3_string == "completed";
		if(var_56_bool != 0) {
			func_94();
			goto Label_74;
		}
		var_81_bool = var_3_string == "fail";
		if(var_81_bool == 0) goto Label_74;
		func_86();
	}
Label_74:
	return 2;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	func_75();
	return 0;
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	var_5_string = ""; var_6_bool = 0;
	func_216("icot_eva_door", (bool)1);
	SetVariable("k3q04", (int)1);
	GetSceneByName(var_4_object, "dt_house2_08");
	var_19_object = Obj(); var_20_object = Obj(); var_21_string = ""; var_22_string = ""; var_23_string = "";
	var_4_object = var_20_object;
	func_163(var_19_object, var_20_object, "pt_k3q04_danko", "NPC_Bakalavr", "k3q04_danko.xml");
	var_0_object = var_19_object;
	var_37_int = 0;
	func_133((int)3);
	return 2;
}
EMIT "Stack[-1] = 0";


func_163(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string)
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


func_133(var_37_int)
{
	var_38_float = 0; var_39_float = 0;
	GetGameTime(var_39_float);
	var_41_float = var_37_int * (int)24;
	var_42_bool = var_39_float >= var_41_float;
	if(var_42_bool != 0) {
		func_102(var_37_int, var_38_float, var_39_float);
	} else {
		var_65_float = var_37_int * (int)24;
		SetTimeEvent((int)0, var_65_float);
		Hold();
	}
	return 2;
	
}


func_102(var_0_object, var_1_object, var_2_object)
{
	EventDisable(26);
	var_43_string = ""; var_44_bool = 0;
	func_216("icot_eva_door", (bool)0);
	var_45_string = ""; var_46_bool = 0;
	func_199("burah_home@door1", (bool)0);
	var_55_object = var_0_object;
	if(var_55_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_57_object = var_1_object;
	if(var_57_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_59_object = var_2_object;
	if(var_59_object != 0) {
		@@@var_2_object:Remove();
	}
	var_60_object = Obj();
	func_157(var_60_object);
	RemoveActor(var_60_object);
	return 0;
}


func_199(var_45_string, var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj();
	FindActor(var_48_object, var_45_string);
	var_49_bool = var_48_object == 0; //@nz
	if(var_49_bool != 0) {
		var_51_int = "Door " + var_45_string;
		var_53_int = var_51_int + " not found";
		Trace(var_53_int);
	} else {
		@@var_48_object:SetProperty("locked", var_46_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_75()
{
	var_5_int = 0; var_6_int = 0;
	GetVariable("k3q04", var_6_int);
	var_9_bool = var_6_int != (int)1000;
	if(var_9_bool != 0) {
		func_86();
	}
	return 2;
}


func_181(var_37_object, var_38_object, var_39_string, var_40_string, var_41_string)
{
	var_42_bool = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_object = Obj(); var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_object = Obj();
	@@var_38_object:GetLocator(var_39_string, var_46_bool, var_47_cvector, var_48_cvector);
	var_50_bool = var_46_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_52_int = "Locator " + var_39_string;
		var_54_int = var_52_int + " doesn't exist";
		Trace(var_54_int);
	} else {
		@@var_38_object:AddStationaryActor(Obj(), var_47_cvector, var_48_cvector, var_40_string, var_41_string);
	}
	var_49_object = var_37_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_86()
{
	SetVariable("k3q04", (int)-1);
	func_102(var_4_float, var_5_int, var_6_int);
	return 0;
}


func_216(var_5_string, var_6_bool)
{
	var_7_object = Obj(); var_8_object = Obj();
	FindActor(var_8_object, var_5_string);
	var_9_bool = var_8_object == 0; //@nz
	if(var_9_bool != 0) {
		var_11_int = "Door " + var_5_string;
		var_13_int = var_11_int + " not found";
		Trace(var_13_int);
	} else {
		var_14_bool = var_6_bool;
		if(var_14_bool != 0) {
			@@var_8_object:Close();
		}
		@@var_8_object:SetProperty("locked", var_6_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_157(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj();
	self(var_62_object);
	var_62_object = var_60_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_94()
{
	SetVariable("k3q04", (int)1000);
	func_102(var_3_string, var_4_object, var_5_object);
	return 0;
}


