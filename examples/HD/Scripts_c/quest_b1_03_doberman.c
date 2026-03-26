// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,GetDirection/1,FindLongestDir/6,Trace/1,Rotate/2,SetTimer/2,MovePoint/3,Stop/0,KillTimer/1,FindDirLength/3,GetScene/1,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,Speak/1,CanSee/2,UnlookAsync/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,AddItem/4,SetRTEnvelope/2,Hold/0,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,FindActor/2,Trigger/2,BroadcastMessage/3,SetVariable/2,GetVariable/2,WorkWithCorpse/1,Barter/1,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|W:Can't retreat, distance: |A:RemoveStationaryActor|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|W:walk|W:run|W:powder|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:reputation|W:battle|A:SetReturnValue|W:b1q03_retreat|W:branch|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png|W:quest_b1_03|W:doberman_dead
// @GLOBALS: 0:object:
// @RUN_OP: 0x180
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x188 vars=object
// @EVENT_17: op=0x1ad vars=object
// @TASK_3: vars=object,cvector,bool params=1
// @EVENT_17: op=0x21a vars=object
// @EVENT_7: op=0x28f vars=int
// @EVENT_41: op=0x2ca vars=object
// @TASK_4: vars=object,int,int,bool,float,int params=2
// @TASK_5: vars=bool,object,bool params=6
// @EVENT_7: op=0x5c4 vars=int
// @EVENT_1: op=0x5df vars=object
// @EVENT_2: op=0x5ee vars=object
// @EVENT_10: op=0x674 vars=object
// @EVENT_41: op=0x67f vars=object
// @TASK_6: vars= params=1
// @EVENT_0: op=0x6ad vars=object
// @EVENT_22: op=0x72c vars=object,int,float,float
// @EVENT_16: op=0x72e vars=object,string
// @EVENT_41: op=0x730 vars=object
// @STANDALONE_EVENT_22: op=0xa3c vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xa44 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0xa4e vars=object,string
// @STANDALONE_EVENT_41: op=0xa5b vars=object
// @PE: 0x4a,0x84,0x9a,0x1ad,0x211,0x21a,0x2ca,0x2f7,0x2fa,0x58b,0x5c4,0x5df,0x5ee,0x662,0x674,0x67f,0x688,0x69e,0x712,0x72c,0x72e,0x730,0x732,0x94c,0x953,0x95e,0x966,0x9dc,0x9e1,0xa01,0xa22,0xa3c,0xa44,0xa5b,0xa61,0xa68

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	if((int)1 != 0) {
		func_2316();
		var_22_bool = var_18_bool == (int)19225;
		if(var_22_bool != 0) {
			var_23_object = Obj(); var_24_object = Obj();
			var_23_object = var_1_object;
			var_24_object = var_0_object;
			func_2529(var_24_object);
		}
		var_29_bool = var_18_bool == (int)19226;
		if(var_29_bool != 0) {
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_2524(var_31_object);
		}
		var_34_bool = var_18_bool == (int)20788;
		if(var_34_bool != 0) {
			var_35_object = Obj(); var_36_object = Obj();
			var_35_object = var_1_object;
			var_36_object = var_0_object;
			func_2529(var_36_object);
		}
		var_38_bool = var_18_bool == (int)20778;
		if(var_38_bool != 0) {
			var_39_object = Obj(); var_40_object = Obj();
			var_39_object = var_1_object;
			var_40_object = var_0_object;
			func_2524(var_40_object);
		}
		var_42_bool = var_17_object == (int)19224;
		if(var_42_bool != 0) {
			var_43_string = "";
			func_132(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518092);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519592, (int)20773, (int)20772);
			@@@var_0_object:AddReply((int)519588, (int)20769, (int)20768);
			return 0;
		}
		var_68_bool = var_17_object == (int)20769;
		if(var_68_bool != 0) {
			var_69_string = "";
			func_132(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519589);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519590, (int)20771, (int)20770);
			@@@var_0_object:AddReply((int)519596, (int)20773, (int)20776);
			return 0;
		}
		var_78_bool = var_17_object == (int)20771;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_132(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519591);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519597, (int)-1, (int)20778);
			@@@var_0_object:AddReply((int)519598, (int)20773, (int)20779);
			return 0;
		}
		var_88_bool = var_17_object == (int)20773;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_132(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519593);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519594, (int)20775, (int)20774);
			return 0;
		}
		var_95_bool = var_17_object == (int)20775;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_132(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519595);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519599, (int)28362, (int)20781);
			@@@var_0_object:AddReply((int)519600, (int)20786, (int)20782);
			return 0;
		}
		var_105_bool = var_17_object == (int)20786;
		if(var_105_bool != 0) {
			var_106_string = "";
			func_132(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519603);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519604, (int)20784, (int)20787);
			@@@var_0_object:AddReply((int)519605, (int)-1, (int)20788);
			return 0;
		}
		var_115_bool = var_17_object == (int)28362;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_132(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)527067);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527068, (int)20784, (int)28363);
			@@@var_0_object:AddReply((int)527069, (int)20784, (int)28364);
			return 0;
		}
		var_125_bool = var_17_object == (int)20784;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_132(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519602);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518093, (int)-1, (int)19225);
			@@@var_0_object:AddReply((int)518094, (int)-1, (int)19226);
			return 0;
		}
		var_3_string = true;
		var_134_bool = 0;
		func_2582(var_134_bool);
		if(var_134_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9b";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	func_524();
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	TaskCall(0);
	func_0(var_22_object, var_20_int, var_21_object);
	TaskReturn();
	var_22_object = var_19_int;
	var_151_bool = var_19_int == (int)0;
	if(var_151_bool != 0) {
		var_152_bool = 0; var_153_object = Obj(); var_154_float = 0;
		var_17_bool = var_153_object;
		func_2406(var_152_bool, var_153_object, (float)0.05000000074505806);
		var_190_object = Obj();
		var_17_bool = var_190_object;
		TaskCall(3);
		func_529(var_190_object);
		TaskReturn();
	} else {
		var_264_bool = var_19_int == (int)1;
		if(var_264_bool == 0) goto Label_428;
		var_265_object = Obj(); var_266_bool = 0;
		var_17_bool = var_265_object;
		TaskCall(4);
		func_739(var_265_object, (bool)1);
		TaskReturn();
	}
Label_428:
	return 2;
	
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_bool = var_19_object;
	func_2657(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		func_524();
		var_54_object = Obj();
		var_17_bool = var_54_object;
		func_2664(var_54_object);
	}
	return 0;
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_bool = var_19_object;
	func_2657(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		func_707(var_17_bool);
		var_55_object = Obj();
		var_17_bool = var_55_object;
		func_2664(var_55_object);
	}
	return 0;
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_int, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0;
	var_27_bool = var_17_bool != (int)120;
	if(var_27_bool != 0) {
		return 8;
	}
	var_28_bool = var_0_object == 0; //@ne
	if(var_28_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_22_cvector);
		FindDirLength(var_23_float, var_22_cvector, (float)7000.0);
		var_31_cvector = CVector(0,0,0); var_32_float = 0;
		func_552(var_25_float, var_31_cvector, (float)1.7453293800354004);
		var_31_cvector = var_24_cvector;
		var_25_float = var_24_cvector | var_24_cvector;
		var_61_bool = 0;
		var_61_bool = 0;
		var_63_bool = var_25_float >= (float)2500.0;
		if(var_63_bool != 0) {
			var_64_bool = 0;
			var_65_float = var_23_float * var_23_float;
			var_67_float = var_65_float * (float)2.25;
			var_68_bool = var_25_float >= var_67_float;
			if(var_68_bool != 1) {
				var_69_bool = 0;
				func_723((bool)1, var_69_bool);
				if(var_69_bool != 1) {
					var_64_bool = 0;
				}
			}
			if(var_64_bool != 0) {
				var_61_bool = 1;
			}
		}
		if(var_61_bool == 0) goto Label_706;
		Stop();
		var_89_cvector = CVector(0,0,0);
		func_1856(var_89_cvector);
		var_1_object = var_89_cvector + var_24_cvector;
	}
Label_706:
	return 8;
	
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_707(var_17_bool);
	var_17_bool = Obj();
	func_2651();
	return 0;
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_int)
{
	var_19_bool = var_17_int == (int)1;
	if(var_19_bool != 0) {
		var_20_object = Obj();
		var_20_object = var_1_object;
		func_2480(var_20_object);
	} else {
		var_25_int = 0;
		var_17_int = var_25_int;
		func_1634(var_16_bool, var_17_int, var_25_int);
	}
	return 0;
	
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0;
	var_18_bool = 0;
	var_19_bool = var_1_object == var_17_object;
	if(var_19_bool != 0) {
		var_20_bool = var_2_object == 0; //@nz
		if(var_20_bool != 0) {
			var_18_bool = 1;
		}
	}
	if(var_18_bool != 0) {
		var_2_object = true;
		var_21_object = Obj();
		var_17_object = var_21_object;
		func_2305(var_21_object);
	}
	return 0;
}


