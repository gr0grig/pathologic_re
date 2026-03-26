// @IMPORTS: SetVariable/2,Trace/1,GetSceneByName/2,CameraSwitchToNormal/0,GetVariable/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,CreateObjectVector/1,GetMainOutdoorScene/1,AddBlankActor/4,AddActor/6,FindActor/2
// @STRINGS: W:d5q03|W:completed|W:quest_d5_03_cutscene|W:fail|W:place_prisoners|W:uprava_prison@door1|W:uprava_prison|W:pt_guard|W:pers_birdmask|W:d5q03_birdmask.xml|W:pt_prisoner1|W:pers_unosha|W:d5q03_unosha.xml|A:add|W:pt_prisoner2|W:pers_worker|W:d5q03_worker.xml|W:pt_prisoner3|W:pers_wasted_male|W:d5q03_wastedmale.xml|W:pt_prisoner4|W:pers_alkash|W:d5q03_alkash.xml|W:pt_prisoner5|W:pt_prisoner6|W:cleanup|W:.bin|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|A:size|A:get|A:clear
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_26: op=0xd vars=string
// @EVENT_24: op=0x74 vars=int
// @EVENT_9: op=0xce vars=int,float
// @PE: 0x74,0xce

task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj();
	Trace(var_2_string);
	var_8_bool = var_2_string == "completed";
	if(var_8_bool != 0) {
		var_9_object = Obj(); var_10_string = "";
		func_223(var_9_object, "quest_d5_03_cutscene");
		func_144();
	} else {
		var_54_bool = var_2_string == "fail";
		if(var_54_bool != 0) {
			func_131();
			goto Label_115;
		}
		var_60_bool = var_2_string == "place_prisoners";
		if(var_60_bool == 0) goto Label_115;
		var_61_string = ""; var_62_bool = 0;
		func_252("uprava_prison@door1", (bool)0);
		GetSceneByName(var_5_object, "uprava_prison");
		var_64_object = Obj(); var_65_object = Obj(); var_66_string = ""; var_67_string = ""; var_68_string = "";
		var_5_object = var_65_object;
		func_234(var_64_object, var_65_object, "pt_guard", "pers_birdmask", "d5q03_birdmask.xml");
		var_1_object = var_64_object;
		var_82_object = Obj(); var_83_object = Obj(); var_84_string = ""; var_85_string = ""; var_86_string = "";
		var_5_object = var_83_object;
		func_234(var_82_object, var_83_object, "pt_prisoner1", "pers_unosha", "d5q03_unosha.xml");
		var_82_object = var_6_object;
		@@@var_0_object:add(var_6_object);
		var_87_object = Obj(); var_88_object = Obj(); var_89_string = ""; var_90_string = ""; var_91_string = "";
		var_5_object = var_88_object;
		func_234(var_87_object, var_88_object, "pt_prisoner2", "pers_worker", "d5q03_worker.xml");
		var_87_object = var_6_object;
		@@@var_0_object:add(var_6_object);
		var_92_object = Obj(); var_93_object = Obj(); var_94_string = ""; var_95_string = ""; var_96_string = "";
		var_5_object = var_93_object;
		func_234(var_92_object, var_93_object, "pt_prisoner3", "pers_wasted_male", "d5q03_wastedmale.xml");
		var_92_object = var_6_object;
		@@@var_0_object:add(var_6_object);
		var_97_object = Obj(); var_98_object = Obj(); var_99_string = ""; var_100_string = ""; var_101_string = "";
		var_5_object = var_98_object;
		func_234(var_97_object, var_98_object, "pt_prisoner4", "pers_alkash", "d5q03_alkash.xml");
		var_97_object = var_6_object;
		@@@var_0_object:add(var_6_object);
		var_102_object = Obj(); var_103_object = Obj(); var_104_string = ""; var_105_string = ""; var_106_string = "";
		var_5_object = var_103_object;
		func_234(var_102_object, var_103_object, "pt_prisoner5", "pers_worker", "d5q03_worker.xml");
		var_102_object = var_6_object;
		@@@var_0_object:add(var_6_object);
		var_107_object = Obj(); var_108_object = Obj(); var_109_string = ""; var_110_string = ""; var_111_string = "";
		var_5_object = var_108_object;
		func_234(var_107_object, var_108_object, "pt_prisoner6", "pers_unosha", "d5q03_unosha.xml");
		var_107_object = var_6_object;
		@@@var_0_object:add(var_6_object);
		var_6_object = 0;
		var_5_object = 0;
	}
