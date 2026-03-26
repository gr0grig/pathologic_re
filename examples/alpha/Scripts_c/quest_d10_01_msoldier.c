// @IMPORTS: Hold/0,StopGroup0/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,SetRTEnvelope/2,WorkWithCorpse/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Face/1,Sleep/2,KillTimer/1,SetTimer/2,SetAttackState/1,CanSee/2,WaitForAnimEnd/1,Sleep/1,Trace/1,ReportAttack/1,Speak/1,RandVecCone3D/3,GetVictimMaterial/4,ReportHit/4,GetScene/1,AddActorByType/6,GetPFPosition/1,irand/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,FindActor/2,GetEyesHeight/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,CreateObjectSet/1,GetVariable/2,Trigger/2,GetGameTime/1,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,GetProperty/2,SignalDeath/1,ResetAAS/0,IsPlayerActor/2,ReportReputationChange/3,RemoveActor/1,CreateDiaryEntry/4
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:attack_on|W:hunt|W:attack_off|W:@Stop hunt|W:attack_begin1|W:shot|W:scripted|W:richochet.xml|W:Material|A:SetScriptProperty|W:attack_end1|A:in|W:attack|W:quest_d10_01|W:soldier_fight|W:fire|W:phys|W:player|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:2|W:playing |W:start: |W:end: |W:ood10MSoldier1|W:ood10MSoldier2|W:ood10MSoldier3|W:d10q01SoldierGotoPetr|W:pt_d10q01_petr|A:AddMark|A:ShowMap|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:GenerateMoney: iMin > iMax|W:Money|W:rifle_ammo|W:rusk|A:add|W:reputation|W:Adding diary entry|W:ui/NPC_Black.png
// @GLOBALS: 0:object:,1:object:
// @RUN_OP: 0x411
// @RUN_TASK: 6
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd5 vars=int,int
// @TASK_3: vars= params=1
// @EVENT_0: op=0x1a8 vars=object
// @EVENT_22: op=0x21d vars=object,int,float,float
// @EVENT_16: op=0x21f vars=object,string
// @EVENT_41: op=0x221 vars=object
// @TASK_4: vars=object params=1
// @EVENT_41: op=0x243 vars=object
// @EVENT_3: op=0x24c vars=object
// @EVENT_4: op=0x255 vars=object
// @EVENT_17: op=0x261 vars=object
// @EVENT_30: op=0x275 vars=object,object
// @EVENT_1: op=0x281 vars=object
// @EVENT_7: op=0x28f vars=int
// @TASK_5: vars=object,object,bool params=2
// @EVENT_3: op=0x31f vars=object
// @EVENT_1: op=0x32d vars=object
// @EVENT_17: op=0x39d vars=object
// @EVENT_30: op=0x3b5 vars=object,object
// @TASK_6: vars=cvector,cvector params=0
// @EVENT_0: op=0x3cc vars=object
// @EVENT_26: op=0x3d7 vars=string
// @EVENT_17: op=0x3e8 vars=object
// @EVENT_30: op=0x3ef vars=object,object
// @EVENT_6: op=0x3f1 vars=
// @EVENT_3: op=0x3fa vars=object
// @EVENT_1: op=0x41a vars=object
// @STANDALONE_EVENT_22: op=0x753 vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x75b vars=object,string
// @STANDALONE_EVENT_41: op=0x768 vars=object
// @STANDALONE_EVENT_6: op=0x7ed vars=
// @PE: 0x45,0xc5,0xd5,0x190,0x199,0x207,0x21d,0x21f,0x221,0x243,0x24c,0x255,0x261,0x275,0x281,0x28f,0x31f,0x32d,0x39d,0x3b5,0x3c1,0x3e8,0x3ef,0x41a,0x47b,0x5b3,0x5e4,0x5eb,0x5fc,0x605,0x60f,0x636,0x63c,0x642,0x65b,0x662,0x672,0x67e,0x68a,0x74b,0x753,0x768,0x775,0x78d,0x7b3,0x7f5

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	StopGroup0();
	return 0;
}


task_2_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector)
{
	if((int)1 != 0) {
		func_1481();
		var_16_bool = var_12_cvector == (int)16575;
		if(var_16_bool != 0) {
			var_17_object = Obj(); var_18_object = Obj();
			var_17_object = var_1_object;
			var_18_object = var_0_object;
			func_1608();
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_1634(var_61_object);
		}
		var_87_bool = var_12_cvector == (int)16583;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_1627();
		}
		var_97_bool = var_11_cvector == (int)16570;
		if(var_97_bool != 0) {
			var_98_bool = 0; var_99_object = Obj();
			var_99_object = var_1_object;
			func_1650(var_99_object);
			if(var_98_bool != 0) {
				var_106_object = Obj(); var_107_object = Obj();
				var_106_object = var_1_object;
				var_107_object = var_0_object;
				func_1590();
				var_110_string = "";
				func_197(var_12_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)15453);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)15454, (int)16572, (int)16571);
				return 0;
			}
			var_129_bool = 0; var_130_object = Obj();
			var_130_object = var_1_object;
			func_1662(var_130_object);
			if(var_129_bool != 0) {
				var_135_object = Obj(); var_136_object = Obj();
				var_135_object = var_1_object;
				var_136_object = var_0_object;
				func_1596();
				var_139_string = "";
				func_197(var_12_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)15459);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)15460, (int)-1, (int)16577);
				return 0;
			}
			var_144_bool = 0; var_145_object = Obj();
			var_145_object = var_1_object;
			func_1674(var_145_object);
			if(var_144_bool != 0) {
				var_150_object = Obj(); var_151_object = Obj();
				var_150_object = var_1_object;
				var_151_object = var_0_object;
				func_1602();
				var_154_string = "";
				func_197(var_12_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)15461);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)15462, (int)16580, (int)16579);
				return 0;
			}
			var_159_string = "";
			func_197(var_12_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)15465);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15466, (int)-1, (int)16583);
			return 0;
		}
		var_165_bool = var_11_cvector == (int)16580;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_197(var_12_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)15463);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15464, (int)-1, (int)16581);
			return 0;
		}
		var_172_bool = var_11_cvector == (int)16572;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_197(var_12_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)15455);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15456, (int)16574, (int)16573);
			return 0;
		}
		var_179_bool = var_11_cvector == (int)16574;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_197(var_12_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)15457);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15458, (int)-1, (int)16575);
			return 0;
		}
		var_3_string = true;
		var_185_bool = 0;
		func_2063(var_185_bool);
		if(var_185_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd6";
	
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_bool = 0;
	IsOverrideActive(var_13_bool);
	var_14_bool = var_13_bool == 0; //@nz
	if(var_14_bool != 0) {
		WorkWithCorpse(var_11_cvector);
	}
	return 2;
}


