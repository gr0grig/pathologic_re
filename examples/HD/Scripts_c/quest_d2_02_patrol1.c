// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,FindActor/2,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,SetRTEnvelope/2,Hold/0,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,FollowPath/3,Rotate/3,WaitForAnimEnd/1,StopGroup0/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,GetGameTime/1,BroadcastMessage/3,WorkWithCorpse/1,Barter/1,CreateInvItem/1,AddItem/4,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:kill_player|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:voice_common|W:c|W:m|W:Can't find lsh animation : |W:reputation|W:battle|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:quest_d2_02|W:player_attack|W:patrol1_unload|W:revolver_ammo|W:alpha_pills|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png
// @GLOBALS: 0:bool:,1:object:
// @RUN_OP: 0x510
// @RUN_TASK: 5
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object,int,int,bool,float,int params=0
// @TASK_3: vars=bool,object,bool params=6
// @EVENT_7: op=0x3a7 vars=int
// @EVENT_1: op=0x3c2 vars=object
// @EVENT_2: op=0x3d1 vars=object
// @EVENT_10: op=0x457 vars=object
// @EVENT_41: op=0x462 vars=object
// @TASK_4: vars= params=1
// @EVENT_0: op=0x483 vars=object
// @EVENT_22: op=0x502 vars=object,int,float,float
// @EVENT_16: op=0x504 vars=object,string
// @EVENT_41: op=0x506 vars=object
// @TASK_5: vars=cvector,cvector params=0
// @EVENT_0: op=0x518 vars=object
// @EVENT_26: op=0x525 vars=string
// @STANDALONE_EVENT_17: op=0x8fe vars=object
// @STANDALONE_EVENT_6: op=0x90f vars=
// @STANDALONE_EVENT_22: op=0x934 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x93c vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x946 vars=object,string
// @STANDALONE_EVENT_41: op=0x953 vars=object
// @PE: 0x51,0x8b,0xa1,0xda,0xdd,0x36e,0x3a7,0x3c2,0x3d1,0x445,0x457,0x462,0x46b,0x476,0x4e8,0x502,0x504,0x506,0x508,0x518,0x525,0x58b,0x838,0x83f,0x84a,0x8c8,0x934,0x93c,0x953

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_cvector, var_17_cvector)
{
	if((int)1 != 0) {
		func_2036();
		var_21_bool = var_16_cvector == (int)8308;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_139(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507526);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507527, (int)-1, (int)8309);
			@@@var_0_object:AddReply((int)533979, (int)-1, (int)35550);
			return 0;
		}
		var_3_string = true;
		var_46_bool = 0;
		func_2401(var_46_bool);
		if(var_46_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2";
	
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_int, var_15_cvector, var_16_cvector)
{
	var_18_bool = var_16_cvector == (int)1;
	if(var_18_bool != 0) {
		var_19_object = Obj();
		var_19_object = var_1_object;
		func_2205(var_19_object);
	} else {
		var_24_int = 0;
		var_16_cvector = var_24_int;
		func_1093(var_15_cvector, var_16_cvector, var_24_int);
	}
	return 0;
	
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_bool = var_1_object == var_16_cvector;
	if(var_18_bool != 0) {
		var_19_bool = var_2_object == 0; //@nz
		if(var_19_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_2_object = true;
		var_20_object = Obj();
		var_16_cvector = var_20_object;
		func_2010(var_20_object);
	}
	return 0;
}


task_3_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_bool = var_1_object == var_16_cvector;
	if(var_18_bool != 0) {
		var_19_object = var_2_object;
		if(var_19_object != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	RequestClearPath(var_16_cvector);
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	func_949(var_16_cvector);
	var_16_cvector = Obj();
	func_2387();
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	var_17_bool = 0; var_18_bool = 0;
	IsOverrideActive(var_18_bool);
	var_19_bool = var_18_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_object = Obj();
		var_16_cvector = var_20_object;
		func_2248(var_20_object);
	}
	return 2;
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float, var_18_cvector, var_19_cvector)
{
	return 0;
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_string, var_16_cvector, var_17_cvector)
{
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	return 0;
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object)
{
	var_17_bool = 0;
	func_1327(var_17_bool);
	if(var_17_bool != 0) {
		func_1413();
		var_18_object = Obj();
		var_16_object = var_18_object;
		func_1288(var_18_object);
	}
	return 0;
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_string)
{
	var_18_bool = var_16_string == "kill_player";
	if(var_18_bool != 0) {
		TaskCall(2);
		func_203();
		TaskReturn();
	}
	return 0;
}


event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0;
	var_19_bool = GlobalVars[0];
	if(var_19_bool != 0) {
		return 2;
	}
	IsPlayerActor(var_16_object, var_18_bool);
	var_20_bool = var_18_bool;
	if(var_20_bool != 0) {
		var_21_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		var_22_bool = 0; var_23_string = ""; var_24_string = "";
		func_2184(var_22_bool, "quest_d2_02", "player_attack");
	}
	return 2;
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector)
{
	var_16_bool = 0; var_17_string = ""; var_18_string = "";
	func_2184(var_16_bool, "quest_d2_02", "patrol1_unload");
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0;
	var_16_object = var_20_object;
	var_17_int = var_21_int;
	var_18_float = var_22_float;
	func_1661(var_20_object, var_21_int, var_22_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	var_16_object = var_22_object;
	var_17_int = var_23_int;
	var_18_float = var_24_float;
	var_20_cvector = var_25_cvector;
	var_21_cvector = var_26_cvector;
	func_1729(var_24_float, var_25_cvector, var_26_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object, var_17_string)
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


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object)
{
	var_17_object = Obj();
	var_16_object = var_17_object;
	func_2325(var_17_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector)
{
	var_16_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	func_1329(var_14_cvector, var_15_cvector);
	return 0;
}


func_0(var_0_object, var_19_int, var_20_object)
{
	var_22_object = Obj(); var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_0_object = var_20_object;
	var_30_bool = 0; var_31_object = Obj(); var_32_float = 0;
	var_20_object = var_31_object;
	func_1754(var_30_bool, var_31_object, (float)70.0);
	var_77_bool = var_30_bool == 0; //@nz
	if(var_77_bool != 0) {
		var_19_int = -2;
		return 8;
	}
	CreateDialog(var_26_object);
	var_78_int = 0;
	func_2395(var_78_int);
	@@var_26_object:SetNPCName(var_78_int);
	var_79_int = 0;
	func_2393(var_79_int);
	@@var_26_object:SetNPCDescription(var_79_int);
	var_80_string = "";
	func_2397(var_80_string);
	@@var_26_object:SetPhoto(var_80_string);
	var_81_string = "";
	func_2399(var_81_string);
	@@var_26_object:SetPhoto2(var_81_string);
	var_82_int = 0;
	func_2225(var_82_int);
	@@var_26_object:SetPlayerName(var_82_int);
	IsOverrideActive(var_27_bool);
	var_90_bool = var_27_bool;
	if(var_90_bool != 0) {
		var_19_int = -2;
		return 8;
	}
	DoDialog(var_26_object);
	var_91_bool = 0; var_92_object = Obj();
	func_2084(Obj());
	var_93_object = var_92_object;
	func_1841(var_91_bool, var_92_object);
	var_186_object = Obj(); var_187_object = Obj();
	var_20_object = var_186_object;
	var_26_object = var_187_object;
	TaskCall(1);
	func_81(var_188_object, var_189_object, var_190_string, var_191_bool, var_186_object, var_187_object);
	TaskReturn();
	@@var_26_object:IsDialogEnd(var_29_bool);
	
Label_63:
	var_235_bool = var_29_bool == 0; //@nz
	if(var_235_bool != 0) {
		sync();
		@@var_26_object:IsDialogEnd(var_29_bool);
		goto Label_63;
	}
	var_20_object = Obj();
	func_1823();
	StopDialog(var_26_object);
	@@var_26_object:GetReturnValue((int)-1);
	var_28_int = var_19_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1288(var_18_object)
{
	var_19_int = 0; var_20_object = Obj();
	var_18_object = var_20_object;
	TaskCall(0);
	func_0(var_21_object, var_19_int, var_20_object);
	TaskReturn();
	return 0;
}


func_778(var_0_object, var_4_bool, var_321_bool)
{
	var_322_object = Obj(); var_323_bool = 0; var_324_float = 0; var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_object = Obj(); var_328_bool = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0);
	GetScene(var_327_object);
	var_328_bool = 0;
	
Label_782:
	var_332_cvector = CVector(0,0,0); var_333_object = Obj();
	var_333_object = var_0_object;
	func_1433(var_332_cvector, var_333_object);
	var_338_int = -var_332_cvector;
	FindDirLength(var_329_float, var_338_int, var_4_bool);
	var_339_bool = var_329_float < var_4_bool;
	if(var_339_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_330_cvector);
		GetPFPosition(var_331_cvector);
		WaitForAnimEnd();
		func_866(var_331_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_328_bool = 1;
		var_343_bool = 0;
		func_734(var_331_cvector, var_343_bool);
		var_344_bool = var_343_bool == 0; //@nz
		if(var_344_bool != 0) {
			goto Label_820;
		}
		goto Label_782;
	}
Label_820:
	var_328_bool = var_321_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_527(var_0_object, var_1_object, var_350_bool, var_351_float)
{
	var_352_int = 0; var_353_bool = 0; var_354_int = 0; var_355_string = ""; var_356_int = 0; var_357_bool = 0; var_358_int = 0; var_359_string = "";
	func_866(var_359_string);
	irand(var_356_int, var_1_object);
	var_356_int = var_356_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2214();
	var_368_int = "attack_begin" + var_356_int;
	PlayAnimation("all", var_368_int);
	WaitForAnimEnd();
	func_834(var_358_int, var_359_string);
	var_384_bool = 0; var_385_object = Obj();
	var_385_object = var_0_object;
	func_1593(var_384_bool, var_385_object);
	var_386_bool = var_384_bool == 0; //@nz
	if(var_386_bool != 0) {
		StopAsync();
		var_350_bool = 0;
		return 8;
	}
	var_387_float = 0; var_388_int = 0;
	var_351_float = var_387_float;
	var_356_int = var_388_int;
	func_488(var_359_string, var_387_float, var_388_int);
	var_471_int = "attack_middle" + var_356_int;
	HasAnimation(var_357_bool, "all", var_471_int);
	var_472_bool = var_357_bool;
	if(var_472_bool != 0) {
		func_2214();
		var_475_int = "attack_middle" + var_356_int;
		PlayAnimation("all", var_475_int);
		WaitForAnimEnd();
		func_866(var_359_string);
		var_476_bool = 0; var_477_object = Obj();
		var_477_object = var_0_object;
		func_1593(var_476_bool, var_477_object);
		var_478_bool = var_476_bool == 0; //@nz
		if(var_478_bool != 0) {
			StopAsync();
			var_350_bool = 0;
			return 8;
		}
		var_479_float = 0; var_480_int = 0;
		var_351_float = var_479_float;
		var_356_int = var_480_int;
		func_488(var_359_string, var_479_float, var_480_int);
		var_358_int = 1;

	Label_604:
		var_482_int = "attack_middle" + var_356_int;
		var_484_int = var_482_int + "_";
		var_359_string = var_484_int + var_358_int;
		HasAnimation(var_357_bool, "all", var_359_string);
		var_486_bool = var_357_bool == 0; //@nz
		if(var_486_bool != 0) {
		} else {
			func_2214();
			PlayAnimation("all", var_359_string);
			WaitForAnimEnd();
			func_866(var_359_string);
			var_502_bool = 0; var_503_object = Obj();
			var_503_object = var_0_object;
			func_1593(var_502_bool, var_503_object);
			var_504_bool = var_502_bool == 0; //@nz
			if(var_504_bool != 0) {
				StopAsync();
				var_350_bool = 0;
				var_505_float = 0; var_506_int = 0;
				var_351_float = var_505_float;
				var_356_int = var_506_int;
				func_488(var_359_string, var_505_float, var_506_int);
				var_358_int = var_358_int + (int)1;
				goto Label_604;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_490_int = "attack_end" + var_356_int;
	PlayAnimation("all", var_490_int);
	var_491_bool = 0;
	func_880(var_491_bool);
	if(var_491_bool != 0) {
		var_492_bool = 0; var_493_float = 0;
		func_664(var_492_bool, (float)0.75);
		StopAsync();
	}
	var_350_bool = 1;
	return 8;
	
}


func_1552(var_105_bool, var_106_object)
{
	var_107_bool = 0; var_108_bool = 0;
	@@var_106_object:IsDead(var_108_bool);
	var_108_bool = var_105_bool;
	return 2;
}


func_1557(var_94_bool, var_95_object)
{
	var_96_object = Obj(); var_97_object = Obj(); var_98_object = Obj(); var_99_object = Obj();
	var_100_bool = var_95_object == 0; //@ne
	if(var_100_bool != 0) {
		var_94_bool = 0;
		return 4;
	}
	var_101_bool = 0;
	var_101_bool = 0;
	var_104_bool = IsFuncExist(var_95_object, "IsDead", (int)1);
	if(var_104_bool != 0) {
		var_105_bool = 0; var_106_object = Obj();
		var_95_object = var_106_object;
		func_1552(var_105_bool, var_106_object);
		if(var_105_bool != 0) {
			var_101_bool = 1;
		}
	}
	if(var_101_bool != 0) {
		var_94_bool = 0;
		return 4;
	}
	GetScene(var_98_object);
	var_109_bool = var_98_object == 0; //@ne
	if(var_109_bool != 0) {
		var_94_bool = 0;
		return 4;
	}
	@@var_95_object:GetScene(var_99_object);
	var_110_bool = var_98_object != var_99_object;
	if(var_110_bool != 0) {
		var_94_bool = 0;
		return 4;
	}
	var_94_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2325(var_17_object)
{
	var_18_bool = 0; var_19_bool = 0;
	AddItem(var_19_bool, "revolver_ammo", (int)0, (int)2);
	AddItem(var_19_bool, "alpha_pills", (int)0, (int)2);
	var_26_bool = 0; var_27_object = Obj();
	var_17_object = var_27_object;
	func_1440(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		var_30_bool = 0; var_31_object = Obj(); var_32_float = 0;
		var_17_object = var_31_object;
		func_2122(var_30_bool, var_31_object, (float)-0.15000000596046448);
	}
	func_2278();
	var_88_object = Obj();
	var_17_object = var_88_object;
	TaskCall(4);
	func_1142(var_88_object);
	TaskReturn();
	return 2;
}


func_1303()
{
	return 0;
}


func_1823()
{
	var_237_bool = 0; var_238_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_240_bool = 0;
	func_2401(var_240_bool);
	if(var_240_bool != 0) {
	} else {
		HasAnimationTrack(var_238_bool, "head");
		var_242_bool = var_238_bool;
		if(var_242_bool == 0) goto Label_1840;
		UnlookAsync("head");
	}
Label_1840:
	return 2;
	
}


func_2084(var_84_object)
{
	var_85_object = Obj(); var_86_object = Obj();
	self(var_86_object);
	var_86_object = var_84_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2090(var_48_cvector, var_49_cvector)
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


func_1327(var_17_bool)
{
	var_17_bool = 1;
	return 0;
}


func_1841(var_91_bool, var_92_object)
{
	var_96_int = 0; var_97_int = 0; var_98_int = 0; var_99_int = 0;
	GetVariable("voice_common", var_98_int);
	var_101_int = var_98_int;
	if(var_101_int != 0) {
		var_102_bool = 0; var_103_object = Obj();
		var_92_object = var_103_object;
		func_1899(var_102_bool, var_103_object);
		var_132_bool = var_102_bool == 0; //@nz
		if(var_132_bool != 0) {
			var_133_bool = 0; var_134_object = Obj();
			var_92_object = var_134_object;
			func_1936(var_133_bool, var_134_object);
			var_168_bool = var_133_bool == 0; //@nz
			if(var_168_bool != 0) {
				var_91_bool = 0;
				return 4;
			}
		}
		irand(var_99_int, (int)2);
		var_170_int = var_99_int;
		if(var_170_int != 0) {
			var_173_int = var_98_int + (int)1;
			var_175_int = var_173_int % (int)3;
			SetVariable("voice_common", var_175_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_178_bool = 0; var_179_object = Obj();
		var_92_object = var_179_object;
		func_1936(var_178_bool, var_179_object);
		var_180_bool = var_178_bool == 0; //@nz
		if(var_180_bool != 0) {
			var_181_bool = 0; var_182_object = Obj();
			var_92_object = var_182_object;
			func_1899(var_181_bool, var_182_object);
			var_183_bool = var_181_bool == 0; //@nz
			if(var_183_bool != 0) {
				var_91_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1897;
	
Label_1897:
	var_91_bool = 1;
	return 4;
	
}


func_1329(var_0_object, var_1_object)
{
	var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_1334:
	func_1418();
	irand(var_21_int, (int)10);
	var_27_int = var_21_int + (int)5;
	Sleep(var_27_int, var_22_bool);
	var_28_bool = var_22_bool;
	if(var_28_bool != 0) {
		func_1303();
	} else {
		func_1418();
		GetPFPosition(var_23_cvector);
		var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0);
		var_30_cvector = var_1_object;
		var_23_cvector = var_31_cvector;
		func_2100(var_29_float, var_30_cvector, var_31_cvector);
		var_35_bool = var_29_float > (int)40000;
		if(var_35_bool != 0) {
			FindPathTo(var_24_object, var_1_object);
			var_36_bool = var_24_object != 0; //@nn
			if(var_36_bool != 0) {
				RotatePath(var_24_object, var_22_bool);
				var_37_bool = var_22_bool == 0; //@nz
				if(var_37_bool != 0) {
				} else {
					FollowPath(var_24_object, (bool)0, var_22_bool);
					var_39_bool = var_22_bool == 0; //@nz
					if(var_39_bool != 0) {
						goto Label_1410;
					}
					var_40_float = GetByIndex(var_0_object, 0);
					var_41_float = GetByIndex(var_0_object, 2);
					Rotate(var_40_float, var_41_float, var_22_bool);
					var_42_bool = var_22_bool == 0; //@nz
					if(var_42_bool != 0) {
						goto Label_1410;
					}
					WaitForAnimEnd(var_22_bool);
					var_43_bool = var_22_bool == 0; //@nz
					if(var_43_bool != 0) {
						goto Label_1410;
					}
					goto Label_1411;
				EMIT "GOTO 0x573";
			}
				Sleep((int)1);
				var_24_object = 0;
				goto Label_1410;
		}
			var_45_float = GetByIndex(var_0_object, 0);
			var_46_float = GetByIndex(var_0_object, 2);
			Rotate(var_45_float, var_46_float, var_22_bool);
			var_47_bool = var_22_bool == 0; //@nz
			if(var_47_bool != 0) {
				goto Label_1410;
			}
			WaitForAnimEnd(var_22_bool);
			var_48_bool = var_22_bool == 0; //@nz
			if(var_48_bool != 0) {
				goto Label_1410;
			}
			goto Label_1411;
		}
	Label_1410:
		goto Label_1350;
	}
Label_1411:
	goto Label_1334;
	
}
EMIT "Return(); Pop(8)";


func_2100(var_29_float, var_30_cvector, var_31_cvector)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	var_33_cvector = var_31_cvector - var_30_cvector;
	var_29_float = var_33_cvector | var_33_cvector;
	return 2;
}


func_823(var_0_object, var_252_bool)
{
	var_253_bool = 0; var_254_bool = 0;
	var_257_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_257_bool != 0) {
		@@@var_0_object:IsAttacking(var_254_bool);
		var_254_bool = var_252_bool;
		return 2;
	}
	var_252_bool = 0;
	return 2;
}


func_2104(var_439_float, var_440_float, var_441_float)
{
	var_444_bool = var_440_float < var_441_float;
	if(var_444_bool != 0) {
		var_440_float = var_439_float;
	} else {
		var_441_float = var_439_float;
	}
	return 0;
	
}


func_1593(var_90_bool, var_91_object)
{
	var_92_int = 0; var_93_int = 0;
	var_94_bool = 0; var_95_object = Obj();
	var_91_object = var_95_object;
	func_1557(var_94_bool, var_95_object);
	var_111_bool = var_94_bool == 0; //@nz
	if(var_111_bool != 0) {
		var_90_bool = 0;
		return 2;
	}
	var_112_bool = 0; var_113_object = Obj(); var_114_string = "";
	var_91_object = var_113_object;
	func_1445(var_112_bool, var_113_object, "noaccess");
	var_121_bool = var_112_bool == 0; //@nz
	if(var_121_bool != 0) {
		var_90_bool = 1;
		return 2;
	}
	@@var_91_object:GetProperty("noaccess", var_93_int);
	var_90_bool = var_93_int == (int)0;
	return 2;
}


func_2111(var_59_float, var_60_float, var_61_float, var_62_float)
{
	var_63_bool = var_60_float < var_61_float;
	if(var_63_bool != 0) {
		var_61_float = var_59_float;
		return 0;
	}
	var_64_bool = var_60_float > var_62_float;
	if(var_64_bool != 0) {
		var_62_float = var_59_float;
		return 0;
	}
	var_60_float = var_59_float;
	return 0;
}


func_834(var_2_object, var_5_object)
{
	var_369_float = 0; var_370_int = 0; var_371_float = 0; var_372_int = 0;
	var_373_bool = var_2_object == 0; //@nz
	if(var_373_bool != 0) {
		return 4;
	}
	var_374_object = var_5_object;
	if(var_374_object != 0) {
		var_5_object = var_5_object + (int)-1;
		var_377_bool = var_5_object > (int)0;
		if(var_377_bool != 0) {
			return 4;
		}
	}
	rand(var_371_float);
	var_378_float = 0;
	func_884(var_378_float);
	var_379_bool = var_371_float < var_378_float;
	if(var_379_bool != 0) {
		irand(var_372_int, var_2_object);
		var_372_int = var_372_int + (int)1;
		var_382_int = "attack" + var_372_int;
		Speak(var_382_int);
		var_383_int = 0;
		func_882(var_383_int);
		var_5_object = var_383_int;
	}
	return 4;
}


func_1093(var_0_object, var_1_object, var_24_int)
{
	var_26_bool = var_24_int != (int)0;
	if(var_26_bool != 0) {
		return 0;
	}
	var_27_bool = 0; var_28_object = Obj();
	var_28_object = var_1_object;
	func_1131(var_27_bool, var_28_object);
	var_63_bool = var_27_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2122(var_30_bool, var_31_object, var_32_float)
{
	var_33_bool = var_31_object == 0; //@nz
	if(var_33_bool != 0) {
		var_30_bool = 0;
		return 0;
	}
	var_35_bool = var_32_float > (int)0;
	if(var_35_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_66_bool = var_32_float < (int)0;
		if(var_66_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2143;
		}
		var_30_bool = 0;
		return 0;
	}
Label_2143:
	var_37_float = 0;
	var_32_float = var_37_float;
	func_2174(var_37_float);
	var_41_bool = 0; var_42_object = Obj(); var_43_string = ""; var_44_float = 0; var_45_float = 0; var_46_float = 0;
	var_31_object = var_42_object;
	var_32_float = var_44_float;
	func_1457(var_41_bool, var_42_object, "reputation", var_44_float, (float)0, (float)1);
	var_30_bool = 1;
	return 0;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_186_object, var_187_object)
{
	var_0_object = var_187_object;
	var_1_object = var_186_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_193_string = "";
		func_139(var_187_object, "Neutral");
		@@@var_0_object:SetMessage((int)507526);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)507527, (int)-1, (int)8309);
		@@@var_0_object:AddReply((int)533979, (int)-1, (int)35550);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_217_bool = 0;
	func_2401(var_217_bool);
	if(var_217_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_218_string = var_3_string;
		if(var_218_string != 0) {
		} else {
			var_219_string = "";
			var_219_string = var_2_object;
			func_1979(var_219_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_232_string = var_3_string;
		if(var_232_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_1617(var_33_object)
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


func_2393(var_79_int)
{
	var_79_int = 515572;
	return 0;
}


func_1115(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2395(var_78_int)
{
	var_78_int = 504031;
	return 0;
}


func_2397(var_80_string)
{
	var_80_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_2399(var_81_string)
{
	var_81_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_2401(var_73_bool)
{
	var_73_bool = 0;
	return 0;
}


func_866(var_0_object)
{
	var_125_object = Obj();
	var_125_object = var_0_object;
	func_2205(var_125_object);
	return 0;
}


func_871(var_466_int)
{
	var_466_int = 0;
	return 0;
}


func_873()
{
	var_258_string = "";
	func_2043("attack_stay");
	return 0;
}


func_1131(var_183_bool, var_184_object)
{
	var_185_bool = 0; var_186_object = Obj();
	var_184_object = var_186_object;
	func_1593(var_185_bool, var_186_object);
	var_185_bool = var_183_bool;
	return 0;
}


func_1899(var_102_bool, var_103_object)
{
	var_104_string = ""; var_105_int = 0; var_106_bool = 0; var_107_int = 0; var_108_string = ""; var_109_string = ""; var_110_int = 0; var_111_bool = 0; var_112_int = 0; var_113_string = "";
	var_109_string = "c";
	var_110_int = 0;
	
Label_1902:
	if((int)1 != 0) {
		var_116_int = var_110_int + (int)1;
		var_117_int = var_109_string + var_116_int;
		@@var_103_object:HasProperty(var_117_int, var_111_bool);
		var_118_bool = var_111_bool == 0; //@nz
		if(var_118_bool != 0) {
		} else {
			var_110_int = var_110_int + (int)1;
			goto Label_1902;
		}
	}
	var_119_bool = var_110_int == 0; //@nz
	if(var_119_bool != 0) {
		var_102_bool = 0;
		return 10;
	}
	var_112_int = 0;
	var_121_bool = var_110_int > (int)1;
	if(var_121_bool != 0) {
		irand(var_112_int, var_110_int);
	}
	var_123_int = var_112_int + (int)1;
	var_124_int = var_109_string + var_123_int;
	@@var_103_object:GetProperty(var_124_int, var_113_string);
	var_125_bool = 0; var_126_string = "";
	var_113_string = var_126_string;
	func_2021(var_125_bool, var_126_string);
	var_125_bool = var_102_bool;
	return 10;
	
}


func_2157(var_457_float)
{
	var_458_object = Obj(); var_459_object = Obj();
	CreateFloatVector(var_459_object);
	@@var_459_object:add(var_457_float);
	var_461_bool = var_457_float < (int)0;
	if(var_461_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_459_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_878()
{
	return 0;
}


func_880(var_491_bool)
{
	var_491_bool = 1;
	return 0;
}


func_1138(var_201_string)
{
	var_201_string = "walk";
	return 0;
}


func_882(var_383_int)
{
	var_383_int = 1;
	return 0;
}


func_1140(var_202_string)
{
	var_202_string = "run";
	return 0;
}


func_884(var_378_float)
{
	var_378_float = 0.5;
	return 0;
}


func_1142(var_88_object)
{
	var_89_object = Obj();
	var_88_object = var_89_object;
	func_1165(var_89_object);
	SetRTEnvelope((int)50, (int)40);
	
Label_1151:
	Hold();
	goto Label_1151;
}
EMIT "Return(); Pop(0)";


func_886(var_2_object, var_132_bool, var_133_object, var_134_float, var_135_float, var_136_bool, var_137_bool)
{
	var_141_bool = 0; var_142_bool = 0; var_143_bool = 0; var_144_bool = 0;
	var_145_object = Obj();
	var_133_object = var_145_object;
	func_2205(var_145_object);
	SetTimer((int)1, (int)5);
	CanSee(var_143_bool, var_133_object);
	var_148_bool = var_143_bool;
	if(var_148_bool != 0) {
		var_2_object = true;
		var_149_object = Obj();
		var_133_object = var_149_object;
		func_2010(var_149_object);
	} else {
		var_2_object = false;
	}
	var_156_bool = 0; var_157_object = Obj();
	var_133_object = var_157_object;
	func_1440(var_156_bool, var_157_object);
	if(var_156_bool != 0) {
		var_160_object = Obj();
		func_2084(var_160_object);
		SendPlayerEnemy(var_133_object, var_160_object);
	}
	var_161_bool = 0; var_162_object = Obj(); var_163_float = 0; var_164_float = 0; var_165_bool = 0; var_166_bool = 0;
	var_133_object = var_162_object;
	var_134_float = var_163_float;
	var_135_float = var_164_float;
	var_136_bool = var_165_bool;
	var_137_bool = var_166_bool;
	func_991(var_143_bool, var_144_bool, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool);
	var_161_bool = var_144_bool;
	var_212_object = var_2_object;
	if(var_212_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_144_bool = var_132_bool;
	return 4;
	
}


func_1661(var_20_object, var_21_int, var_22_float)
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
		func_1433(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		func_2090(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		CreateVectorVector(var_33_object);
		var_34_int = 1;

	Label_1690:
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
			goto Label_1690;
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
			func_1729(var_67_float, var_68_cvector, var_69_cvector);
			return 18;
		}
		var_33_object = 0;
	}
	var_110_object = Obj();
	var_20_object = var_110_object;
	func_1617(var_110_object);
	return 18;
	
}


func_2174(var_37_float)
{
	var_38_object = Obj(); var_39_object = Obj();
	CreateFloatVector(var_39_object);
	@@var_39_object:add(var_37_float);
	SendWorldWndMessage((int)16, var_39_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1413()
{
	StopGroup0();
	Stop();
	return 0;
}


func_2184(var_16_bool, var_17_string, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj();
	FindActor(var_20_object, var_17_string);
	var_21_bool = var_20_object == 0; //@ne
	if(var_21_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	Trigger(var_20_object, var_18_string);
	var_16_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1418()
{
	return 0;
}


func_139(var_2_object, var_193_string)
{
	var_194_bool = 0;
	func_2401(var_194_bool);
	var_195_bool = var_194_bool == 0; //@nz
	if(var_195_bool != 0) {
		return 0;
	}
	var_196_bool = var_193_string == var_2_object;
	if(var_196_bool != 0) {
		return 0;
	}
	var_197_string = ""; var_198_bool = 0;
	var_193_string = var_197_string;
	var_200_bool = var_193_string == "";
	if(var_200_bool != 0) {
		var_198_bool = 0;
	} else {
		var_198_bool = 1;
	}
	func_1995(var_197_string, var_198_bool);
	var_2_object = var_193_string;
	return 0;
	
}


func_1419(var_429_string, var_430_int)
{
	var_432_bool = var_430_int == (int)2;
	if(var_432_bool != 0) {
		var_429_string = "fire";
		return 0;
	EMIT "GOTO 0x597";
	}
	var_434_bool = var_430_int == (int)1;
	if(var_434_bool != 0) {
		var_429_string = "bullet";
		return 0;
	}
	var_429_string = "phys";
	return 0;
}


func_1165(var_89_object)
{
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_string = ""; var_95_object = Obj(); var_96_bool = 0; var_97_bool = 0; var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_string = ""; var_105_object = Obj(); var_106_bool = 0; var_107_bool = 0; var_108_float = 0; var_109_cvector = CVector(0,0,0);
	var_110_bool = var_89_object == 0; //@ne
	if(var_110_bool != 0) {
		var_111_string = "";
		func_1256("fdie");
	} else {
		@@var_89_object:GetPosition(var_100_cvector);
		GetPosition(var_101_cvector);
		GetDirection(var_102_cvector);
		var_103_cvector = var_101_cvector - var_100_cvector;
		var_143_float = GetByIndex(var_103_cvector, 0);
		var_144_float = GetByIndex(var_102_cvector, 0);
		var_145_float = var_143_float * var_144_float;
		var_146_float = GetByIndex(var_103_cvector, 2);
		var_147_float = GetByIndex(var_102_cvector, 2);
		var_148_float = var_146_float * var_147_float;
		var_149_int = var_145_float + var_148_float;
		var_151_bool = var_149_int >= (int)0;
		if(var_151_bool != 0) {
			var_104_string = "fdie";
		} else {
				var_104_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_89_object = var_105_object;
		var_154_bool = IsFuncExist(var_89_object, "GetScriptProperty", (int)2);
		if(var_154_bool != 0) {
			@@var_89_object:HasScriptProperty(var_106_bool, "Owner");
			var_156_bool = var_106_bool;
			if(var_156_bool != 0) {
				@@var_89_object:GetScriptProperty(var_105_object, "Owner");
				var_158_bool = var_105_object == 0; //@ne
				if(var_158_bool != 0) {
					var_89_object = var_105_object;
				}
			}
		}
		var_161_bool = IsFuncExist(var_105_object, "@GetEyesHeight", (int)1);
		if(var_161_bool != 0) {
			@@var_105_object:GetEyesHeight(var_108_float);
			var_109_cvector = CVector(0.0, 0.0, 0.0);
			var_162_float = GetByIndex(var_109_cvector, 1);
			var_108_float = var_162_float;
			SetByIndex(var_109_cvector, 1) = var_162_float;
			LookAsync(var_89_object, "head", var_109_cvector);
			var_107_bool = 1;
		} else {
			var_107_bool = 0;

		}
		var_164_string = "";
		var_104_string = var_164_string;
		func_2043(var_164_string);
		PlayAnimation("all", var_104_string);
		WaitForAnimEnd();
		var_166_bool = var_107_bool;
		if(var_166_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_104_string);
		RemoveEnvelope();
		var_105_object = 0;
	}
	return 20;
	
}


func_1936(var_133_bool, var_134_object)
{
	var_135_string = ""; var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_string = ""; var_140_string = ""; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_string = "";
	var_146_int = 0;
	func_2196(var_146_int);
	var_152_int = "d" + var_146_int;
	var_140_string = var_152_int + "m";
	var_141_int = 0;
	
Label_1945:
	if((int)1 != 0) {
		var_156_int = var_141_int + (int)1;
		var_157_int = var_140_string + var_156_int;
		@@var_134_object:HasProperty(var_157_int, var_142_bool);
		var_158_bool = var_142_bool == 0; //@nz
		if(var_158_bool != 0) {
		} else {
			var_141_int = var_141_int + (int)1;
			goto Label_1945;
		}
	}
	var_159_bool = var_141_int == 0; //@nz
	if(var_159_bool != 0) {
		var_133_bool = 0;
		return 10;
	}
	var_143_int = 0;
	var_161_bool = var_141_int > (int)1;
	if(var_161_bool != 0) {
		irand(var_143_int, var_141_int);
	}
	var_163_int = var_143_int + (int)1;
	var_164_int = var_140_string + var_163_int;
	@@var_134_object:GetProperty(var_164_int, var_144_string);
	var_165_bool = 0; var_166_string = "";
	var_144_string = var_166_string;
	func_2021(var_165_bool, var_166_string);
	var_165_bool = var_133_bool;
	return 10;
	
}


func_2196(var_146_int)
{
	var_147_float = 0; var_148_float = 0;
	GetGameTime(var_148_float);
	var_150_int = 0;
	var_150_int = var_148_float / (int)24;
	var_146_int = (int)1 + var_150_int;
	return 2;
}


func_664(var_492_bool, var_493_float)
{
	var_494_float = 0; var_495_bool = 0; var_496_float = 0; var_497_bool = 0;
	rand(var_496_float);
	var_498_bool = var_496_float < var_493_float;
	if(var_498_bool != 0) {

	Label_669:
		IsAnimationPlaying(var_497_bool);
		var_499_bool = var_497_bool == 0; //@nz
		if(var_499_bool != 0) {
		} else {
			var_500_bool = 0;
			func_762(var_500_bool);
			if(var_500_bool != 0) {
				var_492_bool = 1;
				sync();
				goto Label_669;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_866(var_497_bool);
	}
	goto Label_689;
	
Label_689:
	var_492_bool = 0;
	return 4;
	
}


func_1433(var_50_cvector, var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	GetPosition(var_54_cvector);
	@@var_51_object:GetPosition(var_55_cvector);
	var_50_cvector = var_55_cvector - var_54_cvector;
	return 4;
}


func_2205(var_125_object)
{
	var_126_bool = 0; var_127_bool = 0;
	IsPlayerActor(var_125_object, var_127_bool);
	var_128_bool = var_127_bool;
	if(var_128_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1440(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_bool = 0;
	IsPlayerActor(var_27_object, var_29_bool);
	var_29_bool = var_26_bool;
	return 2;
}


func_1445(var_49_bool, var_50_object, var_51_string)
{
	var_52_bool = 0; var_53_bool = 0;
	var_56_bool = IsFuncExist(var_50_object, "HasProperty", (int)2);
	var_57_bool = var_56_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_49_bool = 0;
		return 2;
	}
	@@var_50_object:HasProperty(var_51_string, var_53_bool);
	var_53_bool = var_49_bool;
	return 2;
}


func_2214()
{
	var_362_object = Obj(); var_363_object = Obj();
	GetScene(var_363_object);
	var_365_object = Obj();
	func_2084(var_365_object);
	BroadcastMessage("battle", var_365_object, var_363_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2225(var_82_int)
{
	var_83_int = 0; var_84_int = 0;
	GetVariable("branch", var_84_int);
	var_87_bool = var_84_int == (int)0;
	if(var_87_bool != 0) {
		var_82_int = 1;
		return 2;
	EMIT "GOTO 0x8c0";
	}
	var_89_bool = var_84_int == (int)1;
	if(var_89_bool != 0) {
		var_82_int = 2;
		return 2;
	}
	var_82_int = 3;
	return 2;
}


func_1457(var_41_bool, var_42_object, var_43_string, var_44_float, var_45_float, var_46_float)
{
	var_47_float = 0; var_48_float = 0;
	var_49_bool = 0; var_50_object = Obj(); var_51_string = "";
	var_42_object = var_50_object;
	var_43_string = var_51_string;
	func_1445(var_49_bool, var_50_object, var_51_string);
	var_58_bool = var_49_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_41_bool = 0;
		return 2;
	}
	@@var_42_object:GetProperty(var_43_string, var_48_float);
	var_59_float = 0; var_60_float = 0; var_61_float = 0; var_62_float = 0;
	var_60_float = var_48_float + var_44_float;
	var_45_float = var_61_float;
	var_46_float = var_62_float;
	func_2111(var_59_float, var_60_float, var_61_float, var_62_float);
	@@var_42_object:SetProperty(var_43_string, var_59_float);
	var_41_bool = 1;
	return 2;
}


func_691(var_0_object, var_289_bool, var_290_float)
{
	var_291_bool = 0; var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_float = 0; var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0;
	
Label_692:
	IsAnimationPlaying(var_296_bool);
	var_301_bool = var_296_bool == 0; //@nz
	if(var_301_bool != 0) {
	} else {
		var_302_bool = 0;
		func_762(var_302_bool);
		if(var_302_bool != 0) {
			var_289_bool = 1;
			return 10;
		}
		var_345_bool = 0; var_346_object = Obj();
		var_346_object = var_0_object;
		func_1593(var_345_bool, var_346_object);
		var_347_bool = var_345_bool == 0; //@nz
		if(var_347_bool != 0) {
			var_289_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_297_cvector);
		GetPFPosition(var_298_cvector);
		var_299_cvector = var_297_cvector - var_298_cvector;
		var_300_float = var_299_cvector | var_299_cvector;
		var_348_float = var_290_float * var_290_float;
		var_349_bool = var_300_float < var_348_float;
		if(var_349_bool != 0) {
			var_350_bool = 0; var_351_float = 0;
			var_290_float = var_351_float;
			func_527(var_299_cvector, var_300_float, var_350_bool, var_351_float);
			var_289_bool = 1;
			sync();
			goto Label_692;
		}
		return 10;
	}
	func_866(var_300_float);
	var_289_bool = 0;
	return 10;
	
}


func_949(var_2_object)
{
	KillTimer((int)1);
	var_18_object = var_2_object;
	if(var_18_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1115(var_16_cvector);
	return 0;
}


func_1979(var_219_string)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0;
	lshHasAnimation(var_223_bool, var_219_string);
	var_226_bool = var_223_bool;
	if(var_226_bool != 0) {
		lshGetAnimTimes(var_219_string, var_224_float, var_225_float);
		lshPlayAnimation(var_224_float, var_225_float, (bool)0);
	} else {
		var_229_int = "Can't find lsh animation : " + var_219_string;
		Trace(var_229_int);
	}
	return 6;
	
}


func_1729(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj();
	GetScene(var_29_object);
	AddActorByType(var_30_object, "scripted", var_29_object, var_25_cvector, var_26_cvector, "blood_dir.xml");
	var_33_object = Obj();
	var_22_object = var_33_object;
	func_1617(var_33_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2242(var_68_int)
{
	var_69_int = 0; var_70_int = 0;
	GetVariable("branch", var_70_int);
	var_70_int = var_68_int;
	return 2;
}


func_453(var_1_object, var_2_object, var_4_bool)
{
	var_54_bool = 0; var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_455:
	var_63_int = var_1_object + (int)1;
	var_64_int = "attack_begin" + var_63_int;
	HasAnimation(var_57_bool, "all", var_64_int);
	var_65_bool = var_57_bool == 0; //@nz
	if(var_65_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_455;
	}
	var_2_object = 0;
	
Label_469:
	var_68_int = var_2_object + (int)1;
	var_69_int = "attack" + var_68_int;
	IsExisting3DSound(var_58_bool, var_69_int);
	var_70_bool = var_58_bool == 0; //@nz
	if(var_70_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_469;

	}
	GetAnimationOffset(var_59_cvector, "all", "bjump");
	var_73_float = GetByIndex(var_59_cvector, 2);
	var_4_bool = -var_73_float;
	return 6;
	
}


func_1479(var_401_float, var_402_object, var_403_float, var_404_int)
{
	var_408_int = 0; var_409_string = ""; var_410_int = 0; var_411_float = 0; var_412_float = 0; var_413_float = 0; var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0;
	var_420_bool = 0; var_421_object = Obj(); var_422_string = "";
	var_402_object = var_421_object;
	func_1445(var_420_bool, var_421_object, "health");
	var_423_bool = var_420_bool == 0; //@nz
	if(var_423_bool != 0) {
		var_401_float = 0.0;
		return 12;
	}
	var_424_bool = 0; var_425_object = Obj(); var_426_string = "";
	var_402_object = var_425_object;
	func_1445(var_424_bool, var_425_object, "armor");
	var_427_bool = var_424_bool == 0; //@nz
	if(var_427_bool != 0) {
		var_414_int = 0;
	} else {
			@@var_402_object:GetProperty("armor", var_414_int);
	}
	var_429_string = ""; var_430_int = 0;
	var_404_int = var_430_int;
	func_1419(var_429_string, var_430_int);
	var_415_string = "armor_" + var_429_string;
	var_435_bool = 0; var_436_object = Obj(); var_437_string = "";
	var_402_object = var_436_object;
	var_415_string = var_437_string;
	func_1445(var_435_bool, var_436_object, var_437_string);
	var_438_bool = var_435_bool == 0; //@nz
	if(var_438_bool != 0) {
		var_416_int = 0;
	} else {
		@@var_402_object:GetProperty(var_415_string, var_416_int);

	}
	var_439_float = 0; var_440_float = 0; var_441_float = 0;
	var_442_int = var_414_int + var_416_int;
	var_440_float = var_442_int / (float)100.0;
	func_2104(var_439_float, var_440_float, (float)1);
	var_439_float = var_417_float;
	@@var_402_object:GetProperty("health", var_418_float);
	var_447_int = (int)1 - var_417_float;
	var_419_float = var_403_float * var_447_int;
	var_449_float = 0; var_450_float = 0; var_451_float = 0; var_452_float = 0;
	var_450_float = var_418_float - var_419_float;
	func_2111(var_449_float, var_450_float, (float)0, (float)1);
	@@var_402_object:SetProperty("health", var_449_float);
	var_455_bool = 0; var_456_object = Obj();
	var_402_object = var_456_object;
	func_1440(var_455_bool, var_456_object);
	if(var_455_bool != 0) {
		var_457_float = 0;
		var_457_float = -var_419_float;
		func_2157(var_457_float);
	}
	var_419_float = var_401_float;
	return 12;
	
}


func_2248(var_20_object)
{
	var_21_int = 0;
	func_2242(var_21_int);
	var_26_bool = var_21_int == (int)1;
	if(var_26_bool != 0) {
		WorkWithCorpse(var_20_object);
	} else {
		Barter(var_20_object);
	}
	return 0;
	
}


func_203()
{
	var_25_object = Obj(); var_26_object = Obj();
	FindActor(var_26_object, "player");
	var_28_bool = var_26_object == 0; //@nz
	if(var_28_bool != 0) {
		return 2;
	}
	var_29_object = Obj(); var_30_bool = 0; var_31_float = 0;
	var_26_object = var_29_object;
	func_224(var_22_bool, var_23_float, var_24_int, var_25_object, var_26_object, var_29_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1995(var_197_string, var_198_bool)
{
	var_201_bool = 0; var_202_float = 0; var_203_float = 0; var_204_bool = 0; var_205_float = 0; var_206_float = 0;
	lshHasAnimation(var_204_bool, var_197_string);
	var_207_bool = var_204_bool;
	if(var_207_bool != 0) {
		lshGetAnimTimes(var_197_string, var_205_float, var_206_float);
		lshPlayAnimation(var_205_float, var_206_float, var_198_bool);
	} else {
		var_209_int = "Can't find lsh animation : " + var_197_string;
		Trace(var_209_int);
	}
	return 6;
	
}


func_1743(var_235_object)
{
	var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0);
	@@var_235_object:GetPosition(var_239_cvector);
	GetPosition(var_240_cvector);
	var_241_cvector = var_239_cvector - var_240_cvector;
	var_242_float = GetByIndex(var_241_cvector, 0);
	var_243_float = GetByIndex(var_241_cvector, 2);
	RotateAsync(var_242_float, var_243_float);
	return 6;
}


func_2261(var_74_string)
{
	var_75_object = Obj(); var_76_int = 0; var_77_bool = 0; var_78_object = Obj(); var_79_int = 0; var_80_bool = 0;
	CreateInvItem(var_78_object);
	@@var_78_object:SetItemName(var_74_string);
	@@var_78_object:SetProperty("Organ", (int)1);
	@@var_78_object:GetItemID(var_79_int);
	AddItem(var_80_bool, var_78_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1754(var_30_bool, var_31_object, var_32_float)
{
	var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_bool = 0;
	@@var_31_object:GetPosition(var_43_cvector);
	@@var_31_object:GetEyesHeight(var_42_float);
	var_51_float = GetByIndex(var_43_cvector, 1);
	var_51_float = var_51_float + var_42_float;
	SetByIndex(var_43_cvector, 1) = var_51_float;
	GetPosition(var_44_cvector);
	GetEyesHeight(var_42_float);
	var_52_float = GetByIndex(var_44_cvector, 1);
	var_52_float = var_52_float + var_42_float;
	SetByIndex(var_44_cvector, 1) = var_52_float;
	var_45_cvector = var_43_cvector - var_44_cvector;
	var_53_float = GetByIndex(var_45_cvector, 1);
	SetByIndex(var_45_cvector, 1) = (float)0;
	var_54_int = var_45_cvector | var_45_cvector;
	var_55_float = sqrt(var_54_int);
	var_45_cvector = var_45_cvector / var_55_float;
	var_46_cvector = -var_45_cvector;
	var_56_float = var_45_cvector * var_32_float;
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	var_58_cvector = var_46_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2090(var_57_cvector, var_58_cvector);
	var_66_float = var_57_cvector * (int)25;
	var_67_int = var_56_float + var_66_float;
	var_47_cvector = var_67_int - CVector(0.0, 10.0, 0.0);
	var_48_cvector = var_44_cvector + var_47_cvector;
	IsOverrideActive(var_49_bool);
	var_69_bool = var_49_bool;
	if(var_69_bool != 0) {
		var_30_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_48_cvector, var_46_cvector, (bool)1);
	var_71_float = GetByIndex(var_47_cvector, 0);
	var_72_float = GetByIndex(var_47_cvector, 2);
	Rotate(var_71_float, var_72_float);
	var_73_bool = 0;
	func_2401(var_73_bool);
	if(var_73_bool != 0) {
	} else {
		HasAnimationTrack(var_50_bool, "head");
		var_75_bool = var_50_bool;
		if(var_75_bool == 0) goto Label_1817;
		LookAsyncCamera("head");
	}
Label_1817:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_30_bool = 1;
	return 18;
	
}


func_218(var_398_float)
{
	var_398_float = 0.30000001192092896;
	return 0;
}


func_2010(var_149_object)
{
	var_150_float = 0; var_151_cvector = CVector(0,0,0); var_152_float = 0; var_153_cvector = CVector(0,0,0);
	@@var_149_object:GetEyesHeight(var_152_float);
	var_153_cvector = CVector(0.0, 0.0, 0.0);
	var_154_float = GetByIndex(var_153_cvector, 1);
	var_152_float = var_154_float;
	SetByIndex(var_153_cvector, 1) = var_154_float;
	LookAsync(var_149_object, "head", var_153_cvector);
	return 4;
}


func_221(var_405_int)
{
	var_405_int = 0;
	return 0;
}


func_734(var_0_object, var_304_bool)
{
	var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_float = 0; var_309_float = 0; var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_float = 0;
	var_315_bool = 0; var_316_object = Obj();
	var_316_object = var_0_object;
	func_1593(var_315_bool, var_316_object);
	var_317_bool = var_315_bool == 0; //@nz
	if(var_317_bool != 0) {
		var_304_bool = 0;
		return 10;
	}
	var_318_bool = 0;
	func_823(var_314_float, var_318_bool);
	if(var_318_bool != 0) {
		@@@var_0_object:GetPFPosition(var_310_cvector);
		GetPFPosition(var_311_cvector);
		var_312_cvector = var_310_cvector - var_311_cvector;
		var_313_float = var_312_cvector | var_312_cvector;
		@@@var_0_object:GetAttackDistance(var_314_float);
		var_314_float = var_314_float + (int)50;
		var_320_float = var_314_float * var_314_float;
		var_304_bool = var_313_float <= var_320_float;
		return 10;
	}
	var_304_bool = 0;
	return 10;
}


func_991(var_0_object, var_1_object, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool)
{
	var_167_bool = 0; var_168_bool = 0; var_169_object = Obj(); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_float = 0; var_174_object = Obj(); var_175_bool = 0; var_176_bool = 0; var_177_object = Obj(); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_float = 0; var_182_object = Obj();
	var_0_object = false;
	var_1_object = var_162_object;
	var_166_bool = var_176_bool;
	
Label_995:
	var_183_bool = 0; var_184_object = Obj();
	var_162_object = var_184_object;
	func_1131(var_183_bool, var_184_object);
	var_187_bool = var_183_bool == 0; //@nz
	if(var_187_bool != 0) {
		var_161_bool = 0;
		return 16;
	}
	@@var_162_object:GetPosition(var_178_cvector);
	GetPosition(var_179_cvector);
	var_180_cvector = var_178_cvector - var_179_cvector;
	var_181_float = var_180_cvector | var_180_cvector;
	var_188_bool = 0;
	var_188_bool = 0;
	var_190_bool = var_164_float > (int)0;
	if(var_190_bool != 0) {
		var_191_float = var_164_float * var_164_float;
		var_192_bool = var_181_float > var_191_float;
		if(var_192_bool != 0) {
			var_188_bool = 1;
		}
	}
	if(var_188_bool != 0) {
		Stop();
		var_161_bool = 0;
		return 16;
	}
	var_193_float = var_163_float * var_163_float;
	var_194_bool = var_181_float > var_193_float;
	if(var_194_bool != 0) {
		@@var_162_object:GetPFPosition(var_178_cvector);
		FindPathTo(var_182_object, var_178_cvector);
		var_195_bool = var_182_object != 0; //@nn
		if(var_195_bool != 0) {
			var_182_object = var_177_object;
			var_182_object = 0;
		}
		var_196_bool = var_177_object != 0; //@nn
		if(var_196_bool != 0) {
			var_197_bool = var_176_bool;
			if(var_197_bool == 0) goto Label_1044;
			var_176_bool = 0;
			RotatePath(var_177_object, var_175_bool);
			var_198_bool = var_175_bool == 0; //@nz
			if(var_198_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_201_string = "";
				func_1138(var_201_string);
				var_202_string = "";
				func_1140(var_202_string);
				FollowPath(var_177_object, var_165_bool, var_175_bool, var_201_string, var_202_string);
				var_203_bool = var_175_bool == 0; //@nz
				if(var_203_bool != 0) {
					var_204_object = var_0_object;
					if(var_204_object != 0) {
						var_177_object = 0;
						goto Label_1091;
					EMIT "GOTO 0x428";
					}
				} else {
					var_177_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_175_bool);
					var_207_bool = var_175_bool == 0; //@nz
					if(var_207_bool != 0) {
						var_208_object = var_0_object;
						if(var_208_object != 0) {
							var_177_object = 0;
							goto Label_1091;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1091;
	}
			var_182_object = 0;
			goto Label_1089;

		Label_1089:
			var_177_object = 0;

		}
		goto Label_995;
	}
Label_1091:
	var_161_bool = !var_0_object;
	return 16;
	
}


func_224(var_0_object, var_3_string, var_5_object, var_29_object, var_30_bool, var_31_float, var_138_bool, var_230_bool)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_float = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_float = 0;
	func_453(var_51_cvector, var_52_bool, var_53_float);
	var_5_object = 0;
	var_78_bool = IsFuncExist(var_29_object, "@GetAttackDistance", (int)1);
	if(var_78_bool != 0) {
		@@var_29_object:GetAttackDistance(var_43_float);
		var_43_float = var_43_float + (int)50;
	} else {
							var_31_float = var_43_float;
	}
	var_81_bool = var_43_float >= (int)150;
	if(var_81_bool != 0) {
		var_43_float = 150;
	}
	var_3_string = false;
	var_0_object = var_29_object;
	IsPlayerActor(var_0_object, var_46_bool);
	var_82_bool = var_46_bool;
	if(var_82_bool != 0) {
		PlayGlobalMusic("attack");
		var_84_object = Obj();
		func_2084(var_84_object);
		SendPlayerEnemy(var_29_object, var_84_object);
	}
	var_87_bool = var_30_bool;
	if(var_87_bool != 0) {
		var_47_bool = 0;
	} else {
						var_47_bool = 1;

	}
	var_48_float = (float)400.0 + var_43_float;
	
Label_264:
	var_89_bool = 0;
	var_89_bool = 0;
	var_90_bool = 0; var_91_object = Obj();
	var_91_object = var_0_object;
	func_1593(var_90_bool, var_91_object);
	if(var_90_bool != 0) {
		var_124_bool = var_3_string == 0; //@nz
		if(var_124_bool != 0) {
			var_89_bool = 1;
		}
	}
	if(var_89_bool != 0) {
		func_866(var_53_float);
		@@@var_0_object:GetPFPosition(var_44_cvector);
		GetPFPosition(var_45_cvector);
		var_49_cvector = var_44_cvector - var_45_cvector;
		var_50_float = var_49_cvector | var_49_cvector;
		var_130_float = var_48_float * var_48_float;
		var_131_bool = var_50_float >= var_130_float;
		if(var_131_bool != 0) {
			var_132_bool = 0; var_133_object = Obj(); var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_bool = 0;
			var_133_object = var_0_object;
			var_43_float = var_134_float;
			TaskCall(3);
			func_886(var_140_bool, var_132_bool, var_133_object, var_134_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_215_bool = var_138_bool == 0; //@nz
			if(var_215_bool != 0) {
			} else {
				var_47_bool = 0;
		} else {
				var_221_float = var_31_float * var_31_float;
				var_222_bool = var_50_float >= var_221_float;
				if(var_222_bool != 0) {
					@@@var_0_object:GetPFPosition(var_51_cvector);
					CanReachByPF(var_52_bool, var_51_cvector);
					var_223_bool = var_52_bool == 0; //@nz
					if(var_223_bool != 0) {
						var_224_bool = 0; var_225_object = Obj(); var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_bool = 0;
						var_225_object = var_0_object;
						var_43_float = var_226_float;
						TaskCall(3);
						func_886(var_232_bool, var_224_bool, var_225_object, var_226_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_233_bool = var_230_bool == 0; //@nz
						if(var_233_bool != 0) {
							goto Label_436;
						}
						var_47_bool = 0;
						goto Label_264;
					}
					var_234_bool = var_47_bool == 0; //@nz
					if(var_234_bool != 0) {
						var_235_object = Obj();
						var_235_object = var_0_object;
						func_1743(var_235_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_866(var_53_float);
						StopAsync();
						var_47_bool = 1;
						var_246_bool = 0; var_247_object = Obj();
						var_247_object = var_0_object;
						func_1593(var_246_bool, var_247_object);
						var_248_bool = var_246_bool == 0; //@nz
						if(var_248_bool != 0) {
							goto Label_436;
						}
					}
					rand(var_53_float);
					var_249_bool = 0;
					var_251_bool = var_53_float < (float)0.25;
					if(var_251_bool != 1) {
						var_252_bool = 0;
						func_823((bool)1, var_252_bool);
						if(var_252_bool != 1) {
							var_249_bool = 0;
						}
					}
					if(var_249_bool != 0) {
						Face(var_0_object);
						func_873();
						PlayAnimation("all", "attack_stay");
						var_289_bool = 0; var_290_float = 0;
						var_31_float = var_290_float;
						func_691(var_53_float, var_289_bool, var_290_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_866(var_53_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_511_bool = 0;
						func_823(var_53_float, var_511_bool);
						var_512_bool = var_511_bool == 0; //@nz
						if(var_512_bool == 0) goto Label_426;
						var_513_bool = 0; var_514_object = Obj();
						var_514_object = var_0_object;
						func_1593(var_513_bool, var_514_object);
						var_515_bool = var_513_bool == 0; //@nz
						if(var_515_bool != 0) {
							goto Label_436;
						}
						@@@var_0_object:GetPFPosition(var_44_cvector);
						GetPFPosition(var_45_cvector);
						var_49_cvector = var_44_cvector - var_45_cvector;
						var_50_float = var_49_cvector | var_49_cvector;
						var_516_float = var_31_float * var_31_float;
						var_517_bool = var_50_float < var_516_float;
						if(var_517_bool == 0) goto Label_426;
						var_518_bool = 0; var_519_float = 0;
						var_31_float = var_519_float;
						func_527(var_52_bool, var_53_float, var_518_bool, var_519_float);
						var_520_bool = var_518_bool == 0; //@nz
						if(var_520_bool == 0) goto Label_426;
						goto Label_436;
				}
					var_521_bool = 0; var_522_float = 0;
					var_31_float = var_522_float;
					func_527(var_52_bool, var_53_float, var_521_bool, var_522_float);
					var_523_bool = var_521_bool == 0; //@nz
					if(var_523_bool != 0) {
						goto Label_436;
					}
					var_47_bool = 1;

				}
			Label_426:
				goto Label_435;
		}
		Label_435:
			goto Label_264;

		}
	}
Label_436:
	WaitForAnimEnd();
	var_216_string = var_3_string;
	if(var_216_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_219_bool = var_46_bool;
	if(var_219_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_2021(var_125_bool, var_126_string)
{
	var_127_bool = 0; var_128_bool = 0;
	var_129_bool = 0;
	func_2401(var_129_bool);
	if(var_129_bool != 0) {
		lshHasSpeech(var_128_bool, var_126_string);
		var_130_bool = var_128_bool;
		if(var_130_bool != 0) {
			lshPlaySpeech(var_126_string);
			var_125_bool = 1;
			return 2;
		}
	}
	var_125_bool = 0;
	return 2;
}


func_2278()
{
	var_68_int = 0;
	func_2242(var_68_int);
	var_73_bool = var_68_int != (int)1;
	if(var_73_bool != 0) {
		return 0;
	}
	var_74_string = "";
	func_2261("liver");
	var_85_string = "";
	func_2261("kidney");
	var_86_string = "";
	func_2261("heart");
	var_87_string = "";
	func_2261("blood");
	return 0;
}


func_1256(var_111_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_112_string = "";
	var_111_string = var_112_string;
	func_2043(var_112_string);
	PlayAnimation("all", var_111_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_111_string);
	RemoveEnvelope();
	return 0;
}


func_488(var_0_object, var_387_float, var_388_int)
{
	var_389_object = Obj(); var_390_float = 0; var_391_float = 0; var_392_object = Obj(); var_393_float = 0; var_394_float = 0;
	var_396_float = var_387_float * (float)0.8999999761581421;
	GetVictim(var_396_float, var_392_object);
	ReportAttack(var_0_object);
	var_397_bool = var_392_object == var_0_object;
	if(var_397_bool != 0) {
		var_398_float = 0; var_399_object = Obj(); var_400_int = 0;
		var_392_object = var_399_object;
		var_388_int = var_400_int;
		func_218(var_400_int);
		var_398_float = var_393_float;
		var_401_float = 0; var_402_object = Obj(); var_403_float = 0; var_404_int = 0;
		var_392_object = var_402_object;
		var_393_float = var_403_float;
		var_405_int = 0; var_406_object = Obj(); var_407_int = 0;
		var_392_object = var_406_object;
		var_388_int = var_407_int;
		func_221(var_407_int);
		var_405_int = var_404_int;
		func_1479(var_401_float, var_402_object, var_403_float, var_404_int);
		var_401_float = var_394_float;
		var_466_int = 0;
		func_871(var_466_int);
		ReportHit(var_0_object, var_466_int, var_394_float, var_393_float);
		var_467_object = Obj(); var_468_float = 0;
		var_392_object = var_467_object;
		var_394_float = var_468_float;
		func_878();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2036()
{
	var_19_bool = 0;
	func_2401(var_19_bool);
	if(var_19_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_762(var_302_bool)
{
	var_303_bool = 0;
	var_303_bool = 0;
	var_304_bool = 0;
	func_734(var_303_bool, var_304_bool);
	if(var_304_bool != 0) {
		var_321_bool = 0;
		func_778(var_302_bool, var_303_bool, var_321_bool);
		if(var_321_bool != 0) {
			var_303_bool = 1;
		}
	}
	if(var_303_bool != 0) {
		var_302_bool = 1;
		return 0;
	}
	var_302_bool = 0;
	return 0;
}


func_2043(var_112_string)
{
	var_113_bool = 0; var_114_int = 0; var_115_bool = 0; var_116_int = 0; var_117_bool = 0; var_118_float = 0; var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_bool = 0; var_122_int = 0; var_123_bool = 0; var_124_int = 0; var_125_bool = 0; var_126_float = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0);
	IsExisting3DSound(var_121_bool, var_112_string);
	var_129_bool = var_121_bool == 0; //@nz
	if(var_129_bool != 0) {
		var_122_int = 0;

	Label_2049:
		var_131_int = var_122_int + (int)1;
		var_132_int = var_112_string + var_131_int;
		IsExisting3DSound(var_123_bool, var_132_int);
		var_133_bool = var_123_bool == 0; //@nz
		if(var_133_bool != 0) {
		} else {
			var_122_int = var_122_int + (int)1;
			goto Label_2049;
		}
		var_134_bool = var_122_int == 0; //@nz
		if(var_134_bool != 0) {
			return 16;
		}
		irand(var_124_int, var_122_int);
		var_136_int = var_124_int + (int)1;
		var_112_string = var_112_string + var_136_int;
	}
	Is3DSoundLoaded(var_125_bool, var_112_string);
	var_137_bool = var_125_bool;
	if(var_137_bool != 0) {
		GetEyesHeight(var_126_float);
		GetDirection(var_127_cvector);
		var_128_cvector = var_127_cvector * (int)50;
		var_139_float = GetByIndex(var_128_cvector, 1);
		var_139_float = var_139_float + var_126_float;
		SetByIndex(var_128_cvector, 1) = var_139_float;
		PlayGlobalSound(var_112_string, var_128_cvector);
	}
	return 16;
	
}


