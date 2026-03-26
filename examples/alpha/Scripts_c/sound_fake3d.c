// @IMPORTS: Hold/0,StopGroup0/0,irand/2,WaitForSoundToLoad/1,PlaySound/3,rand/3,Sleep/1,GetPosition/1,GetScene/1,FindActor/2,IsLoaded/1,GetGameTime/1,GetVariable/2
// @STRINGS: A:GetPosition|A:GetRegionByPt|W:player|W:Region|W:State|W:sound0|W:sound
// @GLOBALS: 0:float:reference_distance,1:float:sound_distance,2:float:min_repeat_delay,3:float:max_repeat_delay,4:int:num_sounds,5:int:night,6:int:day,7:int:evening,8:int:morning,9:int:play_in_dregion,10:int:play_in_region
// @RUN_OP: 0x6
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars=int params=0
// @EVENT_6: op=0x51 vars=
// @TASK_2: vars= params=1
// @EVENT_6: op=0xcc vars=
// @PE: 0xfe,0x124

task_0_event_5(var_0_int)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_int)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	TaskCall(2);
	func_92((float)0);
	TaskReturn();
	return 0;
}


task_2_event_6(var_0_int)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


main(var_0_int)
{
	var_1_float = 0; var_2_float = 0; var_3_int = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_int = 0; var_8_float = 0;
	var_9_int = GlobalVars[4];
	var_11_bool = var_9_int <= (int)0;
	if(var_11_bool != 0) {
		return 8;
	}
	var_12_bool = 0;
	func_241(var_12_bool);
	var_15_bool = var_12_bool == 0; //@nz
	if(var_15_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	
Label_23:
	TaskCall(2);
	func_92((float)0);
	TaskReturn();
	var_16_float = var_5_float;
	var_132_float = GlobalVars[0];
	var_134_bool = var_132_float == (int)0;
	if(var_134_bool != 0) {
		var_6_float = 1.0;
	} else {
		var_164_float = var_5_float * var_5_float;
		var_165_float = GlobalVars[0];
		var_166_float = var_164_float / var_165_float;
		var_167_float = GlobalVars[0];
		var_168_float = var_166_float / var_167_float;
		var_169_int = (int)1 + var_168_float;
		var_6_float = (float)1.0 / var_169_int;
	}
	var_7_int = 0;
	var_135_int = GlobalVars[4];
	var_137_bool = var_135_int > (int)1;
	if(var_137_bool != 0) {
		var_138_int = GlobalVars[4];
		var_140_int = var_138_int - (int)1;
		irand(var_7_int, var_140_int);
		var_141_int = (int)0 + var_7_int;
		var_143_int = var_141_int + (int)1;
		var_144_int = GlobalVars[4];
		var_7_int = var_143_int % var_144_int;
		var_0_int = var_7_int;
	}
	var_145_string = ""; var_146_int = 0;
	var_7_int = var_146_int;
	func_292(var_145_string, var_146_int);
	WaitForSoundToLoad(var_145_string);
	var_157_string = ""; var_158_int = 0;
	var_7_int = var_158_int;
	func_292(var_157_string, var_158_int);
	PlaySound(var_157_string, (bool)0, var_6_float);
	var_160_float = GlobalVars[2];
	var_161_float = GlobalVars[3];
	rand(var_8_float, var_160_float, var_161_float);
	Sleep(var_8_float);
	goto Label_23;
	
}
EMIT "Return(); Pop(8)";


func_0()
{
	Hold();
	return 0;
}


func_292(var_145_string, var_146_int)
{
	var_148_int = var_146_int + (int)1;
	var_150_bool = var_148_int < (int)10;
	if(var_150_bool != 0) {
		var_153_int = var_146_int + (int)1;
		var_145_string = "sound0" + var_153_int;
		return 0;
	}
	var_156_int = var_146_int + (int)1;
	var_145_string = "sound" + var_156_int;
	return 0;
}


func_260(var_37_bool, var_38_int)
{
	var_39_int = 0; var_40_int = 0;
	var_41_string = ""; var_42_int = 0;
	var_38_int = var_42_int;
	func_254(var_41_string, var_42_int);
	GetVariable(var_41_string, var_40_int);
	var_47_int = var_40_int & (int)3;
	var_49_bool = var_47_int == (int)0;
	if(var_49_bool != 0) {
		var_37_bool = 1;
		return 2;
	}
	var_37_bool = 0;
	return 2;
}


func_327(var_99_bool)
{
	var_100_int = 0; var_101_int = 0;
	func_246((int)0);
	var_102_int = var_101_int;
	var_103_bool = 0;
	var_103_bool = 0;
	var_105_bool = var_101_int > (int)9;
	if(var_105_bool != 0) {
		var_107_bool = var_101_int < (int)20;
		if(var_107_bool != 0) {
			var_103_bool = 1;
		}
	}
	if(var_103_bool != 0) {
		var_99_bool = 1;
		return 2;
	}
	var_99_bool = 0;
	return 2;
}


func_234(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj();
	FindActor(var_25_object, "player");
	var_25_object = var_23_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_365(var_84_bool)
{
	var_85_int = 0; var_86_int = 0;
	func_246((int)0);
	var_87_int = var_86_int;
	var_92_bool = 0;
	var_92_bool = 1;
	var_94_bool = var_86_int >= (int)0;
	if(var_94_bool != 1) {
		var_96_bool = var_86_int < (int)7;
		if(var_96_bool != 1) {
			var_92_bool = 0;
		}
	}
	if(var_92_bool != 0) {
		var_84_bool = 1;
		return 2;
	}
	var_84_bool = 0;
	return 2;
}


func_241(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
	return 2;
}


func_210(var_34_cvector)
{
	var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0);
	GetPosition(var_36_cvector);
	var_36_cvector = var_34_cvector;
	return 2;
}


func_276(var_54_bool, var_55_int)
{
	var_56_int = 0; var_57_int = 0;
	var_58_string = ""; var_59_int = 0;
	var_55_int = var_59_int;
	func_254(var_58_string, var_59_int);
	GetVariable(var_58_string, var_57_int);
	var_61_int = var_57_int & (int)3;
	var_63_bool = var_61_int == (int)1;
	if(var_63_bool != 0) {
		var_54_bool = 1;
		return 2;
	}
	var_54_bool = 0;
	return 2;
}


func_308(var_121_bool)
{
	var_122_int = 0; var_123_int = 0;
	func_246((int)0);
	var_124_int = var_123_int;
	var_125_bool = 0;
	var_125_bool = 0;
	var_127_bool = var_123_int >= (int)7;
	if(var_127_bool != 0) {
		var_129_bool = var_123_int < (int)10;
		if(var_129_bool != 0) {
			var_125_bool = 1;
		}
	}
	if(var_125_bool != 0) {
		var_121_bool = 1;
		return 2;
	}
	var_121_bool = 0;
	return 2;
}


func_246(var_87_int)
{
	var_88_float = 0; var_89_float = 0;
	GetGameTime(var_89_float);
	var_90_int = 0;
	var_89_float = var_90_int;
	var_87_int = var_90_int % (int)24;
	return 2;
}


func_215(var_68_float, var_69_object)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0);
	GetPosition(var_73_cvector);
	@@var_69_object:GetPosition(var_74_cvector);
	var_75_cvector = var_74_cvector - var_73_cvector;
	var_68_float = var_75_cvector | var_75_cvector;
	return 6;
}


