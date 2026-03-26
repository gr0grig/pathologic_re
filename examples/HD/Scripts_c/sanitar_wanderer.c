// @IMPORTS: GetPosition/1,Stop/0,FindPathTo/2,RotatePath/2,SetTimer/2,FollowPath/5,KillTimer/1,Sleep/2,RequestClearPath/1,CanSee/2,SendPlayerEnemy/2,UnlookAsync/1,rand/2,Sleep/1,GetRandomPFPointInCircle/4,FollowPath/3,GetCameraFarDistance/1,StopGroup0/0,FindShiftedPathTo/2,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,ResetAAS/0,StopAnimation/0,Face/1,SetAttackState/1,ReportAttack/1,StopAsync/0,RemoveActor/1,IsPlayerActor/2,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,GetScene/1,AddActorByType/6,Trigger/2,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,IsLoaded/1,AddItem/4,IsExisting3DSound/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateObjectSet/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,PlayGlobalMusic/1,BroadcastMessage/3,HasAnimation/3,GetVariable/2,WorkWithCorpse/1,Barter/1,Trace/1,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetAttackDistance/1,AddActorByType/4,GetHeight/1,PlayLoopedGlobalSound/5,ReportReputationChange/3,ReportReputationChange/4,GetProperty/2,SignalDeath/1
// @STRINGS: A:GetPosition|A:GetPFPosition|W:walk|W:run|W:head|W:all|W:attack_on|W:bjump|W:attack_off|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:disease|W:cleansed|A:SetProperty|W:scripted|W:corpse_fire.xml|W:cattack|A:GetProperty|A:RemoveProperty|W:continue|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:blood_dir.xml|W:woman|W:worker|W:butcher|W:wasted_girl|W:boy|W:vaxxabitka|W:unosha|W:wasted_male|W:alkash|W:dohodyaga|W:vaxxabit|W:nudegirl|W:morlok|W:battle|W:idle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:rusk|W:alpha_pills|W:beta_pills|W:gamma_pills|W:ognemet_ammo|W:class|W:patrol|W:sanitar|W:soldier|W:little_girl|W:flame|A:Attach|A:SetLength|A:GetLength|W:flame_loop|A:FadeIn|A:FadeOut|W:@GetHeight|A:GetHeight|A:in|W:reputation|W:bomber|W:hunter|W:grabitel|W:rat_big|W:dog|A:Intersect|A:Next
// @GLOBALS: 0:object:,1:object:,2:float:,3:bool:,4:object:
// @RUN_OP: 0x202
// @RUN_TASK: 2
// @TASK_0: vars=bool,object params=2
// @EVENT_1: op=0x12 vars=object
// @EVENT_3: op=0x20 vars=object
// @EVENT_17: op=0x2e vars=object
// @EVENT_7: op=0x42 vars=int
// @EVENT_10: op=0xc4 vars=object
// @EVENT_41: op=0xcf vars=object
// @TASK_1: vars=bool,object,bool,object params=2
// @EVENT_17: op=0xeb vars=object
// @EVENT_7: op=0xf8 vars=int
// @EVENT_1: op=0x14e vars=object
// @EVENT_2: op=0x15d vars=object
// @EVENT_10: op=0x1e3 vars=object
// @EVENT_41: op=0x1ee vars=object
// @TASK_2: vars=bool,bool params=0
// @EVENT_1: op=0x20a vars=object
// @EVENT_3: op=0x225 vars=object
// @EVENT_17: op=0x233 vars=object
// @EVENT_30: op=0x247 vars=object,object,bool
// @EVENT_7: op=0x254 vars=int
// @EVENT_10: op=0x29a vars=object
// @EVENT_28: op=0x29e vars=
// @EVENT_41: op=0x2a8 vars=object
// @TASK_3: vars= params=0
// @EVENT_1: op=0x2b9 vars=object
// @EVENT_3: op=0x2d4 vars=object
// @EVENT_17: op=0x2e2 vars=object
// @EVENT_30: op=0x2f6 vars=object,object,bool
// @EVENT_7: op=0x303 vars=int
// @TASK_4: vars=object params=2
// @EVENT_17: op=0x3d6 vars=object
// @EVENT_7: op=0x3e1 vars=int
// @TASK_5: vars= params=1
// @EVENT_0: op=0x410 vars=object
// @EVENT_22: op=0x48f vars=object,int,float,float
// @EVENT_16: op=0x491 vars=object,string
// @EVENT_41: op=0x493 vars=object
// @TASK_6: vars=object,object params=1
// @EVENT_32: op=0x515 vars=
// @EVENT_41: op=0x52c vars=object
// @EVENT_1: op=0x535 vars=object
// @EVENT_3: op=0x543 vars=object
// @EVENT_17: op=0x551 vars=object
// @EVENT_7: op=0x565 vars=int
// @STANDALONE_EVENT_22: op=0xa7a vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xa82 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0xa8c vars=object,string
// @STANDALONE_EVENT_41: op=0xa99 vars=object
// @PE: 0x0,0xb,0x12,0x20,0x2e,0x42,0xb2,0xc4,0xcf,0xdc,0xeb,0xf8,0x133,0x14e,0x15d,0x1d1,0x1e3,0x1ee,0x1f7,0x202,0x20a,0x225,0x233,0x247,0x254,0x29a,0x2a8,0x2b9,0x2d4,0x2e2,0x2f6,0x303,0x3d6,0x3e1,0x401,0x475,0x48f,0x491,0x493,0x52c,0x535,0x543,0x551,0x565,0x574,0x714,0x77b,0x782,0x7db,0x9e4,0xa05,0xa0c,0xa12,0xa19,0xa3f,0xa61,0xa6b,0xa7a,0xa82,0xa99,0xb1d

task_0_event_1(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_2565(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_200(var_11_object);
		var_139_object = Obj();
		var_11_object = var_139_object;
		func_2572(var_139_object);
	}
	return 0;
}


task_0_event_3(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_2578(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_200(var_11_object);
		var_139_object = Obj();
		var_11_object = var_139_object;
		func_2585(var_139_object);
	}
	return 0;
}


task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1556(var_12_bool, var_13_object);
	var_46_bool = var_12_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_47_object = Obj();
		var_11_object = var_47_object;
		func_2633(var_47_object);
		return 0;
	}
	func_200(var_11_object);
	var_63_object = Obj();
	var_11_object = var_63_object;
	func_2657(var_63_object);
	return 0;
}


task_0_event_7(var_0_bool, var_1_object, var_2_int, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	var_12_int = 0;
	var_11_object = var_12_int;
	func_178(var_10_object, var_11_object, var_12_int);
	var_42_int = 0;
	var_11_object = var_42_int;
	func_2745(var_42_int);
	return 0;
}


task_0_event_10(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	RequestClearPath(var_11_object);
	return 0;
}


task_0_event_41(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	func_200(var_11_object);
	var_11_object = Obj();
	func_2713();
	return 0;
}


task_1_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1556(var_12_bool, var_13_object);
	var_46_bool = var_12_bool == 0; //@nz
	if(var_46_bool != 0) {
		return 0;
	}
	var_3_object = var_11_object;
	func_321(var_11_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	var_12_int = 0;
	var_11_object = var_12_int;
	func_307(var_11_object, var_12_int);
	var_61_int = 0;
	var_11_object = var_61_int;
	func_2745(var_61_int);
	return 0;
}


task_1_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_1_object == var_11_object;
	if(var_13_bool != 0) {
		var_14_bool = var_2_bool == 0; //@nz
		if(var_14_bool != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		var_2_bool = true;
		var_15_object = Obj();
		var_11_object = var_15_object;
		func_1745(var_15_object);
	}
	return 0;
}


task_1_event_2(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_1_object == var_11_object;
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


task_1_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	RequestClearPath(var_11_object);
	return 0;
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	func_321(var_11_object);
	var_11_object = Obj();
	func_2713();
	return 0;
}


task_2_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_2565(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_673(var_10_object, var_11_object);
		var_138_object = Obj();
		var_11_object = var_138_object;
		func_2572(var_138_object);
	} else {
		var_476_bool = 0; var_477_object = Obj();
		var_11_object = var_477_object;
		func_2591(var_476_bool, var_477_object);
		if(var_476_bool == 0) goto Label_548;
		func_673(var_10_object, var_11_object);
		var_492_object = Obj();
		var_11_object = var_492_object;
		func_2623(var_492_object);
	}
Label_548:
	return 0;
	
}


task_2_event_3(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_2578(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_673(var_10_object, var_11_object);
		var_138_object = Obj();
		var_11_object = var_138_object;
		func_2585(var_138_object);
	}
	return 0;
}


	task_2_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_object, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj();
	var_100_object = var_102_object;
	func_1556(var_101_bool, var_102_object);
	var_129_bool = var_101_bool == 0; //@nz
	if(var_129_bool != 0) {
		var_130_object = Obj();
		var_100_object = var_130_object;
		func_2633(var_130_object);
		return 0;
	}
	func_673(var_13_object, var_100_object);
	var_145_object = Obj();
	var_100_object = var_145_object;
	func_2657(var_145_object);
	return 0;
	}


task_2_event_30(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0;
	var_11_object = var_15_object;
	var_12_object = var_16_object;
	var_13_object = var_17_bool;
	func_2719(var_14_bool, var_15_object, var_16_object, var_17_bool);
	if(var_14_bool != 0) {
		var_11_object = Obj();
		func_563();
	}
	return 0;
}


task_2_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_object)
{
	var_12_int = 0;
	var_11_object = var_12_int;
	func_2745(var_12_int);
	return 0;
}


task_2_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	RequestClearPath(var_11_object);
	return 0;
}


task_2_event_28(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object)
{
	Stop();
	return 0;
}


task_2_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	func_673(var_10_object, var_11_object);
	var_11_object = Obj();
	func_2713();
	return 0;
}


