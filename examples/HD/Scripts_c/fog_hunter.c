// @IMPORTS: Trace/1,FogLinear/2,GetPosition/1,MovePoint/2,Sleep/1,KillTimer/1,SetTimer/2,RemoveActor/1,GetHeight/1,PlayGlobalSound/2,PlaySound/1,ReportHit/4,SetVisirVisibility/1,PutOnGrid/0,rand/2,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,Stop/0,StopGroup0/0,FindShiftedPathTo/2,FindPathTo/2,FollowPath/5,Sleep/2,FindActor/2,IsPlayerActor/2,GetScene/1,self/1,CreateFloatVector/1,SendWorldWndMessage/2,ResetAAS/0,GetActiveScene/1
// @STRINGS: W:TFogAttack|A:GetPFPosition|W:Watching|W:Leaving|W:Attacking|W:breath|W:attack|W:fog hunter inited|W:fog hunter following|A:GetPosition|W:walk|W:run|W:fog hunter idling|W:player|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:disease|W:armor_disease|W:immunity|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:add|W:GetCurrentRegion|A:GetCurrentRegion
// @GLOBALS: 0:int:Region
// @RUN_OP: 0xd8
// @RUN_TASK: 1
// @TASK_0: vars=object,bool,cvector,cvector params=1
// @EVENT_7: op=0xc1 vars=int
// @TASK_1: vars= params=0
// @TASK_2: vars=bool,bool params=0
// @EVENT_7: op=0xed vars=int
// @EVENT_1: op=0x101 vars=object
// @EVENT_3: op=0x10f vars=object
// @EVENT_10: op=0x15d vars=object
// @EVENT_28: op=0x161 vars=
// @EVENT_41: op=0x16b vars=object
// @TASK_3: vars=bool,object params=0
// @EVENT_7: op=0x195 vars=int
// @EVENT_1: op=0x1ae vars=object
// @EVENT_3: op=0x1bc vars=object
// @EVENT_10: op=0x249 vars=object
// @EVENT_41: op=0x254 vars=object
// @TASK_4: vars= params=0
// @EVENT_7: op=0x283 vars=int
// @STANDALONE_EVENT_41: op=0x3d5 vars=object
// @PE: 0xc1,0xed,0x101,0x10f,0x15d,0x16b,0x195,0x1ae,0x1bc,0x1ca,0x237,0x249,0x254,0x283,0x368,0x397,0x39f,0x3a7,0x3d5

task_0_event_7(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_int, var_5_bool, var_6_bool, var_7_bool, var_8_object)
{
	var_10_bool = (int)21 == var_8_object;
	if(var_10_bool != 0) {
		var_3_cvector = var_2_cvector;
		var_11_float = GetByIndex(var_3_cvector, 1);
		SetByIndex(var_3_cvector, 1) = (float)0;
		@@@var_0_object:GetPFPosition(var_2_cvector);
		var_12_float = GetByIndex(var_2_cvector, 1);
		SetByIndex(var_2_cvector, 1) = (float)0;
		var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0);
		var_14_cvector = var_2_cvector;
		var_15_cvector = var_3_cvector;
		func_863(var_13_float, var_14_cvector, var_15_cvector);
		var_20_bool = var_13_float > (float)220.0;
		if(var_20_bool != 0) {
			var_1_bool = true;
		}
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_int, var_7_bool, var_8_object)
{
	var_9_int = 0;
	var_8_object = var_9_int;
	func_935(var_9_int);
	var_13_bool = var_8_object == (int)20;
	if(var_13_bool != 0) {
		var_14_bool = 0; var_15_object = Obj();
		func_667(Obj());
		var_16_object = var_15_object;
		func_942(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_356(var_7_bool, var_8_object);
		}
	}
	return 0;
}


task_2_event_1(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_893(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_356(var_7_bool, var_8_object);
		var_48_object = Obj();
		var_8_object = var_48_object;
		func_919(var_48_object);
	}
	return 0;
}


task_2_event_3(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_906(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_356(var_7_bool, var_8_object);
		var_48_object = Obj();
		var_8_object = var_48_object;
		func_927(var_48_object);
	}
	return 0;
}


task_2_event_10(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_object)
{
	RequestClearPath(var_8_object);
	return 0;
}


task_2_event_28(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	Stop();
	return 0;
}


