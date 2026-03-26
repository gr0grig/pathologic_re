// @IMPORTS: SetVariable/2,AddScriptedActor/5,GetMainOutdoorScene/1,Trace/1,FindActor/2,GetSceneByName/2,Teleport/4,Trigger/2,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:d3q02|W:r7_house2_01|W:pt_d3q02_butcher1|W:pers_butcher|W:d3q02_butcher.xml|W:pt_d3q02_butcher2|W:d3q02_corpse|W:actor_disp.bin|W:d3q02_btrigger|W:quest_d3_02_btrigger.bin|W:r7_house2_01@door1|W:r7_house2_01@door2|W:pt_d3q02_doberman|W:pers_doberman|W:d3q02_doberman.xml|W:teleport|W:player|W:mnogogrannik_han|W:pt_d3q02_teleport|A:GetLocator|W:butcher_trigger|W:d3q02SeeCorpse|W:completed|W:cleanup|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object params=0
// @EVENT_26: op=0x3e vars=string
// @EVENT_9: op=0xdd vars=int,float
// @PE: 0xdd

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string)
{
	var_6_object = Obj(); var_7_object = Obj(); var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_bool = 0;
	Trace(var_5_string);
	var_17_bool = var_5_string == "teleport";
	if(var_17_bool != 0) {
		FindActor(var_11_object, "player");
		var_19_object = var_11_object;
		if(var_19_object != 0) {
			GetSceneByName(var_12_object, "mnogogrannik_han");
			@@var_12_object:GetLocator("pt_d3q02_teleport", var_15_bool, var_13_cvector, var_14_cvector);
			Teleport(var_11_object, var_12_object, var_13_cvector, var_14_cvector);
		}
		var_11_object = 0;
	} else {
		var_23_bool = var_5_string == "butcher_trigger";
		if(var_23_bool != 0) {
			var_24_object = var_0_object;
			if(var_24_object != 0) {
				Trigger(var_0_object, "trigger");
			}
			var_26_object = var_1_object;
			if(var_26_object != 0) {
				Trigger(var_1_object, "trigger");
			}
			func_156(Obj(), var_13_cvector, var_14_cvector, var_15_bool);
			SetVariable("d3q02SeeCorpse", (int)1);
			func_273();
			goto Label_114;
		}
		var_62_bool = var_5_string == "completed";
		if(var_62_bool == 0) goto Label_114;
		func_134();
	}
Label_114:
	return 10;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int, var_6_float)
{
	func_115();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj();
	SetVariable("d3q02", (int)1);
	var_9_object = Obj(); var_10_string = "";
	func_232(var_9_object, "r7_house2_01");
	var_9_object = var_6_object;
	var_13_object = Obj(); var_14_object = Obj(); var_15_string = ""; var_16_string = ""; var_17_string = "";
	var_6_object = var_14_object;
	func_238(var_13_object, var_14_object, "pt_d3q02_butcher1", "pers_butcher", "d3q02_butcher.xml");
	var_0_object = var_13_object;
	var_31_object = Obj(); var_32_object = Obj(); var_33_string = ""; var_34_string = ""; var_35_string = "";
	var_6_object = var_32_object;
	func_238(var_31_object, var_32_object, "pt_d3q02_butcher2", "pers_butcher", "d3q02_butcher.xml");
	var_1_object = var_31_object;
	AddScriptedActor(var_3_object, "d3q02_corpse", "actor_disp.bin", var_6_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_4_object, "d3q02_btrigger", "quest_d3_02_btrigger.bin", var_6_object, CVector(0.0, 0.0, 0.0));
	var_42_string = ""; var_43_bool = 0;
	func_256("r7_house2_01@door1", (bool)0);
	var_52_string = ""; var_53_bool = 0;
	func_256("r7_house2_01@door2", (bool)0);
	GetMainOutdoorScene(var_6_object);
	var_54_object = Obj(); var_55_object = Obj(); var_56_string = ""; var_57_string = ""; var_58_string = "";
	var_6_object = var_55_object;
	func_238(var_54_object, var_55_object, "pt_d3q02_doberman", "pers_doberman", "d3q02_doberman.xml");
	var_2_object = var_54_object;
	var_59_int = 0;
	func_202((int)3);
	return 2;
}
EMIT "Stack[-1] = 0";


