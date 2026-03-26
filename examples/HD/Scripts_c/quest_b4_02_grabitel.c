// @IMPORTS: Face/1,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,GetScene/1,GetGeometryLocator/3,AddActorByType/6,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,SetSpeed/1,Stop/0,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,WaitForAnimEnd/1,rand/2,ResetAAS/0,StopAnimation/0,StopGroup0/0,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Rotate/3,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,RotateAsync/2,IsLoaded/1,AddItem/3,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetVariable/2,GetProperty/2,SignalDeath/1,WorkWithCorpse/1,Barter/1,Trace/1,AddItem/4,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2
// @STRINGS: W:all|W:aattack_begin1|W:aattack_end1|W:knife|W:scripted|W:grabitel_knife.xml|W:Owner|A:SetScriptProperty|W:Target|A:GetPosition|A:GetEyesHeight|W:StartDirection|W:kill|W:attack_off|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:blood_dir.xml|W:reputation|W:battle|W:god_mode|W:idle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:Knife|W:lockpick|W:grabitel_mark|A:RemoveStationaryActor
// @GLOBALS: 0:bool:
// @RUN_OP: 0x49c
// @RUN_TASK: 4
// @TASK_0: vars= params=2
// @TASK_1: vars=bool params=2
// @EVENT_17: op=0x90 vars=object
// @EVENT_30: op=0x96 vars=object,object,bool
// @EVENT_26: op=0x9d vars=string
// @TASK_2: vars=object,int,int,bool,float,int params=2
// @EVENT_17: op=0xdb vars=object
// @EVENT_30: op=0xe1 vars=object,object,bool
// @EVENT_26: op=0xe8 vars=string
// @TASK_3: vars=bool,object,bool params=6
// @EVENT_17: op=0x384 vars=object
// @EVENT_30: op=0x38a vars=object,object,bool
// @EVENT_26: op=0x391 vars=string
// @EVENT_7: op=0x3cd vars=int
// @EVENT_1: op=0x3e8 vars=object
// @EVENT_2: op=0x3f7 vars=object
// @EVENT_10: op=0x47d vars=object
// @EVENT_41: op=0x488 vars=object
// @TASK_4: vars= params=0
// @EVENT_17: op=0x4a4 vars=object
// @EVENT_1: op=0x4b2 vars=object
// @EVENT_3: op=0x4bc vars=object
// @TASK_5: vars= params=1
// @TASK_6: vars= params=1
// @EVENT_0: op=0x54d vars=object
// @EVENT_22: op=0x5cc vars=object,int,float,float
// @EVENT_16: op=0x5ce vars=object,string
// @EVENT_41: op=0x5d0 vars=object
// @STANDALONE_EVENT_22: op=0x85e vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x866 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x870 vars=object,string
// @STANDALONE_EVENT_41: op=0x87d vars=object
// @PE: 0x90,0x96,0x9d,0xa3,0xbf,0xc2,0xc7,0xdb,0xe1,0xe8,0x384,0x38a,0x391,0x3cd,0x3e8,0x3f7,0x46b,0x47d,0x488,0x491,0x4a4,0x51c,0x528,0x53e,0x5b2,0x5cc,0x5ce,0x5d0,0x5d2,0x7af,0x7b6,0x7ce,0x7d9,0x7e6,0x856,0x85e,0x866,0x87d,0x883,0x88a,0x896,0x941,0x943

task_1_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_10_bool = Obj();
	func_2369();
	return 0;
}


task_1_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_bool = var_14_object;
	var_11_object = var_15_object;
	func_2371(var_15_object);
	return 0;
}


task_1_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_12_bool = var_10_bool == "kill";
	if(var_12_bool != 0) {
		var_0_bool = true;
	}
	return 0;
}


task_2_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_bool, var_9_object, var_10_bool)
{
	var_10_bool = Obj();
	func_2369();
	return 0;
}


task_2_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_bool = var_14_object;
	var_11_object = var_15_object;
	func_2371(var_15_object);
	return 0;
}


task_2_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_string, var_8_bool, var_9_object, var_10_bool)
{
	var_12_bool = var_10_bool == "kill";
	if(var_12_bool != 0) {
		var_13_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
	}
	return 0;
}


task_3_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_10_object = Obj();
	func_2369();
	return 0;
}


task_3_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_object = var_14_object;
	var_11_object = var_15_object;
	func_2371(var_15_object);
	return 0;
}


task_3_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string)
{
	var_12_bool = var_10_string == "kill";
	if(var_12_bool != 0) {
		var_13_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		func_987(var_10_string);
	}
	return 0;
}


task_3_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int)
{
	var_12_bool = var_10_int == (int)1;
	if(var_12_bool != 0) {
		var_13_object = Obj();
		var_13_object = var_1_object;
		func_2084(var_13_object);
	} else {
		var_18_int = 0;
		var_10_int = var_18_int;
		func_1131(var_9_bool, var_10_int, var_18_int);
	}
	return 0;
	
}


task_3_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_1_object == var_10_object;
	if(var_12_bool != 0) {
		var_13_bool = var_2_int == 0; //@nz
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_2_int = true;
		var_14_object = Obj();
		var_10_object = var_14_object;
		func_1888(var_14_object);
	}
	return 0;
}


task_3_event_2(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_1_object == var_10_object;
	if(var_12_bool != 0) {
		var_13_int = var_2_int;
		if(var_13_int != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	return 0;
}


task_3_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	RequestClearPath(var_10_object);
	return 0;
}


task_3_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	func_987(var_10_object);
	var_10_object = Obj();
	func_2173();
	return 0;
}


	task_4_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_14_object)
	{
	var_15_bool = 0; var_16_object = Obj();
	var_14_object = var_16_object;
	func_2179(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		func_1303();
		var_51_object = Obj();
		var_14_object = var_51_object;
		func_2186(var_51_object);
	}
	return 0;
	}


task_4_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsPlayerActor(var_10_object, var_12_bool);
	var_13_bool = var_12_bool;
	if(var_13_bool != 0) {
		var_10_object = Obj();
		func_1188();
	}
	return 2;
}


task_4_event_3(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsPlayerActor(var_10_object, var_12_bool);
	var_13_bool = var_12_bool;
	if(var_13_bool != 0) {
		var_10_object = Obj();
		func_1188();
	}
	return 2;
}


task_6_event_0(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsOverrideActive(var_12_bool);
	var_13_bool = var_12_bool == 0; //@nz
	if(var_13_bool != 0) {
		var_14_object = Obj();
		var_10_object = var_14_object;
		func_2198(var_14_object);
	}
	return 2;
}


task_6_event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0;
}


task_6_event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	return 0;
}


task_6_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
	var_10_object = var_14_object;
	var_11_int = var_15_int;
	var_12_float = var_16_float;
	func_1790(var_14_object, var_15_int, var_16_float);
	return 0;
}


event_43(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0);
	var_10_object = var_16_object;
	var_11_int = var_17_int;
	var_12_float = var_18_float;
	var_14_cvector = var_19_cvector;
	var_15_cvector = var_20_cvector;
	func_1858(var_18_float, var_19_cvector, var_20_cvector);
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
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


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	func_2134(var_11_object);
	return 0;
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	
Label_1180:
	Sleep((int)3);
	func_1222();
	goto Label_1180;
}
EMIT "Return(); Pop(0)";


func_0(var_59_bool, var_60_object, var_82_bool, var_687_object)
{
	var_61_float = 0; var_62_float = 0;
	var_63_bool = 0; var_64_object = Obj();
	var_60_object = var_64_object;
	func_1703(var_63_bool, var_64_object);
	var_65_bool = var_63_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_59_bool = 0;
		return 2;
	}
	var_66_float = 0; var_67_object = Obj();
	var_60_object = var_67_object;
	func_1511(var_66_float, var_67_object);
	var_66_float = var_62_float;
	var_74_bool = 0; var_75_float = 0; var_76_float = 0; var_77_float = 0;
	var_62_float = var_75_float;
	func_2009(var_74_bool, var_75_float, (float)250000.0, (float)3240000.0);
	if(var_74_bool != 0) {
		var_80_bool = 0; var_81_object = Obj();
		var_60_object = var_81_object;
		TaskCall(1);
		func_37(var_62_float, var_82_bool, var_80_bool, var_81_object);
		TaskReturn();
		var_82_bool = var_59_bool;
		return 2;
	}
	var_685_bool = 0; var_686_object = Obj();
	var_60_object = var_686_object;
	TaskCall(2);
	func_163(var_685_bool, var_686_object);
	TaskReturn();
	var_687_object = var_59_bool;
	return 2;
}


