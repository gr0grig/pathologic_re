// @IMPORTS: CreateObjectVector/1,GetMainOutdoorScene/1,GetSceneByName/2,Trigger/2,Trace/1,SetVariable/2,AddActor/6,RemoveActor/1,GetVariable/2,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,FindActor/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:sobor@door1|W:pt_k5q04_sobor_patrol1|W:pers_patrool|W:k5q04_sobor_guard_patrol.xml|A:add|W:pt_k5q04_sobor_wasted|W:pers_wasted_male|W:k5q04_sobor_guard_wasted.xml|W:pt_k5q04_sobor_patrol2|W:cot_eva|W:danko|W:sobor_load|W:k5q04SoborVisit|W:sobor|W:k5q04_crowd1|W:static_keep.xml|W:k5q04_crowd2|W:pt_k5q04_people1|W:pers_woman|W:k5q04_sobor_woman.xml|W:pt_k5q04_people2|W:pers_nudegirl|W:k5q04_sobor_nudegirl.xml|W:pt_k5q04_people3|W:pers_worker|W:k5q04_sobor_worker.xml|W:pt_k5q04_people4|W:pers_boy|W:k5q04_sobor_boy.xml|W:pt_k5q04_people5|W:pers_salesman|W:k5q04_sobor_salesman.xml|W:pt_k5q04_people6|W:pt_k5q04_people7|W:pt_k5q04_people8|W:pers_unosha|W:k5q04_sobor_unosha.xml|W:pt_k5q04_people9|W:pers_girl|W:k5q04_sobor_girl.xml|W:pt_k5q04_people10|W:pt_k5q04_people11|W:pt_k5q04_people12|W:sobor_unload|W:completed|W:k5q04|W:nodanko|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty|A:size|A:get|A:clear|A:Remove|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object params=0
// @EVENT_26: op=0x33 vars=string
// @EVENT_9: op=0x127 vars=int,float
// @PE: 0x127

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj();
	Trace(var_4_string);
	var_8_bool = var_4_string == "sobor_load";
	if(var_8_bool != 0) {
		func_401();
		SetVariable("k5q04SoborVisit", (int)1);
		GetSceneByName(var_6_object, "sobor");
		AddActor(var_2_object, "k5q04_crowd1", var_6_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "static_keep.xml");
		Trace(var_2_object);
		AddActor(var_3_object, "k5q04_crowd2", var_6_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "static_keep.xml");
		Trace(var_3_object);
		var_43_object = Obj(); var_44_object = Obj(); var_45_string = ""; var_46_string = ""; var_47_string = "";
		var_6_object = var_44_object;
		func_306(var_43_object, var_44_object, "pt_k5q04_people1", "pers_woman", "k5q04_sobor_woman.xml");
		@@@var_1_object:add(var_43_object);
		var_61_object = Obj(); var_62_object = Obj(); var_63_string = ""; var_64_string = ""; var_65_string = "";
		var_6_object = var_62_object;
		func_306(var_61_object, var_62_object, "pt_k5q04_people2", "pers_nudegirl", "k5q04_sobor_nudegirl.xml");
		@@@var_1_object:add(var_61_object);
		var_66_object = Obj(); var_67_object = Obj(); var_68_string = ""; var_69_string = ""; var_70_string = "";
		var_6_object = var_67_object;
		func_306(var_66_object, var_67_object, "pt_k5q04_people3", "pers_worker", "k5q04_sobor_worker.xml");
		@@@var_1_object:add(var_66_object);
		var_71_object = Obj(); var_72_object = Obj(); var_73_string = ""; var_74_string = ""; var_75_string = "";
		var_6_object = var_72_object;
		func_306(var_71_object, var_72_object, "pt_k5q04_people4", "pers_boy", "k5q04_sobor_boy.xml");
		@@@var_1_object:add(var_71_object);
		var_76_object = Obj(); var_77_object = Obj(); var_78_string = ""; var_79_string = ""; var_80_string = "";
		var_6_object = var_77_object;
		func_306(var_76_object, var_77_object, "pt_k5q04_people5", "pers_salesman", "k5q04_sobor_salesman.xml");
		@@@var_1_object:add(var_76_object);
		var_81_object = Obj(); var_82_object = Obj(); var_83_string = ""; var_84_string = ""; var_85_string = "";
		var_6_object = var_82_object;
		func_306(var_81_object, var_82_object, "pt_k5q04_people6", "pers_woman", "k5q04_sobor_woman.xml");
		@@@var_1_object:add(var_81_object);
		var_86_object = Obj(); var_87_object = Obj(); var_88_string = ""; var_89_string = ""; var_90_string = "";
		var_6_object = var_87_object;
		func_306(var_86_object, var_87_object, "pt_k5q04_people7", "pers_worker", "k5q04_sobor_worker.xml");
		@@@var_1_object:add(var_86_object);
		var_91_object = Obj(); var_92_object = Obj(); var_93_string = ""; var_94_string = ""; var_95_string = "";
		var_6_object = var_92_object;
		func_306(var_91_object, var_92_object, "pt_k5q04_people8", "pers_unosha", "k5q04_sobor_unosha.xml");
		@@@var_1_object:add(var_91_object);
		var_96_object = Obj(); var_97_object = Obj(); var_98_string = ""; var_99_string = ""; var_100_string = "";
		var_6_object = var_97_object;
		func_306(var_96_object, var_97_object, "pt_k5q04_people9", "pers_girl", "k5q04_sobor_girl.xml");
		@@@var_1_object:add(var_96_object);
		var_101_object = Obj(); var_102_object = Obj(); var_103_string = ""; var_104_string = ""; var_105_string = "";
		var_6_object = var_102_object;
		func_306(var_101_object, var_102_object, "pt_k5q04_people10", "pers_worker", "k5q04_sobor_worker.xml");
		@@@var_1_object:add(var_101_object);
		var_106_object = Obj(); var_107_object = Obj(); var_108_string = ""; var_109_string = ""; var_110_string = "";
		var_6_object = var_107_object;
		func_306(var_106_object, var_107_object, "pt_k5q04_people11", "pers_woman", "k5q04_sobor_woman.xml");
		@@@var_1_object:add(var_106_object);
		var_111_object = Obj(); var_112_object = Obj(); var_113_string = ""; var_114_string = ""; var_115_string = "";
		var_6_object = var_112_object;
		func_306(var_111_object, var_112_object, "pt_k5q04_people12", "pers_unosha", "k5q04_sobor_unosha.xml");
		@@@var_1_object:add(var_111_object);
		var_6_object = 0;
	} else {
		var_117_bool = var_4_string == "sobor_unload";
		if(var_117_bool != 0) {
			var_118_object = Obj();
			var_118_object = var_1_object;
			func_359(var_118_object);
			var_129_string = ""; var_130_bool = 0;
			func_342("sobor@door1", (bool)1);
			Trace(var_2_object);
			RemoveActor(var_2_object);
			Trace(var_3_object);
			RemoveActor(var_3_object);
			goto Label_220;
		}
		var_140_bool = var_4_string == "completed";
		if(var_140_bool == 0) goto Label_220;
		func_243();
	}