task_2_event_41(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_object)
{
	func_356(var_7_bool, var_8_object);
	var_8_object = Obj();
	func_981();
	return 0;
}


task_3_event_7(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int)
{
	var_9_int = 0;
	var_8_int = var_9_int;
	func_935(var_9_int);
	var_12_int = 0;
	var_8_int = var_12_int;
	func_567(var_7_object, var_8_int, var_12_int);
	var_78_bool = var_8_int == (int)20;
	if(var_78_bool != 0) {
		var_79_bool = 0; var_80_object = Obj();
		func_667(Obj());
		var_81_object = var_80_object;
		func_942(var_79_bool, var_80_object);
		var_85_bool = var_79_bool == 0; //@nz
		if(var_85_bool != 0) {
			func_589(var_8_int);
		}
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_893(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_589(var_8_object);
		var_49_object = Obj();
		var_8_object = var_49_object;
		func_919(var_49_object);
	}
	return 0;
}


task_3_event_3(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_906(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_589(var_8_object);
		var_49_object = Obj();
		var_8_object = var_49_object;
		func_927(var_49_object);
	}
	return 0;
}


task_3_event_10(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	RequestClearPath(var_8_object);
	return 0;
}


task_3_event_41(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	func_589(var_8_object);
	var_8_object = Obj();
	func_981();
	return 0;
}


task_4_event_7(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int)
{
	var_9_int = 0;
	var_8_int = var_9_int;
	func_935(var_9_int);
	return 0;
}


event_41(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	return 0;
}


main(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	Trace("fog hunter inited");
	PutOnGrid();
	SetTimer((int)20, (int)1);
	
Label_225:
	TaskCall(2);
	func_285(var_11_bool, var_12_bool);
	TaskReturn();
	TaskCall(3);
	func_380();
	TaskReturn();
	goto Label_225;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_2_cvector, var_50_object)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_float = 0; var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_float = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_float = 0; var_72_float = 0; var_73_bool = 0; var_74_cvector = CVector(0,0,0); var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_float = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_float = 0;
	var_0_object = var_50_object;
	Trace("TFogAttack");
	FogLinear((float)0.800000011920929, (float)2.0);
	GetPosition(var_69_cvector);
	@@var_50_object:GetPFPosition(var_70_cvector);
	var_73_bool = 1;
	
Label_15:
	if((bool)1 != 0) {
		Trace("Watching");
		@@var_50_object:GetPFPosition(var_70_cvector);
		GetPosition(var_74_cvector);
		var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0);
		var_74_cvector = var_89_cvector;
		var_70_cvector = var_90_cvector;
		func_868(var_88_float, var_89_cvector, var_90_cvector);
		var_88_float = var_75_float;
		var_94_bool = var_75_float > (float)160000.0;
		if(var_94_bool != 0) {
			var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0);
			var_96_cvector = var_70_cvector - var_74_cvector;
			func_853(var_95_cvector, var_96_cvector);
			var_95_cvector = var_77_cvector;
			var_102_float = sqrt(var_75_float);
			var_78_float = var_102_float - (float)360.0;
			var_104_float = var_77_cvector * var_78_float;
			var_76_cvector = var_74_cvector + var_104_float;
			var_105_bool = var_73_bool;
			if(var_105_bool != 0) {
				MovePoint(var_76_cvector, (int)700);
				var_72_float = var_78_float / (float)700.0;
			} else {
					MovePoint(var_76_cvector, (int)220);
					var_72_float = var_78_float / (float)100.0;
		}
				Sleep((float)1.0);
				var_72_float = 1.0;
		}
	} else {
			KillTimer((int)21);
			Trace("Attacking");
			FogLinear((int)1, (float)0.5);
			GetHeight(var_79_float);
			var_80_cvector = CVector(0.0, 0.0, 0.0);
			var_135_float = GetByIndex(var_80_cvector, 1);
			var_79_float = var_135_float;
			SetByIndex(var_80_cvector, 1) = var_135_float;
			PlayGlobalSound("breath", var_80_cvector);
			@@var_50_object:GetPFPosition(var_81_cvector);
			MovePoint(var_81_cvector, (int)500);
			var_138_bool = 0; var_139_object = Obj();
			var_50_object = var_139_object;
			func_823(var_138_bool, var_139_object);
			if(var_138_bool != 0) {
				var_140_float = 0; var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0);
				func_649(CVector(0,0,0));
				var_143_cvector = var_141_cvector;
				var_146_cvector = CVector(0,0,0); var_147_object = Obj();
				var_50_object = var_147_object;
				func_654(var_146_cvector, var_147_object);
				var_146_cvector = var_142_cvector;
				func_868(var_140_float, var_141_cvector, var_142_cvector);
				var_151_bool = var_140_float <= (float)90000.0;
				if(var_151_bool != 0) {
					PlaySound("attack");
					var_153_float = 0; var_154_object = Obj(); var_155_float = 0;
					var_50_object = var_154_object;
					func_713(var_153_float, var_154_object, (float)0.20000000298023224);
					var_153_float = var_82_float;
					ReportHit(var_50_object, (int)5, var_82_float, (float)0.20000000298023224);
				}
			}
			SetVisirVisibility((bool)0);
			FogLinear((int)0, (int)1);
			Sleep((int)5);
			var_217_object = Obj();
			func_847(var_217_object);
			RemoveActor(var_217_object);
			return 28;
	}
	var_108_bool = 0; var_109_object = Obj();
	var_50_object = var_109_object;
	func_823(var_108_bool, var_109_object);
	var_110_bool = var_108_bool == 0; //@nz
	if(var_110_bool != 0) {
		var_111_bool = var_73_bool == 0; //@nz
		if(var_111_bool != 0) {
			KillTimer((int)21);
		}
		FogLinear((int)0, (float)0.5);
		Sleep((float)0.5);
		return 28;
	}
	var_116_bool = var_73_bool;
	if(var_116_bool != 0) {
		var_73_bool = 0;
		@@var_50_object:GetPFPosition(var_2_cvector);
		SetTimer((int)21, (int)1);
	} else {
		var_130_bool = var_1_bool;
		if(var_130_bool != 0) {
		} else {
		(float)0 = (float)0 + var_72_float;
		var_120_bool = var_71_float >= (float)12.0;
		if(var_120_bool != 0) {
			Trace("Leaving");
			KillTimer((int)21);
			FogLinear((int)0, (float)1.0);
			MovePoint(var_69_cvector, (int)900);
			Sleep((int)5);
			var_127_object = Obj();
			func_847(var_127_object);
			RemoveActor(var_127_object);
			goto Label_15;
		}
		return 28;
		}
	}
}


