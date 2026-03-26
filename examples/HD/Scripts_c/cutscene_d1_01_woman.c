// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,SensePlayerOnly/1,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,FindShiftedPathTo/2,Face/1,FindLongestDir/6,Trace/1,Rotate/2,SetTimer/2,MovePoint/3,KillTimer/1,FindDirLength/3,IsPlayerActor/2,GetScene/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetGameTime/1,GetVariable/2,AddItem/4,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,HasAnimation/3,RemoveActor/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:attack_on|W:attack_stay|W:attack_off|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:branch|W:GenerateMoney: iMin > iMax|W:Money|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:health|W:unholster|W:player_shot|W:battle|A:IsWeaponHolstered|W:heal|W:player|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x25a
// @RUN_TASK: 4
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a vars=int,int
// @TASK_2: vars= params=1
// @EVENT_0: op=0xd3 vars=object
// @EVENT_6: op=0xe1 vars=
// @EVENT_22: op=0x15a vars=object,int,float,float
// @EVENT_16: op=0x15c vars=object,string
// @EVENT_41: op=0x15e vars=object
// @TASK_3: vars= params=0
// @EVENT_0: op=0x160 vars=object
// @EVENT_17: op=0x174 vars=object
// @EVENT_30: op=0x18c vars=object,object,bool
// @EVENT_40: op=0x1a8 vars=object
// @EVENT_42: op=0x1bc vars=object,string
// @EVENT_26: op=0x1e1 vars=string
// @EVENT_6: op=0x1ef vars=
// @EVENT_1: op=0x1f6 vars=object
// @TASK_4: vars=bool,bool params=0
// @EVENT_0: op=0x271 vars=object
// @EVENT_17: op=0x285 vars=object
// @EVENT_30: op=0x29d vars=object,object,bool
// @EVENT_40: op=0x2b9 vars=object
// @EVENT_42: op=0x2cd vars=object,string
// @EVENT_26: op=0x2f2 vars=string
// @EVENT_1: op=0x300 vars=object
// @EVENT_6: op=0x30e vars=
// @EVENT_10: op=0x355 vars=object
// @EVENT_28: op=0x359 vars=
// @EVENT_41: op=0x363 vars=object
// @TASK_5: vars=object,cvector,bool params=1
// @EVENT_6: op=0x390 vars=
// @EVENT_7: op=0x3fe vars=int
// @EVENT_41: op=0x439 vars=object
// @TASK_6: vars=object,cvector,bool params=1
// @EVENT_7: op=0x4b9 vars=int
// @EVENT_41: op=0x4f4 vars=object
// @STANDALONE_EVENT_16: op=0x7a1 vars=object,string
// @STANDALONE_EVENT_41: op=0x7ae vars=object
// @STANDALONE_EVENT_22: op=0x7b4 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x7bc vars=object,int,float,float,cvector,cvector
// @PE: 0x4a,0x84,0x9a,0xc4,0xe1,0x140,0x15a,0x15c,0x15e,0x1e1,0x1ef,0x1f6,0x2f2,0x300,0x30e,0x355,0x363,0x374,0x390,0x439,0x4f4,0x6a4,0x799,0x7ae,0x7b4,0x7bc,0x7c6,0x7e6,0x816,0x81c,0x85e,0x868,0x870,0x87a,0x882,0x885,0x887,0x88a,0x88c,0x88f,0x895,0x898,0x89a,0x89d,0x89f,0x8a2,0x8a4,0x8a7,0x8b8,0x8c0,0x8cb

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	if((int)1 != 0) {
		func_1636();
		var_18_bool = var_13_cvector == (int)19229;
		if(var_18_bool != 0) {
			var_19_string = "";
			func_132(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518110);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518111, (int)-1, (int)19230);
			@@@var_0_object:AddReply((int)534585, (int)-1, (int)36223);
			return 0;
		}
		var_3_string = true;
		var_43_bool = 0;
		func_2225(var_43_bool);
		if(var_43_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9b";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_2188(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_20_object = Obj();
		var_13_bool = var_20_object;
		func_2191(var_20_object);
	}
	return 2;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	func_2243();
	return 0;
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	return 0;
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_2188(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_597();
		}
		var_22_object = Obj();
		var_13_bool = var_22_object;
		func_2191(var_22_object);
	}
	return 2;
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_object = Obj();
	var_13_bool = var_16_object;
	func_2076(var_16_object);
	var_25_int = 0; var_26_object = Obj();
	var_13_bool = var_26_object;
	func_2142(var_25_int, var_26_object);
	var_25_int = var_15_int;
	var_62_bool = var_15_int > (int)0;
	if(var_62_bool != 0) {
		var_64_bool = var_15_int > (int)1;
		if(var_64_bool != 0) {
			func_597();
		}
		var_65_object = Obj();
		var_13_bool = var_65_object;
		func_2152(var_65_object);
	}
	return 2;
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_bool = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_bool = 0;
	var_13_object = var_19_object;
	var_14_cvector = var_20_object;
	var_15_bool = var_21_bool;
	func_2240(var_21_bool);
	if(var_18_bool != 0) {
		var_22_int = 0; var_23_object = Obj(); var_24_bool = 0;
		var_13_object = var_23_object;
		var_15_bool = var_24_bool;
		func_2160(var_23_object, var_24_bool);
		var_22_int = var_17_int;
		var_60_bool = var_17_int > (int)0;
		if(var_60_bool != 0) {
			var_62_bool = var_17_int > (int)1;
			if(var_62_bool != 0) {
				func_597();
			}
			var_63_object = Obj();
			var_13_object = var_63_object;
			func_2170(var_63_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_2178(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_597();
		}
		var_13_bool = Obj();
		func_2181();
	}
	return 2;
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_string = "";
	var_13_cvector = var_18_object;
	var_14_bool = var_19_string;
	func_1990(var_17_bool, var_18_object, var_19_string);
	if(var_17_bool != 0) {
		func_597();
		var_32_object = Obj(); var_33_string = "";
		var_13_cvector = var_32_object;
		var_14_bool = var_33_string;
		func_2022(var_32_object, var_33_string);
	} else {
		var_43_int = 0; var_44_string = ""; var_45_object = Obj();
		var_14_bool = var_44_string;
		var_13_cvector = var_45_object;
		func_2183(var_45_object);
		var_43_int = var_16_int;
		var_47_bool = var_16_int > (int)0;
		if(var_47_bool == 0) goto Label_480;
		var_49_bool = var_16_int > (int)1;
		if(var_49_bool != 0) {
			func_597();
		}
		var_50_string = ""; var_51_object = Obj();
		var_14_bool = var_50_string;
		var_13_cvector = var_51_object;
		func_2186();
	}
Label_480:
	return 2;
	
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_string, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_bool = 0; var_15_string = "";
	var_13_bool = var_15_string;
	func_2089(var_14_bool, var_15_string);
	if(var_14_bool != 0) {
		func_597();
		var_23_string = "";
		var_13_bool = var_23_string;
		func_2105(var_23_string);
	}
	return 0;
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	func_597();
	func_2243();
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_bool = var_15_object;
	func_2047(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		func_597();
		var_26_object = Obj();
		var_13_bool = var_26_object;
		func_2070(var_26_object);
	}
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_2188(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_860(var_14_int, var_15_int);
		}
		var_22_object = Obj();
		var_13_bool = var_22_object;
		func_2191(var_22_object);
	}
	return 2;
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_object = Obj();
	var_13_bool = var_16_object;
	func_2076(var_16_object);
	var_25_int = 0; var_26_object = Obj();
	var_13_bool = var_26_object;
	func_2142(var_25_int, var_26_object);
	var_25_int = var_15_int;
	var_62_bool = var_15_int > (int)0;
	if(var_62_bool != 0) {
		var_64_bool = var_15_int > (int)1;
		if(var_64_bool != 0) {
			func_860(var_14_int, var_15_int);
		}
		var_65_object = Obj();
		var_13_bool = var_65_object;
		func_2152(var_65_object);
	}
	return 2;
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_bool = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_bool = 0;
	var_13_object = var_19_object;
	var_14_cvector = var_20_object;
	var_15_bool = var_21_bool;
	func_2240(var_21_bool);
	if(var_18_bool != 0) {
		var_22_int = 0; var_23_object = Obj(); var_24_bool = 0;
		var_13_object = var_23_object;
		var_15_bool = var_24_bool;
		func_2160(var_23_object, var_24_bool);
		var_22_int = var_17_int;
		var_60_bool = var_17_int > (int)0;
		if(var_60_bool != 0) {
			var_62_bool = var_17_int > (int)1;
			if(var_62_bool != 0) {
				func_860(var_16_int, var_17_int);
			}
			var_63_object = Obj();
			var_13_object = var_63_object;
			func_2170(var_63_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_2178(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_860(var_14_int, var_15_int);
		}
		var_13_bool = Obj();
		func_2181();
	}
	return 2;
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_string, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_string = "";
	var_13_cvector = var_18_object;
	var_14_bool = var_19_string;
	func_1990(var_17_bool, var_18_object, var_19_string);
	if(var_17_bool != 0) {
		func_860(var_15_int, var_16_int);
		var_32_object = Obj(); var_33_string = "";
		var_13_cvector = var_32_object;
		var_14_bool = var_33_string;
		func_2022(var_32_object, var_33_string);
	} else {
		var_43_int = 0; var_44_string = ""; var_45_object = Obj();
		var_14_bool = var_44_string;
		var_13_cvector = var_45_object;
		func_2183(var_45_object);
		var_43_int = var_16_int;
		var_47_bool = var_16_int > (int)0;
		if(var_47_bool == 0) goto Label_753;
		var_49_bool = var_16_int > (int)1;
		if(var_49_bool != 0) {
			func_860(var_15_int, var_16_int);
		}
		var_50_string = ""; var_51_object = Obj();
		var_14_bool = var_50_string;
		var_13_cvector = var_51_object;
		func_2186();
	}
Label_753:
	return 2;
	
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_bool = 0; var_15_string = "";
	var_13_bool = var_15_string;
	func_2089(var_14_bool, var_15_string);
	if(var_14_bool != 0) {
		func_860(var_12_cvector, var_13_bool);
		var_23_string = "";
		var_13_bool = var_23_string;
		func_2105(var_23_string);
	}
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_bool = var_15_object;
	func_2047(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		func_860(var_12_cvector, var_13_bool);
		var_26_object = Obj();
		var_13_bool = var_26_object;
		func_2070(var_26_object);
	}
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	func_860(var_11_cvector, var_12_bool);
	func_2243();
	return 0;
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	RequestClearPath(var_13_bool);
	return 0;
}


task_4_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	Stop();
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_860(var_12_cvector, var_13_bool);
	var_13_bool = Obj();
	func_1966();
	return 0;
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	func_1074(var_12_bool);
	func_2243();
	return 0;
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_int, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0;
	var_23_bool = var_13_bool != (int)120;
	if(var_23_bool != 0) {
		return 8;
	}
	var_24_bool = var_0_object == 0; //@ne
	if(var_24_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_18_cvector);
		FindDirLength(var_19_float, var_18_cvector, (float)7000.0);
		var_27_cvector = CVector(0,0,0); var_28_float = 0;
		func_919(var_21_float, var_27_cvector, (float)1.7453293800354004);
		var_27_cvector = var_20_cvector;
		var_21_float = var_20_cvector | var_20_cvector;
		var_57_bool = 0;
		var_57_bool = 0;
		var_59_bool = var_21_float >= (float)2500.0;
		if(var_59_bool != 0) {
			var_60_bool = 0;
			var_61_float = var_19_float * var_19_float;
			var_63_float = var_61_float * (float)2.25;
			var_64_bool = var_21_float >= var_63_float;
			if(var_64_bool != 1) {
				var_65_bool = 0;
				func_1090((bool)1, var_65_bool);
				if(var_65_bool != 1) {
					var_60_bool = 0;
				}
			}
			if(var_60_bool != 0) {
				var_57_bool = 1;
			}
		}
		if(var_57_bool == 0) goto Label_1073;
		Stop();
		var_85_cvector = CVector(0,0,0);
		func_1293(var_85_cvector);
		var_1_object = var_85_cvector + var_20_cvector;
	}
Label_1073:
	return 8;
	
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool)
{
	func_1074(var_13_bool);
	var_13_bool = Obj();
	func_1966();
	return 0;
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_int)
{
	var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0;
	var_23_bool = var_13_int != (int)120;
	if(var_23_bool != 0) {
		return 8;
	}
	var_24_bool = var_0_object == 0; //@ne
	if(var_24_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_18_cvector);
		FindDirLength(var_19_float, var_18_cvector, (float)7000.0);
		var_27_cvector = CVector(0,0,0); var_28_float = 0;
		func_1106(var_21_float, var_27_cvector, (float)1.7453293800354004);
		var_27_cvector = var_20_cvector;
		var_21_float = var_20_cvector | var_20_cvector;
		var_57_bool = 0;
		var_57_bool = 0;
		var_59_bool = var_21_float >= (float)2500.0;
		if(var_59_bool != 0) {
			var_60_bool = 0;
			var_61_float = var_19_float * var_19_float;
			var_63_float = var_61_float * (float)2.25;
			var_64_bool = var_21_float >= var_63_float;
			if(var_64_bool != 1) {
				var_65_bool = 0;
				func_1277((bool)1, var_65_bool);
				if(var_65_bool != 1) {
					var_60_bool = 0;
				}
			}
			if(var_60_bool != 0) {
				var_57_bool = 1;
			}
		}
		if(var_57_bool == 0) goto Label_1260;
		Stop();
		var_85_cvector = CVector(0,0,0);
		func_1293(var_85_cvector);
		var_1_object = var_85_cvector + var_20_cvector;
	}
