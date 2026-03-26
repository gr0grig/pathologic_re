// @IMPORTS: GetPosition/1,Trace/1,RemoveActor/1,GetDirection/1,GetMainOutdoorScene/1,irand/2,BroadcastMessage/3,sync/0,SetTimer/2,KillTimer/1,IsPlayerActor/2,PlayGlobalMusic/1,GetPFPosition/1,CanReachByPF/2,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,StopAnimation/0,StopGroup0/0,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,SendPlayerEnemy/2,UnlookAsync/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,WaitForAnimEnd/1,rand/2,ResetAAS/0,RotateAsync/2,Hold/0,SetRTEnvelope/2,IsOverrideActive/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,FindActor/2,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,IsLoaded/1,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetVariable/2,WorkWithCorpse/1,Barter/1,SetVariable/2,GetProperty/2,SignalDeath/1,AddItem/4
// @STRINGS: W:FSM Init failed|A:GetLocator|A:GetPosition|A:GetDirection|W:Unknown FSM state|W:helpme timer|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:all|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|W:walk|W:run|W:hunt|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:cleanup|W:fire|W:bullet|W:phys|W:player|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:reputation|W:idle|W:branch|W:player_shot|W:Pantrol point count: |W:changing state to c_iStateWaitForLoad|W:changing state to c_iStateHeatHands|W:changing state to c_iStateIdle|W:changing state to c_iStatePatrol|W:changing state to c_iStateAware|W:changing state to c_iStateSearchEnemy|W:changing state to c_iStateHearEnemy|W:changing state to c_iStateAttack|W:_locked|W:pt_d9q02_patrol|W:d9q02_helpme|W:d9q02_corpse|W:pt_d9q02_center|W:Rifle
// @GLOBALS: 0:bool:,1:int:,2:int:,3:int:,4:object:,5:object:,6:object:,7:object:
// @RUN_OP: 0x8
// @RUN_TASK: 0
// @TASK_0: vars=cvector,cvector params=0
// @TASK_1: vars=object,int,int,bool,bool,float,int,object params=1
// @EVENT_7: op=0x1cb vars=int
// @EVENT_1: op=0x1db vars=object
// @EVENT_6: op=0x1f0 vars=
// @TASK_2: vars=bool,object,bool,object params=6
// @EVENT_7: op=0x4d2 vars=int
// @EVENT_6: op=0x4e7 vars=
// @EVENT_1: op=0x53b vars=object
// @EVENT_2: op=0x54a vars=object
// @EVENT_10: op=0x5d0 vars=object
// @EVENT_41: op=0x5db vars=object
// @TASK_3: vars=bool,object,bool params=2
// @EVENT_6: op=0x616 vars=
// @EVENT_42: op=0x61f vars=object,string
// @EVENT_1: op=0x62a vars=object
// @EVENT_3: op=0x635 vars=object
// @EVENT_17: op=0x640 vars=object
// @EVENT_7: op=0x64d vars=int
// @EVENT_10: op=0x6d3 vars=object
// @EVENT_41: op=0x6de vars=object
// @TASK_4: vars= params=0
// @EVENT_6: op=0x6f6 vars=
// @EVENT_42: op=0x6fe vars=object,string
// @EVENT_1: op=0x709 vars=object
// @EVENT_3: op=0x713 vars=object
// @EVENT_17: op=0x71d vars=object
// @TASK_5: vars=bool params=4
// @EVENT_6: op=0x78f vars=
// @EVENT_42: op=0x797 vars=object,string
// @EVENT_1: op=0x7a2 vars=object
// @EVENT_3: op=0x7ac vars=object
// @EVENT_17: op=0x7b6 vars=object
// @EVENT_7: op=0x82b vars=int
// @EVENT_10: op=0x83c vars=object
// @EVENT_41: op=0x847 vars=object
// @TASK_6: vars=bool params=1
// @EVENT_42: op=0x869 vars=object,string
// @EVENT_1: op=0x874 vars=object
// @EVENT_3: op=0x87e vars=object
// @EVENT_17: op=0x888 vars=object
// @EVENT_6: op=0x8a4 vars=
// @EVENT_7: op=0x915 vars=int
// @EVENT_10: op=0x926 vars=object
// @EVENT_41: op=0x931 vars=object
// @TASK_7: vars=bool params=1
// @EVENT_6: op=0x94d vars=
// @EVENT_42: op=0x956 vars=object,string
// @EVENT_1: op=0x962 vars=object
// @EVENT_3: op=0x96d vars=object
// @EVENT_17: op=0x978 vars=object
// @TASK_8: vars= params=1
// @EVENT_6: op=0x9b7 vars=
// @EVENT_0: op=0x9ce vars=object
// @EVENT_22: op=0xa4d vars=object,int,float,float
// @EVENT_16: op=0xa4f vars=object,string
// @EVENT_41: op=0xa51 vars=object
// @TASK_9: vars= params=0
// @EVENT_26: op=0xa65 vars=string
// @EVENT_5: op=0xa71 vars=
// @STANDALONE_EVENT_26: op=0xc9e vars=string
// @STANDALONE_EVENT_22: op=0xe09 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xe11 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0xe1b vars=object,string
// @STANDALONE_EVENT_41: op=0xe28 vars=object
// @PE: 0x1b3,0x1c3,0x1c6,0x1db,0x1f0,0x4b6,0x4e7,0x520,0x53b,0x54a,0x5be,0x5d0,0x5db,0x5e4,0x5ef,0x616,0x61f,0x62a,0x635,0x640,0x64d,0x6c1,0x6d3,0x6de,0x6e7,0x6f2,0x6f6,0x6fe,0x709,0x713,0x71d,0x77f,0x78f,0x797,0x7a2,0x7ac,0x7b6,0x82b,0x83c,0x847,0x869,0x874,0x87e,0x888,0x894,0x8a4,0x915,0x926,0x931,0x94d,0x956,0x962,0x96d,0x978,0x99e,0x9bf,0xa33,0xa4d,0xa4f,0xa51,0xa65,0xa76,0xc15,0xc1c,0xc2c,0xc91,0xc9e,0xcf0,0xd23,0xd56,0xd84,0xd96,0xda8,0xdba,0xdd7,0xe09,0xe11,0xe28

task_1_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_object = Obj(); var_22_object = Obj();
	var_24_bool = var_20_bool == (int)1;
	if(var_24_bool != 0) {
		GetMainOutdoorScene(var_22_object);
		var_25_string = "";
		func_3634(var_25_string);
		BroadcastMessage(var_25_string, var_7_float, var_22_object);
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
	func_2706(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		var_26_object = GlobalVars[7];
		var_27_bool = var_26_object != var_20_bool;
		if(var_27_bool != 0) {
			var_21_bool = 1;
		}
	}
	if(var_21_bool != 0) {
		func_754(var_20_bool);
		var_28_bool = 0; var_29_object = Obj();
		var_20_bool = var_29_object;
		func_3514(var_28_bool, var_29_object);
	}
	return 0;
}


task_1_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_754(var_19_bool);
	var_20_bool = 0; var_21_int = 0;
	func_3414(var_20_bool, (int)0);
	return 0;
}


task_2_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_object = Obj(); var_22_object = Obj();
	var_24_bool = var_20_bool == (int)2;
	if(var_24_bool != 0) {
		GetMainOutdoorScene(var_22_object);
		var_25_string = "";
		func_3634(var_25_string);
		BroadcastMessage(var_25_string, var_3_int, var_22_object);
		Trace("helpme timer");
	} else {
		var_27_int = 0;
		var_20_bool = var_27_int;
		func_1312(Obj(), var_27_int);
	}
	return 2;
	
}


task_2_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_1326(var_19_bool);
	var_24_bool = 0; var_25_int = 0;
	func_3414(var_24_bool, (int)0);
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
		func_3025(var_24_object);
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
	func_1326(var_20_bool);
	var_20_bool = Obj();
	func_3624();
	return 0;
}


task_3_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_1751(var_19_bool);
	var_2_object = true;
	var_21_bool = 0; var_22_int = 0;
	func_3414(var_21_bool, (int)0);
	return 0;
}


task_3_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string, var_19_bool, var_20_bool, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_20_bool = var_23_object;
	var_21_bool = var_24_string;
	func_3238(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_1751(var_21_bool);
	}
	return 0;
}


task_3_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3312(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		var_2_object = true;
		func_1751(var_20_bool);
	}
	return 0;
}


task_3_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3363(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		var_2_object = true;
		func_1751(var_20_bool);
	}
	return 0;
}


task_3_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	EventDisable(42);
	EventDisable(1);
	EventDisable(3);
	func_1751(var_20_bool);
	var_2_object = true;
	var_22_bool = 0; var_23_object = Obj();
	var_20_bool = var_23_object;
	func_3514(var_22_bool, var_23_object);
	return 0;
}


task_3_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_int, var_18_bool, var_19_bool, var_20_bool)
{
	var_22_bool = var_20_bool == (int)3;
	if(var_22_bool != 0) {
		func_1751(var_20_bool);
		var_2_object = true;
		return 0;
	}
	var_24_int = 0;
	var_20_bool = var_24_int;
	func_1729(var_19_bool, var_20_bool, var_24_int);
	return 0;
}


task_3_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	RequestClearPath(var_20_bool);
	return 0;
}


task_3_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	func_1751(var_20_bool);
	var_20_bool = Obj();
	func_3624();
	return 0;
}


task_4_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_1914();
	var_20_bool = 0; var_21_int = 0;
	func_3414(var_20_bool, (int)0);
	return 0;
}


task_4_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string, var_19_bool, var_20_bool, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_20_bool = var_23_object;
	var_21_bool = var_24_string;
	func_3238(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_1914();
	}
	return 0;
}


task_4_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3312(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_1914();
	}
	return 0;
}


task_4_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3363(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_1914();
	}
	return 0;
}


task_4_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	EventDisable(42);
	EventDisable(1);
	EventDisable(3);
	func_1914();
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3514(var_21_bool, var_22_object);
	return 0;
}


task_5_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_2112(var_19_bool);
	var_21_bool = 0; var_22_int = 0;
	func_3414(var_21_bool, (int)0);
	return 0;
}


task_5_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_string, var_20_bool, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_20_bool = var_23_object;
	var_21_bool = var_24_string;
	func_3238(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_2112(var_21_bool);
	}
	return 0;
}


task_5_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3312(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_2112(var_20_bool);
	}
	return 0;
}


task_5_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3363(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_2112(var_20_bool);
	}
	return 0;
}


task_5_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	EventDisable(42);
	EventDisable(1);
	EventDisable(3);
	func_2112(var_20_bool);
	var_22_bool = 0; var_23_object = Obj();
	var_20_bool = var_23_object;
	func_3514(var_22_bool, var_23_object);
	return 0;
}


task_5_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int, var_19_bool, var_20_bool)
{
	var_22_bool = var_20_bool != (int)0;
	if(var_22_bool != 0) {
		return 0;
	}
	var_23_bool = 0;
	func_1986(var_23_bool);
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
	func_2112(var_20_bool);
	var_20_bool = Obj();
	func_3624();
	return 0;
}


task_6_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_string, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_20_string = var_23_object;
	var_21_bool = var_24_string;
	func_3238(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_2346(var_21_bool);
	}
	return 0;
}


task_6_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3312(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_2346(var_20_bool);
	}
	return 0;
}


task_6_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3363(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_2346(var_20_bool);
	}
	return 0;
}


task_6_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	EventDisable(42);
	EventDisable(1);
	EventDisable(3);
	func_2346(var_20_bool);
	var_22_bool = 0; var_23_object = Obj();
	var_20_bool = var_23_object;
	func_3514(var_22_bool, var_23_object);
	return 0;
}


task_6_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_2346(var_19_bool);
	var_21_bool = 0; var_22_int = 0;
	func_3414(var_21_bool, (int)0);
	return 0;
}


task_6_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_int, var_20_bool)
{
	var_22_bool = var_20_bool != (int)0;
	if(var_22_bool != 0) {
		return 0;
	}
	var_23_bool = 0;
	func_2220(var_23_bool);
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
	func_2346(var_20_bool);
	var_20_bool = Obj();
	func_3624();
	return 0;
}


task_7_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_2457();
	var_0_cvector = true;
	var_20_bool = 0; var_21_int = 0;
	func_3414(var_20_bool, (int)0);
	return 0;
}


task_7_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_string)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_20_object = var_23_object;
	var_21_string = var_24_string;
	func_3238(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_2457();
		var_0_cvector = true;
	}
	return 0;
}


task_7_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_object = var_22_object;
	func_3312(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_2457();
		var_0_cvector = true;
	}
	return 0;
}


task_7_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_object = var_22_object;
	func_3363(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_2457();
		var_0_cvector = true;
	}
	return 0;
}


task_7_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	EventDisable(42);
	EventDisable(1);
	EventDisable(3);
	func_2457();
	var_21_bool = 0; var_22_object = Obj();
	var_20_object = var_22_object;
	func_3514(var_21_bool, var_22_object);
	return 0;
}


task_8_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	var_20_object = Obj();
	func_3077(var_20_object);
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
		func_3217(var_24_object);
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
		func_3077(var_23_object);
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
	func_2927(var_24_object, var_25_int, var_26_float);
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
	func_2995(var_28_float, var_29_cvector, var_30_cvector);
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
	func_2462(var_21_object);
	TaskReturn();
	return 0;
}


