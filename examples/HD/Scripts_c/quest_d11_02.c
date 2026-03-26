// @IMPORTS: GetSceneByName/2,Trace/1,SetVariable/2,GetMainOutdoorScene/1,AddActor/6,GetVariable/2,RemoveActor/1,Trigger/2,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,CreateObjectVector/1
// @STRINGS: W:uprava_admin|W:pt_d11q02_girl|W:pers_littlegirl|W:d11q02_littlegirl.xml|W:pt_d11q02_boy|W:pers_littleboy|W:d11q02_littleboy.xml|W:uprava_load|W:init_graveyard|W:d11q02|W:d11q02_trigger|W:d11q02_trigger.xml|W:pt_d11q02_soldier|W:pers_soldat|W:d11q02_soldier.xml|A:add|W:pt_d11q02_victim1|W:pers_worker|W:d11q02_victim1.xml|W:pt_d11q02_victim2|W:d11q02_victim2.xml|W:pt_d11q02_victim3|W:pers_unosha|W:d11q02_victim3.xml|W:pt_d11q02_victim4|W:d11q02_victim4.xml|W:execute|W:soldier_attack|W:actor_unload|W:soldier_dead|A:size|A:get|A:IsDead|W:fail|W:completed|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist|A:clear
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,bool,bool,int,bool params=0
// @EVENT_26: op=0x28 vars=string
// @EVENT_9: op=0x136 vars=int,float
// @PE: 0x136

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_bool, var_9_string)
{
	var_10_object = Obj(); var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_bool = 0; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_bool = 0;
	Trace(var_9_string);
	var_23_bool = var_9_string == "uprava_load";
	if(var_23_bool != 0) {
		var_24_bool = var_5_bool == 0; //@nz
		if(var_24_bool != 0) {
			func_17(var_19_int, var_20_object, var_21_bool);
		}
	} else {
		var_52_bool = var_9_string == "init_graveyard";
		if(var_52_bool != 0) {
			SetVariable("d11q02", (int)1);
			GetMainOutdoorScene(var_16_object);
			AddActor(var_2_object, "d11q02_trigger", var_16_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "d11q02_trigger.xml");
			var_17_int = 1;

		Label_68:
			var_60_bool = var_17_int <= (int)4;
			if(var_60_bool != 0) {
				var_61_object = Obj(); var_62_object = Obj(); var_63_string = ""; var_64_string = ""; var_65_string = "";
				var_16_object = var_62_object;
				var_63_string = "pt_d11q02_soldier" + var_17_int;
				func_327(var_61_object, var_62_object, var_63_string, "pers_soldat", "d11q02_soldier.xml");
				@@@var_3_object:add(var_61_object);
				var_17_int = var_17_int + (int)1;
				goto Label_68;
			}
			var_68_object = Obj(); var_69_object = Obj(); var_70_string = ""; var_71_string = ""; var_72_string = "";
			var_16_object = var_69_object;
			func_327(var_68_object, var_69_object, "pt_d11q02_victim1", "pers_worker", "d11q02_victim1.xml");
			@@@var_4_object:add(var_68_object);
			var_73_object = Obj(); var_74_object = Obj(); var_75_string = ""; var_76_string = ""; var_77_string = "";
			var_16_object = var_74_object;
			func_327(var_73_object, var_74_object, "pt_d11q02_victim2", "pers_worker", "d11q02_victim2.xml");
			@@@var_4_object:add(var_73_object);
			var_78_object = Obj(); var_79_object = Obj(); var_80_string = ""; var_81_string = ""; var_82_string = "";
			var_16_object = var_79_object;
			func_327(var_78_object, var_79_object, "pt_d11q02_victim3", "pers_unosha", "d11q02_victim3.xml");
			@@@var_4_object:add(var_78_object);
			var_83_object = Obj(); var_84_object = Obj(); var_85_string = ""; var_86_string = ""; var_87_string = "";
			var_16_object = var_84_object;
			func_327(var_83_object, var_84_object, "pt_d11q02_victim4", "pers_unosha", "d11q02_victim4.xml");
			@@@var_4_object:add(var_83_object);
			var_16_object = 0;
			goto Label_220;
		}
		var_89_bool = var_9_string == "d11q02_trigger";
		if(var_89_bool != 0) {
			var_90_object = Obj(); var_91_string = "";
			var_90_object = var_3_object;
			func_366(var_90_object, "execute");
			var_6_bool = true;
			goto Label_220;
		}
		var_103_bool = var_9_string == "execute";
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_string = "";
			var_104_object = var_4_object;
			func_366(var_104_object, "execute");
			var_6_bool = false;
			func_232();
			goto Label_220;
		}
		var_119_bool = var_9_string == "soldier_attack";
		if(var_119_bool != 0) {
			var_120_object = Obj(); var_121_string = "";
			var_120_object = var_3_object;
			func_366(var_120_object, "attack");
			goto Label_220;
		}
		var_123_bool = var_9_string == "actor_unload";
		if(var_123_bool != 0) {
			var_124_int = var_7_int;
			if(var_124_int != 0) {
				var_126_bool = var_7_int == (int)1;
				if(var_126_bool != 0) {
					func_248(var_19_int, var_20_object, var_21_bool);
				}
			} else {
				var_141_bool = var_6_bool;
				if(var_141_bool == 0) goto Label_175;
				var_6_bool = false;
				func_232();
				func_248(var_19_int, var_20_object, var_21_bool);
		}
			var_143_bool = var_9_string == "soldier_dead";
			if(var_143_bool != 0) {
				@@@var_3_object:size(var_18_int);
				var_19_int = 0;

			Label_182:
				var_144_bool = var_19_int < var_18_int;
				if(var_144_bool != 0) {
					@@@var_3_object:get(var_20_object, var_19_int);
					var_145_object = var_20_object;
					if(var_145_object == 0) goto Label_193;
					@@var_20_object:IsDead(var_21_bool);
					var_146_bool = var_21_bool == 0; //@nz
					if(var_146_bool != 0) {
					} else {
						var_20_object = 0;
						var_19_int = var_19_int + (int)1;
						goto Label_182;
			}
					var_153_bool = var_9_string == "fail";
					if(var_153_bool != 0) {
						func_232();
						goto Label_220;
					}
					var_155_bool = var_9_string == "completed";
					if(var_155_bool == 0) goto Label_220;
					func_240();
				}
			}
			var_147_bool = var_19_int == var_18_int;
			if(var_147_bool != 0) {
				SetVariable("d11q02", (int)2);
				var_150_bool = var_7_int == 0; //@nz
				if(var_150_bool != 0) {
					var_7_int = 1;
				}
			}
			goto Label_220;
		}
	Label_175:
		goto Label_220;
	}