Label_1260:
	return 8;
	
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	func_1261(var_13_object);
	var_13_object = Obj();
	func_1966();
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_string)
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


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	var_14_object = Obj();
	var_13_object = var_14_object;
	func_1945(var_14_object);
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0;
	var_13_object = var_17_object;
	var_14_int = var_18_int;
	var_15_float = var_19_float;
	func_1431(var_17_object, var_18_int, var_19_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0);
	var_13_object = var_19_object;
	var_14_int = var_20_int;
	var_15_float = var_21_float;
	var_17_cvector = var_22_cvector;
	var_18_cvector = var_23_cvector;
	func_1499(var_21_float, var_22_cvector, var_23_cvector);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	SensePlayerOnly((bool)1);
	func_2227();
	func_616();
	
Label_611:
	func_789(var_11_cvector, var_12_bool);
	goto Label_611;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0;
	var_0_object = var_25_object;
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0;
	var_25_object = var_36_object;
	func_1518(var_35_bool, var_36_object, (float)70.0);
	var_82_bool = var_35_bool == 0; //@nz
	if(var_82_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	CreateDialog(var_31_object);
	var_83_int = 0;
	func_2219(var_83_int);
	@@var_31_object:SetNPCName(var_83_int);
	var_84_int = 0;
	func_2217(var_84_int);
	@@var_31_object:SetNPCDescription(var_84_int);
	var_85_string = "";
	func_2221(var_85_string);
	@@var_31_object:SetPhoto(var_85_string);
	var_86_string = "";
	func_2223(var_86_string);
	@@var_31_object:SetPhoto2(var_86_string);
	var_87_int = 0;
	func_1717(var_87_int);
	@@var_31_object:SetPlayerName(var_87_int);
	IsOverrideActive(var_32_bool);
	var_95_bool = var_32_bool;
	if(var_95_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	DoDialog(var_31_object);
	var_96_object = Obj(); var_97_object = Obj();
	var_25_object = var_96_object;
	var_31_object = var_97_object;
	TaskCall(1);
	func_74(var_98_object, var_99_object, var_100_string, var_101_bool, var_96_object, var_97_object);
	TaskReturn();
	@@var_31_object:IsDialogEnd(var_34_bool);
	
Label_56:
	var_145_bool = var_34_bool == 0; //@nz
	if(var_145_bool != 0) {
		sync();
		@@var_31_object:IsDialogEnd(var_34_bool);
		goto Label_56;
	}
	var_25_object = Obj();
	func_1587();
	StopDialog(var_31_object);
	@@var_31_object:GetReturnValue((int)-1);
	var_33_int = var_24_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_516()
{
	var_162_int = 0; var_163_int = 0; var_164_int = 0; var_165_int = 0; var_166_bool = 0; var_167_float = 0; var_168_bool = 0; var_169_int = 0; var_170_int = 0; var_171_int = 0; var_172_int = 0; var_173_bool = 0; var_174_float = 0; var_175_bool = 0;
	WaitForAnimEnd();
	var_176_bool = 0;
	func_1513(var_176_bool);
	var_177_bool = var_176_bool == 0; //@nz
	if(var_177_bool != 0) {
		return 14;
	}
	func_2125((int)0);
	var_178_int = var_169_int;
	var_170_int = 0;
	
Label_530:
	var_191_bool = 0;
	var_191_bool = 0;
	var_193_bool = var_170_int < (int)5;
	if(var_193_bool != 0) {
		var_194_bool = 0;
		func_1513(var_194_bool);
		if(var_194_bool != 0) {
			var_191_bool = 1;
		}
	}
	if(var_191_bool != 0) {
		irand(var_171_int, (int)3);
		var_197_bool = var_171_int == (int)0;
		if(var_197_bool != 0) {
			var_198_int = var_169_int;
			if(var_198_int == 0) goto Label_563;
			irand(var_172_int, var_169_int);
			var_200_string = ""; var_201_int = 0;
			var_172_int = var_201_int;
			func_2118(var_200_string, var_201_int);
			PlayAnimation("all", var_200_string);
			WaitForAnimEnd(var_173_bool);
			var_202_bool = var_173_bool == 0; //@nz
			if(var_202_bool != 0) {
			} else {
		} else {
				var_207_bool = var_171_int == (int)1;
				if(var_207_bool != 0) {
					rand(var_174_float, (int)4);
					var_210_int = var_174_float + (int)1;
					Sleep(var_210_int, var_175_bool);
					var_211_bool = var_175_bool == 0; //@nz
					if(var_211_bool != 0) {
						goto Label_592;
					}
					goto Label_581;
				}
				var_212_int = var_170_int;
				if(var_212_int == 0) goto Label_581;
				goto Label_592;
		}
		Label_581:
			var_203_bool = 0;
			func_595(var_203_bool);
			var_204_bool = var_203_bool == 0; //@nz
			if(var_204_bool != 0) {
				goto Label_592;
			}
			ResetAAS();
			var_170_int = var_170_int + (int)1;
			goto Label_530;

		}
	}
Label_592:
	ResetAAS();
	return 14;
	
}


func_2070(var_26_object)
{
	var_26_object = Obj();
	func_2200();
	return 0;
}


func_2076(var_16_object)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	func_1305(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		var_21_object = Obj();
		func_1684(var_21_object);
		ReportReputationChange(var_16_object, var_21_object, (float)-0.05000000074505806);
	}
	return 0;
}


func_2089(var_14_bool, var_15_string)
{
	var_16_object = Obj(); var_17_object = Obj();
	var_19_bool = var_15_string == "heal";
	if(var_19_bool != 0) {
		FindActor(var_17_object, "player");
		var_21_bool = 0; var_22_object = Obj();
		var_17_object = var_22_object;
		func_2212(var_22_object);
		var_21_bool = var_14_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_14_bool = 0;
	return 2;
}


func_1074(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1587()
{
	var_147_bool = 0; var_148_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_150_bool = 0;
	func_2225(var_150_bool);
	if(var_150_bool != 0) {
	} else {
		HasAnimationTrack(var_148_bool, "head");
		var_152_bool = var_148_bool;
		if(var_152_bool == 0) goto Label_1604;
		UnlookAsync("head");
	}
Label_1604:
	return 2;
	
}


func_2105(var_23_string)
{
	var_24_object = Obj(); var_25_object = Obj();
	var_27_bool = var_23_string == "heal";
	if(var_27_bool != 0) {
		FindActor(var_25_object, "player");
		var_25_object = Obj();
		func_2215();
		var_25_object = 0;
	}
	return 2;
}


func_1090(var_0_object, var_65_bool)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
	GetDirection(var_68_cvector);
	var_70_cvector = CVector(0,0,0); var_71_object = Obj();
	var_71_object = var_0_object;
	func_1298(var_70_cvector, var_71_object);
	var_70_cvector = var_69_cvector;
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_1700(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= (float)-0.3420201241970062;
	return 4;
}


func_1605(var_129_string)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0;
	lshHasAnimation(var_133_bool, var_129_string);
	var_136_bool = var_133_bool;
	if(var_136_bool != 0) {
		lshGetAnimTimes(var_129_string, var_134_float, var_135_float);
		lshPlayAnimation(var_134_float, var_135_float, (bool)0);
	} else {
		var_139_int = "Can't find lsh animation : " + var_129_string;
		Trace(var_139_int);
	}
	return 6;
	
}


func_2118(var_184_string, var_185_int)
{
	var_186_string = ""; var_187_string = "";
	var_188_int = var_185_int;
	if(var_188_int != 0) {
		"idle" = "idle" + var_185_int;
	}
	var_187_string = var_184_string;
	return 2;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_96_object, var_97_object)
{
	var_0_object = var_97_object;
	var_1_object = var_96_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_103_string = "";
		func_132(var_97_object, "Neutral");
		@@@var_0_object:SetMessage((int)518110);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)518111, (int)-1, (int)19230);
		@@@var_0_object:AddReply((int)534585, (int)-1, (int)36223);
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	var_127_bool = 0;
	func_2225(var_127_bool);
	if(var_127_bool != 0) {

	Label_106:
		lshWaitForAnimEnd();
		var_128_string = var_3_string;
		if(var_128_string != 0) {
		} else {
			var_129_string = "";
			var_129_string = var_2_object;
			func_1605(var_129_string);
			goto Label_106;
	}
		PlayAnimation("all", "idle");

	Label_121:
		WaitForAnimEnd();
		var_142_string = var_3_string;
		if(var_142_string != 0) {
			goto Label_131;
		}
		PlayAnimation("all", "idle");
		goto Label_121;
	}
	goto Label_131;
	
Label_131:
	return 0;
	
}