Label_115:
	return 4;
	
}


task_0_event_24(var_0_object, var_1_object, var_2_int)
{
	CameraSwitchToNormal();
	return 0;
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_120();
	return 0;
}


main(var_0_object, var_1_object)
{
	SetVariable("d5q03", (int)1);
	var_4_object = Obj();
	func_217(var_4_object);
	var_0_object = var_4_object;
	var_7_int = 0;
	func_187((int)5);
	return 0;
}


func_131()
{
	SetVariable("d5q03", (int)-1);
	var_11_string = ""; var_12_bool = 0;
	func_252("uprava_prison@door1", (bool)1);
	func_171(var_4_int, var_5_int);
	return 0;
}


func_234(var_64_object, var_65_object, var_66_string, var_67_string, var_68_string)
{
	var_69_bool = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_object = Obj(); var_73_bool = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_object = Obj();
	@@var_65_object:GetLocator(var_66_string, var_73_bool, var_74_cvector, var_75_cvector);
	var_77_bool = var_73_bool == 0; //@nz
	if(var_77_bool != 0) {
		var_79_int = "Locator " + var_66_string;
		var_81_int = var_79_int + " doesn't exist";
		Trace(var_81_int);
	} else {
		AddActor(Obj(), var_67_string, var_65_object, var_74_cvector, var_75_cvector, var_68_string);
	}
	var_76_object = var_64_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_171(var_0_object, var_1_object)
{
	EventDisable(26);
	var_13_object = Obj();
	var_13_object = var_0_object;
	func_269(var_13_object);
	var_24_object = var_1_object;
	if(var_24_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_26_object = Obj();
	func_211(var_26_object);
	RemoveActor(var_26_object);
	return 0;
}


func_269(var_13_object)
{
	var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_object = Obj();
	var_20_object = var_13_object;
	if(var_20_object != 0) {
		@@var_13_object:size(var_17_int);
		var_18_int = 0;

	Label_275:
		var_21_bool = var_18_int < var_17_int;
		if(var_21_bool != 0) {
			@@var_13_object:get(var_19_object, var_18_int);
			var_22_object = var_19_object;
			if(var_22_object != 0) {
				RemoveActor(var_19_object);
			}
			var_19_object = 0;
			var_18_int = var_18_int + (int)1;
			goto Label_275;
		}
		@@var_13_object:clear();
	}
	return 6;
}


func_144()
{
	var_17_int = 0; var_18_int = 0;
	GetVariable("d5q03", var_18_int);
	var_20_bool = 0;
	var_20_bool = 0;
	var_22_bool = var_18_int != (int)1000;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int != (int)-1;
		if(var_24_bool != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		SetVariable("d5q03", (int)1000);
		var_27_string = ""; var_28_bool = 0;
		func_252("uprava_prison@door1", (bool)1);
		func_171(var_17_int, var_18_int);
	}
	return 2;
}


func_211(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj();
	self(var_28_object);
	var_28_object = var_26_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_120()
{
	var_4_int = 0; var_5_int = 0;
	GetVariable("d5q03", var_5_int);
	var_8_bool = var_5_int != (int)1000;
	if(var_8_bool != 0) {
		func_131();
	}
	return 2;
}


func_217(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj();
	CreateObjectVector(var_6_object);
	var_6_object = var_4_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_187(var_7_int)
{
	var_8_float = 0; var_9_float = 0;
	GetGameTime(var_9_float);
	var_11_float = var_7_int * (int)24;
	var_12_bool = var_9_float >= var_11_float;
	if(var_12_bool != 0) {
		func_171(var_8_float, var_9_float);
	} else {
		var_31_float = var_7_int * (int)24;
		SetTimeEvent((int)0, var_31_float);
		Hold();
	}
	return 2;
	
}


func_252(var_11_string, var_12_bool)
{
	var_13_object = Obj(); var_14_object = Obj();
	FindActor(var_14_object, var_11_string);
	var_15_bool = var_14_object == 0; //@nz
	if(var_15_bool != 0) {
		var_17_int = "Door " + var_11_string;
		var_19_int = var_17_int + " not found";
		Trace(var_19_int);
	} else {
		@@var_14_object:SetProperty("locked", var_12_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_223(var_9_object, var_10_string)
{
	var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj();
	GetMainOutdoorScene(var_13_object);
	var_16_int = var_10_string + ".bin";
	AddBlankActor(var_14_object, var_13_object, var_10_string, var_16_int);
	var_14_object = var_9_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


