// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,Hold/0,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetScene/1,GetVariable/2,MovePoint/3,Rotate/3,Stop/0,GetPosition/1,GetDirection/1,FindLongestDir/6,Trace/1,Rotate/2,FindDirLength/3,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsPlayerActor/2,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,ReportHit/4,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_k5_03|W:abinos_unload|W:player|W:head|A:RemoveStationaryActor|W:pt_k5q03_albinos_path|A:GetLocator|W:albinos_retreated|A:GetPosition|W:Can't retreat, distance: |W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:reputation|W:ui/NPC_Albinos.png|W:ui/NPC_Albinos_b.png|W:completed|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x29a
// @RUN_TASK: 3
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa4 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x1d0 vars=object
// @EVENT_17: op=0x1e2 vars=object
// @EVENT_41: op=0x1e4 vars=object
// @EVENT_6: op=0x1ed vars=
// @EVENT_7: op=0x21f vars=int
// @TASK_3: vars=bool,int params=0
// @EVENT_17: op=0x2b5 vars=object
// @EVENT_41: op=0x2b7 vars=object
// @EVENT_6: op=0x2c0 vars=
// @TASK_4: vars=object,cvector,bool params=2
// @EVENT_6: op=0x311 vars=
// @EVENT_7: op=0x319 vars=int
// @EVENT_41: op=0x3c8 vars=object
// @TASK_5: vars= params=1
// @EVENT_22: op=0x45f vars=object,int,float,float
// @EVENT_16: op=0x461 vars=object,string
// @EVENT_41: op=0x463 vars=object
// @STANDALONE_EVENT_22: op=0x734 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x73c vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x746 vars=object,string
// @STANDALONE_EVENT_41: op=0x753 vars=object
// @PE: 0x4a,0x8e,0xa4,0x1d0,0x1e2,0x1e4,0x1f5,0x21f,0x236,0x2b5,0x2b7,0x303,0x305,0x319,0x3c8,0x3e1,0x445,0x45f,0x461,0x463,0x465,0x63b,0x642,0x64d,0x655,0x6c1,0x72c,0x734,0x73c,0x753

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_int, var_14_object, var_15_cvector, var_16_bool)
{
	if((int)1 != 0) {
		func_1531();
		var_20_bool = var_15_cvector == (int)27235;
		if(var_20_bool != 0) {
			var_21_object = Obj(); var_22_object = Obj();
			var_21_object = var_1_object;
			var_22_object = var_0_object;
			func_1729();
			var_52_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525951);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525952, (int)27237, (int)27236);
			@@@var_0_object:AddReply((int)542446, (int)27239, (int)44835);
			@@@var_0_object:AddReply((int)542447, (int)27241, (int)44837);
			return 0;
		}
		var_80_bool = var_15_cvector == (int)27237;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525953);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525954, (int)27239, (int)27238);
			@@@var_0_object:AddReply((int)542448, (int)44839, (int)44838);
			return 0;
		}
		var_90_bool = var_15_cvector == (int)44839;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542449);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542450, (int)44841, (int)44840);
			return 0;
		}
		var_97_bool = var_15_cvector == (int)44841;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542451);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542452, (int)27239, (int)44842);
			@@@var_0_object:AddReply((int)542453, (int)27241, (int)44844);
			return 0;
		}
		var_107_bool = var_15_cvector == (int)27239;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525955);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525956, (int)27241, (int)27240);
			@@@var_0_object:AddReply((int)529036, (int)27241, (int)30476);
			return 0;
		}
		var_117_bool = var_15_cvector == (int)27241;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525957);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525958, (int)27243, (int)27242);
			@@@var_0_object:AddReply((int)542454, (int)44847, (int)44846);
			return 0;
		}
		var_127_bool = var_15_cvector == (int)44847;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542455);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542456, (int)27245, (int)44848);
			return 0;
		}
		var_134_bool = var_15_cvector == (int)27243;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525959);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525960, (int)27245, (int)27244);
			return 0;
		}
		var_141_bool = var_15_cvector == (int)27245;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525961);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525962, (int)27247, (int)27246);
			@@@var_0_object:AddReply((int)542457, (int)-1, (int)44850);
			return 0;
		}
		var_151_bool = var_15_cvector == (int)27247;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525963);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525964, (int)27249, (int)27248);
			@@@var_0_object:AddReply((int)542458, (int)44852, (int)44851);
			return 0;
		}
		var_161_bool = var_15_cvector == (int)44852;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)542459);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542460, (int)-1, (int)44853);
			@@@var_0_object:AddReply((int)542461, (int)-1, (int)44854);
			return 0;
		}
		var_171_bool = var_15_cvector == (int)27249;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525965);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525966, (int)-1, (int)27250);
			@@@var_0_object:AddReply((int)542462, (int)-1, (int)44855);
			return 0;
		}
		var_3_string = true;
		var_180_bool = 0;
		func_1703(var_180_bool);
		if(var_180_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa5";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	func_566(var_14_cvector, var_15_bool);
	var_19_int = 0; var_20_object = Obj();
	var_15_bool = var_20_object;
	TaskCall(0);
	func_0(var_21_object, var_19_int, var_20_object);
	TaskReturn();
	var_183_object = Obj(); var_184_bool = 0;
	var_15_bool = var_183_object;
	TaskCall(4);
	func_773(var_183_object, (bool)0);
	TaskReturn();
	return 0;
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	func_566(var_14_cvector, var_15_bool);
	var_15_bool = Obj();
	func_1875();
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = ""; var_17_string = "";
	func_1683(var_15_bool, "quest_k5_03", "abinos_unload");
	Hold();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	var_17_bool = var_15_bool == (int)10;
	if(var_17_bool != 0) {
		var_18_bool = 0;
		func_528(var_13_object, var_14_cvector, var_15_bool, var_18_bool);
		if(var_18_bool != 0) {
			var_31_bool = var_2_object == 0; //@nz
			if(var_31_bool != 0) {
				var_32_object = Obj();
				var_32_object = var_4_bool;
				func_1520(var_32_object);
				var_2_object = true;
			}
		} else {
			var_39_object = var_2_object;
			if(var_39_object == 0) goto Label_565;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_565:
	return 0;
	
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_object, var_14_cvector, var_15_bool)
{
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_object, var_14_cvector, var_15_bool)
{
	func_765(var_15_bool);
	var_15_bool = Obj();
	func_1875();
	return 0;
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = ""; var_17_string = "";
	func_1683(var_15_bool, "quest_k5_03", "abinos_unload");
	Hold();
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = ""; var_17_string = "";
	func_1683(var_15_bool, "quest_k5_03", "albinos_retreated");
	Hold();
	return 0;
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_int)
{
	var_17_bool = var_15_int == (int)100;
	if(var_17_bool != 0) {
		func_1810();
	} else {
		var_106_int = 0;
		var_15_int = var_106_int;
		func_909(var_13_cvector, var_14_bool, var_15_int, var_106_int);
	}
	return 0;
	
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object)
{
	func_961(var_15_object);
	var_15_object = Obj();
	func_1875();
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
	func_1315(var_19_object, var_20_int, var_21_float);
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
	func_1383(var_23_float, var_24_cvector, var_25_cvector);
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
	func_1159(var_16_bool, var_17_object);
	if(var_16_bool != 0) {
		var_20_bool = 0; var_21_object = Obj(); var_22_float = 0;
		var_15_object = var_21_object;
		func_1621(var_20_bool, var_21_object, (float)-0.10000000149011612);
	}
	var_58_object = Obj();
	var_15_object = var_58_object;
	func_1836(var_58_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_object = Obj(); var_16_object = Obj();
	GetScene(var_16_object);
	var_17_object = Obj();
	func_1579(var_17_object);
	@@var_16_object:RemoveStationaryActor(var_17_object);
	GetVariable("pt_k5q03_albinos_path", var_1_object);
	var_22_bool = var_1_object != (int)-1;
	if(var_22_bool != 0) {
		var_23_bool = 0; var_24_string = ""; var_25_int = 0; var_26_bool = 0;
		var_25_int = var_1_object;
		func_712(var_23_bool, "pt_k5q03_albinos_path", var_25_int, (bool)1);
	}
	TaskCall(2);
	func_454();
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
	func_1402(var_30_bool, var_31_object, (float)70.0);
	var_77_bool = var_30_bool == 0; //@nz
	if(var_77_bool != 0) {
		var_19_int = -2;
		return 8;
	}
	CreateDialog(var_26_object);
	var_78_int = 0;
	func_1697(var_78_int);
	@@var_26_object:SetNPCName(var_78_int);
	var_79_int = 0;
	func_1695(var_79_int);
	@@var_26_object:SetNPCDescription(var_79_int);
	var_80_string = "";
	func_1699(var_80_string);
	@@var_26_object:SetPhoto(var_80_string);
	var_81_string = "";
	func_1701(var_81_string);
	@@var_26_object:SetPhoto2(var_81_string);
	var_82_int = 0;
	func_1793(var_82_int);
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
	var_174_bool = var_29_bool == 0; //@nz
	if(var_174_bool != 0) {
		sync();
		@@var_26_object:IsDialogEnd(var_29_bool);
		goto Label_56;
	}
	var_20_object = Obj();
	func_1471();
	StopDialog(var_26_object);
	@@var_26_object:GetReturnValue((int)-1);
	var_28_int = var_19_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1793(var_82_int)
{
	var_83_int = 0; var_84_int = 0;
	GetVariable("branch", var_84_int);
	var_87_bool = var_84_int == (int)0;
	if(var_87_bool != 0) {
		var_82_int = 1;
		return 2;
	EMIT "GOTO 0x710";
	}
	var_89_bool = var_84_int == (int)1;
	if(var_89_bool != 0) {
		var_82_int = 2;
		return 2;
	}
	var_82_int = 3;
	return 2;
}


func_1538(var_83_string)
{
	var_84_bool = 0; var_85_int = 0; var_86_bool = 0; var_87_int = 0; var_88_bool = 0; var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_bool = 0; var_97_float = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0);
	IsExisting3DSound(var_92_bool, var_83_string);
	var_100_bool = var_92_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_93_int = 0;

	Label_1544:
		var_102_int = var_93_int + (int)1;
		var_103_int = var_83_string + var_102_int;
		IsExisting3DSound(var_94_bool, var_103_int);
		var_104_bool = var_94_bool == 0; //@nz
		if(var_104_bool != 0) {
		} else {
			var_93_int = var_93_int + (int)1;
			goto Label_1544;
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


func_771()
{
	return 0;
}


func_773(var_183_object, var_184_bool)
{
	var_188_bool = var_184_bool;
	if(var_188_bool != 0) {
		SetTimer((int)100, (float)1.0);
	}
	var_191_object = Obj();
	var_183_object = var_191_object;
	func_836(var_187_bool, var_183_object, var_184_bool, var_191_object);
	return 0;
}


func_1159(var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0;
	IsPlayerActor(var_17_object, var_19_bool);
	var_19_bool = var_16_bool;
	return 2;
}


func_1673(var_27_float)
{
	var_28_object = Obj(); var_29_object = Obj();
	CreateFloatVector(var_29_object);
	@@var_29_object:add(var_27_float);
	SendWorldWndMessage((int)16, var_29_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1164(var_39_bool, var_40_object, var_41_string)
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


func_909(var_0_object, var_1_object, var_2_object, var_106_int)
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
		func_806(var_114_float, var_120_cvector, (float)1.7453293800354004);
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
				func_977((bool)1, var_158_bool);
				if(var_158_bool != 1) {
					var_153_bool = 0;
				}
			}
			if(var_153_bool != 0) {
				var_150_bool = 1;
			}
		}
		if(var_150_bool == 0) goto Label_960;
		Stop();
		var_178_cvector = CVector(0,0,0);
		func_1139(var_178_cvector);
		var_1_object = var_178_cvector + var_113_cvector;
	}
Label_960:
	return 8;
	
}


func_142(var_2_object, var_129_string)
{
	var_130_bool = 0;
	func_1703(var_130_bool);
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
	func_1505(var_133_string, var_134_bool);
	var_2_object = var_129_string;
	return 0;
	
}


func_528(var_0_object, var_1_object, var_4_bool, var_18_bool)
{
	var_19_float = 0; var_20_float = 0;
	var_21_bool = var_4_bool == 0; //@ne
	if(var_21_bool != 0) {
		var_18_bool = 0;
		return 2;
	}
	var_22_float = 0; var_23_object = Obj();
	var_23_object = var_4_bool;
	func_1151(var_22_float, var_23_object);
	var_20_float = sqrt(var_22_float);
	var_30_object = var_2_object;
	if(var_30_object != 0) {
		var_20_float = var_20_float - var_1_object;
	}
	var_18_bool = var_20_float < var_0_object;
	return 2;
}


func_1810()
{
	var_18_object = Obj(); var_19_float = 0; var_20_object = Obj(); var_21_float = 0;
	FindActor(var_20_object, "player");
	var_23_object = var_20_object;
	if(var_23_object != 0) {
		var_24_float = 0; var_25_object = Obj();
		var_20_object = var_25_object;
		func_1151(var_24_float, var_25_object);
		var_33_bool = var_24_float <= (float)640000.0;
		if(var_33_bool != 0) {
			var_34_float = 0; var_35_object = Obj(); var_36_float = 0; var_37_int = 0;
			var_20_object = var_35_object;
			func_1198(var_34_float, var_35_object, (float)0.05000000074505806, (int)0);
			var_34_float = var_21_float;
			ReportHit(var_20_object, (int)6, var_21_float, (float)0.05000000074505806);
		}
	}
	return 4;
}
EMIT "Stack[-2] = 0";


func_1683(var_15_bool, var_16_string, var_17_string)
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


func_659(var_112_bool)
{
	var_112_bool = 1;
	return 0;
}


func_661()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1176(var_31_bool, var_32_object, var_33_string, var_34_float, var_35_float, var_36_float)
{
	var_37_float = 0; var_38_float = 0;
	var_39_bool = 0; var_40_object = Obj(); var_41_string = "";
	var_32_object = var_40_object;
	var_33_string = var_41_string;
	func_1164(var_39_bool, var_40_object, var_41_string);
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
	func_1602(var_49_float, var_50_float, var_51_float, var_52_float);
	@@var_32_object:SetProperty(var_33_string, var_49_float);
	var_31_bool = 1;
	return 2;
}


func_1695(var_79_int)
{
	var_79_int = 515595;
	return 0;
}


func_1697(var_78_int)
{
	var_78_int = 512611;
	return 0;
}


func_1699(var_80_string)
{
	var_80_string = "ui/NPC_Albinos.png";
	return 0;
}


func_1315(var_19_object, var_20_int, var_21_float)
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
		func_1144(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_1585(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		CreateVectorVector(var_32_object);
		var_33_int = 1;

	Label_1344:
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
			goto Label_1344;
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
			func_1383(var_66_float, var_67_cvector, var_68_cvector);
			return 18;
		}
		var_32_object = 0;
	}
	var_109_object = Obj();
	var_19_object = var_109_object;
	func_1271(var_109_object);
	return 18;
	
}


func_1701(var_81_string)
{
	var_81_string = "ui/NPC_Albinos_b.png";
	return 0;
}


func_806(var_0_object, var_120_cvector, var_121_float)
{
	var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_float = 0; var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0); var_133_float = 0;
	GetPosition(var_128_cvector);
	@@@var_0_object:GetPosition(var_129_cvector);
	GetDirection(var_130_cvector);
	var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0);
	var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0);
	var_137_cvector = var_128_cvector - var_129_cvector;
	func_1585(var_136_cvector, var_137_cvector);
	var_144_float = var_130_cvector * (float)0.75;
	var_135_cvector = var_136_cvector + var_144_float;
	func_1585(var_134_cvector, var_135_cvector);
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


