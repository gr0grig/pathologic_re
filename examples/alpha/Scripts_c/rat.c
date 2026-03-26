// @IMPORTS: HasProperty/2,GetProperty/2,rand/2,Sleep/1,GetPosition/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,Stop/0,StopGroup0/0,Speak/1,Hold/0,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,StopSecondaryAnimation/0,PlayAnimation/2,WaitForAnimEnd/0,LockAnimationEnd/2,RemoveEnvelope/0,GetAttackDistance/1,Face/1,irand/2,SetAttackState/1,WaitForAnimEnd/1,GetVictim/2,ReportAttack/1,ReportHit/4,StopAnimation/0,SetTimer/2,KillTimer/1,FindPathTo/2,FollowPath/5,Sleep/2,GetDirection/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,GetScene/1,IsPlayerActor/2,ResetAAS/0,SignalDeath/1
// @STRINGS: W:health|W:death|W:die|W:all|A:GetPosition|W:attack|W:attack_begin|W:attack_end|W:run|A:GetPFPosition|W:walk|W:retreat|W:Can't retreat, distance: |W:fire|W:phys|W:HasProperty|A:HasProperty|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess
// @GLOBALS: 0:float:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool params=0
// @EVENT_1: op=0x11 vars=object
// @EVENT_16: op=0x1f vars=object,string
// @EVENT_17: op=0x2f vars=object
// @EVENT_10: op=0x78 vars=object
// @EVENT_28: op=0x7c vars=
// @EVENT_41: op=0x86 vars=object
// @TASK_1: vars= params=0
// @TASK_2: vars= params=0
// @EVENT_22: op=0xb9 vars=object,int,float,float
// @EVENT_16: op=0xbb vars=object,string
// @EVENT_41: op=0xbd vars=object
// @TASK_3: vars=object params=1
// @EVENT_16: op=0x123 vars=object,string
// @EVENT_41: op=0x13a vars=object
// @TASK_4: vars=bool,object params=3
// @EVENT_16: op=0x164 vars=object,string
// @EVENT_41: op=0x17b vars=object
// @EVENT_7: op=0x184 vars=int
// @EVENT_10: op=0x1f5 vars=object
// @TASK_5: vars=object,cvector,bool,object params=1
// @EVENT_7: op=0x21c vars=int
// @EVENT_16: op=0x23f vars=object,string
// @EVENT_41: op=0x256 vars=object
// @STANDALONE_EVENT_41: op=0x43a vars=object
// @PE: 0x11,0x1f,0x2f,0x78,0x86,0x9a,0xa3,0xb9,0xbb,0xbd,0x123,0x13a,0x164,0x17b,0x184,0x1f5,0x200,0x20b,0x23f,0x256,0x308,0x3b7,0x3be,0x3c9,0x3de,0x3e5,0x3ef,0x3f9,0x43a

task_0_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj();
	var_9_object = var_11_object;
	func_990(var_10_bool, var_11_object);
	if(var_10_bool != 0) {
		func_127(var_8_bool, var_9_object);
		var_51_object = Obj();
		var_9_object = var_51_object;
		func_997(var_51_object);
	}
	return 0;
}


task_0_event_16(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_string = "";
	var_9_bool = var_12_object;
	var_10_object = var_13_string;
	func_1024(var_11_bool, var_12_object, var_13_string);
	if(var_11_bool != 0) {
		func_127(var_9_bool, var_10_object);
	}
	var_59_object = Obj(); var_60_string = "";
	var_9_bool = var_59_object;
	var_10_object = var_60_string;
	func_1051(var_59_object, var_60_string);
	return 0;
}


task_0_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj();
	var_9_object = var_11_object;
	func_913(var_10_bool, var_11_object);
	var_44_bool = var_10_bool == 0; //@nz
	if(var_44_bool != 0) {
		return 0;
	}
	func_127(var_8_bool, var_9_object);
	var_45_object = Obj();
	var_9_object = var_45_object;
	func_1007(var_45_object);
	return 0;
}


task_0_event_10(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object);
	return 0;
}


task_0_event_28(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	Stop();
	return 0;
}


