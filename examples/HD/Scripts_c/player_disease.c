// @IMPORTS: Hold/0,Trace/1,GetProperty/2,rand/3,PlaySound/1,LockCameraRoll/1,LockCameraFOV/1,irand/2,GetCameraCurrentFOV/1,sync/1,UnlockCameraFOV/1,UnlockCameraRoll/1,ModDarkenLevel/1,ModBlurLevel/1,Sleep/1,SetCameraRoll/1,GetForce/1,GetDirection/1,SetForce/1,SetCameraFOV/1,Sleep/2,StopGroup0/0,HasProperty/2
// @STRINGS: W:disease|W:Disease effect started|W:Disease effect stopped|W:sick|W:sleeping
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_16: op=0x4 vars=object,string
// @TASK_1: vars= params=0
// @TASK_2: vars=float,int params=2
// @EVENT_16: op=0x15c vars=object,string
// @PE: 0x4,0x143,0x199

task_0_event_16(var_0_object, var_1_string, var_2_float, var_3_int)
{
	var_5_bool = var_3_int == "disease";
	if(var_5_bool != 0) {
		var_6_bool = 0;
		func_420(var_6_bool);
		var_11_bool = var_6_bool == 0; //@nz
		if(var_11_bool != 0) {
			TaskCall(1);
			func_19(var_3_int);
			TaskReturn();
		}
	}
	return 0;
}


task_2_event_16(var_0_float, var_1_int, var_2_object, var_3_string)
{
	var_4_float = 0; var_5_float = 0;
	var_7_bool = var_3_string == "disease";
	if(var_7_bool != 0) {
		var_8_bool = 0;
		func_420(var_8_bool);
		if(var_8_bool != 0) {
			var_1_int = 1;
			StopGroup0();
		}
		GetProperty("disease", var_5_float);
		var_14_float = 0; var_15_float = 0; var_16_float = 0; var_17_float = 0;
		var_5_float = var_15_float;
		func_409(var_14_float, var_15_float, (float)0, (float)1);
		var_14_float = var_5_float;
		var_21_int = var_0_float + (float)0.0010000000474974513;
		var_22_bool = var_5_float > var_21_int;
		if(var_22_bool != 0) {
			StopGroup0();
		} else {
			var_24_int = var_5_float + (float)0.0010000000474974513;
			var_25_bool = var_24_int < var_0_float;
			if(var_25_bool != 0) {
				var_1_int = 2;
				StopGroup0();
				goto Label_385;
			}
			var_0_float = var_5_float;
		}
	}
Label_385:
	return 2;
	
}


main(var_0_float, var_1_int)
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_386(var_18_bool)
{
	var_19_bool = 0; var_20_bool = 0; var_21_bool = 0; var_22_bool = 0;
	HasProperty("sleeping", var_21_bool);
	var_24_bool = var_21_bool == 0; //@nz
	if(var_24_bool != 0) {
		var_18_bool = 0;
		return 4;
	}
	GetProperty("sleeping", var_22_bool);
	var_22_bool = var_18_bool;
	return 4;
}


func_323(var_92_float, var_93_float)
{
	var_96_float = var_92_float * (float)0.75;
	var_97_int = (int)1 - var_96_float;
	var_98_float = var_93_float * var_97_int;
	SetCameraFOV(var_98_float);
	return 0;
}


func_420(var_8_bool)
{
	var_9_float = 0; var_10_float = 0;
	GetProperty("disease", var_10_float);
	var_8_bool = var_10_float <= (float)0.0010000000474974513;
	return 2;
}