task_3_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_2565(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_858();
		var_138_object = Obj();
		var_11_object = var_138_object;
		func_2572(var_138_object);
	} else {
		var_476_bool = 0; var_477_object = Obj();
		var_11_object = var_477_object;
		func_2591(var_476_bool, var_477_object);
		if(var_476_bool == 0) goto Label_723;
		func_858();
		var_492_object = Obj();
		var_11_object = var_492_object;
		func_2623(var_492_object);
	}
Label_723:
	return 0;
	
}


task_3_event_3(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_2578(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_858();
		var_138_object = Obj();
		var_11_object = var_138_object;
		func_2585(var_138_object);
	}
	return 0;
}


	task_3_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_object, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj();
	var_100_object = var_102_object;
	func_1556(var_101_bool, var_102_object);
	var_129_bool = var_101_bool == 0; //@nz
	if(var_129_bool != 0) {
		var_130_object = Obj();
		var_100_object = var_130_object;
		func_2633(var_130_object);
		return 0;
	}
	func_858();
	var_145_object = Obj();
	var_100_object = var_145_object;
	func_2657(var_145_object);
	return 0;
	}


task_3_event_30(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0;
	var_11_object = var_15_object;
	var_12_object = var_16_object;
	var_13_object = var_17_bool;
	func_2719(var_14_bool, var_15_object, var_16_object, var_17_bool);
	if(var_14_bool != 0) {
		var_11_object = Obj();
		func_738();
	}
	return 0;
}


task_3_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_object)
{
	var_12_int = 0;
	var_11_object = var_12_int;
	func_2745(var_12_int);
	return 0;
}


task_4_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_2633(var_12_object);
	var_27_bool = var_11_object != 0; //@nn
	if(var_27_bool != 0) {
		var_0_bool = var_11_object;
		Face(var_0_bool);
	}
	return 0;
}


task_4_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_object, var_11_object)
{
	var_12_int = 0;
	var_11_object = var_12_int;
	func_2745(var_12_int);
	return 0;
}


task_5_event_0(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0;
	IsOverrideActive(var_13_bool);
	var_14_bool = var_13_bool == 0; //@nz
	if(var_14_bool != 0) {
		var_15_object = Obj();
		var_11_object = var_15_object;
		func_2011(var_15_object);
	}
	return 2;
}


task_5_event_22(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_float, var_12_float, var_13_object, var_14_object)
{
	return 0;
}


task_5_event_16(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_string, var_11_object, var_12_object)
{
	return 0;
}


task_5_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	return 0;
}


task_6_event_32(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object)
{
	var_11_bool = var_0_bool;
	if(var_11_bool != 0) {
		@@@var_0_bool:RemoveProperty("cleansed");
	}
	return 0;
}


task_6_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	func_1307(var_11_object);
	var_11_object = Obj();
	func_2713();
	return 0;
}


task_6_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_2565(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1307(var_11_object);
		var_174_object = Obj();
		var_11_object = var_174_object;
		func_2572(var_174_object);
	}
	return 0;
}


task_6_event_3(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_2578(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1307(var_11_object);
		var_174_object = Obj();
		var_11_object = var_174_object;
		func_2585(var_174_object);
	}
	return 0;
}


task_6_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1556(var_12_bool, var_13_object);
	var_46_bool = var_12_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_47_object = Obj();
		var_11_object = var_47_object;
		func_2633(var_47_object);
		return 0;
	}
	func_1307(var_11_object);
	var_98_object = Obj();
	var_11_object = var_98_object;
	func_2657(var_98_object);
	return 0;
}


task_6_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int)
{
	var_13_bool = var_11_int == (int)71;
	if(var_13_bool != 0) {
		var_14_object = var_1_object;
		if(var_14_object != 0) {
			Trigger(var_1_object, "continue");
		}
	} else {
		var_16_int = 0;
		var_11_int = var_16_int;
		func_2745(var_16_int);
	}
	return 0;
	
}


event_22(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0;
	var_11_object = var_15_object;
	var_12_int = var_16_int;
	var_13_float = var_17_float;
	func_1658(var_15_object, var_16_int, var_17_float);
	return 0;
}


event_43(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0);
	var_11_object = var_17_object;
	var_12_int = var_18_int;
	var_13_float = var_19_float;
	var_15_cvector = var_20_cvector;
	var_16_cvector = var_21_cvector;
	func_1726(var_19_float, var_20_cvector, var_21_cvector);
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object, var_12_string)
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


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_2667(var_12_object);
	return 0;
}


main(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object)
{
	func_2283();
	
Label_517:
	func_602(var_9_object, var_10_object);
	goto Label_517;
}
EMIT "Return(); Pop(0)";


func_512(var_301_string)
{
	var_301_string = "run";
	return 0;
}