task_0_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	func_127(var_8_bool, var_9_object);
	var_9_object = Obj();
	func_1082();
	return 0;
}


task_2_event_22(var_0_bool, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object)
{
	return 0;
}


task_2_event_16(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	return 0;
}


task_2_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	return 0;
}


task_3_event_16(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_string = "";
	var_9_bool = var_12_object;
	var_10_object = var_13_string;
	func_1024(var_11_bool, var_12_object, var_13_string);
	if(var_11_bool != 0) {
		func_307();
	}
	var_59_object = Obj(); var_60_string = "";
	var_9_bool = var_59_object;
	var_10_object = var_60_string;
	func_1051(var_59_object, var_60_string);
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	func_307();
	var_9_object = Obj();
	func_1082();
	return 0;
}


task_4_event_16(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_string = "";
	var_9_bool = var_12_object;
	var_10_object = var_13_string;
	func_1024(var_11_bool, var_12_object, var_13_string);
	if(var_11_bool != 0) {
		func_372();
	}
	var_61_object = Obj(); var_62_string = "";
	var_9_bool = var_61_object;
	var_10_object = var_62_string;
	func_1051(var_61_object, var_62_string);
	return 0;
}


task_4_event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	func_372();
	var_9_object = Obj();
	func_1082();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	var_11_bool = var_9_object == (int)111;
	if(var_11_bool != 0) {
		Speak("run");
		func_342();
	}
	return 0;
}


task_4_event_10(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object);
	return 0;
}


task_5_event_7(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int)
{
	var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0);
	var_15_bool = var_9_int == (int)110;
	if(var_15_bool != 0) {
		var_16_bool = 0; var_17_object = Obj();
		var_17_object = var_3_bool;
		func_913(var_16_bool, var_17_object);
		var_50_bool = var_16_bool == 0; //@nz
		if(var_50_bool != 0) {
			func_591();
		} else {
			GetPosition(var_12_cvector);
			@@@var_3_bool:GetPosition(var_13_cvector);
			var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
			var_12_cvector = var_54_cvector;
			var_13_cvector = var_55_cvector;
			func_947(var_53_float, var_54_cvector, var_55_cvector);
			var_59_bool = var_53_float >= (float)2250000.0;
			if(var_59_bool == 0) goto Label_569;
			func_591();
	}
		var_60_int = 0;
		var_9_int = var_60_int;
		func_701(var_11_cvector, var_12_cvector, var_13_cvector, var_60_int);
	}
Label_569:
	goto Label_574;
	
Label_574:
	return 4;
	
}


task_5_event_16(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_string)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_string = "";
	var_9_object = var_12_object;
	var_10_string = var_13_string;
	func_1024(var_11_bool, var_12_object, var_13_string);
	if(var_11_bool != 0) {
		func_591();
	}
	var_61_object = Obj(); var_62_string = "";
	var_9_object = var_61_object;
	var_10_string = var_62_string;
	func_1051(var_61_object, var_62_string);
	return 0;
}


task_5_event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object)
{
	func_591();
	var_9_object = Obj();
	func_1082();
	return 0;
}


event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object)
{
	var_9_object = Obj();
	func_1017();
	return 0;
}


main(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_float = 0; var_11_bool = 0; var_12_float = 0;
	HasProperty("health", var_11_bool);
	var_14_bool = var_11_bool;
	if(var_14_bool != 0) {
		GetProperty("health", var_12_float);
		var_16_float = GlobalVars[0];
		var_12_float = var_16_float;
		GlobalVars[0] = var_16_float;
	}
Label_12:
	func_63(var_11_bool, var_12_float);
	goto Label_12;
}
EMIT "Return(); Pop(4)";


func_1024(var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_19_bool = var_13_string == "health";
	if(var_19_bool != 0) {
		GetProperty("health", var_16_float);
		var_21_float = GlobalVars[0];
		var_17_bool = var_16_float < var_21_float;
		var_22_float = GlobalVars[0];
		var_16_float = var_22_float;
		GlobalVars[0] = var_22_float;
		var_23_bool = 0;
		var_23_bool = 0;
		var_24_bool = var_17_bool;
		if(var_24_bool != 0) {
			var_25_bool = 0; var_26_object = Obj();
			var_12_object = var_26_object;
			func_913(var_25_bool, var_26_object);
			if(var_25_bool != 0) {
				var_23_bool = 1;
			}
		}
		if(var_23_bool != 0) {
			var_11_bool = 1;
			return 4;
		}
	}
	var_11_bool = 0;
	return 4;
}


