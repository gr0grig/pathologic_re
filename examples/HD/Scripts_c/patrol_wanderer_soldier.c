// @IMPORTS: rand/2,Sleep/1,GetPosition/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,Stop/0,StopGroup0/0,FindShiftedPathTo/2,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,StopAnimation/0,SetTimer/2,CanSee/2,SendPlayerEnemy/2,UnlookAsync/1,KillTimer/1,FindPathTo/2,FollowPath/5,IsPlayerActor/2,PlayGlobalMusic/1,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,AddItem/3,AddItem/4,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateObjectSet/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,Trace/1,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,ReportReputationChange/3,ReportReputationChange/4,GetProperty/2,SignalDeath/1
// @STRINGS: W:all|W:head|A:GetPosition|A:GetPFPosition|W:walk|W:run|W:@GetAttackDistance|A:GetAttackDistance|W:attack|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:battle|W:idle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:tourniquet|W:bandage|W:packet|W:bottle_water|W:rusk|W:hook|W:watch|W:alpha_pills|W:beta_pills|W:gamma_pills|W:revolver_ammo|W:rifle_ammo|W:patrol_mark|W:fresh_meat|W:dried_meat|W:smoked_meat|W:vegetables|W:samopal_ammo|W:class|W:patrol|W:sanitar|W:soldier|W:woman|W:wasted_girl|W:vaxxabitka|W:vaxxabit|W:little_girl|W:dohodyaga|W:nudegirl|W:worker|W:butcher|W:boy|W:unosha|W:wasted_male|W:alkash|W:morlok|A:in|W:prc|W:reputation|W:bomber|W:hunter|W:grabitel
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool params=0
// @EVENT_0: op=0xb vars=object
// @EVENT_1: op=0xd vars=object
// @EVENT_3: op=0x1b vars=object
// @EVENT_17: op=0x29 vars=object
// @EVENT_30: op=0x3d vars=object,object,bool
// @EVENT_10: op=0x8a vars=object
// @EVENT_28: op=0x8e vars=
// @EVENT_41: op=0x98 vars=object
// @TASK_1: vars= params=0
// @EVENT_0: op=0xa9 vars=object
// @EVENT_1: op=0xae vars=object
// @EVENT_3: op=0xbc vars=object
// @EVENT_17: op=0xca vars=object
// @EVENT_30: op=0xde vars=object,object,bool
// @TASK_2: vars=bool,object,bool params=6
// @EVENT_17: op=0x141 vars=object
// @EVENT_30: op=0x147 vars=object,object,bool
// @EVENT_7: op=0x180 vars=int
// @EVENT_1: op=0x19b vars=object
// @EVENT_2: op=0x1aa vars=object
// @EVENT_10: op=0x230 vars=object
// @EVENT_41: op=0x23b vars=object
// @TASK_3: vars=object,int,int,bool,float,int params=2
// @EVENT_17: op=0x25d vars=object
// @EVENT_30: op=0x263 vars=object,object,bool
// @TASK_4: vars= params=1
// @EVENT_0: op=0x524 vars=object
// @EVENT_22: op=0x5a3 vars=object,int,float,float
// @EVENT_16: op=0x5a5 vars=object,string
// @EVENT_41: op=0x5a7 vars=object
// @STANDALONE_EVENT_22: op=0x9ff vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xa07 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0xa11 vars=object,string
// @STANDALONE_EVENT_42: op=0xa1e vars=object,string
// @STANDALONE_EVENT_41: op=0xa25 vars=object
// @PE: 0x0,0xb,0xd,0x1b,0x29,0x3d,0x8a,0x98,0xa9,0xae,0xbc,0xca,0xde,0x141,0x147,0x180,0x19b,0x1aa,0x21e,0x230,0x23b,0x244,0x24f,0x257,0x25a,0x25d,0x263,0x4f9,0x515,0x589,0x5a3,0x5a5,0x5a7,0x5a9,0x74d,0x754,0x7b6,0x99f,0x9a6,0x9ac,0x9b3,0x9b9,0x9dc,0x9eb,0x9ff,0xa07,0xa1e,0xa25

task_0_event_0(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	return 0;
}


task_0_event_1(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_int = var_13_object;
	func_2476(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_145(var_10_float, var_11_int);
		var_76_object = Obj();
		var_11_int = var_76_object;
		func_2483(var_76_object);
	}
	return 0;
}


task_0_event_3(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_int = var_13_object;
	func_2463(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_145(var_10_float, var_11_int);
		var_76_object = Obj();
		var_11_int = var_76_object;
		func_2470(var_76_object);
	}
	return 0;
}


	task_0_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj();
	var_100_object = var_102_object;
	func_1609(var_101_bool, var_102_object);
	var_129_bool = var_101_bool == 0; //@nz
	if(var_129_bool != 0) {
		var_130_object = Obj();
		var_100_object = var_130_object;
		func_2500(var_130_object);
		return 0;
	}
	func_145(var_13_int, var_100_object);
	var_145_object = Obj();
	var_100_object = var_145_object;
	func_2524(var_145_object);
	return 0;
	}


task_0_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0;
	var_11_bool = var_15_object;
	var_12_float = var_16_object;
	var_13_int = var_17_bool;
	func_2603(var_14_bool, var_15_object, var_16_object, var_17_bool);
	if(var_14_bool != 0) {
		var_11_bool = Obj();
		func_41();
	}
	return 0;
}


task_0_event_10(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	RequestClearPath(var_11_int);
	return 0;
}


task_0_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int)
{
	Stop();
	return 0;
}


task_0_event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	func_145(var_10_float, var_11_int);
	var_11_int = Obj();
	func_2597();
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	func_316();
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_int = var_13_object;
	func_2476(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_316();
		var_76_object = Obj();
		var_11_int = var_76_object;
		func_2483(var_76_object);
	}
	return 0;
}


task_1_event_3(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_int = var_13_object;
	func_2463(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_316();
		var_76_object = Obj();
		var_11_int = var_76_object;
		func_2470(var_76_object);
	}
	return 0;
}


	task_1_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj();
	var_100_object = var_102_object;
	func_1609(var_101_bool, var_102_object);
	var_129_bool = var_101_bool == 0; //@nz
	if(var_129_bool != 0) {
		var_130_object = Obj();
		var_100_object = var_130_object;
		func_2500(var_130_object);
		return 0;
	}
	func_316();
	var_145_object = Obj();
	var_100_object = var_145_object;
	func_2524(var_145_object);
	return 0;
	}


task_1_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0;
	var_11_bool = var_15_object;
	var_12_float = var_16_object;
	var_13_int = var_17_bool;
	func_2603(var_14_bool, var_15_object, var_16_object, var_17_bool);
	if(var_14_bool != 0) {
		var_11_bool = Obj();
		func_202();
	}
	return 0;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	var_12_object = Obj();
	var_11_int = var_12_object;
	func_2500(var_12_object);
	return 0;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0;
	var_11_bool = var_15_object;
	var_12_float = var_16_object;
	var_13_int = var_17_bool;
	func_2603(var_14_bool, var_15_object, var_16_object, var_17_bool);
	return 0;
}


task_2_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_int, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	var_13_bool = var_11_int == (int)1;
	if(var_13_bool != 0) {
		var_14_object = Obj();
		var_14_object = var_1_bool;
		func_1924(var_14_object);
	} else {
		var_19_int = 0;
		var_11_int = var_19_int;
		func_542(var_10_float, var_11_int, var_19_int);
	}
	return 0;
	
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_1_bool == var_11_int;
	if(var_13_bool != 0) {
		var_14_bool = var_2_bool == 0; //@nz
		if(var_14_bool != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		var_2_bool = true;
		var_15_object = Obj();
		var_11_int = var_15_object;
		func_1775(var_15_object);
	}
	return 0;
}


task_2_event_2(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_1_bool == var_11_int;
	if(var_13_bool != 0) {
		var_14_bool = var_2_bool;
		if(var_14_bool != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	return 0;
}


task_2_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	RequestClearPath(var_11_int);
	return 0;
}


task_2_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	func_398(var_11_int);
	var_11_int = Obj();
	func_2597();
	return 0;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_2500(var_12_object);
	return 0;
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0;
	var_11_object = var_15_object;
	var_12_object = var_16_object;
	var_13_bool = var_17_bool;
	func_2603(var_14_bool, var_15_object, var_16_object, var_17_bool);
	return 0;
}


task_4_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0;
	IsOverrideActive(var_13_bool);
	var_14_bool = var_13_bool == 0; //@nz
	if(var_14_bool != 0) {
		var_15_object = Obj();
		var_11_object = var_15_object;
		func_1974(var_15_object);
	}
	return 2;
}


task_4_event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object, var_12_int, var_13_float, var_14_float)
{
	return 0;
}


task_4_event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object, var_12_string)
{
	return 0;
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object)
{
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0;
	var_11_object = var_15_object;
	var_12_int = var_16_int;
	var_13_float = var_17_float;
	func_1677(var_15_object, var_16_int, var_17_float);
	return 0;
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0);
	var_11_object = var_17_object;
	var_12_int = var_18_int;
	var_13_float = var_19_float;
	var_15_cvector = var_20_cvector;
	var_16_cvector = var_21_cvector;
	func_1745(var_19_float, var_20_cvector, var_21_cvector);
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0;
	var_16_bool = var_12_string == "health";
	if(var_16_bool != 0) {
		GetProperty("health", var_14_float);
		var_19_bool = var_14_float <= (int)0;
		if(var_19_bool != 0) {
			SignalDeath(var_11_object);
		}
	}
	return 2;
}


event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object, var_12_string)
{
	var_14_bool = var_12_string == "prc";
	if(var_14_bool != 0) {
		ResetAAS();
	}
	return 0;
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_2539(var_12_object);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int)
{
	func_2456();
	func_2257();
	
Label_6:
	func_74(var_9_float, var_10_int);
	goto Label_6;
}
EMIT "Return(); Pop(0)";


