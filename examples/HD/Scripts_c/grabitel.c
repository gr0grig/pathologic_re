// @IMPORTS: Face/1,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,GetScene/1,GetGeometryLocator/3,AddActorByType/6,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,SetSpeed/1,Stop/0,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,IsInWalkMode/1,GetBrightness/1,rand/2,GetRandomPFPointInCircle/4,FollowPath/3,GetCameraFarDistance/1,StopGroup0/0,FindShiftedPathTo/2,WaitForAnimEnd/1,ResetAAS/0,StopAnimation/0,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Rotate/3,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,RotateAsync/2,IsLoaded/1,AddItem/3,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateObjectSet/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetVariable/2,GetProperty/2,SignalDeath/1,WorkWithCorpse/1,Barter/1,Trace/1,AddItem/4,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2
// @STRINGS: W:all|W:aattack_begin1|W:aattack_end1|W:knife|W:scripted|W:grabitel_knife.xml|W:Owner|A:SetScriptProperty|W:Target|A:GetPosition|A:GetEyesHeight|W:StartDirection|W:kill|W:attack_off|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|W:walk|W:run|W:hunt|W:fdie|W:bdie|W:GetScriptProperty|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:blood_dir.xml|W:woman|W:worker|W:butcher|W:wasted_girl|W:boy|W:vaxxabitka|W:unosha|W:wasted_male|W:alkash|W:dohodyaga|W:vaxxabit|W:nudegirl|W:morlok|W:reputation|W:battle|W:god_mode|W:idle|W:class|A:in|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:Knife|W:lockpick|W:grabitel_mark
// @GLOBALS: 0:bool:,1:object:
// @RUN_OP: 0x477
// @RUN_TASK: 3
// @TASK_0: vars=bool params=2
// @EVENT_17: op=0x6b vars=object
// @EVENT_30: op=0x71 vars=object,object,bool
// @EVENT_26: op=0x78 vars=string
// @TASK_1: vars=object,int,int,bool,float,int params=2
// @EVENT_17: op=0xb6 vars=object
// @EVENT_30: op=0xbc vars=object,object,bool
// @EVENT_26: op=0xc3 vars=string
// @TASK_2: vars=bool,object,bool params=6
// @EVENT_17: op=0x35f vars=object
// @EVENT_30: op=0x365 vars=object,object,bool
// @EVENT_26: op=0x36c vars=string
// @EVENT_7: op=0x3a8 vars=int
// @EVENT_1: op=0x3c3 vars=object
// @EVENT_2: op=0x3d2 vars=object
// @EVENT_10: op=0x458 vars=object
// @EVENT_41: op=0x463 vars=object
// @TASK_3: vars=bool,bool,bool params=0
// @EVENT_41: op=0x48b vars=object
// @EVENT_7: op=0x494 vars=int
// @EVENT_1: op=0x4bb vars=object
// @EVENT_3: op=0x4c9 vars=object
// @EVENT_17: op=0x4d7 vars=object
// @EVENT_30: op=0x4e0 vars=object,object,bool
// @EVENT_10: op=0x52c vars=object
// @EVENT_28: op=0x530 vars=
// @TASK_4: vars= params=0
// @EVENT_1: op=0x549 vars=object
// @EVENT_3: op=0x557 vars=object
// @EVENT_17: op=0x565 vars=object
// @EVENT_30: op=0x56e vars=object,object,bool
// @TASK_5: vars= params=1
// @EVENT_41: op=0x5d9 vars=object
// @EVENT_1: op=0x5e2 vars=object
// @EVENT_3: op=0x5f0 vars=object
// @EVENT_17: op=0x5fe vars=object
// @EVENT_30: op=0x607 vars=object,object,bool
// @TASK_6: vars=bool,object,bool params=1
// @EVENT_41: op=0x651 vars=object
// @EVENT_17: op=0x65a vars=object
// @EVENT_7: op=0x6c9 vars=int
// @EVENT_10: op=0x6db vars=object
// @TASK_7: vars= params=2
// @TASK_8: vars= params=1
// @EVENT_0: op=0x73f vars=object
// @EVENT_22: op=0x7be vars=object,int,float,float
// @EVENT_16: op=0x7c0 vars=object,string
// @EVENT_41: op=0x7c2 vars=object
// @STANDALONE_EVENT_22: op=0xbbc vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xbc4 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0xbce vars=object,string
// @STANDALONE_EVENT_41: op=0xbdb vars=object
// @PE: 0x6b,0x71,0x78,0x7e,0x9a,0x9d,0xa2,0xb6,0xbc,0xc3,0x35f,0x365,0x36c,0x3a8,0x3c3,0x3d2,0x446,0x458,0x463,0x46c,0x477,0x484,0x48b,0x4bb,0x4c9,0x4d7,0x4e0,0x52c,0x549,0x557,0x565,0x56e,0x5d9,0x5e2,0x5f0,0x5fe,0x607,0x63d,0x651,0x65a,0x6c9,0x6db,0x6ea,0x730,0x7a4,0x7be,0x7c0,0x7c2,0x7c4,0x9b3,0xa1a,0xa21,0xa39,0xa44,0xa57,0xb30,0xb37,0xb48,0xb4f,0xb6d,0xbaa,0xbbc,0xbc4,0xbdb,0xbe7

task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_17_object = Obj();
	var_16_bool = var_17_object;
	func_2912(var_17_object);
	return 0;
}


task_0_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj();
	var_16_bool = var_20_object;
	var_17_object = var_21_object;
	func_2953(var_19_bool, var_20_object, var_21_object);
	return 0;
}


task_0_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_18_bool = var_16_bool == "kill";
	if(var_18_bool != 0) {
		var_0_bool = true;
	}
	return 0;
}


task_1_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_17_object = Obj();
	var_16_bool = var_17_object;
	func_2912(var_17_object);
	return 0;
}


task_1_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj();
	var_16_bool = var_20_object;
	var_17_object = var_21_object;
	func_2953(var_19_bool, var_20_object, var_21_object);
	return 0;
}


task_1_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_string, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_18_bool = var_16_bool == "kill";
	if(var_18_bool != 0) {
		var_19_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
	}
	return 0;
}


task_2_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_17_object = Obj();
	var_16_bool = var_17_object;
	func_2912(var_17_object);
	return 0;
}


task_2_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj();
	var_16_bool = var_20_object;
	var_17_object = var_21_object;
	func_2953(var_19_bool, var_20_object, var_21_object);
	return 0;
}


task_2_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_18_bool = var_16_bool == "kill";
	if(var_18_bool != 0) {
		var_19_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		func_950(var_16_bool);
	}
	return 0;
}


task_2_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_18_bool = var_16_bool == (int)1;
	if(var_18_bool != 0) {
		var_19_object = Obj();
		var_19_object = var_1_object;
		func_2709(var_19_object);
	} else {
		var_24_int = 0;
		var_16_bool = var_24_int;
		func_1094(var_15_object, var_16_bool, var_24_int);
	}
	return 0;
	
}


task_2_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_bool = var_1_object == var_16_bool;
	if(var_18_bool != 0) {
		var_19_bool = var_2_int == 0; //@nz
		if(var_19_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_2_int = true;
		var_20_object = Obj();
		var_16_bool = var_20_object;
		func_2420(var_20_object);
	}
	return 0;
}


task_2_event_2(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_bool = var_1_object == var_16_bool;
	if(var_18_bool != 0) {
		var_19_int = var_2_int;
		if(var_19_int != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	return 0;
}


task_2_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	RequestClearPath(var_16_bool);
	return 0;
}


task_2_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	func_950(var_16_bool);
	var_16_bool = Obj();
	func_3035();
	return 0;
}


task_3_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	func_1156();
	var_16_bool = Obj();
	func_3035();
	return 0;
}


task_3_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_float = 0; var_19_bool = 0; var_20_bool = 0; var_21_float = 0; var_22_bool = 0;
	var_24_bool = var_16_bool != (int)130;
	if(var_24_bool != 0) {
		return 6;
	}
	IsInWalkMode(var_20_bool);
	var_25_bool = var_20_bool;
	if(var_25_bool != 0) {
		GetBrightness(var_21_float);
		var_22_bool = var_21_float <= (float)0.20000000298023224;
		var_27_bool = var_22_bool != var_2_int;
		if(var_27_bool != 0) {
			var_2_int = var_22_bool;
			var_28_bool = var_22_bool;
			if(var_28_bool != 0) {
				func_1338(var_21_float, var_22_bool);
				KillTimer((int)130);
				var_30_bool = 0;
				TaskCall(5);
				func_1488(var_30_bool);
				TaskReturn();
				if(var_30_bool != 0) {
					func_1331(var_21_float, var_22_bool);
				} else {
					SetTimer((int)130, (float)0.30000001192092896);
				}
			}
		}
	}
	return 6;
	
}


task_3_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_2888(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_1156();
		var_115_object = Obj();
		var_16_bool = var_115_object;
		func_2895(var_115_object);
	}
	return 0;
}


task_3_event_3(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_2864(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_1156();
		var_115_object = Obj();
		var_16_bool = var_115_object;
		func_2871(var_115_object);
	}
	return 0;
}


	task_3_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_bool, var_17_object, var_18_bool, var_59_object)
	{
	func_1156();
	var_61_object = Obj();
	var_59_object = var_61_object;
	func_2925(var_61_object);
	return 0;
	}


task_3_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj();
	var_16_bool = var_20_object;
	var_17_object = var_21_object;
	func_2953(var_19_bool, var_20_object, var_21_object);
	if(var_19_bool != 0) {
		var_16_bool = Obj();
		func_1239();
	}
	return 0;
}


task_3_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	RequestClearPath(var_16_bool);
	return 0;
}


task_3_event_28(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool)
{
	Stop();
	return 0;
}


task_4_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_2888(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_1483();
		var_114_object = Obj();
		var_16_bool = var_114_object;
		func_2895(var_114_object);
	}
	return 0;
}


task_4_event_3(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_2864(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_1483();
		var_114_object = Obj();
		var_16_bool = var_114_object;
		func_2871(var_114_object);
	}
	return 0;
}


	task_4_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_bool, var_17_object, var_18_bool, var_59_object)
	{
	func_1483();
	var_60_object = Obj();
	var_59_object = var_60_object;
	func_2925(var_60_object);
	return 0;
	}


task_4_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj();
	var_16_bool = var_20_object;
	var_17_object = var_21_object;
	func_2953(var_19_bool, var_20_object, var_21_object);
	if(var_19_bool != 0) {
		var_16_bool = Obj();
		func_1381();
	}
	return 0;
}


task_5_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	func_1494();
	var_16_bool = Obj();
	func_3035();
	return 0;
}


task_5_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_2888(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_1494();
		var_114_object = Obj();
		var_16_bool = var_114_object;
		func_2895(var_114_object);
	}
	return 0;
}


task_5_event_3(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_2864(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_1494();
		var_114_object = Obj();
		var_16_bool = var_114_object;
		func_2871(var_114_object);
	}
	return 0;
}


	task_5_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_bool, var_17_object, var_18_bool, var_59_object)
	{
	func_1494();
	var_60_object = Obj();
	var_59_object = var_60_object;
	func_2925(var_60_object);
	return 0;
	}


task_5_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj();
	var_16_bool = var_20_object;
	var_17_object = var_21_object;
	func_2953(var_19_bool, var_20_object, var_21_object);
	if(var_19_bool != 0) {
		var_16_bool = Obj();
		func_1534();
	}
	return 0;
}


task_6_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	func_1604();
	var_16_object = Obj();
	func_3035();
	return 0;
}


task_6_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	func_1604();
	var_19_object = Obj();
	var_16_object = var_19_object;
	func_2925(var_19_object);
	return 0;
}


task_6_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_int)
{
	var_18_bool = var_16_int != (int)0;
	if(var_18_bool != 0) {
		return 0;
	}
	var_19_bool = 0; var_20_object = Obj();
	var_20_object = var_1_object;
	func_1597(var_19_bool, var_20_object);
	var_44_bool = var_19_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_6_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	RequestClearPath(var_16_object);
	return 0;
}