func_512(var_183_bool, var_184_object)
{
	var_185_bool = 0; var_186_object = Obj();
	var_184_object = var_186_object;
	func_913(var_185_bool, var_186_object);
	var_185_bool = var_183_bool;
	return 0;
}


func_637(var_0_bool, var_1_bool, var_2_object, var_83_object)
{
	var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_bool = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0;
	var_0_bool = var_83_object;
	var_94_cvector = CVector(0,0,0); var_95_float = 0;
	func_607(var_93_float, var_94_cvector, (float)1.7453293800354004);
	var_94_cvector = var_89_cvector;
	var_90_float = var_89_cvector | var_89_cvector;
	var_125_bool = var_90_float < (float)10000.0;
	if(var_125_bool != 0) {
		var_127_float = sqrt(var_90_float);
		var_128_int = "Can't retreat, distance: " + var_127_float;
		Trace(var_128_int);
		Sleep((float)0.5);
		return 10;
	}
	var_130_float = GetByIndex(var_89_cvector, 0);
	var_131_float = GetByIndex(var_89_cvector, 2);
	Rotate(var_130_float, var_131_float);
	var_132_cvector = CVector(0,0,0);
	func_784(var_132_cvector);
	var_1_bool = var_132_cvector + var_89_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_670:
	MovePoint(var_1_bool, (int)1, var_91_bool);
	var_138_bool = var_91_bool;
	if(var_138_bool != 0) {
		var_139_bool = var_0_bool == 0; //@ne
		if(var_139_bool != 0) {
			goto Label_700;
		EMIT "GOTO 0x2ba";

		Label_700:
			return 10;
		}
		var_140_cvector = CVector(0,0,0); var_141_float = 0;
		func_607(var_93_float, var_140_cvector, (float)2.6179938316345215);
		var_140_cvector = var_92_cvector;
		var_93_float = var_92_cvector | var_92_cvector;
		var_143_bool = var_93_float >= (float)10000.0;
		if(var_143_bool != 0) {
			var_144_cvector = CVector(0,0,0);
			func_784(var_144_cvector);
			var_1_bool = var_144_cvector + var_92_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_700;
		}
	}
	var_147_bool = var_2_object == 0; //@nz
	if(var_147_bool == 1) goto Label_670;
	
}


func_519(var_201_string)
{
	var_201_string = "walk";
	return 0;
}


func_776(var_116_string, var_117_int)
{
	var_119_bool = var_117_int == (int)1;
	if(var_119_bool != 0) {
		var_116_string = "fire";
		return 0;
	}
	var_116_string = "phys";
	return 0;
}


func_521(var_202_string)
{
	var_202_string = "run";
	return 0;
}


func_523(var_3_bool, var_75_object)
{
	var_3_bool = var_75_object;
	Speak("retreat");
	SetTimer((int)110, (int)1);
	var_83_object = Obj();
	var_75_object = var_83_object;
	func_637(var_78_bool, var_79_object, var_75_object, var_83_object);
	KillTimer((int)110);
	return 0;
}


func_143(var_38_bool)
{
	var_38_bool = 0;
	return 0;
}


