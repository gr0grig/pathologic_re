// @IMPORTS: FogLinear/2,GetHeight/1,PlayGlobalSound/2,MovePoint/2,PlaySound/1,ReportHit/4,SetVisirVisibility/1,Sleep/1,RemoveActor/1,PutOnGrid/0,SetTimer/2,rand/2,GetPosition/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,Stop/0,StopGroup0/0,FindShiftedPathTo/2,FindPathTo/2,FollowPath/5,KillTimer/1,Sleep/2,FindActor/2,IsPlayerActor/2,GetScene/1,self/1,CreateFloatVector/1,SendWorldWndMessage/2,ResetAAS/0,GetActiveScene/1
// @STRINGS: W:breath|A:GetPFPosition|W:attack|A:GetPosition|W:walk|W:run|W:player|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:disease|W:armor_disease|W:immunity|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:add|W:GetCurrentRegion|A:GetCurrentRegion
// @GLOBALS: 0:int:Region
// @RUN_OP: 0x44
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @TASK_1: vars= params=0
// @TASK_2: vars=bool,bool params=0
// @EVENT_7: op=0x56 vars=int
// @EVENT_1: op=0x6a vars=object
// @EVENT_10: op=0xb8 vars=object
// @EVENT_28: op=0xbc vars=
// @EVENT_41: op=0xc6 vars=object
// @TASK_3: vars=bool,object params=0
// @EVENT_7: op=0xed vars=int
// @EVENT_1: op=0x106 vars=object
// @EVENT_10: op=0x193 vars=object
// @EVENT_41: op=0x19e vars=object
// @TASK_4: vars= params=0
// @EVENT_1: op=0x1b2 vars=object
// @EVENT_7: op=0x1bd vars=int
// @STANDALONE_EVENT_41: op=0x2eb vars=object
// @PE: 0x56,0x6a,0xb8,0xc6,0xed,0x106,0x114,0x181,0x193,0x19e,0x1b2,0x1bd,0x293,0x2b5,0x2bd,0x2eb

task_2_event_7(var_0_bool, var_1_bool, var_2_int, var_3_bool, var_4_object)
{
	var_5_int = 0;
	var_4_object = var_5_int;
	func_701(var_5_int);
	var_9_bool = var_4_object == (int)20;
	if(var_9_bool != 0) {
		var_10_bool = 0; var_11_object = Obj();
		func_469(Obj());
		var_12_object = var_11_object;
		func_708(var_10_bool, var_11_object);
		if(var_10_bool != 0) {
			func_191(var_3_bool, var_4_object);
		}
	}
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object)
{
	var_5_bool = 0; var_6_object = Obj();
	var_4_object = var_6_object;
	func_680(var_5_bool, var_6_object);
	if(var_5_bool != 0) {
		func_191(var_3_bool, var_4_object);
		var_44_object = Obj();
		var_4_object = var_44_object;
		func_693(var_44_object);
	}
	return 0;
}


task_2_event_10(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object)
{
	RequestClearPath(var_4_object);
	return 0;
}


task_2_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object)
{
	Stop();
	return 0;
}


task_2_event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object)
{
	func_191(var_3_bool, var_4_object);
	var_4_object = Obj();
	func_747();
	return 0;
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int)
{
	var_5_int = 0;
	var_4_int = var_5_int;
	func_701(var_5_int);
	var_8_int = 0;
	var_4_int = var_8_int;
	func_385(var_3_object, var_4_int, var_8_int);
	var_74_bool = var_4_int == (int)20;
	if(var_74_bool != 0) {
		var_75_bool = 0; var_76_object = Obj();
		func_469(Obj());
		var_77_object = var_76_object;
		func_708(var_75_bool, var_76_object);
		var_81_bool = var_75_bool == 0; //@nz
		if(var_81_bool != 0) {
			func_407(var_4_int);
		}
	}
	return 0;
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	var_5_bool = 0; var_6_object = Obj();
	var_4_object = var_6_object;
	func_680(var_5_bool, var_6_object);
	if(var_5_bool != 0) {
		func_407(var_4_object);
		var_45_object = Obj();
		var_4_object = var_45_object;
		func_693(var_45_object);
	}
	return 0;
}


