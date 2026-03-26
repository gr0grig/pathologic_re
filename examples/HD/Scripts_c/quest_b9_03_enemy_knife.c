// @IMPORTS: GetPosition/1,Trace/1,RemoveActor/1,SetProperty/2,GetDirection/1,GetMainOutdoorScene/1,irand/2,BroadcastMessage/3,sync/0,SetTimer/2,KillTimer/1,IsPlayerActor/2,PlayGlobalMusic/1,GetPFPosition/1,CanReachByPF/2,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,StopAnimation/0,StopGroup0/0,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,SendPlayerEnemy/2,UnlookAsync/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,WaitForAnimEnd/1,rand/2,ResetAAS/0,RotateAsync/2,Hold/0,SetRTEnvelope/2,IsOverrideActive/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,IsLoaded/1,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,AddItem/4,SetVariable/2,GetProperty/2,SignalDeath/1
// @STRINGS: W:FSM Init failed|W:noaccess|W:pt_b9q03_bonfire|W:_patrol|A:GetLocator|A:GetPosition|A:GetDirection|W:b9q03_corpse|W:Unknown FSM state|W:b9q03_helpme|W:helpme timer|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:all|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|W:walk|W:run|W:hunt|W:coffee|W:tvirin|W:silver_ring|W:gold_ring|W:bracelet|W:watch|W:beads|W:ear_ring|W:feromicin|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:cleanup|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|A:AddItem|W:idle|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:player_shot|W:b9q03BonfireBurnedByFollower|W:Attacking follower after he has burned bonefire.|W:b9q03|W:Bonfire index: |W:Bonfire pantrol point count: |W:changing state to c_iStateWaitForLoad|W:changing state to c_iStateHeatHands|W:changing state to c_iStateIdle|W:changing state to c_iStatePatrol|W:changing state to c_iStateAware|W:changing state to c_iStateSearchEnemy|W:changing state to c_iStateHearEnemy|W:changing state to c_iStateAttack|W:b9q03HandHeatLock|W:b9q03PatrolLock
// @GLOBALS: 0:bool:,1:int:,2:int:,3:int:,4:int:,5:object:,6:object:,7:object:,8:object:
// @RUN_OP: 0x8
// @RUN_TASK: 0
// @TASK_0: vars=cvector,cvector params=0
// @TASK_1: vars=object,int,int,bool,bool,float,int,object params=1
// @EVENT_7: op=0x1d8 vars=int
// @EVENT_1: op=0x1ea vars=object
// @EVENT_6: op=0x1ff vars=
// @TASK_2: vars=bool,object,bool,object params=6
// @EVENT_7: op=0x4e1 vars=int
// @EVENT_6: op=0x4f8 vars=
// @EVENT_1: op=0x54c vars=object
// @EVENT_2: op=0x55b vars=object
// @EVENT_10: op=0x5e1 vars=object
// @EVENT_41: op=0x5ec vars=object
// @TASK_3: vars=bool,object,bool params=2
// @EVENT_6: op=0x627 vars=
// @EVENT_42: op=0x630 vars=object,string
// @EVENT_1: op=0x63b vars=object
// @EVENT_3: op=0x646 vars=object
// @EVENT_17: op=0x651 vars=object
// @EVENT_7: op=0x65e vars=int
// @EVENT_10: op=0x6e4 vars=object
// @EVENT_41: op=0x6ef vars=object
// @TASK_4: vars= params=0
// @EVENT_6: op=0x707 vars=
// @EVENT_42: op=0x70f vars=object,string
// @EVENT_1: op=0x71a vars=object
// @EVENT_3: op=0x724 vars=object
// @EVENT_17: op=0x72e vars=object
// @TASK_5: vars=bool params=4
// @EVENT_6: op=0x7a0 vars=
// @EVENT_42: op=0x7a8 vars=object,string
// @EVENT_1: op=0x7b3 vars=object
// @EVENT_3: op=0x7bd vars=object
// @EVENT_17: op=0x7c7 vars=object
// @EVENT_7: op=0x83c vars=int
// @EVENT_10: op=0x84d vars=object
// @EVENT_41: op=0x858 vars=object
// @TASK_6: vars=bool params=1
// @EVENT_42: op=0x87c vars=object,string
// @EVENT_1: op=0x887 vars=object
// @EVENT_3: op=0x891 vars=object
// @EVENT_17: op=0x89b vars=object
// @EVENT_6: op=0x8b7 vars=
// @EVENT_7: op=0x928 vars=int
// @EVENT_10: op=0x939 vars=object
// @EVENT_41: op=0x944 vars=object
// @TASK_7: vars=bool params=1
// @EVENT_6: op=0x960 vars=
// @EVENT_42: op=0x969 vars=object,string
// @EVENT_1: op=0x975 vars=object
// @EVENT_3: op=0x980 vars=object
// @EVENT_17: op=0x98b vars=object
// @TASK_8: vars= params=1
// @EVENT_6: op=0xa24 vars=
// @EVENT_0: op=0xa3b vars=object
// @EVENT_22: op=0xaba vars=object,int,float,float
// @EVENT_16: op=0xabc vars=object,string
// @EVENT_41: op=0xabe vars=object
// @TASK_9: vars= params=0
// @EVENT_26: op=0xad2 vars=string
// @EVENT_5: op=0xade vars=
// @STANDALONE_EVENT_26: op=0xcfa vars=string
// @STANDALONE_EVENT_22: op=0xeb9 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xec1 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0xecb vars=object,string
// @STANDALONE_EVENT_41: op=0xed8 vars=object
// @PE: 0x1bd,0x1cd,0x1d0,0x1ea,0x1ff,0x4c5,0x4f8,0x531,0x54c,0x55b,0x5cf,0x5e1,0x5ec,0x5f5,0x600,0x627,0x630,0x63b,0x646,0x651,0x65e,0x6d2,0x6e4,0x6ef,0x6f8,0x703,0x707,0x70f,0x71a,0x724,0x72e,0x790,0x7a0,0x7a8,0x7b3,0x7bd,0x7c7,0x83c,0x84d,0x858,0x87c,0x887,0x891,0x89b,0x8a7,0x8b7,0x928,0x939,0x944,0x960,0x969,0x975,0x980,0x98b,0x9b1,0xa2c,0xaa0,0xaba,0xabc,0xabe,0xad2,0xae3,0xc70,0xc77,0xcc4,0xcfa,0xd67,0xda2,0xe11,0xe3f,0xe51,0xe63,0xe75,0xe92,0xeab,0xeb9,0xec1,0xed8

task_1_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_object = Obj(); var_22_object = Obj();
	var_24_bool = var_20_bool == (int)1;
	if(var_24_bool != 0) {
		GetMainOutdoorScene(var_22_object);
		var_26_int = GlobalVars[1];
		var_28_int = var_26_int + (int)1;
		var_29_int = "b9q03_helpme" + var_28_int;
		BroadcastMessage(var_29_int, var_7_float, var_22_object);
		Trace("helpme timer");
		var_22_object = 0;
	}
	return 2;
}


task_1_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0;
	var_21_bool = 0;
	var_22_bool = 0; var_23_object = Obj();
	var_20_bool = var_23_object;
	func_2808(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		var_26_object = GlobalVars[8];
		var_27_bool = var_26_object != var_20_bool;
		if(var_27_bool != 0) {
			var_21_bool = 1;
		}
	}
	if(var_21_bool != 0) {
		func_769(var_20_bool);
		var_28_bool = 0; var_29_object = Obj();
		var_20_bool = var_29_object;
		func_3701(var_28_bool, var_29_object);
	}
	return 0;
}


task_1_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_769(var_19_bool);
	var_20_bool = 0; var_21_int = 0;
	func_3601(var_20_bool, (int)0);
	return 0;
}


task_2_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_object = Obj(); var_22_object = Obj();
	var_24_bool = var_20_bool == (int)2;
	if(var_24_bool != 0) {
		GetMainOutdoorScene(var_22_object);
		var_26_int = GlobalVars[1];
		var_28_int = var_26_int + (int)1;
		var_29_int = "b9q03_helpme" + var_28_int;
		BroadcastMessage(var_29_int, var_3_int, var_22_object);
		Trace("helpme timer");
	} else {
		var_31_int = 0;
		var_20_bool = var_31_int;
		func_1329(Obj(), var_31_int);
	}
	return 2;
	
}


task_2_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_1343(var_19_bool);
	var_24_bool = 0; var_25_int = 0;
	func_3601(var_24_bool, (int)0);
	return 0;
}


task_2_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0;
	var_21_bool = 0;
	var_22_bool = var_1_cvector == var_20_bool;
	if(var_22_bool != 0) {
		var_23_bool = var_2_object == 0; //@nz
		if(var_23_bool != 0) {
			var_21_bool = 1;
		}
	}
	if(var_21_bool != 0) {
		var_2_object = true;
		var_24_object = Obj();
		var_20_bool = var_24_object;
		func_3105(var_24_object);
	}
	return 0;
}


task_2_event_2(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0;
	var_21_bool = 0;
	var_22_bool = var_1_cvector == var_20_bool;
	if(var_22_bool != 0) {
		var_23_object = var_2_object;
		if(var_23_object != 0) {
			var_21_bool = 1;
		}
	}
	if(var_21_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_2_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	RequestClearPath(var_20_bool);
	return 0;
}


task_2_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	func_1343(var_20_bool);
	var_20_bool = Obj();
	func_3800();
	return 0;
}


task_3_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_1768(var_19_bool);
	var_2_object = true;
	var_21_bool = 0; var_22_int = 0;
	func_3601(var_21_bool, (int)0);
	return 0;
}


task_3_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string, var_19_bool, var_20_bool, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_20_bool = var_23_object;
	var_21_bool = var_24_string;
	func_3330(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_1768(var_21_bool);
	}
	return 0;
}


task_3_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3431(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		var_2_object = true;
		func_1768(var_20_bool);
	}
	return 0;
}


task_3_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3490(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		var_2_object = true;
		func_1768(var_20_bool);
	}
	return 0;
}


task_3_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	EventDisable(42);
	EventDisable(1);
	EventDisable(3);
	func_1768(var_20_bool);
	var_2_object = true;
	var_22_bool = 0; var_23_object = Obj();
	var_20_bool = var_23_object;
	func_3701(var_22_bool, var_23_object);
	return 0;
}


task_3_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_int, var_18_bool, var_19_bool, var_20_bool)
{
	var_22_bool = var_20_bool == (int)3;
	if(var_22_bool != 0) {
		func_1768(var_20_bool);
		var_2_object = true;
		return 0;
	}
	var_24_int = 0;
	var_20_bool = var_24_int;
	func_1746(var_19_bool, var_20_bool, var_24_int);
	return 0;
}


task_3_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	RequestClearPath(var_20_bool);
	return 0;
}


task_3_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	func_1768(var_20_bool);
	var_20_bool = Obj();
	func_3800();
	return 0;
}


task_4_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_1931();
	var_20_bool = 0; var_21_int = 0;
	func_3601(var_20_bool, (int)0);
	return 0;
}


task_4_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string, var_19_bool, var_20_bool, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_20_bool = var_23_object;
	var_21_bool = var_24_string;
	func_3330(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_1931();
	}
	return 0;
}


task_4_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3431(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_1931();
	}
	return 0;
}


task_4_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3490(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_1931();
	}
	return 0;
}


task_4_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	EventDisable(42);
	EventDisable(1);
	EventDisable(3);
	func_1931();
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3701(var_21_bool, var_22_object);
	return 0;
}


task_5_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_2129(var_19_bool);
	var_21_bool = 0; var_22_int = 0;
	func_3601(var_21_bool, (int)0);
	return 0;
}


task_5_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_string, var_20_bool, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_20_bool = var_23_object;
	var_21_bool = var_24_string;
	func_3330(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_2129(var_21_bool);
	}
	return 0;
}


task_5_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3431(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_2129(var_20_bool);
	}
	return 0;
}


task_5_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3490(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_2129(var_20_bool);
	}
	return 0;
}


task_5_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	EventDisable(42);
	EventDisable(1);
	EventDisable(3);
	func_2129(var_20_bool);
	var_22_bool = 0; var_23_object = Obj();
	var_20_bool = var_23_object;
	func_3701(var_22_bool, var_23_object);
	return 0;
}


task_5_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int, var_19_bool, var_20_bool)
{
	var_22_bool = var_20_bool != (int)0;
	if(var_22_bool != 0) {
		return 0;
	}
	var_23_bool = 0;
	func_2003(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		var_0_cvector = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_5_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	RequestClearPath(var_20_bool);
	return 0;
}


task_5_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	func_2129(var_20_bool);
	var_20_bool = Obj();
	func_3800();
	return 0;
}


task_6_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_string, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_20_string = var_23_object;
	var_21_bool = var_24_string;
	func_3330(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_2365(var_21_bool);
	}
	return 0;
}


task_6_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3431(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_2365(var_20_bool);
	}
	return 0;
}


task_6_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3490(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_2365(var_20_bool);
	}
	return 0;
}


task_6_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	EventDisable(42);
	EventDisable(1);
	EventDisable(3);
	func_2365(var_20_bool);
	var_22_bool = 0; var_23_object = Obj();
	var_20_bool = var_23_object;
	func_3701(var_22_bool, var_23_object);
	return 0;
}


task_6_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_2365(var_19_bool);
	var_21_bool = 0; var_22_int = 0;
	func_3601(var_21_bool, (int)0);
	return 0;
}


task_6_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_int, var_20_bool)
{
	var_22_bool = var_20_bool != (int)0;
	if(var_22_bool != 0) {
		return 0;
	}
	var_23_bool = 0;
	func_2239(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		var_0_cvector = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_6_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	RequestClearPath(var_20_bool);
	return 0;
}


task_6_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	func_2365(var_20_bool);
	var_20_bool = Obj();
	func_3800();
	return 0;
}


task_7_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_2476();
	var_0_cvector = true;
	var_20_bool = 0; var_21_int = 0;
	func_3601(var_20_bool, (int)0);
	return 0;
}


task_7_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_string)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_20_object = var_23_object;
	var_21_string = var_24_string;
	func_3330(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_2476();
		var_0_cvector = true;
	}
	return 0;
}


task_7_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_object = var_22_object;
	func_3431(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_2476();
		var_0_cvector = true;
	}
	return 0;
}


task_7_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_object = var_22_object;
	func_3490(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_2476();
		var_0_cvector = true;
	}
	return 0;
}


task_7_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	EventDisable(42);
	EventDisable(1);
	EventDisable(3);
	func_2476();
	var_21_bool = 0; var_22_object = Obj();
	var_20_object = var_22_object;
	func_3701(var_21_bool, var_22_object);
	return 0;
}


task_8_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	var_20_object = Obj();
	func_3168(var_20_object);
	RemoveActor(var_20_object);
	Hold();
	return 0;
}