func_399(var_0_bool, var_1_bool, var_160_bool, var_161_object, var_162_float, var_163_float, var_164_bool, var_165_bool)
{
	var_167_bool = 0; var_168_bool = 0; var_169_object = Obj(); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_float = 0; var_174_object = Obj(); var_175_bool = 0; var_176_bool = 0; var_177_object = Obj(); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_float = 0; var_182_object = Obj();
	var_0_bool = false;
	var_1_bool = var_161_object;
	var_165_bool = var_176_bool;
	
Label_403:
	var_183_bool = 0; var_184_object = Obj();
	var_161_object = var_184_object;
	func_512(var_183_bool, var_184_object);
	var_187_bool = var_183_bool == 0; //@nz
	if(var_187_bool != 0) {
		var_160_bool = 0;
		return 16;
	}
	@@var_161_object:GetPosition(var_178_cvector);
	GetPosition(var_179_cvector);
	var_180_cvector = var_178_cvector - var_179_cvector;
	var_181_float = var_180_cvector | var_180_cvector;
	var_188_bool = 0;
	var_188_bool = 0;
	var_190_bool = var_163_float > (int)0;
	if(var_190_bool != 0) {
		var_191_float = var_163_float * var_163_float;
		var_192_bool = var_181_float > var_191_float;
		if(var_192_bool != 0) {
			var_188_bool = 1;
		}
	}
	if(var_188_bool != 0) {
		Stop();
		var_160_bool = 0;
		return 16;
	}
	var_193_float = var_162_float * var_162_float;
	var_194_bool = var_181_float > var_193_float;
	if(var_194_bool != 0) {
		@@var_161_object:GetPFPosition(var_178_cvector);
		FindPathTo(var_182_object, var_178_cvector);
		var_195_bool = var_182_object != 0; //@nn
		if(var_195_bool != 0) {
			var_182_object = var_177_object;
			var_182_object = 0;
		}
		var_196_bool = var_177_object != 0; //@nn
		if(var_196_bool != 0) {
			var_197_bool = var_176_bool;
			if(var_197_bool == 0) goto Label_452;
			var_176_bool = 0;
			RotatePath(var_177_object, var_175_bool);
			var_198_bool = var_175_bool == 0; //@nz
			if(var_198_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_201_string = "";
				func_519(var_201_string);
				var_202_string = "";
				func_521(var_202_string);
				FollowPath(var_177_object, var_164_bool, var_175_bool, var_201_string, var_202_string);
				var_203_bool = var_175_bool == 0; //@nz
				if(var_203_bool != 0) {
					var_204_bool = var_0_bool;
					if(var_204_bool != 0) {
						var_177_object = 0;
						goto Label_499;
					EMIT "GOTO 0x1d8";
					}
				} else {
					var_177_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_175_bool);
					var_207_bool = var_175_bool == 0; //@nz
					if(var_207_bool != 0) {
						var_208_bool = var_0_bool;
						if(var_208_bool != 0) {
							var_177_object = 0;
							goto Label_499;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_499;
	}
			var_182_object = 0;
			goto Label_497;

		Label_497:
			var_177_object = 0;

		}
		goto Label_403;
	}
Label_499:
	var_160_bool = !var_0_bool;
	return 16;
	
}


func_913(var_25_bool, var_26_object)
{
	var_27_int = 0; var_28_int = 0;
	var_29_bool = 0; var_30_object = Obj();
	var_26_object = var_30_object;
	func_877(var_29_bool, var_30_object);
	var_46_bool = var_29_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_25_bool = 0;
		return 2;
	}
	var_47_bool = 0; var_48_object = Obj(); var_49_string = "";
	var_26_object = var_48_object;
	func_796(var_47_bool, var_48_object, "noaccess");
	var_56_bool = var_47_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_25_bool = 1;
		return 2;
	}
	@@var_26_object:GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == (int)0;
	return 2;
}


func_145()
{
	return 0;
}


func_784(var_132_cvector)
{
	var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0);
	GetPosition(var_134_cvector);
	var_134_cvector = var_132_cvector;
	return 2;
}


func_146()
{
	Speak("death");
	var_12_string = "";
	func_154("die");
	return 0;
}


func_789(var_117_cvector, var_118_object)
{
	var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0);
	GetPosition(var_121_cvector);
	@@var_118_object:GetPosition(var_122_cvector);
	var_117_cvector = var_122_cvector - var_121_cvector;
	return 4;
}


func_154(var_12_string)
{
	var_13_string = "";
	var_12_string = var_13_string;
	func_163(var_13_string);
	
Label_159:
	Hold();
	goto Label_159;
}
EMIT "Return(); Pop(0)";