func_1536(var_90_bool, var_91_object, var_92_string, var_93_float, var_94_float, var_95_float)
{
	var_96_float = 0; var_97_float = 0;
	var_98_bool = 0; var_99_object = Obj(); var_100_string = "";
	var_91_object = var_99_object;
	var_92_string = var_100_string;
	func_1524(var_98_bool, var_99_object, var_100_string);
	var_107_bool = var_98_bool == 0; //@nz
	if(var_107_bool != 0) {
		var_90_bool = 0;
		return 2;
	}
	@@var_91_object:GetProperty(var_92_string, var_97_float);
	var_108_float = 0; var_109_float = 0; var_110_float = 0; var_111_float = 0;
	var_109_float = var_97_float + var_93_float;
	var_94_float = var_110_float;
	var_95_float = var_111_float;
	func_1998(var_108_float, var_109_float, var_110_float, var_111_float);
	@@var_91_object:SetProperty(var_92_string, var_108_float);
	var_90_bool = 1;
	return 2;
}


func_1029(var_0_bool, var_1_object, var_299_bool, var_300_object, var_301_float, var_302_float, var_303_bool, var_304_bool)
{
	var_305_bool = 0; var_306_bool = 0; var_307_object = Obj(); var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_object = Obj(); var_313_bool = 0; var_314_bool = 0; var_315_object = Obj(); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_object = Obj();
	var_0_bool = false;
	var_1_object = var_300_object;
	var_304_bool = var_314_bool;
	
Label_1033:
	var_321_bool = 0; var_322_object = Obj();
	var_300_object = var_322_object;
	func_1169(var_321_bool, var_322_object);
	var_325_bool = var_321_bool == 0; //@nz
	if(var_325_bool != 0) {
		var_299_bool = 0;
		return 16;
	}
	@@var_300_object:GetPosition(var_316_cvector);
	GetPosition(var_317_cvector);
	var_318_cvector = var_316_cvector - var_317_cvector;
	var_319_float = var_318_cvector | var_318_cvector;
	var_326_bool = 0;
	var_326_bool = 0;
	var_328_bool = var_302_float > (int)0;
	if(var_328_bool != 0) {
		var_329_float = var_302_float * var_302_float;
		var_330_bool = var_319_float > var_329_float;
		if(var_330_bool != 0) {
			var_326_bool = 1;
		}
	}
	if(var_326_bool != 0) {
		Stop();
		var_299_bool = 0;
		return 16;
	}
	var_331_float = var_301_float * var_301_float;
	var_332_bool = var_319_float > var_331_float;
	if(var_332_bool != 0) {
		@@var_300_object:GetPFPosition(var_316_cvector);
		FindPathTo(var_320_object, var_316_cvector);
		var_333_bool = var_320_object != 0; //@nn
		if(var_333_bool != 0) {
			var_320_object = var_315_object;
			var_320_object = 0;
		}
		var_334_bool = var_315_object != 0; //@nn
		if(var_334_bool != 0) {
			var_335_bool = var_314_bool;
			if(var_335_bool == 0) goto Label_1082;
			var_314_bool = 0;
			RotatePath(var_315_object, var_313_bool);
			var_336_bool = var_313_bool == 0; //@nz
			if(var_336_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_339_string = "";
				func_1176(var_339_string);
				var_340_string = "";
				func_1178(var_340_string);
				FollowPath(var_315_object, var_303_bool, var_313_bool, var_339_string, var_340_string);
				var_341_bool = var_313_bool == 0; //@nz
				if(var_341_bool != 0) {
					var_342_bool = var_0_bool;
					if(var_342_bool != 0) {
						var_315_object = 0;
						goto Label_1129;
					EMIT "GOTO 0x44e";
					}
				} else {
					var_315_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_313_bool);
					var_345_bool = var_313_bool == 0; //@nz
					if(var_345_bool != 0) {
						var_346_bool = var_0_bool;
						if(var_346_bool != 0) {
							var_315_object = 0;
							goto Label_1129;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1129;
	}
			var_320_object = 0;
			goto Label_1127;

		Label_1127:
			var_315_object = 0;

		}
		goto Label_1033;
	}
Label_1129:
	var_299_bool = !var_0_bool;
	return 16;
	
}


func_2057(var_591_float)
{
	var_592_object = Obj(); var_593_object = Obj();
	CreateFloatVector(var_593_object);
	@@var_593_object:add(var_591_float);
	var_595_bool = var_591_float < (int)0;
	if(var_595_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_593_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1558(var_535_float, var_536_object, var_537_float, var_538_int)
{
	var_542_int = 0; var_543_string = ""; var_544_int = 0; var_545_float = 0; var_546_float = 0; var_547_float = 0; var_548_int = 0; var_549_string = ""; var_550_int = 0; var_551_float = 0; var_552_float = 0; var_553_float = 0;
	var_554_bool = 0; var_555_object = Obj(); var_556_string = "";
	var_536_object = var_555_object;
	func_1524(var_554_bool, var_555_object, "health");
	var_557_bool = var_554_bool == 0; //@nz
	if(var_557_bool != 0) {
		var_535_float = 0.0;
		return 12;
	}
	var_558_bool = 0; var_559_object = Obj(); var_560_string = "";
	var_536_object = var_559_object;
	func_1524(var_558_bool, var_559_object, "armor");
	var_561_bool = var_558_bool == 0; //@nz
	if(var_561_bool != 0) {
		var_548_int = 0;
	} else {
			@@var_536_object:GetProperty("armor", var_548_int);
	}
	var_563_string = ""; var_564_int = 0;
	var_538_int = var_564_int;
	func_1490(var_563_string, var_564_int);
	var_549_string = "armor_" + var_563_string;
	var_569_bool = 0; var_570_object = Obj(); var_571_string = "";
	var_536_object = var_570_object;
	var_549_string = var_571_string;
	func_1524(var_569_bool, var_570_object, var_571_string);
	var_572_bool = var_569_bool == 0; //@nz
	if(var_572_bool != 0) {
		var_550_int = 0;
	} else {
		@@var_536_object:GetProperty(var_549_string, var_550_int);

	}
	var_573_float = 0; var_574_float = 0; var_575_float = 0;
	var_576_int = var_548_int + var_550_int;
	var_574_float = var_576_int / (float)100.0;
	func_1967(var_573_float, var_574_float, (float)1);
	var_573_float = var_551_float;
	@@var_536_object:GetProperty("health", var_552_float);
	var_581_int = (int)1 - var_551_float;
	var_553_float = var_537_float * var_581_int;
	var_583_float = 0; var_584_float = 0; var_585_float = 0; var_586_float = 0;
	var_584_float = var_552_float - var_553_float;
	func_1998(var_583_float, var_584_float, (float)0, (float)1);
	@@var_536_object:SetProperty("health", var_583_float);
	var_589_bool = 0; var_590_object = Obj();
	var_536_object = var_590_object;
	func_1519(var_589_bool, var_590_object);
	if(var_589_bool != 0) {
		var_591_float = 0;
		var_591_float = -var_553_float;
		func_2057(var_591_float);
	}
	var_553_float = var_535_float;
	return 12;
	
}


func_2074(var_86_float)
{
	var_87_object = Obj(); var_88_object = Obj();
	CreateFloatVector(var_88_object);
	@@var_88_object:add(var_86_float);
	SendWorldWndMessage((int)16, var_88_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_543(var_0_bool, var_1_object, var_488_bool, var_489_float)
{
	var_490_int = 0; var_491_bool = 0; var_492_int = 0; var_493_string = ""; var_494_int = 0; var_495_bool = 0; var_496_int = 0; var_497_string = "";
	func_884(var_497_string);
	irand(var_494_int, var_1_object);
	var_494_int = var_494_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_2093();
	var_502_int = "attack_begin" + var_494_int;
	PlayAnimation("all", var_502_int);
	WaitForAnimEnd();
	func_852(var_496_int, var_497_string);
	var_518_bool = 0; var_519_object = Obj();
	var_519_object = var_0_bool;
	func_1703(var_518_bool, var_519_object);
	var_520_bool = var_518_bool == 0; //@nz
	if(var_520_bool != 0) {
		StopAsync();
		var_488_bool = 0;
		return 8;
	}
	var_521_float = 0; var_522_int = 0;
	var_489_float = var_521_float;
	var_494_int = var_522_int;
	func_504(var_497_string, var_521_float, var_522_int);
	var_626_int = "attack_middle" + var_494_int;
	HasAnimation(var_495_bool, "all", var_626_int);
	var_627_bool = var_495_bool;
	if(var_627_bool != 0) {
		func_2093();
		var_630_int = "attack_middle" + var_494_int;
		PlayAnimation("all", var_630_int);
		WaitForAnimEnd();
		func_884(var_497_string);
		var_631_bool = 0; var_632_object = Obj();
		var_632_object = var_0_bool;
		func_1703(var_631_bool, var_632_object);
		var_633_bool = var_631_bool == 0; //@nz
		if(var_633_bool != 0) {
			StopAsync();
			var_488_bool = 0;
			return 8;
		}
		var_634_float = 0; var_635_int = 0;
		var_489_float = var_634_float;
		var_494_int = var_635_int;
		func_504(var_497_string, var_634_float, var_635_int);
		var_496_int = 1;

	Label_620:
		var_637_int = "attack_middle" + var_494_int;
		var_639_int = var_637_int + "_";
		var_497_string = var_639_int + var_496_int;
		HasAnimation(var_495_bool, "all", var_497_string);
		var_641_bool = var_495_bool == 0; //@nz
		if(var_641_bool != 0) {
		} else {
			func_2093();
			PlayAnimation("all", var_497_string);
			WaitForAnimEnd();
			func_884(var_497_string);
			var_657_bool = 0; var_658_object = Obj();
			var_658_object = var_0_bool;
			func_1703(var_657_bool, var_658_object);
			var_659_bool = var_657_bool == 0; //@nz
			if(var_659_bool != 0) {
				StopAsync();
				var_488_bool = 0;
				var_660_float = 0; var_661_int = 0;
				var_489_float = var_660_float;
				var_494_int = var_661_int;
				func_504(var_497_string, var_660_float, var_661_int);
				var_496_int = var_496_int + (int)1;
				goto Label_620;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_645_int = "attack_end" + var_494_int;
	PlayAnimation("all", var_645_int);
	var_646_bool = 0;
	func_894(var_646_bool);
	if(var_646_bool != 0) {
		var_647_bool = 0; var_648_float = 0;
		func_682(var_647_bool, (float)0.44999998807907104);
		StopAsync();
	}
	var_488_bool = 1;
	return 8;
	
}


func_2084(var_97_object)
{
	var_98_bool = 0; var_99_bool = 0;
	IsPlayerActor(var_97_object, var_99_bool);
	var_100_bool = var_99_bool;
	if(var_100_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_37(var_0_bool, var_80_bool, var_81_object, var_198_object)
{
	var_83_object = Obj(); var_84_cvector = CVector(0,0,0); var_85_bool = 0; var_86_object = Obj(); var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_object = Obj(); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_object = Obj(); var_94_cvector = CVector(0,0,0); var_95_float = 0; var_96_cvector = CVector(0,0,0);
	var_97_object = Obj();
	var_81_object = var_97_object;
	func_2084(var_97_object);
	var_0_bool = false;
	var_102_bool = 0; var_103_object = Obj();
	var_81_object = var_103_object;
	func_1737(var_102_bool, var_103_object);
	var_116_bool = 0; var_117_object = Obj();
	var_81_object = var_117_object;
	func_1703(var_116_bool, var_117_object);
	var_118_bool = var_116_bool == 0; //@nz
	if(var_118_bool != 0) {
		var_80_bool = 0;
		return 14;
	}
	func_2093();
	Face(var_81_object);
	PlayAnimation("all", "aattack_begin1");
	WaitForAnimEnd();
	var_125_bool = 0; var_126_object = Obj();
	var_81_object = var_126_object;
	func_1703(var_125_bool, var_126_object);
	var_127_bool = var_125_bool == 0; //@nz
	if(var_127_bool != 0) {
		StopAsync();
		var_80_bool = 0;
		return 14;
	}
	PlayAnimation("all", "aattack_end1");
	GetScene(var_90_object);
	GetGeometryLocator("knife", var_92_bool, var_91_cvector);
	AddActorByType(var_93_object, "scripted", var_90_object, var_91_cvector, CVector(0.0, 0.0, 1.0), "grabitel_knife.xml");
	var_135_object = Obj();
	func_1951(var_135_object);
	@@var_93_object:SetScriptProperty("Owner", var_135_object);
	@@var_93_object:SetScriptProperty("Target", var_81_object);
	@@var_81_object:GetPosition(var_94_cvector);
	@@var_81_object:GetEyesHeight(var_95_float);
	var_137_float = GetByIndex(var_94_cvector, 1);
	var_139_int = var_95_float - (int)10;
	var_137_float = var_137_float + var_139_int;
	SetByIndex(var_94_cvector, 1) = var_137_float;
	var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_float = 0;
	var_91_cvector = var_141_cvector;
	var_94_cvector = var_142_cvector;
	func_2318(var_140_cvector, var_141_cvector, var_142_cvector, (float)2000.0);
	var_140_cvector = var_96_cvector;
	@@var_93_object:SetScriptProperty("StartDirection", var_96_cvector);
	WaitForAnimEnd();
	StopAsync();
	var_192_bool = var_0_bool;
	if(var_192_bool != 0) {
		var_80_bool = 1;
		return 14;
	}
	var_193_bool = 0; var_194_object = Obj();
	var_81_object = var_194_object;
	func_1703(var_193_bool, var_194_object);
	var_195_bool = var_193_bool == 0; //@nz
	if(var_195_bool != 0) {
		var_80_bool = 0;
		return 14;
	}
	var_196_bool = 0; var_197_object = Obj();
	var_81_object = var_197_object;
	TaskCall(2);
	func_163(var_196_bool, var_197_object);
	TaskReturn();
	var_198_object = var_80_bool;
	return 14;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


func_2093()
{
	var_119_object = Obj(); var_120_object = Obj();
	GetScene(var_120_object);
	var_122_object = Obj();
	func_1951(var_122_object);
	BroadcastMessage("battle", var_122_object, var_120_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2104(var_617_bool)
{
	var_618_bool = 0; var_619_bool = 0;
	GetVariable("god_mode", var_619_bool);
	var_619_bool = var_617_bool;
	return 2;
}


func_2110(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = "";
	var_39_int = var_36_int;
	if(var_39_int != 0) {
		"idle" = "idle" + var_36_int;
	}
	var_38_string = var_35_string;
	return 2;
}


func_2117(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0;
	var_32_int = 0;
	
Label_2119:
	var_35_string = ""; var_36_int = 0;
	var_32_int = var_36_int;
	func_2110(var_35_string, var_36_int);
	HasAnimation(var_33_bool, "all", var_35_string);
	var_40_bool = var_33_bool == 0; //@nz
	if(var_40_bool != 0) {
	} else {
		var_32_int = var_32_int + (int)1;
		goto Label_2119;
	}
	var_32_int = var_29_int;
	return 4;
	
}


func_2134(var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	TaskCall(6);
	func_1320(var_12_object);
	TaskReturn();
	return 0;
}


func_1631(var_606_bool, var_607_object)
{
	var_608_float = 0; var_609_float = 0;
	var_610_bool = 0; var_611_object = Obj(); var_612_string = "";
	var_607_object = var_611_object;
	func_1524(var_610_bool, var_611_object, "health");
	var_613_bool = var_610_bool == 0; //@nz
	if(var_613_bool != 0) {
		var_606_bool = 0;
		return 2;
	}
	var_614_bool = 0;
	var_614_bool = 0;
	var_615_bool = 0; var_616_object = Obj();
	var_607_object = var_616_object;
	func_1519(var_615_bool, var_616_object);
	if(var_615_bool != 0) {
		var_617_bool = 0;
		func_2104(var_617_bool);
		if(var_617_bool != 0) {
			var_614_bool = 1;
		}
	}
	if(var_614_bool != 0) {
		var_606_bool = 0;
		return 2;
	}
	@@var_607_object:GetProperty("health", var_609_float);
	var_606_bool = var_609_float <= (float)0.0;
	return 2;
}


func_1131(var_0_bool, var_1_object, var_18_int)
{
	var_20_bool = var_18_int != (int)0;
	if(var_20_bool != 0) {
		return 0;
	}
	var_21_bool = 0; var_22_object = Obj();
	var_22_object = var_1_object;
	func_1169(var_21_bool, var_22_object);
	var_57_bool = var_21_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1662(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0;
	@@var_33_object:IsDead(var_35_bool);
	var_35_bool = var_32_bool;
	return 2;
}


func_1153(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2179(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	func_1703(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
	return 0;
}


func_1667(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj();
	var_27_bool = var_22_object == 0; //@ne
	if(var_27_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	var_28_bool = 0;
	var_28_bool = 0;
	var_31_bool = IsFuncExist(var_22_object, "IsDead", (int)1);
	if(var_31_bool != 0) {
		var_32_bool = 0; var_33_object = Obj();
		var_22_object = var_33_object;
		func_1662(var_32_bool, var_33_object);
		if(var_32_bool != 0) {
			var_28_bool = 1;
		}
	}
	if(var_28_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	GetScene(var_25_object);
	var_36_bool = var_25_object == 0; //@ne
	if(var_36_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	@@var_22_object:GetScene(var_26_object);
	var_37_bool = var_25_object != var_26_object;
	if(var_37_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	var_21_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2186(var_51_object)
{
	var_52_object = Obj();
	var_51_object = var_52_object;
	func_2353(var_52_object);
	return 0;
}


func_2192(var_55_int)
{
	var_56_int = 0; var_57_int = 0;
	GetVariable("branch", var_57_int);
	var_57_int = var_55_int;
	return 2;
}


func_1169(var_321_bool, var_322_object)
{
	var_323_bool = 0; var_324_object = Obj();
	var_322_object = var_324_object;
	func_1703(var_323_bool, var_324_object);
	var_323_bool = var_321_bool;
	return 0;
}


func_2198(var_14_object)
{
	var_15_int = 0;
	func_2192(var_15_int);
	var_20_bool = var_15_int == (int)1;
	if(var_20_bool != 0) {
		WorkWithCorpse(var_14_object);
	} else {
		Barter(var_14_object);
	}
	return 0;
	
}


func_1176(var_339_string)
{
	var_339_string = "walk";
	return 0;
}


func_1178(var_340_string)
{
	var_340_string = "run";
	return 0;
}


func_163(var_196_bool, var_197_object)
{
	var_204_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_205_object = Obj(); var_206_bool = 0; var_207_float = 0;
	var_197_object = var_205_object;
	func_240(var_201_bool, var_202_float, var_203_int, var_196_bool, var_197_object, var_205_object, (bool)1, (float)200.0);
	var_679_bool = 0;
	var_679_bool = 0;
	var_680_bool = GlobalVars[0];
	if(var_680_bool != 0) {
		var_681_int = var_3_int;
		if(var_681_int != 0) {
			var_679_bool = 1;
		}
	}
	if(var_679_bool != 0) {
		PlayAnimation("all", "attack_off");
		WaitForAnimEnd();
	}
	var_684_bool = GlobalVars[0];
	var_684_bool = var_196_bool;
	return 0;
}


func_2211(var_18_int, var_19_int)
{
	var_20_int = 0; var_21_bool = 0; var_22_int = 0; var_23_bool = 0;
	var_24_bool = var_18_int > var_19_int;
	if(var_24_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_22_int = 0;
	var_26_bool = var_18_int != var_19_int;
	if(var_26_bool != 0) {
		var_27_int = var_19_int - var_18_int;
		irand(var_22_int, var_27_int);
	} else {
		var_36_bool = var_18_int == (int)0;
		if(var_36_bool == 0) goto Label_2229;
		return 4;
	}
Label_2229:
	var_22_int = var_22_int + var_18_int;
	var_29_bool = var_22_int == (int)0;
	if(var_29_bool != 0) {
		return 4;
	}
	var_30_int = 0; var_31_string = "";
	func_2313(var_30_int, "Money");
	AddItem(var_23_bool, var_30_int, (int)0, var_22_int);
	return 4;
	
}


func_1703(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj();
	var_18_object = var_22_object;
	func_1667(var_21_bool, var_22_object);
	var_38_bool = var_21_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_17_bool = 0;
		return 2;
	}
	var_39_bool = 0; var_40_object = Obj(); var_41_string = "";
	var_18_object = var_40_object;
	func_1524(var_39_bool, var_40_object, "noaccess");
	var_48_bool = var_39_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_17_bool = 1;
		return 2;
	}
	@@var_18_object:GetProperty("noaccess", var_20_int);
	var_17_bool = var_20_int == (int)0;
	return 2;
}


func_680(var_3_int)
{
	var_3_int = true;
	return 0;
}


func_682(var_647_bool, var_648_float)
{
	var_649_float = 0; var_650_bool = 0; var_651_float = 0; var_652_bool = 0;
	rand(var_651_float);
	var_653_bool = var_651_float < var_648_float;
	if(var_653_bool != 0) {

	Label_687:
		IsAnimationPlaying(var_652_bool);
		var_654_bool = var_652_bool == 0; //@nz
		if(var_654_bool != 0) {
		} else {
			var_655_bool = 0;
			func_780(var_655_bool);
			if(var_655_bool != 0) {
				var_647_bool = 1;
				sync();
				goto Label_687;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_884(var_652_bool);
	}
	goto Label_707;
	
Label_707:
	var_647_bool = 0;
	return 4;
	
}


func_191(var_532_float)
{
	var_532_float = 0.15000000596046448;
	return 0;
}


func_1727(var_106_bool, var_107_cvector)
{
	var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_bool = 0; var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_bool = 0;
	GetPosition(var_111_cvector);
	var_112_cvector = var_107_cvector - var_111_cvector;
	var_114_float = GetByIndex(var_112_cvector, 0);
	var_115_float = GetByIndex(var_112_cvector, 2);
	Rotate(var_114_float, var_115_float, var_113_bool);
	var_113_bool = var_106_bool;
	return 6;
}


func_194(var_539_int)
{
	var_539_int = 0;
	return 0;
}


func_2242(var_61_string)
{
	var_62_object = Obj(); var_63_int = 0; var_64_bool = 0; var_65_object = Obj(); var_66_int = 0; var_67_bool = 0;
	CreateInvItem(var_65_object);
	@@var_65_object:SetItemName(var_61_string);
	@@var_65_object:SetProperty("Organ", (int)1);
	@@var_65_object:GetItemID(var_66_int);
	AddItem(var_67_bool, var_65_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_709(var_0_bool, var_427_bool, var_428_float)
{
	var_429_bool = 0; var_430_cvector = CVector(0,0,0); var_431_cvector = CVector(0,0,0); var_432_cvector = CVector(0,0,0); var_433_float = 0; var_434_bool = 0; var_435_cvector = CVector(0,0,0); var_436_cvector = CVector(0,0,0); var_437_cvector = CVector(0,0,0); var_438_float = 0;
	
Label_710:
	IsAnimationPlaying(var_434_bool);
	var_439_bool = var_434_bool == 0; //@nz
	if(var_439_bool != 0) {
	} else {
		var_440_bool = 0;
		func_780(var_440_bool);
		if(var_440_bool != 0) {
			var_427_bool = 1;
			return 10;
		}
		var_483_bool = 0; var_484_object = Obj();
		var_484_object = var_0_bool;
		func_1703(var_483_bool, var_484_object);
		var_485_bool = var_483_bool == 0; //@nz
		if(var_485_bool != 0) {
			var_427_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_435_cvector);
		GetPFPosition(var_436_cvector);
		var_437_cvector = var_435_cvector - var_436_cvector;
		var_438_float = var_437_cvector | var_437_cvector;
		var_486_float = var_428_float * var_428_float;
		var_487_bool = var_438_float < var_486_float;
		if(var_487_bool != 0) {
			var_488_bool = 0; var_489_float = 0;
			var_428_float = var_489_float;
			func_543(var_437_cvector, var_438_float, var_488_bool, var_489_float);
			var_427_bool = 1;
			sync();
			goto Label_710;
		}
		return 10;
	}
	func_884(var_438_float);
	var_427_bool = 0;
	return 10;
	
}


func_197(var_600_int)
{
	var_600_int = 1;
	return 0;
}


func_199(var_601_object, var_602_float)
{
	var_603_bool = 0;
	var_603_bool = 0;
	var_605_bool = var_602_float > (int)0;
	if(var_605_bool != 0) {
		var_606_bool = 0; var_607_object = Obj();
		var_601_object = var_607_object;
		func_1631(var_606_bool, var_607_object);
		if(var_606_bool != 0) {
			var_603_bool = 1;
		}
	}
	if(var_603_bool != 0) {
		var_623_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		func_680(var_602_float);
	}
	return 0;
}


func_1222()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0;
	WaitForAnimEnd();
	var_25_bool = 0;
	func_1883(var_25_bool);
	var_28_bool = var_25_bool == 0; //@nz
	if(var_28_bool != 0) {
		return 14;
	}
	func_2117((int)0);
	var_29_int = var_18_int;
	var_19_int = 0;
	
Label_1236:
	var_42_bool = 0;
	var_42_bool = 0;
	var_44_bool = var_19_int < (int)5;
	if(var_44_bool != 0) {
		var_45_bool = 0;
		func_1883(var_45_bool);
		if(var_45_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		irand(var_20_int, (int)3);
		var_48_bool = var_20_int == (int)0;
		if(var_48_bool != 0) {
			var_49_int = var_18_int;
			if(var_49_int == 0) goto Label_1269;
			irand(var_21_int, var_18_int);
			var_51_string = ""; var_52_int = 0;
			var_21_int = var_52_int;
			func_2110(var_51_string, var_52_int);
			PlayAnimation("all", var_51_string);
			WaitForAnimEnd(var_22_bool);
			var_53_bool = var_22_bool == 0; //@nz
			if(var_53_bool != 0) {
			} else {
		} else {
				var_58_bool = var_20_int == (int)1;
				if(var_58_bool != 0) {
					rand(var_23_float, (int)4);
					var_61_int = var_23_float + (int)1;
					Sleep(var_61_int, var_24_bool);
					var_62_bool = var_24_bool == 0; //@nz
					if(var_62_bool != 0) {
						goto Label_1298;
					}
					goto Label_1287;
				}
				var_63_int = var_19_int;
				if(var_63_int == 0) goto Label_1287;
				goto Label_1298;
		}
		Label_1287:
			var_54_bool = 0;
			func_1301(var_54_bool);
			var_55_bool = var_54_bool == 0; //@nz
			if(var_55_bool != 0) {
				goto Label_1298;
			}
			ResetAAS();
			var_19_int = var_19_int + (int)1;
			goto Label_1236;

		}
	}
Label_1298:
	ResetAAS();
	return 14;
	
}


func_1737(var_102_bool, var_103_object)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0);
	@@var_103_object:GetPosition(var_105_cvector);
	var_106_bool = 0; var_107_cvector = CVector(0,0,0);
	var_105_cvector = var_107_cvector;
	func_1727(var_106_bool, var_107_cvector);
	var_106_bool = var_102_bool;
	return 2;
}


func_1746(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = "";
	var_42_bool = var_27_object == 0; //@ne
	if(var_42_bool != 0) {
		return 14;
	}
	IsDead(var_35_bool);
	var_43_bool = var_35_bool;
	if(var_43_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_36_int);
	var_45_bool = var_36_int < (int)0;
	if(var_45_bool != 0) {
		return 14;
	}
	@@var_27_object:GetPosition(var_37_cvector);
	GetPosition(var_38_cvector);
	GetDirection(var_39_cvector);
	var_40_cvector = var_38_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_40_cvector, 0);
	var_47_float = GetByIndex(var_39_cvector, 0);
	var_48_float = var_46_float * var_47_float;
	var_49_float = GetByIndex(var_40_cvector, 2);
	var_50_float = GetByIndex(var_39_cvector, 2);
	var_51_float = var_49_float * var_50_float;
	var_52_int = var_48_float + var_51_float;
	var_54_bool = var_52_int >= (int)0;
	if(var_54_bool != 0) {
		var_41_string = "fhit";
	} else {
		var_41_string = "bhit";
	}
	var_57_int = var_41_string + "1";
	var_59_int = var_41_string + "2";
	FadeSecondaryAnimation("hit_react", var_57_int, var_59_int, (int)-10);
	return 14;
	
}


func_2259()
{
	var_55_int = 0;
	func_2192(var_55_int);
	var_60_bool = var_55_int != (int)1;
	if(var_60_bool != 0) {
		return 0;
	}
	var_61_string = "";
	func_2242("liver");
	var_72_string = "";
	func_2242("kidney");
	var_73_string = "";
	func_2242("heart");
	var_74_string = "";
	func_2242("blood");
	return 0;
}


func_2283()
{
	var_13_int = 0; var_14_bool = 0; var_15_int = 0; var_16_bool = 0;
	ClearSubContainer((int)0);
	var_18_int = 0; var_19_int = 0;
	func_2211((int)300, (int)750);
	var_37_string = ""; var_38_int = 0; var_39_int = 0;
	func_1899("Knife", (int)1, (int)8);
	var_48_string = ""; var_49_int = 0; var_50_int = 0;
	func_1899("lockpick", (int)1, (int)6);
	var_51_int = 0; var_52_string = "";
	func_2313(var_51_int, "grabitel_mark");
	AddItem(var_16_bool, var_51_int, (int)0, (int)1);
	return 4;
}


func_240(var_0_bool, var_3_int, var_5_float, var_205_object, var_206_bool, var_207_float, var_276_bool, var_368_bool)
{
	var_208_float = 0; var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_bool = 0; var_212_bool = 0; var_213_float = 0; var_214_cvector = CVector(0,0,0); var_215_float = 0; var_216_cvector = CVector(0,0,0); var_217_bool = 0; var_218_float = 0; var_219_float = 0; var_220_cvector = CVector(0,0,0); var_221_cvector = CVector(0,0,0); var_222_bool = 0; var_223_bool = 0; var_224_float = 0; var_225_cvector = CVector(0,0,0); var_226_float = 0; var_227_cvector = CVector(0,0,0); var_228_bool = 0; var_229_float = 0;
	func_469(var_227_cvector, var_228_bool, var_229_float);
	var_5_float = 0;
	var_254_bool = IsFuncExist(var_205_object, "@GetAttackDistance", (int)1);
	if(var_254_bool != 0) {
		@@var_205_object:GetAttackDistance(var_219_float);
		var_219_float = var_219_float + (int)50;
	} else {
							var_207_float = var_219_float;
	}
	var_257_bool = var_219_float >= (int)150;
	if(var_257_bool != 0) {
		var_219_float = 150;
	}
	var_3_int = false;
	var_0_bool = var_205_object;
	IsPlayerActor(var_0_bool, var_222_bool);
	var_258_bool = var_222_bool;
	if(var_258_bool != 0) {
		PlayGlobalMusic("attack");
		var_260_object = Obj();
		func_1951(var_260_object);
		SendPlayerEnemy(var_205_object, var_260_object);
	}
	var_261_bool = var_206_bool;
	if(var_261_bool != 0) {
		var_223_bool = 0;
	} else {
						var_223_bool = 1;

	}
	var_224_float = (float)300.0 + var_219_float;
	
Label_280:
	var_263_bool = 0;
	var_263_bool = 0;
	var_264_bool = 0; var_265_object = Obj();
	var_265_object = var_0_bool;
	func_1703(var_264_bool, var_265_object);
	if(var_264_bool != 0) {
		var_266_bool = var_3_int == 0; //@nz
		if(var_266_bool != 0) {
			var_263_bool = 1;
		}
	}
	if(var_263_bool != 0) {
		func_884(var_229_float);
		@@@var_0_bool:GetPFPosition(var_220_cvector);
		GetPFPosition(var_221_cvector);
		var_225_cvector = var_220_cvector - var_221_cvector;
		var_226_float = var_225_cvector | var_225_cvector;
		var_268_float = var_224_float * var_224_float;
		var_269_bool = var_226_float >= var_268_float;
		if(var_269_bool != 0) {
			var_270_bool = 0; var_271_object = Obj(); var_272_float = 0; var_273_float = 0; var_274_bool = 0; var_275_bool = 0;
			var_271_object = var_0_bool;
			var_219_float = var_272_float;
			TaskCall(3);
			func_924(var_278_bool, var_270_bool, var_271_object, var_272_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_353_bool = var_276_bool == 0; //@nz
			if(var_353_bool != 0) {
			} else {
				var_223_bool = 0;
		} else {
				var_359_float = var_207_float * var_207_float;
				var_360_bool = var_226_float >= var_359_float;
				if(var_360_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_227_cvector);
					CanReachByPF(var_228_bool, var_227_cvector);
					var_361_bool = var_228_bool == 0; //@nz
					if(var_361_bool != 0) {
						var_362_bool = 0; var_363_object = Obj(); var_364_float = 0; var_365_float = 0; var_366_bool = 0; var_367_bool = 0;
						var_363_object = var_0_bool;
						var_219_float = var_364_float;
						TaskCall(3);
						func_924(var_370_bool, var_362_bool, var_363_object, var_364_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_371_bool = var_368_bool == 0; //@nz
						if(var_371_bool != 0) {
							goto Label_452;
						}
						var_223_bool = 0;
						goto Label_280;
					}
					var_372_bool = var_223_bool == 0; //@nz
					if(var_372_bool != 0) {
						var_373_object = Obj();
						var_373_object = var_0_bool;
						func_1872(var_373_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_884(var_229_float);
						StopAsync();
						var_223_bool = 1;
						var_384_bool = 0; var_385_object = Obj();
						var_385_object = var_0_bool;
						func_1703(var_384_bool, var_385_object);
						var_386_bool = var_384_bool == 0; //@nz
						if(var_386_bool != 0) {
							goto Label_452;
						}
					}
					rand(var_229_float);
					var_387_bool = 0;
					var_389_bool = var_229_float < (float)0.19999998807907104;
					if(var_389_bool != 1) {
						var_390_bool = 0;
						func_841((bool)1, var_390_bool);
						if(var_390_bool != 1) {
							var_387_bool = 0;
						}
					}
					if(var_387_bool != 0) {
						Face(var_0_bool);
						func_889();
						PlayAnimation("all", "attack_stay");
						var_427_bool = 0; var_428_float = 0;
						var_207_float = var_428_float;
						func_709(var_229_float, var_427_bool, var_428_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_884(var_229_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_666_bool = 0;
						func_841(var_229_float, var_666_bool);
						var_667_bool = var_666_bool == 0; //@nz
						if(var_667_bool == 0) goto Label_442;
						var_668_bool = 0; var_669_object = Obj();
						var_669_object = var_0_bool;
						func_1703(var_668_bool, var_669_object);
						var_670_bool = var_668_bool == 0; //@nz
						if(var_670_bool != 0) {
							goto Label_452;
						}
						@@@var_0_bool:GetPFPosition(var_220_cvector);
						GetPFPosition(var_221_cvector);
						var_225_cvector = var_220_cvector - var_221_cvector;
						var_226_float = var_225_cvector | var_225_cvector;
						var_671_float = var_207_float * var_207_float;
						var_672_bool = var_226_float < var_671_float;
						if(var_672_bool == 0) goto Label_442;
						var_673_bool = 0; var_674_float = 0;
						var_207_float = var_674_float;
						func_543(var_228_bool, var_229_float, var_673_bool, var_674_float);
						var_675_bool = var_673_bool == 0; //@nz
						if(var_675_bool == 0) goto Label_442;
						goto Label_452;
				}
					var_676_bool = 0; var_677_float = 0;
					var_207_float = var_677_float;
					func_543(var_228_bool, var_229_float, var_676_bool, var_677_float);
					var_678_bool = var_676_bool == 0; //@nz
					if(var_678_bool != 0) {
						goto Label_452;
					}
					var_223_bool = 1;

				}
			Label_442:
				goto Label_451;
		}
		Label_451:
			goto Label_280;

		}
	}
Label_452:
	WaitForAnimEnd();
	var_354_int = var_3_int;
	if(var_354_int != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_357_bool = var_222_bool;
	if(var_357_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_752(var_0_bool, var_442_bool)
{
	var_443_cvector = CVector(0,0,0); var_444_cvector = CVector(0,0,0); var_445_cvector = CVector(0,0,0); var_446_float = 0; var_447_float = 0; var_448_cvector = CVector(0,0,0); var_449_cvector = CVector(0,0,0); var_450_cvector = CVector(0,0,0); var_451_float = 0; var_452_float = 0;
	var_453_bool = 0; var_454_object = Obj();
	var_454_object = var_0_bool;
	func_1703(var_453_bool, var_454_object);
	var_455_bool = var_453_bool == 0; //@nz
	if(var_455_bool != 0) {
		var_442_bool = 0;
		return 10;
	}
	var_456_bool = 0;
	func_841(var_452_float, var_456_bool);
	if(var_456_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_448_cvector);
		GetPFPosition(var_449_cvector);
		var_450_cvector = var_448_cvector - var_449_cvector;
		var_451_float = var_450_cvector | var_450_cvector;
		@@@var_0_bool:GetAttackDistance(var_452_float);
		var_452_float = var_452_float + (int)50;
		var_458_float = var_452_float * var_452_float;
		var_442_bool = var_451_float <= var_458_float;
		return 10;
	}
	var_442_bool = 0;
	return 10;
}


func_1790(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0);
	var_35_bool = 0;
	var_35_bool = 0;
	var_36_bool = 0;
	var_36_bool = 0;
	var_37_object = var_14_object;
	if(var_37_object != 0) {
		var_39_bool = var_15_int != (int)4;
		if(var_39_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_41_bool = var_15_int != (int)5;
		if(var_41_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
		var_44_cvector = CVector(0,0,0); var_45_object = Obj();
		var_14_object = var_45_object;
		func_1504(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1957(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		CreateVectorVector(var_27_object);
		var_28_int = 1;

	Label_1819:
		var_56_int = "hit" + var_28_int;
		GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector);
		var_57_bool = var_29_bool == 0; //@nz
		if(var_57_bool != 0) {
		} else {
			var_105_int = var_31_cvector | var_26_cvector;
			var_107_bool = var_105_int >= (float)0.7071067690849304;
			if(var_107_bool != 0) {
				@@var_27_object:add(var_30_cvector);
			}
			var_28_int = var_28_int + (int)1;
			goto Label_1819;
		}
		@@var_27_object:size(var_32_int);
		var_58_int = var_32_int;
		if(var_58_int != 0) {
			irand(var_33_int, var_32_int);
			@@var_27_object:get(var_34_cvector, var_33_int);
			var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
			var_14_object = var_59_object;
			var_15_int = var_60_int;
			var_16_float = var_61_float;
			var_34_cvector = var_62_cvector;
			var_63_cvector = -var_26_cvector;
			func_1858(var_61_float, var_62_cvector, var_63_cvector);
			return 18;
		}
		var_27_object = 0;
	}
	var_104_object = Obj();
	var_14_object = var_104_object;
	func_1746(var_104_object);
	return 18;
	
}


func_2313(var_30_int, var_31_string)
{
	var_32_int = 0; var_33_int = 0;
	GetInvItemByName(var_33_int, var_31_string);
	var_33_int = var_30_int;
	return 2;
}


func_780(var_440_bool)
{
	var_441_bool = 0;
	var_441_bool = 0;
	var_442_bool = 0;
	func_752(var_441_bool, var_442_bool);
	if(var_442_bool != 0) {
		var_459_bool = 0;
		func_796(var_440_bool, var_441_bool, var_459_bool);
		if(var_459_bool != 0) {
			var_441_bool = 1;
		}
	}
	if(var_441_bool != 0) {
		var_440_bool = 1;
		return 0;
	}
	var_440_bool = 0;
	return 0;
}


func_2318(var_140_cvector, var_141_cvector, var_142_cvector, var_143_float)
{
	var_144_cvector = CVector(0,0,0); var_145_float = 0; var_146_float = 0; var_147_float = 0; var_148_float = 0; var_149_float = 0; var_150_cvector = CVector(0,0,0); var_151_float = 0; var_152_float = 0; var_153_float = 0; var_154_float = 0; var_155_float = 0;
	var_150_cvector = var_142_cvector - var_141_cvector;
	var_151_float = 250000;
	var_156_float = GetByIndex(var_150_cvector, 1);
	var_158_float = var_156_float * (int)1000;
	var_159_float = var_143_float * var_143_float;
	var_152_float = var_158_float - var_159_float;
	var_153_float = var_150_cvector | var_150_cvector;
	var_160_float = 0; var_161_float = 0; var_162_float = 0; var_163_float = 0;
	var_151_float = var_161_float;
	var_152_float = var_162_float;
	var_153_float = var_163_float;
	func_1974(var_160_float, var_161_float, var_162_float, var_163_float);
	var_160_float = var_154_float;
	var_169_bool = var_154_float < (int)0;
	if(var_169_bool != 0) {
		var_155_float = 1;
	} else {
		var_174_float = 0; var_175_float = 0; var_176_float = 0; var_177_float = 0; var_178_float = 0;
		var_151_float = var_175_float;
		var_152_float = var_176_float;
		var_153_float = var_177_float;
		var_178_float = sqrt(var_154_float);
		func_1981(var_175_float, var_176_float, var_177_float, var_178_float);
		var_155_float = sqrt(var_174_float);
	}
	var_171_float = CVector(0.0, 500.0, 0.0) * var_155_float;
	var_172_float = var_171_float * var_155_float;
	var_173_int = var_150_cvector + var_172_float;
	var_140_cvector = var_173_int / var_155_float;
	return 12;
	
}


func_1301(var_54_bool)
{
	var_54_bool = 1;
	return 0;
}


func_1303()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_796(var_0_bool, var_4_bool, var_459_bool)
{
	var_460_object = Obj(); var_461_bool = 0; var_462_float = 0; var_463_cvector = CVector(0,0,0); var_464_cvector = CVector(0,0,0); var_465_object = Obj(); var_466_bool = 0; var_467_float = 0; var_468_cvector = CVector(0,0,0); var_469_cvector = CVector(0,0,0);
	GetScene(var_465_object);
	var_466_bool = 0;
	
Label_800:
	var_470_cvector = CVector(0,0,0); var_471_object = Obj();
	var_471_object = var_0_bool;
	func_1504(var_470_cvector, var_471_object);
	var_476_int = -var_470_cvector;
	FindDirLength(var_467_float, var_476_int, var_4_bool);
	var_477_bool = var_467_float < var_4_bool;
	if(var_477_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_468_cvector);
		GetPFPosition(var_469_cvector);
		WaitForAnimEnd();
		func_884(var_469_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_466_bool = 1;
		var_481_bool = 0;
		func_752(var_469_cvector, var_481_bool);
		var_482_bool = var_481_bool == 0; //@nz
		if(var_482_bool != 0) {
			goto Label_838;
		}
		goto Label_800;
	}
Label_838:
	var_466_bool = var_459_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1308(var_58_object)
{
	
Label_1309:
	var_59_bool = 0; var_60_object = Obj();
	var_58_object = var_60_object;
	TaskCall(0);
	func_0(var_54_object, var_58_object, var_59_bool, var_60_object);
	TaskReturn();
	Sleep((int)1);
	goto Label_1309;
}
EMIT "Return(); Pop(0)";


func_1320(var_12_object)
{
	func_2283();
	func_2259();
	var_75_bool = 0; var_76_object = Obj();
	var_12_object = var_76_object;
	func_1519(var_75_bool, var_76_object);
	if(var_75_bool != 0) {
		var_79_bool = 0; var_80_object = Obj(); var_81_float = 0;
		var_12_object = var_80_object;
		func_2022(var_79_bool, var_80_object, (float)0.019999999552965164);
	}
	var_117_object = Obj();
	var_12_object = var_117_object;
	func_1342(var_117_object);
	return 0;
}


func_2353(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj();
	GetScene(var_54_object);
	var_55_object = Obj();
	func_1951(var_55_object);
	@@var_54_object:RemoveStationaryActor(var_55_object);
	var_58_object = Obj();
	var_52_object = var_58_object;
	TaskCall(5);
	func_1308(var_58_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1342(var_117_object)
{
	EventDisable(0);
	var_118_object = Obj();
	var_117_object = var_118_object;
	func_1367(var_118_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1353:
	Hold();
	goto Label_1353;
}
EMIT "Return(); Pop(0)";


func_2369()
{
	return 0;
}


func_1858(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj();
	GetScene(var_23_object);
	AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	var_27_object = Obj();
	var_16_object = var_27_object;
	func_1746(var_27_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2371(var_13_bool)
{
	var_13_bool = 0;
	return 0;
}


func_841(var_0_bool, var_390_bool)
{
	var_391_bool = 0; var_392_bool = 0;
	var_395_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_395_bool != 0) {
		@@@var_0_bool:IsAttacking(var_392_bool);
		var_392_bool = var_390_bool;
		return 2;
	}
	var_390_bool = 0;
	return 2;
}


func_1872(var_373_object)
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


func_852(var_2_int, var_5_float)
{
	var_503_float = 0; var_504_int = 0; var_505_float = 0; var_506_int = 0;
	var_507_bool = var_2_int == 0; //@nz
	if(var_507_bool != 0) {
		return 4;
	}
	var_508_float = var_5_float;
	if(var_508_float != 0) {
		var_5_float = var_5_float + (int)-1;
		var_511_bool = var_5_float > (int)0;
		if(var_511_bool != 0) {
			return 4;
		}
	}
	rand(var_505_float);
	var_512_float = 0;
	func_898(var_512_float);
	var_513_bool = var_505_float < var_512_float;
	if(var_513_bool != 0) {
		irand(var_506_int, var_2_int);
		var_506_int = var_506_int + (int)1;
		var_516_int = "attack" + var_506_int;
		Speak(var_516_int);
		var_517_int = 0;
		func_896(var_517_int);
		var_5_float = var_517_int;
	}
	return 4;
}


func_1367(var_118_object)
{
	var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_string = ""; var_124_object = Obj(); var_125_bool = 0; var_126_bool = 0; var_127_float = 0; var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0); var_133_string = ""; var_134_object = Obj(); var_135_bool = 0; var_136_bool = 0; var_137_float = 0; var_138_cvector = CVector(0,0,0);
	var_139_bool = var_118_object == 0; //@ne
	if(var_139_bool != 0) {
		var_140_string = "";
		func_1458("fdie");
	} else {
		@@var_118_object:GetPosition(var_129_cvector);
		GetPosition(var_130_cvector);
		GetDirection(var_131_cvector);
		var_132_cvector = var_130_cvector - var_129_cvector;
		var_172_float = GetByIndex(var_132_cvector, 0);
		var_173_float = GetByIndex(var_131_cvector, 0);
		var_174_float = var_172_float * var_173_float;
		var_175_float = GetByIndex(var_132_cvector, 2);
		var_176_float = GetByIndex(var_131_cvector, 2);
		var_177_float = var_175_float * var_176_float;
		var_178_int = var_174_float + var_177_float;
		var_180_bool = var_178_int >= (int)0;
		if(var_180_bool != 0) {
			var_133_string = "fdie";
		} else {
				var_133_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_118_object = var_134_object;
		var_183_bool = IsFuncExist(var_118_object, "GetScriptProperty", (int)2);
		if(var_183_bool != 0) {
			@@var_118_object:HasScriptProperty(var_135_bool, "Owner");
			var_185_bool = var_135_bool;
			if(var_185_bool != 0) {
				@@var_118_object:GetScriptProperty(var_134_object, "Owner");
				var_187_bool = var_134_object == 0; //@ne
				if(var_187_bool != 0) {
					var_118_object = var_134_object;
				}
			}
		}
		var_190_bool = IsFuncExist(var_134_object, "@GetEyesHeight", (int)1);
		if(var_190_bool != 0) {
			@@var_134_object:GetEyesHeight(var_137_float);
			var_138_cvector = CVector(0.0, 0.0, 0.0);
			var_191_float = GetByIndex(var_138_cvector, 1);
			var_137_float = var_191_float;
			SetByIndex(var_138_cvector, 1) = var_191_float;
			LookAsync(var_118_object, "head", var_138_cvector);
			var_136_bool = 1;
		} else {
			var_136_bool = 0;

		}
		var_193_string = "";
		var_133_string = var_193_string;
		func_1910(var_193_string);
		PlayAnimation("all", var_133_string);
		WaitForAnimEnd();
		var_195_bool = var_136_bool;
		if(var_195_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_133_string);
		RemoveEnvelope();
		var_134_object = 0;
	}
	return 20;
	
}


func_1883(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0;
	IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
	return 2;
}


func_1888(var_287_object)
{
	var_288_float = 0; var_289_cvector = CVector(0,0,0); var_290_float = 0; var_291_cvector = CVector(0,0,0);
	@@var_287_object:GetEyesHeight(var_290_float);
	var_291_cvector = CVector(0.0, 0.0, 0.0);
	var_292_float = GetByIndex(var_291_cvector, 1);
	var_290_float = var_292_float;
	SetByIndex(var_291_cvector, 1) = var_292_float;
	LookAsync(var_287_object, "head", var_291_cvector);
	return 4;
}


func_1899(var_37_string, var_38_int, var_39_int)
{
	var_40_bool = 0; var_41_bool = 0;
	var_42_bool = 0; var_43_int = 0; var_44_int = 0;
	var_38_int = var_43_int;
	var_39_int = var_44_int;
	func_2017(var_42_bool, var_43_int, var_44_int);
	if(var_42_bool != 0) {
		AddItem(var_41_bool, var_37_string, (int)0);
	}
	return 2;
}


func_884(var_0_bool)
{
	var_267_object = Obj();
	var_267_object = var_0_bool;
	func_2084(var_267_object);
	return 0;
}


func_1910(var_141_string)
{
	var_142_bool = 0; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_bool = 0; var_147_float = 0; var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_bool = 0; var_151_int = 0; var_152_bool = 0; var_153_int = 0; var_154_bool = 0; var_155_float = 0; var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0);
	IsExisting3DSound(var_150_bool, var_141_string);
	var_158_bool = var_150_bool == 0; //@nz
	if(var_158_bool != 0) {
		var_151_int = 0;

	Label_1916:
		var_160_int = var_151_int + (int)1;
		var_161_int = var_141_string + var_160_int;
		IsExisting3DSound(var_152_bool, var_161_int);
		var_162_bool = var_152_bool == 0; //@nz
		if(var_162_bool != 0) {
		} else {
			var_151_int = var_151_int + (int)1;
			goto Label_1916;
		}
		var_163_bool = var_151_int == 0; //@nz
		if(var_163_bool != 0) {
			return 16;
		}
		irand(var_153_int, var_151_int);
		var_165_int = var_153_int + (int)1;
		var_141_string = var_141_string + var_165_int;
	}
	Is3DSoundLoaded(var_154_bool, var_141_string);
	var_166_bool = var_154_bool;
	if(var_166_bool != 0) {
		GetEyesHeight(var_155_float);
		GetDirection(var_156_cvector);
		var_157_cvector = var_156_cvector * (int)50;
		var_168_float = GetByIndex(var_157_cvector, 1);
		var_168_float = var_168_float + var_155_float;
		SetByIndex(var_157_cvector, 1) = var_168_float;
		PlayGlobalSound(var_141_string, var_157_cvector);
	}
	return 16;
	
}


func_889()
{
	var_396_string = "";
	func_1910("attack_stay");
	return 0;
}


func_894(var_646_bool)
{
	var_646_bool = 1;
	return 0;
}


func_896(var_517_int)
{
	var_517_int = 1;
	return 0;
}


func_898(var_512_float)
{
	var_512_float = 0.5;
	return 0;
}


func_924(var_2_int, var_270_bool, var_271_object, var_272_float, var_273_float, var_274_bool, var_275_bool)
{
	var_279_bool = 0; var_280_bool = 0; var_281_bool = 0; var_282_bool = 0;
	var_283_object = Obj();
	var_271_object = var_283_object;
	func_2084(var_283_object);
	SetTimer((int)1, (int)5);
	CanSee(var_281_bool, var_271_object);
	var_286_bool = var_281_bool;
	if(var_286_bool != 0) {
		var_2_int = true;
		var_287_object = Obj();
		var_271_object = var_287_object;
		func_1888(var_287_object);
	} else {
		var_2_int = false;
	}
	var_294_bool = 0; var_295_object = Obj();
	var_271_object = var_295_object;
	func_1519(var_294_bool, var_295_object);
	if(var_294_bool != 0) {
		var_298_object = Obj();
		func_1951(var_298_object);
		SendPlayerEnemy(var_271_object, var_298_object);
	}
	var_299_bool = 0; var_300_object = Obj(); var_301_float = 0; var_302_float = 0; var_303_bool = 0; var_304_bool = 0;
	var_271_object = var_300_object;
	var_272_float = var_301_float;
	var_273_float = var_302_float;
	var_274_bool = var_303_bool;
	var_275_bool = var_304_bool;
	func_1029(var_281_bool, var_282_bool, var_299_bool, var_300_object, var_301_float, var_302_float, var_303_bool, var_304_bool);
	var_299_bool = var_282_bool;
	var_350_int = var_2_int;
	if(var_350_int != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_282_bool = var_270_bool;
	return 4;
	
}


func_1951(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj();
	self(var_57_object);
	var_57_object = var_55_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1957(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0;
	var_52_int = var_43_cvector | var_43_cvector;
	var_51_float = sqrt(var_52_int);
	var_53_float = 9.999999974752427e-07;
	var_54_bool = var_51_float < var_53_float;
	if(var_54_bool != 0) {
		var_42_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_42_cvector = var_43_cvector / var_51_float;
	return 2;
}


func_1967(var_573_float, var_574_float, var_575_float)
{
	var_578_bool = var_574_float < var_575_float;
	if(var_578_bool != 0) {
		var_574_float = var_573_float;
	} else {
		var_575_float = var_573_float;
	}
	return 0;
	
}


func_1458(var_140_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_141_string = "";
	var_140_string = var_141_string;
	func_1910(var_141_string);
	PlayAnimation("all", var_140_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_140_string);
	RemoveEnvelope();
	return 0;
}


func_1974(var_160_float, var_161_float, var_162_float, var_163_float)
{
	var_164_float = var_162_float * var_162_float;
	var_166_float = (int)4 * var_161_float;
	var_167_float = var_166_float * var_163_float;
	var_160_float = var_164_float - var_167_float;
	return 0;
}


func_1981(var_174_float, var_175_float, var_176_float, var_178_float)
{
	var_179_float = 0; var_180_float = 0;
	var_181_int = -var_176_float;
	var_182_int = var_181_int - var_178_float;
	var_184_float = (int)2 * var_175_float;
	var_180_float = var_182_int / var_184_float;
	var_186_bool = var_180_float > (int)0;
	if(var_186_bool != 0) {
		var_180_float = var_174_float;
		return 2;
	}
	var_187_int = -var_176_float;
	var_188_int = var_187_int + var_178_float;
	var_190_float = (int)2 * var_175_float;
	var_174_float = var_188_int / var_190_float;
	return 2;
}


func_1998(var_108_float, var_109_float, var_110_float, var_111_float)
{
	var_112_bool = var_109_float < var_110_float;
	if(var_112_bool != 0) {
		var_110_float = var_108_float;
		return 0;
	}
	var_113_bool = var_109_float > var_111_float;
	if(var_113_bool != 0) {
		var_111_float = var_108_float;
		return 0;
	}
	var_109_float = var_108_float;
	return 0;
}


func_1490(var_563_string, var_564_int)
{
	var_566_bool = var_564_int == (int)2;
	if(var_566_bool != 0) {
		var_563_string = "fire";
		return 0;
	EMIT "GOTO 0x5de";
	}
	var_568_bool = var_564_int == (int)1;
	if(var_568_bool != 0) {
		var_563_string = "bullet";
		return 0;
	}
	var_563_string = "phys";
	return 0;
}


func_469(var_1_object, var_2_int, var_4_bool)
{
	var_230_bool = 0; var_231_bool = 0; var_232_cvector = CVector(0,0,0); var_233_bool = 0; var_234_bool = 0; var_235_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_471:
	var_239_int = var_1_object + (int)1;
	var_240_int = "attack_begin" + var_239_int;
	HasAnimation(var_233_bool, "all", var_240_int);
	var_241_bool = var_233_bool == 0; //@nz
	if(var_241_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_471;
	}
	var_2_int = 0;
	
Label_485:
	var_244_int = var_2_int + (int)1;
	var_245_int = "attack" + var_244_int;
	IsExisting3DSound(var_234_bool, var_245_int);
	var_246_bool = var_234_bool == 0; //@nz
	if(var_246_bool != 0) {
	} else {
		var_2_int = var_2_int + (int)1;
		goto Label_485;

	}
	GetAnimationOffset(var_235_cvector, "all", "bjump");
	var_249_float = GetByIndex(var_235_cvector, 2);
	var_4_bool = -var_249_float;
	return 6;
	
}


func_2009(var_74_bool, var_75_float, var_76_float, var_77_float)
{
	var_74_bool = 0;
	var_78_bool = var_75_float >= var_76_float;
	if(var_78_bool != 0) {
		var_79_bool = var_75_float <= var_77_float;
		if(var_79_bool != 0) {
			var_74_bool = 1;
		}
	}
	return 0;
}


func_987(var_2_int)
{
	KillTimer((int)1);
	var_12_int = var_2_int;
	if(var_12_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_1153(var_10_object);
	return 0;
}


func_1504(var_44_cvector, var_45_object)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_48_cvector);
	@@var_45_object:GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
	return 4;
}


func_2017(var_42_bool, var_43_int, var_44_int)
{
	var_45_int = 0; var_46_int = 0;
	irand(var_46_int, var_44_int);
	var_42_bool = var_46_int < var_43_int;
	return 2;
}


func_2022(var_79_bool, var_80_object, var_81_float)
{
	var_82_bool = var_80_object == 0; //@nz
	if(var_82_bool != 0) {
		var_79_bool = 0;
		return 0;
	}
	var_84_bool = var_81_float > (int)0;
	if(var_84_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_115_bool = var_81_float < (int)0;
		if(var_115_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2043;
		}
		var_79_bool = 0;
		return 0;
	}
Label_2043:
	var_86_float = 0;
	var_81_float = var_86_float;
	func_2074(var_86_float);
	var_90_bool = 0; var_91_object = Obj(); var_92_string = ""; var_93_float = 0; var_94_float = 0; var_95_float = 0;
	var_80_object = var_91_object;
	var_81_float = var_93_float;
	func_1536(var_90_bool, var_91_object, "reputation", var_93_float, (float)0, (float)1);
	var_79_bool = 1;
	return 0;
	
}


func_1511(var_66_float, var_67_object)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	GetPosition(var_71_cvector);
	@@var_67_object:GetPosition(var_72_cvector);
	var_73_cvector = var_72_cvector - var_71_cvector;
	var_66_float = var_73_cvector | var_73_cvector;
	return 6;
}


func_1519(var_75_bool, var_76_object)
{
	var_77_bool = 0; var_78_bool = 0;
	IsPlayerActor(var_76_object, var_78_bool);
	var_78_bool = var_75_bool;
	return 2;
}


func_1524(var_98_bool, var_99_object, var_100_string)
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


func_504(var_0_bool, var_521_float, var_522_int)
{
	var_523_object = Obj(); var_524_float = 0; var_525_float = 0; var_526_object = Obj(); var_527_float = 0; var_528_float = 0;
	var_530_float = var_521_float * (float)0.8999999761581421;
	GetVictim(var_530_float, var_526_object);
	ReportAttack(var_0_bool);
	var_531_bool = var_526_object == var_0_bool;
	if(var_531_bool != 0) {
		var_532_float = 0; var_533_object = Obj(); var_534_int = 0;
		var_526_object = var_533_object;
		var_522_int = var_534_int;
		func_191(var_534_int);
		var_532_float = var_527_float;
		var_535_float = 0; var_536_object = Obj(); var_537_float = 0; var_538_int = 0;
		var_526_object = var_536_object;
		var_527_float = var_537_float;
		var_539_int = 0; var_540_object = Obj(); var_541_int = 0;
		var_526_object = var_540_object;
		var_522_int = var_541_int;
		func_194(var_541_int);
		var_539_int = var_538_int;
		func_1558(var_535_float, var_536_object, var_537_float, var_538_int);
		var_535_float = var_528_float;
		var_600_int = 0;
		func_197(var_600_int);
		ReportHit(var_0_bool, var_600_int, var_528_float, var_527_float);
		var_601_object = Obj(); var_602_float = 0;
		var_526_object = var_601_object;
		var_528_float = var_602_float;
		func_199(var_601_object, var_602_float);
	}
	return 6;
}
EMIT "Stack[-3] = 0";


