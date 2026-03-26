// @IMPORTS: Hold/0,LockCameraFOV/1,GetCameraCurrentFOV/1,sync/1,UnlockCameraFOV/1,GetPosition/1,self/1,KillTimer/1,SetTimer/2,IsExistingSound/2,Trace/1,irand/2,PlaySound/1,GetSpeed/1,SetSpeed/1,ModDarkenLevel/1,ModBlurLevel/1,SetCameraFOV/1
// @STRINGS: A:GetPosition|W:_|W:No sounds for "|W:hit_physical1|W:scream_physical1|W:hit_physical2|W:scream_physical2|W:hit_bullet|W:scream_bullet|W:hit_oscoloc|W:scream_oscoloc|W:hit_mental|W:scream_mental|W:GetPosition
// @GLOBALS: 0:bool:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_22: op=0x7 vars=object,int,float,float
// @TASK_1: vars=float,float params=1
// @EVENT_22: op=0x59 vars=object,int,float,float
// @STANDALONE_EVENT_7: op=0x91 vars=int
// @PE: 0x7,0x86,0x91,0xa6,0xd8,0xe3,0x154

task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_float, var_5_float)
{
	var_7_bool = var_3_float != (int)5;
	if(var_7_bool != 0) {
		var_8_object = Obj(); var_9_int = 0; var_10_float = 0;
		var_2_float = var_8_object;
		var_3_float = var_9_int;
		var_4_float = var_10_float;
		func_292(var_9_int, var_10_float);
		var_99_float = 0;
		var_4_float = var_99_float;
		TaskCall(1);
		func_24(var_100_float, var_101_float, var_99_float);
		TaskReturn();
	}
	return 0;
}


task_1_event_22(var_0_float, var_1_float, var_2_object, var_3_int, var_4_float, var_5_float)
{
	var_6_float = 0; var_7_float = 0;
	var_8_object = Obj(); var_9_int = 0; var_10_float = 0;
	var_2_object = var_8_object;
	var_3_int = var_9_int;
	var_4_float = var_10_float;
	func_292(var_9_int, var_10_float);
	var_99_float = 0; var_100_float = 0;
	var_4_float = var_100_float;
	func_166(var_99_float, var_100_float);
	var_99_float = var_7_float;
	var_107_bool = var_1_float < var_0_float;
	if(var_107_bool != 0) {
		var_108_bool = var_7_float > var_0_float;
		if(var_108_bool != 0) {
			var_1_float = var_7_float;
		}
	} else {
		var_109_bool = var_7_float > var_1_float;
		if(var_109_bool == 0) goto Label_110;
		var_1_float = var_7_float;
	}
Label_110:
	return 2;
	
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


func_227(var_13_int)
{
	var_15_bool = var_13_int == (int)0;
	if(var_15_bool != 0) {
		var_16_string = "";
		func_190("hit_physical1");
		var_43_string = "";
		func_216("scream_physical1");
	} else {
		var_51_bool = var_13_int == (int)1;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_190("hit_physical2");
			var_53_string = "";
			func_216("scream_physical2");
			goto Label_291;
		}
		var_55_bool = var_13_int == (int)2;
		if(var_55_bool != 0) {
			var_56_string = "";
			func_190("hit_bullet");
			var_57_string = "";
			func_216("scream_bullet");
			goto Label_291;
		}
		var_59_bool = var_13_int == (int)3;
		if(var_59_bool != 0) {
			var_60_string = "";
			func_190("hit_oscoloc");
			var_61_string = "";
			func_216("scream_oscoloc");
			goto Label_291;
		}
		var_63_bool = var_13_int == (int)6;
		if(var_63_bool != 0) {
			var_64_string = "";
			func_190("hit_mental");
			var_65_string = "";
			func_216("scream_mental");
			goto Label_291;
		}
		var_67_bool = var_13_int == (int)4;
		if(var_67_bool == 0) goto Label_291;
	}
Label_291:
	return 0;
	
}