Label_220:
	return 12;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_bool, var_9_int, var_10_float)
{
	func_221();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_bool)
{
	var_9_object = Obj();
	func_321(var_9_object);
	var_3_object = var_9_object;
	var_12_object = Obj();
	func_321(var_12_object);
	var_4_object = var_12_object;
	var_5_bool = false;
	var_6_bool = false;
	var_7_int = 0;
	var_8_bool = false;
	var_13_int = 0;
	func_291((int)11);
	return 0;
}


func_321(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	CreateObjectVector(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_291(var_13_int)
{
	var_14_float = 0; var_15_float = 0;
	GetGameTime(var_15_float);
	var_17_float = var_13_int * (int)24;
	var_18_bool = var_15_float >= var_17_float;
	if(var_18_bool != 0) {
		func_265(var_7_int, var_8_bool, var_13_int, var_14_float, var_15_float);
	} else {
		var_31_float = var_13_int * (int)24;
		SetTimeEvent((int)0, var_31_float);
		Hold();
	}
	return 2;
	
}


func_327(var_28_object, var_29_object, var_30_string, var_31_string, var_32_string)
{
	var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_object = Obj();
	@@var_29_object:GetLocator(var_30_string, var_37_bool, var_38_cvector, var_39_cvector);
	var_41_bool = var_37_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_43_int = "Locator " + var_30_string;
		var_45_int = var_43_int + " doesn't exist";
		Trace(var_45_int);
	} else {
		AddActor(Obj(), var_31_string, var_29_object, var_38_cvector, var_39_cvector, var_32_string);
	}
	var_40_object = var_28_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_232()
{
	SetVariable("d11q02", (int)-1);
	func_265(var_8_bool, var_9_int, var_10_float, var_11_int, var_12_int);
	return 0;
}


func_265(var_0_object, var_1_object, var_2_object, var_7_int, var_8_bool)
{
	var_19_object = var_0_object;
	if(var_19_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_21_object = var_1_object;
	if(var_21_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_23_object = var_2_object;
	if(var_23_object != 0) {
		RemoveActor(var_2_object);
	}
	var_25_bool = var_7_int == (int)2;
	if(var_25_bool != 0) {
		var_26_object = Obj();
		func_315(var_26_object);
		RemoveActor(var_26_object);
	} else {
		var_7_int = 1;
	}
	var_8_bool = true;
	return 0;
	
}


func_366(var_90_object, var_91_string)
{
	var_92_int = 0; var_93_int = 0; var_94_object = Obj(); var_95_int = 0; var_96_int = 0; var_97_object = Obj();
	var_98_object = var_90_object;
	if(var_98_object != 0) {
		@@var_90_object:size(var_95_int);
		var_96_int = 0;

	Label_372:
		var_99_bool = var_96_int < var_95_int;
		if(var_99_bool != 0) {
			@@var_90_object:get(var_97_object, var_96_int);
			var_100_object = var_97_object;
			if(var_100_object != 0) {
				Trigger(var_97_object, var_91_string);
			}
			var_97_object = 0;
			var_96_int = var_96_int + (int)1;
			goto Label_372;
		}
	}
	return 6;
}


func_240()
{
	SetVariable("d11q02", (int)1000);
	func_265(var_17_int, var_18_int, var_19_int, var_20_object, var_21_bool);
	return 0;
}


func_17(var_0_object, var_1_object, var_5_bool)
{
	var_25_object = Obj(); var_26_object = Obj();
	GetSceneByName(var_26_object, "uprava_admin");
	var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = "";
	var_26_object = var_29_object;
	func_327(var_28_object, var_29_object, "pt_d11q02_girl", "pers_littlegirl", "d11q02_littlegirl.xml");
	var_0_object = var_28_object;
	var_46_object = Obj(); var_47_object = Obj(); var_48_string = ""; var_49_string = ""; var_50_string = "";
	var_26_object = var_47_object;
	func_327(var_46_object, var_47_object, "pt_d11q02_boy", "pers_littleboy", "d11q02_littleboy.xml");
	var_1_object = var_46_object;
	var_5_bool = true;
	return 2;
}
EMIT "Stack[-1] = 0";


func_248(var_3_object, var_4_object, var_7_int)
{
	var_127_object = Obj();
	var_127_object = var_3_object;
	func_345(var_127_object);
	var_138_object = Obj();
	var_138_object = var_4_object;
	func_345(var_138_object);
	var_139_bool = var_8_bool;
	if(var_139_bool != 0) {
		var_140_object = Obj();
		func_315(var_140_object);
		RemoveActor(var_140_object);
	}
	var_7_int = 2;
	return 0;
}


func_345(var_127_object)
{
	var_128_int = 0; var_129_int = 0; var_130_object = Obj(); var_131_int = 0; var_132_int = 0; var_133_object = Obj();
	var_134_object = var_127_object;
	if(var_134_object != 0) {
		@@var_127_object:size(var_131_int);
		var_132_int = 0;

	Label_351:
		var_135_bool = var_132_int < var_131_int;
		if(var_135_bool != 0) {
			@@var_127_object:get(var_133_object, var_132_int);
			var_136_object = var_133_object;
			if(var_136_object != 0) {
				RemoveActor(var_133_object);
			}
			var_133_object = 0;
			var_132_int = var_132_int + (int)1;
			goto Label_351;
		}
		@@var_127_object:clear();
	}
	return 6;
}


func_315(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj();
	self(var_28_object);
	var_28_object = var_26_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_221()
{
	var_11_int = 0; var_12_int = 0;
	GetVariable("d11q02", var_12_int);
	var_15_bool = var_12_int != (int)1000;
	if(var_15_bool != 0) {
		func_232();
	}
	return 2;
}