func_1703(var_73_bool)
{
	var_73_bool = 0;
	return 0;
}


func_1705(var_93_string, var_94_int)
{
	var_95_string = ""; var_96_string = "";
	var_97_int = var_94_int;
	if(var_97_int != 0) {
		"idle" = "idle" + var_94_int;
	}
	var_96_string = var_93_string;
	return 2;
}


func_1579(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	self(var_19_object);
	var_19_object = var_17_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1836(var_58_object)
{
	var_59_object = Obj();
	var_58_object = var_59_object;
	TaskCall(5);
	func_993(var_59_object);
	TaskReturn();
	return 0;
}


func_1198(var_34_float, var_35_object, var_36_float, var_37_int)
{
	var_38_int = 0; var_39_string = ""; var_40_int = 0; var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_int = 0; var_45_string = ""; var_46_int = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0;
	var_50_bool = 0; var_51_object = Obj(); var_52_string = "";
	var_35_object = var_51_object;
	func_1164(var_50_bool, var_51_object, "health");
	var_59_bool = var_50_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_34_float = 0.0;
		return 12;
	}
	var_60_bool = 0; var_61_object = Obj(); var_62_string = "";
	var_35_object = var_61_object;
	func_1164(var_60_bool, var_61_object, "armor");
	var_63_bool = var_60_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_44_int = 0;
	} else {
			@@var_35_object:GetProperty("armor", var_44_int);
	}
	var_65_string = ""; var_66_int = 0;
	var_37_int = var_66_int;
	func_1125(var_65_string, var_66_int);
	var_45_string = "armor_" + var_65_string;
	var_71_bool = 0; var_72_object = Obj(); var_73_string = "";
	var_35_object = var_72_object;
	var_45_string = var_73_string;
	func_1164(var_71_bool, var_72_object, var_73_string);
	var_74_bool = var_71_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_46_int = 0;
	} else {
		@@var_35_object:GetProperty(var_45_string, var_46_int);

	}
	var_75_float = 0; var_76_float = 0; var_77_float = 0;
	var_78_int = var_44_int + var_46_int;
	var_76_float = var_78_int / (float)100.0;
	func_1595(var_75_float, var_76_float, (float)1);
	var_75_float = var_47_float;
	@@var_35_object:GetProperty("health", var_48_float);
	var_83_int = (int)1 - var_47_float;
	var_49_float = var_36_float * var_83_int;
	var_85_float = 0; var_86_float = 0; var_87_float = 0; var_88_float = 0;
	var_86_float = var_48_float - var_49_float;
	func_1602(var_85_float, var_86_float, (float)0, (float)1);
	@@var_35_object:SetProperty("health", var_85_float);
	var_91_bool = 0; var_92_object = Obj();
	var_35_object = var_92_object;
	func_1159(var_91_bool, var_92_object);
	if(var_91_bool != 0) {
		var_95_float = 0;
		var_95_float = -var_49_float;
		func_1656(var_95_float);
	}
	var_49_float = var_34_float;
	return 12;
	
}