func_292(var_8_object, var_9_int)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0);
	var_13_int = 0;
	var_9_int = var_13_int;
	func_227(var_13_int);
	var_68_bool = 0;
	var_68_bool = 0;
	var_70_bool = var_9_int != (int)5;
	if(var_70_bool != 0) {
		var_72_bool = var_9_int != (int)6;
		if(var_72_bool != 0) {
			var_68_bool = 1;
		}
	}
	if(var_68_bool != 0) {
		var_73_bool = 0;
		var_73_bool = 0;
		var_74_object = Obj();
		func_118(var_74_object);
		var_77_bool = var_8_object != var_74_object;
		if(var_77_bool != 0) {
			var_80_bool = IsFuncExist(var_8_object, "GetPosition", (int)1);
			if(var_80_bool != 0) {
				var_73_bool = 1;
			}
		}
		if(var_73_bool != 0) {
			GetSpeed(var_12_cvector);
			var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0);
			var_83_cvector = CVector(0,0,0); var_84_object = Obj();
			var_8_object = var_84_object;
			func_111(var_83_cvector, var_84_object);
			var_83_cvector = var_82_cvector;
			func_124(var_81_cvector, var_82_cvector);
			var_95_float = var_81_cvector * (int)400;
			var_12_cvector = var_12_cvector - var_95_float;
			var_96_int = var_12_cvector | var_12_cvector;
			var_98_bool = var_96_int < (int)160000;
			if(var_98_bool != 0) {
				SetSpeed(var_12_cvector);
			}
		}
	}
	return 2;
}


func_134(var_101_float, var_102_float, var_103_float, var_104_float)
{
	var_105_bool = var_102_float < var_103_float;
	if(var_105_bool != 0) {
		var_103_float = var_101_float;
		return 0;
	}
	var_106_bool = var_102_float > var_104_float;
	if(var_106_bool != 0) {
		var_104_float = var_101_float;
		return 0;
	}
	var_102_float = var_101_float;
	return 0;
}


func_166(var_99_float, var_100_float)
{
	var_101_float = 0; var_102_float = 0; var_103_float = 0; var_104_float = 0;
	var_102_float = sqrt(var_100_float);
	func_134(var_101_float, var_102_float, (float)0, (float)1);
	var_101_float = var_99_float;
	return 0;
}


func_175(var_21_int, var_22_string)
{
	var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_bool = 0;
	var_26_int = 0;
	
Label_177:
	var_29_int = var_26_int + (int)1;
	var_30_int = var_22_string + var_29_int;
	IsExistingSound(var_27_bool, var_30_int);
	var_31_bool = var_27_bool == 0; //@nz
	if(var_31_bool != 0) {
	} else {
		var_26_int = var_26_int + (int)1;
		goto Label_177;
	}
	var_26_int = var_21_int;
	return 4;
	
}


func_111(var_83_cvector, var_84_object)
{
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0);
	GetPosition(var_87_cvector);
	@@var_84_object:GetPosition(var_88_cvector);
	var_83_cvector = var_88_cvector - var_87_cvector;
	return 4;
}


