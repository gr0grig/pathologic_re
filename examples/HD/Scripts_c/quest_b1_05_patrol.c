// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,Sleep/1,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,SetRTEnvelope/2,Hold/0,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,AddItem/4,SetVariable/2,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|W:b1q05PatrolGroup|W:pt_b1q05_patrol1|A:AddMark|A:ShowMap|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png|W:b1q05ToAttack|A:RemoveStationaryActor
// @GLOBALS: 0:object:
// @RUN_OP: 0x14c
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9f vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x155 vars=object
// @EVENT_1: op=0x173 vars=object
// @EVENT_3: op=0x18b vars=object
// @EVENT_17: op=0x1a3 vars=object
// @EVENT_7: op=0x1db vars=int
// @TASK_3: vars=object,int,int,bool,float,int params=1
// @TASK_4: vars=bool,object,bool params=6
// @EVENT_7: op=0x52f vars=int
// @EVENT_1: op=0x54a vars=object
// @EVENT_2: op=0x559 vars=object
// @EVENT_10: op=0x5df vars=object
// @EVENT_41: op=0x5ea vars=object
// @TASK_5: vars= params=1
// @EVENT_0: op=0x60d vars=object
// @EVENT_22: op=0x68c vars=object,int,float,float
// @EVENT_16: op=0x68e vars=object,string
// @EVENT_41: op=0x690 vars=object
// @STANDALONE_EVENT_22: op=0x9fe vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xa06 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0xa10 vars=object,string
// @STANDALONE_EVENT_41: op=0xa1d vars=object
// @PE: 0x4a,0x89,0x9f,0x155,0x173,0x18b,0x1a3,0x1b1,0x1db,0x1f2,0x256,0x262,0x265,0x4f6,0x52f,0x54a,0x559,0x5cd,0x5df,0x5ea,0x5f3,0x5fe,0x672,0x68c,0x68e,0x690,0x692,0x899,0x8a0,0x903,0x99f,0x9fe,0xa06,0xa1d

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	if((int)1 != 0) {
		func_2137();
		var_24_bool = var_20_bool == (int)32276;
		if(var_24_bool != 0) {
			var_25_object = Obj(); var_26_object = Obj();
			var_25_object = var_1_object;
			var_26_object = var_0_object;
			func_2285();
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_2307(var_75_object);
		}
		var_101_bool = var_20_bool == (int)32277;
		if(var_101_bool != 0) {
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_2285();
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_2307(var_105_object);
		}
		var_107_bool = var_19_object == (int)32269;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_137(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530942);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530962, (int)32271, (int)32281);
			@@@var_0_object:AddReply((int)530960, (int)32280, (int)32279);
			@@@var_0_object:AddReply((int)530959, (int)-1, (int)32278);
			return 0;
		}
		var_136_bool = var_19_object == (int)32280;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_137(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530961);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530943, (int)32271, (int)32270);
			return 0;
		}
		var_143_bool = var_19_object == (int)32271;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_137(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530944);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530965, (int)32273, (int)32285);
			@@@var_0_object:AddReply((int)530963, (int)32284, (int)32283);
			return 0;
		}
		var_153_bool = var_19_object == (int)32284;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_137(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530964);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530945, (int)32273, (int)32272);
			return 0;
		}
		var_160_bool = var_19_object == (int)32273;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_137(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530946);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530947, (int)32275, (int)32274);
			return 0;
		}
		var_167_bool = var_19_object == (int)32275;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_137(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530948);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530949, (int)-1, (int)32276);
			@@@var_0_object:AddReply((int)530950, (int)-1, (int)32277);
			return 0;
		}
		var_3_string = true;
		var_176_bool = 0;
		func_2525(var_176_bool);
		if(var_176_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa0";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_498(var_18_object, var_19_bool);
	var_23_bool = 0;
	func_2527(var_23_bool);
	if(var_23_bool != 0) {
		var_28_object = Obj();
		var_19_bool = var_28_object;
		TaskCall(3);
		func_598(var_28_object);
		TaskReturn();
	}
	var_531_int = 0; var_532_object = Obj();
	var_19_bool = var_532_object;
	TaskCall(0);
	func_0(var_533_object, var_531_int, var_532_object);
	TaskReturn();
	func_2534();
	var_666_object = Obj();
	var_19_bool = var_666_object;
	TaskCall(3);
	func_598(var_666_object);
	TaskReturn();
	return 0;
}


task_2_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_bool = 0;
	func_2527(var_21_bool);
	if(var_21_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_19_bool = var_27_object;
		func_1711(var_26_bool, var_27_object);
		if(var_26_bool != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		func_498(var_18_object, var_19_bool);
		var_33_object = Obj();
		var_19_bool = var_33_object;
		TaskCall(3);
		func_598(var_33_object);
		TaskReturn();
	}
	return 0;
}


