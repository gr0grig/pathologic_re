// @IMPORTS: CreateObjectVector/1,GetMainOutdoorScene/1,SetVariable/2,SetTimeEvent/2,Trace/1,GetScene/1,GetVariable/2,RemoveActor/1,GetGameTime/1,Hold/0,self/1,FindActor/2
// @STRINGS: W:pt_k6q03_bomber|W:pers_bomber|W:k6q03_bomber.xml|A:add|W:k6q03|W:abinos_unload|W:completed|W:spawning albinos|W:pt_k6q03_albinos_path|W:pers_albinos|W:k6q03_albinos.xml|A:Remove|A:GetPosition|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|A:size|A:get|A:clear|W:player
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_26: op=0x30 vars=string
// @EVENT_9: op=0x41 vars=int,float
// @PE: 0x30,0x41,0xc2,0x114,0x11c

task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	Trace(var_2_string);
	var_4_bool = var_2_string == "abinos_unload";
	if(var_4_bool != 0) {
		func_82(var_2_string);
	} else {
		var_122_bool = var_2_string == "completed";
		if(var_122_bool == 0) goto Label_64;
		func_152();
	}
Label_64:
	return 0;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	var_5_bool = var_2_int == (int)1;
	if(var_5_bool != 0) {
		Trace("spawning albinos");
		func_82(var_3_float);
	} else {
		var_123_int = 0; var_124_float = 0;
		var_2_int = var_123_int;
		var_3_float = var_124_float;
		func_194();
	}
	return 0;
	
}


main(var_0_object, var_1_object)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0;
	CreateObjectVector(var_1_object);
	GetMainOutdoorScene(var_4_object);
	var_5_int = 0;
	
Label_6:
	var_7_bool = var_5_int < (int)5;
	if(var_7_bool != 0) {
		var_8_object = Obj(); var_9_object = Obj(); var_10_string = ""; var_11_string = ""; var_12_string = "";
		var_4_object = var_9_object;
		var_15_int = var_5_int + (int)1;
		var_10_string = "pt_k6q03_bomber" + var_15_int;
		func_210(var_8_object, var_9_object, var_10_string, "pers_bomber", "k6q03_bomber.xml");
		@@@var_1_object:add(var_8_object);
		var_5_int = var_5_int + (int)1;
		goto Label_6;
	}
	SetVariable("k6q03", (int)1);
	var_32_int = 0;
	func_268(var_32_int);
	var_38_bool = var_32_int < (int)21;
	if(var_38_bool != 0) {
		SetTimeEvent((int)1, (int)141);
	} else {
		func_82(var_5_int);
	}
	var_41_int = 0;
	func_175((int)6);
	return 4;
	
}
EMIT "Stack[-2] = 0";


func_194()
{
	func_133();
	return 0;
}


func_133()
{
	var_125_int = 0; var_126_int = 0;
	GetVariable("k6q03", var_126_int);
	var_129_bool = var_126_int != (int)1000;
	if(var_129_bool != 0) {
		func_144();
	}
	return 2;
}


func_199(var_133_cvector, var_134_object)
{
	var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0);
	@@var_134_object:GetPosition(var_136_cvector);
	var_136_cvector = var_133_cvector;
	return 2;
}


func_268(var_32_int)
{
	var_33_float = 0; var_34_float = 0;
	GetGameTime(var_34_float);
	var_35_int = 0;
	var_34_float = var_35_int;
	var_32_int = var_35_int % (int)24;
	return 2;
}


