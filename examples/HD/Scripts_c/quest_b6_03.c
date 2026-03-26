// @IMPORTS: Trace/1,GetSceneByName/2,GetMainOutdoorScene/1,AddActor/6,PlaySound/1,GetVariable/2,SetVariable/2,RemoveActor/1,Trigger/2,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActorByType/6,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:init_grave|W:crypt2|W:pt_b6q03_diary|W:scripted_container|W:b6q03_item_diary.xml|W:b6q03_light_fire|W:light_fire.xml|W:pt_b6q03_fire|W:scripted|W:pt_b6q03_agony1|W:pers_worker|W:agony1_man.xml|W:pt_b6q03_agony2|W:pers_woman|W:agony1_woman.xml|W:crypt2_load|W:crypt2_unload|W:pt_b6q03_bomber1|W:pers_bomber|W:b6q03_bomber.xml|W:pt_b6q03_bomber2|W:pt_b6q03_diseased1|W:pers_vaxxabit|W:vaxxabit_d.xml|W:pt_b6q03_diseased2|W:pt_b6q03_diseased3|W:pers_vaxxabitka|W:vaxxabitka_d.xml|W:pt_b6q03_diseased4|W:diary_taken|W:explode|W:fail|W:completed|W:b6q03|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,bool params=0
// @EVENT_26: op=0x5 vars=string
// @EVENT_9: op=0xd4 vars=int,float
// @PE: 0xd4

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_string)
{
	var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj();
	Trace(var_6_string);
	var_12_bool = var_6_string == "init_grave";
	if(var_12_bool != 0) {
		GetSceneByName(var_9_object, "crypt2");
		var_14_object = Obj(); var_15_object = Obj(); var_16_string = ""; var_17_string = ""; var_18_string = "";
		var_9_object = var_15_object;
		func_241(var_14_object, var_15_object, "pt_b6q03_diary", "scripted_container", "b6q03_item_diary.xml");
		var_2_object = var_14_object;
		GetMainOutdoorScene(var_9_object);
		AddActor(var_0_object, "b6q03_light_fire", var_9_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "light_fire.xml");
		var_36_object = Obj(); var_37_object = Obj(); var_38_string = ""; var_39_string = ""; var_40_string = "";
		var_9_object = var_37_object;
		func_241(var_36_object, var_37_object, "pt_b6q03_fire", "scripted", "fire.xml");
		var_1_object = var_36_object;
		var_41_object = Obj(); var_42_object = Obj(); var_43_string = ""; var_44_string = ""; var_45_string = "";
		var_9_object = var_42_object;
		func_223(var_41_object, var_42_object, "pt_b6q03_agony1", "pers_worker", "agony1_man.xml");
		var_3_object = var_41_object;
		var_59_object = Obj(); var_60_object = Obj(); var_61_string = ""; var_62_string = ""; var_63_string = "";
		var_9_object = var_60_object;
		func_223(var_59_object, var_60_object, "pt_b6q03_agony2", "pers_woman", "agony1_woman.xml");
		var_4_object = var_59_object;
		var_9_object = 0;
	} else {
		var_65_bool = var_6_string == "crypt2_load";
		if(var_65_bool != 0) {
			goto Label_135;
		}
		var_67_bool = var_6_string == "crypt2_unload";
		if(var_67_bool != 0) {
			var_68_bool = var_5_bool == 0; //@nz
			if(var_68_bool != 0) {
				var_5_bool = true;
				GetMainOutdoorScene(var_10_object);
				var_69_object = Obj(); var_70_object = Obj(); var_71_string = ""; var_72_string = ""; var_73_string = "";
				var_10_object = var_70_object;
				func_223(var_69_object, var_70_object, "pt_b6q03_bomber1", "pers_bomber", "b6q03_bomber.xml");
				var_74_object = Obj(); var_75_object = Obj(); var_76_string = ""; var_77_string = ""; var_78_string = "";
				var_10_object = var_75_object;
				func_223(var_74_object, var_75_object, "pt_b6q03_bomber2", "pers_bomber", "b6q03_bomber.xml");
				var_79_object = Obj(); var_80_object = Obj(); var_81_string = ""; var_82_string = ""; var_83_string = "";
				var_10_object = var_80_object;
				func_223(var_79_object, var_80_object, "pt_b6q03_diseased1", "pers_vaxxabit", "vaxxabit_d.xml");
				var_84_object = Obj(); var_85_object = Obj(); var_86_string = ""; var_87_string = ""; var_88_string = "";
				var_10_object = var_85_object;
				func_223(var_84_object, var_85_object, "pt_b6q03_diseased2", "pers_vaxxabit", "vaxxabit_d.xml");
				var_89_object = Obj(); var_90_object = Obj(); var_91_string = ""; var_92_string = ""; var_93_string = "";
				var_10_object = var_90_object;
				func_223(var_89_object, var_90_object, "pt_b6q03_diseased3", "pers_vaxxabitka", "vaxxabitka_d.xml");
				var_94_object = Obj(); var_95_object = Obj(); var_96_string = ""; var_97_string = ""; var_98_string = "";
				var_10_object = var_95_object;
				func_223(var_94_object, var_95_object, "pt_b6q03_diseased4", "pers_vaxxabitka", "vaxxabitka_d.xml");
				var_10_object = 0;
			}
			goto Label_135;
		}
		var_100_bool = var_6_string == "diary_taken";
		if(var_100_bool != 0) {
			func_259();
			PlaySound("explode");
			goto Label_135;
		}
		var_126_bool = var_6_string == "fail";
		if(var_126_bool != 0) {
			func_147();
			goto Label_135;
		}
		var_141_bool = var_6_string == "completed";
		if(var_141_bool == 0) goto Label_135;
		func_155();
	}
Label_135:
	return 4;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_int, var_7_float)
{
	func_136();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool)
{
	var_6_int = 0;
	func_193((int)6);
	return 0;
}


