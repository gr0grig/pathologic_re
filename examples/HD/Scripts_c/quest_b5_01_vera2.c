// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetScene/1,GetPosition/1,GetDirection/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,Stop/0,FindDirLength/3,SetRTEnvelope/2,Hold/0,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsPlayerActor/2,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2,Trigger/2,HasAnimation/3,SetVariable/2,WorkWithCorpse/1,Barter/1,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:retreat|W:player|W:head|A:RemoveStationaryActor|A:GetPosition|W:Can't retreat, distance: |W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:reputation|W:quest_b5_01|W:vera_retreat|W:oob5Vera2_1|W:branch|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png|W:b5q01VeraDead|W:health
// @GLOBALS: 0:object:
// @RUN_OP: 0x196
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb3 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x1a0 vars=object
// @EVENT_17: op=0x1ab vars=object
// @EVENT_26: op=0x1b5 vars=string
// @EVENT_7: op=0x1ec vars=int
// @TASK_3: vars=object,cvector,bool params=0
// @EVENT_7: op=0x2e3 vars=int
// @EVENT_41: op=0x31e vars=object
// @TASK_4: vars= params=1
// @EVENT_0: op=0x346 vars=object
// @EVENT_22: op=0x3c5 vars=object,int,float,float
// @EVENT_16: op=0x3c7 vars=object,string
// @EVENT_41: op=0x3c9 vars=object
// @STANDALONE_EVENT_22: op=0x61f vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x627 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x631 vars=object,string
// @STANDALONE_EVENT_41: op=0x63e vars=object
// @PE: 0x4a,0x9d,0xb3,0x1a0,0x1ab,0x1b5,0x1c2,0x1ec,0x203,0x31e,0x337,0x3ab,0x3c5,0x3c7,0x3c9,0x551,0x55c,0x569,0x5ba,0x5c1,0x5c7,0x5ea,0x61f,0x627,0x63e

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool)
{
	if((int)1 != 0) {
		func_1297();
		var_18_bool = var_14_bool == (int)19925;
		if(var_18_bool != 0) {
			var_19_object = Obj(); var_20_object = Obj();
			var_19_object = var_1_object;
			var_20_object = var_0_object;
			func_1466();
		}
		var_28_bool = var_14_bool == (int)19761;
		if(var_28_bool != 0) {
			var_29_object = Obj(); var_30_object = Obj();
			var_29_object = var_1_object;
			var_30_object = var_0_object;
			func_1466();
		}
		var_32_bool = var_14_bool == (int)19931;
		if(var_32_bool != 0) {
			var_33_object = Obj(); var_34_object = Obj();
			var_33_object = var_1_object;
			var_34_object = var_0_object;
			func_1466();
		}
		var_36_bool = var_14_bool == (int)20903;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_1466();
		}
		var_40_bool = var_13_cvector == (int)19760;
		if(var_40_bool != 0) {
			var_41_bool = 0; var_42_object = Obj();
			var_42_object = var_1_object;
			func_1479(var_42_object);
			if(var_41_bool != 0) {
				var_49_object = Obj(); var_50_object = Obj();
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_1473();
				var_53_string = "";
				func_157(var_14_bool, "Neutral");
				@@@var_0_object:SetMessage((int)518668);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)518670, (int)19916, (int)19762);
				return 0;
			}
			var_74_string = "";
			func_157(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519748);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519749, (int)-1, (int)20903);
			@@@var_0_object:AddReply((int)519750, (int)-1, (int)20904);
			return 0;
		}
		var_83_bool = var_13_cvector == (int)19916;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_157(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518811);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518812, (int)19918, (int)19917);
			@@@var_0_object:AddReply((int)518818, (int)19926, (int)19923);
			return 0;
		}
		var_93_bool = var_13_cvector == (int)19926;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_157(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518821);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518822, (int)19928, (int)19927);
			return 0;
		}
		var_100_bool = var_13_cvector == (int)19928;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_157(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518823);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518824, (int)19930, (int)19929);
			return 0;
		}
		var_107_bool = var_13_cvector == (int)19930;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_157(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518825);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518826, (int)-1, (int)19931);
			@@@var_0_object:AddReply((int)518827, (int)-1, (int)19932);
			return 0;
		}
		var_117_bool = var_13_cvector == (int)19918;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_157(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518813);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518815, (int)19921, (int)19920);
			@@@var_0_object:AddReply((int)518669, (int)-1, (int)19761);
			return 0;
		}
		var_127_bool = var_13_cvector == (int)19921;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_157(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518816);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518819, (int)-1, (int)19924);
			@@@var_0_object:AddReply((int)518820, (int)-1, (int)19925);
			return 0;
		}
		var_3_string = true;
		var_136_bool = 0;
		func_1535(var_136_bool);
		if(var_136_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb4";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool)
{
	func_515(var_12_cvector, var_13_bool);
	var_17_int = 0; var_18_object = Obj();
	var_13_bool = var_18_object;
	TaskCall(0);
	func_0(var_19_object, var_17_int, var_18_object);
	TaskReturn();
	return 0;
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool)
{
	func_515(var_12_cvector, var_13_bool);
	TaskCall(3);
	func_615();
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_cvector, var_13_bool)
{
	var_15_bool = var_13_bool == "retreat";
	if(var_15_bool != 0) {
		func_515(var_12_cvector, var_13_bool);
		TaskCall(3);
		func_615();
		TaskReturn();
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_cvector, var_13_bool)
{
	var_15_bool = var_13_bool == (int)10;
	if(var_15_bool != 0) {
		var_16_bool = 0;
		func_477(var_11_object, var_12_cvector, var_13_bool, var_16_bool);
		if(var_16_bool != 0) {
			var_29_bool = var_2_object == 0; //@nz
			if(var_29_bool != 0) {
				var_30_object = Obj();
				var_30_object = var_4_bool;
				func_1286(var_30_object);
				var_2_object = true;
			}
		} else {
			var_37_object = var_2_object;
			if(var_37_object == 0) goto Label_514;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_514:
	return 0;
	
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_int)
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
		func_636(var_21_float, var_27_cvector, (float)1.7453293800354004);
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
				func_807((bool)1, var_65_bool);
				if(var_65_bool != 1) {
					var_60_bool = 0;
				}
			}
			if(var_60_bool != 0) {
				var_57_bool = 1;
			}
		}
		if(var_57_bool == 0) goto Label_790;
		Stop();
		var_85_cvector = CVector(0,0,0);
		func_971(var_85_cvector);
		var_1_object = var_85_cvector + var_20_cvector;
	}
Label_790:
	return 8;
	
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	func_791(var_13_object);
	var_13_object = Obj();
	func_1598();
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	IsOverrideActive(var_15_bool);
	var_16_bool = var_15_bool == 0; //@nz
	if(var_16_bool != 0) {
		var_17_object = Obj();
		var_13_object = var_17_object;
		func_1514(var_17_object);
	}
	return 2;
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float)
{
	return 0;
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_string)
{
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0;
	var_13_object = var_17_object;
	var_14_int = var_18_int;
	var_15_float = var_19_float;
	func_1081(var_17_object, var_18_int, var_19_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0);
	var_13_object = var_19_object;
	var_14_int = var_20_int;
	var_15_float = var_21_float;
	var_17_cvector = var_22_cvector;
	var_18_cvector = var_23_cvector;
	func_1149(var_21_float, var_22_cvector, var_23_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_string)
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


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	var_14_object = Obj();
	var_13_object = var_14_object;
	func_1537(var_14_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool)
{
	
Label_406:
	var_13_float = 0; var_14_float = 0;
	func_450(var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, (float)300, (float)100);
	Sleep((int)3);
	goto Label_406;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0;
	var_0_object = var_18_object;
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0;
	var_18_object = var_29_object;
	func_1168(var_28_bool, var_29_object, (float)70.0);
	var_75_bool = var_28_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	CreateDialog(var_24_object);
	var_76_int = 0;
	func_1529(var_76_int);
	@@var_24_object:SetNPCName(var_76_int);
	var_77_int = 0;
	func_1527(var_77_int);
	@@var_24_object:SetNPCDescription(var_77_int);
	var_78_string = "";
	func_1531(var_78_string);
	@@var_24_object:SetPhoto(var_78_string);
	var_79_string = "";
	func_1533(var_79_string);
	@@var_24_object:SetPhoto2(var_79_string);
	var_80_int = 0;
	func_1491(var_80_int);
	@@var_24_object:SetPlayerName(var_80_int);
	IsOverrideActive(var_25_bool);
	var_88_bool = var_25_bool;
	if(var_88_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	DoDialog(var_24_object);
	var_89_object = Obj(); var_90_object = Obj();
	var_18_object = var_89_object;
	var_24_object = var_90_object;
	TaskCall(1);
	func_74(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object);
	TaskReturn();
	@@var_24_object:IsDialogEnd(var_27_bool);
	
Label_56:
	var_155_bool = var_27_bool == 0; //@nz
	if(var_155_bool != 0) {
		sync();
		@@var_24_object:IsDialogEnd(var_27_bool);
		goto Label_56;
	}
	var_18_object = Obj();
	func_1237();
	StopDialog(var_24_object);
	@@var_24_object:GetReturnValue((int)-1);
	var_26_int = var_17_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1537(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	GetScene(var_16_object);
	var_17_object = Obj();
	func_1345(var_17_object);
	@@var_16_object:RemoveStationaryActor(var_17_object);
	var_20_bool = 0; var_21_object = Obj();
	var_14_object = var_21_object;
	func_998(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		var_24_bool = 0; var_25_object = Obj(); var_26_float = 0;
		var_14_object = var_25_object;
		func_1385(var_24_bool, var_25_object, (float)-0.10000000149011612);
	}
	SetVariable("b5q01VeraDead", (bool)1);
	var_64_object = Obj();
	var_14_object = var_64_object;
	TaskCall(4);
	func_823(var_64_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_515(var_2_object, var_3_string)
{
	func_610();
	KillTimer((int)10);
	var_17_object = var_2_object;
	if(var_17_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_1527(var_77_int)
{
	var_77_int = 515593;
	return 0;
}


func_1286(var_30_object)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_cvector = CVector(0,0,0);
	@@var_30_object:GetEyesHeight(var_33_float);
	var_34_cvector = CVector(0.0, 0.0, 0.0);
	var_35_float = GetByIndex(var_34_cvector, 1);
	var_33_float = var_35_float;
	SetByIndex(var_34_cvector, 1) = var_35_float;
	LookAsync(var_30_object, "head", var_34_cvector);
	return 4;
}


func_1163(var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0;
	IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
	return 2;
}


func_1420(var_31_float)
{
	var_32_object = Obj(); var_33_object = Obj();
	CreateFloatVector(var_33_object);
	@@var_33_object:add(var_31_float);
	SendWorldWndMessage((int)16, var_33_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1037(var_30_object)
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


func_1168(var_28_bool, var_29_object, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0;
	@@var_29_object:GetPosition(var_41_cvector);
	@@var_29_object:GetEyesHeight(var_40_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	var_49_float = var_49_float + var_40_float;
	SetByIndex(var_41_cvector, 1) = var_49_float;
	GetPosition(var_42_cvector);
	GetEyesHeight(var_40_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	var_50_float = var_50_float + var_40_float;
	SetByIndex(var_42_cvector, 1) = var_50_float;
	var_43_cvector = var_41_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (float)0;
	var_52_int = var_43_cvector | var_43_cvector;
	var_53_float = sqrt(var_52_int);
	var_43_cvector = var_43_cvector / var_53_float;
	var_44_cvector = -var_43_cvector;
	var_54_float = var_43_cvector * var_30_float;
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
	var_56_cvector = var_44_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1351(var_55_cvector, var_56_cvector);
	var_64_float = var_55_cvector * (int)25;
	var_65_int = var_54_float + var_64_float;
	var_45_cvector = var_65_int - CVector(0.0, 10.0, 0.0);
	var_46_cvector = var_42_cvector + var_45_cvector;
	IsOverrideActive(var_47_bool);
	var_67_bool = var_47_bool;
	if(var_67_bool != 0) {
		var_28_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_46_cvector, var_44_cvector, (bool)1);
	var_69_float = GetByIndex(var_45_cvector, 0);
	var_70_float = GetByIndex(var_45_cvector, 2);
	Rotate(var_69_float, var_70_float);
	var_71_bool = 0;
	func_1535(var_71_bool);
	if(var_71_bool != 0) {
	} else {
		HasAnimationTrack(var_48_bool, "head");
		var_73_bool = var_48_bool;
		if(var_73_bool == 0) goto Label_1231;
		LookAsyncCamera("head");
	}
Label_1231:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_28_bool = 1;
	return 18;
	
}


func_1297()
{
	var_16_bool = 0;
	func_1535(var_16_bool);
	if(var_16_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_529()
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0;
	WaitForAnimEnd();
	var_36_bool = 0;
	func_1163(var_36_bool);
	var_37_bool = var_36_bool == 0; //@nz
	if(var_37_bool != 0) {
		return 14;
	}
	func_1449((int)0);
	var_38_int = var_29_int;
	var_30_int = 0;
	
Label_543:
	var_51_bool = 0;
	var_51_bool = 0;
	var_53_bool = var_30_int < (int)5;
	if(var_53_bool != 0) {
		var_54_bool = 0;
		func_1163(var_54_bool);
		if(var_54_bool != 0) {
			var_51_bool = 1;
		}
	}
	if(var_51_bool != 0) {
		irand(var_31_int, (int)3);
		var_57_bool = var_31_int == (int)0;
		if(var_57_bool != 0) {
			var_58_int = var_29_int;
			if(var_58_int == 0) goto Label_576;
			irand(var_32_int, var_29_int);
			var_60_string = ""; var_61_int = 0;
			var_32_int = var_61_int;
			func_1442(var_60_string, var_61_int);
			PlayAnimation("all", var_60_string);
			WaitForAnimEnd(var_33_bool);
			var_62_bool = var_33_bool == 0; //@nz
			if(var_62_bool != 0) {
			} else {
		} else {
				var_67_bool = var_31_int == (int)1;
				if(var_67_bool != 0) {
					rand(var_34_float, (int)4);
					var_70_int = var_34_float + (int)1;
					Sleep(var_70_int, var_35_bool);
					var_71_bool = var_35_bool == 0; //@nz
					if(var_71_bool != 0) {
						goto Label_605;
					}
					goto Label_594;
				}
				var_72_int = var_30_int;
				if(var_72_int == 0) goto Label_594;
				goto Label_605;
		}
		Label_594:
			var_63_bool = 0;
			func_608(var_63_bool);
			var_64_bool = var_63_bool == 0; //@nz
			if(var_64_bool != 0) {
				goto Label_605;
			}
			ResetAAS();
			var_30_int = var_30_int + (int)1;
			goto Label_543;

		}
	}
Label_605:
	ResetAAS();
	return 14;
	
}


func_1149(var_19_object, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj();
	GetScene(var_26_object);
	AddActorByType(var_27_object, "scripted", var_26_object, var_22_cvector, var_23_cvector, "blood_dir.xml");
	var_30_object = Obj();
	var_19_object = var_30_object;
	func_1037(var_30_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1430(var_21_bool, var_22_string, var_23_string)
{
	var_24_object = Obj(); var_25_object = Obj();
	FindActor(var_25_object, var_22_string);
	var_26_bool = var_25_object == 0; //@ne
	if(var_26_bool != 0) {
		var_21_bool = 0;
		return 2;
	}
	Trigger(var_25_object, var_23_string);
	var_21_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_791(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1304(var_88_string)
{
	var_89_bool = 0; var_90_int = 0; var_91_bool = 0; var_92_int = 0; var_93_bool = 0; var_94_float = 0; var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_bool = 0; var_102_float = 0; var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0);
	IsExisting3DSound(var_97_bool, var_88_string);
	var_105_bool = var_97_bool == 0; //@nz
	if(var_105_bool != 0) {
		var_98_int = 0;

	Label_1310:
		var_107_int = var_98_int + (int)1;
		var_108_int = var_88_string + var_107_int;
		IsExisting3DSound(var_99_bool, var_108_int);
		var_109_bool = var_99_bool == 0; //@nz
		if(var_109_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_1310;
		}
		var_110_bool = var_98_int == 0; //@nz
		if(var_110_bool != 0) {
			return 16;
		}
		irand(var_100_int, var_98_int);
		var_112_int = var_100_int + (int)1;
		var_88_string = var_88_string + var_112_int;
	}
	Is3DSoundLoaded(var_101_bool, var_88_string);
	var_113_bool = var_101_bool;
	if(var_113_bool != 0) {
		GetEyesHeight(var_102_float);
		GetDirection(var_103_cvector);
		var_104_cvector = var_103_cvector * (int)50;
		var_115_float = GetByIndex(var_104_cvector, 1);
		var_115_float = var_115_float + var_102_float;
		SetByIndex(var_104_cvector, 1) = var_115_float;
		PlayGlobalSound(var_88_string, var_104_cvector);
	}
	return 16;
	
}


func_666(var_0_object, var_1_object, var_2_object, var_27_object)
{
	var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_float = 0;
	var_0_object = var_27_object;
	var_42_cvector = CVector(0,0,0); var_43_float = 0;
	func_636(var_41_float, var_42_cvector, (float)1.7453293800354004);
	var_42_cvector = var_37_cvector;
	var_38_float = var_37_cvector | var_37_cvector;
	var_73_bool = var_38_float < (float)2500.0;
	if(var_73_bool != 0) {
		var_74_cvector = CVector(0,0,0); var_75_float = 0;
		func_636(var_41_float, var_74_cvector, (float)2.6179938316345215);
		var_74_cvector = var_37_cvector;
		var_38_float = var_37_cvector | var_37_cvector;
		var_77_bool = var_38_float < (float)2500.0;
		if(var_77_bool != 0) {
			var_79_float = sqrt(var_38_float);
			var_80_int = "Can't retreat, distance: " + var_79_float;
			Trace(var_80_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_82_float = GetByIndex(var_37_cvector, 0);
	var_83_float = GetByIndex(var_37_cvector, 2);
	Rotate(var_82_float, var_83_float);
	var_84_cvector = CVector(0,0,0);
	func_971(var_84_cvector);
	var_1_object = var_84_cvector + var_37_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_708:
	MovePoint(var_1_object, (int)1, var_39_bool);
	var_90_bool = var_39_bool;
	if(var_90_bool != 0) {
		var_91_bool = var_0_object == 0; //@ne
		if(var_91_bool != 0) {
			goto Label_738;
		EMIT "GOTO 0x2e0";

		Label_738:
			return 10;
		}
		var_92_cvector = CVector(0,0,0); var_93_float = 0;
		func_636(var_41_float, var_92_cvector, (float)2.6179938316345215);
		var_92_cvector = var_40_cvector;
		var_41_float = var_40_cvector | var_40_cvector;
		var_95_bool = var_41_float >= (float)2500.0;
		if(var_95_bool != 0) {
			var_96_cvector = CVector(0,0,0);
			func_971(var_96_cvector);
			var_1_object = var_96_cvector + var_40_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_738;
		}
	}
	var_99_bool = var_2_object == 0; //@nz
	if(var_99_bool == 1) goto Label_708;
	
}


func_157(var_2_object, var_108_string)
{
	var_109_bool = 0;
	func_1535(var_109_bool);
	var_110_bool = var_109_bool == 0; //@nz
	if(var_110_bool != 0) {
		return 0;
	}
	var_111_bool = var_108_string == var_2_object;
	if(var_111_bool != 0) {
		return 0;
	}
	var_112_string = ""; var_113_bool = 0;
	var_108_string = var_112_string;
	var_115_bool = var_108_string == "";
	if(var_115_bool != 0) {
		var_113_bool = 0;
	} else {
		var_113_bool = 1;
	}
	func_1271(var_112_string, var_113_bool);
	var_2_object = var_108_string;
	return 0;
	
}


func_1442(var_44_string, var_45_int)
{
	var_46_string = ""; var_47_string = "";
	var_48_int = var_45_int;
	if(var_48_int != 0) {
		"idle" = "idle" + var_45_int;
	}
	var_47_string = var_44_string;
	return 2;
}


func_807(var_0_object, var_65_bool)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
	GetDirection(var_68_cvector);
	var_70_cvector = CVector(0,0,0); var_71_object = Obj();
	var_71_object = var_0_object;
	func_976(var_70_cvector, var_71_object);
	var_70_cvector = var_69_cvector;
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_1372(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= (float)-0.3420201241970062;
	return 4;
}


func_1449(var_38_int)
{
	var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_bool = 0;
	var_41_int = 0;
	
Label_1451:
	var_44_string = ""; var_45_int = 0;
	var_41_int = var_45_int;
	func_1442(var_44_string, var_45_int);
	HasAnimation(var_42_bool, "all", var_44_string);
	var_49_bool = var_42_bool == 0; //@nz
	if(var_49_bool != 0) {
	} else {
		var_41_int = var_41_int + (int)1;
		goto Label_1451;
	}
	var_41_int = var_38_int;
	return 4;
	
}


func_939(var_87_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_88_string = "";
	var_87_string = var_88_string;
	func_1304(var_88_string);
	PlayAnimation("all", var_87_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_87_string);
	RemoveEnvelope();
	return 0;
}


func_823(var_64_object)
{
	EventDisable(0);
	var_65_object = Obj();
	var_64_object = var_65_object;
	func_848(var_65_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_834:
	Hold();
	goto Label_834;
}
EMIT "Return(); Pop(0)";


func_1081(var_17_object, var_18_int, var_19_float)
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
		func_976(var_47_cvector, var_48_object);
		var_47_cvector = var_46_cvector;
		func_1351(var_45_cvector, var_46_cvector);
		var_45_cvector = var_29_cvector;
		CreateVectorVector(var_30_object);
		var_31_int = 1;

	Label_1110:
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
			goto Label_1110;
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
			func_1149(var_64_float, var_65_cvector, var_66_cvector);
			return 18;
		}
		var_30_object = 0;
	}
	var_107_object = Obj();
	var_17_object = var_107_object;
	func_1037(var_107_object);
	return 18;
	
}


func_1466()
{
	var_21_bool = 0; var_22_string = ""; var_23_string = "";
	func_1430(var_21_bool, "quest_b5_01", "vera_retreat");
	return 0;
}


func_1473()
{
	SetVariable("oob5Vera2_1", (int)1);
	return 0;
}


func_450(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_13_float, var_14_float)
{
	var_15_bool = 0;
	func_1163(var_15_bool);
	var_18_bool = var_15_bool == 0; //@nz
	if(var_18_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_13_float;
	var_1_object = var_14_float;
	SetTimer((int)10, (float)1.0);
	func_529();
	var_73_bool = var_3_string == 0; //@nz
	if(var_73_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1345(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	self(var_19_object);
	var_19_object = var_17_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1479(var_96_bool)
{
	var_98_int = 0; var_99_string = "";
	func_1380(var_98_int, "oob5Vera2_1");
	var_103_bool = var_98_int == (int)0;
	if(var_103_bool != 0) {
		var_96_bool = 1;
		return 0;
	}
	var_96_bool = 0;
	return 0;
}


func_1351(var_45_cvector, var_46_cvector)
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


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_89_object, var_90_object)
{
	var_0_object = var_90_object;
	var_1_object = var_89_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_96_bool = 0; var_97_object = Obj();
		var_97_object = var_1_object;
		func_1479(var_97_object);
		if(var_96_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_1473();
			var_108_string = "";
			func_157(var_90_object, "Neutral");
			@@@var_0_object:SetMessage((int)518668);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518670, (int)19916, (int)19762);
		} else {
				var_147_string = "";
				func_157(var_90_object, "Neutral");
				@@@var_0_object:SetMessage((int)519748);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)519749, (int)-1, (int)20903);
				@@@var_0_object:AddReply((int)519750, (int)-1, (int)20904);
				goto Label_127;
		}
	}
Label_127:
	var_129_bool = 0;
	func_1535(var_129_bool);
	if(var_129_bool != 0) {

	Label_131:
		lshWaitForAnimEnd();
		var_130_string = var_3_string;
		if(var_130_string != 0) {
		} else {
			var_131_string = "";
			var_131_string = var_2_object;
			func_1255(var_131_string);
			goto Label_131;
	}
		PlayAnimation("all", "idle");

	Label_146:
		WaitForAnimEnd();
		var_144_string = var_3_string;
		if(var_144_string != 0) {
			goto Label_156;
		}
		PlayAnimation("all", "idle");
		goto Label_146;

	}
	goto Label_156;
	
Label_156:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_971(var_85_cvector)
{
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	GetPosition(var_87_cvector);
	var_87_cvector = var_85_cvector;
	return 2;
}


func_976(var_47_cvector, var_48_object)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_48_object:GetPosition(var_52_cvector);
	var_47_cvector = var_52_cvector - var_51_cvector;
	return 4;
}


func_848(var_65_object)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_string = ""; var_71_object = Obj(); var_72_bool = 0; var_73_bool = 0; var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_string = ""; var_81_object = Obj(); var_82_bool = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0);
	var_86_bool = var_65_object == 0; //@ne
	if(var_86_bool != 0) {
		var_87_string = "";
		func_939("fdie");
	} else {
		@@var_65_object:GetPosition(var_76_cvector);
		GetPosition(var_77_cvector);
		GetDirection(var_78_cvector);
		var_79_cvector = var_77_cvector - var_76_cvector;
		var_119_float = GetByIndex(var_79_cvector, 0);
		var_120_float = GetByIndex(var_78_cvector, 0);
		var_121_float = var_119_float * var_120_float;
		var_122_float = GetByIndex(var_79_cvector, 2);
		var_123_float = GetByIndex(var_78_cvector, 2);
		var_124_float = var_122_float * var_123_float;
		var_125_int = var_121_float + var_124_float;
		var_127_bool = var_125_int >= (int)0;
		if(var_127_bool != 0) {
			var_80_string = "fdie";
		} else {
				var_80_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_65_object = var_81_object;
		var_130_bool = IsFuncExist(var_65_object, "GetScriptProperty", (int)2);
		if(var_130_bool != 0) {
			@@var_65_object:HasScriptProperty(var_82_bool, "Owner");
			var_132_bool = var_82_bool;
			if(var_132_bool != 0) {
				@@var_65_object:GetScriptProperty(var_81_object, "Owner");
				var_134_bool = var_81_object == 0; //@ne
				if(var_134_bool != 0) {
					var_65_object = var_81_object;
				}
			}
		}
		var_137_bool = IsFuncExist(var_81_object, "@GetEyesHeight", (int)1);
		if(var_137_bool != 0) {
			@@var_81_object:GetEyesHeight(var_84_float);
			var_85_cvector = CVector(0.0, 0.0, 0.0);
			var_138_float = GetByIndex(var_85_cvector, 1);
			var_84_float = var_138_float;
			SetByIndex(var_85_cvector, 1) = var_138_float;
			LookAsync(var_65_object, "head", var_85_cvector);
			var_83_bool = 1;
		} else {
			var_83_bool = 0;

		}
		var_140_string = "";
		var_80_string = var_140_string;
		func_1304(var_140_string);
		PlayAnimation("all", var_80_string);
		WaitForAnimEnd();
		var_142_bool = var_83_bool;
		if(var_142_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_80_string);
		RemoveEnvelope();
		var_81_object = 0;
	}
	return 20;
	
}


func_1361(var_53_float, var_54_float, var_55_float, var_56_float)
{
	var_57_bool = var_54_float < var_55_float;
	if(var_57_bool != 0) {
		var_55_float = var_53_float;
		return 0;
	}
	var_58_bool = var_54_float > var_56_float;
	if(var_58_bool != 0) {
		var_56_float = var_53_float;
		return 0;
	}
	var_54_float = var_53_float;
	return 0;
}


func_1491(var_80_int)
{
	var_81_int = 0; var_82_int = 0;
	GetVariable("branch", var_82_int);
	var_85_bool = var_82_int == (int)0;
	if(var_85_bool != 0) {
		var_80_int = 1;
		return 2;
	EMIT "GOTO 0x5e2";
	}
	var_87_bool = var_82_int == (int)1;
	if(var_87_bool != 0) {
		var_80_int = 2;
		return 2;
	}
	var_80_int = 3;
	return 2;
}


func_1237()
{
	var_157_bool = 0; var_158_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_160_bool = 0;
	func_1535(var_160_bool);
	if(var_160_bool != 0) {
	} else {
		HasAnimationTrack(var_158_bool, "head");
		var_162_bool = var_158_bool;
		if(var_162_bool == 0) goto Label_1254;
		UnlookAsync("head");
	}
Label_1254:
	return 2;
	
}


func_983(var_20_float, var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0);
	GetPosition(var_25_cvector);
	@@var_21_object:GetPosition(var_26_cvector);
	var_27_cvector = var_26_cvector - var_25_cvector;
	var_20_float = var_27_cvector | var_27_cvector;
	return 6;
}


func_1372(var_76_float, var_77_cvector, var_78_cvector)
{
	var_79_int = var_77_cvector | var_78_cvector;
	var_80_int = var_77_cvector | var_77_cvector;
	var_81_int = var_78_cvector | var_78_cvector;
	var_82_float = var_80_int * var_81_int;
	var_83_float = sqrt(var_82_float);
	var_76_float = var_79_int / var_83_float;
	return 0;
}


func_477(var_0_object, var_1_object, var_4_bool, var_16_bool)
{
	var_17_float = 0; var_18_float = 0;
	var_19_bool = var_4_bool == 0; //@ne
	if(var_19_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	var_20_float = 0; var_21_object = Obj();
	var_21_object = var_4_bool;
	func_983(var_20_float, var_21_object);
	var_18_float = sqrt(var_20_float);
	var_28_object = var_2_object;
	if(var_28_object != 0) {
		var_18_float = var_18_float - var_1_object;
	}
	var_16_bool = var_18_float < var_0_object;
	return 2;
}


func_991(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj();
	FindActor(var_30_object, "player");
	var_30_object = var_28_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_608(var_63_bool)
{
	var_63_bool = 1;
	return 0;
}


func_610()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1380(var_98_int, var_99_string)
{
	var_100_int = 0; var_101_int = 0;
	GetVariable(var_99_string, var_101_int);
	var_101_int = var_98_int;
	return 2;
}


func_1508(var_18_int)
{
	var_19_int = 0; var_20_int = 0;
	GetVariable("branch", var_20_int);
	var_20_int = var_18_int;
	return 2;
}


func_998(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	IsPlayerActor(var_21_object, var_23_bool);
	var_23_bool = var_20_bool;
	return 2;
}


func_1255(var_131_string)
{
	var_132_bool = 0; var_133_float = 0; var_134_float = 0; var_135_bool = 0; var_136_float = 0; var_137_float = 0;
	lshHasAnimation(var_135_bool, var_131_string);
	var_138_bool = var_135_bool;
	if(var_138_bool != 0) {
		lshGetAnimTimes(var_131_string, var_136_float, var_137_float);
		lshPlayAnimation(var_136_float, var_137_float, (bool)0);
	} else {
		var_141_int = "Can't find lsh animation : " + var_131_string;
		Trace(var_141_int);
	}
	return 6;
	
}


func_615()
{
	var_22_object = Obj(); var_23_object = Obj();
	GetScene(var_23_object);
	var_24_object = Obj();
	func_1345(var_24_object);
	@@var_23_object:RemoveStationaryActor(var_24_object);
	
Label_623:
	var_27_object = Obj();
	func_991(Obj());
	var_28_object = var_27_object;
	func_666(var_21_bool, var_22_object, var_23_object, var_27_object);
	Sleep((int)1);
	goto Label_623;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_1385(var_24_bool, var_25_object, var_26_float)
{
	var_27_bool = var_25_object == 0; //@nz
	if(var_27_bool != 0) {
		var_24_bool = 0;
		return 0;
	}
	var_29_bool = var_26_float > (int)0;
	if(var_29_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_60_bool = var_26_float < (int)0;
		if(var_60_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1406;
		}
		var_24_bool = 0;
		return 0;
	}
Label_1406:
	var_31_float = 0;
	var_26_float = var_31_float;
	func_1420(var_31_float);
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; var_38_float = 0; var_39_float = 0; var_40_float = 0;
	var_25_object = var_36_object;
	var_26_float = var_38_float;
	func_1015(var_35_bool, var_36_object, "reputation", var_38_float, (float)0, (float)1);
	var_24_bool = 1;
	return 0;
	
}


func_1514(var_17_object)
{
	var_18_int = 0;
	func_1508(var_18_int);
	var_23_bool = var_18_int == (int)1;
	if(var_23_bool != 0) {
		WorkWithCorpse(var_17_object);
	} else {
		Barter(var_17_object);
	}
	return 0;
	
}


func_1003(var_43_bool, var_44_object, var_45_string)
{
	var_46_bool = 0; var_47_bool = 0;
	var_50_bool = IsFuncExist(var_44_object, "HasProperty", (int)2);
	var_51_bool = var_50_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_43_bool = 0;
		return 2;
	}
	@@var_44_object:HasProperty(var_45_string, var_47_bool);
	var_47_bool = var_43_bool;
	return 2;
}


func_1271(var_112_string, var_113_bool)
{
	var_116_bool = 0; var_117_float = 0; var_118_float = 0; var_119_bool = 0; var_120_float = 0; var_121_float = 0;
	lshHasAnimation(var_119_bool, var_112_string);
	var_122_bool = var_119_bool;
	if(var_122_bool != 0) {
		lshGetAnimTimes(var_112_string, var_120_float, var_121_float);
		lshPlayAnimation(var_120_float, var_121_float, var_113_bool);
	} else {
		var_124_int = "Can't find lsh animation : " + var_112_string;
		Trace(var_124_int);
	}
	return 6;
	
}


func_1015(var_35_bool, var_36_object, var_37_string, var_38_float, var_39_float, var_40_float)
{
	var_41_float = 0; var_42_float = 0;
	var_43_bool = 0; var_44_object = Obj(); var_45_string = "";
	var_36_object = var_44_object;
	var_37_string = var_45_string;
	func_1003(var_43_bool, var_44_object, var_45_string);
	var_52_bool = var_43_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_35_bool = 0;
		return 2;
	}
	@@var_36_object:GetProperty(var_37_string, var_42_float);
	var_53_float = 0; var_54_float = 0; var_55_float = 0; var_56_float = 0;
	var_54_float = var_42_float + var_38_float;
	var_39_float = var_55_float;
	var_40_float = var_56_float;
	func_1361(var_53_float, var_54_float, var_55_float, var_56_float);
	@@var_36_object:SetProperty(var_37_string, var_53_float);
	var_35_bool = 1;
	return 2;
}


func_1529(var_76_int)
{
	var_76_int = 512582;
	return 0;
}


func_1531(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_636(var_0_object, var_27_cvector, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0;
	GetPosition(var_35_cvector);
	@@@var_0_object:GetPosition(var_36_cvector);
	GetDirection(var_37_cvector);
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_44_cvector = var_35_cvector - var_36_cvector;
	func_1351(var_43_cvector, var_44_cvector);
	var_51_float = var_37_cvector * (float)0.75;
	var_42_cvector = var_43_cvector + var_51_float;
	func_1351(var_41_cvector, var_42_cvector);
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


func_1533(var_79_string)
{
	var_79_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_1535(var_71_bool)
{
	var_71_bool = 0;
	return 0;
}