func_649(var_143_cvector)
{
	var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0);
	GetPosition(var_145_cvector);
	var_145_cvector = var_143_cvector;
	return 2;
}


func_906(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsPlayerActor(var_10_object, var_12_bool);
	var_9_bool = 0;
	var_13_bool = var_12_bool;
	if(var_13_bool != 0) {
		var_14_bool = 0; var_15_object = Obj();
		var_10_object = var_15_object;
		func_823(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			var_9_bool = 1;
		}
	}
	return 2;
}


func_654(var_146_cvector, var_147_object)
{
	var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0);
	@@var_147_object:GetPosition(var_149_cvector);
	var_149_cvector = var_146_cvector;
	return 2;
}


func_782(var_91_bool, var_92_object)
{
	var_93_bool = 0; var_94_bool = 0;
	@@var_92_object:IsDead(var_94_bool);
	var_94_bool = var_91_bool;
	return 2;
}


func_787(var_80_bool, var_81_object)
{
	var_82_object = Obj(); var_83_object = Obj(); var_84_object = Obj(); var_85_object = Obj();
	var_86_bool = var_81_object == 0; //@ne
	if(var_86_bool != 0) {
		var_80_bool = 0;
		return 4;
	}
	var_87_bool = 0;
	var_87_bool = 0;
	var_90_bool = IsFuncExist(var_81_object, "IsDead", (int)1);
	if(var_90_bool != 0) {
		var_91_bool = 0; var_92_object = Obj();
		var_81_object = var_92_object;
		func_782(var_91_bool, var_92_object);
		if(var_91_bool != 0) {
			var_87_bool = 1;
		}
	}
	if(var_87_bool != 0) {
		var_80_bool = 0;
		return 4;
	}
	GetScene(var_84_object);
	var_95_bool = var_84_object == 0; //@ne
	if(var_95_bool != 0) {
		var_80_bool = 0;
		return 4;
	}
	@@var_81_object:GetScene(var_85_object);
	var_96_bool = var_84_object != var_85_object;
	if(var_96_bool != 0) {
		var_80_bool = 0;
		return 4;
	}
	var_80_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_659(var_118_float, var_119_object)
{
	var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0);
	GetPosition(var_123_cvector);
	@@var_119_object:GetPosition(var_124_cvector);
	var_125_cvector = var_124_cvector - var_123_cvector;
	var_118_float = var_125_cvector | var_125_cvector;
	return 6;
}