task_5_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0;
	var_18_bool = 0;
	var_19_bool = var_1_object == var_17_object;
	if(var_19_bool != 0) {
		var_20_object = var_2_object;
		if(var_20_object != 0) {
			var_18_bool = 1;
		}
	}
	if(var_18_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_5_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	RequestClearPath(var_17_object);
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	func_1490(var_17_object);
	var_17_object = Obj();
	func_2651();
	return 0;
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0;
	IsOverrideActive(var_19_bool);
	var_20_bool = var_19_bool == 0; //@nz
	if(var_20_bool != 0) {
		var_21_object = Obj();
		var_17_object = var_21_object;
		func_2561(var_21_object);
	}
	return 2;
}


task_6_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	return 0;
}


task_6_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string)
{
	return 0;
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0;
	var_17_object = var_21_object;
	var_18_int = var_22_int;
	var_19_float = var_23_float;
	func_2089(var_21_object, var_22_int, var_23_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0);
	var_17_object = var_23_object;
	var_18_int = var_24_int;
	var_19_float = var_25_float;
	var_21_cvector = var_26_cvector;
	var_22_cvector = var_27_cvector;
	func_2157(var_25_float, var_26_cvector, var_27_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string)
{
	var_19_float = 0; var_20_float = 0;
	var_22_bool = var_18_string == "health";
	if(var_22_bool != 0) {
		GetProperty("health", var_20_float);
		var_25_bool = var_20_float <= (int)0;
		if(var_25_bool != 0) {
			SignalDeath(var_17_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_2594(var_18_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	
Label_384:
	Sleep((int)3);
	func_443();
	goto Label_384;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_20_int, var_21_object)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0;
	var_0_object = var_21_object;
	var_31_bool = 0; var_32_object = Obj(); var_33_float = 0;
	var_21_object = var_32_object;
	func_2187(var_31_bool, var_32_object, (float)70.0);
	var_78_bool = var_31_bool == 0; //@nz
	if(var_78_bool != 0) {
		var_20_int = -2;
		return 8;
	}
	CreateDialog(var_27_object);
	var_79_int = 0;
	func_2576(var_79_int);
	@@var_27_object:SetNPCName(var_79_int);
	var_80_int = 0;
	func_2574(var_80_int);
	@@var_27_object:SetNPCDescription(var_80_int);
	var_81_string = "";
	func_2578(var_81_string);
	@@var_27_object:SetPhoto(var_81_string);
	var_82_string = "";
	func_2580(var_82_string);
	@@var_27_object:SetPhoto2(var_82_string);
	var_83_int = 0;
	func_2538(var_83_int);
	@@var_27_object:SetPlayerName(var_83_int);
	IsOverrideActive(var_28_bool);
	var_91_bool = var_28_bool;
	if(var_91_bool != 0) {
		var_20_int = -2;
		return 8;
	}
	DoDialog(var_27_object);
	var_92_object = Obj(); var_93_object = Obj();
	var_21_object = var_92_object;
	var_27_object = var_93_object;
	TaskCall(1);
	func_74(var_94_object, var_95_object, var_96_string, var_97_bool, var_92_object, var_93_object);
	TaskReturn();
	@@var_27_object:IsDialogEnd(var_30_bool);
	
Label_56:
	var_141_bool = var_30_bool == 0; //@nz
	if(var_141_bool != 0) {
		sync();
		@@var_27_object:IsDialogEnd(var_30_bool);
		goto Label_56;
	}
	var_21_object = Obj();
	func_2256();
	StopDialog(var_27_object);
	@@var_27_object:GetReturnValue((int)-1);
	var_29_int = var_20_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2561(var_21_object)
{
	var_22_int = 0;
	func_2555(var_22_int);
	var_27_bool = var_22_int == (int)1;
	if(var_27_bool != 0) {
		WorkWithCorpse(var_21_object);
	} else {
		Barter(var_21_object);
	}
	return 0;
	
}


func_2305(var_21_object)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0);
	@@var_21_object:GetEyesHeight(var_24_float);
	var_25_cvector = CVector(0.0, 0.0, 0.0);
	var_26_float = GetByIndex(var_25_cvector, 1);
	var_24_float = var_26_float;
	SetByIndex(var_25_cvector, 1) = var_26_float;
	LookAsync(var_21_object, "head", var_25_cvector);
	return 4;
}


func_1029(var_0_object, var_393_float, var_394_int)
{
	var_395_object = Obj(); var_396_float = 0; var_397_float = 0; var_398_object = Obj(); var_399_float = 0; var_400_float = 0;
	var_402_float = var_393_float * (float)0.8999999761581421;
	GetVictim(var_402_float, var_398_object);
	ReportAttack(var_0_object);
	var_403_bool = var_398_object == var_0_object;
	if(var_403_bool != 0) {
		var_404_float = 0; var_405_object = Obj(); var_406_int = 0;
		var_398_object = var_405_object;
		var_394_int = var_406_int;
		func_759(var_406_int);
		var_404_float = var_399_float;
		var_407_float = 0; var_408_object = Obj(); var_409_float = 0; var_410_int = 0;
		var_398_object = var_408_object;
		var_399_float = var_409_float;
		var_411_int = 0; var_412_object = Obj(); var_413_int = 0;
		var_398_object = var_412_object;
		var_394_int = var_413_int;
		func_762(var_413_int);
		var_411_int = var_410_int;
		func_1907(var_407_float, var_408_object, var_409_float, var_410_int);
		var_407_float = var_400_float;
		var_472_int = 0;
		func_1412(var_472_int);
		ReportHit(var_0_object, var_472_int, var_400_float, var_399_float);
		var_473_object = Obj(); var_474_float = 0;
		var_398_object = var_473_object;
		var_400_float = var_474_float;
		func_1419();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_522(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_524()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2316()
{
	var_20_bool = 0;
	func_2582(var_20_bool);
	if(var_20_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2574(var_80_int)
{
	var_80_int = 518097;
	return 0;
}


func_2576(var_79_int)
{
	var_79_int = 518096;
	return 0;
}


func_529(var_190_object)
{
	func_2584();
	var_199_object = Obj();
	var_190_object = var_199_object;
	func_582(var_192_cvector, var_193_bool, var_190_object, var_199_object);
	return 0;
}


func_2578(var_81_string)
{
	var_81_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_1810(var_101_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_102_string = "";
	var_101_string = var_102_string;
	func_2323(var_102_string);
	PlayAnimation("all", var_101_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_101_string);
	RemoveEnvelope();
	return 0;
}


func_2580(var_82_string)
{
	var_82_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_2323(var_102_string)
{
	var_103_bool = 0; var_104_int = 0; var_105_bool = 0; var_106_int = 0; var_107_bool = 0; var_108_float = 0; var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_bool = 0; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_bool = 0; var_116_float = 0; var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0);
	IsExisting3DSound(var_111_bool, var_102_string);
	var_119_bool = var_111_bool == 0; //@nz
	if(var_119_bool != 0) {
		var_112_int = 0;

	Label_2329:
		var_121_int = var_112_int + (int)1;
		var_122_int = var_102_string + var_121_int;
		IsExisting3DSound(var_113_bool, var_122_int);
		var_123_bool = var_113_bool == 0; //@nz
		if(var_123_bool != 0) {
		} else {
			var_112_int = var_112_int + (int)1;
			goto Label_2329;
		}
		var_124_bool = var_112_int == 0; //@nz
		if(var_124_bool != 0) {
			return 16;
		}
		irand(var_114_int, var_112_int);
		var_126_int = var_114_int + (int)1;
		var_102_string = var_102_string + var_126_int;
	}
	Is3DSoundLoaded(var_115_bool, var_102_string);
	var_127_bool = var_115_bool;
	if(var_127_bool != 0) {
		GetEyesHeight(var_116_float);
		GetDirection(var_117_cvector);
		var_118_cvector = var_117_cvector * (int)50;
		var_129_float = GetByIndex(var_118_cvector, 1);
		var_129_float = var_129_float + var_116_float;
		SetByIndex(var_118_cvector, 1) = var_129_float;
		PlayGlobalSound(var_102_string, var_118_cvector);
	}
	return 16;
	
}


func_2582(var_74_bool)
{
	var_74_bool = 0;
	return 0;
}


func_1303(var_308_bool)
{
	var_309_bool = 0;
	var_309_bool = 0;
	var_310_bool = 0;
	func_1275(var_309_bool, var_310_bool);
	if(var_310_bool != 0) {
		var_327_bool = 0;
		func_1319(var_308_bool, var_309_bool, var_327_bool);
		if(var_327_bool != 0) {
			var_309_bool = 1;
		}
	}
	if(var_309_bool != 0) {
		var_308_bool = 1;
		return 0;
	}
	var_308_bool = 0;
	return 0;
}


func_2584()
{
	var_67_object = Obj(); var_68_object = Obj();
	GetScene(var_68_object);
	var_69_object = Obj();
	func_2364(var_69_object);
	@@var_68_object:RemoveStationaryActor(var_69_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2594(var_18_object)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_object = var_20_object;
	func_1868(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		var_23_bool = 0; var_24_object = Obj(); var_25_float = 0;
		var_18_object = var_24_object;
		func_2406(var_23_bool, var_24_object, (float)-0.10000000149011612);
		var_61_bool = 0; var_62_string = ""; var_63_string = "";
		func_2468(var_61_bool, "quest_b1_03", "doberman_dead");
	}
	func_2584();
	var_72_object = Obj();
	var_18_object = var_72_object;
	TaskCall(6);
	func_1683(var_72_object);
	TaskReturn();
	return 0;
}


func_1319(var_0_object, var_4_bool, var_327_bool)
{
	var_328_object = Obj(); var_329_bool = 0; var_330_float = 0; var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_object = Obj(); var_334_bool = 0; var_335_float = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0);
	GetScene(var_333_object);
	var_334_bool = 0;
	
Label_1323:
	var_338_cvector = CVector(0,0,0); var_339_object = Obj();
	var_339_object = var_0_object;
	func_1861(var_338_cvector, var_339_object);
	var_344_int = -var_338_cvector;
	FindDirLength(var_335_float, var_344_int, var_4_bool);
	var_345_bool = var_335_float < var_4_bool;
	if(var_345_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_336_cvector);
		GetPFPosition(var_337_cvector);
		WaitForAnimEnd();
		func_1407(var_337_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_334_bool = 1;
		var_349_bool = 0;
		func_1275(var_337_cvector, var_349_bool);
		var_350_bool = var_349_bool == 0; //@nz
		if(var_350_bool != 0) {
			goto Label_1361;
		}
		goto Label_1323;
	}
Label_1361:
	var_334_bool = var_327_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_552(var_0_object, var_31_cvector, var_32_float)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_float = 0;
	GetPosition(var_39_cvector);
	@@@var_0_object:GetPosition(var_40_cvector);
	GetDirection(var_41_cvector);
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	var_48_cvector = var_39_cvector - var_40_cvector;
	func_2370(var_47_cvector, var_48_cvector);
	var_55_float = var_41_cvector * (float)0.75;
	var_46_cvector = var_47_cvector + var_55_float;
	func_2370(var_45_cvector, var_46_cvector);
	var_45_cvector = var_42_cvector;
	FindLongestDir(var_43_cvector, var_44_float, var_42_cvector, var_32_float, (int)32, (float)7000.0);
	var_44_float = var_44_float - (int)100;
	var_60_bool = var_44_float < (int)0;
	if(var_60_bool != 0) {
		var_44_float = 0;
	}
	var_31_cvector = var_43_cvector * var_44_float;
	return 12;
}


func_2089(var_21_object, var_22_int, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_int = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0);
	var_42_bool = 0;
	var_42_bool = 0;
	var_43_bool = 0;
	var_43_bool = 0;
	var_44_object = var_21_object;
	if(var_44_object != 0) {
		var_46_bool = var_22_int != (int)4;
		if(var_46_bool != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		var_48_bool = var_22_int != (int)5;
		if(var_48_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
		var_51_cvector = CVector(0,0,0); var_52_object = Obj();
		var_21_object = var_52_object;
		func_1861(var_51_cvector, var_52_object);
		var_51_cvector = var_50_cvector;
		func_2370(var_49_cvector, var_50_cvector);
		var_49_cvector = var_33_cvector;
		CreateVectorVector(var_34_object);
		var_35_int = 1;

	Label_2118:
		var_63_int = "hit" + var_35_int;
		GetGeometryLocator(var_63_int, var_36_bool, var_37_cvector, var_38_cvector);
		var_64_bool = var_36_bool == 0; //@nz
		if(var_64_bool != 0) {
		} else {
			var_112_int = var_38_cvector | var_33_cvector;
			var_114_bool = var_112_int >= (float)0.7071067690849304;
			if(var_114_bool != 0) {
				@@var_34_object:add(var_37_cvector);
			}
			var_35_int = var_35_int + (int)1;
			goto Label_2118;
		}
		@@var_34_object:size(var_39_int);
		var_65_int = var_39_int;
		if(var_65_int != 0) {
			irand(var_40_int, var_39_int);
			@@var_34_object:get(var_41_cvector, var_40_int);
			var_66_object = Obj(); var_67_int = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
			var_21_object = var_66_object;
			var_22_int = var_67_int;
			var_23_float = var_68_float;
			var_41_cvector = var_69_cvector;
			var_70_cvector = -var_33_cvector;
			func_2157(var_68_float, var_69_cvector, var_70_cvector);
			return 18;
		}
		var_34_object = 0;
	}
	var_111_object = Obj();
	var_21_object = var_111_object;
	func_2045(var_111_object);
	return 18;
	
}


func_1068(var_0_object, var_1_object, var_356_bool, var_357_float)
{
	var_358_int = 0; var_359_bool = 0; var_360_int = 0; var_361_string = ""; var_362_int = 0; var_363_bool = 0; var_364_int = 0; var_365_string = "";
	func_1407(var_365_string);
	irand(var_362_int, var_1_object);
	var_362_int = var_362_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2489();
	var_374_int = "attack_begin" + var_362_int;
	PlayAnimation("all", var_374_int);
	WaitForAnimEnd();
	func_1375(var_364_int, var_365_string);
	var_390_bool = 0; var_391_object = Obj();
	var_391_object = var_0_object;
	func_2021(var_390_bool, var_391_object);
	var_392_bool = var_390_bool == 0; //@nz
	if(var_392_bool != 0) {
		StopAsync();
		var_356_bool = 0;
		return 8;
	}
	var_393_float = 0; var_394_int = 0;
	var_357_float = var_393_float;
	var_362_int = var_394_int;
	func_1029(var_365_string, var_393_float, var_394_int);
	var_477_int = "attack_middle" + var_362_int;
	HasAnimation(var_363_bool, "all", var_477_int);
	var_478_bool = var_363_bool;
	if(var_478_bool != 0) {
		func_2489();
		var_481_int = "attack_middle" + var_362_int;
		PlayAnimation("all", var_481_int);
		WaitForAnimEnd();
		func_1407(var_365_string);
		var_482_bool = 0; var_483_object = Obj();
		var_483_object = var_0_object;
		func_2021(var_482_bool, var_483_object);
		var_484_bool = var_482_bool == 0; //@nz
		if(var_484_bool != 0) {
			StopAsync();
			var_356_bool = 0;
			return 8;
		}
		var_485_float = 0; var_486_int = 0;
		var_357_float = var_485_float;
		var_362_int = var_486_int;
		func_1029(var_365_string, var_485_float, var_486_int);
		var_364_int = 1;

	Label_1145:
		var_488_int = "attack_middle" + var_362_int;
		var_490_int = var_488_int + "_";
		var_365_string = var_490_int + var_364_int;
		HasAnimation(var_363_bool, "all", var_365_string);
		var_492_bool = var_363_bool == 0; //@nz
		if(var_492_bool != 0) {
		} else {
			func_2489();
			PlayAnimation("all", var_365_string);
			WaitForAnimEnd();
			func_1407(var_365_string);
			var_508_bool = 0; var_509_object = Obj();
			var_509_object = var_0_object;
			func_2021(var_508_bool, var_509_object);
			var_510_bool = var_508_bool == 0; //@nz
			if(var_510_bool != 0) {
				StopAsync();
				var_356_bool = 0;
				var_511_float = 0; var_512_int = 0;
				var_357_float = var_511_float;
				var_362_int = var_512_int;
				func_1029(var_365_string, var_511_float, var_512_int);
				var_364_int = var_364_int + (int)1;
				goto Label_1145;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_496_int = "attack_end" + var_362_int;
	PlayAnimation("all", var_496_int);
	var_497_bool = 0;
	func_1421(var_497_bool);
	if(var_497_bool != 0) {
		var_498_bool = 0; var_499_float = 0;
		func_1205(var_498_bool, (float)0.75);
		StopAsync();
	}
	var_356_bool = 1;
	return 8;
	
}


func_2045(var_34_object)
{
	var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_bool = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_string = "";
	var_49_bool = var_34_object == 0; //@ne
	if(var_49_bool != 0) {
		return 14;
	}
	IsDead(var_42_bool);
	var_50_bool = var_42_bool;
	if(var_50_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_43_int);
	var_52_bool = var_43_int < (int)0;
	if(var_52_bool != 0) {
		return 14;
	}
	@@var_34_object:GetPosition(var_44_cvector);
	GetPosition(var_45_cvector);
	GetDirection(var_46_cvector);
	var_47_cvector = var_45_cvector - var_44_cvector;
	var_53_float = GetByIndex(var_47_cvector, 0);
	var_54_float = GetByIndex(var_46_cvector, 0);
	var_55_float = var_53_float * var_54_float;
	var_56_float = GetByIndex(var_47_cvector, 2);
	var_57_float = GetByIndex(var_46_cvector, 2);
	var_58_float = var_56_float * var_57_float;
	var_59_int = var_55_float + var_58_float;
	var_61_bool = var_59_int >= (int)0;
	if(var_61_bool != 0) {
		var_48_string = "fhit";
	} else {
		var_48_string = "bhit";
	}
	var_64_int = var_48_string + "1";
	var_66_int = var_48_string + "2";
	FadeSecondaryAnimation("hit_react", var_64_int, var_66_int, (int)-10);
	return 14;
	
}


func_1842(var_435_string, var_436_int)
{
	var_438_bool = var_436_int == (int)2;
	if(var_438_bool != 0) {
		var_435_string = "fire";
		return 0;
	EMIT "GOTO 0x73e";
	}
	var_440_bool = var_436_int == (int)1;
	if(var_440_bool != 0) {
		var_435_string = "bullet";
		return 0;
	}
	var_435_string = "phys";
	return 0;
}


func_2555(var_22_int)
{
	var_23_int = 0; var_24_int = 0;
	GetVariable("branch", var_24_int);
	var_24_int = var_22_int;
	return 2;
}


func_2364(var_69_object)
{
	var_70_object = Obj(); var_71_object = Obj();
	self(var_71_object);
	var_71_object = var_69_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1856(var_89_cvector)
{
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0);
	GetPosition(var_91_cvector);
	var_91_cvector = var_89_cvector;
	return 2;
}


func_2370(var_49_cvector, var_50_cvector)
{
	var_57_float = 0; var_58_float = 0;
	var_59_int = var_50_cvector | var_50_cvector;
	var_58_float = sqrt(var_59_int);
	var_60_float = 9.999999974752427e-07;
	var_61_bool = var_58_float < var_60_float;
	if(var_61_bool != 0) {
		var_49_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_49_cvector = var_50_cvector / var_58_float;
	return 2;
}


func_1861(var_51_cvector, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
	GetPosition(var_55_cvector);
	@@var_52_object:GetPosition(var_56_cvector);
	var_51_cvector = var_56_cvector - var_55_cvector;
	return 4;
}


func_582(var_0_object, var_1_object, var_2_object, var_199_object)
{
	var_200_cvector = CVector(0,0,0); var_201_float = 0; var_202_bool = 0; var_203_cvector = CVector(0,0,0); var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_float = 0; var_207_bool = 0; var_208_cvector = CVector(0,0,0); var_209_float = 0;
	var_0_object = var_199_object;
	var_210_cvector = CVector(0,0,0); var_211_float = 0;
	func_552(var_209_float, var_210_cvector, (float)1.7453293800354004);
	var_210_cvector = var_205_cvector;
	var_206_float = var_205_cvector | var_205_cvector;
	var_236_bool = var_206_float < (float)2500.0;
	if(var_236_bool != 0) {
		var_237_cvector = CVector(0,0,0); var_238_float = 0;
		func_552(var_209_float, var_237_cvector, (float)2.6179938316345215);
		var_237_cvector = var_205_cvector;
		var_206_float = var_205_cvector | var_205_cvector;
		var_240_bool = var_206_float < (float)2500.0;
		if(var_240_bool != 0) {
			var_242_float = sqrt(var_206_float);
			var_243_int = "Can't retreat, distance: " + var_242_float;
			Trace(var_243_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_245_float = GetByIndex(var_205_cvector, 0);
	var_246_float = GetByIndex(var_205_cvector, 2);
	Rotate(var_245_float, var_246_float);
	var_247_cvector = CVector(0,0,0);
	func_1856(var_247_cvector);
	var_1_object = var_247_cvector + var_205_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_624:
	MovePoint(var_1_object, (int)1, var_207_bool);
	var_253_bool = var_207_bool;
	if(var_253_bool != 0) {
		var_254_bool = var_0_object == 0; //@ne
		if(var_254_bool != 0) {
			goto Label_654;
		EMIT "GOTO 0x28c";

		Label_654:
			return 10;
		}
		var_255_cvector = CVector(0,0,0); var_256_float = 0;
		func_552(var_209_float, var_255_cvector, (float)2.6179938316345215);
		var_255_cvector = var_208_cvector;
		var_209_float = var_208_cvector | var_208_cvector;
		var_258_bool = var_209_float >= (float)2500.0;
		if(var_258_bool != 0) {
			var_259_cvector = CVector(0,0,0);
			func_1856(var_259_cvector);
			var_1_object = var_259_cvector + var_208_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_654;
		}
	}
	var_262_bool = var_2_object == 0; //@nz
	if(var_262_bool == 1) goto Label_624;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_92_object, var_93_object)
{
	var_0_object = var_93_object;
	var_1_object = var_92_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_99_string = "";
		func_132(var_93_object, "Neutral");
		@@@var_0_object:SetMessage((int)518092);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)519592, (int)20773, (int)20772);
		@@@var_0_object:AddReply((int)519588, (int)20769, (int)20768);
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	var_123_bool = 0;
	func_2582(var_123_bool);
	if(var_123_bool != 0) {

	Label_106:
		lshWaitForAnimEnd();
		var_124_string = var_3_string;
		if(var_124_string != 0) {
		} else {
			var_125_string = "";
			var_125_string = var_2_object;
			func_2274(var_125_string);
			goto Label_106;
	}
		PlayAnimation("all", "idle");

	Label_121:
		WaitForAnimEnd();
		var_138_string = var_3_string;
		if(var_138_string != 0) {
			goto Label_131;
		}
		PlayAnimation("all", "idle");
		goto Label_121;
	}
	goto Label_131;
	
Label_131:
	return 0;
	
}


func_1868(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	IsPlayerActor(var_20_object, var_22_bool);
	var_22_bool = var_19_bool;
	return 2;
}


func_2380(var_445_float, var_446_float, var_447_float)
{
	var_450_bool = var_446_float < var_447_float;
	if(var_450_bool != 0) {
		var_446_float = var_445_float;
	} else {
		var_447_float = var_445_float;
	}
	return 0;
	
}


func_1873(var_42_bool, var_43_object, var_44_string)
{
	var_45_bool = 0; var_46_bool = 0;
	var_49_bool = IsFuncExist(var_43_object, "HasProperty", (int)2);
	var_50_bool = var_49_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_42_bool = 0;
		return 2;
	}
	@@var_43_object:HasProperty(var_44_string, var_46_bool);
	var_46_bool = var_42_bool;
	return 2;
}


func_2387(var_52_float, var_53_float, var_54_float, var_55_float)
{
	var_56_bool = var_53_float < var_54_float;
	if(var_56_bool != 0) {
		var_54_float = var_52_float;
		return 0;
	}
	var_57_bool = var_53_float > var_55_float;
	if(var_57_bool != 0) {
		var_55_float = var_52_float;
		return 0;
	}
	var_53_float = var_52_float;
	return 0;
}


func_1364(var_0_object, var_258_bool)
{
	var_259_bool = 0; var_260_bool = 0;
	var_263_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_263_bool != 0) {
		@@@var_0_object:IsAttacking(var_260_bool);
		var_260_bool = var_258_bool;
		return 2;
	}
	var_258_bool = 0;
	return 2;
}


func_1885(var_34_bool, var_35_object, var_36_string, var_37_float, var_38_float, var_39_float)
{
	var_40_float = 0; var_41_float = 0;
	var_42_bool = 0; var_43_object = Obj(); var_44_string = "";
	var_35_object = var_43_object;
	var_36_string = var_44_string;
	func_1873(var_42_bool, var_43_object, var_44_string);
	var_51_bool = var_42_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_34_bool = 0;
		return 2;
	}
	@@var_35_object:GetProperty(var_36_string, var_41_float);
	var_52_float = 0; var_53_float = 0; var_54_float = 0; var_55_float = 0;
	var_53_float = var_41_float + var_37_float;
	var_38_float = var_54_float;
	var_39_float = var_55_float;
	func_2387(var_52_float, var_53_float, var_54_float, var_55_float);
	@@var_35_object:SetProperty(var_36_string, var_52_float);
	var_34_bool = 1;
	return 2;
}


func_2398(var_80_float, var_81_cvector, var_82_cvector)
{
	var_83_int = var_81_cvector | var_82_cvector;
	var_84_int = var_81_cvector | var_81_cvector;
	var_85_int = var_82_cvector | var_82_cvector;
	var_86_float = var_84_int * var_85_int;
	var_87_float = sqrt(var_86_float);
	var_80_float = var_83_int / var_87_float;
	return 0;
}


func_1375(var_2_object, var_5_object)
{
	var_375_float = 0; var_376_int = 0; var_377_float = 0; var_378_int = 0;
	var_379_bool = var_2_object == 0; //@nz
	if(var_379_bool != 0) {
		return 4;
	}
	var_380_object = var_5_object;
	if(var_380_object != 0) {
		var_5_object = var_5_object + (int)-1;
		var_383_bool = var_5_object > (int)0;
		if(var_383_bool != 0) {
			return 4;
		}
	}
	rand(var_377_float);
	var_384_float = 0;
	func_1425(var_384_float);
	var_385_bool = var_377_float < var_384_float;
	if(var_385_bool != 0) {
		irand(var_378_int, var_2_object);
		var_378_int = var_378_int + (int)1;
		var_388_int = "attack" + var_378_int;
		Speak(var_388_int);
		var_389_int = 0;
		func_1423(var_389_int);
		var_5_object = var_389_int;
	}
	return 4;
}


func_2657(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_object = var_21_object;
	func_2021(var_20_bool, var_21_object);
	var_20_bool = var_18_bool;
	return 0;
}


func_1634(var_0_object, var_1_object, var_25_int)
{
	var_27_bool = var_25_int != (int)0;
	if(var_27_bool != 0) {
		return 0;
	}
	var_28_bool = 0; var_29_object = Obj();
	var_29_object = var_1_object;
	func_1672(var_28_bool, var_29_object);
	var_64_bool = var_28_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2406(var_23_bool, var_24_object, var_25_float)
{
	var_26_bool = var_24_object == 0; //@nz
	if(var_26_bool != 0) {
		var_23_bool = 0;
		return 0;
	}
	var_28_bool = var_25_float > (int)0;
	if(var_28_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_59_bool = var_25_float < (int)0;
		if(var_59_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2427;
		}
		var_23_bool = 0;
		return 0;
	}
Label_2427:
	var_30_float = 0;
	var_25_float = var_30_float;
	func_2458(var_30_float);
	var_34_bool = 0; var_35_object = Obj(); var_36_string = ""; var_37_float = 0; var_38_float = 0; var_39_float = 0;
	var_24_object = var_35_object;
	var_25_float = var_37_float;
	func_1885(var_34_bool, var_35_object, "reputation", var_37_float, (float)0, (float)1);
	var_23_bool = 1;
	return 0;
	
}


func_2664(var_55_object)
{
	var_56_object = Obj(); var_57_bool = 0;
	var_55_object = var_56_object;
	TaskCall(4);
	func_739(var_56_object, (bool)1);
	TaskReturn();
	return 0;
}


func_2157(var_23_object, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj();
	GetScene(var_30_object);
	AddActorByType(var_31_object, "scripted", var_30_object, var_26_cvector, var_27_cvector, "blood_dir.xml");
	var_34_object = Obj();
	var_23_object = var_34_object;
	func_2045(var_34_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1907(var_407_float, var_408_object, var_409_float, var_410_int)
{
	var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0; var_420_int = 0; var_421_string = ""; var_422_int = 0; var_423_float = 0; var_424_float = 0; var_425_float = 0;
	var_426_bool = 0; var_427_object = Obj(); var_428_string = "";
	var_408_object = var_427_object;
	func_1873(var_426_bool, var_427_object, "health");
	var_429_bool = var_426_bool == 0; //@nz
	if(var_429_bool != 0) {
		var_407_float = 0.0;
		return 12;
	}
	var_430_bool = 0; var_431_object = Obj(); var_432_string = "";
	var_408_object = var_431_object;
	func_1873(var_430_bool, var_431_object, "armor");
	var_433_bool = var_430_bool == 0; //@nz
	if(var_433_bool != 0) {
		var_420_int = 0;
	} else {
			@@var_408_object:GetProperty("armor", var_420_int);
	}
	var_435_string = ""; var_436_int = 0;
	var_410_int = var_436_int;
	func_1842(var_435_string, var_436_int);
	var_421_string = "armor_" + var_435_string;
	var_441_bool = 0; var_442_object = Obj(); var_443_string = "";
	var_408_object = var_442_object;
	var_421_string = var_443_string;
	func_1873(var_441_bool, var_442_object, var_443_string);
	var_444_bool = var_441_bool == 0; //@nz
	if(var_444_bool != 0) {
		var_422_int = 0;
	} else {
		@@var_408_object:GetProperty(var_421_string, var_422_int);

	}
	var_445_float = 0; var_446_float = 0; var_447_float = 0;
	var_448_int = var_420_int + var_422_int;
	var_446_float = var_448_int / (float)100.0;
	func_2380(var_445_float, var_446_float, (float)1);
	var_445_float = var_423_float;
	@@var_408_object:GetProperty("health", var_424_float);
	var_453_int = (int)1 - var_423_float;
	var_425_float = var_409_float * var_453_int;
	var_455_float = 0; var_456_float = 0; var_457_float = 0; var_458_float = 0;
	var_456_float = var_424_float - var_425_float;
	func_2387(var_455_float, var_456_float, (float)0, (float)1);
	@@var_408_object:SetProperty("health", var_455_float);
	var_461_bool = 0; var_462_object = Obj();
	var_408_object = var_462_object;
	func_1868(var_461_bool, var_462_object);
	if(var_461_bool != 0) {
		var_463_float = 0;
		var_463_float = -var_425_float;
		func_2441(var_463_float);
	}
	var_425_float = var_407_float;
	return 12;
	
}


func_1656(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2171(var_241_object)
{
	var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0);
	@@var_241_object:GetPosition(var_245_cvector);
	GetPosition(var_246_cvector);
	var_247_cvector = var_245_cvector - var_246_cvector;
	var_248_float = GetByIndex(var_247_cvector, 0);
	var_249_float = GetByIndex(var_247_cvector, 2);
	RotateAsync(var_248_float, var_249_float);
	return 6;
}


func_1407(var_0_object)
{
	var_131_object = Obj();
	var_131_object = var_0_object;
	func_2480(var_131_object);
	return 0;
}


func_132(var_2_object, var_99_string)
{
	var_100_bool = 0;
	func_2582(var_100_bool);
	var_101_bool = var_100_bool == 0; //@nz
	if(var_101_bool != 0) {
		return 0;
	}
	var_102_bool = var_99_string == var_2_object;
	if(var_102_bool != 0) {
		return 0;
	}
	var_103_string = ""; var_104_bool = 0;
	var_99_string = var_103_string;
	var_106_bool = var_99_string == "";
	if(var_106_bool != 0) {
		var_104_bool = 0;
	} else {
		var_104_bool = 1;
	}
	func_2290(var_103_string, var_104_bool);
	var_2_object = var_99_string;
	return 0;
	
}


func_1412(var_472_int)
{
	var_472_int = 0;
	return 0;
}


func_2182(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0;
	IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
	return 2;
}


func_1414()
{
	var_264_string = "";
	func_2323("attack_stay");
	return 0;
}


func_1672(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj();
	var_29_object = var_31_object;
	func_2021(var_30_bool, var_31_object);
	var_30_bool = var_28_bool;
	return 0;
}


func_2441(var_463_float)
{
	var_464_object = Obj(); var_465_object = Obj();
	CreateFloatVector(var_465_object);
	@@var_465_object:add(var_463_float);
	var_467_bool = var_463_float < (int)0;
	if(var_467_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_465_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2187(var_31_bool, var_32_object, var_33_float)
{
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_bool = 0;
	@@var_32_object:GetPosition(var_44_cvector);
	@@var_32_object:GetEyesHeight(var_43_float);
	var_52_float = GetByIndex(var_44_cvector, 1);
	var_52_float = var_52_float + var_43_float;
	SetByIndex(var_44_cvector, 1) = var_52_float;
	GetPosition(var_45_cvector);
	GetEyesHeight(var_43_float);
	var_53_float = GetByIndex(var_45_cvector, 1);
	var_53_float = var_53_float + var_43_float;
	SetByIndex(var_45_cvector, 1) = var_53_float;
	var_46_cvector = var_44_cvector - var_45_cvector;
	var_54_float = GetByIndex(var_46_cvector, 1);
	SetByIndex(var_46_cvector, 1) = (float)0;
	var_55_int = var_46_cvector | var_46_cvector;
	var_56_float = sqrt(var_55_int);
	var_46_cvector = var_46_cvector / var_56_float;
	var_47_cvector = -var_46_cvector;
	var_57_float = var_46_cvector * var_33_float;
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0);
	var_59_cvector = var_47_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2370(var_58_cvector, var_59_cvector);
	var_67_float = var_58_cvector * (int)25;
	var_68_int = var_57_float + var_67_float;
	var_48_cvector = var_68_int - CVector(0.0, 10.0, 0.0);
	var_49_cvector = var_45_cvector + var_48_cvector;
	IsOverrideActive(var_50_bool);
	var_70_bool = var_50_bool;
	if(var_70_bool != 0) {
		var_31_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_49_cvector, var_47_cvector, (bool)1);
	var_72_float = GetByIndex(var_48_cvector, 0);
	var_73_float = GetByIndex(var_48_cvector, 2);
	Rotate(var_72_float, var_73_float);
	var_74_bool = 0;
	func_2582(var_74_bool);
	if(var_74_bool != 0) {
	} else {
		HasAnimationTrack(var_51_bool, "head");
		var_76_bool = var_51_bool;
		if(var_76_bool == 0) goto Label_2250;
		LookAsyncCamera("head");
	}
Label_2250:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_31_bool = 1;
	return 18;
	
}


func_1419()
{
	return 0;
}


func_1421(var_497_bool)
{
	var_497_bool = 1;
	return 0;
}


func_1679(var_207_string)
{
	var_207_string = "walk";
	return 0;
}


func_1423(var_389_int)
{
	var_389_int = 1;
	return 0;
}


func_1681(var_208_string)
{
	var_208_string = "run";
	return 0;
}


func_1425(var_384_float)
{
	var_384_float = 0.5;
	return 0;
}


func_1683(var_72_object)
{
	var_73_bool = 0; var_74_bool = 0;
	AddItem(var_74_bool, "powder", (int)0, (int)1);
	var_78_object = Obj();
	var_72_object = var_78_object;
	func_1694(var_78_object);
	return 2;
}


func_1427(var_2_object, var_138_bool, var_139_object, var_140_float, var_141_float, var_142_bool, var_143_bool)
{
	var_147_bool = 0; var_148_bool = 0; var_149_bool = 0; var_150_bool = 0;
	var_151_object = Obj();
	var_139_object = var_151_object;
	func_2480(var_151_object);
	SetTimer((int)1, (int)5);
	CanSee(var_149_bool, var_139_object);
	var_154_bool = var_149_bool;
	if(var_154_bool != 0) {
		var_2_object = true;
		var_155_object = Obj();
		var_139_object = var_155_object;
		func_2305(var_155_object);
	} else {
		var_2_object = false;
	}
	var_162_bool = 0; var_163_object = Obj();
	var_139_object = var_163_object;
	func_1868(var_162_bool, var_163_object);
	if(var_162_bool != 0) {
		var_166_object = Obj();
		func_2364(var_166_object);
		SendPlayerEnemy(var_139_object, var_166_object);
	}
	var_167_bool = 0; var_168_object = Obj(); var_169_float = 0; var_170_float = 0; var_171_bool = 0; var_172_bool = 0;
	var_139_object = var_168_object;
	var_140_float = var_169_float;
	var_141_float = var_170_float;
	var_142_bool = var_171_bool;
	var_143_bool = var_172_bool;
	func_1532(var_149_bool, var_150_bool, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool);
	var_167_bool = var_150_bool;
	var_218_object = var_2_object;
	if(var_218_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_150_bool = var_138_bool;
	return 4;
	
}


func_2458(var_30_float)
{
	var_31_object = Obj(); var_32_object = Obj();
	CreateFloatVector(var_32_object);
	@@var_32_object:add(var_30_float);
	SendWorldWndMessage((int)16, var_32_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1694(var_78_object)
{
	EventDisable(0);
	var_79_object = Obj();
	var_78_object = var_79_object;
	func_1719(var_79_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1705:
	Hold();
	goto Label_1705;
}
EMIT "Return(); Pop(0)";


func_2468(var_61_bool, var_62_string, var_63_string)
{
	var_64_object = Obj(); var_65_object = Obj();
	FindActor(var_65_object, var_62_string);
	var_66_bool = var_65_object == 0; //@ne
	if(var_66_bool != 0) {
		var_61_bool = 0;
		return 2;
	}
	Trigger(var_65_object, var_63_string);
	var_61_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2480(var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	IsPlayerActor(var_20_object, var_22_bool);
	var_23_bool = var_22_bool;
	if(var_23_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1205(var_498_bool, var_499_float)
{
	var_500_float = 0; var_501_bool = 0; var_502_float = 0; var_503_bool = 0;
	rand(var_502_float);
	var_504_bool = var_502_float < var_499_float;
	if(var_504_bool != 0) {

	Label_1210:
		IsAnimationPlaying(var_503_bool);
		var_505_bool = var_503_bool == 0; //@nz
		if(var_505_bool != 0) {
		} else {
			var_506_bool = 0;
			func_1303(var_506_bool);
			if(var_506_bool != 0) {
				var_498_bool = 1;
				sync();
				goto Label_1210;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1407(var_503_bool);
	}
	goto Label_1230;
	
Label_1230:
	var_498_bool = 0;
	return 4;
	
}


func_1719(var_79_object)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_string = ""; var_85_object = Obj(); var_86_bool = 0; var_87_bool = 0; var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_string = ""; var_95_object = Obj(); var_96_bool = 0; var_97_bool = 0; var_98_float = 0; var_99_cvector = CVector(0,0,0);
	var_100_bool = var_79_object == 0; //@ne
	if(var_100_bool != 0) {
		var_101_string = "";
		func_1810("fdie");
	} else {
		@@var_79_object:GetPosition(var_90_cvector);
		GetPosition(var_91_cvector);
		GetDirection(var_92_cvector);
		var_93_cvector = var_91_cvector - var_90_cvector;
		var_133_float = GetByIndex(var_93_cvector, 0);
		var_134_float = GetByIndex(var_92_cvector, 0);
		var_135_float = var_133_float * var_134_float;
		var_136_float = GetByIndex(var_93_cvector, 2);
		var_137_float = GetByIndex(var_92_cvector, 2);
		var_138_float = var_136_float * var_137_float;
		var_139_int = var_135_float + var_138_float;
		var_141_bool = var_139_int >= (int)0;
		if(var_141_bool != 0) {
			var_94_string = "fdie";
		} else {
				var_94_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_79_object = var_95_object;
		var_144_bool = IsFuncExist(var_79_object, "GetScriptProperty", (int)2);
		if(var_144_bool != 0) {
			@@var_79_object:HasScriptProperty(var_96_bool, "Owner");
			var_146_bool = var_96_bool;
			if(var_146_bool != 0) {
				@@var_79_object:GetScriptProperty(var_95_object, "Owner");
				var_148_bool = var_95_object == 0; //@ne
				if(var_148_bool != 0) {
					var_79_object = var_95_object;
				}
			}
		}
		var_151_bool = IsFuncExist(var_95_object, "@GetEyesHeight", (int)1);
		if(var_151_bool != 0) {
			@@var_95_object:GetEyesHeight(var_98_float);
			var_99_cvector = CVector(0.0, 0.0, 0.0);
			var_152_float = GetByIndex(var_99_cvector, 1);
			var_98_float = var_152_float;
			SetByIndex(var_99_cvector, 1) = var_152_float;
			LookAsync(var_79_object, "head", var_99_cvector);
			var_97_bool = 1;
		} else {
			var_97_bool = 0;

		}
		var_154_string = "";
		var_94_string = var_154_string;
		func_2323(var_154_string);
		PlayAnimation("all", var_94_string);
		WaitForAnimEnd();
		var_156_bool = var_97_bool;
		if(var_156_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_94_string);
		RemoveEnvelope();
		var_95_object = 0;
	}
	return 20;
	
}


func_2489()
{
	var_368_object = Obj(); var_369_object = Obj();
	GetScene(var_369_object);
	var_371_object = Obj();
	func_2364(var_371_object);
	BroadcastMessage("battle", var_371_object, var_369_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_443()
{
	var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_float = 0; var_31_bool = 0;
	WaitForAnimEnd();
	var_32_bool = 0;
	func_2182(var_32_bool);
	var_35_bool = var_32_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 14;
	}
	func_2507((int)0);
	var_36_int = var_25_int;
	var_26_int = 0;
	
Label_457:
	var_49_bool = 0;
	var_49_bool = 0;
	var_51_bool = var_26_int < (int)5;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		func_2182(var_52_bool);
		if(var_52_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		irand(var_27_int, (int)3);
		var_55_bool = var_27_int == (int)0;
		if(var_55_bool != 0) {
			var_56_int = var_25_int;
			if(var_56_int == 0) goto Label_490;
			irand(var_28_int, var_25_int);
			var_58_string = ""; var_59_int = 0;
			var_28_int = var_59_int;
			func_2500(var_58_string, var_59_int);
			PlayAnimation("all", var_58_string);
			WaitForAnimEnd(var_29_bool);
			var_60_bool = var_29_bool == 0; //@nz
			if(var_60_bool != 0) {
			} else {
		} else {
				var_65_bool = var_27_int == (int)1;
				if(var_65_bool != 0) {
					rand(var_30_float, (int)4);
					var_68_int = var_30_float + (int)1;
					Sleep(var_68_int, var_31_bool);
					var_69_bool = var_31_bool == 0; //@nz
					if(var_69_bool != 0) {
						goto Label_519;
					}
					goto Label_508;
				}
				var_70_int = var_26_int;
				if(var_70_int == 0) goto Label_508;
				goto Label_519;
		}
		Label_508:
			var_61_bool = 0;
			func_522(var_61_bool);
			var_62_bool = var_61_bool == 0; //@nz
			if(var_62_bool != 0) {
				goto Label_519;
			}
			ResetAAS();
			var_26_int = var_26_int + (int)1;
			goto Label_457;

		}
	}
Label_519:
	ResetAAS();
	return 14;
	
}


func_1980(var_45_bool, var_46_object)
{
	var_47_bool = 0; var_48_bool = 0;
	@@var_46_object:IsDead(var_48_bool);
	var_48_bool = var_45_bool;
	return 2;
}


func_1985(var_34_bool, var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj();
	var_40_bool = var_35_object == 0; //@ne
	if(var_40_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	var_41_bool = 0;
	var_41_bool = 0;
	var_44_bool = IsFuncExist(var_35_object, "IsDead", (int)1);
	if(var_44_bool != 0) {
		var_45_bool = 0; var_46_object = Obj();
		var_35_object = var_46_object;
		func_1980(var_45_bool, var_46_object);
		if(var_45_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	GetScene(var_38_object);
	var_49_bool = var_38_object == 0; //@ne
	if(var_49_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	@@var_35_object:GetScene(var_39_object);
	var_50_bool = var_38_object != var_39_object;
	if(var_50_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	var_34_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_707(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_2500(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = "";
	var_46_int = var_43_int;
	if(var_46_int != 0) {
		"idle" = "idle" + var_43_int;
	}
	var_45_string = var_42_string;
	return 2;
}


func_2507(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_39_int = 0;
	
Label_2509:
	var_42_string = ""; var_43_int = 0;
	var_39_int = var_43_int;
	func_2500(var_42_string, var_43_int);
	HasAnimation(var_40_bool, "all", var_42_string);
	var_47_bool = var_40_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_39_int = var_39_int + (int)1;
		goto Label_2509;
	}
	var_39_int = var_36_int;
	return 4;
	
}


func_2256()
{
	var_143_bool = 0; var_144_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_146_bool = 0;
	func_2582(var_146_bool);
	if(var_146_bool != 0) {
	} else {
		HasAnimationTrack(var_144_bool, "head");
		var_148_bool = var_144_bool;
		if(var_148_bool == 0) goto Label_2273;
		UnlookAsync("head");
	}
Label_2273:
	return 2;
	
}


func_1232(var_0_object, var_295_bool, var_296_float)
{
	var_297_bool = 0; var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_float = 0; var_302_bool = 0; var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0;
	
Label_1233:
	IsAnimationPlaying(var_302_bool);
	var_307_bool = var_302_bool == 0; //@nz
	if(var_307_bool != 0) {
	} else {
		var_308_bool = 0;
		func_1303(var_308_bool);
		if(var_308_bool != 0) {
			var_295_bool = 1;
			return 10;
		}
		var_351_bool = 0; var_352_object = Obj();
		var_352_object = var_0_object;
		func_2021(var_351_bool, var_352_object);
		var_353_bool = var_351_bool == 0; //@nz
		if(var_353_bool != 0) {
			var_295_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_303_cvector);
		GetPFPosition(var_304_cvector);
		var_305_cvector = var_303_cvector - var_304_cvector;
		var_306_float = var_305_cvector | var_305_cvector;
		var_354_float = var_296_float * var_296_float;
		var_355_bool = var_306_float < var_354_float;
		if(var_355_bool != 0) {
			var_356_bool = 0; var_357_float = 0;
			var_296_float = var_357_float;
			func_1068(var_305_cvector, var_306_float, var_356_bool, var_357_float);
			var_295_bool = 1;
			sync();
			goto Label_1233;
		}
		return 10;
	}
	func_1407(var_306_float);
	var_295_bool = 0;
	return 10;
	
}


func_1490(var_2_object)
{
	KillTimer((int)1);
	var_19_object = var_2_object;
	if(var_19_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1656(var_17_object);
	return 0;
}


func_723(var_0_object, var_69_bool)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	GetDirection(var_72_cvector);
	var_74_cvector = CVector(0,0,0); var_75_object = Obj();
	var_75_object = var_0_object;
	func_1861(var_74_cvector, var_75_object);
	var_74_cvector = var_73_cvector;
	var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0);
	var_72_cvector = var_81_cvector;
	var_73_cvector = var_82_cvector;
	func_2398(var_80_float, var_81_cvector, var_82_cvector);
	var_69_bool = var_80_float >= (float)-0.3420201241970062;
	return 4;
}


func_2524(var_31_object)
{
	@@var_31_object:SetReturnValue((int)1);
	return 0;
}


func_2529(var_24_object)
{
	SetVariable("b1q03_retreat", (int)1);
	@@var_24_object:SetReturnValue((int)0);
	return 0;
}


func_2274(var_125_string)
{
	var_126_bool = 0; var_127_float = 0; var_128_float = 0; var_129_bool = 0; var_130_float = 0; var_131_float = 0;
	lshHasAnimation(var_129_bool, var_125_string);
	var_132_bool = var_129_bool;
	if(var_132_bool != 0) {
		lshGetAnimTimes(var_125_string, var_130_float, var_131_float);
		lshPlayAnimation(var_130_float, var_131_float, (bool)0);
	} else {
		var_135_int = "Can't find lsh animation : " + var_125_string;
		Trace(var_135_int);
	}
	return 6;
	
}


func_739(var_56_object, var_57_bool)
{
	var_64_object = Obj(); var_65_object = Obj();
	GetScene(var_65_object);
	var_66_object = Obj();
	func_2364(var_66_object);
	@@var_65_object:RemoveStationaryActor(var_66_object);
	
Label_747:
	var_69_object = Obj(); var_70_bool = 0; var_71_float = 0;
	var_56_object = var_69_object;
	var_57_bool = var_70_bool;
	func_765(var_63_int, var_56_object, var_57_bool, var_64_object, var_65_object, var_69_object, var_70_bool, (float)180.0);
	Sleep((int)1);
	goto Label_747;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_994(var_1_object, var_2_object, var_4_bool)
{
	var_94_bool = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_bool = 0; var_99_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_996:
	var_103_int = var_1_object + (int)1;
	var_104_int = "attack_begin" + var_103_int;
	HasAnimation(var_97_bool, "all", var_104_int);
	var_105_bool = var_97_bool == 0; //@nz
	if(var_105_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_996;
	}
	var_2_object = 0;
	
Label_1010:
	var_108_int = var_2_object + (int)1;
	var_109_int = "attack" + var_108_int;
	IsExisting3DSound(var_98_bool, var_109_int);
	var_110_bool = var_98_bool == 0; //@nz
	if(var_110_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_1010;

	}
	GetAnimationOffset(var_99_cvector, "all", "bjump");
	var_113_float = GetByIndex(var_99_cvector, 2);
	var_4_bool = -var_113_float;
	return 6;
	
}


func_2021(var_30_bool, var_31_object)
{
	var_32_int = 0; var_33_int = 0;
	var_34_bool = 0; var_35_object = Obj();
	var_31_object = var_35_object;
	func_1985(var_34_bool, var_35_object);
	var_51_bool = var_34_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_30_bool = 0;
		return 2;
	}
	var_52_bool = 0; var_53_object = Obj(); var_54_string = "";
	var_31_object = var_53_object;
	func_1873(var_52_bool, var_53_object, "noaccess");
	var_61_bool = var_52_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_30_bool = 1;
		return 2;
	}
	@@var_31_object:GetProperty("noaccess", var_33_int);
	var_30_bool = var_33_int == (int)0;
	return 2;
}


func_2538(var_83_int)
{
	var_84_int = 0; var_85_int = 0;
	GetVariable("branch", var_85_int);
	var_88_bool = var_85_int == (int)0;
	if(var_88_bool != 0) {
		var_83_int = 1;
		return 2;
	EMIT "GOTO 0x9f9";
	}
	var_90_bool = var_85_int == (int)1;
	if(var_90_bool != 0) {
		var_83_int = 2;
		return 2;
	}
	var_83_int = 3;
	return 2;
}


func_2290(var_103_string, var_104_bool)
{
	var_107_bool = 0; var_108_float = 0; var_109_float = 0; var_110_bool = 0; var_111_float = 0; var_112_float = 0;
	lshHasAnimation(var_110_bool, var_103_string);
	var_113_bool = var_110_bool;
	if(var_113_bool != 0) {
		lshGetAnimTimes(var_103_string, var_111_float, var_112_float);
		lshPlayAnimation(var_111_float, var_112_float, var_104_bool);
	} else {
		var_115_int = "Can't find lsh animation : " + var_103_string;
		Trace(var_115_int);
	}
	return 6;
	
}


func_759(var_404_float)
{
	var_404_float = 0.029999999329447746;
	return 0;
}


func_762(var_411_int)
{
	var_411_int = 0;
	return 0;
}


func_1275(var_0_object, var_310_bool)
{
	var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_float = 0; var_315_float = 0; var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_float = 0;
	var_321_bool = 0; var_322_object = Obj();
	var_322_object = var_0_object;
	func_2021(var_321_bool, var_322_object);
	var_323_bool = var_321_bool == 0; //@nz
	if(var_323_bool != 0) {
		var_310_bool = 0;
		return 10;
	}
	var_324_bool = 0;
	func_1364(var_320_float, var_324_bool);
	if(var_324_bool != 0) {
		@@@var_0_object:GetPFPosition(var_316_cvector);
		GetPFPosition(var_317_cvector);
		var_318_cvector = var_316_cvector - var_317_cvector;
		var_319_float = var_318_cvector | var_318_cvector;
		@@@var_0_object:GetAttackDistance(var_320_float);
		var_320_float = var_320_float + (int)50;
		var_326_float = var_320_float * var_320_float;
		var_310_bool = var_319_float <= var_326_float;
		return 10;
	}
	var_310_bool = 0;
	return 10;
}


func_1532(var_0_object, var_1_object, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool)
{
	var_173_bool = 0; var_174_bool = 0; var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj(); var_181_bool = 0; var_182_bool = 0; var_183_object = Obj(); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_float = 0; var_188_object = Obj();
	var_0_object = false;
	var_1_object = var_168_object;
	var_172_bool = var_182_bool;
	
Label_1536:
	var_189_bool = 0; var_190_object = Obj();
	var_168_object = var_190_object;
	func_1672(var_189_bool, var_190_object);
	var_193_bool = var_189_bool == 0; //@nz
	if(var_193_bool != 0) {
		var_167_bool = 0;
		return 16;
	}
	@@var_168_object:GetPosition(var_184_cvector);
	GetPosition(var_185_cvector);
	var_186_cvector = var_184_cvector - var_185_cvector;
	var_187_float = var_186_cvector | var_186_cvector;
	var_194_bool = 0;
	var_194_bool = 0;
	var_196_bool = var_170_float > (int)0;
	if(var_196_bool != 0) {
		var_197_float = var_170_float * var_170_float;
		var_198_bool = var_187_float > var_197_float;
		if(var_198_bool != 0) {
			var_194_bool = 1;
		}
	}
	if(var_194_bool != 0) {
		Stop();
		var_167_bool = 0;
		return 16;
	}
	var_199_float = var_169_float * var_169_float;
	var_200_bool = var_187_float > var_199_float;
	if(var_200_bool != 0) {
		@@var_168_object:GetPFPosition(var_184_cvector);
		FindPathTo(var_188_object, var_184_cvector);
		var_201_bool = var_188_object != 0; //@nn
		if(var_201_bool != 0) {
			var_188_object = var_183_object;
			var_188_object = 0;
		}
		var_202_bool = var_183_object != 0; //@nn
		if(var_202_bool != 0) {
			var_203_bool = var_182_bool;
			if(var_203_bool == 0) goto Label_1585;
			var_182_bool = 0;
			RotatePath(var_183_object, var_181_bool);
			var_204_bool = var_181_bool == 0; //@nz
			if(var_204_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_207_string = "";
				func_1679(var_207_string);
				var_208_string = "";
				func_1681(var_208_string);
				FollowPath(var_183_object, var_171_bool, var_181_bool, var_207_string, var_208_string);
				var_209_bool = var_181_bool == 0; //@nz
				if(var_209_bool != 0) {
					var_210_object = var_0_object;
					if(var_210_object != 0) {
						var_183_object = 0;
						goto Label_1632;
					EMIT "GOTO 0x645";
					}
				} else {
					var_183_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_181_bool);
					var_213_bool = var_181_bool == 0; //@nz
					if(var_213_bool != 0) {
						var_214_object = var_0_object;
						if(var_214_object != 0) {
							var_183_object = 0;
							goto Label_1632;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1632;
	}
			var_188_object = 0;
			goto Label_1630;

		Label_1630:
			var_183_object = 0;

		}
		goto Label_1536;
	}
Label_1632:
	var_167_bool = !var_0_object;
	return 16;
	
}


func_765(var_0_object, var_3_string, var_5_object, var_69_object, var_70_bool, var_71_float, var_144_bool, var_236_bool)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_float = 0; var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_bool = 0; var_87_bool = 0; var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_float = 0;
	func_994(var_91_cvector, var_92_bool, var_93_float);
	var_5_object = 0;
	var_118_bool = IsFuncExist(var_69_object, "@GetAttackDistance", (int)1);
	if(var_118_bool != 0) {
		@@var_69_object:GetAttackDistance(var_83_float);
		var_83_float = var_83_float + (int)50;
	} else {
							var_71_float = var_83_float;
	}
	var_121_bool = var_83_float >= (int)150;
	if(var_121_bool != 0) {
		var_83_float = 150;
	}
	var_3_string = false;
	var_0_object = var_69_object;
	IsPlayerActor(var_0_object, var_86_bool);
	var_122_bool = var_86_bool;
	if(var_122_bool != 0) {
		PlayGlobalMusic("attack");
		var_124_object = Obj();
		func_2364(var_124_object);
		SendPlayerEnemy(var_69_object, var_124_object);
	}
	var_125_bool = var_70_bool;
	if(var_125_bool != 0) {
		var_87_bool = 0;
	} else {
						var_87_bool = 1;

	}
	var_88_float = (float)400.0 + var_83_float;
	
Label_805:
	var_127_bool = 0;
	var_127_bool = 0;
	var_128_bool = 0; var_129_object = Obj();
	var_129_object = var_0_object;
	func_2021(var_128_bool, var_129_object);
	if(var_128_bool != 0) {
		var_130_bool = var_3_string == 0; //@nz
		if(var_130_bool != 0) {
			var_127_bool = 1;
		}
	}
	if(var_127_bool != 0) {
		func_1407(var_93_float);
		@@@var_0_object:GetPFPosition(var_84_cvector);
		GetPFPosition(var_85_cvector);
		var_89_cvector = var_84_cvector - var_85_cvector;
		var_90_float = var_89_cvector | var_89_cvector;
		var_136_float = var_88_float * var_88_float;
		var_137_bool = var_90_float >= var_136_float;
		if(var_137_bool != 0) {
			var_138_bool = 0; var_139_object = Obj(); var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_bool = 0;
			var_139_object = var_0_object;
			var_83_float = var_140_float;
			TaskCall(5);
			func_1427(var_146_bool, var_138_bool, var_139_object, var_140_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_221_bool = var_144_bool == 0; //@nz
			if(var_221_bool != 0) {
			} else {
				var_87_bool = 0;
		} else {
				var_227_float = var_71_float * var_71_float;
				var_228_bool = var_90_float >= var_227_float;
				if(var_228_bool != 0) {
					@@@var_0_object:GetPFPosition(var_91_cvector);
					CanReachByPF(var_92_bool, var_91_cvector);
					var_229_bool = var_92_bool == 0; //@nz
					if(var_229_bool != 0) {
						var_230_bool = 0; var_231_object = Obj(); var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_bool = 0;
						var_231_object = var_0_object;
						var_83_float = var_232_float;
						TaskCall(5);
						func_1427(var_238_bool, var_230_bool, var_231_object, var_232_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_239_bool = var_236_bool == 0; //@nz
						if(var_239_bool != 0) {
							goto Label_977;
						}
						var_87_bool = 0;
						goto Label_805;
					}
					var_240_bool = var_87_bool == 0; //@nz
					if(var_240_bool != 0) {
						var_241_object = Obj();
						var_241_object = var_0_object;
						func_2171(var_241_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1407(var_93_float);
						StopAsync();
						var_87_bool = 1;
						var_252_bool = 0; var_253_object = Obj();
						var_253_object = var_0_object;
						func_2021(var_252_bool, var_253_object);
						var_254_bool = var_252_bool == 0; //@nz
						if(var_254_bool != 0) {
							goto Label_977;
						}
					}
					rand(var_93_float);
					var_255_bool = 0;
					var_257_bool = var_93_float < (float)0.25;
					if(var_257_bool != 1) {
						var_258_bool = 0;
						func_1364((bool)1, var_258_bool);
						if(var_258_bool != 1) {
							var_255_bool = 0;
						}
					}
					if(var_255_bool != 0) {
						Face(var_0_object);
						func_1414();
						PlayAnimation("all", "attack_stay");
						var_295_bool = 0; var_296_float = 0;
						var_71_float = var_296_float;
						func_1232(var_93_float, var_295_bool, var_296_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1407(var_93_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_517_bool = 0;
						func_1364(var_93_float, var_517_bool);
						var_518_bool = var_517_bool == 0; //@nz
						if(var_518_bool == 0) goto Label_967;
						var_519_bool = 0; var_520_object = Obj();
						var_520_object = var_0_object;
						func_2021(var_519_bool, var_520_object);
						var_521_bool = var_519_bool == 0; //@nz
						if(var_521_bool != 0) {
							goto Label_977;
						}
						@@@var_0_object:GetPFPosition(var_84_cvector);
						GetPFPosition(var_85_cvector);
						var_89_cvector = var_84_cvector - var_85_cvector;
						var_90_float = var_89_cvector | var_89_cvector;
						var_522_float = var_71_float * var_71_float;
						var_523_bool = var_90_float < var_522_float;
						if(var_523_bool == 0) goto Label_967;
						var_524_bool = 0; var_525_float = 0;
						var_71_float = var_525_float;
						func_1068(var_92_bool, var_93_float, var_524_bool, var_525_float);
						var_526_bool = var_524_bool == 0; //@nz
						if(var_526_bool == 0) goto Label_967;
						goto Label_977;
				}
					var_527_bool = 0; var_528_float = 0;
					var_71_float = var_528_float;
					func_1068(var_92_bool, var_93_float, var_527_bool, var_528_float);
					var_529_bool = var_527_bool == 0; //@nz
					if(var_529_bool != 0) {
						goto Label_977;
					}
					var_87_bool = 1;

				}
			Label_967:
				goto Label_976;
		}
		Label_976:
			goto Label_805;

		}
	}
Label_977:
	WaitForAnimEnd();
	var_222_string = var_3_string;
	if(var_222_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_225_bool = var_86_bool;
	if(var_225_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


