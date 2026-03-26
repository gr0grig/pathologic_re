// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,Sleep/1,FindActor/2,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,KillTimer/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetProperty/2,SignalDeath/1
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:player|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:battle
// @RUN_OP: 0x84
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @EVENT_22: op=0x7e vars=object,int,float,float
// @EVENT_16: op=0x80 vars=object,string
// @EVENT_41: op=0x82 vars=object
// @TASK_1: vars=object,int,int,bool,float,int params=0
// @TASK_2: vars=bool,object,bool params=6
// @EVENT_7: op=0x371 vars=int
// @EVENT_1: op=0x38c vars=object
// @EVENT_2: op=0x39b vars=object
// @EVENT_10: op=0x421 vars=object
// @EVENT_41: op=0x42c vars=object
// @STANDALONE_EVENT_22: op=0x5dd vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x5e5 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x5ef vars=object,string
// @STANDALONE_EVENT_41: op=0x5fc vars=object
// @PE: 0x0,0x64,0x7e,0x80,0x82,0x96,0x99,0x9c,0x331,0x339,0x371,0x38c,0x39b,0x40f,0x421,0x42c,0x439,0x59e,0x5a5,0x5d5,0x5dd,0x5e5,0x5fc

task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	return 0;
}


task_2_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_11_bool = var_9_int == (int)1;
	if(var_11_bool != 0) {
		var_12_object = Obj();
		var_12_object = var_1_int;
		func_1473(var_12_object);
	} else {
		var_17_int = 0;
		var_9_int = var_17_int;
		func_1039(var_8_bool, var_9_int, var_17_int);
	}
	return 0;
	
}


task_2_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0;
	var_10_bool = 0;
	var_11_bool = var_1_int == var_9_object;
	if(var_11_bool != 0) {
		var_12_bool = var_2_int == 0; //@nz
		if(var_12_bool != 0) {
			var_10_bool = 1;
		}
	}
	if(var_10_bool != 0) {
		var_2_int = true;
		var_13_object = Obj();
		var_9_object = var_13_object;
		func_1370(var_13_object);
	}
	return 0;
}


task_2_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0;
	var_10_bool = 0;
	var_11_bool = var_1_int == var_9_object;
	if(var_11_bool != 0) {
		var_12_int = var_2_int;
		if(var_12_int != 0) {
			var_10_bool = 1;
		}
	}
	if(var_10_bool != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	return 0;
}