func_1712(var_87_int)
{
	var_88_int = 0; var_89_bool = 0; var_90_int = 0; var_91_bool = 0;
	var_90_int = 0;
	
Label_1714:
	var_93_string = ""; var_94_int = 0;
	var_90_int = var_94_int;
	func_1705(var_93_string, var_94_int);
	HasAnimation(var_91_bool, "all", var_93_string);
	var_98_bool = var_91_bool == 0; //@nz
	if(var_98_bool != 0) {
	} else {
		var_90_int = var_90_int + (int)1;
		goto Label_1714;
	}
	var_90_int = var_87_int;
	return 4;
	
}


func_1585(var_47_cvector, var_48_cvector)
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


func_566(var_2_object, var_3_string)
{
	func_661();
	KillTimer((int)10);
	var_17_object = var_2_object;
	if(var_17_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_1595(var_75_float, var_76_float, var_77_float)
{
	var_80_bool = var_76_float < var_77_float;
	if(var_80_bool != 0) {
		var_76_float = var_75_float;
	} else {
		var_77_float = var_75_float;
	}
	return 0;
	
}


func_1471()
{
	var_176_bool = 0; var_177_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_179_bool = 0;
	func_1703(var_179_bool);
	if(var_179_bool != 0) {
	} else {
		HasAnimationTrack(var_177_bool, "head");
		var_181_bool = var_177_bool;
		if(var_181_bool == 0) goto Label_1488;
		UnlookAsync("head");
	}
Label_1488:
	return 2;
	
}


func_1729()
{
	func_1739();
	var_123_bool = 0; var_124_string = ""; var_125_string = "";
	func_1683(var_123_bool, "quest_k5_03", "completed");
	return 0;
}


func_961(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1602(var_49_float, var_50_float, var_51_float, var_52_float)
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


func_580()
{
	var_71_int = 0; var_72_int = 0; var_73_int = 0; var_74_int = 0; var_75_bool = 0; var_76_float = 0; var_77_bool = 0; var_78_int = 0; var_79_int = 0; var_80_int = 0; var_81_int = 0; var_82_bool = 0; var_83_float = 0; var_84_bool = 0;
	WaitForAnimEnd();
	var_85_bool = 0;
	func_1397(var_85_bool);
	var_86_bool = var_85_bool == 0; //@nz
	if(var_86_bool != 0) {
		return 14;
	}
	func_1712((int)0);
	var_87_int = var_78_int;
	var_79_int = 0;
	
Label_594:
	var_100_bool = 0;
	var_100_bool = 0;
	var_102_bool = var_79_int < (int)5;
	if(var_102_bool != 0) {
		var_103_bool = 0;
		func_1397(var_103_bool);
		if(var_103_bool != 0) {
			var_100_bool = 1;
		}
	}
	if(var_100_bool != 0) {
		irand(var_80_int, (int)3);
		var_106_bool = var_80_int == (int)0;
		if(var_106_bool != 0) {
			var_107_int = var_78_int;
			if(var_107_int == 0) goto Label_627;
			irand(var_81_int, var_78_int);
			var_109_string = ""; var_110_int = 0;
			var_81_int = var_110_int;
			func_1705(var_109_string, var_110_int);
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
						goto Label_656;
					}
					goto Label_645;
				}
				var_121_int = var_79_int;
				if(var_121_int == 0) goto Label_645;
				goto Label_656;
		}
		Label_645:
			var_112_bool = 0;
			func_659(var_112_bool);
			var_113_bool = var_112_bool == 0; //@nz
			if(var_113_bool != 0) {
				goto Label_656;
			}
			ResetAAS();
			var_79_int = var_79_int + (int)1;
			goto Label_594;

		}
	}
Label_656:
	ResetAAS();
	return 14;
	
}