func_2059()
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0;
	ClearSubContainer((int)0);
	func_1915((int)0);
	var_33_int = var_31_int;
	var_39_int = 0; var_40_int = 0;
	var_43_float = var_31_int * (int)100;
	var_40_int = (int)100 + var_43_float;
	func_1987((int)0, var_40_int);
	var_61_string = ""; var_62_int = 0; var_63_int = 0;
	func_1786("tourniquet", (int)1, (int)7);
	var_72_string = ""; var_73_int = 0; var_74_int = 0;
	func_1786("bandage", (int)1, (int)7);
	var_75_string = ""; var_76_int = 0; var_77_int = 0;
	func_1786("packet", (int)1, (int)10);
	var_78_string = ""; var_79_int = 0; var_80_int = 0;
	func_1786("bottle_water", (int)1, (int)3);
	var_81_string = ""; var_82_int = 0; var_83_int = 0; var_84_int = 0;
	func_1797("rusk", (int)1, (int)3, (int)4);
	var_95_string = ""; var_96_int = 0; var_97_int = 0;
	func_1786("hook", (int)1, (int)20);
	var_98_string = ""; var_99_int = 0; var_100_int = 0;
	func_1786("watch", (int)1, (int)20);
	var_101_bool = 0;
	var_101_bool = 0;
	var_103_bool = var_31_int >= (int)3;
	if(var_103_bool != 0) {
		var_105_bool = var_31_int < (int)6;
		if(var_105_bool != 0) {
			var_101_bool = 1;
		}
	}
	if(var_101_bool != 0) {
		var_106_string = ""; var_107_int = 0; var_108_int = 0; var_109_int = 0;
		func_1797("alpha_pills", (int)1, (int)2, (int)3);
	}
	var_111_bool = var_31_int >= (int)4;
	if(var_111_bool != 0) {
		var_112_string = ""; var_113_int = 0; var_114_int = 0; var_115_int = 0;
		func_1797("beta_pills", (int)1, (int)4, (int)3);
	}
	var_117_bool = var_31_int >= (int)6;
	if(var_117_bool != 0) {
		var_118_string = ""; var_119_int = 0; var_120_int = 0; var_121_int = 0;
		func_1797("alpha_pills", (int)1, (int)2, (int)8);
		var_122_string = ""; var_123_int = 0; var_124_int = 0; var_125_int = 0;
		func_1797("gamma_pills", (int)1, (int)8, (int)3);
	}
	var_127_bool = var_31_int >= (int)8;
	if(var_127_bool != 0) {
		var_128_string = ""; var_129_int = 0; var_130_int = 0;
		func_1786("revolver_ammo", (int)1, (int)3);
		var_131_string = ""; var_132_int = 0; var_133_int = 0;
		func_1786("rifle_ammo", (int)1, (int)3);
	}
	var_134_int = 0; var_135_string = "";
	func_2315(var_134_int, "patrol_mark");
	AddItem(var_30_bool, var_134_int, (int)0, (int)1);
	return 6;
}