func_1051(var_61_object, var_62_string)
{
	var_63_float = 0; var_64_float = 0;
	var_66_bool = var_62_string == "health";
	if(var_66_bool != 0) {
		GetProperty("health", var_64_float);
		var_69_bool = var_64_float <= (int)0;
		if(var_69_bool != 0) {
			SignalDeath(var_61_object);
		}
		var_70_bool = 0;
		var_70_bool = 0;
		var_71_float = GlobalVars[0];
		var_72_bool = var_64_float < var_71_float;
		if(var_72_bool != 0) {
			var_73_bool = 0; var_74_object = Obj();
			var_61_object = var_74_object;
			func_913(var_73_bool, var_74_object);
			if(var_73_bool != 0) {
				var_70_bool = 1;
			}
		}
		if(var_70_bool != 0) {
			var_75_object = Obj();
			var_61_object = var_75_object;
			TaskCall(5);
			func_523(var_79_object, var_75_object);
			TaskReturn();
		}
	}
	return 2;
}


func_796(var_47_bool, var_48_object, var_49_string)
{
	var_50_bool = 0; var_51_bool = 0;
	var_54_bool = IsFuncExist(var_48_object, "HasProperty", (int)2);
	var_55_bool = var_54_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_47_bool = 0;
		return 2;
	}
	@@var_48_object:HasProperty(var_49_string, var_51_bool);
	var_51_bool = var_47_bool;
	return 2;
}


func_163(var_13_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_13_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_13_string);
	RemoveEnvelope();
	return 0;
}


func_808(var_91_float, var_92_object, var_93_float, var_94_int)
{
	var_95_int = 0; var_96_string = ""; var_97_int = 0; var_98_float = 0; var_99_float = 0; var_100_float = 0; var_101_int = 0; var_102_string = ""; var_103_int = 0; var_104_float = 0; var_105_float = 0; var_106_float = 0;
	var_107_bool = 0; var_108_object = Obj(); var_109_string = "";
	var_92_object = var_108_object;
	func_796(var_107_bool, var_108_object, "health");
	var_110_bool = var_107_bool == 0; //@nz
	if(var_110_bool != 0) {
		var_91_float = 0.0;
		return 12;
	}
	var_111_bool = 0; var_112_object = Obj(); var_113_string = "";
	var_92_object = var_112_object;
	func_796(var_111_bool, var_112_object, "armor");
	var_114_bool = var_111_bool == 0; //@nz
	if(var_114_bool != 0) {
		var_101_int = 0;
	} else {
			@@var_92_object:GetProperty("armor", var_101_int);
	}
	var_116_string = ""; var_117_int = 0;
	var_94_int = var_117_int;
	func_776(var_116_string, var_117_int);
	var_102_string = "armor_" + var_116_string;
	var_120_bool = 0; var_121_object = Obj(); var_122_string = "";
	var_92_object = var_121_object;
	var_102_string = var_122_string;
	func_796(var_120_bool, var_121_object, var_122_string);
	var_123_bool = var_120_bool == 0; //@nz
	if(var_123_bool != 0) {
		var_103_int = 0;
	} else {
		@@var_92_object:GetProperty(var_102_string, var_103_int);

	}
	var_124_float = 0; var_125_float = 0; var_126_float = 0;
	var_127_int = var_101_int + var_103_int;
	var_125_float = var_127_int / (float)100.0;
	func_951(var_124_float, var_125_float, (float)1);
	var_124_float = var_104_float;
	@@var_92_object:GetProperty("health", var_105_float);
	var_132_int = (int)1 - var_104_float;
	var_106_float = var_93_float * var_132_int;
	var_134_float = 0; var_135_float = 0; var_136_float = 0; var_137_float = 0;
	var_135_float = var_105_float - var_106_float;
	func_958(var_134_float, var_135_float, (float)0, (float)1);
	@@var_92_object:SetProperty("health", var_134_float);
	var_106_float = var_91_float;
	return 12;
	
}