Label_220:
	return 2;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_float)
{
	func_221();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj();
	var_6_string = ""; var_7_bool = 0;
	func_342("sobor@door1", (bool)1);
	CreateObjectVector(var_0_object);
	CreateObjectVector(var_1_object);
	GetMainOutdoorScene(var_5_object);
	var_16_object = Obj(); var_17_object = Obj(); var_18_string = ""; var_19_string = ""; var_20_string = "";
	var_5_object = var_17_object;
	func_324(var_16_object, var_17_object, "pt_k5q04_sobor_patrol1", "pers_patrool", "k5q04_sobor_guard_patrol.xml");
	@@@var_0_object:add(var_16_object);
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = "";
	var_5_object = var_35_object;
	func_324(var_34_object, var_35_object, "pt_k5q04_sobor_wasted", "pers_wasted_male", "k5q04_sobor_guard_wasted.xml");
	@@@var_0_object:add(var_34_object);
	var_39_object = Obj(); var_40_object = Obj(); var_41_string = ""; var_42_string = ""; var_43_string = "";
	var_5_object = var_40_object;
	func_324(var_39_object, var_40_object, "pt_k5q04_sobor_patrol2", "pers_patrool", "k5q04_sobor_guard_patrol.xml");
	@@@var_0_object:add(var_39_object);
	GetSceneByName(var_5_object, "cot_eva");
	Trigger(var_5_object, "danko");
	var_46_int = 0;
	func_276((int)5);
	return 2;
}
EMIT "Stack[-1] = 0";


