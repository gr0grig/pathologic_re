// @IMPORTS: SetRTEnvelope/2,Hold/0,IsOverrideActive/1,WorkWithCorpse/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SetTimer/2,KillTimer/1,IsInWalkMode/1,GetBrightness/1,rand/2,Sleep/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,Face/1,GetScene/1,GetGeometryLocator/3,AddActorByType/6,HasAnimation/3,IsExisting3DSound/2,IsPlayerActor/2,GetPFPosition/1,rand/1,SetSpeed/1,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,FindPathTo/2,FollowPath/5,Rotate/3,GetEyesHeight/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,IsLoaded/1,self/1,CreateObjectSet/1,Trace/1,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,ResetAAS/0,CanSee/2,GetProperty/2,SignalDeath/1
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:aattack_begin1|W:aattack_end1|W:knife|W:scripted|W:grabitel_knife.xml|A:SetScriptProperty|W:StartDirection|W:kill|W:attack_off|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:hunt|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:2|W:idle|W:GenerateMoney: iMin > iMax|W:Money|W:bottle_weapon|W:ognemet_ammo|A:in|W:class|W:grabitel|A:add
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x93
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @EVENT_0: op=0x18 vars=object
// @EVENT_22: op=0x8d vars=object,int,float,float
// @EVENT_16: op=0x8f vars=object,string
// @EVENT_41: op=0x91 vars=object
// @TASK_1: vars=bool,bool,bool params=0
// @EVENT_41: op=0xa7 vars=object
// @EVENT_7: op=0xb0 vars=int
// @EVENT_1: op=0xd7 vars=object
// @EVENT_3: op=0xe5 vars=object
// @EVENT_17: op=0xf3 vars=object
// @EVENT_30: op=0xfc vars=object,object
// @EVENT_10: op=0x141 vars=object
// @EVENT_28: op=0x145 vars=
// @TASK_2: vars= params=0
// @EVENT_1: op=0x158 vars=object
// @EVENT_3: op=0x166 vars=object
// @EVENT_17: op=0x174 vars=object
// @EVENT_30: op=0x17d vars=object,object
// @TASK_3: vars= params=1
// @EVENT_41: op=0x1dc vars=object
// @EVENT_1: op=0x1e5 vars=object
// @EVENT_3: op=0x1f3 vars=object
// @EVENT_17: op=0x201 vars=object
// @EVENT_30: op=0x20a vars=object,object
// @TASK_4: vars= params=2
// @TASK_5: vars=bool params=2
// @EVENT_17: op=0x294 vars=object
// @EVENT_30: op=0x29a vars=object,object
// @EVENT_26: op=0x2a1 vars=string
// @TASK_6: vars=object,int,int,bool,int params=2
// @EVENT_17: op=0x2dd vars=object
// @EVENT_30: op=0x2e3 vars=object,object
// @EVENT_26: op=0x2ea vars=string
// @TASK_7: vars=bool,object params=6
// @EVENT_17: op=0x4dd vars=object
// @EVENT_30: op=0x4e3 vars=object,object
// @EVENT_26: op=0x4ea vars=string
// @EVENT_7: op=0x55b vars=int
// @EVENT_10: op=0x56d vars=object
// @EVENT_41: op=0x578 vars=object
// @TASK_8: vars=bool,object,bool params=1
// @EVENT_41: op=0x5ca vars=object
// @EVENT_17: op=0x5d3 vars=object
// @EVENT_7: op=0x642 vars=int
// @EVENT_10: op=0x654 vars=object
// @STANDALONE_EVENT_22: op=0x8fe vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x906 vars=object,string
// @STANDALONE_EVENT_41: op=0x913 vars=object
// @PE: 0x0,0x9,0x77,0x8d,0x8f,0x91,0xa7,0xd7,0xe5,0xf3,0xfc,0x141,0x158,0x166,0x174,0x17d,0x1dc,0x1e5,0x1f3,0x201,0x20a,0x294,0x29a,0x2a1,0x2a7,0x2c3,0x2c6,0x2c9,0x2dd,0x2e3,0x2ea,0x4dd,0x4e3,0x4ea,0x55b,0x56d,0x578,0x581,0x5b6,0x5ca,0x5d3,0x642,0x654,0x663,0x797,0x7b5,0x7c0,0x870,0x877,0x888,0x88f,0x8ad,0x8f6,0x8fe,0x913

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0;
	IsOverrideActive(var_16_bool);
	var_17_bool = var_16_bool == 0; //@nz
	if(var_17_bool != 0) {
		WorkWithCorpse(var_14_bool);
	}
	return 2;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	func_160();
	var_14_bool = Obj();
	func_2323();
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0;
	var_22_bool = var_14_bool != (int)130;
	if(var_22_bool != 0) {
		return 6;
	}
	IsInWalkMode(var_18_bool);
	var_23_bool = var_18_bool;
	if(var_23_bool != 0) {
		GetBrightness(var_19_float);
		var_20_bool = var_19_float <= (float)0.20000000298023224;
		var_25_bool = var_20_bool != var_2_bool;
		if(var_25_bool != 0) {
			var_2_bool = var_20_bool;
			var_26_bool = var_20_bool;
			if(var_26_bool != 0) {
				func_335(var_19_float, var_20_bool);
				KillTimer((int)130);
				var_28_bool = 0;
				TaskCall(3);
				func_467(var_28_bool);
				TaskReturn();
				if(var_28_bool != 0) {
					func_328(var_19_float, var_20_bool);
				} else {
					SetTimer((int)130, (float)0.30000001192092896);
				}
			}
		}
	}
	return 6;
	
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_bool = var_16_object;
	func_2184(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		func_160();
		var_67_object = Obj();
		var_14_bool = var_67_object;
		func_2191(var_67_object);
	}
	return 0;
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_bool = var_16_object;
	func_2160(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		func_160();
		var_67_object = Obj();
		var_14_bool = var_67_object;
		func_2167(var_67_object);
	}
	return 0;
}


	task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool, var_53_object)
	{
	func_160();
	var_55_object = Obj();
	var_53_object = var_55_object;
	func_2221(var_55_object);
	return 0;
	}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj();
	var_14_object = var_17_object;
	var_15_bool = var_18_object;
	func_2249(var_16_bool, var_17_object, var_18_object);
	if(var_16_bool != 0) {
		var_14_object = Obj();
		func_243();
	}
	return 0;
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	RequestClearPath(var_14_bool);
	return 0;
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool)
{
	Stop();
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_bool = var_16_object;
	func_2184(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		func_462();
		var_66_object = Obj();
		var_14_bool = var_66_object;
		func_2191(var_66_object);
	}
	return 0;
}


task_2_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_bool = var_16_object;
	func_2160(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		func_462();
		var_66_object = Obj();
		var_14_bool = var_66_object;
		func_2167(var_66_object);
	}
	return 0;
}


	task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool, var_53_object)
	{
	func_462();
	var_54_object = Obj();
	var_53_object = var_54_object;
	func_2221(var_54_object);
	return 0;
	}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj();
	var_14_object = var_17_object;
	var_15_bool = var_18_object;
	func_2249(var_16_bool, var_17_object, var_18_object);
	if(var_16_bool != 0) {
		var_14_object = Obj();
		func_372();
	}
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	func_473();
	var_14_bool = Obj();
	func_2323();
	return 0;
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_bool = var_16_object;
	func_2184(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		func_473();
		var_66_object = Obj();
		var_14_bool = var_66_object;
		func_2191(var_66_object);
	}
	return 0;
}


task_3_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_bool = var_16_object;
	func_2160(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		func_473();
		var_66_object = Obj();
		var_14_bool = var_66_object;
		func_2167(var_66_object);
	}
	return 0;
}


	task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool, var_53_object)
	{
	func_473();
	var_54_object = Obj();
	var_53_object = var_54_object;
	func_2221(var_54_object);
	return 0;
	}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj();
	var_14_object = var_17_object;
	var_15_bool = var_18_object;
	func_2249(var_16_bool, var_17_object, var_18_object);
	if(var_16_bool != 0) {
		var_14_object = Obj();
		func_513();
	}
	return 0;
}


task_5_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj();
	var_14_bool = var_15_object;
	func_2208(var_15_object);
	return 0;
}


task_5_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj();
	var_14_object = var_17_object;
	var_15_bool = var_18_object;
	func_2249(var_16_bool, var_17_object, var_18_object);
	return 0;
}


task_5_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_16_bool = var_14_bool == "kill";
	if(var_16_bool != 0) {
		var_0_bool = true;
	}
	return 0;
}