task_3_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_object, var_10_object, var_11_object, var_12_bool, var_13_cvector, var_14_cvector)
{
	return 0;
}


task_3_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector)
{
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	func_571();
	var_11_cvector = Obj();
	func_1896();
	return 0;
}


task_4_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object;
	if(var_12_bool != 0) {
		KillTimer((int)100);
		Face(var_0_object);
	}
	return 0;
}


task_4_event_4(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object;
	if(var_12_bool != 0) {
		SetTimer((int)100, (float)3.0);
		var_15_object = Obj();
		var_15_object = var_0_object;
		func_1385(var_15_object);
	}
	return 0;
}


	task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_46_object)
	{
	var_47_bool = 0; var_48_object = Obj();
	var_46_object = var_48_object;
	func_1294(var_47_bool, var_48_object);
	var_75_bool = var_47_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_76_object = Obj();
		var_46_object = var_76_object;
		func_1920(var_76_object);
		return 0;
	}
	func_571();
	var_84_object = Obj();
	var_46_object = var_84_object;
	func_1933(var_84_object);
	return 0;
	}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_cvector = var_14_object;
	var_12_cvector = var_15_object;
	func_1977(var_13_bool, var_14_object, var_15_object);
	if(var_13_bool != 0) {
		var_11_cvector = Obj();
		func_609();
	}
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_cvector = var_13_object;
	func_1949(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_571();
		var_58_object = Obj();
		var_11_cvector = var_58_object;
		func_1971(var_58_object);
	}
	return 0;
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	var_13_bool = var_11_cvector != (int)100;
	if(var_13_bool != 0) {
		return 0;
	}
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


task_5_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_object = var_2_object;
	if(var_13_object != 0) {
		var_14_bool = var_11_cvector == var_0_object;
		if(var_14_bool != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		var_15_object = Obj();
		var_15_object = var_0_object;
		func_1385(var_15_object);
	}
	return 0;
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_object = var_2_object;
	if(var_13_object != 0) {
		var_14_bool = var_11_cvector == var_0_object;
		if(var_14_bool != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		Trace("@Stop hunt");
		StopAnimation();
		StopGroup0();
	}
	return 0;
}


	task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_cvector, var_46_object)
	{
	var_47_bool = 0; var_48_object = Obj();
	var_46_object = var_48_object;
	func_1294(var_47_bool, var_48_object);
	var_75_bool = var_47_bool == 0; //@nz
	if(var_75_bool != 0) {
		return 0;
	}
	var_76_object = Obj();
	var_46_object = var_76_object;
	func_1920(var_76_object);
	var_83_bool = var_46_object == var_0_object;
	if(var_83_bool != 0) {
		var_1_object = 0;
	} else {
		var_1_object = var_46_object;
		var_84_object = var_2_object;
		if(var_84_object == 0) goto Label_948;
		StopAnimation();
		StopGroup0();
	}
Label_948:
	return 0;
	
	}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_cvector)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_cvector = var_14_object;
	var_12_cvector = var_15_object;
	func_1977(var_13_bool, var_14_object, var_15_object);
	if(var_13_bool != 0) {
		var_11_cvector = Obj();
		func_925();
	}
	return 0;
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0;
	var_14_object = GlobalVars[0];
	@@var_14_object:in(var_13_bool, var_11_object);
	var_15_bool = var_13_bool == 0; //@nz
	if(var_15_bool != 0) {
		var_16_object = Obj();
		var_11_object = var_16_object;
		func_961(var_16_object);
	}
	return 2;
}


task_6_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_string)
{
	var_12_object = Obj(); var_13_object = Obj();
	var_15_bool = var_11_string == "attack";
	if(var_15_bool != 0) {
		func_1170(Obj());
		var_16_object = var_13_object;
		func_1142();
		var_20_object = Obj();
		var_13_object = var_20_object;
		func_1933(var_20_object);
		var_13_object = 0;
	}
	return 2;
}


task_6_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = "";
	func_1573(var_12_bool, "quest_d10_01", "soldier_fight");
	return 0;
}


task_6_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_object, var_12_object)
{
	return 0;
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	func_1142();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_6_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0;
	var_14_bool = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1294(var_14_bool, var_15_object);
	var_48_bool = var_14_bool == 0; //@nz
	if(var_48_bool != 0) {
		return 2;
	}
	var_49_object = GlobalVars[0];
	@@var_49_object:in(var_13_bool, var_11_object);
	var_50_bool = var_13_bool;
	if(var_50_bool != 0) {
		func_1142();
		var_51_object = Obj();
		var_11_object = var_51_object;
		TaskCall(4);
		func_547(var_52_object, var_51_object);
		TaskReturn();
	}
	return 2;
}


task_6_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1949(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1142();
		var_57_object = Obj();
		var_11_object = var_57_object;
		func_2017(var_57_object);
	}
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0;
	var_11_object = var_15_object;
	var_12_int = var_16_int;
	var_13_float = var_17_float;
	func_1318(var_16_int, var_17_float);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_object, var_12_string)
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


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_2037(var_12_object);
	return 0;
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_object = Obj();
	func_1488(var_11_object);
	RemoveActor(var_11_object);
	Hold();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	func_1902();
	
Label_1044:
	func_1064(var_9_cvector, var_10_cvector);
	goto Label_1044;
}
EMIT "Return(); Pop(0)";


func_0()
{
	Hold();
	return 0;
}


func_1541(var_118_float, var_119_cvector)
{
	var_120_float = GetByIndex(var_119_cvector, 0);
	var_121_float = GetByIndex(var_119_cvector, 0);
	var_122_float = var_120_float * var_121_float;
	var_123_float = GetByIndex(var_119_cvector, 2);
	var_124_float = GetByIndex(var_119_cvector, 2);
	var_125_float = var_123_float * var_124_float;
	var_126_int = var_122_float + var_125_float;
	var_118_float = sqrt(var_126_int);
	return 0;
}