task_8_event_0(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	IsOverrideActive(var_22_bool);
	var_23_bool = var_22_bool == 0; //@nz
	if(var_23_bool != 0) {
		var_24_object = Obj();
		var_20_object = var_24_object;
		func_3268(var_24_object);
	}
	return 2;
}


task_8_event_22(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float)
{
	return 0;
}


task_8_event_16(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_string)
{
	return 0;
}


task_8_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	return 0;
}


task_9_event_26(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_string)
{
	var_22_bool = var_20_string == "cleanup";
	if(var_22_bool != 0) {
		var_23_object = Obj();
		func_3168(var_23_object);
		RemoveActor(var_23_object);
		Hold();
	}
	return 0;
}


task_9_event_5(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	StopGroup0();
	sync();
	return 0;
}


event_26(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_string)
{
	var_22_bool = var_20_string == "cleanup";
	if(var_22_bool != 0) {
		var_23_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
	}
	return 0;
}


event_22(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0;
	var_20_object = var_24_object;
	var_21_int = var_25_int;
	var_22_float = var_26_float;
	func_3007(var_24_object, var_25_int, var_26_float);
	return 0;
}


event_43(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_int = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0);
	var_20_object = var_26_object;
	var_21_int = var_27_int;
	var_22_float = var_28_float;
	var_24_cvector = var_29_cvector;
	var_25_cvector = var_30_cvector;
	func_3075(var_28_float, var_29_cvector, var_30_cvector);
	return 0;
}


event_16(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_string)
{
	var_22_float = 0; var_23_float = 0;
	var_25_bool = var_21_string == "health";
	if(var_25_bool != 0) {
		GetProperty("health", var_23_float);
		var_28_bool = var_23_float <= (int)0;
		if(var_28_bool != 0) {
			SignalDeath(var_20_object);
		}
	}
	return 2;
}


event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_object = Obj();
	var_20_object = var_21_object;
	TaskCall(8);
	func_2481(var_21_object);
	TaskReturn();
	return 0;
}


main(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_object = Obj();
	var_42_bool = 0;
	func_3517(var_42_bool);
	var_100_bool = var_42_bool == 0; //@nz
	if(var_100_bool != 0) {
		Trace("FSM Init failed");
		var_102_object = Obj();
		func_3168(var_102_object);
		RemoveActor(var_102_object);
		return 22;
	}
	SetProperty("noaccess", (int)0);
	GetPosition(var_0_cvector);
	GetDirection(var_1_cvector);
	var_107_int = GlobalVars[3];
	GlobalVars[3] = (int)0;
	var_108_int = GlobalVars[4];
	GlobalVars[4] = (int)2;
	
Label_37:
	if((bool)1 != 0) {
		var_111_int = GlobalVars[3];
		var_112_bool = (int)0 == var_111_int;
		if(var_112_bool != 0) {
			TaskCall(9);
			func_2752();
			TaskReturn();
			var_119_bool = 0; var_120_int = 0;
			func_3601(var_119_bool, (int)2);
		} else {
			var_139_int = GlobalVars[3];
			var_140_bool = (int)7 == var_139_int;
			if(var_140_bool != 0) {
				var_141_object = Obj();
				var_142_object = GlobalVars[8];
				var_142_object = var_141_object;
				TaskCall(1);
				func_445(var_150_object, var_141_object);
				TaskReturn();
				var_675_int = GlobalVars[3];
				var_676_bool = (int)7 == var_675_int;
				if(var_676_bool != 0) {
					var_677_int = 0;
					TaskCall(7);
					func_2385((int)1);
					TaskReturn();
					var_695_int = GlobalVars[3];
					var_696_bool = (int)7 == var_695_int;
					if(var_696_bool != 0) {
						var_697_bool = 0; var_698_int = 0;
						func_3601(var_697_bool, (int)2);
					}
				}
				goto Label_441;
			}
			var_700_int = GlobalVars[3];
			var_701_bool = (int)6 == var_700_int;
			if(var_701_bool != 0) {
				var_702_int = 0;
				TaskCall(7);
				func_2385((int)1);
				TaskReturn();
				var_705_int = GlobalVars[3];
				var_706_bool = (int)6 == var_705_int;
				if(var_706_bool != 0) {
					var_707_object = Obj(); var_708_float = 0;
					var_709_object = GlobalVars[7];
					var_709_object = var_707_object;
					TaskCall(3);
					func_1536(var_707_object, (float)8);
					TaskReturn();
					var_780_int = GlobalVars[3];
					var_781_bool = (int)6 == var_780_int;
					if(var_781_bool != 0) {
						var_782_int = 0;
						TaskCall(7);
						func_2385((int)1);
						TaskReturn();
						var_785_int = GlobalVars[3];
						var_786_bool = (int)6 == var_785_int;
						if(var_786_bool != 0) {
							var_787_bool = 0; var_788_int = 0;
							func_3601(var_787_bool, (int)2);
						}
					}
				}
				goto Label_441;
			}
			var_790_int = GlobalVars[3];
			var_791_bool = (int)1 == var_790_int;
			if(var_791_bool != 0) {
				var_792_bool = 0;
				func_3730((bool)1);
				TaskCall(6);
				func_2149((bool)0);
				TaskReturn();
				var_876_int = GlobalVars[3];
				var_877_bool = (int)1 == var_876_int;
				if(var_877_bool != 0) {
					TaskCall(4);
					func_1795();
					TaskReturn();
					var_930_int = GlobalVars[3];
					var_931_bool = (int)1 == var_930_int;
					if(var_931_bool != 0) {
						var_932_bool = 0; var_933_cvector = CVector(0,0,0); var_934_cvector = CVector(0,0,0); var_935_bool = 0;
						var_933_cvector = var_0_cvector;
						var_934_cvector = var_1_cvector;
						TaskCall(5);
						func_1936(var_932_bool, var_933_cvector, var_934_cvector, (bool)0);
						TaskReturn();
						var_992_int = GlobalVars[3];
						var_993_bool = (int)1 == var_992_int;
						if(var_993_bool != 0) {
							var_994_bool = 0; var_995_int = 0;
							func_3601(var_994_bool, (int)2);
						}
					}
				}
				var_996_bool = 0;
				func_3730((bool)0);
				goto Label_441;
			}
			var_998_int = GlobalVars[3];
			var_999_bool = (int)2 == var_998_int;
			if(var_999_bool != 0) {
				var_1000_bool = 0;
				func_0(var_41_object, var_1000_bool);
				var_1008_bool = var_1000_bool == 0; //@nz
				if(var_1008_bool != 0) {
					var_1009_bool = 0; var_1010_cvector = CVector(0,0,0); var_1011_cvector = CVector(0,0,0); var_1012_bool = 0;
					var_1010_cvector = var_0_cvector;
					var_1011_cvector = var_1_cvector;
					TaskCall(5);
					func_1936(var_1009_bool, var_1010_cvector, var_1011_cvector, (bool)0);
					TaskReturn();
				}
				var_1015_int = GlobalVars[3];
				var_1016_bool = (int)2 == var_1015_int;
				if(var_1016_bool != 0) {
					TaskCall(4);
					func_1795();
					TaskReturn();
					var_1018_int = GlobalVars[3];
					var_1019_bool = (int)2 == var_1018_int;
					if(var_1019_bool != 0) {
						var_1020_bool = 0;
						func_3744(var_1020_bool);
						var_1029_bool = var_1020_bool == 0; //@nz
						if(var_1029_bool != 0) {
							var_1030_bool = 0; var_1031_int = 0;
							func_3601(var_1030_bool, (int)3);
						} else {
							var_1032_bool = 0; var_1033_float = 0;
							func_3202(var_1032_bool, (float)0.5);
							if(var_1032_bool == 0) goto Label_227;
							var_1036_bool = 0;
							func_3719(var_1036_bool);
							var_1045_bool = var_1036_bool == 0; //@nz
							if(var_1045_bool == 0) goto Label_227;
							var_1046_bool = 0; var_1047_int = 0;
							func_3601(var_1046_bool, (int)1);
			}
						var_1049_int = GlobalVars[3];
						var_1050_bool = (int)3 == var_1049_int;
						if(var_1050_bool != 0) {
							var_1051_bool = 0;
							func_3755((bool)1);
							GetMainOutdoorScene(var_31_object);
							var_1060_int = GlobalVars[2];
							irand(var_32_int, var_1060_int);
							var_1061_bool = 0; var_1062_float = 0;
							func_3202(var_1061_bool, (float)0.5);
							var_1061_bool = var_33_bool;
							var_34_int = 0;

						Label_247:
							var_1063_int = GlobalVars[2];
							var_1064_bool = var_34_int < var_1063_int;
							if(var_1064_bool != 0) {
								var_1065_int = var_34_int + var_32_int;
								var_1066_int = GlobalVars[2];
								var_38_int = var_1065_int % var_1066_int;
								var_1067_bool = var_33_bool;
								if(var_1067_bool != 0) {
									var_1068_int = GlobalVars[2];
									var_1070_int = var_1068_int - (int)1;
									var_38_int = var_1070_int - var_38_int;
								}
								var_1072_int = GlobalVars[1];
								var_1074_int = var_1072_int + (int)1;
								var_1075_int = "pt_b9q03_bonfire" + var_1074_int;
								var_1077_int = var_1075_int + "_patrol";
								var_1079_int = var_38_int + (int)1;
								var_1080_int = var_1077_int + var_1079_int;
								@@var_31_object:GetLocator(var_1080_int, var_35_bool, var_36_cvector, var_37_cvector);
								var_1081_bool = 0; var_1082_cvector = CVector(0,0,0); var_1083_cvector = CVector(0,0,0); var_1084_bool = 0;
								var_36_cvector = var_1082_cvector;
								var_37_cvector = var_1083_cvector;
								TaskCall(5);
								func_1936(var_1081_bool, var_1082_cvector, var_1083_cvector, (bool)0);
								TaskReturn();
								var_1087_int = GlobalVars[3];
								var_1088_bool = (int)3 != var_1087_int;
								if(var_1088_bool != 0) {
								} else {
									var_1095_int = 0;
									TaskCall(7);
									func_2385((int)1);
									TaskReturn();
									var_1098_int = GlobalVars[3];
									var_1099_bool = (int)3 != var_1098_int;
									if(var_1099_bool != 0) {
										goto Label_298;
									}
									var_34_int = var_34_int + (int)1;
									goto Label_247;
						}
								var_1102_int = GlobalVars[3];
								var_1103_bool = (int)4 == var_1102_int;
								if(var_1103_bool != 0) {
									var_1104_object = GlobalVars[5];
									@@var_1104_object:GetPosition(var_39_cvector);
									var_1105_object = GlobalVars[5];
									@@var_1105_object:GetDirection(var_40_cvector);
									var_1106_bool = 0; var_1107_cvector = CVector(0,0,0); var_1108_cvector = CVector(0,0,0); var_1109_bool = 0;
									var_39_cvector = var_1107_cvector;
									var_1108_cvector = -var_40_cvector;
									TaskCall(5);
									func_1936(var_1106_bool, var_1107_cvector, var_1108_cvector, (bool)1);
									TaskReturn();
									var_1112_int = GlobalVars[3];
									var_1113_bool = (int)4 == var_1112_int;
									if(var_1113_bool != 0) {
										var_1114_int = 0;
										TaskCall(7);
										func_2385((int)2);
										TaskReturn();
										var_1117_int = GlobalVars[3];
										var_1118_bool = (int)4 == var_1117_int;
										if(var_1118_bool != 0) {
											var_1119_bool = 0; var_1120_cvector = CVector(0,0,0); var_1121_cvector = CVector(0,0,0); var_1122_bool = 0;
											var_1120_cvector = var_0_cvector;
											var_1121_cvector = var_1_cvector;
											TaskCall(5);
											func_1936(var_1119_bool, var_1120_cvector, var_1121_cvector, (bool)1);
											TaskReturn();
											var_1125_int = GlobalVars[3];
											var_1126_bool = (int)4 == var_1125_int;
											if(var_1126_bool != 0) {
												GetMainOutdoorScene(var_41_object);
												var_1128_int = GlobalVars[1];
												var_1130_int = var_1128_int + (int)1;
												var_1131_int = "b9q03_corpse" + var_1130_int;
												var_1132_object = Obj();
												func_3168(var_1132_object);
												BroadcastMessage(var_1131_int, var_1132_object, var_41_object);
												var_1133_bool = 0; var_1134_cvector = CVector(0,0,0); var_1135_cvector = CVector(0,0,0); var_1136_bool = 0;
												var_39_cvector = var_1134_cvector;
												var_39_cvector = var_1135_cvector;
												TaskCall(5);
												func_1936(var_1133_bool, var_1134_cvector, var_1135_cvector, (bool)1);
												TaskReturn();
												var_1139_int = GlobalVars[3];
												var_1140_bool = (int)4 == var_1139_int;
												if(var_1140_bool != 0) {
													var_1141_int = 0;
													TaskCall(7);
													func_2385((int)3);
													TaskReturn();
													var_1144_int = GlobalVars[3];
													var_1145_bool = (int)4 == var_1144_int;
													if(var_1145_bool != 0) {
														var_1146_bool = 0; var_1147_int = 0;
														func_3601(var_1146_bool, (int)2);
													}
												}
												var_41_object = 0;
											}
										}
									}
									goto Label_441;
								}
								var_1149_int = GlobalVars[3];
								var_1150_bool = (int)5 == var_1149_int;
								if(var_1150_bool != 0) {
									var_1151_int = 0;
									TaskCall(7);
									func_2385((int)1);
									TaskReturn();
									var_1154_int = GlobalVars[3];
									var_1155_bool = (int)5 == var_1154_int;
									if(var_1155_bool != 0) {
										var_1156_object = Obj(); var_1157_float = 0;
										var_1158_object = GlobalVars[6];
										var_1158_object = var_1156_object;
										TaskCall(3);
										func_1536(var_1156_object, (float)8);
										TaskReturn();
										var_1163_int = GlobalVars[3];
										var_1164_bool = (int)5 == var_1163_int;
										if(var_1164_bool != 0) {
											var_1165_int = 0;
											TaskCall(7);
											func_2385((int)2);
											TaskReturn();
											var_1168_int = GlobalVars[3];
											var_1169_bool = (int)5 == var_1168_int;
											if(var_1169_bool != 0) {
												var_1170_bool = 0; var_1171_int = 0;
												func_3601(var_1170_bool, (int)2);
											}
										}
									}
									goto Label_441;
								}
								Trace("Unknown FSM state");
	}
							return 22;
						}
					}
				Label_298:
					var_1090_int = GlobalVars[3];
					var_1091_bool = (int)3 == var_1090_int;
					if(var_1091_bool != 0) {
						var_1092_bool = 0; var_1093_int = 0;
						func_3601(var_1092_bool, (int)2);
					}
					var_1094_bool = 0;
					func_3755((bool)0);
					var_31_object = 0;
					goto Label_441;
				}
			}
		}
	Label_227:
		goto Label_441;
	}
Label_441:
	sync();
	goto Label_37;
	
}