func_2125(var_178_int)
{
	var_179_int = 0; var_180_bool = 0; var_181_int = 0; var_182_bool = 0;
	var_181_int = 0;
	
Label_2127:
	var_184_string = ""; var_185_int = 0;
	var_181_int = var_185_int;
	func_2118(var_184_string, var_185_int);
	HasAnimation(var_182_bool, "all", var_184_string);
	var_189_bool = var_182_bool == 0; //@nz
	if(var_189_bool != 0) {
	} else {
		var_181_int = var_181_int + (int)1;
		goto Label_2127;
	}
	var_181_int = var_178_int;
	return 4;
	
}


func_1106(var_0_object, var_27_cvector, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0;
	GetPosition(var_35_cvector);
	@@@var_0_object:GetPosition(var_36_cvector);
	GetDirection(var_37_cvector);
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_44_cvector = var_35_cvector - var_36_cvector;
	func_1690(var_43_cvector, var_44_cvector);
	var_51_float = var_37_cvector * (float)0.75;
	var_42_cvector = var_43_cvector + var_51_float;
	func_1690(var_41_cvector, var_42_cvector);
	var_41_cvector = var_38_cvector;
	FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, (int)32, (float)7000.0);
	var_40_float = var_40_float - (int)100;
	var_56_bool = var_40_float < (int)0;
	if(var_56_bool != 0) {
		var_40_float = 0;
	}
	var_27_cvector = var_39_cvector * var_40_float;
	return 12;
}