func_346(var_110_bool)
{
	var_111_int = 0; var_112_int = 0;
	func_246((int)0);
	var_113_int = var_112_int;
	var_114_bool = 0;
	var_114_bool = 0;
	var_116_bool = var_112_int >= (int)20;
	if(var_116_bool != 0) {
		var_118_bool = var_112_int <= (int)23;
		if(var_118_bool != 0) {
			var_114_bool = 1;
		}
	}
	if(var_114_bool != 0) {
		var_110_bool = 1;
		return 2;
	}
	var_110_bool = 0;
	return 2;
}


func_92(var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_object = Obj(); var_21_int = 0; var_22_float = 0;
	
Label_93:
	func_234(Obj());
	var_23_object = var_20_object;
	var_27_bool = var_20_object == 0; //@ne
	if(var_27_bool != 0) {
		Sleep((int)10);
	} else {
		func_223((int)0);
		var_29_int = var_21_int;
		var_37_bool = 0; var_38_int = 0;
		var_21_int = var_38_int;
		func_260(var_37_bool, var_38_int);
		if(var_37_bool != 0) {
			var_50_int = GlobalVars[10];
			var_52_bool = var_50_int == (int)0;
			if(var_52_bool != 0) {
				Sleep((int)10);
				goto Label_201;
			}
		}
		var_54_bool = 0; var_55_int = 0;
		var_21_int = var_55_int;
		func_276(var_54_bool, var_55_int);
		if(var_54_bool != 0) {
			var_64_int = GlobalVars[9];
			var_66_bool = var_64_int == (int)0;
			if(var_66_bool != 0) {
				Sleep((int)10);
				goto Label_201;
			}
		}
		var_68_float = 0; var_69_object = Obj();
		var_20_object = var_69_object;
		func_215(var_68_float, var_69_object);
		var_68_float = var_22_float;
		var_76_float = GlobalVars[1];
		var_77_float = GlobalVars[1];
		var_78_float = var_76_float * var_77_float;
		var_79_bool = var_22_float < var_78_float;
		if(var_79_bool != 0) {
			var_80_bool = 0;
			var_80_bool = 1;
			var_81_bool = 0;
			var_81_bool = 1;
			var_82_bool = 0;
			var_82_bool = 1;
			var_83_bool = 0;
			var_83_bool = 0;
			var_84_bool = 0;
			func_365(var_84_bool);
			if(var_84_bool != 0) {
				var_97_int = GlobalVars[5];
				if(var_97_int != 0) {
					var_83_bool = 1;
				}
			}
			if(var_83_bool != 1) {
				var_98_bool = 0;
				var_98_bool = 0;
				var_99_bool = 0;
				func_327(var_99_bool);
				if(var_99_bool != 0) {
					var_108_int = GlobalVars[6];
					if(var_108_int != 0) {
						var_98_bool = 1;
					}
				}
				if(var_98_bool != 1) {
					var_82_bool = 0;
				}
			}
			if(var_82_bool != 1) {
				var_109_bool = 0;
				var_109_bool = 0;
				var_110_bool = 0;
				func_346(var_110_bool);
				if(var_110_bool != 0) {
					var_119_int = GlobalVars[7];
					if(var_119_int != 0) {
						var_109_bool = 1;
					}
				}
				if(var_109_bool != 1) {
					var_81_bool = 0;
				}
			}
			if(var_81_bool != 1) {
				var_120_bool = 0;
				var_120_bool = 0;
				var_121_bool = 0;
				func_308(var_121_bool);
				if(var_121_bool != 0) {
					var_130_int = GlobalVars[8];
					if(var_130_int != 0) {
						var_120_bool = 1;
					}
				}
				if(var_120_bool != 1) {
					var_80_bool = 0;
				}
			}
			if(var_80_bool != 0) {
				var_16_float = sqrt(var_22_float);
				return 6;
			}
		}
		Sleep((int)1);
		var_20_object = 0;
	}
Label_201:
	goto Label_93;
	
}
EMIT "Stack[-7] = (int) 0";
EMIT "Return(); Pop(6)";


func_254(var_41_string, var_42_int)
{
	var_44_int = "Region" + var_42_int;
	var_41_string = var_44_int + "State";
	return 0;
}


func_223(var_29_int)
{
	var_30_object = Obj(); var_31_int = 0; var_32_object = Obj(); var_33_int = 0;
	GetScene(var_32_object);
	var_34_cvector = CVector(0,0,0);
	func_210(var_34_cvector);
	@@var_32_object:GetRegionByPt(var_33_int, var_34_cvector);
	var_33_int = var_29_int;
	return 4;
}
EMIT "Stack[-2] = 0";