func_193(var_6_int)
{
	var_7_float = 0; var_8_float = 0;
	GetGameTime(var_8_float);
	var_10_float = var_6_int * (int)24;
	var_11_bool = var_8_float >= var_10_float;
	if(var_11_bool != 0) {
		func_163(var_4_object, var_5_bool, var_6_int, var_7_float, var_8_float);
	} else {
		var_25_float = var_6_int * (int)24;
		SetTimeEvent((int)0, var_25_float);
		Hold();
	}
	return 2;
	
}


func_259()
{
	var_101_object = Obj(); var_102_object = Obj();
	CreateDiaryEntry(var_102_object, (int)278, (int)2, (int)521339);
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0;
	var_102_object = var_107_object;
	func_285(var_106_bool, var_107_object, (int)276);
	return 2;
}
EMIT "Stack[-1] = 0";


func_163(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object)
{
	EventDisable(26);
	var_12_object = var_1_object;
	if(var_12_object != 0) {
		RemoveActor(var_1_object);
	}
	var_13_object = var_0_object;
	if(var_13_object != 0) {
		RemoveActor(var_0_object);
	}
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_16_object = var_3_object;
	if(var_16_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	var_18_object = var_4_object;
	if(var_18_object != 0) {
		Trigger(var_4_object, "cleanup");
	}
	var_20_object = Obj();
	func_217(var_20_object);
	RemoveActor(var_20_object);
	return 0;
}


func_136()
{
	var_8_int = 0; var_9_int = 0;
	GetVariable("b6q03", var_9_int);
	var_12_bool = var_9_int != (int)1000;
	if(var_12_bool != 0) {
		func_147();
	}
	return 2;
}


func_272(var_115_object)
{
	var_116_object = Obj(); var_117_object = Obj();
	GetDiaryRoot(var_117_object);
	var_118_bool = var_117_object == 0; //@nz
	if(var_118_bool != 0) {
		Trace("Can't retrieve diary root");
		var_115_object = 0;
		return 2;
	}
	var_117_object = var_115_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_241(var_14_object, var_15_object, var_16_string, var_17_string, var_18_string)
{
	var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj();
	@@var_15_object:GetLocator(var_16_string, var_23_bool, var_24_cvector, var_25_cvector);
	var_27_bool = var_23_bool == 0; //@nz
	if(var_27_bool != 0) {
		var_29_int = "Locator " + var_16_string;
		var_31_int = var_29_int + " doesn't exist";
		Trace(var_31_int);
	} else {
		AddActorByType(Obj(), var_17_string, var_15_object, var_24_cvector, var_25_cvector, var_18_string);
	}
	var_26_object = var_14_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_147()
{
	SetVariable("b6q03", (int)-1);
	func_163(var_5_bool, var_6_int, var_7_float, var_8_int, var_9_int);
	return 0;
}


func_217(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj();
	self(var_22_object);
	var_22_object = var_20_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_155()
{
	SetVariable("b6q03", (int)1000);
	func_163(var_6_string, var_7_object, var_8_object, var_9_object, var_10_object);
	return 0;
}


func_285(var_106_bool, var_107_object, var_108_int)
{
	var_109_object = Obj(); var_110_object = Obj(); var_111_int = 0; var_112_object = Obj(); var_113_object = Obj(); var_114_int = 0;
	func_272(Obj());
	var_115_object = var_112_object;
	@@var_112_object:Find(var_108_int, var_113_object);
	var_120_bool = var_113_object == 0; //@nz
	if(var_120_bool != 0) {
		var_122_int = "Can't find diary parent with id: " + var_108_int;
		Trace(var_122_int);
		var_106_bool = 0;
		return 6;
	}
	@@var_113_object:AddChild(var_107_object);
	SendWorldWndMessage((int)7);
	@@var_107_object:GetCategory(var_114_int);
	SetDiarySection(var_114_int);
	var_106_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_223(var_41_object, var_42_object, var_43_string, var_44_string, var_45_string)
{
	var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_object = Obj(); var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_object = Obj();
	@@var_42_object:GetLocator(var_43_string, var_50_bool, var_51_cvector, var_52_cvector);
	var_54_bool = var_50_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_56_int = "Locator " + var_43_string;
		var_58_int = var_56_int + " doesn't exist";
		Trace(var_58_int);
	} else {
		AddActor(Obj(), var_44_string, var_42_object, var_51_cvector, var_52_cvector, var_45_string);
	}
	var_53_object = var_41_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


