// @IMPORTS: FogLinear/2,GetHeight/1,PlayGlobalSound/2,MovePoint/2,PlaySound/1,ReportHit/4,SetVisirVisibility/1,Sleep/1,RemoveActor/1,PutOnGrid/0,SetTimer/2,rand/2,GetPosition/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,Stop/0,StopGroup0/0,FindPathTo/2,FollowPath/5,KillTimer/1,Sleep/2,FindActor/2,GetScene/1,self/1,IsPlayerActor/2,ResetAAS/0,GetActiveScene/1
// @STRINGS: W:breath|A:GetPFPosition|W:attack|A:GetPosition|W:walk|W:run|W:player|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:disease|W:armor_disease|W:immunity|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:GetCurrentRegion|A:GetCurrentRegion
// @GLOBALS: 0:int:Region
// @RUN_OP: 0x44
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @TASK_1: vars= params=0
// @TASK_2: vars=bool,bool params=0
// @EVENT_7: op=0x56 vars=int
// @EVENT_1: op=0x6a vars=object
// @EVENT_10: op=0xb1 vars=object
// @EVENT_28: op=0xb5 vars=
// @EVENT_41: op=0xbf vars=object
// @TASK_3: vars=bool,object params=0
// @EVENT_7: op=0xe0 vars=int
// @EVENT_1: op=0xf9 vars=object
// @EVENT_10: op=0x186 vars=object
// @EVENT_41: op=0x191 vars=object
// @TASK_4: vars= params=0
// @EVENT_1: op=0x1a5 vars=object
// @EVENT_7: op=0x1b0 vars=int
// @STANDALONE_EVENT_41: op=0x2b7 vars=object
// @PE: 0x56,0x6a,0xb1,0xbf,0xe0,0xf9,0x107,0x174,0x186,0x191,0x1a5,0x1b0,0x273,0x28b,0x293,0x2b7