task_3_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	RequestClearPath(var_4_object);
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	func_407(var_4_object);
	var_4_object = Obj();
	func_747();
	return 0;
}


task_4_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	var_5_bool = 0; var_6_object = Obj();
	var_4_object = var_6_object;
	func_680(var_5_bool, var_6_object);
	if(var_5_bool != 0) {
		var_44_object = Obj();
		var_4_object = var_44_object;
		func_693(var_44_object);
	}
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int)
{
	var_5_int = 0;
	var_4_int = var_5_int;
	func_701(var_5_int);
	return 0;
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object)
{
	PutOnGrid();
	SetTimer((int)20, (int)1);
	
Label_74:
	TaskCall(2);
	func_120(var_6_bool, var_7_bool);
	TaskReturn();
	TaskCall(3);
	func_215();
	TaskReturn();
	goto Label_74;
}
EMIT "Return(); Pop(0)";


func_0(var_45_object)
{
	var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_float = 0;
	FogLinear((int)1, (int)1);
	GetHeight(var_50_float);
	var_51_cvector = CVector(0.0, 0.0, 0.0);
	var_56_float = GetByIndex(var_51_cvector, 1);
	var_50_float = var_56_float;
	SetByIndex(var_51_cvector, 1) = var_56_float;
	PlayGlobalSound("breath", var_51_cvector);
	@@var_45_object:GetPFPosition(var_52_cvector);
	MovePoint(var_52_cvector, (int)500);
	var_59_bool = 0; var_60_object = Obj();
	var_45_object = var_60_object;
	func_625(var_59_bool, var_60_object);
	if(var_59_bool != 0) {
		var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
		func_451(CVector(0,0,0));
		var_64_cvector = var_62_cvector;
		var_67_cvector = CVector(0,0,0); var_68_object = Obj();
		var_45_object = var_68_object;
		func_456(var_67_cvector, var_68_object);
		var_67_cvector = var_63_cvector;
		func_655(var_61_float, var_62_cvector, var_63_cvector);
		var_74_bool = var_61_float <= (float)90000.0;
		if(var_74_bool != 0) {
			PlaySound("attack");
			var_76_float = 0; var_77_object = Obj(); var_78_float = 0;
			var_45_object = var_77_object;
			func_515(var_76_float, var_77_object, (float)0.25);
			var_76_float = var_53_float;
			ReportHit(var_45_object, (int)5, var_53_float, (float)0.25);
		}
	}
	SetVisirVisibility((bool)0);
	FogLinear((int)0, (int)2);
	Sleep((int)5);
	var_140_object = Obj();
	func_649(var_140_object);
	RemoveActor(var_140_object);
	return 8;
}