func_836(var_0_object, var_1_object, var_2_object, var_191_object)
{
	var_192_cvector = CVector(0,0,0); var_193_float = 0; var_194_bool = 0; var_195_cvector = CVector(0,0,0); var_196_float = 0; var_197_cvector = CVector(0,0,0); var_198_float = 0; var_199_bool = 0; var_200_cvector = CVector(0,0,0); var_201_float = 0;
	var_0_object = var_191_object;
	var_202_cvector = CVector(0,0,0); var_203_float = 0;
	func_806(var_201_float, var_202_cvector, (float)1.7453293800354004);
	var_202_cvector = var_197_cvector;
	var_198_float = var_197_cvector | var_197_cvector;
	var_228_bool = var_198_float < (float)2500.0;
	if(var_228_bool != 0) {
		var_229_cvector = CVector(0,0,0); var_230_float = 0;
		func_806(var_201_float, var_229_cvector, (float)2.6179938316345215);
		var_229_cvector = var_197_cvector;
		var_198_float = var_197_cvector | var_197_cvector;
		var_232_bool = var_198_float < (float)2500.0;
		if(var_232_bool != 0) {
			var_234_float = sqrt(var_198_float);
			var_235_int = "Can't retreat, distance: " + var_234_float;
			Trace(var_235_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_237_float = GetByIndex(var_197_cvector, 0);
	var_238_float = GetByIndex(var_197_cvector, 2);
	Rotate(var_237_float, var_238_float);
	var_239_cvector = CVector(0,0,0);
	func_1139(var_239_cvector);
	var_1_object = var_239_cvector + var_197_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_878:
	MovePoint(var_1_object, (int)1, var_199_bool);
	var_245_bool = var_199_bool;
	if(var_245_bool != 0) {
		var_246_bool = var_0_object == 0; //@ne
		if(var_246_bool != 0) {
			goto Label_908;
		EMIT "GOTO 0x38a";

		Label_908:
			return 10;
		}
		var_247_cvector = CVector(0,0,0); var_248_float = 0;
		func_806(var_201_float, var_247_cvector, (float)2.6179938316345215);
		var_247_cvector = var_200_cvector;
		var_201_float = var_200_cvector | var_200_cvector;
		var_250_bool = var_201_float >= (float)2500.0;
		if(var_250_bool != 0) {
			var_251_cvector = CVector(0,0,0);
			func_1139(var_251_cvector);
			var_1_object = var_251_cvector + var_200_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_908;
		}
	}
	var_254_bool = var_2_object == 0; //@nz
	if(var_254_bool == 1) goto Label_878;
	
}


func_454()
{
	
Label_454:
	var_62_float = 0; var_63_float = 0;
	func_501(var_57_int, var_58_int, var_59_bool, var_60_bool, var_61_object, (float)300, (float)100);
	Sleep((int)3);
	goto Label_454;
}
EMIT "Return(); Pop(0)";


func_1093(var_82_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_83_string = "";
	var_82_string = var_83_string;
	func_1538(var_83_string);
	PlayAnimation("all", var_82_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_82_string);
	RemoveEnvelope();
	return 0;
}


func_712(var_23_bool, var_24_string, var_25_int, var_26_bool)
{
	var_27_object = Obj(); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_object = Obj(); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0;
	GetScene(var_34_object);
	
Label_715:
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
				func_771();
				var_25_int = var_25_int + (int)1;
			} else {
				var_56_object = var_0_object;
				if(var_56_object == 0) goto Label_741;
				var_23_bool = 0;
				goto Label_715;
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
Label_750:
	var_47_float = GetByIndex(var_35_cvector, 0);
	var_48_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_47_float, var_48_float, var_40_bool);
	var_49_bool = var_40_bool;
	if(var_49_bool != 0) {
	} else {
		var_50_object = var_0_object;
		if(var_50_object != 0) {
			var_23_bool = 0;
			goto Label_750;
		}
		return 14;

	}
	var_23_bool = 1;
	return 14;
	
}
EMIT "Stack[-7] = 0";


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_91_object, var_92_object)
{
	var_0_object = var_92_object;
	var_1_object = var_91_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_98_object = Obj(); var_99_object = Obj();
		var_98_object = var_1_object;
		var_99_object = var_0_object;
		func_1729();
		var_129_string = "";
		func_142(var_92_object, "Neutral");
		@@@var_0_object:SetMessage((int)525951);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525952, (int)27237, (int)27236);
		@@@var_0_object:AddReply((int)542446, (int)27239, (int)44835);
		@@@var_0_object:AddReply((int)542447, (int)27241, (int)44837);
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	var_156_bool = 0;
	func_1703(var_156_bool);
	if(var_156_bool != 0) {

	Label_116:
		lshWaitForAnimEnd();
		var_157_string = var_3_string;
		if(var_157_string != 0) {
		} else {
			var_158_string = "";
			var_158_string = var_2_object;
			func_1489(var_158_string);
			goto Label_116;
	}
		PlayAnimation("all", "idle");

	Label_131:
		WaitForAnimEnd();
		var_171_string = var_3_string;
		if(var_171_string != 0) {
			goto Label_141;
		}
		PlayAnimation("all", "idle");
		goto Label_131;
	}
	goto Label_141;
	
Label_141:
	return 0;
	
}


