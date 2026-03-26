// @IMPORTS: SetVariable/2,SetTimeEvent/2,CreateObjectVector/1,GetMainOutdoorScene/1,Trace/1,GetScene/1,GetVariable/2,RemoveActor/1,GetGameTime/1,Hold/0,self/1,AddActor/6,Trigger/2,FindActor/2
// @STRINGS: W:k5q03|W:pt_k5q03_enemy1|W:pers_hunter|W:k5q03_e_hunter.xml|A:add|W:pt_k5q03_enemy2|W:pt_k5q03_enemy3|W:pt_k5q03_enemy4|W:abinos_unload|W:completed|W:spawning albinos|W:pt_k5q03_albinos_path|W:pers_albinos|W:k5q03_albinos.xml|W:cleanup|A:Remove|A:GetPosition|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|A:size|A:get|W:player
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_26: op=0x41 vars=string
// @EVENT_9: op=0x52 vars=int,float
// @PE: 0x41,0x52,0xd5,0x137,0x13f

task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	Trace(var_2_string);
	var_4_bool = var_2_string == "abinos_unload";
	if(var_4_bool != 0) {
		func_99(var_2_string);
	} else {
		var_122_bool = var_2_string == "completed";
		if(var_122_bool == 0) goto Label_81;
		func_169();
	}
Label_81:
	return 0;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	var_5_bool = var_2_int == (int)1;
	if(var_5_bool != 0) {
		Trace("spawning albinos");
		func_99(var_3_float);
	} else {
		var_123_int = 0; var_124_float = 0;
		var_2_int = var_123_int;
		var_3_float = var_124_float;
		func_213();
	}
	return 0;
	
}


