// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,SetRTEnvelope/2,Hold/0,WorkWithCorpse/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Face/1,Sleep/2,KillTimer/1,StopGroup0/0,SetTimer/2,CanSee/2,WaitForAnimEnd/1,Speak/1,SetAttackState/1,Sleep/1,Trace/1,ReportAttack/1,RandVecCone3D/3,GetVictimMaterial/4,ReportHit/4,GetScene/1,AddActorByType/6,GetPFPosition/1,irand/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,FindActor/2,GetEyesHeight/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,CreateObjectSet/1,GetVariable/2,Trigger/2,SetVariable/2,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,GetProperty/2,SignalDeath/1,ResetAAS/0,IsPlayerActor/2,ReportReputationChange/3
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:shoot_begin|W:shot|W:shoot_end|W:attack_on|W:attack_off|W:hunt|W:@Stop hunt|W:attack_begin1|W:scripted|W:richochet.xml|W:Material|A:SetScriptProperty|W:attack_end1|W:quest_d11_01|W:soldier_attack|A:in|W:fire|W:phys|W:player|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:2|W:playing |W:start: |W:end: |W:d11q01|W:restore_andrei|W:ood11Officer1|W:GenerateMoney: iMin > iMax|W:Money|W:rifle_ammo|W:rusk|A:add|W:reputation|W:ui/NPC_Black.png|A:RemoveStationaryActor
// @GLOBALS: 0:object:,1:object:
// @RUN_OP: 0x40c
// @RUN_TASK: 6
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x93 vars=int,int
// @TASK_2: vars= params=1
// @EVENT_0: op=0x158 vars=object
// @EVENT_22: op=0x1cd vars=object,int,float,float
// @EVENT_16: op=0x1cf vars=object,string
// @EVENT_41: op=0x1d1 vars=object
// @TASK_3: vars=object params=1
// @EVENT_41: op=0x1f3 vars=object
// @EVENT_3: op=0x1fc vars=object
// @EVENT_4: op=0x205 vars=object
// @EVENT_17: op=0x211 vars=object
// @EVENT_30: op=0x225 vars=object,object
// @EVENT_1: op=0x231 vars=object
// @EVENT_7: op=0x23f vars=int
// @TASK_4: vars=object,bool params=1
// @EVENT_17: op=0x2b5 vars=object
// @EVENT_30: op=0x2c9 vars=object,object
// @EVENT_41: op=0x2dc vars=object
// @TASK_5: vars=object,object,bool params=2
// @EVENT_3: op=0x36a vars=object
// @EVENT_1: op=0x378 vars=object
// @EVENT_17: op=0x3e8 vars=object
// @EVENT_30: op=0x400 vars=object,object
// @TASK_6: vars= params=0
// @EVENT_0: op=0x410 vars=object
// @EVENT_17: op=0x418 vars=object
// @TASK_7: vars=cvector,cvector params=1
// @EVENT_3: op=0x43e vars=object
// @EVENT_17: op=0x45c vars=object
// @EVENT_30: op=0x470 vars=object,object
// @EVENT_1: op=0x47c vars=object
// @STANDALONE_EVENT_22: op=0x716 vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x71e vars=object,string
// @STANDALONE_EVENT_41: op=0x72b vars=object
// @PE: 0x3f,0x83,0x93,0x140,0x149,0x1b7,0x1cd,0x1cf,0x1d1,0x1f3,0x1fc,0x205,0x211,0x225,0x231,0x23f,0x2b5,0x2c9,0x2dc,0x36a,0x378,0x3e8,0x400,0x410,0x418,0x428,0x45c,0x470,0x47c,0x4dd,0x615,0x646,0x64d,0x65e,0x667,0x671,0x693,0x6a3,0x6a9,0x70e,0x716,0x72b,0x738,0x750,0x770,0x793,0x7c7

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_cvector, var_14_cvector)
{
	if((int)1 != 0) {
		func_1579();
		var_18_bool = var_14_cvector == (int)15678;
		if(var_18_bool != 0) {
			var_19_object = Obj(); var_20_object = Obj();
			var_19_object = var_1_object;
			var_20_object = var_0_object;
			func_1683();
		}
		var_33_bool = var_14_cvector == (int)15679;
		if(var_33_bool != 0) {
			var_34_object = Obj(); var_35_object = Obj();
			var_34_object = var_1_object;
			var_35_object = var_0_object;
			func_1683();
		}
		var_37_bool = var_13_cvector == (int)15673;
		if(var_37_bool != 0) {
			var_38_bool = 0; var_39_object = Obj();
			var_39_object = var_1_object;
			func_1705(var_39_object);
			if(var_38_bool != 0) {
				var_46_object = Obj(); var_47_object = Obj();
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_1699();
				var_50_string = "";
				func_131(var_14_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)14445);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)14446, (int)15675, (int)15674);
				@@@var_0_object:AddReply((int)14456, (int)15687, (int)15686);
				return 0;
			}
		}
		var_73_bool = var_13_cvector == (int)15687;
		if(var_73_bool != 0) {
			var_74_string = "";
			func_131(var_14_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)14457);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14458, (int)15689, (int)15688);
			return 0;
		}
		var_80_bool = var_13_cvector == (int)15689;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_131(var_14_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)14459);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14460, (int)15681, (int)15690);
			return 0;
		}
		var_87_bool = var_13_cvector == (int)15675;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_131(var_14_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)14447);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14448, (int)15677, (int)15676);
			@@@var_0_object:AddReply((int)14452, (int)15681, (int)15680);
			return 0;
		}
		var_97_bool = var_13_cvector == (int)15681;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_131(var_14_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)14453);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14454, (int)15677, (int)15682);
			@@@var_0_object:AddReply((int)14455, (int)15677, (int)15684);
			return 0;
		}
		var_107_bool = var_13_cvector == (int)15677;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_131(var_14_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)14449);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14450, (int)-1, (int)15678);
			@@@var_0_object:AddReply((int)14451, (int)-1, (int)15679);
			return 0;
		}
		var_3_string = true;
		var_116_bool = 0;
		func_1989(var_116_bool);
		if(var_116_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x94";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_bool = 0;
	IsOverrideActive(var_15_bool);
	var_16_bool = var_15_bool == 0; //@nz
	if(var_16_bool != 0) {
		WorkWithCorpse(var_13_cvector);
	}
	return 2;
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_bool, var_15_cvector, var_16_cvector)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_cvector, var_14_cvector)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector)
{
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector)
{
	func_491();
	var_13_cvector = Obj();
	func_1835();
	return 0;
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector)
{
	var_14_bool = var_13_cvector == var_0_object;
	if(var_14_bool != 0) {
		KillTimer((int)100);
		Face(var_0_object);
	}
	return 0;
}