task_2_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object);
	return 0;
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_895(var_9_object);
	var_9_object = Obj();
	func_1532();
	return 0;
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0;
	var_9_object = var_13_object;
	var_10_int = var_14_int;
	var_11_float = var_15_float;
	func_1277(var_13_object, var_14_int, var_15_float);
	return 0;
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float, var_13_cvector, var_14_cvector)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0);
	var_9_object = var_15_object;
	var_10_int = var_16_int;
	var_11_float = var_17_float;
	var_13_cvector = var_18_cvector;
	var_14_cvector = var_19_cvector;
	func_1345(var_17_float, var_18_cvector, var_19_cvector);
	return 0;
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	var_11_float = 0; var_12_float = 0;
	var_14_bool = var_10_string == "health";
	if(var_14_bool != 0) {
		GetProperty("health", var_12_float);
		var_17_bool = var_12_float <= (int)0;
		if(var_17_bool != 0) {
			SignalDeath(var_9_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_object = Obj();
	var_9_object = var_10_object;
	func_1493(var_10_object);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj();
	SensePlayerOnly((bool)1);
	Sleep((float)1.5);
	FindActor(var_10_object, "player");
	var_14_object = Obj(); var_15_bool = 0; var_16_float = 0;
	var_10_object = var_14_object;
	func_163(var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_object, var_14_object, (bool)1, (float)155.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_0(var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_9(var_12_object);
	
Label_5:
	Hold();
	goto Label_5;
}
EMIT "Return(); Pop(0)";


func_773(var_2_int, var_5_int)
{
	var_339_float = 0; var_340_int = 0; var_341_float = 0; var_342_int = 0;
	var_343_bool = var_2_int == 0; //@nz
	if(var_343_bool != 0) {
		return 4;
	}
	var_344_int = var_5_int;
	if(var_344_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_347_bool = var_5_int > (int)0;
		if(var_347_bool != 0) {
			return 4;
		}
	}
	rand(var_341_float);
	var_348_float = 0;
	func_823(var_348_float);
	var_349_bool = var_341_float < var_348_float;
	if(var_349_bool != 0) {
		irand(var_342_int, var_2_int);
		var_342_int = var_342_int + (int)1;
		var_352_int = "attack" + var_342_int;
		Speak(var_352_int);
		var_353_int = 0;
		func_821(var_353_int);
		var_5_int = var_353_int;
	}
	return 4;
}


func_392(var_1_int, var_2_int, var_4_float)
{
	var_39_bool = 0; var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_bool = 0; var_43_bool = 0; var_44_cvector = CVector(0,0,0);
	var_1_int = 0;
	
Label_394:
	var_48_int = var_1_int + (int)1;
	var_49_int = "attack_begin" + var_48_int;
	HasAnimation(var_42_bool, "all", var_49_int);
	var_50_bool = var_42_bool == 0; //@nz
	if(var_50_bool != 0) {
	} else {
			var_1_int = var_1_int + (int)1;
			goto Label_394;
	}
	var_2_int = 0;
	
Label_408:
	var_53_int = var_2_int + (int)1;
	var_54_int = "attack" + var_53_int;
	IsExisting3DSound(var_43_bool, var_54_int);
	var_55_bool = var_43_bool == 0; //@nz
	if(var_55_bool != 0) {
	} else {
		var_2_int = var_2_int + (int)1;
		goto Label_408;

	}
	GetAnimationOffset(var_44_cvector, "all", "bjump");
	var_58_float = GetByIndex(var_44_cvector, 2);
	var_4_float = -var_58_float;
	return 6;
	
}


func_9(var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_string = ""; var_18_object = Obj(); var_19_bool = 0; var_20_bool = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0);
	var_33_bool = var_12_object == 0; //@ne
	if(var_33_bool != 0) {
		var_34_string = "";
		func_100("fdie");
	} else {
		@@var_12_object:GetPosition(var_23_cvector);
		GetPosition(var_24_cvector);
		GetDirection(var_25_cvector);
		var_26_cvector = var_24_cvector - var_23_cvector;
		var_66_float = GetByIndex(var_26_cvector, 0);
		var_67_float = GetByIndex(var_25_cvector, 0);
		var_68_float = var_66_float * var_67_float;
		var_69_float = GetByIndex(var_26_cvector, 2);
		var_70_float = GetByIndex(var_25_cvector, 2);
		var_71_float = var_69_float * var_70_float;
		var_72_int = var_68_float + var_71_float;
		var_74_bool = var_72_int >= (int)0;
		if(var_74_bool != 0) {
			var_27_string = "fdie";
		} else {
				var_27_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_12_object = var_28_object;
		var_77_bool = IsFuncExist(var_12_object, "GetScriptProperty", (int)2);
		if(var_77_bool != 0) {
			@@var_12_object:HasScriptProperty(var_29_bool, "Owner");
			var_79_bool = var_29_bool;
			if(var_79_bool != 0) {
				@@var_12_object:GetScriptProperty(var_28_object, "Owner");
				var_81_bool = var_28_object == 0; //@ne
				if(var_81_bool != 0) {
					var_12_object = var_28_object;
				}
			}
		}
		var_84_bool = IsFuncExist(var_28_object, "@GetEyesHeight", (int)1);
		if(var_84_bool != 0) {
			@@var_28_object:GetEyesHeight(var_31_float);
			var_32_cvector = CVector(0.0, 0.0, 0.0);
			var_85_float = GetByIndex(var_32_cvector, 1);
			var_31_float = var_85_float;
			SetByIndex(var_32_cvector, 1) = var_85_float;
			LookAsync(var_12_object, "head", var_32_cvector);
			var_30_bool = 1;
		} else {
			var_30_bool = 0;

		}
		var_87_string = "";
		var_27_string = var_87_string;
		func_1381(var_87_string);
		PlayAnimation("all", var_27_string);
		WaitForAnimEnd();
		var_89_bool = var_30_bool;
		if(var_89_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_27_string);
		RemoveEnvelope();
		var_28_object = 0;
	}
	return 20;
	
}


func_1422(var_69_object)
{
	var_70_object = Obj(); var_71_object = Obj();
	self(var_71_object);
	var_71_object = var_69_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1039(var_0_object, var_1_int, var_17_int)
{
	var_19_bool = var_17_int != (int)0;
	if(var_19_bool != 0) {
		return 0;
	}
	var_20_bool = 0; var_21_object = Obj();
	var_21_object = var_1_int;
	func_825(var_20_bool, var_21_object);
	var_39_bool = var_20_bool == 0; //@nz
	if(var_39_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1428(var_41_cvector, var_42_cvector)
{
	var_49_float = 0; var_50_float = 0;
	var_51_int = var_42_cvector | var_42_cvector;
	var_50_float = sqrt(var_51_int);
	var_52_float = 9.999999974752427e-07;
	var_53_bool = var_50_float < var_52_float;
	if(var_53_bool != 0) {
		var_41_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_41_cvector = var_42_cvector / var_50_float;
	return 2;
}


func_150(var_368_float)
{
	var_368_float = 0.10000000149011612;
	return 0;
}


func_153(var_375_int)
{
	var_375_int = 0;
	return 0;
}


func_156(var_75_bool, var_76_object)
{
	var_77_bool = 0; var_78_object = Obj();
	var_76_object = var_78_object;
	func_1197(var_77_bool, var_78_object);
	var_77_bool = var_75_bool;
	return 0;
}


func_1438(var_415_float, var_416_float, var_417_float)
{
	var_420_bool = var_416_float < var_417_float;
	if(var_420_bool != 0) {
		var_416_float = var_415_float;
	} else {
		var_417_float = var_415_float;
	}
	return 0;
	
}


func_673(var_0_object, var_274_bool)
{
	var_275_cvector = CVector(0,0,0); var_276_cvector = CVector(0,0,0); var_277_cvector = CVector(0,0,0); var_278_float = 0; var_279_float = 0; var_280_cvector = CVector(0,0,0); var_281_cvector = CVector(0,0,0); var_282_cvector = CVector(0,0,0); var_283_float = 0; var_284_float = 0;
	var_285_bool = 0; var_286_object = Obj();
	var_286_object = var_0_object;
	func_156(var_285_bool, var_286_object);
	var_287_bool = var_285_bool == 0; //@nz
	if(var_287_bool != 0) {
		var_274_bool = 0;
		return 10;
	}
	var_288_bool = 0;
	func_762(var_284_float, var_288_bool);
	if(var_288_bool != 0) {
		@@@var_0_object:GetPFPosition(var_280_cvector);
		GetPFPosition(var_281_cvector);
		var_282_cvector = var_280_cvector - var_281_cvector;
		var_283_float = var_282_cvector | var_282_cvector;
		@@@var_0_object:GetAttackDistance(var_284_float);
		var_284_float = var_284_float + (int)50;
		var_290_float = var_284_float * var_284_float;
		var_274_bool = var_283_float <= var_290_float;
		return 10;
	}
	var_274_bool = 0;
	return 10;
}


func_163(var_0_object, var_3_bool, var_5_int, var_14_object, var_15_bool, var_16_float, var_108_bool, var_200_bool)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; var_21_bool = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_float = 0;
	func_392(var_36_cvector, var_37_bool, var_38_float);
	var_5_int = 0;
	var_63_bool = IsFuncExist(var_14_object, "@GetAttackDistance", (int)1);
	if(var_63_bool != 0) {
		@@var_14_object:GetAttackDistance(var_28_float);
		var_28_float = var_28_float + (int)50;
	} else {
							var_16_float = var_28_float;
	}
	var_66_bool = var_28_float >= (int)150;
	if(var_66_bool != 0) {
		var_28_float = 150;
	}
	var_3_bool = false;
	var_0_object = var_14_object;
	IsPlayerActor(var_0_object, var_31_bool);
	var_67_bool = var_31_bool;
	if(var_67_bool != 0) {
		PlayGlobalMusic("attack");
		var_69_object = Obj();
		func_1422(var_69_object);
		SendPlayerEnemy(var_14_object, var_69_object);
	}
	var_72_bool = var_15_bool;
	if(var_72_bool != 0) {
		var_32_bool = 0;
	} else {
						var_32_bool = 1;

	}
	var_33_float = (float)300.0 + var_28_float;
	
Label_203:
	var_74_bool = 0;
	var_74_bool = 0;
	var_75_bool = 0; var_76_object = Obj();
	var_76_object = var_0_object;
	func_156(var_75_bool, var_76_object);
	if(var_75_bool != 0) {
		var_94_bool = var_3_bool == 0; //@nz
		if(var_94_bool != 0) {
			var_74_bool = 1;
		}
	}
	if(var_74_bool != 0) {
		func_805(var_38_float);
		@@@var_0_object:GetPFPosition(var_29_cvector);
		GetPFPosition(var_30_cvector);
		var_34_cvector = var_29_cvector - var_30_cvector;
		var_35_float = var_34_cvector | var_34_cvector;
		var_100_float = var_33_float * var_33_float;
		var_101_bool = var_35_float >= var_100_float;
		if(var_101_bool != 0) {
			var_102_bool = 0; var_103_object = Obj(); var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_bool = 0;
			var_103_object = var_0_object;
			var_28_float = var_104_float;
			TaskCall(2);
			func_832(var_110_bool, var_102_bool, var_103_object, var_104_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_185_bool = var_108_bool == 0; //@nz
			if(var_185_bool != 0) {
			} else {
				var_32_bool = 0;
		} else {
				var_191_float = var_16_float * var_16_float;
				var_192_bool = var_35_float >= var_191_float;
				if(var_192_bool != 0) {
					@@@var_0_object:GetPFPosition(var_36_cvector);
					CanReachByPF(var_37_bool, var_36_cvector);
					var_193_bool = var_37_bool == 0; //@nz
					if(var_193_bool != 0) {
						var_194_bool = 0; var_195_object = Obj(); var_196_float = 0; var_197_float = 0; var_198_bool = 0; var_199_bool = 0;
						var_195_object = var_0_object;
						var_28_float = var_196_float;
						TaskCall(2);
						func_832(var_202_bool, var_194_bool, var_195_object, var_196_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_203_bool = var_200_bool == 0; //@nz
						if(var_203_bool != 0) {
							goto Label_375;
						}
						var_32_bool = 0;
						goto Label_203;
					}
					var_204_bool = var_32_bool == 0; //@nz
					if(var_204_bool != 0) {
						var_205_object = Obj();
						var_205_object = var_0_object;
						func_1359(var_205_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_805(var_38_float);
						StopAsync();
						var_32_bool = 1;
						var_216_bool = 0; var_217_object = Obj();
						var_217_object = var_0_object;
						func_156(var_216_bool, var_217_object);
						var_218_bool = var_216_bool == 0; //@nz
						if(var_218_bool != 0) {
							goto Label_375;
						}
					}
					rand(var_38_float);
					var_219_bool = 0;
					var_221_bool = var_38_float < (float)0.6000000238418579;
					if(var_221_bool != 1) {
						var_222_bool = 0;
						func_762((bool)1, var_222_bool);
						if(var_222_bool != 1) {
							var_219_bool = 0;
						}
					}
					if(var_219_bool != 0) {
						Face(var_0_object);
						func_812();
						PlayAnimation("all", "attack_stay");
						var_259_bool = 0; var_260_float = 0;
						var_16_float = var_260_float;
						func_630(var_38_float, var_259_bool, var_260_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_805(var_38_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_487_bool = 0;
						func_762(var_38_float, var_487_bool);
						var_488_bool = var_487_bool == 0; //@nz
						if(var_488_bool == 0) goto Label_365;
						var_489_bool = 0; var_490_object = Obj();
						var_490_object = var_0_object;
						func_156(var_489_bool, var_490_object);
						var_491_bool = var_489_bool == 0; //@nz
						if(var_491_bool != 0) {
							goto Label_375;
						}
						@@@var_0_object:GetPFPosition(var_29_cvector);
						GetPFPosition(var_30_cvector);
						var_34_cvector = var_29_cvector - var_30_cvector;
						var_35_float = var_34_cvector | var_34_cvector;
						var_492_float = var_16_float * var_16_float;
						var_493_bool = var_35_float < var_492_float;
						if(var_493_bool == 0) goto Label_365;
						var_494_bool = 0; var_495_float = 0;
						var_16_float = var_495_float;
						func_466(var_37_bool, var_38_float, var_494_bool, var_495_float);
						var_496_bool = var_494_bool == 0; //@nz
						if(var_496_bool == 0) goto Label_365;
						goto Label_375;
				}
					var_497_bool = 0; var_498_float = 0;
					var_16_float = var_498_float;
					func_466(var_37_bool, var_38_float, var_497_bool, var_498_float);
					var_499_bool = var_497_bool == 0; //@nz
					if(var_499_bool != 0) {
						goto Label_375;
					}
					var_32_bool = 1;

				}
			Label_365:
				goto Label_374;
		}
		Label_374:
			goto Label_203;

		}
	}
Label_375:
	WaitForAnimEnd();
	var_186_bool = var_3_bool;
	if(var_186_bool != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_189_bool = var_31_bool;
	if(var_189_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_805(var_0_object)
{
	var_95_object = Obj();
	var_95_object = var_0_object;
	func_1473(var_95_object);
	return 0;
}


func_1061(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1445(var_425_float, var_426_float, var_427_float, var_428_float)
{
	var_429_bool = var_426_float < var_427_float;
	if(var_429_bool != 0) {
		var_427_float = var_425_float;
		return 0;
	}
	var_430_bool = var_426_float > var_428_float;
	if(var_430_bool != 0) {
		var_428_float = var_425_float;
		return 0;
	}
	var_426_float = var_425_float;
	return 0;
}


func_1192(var_88_bool, var_89_object)
{
	var_90_bool = 0; var_91_bool = 0;
	@@var_89_object:IsDead(var_91_bool);
	var_91_bool = var_88_bool;
	return 2;
}


func_937(var_0_object, var_1_int, var_131_bool, var_132_object, var_133_float, var_134_float, var_135_bool, var_136_bool)
{
	var_137_bool = 0; var_138_bool = 0; var_139_object = Obj(); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_float = 0; var_144_object = Obj(); var_145_bool = 0; var_146_bool = 0; var_147_object = Obj(); var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_float = 0; var_152_object = Obj();
	var_0_object = false;
	var_1_int = var_132_object;
	var_136_bool = var_146_bool;
	
Label_941:
	var_153_bool = 0; var_154_object = Obj();
	var_132_object = var_154_object;
	func_825(var_153_bool, var_154_object);
	var_157_bool = var_153_bool == 0; //@nz
	if(var_157_bool != 0) {
		var_131_bool = 0;
		return 16;
	}
	@@var_132_object:GetPosition(var_148_cvector);
	GetPosition(var_149_cvector);
	var_150_cvector = var_148_cvector - var_149_cvector;
	var_151_float = var_150_cvector | var_150_cvector;
	var_158_bool = 0;
	var_158_bool = 0;
	var_160_bool = var_134_float > (int)0;
	if(var_160_bool != 0) {
		var_161_float = var_134_float * var_134_float;
		var_162_bool = var_151_float > var_161_float;
		if(var_162_bool != 0) {
			var_158_bool = 1;
		}
	}
	if(var_158_bool != 0) {
		Stop();
		var_131_bool = 0;
		return 16;
	}
	var_163_float = var_133_float * var_133_float;
	var_164_bool = var_151_float > var_163_float;
	if(var_164_bool != 0) {
		@@var_132_object:GetPFPosition(var_148_cvector);
		FindPathTo(var_152_object, var_148_cvector);
		var_165_bool = var_152_object != 0; //@nn
		if(var_165_bool != 0) {
			var_152_object = var_147_object;
			var_152_object = 0;
		}
		var_166_bool = var_147_object != 0; //@nn
		if(var_166_bool != 0) {
			var_167_bool = var_146_bool;
			if(var_167_bool == 0) goto Label_990;
			var_146_bool = 0;
			RotatePath(var_147_object, var_145_bool);
			var_168_bool = var_145_bool == 0; //@nz
			if(var_168_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_171_string = "";
				func_1077(var_171_string);
				var_172_string = "";
				func_1079(var_172_string);
				FollowPath(var_147_object, var_135_bool, var_145_bool, var_171_string, var_172_string);
				var_173_bool = var_145_bool == 0; //@nz
				if(var_173_bool != 0) {
					var_174_object = var_0_object;
					if(var_174_object != 0) {
						var_147_object = 0;
						goto Label_1037;
					EMIT "GOTO 0x3f2";
					}
				} else {
					var_147_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_145_bool);
					var_177_bool = var_145_bool == 0; //@nz
					if(var_177_bool != 0) {
						var_178_object = var_0_object;
						if(var_178_object != 0) {
							var_147_object = 0;
							goto Label_1037;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1037;
	}
			var_152_object = 0;
			goto Label_1035;

		Label_1035:
			var_147_object = 0;

		}
		goto Label_941;
	}
Label_1037:
	var_131_bool = !var_0_object;
	return 16;
	
}


func_810(var_442_int)
{
	var_442_int = 0;
	return 0;
}


func_427(var_0_object, var_357_float, var_358_int)
{
	var_359_object = Obj(); var_360_float = 0; var_361_float = 0; var_362_object = Obj(); var_363_float = 0; var_364_float = 0;
	var_366_float = var_357_float * (float)0.8999999761581421;
	GetVictim(var_366_float, var_362_object);
	ReportAttack(var_0_object);
	var_367_bool = var_362_object == var_0_object;
	if(var_367_bool != 0) {
		var_368_float = 0; var_369_object = Obj(); var_370_int = 0;
		var_362_object = var_369_object;
		var_358_int = var_370_int;
		func_150(var_370_int);
		var_368_float = var_363_float;
		var_371_float = 0; var_372_object = Obj(); var_373_float = 0; var_374_int = 0;
		var_362_object = var_372_object;
		var_363_float = var_373_float;
		var_375_int = 0; var_376_object = Obj(); var_377_int = 0;
		var_362_object = var_376_object;
		var_358_int = var_377_int;
		func_153(var_377_int);
		var_375_int = var_374_int;
		func_1119(var_371_float, var_372_object, var_373_float, var_374_int);
		var_371_float = var_364_float;
		var_442_int = 0;
		func_810(var_442_int);
		ReportHit(var_0_object, var_442_int, var_364_float, var_363_float);
		var_443_object = Obj(); var_444_float = 0;
		var_362_object = var_443_object;
		var_364_float = var_444_float;
		func_817();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_812()
{
	var_228_string = "";
	func_1381("attack_stay");
	return 0;
}


func_1197(var_77_bool, var_78_object)
{
	var_79_object = Obj(); var_80_object = Obj(); var_81_object = Obj(); var_82_object = Obj();
	var_83_bool = var_78_object == 0; //@ne
	if(var_83_bool != 0) {
		var_77_bool = 0;
		return 4;
	}
	var_84_bool = 0;
	var_84_bool = 0;
	var_87_bool = IsFuncExist(var_78_object, "IsDead", (int)1);
	if(var_87_bool != 0) {
		var_88_bool = 0; var_89_object = Obj();
		var_78_object = var_89_object;
		func_1192(var_88_bool, var_89_object);
		if(var_88_bool != 0) {
			var_84_bool = 1;
		}
	}
	if(var_84_bool != 0) {
		var_77_bool = 0;
		return 4;
	}
	GetScene(var_81_object);
	var_92_bool = var_81_object == 0; //@ne
	if(var_92_bool != 0) {
		var_77_bool = 0;
		return 4;
	}
	@@var_78_object:GetScene(var_82_object);
	var_93_bool = var_81_object != var_82_object;
	if(var_93_bool != 0) {
		var_77_bool = 0;
		return 4;
	}
	var_77_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1456(var_433_float)
{
	var_434_object = Obj(); var_435_object = Obj();
	CreateFloatVector(var_435_object);
	@@var_435_object:add(var_433_float);
	var_437_bool = var_433_float < (int)0;
	if(var_437_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_435_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_817()
{
	return 0;
}


func_819(var_467_bool)
{
	var_467_bool = 1;
	return 0;
}


func_821(var_353_int)
{
	var_353_int = 1;
	return 0;
}


func_1077(var_171_string)
{
	var_171_string = "walk";
	return 0;
}


func_823(var_348_float)
{
	var_348_float = 0.5;
	return 0;
}


func_1079(var_172_string)
{
	var_172_string = "run";
	return 0;
}


func_825(var_153_bool, var_154_object)
{
	var_155_bool = 0; var_156_object = Obj();
	var_154_object = var_156_object;
	func_1197(var_155_bool, var_156_object);
	var_155_bool = var_153_bool;
	return 0;
}


func_1081(var_405_string, var_406_int)
{
	var_408_bool = var_406_int == (int)2;
	if(var_408_bool != 0) {
		var_405_string = "fire";
		return 0;
	EMIT "GOTO 0x445";
	}
	var_410_bool = var_406_int == (int)1;
	if(var_410_bool != 0) {
		var_405_string = "bullet";
		return 0;
	}
	var_405_string = "phys";
	return 0;
}


func_701(var_272_bool)
{
	var_273_bool = 0;
	var_273_bool = 0;
	var_274_bool = 0;
	func_673(var_273_bool, var_274_bool);
	if(var_274_bool != 0) {
		var_291_bool = 0;
		func_717(var_272_bool, var_273_bool, var_291_bool);
		if(var_291_bool != 0) {
			var_273_bool = 1;
		}
	}
	if(var_273_bool != 0) {
		var_272_bool = 1;
		return 0;
	}
	var_272_bool = 0;
	return 0;
}


func_832(var_2_int, var_102_bool, var_103_object, var_104_float, var_105_float, var_106_bool, var_107_bool)
{
	var_111_bool = 0; var_112_bool = 0; var_113_bool = 0; var_114_bool = 0;
	var_115_object = Obj();
	var_103_object = var_115_object;
	func_1473(var_115_object);
	SetTimer((int)1, (int)5);
	CanSee(var_113_bool, var_103_object);
	var_118_bool = var_113_bool;
	if(var_118_bool != 0) {
		var_2_int = true;
		var_119_object = Obj();
		var_103_object = var_119_object;
		func_1370(var_119_object);
	} else {
		var_2_int = false;
	}
	var_126_bool = 0; var_127_object = Obj();
	var_103_object = var_127_object;
	func_1102(var_126_bool, var_127_object);
	if(var_126_bool != 0) {
		var_130_object = Obj();
		func_1422(var_130_object);
		SendPlayerEnemy(var_103_object, var_130_object);
	}
	var_131_bool = 0; var_132_object = Obj(); var_133_float = 0; var_134_float = 0; var_135_bool = 0; var_136_bool = 0;
	var_103_object = var_132_object;
	var_104_float = var_133_float;
	var_105_float = var_134_float;
	var_106_bool = var_135_bool;
	var_107_bool = var_136_bool;
	func_937(var_113_bool, var_114_bool, var_131_bool, var_132_object, var_133_float, var_134_float, var_135_bool, var_136_bool);
	var_131_bool = var_114_bool;
	var_182_int = var_2_int;
	if(var_182_int != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_114_bool = var_102_bool;
	return 4;
	
}


func_1473(var_95_object)
{
	var_96_bool = 0; var_97_bool = 0;
	IsPlayerActor(var_95_object, var_97_bool);
	var_98_bool = var_97_bool;
	if(var_98_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1345(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj();
	GetScene(var_22_object);
	AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	var_26_object = Obj();
	var_15_object = var_26_object;
	func_1233(var_26_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1095(var_302_cvector, var_303_object)
{
	var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0);
	GetPosition(var_306_cvector);
	@@var_303_object:GetPosition(var_307_cvector);
	var_302_cvector = var_307_cvector - var_306_cvector;
	return 4;
}


func_1482()
{
	var_332_object = Obj(); var_333_object = Obj();
	GetScene(var_333_object);
	var_335_object = Obj();
	func_1422(var_335_object);
	BroadcastMessage("battle", var_335_object, var_333_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_717(var_0_object, var_4_float, var_291_bool)
{
	var_292_object = Obj(); var_293_bool = 0; var_294_float = 0; var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_object = Obj(); var_298_bool = 0; var_299_float = 0; var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0);
	GetScene(var_297_object);
	var_298_bool = 0;
	
Label_721:
	var_302_cvector = CVector(0,0,0); var_303_object = Obj();
	var_303_object = var_0_object;
	func_1095(var_302_cvector, var_303_object);
	var_308_int = -var_302_cvector;
	FindDirLength(var_299_float, var_308_int, var_4_float);
	var_309_bool = var_299_float < var_4_float;
	if(var_309_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_300_cvector);
		GetPFPosition(var_301_cvector);
		WaitForAnimEnd();
		func_805(var_301_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_298_bool = 1;
		var_313_bool = 0;
		func_673(var_301_cvector, var_313_bool);
		var_314_bool = var_313_bool == 0; //@nz
		if(var_314_bool != 0) {
			goto Label_759;
		}
		goto Label_721;
	}
Label_759:
	var_298_bool = var_291_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1102(var_126_bool, var_127_object)
{
	var_128_bool = 0; var_129_bool = 0;
	IsPlayerActor(var_127_object, var_129_bool);
	var_129_bool = var_126_bool;
	return 2;
}


func_1359(var_205_object)
{
	var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0);
	@@var_205_object:GetPosition(var_209_cvector);
	GetPosition(var_210_cvector);
	var_211_cvector = var_209_cvector - var_210_cvector;
	var_212_float = GetByIndex(var_211_cvector, 0);
	var_213_float = GetByIndex(var_211_cvector, 2);
	RotateAsync(var_212_float, var_213_float);
	return 6;
}


func_1233(var_26_object)
{
	var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = "";
	var_41_bool = var_26_object == 0; //@ne
	if(var_41_bool != 0) {
		return 14;
	}
	IsDead(var_34_bool);
	var_42_bool = var_34_bool;
	if(var_42_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_35_int);
	var_44_bool = var_35_int < (int)0;
	if(var_44_bool != 0) {
		return 14;
	}
	@@var_26_object:GetPosition(var_36_cvector);
	GetPosition(var_37_cvector);
	GetDirection(var_38_cvector);
	var_39_cvector = var_37_cvector - var_36_cvector;
	var_45_float = GetByIndex(var_39_cvector, 0);
	var_46_float = GetByIndex(var_38_cvector, 0);
	var_47_float = var_45_float * var_46_float;
	var_48_float = GetByIndex(var_39_cvector, 2);
	var_49_float = GetByIndex(var_38_cvector, 2);
	var_50_float = var_48_float * var_49_float;
	var_51_int = var_47_float + var_50_float;
	var_53_bool = var_51_int >= (int)0;
	if(var_53_bool != 0) {
		var_40_string = "fhit";
	} else {
		var_40_string = "bhit";
	}
	var_56_int = var_40_string + "1";
	var_58_int = var_40_string + "2";
	FadeSecondaryAnimation("hit_react", var_56_int, var_58_int, (int)-10);
	return 14;
	
}


func_466(var_0_object, var_1_int, var_320_bool, var_321_float)
{
	var_322_int = 0; var_323_bool = 0; var_324_int = 0; var_325_string = ""; var_326_int = 0; var_327_bool = 0; var_328_int = 0; var_329_string = "";
	func_805(var_329_string);
	irand(var_326_int, var_1_int);
	var_326_int = var_326_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_1482();
	var_338_int = "attack_begin" + var_326_int;
	PlayAnimation("all", var_338_int);
	WaitForAnimEnd();
	func_773(var_328_int, var_329_string);
	var_354_bool = 0; var_355_object = Obj();
	var_355_object = var_0_object;
	func_156(var_354_bool, var_355_object);
	var_356_bool = var_354_bool == 0; //@nz
	if(var_356_bool != 0) {
		StopAsync();
		var_320_bool = 0;
		return 8;
	}
	var_357_float = 0; var_358_int = 0;
	var_321_float = var_357_float;
	var_326_int = var_358_int;
	func_427(var_329_string, var_357_float, var_358_int);
	var_447_int = "attack_middle" + var_326_int;
	HasAnimation(var_327_bool, "all", var_447_int);
	var_448_bool = var_327_bool;
	if(var_448_bool != 0) {
		func_1482();
		var_451_int = "attack_middle" + var_326_int;
		PlayAnimation("all", var_451_int);
		WaitForAnimEnd();
		func_805(var_329_string);
		var_452_bool = 0; var_453_object = Obj();
		var_453_object = var_0_object;
		func_156(var_452_bool, var_453_object);
		var_454_bool = var_452_bool == 0; //@nz
		if(var_454_bool != 0) {
			StopAsync();
			var_320_bool = 0;
			return 8;
		}
		var_455_float = 0; var_456_int = 0;
		var_321_float = var_455_float;
		var_326_int = var_456_int;
		func_427(var_329_string, var_455_float, var_456_int);
		var_328_int = 1;

	Label_543:
		var_458_int = "attack_middle" + var_326_int;
		var_460_int = var_458_int + "_";
		var_329_string = var_460_int + var_328_int;
		HasAnimation(var_327_bool, "all", var_329_string);
		var_462_bool = var_327_bool == 0; //@nz
		if(var_462_bool != 0) {
		} else {
			func_1482();
			PlayAnimation("all", var_329_string);
			WaitForAnimEnd();
			func_805(var_329_string);
			var_478_bool = 0; var_479_object = Obj();
			var_479_object = var_0_object;
			func_156(var_478_bool, var_479_object);
			var_480_bool = var_478_bool == 0; //@nz
			if(var_480_bool != 0) {
				StopAsync();
				var_320_bool = 0;
				var_481_float = 0; var_482_int = 0;
				var_321_float = var_481_float;
				var_326_int = var_482_int;
				func_427(var_329_string, var_481_float, var_482_int);
				var_328_int = var_328_int + (int)1;
				goto Label_543;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_466_int = "attack_end" + var_326_int;
	PlayAnimation("all", var_466_int);
	var_467_bool = 0;
	func_819(var_467_bool);
	if(var_467_bool != 0) {
		var_468_bool = 0; var_469_float = 0;
		func_603(var_468_bool, (float)0.75);
		StopAsync();
	}
	var_320_bool = 1;
	return 8;
	
}


func_1107(var_390_bool, var_391_object, var_392_string)
{
	var_393_bool = 0; var_394_bool = 0;
	var_397_bool = IsFuncExist(var_391_object, "HasProperty", (int)2);
	var_398_bool = var_397_bool == 0; //@nz
	if(var_398_bool != 0) {
		var_390_bool = 0;
		return 2;
	}
	@@var_391_object:HasProperty(var_392_string, var_394_bool);
	var_394_bool = var_390_bool;
	return 2;
}


func_1493(var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	TaskCall(0);
	func_0(var_11_object);
	TaskReturn();
	return 0;
}


func_1370(var_119_object)
{
	var_120_float = 0; var_121_cvector = CVector(0,0,0); var_122_float = 0; var_123_cvector = CVector(0,0,0);
	@@var_119_object:GetEyesHeight(var_122_float);
	var_123_cvector = CVector(0.0, 0.0, 0.0);
	var_124_float = GetByIndex(var_123_cvector, 1);
	var_122_float = var_124_float;
	SetByIndex(var_123_cvector, 1) = var_124_float;
	LookAsync(var_119_object, "head", var_123_cvector);
	return 4;
}


func_603(var_468_bool, var_469_float)
{
	var_470_float = 0; var_471_bool = 0; var_472_float = 0; var_473_bool = 0;
	rand(var_472_float);
	var_474_bool = var_472_float < var_469_float;
	if(var_474_bool != 0) {

	Label_608:
		IsAnimationPlaying(var_473_bool);
		var_475_bool = var_473_bool == 0; //@nz
		if(var_475_bool != 0) {
		} else {
			var_476_bool = 0;
			func_701(var_476_bool);
			if(var_476_bool != 0) {
				var_468_bool = 1;
				sync();
				goto Label_608;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_805(var_473_bool);
	}
	goto Label_628;
	
Label_628:
	var_468_bool = 0;
	return 4;
	
}


func_1119(var_371_float, var_372_object, var_373_float, var_374_int)
{
	var_378_int = 0; var_379_string = ""; var_380_int = 0; var_381_float = 0; var_382_float = 0; var_383_float = 0; var_384_int = 0; var_385_string = ""; var_386_int = 0; var_387_float = 0; var_388_float = 0; var_389_float = 0;
	var_390_bool = 0; var_391_object = Obj(); var_392_string = "";
	var_372_object = var_391_object;
	func_1107(var_390_bool, var_391_object, "health");
	var_399_bool = var_390_bool == 0; //@nz
	if(var_399_bool != 0) {
		var_371_float = 0.0;
		return 12;
	}
	var_400_bool = 0; var_401_object = Obj(); var_402_string = "";
	var_372_object = var_401_object;
	func_1107(var_400_bool, var_401_object, "armor");
	var_403_bool = var_400_bool == 0; //@nz
	if(var_403_bool != 0) {
		var_384_int = 0;
	} else {
			@@var_372_object:GetProperty("armor", var_384_int);
	}
	var_405_string = ""; var_406_int = 0;
	var_374_int = var_406_int;
	func_1081(var_405_string, var_406_int);
	var_385_string = "armor_" + var_405_string;
	var_411_bool = 0; var_412_object = Obj(); var_413_string = "";
	var_372_object = var_412_object;
	var_385_string = var_413_string;
	func_1107(var_411_bool, var_412_object, var_413_string);
	var_414_bool = var_411_bool == 0; //@nz
	if(var_414_bool != 0) {
		var_386_int = 0;
	} else {
		@@var_372_object:GetProperty(var_385_string, var_386_int);

	}
	var_415_float = 0; var_416_float = 0; var_417_float = 0;
	var_418_int = var_384_int + var_386_int;
	var_416_float = var_418_int / (float)100.0;
	func_1438(var_415_float, var_416_float, (float)1);
	var_415_float = var_387_float;
	@@var_372_object:GetProperty("health", var_388_float);
	var_423_int = (int)1 - var_387_float;
	var_389_float = var_373_float * var_423_int;
	var_425_float = 0; var_426_float = 0; var_427_float = 0; var_428_float = 0;
	var_426_float = var_388_float - var_389_float;
	func_1445(var_425_float, var_426_float, (float)0, (float)1);
	@@var_372_object:SetProperty("health", var_425_float);
	var_431_bool = 0; var_432_object = Obj();
	var_372_object = var_432_object;
	func_1102(var_431_bool, var_432_object);
	if(var_431_bool != 0) {
		var_433_float = 0;
		var_433_float = -var_389_float;
		func_1456(var_433_float);
	}
	var_389_float = var_371_float;
	return 12;
	
}


func_100(var_34_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_35_string = "";
	var_34_string = var_35_string;
	func_1381(var_35_string);
	PlayAnimation("all", var_34_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_34_string);
	RemoveEnvelope();
	return 0;
}


func_1381(var_228_string)
{
	var_229_bool = 0; var_230_int = 0; var_231_bool = 0; var_232_int = 0; var_233_bool = 0; var_234_float = 0; var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_bool = 0; var_238_int = 0; var_239_bool = 0; var_240_int = 0; var_241_bool = 0; var_242_float = 0; var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0);
	IsExisting3DSound(var_237_bool, var_228_string);
	var_245_bool = var_237_bool == 0; //@nz
	if(var_245_bool != 0) {
		var_238_int = 0;

	Label_1387:
		var_247_int = var_238_int + (int)1;
		var_248_int = var_228_string + var_247_int;
		IsExisting3DSound(var_239_bool, var_248_int);
		var_249_bool = var_239_bool == 0; //@nz
		if(var_249_bool != 0) {
		} else {
			var_238_int = var_238_int + (int)1;
			goto Label_1387;
		}
		var_250_bool = var_238_int == 0; //@nz
		if(var_250_bool != 0) {
			return 16;
		}
		irand(var_240_int, var_238_int);
		var_252_int = var_240_int + (int)1;
		var_228_string = var_228_string + var_252_int;
	}
	Is3DSoundLoaded(var_241_bool, var_228_string);
	var_253_bool = var_241_bool;
	if(var_253_bool != 0) {
		GetEyesHeight(var_242_float);
		GetDirection(var_243_cvector);
		var_244_cvector = var_243_cvector * (int)50;
		var_255_float = GetByIndex(var_244_cvector, 1);
		var_255_float = var_255_float + var_242_float;
		SetByIndex(var_244_cvector, 1) = var_255_float;
		PlayGlobalSound(var_228_string, var_244_cvector);
	}
	return 16;
	
}


func_630(var_0_object, var_259_bool, var_260_float)
{
	var_261_bool = 0; var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0); var_264_cvector = CVector(0,0,0); var_265_float = 0; var_266_bool = 0; var_267_cvector = CVector(0,0,0); var_268_cvector = CVector(0,0,0); var_269_cvector = CVector(0,0,0); var_270_float = 0;
	
Label_631:
	IsAnimationPlaying(var_266_bool);
	var_271_bool = var_266_bool == 0; //@nz
	if(var_271_bool != 0) {
	} else {
		var_272_bool = 0;
		func_701(var_272_bool);
		if(var_272_bool != 0) {
			var_259_bool = 1;
			return 10;
		}
		var_315_bool = 0; var_316_object = Obj();
		var_316_object = var_0_object;
		func_156(var_315_bool, var_316_object);
		var_317_bool = var_315_bool == 0; //@nz
		if(var_317_bool != 0) {
			var_259_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_267_cvector);
		GetPFPosition(var_268_cvector);
		var_269_cvector = var_267_cvector - var_268_cvector;
		var_270_float = var_269_cvector | var_269_cvector;
		var_318_float = var_260_float * var_260_float;
		var_319_bool = var_270_float < var_318_float;
		if(var_319_bool != 0) {
			var_320_bool = 0; var_321_float = 0;
			var_260_float = var_321_float;
			func_466(var_269_cvector, var_270_float, var_320_bool, var_321_float);
			var_259_bool = 1;
			sync();
			goto Label_631;
		}
		return 10;
	}
	func_805(var_270_float);
	var_259_bool = 0;
	return 10;
	
}


func_762(var_0_object, var_222_bool)
{
	var_223_bool = 0; var_224_bool = 0;
	var_227_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_227_bool != 0) {
		@@@var_0_object:IsAttacking(var_224_bool);
		var_224_bool = var_222_bool;
		return 2;
	}
	var_222_bool = 0;
	return 2;
}


func_1277(var_13_object, var_14_int, var_15_float)
{
	var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_int = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0);
	var_34_bool = 0;
	var_34_bool = 0;
	var_35_bool = 0;
	var_35_bool = 0;
	var_36_object = var_13_object;
	if(var_36_object != 0) {
		var_38_bool = var_14_int != (int)4;
		if(var_38_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_40_bool = var_14_int != (int)5;
		if(var_40_bool != 0) {
			var_34_bool = 1;
		}
	}
	if(var_34_bool != 0) {
		var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
		var_43_cvector = CVector(0,0,0); var_44_object = Obj();
		var_13_object = var_44_object;
		func_1095(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1428(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		CreateVectorVector(var_26_object);
		var_27_int = 1;

	Label_1306:
		var_55_int = "hit" + var_27_int;
		GetGeometryLocator(var_55_int, var_28_bool, var_29_cvector, var_30_cvector);
		var_56_bool = var_28_bool == 0; //@nz
		if(var_56_bool != 0) {
		} else {
			var_104_int = var_30_cvector | var_25_cvector;
			var_106_bool = var_104_int >= (float)0.7071067690849304;
			if(var_106_bool != 0) {
				@@var_26_object:add(var_29_cvector);
			}
			var_27_int = var_27_int + (int)1;
			goto Label_1306;
		}
		@@var_26_object:size(var_31_int);
		var_57_int = var_31_int;
		if(var_57_int != 0) {
			irand(var_32_int, var_31_int);
			@@var_26_object:get(var_33_cvector, var_32_int);
			var_58_object = Obj(); var_59_int = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0);
			var_13_object = var_58_object;
			var_14_int = var_59_int;
			var_15_float = var_60_float;
			var_33_cvector = var_61_cvector;
			var_62_cvector = -var_25_cvector;
			func_1345(var_60_float, var_61_cvector, var_62_cvector);
			return 18;
		}
		var_26_object = 0;
	}
	var_103_object = Obj();
	var_13_object = var_103_object;
	func_1233(var_103_object);
	return 18;
	
}


func_895(var_2_int)
{
	KillTimer((int)1);
	var_11_int = var_2_int;
	if(var_11_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_1061(var_9_object);
	return 0;
}