main(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_object = Obj();
	var_42_bool = 0;
	func_3377(var_42_bool);
	var_70_bool = var_42_bool == 0; //@nz
	if(var_70_bool != 0) {
		Trace("FSM Init failed");
		var_72_object = Obj();
		func_3077(var_72_object);
		RemoveActor(var_72_object);
		return 22;
	}
	GetPosition(var_0_cvector);
	GetDirection(var_1_cvector);
	var_75_int = GlobalVars[2];
	GlobalVars[2] = (int)0;
	var_76_int = GlobalVars[3];
	GlobalVars[3] = (int)2;
	
Label_33:
	if((bool)1 != 0) {
		var_79_int = GlobalVars[2];
		var_80_bool = (int)0 == var_79_int;
		if(var_80_bool != 0) {
			TaskCall(9);
			func_2643();
			TaskReturn();
			var_87_bool = 0; var_88_int = 0;
			func_3414(var_87_bool, (int)2);
		} else {
			var_107_int = GlobalVars[2];
			var_108_bool = (int)7 == var_107_int;
			if(var_108_bool != 0) {
				var_109_object = Obj();
				var_110_object = GlobalVars[7];
				var_110_object = var_109_object;
				TaskCall(1);
				func_435(var_118_object, var_109_object);
				TaskReturn();
				var_642_int = GlobalVars[2];
				var_643_bool = (int)7 == var_642_int;
				if(var_643_bool != 0) {
					var_644_int = 0;
					TaskCall(7);
					func_2366((int)1);
					TaskReturn();
					var_662_int = GlobalVars[2];
					var_663_bool = (int)7 == var_662_int;
					if(var_663_bool != 0) {
						var_664_bool = 0; var_665_int = 0;
						func_3414(var_664_bool, (int)2);
					}
				}
				goto Label_431;
			}
			var_667_int = GlobalVars[2];
			var_668_bool = (int)6 == var_667_int;
			if(var_668_bool != 0) {
				var_669_int = 0;
				TaskCall(7);
				func_2366((int)1);
				TaskReturn();
				var_672_int = GlobalVars[2];
				var_673_bool = (int)6 == var_672_int;
				if(var_673_bool != 0) {
					var_674_object = Obj(); var_675_float = 0;
					var_676_object = GlobalVars[6];
					var_676_object = var_674_object;
					TaskCall(3);
					func_1519(var_674_object, (float)8);
					TaskReturn();
					var_747_int = GlobalVars[2];
					var_748_bool = (int)6 == var_747_int;
					if(var_748_bool != 0) {
						var_749_int = 0;
						TaskCall(7);
						func_2366((int)1);
						TaskReturn();
						var_752_int = GlobalVars[2];
						var_753_bool = (int)6 == var_752_int;
						if(var_753_bool != 0) {
							var_754_bool = 0; var_755_int = 0;
							func_3414(var_754_bool, (int)2);
						}
					}
				}
				goto Label_431;
			}
			var_757_int = GlobalVars[2];
			var_758_bool = (int)1 == var_757_int;
			if(var_758_bool != 0) {
				var_759_bool = 0;
				func_3543((bool)1);
				TaskCall(6);
				func_2132((bool)0);
				TaskReturn();
				var_837_int = GlobalVars[2];
				var_838_bool = (int)1 == var_837_int;
				if(var_838_bool != 0) {
					TaskCall(4);
					func_1778();
					TaskReturn();
					var_891_int = GlobalVars[2];
					var_892_bool = (int)1 == var_891_int;
					if(var_892_bool != 0) {
						var_893_bool = 0; var_894_cvector = CVector(0,0,0); var_895_cvector = CVector(0,0,0); var_896_bool = 0;
						var_894_cvector = var_0_cvector;
						var_895_cvector = var_1_cvector;
						TaskCall(5);
						func_1919(var_893_bool, var_894_cvector, var_895_cvector, (bool)0);
						TaskReturn();
						var_953_int = GlobalVars[2];
						var_954_bool = (int)1 == var_953_int;
						if(var_954_bool != 0) {
							var_955_bool = 0; var_956_int = 0;
							func_3414(var_955_bool, (int)2);
						}
					}
				}
				var_957_bool = 0;
				func_3543((bool)0);
				goto Label_431;
			}
			var_959_int = GlobalVars[2];
			var_960_bool = (int)2 == var_959_int;
			if(var_960_bool != 0) {
				var_961_bool = 0;
				func_0(var_41_object, var_961_bool);
				var_969_bool = var_961_bool == 0; //@nz
				if(var_969_bool != 0) {
					var_970_bool = 0; var_971_cvector = CVector(0,0,0); var_972_cvector = CVector(0,0,0); var_973_bool = 0;
					var_971_cvector = var_0_cvector;
					var_972_cvector = var_1_cvector;
					TaskCall(5);
					func_1919(var_970_bool, var_971_cvector, var_972_cvector, (bool)0);
					TaskReturn();
				}
				var_976_int = GlobalVars[2];
				var_977_bool = (int)2 == var_976_int;
				if(var_977_bool != 0) {
					TaskCall(4);
					func_1778();
					TaskReturn();
					var_979_int = GlobalVars[2];
					var_980_bool = (int)2 == var_979_int;
					if(var_980_bool != 0) {
						var_981_bool = 0;
						func_3557(var_981_bool);
						var_988_bool = var_981_bool == 0; //@nz
						if(var_988_bool != 0) {
							var_989_bool = 0; var_990_int = 0;
							func_3414(var_989_bool, (int)3);
						} else {
							var_991_bool = 0; var_992_float = 0;
							func_3111(var_991_bool, (float)0.5);
							if(var_991_bool == 0) goto Label_223;
							var_995_bool = 0;
							func_3532(var_995_bool);
							var_1002_bool = var_995_bool == 0; //@nz
							if(var_1002_bool == 0) goto Label_223;
							var_1003_bool = 0; var_1004_int = 0;
							func_3414(var_1003_bool, (int)1);
			}
						var_1006_int = GlobalVars[2];
						var_1007_bool = (int)3 == var_1006_int;
						if(var_1007_bool != 0) {
							var_1008_bool = 0;
							func_3570((bool)1);
							GetMainOutdoorScene(var_31_object);
							var_1020_int = GlobalVars[1];
							irand(var_32_int, var_1020_int);
							var_1021_bool = 0; var_1022_float = 0;
							func_3111(var_1021_bool, (float)0.5);
							var_1021_bool = var_33_bool;
							var_34_int = 0;

						Label_243:
							var_1023_int = GlobalVars[1];
							var_1024_bool = var_34_int < var_1023_int;
							if(var_1024_bool != 0) {
								var_1025_int = var_34_int + var_32_int;
								var_1026_int = GlobalVars[1];
								var_38_int = var_1025_int % var_1026_int;
								var_1027_bool = var_33_bool;
								if(var_1027_bool != 0) {
									var_1028_int = GlobalVars[1];
									var_1030_int = var_1028_int - (int)1;
									var_38_int = var_1030_int - var_38_int;
								}
								var_1031_string = "";
								func_3632(var_1031_string);
								var_1033_int = var_38_int + (int)1;
								var_1034_int = var_1031_string + var_1033_int;
								@@var_31_object:GetLocator(var_1034_int, var_35_bool, var_36_cvector, var_37_cvector);
								var_1035_bool = 0; var_1036_cvector = CVector(0,0,0); var_1037_cvector = CVector(0,0,0); var_1038_bool = 0;
								var_36_cvector = var_1036_cvector;
								var_37_cvector = var_1037_cvector;
								TaskCall(5);
								func_1919(var_1035_bool, var_1036_cvector, var_1037_cvector, (bool)0);
								TaskReturn();
								var_1041_int = GlobalVars[2];
								var_1042_bool = (int)3 != var_1041_int;
								if(var_1042_bool != 0) {
								} else {
									var_1049_int = 0;
									TaskCall(7);
									func_2366((int)1);
									TaskReturn();
									var_1052_int = GlobalVars[2];
									var_1053_bool = (int)3 != var_1052_int;
									if(var_1053_bool != 0) {
										goto Label_290;
									}
									var_34_int = var_34_int + (int)1;
									goto Label_243;
						}
								var_1056_int = GlobalVars[2];
								var_1057_bool = (int)4 == var_1056_int;
								if(var_1057_bool != 0) {
									var_1058_object = GlobalVars[4];
									@@var_1058_object:GetPosition(var_39_cvector);
									var_1059_object = GlobalVars[4];
									@@var_1059_object:GetDirection(var_40_cvector);
									var_1060_bool = 0; var_1061_cvector = CVector(0,0,0); var_1062_cvector = CVector(0,0,0); var_1063_bool = 0;
									var_39_cvector = var_1061_cvector;
									var_1062_cvector = -var_40_cvector;
									TaskCall(5);
									func_1919(var_1060_bool, var_1061_cvector, var_1062_cvector, (bool)1);
									TaskReturn();
									var_1066_int = GlobalVars[2];
									var_1067_bool = (int)4 == var_1066_int;
									if(var_1067_bool != 0) {
										var_1068_int = 0;
										TaskCall(7);
										func_2366((int)2);
										TaskReturn();
										var_1071_int = GlobalVars[2];
										var_1072_bool = (int)4 == var_1071_int;
										if(var_1072_bool != 0) {
											var_1073_bool = 0; var_1074_cvector = CVector(0,0,0); var_1075_cvector = CVector(0,0,0); var_1076_bool = 0;
											var_1074_cvector = var_0_cvector;
											var_1075_cvector = var_1_cvector;
											TaskCall(5);
											func_1919(var_1073_bool, var_1074_cvector, var_1075_cvector, (bool)1);
											TaskReturn();
											var_1079_int = GlobalVars[2];
											var_1080_bool = (int)4 == var_1079_int;
											if(var_1080_bool != 0) {
												GetMainOutdoorScene(var_41_object);
												var_1081_string = "";
												func_3636(var_1081_string);
												var_1082_object = Obj();
												func_3077(var_1082_object);
												BroadcastMessage(var_1081_string, var_1082_object, var_41_object);
												var_1083_bool = 0; var_1084_cvector = CVector(0,0,0); var_1085_cvector = CVector(0,0,0); var_1086_bool = 0;
												var_39_cvector = var_1084_cvector;
												var_39_cvector = var_1085_cvector;
												TaskCall(5);
												func_1919(var_1083_bool, var_1084_cvector, var_1085_cvector, (bool)1);
												TaskReturn();
												var_1089_int = GlobalVars[2];
												var_1090_bool = (int)4 == var_1089_int;
												if(var_1090_bool != 0) {
													var_1091_int = 0;
													TaskCall(7);
													func_2366((int)3);
													TaskReturn();
													var_1094_int = GlobalVars[2];
													var_1095_bool = (int)4 == var_1094_int;
													if(var_1095_bool != 0) {
														var_1096_bool = 0; var_1097_int = 0;
														func_3414(var_1096_bool, (int)2);
													}
												}
												var_41_object = 0;
											}
										}
									}
									goto Label_431;
								}
								var_1099_int = GlobalVars[2];
								var_1100_bool = (int)5 == var_1099_int;
								if(var_1100_bool != 0) {
									var_1101_int = 0;
									TaskCall(7);
									func_2366((int)1);
									TaskReturn();
									var_1104_int = GlobalVars[2];
									var_1105_bool = (int)5 == var_1104_int;
									if(var_1105_bool != 0) {
										var_1106_object = Obj(); var_1107_float = 0;
										var_1108_object = GlobalVars[5];
										var_1108_object = var_1106_object;
										TaskCall(3);
										func_1519(var_1106_object, (float)8);
										TaskReturn();
										var_1113_int = GlobalVars[2];
										var_1114_bool = (int)5 == var_1113_int;
										if(var_1114_bool != 0) {
											var_1115_int = 0;
											TaskCall(7);
											func_2366((int)2);
											TaskReturn();
											var_1118_int = GlobalVars[2];
											var_1119_bool = (int)5 == var_1118_int;
											if(var_1119_bool != 0) {
												var_1120_bool = 0; var_1121_int = 0;
												func_3414(var_1120_bool, (int)2);
											}
										}
									}
									goto Label_431;
								}
								Trace("Unknown FSM state");
	}
							return 22;
						}
					}
				Label_290:
					var_1044_int = GlobalVars[2];
					var_1045_bool = (int)3 == var_1044_int;
					if(var_1045_bool != 0) {
						var_1046_bool = 0; var_1047_int = 0;
						func_3414(var_1046_bool, (int)2);
					}
					var_1048_bool = 0;
					func_3570((bool)0);
					var_31_object = 0;
					goto Label_431;
				}
			}
		}
	Label_223:
		goto Label_431;
	}
Label_431:
	sync();
	goto Label_33;
	
}


func_0(var_0_cvector, var_961_bool)
{
	var_962_cvector = CVector(0,0,0); var_963_cvector = CVector(0,0,0); var_964_float = 0; var_965_cvector = CVector(0,0,0); var_966_cvector = CVector(0,0,0); var_967_float = 0;
	GetPosition(var_965_cvector);
	var_966_cvector = var_965_cvector - var_0_cvector;
	var_967_float = var_966_cvector | var_966_cvector;
	var_961_bool = var_967_float < (int)40000;
	return 6;
}