func_1739()
{
	var_100_object = Obj(); var_101_object = Obj();
	CreateDiaryEntry(var_101_object, (int)407, (int)2, (int)526025);
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0;
	var_101_object = var_106_object;
	func_1765(var_105_bool, var_106_object, (int)405);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1613(var_169_float, var_170_cvector, var_171_cvector)
{
	var_172_int = var_170_cvector | var_171_cvector;
	var_173_int = var_170_cvector | var_170_cvector;
	var_174_int = var_171_cvector | var_171_cvector;
	var_175_float = var_173_int * var_174_int;
	var_176_float = sqrt(var_175_float);
	var_169_float = var_172_int / var_176_float;
	return 0;
}


func_1489(var_158_string)
{
	var_159_bool = 0; var_160_float = 0; var_161_float = 0; var_162_bool = 0; var_163_float = 0; var_164_float = 0;
	lshHasAnimation(var_162_bool, var_158_string);
	var_165_bool = var_162_bool;
	if(var_165_bool != 0) {
		lshGetAnimTimes(var_158_string, var_163_float, var_164_float);
		lshPlayAnimation(var_163_float, var_164_float, (bool)0);
	} else {
		var_168_int = "Can't find lsh animation : " + var_158_string;
		Trace(var_168_int);
	}
	return 6;
	
}


func_977(var_0_object, var_158_bool)
{
	var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0);
	GetDirection(var_161_cvector);
	var_163_cvector = CVector(0,0,0); var_164_object = Obj();
	var_164_object = var_0_object;
	func_1144(var_163_cvector, var_164_object);
	var_163_cvector = var_162_cvector;
	var_169_float = 0; var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0);
	var_161_cvector = var_170_cvector;
	var_162_cvector = var_171_cvector;
	func_1613(var_169_float, var_170_cvector, var_171_cvector);
	var_158_bool = var_169_float >= (float)-0.3420201241970062;
	return 4;
}


