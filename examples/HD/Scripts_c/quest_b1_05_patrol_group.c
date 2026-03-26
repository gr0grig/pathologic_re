// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,Sleep/1,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,SetRTEnvelope/2,Hold/0,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,AddItem/4,SetVariable/2,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_b1_05|W:attack|W:player|W:head|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png|W:b1q05ToAttack1|A:RemoveStationaryActor
// @GLOBALS: 0:object:
// @RUN_OP: 0xc4
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0xcd vars=object
// @EVENT_1: op=0xe7 vars=object
// @EVENT_3: op=0xfb vars=object
// @EVENT_17: op=0x10f vars=object
// @EVENT_26: op=0x116 vars=string
// @EVENT_7: op=0x15a vars=int
// @TASK_3: vars=object,int,int,bool,float,int params=1
// @TASK_4: vars=bool,object,bool params=6
// @EVENT_7: op=0x4ae vars=int
// @EVENT_1: op=0x4c9 vars=object
// @EVENT_2: op=0x4d8 vars=object
// @EVENT_10: op=0x55e vars=object
// @EVENT_41: op=0x569 vars=object
// @TASK_5: vars= params=1
// @EVENT_0: op=0x58c vars=object
// @EVENT_22: op=0x60b vars=object,int,float,float
// @EVENT_16: op=0x60d vars=object,string
// @EVENT_41: op=0x60f vars=object
// @STANDALONE_EVENT_22: op=0x8e9 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x8f1 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x8fb vars=object,string
// @STANDALONE_EVENT_41: op=0x908 vars=object
// @PE: 0x4a,0x84,0x9a,0xcd,0xe7,0xfb,0x10f,0x130,0x15a,0x171,0x1d5,0x1e1,0x1e4,0x475,0x4ae,0x4c9,0x4d8,0x54c,0x55e,0x569,0x572,0x57d,0x5f1,0x60b,0x60d,0x60f,0x611,0x818,0x81f,0x88a,0x8e9,0x8f1,0x908

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	if((int)1 != 0) {
		func_2008();
		var_24_bool = var_19_object == (int)32266;
		if(var_24_bool != 0) {
			var_25_string = "";
			func_132(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530939);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530940, (int)-1, (int)32267);
			@@@var_0_object:AddReply((int)530966, (int)-1, (int)32287);
			return 0;
		}
		var_3_string = true;
		var_49_bool = 0;
		func_2248(var_49_bool);
		if(var_49_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9b";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_369(var_18_object, var_19_bool);
	var_23_bool = 0;
	func_2250(var_23_bool);
	if(var_23_bool != 0) {
		var_28_object = Obj();
		var_19_bool = var_28_object;
		TaskCall(3);
		func_469(var_28_object);
		TaskReturn();
	}
	var_531_int = 0; var_532_object = Obj();
	var_19_bool = var_532_object;
	TaskCall(0);
	func_0(var_533_object, var_531_int, var_532_object);
	TaskReturn();
	var_661_bool = 0; var_662_string = ""; var_663_string = "";
	func_2107(var_661_bool, "quest_b1_05", "attack");
	return 0;
}


task_2_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_bool = 0;
	func_2250(var_21_bool);
	if(var_21_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_19_bool = var_27_object;
		func_1582(var_26_bool, var_27_object);
		if(var_26_bool != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		var_30_bool = 0; var_31_string = ""; var_32_string = "";
		func_2107(var_30_bool, "quest_b1_05", "attack");
	}
	return 0;
}