task_6_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj();
	var_14_bool = var_15_object;
	func_2208(var_15_object);
	return 0;
}


task_6_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj();
	var_14_object = var_17_object;
	var_15_bool = var_18_object;
	func_2249(var_16_bool, var_17_object, var_18_object);
	return 0;
}


task_6_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_string, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_16_bool = var_14_bool == "kill";
	if(var_16_bool != 0) {
		var_17_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	return 0;
}


task_7_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj();
	var_14_bool = var_15_object;
	func_2208(var_15_object);
	return 0;
}


task_7_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj();
	var_14_object = var_17_object;
	var_15_bool = var_18_object;
	func_2249(var_16_bool, var_17_object, var_18_object);
	return 0;
}


task_7_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_bool)
{
	var_16_bool = var_14_bool == "kill";
	if(var_16_bool != 0) {
		var_17_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
		func_1393(var_14_bool);
	}
	return 0;
}


task_7_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_16_bool = var_14_bool != (int)0;
	if(var_16_bool != 0) {
		return 0;
	}
	var_17_bool = 0; var_18_object = Obj();
	var_18_object = var_1_bool;
	func_1409(var_17_bool, var_18_object);
	var_53_bool = var_17_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_7_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	RequestClearPath(var_14_bool);
	return 0;
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	func_1393(var_14_bool);
	var_14_bool = Obj();
	func_2323();
	return 0;
}


task_8_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	func_1469();
	var_14_object = Obj();
	func_2323();
	return 0;
}


task_8_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	func_1469();
	var_17_object = Obj();
	var_14_object = var_17_object;
	func_2221(var_17_object);
	return 0;
}