task_8_event_0(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0;
	IsOverrideActive(var_18_bool);
	var_19_bool = var_18_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_object = Obj();
		var_16_object = var_20_object;
		func_3047(var_20_object);
	}
	return 2;
}


task_8_event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	return 0;
}


task_8_event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_string)
{
	return 0;
}


task_8_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0;
	var_16_object = var_20_object;
	var_17_int = var_21_int;
	var_18_float = var_22_float;
	func_2322(var_20_object, var_21_int, var_22_float);
	return 0;
}


event_43(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	var_16_object = var_22_object;
	var_17_int = var_23_int;
	var_18_float = var_24_float;
	var_20_cvector = var_25_cvector;
	var_21_cvector = var_26_cvector;
	func_2390(var_24_float, var_25_cvector, var_26_cvector);
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0;
	var_21_bool = var_17_string == "health";
	if(var_21_bool != 0) {
		GetProperty("health", var_19_float);
		var_24_bool = var_19_float <= (int)0;
		if(var_24_bool != 0) {
			SignalDeath(var_16_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_object = Obj();
	var_16_object = var_17_object;
	func_2986(var_17_object);
	return 0;
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool)
{
	func_2812();
	var_2_int = false;
	
Label_1147:
	SetTimer((int)130, (float)0.30000001192092896);
	func_1260(var_14_object, var_15_bool);
	goto Label_1147;
}
EMIT "Return(); Pop(0)";


func_0(var_0_bool, var_92_bool, var_93_object, var_210_object)
{
	var_95_object = Obj(); var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_object = Obj(); var_99_cvector = CVector(0,0,0); var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_object = Obj(); var_103_cvector = CVector(0,0,0); var_104_bool = 0; var_105_object = Obj(); var_106_cvector = CVector(0,0,0); var_107_float = 0; var_108_cvector = CVector(0,0,0);
	var_109_object = Obj();
	var_93_object = var_109_object;
	func_2709(var_109_object);
	var_0_bool = false;
	var_114_bool = 0; var_115_object = Obj();
	var_93_object = var_115_object;
	func_2269(var_114_bool, var_115_object);
	var_128_bool = 0; var_129_object = Obj();
	var_93_object = var_129_object;
	func_2201(var_128_bool, var_129_object);
	var_130_bool = var_128_bool == 0; //@nz
	if(var_130_bool != 0) {
		var_92_bool = 0;
		return 14;
	}
	func_2718();
	Face(var_93_object);
	PlayAnimation("all", "aattack_begin1");
	WaitForAnimEnd();
	var_137_bool = 0; var_138_object = Obj();
	var_93_object = var_138_object;
	func_2201(var_137_bool, var_138_object);
	var_139_bool = var_137_bool == 0; //@nz
	if(var_139_bool != 0) {
		StopAsync();
		var_92_bool = 0;
		return 14;
	}
	PlayAnimation("all", "aattack_end1");
	GetScene(var_102_object);
	GetGeometryLocator("knife", var_104_bool, var_103_cvector);
	AddActorByType(var_105_object, "scripted", var_102_object, var_103_cvector, CVector(0.0, 0.0, 1.0), "grabitel_knife.xml");
	var_147_object = Obj();
	func_2570(var_147_object);
	@@var_105_object:SetScriptProperty("Owner", var_147_object);
	@@var_105_object:SetScriptProperty("Target", var_93_object);
	@@var_93_object:GetPosition(var_106_cvector);
	@@var_93_object:GetEyesHeight(var_107_float);
	var_149_float = GetByIndex(var_106_cvector, 1);
	var_151_int = var_107_float - (int)10;
	var_149_float = var_149_float + var_151_int;
	SetByIndex(var_106_cvector, 1) = var_149_float;
	var_152_cvector = CVector(0,0,0); var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_float = 0;
	var_103_cvector = var_153_cvector;
	var_106_cvector = var_154_cvector;
	func_2759(var_152_cvector, var_153_cvector, var_154_cvector, (float)2000.0);
	var_152_cvector = var_108_cvector;
	@@var_105_object:SetScriptProperty("StartDirection", var_108_cvector);
	WaitForAnimEnd();
	StopAsync();
	var_204_bool = var_0_bool;
	if(var_204_bool != 0) {
		var_92_bool = 1;
		return 14;
	}
	var_205_bool = 0; var_206_object = Obj();
	var_93_object = var_206_object;
	func_2201(var_205_bool, var_206_object);
	var_207_bool = var_205_bool == 0; //@nz
	if(var_207_bool != 0) {
		var_92_bool = 0;
		return 14;
	}
	var_208_bool = 0; var_209_object = Obj();
	var_93_object = var_209_object;
	TaskCall(1);
	func_126(var_208_bool, var_209_object);
	TaskReturn();
	var_210_object = var_92_bool;
	return 14;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


func_2056(var_545_float, var_546_object, var_547_float, var_548_int)
{
	var_552_int = 0; var_553_string = ""; var_554_int = 0; var_555_float = 0; var_556_float = 0; var_557_float = 0; var_558_int = 0; var_559_string = ""; var_560_int = 0; var_561_float = 0; var_562_float = 0; var_563_float = 0;
	var_564_bool = 0; var_565_object = Obj(); var_566_string = "";
	var_546_object = var_565_object;
	func_2022(var_564_bool, var_565_object, "health");
	var_567_bool = var_564_bool == 0; //@nz
	if(var_567_bool != 0) {
		var_545_float = 0.0;
		return 12;
	}
	var_568_bool = 0; var_569_object = Obj(); var_570_string = "";
	var_546_object = var_569_object;
	func_2022(var_568_bool, var_569_object, "armor");
	var_571_bool = var_568_bool == 0; //@nz
	if(var_571_bool != 0) {
		var_558_int = 0;
	} else {
			@@var_546_object:GetProperty("armor", var_558_int);
	}
	var_573_string = ""; var_574_int = 0;
	var_548_int = var_574_int;
	func_1988(var_573_string, var_574_int);
	var_559_string = "armor_" + var_573_string;
	var_579_bool = 0; var_580_object = Obj(); var_581_string = "";
	var_546_object = var_580_object;
	var_559_string = var_581_string;
	func_2022(var_579_bool, var_580_object, var_581_string);
	var_582_bool = var_579_bool == 0; //@nz
	if(var_582_bool != 0) {
		var_560_int = 0;
	} else {
		@@var_546_object:GetProperty(var_559_string, var_560_int);

	}
	var_583_float = 0; var_584_float = 0; var_585_float = 0;
	var_586_int = var_558_int + var_560_int;
	var_584_float = var_586_int / (float)100.0;
	func_2586(var_583_float, var_584_float, (float)1);
	var_583_float = var_561_float;
	@@var_546_object:GetProperty("health", var_562_float);
	var_591_int = (int)1 - var_561_float;
	var_563_float = var_547_float * var_591_int;
	var_593_float = 0; var_594_float = 0; var_595_float = 0; var_596_float = 0;
	var_594_float = var_562_float - var_563_float;
	func_2617(var_593_float, var_594_float, (float)0, (float)1);
	@@var_546_object:SetProperty("health", var_593_float);
	var_599_bool = 0; var_600_object = Obj();
	var_546_object = var_600_object;
	func_2017(var_599_bool, var_600_object);
	if(var_599_bool != 0) {
		var_601_float = 0;
		var_601_float = -var_563_float;
		func_2682(var_601_float);
	}
	var_563_float = var_545_float;
	return 12;
	
}


func_2570(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj();
	self(var_70_object);
	var_70_object = var_68_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2576(var_48_cvector, var_49_cvector)
{
	var_56_float = 0; var_57_float = 0;
	var_58_int = var_49_cvector | var_49_cvector;
	var_57_float = sqrt(var_58_int);
	var_59_float = 9.999999974752427e-07;
	var_60_bool = var_57_float < var_59_float;
	if(var_60_bool != 0) {
		var_48_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_48_cvector = var_49_cvector / var_57_float;
	return 2;
}


func_1555(var_2_int, var_703_object)
{
	var_707_bool = 0; var_708_bool = 0;
	var_2_int = false;
	Sleep((int)1, var_708_bool);
	var_710_bool = var_708_bool == 0; //@nz
	if(var_710_bool != 0) {
		return 2;
	}
	var_2_int = true;
	var_711_bool = 0; var_712_object = Obj(); var_713_float = 0; var_714_float = 0; var_715_bool = 0; var_716_bool = 0;
	var_703_object = var_712_object;
	func_1635(var_707_bool, var_708_bool, var_711_bool, var_712_object, (float)200, (float)2000, (bool)1, (bool)1);
	var_777_bool = var_711_bool == 0; //@nz
	if(var_777_bool != 0) {
		return 2;
	}
	var_2_int = false;
	Face(var_703_object);
	WaitForAnimEnd(var_708_bool);
	var_778_bool = var_708_bool == 0; //@nz
	if(var_778_bool != 0) {
		StopAsync();
		return 2;
	}
	PlayAnimation("all", "hunt");
	WaitForAnimEnd(var_708_bool);
	StopAsync();
	var_781_bool = var_708_bool == 0; //@nz
	if(var_781_bool != 0) {
		return 2;
	}
	return 2;
}


func_3091(var_112_string)
{
	var_113_object = Obj(); var_114_int = 0; var_115_bool = 0; var_116_object = Obj(); var_117_int = 0; var_118_bool = 0;
	CreateInvItem(var_116_object);
	@@var_116_object:SetItemName(var_112_string);
	@@var_116_object:SetProperty("Organ", (int)1);
	@@var_116_object:GetItemID(var_117_int);
	AddItem(var_118_bool, var_116_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_2586(var_583_float, var_584_float, var_585_float)
{
	var_588_bool = var_584_float < var_585_float;
	if(var_588_bool != 0) {
		var_584_float = var_583_float;
	} else {
		var_585_float = var_583_float;
	}
	return 0;
	
}


func_2593(var_172_float, var_173_float, var_174_float, var_175_float)
{
	var_176_float = var_174_float * var_174_float;
	var_178_float = (int)4 * var_173_float;
	var_179_float = var_178_float * var_175_float;
	var_172_float = var_176_float - var_179_float;
	return 0;
}


func_3108()
{
	var_106_int = 0;
	func_3041(var_106_int);
	var_111_bool = var_106_int != (int)1;
	if(var_111_bool != 0) {
		return 0;
	}
	var_112_string = "";
	func_3091("liver");
	var_123_string = "";
	func_3091("kidney");
	var_124_string = "";
	func_3091("heart");
	var_125_string = "";
	func_3091("blood");
	return 0;
}


func_2600(var_186_float, var_187_float, var_188_float, var_190_float)
{
	var_191_float = 0; var_192_float = 0;
	var_193_int = -var_188_float;
	var_194_int = var_193_int - var_190_float;
	var_196_float = (int)2 * var_187_float;
	var_192_float = var_194_int / var_196_float;
	var_198_bool = var_192_float > (int)0;
	if(var_198_bool != 0) {
		var_192_float = var_186_float;
		return 2;
	}
	var_199_int = -var_188_float;
	var_200_int = var_199_int + var_190_float;
	var_202_float = (int)2 * var_187_float;
	var_186_float = var_200_int / var_202_float;
	return 2;
}


func_2617(var_51_float, var_52_float, var_53_float, var_54_float)
{
	var_55_bool = var_52_float < var_53_float;
	if(var_55_bool != 0) {
		var_53_float = var_51_float;
		return 0;
	}
	var_56_bool = var_52_float > var_54_float;
	if(var_56_bool != 0) {
		var_54_float = var_51_float;
		return 0;
	}
	var_52_float = var_51_float;
	return 0;
}


func_3132()
{
	var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_bool = 0;
	ClearSubContainer((int)0);
	var_69_int = 0; var_70_int = 0;
	func_3060((int)300, (int)750);
	var_88_string = ""; var_89_int = 0; var_90_int = 0;
	func_2431("Knife", (int)1, (int)8);
	var_99_string = ""; var_100_int = 0; var_101_int = 0;
	func_2431("lockpick", (int)1, (int)6);
	var_102_int = 0; var_103_string = "";
	func_3162(var_102_int, "grabitel_mark");
	AddItem(var_67_bool, var_102_int, (int)0, (int)1);
	return 4;
}


func_1597(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_object = var_22_object;
	func_2225(var_21_bool, var_22_object);
	var_21_bool = var_19_bool;
	return 0;
}


func_1604()
{
	var_17_int = var_2_int;
	if(var_17_int != 0) {
		func_1759(var_16_object);
	} else {
		StopGroup0();
		StopAnimation();
		StopAsync();
	}
	return 0;
	
}


func_2628(var_86_bool, var_87_float, var_88_float, var_89_float)
{
	var_86_bool = 0;
	var_90_bool = var_87_float >= var_88_float;
	if(var_90_bool != 0) {
		var_91_bool = var_87_float <= var_89_float;
		if(var_91_bool != 0) {
			var_86_bool = 1;
		}
	}
	return 0;
}


func_1094(var_0_bool, var_1_object, var_24_int)
{
	var_26_bool = var_24_int != (int)0;
	if(var_26_bool != 0) {
		return 0;
	}
	var_27_bool = 0; var_28_object = Obj();
	var_28_object = var_1_object;
	func_1132(var_27_bool, var_28_object);
	var_63_bool = var_27_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2636(var_93_bool, var_94_int, var_95_int)
{
	var_96_int = 0; var_97_int = 0;
	irand(var_97_int, var_95_int);
	var_93_bool = var_97_int < var_94_int;
	return 2;
}


func_2129(var_616_bool, var_617_object)
{
	var_618_float = 0; var_619_float = 0;
	var_620_bool = 0; var_621_object = Obj(); var_622_string = "";
	var_617_object = var_621_object;
	func_2022(var_620_bool, var_621_object, "health");
	var_623_bool = var_620_bool == 0; //@nz
	if(var_623_bool != 0) {
		var_616_bool = 0;
		return 2;
	}
	var_624_bool = 0;
	var_624_bool = 0;
	var_625_bool = 0; var_626_object = Obj();
	var_617_object = var_626_object;
	func_2017(var_625_bool, var_626_object);
	if(var_625_bool != 0) {
		var_627_bool = 0;
		func_2729(var_627_bool);
		if(var_627_bool != 0) {
			var_624_bool = 1;
		}
	}
	if(var_624_bool != 0) {
		var_616_bool = 0;
		return 2;
	}
	@@var_617_object:GetProperty("health", var_619_float);
	var_616_bool = var_619_float <= (float)0.0;
	return 2;
}


func_2641(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	CreateObjectSet(var_19_object);
	var_19_object = var_17_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2647(var_22_bool, var_23_object, var_24_float)
{
	var_25_bool = var_23_object == 0; //@nz
	if(var_25_bool != 0) {
		var_22_bool = 0;
		return 0;
	}
	var_27_bool = var_24_float > (int)0;
	if(var_27_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_58_bool = var_24_float < (int)0;
		if(var_58_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2668;
		}
		var_22_bool = 0;
		return 0;
	}
Label_2668:
	var_29_float = 0;
	var_24_float = var_29_float;
	func_2699(var_29_float);
	var_33_bool = 0; var_34_object = Obj(); var_35_string = ""; var_36_float = 0; var_37_float = 0; var_38_float = 0;
	var_23_object = var_34_object;
	var_24_float = var_36_float;
	func_2034(var_33_bool, var_34_object, "reputation", var_36_float, (float)0, (float)1);
	var_22_bool = 1;
	return 0;
	
}


func_3162(var_81_int, var_82_string)
{
	var_83_int = 0; var_84_int = 0;
	GetInvItemByName(var_84_int, var_82_string);
	var_84_int = var_81_int;
	return 2;
}


func_1116(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1635(var_0_bool, var_1_object, var_711_bool, var_712_object, var_713_float, var_714_float, var_715_bool, var_716_bool)
{
	var_717_bool = 0; var_718_bool = 0; var_719_object = Obj(); var_720_cvector = CVector(0,0,0); var_721_cvector = CVector(0,0,0); var_722_cvector = CVector(0,0,0); var_723_float = 0; var_724_object = Obj(); var_725_bool = 0; var_726_bool = 0; var_727_object = Obj(); var_728_cvector = CVector(0,0,0); var_729_cvector = CVector(0,0,0); var_730_cvector = CVector(0,0,0); var_731_float = 0; var_732_object = Obj();
	var_0_bool = false;
	var_1_object = var_712_object;
	var_716_bool = var_726_bool;
	
Label_1639:
	var_733_bool = 0; var_734_object = Obj();
	var_712_object = var_734_object;
	func_1597(var_733_bool, var_734_object);
	var_752_bool = var_733_bool == 0; //@nz
	if(var_752_bool != 0) {
		var_711_bool = 0;
		return 16;
	}
	@@var_712_object:GetPosition(var_728_cvector);
	GetPosition(var_729_cvector);
	var_730_cvector = var_728_cvector - var_729_cvector;
	var_731_float = var_730_cvector | var_730_cvector;
	var_753_bool = 0;
	var_753_bool = 0;
	var_755_bool = var_714_float > (int)0;
	if(var_755_bool != 0) {
		var_756_float = var_714_float * var_714_float;
		var_757_bool = var_731_float > var_756_float;
		if(var_757_bool != 0) {
			var_753_bool = 1;
		}
	}
	if(var_753_bool != 0) {
		Stop();
		var_711_bool = 0;
		return 16;
	}
	var_758_float = var_713_float * var_713_float;
	var_759_bool = var_731_float > var_758_float;
	if(var_759_bool != 0) {
		@@var_712_object:GetPFPosition(var_728_cvector);
		FindPathTo(var_732_object, var_728_cvector);
		var_760_bool = var_732_object != 0; //@nn
		if(var_760_bool != 0) {
			var_732_object = var_727_object;
			var_732_object = 0;
		}
		var_761_bool = var_727_object != 0; //@nn
		if(var_761_bool != 0) {
			var_762_bool = var_726_bool;
			if(var_762_bool == 0) goto Label_1688;
			var_726_bool = 0;
			RotatePath(var_727_object, var_725_bool);
			var_763_bool = var_725_bool == 0; //@nz
			if(var_763_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_766_string = "";
				func_1766(var_766_string);
				var_767_string = "";
				func_1768(var_767_string);
				FollowPath(var_727_object, var_715_bool, var_725_bool, var_766_string, var_767_string);
				var_768_bool = var_725_bool == 0; //@nz
				if(var_768_bool != 0) {
					var_769_bool = var_0_bool;
					if(var_769_bool != 0) {
						var_727_object = 0;
						goto Label_1735;
					EMIT "GOTO 0x6ac";
					}
				} else {
					var_727_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_725_bool);
					var_772_bool = var_725_bool == 0; //@nz
					if(var_772_bool != 0) {
						var_773_bool = var_0_bool;
						if(var_773_bool != 0) {
							var_727_object = 0;
							goto Label_1735;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1735;
	}
			var_732_object = 0;
			goto Label_1733;

		Label_1733:
			var_727_object = 0;

		}
		goto Label_1639;
	}
Label_1735:
	var_711_bool = !var_0_bool;
	return 16;
	
}


func_1132(var_331_bool, var_332_object)
{
	var_333_bool = 0; var_334_object = Obj();
	var_332_object = var_334_object;
	func_2201(var_333_bool, var_334_object);
	var_333_bool = var_331_bool;
	return 0;
}


func_2160(var_42_bool, var_43_object)
{
	var_44_bool = 0; var_45_bool = 0;
	@@var_43_object:IsDead(var_45_bool);
	var_45_bool = var_42_bool;
	return 2;
}


func_1139(var_349_string)
{
	var_349_string = "walk";
	return 0;
}


func_1141(var_350_string)
{
	var_350_string = "run";
	return 0;
}


func_2165(var_31_bool, var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj();
	var_37_bool = var_32_object == 0; //@ne
	if(var_37_bool != 0) {
		var_31_bool = 0;
		return 4;
	}
	var_38_bool = 0;
	var_38_bool = 0;
	var_41_bool = IsFuncExist(var_32_object, "IsDead", (int)1);
	if(var_41_bool != 0) {
		var_42_bool = 0; var_43_object = Obj();
		var_32_object = var_43_object;
		func_2160(var_42_bool, var_43_object);
		if(var_42_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_31_bool = 0;
		return 4;
	}
	GetScene(var_35_object);
	var_46_bool = var_35_object == 0; //@ne
	if(var_46_bool != 0) {
		var_31_bool = 0;
		return 4;
	}
	@@var_32_object:GetScene(var_36_object);
	var_47_bool = var_35_object != var_36_object;
	if(var_47_bool != 0) {
		var_31_bool = 0;
		return 4;
	}
	var_31_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2682(var_601_float)
{
	var_602_object = Obj(); var_603_object = Obj();
	CreateFloatVector(var_603_object);
	@@var_603_object:add(var_601_float);
	var_605_bool = var_601_float < (int)0;
	if(var_605_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_603_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_126(var_208_bool, var_209_object)
{
	var_216_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_217_object = Obj(); var_218_bool = 0; var_219_float = 0;
	var_209_object = var_217_object;
	func_203(var_213_bool, var_214_float, var_215_int, var_208_bool, var_209_object, var_217_object, (bool)1, (float)200.0);
	var_689_bool = 0;
	var_689_bool = 0;
	var_690_bool = GlobalVars[0];
	if(var_690_bool != 0) {
		var_691_int = var_3_int;
		if(var_691_int != 0) {
			var_689_bool = 1;
		}
	}
	if(var_689_bool != 0) {
		PlayAnimation("all", "attack_off");
		WaitForAnimEnd();
	}
	var_694_bool = GlobalVars[0];
	var_694_bool = var_208_bool;
	return 0;
}


func_643(var_3_int)
{
	var_3_int = true;
	return 0;
}


func_1156()
{
	func_1331(var_18_bool, var_59_object);
	KillTimer((int)130);
	return 0;
}


func_645(var_657_bool, var_658_float)
{
	var_659_float = 0; var_660_bool = 0; var_661_float = 0; var_662_bool = 0;
	rand(var_661_float);
	var_663_bool = var_661_float < var_658_float;
	if(var_663_bool != 0) {

	Label_650:
		IsAnimationPlaying(var_662_bool);
		var_664_bool = var_662_bool == 0; //@nz
		if(var_664_bool != 0) {
		} else {
			var_665_bool = 0;
			func_743(var_665_bool);
			if(var_665_bool != 0) {
				var_657_bool = 1;
				sync();
				goto Label_650;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_847(var_662_bool);
	}
	goto Label_670;
	
Label_670:
	var_657_bool = 0;
	return 4;
	
}


func_2699(var_29_float)
{
	var_30_object = Obj(); var_31_object = Obj();
	CreateFloatVector(var_31_object);
	@@var_31_object:add(var_29_float);
	SendWorldWndMessage((int)16, var_31_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2709(var_109_object)
{
	var_110_bool = 0; var_111_bool = 0;
	IsPlayerActor(var_109_object, var_111_bool);
	var_112_bool = var_111_bool;
	if(var_112_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_2201(var_27_bool, var_28_object)
{
	var_29_int = 0; var_30_int = 0;
	var_31_bool = 0; var_32_object = Obj();
	var_28_object = var_32_object;
	func_2165(var_31_bool, var_32_object);
	var_48_bool = var_31_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_27_bool = 0;
		return 2;
	}
	var_49_bool = 0; var_50_object = Obj(); var_51_string = "";
	var_28_object = var_50_object;
	func_2022(var_49_bool, var_50_object, "noaccess");
	var_58_bool = var_49_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_27_bool = 1;
		return 2;
	}
	@@var_28_object:GetProperty("noaccess", var_30_int);
	var_27_bool = var_30_int == (int)0;
	return 2;
}


func_154(var_542_float)
{
	var_542_float = 0.15000000596046448;
	return 0;
}


func_157(var_549_int)
{
	var_549_int = 0;
	return 0;
}


func_2718()
{
	var_131_object = Obj(); var_132_object = Obj();
	GetScene(var_132_object);
	var_134_object = Obj();
	func_2570(var_134_object);
	BroadcastMessage("battle", var_134_object, var_132_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_672(var_0_bool, var_437_bool, var_438_float)
{
	var_439_bool = 0; var_440_cvector = CVector(0,0,0); var_441_cvector = CVector(0,0,0); var_442_cvector = CVector(0,0,0); var_443_float = 0; var_444_bool = 0; var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); var_447_cvector = CVector(0,0,0); var_448_float = 0;
	
Label_673:
	IsAnimationPlaying(var_444_bool);
	var_449_bool = var_444_bool == 0; //@nz
	if(var_449_bool != 0) {
	} else {
		var_450_bool = 0;
		func_743(var_450_bool);
		if(var_450_bool != 0) {
			var_437_bool = 1;
			return 10;
		}
		var_493_bool = 0; var_494_object = Obj();
		var_494_object = var_0_bool;
		func_2201(var_493_bool, var_494_object);
		var_495_bool = var_493_bool == 0; //@nz
		if(var_495_bool != 0) {
			var_437_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_445_cvector);
		GetPFPosition(var_446_cvector);
		var_447_cvector = var_445_cvector - var_446_cvector;
		var_448_float = var_447_cvector | var_447_cvector;
		var_496_float = var_438_float * var_438_float;
		var_497_bool = var_448_float < var_496_float;
		if(var_497_bool != 0) {
			var_498_bool = 0; var_499_float = 0;
			var_438_float = var_499_float;
			func_506(var_447_cvector, var_448_float, var_498_bool, var_499_float);
			var_437_bool = 1;
			sync();
			goto Label_673;
		}
		return 10;
	}
	func_847(var_448_float);
	var_437_bool = 0;
	return 10;
	
}


func_160(var_610_int)
{
	var_610_int = 1;
	return 0;
}


func_162(var_611_object, var_612_float)
{
	var_613_bool = 0;
	var_613_bool = 0;
	var_615_bool = var_612_float > (int)0;
	if(var_615_bool != 0) {
		var_616_bool = 0; var_617_object = Obj();
		var_611_object = var_617_object;
		func_2129(var_616_bool, var_617_object);
		if(var_616_bool != 0) {
			var_613_bool = 1;
		}
	}
	if(var_613_bool != 0) {
		var_633_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		func_643(var_612_float);
	}
	return 0;
}


func_2729(var_627_bool)
{
	var_628_bool = 0; var_629_bool = 0;
	GetVariable("god_mode", var_629_bool);
	var_629_bool = var_627_bool;
	return 2;
}


func_2735(var_73_string, var_74_int)
{
	var_75_string = ""; var_76_string = "";
	var_77_int = var_74_int;
	if(var_77_int != 0) {
		"idle" = "idle" + var_74_int;
	}
	var_76_string = var_73_string;
	return 2;
}


func_2225(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0;
	var_29_bool = var_22_object == 0; //@ne
	if(var_29_bool != 0) {
		var_21_bool = 0;
		return 6;
	}
	GetScene(var_26_object);
	var_30_bool = var_26_object == 0; //@ne
	if(var_30_bool != 0) {
		var_21_bool = 0;
		return 6;
	}
	@@var_22_object:GetScene(var_27_object);
	var_31_bool = var_26_object != var_27_object;
	if(var_31_bool != 0) {
		var_21_bool = 0;
		return 6;
	}
	var_32_bool = 0; var_33_object = Obj(); var_34_string = "";
	var_22_object = var_33_object;
	func_2022(var_32_bool, var_33_object, "noaccess");
	var_41_bool = var_32_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_21_bool = 1;
		return 6;
	}
	@@var_22_object:GetProperty("noaccess", var_28_int);
	var_21_bool = var_28_int == (int)0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2742(var_67_int)
{
	var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_bool = 0;
	var_70_int = 0;
	
Label_2744:
	var_73_string = ""; var_74_int = 0;
	var_70_int = var_74_int;
	func_2735(var_73_string, var_74_int);
	HasAnimation(var_71_bool, "all", var_73_string);
	var_78_bool = var_71_bool == 0; //@nz
	if(var_78_bool != 0) {
	} else {
		var_70_int = var_70_int + (int)1;
		goto Label_2744;
	}
	var_70_int = var_67_int;
	return 4;
	
}


func_2759(var_152_cvector, var_153_cvector, var_154_cvector, var_155_float)
{
	var_156_cvector = CVector(0,0,0); var_157_float = 0; var_158_float = 0; var_159_float = 0; var_160_float = 0; var_161_float = 0; var_162_cvector = CVector(0,0,0); var_163_float = 0; var_164_float = 0; var_165_float = 0; var_166_float = 0; var_167_float = 0;
	var_162_cvector = var_154_cvector - var_153_cvector;
	var_163_float = 250000;
	var_168_float = GetByIndex(var_162_cvector, 1);
	var_170_float = var_168_float * (int)1000;
	var_171_float = var_155_float * var_155_float;
	var_164_float = var_170_float - var_171_float;
	var_165_float = var_162_cvector | var_162_cvector;
	var_172_float = 0; var_173_float = 0; var_174_float = 0; var_175_float = 0;
	var_163_float = var_173_float;
	var_164_float = var_174_float;
	var_165_float = var_175_float;
	func_2593(var_172_float, var_173_float, var_174_float, var_175_float);
	var_172_float = var_166_float;
	var_181_bool = var_166_float < (int)0;
	if(var_181_bool != 0) {
		var_167_float = 1;
	} else {
		var_186_float = 0; var_187_float = 0; var_188_float = 0; var_189_float = 0; var_190_float = 0;
		var_163_float = var_187_float;
		var_164_float = var_188_float;
		var_165_float = var_189_float;
		var_190_float = sqrt(var_166_float);
		func_2600(var_187_float, var_188_float, var_189_float, var_190_float);
		var_167_float = sqrt(var_186_float);
	}
	var_183_float = CVector(0.0, 500.0, 0.0) * var_167_float;
	var_184_float = var_183_float * var_167_float;
	var_185_int = var_162_cvector + var_184_float;
	var_152_cvector = var_185_int / var_167_float;
	return 12;
	
}


func_203(var_0_bool, var_3_int, var_5_float, var_217_object, var_218_bool, var_219_float, var_288_bool, var_378_bool)
{
	var_220_float = 0; var_221_cvector = CVector(0,0,0); var_222_cvector = CVector(0,0,0); var_223_bool = 0; var_224_bool = 0; var_225_float = 0; var_226_cvector = CVector(0,0,0); var_227_float = 0; var_228_cvector = CVector(0,0,0); var_229_bool = 0; var_230_float = 0; var_231_float = 0; var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_bool = 0; var_235_bool = 0; var_236_float = 0; var_237_cvector = CVector(0,0,0); var_238_float = 0; var_239_cvector = CVector(0,0,0); var_240_bool = 0; var_241_float = 0;
	func_432(var_239_cvector, var_240_bool, var_241_float);
	var_5_float = 0;
	var_266_bool = IsFuncExist(var_217_object, "@GetAttackDistance", (int)1);
	if(var_266_bool != 0) {
		@@var_217_object:GetAttackDistance(var_231_float);
		var_231_float = var_231_float + (int)50;
	} else {
							var_219_float = var_231_float;
	}
	var_269_bool = var_231_float >= (int)150;
	if(var_269_bool != 0) {
		var_231_float = 150;
	}
	var_3_int = false;
	var_0_bool = var_217_object;
	IsPlayerActor(var_0_bool, var_234_bool);
	var_270_bool = var_234_bool;
	if(var_270_bool != 0) {
		PlayGlobalMusic("attack");
		var_272_object = Obj();
		func_2570(var_272_object);
		SendPlayerEnemy(var_217_object, var_272_object);
	}
	var_273_bool = var_218_bool;
	if(var_273_bool != 0) {
		var_235_bool = 0;
	} else {
						var_235_bool = 1;

	}
	var_236_float = (float)300.0 + var_231_float;
	
Label_243:
	var_275_bool = 0;
	var_275_bool = 0;
	var_276_bool = 0; var_277_object = Obj();
	var_277_object = var_0_bool;
	func_2201(var_276_bool, var_277_object);
	if(var_276_bool != 0) {
		var_278_bool = var_3_int == 0; //@nz
		if(var_278_bool != 0) {
			var_275_bool = 1;
		}
	}
	if(var_275_bool != 0) {
		func_847(var_241_float);
		@@@var_0_bool:GetPFPosition(var_232_cvector);
		GetPFPosition(var_233_cvector);
		var_237_cvector = var_232_cvector - var_233_cvector;
		var_238_float = var_237_cvector | var_237_cvector;
		var_280_float = var_236_float * var_236_float;
		var_281_bool = var_238_float >= var_280_float;
		if(var_281_bool != 0) {
			var_282_bool = 0; var_283_object = Obj(); var_284_float = 0; var_285_float = 0; var_286_bool = 0; var_287_bool = 0;
			var_283_object = var_0_bool;
			var_231_float = var_284_float;
			TaskCall(2);
			func_887(var_290_bool, var_282_bool, var_283_object, var_284_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_363_bool = var_288_bool == 0; //@nz
			if(var_363_bool != 0) {
			} else {
				var_235_bool = 0;
		} else {
				var_369_float = var_219_float * var_219_float;
				var_370_bool = var_238_float >= var_369_float;
				if(var_370_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_239_cvector);
					CanReachByPF(var_240_bool, var_239_cvector);
					var_371_bool = var_240_bool == 0; //@nz
					if(var_371_bool != 0) {
						var_372_bool = 0; var_373_object = Obj(); var_374_float = 0; var_375_float = 0; var_376_bool = 0; var_377_bool = 0;
						var_373_object = var_0_bool;
						var_231_float = var_374_float;
						TaskCall(2);
						func_887(var_380_bool, var_372_bool, var_373_object, var_374_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_381_bool = var_378_bool == 0; //@nz
						if(var_381_bool != 0) {
							goto Label_415;
						}
						var_235_bool = 0;
						goto Label_243;
					}
					var_382_bool = var_235_bool == 0; //@nz
					if(var_382_bool != 0) {
						var_383_object = Obj();
						var_383_object = var_0_bool;
						func_2404(var_383_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_847(var_241_float);
						StopAsync();
						var_235_bool = 1;
						var_394_bool = 0; var_395_object = Obj();
						var_395_object = var_0_bool;
						func_2201(var_394_bool, var_395_object);
						var_396_bool = var_394_bool == 0; //@nz
						if(var_396_bool != 0) {
							goto Label_415;
						}
					}
					rand(var_241_float);
					var_397_bool = 0;
					var_399_bool = var_241_float < (float)0.19999998807907104;
					if(var_399_bool != 1) {
						var_400_bool = 0;
						func_804((bool)1, var_400_bool);
						if(var_400_bool != 1) {
							var_397_bool = 0;
						}
					}
					if(var_397_bool != 0) {
						Face(var_0_bool);
						func_852();
						PlayAnimation("all", "attack_stay");
						var_437_bool = 0; var_438_float = 0;
						var_219_float = var_438_float;
						func_672(var_241_float, var_437_bool, var_438_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_847(var_241_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_676_bool = 0;
						func_804(var_241_float, var_676_bool);
						var_677_bool = var_676_bool == 0; //@nz
						if(var_677_bool == 0) goto Label_405;
						var_678_bool = 0; var_679_object = Obj();
						var_679_object = var_0_bool;
						func_2201(var_678_bool, var_679_object);
						var_680_bool = var_678_bool == 0; //@nz
						if(var_680_bool != 0) {
							goto Label_415;
						}
						@@@var_0_bool:GetPFPosition(var_232_cvector);
						GetPFPosition(var_233_cvector);
						var_237_cvector = var_232_cvector - var_233_cvector;
						var_238_float = var_237_cvector | var_237_cvector;
						var_681_float = var_219_float * var_219_float;
						var_682_bool = var_238_float < var_681_float;
						if(var_682_bool == 0) goto Label_405;
						var_683_bool = 0; var_684_float = 0;
						var_219_float = var_684_float;
						func_506(var_240_bool, var_241_float, var_683_bool, var_684_float);
						var_685_bool = var_683_bool == 0; //@nz
						if(var_685_bool == 0) goto Label_405;
						goto Label_415;
				}
					var_686_bool = 0; var_687_float = 0;
					var_219_float = var_687_float;
					func_506(var_240_bool, var_241_float, var_686_bool, var_687_float);
					var_688_bool = var_686_bool == 0; //@nz
					if(var_688_bool != 0) {
						goto Label_415;
					}
					var_235_bool = 1;

				}
			Label_405:
				goto Label_414;
		}
		Label_414:
			goto Label_243;

		}
	}
Label_415:
	WaitForAnimEnd();
	var_364_int = var_3_int;
	if(var_364_int != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_367_bool = var_234_bool;
	if(var_367_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_715(var_0_bool, var_452_bool)
{
	var_453_cvector = CVector(0,0,0); var_454_cvector = CVector(0,0,0); var_455_cvector = CVector(0,0,0); var_456_float = 0; var_457_float = 0; var_458_cvector = CVector(0,0,0); var_459_cvector = CVector(0,0,0); var_460_cvector = CVector(0,0,0); var_461_float = 0; var_462_float = 0;
	var_463_bool = 0; var_464_object = Obj();
	var_464_object = var_0_bool;
	func_2201(var_463_bool, var_464_object);
	var_465_bool = var_463_bool == 0; //@nz
	if(var_465_bool != 0) {
		var_452_bool = 0;
		return 10;
	}
	var_466_bool = 0;
	func_804(var_462_float, var_466_bool);
	if(var_466_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_458_cvector);
		GetPFPosition(var_459_cvector);
		var_460_cvector = var_458_cvector - var_459_cvector;
		var_461_float = var_460_cvector | var_460_cvector;
		@@@var_0_bool:GetAttackDistance(var_462_float);
		var_462_float = var_462_float + (int)50;
		var_468_float = var_462_float * var_462_float;
		var_452_bool = var_461_float <= var_468_float;
		return 10;
	}
	var_452_bool = 0;
	return 10;
}


func_2259(var_118_bool, var_119_cvector)
{
	var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_bool = 0; var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_bool = 0;
	GetPosition(var_123_cvector);
	var_124_cvector = var_119_cvector - var_123_cvector;
	var_126_float = GetByIndex(var_124_cvector, 0);
	var_127_float = GetByIndex(var_124_cvector, 2);
	Rotate(var_126_float, var_127_float, var_125_bool);
	var_125_bool = var_118_bool;
	return 6;
}


func_2269(var_114_bool, var_115_object)
{
	var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0);
	@@var_115_object:GetPosition(var_117_cvector);
	var_118_bool = 0; var_119_cvector = CVector(0,0,0);
	var_117_cvector = var_119_cvector;
	func_2259(var_118_bool, var_119_cvector);
	var_118_bool = var_114_bool;
	return 2;
}


func_1759(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1766(var_766_string)
{
	var_766_string = "walk";
	return 0;
}


func_743(var_450_bool)
{
	var_451_bool = 0;
	var_451_bool = 0;
	var_452_bool = 0;
	func_715(var_451_bool, var_452_bool);
	if(var_452_bool != 0) {
		var_469_bool = 0;
		func_759(var_450_bool, var_451_bool, var_469_bool);
		if(var_469_bool != 0) {
			var_451_bool = 1;
		}
	}
	if(var_451_bool != 0) {
		var_450_bool = 1;
		return 0;
	}
	var_450_bool = 0;
	return 0;
}


func_1768(var_767_string)
{
	var_767_string = "run";
	return 0;
}


func_2278(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_bool = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_string = "";
	var_48_bool = var_33_object == 0; //@ne
	if(var_48_bool != 0) {
		return 14;
	}
	IsDead(var_41_bool);
	var_49_bool = var_41_bool;
	if(var_49_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_42_int);
	var_51_bool = var_42_int < (int)0;
	if(var_51_bool != 0) {
		return 14;
	}
	@@var_33_object:GetPosition(var_43_cvector);
	GetPosition(var_44_cvector);
	GetDirection(var_45_cvector);
	var_46_cvector = var_44_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_46_cvector, 0);
	var_53_float = GetByIndex(var_45_cvector, 0);
	var_54_float = var_52_float * var_53_float;
	var_55_float = GetByIndex(var_46_cvector, 2);
	var_56_float = GetByIndex(var_45_cvector, 2);
	var_57_float = var_55_float * var_56_float;
	var_58_int = var_54_float + var_57_float;
	var_60_bool = var_58_int >= (int)0;
	if(var_60_bool != 0) {
		var_47_string = "fhit";
	} else {
		var_47_string = "bhit";
	}
	var_63_int = var_47_string + "1";
	var_65_int = var_47_string + "2";
	FadeSecondaryAnimation("hit_react", var_63_int, var_65_int, (int)-10);
	return 14;
	
}


func_1770(var_62_bool, var_63_object)
{
	var_64_bool = 0; var_65_object = Obj();
	var_63_object = var_65_object;
	func_2017(var_64_bool, var_65_object);
	if(var_64_bool != 0) {
		var_68_object = Obj();
		func_2570(var_68_object);
		SendPlayerEnemy(var_63_object, var_68_object);
	}
	var_71_bool = 0; var_72_object = Obj();
	var_63_object = var_72_object;
	func_1787(var_62_bool, var_63_object, var_71_bool, var_72_object);
	var_71_bool = var_62_bool;
	return 0;
}


func_2794(var_26_bool, var_27_object)
{
	var_28_string = ""; var_29_string = ""; var_30_string = ""; var_31_string = "";
	var_32_bool = 0; var_33_object = Obj(); var_34_string = "";
	var_27_object = var_33_object;
	func_2022(var_32_bool, var_33_object, "class");
	var_41_bool = var_32_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	GetProperty("class", var_30_string);
	@@var_27_object:GetProperty("class", var_31_string);
	var_26_bool = var_31_string == var_30_string;
	return 4;
}


func_1260(var_0_bool, var_1_object)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0;
	var_0_bool = false;
	var_1_object = false;
	rand(var_28_float, (float)0.5);
	Sleep(var_28_float);
	
Label_1268:
	var_35_bool = var_0_bool == 0; //@nz
	if(var_35_bool != 0) {
		var_36_bool = var_1_object == 0; //@nz
		if(var_36_bool != 0) {

		Label_1272:
			GetPosition(var_30_cvector);
			var_37_float = 0;
			func_1319(var_37_float);
			GetRandomPFPointInCircle(var_29_cvector, var_30_cvector, var_37_float, var_31_bool);
			var_40_bool = var_31_bool;
			if(var_40_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_1272;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_1288;
	
Label_1288:
	var_41_object = Obj(); var_42_cvector = CVector(0,0,0);
	var_29_cvector = var_42_cvector;
	func_1347(var_41_object, var_42_cvector);
	var_41_object = var_32_object;
	var_45_bool = var_32_object != 0; //@nn
	if(var_45_bool != 0) {
		RotatePath(var_32_object, var_33_bool);
		var_46_bool = var_33_bool;
		if(var_46_bool != 0) {
			var_47_bool = 0;
			func_1345(var_47_bool);
			FollowPath(var_32_object, var_47_bool, var_33_bool);
			var_32_object = 0;
			var_48_bool = var_33_bool;
			if(var_48_bool != 0) {
				TaskCall(4);
				func_1402();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_32_object = 0;
	goto Label_1268;
	
}


func_759(var_0_bool, var_4_bool, var_469_bool)
{
	var_470_object = Obj(); var_471_bool = 0; var_472_float = 0; var_473_cvector = CVector(0,0,0); var_474_cvector = CVector(0,0,0); var_475_object = Obj(); var_476_bool = 0; var_477_float = 0; var_478_cvector = CVector(0,0,0); var_479_cvector = CVector(0,0,0);
	GetScene(var_475_object);
	var_476_bool = 0;
	
Label_763:
	var_480_cvector = CVector(0,0,0); var_481_object = Obj();
	var_481_object = var_0_bool;
	func_2002(var_480_cvector, var_481_object);
	var_486_int = -var_480_cvector;
	FindDirLength(var_477_float, var_486_int, var_4_bool);
	var_487_bool = var_477_float < var_4_bool;
	if(var_487_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_478_cvector);
		GetPFPosition(var_479_cvector);
		WaitForAnimEnd();
		func_847(var_479_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_476_bool = 1;
		var_491_bool = 0;
		func_715(var_479_cvector, var_491_bool);
		var_492_bool = var_491_bool == 0; //@nz
		if(var_492_bool != 0) {
			goto Label_801;
		}
		goto Label_763;
	}
Label_801:
	var_476_bool = var_469_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1787(var_71_bool, var_72_object, var_94_bool, var_697_object)
{
	var_73_float = 0; var_74_float = 0;
	var_75_bool = 0; var_76_object = Obj();
	var_72_object = var_76_object;
	func_2201(var_75_bool, var_76_object);
	var_77_bool = var_75_bool == 0; //@nz
	if(var_77_bool != 0) {
		var_71_bool = 0;
		return 2;
	}
	var_78_float = 0; var_79_object = Obj();
	var_72_object = var_79_object;
	func_2009(var_78_float, var_79_object);
	var_78_float = var_74_float;
	var_86_bool = 0; var_87_float = 0; var_88_float = 0; var_89_float = 0;
	var_74_float = var_87_float;
	func_2628(var_86_bool, var_87_float, (float)250000.0, (float)3240000.0);
	if(var_86_bool != 0) {
		var_92_bool = 0; var_93_object = Obj();
		var_72_object = var_93_object;
		TaskCall(0);
		func_0(var_74_float, var_94_bool, var_92_bool, var_93_object);
		TaskReturn();
		var_94_bool = var_71_bool;
		return 2;
	}
	var_695_bool = 0; var_696_object = Obj();
	var_72_object = var_696_object;
	TaskCall(1);
	func_126(var_695_bool, var_696_object);
	TaskReturn();
	var_697_object = var_71_bool;
	return 2;
}


func_2812()
{
	var_16_object = GlobalVars[1];
	func_2641(Obj());
	var_17_object = var_16_object;
	GlobalVars[1] = var_16_object;
	return 0;
}


func_2819(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_float = 0; var_23_string = ""; var_24_bool = 0; var_25_float = 0; var_26_string = "";
	var_27_bool = 0; var_28_object = Obj();
	var_20_object = var_28_object;
	func_2201(var_27_bool, var_28_object);
	var_61_bool = var_27_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_19_bool = 0;
		return 6;
	}
	var_62_object = GlobalVars[1];
	@@var_62_object:in(var_24_bool, var_20_object);
	var_63_bool = var_24_bool;
	if(var_63_bool != 0) {
		var_19_bool = 1;
		return 6;
	}
	var_64_bool = 0; var_65_object = Obj();
	var_20_object = var_65_object;
	func_2017(var_64_bool, var_65_object);
	if(var_64_bool != 0) {
		@@var_20_object:GetProperty("reputation", var_25_float);
		var_19_bool = var_25_float >= (float)0.33000001311302185;
		return 6;
	}
	var_70_bool = 0; var_71_object = Obj(); var_72_string = "";
	var_20_object = var_71_object;
	func_2022(var_70_bool, var_71_object, "class");
	var_73_bool = var_70_bool == 0; //@nz
	if(var_73_bool != 0) {
		var_19_bool = 0;
		return 6;
	}
	@@var_20_object:GetProperty("class", var_26_string);
	var_75_bool = 0; var_76_string = "";
	var_26_string = var_76_string;
	func_2483(var_75_bool, var_76_string);
	var_75_bool = var_19_bool;
	return 6;
}


func_2322(var_20_object, var_21_int, var_22_float)
{
	var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0);
	var_41_bool = 0;
	var_41_bool = 0;
	var_42_bool = 0;
	var_42_bool = 0;
	var_43_object = var_20_object;
	if(var_43_object != 0) {
		var_45_bool = var_21_int != (int)4;
		if(var_45_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		var_47_bool = var_21_int != (int)5;
		if(var_47_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
		var_50_cvector = CVector(0,0,0); var_51_object = Obj();
		var_20_object = var_51_object;
		func_2002(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		func_2576(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		CreateVectorVector(var_33_object);
		var_34_int = 1;

	Label_2351:
		var_62_int = "hit" + var_34_int;
		GetGeometryLocator(var_62_int, var_35_bool, var_36_cvector, var_37_cvector);
		var_63_bool = var_35_bool == 0; //@nz
		if(var_63_bool != 0) {
		} else {
			var_111_int = var_37_cvector | var_32_cvector;
			var_113_bool = var_111_int >= (float)0.7071067690849304;
			if(var_113_bool != 0) {
				@@var_33_object:add(var_36_cvector);
			}
			var_34_int = var_34_int + (int)1;
			goto Label_2351;
		}
		@@var_33_object:size(var_38_int);
		var_64_int = var_38_int;
		if(var_64_int != 0) {
			irand(var_39_int, var_38_int);
			@@var_33_object:get(var_40_cvector, var_39_int);
			var_65_object = Obj(); var_66_int = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
			var_20_object = var_65_object;
			var_21_int = var_66_int;
			var_22_float = var_67_float;
			var_40_cvector = var_68_cvector;
			var_69_cvector = -var_32_cvector;
			func_2390(var_67_float, var_68_cvector, var_69_cvector);
			return 18;
		}
		var_33_object = 0;
	}
	var_110_object = Obj();
	var_20_object = var_110_object;
	func_2278(var_110_object);
	return 18;
	
}


func_1824(var_60_object)
{
	var_61_bool = 0; var_62_bool = 0;
	IsPlayerActor(var_60_object, var_62_bool);
	var_63_bool = var_62_bool;
	if(var_63_bool != 0) {
		func_3132();
	}
	func_3108();
	var_126_object = Obj();
	var_60_object = var_126_object;
	func_1840(var_126_object);
	return 2;
}


func_804(var_0_bool, var_400_bool)
{
	var_401_bool = 0; var_402_bool = 0;
	var_405_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_405_bool != 0) {
		@@@var_0_bool:IsAttacking(var_402_bool);
		var_402_bool = var_400_bool;
		return 2;
	}
	var_400_bool = 0;
	return 2;
}


func_1319(var_37_float)
{
	var_38_float = 0; var_39_float = 0;
	GetCameraFarDistance(var_39_float);
	var_39_float = var_37_float;
	return 2;
}


func_815(var_2_int, var_5_float)
{
	var_513_float = 0; var_514_int = 0; var_515_float = 0; var_516_int = 0;
	var_517_bool = var_2_int == 0; //@nz
	if(var_517_bool != 0) {
		return 4;
	}
	var_518_float = var_5_float;
	if(var_518_float != 0) {
		var_5_float = var_5_float + (int)-1;
		var_521_bool = var_5_float > (int)0;
		if(var_521_bool != 0) {
			return 4;
		}
	}
	rand(var_515_float);
	var_522_float = 0;
	func_861(var_522_float);
	var_523_bool = var_515_float < var_522_float;
	if(var_523_bool != 0) {
		irand(var_516_int, var_2_int);
		var_516_int = var_516_int + (int)1;
		var_526_int = "attack" + var_516_int;
		Speak(var_526_int);
		var_527_int = 0;
		func_859(var_527_int);
		var_5_float = var_527_int;
	}
	return 4;
}


func_2864(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_object = var_20_object;
	func_2819(var_19_bool, var_20_object);
	var_19_bool = var_17_bool;
	return 0;
}


func_1840(var_126_object)
{
	EventDisable(0);
	var_127_object = Obj();
	var_126_object = var_127_object;
	func_1865(var_127_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1851:
	Hold();
	goto Label_1851;
}
EMIT "Return(); Pop(0)";


func_1331(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_2871(var_114_object)
{
	var_115_bool = 0; var_116_object = Obj();
	var_114_object = var_116_object;
	TaskCall(7);
	func_1770(var_115_bool, var_116_object);
	TaskReturn();
	if(var_115_bool != 0) {
		var_754_object = Obj();
		var_114_object = var_754_object;
		TaskCall(6);
		func_1555(var_757_bool, var_754_object);
		TaskReturn();
	}
	ResetAAS();
	return 0;
}


func_1338(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = true;
	Stop();
	StopGroup0();
	return 0;
}


func_1345(var_47_bool)
{
	var_47_bool = 0;
	return 0;
}


func_1347(var_41_object, var_42_cvector)
{
	var_43_object = Obj(); var_44_object = Obj();
	FindShiftedPathTo(var_44_object, var_42_cvector);
	var_44_object = var_41_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2888(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_object = var_20_object;
	func_2819(var_19_bool, var_20_object);
	var_19_bool = var_17_bool;
	return 0;
}


func_1865(var_127_object)
{
	var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_string = ""; var_133_object = Obj(); var_134_bool = 0; var_135_bool = 0; var_136_float = 0; var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_string = ""; var_143_object = Obj(); var_144_bool = 0; var_145_bool = 0; var_146_float = 0; var_147_cvector = CVector(0,0,0);
	var_148_bool = var_127_object == 0; //@ne
	if(var_148_bool != 0) {
		var_149_string = "";
		func_1956("fdie");
	} else {
		@@var_127_object:GetPosition(var_138_cvector);
		GetPosition(var_139_cvector);
		GetDirection(var_140_cvector);
		var_141_cvector = var_139_cvector - var_138_cvector;
		var_181_float = GetByIndex(var_141_cvector, 0);
		var_182_float = GetByIndex(var_140_cvector, 0);
		var_183_float = var_181_float * var_182_float;
		var_184_float = GetByIndex(var_141_cvector, 2);
		var_185_float = GetByIndex(var_140_cvector, 2);
		var_186_float = var_184_float * var_185_float;
		var_187_int = var_183_float + var_186_float;
		var_189_bool = var_187_int >= (int)0;
		if(var_189_bool != 0) {
			var_142_string = "fdie";
		} else {
				var_142_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_127_object = var_143_object;
		var_192_bool = IsFuncExist(var_127_object, "GetScriptProperty", (int)2);
		if(var_192_bool != 0) {
			@@var_127_object:HasScriptProperty(var_144_bool, "Owner");
			var_194_bool = var_144_bool;
			if(var_194_bool != 0) {
				@@var_127_object:GetScriptProperty(var_143_object, "Owner");
				var_196_bool = var_143_object == 0; //@ne
				if(var_196_bool != 0) {
					var_127_object = var_143_object;
				}
			}
		}
		var_199_bool = IsFuncExist(var_143_object, "@GetEyesHeight", (int)1);
		if(var_199_bool != 0) {
			@@var_143_object:GetEyesHeight(var_146_float);
			var_147_cvector = CVector(0.0, 0.0, 0.0);
			var_200_float = GetByIndex(var_147_cvector, 1);
			var_146_float = var_200_float;
			SetByIndex(var_147_cvector, 1) = var_200_float;
			LookAsync(var_127_object, "head", var_147_cvector);
			var_145_bool = 1;
		} else {
			var_145_bool = 0;

		}
		var_202_string = "";
		var_142_string = var_202_string;
		func_2442(var_202_string);
		PlayAnimation("all", var_142_string);
		WaitForAnimEnd();
		var_204_bool = var_145_bool;
		if(var_204_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_142_string);
		RemoveEnvelope();
		var_143_object = 0;
	}
	return 20;
	
}


func_847(var_0_bool)
{
	var_279_object = Obj();
	var_279_object = var_0_bool;
	func_2709(var_279_object);
	return 0;
}


func_2895(var_114_object)
{
	var_115_bool = 0; var_116_object = Obj();
	var_114_object = var_116_object;
	TaskCall(7);
	func_1770(var_115_bool, var_116_object);
	TaskReturn();
	if(var_115_bool != 0) {
		var_754_object = Obj();
		var_114_object = var_754_object;
		TaskCall(6);
		func_1555(var_757_bool, var_754_object);
		TaskReturn();
	}
	ResetAAS();
	return 0;
}


func_852()
{
	var_406_string = "";
	func_2442("attack_stay");
	return 0;
}


func_2390(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj();
	GetScene(var_29_object);
	AddActorByType(var_30_object, "scripted", var_29_object, var_25_cvector, var_26_cvector, "blood_dir.xml");
	var_33_object = Obj();
	var_22_object = var_33_object;
	func_2278(var_33_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_857(var_656_bool)
{
	var_656_bool = 1;
	return 0;
}


func_859(var_527_int)
{
	var_527_int = 1;
	return 0;
}


func_861(var_522_float)
{
	var_522_float = 0.5;
	return 0;
}


func_2912(var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	var_23_bool = var_20_object == 0; //@ne
	if(var_23_bool != 0) {
		return 2;
	}
	var_24_object = GlobalVars[1];
	@@var_24_object:in(var_22_bool, var_20_object);
	var_25_bool = var_22_bool == 0; //@nz
	if(var_25_bool != 0) {
		var_26_object = GlobalVars[1];
		@@var_26_object:add(var_20_object);
	}
	return 2;
}


func_2404(var_383_object)
{
	var_384_cvector = CVector(0,0,0); var_385_cvector = CVector(0,0,0); var_386_cvector = CVector(0,0,0); var_387_cvector = CVector(0,0,0); var_388_cvector = CVector(0,0,0); var_389_cvector = CVector(0,0,0);
	@@var_383_object:GetPosition(var_387_cvector);
	GetPosition(var_388_cvector);
	var_389_cvector = var_387_cvector - var_388_cvector;
	var_390_float = GetByIndex(var_389_cvector, 0);
	var_391_float = GetByIndex(var_389_cvector, 2);
	RotateAsync(var_390_float, var_391_float);
	return 6;
}


func_2925(var_19_object)
{
	var_20_object = Obj();
	var_19_object = var_20_object;
	func_2912(var_20_object);
	var_27_bool = 0; var_28_object = Obj();
	var_19_object = var_28_object;
	func_2201(var_27_bool, var_28_object);
	var_61_bool = var_27_bool == 0; //@nz
	if(var_61_bool != 0) {
		return 0;
	}
	var_62_bool = 0; var_63_object = Obj();
	var_19_object = var_63_object;
	TaskCall(7);
	func_1770(var_62_bool, var_63_object);
	TaskReturn();
	if(var_62_bool != 0) {
		var_703_object = Obj();
		var_19_object = var_703_object;
		TaskCall(6);
		func_1555(var_706_bool, var_703_object);
		TaskReturn();
	}
	ResetAAS();
	return 0;
}


func_2415(var_63_bool)
{
	var_64_bool = 0; var_65_bool = 0;
	IsLoaded(var_65_bool);
	var_65_bool = var_63_bool;
	return 2;
}


func_2420(var_299_object)
{
	var_300_float = 0; var_301_cvector = CVector(0,0,0); var_302_float = 0; var_303_cvector = CVector(0,0,0);
	@@var_299_object:GetEyesHeight(var_302_float);
	var_303_cvector = CVector(0.0, 0.0, 0.0);
	var_304_float = GetByIndex(var_303_cvector, 1);
	var_302_float = var_304_float;
	SetByIndex(var_303_cvector, 1) = var_304_float;
	LookAsync(var_299_object, "head", var_303_cvector);
	return 4;
}


func_887(var_2_int, var_282_bool, var_283_object, var_284_float, var_285_float, var_286_bool, var_287_bool)
{
	var_291_bool = 0; var_292_bool = 0; var_293_bool = 0; var_294_bool = 0;
	var_295_object = Obj();
	var_283_object = var_295_object;
	func_2709(var_295_object);
	SetTimer((int)1, (int)5);
	CanSee(var_293_bool, var_283_object);
	var_298_bool = var_293_bool;
	if(var_298_bool != 0) {
		var_2_int = true;
		var_299_object = Obj();
		var_283_object = var_299_object;
		func_2420(var_299_object);
	} else {
		var_2_int = false;
	}
	var_306_bool = 0; var_307_object = Obj();
	var_283_object = var_307_object;
	func_2017(var_306_bool, var_307_object);
	if(var_306_bool != 0) {
		var_308_object = Obj();
		func_2570(var_308_object);
		SendPlayerEnemy(var_283_object, var_308_object);
	}
	var_309_bool = 0; var_310_object = Obj(); var_311_float = 0; var_312_float = 0; var_313_bool = 0; var_314_bool = 0;
	var_283_object = var_310_object;
	var_284_float = var_311_float;
	var_285_float = var_312_float;
	var_286_bool = var_313_bool;
	var_287_bool = var_314_bool;
	func_992(var_293_bool, var_294_bool, var_309_bool, var_310_object, var_311_float, var_312_float, var_313_bool, var_314_bool);
	var_309_bool = var_294_bool;
	var_360_int = var_2_int;
	if(var_360_int != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_294_bool = var_282_bool;
	return 4;
	
}


func_1402()
{
	var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_float = 0; var_55_bool = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_bool = 0;
	WaitForAnimEnd();
	var_63_bool = 0;
	func_2415(var_63_bool);
	var_66_bool = var_63_bool == 0; //@nz
	if(var_66_bool != 0) {
		return 14;
	}
	func_2742((int)0);
	var_67_int = var_56_int;
	var_57_int = 0;
	
Label_1416:
	var_80_bool = 0;
	var_80_bool = 0;
	var_82_bool = var_57_int < (int)5;
	if(var_82_bool != 0) {
		var_83_bool = 0;
		func_2415(var_83_bool);
		if(var_83_bool != 0) {
			var_80_bool = 1;
		}
	}
	if(var_80_bool != 0) {
		irand(var_58_int, (int)3);
		var_86_bool = var_58_int == (int)0;
		if(var_86_bool != 0) {
			var_87_int = var_56_int;
			if(var_87_int == 0) goto Label_1449;
			irand(var_59_int, var_56_int);
			var_89_string = ""; var_90_int = 0;
			var_59_int = var_90_int;
			func_2735(var_89_string, var_90_int);
			PlayAnimation("all", var_89_string);
			WaitForAnimEnd(var_60_bool);
			var_91_bool = var_60_bool == 0; //@nz
			if(var_91_bool != 0) {
			} else {
		} else {
				var_96_bool = var_58_int == (int)1;
				if(var_96_bool != 0) {
					rand(var_61_float, (int)4);
					var_99_int = var_61_float + (int)1;
					Sleep(var_99_int, var_62_bool);
					var_100_bool = var_62_bool == 0; //@nz
					if(var_100_bool != 0) {
						goto Label_1478;
					}
					goto Label_1467;
				}
				var_101_int = var_57_int;
				if(var_101_int == 0) goto Label_1467;
				goto Label_1478;
		}
		Label_1467:
			var_92_bool = 0;
			func_1481(var_92_bool);
			var_93_bool = var_92_bool == 0; //@nz
			if(var_93_bool != 0) {
				goto Label_1478;
			}
			ResetAAS();
			var_57_int = var_57_int + (int)1;
			goto Label_1416;

		}
	}
Label_1478:
	ResetAAS();
	return 14;
	
}


func_2431(var_88_string, var_89_int, var_90_int)
{
	var_91_bool = 0; var_92_bool = 0;
	var_93_bool = 0; var_94_int = 0; var_95_int = 0;
	var_89_int = var_94_int;
	var_90_int = var_95_int;
	func_2636(var_93_bool, var_94_int, var_95_int);
	if(var_93_bool != 0) {
		AddItem(var_92_bool, var_88_string, (int)0);
	}
	return 2;
}


func_2953(var_19_bool, var_20_object, var_21_object)
{
	var_22_bool = 0; var_23_float = 0; var_24_bool = 0; var_25_float = 0;
	var_26_bool = 0; var_27_object = Obj();
	var_21_object = var_27_object;
	func_2794(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		CanSee(var_24_bool, var_20_object);
		var_44_float = 0; var_45_object = Obj();
		var_20_object = var_45_object;
		func_2009(var_44_float, var_45_object);
		var_44_float = var_25_float;
		var_52_bool = 0;
		var_52_bool = 0;
		var_54_bool = var_25_float <= (float)1000000.0;
		if(var_54_bool != 0) {
			var_55_bool = 0;
			var_55_bool = 1;
			var_56_bool = var_24_bool;
			if(var_56_bool != 1) {
				var_58_bool = var_25_float <= (float)490000.0;
				if(var_58_bool != 1) {
					var_55_bool = 0;
				}
			}
			if(var_55_bool != 0) {
				var_52_bool = 1;
			}
		}
		if(var_52_bool != 0) {
			var_19_bool = 1;
			return 4;
		}
	}
	var_19_bool = 0;
	return 4;
}


func_2442(var_150_string)
{
	var_151_bool = 0; var_152_int = 0; var_153_bool = 0; var_154_int = 0; var_155_bool = 0; var_156_float = 0; var_157_cvector = CVector(0,0,0); var_158_cvector = CVector(0,0,0); var_159_bool = 0; var_160_int = 0; var_161_bool = 0; var_162_int = 0; var_163_bool = 0; var_164_float = 0; var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0);
	IsExisting3DSound(var_159_bool, var_150_string);
	var_167_bool = var_159_bool == 0; //@nz
	if(var_167_bool != 0) {
		var_160_int = 0;

	Label_2448:
		var_169_int = var_160_int + (int)1;
		var_170_int = var_150_string + var_169_int;
		IsExisting3DSound(var_161_bool, var_170_int);
		var_171_bool = var_161_bool == 0; //@nz
		if(var_171_bool != 0) {
		} else {
			var_160_int = var_160_int + (int)1;
			goto Label_2448;
		}
		var_172_bool = var_160_int == 0; //@nz
		if(var_172_bool != 0) {
			return 16;
		}
		irand(var_162_int, var_160_int);
		var_174_int = var_162_int + (int)1;
		var_150_string = var_150_string + var_174_int;
	}
	Is3DSoundLoaded(var_163_bool, var_150_string);
	var_175_bool = var_163_bool;
	if(var_175_bool != 0) {
		GetEyesHeight(var_164_float);
		GetDirection(var_165_cvector);
		var_166_cvector = var_165_cvector * (int)50;
		var_177_float = GetByIndex(var_166_cvector, 1);
		var_177_float = var_177_float + var_164_float;
		SetByIndex(var_166_cvector, 1) = var_177_float;
		PlayGlobalSound(var_150_string, var_166_cvector);
	}
	return 16;
	
}


func_1956(var_149_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_150_string = "";
	var_149_string = var_150_string;
	func_2442(var_150_string);
	PlayAnimation("all", var_149_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_149_string);
	RemoveEnvelope();
	return 0;
}


func_2986(var_17_object)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_object = var_19_object;
	func_2017(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		var_22_bool = 0; var_23_object = Obj(); var_24_float = 0;
		var_17_object = var_23_object;
		func_2647(var_22_bool, var_23_object, (float)0.05000000074505806);
	}
	var_60_object = Obj();
	var_17_object = var_60_object;
	TaskCall(8);
	func_1824(var_60_object);
	TaskReturn();
	return 0;
}


func_432(var_1_object, var_2_int, var_4_bool)
{
	var_242_bool = 0; var_243_bool = 0; var_244_cvector = CVector(0,0,0); var_245_bool = 0; var_246_bool = 0; var_247_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_434:
	var_251_int = var_1_object + (int)1;
	var_252_int = "attack_begin" + var_251_int;
	HasAnimation(var_245_bool, "all", var_252_int);
	var_253_bool = var_245_bool == 0; //@nz
	if(var_253_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_434;
	}
	var_2_int = 0;
	
Label_448:
	var_256_int = var_2_int + (int)1;
	var_257_int = "attack" + var_256_int;
	IsExisting3DSound(var_246_bool, var_257_int);
	var_258_bool = var_246_bool == 0; //@nz
	if(var_258_bool != 0) {
	} else {
		var_2_int = var_2_int + (int)1;
		goto Label_448;

	}
	GetAnimationOffset(var_247_cvector, "all", "bjump");
	var_261_float = GetByIndex(var_247_cvector, 2);
	var_4_bool = -var_261_float;
	return 6;
	
}


func_2483(var_75_bool, var_76_string)
{
	var_75_bool = 1;
	var_77_bool = 0;
	var_77_bool = 1;
	var_78_bool = 0;
	var_78_bool = 1;
	var_79_bool = 0;
	var_79_bool = 1;
	var_80_bool = 0;
	var_80_bool = 1;
	var_81_bool = 0;
	var_81_bool = 1;
	var_82_bool = 0;
	var_82_bool = 1;
	var_83_bool = 0;
	var_83_bool = 1;
	var_84_bool = 0;
	var_84_bool = 1;
	var_85_bool = 0;
	var_85_bool = 1;
	var_86_bool = 0;
	var_86_bool = 1;
	var_87_bool = 0;
	var_87_bool = 1;
	var_89_bool = var_76_string == "woman";
	if(var_89_bool != 1) {
		var_91_bool = var_76_string == "worker";
		if(var_91_bool != 1) {
			var_87_bool = 0;
		}
	}
	if(var_87_bool != 1) {
		var_93_bool = var_76_string == "butcher";
		if(var_93_bool != 1) {
			var_86_bool = 0;
		}
	}
	if(var_86_bool != 1) {
		var_95_bool = var_76_string == "wasted_girl";
		if(var_95_bool != 1) {
			var_85_bool = 0;
		}
	}
	if(var_85_bool != 1) {
		var_97_bool = var_76_string == "boy";
		if(var_97_bool != 1) {
			var_84_bool = 0;
		}
	}
	if(var_84_bool != 1) {
		var_99_bool = var_76_string == "vaxxabitka";
		if(var_99_bool != 1) {
			var_83_bool = 0;
		}
	}
	if(var_83_bool != 1) {
		var_101_bool = var_76_string == "unosha";
		if(var_101_bool != 1) {
			var_82_bool = 0;
		}
	}
	if(var_82_bool != 1) {
		var_103_bool = var_76_string == "wasted_male";
		if(var_103_bool != 1) {
			var_81_bool = 0;
		}
	}
	if(var_81_bool != 1) {
		var_105_bool = var_76_string == "alkash";
		if(var_105_bool != 1) {
			var_80_bool = 0;
		}
	}
	if(var_80_bool != 1) {
		var_107_bool = var_76_string == "dohodyaga";
		if(var_107_bool != 1) {
			var_79_bool = 0;
		}
	}
	if(var_79_bool != 1) {
		var_109_bool = var_76_string == "vaxxabit";
		if(var_109_bool != 1) {
			var_78_bool = 0;
		}
	}
	if(var_78_bool != 1) {
		var_111_bool = var_76_string == "nudegirl";
		if(var_111_bool != 1) {
			var_77_bool = 0;
		}
	}
	if(var_77_bool != 1) {
		var_113_bool = var_76_string == "morlok";
		if(var_113_bool != 1) {
			var_75_bool = 0;
		}
	}
	return 0;
}


func_950(var_2_int)
{
	KillTimer((int)1);
	var_18_int = var_2_int;
	if(var_18_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_1116(var_16_bool);
	return 0;
}


func_1988(var_573_string, var_574_int)
{
	var_576_bool = var_574_int == (int)2;
	if(var_576_bool != 0) {
		var_573_string = "fire";
		return 0;
	EMIT "GOTO 0x7d0";
	}
	var_578_bool = var_574_int == (int)1;
	if(var_578_bool != 0) {
		var_573_string = "bullet";
		return 0;
	}
	var_573_string = "phys";
	return 0;
}


func_1481(var_92_bool)
{
	var_92_bool = 1;
	return 0;
}


func_1483()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1488(var_30_bool)
{
	var_31_bool = 0; var_32_bool = 0;
	Sleep((int)5, var_32_bool);
	var_30_bool = !var_32_bool;
	return 2;
}


func_2002(var_50_cvector, var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	GetPosition(var_54_cvector);
	@@var_51_object:GetPosition(var_55_cvector);
	var_50_cvector = var_55_cvector - var_54_cvector;
	return 4;
}


func_467(var_0_bool, var_531_float, var_532_int)
{
	var_533_object = Obj(); var_534_float = 0; var_535_float = 0; var_536_object = Obj(); var_537_float = 0; var_538_float = 0;
	var_540_float = var_531_float * (float)0.8999999761581421;
	GetVictim(var_540_float, var_536_object);
	ReportAttack(var_0_bool);
	var_541_bool = var_536_object == var_0_bool;
	if(var_541_bool != 0) {
		var_542_float = 0; var_543_object = Obj(); var_544_int = 0;
		var_536_object = var_543_object;
		var_532_int = var_544_int;
		func_154(var_544_int);
		var_542_float = var_537_float;
		var_545_float = 0; var_546_object = Obj(); var_547_float = 0; var_548_int = 0;
		var_536_object = var_546_object;
		var_537_float = var_547_float;
		var_549_int = 0; var_550_object = Obj(); var_551_int = 0;
		var_536_object = var_550_object;
		var_532_int = var_551_int;
		func_157(var_551_int);
		var_549_int = var_548_int;
		func_2056(var_545_float, var_546_object, var_547_float, var_548_int);
		var_545_float = var_538_float;
		var_610_int = 0;
		func_160(var_610_int);
		ReportHit(var_0_bool, var_610_int, var_538_float, var_537_float);
		var_611_object = Obj(); var_612_float = 0;
		var_536_object = var_611_object;
		var_538_float = var_612_float;
		func_162(var_611_object, var_612_float);
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1494()
{
	StopGroup0();
	return 0;
}


func_2009(var_78_float, var_79_object)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0);
	GetPosition(var_83_cvector);
	@@var_79_object:GetPosition(var_84_cvector);
	var_85_cvector = var_84_cvector - var_83_cvector;
	var_78_float = var_85_cvector | var_85_cvector;
	return 6;
}


func_992(var_0_bool, var_1_object, var_309_bool, var_310_object, var_311_float, var_312_float, var_313_bool, var_314_bool)
{
	var_315_bool = 0; var_316_bool = 0; var_317_object = Obj(); var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); var_321_float = 0; var_322_object = Obj(); var_323_bool = 0; var_324_bool = 0; var_325_object = Obj(); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_float = 0; var_330_object = Obj();
	var_0_bool = false;
	var_1_object = var_310_object;
	var_314_bool = var_324_bool;
	
Label_996:
	var_331_bool = 0; var_332_object = Obj();
	var_310_object = var_332_object;
	func_1132(var_331_bool, var_332_object);
	var_335_bool = var_331_bool == 0; //@nz
	if(var_335_bool != 0) {
		var_309_bool = 0;
		return 16;
	}
	@@var_310_object:GetPosition(var_326_cvector);
	GetPosition(var_327_cvector);
	var_328_cvector = var_326_cvector - var_327_cvector;
	var_329_float = var_328_cvector | var_328_cvector;
	var_336_bool = 0;
	var_336_bool = 0;
	var_338_bool = var_312_float > (int)0;
	if(var_338_bool != 0) {
		var_339_float = var_312_float * var_312_float;
		var_340_bool = var_329_float > var_339_float;
		if(var_340_bool != 0) {
			var_336_bool = 1;
		}
	}
	if(var_336_bool != 0) {
		Stop();
		var_309_bool = 0;
		return 16;
	}
	var_341_float = var_311_float * var_311_float;
	var_342_bool = var_329_float > var_341_float;
	if(var_342_bool != 0) {
		@@var_310_object:GetPFPosition(var_326_cvector);
		FindPathTo(var_330_object, var_326_cvector);
		var_343_bool = var_330_object != 0; //@nn
		if(var_343_bool != 0) {
			var_330_object = var_325_object;
			var_330_object = 0;
		}
		var_344_bool = var_325_object != 0; //@nn
		if(var_344_bool != 0) {
			var_345_bool = var_324_bool;
			if(var_345_bool == 0) goto Label_1045;
			var_324_bool = 0;
			RotatePath(var_325_object, var_323_bool);
			var_346_bool = var_323_bool == 0; //@nz
			if(var_346_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_349_string = "";
				func_1139(var_349_string);
				var_350_string = "";
				func_1141(var_350_string);
				FollowPath(var_325_object, var_313_bool, var_323_bool, var_349_string, var_350_string);
				var_351_bool = var_323_bool == 0; //@nz
				if(var_351_bool != 0) {
					var_352_bool = var_0_bool;
					if(var_352_bool != 0) {
						var_325_object = 0;
						goto Label_1092;
					EMIT "GOTO 0x429";
					}
				} else {
					var_325_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_323_bool);
					var_355_bool = var_323_bool == 0; //@nz
					if(var_355_bool != 0) {
						var_356_bool = var_0_bool;
						if(var_356_bool != 0) {
							var_325_object = 0;
							goto Label_1092;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1092;
	}
			var_330_object = 0;
			goto Label_1090;

		Label_1090:
			var_325_object = 0;

		}
		goto Label_996;
	}
Label_1092:
	var_309_bool = !var_0_bool;
	return 16;
	
}


func_2017(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0;
	IsPlayerActor(var_19_object, var_21_bool);
	var_21_bool = var_18_bool;
	return 2;
}


func_3041(var_106_int)
{
	var_107_int = 0; var_108_int = 0;
	GetVariable("branch", var_108_int);
	var_108_int = var_106_int;
	return 2;
}


func_2022(var_41_bool, var_42_object, var_43_string)
{
	var_44_bool = 0; var_45_bool = 0;
	var_48_bool = IsFuncExist(var_42_object, "HasProperty", (int)2);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_41_bool = 0;
		return 2;
	}
	@@var_42_object:HasProperty(var_43_string, var_45_bool);
	var_45_bool = var_41_bool;
	return 2;
}


func_3047(var_20_object)
{
	var_21_int = 0;
	func_3041(var_21_int);
	var_26_bool = var_21_int == (int)1;
	if(var_26_bool != 0) {
		WorkWithCorpse(var_20_object);
	} else {
		Barter(var_20_object);
	}
	return 0;
	
}


func_2034(var_33_bool, var_34_object, var_35_string, var_36_float, var_37_float, var_38_float)
{
	var_39_float = 0; var_40_float = 0;
	var_41_bool = 0; var_42_object = Obj(); var_43_string = "";
	var_34_object = var_42_object;
	var_35_string = var_43_string;
	func_2022(var_41_bool, var_42_object, var_43_string);
	var_50_bool = var_41_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_33_bool = 0;
		return 2;
	}
	@@var_34_object:GetProperty(var_35_string, var_40_float);
	var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0;
	var_52_float = var_40_float + var_36_float;
	var_37_float = var_53_float;
	var_38_float = var_54_float;
	func_2617(var_51_float, var_52_float, var_53_float, var_54_float);
	@@var_34_object:SetProperty(var_35_string, var_51_float);
	var_33_bool = 1;
	return 2;
}


func_3060(var_69_int, var_70_int)
{
	var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_bool = 0;
	var_75_bool = var_69_int > var_70_int;
	if(var_75_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_73_int = 0;
	var_77_bool = var_69_int != var_70_int;
	if(var_77_bool != 0) {
		var_78_int = var_70_int - var_69_int;
		irand(var_73_int, var_78_int);
	} else {
		var_87_bool = var_69_int == (int)0;
		if(var_87_bool == 0) goto Label_3078;
		return 4;
	}
Label_3078:
	var_73_int = var_73_int + var_69_int;
	var_80_bool = var_73_int == (int)0;
	if(var_80_bool != 0) {
		return 4;
	}
	var_81_int = 0; var_82_string = "";
	func_3162(var_81_int, "Money");
	AddItem(var_74_bool, var_81_int, (int)0, var_73_int);
	return 4;
	
}


func_506(var_0_bool, var_1_object, var_498_bool, var_499_float)
{
	var_500_int = 0; var_501_bool = 0; var_502_int = 0; var_503_string = ""; var_504_int = 0; var_505_bool = 0; var_506_int = 0; var_507_string = "";
	func_847(var_507_string);
	irand(var_504_int, var_1_object);
	var_504_int = var_504_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_2718();
	var_512_int = "attack_begin" + var_504_int;
	PlayAnimation("all", var_512_int);
	WaitForAnimEnd();
	func_815(var_506_int, var_507_string);
	var_528_bool = 0; var_529_object = Obj();
	var_529_object = var_0_bool;
	func_2201(var_528_bool, var_529_object);
	var_530_bool = var_528_bool == 0; //@nz
	if(var_530_bool != 0) {
		StopAsync();
		var_498_bool = 0;
		return 8;
	}
	var_531_float = 0; var_532_int = 0;
	var_499_float = var_531_float;
	var_504_int = var_532_int;
	func_467(var_507_string, var_531_float, var_532_int);
	var_636_int = "attack_middle" + var_504_int;
	HasAnimation(var_505_bool, "all", var_636_int);
	var_637_bool = var_505_bool;
	if(var_637_bool != 0) {
		func_2718();
		var_640_int = "attack_middle" + var_504_int;
		PlayAnimation("all", var_640_int);
		WaitForAnimEnd();
		func_847(var_507_string);
		var_641_bool = 0; var_642_object = Obj();
		var_642_object = var_0_bool;
		func_2201(var_641_bool, var_642_object);
		var_643_bool = var_641_bool == 0; //@nz
		if(var_643_bool != 0) {
			StopAsync();
			var_498_bool = 0;
			return 8;
		}
		var_644_float = 0; var_645_int = 0;
		var_499_float = var_644_float;
		var_504_int = var_645_int;
		func_467(var_507_string, var_644_float, var_645_int);
		var_506_int = 1;

	Label_583:
		var_647_int = "attack_middle" + var_504_int;
		var_649_int = var_647_int + "_";
		var_507_string = var_649_int + var_506_int;
		HasAnimation(var_505_bool, "all", var_507_string);
		var_651_bool = var_505_bool == 0; //@nz
		if(var_651_bool != 0) {
		} else {
			func_2718();
			PlayAnimation("all", var_507_string);
			WaitForAnimEnd();
			func_847(var_507_string);
			var_667_bool = 0; var_668_object = Obj();
			var_668_object = var_0_bool;
			func_2201(var_667_bool, var_668_object);
			var_669_bool = var_667_bool == 0; //@nz
			if(var_669_bool != 0) {
				StopAsync();
				var_498_bool = 0;
				var_670_float = 0; var_671_int = 0;
				var_499_float = var_670_float;
				var_504_int = var_671_int;
				func_467(var_507_string, var_670_float, var_671_int);
				var_506_int = var_506_int + (int)1;
				goto Label_583;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_655_int = "attack_end" + var_504_int;
	PlayAnimation("all", var_655_int);
	var_656_bool = 0;
	func_857(var_656_bool);
	if(var_656_bool != 0) {
		var_657_bool = 0; var_658_float = 0;
		func_645(var_657_bool, (float)0.44999998807907104);
		StopAsync();
	}
	var_498_bool = 1;
	return 8;
	
}