func_200(var_35_bool, var_36_float)
{
	var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_float = 0; var_45_float = 0; var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_float = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0;
	var_55_bool = 0;
	func_386(var_55_bool);
	if(var_55_bool != 0) {
		var_35_bool = 0;
		return 18;
	}
	PlaySound("sick");
	LockCameraRoll(var_46_bool);
	LockCameraFOV(var_47_bool);
	irand(var_48_float, (int)2);
	var_60_int = var_48_float - (float)0.5;
	var_48_float = (float)0.6283185482025146 * var_60_int;
	var_62_bool = var_36_float < (float)0.25;
	if(var_62_bool != 0) {
		var_63_float = 0.25;
	} else {
		var_115_float = var_36_float;
	}
	var_48_float = var_48_float * var_63_float;
	GetCameraCurrentFOV(var_49_float);
	var_66_float = (float)0.5 * var_36_float;
	var_50_float = (float)0.5 + var_66_float;
	var_69_float = (float)0.75 * var_36_float;
	var_51_float = (float)0.25 + var_69_float;
	
Label_239:
	sync(var_53_float);
	var_70_float = var_53_float * var_50_float;
	(float)0 = (float)0 + var_70_float;
	var_71_bool = var_46_bool;
	if(var_71_bool != 0) {
		var_72_float = 0; var_73_float = 0;
		var_52_float = var_72_float;
		var_48_float = var_73_float;
		func_303(var_72_float, var_73_float);
	}
	var_91_bool = var_47_bool;
	if(var_91_bool != 0) {
		var_92_float = 0; var_93_float = 0;
		var_52_float = var_92_float;
		var_49_float = var_93_float;
		func_323(var_92_float, var_93_float);
	}
	ModDarkenLevel(var_52_float);
	var_99_bool = var_52_float < var_51_float;
	if(var_99_bool == 1) goto Label_239;
	var_51_float = var_52_float;
	
Label_262:
	sync(var_54_float);
	var_100_float = var_54_float * var_50_float;
	var_102_float = var_100_float / (int)5;
	var_52_float = var_52_float - var_102_float;
	var_103_bool = var_46_bool;
	if(var_103_bool != 0) {
		var_104_float = 0; var_105_float = 0;
		var_52_float = var_104_float;
		var_48_float = var_105_float;
		func_303(var_104_float, var_105_float);
	}
	var_106_bool = var_47_bool;
	if(var_106_bool != 0) {
		var_107_float = 0; var_108_float = 0;
		var_52_float = var_107_float;
		var_49_float = var_108_float;
		func_323(var_107_float, var_108_float);
	}
	ModDarkenLevel(var_52_float);
	var_110_bool = var_52_float > (int)0;
	if(var_110_bool == 1) goto Label_262;
	UnlockCameraFOV(var_47_bool);
	UnlockCameraRoll(var_46_bool);
	var_112_float = var_36_float / (int)2;
	ModBlurLevel(var_112_float);
	Sleep((int)10);
	ModBlurLevel((int)0);
	var_35_bool = 1;
	return 18;
	
}


func_332(var_0_object, var_1_string, var_131_int, var_132_float)
{
	var_135_bool = 0; var_136_bool = 0;
	GetProperty("disease", var_0_object);
	var_138_float = 0; var_139_float = 0; var_140_float = 0; var_141_float = 0;
	var_139_float = var_0_object;
	func_409(var_138_float, var_139_float, (float)0, (float)1);
	var_0_object = var_138_float;
	Sleep(var_132_float, var_136_bool);
	var_131_int = 0;
	return 2;
}


func_303(var_72_float, var_73_float)
{
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0);
	var_77_float = var_72_float * var_73_float;
	SetCameraRoll(var_77_float);
	GetForce(var_78_cvector);
	GetDirection(var_79_cvector);
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_81_cvector = var_79_cvector ^ CVector(0.0, 1.0, 0.0);
	func_399(var_80_cvector, var_81_cvector);
	var_88_float = var_80_cvector * var_77_float;
	var_90_float = var_88_float * (int)1500;
	var_78_cvector = var_78_cvector + var_90_float;
	SetForce(var_78_cvector);
	return 6;
}