func_1536(var_707_object, var_708_float)
{
	var_713_bool = 0; var_714_object = Obj();
	var_707_object = var_714_object;
	func_2939(var_713_bool, var_714_object);
	var_715_bool = var_713_bool == 0; //@nz
	if(var_715_bool != 0) {
		var_716_bool = 0; var_717_int = 0;
		func_3601(var_716_bool, (int)2);
		return 0;
	}
	var_719_bool = var_708_float > (int)0;
	if(var_719_bool != 0) {
		SetTimer((int)3, var_708_float);
		var_721_bool = 0; var_722_object = Obj(); var_723_float = 0; var_724_float = 0; var_725_bool = 0; var_726_bool = 0;
		var_707_object = var_722_object;
		func_1644(var_707_object, var_708_float, var_721_bool, var_722_object, (float)350.0, (float)6000, (bool)1, (bool)1);
		KillTimer((int)3);
	} else {
		var_773_bool = 0; var_774_object = Obj(); var_775_float = 0; var_776_float = 0; var_777_bool = 0; var_778_bool = 0;
		var_707_object = var_774_object;
		func_1644(var_707_object, var_708_float, var_773_bool, var_774_object, (float)350.0, (float)6000, (bool)1, (bool)1);
	}
	return 0;
	
}


func_0(var_0_cvector, var_1000_bool)
{
	var_1001_cvector = CVector(0,0,0); var_1002_cvector = CVector(0,0,0); var_1003_float = 0; var_1004_cvector = CVector(0,0,0); var_1005_cvector = CVector(0,0,0); var_1006_float = 0;
	GetPosition(var_1004_cvector);
	var_1005_cvector = var_1004_cvector - var_0_cvector;
	var_1006_float = var_1005_cvector | var_1005_cvector;
	var_1000_bool = var_1006_float < (int)40000;
	return 6;
}


func_1024(var_0_cvector, var_429_bool, var_430_float)
{
	var_431_bool = 0; var_432_cvector = CVector(0,0,0); var_433_cvector = CVector(0,0,0); var_434_cvector = CVector(0,0,0); var_435_float = 0; var_436_bool = 0; var_437_cvector = CVector(0,0,0); var_438_cvector = CVector(0,0,0); var_439_cvector = CVector(0,0,0); var_440_float = 0;
	
Label_1025:
	IsAnimationPlaying(var_436_bool);
	var_441_bool = var_436_bool == 0; //@nz
	if(var_441_bool != 0) {
	} else {
		var_442_bool = 0;
		func_1107(var_442_bool);
		if(var_442_bool != 0) {
			var_429_bool = 1;
			return 10;
		}
		var_487_bool = 0;
		var_487_bool = 1;
		var_488_bool = 0; var_489_object = Obj();
		var_489_object = var_0_cvector;
		func_2939(var_488_bool, var_489_object);
		var_490_bool = var_488_bool == 0; //@nz
		if(var_490_bool != 1) {
			var_491_int = var_4_int;
			if(var_491_int != 1) {
				var_487_bool = 0;
			}
		}
		if(var_487_bool != 0) {
			var_429_bool = 0;
			return 10;
		}
		@@@var_0_cvector:GetPFPosition(var_437_cvector);
		GetPFPosition(var_438_cvector);
		var_439_cvector = var_437_cvector - var_438_cvector;
		var_440_float = var_439_cvector | var_439_cvector;
		var_492_float = var_430_float * var_430_float;
		var_493_bool = var_440_float < var_492_float;
		if(var_493_bool != 0) {
			var_494_bool = 0; var_495_float = 0;
			var_430_float = var_495_float;
			func_851(var_439_cvector, var_440_float, var_494_bool, var_495_float);
			var_429_bool = 1;
			sync();
			goto Label_1025;
		}
		return 10;
	}
	func_1211(var_440_float);
	var_429_bool = 0;
	return 10;
	
}


