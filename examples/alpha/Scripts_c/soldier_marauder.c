// @IMPORTS: SetRTEnvelope/2,Hold/0,IsOverrideActive/1,WorkWithCorpse/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SetTimer/2,GetBrightness/1,IsInWalkMode/1,SwitchToRun/0,SwitchToWalk/0,KillTimer/1,rand/2,Sleep/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,StopGroup0/0,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,irand/2,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,GetProperty/2,SignalDeath/1,IsPlayerActor/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:GenerateMoney: iMin > iMax|W:Money|W:rifle_ammo|W:rusk|W:health
// @RUN_OP: 0x93
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @EVENT_0: op=0x18 vars=object
// @EVENT_22: op=0x8d vars=object,int,float,float
// @EVENT_16: op=0x8f vars=object,string
// @EVENT_41: op=0x91 vars=object
// @TASK_1: vars=bool,bool params=0
// @EVENT_7: op=0xa2 vars=int
// @EVENT_41: op=0xbc vars=object
// @EVENT_17: op=0xc5 vars=object
// @EVENT_1: op=0xd5 vars=object
// @EVENT_3: op=0xe3 vars=object
// @EVENT_10: op=0x12a vars=object
// @EVENT_28: op=0x12e vars=
// @TASK_2: vars= params=0
// @TASK_3: vars=object,cvector,bool params=1
// @EVENT_7: op=0x197 vars=int
// @EVENT_41: op=0x1d2 vars=object
// @STANDALONE_EVENT_22: op=0x2e9 vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x2f1 vars=object,string
// @STANDALONE_EVENT_41: op=0x2fe vars=object
// @PE: 0x0,0x9,0x77,0x8d,0x8f,0x91,0xbc,0xc5,0xd5,0xe3,0x12a,0x1d2,0x291,0x2e1,0x2e9,0x2fe,0x304,0x30c,0x31f,0x334

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0;
	IsOverrideActive(var_7_bool);
	var_8_bool = var_7_bool == 0; //@nz
	if(var_8_bool != 0) {
		WorkWithCorpse(var_5_bool);
	}
	return 2;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_object, var_5_cvector, var_6_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool)
{
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_int, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0;
	var_9_bool = var_5_bool != (int)110;
	if(var_9_bool != 0) {
		return 2;
	}
	IsInWalkMode(var_7_bool);
	var_10_bool = var_7_bool;
	if(var_10_bool != 0) {
		var_11_bool = 0;
		func_156(var_11_bool);
		if(var_11_bool != 0) {
			SwitchToRun();
		} else {
			SwitchToWalk();
		}
	}
	return 2;
	
}


task_1_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	func_181();
	var_5_bool = Obj();
	func_766();
	return 0;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_object = Obj();
	var_5_bool = var_7_object;
	func_556(var_6_bool, var_7_object);
	var_40_bool = var_6_bool == 0; //@nz
	if(var_40_bool != 0) {
		return 0;
	}
	func_181();
	var_42_object = Obj();
	var_5_bool = var_42_object;
	func_772(var_42_object);
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_object = Obj();
	var_5_bool = var_7_object;
	func_786(var_6_bool, var_7_object);
	if(var_6_bool != 0) {
		func_181();
		var_46_object = Obj();
		var_5_bool = var_46_object;
		func_799(var_46_object);
	}
	return 0;
}


task_1_event_3(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_object = Obj();
	var_5_bool = var_7_object;
	func_807(var_6_bool, var_7_object);
	if(var_6_bool != 0) {
		func_181();
		var_46_object = Obj();
		var_5_bool = var_46_object;
		func_820(var_46_object);
	}
	return 0;
}


task_1_event_10(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	RequestClearPath(var_5_bool);
	return 0;
}


task_1_event_28(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool)
{
	Stop();
	return 0;
}


