// @IMPORTS: Hold/0,Trace/1,GetProperty/2,rand/3,LockCameraRoll/1,LockCameraFOV/1,irand/2,GetCameraCurrentFOV/1,sync/1,ModDarkenLevel/1,UnlockCameraFOV/1,UnlockCameraRoll/1,ModBlurLevel/1,Sleep/1,SetCameraRoll/1,GetForce/1,GetDirection/1,SetForce/1,SetCameraFOV/1,Sleep/2,StopGroup0/0
// @STRINGS: W:disease|W:Disease effect started|W:Disease effect stopped
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_16: op=0x4 vars=object,string
// @TASK_1: vars= params=0
// @TASK_2: vars= params=2
// @EVENT_16: op=0xd8 vars=object,string
// @PE: 0x4,0xca,0xd8,0xed

task_0_event_16(var_0_object, var_1_string)
{
	var_3_bool = var_1_string == "disease";
	if(var_3_bool != 0) {
		var_4_bool = 0;
		func_248(var_4_bool);
		var_9_bool = var_4_bool == 0; //@nz
		if(var_9_bool != 0) {
			TaskCall(1);
			func_19();
			TaskReturn();
		}
	}
	return 0;
}


task_2_event_16(var_0_object, var_1_string)
{
	var_3_bool = var_1_string == "disease";
	if(var_3_bool != 0) {
		var_4_bool = 0;
		func_248(var_4_bool);
		if(var_4_bool != 0) {
			StopGroup0();
		}
	}
	return 0;
}


main()
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_227(var_63_cvector, var_64_cvector)
{
	var_66_float = 0; var_67_float = 0;
	var_68_int = var_64_cvector | var_64_cvector;
	var_67_float = sqrt(var_68_int);
	var_69_float = 9.999999974752427e-07;
	var_70_bool = var_67_float < var_69_float;
	if(var_70_bool != 0) {
		var_63_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_63_cvector = var_64_cvector / var_67_float;
	return 2;
}


func_202(var_75_float, var_76_float)
{
	var_79_float = var_75_float * (float)0.75;
	var_80_int = (int)1 - var_79_float;
	var_81_float = var_76_float * var_80_int;
	SetCameraFOV(var_81_float);
	return 0;
}


func_237(var_16_float, var_17_float, var_18_float, var_19_float)
{
	var_21_bool = var_17_float < var_18_float;
	if(var_21_bool != 0) {
		var_18_float = var_16_float;
		return 0;
	}
	var_22_bool = var_17_float > var_19_float;
	if(var_22_bool != 0) {
		var_19_float = var_16_float;
		return 0;
	}
	var_17_float = var_16_float;
	return 0;
}


func_19()
{
	var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0;
	Trace("Disease effect started");
	GetProperty("disease", var_12_float);
	var_16_float = 0; var_17_float = 0; var_18_float = 0; var_19_float = 0;
	var_17_float = var_12_float * (int)2;
	func_237(var_16_float, var_17_float, (float)0, (float)1);
	var_16_float = var_12_float;
	var_23_bool = 0; var_24_float = 0;
	var_12_float = var_24_float;
	func_95(var_23_bool, var_24_float);
	if(var_23_bool != 0) {

	Label_39:
		var_98_bool = 0;
		func_248(var_98_bool);
		var_99_bool = var_98_bool == 0; //@nz
		if(var_99_bool != 0) {
			GetProperty("disease", var_12_float);
			var_101_float = 0; var_102_float = 0; var_103_float = 0; var_104_float = 0;
			var_12_float = var_102_float;
			func_237(var_101_float, var_102_float, (float)0, (float)1);
			var_101_float = var_12_float;
			var_107_float = var_12_float * (int)15;
			var_108_int = (int)30 - var_107_float;
			var_111_float = var_12_float * (int)80;
			var_112_int = (int)120 - var_111_float;
			rand(var_13_float, var_108_int, var_112_int);
			var_113_bool = 0; var_114_float = 0;
			var_13_float = var_114_float;
			TaskCall(2);
			func_211(var_113_bool, var_114_float);
			TaskReturn();
			var_117_bool = var_113_bool == 0; //@nz
			if(var_117_bool != 0) {
			} else {
				GetProperty("disease", var_12_float);
				var_120_float = 0; var_121_float = 0; var_122_float = 0; var_123_float = 0;
				var_12_float = var_121_float;
				func_237(var_120_float, var_121_float, (float)0, (float)1);
				var_120_float = var_12_float;
				var_124_bool = 0; var_125_float = 0;
				var_12_float = var_125_float;
				func_95(var_124_bool, var_125_float);
				var_126_bool = var_124_bool == 0; //@nz
				if(var_126_bool != 0) {
					goto Label_91;
				}
				goto Label_39;
			}
		}
	}
Label_91:
	Trace("Disease effect stopped");
	return 4;
	
}


func_211(var_113_bool, var_114_float)
{
	var_115_bool = 0; var_116_bool = 0;
	Sleep(var_114_float, var_116_bool);
	var_116_bool = var_113_bool;
	return 2;
}


func_182(var_55_float, var_56_float)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0);
	var_60_float = var_55_float * var_56_float;
	SetCameraRoll(var_60_float);
	GetForce(var_61_cvector);
	GetDirection(var_62_cvector);
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
	var_64_cvector = var_62_cvector ^ CVector(0.0, 1.0, 0.0);
	func_227(var_63_cvector, var_64_cvector);
	var_71_float = var_63_cvector * var_60_float;
	var_73_float = var_71_float * (int)1500;
	var_61_cvector = var_61_cvector + var_73_float;
	SetForce(var_61_cvector);
	return 6;
}