func_542(var_0_bool, var_1_bool, var_19_int)
{
	var_21_bool = var_19_int != (int)0;
	if(var_21_bool != 0) {
		return 0;
	}
	var_22_bool = 0; var_23_object = Obj();
	var_23_object = var_1_bool;
	func_580(var_22_bool, var_23_object);
	var_58_bool = var_22_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1568(var_39_bool, var_40_object)
{
	var_41_bool = 0; var_42_bool = 0;
	@@var_40_object:IsDead(var_42_bool);
	var_42_bool = var_39_bool;
	return 2;
}


func_1059(var_582_bool, var_583_float)
{
	var_584_float = 0; var_585_bool = 0; var_586_float = 0; var_587_bool = 0;
	rand(var_586_float);
	var_588_bool = var_586_float < var_583_float;
	if(var_588_bool != 0) {

	Label_1064:
		IsAnimationPlaying(var_587_bool);
		var_589_bool = var_587_bool == 0; //@nz
		if(var_589_bool != 0) {
		} else {
			var_590_bool = 0;
			func_1157(var_590_bool);
			if(var_590_bool != 0) {
				var_582_bool = 1;
				sync();
				goto Label_1064;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1261(var_587_bool);
	}
	goto Label_1084;
	
Label_1084:
	var_582_bool = 0;
	return 4;
	
}


func_1573(var_28_bool, var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj();
	var_34_bool = var_29_object == 0; //@ne
	if(var_34_bool != 0) {
		var_28_bool = 0;
		return 4;
	}
	var_35_bool = 0;
	var_35_bool = 0;
	var_38_bool = IsFuncExist(var_29_object, "IsDead", (int)1);
	if(var_38_bool != 0) {
		var_39_bool = 0; var_40_object = Obj();
		var_29_object = var_40_object;
		func_1568(var_39_bool, var_40_object);
		if(var_39_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_28_bool = 0;
		return 4;
	}
	GetScene(var_32_object);
	var_43_bool = var_32_object == 0; //@ne
	if(var_43_bool != 0) {
		var_28_bool = 0;
		return 4;
	}
	@@var_29_object:GetScene(var_33_object);
	var_44_bool = var_32_object != var_33_object;
	if(var_44_bool != 0) {
		var_28_bool = 0;
		return 4;
	}
	var_28_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2603(var_14_bool, var_15_object, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0;
	var_16_object = var_21_object;
	var_22_bool = !var_17_bool;
	func_2320(var_20_bool, var_21_object, var_22_bool);
	if(var_20_bool != 0) {
		CanSee(var_19_bool, var_15_object);
		var_88_bool = 0;
		var_88_bool = 1;
		var_89_bool = var_19_bool;
		if(var_89_bool != 1) {
			var_90_float = 0; var_91_object = Obj();
			var_15_object = var_91_object;
			func_1470(var_90_float, var_91_object);
			var_99_bool = var_90_float <= (float)160000.0;
			if(var_99_bool != 1) {
				var_88_bool = 0;
			}
		}
		if(var_88_bool != 0) {
			var_14_bool = 1;
			return 2;
		}
	}
	var_14_bool = 0;
	return 2;
}


func_564(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1086(var_0_bool, var_379_bool, var_380_float)
{
	var_381_bool = 0; var_382_cvector = CVector(0,0,0); var_383_cvector = CVector(0,0,0); var_384_cvector = CVector(0,0,0); var_385_float = 0; var_386_bool = 0; var_387_cvector = CVector(0,0,0); var_388_cvector = CVector(0,0,0); var_389_cvector = CVector(0,0,0); var_390_float = 0;
	
Label_1087:
	IsAnimationPlaying(var_386_bool);
	var_391_bool = var_386_bool == 0; //@nz
	if(var_391_bool != 0) {
	} else {
		var_392_bool = 0;
		func_1157(var_392_bool);
		if(var_392_bool != 0) {
			var_379_bool = 1;
			return 10;
		}
		var_435_bool = 0; var_436_object = Obj();
		var_436_object = var_0_bool;
		func_1609(var_435_bool, var_436_object);
		var_437_bool = var_435_bool == 0; //@nz
		if(var_437_bool != 0) {
			var_379_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_387_cvector);
		GetPFPosition(var_388_cvector);
		var_389_cvector = var_387_cvector - var_388_cvector;
		var_390_float = var_389_cvector | var_389_cvector;
		var_438_float = var_380_float * var_380_float;
		var_439_bool = var_390_float < var_438_float;
		if(var_439_bool != 0) {
			var_440_bool = 0; var_441_float = 0;
			var_380_float = var_441_float;
			func_922(var_389_cvector, var_390_float, var_440_bool, var_441_float);
			var_379_bool = 1;
			sync();
			goto Label_1087;
		}
		return 10;
	}
	func_1261(var_390_float);
	var_379_bool = 0;
	return 10;
	
}


func_580(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_object = Obj();
	var_23_object = var_25_object;
	func_1609(var_24_bool, var_25_object);
	var_24_bool = var_22_bool;
	return 0;
}


func_2629(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_float = 0; var_18_string = ""; var_19_bool = 0; var_20_float = 0; var_21_string = "";
	var_22_bool = 0; var_23_object = Obj();
	var_15_object = var_23_object;
	func_1609(var_22_bool, var_23_object);
	var_56_bool = var_22_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_14_bool = 0;
		return 6;
	}
	var_57_object = GlobalVars[0];
	@@var_57_object:in(var_19_bool, var_15_object);
	var_58_bool = var_19_bool;
	if(var_58_bool != 0) {
		var_14_bool = 1;
		return 6;
	}
	var_59_bool = 0; var_60_object = Obj();
	var_15_object = var_60_object;
	func_1478(var_59_bool, var_60_object);
	if(var_59_bool != 0) {
		@@var_15_object:GetProperty("reputation", var_20_float);
		var_14_bool = var_20_float < (float)0.33000001311302185;
		return 6;
	}
	var_65_bool = 0; var_66_object = Obj(); var_67_string = "";
	var_15_object = var_66_object;
	func_1483(var_65_bool, var_66_object, "class");
	if(var_65_bool != 0) {
		@@var_15_object:GetProperty("class", var_21_string);
		var_14_bool = 1;
		var_69_bool = 0;
		var_69_bool = 1;
		var_71_bool = var_21_string == "bomber";
		if(var_71_bool != 1) {
			var_73_bool = var_21_string == "hunter";
			if(var_73_bool != 1) {
				var_69_bool = 0;
			}
		}
		if(var_69_bool != 1) {
			var_75_bool = var_21_string == "grabitel";
			if(var_75_bool != 1) {
				var_14_bool = 0;
			}
		}
		return 6;
	}
	var_14_bool = 0;
	return 6;
}


func_1609(var_24_bool, var_25_object)
{
	var_26_int = 0; var_27_int = 0;
	var_28_bool = 0; var_29_object = Obj();
	var_25_object = var_29_object;
	func_1573(var_28_bool, var_29_object);
	var_45_bool = var_28_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_24_bool = 0;
		return 2;
	}
	var_46_bool = 0; var_47_object = Obj(); var_48_string = "";
	var_25_object = var_47_object;
	func_1483(var_46_bool, var_47_object, "noaccess");
	var_55_bool = var_46_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_24_bool = 1;
		return 2;
	}
	@@var_25_object:GetProperty("noaccess", var_27_int);
	var_24_bool = var_27_int == (int)0;
	return 2;
}


func_74(var_0_bool, var_1_bool)
{
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_object = Obj(); var_78_bool = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_object = Obj(); var_84_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_79_float, (float)0.5);
	Sleep(var_79_float);
	
Label_82:
	var_86_bool = var_0_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_87_bool = var_1_bool == 0; //@nz
		if(var_87_bool != 0) {

		Label_86:
			GetPosition(var_81_cvector);
			var_88_float = 0;
			func_133(var_88_float);
			GetRandomPFPointInCircle(var_80_cvector, var_81_cvector, var_88_float, var_82_bool);
			var_91_bool = var_82_bool;
			if(var_91_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_86;
		}
				var_1_bool = false;
	}
			return 12;
	}
	goto Label_102;
	
Label_102:
	var_92_object = Obj(); var_93_cvector = CVector(0,0,0);
	var_80_cvector = var_93_cvector;
	func_163(var_92_object, var_93_cvector);
	var_92_object = var_83_object;
	var_96_bool = var_83_object != 0; //@nn
	if(var_96_bool != 0) {
		RotatePath(var_83_object, var_84_bool);
		var_97_bool = var_84_bool;
		if(var_97_bool != 0) {
			var_98_bool = 0;
			func_161(var_98_bool);
			FollowPath(var_83_object, var_98_bool, var_84_bool);
			var_83_object = 0;
			var_99_bool = var_84_bool;
			if(var_99_bool != 0) {
				TaskCall(1);
				func_235();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_83_object = 0;
	goto Label_82;
	
}


func_587(var_291_string)
{
	var_291_string = "walk";
	return 0;
}


func_589(var_292_string)
{
	var_292_string = "run";
	return 0;
}


func_591(var_147_object, var_148_bool)
{
	var_155_object = Obj(); var_156_bool = 0; var_157_float = 0;
	var_147_object = var_155_object;
	var_148_bool = var_156_bool;
	func_619(var_152_bool, var_153_float, var_154_int, var_147_object, var_148_bool, var_155_object, var_156_bool, (float)180.0);
	return 0;
}


func_599(var_488_float)
{
	var_488_float = 0.10000000149011612;
	return 0;
}


func_602(var_495_int)
{
	var_495_int = 0;
	return 0;
}


func_1633(var_28_object)
{
	var_29_bool = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = "";
	var_43_bool = var_28_object == 0; //@ne
	if(var_43_bool != 0) {
		return 14;
	}
	IsDead(var_36_bool);
	var_44_bool = var_36_bool;
	if(var_44_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_37_int);
	var_46_bool = var_37_int < (int)0;
	if(var_46_bool != 0) {
		return 14;
	}
	@@var_28_object:GetPosition(var_38_cvector);
	GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_41_cvector = var_39_cvector - var_38_cvector;
	var_47_float = GetByIndex(var_41_cvector, 0);
	var_48_float = GetByIndex(var_40_cvector, 0);
	var_49_float = var_47_float * var_48_float;
	var_50_float = GetByIndex(var_41_cvector, 2);
	var_51_float = GetByIndex(var_40_cvector, 2);
	var_52_float = var_50_float * var_51_float;
	var_53_int = var_49_float + var_52_float;
	var_55_bool = var_53_int >= (int)0;
	if(var_55_bool != 0) {
		var_42_string = "fhit";
	} else {
		var_42_string = "bhit";
	}
	var_58_int = var_42_string + "1";
	var_60_int = var_42_string + "2";
	FadeSecondaryAnimation("hit_react", var_58_int, var_60_int, (int)-10);
	return 14;
	
}


func_1129(var_0_bool, var_394_bool)
{
	var_395_cvector = CVector(0,0,0); var_396_cvector = CVector(0,0,0); var_397_cvector = CVector(0,0,0); var_398_float = 0; var_399_float = 0; var_400_cvector = CVector(0,0,0); var_401_cvector = CVector(0,0,0); var_402_cvector = CVector(0,0,0); var_403_float = 0; var_404_float = 0;
	var_405_bool = 0; var_406_object = Obj();
	var_406_object = var_0_bool;
	func_1609(var_405_bool, var_406_object);
	var_407_bool = var_405_bool == 0; //@nz
	if(var_407_bool != 0) {
		var_394_bool = 0;
		return 10;
	}
	var_408_bool = 0;
	func_1218(var_404_float, var_408_bool);
	if(var_408_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_400_cvector);
		GetPFPosition(var_401_cvector);
		var_402_cvector = var_400_cvector - var_401_cvector;
		var_403_float = var_402_cvector | var_402_cvector;
		@@@var_0_bool:GetAttackDistance(var_404_float);
		var_404_float = var_404_float + (int)50;
		var_410_float = var_404_float * var_404_float;
		var_394_bool = var_403_float <= var_410_float;
		return 10;
	}
	var_394_bool = 0;
	return 10;
}


func_619(var_0_bool, var_3_object, var_5_bool, var_155_object, var_156_bool, var_157_float, var_230_bool, var_320_bool)
{
	var_158_float = 0; var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); var_161_bool = 0; var_162_bool = 0; var_163_float = 0; var_164_cvector = CVector(0,0,0); var_165_float = 0; var_166_cvector = CVector(0,0,0); var_167_bool = 0; var_168_float = 0; var_169_float = 0; var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_bool = 0; var_173_bool = 0; var_174_float = 0; var_175_cvector = CVector(0,0,0); var_176_float = 0; var_177_cvector = CVector(0,0,0); var_178_bool = 0; var_179_float = 0;
	func_848(var_177_cvector, var_178_bool, var_179_float);
	var_5_bool = 0;
	var_204_bool = IsFuncExist(var_155_object, "@GetAttackDistance", (int)1);
	if(var_204_bool != 0) {
		@@var_155_object:GetAttackDistance(var_169_float);
		var_169_float = var_169_float + (int)50;
	} else {
							var_157_float = var_169_float;
	}
	var_207_bool = var_169_float >= (int)150;
	if(var_207_bool != 0) {
		var_169_float = 150;
	}
	var_3_object = false;
	var_0_bool = var_155_object;
	IsPlayerActor(var_0_bool, var_172_bool);
	var_208_bool = var_172_bool;
	if(var_208_bool != 0) {
		PlayGlobalMusic("attack");
		var_210_object = Obj();
		func_1853(var_210_object);
		SendPlayerEnemy(var_155_object, var_210_object);
	}
	var_211_bool = var_156_bool;
	if(var_211_bool != 0) {
		var_173_bool = 0;
	} else {
						var_173_bool = 1;

	}
	var_174_float = (float)300.0 + var_169_float;
	
Label_659:
	var_213_bool = 0;
	var_213_bool = 0;
	var_214_bool = 0; var_215_object = Obj();
	var_215_object = var_0_bool;
	func_1609(var_214_bool, var_215_object);
	if(var_214_bool != 0) {
		var_216_bool = var_3_object == 0; //@nz
		if(var_216_bool != 0) {
			var_213_bool = 1;
		}
	}
	if(var_213_bool != 0) {
		func_1261(var_179_float);
		@@@var_0_bool:GetPFPosition(var_170_cvector);
		GetPFPosition(var_171_cvector);
		var_175_cvector = var_170_cvector - var_171_cvector;
		var_176_float = var_175_cvector | var_175_cvector;
		var_222_float = var_174_float * var_174_float;
		var_223_bool = var_176_float >= var_222_float;
		if(var_223_bool != 0) {
			var_224_bool = 0; var_225_object = Obj(); var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_bool = 0;
			var_225_object = var_0_bool;
			var_169_float = var_226_float;
			TaskCall(2);
			func_335(var_232_bool, var_224_bool, var_225_object, var_226_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_305_bool = var_230_bool == 0; //@nz
			if(var_305_bool != 0) {
			} else {
				var_173_bool = 0;
		} else {
				var_311_float = var_157_float * var_157_float;
				var_312_bool = var_176_float >= var_311_float;
				if(var_312_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_177_cvector);
					CanReachByPF(var_178_bool, var_177_cvector);
					var_313_bool = var_178_bool == 0; //@nz
					if(var_313_bool != 0) {
						var_314_bool = 0; var_315_object = Obj(); var_316_float = 0; var_317_float = 0; var_318_bool = 0; var_319_bool = 0;
						var_315_object = var_0_bool;
						var_169_float = var_316_float;
						TaskCall(2);
						func_335(var_322_bool, var_314_bool, var_315_object, var_316_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_323_bool = var_320_bool == 0; //@nz
						if(var_323_bool != 0) {
							goto Label_831;
						}
						var_173_bool = 0;
						goto Label_659;
					}
					var_324_bool = var_173_bool == 0; //@nz
					if(var_324_bool != 0) {
						var_325_object = Obj();
						var_325_object = var_0_bool;
						func_1759(var_325_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1261(var_179_float);
						StopAsync();
						var_173_bool = 1;
						var_336_bool = 0; var_337_object = Obj();
						var_337_object = var_0_bool;
						func_1609(var_336_bool, var_337_object);
						var_338_bool = var_336_bool == 0; //@nz
						if(var_338_bool != 0) {
							goto Label_831;
						}
					}
					rand(var_179_float);
					var_339_bool = 0;
					var_341_bool = var_179_float < (float)0.6000000238418579;
					if(var_341_bool != 1) {
						var_342_bool = 0;
						func_1218((bool)1, var_342_bool);
						if(var_342_bool != 1) {
							var_339_bool = 0;
						}
					}
					if(var_339_bool != 0) {
						Face(var_0_bool);
						func_1268();
						PlayAnimation("all", "attack_stay");
						var_379_bool = 0; var_380_float = 0;
						var_157_float = var_380_float;
						func_1086(var_179_float, var_379_bool, var_380_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1261(var_179_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_601_bool = 0;
						func_1218(var_179_float, var_601_bool);
						var_602_bool = var_601_bool == 0; //@nz
						if(var_602_bool == 0) goto Label_821;
						var_603_bool = 0; var_604_object = Obj();
						var_604_object = var_0_bool;
						func_1609(var_603_bool, var_604_object);
						var_605_bool = var_603_bool == 0; //@nz
						if(var_605_bool != 0) {
							goto Label_831;
						}
						@@@var_0_bool:GetPFPosition(var_170_cvector);
						GetPFPosition(var_171_cvector);
						var_175_cvector = var_170_cvector - var_171_cvector;
						var_176_float = var_175_cvector | var_175_cvector;
						var_606_float = var_157_float * var_157_float;
						var_607_bool = var_176_float < var_606_float;
						if(var_607_bool == 0) goto Label_821;
						var_608_bool = 0; var_609_float = 0;
						var_157_float = var_609_float;
						func_922(var_178_bool, var_179_float, var_608_bool, var_609_float);
						var_610_bool = var_608_bool == 0; //@nz
						if(var_610_bool == 0) goto Label_821;
						goto Label_831;
				}
					var_611_bool = 0; var_612_float = 0;
					var_157_float = var_612_float;
					func_922(var_178_bool, var_179_float, var_611_bool, var_612_float);
					var_613_bool = var_611_bool == 0; //@nz
					if(var_613_bool != 0) {
						goto Label_831;
					}
					var_173_bool = 1;

				}
			Label_821:
				goto Label_830;
		}
		Label_830:
			goto Label_659;

		}
	}
Label_831:
	WaitForAnimEnd();
	var_306_object = var_3_object;
	if(var_306_object != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_309_bool = var_172_bool;
	if(var_309_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_133(var_88_float)
{
	var_89_float = 0; var_90_float = 0;
	GetCameraFarDistance(var_90_float);
	var_90_float = var_88_float;
	return 2;
}


func_1157(var_392_bool)
{
	var_393_bool = 0;
	var_393_bool = 0;
	var_394_bool = 0;
	func_1129(var_393_bool, var_394_bool);
	if(var_394_bool != 0) {
		var_411_bool = 0;
		func_1173(var_392_bool, var_393_bool, var_411_bool);
		if(var_411_bool != 0) {
			var_393_bool = 1;
		}
	}
	if(var_393_bool != 0) {
		var_392_bool = 1;
		return 0;
	}
	var_392_bool = 0;
	return 0;
}


func_2186()
{
	var_241_int = 0; var_242_bool = 0; var_243_int = 0; var_244_int = 0; var_245_bool = 0; var_246_int = 0;
	ClearSubContainer((int)0);
	func_1915((int)0);
	var_248_int = var_246_int;
	var_249_int = 0; var_250_int = 0;
	var_253_float = var_246_int * (int)5;
	var_250_int = (int)10 + var_253_float;
	func_1987((int)0, var_250_int);
	var_254_string = ""; var_255_int = 0; var_256_int = 0;
	func_1786("bottle_water", (int)1, (int)3);
	var_257_string = ""; var_258_int = 0; var_259_int = 0;
	func_1786("rusk", (int)1, (int)20);
	var_260_string = ""; var_261_int = 0; var_262_int = 0;
	func_1786("hook", (int)1, (int)30);
	var_263_string = ""; var_264_int = 0; var_265_int = 0;
	func_1786("watch", (int)1, (int)30);
	var_267_bool = var_246_int >= (int)3;
	if(var_267_bool != 0) {
		var_268_string = ""; var_269_int = 0; var_270_int = 0; var_271_int = 0;
		func_1797("alpha_pills", (int)1, (int)4, (int)3);
	}
	var_273_bool = var_246_int >= (int)4;
	if(var_273_bool != 0) {
		var_274_string = ""; var_275_int = 0; var_276_int = 0; var_277_int = 0;
		func_1797("beta_pills", (int)1, (int)8, (int)3);
	}
	var_279_bool = var_246_int >= (int)6;
	if(var_279_bool != 0) {
		var_280_string = ""; var_281_int = 0; var_282_int = 0; var_283_int = 0;
		func_1797("gamma_pills", (int)1, (int)16, (int)3);
	}
	return 6;
}


func_1677(var_15_object, var_16_int, var_17_float)
{
	var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0);
	var_36_bool = 0;
	var_36_bool = 0;
	var_37_bool = 0;
	var_37_bool = 0;
	var_38_object = var_15_object;
	if(var_38_object != 0) {
		var_40_bool = var_16_int != (int)4;
		if(var_40_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		var_42_bool = var_16_int != (int)5;
		if(var_42_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
		var_45_cvector = CVector(0,0,0); var_46_object = Obj();
		var_15_object = var_46_object;
		func_1463(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_1859(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		CreateVectorVector(var_28_object);
		var_29_int = 1;

	Label_1706:
		var_57_int = "hit" + var_29_int;
		GetGeometryLocator(var_57_int, var_30_bool, var_31_cvector, var_32_cvector);
		var_58_bool = var_30_bool == 0; //@nz
		if(var_58_bool != 0) {
		} else {
			var_106_int = var_32_cvector | var_27_cvector;
			var_108_bool = var_106_int >= (float)0.7071067690849304;
			if(var_108_bool != 0) {
				@@var_28_object:add(var_31_cvector);
			}
			var_29_int = var_29_int + (int)1;
			goto Label_1706;
		}
		@@var_28_object:size(var_33_int);
		var_59_int = var_33_int;
		if(var_59_int != 0) {
			irand(var_34_int, var_33_int);
			@@var_28_object:get(var_35_cvector, var_34_int);
			var_60_object = Obj(); var_61_int = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
			var_15_object = var_60_object;
			var_16_int = var_61_int;
			var_17_float = var_62_float;
			var_35_cvector = var_63_cvector;
			var_64_cvector = -var_27_cvector;
			func_1745(var_62_float, var_63_cvector, var_64_cvector);
			return 18;
		}
		var_28_object = 0;
	}
	var_105_object = Obj();
	var_15_object = var_105_object;
	func_1633(var_105_object);
	return 18;
	
}


func_145(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1173(var_0_bool, var_4_bool, var_411_bool)
{
	var_412_object = Obj(); var_413_bool = 0; var_414_float = 0; var_415_cvector = CVector(0,0,0); var_416_cvector = CVector(0,0,0); var_417_object = Obj(); var_418_bool = 0; var_419_float = 0; var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0);
	GetScene(var_417_object);
	var_418_bool = 0;
	
Label_1177:
	var_422_cvector = CVector(0,0,0); var_423_object = Obj();
	var_423_object = var_0_bool;
	func_1463(var_422_cvector, var_423_object);
	var_428_int = -var_422_cvector;
	FindDirLength(var_419_float, var_428_int, var_4_bool);
	var_429_bool = var_419_float < var_4_bool;
	if(var_429_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_420_cvector);
		GetPFPosition(var_421_cvector);
		WaitForAnimEnd();
		func_1261(var_421_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_418_bool = 1;
		var_433_bool = 0;
		func_1129(var_421_cvector, var_433_bool);
		var_434_bool = var_433_bool == 0; //@nz
		if(var_434_bool != 0) {
			goto Label_1215;
		}
		goto Label_1177;
	}
Label_1215:
	var_418_bool = var_411_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_161(var_98_bool)
{
	var_98_bool = 0;
	return 0;
}


func_163(var_92_object, var_93_cvector)
{
	var_94_object = Obj(); var_95_object = Obj();
	FindShiftedPathTo(var_95_object, var_93_cvector);
	var_95_object = var_92_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1218(var_0_bool, var_342_bool)
{
	var_343_bool = 0; var_344_bool = 0;
	var_347_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_347_bool != 0) {
		@@@var_0_bool:IsAttacking(var_344_bool);
		var_344_bool = var_342_bool;
		return 2;
	}
	var_342_bool = 0;
	return 2;
}


func_1229(var_2_object, var_5_bool)
{
	var_459_float = 0; var_460_int = 0; var_461_float = 0; var_462_int = 0;
	var_463_bool = var_2_object == 0; //@nz
	if(var_463_bool != 0) {
		return 4;
	}
	var_464_bool = var_5_bool;
	if(var_464_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_467_bool = var_5_bool > (int)0;
		if(var_467_bool != 0) {
			return 4;
		}
	}
	rand(var_461_float);
	var_468_float = 0;
	func_1279(var_468_float);
	var_469_bool = var_461_float < var_468_float;
	if(var_469_bool != 0) {
		irand(var_462_int, var_2_object);
		var_462_int = var_462_int + (int)1;
		var_472_int = "attack" + var_462_int;
		Speak(var_472_int);
		var_473_int = 0;
		func_1277(var_473_int);
		var_5_bool = var_473_int;
	}
	return 4;
}


func_2257()
{
	var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0;
	ClearSubContainer((int)0);
	func_1915((int)0);
	var_22_int = var_20_int;
	var_28_string = ""; var_29_int = 0; var_30_int = 0; var_31_int = 0;
	func_1797("fresh_meat", (int)1, (int)4, (int)3);
	var_44_string = ""; var_45_int = 0; var_46_int = 0; var_47_int = 0;
	func_1797("dried_meat", (int)1, (int)4, (int)3);
	var_48_string = ""; var_49_int = 0; var_50_int = 0; var_51_int = 0;
	func_1797("smoked_meat", (int)1, (int)4, (int)3);
	var_52_string = ""; var_53_int = 0; var_54_int = 0; var_55_int = 0;
	func_1797("vegetables", (int)1, (int)3, (int)3);
	var_57_bool = var_20_int >= (int)3;
	if(var_57_bool != 0) {
		var_58_string = ""; var_59_int = 0; var_60_int = 0;
		func_1786("revolver_ammo", (int)1, (int)5);
		var_67_string = ""; var_68_int = 0; var_69_int = 0;
		func_1786("rifle_ammo", (int)1, (int)5);
		var_70_string = ""; var_71_int = 0; var_72_int = 0;
		func_1786("samopal_ammo", (int)1, (int)5);
	}
	return 6;
}


func_1745(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	GetScene(var_24_object);
	AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	var_28_object = Obj();
	var_17_object = var_28_object;
	func_1633(var_28_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1759(var_325_object)
{
	var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0);
	@@var_325_object:GetPosition(var_329_cvector);
	GetPosition(var_330_cvector);
	var_331_cvector = var_329_cvector - var_330_cvector;
	var_332_float = GetByIndex(var_331_cvector, 0);
	var_333_float = GetByIndex(var_331_cvector, 2);
	RotateAsync(var_332_float, var_333_float);
	return 6;
}


func_1770(var_114_bool)
{
	var_115_bool = 0; var_116_bool = 0;
	IsLoaded(var_116_bool);
	var_116_bool = var_114_bool;
	return 2;
}


func_235()
{
	var_100_int = 0; var_101_int = 0; var_102_int = 0; var_103_int = 0; var_104_bool = 0; var_105_float = 0; var_106_bool = 0; var_107_int = 0; var_108_int = 0; var_109_int = 0; var_110_int = 0; var_111_bool = 0; var_112_float = 0; var_113_bool = 0;
	WaitForAnimEnd();
	var_114_bool = 0;
	func_1770(var_114_bool);
	var_117_bool = var_114_bool == 0; //@nz
	if(var_117_bool != 0) {
		return 14;
	}
	func_1951((int)0);
	var_118_int = var_107_int;
	var_108_int = 0;
	
Label_249:
	var_131_bool = 0;
	var_131_bool = 0;
	var_133_bool = var_108_int < (int)5;
	if(var_133_bool != 0) {
		var_134_bool = 0;
		func_1770(var_134_bool);
		if(var_134_bool != 0) {
			var_131_bool = 1;
		}
	}
	if(var_131_bool != 0) {
		irand(var_109_int, (int)3);
		var_137_bool = var_109_int == (int)0;
		if(var_137_bool != 0) {
			var_138_int = var_107_int;
			if(var_138_int == 0) goto Label_282;
			irand(var_110_int, var_107_int);
			var_140_string = ""; var_141_int = 0;
			var_110_int = var_141_int;
			func_1944(var_140_string, var_141_int);
			PlayAnimation("all", var_140_string);
			WaitForAnimEnd(var_111_bool);
			var_142_bool = var_111_bool == 0; //@nz
			if(var_142_bool != 0) {
			} else {
		} else {
				var_147_bool = var_109_int == (int)1;
				if(var_147_bool != 0) {
					rand(var_112_float, (int)4);
					var_150_int = var_112_float + (int)1;
					Sleep(var_150_int, var_113_bool);
					var_151_bool = var_113_bool == 0; //@nz
					if(var_151_bool != 0) {
						goto Label_311;
					}
					goto Label_300;
				}
				var_152_int = var_108_int;
				if(var_152_int == 0) goto Label_300;
				goto Label_311;
		}
		Label_300:
			var_143_bool = 0;
			func_314(var_143_bool);
			var_144_bool = var_143_bool == 0; //@nz
			if(var_144_bool != 0) {
				goto Label_311;
			}
			ResetAAS();
			var_108_int = var_108_int + (int)1;
			goto Label_249;

		}
	}
Label_311:
	ResetAAS();
	return 14;
	
}


func_1261(var_0_bool)
{
	var_217_object = Obj();
	var_217_object = var_0_bool;
	func_1924(var_217_object);
	return 0;
}


func_1775(var_15_object)
{
	var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0);
	@@var_15_object:GetEyesHeight(var_18_float);
	var_19_cvector = CVector(0.0, 0.0, 0.0);
	var_20_float = GetByIndex(var_19_cvector, 1);
	var_18_float = var_20_float;
	SetByIndex(var_19_cvector, 1) = var_20_float;
	LookAsync(var_15_object, "head", var_19_cvector);
	return 4;
}


func_1266(var_556_int)
{
	var_556_int = 0;
	return 0;
}


func_1268()
{
	var_348_string = "";
	func_1812("attack_stay");
	return 0;
}


func_1273()
{
	return 0;
}


func_1786(var_58_string, var_59_int, var_60_int)
{
	var_61_bool = 0; var_62_bool = 0;
	var_63_bool = 0; var_64_int = 0; var_65_int = 0;
	var_59_int = var_64_int;
	var_60_int = var_65_int;
	func_1887(var_63_bool, var_64_int, var_65_int);
	if(var_63_bool != 0) {
		AddItem(var_62_bool, var_58_string, (int)0);
	}
	return 2;
}


func_1275(var_581_bool)
{
	var_581_bool = 1;
	return 0;
}


func_1277(var_473_int)
{
	var_473_int = 1;
	return 0;
}


func_1279(var_468_float)
{
	var_468_float = 0.5;
	return 0;
}


func_1281(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	IsPlayerActor(var_22_object, var_24_bool);
	var_25_bool = var_24_bool;
	if(var_25_bool != 0) {
		func_2059();
	} else {
		func_2186();
	}
	func_2035();
	var_158_object = Obj();
	var_22_object = var_158_object;
	func_1301(var_158_object);
	return 2;
	
}


func_1797(var_28_string, var_29_int, var_30_int, var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0;
	var_36_bool = 0; var_37_int = 0; var_38_int = 0;
	var_29_int = var_37_int;
	var_30_int = var_38_int;
	func_1887(var_36_bool, var_37_int, var_38_int);
	if(var_36_bool != 0) {
		irand(var_34_int, var_31_int);
		var_43_int = var_34_int + (int)1;
		AddItem(var_35_bool, var_28_string, (int)0, var_43_int);
	}
	return 4;
}


func_2315(var_54_int, var_55_string)
{
	var_56_int = 0; var_57_int = 0;
	GetInvItemByName(var_57_int, var_55_string);
	var_57_int = var_54_int;
	return 2;
}


func_2320(var_20_bool, var_21_object, var_22_bool)
{
	var_23_string = ""; var_24_string = "";
	var_25_bool = 0; var_26_object = Obj(); var_27_string = "";
	var_21_object = var_26_object;
	func_1483(var_25_bool, var_26_object, "class");
	var_34_bool = var_25_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_20_bool = 0;
		return 2;
	}
	@@var_21_object:GetProperty("class", var_24_string);
	var_36_bool = 0;
	var_36_bool = 1;
	var_37_bool = 0;
	var_37_bool = 1;
	var_38_bool = 0;
	var_38_bool = 1;
	var_39_bool = 0;
	var_39_bool = 1;
	var_40_bool = 0;
	var_40_bool = 1;
	var_41_bool = 0;
	var_41_bool = 1;
	var_42_bool = 0;
	var_42_bool = 1;
	var_43_bool = 0;
	var_43_bool = 1;
	var_44_bool = 0;
	var_44_bool = 1;
	var_45_bool = 0;
	var_45_bool = 1;
	var_47_bool = var_24_string == "patrol";
	if(var_47_bool != 1) {
		var_49_bool = var_24_string == "sanitar";
		if(var_49_bool != 1) {
			var_45_bool = 0;
		}
	}
	if(var_45_bool != 1) {
		var_51_bool = var_24_string == "soldier";
		if(var_51_bool != 1) {
			var_44_bool = 0;
		}
	}
	if(var_44_bool != 1) {
		var_53_bool = var_24_string == "woman";
		if(var_53_bool != 1) {
			var_43_bool = 0;
		}
	}
	if(var_43_bool != 1) {
		var_55_bool = var_24_string == "wasted_girl";
		if(var_55_bool != 1) {
			var_42_bool = 0;
		}
	}
	if(var_42_bool != 1) {
		var_57_bool = var_24_string == "vaxxabitka";
		if(var_57_bool != 1) {
			var_41_bool = 0;
		}
	}
	if(var_41_bool != 1) {
		var_59_bool = var_24_string == "vaxxabit";
		if(var_59_bool != 1) {
			var_40_bool = 0;
		}
	}
	if(var_40_bool != 1) {
		var_61_bool = var_24_string == "little_girl";
		if(var_61_bool != 1) {
			var_39_bool = 0;
		}
	}
	if(var_39_bool != 1) {
		var_63_bool = var_24_string == "girl";
		if(var_63_bool != 1) {
			var_38_bool = 0;
		}
	}
	if(var_38_bool != 1) {
		var_65_bool = var_24_string == "dohodyaga";
		if(var_65_bool != 1) {
			var_37_bool = 0;
		}
	}
	if(var_37_bool != 1) {
		var_67_bool = var_24_string == "nudegirl";
		if(var_67_bool != 1) {
			var_36_bool = 0;
		}
	}
	if(var_36_bool != 0) {
		var_20_bool = 1;
		return 2;
	}
	var_68_bool = var_22_bool;
	if(var_68_bool != 0) {
		var_20_bool = 0;
		return 2;
	}
	var_20_bool = 1;
	var_69_bool = 0;
	var_69_bool = 1;
	var_70_bool = 0;
	var_70_bool = 1;
	var_71_bool = 0;
	var_71_bool = 1;
	var_72_bool = 0;
	var_72_bool = 1;
	var_73_bool = 0;
	var_73_bool = 1;
	var_75_bool = var_24_string == "worker";
	if(var_75_bool != 1) {
		var_77_bool = var_24_string == "butcher";
		if(var_77_bool != 1) {
			var_73_bool = 0;
		}
	}
	if(var_73_bool != 1) {
		var_79_bool = var_24_string == "boy";
		if(var_79_bool != 1) {
			var_72_bool = 0;
		}
	}
	if(var_72_bool != 1) {
		var_81_bool = var_24_string == "unosha";
		if(var_81_bool != 1) {
			var_71_bool = 0;
		}
	}
	if(var_71_bool != 1) {
		var_83_bool = var_24_string == "wasted_male";
		if(var_83_bool != 1) {
			var_70_bool = 0;
		}
	}
	if(var_70_bool != 1) {
		var_85_bool = var_24_string == "alkash";
		if(var_85_bool != 1) {
			var_69_bool = 0;
		}
	}
	if(var_69_bool != 1) {
		var_87_bool = var_24_string == "morlok";
		if(var_87_bool != 1) {
			var_20_bool = 0;
		}
	}
	return 2;
}


func_1812(var_182_string)
{
	var_183_bool = 0; var_184_int = 0; var_185_bool = 0; var_186_int = 0; var_187_bool = 0; var_188_float = 0; var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_bool = 0; var_192_int = 0; var_193_bool = 0; var_194_int = 0; var_195_bool = 0; var_196_float = 0; var_197_cvector = CVector(0,0,0); var_198_cvector = CVector(0,0,0);
	IsExisting3DSound(var_191_bool, var_182_string);
	var_199_bool = var_191_bool == 0; //@nz
	if(var_199_bool != 0) {
		var_192_int = 0;

	Label_1818:
		var_201_int = var_192_int + (int)1;
		var_202_int = var_182_string + var_201_int;
		IsExisting3DSound(var_193_bool, var_202_int);
		var_203_bool = var_193_bool == 0; //@nz
		if(var_203_bool != 0) {
		} else {
			var_192_int = var_192_int + (int)1;
			goto Label_1818;
		}
		var_204_bool = var_192_int == 0; //@nz
		if(var_204_bool != 0) {
			return 16;
		}
		irand(var_194_int, var_192_int);
		var_206_int = var_194_int + (int)1;
		var_182_string = var_182_string + var_206_int;
	}
	Is3DSoundLoaded(var_195_bool, var_182_string);
	var_207_bool = var_195_bool;
	if(var_207_bool != 0) {
		GetEyesHeight(var_196_float);
		GetDirection(var_197_cvector);
		var_198_cvector = var_197_cvector * (int)50;
		var_209_float = GetByIndex(var_198_cvector, 1);
		var_209_float = var_209_float + var_196_float;
		SetByIndex(var_198_cvector, 1) = var_209_float;
		PlayGlobalSound(var_182_string, var_198_cvector);
	}
	return 16;
	
}


func_1301(var_158_object)
{
	EventDisable(0);
	var_159_object = Obj();
	var_158_object = var_159_object;
	func_1326(var_159_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1312:
	Hold();
	goto Label_1312;
}
EMIT "Return(); Pop(0)";


func_1326(var_159_object)
{
	var_160_cvector = CVector(0,0,0); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); var_163_cvector = CVector(0,0,0); var_164_string = ""; var_165_object = Obj(); var_166_bool = 0; var_167_bool = 0; var_168_float = 0; var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_string = ""; var_175_object = Obj(); var_176_bool = 0; var_177_bool = 0; var_178_float = 0; var_179_cvector = CVector(0,0,0);
	var_180_bool = var_159_object == 0; //@ne
	if(var_180_bool != 0) {
		var_181_string = "";
		func_1417("fdie");
	} else {
		@@var_159_object:GetPosition(var_170_cvector);
		GetPosition(var_171_cvector);
		GetDirection(var_172_cvector);
		var_173_cvector = var_171_cvector - var_170_cvector;
		var_213_float = GetByIndex(var_173_cvector, 0);
		var_214_float = GetByIndex(var_172_cvector, 0);
		var_215_float = var_213_float * var_214_float;
		var_216_float = GetByIndex(var_173_cvector, 2);
		var_217_float = GetByIndex(var_172_cvector, 2);
		var_218_float = var_216_float * var_217_float;
		var_219_int = var_215_float + var_218_float;
		var_221_bool = var_219_int >= (int)0;
		if(var_221_bool != 0) {
			var_174_string = "fdie";
		} else {
				var_174_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_159_object = var_175_object;
		var_224_bool = IsFuncExist(var_159_object, "GetScriptProperty", (int)2);
		if(var_224_bool != 0) {
			@@var_159_object:HasScriptProperty(var_176_bool, "Owner");
			var_226_bool = var_176_bool;
			if(var_226_bool != 0) {
				@@var_159_object:GetScriptProperty(var_175_object, "Owner");
				var_228_bool = var_175_object == 0; //@ne
				if(var_228_bool != 0) {
					var_159_object = var_175_object;
				}
			}
		}
		var_231_bool = IsFuncExist(var_175_object, "@GetEyesHeight", (int)1);
		if(var_231_bool != 0) {
			@@var_175_object:GetEyesHeight(var_178_float);
			var_179_cvector = CVector(0.0, 0.0, 0.0);
			var_232_float = GetByIndex(var_179_cvector, 1);
			var_178_float = var_232_float;
			SetByIndex(var_179_cvector, 1) = var_232_float;
			LookAsync(var_159_object, "head", var_179_cvector);
			var_177_bool = 1;
		} else {
			var_177_bool = 0;

		}
		var_234_string = "";
		var_174_string = var_234_string;
		func_1812(var_234_string);
		PlayAnimation("all", var_174_string);
		WaitForAnimEnd();
		var_236_bool = var_177_bool;
		if(var_236_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_174_string);
		RemoveEnvelope();
		var_175_object = 0;
	}
	return 20;
	
}


func_314(var_143_bool)
{
	var_143_bool = 1;
	return 0;
}


func_316()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1853(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	self(var_19_object);
	var_19_object = var_17_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1859(var_43_cvector, var_44_cvector)
{
	var_51_float = 0; var_52_float = 0;
	var_53_int = var_44_cvector | var_44_cvector;
	var_52_float = sqrt(var_53_int);
	var_54_float = 9.999999974752427e-07;
	var_55_bool = var_52_float < var_54_float;
	if(var_55_bool != 0) {
		var_43_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_43_cvector = var_44_cvector / var_52_float;
	return 2;
}


func_1869(var_529_float, var_530_float, var_531_float)
{
	var_534_bool = var_530_float < var_531_float;
	if(var_534_bool != 0) {
		var_530_float = var_529_float;
	} else {
		var_531_float = var_529_float;
	}
	return 0;
	
}


func_335(var_2_object, var_224_bool, var_225_object, var_226_float, var_227_float, var_228_bool, var_229_bool)
{
	var_233_bool = 0; var_234_bool = 0; var_235_bool = 0; var_236_bool = 0;
	var_237_object = Obj();
	var_225_object = var_237_object;
	func_1924(var_237_object);
	SetTimer((int)1, (int)5);
	CanSee(var_235_bool, var_225_object);
	var_240_bool = var_235_bool;
	if(var_240_bool != 0) {
		var_2_object = true;
		var_241_object = Obj();
		var_225_object = var_241_object;
		func_1775(var_241_object);
	} else {
		var_2_object = false;
	}
	var_248_bool = 0; var_249_object = Obj();
	var_225_object = var_249_object;
	func_1478(var_248_bool, var_249_object);
	if(var_248_bool != 0) {
		var_250_object = Obj();
		func_1853(var_250_object);
		SendPlayerEnemy(var_225_object, var_250_object);
	}
	var_251_bool = 0; var_252_object = Obj(); var_253_float = 0; var_254_float = 0; var_255_bool = 0; var_256_bool = 0;
	var_225_object = var_252_object;
	var_226_float = var_253_float;
	var_227_float = var_254_float;
	var_228_bool = var_255_bool;
	var_229_bool = var_256_bool;
	func_440(var_235_bool, var_236_bool, var_251_bool, var_252_object, var_253_float, var_254_float, var_255_bool, var_256_bool);
	var_251_bool = var_236_bool;
	var_302_object = var_2_object;
	if(var_302_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_236_bool = var_224_bool;
	return 4;
	
}


func_848(var_1_bool, var_2_object, var_4_bool)
{
	var_180_bool = 0; var_181_bool = 0; var_182_cvector = CVector(0,0,0); var_183_bool = 0; var_184_bool = 0; var_185_cvector = CVector(0,0,0);
	var_1_bool = 0;
	
Label_850:
	var_189_int = var_1_bool + (int)1;
	var_190_int = "attack_begin" + var_189_int;
	HasAnimation(var_183_bool, "all", var_190_int);
	var_191_bool = var_183_bool == 0; //@nz
	if(var_191_bool != 0) {
	} else {
			var_1_bool = var_1_bool + (int)1;
			goto Label_850;
	}
	var_2_object = 0;
	
Label_864:
	var_194_int = var_2_object + (int)1;
	var_195_int = "attack" + var_194_int;
	IsExisting3DSound(var_184_bool, var_195_int);
	var_196_bool = var_184_bool == 0; //@nz
	if(var_196_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_864;

	}
	GetAnimationOffset(var_185_cvector, "all", "bjump");
	var_199_float = GetByIndex(var_185_cvector, 2);
	var_4_bool = -var_199_float;
	return 6;
	
}


func_1876(var_539_float, var_540_float, var_541_float, var_542_float)
{
	var_543_bool = var_540_float < var_541_float;
	if(var_543_bool != 0) {
		var_541_float = var_539_float;
		return 0;
	}
	var_544_bool = var_540_float > var_542_float;
	if(var_544_bool != 0) {
		var_542_float = var_539_float;
		return 0;
	}
	var_540_float = var_539_float;
	return 0;
}


func_1887(var_36_bool, var_37_int, var_38_int)
{
	var_39_int = 0; var_40_int = 0;
	irand(var_40_int, var_38_int);
	var_36_bool = var_40_int < var_37_int;
	return 2;
}


func_1892(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj();
	CreateObjectSet(var_14_object);
	var_14_object = var_12_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1898(var_547_float)
{
	var_548_object = Obj(); var_549_object = Obj();
	CreateFloatVector(var_549_object);
	@@var_549_object:add(var_547_float);
	var_551_bool = var_547_float < (int)0;
	if(var_551_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_549_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_883(var_0_bool, var_477_float, var_478_int)
{
	var_479_object = Obj(); var_480_float = 0; var_481_float = 0; var_482_object = Obj(); var_483_float = 0; var_484_float = 0;
	var_486_float = var_477_float * (float)0.8999999761581421;
	GetVictim(var_486_float, var_482_object);
	ReportAttack(var_0_bool);
	var_487_bool = var_482_object == var_0_bool;
	if(var_487_bool != 0) {
		var_488_float = 0; var_489_object = Obj(); var_490_int = 0;
		var_482_object = var_489_object;
		var_478_int = var_490_int;
		func_599(var_490_int);
		var_488_float = var_483_float;
		var_491_float = 0; var_492_object = Obj(); var_493_float = 0; var_494_int = 0;
		var_482_object = var_492_object;
		var_483_float = var_493_float;
		var_495_int = 0; var_496_object = Obj(); var_497_int = 0;
		var_482_object = var_496_object;
		var_478_int = var_497_int;
		func_602(var_497_int);
		var_495_int = var_494_int;
		func_1495(var_491_float, var_492_object, var_493_float, var_494_int);
		var_491_float = var_484_float;
		var_556_int = 0;
		func_1266(var_556_int);
		ReportHit(var_0_bool, var_556_int, var_484_float, var_483_float);
		var_557_object = Obj(); var_558_float = 0;
		var_482_object = var_557_object;
		var_484_float = var_558_float;
		func_1273();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1915(var_22_int)
{
	var_23_float = 0; var_24_float = 0;
	GetGameTime(var_24_float);
	var_26_int = 0;
	var_26_int = var_24_float / (int)24;
	var_22_int = (int)1 + var_26_int;
	return 2;
}


func_1924(var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	IsPlayerActor(var_14_object, var_16_bool);
	var_17_bool = var_16_bool;
	if(var_17_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1417(var_181_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_182_string = "";
	var_181_string = var_182_string;
	func_1812(var_182_string);
	PlayAnimation("all", var_181_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_181_string);
	RemoveEnvelope();
	return 0;
}


func_1933()
{
	var_452_object = Obj(); var_453_object = Obj();
	GetScene(var_453_object);
	var_455_object = Obj();
	func_1853(var_455_object);
	BroadcastMessage("battle", var_455_object, var_453_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_398(var_2_bool)
{
	KillTimer((int)1);
	var_13_bool = var_2_bool;
	if(var_13_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	func_564(var_11_int);
	return 0;
}


func_2456()
{
	var_11_object = GlobalVars[0];
	func_1892(Obj());
	var_12_object = var_11_object;
	GlobalVars[0] = var_11_object;
	return 0;
}


func_1944(var_124_string, var_125_int)
{
	var_126_string = ""; var_127_string = "";
	var_128_int = var_125_int;
	if(var_128_int != 0) {
		"idle" = "idle" + var_125_int;
	}
	var_127_string = var_124_string;
	return 2;
}


func_922(var_0_bool, var_1_bool, var_440_bool, var_441_float)
{
	var_442_int = 0; var_443_bool = 0; var_444_int = 0; var_445_string = ""; var_446_int = 0; var_447_bool = 0; var_448_int = 0; var_449_string = "";
	func_1261(var_449_string);
	irand(var_446_int, var_1_bool);
	var_446_int = var_446_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_1933();
	var_458_int = "attack_begin" + var_446_int;
	PlayAnimation("all", var_458_int);
	WaitForAnimEnd();
	func_1229(var_448_int, var_449_string);
	var_474_bool = 0; var_475_object = Obj();
	var_475_object = var_0_bool;
	func_1609(var_474_bool, var_475_object);
	var_476_bool = var_474_bool == 0; //@nz
	if(var_476_bool != 0) {
		StopAsync();
		var_440_bool = 0;
		return 8;
	}
	var_477_float = 0; var_478_int = 0;
	var_441_float = var_477_float;
	var_446_int = var_478_int;
	func_883(var_449_string, var_477_float, var_478_int);
	var_561_int = "attack_middle" + var_446_int;
	HasAnimation(var_447_bool, "all", var_561_int);
	var_562_bool = var_447_bool;
	if(var_562_bool != 0) {
		func_1933();
		var_565_int = "attack_middle" + var_446_int;
		PlayAnimation("all", var_565_int);
		WaitForAnimEnd();
		func_1261(var_449_string);
		var_566_bool = 0; var_567_object = Obj();
		var_567_object = var_0_bool;
		func_1609(var_566_bool, var_567_object);
		var_568_bool = var_566_bool == 0; //@nz
		if(var_568_bool != 0) {
			StopAsync();
			var_440_bool = 0;
			return 8;
		}
		var_569_float = 0; var_570_int = 0;
		var_441_float = var_569_float;
		var_446_int = var_570_int;
		func_883(var_449_string, var_569_float, var_570_int);
		var_448_int = 1;

	Label_999:
		var_572_int = "attack_middle" + var_446_int;
		var_574_int = var_572_int + "_";
		var_449_string = var_574_int + var_448_int;
		HasAnimation(var_447_bool, "all", var_449_string);
		var_576_bool = var_447_bool == 0; //@nz
		if(var_576_bool != 0) {
		} else {
			func_1933();
			PlayAnimation("all", var_449_string);
			WaitForAnimEnd();
			func_1261(var_449_string);
			var_592_bool = 0; var_593_object = Obj();
			var_593_object = var_0_bool;
			func_1609(var_592_bool, var_593_object);
			var_594_bool = var_592_bool == 0; //@nz
			if(var_594_bool != 0) {
				StopAsync();
				var_440_bool = 0;
				var_595_float = 0; var_596_int = 0;
				var_441_float = var_595_float;
				var_446_int = var_596_int;
				func_883(var_449_string, var_595_float, var_596_int);
				var_448_int = var_448_int + (int)1;
				goto Label_999;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_580_int = "attack_end" + var_446_int;
	PlayAnimation("all", var_580_int);
	var_581_bool = 0;
	func_1275(var_581_bool);
	if(var_581_bool != 0) {
		var_582_bool = 0; var_583_float = 0;
		func_1059(var_582_bool, (float)0.75);
		StopAsync();
	}
	var_440_bool = 1;
	return 8;
	
}


func_2463(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	func_2629(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
	return 0;
}


func_1951(var_118_int)
{
	var_119_int = 0; var_120_bool = 0; var_121_int = 0; var_122_bool = 0;
	var_121_int = 0;
	
Label_1953:
	var_124_string = ""; var_125_int = 0;
	var_121_int = var_125_int;
	func_1944(var_124_string, var_125_int);
	HasAnimation(var_122_bool, "all", var_124_string);
	var_129_bool = var_122_bool == 0; //@nz
	if(var_129_bool != 0) {
	} else {
		var_121_int = var_121_int + (int)1;
		goto Label_1953;
	}
	var_121_int = var_118_int;
	return 4;
	
}


func_2470(var_76_object)
{
	var_77_object = Obj();
	var_76_object = var_77_object;
	func_2489(var_77_object);
	return 0;
}


func_1449(var_519_string, var_520_int)
{
	var_522_bool = var_520_int == (int)2;
	if(var_522_bool != 0) {
		var_519_string = "fire";
		return 0;
	EMIT "GOTO 0x5b5";
	}
	var_524_bool = var_520_int == (int)1;
	if(var_524_bool != 0) {
		var_519_string = "bullet";
		return 0;
	}
	var_519_string = "phys";
	return 0;
}


func_2476(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	func_2629(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
	return 0;
}


func_1968(var_138_int)
{
	var_139_int = 0; var_140_int = 0;
	GetVariable("branch", var_140_int);
	var_140_int = var_138_int;
	return 2;
}


func_2483(var_76_object)
{
	var_77_object = Obj();
	var_76_object = var_77_object;
	func_2489(var_77_object);
	return 0;
}


func_1974(var_15_object)
{
	var_16_int = 0;
	func_1968(var_16_int);
	var_21_bool = var_16_int == (int)1;
	if(var_21_bool != 0) {
		WorkWithCorpse(var_15_object);
	} else {
		Barter(var_15_object);
	}
	return 0;
	
}


func_1463(var_45_cvector, var_46_object)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	GetPosition(var_49_cvector);
	@@var_46_object:GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
	return 4;
}


func_440(var_0_bool, var_1_bool, var_251_bool, var_252_object, var_253_float, var_254_float, var_255_bool, var_256_bool)
{
	var_257_bool = 0; var_258_bool = 0; var_259_object = Obj(); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_float = 0; var_264_object = Obj(); var_265_bool = 0; var_266_bool = 0; var_267_object = Obj(); var_268_cvector = CVector(0,0,0); var_269_cvector = CVector(0,0,0); var_270_cvector = CVector(0,0,0); var_271_float = 0; var_272_object = Obj();
	var_0_bool = false;
	var_1_bool = var_252_object;
	var_256_bool = var_266_bool;
	
Label_444:
	var_273_bool = 0; var_274_object = Obj();
	var_252_object = var_274_object;
	func_580(var_273_bool, var_274_object);
	var_277_bool = var_273_bool == 0; //@nz
	if(var_277_bool != 0) {
		var_251_bool = 0;
		return 16;
	}
	@@var_252_object:GetPosition(var_268_cvector);
	GetPosition(var_269_cvector);
	var_270_cvector = var_268_cvector - var_269_cvector;
	var_271_float = var_270_cvector | var_270_cvector;
	var_278_bool = 0;
	var_278_bool = 0;
	var_280_bool = var_254_float > (int)0;
	if(var_280_bool != 0) {
		var_281_float = var_254_float * var_254_float;
		var_282_bool = var_271_float > var_281_float;
		if(var_282_bool != 0) {
			var_278_bool = 1;
		}
	}
	if(var_278_bool != 0) {
		Stop();
		var_251_bool = 0;
		return 16;
	}
	var_283_float = var_253_float * var_253_float;
	var_284_bool = var_271_float > var_283_float;
	if(var_284_bool != 0) {
		@@var_252_object:GetPFPosition(var_268_cvector);
		FindPathTo(var_272_object, var_268_cvector);
		var_285_bool = var_272_object != 0; //@nn
		if(var_285_bool != 0) {
			var_272_object = var_267_object;
			var_272_object = 0;
		}
		var_286_bool = var_267_object != 0; //@nn
		if(var_286_bool != 0) {
			var_287_bool = var_266_bool;
			if(var_287_bool == 0) goto Label_493;
			var_266_bool = 0;
			RotatePath(var_267_object, var_265_bool);
			var_288_bool = var_265_bool == 0; //@nz
			if(var_288_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_291_string = "";
				func_587(var_291_string);
				var_292_string = "";
				func_589(var_292_string);
				FollowPath(var_267_object, var_255_bool, var_265_bool, var_291_string, var_292_string);
				var_293_bool = var_265_bool == 0; //@nz
				if(var_293_bool != 0) {
					var_294_bool = var_0_bool;
					if(var_294_bool != 0) {
						var_267_object = 0;
						goto Label_540;
					EMIT "GOTO 0x201";
					}
				} else {
					var_267_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_265_bool);
					var_297_bool = var_265_bool == 0; //@nz
					if(var_297_bool != 0) {
						var_298_bool = var_0_bool;
						if(var_298_bool != 0) {
							var_267_object = 0;
							goto Label_540;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_540;
	}
			var_272_object = 0;
			goto Label_538;

		Label_538:
			var_267_object = 0;

		}
		goto Label_444;
	}
Label_540:
	var_251_bool = !var_0_bool;
	return 16;
	
}


func_2489(var_77_object)
{
	var_78_object = Obj(); var_79_bool = 0;
	var_77_object = var_78_object;
	TaskCall(3);
	func_591(var_78_object, (bool)1);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_1470(var_90_float, var_91_object)
{
	var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0);
	GetPosition(var_95_cvector);
	@@var_91_object:GetPosition(var_96_cvector);
	var_97_cvector = var_96_cvector - var_95_cvector;
	var_90_float = var_97_cvector | var_97_cvector;
	return 6;
}


func_1987(var_39_int, var_40_int)
{
	var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_bool = 0;
	var_48_bool = var_39_int > var_40_int;
	if(var_48_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_46_int = 0;
	var_50_bool = var_39_int != var_40_int;
	if(var_50_bool != 0) {
		var_51_int = var_40_int - var_39_int;
		irand(var_46_int, var_51_int);
	} else {
		var_60_bool = var_39_int == (int)0;
		if(var_60_bool == 0) goto Label_2005;
		return 4;
	}
Label_2005:
	var_46_int = var_46_int + var_39_int;
	var_53_bool = var_46_int == (int)0;
	if(var_53_bool != 0) {
		return 4;
	}
	var_54_int = 0; var_55_string = "";
	func_2315(var_54_int, "Money");
	AddItem(var_47_bool, var_54_int, (int)0, var_46_int);
	return 4;
	
}


func_2500(var_12_object)
{
	var_13_bool = 0; var_14_bool = 0;
	var_15_bool = var_12_object == 0; //@ne
	if(var_15_bool != 0) {
		return 2;
	}
	var_16_object = GlobalVars[0];
	@@var_16_object:in(var_14_bool, var_12_object);
	var_17_bool = var_14_bool == 0; //@nz
	if(var_17_bool != 0) {
		var_18_object = GlobalVars[0];
		@@var_18_object:add(var_12_object);
	}
	var_19_bool = 0; var_20_object = Obj();
	var_12_object = var_20_object;
	func_1478(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		var_23_object = Obj();
		func_1853(var_23_object);
		ReportReputationChange(var_12_object, var_23_object, (float)-0.07000000029802322);
	}
	return 2;
}


func_1478(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	IsPlayerActor(var_14_object, var_16_bool);
	var_16_bool = var_13_bool;
	return 2;
}


func_1483(var_25_bool, var_26_object, var_27_string)
{
	var_28_bool = 0; var_29_bool = 0;
	var_32_bool = IsFuncExist(var_26_object, "HasProperty", (int)2);
	var_33_bool = var_32_bool == 0; //@nz
	if(var_33_bool != 0) {
		var_25_bool = 0;
		return 2;
	}
	@@var_26_object:HasProperty(var_27_string, var_29_bool);
	var_29_bool = var_25_bool;
	return 2;
}


func_1495(var_491_float, var_492_object, var_493_float, var_494_int)
{
	var_498_int = 0; var_499_string = ""; var_500_int = 0; var_501_float = 0; var_502_float = 0; var_503_float = 0; var_504_int = 0; var_505_string = ""; var_506_int = 0; var_507_float = 0; var_508_float = 0; var_509_float = 0;
	var_510_bool = 0; var_511_object = Obj(); var_512_string = "";
	var_492_object = var_511_object;
	func_1483(var_510_bool, var_511_object, "health");
	var_513_bool = var_510_bool == 0; //@nz
	if(var_513_bool != 0) {
		var_491_float = 0.0;
		return 12;
	}
	var_514_bool = 0; var_515_object = Obj(); var_516_string = "";
	var_492_object = var_515_object;
	func_1483(var_514_bool, var_515_object, "armor");
	var_517_bool = var_514_bool == 0; //@nz
	if(var_517_bool != 0) {
		var_504_int = 0;
	} else {
			@@var_492_object:GetProperty("armor", var_504_int);
	}
	var_519_string = ""; var_520_int = 0;
	var_494_int = var_520_int;
	func_1449(var_519_string, var_520_int);
	var_505_string = "armor_" + var_519_string;
	var_525_bool = 0; var_526_object = Obj(); var_527_string = "";
	var_492_object = var_526_object;
	var_505_string = var_527_string;
	func_1483(var_525_bool, var_526_object, var_527_string);
	var_528_bool = var_525_bool == 0; //@nz
	if(var_528_bool != 0) {
		var_506_int = 0;
	} else {
		@@var_492_object:GetProperty(var_505_string, var_506_int);

	}
	var_529_float = 0; var_530_float = 0; var_531_float = 0;
	var_532_int = var_504_int + var_506_int;
	var_530_float = var_532_int / (float)100.0;
	func_1869(var_529_float, var_530_float, (float)1);
	var_529_float = var_507_float;
	@@var_492_object:GetProperty("health", var_508_float);
	var_537_int = (int)1 - var_507_float;
	var_509_float = var_493_float * var_537_int;
	var_539_float = 0; var_540_float = 0; var_541_float = 0; var_542_float = 0;
	var_540_float = var_508_float - var_509_float;
	func_1876(var_539_float, var_540_float, (float)0, (float)1);
	@@var_492_object:SetProperty("health", var_539_float);
	var_545_bool = 0; var_546_object = Obj();
	var_492_object = var_546_object;
	func_1478(var_545_bool, var_546_object);
	if(var_545_bool != 0) {
		var_547_float = 0;
		var_547_float = -var_509_float;
		func_1898(var_547_float);
	}
	var_509_float = var_491_float;
	return 12;
	
}


func_2524(var_145_object)
{
	var_146_object = Obj();
	var_145_object = var_146_object;
	func_2500(var_146_object);
	var_147_object = Obj(); var_148_bool = 0;
	var_145_object = var_147_object;
	TaskCall(3);
	func_591(var_147_object, (bool)1);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_2018(var_144_string)
{
	var_145_object = Obj(); var_146_int = 0; var_147_bool = 0; var_148_object = Obj(); var_149_int = 0; var_150_bool = 0;
	CreateInvItem(var_148_object);
	@@var_148_object:SetItemName(var_144_string);
	@@var_148_object:SetProperty("Organ", (int)1);
	@@var_148_object:GetItemID(var_149_int);
	AddItem(var_150_bool, var_148_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_2539(var_12_object)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	func_1478(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		var_17_object = Obj();
		func_1853(var_17_object);
		ReportReputationChange(var_12_object, var_17_object, (float)-0.12999999523162842, (bool)1);
	}
	var_22_object = Obj();
	var_12_object = var_22_object;
	TaskCall(4);
	func_1281(var_22_object);
	TaskReturn();
	return 0;
}


func_2035()
{
	var_138_int = 0;
	func_1968(var_138_int);
	var_143_bool = var_138_int != (int)1;
	if(var_143_bool != 0) {
		return 0;
	}
	var_144_string = "";
	func_2018("liver");
	var_155_string = "";
	func_2018("kidney");
	var_156_string = "";
	func_2018("heart");
	var_157_string = "";
	func_2018("blood");
	return 0;
}


