// @IMPORTS: GetSceneByName/2,Trigger/2,Hold/0,Trace/1,GetVariable/2,SetVariable/2,RemoveActor/1,self/1,CreateObjectVector/1,AddActor/6,AddScriptedActor/6,FindActor/2
// @STRINGS: W:sobor@door1|W:sobor|W:noaglaja|W:init_sobor|W:pt_b7q01_birdmask|W:pers_birdmask|W:b7q01_sobor_mbirdmask.xml|A:add|W:pt_b7q01_birdmask1|W:b7q01_sobor_birdmask.xml|W:pt_b7q01_birdmask2|W:pt_b7q01_patrol1|W:pers_patrool|W:b7q01_sobor_patrol.xml|W:pt_b7q01_patrol2|W:init_prison|W:uprava_prison|W:b7q01_prison_patrol1.xml|W:b7q01_prison_patrol2.xml|W:pt_b7q01_prisoner1|W:pers_worker|W:b7q01_prisoner.xml|W:pt_b7q01_prisoner2|W:pers_unosha|W:pt_b7q01_prisoner3|W:pers_grabitel|W:clear_prison|W:cleanup|W:init_gorbun_house|W:lc_house6_05|W:pt_b7q01_wastedmale|W:pers_wasted_male|W:b7q01_gorbun_mwastedmale.xml|W:pt_b7q01_wastedmale1|W:b7q01_gorbun_wastedmale.xml|W:pt_b7q01_wastedmale2|W:b7q01_corpse1|W:actor_disp.bin|W:b7q01_corpse2|W:b7q01_corpse3|W:clear_gorbun_house|W:place_aglaja|W:b7q01|W:fail|W:completed|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|A:size|A:get
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_26: op=0x1d vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_int = 0; var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_int = 0;
	Trace(var_3_string);
	var_15_bool = var_3_string == "init_sobor";
	if(var_15_bool != 0) {
		GetSceneByName(var_9_object, "sobor");
		var_17_object = Obj(); var_18_object = Obj(); var_19_string = ""; var_20_string = ""; var_21_string = "";
		var_9_object = var_18_object;
		func_319(var_17_object, var_18_object, "pt_b7q01_birdmask", "pers_birdmask", "b7q01_sobor_mbirdmask.xml");
		@@@var_0_object:add(var_17_object);
		var_35_object = Obj(); var_36_object = Obj(); var_37_string = ""; var_38_string = ""; var_39_string = "";
		var_9_object = var_36_object;
		func_319(var_35_object, var_36_object, "pt_b7q01_birdmask1", "pers_birdmask", "b7q01_sobor_birdmask.xml");
		@@@var_0_object:add(var_35_object);
		var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = "";
		var_9_object = var_41_object;
		func_319(var_40_object, var_41_object, "pt_b7q01_birdmask2", "pers_birdmask", "b7q01_sobor_birdmask.xml");
		@@@var_0_object:add(var_40_object);
		var_45_object = Obj(); var_46_object = Obj(); var_47_string = ""; var_48_string = ""; var_49_string = "";
		var_9_object = var_46_object;
		func_319(var_45_object, var_46_object, "pt_b7q01_patrol1", "pers_patrool", "b7q01_sobor_patrol.xml");
		@@@var_0_object:add(var_45_object);
		var_50_object = Obj(); var_51_object = Obj(); var_52_string = ""; var_53_string = ""; var_54_string = "";
		var_9_object = var_51_object;
		func_319(var_50_object, var_51_object, "pt_b7q01_patrol2", "pers_patrool", "b7q01_sobor_patrol.xml");
		@@@var_0_object:add(var_50_object);
		var_9_object = 0;
	} else {
		var_56_bool = var_3_string == "init_prison";
		if(var_56_bool != 0) {
			GetSceneByName(var_10_object, "uprava_prison");
			var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = ""; var_62_string = "";
			var_10_object = var_59_object;
			func_319(var_58_object, var_59_object, "pt_b7q01_patrol1", "pers_patrool", "b7q01_prison_patrol1.xml");
			@@@var_1_object:add(var_58_object);
			var_63_object = Obj(); var_64_object = Obj(); var_65_string = ""; var_66_string = ""; var_67_string = "";
			var_10_object = var_64_object;
			func_319(var_63_object, var_64_object, "pt_b7q01_patrol2", "pers_patrool", "b7q01_prison_patrol2.xml");
			@@@var_1_object:add(var_63_object);
			var_68_object = Obj(); var_69_object = Obj(); var_70_string = ""; var_71_string = ""; var_72_string = "";
			var_10_object = var_69_object;
			func_319(var_68_object, var_69_object, "pt_b7q01_prisoner1", "pers_worker", "b7q01_prisoner.xml");
			@@@var_1_object:add(var_68_object);
			var_73_object = Obj(); var_74_object = Obj(); var_75_string = ""; var_76_string = ""; var_77_string = "";
			var_10_object = var_74_object;
			func_319(var_73_object, var_74_object, "pt_b7q01_prisoner2", "pers_unosha", "b7q01_prisoner.xml");
			@@@var_1_object:add(var_73_object);
			var_78_object = Obj(); var_79_object = Obj(); var_80_string = ""; var_81_string = ""; var_82_string = "";
			var_10_object = var_79_object;
			func_319(var_78_object, var_79_object, "pt_b7q01_prisoner3", "pers_grabitel", "b7q01_prisoner.xml");
			@@@var_1_object:add(var_78_object);
			var_10_object = 0;
			goto Label_261;
		}
		var_84_bool = var_3_string == "clear_prison";
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_string = "";
			var_85_object = var_1_object;
			func_362(var_85_object, "cleanup");
			goto Label_261;
		}
		var_98_bool = var_3_string == "init_gorbun_house";
		if(var_98_bool != 0) {
			GetSceneByName(var_11_object, "lc_house6_05");
			var_100_object = Obj(); var_101_object = Obj(); var_102_string = ""; var_103_string = ""; var_104_string = "";
			var_11_object = var_101_object;
			func_319(var_100_object, var_101_object, "pt_b7q01_wastedmale", "pers_wasted_male", "b7q01_gorbun_mwastedmale.xml");
			@@@var_2_object:add(var_100_object);
			var_105_object = Obj(); var_106_object = Obj(); var_107_string = ""; var_108_string = ""; var_109_string = "";
			var_11_object = var_106_object;
			func_319(var_105_object, var_106_object, "pt_b7q01_wastedmale1", "pers_wasted_male", "b7q01_gorbun_wastedmale.xml");
			@@@var_2_object:add(var_105_object);
			var_110_object = Obj(); var_111_object = Obj(); var_112_string = ""; var_113_string = ""; var_114_string = "";
			var_11_object = var_111_object;
			func_319(var_110_object, var_111_object, "pt_b7q01_wastedmale2", "pers_wasted_male", "b7q01_gorbun_wastedmale.xml");
			@@@var_2_object:add(var_110_object);
			var_115_object = Obj(); var_116_object = Obj(); var_117_string = ""; var_118_string = "";
			var_11_object = var_116_object;
			func_337(var_115_object, var_116_object, "b7q01_corpse1", "actor_disp.bin");
			@@@var_2_object:add(var_115_object);
			var_123_object = Obj(); var_124_object = Obj(); var_125_string = ""; var_126_string = "";
			var_11_object = var_124_object;
			func_337(var_123_object, var_124_object, "b7q01_corpse2", "actor_disp.bin");
			@@@var_2_object:add(var_123_object);
			var_127_object = Obj(); var_128_object = Obj(); var_129_string = ""; var_130_string = "";
			var_11_object = var_128_object;
			func_337(var_127_object, var_128_object, "b7q01_corpse3", "actor_disp.bin");
			@@@var_2_object:add(var_127_object);
			goto Label_261;
		}
		var_132_bool = var_3_string == "clear_gorbun_house";
		if(var_132_bool != 0) {
			var_133_object = Obj(); var_134_string = "";
			var_133_object = var_2_object;
			func_362(var_133_object, "cleanup");
			goto Label_261;
		}
		var_136_bool = var_3_string == "place_aglaja";
		if(var_136_bool != 0) {
			GetSceneByName(var_12_object, "sobor");
			Trigger(var_12_object, "aglaja");
			var_139_object = Obj(); var_140_string = "";
			var_139_object = var_0_object;
			func_362(var_139_object, "cleanup");
			goto Label_261;
		}
		var_142_bool = var_3_string == "cleanup";
		if(var_142_bool != 0) {
			GetVariable("b7q01", var_13_int);
			var_145_bool = var_13_int != (int)1000;
			if(var_145_bool != 0) {
				func_262();
			} else {
				func_278(Obj(), Obj(), var_13_int);
		}
			var_162_bool = var_3_string == "fail";
			if(var_162_bool != 0) {
				func_262();
				goto Label_261;
			}
			var_164_bool = var_3_string == "completed";
			if(var_164_bool == 0) goto Label_261;
			func_270();
		}
		goto Label_261;
	}