func_3077(var_72_object)
{
	var_73_object = Obj(); var_74_object = Obj();
	self(var_74_object);
	var_74_object = var_72_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3083(var_52_cvector, var_53_cvector)
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


func_3093(var_549_float, var_550_float, var_551_float)
{
	var_554_bool = var_550_float < var_551_float;
	if(var_554_bool != 0) {
		var_550_float = var_549_float;
	} else {
		var_551_float = var_549_float;
	}
	return 0;
	
}


func_3100(var_559_float, var_560_float, var_561_float, var_562_float)
{
	var_563_bool = var_560_float < var_561_float;
	if(var_563_bool != 0) {
		var_561_float = var_559_float;
		return 0;
	}
	var_564_bool = var_560_float > var_562_float;
	if(var_564_bool != 0) {
		var_562_float = var_559_float;
		return 0;
	}
	var_560_float = var_559_float;
	return 0;
}


func_1058(var_0_cvector, var_412_bool)
{
	var_413_cvector = CVector(0,0,0); var_414_cvector = CVector(0,0,0); var_415_cvector = CVector(0,0,0); var_416_float = 0; var_417_float = 0; var_418_cvector = CVector(0,0,0); var_419_cvector = CVector(0,0,0); var_420_cvector = CVector(0,0,0); var_421_float = 0; var_422_float = 0;
	var_423_bool = 0;
	var_423_bool = 1;
	var_424_bool = 0; var_425_object = Obj();
	var_425_object = var_0_cvector;
	func_2859(var_424_bool, var_425_object);
	var_426_bool = var_424_bool == 0; //@nz
	if(var_426_bool != 1) {
		var_427_int = var_4_int;
		if(var_427_int != 1) {
			var_423_bool = 0;
		}
	}
	if(var_423_bool != 0) {
		var_412_bool = 0;
		return 10;
	}
	var_428_bool = 0;
	func_1153(var_422_float, var_428_bool);
	if(var_428_bool != 0) {
		@@@var_0_cvector:GetPFPosition(var_418_cvector);
		GetPFPosition(var_419_cvector);
		var_420_cvector = var_418_cvector - var_419_cvector;
		var_421_float = var_420_cvector | var_420_cvector;
		@@@var_0_cvector:GetAttackDistance(var_422_float);
		var_422_float = var_422_float + (int)50;
		var_430_float = var_422_float * var_422_float;
		var_412_bool = var_421_float <= var_430_float;
		return 10;
	}
	var_412_bool = 0;
	return 10;
}


func_3111(var_991_bool, var_992_float)
{
	var_993_float = 0; var_994_float = 0;
	rand(var_994_float);
	var_991_bool = var_994_float < var_992_float;
	return 2;
}


func_3116(var_52_bool, var_53_object, var_54_float)
{
	var_59_bool = var_53_object == 0; //@nz
	if(var_59_bool != 0) {
		var_52_bool = 0;
		return 0;
	}
	var_61_bool = var_54_float > (int)0;
	if(var_61_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_92_bool = var_54_float < (int)0;
		if(var_92_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_3137;
		}
		var_52_bool = 0;
		return 0;
	}
Label_3137:
	var_63_float = 0;
	var_54_float = var_63_float;
	func_3168(var_63_float);
	var_67_bool = 0; var_68_object = Obj(); var_69_string = ""; var_70_float = 0; var_71_float = 0; var_72_float = 0;
	var_53_object = var_68_object;
	var_54_float = var_70_float;
	func_2723(var_67_bool, var_68_object, "reputation", var_70_float, (float)0, (float)1);
	var_52_bool = 1;
	return 0;
	
}


func_3632(var_59_string)
{
	var_59_string = "pt_d9q02_patrol";
	return 0;
}


func_3634(var_55_string)
{
	var_55_string = "d9q02_helpme";
	return 0;
}


func_2611(var_117_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_118_string = "";
	var_117_string = var_118_string;
	func_3036(var_118_string);
	PlayAnimation("all", var_117_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_117_string);
	RemoveEnvelope();
	return 0;
}


func_3636(var_1081_string)
{
	var_1081_string = "d9q02_corpse";
	return 0;
}


func_3638(var_760_string)
{
	var_760_string = "pt_d9q02_center";
	return 0;
}


func_3640(var_987_int)
{
	var_987_int = 2;
	return 0;
}


func_3642()
{
	var_47_bool = 0; var_48_bool = 0;
	AddItem(var_48_bool, "Rifle", (int)0, (int)1);
	var_52_bool = 0; var_53_object = Obj(); var_54_float = 0;
	func_2699(Obj());
	var_55_object = var_53_object;
	func_3116(var_52_bool, var_53_object, (float)-0.029999999329447746);
	return 2;
}


func_2112(var_0_cvector)
{
	var_0_cvector = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1092(var_410_bool)
{
	var_411_bool = 0;
	var_411_bool = 0;
	var_412_bool = 0;
	func_1058(var_411_bool, var_412_bool);
	if(var_412_bool != 0) {
		var_431_bool = 0;
		func_1108(var_410_bool, var_411_bool, var_431_bool);
		if(var_431_bool != 0) {
			var_411_bool = 1;
		}
	}
	if(var_411_bool != 0) {
		var_410_bool = 1;
		return 0;
	}
	var_410_bool = 0;
	return 0;
}


func_3151(var_567_float)
{
	var_568_object = Obj(); var_569_object = Obj();
	CreateFloatVector(var_569_object);
	@@var_569_object:add(var_567_float);
	var_571_bool = var_567_float < (int)0;
	if(var_571_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_569_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2128(var_941_string)
{
	var_941_string = "walk";
	return 0;
}


func_2130(var_942_string)
{
	var_942_string = "run";
	return 0;
}


func_2643()
{
	var_81_bool = GlobalVars[0];
	if(var_81_bool != 0) {
		var_82_object = Obj();
		func_3077(var_82_object);
		RemoveActor(var_82_object);
		Hold();
	}
Label_2652:
	var_83_bool = 0;
	func_3020(var_83_bool);
	var_86_bool = var_83_bool == 0; //@nz
	if(var_86_bool != 0) {
		Hold();
		goto Label_2652;
	}
	return 0;
}


func_2132(var_766_bool)
{
	var_768_bool = 0; var_769_object = Obj(); var_770_cvector = CVector(0,0,0); var_771_cvector = CVector(0,0,0); var_772_bool = 0; var_773_object = Obj(); var_774_cvector = CVector(0,0,0); var_775_cvector = CVector(0,0,0);
	GetMainOutdoorScene(var_773_object);
	var_776_string = "";
	func_3638(var_776_string);
	@@var_773_object:GetLocator(var_776_string, var_772_bool, var_774_cvector, var_775_cvector);
	var_777_bool = var_772_bool == 0; //@nz
	if(var_777_bool != 0) {
		var_766_bool = 0;
		return 8;
	}
	var_778_bool = 0; var_779_cvector = CVector(0,0,0); var_780_cvector = CVector(0,0,0); var_781_bool = 0;
	var_774_cvector = var_779_cvector;
	var_775_cvector = var_780_cvector;
	func_2196(var_778_bool, var_779_cvector, var_780_cvector, (bool)0);
	var_778_bool = var_766_bool;
	return 8;
}
EMIT "Stack[-3] = 0";


func_1108(var_0_cvector, var_5_bool, var_431_bool)
{
	var_432_object = Obj(); var_433_bool = 0; var_434_float = 0; var_435_cvector = CVector(0,0,0); var_436_cvector = CVector(0,0,0); var_437_object = Obj(); var_438_bool = 0; var_439_float = 0; var_440_cvector = CVector(0,0,0); var_441_cvector = CVector(0,0,0);
	GetScene(var_437_object);
	var_438_bool = 0;
	
Label_1112:
	var_442_cvector = CVector(0,0,0); var_443_object = Obj();
	var_443_object = var_0_cvector;
	func_2692(var_442_cvector, var_443_object);
	var_448_int = -var_442_cvector;
	FindDirLength(var_439_float, var_448_int, var_5_bool);
	var_449_bool = var_439_float < var_5_bool;
	if(var_449_bool != 0) {
	} else {
		Face(var_0_cvector);
		PlayAnimation("all", "bjump");
		@@@var_0_cvector:GetPFPosition(var_440_cvector);
		GetPFPosition(var_441_cvector);
		WaitForAnimEnd();
		func_1196(var_441_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_438_bool = 1;
		var_453_bool = 0;
		func_1058(var_441_cvector, var_453_bool);
		var_454_bool = var_453_bool == 0; //@nz
		if(var_454_bool != 0) {
			goto Label_1150;
		}
		goto Label_1112;
	}
Label_1150:
	var_438_bool = var_431_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1627(var_0_cvector, var_1_cvector, var_688_bool, var_689_object, var_690_float, var_691_float, var_692_bool, var_693_bool)
{
	var_694_bool = 0; var_695_bool = 0; var_696_object = Obj(); var_697_cvector = CVector(0,0,0); var_698_cvector = CVector(0,0,0); var_699_cvector = CVector(0,0,0); var_700_float = 0; var_701_object = Obj(); var_702_bool = 0; var_703_bool = 0; var_704_object = Obj(); var_705_cvector = CVector(0,0,0); var_706_cvector = CVector(0,0,0); var_707_cvector = CVector(0,0,0); var_708_float = 0; var_709_object = Obj();
	var_0_cvector = false;
	var_1_cvector = var_689_object;
	var_693_bool = var_703_bool;
	
Label_1631:
	var_710_bool = 0; var_711_object = Obj();
	var_689_object = var_711_object;
	func_1767(var_710_bool, var_711_object);
	var_714_bool = var_710_bool == 0; //@nz
	if(var_714_bool != 0) {
		var_688_bool = 0;
		return 16;
	}
	@@var_689_object:GetPosition(var_705_cvector);
	GetPosition(var_706_cvector);
	var_707_cvector = var_705_cvector - var_706_cvector;
	var_708_float = var_707_cvector | var_707_cvector;
	var_715_bool = 0;
	var_715_bool = 0;
	var_717_bool = var_691_float > (int)0;
	if(var_717_bool != 0) {
		var_718_float = var_691_float * var_691_float;
		var_719_bool = var_708_float > var_718_float;
		if(var_719_bool != 0) {
			var_715_bool = 1;
		}
	}
	if(var_715_bool != 0) {
		Stop();
		var_688_bool = 0;
		return 16;
	}
	var_720_float = var_690_float * var_690_float;
	var_721_bool = var_708_float > var_720_float;
	if(var_721_bool != 0) {
		@@var_689_object:GetPFPosition(var_705_cvector);
		FindPathTo(var_709_object, var_705_cvector);
		var_722_bool = var_709_object != 0; //@nn
		if(var_722_bool != 0) {
			var_709_object = var_704_object;
			var_709_object = 0;
		}
		var_723_bool = var_704_object != 0; //@nn
		if(var_723_bool != 0) {
			var_724_bool = var_703_bool;
			if(var_724_bool == 0) goto Label_1680;
			var_703_bool = 0;
			RotatePath(var_704_object, var_702_bool);
			var_725_bool = var_702_bool == 0; //@nz
			if(var_725_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_728_string = "";
				func_1774(var_728_string);
				var_729_string = "";
				func_1776(var_729_string);
				FollowPath(var_704_object, var_692_bool, var_702_bool, var_728_string, var_729_string);
				var_730_bool = var_702_bool == 0; //@nz
				if(var_730_bool != 0) {
					var_731_cvector = var_0_cvector;
					if(var_731_cvector != 0) {
						var_704_object = 0;
						goto Label_1727;
					EMIT "GOTO 0x6a4";
					}
				} else {
					var_704_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_702_bool);
					var_734_bool = var_702_bool == 0; //@nz
					if(var_734_bool != 0) {
						var_735_cvector = var_0_cvector;
						if(var_735_cvector != 0) {
							var_704_object = 0;
							goto Label_1727;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1727;
	}
			var_709_object = 0;
			goto Label_1725;

		Label_1725:
			var_704_object = 0;

		}
		goto Label_1631;
	}
Label_1727:
	var_688_bool = !var_0_cvector;
	return 16;
	
}


func_3168(var_63_float)
{
	var_64_object = Obj(); var_65_object = Obj();
	CreateFloatVector(var_65_object);
	@@var_65_object:add(var_63_float);
	SendWorldWndMessage((int)16, var_65_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3178(var_216_object)
{
	var_217_bool = 0; var_218_bool = 0;
	IsPlayerActor(var_216_object, var_218_bool);
	var_219_bool = var_218_bool;
	if(var_219_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_3187(var_861_string, var_862_int)
{
	var_863_string = ""; var_864_string = "";
	var_865_int = var_862_int;
	if(var_865_int != 0) {
		"idle" = "idle" + var_862_int;
	}
	var_864_string = var_861_string;
	return 2;
}


func_2678(var_539_string, var_540_int)
{
	var_542_bool = var_540_int == (int)2;
	if(var_542_bool != 0) {
		var_539_string = "fire";
		return 0;
	EMIT "GOTO 0xa82";
	}
	var_544_bool = var_540_int == (int)1;
	if(var_544_bool != 0) {
		var_539_string = "bullet";
		return 0;
	}
	var_539_string = "phys";
	return 0;
}


func_3194(var_855_int)
{
	var_856_int = 0; var_857_bool = 0; var_858_int = 0; var_859_bool = 0;
	var_858_int = 0;
	
Label_3196:
	var_861_string = ""; var_862_int = 0;
	var_858_int = var_862_int;
	func_3187(var_861_string, var_862_int);
	HasAnimation(var_859_bool, "all", var_861_string);
	var_866_bool = var_859_bool == 0; //@nz
	if(var_866_bool != 0) {
	} else {
		var_858_int = var_858_int + (int)1;
		goto Label_3196;
	}
	var_858_int = var_855_int;
	return 4;
	
}


func_1153(var_0_cvector, var_360_bool)
{
	var_361_bool = 0; var_362_bool = 0;
	var_365_bool = IsFuncExist(var_0_cvector, "IsAttacking", (int)1);
	if(var_365_bool != 0) {
		@@@var_0_cvector:IsAttacking(var_362_bool);
		var_362_bool = var_360_bool;
		return 2;
	}
	var_360_bool = 0;
	return 2;
}


func_2692(var_442_cvector, var_443_object)
{
	var_444_cvector = CVector(0,0,0); var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); var_447_cvector = CVector(0,0,0);
	GetPosition(var_446_cvector);
	@@var_443_object:GetPosition(var_447_cvector);
	var_442_cvector = var_447_cvector - var_446_cvector;
	return 4;
}


func_3211(var_25_int)
{
	var_26_int = 0; var_27_int = 0;
	GetVariable("branch", var_27_int);
	var_27_int = var_25_int;
	return 2;
}


func_1164(var_2_object, var_6_bool)
{
	var_477_float = 0; var_478_int = 0; var_479_float = 0; var_480_int = 0;
	var_481_bool = var_2_object == 0; //@nz
	if(var_481_bool != 0) {
		return 4;
	}
	var_482_bool = var_6_bool;
	if(var_482_bool != 0) {
		var_6_bool = var_6_bool + (int)-1;
		var_485_bool = var_6_bool > (int)0;
		if(var_485_bool != 0) {
			return 4;
		}
	}
	rand(var_479_float);
	var_486_float = 0;
	func_1212(var_486_float);
	var_487_bool = var_479_float < var_486_float;
	if(var_487_bool != 0) {
		irand(var_480_int, var_2_object);
		var_480_int = var_480_int + (int)1;
		var_490_int = "attack" + var_480_int;
		Speak(var_490_int);
		var_491_int = 0;
		func_1210(var_491_int);
		var_6_bool = var_491_int;
	}
	return 4;
}


func_2699(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj();
	FindActor(var_57_object, "player");
	var_57_object = var_55_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3217(var_24_object)
{
	var_25_int = 0;
	func_3211(var_25_int);
	var_30_bool = var_25_int == (int)1;
	if(var_30_bool != 0) {
		WorkWithCorpse(var_24_object);
	} else {
		Barter(var_24_object);
	}
	return 0;
	
}


func_2706(var_258_bool, var_259_object)
{
	var_260_bool = 0; var_261_bool = 0;
	IsPlayerActor(var_259_object, var_261_bool);
	var_261_bool = var_258_bool;
	return 2;
}


func_2196(var_778_bool, var_779_cvector, var_780_cvector, var_781_bool)
{
	var_782_float = GetByIndex(var_779_cvector, 1);
	var_782_float = var_782_float + (int)30;
	SetByIndex(var_779_cvector, 1) = var_782_float;
	var_784_bool = 0; var_785_cvector = CVector(0,0,0); var_786_cvector = CVector(0,0,0); var_787_float = 0; var_788_float = 0; var_789_bool = 0; var_790_bool = 0;
	var_779_cvector = var_785_cvector;
	var_780_cvector = var_786_cvector;
	var_781_bool = var_789_bool;
	func_2222(var_781_bool, var_784_bool, var_785_cvector, var_786_cvector, (float)100, (float)4000, var_789_bool, (bool)1);
	var_784_bool = var_778_bool;
	return 0;
}


func_2711(var_202_bool, var_203_object, var_204_string)
{
	var_205_bool = 0; var_206_bool = 0;
	var_209_bool = IsFuncExist(var_203_object, "HasProperty", (int)2);
	var_210_bool = var_209_bool == 0; //@nz
	if(var_210_bool != 0) {
		var_202_bool = 0;
		return 2;
	}
	@@var_203_object:HasProperty(var_204_string, var_206_bool);
	var_206_bool = var_202_bool;
	return 2;
}


func_2723(var_67_bool, var_68_object, var_69_string, var_70_float, var_71_float, var_72_float)
{
	var_73_float = 0; var_74_float = 0;
	var_75_bool = 0; var_76_object = Obj(); var_77_string = "";
	var_68_object = var_76_object;
	var_69_string = var_77_string;
	func_2711(var_75_bool, var_76_object, var_77_string);
	var_84_bool = var_75_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_67_bool = 0;
		return 2;
	}
	@@var_68_object:GetProperty(var_69_string, var_74_float);
	var_85_float = 0; var_86_float = 0; var_87_float = 0; var_88_float = 0;
	var_86_float = var_74_float + var_70_float;
	var_71_float = var_87_float;
	var_72_float = var_88_float;
	func_3100(var_85_float, var_86_float, var_87_float, var_88_float);
	@@var_68_object:SetProperty(var_69_string, var_85_float);
	var_67_bool = 1;
	return 2;
}


func_3238(var_22_bool, var_23_object, var_24_string)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0;
	var_41_object = Obj();
	func_3077(var_41_object);
	var_44_bool = var_23_object == var_41_object;
	if(var_44_bool != 0) {
		var_22_bool = 0;
		return 16;
	}
	var_45_string = "";
	func_3636(var_45_string);
	var_46_bool = var_24_string == var_45_string;
	if(var_46_bool != 0) {
		var_47_bool = 0; var_48_object = Obj();
		var_23_object = var_48_object;
		func_3478(var_47_bool, var_48_object);
		if(var_47_bool != 0) {
			var_22_bool = 1;
			return 16;
		}
	} else {
		var_55_string = "";
		func_3634(var_55_string);
		var_56_bool = var_24_string == var_55_string;
		if(var_56_bool != 0) {
			@@var_23_object:GetPosition(var_33_cvector);
			GetPosition(var_34_cvector);
			var_35_cvector = var_33_cvector - var_34_cvector;
			var_36_float = var_35_cvector | var_35_cvector;
			var_58_bool = var_36_float < (float)4000000.0;
			if(var_58_bool != 0) {
				var_59_bool = 0; var_60_object = Obj();
				var_23_object = var_60_object;
				func_3514(var_59_bool, var_60_object);
				if(var_59_bool != 0) {
					var_22_bool = 1;
					return 16;
				}
			}
			goto Label_3310;
		}
		var_68_bool = var_24_string == "player_shot";
		if(var_68_bool == 0) goto Label_3310;
		@@var_23_object:GetPosition(var_37_cvector);
		GetPosition(var_38_cvector);
		var_39_cvector = var_37_cvector - var_38_cvector;
		var_40_float = var_39_cvector | var_39_cvector;
		var_70_bool = var_40_float < (float)360000.0;
		if(var_70_bool != 0) {
			var_71_bool = 0; var_72_object = Obj();
			var_23_object = var_72_object;
			func_3514(var_71_bool, var_72_object);
			if(var_71_bool != 0) {
				var_22_bool = 1;
				return 16;
			}
		}
		var_74_bool = var_40_float < (float)12250000.0;
		if(var_74_bool == 0) goto Label_3310;
		var_75_bool = 0; var_76_object = Obj();
		var_23_object = var_76_object;
		func_3478(var_75_bool, var_76_object);
		if(var_75_bool == 0) goto Label_3310;
		var_22_bool = 1;
		return 16;
	}
Label_3310:
	var_22_bool = 0;
	return 16;
	
}


func_1196(var_0_cvector)
{
	var_216_object = Obj();
	var_216_object = var_0_cvector;
	func_3178(var_216_object);
	return 0;
}


func_2220(var_807_bool)
{
	var_807_bool = 1;
	return 0;
}


func_2222(var_0_cvector, var_784_bool, var_785_cvector, var_786_cvector, var_787_float, var_788_float, var_789_bool, var_790_bool)
{
	var_791_bool = 0; var_792_bool = 0; var_793_object = Obj(); var_794_cvector = CVector(0,0,0); var_795_cvector = CVector(0,0,0); var_796_cvector = CVector(0,0,0); var_797_float = 0; var_798_object = Obj(); var_799_bool = 0; var_800_bool = 0; var_801_object = Obj(); var_802_cvector = CVector(0,0,0); var_803_cvector = CVector(0,0,0); var_804_cvector = CVector(0,0,0); var_805_float = 0; var_806_object = Obj();
	var_0_cvector = false;
	var_790_bool = var_800_bool;
	
Label_2225:
	var_807_bool = 0;
	func_2220(var_807_bool);
	var_808_bool = var_807_bool == 0; //@nz
	if(var_808_bool != 0) {
		var_784_bool = 0;
		return 16;
	}
	var_785_cvector = var_802_cvector;
	GetPosition(var_803_cvector);
	var_804_cvector = var_802_cvector - var_803_cvector;
	var_805_float = var_804_cvector | var_804_cvector;
	var_809_bool = 0;
	var_809_bool = 0;
	var_811_bool = var_788_float > (int)0;
	if(var_811_bool != 0) {
		var_812_float = var_788_float * var_788_float;
		var_813_bool = var_805_float > var_812_float;
		if(var_813_bool != 0) {
			var_809_bool = 1;
		}
	}
	if(var_809_bool != 0) {
		Stop();
		var_784_bool = 0;
		return 16;
	}
	var_814_float = var_787_float * var_787_float;
	var_815_bool = var_805_float > var_814_float;
	if(var_815_bool != 0) {
		FindPathTo(var_806_object, var_802_cvector);
		var_816_bool = var_806_object != 0; //@nn
		if(var_816_bool != 0) {
			var_806_object = var_801_object;
			var_806_object = 0;
		}
		var_817_bool = var_801_object != 0; //@nn
		if(var_817_bool != 0) {
			var_818_bool = var_800_bool;
			if(var_818_bool == 0) goto Label_2270;
			var_800_bool = 0;
			RotatePath(var_801_object, var_799_bool);
			var_819_bool = var_799_bool == 0; //@nz
			if(var_819_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_825_string = "";
				func_2362(var_825_string);
				var_826_string = "";
				func_2364(var_826_string);
				FollowPath(var_801_object, var_789_bool, var_799_bool, var_825_string, var_826_string);
				var_827_bool = var_799_bool == 0; //@nz
				if(var_827_bool != 0) {
					var_828_cvector = var_0_cvector;
					if(var_828_cvector != 0) {
						var_801_object = 0;
						goto Label_2317;
					EMIT "GOTO 0x8f2";
					}
				} else {
					var_801_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_799_bool);
					var_831_bool = var_799_bool == 0; //@nz
					if(var_831_bool != 0) {
						var_832_cvector = var_0_cvector;
						if(var_832_cvector != 0) {
							var_801_object = 0;
							goto Label_2317;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_2317;
	}
			var_806_object = 0;
			goto Label_2315;

		Label_2315:
			var_801_object = 0;

		}
		goto Label_2225;
	}
Label_2317:
	var_820_bool = var_0_cvector == 0; //@nz
	if(var_820_bool != 0) {
		var_821_float = GetByIndex(var_786_cvector, 0);
		var_822_float = GetByIndex(var_786_cvector, 2);
		RotateAsync(var_821_float, var_822_float);
	}
	var_784_bool = !var_0_cvector;
	return 16;
	
}


func_1201()
{
	var_366_string = "";
	func_3036("attack_stay");
	return 0;
}


func_1206()
{
	return 0;
}


func_1208(var_603_bool)
{
	var_603_bool = 1;
	return 0;
}


func_2745(var_511_float, var_512_object, var_513_float, var_514_int)
{
	var_518_int = 0; var_519_string = ""; var_520_int = 0; var_521_float = 0; var_522_float = 0; var_523_float = 0; var_524_int = 0; var_525_string = ""; var_526_int = 0; var_527_float = 0; var_528_float = 0; var_529_float = 0;
	var_530_bool = 0; var_531_object = Obj(); var_532_string = "";
	var_512_object = var_531_object;
	func_2711(var_530_bool, var_531_object, "health");
	var_533_bool = var_530_bool == 0; //@nz
	if(var_533_bool != 0) {
		var_511_float = 0.0;
		return 12;
	}
	var_534_bool = 0; var_535_object = Obj(); var_536_string = "";
	var_512_object = var_535_object;
	func_2711(var_534_bool, var_535_object, "armor");
	var_537_bool = var_534_bool == 0; //@nz
	if(var_537_bool != 0) {
		var_524_int = 0;
	} else {
			@@var_512_object:GetProperty("armor", var_524_int);
	}
	var_539_string = ""; var_540_int = 0;
	var_514_int = var_540_int;
	func_2678(var_539_string, var_540_int);
	var_525_string = "armor_" + var_539_string;
	var_545_bool = 0; var_546_object = Obj(); var_547_string = "";
	var_512_object = var_546_object;
	var_525_string = var_547_string;
	func_2711(var_545_bool, var_546_object, var_547_string);
	var_548_bool = var_545_bool == 0; //@nz
	if(var_548_bool != 0) {
		var_526_int = 0;
	} else {
		@@var_512_object:GetProperty(var_525_string, var_526_int);

	}
	var_549_float = 0; var_550_float = 0; var_551_float = 0;
	var_552_int = var_524_int + var_526_int;
	var_550_float = var_552_int / (float)100.0;
	func_3093(var_549_float, var_550_float, (float)1);
	var_549_float = var_527_float;
	@@var_512_object:GetProperty("health", var_528_float);
	var_557_int = (int)1 - var_527_float;
	var_529_float = var_513_float * var_557_int;
	var_559_float = 0; var_560_float = 0; var_561_float = 0; var_562_float = 0;
	var_560_float = var_528_float - var_529_float;
	func_3100(var_559_float, var_560_float, (float)0, (float)1);
	@@var_512_object:SetProperty("health", var_559_float);
	var_565_bool = 0; var_566_object = Obj();
	var_512_object = var_566_object;
	func_2706(var_565_bool, var_566_object);
	if(var_565_bool != 0) {
		var_567_float = 0;
		var_567_float = -var_529_float;
		func_3151(var_567_float);
	}
	var_529_float = var_511_float;
	return 12;
	
}


func_1210(var_491_int)
{
	var_491_int = 1;
	return 0;
}


func_1212(var_486_float)
{
	var_486_float = 0.5;
	return 0;
}


func_1214(var_3_int, var_223_bool, var_224_object, var_225_float, var_226_float, var_227_bool, var_228_bool)
{
	var_233_bool = 0; var_234_bool = 0;
	var_3_int = var_224_object;
	SetTimer((int)2, (int)2);
	var_237_bool = 0; var_238_object = Obj(); var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_bool = 0;
	var_224_object = var_238_object;
	var_225_float = var_239_float;
	var_226_float = var_240_float;
	var_227_bool = var_241_bool;
	var_228_bool = var_242_bool;
	func_1263(var_234_bool, var_237_bool, var_238_object, var_239_float, var_240_float, var_241_bool, var_242_bool);
	var_237_bool = var_234_bool;
	KillTimer((int)2);
	var_234_bool = var_223_bool;
	return 2;
}


func_1729(var_0_cvector, var_1_cvector, var_24_int)
{
	var_26_bool = var_24_int != (int)0;
	if(var_26_bool != 0) {
		return 0;
	}
	var_27_bool = 0; var_28_object = Obj();
	var_28_object = var_1_cvector;
	func_1767(var_27_bool, var_28_object);
	var_63_bool = var_27_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_0_cvector = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1751(var_0_cvector)
{
	var_0_cvector = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1767(var_710_bool, var_711_object)
{
	var_712_bool = 0; var_713_object = Obj();
	var_711_object = var_713_object;
	func_2859(var_712_bool, var_713_object);
	var_712_bool = var_710_bool;
	return 0;
}


func_1774(var_728_string)
{
	var_728_string = "walk";
	return 0;
}


func_1263(var_2_object, var_237_bool, var_238_object, var_239_float, var_240_float, var_241_bool, var_242_bool)
{
	var_243_bool = 0; var_244_bool = 0; var_245_bool = 0; var_246_bool = 0;
	var_247_object = Obj();
	var_238_object = var_247_object;
	func_3178(var_247_object);
	SetTimer((int)1, (int)5);
	CanSee(var_245_bool, var_238_object);
	var_250_bool = var_245_bool;
	if(var_250_bool != 0) {
		var_2_object = true;
		var_251_object = Obj();
		var_238_object = var_251_object;
		func_3025(var_251_object);
	} else {
		var_2_object = false;
	}
	var_258_bool = 0; var_259_object = Obj();
	var_238_object = var_259_object;
	func_2706(var_258_bool, var_259_object);
	if(var_258_bool != 0) {
		var_262_object = Obj();
		func_3077(var_262_object);
		SendPlayerEnemy(var_238_object, var_262_object);
	}
	var_263_bool = 0; var_264_object = Obj(); var_265_float = 0; var_266_float = 0; var_267_bool = 0; var_268_bool = 0;
	var_238_object = var_264_object;
	var_239_float = var_265_float;
	var_240_float = var_266_float;
	var_241_bool = var_267_bool;
	var_242_bool = var_268_bool;
	func_1368(var_245_bool, var_246_bool, var_263_bool, var_264_object, var_265_float, var_266_float, var_267_bool, var_268_bool);
	var_263_bool = var_246_bool;
	var_314_object = var_2_object;
	if(var_314_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_246_bool = var_237_bool;
	return 4;
	
}


func_3312(var_21_bool, var_22_object)
{
	var_23_bool = 0;
	var_23_bool = 0;
	var_26_bool = IsFuncExist(var_22_object, "IsDead", (int)1);
	if(var_26_bool != 0) {
		var_27_bool = 0; var_28_object = Obj();
		var_22_object = var_28_object;
		func_2818(var_27_bool, var_28_object);
		if(var_27_bool != 0) {
			var_23_bool = 1;
		}
	}
	if(var_23_bool != 0) {
		var_31_bool = 0; var_32_object = Obj(); var_33_string = "";
		var_22_object = var_32_object;
		func_3636("");
		var_34_string = var_33_string;
		func_2711(var_31_bool, var_32_object, var_33_string);
		if(var_31_bool != 0) {
			var_21_bool = 0;
			return 0;
		}
		var_41_string = "";
		func_3636(var_41_string);
		@@var_22_object:SetProperty(var_41_string, (int)1);
		var_43_bool = 0; var_44_object = Obj();
		var_22_object = var_44_object;
		func_3460(var_43_bool, var_44_object);
		var_43_bool = var_21_bool;
		return 0;
	EMIT "GOTO 0xd21";
	}
	var_51_bool = 0; var_52_object = Obj();
	var_22_object = var_52_object;
	func_2706(var_51_bool, var_52_object);
	if(var_51_bool != 0) {
		var_55_bool = 0; var_56_object = Obj();
		var_22_object = var_56_object;
		func_3514(var_55_bool, var_56_object);
		var_55_bool = var_21_bool;
		return 0;
	}
	var_21_bool = 0;
	return 0;
}


func_1776(var_729_string)
{
	var_729_string = "run";
	return 0;
}


func_1778()
{
	func_1833();
	return 0;
}


func_754(var_4_int)
{
	Stop();
	StopAnimation();
	StopGroup0();
	var_4_int = true;
	return 0;
}


func_762(var_1_cvector, var_2_object, var_5_bool)
{
	var_146_bool = 0; var_147_bool = 0; var_148_cvector = CVector(0,0,0); var_149_bool = 0; var_150_bool = 0; var_151_cvector = CVector(0,0,0);
	var_1_cvector = 0;
	
Label_764:
	var_155_int = var_1_cvector + (int)1;
	var_156_int = "attack_begin" + var_155_int;
	HasAnimation(var_149_bool, "all", var_156_int);
	var_157_bool = var_149_bool == 0; //@nz
	if(var_157_bool != 0) {
	} else {
			var_1_cvector = var_1_cvector + (int)1;
			goto Label_764;
	}
	var_2_object = 0;
	
Label_778:
	var_160_int = var_2_object + (int)1;
	var_161_int = "attack" + var_160_int;
	IsExisting3DSound(var_150_bool, var_161_int);
	var_162_bool = var_150_bool == 0; //@nz
	if(var_162_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_778;

	}
	GetAnimationOffset(var_151_cvector, "all", "bjump");
	var_165_float = GetByIndex(var_151_cvector, 2);
	var_5_bool = -var_165_float;
	return 6;
	
}


func_2818(var_195_bool, var_196_object)
{
	var_197_bool = 0; var_198_bool = 0;
	@@var_196_object:IsDead(var_198_bool);
	var_198_bool = var_195_bool;
	return 2;
}


func_2823(var_184_bool, var_185_object)
{
	var_186_object = Obj(); var_187_object = Obj(); var_188_object = Obj(); var_189_object = Obj();
	var_190_bool = var_185_object == 0; //@ne
	if(var_190_bool != 0) {
		var_184_bool = 0;
		return 4;
	}
	var_191_bool = 0;
	var_191_bool = 0;
	var_194_bool = IsFuncExist(var_185_object, "IsDead", (int)1);
	if(var_194_bool != 0) {
		var_195_bool = 0; var_196_object = Obj();
		var_185_object = var_196_object;
		func_2818(var_195_bool, var_196_object);
		if(var_195_bool != 0) {
			var_191_bool = 1;
		}
	}
	if(var_191_bool != 0) {
		var_184_bool = 0;
		return 4;
	}
	GetScene(var_188_object);
	var_199_bool = var_188_object == 0; //@ne
	if(var_199_bool != 0) {
		var_184_bool = 0;
		return 4;
	}
	@@var_185_object:GetScene(var_189_object);
	var_200_bool = var_188_object != var_189_object;
	if(var_200_bool != 0) {
		var_184_bool = 0;
		return 4;
	}
	var_184_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_797(var_0_cvector, var_497_float, var_498_int)
{
	var_499_object = Obj(); var_500_float = 0; var_501_float = 0; var_502_object = Obj(); var_503_float = 0; var_504_float = 0;
	var_506_float = var_497_float * (float)0.8999999761581421;
	GetVictim(var_506_float, var_502_object);
	ReportAttack(var_0_cvector);
	var_507_bool = var_502_object == var_0_cvector;
	if(var_507_bool != 0) {
		var_508_float = 0; var_509_object = Obj(); var_510_int = 0;
		var_502_object = var_509_object;
		var_498_int = var_510_int;
		func_451(var_510_int);
		var_508_float = var_503_float;
		var_511_float = 0; var_512_object = Obj(); var_513_float = 0; var_514_int = 0;
		var_502_object = var_512_object;
		var_503_float = var_513_float;
		var_515_int = 0; var_516_object = Obj(); var_517_int = 0;
		var_502_object = var_516_object;
		var_498_int = var_517_int;
		func_454(var_517_int);
		var_515_int = var_514_int;
		func_2745(var_511_float, var_512_object, var_513_float, var_514_int);
		var_511_float = var_504_float;
		var_576_int = 0;
		func_457(var_576_int);
		ReportHit(var_0_cvector, var_576_int, var_504_float, var_503_float);
		var_577_object = Obj(); var_578_float = 0;
		var_502_object = var_577_object;
		var_504_float = var_578_float;
		func_1206();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1312(var_1_cvector, var_27_int)
{
	var_29_bool = var_27_int == (int)1;
	if(var_29_bool != 0) {
		var_30_object = Obj();
		var_30_object = var_1_cvector;
		func_3178(var_30_object);
	} else {
		var_35_int = 0;
		var_27_int = var_35_int;
		func_1470(var_22_object, var_27_int, var_35_int);
	}
	return 0;
	
}


func_3363(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_object = var_24_object;
	func_2706(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		var_27_bool = 0; var_28_object = Obj();
		var_22_object = var_28_object;
		func_3496(var_27_bool, var_28_object);
		var_27_bool = var_21_bool;
		return 0;
	}
	var_21_bool = 0;
	return 0;
}


func_1833()
{
	var_839_int = 0; var_840_int = 0; var_841_int = 0; var_842_int = 0; var_843_bool = 0; var_844_float = 0; var_845_bool = 0; var_846_int = 0; var_847_int = 0; var_848_int = 0; var_849_int = 0; var_850_bool = 0; var_851_float = 0; var_852_bool = 0;
	WaitForAnimEnd();
	var_853_bool = 0;
	func_3020(var_853_bool);
	var_854_bool = var_853_bool == 0; //@nz
	if(var_854_bool != 0) {
		return 14;
	}
	func_3194((int)0);
	var_855_int = var_846_int;
	var_847_int = 0;
	
Label_1847:
	var_868_bool = 0;
	var_868_bool = 0;
	var_870_bool = var_847_int < (int)5;
	if(var_870_bool != 0) {
		var_871_bool = 0;
		func_3020(var_871_bool);
		if(var_871_bool != 0) {
			var_868_bool = 1;
		}
	}
	if(var_868_bool != 0) {
		irand(var_848_int, (int)3);
		var_874_bool = var_848_int == (int)0;
		if(var_874_bool != 0) {
			var_875_int = var_846_int;
			if(var_875_int == 0) goto Label_1880;
			irand(var_849_int, var_846_int);
			var_877_string = ""; var_878_int = 0;
			var_849_int = var_878_int;
			func_3187(var_877_string, var_878_int);
			PlayAnimation("all", var_877_string);
			WaitForAnimEnd(var_850_bool);
			var_879_bool = var_850_bool == 0; //@nz
			if(var_879_bool != 0) {
			} else {
		} else {
				var_884_bool = var_848_int == (int)1;
				if(var_884_bool != 0) {
					rand(var_851_float, (int)4);
					var_887_int = var_851_float + (int)1;
					Sleep(var_887_int, var_852_bool);
					var_888_bool = var_852_bool == 0; //@nz
					if(var_888_bool != 0) {
						goto Label_1909;
					}
					goto Label_1898;
				}
				var_889_int = var_847_int;
				if(var_889_int == 0) goto Label_1898;
				goto Label_1909;
		}
		Label_1898:
			var_880_bool = 0;
			func_1912(var_880_bool);
			var_881_bool = var_880_bool == 0; //@nz
			if(var_881_bool != 0) {
				goto Label_1909;
			}
			ResetAAS();
			var_847_int = var_847_int + (int)1;
			goto Label_1847;

		}
	}
Label_1909:
	ResetAAS();
	return 14;
	
}


func_2346(var_0_cvector)
{
	var_0_cvector = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2859(var_180_bool, var_181_object)
{
	var_182_int = 0; var_183_int = 0;
	var_184_bool = 0; var_185_object = Obj();
	var_181_object = var_185_object;
	func_2823(var_184_bool, var_185_object);
	var_201_bool = var_184_bool == 0; //@nz
	if(var_201_bool != 0) {
		var_180_bool = 0;
		return 2;
	}
	var_202_bool = 0; var_203_object = Obj(); var_204_string = "";
	var_181_object = var_203_object;
	func_2711(var_202_bool, var_203_object, "noaccess");
	var_211_bool = var_202_bool == 0; //@nz
	if(var_211_bool != 0) {
		var_180_bool = 1;
		return 2;
	}
	@@var_181_object:GetProperty("noaccess", var_183_int);
	var_180_bool = var_183_int == (int)0;
	return 2;
}


func_1326(var_2_object)
{
	KillTimer((int)1);
	var_22_object = var_2_object;
	if(var_22_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1492(var_20_bool);
	return 0;
}


func_3377(var_42_bool)
{
	var_43_object = Obj(); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_float = 0; var_49_int = 0; var_50_object = Obj(); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_float = 0; var_56_int = 0;
	GetMainOutdoorScene(var_50_object);
	GetPosition(var_51_cvector);
	var_55_float = 4000000;
	var_56_int = 0;
	var_57_int = GlobalVars[1];
	GlobalVars[1] = (int)0;
	
Label_3387:
	if((bool)1 != 0) {
		var_59_string = "";
		func_3632(var_59_string);
		var_60_int = GlobalVars[1];
		var_62_int = var_60_int + (int)1;
		var_63_int = var_59_string + var_62_int;
		@@var_50_object:GetLocator(var_63_int, var_54_bool, var_52_cvector, var_53_cvector);
		var_64_bool = var_54_bool == 0; //@nz
		if(var_64_bool != 0) {
		} else {
			var_68_int = GlobalVars[1];
			var_68_int = var_68_int + (int)1;
			GlobalVars[1] = var_68_int;
			goto Label_3387;
		}
	}
	var_66_int = GlobalVars[1];
	var_67_int = "Pantrol point count: " + var_66_int;
	Trace(var_67_int);
	var_42_bool = 1;
	return 14;
	
}
EMIT "Stack[-7] = 0";


func_2362(var_825_string)
{
	var_825_string = "walk";
	return 0;
}


func_2364(var_826_string)
{
	var_826_string = "run";
	return 0;
}


func_2366(var_644_int)
{
	var_646_int = 0; var_647_int = 0;
	var_647_int = 0;
	
Label_2368:
	var_648_bool = var_647_int < var_644_int;
	if(var_648_bool != 0) {
		var_649_string = "";
		func_2436("hunt");
		var_659_cvector = var_0_cvector;
		if(var_659_cvector != 0) {
		} else {
			var_647_int = var_647_int + (int)1;
			goto Label_2368;
		}
	}
	return 2;
	
}


func_2883(var_37_object)
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


func_836(var_0_cvector, var_1_cvector, var_462_bool, var_463_float)
{
	var_464_int = 0; var_465_bool = 0; var_466_int = 0; var_467_string = ""; var_468_int = 0; var_469_bool = 0; var_470_int = 0; var_471_string = "";
	func_1196(var_471_string);
	irand(var_468_int, var_1_cvector);
	var_468_int = var_468_int + (int)1;
	Face(var_0_cvector);
	SetAttackState((bool)1);
	var_476_int = "attack_begin" + var_468_int;
	PlayAnimation("all", var_476_int);
	WaitForAnimEnd();
	func_1164(var_470_int, var_471_string);
	var_492_bool = 0;
	var_492_bool = 1;
	var_493_bool = 0; var_494_object = Obj();
	var_494_object = var_0_cvector;
	func_2859(var_493_bool, var_494_object);
	var_495_bool = var_493_bool == 0; //@nz
	if(var_495_bool != 1) {
		var_496_int = var_4_int;
		if(var_496_int != 1) {
			var_492_bool = 0;
		}
	}
	if(var_492_bool != 0) {
		StopAsync();
		var_462_bool = 0;
		return 8;
	}
	var_497_float = 0; var_498_int = 0;
	var_463_float = var_497_float;
	var_468_int = var_498_int;
	func_797(var_471_string, var_497_float, var_498_int);
	var_581_int = "attack_middle" + var_468_int;
	HasAnimation(var_469_bool, "all", var_581_int);
	var_582_bool = var_469_bool;
	if(var_582_bool != 0) {
		var_585_int = "attack_middle" + var_468_int;
		PlayAnimation("all", var_585_int);
		WaitForAnimEnd();
		func_1196(var_471_string);
		var_586_bool = 0;
		var_586_bool = 1;
		var_587_bool = 0; var_588_object = Obj();
		var_588_object = var_0_cvector;
		func_2859(var_587_bool, var_588_object);
		var_589_bool = var_587_bool == 0; //@nz
		if(var_589_bool != 1) {
			var_590_int = var_4_int;
			if(var_590_int != 1) {
				var_586_bool = 0;
			}
		}
		if(var_586_bool != 0) {
			StopAsync();
			var_462_bool = 0;
			return 8;
		}
		var_591_float = 0; var_592_int = 0;
		var_463_float = var_591_float;
		var_468_int = var_592_int;
		func_797(var_471_string, var_591_float, var_592_int);
		var_470_int = 1;

	Label_919:
		var_594_int = "attack_middle" + var_468_int;
		var_596_int = var_594_int + "_";
		var_471_string = var_596_int + var_470_int;
		HasAnimation(var_469_bool, "all", var_471_string);
		var_598_bool = var_469_bool == 0; //@nz
		if(var_598_bool != 0) {
		} else {
			PlayAnimation("all", var_471_string);
			WaitForAnimEnd();
			func_1196(var_471_string);
			var_614_bool = 0;
			var_614_bool = 1;
			var_615_bool = 0; var_616_object = Obj();
			var_616_object = var_0_cvector;
			func_2859(var_615_bool, var_616_object);
			var_617_bool = var_615_bool == 0; //@nz
			if(var_617_bool != 1) {
				var_618_int = var_4_int;
				if(var_618_int != 1) {
					var_614_bool = 0;
				}
			}
			if(var_614_bool != 0) {
				StopAsync();
				var_462_bool = 0;
				var_619_float = 0; var_620_int = 0;
				var_463_float = var_619_float;
				var_468_int = var_620_int;
				func_797(var_471_string, var_619_float, var_620_int);
				var_470_int = var_470_int + (int)1;
				goto Label_919;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_602_int = "attack_end" + var_468_int;
	PlayAnimation("all", var_602_int);
	var_603_bool = 0;
	func_1208(var_603_bool);
	if(var_603_bool != 0) {
		var_604_bool = 0; var_605_float = 0;
		func_982(var_604_bool, (float)0.75);
		StopAsync();
	}
	var_462_bool = 1;
	return 8;
	
}


func_3414(var_87_bool, var_88_int)
{
	var_89_int = GlobalVars[2];
	var_90_bool = var_88_int == var_89_int;
	if(var_90_bool != 0) {
		var_87_bool = 0;
		return 0;
	}
	var_92_bool = var_88_int == (int)0;
	if(var_92_bool != 0) {
		var_93_int = GlobalVars[3];
		var_94_int = GlobalVars[2];
		var_94_int = var_93_int;
		GlobalVars[3] = var_93_int;
		Trace("changing state to c_iStateWaitForLoad");
	} else {
		var_98_bool = var_88_int == (int)1;
		if(var_98_bool != 0) {
			Trace("changing state to c_iStateHeatHands");
			goto Label_3455;
		}
		var_101_bool = var_88_int == (int)2;
		if(var_101_bool != 0) {
			Trace("changing state to c_iStateIdle");
			goto Label_3455;
		}
		var_104_bool = var_88_int == (int)3;
		if(var_104_bool != 0) {
			Trace("changing state to c_iStatePatrol");
			goto Label_3455;
		}
		var_87_bool = 0;
		return 0;
	}
Label_3455:
	var_96_int = GlobalVars[2];
	var_88_int = var_96_int;
	GlobalVars[2] = var_96_int;
	var_87_bool = 1;
	return 0;
	
}


func_1368(var_0_cvector, var_1_cvector, var_263_bool, var_264_object, var_265_float, var_266_float, var_267_bool, var_268_bool)
{
	var_269_bool = 0; var_270_bool = 0; var_271_object = Obj(); var_272_cvector = CVector(0,0,0); var_273_cvector = CVector(0,0,0); var_274_cvector = CVector(0,0,0); var_275_float = 0; var_276_object = Obj(); var_277_bool = 0; var_278_bool = 0; var_279_object = Obj(); var_280_cvector = CVector(0,0,0); var_281_cvector = CVector(0,0,0); var_282_cvector = CVector(0,0,0); var_283_float = 0; var_284_object = Obj();
	var_0_cvector = false;
	var_1_cvector = var_264_object;
	var_268_bool = var_278_bool;
	
Label_1372:
	var_285_bool = 0; var_286_object = Obj();
	var_264_object = var_286_object;
	func_1508(var_285_bool, var_286_object);
	var_289_bool = var_285_bool == 0; //@nz
	if(var_289_bool != 0) {
		var_263_bool = 0;
		return 16;
	}
	@@var_264_object:GetPosition(var_280_cvector);
	GetPosition(var_281_cvector);
	var_282_cvector = var_280_cvector - var_281_cvector;
	var_283_float = var_282_cvector | var_282_cvector;
	var_290_bool = 0;
	var_290_bool = 0;
	var_292_bool = var_266_float > (int)0;
	if(var_292_bool != 0) {
		var_293_float = var_266_float * var_266_float;
		var_294_bool = var_283_float > var_293_float;
		if(var_294_bool != 0) {
			var_290_bool = 1;
		}
	}
	if(var_290_bool != 0) {
		Stop();
		var_263_bool = 0;
		return 16;
	}
	var_295_float = var_265_float * var_265_float;
	var_296_bool = var_283_float > var_295_float;
	if(var_296_bool != 0) {
		@@var_264_object:GetPFPosition(var_280_cvector);
		FindPathTo(var_284_object, var_280_cvector);
		var_297_bool = var_284_object != 0; //@nn
		if(var_297_bool != 0) {
			var_284_object = var_279_object;
			var_284_object = 0;
		}
		var_298_bool = var_279_object != 0; //@nn
		if(var_298_bool != 0) {
			var_299_bool = var_278_bool;
			if(var_299_bool == 0) goto Label_1421;
			var_278_bool = 0;
			RotatePath(var_279_object, var_277_bool);
			var_300_bool = var_277_bool == 0; //@nz
			if(var_300_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_303_string = "";
				func_1515(var_303_string);
				var_304_string = "";
				func_1517(var_304_string);
				FollowPath(var_279_object, var_267_bool, var_277_bool, var_303_string, var_304_string);
				var_305_bool = var_277_bool == 0; //@nz
				if(var_305_bool != 0) {
					var_306_cvector = var_0_cvector;
					if(var_306_cvector != 0) {
						var_279_object = 0;
						goto Label_1468;
					EMIT "GOTO 0x5a1";
					}
				} else {
					var_279_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_277_bool);
					var_309_bool = var_277_bool == 0; //@nz
					if(var_309_bool != 0) {
						var_310_cvector = var_0_cvector;
						if(var_310_cvector != 0) {
							var_279_object = 0;
							goto Label_1468;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1468;
	}
			var_284_object = 0;
			goto Label_1466;

		Label_1466:
			var_279_object = 0;

		}
		goto Label_1372;
	}
Label_1468:
	var_263_bool = !var_0_cvector;
	return 16;
	
}


func_2927(var_24_object, var_25_int, var_26_float)
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
		func_2692(var_54_cvector, var_55_object);
		var_54_cvector = var_53_cvector;
		func_3083(var_52_cvector, var_53_cvector);
		var_52_cvector = var_36_cvector;
		CreateVectorVector(var_37_object);
		var_38_int = 1;

	Label_2956:
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
			goto Label_2956;
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
			func_2995(var_71_float, var_72_cvector, var_73_cvector);
			return 18;
		}
		var_37_object = 0;
	}
	var_114_object = Obj();
	var_24_object = var_114_object;
	func_2883(var_114_object);
	return 18;
	
}


func_1912(var_880_bool)
{
	var_880_bool = 1;
	return 0;
}


func_1914()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1919(var_893_bool, var_894_cvector, var_895_cvector, var_896_bool)
{
	var_898_float = GetByIndex(var_894_cvector, 1);
	var_898_float = var_898_float + (int)30;
	SetByIndex(var_894_cvector, 1) = var_898_float;
	var_900_bool = 0; var_901_cvector = CVector(0,0,0); var_902_cvector = CVector(0,0,0); var_903_float = 0; var_904_float = 0; var_905_bool = 0; var_906_bool = 0;
	var_894_cvector = var_901_cvector;
	var_895_cvector = var_902_cvector;
	var_896_bool = var_905_bool;
	func_1988(var_896_bool, var_900_bool, var_901_cvector, var_902_cvector, (float)100, (float)4000, var_905_bool, (bool)1);
	var_900_bool = var_893_bool;
	return 0;
}


func_2436(var_649_string)
{
	var_650_bool = 0; var_651_bool = 0; var_652_bool = 0; var_653_bool = 0;
	WaitForAnimEnd();
	var_654_bool = 0;
	func_3020(var_654_bool);
	var_655_bool = var_654_bool == 0; //@nz
	if(var_655_bool != 0) {
		return 4;
	}
	HasAnimation(var_652_bool, "all", var_649_string);
	var_657_bool = var_652_bool == 0; //@nz
	if(var_657_bool != 0) {
		return 4;
	}
	PlayAnimation("all", var_649_string);
	WaitForAnimEnd(var_653_bool);
	return 4;
}


func_3460(var_43_bool, var_44_object)
{
	var_45_int = GlobalVars[2];
	var_47_bool = var_45_int == (int)4;
	if(var_47_bool != 0) {
		var_43_bool = 0;
		return 0;
	}
	var_48_int = GlobalVars[2];
	GlobalVars[2] = (int)4;
	Trace("changing state to c_iStateAware");
	var_50_object = GlobalVars[4];
	var_44_object = var_50_object;
	GlobalVars[4] = var_50_object;
	var_43_bool = 1;
	return 0;
}


func_3478(var_47_bool, var_48_object)
{
	var_49_int = GlobalVars[2];
	var_51_bool = var_49_int == (int)5;
	if(var_51_bool != 0) {
		var_47_bool = 0;
		return 0;
	}
	var_52_int = GlobalVars[2];
	GlobalVars[2] = (int)5;
	Trace("changing state to c_iStateSearchEnemy");
	var_54_object = GlobalVars[5];
	var_48_object = var_54_object;
	GlobalVars[5] = var_54_object;
	var_47_bool = 1;
	return 0;
}


func_2457()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2462(var_21_object)
{
	var_23_int = GlobalVars[2];
	var_24_bool = (int)1 == var_23_int;
	if(var_24_bool != 0) {
		var_25_bool = 0;
		func_3543((bool)0);
	}
	var_33_int = GlobalVars[2];
	var_34_bool = (int)3 == var_33_int;
	if(var_34_bool != 0) {
		var_35_bool = 0;
		func_3570((bool)0);
	}
	func_3642();
	var_94_object = Obj();
	var_21_object = var_94_object;
	func_2495(var_94_object);
	return 0;
}


func_3496(var_27_bool, var_28_object)
{
	var_29_int = GlobalVars[2];
	var_31_bool = var_29_int == (int)6;
	if(var_31_bool != 0) {
		var_27_bool = 0;
		return 0;
	}
	var_32_int = GlobalVars[2];
	GlobalVars[2] = (int)6;
	Trace("changing state to c_iStateHearEnemy");
	var_34_object = GlobalVars[6];
	var_28_object = var_34_object;
	GlobalVars[6] = var_34_object;
	var_27_bool = 1;
	return 0;
}


func_435(var_7_float, var_109_object)
{
	var_7_float = var_109_object;
	SetTimer((int)1, (int)1);
	var_121_object = Obj(); var_122_bool = 0; var_123_float = 0;
	var_109_object = var_121_object;
	func_504(var_114_bool, var_115_bool, var_116_float, var_117_int, var_118_object, var_109_object, var_121_object, (bool)1, (float)150.0);
	KillTimer((int)1);
	return 0;
}


func_2995(var_26_object, var_29_cvector, var_30_cvector)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj();
	GetScene(var_33_object);
	AddActorByType(var_34_object, "scripted", var_33_object, var_29_cvector, var_30_cvector, "blood_dir.xml");
	var_37_object = Obj();
	var_26_object = var_37_object;
	func_2883(var_37_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3514(var_21_bool, var_22_object)
{
	var_23_int = GlobalVars[2];
	var_25_bool = var_23_int == (int)7;
	if(var_25_bool != 0) {
		var_21_bool = 0;
		return 0;
	}
	var_26_int = GlobalVars[2];
	GlobalVars[2] = (int)7;
	Trace("changing state to c_iStateAttack");
	var_28_object = GlobalVars[7];
	var_22_object = var_28_object;
	GlobalVars[7] = var_28_object;
	var_21_bool = 1;
	return 0;
}


func_1470(var_0_cvector, var_1_cvector, var_35_int)
{
	var_37_bool = var_35_int != (int)0;
	if(var_37_bool != 0) {
		return 0;
	}
	var_38_bool = 0; var_39_object = Obj();
	var_39_object = var_1_cvector;
	func_1508(var_38_bool, var_39_object);
	var_74_bool = var_38_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_0_cvector = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2495(var_94_object)
{
	EventDisable(0);
	var_95_object = Obj();
	var_94_object = var_95_object;
	func_2520(var_95_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_2506:
	Hold();
	goto Label_2506;
}
EMIT "Return(); Pop(0)";


func_3009(var_341_object)
{
	var_342_cvector = CVector(0,0,0); var_343_cvector = CVector(0,0,0); var_344_cvector = CVector(0,0,0); var_345_cvector = CVector(0,0,0); var_346_cvector = CVector(0,0,0); var_347_cvector = CVector(0,0,0);
	@@var_341_object:GetPosition(var_345_cvector);
	GetPosition(var_346_cvector);
	var_347_cvector = var_345_cvector - var_346_cvector;
	var_348_float = GetByIndex(var_347_cvector, 0);
	var_349_float = GetByIndex(var_347_cvector, 2);
	RotateAsync(var_348_float, var_349_float);
	return 6;
}


func_1986(var_923_bool)
{
	var_923_bool = 1;
	return 0;
}


func_451(var_508_float)
{
	var_508_float = 0.10000000149011612;
	return 0;
}


func_1988(var_0_cvector, var_900_bool, var_901_cvector, var_902_cvector, var_903_float, var_904_float, var_905_bool, var_906_bool)
{
	var_907_bool = 0; var_908_bool = 0; var_909_object = Obj(); var_910_cvector = CVector(0,0,0); var_911_cvector = CVector(0,0,0); var_912_cvector = CVector(0,0,0); var_913_float = 0; var_914_object = Obj(); var_915_bool = 0; var_916_bool = 0; var_917_object = Obj(); var_918_cvector = CVector(0,0,0); var_919_cvector = CVector(0,0,0); var_920_cvector = CVector(0,0,0); var_921_float = 0; var_922_object = Obj();
	var_0_cvector = false;
	var_906_bool = var_916_bool;
	
Label_1991:
	var_923_bool = 0;
	func_1986(var_923_bool);
	var_924_bool = var_923_bool == 0; //@nz
	if(var_924_bool != 0) {
		var_900_bool = 0;
		return 16;
	}
	var_901_cvector = var_918_cvector;
	GetPosition(var_919_cvector);
	var_920_cvector = var_918_cvector - var_919_cvector;
	var_921_float = var_920_cvector | var_920_cvector;
	var_925_bool = 0;
	var_925_bool = 0;
	var_927_bool = var_904_float > (int)0;
	if(var_927_bool != 0) {
		var_928_float = var_904_float * var_904_float;
		var_929_bool = var_921_float > var_928_float;
		if(var_929_bool != 0) {
			var_925_bool = 1;
		}
	}
	if(var_925_bool != 0) {
		Stop();
		var_900_bool = 0;
		return 16;
	}
	var_930_float = var_903_float * var_903_float;
	var_931_bool = var_921_float > var_930_float;
	if(var_931_bool != 0) {
		FindPathTo(var_922_object, var_918_cvector);
		var_932_bool = var_922_object != 0; //@nn
		if(var_932_bool != 0) {
			var_922_object = var_917_object;
			var_922_object = 0;
		}
		var_933_bool = var_917_object != 0; //@nn
		if(var_933_bool != 0) {
			var_934_bool = var_916_bool;
			if(var_934_bool == 0) goto Label_2036;
			var_916_bool = 0;
			RotatePath(var_917_object, var_915_bool);
			var_935_bool = var_915_bool == 0; //@nz
			if(var_935_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_941_string = "";
				func_2128(var_941_string);
				var_942_string = "";
				func_2130(var_942_string);
				FollowPath(var_917_object, var_905_bool, var_915_bool, var_941_string, var_942_string);
				var_943_bool = var_915_bool == 0; //@nz
				if(var_943_bool != 0) {
					var_944_cvector = var_0_cvector;
					if(var_944_cvector != 0) {
						var_917_object = 0;
						goto Label_2083;
					EMIT "GOTO 0x808";
					}
				} else {
					var_917_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_915_bool);
					var_947_bool = var_915_bool == 0; //@nz
					if(var_947_bool != 0) {
						var_948_cvector = var_0_cvector;
						if(var_948_cvector != 0) {
							var_917_object = 0;
							goto Label_2083;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_2083;
	}
			var_922_object = 0;
			goto Label_2081;

		Label_2081:
			var_917_object = 0;

		}
		goto Label_1991;
	}
Label_2083:
	var_936_bool = var_0_cvector == 0; //@nz
	if(var_936_bool != 0) {
		var_937_float = GetByIndex(var_902_cvector, 0);
		var_938_float = GetByIndex(var_902_cvector, 2);
		RotateAsync(var_937_float, var_938_float);
	}
	var_900_bool = !var_0_cvector;
	return 16;
	
}


func_454(var_515_int)
{
	var_515_int = 0;
	return 0;
}


func_457(var_576_int)
{
	var_576_int = 0;
	return 0;
}


func_3532(var_995_bool)
{
	var_996_int = 0; var_997_int = 0;
	var_998_string = "";
	func_3638(var_998_string);
	var_1000_int = var_998_string + "_locked";
	GetVariable(var_1000_int, var_997_int);
	var_995_bool = var_997_int != (int)0;
	return 2;
}


func_3020(var_83_bool)
{
	var_84_bool = 0; var_85_bool = 0;
	IsLoaded(var_85_bool);
	var_85_bool = var_83_bool;
	return 2;
}


func_3025(var_251_object)
{
	var_252_float = 0; var_253_cvector = CVector(0,0,0); var_254_float = 0; var_255_cvector = CVector(0,0,0);
	@@var_251_object:GetEyesHeight(var_254_float);
	var_255_cvector = CVector(0.0, 0.0, 0.0);
	var_256_float = GetByIndex(var_255_cvector, 1);
	var_254_float = var_256_float;
	SetByIndex(var_255_cvector, 1) = var_256_float;
	LookAsync(var_251_object, "head", var_255_cvector);
	return 4;
}


func_1492(var_0_cvector)
{
	var_0_cvector = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_982(var_604_bool, var_605_float)
{
	var_606_float = 0; var_607_bool = 0; var_608_float = 0; var_609_bool = 0;
	rand(var_608_float);
	var_610_bool = var_608_float < var_605_float;
	if(var_610_bool != 0) {

	Label_987:
		IsAnimationPlaying(var_609_bool);
		var_611_bool = var_609_bool == 0; //@nz
		if(var_611_bool != 0) {
		} else {
			var_612_bool = 0;
			func_1092(var_612_bool);
			if(var_612_bool != 0) {
				var_604_bool = 1;
				sync();
				goto Label_987;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1196(var_609_bool);
	}
	goto Label_1007;
	
Label_1007:
	var_604_bool = 0;
	return 4;
	
}


func_3543(var_759_bool)
{
	var_760_string = "";
	func_3638(var_760_string);
	var_762_int = var_760_string + "_locked";
	var_763_bool = var_759_bool;
	if(var_763_bool != 0) {
		var_764_int = 1;
	} else {
		var_765_int = 0; //@pi
	}
	SetVariable(var_762_int, var_764_int);
	return 0;
	
}


func_2520(var_95_object)
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_string = ""; var_101_object = Obj(); var_102_bool = 0; var_103_bool = 0; var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_string = ""; var_111_object = Obj(); var_112_bool = 0; var_113_bool = 0; var_114_float = 0; var_115_cvector = CVector(0,0,0);
	var_116_bool = var_95_object == 0; //@ne
	if(var_116_bool != 0) {
		var_117_string = "";
		func_2611("fdie");
	} else {
		@@var_95_object:GetPosition(var_106_cvector);
		GetPosition(var_107_cvector);
		GetDirection(var_108_cvector);
		var_109_cvector = var_107_cvector - var_106_cvector;
		var_149_float = GetByIndex(var_109_cvector, 0);
		var_150_float = GetByIndex(var_108_cvector, 0);
		var_151_float = var_149_float * var_150_float;
		var_152_float = GetByIndex(var_109_cvector, 2);
		var_153_float = GetByIndex(var_108_cvector, 2);
		var_154_float = var_152_float * var_153_float;
		var_155_int = var_151_float + var_154_float;
		var_157_bool = var_155_int >= (int)0;
		if(var_157_bool != 0) {
			var_110_string = "fdie";
		} else {
				var_110_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_95_object = var_111_object;
		var_160_bool = IsFuncExist(var_95_object, "GetScriptProperty", (int)2);
		if(var_160_bool != 0) {
			@@var_95_object:HasScriptProperty(var_112_bool, "Owner");
			var_162_bool = var_112_bool;
			if(var_162_bool != 0) {
				@@var_95_object:GetScriptProperty(var_111_object, "Owner");
				var_164_bool = var_111_object == 0; //@ne
				if(var_164_bool != 0) {
					var_95_object = var_111_object;
				}
			}
		}
		var_167_bool = IsFuncExist(var_111_object, "@GetEyesHeight", (int)1);
		if(var_167_bool != 0) {
			@@var_111_object:GetEyesHeight(var_114_float);
			var_115_cvector = CVector(0.0, 0.0, 0.0);
			var_168_float = GetByIndex(var_115_cvector, 1);
			var_114_float = var_168_float;
			SetByIndex(var_115_cvector, 1) = var_168_float;
			LookAsync(var_95_object, "head", var_115_cvector);
			var_113_bool = 1;
		} else {
			var_113_bool = 0;

		}
		var_170_string = "";
		var_110_string = var_170_string;
		func_3036(var_170_string);
		PlayAnimation("all", var_110_string);
		WaitForAnimEnd();
		var_172_bool = var_113_bool;
		if(var_172_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_110_string);
		RemoveEnvelope();
		var_111_object = 0;
	}
	return 20;
	
}


func_3036(var_366_string)
{
	var_367_bool = 0; var_368_int = 0; var_369_bool = 0; var_370_int = 0; var_371_bool = 0; var_372_float = 0; var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_bool = 0; var_376_int = 0; var_377_bool = 0; var_378_int = 0; var_379_bool = 0; var_380_float = 0; var_381_cvector = CVector(0,0,0); var_382_cvector = CVector(0,0,0);
	IsExisting3DSound(var_375_bool, var_366_string);
	var_383_bool = var_375_bool == 0; //@nz
	if(var_383_bool != 0) {
		var_376_int = 0;

	Label_3042:
		var_385_int = var_376_int + (int)1;
		var_386_int = var_366_string + var_385_int;
		IsExisting3DSound(var_377_bool, var_386_int);
		var_387_bool = var_377_bool == 0; //@nz
		if(var_387_bool != 0) {
		} else {
			var_376_int = var_376_int + (int)1;
			goto Label_3042;
		}
		var_388_bool = var_376_int == 0; //@nz
		if(var_388_bool != 0) {
			return 16;
		}
		irand(var_378_int, var_376_int);
		var_390_int = var_378_int + (int)1;
		var_366_string = var_366_string + var_390_int;
	}
	Is3DSoundLoaded(var_379_bool, var_366_string);
	var_391_bool = var_379_bool;
	if(var_391_bool != 0) {
		GetEyesHeight(var_380_float);
		GetDirection(var_381_cvector);
		var_382_cvector = var_381_cvector * (int)50;
		var_393_float = GetByIndex(var_382_cvector, 1);
		var_393_float = var_393_float + var_380_float;
		SetByIndex(var_382_cvector, 1) = var_393_float;
		PlayGlobalSound(var_366_string, var_382_cvector);
	}
	return 16;
	
}


func_1508(var_285_bool, var_286_object)
{
	var_287_bool = 0; var_288_object = Obj();
	var_286_object = var_288_object;
	func_2859(var_287_bool, var_288_object);
	var_287_bool = var_285_bool;
	return 0;
}


func_3557(var_981_bool)
{
	var_982_int = 0; var_983_int = 0;
	var_984_string = "";
	func_3632(var_984_string);
	var_986_int = var_984_string + "_locked";
	GetVariable(var_986_int, var_983_int);
	var_987_int = 0;
	func_3640(var_987_int);
	var_981_bool = var_983_int >= var_987_int;
	return 2;
}


func_1515(var_303_string)
{
	var_303_string = "walk";
	return 0;
}


func_1517(var_304_string)
{
	var_304_string = "run";
	return 0;
}


func_1519(var_674_object, var_675_float)
{
	var_680_bool = 0; var_681_object = Obj();
	var_674_object = var_681_object;
	func_2859(var_680_bool, var_681_object);
	var_682_bool = var_680_bool == 0; //@nz
	if(var_682_bool != 0) {
		var_683_bool = 0; var_684_int = 0;
		func_3414(var_683_bool, (int)2);
		return 0;
	}
	var_686_bool = var_675_float > (int)0;
	if(var_686_bool != 0) {
		SetTimer((int)3, var_675_float);
		var_688_bool = 0; var_689_object = Obj(); var_690_float = 0; var_691_float = 0; var_692_bool = 0; var_693_bool = 0;
		var_674_object = var_689_object;
		func_1627(var_674_object, var_675_float, var_688_bool, var_689_object, (float)350.0, (float)6000, (bool)1, (bool)1);
		KillTimer((int)3);
	} else {
		var_740_bool = 0; var_741_object = Obj(); var_742_float = 0; var_743_float = 0; var_744_bool = 0; var_745_bool = 0;
		var_674_object = var_741_object;
		func_1627(var_674_object, var_675_float, var_740_bool, var_741_object, (float)350.0, (float)6000, (bool)1, (bool)1);
	}
	return 0;
	
}


func_1009(var_0_cvector, var_397_bool, var_398_float)
{
	var_399_bool = 0; var_400_cvector = CVector(0,0,0); var_401_cvector = CVector(0,0,0); var_402_cvector = CVector(0,0,0); var_403_float = 0; var_404_bool = 0; var_405_cvector = CVector(0,0,0); var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_float = 0;
	
Label_1010:
	IsAnimationPlaying(var_404_bool);
	var_409_bool = var_404_bool == 0; //@nz
	if(var_409_bool != 0) {
	} else {
		var_410_bool = 0;
		func_1092(var_410_bool);
		if(var_410_bool != 0) {
			var_397_bool = 1;
			return 10;
		}
		var_455_bool = 0;
		var_455_bool = 1;
		var_456_bool = 0; var_457_object = Obj();
		var_457_object = var_0_cvector;
		func_2859(var_456_bool, var_457_object);
		var_458_bool = var_456_bool == 0; //@nz
		if(var_458_bool != 1) {
			var_459_int = var_4_int;
			if(var_459_int != 1) {
				var_455_bool = 0;
			}
		}
		if(var_455_bool != 0) {
			var_397_bool = 0;
			return 10;
		}
		@@@var_0_cvector:GetPFPosition(var_405_cvector);
		GetPFPosition(var_406_cvector);
		var_407_cvector = var_405_cvector - var_406_cvector;
		var_408_float = var_407_cvector | var_407_cvector;
		var_460_float = var_398_float * var_398_float;
		var_461_bool = var_408_float < var_460_float;
		if(var_461_bool != 0) {
			var_462_bool = 0; var_463_float = 0;
			var_398_float = var_463_float;
			func_836(var_407_cvector, var_408_float, var_462_bool, var_463_float);
			var_397_bool = 1;
			sync();
			goto Label_1010;
		}
		return 10;
	}
	func_1196(var_408_float);
	var_397_bool = 0;
	return 10;
	
}


func_3570(var_1008_bool)
{
	var_1009_int = 0; var_1010_int = 0;
	var_1011_string = "";
	func_3632(var_1011_string);
	var_1013_int = var_1011_string + "_locked";
	GetVariable(var_1013_int, var_1010_int);
	var_1014_bool = var_1008_bool;
	if(var_1014_bool != 0) {
		var_1010_int = var_1010_int + (int)1;
	} else {
		var_1010_int = var_1010_int + (int)-1;
	}
	var_1016_string = "";
	func_3632(var_1016_string);
	var_1018_int = var_1016_string + "_locked";
	SetVariable(var_1018_int, var_1010_int);
	return 2;
	
}


func_504(var_0_cvector, var_3_int, var_4_int, var_6_bool, var_121_object, var_122_bool, var_123_float, var_229_bool, var_335_bool)
{
	var_124_float = 0; var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_bool = 0; var_128_bool = 0; var_129_float = 0; var_130_cvector = CVector(0,0,0); var_131_float = 0; var_132_cvector = CVector(0,0,0); var_133_bool = 0; var_134_float = 0; var_135_float = 0; var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_bool = 0; var_139_bool = 0; var_140_float = 0; var_141_cvector = CVector(0,0,0); var_142_float = 0; var_143_cvector = CVector(0,0,0); var_144_bool = 0; var_145_float = 0;
	func_762(var_143_cvector, var_144_bool, var_145_float);
	var_6_bool = 0;
	var_170_bool = IsFuncExist(var_121_object, "@GetAttackDistance", (int)1);
	if(var_170_bool != 0) {
		@@var_121_object:GetAttackDistance(var_135_float);
		var_135_float = var_135_float + (int)50;
	} else {
							var_123_float = var_135_float;
	}
	var_173_bool = var_135_float >= (int)150;
	if(var_173_bool != 0) {
		var_135_float = 150;
	}
	var_3_int = false;
	var_0_cvector = var_121_object;
	IsPlayerActor(var_0_cvector, var_138_bool);
	var_174_bool = var_138_bool;
	if(var_174_bool != 0) {
		PlayGlobalMusic("attack");
	}
	var_176_bool = var_122_bool;
	if(var_176_bool != 0) {
		var_139_bool = 0;
	} else {
						var_139_bool = 1;

	}
	var_140_float = (float)300.0 + var_135_float;
	
Label_539:
	var_178_bool = 0;
	var_178_bool = 0;
	var_179_bool = 0;
	var_179_bool = 0;
	var_180_bool = 0; var_181_object = Obj();
	var_181_object = var_0_cvector;
	func_2859(var_180_bool, var_181_object);
	if(var_180_bool != 0) {
		var_214_bool = var_3_int == 0; //@nz
		if(var_214_bool != 0) {
			var_179_bool = 1;
		}
	}
	if(var_179_bool != 0) {
		var_215_bool = var_4_int == 0; //@nz
		if(var_215_bool != 0) {
			var_178_bool = 1;
		}
	}
	if(var_178_bool != 0) {
		func_1196(var_145_float);
		@@@var_0_cvector:GetPFPosition(var_136_cvector);
		GetPFPosition(var_137_cvector);
		var_141_cvector = var_136_cvector - var_137_cvector;
		var_142_float = var_141_cvector | var_141_cvector;
		var_221_float = var_140_float * var_140_float;
		var_222_bool = var_142_float >= var_221_float;
		if(var_222_bool != 0) {
			var_223_bool = 0; var_224_object = Obj(); var_225_float = 0; var_226_float = 0; var_227_bool = 0; var_228_bool = 0;
			var_224_object = var_0_cvector;
			var_135_float = var_225_float;
			TaskCall(2);
			func_1214(var_232_object, var_223_bool, var_224_object, var_225_float, (float)2000.0, (bool)1, (bool)0);
			TaskReturn();
			var_318_bool = var_229_bool == 0; //@nz
			if(var_318_bool != 0) {
				var_3_int = true;
			} else {
				var_139_bool = 0;
		} else {
				var_326_float = var_123_float * var_123_float;
				var_327_bool = var_142_float >= var_326_float;
				if(var_327_bool != 0) {
					@@@var_0_cvector:GetPFPosition(var_143_cvector);
					CanReachByPF(var_144_bool, var_143_cvector);
					var_328_bool = var_144_bool == 0; //@nz
					if(var_328_bool != 0) {
						var_329_bool = 0; var_330_object = Obj(); var_331_float = 0; var_332_float = 0; var_333_bool = 0; var_334_bool = 0;
						var_330_object = var_0_cvector;
						var_135_float = var_331_float;
						TaskCall(2);
						func_1214(var_338_object, var_329_bool, var_330_object, var_331_float, (float)2000.0, (bool)1, (bool)0);
						TaskReturn();
						var_339_bool = var_335_bool == 0; //@nz
						if(var_339_bool != 0) {
							var_3_int = true;
							goto Label_731;
						}
						var_139_bool = 0;
						goto Label_539;
					}
					var_340_bool = var_139_bool == 0; //@nz
					if(var_340_bool != 0) {
						var_341_object = Obj();
						var_341_object = var_0_cvector;
						func_3009(var_341_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1196(var_145_float);
						StopAsync();
						var_139_bool = 1;
						var_352_bool = 0;
						var_352_bool = 1;
						var_353_bool = 0; var_354_object = Obj();
						var_354_object = var_0_cvector;
						func_2859(var_353_bool, var_354_object);
						var_355_bool = var_353_bool == 0; //@nz
						if(var_355_bool != 1) {
							var_356_int = var_4_int;
							if(var_356_int != 1) {
								var_352_bool = 0;
							}
						}
						if(var_352_bool != 0) {
							goto Label_731;
						}
					}
					rand(var_145_float);
					var_357_bool = 0;
					var_359_bool = var_145_float < (float)0.6000000238418579;
					if(var_359_bool != 1) {
						var_360_bool = 0;
						func_1153((bool)1, var_360_bool);
						if(var_360_bool != 1) {
							var_357_bool = 0;
						}
					}
					if(var_357_bool != 0) {
						Face(var_0_cvector);
						func_1201();
						PlayAnimation("all", "attack_stay");
						var_397_bool = 0; var_398_float = 0;
						var_123_float = var_398_float;
						func_1009(var_145_float, var_397_bool, var_398_float);
						StopAsync();
					} else {
						Face(var_0_cvector);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1196(var_145_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_625_bool = 0;
						func_1153(var_145_float, var_625_bool);
						var_626_bool = var_625_bool == 0; //@nz
						if(var_626_bool == 0) goto Label_721;
						var_627_bool = 0;
						var_627_bool = 1;
						var_628_bool = 0; var_629_object = Obj();
						var_629_object = var_0_cvector;
						func_2859(var_628_bool, var_629_object);
						var_630_bool = var_628_bool == 0; //@nz
						if(var_630_bool != 1) {
							var_631_int = var_4_int;
							if(var_631_int != 1) {
								var_627_bool = 0;
							}
						}
						if(var_627_bool != 0) {
							goto Label_731;
						}
						@@@var_0_cvector:GetPFPosition(var_136_cvector);
						GetPFPosition(var_137_cvector);
						var_141_cvector = var_136_cvector - var_137_cvector;
						var_142_float = var_141_cvector | var_141_cvector;
						var_632_float = var_123_float * var_123_float;
						var_633_bool = var_142_float < var_632_float;
						if(var_633_bool == 0) goto Label_721;
						var_634_bool = 0; var_635_float = 0;
						var_123_float = var_635_float;
						func_836(var_144_bool, var_145_float, var_634_bool, var_635_float);
						var_636_bool = var_634_bool == 0; //@nz
						if(var_636_bool == 0) goto Label_721;
						goto Label_731;
				}
					var_637_bool = 0; var_638_float = 0;
					var_123_float = var_638_float;
					func_836(var_144_bool, var_145_float, var_637_bool, var_638_float);
					var_639_bool = var_637_bool == 0; //@nz
					if(var_639_bool != 0) {
						goto Label_731;
					}
					var_139_bool = 1;

				}
			Label_721:
				goto Label_730;
		}
		Label_730:
			goto Label_539;

		}
	}
Label_731:
	WaitForAnimEnd();
	var_319_bool = 0;
	var_319_bool = 1;
	var_320_int = var_3_int;
	if(var_320_int != 1) {
		var_321_int = var_4_int;
		if(var_321_int != 1) {
			var_319_bool = 0;
		}
	}
	if(var_319_bool != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_324_bool = var_138_bool;
	if(var_324_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