main(var_0_object, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj();
	SetVariable("k5q03", (int)1);
	var_6_int = 0;
	func_303(var_6_int);
	var_12_bool = var_6_int < (int)21;
	if(var_12_bool != 0) {
		SetTimeEvent((int)1, (int)117);
	} else {
		func_99(var_3_object);
	}
	CreateObjectVector(var_1_object);
	GetMainOutdoorScene(var_3_object);
	var_15_object = Obj(); var_16_object = Obj(); var_17_string = ""; var_18_string = ""; var_19_string = "";
	var_3_object = var_16_object;
	func_229(var_15_object, var_16_object, "pt_k5q03_enemy1", "pers_hunter", "k5q03_e_hunter.xml");
	@@@var_1_object:add(var_15_object);
	var_33_object = Obj(); var_34_object = Obj(); var_35_string = ""; var_36_string = ""; var_37_string = "";
	var_3_object = var_34_object;
	func_229(var_33_object, var_34_object, "pt_k5q03_enemy2", "pers_hunter", "k5q03_e_hunter.xml");
	@@@var_1_object:add(var_33_object);
	var_38_object = Obj(); var_39_object = Obj(); var_40_string = ""; var_41_string = ""; var_42_string = "";
	var_3_object = var_39_object;
	func_229(var_38_object, var_39_object, "pt_k5q03_enemy3", "pers_hunter", "k5q03_e_hunter.xml");
	@@@var_1_object:add(var_38_object);
	var_43_object = Obj(); var_44_object = Obj(); var_45_string = ""; var_46_string = ""; var_47_string = "";
	var_3_object = var_44_object;
	func_229(var_43_object, var_44_object, "pt_k5q03_enemy4", "pers_hunter", "k5q03_e_hunter.xml");
	@@@var_1_object:add(var_43_object);
	var_48_int = 0;
	func_194((int)5);
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_386(var_88_int, var_89_string)
{
	var_90_object = Obj(); var_91_int = 0; var_92_bool = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_object = Obj(); var_96_int = 0; var_97_bool = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0);
	GetMainOutdoorScene(var_95_object);
	var_96_int = 0;
	
Label_390:
	var_101_int = var_96_int + (int)1;
	var_102_int = var_89_string + var_101_int;
	@@var_95_object:GetLocator(var_102_int, var_97_bool, var_98_cvector, var_99_cvector);
	var_103_bool = var_97_bool == 0; //@nz
	if(var_103_bool != 0) {
	} else {
		var_96_int = var_96_int + (int)1;
		goto Label_390;
	}
	var_96_int = var_88_int;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_194(var_48_int)
{
	var_49_float = 0; var_50_float = 0;
	GetGameTime(var_50_float);
	var_52_float = var_48_int * (int)24;
	var_53_bool = var_50_float >= var_52_float;
	if(var_53_bool != 0) {
		func_177(var_49_float, var_50_float);
	} else {
		var_72_float = var_48_int * (int)24;
		SetTimeEvent((int)0, var_72_float);
		Hold();
	}
	return 2;
	
}


func_327(var_146_float, var_147_cvector)
{
	var_148_object = Obj(); var_149_cvector = CVector(0,0,0); var_150_object = Obj(); var_151_cvector = CVector(0,0,0);
	FindActor(var_150_object, "player");
	var_153_bool = var_150_object == 0; //@nz
	if(var_153_bool != 0) {
		var_146_float = 0;
		return 4;
	}
	var_154_cvector = CVector(0,0,0); var_155_object = Obj();
	var_150_object = var_155_object;
	func_218(var_154_cvector, var_155_object);
	var_151_cvector = var_154_cvector - var_147_cvector;
	var_146_float = var_151_cvector | var_151_cvector;
	return 4;
}
EMIT "Stack[-2] = 0";


func_265(var_167_object, var_168_object, var_169_string, var_170_string, var_171_string)
{
	var_175_bool = 0; var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_object = Obj(); var_179_bool = 0; var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_object = Obj();
	@@var_168_object:GetLocator(var_169_string, var_179_bool, var_180_cvector, var_181_cvector);
	var_183_bool = var_179_bool == 0; //@nz
	if(var_183_bool != 0) {
		var_185_int = "Locator " + var_169_string;
		var_187_int = var_185_int + " doesn't exist";
		Trace(var_187_int);
	} else {
		@@var_168_object:AddStationaryActor(Obj(), var_180_cvector, var_181_cvector, var_170_string, var_171_string, (bool)1);
	}
	var_182_object = var_167_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_213()
{
	func_150();
	return 0;
}


func_150()
{
	var_125_int = 0; var_126_int = 0;
	GetVariable("k5q03", var_126_int);
	var_129_bool = var_126_int != (int)1000;
	if(var_129_bool != 0) {
		func_161();
	}
	return 2;
}


func_343(var_120_int, var_121_string)
{
	var_122_cvector = CVector(0,0,0); var_123_int = 0; var_124_object = Obj(); var_125_int = 0; var_126_bool = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_int = 0; var_131_object = Obj(); var_132_int = 0; var_133_bool = 0; var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0);
	var_130_int = -1;
	GetMainOutdoorScene(var_131_object);
	
Label_348:
	(int)-1 = (int)-1 + (int)1;
	var_138_int = var_132_int + (int)1;
	var_139_int = var_121_string + var_138_int;
	@@var_131_object:GetLocator(var_139_int, var_133_bool, var_134_cvector, var_135_cvector);
	var_140_bool = var_133_bool == 0; //@nz
	if(var_140_bool != 0) {
	} else {
			var_144_bool = 0; var_145_cvector = CVector(0,0,0);
			var_134_cvector = var_145_cvector;
			func_311(var_144_bool, var_145_cvector);
			var_159_bool = var_144_bool == 0; //@nz
			if(var_159_bool != 0) {
			} else {
				var_160_bool = 0; var_161_cvector = CVector(0,0,0);
				var_134_cvector = var_161_cvector;
				func_319(var_160_bool, var_161_cvector);
				if(var_160_bool != 0) {
					goto Label_376;
				}
				var_165_bool = var_132_int < var_130_int;
				if(var_165_bool != 0) {
					goto Label_376;
				}
				var_132_int = var_130_int;
				var_134_cvector = var_129_cvector;
			}
		Label_376:
			goto Label_348;
	}
	var_142_bool = var_130_int == (int)-1;
	if(var_142_bool != 0) {
		var_120_int = var_132_int - (int)1;
	} else {
		var_130_int = var_120_int;

	}
	return 14;
	
}
EMIT "Stack[-5] = 0";


func_218(var_154_cvector, var_155_object)
{
	var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0);
	@@var_155_object:GetPosition(var_157_cvector);
	var_157_cvector = var_154_cvector;
	return 2;
}