func_385(var_0_bool, var_1_bool, var_8_int)
{
	var_10_bool = var_8_int != (int)0;
	if(var_10_bool != 0) {
		return 0;
	}
	var_11_bool = 0; var_12_object = Obj();
	var_12_object = var_1_bool;
	func_276(var_11_bool, var_12_object);
	var_71_bool = var_11_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_515(var_76_float, var_77_object, var_78_float)
{
	var_79_float = 0; var_80_float = 0; var_81_float = 0; var_82_float = 0;
	var_83_bool = 0; var_84_object = Obj(); var_85_string = "";
	var_77_object = var_84_object;
	func_481(var_83_bool, var_84_object, "disease");
	var_86_bool = var_83_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_76_float = 0;
		return 4;
	}
	var_81_float = 0;
	var_87_bool = 0; var_88_object = Obj(); var_89_string = "";
	var_77_object = var_88_object;
	func_481(var_87_bool, var_88_object, "armor_disease");
	if(var_87_bool != 0) {
		@@var_77_object:GetProperty("armor_disease", var_81_float);
		var_81_float = var_81_float / (int)100;
	}
	var_92_bool = 0; var_93_object = Obj(); var_94_string = "";
	var_77_object = var_93_object;
	func_481(var_92_bool, var_93_object, "immunity");
	if(var_92_bool != 0) {
		@@var_77_object:GetProperty("immunity", var_82_float);
		var_81_float = var_81_float + var_82_float;
		var_96_bool = 0; var_97_object = Obj(); var_98_string = ""; var_99_float = 0; var_100_float = 0; var_101_float = 0;
		var_77_object = var_97_object;
		var_99_float = -var_78_float;
		func_493(var_96_bool, var_97_object, "immunity", var_99_float, (float)0, (float)1);
	}
	var_115_bool = var_81_float >= (int)1;
	if(var_115_bool != 0) {
		var_76_float = 0.0;
		return 4;
	}
	var_117_int = (int)1 - var_81_float;
	var_119_float = var_117_int / (int)2;
	var_78_float = var_78_float * var_119_float;
	var_120_bool = 0; var_121_object = Obj(); var_122_string = ""; var_123_float = 0; var_124_float = 0; var_125_float = 0;
	var_77_object = var_121_object;
	var_78_float = var_123_float;
	func_493(var_120_bool, var_121_object, "disease", var_123_float, (float)0, (float)1);
	var_126_bool = 0; var_127_object = Obj();
	var_77_object = var_127_object;
	func_476(var_126_bool, var_127_object);
	if(var_126_bool != 0) {
		var_130_float = 0;
		var_78_float = var_130_float;
		func_670(var_130_float);
	}
	var_78_float = var_76_float;
	return 4;
}


func_649(var_140_object)
{
	var_141_object = Obj(); var_142_object = Obj();
	self(var_142_object);
	var_142_object = var_140_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_655(var_61_float, var_62_cvector, var_63_cvector)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	var_72_cvector = var_63_cvector - var_62_cvector;
	var_61_float = var_72_cvector | var_72_cvector;
	return 2;
}


func_659(var_108_float, var_109_float, var_110_float, var_111_float)
{
	var_112_bool = var_109_float < var_110_float;
	if(var_112_bool != 0) {
		var_110_float = var_108_float;
		return 0;
	}
	var_113_bool = var_109_float > var_111_float;
	if(var_113_bool != 0) {
		var_111_float = var_108_float;
		return 0;
	}
	var_109_float = var_108_float;
	return 0;
}


func_276(var_129_bool, var_130_object)
{
	var_131_bool = 0; var_132_object = Obj();
	var_130_object = var_132_object;
	func_708(var_131_bool, var_132_object);
	var_131_bool = var_129_bool;
	return 0;
}