task_2_event_7(var_0_bool, var_1_bool, var_2_int, var_3_bool, var_4_object)
{
	var_5_int = 0;
	var_4_object = var_5_int;
	func_659(var_5_int);
	var_9_bool = var_4_object == (int)20;
	if(var_9_bool != 0) {
		var_10_bool = 0; var_11_object = Obj();
		func_448(Obj());
		var_12_object = var_11_object;
		func_666(var_10_bool, var_11_object);
		if(var_10_bool != 0) {
			func_184(var_3_bool, var_4_object);
		}
	}
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object)
{
	var_5_bool = 0; var_6_object = Obj();
	var_4_object = var_6_object;
	func_638(var_5_bool, var_6_object);
	if(var_5_bool != 0) {
		func_184(var_3_bool, var_4_object);
		var_44_object = Obj();
		var_4_object = var_44_object;
		func_651(var_44_object);
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
	func_184(var_3_bool, var_4_object);
	var_4_object = Obj();
	func_695();
	return 0;
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int)
{
	var_5_int = 0;
	var_4_int = var_5_int;
	func_659(var_5_int);
	var_8_int = 0;
	var_4_int = var_8_int;
	func_372(var_3_object, var_4_int, var_8_int);
	var_63_bool = var_4_int == (int)20;
	if(var_63_bool != 0) {
		var_64_bool = 0; var_65_object = Obj();
		func_448(Obj());
		var_66_object = var_65_object;
		func_666(var_64_bool, var_65_object);
		var_70_bool = var_64_bool == 0; //@nz
		if(var_70_bool != 0) {
			func_394(var_4_int);
		}
	}
	return 0;
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	var_5_bool = 0; var_6_object = Obj();
	var_4_object = var_6_object;
	func_638(var_5_bool, var_6_object);
	if(var_5_bool != 0) {
		func_394(var_4_object);
		var_45_object = Obj();
		var_4_object = var_45_object;
		func_651(var_45_object);
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
	func_394(var_4_object);
	var_4_object = Obj();
	func_695();
	return 0;
}


task_4_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	var_5_bool = 0; var_6_object = Obj();
	var_4_object = var_6_object;
	func_638(var_5_bool, var_6_object);
	if(var_5_bool != 0) {
		var_44_object = Obj();
		var_4_object = var_44_object;
		func_651(var_44_object);
	}
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int)
{
	var_5_int = 0;
	var_4_int = var_5_int;
	func_659(var_5_int);
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
	func_202();
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
	func_593(var_59_bool, var_60_object);
	if(var_59_bool != 0) {
		var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
		func_438(CVector(0,0,0));
		var_64_cvector = var_62_cvector;
		var_67_cvector = CVector(0,0,0); var_68_object = Obj();
		var_45_object = var_68_object;
		func_443(var_67_cvector, var_68_object);
		var_67_cvector = var_63_cvector;
		func_623(var_61_float, var_62_cvector, var_63_cvector);
		var_74_bool = var_61_float <= (float)90000.0;
		if(var_74_bool != 0) {
			PlaySound("attack");
			var_76_float = 0; var_77_object = Obj(); var_78_float = 0;
			var_45_object = var_77_object;
			func_489(var_76_float, var_77_object, (float)0.20000000298023224);
			var_76_float = var_53_float;
			ReportHit(var_45_object, (int)5, var_53_float, (float)0.20000000298023224);
		}
	}
	SetVisirVisibility((bool)0);
	FogLinear((int)0, (int)2);
	Sleep((int)5);
	var_132_object = Obj();
	func_617(var_132_object);
	RemoveActor(var_132_object);
	return 8;
}


func_263(var_114_bool, var_115_object)
{
	var_116_bool = 0; var_117_object = Obj();
	var_115_object = var_117_object;
	func_666(var_116_bool, var_117_object);
	var_116_bool = var_114_bool;
	return 0;
}


func_394(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_651(var_44_object)
{
	var_45_object = Obj();
	var_44_object = var_45_object;
	TaskCall(0);
	func_0(var_45_object);
	TaskReturn();
	return 0;
}


func_270(var_0_bool, var_1_bool, var_92_bool, var_93_object, var_94_float, var_95_float, var_96_bool, var_97_bool)
{
	var_98_bool = 0; var_99_bool = 0; var_100_object = Obj(); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_float = 0; var_105_object = Obj(); var_106_bool = 0; var_107_bool = 0; var_108_object = Obj(); var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_float = 0; var_113_object = Obj();
	var_0_bool = false;
	var_1_bool = var_93_object;
	var_97_bool = var_107_bool;
	
Label_274:
	var_114_bool = 0; var_115_object = Obj();
	var_93_object = var_115_object;
	func_263(var_114_bool, var_115_object);
	var_118_bool = var_114_bool == 0; //@nz
	if(var_118_bool != 0) {
		var_92_bool = 0;
		return 16;
	}
	@@var_93_object:GetPosition(var_109_cvector);
	GetPosition(var_110_cvector);
	var_111_cvector = var_109_cvector - var_110_cvector;
	var_112_float = var_111_cvector | var_111_cvector;
	var_119_bool = 0;
	var_119_bool = 0;
	var_121_bool = var_95_float > (int)0;
	if(var_121_bool != 0) {
		var_122_float = var_95_float * var_95_float;
		var_123_bool = var_112_float > var_122_float;
		if(var_123_bool != 0) {
			var_119_bool = 1;
		}
	}
	if(var_119_bool != 0) {
		Stop();
		var_92_bool = 0;
		return 16;
	}
	var_124_float = var_94_float * var_94_float;
	var_125_bool = var_112_float > var_124_float;
	if(var_125_bool != 0) {
		@@var_93_object:GetPFPosition(var_109_cvector);
		FindPathTo(var_113_object, var_109_cvector);
		var_126_bool = var_113_object != 0; //@nn
		if(var_126_bool != 0) {
			var_113_object = var_108_object;
			var_113_object = 0;
		}
		var_127_bool = var_108_object != 0; //@nn
		if(var_127_bool != 0) {
			var_128_bool = var_107_bool;
			if(var_128_bool == 0) goto Label_323;
			var_107_bool = 0;
			RotatePath(var_108_object, var_106_bool);
			var_129_bool = var_106_bool == 0; //@nz
			if(var_129_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_132_string = "";
				func_410(var_132_string);
				var_133_string = "";
				func_412(var_133_string);
				FollowPath(var_108_object, var_96_bool, var_106_bool, var_132_string, var_133_string);
				var_134_bool = var_106_bool == 0; //@nz
				if(var_134_bool != 0) {
					var_135_bool = var_0_bool;
					if(var_135_bool != 0) {
						var_108_object = 0;
						goto Label_370;
					EMIT "GOTO 0x157";
					}
				} else {
					var_108_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_106_bool);
					var_138_bool = var_106_bool == 0; //@nz
					if(var_138_bool != 0) {
						var_139_bool = var_0_bool;
						if(var_139_bool != 0) {
							var_108_object = 0;
							goto Label_370;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_370;
	}
			var_113_object = 0;
			goto Label_368;

		Label_368:
			var_108_object = 0;

		}
		goto Label_274;
	}
Label_370:
	var_92_bool = !var_0_bool;
	return 16;
	
}


func_659(var_5_int)
{
	var_7_bool = var_5_int == (int)20;
	if(var_7_bool != 0) {
		ResetAAS();
	}
	return 0;
}


func_666(var_44_bool, var_45_object)
{
	var_46_object = Obj(); var_47_int = 0; var_48_object = Obj(); var_49_int = 0;
	var_50_bool = 0; var_51_object = Obj();
	var_45_object = var_51_object;
	func_593(var_50_bool, var_51_object);
	var_84_bool = var_50_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_44_bool = 0;
		return 4;
	}
	GetActiveScene(var_48_object);
	var_85_bool = 0;
	var_85_bool = 0;
	var_86_bool = var_48_object != 0; //@nn
	if(var_86_bool != 0) {
		var_89_bool = IsFuncExist(var_48_object, "GetCurrentRegion", (int)1);
		if(var_89_bool != 0) {
			var_85_bool = 1;
		}
	}
	if(var_85_bool != 0) {
		@@var_48_object:GetCurrentRegion(var_49_int);
		var_90_int = GlobalVars[0];
		var_44_bool = var_49_int == var_90_int;
		return 4;
	}
	var_44_bool = 0;
	return 4;
}
EMIT "Stack[-2] = 0";


func_410(var_132_string)
{
	var_132_string = "walk";
	return 0;
}


func_412(var_133_string)
{
	var_133_string = "run";
	return 0;
}


func_414()
{
	var_31_float = 0; var_32_float = 0;
	rand(var_32_float, (int)30);
	Sleep(var_32_float);
	return 2;
}


func_552(var_65_bool, var_66_object)
{
	var_67_bool = 0; var_68_bool = 0;
	@@var_66_object:IsDead(var_68_bool);
	var_68_bool = var_65_bool;
	return 2;
}


func_557(var_54_bool, var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); var_59_object = Obj();
	var_60_bool = var_55_object == 0; //@ne
	if(var_60_bool != 0) {
		var_54_bool = 0;
		return 4;
	}
	var_61_bool = 0;
	var_61_bool = 0;
	var_64_bool = IsFuncExist(var_55_object, "IsDead", (int)1);
	if(var_64_bool != 0) {
		var_65_bool = 0; var_66_object = Obj();
		var_55_object = var_66_object;
		func_552(var_65_bool, var_66_object);
		if(var_65_bool != 0) {
			var_61_bool = 1;
		}
	}
	if(var_61_bool != 0) {
		var_54_bool = 0;
		return 4;
	}
	GetScene(var_58_object);
	var_69_bool = var_58_object == 0; //@ne
	if(var_69_bool != 0) {
		var_54_bool = 0;
		return 4;
	}
	@@var_55_object:GetScene(var_59_object);
	var_70_bool = var_58_object != var_59_object;
	if(var_70_bool != 0) {
		var_54_bool = 0;
		return 4;
	}
	var_54_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_438(var_64_cvector)
{
	var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
	GetPosition(var_66_cvector);
	var_66_cvector = var_64_cvector;
	return 2;
}


func_184(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_443(var_67_cvector, var_68_object)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	@@var_68_object:GetPosition(var_70_cvector);
	var_70_cvector = var_67_cvector;
	return 2;
}


func_448(var_40_object)
{
	var_41_object = Obj(); var_42_object = Obj();
	FindActor(var_42_object, "player");
	var_42_object = var_40_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_455(var_72_bool, var_73_object, var_74_string)
{
	var_75_bool = 0; var_76_bool = 0;
	var_79_bool = IsFuncExist(var_73_object, "HasProperty", (int)2);
	var_80_bool = var_79_bool == 0; //@nz
	if(var_80_bool != 0) {
		var_72_bool = 0;
		return 2;
	}
	@@var_73_object:HasProperty(var_74_string, var_76_bool);
	var_76_bool = var_72_bool;
	return 2;
}


func_200(var_29_bool)
{
	var_29_bool = 0;
	return 0;
}


func_202()
{
	var_38_object = Obj(); var_39_object = Obj();
	func_448(Obj());
	var_40_object = var_39_object;
	var_44_bool = 0; var_45_object = Obj();
	var_39_object = var_45_object;
	func_666(var_44_bool, var_45_object);
	var_91_bool = var_44_bool == 0; //@nz
	if(var_91_bool != 0) {
		return 2;
	}
	var_92_bool = 0; var_93_object = Obj(); var_94_float = 0; var_95_float = 0; var_96_bool = 0; var_97_bool = 0;
	var_39_object = var_93_object;
	func_270(var_38_object, var_39_object, var_92_bool, var_93_object, (float)100, (float)0, (bool)0, (bool)0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_593(var_50_bool, var_51_object)
{
	var_52_int = 0; var_53_int = 0;
	var_54_bool = 0; var_55_object = Obj();
	var_51_object = var_55_object;
	func_557(var_54_bool, var_55_object);
	var_71_bool = var_54_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_50_bool = 0;
		return 2;
	}
	var_72_bool = 0; var_73_object = Obj(); var_74_string = "";
	var_51_object = var_73_object;
	func_455(var_72_bool, var_73_object, "noaccess");
	var_81_bool = var_72_bool == 0; //@nz
	if(var_81_bool != 0) {
		var_50_bool = 1;
		return 2;
	}
	@@var_51_object:GetProperty("noaccess", var_53_int);
	var_50_bool = var_53_int == (int)0;
	return 2;
}


func_467(var_106_bool, var_107_object, var_108_string, var_109_float, var_110_float, var_111_float)
{
	var_112_float = 0; var_113_float = 0;
	var_114_bool = 0; var_115_object = Obj(); var_116_string = "";
	var_107_object = var_115_object;
	var_108_string = var_116_string;
	func_455(var_114_bool, var_115_object, var_116_string);
	var_117_bool = var_114_bool == 0; //@nz
	if(var_117_bool != 0) {
		var_106_bool = 0;
		return 2;
	}
	@@var_107_object:GetProperty(var_108_string, var_113_float);
	var_118_float = 0; var_119_float = 0; var_120_float = 0; var_121_float = 0;
	var_119_float = var_113_float + var_109_float;
	var_110_float = var_120_float;
	var_111_float = var_121_float;
	func_627(var_118_float, var_119_float, var_120_float, var_121_float);
	@@var_107_object:SetProperty(var_108_string, var_118_float);
	var_106_bool = 1;
	return 2;
}


func_489(var_76_float, var_77_object, var_78_float)
{
	var_79_int = 0; var_80_float = 0; var_81_float = 0; var_82_int = 0; var_83_float = 0; var_84_float = 0;
	var_85_bool = 0; var_86_object = Obj(); var_87_string = "";
	var_77_object = var_86_object;
	func_455(var_85_bool, var_86_object, "disease");
	var_88_bool = var_85_bool == 0; //@nz
	if(var_88_bool != 0) {
		var_76_float = 0;
		return 6;
	}
	var_89_bool = 0; var_90_object = Obj(); var_91_string = "";
	var_77_object = var_90_object;
	func_455(var_89_bool, var_90_object, "armor_disease");
	if(var_89_bool != 0) {
		@@var_77_object:GetProperty("armor_disease", var_82_int);
		var_94_bool = var_82_int < (int)100;
		if(var_94_bool != 0) {
			var_97_float = var_82_int / (float)100.0;
			var_98_int = (int)1 - var_97_float;
			var_78_float = var_78_float * var_98_int;
		} else {
					var_76_float = 0;
					return 6;
		}
	}
	var_99_bool = 0; var_100_object = Obj(); var_101_string = "";
	var_77_object = var_100_object;
	func_455(var_99_bool, var_100_object, "immunity");
	if(var_99_bool != 0) {
		@@var_77_object:GetProperty("immunity", var_84_float);
		var_103_bool = var_84_float < var_78_float;
		if(var_103_bool != 0) {
			@@var_77_object:SetProperty("immunity", (int)0);
			var_83_float = var_78_float - var_84_float;
		} else {
			var_125_int = var_84_float - var_78_float;
			@@var_77_object:SetProperty("immunity", var_125_int);
			var_78_float = var_76_float;
			return 6;

		}
	}
	var_106_bool = 0; var_107_object = Obj(); var_108_string = ""; var_109_float = 0; var_110_float = 0; var_111_float = 0;
	var_77_object = var_107_object;
	var_83_float = var_109_float;
	func_467(var_106_bool, var_107_object, "disease", var_109_float, (float)0, (float)1);
	var_78_float = var_76_float;
	return 6;
	
}


func_617(var_132_object)
{
	var_133_object = Obj(); var_134_object = Obj();
	self(var_134_object);
	var_134_object = var_132_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_623(var_61_float, var_62_cvector, var_63_cvector)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	var_72_cvector = var_63_cvector - var_62_cvector;
	var_61_float = var_72_cvector | var_72_cvector;
	return 2;
}


func_627(var_118_float, var_119_float, var_120_float, var_121_float)
{
	var_122_bool = var_119_float < var_120_float;
	if(var_122_bool != 0) {
		var_120_float = var_118_float;
		return 0;
	}
	var_123_bool = var_119_float > var_121_float;
	if(var_123_bool != 0) {
		var_121_float = var_118_float;
		return 0;
	}
	var_119_float = var_118_float;
	return 0;
}


func_372(var_0_bool, var_1_bool, var_8_int)
{
	var_10_bool = var_8_int != (int)0;
	if(var_10_bool != 0) {
		return 0;
	}
	var_11_bool = 0; var_12_object = Obj();
	var_12_object = var_1_bool;
	func_263(var_11_bool, var_12_object);
	var_60_bool = var_11_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_120(var_0_bool, var_1_bool)
{
	var_8_float = 0; var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_float = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_bool = 0; var_20_object = Obj(); var_21_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_15_float, (float)0.5);
	Sleep(var_15_float);
	
Label_128:
	var_23_bool = var_0_bool == 0; //@nz
	if(var_23_bool != 0) {
		var_24_bool = var_1_bool == 0; //@nz
		if(var_24_bool != 0) {

		Label_132:
			GetPosition(var_17_cvector);
			GetCameraFarDistance(var_18_float);
			var_18_float = var_18_float * (float)2.5;
			GetRandomPFPointInCircle(var_16_cvector, var_17_cvector, var_18_float, var_19_bool);
			var_26_bool = var_19_bool;
			if(var_26_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_132;
		}
				var_1_bool = false;
	}
			return 14;
	}
	goto Label_149;
	
Label_149:
	FindShiftedPathTo(var_20_object, var_16_cvector);
	var_27_bool = var_20_object != 0; //@nn
	if(var_27_bool != 0) {
		RotatePath(var_20_object, var_21_bool);
		var_28_bool = var_21_bool;
		if(var_28_bool != 0) {
			var_29_bool = 0;
			func_200(var_29_bool);
			FollowPath(var_20_object, var_29_bool, var_21_bool);
			var_20_object = 0;
			var_30_bool = var_21_bool;
			if(var_30_bool != 0) {
				TaskCall(4);
				func_414();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_20_object = 0;
	goto Label_128;
	
}


func_638(var_5_bool, var_6_object)
{
	var_7_bool = 0; var_8_bool = 0;
	IsPlayerActor(var_6_object, var_8_bool);
	var_5_bool = 0;
	var_9_bool = var_8_bool;
	if(var_9_bool != 0) {
		var_10_bool = 0; var_11_object = Obj();
		var_6_object = var_11_object;
		func_593(var_10_bool, var_11_object);
		if(var_10_bool != 0) {
			var_5_bool = 1;
		}
	}
	return 2;
}