func_3075(var_26_object, var_29_cvector, var_30_cvector)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj();
	GetScene(var_33_object);
	AddActorByType(var_34_object, "scripted", var_33_object, var_29_cvector, var_30_cvector, "blood_dir.xml");
	var_37_object = Obj();
	var_26_object = var_37_object;
	func_2963(var_37_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_519(var_0_cvector, var_3_int, var_4_int, var_6_bool, var_153_object, var_154_bool, var_155_float, var_261_bool, var_367_bool)
{
	var_156_float = 0; var_157_cvector = CVector(0,0,0); var_158_cvector = CVector(0,0,0); var_159_bool = 0; var_160_bool = 0; var_161_float = 0; var_162_cvector = CVector(0,0,0); var_163_float = 0; var_164_cvector = CVector(0,0,0); var_165_bool = 0; var_166_float = 0; var_167_float = 0; var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_bool = 0; var_171_bool = 0; var_172_float = 0; var_173_cvector = CVector(0,0,0); var_174_float = 0; var_175_cvector = CVector(0,0,0); var_176_bool = 0; var_177_float = 0;
	func_777(var_175_cvector, var_176_bool, var_177_float);
	var_6_bool = 0;
	var_202_bool = IsFuncExist(var_153_object, "@GetAttackDistance", (int)1);
	if(var_202_bool != 0) {
		@@var_153_object:GetAttackDistance(var_167_float);
		var_167_float = var_167_float + (int)50;
	} else {
							var_155_float = var_167_float;
	}
	var_205_bool = var_167_float >= (int)150;
	if(var_205_bool != 0) {
		var_167_float = 150;
	}
	var_3_int = false;
	var_0_cvector = var_153_object;
	IsPlayerActor(var_0_cvector, var_170_bool);
	var_206_bool = var_170_bool;
	if(var_206_bool != 0) {
		PlayGlobalMusic("attack");
	}
	var_208_bool = var_154_bool;
	if(var_208_bool != 0) {
		var_171_bool = 0;
	} else {
						var_171_bool = 1;

	}
	var_172_float = (float)300.0 + var_167_float;
	
Label_554:
	var_210_bool = 0;
	var_210_bool = 0;
	var_211_bool = 0;
	var_211_bool = 0;
	var_212_bool = 0; var_213_object = Obj();
	var_213_object = var_0_cvector;
	func_2939(var_212_bool, var_213_object);
	if(var_212_bool != 0) {
		var_246_bool = var_3_int == 0; //@nz
		if(var_246_bool != 0) {
			var_211_bool = 1;
		}
	}
	if(var_211_bool != 0) {
		var_247_bool = var_4_int == 0; //@nz
		if(var_247_bool != 0) {
			var_210_bool = 1;
		}
	}
	if(var_210_bool != 0) {
		func_1211(var_177_float);
		@@@var_0_cvector:GetPFPosition(var_168_cvector);
		GetPFPosition(var_169_cvector);
		var_173_cvector = var_168_cvector - var_169_cvector;
		var_174_float = var_173_cvector | var_173_cvector;
		var_253_float = var_172_float * var_172_float;
		var_254_bool = var_174_float >= var_253_float;
		if(var_254_bool != 0) {
			var_255_bool = 0; var_256_object = Obj(); var_257_float = 0; var_258_float = 0; var_259_bool = 0; var_260_bool = 0;
			var_256_object = var_0_cvector;
			var_167_float = var_257_float;
			TaskCall(2);
			func_1229(var_264_object, var_255_bool, var_256_object, var_257_float, (float)2000.0, (bool)1, (bool)0);
			TaskReturn();
			var_350_bool = var_261_bool == 0; //@nz
			if(var_350_bool != 0) {
				var_3_int = true;
			} else {
				var_171_bool = 0;
		} else {
				var_358_float = var_155_float * var_155_float;
				var_359_bool = var_174_float >= var_358_float;
				if(var_359_bool != 0) {
					@@@var_0_cvector:GetPFPosition(var_175_cvector);
					CanReachByPF(var_176_bool, var_175_cvector);
					var_360_bool = var_176_bool == 0; //@nz
					if(var_360_bool != 0) {
						var_361_bool = 0; var_362_object = Obj(); var_363_float = 0; var_364_float = 0; var_365_bool = 0; var_366_bool = 0;
						var_362_object = var_0_cvector;
						var_167_float = var_363_float;
						TaskCall(2);
						func_1229(var_370_object, var_361_bool, var_362_object, var_363_float, (float)2000.0, (bool)1, (bool)0);
						TaskReturn();
						var_371_bool = var_367_bool == 0; //@nz
						if(var_371_bool != 0) {
							var_3_int = true;
							goto Label_746;
						}
						var_171_bool = 0;
						goto Label_554;
					}
					var_372_bool = var_171_bool == 0; //@nz
					if(var_372_bool != 0) {
						var_373_object = Obj();
						var_373_object = var_0_cvector;
						func_3089(var_373_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1211(var_177_float);
						StopAsync();
						var_171_bool = 1;
						var_384_bool = 0;
						var_384_bool = 1;
						var_385_bool = 0; var_386_object = Obj();
						var_386_object = var_0_cvector;
						func_2939(var_385_bool, var_386_object);
						var_387_bool = var_385_bool == 0; //@nz
						if(var_387_bool != 1) {
							var_388_int = var_4_int;
							if(var_388_int != 1) {
								var_384_bool = 0;
							}
						}
						if(var_384_bool != 0) {
							goto Label_746;
						}
					}
					rand(var_177_float);
					var_389_bool = 0;
					var_391_bool = var_177_float < (float)0.6000000238418579;
					if(var_391_bool != 1) {
						var_392_bool = 0;
						func_1168((bool)1, var_392_bool);
						if(var_392_bool != 1) {
							var_389_bool = 0;
						}
					}
					if(var_389_bool != 0) {
						Face(var_0_cvector);
						func_1216();
						PlayAnimation("all", "attack_stay");
						var_429_bool = 0; var_430_float = 0;
						var_155_float = var_430_float;
						func_1024(var_177_float, var_429_bool, var_430_float);
						StopAsync();
					} else {
						Face(var_0_cvector);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1211(var_177_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_658_bool = 0;
						func_1168(var_177_float, var_658_bool);
						var_659_bool = var_658_bool == 0; //@nz
						if(var_659_bool == 0) goto Label_736;
						var_660_bool = 0;
						var_660_bool = 1;
						var_661_bool = 0; var_662_object = Obj();
						var_662_object = var_0_cvector;
						func_2939(var_661_bool, var_662_object);
						var_663_bool = var_661_bool == 0; //@nz
						if(var_663_bool != 1) {
							var_664_int = var_4_int;
							if(var_664_int != 1) {
								var_660_bool = 0;
							}
						}
						if(var_660_bool != 0) {
							goto Label_746;
						}
						@@@var_0_cvector:GetPFPosition(var_168_cvector);
						GetPFPosition(var_169_cvector);
						var_173_cvector = var_168_cvector - var_169_cvector;
						var_174_float = var_173_cvector | var_173_cvector;
						var_665_float = var_155_float * var_155_float;
						var_666_bool = var_174_float < var_665_float;
						if(var_666_bool == 0) goto Label_736;
						var_667_bool = 0; var_668_float = 0;
						var_155_float = var_668_float;
						func_851(var_176_bool, var_177_float, var_667_bool, var_668_float);
						var_669_bool = var_667_bool == 0; //@nz
						if(var_669_bool == 0) goto Label_736;
						goto Label_746;
				}
					var_670_bool = 0; var_671_float = 0;
					var_155_float = var_671_float;
					func_851(var_176_bool, var_177_float, var_670_bool, var_671_float);
					var_672_bool = var_670_bool == 0; //@nz
					if(var_672_bool != 0) {
						goto Label_746;
					}
					var_171_bool = 1;

				}
			Label_736:
				goto Label_745;
		}
		Label_745:
			goto Label_554;

		}
	}
Label_746:
	WaitForAnimEnd();
	var_351_bool = 0;
	var_351_bool = 1;
	var_352_int = var_3_int;
	if(var_352_int != 1) {
		var_353_int = var_4_int;
		if(var_353_int != 1) {
			var_351_bool = 0;
		}
	}
	if(var_351_bool != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_356_bool = var_170_bool;
	if(var_356_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_3601(var_119_bool, var_120_int)
{
	var_121_int = GlobalVars[3];
	var_122_bool = var_120_int == var_121_int;
	if(var_122_bool != 0) {
		var_119_bool = 0;
		return 0;
	}
	var_124_bool = var_120_int == (int)0;
	if(var_124_bool != 0) {
		var_125_int = GlobalVars[4];
		var_126_int = GlobalVars[3];
		var_126_int = var_125_int;
		GlobalVars[4] = var_125_int;
		Trace("changing state to c_iStateWaitForLoad");
	} else {
		var_130_bool = var_120_int == (int)1;
		if(var_130_bool != 0) {
			Trace("changing state to c_iStateHeatHands");
			goto Label_3642;
		}
		var_133_bool = var_120_int == (int)2;
		if(var_133_bool != 0) {
			Trace("changing state to c_iStateIdle");
			goto Label_3642;
		}
		var_136_bool = var_120_int == (int)3;
		if(var_136_bool != 0) {
			Trace("changing state to c_iStatePatrol");
			goto Label_3642;
		}
		var_119_bool = 0;
		return 0;
	}
Label_3642:
	var_128_int = GlobalVars[3];
	var_120_int = var_128_int;
	GlobalVars[3] = var_128_int;
	var_119_bool = 1;
	return 0;
	
}


func_3089(var_373_object)
{
	var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0);
	@@var_373_object:GetPosition(var_377_cvector);
	GetPosition(var_378_cvector);
	var_379_cvector = var_377_cvector - var_378_cvector;
	var_380_float = GetByIndex(var_379_cvector, 0);
	var_381_float = GetByIndex(var_379_cvector, 2);
	RotateAsync(var_380_float, var_381_float);
	return 6;
}


func_3100(var_115_bool)
{
	var_116_bool = 0; var_117_bool = 0;
	IsLoaded(var_117_bool);
	var_117_bool = var_115_bool;
	return 2;
}


func_3105(var_283_object)
{
	var_284_float = 0; var_285_cvector = CVector(0,0,0); var_286_float = 0; var_287_cvector = CVector(0,0,0);
	@@var_283_object:GetEyesHeight(var_286_float);
	var_287_cvector = CVector(0.0, 0.0, 0.0);
	var_288_float = GetByIndex(var_287_cvector, 1);
	var_286_float = var_288_float;
	SetByIndex(var_287_cvector, 1) = var_288_float;
	LookAsync(var_283_object, "head", var_287_cvector);
	return 4;
}


func_3116(var_46_object, var_47_string, var_48_int, var_49_int)
{
	var_53_bool = 0; var_54_bool = 0;
	var_55_bool = 0; var_56_int = 0; var_57_int = 0;
	var_48_int = var_56_int;
	var_49_int = var_57_int;
	func_3207(var_55_bool, var_56_int, var_57_int);
	if(var_55_bool != 0) {
		@@var_46_object:AddItem(var_54_bool, var_47_string, (int)0);
	}
	return 2;
}


func_2604(var_121_object)
{
	EventDisable(0);
	var_122_object = Obj();
	var_121_object = var_122_object;
	func_2629(var_122_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_2615:
	Hold();
	goto Label_2615;
}
EMIT "Return(); Pop(0)";


func_1073(var_0_cvector, var_444_bool)
{
	var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); var_447_cvector = CVector(0,0,0); var_448_float = 0; var_449_float = 0; var_450_cvector = CVector(0,0,0); var_451_cvector = CVector(0,0,0); var_452_cvector = CVector(0,0,0); var_453_float = 0; var_454_float = 0;
	var_455_bool = 0;
	var_455_bool = 1;
	var_456_bool = 0; var_457_object = Obj();
	var_457_object = var_0_cvector;
	func_2939(var_456_bool, var_457_object);
	var_458_bool = var_456_bool == 0; //@nz
	if(var_458_bool != 1) {
		var_459_int = var_4_int;
		if(var_459_int != 1) {
			var_455_bool = 0;
		}
	}
	if(var_455_bool != 0) {
		var_444_bool = 0;
		return 10;
	}
	var_460_bool = 0;
	func_1168(var_454_float, var_460_bool);
	if(var_460_bool != 0) {
		@@@var_0_cvector:GetPFPosition(var_450_cvector);
		GetPFPosition(var_451_cvector);
		var_452_cvector = var_450_cvector - var_451_cvector;
		var_453_float = var_452_cvector | var_452_cvector;
		@@@var_0_cvector:GetAttackDistance(var_454_float);
		var_454_float = var_454_float + (int)50;
		var_462_float = var_454_float * var_454_float;
		var_444_bool = var_453_float <= var_462_float;
		return 10;
	}
	var_444_bool = 0;
	return 10;
}


func_3127(var_398_string)
{
	var_399_bool = 0; var_400_int = 0; var_401_bool = 0; var_402_int = 0; var_403_bool = 0; var_404_float = 0; var_405_cvector = CVector(0,0,0); var_406_cvector = CVector(0,0,0); var_407_bool = 0; var_408_int = 0; var_409_bool = 0; var_410_int = 0; var_411_bool = 0; var_412_float = 0; var_413_cvector = CVector(0,0,0); var_414_cvector = CVector(0,0,0);
	IsExisting3DSound(var_407_bool, var_398_string);
	var_415_bool = var_407_bool == 0; //@nz
	if(var_415_bool != 0) {
		var_408_int = 0;

	Label_3133:
		var_417_int = var_408_int + (int)1;
		var_418_int = var_398_string + var_417_int;
		IsExisting3DSound(var_409_bool, var_418_int);
		var_419_bool = var_409_bool == 0; //@nz
		if(var_419_bool != 0) {
		} else {
			var_408_int = var_408_int + (int)1;
			goto Label_3133;
		}
		var_420_bool = var_408_int == 0; //@nz
		if(var_420_bool != 0) {
			return 16;
		}
		irand(var_410_int, var_408_int);
		var_422_int = var_410_int + (int)1;
		var_398_string = var_398_string + var_422_int;
	}
	Is3DSoundLoaded(var_411_bool, var_398_string);
	var_423_bool = var_411_bool;
	if(var_423_bool != 0) {
		GetEyesHeight(var_412_float);
		GetDirection(var_413_cvector);
		var_414_cvector = var_413_cvector * (int)50;
		var_425_float = GetByIndex(var_414_cvector, 1);
		var_425_float = var_425_float + var_412_float;
		SetByIndex(var_414_cvector, 1) = var_425_float;
		PlayGlobalSound(var_398_string, var_414_cvector);
	}
	return 16;
	
}


func_3647(var_42_bool, var_43_object)
{
	var_44_int = GlobalVars[3];
	var_46_bool = var_44_int == (int)4;
	if(var_46_bool != 0) {
		var_42_bool = 0;
		return 0;
	}
	var_47_int = GlobalVars[3];
	GlobalVars[3] = (int)4;
	Trace("changing state to c_iStateAware");
	var_49_object = GlobalVars[5];
	var_43_object = var_49_object;
	GlobalVars[5] = var_49_object;
	var_42_bool = 1;
	return 0;
}


func_2629(var_122_object)
{
	var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_string = ""; var_128_object = Obj(); var_129_bool = 0; var_130_bool = 0; var_131_float = 0; var_132_cvector = CVector(0,0,0); var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_string = ""; var_138_object = Obj(); var_139_bool = 0; var_140_bool = 0; var_141_float = 0; var_142_cvector = CVector(0,0,0);
	var_143_bool = var_122_object == 0; //@ne
	if(var_143_bool != 0) {
		var_144_string = "";
		func_2720("fdie");
	} else {
		@@var_122_object:GetPosition(var_133_cvector);
		GetPosition(var_134_cvector);
		GetDirection(var_135_cvector);
		var_136_cvector = var_134_cvector - var_133_cvector;
		var_176_float = GetByIndex(var_136_cvector, 0);
		var_177_float = GetByIndex(var_135_cvector, 0);
		var_178_float = var_176_float * var_177_float;
		var_179_float = GetByIndex(var_136_cvector, 2);
		var_180_float = GetByIndex(var_135_cvector, 2);
		var_181_float = var_179_float * var_180_float;
		var_182_int = var_178_float + var_181_float;
		var_184_bool = var_182_int >= (int)0;
		if(var_184_bool != 0) {
			var_137_string = "fdie";
		} else {
				var_137_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_122_object = var_138_object;
		var_187_bool = IsFuncExist(var_122_object, "GetScriptProperty", (int)2);
		if(var_187_bool != 0) {
			@@var_122_object:HasScriptProperty(var_139_bool, "Owner");
			var_189_bool = var_139_bool;
			if(var_189_bool != 0) {
				@@var_122_object:GetScriptProperty(var_138_object, "Owner");
				var_191_bool = var_138_object == 0; //@ne
				if(var_191_bool != 0) {
					var_122_object = var_138_object;
				}
			}
		}
		var_194_bool = IsFuncExist(var_138_object, "@GetEyesHeight", (int)1);
		if(var_194_bool != 0) {
			@@var_138_object:GetEyesHeight(var_141_float);
			var_142_cvector = CVector(0.0, 0.0, 0.0);
			var_195_float = GetByIndex(var_142_cvector, 1);
			var_141_float = var_195_float;
			SetByIndex(var_142_cvector, 1) = var_195_float;
			LookAsync(var_122_object, "head", var_142_cvector);
			var_140_bool = 1;
		} else {
			var_140_bool = 0;

		}
		var_197_string = "";
		var_137_string = var_197_string;
		func_3127(var_197_string);
		PlayAnimation("all", var_137_string);
		WaitForAnimEnd();
		var_199_bool = var_140_bool;
		if(var_199_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_137_string);
		RemoveEnvelope();
		var_138_object = 0;
	}
	return 20;
	
}


func_2129(var_0_cvector)
{
	var_0_cvector = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_3665(var_59_bool, var_60_object)
{
	var_61_int = GlobalVars[3];
	var_63_bool = var_61_int == (int)5;
	if(var_63_bool != 0) {
		var_59_bool = 0;
		return 0;
	}
	var_64_int = GlobalVars[3];
	GlobalVars[3] = (int)5;
	Trace("changing state to c_iStateSearchEnemy");
	var_66_object = GlobalVars[6];
	var_60_object = var_66_object;
	GlobalVars[6] = var_66_object;
	var_59_bool = 1;
	return 0;
}


func_1107(var_442_bool)
{
	var_443_bool = 0;
	var_443_bool = 0;
	var_444_bool = 0;
	func_1073(var_443_bool, var_444_bool);
	if(var_444_bool != 0) {
		var_463_bool = 0;
		func_1123(var_442_bool, var_443_bool, var_463_bool);
		if(var_463_bool != 0) {
			var_443_bool = 1;
		}
	}
	if(var_443_bool != 0) {
		var_442_bool = 1;
		return 0;
	}
	var_442_bool = 0;
	return 0;
}


func_3168(var_102_object)
{
	var_103_object = Obj(); var_104_object = Obj();
	self(var_104_object);
	var_104_object = var_102_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2145(var_980_string)
{
	var_980_string = "walk";
	return 0;
}


func_1123(var_0_cvector, var_5_bool, var_463_bool)
{
	var_464_object = Obj(); var_465_bool = 0; var_466_float = 0; var_467_cvector = CVector(0,0,0); var_468_cvector = CVector(0,0,0); var_469_object = Obj(); var_470_bool = 0; var_471_float = 0; var_472_cvector = CVector(0,0,0); var_473_cvector = CVector(0,0,0);
	GetScene(var_469_object);
	var_470_bool = 0;
	
Label_1127:
	var_474_cvector = CVector(0,0,0); var_475_object = Obj();
	var_475_object = var_0_cvector;
	func_2801(var_474_cvector, var_475_object);
	var_480_int = -var_474_cvector;
	FindDirLength(var_471_float, var_480_int, var_5_bool);
	var_481_bool = var_471_float < var_5_bool;
	if(var_481_bool != 0) {
	} else {
		Face(var_0_cvector);
		PlayAnimation("all", "bjump");
		@@@var_0_cvector:GetPFPosition(var_472_cvector);
		GetPFPosition(var_473_cvector);
		WaitForAnimEnd();
		func_1211(var_473_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_470_bool = 1;
		var_485_bool = 0;
		func_1073(var_473_cvector, var_485_bool);
		var_486_bool = var_485_bool == 0; //@nz
		if(var_486_bool != 0) {
			goto Label_1165;
		}
		goto Label_1127;
	}
Label_1165:
	var_470_bool = var_463_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_2147(var_981_string)
{
	var_981_string = "run";
	return 0;
}


func_2149(var_801_bool)
{
	var_803_bool = 0; var_804_object = Obj(); var_805_cvector = CVector(0,0,0); var_806_cvector = CVector(0,0,0); var_807_bool = 0; var_808_object = Obj(); var_809_cvector = CVector(0,0,0); var_810_cvector = CVector(0,0,0);
	GetMainOutdoorScene(var_808_object);
	var_812_int = GlobalVars[1];
	var_814_int = var_812_int + (int)1;
	var_815_int = "pt_b9q03_bonfire" + var_814_int;
	@@var_808_object:GetLocator(var_815_int, var_807_bool, var_809_cvector, var_810_cvector);
	var_816_bool = var_807_bool == 0; //@nz
	if(var_816_bool != 0) {
		var_801_bool = 0;
		return 8;
	}
	var_817_bool = 0; var_818_cvector = CVector(0,0,0); var_819_cvector = CVector(0,0,0); var_820_bool = 0;
	var_809_cvector = var_818_cvector;
	var_810_cvector = var_819_cvector;
	func_2215(var_817_bool, var_818_cvector, var_819_cvector, (bool)0);
	var_817_bool = var_801_bool;
	return 8;
}
EMIT "Stack[-3] = 0";


func_3174(var_52_cvector, var_53_cvector)
{
	var_60_float = 0; var_61_float = 0;
	var_62_int = var_53_cvector | var_53_cvector;
	var_61_float = sqrt(var_62_int);
	var_63_float = 9.999999974752427e-07;
	var_64_bool = var_61_float < var_63_float;
	if(var_64_bool != 0) {
		var_52_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_52_cvector = var_53_cvector / var_61_float;
	return 2;
}


func_3683(var_27_bool, var_28_object)
{
	var_29_int = GlobalVars[3];
	var_31_bool = var_29_int == (int)6;
	if(var_31_bool != 0) {
		var_27_bool = 0;
		return 0;
	}
	var_32_int = GlobalVars[3];
	GlobalVars[3] = (int)6;
	Trace("changing state to c_iStateHearEnemy");
	var_34_object = GlobalVars[7];
	var_28_object = var_34_object;
	GlobalVars[7] = var_34_object;
	var_27_bool = 1;
	return 0;
}


func_1644(var_0_cvector, var_1_cvector, var_721_bool, var_722_object, var_723_float, var_724_float, var_725_bool, var_726_bool)
{
	var_727_bool = 0; var_728_bool = 0; var_729_object = Obj(); var_730_cvector = CVector(0,0,0); var_731_cvector = CVector(0,0,0); var_732_cvector = CVector(0,0,0); var_733_float = 0; var_734_object = Obj(); var_735_bool = 0; var_736_bool = 0; var_737_object = Obj(); var_738_cvector = CVector(0,0,0); var_739_cvector = CVector(0,0,0); var_740_cvector = CVector(0,0,0); var_741_float = 0; var_742_object = Obj();
	var_0_cvector = false;
	var_1_cvector = var_722_object;
	var_726_bool = var_736_bool;
	
Label_1648:
	var_743_bool = 0; var_744_object = Obj();
	var_722_object = var_744_object;
	func_1784(var_743_bool, var_744_object);
	var_747_bool = var_743_bool == 0; //@nz
	if(var_747_bool != 0) {
		var_721_bool = 0;
		return 16;
	}
	@@var_722_object:GetPosition(var_738_cvector);
	GetPosition(var_739_cvector);
	var_740_cvector = var_738_cvector - var_739_cvector;
	var_741_float = var_740_cvector | var_740_cvector;
	var_748_bool = 0;
	var_748_bool = 0;
	var_750_bool = var_724_float > (int)0;
	if(var_750_bool != 0) {
		var_751_float = var_724_float * var_724_float;
		var_752_bool = var_741_float > var_751_float;
		if(var_752_bool != 0) {
			var_748_bool = 1;
		}
	}
	if(var_748_bool != 0) {
		Stop();
		var_721_bool = 0;
		return 16;
	}
	var_753_float = var_723_float * var_723_float;
	var_754_bool = var_741_float > var_753_float;
	if(var_754_bool != 0) {
		@@var_722_object:GetPFPosition(var_738_cvector);
		FindPathTo(var_742_object, var_738_cvector);
		var_755_bool = var_742_object != 0; //@nn
		if(var_755_bool != 0) {
			var_742_object = var_737_object;
			var_742_object = 0;
		}
		var_756_bool = var_737_object != 0; //@nn
		if(var_756_bool != 0) {
			var_757_bool = var_736_bool;
			if(var_757_bool == 0) goto Label_1697;
			var_736_bool = 0;
			RotatePath(var_737_object, var_735_bool);
			var_758_bool = var_735_bool == 0; //@nz
			if(var_758_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_761_string = "";
				func_1791(var_761_string);
				var_762_string = "";
				func_1793(var_762_string);
				FollowPath(var_737_object, var_725_bool, var_735_bool, var_761_string, var_762_string);
				var_763_bool = var_735_bool == 0; //@nz
				if(var_763_bool != 0) {
					var_764_cvector = var_0_cvector;
					if(var_764_cvector != 0) {
						var_737_object = 0;
						goto Label_1744;
					EMIT "GOTO 0x6b5";
					}
				} else {
					var_737_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_735_bool);
					var_767_bool = var_735_bool == 0; //@nz
					if(var_767_bool != 0) {
						var_768_cvector = var_0_cvector;
						if(var_768_cvector != 0) {
							var_737_object = 0;
							goto Label_1744;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1744;
	}
			var_742_object = 0;
			goto Label_1742;

		Label_1742:
			var_737_object = 0;

		}
		goto Label_1648;
	}
Label_1744:
	var_721_bool = !var_0_cvector;
	return 16;
	
}


func_3184(var_581_float, var_582_float, var_583_float)
{
	var_586_bool = var_582_float < var_583_float;
	if(var_586_bool != 0) {
		var_582_float = var_581_float;
	} else {
		var_583_float = var_581_float;
	}
	return 0;
	
}


func_3701(var_21_bool, var_22_object)
{
	var_23_int = GlobalVars[3];
	var_25_bool = var_23_int == (int)7;
	if(var_25_bool != 0) {
		var_21_bool = 0;
		return 0;
	}
	var_26_int = GlobalVars[3];
	GlobalVars[3] = (int)7;
	Trace("changing state to c_iStateAttack");
	var_28_object = GlobalVars[8];
	var_22_object = var_28_object;
	GlobalVars[8] = var_28_object;
	var_21_bool = 1;
	return 0;
}


func_3191(var_591_float, var_592_float, var_593_float, var_594_float)
{
	var_595_bool = var_592_float < var_593_float;
	if(var_595_bool != 0) {
		var_593_float = var_591_float;
		return 0;
	}
	var_596_bool = var_592_float > var_594_float;
	if(var_596_bool != 0) {
		var_594_float = var_591_float;
		return 0;
	}
	var_592_float = var_591_float;
	return 0;
}


func_3202(var_1032_bool, var_1033_float)
{
	var_1034_float = 0; var_1035_float = 0;
	rand(var_1035_float);
	var_1032_bool = var_1035_float < var_1033_float;
	return 2;
}


func_3719(var_1036_bool)
{
	var_1037_int = 0; var_1038_int = 0;
	var_1040_int = GlobalVars[1];
	var_1042_int = var_1040_int + (int)1;
	var_1043_int = "b9q03HandHeatLock" + var_1042_int;
	GetVariable(var_1043_int, var_1038_int);
	var_1036_bool = var_1038_int != (int)0;
	return 2;
}


func_3207(var_55_bool, var_56_int, var_57_int)
{
	var_58_int = 0; var_59_int = 0;
	irand(var_59_int, var_57_int);
	var_55_bool = var_59_int < var_56_int;
	return 2;
}


func_3212(var_599_float)
{
	var_600_object = Obj(); var_601_object = Obj();
	CreateFloatVector(var_601_object);
	@@var_601_object:add(var_599_float);
	var_603_bool = var_599_float < (int)0;
	if(var_603_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_601_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1168(var_0_cvector, var_392_bool)
{
	var_393_bool = 0; var_394_bool = 0;
	var_397_bool = IsFuncExist(var_0_cvector, "IsAttacking", (int)1);
	if(var_397_bool != 0) {
		@@@var_0_cvector:IsAttacking(var_394_bool);
		var_394_bool = var_392_bool;
		return 2;
	}
	var_392_bool = 0;
	return 2;
}


func_3730(var_792_bool)
{
	var_794_int = GlobalVars[1];
	var_796_int = var_794_int + (int)1;
	var_797_int = "b9q03HandHeatLock" + var_796_int;
	var_798_bool = var_792_bool;
	if(var_798_bool != 0) {
		var_799_int = 1;
	} else {
		var_800_int = 0; //@pi
	}
	SetVariable(var_797_int, var_799_int);
	return 0;
	
}


func_1179(var_2_object, var_6_bool)
{
	var_509_float = 0; var_510_int = 0; var_511_float = 0; var_512_int = 0;
	var_513_bool = var_2_object == 0; //@nz
	if(var_513_bool != 0) {
		return 4;
	}
	var_514_bool = var_6_bool;
	if(var_514_bool != 0) {
		var_6_bool = var_6_bool + (int)-1;
		var_517_bool = var_6_bool > (int)0;
		if(var_517_bool != 0) {
			return 4;
		}
	}
	rand(var_511_float);
	var_518_float = 0;
	func_1227(var_518_float);
	var_519_bool = var_511_float < var_518_float;
	if(var_519_bool != 0) {
		irand(var_512_int, var_2_object);
		var_512_int = var_512_int + (int)1;
		var_522_int = "attack" + var_512_int;
		Speak(var_522_int);
		var_523_int = 0;
		func_1225(var_523_int);
		var_6_bool = var_523_int;
	}
	return 4;
}


func_3229(var_248_object)
{
	var_249_bool = 0; var_250_bool = 0;
	IsPlayerActor(var_248_object, var_250_bool);
	var_251_bool = var_250_bool;
	if(var_251_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_3744(var_1020_bool)
{
	var_1021_int = 0; var_1022_int = 0;
	var_1024_int = GlobalVars[1];
	var_1026_int = var_1024_int + (int)1;
	var_1027_int = "b9q03PatrolLock" + var_1026_int;
	GetVariable(var_1027_int, var_1022_int);
	var_1020_bool = var_1022_int != (int)0;
	return 2;
}


func_2720(var_144_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_145_string = "";
	var_144_string = var_145_string;
	func_3127(var_145_string);
	PlayAnimation("all", var_144_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_144_string);
	RemoveEnvelope();
	return 0;
}


func_3238(var_900_string, var_901_int)
{
	var_902_string = ""; var_903_string = "";
	var_904_int = var_901_int;
	if(var_904_int != 0) {
		"idle" = "idle" + var_901_int;
	}
	var_903_string = var_900_string;
	return 2;
}


func_2215(var_817_bool, var_818_cvector, var_819_cvector, var_820_bool)
{
	var_821_float = GetByIndex(var_818_cvector, 1);
	var_821_float = var_821_float + (int)30;
	SetByIndex(var_818_cvector, 1) = var_821_float;
	var_823_bool = 0; var_824_cvector = CVector(0,0,0); var_825_cvector = CVector(0,0,0); var_826_float = 0; var_827_float = 0; var_828_bool = 0; var_829_bool = 0;
	var_818_cvector = var_824_cvector;
	var_819_cvector = var_825_cvector;
	var_820_bool = var_828_bool;
	func_2241(var_820_bool, var_823_bool, var_824_cvector, var_825_cvector, (float)100, (float)4000, var_828_bool, (bool)1);
	var_823_bool = var_817_bool;
	return 0;
}


func_3755(var_1051_bool)
{
	var_1053_int = GlobalVars[1];
	var_1055_int = var_1053_int + (int)1;
	var_1056_int = "b9q03PatrolLock" + var_1055_int;
	var_1057_bool = var_1051_bool;
	if(var_1057_bool != 0) {
		var_1058_int = 1;
	} else {
		var_1059_int = 0; //@pi
	}
	SetVariable(var_1056_int, var_1058_int);
	return 0;
	
}


func_3245(var_894_int)
{
	var_895_int = 0; var_896_bool = 0; var_897_int = 0; var_898_bool = 0;
	var_897_int = 0;
	
Label_3247:
	var_900_string = ""; var_901_int = 0;
	var_897_int = var_901_int;
	func_3238(var_900_string, var_901_int);
	HasAnimation(var_898_bool, "all", var_900_string);
	var_905_bool = var_898_bool == 0; //@nz
	if(var_905_bool != 0) {
	} else {
		var_897_int = var_897_int + (int)1;
		goto Label_3247;
	}
	var_897_int = var_894_int;
	return 4;
	
}


func_1211(var_0_cvector)
{
	var_248_object = Obj();
	var_248_object = var_0_cvector;
	func_3229(var_248_object);
	return 0;
}


func_3262(var_101_int)
{
	var_102_int = 0; var_103_int = 0;
	GetVariable("branch", var_103_int);
	var_103_int = var_101_int;
	return 2;
}


func_2239(var_846_bool)
{
	var_846_bool = 1;
	return 0;
}


func_2752()
{
	var_113_bool = GlobalVars[0];
	if(var_113_bool != 0) {
		var_114_object = Obj();
		func_3168(var_114_object);
		RemoveActor(var_114_object);
		Hold();
	}
Label_2761:
	var_115_bool = 0;
	func_3100(var_115_bool);
	var_118_bool = var_115_bool == 0; //@nz
	if(var_118_bool != 0) {
		Hold();
		goto Label_2761;
	}
	return 0;
}


func_1216()
{
	var_398_string = "";
	func_3127("attack_stay");
	return 0;
}


func_2241(var_0_cvector, var_823_bool, var_824_cvector, var_825_cvector, var_826_float, var_827_float, var_828_bool, var_829_bool)
{
	var_830_bool = 0; var_831_bool = 0; var_832_object = Obj(); var_833_cvector = CVector(0,0,0); var_834_cvector = CVector(0,0,0); var_835_cvector = CVector(0,0,0); var_836_float = 0; var_837_object = Obj(); var_838_bool = 0; var_839_bool = 0; var_840_object = Obj(); var_841_cvector = CVector(0,0,0); var_842_cvector = CVector(0,0,0); var_843_cvector = CVector(0,0,0); var_844_float = 0; var_845_object = Obj();
	var_0_cvector = false;
	var_829_bool = var_839_bool;
	
Label_2244:
	var_846_bool = 0;
	func_2239(var_846_bool);
	var_847_bool = var_846_bool == 0; //@nz
	if(var_847_bool != 0) {
		var_823_bool = 0;
		return 16;
	}
	var_824_cvector = var_841_cvector;
	GetPosition(var_842_cvector);
	var_843_cvector = var_841_cvector - var_842_cvector;
	var_844_float = var_843_cvector | var_843_cvector;
	var_848_bool = 0;
	var_848_bool = 0;
	var_850_bool = var_827_float > (int)0;
	if(var_850_bool != 0) {
		var_851_float = var_827_float * var_827_float;
		var_852_bool = var_844_float > var_851_float;
		if(var_852_bool != 0) {
			var_848_bool = 1;
		}
	}
	if(var_848_bool != 0) {
		Stop();
		var_823_bool = 0;
		return 16;
	}
	var_853_float = var_826_float * var_826_float;
	var_854_bool = var_844_float > var_853_float;
	if(var_854_bool != 0) {
		FindPathTo(var_845_object, var_841_cvector);
		var_855_bool = var_845_object != 0; //@nn
		if(var_855_bool != 0) {
			var_845_object = var_840_object;
			var_845_object = 0;
		}
		var_856_bool = var_840_object != 0; //@nn
		if(var_856_bool != 0) {
			var_857_bool = var_839_bool;
			if(var_857_bool == 0) goto Label_2289;
			var_839_bool = 0;
			RotatePath(var_840_object, var_838_bool);
			var_858_bool = var_838_bool == 0; //@nz
			if(var_858_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_864_string = "";
				func_2381(var_864_string);
				var_865_string = "";
				func_2383(var_865_string);
				FollowPath(var_840_object, var_828_bool, var_838_bool, var_864_string, var_865_string);
				var_866_bool = var_838_bool == 0; //@nz
				if(var_866_bool != 0) {
					var_867_cvector = var_0_cvector;
					if(var_867_cvector != 0) {
						var_840_object = 0;
						goto Label_2336;
					EMIT "GOTO 0x905";
					}
				} else {
					var_840_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_838_bool);
					var_870_bool = var_838_bool == 0; //@nz
					if(var_870_bool != 0) {
						var_871_cvector = var_0_cvector;
						if(var_871_cvector != 0) {
							var_840_object = 0;
							goto Label_2336;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_2336;
	}
			var_845_object = 0;
			goto Label_2334;

		Label_2334:
			var_840_object = 0;

		}
		goto Label_2244;
	}
Label_2336:
	var_859_bool = var_0_cvector == 0; //@nz
	if(var_859_bool != 0) {
		var_860_float = GetByIndex(var_825_cvector, 0);
		var_861_float = GetByIndex(var_825_cvector, 2);
		RotateAsync(var_860_float, var_861_float);
	}
	var_823_bool = !var_0_cvector;
	return 16;
	
}


func_3268(var_24_object)
{
	var_25_int = 0;
	func_3262(var_25_int);
	var_30_bool = var_25_int == (int)1;
	if(var_30_bool != 0) {
		WorkWithCorpse(var_24_object);
	} else {
		Barter(var_24_object);
	}
	return 0;
	
}


func_1221()
{
	return 0;
}


func_1223(var_636_bool)
{
	var_636_bool = 1;
	return 0;
}


func_1225(var_523_int)
{
	var_523_int = 1;
	return 0;
}


func_1227(var_518_float)
{
	var_518_float = 0.5;
	return 0;
}


func_1229(var_3_int, var_255_bool, var_256_object, var_257_float, var_258_float, var_259_bool, var_260_bool)
{
	var_265_bool = 0; var_266_bool = 0;
	var_3_int = var_256_object;
	SetTimer((int)2, (int)2);
	var_269_bool = 0; var_270_object = Obj(); var_271_float = 0; var_272_float = 0; var_273_bool = 0; var_274_bool = 0;
	var_256_object = var_270_object;
	var_257_float = var_271_float;
	var_258_float = var_272_float;
	var_259_bool = var_273_bool;
	var_260_bool = var_274_bool;
	func_1280(var_266_bool, var_269_bool, var_270_object, var_271_float, var_272_float, var_273_bool, var_274_bool);
	var_269_bool = var_266_bool;
	KillTimer((int)2);
	var_266_bool = var_255_bool;
	return 2;
}


func_3281(var_107_string)
{
	var_108_object = Obj(); var_109_int = 0; var_110_bool = 0; var_111_object = Obj(); var_112_int = 0; var_113_bool = 0;
	CreateInvItem(var_111_object);
	@@var_111_object:SetItemName(var_107_string);
	@@var_111_object:SetProperty("Organ", (int)1);
	@@var_111_object:GetItemID(var_112_int);
	AddItem(var_113_bool, var_111_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1746(var_0_cvector, var_1_cvector, var_24_int)
{
	var_26_bool = var_24_int != (int)0;
	if(var_26_bool != 0) {
		return 0;
	}
	var_27_bool = 0; var_28_object = Obj();
	var_28_object = var_1_cvector;
	func_1784(var_27_bool, var_28_object);
	var_63_bool = var_27_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_0_cvector = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_3808(var_609_int)
{
	var_609_int = 1;
	return 0;
}


func_3298()
{
	var_101_int = 0;
	func_3262(var_101_int);
	var_106_bool = var_101_int != (int)1;
	if(var_106_bool != 0) {
		return 0;
	}
	var_107_string = "";
	func_3281("liver");
	var_118_string = "";
	func_3281("kidney");
	var_119_string = "";
	func_3281("heart");
	var_120_string = "";
	func_3281("blood");
	return 0;
}


func_2787(var_571_string, var_572_int)
{
	var_574_bool = var_572_int == (int)2;
	if(var_574_bool != 0) {
		var_571_string = "fire";
		return 0;
	EMIT "GOTO 0xaef";
	}
	var_576_bool = var_572_int == (int)1;
	if(var_576_bool != 0) {
		var_571_string = "bullet";
		return 0;
	}
	var_571_string = "phys";
	return 0;
}


func_1768(var_0_cvector)
{
	var_0_cvector = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2801(var_474_cvector, var_475_object)
{
	var_476_cvector = CVector(0,0,0); var_477_cvector = CVector(0,0,0); var_478_cvector = CVector(0,0,0); var_479_cvector = CVector(0,0,0);
	GetPosition(var_478_cvector);
	@@var_475_object:GetPosition(var_479_cvector);
	var_474_cvector = var_479_cvector - var_478_cvector;
	return 4;
}


func_1784(var_743_bool, var_744_object)
{
	var_745_bool = 0; var_746_object = Obj();
	var_744_object = var_746_object;
	func_2939(var_745_bool, var_746_object);
	var_745_bool = var_743_bool;
	return 0;
}


func_2808(var_290_bool, var_291_object)
{
	var_292_bool = 0; var_293_bool = 0;
	IsPlayerActor(var_291_object, var_293_bool);
	var_293_bool = var_290_bool;
	return 2;
}


func_2813(var_234_bool, var_235_object, var_236_string)
{
	var_237_bool = 0; var_238_bool = 0;
	var_241_bool = IsFuncExist(var_235_object, "HasProperty", (int)2);
	var_242_bool = var_241_bool == 0; //@nz
	if(var_242_bool != 0) {
		var_234_bool = 0;
		return 2;
	}
	@@var_235_object:HasProperty(var_236_string, var_238_bool);
	var_238_bool = var_234_bool;
	return 2;
}


func_1791(var_761_string)
{
	var_761_string = "walk";
	return 0;
}


func_1280(var_2_object, var_269_bool, var_270_object, var_271_float, var_272_float, var_273_bool, var_274_bool)
{
	var_275_bool = 0; var_276_bool = 0; var_277_bool = 0; var_278_bool = 0;
	var_279_object = Obj();
	var_270_object = var_279_object;
	func_3229(var_279_object);
	SetTimer((int)1, (int)5);
	CanSee(var_277_bool, var_270_object);
	var_282_bool = var_277_bool;
	if(var_282_bool != 0) {
		var_2_object = true;
		var_283_object = Obj();
		var_270_object = var_283_object;
		func_3105(var_283_object);
	} else {
		var_2_object = false;
	}
	var_290_bool = 0; var_291_object = Obj();
	var_270_object = var_291_object;
	func_2808(var_290_bool, var_291_object);
	if(var_290_bool != 0) {
		var_294_object = Obj();
		func_3168(var_294_object);
		SendPlayerEnemy(var_270_object, var_294_object);
	}
	var_295_bool = 0; var_296_object = Obj(); var_297_float = 0; var_298_float = 0; var_299_bool = 0; var_300_bool = 0;
	var_270_object = var_296_object;
	var_271_float = var_297_float;
	var_272_float = var_298_float;
	var_273_bool = var_299_bool;
	var_274_bool = var_300_bool;
	func_1385(var_277_bool, var_278_bool, var_295_bool, var_296_object, var_297_float, var_298_float, var_299_bool, var_300_bool);
	var_295_bool = var_278_bool;
	var_346_object = var_2_object;
	if(var_346_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_278_bool = var_269_bool;
	return 4;
	
}


func_769(var_4_int)
{
	Stop();
	StopAnimation();
	StopGroup0();
	var_4_int = true;
	return 0;
}


func_3330(var_22_bool, var_23_object, var_24_string)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0;
	var_49_object = Obj();
	func_3168(var_49_object);
	var_52_bool = var_23_object == var_49_object;
	if(var_52_bool != 0) {
		var_22_bool = 0;
		return 24;
	}
	var_54_int = GlobalVars[1];
	var_56_int = var_54_int + (int)1;
	var_57_int = "b9q03_corpse" + var_56_int;
	var_58_bool = var_24_string == var_57_int;
	if(var_58_bool != 0) {
		var_59_bool = 0; var_60_object = Obj();
		var_23_object = var_60_object;
		func_3665(var_59_bool, var_60_object);
		if(var_59_bool != 0) {
			var_22_bool = 1;
			return 24;
		}
	} else {
		var_68_int = GlobalVars[1];
		var_70_int = var_68_int + (int)1;
		var_71_int = "b9q03_helpme" + var_70_int;
		var_72_bool = var_24_string == var_71_int;
		if(var_72_bool != 0) {
			@@var_23_object:GetPosition(var_37_cvector);
			GetPosition(var_38_cvector);
			var_39_cvector = var_37_cvector - var_38_cvector;
			var_40_float = var_39_cvector | var_39_cvector;
			var_74_bool = var_40_float < (float)4000000.0;
			if(var_74_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				var_23_object = var_76_object;
				func_3701(var_75_bool, var_76_object);
				if(var_75_bool != 0) {
					var_22_bool = 1;
					return 24;
				}
			}
			goto Label_3429;
		}
		var_84_bool = var_24_string == "player_shot";
		if(var_84_bool != 0) {
			@@var_23_object:GetPosition(var_41_cvector);
			GetPosition(var_42_cvector);
			var_43_cvector = var_41_cvector - var_42_cvector;
			var_44_float = var_43_cvector | var_43_cvector;
			var_86_bool = var_44_float < (float)360000.0;
			if(var_86_bool != 0) {
				var_87_bool = 0; var_88_object = Obj();
				var_23_object = var_88_object;
				func_3701(var_87_bool, var_88_object);
				if(var_87_bool != 0) {
					var_22_bool = 1;
					return 24;
				}
			}
			var_90_bool = var_44_float < (float)12250000.0;
			if(var_90_bool != 0) {
				var_91_bool = 0; var_92_object = Obj();
				var_23_object = var_92_object;
				func_3665(var_91_bool, var_92_object);
				if(var_91_bool != 0) {
					var_22_bool = 1;
					return 24;
				}
			}
			goto Label_3429;
		}
		var_94_bool = var_24_string == "b9q03BonfireBurnedByFollower";
		if(var_94_bool == 0) goto Label_3429;
		@@var_23_object:GetPosition(var_45_cvector);
		GetPosition(var_46_cvector);
		var_47_cvector = var_45_cvector - var_46_cvector;
		var_48_float = var_47_cvector | var_47_cvector;
		var_96_bool = var_48_float < (float)2250000.0;
		if(var_96_bool == 0) goto Label_3429;
		var_97_bool = 0; var_98_object = Obj();
		var_23_object = var_98_object;
		func_3701(var_97_bool, var_98_object);
		if(var_97_bool == 0) goto Label_3429;
		Trace("Attacking follower after he has burned bonefire.");
		var_22_bool = 1;
		return 24;
	}
Label_3429:
	var_22_bool = 0;
	return 24;
	
}


func_1795()
{
	func_1850();
	return 0;
}


func_1793(var_762_string)
{
	var_762_string = "run";
	return 0;
}


func_777(var_1_cvector, var_2_object, var_5_bool)
{
	var_178_bool = 0; var_179_bool = 0; var_180_cvector = CVector(0,0,0); var_181_bool = 0; var_182_bool = 0; var_183_cvector = CVector(0,0,0);
	var_1_cvector = 0;
	
Label_779:
	var_187_int = var_1_cvector + (int)1;
	var_188_int = "attack_begin" + var_187_int;
	HasAnimation(var_181_bool, "all", var_188_int);
	var_189_bool = var_181_bool == 0; //@nz
	if(var_189_bool != 0) {
	} else {
			var_1_cvector = var_1_cvector + (int)1;
			goto Label_779;
	}
	var_2_object = 0;
	
Label_793:
	var_192_int = var_2_object + (int)1;
	var_193_int = "attack" + var_192_int;
	IsExisting3DSound(var_182_bool, var_193_int);
	var_194_bool = var_182_bool == 0; //@nz
	if(var_194_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_793;

	}
	GetAnimationOffset(var_183_cvector, "all", "bjump");
	var_197_float = GetByIndex(var_183_cvector, 2);
	var_5_bool = -var_197_float;
	return 6;
	
}


func_2825(var_543_float, var_544_object, var_545_float, var_546_int)
{
	var_550_int = 0; var_551_string = ""; var_552_int = 0; var_553_float = 0; var_554_float = 0; var_555_float = 0; var_556_int = 0; var_557_string = ""; var_558_int = 0; var_559_float = 0; var_560_float = 0; var_561_float = 0;
	var_562_bool = 0; var_563_object = Obj(); var_564_string = "";
	var_544_object = var_563_object;
	func_2813(var_562_bool, var_563_object, "health");
	var_565_bool = var_562_bool == 0; //@nz
	if(var_565_bool != 0) {
		var_543_float = 0.0;
		return 12;
	}
	var_566_bool = 0; var_567_object = Obj(); var_568_string = "";
	var_544_object = var_567_object;
	func_2813(var_566_bool, var_567_object, "armor");
	var_569_bool = var_566_bool == 0; //@nz
	if(var_569_bool != 0) {
		var_556_int = 0;
	} else {
			@@var_544_object:GetProperty("armor", var_556_int);
	}
	var_571_string = ""; var_572_int = 0;
	var_546_int = var_572_int;
	func_2787(var_571_string, var_572_int);
	var_557_string = "armor_" + var_571_string;
	var_577_bool = 0; var_578_object = Obj(); var_579_string = "";
	var_544_object = var_578_object;
	var_557_string = var_579_string;
	func_2813(var_577_bool, var_578_object, var_579_string);
	var_580_bool = var_577_bool == 0; //@nz
	if(var_580_bool != 0) {
		var_558_int = 0;
	} else {
		@@var_544_object:GetProperty(var_557_string, var_558_int);

	}
	var_581_float = 0; var_582_float = 0; var_583_float = 0;
	var_584_int = var_556_int + var_558_int;
	var_582_float = var_584_int / (float)100.0;
	func_3184(var_581_float, var_582_float, (float)1);
	var_581_float = var_559_float;
	@@var_544_object:GetProperty("health", var_560_float);
	var_589_int = (int)1 - var_559_float;
	var_561_float = var_545_float * var_589_int;
	var_591_float = 0; var_592_float = 0; var_593_float = 0; var_594_float = 0;
	var_592_float = var_560_float - var_561_float;
	func_3191(var_591_float, var_592_float, (float)0, (float)1);
	@@var_544_object:SetProperty("health", var_591_float);
	var_597_bool = 0; var_598_object = Obj();
	var_544_object = var_598_object;
	func_2808(var_597_bool, var_598_object);
	if(var_597_bool != 0) {
		var_599_float = 0;
		var_599_float = -var_561_float;
		func_3212(var_599_float);
	}
	var_561_float = var_543_float;
	return 12;
	
}


func_812(var_0_cvector, var_529_float, var_530_int)
{
	var_531_object = Obj(); var_532_float = 0; var_533_float = 0; var_534_object = Obj(); var_535_float = 0; var_536_float = 0;
	var_538_float = var_529_float * (float)0.8999999761581421;
	GetVictim(var_538_float, var_534_object);
	ReportAttack(var_0_cvector);
	var_539_bool = var_534_object == var_0_cvector;
	if(var_539_bool != 0) {
		var_540_float = 0; var_541_object = Obj(); var_542_int = 0;
		var_534_object = var_541_object;
		var_530_int = var_542_int;
		func_461(var_542_int);
		var_540_float = var_535_float;
		var_543_float = 0; var_544_object = Obj(); var_545_float = 0; var_546_int = 0;
		var_534_object = var_544_object;
		var_535_float = var_545_float;
		var_547_int = 0; var_548_object = Obj(); var_549_int = 0;
		var_534_object = var_548_object;
		var_530_int = var_549_int;
		func_464(var_549_int);
		var_547_int = var_546_int;
		func_2825(var_543_float, var_544_object, var_545_float, var_546_int);
		var_543_float = var_536_float;
		var_608_int = 0;
		func_467(var_608_int);
		ReportHit(var_0_cvector, var_608_int, var_536_float, var_535_float);
		var_610_object = Obj(); var_611_float = 0;
		var_534_object = var_610_object;
		var_536_float = var_611_float;
		func_1221();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1329(var_1_cvector, var_31_int)
{
	var_33_bool = var_31_int == (int)1;
	if(var_33_bool != 0) {
		var_34_object = Obj();
		var_34_object = var_1_cvector;
		func_3229(var_34_object);
	} else {
		var_39_int = 0;
		var_31_int = var_39_int;
		func_1487(var_22_object, var_31_int, var_39_int);
	}
	return 0;
	
}


func_1850()
{
	var_878_int = 0; var_879_int = 0; var_880_int = 0; var_881_int = 0; var_882_bool = 0; var_883_float = 0; var_884_bool = 0; var_885_int = 0; var_886_int = 0; var_887_int = 0; var_888_int = 0; var_889_bool = 0; var_890_float = 0; var_891_bool = 0;
	WaitForAnimEnd();
	var_892_bool = 0;
	func_3100(var_892_bool);
	var_893_bool = var_892_bool == 0; //@nz
	if(var_893_bool != 0) {
		return 14;
	}
	func_3245((int)0);
	var_894_int = var_885_int;
	var_886_int = 0;
	
Label_1864:
	var_907_bool = 0;
	var_907_bool = 0;
	var_909_bool = var_886_int < (int)5;
	if(var_909_bool != 0) {
		var_910_bool = 0;
		func_3100(var_910_bool);
		if(var_910_bool != 0) {
			var_907_bool = 1;
		}
	}
	if(var_907_bool != 0) {
		irand(var_887_int, (int)3);
		var_913_bool = var_887_int == (int)0;
		if(var_913_bool != 0) {
			var_914_int = var_885_int;
			if(var_914_int == 0) goto Label_1897;
			irand(var_888_int, var_885_int);
			var_916_string = ""; var_917_int = 0;
			var_888_int = var_917_int;
			func_3238(var_916_string, var_917_int);
			PlayAnimation("all", var_916_string);
			WaitForAnimEnd(var_889_bool);
			var_918_bool = var_889_bool == 0; //@nz
			if(var_918_bool != 0) {
			} else {
		} else {
				var_923_bool = var_887_int == (int)1;
				if(var_923_bool != 0) {
					rand(var_890_float, (int)4);
					var_926_int = var_890_float + (int)1;
					Sleep(var_926_int, var_891_bool);
					var_927_bool = var_891_bool == 0; //@nz
					if(var_927_bool != 0) {
						goto Label_1926;
					}
					goto Label_1915;
				}
				var_928_int = var_886_int;
				if(var_928_int == 0) goto Label_1915;
				goto Label_1926;
		}
		Label_1915:
			var_919_bool = 0;
			func_1929(var_919_bool);
			var_920_bool = var_919_bool == 0; //@nz
			if(var_920_bool != 0) {
				goto Label_1926;
			}
			ResetAAS();
			var_886_int = var_886_int + (int)1;
			goto Label_1864;

		}
	}
Label_1926:
	ResetAAS();
	return 14;
	
}


func_2365(var_0_cvector)
{
	var_0_cvector = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1343(var_2_object)
{
	KillTimer((int)1);
	var_22_object = var_2_object;
	if(var_22_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1509(var_20_bool);
	return 0;
}


func_2381(var_864_string)
{
	var_864_string = "walk";
	return 0;
}


func_2383(var_865_string)
{
	var_865_string = "run";
	return 0;
}


func_2385(var_677_int)
{
	var_679_int = 0; var_680_int = 0;
	var_680_int = 0;
	
Label_2387:
	var_681_bool = var_680_int < var_677_int;
	if(var_681_bool != 0) {
		var_682_string = "";
		func_2455("hunt");
		var_692_cvector = var_0_cvector;
		if(var_692_cvector != 0) {
		} else {
			var_680_int = var_680_int + (int)1;
			goto Label_2387;
		}
	}
	return 2;
	
}


func_2898(var_227_bool, var_228_object)
{
	var_229_bool = 0; var_230_bool = 0;
	@@var_228_object:IsDead(var_230_bool);
	var_230_bool = var_227_bool;
	return 2;
}


func_851(var_0_cvector, var_1_cvector, var_494_bool, var_495_float)
{
	var_496_int = 0; var_497_bool = 0; var_498_int = 0; var_499_string = ""; var_500_int = 0; var_501_bool = 0; var_502_int = 0; var_503_string = "";
	func_1211(var_503_string);
	irand(var_500_int, var_1_cvector);
	var_500_int = var_500_int + (int)1;
	Face(var_0_cvector);
	SetAttackState((bool)1);
	var_508_int = "attack_begin" + var_500_int;
	PlayAnimation("all", var_508_int);
	WaitForAnimEnd();
	func_1179(var_502_int, var_503_string);
	var_524_bool = 0;
	var_524_bool = 1;
	var_525_bool = 0; var_526_object = Obj();
	var_526_object = var_0_cvector;
	func_2939(var_525_bool, var_526_object);
	var_527_bool = var_525_bool == 0; //@nz
	if(var_527_bool != 1) {
		var_528_int = var_4_int;
		if(var_528_int != 1) {
			var_524_bool = 0;
		}
	}
	if(var_524_bool != 0) {
		StopAsync();
		var_494_bool = 0;
		return 8;
	}
	var_529_float = 0; var_530_int = 0;
	var_495_float = var_529_float;
	var_500_int = var_530_int;
	func_812(var_503_string, var_529_float, var_530_int);
	var_614_int = "attack_middle" + var_500_int;
	HasAnimation(var_501_bool, "all", var_614_int);
	var_615_bool = var_501_bool;
	if(var_615_bool != 0) {
		var_618_int = "attack_middle" + var_500_int;
		PlayAnimation("all", var_618_int);
		WaitForAnimEnd();
		func_1211(var_503_string);
		var_619_bool = 0;
		var_619_bool = 1;
		var_620_bool = 0; var_621_object = Obj();
		var_621_object = var_0_cvector;
		func_2939(var_620_bool, var_621_object);
		var_622_bool = var_620_bool == 0; //@nz
		if(var_622_bool != 1) {
			var_623_int = var_4_int;
			if(var_623_int != 1) {
				var_619_bool = 0;
			}
		}
		if(var_619_bool != 0) {
			StopAsync();
			var_494_bool = 0;
			return 8;
		}
		var_624_float = 0; var_625_int = 0;
		var_495_float = var_624_float;
		var_500_int = var_625_int;
		func_812(var_503_string, var_624_float, var_625_int);
		var_502_int = 1;

	Label_934:
		var_627_int = "attack_middle" + var_500_int;
		var_629_int = var_627_int + "_";
		var_503_string = var_629_int + var_502_int;
		HasAnimation(var_501_bool, "all", var_503_string);
		var_631_bool = var_501_bool == 0; //@nz
		if(var_631_bool != 0) {
		} else {
			PlayAnimation("all", var_503_string);
			WaitForAnimEnd();
			func_1211(var_503_string);
			var_647_bool = 0;
			var_647_bool = 1;
			var_648_bool = 0; var_649_object = Obj();
			var_649_object = var_0_cvector;
			func_2939(var_648_bool, var_649_object);
			var_650_bool = var_648_bool == 0; //@nz
			if(var_650_bool != 1) {
				var_651_int = var_4_int;
				if(var_651_int != 1) {
					var_647_bool = 0;
				}
			}
			if(var_647_bool != 0) {
				StopAsync();
				var_494_bool = 0;
				var_652_float = 0; var_653_int = 0;
				var_495_float = var_652_float;
				var_500_int = var_653_int;
				func_812(var_503_string, var_652_float, var_653_int);
				var_502_int = var_502_int + (int)1;
				goto Label_934;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_635_int = "attack_end" + var_500_int;
	PlayAnimation("all", var_635_int);
	var_636_bool = 0;
	func_1223(var_636_bool);
	if(var_636_bool != 0) {
		var_637_bool = 0; var_638_float = 0;
		func_997(var_637_bool, (float)0.75);
		StopAsync();
	}
	var_494_bool = 1;
	return 8;
	
}


func_2903(var_216_bool, var_217_object)
{
	var_218_object = Obj(); var_219_object = Obj(); var_220_object = Obj(); var_221_object = Obj();
	var_222_bool = var_217_object == 0; //@ne
	if(var_222_bool != 0) {
		var_216_bool = 0;
		return 4;
	}
	var_223_bool = 0;
	var_223_bool = 0;
	var_226_bool = IsFuncExist(var_217_object, "IsDead", (int)1);
	if(var_226_bool != 0) {
		var_227_bool = 0; var_228_object = Obj();
		var_217_object = var_228_object;
		func_2898(var_227_bool, var_228_object);
		if(var_227_bool != 0) {
			var_223_bool = 1;
		}
	}
	if(var_223_bool != 0) {
		var_216_bool = 0;
		return 4;
	}
	GetScene(var_220_object);
	var_231_bool = var_220_object == 0; //@ne
	if(var_231_bool != 0) {
		var_216_bool = 0;
		return 4;
	}
	@@var_217_object:GetScene(var_221_object);
	var_232_bool = var_220_object != var_221_object;
	if(var_232_bool != 0) {
		var_216_bool = 0;
		return 4;
	}
	var_216_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3431(var_21_bool, var_22_object)
{
	var_23_bool = 0;
	var_23_bool = 0;
	var_26_bool = IsFuncExist(var_22_object, "IsDead", (int)1);
	if(var_26_bool != 0) {
		var_27_bool = 0; var_28_object = Obj();
		var_22_object = var_28_object;
		func_2898(var_27_bool, var_28_object);
		if(var_27_bool != 0) {
			var_23_bool = 1;
		}
	}
	if(var_23_bool != 0) {
		var_31_bool = 0; var_32_object = Obj(); var_33_string = "";
		var_22_object = var_32_object;
		func_2813(var_31_bool, var_32_object, "b9q03_corpse");
		if(var_31_bool != 0) {
			var_21_bool = 0;
			return 0;
		}
		@@var_22_object:SetProperty("b9q03_corpse", (int)1);
		var_42_bool = 0; var_43_object = Obj();
		var_22_object = var_43_object;
		func_3647(var_42_bool, var_43_object);
		var_42_bool = var_21_bool;
		return 0;
	EMIT "GOTO 0xda0";
	}
	var_50_bool = 0; var_51_object = Obj();
	var_22_object = var_51_object;
	func_2808(var_50_bool, var_51_object);
	if(var_50_bool != 0) {
		var_54_bool = 0; var_55_object = Obj();
		var_22_object = var_55_object;
		func_3701(var_54_bool, var_55_object);
		var_54_bool = var_21_bool;
		return 0;
	EMIT "GOTO 0xda0";
	}
	var_62_bool = 0; var_63_object = Obj(); var_64_string = "";
	var_22_object = var_63_object;
	func_2813(var_62_bool, var_63_object, "b9q03");
	if(var_62_bool != 0) {
		var_65_bool = 0; var_66_object = Obj();
		var_22_object = var_66_object;
		func_3701(var_65_bool, var_66_object);
		var_65_bool = var_21_bool;
		return 0;
	}
	var_21_bool = 0;
	return 0;
}


func_1385(var_0_cvector, var_1_cvector, var_295_bool, var_296_object, var_297_float, var_298_float, var_299_bool, var_300_bool)
{
	var_301_bool = 0; var_302_bool = 0; var_303_object = Obj(); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_float = 0; var_308_object = Obj(); var_309_bool = 0; var_310_bool = 0; var_311_object = Obj(); var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_float = 0; var_316_object = Obj();
	var_0_cvector = false;
	var_1_cvector = var_296_object;
	var_300_bool = var_310_bool;
	
Label_1389:
	var_317_bool = 0; var_318_object = Obj();
	var_296_object = var_318_object;
	func_1525(var_317_bool, var_318_object);
	var_321_bool = var_317_bool == 0; //@nz
	if(var_321_bool != 0) {
		var_295_bool = 0;
		return 16;
	}
	@@var_296_object:GetPosition(var_312_cvector);
	GetPosition(var_313_cvector);
	var_314_cvector = var_312_cvector - var_313_cvector;
	var_315_float = var_314_cvector | var_314_cvector;
	var_322_bool = 0;
	var_322_bool = 0;
	var_324_bool = var_298_float > (int)0;
	if(var_324_bool != 0) {
		var_325_float = var_298_float * var_298_float;
		var_326_bool = var_315_float > var_325_float;
		if(var_326_bool != 0) {
			var_322_bool = 1;
		}
	}
	if(var_322_bool != 0) {
		Stop();
		var_295_bool = 0;
		return 16;
	}
	var_327_float = var_297_float * var_297_float;
	var_328_bool = var_315_float > var_327_float;
	if(var_328_bool != 0) {
		@@var_296_object:GetPFPosition(var_312_cvector);
		FindPathTo(var_316_object, var_312_cvector);
		var_329_bool = var_316_object != 0; //@nn
		if(var_329_bool != 0) {
			var_316_object = var_311_object;
			var_316_object = 0;
		}
		var_330_bool = var_311_object != 0; //@nn
		if(var_330_bool != 0) {
			var_331_bool = var_310_bool;
			if(var_331_bool == 0) goto Label_1438;
			var_310_bool = 0;
			RotatePath(var_311_object, var_309_bool);
			var_332_bool = var_309_bool == 0; //@nz
			if(var_332_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_335_string = "";
				func_1532(var_335_string);
				var_336_string = "";
				func_1534(var_336_string);
				FollowPath(var_311_object, var_299_bool, var_309_bool, var_335_string, var_336_string);
				var_337_bool = var_309_bool == 0; //@nz
				if(var_337_bool != 0) {
					var_338_cvector = var_0_cvector;
					if(var_338_cvector != 0) {
						var_311_object = 0;
						goto Label_1485;
					EMIT "GOTO 0x5b2";
					}
				} else {
					var_311_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_309_bool);
					var_341_bool = var_309_bool == 0; //@nz
					if(var_341_bool != 0) {
						var_342_cvector = var_0_cvector;
						if(var_342_cvector != 0) {
							var_311_object = 0;
							goto Label_1485;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1485;
	}
			var_316_object = 0;
			goto Label_1483;

		Label_1483:
			var_311_object = 0;

		}
		goto Label_1389;
	}
Label_1485:
	var_295_bool = !var_0_cvector;
	return 16;
	
}


func_2939(var_212_bool, var_213_object)
{
	var_214_int = 0; var_215_int = 0;
	var_216_bool = 0; var_217_object = Obj();
	var_213_object = var_217_object;
	func_2903(var_216_bool, var_217_object);
	var_233_bool = var_216_bool == 0; //@nz
	if(var_233_bool != 0) {
		var_212_bool = 0;
		return 2;
	}
	var_234_bool = 0; var_235_object = Obj(); var_236_string = "";
	var_213_object = var_235_object;
	func_2813(var_234_bool, var_235_object, "noaccess");
	var_243_bool = var_234_bool == 0; //@nz
	if(var_243_bool != 0) {
		var_212_bool = 1;
		return 2;
	}
	@@var_213_object:GetProperty("noaccess", var_215_int);
	var_212_bool = var_215_int == (int)0;
	return 2;
}


func_1929(var_919_bool)
{
	var_919_bool = 1;
	return 0;
}


func_1931()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1936(var_932_bool, var_933_cvector, var_934_cvector, var_935_bool)
{
	var_937_float = GetByIndex(var_933_cvector, 1);
	var_937_float = var_937_float + (int)30;
	SetByIndex(var_933_cvector, 1) = var_937_float;
	var_939_bool = 0; var_940_cvector = CVector(0,0,0); var_941_cvector = CVector(0,0,0); var_942_float = 0; var_943_float = 0; var_944_bool = 0; var_945_bool = 0;
	var_933_cvector = var_940_cvector;
	var_934_cvector = var_941_cvector;
	var_935_bool = var_944_bool;
	func_2005(var_935_bool, var_939_bool, var_940_cvector, var_941_cvector, (float)100, (float)4000, var_944_bool, (bool)1);
	var_939_bool = var_932_bool;
	return 0;
}


func_2963(var_37_object)
{
	var_38_bool = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = ""; var_45_bool = 0; var_46_int = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_string = "";
	var_52_bool = var_37_object == 0; //@ne
	if(var_52_bool != 0) {
		return 14;
	}
	IsDead(var_45_bool);
	var_53_bool = var_45_bool;
	if(var_53_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_46_int);
	var_55_bool = var_46_int < (int)0;
	if(var_55_bool != 0) {
		return 14;
	}
	@@var_37_object:GetPosition(var_47_cvector);
	GetPosition(var_48_cvector);
	GetDirection(var_49_cvector);
	var_50_cvector = var_48_cvector - var_47_cvector;
	var_56_float = GetByIndex(var_50_cvector, 0);
	var_57_float = GetByIndex(var_49_cvector, 0);
	var_58_float = var_56_float * var_57_float;
	var_59_float = GetByIndex(var_50_cvector, 2);
	var_60_float = GetByIndex(var_49_cvector, 2);
	var_61_float = var_59_float * var_60_float;
	var_62_int = var_58_float + var_61_float;
	var_64_bool = var_62_int >= (int)0;
	if(var_64_bool != 0) {
		var_51_string = "fhit";
	} else {
		var_51_string = "bhit";
	}
	var_67_int = var_51_string + "1";
	var_69_int = var_51_string + "2";
	FadeSecondaryAnimation("hit_react", var_67_int, var_69_int, (int)-10);
	return 14;
	
}


func_2455(var_682_string)
{
	var_683_bool = 0; var_684_bool = 0; var_685_bool = 0; var_686_bool = 0;
	WaitForAnimEnd();
	var_687_bool = 0;
	func_3100(var_687_bool);
	var_688_bool = var_687_bool == 0; //@nz
	if(var_688_bool != 0) {
		return 4;
	}
	HasAnimation(var_685_bool, "all", var_682_string);
	var_690_bool = var_685_bool == 0; //@nz
	if(var_690_bool != 0) {
		return 4;
	}
	PlayAnimation("all", var_682_string);
	WaitForAnimEnd(var_686_bool);
	return 4;
}


func_3490(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_object = var_24_object;
	func_2808(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		var_27_bool = 0; var_28_object = Obj();
		var_22_object = var_28_object;
		func_3683(var_27_bool, var_28_object);
		var_27_bool = var_21_bool;
		return 0;
	EMIT "GOTO 0xdbb";
	}
	var_35_bool = 0; var_36_object = Obj(); var_37_string = "";
	var_22_object = var_36_object;
	func_2813(var_35_bool, var_36_object, "b9q03");
	if(var_35_bool != 0) {
		var_44_bool = 0; var_45_object = Obj();
		var_22_object = var_45_object;
		func_3683(var_44_bool, var_45_object);
		var_44_bool = var_21_bool;
		return 0;
	}
	var_21_bool = 0;
	return 0;
}


func_2476()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2481(var_21_object)
{
	var_23_int = GlobalVars[3];
	var_24_bool = (int)1 == var_23_int;
	if(var_24_bool != 0) {
		var_25_bool = 0;
		func_3730((bool)0);
	}
	var_35_int = GlobalVars[3];
	var_36_bool = (int)3 == var_35_int;
	if(var_36_bool != 0) {
		var_37_bool = 0;
		func_3755((bool)0);
	}
	var_46_object = Obj(); var_47_string = ""; var_48_int = 0; var_49_int = 0;
	func_3168(Obj());
	var_50_object = var_46_object;
	func_3116(var_46_object, "coffee", (int)1, (int)3);
	var_61_object = Obj(); var_62_string = ""; var_63_int = 0; var_64_int = 0;
	func_3168(Obj());
	var_65_object = var_61_object;
	func_3116(var_61_object, "tvirin", (int)1, (int)6);
	var_66_object = Obj(); var_67_string = ""; var_68_int = 0; var_69_int = 0;
	func_3168(Obj());
	var_70_object = var_66_object;
	func_3116(var_66_object, "silver_ring", (int)1, (int)9);
	var_71_object = Obj(); var_72_string = ""; var_73_int = 0; var_74_int = 0;
	func_3168(Obj());
	var_75_object = var_71_object;
	func_3116(var_71_object, "gold_ring", (int)1, (int)8);
	var_76_object = Obj(); var_77_string = ""; var_78_int = 0; var_79_int = 0;
	func_3168(Obj());
	var_80_object = var_76_object;
	func_3116(var_76_object, "bracelet", (int)1, (int)6);
	var_81_object = Obj(); var_82_string = ""; var_83_int = 0; var_84_int = 0;
	func_3168(Obj());
	var_85_object = var_81_object;
	func_3116(var_81_object, "watch", (int)1, (int)9);
	var_86_object = Obj(); var_87_string = ""; var_88_int = 0; var_89_int = 0;
	func_3168(Obj());
	var_90_object = var_86_object;
	func_3116(var_86_object, "beads", (int)1, (int)9);
	var_91_object = Obj(); var_92_string = ""; var_93_int = 0; var_94_int = 0;
	func_3168(Obj());
	var_95_object = var_91_object;
	func_3116(var_91_object, "ear_ring", (int)1, (int)9);
	var_96_object = Obj(); var_97_string = ""; var_98_int = 0; var_99_int = 0;
	func_3168(Obj());
	var_100_object = var_96_object;
	func_3116(var_96_object, "feromicin", (int)1, (int)10);
	func_3298();
	var_121_object = Obj();
	var_21_object = var_121_object;
	func_2604(var_121_object);
	return 0;
}


func_445(var_7_float, var_141_object)
{
	var_7_float = var_141_object;
	SetTimer((int)1, (int)1);
	var_153_object = Obj(); var_154_bool = 0; var_155_float = 0;
	var_141_object = var_153_object;
	func_519(var_146_bool, var_147_bool, var_148_float, var_149_int, var_150_object, var_141_object, var_153_object, (bool)0, (float)150.0);
	KillTimer((int)1);
	return 0;
}


func_3517(var_42_bool)
{
	var_43_object = Obj(); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_float = 0; var_49_int = 0; var_50_cvector = CVector(0,0,0); var_51_float = 0; var_52_object = Obj(); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_float = 0; var_58_int = 0; var_59_cvector = CVector(0,0,0); var_60_float = 0;
	GetMainOutdoorScene(var_52_object);
	GetPosition(var_53_cvector);
	var_57_float = 4000000;
	var_58_int = 0;
	var_61_int = GlobalVars[1];
	GlobalVars[1] = (int)1;
	
Label_3527:
	if((bool)1 != 0) {
		var_64_int = GlobalVars[1];
		var_65_int = "pt_b9q03_bonfire" + var_64_int;
		@@var_52_object:GetLocator(var_65_int, var_56_bool, var_54_cvector, var_55_cvector);
		var_66_bool = var_56_bool == 0; //@nz
		if(var_66_bool != 0) {
		} else {
					var_59_cvector = var_53_cvector - var_54_cvector;
					var_60_float = var_59_cvector | var_59_cvector;
					var_96_bool = var_60_float < var_57_float;
					if(var_96_bool != 0) {
						var_60_float = var_57_float;
						var_97_int = GlobalVars[1];
						var_97_int = var_58_int;
					}
					var_98_int = GlobalVars[1];
					var_98_int = var_98_int + (int)1;
					GlobalVars[1] = var_98_int;
					goto Label_3527;
		}
	}
	var_67_int = GlobalVars[1];
	var_67_int = var_58_int - (int)1;
	GlobalVars[1] = var_67_int;
	var_69_int = GlobalVars[1];
	var_71_bool = var_69_int == (int)-1;
	if(var_71_bool != 0) {
		var_42_bool = 0;
		return 18;
	}
	var_73_int = GlobalVars[1];
	var_75_int = var_73_int + (int)1;
	var_76_int = "Bonfire index: " + var_75_int;
	Trace(var_76_int);
	var_77_int = GlobalVars[2];
	GlobalVars[2] = (int)0;
	
Label_3570:
	if((bool)1 != 0) {
		var_80_int = GlobalVars[1];
		var_82_int = var_80_int + (int)1;
		var_83_int = "pt_b9q03_bonfire" + var_82_int;
		var_85_int = var_83_int + "_patrol";
		var_86_int = GlobalVars[2];
		var_88_int = var_86_int + (int)1;
		var_89_int = var_85_int + var_88_int;
		@@var_52_object:GetLocator(var_89_int, var_56_bool, var_54_cvector, var_55_cvector);
		var_90_bool = var_56_bool == 0; //@nz
		if(var_90_bool != 0) {
		} else {
			var_94_int = GlobalVars[2];
			var_94_int = var_94_int + (int)1;
			GlobalVars[2] = var_94_int;
			goto Label_3570;

		}
	}
	var_92_int = GlobalVars[2];
	var_93_int = "Bonfire pantrol point count: " + var_92_int;
	Trace(var_93_int);
	var_42_bool = 1;
	return 18;
	
}
EMIT "Stack[-9] = 0";


func_3007(var_24_object, var_25_int, var_26_float)
{
	var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj(); var_38_int = 0; var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_int = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0);
	var_45_bool = 0;
	var_45_bool = 0;
	var_46_bool = 0;
	var_46_bool = 0;
	var_47_object = var_24_object;
	if(var_47_object != 0) {
		var_49_bool = var_25_int != (int)4;
		if(var_49_bool != 0) {
			var_46_bool = 1;
		}
	}
	if(var_46_bool != 0) {
		var_51_bool = var_25_int != (int)5;
		if(var_51_bool != 0) {
			var_45_bool = 1;
		}
	}
	if(var_45_bool != 0) {
		var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
		var_54_cvector = CVector(0,0,0); var_55_object = Obj();
		var_24_object = var_55_object;
		func_2801(var_54_cvector, var_55_object);
		var_54_cvector = var_53_cvector;
		func_3174(var_52_cvector, var_53_cvector);
		var_52_cvector = var_36_cvector;
		CreateVectorVector(var_37_object);
		var_38_int = 1;

	Label_3036:
		var_66_int = "hit" + var_38_int;
		GetGeometryLocator(var_66_int, var_39_bool, var_40_cvector, var_41_cvector);
		var_67_bool = var_39_bool == 0; //@nz
		if(var_67_bool != 0) {
		} else {
			var_115_int = var_41_cvector | var_36_cvector;
			var_117_bool = var_115_int >= (float)0.7071067690849304;
			if(var_117_bool != 0) {
				@@var_37_object:add(var_40_cvector);
			}
			var_38_int = var_38_int + (int)1;
			goto Label_3036;
		}
		@@var_37_object:size(var_42_int);
		var_68_int = var_42_int;
		if(var_68_int != 0) {
			irand(var_43_int, var_42_int);
			@@var_37_object:get(var_44_cvector, var_43_int);
			var_69_object = Obj(); var_70_int = 0; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
			var_24_object = var_69_object;
			var_25_int = var_70_int;
			var_26_float = var_71_float;
			var_44_cvector = var_72_cvector;
			var_73_cvector = -var_36_cvector;
			func_3075(var_71_float, var_72_cvector, var_73_cvector);
			return 18;
		}
		var_37_object = 0;
	}
	var_114_object = Obj();
	var_24_object = var_114_object;
	func_2963(var_114_object);
	return 18;
	
}


func_461(var_540_float)
{
	var_540_float = 0.10000000149011612;
	return 0;
}


func_1487(var_0_cvector, var_1_cvector, var_39_int)
{
	var_41_bool = var_39_int != (int)0;
	if(var_41_bool != 0) {
		return 0;
	}
	var_42_bool = 0; var_43_object = Obj();
	var_43_object = var_1_cvector;
	func_1525(var_42_bool, var_43_object);
	var_78_bool = var_42_bool == 0; //@nz
	if(var_78_bool != 0) {
		var_0_cvector = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_464(var_547_int)
{
	var_547_int = 0;
	return 0;
}


func_467(var_608_int)
{
	func_3808((int)0);
	var_609_int = var_608_int;
	return 0;
}


func_2003(var_962_bool)
{
	var_962_bool = 1;
	return 0;
}


func_2005(var_0_cvector, var_939_bool, var_940_cvector, var_941_cvector, var_942_float, var_943_float, var_944_bool, var_945_bool)
{
	var_946_bool = 0; var_947_bool = 0; var_948_object = Obj(); var_949_cvector = CVector(0,0,0); var_950_cvector = CVector(0,0,0); var_951_cvector = CVector(0,0,0); var_952_float = 0; var_953_object = Obj(); var_954_bool = 0; var_955_bool = 0; var_956_object = Obj(); var_957_cvector = CVector(0,0,0); var_958_cvector = CVector(0,0,0); var_959_cvector = CVector(0,0,0); var_960_float = 0; var_961_object = Obj();
	var_0_cvector = false;
	var_945_bool = var_955_bool;
	
Label_2008:
	var_962_bool = 0;
	func_2003(var_962_bool);
	var_963_bool = var_962_bool == 0; //@nz
	if(var_963_bool != 0) {
		var_939_bool = 0;
		return 16;
	}
	var_940_cvector = var_957_cvector;
	GetPosition(var_958_cvector);
	var_959_cvector = var_957_cvector - var_958_cvector;
	var_960_float = var_959_cvector | var_959_cvector;
	var_964_bool = 0;
	var_964_bool = 0;
	var_966_bool = var_943_float > (int)0;
	if(var_966_bool != 0) {
		var_967_float = var_943_float * var_943_float;
		var_968_bool = var_960_float > var_967_float;
		if(var_968_bool != 0) {
			var_964_bool = 1;
		}
	}
	if(var_964_bool != 0) {
		Stop();
		var_939_bool = 0;
		return 16;
	}
	var_969_float = var_942_float * var_942_float;
	var_970_bool = var_960_float > var_969_float;
	if(var_970_bool != 0) {
		FindPathTo(var_961_object, var_957_cvector);
		var_971_bool = var_961_object != 0; //@nn
		if(var_971_bool != 0) {
			var_961_object = var_956_object;
			var_961_object = 0;
		}
		var_972_bool = var_956_object != 0; //@nn
		if(var_972_bool != 0) {
			var_973_bool = var_955_bool;
			if(var_973_bool == 0) goto Label_2053;
			var_955_bool = 0;
			RotatePath(var_956_object, var_954_bool);
			var_974_bool = var_954_bool == 0; //@nz
			if(var_974_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_980_string = "";
				func_2145(var_980_string);
				var_981_string = "";
				func_2147(var_981_string);
				FollowPath(var_956_object, var_944_bool, var_954_bool, var_980_string, var_981_string);
				var_982_bool = var_954_bool == 0; //@nz
				if(var_982_bool != 0) {
					var_983_cvector = var_0_cvector;
					if(var_983_cvector != 0) {
						var_956_object = 0;
						goto Label_2100;
					EMIT "GOTO 0x819";
					}
				} else {
					var_956_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_954_bool);
					var_986_bool = var_954_bool == 0; //@nz
					if(var_986_bool != 0) {
						var_987_cvector = var_0_cvector;
						if(var_987_cvector != 0) {
							var_956_object = 0;
							goto Label_2100;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_2100;
	}
			var_961_object = 0;
			goto Label_2098;

		Label_2098:
			var_956_object = 0;

		}
		goto Label_2008;
	}
Label_2100:
	var_975_bool = var_0_cvector == 0; //@nz
	if(var_975_bool != 0) {
		var_976_float = GetByIndex(var_941_cvector, 0);
		var_977_float = GetByIndex(var_941_cvector, 2);
		RotateAsync(var_976_float, var_977_float);
	}
	var_939_bool = !var_0_cvector;
	return 16;
	
}


func_997(var_637_bool, var_638_float)
{
	var_639_float = 0; var_640_bool = 0; var_641_float = 0; var_642_bool = 0;
	rand(var_641_float);
	var_643_bool = var_641_float < var_638_float;
	if(var_643_bool != 0) {

	Label_1002:
		IsAnimationPlaying(var_642_bool);
		var_644_bool = var_642_bool == 0; //@nz
		if(var_644_bool != 0) {
		} else {
			var_645_bool = 0;
			func_1107(var_645_bool);
			if(var_645_bool != 0) {
				var_637_bool = 1;
				sync();
				goto Label_1002;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1211(var_642_bool);
	}
	goto Label_1022;
	
Label_1022:
	var_637_bool = 0;
	return 4;
	
}


func_1509(var_0_cvector)
{
	var_0_cvector = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1525(var_317_bool, var_318_object)
{
	var_319_bool = 0; var_320_object = Obj();
	var_318_object = var_320_object;
	func_2939(var_319_bool, var_320_object);
	var_319_bool = var_317_bool;
	return 0;
}


func_1532(var_335_string)
{
	var_335_string = "walk";
	return 0;
}


func_1534(var_336_string)
{
	var_336_string = "run";
	return 0;
}