func_247(var_82_object, var_83_object, var_84_string, var_85_string, var_86_string)
{
	var_107_bool = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_object = Obj(); var_111_bool = 0; var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_object = Obj();
	@@var_83_object:GetLocator(var_84_string, var_111_bool, var_112_cvector, var_113_cvector);
	var_115_bool = var_111_bool == 0; //@nz
	if(var_115_bool != 0) {
		var_117_int = "Locator " + var_84_string;
		var_119_int = var_117_int + " doesn't exist";
		Trace(var_119_int);
	} else {
		@@var_83_object:AddStationaryActor(Obj(), var_112_cvector, var_113_cvector, var_85_string, var_86_string);
	}
	var_114_object = var_82_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_284(var_54_object, var_55_string)
{
	var_56_int = 0; var_57_int = 0; var_58_object = Obj(); var_59_int = 0; var_60_int = 0; var_61_object = Obj();
	var_62_object = var_54_object;
	if(var_62_object != 0) {
		@@var_54_object:size(var_59_int);
		var_60_int = 0;

	Label_290:
		var_63_bool = var_60_int < var_59_int;
		if(var_63_bool != 0) {
			@@var_54_object:get(var_61_object, var_60_int);
			var_64_object = var_61_object;
			if(var_64_object != 0) {
				Trigger(var_61_object, var_55_string);
			}
			var_61_object = 0;
			var_60_int = var_60_int + (int)1;
			goto Label_290;
		}
	}
	return 6;
}


func_223(var_67_object)
{
	var_68_object = Obj(); var_69_object = Obj();
	self(var_69_object);
	var_69_object = var_67_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_161()
{
	SetVariable("k5q03", (int)-1);
	func_177(var_125_int, var_126_int);
	return 0;
}


func_99(var_0_object)
{
	var_73_object = Obj(); var_74_object = Obj(); var_75_int = 0; var_76_object = Obj(); var_77_object = Obj(); var_78_int = 0;
	GetMainOutdoorScene(var_76_object);
	GetScene(var_77_object);
	var_79_bool = var_76_object != var_77_object;
	if(var_79_bool != 0) {
		SetVariable("pt_k5q03_albinos_path", (int)-1);
		var_82_object = Obj(); var_83_object = Obj(); var_84_string = ""; var_85_string = ""; var_86_string = "";
		var_76_object = var_83_object;
		var_88_int = 0; var_89_string = "";
		func_386(var_88_int, "pt_k5q03_albinos_path");
		var_106_int = var_88_int + (int)1;
		var_84_string = "pt_k5q03_albinos_path" + var_106_int;
		func_247(var_82_object, var_83_object, var_84_string, "pers_albinos", "k5q03_albinos.xml");
		var_0_object = var_82_object;
	} else {
		var_120_int = 0; var_121_string = "";
		func_343(var_120_int, "pt_k5q03_albinos_path");
		var_120_int = var_78_int;
		Trace(var_78_int);
		SetVariable("pt_k5q03_albinos_path", var_78_int);
		var_167_object = Obj(); var_168_object = Obj(); var_169_string = ""; var_170_string = ""; var_171_string = "";
		var_76_object = var_168_object;
		var_174_int = var_78_int + (int)1;
		var_169_string = "pt_k5q03_albinos_path" + var_174_int;
		func_265(var_167_object, var_168_object, var_169_string, "pers_albinos", "k5q03_albinos.xml");
		var_0_object = var_167_object;
	}
	return 6;
	
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_229(var_15_object, var_16_object, var_17_string, var_18_string, var_19_string)
{
	var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj();
	@@var_16_object:GetLocator(var_17_string, var_24_bool, var_25_cvector, var_26_cvector);
	var_28_bool = var_24_bool == 0; //@nz
	if(var_28_bool != 0) {
		var_30_int = "Locator " + var_17_string;
		var_32_int = var_30_int + " doesn't exist";
		Trace(var_32_int);
	} else {
		AddActor(Obj(), var_18_string, var_16_object, var_25_cvector, var_26_cvector, var_19_string);
	}
	var_27_object = var_15_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_169()
{
	SetVariable("k5q03", (int)1000);
	func_177(var_1_object, var_2_string);
	return 0;
}


func_303(var_6_int)
{
	var_7_float = 0; var_8_float = 0;
	GetGameTime(var_8_float);
	var_9_int = 0;
	var_8_float = var_9_int;
	var_6_int = var_9_int % (int)24;
	return 2;
}


func_177(var_0_object, var_1_object)
{
	EventDisable(26);
	EventDisable(9);
	var_54_object = Obj(); var_55_string = "";
	var_54_object = var_1_object;
	func_284(var_54_object, "cleanup");
	var_66_object = var_0_object;
	if(var_66_object != 0) {
		@@@var_0_object:Remove();
	}
	var_67_object = Obj();
	func_223(var_67_object);
	RemoveActor(var_67_object);
	return 0;
}


func_311(var_144_bool, var_145_cvector)
{
	var_146_float = 0; var_147_cvector = CVector(0,0,0);
	var_145_cvector = var_147_cvector;
	func_327(var_146_float, var_147_cvector);
	var_144_bool = var_146_float < (float)12250000.0;
	return 0;
}


func_319(var_160_bool, var_161_cvector)
{
	var_162_float = 0; var_163_cvector = CVector(0,0,0);
	var_161_cvector = var_163_cvector;
	func_327(var_162_float, var_163_cvector);
	var_160_bool = var_162_float < (float)4000000.0;
	return 0;
}


