// @IMPORTS: Hold/0,LockCameraFOV/1,GetCameraCurrentFOV/1,ModIsDOFEnabled/1,ModGetDOFParams/4,ModSetDOFEnabled/1,sync/1,UnlockCameraFOV/1,GetPosition/1,self/1,KillTimer/1,SetTimer/2,IsExistingSound/2,Trace/1,irand/2,PlaySound/1,GetSpeed/1,SetSpeed/1,ModSetDOFParams/4,ModDarkenLevel/1,ModBlurLevel/1,SetCameraFOV/1,HasProperty/2,GetProperty/2
// @STRINGS: A:GetPosition|W:_|W:No sounds for "|W:hit_physical1|W:scream_physical1|W:hit_physical2|W:scream_physical2|W:hit_bullet|W:scream_bullet|W:hit_oscoloc|W:scream_oscoloc|W:hit_mental|W:scream_mental|W:hit_rat|W:scream_rat|W:GetPosition|W:blocking
// @GLOBALS: 0:bool:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_22: op=0x7 vars=object,int,float,float
// @EVENT_43: op=0x18 vars=object,int,float,float,cvector,cvector
// @TASK_1: vars=float,float params=1
// @EVENT_22: op=0x81 vars=object,int,float,float
// @EVENT_43: op=0x97 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_7: op=0xc2 vars=int
// @PE: 0x7,0x18,0x97,0xb7,0xc2,0xd7,0x109,0x114

	task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_cvector, var_5_cvector, var_6_float, var_7_float, var_8_object, var_9_int, var_10_float, var_11_float)
	{
	var_12_int = 5;
	var_13_bool = var_9_int != var_12_int;
	if(var_13_bool != 0) {
		var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
		var_8_object = var_14_object;
		var_9_int = var_15_int;
		var_10_float = var_16_float;
		func_353(var_15_int, var_16_float);
		var_109_float = 0;
		var_10_float = var_109_float;
		TaskCall(1);
		func_33(var_110_float, var_111_float, var_109_float);
		TaskReturn();
	}
	return 0;
	}


task_0_event_43(var_0_object, var_1_int, var_2_float, var_3_float, var_4_cvector, var_5_cvector, var_6_float, var_7_float)
{
	var_8_object = Obj(); var_9_int = 0; var_10_float = 0; var_11_float = 0;
	var_2_float = var_8_object;
	var_3_float = var_9_int;
	var_4_cvector = var_10_float;
	var_5_cvector = var_11_float;
	func_7();
	return 0;
}


	task_1_event_22(var_0_float, var_1_float, var_2_object, var_3_int, var_4_float, var_5_float, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float)
	{
	var_12_float = 0; var_13_float = 0;
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
	var_8_object = var_14_object;
	var_9_int = var_15_int;
	var_10_float = var_16_float;
	func_353(var_15_int, var_16_float);
	var_109_float = 0; var_110_float = 0;
	var_10_float = var_110_float;
	func_215(var_109_float, var_110_float);
	var_109_float = var_13_float;
	var_117_bool = var_1_float < var_0_float;
	if(var_117_bool != 0) {
		var_118_bool = var_13_float > var_0_float;
		if(var_118_bool != 0) {
			var_1_float = var_13_float;
		}
	} else {
		var_119_bool = var_13_float > var_1_float;
		if(var_119_bool == 0) goto Label_150;
		var_1_float = var_13_float;
	}
Label_150:
	return 2;
	
	}


task_1_event_43(var_0_float, var_1_float, var_2_object, var_3_int, var_4_float, var_5_float, var_6_cvector, var_7_cvector)
{
	var_8_object = Obj(); var_9_int = 0; var_10_float = 0; var_11_float = 0;
	var_2_object = var_8_object;
	var_3_int = var_9_int;
	var_4_float = var_10_float;
	var_5_float = var_11_float;
	func_129();
	return 0;
}


event_7(var_0_float, var_1_float, var_2_int)
{
	var_4_bool = var_2_int == (int)0;
	if(var_4_bool != 0) {
		var_5_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		KillTimer((int)0);
	}
	return 0;
}


main(var_0_float, var_1_float)
{
	var_2_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	
Label_3:
	Hold();
	goto Label_3;
}
EMIT "Return(); Pop(0)";


func_224(var_27_int, var_28_string)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0;
	var_32_int = 0;
	