func_399(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0;
	var_85_int = var_81_cvector | var_81_cvector;
	var_84_float = sqrt(var_85_int);
	var_86_float = 9.999999974752427e-07;
	var_87_bool = var_84_float < var_86_float;
	if(var_87_bool != 0) {
		var_80_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_80_cvector = var_81_cvector / var_84_float;
	return 2;
}


func_19(var_133_float)
{
	var_12_float = 0; var_13_float = 0; var_14_int = 0; var_15_float = 0; var_16_float = 0; var_17_int = 0;
	var_18_bool = 0;
	func_386(var_18_bool);
	if(var_18_bool != 0) {
		return 6;
	}
	Trace("Disease effect started");
	GetProperty("disease", var_15_float);
	var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_float = 0;
	var_29_float = var_15_float * (int)2;
	func_409(var_28_float, var_29_float, (float)0, (float)1);
	var_28_float = var_15_float;
	var_35_bool = 0; var_36_float = 0;
	var_15_float = var_36_float;
	func_200(var_35_bool, var_36_float);
	if(var_35_bool != 0) {

	Label_44:
		var_116_bool = 0;
		func_420(var_116_bool);
		var_117_bool = var_116_bool == 0; //@nz
		if(var_117_bool != 0) {
			GetProperty("disease", var_15_float);
			var_119_float = 0; var_120_float = 0; var_121_float = 0; var_122_float = 0;
			var_15_float = var_120_float;
			func_409(var_119_float, var_120_float, (float)0, (float)1);
			var_119_float = var_15_float;
			var_125_float = var_15_float * (int)500;
			var_126_int = (int)600 - var_125_float;
			var_129_float = var_15_float * (int)1000;
			var_130_int = (int)1200 - var_129_float;
			rand(var_16_float, var_126_int, var_130_int);
			var_131_int = 0; var_132_float = 0;
			var_16_float = var_132_float;
			TaskCall(2);
			func_332(var_133_float, var_134_int, var_131_int, var_132_float);
			TaskReturn();
			var_133_float = var_17_int;
			GetProperty("disease", var_15_float);
			var_143_float = 0; var_144_float = 0; var_145_float = 0; var_146_float = 0;
			var_15_float = var_144_float;
			func_409(var_143_float, var_144_float, (float)0, (float)1);
			var_143_float = var_15_float;
			var_148_bool = (int)1 == var_17_int;
			if(var_148_bool != 0) {
				var_149_bool = 0; var_150_float = 0;
				func_118(var_149_bool, (float)0.10000000149011612);
				goto Label_114;
			EMIT "GOTO 0x71";
		}
	}
	Label_114:
		Trace("Disease effect stopped");
		return 6;
	}
	var_202_bool = (int)2 == var_17_int;
	if(var_202_bool != 0) {
		var_203_bool = 0; var_204_float = 0;
		var_15_float = var_204_float;
		func_118(var_203_bool, var_204_float);
		var_205_bool = var_203_bool == 0; //@nz
		if(var_205_bool != 0) {
			goto Label_114;
		}
	} else {
		var_206_bool = 0; var_207_float = 0;
		var_15_float = var_207_float;
		func_200(var_206_bool, var_207_float);
		var_208_bool = var_206_bool == 0; //@nz
		if(var_208_bool == 0) goto Label_113;
		goto Label_114;
	}
Label_113:
	goto Label_44;
	
}


func_118(var_149_bool, var_150_float)
{
	var_151_bool = 0; var_152_bool = 0; var_153_float = 0; var_154_float = 0; var_155_float = 0; var_156_float = 0; var_157_float = 0; var_158_float = 0; var_159_float = 0; var_160_bool = 0; var_161_bool = 0; var_162_float = 0; var_163_float = 0; var_164_float = 0; var_165_float = 0; var_166_float = 0; var_167_float = 0; var_168_float = 0;
	var_169_bool = 0;
	func_386(var_169_bool);
	if(var_169_bool != 0) {
		var_149_bool = 0;
		return 18;
	}
	PlaySound("sick");
	LockCameraRoll(var_160_bool);
	LockCameraFOV(var_161_bool);
	irand(var_162_float, (int)2);
	var_174_int = var_162_float - (float)0.5;
	var_162_float = (float)0.6283185482025146 * var_174_int;
	GetCameraCurrentFOV(var_163_float);
	var_177_float = (float)0.5 * var_150_float;
	var_164_float = (float)0.5 + var_177_float;
	var_180_float = (float)0.75 * var_150_float;
	var_165_float = (float)0.25 + var_180_float;
	
Label_150:
	sync(var_167_float);
	var_181_float = var_167_float * var_164_float;
	(float)0 = (float)0 + var_181_float;
	var_182_bool = var_160_bool;
	if(var_182_bool != 0) {
		var_183_float = 0; var_184_float = 0;
		var_166_float = var_183_float;
		var_162_float = var_184_float;
		func_303(var_183_float, var_184_float);
	}
	var_185_bool = var_161_bool;
	if(var_185_bool != 0) {
		var_186_float = 0; var_187_float = 0;
		var_166_float = var_186_float;
		var_163_float = var_187_float;
		func_323(var_186_float, var_187_float);
	}
	var_188_bool = var_166_float < var_165_float;
	if(var_188_bool == 1) goto Label_150;
	var_165_float = var_166_float;
	
Label_171:
	sync(var_168_float);
	var_189_float = var_168_float * var_164_float;
	var_191_float = var_189_float / (int)5;
	var_166_float = var_166_float - var_191_float;
	var_192_bool = var_160_bool;
	if(var_192_bool != 0) {
		var_193_float = 0; var_194_float = 0;
		var_166_float = var_193_float;
		var_162_float = var_194_float;
		func_303(var_193_float, var_194_float);
	}
	var_195_bool = var_161_bool;
	if(var_195_bool != 0) {
		var_196_float = 0; var_197_float = 0;
		var_166_float = var_196_float;
		var_163_float = var_197_float;
		func_323(var_196_float, var_197_float);
	}
	var_199_bool = var_166_float > (int)0;
	if(var_199_bool == 1) goto Label_171;
	UnlockCameraFOV(var_161_bool);
	UnlockCameraRoll(var_160_bool);
	var_149_bool = 1;
	return 18;
}


func_409(var_14_float, var_15_float, var_16_float, var_17_float)
{
	var_18_bool = var_15_float < var_16_float;
	if(var_18_bool != 0) {
		var_16_float = var_14_float;
		return 0;
	}
	var_19_bool = var_15_float > var_17_float;
	if(var_19_bool != 0) {
		var_17_float = var_14_float;
		return 0;
	}
	var_15_float = var_14_float;
	return 0;
}