func_1025(var_133_object)
{
	EventDisable(0);
	var_134_object = Obj();
	var_133_object = var_134_object;
	func_1050(var_134_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1036:
	Hold();
	goto Label_1036;
}
EMIT "Return(); Pop(0)";


func_0(var_395_bool, var_396_object)
{
	var_399_bool = 0; var_400_object = Obj(); var_401_float = 0; var_402_float = 0; var_403_bool = 0; var_404_bool = 0;
	var_396_object = var_400_object;
	func_76(var_395_bool, var_396_object, var_399_bool, var_400_object, (float)350, (float)5000, (bool)0, (bool)1);
	var_399_bool = var_395_bool;
	return 0;
}


func_2565(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	func_2845(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
	return 0;
}


func_2055(var_119_string)
{
	var_120_object = Obj(); var_121_int = 0; var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; var_125_bool = 0;
	CreateInvItem(var_123_object);
	@@var_123_object:SetItemName(var_119_string);
	@@var_123_object:SetProperty("Organ", (int)1);
	@@var_123_object:GetItemID(var_124_int);
	AddItem(var_125_bool, var_123_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_11(var_421_bool, var_422_object)
{
	var_423_bool = 0; var_424_object = Obj();
	var_422_object = var_424_object;
	func_1580(var_423_bool, var_424_object);
	var_423_bool = var_421_bool;
	return 0;
}


func_2572(var_174_object)
{
	var_175_object = Obj();
	var_174_object = var_175_object;
	func_2532(var_174_object, var_175_object);
	return 0;
}


func_2578(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	func_2845(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
	return 0;
}


func_1556(var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_int = 0;
	var_16_bool = 0; var_17_object = Obj();
	var_13_object = var_17_object;
	func_1520(var_16_bool, var_17_object);
	var_33_bool = var_16_bool == 0; //@nz
	if(var_33_bool != 0) {
		var_12_bool = 0;
		return 2;
	}
	var_34_bool = 0; var_35_object = Obj(); var_36_string = "";
	var_13_object = var_35_object;
	func_1430(var_34_bool, var_35_object, "noaccess");
	var_43_bool = var_34_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_12_bool = 1;
		return 2;
	}
	@@var_13_object:GetProperty("noaccess", var_15_int);
	var_12_bool = var_15_int == (int)0;
	return 2;
}


func_2072()
{
	var_113_int = 0;
	func_2005(var_113_int);
	var_118_bool = var_113_int != (int)1;
	if(var_118_bool != 0) {
		return 0;
	}
	var_119_string = "";
	func_2055("liver");
	var_130_string = "";
	func_2055("kidney");
	var_131_string = "";
	func_2055("heart");
	var_132_string = "";
	func_2055("blood");
	return 0;
}


func_2585(var_174_object)
{
	var_175_object = Obj();
	var_174_object = var_175_object;
	func_2532(var_174_object, var_175_object);
	return 0;
}


func_1050(var_134_object)
{
	var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_string = ""; var_140_object = Obj(); var_141_bool = 0; var_142_bool = 0; var_143_float = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_string = ""; var_150_object = Obj(); var_151_bool = 0; var_152_bool = 0; var_153_float = 0; var_154_cvector = CVector(0,0,0);
	var_155_bool = var_134_object == 0; //@ne
	if(var_155_bool != 0) {
		var_156_string = "";
		func_1141("fdie");
	} else {
		@@var_134_object:GetPosition(var_145_cvector);
		GetPosition(var_146_cvector);
		GetDirection(var_147_cvector);
		var_148_cvector = var_146_cvector - var_145_cvector;
		var_188_float = GetByIndex(var_148_cvector, 0);
		var_189_float = GetByIndex(var_147_cvector, 0);
		var_190_float = var_188_float * var_189_float;
		var_191_float = GetByIndex(var_148_cvector, 2);
		var_192_float = GetByIndex(var_147_cvector, 2);
		var_193_float = var_191_float * var_192_float;
		var_194_int = var_190_float + var_193_float;
		var_196_bool = var_194_int >= (int)0;
		if(var_196_bool != 0) {
			var_149_string = "fdie";
		} else {
				var_149_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_134_object = var_150_object;
		var_199_bool = IsFuncExist(var_134_object, "GetScriptProperty", (int)2);
		if(var_199_bool != 0) {
			@@var_134_object:HasScriptProperty(var_151_bool, "Owner");
			var_201_bool = var_151_bool;
			if(var_201_bool != 0) {
				@@var_134_object:GetScriptProperty(var_150_object, "Owner");
				var_203_bool = var_150_object == 0; //@ne
				if(var_203_bool != 0) {
					var_134_object = var_150_object;
				}
			}
		}
		var_206_bool = IsFuncExist(var_150_object, "@GetEyesHeight", (int)1);
		if(var_206_bool != 0) {
			@@var_150_object:GetEyesHeight(var_153_float);
			var_154_cvector = CVector(0.0, 0.0, 0.0);
			var_207_float = GetByIndex(var_154_cvector, 1);
			var_153_float = var_207_float;
			SetByIndex(var_154_cvector, 1) = var_207_float;
			LookAsync(var_134_object, "head", var_154_cvector);
			var_152_bool = 1;
		} else {
			var_152_bool = 0;

		}
		var_209_string = "";
		var_149_string = var_209_string;
		func_1771(var_209_string);
		PlayAnimation("all", var_149_string);
		WaitForAnimEnd();
		var_211_bool = var_152_bool;
		if(var_211_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_149_string);
		RemoveEnvelope();
		var_150_object = 0;
	}
	return 20;
	
}


func_2591(var_476_bool, var_477_object)
{
	var_478_float = 0; var_479_float = 0;
	var_480_bool = 0;
	var_480_bool = 1;
	var_481_bool = 0;
	var_481_bool = 1;
	var_482_bool = var_477_object == 0; //@ne
	if(var_482_bool != 1) {
		var_483_bool = 0; var_484_object = Obj();
		var_477_object = var_484_object;
		func_1515(var_483_bool, var_484_object);
		var_485_bool = var_483_bool == 0; //@nz
		if(var_485_bool != 1) {
			var_481_bool = 0;
		}
	}
	if(var_481_bool != 1) {
		var_486_bool = 0; var_487_object = Obj(); var_488_string = "";
		var_477_object = var_487_object;
		func_1430(var_486_bool, var_487_object, "disease");
		var_489_bool = var_486_bool == 0; //@nz
		if(var_489_bool != 1) {
			var_480_bool = 0;
		}
	}
	if(var_480_bool != 0) {
		var_476_bool = 0;
		return 2;
	}
	@@var_477_object:GetProperty("disease", var_479_float);
	var_476_bool = var_479_float > (int)0;
	return 2;
}


func_1580(var_361_bool, var_362_object)
{
	var_363_object = Obj(); var_364_object = Obj(); var_365_int = 0; var_366_object = Obj(); var_367_object = Obj(); var_368_int = 0;
	var_369_bool = var_362_object == 0; //@ne
	if(var_369_bool != 0) {
		var_361_bool = 0;
		return 6;
	}
	GetScene(var_366_object);
	var_370_bool = var_366_object == 0; //@ne
	if(var_370_bool != 0) {
		var_361_bool = 0;
		return 6;
	}
	@@var_362_object:GetScene(var_367_object);
	var_371_bool = var_366_object != var_367_object;
	if(var_371_bool != 0) {
		var_361_bool = 0;
		return 6;
	}
	var_372_bool = 0; var_373_object = Obj(); var_374_string = "";
	var_362_object = var_373_object;
	func_1430(var_372_bool, var_373_object, "noaccess");
	var_375_bool = var_372_bool == 0; //@nz
	if(var_375_bool != 0) {
		var_361_bool = 1;
		return 6;
	}
	@@var_362_object:GetProperty("noaccess", var_368_int);
	var_361_bool = var_368_int == (int)0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2096()
{
	var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0;
	ClearSubContainer((int)0);
	var_62_int = 0; var_63_int = 0;
	func_2024((int)600, (int)1500);
	var_81_string = ""; var_82_int = 0; var_83_int = 0; var_84_int = 0;
	func_1756("rusk", (int)1, (int)3, (int)2);
	var_97_string = ""; var_98_int = 0; var_99_int = 0; var_100_int = 0;
	func_1756("alpha_pills", (int)1, (int)3, (int)5);
	var_101_string = ""; var_102_int = 0; var_103_int = 0; var_104_int = 0;
	func_1756("beta_pills", (int)1, (int)6, (int)4);
	var_105_string = ""; var_106_int = 0; var_107_int = 0; var_108_int = 0;
	func_1756("gamma_pills", (int)1, (int)12, (int)3);
	var_109_int = 0; var_110_string = "";
	func_2142(var_109_int, "ognemet_ammo");
	AddItem(var_60_bool, var_109_int, (int)0, (int)1);
	return 4;
}


func_2623(var_492_object)
{
	var_493_object = Obj();
	var_492_object = var_493_object;
	TaskCall(6);
	func_1173(var_492_object, var_494_object, var_495_object, var_493_object);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_2633(var_47_object)
{
	var_48_bool = 0; var_49_bool = 0;
	var_50_bool = var_47_object == 0; //@ne
	if(var_50_bool != 0) {
		return 2;
	}
	var_51_object = GlobalVars[4];
	@@var_51_object:in(var_49_bool, var_47_object);
	var_52_bool = var_49_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_53_object = GlobalVars[4];
		@@var_53_object:add(var_47_object);
	}
	var_54_bool = 0; var_55_object = Obj();
	var_47_object = var_55_object;
	func_1425(var_54_bool, var_55_object);
	if(var_54_bool != 0) {
		var_58_object = Obj();
		func_1899(var_58_object);
		ReportReputationChange(var_47_object, var_58_object, (float)-0.07000000029802322);
	}
	return 2;
}


func_76(var_0_bool, var_1_object, var_399_bool, var_400_object, var_401_float, var_402_float, var_403_bool, var_404_bool)
{
	var_405_bool = 0; var_406_bool = 0; var_407_object = Obj(); var_408_cvector = CVector(0,0,0); var_409_cvector = CVector(0,0,0); var_410_cvector = CVector(0,0,0); var_411_float = 0; var_412_object = Obj(); var_413_bool = 0; var_414_bool = 0; var_415_object = Obj(); var_416_cvector = CVector(0,0,0); var_417_cvector = CVector(0,0,0); var_418_cvector = CVector(0,0,0); var_419_float = 0; var_420_object = Obj();
	var_0_bool = false;
	var_1_object = var_400_object;
	var_404_bool = var_414_bool;
	
Label_80:
	var_421_bool = 0; var_422_object = Obj();
	var_400_object = var_422_object;
	func_11(var_421_bool, var_422_object);
	var_425_bool = var_421_bool == 0; //@nz
	if(var_425_bool != 0) {
		var_399_bool = 0;
		return 16;
	}
	@@var_400_object:GetPosition(var_416_cvector);
	GetPosition(var_417_cvector);
	var_418_cvector = var_416_cvector - var_417_cvector;
	var_419_float = var_418_cvector | var_418_cvector;
	var_426_bool = 0;
	var_426_bool = 0;
	var_428_bool = var_402_float > (int)0;
	if(var_428_bool != 0) {
		var_429_float = var_402_float * var_402_float;
		var_430_bool = var_419_float > var_429_float;
		if(var_430_bool != 0) {
			var_426_bool = 1;
		}
	}
	if(var_426_bool != 0) {
		Stop();
		var_399_bool = 0;
		return 16;
	}
	var_431_float = var_401_float * var_401_float;
	var_432_bool = var_419_float > var_431_float;
	if(var_432_bool != 0) {
		@@var_400_object:GetPFPosition(var_416_cvector);
		FindPathTo(var_420_object, var_416_cvector);
		var_433_bool = var_420_object != 0; //@nn
		if(var_433_bool != 0) {
			var_420_object = var_415_object;
			var_420_object = 0;
		}
		var_434_bool = var_415_object != 0; //@nn
		if(var_434_bool != 0) {
			var_435_bool = var_414_bool;
			if(var_435_bool == 0) goto Label_129;
			var_414_bool = 0;
			RotatePath(var_415_object, var_413_bool);
			var_436_bool = var_413_bool == 0; //@nz
			if(var_436_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_439_string = "";
				func_216(var_439_string);
				var_440_string = "";
				func_218(var_440_string);
				FollowPath(var_415_object, var_403_bool, var_413_bool, var_439_string, var_440_string);
				var_441_bool = var_413_bool == 0; //@nz
				if(var_441_bool != 0) {
					var_442_bool = var_0_bool;
					if(var_442_bool != 0) {
						var_415_object = 0;
						goto Label_176;
					EMIT "GOTO 0x95";
					}
				} else {
					var_415_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_413_bool);
					var_445_bool = var_413_bool == 0; //@nz
					if(var_445_bool != 0) {
						var_446_bool = var_0_bool;
						if(var_446_bool != 0) {
							var_415_object = 0;
							goto Label_176;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_176;
	}
			var_420_object = 0;
			goto Label_174;

		Label_174:
			var_415_object = 0;

		}
		goto Label_80;
	}
Label_176:
	var_399_bool = !var_0_bool;
	return 16;
	
}


func_1614(var_28_object)
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


func_602(var_0_bool, var_1_object)
{
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_object = Obj(); var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_object = Obj(); var_45_bool = 0;
	var_0_bool = false;
	var_1_object = false;
	rand(var_40_float, (float)0.5);
	Sleep(var_40_float);
	
Label_610:
	var_47_bool = var_0_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_48_bool = var_1_object == 0; //@nz
		if(var_48_bool != 0) {

		Label_614:
			GetPosition(var_42_cvector);
			var_49_float = 0;
			func_661(var_49_float);
			GetRandomPFPointInCircle(var_41_cvector, var_42_cvector, var_49_float, var_43_bool);
			var_52_bool = var_43_bool;
			if(var_52_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_614;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_630;
	
Label_630:
	var_53_object = Obj(); var_54_cvector = CVector(0,0,0);
	var_41_cvector = var_54_cvector;
	func_691(var_53_object, var_54_cvector);
	var_53_object = var_44_object;
	var_57_bool = var_44_object != 0; //@nn
	if(var_57_bool != 0) {
		RotatePath(var_44_object, var_45_bool);
		var_58_bool = var_45_bool;
		if(var_58_bool != 0) {
			var_59_bool = 0;
			func_689(var_59_bool);
			FollowPath(var_44_object, var_59_bool, var_45_bool);
			var_44_object = 0;
			var_60_bool = var_45_bool;
			if(var_60_bool != 0) {
				TaskCall(3);
				func_777();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_44_object = 0;
	goto Label_610;
	
}


func_2142(var_74_int, var_75_string)
{
	var_76_int = 0; var_77_int = 0;
	GetInvItemByName(var_77_int, var_75_string);
	var_77_int = var_74_int;
	return 2;
}


func_2657(var_98_object)
{
	var_99_object = Obj();
	var_98_object = var_99_object;
	func_2633(var_99_object);
	var_100_object = Obj();
	var_98_object = var_100_object;
	func_2532(var_98_object, var_100_object);
	return 0;
}


func_2147(var_20_bool, var_21_object, var_22_bool)
{
	var_23_string = ""; var_24_string = "";
	var_25_bool = 0; var_26_object = Obj(); var_27_string = "";
	var_21_object = var_26_object;
	func_1430(var_25_bool, var_26_object, "class");
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


func_2667(var_12_object)
{
	var_13_object = Obj();
	func_1899(var_13_object);
	ReportReputationChange(var_12_object, var_13_object, (float)-0.12999999523162842, (bool)1);
	var_18_object = Obj();
	var_12_object = var_18_object;
	TaskCall(5);
	func_999(var_18_object);
	TaskReturn();
	return 0;
}


func_1141(var_156_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_157_string = "";
	var_156_string = var_157_string;
	func_1771(var_157_string);
	PlayAnimation("all", var_156_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_156_string);
	RemoveEnvelope();
	return 0;
}


func_1658(var_15_object, var_16_int, var_17_float)
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
		func_1410(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_1905(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		CreateVectorVector(var_28_object);
		var_29_int = 1;

	Label_1687:
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
			goto Label_1687;
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
			func_1726(var_62_float, var_63_cvector, var_64_cvector);
			return 18;
		}
		var_28_object = 0;
	}
	var_105_object = Obj();
	var_15_object = var_105_object;
	func_1614(var_105_object);
	return 18;
	
}


func_661(var_49_float)
{
	var_50_float = 0; var_51_float = 0;
	GetCameraFarDistance(var_51_float);
	var_51_float = var_49_float;
	return 2;
}


func_1173(var_0_bool, var_1_object, var_380_object, var_397_bool)
{
	var_383_bool = 0; var_384_object = Obj(); var_385_cvector = CVector(0,0,0); var_386_float = 0; var_387_bool = 0; var_388_object = Obj(); var_389_cvector = CVector(0,0,0); var_390_float = 0;
	var_391_bool = 0; var_392_object = Obj(); var_393_string = "";
	var_380_object = var_392_object;
	func_1430(var_391_bool, var_392_object, "disease");
	var_394_bool = var_391_bool == 0; //@nz
	if(var_394_bool != 0) {
		return 8;
	}
	var_395_bool = 0; var_396_object = Obj();
	var_380_object = var_396_object;
	TaskCall(0);
	func_0(var_395_bool, var_396_object);
	TaskReturn();
	var_450_bool = var_397_bool == 0; //@nz
	if(var_450_bool != 0) {
		return 8;
	}
	Face(var_380_object);
	WaitForAnimEnd(var_387_bool);
	var_451_bool = var_387_bool;
	if(var_451_bool != 0) {
		PlayAnimation("all", "attack_on");
		WaitForAnimEnd(var_387_bool);
		var_454_bool = var_387_bool;
		if(var_454_bool != 0) {
			var_455_bool = 0;
			func_2324((bool)1);
			SetTimer((int)71, (int)1);

		Label_1213:
			var_458_bool = 0;
			var_458_bool = 0;
			var_459_bool = var_0_bool == 0; //@nz
			if(var_459_bool != 0) {
				var_460_bool = 0; var_461_object = Obj(); var_462_string = "";
				var_380_object = var_461_object;
				func_1430(var_460_bool, var_461_object, "cleansed");
				var_463_bool = var_460_bool == 0; //@nz
				if(var_463_bool != 0) {
					var_458_bool = 1;
				}
			}
			if(var_458_bool != 0) {
				@@var_380_object:SetProperty("cleansed", (bool)1);
				var_0_bool = var_380_object;
				GetScene(var_388_object);
				@@var_380_object:GetPosition(var_389_cvector);
				AddActorByType(var_1_object, "scripted", var_388_object, var_389_cvector, CVector(0.0, 0.0, 1.0), "corpse_fire.xml");
				var_388_object = 0;
			}
			PlayAnimation("all", "cattack");
			WaitForAnimEnd(var_387_bool);
			var_471_bool = 0;
			var_471_bool = 1;
			var_472_bool = var_387_bool == 0; //@nz
			if(var_472_bool != 1) {
				var_473_bool = 0; var_474_object = Obj();
				var_380_object = var_474_object;
				func_1580(var_473_bool, var_474_object);
				var_475_bool = var_473_bool == 0; //@nz
				if(var_475_bool != 1) {
					var_471_bool = 0;
				}
			}
			if(var_471_bool != 0) {
			} else {
				@@var_380_object:GetProperty("disease", var_390_float);
				var_485_bool = var_390_float <= (float)0.10000000149011612;
				if(var_485_bool != 0) {
					@@var_380_object:SetProperty("disease", (float)0.0);
					goto Label_1277;
				}
				var_490_int = var_390_float - (float)0.10000000149011612;
				@@var_380_object:SetProperty("disease", var_490_int);
				goto Label_1213;
			}
		Label_1277:
			KillTimer((int)71);
			var_477_bool = 0;
			func_2324((bool)0);
			var_478_bool = var_0_bool;
			if(var_478_bool != 0) {
				@@@var_0_bool:RemoveProperty("cleansed");
				var_0_bool = 0;
			}
			var_480_bool = var_387_bool;
			if(var_480_bool != 0) {
				PlayAnimation("all", "attack_off");
				WaitForAnimEnd();
			}
		}
	}
	StopAsync();
	return 8;
	
}


func_2719(var_14_bool, var_15_object, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0;
	var_16_object = var_21_object;
	var_22_bool = !var_17_bool;
	func_2147(var_20_bool, var_21_object, var_22_bool);
	if(var_20_bool != 0) {
		CanSee(var_19_bool, var_15_object);
		var_88_bool = 0;
		var_88_bool = 1;
		var_89_bool = var_19_bool;
		if(var_89_bool != 1) {
			var_90_float = 0; var_91_object = Obj();
			var_15_object = var_91_object;
			func_1417(var_90_float, var_91_object);
			var_99_bool = var_90_float <= (float)490000.0;
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


func_673(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_689(var_59_bool)
{
	var_59_bool = 0;
	return 0;
}


func_178(var_0_bool, var_1_object, var_12_int)
{
	var_14_bool = var_12_int != (int)0;
	if(var_14_bool != 0) {
		return 0;
	}
	var_15_bool = 0; var_16_object = Obj();
	var_16_object = var_1_object;
	func_11(var_15_bool, var_16_object);
	var_40_bool = var_15_bool == 0; //@nz
	if(var_40_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_691(var_53_object, var_54_cvector)
{
	var_55_object = Obj(); var_56_object = Obj();
	FindShiftedPathTo(var_56_object, var_54_cvector);
	var_56_object = var_53_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2745(var_16_int)
{
	var_17_object = Obj(); var_18_float = 0; var_19_object = Obj(); var_20_bool = 0; var_21_string = ""; var_22_float = 0; var_23_float = 0; var_24_float = 0; var_25_object = Obj(); var_26_float = 0; var_27_object = Obj(); var_28_bool = 0; var_29_string = ""; var_30_float = 0; var_31_float = 0; var_32_float = 0;
	var_34_bool = var_16_int != (int)70;
	if(var_34_bool != 0) {
		return 16;
	}
	var_35_object = GlobalVars[0];
	var_36_bool = var_35_object == 0; //@ne
	if(var_36_bool != 0) {
		return 16;
	}
	var_37_object = GlobalVars[0];
	@@var_37_object:Intersect(var_25_object, var_26_float);
	var_38_object = GlobalVars[0];
	var_39_bool = GlobalVars[3];
	if(var_39_bool != 0) {
		var_40_float = 0; var_41_float = 0; var_42_float = 0;
		var_26_float = var_41_float;
		var_43_float = GlobalVars[2];
		var_43_float = var_42_float;
		func_1915(var_40_float, var_41_float, var_42_float);
	} else {
						var_146_float = 0.05000000074505806;
	}
	@@var_38_object:SetLength(var_40_float);
	func_1970();
	
Label_2774:
	@@var_25_object:Next(var_28_bool, var_27_object);
	var_51_bool = var_28_bool;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		var_52_bool = 0;
		var_53_bool = var_27_object != 0; //@nn
		if(var_53_bool != 0) {
			var_54_object = Obj();
			func_1899(var_54_object);
			var_55_bool = var_27_object != var_54_object;
			if(var_55_bool != 0) {
				var_52_bool = 1;
			}
		}
		if(var_52_bool != 0) {
			var_56_bool = 0; var_57_object = Obj(); var_58_string = "";
			var_27_object = var_57_object;
			func_1430(var_56_bool, var_57_object, "class");
			if(var_56_bool != 0) {
				@@var_27_object:GetProperty("class", var_29_string);
			}
			var_67_bool = var_29_string != "sanitar";
			if(var_67_bool != 0) {
				var_68_float = 0; var_69_object = Obj(); var_70_float = 0; var_71_int = 0;
				var_27_object = var_69_object;
				func_1442(var_68_float, var_69_object, (float)0.10000000149011612, (int)2);
				var_68_float = var_30_float;
				var_131_bool = 0; var_132_object = Obj(); var_133_string = "";
				var_27_object = var_132_object;
				func_1430(var_131_bool, var_132_object, "disease");
				if(var_131_bool != 0) {
					@@var_27_object:GetProperty("disease", var_31_float);
					var_136_bool = var_31_float <= (float)0.10000000149011612;
					if(var_136_bool != 0) {
					} else {
						(float)0 = (float)0 - (float)0.10000000149011612;
	}
					return 16;

				}
				@@var_27_object:SetProperty("disease", var_31_float);
			}
			var_138_bool = 0; var_139_object = Obj(); var_140_string = "";
			var_27_object = var_139_object;
			func_1430(var_138_bool, var_139_object, "fire");
			if(var_138_bool != 0) {
				@@var_27_object:GetProperty("fire", var_32_float);
				var_144_int = var_32_float + (float)0.10000000149011612;
				@@var_27_object:SetProperty("fire", var_144_int);
			}
		}
	}
	goto Label_2774;
	
}
EMIT "Stack[-6] = 0";
EMIT "Stack[-8] = 0";


func_1726(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	GetScene(var_24_object);
	AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	var_28_object = Obj();
	var_17_object = var_28_object;
	func_1614(var_28_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_200(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1740(var_75_bool)
{
	var_76_bool = 0; var_77_bool = 0;
	IsLoaded(var_77_bool);
	var_77_bool = var_75_bool;
	return 2;
}


func_1745(var_250_object)
{
	var_251_float = 0; var_252_cvector = CVector(0,0,0); var_253_float = 0; var_254_cvector = CVector(0,0,0);
	@@var_250_object:GetEyesHeight(var_253_float);
	var_254_cvector = CVector(0.0, 0.0, 0.0);
	var_255_float = GetByIndex(var_254_cvector, 1);
	var_253_float = var_255_float;
	SetByIndex(var_254_cvector, 1) = var_255_float;
	LookAsync(var_250_object, "head", var_254_cvector);
	return 4;
}


func_216(var_439_string)
{
	var_439_string = "walk";
	return 0;
}


func_218(var_440_string)
{
	var_440_string = "run";
	return 0;
}


func_220(var_3_object, var_230_object, var_231_object)
{
	var_3_object = var_231_object;
	var_236_bool = 0; var_237_object = Obj(); var_238_float = 0; var_239_float = 0; var_240_bool = 0; var_241_bool = 0;
	var_231_object = var_237_object;
	func_258(var_231_object, var_236_bool, var_237_object, (float)500.0, (float)5000, (bool)0, (bool)1);
	var_314_bool = var_236_bool == 0; //@nz
	if(var_314_bool != 0) {
		var_3_object = 0;
	}
	var_230_object = var_3_object;
	return 0;
}


func_1756(var_81_string, var_82_int, var_83_int, var_84_int)
{
	var_85_int = 0; var_86_bool = 0; var_87_int = 0; var_88_bool = 0;
	var_89_bool = 0; var_90_int = 0; var_91_int = 0;
	var_82_int = var_90_int;
	var_83_int = var_91_int;
	func_1933(var_89_bool, var_90_int, var_91_int);
	if(var_89_bool != 0) {
		irand(var_87_int, var_84_int);
		var_96_int = var_87_int + (int)1;
		AddItem(var_88_bool, var_81_string, (int)0, var_96_int);
	}
	return 4;
}


func_2283()
{
	var_11_float = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_float = 0; var_15_object = Obj(); var_16_object = Obj();
	var_17_object = GlobalVars[4];
	func_1938(Obj());
	var_18_object = var_17_object;
	GlobalVars[4] = var_17_object;
	GetAttackDistance(var_14_float);
	var_21_float = GlobalVars[2];
	var_21_float = var_14_float / (float)600.0;
	GlobalVars[2] = var_21_float;
	GetScene(var_15_object);
	AddActorByType(var_16_object, "flame", var_15_object, CVector(0.0, 0.0, 0.0));
	var_25_object = Obj();
	func_1899(var_25_object);
	@@var_16_object:Attach(var_25_object, "flame");
	var_29_bool = GlobalVars[3];
	GlobalVars[3] = (bool)0;
	@@var_16_object:SetLength((float)0.05000000074505806);
	var_31_object = GlobalVars[0];
	var_16_object = var_31_object;
	GlobalVars[0] = var_31_object;
	SetTimer((int)70, (float)0.10000000149011612);
	return 6;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1771(var_157_string)
{
	var_158_bool = 0; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_bool = 0; var_163_float = 0; var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_bool = 0; var_167_int = 0; var_168_bool = 0; var_169_int = 0; var_170_bool = 0; var_171_float = 0; var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0);
	IsExisting3DSound(var_166_bool, var_157_string);
	var_174_bool = var_166_bool == 0; //@nz
	if(var_174_bool != 0) {
		var_167_int = 0;

	Label_1777:
		var_176_int = var_167_int + (int)1;
		var_177_int = var_157_string + var_176_int;
		IsExisting3DSound(var_168_bool, var_177_int);
		var_178_bool = var_168_bool == 0; //@nz
		if(var_178_bool != 0) {
		} else {
			var_167_int = var_167_int + (int)1;
			goto Label_1777;
		}
		var_179_bool = var_167_int == 0; //@nz
		if(var_179_bool != 0) {
			return 16;
		}
		irand(var_169_int, var_167_int);
		var_181_int = var_169_int + (int)1;
		var_157_string = var_157_string + var_181_int;
	}
	Is3DSoundLoaded(var_170_bool, var_157_string);
	var_182_bool = var_170_bool;
	if(var_182_bool != 0) {
		GetEyesHeight(var_171_float);
		GetDirection(var_172_cvector);
		var_173_cvector = var_172_cvector * (int)50;
		var_184_float = GetByIndex(var_173_cvector, 1);
		var_184_float = var_184_float + var_171_float;
		SetByIndex(var_173_cvector, 1) = var_184_float;
		PlayGlobalSound(var_157_string, var_173_cvector);
	}
	return 16;
	
}


func_258(var_2_bool, var_236_bool, var_237_object, var_238_float, var_239_float, var_240_bool, var_241_bool)
{
	var_242_bool = 0; var_243_bool = 0; var_244_bool = 0; var_245_bool = 0;
	var_246_object = Obj();
	var_237_object = var_246_object;
	func_1961(var_246_object);
	SetTimer((int)1, (int)5);
	CanSee(var_244_bool, var_237_object);
	var_249_bool = var_244_bool;
	if(var_249_bool != 0) {
		var_2_bool = true;
		var_250_object = Obj();
		var_237_object = var_250_object;
		func_1745(var_250_object);
	} else {
		var_2_bool = false;
	}
	var_257_bool = 0; var_258_object = Obj();
	var_237_object = var_258_object;
	func_1425(var_257_bool, var_258_object);
	if(var_257_bool != 0) {
		var_259_object = Obj();
		func_1899(var_259_object);
		SendPlayerEnemy(var_237_object, var_259_object);
	}
	var_260_bool = 0; var_261_object = Obj(); var_262_float = 0; var_263_float = 0; var_264_bool = 0; var_265_bool = 0;
	var_237_object = var_261_object;
	var_238_float = var_262_float;
	var_239_float = var_263_float;
	var_240_bool = var_264_bool;
	var_241_bool = var_265_bool;
	func_363(var_244_bool, var_245_bool, var_260_bool, var_261_object, var_262_float, var_263_float, var_264_bool, var_265_bool);
	var_260_bool = var_245_bool;
	var_311_bool = var_2_bool;
	if(var_311_bool != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_245_bool = var_236_bool;
	return 4;
	
}


func_777()
{
	var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_bool = 0; var_66_float = 0; var_67_bool = 0; var_68_int = 0; var_69_int = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0; var_73_float = 0; var_74_bool = 0;
	WaitForAnimEnd();
	var_75_bool = 0;
	func_1740(var_75_bool);
	var_78_bool = var_75_bool == 0; //@nz
	if(var_78_bool != 0) {
		return 14;
	}
	func_1988((int)0);
	var_79_int = var_68_int;
	var_69_int = 0;
	
Label_791:
	var_92_bool = 0;
	var_92_bool = 0;
	var_94_bool = var_69_int < (int)5;
	if(var_94_bool != 0) {
		var_95_bool = 0;
		func_1740(var_95_bool);
		if(var_95_bool != 0) {
			var_92_bool = 1;
		}
	}
	if(var_92_bool != 0) {
		irand(var_70_int, (int)3);
		var_98_bool = var_70_int == (int)0;
		if(var_98_bool != 0) {
			var_99_int = var_68_int;
			if(var_99_int == 0) goto Label_824;
			irand(var_71_int, var_68_int);
			var_101_string = ""; var_102_int = 0;
			var_71_int = var_102_int;
			func_1981(var_101_string, var_102_int);
			PlayAnimation("all", var_101_string);
			WaitForAnimEnd(var_72_bool);
			var_103_bool = var_72_bool == 0; //@nz
			if(var_103_bool != 0) {
			} else {
		} else {
				var_108_bool = var_70_int == (int)1;
				if(var_108_bool != 0) {
					rand(var_73_float, (int)4);
					var_111_int = var_73_float + (int)1;
					Sleep(var_111_int, var_74_bool);
					var_112_bool = var_74_bool == 0; //@nz
					if(var_112_bool != 0) {
						goto Label_853;
					}
					goto Label_842;
				}
				var_113_int = var_69_int;
				if(var_113_int == 0) goto Label_842;
				goto Label_853;
		}
		Label_842:
			var_104_bool = 0;
			func_856(var_104_bool);
			var_105_bool = var_104_bool == 0; //@nz
			if(var_105_bool != 0) {
				goto Label_853;
			}
			ResetAAS();
			var_69_int = var_69_int + (int)1;
			goto Label_791;

		}
	}
Label_853:
	ResetAAS();
	return 14;
	
}


func_2324(var_22_bool)
{
	var_23_float = 0; var_24_float = 0; var_25_object = Obj(); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_float = 0; var_29_float = 0; var_30_object = Obj(); var_31_cvector = CVector(0,0,0); var_32_float = 0;
	var_33_bool = var_22_bool;
	if(var_33_bool != 0) {
		var_34_float = GlobalVars[2];
		var_34_float = var_28_float;
	} else {
				var_28_float = 0.05000000074505806;
	}
	var_35_object = GlobalVars[0];
	@@var_35_object:GetLength(var_29_float);
	var_36_bool = var_28_float < var_29_float;
	if(var_36_bool != 0) {
		var_28_float = var_29_float;
	}
	var_37_object = GlobalVars[0];
	@@var_37_object:SetLength(var_29_float);
	var_38_bool = GlobalVars[3];
	var_39_bool = var_38_bool != var_22_bool;
	if(var_39_bool != 0) {
		var_40_bool = var_22_bool;
		if(var_40_bool != 0) {
			var_41_object = GlobalVars[1];
			var_42_bool = var_41_object == 0; //@ne
			if(var_42_bool != 0) {
				var_31_cvector = CVector(0.0, 0.0, 0.0);
				GetHeight(var_32_float);
				var_43_float = GetByIndex(var_31_cvector, 1);
				var_32_float = var_43_float;
				SetByIndex(var_31_cvector, 1) = var_43_float;
				PlayLoopedGlobalSound(var_30_object, "flame_loop", var_31_cvector, (int)0, (int)200);
				var_47_object = GlobalVars[1];
				var_30_object = var_47_object;
				GlobalVars[1] = var_47_object;
				var_30_object = 0;
			}
			var_48_object = GlobalVars[1];
			@@var_48_object:FadeIn((int)2);
		} else {
			var_51_object = GlobalVars[1];
			var_52_bool = var_51_object != 0; //@nn
			if(var_52_bool == 0) goto Label_2376;
			var_53_object = GlobalVars[1];
			@@var_53_object:FadeOut((int)2);

		}
	Label_2376:
		var_50_bool = GlobalVars[3];
		var_22_bool = var_50_bool;
		GlobalVars[3] = var_50_bool;
	}
	return 10;
	
}


func_1812(var_158_bool, var_159_string)
{
	var_158_bool = 1;
	var_160_bool = 0;
	var_160_bool = 1;
	var_161_bool = 0;
	var_161_bool = 1;
	var_162_bool = 0;
	var_162_bool = 1;
	var_163_bool = 0;
	var_163_bool = 1;
	var_164_bool = 0;
	var_164_bool = 1;
	var_165_bool = 0;
	var_165_bool = 1;
	var_166_bool = 0;
	var_166_bool = 1;
	var_167_bool = 0;
	var_167_bool = 1;
	var_168_bool = 0;
	var_168_bool = 1;
	var_169_bool = 0;
	var_169_bool = 1;
	var_170_bool = 0;
	var_170_bool = 1;
	var_172_bool = var_159_string == "woman";
	if(var_172_bool != 1) {
		var_174_bool = var_159_string == "worker";
		if(var_174_bool != 1) {
			var_170_bool = 0;
		}
	}
	if(var_170_bool != 1) {
		var_176_bool = var_159_string == "butcher";
		if(var_176_bool != 1) {
			var_169_bool = 0;
		}
	}
	if(var_169_bool != 1) {
		var_178_bool = var_159_string == "wasted_girl";
		if(var_178_bool != 1) {
			var_168_bool = 0;
		}
	}
	if(var_168_bool != 1) {
		var_180_bool = var_159_string == "boy";
		if(var_180_bool != 1) {
			var_167_bool = 0;
		}
	}
	if(var_167_bool != 1) {
		var_182_bool = var_159_string == "vaxxabitka";
		if(var_182_bool != 1) {
			var_166_bool = 0;
		}
	}
	if(var_166_bool != 1) {
		var_184_bool = var_159_string == "unosha";
		if(var_184_bool != 1) {
			var_165_bool = 0;
		}
	}
	if(var_165_bool != 1) {
		var_186_bool = var_159_string == "wasted_male";
		if(var_186_bool != 1) {
			var_164_bool = 0;
		}
	}
	if(var_164_bool != 1) {
		var_188_bool = var_159_string == "alkash";
		if(var_188_bool != 1) {
			var_163_bool = 0;
		}
	}
	if(var_163_bool != 1) {
		var_190_bool = var_159_string == "dohodyaga";
		if(var_190_bool != 1) {
			var_162_bool = 0;
		}
	}
	if(var_162_bool != 1) {
		var_192_bool = var_159_string == "vaxxabit";
		if(var_192_bool != 1) {
			var_161_bool = 0;
		}
	}
	if(var_161_bool != 1) {
		var_194_bool = var_159_string == "nudegirl";
		if(var_194_bool != 1) {
			var_160_bool = 0;
		}
	}
	if(var_160_bool != 1) {
		var_196_bool = var_159_string == "morlok";
		if(var_196_bool != 1) {
			var_158_bool = 0;
		}
	}
	return 0;
}


func_1307(var_0_bool)
{
	var_62_bool = var_0_bool;
	if(var_62_bool != 0) {
		@@@var_0_bool:RemoveProperty("cleansed");
	}
	KillTimer((int)71);
	var_65_bool = 0;
	func_2324((bool)0);
	Stop();
	StopAsync();
	return 0;
}


func_2845(var_111_bool, var_112_object)
{
	var_113_bool = 0; var_114_object = Obj();
	var_112_object = var_114_object;
	func_2430(var_113_bool, var_114_object);
	var_113_bool = var_111_bool;
	return 0;
}


func_307(var_1_object, var_12_int)
{
	var_14_bool = var_12_int == (int)1;
	if(var_14_bool != 0) {
		var_15_object = Obj();
		var_15_object = var_1_object;
		func_1961(var_15_object);
	} else {
		var_20_int = 0;
		var_12_int = var_20_int;
		func_465(var_11_object, var_12_int, var_20_int);
	}
	return 0;
	
}


func_321(var_2_bool)
{
	KillTimer((int)1);
	var_13_bool = var_2_bool;
	if(var_13_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	func_487(var_11_object);
	return 0;
}


func_2380(var_336_cvector)
{
	var_337_cvector = CVector(0,0,0); var_338_float = 0; var_339_cvector = CVector(0,0,0); var_340_float = 0; var_341_bool = 0; var_342_cvector = CVector(0,0,0); var_343_float = 0; var_344_cvector = CVector(0,0,0); var_345_float = 0; var_346_bool = 0;
	GetPosition(var_342_cvector);
	GetHeight(var_343_float);
	var_347_float = GetByIndex(var_342_cvector, 1);
	var_349_float = var_343_float / (int)2;
	var_347_float = var_347_float + var_349_float;
	SetByIndex(var_342_cvector, 1) = var_347_float;
	var_344_cvector = var_336_cvector - var_342_cvector;
	var_350_int = var_344_cvector | var_344_cvector;
	var_345_float = sqrt(var_350_int);
	var_352_bool = var_345_float < (int)50;
	if(var_352_bool != 0) {
		var_346_bool = 0;
	} else {
			var_357_float = GetByIndex(var_344_cvector, 1);
			var_358_float = var_357_float / var_345_float;
			var_346_bool = var_358_float < (float)-0.1428571492433548;
	}
	var_354_bool = var_346_bool;
	if(var_354_bool != 0) {
		var_355_string = "cattack";
	} else {
		var_356_string = "attack";

	}
	PlayAnimation("all", var_355_string);
	return 10;
	
}


func_856(var_104_bool)
{
	var_104_bool = 1;
	return 0;
}


func_858()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_863(var_0_bool, var_101_object, var_102_object, var_232_bool)
{
	var_104_bool = 0; var_105_float = 0; var_106_object = Obj(); var_107_bool = 0; var_108_float = 0; var_109_object = Obj();
	var_0_bool = var_102_object;
	Face(var_102_object);
	SetAttackState((bool)1);
	
Label_871:
	var_111_bool = 0; var_112_object = Obj();
	var_112_object = var_0_bool;
	func_2845(var_111_bool, var_112_object);
	if(var_111_bool != 0) {
		var_201_object = Obj();
		var_201_object = var_0_bool;
		func_1961(var_201_object);
		ReportAttack(var_0_bool);
		var_206_float = 0; var_207_object = Obj();
		var_207_object = var_0_bool;
		func_1417(var_206_float, var_207_object);
		var_206_float = var_108_float;
		var_215_bool = var_108_float <= (float)90000.0;
		if(var_215_bool != 0) {
			var_216_bool = (bool)0 == 0; //@nz
			if(var_216_bool != 0) {
				SetAttackState((bool)1);
				var_218_bool = 0;
				func_2324((bool)1);
				PlayAnimation("all", "attack_on");
			} else {
				PlayAnimation("all", "bjump");
		}
			var_224_bool = var_108_float >= (float)490000.0;
			if(var_224_bool != 0) {
				var_225_bool = (bool)1;
				if(var_225_bool != 0) {
					SetAttackState((bool)0);
					var_227_bool = 0;
					func_2324((bool)0);
					PlayAnimation("all", "attack_off");
				} else {
					StopAsync();
					var_230_object = Obj(); var_231_object = Obj();
					var_231_object = var_0_bool;
					TaskCall(1);
					func_220(var_235_object, var_230_object, var_231_object);
					TaskReturn();
					var_232_bool = var_109_object;
					var_0_bool = var_109_object;
					var_315_bool = var_0_bool == 0; //@ne
					if(var_315_bool != 0) {
					} else {
						Face(var_0_bool);
						var_109_object = 0;
			}
					var_320_bool = (bool)0 == 0; //@nz
					if(var_320_bool != 0) {
						SetAttackState((bool)1);
						var_322_bool = 0;
						func_2324((bool)1);
						PlayAnimation("all", "attack_on");
						var_107_bool = 1;
						goto Label_964;
					}
					var_325_object = Obj();
					var_325_object = var_0_bool;
					func_2411(var_325_object);
				}
	}
			SetAttackState((bool)0);
			PlayAnimation("all", "attack_off");
			var_319_bool = 0;
			func_2324((bool)0);
			StopAsync();
			var_101_object = var_0_bool;
			return 6;
		}
		goto Label_964;
	}
	goto Label_964;
	
Label_964:
	WaitForAnimEnd();
	goto Label_871;
	
}


func_1899(var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj();
	self(var_27_object);
	var_27_object = var_25_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_363(var_0_bool, var_1_object, var_260_bool, var_261_object, var_262_float, var_263_float, var_264_bool, var_265_bool)
{
	var_266_bool = 0; var_267_bool = 0; var_268_object = Obj(); var_269_cvector = CVector(0,0,0); var_270_cvector = CVector(0,0,0); var_271_cvector = CVector(0,0,0); var_272_float = 0; var_273_object = Obj(); var_274_bool = 0; var_275_bool = 0; var_276_object = Obj(); var_277_cvector = CVector(0,0,0); var_278_cvector = CVector(0,0,0); var_279_cvector = CVector(0,0,0); var_280_float = 0; var_281_object = Obj();
	var_0_bool = false;
	var_1_object = var_261_object;
	var_265_bool = var_275_bool;
	
Label_367:
	var_282_bool = 0; var_283_object = Obj();
	var_261_object = var_283_object;
	func_503(var_282_bool, var_283_object);
	var_286_bool = var_282_bool == 0; //@nz
	if(var_286_bool != 0) {
		var_260_bool = 0;
		return 16;
	}
	@@var_261_object:GetPosition(var_277_cvector);
	GetPosition(var_278_cvector);
	var_279_cvector = var_277_cvector - var_278_cvector;
	var_280_float = var_279_cvector | var_279_cvector;
	var_287_bool = 0;
	var_287_bool = 0;
	var_289_bool = var_263_float > (int)0;
	if(var_289_bool != 0) {
		var_290_float = var_263_float * var_263_float;
		var_291_bool = var_280_float > var_290_float;
		if(var_291_bool != 0) {
			var_287_bool = 1;
		}
	}
	if(var_287_bool != 0) {
		Stop();
		var_260_bool = 0;
		return 16;
	}
	var_292_float = var_262_float * var_262_float;
	var_293_bool = var_280_float > var_292_float;
	if(var_293_bool != 0) {
		@@var_261_object:GetPFPosition(var_277_cvector);
		FindPathTo(var_281_object, var_277_cvector);
		var_294_bool = var_281_object != 0; //@nn
		if(var_294_bool != 0) {
			var_281_object = var_276_object;
			var_281_object = 0;
		}
		var_295_bool = var_276_object != 0; //@nn
		if(var_295_bool != 0) {
			var_296_bool = var_275_bool;
			if(var_296_bool == 0) goto Label_416;
			var_275_bool = 0;
			RotatePath(var_276_object, var_274_bool);
			var_297_bool = var_274_bool == 0; //@nz
			if(var_297_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_300_string = "";
				func_510(var_300_string);
				var_301_string = "";
				func_512(var_301_string);
				FollowPath(var_276_object, var_264_bool, var_274_bool, var_300_string, var_301_string);
				var_302_bool = var_274_bool == 0; //@nz
				if(var_302_bool != 0) {
					var_303_bool = var_0_bool;
					if(var_303_bool != 0) {
						var_276_object = 0;
						goto Label_463;
					EMIT "GOTO 0x1b4";
					}
				} else {
					var_276_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_274_bool);
					var_306_bool = var_274_bool == 0; //@nz
					if(var_306_bool != 0) {
						var_307_bool = var_0_bool;
						if(var_307_bool != 0) {
							var_276_object = 0;
							goto Label_463;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_463;
	}
			var_281_object = 0;
			goto Label_461;

		Label_461:
			var_276_object = 0;

		}
		goto Label_367;
	}
Label_463:
	var_260_bool = !var_0_bool;
	return 16;
	
}


func_2411(var_325_object)
{
	var_326_cvector = CVector(0,0,0); var_327_float = 0; var_328_cvector = CVector(0,0,0); var_329_float = 0;
	@@var_325_object:GetPosition(var_328_cvector);
	var_332_bool = IsFuncExist(var_325_object, "@GetHeight", (int)1);
	if(var_332_bool != 0) {
		@@var_325_object:GetHeight(var_329_float);
		var_333_float = GetByIndex(var_328_cvector, 1);
		var_335_float = var_329_float / (int)2;
		var_333_float = var_333_float + var_335_float;
		SetByIndex(var_328_cvector, 1) = var_333_float;
	}
	var_336_cvector = CVector(0,0,0);
	var_328_cvector = var_336_cvector;
	func_2380(var_336_cvector);
	return 4;
}


func_1905(var_43_cvector, var_44_cvector)
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


func_1396(var_93_string, var_94_int)
{
	var_96_bool = var_94_int == (int)2;
	if(var_96_bool != 0) {
		var_93_string = "fire";
		return 0;
	EMIT "GOTO 0x580";
	}
	var_98_bool = var_94_int == (int)1;
	if(var_98_bool != 0) {
		var_93_string = "bullet";
		return 0;
	}
	var_93_string = "phys";
	return 0;
}


func_1915(var_40_float, var_41_float, var_42_float)
{
	var_44_bool = var_41_float < var_42_float;
	if(var_44_bool != 0) {
		var_41_float = var_40_float;
	} else {
		var_42_float = var_40_float;
	}
	return 0;
	
}


func_2430(var_113_bool, var_114_object)
{
	var_115_bool = 0; var_116_float = 0; var_117_float = 0; var_118_string = ""; var_119_float = 0; var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_string = ""; var_124_float = 0;
	var_125_bool = 0; var_126_object = Obj();
	var_114_object = var_126_object;
	func_1556(var_125_bool, var_126_object);
	var_127_bool = var_125_bool == 0; //@nz
	if(var_127_bool != 0) {
		var_113_bool = 0;
		return 10;
	}
	var_128_object = GlobalVars[4];
	@@var_128_object:in(var_120_bool, var_114_object);
	var_129_bool = var_120_bool;
	if(var_129_bool != 0) {
		var_113_bool = 1;
		return 10;
	}
	var_130_bool = 0; var_131_object = Obj();
	var_114_object = var_131_object;
	func_1425(var_130_bool, var_131_object);
	if(var_130_bool != 0) {
		@@var_114_object:GetProperty("reputation", var_121_float);
		var_134_bool = var_121_float < (float)0.33000001311302185;
		if(var_134_bool != 0) {
			var_113_bool = 1;
			return 10;
		}
		@@var_114_object:GetProperty("disease", var_122_float);
		var_113_bool = var_122_float > (float)0.33000001311302185;
		return 10;
	}
	var_137_bool = 0; var_138_object = Obj(); var_139_string = "";
	var_114_object = var_138_object;
	func_1430(var_137_bool, var_138_object, "class");
	var_140_bool = var_137_bool == 0; //@nz
	if(var_140_bool != 0) {
		var_113_bool = 0;
		return 10;
	}
	@@var_114_object:GetProperty("class", var_123_string);
	var_142_bool = 0;
	var_142_bool = 1;
	var_143_bool = 0;
	var_143_bool = 1;
	var_144_bool = 0;
	var_144_bool = 1;
	var_146_bool = var_123_string == "bomber";
	if(var_146_bool != 1) {
		var_148_bool = var_123_string == "hunter";
		if(var_148_bool != 1) {
			var_144_bool = 0;
		}
	}
	if(var_144_bool != 1) {
		var_150_bool = var_123_string == "grabitel";
		if(var_150_bool != 1) {
			var_143_bool = 0;
		}
	}
	if(var_143_bool != 1) {
		var_152_bool = var_123_string == "rat_big";
		if(var_152_bool != 1) {
			var_142_bool = 0;
		}
	}
	if(var_142_bool != 0) {
		var_113_bool = 1;
		return 10;
	}
	var_153_bool = 0; var_154_object = Obj(); var_155_string = "";
	var_114_object = var_154_object;
	func_1430(var_153_bool, var_154_object, "disease");
	var_156_bool = var_153_bool == 0; //@nz
	if(var_156_bool != 0) {
		var_113_bool = 0;
		return 10;
	}
	var_157_bool = 0;
	var_157_bool = 1;
	var_158_bool = 0; var_159_string = "";
	var_123_string = var_159_string;
	func_1812(var_158_bool, var_159_string);
	if(var_158_bool != 1) {
		var_198_bool = var_123_string == "dog";
		if(var_198_bool != 1) {
			var_157_bool = 0;
		}
	}
	if(var_157_bool != 0) {
		@@var_114_object:GetProperty("disease", var_124_float);
		var_113_bool = var_124_float > (int)0;
		return 10;
	}
	var_113_bool = 0;
	return 10;
}


func_1922(var_112_float, var_113_float, var_114_float, var_115_float)
{
	var_116_bool = var_113_float < var_114_float;
	if(var_116_bool != 0) {
		var_114_float = var_112_float;
		return 0;
	}
	var_117_bool = var_113_float > var_115_float;
	if(var_117_bool != 0) {
		var_115_float = var_112_float;
		return 0;
	}
	var_113_float = var_112_float;
	return 0;
}


func_1410(var_45_cvector, var_46_object)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	GetPosition(var_49_cvector);
	@@var_46_object:GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
	return 4;
}


func_1417(var_206_float, var_207_object)
{
	var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0);
	GetPosition(var_211_cvector);
	@@var_207_object:GetPosition(var_212_cvector);
	var_213_cvector = var_212_cvector - var_211_cvector;
	var_206_float = var_213_cvector | var_213_cvector;
	return 6;
}


func_1933(var_89_bool, var_90_int, var_91_int)
{
	var_92_int = 0; var_93_int = 0;
	irand(var_93_int, var_91_int);
	var_89_bool = var_93_int < var_90_int;
	return 2;
}


func_1425(var_118_bool, var_119_object)
{
	var_120_bool = 0; var_121_bool = 0;
	IsPlayerActor(var_119_object, var_121_bool);
	var_121_bool = var_118_bool;
	return 2;
}


func_1938(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj();
	CreateObjectSet(var_20_object);
	var_20_object = var_18_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1430(var_56_bool, var_57_object, var_58_string)
{
	var_59_bool = 0; var_60_bool = 0;
	var_63_bool = IsFuncExist(var_57_object, "HasProperty", (int)2);
	var_64_bool = var_63_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_56_bool = 0;
		return 2;
	}
	@@var_57_object:HasProperty(var_58_string, var_60_bool);
	var_60_bool = var_56_bool;
	return 2;
}


func_1944(var_122_float)
{
	var_123_object = Obj(); var_124_object = Obj();
	CreateFloatVector(var_124_object);
	@@var_124_object:add(var_122_float);
	var_126_bool = var_122_float < (int)0;
	if(var_126_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_124_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1442(var_68_float, var_69_object, var_70_float, var_71_int)
{
	var_72_int = 0; var_73_string = ""; var_74_int = 0; var_75_float = 0; var_76_float = 0; var_77_float = 0; var_78_int = 0; var_79_string = ""; var_80_int = 0; var_81_float = 0; var_82_float = 0; var_83_float = 0;
	var_84_bool = 0; var_85_object = Obj(); var_86_string = "";
	var_69_object = var_85_object;
	func_1430(var_84_bool, var_85_object, "health");
	var_87_bool = var_84_bool == 0; //@nz
	if(var_87_bool != 0) {
		var_68_float = 0.0;
		return 12;
	}
	var_88_bool = 0; var_89_object = Obj(); var_90_string = "";
	var_69_object = var_89_object;
	func_1430(var_88_bool, var_89_object, "armor");
	var_91_bool = var_88_bool == 0; //@nz
	if(var_91_bool != 0) {
		var_78_int = 0;
	} else {
			@@var_69_object:GetProperty("armor", var_78_int);
	}
	var_93_string = ""; var_94_int = 0;
	var_71_int = var_94_int;
	func_1396(var_93_string, var_94_int);
	var_79_string = "armor_" + var_93_string;
	var_99_bool = 0; var_100_object = Obj(); var_101_string = "";
	var_69_object = var_100_object;
	var_79_string = var_101_string;
	func_1430(var_99_bool, var_100_object, var_101_string);
	var_102_bool = var_99_bool == 0; //@nz
	if(var_102_bool != 0) {
		var_80_int = 0;
	} else {
		@@var_69_object:GetProperty(var_79_string, var_80_int);

	}
	var_103_float = 0; var_104_float = 0; var_105_float = 0;
	var_106_int = var_78_int + var_80_int;
	var_104_float = var_106_int / (float)100.0;
	func_1915(var_103_float, var_104_float, (float)1);
	var_103_float = var_81_float;
	@@var_69_object:GetProperty("health", var_82_float);
	var_110_int = (int)1 - var_81_float;
	var_83_float = var_70_float * var_110_int;
	var_112_float = 0; var_113_float = 0; var_114_float = 0; var_115_float = 0;
	var_113_float = var_82_float - var_83_float;
	func_1922(var_112_float, var_113_float, (float)0, (float)1);
	@@var_69_object:SetProperty("health", var_112_float);
	var_118_bool = 0; var_119_object = Obj();
	var_69_object = var_119_object;
	func_1425(var_118_bool, var_119_object);
	if(var_118_bool != 0) {
		var_122_float = 0;
		var_122_float = -var_83_float;
		func_1944(var_122_float);
	}
	var_83_float = var_68_float;
	return 12;
	
}


func_1961(var_201_object)
{
	var_202_bool = 0; var_203_bool = 0;
	IsPlayerActor(var_201_object, var_203_bool);
	var_204_bool = var_203_bool;
	if(var_204_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1970()
{
	var_45_object = Obj(); var_46_object = Obj();
	GetScene(var_46_object);
	var_48_object = Obj();
	func_1899(var_48_object);
	BroadcastMessage("battle", var_48_object, var_46_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1981(var_85_string, var_86_int)
{
	var_87_string = ""; var_88_string = "";
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		"idle" = "idle" + var_86_int;
	}
	var_88_string = var_85_string;
	return 2;
}


func_1988(var_79_int)
{
	var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_bool = 0;
	var_82_int = 0;
	
Label_1990:
	var_85_string = ""; var_86_int = 0;
	var_82_int = var_86_int;
	func_1981(var_85_string, var_86_int);
	HasAnimation(var_83_bool, "all", var_85_string);
	var_90_bool = var_83_bool == 0; //@nz
	if(var_90_bool != 0) {
	} else {
		var_82_int = var_82_int + (int)1;
		goto Label_1990;
	}
	var_82_int = var_79_int;
	return 4;
	
}


func_465(var_0_bool, var_1_object, var_20_int)
{
	var_22_bool = var_20_int != (int)0;
	if(var_22_bool != 0) {
		return 0;
	}
	var_23_bool = 0; var_24_object = Obj();
	var_24_object = var_1_object;
	func_503(var_23_bool, var_24_object);
	var_59_bool = var_23_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2005(var_113_int)
{
	var_114_int = 0; var_115_int = 0;
	GetVariable("branch", var_115_int);
	var_115_int = var_113_int;
	return 2;
}


func_2011(var_15_object)
{
	var_16_int = 0;
	func_2005(var_16_int);
	var_21_bool = var_16_int == (int)1;
	if(var_21_bool != 0) {
		WorkWithCorpse(var_15_object);
	} else {
		Barter(var_15_object);
	}
	return 0;
	
}


func_2532(var_100_object, var_103_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	var_100_object = var_102_object;
	TaskCall(4);
	func_863(var_100_object, var_103_object, var_101_object, var_102_object);
	TaskReturn();
	var_103_object = var_100_object;
	ResetAAS();
	var_360_bool = 0;
	var_360_bool = 0;
	var_361_bool = 0; var_362_object = Obj();
	var_100_object = var_362_object;
	func_1580(var_361_bool, var_362_object);
	if(var_361_bool != 0) {
		var_378_bool = 0; var_379_object = Obj();
		var_100_object = var_379_object;
		func_1515(var_378_bool, var_379_object);
		if(var_378_bool != 0) {
			var_360_bool = 1;
		}
	}
	if(var_360_bool != 0) {
		var_380_object = Obj();
		var_100_object = var_380_object;
		TaskCall(6);
		func_1173(var_100_object, var_381_object, var_382_object, var_380_object);
		TaskReturn();
		ResetAAS();
	}
	return 0;
}


func_487(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2024(var_62_int, var_63_int)
{
	var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_bool = 0;
	var_68_bool = var_62_int > var_63_int;
	if(var_68_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_66_int = 0;
	var_70_bool = var_62_int != var_63_int;
	if(var_70_bool != 0) {
		var_71_int = var_63_int - var_62_int;
		irand(var_66_int, var_71_int);
	} else {
		var_80_bool = var_62_int == (int)0;
		if(var_80_bool == 0) goto Label_2042;
		return 4;
	}
Label_2042:
	var_66_int = var_66_int + var_62_int;
	var_73_bool = var_66_int == (int)0;
	if(var_73_bool != 0) {
		return 4;
	}
	var_74_int = 0; var_75_string = "";
	func_2142(var_74_int, "Money");
	AddItem(var_67_bool, var_74_int, (int)0, var_66_int);
	return 4;
	
}


func_999(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0;
	KillTimer((int)70);
	var_22_bool = 0;
	func_2324((bool)0);
	var_55_object = GlobalVars[0];
	RemoveActor(var_55_object);
	IsPlayerActor(var_18_object, var_20_bool);
	var_56_bool = var_20_bool;
	if(var_56_bool != 0) {
		func_2096();
	}
	func_2072();
	var_133_object = Obj();
	var_18_object = var_133_object;
	func_1025(var_133_object);
	return 2;
}


func_1515(var_27_bool, var_28_object)
{
	var_29_bool = 0; var_30_bool = 0;
	@@var_28_object:IsDead(var_30_bool);
	var_30_bool = var_27_bool;
	return 2;
}


func_1520(var_16_bool, var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj();
	var_22_bool = var_17_object == 0; //@ne
	if(var_22_bool != 0) {
		var_16_bool = 0;
		return 4;
	}
	var_23_bool = 0;
	var_23_bool = 0;
	var_26_bool = IsFuncExist(var_17_object, "IsDead", (int)1);
	if(var_26_bool != 0) {
		var_27_bool = 0; var_28_object = Obj();
		var_17_object = var_28_object;
		func_1515(var_27_bool, var_28_object);
		if(var_27_bool != 0) {
			var_23_bool = 1;
		}
	}
	if(var_23_bool != 0) {
		var_16_bool = 0;
		return 4;
	}
	GetScene(var_20_object);
	var_31_bool = var_20_object == 0; //@ne
	if(var_31_bool != 0) {
		var_16_bool = 0;
		return 4;
	}
	@@var_17_object:GetScene(var_21_object);
	var_32_bool = var_20_object != var_21_object;
	if(var_32_bool != 0) {
		var_16_bool = 0;
		return 4;
	}
	var_16_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_503(var_282_bool, var_283_object)
{
	var_284_bool = 0; var_285_object = Obj();
	var_283_object = var_285_object;
	func_1556(var_284_bool, var_285_object);
	var_284_bool = var_282_bool;
	return 0;
}


func_510(var_300_string)
{
	var_300_string = "walk";
	return 0;
}