task_8_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_int)
{
	var_16_bool = var_14_int != (int)0;
	if(var_16_bool != 0) {
		return 0;
	}
	var_17_bool = 0; var_18_object = Obj();
	var_18_object = var_1_bool;
	func_1462(var_17_bool, var_18_object);
	var_42_bool = var_17_bool == 0; //@nz
	if(var_42_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_8_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	RequestClearPath(var_14_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0;
	var_14_object = var_18_object;
	var_15_int = var_19_int;
	var_16_float = var_20_float;
	func_1854(var_19_int, var_20_float);
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_string)
{
	var_16_float = 0; var_17_float = 0;
	var_19_bool = var_15_string == "health";
	if(var_19_bool != 0) {
		GetProperty("health", var_17_float);
		var_22_bool = var_17_float <= (int)0;
		if(var_22_bool != 0) {
			SignalDeath(var_14_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_object = Obj();
	var_14_object = var_15_object;
	func_2294(var_15_object);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool)
{
	func_2121();
	var_2_bool = false;
	
Label_151:
	SetTimer((int)130, (float)0.30000001192092896);
	func_264(var_12_object, var_13_bool);
	goto Label_151;
}
EMIT "Return(); Pop(0)";


func_0(var_16_object)
{
	func_2052();
	var_59_object = Obj();
	var_16_object = var_59_object;
	func_9(var_59_object);
	return 0;
}


func_2052()
{
	var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_bool = 0;
	ClearSubContainer((int)0);
	var_22_int = 0; var_23_int = 0;
	func_2022((int)600, (int)1500);
	irand(var_19_int, (int)3);
	var_44_bool = var_19_int != (int)0;
	if(var_44_bool != 0) {
		var_45_int = 0; var_46_string = "";
		func_2094(var_45_int, "bottle_weapon");
		AddItem(var_20_bool, var_45_int, (int)0, var_19_int);
	}
	irand(var_19_int, (int)3);
	var_52_bool = var_19_int == (int)0;
	if(var_52_bool != 0) {
		irand(var_19_int, (int)100);
		var_55_bool = var_19_int != (int)0;
		if(var_55_bool != 0) {
			var_56_int = 0; var_57_string = "";
			func_2094(var_56_int, "ognemet_ammo");
			AddItem(var_20_bool, var_56_int, (int)0, var_19_int);
		}
	}
	return 4;
}


func_9(var_59_object)
{
	EventDisable(0);
	var_60_object = Obj();
	var_59_object = var_60_object;
	func_32(var_60_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_20:
	Hold();
	goto Label_20;
}
EMIT "Return(); Pop(0)";


func_534(var_60_bool, var_61_object, var_80_bool, var_528_object)
{
	var_62_float = 0; var_63_float = 0;
	var_64_float = 0; var_65_object = Obj();
	var_61_object = var_65_object;
	func_1643(var_64_float, var_65_object);
	var_64_float = var_63_float;
	var_72_bool = 0; var_73_float = 0; var_74_float = 0; var_75_float = 0;
	var_63_float = var_73_float;
	func_1984(var_72_bool, var_73_float, (float)250000.0, (float)3240000.0);
	if(var_72_bool != 0) {
		var_78_bool = 0; var_79_object = Obj();
		var_61_object = var_79_object;
		TaskCall(5);
		func_563(var_63_float, var_80_bool, var_78_bool, var_79_object);
		TaskReturn();
		var_80_bool = var_60_bool;
		return 2;
	}
	var_526_bool = 0; var_527_object = Obj();
	var_61_object = var_527_object;
	TaskCall(6);
	func_679(var_526_bool, var_527_object);
	TaskReturn();
	var_528_object = var_60_bool;
	return 2;
}


func_32(var_60_object)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_string = ""; var_66_object = Obj(); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_string = ""; var_76_object = Obj(); var_77_bool = 0; var_78_bool = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0);
	var_81_bool = var_60_object == 0; //@ne
	if(var_81_bool != 0) {
		var_82_string = "";
		func_119("fdie");
	} else {
		@@var_60_object:GetPosition(var_71_cvector);
		GetPosition(var_72_cvector);
		GetDirection(var_73_cvector);
		var_74_cvector = var_72_cvector - var_71_cvector;
		var_85_float = GetByIndex(var_74_cvector, 0);
		var_86_float = GetByIndex(var_73_cvector, 0);
		var_87_float = var_85_float * var_86_float;
		var_88_float = GetByIndex(var_74_cvector, 2);
		var_89_float = GetByIndex(var_73_cvector, 2);
		var_90_float = var_88_float * var_89_float;
		var_91_int = var_87_float + var_90_float;
		var_93_bool = var_91_int >= (int)0;
		if(var_93_bool != 0) {
			var_75_string = "fdie";
		} else {
				var_75_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_60_object = var_76_object;
		var_96_bool = IsFuncExist(var_60_object, "GetScriptProperty", (int)2);
		if(var_96_bool != 0) {
			@@var_60_object:HasScriptProperty(var_77_bool, "Owner");
			var_98_bool = var_77_bool;
			if(var_98_bool != 0) {
				@@var_60_object:GetScriptProperty(var_76_object, "Owner");
				var_100_bool = var_76_object == 0; //@ne
				if(var_100_bool != 0) {
					var_60_object = var_76_object;
				}
			}
		}
		var_103_bool = IsFuncExist(var_76_object, "@GetEyesHeight", (int)1);
		if(var_103_bool != 0) {
			@@var_76_object:GetEyesHeight(var_79_float);
			var_80_cvector = CVector(0.0, 0.0, 0.0);
			var_104_float = GetByIndex(var_80_cvector, 1);
			var_79_float = var_104_float;
			SetByIndex(var_80_cvector, 1) = var_104_float;
			LookAsync(var_60_object, "head", var_80_cvector);
			var_78_bool = 1;
		} else {
			var_78_bool = 0;

		}
		PlayAnimation("all", var_75_string);
		WaitForAnimEnd();
		var_107_bool = var_78_bool;
		if(var_107_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_75_string);
		RemoveEnvelope();
		var_76_object = 0;
	}
	return 20;
	
}


func_2094(var_45_int, var_46_string)
{
	var_47_int = 0; var_48_int = 0;
	GetInvItemByName(var_48_int, var_46_string);
	var_48_int = var_45_int;
	return 2;
}


func_563(var_0_bool, var_78_bool, var_79_object, var_180_object)
{
	var_81_object = Obj(); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_object = Obj(); var_85_cvector = CVector(0,0,0); var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_object = Obj(); var_89_cvector = CVector(0,0,0); var_90_bool = 0; var_91_object = Obj(); var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_cvector = CVector(0,0,0);
	var_0_bool = false;
	var_95_bool = 0; var_96_object = Obj();
	var_79_object = var_96_object;
	func_1842(var_95_bool, var_96_object);
	var_107_bool = 0; var_108_object = Obj();
	var_79_object = var_108_object;
	func_1784(var_107_bool, var_108_object);
	var_109_bool = var_107_bool == 0; //@nz
	if(var_109_bool != 0) {
		var_78_bool = 0;
		return 14;
	}
	Face(var_79_object);
	PlayAnimation("all", "aattack_begin1");
	WaitForAnimEnd();
	var_112_bool = 0; var_113_object = Obj();
	var_79_object = var_113_object;
	func_1784(var_112_bool, var_113_object);
	var_114_bool = var_112_bool == 0; //@nz
	if(var_114_bool != 0) {
		StopAsync();
		var_78_bool = 0;
		return 14;
	}
	PlayAnimation("all", "aattack_end1");
	GetScene(var_88_object);
	GetGeometryLocator("knife", var_90_bool, var_89_cvector);
	AddActorByType(var_91_object, "scripted", var_88_object, var_89_cvector, CVector(0.0, 0.0, 1.0), "grabitel_knife.xml");
	var_122_object = Obj();
	func_1937(var_122_object);
	@@var_91_object:SetScriptProperty("Owner", var_122_object);
	@@var_79_object:GetPosition(var_92_cvector);
	@@var_79_object:GetEyesHeight(var_93_float);
	var_125_float = GetByIndex(var_92_cvector, 1);
	var_127_int = var_93_float - (int)10;
	var_125_float = var_125_float + var_127_int;
	SetByIndex(var_92_cvector, 1) = var_125_float;
	var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_float = 0;
	var_89_cvector = var_129_cvector;
	var_92_cvector = var_130_cvector;
	func_2099(var_128_cvector, var_129_cvector, var_130_cvector, (float)2000.0);
	var_128_cvector = var_94_cvector;
	@@var_91_object:SetScriptProperty("StartDirection", var_94_cvector);
	WaitForAnimEnd();
	StopAsync();
	var_174_bool = var_0_bool;
	if(var_174_bool != 0) {
		var_78_bool = 1;
		return 14;
	}
	var_175_bool = 0; var_176_object = Obj();
	var_79_object = var_176_object;
	func_1784(var_175_bool, var_176_object);
	var_177_bool = var_175_bool == 0; //@nz
	if(var_177_bool != 0) {
		var_78_bool = 0;
		return 14;
	}
	var_178_bool = 0; var_179_object = Obj();
	var_79_object = var_179_object;
	TaskCall(6);
	func_679(var_178_bool, var_179_object);
	TaskReturn();
	var_180_object = var_78_bool;
	return 14;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


func_2099(var_128_cvector, var_129_cvector, var_130_cvector, var_131_float)
{
	var_132_cvector = CVector(0,0,0); var_133_float = 0; var_134_float = 0; var_135_float = 0; var_136_float = 0; var_137_cvector = CVector(0,0,0); var_138_float = 0; var_139_float = 0; var_140_float = 0; var_141_float = 0;
	var_137_cvector = var_130_cvector - var_129_cvector;
	var_138_float = 250000;
	var_142_float = GetByIndex(var_137_cvector, 1);
	var_144_float = var_142_float * (int)1000;
	var_145_float = var_131_float * var_131_float;
	var_139_float = var_144_float - var_145_float;
	var_140_float = var_137_cvector | var_137_cvector;
	var_146_float = 0; var_147_float = 0; var_148_float = 0; var_149_float = 0;
	var_138_float = var_147_float;
	var_139_float = var_148_float;
	var_140_float = var_149_float;
	func_1950(var_146_float, var_147_float, var_148_float, var_149_float);
	var_141_float = sqrt(var_146_float);
	var_170_float = CVector(0.0, 500.0, 0.0) * var_141_float;
	var_171_float = var_170_float * var_141_float;
	var_172_int = var_137_cvector + var_171_float;
	var_128_cvector = var_172_int / var_141_float;
	return 10;
}


func_1078(var_3_bool)
{
	var_3_bool = true;
	return 0;
}


func_1080(var_493_bool, var_494_float)
{
	var_495_float = 0; var_496_bool = 0; var_497_float = 0; var_498_bool = 0;
	rand(var_497_float);
	var_499_bool = var_497_float < var_494_float;
	if(var_499_bool != 0) {

	Label_1085:
		IsAnimationPlaying(var_498_bool);
		var_500_bool = var_498_bool == 0; //@nz
		if(var_500_bool != 0) {
		} else {
			var_501_bool = 0;
			func_1144(var_498_bool, var_501_bool);
			if(var_501_bool != 0) {
				var_493_bool = 1;
				sync();
				goto Label_1085;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_1102;
	
Label_1102:
	var_493_bool = 0;
	return 4;
	
}


func_2121()
{
	var_14_object = GlobalVars[0];
	func_1992(Obj());
	var_15_object = var_14_object;
	GlobalVars[0] = var_14_object;
	return 0;
}


func_1104(var_0_bool, var_321_bool, var_322_float)
{
	var_323_bool = 0; var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_float = 0; var_328_bool = 0; var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_float = 0;
	
Label_1105:
	IsAnimationPlaying(var_328_bool);
	var_333_bool = var_328_bool == 0; //@nz
	if(var_333_bool != 0) {
	} else {
		var_334_bool = 0;
		func_1144(var_332_float, var_334_bool);
		if(var_334_bool != 0) {
			var_321_bool = 1;
			return 10;
		}
		var_359_bool = 0; var_360_object = Obj();
		var_360_object = var_0_bool;
		func_1784(var_359_bool, var_360_object);
		var_361_bool = var_359_bool == 0; //@nz
		if(var_361_bool != 0) {
			var_321_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_329_cvector);
		GetPFPosition(var_330_cvector);
		var_331_cvector = var_329_cvector - var_330_cvector;
		var_332_float = var_331_cvector | var_331_cvector;
		var_362_float = var_322_float * var_322_float;
		var_363_bool = var_332_float < var_362_float;
		if(var_363_bool != 0) {
			var_364_bool = 0; var_365_float = 0;
			var_322_float = var_365_float;
			func_998(var_331_cvector, var_332_float, var_364_bool, var_365_float);
			var_321_bool = 1;
			sync();
			goto Label_1105;
		}
		return 10;
	}
	var_321_bool = 0;
	return 10;
	
}


func_2128(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_string = ""; var_21_bool = 0; var_22_string = "";
	var_23_bool = 0; var_24_object = Obj();
	var_18_object = var_24_object;
	func_1784(var_23_bool, var_24_object);
	var_57_bool = var_23_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	var_58_object = GlobalVars[0];
	@@var_58_object:in(var_21_bool, var_18_object);
	var_59_bool = var_21_bool;
	if(var_59_bool != 0) {
		var_17_bool = 1;
		return 4;
	}
	var_60_bool = 0; var_61_object = Obj(); var_62_string = "";
	var_18_object = var_61_object;
	func_1651(var_60_bool, var_61_object, "class");
	if(var_60_bool != 0) {
		@@var_18_object:GetProperty("class", var_22_string);
		var_65_bool = var_22_string == "grabitel";
		if(var_65_bool != 0) {
			var_17_bool = 0;
			return 4;
		}
	}
	var_17_bool = 1;
	return 4;
}


func_1624(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1631(var_596_string)
{
	var_596_string = "walk";
	return 0;
}


func_1633(var_597_string)
{
	var_597_string = "run";
	return 0;
}


func_1635(var_435_string, var_436_int)
{
	var_438_bool = var_436_int == (int)1;
	if(var_438_bool != 0) {
		var_435_string = "fire";
		return 0;
	}
	var_435_string = "phys";
	return 0;
}


func_1643(var_64_float, var_65_object)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	GetPosition(var_69_cvector);
	@@var_65_object:GetPosition(var_70_cvector);
	var_71_cvector = var_70_cvector - var_69_cvector;
	var_64_float = var_71_cvector | var_71_cvector;
	return 6;
}


func_2160(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	func_2128(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
	return 0;
}


func_1651(var_30_bool, var_31_object, var_32_string)
{
	var_33_bool = 0; var_34_bool = 0;
	var_37_bool = IsFuncExist(var_31_object, "HasProperty", (int)2);
	var_38_bool = var_37_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_30_bool = 0;
		return 2;
	}
	@@var_31_object:HasProperty(var_32_string, var_34_bool);
	var_34_bool = var_30_bool;
	return 2;
}


func_119(var_82_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_82_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_82_string);
	RemoveEnvelope();
	return 0;
}


func_2167(var_66_object)
{
	var_67_bool = 0; var_68_object = Obj();
	var_66_object = var_68_object;
	TaskCall(4);
	func_534(var_14_bool, var_66_object, var_67_bool, var_68_object);
	TaskReturn();
	if(var_67_bool != 0) {
		var_540_object = Obj();
		var_66_object = var_540_object;
		TaskCall(8);
		func_1420(var_543_bool, var_540_object);
		TaskReturn();
	}
	ResetAAS();
	return 0;
}


func_1144(var_0_bool, var_334_bool)
{
	var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_float = 0; var_339_float = 0; var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0); var_343_float = 0; var_344_float = 0;
	var_345_bool = 0; var_346_object = Obj();
	var_346_object = var_0_bool;
	func_1784(var_345_bool, var_346_object);
	var_347_bool = var_345_bool == 0; //@nz
	if(var_347_bool != 0) {
		var_334_bool = 0;
		return 10;
	}
	var_348_bool = 0;
	func_1196(var_344_float, var_348_bool);
	if(var_348_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_340_cvector);
		GetPFPosition(var_341_cvector);
		var_342_cvector = var_340_cvector - var_341_cvector;
		var_343_float = var_342_cvector | var_342_cvector;
		@@@var_0_bool:GetAttackDistance(var_344_float);
		var_344_float = var_344_float + (int)50;
		var_350_float = var_344_float * var_344_float;
		var_351_bool = var_343_float <= var_350_float;
		if(var_351_bool != 0) {
			func_1177(var_344_float);
			var_334_bool = 1;
			return 10;
		}
	}
	var_334_bool = 0;
	return 10;
}


func_1663(var_407_float, var_408_object, var_409_float, var_410_int)
{
	var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0; var_420_int = 0; var_421_string = ""; var_422_int = 0; var_423_float = 0; var_424_float = 0; var_425_float = 0;
	var_426_bool = 0; var_427_object = Obj(); var_428_string = "";
	var_408_object = var_427_object;
	func_1651(var_426_bool, var_427_object, "health");
	var_429_bool = var_426_bool == 0; //@nz
	if(var_429_bool != 0) {
		var_407_float = 0.0;
		return 12;
	}
	var_430_bool = 0; var_431_object = Obj(); var_432_string = "";
	var_408_object = var_431_object;
	func_1651(var_430_bool, var_431_object, "armor");
	var_433_bool = var_430_bool == 0; //@nz
	if(var_433_bool != 0) {
		var_420_int = 0;
	} else {
			@@var_408_object:GetProperty("armor", var_420_int);
	}
	var_435_string = ""; var_436_int = 0;
	var_410_int = var_436_int;
	func_1635(var_435_string, var_436_int);
	var_421_string = "armor_" + var_435_string;
	var_439_bool = 0; var_440_object = Obj(); var_441_string = "";
	var_408_object = var_440_object;
	var_421_string = var_441_string;
	func_1651(var_439_bool, var_440_object, var_441_string);
	var_442_bool = var_439_bool == 0; //@nz
	if(var_442_bool != 0) {
		var_422_int = 0;
	} else {
		@@var_408_object:GetProperty(var_421_string, var_422_int);

	}
	var_443_float = 0; var_444_float = 0; var_445_float = 0;
	var_446_int = var_420_int + var_422_int;
	var_444_float = var_446_int / (float)100.0;
	func_1943(var_443_float, var_444_float, (float)1);
	var_443_float = var_423_float;
	@@var_408_object:GetProperty("health", var_424_float);
	var_451_int = (int)1 - var_423_float;
	var_425_float = var_409_float * var_451_int;
	var_453_float = 0; var_454_float = 0; var_455_float = 0; var_456_float = 0;
	var_454_float = var_424_float - var_425_float;
	func_1973(var_453_float, var_454_float, (float)0, (float)1);
	@@var_408_object:SetProperty("health", var_453_float);
	var_425_float = var_407_float;
	return 12;
	
}


func_2184(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	func_2128(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
	return 0;
}


func_2191(var_66_object)
{
	var_67_bool = 0; var_68_object = Obj();
	var_66_object = var_68_object;
	TaskCall(4);
	func_534(var_14_bool, var_66_object, var_67_bool, var_68_object);
	TaskReturn();
	if(var_67_bool != 0) {
		var_540_object = Obj();
		var_66_object = var_540_object;
		TaskCall(8);
		func_1420(var_543_bool, var_540_object);
		TaskReturn();
	}
	ResetAAS();
	return 0;
}


func_1177(var_0_bool)
{
	var_352_cvector = CVector(0,0,0); var_353_cvector = CVector(0,0,0); var_354_cvector = CVector(0,0,0); var_355_cvector = CVector(0,0,0);
	Face(var_0_bool);
	PlayAnimation("all", "bjump");
	@@@var_0_bool:GetPFPosition(var_354_cvector);
	GetPFPosition(var_355_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_160()
{
	func_328(var_15_bool, var_53_object);
	KillTimer((int)130);
	return 0;
}


func_2208(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0;
	var_21_bool = var_18_object == 0; //@ne
	if(var_21_bool != 0) {
		return 2;
	}
	var_22_object = GlobalVars[0];
	@@var_22_object:in(var_20_bool, var_18_object);
	var_23_bool = var_20_bool == 0; //@nz
	if(var_23_bool != 0) {
		var_24_object = GlobalVars[0];
		@@var_24_object:add(var_18_object);
	}
	return 2;
}


func_679(var_178_bool, var_179_object)
{
	var_185_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	var_186_object = Obj(); var_187_bool = 0; var_188_float = 0;
	var_179_object = var_186_object;
	func_754(var_181_int, var_182_int, var_183_bool, var_184_int, var_178_bool, var_179_object, var_186_object, (bool)1, (float)200.0);
	var_520_bool = 0;
	var_520_bool = 0;
	var_521_bool = GlobalVars[1];
	if(var_521_bool != 0) {
		var_522_bool = var_3_bool;
		if(var_522_bool != 0) {
			var_520_bool = 1;
		}
	}
	if(var_520_bool != 0) {
		PlayAnimation("all", "attack_off");
		WaitForAnimEnd();
	}
	var_525_bool = GlobalVars[1];
	var_525_bool = var_178_bool;
	return 0;
}


func_1196(var_0_bool, var_313_bool)
{
	var_314_bool = 0; var_315_bool = 0;
	var_318_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_318_bool != 0) {
		@@@var_0_bool:IsAttacking(var_315_bool);
		var_315_bool = var_313_bool;
		return 2;
	}
	var_313_bool = 0;
	return 2;
}


func_2221(var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_2208(var_18_object);
	var_25_bool = 0; var_26_object = Obj();
	var_17_object = var_26_object;
	func_1784(var_25_bool, var_26_object);
	var_59_bool = var_25_bool == 0; //@nz
	if(var_59_bool != 0) {
		return 0;
	}
	var_60_bool = 0; var_61_object = Obj();
	var_17_object = var_61_object;
	TaskCall(4);
	func_534(var_14_object, var_17_object, var_60_bool, var_61_object);
	TaskReturn();
	if(var_60_bool != 0) {
		var_533_object = Obj();
		var_17_object = var_533_object;
		TaskCall(8);
		func_1420(var_536_bool, var_533_object);
		TaskReturn();
	}
	ResetAAS();
	return 0;
}


func_1207(var_2_bool, var_4_object)
{
	var_375_float = 0; var_376_int = 0; var_377_float = 0; var_378_int = 0;
	var_379_bool = var_2_bool == 0; //@nz
	if(var_379_bool != 0) {
		return 4;
	}
	var_380_object = var_4_object;
	if(var_380_object != 0) {
		var_4_object = var_4_object + (int)-1;
		var_383_bool = var_4_object > (int)0;
		if(var_383_bool != 0) {
			return 4;
		}
	}
	rand(var_377_float);
	var_384_float = 0;
	func_1243(var_384_float);
	var_385_bool = var_377_float < var_384_float;
	if(var_385_bool != 0) {
		irand(var_378_int, var_2_bool);
		var_378_int = var_378_int + (int)1;
		var_388_int = "attack" + var_378_int;
		Speak(var_388_int);
		var_389_int = 0;
		func_1241(var_389_int);
		var_4_object = var_389_int;
	}
	return 4;
}


func_1727(var_466_bool, var_467_object)
{
	var_468_float = 0; var_469_float = 0;
	var_470_bool = 0; var_471_object = Obj(); var_472_string = "";
	var_467_object = var_471_object;
	func_1651(var_470_bool, var_471_object, "health");
	var_473_bool = var_470_bool == 0; //@nz
	if(var_473_bool != 0) {
		var_466_bool = 0;
		return 2;
	}
	@@var_467_object:GetProperty("health", var_469_float);
	var_466_bool = var_469_float <= (float)0.0;
	return 2;
}


func_707(var_404_float)
{
	var_404_float = 0.10000000149011612;
	return 0;
}


func_710(var_411_int)
{
	var_411_int = 1;
	return 0;
}


func_2249(var_16_bool, var_17_object, var_18_object)
{
	var_19_string = ""; var_20_bool = 0; var_21_float = 0; var_22_string = ""; var_23_bool = 0; var_24_float = 0;
	var_25_bool = 0; var_26_object = Obj(); var_27_string = "";
	var_18_object = var_26_object;
	func_1651(var_25_bool, var_26_object, "class");
	var_34_bool = var_25_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_16_bool = 0;
		return 6;
	}
	@@var_18_object:GetProperty("class", var_22_string);
	var_37_bool = var_22_string != "grabitel";
	if(var_37_bool != 0) {
		var_16_bool = 0;
		return 6;
	}
	CanSee(var_23_bool, var_17_object);
	var_38_float = 0; var_39_object = Obj();
	var_17_object = var_39_object;
	func_1643(var_38_float, var_39_object);
	var_38_float = var_24_float;
	var_46_bool = 0;
	var_46_bool = 0;
	var_48_bool = var_24_float <= (float)1000000.0;
	if(var_48_bool != 0) {
		var_49_bool = 0;
		var_49_bool = 1;
		var_50_bool = var_23_bool;
		if(var_50_bool != 1) {
			var_52_bool = var_24_float <= (float)250000.0;
			if(var_52_bool != 1) {
				var_49_bool = 0;
			}
		}
		if(var_49_bool != 0) {
			var_46_bool = 1;
		}
	}
	if(var_46_bool != 0) {
		var_16_bool = 1;
		return 6;
	}
	var_16_bool = 0;
	return 6;
}


func_713(var_461_object, var_462_float)
{
	var_463_bool = 0;
	var_463_bool = 0;
	var_465_bool = var_462_float > (int)0;
	if(var_465_bool != 0) {
		var_466_bool = 0; var_467_object = Obj();
		var_461_object = var_467_object;
		func_1727(var_466_bool, var_467_object);
		if(var_466_bool != 0) {
			var_463_bool = 1;
		}
	}
	if(var_463_bool != 0) {
		var_476_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
		func_1078(var_462_float);
	}
	return 0;
}


func_1743(var_40_bool, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0;
	@@var_41_object:IsDead(var_43_bool);
	var_43_bool = var_40_bool;
	return 2;
}


func_1748(var_29_bool, var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj();
	var_35_bool = var_30_object == 0; //@ne
	if(var_35_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_36_bool = 0;
	var_36_bool = 0;
	var_39_bool = IsFuncExist(var_30_object, "IsDead", (int)1);
	if(var_39_bool != 0) {
		var_40_bool = 0; var_41_object = Obj();
		var_30_object = var_41_object;
		func_1743(var_40_bool, var_41_object);
		if(var_40_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	GetScene(var_33_object);
	var_44_bool = var_33_object == 0; //@ne
	if(var_44_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	@@var_30_object:GetScene(var_34_object);
	var_45_bool = var_33_object != var_34_object;
	if(var_45_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_29_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1239(var_460_int)
{
	var_460_int = 0;
	return 0;
}


func_1241(var_389_int)
{
	var_389_int = 1;
	return 0;
}


func_1243(var_384_float)
{
	var_384_float = 0.5;
	return 0;
}


func_754(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_186_object, var_187_bool, var_188_float, var_243_bool)
{
	var_189_bool = 0; var_190_bool = 0; var_191_float = 0; var_192_cvector = CVector(0,0,0); var_193_cvector = CVector(0,0,0); var_194_bool = 0; var_195_bool = 0; var_196_cvector = CVector(0,0,0); var_197_float = 0; var_198_float = 0; var_199_bool = 0; var_200_bool = 0; var_201_float = 0; var_202_cvector = CVector(0,0,0); var_203_cvector = CVector(0,0,0); var_204_bool = 0; var_205_bool = 0; var_206_cvector = CVector(0,0,0); var_207_float = 0; var_208_float = 0;
	var_1_bool = 0;
	
Label_756:
	var_212_int = var_1_bool + (int)1;
	var_213_int = "attack_begin" + var_212_int;
	HasAnimation(var_199_bool, "all", var_213_int);
	var_214_bool = var_199_bool == 0; //@nz
	if(var_214_bool != 0) {
	} else {
									var_1_bool = var_1_bool + (int)1;
									goto Label_756;
	}
	var_2_bool = 0;
	
Label_770:
	var_217_int = var_2_bool + (int)1;
	var_218_int = "attack" + var_217_int;
	IsExisting3DSound(var_200_bool, var_218_int);
	var_219_bool = var_200_bool == 0; //@nz
	if(var_219_bool != 0) {
	} else {
								var_2_bool = var_2_bool + (int)1;
								goto Label_770;

	}
	var_4_object = 0;
	var_222_bool = IsFuncExist(var_186_object, "@GetAttackDistance", (int)1);
	if(var_222_bool != 0) {
		@@var_186_object:GetAttackDistance(var_201_float);
		var_201_float = var_201_float + (int)50;
	} else {
							var_188_float = var_201_float;

	}
	var_225_bool = var_201_float >= (int)150;
	if(var_225_bool != 0) {
		var_201_float = 150;
	}
	var_3_bool = false;
	var_0_bool = var_186_object;
	IsPlayerActor(var_0_bool, var_204_bool);
	var_226_bool = var_187_bool;
	if(var_226_bool != 0) {
		var_205_bool = 0;
	} else {
						var_205_bool = 1;

	}
Label_806:
	var_227_bool = 0;
	var_227_bool = 0;
	var_228_bool = 0; var_229_object = Obj();
	var_229_object = var_0_bool;
	func_1784(var_228_bool, var_229_object);
	if(var_228_bool != 0) {
		var_230_bool = var_3_bool == 0; //@nz
		if(var_230_bool != 0) {
			var_227_bool = 1;
		}
	}
	if(var_227_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_202_cvector);
		GetPFPosition(var_203_cvector);
		var_206_cvector = var_202_cvector - var_203_cvector;
		var_207_float = var_206_cvector | var_206_cvector;
		var_232_int = (float)300.0 + var_201_float;
		var_234_int = (float)300.0 + var_201_float;
		var_235_float = var_232_int * var_234_int;
		var_236_bool = var_207_float >= var_235_float;
		if(var_236_bool != 0) {
			var_237_bool = 0; var_238_object = Obj(); var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_bool = 0;
			var_238_object = var_0_bool;
			var_201_float = var_239_float;
			TaskCall(7);
			func_1269(var_243_bool, var_244_object, var_237_bool, var_238_object, var_239_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_290_bool = var_243_bool == 0; //@nz
			if(var_290_bool != 0) {
			} else {
		} else {
				var_296_float = var_188_float * var_188_float;
				var_297_bool = var_207_float >= var_296_float;
				if(var_297_bool != 0) {
					var_298_bool = (bool)0 == 0; //@nz
					if(var_298_bool != 0) {
						var_299_object = Obj();
						var_299_object = var_0_bool;
						func_1921(var_299_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_205_bool = 1;
					}
					rand(var_208_float);
					var_310_bool = 0;
					var_312_bool = var_208_float < (float)0.19999998807907104;
					if(var_312_bool != 1) {
						var_313_bool = 0;
						func_1196((bool)1, var_313_bool);
						if(var_313_bool != 1) {
							var_310_bool = 0;
						}
					}
					if(var_310_bool != 0) {
						Face(var_0_bool);
						PlayAnimation("all", "attack_stay");
						var_321_bool = 0; var_322_float = 0;
						var_188_float = var_322_float;
						func_1104(var_208_float, var_321_bool, var_322_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_505_bool = 0;
						func_1196(var_208_float, var_505_bool);
						var_506_bool = var_505_bool == 0; //@nz
						if(var_506_bool == 0) goto Label_932;
						var_507_bool = 0; var_508_object = Obj();
						var_508_object = var_0_bool;
						func_1784(var_507_bool, var_508_object);
						var_509_bool = var_507_bool == 0; //@nz
						if(var_509_bool != 0) {
							goto Label_942;
						}
						@@@var_0_bool:GetPFPosition(var_202_cvector);
						GetPFPosition(var_203_cvector);
						var_206_cvector = var_202_cvector - var_203_cvector;
						var_207_float = var_206_cvector | var_206_cvector;
						var_510_float = var_188_float * var_188_float;
						var_511_bool = var_207_float < var_510_float;
						if(var_511_bool == 0) goto Label_932;
						var_512_bool = 0; var_513_float = 0;
						var_188_float = var_513_float;
						func_998(var_207_float, var_208_float, var_512_bool, var_513_float);
						var_514_bool = var_512_bool == 0; //@nz
						if(var_514_bool == 0) goto Label_932;
						goto Label_942;
				}
					var_515_bool = 0; var_516_float = 0;
					var_188_float = var_516_float;
					func_998(var_207_float, var_208_float, var_515_bool, var_516_float);
					var_517_bool = var_515_bool == 0; //@nz
					if(var_517_bool != 0) {
						goto Label_942;
					}
					var_205_bool = 1;

				}
			Label_932:
				goto Label_941;
		}
		Label_941:
			goto Label_806;

		}
	}
Label_942:
	WaitForAnimEnd();
	var_291_bool = var_3_bool;
	if(var_291_bool != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_294_bool = var_204_bool;
	if(var_294_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_1269(var_0_bool, var_1_bool, var_237_bool, var_238_object, var_239_float, var_240_float, var_241_bool, var_242_bool)
{
	var_245_bool = 0; var_246_bool = 0; var_247_object = Obj(); var_248_cvector = CVector(0,0,0); var_249_cvector = CVector(0,0,0); var_250_cvector = CVector(0,0,0); var_251_float = 0; var_252_object = Obj(); var_253_bool = 0; var_254_bool = 0; var_255_object = Obj(); var_256_cvector = CVector(0,0,0); var_257_cvector = CVector(0,0,0); var_258_cvector = CVector(0,0,0); var_259_float = 0; var_260_object = Obj();
	var_0_bool = false;
	var_1_bool = var_238_object;
	var_242_bool = var_254_bool;
	
Label_1273:
	var_261_bool = 0; var_262_object = Obj();
	var_238_object = var_262_object;
	func_1409(var_261_bool, var_262_object);
	var_265_bool = var_261_bool == 0; //@nz
	if(var_265_bool != 0) {
		var_237_bool = 0;
		return 16;
	}
	@@var_238_object:GetPosition(var_256_cvector);
	GetPosition(var_257_cvector);
	var_258_cvector = var_256_cvector - var_257_cvector;
	var_259_float = var_258_cvector | var_258_cvector;
	var_266_bool = 0;
	var_266_bool = 0;
	var_268_bool = var_240_float > (int)0;
	if(var_268_bool != 0) {
		var_269_float = var_240_float * var_240_float;
		var_270_bool = var_259_float > var_269_float;
		if(var_270_bool != 0) {
			var_266_bool = 1;
		}
	}
	if(var_266_bool != 0) {
		Stop();
		var_237_bool = 0;
		return 16;
	}
	var_271_float = var_239_float * var_239_float;
	var_272_bool = var_259_float > var_271_float;
	if(var_272_bool != 0) {
		@@var_238_object:GetPFPosition(var_256_cvector);
		FindPathTo(var_260_object, var_256_cvector);
		var_273_bool = var_260_object != 0; //@nn
		if(var_273_bool != 0) {
			var_260_object = var_255_object;
			var_260_object = 0;
		}
		var_274_bool = var_255_object != 0; //@nn
		if(var_274_bool != 0) {
			var_275_bool = var_254_bool;
			if(var_275_bool == 0) goto Label_1322;
			var_254_bool = 0;
			RotatePath(var_255_object, var_253_bool);
			var_276_bool = var_253_bool == 0; //@nz
			if(var_276_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_279_string = "";
				func_1416(var_279_string);
				var_280_string = "";
				func_1418(var_280_string);
				FollowPath(var_255_object, var_241_bool, var_253_bool, var_279_string, var_280_string);
				var_281_bool = var_253_bool == 0; //@nz
				if(var_281_bool != 0) {
					var_282_bool = var_0_bool;
					if(var_282_bool != 0) {
						var_255_object = 0;
						goto Label_1369;
					EMIT "GOTO 0x53e";
					}
				} else {
					var_255_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_253_bool);
					var_285_bool = var_253_bool == 0; //@nz
					if(var_285_bool != 0) {
						var_286_bool = var_0_bool;
						if(var_286_bool != 0) {
							var_255_object = 0;
							goto Label_1369;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1369;
	}
			var_260_object = 0;
			goto Label_1367;

		Label_1367:
			var_255_object = 0;

		}
		goto Label_1273;
	}
Label_1369:
	var_237_bool = !var_0_bool;
	return 16;
	
}


func_2294(var_15_object)
{
	var_16_object = Obj();
	var_15_object = var_16_object;
	TaskCall(0);
	func_0(var_16_object);
	TaskReturn();
	return 0;
}


func_1784(var_25_bool, var_26_object)
{
	var_27_int = 0; var_28_int = 0;
	var_29_bool = 0; var_30_object = Obj();
	var_26_object = var_30_object;
	func_1748(var_29_bool, var_30_object);
	var_46_bool = var_29_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_25_bool = 0;
		return 2;
	}
	var_47_bool = 0; var_48_object = Obj(); var_49_string = "";
	var_26_object = var_48_object;
	func_1651(var_47_bool, var_48_object, "noaccess");
	var_56_bool = var_47_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_25_bool = 1;
		return 2;
	}
	@@var_26_object:GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == (int)0;
	return 2;
}


func_264(var_0_bool, var_1_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_27_float, (float)0.5);
	Sleep(var_27_float);
	
Label_272:
	var_35_bool = var_0_bool == 0; //@nz
	if(var_35_bool != 0) {
		var_36_bool = var_1_bool == 0; //@nz
		if(var_36_bool != 0) {

		Label_276:
			GetPosition(var_29_cvector);
			GetCameraFarDistance(var_30_float);
			var_30_float = var_30_float * (float)2.5;
			GetRandomPFPointInCircle(var_28_cvector, var_29_cvector, var_30_float, var_31_bool);
			var_38_bool = var_31_bool;
			if(var_38_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_276;
		}
				var_1_bool = false;
	}
			return 14;
	}
	goto Label_293;
	
Label_293:
	FindShiftedPathTo(var_32_object, var_28_cvector);
	var_39_bool = var_32_object != 0; //@nn
	if(var_39_bool != 0) {
		RotatePath(var_32_object, var_33_bool);
		var_40_bool = var_33_bool;
		if(var_40_bool != 0) {
			var_41_bool = 0;
			func_342(var_41_bool);
			FollowPath(var_32_object, var_41_bool, var_33_bool);
			var_32_object = 0;
			var_42_bool = var_33_bool;
			if(var_42_bool != 0) {
				TaskCall(2);
				func_393();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_32_object = 0;
	goto Label_272;
	
}


func_1808(var_19_bool, var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_int = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0;
	var_27_bool = var_20_object == 0; //@ne
	if(var_27_bool != 0) {
		var_19_bool = 0;
		return 6;
	}
	GetScene(var_24_object);
	var_28_bool = var_24_object == 0; //@ne
	if(var_28_bool != 0) {
		var_19_bool = 0;
		return 6;
	}
	@@var_20_object:GetScene(var_25_object);
	var_29_bool = var_24_object != var_25_object;
	if(var_29_bool != 0) {
		var_19_bool = 0;
		return 6;
	}
	var_30_bool = 0; var_31_object = Obj(); var_32_string = "";
	var_20_object = var_31_object;
	func_1651(var_30_bool, var_31_object, "noaccess");
	var_39_bool = var_30_bool == 0; //@nz
	if(var_39_bool != 0) {
		var_19_bool = 1;
		return 6;
	}
	@@var_20_object:GetProperty("noaccess", var_26_int);
	var_19_bool = var_26_int == (int)0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1842(var_95_bool, var_96_object)
{
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_bool = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_bool = 0;
	@@var_96_object:GetPosition(var_101_cvector);
	GetPosition(var_102_cvector);
	var_103_cvector = var_101_cvector - var_102_cvector;
	var_105_float = GetByIndex(var_103_cvector, 0);
	var_106_float = GetByIndex(var_103_cvector, 2);
	Rotate(var_105_float, var_106_float, var_104_bool);
	var_104_bool = var_95_bool;
	return 8;
}


func_1854(var_18_object, var_19_int)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_object = Obj(); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = "";
	var_41_bool = 0;
	var_41_bool = 0;
	var_43_bool = var_19_int != (int)4;
	if(var_43_bool != 0) {
		var_45_bool = var_19_int != (int)5;
		if(var_45_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		GetScene(var_31_object);
		GetPosition(var_33_cvector);
		GetEyesHeight(var_34_float);
		var_46_float = GetByIndex(var_33_cvector, 1);
		var_48_float = var_34_float / (int)2;
		var_46_float = var_46_float + var_48_float;
		SetByIndex(var_33_cvector, 1) = var_46_float;
		AddActorByType(var_32_object, "scripted", var_31_object, var_33_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_32_object = 0;
		var_31_object = 0;
	}
	var_52_bool = var_18_object == 0; //@ne
	if(var_52_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_35_int);
	var_54_bool = var_35_int < (int)0;
	if(var_54_bool != 0) {
		return 20;
	}
	@@var_18_object:GetPosition(var_36_cvector);
	GetPosition(var_37_cvector);
	GetDirection(var_38_cvector);
	var_39_cvector = var_37_cvector - var_36_cvector;
	var_55_float = GetByIndex(var_39_cvector, 0);
	var_56_float = GetByIndex(var_38_cvector, 0);
	var_57_float = var_55_float * var_56_float;
	var_58_float = GetByIndex(var_39_cvector, 2);
	var_59_float = GetByIndex(var_38_cvector, 2);
	var_60_float = var_58_float * var_59_float;
	var_61_int = var_57_float + var_60_float;
	var_63_bool = var_61_int >= (int)0;
	if(var_63_bool != 0) {
		var_40_string = "fhit";
	} else {
		var_40_string = "bhit";
	}
	var_66_int = var_40_string + "1";
	var_68_int = var_40_string + "2";
	FadeSecondaryAnimation("hit_react", var_66_int, var_68_int, (int)-10);
	return 20;
	
}


func_328(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_335(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


func_342(var_41_bool)
{
	var_41_bool = 0;
	return 0;
}


func_1393(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1921(var_299_object)
{
	var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0);
	@@var_299_object:GetPosition(var_303_cvector);
	GetPosition(var_304_cvector);
	var_305_cvector = var_303_cvector - var_304_cvector;
	var_306_float = GetByIndex(var_305_cvector, 0);
	var_307_float = GetByIndex(var_305_cvector, 2);
	RotateAsync(var_306_float, var_307_float);
	return 6;
}


func_1409(var_261_bool, var_262_object)
{
	var_263_bool = 0; var_264_object = Obj();
	var_262_object = var_264_object;
	func_1784(var_263_bool, var_264_object);
	var_263_bool = var_261_bool;
	return 0;
}


func_1416(var_279_string)
{
	var_279_string = "walk";
	return 0;
}


func_393()
{
	var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; var_48_float = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_bool = 0;
	WaitForAnimEnd();
	var_57_bool = 0;
	func_1932(var_57_bool);
	var_60_bool = var_57_bool == 0; //@nz
	if(var_60_bool != 0) {
		return 14;
	}
	func_2005((int)0);
	var_61_int = var_50_int;
	var_51_int = 0;
	
Label_407:
	var_74_bool = 0;
	var_74_bool = 0;
	var_76_bool = var_51_int < (int)5;
	if(var_76_bool != 0) {
		var_77_bool = 0;
		func_1932(var_77_bool);
		if(var_77_bool != 0) {
			var_74_bool = 1;
		}
	}
	if(var_74_bool != 0) {
		irand(var_52_int, (int)3);
		var_80_bool = var_52_int == (int)0;
		if(var_80_bool != 0) {
			var_81_int = var_50_int;
			if(var_81_int == 0) goto Label_440;
			irand(var_53_int, var_50_int);
			var_83_string = ""; var_84_int = 0;
			var_53_int = var_84_int;
			func_1998(var_83_string, var_84_int);
			PlayAnimation("all", var_83_string);
			WaitForAnimEnd(var_54_bool);
			var_85_bool = var_54_bool == 0; //@nz
			if(var_85_bool != 0) {
			} else {
		} else {
				var_88_bool = var_52_int == (int)1;
				if(var_88_bool != 0) {
					rand(var_55_float, (int)4);
					var_91_int = var_55_float + (int)1;
					Sleep(var_91_int, var_56_bool);
					var_92_bool = var_56_bool == 0; //@nz
					if(var_92_bool != 0) {
						goto Label_461;
					}
					goto Label_458;
				}
				var_93_int = var_51_int;
				if(var_93_int == 0) goto Label_458;
				goto Label_461;
		}
		Label_458:
			var_51_int = var_51_int + (int)1;
			goto Label_407;

		}
	}
Label_461:
	return 14;
	
}


func_1418(var_280_string)
{
	var_280_string = "run";
	return 0;
}


func_1932(var_57_bool)
{
	var_58_bool = 0; var_59_bool = 0;
	IsLoaded(var_59_bool);
	var_59_bool = var_57_bool;
	return 2;
}


func_1420(var_2_bool, var_533_object)
{
	var_537_bool = 0; var_538_bool = 0;
	var_2_bool = false;
	Sleep((int)2, var_538_bool);
	var_540_bool = var_538_bool == 0; //@nz
	if(var_540_bool != 0) {
		return 2;
	}
	var_2_bool = true;
	var_541_bool = 0; var_542_object = Obj(); var_543_float = 0; var_544_float = 0; var_545_bool = 0; var_546_bool = 0;
	var_533_object = var_542_object;
	func_1500(var_537_bool, var_538_bool, var_541_bool, var_542_object, (float)200, (float)2000, (bool)1, (bool)1);
	var_607_bool = var_541_bool == 0; //@nz
	if(var_607_bool != 0) {
		return 2;
	}
	var_2_bool = false;
	Face(var_533_object);
	WaitForAnimEnd(var_538_bool);
	var_608_bool = var_538_bool == 0; //@nz
	if(var_608_bool != 0) {
		StopAsync();
		return 2;
	}
	PlayAnimation("all", "hunt");
	WaitForAnimEnd(var_538_bool);
	StopAsync();
	var_611_bool = var_538_bool == 0; //@nz
	if(var_611_bool != 0) {
		return 2;
	}
	return 2;
}


func_1937(var_122_object)
{
	var_123_object = Obj(); var_124_object = Obj();
	self(var_124_object);
	var_124_object = var_122_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1943(var_443_float, var_444_float, var_445_float)
{
	var_448_bool = var_444_float < var_445_float;
	if(var_448_bool != 0) {
		var_444_float = var_443_float;
	} else {
		var_445_float = var_443_float;
	}
	return 0;
	
}


func_1950(var_146_float, var_147_float, var_148_float, var_149_float)
{
	var_150_float = 0; var_151_float = 0; var_152_float = 0; var_153_float = 0;
	var_154_float = var_148_float * var_148_float;
	var_156_float = (int)4 * var_147_float;
	var_157_float = var_156_float * var_149_float;
	var_158_int = var_154_float - var_157_float;
	var_152_float = sqrt(var_158_int);
	var_159_int = -var_148_float;
	var_160_int = var_159_int - var_152_float;
	var_162_float = (int)2 * var_147_float;
	var_153_float = var_160_int / var_162_float;
	var_164_bool = var_153_float > (int)0;
	if(var_164_bool != 0) {
		var_153_float = var_146_float;
		return 4;
	}
	var_165_int = -var_148_float;
	var_166_int = var_165_int + var_152_float;
	var_168_float = (int)2 * var_147_float;
	var_146_float = var_166_int / var_168_float;
	return 4;
}


func_1973(var_453_float, var_454_float, var_455_float, var_456_float)
{
	var_457_bool = var_454_float < var_455_float;
	if(var_457_bool != 0) {
		var_455_float = var_453_float;
		return 0;
	}
	var_458_bool = var_454_float > var_456_float;
	if(var_458_bool != 0) {
		var_456_float = var_453_float;
		return 0;
	}
	var_454_float = var_453_float;
	return 0;
}


func_1462(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_object = var_20_object;
	func_1808(var_19_bool, var_20_object);
	var_19_bool = var_17_bool;
	return 0;
}


func_1469()
{
	var_15_bool = var_2_bool;
	if(var_15_bool != 0) {
		func_1624(var_14_object);
	} else {
		StopGroup0();
		StopAnimation();
		StopAsync();
	}
	return 0;
	
}


func_959(var_0_bool, var_393_float, var_394_int)
{
	var_395_object = Obj(); var_396_float = 0; var_397_float = 0; var_398_object = Obj(); var_399_float = 0; var_400_float = 0;
	var_402_float = var_393_float * (float)0.8999999761581421;
	GetVictim(var_402_float, var_398_object);
	ReportAttack(var_0_bool);
	var_403_bool = var_398_object == var_0_bool;
	if(var_403_bool != 0) {
		var_404_float = 0; var_405_object = Obj(); var_406_int = 0;
		var_398_object = var_405_object;
		var_394_int = var_406_int;
		func_707(var_406_int);
		var_404_float = var_399_float;
		var_407_float = 0; var_408_object = Obj(); var_409_float = 0; var_410_int = 0;
		var_398_object = var_408_object;
		var_399_float = var_409_float;
		var_411_int = 0; var_412_object = Obj(); var_413_int = 0;
		var_398_object = var_412_object;
		var_394_int = var_413_int;
		func_710(var_413_int);
		var_411_int = var_410_int;
		func_1663(var_407_float, var_408_object, var_409_float, var_410_int);
		var_407_float = var_400_float;
		var_460_int = 0;
		func_1239(var_460_int);
		ReportHit(var_0_bool, var_460_int, var_400_float, var_399_float);
		var_461_object = Obj(); var_462_float = 0;
		var_398_object = var_461_object;
		var_400_float = var_462_float;
		func_713(var_461_object, var_462_float);
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1984(var_72_bool, var_73_float, var_74_float, var_75_float)
{
	var_72_bool = 0;
	var_76_bool = var_73_float >= var_74_float;
	if(var_76_bool != 0) {
		var_77_bool = var_73_float <= var_75_float;
		if(var_77_bool != 0) {
			var_72_bool = 1;
		}
	}
	return 0;
}


func_1992(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	CreateObjectSet(var_17_object);
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_462()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1998(var_67_string, var_68_int)
{
	var_69_string = ""; var_70_string = "";
	var_71_int = var_68_int;
	if(var_71_int != 0) {
		"idle" = "idle" + var_68_int;
	}
	var_70_string = var_67_string;
	return 2;
}


func_467(var_28_bool)
{
	var_29_bool = 0; var_30_bool = 0;
	Sleep((int)5, var_30_bool);
	var_28_bool = !var_30_bool;
	return 2;
}


func_2005(var_61_int)
{
	var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_bool = 0;
	var_64_int = 0;
	
Label_2007:
	var_67_string = ""; var_68_int = 0;
	var_64_int = var_68_int;
	func_1998(var_67_string, var_68_int);
	HasAnimation(var_65_bool, "all", var_67_string);
	var_72_bool = var_65_bool == 0; //@nz
	if(var_72_bool != 0) {
	} else {
		var_64_int = var_64_int + (int)1;
		goto Label_2007;
	}
	var_64_int = var_61_int;
	return 4;
	
}


func_473()
{
	StopGroup0();
	return 0;
}


func_1500(var_0_bool, var_1_bool, var_541_bool, var_542_object, var_543_float, var_544_float, var_545_bool, var_546_bool)
{
	var_547_bool = 0; var_548_bool = 0; var_549_object = Obj(); var_550_cvector = CVector(0,0,0); var_551_cvector = CVector(0,0,0); var_552_cvector = CVector(0,0,0); var_553_float = 0; var_554_object = Obj(); var_555_bool = 0; var_556_bool = 0; var_557_object = Obj(); var_558_cvector = CVector(0,0,0); var_559_cvector = CVector(0,0,0); var_560_cvector = CVector(0,0,0); var_561_float = 0; var_562_object = Obj();
	var_0_bool = false;
	var_1_bool = var_542_object;
	var_546_bool = var_556_bool;
	
Label_1504:
	var_563_bool = 0; var_564_object = Obj();
	var_542_object = var_564_object;
	func_1462(var_563_bool, var_564_object);
	var_582_bool = var_563_bool == 0; //@nz
	if(var_582_bool != 0) {
		var_541_bool = 0;
		return 16;
	}
	@@var_542_object:GetPosition(var_558_cvector);
	GetPosition(var_559_cvector);
	var_560_cvector = var_558_cvector - var_559_cvector;
	var_561_float = var_560_cvector | var_560_cvector;
	var_583_bool = 0;
	var_583_bool = 0;
	var_585_bool = var_544_float > (int)0;
	if(var_585_bool != 0) {
		var_586_float = var_544_float * var_544_float;
		var_587_bool = var_561_float > var_586_float;
		if(var_587_bool != 0) {
			var_583_bool = 1;
		}
	}
	if(var_583_bool != 0) {
		Stop();
		var_541_bool = 0;
		return 16;
	}
	var_588_float = var_543_float * var_543_float;
	var_589_bool = var_561_float > var_588_float;
	if(var_589_bool != 0) {
		@@var_542_object:GetPFPosition(var_558_cvector);
		FindPathTo(var_562_object, var_558_cvector);
		var_590_bool = var_562_object != 0; //@nn
		if(var_590_bool != 0) {
			var_562_object = var_557_object;
			var_562_object = 0;
		}
		var_591_bool = var_557_object != 0; //@nn
		if(var_591_bool != 0) {
			var_592_bool = var_556_bool;
			if(var_592_bool == 0) goto Label_1553;
			var_556_bool = 0;
			RotatePath(var_557_object, var_555_bool);
			var_593_bool = var_555_bool == 0; //@nz
			if(var_593_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_596_string = "";
				func_1631(var_596_string);
				var_597_string = "";
				func_1633(var_597_string);
				FollowPath(var_557_object, var_545_bool, var_555_bool, var_596_string, var_597_string);
				var_598_bool = var_555_bool == 0; //@nz
				if(var_598_bool != 0) {
					var_599_bool = var_0_bool;
					if(var_599_bool != 0) {
						var_557_object = 0;
						goto Label_1600;
					EMIT "GOTO 0x625";
					}
				} else {
					var_557_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_555_bool);
					var_602_bool = var_555_bool == 0; //@nz
					if(var_602_bool != 0) {
						var_603_bool = var_0_bool;
						if(var_603_bool != 0) {
							var_557_object = 0;
							goto Label_1600;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1600;
	}
			var_562_object = 0;
			goto Label_1598;

		Label_1598:
			var_557_object = 0;

		}
		goto Label_1504;
	}
Label_1600:
	var_541_bool = !var_0_bool;
	return 16;
	
}


func_998(var_0_bool, var_1_bool, var_364_bool, var_365_float)
{
	var_366_int = 0; var_367_bool = 0; var_368_int = 0; var_369_bool = 0;
	irand(var_368_int, var_1_bool);
	var_368_int = var_368_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	var_374_int = "attack_begin" + var_368_int;
	PlayAnimation("all", var_374_int);
	WaitForAnimEnd();
	func_1207(var_368_int, var_369_bool);
	var_390_bool = 0; var_391_object = Obj();
	var_391_object = var_0_bool;
	func_1784(var_390_bool, var_391_object);
	var_392_bool = var_390_bool == 0; //@nz
	if(var_392_bool != 0) {
		StopAsync();
		var_364_bool = 0;
		return 4;
	}
	var_393_float = 0; var_394_int = 0;
	var_365_float = var_393_float;
	var_368_int = var_394_int;
	func_959(var_369_bool, var_393_float, var_394_int);
	var_479_int = "attack_middle" + var_368_int;
	HasAnimation(var_369_bool, "all", var_479_int);
	var_480_bool = var_369_bool;
	if(var_480_bool != 0) {
		var_483_int = "attack_middle" + var_368_int;
		PlayAnimation("all", var_483_int);
		WaitForAnimEnd();
		var_484_bool = 0; var_485_object = Obj();
		var_485_object = var_0_bool;
		func_1784(var_484_bool, var_485_object);
		var_486_bool = var_484_bool == 0; //@nz
		if(var_486_bool != 0) {
			StopAsync();
			var_364_bool = 0;
			return 4;
		}
		var_487_float = 0; var_488_int = 0;
		var_365_float = var_487_float;
		var_368_int = var_488_int;
		func_959(var_369_bool, var_487_float, var_488_int);
	}
	SetAttackState((bool)0);
	var_492_int = "attack_end" + var_368_int;
	PlayAnimation("all", var_492_int);
	var_493_bool = 0; var_494_float = 0;
	func_1080(var_493_bool, (float)0.75);
	StopAsync();
	var_364_bool = 1;
	return 4;
}


func_2022(var_22_int, var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0;
	var_32_bool = var_22_int > var_23_int;
	if(var_32_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_34_bool = var_22_int != var_23_int;
	if(var_34_bool != 0) {
		var_35_int = var_23_int - var_22_int;
		irand(var_29_int, var_35_int);
	} else {
		var_41_bool = var_22_int == (int)0;
		if(var_41_bool == 0) goto Label_2040;
		return 8;
	}
Label_2040:
	(int)0 = (int)0 + var_22_int;
	var_37_bool = var_28_int == (int)0;
	if(var_37_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_30_int, "Money");
	AddItem(var_31_bool, var_30_int, (int)0, var_28_int);
	return 8;
	
}