func_1621(var_20_bool, var_21_object, var_22_float)
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
			goto Label_1642;
		}
		var_20_bool = 0;
		return 0;
	}
Label_1642:
	var_27_float = 0;
	var_22_float = var_27_float;
	func_1673(var_27_float);
	var_31_bool = 0; var_32_object = Obj(); var_33_string = ""; var_34_float = 0; var_35_float = 0; var_36_float = 0;
	var_21_object = var_32_object;
	var_22_float = var_34_float;
	func_1176(var_31_bool, var_32_object, "reputation", var_34_float, (float)0, (float)1);
	var_20_bool = 1;
	return 0;
	
}


func_1752(var_114_object)
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


func_1505(var_133_string, var_134_bool)
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


func_993(var_59_object)
{
	var_60_object = Obj();
	var_59_object = var_60_object;
	func_1002(var_60_object);
	
Label_998:
	Hold();
	goto Label_998;
}
EMIT "Return(); Pop(0)";


func_1125(var_65_string, var_66_int)
{
	var_68_bool = var_66_int == (int)2;
	if(var_68_bool != 0) {
		var_65_string = "fire";
		return 0;
	EMIT "GOTO 0x471";
	}
	var_70_bool = var_66_int == (int)1;
	if(var_70_bool != 0) {
		var_65_string = "bullet";
		return 0;
	}
	var_65_string = "phys";
	return 0;
}