task_3_event_4(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector)
{
	var_14_bool = var_13_cvector == var_0_object;
	if(var_14_bool != 0) {
		SetTimer((int)100, (float)3.0);
		var_17_object = Obj();
		var_17_object = var_0_object;
		func_1483(var_17_object);
	}
	return 0;
}


	task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_cvector, var_14_cvector, var_48_object)
	{
	var_49_bool = 0; var_50_object = Obj();
	var_48_object = var_50_object;
	func_1392(var_49_bool, var_50_object);
	var_77_bool = var_49_bool == 0; //@nz
	if(var_77_bool != 0) {
		var_78_object = Obj();
		var_48_object = var_78_object;
		func_1859(var_78_object);
		return 0;
	}
	func_491();
	var_86_object = Obj();
	var_48_object = var_86_object;
	func_1872(var_86_object);
	return 0;
	}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_cvector, var_14_cvector)
{
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj();
	var_13_cvector = var_16_object;
	var_14_cvector = var_17_object;
	func_1945(var_15_bool, var_16_object, var_17_object);
	if(var_15_bool != 0) {
		var_13_cvector = Obj();
		func_529();
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_cvector = var_15_object;
	func_1917(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		func_491();
		var_60_object = Obj();
		var_13_cvector = var_60_object;
		func_1939(var_60_object);
	}
	return 0;
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector)
{
	var_15_bool = var_13_cvector != (int)100;
	if(var_15_bool != 0) {
		return 0;
	}
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


	task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object, var_12_bool, var_13_cvector, var_14_cvector, var_48_object)
	{
	var_49_bool = 0; var_50_object = Obj();
	var_48_object = var_50_object;
	func_1392(var_49_bool, var_50_object);
	var_77_bool = var_49_bool == 0; //@nz
	if(var_77_bool != 0) {
		var_78_object = Obj();
		var_48_object = var_78_object;
		func_1859(var_78_object);
		return 0;
	}
	func_725();
	var_85_object = Obj();
	var_48_object = var_85_object;
	func_1872(var_85_object);
	return 0;
	}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object, var_12_bool, var_13_cvector, var_14_cvector)
{
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj();
	var_13_cvector = var_16_object;
	var_14_cvector = var_17_object;
	func_1945(var_15_bool, var_16_object, var_17_object);
	if(var_15_bool != 0) {
		var_13_cvector = Obj();
		func_693();
	}
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector)
{
	func_725();
	var_13_cvector = Obj();
	func_1835();
	return 0;
}


task_5_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0;
	var_14_bool = 0;
	var_15_object = var_2_object;
	if(var_15_object != 0) {
		var_16_bool = var_13_cvector == var_0_object;
		if(var_16_bool != 0) {
			var_14_bool = 1;
		}
	}
	if(var_14_bool != 0) {
		var_17_object = Obj();
		var_17_object = var_0_object;
		func_1483(var_17_object);
	}
	return 0;
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0;
	var_14_bool = 0;
	var_15_object = var_2_object;
	if(var_15_object != 0) {
		var_16_bool = var_13_cvector == var_0_object;
		if(var_16_bool != 0) {
			var_14_bool = 1;
		}
	}
	if(var_14_bool != 0) {
		Trace("@Stop hunt");
		StopAnimation();
		StopGroup0();
	}
	return 0;
}


	task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_cvector, var_48_object)
	{
	var_49_bool = 0; var_50_object = Obj();
	var_48_object = var_50_object;
	func_1392(var_49_bool, var_50_object);
	var_77_bool = var_49_bool == 0; //@nz
	if(var_77_bool != 0) {
		return 0;
	}
	var_78_object = Obj();
	var_48_object = var_78_object;
	func_1859(var_78_object);
	var_85_bool = var_48_object == var_0_object;
	if(var_85_bool != 0) {
		var_1_object = 0;
	} else {
		var_1_object = var_48_object;
		var_86_object = var_2_object;
		if(var_86_object == 0) goto Label_1023;
		StopAnimation();
		StopGroup0();
	}
Label_1023:
	return 0;
	
	}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_cvector)
{
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj();
	var_13_cvector = var_16_object;
	var_14_cvector = var_17_object;
	func_1945(var_15_bool, var_16_object, var_17_object);
	if(var_15_bool != 0) {
		var_13_cvector = Obj();
		func_1000();
	}
	return 0;
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_int = 0; var_15_object = Obj();
	var_13_cvector = var_15_object;
	TaskCall(0);
	func_0(var_16_object, var_14_int, var_15_object);
	TaskReturn();
	return 0;
}


task_6_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_string = ""; var_16_string = "";
	func_1671(var_14_bool, "quest_d11_01", "soldier_attack");
	var_20_object = Obj();
	func_1268(Obj());
	var_21_object = var_20_object;
	TaskCall(7);
	func_1064(var_20_object);
	TaskReturn();
	return 0;
}


task_7_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	var_16_bool = 0; var_17_object = Obj();
	var_13_object = var_17_object;
	func_1392(var_16_bool, var_17_object);
	var_50_bool = var_16_bool == 0; //@nz
	if(var_50_bool != 0) {
		return 2;
	}
	var_51_bool = 0; var_52_object = Obj();
	var_13_object = var_52_object;
	func_1912(var_51_bool, var_52_object);
	var_55_bool = var_51_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_56_object = GlobalVars[0];
		@@var_56_object:in(var_15_bool, var_13_object);
		var_57_bool = var_15_bool == 0; //@nz
		if(var_57_bool != 0) {
			return 2;
		}
	}
	func_1240();
	var_58_object = Obj();
	var_13_object = var_58_object;
	TaskCall(3);
	func_467(var_59_object, var_58_object);
	TaskReturn();
	return 2;
}


	task_7_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_object, var_14_object, var_48_object)
	{
	var_49_bool = 0; var_50_object = Obj();
	var_48_object = var_50_object;
	func_1392(var_49_bool, var_50_object);
	var_77_bool = var_49_bool == 0; //@nz
	if(var_77_bool != 0) {
		var_78_object = Obj();
		var_48_object = var_78_object;
		func_1859(var_78_object);
		return 0;
	}
	func_1240();
	var_85_object = Obj();
	var_48_object = var_85_object;
	func_1872(var_85_object);
	return 0;
	}


task_7_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_object, var_14_object)
{
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj();
	var_13_object = var_16_object;
	var_14_object = var_17_object;
	func_1945(var_15_bool, var_16_object, var_17_object);
	if(var_15_bool != 0) {
		var_13_object = Obj();
		func_1116();
	}
	return 0;
}