func_248(var_4_bool)
{
	var_5_float = 0; var_6_float = 0;
	GetProperty("disease", var_6_float);
	var_4_bool = var_6_float <= (float)0.009999999776482582;
	return 2;
}


func_95(var_23_bool, var_24_float)
{
	var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_float = 0; var_32_float = 0; var_33_float = 0; var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0; var_42_float = 0;
	LockCameraRoll(var_34_bool);
	LockCameraFOV(var_35_bool);
	irand(var_36_float, (int)2);
	var_46_int = var_36_float - (float)0.5;
	var_36_float = (float)0.6283185482025146 * var_46_int;
	GetCameraCurrentFOV(var_37_float);
	var_49_float = (float)0.5 * var_24_float;
	var_38_float = (float)0.5 + var_49_float;
	var_52_float = (float)0.5 * var_24_float;
	var_39_float = (float)0.5 + var_52_float;
	
Label_118:
	sync(var_41_float);
	var_53_float = var_41_float * var_38_float;
	(float)0 = (float)0 + var_53_float;
	var_54_bool = var_34_bool;
	if(var_54_bool != 0) {
		var_55_float = 0; var_56_float = 0;
		var_40_float = var_55_float;
		var_36_float = var_56_float;
		func_182(var_55_float, var_56_float);
	}
	var_74_bool = var_35_bool;
	if(var_74_bool != 0) {
		var_75_float = 0; var_76_float = 0;
		var_40_float = var_75_float;
		var_37_float = var_76_float;
		func_202(var_75_float, var_76_float);
	}
	ModDarkenLevel(var_40_float);
	var_82_bool = var_40_float < var_39_float;
	if(var_82_bool == 1) goto Label_118;
	var_39_float = var_40_float;
	
Label_141:
	sync(var_42_float);
	var_83_float = var_42_float * var_38_float;
	var_85_float = var_83_float / (int)5;
	var_40_float = var_40_float - var_85_float;
	var_86_bool = var_34_bool;
	if(var_86_bool != 0) {
		var_87_float = 0; var_88_float = 0;
		var_40_float = var_87_float;
		var_36_float = var_88_float;
		func_182(var_87_float, var_88_float);
	}
	var_89_bool = var_35_bool;
	if(var_89_bool != 0) {
		var_90_float = 0; var_91_float = 0;
		var_40_float = var_90_float;
		var_37_float = var_91_float;
		func_202(var_90_float, var_91_float);
	}
	ModDarkenLevel(var_40_float);
	var_93_bool = var_40_float > (int)0;
	if(var_93_bool == 1) goto Label_141;
	UnlockCameraFOV(var_35_bool);
	UnlockCameraRoll(var_34_bool);
	var_95_float = var_24_float / (int)2;
	ModBlurLevel(var_95_float);
	Sleep((int)10);
	ModBlurLevel((int)0);
	var_23_bool = 1;
	return 18;
}


