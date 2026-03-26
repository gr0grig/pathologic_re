// @IMPORTS: Trace/1,GetMainOutdoorScene/1,GetSceneByName/2,GetVariable/2,SetVariable/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,CreateObjectVector/1,AddActor/6,AddActorByType/6,FindActor/2
// @STRINGS: W:place_sanitar|W:pt_b11q04_sanitar|W:pers_sanitar|W:b11q04_sanitar_main.xml|A:GetLocator|W:b11q04_sanitar.xml|A:add|W:pt_b11q04_corpse|W:scripted|W:b11q04_corpse.xml|W:place_officer|W:vagon_army|W:vagon_army@door1|W:pt_b11q04_officer|W:pers_soldat|W:b11q04_officer.xml|W:fail|W:completed|W:b11q04|W:cleanup|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty|A:size|A:get|A:Remove|A:clear
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object params=0
// @EVENT_26: op=0x9 vars=string
// @EVENT_9: op=0xaf vars=int,float
// @PE: 0xaf

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_object = Obj(); var_11_object = Obj(); var_12_int = 0; var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj();
	Trace(var_4_string);
	var_18_bool = var_4_string == "place_sanitar";
	if(var_18_bool != 0) {
		GetMainOutdoorScene(var_11_object);
		var_19_object = Obj(); var_20_object = Obj(); var_21_string = ""; var_22_string = ""; var_23_string = "";
		var_11_object = var_20_object;
		func_192(var_19_object, var_20_object, "pt_b11q04_sanitar", "pers_sanitar", "b11q04_sanitar_main.xml");
		var_1_object = var_19_object;
		var_12_int = 1;

	Label_26:
		var_38_int = "pt_b11q04_sanitar" + var_12_int;
		@@var_11_object:GetLocator(var_38_int, var_13_bool, var_14_cvector, var_15_cvector);
		var_39_bool = var_13_bool == 0; //@nz
		if(var_39_bool != 0) {
		} else {
			var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = ""; var_62_string = "";
			var_11_object = var_59_object;
			var_60_string = "pt_b11q04_sanitar" + var_12_int;
			func_228(var_58_object, var_59_object, var_60_string, "pers_sanitar", "b11q04_sanitar.xml");
			@@@var_0_object:add(var_58_object);
			var_12_int = var_12_int + (int)1;
			goto Label_26;
	}
		var_79_bool = var_4_string == "place_officer";
		if(var_79_bool != 0) {
			GetSceneByName(var_16_object, "vagon_army");
			var_81_string = ""; var_82_bool = 0;
			func_246("vagon_army@door1", (bool)0);
			var_91_object = Obj(); var_92_object = Obj(); var_93_string = ""; var_94_string = ""; var_95_string = "";
			var_16_object = var_92_object;
			func_192(var_91_object, var_92_object, "pt_b11q04_officer", "pers_soldat", "b11q04_officer.xml");
			var_2_object = var_91_object;
			var_16_object = 0;
			goto Label_90;
		}
		var_97_bool = var_4_string == "fail";
		if(var_97_bool != 0) {
			func_105();
			goto Label_90;
		}
		var_105_bool = var_4_string == "completed";
		if(var_105_bool == 0) goto Label_90;
		func_113();
	}
	var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = "";
	var_11_object = var_41_object;
	func_210(var_40_object, var_41_object, "pt_b11q04_corpse", "scripted", "b11q04_corpse.xml");
	var_3_object = var_40_object;
	var_11_object = 0;
	goto Label_90;
	
Label_90:
	return 12;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_float)
{
	func_91();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_object = Obj();
	func_186(var_4_object);
	var_0_object = var_4_object;
	var_7_int = 0;
	func_156((int)11);
	return 0;
}


func_192(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string)
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