func_6(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0;
	var_0_object = var_18_object;
	var_28_bool = 0; var_29_object = Obj();
	var_18_object = var_29_object;
	func_1403(var_28_bool, var_29_object);
	var_68_bool = var_28_bool == 0; //@nz
	if(var_68_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	CreateDialog(var_24_object);
	var_69_int = 0;
	func_2059(var_69_int);
	@@var_24_object:SetNPCName(var_69_int);
	var_70_string = "";
	func_2061(var_70_string);
	@@var_24_object:SetPhoto(var_70_string);
	var_71_int = 0;
	func_1778(var_71_int);
	@@var_24_object:SetPlayerName(var_71_int);
	IsOverrideActive(var_25_bool);
	var_79_bool = var_25_bool;
	if(var_79_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	DoDialog(var_24_object);
	var_80_object = Obj(); var_81_object = Obj();
	var_18_object = var_80_object;
	var_24_object = var_81_object;
	TaskCall(2);
	func_69(var_82_object, var_83_object, var_84_string, var_85_bool, var_80_object, var_81_object);
	TaskReturn();
	@@var_24_object:IsDialogEnd(var_27_bool);
	
Label_51:
	var_161_bool = var_27_bool == 0; //@nz
	if(var_161_bool != 0) {
		sync();
		@@var_24_object:IsDialogEnd(var_27_bool);
		goto Label_51;
	}
	var_18_object = Obj();
	func_1459();
	StopDialog(var_24_object);
	@@var_24_object:GetReturnValue((int)-1);
	var_26_int = var_17_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_519(var_78_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_78_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_78_string);
	RemoveEnvelope();
	return 0;
}


func_2059(var_69_int)
{
	var_69_int = 14841;
	return 0;
}


func_2061(var_70_string)
{
	var_70_string = "ui/NPC_Black.png";
	return 0;
}


func_2063(var_100_bool)
{
	var_100_bool = 0;
	return 0;
}


func_1551(var_106_float, var_107_cvector, var_108_cvector)
{
	var_109_float = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0);
	var_107_cvector = var_110_cvector;
	var_108_cvector = var_111_cvector;
	func_1532(var_109_float, var_110_cvector, var_111_cvector);
	var_118_float = 0; var_119_cvector = CVector(0,0,0);
	var_107_cvector = var_119_cvector;
	func_1541(var_118_float, var_119_cvector);
	var_127_float = 0; var_128_cvector = CVector(0,0,0);
	var_108_cvector = var_128_cvector;
	func_1541(var_127_float, var_128_cvector);
	var_129_float = var_118_float * var_127_float;
	var_106_float = var_109_float / var_129_float;
	return 0;
}


func_1049()
{
	return 0;
}


func_1568(var_89_int, var_90_string)
{
	var_91_int = 0; var_92_int = 0;
	GetVariable(var_90_string, var_92_int);
	var_92_int = var_89_int;
	return 2;
}


func_547(var_0_object, var_51_object)
{
	var_53_bool = 0; var_54_bool = 0;
	var_0_object = var_51_object;
	Face(var_51_object);
	
Label_551:
	Sleep((float)0.5, var_54_bool);
	var_56_bool = 0;
	var_56_bool = 1;
	var_57_bool = var_54_bool == 0; //@nz
	if(var_57_bool != 1) {
		var_58_bool = 0; var_59_object = Obj();
		var_59_object = var_0_object;
		func_1294(var_58_bool, var_59_object);
		var_60_bool = var_58_bool == 0; //@nz
		if(var_60_bool != 1) {
			var_56_bool = 0;
		}
	}
	if(var_56_bool != 0) {
	} else {
		goto Label_551;
	}
	StopAsync();
	return 2;
	
}


func_1573(var_12_bool, var_13_string, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj();
	FindActor(var_16_object, var_13_string);
	var_17_bool = var_16_object == 0; //@ne
	if(var_17_bool != 0) {
		var_12_bool = 0;
		return 2;
	}
	Trigger(var_16_object, var_14_string);
	var_12_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1064(var_0_object, var_1_object)
{
	var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_1069:
	irand(var_19_int, (int)60);
	var_25_int = var_19_int + (int)30;
	Sleep(var_25_int, var_20_bool);
	var_26_bool = var_20_bool;
	if(var_26_bool != 0) {
		func_1049();
	} else {
		GetPFPosition(var_21_cvector);
		var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
		var_28_cvector = var_1_object;
		var_21_cvector = var_29_cvector;
		func_1504(var_27_float, var_28_cvector, var_29_cvector);
		var_33_bool = var_27_float > (int)40000;
		if(var_33_bool != 0) {
			FindPathTo(var_22_object, var_1_object);
			var_34_bool = var_22_object != 0; //@nn
			if(var_34_bool != 0) {
				RotatePath(var_22_object, var_20_bool);
				var_35_bool = var_20_bool == 0; //@nz
				if(var_35_bool != 0) {
				} else {
					FollowPath(var_22_object, (bool)0, var_20_bool);
					var_37_bool = var_20_bool == 0; //@nz
					if(var_37_bool != 0) {
						goto Label_1139;
					}
					var_38_float = GetByIndex(var_0_object, 0);
					var_39_float = GetByIndex(var_0_object, 2);
					Rotate(var_38_float, var_39_float, var_20_bool);
					var_40_bool = var_20_bool == 0; //@nz
					if(var_40_bool != 0) {
						goto Label_1139;
					}
					WaitForAnimEnd(var_20_bool);
					var_41_bool = var_20_bool == 0; //@nz
					if(var_41_bool != 0) {
						goto Label_1139;
					}
					goto Label_1140;
				EMIT "GOTO 0x464";
			}
				Sleep((int)1);
				var_22_object = 0;
				goto Label_1139;
		}
			var_43_float = GetByIndex(var_0_object, 0);
			var_44_float = GetByIndex(var_0_object, 2);
			Rotate(var_43_float, var_44_float, var_20_bool);
			var_45_bool = var_20_bool == 0; //@nz
			if(var_45_bool != 0) {
				goto Label_1139;
			}
			WaitForAnimEnd(var_20_bool);
			var_46_bool = var_20_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_1139;
			}
			goto Label_1140;
		}
	Label_1139:
		goto Label_1082;
	}
Label_1140:
	goto Label_1069;
	
}
EMIT "Return(); Pop(8)";


func_1585(var_32_float)
{
	var_33_float = 0; var_34_float = 0;
	GetGameTime(var_34_float);
	var_34_float = var_32_float;
	return 2;
}


func_1590()
{
	SetVariable("ood10MSoldier1", (int)1);
	return 0;
}


func_571()
{
	StopAsync();
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


func_1596()
{
	SetVariable("ood10MSoldier2", (int)1);
	return 0;
}


func_1602()
{
	SetVariable("ood10MSoldier3", (int)1);
	return 0;
}


func_69(var_0_object, var_1_object, var_2_object, var_3_string, var_80_object, var_81_object)
{
	var_0_object = var_81_object;
	var_1_object = var_80_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_87_bool = 0; var_88_object = Obj();
		var_88_object = var_1_object;
		func_1650(var_88_object);
		if(var_87_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_1590();
			var_99_string = "";
			func_197(var_81_object, "Neutral");
			@@@var_0_object:SetMessage((int)15453);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15454, (int)16572, (int)16571);
		} else {
				var_126_bool = 0; var_127_object = Obj();
				var_127_object = var_1_object;
				func_1662(var_127_object);
				if(var_126_bool != 0) {
					var_132_object = Obj(); var_133_object = Obj();
					var_132_object = var_1_object;
					var_133_object = var_0_object;
					func_1596();
					var_136_string = "";
					func_197(var_81_object, "Neutral");
					@@@var_0_object:SetMessage((int)15459);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)15460, (int)-1, (int)16577);
					goto Label_167;
				}
				var_141_bool = 0; var_142_object = Obj();
				var_142_object = var_1_object;
				func_1674(var_142_object);
				if(var_141_bool != 0) {
					var_147_object = Obj(); var_148_object = Obj();
					var_147_object = var_1_object;
					var_148_object = var_0_object;
					func_1602();
					var_151_string = "";
					func_197(var_81_object, "Neutral");
					@@@var_0_object:SetMessage((int)15461);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)15462, (int)16580, (int)16579);
					goto Label_167;
				}
				var_156_string = "";
				func_197(var_81_object, "Neutral");
				@@@var_0_object:SetMessage((int)15465);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)15466, (int)-1, (int)16583);
				goto Label_167;
		}
	}