task_3_event_7(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_int)
{
	var_6_cvector = CVector(0,0,0); var_7_float = 0; var_8_cvector = CVector(0,0,0); var_9_float = 0; var_10_cvector = CVector(0,0,0); var_11_float = 0; var_12_cvector = CVector(0,0,0); var_13_float = 0;
	var_15_bool = var_5_int != (int)120;
	if(var_15_bool != 0) {
		return 8;
	}
	var_16_bool = var_0_bool == 0; //@ne
	if(var_16_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_10_cvector);
		FindDirLength(var_11_float, var_10_cvector, (float)7000.0);
		var_19_cvector = CVector(0,0,0); var_20_float = 0;
		func_313(var_13_float, var_19_cvector, (float)1.7453293800354004);
		var_19_cvector = var_12_cvector;
		var_13_float = var_12_cvector | var_12_cvector;
		var_49_bool = 0;
		var_49_bool = 0;
		var_51_bool = var_13_float >= (float)10000.0;
		if(var_51_bool != 0) {
			var_52_bool = 0;
			var_53_float = var_11_float * var_11_float;
			var_55_float = var_53_float * (float)2.25;
			var_56_bool = var_13_float >= var_55_float;
			if(var_56_bool != 1) {
				var_57_bool = 0;
				func_475((bool)1, var_57_bool);
				if(var_57_bool != 1) {
					var_52_bool = 0;
				}
			}
			if(var_52_bool != 0) {
				var_49_bool = 1;
			}
		}
		if(var_49_bool == 0) goto Label_458;
		Stop();
		var_77_cvector = CVector(0,0,0);
		func_491(var_77_cvector);
		var_1_bool = var_77_cvector + var_12_cvector;
	}
Label_458:
	return 8;
	
}