func_595(var_203_bool)
{
	var_203_bool = 1;
	return 0;
}


func_1621(var_107_string, var_108_bool)
{
	var_111_bool = 0; var_112_float = 0; var_113_float = 0; var_114_bool = 0; var_115_float = 0; var_116_float = 0;
	lshHasAnimation(var_114_bool, var_107_string);
	var_117_bool = var_114_bool;
	if(var_117_bool != 0) {
		lshGetAnimTimes(var_107_string, var_115_float, var_116_float);
		lshPlayAnimation(var_115_float, var_116_float, var_108_bool);
	} else {
		var_119_int = "Can't find lsh animation : " + var_107_string;
		Trace(var_119_int);
	}
	return 6;
	
}


func_597()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2142(var_25_int, var_26_object)
{
	var_27_bool = 0; var_28_object = Obj();
	var_26_object = var_28_object;
	func_1363(var_27_bool, var_28_object);
	if(var_27_bool != 0) {
		var_25_int = 2;
	} else {
		var_25_int = 0;
	}
	return 0;
	
}


func_1636()
{
	var_16_bool = 0;
	func_2225(var_16_bool);
	if(var_16_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2152(var_65_object)
{
	var_66_object = Obj();
	var_65_object = var_66_object;
	TaskCall(5);
	func_884(var_66_object);
	TaskReturn();
	return 0;
}


func_616()
{
	var_128_bool = 0;
	func_1513(var_128_bool);
	var_131_bool = var_128_bool == 0; //@nz
	if(var_131_bool != 0) {
		func_2243();
	}
	return 0;
}


func_1643(var_39_string)
{
	var_40_bool = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	IsExisting3DSound(var_48_bool, var_39_string);
	var_56_bool = var_48_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_49_int = 0;

	Label_1649:
		var_58_int = var_49_int + (int)1;
		var_59_int = var_39_string + var_58_int;
		IsExisting3DSound(var_50_bool, var_59_int);
		var_60_bool = var_50_bool == 0; //@nz
		if(var_60_bool != 0) {
		} else {
			var_49_int = var_49_int + (int)1;
			goto Label_1649;
		}
		var_61_bool = var_49_int == 0; //@nz
		if(var_61_bool != 0) {
			return 16;
		}
		irand(var_51_int, var_49_int);
		var_63_int = var_51_int + (int)1;
		var_39_string = var_39_string + var_63_int;
	}
	Is3DSoundLoaded(var_52_bool, var_39_string);
	var_64_bool = var_52_bool;
	if(var_64_bool != 0) {
		GetEyesHeight(var_53_float);
		GetDirection(var_54_cvector);
		var_55_cvector = var_54_cvector * (int)50;
		var_66_float = GetByIndex(var_55_cvector, 1);
		var_66_float = var_66_float + var_53_float;
		SetByIndex(var_55_cvector, 1) = var_66_float;
		PlayGlobalSound(var_39_string, var_55_cvector);
	}
	return 16;
	
}


func_2160(var_22_int, var_23_object)
{
	var_25_bool = 0; var_26_object = Obj();
	var_23_object = var_26_object;
	func_1363(var_25_bool, var_26_object);
	if(var_25_bool != 0) {
		var_22_int = 2;
	} else {
		var_22_int = 0;
	}
	return 0;
	
}


func_1136(var_0_object, var_1_object, var_2_object, var_64_object)
{
	var_68_cvector = CVector(0,0,0); var_69_float = 0; var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_float = 0; var_75_bool = 0; var_76_cvector = CVector(0,0,0); var_77_float = 0;
	var_0_object = var_64_object;
	var_78_cvector = CVector(0,0,0); var_79_float = 0;
	func_1106(var_77_float, var_78_cvector, (float)1.7453293800354004);
	var_78_cvector = var_73_cvector;
	var_74_float = var_73_cvector | var_73_cvector;
	var_109_bool = var_74_float < (float)2500.0;
	if(var_109_bool != 0) {
		var_110_cvector = CVector(0,0,0); var_111_float = 0;
		func_1106(var_77_float, var_110_cvector, (float)2.6179938316345215);
		var_110_cvector = var_73_cvector;
		var_74_float = var_73_cvector | var_73_cvector;
		var_113_bool = var_74_float < (float)2500.0;
		if(var_113_bool != 0) {
			var_115_float = sqrt(var_74_float);
			var_116_int = "Can't retreat, distance: " + var_115_float;
			Trace(var_116_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_118_float = GetByIndex(var_73_cvector, 0);
	var_119_float = GetByIndex(var_73_cvector, 2);
	Rotate(var_118_float, var_119_float);
	var_120_cvector = CVector(0,0,0);
	func_1293(var_120_cvector);
	var_1_object = var_120_cvector + var_73_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_1178:
	MovePoint(var_1_object, (int)1, var_75_bool);
	var_126_bool = var_75_bool;
	if(var_126_bool != 0) {
		var_127_bool = var_0_object == 0; //@ne
		if(var_127_bool != 0) {
			goto Label_1208;
		EMIT "GOTO 0x4b6";

		Label_1208:
			return 10;
		}
		var_128_cvector = CVector(0,0,0); var_129_float = 0;
		func_1106(var_77_float, var_128_cvector, (float)2.6179938316345215);
		var_128_cvector = var_76_cvector;
		var_77_float = var_76_cvector | var_76_cvector;
		var_131_bool = var_77_float >= (float)2500.0;
		if(var_131_bool != 0) {
			var_132_cvector = CVector(0,0,0);
			func_1293(var_132_cvector);
			var_1_object = var_132_cvector + var_76_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1208;
		}
	}
	var_135_bool = var_2_object == 0; //@nz
	if(var_135_bool == 1) goto Label_1178;
	
}


func_2170(var_63_object)
{
	var_64_object = Obj();
	var_63_object = var_64_object;
	TaskCall(6);
	func_1136(var_65_object, var_66_cvector, var_67_bool, var_64_object);
	TaskReturn();
	return 0;
}


func_2178(var_16_int)
{
	var_16_int = 0;
	return 0;
}


func_132(var_2_object, var_103_string)
{
	var_104_bool = 0;
	func_2225(var_104_bool);
	var_105_bool = var_104_bool == 0; //@nz
	if(var_105_bool != 0) {
		return 0;
	}
	var_106_bool = var_103_string == var_2_object;
	if(var_106_bool != 0) {
		return 0;
	}
	var_107_string = ""; var_108_bool = 0;
	var_103_string = var_107_string;
	var_110_bool = var_103_string == "";
	if(var_110_bool != 0) {
		var_108_bool = 0;
	} else {
		var_108_bool = 1;
	}
	func_1621(var_107_string, var_108_bool);
	var_2_object = var_103_string;
	return 0;
	
}


func_2181()
{
	return 0;
}


func_2183(var_43_int)
{
	var_43_int = 0;
	return 0;
}


func_2186()
{
	return 0;
}


func_2188(var_16_int)
{
	var_16_int = 2;
	return 0;
}


func_2191(var_22_object)
{
	var_23_object = Obj();
	var_22_object = var_23_object;
	func_2232(var_23_object);
	return 0;
}


func_1684(var_132_object)
{
	var_133_object = Obj(); var_134_object = Obj();
	self(var_134_object);
	var_134_object = var_132_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2197(var_19_bool)
{
	var_19_bool = 0;
	return 0;
}


func_2200()
{
	return 0;
}


func_1690(var_45_cvector, var_46_cvector)
{
	var_53_float = 0; var_54_float = 0;
	var_55_int = var_46_cvector | var_46_cvector;
	var_54_float = sqrt(var_55_int);
	var_56_float = 9.999999974752427e-07;
	var_57_bool = var_54_float < var_56_float;
	if(var_57_bool != 0) {
		var_45_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_45_cvector = var_46_cvector / var_54_float;
	return 2;
}


func_2202(var_26_bool)
{
	var_26_bool = 0;
	return 0;
}


func_2205()
{
	return 0;
}


func_2207(var_30_bool)
{
	var_30_bool = 0;
	return 0;
}


func_2210()
{
	return 0;
}


func_1700(var_76_float, var_77_cvector, var_78_cvector)
{
	var_79_int = var_77_cvector | var_78_cvector;
	var_80_int = var_77_cvector | var_77_cvector;
	var_81_int = var_78_cvector | var_78_cvector;
	var_82_float = var_80_int * var_81_int;
	var_83_float = sqrt(var_82_float);
	var_76_float = var_79_int / var_83_float;
	return 0;
}


func_2212(var_21_bool)
{
	var_21_bool = 0;
	return 0;
}


func_2215()
{
	return 0;
}


func_2217(var_84_int)
{
	var_84_int = 515567;
	return 0;
}


func_2219(var_83_int)
{
	var_83_int = 503352;
	return 0;
}


func_1708(var_23_int)
{
	var_24_float = 0; var_25_float = 0;
	GetGameTime(var_25_float);
	var_27_int = 0;
	var_27_int = var_25_float / (int)24;
	var_23_int = (int)1 + var_27_int;
	return 2;
}


func_2221(var_85_string)
{
	var_85_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_2223(var_86_string)
{
	var_86_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_2225(var_78_bool)
{
	var_78_bool = 0;
	return 0;
}


func_2227()
{
	var_14_bool = 0;
	func_1765((bool)1);
	return 0;
}


func_1717(var_87_int)
{
	var_88_int = 0; var_89_int = 0;
	GetVariable("branch", var_89_int);
	var_92_bool = var_89_int == (int)0;
	if(var_92_bool != 0) {
		var_87_int = 1;
		return 2;
	EMIT "GOTO 0x6c4";
	}
	var_94_bool = var_89_int == (int)1;
	if(var_94_bool != 0) {
		var_87_int = 2;
		return 2;
	}
	var_87_int = 3;
	return 2;
}


func_2232(var_23_object)
{
	var_24_int = 0; var_25_object = Obj();
	var_23_object = var_25_object;
	TaskCall(0);
	func_0(var_26_object, var_24_int, var_25_object);
	TaskReturn();
	return 0;
}


func_2240(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_2243()
{
	var_132_object = Obj();
	func_1684(var_132_object);
	RemoveActor(var_132_object);
	Hold();
	return 0;
}


func_196(var_15_object)
{
	EventDisable(0);
	var_16_object = Obj();
	var_15_object = var_16_object;
	func_229(var_16_object);
	var_15_object = Obj();
	func_2251();
	EventEnable(0);
	
Label_207:
	Hold();
	goto Label_207;
}
EMIT "Return(); Pop(0)";


func_1734(var_20_int, var_21_int)
{
	var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_bool = 0;
	var_35_bool = var_20_int > var_21_int;
	if(var_35_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_33_int = 0;
	var_37_bool = var_20_int != var_21_int;
	if(var_37_bool != 0) {
		var_38_int = var_21_int - var_20_int;
		irand(var_33_int, var_38_int);
	} else {
		var_47_bool = var_20_int == (int)0;
		if(var_47_bool == 0) goto Label_1752;
		return 4;
	}
Label_1752:
	var_33_int = var_33_int + var_20_int;
	var_40_bool = var_33_int == (int)0;
	if(var_40_bool != 0) {
		return 4;
	}
	var_41_int = 0; var_42_string = "";
	func_1940(var_41_int, "Money");
	AddItem(var_34_bool, var_41_int, (int)0, var_33_int);
	return 4;
	
}


func_2251()
{
	return 0;
}


func_229(var_16_object)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_string = ""; var_22_object = Obj(); var_23_bool = 0; var_24_bool = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_object = Obj(); var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0);
	var_37_bool = var_16_object == 0; //@ne
	if(var_37_bool != 0) {
		var_38_string = "";
		func_320("fdie");
	} else {
		@@var_16_object:GetPosition(var_27_cvector);
		GetPosition(var_28_cvector);
		GetDirection(var_29_cvector);
		var_30_cvector = var_28_cvector - var_27_cvector;
		var_70_float = GetByIndex(var_30_cvector, 0);
		var_71_float = GetByIndex(var_29_cvector, 0);
		var_72_float = var_70_float * var_71_float;
		var_73_float = GetByIndex(var_30_cvector, 2);
		var_74_float = GetByIndex(var_29_cvector, 2);
		var_75_float = var_73_float * var_74_float;
		var_76_int = var_72_float + var_75_float;
		var_78_bool = var_76_int >= (int)0;
		if(var_78_bool != 0) {
			var_31_string = "fdie";
		} else {
				var_31_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_16_object = var_32_object;
		var_81_bool = IsFuncExist(var_16_object, "GetScriptProperty", (int)2);
		if(var_81_bool != 0) {
			@@var_16_object:HasScriptProperty(var_33_bool, "Owner");
			var_83_bool = var_33_bool;
			if(var_83_bool != 0) {
				@@var_16_object:GetScriptProperty(var_32_object, "Owner");
				var_85_bool = var_32_object == 0; //@ne
				if(var_85_bool != 0) {
					var_16_object = var_32_object;
				}
			}
		}
		var_88_bool = IsFuncExist(var_32_object, "@GetEyesHeight", (int)1);
		if(var_88_bool != 0) {
			@@var_32_object:GetEyesHeight(var_35_float);
			var_36_cvector = CVector(0.0, 0.0, 0.0);
			var_89_float = GetByIndex(var_36_cvector, 1);
			var_35_float = var_89_float;
			SetByIndex(var_36_cvector, 1) = var_89_float;
			LookAsync(var_16_object, "head", var_36_cvector);
			var_34_bool = 1;
		} else {
			var_34_bool = 0;

		}
		var_91_string = "";
		var_31_string = var_91_string;
		func_1643(var_91_string);
		PlayAnimation("all", var_31_string);
		WaitForAnimEnd();
		var_93_bool = var_34_bool;
		if(var_93_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_31_string);
		RemoveEnvelope();
		var_32_object = 0;
	}
	return 20;
	
}


func_1765(var_14_bool)
{
	var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_bool = 0;
	var_19_bool = var_14_bool;
	if(var_19_bool != 0) {
		var_20_int = 0; var_21_int = 0;
		var_23_int = 0;
		func_1708(var_23_int);
		var_30_float = var_23_int * (int)100;
		var_21_int = (int)100 + var_30_float;
		func_1734((int)0, var_21_int);
		irand(var_17_int, (int)8);
		var_50_bool = var_17_int == (int)0;
		if(var_50_bool != 0) {
			var_51_int = 0; var_52_string = "";
			func_1940(var_51_int, "lemon");
			AddItem(var_18_bool, var_51_int, (int)0, (int)1);
		} else {
			var_56_bool = var_17_int == (int)1;
			if(var_56_bool != 0) {
				var_57_int = 0; var_58_string = "";
				func_1940(var_57_int, "rusk");
				AddItem(var_18_bool, var_57_int, (int)0, (int)1);
				goto Label_1853;
			}
			var_62_bool = var_17_int == (int)2;
			if(var_62_bool != 0) {
				var_63_int = 0; var_64_string = "";
				func_1940(var_63_int, "hook");
				AddItem(var_18_bool, var_63_int, (int)0, (int)1);
				goto Label_1853;
			}
			var_68_bool = var_17_int == (int)4;
			if(var_68_bool != 0) {
				var_69_int = 0; var_70_string = "";
				func_1940(var_69_int, "syringe");
				AddItem(var_18_bool, var_69_int, (int)0, (int)1);
				goto Label_1853;
			}
			var_74_bool = var_17_int == (int)5;
			if(var_74_bool != 0) {
				var_75_int = 0; var_76_string = "";
				func_1940(var_75_int, "watch");
				AddItem(var_18_bool, var_75_int, (int)0, (int)1);
				goto Label_1853;
			}
			var_80_bool = var_17_int == (int)6;
			if(var_80_bool == 0) goto Label_1853;
			var_81_int = 0; var_82_string = "";
			func_1940(var_81_int, "razor");
			AddItem(var_18_bool, var_81_int, (int)0, (int)1);
	}
		var_85_int = 0; var_86_int = 0;
		var_88_int = 0;
		func_1708(var_88_int);
		var_90_float = var_88_int * (int)50;
		var_86_int = (int)50 + var_90_float;
		func_1734((int)0, var_86_int);
		irand(var_17_int, (int)7);
		var_93_bool = var_17_int == (int)0;
		if(var_93_bool != 0) {
			var_94_int = 0; var_95_string = "";
			func_1940(var_94_int, "beads");
			AddItem(var_18_bool, var_94_int, (int)0, (int)1);
			goto Label_1939;
		}
		var_99_bool = var_17_int == (int)1;
		if(var_99_bool != 0) {
			var_100_int = 0; var_101_string = "";
			func_1940(var_100_int, "bracelet");
			AddItem(var_18_bool, var_100_int, (int)0, (int)1);
			goto Label_1939;
		}
		var_105_bool = var_17_int == (int)2;
		if(var_105_bool != 0) {
			var_106_int = 0; var_107_string = "";
			func_1940(var_106_int, "ear_ring");
			AddItem(var_18_bool, var_106_int, (int)0, (int)1);
			goto Label_1939;
		}
		var_111_bool = var_17_int == (int)3;
		if(var_111_bool != 0) {
			var_112_int = 0; var_113_string = "";
			func_1940(var_112_int, "gold_ring");
			AddItem(var_18_bool, var_112_int, (int)0, (int)1);
			goto Label_1939;
		}
		var_117_bool = var_17_int == (int)4;
		if(var_117_bool != 0) {
			var_118_int = 0; var_119_string = "";
			func_1940(var_118_int, "silver_ring");
			AddItem(var_18_bool, var_118_int, (int)0, (int)1);
			goto Label_1939;
		}
		var_123_bool = var_17_int == (int)5;
		if(var_123_bool == 0) goto Label_1939;
		var_124_int = 0; var_125_string = "";
		func_1940(var_124_int, "flower");
		AddItem(var_18_bool, var_124_int, (int)0, (int)1);
	}
Label_1853:
	goto Label_1939;
	
Label_1939:
	return 4;
	
}


func_1261(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1277(var_0_object, var_65_bool)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
	GetDirection(var_68_cvector);
	var_70_cvector = CVector(0,0,0); var_71_object = Obj();
	var_71_object = var_0_object;
	func_1298(var_70_cvector, var_71_object);
	var_70_cvector = var_69_cvector;
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_1700(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= (float)-0.3420201241970062;
	return 4;
}


func_1293(var_85_cvector)
{
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	GetPosition(var_87_cvector);
	var_87_cvector = var_85_cvector;
	return 2;
}


func_1298(var_47_cvector, var_48_object)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_48_object:GetPosition(var_52_cvector);
	var_47_cvector = var_52_cvector - var_51_cvector;
	return 4;
}


func_789(var_0_object, var_1_object)
{
	var_135_float = 0; var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_bool = 0; var_139_object = Obj(); var_140_bool = 0; var_141_float = 0; var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_bool = 0; var_145_object = Obj(); var_146_bool = 0;
	var_0_object = false;
	var_1_object = false;
	rand(var_141_float, (float)0.5);
	Sleep(var_141_float);
	
Label_797:
	var_148_bool = var_0_object == 0; //@nz
	if(var_148_bool != 0) {
		var_149_bool = var_1_object == 0; //@nz
		if(var_149_bool != 0) {

		Label_801:
			GetPosition(var_143_cvector);
			var_150_float = 0;
			func_848(var_150_float);
			GetRandomPFPointInCircle(var_142_cvector, var_143_cvector, var_150_float, var_144_bool);
			var_153_bool = var_144_bool;
			if(var_153_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_801;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_817;
	
Label_817:
	var_154_object = Obj(); var_155_cvector = CVector(0,0,0);
	var_142_cvector = var_155_cvector;
	func_878(var_154_object, var_155_cvector);
	var_154_object = var_145_object;
	var_158_bool = var_145_object != 0; //@nn
	if(var_158_bool != 0) {
		RotatePath(var_145_object, var_146_bool);
		var_159_bool = var_146_bool;
		if(var_159_bool != 0) {
			var_160_bool = 0;
			func_876(var_160_bool);
			FollowPath(var_145_object, var_160_bool, var_146_bool);
			var_145_object = 0;
			var_161_bool = var_146_bool;
			if(var_161_bool != 0) {
				TaskCall(3);
				func_516();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_145_object = 0;
	goto Label_797;
	
}


func_1305(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	IsPlayerActor(var_22_object, var_24_bool);
	var_24_bool = var_21_bool;
	return 2;
}


func_1310(var_47_bool, var_48_object, var_49_string)
{
	var_50_bool = 0; var_51_bool = 0;
	var_54_bool = IsFuncExist(var_48_object, "HasProperty", (int)2);
	var_55_bool = var_54_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_47_bool = 0;
		return 2;
	}
	@@var_48_object:HasProperty(var_49_string, var_51_bool);
	var_51_bool = var_47_bool;
	return 2;
}


func_1322(var_40_bool, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0;
	@@var_41_object:IsDead(var_43_bool);
	var_43_bool = var_40_bool;
	return 2;
}


func_1327(var_29_bool, var_30_object)
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
		func_1322(var_40_bool, var_41_object);
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


func_320(var_38_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_39_string = "";
	var_38_string = var_39_string;
	func_1643(var_39_string);
	PlayAnimation("all", var_38_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_38_string);
	RemoveEnvelope();
	return 0;
}


func_848(var_150_float)
{
	var_151_float = 0; var_152_float = 0;
	GetCameraFarDistance(var_152_float);
	var_152_float = var_150_float;
	return 2;
}


func_1363(var_25_bool, var_26_object)
{
	var_27_int = 0; var_28_int = 0;
	var_29_bool = 0; var_30_object = Obj();
	var_26_object = var_30_object;
	func_1327(var_29_bool, var_30_object);
	var_46_bool = var_29_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_25_bool = 0;
		return 2;
	}
	var_47_bool = 0; var_48_object = Obj(); var_49_string = "";
	var_26_object = var_48_object;
	func_1310(var_47_bool, var_48_object, "noaccess");
	var_56_bool = var_47_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_25_bool = 1;
		return 2;
	}
	@@var_26_object:GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == (int)0;
	return 2;
}


func_860(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1387(var_30_object)
{
	var_31_bool = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_bool = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = "";
	var_45_bool = var_30_object == 0; //@ne
	if(var_45_bool != 0) {
		return 14;
	}
	IsDead(var_38_bool);
	var_46_bool = var_38_bool;
	if(var_46_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_39_int);
	var_48_bool = var_39_int < (int)0;
	if(var_48_bool != 0) {
		return 14;
	}
	@@var_30_object:GetPosition(var_40_cvector);
	GetPosition(var_41_cvector);
	GetDirection(var_42_cvector);
	var_43_cvector = var_41_cvector - var_40_cvector;
	var_49_float = GetByIndex(var_43_cvector, 0);
	var_50_float = GetByIndex(var_42_cvector, 0);
	var_51_float = var_49_float * var_50_float;
	var_52_float = GetByIndex(var_43_cvector, 2);
	var_53_float = GetByIndex(var_42_cvector, 2);
	var_54_float = var_52_float * var_53_float;
	var_55_int = var_51_float + var_54_float;
	var_57_bool = var_55_int >= (int)0;
	if(var_57_bool != 0) {
		var_44_string = "fhit";
	} else {
		var_44_string = "bhit";
	}
	var_60_int = var_44_string + "1";
	var_62_int = var_44_string + "2";
	FadeSecondaryAnimation("hit_react", var_60_int, var_62_int, (int)-10);
	return 14;
	
}


func_876(var_160_bool)
{
	var_160_bool = 0;
	return 0;
}


func_878(var_154_object, var_155_cvector)
{
	var_156_object = Obj(); var_157_object = Obj();
	FindShiftedPathTo(var_157_object, var_155_cvector);
	var_157_object = var_154_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_884(var_66_object)
{
	Face(var_66_object);
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_stay");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	StopAsync();
	var_76_object = Obj();
	var_66_object = var_76_object;
	func_949(var_68_cvector, var_69_bool, var_66_object, var_76_object);
	return 0;
}


func_1940(var_41_int, var_42_string)
{
	var_43_int = 0; var_44_int = 0;
	GetInvItemByName(var_44_int, var_42_string);
	var_44_int = var_41_int;
	return 2;
}


func_919(var_0_object, var_27_cvector, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0;
	GetPosition(var_35_cvector);
	@@@var_0_object:GetPosition(var_36_cvector);
	GetDirection(var_37_cvector);
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_44_cvector = var_35_cvector - var_36_cvector;
	func_1690(var_43_cvector, var_44_cvector);
	var_51_float = var_37_cvector * (float)0.75;
	var_42_cvector = var_43_cvector + var_51_float;
	func_1690(var_41_cvector, var_42_cvector);
	var_41_cvector = var_38_cvector;
	FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, (int)32, (float)7000.0);
	var_40_float = var_40_float - (int)100;
	var_56_bool = var_40_float < (int)0;
	if(var_56_bool != 0) {
		var_40_float = 0;
	}
	var_27_cvector = var_39_cvector * var_40_float;
	return 12;
}


func_1431(var_17_object, var_18_int, var_19_float)
{
	var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_int = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_int = 0; var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_int = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0);
	var_38_bool = 0;
	var_38_bool = 0;
	var_39_bool = 0;
	var_39_bool = 0;
	var_40_object = var_17_object;
	if(var_40_object != 0) {
		var_42_bool = var_18_int != (int)4;
		if(var_42_bool != 0) {
			var_39_bool = 1;
		}
	}
	if(var_39_bool != 0) {
		var_44_bool = var_18_int != (int)5;
		if(var_44_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
		var_47_cvector = CVector(0,0,0); var_48_object = Obj();
		var_17_object = var_48_object;
		func_1298(var_47_cvector, var_48_object);
		var_47_cvector = var_46_cvector;
		func_1690(var_45_cvector, var_46_cvector);
		var_45_cvector = var_29_cvector;
		CreateVectorVector(var_30_object);
		var_31_int = 1;

	Label_1460:
		var_59_int = "hit" + var_31_int;
		GetGeometryLocator(var_59_int, var_32_bool, var_33_cvector, var_34_cvector);
		var_60_bool = var_32_bool == 0; //@nz
		if(var_60_bool != 0) {
		} else {
			var_108_int = var_34_cvector | var_29_cvector;
			var_110_bool = var_108_int >= (float)0.7071067690849304;
			if(var_110_bool != 0) {
				@@var_30_object:add(var_33_cvector);
			}
			var_31_int = var_31_int + (int)1;
			goto Label_1460;
		}
		@@var_30_object:size(var_35_int);
		var_61_int = var_35_int;
		if(var_61_int != 0) {
			irand(var_36_int, var_35_int);
			@@var_30_object:get(var_37_cvector, var_36_int);
			var_62_object = Obj(); var_63_int = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
			var_17_object = var_62_object;
			var_18_int = var_63_int;
			var_19_float = var_64_float;
			var_37_cvector = var_65_cvector;
			var_66_cvector = -var_29_cvector;
			func_1499(var_64_float, var_65_cvector, var_66_cvector);
			return 18;
		}
		var_30_object = 0;
	}
	var_107_object = Obj();
	var_17_object = var_107_object;
	func_1387(var_107_object);
	return 18;
	
}


func_1945(var_14_object)
{
	var_15_object = Obj();
	var_14_object = var_15_object;
	TaskCall(2);
	func_196(var_15_object);
	TaskReturn();
	return 0;
}


func_949(var_0_object, var_1_object, var_2_object, var_76_object)
{
	var_77_cvector = CVector(0,0,0); var_78_float = 0; var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_float = 0; var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_float = 0;
	var_0_object = var_76_object;
	var_87_cvector = CVector(0,0,0); var_88_float = 0;
	func_919(var_86_float, var_87_cvector, (float)1.7453293800354004);
	var_87_cvector = var_82_cvector;
	var_83_float = var_82_cvector | var_82_cvector;
	var_118_bool = var_83_float < (float)2500.0;
	if(var_118_bool != 0) {
		var_119_cvector = CVector(0,0,0); var_120_float = 0;
		func_919(var_86_float, var_119_cvector, (float)2.6179938316345215);
		var_119_cvector = var_82_cvector;
		var_83_float = var_82_cvector | var_82_cvector;
		var_122_bool = var_83_float < (float)2500.0;
		if(var_122_bool != 0) {
			var_124_float = sqrt(var_83_float);
			var_125_int = "Can't retreat, distance: " + var_124_float;
			Trace(var_125_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_127_float = GetByIndex(var_82_cvector, 0);
	var_128_float = GetByIndex(var_82_cvector, 2);
	Rotate(var_127_float, var_128_float);
	var_129_cvector = CVector(0,0,0);
	func_1293(var_129_cvector);
	var_1_object = var_129_cvector + var_82_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_991:
	MovePoint(var_1_object, (int)1, var_84_bool);
	var_135_bool = var_84_bool;
	if(var_135_bool != 0) {
		var_136_bool = var_0_object == 0; //@ne
		if(var_136_bool != 0) {
			goto Label_1021;
		EMIT "GOTO 0x3fb";

		Label_1021:
			return 10;
		}
		var_137_cvector = CVector(0,0,0); var_138_float = 0;
		func_919(var_86_float, var_137_cvector, (float)2.6179938316345215);
		var_137_cvector = var_85_cvector;
		var_86_float = var_85_cvector | var_85_cvector;
		var_140_bool = var_86_float >= (float)2500.0;
		if(var_140_bool != 0) {
			var_141_cvector = CVector(0,0,0);
			func_1293(var_141_cvector);
			var_1_object = var_141_cvector + var_85_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1021;
		}
	}
	var_144_bool = var_2_object == 0; //@nz
	if(var_144_bool == 1) goto Label_991;
	
}


func_1990(var_17_bool, var_18_object, var_19_string)
{
	var_21_bool = var_19_string == "unholster";
	if(var_21_bool != 0) {
		var_22_bool = 0; var_23_object = Obj();
		var_18_object = var_23_object;
		func_2197(var_23_object);
		var_22_bool = var_17_bool;
		return 0;
	EMIT "GOTO 0x7e4";
	}
	var_25_bool = var_19_string == "player_shot";
	if(var_25_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_18_object = var_27_object;
		func_2202(var_27_object);
		var_26_bool = var_17_bool;
		return 0;
	EMIT "GOTO 0x7e4";
	}
	var_29_bool = var_19_string == "battle";
	if(var_29_bool != 0) {
		var_30_bool = 0; var_31_object = Obj();
		var_18_object = var_31_object;
		func_2207(var_31_object);
		var_30_bool = var_17_bool;
		return 0;
	}
	var_17_bool = 0;
	return 0;
}


func_1499(var_19_object, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj();
	GetScene(var_26_object);
	AddActorByType(var_27_object, "scripted", var_26_object, var_22_cvector, var_23_cvector, "blood_dir.xml");
	var_30_object = Obj();
	var_19_object = var_30_object;
	func_1387(var_30_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2022(var_32_object, var_33_string)
{
	var_35_bool = var_33_string == "unholster";
	if(var_35_bool != 0) {
		var_32_object = Obj();
		func_2200();
	} else {
		var_38_bool = var_33_string == "player_shot";
		if(var_38_bool != 0) {
			var_32_object = Obj();
			func_2205();
			goto Label_2046;
		}
		var_41_bool = var_33_string == "battle";
		if(var_41_bool == 0) goto Label_2046;
		var_32_object = Obj();
		func_2210();
	}
Label_2046:
	return 0;
	
}


func_1513(var_128_bool)
{
	var_129_bool = 0; var_130_bool = 0;
	IsLoaded(var_130_bool);
	var_130_bool = var_128_bool;
	return 2;
}


func_1518(var_35_bool, var_36_object, var_37_float)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0;
	@@var_36_object:GetPosition(var_48_cvector);
	@@var_36_object:GetEyesHeight(var_47_float);
	var_56_float = GetByIndex(var_48_cvector, 1);
	var_56_float = var_56_float + var_47_float;
	SetByIndex(var_48_cvector, 1) = var_56_float;
	GetPosition(var_49_cvector);
	GetEyesHeight(var_47_float);
	var_57_float = GetByIndex(var_49_cvector, 1);
	var_57_float = var_57_float + var_47_float;
	SetByIndex(var_49_cvector, 1) = var_57_float;
	var_50_cvector = var_48_cvector - var_49_cvector;
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (float)0;
	var_59_int = var_50_cvector | var_50_cvector;
	var_60_float = sqrt(var_59_int);
	var_50_cvector = var_50_cvector / var_60_float;
	var_51_cvector = -var_50_cvector;
	var_61_float = var_50_cvector * var_37_float;
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	var_63_cvector = var_51_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1690(var_62_cvector, var_63_cvector);
	var_71_float = var_62_cvector * (int)25;
	var_72_int = var_61_float + var_71_float;
	var_52_cvector = var_72_int - CVector(0.0, 10.0, 0.0);
	var_53_cvector = var_49_cvector + var_52_cvector;
	IsOverrideActive(var_54_bool);
	var_74_bool = var_54_bool;
	if(var_74_bool != 0) {
		var_35_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_53_cvector, var_51_cvector, (bool)1);
	var_76_float = GetByIndex(var_52_cvector, 0);
	var_77_float = GetByIndex(var_52_cvector, 2);
	Rotate(var_76_float, var_77_float);
	var_78_bool = 0;
	func_2225(var_78_bool);
	if(var_78_bool != 0) {
	} else {
		HasAnimationTrack(var_55_bool, "head");
		var_80_bool = var_55_bool;
		if(var_80_bool == 0) goto Label_1581;
		LookAsyncCamera("head");
	}
Label_1581:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_35_bool = 1;
	return 18;
	
}


func_2047(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	var_18_bool = 0;
	var_18_bool = 0;
	var_19_bool = 0; var_20_object = Obj();
	var_15_object = var_20_object;
	func_2197(var_20_object);
	if(var_19_bool != 0) {
		var_21_bool = 0; var_22_object = Obj();
		var_15_object = var_22_object;
		func_1305(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			var_18_bool = 1;
		}
	}
	if(var_18_bool != 0) {
		@@var_15_object:IsWeaponHolstered(var_17_bool);
		var_25_bool = var_17_bool == 0; //@nz
		if(var_25_bool != 0) {
			var_14_bool = 1;
			return 2;
		}
	}
	var_14_bool = 0;
	return 2;
}