func_204(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj();
	self(var_61_object);
	var_61_object = var_59_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_144()
{
	SetVariable("k6q03", (int)-1);
	func_160(var_125_int, var_126_int);
	return 0;
}


func_210(var_8_object, var_9_object, var_10_string, var_11_string, var_12_string)
{
	var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj();
	@@var_9_object:GetLocator(var_10_string, var_20_bool, var_21_cvector, var_22_cvector);
	var_24_bool = var_20_bool == 0; //@nz
	if(var_24_bool != 0) {
		var_26_int = "Locator " + var_10_string;
		var_28_int = var_26_int + " doesn't exist";
		Trace(var_28_int);
	} else {
		@@var_9_object:AddStationaryActor(Obj(), var_21_cvector, var_22_cvector, var_11_string, var_12_string);
	}
	var_23_object = var_8_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_82(var_0_object)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0;
	GetMainOutdoorScene(var_68_object);
	GetScene(var_69_object);
	var_71_bool = var_68_object != var_69_object;
	if(var_71_bool != 0) {
		SetVariable("pt_k6q03_albinos_path", (int)-1);
		var_74_object = Obj(); var_75_object = Obj(); var_76_string = ""; var_77_string = ""; var_78_string = "";
		var_68_object = var_75_object;
		var_80_int = 0; var_81_string = "";
		func_351(var_80_int, "pt_k6q03_albinos_path");
		var_98_int = var_80_int + (int)1;
		var_76_string = "pt_k6q03_albinos_path" + var_98_int;
		func_210(var_74_object, var_75_object, var_76_string, "pers_albinos", "k6q03_albinos.xml");
		var_0_object = var_74_object;
	} else {
		var_99_int = 0; var_100_string = "";
		func_308(var_99_int, "pt_k6q03_albinos_path");
		var_99_int = var_70_int;
		Trace(var_70_int);
		SetVariable("pt_k6q03_albinos_path", var_70_int);
		var_146_object = Obj(); var_147_object = Obj(); var_148_string = ""; var_149_string = ""; var_150_string = "";
		var_68_object = var_147_object;
		var_153_int = var_70_int + (int)1;
		var_148_string = "pt_k6q03_albinos_path" + var_153_int;
		func_228(var_146_object, var_147_object, var_148_string, "pers_albinos", "k6q03_albinos.xml");
		var_0_object = var_146_object;
	}
	return 6;
	
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_276(var_123_bool, var_124_cvector)
{
	var_125_float = 0; var_126_cvector = CVector(0,0,0);
	var_124_cvector = var_126_cvector;
	func_292(var_125_float, var_126_cvector);
	var_123_bool = var_125_float < (float)12250000.0;
	return 0;
}


func_152()
{
	SetVariable("k6q03", (int)1000);
	func_160(var_1_object, var_2_string);
	return 0;
}


func_284(var_139_bool, var_140_cvector)
{
	var_141_float = 0; var_142_cvector = CVector(0,0,0);
	var_140_cvector = var_142_cvector;
	func_292(var_141_float, var_142_cvector);
	var_139_bool = var_141_float < (float)4000000.0;
	return 0;
}


func_351(var_80_int, var_81_string)
{
	var_82_object = Obj(); var_83_int = 0; var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_object = Obj(); var_88_int = 0; var_89_bool = 0; var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0);
	GetMainOutdoorScene(var_87_object);
	var_88_int = 0;
	
Label_355:
	var_93_int = var_88_int + (int)1;
	var_94_int = var_81_string + var_93_int;
	@@var_87_object:GetLocator(var_94_int, var_89_bool, var_90_cvector, var_91_cvector);
	var_95_bool = var_89_bool == 0; //@nz
	if(var_95_bool != 0) {
	} else {
		var_88_int = var_88_int + (int)1;
		goto Label_355;
	}
	var_88_int = var_80_int;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_160(var_0_object, var_1_object)
{
	EventDisable(26);
	var_47_object = var_0_object;
	if(var_47_object != 0) {
		@@@var_0_object:Remove();
	}
	var_48_object = Obj();
	var_48_object = var_1_object;
	func_247(var_48_object);
	var_59_object = Obj();
	func_204(var_59_object);
	RemoveActor(var_59_object);
	return 0;
}


func_228(var_146_object, var_147_object, var_148_string, var_149_string, var_150_string)
{
	var_154_bool = 0; var_155_cvector = CVector(0,0,0); var_156_cvector = CVector(0,0,0); var_157_object = Obj(); var_158_bool = 0; var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); var_161_object = Obj();
	@@var_147_object:GetLocator(var_148_string, var_158_bool, var_159_cvector, var_160_cvector);
	var_162_bool = var_158_bool == 0; //@nz
	if(var_162_bool != 0) {
		var_164_int = "Locator " + var_148_string;
		var_166_int = var_164_int + " doesn't exist";
		Trace(var_166_int);
	} else {
		@@var_147_object:AddStationaryActor(Obj(), var_159_cvector, var_160_cvector, var_149_string, var_150_string, (bool)1);
	}
	var_161_object = var_146_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_292(var_125_float, var_126_cvector)
{
	var_127_object = Obj(); var_128_cvector = CVector(0,0,0); var_129_object = Obj(); var_130_cvector = CVector(0,0,0);
	FindActor(var_129_object, "player");
	var_132_bool = var_129_object == 0; //@nz
	if(var_132_bool != 0) {
		var_125_float = 0;
		return 4;
	}
	var_133_cvector = CVector(0,0,0); var_134_object = Obj();
	var_129_object = var_134_object;
	func_199(var_133_cvector, var_134_object);
	var_130_cvector = var_133_cvector - var_126_cvector;
	var_125_float = var_130_cvector | var_130_cvector;
	return 4;
}
EMIT "Stack[-2] = 0";


func_175(var_41_int)
{
	var_42_float = 0; var_43_float = 0;
	GetGameTime(var_43_float);
	var_45_float = var_41_int * (int)24;
	var_46_bool = var_43_float >= var_45_float;
	if(var_46_bool != 0) {
		func_160(var_42_float, var_43_float);
	} else {
		var_64_float = var_41_int * (int)24;
		SetTimeEvent((int)0, var_64_float);
		Hold();
	}
	return 2;
	
}


func_308(var_99_int, var_100_string)
{
	var_101_cvector = CVector(0,0,0); var_102_int = 0; var_103_object = Obj(); var_104_int = 0; var_105_bool = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_int = 0; var_110_object = Obj(); var_111_int = 0; var_112_bool = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0);
	var_109_int = -1;
	GetMainOutdoorScene(var_110_object);
	
Label_313:
	(int)-1 = (int)-1 + (int)1;
	var_117_int = var_111_int + (int)1;
	var_118_int = var_100_string + var_117_int;
	@@var_110_object:GetLocator(var_118_int, var_112_bool, var_113_cvector, var_114_cvector);
	var_119_bool = var_112_bool == 0; //@nz
	if(var_119_bool != 0) {
	} else {
			var_123_bool = 0; var_124_cvector = CVector(0,0,0);
			var_113_cvector = var_124_cvector;
			func_276(var_123_bool, var_124_cvector);
			var_138_bool = var_123_bool == 0; //@nz
			if(var_138_bool != 0) {
			} else {
				var_139_bool = 0; var_140_cvector = CVector(0,0,0);
				var_113_cvector = var_140_cvector;
				func_284(var_139_bool, var_140_cvector);
				if(var_139_bool != 0) {
					goto Label_341;
				}
				var_144_bool = var_111_int < var_109_int;
				if(var_144_bool != 0) {
					goto Label_341;
				}
				var_111_int = var_109_int;
				var_113_cvector = var_108_cvector;
			}
		Label_341:
			goto Label_313;
	}
	var_121_bool = var_109_int == (int)-1;
	if(var_121_bool != 0) {
		var_99_int = var_111_int - (int)1;
	} else {
		var_109_int = var_99_int;

	}
	return 14;
	
}
EMIT "Stack[-5] = 0";


func_247(var_48_object)
{
	var_49_int = 0; var_50_int = 0; var_51_object = Obj(); var_52_int = 0; var_53_int = 0; var_54_object = Obj();
	var_55_object = var_48_object;
	if(var_55_object != 0) {
		@@var_48_object:size(var_52_int);
		var_53_int = 0;

	Label_253:
		var_56_bool = var_53_int < var_52_int;
		if(var_56_bool != 0) {
			@@var_48_object:get(var_54_object, var_53_int);
			var_57_object = var_54_object;
			if(var_57_object != 0) {
				@@var_54_object:Remove();
			}
			var_54_object = 0;
			var_53_int = var_53_int + (int)1;
			goto Label_253;
		}
		@@var_48_object:clear();
	}
	return 6;
}