func_324(var_16_object, var_17_object, var_18_string, var_19_string, var_20_string)
{
	var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj();
	@@var_17_object:GetLocator(var_18_string, var_25_bool, var_26_cvector, var_27_cvector);
	var_29_bool = var_25_bool == 0; //@nz
	if(var_29_bool != 0) {
		var_31_int = "Locator " + var_18_string;
		var_33_int = var_31_int + " doesn't exist";
		Trace(var_33_int);
	} else {
		@@var_17_object:AddStationaryActor(Obj(), var_26_cvector, var_27_cvector, var_19_string, var_20_string);
	}
	var_28_object = var_16_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_359(var_118_object)
{
	var_119_int = 0; var_120_int = 0; var_121_object = Obj(); var_122_int = 0; var_123_int = 0; var_124_object = Obj();
	var_125_object = var_118_object;
	if(var_125_object != 0) {
		@@var_118_object:size(var_122_int);
		var_123_int = 0;

	Label_365:
		var_126_bool = var_123_int < var_122_int;
		if(var_126_bool != 0) {
			@@var_118_object:get(var_124_object, var_123_int);
			var_127_object = var_124_object;
			if(var_127_object != 0) {
				RemoveActor(var_124_object);
			}
			var_124_object = 0;
			var_123_int = var_123_int + (int)1;
			goto Label_365;
		}
		@@var_118_object:clear();
	}
	return 6;
}


func_235()
{
	SetVariable("k5q04", (int)-1);
	func_251();
	return 0;
}


func_427(var_14_bool, var_15_object, var_16_int)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_int = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_int = 0;
	func_414(Obj());
	var_23_object = var_20_object;
	@@var_20_object:Find(var_16_int, var_21_object);
	var_28_bool = var_21_object == 0; //@nz
	if(var_28_bool != 0) {
		var_30_int = "Can't find diary parent with id: " + var_16_int;
		Trace(var_30_int);
		var_14_bool = 0;
		return 6;
	}
	@@var_21_object:AddChild(var_15_object);
	SendWorldWndMessage((int)7);
	@@var_15_object:GetCategory(var_22_int);
	SetDiarySection(var_22_int);
	var_14_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_300(var_69_object)
{
	var_70_object = Obj(); var_71_object = Obj();
	self(var_71_object);
	var_71_object = var_69_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_401()
{
	var_9_object = Obj(); var_10_object = Obj();
	CreateDiaryEntry(var_10_object, (int)746, (int)2, (int)539463);
	var_14_bool = 0; var_15_object = Obj(); var_16_int = 0;
	var_10_object = var_15_object;
	func_427(var_14_bool, var_15_object, (int)740);
	return 2;
}
EMIT "Stack[-1] = 0";


func_306(var_43_object, var_44_object, var_45_string, var_46_string, var_47_string)
{
	var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_object = Obj(); var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_object = Obj();
	@@var_44_object:GetLocator(var_45_string, var_52_bool, var_53_cvector, var_54_cvector);
	var_56_bool = var_52_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_58_int = "Locator " + var_45_string;
		var_60_int = var_58_int + " doesn't exist";
		Trace(var_60_int);
	} else {
		AddActor(Obj(), var_46_string, var_44_object, var_53_cvector, var_54_cvector, var_47_string);
	}
	var_55_object = var_43_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_243()
{
	SetVariable("k5q04", (int)1000);
	func_251();
	return 0;
}


func_276(var_46_int)
{
	var_47_float = 0; var_48_float = 0;
	GetGameTime(var_48_float);
	var_50_float = var_46_int * (int)24;
	var_51_bool = var_48_float >= var_50_float;
	if(var_51_bool != 0) {
		func_252(var_48_float);
	} else {
		var_74_float = var_46_int * (int)24;
		SetTimeEvent((int)0, var_74_float);
		Hold();
	}
	return 2;
	
}


func_342(var_6_string, var_7_bool)
{
	var_8_object = Obj(); var_9_object = Obj();
	FindActor(var_9_object, var_6_string);
	var_10_bool = var_9_object == 0; //@nz
	if(var_10_bool != 0) {
		var_12_int = "Door " + var_6_string;
		var_14_int = var_12_int + " not found";
		Trace(var_14_int);
	} else {
		@@var_9_object:SetProperty("locked", var_7_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_380(var_54_object)
{
	var_55_int = 0; var_56_int = 0; var_57_object = Obj(); var_58_int = 0; var_59_int = 0; var_60_object = Obj();
	var_61_object = var_54_object;
	if(var_61_object != 0) {
		@@var_54_object:size(var_58_int);
		var_59_int = 0;

	Label_386:
		var_62_bool = var_59_int < var_58_int;
		if(var_62_bool != 0) {
			@@var_54_object:get(var_60_object, var_59_int);
			var_63_object = var_60_object;
			if(var_63_object != 0) {
				@@var_60_object:Remove();
			}
			var_60_object = 0;
			var_59_int = var_59_int + (int)1;
			goto Label_386;
		}
		@@var_54_object:clear();
	}
	return 6;
}


func_251()
{
	return 0;
}


func_252(var_0_object)
{
	var_52_object = Obj(); var_53_object = Obj();
	EventDisable(26);
	var_54_object = Obj();
	var_54_object = var_0_object;
	func_380(var_54_object);
	var_65_string = ""; var_66_bool = 0;
	func_342("sobor@door1", (bool)1);
	GetSceneByName(var_53_object, "cot_eva");
	Trigger(var_53_object, "nodanko");
	var_69_object = Obj();
	func_300(var_69_object);
	RemoveActor(var_69_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_221()
{
	var_6_int = 0; var_7_int = 0;
	GetVariable("k5q04", var_7_int);
	var_10_bool = var_7_int != (int)1000;
	if(var_10_bool != 0) {
		func_235();
	}
	func_252(var_7_int);
	return 2;
}


func_414(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj();
	GetDiaryRoot(var_25_object);
	var_26_bool = var_25_object == 0; //@nz
	if(var_26_bool != 0) {
		Trace("Can't retrieve diary root");
		var_23_object = 0;
		return 2;
	}
	var_25_object = var_23_object;
	return 2;
}
EMIT "Stack[-1] = 0";