func_407(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_283(var_0_bool, var_1_bool, var_107_bool, var_108_object, var_109_float, var_110_float, var_111_bool, var_112_bool)
{
	var_113_bool = 0; var_114_bool = 0; var_115_object = Obj(); var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_float = 0; var_120_object = Obj(); var_121_bool = 0; var_122_bool = 0; var_123_object = Obj(); var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_float = 0; var_128_object = Obj();
	var_0_bool = false;
	var_1_bool = var_108_object;
	var_112_bool = var_122_bool;
	
Label_287:
	var_129_bool = 0; var_130_object = Obj();
	var_108_object = var_130_object;
	func_276(var_129_bool, var_130_object);
	var_133_bool = var_129_bool == 0; //@nz
	if(var_133_bool != 0) {
		var_107_bool = 0;
		return 16;
	}
	@@var_108_object:GetPosition(var_124_cvector);
	GetPosition(var_125_cvector);
	var_126_cvector = var_124_cvector - var_125_cvector;
	var_127_float = var_126_cvector | var_126_cvector;
	var_134_bool = 0;
	var_134_bool = 0;
	var_136_bool = var_110_float > (int)0;
	if(var_136_bool != 0) {
		var_137_float = var_110_float * var_110_float;
		var_138_bool = var_127_float > var_137_float;
		if(var_138_bool != 0) {
			var_134_bool = 1;
		}
	}
	if(var_134_bool != 0) {
		Stop();
		var_107_bool = 0;
		return 16;
	}
	var_139_float = var_109_float * var_109_float;
	var_140_bool = var_127_float > var_139_float;
	if(var_140_bool != 0) {
		@@var_108_object:GetPFPosition(var_124_cvector);
		FindPathTo(var_128_object, var_124_cvector);
		var_141_bool = var_128_object != 0; //@nn
		if(var_141_bool != 0) {
			var_128_object = var_123_object;
			var_128_object = 0;
		}
		var_142_bool = var_123_object != 0; //@nn
		if(var_142_bool != 0) {
			var_143_bool = var_122_bool;
			if(var_143_bool == 0) goto Label_336;
			var_122_bool = 0;
			RotatePath(var_123_object, var_121_bool);
			var_144_bool = var_121_bool == 0; //@nz
			if(var_144_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_147_string = "";
				func_423(var_147_string);
				var_148_string = "";
				func_425(var_148_string);
				FollowPath(var_123_object, var_111_bool, var_121_bool, var_147_string, var_148_string);
				var_149_bool = var_121_bool == 0; //@nz
				if(var_149_bool != 0) {
					var_150_bool = var_0_bool;
					if(var_150_bool != 0) {
						var_123_object = 0;
						goto Label_383;
					EMIT "GOTO 0x164";
					}
				} else {
					var_123_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_121_bool);
					var_153_bool = var_121_bool == 0; //@nz
					if(var_153_bool != 0) {
						var_154_bool = var_0_bool;
						if(var_154_bool != 0) {
							var_123_object = 0;
							goto Label_383;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_383;
	}
			var_128_object = 0;
			goto Label_381;

		Label_381:
			var_123_object = 0;

		}
		goto Label_287;
	}
Label_383:
	var_107_bool = !var_0_bool;
	return 16;
	
}


func_670(var_130_float)
{
	var_131_object = Obj(); var_132_object = Obj();
	CreateFloatVector(var_132_object);
	@@var_132_object:add(var_130_float);
	SendWorldWndMessage((int)14, var_132_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_423(var_147_string)
{
	var_147_string = "walk";
	return 0;
}


func_680(var_5_bool, var_6_object)
{
	var_7_bool = 0; var_8_bool = 0;
	IsPlayerActor(var_6_object, var_8_bool);
	var_5_bool = 0;
	var_9_bool = var_8_bool;
	if(var_9_bool != 0) {
		var_10_bool = 0; var_11_object = Obj();
		var_6_object = var_11_object;
		func_625(var_10_bool, var_11_object);
		if(var_10_bool != 0) {
			var_5_bool = 1;
		}
	}
	return 2;
}


func_425(var_148_string)
{
	var_148_string = "run";
	return 0;
}


func_427()
{
	var_35_float = 0; var_36_float = 0;
	rand(var_36_float, (int)30);
	Sleep(var_36_float);
	return 2;
}


func_179(var_23_float)
{
	var_24_float = 0; var_25_float = 0;
	GetCameraFarDistance(var_25_float);
	var_25_float = var_23_float;
	return 2;
}


func_693(var_44_object)
{
	var_45_object = Obj();
	var_44_object = var_45_object;
	TaskCall(0);
	func_0(var_45_object);
	TaskReturn();
	return 0;
}


func_701(var_5_int)
{
	var_7_bool = var_5_int == (int)20;
	if(var_7_bool != 0) {
		ResetAAS();
	}
	return 0;
}


func_191(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_451(var_64_cvector)
{
	var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
	GetPosition(var_66_cvector);
	var_66_cvector = var_64_cvector;
	return 2;
}


func_708(var_48_bool, var_49_object)
{
	var_50_object = Obj(); var_51_int = 0; var_52_object = Obj(); var_53_int = 0;
	var_54_bool = 0; var_55_object = Obj();
	var_49_object = var_55_object;
	func_625(var_54_bool, var_55_object);
	var_88_bool = var_54_bool == 0; //@nz
	if(var_88_bool != 0) {
		var_48_bool = 0;
		return 4;
	}
	GetActiveScene(var_52_object);
	var_89_bool = 0;
	var_89_bool = 0;
	var_90_bool = var_52_object != 0; //@nn
	if(var_90_bool != 0) {
		var_93_bool = IsFuncExist(var_52_object, "GetCurrentRegion", (int)1);
		if(var_93_bool != 0) {
			var_89_bool = 1;
		}
	}
	if(var_89_bool != 0) {
		@@var_52_object:GetCurrentRegion(var_53_int);
		var_48_bool = 0;
		var_94_int = GlobalVars[0];
		var_95_bool = var_53_int == var_94_int;
		if(var_95_bool != 0) {
			var_96_float = 0; var_97_object = Obj();
			var_49_object = var_97_object;
			func_461(var_96_float, var_97_object);
			var_105_bool = var_96_float < (int)4000000;
			if(var_105_bool != 0) {
				var_48_bool = 1;
			}
		}
		return 4;
	}
	var_48_bool = 0;
	return 4;
}
EMIT "Stack[-2] = 0";


func_456(var_67_cvector, var_68_object)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	@@var_68_object:GetPosition(var_70_cvector);
	var_70_cvector = var_67_cvector;
	return 2;
}


func_584(var_69_bool, var_70_object)
{
	var_71_bool = 0; var_72_bool = 0;
	@@var_70_object:IsDead(var_72_bool);
	var_72_bool = var_69_bool;
	return 2;
}


func_589(var_58_bool, var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); var_62_object = Obj(); var_63_object = Obj();
	var_64_bool = var_59_object == 0; //@ne
	if(var_64_bool != 0) {
		var_58_bool = 0;
		return 4;
	}
	var_65_bool = 0;
	var_65_bool = 0;
	var_68_bool = IsFuncExist(var_59_object, "IsDead", (int)1);
	if(var_68_bool != 0) {
		var_69_bool = 0; var_70_object = Obj();
		var_59_object = var_70_object;
		func_584(var_69_bool, var_70_object);
		if(var_69_bool != 0) {
			var_65_bool = 1;
		}
	}
	if(var_65_bool != 0) {
		var_58_bool = 0;
		return 4;
	}
	GetScene(var_62_object);
	var_73_bool = var_62_object == 0; //@ne
	if(var_73_bool != 0) {
		var_58_bool = 0;
		return 4;
	}
	@@var_59_object:GetScene(var_63_object);
	var_74_bool = var_62_object != var_63_object;
	if(var_74_bool != 0) {
		var_58_bool = 0;
		return 4;
	}
	var_58_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_461(var_96_float, var_97_object)
{
	var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0);
	GetPosition(var_101_cvector);
	@@var_97_object:GetPosition(var_102_cvector);
	var_103_cvector = var_102_cvector - var_101_cvector;
	var_96_float = var_103_cvector | var_103_cvector;
	return 6;
}


func_207(var_33_bool)
{
	var_33_bool = 0;
	return 0;
}


func_209(var_27_object, var_28_cvector)
{
	var_29_object = Obj(); var_30_object = Obj();
	FindShiftedPathTo(var_30_object, var_28_cvector);
	var_30_object = var_27_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_469(var_44_object)
{
	var_45_object = Obj(); var_46_object = Obj();
	FindActor(var_46_object, "player");
	var_46_object = var_44_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_215()
{
	var_42_object = Obj(); var_43_object = Obj();
	func_469(Obj());
	var_44_object = var_43_object;
	var_48_bool = 0; var_49_object = Obj();
	var_43_object = var_49_object;
	func_708(var_48_bool, var_49_object);
	var_106_bool = var_48_bool == 0; //@nz
	if(var_106_bool != 0) {
		return 2;
	}
	var_107_bool = 0; var_108_object = Obj(); var_109_float = 0; var_110_float = 0; var_111_bool = 0; var_112_bool = 0;
	var_43_object = var_108_object;
	func_283(var_42_object, var_43_object, var_107_bool, var_108_object, (float)100, (float)0, (bool)0, (bool)0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_476(var_126_bool, var_127_object)
{
	var_128_bool = 0; var_129_bool = 0;
	IsPlayerActor(var_127_object, var_129_bool);
	var_129_bool = var_126_bool;
	return 2;
}


func_481(var_76_bool, var_77_object, var_78_string)
{
	var_79_bool = 0; var_80_bool = 0;
	var_83_bool = IsFuncExist(var_77_object, "HasProperty", (int)2);
	var_84_bool = var_83_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_76_bool = 0;
		return 2;
	}
	@@var_77_object:HasProperty(var_78_string, var_80_bool);
	var_80_bool = var_76_bool;
	return 2;
}


func_493(var_96_bool, var_97_object, var_98_string, var_99_float, var_100_float, var_101_float)
{
	var_102_float = 0; var_103_float = 0;
	var_104_bool = 0; var_105_object = Obj(); var_106_string = "";
	var_97_object = var_105_object;
	var_98_string = var_106_string;
	func_481(var_104_bool, var_105_object, var_106_string);
	var_107_bool = var_104_bool == 0; //@nz
	if(var_107_bool != 0) {
		var_96_bool = 0;
		return 2;
	}
	@@var_97_object:GetProperty(var_98_string, var_103_float);
	var_108_float = 0; var_109_float = 0; var_110_float = 0; var_111_float = 0;
	var_109_float = var_103_float + var_99_float;
	var_100_float = var_110_float;
	var_101_float = var_111_float;
	func_659(var_108_float, var_109_float, var_110_float, var_111_float);
	@@var_97_object:SetProperty(var_98_string, var_108_float);
	var_96_bool = 1;
	return 2;
}


func_625(var_54_bool, var_55_object)
{
	var_56_int = 0; var_57_int = 0;
	var_58_bool = 0; var_59_object = Obj();
	var_55_object = var_59_object;
	func_589(var_58_bool, var_59_object);
	var_75_bool = var_58_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_54_bool = 0;
		return 2;
	}
	var_76_bool = 0; var_77_object = Obj(); var_78_string = "";
	var_55_object = var_77_object;
	func_481(var_76_bool, var_77_object, "noaccess");
	var_85_bool = var_76_bool == 0; //@nz
	if(var_85_bool != 0) {
		var_54_bool = 1;
		return 2;
	}
	@@var_55_object:GetProperty("noaccess", var_57_int);
	var_54_bool = var_57_int == (int)0;
	return 2;
}


func_120(var_0_bool, var_1_bool)
{
	var_8_float = 0; var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_bool = 0; var_12_object = Obj(); var_13_bool = 0; var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_14_float, (float)0.5);
	Sleep(var_14_float);
	
Label_128:
	var_21_bool = var_0_bool == 0; //@nz
	if(var_21_bool != 0) {
		var_22_bool = var_1_bool == 0; //@nz
		if(var_22_bool != 0) {

		Label_132:
			GetPosition(var_16_cvector);
			var_23_float = 0;
			func_179(var_23_float);
			GetRandomPFPointInCircle(var_15_cvector, var_16_cvector, var_23_float, var_17_bool);
			var_26_bool = var_17_bool;
			if(var_26_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_132;
		}
				var_1_bool = false;
	}
			return 12;
	}
	goto Label_148;
	
Label_148:
	var_27_object = Obj(); var_28_cvector = CVector(0,0,0);
	var_15_cvector = var_28_cvector;
	func_209(var_27_object, var_28_cvector);
	var_27_object = var_18_object;
	var_31_bool = var_18_object != 0; //@nn
	if(var_31_bool != 0) {
		RotatePath(var_18_object, var_19_bool);
		var_32_bool = var_19_bool;
		if(var_32_bool != 0) {
			var_33_bool = 0;
			func_207(var_33_bool);
			FollowPath(var_18_object, var_33_bool, var_19_bool);
			var_18_object = 0;
			var_34_bool = var_19_bool;
			if(var_34_bool != 0) {
				TaskCall(4);
				func_427();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_18_object = 0;
	goto Label_128;
	
}