task_3_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object)
{
	func_459(var_5_object);
	var_5_object = Obj();
	func_766();
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float)
{
	var_9_object = Obj(); var_10_int = 0; var_11_float = 0;
	var_5_object = var_9_object;
	var_6_int = var_10_int;
	var_7_float = var_11_float;
	func_580(var_10_int, var_11_float);
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_string)
{
	var_7_float = 0; var_8_float = 0;
	var_10_bool = var_6_string == "health";
	if(var_10_bool != 0) {
		GetProperty("health", var_8_float);
		var_13_bool = var_8_float <= (int)0;
		if(var_13_bool != 0) {
			SignalDeath(var_5_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object)
{
	var_6_object = Obj();
	var_5_object = var_6_object;
	func_780(var_6_object);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool)
{
	
Label_147:
	SetTimer((int)110, (float)0.30000001192092896);
	func_241(var_3_cvector, var_4_bool);
	goto Label_147;
}
EMIT "Return(); Pop(0)";


func_0(var_8_object)
{
	func_695();
	var_49_object = Obj();
	var_8_object = var_49_object;
	func_9(var_49_object);
	return 0;
}


func_515(var_25_bool, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0;
	@@var_26_object:IsDead(var_28_bool);
	var_28_bool = var_25_bool;
	return 2;
}


func_772(var_42_object)
{
	var_43_object = Obj();
	var_42_object = var_43_object;
	TaskCall(3);
	func_343(var_44_object, var_45_cvector, var_46_bool, var_43_object);
	TaskReturn();
	return 0;
}


func_647(var_35_cvector, var_36_cvector)
{
	var_37_float = 0; var_38_float = 0;
	var_39_int = var_36_cvector | var_36_cvector;
	var_38_float = sqrt(var_39_int);
	var_40_float = 9.999999974752427e-07;
	var_41_bool = var_38_float < var_40_float;
	if(var_41_bool != 0) {
		var_35_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_35_cvector = var_36_cvector / var_38_float;
	return 2;
}


func_520(var_14_bool, var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj();
	var_20_bool = var_15_object == 0; //@ne
	if(var_20_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	var_21_bool = 0;
	var_21_bool = 0;
	var_24_bool = IsFuncExist(var_15_object, "IsDead", (int)1);
	if(var_24_bool != 0) {
		var_25_bool = 0; var_26_object = Obj();
		var_15_object = var_26_object;
		func_515(var_25_bool, var_26_object);
		if(var_25_bool != 0) {
			var_21_bool = 1;
		}
	}
	if(var_21_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	GetScene(var_18_object);
	var_29_bool = var_18_object == 0; //@ne
	if(var_29_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	@@var_15_object:GetScene(var_19_object);
	var_30_bool = var_18_object != var_19_object;
	if(var_30_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	var_14_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_9(var_49_object)
{
	EventDisable(0);
	var_50_object = Obj();
	var_49_object = var_50_object;
	func_32(var_50_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_20:
	Hold();
	goto Label_20;
}
EMIT "Return(); Pop(0)";


func_780(var_6_object)
{
	var_7_object = Obj();
	var_6_object = var_7_object;
	func_737(var_7_object);
	return 0;
}


func_657(var_68_float, var_69_cvector, var_70_cvector)
{
	var_71_int = var_69_cvector | var_70_cvector;
	var_72_int = var_69_cvector | var_69_cvector;
	var_73_int = var_70_cvector | var_70_cvector;
	var_74_float = var_72_int * var_73_int;
	var_75_float = sqrt(var_74_float);
	var_68_float = var_71_int / var_75_float;
	return 0;
}


func_786(var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	var_10_bool = 0; var_11_object = Obj();
	var_7_object = var_11_object;
	func_556(var_10_bool, var_11_object);
	var_44_bool = var_10_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_6_bool = 0;
		return 2;
	}
	IsPlayerActor(var_7_object, var_9_bool);
	var_9_bool = var_6_bool;
	return 2;
}


func_665(var_14_int, var_15_int)
{
	var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0;
	var_24_bool = var_14_int > var_15_int;
	if(var_24_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_26_bool = var_14_int != var_15_int;
	if(var_26_bool != 0) {
		var_27_int = var_15_int - var_14_int;
		irand(var_21_int, var_27_int);
	} else {
		var_33_bool = var_14_int == (int)0;
		if(var_33_bool == 0) goto Label_683;
		return 8;
	}
Label_683:
	(int)0 = (int)0 + var_14_int;
	var_29_bool = var_20_int == (int)0;
	if(var_29_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_22_int, "Money");
	AddItem(var_23_bool, var_22_int, (int)0, var_20_int);
	return 8;
	
}


func_156(var_28_bool)
{
	var_29_float = 0; var_30_float = 0;
	GetBrightness(var_30_float);
	var_28_bool = var_30_float >= (float)0.5;
	return 2;
}


func_799(var_46_object)
{
	var_47_object = Obj();
	var_46_object = var_47_object;
	TaskCall(3);
	func_343(var_48_object, var_49_cvector, var_50_bool, var_47_object);
	TaskReturn();
	return 0;
}


func_32(var_50_object)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_string = ""; var_56_object = Obj(); var_57_bool = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_string = ""; var_66_object = Obj(); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0);
	var_71_bool = var_50_object == 0; //@ne
	if(var_71_bool != 0) {
		var_72_string = "";
		func_119("fdie");
	} else {
		@@var_50_object:GetPosition(var_61_cvector);
		GetPosition(var_62_cvector);
		GetDirection(var_63_cvector);
		var_64_cvector = var_62_cvector - var_61_cvector;
		var_75_float = GetByIndex(var_64_cvector, 0);
		var_76_float = GetByIndex(var_63_cvector, 0);
		var_77_float = var_75_float * var_76_float;
		var_78_float = GetByIndex(var_64_cvector, 2);
		var_79_float = GetByIndex(var_63_cvector, 2);
		var_80_float = var_78_float * var_79_float;
		var_81_int = var_77_float + var_80_float;
		var_83_bool = var_81_int >= (int)0;
		if(var_83_bool != 0) {
			var_65_string = "fdie";
		} else {
				var_65_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_50_object = var_66_object;
		var_86_bool = IsFuncExist(var_50_object, "GetScriptProperty", (int)2);
		if(var_86_bool != 0) {
			@@var_50_object:HasScriptProperty(var_67_bool, "Owner");
			var_88_bool = var_67_bool;
			if(var_88_bool != 0) {
				@@var_50_object:GetScriptProperty(var_66_object, "Owner");
				var_90_bool = var_66_object == 0; //@ne
				if(var_90_bool != 0) {
					var_50_object = var_66_object;
				}
			}
		}
		var_93_bool = IsFuncExist(var_66_object, "@GetEyesHeight", (int)1);
		if(var_93_bool != 0) {
			@@var_66_object:GetEyesHeight(var_69_float);
			var_70_cvector = CVector(0.0, 0.0, 0.0);
			var_94_float = GetByIndex(var_70_cvector, 1);
			var_69_float = var_94_float;
			SetByIndex(var_70_cvector, 1) = var_94_float;
			LookAsync(var_50_object, "head", var_70_cvector);
			var_68_bool = 1;
		} else {
			var_68_bool = 0;

		}
		PlayAnimation("all", var_65_string);
		WaitForAnimEnd();
		var_97_bool = var_68_bool;
		if(var_97_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_65_string);
		RemoveEnvelope();
		var_66_object = 0;
	}
	return 20;
	
}


func_807(var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	var_10_bool = 0; var_11_object = Obj();
	var_7_object = var_11_object;
	func_556(var_10_bool, var_11_object);
	var_44_bool = var_10_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_6_bool = 0;
		return 2;
	}
	IsPlayerActor(var_7_object, var_9_bool);
	var_9_bool = var_6_bool;
	return 2;
}


func_556(var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_bool = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_520(var_14_bool, var_15_object);
	var_31_bool = var_14_bool == 0; //@nz
	if(var_31_bool != 0) {
		var_10_bool = 0;
		return 2;
	}
	var_32_bool = 0; var_33_object = Obj(); var_34_string = "";
	var_11_object = var_33_object;
	func_503(var_32_bool, var_33_object, "noaccess");
	var_41_bool = var_32_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_10_bool = 1;
		return 2;
	}
	@@var_11_object:GetProperty("noaccess", var_13_int);
	var_10_bool = var_13_int == (int)0;
	return 2;
}


func_305(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_820(var_46_object)
{
	var_47_object = Obj();
	var_46_object = var_47_object;
	TaskCall(3);
	func_343(var_48_object, var_49_cvector, var_50_bool, var_47_object);
	TaskReturn();
	return 0;
}


func_181()
{
	func_305(var_4_cvector, var_5_bool);
	KillTimer((int)110);
	return 0;
}


func_695()
{
	var_9_int = 0; var_10_bool = 0; var_11_int = 0; var_12_bool = 0;
	ClearSubContainer((int)0);
	var_14_int = 0; var_15_int = 0;
	func_665((int)500, (int)1000);
	irand(var_11_int, (int)4);
	var_36_bool = var_11_int != (int)0;
	if(var_36_bool != 0) {
		var_37_int = 0; var_38_string = "";
		func_732(var_37_int, "rifle_ammo");
		AddItem(var_12_bool, var_37_int, (int)0, var_11_int);
	}
	irand(var_11_int, (int)3);
	var_44_bool = var_11_int == (int)0;
	if(var_44_bool != 0) {
		var_45_int = 0; var_46_string = "";
		func_732(var_45_int, "rusk");
		AddItem(var_12_bool, var_45_int, (int)0, (int)1);
	}
	return 4;
}


func_312()
{
	return 0;
}


func_313(var_0_bool, var_19_cvector, var_20_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_float = 0;
	GetPosition(var_27_cvector);
	@@@var_0_bool:GetPosition(var_28_cvector);
	GetDirection(var_29_cvector);
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0);
	var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0);
	var_36_cvector = var_27_cvector - var_28_cvector;
	func_647(var_35_cvector, var_36_cvector);
	var_43_float = var_29_cvector * (float)0.75;
	var_34_cvector = var_35_cvector + var_43_float;
	func_647(var_33_cvector, var_34_cvector);
	var_33_cvector = var_30_cvector;
	FindLongestDir(var_31_cvector, var_32_float, var_30_cvector, var_20_float, (int)32, (float)7000.0);
	var_32_float = var_32_float - (int)100;
	var_48_bool = var_32_float < (int)0;
	if(var_48_bool != 0) {
		var_32_float = 0;
	}
	var_19_cvector = var_31_cvector * var_32_float;
	return 12;
}


func_580(var_9_object, var_10_int)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_int = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_string = ""; var_22_object = Obj(); var_23_object = Obj(); var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = "";
	var_32_bool = 0;
	var_32_bool = 0;
	var_34_bool = var_10_int != (int)4;
	if(var_34_bool != 0) {
		var_36_bool = var_10_int != (int)5;
		if(var_36_bool != 0) {
			var_32_bool = 1;
		}
	}
	if(var_32_bool != 0) {
		GetScene(var_22_object);
		GetPosition(var_24_cvector);
		GetEyesHeight(var_25_float);
		var_37_float = GetByIndex(var_24_cvector, 1);
		var_39_float = var_25_float / (int)2;
		var_37_float = var_37_float + var_39_float;
		SetByIndex(var_24_cvector, 1) = var_37_float;
		AddActorByType(var_23_object, "scripted", var_22_object, var_24_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_23_object = 0;
		var_22_object = 0;
	}
	var_43_bool = var_9_object == 0; //@ne
	if(var_43_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_26_int);
	var_45_bool = var_26_int < (int)0;
	if(var_45_bool != 0) {
		return 20;
	}
	@@var_9_object:GetPosition(var_27_cvector);
	GetPosition(var_28_cvector);
	GetDirection(var_29_cvector);
	var_30_cvector = var_28_cvector - var_27_cvector;
	var_46_float = GetByIndex(var_30_cvector, 0);
	var_47_float = GetByIndex(var_29_cvector, 0);
	var_48_float = var_46_float * var_47_float;
	var_49_float = GetByIndex(var_30_cvector, 2);
	var_50_float = GetByIndex(var_29_cvector, 2);
	var_51_float = var_49_float * var_50_float;
	var_52_int = var_48_float + var_51_float;
	var_54_bool = var_52_int >= (int)0;
	if(var_54_bool != 0) {
		var_31_string = "fhit";
	} else {
		var_31_string = "bhit";
	}
	var_57_int = var_31_string + "1";
	var_59_int = var_31_string + "2";
	FadeSecondaryAnimation("hit_react", var_57_int, var_59_int, (int)-10);
	return 20;
	
}


func_459(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_343(var_0_bool, var_1_bool, var_2_object, var_47_object)
{
	var_51_cvector = CVector(0,0,0); var_52_float = 0; var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_float = 0;
	var_0_bool = var_47_object;
	var_61_cvector = CVector(0,0,0); var_62_float = 0;
	func_313(var_60_float, var_61_cvector, (float)1.7453293800354004);
	var_61_cvector = var_56_cvector;
	var_57_float = var_56_cvector | var_56_cvector;
	var_92_bool = var_57_float < (float)10000.0;
	if(var_92_bool != 0) {
		var_94_float = sqrt(var_57_float);
		var_95_int = "Can't retreat, distance: " + var_94_float;
		Trace(var_95_int);
		Sleep((float)0.5);
		return 10;
	}
	var_97_float = GetByIndex(var_56_cvector, 0);
	var_98_float = GetByIndex(var_56_cvector, 2);
	Rotate(var_97_float, var_98_float);
	var_99_cvector = CVector(0,0,0);
	func_491(var_99_cvector);
	var_1_bool = var_99_cvector + var_56_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_376:
	MovePoint(var_1_bool, (int)1, var_58_bool);
	var_105_bool = var_58_bool;
	if(var_105_bool != 0) {
		var_106_bool = var_0_bool == 0; //@ne
		if(var_106_bool != 0) {
			goto Label_406;
		EMIT "GOTO 0x194";

		Label_406:
			return 10;
		}
		var_107_cvector = CVector(0,0,0); var_108_float = 0;
		func_313(var_60_float, var_107_cvector, (float)2.6179938316345215);
		var_107_cvector = var_59_cvector;
		var_60_float = var_59_cvector | var_59_cvector;
		var_110_bool = var_60_float >= (float)10000.0;
		if(var_110_bool != 0) {
			var_111_cvector = CVector(0,0,0);
			func_491(var_111_cvector);
			var_1_bool = var_111_cvector + var_59_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_406;
		}
	}
	var_114_bool = var_2_object == 0; //@nz
	if(var_114_bool == 1) goto Label_376;
	
}


func_475(var_0_bool, var_57_bool)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0);
	GetDirection(var_60_cvector);
	var_62_cvector = CVector(0,0,0); var_63_object = Obj();
	var_63_object = var_0_bool;
	func_496(var_62_cvector, var_63_object);
	var_62_cvector = var_61_cvector;
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	var_60_cvector = var_69_cvector;
	var_61_cvector = var_70_cvector;
	func_657(var_68_float, var_69_cvector, var_70_cvector);
	var_57_bool = var_68_float >= (float)-0.3420201241970062;
	return 4;
}


func_732(var_37_int, var_38_string)
{
	var_39_int = 0; var_40_int = 0;
	GetInvItemByName(var_40_int, var_38_string);
	var_40_int = var_37_int;
	return 2;
}


func_737(var_7_object)
{
	var_8_object = Obj();
	var_7_object = var_8_object;
	TaskCall(0);
	func_0(var_8_object);
	TaskReturn();
	return 0;
}


func_503(var_32_bool, var_33_object, var_34_string)
{
	var_35_bool = 0; var_36_bool = 0;
	var_39_bool = IsFuncExist(var_33_object, "HasProperty", (int)2);
	var_40_bool = var_39_bool == 0; //@nz
	if(var_40_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	@@var_33_object:HasProperty(var_34_string, var_36_bool);
	var_36_bool = var_32_bool;
	return 2;
}


func_491(var_77_cvector)
{
	var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0);
	GetPosition(var_79_cvector);
	var_79_cvector = var_77_cvector;
	return 2;
}


func_496(var_62_cvector, var_63_object)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0);
	GetPosition(var_66_cvector);
	@@var_63_object:GetPosition(var_67_cvector);
	var_62_cvector = var_67_cvector - var_66_cvector;
	return 4;
}


func_241(var_0_bool, var_1_bool)
{
	var_7_float = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_float = 0; var_11_bool = 0; var_12_object = Obj(); var_13_bool = 0; var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_bool = 0; var_19_object = Obj(); var_20_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_14_float, (float)0.5);
	Sleep(var_14_float);
	
Label_249:
	var_22_bool = var_0_bool == 0; //@nz
	if(var_22_bool != 0) {
		var_23_bool = var_1_bool == 0; //@nz
		if(var_23_bool != 0) {

		Label_253:
			GetPosition(var_16_cvector);
			GetCameraFarDistance(var_17_float);
			var_17_float = var_17_float * (float)2.5;
			GetRandomPFPointInCircle(var_15_cvector, var_16_cvector, var_17_float, var_18_bool);
			var_25_bool = var_18_bool;
			if(var_25_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_253;
		}
				var_1_bool = false;
	}
			return 14;
	}
	goto Label_270;
	
Label_270:
	FindShiftedPathTo(var_19_object, var_15_cvector);
	var_26_bool = var_19_object != 0; //@nn
	if(var_26_bool != 0) {
		RotatePath(var_19_object, var_20_bool);
		var_27_bool = var_20_bool;
		if(var_27_bool != 0) {
			var_28_bool = 0;
			func_156(var_28_bool);
			FollowPath(var_19_object, var_28_bool, var_20_bool);
			var_19_object = 0;
			var_32_bool = var_20_bool;
			if(var_32_bool != 0) {
				TaskCall(2);
				func_312();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_19_object = 0;
	goto Label_249;
	
}


func_119(var_72_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_72_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_72_string);
	RemoveEnvelope();
	return 0;
}