func_256(var_42_string, var_43_bool)
{
	var_44_object = Obj(); var_45_object = Obj();
	FindActor(var_45_object, var_42_string);
	var_46_bool = var_45_object == 0; //@nz
	if(var_46_bool != 0) {
		var_48_int = "Door " + var_42_string;
		var_50_int = var_48_int + " not found";
		Trace(var_50_int);
	} else {
		@@var_45_object:SetProperty("locked", var_43_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_226(var_79_object)
{
	var_80_object = Obj(); var_81_object = Obj();
	self(var_81_object);
	var_81_object = var_79_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_134()
{
	var_63_int = 0; var_64_int = 0;
	GetVariable("d3q02", var_64_int);
	var_66_bool = 0;
	var_66_bool = 0;
	var_68_bool = var_64_int != (int)1000;
	if(var_68_bool != 0) {
		var_70_bool = var_64_int != (int)-1;
		if(var_70_bool != 0) {
			var_66_bool = 1;
		}
	}
	if(var_66_bool != 0) {
		SetVariable("d3q02", (int)1000);
		func_177(var_64_int);
	}
	return 2;
}


func_232(var_9_object, var_10_string)
{
	var_11_object = Obj(); var_12_object = Obj();
	GetSceneByName(var_12_object, var_10_string);
	var_12_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_202(var_59_int)
{
	var_60_float = 0; var_61_float = 0;
	GetGameTime(var_61_float);
	var_63_float = var_59_int * (int)24;
	var_64_bool = var_61_float >= var_63_float;
	if(var_64_bool != 0) {
		func_177(var_61_float);
	} else {
		var_84_float = var_59_int * (int)24;
		SetTimeEvent((int)0, var_84_float);
		Hold();
	}
	return 2;
	
}


func_299(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0;
	func_286(Obj());
	var_52_object = var_49_object;
	@@var_49_object:Find(var_45_int, var_50_object);
	var_57_bool = var_50_object == 0; //@nz
	if(var_57_bool != 0) {
		var_59_int = "Can't find diary parent with id: " + var_45_int;
		Trace(var_59_int);
		var_43_bool = 0;
		return 6;
	}
	@@var_50_object:AddChild(var_44_object);
	SendWorldWndMessage((int)7);
	@@var_44_object:GetCategory(var_51_int);
	SetDiarySection(var_51_int);
	var_43_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_238(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string)
{
	var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj();
	@@var_14_object:GetLocator(var_15_string, var_22_bool, var_23_cvector, var_24_cvector);
	var_26_bool = var_22_bool == 0; //@nz
	if(var_26_bool != 0) {
		var_28_int = "Locator " + var_15_string;
		var_30_int = var_28_int + " doesn't exist";
		Trace(var_30_int);
	} else {
		AddActor(Obj(), var_16_string, var_14_object, var_23_cvector, var_24_cvector, var_17_string);
	}
	var_25_object = var_13_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_273()
{
	var_38_object = Obj(); var_39_object = Obj();
	CreateDiaryEntry(var_39_object, (int)80, (int)2, (int)512162);
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0;
	var_39_object = var_44_object;
	func_299(var_43_bool, var_44_object, (int)26);
	return 2;
}
EMIT "Stack[-1] = 0";


func_177(var_2_object)
{
	EventDisable(26);
	func_156(var_6_object, var_59_int, var_60_float, var_61_float);
	var_73_object = var_2_object;
	if(var_73_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_75_string = ""; var_76_bool = 0;
	func_256("r7_house2_01@door1", (bool)1);
	var_77_string = ""; var_78_bool = 0;
	func_256("r7_house2_01@door2", (bool)1);
	var_79_object = Obj();
	func_226(var_79_object);
	RemoveActor(var_79_object);
	return 0;
}


func_115()
{
	var_7_int = 0; var_8_int = 0;
	GetVariable("d3q02", var_8_int);
	var_11_bool = var_8_int != (int)1000;
	if(var_11_bool != 0) {
		func_126();
	}
	return 2;
}


func_156(var_0_object, var_1_object, var_3_object, var_4_object)
{
	var_65_object = var_0_object;
	if(var_65_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_67_object = var_1_object;
	if(var_67_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_69_object = var_3_object;
	if(var_69_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	var_71_object = var_4_object;
	if(var_71_object != 0) {
		Trigger(var_4_object, "cleanup");
	}
	return 0;
}


func_126()
{
	SetVariable("d3q02", (int)-1);
	func_177(var_8_int);
	return 0;
}


func_286(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj();
	GetDiaryRoot(var_54_object);
	var_55_bool = var_54_object == 0; //@nz
	if(var_55_bool != 0) {
		Trace("Can't retrieve diary root");
		var_52_object = 0;
		return 2;
	}
	var_54_object = var_52_object;
	return 2;
}
EMIT "Stack[-1] = 0";