Label_167:
	var_118_bool = 0;
	func_2063(var_118_bool);
	if(var_118_bool != 0) {

	Label_171:
		lshWaitForAnimEnd();
		var_119_string = var_3_string;
		if(var_119_string != 0) {
		} else {
			var_120_string = "";
			var_120_string = var_2_object;
			func_1463(var_120_string);
			goto Label_171;
	}
		PlayAnimation("all", "idle");

	Label_186:
		WaitForAnimEnd();
		var_123_string = var_3_string;
		if(var_123_string != 0) {
			goto Label_196;
		}
		PlayAnimation("all", "idle");
		goto Label_186;

	}
	goto Label_196;
	
Label_196:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x49";


func_1608()
{
	var_19_object = Obj(); var_20_object = Obj();
	func_1728(Obj());
	var_21_object = var_20_object;
	var_32_float = 0;
	func_1585(var_32_float);
	@@var_20_object:AddMark("d10q01SoldierGotoPetr", "pt_d10q01_petr", (int)1, (int)15467, var_32_float);
	func_2043();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1627()
{
	var_90_bool = 0; var_91_string = ""; var_92_string = "";
	func_1573(var_90_bool, "quest_d10_01", "soldier_fight");
	return 0;
}


func_1634(var_61_object)
{
	var_62_object = Obj(); var_63_string = ""; var_64_float = 0;
	func_1728(Obj());
	var_65_object = var_62_object;
	func_1745(var_62_object, "pt_d10q01_petr", (float)2);
	var_85_object = Obj();
	func_1728(var_85_object);
	@@var_61_object:ShowMap(var_85_object);
	return 0;
}


func_1650(var_87_bool)
{
	var_89_int = 0; var_90_string = "";
	func_1568(var_89_int, "ood10MSoldier1");
	var_94_bool = var_89_int == (int)0;
	if(var_94_bool != 0) {
		var_87_bool = 1;
		return 0;
	}
	var_87_bool = 0;
	return 0;
}


func_1142()
{
	StopGroup0();
	Stop();
	return 0;
}


func_1147(var_172_string, var_173_int)
{
	var_175_bool = var_173_int == (int)1;
	if(var_175_bool != 0) {
		var_172_string = "fire";
		return 0;
	}
	var_172_string = "phys";
	return 0;
}


func_1662(var_126_bool)
{
	var_128_int = 0; var_129_string = "";
	func_1568(var_128_int, "ood10MSoldier2");
	var_131_bool = var_128_int == (int)0;
	if(var_131_bool != 0) {
		var_126_bool = 1;
		return 0;
	}
	var_126_bool = 0;
	return 0;
}


func_1155(var_100_cvector, var_101_object)
{
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0);
	GetPosition(var_104_cvector);
	@@var_101_object:GetPosition(var_105_cvector);
	var_100_cvector = var_105_cvector - var_104_cvector;
	return 4;
}


func_1674(var_141_bool)
{
	var_143_int = 0; var_144_string = "";
	func_1568(var_143_int, "ood10MSoldier3");
	var_146_bool = var_143_int == (int)0;
	if(var_146_bool != 0) {
		var_141_bool = 1;
		return 0;
	}
	var_141_bool = 0;
	return 0;
}


func_1162(var_35_float, var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
	GetPosition(var_40_cvector);
	@@var_36_object:GetPosition(var_41_cvector);
	var_42_cvector = var_41_cvector - var_40_cvector;
	var_35_float = var_42_cvector | var_42_cvector;
	return 6;
}