task_2_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_bool = 0;
	func_2250(var_21_bool);
	if(var_21_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_19_bool = var_27_object;
		func_1582(var_26_bool, var_27_object);
		if(var_26_bool != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		var_30_bool = 0; var_31_string = ""; var_32_string = "";
		func_2107(var_30_bool, "quest_b1_05", "attack");
	}
	return 0;
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; var_22_string = "";
	func_2107(var_20_bool, "quest_b1_05", "attack");
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_object = Obj(); var_21_object = Obj();
	var_23_bool = var_19_bool == "attack";
	if(var_23_bool != 0) {
		func_369(var_20_object, var_21_object);
		func_2257();
		FindActor(var_21_object, "player");
		var_30_bool = 0; var_31_object = Obj();
		var_21_object = var_31_object;
		func_1713(var_30_bool, var_31_object);
		if(var_30_bool != 0) {
			var_64_object = Obj();
			var_21_object = var_64_object;
			TaskCall(3);
			func_469(var_64_object);
			TaskReturn();
		}
		var_21_object = 0;
	}
	return 2;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_21_bool = var_19_bool == (int)10;
	if(var_21_bool != 0) {
		var_22_bool = 0;
		func_331(var_17_bool, var_18_object, var_19_bool, var_22_bool);
		if(var_22_bool != 0) {
			var_35_bool = var_2_object == 0; //@nz
			if(var_35_bool != 0) {
				var_36_object = Obj();
				var_36_object = var_4_bool;
				func_1997(var_36_object);
				var_2_object = true;
			}
		} else {
			var_43_object = var_2_object;
			if(var_43_object == 0) goto Label_368;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_368:
	return 0;
	
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_int)
{
	var_21_bool = var_19_int == (int)1;
	if(var_21_bool != 0) {
		var_22_object = Obj();
		var_22_object = var_1_object;
		func_2119(var_22_object);
	} else {
		var_27_int = 0;
		var_19_int = var_27_int;
		func_1356(var_18_bool, var_19_int, var_27_int);
	}
	return 0;
	
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_bool = var_1_object == var_19_object;
	if(var_21_bool != 0) {
		var_22_bool = var_2_object == 0; //@nz
		if(var_22_bool != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		var_2_object = true;
		var_23_object = Obj();
		var_19_object = var_23_object;
		func_1997(var_23_object);
	}
	return 0;
}


task_4_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_bool = var_1_object == var_19_object;
	if(var_21_bool != 0) {
		var_22_object = var_2_object;
		if(var_22_object != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	RequestClearPath(var_19_object);
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	func_1212(var_19_object);
	var_19_object = Obj();
	func_2312();
	return 0;
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0;
	IsOverrideActive(var_21_bool);
	var_22_bool = var_21_bool == 0; //@nz
	if(var_22_bool != 0) {
		var_23_object = Obj();
		var_19_object = var_23_object;
		func_2186(var_23_object);
	}
	return 2;
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	return 0;
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0;
	var_19_object = var_23_object;
	var_20_int = var_24_int;
	var_21_float = var_25_float;
	func_1781(var_23_object, var_24_int, var_25_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	var_19_object = var_25_object;
	var_20_int = var_26_int;
	var_21_float = var_27_float;
	var_23_cvector = var_28_cvector;
	var_24_cvector = var_29_cvector;
	func_1849(var_27_float, var_28_cvector, var_29_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	var_21_float = 0; var_22_float = 0;
	var_24_bool = var_20_string == "health";
	if(var_24_bool != 0) {
		GetProperty("health", var_22_float);
		var_27_bool = var_22_float <= (int)0;
		if(var_27_bool != 0) {
			SignalDeath(var_19_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_object = Obj();
	var_19_object = var_20_object;
	func_2262(var_20_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	
Label_196:
	if((bool)1 != 0) {
		var_20_float = 0; var_21_float = 0;
		func_304(var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, (float)300, (float)100);
		goto Label_196;
	}
	return 0;
}


func_0(var_0_object, var_531_int, var_532_object)
{
	var_534_object = Obj(); var_535_bool = 0; var_536_int = 0; var_537_bool = 0; var_538_object = Obj(); var_539_bool = 0; var_540_int = 0; var_541_bool = 0;
	var_0_object = var_532_object;
	var_542_bool = 0; var_543_object = Obj(); var_544_float = 0;
	var_532_object = var_543_object;
	func_1879(var_542_bool, var_543_object, (float)70.0);
	var_589_bool = var_542_bool == 0; //@nz
	if(var_589_bool != 0) {
		var_531_int = -2;
		return 8;
	}
	CreateDialog(var_538_object);
	var_590_int = 0;
	func_2242(var_590_int);
	@@var_538_object:SetNPCName(var_590_int);
	var_591_int = 0;
	func_2240(var_591_int);
	@@var_538_object:SetNPCDescription(var_591_int);
	var_592_string = "";
	func_2244(var_592_string);
	@@var_538_object:SetPhoto(var_592_string);
	var_593_string = "";
	func_2246(var_593_string);
	@@var_538_object:SetPhoto2(var_593_string);
	var_594_int = 0;
	func_2163(var_594_int);
	@@var_538_object:SetPlayerName(var_594_int);
	IsOverrideActive(var_539_bool);
	var_602_bool = var_539_bool;
	if(var_602_bool != 0) {
		var_531_int = -2;
		return 8;
	}
	DoDialog(var_538_object);
	var_603_object = Obj(); var_604_object = Obj();
	var_532_object = var_603_object;
	var_538_object = var_604_object;
	TaskCall(1);
	func_74(var_605_object, var_606_object, var_607_string, var_608_bool, var_603_object, var_604_object);
	TaskReturn();
	@@var_538_object:IsDialogEnd(var_541_bool);
	
Label_56:
	var_652_bool = var_541_bool == 0; //@nz
	if(var_652_bool != 0) {
		sync();
		@@var_538_object:IsDialogEnd(var_541_bool);
		goto Label_56;
	}
	var_532_object = Obj();
	func_1948();
	StopDialog(var_538_object);
	@@var_538_object:GetReturnValue((int)-1);
	var_540_int = var_531_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1025(var_312_bool)
{
	var_313_bool = 0;
	var_313_bool = 0;
	var_314_bool = 0;
	func_997(var_313_bool, var_314_bool);
	if(var_314_bool != 0) {
		var_331_bool = 0;
		func_1041(var_312_bool, var_313_bool, var_331_bool);
		if(var_331_bool != 0) {
			var_313_bool = 1;
		}
	}
	if(var_313_bool != 0) {
		var_312_bool = 1;
		return 0;
	}
	var_312_bool = 0;
	return 0;
}


func_2056(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj();
	self(var_25_object);
	var_25_object = var_23_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2062(var_51_cvector, var_52_cvector)
{
	var_59_float = 0; var_60_float = 0;
	var_61_int = var_52_cvector | var_52_cvector;
	var_60_float = sqrt(var_61_int);
	var_62_float = 9.999999974752427e-07;
	var_63_bool = var_60_float < var_62_float;
	if(var_63_bool != 0) {
		var_51_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_51_cvector = var_52_cvector / var_60_float;
	return 2;
}


func_1041(var_0_object, var_4_bool, var_331_bool)
{
	var_332_object = Obj(); var_333_bool = 0; var_334_float = 0; var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_object = Obj(); var_338_bool = 0; var_339_float = 0; var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0);
	GetScene(var_337_object);
	var_338_bool = 0;
	
Label_1045:
	var_342_cvector = CVector(0,0,0); var_343_object = Obj();
	var_343_object = var_0_object;
	func_1567(var_342_cvector, var_343_object);
	var_348_int = -var_342_cvector;
	FindDirLength(var_339_float, var_348_int, var_4_bool);
	var_349_bool = var_339_float < var_4_bool;
	if(var_349_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_340_cvector);
		GetPFPosition(var_341_cvector);
		WaitForAnimEnd();
		func_1129(var_341_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_338_bool = 1;
		var_353_bool = 0;
		func_997(var_341_cvector, var_353_bool);
		var_354_bool = var_353_bool == 0; //@nz
		if(var_354_bool != 0) {
			goto Label_1083;
		}
		goto Label_1045;
	}
Label_1083:
	var_338_bool = var_331_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1553(var_439_string, var_440_int)
{
	var_442_bool = var_440_int == (int)2;
	if(var_442_bool != 0) {
		var_439_string = "fire";
		return 0;
	EMIT "GOTO 0x61d";
	}
	var_444_bool = var_440_int == (int)1;
	if(var_444_bool != 0) {
		var_439_string = "bullet";
		return 0;
	}
	var_439_string = "phys";
	return 0;
}


func_2072(var_449_float, var_450_float, var_451_float)
{
	var_454_bool = var_450_float < var_451_float;
	if(var_454_bool != 0) {
		var_450_float = var_449_float;
	} else {
		var_451_float = var_449_float;
	}
	return 0;
	
}


func_1567(var_53_cvector, var_54_object)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_57_cvector);
	@@var_54_object:GetPosition(var_58_cvector);
	var_53_cvector = var_58_cvector - var_57_cvector;
	return 4;
}


func_2079(var_459_float, var_460_float, var_461_float, var_462_float)
{
	var_463_bool = var_460_float < var_461_float;
	if(var_463_bool != 0) {
		var_461_float = var_459_float;
		return 0;
	}
	var_464_bool = var_460_float > var_462_float;
	if(var_464_bool != 0) {
		var_462_float = var_459_float;
		return 0;
	}
	var_460_float = var_459_float;
	return 0;
}


func_1574(var_26_float, var_27_object)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	GetPosition(var_31_cvector);
	@@var_27_object:GetPosition(var_32_cvector);
	var_33_cvector = var_32_cvector - var_31_cvector;
	var_26_float = var_33_cvector | var_33_cvector;
	return 6;
}


func_2090(var_467_float)
{
	var_468_object = Obj(); var_469_object = Obj();
	CreateFloatVector(var_469_object);
	@@var_469_object:add(var_467_float);
	var_471_bool = var_467_float < (int)0;
	if(var_471_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_469_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1582(var_166_bool, var_167_object)
{
	var_168_bool = 0; var_169_bool = 0;
	IsPlayerActor(var_167_object, var_169_bool);
	var_169_bool = var_166_bool;
	return 2;
}


func_1587(var_54_bool, var_55_object, var_56_string)
{
	var_57_bool = 0; var_58_bool = 0;
	var_61_bool = IsFuncExist(var_55_object, "HasProperty", (int)2);
	var_62_bool = var_61_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_54_bool = 0;
		return 2;
	}
	@@var_55_object:HasProperty(var_56_string, var_58_bool);
	var_58_bool = var_54_bool;
	return 2;
}


func_2107(var_20_bool, var_21_string, var_22_string)
{
	var_23_object = Obj(); var_24_object = Obj();
	FindActor(var_24_object, var_21_string);
	var_25_bool = var_24_object == 0; //@ne
	if(var_25_bool != 0) {
		var_20_bool = 0;
		return 2;
	}
	Trigger(var_24_object, var_22_string);
	var_20_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1086(var_0_object, var_262_bool)
{
	var_263_bool = 0; var_264_bool = 0;
	var_267_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_267_bool != 0) {
		@@@var_0_object:IsAttacking(var_264_bool);
		var_264_bool = var_262_bool;
		return 2;
	}
	var_262_bool = 0;
	return 2;
}


func_1599(var_411_float, var_412_object, var_413_float, var_414_int)
{
	var_418_int = 0; var_419_string = ""; var_420_int = 0; var_421_float = 0; var_422_float = 0; var_423_float = 0; var_424_int = 0; var_425_string = ""; var_426_int = 0; var_427_float = 0; var_428_float = 0; var_429_float = 0;
	var_430_bool = 0; var_431_object = Obj(); var_432_string = "";
	var_412_object = var_431_object;
	func_1587(var_430_bool, var_431_object, "health");
	var_433_bool = var_430_bool == 0; //@nz
	if(var_433_bool != 0) {
		var_411_float = 0.0;
		return 12;
	}
	var_434_bool = 0; var_435_object = Obj(); var_436_string = "";
	var_412_object = var_435_object;
	func_1587(var_434_bool, var_435_object, "armor");
	var_437_bool = var_434_bool == 0; //@nz
	if(var_437_bool != 0) {
		var_424_int = 0;
	} else {
			@@var_412_object:GetProperty("armor", var_424_int);
	}
	var_439_string = ""; var_440_int = 0;
	var_414_int = var_440_int;
	func_1553(var_439_string, var_440_int);
	var_425_string = "armor_" + var_439_string;
	var_445_bool = 0; var_446_object = Obj(); var_447_string = "";
	var_412_object = var_446_object;
	var_425_string = var_447_string;
	func_1587(var_445_bool, var_446_object, var_447_string);
	var_448_bool = var_445_bool == 0; //@nz
	if(var_448_bool != 0) {
		var_426_int = 0;
	} else {
		@@var_412_object:GetProperty(var_425_string, var_426_int);

	}
	var_449_float = 0; var_450_float = 0; var_451_float = 0;
	var_452_int = var_424_int + var_426_int;
	var_450_float = var_452_int / (float)100.0;
	func_2072(var_449_float, var_450_float, (float)1);
	var_449_float = var_427_float;
	@@var_412_object:GetProperty("health", var_428_float);
	var_457_int = (int)1 - var_427_float;
	var_429_float = var_413_float * var_457_int;
	var_459_float = 0; var_460_float = 0; var_461_float = 0; var_462_float = 0;
	var_460_float = var_428_float - var_429_float;
	func_2079(var_459_float, var_460_float, (float)0, (float)1);
	@@var_412_object:SetProperty("health", var_459_float);
	var_465_bool = 0; var_466_object = Obj();
	var_412_object = var_466_object;
	func_1582(var_465_bool, var_466_object);
	if(var_465_bool != 0) {
		var_467_float = 0;
		var_467_float = -var_429_float;
		func_2090(var_467_float);
	}
	var_429_float = var_411_float;
	return 12;
	
}


func_2119(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	IsPlayerActor(var_22_object, var_24_bool);
	var_25_bool = var_24_bool;
	if(var_25_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1097(var_2_object, var_5_int)
{
	var_379_float = 0; var_380_int = 0; var_381_float = 0; var_382_int = 0;
	var_383_bool = var_2_object == 0; //@nz
	if(var_383_bool != 0) {
		return 4;
	}
	var_384_int = var_5_int;
	if(var_384_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_387_bool = var_5_int > (int)0;
		if(var_387_bool != 0) {
			return 4;
		}
	}
	rand(var_381_float);
	var_388_float = 0;
	func_1147(var_388_float);
	var_389_bool = var_381_float < var_388_float;
	if(var_389_bool != 0) {
		irand(var_382_int, var_2_object);
		var_382_int = var_382_int + (int)1;
		var_392_int = "attack" + var_382_int;
		Speak(var_392_int);
		var_393_int = 0;
		func_1145(var_393_int);
		var_5_int = var_393_int;
	}
	return 4;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_603_object, var_604_object)
{
	var_0_object = var_604_object;
	var_1_object = var_603_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_610_string = "";
		func_132(var_604_object, "Neutral");
		@@@var_0_object:SetMessage((int)530939);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)530940, (int)-1, (int)32267);
		@@@var_0_object:AddReply((int)530966, (int)-1, (int)32287);
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	var_634_bool = 0;
	func_2248(var_634_bool);
	if(var_634_bool != 0) {

	Label_106:
		lshWaitForAnimEnd();
		var_635_string = var_3_string;
		if(var_635_string != 0) {
		} else {
			var_636_string = "";
			var_636_string = var_2_object;
			func_1966(var_636_string);
			goto Label_106;
	}
		PlayAnimation("all", "idle");

	Label_121:
		WaitForAnimEnd();
		var_649_string = var_3_string;
		if(var_649_string != 0) {
			goto Label_131;
		}
		PlayAnimation("all", "idle");
		goto Label_121;
	}
	goto Label_131;
	
Label_131:
	return 0;
	
}


func_2128()
{
	var_372_object = Obj(); var_373_object = Obj();
	GetScene(var_373_object);
	var_375_object = Obj();
	func_2056(var_375_object);
	BroadcastMessage("battle", var_375_object, var_373_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2139(var_51_string, var_52_int)
{
	var_53_string = ""; var_54_string = "";
	var_55_int = var_52_int;
	if(var_55_int != 0) {
		"idle" = "idle" + var_52_int;
	}
	var_54_string = var_51_string;
	return 2;
}


func_2146(var_45_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0;
	var_48_int = 0;
	
Label_2148:
	var_51_string = ""; var_52_int = 0;
	var_48_int = var_52_int;
	func_2139(var_51_string, var_52_int);
	HasAnimation(var_49_bool, "all", var_51_string);
	var_56_bool = var_49_bool == 0; //@nz
	if(var_56_bool != 0) {
	} else {
		var_48_int = var_48_int + (int)1;
		goto Label_2148;
	}
	var_48_int = var_45_int;
	return 4;
	
}


func_1129(var_0_object)
{
	var_135_object = Obj();
	var_135_object = var_0_object;
	func_2119(var_135_object);
	return 0;
}


func_1134(var_476_int)
{
	var_476_int = 0;
	return 0;
}


func_1136()
{
	var_268_string = "";
	func_2015("attack_stay");
	return 0;
}


func_2163(var_594_int)
{
	var_595_int = 0; var_596_int = 0;
	GetVariable("branch", var_596_int);
	var_599_bool = var_596_int == (int)0;
	if(var_599_bool != 0) {
		var_594_int = 1;
		return 2;
	EMIT "GOTO 0x882";
	}
	var_601_bool = var_596_int == (int)1;
	if(var_601_bool != 0) {
		var_594_int = 2;
		return 2;
	}
	var_594_int = 3;
	return 2;
}


func_1141()
{
	return 0;
}


func_1143(var_501_bool)
{
	var_501_bool = 1;
	return 0;
}


func_1145(var_393_int)
{
	var_393_int = 1;
	return 0;
}


func_1147(var_388_float)
{
	var_388_float = 0.5;
	return 0;
}


func_1149(var_2_object, var_142_bool, var_143_object, var_144_float, var_145_float, var_146_bool, var_147_bool)
{
	var_151_bool = 0; var_152_bool = 0; var_153_bool = 0; var_154_bool = 0;
	var_155_object = Obj();
	var_143_object = var_155_object;
	func_2119(var_155_object);
	SetTimer((int)1, (int)5);
	CanSee(var_153_bool, var_143_object);
	var_158_bool = var_153_bool;
	if(var_158_bool != 0) {
		var_2_object = true;
		var_159_object = Obj();
		var_143_object = var_159_object;
		func_1997(var_159_object);
	} else {
		var_2_object = false;
	}
	var_166_bool = 0; var_167_object = Obj();
	var_143_object = var_167_object;
	func_1582(var_166_bool, var_167_object);
	if(var_166_bool != 0) {
		var_170_object = Obj();
		func_2056(var_170_object);
		SendPlayerEnemy(var_143_object, var_170_object);
	}
	var_171_bool = 0; var_172_object = Obj(); var_173_float = 0; var_174_float = 0; var_175_bool = 0; var_176_bool = 0;
	var_143_object = var_172_object;
	var_144_float = var_173_float;
	var_145_float = var_174_float;
	var_146_bool = var_175_bool;
	var_147_bool = var_176_bool;
	func_1254(var_153_bool, var_154_bool, var_171_bool, var_172_object, var_173_float, var_174_float, var_175_bool, var_176_bool);
	var_171_bool = var_154_bool;
	var_222_object = var_2_object;
	if(var_222_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_154_bool = var_142_bool;
	return 4;
	
}


func_132(var_2_object, var_610_string)
{
	var_611_bool = 0;
	func_2248(var_611_bool);
	var_612_bool = var_611_bool == 0; //@nz
	if(var_612_bool != 0) {
		return 0;
	}
	var_613_bool = var_610_string == var_2_object;
	if(var_613_bool != 0) {
		return 0;
	}
	var_614_string = ""; var_615_bool = 0;
	var_610_string = var_614_string;
	var_617_bool = var_610_string == "";
	if(var_617_bool != 0) {
		var_615_bool = 0;
	} else {
		var_615_bool = 1;
	}
	func_1982(var_614_string, var_615_bool);
	var_2_object = var_610_string;
	return 0;
	
}


func_2180(var_26_int)
{
	var_27_int = 0; var_28_int = 0;
	GetVariable("branch", var_28_int);
	var_28_int = var_26_int;
	return 2;
}


func_1672(var_47_bool, var_48_object)
{
	var_49_bool = 0; var_50_bool = 0;
	@@var_48_object:IsDead(var_50_bool);
	var_50_bool = var_47_bool;
	return 2;
}


func_2186(var_23_object)
{
	var_24_int = 0;
	func_2180(var_24_int);
	var_29_bool = var_24_int == (int)1;
	if(var_29_bool != 0) {
		WorkWithCorpse(var_23_object);
	} else {
		Barter(var_23_object);
	}
	return 0;
	
}


func_1677(var_36_bool, var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj();
	var_42_bool = var_37_object == 0; //@ne
	if(var_42_bool != 0) {
		var_36_bool = 0;
		return 4;
	}
	var_43_bool = 0;
	var_43_bool = 0;
	var_46_bool = IsFuncExist(var_37_object, "IsDead", (int)1);
	if(var_46_bool != 0) {
		var_47_bool = 0; var_48_object = Obj();
		var_37_object = var_48_object;
		func_1672(var_47_bool, var_48_object);
		if(var_47_bool != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		var_36_bool = 0;
		return 4;
	}
	GetScene(var_40_object);
	var_51_bool = var_40_object == 0; //@ne
	if(var_51_bool != 0) {
		var_36_bool = 0;
		return 4;
	}
	@@var_37_object:GetScene(var_41_object);
	var_52_bool = var_40_object != var_41_object;
	if(var_52_bool != 0) {
		var_36_bool = 0;
		return 4;
	}
	var_36_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2199(var_32_string)
{
	var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_object = Obj(); var_37_int = 0; var_38_bool = 0;
	CreateInvItem(var_36_object);
	@@var_36_object:SetItemName(var_32_string);
	@@var_36_object:SetProperty("Organ", (int)1);
	@@var_36_object:GetItemID(var_37_int);
	AddItem(var_38_bool, var_36_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_2216()
{
	var_26_int = 0;
	func_2180(var_26_int);
	var_31_bool = var_26_int != (int)1;
	if(var_31_bool != 0) {
		return 0;
	}
	var_32_string = "";
	func_2199("liver");
	var_43_string = "";
	func_2199("kidney");
	var_44_string = "";
	func_2199("heart");
	var_45_string = "";
	func_2199("blood");
	return 0;
}


func_1713(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0;
	var_36_bool = 0; var_37_object = Obj();
	var_33_object = var_37_object;
	func_1677(var_36_bool, var_37_object);
	var_53_bool = var_36_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	var_54_bool = 0; var_55_object = Obj(); var_56_string = "";
	var_33_object = var_55_object;
	func_1587(var_54_bool, var_55_object, "noaccess");
	var_63_bool = var_54_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_32_bool = 1;
		return 2;
	}
	@@var_33_object:GetProperty("noaccess", var_35_int);
	var_32_bool = var_35_int == (int)0;
	return 2;
}


func_1212(var_2_object)
{
	KillTimer((int)1);
	var_21_object = var_2_object;
	if(var_21_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1378(var_19_object);
	return 0;
}


func_2240(var_591_int)
{
	var_591_int = 515572;
	return 0;
}


func_2242(var_590_int)
{
	var_590_int = 504031;
	return 0;
}


func_2244(var_592_string)
{
	var_592_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_2246(var_593_string)
{
	var_593_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_2248(var_585_bool)
{
	var_585_bool = 0;
	return 0;
}


func_1737(var_36_object)
{
	var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; var_44_bool = 0; var_45_int = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_string = "";
	var_51_bool = var_36_object == 0; //@ne
	if(var_51_bool != 0) {
		return 14;
	}
	IsDead(var_44_bool);
	var_52_bool = var_44_bool;
	if(var_52_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_45_int);
	var_54_bool = var_45_int < (int)0;
	if(var_54_bool != 0) {
		return 14;
	}
	@@var_36_object:GetPosition(var_46_cvector);
	GetPosition(var_47_cvector);
	GetDirection(var_48_cvector);
	var_49_cvector = var_47_cvector - var_46_cvector;
	var_55_float = GetByIndex(var_49_cvector, 0);
	var_56_float = GetByIndex(var_48_cvector, 0);
	var_57_float = var_55_float * var_56_float;
	var_58_float = GetByIndex(var_49_cvector, 2);
	var_59_float = GetByIndex(var_48_cvector, 2);
	var_60_float = var_58_float * var_59_float;
	var_61_int = var_57_float + var_60_float;
	var_63_bool = var_61_int >= (int)0;
	if(var_63_bool != 0) {
		var_50_string = "fhit";
	} else {
		var_50_string = "bhit";
	}
	var_66_int = var_50_string + "1";
	var_68_int = var_50_string + "2";
	FadeSecondaryAnimation("hit_react", var_66_int, var_68_int, (int)-10);
	return 14;
	
}


func_2250(var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	GetVariable("b1q05ToAttack1", var_23_int);
	var_21_bool = var_23_int != (int)0;
	return 2;
}


func_716(var_1_object, var_2_object, var_4_bool)
{
	var_96_bool = 0; var_97_bool = 0; var_98_cvector = CVector(0,0,0); var_99_bool = 0; var_100_bool = 0; var_101_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_718:
	var_105_int = var_1_object + (int)1;
	var_106_int = "attack_begin" + var_105_int;
	HasAnimation(var_99_bool, "all", var_106_int);
	var_107_bool = var_99_bool == 0; //@nz
	if(var_107_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_718;
	}
	var_2_object = 0;
	
Label_732:
	var_110_int = var_2_object + (int)1;
	var_111_int = "attack" + var_110_int;
	IsExisting3DSound(var_100_bool, var_111_int);
	var_112_bool = var_100_bool == 0; //@nz
	if(var_112_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_732;

	}
	GetAnimationOffset(var_101_cvector, "all", "bjump");
	var_115_float = GetByIndex(var_101_cvector, 2);
	var_4_bool = -var_115_float;
	return 6;
	
}


func_2257()
{
	SetVariable("b1q05ToAttack1", (int)1);
	return 0;
}


func_2262(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj();
	GetScene(var_22_object);
	var_23_object = Obj();
	func_2056(var_23_object);
	@@var_22_object:RemoveStationaryActor(var_23_object);
	func_2216();
	var_46_object = Obj();
	var_20_object = var_46_object;
	TaskCall(5);
	func_1405(var_46_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1254(var_0_object, var_1_object, var_171_bool, var_172_object, var_173_float, var_174_float, var_175_bool, var_176_bool)
{
	var_177_bool = 0; var_178_bool = 0; var_179_object = Obj(); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_float = 0; var_184_object = Obj(); var_185_bool = 0; var_186_bool = 0; var_187_object = Obj(); var_188_cvector = CVector(0,0,0); var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_float = 0; var_192_object = Obj();
	var_0_object = false;
	var_1_object = var_172_object;
	var_176_bool = var_186_bool;
	
Label_1258:
	var_193_bool = 0; var_194_object = Obj();
	var_172_object = var_194_object;
	func_1394(var_193_bool, var_194_object);
	var_197_bool = var_193_bool == 0; //@nz
	if(var_197_bool != 0) {
		var_171_bool = 0;
		return 16;
	}
	@@var_172_object:GetPosition(var_188_cvector);
	GetPosition(var_189_cvector);
	var_190_cvector = var_188_cvector - var_189_cvector;
	var_191_float = var_190_cvector | var_190_cvector;
	var_198_bool = 0;
	var_198_bool = 0;
	var_200_bool = var_174_float > (int)0;
	if(var_200_bool != 0) {
		var_201_float = var_174_float * var_174_float;
		var_202_bool = var_191_float > var_201_float;
		if(var_202_bool != 0) {
			var_198_bool = 1;
		}
	}
	if(var_198_bool != 0) {
		Stop();
		var_171_bool = 0;
		return 16;
	}
	var_203_float = var_173_float * var_173_float;
	var_204_bool = var_191_float > var_203_float;
	if(var_204_bool != 0) {
		@@var_172_object:GetPFPosition(var_188_cvector);
		FindPathTo(var_192_object, var_188_cvector);
		var_205_bool = var_192_object != 0; //@nn
		if(var_205_bool != 0) {
			var_192_object = var_187_object;
			var_192_object = 0;
		}
		var_206_bool = var_187_object != 0; //@nn
		if(var_206_bool != 0) {
			var_207_bool = var_186_bool;
			if(var_207_bool == 0) goto Label_1307;
			var_186_bool = 0;
			RotatePath(var_187_object, var_185_bool);
			var_208_bool = var_185_bool == 0; //@nz
			if(var_208_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_211_string = "";
				func_1401(var_211_string);
				var_212_string = "";
				func_1403(var_212_string);
				FollowPath(var_187_object, var_175_bool, var_185_bool, var_211_string, var_212_string);
				var_213_bool = var_185_bool == 0; //@nz
				if(var_213_bool != 0) {
					var_214_object = var_0_object;
					if(var_214_object != 0) {
						var_187_object = 0;
						goto Label_1354;
					EMIT "GOTO 0x52f";
					}
				} else {
					var_187_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_185_bool);
					var_217_bool = var_185_bool == 0; //@nz
					if(var_217_bool != 0) {
						var_218_object = var_0_object;
						if(var_218_object != 0) {
							var_187_object = 0;
							goto Label_1354;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1354;
	}
			var_192_object = 0;
			goto Label_1352;

		Label_1352:
			var_187_object = 0;

		}
		goto Label_1258;
	}
Label_1354:
	var_171_bool = !var_0_object;
	return 16;
	
}


func_751(var_0_object, var_397_float, var_398_int)
{
	var_399_object = Obj(); var_400_float = 0; var_401_float = 0; var_402_object = Obj(); var_403_float = 0; var_404_float = 0;
	var_406_float = var_397_float * (float)0.8999999761581421;
	GetVictim(var_406_float, var_402_object);
	ReportAttack(var_0_object);
	var_407_bool = var_402_object == var_0_object;
	if(var_407_bool != 0) {
		var_408_float = 0; var_409_object = Obj(); var_410_int = 0;
		var_402_object = var_409_object;
		var_398_int = var_410_int;
		func_481(var_410_int);
		var_408_float = var_403_float;
		var_411_float = 0; var_412_object = Obj(); var_413_float = 0; var_414_int = 0;
		var_402_object = var_412_object;
		var_403_float = var_413_float;
		var_415_int = 0; var_416_object = Obj(); var_417_int = 0;
		var_402_object = var_416_object;
		var_398_int = var_417_int;
		func_484(var_417_int);
		var_415_int = var_414_int;
		func_1599(var_411_float, var_412_object, var_413_float, var_414_int);
		var_411_float = var_404_float;
		var_476_int = 0;
		func_1134(var_476_int);
		ReportHit(var_0_object, var_476_int, var_404_float, var_403_float);
		var_477_object = Obj(); var_478_float = 0;
		var_402_object = var_477_object;
		var_404_float = var_478_float;
		func_1141();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1781(var_23_object, var_24_int, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_int = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0);
	var_44_bool = 0;
	var_44_bool = 0;
	var_45_bool = 0;
	var_45_bool = 0;
	var_46_object = var_23_object;
	if(var_46_object != 0) {
		var_48_bool = var_24_int != (int)4;
		if(var_48_bool != 0) {
			var_45_bool = 1;
		}
	}
	if(var_45_bool != 0) {
		var_50_bool = var_24_int != (int)5;
		if(var_50_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
		var_53_cvector = CVector(0,0,0); var_54_object = Obj();
		var_23_object = var_54_object;
		func_1567(var_53_cvector, var_54_object);
		var_53_cvector = var_52_cvector;
		func_2062(var_51_cvector, var_52_cvector);
		var_51_cvector = var_35_cvector;
		CreateVectorVector(var_36_object);
		var_37_int = 1;

	Label_1810:
		var_65_int = "hit" + var_37_int;
		GetGeometryLocator(var_65_int, var_38_bool, var_39_cvector, var_40_cvector);
		var_66_bool = var_38_bool == 0; //@nz
		if(var_66_bool != 0) {
		} else {
			var_114_int = var_40_cvector | var_35_cvector;
			var_116_bool = var_114_int >= (float)0.7071067690849304;
			if(var_116_bool != 0) {
				@@var_36_object:add(var_39_cvector);
			}
			var_37_int = var_37_int + (int)1;
			goto Label_1810;
		}
		@@var_36_object:size(var_41_int);
		var_67_int = var_41_int;
		if(var_67_int != 0) {
			irand(var_42_int, var_41_int);
			@@var_36_object:get(var_43_cvector, var_42_int);
			var_68_object = Obj(); var_69_int = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
			var_23_object = var_68_object;
			var_24_int = var_69_int;
			var_25_float = var_70_float;
			var_43_cvector = var_71_cvector;
			var_72_cvector = -var_35_cvector;
			func_1849(var_70_float, var_71_cvector, var_72_cvector);
			return 18;
		}
		var_36_object = 0;
	}
	var_113_object = Obj();
	var_23_object = var_113_object;
	func_1737(var_113_object);
	return 18;
	
}


func_790(var_0_object, var_1_object, var_360_bool, var_361_float)
{
	var_362_int = 0; var_363_bool = 0; var_364_int = 0; var_365_string = ""; var_366_int = 0; var_367_bool = 0; var_368_int = 0; var_369_string = "";
	func_1129(var_369_string);
	irand(var_366_int, var_1_object);
	var_366_int = var_366_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2128();
	var_378_int = "attack_begin" + var_366_int;
	PlayAnimation("all", var_378_int);
	WaitForAnimEnd();
	func_1097(var_368_int, var_369_string);
	var_394_bool = 0; var_395_object = Obj();
	var_395_object = var_0_object;
	func_1713(var_394_bool, var_395_object);
	var_396_bool = var_394_bool == 0; //@nz
	if(var_396_bool != 0) {
		StopAsync();
		var_360_bool = 0;
		return 8;
	}
	var_397_float = 0; var_398_int = 0;
	var_361_float = var_397_float;
	var_366_int = var_398_int;
	func_751(var_369_string, var_397_float, var_398_int);
	var_481_int = "attack_middle" + var_366_int;
	HasAnimation(var_367_bool, "all", var_481_int);
	var_482_bool = var_367_bool;
	if(var_482_bool != 0) {
		func_2128();
		var_485_int = "attack_middle" + var_366_int;
		PlayAnimation("all", var_485_int);
		WaitForAnimEnd();
		func_1129(var_369_string);
		var_486_bool = 0; var_487_object = Obj();
		var_487_object = var_0_object;
		func_1713(var_486_bool, var_487_object);
		var_488_bool = var_486_bool == 0; //@nz
		if(var_488_bool != 0) {
			StopAsync();
			var_360_bool = 0;
			return 8;
		}
		var_489_float = 0; var_490_int = 0;
		var_361_float = var_489_float;
		var_366_int = var_490_int;
		func_751(var_369_string, var_489_float, var_490_int);
		var_368_int = 1;

	Label_867:
		var_492_int = "attack_middle" + var_366_int;
		var_494_int = var_492_int + "_";
		var_369_string = var_494_int + var_368_int;
		HasAnimation(var_367_bool, "all", var_369_string);
		var_496_bool = var_367_bool == 0; //@nz
		if(var_496_bool != 0) {
		} else {
			func_2128();
			PlayAnimation("all", var_369_string);
			WaitForAnimEnd();
			func_1129(var_369_string);
			var_512_bool = 0; var_513_object = Obj();
			var_513_object = var_0_object;
			func_1713(var_512_bool, var_513_object);
			var_514_bool = var_512_bool == 0; //@nz
			if(var_514_bool != 0) {
				StopAsync();
				var_360_bool = 0;
				var_515_float = 0; var_516_int = 0;
				var_361_float = var_515_float;
				var_366_int = var_516_int;
				func_751(var_369_string, var_515_float, var_516_int);
				var_368_int = var_368_int + (int)1;
				goto Label_867;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_500_int = "attack_end" + var_366_int;
	PlayAnimation("all", var_500_int);
	var_501_bool = 0;
	func_1143(var_501_bool);
	if(var_501_bool != 0) {
		var_502_bool = 0; var_503_float = 0;
		func_927(var_502_bool, (float)0.75);
		StopAsync();
	}
	var_360_bool = 1;
	return 8;
	
}


func_304(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_20_float, var_21_float)
{
	var_22_bool = 0;
	func_1874(var_22_bool);
	var_25_bool = var_22_bool == 0; //@nz
	if(var_25_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_20_float;
	var_1_object = var_21_float;
	SetTimer((int)10, (float)1.0);
	func_383();
	var_80_bool = var_3_string == 0; //@nz
	if(var_80_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1849(var_25_object, var_28_cvector, var_29_cvector)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj();
	GetScene(var_32_object);
	AddActorByType(var_33_object, "scripted", var_32_object, var_28_cvector, var_29_cvector, "blood_dir.xml");
	var_36_object = Obj();
	var_25_object = var_36_object;
	func_1737(var_36_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1863(var_245_object)
{
	var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0); var_248_cvector = CVector(0,0,0); var_249_cvector = CVector(0,0,0); var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0);
	@@var_245_object:GetPosition(var_249_cvector);
	GetPosition(var_250_cvector);
	var_251_cvector = var_249_cvector - var_250_cvector;
	var_252_float = GetByIndex(var_251_cvector, 0);
	var_253_float = GetByIndex(var_251_cvector, 2);
	RotateAsync(var_252_float, var_253_float);
	return 6;
}


func_331(var_0_object, var_1_object, var_4_bool, var_22_bool)
{
	var_23_float = 0; var_24_float = 0;
	var_25_bool = var_4_bool == 0; //@ne
	if(var_25_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	var_26_float = 0; var_27_object = Obj();
	var_27_object = var_4_bool;
	func_1574(var_26_float, var_27_object);
	var_24_float = sqrt(var_26_float);
	var_34_object = var_2_object;
	if(var_34_object != 0) {
		var_24_float = var_24_float - var_1_object;
	}
	var_22_bool = var_24_float < var_0_object;
	return 2;
}


func_1356(var_0_object, var_1_object, var_27_int)
{
	var_29_bool = var_27_int != (int)0;
	if(var_29_bool != 0) {
		return 0;
	}
	var_30_bool = 0; var_31_object = Obj();
	var_31_object = var_1_object;
	func_1394(var_30_bool, var_31_object);
	var_66_bool = var_30_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1874(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0;
	IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
	return 2;
}


func_1879(var_542_bool, var_543_object, var_544_float)
{
	var_545_float = 0; var_546_cvector = CVector(0,0,0); var_547_cvector = CVector(0,0,0); var_548_cvector = CVector(0,0,0); var_549_cvector = CVector(0,0,0); var_550_cvector = CVector(0,0,0); var_551_cvector = CVector(0,0,0); var_552_bool = 0; var_553_bool = 0; var_554_float = 0; var_555_cvector = CVector(0,0,0); var_556_cvector = CVector(0,0,0); var_557_cvector = CVector(0,0,0); var_558_cvector = CVector(0,0,0); var_559_cvector = CVector(0,0,0); var_560_cvector = CVector(0,0,0); var_561_bool = 0; var_562_bool = 0;
	@@var_543_object:GetPosition(var_555_cvector);
	@@var_543_object:GetEyesHeight(var_554_float);
	var_563_float = GetByIndex(var_555_cvector, 1);
	var_563_float = var_563_float + var_554_float;
	SetByIndex(var_555_cvector, 1) = var_563_float;
	GetPosition(var_556_cvector);
	GetEyesHeight(var_554_float);
	var_564_float = GetByIndex(var_556_cvector, 1);
	var_564_float = var_564_float + var_554_float;
	SetByIndex(var_556_cvector, 1) = var_564_float;
	var_557_cvector = var_555_cvector - var_556_cvector;
	var_565_float = GetByIndex(var_557_cvector, 1);
	SetByIndex(var_557_cvector, 1) = (float)0;
	var_566_int = var_557_cvector | var_557_cvector;
	var_567_float = sqrt(var_566_int);
	var_557_cvector = var_557_cvector / var_567_float;
	var_558_cvector = -var_557_cvector;
	var_568_float = var_557_cvector * var_544_float;
	var_569_cvector = CVector(0,0,0); var_570_cvector = CVector(0,0,0);
	var_570_cvector = var_558_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2062(var_569_cvector, var_570_cvector);
	var_578_float = var_569_cvector * (int)25;
	var_579_int = var_568_float + var_578_float;
	var_559_cvector = var_579_int - CVector(0.0, 10.0, 0.0);
	var_560_cvector = var_556_cvector + var_559_cvector;
	IsOverrideActive(var_561_bool);
	var_581_bool = var_561_bool;
	if(var_581_bool != 0) {
		var_542_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_560_cvector, var_558_cvector, (bool)1);
	var_583_float = GetByIndex(var_559_cvector, 0);
	var_584_float = GetByIndex(var_559_cvector, 2);
	Rotate(var_583_float, var_584_float);
	var_585_bool = 0;
	func_2248(var_585_bool);
	if(var_585_bool != 0) {
	} else {
		HasAnimationTrack(var_562_bool, "head");
		var_587_bool = var_562_bool;
		if(var_587_bool == 0) goto Label_1942;
		LookAsyncCamera("head");
	}
Label_1942:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_542_bool = 1;
	return 18;
	
}


func_1378(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_369(var_2_object, var_3_string)
{
	func_464();
	KillTimer((int)10);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_1394(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj();
	var_31_object = var_33_object;
	func_1713(var_32_bool, var_33_object);
	var_32_bool = var_30_bool;
	return 0;
}


func_1401(var_211_string)
{
	var_211_string = "walk";
	return 0;
}


func_1403(var_212_string)
{
	var_212_string = "run";
	return 0;
}


func_1405(var_46_object)
{
	EventDisable(0);
	var_47_object = Obj();
	var_46_object = var_47_object;
	func_1430(var_47_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1416:
	Hold();
	goto Label_1416;
}
EMIT "Return(); Pop(0)";


func_383()
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_bool = 0;
	WaitForAnimEnd();
	var_43_bool = 0;
	func_1874(var_43_bool);
	var_44_bool = var_43_bool == 0; //@nz
	if(var_44_bool != 0) {
		return 14;
	}
	func_2146((int)0);
	var_45_int = var_36_int;
	var_37_int = 0;
	
Label_397:
	var_58_bool = 0;
	var_58_bool = 0;
	var_60_bool = var_37_int < (int)5;
	if(var_60_bool != 0) {
		var_61_bool = 0;
		func_1874(var_61_bool);
		if(var_61_bool != 0) {
			var_58_bool = 1;
		}
	}
	if(var_58_bool != 0) {
		irand(var_38_int, (int)3);
		var_64_bool = var_38_int == (int)0;
		if(var_64_bool != 0) {
			var_65_int = var_36_int;
			if(var_65_int == 0) goto Label_430;
			irand(var_39_int, var_36_int);
			var_67_string = ""; var_68_int = 0;
			var_39_int = var_68_int;
			func_2139(var_67_string, var_68_int);
			PlayAnimation("all", var_67_string);
			WaitForAnimEnd(var_40_bool);
			var_69_bool = var_40_bool == 0; //@nz
			if(var_69_bool != 0) {
			} else {
		} else {
				var_74_bool = var_38_int == (int)1;
				if(var_74_bool != 0) {
					rand(var_41_float, (int)4);
					var_77_int = var_41_float + (int)1;
					Sleep(var_77_int, var_42_bool);
					var_78_bool = var_42_bool == 0; //@nz
					if(var_78_bool != 0) {
						goto Label_459;
					}
					goto Label_448;
				}
				var_79_int = var_37_int;
				if(var_79_int == 0) goto Label_448;
				goto Label_459;
		}
		Label_448:
			var_70_bool = 0;
			func_462(var_70_bool);
			var_71_bool = var_70_bool == 0; //@nz
			if(var_71_bool != 0) {
				goto Label_459;
			}
			ResetAAS();
			var_37_int = var_37_int + (int)1;
			goto Label_397;

		}
	}
Label_459:
	ResetAAS();
	return 14;
	
}


func_1430(var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_string = ""; var_53_object = Obj(); var_54_bool = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_string = ""; var_63_object = Obj(); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0);
	var_68_bool = var_47_object == 0; //@ne
	if(var_68_bool != 0) {
		var_69_string = "";
		func_1521("fdie");
	} else {
		@@var_47_object:GetPosition(var_58_cvector);
		GetPosition(var_59_cvector);
		GetDirection(var_60_cvector);
		var_61_cvector = var_59_cvector - var_58_cvector;
		var_101_float = GetByIndex(var_61_cvector, 0);
		var_102_float = GetByIndex(var_60_cvector, 0);
		var_103_float = var_101_float * var_102_float;
		var_104_float = GetByIndex(var_61_cvector, 2);
		var_105_float = GetByIndex(var_60_cvector, 2);
		var_106_float = var_104_float * var_105_float;
		var_107_int = var_103_float + var_106_float;
		var_109_bool = var_107_int >= (int)0;
		if(var_109_bool != 0) {
			var_62_string = "fdie";
		} else {
				var_62_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_47_object = var_63_object;
		var_112_bool = IsFuncExist(var_47_object, "GetScriptProperty", (int)2);
		if(var_112_bool != 0) {
			@@var_47_object:HasScriptProperty(var_64_bool, "Owner");
			var_114_bool = var_64_bool;
			if(var_114_bool != 0) {
				@@var_47_object:GetScriptProperty(var_63_object, "Owner");
				var_116_bool = var_63_object == 0; //@ne
				if(var_116_bool != 0) {
					var_47_object = var_63_object;
				}
			}
		}
		var_119_bool = IsFuncExist(var_63_object, "@GetEyesHeight", (int)1);
		if(var_119_bool != 0) {
			@@var_63_object:GetEyesHeight(var_66_float);
			var_67_cvector = CVector(0.0, 0.0, 0.0);
			var_120_float = GetByIndex(var_67_cvector, 1);
			var_66_float = var_120_float;
			SetByIndex(var_67_cvector, 1) = var_120_float;
			LookAsync(var_47_object, "head", var_67_cvector);
			var_65_bool = 1;
		} else {
			var_65_bool = 0;

		}
		var_122_string = "";
		var_62_string = var_122_string;
		func_2015(var_122_string);
		PlayAnimation("all", var_62_string);
		WaitForAnimEnd();
		var_124_bool = var_65_bool;
		if(var_124_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_62_string);
		RemoveEnvelope();
		var_63_object = 0;
	}
	return 20;
	
}


func_1948()
{
	var_654_bool = 0; var_655_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_657_bool = 0;
	func_2248(var_657_bool);
	if(var_657_bool != 0) {
	} else {
		HasAnimationTrack(var_655_bool, "head");
		var_659_bool = var_655_bool;
		if(var_659_bool == 0) goto Label_1965;
		UnlookAsync("head");
	}
Label_1965:
	return 2;
	
}


func_927(var_502_bool, var_503_float)
{
	var_504_float = 0; var_505_bool = 0; var_506_float = 0; var_507_bool = 0;
	rand(var_506_float);
	var_508_bool = var_506_float < var_503_float;
	if(var_508_bool != 0) {

	Label_932:
		IsAnimationPlaying(var_507_bool);
		var_509_bool = var_507_bool == 0; //@nz
		if(var_509_bool != 0) {
		} else {
			var_510_bool = 0;
			func_1025(var_510_bool);
			if(var_510_bool != 0) {
				var_502_bool = 1;
				sync();
				goto Label_932;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1129(var_507_bool);
	}
	goto Label_952;
	
Label_952:
	var_502_bool = 0;
	return 4;
	
}


func_1966(var_636_string)
{
	var_637_bool = 0; var_638_float = 0; var_639_float = 0; var_640_bool = 0; var_641_float = 0; var_642_float = 0;
	lshHasAnimation(var_640_bool, var_636_string);
	var_643_bool = var_640_bool;
	if(var_643_bool != 0) {
		lshGetAnimTimes(var_636_string, var_641_float, var_642_float);
		lshPlayAnimation(var_641_float, var_642_float, (bool)0);
	} else {
		var_646_int = "Can't find lsh animation : " + var_636_string;
		Trace(var_646_int);
	}
	return 6;
	
}


func_954(var_0_object, var_299_bool, var_300_float)
{
	var_301_bool = 0; var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_float = 0; var_306_bool = 0; var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_float = 0;
	
Label_955:
	IsAnimationPlaying(var_306_bool);
	var_311_bool = var_306_bool == 0; //@nz
	if(var_311_bool != 0) {
	} else {
		var_312_bool = 0;
		func_1025(var_312_bool);
		if(var_312_bool != 0) {
			var_299_bool = 1;
			return 10;
		}
		var_355_bool = 0; var_356_object = Obj();
		var_356_object = var_0_object;
		func_1713(var_355_bool, var_356_object);
		var_357_bool = var_355_bool == 0; //@nz
		if(var_357_bool != 0) {
			var_299_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_307_cvector);
		GetPFPosition(var_308_cvector);
		var_309_cvector = var_307_cvector - var_308_cvector;
		var_310_float = var_309_cvector | var_309_cvector;
		var_358_float = var_300_float * var_300_float;
		var_359_bool = var_310_float < var_358_float;
		if(var_359_bool != 0) {
			var_360_bool = 0; var_361_float = 0;
			var_300_float = var_361_float;
			func_790(var_309_cvector, var_310_float, var_360_bool, var_361_float);
			var_299_bool = 1;
			sync();
			goto Label_955;
		}
		return 10;
	}
	func_1129(var_310_float);
	var_299_bool = 0;
	return 10;
	
}


func_1982(var_614_string, var_615_bool)
{
	var_618_bool = 0; var_619_float = 0; var_620_float = 0; var_621_bool = 0; var_622_float = 0; var_623_float = 0;
	lshHasAnimation(var_621_bool, var_614_string);
	var_624_bool = var_621_bool;
	if(var_624_bool != 0) {
		lshGetAnimTimes(var_614_string, var_622_float, var_623_float);
		lshPlayAnimation(var_622_float, var_623_float, var_615_bool);
	} else {
		var_626_int = "Can't find lsh animation : " + var_614_string;
		Trace(var_626_int);
	}
	return 6;
	
}


func_1997(var_23_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0);
	@@var_23_object:GetEyesHeight(var_26_float);
	var_27_cvector = CVector(0.0, 0.0, 0.0);
	var_28_float = GetByIndex(var_27_cvector, 1);
	var_26_float = var_28_float;
	SetByIndex(var_27_cvector, 1) = var_28_float;
	LookAsync(var_23_object, "head", var_27_cvector);
	return 4;
}


func_462(var_70_bool)
{
	var_70_bool = 1;
	return 0;
}


func_464()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_469(var_64_object)
{
	
Label_470:
	var_71_object = Obj(); var_72_bool = 0; var_73_float = 0;
	var_64_object = var_71_object;
	func_487(var_67_int, var_68_bool, var_69_float, var_70_int, var_64_object, var_71_object, (bool)1, (float)180.0);
	Sleep((int)1);
	goto Label_470;
}
EMIT "Return(); Pop(0)";


func_2008()
{
	var_22_bool = 0;
	func_2248(var_22_bool);
	if(var_22_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2015(var_70_string)
{
	var_71_bool = 0; var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	IsExisting3DSound(var_79_bool, var_70_string);
	var_87_bool = var_79_bool == 0; //@nz
	if(var_87_bool != 0) {
		var_80_int = 0;

	Label_2021:
		var_89_int = var_80_int + (int)1;
		var_90_int = var_70_string + var_89_int;
		IsExisting3DSound(var_81_bool, var_90_int);
		var_91_bool = var_81_bool == 0; //@nz
		if(var_91_bool != 0) {
		} else {
			var_80_int = var_80_int + (int)1;
			goto Label_2021;
		}
		var_92_bool = var_80_int == 0; //@nz
		if(var_92_bool != 0) {
			return 16;
		}
		irand(var_82_int, var_80_int);
		var_94_int = var_82_int + (int)1;
		var_70_string = var_70_string + var_94_int;
	}
	Is3DSoundLoaded(var_83_bool, var_70_string);
	var_95_bool = var_83_bool;
	if(var_95_bool != 0) {
		GetEyesHeight(var_84_float);
		GetDirection(var_85_cvector);
		var_86_cvector = var_85_cvector * (int)50;
		var_97_float = GetByIndex(var_86_cvector, 1);
		var_97_float = var_97_float + var_84_float;
		SetByIndex(var_86_cvector, 1) = var_97_float;
		PlayGlobalSound(var_70_string, var_86_cvector);
	}
	return 16;
	
}


func_481(var_408_float)
{
	var_408_float = 0.10000000149011612;
	return 0;
}


func_484(var_415_int)
{
	var_415_int = 0;
	return 0;
}


func_997(var_0_object, var_314_bool)
{
	var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_float = 0; var_319_float = 0; var_320_cvector = CVector(0,0,0); var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); var_323_float = 0; var_324_float = 0;
	var_325_bool = 0; var_326_object = Obj();
	var_326_object = var_0_object;
	func_1713(var_325_bool, var_326_object);
	var_327_bool = var_325_bool == 0; //@nz
	if(var_327_bool != 0) {
		var_314_bool = 0;
		return 10;
	}
	var_328_bool = 0;
	func_1086(var_324_float, var_328_bool);
	if(var_328_bool != 0) {
		@@@var_0_object:GetPFPosition(var_320_cvector);
		GetPFPosition(var_321_cvector);
		var_322_cvector = var_320_cvector - var_321_cvector;
		var_323_float = var_322_cvector | var_322_cvector;
		@@@var_0_object:GetAttackDistance(var_324_float);
		var_324_float = var_324_float + (int)50;
		var_330_float = var_324_float * var_324_float;
		var_314_bool = var_323_float <= var_330_float;
		return 10;
	}
	var_314_bool = 0;
	return 10;
}


func_487(var_0_object, var_3_string, var_5_int, var_71_object, var_72_bool, var_73_float, var_148_bool, var_240_bool)
{
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_float = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_bool = 0; var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_float = 0;
	func_716(var_93_cvector, var_94_bool, var_95_float);
	var_5_int = 0;
	var_120_bool = IsFuncExist(var_71_object, "@GetAttackDistance", (int)1);
	if(var_120_bool != 0) {
		@@var_71_object:GetAttackDistance(var_85_float);
		var_85_float = var_85_float + (int)50;
	} else {
							var_73_float = var_85_float;
	}
	var_123_bool = var_85_float >= (int)150;
	if(var_123_bool != 0) {
		var_85_float = 150;
	}
	var_3_string = false;
	var_0_object = var_71_object;
	IsPlayerActor(var_0_object, var_88_bool);
	var_124_bool = var_88_bool;
	if(var_124_bool != 0) {
		PlayGlobalMusic("attack");
		var_126_object = Obj();
		func_2056(var_126_object);
		SendPlayerEnemy(var_71_object, var_126_object);
	}
	var_129_bool = var_72_bool;
	if(var_129_bool != 0) {
		var_89_bool = 0;
	} else {
						var_89_bool = 1;

	}
	var_90_float = (float)400.0 + var_85_float;
	
Label_527:
	var_131_bool = 0;
	var_131_bool = 0;
	var_132_bool = 0; var_133_object = Obj();
	var_133_object = var_0_object;
	func_1713(var_132_bool, var_133_object);
	if(var_132_bool != 0) {
		var_134_bool = var_3_string == 0; //@nz
		if(var_134_bool != 0) {
			var_131_bool = 1;
		}
	}
	if(var_131_bool != 0) {
		func_1129(var_95_float);
		@@@var_0_object:GetPFPosition(var_86_cvector);
		GetPFPosition(var_87_cvector);
		var_91_cvector = var_86_cvector - var_87_cvector;
		var_92_float = var_91_cvector | var_91_cvector;
		var_140_float = var_90_float * var_90_float;
		var_141_bool = var_92_float >= var_140_float;
		if(var_141_bool != 0) {
			var_142_bool = 0; var_143_object = Obj(); var_144_float = 0; var_145_float = 0; var_146_bool = 0; var_147_bool = 0;
			var_143_object = var_0_object;
			var_85_float = var_144_float;
			TaskCall(4);
			func_1149(var_150_bool, var_142_bool, var_143_object, var_144_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_225_bool = var_148_bool == 0; //@nz
			if(var_225_bool != 0) {
			} else {
				var_89_bool = 0;
		} else {
				var_231_float = var_73_float * var_73_float;
				var_232_bool = var_92_float >= var_231_float;
				if(var_232_bool != 0) {
					@@@var_0_object:GetPFPosition(var_93_cvector);
					CanReachByPF(var_94_bool, var_93_cvector);
					var_233_bool = var_94_bool == 0; //@nz
					if(var_233_bool != 0) {
						var_234_bool = 0; var_235_object = Obj(); var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_bool = 0;
						var_235_object = var_0_object;
						var_85_float = var_236_float;
						TaskCall(4);
						func_1149(var_242_bool, var_234_bool, var_235_object, var_236_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_243_bool = var_240_bool == 0; //@nz
						if(var_243_bool != 0) {
							goto Label_699;
						}
						var_89_bool = 0;
						goto Label_527;
					}
					var_244_bool = var_89_bool == 0; //@nz
					if(var_244_bool != 0) {
						var_245_object = Obj();
						var_245_object = var_0_object;
						func_1863(var_245_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1129(var_95_float);
						StopAsync();
						var_89_bool = 1;
						var_256_bool = 0; var_257_object = Obj();
						var_257_object = var_0_object;
						func_1713(var_256_bool, var_257_object);
						var_258_bool = var_256_bool == 0; //@nz
						if(var_258_bool != 0) {
							goto Label_699;
						}
					}
					rand(var_95_float);
					var_259_bool = 0;
					var_261_bool = var_95_float < (float)0.25;
					if(var_261_bool != 1) {
						var_262_bool = 0;
						func_1086((bool)1, var_262_bool);
						if(var_262_bool != 1) {
							var_259_bool = 0;
						}
					}
					if(var_259_bool != 0) {
						Face(var_0_object);
						func_1136();
						PlayAnimation("all", "attack_stay");
						var_299_bool = 0; var_300_float = 0;
						var_73_float = var_300_float;
						func_954(var_95_float, var_299_bool, var_300_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1129(var_95_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_521_bool = 0;
						func_1086(var_95_float, var_521_bool);
						var_522_bool = var_521_bool == 0; //@nz
						if(var_522_bool == 0) goto Label_689;
						var_523_bool = 0; var_524_object = Obj();
						var_524_object = var_0_object;
						func_1713(var_523_bool, var_524_object);
						var_525_bool = var_523_bool == 0; //@nz
						if(var_525_bool != 0) {
							goto Label_699;
						}
						@@@var_0_object:GetPFPosition(var_86_cvector);
						GetPFPosition(var_87_cvector);
						var_91_cvector = var_86_cvector - var_87_cvector;
						var_92_float = var_91_cvector | var_91_cvector;
						var_526_float = var_73_float * var_73_float;
						var_527_bool = var_92_float < var_526_float;
						if(var_527_bool == 0) goto Label_689;
						var_528_bool = 0; var_529_float = 0;
						var_73_float = var_529_float;
						func_790(var_94_bool, var_95_float, var_528_bool, var_529_float);
						var_530_bool = var_528_bool == 0; //@nz
						if(var_530_bool == 0) goto Label_689;
						goto Label_699;
				}
					var_531_bool = 0; var_532_float = 0;
					var_73_float = var_532_float;
					func_790(var_94_bool, var_95_float, var_531_bool, var_532_float);
					var_533_bool = var_531_bool == 0; //@nz
					if(var_533_bool != 0) {
						goto Label_699;
					}
					var_89_bool = 1;

				}
			Label_689:
				goto Label_698;
		}
		Label_698:
			goto Label_527;

		}
	}
Label_699:
	WaitForAnimEnd();
	var_226_string = var_3_string;
	if(var_226_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_229_bool = var_88_bool;
	if(var_229_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1521(var_69_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_70_string = "";
	var_69_string = var_70_string;
	func_2015(var_70_string);
	PlayAnimation("all", var_69_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_69_string);
	RemoveEnvelope();
	return 0;
}