task_2_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_bool = 0;
	func_2527(var_21_bool);
	if(var_21_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_19_bool = var_27_object;
		func_1711(var_26_bool, var_27_object);
		if(var_26_bool != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		func_498(var_18_object, var_19_bool);
		var_33_object = Obj();
		var_19_bool = var_33_object;
		TaskCall(3);
		func_598(var_33_object);
		TaskReturn();
	}
	return 0;
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_498(var_18_object, var_19_bool);
	func_2534();
	var_25_object = Obj();
	var_19_bool = var_25_object;
	TaskCall(3);
	func_598(var_25_object);
	TaskReturn();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_21_bool = var_19_bool == (int)10;
	if(var_21_bool != 0) {
		var_22_bool = 0;
		func_460(var_17_bool, var_18_object, var_19_bool, var_22_bool);
		if(var_22_bool != 0) {
			var_35_bool = var_2_object == 0; //@nz
			if(var_35_bool != 0) {
				var_36_object = Obj();
				var_36_object = var_4_bool;
				func_2126(var_36_object);
				var_2_object = true;
			}
		} else {
			var_43_object = var_2_object;
			if(var_43_object == 0) goto Label_497;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_497:
	return 0;
	
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_int)
{
	var_21_bool = var_19_int == (int)1;
	if(var_21_bool != 0) {
		var_22_object = Obj();
		var_22_object = var_1_object;
		func_2241(var_22_object);
	} else {
		var_27_int = 0;
		var_19_int = var_27_int;
		func_1485(var_18_bool, var_19_int, var_27_int);
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
		func_2126(var_23_object);
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
	func_1341(var_19_object);
	var_19_object = Obj();
	func_2589();
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
		func_2463(var_23_object);
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
	func_1910(var_23_object, var_24_int, var_25_float);
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
	func_1978(var_27_float, var_28_cvector, var_29_cvector);
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
	func_2539(var_20_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	
Label_332:
	if((bool)1 != 0) {
		var_20_float = 0; var_21_float = 0;
		func_433(var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, (float)300, (float)100);
		goto Label_332;
	}
	return 0;
}


func_0(var_0_object, var_531_int, var_532_object)
{
	var_534_object = Obj(); var_535_bool = 0; var_536_int = 0; var_537_bool = 0; var_538_object = Obj(); var_539_bool = 0; var_540_int = 0; var_541_bool = 0;
	var_0_object = var_532_object;
	var_542_bool = 0; var_543_object = Obj(); var_544_float = 0;
	var_532_object = var_543_object;
	func_2008(var_542_bool, var_543_object, (float)70.0);
	var_589_bool = var_542_bool == 0; //@nz
	if(var_589_bool != 0) {
		var_531_int = -2;
		return 8;
	}
	CreateDialog(var_538_object);
	var_590_int = 0;
	func_2519(var_590_int);
	@@var_538_object:SetNPCName(var_590_int);
	var_591_int = 0;
	func_2517(var_591_int);
	@@var_538_object:SetNPCDescription(var_591_int);
	var_592_string = "";
	func_2521(var_592_string);
	@@var_538_object:SetPhoto(var_592_string);
	var_593_string = "";
	func_2523(var_593_string);
	@@var_538_object:SetPhoto2(var_593_string);
	var_594_int = 0;
	func_2440(var_594_int);
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
	var_655_bool = var_541_bool == 0; //@nz
	if(var_655_bool != 0) {
		sync();
		@@var_538_object:IsDialogEnd(var_541_bool);
		goto Label_56;
	}
	var_532_object = Obj();
	func_2077();
	StopDialog(var_538_object);
	@@var_538_object:GetReturnValue((int)-1);
	var_540_int = var_531_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_512()
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_bool = 0;
	WaitForAnimEnd();
	var_43_bool = 0;
	func_2003(var_43_bool);
	var_44_bool = var_43_bool == 0; //@nz
	if(var_44_bool != 0) {
		return 14;
	}
	func_2268((int)0);
	var_45_int = var_36_int;
	var_37_int = 0;
	
Label_526:
	var_58_bool = 0;
	var_58_bool = 0;
	var_60_bool = var_37_int < (int)5;
	if(var_60_bool != 0) {
		var_61_bool = 0;
		func_2003(var_61_bool);
		if(var_61_bool != 0) {
			var_58_bool = 1;
		}
	}
	if(var_58_bool != 0) {
		irand(var_38_int, (int)3);
		var_64_bool = var_38_int == (int)0;
		if(var_64_bool != 0) {
			var_65_int = var_36_int;
			if(var_65_int == 0) goto Label_559;
			irand(var_39_int, var_36_int);
			var_67_string = ""; var_68_int = 0;
			var_39_int = var_68_int;
			func_2261(var_67_string, var_68_int);
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
						goto Label_588;
					}
					goto Label_577;
				}
				var_79_int = var_37_int;
				if(var_79_int == 0) goto Label_577;
				goto Label_588;
		}
		Label_577:
			var_70_bool = 0;
			func_591(var_70_bool);
			var_71_bool = var_70_bool == 0; //@nz
			if(var_71_bool != 0) {
				goto Label_588;
			}
			ResetAAS();
			var_37_int = var_37_int + (int)1;
			goto Label_526;

		}
	}
Label_588:
	ResetAAS();
	return 14;
	
}


func_2307(var_75_object)
{
	var_76_object = Obj(); var_77_string = ""; var_78_float = 0;
	func_2390(Obj());
	var_79_object = var_76_object;
	func_2407(var_76_object, "pt_b1q05_patrol1", (float)2);
	var_99_object = Obj();
	func_2390(var_99_object);
	@@var_75_object:ShowMap(var_99_object);
	return 0;
}


func_1801(var_47_bool, var_48_object)
{
	var_49_bool = 0; var_50_bool = 0;
	@@var_48_object:IsDead(var_50_bool);
	var_50_bool = var_47_bool;
	return 2;
}


func_1806(var_36_bool, var_37_object)
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
		func_1801(var_47_bool, var_48_object);
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


func_1530(var_204_string)
{
	var_204_string = "walk";
	return 0;
}


func_2323()
{
	var_43_object = Obj(); var_44_object = Obj();
	CreateDiaryEntry(var_44_object, (int)582, (int)2, (int)530951);
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0;
	var_44_object = var_49_object;
	func_2362(var_48_bool, var_49_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1559(var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_string = ""; var_53_object = Obj(); var_54_bool = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_string = ""; var_63_object = Obj(); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0);
	var_68_bool = var_47_object == 0; //@ne
	if(var_68_bool != 0) {
		var_69_string = "";
		func_1650("fdie");
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
		func_2144(var_122_string);
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


func_1532(var_205_string)
{
	var_205_string = "run";
	return 0;
}


func_2077()
{
	var_657_bool = 0; var_658_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_660_bool = 0;
	func_2525(var_660_bool);
	if(var_660_bool != 0) {
	} else {
		HasAnimationTrack(var_658_bool, "head");
		var_662_bool = var_658_bool;
		if(var_662_bool == 0) goto Label_2094;
		UnlookAsync("head");
	}
Label_2094:
	return 2;
	
}


func_1056(var_495_bool, var_496_float)
{
	var_497_float = 0; var_498_bool = 0; var_499_float = 0; var_500_bool = 0;
	rand(var_499_float);
	var_501_bool = var_499_float < var_496_float;
	if(var_501_bool != 0) {

	Label_1061:
		IsAnimationPlaying(var_500_bool);
		var_502_bool = var_500_bool == 0; //@nz
		if(var_502_bool != 0) {
		} else {
			var_503_bool = 0;
			func_1154(var_503_bool);
			if(var_503_bool != 0) {
				var_495_bool = 1;
				sync();
				goto Label_1061;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1258(var_500_bool);
	}
	goto Label_1081;
	
Label_1081:
	var_495_bool = 0;
	return 4;
	
}


func_2336()
{
	var_66_object = Obj(); var_67_object = Obj();
	CreateDiaryEntry(var_67_object, (int)583, (int)2, (int)530952);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_67_object = var_72_object;
	func_2362(var_71_bool, var_72_object, (int)582);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1534(var_46_object)
{
	EventDisable(0);
	var_47_object = Obj();
	var_46_object = var_47_object;
	func_1559(var_47_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1545:
	Hold();
	goto Label_1545;
}
EMIT "Return(); Pop(0)";


func_2349(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj();
	GetDiaryRoot(var_59_object);
	var_60_bool = var_59_object == 0; //@nz
	if(var_60_bool != 0) {
		Trace("Can't retrieve diary root");
		var_57_object = 0;
		return 2;
	}
	var_59_object = var_57_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2095(var_639_string)
{
	var_640_bool = 0; var_641_float = 0; var_642_float = 0; var_643_bool = 0; var_644_float = 0; var_645_float = 0;
	lshHasAnimation(var_643_bool, var_639_string);
	var_646_bool = var_643_bool;
	if(var_646_bool != 0) {
		lshGetAnimTimes(var_639_string, var_644_float, var_645_float);
		lshPlayAnimation(var_644_float, var_645_float, (bool)0);
	} else {
		var_649_int = "Can't find lsh animation : " + var_639_string;
		Trace(var_649_int);
	}
	return 6;
	
}


func_1842(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0;
	var_36_bool = 0; var_37_object = Obj();
	var_33_object = var_37_object;
	func_1806(var_36_bool, var_37_object);
	var_53_bool = var_36_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	var_54_bool = 0; var_55_object = Obj(); var_56_string = "";
	var_33_object = var_55_object;
	func_1716(var_54_bool, var_55_object, "noaccess");
	var_63_bool = var_54_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_32_bool = 1;
		return 2;
	}
	@@var_33_object:GetProperty("noaccess", var_35_int);
	var_32_bool = var_35_int == (int)0;
	return 2;
}


func_2362(var_48_bool, var_49_object, var_50_int)
{
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0;
	func_2349(Obj());
	var_57_object = var_54_object;
	@@var_54_object:Find(var_50_int, var_55_object);
	var_62_bool = var_55_object == 0; //@nz
	if(var_62_bool != 0) {
		var_64_int = "Can't find diary parent with id: " + var_50_int;
		Trace(var_64_int);
		var_48_bool = 0;
		return 6;
	}
	@@var_55_object:AddChild(var_49_object);
	SendWorldWndMessage((int)7);
	@@var_49_object:GetCategory(var_56_int);
	SetDiarySection(var_56_int);
	var_48_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1083(var_0_object, var_292_bool, var_293_float)
{
	var_294_bool = 0; var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_float = 0; var_299_bool = 0; var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0;
	
Label_1084:
	IsAnimationPlaying(var_299_bool);
	var_304_bool = var_299_bool == 0; //@nz
	if(var_304_bool != 0) {
	} else {
		var_305_bool = 0;
		func_1154(var_305_bool);
		if(var_305_bool != 0) {
			var_292_bool = 1;
			return 10;
		}
		var_348_bool = 0; var_349_object = Obj();
		var_349_object = var_0_object;
		func_1842(var_348_bool, var_349_object);
		var_350_bool = var_348_bool == 0; //@nz
		if(var_350_bool != 0) {
			var_292_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_300_cvector);
		GetPFPosition(var_301_cvector);
		var_302_cvector = var_300_cvector - var_301_cvector;
		var_303_float = var_302_cvector | var_302_cvector;
		var_351_float = var_293_float * var_293_float;
		var_352_bool = var_303_float < var_351_float;
		if(var_352_bool != 0) {
			var_353_bool = 0; var_354_float = 0;
			var_293_float = var_354_float;
			func_919(var_302_cvector, var_303_float, var_353_bool, var_354_float);
			var_292_bool = 1;
			sync();
			goto Label_1084;
		}
		return 10;
	}
	func_1258(var_303_float);
	var_292_bool = 0;
	return 10;
	
}


func_1341(var_2_object)
{
	KillTimer((int)1);
	var_21_object = var_2_object;
	if(var_21_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1507(var_19_object);
	return 0;
}


func_2111(var_614_string, var_615_bool)
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


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_603_object, var_604_object)
{
	var_0_object = var_604_object;
	var_1_object = var_603_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_610_string = "";
		func_137(var_604_object, "Neutral");
		@@@var_0_object:SetMessage((int)530942);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)530962, (int)32271, (int)32281);
		@@@var_0_object:AddReply((int)530960, (int)32280, (int)32279);
		@@@var_0_object:AddReply((int)530959, (int)-1, (int)32278);
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	var_637_bool = 0;
	func_2525(var_637_bool);
	if(var_637_bool != 0) {

	Label_111:
		lshWaitForAnimEnd();
		var_638_string = var_3_string;
		if(var_638_string != 0) {
		} else {
			var_639_string = "";
			var_639_string = var_2_object;
			func_2095(var_639_string);
			goto Label_111;
	}
		PlayAnimation("all", "idle");

	Label_126:
		WaitForAnimEnd();
		var_652_string = var_3_string;
		if(var_652_string != 0) {
			goto Label_136;
		}
		PlayAnimation("all", "idle");
		goto Label_126;
	}
	goto Label_136;
	
Label_136:
	return 0;
	
}


func_1866(var_36_object)
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


func_845(var_1_object, var_2_object, var_4_bool)
{
	var_57_bool = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_bool = 0; var_61_bool = 0; var_62_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_847:
	var_66_int = var_1_object + (int)1;
	var_67_int = "attack_begin" + var_66_int;
	HasAnimation(var_60_bool, "all", var_67_int);
	var_68_bool = var_60_bool == 0; //@nz
	if(var_68_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_847;
	}
	var_2_object = 0;
	
Label_861:
	var_71_int = var_2_object + (int)1;
	var_72_int = "attack" + var_71_int;
	IsExisting3DSound(var_61_bool, var_72_int);
	var_73_bool = var_61_bool == 0; //@nz
	if(var_73_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_861;

	}
	GetAnimationOffset(var_62_cvector, "all", "bjump");
	var_76_float = GetByIndex(var_62_cvector, 2);
	var_4_bool = -var_76_float;
	return 6;
	
}


func_2126(var_23_object)
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


func_591(var_70_bool)
{
	var_70_bool = 1;
	return 0;
}


func_593()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_598(var_25_object)
{
	
Label_599:
	var_32_object = Obj(); var_33_bool = 0; var_34_float = 0;
	var_25_object = var_32_object;
	func_616(var_28_int, var_29_bool, var_30_float, var_31_int, var_25_object, var_32_object, (bool)1, (float)180.0);
	Sleep((int)1);
	goto Label_599;
}
EMIT "Return(); Pop(0)";


func_2390(var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj();
	GetMainOutdoorScene(var_32_object);
	var_34_bool = var_32_object == 0; //@ne
	if(var_34_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_33_object = 0;
		var_33_object = var_29_object;
		return 4;
	}
	@@var_32_object:GetMap(var_33_object);
	var_33_object = var_29_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2137()
{
	var_22_bool = 0;
	func_2525(var_22_bool);
	if(var_22_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2144(var_70_string)
{
	var_71_bool = 0; var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	IsExisting3DSound(var_79_bool, var_70_string);
	var_87_bool = var_79_bool == 0; //@nz
	if(var_87_bool != 0) {
		var_80_int = 0;

	Label_2150:
		var_89_int = var_80_int + (int)1;
		var_90_int = var_70_string + var_89_int;
		IsExisting3DSound(var_81_bool, var_90_int);
		var_91_bool = var_81_bool == 0; //@nz
		if(var_91_bool != 0) {
		} else {
			var_80_int = var_80_int + (int)1;
			goto Label_2150;
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


func_610(var_401_float)
{
	var_401_float = 0.10000000149011612;
	return 0;
}


func_613(var_408_int)
{
	var_408_int = 0;
	return 0;
}


func_1126(var_0_object, var_307_bool)
{
	var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_float = 0; var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_float = 0; var_317_float = 0;
	var_318_bool = 0; var_319_object = Obj();
	var_319_object = var_0_object;
	func_1842(var_318_bool, var_319_object);
	var_320_bool = var_318_bool == 0; //@nz
	if(var_320_bool != 0) {
		var_307_bool = 0;
		return 10;
	}
	var_321_bool = 0;
	func_1215(var_317_float, var_321_bool);
	if(var_321_bool != 0) {
		@@@var_0_object:GetPFPosition(var_313_cvector);
		GetPFPosition(var_314_cvector);
		var_315_cvector = var_313_cvector - var_314_cvector;
		var_316_float = var_315_cvector | var_315_cvector;
		@@@var_0_object:GetAttackDistance(var_317_float);
		var_317_float = var_317_float + (int)50;
		var_323_float = var_317_float * var_317_float;
		var_307_bool = var_316_float <= var_323_float;
		return 10;
	}
	var_307_bool = 0;
	return 10;
}


func_1383(var_0_object, var_1_object, var_164_bool, var_165_object, var_166_float, var_167_float, var_168_bool, var_169_bool)
{
	var_170_bool = 0; var_171_bool = 0; var_172_object = Obj(); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_float = 0; var_177_object = Obj(); var_178_bool = 0; var_179_bool = 0; var_180_object = Obj(); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_float = 0; var_185_object = Obj();
	var_0_object = false;
	var_1_object = var_165_object;
	var_169_bool = var_179_bool;
	
Label_1387:
	var_186_bool = 0; var_187_object = Obj();
	var_165_object = var_187_object;
	func_1523(var_186_bool, var_187_object);
	var_190_bool = var_186_bool == 0; //@nz
	if(var_190_bool != 0) {
		var_164_bool = 0;
		return 16;
	}
	@@var_165_object:GetPosition(var_181_cvector);
	GetPosition(var_182_cvector);
	var_183_cvector = var_181_cvector - var_182_cvector;
	var_184_float = var_183_cvector | var_183_cvector;
	var_191_bool = 0;
	var_191_bool = 0;
	var_193_bool = var_167_float > (int)0;
	if(var_193_bool != 0) {
		var_194_float = var_167_float * var_167_float;
		var_195_bool = var_184_float > var_194_float;
		if(var_195_bool != 0) {
			var_191_bool = 1;
		}
	}
	if(var_191_bool != 0) {
		Stop();
		var_164_bool = 0;
		return 16;
	}
	var_196_float = var_166_float * var_166_float;
	var_197_bool = var_184_float > var_196_float;
	if(var_197_bool != 0) {
		@@var_165_object:GetPFPosition(var_181_cvector);
		FindPathTo(var_185_object, var_181_cvector);
		var_198_bool = var_185_object != 0; //@nn
		if(var_198_bool != 0) {
			var_185_object = var_180_object;
			var_185_object = 0;
		}
		var_199_bool = var_180_object != 0; //@nn
		if(var_199_bool != 0) {
			var_200_bool = var_179_bool;
			if(var_200_bool == 0) goto Label_1436;
			var_179_bool = 0;
			RotatePath(var_180_object, var_178_bool);
			var_201_bool = var_178_bool == 0; //@nz
			if(var_201_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_204_string = "";
				func_1530(var_204_string);
				var_205_string = "";
				func_1532(var_205_string);
				FollowPath(var_180_object, var_168_bool, var_178_bool, var_204_string, var_205_string);
				var_206_bool = var_178_bool == 0; //@nz
				if(var_206_bool != 0) {
					var_207_object = var_0_object;
					if(var_207_object != 0) {
						var_180_object = 0;
						goto Label_1483;
					EMIT "GOTO 0x5b0";
					}
				} else {
					var_180_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_178_bool);
					var_210_bool = var_178_bool == 0; //@nz
					if(var_210_bool != 0) {
						var_211_object = var_0_object;
						if(var_211_object != 0) {
							var_180_object = 0;
							goto Label_1483;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1483;
	}
			var_185_object = 0;
			goto Label_1481;

		Label_1481:
			var_180_object = 0;

		}
		goto Label_1387;
	}
Label_1483:
	var_164_bool = !var_0_object;
	return 16;
	
}


func_616(var_0_object, var_3_string, var_5_int, var_32_object, var_33_bool, var_34_float, var_141_bool, var_233_bool)
{
	var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_float = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_float = 0;
	func_845(var_54_cvector, var_55_bool, var_56_float);
	var_5_int = 0;
	var_81_bool = IsFuncExist(var_32_object, "@GetAttackDistance", (int)1);
	if(var_81_bool != 0) {
		@@var_32_object:GetAttackDistance(var_46_float);
		var_46_float = var_46_float + (int)50;
	} else {
							var_34_float = var_46_float;
	}
	var_84_bool = var_46_float >= (int)150;
	if(var_84_bool != 0) {
		var_46_float = 150;
	}
	var_3_string = false;
	var_0_object = var_32_object;
	IsPlayerActor(var_0_object, var_49_bool);
	var_85_bool = var_49_bool;
	if(var_85_bool != 0) {
		PlayGlobalMusic("attack");
		var_87_object = Obj();
		func_2185(var_87_object);
		SendPlayerEnemy(var_32_object, var_87_object);
	}
	var_90_bool = var_33_bool;
	if(var_90_bool != 0) {
		var_50_bool = 0;
	} else {
						var_50_bool = 1;

	}
	var_51_float = (float)400.0 + var_46_float;
	
Label_656:
	var_92_bool = 0;
	var_92_bool = 0;
	var_93_bool = 0; var_94_object = Obj();
	var_94_object = var_0_object;
	func_1842(var_93_bool, var_94_object);
	if(var_93_bool != 0) {
		var_127_bool = var_3_string == 0; //@nz
		if(var_127_bool != 0) {
			var_92_bool = 1;
		}
	}
	if(var_92_bool != 0) {
		func_1258(var_56_float);
		@@@var_0_object:GetPFPosition(var_47_cvector);
		GetPFPosition(var_48_cvector);
		var_52_cvector = var_47_cvector - var_48_cvector;
		var_53_float = var_52_cvector | var_52_cvector;
		var_133_float = var_51_float * var_51_float;
		var_134_bool = var_53_float >= var_133_float;
		if(var_134_bool != 0) {
			var_135_bool = 0; var_136_object = Obj(); var_137_float = 0; var_138_float = 0; var_139_bool = 0; var_140_bool = 0;
			var_136_object = var_0_object;
			var_46_float = var_137_float;
			TaskCall(4);
			func_1278(var_143_bool, var_135_bool, var_136_object, var_137_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_218_bool = var_141_bool == 0; //@nz
			if(var_218_bool != 0) {
			} else {
				var_50_bool = 0;
		} else {
				var_224_float = var_34_float * var_34_float;
				var_225_bool = var_53_float >= var_224_float;
				if(var_225_bool != 0) {
					@@@var_0_object:GetPFPosition(var_54_cvector);
					CanReachByPF(var_55_bool, var_54_cvector);
					var_226_bool = var_55_bool == 0; //@nz
					if(var_226_bool != 0) {
						var_227_bool = 0; var_228_object = Obj(); var_229_float = 0; var_230_float = 0; var_231_bool = 0; var_232_bool = 0;
						var_228_object = var_0_object;
						var_46_float = var_229_float;
						TaskCall(4);
						func_1278(var_235_bool, var_227_bool, var_228_object, var_229_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_236_bool = var_233_bool == 0; //@nz
						if(var_236_bool != 0) {
							goto Label_828;
						}
						var_50_bool = 0;
						goto Label_656;
					}
					var_237_bool = var_50_bool == 0; //@nz
					if(var_237_bool != 0) {
						var_238_object = Obj();
						var_238_object = var_0_object;
						func_1992(var_238_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1258(var_56_float);
						StopAsync();
						var_50_bool = 1;
						var_249_bool = 0; var_250_object = Obj();
						var_250_object = var_0_object;
						func_1842(var_249_bool, var_250_object);
						var_251_bool = var_249_bool == 0; //@nz
						if(var_251_bool != 0) {
							goto Label_828;
						}
					}
					rand(var_56_float);
					var_252_bool = 0;
					var_254_bool = var_56_float < (float)0.25;
					if(var_254_bool != 1) {
						var_255_bool = 0;
						func_1215((bool)1, var_255_bool);
						if(var_255_bool != 1) {
							var_252_bool = 0;
						}
					}
					if(var_252_bool != 0) {
						Face(var_0_object);
						func_1265();
						PlayAnimation("all", "attack_stay");
						var_292_bool = 0; var_293_float = 0;
						var_34_float = var_293_float;
						func_1083(var_56_float, var_292_bool, var_293_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1258(var_56_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_514_bool = 0;
						func_1215(var_56_float, var_514_bool);
						var_515_bool = var_514_bool == 0; //@nz
						if(var_515_bool == 0) goto Label_818;
						var_516_bool = 0; var_517_object = Obj();
						var_517_object = var_0_object;
						func_1842(var_516_bool, var_517_object);
						var_518_bool = var_516_bool == 0; //@nz
						if(var_518_bool != 0) {
							goto Label_828;
						}
						@@@var_0_object:GetPFPosition(var_47_cvector);
						GetPFPosition(var_48_cvector);
						var_52_cvector = var_47_cvector - var_48_cvector;
						var_53_float = var_52_cvector | var_52_cvector;
						var_519_float = var_34_float * var_34_float;
						var_520_bool = var_53_float < var_519_float;
						if(var_520_bool == 0) goto Label_818;
						var_521_bool = 0; var_522_float = 0;
						var_34_float = var_522_float;
						func_919(var_55_bool, var_56_float, var_521_bool, var_522_float);
						var_523_bool = var_521_bool == 0; //@nz
						if(var_523_bool == 0) goto Label_818;
						goto Label_828;
				}
					var_524_bool = 0; var_525_float = 0;
					var_34_float = var_525_float;
					func_919(var_55_bool, var_56_float, var_524_bool, var_525_float);
					var_526_bool = var_524_bool == 0; //@nz
					if(var_526_bool != 0) {
						goto Label_828;
					}
					var_50_bool = 1;

				}
			Label_818:
				goto Label_827;
		}
		Label_827:
			goto Label_656;

		}
	}
Label_828:
	WaitForAnimEnd();
	var_219_string = var_3_string;
	if(var_219_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_222_bool = var_49_bool;
	if(var_222_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_2407(var_76_object, var_77_string, var_78_float)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_bool = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_object = Obj(); var_87_bool = 0;
	GetMainOutdoorScene(var_86_object);
	var_88_bool = var_86_object == 0; //@ne
	if(var_88_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_86_object:GetLocator(var_77_string, var_87_bool, var_84_cvector, var_85_cvector);
	var_90_bool = var_87_bool == 0; //@nz
	if(var_90_bool != 0) {
		var_92_int = "Warning: outdoor scene locator " + var_77_string;
		var_94_int = var_92_int + " doesnt exist";
		Trace(var_94_int);
	}
	@@var_86_object:GetMap(var_76_object);
	var_95_bool = var_76_object == 0; //@ne
	if(var_95_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_97_float = GetByIndex(var_84_cvector, 0);
	var_98_float = GetByIndex(var_84_cvector, 2);
	@@var_76_object:SetMapParams(var_97_float, var_98_float, var_78_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_880(var_0_object, var_390_float, var_391_int)
{
	var_392_object = Obj(); var_393_float = 0; var_394_float = 0; var_395_object = Obj(); var_396_float = 0; var_397_float = 0;
	var_399_float = var_390_float * (float)0.8999999761581421;
	GetVictim(var_399_float, var_395_object);
	ReportAttack(var_0_object);
	var_400_bool = var_395_object == var_0_object;
	if(var_400_bool != 0) {
		var_401_float = 0; var_402_object = Obj(); var_403_int = 0;
		var_395_object = var_402_object;
		var_391_int = var_403_int;
		func_610(var_403_int);
		var_401_float = var_396_float;
		var_404_float = 0; var_405_object = Obj(); var_406_float = 0; var_407_int = 0;
		var_395_object = var_405_object;
		var_396_float = var_406_float;
		var_408_int = 0; var_409_object = Obj(); var_410_int = 0;
		var_395_object = var_409_object;
		var_391_int = var_410_int;
		func_613(var_410_int);
		var_408_int = var_407_int;
		func_1728(var_404_float, var_405_object, var_406_float, var_407_int);
		var_404_float = var_397_float;
		var_469_int = 0;
		func_1263(var_469_int);
		ReportHit(var_0_object, var_469_int, var_397_float, var_396_float);
		var_470_object = Obj(); var_471_float = 0;
		var_395_object = var_470_object;
		var_397_float = var_471_float;
		func_1270();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1650(var_69_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_70_string = "";
	var_69_string = var_70_string;
	func_2144(var_70_string);
	PlayAnimation("all", var_69_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_69_string);
	RemoveEnvelope();
	return 0;
}


func_1910(var_23_object, var_24_int, var_25_float)
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
		func_1696(var_53_cvector, var_54_object);
		var_53_cvector = var_52_cvector;
		func_2191(var_51_cvector, var_52_cvector);
		var_51_cvector = var_35_cvector;
		CreateVectorVector(var_36_object);
		var_37_int = 1;

	Label_1939:
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
			goto Label_1939;
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
			func_1978(var_70_float, var_71_cvector, var_72_cvector);
			return 18;
		}
		var_36_object = 0;
	}
	var_113_object = Obj();
	var_23_object = var_113_object;
	func_1866(var_113_object);
	return 18;
	
}


func_1154(var_305_bool)
{
	var_306_bool = 0;
	var_306_bool = 0;
	var_307_bool = 0;
	func_1126(var_306_bool, var_307_bool);
	if(var_307_bool != 0) {
		var_324_bool = 0;
		func_1170(var_305_bool, var_306_bool, var_324_bool);
		if(var_324_bool != 0) {
			var_306_bool = 1;
		}
	}
	if(var_306_bool != 0) {
		var_305_bool = 1;
		return 0;
	}
	var_305_bool = 0;
	return 0;
}


func_2440(var_594_int)
{
	var_595_int = 0; var_596_int = 0;
	GetVariable("branch", var_596_int);
	var_599_bool = var_596_int == (int)0;
	if(var_599_bool != 0) {
		var_594_int = 1;
		return 2;
	EMIT "GOTO 0x997";
	}
	var_601_bool = var_596_int == (int)1;
	if(var_601_bool != 0) {
		var_594_int = 2;
		return 2;
	}
	var_594_int = 3;
	return 2;
}


func_137(var_2_object, var_610_string)
{
	var_611_bool = 0;
	func_2525(var_611_bool);
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
	func_2111(var_614_string, var_615_bool);
	var_2_object = var_610_string;
	return 0;
	
}


func_2185(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj();
	self(var_25_object);
	var_25_object = var_23_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2191(var_51_cvector, var_52_cvector)
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


func_1170(var_0_object, var_4_bool, var_324_bool)
{
	var_325_object = Obj(); var_326_bool = 0; var_327_float = 0; var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_object = Obj(); var_331_bool = 0; var_332_float = 0; var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0);
	GetScene(var_330_object);
	var_331_bool = 0;
	
Label_1174:
	var_335_cvector = CVector(0,0,0); var_336_object = Obj();
	var_336_object = var_0_object;
	func_1696(var_335_cvector, var_336_object);
	var_341_int = -var_335_cvector;
	FindDirLength(var_332_float, var_341_int, var_4_bool);
	var_342_bool = var_332_float < var_4_bool;
	if(var_342_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_333_cvector);
		GetPFPosition(var_334_cvector);
		WaitForAnimEnd();
		func_1258(var_334_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_331_bool = 1;
		var_346_bool = 0;
		func_1126(var_334_cvector, var_346_bool);
		var_347_bool = var_346_bool == 0; //@nz
		if(var_347_bool != 0) {
			goto Label_1212;
		}
		goto Label_1174;
	}
Label_1212:
	var_331_bool = var_324_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1682(var_432_string, var_433_int)
{
	var_435_bool = var_433_int == (int)2;
	if(var_435_bool != 0) {
		var_432_string = "fire";
		return 0;
	EMIT "GOTO 0x69e";
	}
	var_437_bool = var_433_int == (int)1;
	if(var_437_bool != 0) {
		var_432_string = "bullet";
		return 0;
	}
	var_432_string = "phys";
	return 0;
}


func_919(var_0_object, var_1_object, var_353_bool, var_354_float)
{
	var_355_int = 0; var_356_bool = 0; var_357_int = 0; var_358_string = ""; var_359_int = 0; var_360_bool = 0; var_361_int = 0; var_362_string = "";
	func_1258(var_362_string);
	irand(var_359_int, var_1_object);
	var_359_int = var_359_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2250();
	var_371_int = "attack_begin" + var_359_int;
	PlayAnimation("all", var_371_int);
	WaitForAnimEnd();
	func_1226(var_361_int, var_362_string);
	var_387_bool = 0; var_388_object = Obj();
	var_388_object = var_0_object;
	func_1842(var_387_bool, var_388_object);
	var_389_bool = var_387_bool == 0; //@nz
	if(var_389_bool != 0) {
		StopAsync();
		var_353_bool = 0;
		return 8;
	}
	var_390_float = 0; var_391_int = 0;
	var_354_float = var_390_float;
	var_359_int = var_391_int;
	func_880(var_362_string, var_390_float, var_391_int);
	var_474_int = "attack_middle" + var_359_int;
	HasAnimation(var_360_bool, "all", var_474_int);
	var_475_bool = var_360_bool;
	if(var_475_bool != 0) {
		func_2250();
		var_478_int = "attack_middle" + var_359_int;
		PlayAnimation("all", var_478_int);
		WaitForAnimEnd();
		func_1258(var_362_string);
		var_479_bool = 0; var_480_object = Obj();
		var_480_object = var_0_object;
		func_1842(var_479_bool, var_480_object);
		var_481_bool = var_479_bool == 0; //@nz
		if(var_481_bool != 0) {
			StopAsync();
			var_353_bool = 0;
			return 8;
		}
		var_482_float = 0; var_483_int = 0;
		var_354_float = var_482_float;
		var_359_int = var_483_int;
		func_880(var_362_string, var_482_float, var_483_int);
		var_361_int = 1;

	Label_996:
		var_485_int = "attack_middle" + var_359_int;
		var_487_int = var_485_int + "_";
		var_362_string = var_487_int + var_361_int;
		HasAnimation(var_360_bool, "all", var_362_string);
		var_489_bool = var_360_bool == 0; //@nz
		if(var_489_bool != 0) {
		} else {
			func_2250();
			PlayAnimation("all", var_362_string);
			WaitForAnimEnd();
			func_1258(var_362_string);
			var_505_bool = 0; var_506_object = Obj();
			var_506_object = var_0_object;
			func_1842(var_505_bool, var_506_object);
			var_507_bool = var_505_bool == 0; //@nz
			if(var_507_bool != 0) {
				StopAsync();
				var_353_bool = 0;
				var_508_float = 0; var_509_int = 0;
				var_354_float = var_508_float;
				var_359_int = var_509_int;
				func_880(var_362_string, var_508_float, var_509_int);
				var_361_int = var_361_int + (int)1;
				goto Label_996;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_493_int = "attack_end" + var_359_int;
	PlayAnimation("all", var_493_int);
	var_494_bool = 0;
	func_1272(var_494_bool);
	if(var_494_bool != 0) {
		var_495_bool = 0; var_496_float = 0;
		func_1056(var_495_bool, (float)0.75);
		StopAsync();
	}
	var_353_bool = 1;
	return 8;
	
}


func_2201(var_442_float, var_443_float, var_444_float)
{
	var_447_bool = var_443_float < var_444_float;
	if(var_447_bool != 0) {
		var_443_float = var_442_float;
	} else {
		var_444_float = var_442_float;
	}
	return 0;
	
}


func_2457(var_26_int)
{
	var_27_int = 0; var_28_int = 0;
	GetVariable("branch", var_28_int);
	var_28_int = var_26_int;
	return 2;
}


func_2463(var_23_object)
{
	var_24_int = 0;
	func_2457(var_24_int);
	var_29_bool = var_24_int == (int)1;
	if(var_29_bool != 0) {
		WorkWithCorpse(var_23_object);
	} else {
		Barter(var_23_object);
	}
	return 0;
	
}


func_1696(var_53_cvector, var_54_object)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_57_cvector);
	@@var_54_object:GetPosition(var_58_cvector);
	var_53_cvector = var_58_cvector - var_57_cvector;
	return 4;
}


func_2208(var_452_float, var_453_float, var_454_float, var_455_float)
{
	var_456_bool = var_453_float < var_454_float;
	if(var_456_bool != 0) {
		var_454_float = var_452_float;
		return 0;
	}
	var_457_bool = var_453_float > var_455_float;
	if(var_457_bool != 0) {
		var_455_float = var_452_float;
		return 0;
	}
	var_453_float = var_452_float;
	return 0;
}


func_1703(var_26_float, var_27_object)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	GetPosition(var_31_cvector);
	@@var_27_object:GetPosition(var_32_cvector);
	var_33_cvector = var_32_cvector - var_31_cvector;
	var_26_float = var_33_cvector | var_33_cvector;
	return 6;
}


func_2219(var_460_float)
{
	var_461_object = Obj(); var_462_object = Obj();
	CreateFloatVector(var_462_object);
	@@var_462_object:add(var_460_float);
	var_464_bool = var_460_float < (int)0;
	if(var_464_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_462_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2476(var_32_string)
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


func_1711(var_159_bool, var_160_object)
{
	var_161_bool = 0; var_162_bool = 0;
	IsPlayerActor(var_160_object, var_162_bool);
	var_162_bool = var_159_bool;
	return 2;
}


func_433(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_20_float, var_21_float)
{
	var_22_bool = 0;
	func_2003(var_22_bool);
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
	func_512();
	var_80_bool = var_3_string == 0; //@nz
	if(var_80_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1716(var_54_bool, var_55_object, var_56_string)
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


func_1978(var_25_object, var_28_cvector, var_29_cvector)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj();
	GetScene(var_32_object);
	AddActorByType(var_33_object, "scripted", var_32_object, var_28_cvector, var_29_cvector, "blood_dir.xml");
	var_36_object = Obj();
	var_25_object = var_36_object;
	func_1866(var_36_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2236(var_40_float)
{
	var_41_float = 0; var_42_float = 0;
	GetGameTime(var_42_float);
	var_42_float = var_40_float;
	return 2;
}


func_2493()
{
	var_26_int = 0;
	func_2457(var_26_int);
	var_31_bool = var_26_int != (int)1;
	if(var_31_bool != 0) {
		return 0;
	}
	var_32_string = "";
	func_2476("liver");
	var_43_string = "";
	func_2476("kidney");
	var_44_string = "";
	func_2476("heart");
	var_45_string = "";
	func_2476("blood");
	return 0;
}


func_1215(var_0_object, var_255_bool)
{
	var_256_bool = 0; var_257_bool = 0;
	var_260_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_260_bool != 0) {
		@@@var_0_object:IsAttacking(var_257_bool);
		var_257_bool = var_255_bool;
		return 2;
	}
	var_255_bool = 0;
	return 2;
}


func_1728(var_404_float, var_405_object, var_406_float, var_407_int)
{
	var_411_int = 0; var_412_string = ""; var_413_int = 0; var_414_float = 0; var_415_float = 0; var_416_float = 0; var_417_int = 0; var_418_string = ""; var_419_int = 0; var_420_float = 0; var_421_float = 0; var_422_float = 0;
	var_423_bool = 0; var_424_object = Obj(); var_425_string = "";
	var_405_object = var_424_object;
	func_1716(var_423_bool, var_424_object, "health");
	var_426_bool = var_423_bool == 0; //@nz
	if(var_426_bool != 0) {
		var_404_float = 0.0;
		return 12;
	}
	var_427_bool = 0; var_428_object = Obj(); var_429_string = "";
	var_405_object = var_428_object;
	func_1716(var_427_bool, var_428_object, "armor");
	var_430_bool = var_427_bool == 0; //@nz
	if(var_430_bool != 0) {
		var_417_int = 0;
	} else {
			@@var_405_object:GetProperty("armor", var_417_int);
	}
	var_432_string = ""; var_433_int = 0;
	var_407_int = var_433_int;
	func_1682(var_432_string, var_433_int);
	var_418_string = "armor_" + var_432_string;
	var_438_bool = 0; var_439_object = Obj(); var_440_string = "";
	var_405_object = var_439_object;
	var_418_string = var_440_string;
	func_1716(var_438_bool, var_439_object, var_440_string);
	var_441_bool = var_438_bool == 0; //@nz
	if(var_441_bool != 0) {
		var_419_int = 0;
	} else {
		@@var_405_object:GetProperty(var_418_string, var_419_int);

	}
	var_442_float = 0; var_443_float = 0; var_444_float = 0;
	var_445_int = var_417_int + var_419_int;
	var_443_float = var_445_int / (float)100.0;
	func_2201(var_442_float, var_443_float, (float)1);
	var_442_float = var_420_float;
	@@var_405_object:GetProperty("health", var_421_float);
	var_450_int = (int)1 - var_420_float;
	var_422_float = var_406_float * var_450_int;
	var_452_float = 0; var_453_float = 0; var_454_float = 0; var_455_float = 0;
	var_453_float = var_421_float - var_422_float;
	func_2208(var_452_float, var_453_float, (float)0, (float)1);
	@@var_405_object:SetProperty("health", var_452_float);
	var_458_bool = 0; var_459_object = Obj();
	var_405_object = var_459_object;
	func_1711(var_458_bool, var_459_object);
	if(var_458_bool != 0) {
		var_460_float = 0;
		var_460_float = -var_422_float;
		func_2219(var_460_float);
	}
	var_422_float = var_404_float;
	return 12;
	
}


func_2241(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	IsPlayerActor(var_22_object, var_24_bool);
	var_25_bool = var_24_bool;
	if(var_25_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1992(var_238_object)
{
	var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0);
	@@var_238_object:GetPosition(var_242_cvector);
	GetPosition(var_243_cvector);
	var_244_cvector = var_242_cvector - var_243_cvector;
	var_245_float = GetByIndex(var_244_cvector, 0);
	var_246_float = GetByIndex(var_244_cvector, 2);
	RotateAsync(var_245_float, var_246_float);
	return 6;
}


func_2250()
{
	var_365_object = Obj(); var_366_object = Obj();
	GetScene(var_366_object);
	var_368_object = Obj();
	func_2185(var_368_object);
	BroadcastMessage("battle", var_368_object, var_366_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1226(var_2_object, var_5_int)
{
	var_372_float = 0; var_373_int = 0; var_374_float = 0; var_375_int = 0;
	var_376_bool = var_2_object == 0; //@nz
	if(var_376_bool != 0) {
		return 4;
	}
	var_377_int = var_5_int;
	if(var_377_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_380_bool = var_5_int > (int)0;
		if(var_380_bool != 0) {
			return 4;
		}
	}
	rand(var_374_float);
	var_381_float = 0;
	func_1276(var_381_float);
	var_382_bool = var_374_float < var_381_float;
	if(var_382_bool != 0) {
		irand(var_375_int, var_2_object);
		var_375_int = var_375_int + (int)1;
		var_385_int = "attack" + var_375_int;
		Speak(var_385_int);
		var_386_int = 0;
		func_1274(var_386_int);
		var_5_int = var_386_int;
	}
	return 4;
}


func_460(var_0_object, var_1_object, var_4_bool, var_22_bool)
{
	var_23_float = 0; var_24_float = 0;
	var_25_bool = var_4_bool == 0; //@ne
	if(var_25_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	var_26_float = 0; var_27_object = Obj();
	var_27_object = var_4_bool;
	func_1703(var_26_float, var_27_object);
	var_24_float = sqrt(var_26_float);
	var_34_object = var_2_object;
	if(var_34_object != 0) {
		var_24_float = var_24_float - var_1_object;
	}
	var_22_bool = var_24_float < var_0_object;
	return 2;
}


func_1485(var_0_object, var_1_object, var_27_int)
{
	var_29_bool = var_27_int != (int)0;
	if(var_29_bool != 0) {
		return 0;
	}
	var_30_bool = 0; var_31_object = Obj();
	var_31_object = var_1_object;
	func_1523(var_30_bool, var_31_object);
	var_66_bool = var_30_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2003(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0;
	IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
	return 2;
}


func_2261(var_51_string, var_52_int)
{
	var_53_string = ""; var_54_string = "";
	var_55_int = var_52_int;
	if(var_55_int != 0) {
		"idle" = "idle" + var_52_int;
	}
	var_54_string = var_51_string;
	return 2;
}


func_2517(var_591_int)
{
	var_591_int = 515572;
	return 0;
}


func_2519(var_590_int)
{
	var_590_int = 504031;
	return 0;
}


func_2008(var_542_bool, var_543_object, var_544_float)
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
	func_2191(var_569_cvector, var_570_cvector);
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
	func_2525(var_585_bool);
	if(var_585_bool != 0) {
	} else {
		HasAnimationTrack(var_562_bool, "head");
		var_587_bool = var_562_bool;
		if(var_587_bool == 0) goto Label_2071;
		LookAsyncCamera("head");
	}
Label_2071:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_542_bool = 1;
	return 18;
	
}


func_2521(var_592_string)
{
	var_592_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_2523(var_593_string)
{
	var_593_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_2268(var_45_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0;
	var_48_int = 0;
	
Label_2270:
	var_51_string = ""; var_52_int = 0;
	var_48_int = var_52_int;
	func_2261(var_51_string, var_52_int);
	HasAnimation(var_49_bool, "all", var_51_string);
	var_56_bool = var_49_bool == 0; //@nz
	if(var_56_bool != 0) {
	} else {
		var_48_int = var_48_int + (int)1;
		goto Label_2270;
	}
	var_48_int = var_45_int;
	return 4;
	
}


func_2525(var_585_bool)
{
	var_585_bool = 0;
	return 0;
}


func_2527(var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	GetVariable("b1q05ToAttack", var_23_int);
	var_21_bool = var_23_int != (int)0;
	return 2;
}


func_1507(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2534()
{
	SetVariable("b1q05ToAttack", (int)1);
	return 0;
}


func_1258(var_0_object)
{
	var_128_object = Obj();
	var_128_object = var_0_object;
	func_2241(var_128_object);
	return 0;
}


func_2539(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj();
	GetScene(var_22_object);
	var_23_object = Obj();
	func_2185(var_23_object);
	@@var_22_object:RemoveStationaryActor(var_23_object);
	func_2493();
	var_46_object = Obj();
	var_20_object = var_46_object;
	TaskCall(5);
	func_1534(var_46_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_2285()
{
	var_27_object = Obj(); var_28_object = Obj();
	func_2390(Obj());
	var_29_object = var_28_object;
	var_40_float = 0;
	func_2236(var_40_float);
	@@var_28_object:AddMark("b1q05PatrolGroup", "pt_b1q05_patrol1", (int)0, (int)530956, var_40_float);
	func_2323();
	func_2336();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1263(var_469_int)
{
	var_469_int = 0;
	return 0;
}


func_1265()
{
	var_261_string = "";
	func_2144("attack_stay");
	return 0;
}


func_498(var_2_object, var_3_string)
{
	func_593();
	KillTimer((int)10);
	var_21_object = var_2_object;
	if(var_21_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_1523(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj();
	var_31_object = var_33_object;
	func_1842(var_32_bool, var_33_object);
	var_32_bool = var_30_bool;
	return 0;
}


func_1270()
{
	return 0;
}


func_1272(var_494_bool)
{
	var_494_bool = 1;
	return 0;
}


func_1274(var_386_int)
{
	var_386_int = 1;
	return 0;
}


func_1276(var_381_float)
{
	var_381_float = 0.5;
	return 0;
}


func_1278(var_2_object, var_135_bool, var_136_object, var_137_float, var_138_float, var_139_bool, var_140_bool)
{
	var_144_bool = 0; var_145_bool = 0; var_146_bool = 0; var_147_bool = 0;
	var_148_object = Obj();
	var_136_object = var_148_object;
	func_2241(var_148_object);
	SetTimer((int)1, (int)5);
	CanSee(var_146_bool, var_136_object);
	var_151_bool = var_146_bool;
	if(var_151_bool != 0) {
		var_2_object = true;
		var_152_object = Obj();
		var_136_object = var_152_object;
		func_2126(var_152_object);
	} else {
		var_2_object = false;
	}
	var_159_bool = 0; var_160_object = Obj();
	var_136_object = var_160_object;
	func_1711(var_159_bool, var_160_object);
	if(var_159_bool != 0) {
		var_163_object = Obj();
		func_2185(var_163_object);
		SendPlayerEnemy(var_136_object, var_163_object);
	}
	var_164_bool = 0; var_165_object = Obj(); var_166_float = 0; var_167_float = 0; var_168_bool = 0; var_169_bool = 0;
	var_136_object = var_165_object;
	var_137_float = var_166_float;
	var_138_float = var_167_float;
	var_139_bool = var_168_bool;
	var_140_bool = var_169_bool;
	func_1383(var_146_bool, var_147_bool, var_164_bool, var_165_object, var_166_float, var_167_float, var_168_bool, var_169_bool);
	var_164_bool = var_147_bool;
	var_215_object = var_2_object;
	if(var_215_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_147_bool = var_135_bool;
	return 4;
	
}