func_1170(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj();
	FindActor(var_18_object, "player");
	var_18_object = var_16_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1686(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj();
	GetDiaryRoot(var_52_object);
	var_53_bool = var_52_object == 0; //@nz
	if(var_53_bool != 0) {
		Trace("Can't retrieve diary root");
		var_50_object = 0;
		return 2;
	}
	var_52_object = var_50_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1177(var_38_bool, var_39_object, var_40_string)
{
	var_41_bool = 0; var_42_bool = 0;
	var_45_bool = IsFuncExist(var_39_object, "HasProperty", (int)2);
	var_46_bool = var_45_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_38_bool = 0;
		return 2;
	}
	@@var_39_object:HasProperty(var_40_string, var_42_bool);
	var_42_bool = var_38_bool;
	return 2;
}


func_666(var_0_object, var_1_object, var_2_object, var_64_object, var_65_bool)
{
	var_69_bool = 0; var_70_bool = 0; var_71_bool = 0; var_72_bool = 0;
	var_0_object = var_64_object;
	Face(var_0_object);
	var_73_bool = var_65_bool;
	if(var_73_bool != 0) {
		PlayAnimation("all", "attack_on");
		WaitForAnimEnd();
	}
	LockAnimationEnd("all", "attack_on");
	SetAttackState((bool)1);
	
Label_685:
	var_79_bool = 0; var_80_object = Obj();
	var_80_object = var_0_object;
	func_1294(var_79_bool, var_80_object);
	if(var_79_bool != 0) {
		CanSee(var_72_bool, var_0_object);
		var_81_bool = var_72_bool;
		if(var_81_bool != 0) {
			func_835(var_72_bool);
		} else {
				var_211_object = Obj();
				var_211_object = var_0_object;
				func_1385(var_211_object);
				var_2_object = true;
				PlayAnimation("all", "hunt");
				WaitForAnimEnd(var_71_bool);
				var_222_bool = var_71_bool == 0; //@nz
				if(var_222_bool != 0) {
					var_223_bool = var_1_object != 0; //@nn
					if(var_223_bool != 0) {
						func_830(var_71_bool, var_72_bool);
					}
					LockAnimationEnd("all", "attack_on");
					goto Label_685;
				}
				var_226_bool = 0; var_227_object = Obj();
				var_227_object = var_0_object;
				func_1294(var_226_bool, var_227_object);
				var_228_bool = var_226_bool == 0; //@nz
				if(var_228_bool != 0) {
				} else {
					CanSee(var_72_bool, var_0_object);
					var_232_bool = var_72_bool;
					if(var_232_bool != 0) {
						var_2_object = false;
						Face(var_0_object);
						func_835(var_72_bool);
						goto Label_777;
					}
					LockAnimationEnd("all", "attack_on");
					Sleep((int)3, var_71_bool);
					var_236_bool = var_71_bool == 0; //@nz
					if(var_236_bool != 0) {
						var_237_bool = var_1_object != 0; //@nn
						if(var_237_bool != 0) {
							func_830(var_71_bool, var_72_bool);
						}
						LockAnimationEnd("all", "attack_on");
						goto Label_685;
					}
					var_240_bool = 0; var_241_object = Obj();
					var_241_object = var_0_object;
					func_1294(var_240_bool, var_241_object);
					var_242_bool = var_240_bool == 0; //@nz
					if(var_242_bool != 0) {
						goto Label_787;
					}
					var_2_object = false;
					CanSee(var_72_bool, var_0_object);
					var_243_bool = var_72_bool;
					if(var_243_bool != 0) {
						Face(var_0_object);
						func_835(var_72_bool);
						goto Label_777;
					}
					goto Label_787;
				}
	}
		Label_787:
			SetAttackState((bool)0);
			StopAsync();
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
			return 4;
	}
Label_777:
	var_209_bool = var_1_object != 0; //@nn
	if(var_209_bool != 0) {
		func_830(var_71_bool, var_72_bool);
	} else {
		Sleep((int)2);

	}
	goto Label_685;
	
}


func_1699(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0;
	func_1686(Obj());
	var_50_object = var_47_object;
	@@var_47_object:Find(var_43_int, var_48_object);
	var_55_bool = var_48_object == 0; //@nz
	if(var_55_bool != 0) {
		var_57_int = "Can't find diary parent with id: " + var_43_int;
		Trace(var_57_int);
		var_41_bool = 0;
		return 6;
	}
	@@var_48_object:AddChild(var_42_object);
	SetVariable("player_diary", (int)1);
	@@var_42_object:GetCategory(var_49_int);
	SetDiarySection(var_49_int);
	var_41_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1189(var_147_float, var_148_object, var_149_float, var_150_int)
{
	var_151_int = 0; var_152_string = ""; var_153_int = 0; var_154_float = 0; var_155_float = 0; var_156_float = 0; var_157_int = 0; var_158_string = ""; var_159_int = 0; var_160_float = 0; var_161_float = 0; var_162_float = 0;
	var_163_bool = 0; var_164_object = Obj(); var_165_string = "";
	var_148_object = var_164_object;
	func_1177(var_163_bool, var_164_object, "health");
	var_166_bool = var_163_bool == 0; //@nz
	if(var_166_bool != 0) {
		var_147_float = 0.0;
		return 12;
	}
	var_167_bool = 0; var_168_object = Obj(); var_169_string = "";
	var_148_object = var_168_object;
	func_1177(var_167_bool, var_168_object, "armor");
	var_170_bool = var_167_bool == 0; //@nz
	if(var_170_bool != 0) {
		var_157_int = 0;
	} else {
			@@var_148_object:GetProperty("armor", var_157_int);
	}
	var_172_string = ""; var_173_int = 0;
	var_150_int = var_173_int;
	func_1147(var_172_string, var_173_int);
	var_158_string = "armor_" + var_172_string;
	var_176_bool = 0; var_177_object = Obj(); var_178_string = "";
	var_148_object = var_177_object;
	var_158_string = var_178_string;
	func_1177(var_176_bool, var_177_object, var_178_string);
	var_179_bool = var_176_bool == 0; //@nz
	if(var_179_bool != 0) {
		var_159_int = 0;
	} else {
		@@var_148_object:GetProperty(var_158_string, var_159_int);

	}
	var_180_float = 0; var_181_float = 0; var_182_float = 0;
	var_183_int = var_157_int + var_159_int;
	var_181_float = var_183_int / (float)100.0;
	func_1508(var_180_float, var_181_float, (float)1);
	var_180_float = var_160_float;
	@@var_148_object:GetProperty("health", var_161_float);
	var_188_int = (int)1 - var_160_float;
	var_162_float = var_149_float * var_188_int;
	var_190_float = 0; var_191_float = 0; var_192_float = 0; var_193_float = 0;
	var_191_float = var_161_float - var_162_float;
	func_1515(var_190_float, var_191_float, (float)0, (float)1);
	@@var_148_object:SetProperty("health", var_190_float);
	var_162_float = var_147_float;
	return 12;
	
}


func_1728(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	GetMainOutdoorScene(var_24_object);
	var_26_bool = var_24_object == 0; //@ne
	if(var_26_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_25_object = 0;
		var_25_object = var_21_object;
		return 4;
	}
	@@var_24_object:GetMap(var_25_object);
	var_25_object = var_21_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_197(var_2_object, var_99_string)
{
	var_100_bool = 0;
	func_2063(var_100_bool);
	var_101_bool = var_100_bool == 0; //@nz
	if(var_101_bool != 0) {
		return 0;
	}
	var_102_bool = var_99_string == var_2_object;
	if(var_102_bool != 0) {
		return 0;
	}
	var_103_string = "";
	var_99_string = var_103_string;
	func_1463(var_103_string);
	var_2_object = var_99_string;
	return 0;
}


func_1745(var_62_object, var_63_string, var_64_float)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_object = Obj(); var_69_bool = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_object = Obj(); var_73_bool = 0;
	GetMainOutdoorScene(var_72_object);
	var_74_bool = var_72_object == 0; //@ne
	if(var_74_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_72_object:GetLocator(var_63_string, var_73_bool, var_70_cvector, var_71_cvector);
	var_76_bool = var_73_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_78_int = "Warning: outdoor scene locator " + var_63_string;
		var_80_int = var_78_int + " doesnt exist";
		Trace(var_80_int);
	}
	@@var_72_object:GetMap(var_62_object);
	var_81_bool = var_62_object == 0; //@ne
	if(var_81_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_83_float = GetByIndex(var_70_cvector, 0);
	var_84_float = GetByIndex(var_70_cvector, 2);
	@@var_62_object:SetMapParams(var_83_float, var_84_float, var_64_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_1253(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	@@var_32_object:IsDead(var_34_bool);
	var_34_bool = var_31_bool;
	return 2;
}


func_1258(var_20_bool, var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	var_26_bool = var_21_object == 0; //@ne
	if(var_26_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	var_27_bool = 0;
	var_27_bool = 0;
	var_30_bool = IsFuncExist(var_21_object, "IsDead", (int)1);
	if(var_30_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_21_object = var_32_object;
		func_1253(var_31_bool, var_32_object);
		if(var_31_bool != 0) {
			var_27_bool = 1;
		}
	}
	if(var_27_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	GetScene(var_24_object);
	var_35_bool = var_24_object == 0; //@ne
	if(var_35_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	@@var_21_object:GetScene(var_25_object);
	var_36_bool = var_24_object != var_25_object;
	if(var_36_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	var_20_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1778(var_71_int)
{
	var_72_int = 0; var_73_int = 0;
	GetVariable("player", var_73_int);
	var_76_bool = var_73_int == (int)0;
	if(var_76_bool != 0) {
		var_71_int = 200001;
		return 2;
	EMIT "GOTO 0x701";
	}
	var_78_bool = var_73_int == (int)1;
	if(var_78_bool != 0) {
		var_71_int = 200002;
		return 2;
	}
	var_71_int = 200003;
	return 2;
}


func_1795(var_20_int, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0;
	var_30_bool = var_20_int > var_21_int;
	if(var_30_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_32_bool = var_20_int != var_21_int;
	if(var_32_bool != 0) {
		var_33_int = var_21_int - var_20_int;
		irand(var_27_int, var_33_int);
	} else {
		var_39_bool = var_20_int == (int)0;
		if(var_39_bool == 0) goto Label_1813;
		return 8;
	}
Label_1813:
	(int)0 = (int)0 + var_20_int;
	var_35_bool = var_26_int == (int)0;
	if(var_35_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_28_int, "Money");
	AddItem(var_29_bool, var_28_int, (int)0, var_26_int);
	return 8;
	
}


func_1294(var_16_bool, var_17_object)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj();
	var_17_object = var_21_object;
	func_1258(var_20_bool, var_21_object);
	var_37_bool = var_20_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	var_38_bool = 0; var_39_object = Obj(); var_40_string = "";
	var_17_object = var_39_object;
	func_1177(var_38_bool, var_39_object, "noaccess");
	var_47_bool = var_38_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_16_bool = 1;
		return 2;
	}
	@@var_17_object:GetProperty("noaccess", var_19_int);
	var_16_bool = var_19_int == (int)0;
	return 2;
}


func_1825()
{
	var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_bool = 0;
	ClearSubContainer((int)0);
	var_20_int = 0; var_21_int = 0;
	func_1795((int)500, (int)1000);
	irand(var_17_int, (int)4);
	var_42_bool = var_17_int != (int)0;
	if(var_42_bool != 0) {
		var_43_int = 0; var_44_string = "";
		func_1862(var_43_int, "rifle_ammo");
		AddItem(var_18_bool, var_43_int, (int)0, var_17_int);
	}
	irand(var_17_int, (int)3);
	var_50_bool = var_17_int == (int)0;
	if(var_50_bool != 0) {
		var_51_int = 0; var_52_string = "";
		func_1862(var_51_int, "rusk");
		AddItem(var_18_bool, var_51_int, (int)0, (int)1);
	}
	return 4;
}


func_1318(var_15_object, var_16_int)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_object = Obj(); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = "";
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_16_int != (int)4;
	if(var_40_bool != 0) {
		var_42_bool = var_16_int != (int)5;
		if(var_42_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		GetScene(var_28_object);
		GetPosition(var_30_cvector);
		GetEyesHeight(var_31_float);
		var_43_float = GetByIndex(var_30_cvector, 1);
		var_45_float = var_31_float / (int)2;
		var_43_float = var_43_float + var_45_float;
		SetByIndex(var_30_cvector, 1) = var_43_float;
		AddActorByType(var_29_object, "scripted", var_28_object, var_30_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_29_object = 0;
		var_28_object = 0;
	}
	var_49_bool = var_15_object == 0; //@ne
	if(var_49_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_32_int);
	var_51_bool = var_32_int < (int)0;
	if(var_51_bool != 0) {
		return 20;
	}
	@@var_15_object:GetPosition(var_33_cvector);
	GetPosition(var_34_cvector);
	GetDirection(var_35_cvector);
	var_36_cvector = var_34_cvector - var_33_cvector;
	var_52_float = GetByIndex(var_36_cvector, 0);
	var_53_float = GetByIndex(var_35_cvector, 0);
	var_54_float = var_52_float * var_53_float;
	var_55_float = GetByIndex(var_36_cvector, 2);
	var_56_float = GetByIndex(var_35_cvector, 2);
	var_57_float = var_55_float * var_56_float;
	var_58_int = var_54_float + var_57_float;
	var_60_bool = var_58_int >= (int)0;
	if(var_60_bool != 0) {
		var_37_string = "fhit";
	} else {
		var_37_string = "bhit";
	}
	var_63_int = var_37_string + "1";
	var_65_int = var_37_string + "2";
	FadeSecondaryAnimation("hit_react", var_63_int, var_65_int, (int)-10);
	return 20;
	
}


func_830(var_0_object, var_1_object)
{
	var_0_object = var_1_object;
	var_1_object = 0;
	Face(var_0_object);
	return 0;
}


func_835(var_0_object)
{
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_object = Obj(); var_86_int = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_object = Obj(); var_90_object = Obj(); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_object = Obj(); var_95_int = 0; var_96_cvector = CVector(0,0,0); var_97_float = 0; var_98_object = Obj(); var_99_object = Obj();
	ReportAttack(var_0_object);
	GetDirection(var_91_cvector);
	var_100_cvector = CVector(0,0,0); var_101_object = Obj();
	var_101_object = var_0_object;
	func_1155(var_100_cvector, var_101_object);
	var_100_cvector = var_92_cvector;
	var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0);
	var_91_cvector = var_107_cvector;
	var_92_cvector = var_108_cvector;
	func_1551(var_106_float, var_107_cvector, var_108_cvector);
	var_131_bool = var_106_float < (float)0.9659258127212524;
	if(var_131_bool != 0) {
		return 18;
	}
	PlayAnimation("all", "attack_begin1");
	WaitForAnimEnd();
	Speak("shot");
	GetDirection(var_91_cvector);
	var_135_cvector = CVector(0,0,0); var_136_object = Obj();
	var_136_object = var_0_object;
	func_1155(var_135_cvector, var_136_object);
	var_135_cvector = var_92_cvector;
	var_137_float = GetByIndex(var_92_cvector, 1);
	var_138_float = 0; var_139_object = Obj();
	var_139_object = var_0_object;
	func_1396(var_138_float, var_139_object);
	var_137_float = var_137_float + var_138_float;
	SetByIndex(var_92_cvector, 1) = var_137_float;
	RandVecCone3D(var_93_cvector, var_92_cvector, (float)0.2617993950843811);
	GetVictimMaterial(var_93_cvector, var_94_object, var_95_int, var_96_cvector);
	var_145_bool = var_94_object != 0; //@nn
	if(var_145_bool != 0) {
		var_146_bool = var_94_object == var_0_object;
		if(var_146_bool != 0) {
			var_147_float = 0; var_148_object = Obj(); var_149_float = 0; var_150_int = 0;
			var_148_object = var_0_object;
			func_1189(var_147_float, var_148_object, (float)1.5, (int)0);
			var_147_float = var_97_float;
			ReportHit(var_0_object, (int)2, var_97_float, (float)1.5);
		} else {
			var_204_bool = var_95_int != (int)-1;
			if(var_204_bool == 0) goto Label_913;
			GetScene(var_98_object);
			AddActorByType(var_99_object, "scripted", var_98_object, var_96_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
			@@var_99_object:SetScriptProperty("Material", var_95_int);
			var_99_object = 0;
			var_98_object = 0;
		}
	}
Label_913:
	PlayAnimation("all", "attack_end1");
	WaitForAnimEnd();
	LockAnimationEnd("all", "attack_on");
	return 18;
	
}
EMIT "Stack[-6] = 0";


func_1862(var_43_int, var_44_string)
{
	var_45_int = 0; var_46_int = 0;
	GetInvItemByName(var_46_int, var_44_string);
	var_46_int = var_43_int;
	return 2;
}


func_1867(var_13_object)
{
	var_14_object = Obj();
	var_13_object = var_14_object;
	TaskCall(3);
	func_400(var_14_object);
	TaskReturn();
	return 0;
}


func_1385(var_211_object)
{
	var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0); var_216_cvector = CVector(0,0,0); var_217_cvector = CVector(0,0,0);
	@@var_211_object:GetPosition(var_215_cvector);
	GetPosition(var_216_cvector);
	var_217_cvector = var_215_cvector - var_216_cvector;
	var_218_float = GetByIndex(var_217_cvector, 0);
	var_219_float = GetByIndex(var_217_cvector, 2);
	RotateAsync(var_218_float, var_219_float);
	return 6;
}


func_1902()
{
	var_11_object = GlobalVars[0];
	func_1526(Obj());
	var_12_object = var_11_object;
	GlobalVars[0] = var_11_object;
	return 0;
}


func_1396(var_138_float, var_139_object)
{
	var_140_float = 0; var_141_float = 0; var_142_float = 0; var_143_float = 0;
	GetEyesHeight(var_142_float);
	@@var_139_object:GetEyesHeight(var_143_float);
	var_138_float = var_143_float - var_142_float;
	return 4;
}


func_1909(var_62_object, var_63_bool)
{
	var_64_object = Obj(); var_65_bool = 0;
	var_62_object = var_64_object;
	var_63_bool = var_65_bool;
	TaskCall(5);
	func_666(var_66_object, var_67_object, var_68_bool, var_64_object, var_65_bool);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_1403(var_28_bool, var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0;
	@@var_29_object:GetPosition(var_39_cvector);
	@@var_29_object:GetEyesHeight(var_38_float);
	var_46_float = GetByIndex(var_39_cvector, 1);
	var_46_float = var_46_float + var_38_float;
	SetByIndex(var_39_cvector, 1) = var_46_float;
	GetPosition(var_40_cvector);
	GetEyesHeight(var_38_float);
	var_47_float = GetByIndex(var_40_cvector, 1);
	var_47_float = var_47_float + var_38_float;
	SetByIndex(var_40_cvector, 1) = var_47_float;
	var_41_cvector = var_39_cvector - var_40_cvector;
	var_48_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (float)0;
	var_49_int = var_41_cvector | var_41_cvector;
	var_50_float = sqrt(var_49_int);
	var_41_cvector = var_41_cvector / var_50_float;
	var_42_cvector = -var_41_cvector;
	var_52_float = var_41_cvector * (int)70;
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	var_54_cvector = var_42_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1494(var_53_cvector, var_54_cvector);
	var_62_float = var_53_cvector * (int)25;
	var_63_int = var_52_float + var_62_float;
	var_43_cvector = var_63_int - CVector(0.0, 10.0, 0.0);
	var_44_cvector = var_40_cvector + var_43_cvector;
	IsOverrideActive(var_45_bool);
	var_65_bool = var_45_bool;
	if(var_65_bool != 0) {
		var_28_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_44_cvector, var_42_cvector);
	var_66_float = GetByIndex(var_43_cvector, 0);
	var_67_float = GetByIndex(var_43_cvector, 2);
	Rotate(var_66_float, var_67_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_28_bool = 1;
	return 16;
}


func_1920(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	var_24_bool = var_21_object == 0; //@ne
	if(var_24_bool != 0) {
		return 2;
	}
	var_25_object = GlobalVars[0];
	@@var_25_object:in(var_23_bool, var_21_object);
	var_26_bool = var_23_bool == 0; //@nz
	if(var_26_bool != 0) {
		var_27_object = GlobalVars[0];
		@@var_27_object:add(var_21_object);
	}
	return 2;
}


func_1933(var_20_object)
{
	var_21_object = Obj();
	var_20_object = var_21_object;
	func_1920(var_21_object);
	var_28_object = Obj(); var_29_bool = 0;
	var_20_object = var_28_object;
	func_1909(var_28_object, (bool)1);
	return 0;
}


func_400(var_14_object)
{
	func_1825();
	var_55_object = Obj();
	var_14_object = var_55_object;
	func_409(var_55_object);
	return 0;
}


func_1944(var_53_bool, var_54_object)
{
	var_55_bool = 0; var_56_bool = 0;
	IsPlayerActor(var_54_object, var_56_bool);
	var_56_bool = var_53_bool;
	return 2;
}


func_409(var_55_object)
{
	EventDisable(0);
	var_56_object = Obj();
	var_55_object = var_56_object;
	func_432(var_56_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_420:
	Hold();
	goto Label_420;
}
EMIT "Return(); Pop(0)";


func_1949(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	var_16_bool = 0; var_17_object = Obj();
	var_13_object = var_17_object;
	func_1294(var_16_bool, var_17_object);
	var_50_bool = var_16_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_12_bool = 0;
		return 2;
	}
	var_51_object = GlobalVars[0];
	@@var_51_object:in(var_15_bool, var_13_object);
	var_52_bool = var_15_bool;
	if(var_52_bool != 0) {
		var_12_bool = 1;
		return 2;
	}
	var_53_bool = 0; var_54_object = Obj();
	var_13_object = var_54_object;
	func_1944(var_53_bool, var_54_object);
	var_53_bool = var_12_bool;
	return 2;
}


func_432(var_56_object)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_string = ""; var_62_object = Obj(); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_string = ""; var_72_object = Obj(); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0);
	var_77_bool = var_56_object == 0; //@ne
	if(var_77_bool != 0) {
		var_78_string = "";
		func_519("fdie");
	} else {
		@@var_56_object:GetPosition(var_67_cvector);
		GetPosition(var_68_cvector);
		GetDirection(var_69_cvector);
		var_70_cvector = var_68_cvector - var_67_cvector;
		var_81_float = GetByIndex(var_70_cvector, 0);
		var_82_float = GetByIndex(var_69_cvector, 0);
		var_83_float = var_81_float * var_82_float;
		var_84_float = GetByIndex(var_70_cvector, 2);
		var_85_float = GetByIndex(var_69_cvector, 2);
		var_86_float = var_84_float * var_85_float;
		var_87_int = var_83_float + var_86_float;
		var_89_bool = var_87_int >= (int)0;
		if(var_89_bool != 0) {
			var_71_string = "fdie";
		} else {
				var_71_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_56_object = var_72_object;
		var_92_bool = IsFuncExist(var_56_object, "GetScriptProperty", (int)2);
		if(var_92_bool != 0) {
			@@var_56_object:HasScriptProperty(var_73_bool, "Owner");
			var_94_bool = var_73_bool;
			if(var_94_bool != 0) {
				@@var_56_object:GetScriptProperty(var_72_object, "Owner");
				var_96_bool = var_72_object == 0; //@ne
				if(var_96_bool != 0) {
					var_56_object = var_72_object;
				}
			}
		}
		var_99_bool = IsFuncExist(var_72_object, "@GetEyesHeight", (int)1);
		if(var_99_bool != 0) {
			@@var_72_object:GetEyesHeight(var_75_float);
			var_76_cvector = CVector(0.0, 0.0, 0.0);
			var_100_float = GetByIndex(var_76_cvector, 1);
			var_75_float = var_100_float;
			SetByIndex(var_76_cvector, 1) = var_100_float;
			LookAsync(var_56_object, "head", var_76_cvector);
			var_74_bool = 1;
		} else {
			var_74_bool = 0;

		}
		PlayAnimation("all", var_71_string);
		WaitForAnimEnd();
		var_103_bool = var_74_bool;
		if(var_103_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_71_string);
		RemoveEnvelope();
		var_72_object = 0;
	}
	return 20;
	
}


func_1459()
{
	CameraSwitchToNormal();
	return 0;
}


func_1971(var_58_object)
{
	var_59_object = Obj();
	var_58_object = var_59_object;
	func_2017(var_59_object);
	return 0;
}


func_1463(var_103_string)
{
	var_104_float = 0; var_105_float = 0; var_106_float = 0; var_107_float = 0;
	var_109_int = "playing " + var_103_string;
	Trace(var_109_int);
	lshGetAnimTimes(var_103_string, var_106_float, var_107_float);
	lshPlayAnimation(var_106_float, var_107_float);
	var_111_int = "start: " + var_106_float;
	Trace(var_111_int);
	var_113_int = "end: " + var_107_float;
	Trace(var_113_int);
	return 4;
}


func_1977(var_13_bool, var_14_object, var_15_object)
{
	var_16_float = 0; var_17_bool = 0; var_18_float = 0; var_19_bool = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_string = "";
	var_15_object = var_21_object;
	func_1177(var_20_bool, var_21_object, "reputation");
	var_29_bool = var_20_bool == 0; //@nz
	if(var_29_bool != 0) {
		var_13_bool = 0;
		return 4;
	}
	@@var_15_object:GetProperty("reputation", var_18_float);
	var_32_bool = var_18_float < (float)0.5;
	if(var_32_bool != 0) {
		var_13_bool = 0;
		return 4;
	}
	CanSee(var_19_bool, var_14_object);
	var_33_bool = 0;
	var_33_bool = 1;
	var_34_bool = var_19_bool;
	if(var_34_bool != 1) {
		var_35_float = 0; var_36_object = Obj();
		var_14_object = var_36_object;
		func_1162(var_35_float, var_36_object);
		var_44_bool = var_35_float <= (float)160000.0;
		if(var_44_bool != 1) {
			var_33_bool = 0;
		}
	}
	if(var_33_bool != 0) {
		ReportReputationChange(var_14_object, var_15_object, (float)-0.20000000298023224);
		var_13_bool = 1;
		return 4;
	}
	var_13_bool = 0;
	return 4;
}


func_961(var_16_object)
{
	func_1142();
	var_17_int = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	TaskCall(1);
	func_6(var_19_object, var_17_int, var_18_object);
	TaskReturn();
	return 0;
}


func_1481()
{
	var_14_bool = 0;
	func_2063(var_14_bool);
	if(var_14_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1488(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	self(var_13_object);
	var_13_object = var_11_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1494(var_53_cvector, var_54_cvector)
{
	var_56_float = 0; var_57_float = 0;
	var_58_int = var_54_cvector | var_54_cvector;
	var_57_float = sqrt(var_58_int);
	var_59_float = 9.999999974752427e-07;
	var_60_bool = var_57_float < var_59_float;
	if(var_60_bool != 0) {
		var_53_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_53_cvector = var_54_cvector / var_57_float;
	return 2;
}


func_1504(var_27_float, var_28_cvector, var_29_cvector)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0);
	var_31_cvector = var_29_cvector - var_28_cvector;
	var_27_float = var_31_cvector | var_31_cvector;
	return 2;
}


func_2017(var_57_object)
{
	var_58_bool = 0; var_59_bool = 0;
	var_60_object = GlobalVars[0];
	@@var_60_object:in(var_59_bool, var_57_object);
	var_61_bool = var_59_bool;
	if(var_61_bool != 0) {
		var_62_object = Obj(); var_63_bool = 0;
		var_57_object = var_62_object;
		func_1909(var_62_object, (bool)1);
	}
	return 2;
}


func_1508(var_180_float, var_181_float, var_182_float)
{
	var_185_bool = var_181_float < var_182_float;
	if(var_185_bool != 0) {
		var_181_float = var_180_float;
	} else {
		var_182_float = var_180_float;
	}
	return 0;
	
}


func_1515(var_190_float, var_191_float, var_192_float, var_193_float)
{
	var_194_bool = var_191_float < var_192_float;
	if(var_194_bool != 0) {
		var_192_float = var_190_float;
		return 0;
	}
	var_195_bool = var_191_float > var_193_float;
	if(var_195_bool != 0) {
		var_193_float = var_190_float;
		return 0;
	}
	var_191_float = var_190_float;
	return 0;
}


func_2037(var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	func_1867(var_13_object);
	return 0;
}


func_1526(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj();
	CreateObjectSet(var_14_object);
	var_14_object = var_12_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2043()
{
	var_35_object = Obj(); var_36_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_36_object, (int)188, (int)1, (int)15473);
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0;
	var_36_object = var_42_object;
	func_1699(var_41_bool, var_42_object, (int)186);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1532(var_109_float, var_110_cvector, var_111_cvector)
{
	var_112_float = GetByIndex(var_110_cvector, 0);
	var_113_float = GetByIndex(var_111_cvector, 0);
	var_114_float = var_112_float * var_113_float;
	var_115_float = GetByIndex(var_110_cvector, 2);
	var_116_float = GetByIndex(var_111_cvector, 2);
	var_117_float = var_115_float * var_116_float;
	var_109_float = var_114_float + var_117_float;
	return 0;
}