Label_226:
	var_35_int = var_32_int + (int)1;
	var_36_int = var_28_string + var_35_int;
	IsExistingSound(var_33_bool, var_36_int);
	var_37_bool = var_33_bool == 0; //@nz
	if(var_37_bool != 0) {
	} else {
		var_32_int = var_32_int + (int)1;
		goto Label_226;
	}
	var_32_int = var_27_int;
	return 4;
	
}


func_353(var_14_object, var_15_int)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0);
	var_19_int = 0;
	var_15_int = var_19_int;
	func_276(var_19_int);
	var_78_bool = 0;
	var_78_bool = 0;
	var_80_bool = var_15_int != (int)5;
	if(var_80_bool != 0) {
		var_82_bool = var_15_int != (int)6;
		if(var_82_bool != 0) {
			var_78_bool = 1;
		}
	}
	if(var_78_bool != 0) {
		var_83_bool = 0;
		var_83_bool = 0;
		var_84_object = Obj();
		func_167(var_84_object);
		var_87_bool = var_14_object != var_84_object;
		if(var_87_bool != 0) {
			var_90_bool = IsFuncExist(var_14_object, "GetPosition", (int)1);
			if(var_90_bool != 0) {
				var_83_bool = 1;
			}
		}
		if(var_83_bool != 0) {
			GetSpeed(var_18_cvector);
			var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0);
			var_93_cvector = CVector(0,0,0); var_94_object = Obj();
			var_14_object = var_94_object;
			func_160(var_93_cvector, var_94_object);
			var_93_cvector = var_92_cvector;
			func_173(var_91_cvector, var_92_cvector);
			var_105_float = var_91_cvector * (int)400;
			var_18_cvector = var_18_cvector - var_105_float;
			var_106_int = var_18_cvector | var_18_cvector;
			var_108_bool = var_106_int < (int)160000;
			if(var_108_bool != 0) {
				SetSpeed(var_18_cvector);
			}
		}
	}
	return 2;
}


func_160(var_93_cvector, var_94_object)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0);
	GetPosition(var_97_cvector);
	@@var_94_object:GetPosition(var_98_cvector);
	var_93_cvector = var_98_cvector - var_97_cvector;
	return 4;
}


func_33(var_0_object, var_1_int, var_109_float)
{
	var_112_float = 0; var_113_bool = 0; var_114_float = 0; var_115_bool = 0; var_116_float = 0; var_117_float = 0; var_118_float = 0; var_119_float = 0; var_120_float = 0; var_121_float = 0; var_122_bool = 0; var_123_float = 0; var_124_bool = 0; var_125_float = 0; var_126_float = 0; var_127_float = 0; var_128_float = 0; var_129_float = 0;
	var_0_object = 0.0;
	var_109_float = var_121_float;
	var_131_bool = var_121_float < (float)0.20000000298023224;
	if(var_131_bool != 0) {
	}
	var_132_bool = 0;
	func_471(var_132_bool);
	var_138_bool = var_132_bool == 0; //@nz
	if(var_138_bool != 0) {
		var_139_float = 0; var_140_float = 0;
		var_140_float = (float)2.0 * (float)0.20000000298023224;
		func_215(var_139_float, var_140_float);
		var_1_int = var_139_float;
	}
	LockCameraFOV(var_122_bool);
	GetCameraCurrentFOV(var_123_float);
	ModIsDOFEnabled(var_124_bool);
	var_148_bool = var_124_bool;
	if(var_148_bool != 0) {
		ModGetDOFParams(var_125_float, var_126_float, var_127_float, var_128_float);
	} else {
				var_125_float = 0;
				var_126_float = 0;
				var_127_float = 4000.0;
				var_128_float = 4000.0;
				ModSetDOFEnabled((bool)1);
	}
Label_69:
	sync(var_129_float);
	var_149_bool = var_1_int < var_0_object;
	if(var_149_bool != 0) {
		var_151_float = var_129_float * (float)2.0;
		var_153_float = var_151_float / (int)2;
		var_0_object = var_0_object - var_153_float;
		var_155_bool = var_0_object <= (int)0;
		if(var_155_bool != 0) {
			var_156_float = 0; var_157_float = 0; var_158_bool = 0; var_159_float = 0; var_160_float = 0; var_161_float = 0; var_162_float = 0;
			var_123_float = var_157_float;
			var_122_bool = var_158_bool;
			var_125_float = var_159_float;
			var_126_float = var_160_float;
			var_127_float = var_161_float;
			var_128_float = var_162_float;
			func_401((float)0, var_157_float, var_158_bool, var_159_float, var_160_float, var_161_float, var_162_float);
		} else {
	} else {
			var_218_float = var_129_float * (float)2.0;
			var_0_object = var_0_object + var_218_float;
			var_219_bool = var_0_object >= var_1_int;
			if(var_219_bool == 0) goto Label_113;
			var_220_bool = var_0_object == 0; //@nz
			if(var_220_bool != 0) {
				var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0; var_226_float = 0; var_227_float = 0;
				var_123_float = var_222_float;
				var_122_bool = var_223_bool;
				var_125_float = var_224_float;
				var_126_float = var_225_float;
				var_127_float = var_226_float;
				var_128_float = var_227_float;
				func_401((float)0, var_222_float, var_223_bool, var_224_float, var_225_float, var_226_float, var_227_float);
				goto Label_124;
			}
			var_0_object = var_1_int;
			var_1_int = 0;

	}
	Label_113:
		var_210_float = 0; var_211_float = 0; var_212_bool = 0; var_213_float = 0; var_214_float = 0; var_215_float = 0; var_216_float = 0;
		var_210_float = var_0_object;
		var_123_float = var_211_float;
		var_122_bool = var_212_bool;
		var_125_float = var_213_float;
		var_126_float = var_214_float;
		var_127_float = var_215_float;
		var_128_float = var_216_float;
		func_401(var_210_float, var_211_float, var_212_bool, var_213_float, var_214_float, var_215_float, var_216_float);
		goto Label_69;

	}
Label_124:
	var_209_bool = var_122_bool;
	if(var_209_bool != 0) {
		UnlockCameraFOV(var_122_bool);
	}
	return 18;
	
}


