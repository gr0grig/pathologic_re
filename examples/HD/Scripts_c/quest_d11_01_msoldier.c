// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,WaitForAnimEnd/1,SetProperty/2,SetVariable/2,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,SetRTEnvelope/2,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,GetScene/1,AddActorByType/6,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,GetInvItemByName/2,Trigger/2,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,WorkWithCorpse/1,Barter/1,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:attack_begin2|W:attack_end2|W:quest_d11_01|W:teleport|W:soldier_attack|W:health|W:d11q01|W:restore_andrei|W:player|W:head|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fhit|W:bhit|W:hit_react|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |A:HasItem|A:SetReturnValue|W:burah_serum|A:RemoveItemByType|W:playsound|W:giveitem|W:ood11Officer1|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png|A:RemoveStationaryActor
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x18c
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa4 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x198 vars=object
// @EVENT_17: op=0x1bb vars=object
// @EVENT_7: op=0x1ff vars=int
// @TASK_3: vars= params=1
// @EVENT_0: op=0x289 vars=object
// @EVENT_22: op=0x308 vars=object,int,float,float
// @EVENT_16: op=0x30a vars=object,string
// @EVENT_41: op=0x30c vars=object
// @STANDALONE_EVENT_22: op=0x57a vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x582 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x58c vars=object,string
// @STANDALONE_EVENT_41: op=0x59c vars=object
// @PE: 0x4a,0x8e,0xa4,0x1bb,0x1d5,0x1ff,0x216,0x27a,0x2ee,0x308,0x30a,0x30c,0x491,0x4a8,0x4b9,0x4bf,0x4cf,0x4d5,0x4e0,0x553,0x57a,0x582,0x59c

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_1057();
		var_15_bool = var_11_object == (int)42007;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_1186(var_17_object);
			var_22_object = Obj(); var_23_object = Obj();
			var_22_object = var_1_object;
			var_23_object = var_0_object;
			func_1192(var_23_object);
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_1209();
		}
		var_61_bool = var_11_object == (int)42008;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_1169(var_63_object);
		}
		var_79_bool = var_11_object == (int)15679;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_1169(var_81_object);
		}
		var_83_bool = var_11_object == (int)42005;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_1215();
		}
		var_95_bool = var_10_bool == (int)15673;
		if(var_95_bool != 0) {
			var_96_bool = 0; var_97_object = Obj();
			var_97_object = var_1_object;
			func_1248(var_97_object);
			if(var_96_bool != 0) {
				var_104_object = Obj(); var_105_object = Obj();
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_1231();
				var_108_string = "";
				func_142(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)514445);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)514456, (int)15687, (int)15686);
				@@@var_0_object:AddReply((int)514446, (int)15675, (int)15674);
				return 0;
			}
		}
		var_133_bool = var_10_bool == (int)15675;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_142(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)514447);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514448, (int)15677, (int)15676);
			@@@var_0_object:AddReply((int)514452, (int)15681, (int)15680);
			return 0;
		}
		var_143_bool = var_10_bool == (int)15681;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_142(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)514453);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514454, (int)15677, (int)15682);
			@@@var_0_object:AddReply((int)514455, (int)15677, (int)15684);
			return 0;
		}
		var_153_bool = var_10_bool == (int)15677;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_142(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)514449);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514450, (int)42006, (int)15678);
			@@@var_0_object:AddReply((int)514451, (int)-1, (int)15679);
			@@@var_0_object:AddReply((int)540038, (int)-1, (int)42005);
			return 0;
		}
		var_166_bool = var_10_bool == (int)42006;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_142(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)540039);
			@@@var_0_object:ClearReplies();
			var_169_bool = 0; var_170_object = Obj();
			var_170_object = var_1_object;
			func_1237(var_169_bool, var_170_object);
			if(var_169_bool != 0) {
				@@@var_0_object:AddReply((int)540040, (int)-1, (int)42007);
			}
			@@@var_0_object:AddReply((int)540041, (int)-1, (int)42008);
			return 0;
		}
		var_185_bool = var_10_bool == (int)15687;
		if(var_185_bool != 0) {
			var_186_string = "";
			func_142(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)514457);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514458, (int)15689, (int)15688);
			return 0;
		}
		var_192_bool = var_10_bool == (int)15689;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_142(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)514459);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514460, (int)15681, (int)15690);
			return 0;
		}
		var_3_string = true;
		var_198_bool = 0;
		func_1384(var_198_bool);
		if(var_198_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa5";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_int = 0; var_12_bool = 0; var_13_int = 0; var_14_bool = 0;
	func_534(var_13_int, var_14_bool);
	var_18_int = 0; var_19_object = Obj();
	var_10_object = var_19_object;
	TaskCall(0);
	func_0(var_20_object, var_18_int, var_19_object);
	TaskReturn();
	var_20_object = var_13_int;
	var_161_bool = var_13_int == (int)0;
	if(var_161_bool != 0) {
		var_162_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
		PlayAnimation("all", "attack_begin2");
		WaitForAnimEnd(var_14_bool);
		PlayAnimation("all", "attack_end2");
		WaitForAnimEnd(var_14_bool);
		var_167_bool = 0; var_168_string = ""; var_169_string = "";
		func_1133(var_167_bool, "quest_d11_01", "teleport");
	}
	return 4;
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_534(var_9_object, var_10_object);
	var_14_bool = 0; var_15_string = ""; var_16_string = "";
	func_1133(var_14_bool, "quest_d11_01", "soldier_attack");
	SetProperty("health", (int)0);
	SetVariable("d11q01", (int)3);
	var_24_bool = 0; var_25_string = ""; var_26_string = "";
	func_1133(var_24_bool, "quest_d11_01", "restore_andrei");
	func_1260();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_12_bool = var_10_int == (int)10;
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_496(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_1046(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_533;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_533:
	return 0;
	
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsOverrideActive(var_12_bool);
	var_13_bool = var_12_bool == 0; //@nz
	if(var_13_bool != 0) {
		var_14_object = Obj();
		var_10_object = var_14_object;
		func_1363(var_14_object);
	}
	return 2;
}


task_3_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0;
}


task_3_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string)
{
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
	var_10_object = var_14_object;
	var_11_int = var_15_int;
	var_12_float = var_16_float;
	func_841(var_14_object, var_15_int, var_16_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0);
	var_10_object = var_16_object;
	var_11_int = var_17_int;
	var_12_float = var_18_float;
	var_14_cvector = var_19_cvector;
	var_15_cvector = var_20_cvector;
	func_909(var_18_float, var_19_cvector, var_20_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0;
	var_14_bool = GlobalVars[1];
	if(var_14_bool != 0) {
		return 2;
	}
	var_16_bool = var_11_string == "health";
	if(var_16_bool != 0) {
		GetProperty("health", var_13_float);
		var_19_bool = var_13_float <= (int)0;
		if(var_19_bool != 0) {
			SignalDeath(var_10_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	func_1386(var_11_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	var_10_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	
Label_399:
	if((bool)1 != 0) {
		var_12_float = 0; var_13_float = 0;
		func_469(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		goto Label_399;
	}
	return 0;
}


func_0(var_0_object, var_18_int, var_19_object)
{
	var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; var_27_int = 0; var_28_bool = 0;
	var_0_object = var_19_object;
	var_29_bool = 0; var_30_object = Obj(); var_31_float = 0;
	var_19_object = var_30_object;
	func_928(var_29_bool, var_30_object, (float)70.0);
	var_76_bool = var_29_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_18_int = -2;
		return 8;
	}
	CreateDialog(var_25_object);
	var_77_int = 0;
	func_1378(var_77_int);
	@@var_25_object:SetNPCName(var_77_int);
	var_78_int = 0;
	func_1376(var_78_int);
	@@var_25_object:SetNPCDescription(var_78_int);
	var_79_string = "";
	func_1380(var_79_string);
	@@var_25_object:SetPhoto(var_79_string);
	var_80_string = "";
	func_1382(var_80_string);
	@@var_25_object:SetPhoto2(var_80_string);
	var_81_int = 0;
	func_1340(var_81_int);
	@@var_25_object:SetPlayerName(var_81_int);
	IsOverrideActive(var_26_bool);
	var_89_bool = var_26_bool;
	if(var_89_bool != 0) {
		var_18_int = -2;
		return 8;
	}
	DoDialog(var_25_object);
	var_90_object = Obj(); var_91_object = Obj();
	var_19_object = var_90_object;
	var_25_object = var_91_object;
	TaskCall(1);
	func_74(var_92_object, var_93_object, var_94_string, var_95_bool, var_90_object, var_91_object);
	TaskReturn();
	@@var_25_object:IsDialogEnd(var_28_bool);
	
Label_56:
	var_151_bool = var_28_bool == 0; //@nz
	if(var_151_bool != 0) {
		sync();
		@@var_25_object:IsDialogEnd(var_28_bool);
		goto Label_56;
	}
	var_19_object = Obj();
	func_997();
	StopDialog(var_25_object);
	@@var_25_object:GetReturnValue((int)-1);
	var_27_int = var_18_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1152(var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0;
	var_40_int = 0;
	
Label_1154:
	var_43_string = ""; var_44_int = 0;
	var_40_int = var_44_int;
	func_1145(var_43_string, var_44_int);
	HasAnimation(var_41_bool, "all", var_43_string);
	var_48_bool = var_41_bool == 0; //@nz
	if(var_48_bool != 0) {
	} else {
		var_40_int = var_40_int + (int)1;
		goto Label_1154;
	}
	var_40_int = var_37_int;
	return 4;
	
}


func_1273()
{
	var_26_object = Obj(); var_27_object = Obj();
	CreateDiaryEntry(var_27_object, (int)769, (int)1, (int)540066);
	var_31_bool = 0; var_32_object = Obj(); var_33_int = 0;
	var_27_object = var_32_object;
	func_1312(var_31_bool, var_32_object, (int)192);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1286()
{
	var_66_object = Obj(); var_67_object = Obj();
	CreateDiaryEntry(var_67_object, (int)768, (int)1, (int)540065);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_67_object = var_72_object;
	func_1312(var_71_bool, var_72_object, (int)192);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1031(var_113_string, var_114_bool)
{
	var_117_bool = 0; var_118_float = 0; var_119_float = 0; var_120_bool = 0; var_121_float = 0; var_122_float = 0;
	lshHasAnimation(var_120_bool, var_113_string);
	var_123_bool = var_120_bool;
	if(var_123_bool != 0) {
		lshGetAnimTimes(var_113_string, var_121_float, var_122_float);
		lshPlayAnimation(var_121_float, var_122_float, var_114_bool);
	} else {
		var_125_int = "Can't find lsh animation : " + var_113_string;
		Trace(var_125_int);
	}
	return 6;
	
}


func_909(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj();
	GetScene(var_23_object);
	AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	var_27_object = Obj();
	var_16_object = var_27_object;
	func_797(var_27_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_142(var_2_object, var_109_string)
{
	var_110_bool = 0;
	func_1384(var_110_bool);
	var_111_bool = var_110_bool == 0; //@nz
	if(var_111_bool != 0) {
		return 0;
	}
	var_112_bool = var_109_string == var_2_object;
	if(var_112_bool != 0) {
		return 0;
	}
	var_113_string = ""; var_114_bool = 0;
	var_109_string = var_113_string;
	var_116_bool = var_109_string == "";
	if(var_116_bool != 0) {
		var_114_bool = 0;
	} else {
		var_114_bool = 1;
	}
	func_1031(var_113_string, var_114_bool);
	var_2_object = var_109_string;
	return 0;
	
}


func_782(var_44_cvector, var_45_object)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_48_cvector);
	@@var_45_object:GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
	return 4;
}


func_1169(var_63_object)
{
	SetVariable("d11q01", (int)3);
	func_1286();
	var_74_bool = 0; var_75_string = ""; var_76_string = "";
	func_1133(var_74_bool, "quest_d11_01", "restore_andrei");
	@@var_63_object:SetReturnValue((int)0);
	return 0;
}


func_659(var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0);
	var_39_bool = var_18_object == 0; //@ne
	if(var_39_bool != 0) {
		var_40_string = "";
		func_750("fdie");
	} else {
		@@var_18_object:GetPosition(var_29_cvector);
		GetPosition(var_30_cvector);
		GetDirection(var_31_cvector);
		var_32_cvector = var_30_cvector - var_29_cvector;
		var_72_float = GetByIndex(var_32_cvector, 0);
		var_73_float = GetByIndex(var_31_cvector, 0);
		var_74_float = var_72_float * var_73_float;
		var_75_float = GetByIndex(var_32_cvector, 2);
		var_76_float = GetByIndex(var_31_cvector, 2);
		var_77_float = var_75_float * var_76_float;
		var_78_int = var_74_float + var_77_float;
		var_80_bool = var_78_int >= (int)0;
		if(var_80_bool != 0) {
			var_33_string = "fdie";
		} else {
				var_33_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_18_object = var_34_object;
		var_83_bool = IsFuncExist(var_18_object, "GetScriptProperty", (int)2);
		if(var_83_bool != 0) {
			@@var_18_object:HasScriptProperty(var_35_bool, "Owner");
			var_85_bool = var_35_bool;
			if(var_85_bool != 0) {
				@@var_18_object:GetScriptProperty(var_34_object, "Owner");
				var_87_bool = var_34_object == 0; //@ne
				if(var_87_bool != 0) {
					var_18_object = var_34_object;
				}
			}
		}
		var_90_bool = IsFuncExist(var_34_object, "@GetEyesHeight", (int)1);
		if(var_90_bool != 0) {
			@@var_34_object:GetEyesHeight(var_37_float);
			var_38_cvector = CVector(0.0, 0.0, 0.0);
			var_91_float = GetByIndex(var_38_cvector, 1);
			var_37_float = var_91_float;
			SetByIndex(var_38_cvector, 1) = var_91_float;
			LookAsync(var_18_object, "head", var_38_cvector);
			var_36_bool = 1;
		} else {
			var_36_bool = 0;

		}
		var_93_string = "";
		var_33_string = var_93_string;
		func_1064(var_93_string);
		PlayAnimation("all", var_33_string);
		WaitForAnimEnd();
		var_95_bool = var_36_bool;
		if(var_95_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_33_string);
		RemoveEnvelope();
		var_34_object = 0;
	}
	return 20;
	
}


func_1299(var_41_object)
{
	var_42_object = Obj(); var_43_object = Obj();
	GetDiaryRoot(var_43_object);
	var_44_bool = var_43_object == 0; //@nz
	if(var_44_bool != 0) {
		Trace("Can't retrieve diary root");
		var_41_object = 0;
		return 2;
	}
	var_43_object = var_41_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_789(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_534(var_2_object, var_3_string)
{
	func_629();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_1046(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0);
	@@var_27_object:GetEyesHeight(var_30_float);
	var_31_cvector = CVector(0.0, 0.0, 0.0);
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	LookAsync(var_27_object, "head", var_31_cvector);
	return 4;
}


func_923(var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0;
	IsLoaded(var_16_bool);
	var_16_bool = var_14_bool;
	return 2;
}


func_797(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = "";
	var_42_bool = var_27_object == 0; //@ne
	if(var_42_bool != 0) {
		return 14;
	}
	IsDead(var_35_bool);
	var_43_bool = var_35_bool;
	if(var_43_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_36_int);
	var_45_bool = var_36_int < (int)0;
	if(var_45_bool != 0) {
		return 14;
	}
	@@var_27_object:GetPosition(var_37_cvector);
	GetPosition(var_38_cvector);
	GetDirection(var_39_cvector);
	var_40_cvector = var_38_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_40_cvector, 0);
	var_47_float = GetByIndex(var_39_cvector, 0);
	var_48_float = var_46_float * var_47_float;
	var_49_float = GetByIndex(var_40_cvector, 2);
	var_50_float = GetByIndex(var_39_cvector, 2);
	var_51_float = var_49_float * var_50_float;
	var_52_int = var_48_float + var_51_float;
	var_54_bool = var_52_int >= (int)0;
	if(var_54_bool != 0) {
		var_41_string = "fhit";
	} else {
		var_41_string = "bhit";
	}
	var_57_int = var_41_string + "1";
	var_59_int = var_41_string + "2";
	FadeSecondaryAnimation("hit_react", var_57_int, var_59_int, (int)-10);
	return 14;
	
}


func_928(var_29_bool, var_30_object, var_31_float)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_bool = 0;
	@@var_30_object:GetPosition(var_42_cvector);
	@@var_30_object:GetEyesHeight(var_41_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	var_50_float = var_50_float + var_41_float;
	SetByIndex(var_42_cvector, 1) = var_50_float;
	GetPosition(var_43_cvector);
	GetEyesHeight(var_41_float);
	var_51_float = GetByIndex(var_43_cvector, 1);
	var_51_float = var_51_float + var_41_float;
	SetByIndex(var_43_cvector, 1) = var_51_float;
	var_44_cvector = var_42_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (float)0;
	var_53_int = var_44_cvector | var_44_cvector;
	var_54_float = sqrt(var_53_int);
	var_44_cvector = var_44_cvector / var_54_float;
	var_45_cvector = -var_44_cvector;
	var_55_float = var_44_cvector * var_31_float;
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	var_57_cvector = var_45_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1111(var_56_cvector, var_57_cvector);
	var_65_float = var_56_cvector * (int)25;
	var_66_int = var_55_float + var_65_float;
	var_46_cvector = var_66_int - CVector(0.0, 10.0, 0.0);
	var_47_cvector = var_43_cvector + var_46_cvector;
	IsOverrideActive(var_48_bool);
	var_68_bool = var_48_bool;
	if(var_68_bool != 0) {
		var_29_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_47_cvector, var_45_cvector, (bool)1);
	var_70_float = GetByIndex(var_46_cvector, 0);
	var_71_float = GetByIndex(var_46_cvector, 2);
	Rotate(var_70_float, var_71_float);
	var_72_bool = 0;
	func_1384(var_72_bool);
	if(var_72_bool != 0) {
	} else {
		HasAnimationTrack(var_49_bool, "head");
		var_74_bool = var_49_bool;
		if(var_74_bool == 0) goto Label_991;
		LookAsyncCamera("head");
	}
Label_991:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_29_bool = 1;
	return 18;
	
}


func_1057()
{
	var_13_bool = 0;
	func_1384(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1186(var_16_object)
{
	var_18_int = 0; var_19_int = 0;
	@@var_16_object:RemoveItemByType(var_19_int, "burah_serum", (int)1);
	return 2;
}


func_1312(var_32_bool, var_33_object, var_34_int)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_int = 0; var_38_object = Obj(); var_39_object = Obj(); var_40_int = 0;
	func_1299(Obj());
	var_41_object = var_38_object;
	@@var_38_object:Find(var_34_int, var_39_object);
	var_46_bool = var_39_object == 0; //@nz
	if(var_46_bool != 0) {
		var_48_int = "Can't find diary parent with id: " + var_34_int;
		Trace(var_48_int);
		var_32_bool = 0;
		return 6;
	}
	@@var_39_object:AddChild(var_33_object);
	SendWorldWndMessage((int)7);
	@@var_33_object:GetCategory(var_40_int);
	SetDiarySection(var_40_int);
	var_32_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_548()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0;
	WaitForAnimEnd();
	var_35_bool = 0;
	func_923(var_35_bool);
	var_36_bool = var_35_bool == 0; //@nz
	if(var_36_bool != 0) {
		return 14;
	}
	func_1152((int)0);
	var_37_int = var_28_int;
	var_29_int = 0;
	
Label_562:
	var_50_bool = 0;
	var_50_bool = 0;
	var_52_bool = var_29_int < (int)5;
	if(var_52_bool != 0) {
		var_53_bool = 0;
		func_923(var_53_bool);
		if(var_53_bool != 0) {
			var_50_bool = 1;
		}
	}
	if(var_50_bool != 0) {
		irand(var_30_int, (int)3);
		var_56_bool = var_30_int == (int)0;
		if(var_56_bool != 0) {
			var_57_int = var_28_int;
			if(var_57_int == 0) goto Label_595;
			irand(var_31_int, var_28_int);
			var_59_string = ""; var_60_int = 0;
			var_31_int = var_60_int;
			func_1145(var_59_string, var_60_int);
			PlayAnimation("all", var_59_string);
			WaitForAnimEnd(var_32_bool);
			var_61_bool = var_32_bool == 0; //@nz
			if(var_61_bool != 0) {
			} else {
		} else {
				var_66_bool = var_30_int == (int)1;
				if(var_66_bool != 0) {
					rand(var_33_float, (int)4);
					var_69_int = var_33_float + (int)1;
					Sleep(var_69_int, var_34_bool);
					var_70_bool = var_34_bool == 0; //@nz
					if(var_70_bool != 0) {
						goto Label_624;
					}
					goto Label_613;
				}
				var_71_int = var_29_int;
				if(var_71_int == 0) goto Label_613;
				goto Label_624;
		}
		Label_613:
			var_62_bool = 0;
			func_627(var_62_bool);
			var_63_bool = var_62_bool == 0; //@nz
			if(var_63_bool != 0) {
				goto Label_624;
			}
			ResetAAS();
			var_29_int = var_29_int + (int)1;
			goto Label_562;

		}
	}
Label_624:
	ResetAAS();
	return 14;
	
}


func_1192(var_23_object)
{
	SetVariable("d11q01", (int)3);
	func_1273();
	var_49_bool = 0; var_50_string = ""; var_51_string = "";
	func_1133(var_49_bool, "quest_d11_01", "restore_andrei");
	@@var_23_object:SetReturnValue((int)1);
	return 0;
}


func_1064(var_41_string)
{
	var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	IsExisting3DSound(var_50_bool, var_41_string);
	var_58_bool = var_50_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_51_int = 0;

	Label_1070:
		var_60_int = var_51_int + (int)1;
		var_61_int = var_41_string + var_60_int;
		IsExisting3DSound(var_52_bool, var_61_int);
		var_62_bool = var_52_bool == 0; //@nz
		if(var_62_bool != 0) {
		} else {
			var_51_int = var_51_int + (int)1;
			goto Label_1070;
		}
		var_63_bool = var_51_int == 0; //@nz
		if(var_63_bool != 0) {
			return 16;
		}
		irand(var_53_int, var_51_int);
		var_65_int = var_53_int + (int)1;
		var_41_string = var_41_string + var_65_int;
	}
	Is3DSoundLoaded(var_54_bool, var_41_string);
	var_66_bool = var_54_bool;
	if(var_66_bool != 0) {
		GetEyesHeight(var_55_float);
		GetDirection(var_56_cvector);
		var_57_cvector = var_56_cvector * (int)50;
		var_68_float = GetByIndex(var_57_cvector, 1);
		var_68_float = var_68_float + var_55_float;
		SetByIndex(var_57_cvector, 1) = var_68_float;
		PlayGlobalSound(var_41_string, var_57_cvector);
	}
	return 16;
	
}


func_1209()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1340(var_81_int)
{
	var_82_int = 0; var_83_int = 0;
	GetVariable("branch", var_83_int);
	var_86_bool = var_83_int == (int)0;
	if(var_86_bool != 0) {
		var_81_int = 1;
		return 2;
	EMIT "GOTO 0x54b";
	}
	var_88_bool = var_83_int == (int)1;
	if(var_88_bool != 0) {
		var_81_int = 2;
		return 2;
	}
	var_81_int = 3;
	return 2;
}


func_1215()
{
	SetVariable("d11q01", (int)3);
	var_88_bool = 0; var_89_string = ""; var_90_string = "";
	func_1133(var_88_bool, "quest_d11_01", "soldier_attack");
	var_91_bool = 0; var_92_string = ""; var_93_string = "";
	func_1133(var_91_bool, "quest_d11_01", "restore_andrei");
	return 0;
}


func_841(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0);
	var_35_bool = 0;
	var_35_bool = 0;
	var_36_bool = 0;
	var_36_bool = 0;
	var_37_object = var_14_object;
	if(var_37_object != 0) {
		var_39_bool = var_15_int != (int)4;
		if(var_39_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_41_bool = var_15_int != (int)5;
		if(var_41_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
		var_44_cvector = CVector(0,0,0); var_45_object = Obj();
		var_14_object = var_45_object;
		func_782(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1111(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		CreateVectorVector(var_27_object);
		var_28_int = 1;

	Label_870:
		var_56_int = "hit" + var_28_int;
		GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector);
		var_57_bool = var_29_bool == 0; //@nz
		if(var_57_bool != 0) {
		} else {
			var_105_int = var_31_cvector | var_26_cvector;
			var_107_bool = var_105_int >= (float)0.7071067690849304;
			if(var_107_bool != 0) {
				@@var_27_object:add(var_30_cvector);
			}
			var_28_int = var_28_int + (int)1;
			goto Label_870;
		}
		@@var_27_object:size(var_32_int);
		var_58_int = var_32_int;
		if(var_58_int != 0) {
			irand(var_33_int, var_32_int);
			@@var_27_object:get(var_34_cvector, var_33_int);
			var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
			var_14_object = var_59_object;
			var_15_int = var_60_int;
			var_16_float = var_61_float;
			var_34_cvector = var_62_cvector;
			var_63_cvector = -var_26_cvector;
			func_909(var_61_float, var_62_cvector, var_63_cvector);
			return 18;
		}
		var_27_object = 0;
	}
	var_104_object = Obj();
	var_14_object = var_104_object;
	func_797(var_104_object);
	return 18;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_90_object, var_91_object)
{
	var_0_object = var_91_object;
	var_1_object = var_90_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_97_bool = 0; var_98_object = Obj();
		var_98_object = var_1_object;
		func_1248(var_98_object);
		if(var_97_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_1231();
			var_109_string = "";
			func_142(var_91_object, "Neutral");
			@@@var_0_object:SetMessage((int)514445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514456, (int)15687, (int)15686);
			@@@var_0_object:AddReply((int)514446, (int)15675, (int)15674);
		} else {
				return 0;
		}
	}
	var_133_bool = 0;
	func_1384(var_133_bool);
	if(var_133_bool != 0) {

	Label_116:
		lshWaitForAnimEnd();
		var_134_string = var_3_string;
		if(var_134_string != 0) {
		} else {
			var_135_string = "";
			var_135_string = var_2_object;
			func_1015(var_135_string);
			goto Label_116;
	}
		PlayAnimation("all", "idle");

	Label_131:
		WaitForAnimEnd();
		var_148_string = var_3_string;
		if(var_148_string != 0) {
			goto Label_141;
		}
		PlayAnimation("all", "idle");
		goto Label_131;

	}
	goto Label_141;
	
Label_141:
	return 0;
	
}
EMIT "GOTO 0x4e";


func_1357(var_15_int)
{
	var_16_int = 0; var_17_int = 0;
	GetVariable("branch", var_17_int);
	var_17_int = var_15_int;
	return 2;
}


func_1231()
{
	SetVariable("ood11Officer1", (int)1);
	return 0;
}


func_1105(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	self(var_16_object);
	var_16_object = var_14_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1363(var_14_object)
{
	var_15_int = 0;
	func_1357(var_15_int);
	var_20_bool = var_15_int == (int)1;
	if(var_20_bool != 0) {
		WorkWithCorpse(var_14_object);
	} else {
		Barter(var_14_object);
	}
	return 0;
	
}


func_1237(var_169_bool, var_170_object)
{
	var_171_bool = 0; var_172_object = Obj(); var_173_string = "";
	var_170_object = var_172_object;
	func_1126(var_171_bool, var_172_object, "burah_serum");
	if(var_171_bool != 0) {
		var_169_bool = 1;
		return 0;
	}
	var_169_bool = 0;
	return 0;
}


func_469(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_12_float, var_13_float)
{
	var_14_bool = 0;
	func_923(var_14_bool);
	var_17_bool = var_14_bool == 0; //@nz
	if(var_17_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_12_float;
	var_1_object = var_13_float;
	SetTimer((int)10, (float)1.0);
	func_548();
	var_72_bool = var_3_string == 0; //@nz
	if(var_72_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1111(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0;
	var_52_int = var_43_cvector | var_43_cvector;
	var_51_float = sqrt(var_52_int);
	var_53_float = 9.999999974752427e-07;
	var_54_bool = var_51_float < var_53_float;
	if(var_54_bool != 0) {
		var_42_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_42_cvector = var_43_cvector / var_51_float;
	return 2;
}


func_1376(var_78_int)
{
	var_78_int = 515572;
	return 0;
}


func_1248(var_97_bool)
{
	var_99_int = 0; var_100_string = "";
	func_1121(var_99_int, "ood11Officer1");
	var_104_bool = var_99_int == (int)0;
	if(var_104_bool != 0) {
		var_97_bool = 1;
		return 0;
	}
	var_97_bool = 0;
	return 0;
}


func_1378(var_77_int)
{
	var_77_int = 504031;
	return 0;
}


func_1121(var_99_int, var_100_string)
{
	var_101_int = 0; var_102_int = 0;
	GetVariable(var_100_string, var_102_int);
	var_102_int = var_99_int;
	return 2;
}


func_1380(var_79_string)
{
	var_79_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_997()
{
	var_153_bool = 0; var_154_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_156_bool = 0;
	func_1384(var_156_bool);
	if(var_156_bool != 0) {
	} else {
		HasAnimationTrack(var_154_bool, "head");
		var_158_bool = var_154_bool;
		if(var_158_bool == 0) goto Label_1014;
		UnlookAsync("head");
	}
Label_1014:
	return 2;
	
}


func_1382(var_80_string)
{
	var_80_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_1126(var_171_bool, var_172_object, var_173_string)
{
	var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_bool = 0;
	GetInvItemByName(var_176_int, var_173_string);
	@@var_172_object:HasItem(var_176_int, var_177_bool);
	var_177_bool = var_171_bool;
	return 4;
}


func_1384(var_72_bool)
{
	var_72_bool = 0;
	return 0;
}


func_1386(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	GetScene(var_13_object);
	var_14_object = Obj();
	func_1105(var_14_object);
	@@var_13_object:RemoveStationaryActor(var_14_object);
	var_17_object = Obj();
	var_11_object = var_17_object;
	TaskCall(3);
	func_634(var_17_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1260()
{
	var_27_object = Obj(); var_28_object = Obj();
	CreateDiaryEntry(var_28_object, (int)794, (int)1, (int)543369);
	var_32_bool = 0; var_33_object = Obj(); var_34_int = 0;
	var_28_object = var_33_object;
	func_1312(var_32_bool, var_33_object, (int)192);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1133(var_14_bool, var_15_string, var_16_string)
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


func_750(var_40_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_41_string = "";
	var_40_string = var_41_string;
	func_1064(var_41_string);
	PlayAnimation("all", var_40_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_40_string);
	RemoveEnvelope();
	return 0;
}


func_496(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_789(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_627(var_62_bool)
{
	var_62_bool = 1;
	return 0;
}


func_629()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1015(var_135_string)
{
	var_136_bool = 0; var_137_float = 0; var_138_float = 0; var_139_bool = 0; var_140_float = 0; var_141_float = 0;
	lshHasAnimation(var_139_bool, var_135_string);
	var_142_bool = var_139_bool;
	if(var_142_bool != 0) {
		lshGetAnimTimes(var_135_string, var_140_float, var_141_float);
		lshPlayAnimation(var_140_float, var_141_float, (bool)0);
	} else {
		var_145_int = "Can't find lsh animation : " + var_135_string;
		Trace(var_145_int);
	}
	return 6;
	
}


func_1145(var_43_string, var_44_int)
{
	var_45_string = ""; var_46_string = "";
	var_47_int = var_44_int;
	if(var_47_int != 0) {
		"idle" = "idle" + var_44_int;
	}
	var_46_string = var_43_string;
	return 2;
}


func_634(var_17_object)
{
	EventDisable(0);
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_659(var_18_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_645:
	Hold();
	goto Label_645;
}
EMIT "Return(); Pop(0)";