task_7_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	func_1917(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		func_1240();
		var_59_object = Obj();
		var_13_object = var_59_object;
		func_1991(var_59_object);
	}
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_object, var_14_int, var_15_float, var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0;
	var_13_object = var_17_object;
	var_14_int = var_18_int;
	var_15_float = var_19_float;
	func_1416(var_18_int, var_19_float);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_object, var_14_string)
{
	var_15_float = 0; var_16_float = 0;
	var_18_bool = var_14_string == "health";
	if(var_18_bool != 0) {
		GetProperty("health", var_16_float);
		var_21_bool = var_16_float <= (int)0;
		if(var_21_bool != 0) {
			SignalDeath(var_13_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_object)
{
	var_14_object = Obj();
	var_13_object = var_14_object;
	func_1997(var_14_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector)
{
	
Label_1036:
	Hold();
	goto Label_1036;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj();
	var_15_object = var_26_object;
	func_1501(var_25_bool, var_26_object);
	var_65_bool = var_25_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_66_int = 0;
	func_1985(var_66_int);
	@@var_21_object:SetNPCName(var_66_int);
	var_67_string = "";
	func_1987(var_67_string);
	@@var_21_object:SetPhoto(var_67_string);
	var_68_int = 0;
	func_1717(var_68_int);
	@@var_21_object:SetPlayerName(var_68_int);
	IsOverrideActive(var_22_bool);
	var_76_bool = var_22_bool;
	if(var_76_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	DoDialog(var_21_object);
	var_77_object = Obj(); var_78_object = Obj();
	var_15_object = var_77_object;
	var_21_object = var_78_object;
	TaskCall(1);
	func_63(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object);
	TaskReturn();
	@@var_21_object:IsDialogEnd(var_24_bool);
	
Label_45:
	var_126_bool = var_24_bool == 0; //@nz
	if(var_126_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_45;
	}
	var_15_object = Obj();
	func_1557();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1666(var_86_int, var_87_string)
{
	var_88_int = 0; var_89_int = 0;
	GetVariable(var_87_string, var_89_int);
	var_89_int = var_86_int;
	return 2;
}


func_131(var_2_object, var_96_string)
{
	var_97_bool = 0;
	func_1989(var_97_bool);
	var_98_bool = var_97_bool == 0; //@nz
	if(var_98_bool != 0) {
		return 0;
	}
	var_99_bool = var_96_string == var_2_object;
	if(var_99_bool != 0) {
		return 0;
	}
	var_100_string = "";
	var_96_string = var_100_string;
	func_1561(var_100_string);
	var_2_object = var_96_string;
	return 0;
}


func_1287(var_150_float, var_151_object, var_152_float, var_153_int)
{
	var_154_int = 0; var_155_string = ""; var_156_int = 0; var_157_float = 0; var_158_float = 0; var_159_float = 0; var_160_int = 0; var_161_string = ""; var_162_int = 0; var_163_float = 0; var_164_float = 0; var_165_float = 0;
	var_166_bool = 0; var_167_object = Obj(); var_168_string = "";
	var_151_object = var_167_object;
	func_1275(var_166_bool, var_167_object, "health");
	var_169_bool = var_166_bool == 0; //@nz
	if(var_169_bool != 0) {
		var_150_float = 0.0;
		return 12;
	}
	var_170_bool = 0; var_171_object = Obj(); var_172_string = "";
	var_151_object = var_171_object;
	func_1275(var_170_bool, var_171_object, "armor");
	var_173_bool = var_170_bool == 0; //@nz
	if(var_173_bool != 0) {
		var_160_int = 0;
	} else {
			@@var_151_object:GetProperty("armor", var_160_int);
	}
	var_175_string = ""; var_176_int = 0;
	var_153_int = var_176_int;
	func_1245(var_175_string, var_176_int);
	var_161_string = "armor_" + var_175_string;
	var_179_bool = 0; var_180_object = Obj(); var_181_string = "";
	var_151_object = var_180_object;
	var_161_string = var_181_string;
	func_1275(var_179_bool, var_180_object, var_181_string);
	var_182_bool = var_179_bool == 0; //@nz
	if(var_182_bool != 0) {
		var_162_int = 0;
	} else {
		@@var_151_object:GetProperty(var_161_string, var_162_int);

	}
	var_183_float = 0; var_184_float = 0; var_185_float = 0;
	var_186_int = var_160_int + var_162_int;
	var_184_float = var_186_int / (float)100.0;
	func_1606(var_183_float, var_184_float, (float)1);
	var_183_float = var_163_float;
	@@var_151_object:GetProperty("health", var_164_float);
	var_191_int = (int)1 - var_163_float;
	var_165_float = var_152_float * var_191_int;
	var_193_float = 0; var_194_float = 0; var_195_float = 0; var_196_float = 0;
	var_194_float = var_164_float - var_165_float;
	func_1613(var_193_float, var_194_float, (float)0, (float)1);
	@@var_151_object:SetProperty("health", var_193_float);
	var_165_float = var_150_float;
	return 12;
	
}


func_1671(var_14_bool, var_15_string, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj();
	FindActor(var_18_object, var_15_string);
	var_19_bool = var_18_object == 0; //@ne
	if(var_19_bool != 0) {
		var_14_bool = 0;
		return 2;
	}
	Trigger(var_18_object, var_16_string);
	var_14_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_905(var_0_object, var_1_object)
{
	var_0_object = var_1_object;
	var_1_object = 0;
	Face(var_0_object);
	return 0;
}


func_1162(var_0_object, var_1_object)
{
	var_258_int = 0; var_259_bool = 0; var_260_cvector = CVector(0,0,0); var_261_object = Obj(); var_262_int = 0; var_263_bool = 0; var_264_cvector = CVector(0,0,0); var_265_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_1167:
	irand(var_262_int, (int)60);
	var_268_int = var_262_int + (int)30;
	Sleep(var_268_int, var_263_bool);
	var_269_bool = var_263_bool;
	if(var_269_bool != 0) {
		func_1085();
	} else {
		GetPFPosition(var_264_cvector);
		var_270_float = 0; var_271_cvector = CVector(0,0,0); var_272_cvector = CVector(0,0,0);
		var_271_cvector = var_1_object;
		var_264_cvector = var_272_cvector;
		func_1602(var_270_float, var_271_cvector, var_272_cvector);
		var_276_bool = var_270_float > (int)40000;
		if(var_276_bool != 0) {
			FindPathTo(var_265_object, var_1_object);
			var_277_bool = var_265_object != 0; //@nn
			if(var_277_bool != 0) {
				RotatePath(var_265_object, var_263_bool);
				var_278_bool = var_263_bool == 0; //@nz
				if(var_278_bool != 0) {
				} else {
					FollowPath(var_265_object, (bool)0, var_263_bool);
					var_280_bool = var_263_bool == 0; //@nz
					if(var_280_bool != 0) {
						goto Label_1237;
					}
					var_281_float = GetByIndex(var_0_object, 0);
					var_282_float = GetByIndex(var_0_object, 2);
					Rotate(var_281_float, var_282_float, var_263_bool);
					var_283_bool = var_263_bool == 0; //@nz
					if(var_283_bool != 0) {
						goto Label_1237;
					}
					WaitForAnimEnd(var_263_bool);
					var_284_bool = var_263_bool == 0; //@nz
					if(var_284_bool != 0) {
						goto Label_1237;
					}
					goto Label_1238;
				EMIT "GOTO 0x4c6";
			}
				Sleep((int)1);
				var_265_object = 0;
				goto Label_1237;
		}
			var_286_float = GetByIndex(var_0_object, 0);
			var_287_float = GetByIndex(var_0_object, 2);
			Rotate(var_286_float, var_287_float, var_263_bool);
			var_288_bool = var_263_bool == 0; //@nz
			if(var_288_bool != 0) {
				goto Label_1237;
			}
			WaitForAnimEnd(var_263_bool);
			var_289_bool = var_263_bool == 0; //@nz
			if(var_289_bool != 0) {
				goto Label_1237;
			}
			goto Label_1238;
		}
	Label_1237:
		goto Label_1180;
	}
Label_1238:
	goto Label_1167;
	
}
EMIT "Return(); Pop(8)";


func_1801(var_50_int, var_51_string)
{
	var_52_int = 0; var_53_int = 0;
	GetInvItemByName(var_53_int, var_51_string);
	var_53_int = var_50_int;
	return 2;
}


func_1416(var_17_object, var_18_int)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_object = Obj(); var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = "";
	var_40_bool = 0;
	var_40_bool = 0;
	var_42_bool = var_18_int != (int)4;
	if(var_42_bool != 0) {
		var_44_bool = var_18_int != (int)5;
		if(var_44_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		GetScene(var_30_object);
		GetPosition(var_32_cvector);
		GetEyesHeight(var_33_float);
		var_45_float = GetByIndex(var_32_cvector, 1);
		var_47_float = var_33_float / (int)2;
		var_45_float = var_45_float + var_47_float;
		SetByIndex(var_32_cvector, 1) = var_45_float;
		AddActorByType(var_31_object, "scripted", var_30_object, var_32_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_31_object = 0;
		var_30_object = 0;
	}
	var_51_bool = var_17_object == 0; //@ne
	if(var_51_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_34_int);
	var_53_bool = var_34_int < (int)0;
	if(var_53_bool != 0) {
		return 20;
	}
	@@var_17_object:GetPosition(var_35_cvector);
	GetPosition(var_36_cvector);
	GetDirection(var_37_cvector);
	var_38_cvector = var_36_cvector - var_35_cvector;
	var_54_float = GetByIndex(var_38_cvector, 0);
	var_55_float = GetByIndex(var_37_cvector, 0);
	var_56_float = var_54_float * var_55_float;
	var_57_float = GetByIndex(var_38_cvector, 2);
	var_58_float = GetByIndex(var_37_cvector, 2);
	var_59_float = var_57_float * var_58_float;
	var_60_int = var_56_float + var_59_float;
	var_62_bool = var_60_int >= (int)0;
	if(var_62_bool != 0) {
		var_39_string = "fhit";
	} else {
		var_39_string = "bhit";
	}
	var_65_int = var_39_string + "1";
	var_67_int = var_39_string + "2";
	FadeSecondaryAnimation("hit_react", var_65_int, var_67_int, (int)-10);
	return 20;
	
}


func_910(var_0_object)
{
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_object = Obj(); var_89_int = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_object = Obj(); var_93_object = Obj(); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_object = Obj(); var_98_int = 0; var_99_cvector = CVector(0,0,0); var_100_float = 0; var_101_object = Obj(); var_102_object = Obj();
	ReportAttack(var_0_object);
	GetDirection(var_94_cvector);
	var_103_cvector = CVector(0,0,0); var_104_object = Obj();
	var_104_object = var_0_object;
	func_1253(var_103_cvector, var_104_object);
	var_103_cvector = var_95_cvector;
	var_109_float = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0);
	var_94_cvector = var_110_cvector;
	var_95_cvector = var_111_cvector;
	func_1649(var_109_float, var_110_cvector, var_111_cvector);
	var_134_bool = var_109_float < (float)0.9659258127212524;
	if(var_134_bool != 0) {
		return 18;
	}
	PlayAnimation("all", "attack_begin1");
	WaitForAnimEnd();
	Speak("shot");
	GetDirection(var_94_cvector);
	var_138_cvector = CVector(0,0,0); var_139_object = Obj();
	var_139_object = var_0_object;
	func_1253(var_138_cvector, var_139_object);
	var_138_cvector = var_95_cvector;
	var_140_float = GetByIndex(var_95_cvector, 1);
	var_141_float = 0; var_142_object = Obj();
	var_142_object = var_0_object;
	func_1494(var_141_float, var_142_object);
	var_140_float = var_140_float + var_141_float;
	SetByIndex(var_95_cvector, 1) = var_140_float;
	RandVecCone3D(var_96_cvector, var_95_cvector, (float)0.2617993950843811);
	GetVictimMaterial(var_96_cvector, var_97_object, var_98_int, var_99_cvector);
	var_148_bool = var_97_object != 0; //@nn
	if(var_148_bool != 0) {
		var_149_bool = var_97_object == var_0_object;
		if(var_149_bool != 0) {
			var_150_float = 0; var_151_object = Obj(); var_152_float = 0; var_153_int = 0;
			var_151_object = var_0_object;
			func_1287(var_150_float, var_151_object, (float)1.5, (int)0);
			var_150_float = var_100_float;
			ReportHit(var_0_object, (int)2, var_100_float, (float)1.5);
		} else {
			var_207_bool = var_98_int != (int)-1;
			if(var_207_bool == 0) goto Label_988;
			GetScene(var_101_object);
			AddActorByType(var_102_object, "scripted", var_101_object, var_99_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
			@@var_102_object:SetScriptProperty("Material", var_98_int);
			var_102_object = 0;
			var_101_object = 0;
		}
	}
Label_988:
	PlayAnimation("all", "attack_end1");
	WaitForAnimEnd();
	LockAnimationEnd("all", "attack_on");
	return 18;
	
}
EMIT "Stack[-6] = 0";


func_1806(var_20_object)
{
	var_21_object = Obj();
	var_20_object = var_21_object;
	TaskCall(2);
	func_320(var_21_object);
	TaskReturn();
	return 0;
}


func_1683()
{
	SetVariable("d11q01", (int)3);
	var_23_bool = 0; var_24_string = ""; var_25_string = "";
	func_1671(var_23_bool, "quest_d11_01", "soldier_attack");
	var_29_bool = 0; var_30_string = ""; var_31_string = "";
	func_1671(var_29_bool, "quest_d11_01", "restore_andrei");
	return 0;
}


func_1939(var_60_object)
{
	var_61_object = Obj();
	var_60_object = var_61_object;
	func_1991(var_61_object);
	return 0;
}


func_1557()
{
	CameraSwitchToNormal();
	return 0;
}


func_1561(var_100_string)
{
	var_101_float = 0; var_102_float = 0; var_103_float = 0; var_104_float = 0;
	var_106_int = "playing " + var_100_string;
	Trace(var_106_int);
	lshGetAnimTimes(var_100_string, var_103_float, var_104_float);
	lshPlayAnimation(var_103_float, var_104_float);
	var_108_int = "start: " + var_103_float;
	Trace(var_108_int);
	var_110_int = "end: " + var_104_float;
	Trace(var_110_int);
	return 4;
}


func_1945(var_15_bool, var_16_object, var_17_object)
{
	var_18_float = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_17_object = var_23_object;
	func_1275(var_22_bool, var_23_object, "reputation");
	var_31_bool = var_22_bool == 0; //@nz
	if(var_31_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	@@var_17_object:GetProperty("reputation", var_20_float);
	var_34_bool = var_20_float < (float)0.5;
	if(var_34_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	CanSee(var_21_bool, var_16_object);
	var_35_bool = 0;
	var_35_bool = 1;
	var_36_bool = var_21_bool;
	if(var_36_bool != 1) {
		var_37_float = 0; var_38_object = Obj();
		var_16_object = var_38_object;
		func_1260(var_37_float, var_38_object);
		var_46_bool = var_37_float <= (float)160000.0;
		if(var_46_bool != 1) {
			var_35_bool = 0;
		}
	}
	if(var_35_bool != 0) {
		ReportReputationChange(var_16_object, var_17_object, (float)-0.20000000298023224);
		var_15_bool = 1;
		return 4;
	}
	var_15_bool = 0;
	return 4;
}


func_1699()
{
	SetVariable("ood11Officer1", (int)1);
	return 0;
}


func_1064(var_20_object)
{
	func_1841();
	var_20_object = Obj();
	func_1116();
	
Label_1072:
	func_1077();
	goto Label_1072;
}
EMIT "Return(); Pop(0)";


func_1705(var_84_bool)
{
	var_86_int = 0; var_87_string = "";
	func_1666(var_86_int, "ood11Officer1");
	var_91_bool = var_86_int == (int)0;
	if(var_91_bool != 0) {
		var_84_bool = 1;
		return 0;
	}
	var_84_bool = 0;
	return 0;
}


func_1579()
{
	var_16_bool = 0;
	func_1989(var_16_bool);
	if(var_16_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1841()
{
	var_27_object = GlobalVars[0];
	func_1624(Obj());
	var_28_object = var_27_object;
	GlobalVars[0] = var_27_object;
	return 0;
}


func_1586(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	self(var_19_object);
	var_19_object = var_17_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1717(var_68_int)
{
	var_69_int = 0; var_70_int = 0;
	GetVariable("player", var_70_int);
	var_73_bool = var_70_int == (int)0;
	if(var_73_bool != 0) {
		var_68_int = 200001;
		return 2;
	EMIT "GOTO 0x6c4";
	}
	var_75_bool = var_70_int == (int)1;
	if(var_75_bool != 0) {
		var_68_int = 200002;
		return 2;
	}
	var_68_int = 200003;
	return 2;
}


func_1077()
{
	func_1841();
	
Label_1080:
	func_1162(var_26_cvector, var_20_object);
	goto Label_1080;
}
EMIT "Return(); Pop(0)";


func_439(var_85_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_85_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_85_string);
	RemoveEnvelope();
	return 0;
}


func_1848(var_65_object, var_66_bool)
{
	var_67_object = Obj(); var_68_bool = 0;
	var_65_object = var_67_object;
	var_66_bool = var_68_bool;
	TaskCall(5);
	func_741(var_69_object, var_70_object, var_71_bool, var_67_object, var_68_bool);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_1592(var_50_cvector, var_51_cvector)
{
	var_53_float = 0; var_54_float = 0;
	var_55_int = var_51_cvector | var_51_cvector;
	var_54_float = sqrt(var_55_int);
	var_56_float = 9.999999974752427e-07;
	var_57_bool = var_54_float < var_56_float;
	if(var_57_bool != 0) {
		var_50_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_50_cvector = var_51_cvector / var_54_float;
	return 2;
}


func_1085()
{
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_77_object, var_78_object)
{
	var_0_object = var_78_object;
	var_1_object = var_77_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_84_bool = 0; var_85_object = Obj();
		var_85_object = var_1_object;
		func_1705(var_85_object);
		if(var_84_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_1699();
			var_96_string = "";
			func_131(var_78_object, "Neutral");
			@@@var_0_object:SetMessage((int)14445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14446, (int)15675, (int)15674);
			@@@var_0_object:AddReply((int)14456, (int)15687, (int)15686);
		} else {
				return 0;
		}
	}
	var_118_bool = 0;
	func_1989(var_118_bool);
	if(var_118_bool != 0) {

	Label_105:
		lshWaitForAnimEnd();
		var_119_string = var_3_string;
		if(var_119_string != 0) {
		} else {
			var_120_string = "";
			var_120_string = var_2_object;
			func_1561(var_120_string);
			goto Label_105;
	}
		PlayAnimation("all", "idle");

	Label_120:
		WaitForAnimEnd();
		var_123_string = var_3_string;
		if(var_123_string != 0) {
			goto Label_130;
		}
		PlayAnimation("all", "idle");
		goto Label_120;

	}
	goto Label_130;
	
Label_130:
	return 0;
	
}
EMIT "GOTO 0x43";


func_320(var_21_object)
{
	func_1764();
	var_62_object = Obj();
	var_21_object = var_62_object;
	func_329(var_62_object);
	return 0;
}


func_1985(var_66_int)
{
	var_66_int = 14841;
	return 0;
}


func_1602(var_270_float, var_271_cvector, var_272_cvector)
{
	var_273_cvector = CVector(0,0,0); var_274_cvector = CVector(0,0,0);
	var_274_cvector = var_272_cvector - var_271_cvector;
	var_270_float = var_274_cvector | var_274_cvector;
	return 2;
}


func_1987(var_67_string)
{
	var_67_string = "ui/NPC_Black.png";
	return 0;
}


func_1859(var_78_object)
{
	var_79_bool = 0; var_80_bool = 0;
	var_81_bool = var_78_object == 0; //@ne
	if(var_81_bool != 0) {
		return 2;
	}
	var_82_object = GlobalVars[0];
	@@var_82_object:in(var_80_bool, var_78_object);
	var_83_bool = var_80_bool == 0; //@nz
	if(var_83_bool != 0) {
		var_84_object = GlobalVars[0];
		@@var_84_object:add(var_78_object);
	}
	return 2;
}


func_1989(var_97_bool)
{
	var_97_bool = 0;
	return 0;
}


func_1606(var_183_float, var_184_float, var_185_float)
{
	var_188_bool = var_184_float < var_185_float;
	if(var_188_bool != 0) {
		var_184_float = var_183_float;
	} else {
		var_185_float = var_183_float;
	}
	return 0;
	
}


func_1991(var_59_object)
{
	var_60_object = Obj();
	var_59_object = var_60_object;
	func_1883(var_60_object);
	return 0;
}


func_1351(var_33_bool, var_34_object)
{
	var_35_bool = 0; var_36_bool = 0;
	@@var_34_object:IsDead(var_36_bool);
	var_36_bool = var_33_bool;
	return 2;
}


func_329(var_62_object)
{
	EventDisable(0);
	var_63_object = Obj();
	var_62_object = var_63_object;
	func_352(var_63_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_340:
	Hold();
	goto Label_340;
}
EMIT "Return(); Pop(0)";


func_1734(var_27_int, var_28_int)
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0;
	var_37_bool = var_27_int > var_28_int;
	if(var_37_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_39_bool = var_27_int != var_28_int;
	if(var_39_bool != 0) {
		var_40_int = var_28_int - var_27_int;
		irand(var_34_int, var_40_int);
	} else {
		var_46_bool = var_27_int == (int)0;
		if(var_46_bool == 0) goto Label_1752;
		return 8;
	}
Label_1752:
	(int)0 = (int)0 + var_27_int;
	var_42_bool = var_33_int == (int)0;
	if(var_42_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_35_int, "Money");
	AddItem(var_36_bool, var_35_int, (int)0, var_33_int);
	return 8;
	
}


func_1483(var_214_object)
{
	var_215_cvector = CVector(0,0,0); var_216_cvector = CVector(0,0,0); var_217_cvector = CVector(0,0,0); var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0);
	@@var_214_object:GetPosition(var_218_cvector);
	GetPosition(var_219_cvector);
	var_220_cvector = var_218_cvector - var_219_cvector;
	var_221_float = GetByIndex(var_220_cvector, 0);
	var_222_float = GetByIndex(var_220_cvector, 2);
	RotateAsync(var_221_float, var_222_float);
	return 6;
}


func_1356(var_22_bool, var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj();
	var_28_bool = var_23_object == 0; //@ne
	if(var_28_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	var_29_bool = 0;
	var_29_bool = 0;
	var_32_bool = IsFuncExist(var_23_object, "IsDead", (int)1);
	if(var_32_bool != 0) {
		var_33_bool = 0; var_34_object = Obj();
		var_23_object = var_34_object;
		func_1351(var_33_bool, var_34_object);
		if(var_33_bool != 0) {
			var_29_bool = 1;
		}
	}
	if(var_29_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	GetScene(var_26_object);
	var_37_bool = var_26_object == 0; //@ne
	if(var_37_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	@@var_23_object:GetScene(var_27_object);
	var_38_bool = var_26_object != var_27_object;
	if(var_38_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	var_22_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1613(var_193_float, var_194_float, var_195_float, var_196_float)
{
	var_197_bool = var_194_float < var_195_float;
	if(var_197_bool != 0) {
		var_195_float = var_193_float;
		return 0;
	}
	var_198_bool = var_194_float > var_196_float;
	if(var_198_bool != 0) {
		var_196_float = var_193_float;
		return 0;
	}
	var_194_float = var_193_float;
	return 0;
}


func_1997(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	GetScene(var_16_object);
	var_17_object = Obj();
	func_1586(var_17_object);
	@@var_16_object:RemoveStationaryActor(var_17_object);
	var_20_object = Obj();
	var_14_object = var_20_object;
	func_1806(var_20_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_586(var_0_object, var_1_object, var_247_object)
{
	var_250_bool = 0; var_251_int = 0; var_252_int = 0; var_253_bool = 0; var_254_int = 0; var_255_int = 0;
	var_0_object = var_247_object;
	CanSee(var_1_object, var_0_object);
	var_256_object = var_1_object;
	if(var_256_object != 0) {
		var_257_bool = 0; var_258_object = Obj();
		var_258_object = var_0_object;
		func_1904(var_257_bool, var_258_object);
		if(var_257_bool != 0) {
			var_268_object = Obj(); var_269_bool = 0;
			var_268_object = var_0_object;
			func_1848(var_268_object, (bool)1);
			return 6;
		}
		Face(var_0_object);
	}
	PlayAnimation("all", "shoot_begin");
	WaitForAnimEnd(var_253_bool);
	var_272_bool = var_253_bool == 0; //@nz
	if(var_272_bool != 0) {
		StopAsync();
		return 6;
	}
	Speak("shot");
	PlayAnimation("all", "shoot_end");
	WaitForAnimEnd(var_253_bool);
	var_276_bool = var_253_bool == 0; //@nz
	if(var_276_bool != 0) {
		StopAsync();
		return 6;
	}
	LockAnimationEnd("all", "attack_on");
	var_255_int = 0;
	
Label_636:
	var_280_bool = var_255_int < (int)20;
	if(var_280_bool != 0) {
		Sleep((float)0.5, var_253_bool);
		var_282_bool = var_253_bool == 0; //@nz
		if(var_282_bool != 0) {
			return 6;
		}
		CanSee(var_1_object, var_0_object);
		var_283_object = var_1_object;
		if(var_283_object != 0) {
			var_284_bool = 0; var_285_object = Obj();
			var_285_object = var_0_object;
			func_1904(var_284_bool, var_285_object);
			if(var_284_bool != 0) {
				func_725();
				var_286_object = Obj(); var_287_bool = 0;
				var_286_object = var_0_object;
				func_1848(var_286_object, (bool)0);
				return 6;
			}
			Face(var_0_object);
		} else {
			StopAsync();
			(int)0 = (int)0 + (int)1;
			var_291_bool = (int)0 == (int)4;
			if(var_291_bool == 0) goto Label_681;
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
			return 6;
	}
		func_725();
		var_294_object = Obj(); var_295_bool = 0;
		var_247_object = var_294_object;
		func_1848(var_294_object, (bool)0);
		var_255_int = var_255_int + (int)1;
		goto Label_636;
	}
	return 6;
	
}


func_1872(var_85_object)
{
	var_86_object = Obj();
	var_85_object = var_86_object;
	func_1859(var_86_object);
	var_87_object = Obj(); var_88_bool = 0;
	var_85_object = var_87_object;
	func_1848(var_87_object, (bool)1);
	return 0;
}


func_467(var_0_object, var_58_object)
{
	var_60_bool = 0; var_61_bool = 0;
	var_0_object = var_58_object;
	Face(var_58_object);
	
Label_471:
	Sleep((float)0.5, var_61_bool);
	var_63_bool = 0;
	var_63_bool = 1;
	var_64_bool = var_61_bool == 0; //@nz
	if(var_64_bool != 1) {
		var_65_bool = 0; var_66_object = Obj();
		var_66_object = var_0_object;
		func_1392(var_65_bool, var_66_object);
		var_67_bool = var_65_bool == 0; //@nz
		if(var_67_bool != 1) {
			var_63_bool = 0;
		}
	}
	if(var_63_bool != 0) {
	} else {
		goto Label_471;
	}
	StopAsync();
	return 2;
	
}


func_725()
{
	StopAsync();
	StopGroup0();
	Stop();
	return 0;
}


func_1494(var_141_float, var_142_object)
{
	var_143_float = 0; var_144_float = 0; var_145_float = 0; var_146_float = 0;
	GetEyesHeight(var_145_float);
	@@var_142_object:GetEyesHeight(var_146_float);
	var_141_float = var_146_float - var_145_float;
	return 4;
}


func_1240()
{
	StopGroup0();
	Stop();
	return 0;
}


func_1624(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj();
	CreateObjectSet(var_30_object);
	var_30_object = var_28_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1883(var_60_object)
{
	var_61_bool = 0; var_62_bool = 0;
	var_63_object = GlobalVars[0];
	@@var_63_object:in(var_62_bool, var_60_object);
	var_64_bool = var_62_bool;
	if(var_64_bool != 0) {
		var_65_object = Obj(); var_66_bool = 0;
		var_60_object = var_65_object;
		func_1848(var_65_object, (bool)1);
	} else {
		var_247_object = Obj();
		var_60_object = var_247_object;
		TaskCall(4);
		func_586(var_248_object, var_249_bool, var_247_object);
		TaskReturn();
		ResetAAS();
	}
	return 2;
	
}


func_1501(var_25_bool, var_26_object)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0;
	@@var_26_object:GetPosition(var_36_cvector);
	@@var_26_object:GetEyesHeight(var_35_float);
	var_43_float = GetByIndex(var_36_cvector, 1);
	var_43_float = var_43_float + var_35_float;
	SetByIndex(var_36_cvector, 1) = var_43_float;
	GetPosition(var_37_cvector);
	GetEyesHeight(var_35_float);
	var_44_float = GetByIndex(var_37_cvector, 1);
	var_44_float = var_44_float + var_35_float;
	SetByIndex(var_37_cvector, 1) = var_44_float;
	var_38_cvector = var_36_cvector - var_37_cvector;
	var_45_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (float)0;
	var_46_int = var_38_cvector | var_38_cvector;
	var_47_float = sqrt(var_46_int);
	var_38_cvector = var_38_cvector / var_47_float;
	var_39_cvector = -var_38_cvector;
	var_49_float = var_38_cvector * (int)70;
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_51_cvector = var_39_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1592(var_50_cvector, var_51_cvector);
	var_59_float = var_50_cvector * (int)25;
	var_60_int = var_49_float + var_59_float;
	var_40_cvector = var_60_int - CVector(0.0, 10.0, 0.0);
	var_41_cvector = var_37_cvector + var_40_cvector;
	IsOverrideActive(var_42_bool);
	var_62_bool = var_42_bool;
	if(var_62_bool != 0) {
		var_25_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_41_cvector, var_39_cvector);
	var_63_float = GetByIndex(var_40_cvector, 0);
	var_64_float = GetByIndex(var_40_cvector, 2);
	Rotate(var_63_float, var_64_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 16;
}


func_1245(var_175_string, var_176_int)
{
	var_178_bool = var_176_int == (int)1;
	if(var_178_bool != 0) {
		var_175_string = "fire";
		return 0;
	}
	var_175_string = "phys";
	return 0;
}


func_1630(var_112_float, var_113_cvector, var_114_cvector)
{
	var_115_float = GetByIndex(var_113_cvector, 0);
	var_116_float = GetByIndex(var_114_cvector, 0);
	var_117_float = var_115_float * var_116_float;
	var_118_float = GetByIndex(var_113_cvector, 2);
	var_119_float = GetByIndex(var_114_cvector, 2);
	var_120_float = var_118_float * var_119_float;
	var_112_float = var_117_float + var_120_float;
	return 0;
}


func_352(var_63_object)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_string = ""; var_69_object = Obj(); var_70_bool = 0; var_71_bool = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_string = ""; var_79_object = Obj(); var_80_bool = 0; var_81_bool = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0);
	var_84_bool = var_63_object == 0; //@ne
	if(var_84_bool != 0) {
		var_85_string = "";
		func_439("fdie");
	} else {
		@@var_63_object:GetPosition(var_74_cvector);
		GetPosition(var_75_cvector);
		GetDirection(var_76_cvector);
		var_77_cvector = var_75_cvector - var_74_cvector;
		var_88_float = GetByIndex(var_77_cvector, 0);
		var_89_float = GetByIndex(var_76_cvector, 0);
		var_90_float = var_88_float * var_89_float;
		var_91_float = GetByIndex(var_77_cvector, 2);
		var_92_float = GetByIndex(var_76_cvector, 2);
		var_93_float = var_91_float * var_92_float;
		var_94_int = var_90_float + var_93_float;
		var_96_bool = var_94_int >= (int)0;
		if(var_96_bool != 0) {
			var_78_string = "fdie";
		} else {
				var_78_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_63_object = var_79_object;
		var_99_bool = IsFuncExist(var_63_object, "GetScriptProperty", (int)2);
		if(var_99_bool != 0) {
			@@var_63_object:HasScriptProperty(var_80_bool, "Owner");
			var_101_bool = var_80_bool;
			if(var_101_bool != 0) {
				@@var_63_object:GetScriptProperty(var_79_object, "Owner");
				var_103_bool = var_79_object == 0; //@ne
				if(var_103_bool != 0) {
					var_63_object = var_79_object;
				}
			}
		}
		var_106_bool = IsFuncExist(var_79_object, "@GetEyesHeight", (int)1);
		if(var_106_bool != 0) {
			@@var_79_object:GetEyesHeight(var_82_float);
			var_83_cvector = CVector(0.0, 0.0, 0.0);
			var_107_float = GetByIndex(var_83_cvector, 1);
			var_82_float = var_107_float;
			SetByIndex(var_83_cvector, 1) = var_107_float;
			LookAsync(var_63_object, "head", var_83_cvector);
			var_81_bool = 1;
		} else {
			var_81_bool = 0;

		}
		PlayAnimation("all", var_78_string);
		WaitForAnimEnd();
		var_110_bool = var_81_bool;
		if(var_110_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_78_string);
		RemoveEnvelope();
		var_79_object = 0;
	}
	return 20;
	
}


func_1764()
{
	var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_bool = 0;
	ClearSubContainer((int)0);
	var_27_int = 0; var_28_int = 0;
	func_1734((int)500, (int)1000);
	irand(var_24_int, (int)4);
	var_49_bool = var_24_int != (int)0;
	if(var_49_bool != 0) {
		var_50_int = 0; var_51_string = "";
		func_1801(var_50_int, "rifle_ammo");
		AddItem(var_25_bool, var_50_int, (int)0, var_24_int);
	}
	irand(var_24_int, (int)3);
	var_57_bool = var_24_int == (int)0;
	if(var_57_bool != 0) {
		var_58_int = 0; var_59_string = "";
		func_1801(var_58_int, "rusk");
		AddItem(var_25_bool, var_58_int, (int)0, (int)1);
	}
	return 4;
}


func_1253(var_103_cvector, var_104_object)
{
	var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0);
	GetPosition(var_107_cvector);
	@@var_104_object:GetPosition(var_108_cvector);
	var_103_cvector = var_108_cvector - var_107_cvector;
	return 4;
}


func_741(var_0_object, var_1_object, var_2_object, var_67_object, var_68_bool)
{
	var_72_bool = 0; var_73_bool = 0; var_74_bool = 0; var_75_bool = 0;
	var_0_object = var_67_object;
	Face(var_0_object);
	var_76_bool = var_68_bool;
	if(var_76_bool != 0) {
		PlayAnimation("all", "attack_on");
		WaitForAnimEnd();
	}
	LockAnimationEnd("all", "attack_on");
	SetAttackState((bool)1);
	
Label_760:
	var_82_bool = 0; var_83_object = Obj();
	var_83_object = var_0_object;
	func_1392(var_82_bool, var_83_object);
	if(var_82_bool != 0) {
		CanSee(var_75_bool, var_0_object);
		var_84_bool = var_75_bool;
		if(var_84_bool != 0) {
			func_910(var_75_bool);
		} else {
				var_214_object = Obj();
				var_214_object = var_0_object;
				func_1483(var_214_object);
				var_2_object = true;
				PlayAnimation("all", "hunt");
				WaitForAnimEnd(var_74_bool);
				var_225_bool = var_74_bool == 0; //@nz
				if(var_225_bool != 0) {
					var_226_bool = var_1_object != 0; //@nn
					if(var_226_bool != 0) {
						func_905(var_74_bool, var_75_bool);
					}
					LockAnimationEnd("all", "attack_on");
					goto Label_760;
				}
				var_229_bool = 0; var_230_object = Obj();
				var_230_object = var_0_object;
				func_1392(var_229_bool, var_230_object);
				var_231_bool = var_229_bool == 0; //@nz
				if(var_231_bool != 0) {
				} else {
					CanSee(var_75_bool, var_0_object);
					var_235_bool = var_75_bool;
					if(var_235_bool != 0) {
						var_2_object = false;
						Face(var_0_object);
						func_910(var_75_bool);
						goto Label_852;
					}
					LockAnimationEnd("all", "attack_on");
					Sleep((int)3, var_74_bool);
					var_239_bool = var_74_bool == 0; //@nz
					if(var_239_bool != 0) {
						var_240_bool = var_1_object != 0; //@nn
						if(var_240_bool != 0) {
							func_905(var_74_bool, var_75_bool);
						}
						LockAnimationEnd("all", "attack_on");
						goto Label_760;
					}
					var_243_bool = 0; var_244_object = Obj();
					var_244_object = var_0_object;
					func_1392(var_243_bool, var_244_object);
					var_245_bool = var_243_bool == 0; //@nz
					if(var_245_bool != 0) {
						goto Label_862;
					}
					var_2_object = false;
					CanSee(var_75_bool, var_0_object);
					var_246_bool = var_75_bool;
					if(var_246_bool != 0) {
						Face(var_0_object);
						func_910(var_75_bool);
						goto Label_852;
					}
					goto Label_862;
				}
	}
		Label_862:
			SetAttackState((bool)0);
			StopAsync();
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
			return 4;
	}
Label_852:
	var_212_bool = var_1_object != 0; //@nn
	if(var_212_bool != 0) {
		func_905(var_74_bool, var_75_bool);
	} else {
		Sleep((int)2);

	}
	goto Label_760;
	
}


func_1639(var_121_float, var_122_cvector)
{
	var_123_float = GetByIndex(var_122_cvector, 0);
	var_124_float = GetByIndex(var_122_cvector, 0);
	var_125_float = var_123_float * var_124_float;
	var_126_float = GetByIndex(var_122_cvector, 2);
	var_127_float = GetByIndex(var_122_cvector, 2);
	var_128_float = var_126_float * var_127_float;
	var_129_int = var_125_float + var_128_float;
	var_121_float = sqrt(var_129_int);
	return 0;
}


func_491()
{
	StopAsync();
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


func_1260(var_259_float, var_260_object)
{
	var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0); var_264_cvector = CVector(0,0,0); var_265_cvector = CVector(0,0,0); var_266_cvector = CVector(0,0,0);
	GetPosition(var_264_cvector);
	@@var_260_object:GetPosition(var_265_cvector);
	var_266_cvector = var_265_cvector - var_264_cvector;
	var_259_float = var_266_cvector | var_266_cvector;
	return 6;
}


func_1392(var_18_bool, var_19_object)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj();
	var_19_object = var_23_object;
	func_1356(var_22_bool, var_23_object);
	var_39_bool = var_22_bool == 0; //@nz
	if(var_39_bool != 0) {
		var_18_bool = 0;
		return 2;
	}
	var_40_bool = 0; var_41_object = Obj(); var_42_string = "";
	var_19_object = var_41_object;
	func_1275(var_40_bool, var_41_object, "noaccess");
	var_49_bool = var_40_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_18_bool = 1;
		return 2;
	}
	@@var_19_object:GetProperty("noaccess", var_21_int);
	var_18_bool = var_21_int == (int)0;
	return 2;
}


func_1904(var_257_bool, var_258_object)
{
	var_259_float = 0; var_260_object = Obj();
	var_258_object = var_260_object;
	func_1260(var_259_float, var_260_object);
	var_257_bool = var_259_float <= (float)40000.0;
	return 0;
}


func_1649(var_109_float, var_110_cvector, var_111_cvector)
{
	var_112_float = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0);
	var_110_cvector = var_113_cvector;
	var_111_cvector = var_114_cvector;
	func_1630(var_112_float, var_113_cvector, var_114_cvector);
	var_121_float = 0; var_122_cvector = CVector(0,0,0);
	var_110_cvector = var_122_cvector;
	func_1639(var_121_float, var_122_cvector);
	var_130_float = 0; var_131_cvector = CVector(0,0,0);
	var_111_cvector = var_131_cvector;
	func_1639(var_130_float, var_131_cvector);
	var_132_float = var_121_float * var_130_float;
	var_109_float = var_112_float / var_132_float;
	return 0;
}


func_1268(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj();
	FindActor(var_23_object, "player");
	var_23_object = var_21_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1912(var_55_bool, var_56_object)
{
	var_57_bool = 0; var_58_bool = 0;
	IsPlayerActor(var_56_object, var_58_bool);
	var_58_bool = var_55_bool;
	return 2;
}


func_1275(var_40_bool, var_41_object, var_42_string)
{
	var_43_bool = 0; var_44_bool = 0;
	var_47_bool = IsFuncExist(var_41_object, "HasProperty", (int)2);
	var_48_bool = var_47_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_40_bool = 0;
		return 2;
	}
	@@var_41_object:HasProperty(var_42_string, var_44_bool);
	var_44_bool = var_40_bool;
	return 2;
}


func_1917(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	var_18_bool = 0; var_19_object = Obj();
	var_15_object = var_19_object;
	func_1392(var_18_bool, var_19_object);
	var_52_bool = var_18_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_14_bool = 0;
		return 2;
	}
	var_53_object = GlobalVars[0];
	@@var_53_object:in(var_17_bool, var_15_object);
	var_54_bool = var_17_bool;
	if(var_54_bool != 0) {
		var_14_bool = 1;
		return 2;
	}
	var_55_bool = 0; var_56_object = Obj();
	var_15_object = var_56_object;
	func_1912(var_55_bool, var_56_object);
	var_55_bool = var_14_bool;
	return 2;
}