func_167(var_84_object)
{
	var_85_object = Obj(); var_86_object = Obj();
	self(var_86_object);
	var_86_object = var_84_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_265(var_49_string)
{
	var_50_bool = GlobalVars[0];
	if(var_50_bool != 0) {
		func_205();
		var_55_string = "";
		var_49_string = var_55_string;
		func_239(var_55_string);
	}
	return 0;
}


func_205()
{
	var_51_bool = GlobalVars[0];
	if(var_51_bool != 0) {
		var_52_bool = GlobalVars[0];
		GlobalVars[0] = (bool)0;
		SetTimer((int)0, (float)3.0);
	}
	return 0;
}


func_173(var_91_cvector, var_92_cvector)
{
	var_99_float = 0; var_100_float = 0;
	var_101_int = var_92_cvector | var_92_cvector;
	var_100_float = sqrt(var_101_int);
	var_102_float = 9.999999974752427e-07;
	var_103_bool = var_100_float < var_102_float;
	if(var_103_bool != 0) {
		var_91_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_91_cvector = var_92_cvector / var_100_float;
	return 2;
}


func_239(var_22_string)
{
	var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0;
	var_27_int = 0; var_28_string = "";
	var_28_string = var_22_string + "_";
	func_224(var_27_int, var_28_string);
	var_27_int = var_25_int;
	var_39_bool = var_25_int == 0; //@nz
	if(var_39_bool != 0) {
		var_41_int = "No sounds for \"" + var_22_string;
		var_43_int = var_41_int + "\"";
		Trace(var_43_int);
	} else {
		irand(var_26_int, var_25_int);
		var_45_int = var_22_string + "_";
		var_47_int = var_26_int + (int)1;
		var_48_int = var_45_int + var_47_int;
		PlaySound(var_48_int);
	}
	return 4;
	
}


func_401(var_156_float, var_157_float, var_158_bool, var_159_float, var_160_float, var_161_float, var_162_float)
{
	var_163_float = 0; var_164_float = 0; var_165_float = 0; var_166_float = 0; var_167_bool = 0; var_168_float = 0; var_169_float = 0; var_170_float = 0; var_171_float = 0; var_172_bool = 0;
	var_174_bool = var_156_float <= (int)0;
	if(var_174_bool != 0) {
		var_175_bool = 0;
		var_175_bool = 0;
		var_177_bool = var_161_float == (float)4000.0;
		if(var_177_bool != 0) {
			var_179_bool = var_162_float == (float)4000.0;
			if(var_179_bool != 0) {
				var_175_bool = 1;
			}
		}
		if(var_175_bool != 0) {
			ModSetDOFEnabled((bool)0);
		}
		ModSetDOFParams(var_159_float, var_160_float, var_161_float, var_162_float);
	} else {
		var_188_int = var_161_float - (float)50.0;
		var_190_float = 0; var_191_float = 0; var_192_float = 0; var_193_float = 0;
		var_191_float = var_156_float * (int)2;
		func_183(var_190_float, var_191_float, (float)0, (float)0.9900000095367432);
		var_195_int = (int)1 - var_190_float;
		var_170_float = var_188_int * var_195_int;
		var_197_int = var_162_float - (float)70.0;
		var_199_float = 0; var_200_float = 0; var_201_float = 0; var_202_float = 0;
		var_200_float = var_156_float * (int)2;
		func_183(var_199_float, var_200_float, (float)0, (float)0.9900000095367432);
		var_204_int = (int)1 - var_199_float;
		var_171_float = var_197_int * var_204_int;
		var_206_bool = var_170_float < (float)50.0;
		if(var_206_bool != 0) {
			var_170_float = 50.0;
		}
		var_208_bool = var_171_float < (float)70.0;
		if(var_208_bool != 0) {
			var_171_float = 70.0;
		}
		ModSetDOFParams(var_159_float, var_160_float, var_170_float, var_171_float);
	}
	ModGetDOFParams(var_168_float, var_169_float, var_170_float, var_171_float);
	ModDarkenLevel(var_156_float);
	ModBlurLevel(var_156_float);
	var_181_bool = var_158_bool;
	if(var_181_bool != 0) {
		var_184_float = var_156_float * (float)0.10000000149011612;
		var_185_int = (int)1 + var_184_float;
		var_186_float = var_157_float * var_185_int;
		SetCameraFOV(var_186_float);
	}
	return 10;
	
}


func_276(var_19_int)
{
	var_21_bool = var_19_int == (int)0;
	if(var_21_bool != 0) {
		var_22_string = "";
		func_239("hit_physical1");
		var_49_string = "";
		func_265("scream_physical1");
	} else {
		var_57_bool = var_19_int == (int)1;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_239("hit_physical2");
			var_59_string = "";
			func_265("scream_physical2");
			goto Label_352;
		}
		var_61_bool = var_19_int == (int)2;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_239("hit_bullet");
			var_63_string = "";
			func_265("scream_bullet");
			goto Label_352;
		}
		var_65_bool = var_19_int == (int)3;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_239("hit_oscoloc");
			var_67_string = "";
			func_265("scream_oscoloc");
			goto Label_352;
		}
		var_69_bool = var_19_int == (int)6;
		if(var_69_bool != 0) {
			var_70_string = "";
			func_239("hit_mental");
			var_71_string = "";
			func_265("scream_mental");
			goto Label_352;
		}
		var_73_bool = var_19_int == (int)7;
		if(var_73_bool != 0) {
			var_74_string = "";
			func_239("hit_rat");
			var_75_string = "";
			func_265("scream_rat");
			goto Label_352;
		}
		var_77_bool = var_19_int == (int)4;
		if(var_77_bool == 0) goto Label_352;
	}
Label_352:
	return 0;
	
}


func_471(var_132_bool)
{
	var_133_bool = 0; var_134_bool = 0;
	HasProperty("blocking", var_134_bool);
	var_136_bool = var_134_bool == 0; //@nz
	if(var_136_bool != 0) {
		var_132_bool = 0;
		return 2;
	}
	GetProperty("blocking", var_134_bool);
	var_134_bool = var_132_bool;
	return 2;
}


func_183(var_111_float, var_112_float, var_113_float, var_114_float)
{
	var_115_bool = var_112_float < var_113_float;
	if(var_115_bool != 0) {
		var_113_float = var_111_float;
		return 0;
	}
	var_116_bool = var_112_float > var_114_float;
	if(var_116_bool != 0) {
		var_114_float = var_111_float;
		return 0;
	}
	var_112_float = var_111_float;
	return 0;
}


func_215(var_109_float, var_110_float)
{
	var_111_float = 0; var_112_float = 0; var_113_float = 0; var_114_float = 0;
	var_112_float = sqrt(var_110_float);
	func_183(var_111_float, var_112_float, (float)0, (float)1);
	var_111_float = var_109_float;
	return 0;
}


