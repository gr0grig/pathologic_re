// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,irand/2,ResetAAS/0,Sleep/1,KillTimer/1,IsPlayerActor/2,SetTimer/2,Sleep/2,StopGroup0/0,HasAnimation/3,IsExisting3DSound/2,GetPFPosition/1,rand/1,Face/1,SetSpeed/1,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,IsLoaded/1,GetGameTime/1,GetProperty/2,SignalDeath/1,CanSee/2,Trace/1,GetInvItemByName/2,AddItem/4,IsOverrideActive/1,WorkWithCorpse/1,StopAnimation/0,ReportReputationChange/3,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:GenerateMoney: iMin > iMax|W:Money|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:idle|W:class|W:littleboy|W:littlegirl|W:wasted_male|W:wasted_girl|W:woman
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x94
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @EVENT_0: op=0xf vars=object
// @EVENT_6: op=0x1d vars=
// @EVENT_22: op=0x8e vars=object,int,float,float
// @EVENT_16: op=0x90 vars=object,string
// @EVENT_41: op=0x92 vars=object
// @TASK_1: vars=bool,bool params=0
// @EVENT_0: op=0xbf vars=object
// @EVENT_17: op=0xd3 vars=object
// @EVENT_30: op=0xe7 vars=object,object
// @EVENT_40: op=0x101 vars=object
// @EVENT_42: op=0x115 vars=object,string
// @EVENT_1: op=0x12b vars=object
// @EVENT_3: op=0x134 vars=object
// @EVENT_7: op=0x13d vars=int
// @EVENT_6: op=0x149 vars=
// @EVENT_41: op=0x15d vars=object
// @TASK_2: vars=object params=1
// @EVENT_0: op=0x1bf vars=object
// @EVENT_17: op=0x1d3 vars=object
// @EVENT_30: op=0x1e7 vars=object,object
// @EVENT_40: op=0x201 vars=object
// @EVENT_42: op=0x215 vars=object,string
// @EVENT_41: op=0x236 vars=object
// @EVENT_7: op=0x23f vars=int
// @EVENT_6: op=0x262 vars=
// @TASK_3: vars=object,int,int,bool,int params=1
// @TASK_4: vars=bool,object params=6
// @EVENT_6: op=0x462 vars=
// @EVENT_7: op=0x4cf vars=int
// @EVENT_10: op=0x4e1 vars=object
// @EVENT_41: op=0x4ec vars=object
// @STANDALONE_EVENT_16: op=0x649 vars=object,string
// @STANDALONE_EVENT_41: op=0x656 vars=object
// @STANDALONE_EVENT_22: op=0x65c vars=object,int,float,float
// @PE: 0x0,0x78,0x8e,0x90,0x92,0x12b,0x134,0x13d,0x15d,0x236,0x269,0x271,0x274,0x45c,0x4cf,0x4e1,0x4ec,0x4f5,0x500,0x602,0x609,0x614,0x61d,0x627,0x641,0x656,0x65c,0x664,0x66d,0x675,0x67f,0x687,0x68e,0x694,0x697,0x6ab,0x6b1,0x6b4,0x814

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_object = var_14_object;
	func_1684(var_14_object);
	var_13_int = var_12_int;
	var_16_bool = var_12_int > (int)0;
	if(var_16_bool != 0) {
		var_17_object = Obj();
		var_10_object = var_17_object;
		func_1687(var_17_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	func_1693();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_object = var_14_object;
	func_1684(var_14_object);
	var_13_int = var_12_int;
	var_16_bool = var_12_int > (int)0;
	if(var_16_bool != 0) {
		var_18_bool = var_12_int > (int)1;
		if(var_18_bool != 0) {
			func_336(var_12_int);
		}
		var_21_object = Obj();
		var_10_object = var_21_object;
		func_1687(var_21_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_object = var_14_object;
	func_1653(var_13_int, var_14_object);
	var_13_int = var_12_int;
	var_50_bool = var_12_int > (int)0;
	if(var_50_bool != 0) {
		var_52_bool = var_12_int > (int)1;
		if(var_52_bool != 0) {
			func_336(var_12_int);
		}
		var_55_object = Obj();
		var_10_object = var_55_object;
		func_1663(var_55_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_10_bool = var_15_object;
	var_11_object = var_16_object;
	func_1986(var_14_bool, var_15_object, var_16_object);
	if(var_14_bool != 0) {
		var_65_int = 0; var_66_object = Obj();
		var_10_bool = var_66_object;
		func_1671(var_65_int, var_66_object);
		var_65_int = var_13_int;
		var_98_bool = var_13_int > (int)0;
		if(var_98_bool != 0) {
			var_100_bool = var_13_int > (int)1;
			if(var_100_bool != 0) {
				func_336(var_13_int);
			}
			var_103_object = Obj();
			var_10_bool = var_103_object;
			func_1678(var_103_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_object = var_14_object;
	func_1694(var_13_int, var_14_object);
	var_13_int = var_12_int;
	var_55_bool = var_12_int > (int)0;
	if(var_55_bool != 0) {
		var_57_bool = var_12_int > (int)1;
		if(var_57_bool != 0) {
			func_336(var_12_int);
		}
		var_60_object = Obj();
		var_10_object = var_60_object;
		func_1707(var_60_object);
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_string = ""; var_16_object = Obj();
	var_11_object = var_15_string;
	var_10_bool = var_16_object;
	func_1713(var_16_object);
	var_14_int = var_13_int;
	var_18_bool = var_13_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_13_int > (int)1;
		if(var_20_bool != 0) {
			func_336(var_13_int);
		}
		var_23_string = ""; var_24_object = Obj();
		var_11_object = var_23_string;
		var_10_bool = var_24_object;
		func_1716();
	}
	return 2;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_bool = var_0_bool;
	if(var_11_bool != 0) {
		return 0;
	}
	var_12_object = Obj();
	var_10_object = var_12_object;
	func_358(var_10_object, var_12_object);
	return 0;
}


task_1_event_3(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_bool = var_0_bool;
	if(var_11_bool != 0) {
		return 0;
	}
	var_12_object = Obj();
	var_10_object = var_12_object;
	func_358(var_10_object, var_12_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_int, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_12_bool = var_10_object != (int)110;
	if(var_12_bool != 0) {
		return 0;
	}
	var_1_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	func_336(var_9_object);
	func_1693();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_336(var_10_object);
	var_10_object = Obj();
	func_1622();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_object = var_14_object;
	func_1684(var_14_object);
	var_13_int = var_12_int;
	var_16_bool = var_12_int > (int)0;
	if(var_16_bool != 0) {
		var_18_bool = var_12_int > (int)1;
		if(var_18_bool != 0) {
			func_555();
		}
		var_21_object = Obj();
		var_10_object = var_21_object;
		func_1687(var_21_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_object = var_14_object;
	func_1653(var_13_int, var_14_object);
	var_13_int = var_12_int;
	var_50_bool = var_12_int > (int)0;
	if(var_50_bool != 0) {
		var_52_bool = var_12_int > (int)1;
		if(var_52_bool != 0) {
			func_555();
		}
		var_55_object = Obj();
		var_10_object = var_55_object;
		func_1663(var_55_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_10_bool = var_15_object;
	var_11_object = var_16_object;
	func_1986(var_14_bool, var_15_object, var_16_object);
	if(var_14_bool != 0) {
		var_65_int = 0; var_66_object = Obj();
		var_10_bool = var_66_object;
		func_1671(var_65_int, var_66_object);
		var_65_int = var_13_int;
		var_98_bool = var_13_int > (int)0;
		if(var_98_bool != 0) {
			var_100_bool = var_13_int > (int)1;
			if(var_100_bool != 0) {
				func_555();
			}
			var_103_object = Obj();
			var_10_bool = var_103_object;
			func_1678(var_103_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_object = var_14_object;
	func_1694(var_13_int, var_14_object);
	var_13_int = var_12_int;
	var_55_bool = var_12_int > (int)0;
	if(var_55_bool != 0) {
		var_57_bool = var_12_int > (int)1;
		if(var_57_bool != 0) {
			func_555();
		}
		var_60_object = Obj();
		var_10_object = var_60_object;
		func_1707(var_60_object);
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_string = ""; var_16_object = Obj();
	var_11_object = var_15_string;
	var_10_bool = var_16_object;
	func_1713(var_16_object);
	var_14_int = var_13_int;
	var_18_bool = var_13_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_13_int > (int)1;
		if(var_20_bool != 0) {
			func_555();
		}
		var_23_string = ""; var_24_object = Obj();
		var_11_object = var_23_string;
		var_10_bool = var_24_object;
		func_1716();
	}
	return 2;
}


task_2_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_555();
	var_10_object = Obj();
	func_1622();
	return 0;
}


task_2_event_7(var_0_bool, var_1_bool, var_2_object, var_3_int, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	var_16_bool = var_10_object != (int)111;
	if(var_16_bool != 0) {
		return 4;
	}
	var_17_bool = 0; var_18_object = Obj();
	var_18_object = var_0_bool;
	func_1420(var_17_bool, var_18_object);
	var_51_bool = var_17_bool == 0; //@nz
	if(var_51_bool != 0) {
		func_555();
		return 4;
	}
	GetDirection(var_13_cvector);
	var_54_cvector = CVector(0,0,0); var_55_object = Obj();
	var_55_object = var_0_bool;
	func_1288(var_54_cvector, var_55_object);
	var_54_cvector = var_14_cvector;
	var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0);
	var_13_cvector = var_61_cvector;
	var_14_cvector = var_62_cvector;
	func_1575(var_60_float, var_61_cvector, var_62_cvector);
	var_85_bool = var_60_float < (float)0.4999999701976776;
	if(var_85_bool != 0) {
		var_86_object = Obj();
		var_86_object = var_0_bool;
		func_1511(var_86_object);
	}
	return 4;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	func_555();
	func_1693();
	return 0;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	func_1253(var_9_object);
	func_1693();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_int)
{
	var_12_bool = var_10_int != (int)0;
	if(var_12_bool != 0) {
		return 0;
	}
	var_13_bool = 0; var_14_object = Obj();
	var_14_object = var_1_bool;
	func_1269(var_13_bool, var_14_object);
	var_49_bool = var_13_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_4_event_10(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object)
{
	RequestClearPath(var_10_object);
	return 0;
}


task_4_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object)
{
	func_1253(var_10_object);
	var_10_object = Obj();
	func_1622();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0;
	var_15_bool = var_11_string == "health";
	if(var_15_bool != 0) {
		GetProperty("health", var_13_float);
		var_18_bool = var_13_float <= (int)0;
		if(var_18_bool != 0) {
			SignalDeath(var_10_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	func_1601(var_11_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
	var_10_object = var_14_object;
	var_11_int = var_15_int;
	var_12_float = var_16_float;
	func_1444(var_15_int, var_16_float);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0;
	var_0_bool = false;
	SensePlayerOnly((bool)1);
	func_1935();
	func_182();
	
Label_159:
	irand(var_12_int, (int)2);
	var_139_bool = var_12_int == (int)0;
	if(var_139_bool != 0) {
		var_0_bool = true;
		func_1954();
		var_0_bool = false;
		ResetAAS();
	} else {
		irand(var_13_int, (int)4);
		var_159_int = var_13_int + (int)1;
		Sleep(var_159_int);
	}
	goto Label_159;
	
}
EMIT "Return(); Pop(4)";


func_1280(var_317_string, var_318_int)
{
	var_320_bool = var_318_int == (int)1;
	if(var_320_bool != 0) {
		var_317_string = "fire";
		return 0;
	}
	var_317_string = "phys";
	return 0;
}


func_0(var_12_object)
{
	EventDisable(0);
	var_13_object = Obj();
	var_12_object = var_13_object;
	func_33(var_13_object);
	var_12_object = Obj();
	func_2068();
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_1538(var_325_float, var_326_float, var_327_float)
{
	var_330_bool = var_326_float < var_327_float;
	if(var_330_bool != 0) {
		var_326_float = var_325_float;
	} else {
		var_327_float = var_325_float;
	}
	return 0;
	
}


func_1923(var_54_int, var_55_string)
{
	var_56_int = 0; var_57_int = 0;
	GetInvItemByName(var_57_int, var_55_string);
	var_57_int = var_54_int;
	return 2;
}


func_1671(var_65_int, var_66_object)
{
	var_67_int = 0; var_68_object = Obj();
	var_66_object = var_68_object;
	func_1653(var_67_int, var_68_object);
	var_67_int = var_65_int;
	return 0;
}


func_1288(var_54_cvector, var_55_object)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0);
	GetPosition(var_58_cvector);
	@@var_55_object:GetPosition(var_59_cvector);
	var_54_cvector = var_59_cvector - var_58_cvector;
	return 4;
}


func_1545(var_335_float, var_336_float, var_337_float, var_338_float)
{
	var_339_bool = var_336_float < var_337_float;
	if(var_339_bool != 0) {
		var_337_float = var_335_float;
		return 0;
	}
	var_340_bool = var_336_float > var_338_float;
	if(var_340_bool != 0) {
		var_338_float = var_335_float;
		return 0;
	}
	var_336_float = var_335_float;
	return 0;
}


func_391(var_0_bool, var_29_object)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0;
	var_0_bool = var_29_object;
	func_442(var_36_bool);
	GetDirection(var_34_cvector);
	var_44_cvector = CVector(0,0,0); var_45_object = Obj();
	var_45_object = var_0_bool;
	func_1288(var_44_cvector, var_45_object);
	var_44_cvector = var_35_cvector;
	var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_34_cvector = var_51_cvector;
	var_35_cvector = var_52_cvector;
	func_1575(var_50_float, var_51_cvector, var_52_cvector);
	var_75_bool = var_50_float < (int)0;
	if(var_75_bool != 0) {
		var_76_object = Obj();
		var_76_object = var_0_bool;
		func_1511(var_76_object);
		var_36_bool = 1;
	} else {
		Sleep((float)1.5, var_36_bool);
	}
	var_85_bool = var_36_bool;
	if(var_85_bool != 0) {
		var_86_object = Obj();
		var_86_object = var_0_bool;
		func_1511(var_86_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_1928(var_147_string, var_148_int)
{
	var_149_string = ""; var_150_string = "";
	var_151_int = var_148_int;
	if(var_151_int != 0) {
		"idle" = "idle" + var_148_int;
	}
	var_150_string = var_147_string;
	return 2;
}


func_1420(var_15_bool, var_16_object)
{
	var_17_int = 0; var_18_int = 0;
	var_19_bool = 0; var_20_object = Obj();
	var_16_object = var_20_object;
	func_1384(var_19_bool, var_20_object);
	var_36_bool = var_19_bool == 0; //@nz
	if(var_36_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_37_bool = 0; var_38_object = Obj(); var_39_string = "";
	var_16_object = var_38_object;
	func_1303(var_37_bool, var_38_object, "noaccess");
	var_46_bool = var_37_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_15_bool = 1;
		return 2;
	}
	@@var_16_object:GetProperty("noaccess", var_18_int);
	var_15_bool = var_18_int == (int)0;
	return 2;
}


func_1678(var_103_object)
{
	var_104_object = Obj();
	var_103_object = var_104_object;
	func_1663(var_104_object);
	return 0;
}


func_1935()
{
	var_15_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	var_16_bool = 0;
	func_1748((bool)1);
	return 0;
}


func_1295(var_54_float, var_55_object)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0);
	GetPosition(var_59_cvector);
	@@var_55_object:GetPosition(var_60_cvector);
	var_61_cvector = var_60_cvector - var_59_cvector;
	var_54_float = var_61_cvector | var_61_cvector;
	return 6;
}


func_2068()
{
	var_64_bool = GlobalVars[1];
	GlobalVars[1] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_1684(var_13_int)
{
	var_13_int = 2;
	return 0;
}


func_1556(var_63_float, var_64_cvector, var_65_cvector)
{
	var_66_float = GetByIndex(var_64_cvector, 0);
	var_67_float = GetByIndex(var_65_cvector, 0);
	var_68_float = var_66_float * var_67_float;
	var_69_float = GetByIndex(var_64_cvector, 2);
	var_70_float = GetByIndex(var_65_cvector, 2);
	var_71_float = var_69_float * var_70_float;
	var_63_float = var_68_float + var_71_float;
	return 0;
}


func_1687(var_21_object)
{
	var_22_object = Obj();
	var_21_object = var_22_object;
	func_1943(var_22_object);
	return 0;
}


func_1943(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	var_25_bool = GlobalVars[1];
	if(var_25_bool != 0) {
		IsOverrideActive(var_24_bool);
		var_26_bool = var_24_bool == 0; //@nz
		if(var_26_bool != 0) {
			WorkWithCorpse(var_22_object);
		}
		return 2;
	}
	return 2;
}


func_1303(var_37_bool, var_38_object, var_39_string)
{
	var_40_bool = 0; var_41_bool = 0;
	var_44_bool = IsFuncExist(var_38_object, "HasProperty", (int)2);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_37_bool = 0;
		return 2;
	}
	@@var_38_object:HasProperty(var_39_string, var_41_bool);
	var_41_bool = var_37_bool;
	return 2;
}


func_1052(var_0_bool)
{
	var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0);
	Face(var_0_bool);
	PlayAnimation("all", "bjump");
	@@@var_0_bool:GetPFPosition(var_236_cvector);
	GetPFPosition(var_237_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_1693()
{
	return 0;
}


func_1694(var_13_int, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	CanSee(var_16_bool, var_14_object);
	var_17_bool = var_16_bool;
	if(var_17_bool != 0) {
		var_18_int = 0; var_19_object = Obj();
		var_14_object = var_19_object;
		func_1653(var_18_int, var_19_object);
		var_18_int = var_13_int;
		return 2;
	}
	var_13_int = 0;
	return 2;
}


func_1565(var_72_float, var_73_cvector)
{
	var_74_float = GetByIndex(var_73_cvector, 0);
	var_75_float = GetByIndex(var_73_cvector, 0);
	var_76_float = var_74_float * var_75_float;
	var_77_float = GetByIndex(var_73_cvector, 2);
	var_78_float = GetByIndex(var_73_cvector, 2);
	var_79_float = var_77_float * var_78_float;
	var_80_int = var_76_float + var_79_float;
	var_72_float = sqrt(var_80_int);
	return 0;
}


func_33(var_13_object)
{
	var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_string = ""; var_19_object = Obj(); var_20_bool = 0; var_21_bool = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0);
	var_34_bool = var_13_object == 0; //@ne
	if(var_34_bool != 0) {
		var_35_string = "";
		func_120("fdie");
	} else {
		@@var_13_object:GetPosition(var_24_cvector);
		GetPosition(var_25_cvector);
		GetDirection(var_26_cvector);
		var_27_cvector = var_25_cvector - var_24_cvector;
		var_38_float = GetByIndex(var_27_cvector, 0);
		var_39_float = GetByIndex(var_26_cvector, 0);
		var_40_float = var_38_float * var_39_float;
		var_41_float = GetByIndex(var_27_cvector, 2);
		var_42_float = GetByIndex(var_26_cvector, 2);
		var_43_float = var_41_float * var_42_float;
		var_44_int = var_40_float + var_43_float;
		var_46_bool = var_44_int >= (int)0;
		if(var_46_bool != 0) {
			var_28_string = "fdie";
		} else {
				var_28_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_13_object = var_29_object;
		var_49_bool = IsFuncExist(var_13_object, "GetScriptProperty", (int)2);
		if(var_49_bool != 0) {
			@@var_13_object:HasScriptProperty(var_30_bool, "Owner");
			var_51_bool = var_30_bool;
			if(var_51_bool != 0) {
				@@var_13_object:GetScriptProperty(var_29_object, "Owner");
				var_53_bool = var_29_object == 0; //@ne
				if(var_53_bool != 0) {
					var_13_object = var_29_object;
				}
			}
		}
		var_56_bool = IsFuncExist(var_29_object, "@GetEyesHeight", (int)1);
		if(var_56_bool != 0) {
			@@var_29_object:GetEyesHeight(var_32_float);
			var_33_cvector = CVector(0.0, 0.0, 0.0);
			var_57_float = GetByIndex(var_33_cvector, 1);
			var_32_float = var_57_float;
			SetByIndex(var_33_cvector, 1) = var_57_float;
			LookAsync(var_13_object, "head", var_33_cvector);
			var_31_bool = 1;
		} else {
			var_31_bool = 0;

		}
		PlayAnimation("all", var_28_string);
		WaitForAnimEnd();
		var_60_bool = var_31_bool;
		if(var_60_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_28_string);
		RemoveEnvelope();
		var_29_object = 0;
	}
	return 20;
	
}


func_1954()
{
	var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_int = 0; var_144_bool = 0; var_145_int = 0;
	var_143_int = 0;
	
Label_1956:
	var_147_string = ""; var_148_int = 0;
	var_143_int = var_148_int;
	func_1928(var_147_string, var_148_int);
	HasAnimation(var_144_bool, "all", var_147_string);
	var_152_bool = var_144_bool == 0; //@nz
	if(var_152_bool != 0) {
	} else {
		var_143_int = var_143_int + (int)1;
		goto Label_1956;
	}
	irand(var_145_int, var_143_int);
	var_154_string = ""; var_155_int = 0;
	var_145_int = var_155_int;
	func_1928(var_154_string, var_155_int);
	PlayAnimation("all", var_154_string);
	WaitForAnimEnd();
	return 6;
	
}


func_1315(var_289_float, var_290_object, var_291_float, var_292_int)
{
	var_296_int = 0; var_297_string = ""; var_298_int = 0; var_299_float = 0; var_300_float = 0; var_301_float = 0; var_302_int = 0; var_303_string = ""; var_304_int = 0; var_305_float = 0; var_306_float = 0; var_307_float = 0;
	var_308_bool = 0; var_309_object = Obj(); var_310_string = "";
	var_290_object = var_309_object;
	func_1303(var_308_bool, var_309_object, "health");
	var_311_bool = var_308_bool == 0; //@nz
	if(var_311_bool != 0) {
		var_289_float = 0.0;
		return 12;
	}
	var_312_bool = 0; var_313_object = Obj(); var_314_string = "";
	var_290_object = var_313_object;
	func_1303(var_312_bool, var_313_object, "armor");
	var_315_bool = var_312_bool == 0; //@nz
	if(var_315_bool != 0) {
		var_302_int = 0;
	} else {
			@@var_290_object:GetProperty("armor", var_302_int);
	}
	var_317_string = ""; var_318_int = 0;
	var_292_int = var_318_int;
	func_1280(var_317_string, var_318_int);
	var_303_string = "armor_" + var_317_string;
	var_321_bool = 0; var_322_object = Obj(); var_323_string = "";
	var_290_object = var_322_object;
	var_303_string = var_323_string;
	func_1303(var_321_bool, var_322_object, var_323_string);
	var_324_bool = var_321_bool == 0; //@nz
	if(var_324_bool != 0) {
		var_304_int = 0;
	} else {
		@@var_290_object:GetProperty(var_303_string, var_304_int);

	}
	var_325_float = 0; var_326_float = 0; var_327_float = 0;
	var_328_int = var_302_int + var_304_int;
	var_326_float = var_328_int / (float)100.0;
	func_1538(var_325_float, var_326_float, (float)1);
	var_325_float = var_305_float;
	@@var_290_object:GetProperty("health", var_306_float);
	var_333_int = (int)1 - var_305_float;
	var_307_float = var_291_float * var_333_int;
	var_335_float = 0; var_336_float = 0; var_337_float = 0; var_338_float = 0;
	var_336_float = var_306_float - var_307_float;
	func_1545(var_335_float, var_336_float, (float)0, (float)1);
	@@var_290_object:SetProperty("health", var_335_float);
	var_307_float = var_289_float;
	return 12;
	
}


func_1444(var_14_object, var_15_int)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_int = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_object = Obj(); var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = "";
	var_37_bool = 0;
	var_37_bool = 0;
	var_39_bool = var_15_int != (int)4;
	if(var_39_bool != 0) {
		var_41_bool = var_15_int != (int)5;
		if(var_41_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		GetScene(var_27_object);
		GetPosition(var_29_cvector);
		GetEyesHeight(var_30_float);
		var_42_float = GetByIndex(var_29_cvector, 1);
		var_44_float = var_30_float / (int)2;
		var_42_float = var_42_float + var_44_float;
		SetByIndex(var_29_cvector, 1) = var_42_float;
		AddActorByType(var_28_object, "scripted", var_27_object, var_29_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_28_object = 0;
		var_27_object = 0;
	}
	var_48_bool = var_14_object == 0; //@ne
	if(var_48_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_31_int);
	var_50_bool = var_31_int < (int)0;
	if(var_50_bool != 0) {
		return 20;
	}
	@@var_14_object:GetPosition(var_32_cvector);
	GetPosition(var_33_cvector);
	GetDirection(var_34_cvector);
	var_35_cvector = var_33_cvector - var_32_cvector;
	var_51_float = GetByIndex(var_35_cvector, 0);
	var_52_float = GetByIndex(var_34_cvector, 0);
	var_53_float = var_51_float * var_52_float;
	var_54_float = GetByIndex(var_35_cvector, 2);
	var_55_float = GetByIndex(var_34_cvector, 2);
	var_56_float = var_54_float * var_55_float;
	var_57_int = var_53_float + var_56_float;
	var_59_bool = var_57_int >= (int)0;
	if(var_59_bool != 0) {
		var_36_string = "fhit";
	} else {
		var_36_string = "bhit";
	}
	var_62_int = var_36_string + "1";
	var_64_int = var_36_string + "2";
	FadeSecondaryAnimation("hit_react", var_62_int, var_64_int, (int)-10);
	return 20;
	
}


func_1575(var_60_float, var_61_cvector, var_62_cvector)
{
	var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	var_61_cvector = var_64_cvector;
	var_62_cvector = var_65_cvector;
	func_1556(var_63_float, var_64_cvector, var_65_cvector);
	var_72_float = 0; var_73_cvector = CVector(0,0,0);
	var_61_cvector = var_73_cvector;
	func_1565(var_72_float, var_73_cvector);
	var_81_float = 0; var_82_cvector = CVector(0,0,0);
	var_62_cvector = var_82_cvector;
	func_1565(var_81_float, var_82_cvector);
	var_83_float = var_72_float * var_81_float;
	var_60_float = var_63_float / var_83_float;
	return 0;
}


func_1707(var_60_object)
{
	var_61_object = Obj();
	var_60_object = var_61_object;
	func_1663(var_61_object);
	return 0;
}


func_555()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_1071(var_0_bool, var_195_bool)
{
	var_196_bool = 0; var_197_bool = 0;
	var_200_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_200_bool != 0) {
		@@@var_0_bool:IsAttacking(var_197_bool);
		var_197_bool = var_195_bool;
		return 2;
	}
	var_195_bool = 0;
	return 2;
}


func_1713(var_14_int)
{
	var_14_int = 0;
	return 0;
}


func_1716()
{
	return 0;
}


func_182()
{
	var_133_bool = 0;
	func_1522(var_133_bool);
	var_136_bool = var_133_bool == 0; //@nz
	if(var_136_bool != 0) {
		func_1693();
	}
	return 0;
}


func_1718(var_22_int, var_23_int)
{
	var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0;
	var_41_bool = var_22_int > var_23_int;
	if(var_41_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_43_bool = var_22_int != var_23_int;
	if(var_43_bool != 0) {
		var_44_int = var_23_int - var_22_int;
		irand(var_38_int, var_44_int);
	} else {
		var_50_bool = var_22_int == (int)0;
		if(var_50_bool == 0) goto Label_1736;
		return 8;
	}
Label_1736:
	(int)0 = (int)0 + var_22_int;
	var_46_bool = var_37_int == (int)0;
	if(var_46_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_39_int, "Money");
	AddItem(var_40_bool, var_39_int, (int)0, var_37_int);
	return 8;
	
}


func_1592(var_25_int)
{
	var_26_float = 0; var_27_float = 0;
	GetGameTime(var_27_float);
	var_29_int = 0;
	var_29_int = var_27_float / (int)24;
	var_25_int = (int)1 + var_29_int;
	return 2;
}


func_442(var_0_bool)
{
	var_37_object = Obj();
	var_37_object = var_0_bool;
	func_1527(var_37_object);
	return 0;
}


func_1082(var_2_object, var_4_object)
{
	var_257_float = 0; var_258_int = 0; var_259_float = 0; var_260_int = 0;
	var_261_bool = var_2_object == 0; //@nz
	if(var_261_bool != 0) {
		return 4;
	}
	var_262_object = var_4_object;
	if(var_262_object != 0) {
		var_4_object = var_4_object + (int)-1;
		var_265_bool = var_4_object > (int)0;
		if(var_265_bool != 0) {
			return 4;
		}
	}
	rand(var_259_float);
	var_266_float = 0;
	func_1120(var_266_float);
	var_267_bool = var_259_float < var_266_float;
	if(var_267_bool != 0) {
		irand(var_260_int, var_2_object);
		var_260_int = var_260_int + (int)1;
		var_270_int = "attack" + var_260_int;
		Speak(var_270_int);
		var_271_int = 0;
		func_1118(var_271_int);
		var_4_object = var_271_int;
	}
	return 4;
}


func_955(var_361_bool, var_362_float)
{
	var_363_float = 0; var_364_bool = 0; var_365_float = 0; var_366_bool = 0;
	rand(var_365_float);
	var_367_bool = var_365_float < var_362_float;
	if(var_367_bool != 0) {

	Label_960:
		IsAnimationPlaying(var_366_bool);
		var_368_bool = var_366_bool == 0; //@nz
		if(var_368_bool != 0) {
		} else {
			var_369_bool = 0;
			func_1019(var_366_bool, var_369_bool);
			if(var_369_bool != 0) {
				var_361_bool = 1;
				sync();
				goto Label_960;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_977;
	
Label_977:
	var_361_bool = 0;
	return 4;
	
}


func_1981()
{
	StopAnimation();
	return 0;
}


func_1984(var_21_bool)
{
	var_21_bool = 1;
	return 0;
}


func_1601(var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	TaskCall(0);
	func_0(var_12_object);
	TaskReturn();
	return 0;
}


func_1986(var_14_bool, var_15_object, var_16_object)
{
	var_17_string = ""; var_18_bool = 0; var_19_string = ""; var_20_bool = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_string = "";
	var_16_object = var_22_object;
	func_1303(var_21_bool, var_22_object, "class");
	var_30_bool = var_21_bool == 0; //@nz
	if(var_30_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	@@var_16_object:GetProperty("class", var_19_string);
	var_32_bool = 0;
	var_32_bool = 0;
	var_33_bool = 0;
	var_33_bool = 0;
	var_34_bool = 0;
	var_34_bool = 0;
	var_35_bool = 0;
	var_35_bool = 0;
	var_36_bool = 0;
	var_36_bool = 0;
	var_37_bool = 0;
	var_37_bool = 0;
	var_39_bool = var_19_string != "littleboy";
	if(var_39_bool != 0) {
		var_41_bool = var_19_string != "littlegirl";
		if(var_41_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		var_43_bool = var_19_string != "boy";
		if(var_43_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_45_bool = var_19_string != "girl";
		if(var_45_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_47_bool = var_19_string != "wasted_male";
		if(var_47_bool != 0) {
			var_34_bool = 1;
		}
	}
	if(var_34_bool != 0) {
		var_49_bool = var_19_string != "wasted_girl";
		if(var_49_bool != 0) {
			var_33_bool = 1;
		}
	}
	if(var_33_bool != 0) {
		var_51_bool = var_19_string != "woman";
		if(var_51_bool != 0) {
			var_32_bool = 1;
		}
	}
	if(var_32_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	CanSee(var_20_bool, var_15_object);
	var_52_bool = 0;
	var_52_bool = 1;
	var_53_bool = var_20_bool;
	if(var_53_bool != 1) {
		var_54_float = 0; var_55_object = Obj();
		var_15_object = var_55_object;
		func_1295(var_54_float, var_55_object);
		var_63_bool = var_54_float <= (float)250000.0;
		if(var_63_bool != 1) {
			var_52_bool = 0;
		}
	}
	if(var_52_bool != 0) {
		ReportReputationChange(var_15_object, var_16_object, (float)-0.30000001192092896);
		var_14_bool = 1;
		return 4;
	}
	var_14_bool = 0;
	return 4;
}


func_836(var_0_bool, var_275_float, var_276_int)
{
	var_277_object = Obj(); var_278_float = 0; var_279_float = 0; var_280_object = Obj(); var_281_float = 0; var_282_float = 0;
	var_284_float = var_275_float * (float)0.8999999761581421;
	GetVictim(var_284_float, var_280_object);
	ReportAttack(var_0_bool);
	var_285_bool = var_280_object == var_0_bool;
	if(var_285_bool != 0) {
		var_286_float = 0; var_287_object = Obj(); var_288_int = 0;
		var_280_object = var_287_object;
		var_276_int = var_288_int;
		func_625(var_288_int);
		var_286_float = var_281_float;
		var_289_float = 0; var_290_object = Obj(); var_291_float = 0; var_292_int = 0;
		var_280_object = var_290_object;
		var_281_float = var_291_float;
		var_293_int = 0; var_294_object = Obj(); var_295_int = 0;
		var_280_object = var_294_object;
		var_276_int = var_295_int;
		func_628(var_295_int);
		var_293_int = var_292_int;
		func_1315(var_289_float, var_290_object, var_291_float, var_292_int);
		var_289_float = var_282_float;
		var_342_int = 0;
		func_1114(var_342_int);
		ReportHit(var_0_bool, var_342_int, var_282_float, var_281_float);
		var_343_object = Obj(); var_344_float = 0;
		var_280_object = var_343_object;
		var_282_float = var_344_float;
		func_1116();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_336(var_1_bool)
{
	KillTimer((int)110);
	var_1_bool = false;
	var_12_bool = var_0_bool;
	if(var_12_bool != 0) {
		func_1981();
	} else {
		Stop();
	}
	return 0;
	
}


func_979(var_0_bool, var_203_bool, var_204_float)
{
	var_205_bool = 0; var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_float = 0; var_210_bool = 0; var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_float = 0;
	
Label_980:
	IsAnimationPlaying(var_210_bool);
	var_215_bool = var_210_bool == 0; //@nz
	if(var_215_bool != 0) {
	} else {
		var_216_bool = 0;
		func_1019(var_214_float, var_216_bool);
		if(var_216_bool != 0) {
			var_203_bool = 1;
			return 10;
		}
		var_241_bool = 0; var_242_object = Obj();
		var_242_object = var_0_bool;
		func_1420(var_241_bool, var_242_object);
		var_243_bool = var_241_bool == 0; //@nz
		if(var_243_bool != 0) {
			var_203_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_211_cvector);
		GetPFPosition(var_212_cvector);
		var_213_cvector = var_211_cvector - var_212_cvector;
		var_214_float = var_213_cvector | var_213_cvector;
		var_244_float = var_204_float * var_204_float;
		var_245_bool = var_214_float < var_244_float;
		if(var_245_bool != 0) {
			var_246_bool = 0; var_247_float = 0;
			var_204_float = var_247_float;
			func_875(var_213_cvector, var_214_float, var_246_bool, var_247_float);
			var_203_bool = 1;
			sync();
			goto Label_980;
		}
		return 10;
	}
	var_203_bool = 0;
	return 10;
	
}


func_1748(var_16_bool)
{
	var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_bool = 0;
	var_21_bool = var_16_bool;
	if(var_21_bool != 0) {
		var_22_int = 0; var_23_int = 0;
		var_25_int = 0;
		func_1592(var_25_int);
		var_32_float = var_25_int * (int)100;
		var_23_int = (int)100 + var_32_float;
		func_1718((int)0, var_23_int);
		irand(var_19_int, (int)9);
		var_53_bool = var_19_int == (int)0;
		if(var_53_bool != 0) {
			var_54_int = 0; var_55_string = "";
			func_1923(var_54_int, "lemon");
			AddItem(var_20_bool, var_54_int, (int)0, (int)1);
		} else {
			var_61_bool = var_19_int == (int)1;
			if(var_61_bool != 0) {
				var_62_int = 0; var_63_string = "";
				func_1923(var_62_int, "rusk");
				AddItem(var_20_bool, var_62_int, (int)0, (int)1);
				goto Label_1836;
			}
			var_67_bool = var_19_int == (int)2;
			if(var_67_bool != 0) {
				var_68_int = 0; var_69_string = "";
				func_1923(var_68_int, "hook");
				AddItem(var_20_bool, var_68_int, (int)0, (int)1);
				goto Label_1836;
			}
			var_73_bool = var_19_int == (int)4;
			if(var_73_bool != 0) {
				var_74_int = 0; var_75_string = "";
				func_1923(var_74_int, "syringe");
				AddItem(var_20_bool, var_74_int, (int)0, (int)1);
				goto Label_1836;
			}
			var_79_bool = var_19_int == (int)5;
			if(var_79_bool != 0) {
				var_80_int = 0; var_81_string = "";
				func_1923(var_80_int, "watch");
				AddItem(var_20_bool, var_80_int, (int)0, (int)1);
				goto Label_1836;
			}
			var_85_bool = var_19_int == (int)6;
			if(var_85_bool == 0) goto Label_1836;
			var_86_int = 0; var_87_string = "";
			func_1923(var_86_int, "razor");
			AddItem(var_20_bool, var_86_int, (int)0, (int)1);
	}
		var_90_int = 0; var_91_int = 0;
		var_93_int = 0;
		func_1592(var_93_int);
		var_95_float = var_93_int * (int)50;
		var_91_int = (int)50 + var_95_float;
		func_1718((int)0, var_91_int);
		irand(var_19_int, (int)8);
		var_98_bool = var_19_int == (int)0;
		if(var_98_bool != 0) {
			var_99_int = 0; var_100_string = "";
			func_1923(var_99_int, "beads");
			AddItem(var_20_bool, var_99_int, (int)0, (int)1);
			goto Label_1922;
		}
		var_104_bool = var_19_int == (int)1;
		if(var_104_bool != 0) {
			var_105_int = 0; var_106_string = "";
			func_1923(var_105_int, "bracelet");
			AddItem(var_20_bool, var_105_int, (int)0, (int)1);
			goto Label_1922;
		}
		var_110_bool = var_19_int == (int)2;
		if(var_110_bool != 0) {
			var_111_int = 0; var_112_string = "";
			func_1923(var_111_int, "ear_ring");
			AddItem(var_20_bool, var_111_int, (int)0, (int)1);
			goto Label_1922;
		}
		var_116_bool = var_19_int == (int)3;
		if(var_116_bool != 0) {
			var_117_int = 0; var_118_string = "";
			func_1923(var_117_int, "gold_ring");
			AddItem(var_20_bool, var_117_int, (int)0, (int)1);
			goto Label_1922;
		}
		var_122_bool = var_19_int == (int)4;
		if(var_122_bool != 0) {
			var_123_int = 0; var_124_string = "";
			func_1923(var_123_int, "silver_ring");
			AddItem(var_20_bool, var_123_int, (int)0, (int)1);
			goto Label_1922;
		}
		var_128_bool = var_19_int == (int)5;
		if(var_128_bool == 0) goto Label_1922;
		var_129_int = 0; var_130_string = "";
		func_1923(var_129_int, "flower");
		AddItem(var_20_bool, var_129_int, (int)0, (int)1);
	}
Label_1836:
	goto Label_1922;
	
Label_1922:
	return 4;
	
}


func_1114(var_342_int)
{
	var_342_int = 0;
	return 0;
}


func_1116()
{
	return 0;
}


func_1118(var_271_int)
{
	var_271_int = 1;
	return 0;
}


func_1120(var_266_float)
{
	var_266_float = 0.5;
	return 0;
}


func_1379(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0;
	@@var_31_object:IsDead(var_33_bool);
	var_33_bool = var_30_bool;
	return 2;
}


func_1636(var_19_int)
{
	var_21_bool = 0;
	func_1984(var_21_bool);
	if(var_21_bool != 0) {
		var_19_int = 2;
	} else {
		var_19_int = 0;
	}
	return 0;
	
}


func_1253(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_358(var_1_bool, var_12_object)
{
	var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_int = 0;
	var_17_bool = var_1_bool;
	if(var_17_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_12_object, var_15_bool);
	var_18_bool = var_15_bool == 0; //@nz
	if(var_18_bool != 0) {
		return 4;
	}
	var_19_int = 0; var_20_object = Obj();
	var_12_object = var_20_object;
	func_1636(var_20_object);
	var_19_int = var_16_int;
	var_23_bool = var_16_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_16_int > (int)1;
		if(var_25_bool != 0) {
			func_336(var_16_int);
		}
		var_28_object = Obj();
		var_12_object = var_28_object;
		func_1645(var_28_object);
		var_1_bool = true;
		SetTimer((int)110, (float)5.0);
	}
	return 4;
}


func_1511(var_86_object)
{
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0);
	@@var_86_object:GetPosition(var_90_cvector);
	GetPosition(var_91_cvector);
	var_92_cvector = var_90_cvector - var_91_cvector;
	var_93_float = GetByIndex(var_92_cvector, 0);
	var_94_float = GetByIndex(var_92_cvector, 2);
	RotateAsync(var_93_float, var_94_float);
	return 6;
}


func_1384(var_19_bool, var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj();
	var_25_bool = var_20_object == 0; //@ne
	if(var_25_bool != 0) {
		var_19_bool = 0;
		return 4;
	}
	var_26_bool = 0;
	var_26_bool = 0;
	var_29_bool = IsFuncExist(var_20_object, "IsDead", (int)1);
	if(var_29_bool != 0) {
		var_30_bool = 0; var_31_object = Obj();
		var_20_object = var_31_object;
		func_1379(var_30_bool, var_31_object);
		if(var_30_bool != 0) {
			var_26_bool = 1;
		}
	}
	if(var_26_bool != 0) {
		var_19_bool = 0;
		return 4;
	}
	GetScene(var_23_object);
	var_34_bool = var_23_object == 0; //@ne
	if(var_34_bool != 0) {
		var_19_bool = 0;
		return 4;
	}
	@@var_20_object:GetScene(var_24_object);
	var_35_bool = var_23_object != var_24_object;
	if(var_35_bool != 0) {
		var_19_bool = 0;
		return 4;
	}
	var_19_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1129(var_0_bool, var_1_bool, var_119_bool, var_120_object, var_121_float, var_122_float, var_123_bool, var_124_bool)
{
	var_127_bool = 0; var_128_bool = 0; var_129_object = Obj(); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0); var_133_float = 0; var_134_object = Obj(); var_135_bool = 0; var_136_bool = 0; var_137_object = Obj(); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_float = 0; var_142_object = Obj();
	var_0_bool = false;
	var_1_bool = var_120_object;
	var_124_bool = var_136_bool;
	
Label_1133:
	var_143_bool = 0; var_144_object = Obj();
	var_120_object = var_144_object;
	func_1269(var_143_bool, var_144_object);
	var_147_bool = var_143_bool == 0; //@nz
	if(var_147_bool != 0) {
		var_119_bool = 0;
		return 16;
	}
	@@var_120_object:GetPosition(var_138_cvector);
	GetPosition(var_139_cvector);
	var_140_cvector = var_138_cvector - var_139_cvector;
	var_141_float = var_140_cvector | var_140_cvector;
	var_148_bool = 0;
	var_148_bool = 0;
	var_150_bool = var_122_float > (int)0;
	if(var_150_bool != 0) {
		var_151_float = var_122_float * var_122_float;
		var_152_bool = var_141_float > var_151_float;
		if(var_152_bool != 0) {
			var_148_bool = 1;
		}
	}
	if(var_148_bool != 0) {
		Stop();
		var_119_bool = 0;
		return 16;
	}
	var_153_float = var_121_float * var_121_float;
	var_154_bool = var_141_float > var_153_float;
	if(var_154_bool != 0) {
		@@var_120_object:GetPFPosition(var_138_cvector);
		FindPathTo(var_142_object, var_138_cvector);
		var_155_bool = var_142_object != 0; //@nn
		if(var_155_bool != 0) {
			var_142_object = var_137_object;
			var_142_object = 0;
		}
		var_156_bool = var_137_object != 0; //@nn
		if(var_156_bool != 0) {
			var_157_bool = var_136_bool;
			if(var_157_bool == 0) goto Label_1182;
			var_136_bool = 0;
			RotatePath(var_137_object, var_135_bool);
			var_158_bool = var_135_bool == 0; //@nz
			if(var_158_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_161_string = "";
				func_1276(var_161_string);
				var_162_string = "";
				func_1278(var_162_string);
				FollowPath(var_137_object, var_123_bool, var_135_bool, var_161_string, var_162_string);
				var_163_bool = var_135_bool == 0; //@nz
				if(var_163_bool != 0) {
					var_164_bool = var_0_bool;
					if(var_164_bool != 0) {
						var_137_object = 0;
						goto Label_1229;
					EMIT "GOTO 0x4b2";
					}
				} else {
					var_137_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_135_bool);
					var_167_bool = var_135_bool == 0; //@nz
					if(var_167_bool != 0) {
						var_168_bool = var_0_bool;
						if(var_168_bool != 0) {
							var_137_object = 0;
							goto Label_1229;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1229;
	}
			var_142_object = 0;
			goto Label_1227;

		Label_1227:
			var_137_object = 0;

		}
		goto Label_1133;
	}
Label_1229:
	var_119_bool = !var_0_bool;
	return 16;
	
}


func_617(var_62_object)
{
	var_68_object = Obj(); var_69_bool = 0; var_70_float = 0;
	var_62_object = var_68_object;
	func_631(var_63_object, var_64_int, var_65_int, var_66_bool, var_67_int, var_62_object, var_68_object, (bool)1, (float)180.0);
	return 0;
}


func_875(var_0_bool, var_1_bool, var_246_bool, var_247_float)
{
	var_248_int = 0; var_249_bool = 0; var_250_int = 0; var_251_bool = 0;
	irand(var_250_int, var_1_bool);
	var_250_int = var_250_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	var_256_int = "attack_begin" + var_250_int;
	PlayAnimation("all", var_256_int);
	WaitForAnimEnd();
	func_1082(var_250_int, var_251_bool);
	var_272_bool = 0; var_273_object = Obj();
	var_273_object = var_0_bool;
	func_1420(var_272_bool, var_273_object);
	var_274_bool = var_272_bool == 0; //@nz
	if(var_274_bool != 0) {
		StopAsync();
		var_246_bool = 0;
		return 4;
	}
	var_275_float = 0; var_276_int = 0;
	var_247_float = var_275_float;
	var_250_int = var_276_int;
	func_836(var_251_bool, var_275_float, var_276_int);
	var_347_int = "attack_middle" + var_250_int;
	HasAnimation(var_251_bool, "all", var_347_int);
	var_348_bool = var_251_bool;
	if(var_348_bool != 0) {
		var_351_int = "attack_middle" + var_250_int;
		PlayAnimation("all", var_351_int);
		WaitForAnimEnd();
		var_352_bool = 0; var_353_object = Obj();
		var_353_object = var_0_bool;
		func_1420(var_352_bool, var_353_object);
		var_354_bool = var_352_bool == 0; //@nz
		if(var_354_bool != 0) {
			StopAsync();
			var_246_bool = 0;
			return 4;
		}
		var_355_float = 0; var_356_int = 0;
		var_247_float = var_355_float;
		var_250_int = var_356_int;
		func_836(var_251_bool, var_355_float, var_356_int);
	}
	SetAttackState((bool)0);
	var_360_int = "attack_end" + var_250_int;
	PlayAnimation("all", var_360_int);
	var_361_bool = 0; var_362_float = 0;
	func_955(var_361_bool, (float)0.75);
	StopAsync();
	var_246_bool = 1;
	return 4;
}


func_631(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_68_object, var_69_bool, var_70_float, var_125_bool)
{
	var_71_bool = 0; var_72_bool = 0; var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_bool = 0; var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_float = 0; var_81_bool = 0; var_82_bool = 0; var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_bool = 0; var_87_bool = 0; var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_float = 0;
	var_1_bool = 0;
	
Label_633:
	var_94_int = var_1_bool + (int)1;
	var_95_int = "attack_begin" + var_94_int;
	HasAnimation(var_81_bool, "all", var_95_int);
	var_96_bool = var_81_bool == 0; //@nz
	if(var_96_bool != 0) {
	} else {
									var_1_bool = var_1_bool + (int)1;
									goto Label_633;
	}
	var_2_object = 0;
	
Label_647:
	var_99_int = var_2_object + (int)1;
	var_100_int = "attack" + var_99_int;
	IsExisting3DSound(var_82_bool, var_100_int);
	var_101_bool = var_82_bool == 0; //@nz
	if(var_101_bool != 0) {
	} else {
								var_2_object = var_2_object + (int)1;
								goto Label_647;

	}
	var_4_object = 0;
	var_104_bool = IsFuncExist(var_68_object, "@GetAttackDistance", (int)1);
	if(var_104_bool != 0) {
		@@var_68_object:GetAttackDistance(var_83_float);
		var_83_float = var_83_float + (int)50;
	} else {
							var_70_float = var_83_float;

	}
	var_107_bool = var_83_float >= (int)150;
	if(var_107_bool != 0) {
		var_83_float = 150;
	}
	var_3_object = false;
	var_0_bool = var_68_object;
	IsPlayerActor(var_0_bool, var_86_bool);
	var_108_bool = var_69_bool;
	if(var_108_bool != 0) {
		var_87_bool = 0;
	} else {
						var_87_bool = 1;

	}
Label_683:
	var_109_bool = 0;
	var_109_bool = 0;
	var_110_bool = 0; var_111_object = Obj();
	var_111_object = var_0_bool;
	func_1420(var_110_bool, var_111_object);
	if(var_110_bool != 0) {
		var_112_bool = var_3_object == 0; //@nz
		if(var_112_bool != 0) {
			var_109_bool = 1;
		}
	}
	if(var_109_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_84_cvector);
		GetPFPosition(var_85_cvector);
		var_88_cvector = var_84_cvector - var_85_cvector;
		var_89_float = var_88_cvector | var_88_cvector;
		var_114_int = (float)400.0 + var_83_float;
		var_116_int = (float)400.0 + var_83_float;
		var_117_float = var_114_int * var_116_int;
		var_118_bool = var_89_float >= var_117_float;
		if(var_118_bool != 0) {
			var_119_bool = 0; var_120_object = Obj(); var_121_float = 0; var_122_float = 0; var_123_bool = 0; var_124_bool = 0;
			var_120_object = var_0_bool;
			var_83_float = var_121_float;
			TaskCall(4);
			func_1129(var_125_bool, var_126_object, var_119_bool, var_120_object, var_121_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_172_bool = var_125_bool == 0; //@nz
			if(var_172_bool != 0) {
			} else {
		} else {
				var_178_float = var_70_float * var_70_float;
				var_179_bool = var_89_float >= var_178_float;
				if(var_179_bool != 0) {
					var_180_bool = (bool)0 == 0; //@nz
					if(var_180_bool != 0) {
						var_181_object = Obj();
						var_181_object = var_0_bool;
						func_1511(var_181_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_87_bool = 1;
					}
					rand(var_90_float);
					var_192_bool = 0;
					var_194_bool = var_90_float < (float)0.6000000238418579;
					if(var_194_bool != 1) {
						var_195_bool = 0;
						func_1071((bool)1, var_195_bool);
						if(var_195_bool != 1) {
							var_192_bool = 0;
						}
					}
					if(var_192_bool != 0) {
						Face(var_0_bool);
						PlayAnimation("all", "attack_stay");
						var_203_bool = 0; var_204_float = 0;
						var_70_float = var_204_float;
						func_979(var_90_float, var_203_bool, var_204_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_373_bool = 0;
						func_1071(var_90_float, var_373_bool);
						var_374_bool = var_373_bool == 0; //@nz
						if(var_374_bool == 0) goto Label_809;
						var_375_bool = 0; var_376_object = Obj();
						var_376_object = var_0_bool;
						func_1420(var_375_bool, var_376_object);
						var_377_bool = var_375_bool == 0; //@nz
						if(var_377_bool != 0) {
							goto Label_819;
						}
						@@@var_0_bool:GetPFPosition(var_84_cvector);
						GetPFPosition(var_85_cvector);
						var_88_cvector = var_84_cvector - var_85_cvector;
						var_89_float = var_88_cvector | var_88_cvector;
						var_378_float = var_70_float * var_70_float;
						var_379_bool = var_89_float < var_378_float;
						if(var_379_bool == 0) goto Label_809;
						var_380_bool = 0; var_381_float = 0;
						var_70_float = var_381_float;
						func_875(var_89_float, var_90_float, var_380_bool, var_381_float);
						var_382_bool = var_380_bool == 0; //@nz
						if(var_382_bool == 0) goto Label_809;
						goto Label_819;
				}
					var_383_bool = 0; var_384_float = 0;
					var_70_float = var_384_float;
					func_875(var_89_float, var_90_float, var_383_bool, var_384_float);
					var_385_bool = var_383_bool == 0; //@nz
					if(var_385_bool != 0) {
						goto Label_819;
					}
					var_87_bool = 1;

				}
			Label_809:
				goto Label_818;
		}
		Label_818:
			goto Label_683;

		}
	}
Label_819:
	WaitForAnimEnd();
	var_173_object = var_3_object;
	if(var_173_object != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_176_bool = var_86_bool;
	if(var_176_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_1645(var_28_object)
{
	var_29_object = Obj();
	var_28_object = var_29_object;
	TaskCall(2);
	func_391(var_30_object, var_29_object);
	TaskReturn();
	return 0;
}


func_625(var_286_float)
{
	var_286_float = 0.10000000149011612;
	return 0;
}


func_1522(var_133_bool)
{
	var_134_bool = 0; var_135_bool = 0;
	IsLoaded(var_135_bool);
	var_135_bool = var_133_bool;
	return 2;
}


func_628(var_293_int)
{
	var_293_int = 0;
	return 0;
}


func_1653(var_18_int, var_19_object)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_object = var_21_object;
	func_1420(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		var_18_int = 2;
	} else {
		var_18_int = 0;
	}
	return 0;
	
}


func_1269(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_object = var_16_object;
	func_1420(var_15_bool, var_16_object);
	var_15_bool = var_13_bool;
	return 0;
}


func_1527(var_37_object)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_cvector = CVector(0,0,0);
	@@var_37_object:GetEyesHeight(var_40_float);
	var_41_cvector = CVector(0.0, 0.0, 0.0);
	var_42_float = GetByIndex(var_41_cvector, 1);
	var_40_float = var_42_float;
	SetByIndex(var_41_cvector, 1) = var_42_float;
	LookAsync(var_37_object, "head", var_41_cvector);
	return 4;
}


func_120(var_35_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_35_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_35_string);
	RemoveEnvelope();
	return 0;
}


func_1019(var_0_bool, var_216_bool)
{
	var_217_cvector = CVector(0,0,0); var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_float = 0; var_221_float = 0; var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_cvector = CVector(0,0,0); var_225_float = 0; var_226_float = 0;
	var_227_bool = 0; var_228_object = Obj();
	var_228_object = var_0_bool;
	func_1420(var_227_bool, var_228_object);
	var_229_bool = var_227_bool == 0; //@nz
	if(var_229_bool != 0) {
		var_216_bool = 0;
		return 10;
	}
	var_230_bool = 0;
	func_1071(var_226_float, var_230_bool);
	if(var_230_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_222_cvector);
		GetPFPosition(var_223_cvector);
		var_224_cvector = var_222_cvector - var_223_cvector;
		var_225_float = var_224_cvector | var_224_cvector;
		@@@var_0_bool:GetAttackDistance(var_226_float);
		var_226_float = var_226_float + (int)50;
		var_232_float = var_226_float * var_226_float;
		var_233_bool = var_225_float <= var_232_float;
		if(var_233_bool != 0) {
			func_1052(var_226_float);
			var_216_bool = 1;
			return 10;
		}
	}
	var_216_bool = 0;
	return 10;
}


func_1276(var_161_string)
{
	var_161_string = "walk";
	return 0;
}


func_1278(var_162_string)
{
	var_162_string = "run";
	return 0;
}


func_1663(var_61_object)
{
	var_62_object = Obj();
	var_61_object = var_62_object;
	TaskCall(3);
	func_617(var_62_object);
	TaskReturn();
	return 0;
}