func_937(var_110_cvector, var_111_cvector)
{
	var_112_float = 0; var_113_float = 0;
	var_114_int = var_111_cvector | var_111_cvector;
	var_113_float = sqrt(var_114_int);
	var_115_float = 9.999999974752427e-07;
	var_116_bool = var_113_float < var_115_float;
	if(var_116_bool != 0) {
		var_110_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_110_cvector = var_111_cvector / var_113_float;
	return 2;
}


func_307()
{
	Stop();
	StopAnimation();
	StopAsync();
	return 0;
}


func_947(var_53_float, var_54_cvector, var_55_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	var_57_cvector = var_55_cvector - var_54_cvector;
	var_53_float = var_57_cvector | var_57_cvector;
	return 2;
}


func_951(var_124_float, var_125_float, var_126_float)
{
	var_129_bool = var_125_float < var_126_float;
	if(var_129_bool != 0) {
		var_125_float = var_124_float;
	} else {
		var_126_float = var_124_float;
	}
	return 0;
	
}


func_701(var_0_bool, var_1_bool, var_2_object, var_60_int)
{
	var_61_cvector = CVector(0,0,0); var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_float = 0;
	var_70_bool = var_60_int != (int)120;
	if(var_70_bool != 0) {
		return 8;
	}
	var_71_bool = var_0_bool == 0; //@ne
	if(var_71_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_65_cvector);
		FindDirLength(var_66_float, var_65_cvector, (float)7000.0);
		var_74_cvector = CVector(0,0,0); var_75_float = 0;
		func_607(var_68_float, var_74_cvector, (float)1.7453293800354004);
		var_74_cvector = var_67_cvector;
		var_68_float = var_67_cvector | var_67_cvector;
		var_104_bool = 0;
		var_104_bool = 0;
		var_106_bool = var_68_float >= (float)10000.0;
		if(var_106_bool != 0) {
			var_107_bool = 0;
			var_108_float = var_66_float * var_66_float;
			var_110_float = var_108_float * (float)2.25;
			var_111_bool = var_68_float >= var_110_float;
			if(var_111_bool != 1) {
				var_112_bool = 0;
				func_760((bool)1, var_112_bool);
				if(var_112_bool != 1) {
					var_107_bool = 0;
				}
			}
			if(var_107_bool != 0) {
				var_104_bool = 1;
			}
		}
		if(var_104_bool == 0) goto Label_752;
		Stop();
		var_132_cvector = CVector(0,0,0);
		func_784(var_132_cvector);
		var_1_bool = var_132_cvector + var_67_cvector;
	}
Label_752:
	return 8;
	
}


func_958(var_134_float, var_135_float, var_136_float, var_137_float)
{
	var_138_bool = var_135_float < var_136_float;
	if(var_138_bool != 0) {
		var_136_float = var_134_float;
		return 0;
	}
	var_139_bool = var_135_float > var_137_float;
	if(var_139_bool != 0) {
		var_137_float = var_134_float;
		return 0;
	}
	var_135_float = var_134_float;
	return 0;
}


func_63(var_0_bool, var_1_bool)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_bool = 0; var_29_object = Obj(); var_30_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_24_float, (float)0.5);
	Sleep(var_24_float);
	
Label_71:
	var_32_bool = var_0_bool == 0; //@nz
	if(var_32_bool != 0) {
		var_33_bool = var_1_bool == 0; //@nz
		if(var_33_bool != 0) {

		Label_75:
			GetPosition(var_26_cvector);
			GetCameraFarDistance(var_27_float);
			var_27_float = var_27_float * (float)2.5;
			GetRandomPFPointInCircle(var_25_cvector, var_26_cvector, var_27_float, var_28_bool);
			var_35_bool = var_28_bool;
			if(var_35_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_75;
		}
				var_1_bool = false;
	}
			return 14;
	}
	goto Label_92;
	