func_919(var_49_object)
{
	var_50_object = Obj();
	var_49_object = var_50_object;
	TaskCall(0);
	func_0(var_53_cvector, var_54_cvector, var_50_object);
	TaskReturn();
	return 0;
}


func_667(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj();
	FindActor(var_68_object, "player");
	var_68_object = var_66_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_285(var_0_object, var_1_bool)
{
	var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_bool = 0; var_17_object = Obj(); var_18_bool = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0;
	var_0_object = false;
	var_1_bool = false;
	rand(var_19_float, (float)0.5);
	Sleep(var_19_float);
	
Label_293:
	var_26_bool = var_0_object == 0; //@nz
	if(var_26_bool != 0) {
		var_27_bool = var_1_bool == 0; //@nz
		if(var_27_bool != 0) {

		Label_297:
			GetPosition(var_21_cvector);
			var_28_float = 0;
			func_344(var_28_float);
			GetRandomPFPointInCircle(var_20_cvector, var_21_cvector, var_28_float, var_22_bool);
			var_31_bool = var_22_bool;
			if(var_31_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_297;
		}
				var_1_bool = false;
	}
			return 12;
	}
	goto Label_313;
	
Label_313:
	var_32_object = Obj(); var_33_cvector = CVector(0,0,0);
	var_20_cvector = var_33_cvector;
	func_374(var_32_object, var_33_cvector);
	var_32_object = var_23_object;
	var_36_bool = var_23_object != 0; //@nn
	if(var_36_bool != 0) {
		RotatePath(var_23_object, var_24_bool);
		var_37_bool = var_24_bool;
		if(var_37_bool != 0) {
			var_38_bool = 0;
			func_372(var_38_bool);
			FollowPath(var_23_object, var_38_bool, var_24_bool);
			var_23_object = 0;
			var_39_bool = var_24_bool;
			if(var_39_bool != 0) {
				TaskCall(4);
				func_609();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_23_object = 0;
	goto Label_293;
	
}


func_927(var_49_object)
{
	var_50_object = Obj();
	var_49_object = var_50_object;
	TaskCall(0);
	func_0(var_53_cvector, var_54_cvector, var_50_object);
	TaskReturn();
	return 0;
}


func_674(var_203_bool, var_204_object)
{
	var_205_bool = 0; var_206_bool = 0;
	IsPlayerActor(var_204_object, var_206_bool);
	var_206_bool = var_203_bool;
	return 2;
}


func_935(var_9_int)
{
	var_11_bool = var_9_int == (int)20;
	if(var_11_bool != 0) {
		ResetAAS();
	}
	return 0;
}


func_679(var_98_bool, var_99_object, var_100_string)
{
	var_101_bool = 0; var_102_bool = 0;
	var_105_bool = IsFuncExist(var_99_object, "HasProperty", (int)2);
	var_106_bool = var_105_bool == 0; //@nz
	if(var_106_bool != 0) {
		var_98_bool = 0;
		return 2;
	}
	@@var_99_object:HasProperty(var_100_string, var_102_bool);
	var_102_bool = var_98_bool;
	return 2;
}


func_942(var_70_bool, var_71_object)
{
	var_72_object = Obj(); var_73_int = 0; var_74_object = Obj(); var_75_int = 0;
	var_76_bool = 0; var_77_object = Obj();
	var_71_object = var_77_object;
	func_823(var_76_bool, var_77_object);
	var_110_bool = var_76_bool == 0; //@nz
	if(var_110_bool != 0) {
		var_70_bool = 0;
		return 4;
	}
	GetActiveScene(var_74_object);
	var_111_bool = 0;
	var_111_bool = 0;
	var_112_bool = var_74_object != 0; //@nn
	if(var_112_bool != 0) {
		var_115_bool = IsFuncExist(var_74_object, "GetCurrentRegion", (int)1);
		if(var_115_bool != 0) {
			var_111_bool = 1;
		}
	}
	if(var_111_bool != 0) {
		@@var_74_object:GetCurrentRegion(var_75_int);
		var_70_bool = 0;
		var_116_int = GlobalVars[0];
		var_117_bool = var_75_int == var_116_int;
		if(var_117_bool != 0) {
			var_118_float = 0; var_119_object = Obj();
			var_71_object = var_119_object;
			func_659(var_118_float, var_119_object);
			var_127_bool = var_118_float < (int)4000000;
			if(var_127_bool != 0) {
				var_70_bool = 1;
			}
		}
		return 4;
	}
	var_70_bool = 0;
	return 4;
}
EMIT "Stack[-2] = 0";


func_691(var_173_bool, var_174_object, var_175_string, var_176_float, var_177_float, var_178_float)
{
	var_179_float = 0; var_180_float = 0;
	var_181_bool = 0; var_182_object = Obj(); var_183_string = "";
	var_174_object = var_182_object;
	var_175_string = var_183_string;
	func_679(var_181_bool, var_182_object, var_183_string);
	var_184_bool = var_181_bool == 0; //@nz
	if(var_184_bool != 0) {
		var_173_bool = 0;
		return 2;
	}
	@@var_174_object:GetProperty(var_175_string, var_180_float);
	var_185_float = 0; var_186_float = 0; var_187_float = 0; var_188_float = 0;
	var_186_float = var_180_float + var_176_float;
	var_177_float = var_187_float;
	var_178_float = var_188_float;
	func_872(var_185_float, var_186_float, var_187_float, var_188_float);
	@@var_174_object:SetProperty(var_175_string, var_185_float);
	var_173_bool = 1;
	return 2;
}


func_567(var_0_object, var_1_bool, var_12_int)
{
	var_14_bool = var_12_int != (int)0;
	if(var_14_bool != 0) {
		return 0;
	}
	var_15_bool = 0; var_16_object = Obj();
	var_16_object = var_1_bool;
	func_458(var_15_bool, var_16_object);
	var_75_bool = var_15_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_823(var_76_bool, var_77_object)
{
	var_78_int = 0; var_79_int = 0;
	var_80_bool = 0; var_81_object = Obj();
	var_77_object = var_81_object;
	func_787(var_80_bool, var_81_object);
	var_97_bool = var_80_bool == 0; //@nz
	if(var_97_bool != 0) {
		var_76_bool = 0;
		return 2;
	}
	var_98_bool = 0; var_99_object = Obj(); var_100_string = "";
	var_77_object = var_99_object;
	func_679(var_98_bool, var_99_object, "noaccess");
	var_107_bool = var_98_bool == 0; //@nz
	if(var_107_bool != 0) {
		var_76_bool = 1;
		return 2;
	}
	@@var_77_object:GetProperty("noaccess", var_79_int);
	var_76_bool = var_79_int == (int)0;
	return 2;
}


func_713(var_153_float, var_154_object, var_155_float)
{
	var_156_float = 0; var_157_float = 0; var_158_float = 0; var_159_float = 0;
	var_160_bool = 0; var_161_object = Obj(); var_162_string = "";
	var_154_object = var_161_object;
	func_679(var_160_bool, var_161_object, "disease");
	var_163_bool = var_160_bool == 0; //@nz
	if(var_163_bool != 0) {
		var_153_float = 0;
		return 4;
	}
	var_158_float = 0;
	var_164_bool = 0; var_165_object = Obj(); var_166_string = "";
	var_154_object = var_165_object;
	func_679(var_164_bool, var_165_object, "armor_disease");
	if(var_164_bool != 0) {
		@@var_154_object:GetProperty("armor_disease", var_158_float);
		var_158_float = var_158_float / (int)100;
	}
	var_169_bool = 0; var_170_object = Obj(); var_171_string = "";
	var_154_object = var_170_object;
	func_679(var_169_bool, var_170_object, "immunity");
	if(var_169_bool != 0) {
		@@var_154_object:GetProperty("immunity", var_159_float);
		var_158_float = var_158_float + var_159_float;
		var_173_bool = 0; var_174_object = Obj(); var_175_string = ""; var_176_float = 0; var_177_float = 0; var_178_float = 0;
		var_154_object = var_174_object;
		var_176_float = -var_155_float;
		func_691(var_173_bool, var_174_object, "immunity", var_176_float, (float)0, (float)1);
	}
	var_192_bool = var_158_float >= (int)1;
	if(var_192_bool != 0) {
		var_153_float = 0.0;
		return 4;
	}
	var_194_int = (int)1 - var_158_float;
	var_196_float = var_194_int / (int)2;
	var_155_float = var_155_float * var_196_float;
	var_197_bool = 0; var_198_object = Obj(); var_199_string = ""; var_200_float = 0; var_201_float = 0; var_202_float = 0;
	var_154_object = var_198_object;
	var_155_float = var_200_float;
	func_691(var_197_bool, var_198_object, "disease", var_200_float, (float)0, (float)1);
	var_203_bool = 0; var_204_object = Obj();
	var_154_object = var_204_object;
	func_674(var_203_bool, var_204_object);
	if(var_203_bool != 0) {
		var_207_float = 0;
		var_155_float = var_207_float;
		func_883(var_207_float);
	}
	var_155_float = var_153_float;
	return 4;
}


func_458(var_151_bool, var_152_object)
{
	var_153_bool = 0; var_154_object = Obj();
	var_152_object = var_154_object;
	func_942(var_153_bool, var_154_object);
	var_153_bool = var_151_bool;
	return 0;
}


func_589(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_847(var_127_object)
{
	var_128_object = Obj(); var_129_object = Obj();
	self(var_129_object);
	var_129_object = var_127_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_465(var_0_object, var_1_bool, var_129_bool, var_130_object, var_131_float, var_132_float, var_133_bool, var_134_bool)
{
	var_135_bool = 0; var_136_bool = 0; var_137_object = Obj(); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_float = 0; var_142_object = Obj(); var_143_bool = 0; var_144_bool = 0; var_145_object = Obj(); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_float = 0; var_150_object = Obj();
	var_0_object = false;
	var_1_bool = var_130_object;
	var_134_bool = var_144_bool;
	
Label_469:
	var_151_bool = 0; var_152_object = Obj();
	var_130_object = var_152_object;
	func_458(var_151_bool, var_152_object);
	var_155_bool = var_151_bool == 0; //@nz
	if(var_155_bool != 0) {
		var_129_bool = 0;
		return 16;
	}
	@@var_130_object:GetPosition(var_146_cvector);
	GetPosition(var_147_cvector);
	var_148_cvector = var_146_cvector - var_147_cvector;
	var_149_float = var_148_cvector | var_148_cvector;
	var_156_bool = 0;
	var_156_bool = 0;
	var_158_bool = var_132_float > (int)0;
	if(var_158_bool != 0) {
		var_159_float = var_132_float * var_132_float;
		var_160_bool = var_149_float > var_159_float;
		if(var_160_bool != 0) {
			var_156_bool = 1;
		}
	}
	if(var_156_bool != 0) {
		Stop();
		var_129_bool = 0;
		return 16;
	}
	var_161_float = var_131_float * var_131_float;
	var_162_bool = var_149_float > var_161_float;
	if(var_162_bool != 0) {
		@@var_130_object:GetPFPosition(var_146_cvector);
		FindPathTo(var_150_object, var_146_cvector);
		var_163_bool = var_150_object != 0; //@nn
		if(var_163_bool != 0) {
			var_150_object = var_145_object;
			var_150_object = 0;
		}
		var_164_bool = var_145_object != 0; //@nn
		if(var_164_bool != 0) {
			var_165_bool = var_144_bool;
			if(var_165_bool == 0) goto Label_518;
			var_144_bool = 0;
			RotatePath(var_145_object, var_143_bool);
			var_166_bool = var_143_bool == 0; //@nz
			if(var_166_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_169_string = "";
				func_605(var_169_string);
				var_170_string = "";
				func_607(var_170_string);
				FollowPath(var_145_object, var_133_bool, var_143_bool, var_169_string, var_170_string);
				var_171_bool = var_143_bool == 0; //@nz
				if(var_171_bool != 0) {
					var_172_object = var_0_object;
					if(var_172_object != 0) {
						var_145_object = 0;
						goto Label_565;
					EMIT "GOTO 0x21a";
					}
				} else {
					var_145_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_143_bool);
					var_175_bool = var_143_bool == 0; //@nz
					if(var_175_bool != 0) {
						var_176_object = var_0_object;
						if(var_176_object != 0) {
							var_145_object = 0;
							goto Label_565;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_565;
	}
			var_150_object = 0;
			goto Label_563;

		Label_563:
			var_145_object = 0;

		}
		goto Label_469;
	}
Label_565:
	var_129_bool = !var_0_object;
	return 16;
	
}


func_853(var_95_cvector, var_96_cvector)
{
	var_97_float = 0; var_98_float = 0;
	var_99_int = var_96_cvector | var_96_cvector;
	var_98_float = sqrt(var_99_int);
	var_100_float = 9.999999974752427e-07;
	var_101_bool = var_98_float < var_100_float;
	if(var_101_bool != 0) {
		var_95_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_95_cvector = var_96_cvector / var_98_float;
	return 2;
}


func_344(var_28_float)
{
	var_29_float = 0; var_30_float = 0;
	GetCameraFarDistance(var_30_float);
	var_30_float = var_28_float;
	return 2;
}


func_605(var_169_string)
{
	var_169_string = "walk";
	return 0;
}


func_863(var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0);
	var_17_cvector = var_15_cvector - var_14_cvector;
	var_18_int = var_17_cvector | var_17_cvector;
	var_13_float = sqrt(var_18_int);
	return 2;
}


func_607(var_170_string)
{
	var_170_string = "run";
	return 0;
}


func_609()
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0;
	Trace("fog hunter idling");
	rand(var_44_float, (int)2);
	FogLinear((int)1, (int)1);
	Sleep((int)1);
	Sleep(var_44_float);
	GetPosition(var_45_cvector);
	GetRandomPFPointInCircle(var_46_cvector, var_45_cvector, (int)1000, var_47_bool);
	FogLinear((int)0, (float)0.5);
	var_56_bool = var_47_bool;
	if(var_56_bool != 0) {
		MovePoint(var_46_cvector, (int)500);
	}
	Sleep((int)1);
	return 8;
}


func_868(var_88_float, var_89_cvector, var_90_cvector)
{
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0);
	var_92_cvector = var_90_cvector - var_89_cvector;
	var_88_float = var_92_cvector | var_92_cvector;
	return 2;
}


func_356(var_0_object, var_1_bool)
{
	var_0_object = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_872(var_185_float, var_186_float, var_187_float, var_188_float)
{
	var_189_bool = var_186_float < var_187_float;
	if(var_189_bool != 0) {
		var_187_float = var_185_float;
		return 0;
	}
	var_190_bool = var_186_float > var_188_float;
	if(var_190_bool != 0) {
		var_188_float = var_185_float;
		return 0;
	}
	var_186_float = var_185_float;
	return 0;
}


func_883(var_207_float)
{
	var_208_object = Obj(); var_209_object = Obj();
	CreateFloatVector(var_209_object);
	@@var_209_object:add(var_207_float);
	SendWorldWndMessage((int)14, var_209_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_372(var_38_bool)
{
	var_38_bool = 0;
	return 0;
}


func_374(var_32_object, var_33_cvector)
{
	var_34_object = Obj(); var_35_object = Obj();
	FindShiftedPathTo(var_35_object, var_33_cvector);
	var_35_object = var_32_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_380()
{
	var_63_object = Obj(); var_64_object = Obj();
	Trace("fog hunter following");
	func_667(Obj());
	var_66_object = var_64_object;
	var_70_bool = 0; var_71_object = Obj();
	var_64_object = var_71_object;
	func_942(var_70_bool, var_71_object);
	var_128_bool = var_70_bool == 0; //@nz
	if(var_128_bool != 0) {
		return 2;
	}
	var_129_bool = 0; var_130_object = Obj(); var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_bool = 0;
	var_64_object = var_130_object;
	func_465(var_63_object, var_64_object, var_129_bool, var_130_object, (float)100, (float)0, (bool)0, (bool)0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_893(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsPlayerActor(var_10_object, var_12_bool);
	var_9_bool = 0;
	var_13_bool = var_12_bool;
	if(var_13_bool != 0) {
		var_14_bool = 0; var_15_object = Obj();
		var_10_object = var_15_object;
		func_823(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			var_9_bool = 1;
		}
	}
	return 2;
}