Label_261:
	return 10;
	
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	var_5_string = ""; var_6_bool = 0;
	func_345("sobor@door1", (bool)0);
	var_15_object = Obj();
	func_313(var_15_object);
	var_0_object = var_15_object;
	var_18_object = Obj();
	func_313(var_18_object);
	var_1_object = var_18_object;
	var_19_object = Obj();
	func_313(var_19_object);
	var_2_object = var_19_object;
	GetSceneByName(var_4_object, "sobor");
	Trigger(var_4_object, "noaglaja");
	
Label_24:
	Hold();
	goto Label_24;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_262()
{
	SetVariable("b7q01", (int)-1);
	func_278(var_11_object, var_12_object, var_13_int);
	return 0;
}


func_313(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	CreateObjectVector(var_17_object);
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_362(var_85_object, var_86_string)
{
	var_87_int = 0; var_88_int = 0; var_89_object = Obj(); var_90_int = 0; var_91_int = 0; var_92_object = Obj();
	var_93_object = var_85_object;
	if(var_93_object != 0) {
		@@var_85_object:size(var_90_int);
		var_91_int = 0;

	Label_368:
		var_94_bool = var_91_int < var_90_int;
		if(var_94_bool != 0) {
			@@var_85_object:get(var_92_object, var_91_int);
			var_95_object = var_92_object;
			if(var_95_object != 0) {
				Trigger(var_92_object, var_86_string);
			}
			var_92_object = 0;
			var_91_int = var_91_int + (int)1;
			goto Label_368;
		}
	}
	return 6;
}


func_270()
{
	SetVariable("b7q01", (int)1000);
	func_278(var_11_object, var_12_object, var_13_int);
	return 0;
}


func_337(var_115_object, var_116_object, var_117_string, var_118_string)
{
	var_119_object = Obj(); var_120_object = Obj();
	AddScriptedActor(var_120_object, var_117_string, var_118_string, var_116_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0));
	var_120_object = var_115_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_307(var_158_object)
{
	var_159_object = Obj(); var_160_object = Obj();
	self(var_160_object);
	var_160_object = var_158_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_278(var_0_object, var_1_object, var_2_object)
{
	var_148_object = Obj(); var_149_object = Obj();
	var_150_object = Obj(); var_151_string = "";
	var_150_object = var_0_object;
	func_362(var_150_object, "cleanup");
	var_152_object = Obj(); var_153_string = "";
	var_152_object = var_1_object;
	func_362(var_152_object, "cleanup");
	var_154_object = Obj(); var_155_string = "";
	var_154_object = var_2_object;
	func_362(var_154_object, "cleanup");
	GetSceneByName(var_149_object, "sobor");
	Trigger(var_149_object, "aglaja");
	var_158_object = Obj();
	func_307(var_158_object);
	RemoveActor(var_158_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_345(var_5_string, var_6_bool)
{
	var_7_object = Obj(); var_8_object = Obj();
	FindActor(var_8_object, var_5_string);
	var_9_bool = var_8_object == 0; //@nz
	if(var_9_bool != 0) {
		var_11_int = "Door " + var_5_string;
		var_13_int = var_11_int + " not found";
		Trace(var_13_int);
	} else {
		@@var_8_object:SetProperty("locked", var_6_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_319(var_17_object, var_18_object, var_19_string, var_20_string, var_21_string)
{
	var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj();
	@@var_18_object:GetLocator(var_19_string, var_26_bool, var_27_cvector, var_28_cvector);
	var_30_bool = var_26_bool == 0; //@nz
	if(var_30_bool != 0) {
		var_32_int = "Locator " + var_19_string;
		var_34_int = var_32_int + " doesn't exist";
		Trace(var_34_int);
	} else {
		AddActor(Obj(), var_20_string, var_18_object, var_27_cvector, var_28_cvector, var_21_string);
	}
	var_29_object = var_17_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