func_124(var_81_cvector, var_82_cvector)
{
	var_89_float = 0; var_90_float = 0;
	var_91_int = var_82_cvector | var_82_cvector;
	var_90_float = sqrt(var_91_int);
	var_92_float = 9.999999974752427e-07;
	var_93_bool = var_90_float < var_92_float;
	if(var_93_bool != 0) {
		var_81_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_81_cvector = var_82_cvector / var_90_float;
	return 2;
}


func_340(var_128_float, var_129_float, var_130_bool)
{
	ModDarkenLevel(var_128_float);
	ModBlurLevel(var_128_float);
	var_131_bool = var_130_bool;
	if(var_131_bool != 0) {
		var_134_float = var_128_float * (float)0.10000000149011612;
		var_135_int = (int)1 + var_134_float;
		var_136_float = var_129_float * var_135_int;
		SetCameraFOV(var_136_float);
	}
	return 0;
}


func_118(var_74_object)
{
	var_75_object = Obj(); var_76_object = Obj();
	self(var_76_object);
	var_76_object = var_74_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_24(var_0_object, var_1_int, var_99_float)
{
	var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_float = 0; var_107_bool = 0; var_108_float = 0; var_109_float = 0;
	var_0_object = 0.0;
	var_99_float = var_106_float;
	var_111_bool = var_106_float < (float)0.20000000298023224;
	if(var_111_bool != 0) {
		var_106_float = 0.20000000298023224;
	}
	var_112_float = 0; var_113_float = 0;
	var_113_float = (float)2.0 * var_106_float;
	func_166(var_112_float, var_113_float);
	var_1_int = var_112_float;
	LockCameraFOV(var_107_bool);
	GetCameraCurrentFOV(var_108_float);
	
Label_41:
	sync(var_109_float);
	var_121_bool = var_1_int < var_0_object;
	if(var_121_bool != 0) {
		var_123_float = var_109_float * (float)2.0;
		var_125_float = var_123_float / (int)2;
		var_0_object = var_0_object - var_125_float;
		var_127_bool = var_0_object <= (int)0;
		if(var_127_bool != 0) {
			var_128_float = 0; var_129_float = 0; var_130_bool = 0;
			var_108_float = var_129_float;
			var_107_bool = var_130_bool;
			func_340((float)0, var_129_float, var_130_bool);
		} else {
	} else {
			var_142_float = var_109_float * (float)2.0;
			var_0_object = var_0_object + var_142_float;
			var_143_bool = var_0_object >= var_1_int;
			if(var_143_bool == 0) goto Label_77;
			var_144_bool = var_0_object == 0; //@nz
			if(var_144_bool != 0) {
				var_145_float = 0; var_146_float = 0; var_147_bool = 0;
				var_108_float = var_146_float;
				var_107_bool = var_147_bool;
				func_340((float)0, var_146_float, var_147_bool);
				goto Label_84;
			}
			var_0_object = var_1_int;
			var_1_int = 0;
	}
	Label_77:
		var_138_float = 0; var_139_float = 0; var_140_bool = 0;
		var_138_float = var_0_object;
		var_108_float = var_139_float;
		var_107_bool = var_140_bool;
		func_340(var_138_float, var_139_float, var_140_bool);
		goto Label_41;

	}
Label_84:
	var_137_bool = var_107_bool;
	if(var_137_bool != 0) {
		UnlockCameraFOV(var_107_bool);
	}
	return 8;
	
}


func_156()
{
	var_45_bool = GlobalVars[0];
	if(var_45_bool != 0) {
		var_46_bool = GlobalVars[0];
		GlobalVars[0] = (bool)0;
		SetTimer((int)0, (float)3.0);
	}
	return 0;
}


func_190(var_16_string)
{
	var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_string = "";
	var_22_string = var_16_string + "_";
	func_175(var_21_int, var_22_string);
	var_21_int = var_19_int;
	var_33_bool = var_19_int == 0; //@nz
	if(var_33_bool != 0) {
		var_35_int = "No sounds for \"" + var_16_string;
		var_37_int = var_35_int + "\"";
		Trace(var_37_int);
	} else {
		irand(var_20_int, var_19_int);
		var_39_int = var_16_string + "_";
		var_41_int = var_20_int + (int)1;
		var_42_int = var_39_int + var_41_int;
		PlaySound(var_42_int);
	}
	return 4;
	
}


func_216(var_43_string)
{
	var_44_bool = GlobalVars[0];
	if(var_44_bool != 0) {
		func_156();
		var_49_string = "";
		var_43_string = var_49_string;
		func_190(var_49_string);
	}
	return 0;
}


