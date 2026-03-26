// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,Hold/0,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetScene/1,GetVariable/2,MovePoint/3,Rotate/3,Stop/0,GetPosition/1,GetDirection/1,FindLongestDir/6,Trace/1,Rotate/2,FindDirLength/3,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsPlayerActor/2,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,ReportHit/4,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_k6_03|W:abinos_unload|W:player|W:head|A:RemoveStationaryActor|W:pt_k6q03_albinos_path|A:GetLocator|W:albinos_retreated|A:GetPosition|W:Can't retreat, distance: |W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:reputation|W:ui/NPC_Albinos.png|W:ui/NPC_Albinos_b.png|W:completed|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x250
// @RUN_TASK: 3
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9f vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x186 vars=object
// @EVENT_17: op=0x198 vars=object
// @EVENT_41: op=0x19a vars=object
// @EVENT_6: op=0x1a3 vars=
// @EVENT_7: op=0x1d5 vars=int
// @TASK_3: vars=bool,int params=0
// @EVENT_17: op=0x26b vars=object
// @EVENT_41: op=0x26d vars=object
// @EVENT_6: op=0x276 vars=
// @TASK_4: vars=object,cvector,bool params=2
// @EVENT_6: op=0x2c7 vars=
// @EVENT_7: op=0x2cf vars=int
// @EVENT_41: op=0x37e vars=object
// @TASK_5: vars= params=1
// @EVENT_22: op=0x415 vars=object,int,float,float
// @EVENT_16: op=0x417 vars=object,string
// @EVENT_41: op=0x419 vars=object
// @STANDALONE_EVENT_22: op=0x6ea vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x6f2 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x6fc vars=object,string
// @STANDALONE_EVENT_41: op=0x709 vars=object
// @PE: 0x4a,0x89,0x9f,0x186,0x198,0x19a,0x1ab,0x1d5,0x1ec,0x26b,0x26d,0x2b9,0x2bb,0x2cf,0x37e,0x397,0x3fb,0x415,0x417,0x419,0x41b,0x5f1,0x5f8,0x603,0x60b,0x677,0x6e2,0x6ea,0x6f2,0x709

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_int, var_14_object, var_15_cvector, var_16_bool)
{
	if((int)1 != 0) {
		func_1457();
		var_20_bool = var_15_cvector == (int)28021;
		if(var_20_bool != 0) {
			var_21_object = Obj(); var_22_object = Obj();
			var_21_object = var_1_object;
			var_22_object = var_0_object;
			func_1655();
			var_52_string = "";
			func_137(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526744);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528787, (int)30200, (int)30199);
			@@@var_0_object:AddReply((int)528791, (int)30200, (int)30203);
			return 0;
		}
		var_77_bool = var_15_cvector == (int)30200;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_137(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528788);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528789, (int)30202, (int)30201);
			@@@var_0_object:AddReply((int)541036, (int)30202, (int)43130);
			return 0;
		}
		var_87_bool = var_15_cvector == (int)30202;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_137(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528790);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526745, (int)28023, (int)28022);
			@@@var_0_object:AddReply((int)526752, (int)28030, (int)28029);
			return 0;
		}
		var_97_bool = var_15_cvector == (int)28030;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_137(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526754, (int)-1, (int)28031);
			@@@var_0_object:AddReply((int)528786, (int)-1, (int)30198);
			return 0;
		}
		var_107_bool = var_15_cvector == (int)28023;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_137(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526746);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528792, (int)30206, (int)30205);
			@@@var_0_object:AddReply((int)541037, (int)43133, (int)43132);
			return 0;
		}
		var_117_bool = var_15_cvector == (int)43133;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_137(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541038);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541039, (int)30206, (int)43134);
			@@@var_0_object:AddReply((int)541040, (int)30206, (int)43135);
			return 0;
		}
		var_127_bool = var_15_cvector == (int)30206;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_137(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528793);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526747, (int)28025, (int)28024);
			return 0;
		}
		var_134_bool = var_15_cvector == (int)28025;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_137(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526748);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526749, (int)28027, (int)28026);
			return 0;
		}
		var_141_bool = var_15_cvector == (int)28027;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_137(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526750);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526751, (int)-1, (int)28028);
			@@@var_0_object:AddReply((int)528794, (int)-1, (int)30207);
			return 0;
		}
		var_3_string = true;
		var_150_bool = 0;
		func_1629(var_150_bool);
		if(var_150_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa0";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	func_492(var_14_cvector, var_15_bool);
	var_19_int = 0; var_20_object = Obj();
	var_15_bool = var_20_object;
	TaskCall(0);
	func_0(var_21_object, var_19_int, var_20_object);
	TaskReturn();
	var_180_object = Obj(); var_181_bool = 0;
	var_15_bool = var_180_object;
	TaskCall(4);
	func_699(var_180_object, (bool)0);
	TaskReturn();
	return 0;
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	func_492(var_14_cvector, var_15_bool);
	var_15_bool = Obj();
	func_1801();
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = ""; var_17_string = "";
	func_1609(var_15_bool, "quest_k6_03", "abinos_unload");
	Hold();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	var_17_bool = var_15_bool == (int)10;
	if(var_17_bool != 0) {
		var_18_bool = 0;
		func_454(var_13_object, var_14_cvector, var_15_bool, var_18_bool);
		if(var_18_bool != 0) {
			var_31_bool = var_2_object == 0; //@nz
			if(var_31_bool != 0) {
				var_32_object = Obj();
				var_32_object = var_4_bool;
				func_1446(var_32_object);
				var_2_object = true;
			}
		} else {
			var_39_object = var_2_object;
			if(var_39_object == 0) goto Label_491;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_491:
	return 0;
	
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_object, var_14_cvector, var_15_bool)
{
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_object, var_14_cvector, var_15_bool)
{
	func_691(var_15_bool);
	var_15_bool = Obj();
	func_1801();
	return 0;
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = ""; var_17_string = "";
	func_1609(var_15_bool, "quest_k6_03", "abinos_unload");
	Hold();
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = ""; var_17_string = "";
	func_1609(var_15_bool, "quest_k6_03", "albinos_retreated");
	Hold();
	return 0;
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_int)
{
	var_17_bool = var_15_int == (int)100;
	if(var_17_bool != 0) {
		func_1736();
	} else {
		var_106_int = 0;
		var_15_int = var_106_int;
		func_835(var_13_cvector, var_14_bool, var_15_int, var_106_int);
	}
	return 0;
	
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object)
{
	func_887(var_15_object);
	var_15_object = Obj();
	func_1801();
	return 0;
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	return 0;
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_string)
{
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0;
	var_15_object = var_19_object;
	var_16_int = var_20_int;
	var_17_float = var_21_float;
	func_1241(var_19_object, var_20_int, var_21_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0);
	var_15_object = var_21_object;
	var_16_int = var_22_int;
	var_17_float = var_23_float;
	var_19_cvector = var_24_cvector;
	var_20_cvector = var_25_cvector;
	func_1309(var_23_float, var_24_cvector, var_25_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_string)
{
	var_17_float = 0; var_18_float = 0;
	var_20_bool = var_16_string == "health";
	if(var_20_bool != 0) {
		GetProperty("health", var_18_float);
		var_23_bool = var_18_float <= (int)0;
		if(var_23_bool != 0) {
			SignalDeath(var_15_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	func_1085(var_16_bool, var_17_object);
	if(var_16_bool != 0) {
		var_20_bool = 0; var_21_object = Obj(); var_22_float = 0;
		var_15_object = var_21_object;
		func_1547(var_20_bool, var_21_object, (float)-0.10000000149011612);
	}
	var_58_object = Obj();
	var_15_object = var_58_object;
	func_1762(var_58_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_object = Obj(); var_16_object = Obj();
	GetScene(var_16_object);
	var_17_object = Obj();
	func_1505(var_17_object);
	@@var_16_object:RemoveStationaryActor(var_17_object);
	GetVariable("pt_k6q03_albinos_path", var_1_object);
	var_22_bool = var_1_object != (int)-1;
	if(var_22_bool != 0) {
		var_23_bool = 0; var_24_string = ""; var_25_int = 0; var_26_bool = 0;
		var_25_int = var_1_object;
		func_638(var_23_bool, "pt_k6q03_albinos_path", var_25_int, (bool)1);
	}
	TaskCall(2);
	func_380();
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_0(var_0_object, var_19_int, var_20_object)
{
	var_22_object = Obj(); var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_0_object = var_20_object;
	var_30_bool = 0; var_31_object = Obj(); var_32_float = 0;
	var_20_object = var_31_object;
	func_1328(var_30_bool, var_31_object, (float)70.0);
	var_77_bool = var_30_bool == 0; //@nz
	if(var_77_bool != 0) {
		var_19_int = -2;
		return 8;
	}
	CreateDialog(var_26_object);
	var_78_int = 0;
	func_1623(var_78_int);
	@@var_26_object:SetNPCName(var_78_int);
	var_79_int = 0;
	func_1621(var_79_int);
	@@var_26_object:SetNPCDescription(var_79_int);
	var_80_string = "";
	func_1625(var_80_string);
	@@var_26_object:SetPhoto(var_80_string);
	var_81_string = "";
	func_1627(var_81_string);
	@@var_26_object:SetPhoto2(var_81_string);
	var_82_int = 0;
	func_1719(var_82_int);
	@@var_26_object:SetPlayerName(var_82_int);
	IsOverrideActive(var_27_bool);
	var_90_bool = var_27_bool;
	if(var_90_bool != 0) {
		var_19_int = -2;
		return 8;
	}
	DoDialog(var_26_object);
	var_91_object = Obj(); var_92_object = Obj();
	var_20_object = var_91_object;
	var_26_object = var_92_object;
	TaskCall(1);
	func_74(var_93_object, var_94_object, var_95_string, var_96_bool, var_91_object, var_92_object);
	TaskReturn();
	@@var_26_object:IsDialogEnd(var_29_bool);
	
Label_56:
	var_171_bool = var_29_bool == 0; //@nz
	if(var_171_bool != 0) {
		sync();
		@@var_26_object:IsDialogEnd(var_29_bool);
		goto Label_56;
	}
	var_20_object = Obj();
	func_1397();
	StopDialog(var_26_object);
	@@var_26_object:GetReturnValue((int)-1);
	var_28_int = var_19_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1665()
{
	var_100_object = Obj(); var_101_object = Obj();
	CreateDiaryEntry(var_101_object, (int)750, (int)2, (int)539629);
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0;
	var_101_object = var_106_object;
	func_1691(var_105_bool, var_106_object, (int)748);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1539(var_169_float, var_170_cvector, var_171_cvector)
{
	var_172_int = var_170_cvector | var_171_cvector;
	var_173_int = var_170_cvector | var_170_cvector;
	var_174_int = var_171_cvector | var_171_cvector;
	var_175_float = var_173_int * var_174_int;
	var_176_float = sqrt(var_175_float);
	var_169_float = var_172_int / var_176_float;
	return 0;
}


func_1415(var_155_string)
{
	var_156_bool = 0; var_157_float = 0; var_158_float = 0; var_159_bool = 0; var_160_float = 0; var_161_float = 0;
	lshHasAnimation(var_159_bool, var_155_string);
	var_162_bool = var_159_bool;
	if(var_162_bool != 0) {
		lshGetAnimTimes(var_155_string, var_160_float, var_161_float);
		lshPlayAnimation(var_160_float, var_161_float, (bool)0);
	} else {
		var_165_int = "Can't find lsh animation : " + var_155_string;
		Trace(var_165_int);
	}
	return 6;
	
}


func_903(var_0_object, var_158_bool)
{
	var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0);
	GetDirection(var_161_cvector);
	var_163_cvector = CVector(0,0,0); var_164_object = Obj();
	var_164_object = var_0_object;
	func_1070(var_163_cvector, var_164_object);
	var_163_cvector = var_162_cvector;
	var_169_float = 0; var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0);
	var_161_cvector = var_170_cvector;
	var_162_cvector = var_171_cvector;
	func_1539(var_169_float, var_170_cvector, var_171_cvector);
	var_158_bool = var_169_float >= (float)-0.3420201241970062;
	return 4;
}


func_137(var_2_object, var_129_string)
{
	var_130_bool = 0;
	func_1629(var_130_bool);
	var_131_bool = var_130_bool == 0; //@nz
	if(var_131_bool != 0) {
		return 0;
	}
	var_132_bool = var_129_string == var_2_object;
	if(var_132_bool != 0) {
		return 0;
	}
	var_133_string = ""; var_134_bool = 0;
	var_129_string = var_133_string;
	var_136_bool = var_129_string == "";
	if(var_136_bool != 0) {
		var_134_bool = 0;
	} else {
		var_134_bool = 1;
	}
	func_1431(var_133_string, var_134_bool);
	var_2_object = var_129_string;
	return 0;
	
}


func_1547(var_20_bool, var_21_object, var_22_float)
{
	var_23_bool = var_21_object == 0; //@nz
	if(var_23_bool != 0) {
		var_20_bool = 0;
		return 0;
	}
	var_25_bool = var_22_float > (int)0;
	if(var_25_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_56_bool = var_22_float < (int)0;
		if(var_56_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1568;
		}
		var_20_bool = 0;
		return 0;
	}
Label_1568:
	var_27_float = 0;
	var_22_float = var_27_float;
	func_1599(var_27_float);
	var_31_bool = 0; var_32_object = Obj(); var_33_string = ""; var_34_float = 0; var_35_float = 0; var_36_float = 0;
	var_21_object = var_32_object;
	var_22_float = var_34_float;
	func_1102(var_31_bool, var_32_object, "reputation", var_34_float, (float)0, (float)1);
	var_20_bool = 1;
	return 0;
	
}


func_1678(var_114_object)
{
	var_115_object = Obj(); var_116_object = Obj();
	GetDiaryRoot(var_116_object);
	var_117_bool = var_116_object == 0; //@nz
	if(var_117_bool != 0) {
		Trace("Can't retrieve diary root");
		var_114_object = 0;
		return 2;
	}
	var_116_object = var_114_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1431(var_133_string, var_134_bool)
{
	var_137_bool = 0; var_138_float = 0; var_139_float = 0; var_140_bool = 0; var_141_float = 0; var_142_float = 0;
	lshHasAnimation(var_140_bool, var_133_string);
	var_143_bool = var_140_bool;
	if(var_143_bool != 0) {
		lshGetAnimTimes(var_133_string, var_141_float, var_142_float);
		lshPlayAnimation(var_141_float, var_142_float, var_134_bool);
	} else {
		var_145_int = "Can't find lsh animation : " + var_133_string;
		Trace(var_145_int);
	}
	return 6;
	
}


func_919(var_59_object)
{
	var_60_object = Obj();
	var_59_object = var_60_object;
	func_928(var_60_object);
	
Label_924:
	Hold();
	goto Label_924;
}
EMIT "Return(); Pop(0)";


func_1051(var_65_string, var_66_int)
{
	var_68_bool = var_66_int == (int)2;
	if(var_68_bool != 0) {
		var_65_string = "fire";
		return 0;
	EMIT "GOTO 0x427";
	}
	var_70_bool = var_66_int == (int)1;
	if(var_70_bool != 0) {
		var_65_string = "bullet";
		return 0;
	}
	var_65_string = "phys";
	return 0;
}


func_1691(var_105_bool, var_106_object, var_107_int)
{
	var_108_object = Obj(); var_109_object = Obj(); var_110_int = 0; var_111_object = Obj(); var_112_object = Obj(); var_113_int = 0;
	func_1678(Obj());
	var_114_object = var_111_object;
	@@var_111_object:Find(var_107_int, var_112_object);
	var_119_bool = var_112_object == 0; //@nz
	if(var_119_bool != 0) {
		var_121_int = "Can't find diary parent with id: " + var_107_int;
		Trace(var_121_int);
		var_105_bool = 0;
		return 6;
	}
	@@var_112_object:AddChild(var_106_object);
	SendWorldWndMessage((int)7);
	@@var_106_object:GetCategory(var_113_int);
	SetDiarySection(var_113_int);
	var_105_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1309(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj();
	GetScene(var_28_object);
	AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	var_32_object = Obj();
	var_21_object = var_32_object;
	func_1197(var_32_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_928(var_60_object)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_string = ""; var_66_object = Obj(); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_string = ""; var_76_object = Obj(); var_77_bool = 0; var_78_bool = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0);
	var_81_bool = var_60_object == 0; //@ne
	if(var_81_bool != 0) {
		var_82_string = "";
		func_1019("fdie");
	} else {
		@@var_60_object:GetPosition(var_71_cvector);
		GetPosition(var_72_cvector);
		GetDirection(var_73_cvector);
		var_74_cvector = var_72_cvector - var_71_cvector;
		var_114_float = GetByIndex(var_74_cvector, 0);
		var_115_float = GetByIndex(var_73_cvector, 0);
		var_116_float = var_114_float * var_115_float;
		var_117_float = GetByIndex(var_74_cvector, 2);
		var_118_float = GetByIndex(var_73_cvector, 2);
		var_119_float = var_117_float * var_118_float;
		var_120_int = var_116_float + var_119_float;
		var_122_bool = var_120_int >= (int)0;
		if(var_122_bool != 0) {
			var_75_string = "fdie";
		} else {
				var_75_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_60_object = var_76_object;
		var_125_bool = IsFuncExist(var_60_object, "GetScriptProperty", (int)2);
		if(var_125_bool != 0) {
			@@var_60_object:HasScriptProperty(var_77_bool, "Owner");
			var_127_bool = var_77_bool;
			if(var_127_bool != 0) {
				@@var_60_object:GetScriptProperty(var_76_object, "Owner");
				var_129_bool = var_76_object == 0; //@ne
				if(var_129_bool != 0) {
					var_60_object = var_76_object;
				}
			}
		}
		var_132_bool = IsFuncExist(var_76_object, "@GetEyesHeight", (int)1);
		if(var_132_bool != 0) {
			@@var_76_object:GetEyesHeight(var_79_float);
			var_80_cvector = CVector(0.0, 0.0, 0.0);
			var_133_float = GetByIndex(var_80_cvector, 1);
			var_79_float = var_133_float;
			SetByIndex(var_80_cvector, 1) = var_133_float;
			LookAsync(var_60_object, "head", var_80_cvector);
			var_78_bool = 1;
		} else {
			var_78_bool = 0;

		}
		var_135_string = "";
		var_75_string = var_135_string;
		func_1464(var_135_string);
		PlayAnimation("all", var_75_string);
		WaitForAnimEnd();
		var_137_bool = var_78_bool;
		if(var_137_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_75_string);
		RemoveEnvelope();
		var_76_object = 0;
	}
	return 20;
	
}


func_1446(var_32_object)
{
	var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_cvector = CVector(0,0,0);
	@@var_32_object:GetEyesHeight(var_35_float);
	var_36_cvector = CVector(0.0, 0.0, 0.0);
	var_37_float = GetByIndex(var_36_cvector, 1);
	var_35_float = var_37_float;
	SetByIndex(var_36_cvector, 1) = var_37_float;
	LookAsync(var_32_object, "head", var_36_cvector);
	return 4;
}


func_1065(var_178_cvector)
{
	var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0);
	GetPosition(var_180_cvector);
	var_180_cvector = var_178_cvector;
	return 2;
}


func_427(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_62_float, var_63_float)
{
	var_64_bool = 0;
	func_1323(var_64_bool);
	var_67_bool = var_64_bool == 0; //@nz
	if(var_67_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_62_float;
	var_1_object = var_63_float;
	SetTimer((int)10, (float)1.0);
	func_506();
	var_122_bool = var_3_string == 0; //@nz
	if(var_122_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1323(var_64_bool)
{
	var_65_bool = 0; var_66_bool = 0;
	IsLoaded(var_66_bool);
	var_66_bool = var_64_bool;
	return 2;
}


func_1197(var_32_object)
{
	var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_bool = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = "";
	var_47_bool = var_32_object == 0; //@ne
	if(var_47_bool != 0) {
		return 14;
	}
	IsDead(var_40_bool);
	var_48_bool = var_40_bool;
	if(var_48_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_41_int);
	var_50_bool = var_41_int < (int)0;
	if(var_50_bool != 0) {
		return 14;
	}
	@@var_32_object:GetPosition(var_42_cvector);
	GetPosition(var_43_cvector);
	GetDirection(var_44_cvector);
	var_45_cvector = var_43_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_45_cvector, 0);
	var_52_float = GetByIndex(var_44_cvector, 0);
	var_53_float = var_51_float * var_52_float;
	var_54_float = GetByIndex(var_45_cvector, 2);
	var_55_float = GetByIndex(var_44_cvector, 2);
	var_56_float = var_54_float * var_55_float;
	var_57_int = var_53_float + var_56_float;
	var_59_bool = var_57_int >= (int)0;
	if(var_59_bool != 0) {
		var_46_string = "fhit";
	} else {
		var_46_string = "bhit";
	}
	var_62_int = var_46_string + "1";
	var_64_int = var_46_string + "2";
	FadeSecondaryAnimation("hit_react", var_62_int, var_64_int, (int)-10);
	return 14;
	
}


func_1070(var_49_cvector, var_50_object)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	GetPosition(var_53_cvector);
	@@var_50_object:GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
	return 4;
}


func_1582(var_95_float)
{
	var_96_object = Obj(); var_97_object = Obj();
	CreateFloatVector(var_97_object);
	@@var_97_object:add(var_95_float);
	var_99_bool = var_95_float < (int)0;
	if(var_99_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_97_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1328(var_30_bool, var_31_object, var_32_float)
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
	func_1511(var_57_cvector, var_58_cvector);
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
	func_1629(var_73_bool);
	if(var_73_bool != 0) {
	} else {
		HasAnimationTrack(var_50_bool, "head");
		var_75_bool = var_50_bool;
		if(var_75_bool == 0) goto Label_1391;
		LookAsyncCamera("head");
	}
Label_1391:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_30_bool = 1;
	return 18;
	
}


func_1457()
{
	var_18_bool = 0;
	func_1629(var_18_bool);
	if(var_18_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_691(var_0_object)
{
	Stop();
	StopAnimation();
	var_0_object = true;
	return 0;
}


func_1077(var_24_float, var_25_object)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0);
	GetPosition(var_29_cvector);
	@@var_25_object:GetPosition(var_30_cvector);
	var_31_cvector = var_30_cvector - var_29_cvector;
	var_24_float = var_31_cvector | var_31_cvector;
	return 6;
}


func_1719(var_82_int)
{
	var_83_int = 0; var_84_int = 0;
	GetVariable("branch", var_84_int);
	var_87_bool = var_84_int == (int)0;
	if(var_87_bool != 0) {
		var_82_int = 1;
		return 2;
	EMIT "GOTO 0x6c6";
	}
	var_89_bool = var_84_int == (int)1;
	if(var_89_bool != 0) {
		var_82_int = 2;
		return 2;
	}
	var_82_int = 3;
	return 2;
}


func_1464(var_83_string)
{
	var_84_bool = 0; var_85_int = 0; var_86_bool = 0; var_87_int = 0; var_88_bool = 0; var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_bool = 0; var_97_float = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0);
	IsExisting3DSound(var_92_bool, var_83_string);
	var_100_bool = var_92_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_93_int = 0;

	Label_1470:
		var_102_int = var_93_int + (int)1;
		var_103_int = var_83_string + var_102_int;
		IsExisting3DSound(var_94_bool, var_103_int);
		var_104_bool = var_94_bool == 0; //@nz
		if(var_104_bool != 0) {
		} else {
			var_93_int = var_93_int + (int)1;
			goto Label_1470;
		}
		var_105_bool = var_93_int == 0; //@nz
		if(var_105_bool != 0) {
			return 16;
		}
		irand(var_95_int, var_93_int);
		var_107_int = var_95_int + (int)1;
		var_83_string = var_83_string + var_107_int;
	}
	Is3DSoundLoaded(var_96_bool, var_83_string);
	var_108_bool = var_96_bool;
	if(var_108_bool != 0) {
		GetEyesHeight(var_97_float);
		GetDirection(var_98_cvector);
		var_99_cvector = var_98_cvector * (int)50;
		var_110_float = GetByIndex(var_99_cvector, 1);
		var_110_float = var_110_float + var_97_float;
		SetByIndex(var_99_cvector, 1) = var_110_float;
		PlayGlobalSound(var_83_string, var_99_cvector);
	}
	return 16;
	
}


func_697()
{
	return 0;
}


func_699(var_180_object, var_181_bool)
{
	var_185_bool = var_181_bool;
	if(var_185_bool != 0) {
		SetTimer((int)100, (float)1.0);
	}
	var_188_object = Obj();
	var_180_object = var_188_object;
	func_762(var_184_bool, var_180_object, var_181_bool, var_188_object);
	return 0;
}


func_1085(var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0;
	IsPlayerActor(var_17_object, var_19_bool);
	var_19_bool = var_16_bool;
	return 2;
}


func_1599(var_27_float)
{
	var_28_object = Obj(); var_29_object = Obj();
	CreateFloatVector(var_29_object);
	@@var_29_object:add(var_27_float);
	SendWorldWndMessage((int)16, var_29_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1090(var_39_bool, var_40_object, var_41_string)
{
	var_42_bool = 0; var_43_bool = 0;
	var_46_bool = IsFuncExist(var_40_object, "HasProperty", (int)2);
	var_47_bool = var_46_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_39_bool = 0;
		return 2;
	}
	@@var_40_object:HasProperty(var_41_string, var_43_bool);
	var_43_bool = var_39_bool;
	return 2;
}


func_835(var_0_object, var_1_object, var_2_object, var_106_int)
{
	var_107_cvector = CVector(0,0,0); var_108_float = 0; var_109_cvector = CVector(0,0,0); var_110_float = 0; var_111_cvector = CVector(0,0,0); var_112_float = 0; var_113_cvector = CVector(0,0,0); var_114_float = 0;
	var_116_bool = var_106_int != (int)120;
	if(var_116_bool != 0) {
		return 8;
	}
	var_117_bool = var_0_object == 0; //@ne
	if(var_117_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_111_cvector);
		FindDirLength(var_112_float, var_111_cvector, (float)7000.0);
		var_120_cvector = CVector(0,0,0); var_121_float = 0;
		func_732(var_114_float, var_120_cvector, (float)1.7453293800354004);
		var_120_cvector = var_113_cvector;
		var_114_float = var_113_cvector | var_113_cvector;
		var_150_bool = 0;
		var_150_bool = 0;
		var_152_bool = var_114_float >= (float)2500.0;
		if(var_152_bool != 0) {
			var_153_bool = 0;
			var_154_float = var_112_float * var_112_float;
			var_156_float = var_154_float * (float)2.25;
			var_157_bool = var_114_float >= var_156_float;
			if(var_157_bool != 1) {
				var_158_bool = 0;
				func_903((bool)1, var_158_bool);
				if(var_158_bool != 1) {
					var_153_bool = 0;
				}
			}
			if(var_153_bool != 0) {
				var_150_bool = 1;
			}
		}
		if(var_150_bool == 0) goto Label_886;
		Stop();
		var_178_cvector = CVector(0,0,0);
		func_1065(var_178_cvector);
		var_1_object = var_178_cvector + var_113_cvector;
	}
Label_886:
	return 8;
	
}


func_454(var_0_object, var_1_object, var_4_bool, var_18_bool)
{
	var_19_float = 0; var_20_float = 0;
	var_21_bool = var_4_bool == 0; //@ne
	if(var_21_bool != 0) {
		var_18_bool = 0;
		return 2;
	}
	var_22_float = 0; var_23_object = Obj();
	var_23_object = var_4_bool;
	func_1077(var_22_float, var_23_object);
	var_20_float = sqrt(var_22_float);
	var_30_object = var_2_object;
	if(var_30_object != 0) {
		var_20_float = var_20_float - var_1_object;
	}
	var_18_bool = var_20_float < var_0_object;
	return 2;
}


func_1736()
{
	var_18_object = Obj(); var_19_float = 0; var_20_object = Obj(); var_21_float = 0;
	FindActor(var_20_object, "player");
	var_23_object = var_20_object;
	if(var_23_object != 0) {
		var_24_float = 0; var_25_object = Obj();
		var_20_object = var_25_object;
		func_1077(var_24_float, var_25_object);
		var_33_bool = var_24_float <= (float)640000.0;
		if(var_33_bool != 0) {
			var_34_float = 0; var_35_object = Obj(); var_36_float = 0; var_37_int = 0;
			var_20_object = var_35_object;
			func_1124(var_34_float, var_35_object, (float)0.05000000074505806, (int)0);
			var_34_float = var_21_float;
			ReportHit(var_20_object, (int)6, var_21_float, (float)0.05000000074505806);
		}
	}
	return 4;
}
EMIT "Stack[-2] = 0";


func_1609(var_15_bool, var_16_string, var_17_string)
{
	var_18_object = Obj(); var_19_object = Obj();
	FindActor(var_19_object, var_16_string);
	var_20_bool = var_19_object == 0; //@ne
	if(var_20_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	Trigger(var_19_object, var_17_string);
	var_15_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_91_object, var_92_object)
{
	var_0_object = var_92_object;
	var_1_object = var_91_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_98_object = Obj(); var_99_object = Obj();
		var_98_object = var_1_object;
		var_99_object = var_0_object;
		func_1655();
		var_129_string = "";
		func_137(var_92_object, "Neutral");
		@@@var_0_object:SetMessage((int)526744);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)528787, (int)30200, (int)30199);
		@@@var_0_object:AddReply((int)528791, (int)30200, (int)30203);
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	var_153_bool = 0;
	func_1629(var_153_bool);
	if(var_153_bool != 0) {

	Label_111:
		lshWaitForAnimEnd();
		var_154_string = var_3_string;
		if(var_154_string != 0) {
		} else {
			var_155_string = "";
			var_155_string = var_2_object;
			func_1415(var_155_string);
			goto Label_111;
	}
		PlayAnimation("all", "idle");

	Label_126:
		WaitForAnimEnd();
		var_168_string = var_3_string;
		if(var_168_string != 0) {
			goto Label_136;
		}
		PlayAnimation("all", "idle");
		goto Label_126;
	}
	goto Label_136;
	
Label_136:
	return 0;
	
}


func_587()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_585(var_112_bool)
{
	var_112_bool = 1;
	return 0;
}


func_1102(var_31_bool, var_32_object, var_33_string, var_34_float, var_35_float, var_36_float)
{
	var_37_float = 0; var_38_float = 0;
	var_39_bool = 0; var_40_object = Obj(); var_41_string = "";
	var_32_object = var_40_object;
	var_33_string = var_41_string;
	func_1090(var_39_bool, var_40_object, var_41_string);
	var_48_bool = var_39_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_31_bool = 0;
		return 2;
	}
	@@var_32_object:GetProperty(var_33_string, var_38_float);
	var_49_float = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0;
	var_50_float = var_38_float + var_34_float;
	var_35_float = var_51_float;
	var_36_float = var_52_float;
	func_1528(var_49_float, var_50_float, var_51_float, var_52_float);
	@@var_32_object:SetProperty(var_33_string, var_49_float);
	var_31_bool = 1;
	return 2;
}


func_1621(var_79_int)
{
	var_79_int = 515595;
	return 0;
}


func_1623(var_78_int)
{
	var_78_int = 512611;
	return 0;
}


func_1625(var_80_string)
{
	var_80_string = "ui/NPC_Albinos.png";
	return 0;
}


func_1241(var_19_object, var_20_int, var_21_float)
{
	var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_int = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_int = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_int = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0);
	var_40_bool = 0;
	var_40_bool = 0;
	var_41_bool = 0;
	var_41_bool = 0;
	var_42_object = var_19_object;
	if(var_42_object != 0) {
		var_44_bool = var_20_int != (int)4;
		if(var_44_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		var_46_bool = var_20_int != (int)5;
		if(var_46_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
		var_49_cvector = CVector(0,0,0); var_50_object = Obj();
		var_19_object = var_50_object;
		func_1070(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_1511(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		CreateVectorVector(var_32_object);
		var_33_int = 1;

	Label_1270:
		var_61_int = "hit" + var_33_int;
		GetGeometryLocator(var_61_int, var_34_bool, var_35_cvector, var_36_cvector);
		var_62_bool = var_34_bool == 0; //@nz
		if(var_62_bool != 0) {
		} else {
			var_110_int = var_36_cvector | var_31_cvector;
			var_112_bool = var_110_int >= (float)0.7071067690849304;
			if(var_112_bool != 0) {
				@@var_32_object:add(var_35_cvector);
			}
			var_33_int = var_33_int + (int)1;
			goto Label_1270;
		}
		@@var_32_object:size(var_37_int);
		var_63_int = var_37_int;
		if(var_63_int != 0) {
			irand(var_38_int, var_37_int);
			@@var_32_object:get(var_39_cvector, var_38_int);
			var_64_object = Obj(); var_65_int = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
			var_19_object = var_64_object;
			var_20_int = var_65_int;
			var_21_float = var_66_float;
			var_39_cvector = var_67_cvector;
			var_68_cvector = -var_31_cvector;
			func_1309(var_66_float, var_67_cvector, var_68_cvector);
			return 18;
		}
		var_32_object = 0;
	}
	var_109_object = Obj();
	var_19_object = var_109_object;
	func_1197(var_109_object);
	return 18;
	
}


func_1627(var_81_string)
{
	var_81_string = "ui/NPC_Albinos_b.png";
	return 0;
}


func_732(var_0_object, var_120_cvector, var_121_float)
{
	var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_float = 0; var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0); var_133_float = 0;
	GetPosition(var_128_cvector);
	@@@var_0_object:GetPosition(var_129_cvector);
	GetDirection(var_130_cvector);
	var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0);
	var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0);
	var_137_cvector = var_128_cvector - var_129_cvector;
	func_1511(var_136_cvector, var_137_cvector);
	var_144_float = var_130_cvector * (float)0.75;
	var_135_cvector = var_136_cvector + var_144_float;
	func_1511(var_134_cvector, var_135_cvector);
	var_134_cvector = var_131_cvector;
	FindLongestDir(var_132_cvector, var_133_float, var_131_cvector, var_121_float, (int)32, (float)7000.0);
	var_133_float = var_133_float - (int)100;
	var_149_bool = var_133_float < (int)0;
	if(var_149_bool != 0) {
		var_133_float = 0;
	}
	var_120_cvector = var_132_cvector * var_133_float;
	return 12;
}


func_1629(var_73_bool)
{
	var_73_bool = 0;
	return 0;
}


func_1631(var_93_string, var_94_int)
{
	var_95_string = ""; var_96_string = "";
	var_97_int = var_94_int;
	if(var_97_int != 0) {
		"idle" = "idle" + var_94_int;
	}
	var_96_string = var_93_string;
	return 2;
}


func_1505(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	self(var_19_object);
	var_19_object = var_17_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1762(var_58_object)
{
	var_59_object = Obj();
	var_58_object = var_59_object;
	TaskCall(5);
	func_919(var_59_object);
	TaskReturn();
	return 0;
}


func_762(var_0_object, var_1_object, var_2_object, var_188_object)
{
	var_189_cvector = CVector(0,0,0); var_190_float = 0; var_191_bool = 0; var_192_cvector = CVector(0,0,0); var_193_float = 0; var_194_cvector = CVector(0,0,0); var_195_float = 0; var_196_bool = 0; var_197_cvector = CVector(0,0,0); var_198_float = 0;
	var_0_object = var_188_object;
	var_199_cvector = CVector(0,0,0); var_200_float = 0;
	func_732(var_198_float, var_199_cvector, (float)1.7453293800354004);
	var_199_cvector = var_194_cvector;
	var_195_float = var_194_cvector | var_194_cvector;
	var_225_bool = var_195_float < (float)2500.0;
	if(var_225_bool != 0) {
		var_226_cvector = CVector(0,0,0); var_227_float = 0;
		func_732(var_198_float, var_226_cvector, (float)2.6179938316345215);
		var_226_cvector = var_194_cvector;
		var_195_float = var_194_cvector | var_194_cvector;
		var_229_bool = var_195_float < (float)2500.0;
		if(var_229_bool != 0) {
			var_231_float = sqrt(var_195_float);
			var_232_int = "Can't retreat, distance: " + var_231_float;
			Trace(var_232_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_234_float = GetByIndex(var_194_cvector, 0);
	var_235_float = GetByIndex(var_194_cvector, 2);
	Rotate(var_234_float, var_235_float);
	var_236_cvector = CVector(0,0,0);
	func_1065(var_236_cvector);
	var_1_object = var_236_cvector + var_194_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_804:
	MovePoint(var_1_object, (int)1, var_196_bool);
	var_242_bool = var_196_bool;
	if(var_242_bool != 0) {
		var_243_bool = var_0_object == 0; //@ne
		if(var_243_bool != 0) {
			goto Label_834;
		EMIT "GOTO 0x340";

		Label_834:
			return 10;
		}
		var_244_cvector = CVector(0,0,0); var_245_float = 0;
		func_732(var_198_float, var_244_cvector, (float)2.6179938316345215);
		var_244_cvector = var_197_cvector;
		var_198_float = var_197_cvector | var_197_cvector;
		var_247_bool = var_198_float >= (float)2500.0;
		if(var_247_bool != 0) {
			var_248_cvector = CVector(0,0,0);
			func_1065(var_248_cvector);
			var_1_object = var_248_cvector + var_197_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_834;
		}
	}
	var_251_bool = var_2_object == 0; //@nz
	if(var_251_bool == 1) goto Label_804;
	
}


func_1124(var_34_float, var_35_object, var_36_float, var_37_int)
{
	var_38_int = 0; var_39_string = ""; var_40_int = 0; var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_int = 0; var_45_string = ""; var_46_int = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0;
	var_50_bool = 0; var_51_object = Obj(); var_52_string = "";
	var_35_object = var_51_object;
	func_1090(var_50_bool, var_51_object, "health");
	var_59_bool = var_50_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_34_float = 0.0;
		return 12;
	}
	var_60_bool = 0; var_61_object = Obj(); var_62_string = "";
	var_35_object = var_61_object;
	func_1090(var_60_bool, var_61_object, "armor");
	var_63_bool = var_60_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_44_int = 0;
	} else {
			@@var_35_object:GetProperty("armor", var_44_int);
	}
	var_65_string = ""; var_66_int = 0;
	var_37_int = var_66_int;
	func_1051(var_65_string, var_66_int);
	var_45_string = "armor_" + var_65_string;
	var_71_bool = 0; var_72_object = Obj(); var_73_string = "";
	var_35_object = var_72_object;
	var_45_string = var_73_string;
	func_1090(var_71_bool, var_72_object, var_73_string);
	var_74_bool = var_71_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_46_int = 0;
	} else {
		@@var_35_object:GetProperty(var_45_string, var_46_int);

	}
	var_75_float = 0; var_76_float = 0; var_77_float = 0;
	var_78_int = var_44_int + var_46_int;
	var_76_float = var_78_int / (float)100.0;
	func_1521(var_75_float, var_76_float, (float)1);
	var_75_float = var_47_float;
	@@var_35_object:GetProperty("health", var_48_float);
	var_83_int = (int)1 - var_47_float;
	var_49_float = var_36_float * var_83_int;
	var_85_float = 0; var_86_float = 0; var_87_float = 0; var_88_float = 0;
	var_86_float = var_48_float - var_49_float;
	func_1528(var_85_float, var_86_float, (float)0, (float)1);
	@@var_35_object:SetProperty("health", var_85_float);
	var_91_bool = 0; var_92_object = Obj();
	var_35_object = var_92_object;
	func_1085(var_91_bool, var_92_object);
	if(var_91_bool != 0) {
		var_95_float = 0;
		var_95_float = -var_49_float;
		func_1582(var_95_float);
	}
	var_49_float = var_34_float;
	return 12;
	
}


func_1638(var_87_int)
{
	var_88_int = 0; var_89_bool = 0; var_90_int = 0; var_91_bool = 0;
	var_90_int = 0;
	
Label_1640:
	var_93_string = ""; var_94_int = 0;
	var_90_int = var_94_int;
	func_1631(var_93_string, var_94_int);
	HasAnimation(var_91_bool, "all", var_93_string);
	var_98_bool = var_91_bool == 0; //@nz
	if(var_98_bool != 0) {
	} else {
		var_90_int = var_90_int + (int)1;
		goto Label_1640;
	}
	var_90_int = var_87_int;
	return 4;
	
}


func_1511(var_47_cvector, var_48_cvector)
{
	var_55_float = 0; var_56_float = 0;
	var_57_int = var_48_cvector | var_48_cvector;
	var_56_float = sqrt(var_57_int);
	var_58_float = 9.999999974752427e-07;
	var_59_bool = var_56_float < var_58_float;
	if(var_59_bool != 0) {
		var_47_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_47_cvector = var_48_cvector / var_56_float;
	return 2;
}


func_492(var_2_object, var_3_string)
{
	func_587();
	KillTimer((int)10);
	var_17_object = var_2_object;
	if(var_17_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_887(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1521(var_75_float, var_76_float, var_77_float)
{
	var_80_bool = var_76_float < var_77_float;
	if(var_80_bool != 0) {
		var_76_float = var_75_float;
	} else {
		var_77_float = var_75_float;
	}
	return 0;
	
}


func_1397()
{
	var_173_bool = 0; var_174_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_176_bool = 0;
	func_1629(var_176_bool);
	if(var_176_bool != 0) {
	} else {
		HasAnimationTrack(var_174_bool, "head");
		var_178_bool = var_174_bool;
		if(var_178_bool == 0) goto Label_1414;
		UnlookAsync("head");
	}
Label_1414:
	return 2;
	
}


func_1655()
{
	func_1665();
	var_123_bool = 0; var_124_string = ""; var_125_string = "";
	func_1609(var_123_bool, "quest_k6_03", "completed");
	return 0;
}


func_1528(var_49_float, var_50_float, var_51_float, var_52_float)
{
	var_53_bool = var_50_float < var_51_float;
	if(var_53_bool != 0) {
		var_51_float = var_49_float;
		return 0;
	}
	var_54_bool = var_50_float > var_52_float;
	if(var_54_bool != 0) {
		var_52_float = var_49_float;
		return 0;
	}
	var_50_float = var_49_float;
	return 0;
}


func_506()
{
	var_71_int = 0; var_72_int = 0; var_73_int = 0; var_74_int = 0; var_75_bool = 0; var_76_float = 0; var_77_bool = 0; var_78_int = 0; var_79_int = 0; var_80_int = 0; var_81_int = 0; var_82_bool = 0; var_83_float = 0; var_84_bool = 0;
	WaitForAnimEnd();
	var_85_bool = 0;
	func_1323(var_85_bool);
	var_86_bool = var_85_bool == 0; //@nz
	if(var_86_bool != 0) {
		return 14;
	}
	func_1638((int)0);
	var_87_int = var_78_int;
	var_79_int = 0;
	
Label_520:
	var_100_bool = 0;
	var_100_bool = 0;
	var_102_bool = var_79_int < (int)5;
	if(var_102_bool != 0) {
		var_103_bool = 0;
		func_1323(var_103_bool);
		if(var_103_bool != 0) {
			var_100_bool = 1;
		}
	}
	if(var_100_bool != 0) {
		irand(var_80_int, (int)3);
		var_106_bool = var_80_int == (int)0;
		if(var_106_bool != 0) {
			var_107_int = var_78_int;
			if(var_107_int == 0) goto Label_553;
			irand(var_81_int, var_78_int);
			var_109_string = ""; var_110_int = 0;
			var_81_int = var_110_int;
			func_1631(var_109_string, var_110_int);
			PlayAnimation("all", var_109_string);
			WaitForAnimEnd(var_82_bool);
			var_111_bool = var_82_bool == 0; //@nz
			if(var_111_bool != 0) {
			} else {
		} else {
				var_116_bool = var_80_int == (int)1;
				if(var_116_bool != 0) {
					rand(var_83_float, (int)4);
					var_119_int = var_83_float + (int)1;
					Sleep(var_119_int, var_84_bool);
					var_120_bool = var_84_bool == 0; //@nz
					if(var_120_bool != 0) {
						goto Label_582;
					}
					goto Label_571;
				}
				var_121_int = var_79_int;
				if(var_121_int == 0) goto Label_571;
				goto Label_582;
		}
		Label_571:
			var_112_bool = 0;
			func_585(var_112_bool);
			var_113_bool = var_112_bool == 0; //@nz
			if(var_113_bool != 0) {
				goto Label_582;
			}
			ResetAAS();
			var_79_int = var_79_int + (int)1;
			goto Label_520;

		}
	}
Label_582:
	ResetAAS();
	return 14;
	
}


func_1019(var_82_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_83_string = "";
	var_82_string = var_83_string;
	func_1464(var_83_string);
	PlayAnimation("all", var_82_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_82_string);
	RemoveEnvelope();
	return 0;
}


func_380()
{
	
Label_380:
	var_62_float = 0; var_63_float = 0;
	func_427(var_57_int, var_58_int, var_59_bool, var_60_bool, var_61_object, (float)300, (float)100);
	Sleep((int)3);
	goto Label_380;
}
EMIT "Return(); Pop(0)";


func_638(var_23_bool, var_24_string, var_25_int, var_26_bool)
{
	var_27_object = Obj(); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_object = Obj(); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0;
	GetScene(var_34_object);
	
Label_641:
	var_42_int = var_25_int + (int)1;
	var_43_int = var_24_string + var_42_int;
	@@var_34_object:GetLocator(var_43_int, var_37_bool, var_38_cvector, var_39_cvector);
	var_44_bool = var_37_bool == 0; //@nz
	if(var_44_bool != 0) {
	} else {
			var_39_cvector = var_35_cvector;
			MovePoint(var_38_cvector, var_26_bool, var_36_bool);
			var_51_bool = var_36_bool;
			if(var_51_bool != 0) {
				var_52_int = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
				var_25_int = var_52_int;
				var_38_cvector = var_53_cvector;
				var_39_cvector = var_54_cvector;
				func_697();
				var_25_int = var_25_int + (int)1;
			} else {
				var_56_object = var_0_object;
				if(var_56_object == 0) goto Label_667;
				var_23_bool = 0;
				goto Label_641;
			}
			return 14;
	}
	WaitForAnimEnd(var_36_bool);
	var_45_bool = var_36_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_46_object = var_0_object;
		if(var_46_object != 0) {
			var_23_bool = 0;
			return 14;
		}
	}
Label_676:
	var_47_float = GetByIndex(var_35_cvector, 0);
	var_48_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_47_float, var_48_float, var_40_bool);
	var_49_bool = var_40_bool;
	if(var_49_bool != 0) {
	} else {
		var_50_object = var_0_object;
		if(var_50_object != 0) {
			var_23_bool = 0;
			goto Label_676;
		}
		return 14;

	}
	var_23_bool = 1;
	return 14;
	
}
EMIT "Stack[-7] = 0";