func_132(var_0_object, var_3_object)
{
	EventDisable(26);
	func_121(var_8_float, var_9_float);
	var_17_object = Obj();
	var_17_object = var_0_object;
	func_263(var_17_object);
	var_28_string = ""; var_29_bool = 0;
	func_246("vagon_army@door1", (bool)1);
	var_38_object = var_3_object;
	if(var_38_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	var_40_object = Obj();
	func_180(var_40_object);
	RemoveActor(var_40_object);
	return 0;
}


func_228(var_58_object, var_59_object, var_60_string, var_61_string, var_62_string)
{
	var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_object = Obj();
	@@var_59_object:GetLocator(var_60_string, var_68_bool, var_69_cvector, var_70_cvector);
	var_72_bool = var_68_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_74_int = "Locator " + var_60_string;
		var_76_int = var_74_int + " doesn't exist";
		Trace(var_76_int);
	} else {
		@@var_59_object:AddStationaryActor(Obj(), var_69_cvector, var_70_cvector, var_61_string, var_62_string);
	}
	var_71_object = var_58_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_263(var_17_object)
{
	var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_int = 0; var_22_int = 0; var_23_object = Obj();
	var_24_object = var_17_object;
	if(var_24_object != 0) {
		@@var_17_object:size(var_21_int);
		var_22_int = 0;

	Label_269:
		var_25_bool = var_22_int < var_21_int;
		if(var_25_bool != 0) {
			@@var_17_object:get(var_23_object, var_22_int);
			var_26_object = var_23_object;
			if(var_26_object != 0) {
				@@var_23_object:Remove();
			}
			var_23_object = 0;
			var_22_int = var_22_int + (int)1;
			goto Label_269;
		}
		@@var_17_object:clear();
	}
	return 6;
}


func_105()
{
	SetVariable("b11q04", (int)-1);
	func_121(var_6_int, var_7_int);
	return 0;
}


func_113()
{
	SetVariable("b11q04", (int)1000);
	func_121(var_15_cvector, var_16_object);
	return 0;
}


func_210(var_40_object, var_41_object, var_42_string, var_43_string, var_44_string)
{
	var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_object = Obj(); var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_object = Obj();
	@@var_41_object:GetLocator(var_42_string, var_49_bool, var_50_cvector, var_51_cvector);
	var_53_bool = var_49_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_55_int = "Locator " + var_42_string;
		var_57_int = var_55_int + " doesn't exist";
		Trace(var_57_int);
	} else {
		AddActorByType(Obj(), var_43_string, var_41_object, var_50_cvector, var_51_cvector, var_44_string);
	}
	var_52_object = var_40_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_180(var_40_object)
{
	var_41_object = Obj(); var_42_object = Obj();
	self(var_42_object);
	var_42_object = var_40_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_246(var_28_string, var_29_bool)
{
	var_30_object = Obj(); var_31_object = Obj();
	FindActor(var_31_object, var_28_string);
	var_32_bool = var_31_object == 0; //@nz
	if(var_32_bool != 0) {
		var_34_int = "Door " + var_28_string;
		var_36_int = var_34_int + " not found";
		Trace(var_36_int);
	} else {
		@@var_31_object:SetProperty("locked", var_29_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_121(var_1_object, var_2_object)
{
	var_13_object = var_1_object;
	if(var_13_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_15_object = var_2_object;
	if(var_15_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	return 0;
}


func_186(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj();
	CreateObjectVector(var_6_object);
	var_6_object = var_4_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_91()
{
	var_6_int = 0; var_7_int = 0;
	GetVariable("b11q04", var_7_int);
	var_10_bool = var_7_int != (int)1000;
	if(var_10_bool != 0) {
		func_105();
	}
	func_132(var_6_int, var_7_int);
	return 2;
}


func_156(var_7_int)
{
	var_8_float = 0; var_9_float = 0;
	GetGameTime(var_9_float);
	var_11_float = var_7_int * (int)24;
	var_12_bool = var_9_float >= var_11_float;
	if(var_12_bool != 0) {
		func_132(var_8_float, var_9_float);
	} else {
		var_45_float = var_7_int * (int)24;
		SetTimeEvent((int)0, var_45_float);
		Hold();
	}
	return 2;
	
}