Label_92:
	FindShiftedPathTo(var_29_object, var_25_cvector);
	var_36_bool = var_29_object != 0; //@nn
	if(var_36_bool != 0) {
		RotatePath(var_29_object, var_30_bool);
		var_37_bool = var_30_bool;
		if(var_37_bool != 0) {
			var_38_bool = 0;
			func_143(var_38_bool);
			FollowPath(var_29_object, var_38_bool, var_30_bool);
			var_29_object = 0;
			var_39_bool = var_30_bool;
			if(var_39_bool != 0) {
				TaskCall(1);
				func_145();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_29_object = 0;
	goto Label_71;
	
}


func_191(var_0_bool, var_46_object, var_150_bool)
{
	var_48_float = 0; var_49_float = 0; var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_float = 0; var_55_int = 0; var_56_object = Obj(); var_57_float = 0; var_58_float = 0; var_59_float = 0; var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_float = 0; var_65_int = 0; var_66_object = Obj(); var_67_float = 0;
	var_0_bool = var_46_object;
	GetAttackDistance(var_58_float);
	var_59_float = var_58_float + (int)10;
	Face(var_0_bool);
	
Label_199:
	var_69_bool = 0; var_70_object = Obj();
	var_70_object = var_0_bool;
	func_977(var_69_bool, var_70_object);
	if(var_69_bool != 0) {
		@@@var_0_bool:GetPosition(var_61_cvector);
		GetPosition(var_62_cvector);
		var_63_cvector = var_61_cvector - var_62_cvector;
		var_64_float = var_63_cvector | var_63_cvector;
		var_76_float = var_59_float * var_59_float;
		var_77_bool = var_64_float < var_76_float;
		if(var_77_bool != 0) {
			irand(var_65_int, (int)2);
			var_81_int = var_65_int + (int)1;
			var_82_int = "attack" + var_81_int;
			Speak(var_82_int);
			SetAttackState((bool)1);
			PlayAnimation("all", "attack_begin");
			WaitForAnimEnd(var_60_bool);
			var_86_bool = var_60_bool == 0; //@nz
			if(var_86_bool != 0) {
				SetAttackState((bool)0);
			} else {
				var_88_bool = 0; var_89_object = Obj();
				var_89_object = var_0_bool;
				func_913(var_88_bool, var_89_object);
				if(var_88_bool != 0) {
					GetVictim(var_58_float, var_66_object);
					ReportAttack(var_0_bool);
					var_90_bool = var_66_object == var_0_bool;
					if(var_90_bool != 0) {
						var_91_float = 0; var_92_object = Obj(); var_93_float = 0; var_94_int = 0;
						var_66_object = var_92_object;
						func_808(var_91_float, var_92_object, (float)0.05000000074505806, (int)0);
						var_91_float = var_67_float;
						ReportHit(var_0_bool, (int)0, var_67_float, (float)0.05000000074505806);
					}
					var_66_object = 0;
				}
				SetAttackState((bool)0);
				PlayAnimation("all", "attack_end");
				WaitForAnimEnd(var_60_bool);
				var_146_bool = var_60_bool == 0; //@nz
				if(var_146_bool != 0) {
					goto Label_288;
				}
		} else {
				StopAsync();
				var_147_bool = 0; var_148_object = Obj(); var_149_float = 0;
				var_148_object = var_0_bool;
				var_59_float = var_149_float;
				TaskCall(4);
				func_323(var_147_bool, var_148_object, var_149_float);
				TaskReturn();
				var_213_bool = var_150_bool == 0; //@nz
				if(var_213_bool != 0) {
					goto Label_288;
				}
				Face(var_0_bool);
		}
			goto Label_199;

		}
	}
Label_288:
	StopAsync();
	return 20;
	
}


func_323(var_147_bool, var_148_object, var_149_float)
{
	var_152_bool = 0; var_153_bool = 0;
	func_342();
	var_160_bool = 0; var_161_object = Obj(); var_162_float = 0; var_163_float = 0; var_164_bool = 0; var_165_bool = 0;
	var_148_object = var_161_object;
	var_162_float = var_149_float * (float)0.8999999761581421;
	func_399(var_152_bool, var_153_bool, var_160_bool, var_161_object, var_162_float, (float)5000, (bool)1, (bool)1);
	var_160_bool = var_153_bool;
	func_352();
	var_153_bool = var_147_bool;
	return 2;
}


func_969(var_123_float, var_124_cvector, var_125_cvector)
{
	var_126_int = var_124_cvector | var_125_cvector;
	var_127_int = var_124_cvector | var_124_cvector;
	var_128_int = var_125_cvector | var_125_cvector;
	var_129_float = var_127_int * var_128_int;
	var_130_float = sqrt(var_129_float);
	var_123_float = var_126_int / var_130_float;
	return 0;
}


func_591()
{
	KillTimer((int)110);
	func_753(var_9_object);
	return 0;
}


func_977(var_69_bool, var_70_object)
{
	var_71_bool = 0; var_72_bool = 0;
	var_73_bool = 0; var_74_object = Obj();
	var_70_object = var_74_object;
	func_913(var_73_bool, var_74_object);
	var_75_bool = var_73_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_69_bool = 0;
		return 2;
	}
	IsPlayerActor(var_70_object, var_72_bool);
	var_72_bool = var_69_bool;
	return 2;
}


func_342()
{
	var_13_float = 0; var_14_float = 0;
	rand(var_14_float, (int)10);
	var_18_int = var_14_float + (int)10;
	SetTimer((int)111, var_18_int);
	return 2;
}


func_990(var_10_bool, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_977(var_12_bool, var_13_object);
	var_12_bool = var_10_bool;
	return 0;
}


func_607(var_0_bool, var_94_cvector, var_95_float)
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_float = 0; var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_float = 0;
	GetPosition(var_102_cvector);
	@@@var_0_bool:GetPosition(var_103_cvector);
	GetDirection(var_104_cvector);
	var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0);
	var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0);
	var_111_cvector = var_102_cvector - var_103_cvector;
	func_937(var_110_cvector, var_111_cvector);
	var_118_float = var_104_cvector * (float)0.75;
	var_109_cvector = var_110_cvector + var_118_float;
	func_937(var_108_cvector, var_109_cvector);
	var_108_cvector = var_105_cvector;
	FindLongestDir(var_106_cvector, var_107_float, var_105_cvector, var_95_float, (int)32, (float)7000.0);
	var_107_float = var_107_float - (int)100;
	var_123_bool = var_107_float < (int)0;
	if(var_123_bool != 0) {
		var_107_float = 0;
	}
	var_94_cvector = var_106_cvector * var_107_float;
	return 12;
}