func_1765(var_105_bool, var_106_object, var_107_int)
{
	var_108_object = Obj(); var_109_object = Obj(); var_110_int = 0; var_111_object = Obj(); var_112_object = Obj(); var_113_int = 0;
	func_1752(Obj());
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


func_1383(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj();
	GetScene(var_28_object);
	AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	var_32_object = Obj();
	var_21_object = var_32_object;
	func_1271(var_32_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1002(var_60_object)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_string = ""; var_66_object = Obj(); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_string = ""; var_76_object = Obj(); var_77_bool = 0; var_78_bool = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0);
	var_81_bool = var_60_object == 0; //@ne
	if(var_81_bool != 0) {
		var_82_string = "";
		func_1093("fdie");
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
		func_1538(var_135_string);
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


func_1520(var_32_object)
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


func_1139(var_178_cvector)
{
	var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0);
	GetPosition(var_180_cvector);
	var_180_cvector = var_178_cvector;
	return 2;
}


func_501(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_62_float, var_63_float)
{
	var_64_bool = 0;
	func_1397(var_64_bool);
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
	func_580();
	var_122_bool = var_3_string == 0; //@nz
	if(var_122_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1397(var_64_bool)
{
	var_65_bool = 0; var_66_bool = 0;
	IsLoaded(var_66_bool);
	var_66_bool = var_64_bool;
	return 2;
}


func_1271(var_32_object)
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


func_1656(var_95_float)
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


func_1402(var_30_bool, var_31_object, var_32_float)
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
	func_1585(var_57_cvector, var_58_cvector);
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
	func_1703(var_73_bool);
	if(var_73_bool != 0) {
	} else {
		HasAnimationTrack(var_50_bool, "head");
		var_75_bool = var_50_bool;
		if(var_75_bool == 0) goto Label_1465;
		LookAsyncCamera("head");
	}
Label_1465:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_30_bool = 1;
	return 18;
	
}


func_1531()
{
	var_18_bool = 0;
	func_1703(var_18_bool);
	if(var_18_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1144(var_49_cvector, var_50_object)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	GetPosition(var_53_cvector);
	@@var_50_object:GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
	return 4;
}


func_765(var_0_object)
{
	Stop();
	StopAnimation();
	var_0_object = true;
	return 0;
}


func_1151(var_24_float, var_25_object)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0);
	GetPosition(var_29_cvector);
	@@var_25_object:GetPosition(var_30_cvector);
	var_31_cvector = var_30_cvector - var_29_cvector;
	var_24_float = var_31_cvector | var_31_cvector;
	return 6;
}