func_352()
{
	KillTimer((int)111);
	return 0;
}


func_997(var_51_object)
{
	var_52_object = Obj();
	var_51_object = var_52_object;
	TaskCall(3);
	func_191(var_51_object, var_53_object, var_52_object);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_872(var_40_bool, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0;
	@@var_41_object:IsDead(var_43_bool);
	var_43_bool = var_40_bool;
	return 2;
}


func_877(var_29_bool, var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj();
	var_35_bool = var_30_object == 0; //@ne
	if(var_35_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_36_bool = 0;
	var_36_bool = 0;
	var_39_bool = IsFuncExist(var_30_object, "IsDead", (int)1);
	if(var_39_bool != 0) {
		var_40_bool = 0; var_41_object = Obj();
		var_30_object = var_41_object;
		func_872(var_40_bool, var_41_object);
		if(var_40_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	GetScene(var_33_object);
	var_44_bool = var_33_object == 0; //@ne
	if(var_44_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	@@var_30_object:GetScene(var_34_object);
	var_45_bool = var_33_object != var_34_object;
	if(var_45_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_29_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1007(var_45_object)
{
	var_46_object = Obj();
	var_45_object = var_46_object;
	TaskCall(3);
	func_191(var_45_object, var_47_object, var_46_object);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_753(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_372()
{
	func_352();
	func_505(var_9_object);
	return 0;
}


func_760(var_0_bool, var_112_bool)
{
	var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0);
	GetDirection(var_115_cvector);
	var_117_cvector = CVector(0,0,0); var_118_object = Obj();
	var_118_object = var_0_bool;
	func_789(var_117_cvector, var_118_object);
	var_117_cvector = var_116_cvector;
	var_123_float = 0; var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0);
	var_115_cvector = var_124_cvector;
	var_116_cvector = var_125_cvector;
	func_969(var_123_float, var_124_cvector, var_125_cvector);
	var_112_bool = var_123_float >= (float)-0.3420201241970062;
	return 4;
}


func_505(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1017()
{
	TaskCall(2);
	func_146();
	TaskReturn();
	return 0;
}


func_127(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


