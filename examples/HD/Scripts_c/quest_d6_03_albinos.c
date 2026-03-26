// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,SetTimer/2,Sleep/1,IsPlayerActor/2,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,Hold/0,GetPosition/1,GetDirection/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,Stop/0,KillTimer/1,FindDirLength/3,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,GetScene/1,AddActorByType/6,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,FindActor/2,Trigger/2,GetGameTime/1,HasAnimation/3,ReportHit/4,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_d6_03|W:albinos_retreated|A:GetPosition|W:Can't retreat, distance: |W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:voice_common|W:c|W:m|W:Can't find lsh animation : |W:d6q03|W:ood6Albinos1|W:branch|W:ui/NPC_Albinos.png|W:ui/NPC_Albinos_b.png|W:albinos_dead|W:player
// @GLOBALS: 0:object:
// @RUN_OP: 0x166
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xba vars=int,int
// @TASK_2: vars= params=0
// @EVENT_17: op=0x172 vars=object
// @EVENT_0: op=0x17e vars=object
// @EVENT_7: op=0x189 vars=int
// @TASK_3: vars=object,cvector,bool params=1
// @EVENT_6: op=0x1e7 vars=
// @EVENT_7: op=0x1ef vars=int
// @EVENT_41: op=0x29e vars=object
// @TASK_4: vars= params=1
// @EVENT_22: op=0x335 vars=object,int,float,float
// @EVENT_16: op=0x337 vars=object,string
// @EVENT_41: op=0x339 vars=object
// @STANDALONE_EVENT_22: op=0x643 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x64b vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x655 vars=object,string
// @STANDALONE_EVENT_41: op=0x662 vars=object
// @PE: 0x51,0xa4,0xba,0x17e,0x189,0x1ef,0x29e,0x2b7,0x31b,0x335,0x337,0x339,0x33b,0x589,0x590,0x59b,0x5e6,0x5ec,0x5f2,0x619,0x643,0x64b,0x662

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_cvector, var_9_bool)
{
	if((int)1 != 0) {
		func_1353();
		var_13_bool = var_9_bool == (int)13311;
		if(var_13_bool != 0) {
			var_14_object = Obj(); var_15_object = Obj();
			var_14_object = var_1_object;
			var_15_object = var_0_object;
			func_1510();
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_1516();
		}
		var_23_bool = var_8_cvector == (int)13292;
		if(var_23_bool != 0) {
			var_24_bool = 0; var_25_object = Obj();
			var_25_object = var_1_object;
			func_1522(var_25_object);
			if(var_24_bool != 0) {
				var_32_string = "";
				func_164(var_9_bool, "Neutral");
				@@@var_0_object:SetMessage((int)512071);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512072, (int)13294, (int)13293);
				@@@var_0_object:AddReply((int)512083, (int)13294, (int)13306);
				return 0;
			}
			var_56_string = "";
			func_164(var_9_bool, "Neutral");
			@@@var_0_object:SetMessage((int)513029);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513030, (int)-1, (int)14237);
			@@@var_0_object:AddReply((int)536131, (int)-1, (int)37890);
			return 0;
		}
		var_65_bool = var_8_cvector == (int)13294;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_164(var_9_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512073);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512074, (int)13298, (int)13295);
			@@@var_0_object:AddReply((int)512075, (int)13298, (int)13296);
			@@@var_0_object:AddReply((int)512076, (int)13298, (int)13297);
			return 0;
		}
		var_78_bool = var_8_cvector == (int)13298;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_164(var_9_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512077);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512078, (int)13302, (int)13301);
			@@@var_0_object:AddReply((int)512082, (int)13302, (int)13305);
			return 0;
		}
		var_88_bool = var_8_cvector == (int)13302;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_164(var_9_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512079);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512080, (int)13304, (int)13303);
			@@@var_0_object:AddReply((int)512084, (int)13304, (int)13309);
			return 0;
		}
		var_98_bool = var_8_cvector == (int)13304;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_164(var_9_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512085, (int)-1, (int)13311);
			return 0;
		}
		var_3_string = true;
		var_104_bool = 0;
		func_1559(var_104_bool);
		if(var_104_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbb";
	
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	IsPlayerActor(var_8_bool, var_10_bool);
	var_11_bool = var_10_bool;
	if(var_11_bool != 0) {
		var_12_object = Obj();
		var_8_bool = var_12_object;
		TaskCall(3);
		func_538(var_13_object, var_14_cvector, var_15_bool, var_12_object);
		TaskReturn();
	}
	return 2;
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool)
{
	func_482();
	var_9_int = 0; var_10_object = Obj();
	var_8_bool = var_10_object;
	TaskCall(0);
	func_0(var_11_object, var_9_int, var_10_object);
	TaskReturn();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_object, var_7_cvector, var_8_bool)
{
	var_10_bool = var_8_bool == (int)100;
	if(var_10_bool != 0) {
		func_1577();
	}
	return 0;
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	var_8_bool = 0; var_9_string = ""; var_10_string = "";
	func_1465(var_8_bool, "quest_d6_03", "albinos_retreated");
	Hold();
	return 0;
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_int)
{
	var_10_bool = var_8_int == (int)100;
	if(var_10_bool != 0) {
		func_1577();
	} else {
		var_99_int = 0;
		var_8_int = var_99_int;
		func_611(var_6_cvector, var_7_bool, var_8_int, var_99_int);
	}
	return 0;
	
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	func_663(var_8_object);
	var_8_object = Obj();
	func_1634();
	return 0;
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_float, var_11_float)
{
	return 0;
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_string)
{
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0;
	var_8_object = var_12_object;
	var_9_int = var_13_int;
	var_10_float = var_14_float;
	func_995(var_12_object, var_13_int, var_14_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_float, var_11_float, var_12_cvector, var_13_cvector)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0);
	var_8_object = var_14_object;
	var_9_int = var_15_int;
	var_10_float = var_16_float;
	var_12_cvector = var_17_cvector;
	var_13_cvector = var_18_cvector;
	func_1063(var_16_float, var_17_cvector, var_18_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_string)
{
	var_10_float = 0; var_11_float = 0;
	var_13_bool = var_9_string == "health";
	if(var_13_bool != 0) {
		GetProperty("health", var_11_float);
		var_16_bool = var_11_float <= (int)0;
		if(var_16_bool != 0) {
			SignalDeath(var_8_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	var_9_object = Obj();
	var_8_object = var_9_object;
	func_1561(var_9_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	SetTimer((int)100, (float)1.0);
	
Label_362:
	Sleep((int)3);
	func_401();
	goto Label_362;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_9_int, var_10_object)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0;
	var_0_object = var_10_object;
	var_20_bool = 0; var_21_object = Obj(); var_22_float = 0;
	var_10_object = var_21_object;
	func_1082(var_20_bool, var_21_object, (float)70.0);
	var_67_bool = var_20_bool == 0; //@nz
	if(var_67_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	CreateDialog(var_16_object);
	var_68_int = 0;
	func_1553(var_68_int);
	@@var_16_object:SetNPCName(var_68_int);
	var_69_int = 0;
	func_1551(var_69_int);
	@@var_16_object:SetNPCDescription(var_69_int);
	var_70_string = "";
	func_1555(var_70_string);
	@@var_16_object:SetPhoto(var_70_string);
	var_71_string = "";
	func_1557(var_71_string);
	@@var_16_object:SetPhoto2(var_71_string);
	var_72_int = 0;
	func_1534(var_72_int);
	@@var_16_object:SetPlayerName(var_72_int);
	IsOverrideActive(var_17_bool);
	var_80_bool = var_17_bool;
	if(var_80_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	DoDialog(var_16_object);
	var_81_bool = 0; var_82_object = Obj();
	func_1401(Obj());
	var_83_object = var_82_object;
	func_1169(var_81_bool, var_82_object);
	var_176_object = Obj(); var_177_object = Obj();
	var_10_object = var_176_object;
	var_16_object = var_177_object;
	TaskCall(1);
	func_81(var_178_object, var_179_object, var_180_string, var_181_bool, var_176_object, var_177_object);
	TaskReturn();
	@@var_16_object:IsDialogEnd(var_19_bool);
	
Label_63:
	var_241_bool = var_19_bool == 0; //@nz
	if(var_241_bool != 0) {
		sync();
		@@var_16_object:IsDialogEnd(var_19_bool);
		goto Label_63;
	}
	var_10_object = Obj();
	func_1151();
	StopDialog(var_16_object);
	@@var_16_object:GetReturnValue((int)-1);
	var_18_int = var_9_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1417(var_68_float, var_69_float, var_70_float)
{
	var_73_bool = var_69_float < var_70_float;
	if(var_73_bool != 0) {
		var_69_float = var_68_float;
	} else {
		var_70_float = var_68_float;
	}
	return 0;
	
}


func_1551(var_69_int)
{
	var_69_int = 515595;
	return 0;
}


func_1424(var_78_float, var_79_float, var_80_float, var_81_float)
{
	var_82_bool = var_79_float < var_80_float;
	if(var_82_bool != 0) {
		var_80_float = var_78_float;
		return 0;
	}
	var_83_bool = var_79_float > var_81_float;
	if(var_83_bool != 0) {
		var_81_float = var_78_float;
		return 0;
	}
	var_79_float = var_78_float;
	return 0;
}


func_1553(var_68_int)
{
	var_68_int = 512611;
	return 0;
}


func_1169(var_81_bool, var_82_object)
{
	var_86_int = 0; var_87_int = 0; var_88_int = 0; var_89_int = 0;
	GetVariable("voice_common", var_88_int);
	var_91_int = var_88_int;
	if(var_91_int != 0) {
		var_92_bool = 0; var_93_object = Obj();
		var_82_object = var_93_object;
		func_1227(var_92_bool, var_93_object);
		var_122_bool = var_92_bool == 0; //@nz
		if(var_122_bool != 0) {
			var_123_bool = 0; var_124_object = Obj();
			var_82_object = var_124_object;
			func_1264(var_123_bool, var_124_object);
			var_158_bool = var_123_bool == 0; //@nz
			if(var_158_bool != 0) {
				var_81_bool = 0;
				return 4;
			}
		}
		irand(var_89_int, (int)2);
		var_160_int = var_89_int;
		if(var_160_int != 0) {
			var_163_int = var_88_int + (int)1;
			var_165_int = var_163_int % (int)3;
			SetVariable("voice_common", var_165_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_168_bool = 0; var_169_object = Obj();
		var_82_object = var_169_object;
		func_1264(var_168_bool, var_169_object);
		var_170_bool = var_168_bool == 0; //@nz
		if(var_170_bool != 0) {
			var_171_bool = 0; var_172_object = Obj();
			var_82_object = var_172_object;
			func_1227(var_171_bool, var_172_object);
			var_173_bool = var_171_bool == 0; //@nz
			if(var_173_bool != 0) {
				var_81_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1225;
	
Label_1225:
	var_81_bool = 1;
	return 4;
	
}


func_1555(var_70_string)
{
	var_70_string = "ui/NPC_Albinos.png";
	return 0;
}


func_401()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0;
	WaitForAnimEnd();
	var_25_bool = 0;
	func_1077(var_25_bool);
	var_28_bool = var_25_bool == 0; //@nz
	if(var_28_bool != 0) {
		return 14;
	}
	func_1493((int)0);
	var_29_int = var_18_int;
	var_19_int = 0;
	
Label_415:
	var_42_bool = 0;
	var_42_bool = 0;
	var_44_bool = var_19_int < (int)5;
	if(var_44_bool != 0) {
		var_45_bool = 0;
		func_1077(var_45_bool);
		if(var_45_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		irand(var_20_int, (int)3);
		var_48_bool = var_20_int == (int)0;
		if(var_48_bool != 0) {
			var_49_int = var_18_int;
			if(var_49_int == 0) goto Label_448;
			irand(var_21_int, var_18_int);
			var_51_string = ""; var_52_int = 0;
			var_21_int = var_52_int;
			func_1486(var_51_string, var_52_int);
			PlayAnimation("all", var_51_string);
			WaitForAnimEnd(var_22_bool);
			var_53_bool = var_22_bool == 0; //@nz
			if(var_53_bool != 0) {
			} else {
		} else {
				var_58_bool = var_20_int == (int)1;
				if(var_58_bool != 0) {
					rand(var_23_float, (int)4);
					var_61_int = var_23_float + (int)1;
					Sleep(var_61_int, var_24_bool);
					var_62_bool = var_24_bool == 0; //@nz
					if(var_62_bool != 0) {
						goto Label_477;
					}
					goto Label_466;
				}
				var_63_int = var_19_int;
				if(var_63_int == 0) goto Label_466;
				goto Label_477;
		}
		Label_466:
			var_54_bool = 0;
			func_480(var_54_bool);
			var_55_bool = var_54_bool == 0; //@nz
			if(var_55_bool != 0) {
				goto Label_477;
			}
			ResetAAS();
			var_19_int = var_19_int + (int)1;
			goto Label_415;

		}
	}
Label_477:
	ResetAAS();
	return 14;
	
}


func_1557(var_71_string)
{
	var_71_string = "ui/NPC_Albinos_b.png";
	return 0;
}


func_1559(var_63_bool)
{
	var_63_bool = 0;
	return 0;
}


func_663(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1561(var_9_object)
{
	KillTimer((int)100);
	var_11_bool = 0; var_12_string = ""; var_13_string = "";
	func_1465(var_11_bool, "quest_d6_03", "albinos_dead");
	var_17_object = Obj();
	var_9_object = var_17_object;
	TaskCall(4);
	func_695(var_17_object);
	TaskReturn();
	return 0;
}


func_538(var_0_object, var_1_object, var_2_object, var_12_object)
{
	var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0;
	var_0_object = var_12_object;
	var_26_cvector = CVector(0,0,0); var_27_float = 0;
	func_508(var_25_float, var_26_cvector, (float)1.7453293800354004);
	var_26_cvector = var_21_cvector;
	var_22_float = var_21_cvector | var_21_cvector;
	var_57_bool = var_22_float < (float)2500.0;
	if(var_57_bool != 0) {
		var_58_cvector = CVector(0,0,0); var_59_float = 0;
		func_508(var_25_float, var_58_cvector, (float)2.6179938316345215);
		var_58_cvector = var_21_cvector;
		var_22_float = var_21_cvector | var_21_cvector;
		var_61_bool = var_22_float < (float)2500.0;
		if(var_61_bool != 0) {
			var_63_float = sqrt(var_22_float);
			var_64_int = "Can't retreat, distance: " + var_63_float;
			Trace(var_64_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_66_float = GetByIndex(var_21_cvector, 0);
	var_67_float = GetByIndex(var_21_cvector, 2);
	Rotate(var_66_float, var_67_float);
	var_68_cvector = CVector(0,0,0);
	func_841(var_68_cvector);
	var_1_object = var_68_cvector + var_21_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_580:
	MovePoint(var_1_object, (int)1, var_23_bool);
	var_74_bool = var_23_bool;
	if(var_74_bool != 0) {
		var_75_bool = var_0_object == 0; //@ne
		if(var_75_bool != 0) {
			goto Label_610;
		EMIT "GOTO 0x260";

		Label_610:
			return 10;
		}
		var_76_cvector = CVector(0,0,0); var_77_float = 0;
		func_508(var_25_float, var_76_cvector, (float)2.6179938316345215);
		var_76_cvector = var_24_cvector;
		var_25_float = var_24_cvector | var_24_cvector;
		var_79_bool = var_25_float >= (float)2500.0;
		if(var_79_bool != 0) {
			var_80_cvector = CVector(0,0,0);
			func_841(var_80_cvector);
			var_1_object = var_80_cvector + var_24_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_610;
		}
	}
	var_83_bool = var_2_object == 0; //@nz
	if(var_83_bool == 1) goto Label_580;
	
}


func_1435(var_162_float, var_163_cvector, var_164_cvector)
{
	var_165_int = var_163_cvector | var_164_cvector;
	var_166_int = var_163_cvector | var_163_cvector;
	var_167_int = var_164_cvector | var_164_cvector;
	var_168_float = var_166_int * var_167_int;
	var_169_float = sqrt(var_168_float);
	var_162_float = var_165_int / var_169_float;
	return 0;
}


func_1307(var_217_string)
{
	var_218_bool = 0; var_219_float = 0; var_220_float = 0; var_221_bool = 0; var_222_float = 0; var_223_float = 0;
	lshHasAnimation(var_221_bool, var_217_string);
	var_224_bool = var_221_bool;
	if(var_224_bool != 0) {
		lshGetAnimTimes(var_217_string, var_222_float, var_223_float);
		lshPlayAnimation(var_222_float, var_223_float, (bool)0);
	} else {
		var_227_int = "Can't find lsh animation : " + var_217_string;
		Trace(var_227_int);
	}
	return 6;
	
}


func_795(var_40_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_41_string = "";
	var_40_string = var_41_string;
	func_1360(var_41_string);
	PlayAnimation("all", var_40_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_40_string);
	RemoveEnvelope();
	return 0;
}


func_1443(var_185_int, var_186_string)
{
	var_187_int = 0; var_188_int = 0;
	GetVariable(var_186_string, var_188_int);
	var_188_int = var_185_int;
	return 2;
}


func_164(var_2_object, var_191_string)
{
	var_192_bool = 0;
	func_1559(var_192_bool);
	var_193_bool = var_192_bool == 0; //@nz
	if(var_193_bool != 0) {
		return 0;
	}
	var_194_bool = var_191_string == var_2_object;
	if(var_194_bool != 0) {
		return 0;
	}
	var_195_string = ""; var_196_bool = 0;
	var_191_string = var_195_string;
	var_198_bool = var_191_string == "";
	if(var_198_bool != 0) {
		var_196_bool = 0;
	} else {
		var_196_bool = 1;
	}
	func_1323(var_195_string, var_196_bool);
	var_2_object = var_191_string;
	return 0;
	
}


func_679(var_0_object, var_151_bool)
{
	var_152_cvector = CVector(0,0,0); var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_cvector = CVector(0,0,0);
	GetDirection(var_154_cvector);
	var_156_cvector = CVector(0,0,0); var_157_object = Obj();
	var_157_object = var_0_object;
	func_846(var_156_cvector, var_157_object);
	var_156_cvector = var_155_cvector;
	var_162_float = 0; var_163_cvector = CVector(0,0,0); var_164_cvector = CVector(0,0,0);
	var_154_cvector = var_163_cvector;
	var_155_cvector = var_164_cvector;
	func_1435(var_162_float, var_163_cvector, var_164_cvector);
	var_151_bool = var_162_float >= (float)-0.3420201241970062;
	return 4;
}


func_1448(var_88_float)
{
	var_89_object = Obj(); var_90_object = Obj();
	CreateFloatVector(var_90_object);
	@@var_90_object:add(var_88_float);
	var_92_bool = var_88_float < (int)0;
	if(var_92_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_90_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1577()
{
	var_11_object = Obj(); var_12_float = 0; var_13_object = Obj(); var_14_float = 0;
	FindActor(var_13_object, "player");
	var_16_object = var_13_object;
	if(var_16_object != 0) {
		var_17_float = 0; var_18_object = Obj();
		var_13_object = var_18_object;
		func_853(var_17_float, var_18_object);
		var_26_bool = var_17_float <= (float)640000.0;
		if(var_26_bool != 0) {
			var_27_float = 0; var_28_object = Obj(); var_29_float = 0; var_30_int = 0;
			var_13_object = var_28_object;
			func_878(var_27_float, var_28_object, (float)0.05000000074505806, (int)0);
			var_27_float = var_14_float;
			ReportHit(var_13_object, (int)6, var_14_float, (float)0.05000000074505806);
		}
	}
	return 4;
}
EMIT "Stack[-2] = 0";


func_1063(var_14_object, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj();
	GetScene(var_21_object);
	AddActorByType(var_22_object, "scripted", var_21_object, var_17_cvector, var_18_cvector, "blood_dir.xml");
	var_25_object = Obj();
	var_14_object = var_25_object;
	func_951(var_25_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1323(var_195_string, var_196_bool)
{
	var_199_bool = 0; var_200_float = 0; var_201_float = 0; var_202_bool = 0; var_203_float = 0; var_204_float = 0;
	lshHasAnimation(var_202_bool, var_195_string);
	var_205_bool = var_202_bool;
	if(var_205_bool != 0) {
		lshGetAnimTimes(var_195_string, var_203_float, var_204_float);
		lshPlayAnimation(var_203_float, var_204_float, var_196_bool);
	} else {
		var_207_int = "Can't find lsh animation : " + var_195_string;
		Trace(var_207_int);
	}
	return 6;
	
}


func_1407(var_40_cvector, var_41_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_41_cvector | var_41_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_40_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_40_cvector = var_41_cvector / var_49_float;
	return 2;
}


func_1077(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0;
	IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
	return 2;
}


func_951(var_25_object)
{
	var_26_bool = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = "";
	var_40_bool = var_25_object == 0; //@ne
	if(var_40_bool != 0) {
		return 14;
	}
	IsDead(var_33_bool);
	var_41_bool = var_33_bool;
	if(var_41_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_34_int);
	var_43_bool = var_34_int < (int)0;
	if(var_43_bool != 0) {
		return 14;
	}
	@@var_25_object:GetPosition(var_35_cvector);
	GetPosition(var_36_cvector);
	GetDirection(var_37_cvector);
	var_38_cvector = var_36_cvector - var_35_cvector;
	var_44_float = GetByIndex(var_38_cvector, 0);
	var_45_float = GetByIndex(var_37_cvector, 0);
	var_46_float = var_44_float * var_45_float;
	var_47_float = GetByIndex(var_38_cvector, 2);
	var_48_float = GetByIndex(var_37_cvector, 2);
	var_49_float = var_47_float * var_48_float;
	var_50_int = var_46_float + var_49_float;
	var_52_bool = var_50_int >= (int)0;
	if(var_52_bool != 0) {
		var_39_string = "fhit";
	} else {
		var_39_string = "bhit";
	}
	var_55_int = var_39_string + "1";
	var_57_int = var_39_string + "2";
	FadeSecondaryAnimation("hit_react", var_55_int, var_57_int, (int)-10);
	return 14;
	
}


func_695(var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_704(var_18_object);
	
Label_700:
	Hold();
	goto Label_700;
}
EMIT "Return(); Pop(0)";


func_1465(var_11_bool, var_12_string, var_13_string)
{
	var_14_object = Obj(); var_15_object = Obj();
	FindActor(var_15_object, var_12_string);
	var_16_bool = var_15_object == 0; //@ne
	if(var_16_bool != 0) {
		var_11_bool = 0;
		return 2;
	}
	Trigger(var_15_object, var_13_string);
	var_11_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1082(var_20_bool, var_21_object, var_22_float)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0;
	@@var_21_object:GetPosition(var_33_cvector);
	@@var_21_object:GetEyesHeight(var_32_float);
	var_41_float = GetByIndex(var_33_cvector, 1);
	var_41_float = var_41_float + var_32_float;
	SetByIndex(var_33_cvector, 1) = var_41_float;
	GetPosition(var_34_cvector);
	GetEyesHeight(var_32_float);
	var_42_float = GetByIndex(var_34_cvector, 1);
	var_42_float = var_42_float + var_32_float;
	SetByIndex(var_34_cvector, 1) = var_42_float;
	var_35_cvector = var_33_cvector - var_34_cvector;
	var_43_float = GetByIndex(var_35_cvector, 1);
	SetByIndex(var_35_cvector, 1) = (float)0;
	var_44_int = var_35_cvector | var_35_cvector;
	var_45_float = sqrt(var_44_int);
	var_35_cvector = var_35_cvector / var_45_float;
	var_36_cvector = -var_35_cvector;
	var_46_float = var_35_cvector * var_22_float;
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	var_48_cvector = var_36_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1407(var_47_cvector, var_48_cvector);
	var_56_float = var_47_cvector * (int)25;
	var_57_int = var_46_float + var_56_float;
	var_37_cvector = var_57_int - CVector(0.0, 10.0, 0.0);
	var_38_cvector = var_34_cvector + var_37_cvector;
	IsOverrideActive(var_39_bool);
	var_59_bool = var_39_bool;
	if(var_59_bool != 0) {
		var_20_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_38_cvector, var_36_cvector, (bool)1);
	var_61_float = GetByIndex(var_37_cvector, 0);
	var_62_float = GetByIndex(var_37_cvector, 2);
	Rotate(var_61_float, var_62_float);
	var_63_bool = 0;
	func_1559(var_63_bool);
	if(var_63_bool != 0) {
	} else {
		HasAnimationTrack(var_40_bool, "head");
		var_65_bool = var_40_bool;
		if(var_65_bool == 0) goto Label_1145;
		LookAsyncCamera("head");
	}
Label_1145:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_20_bool = 1;
	return 18;
	
}


func_827(var_58_string, var_59_int)
{
	var_61_bool = var_59_int == (int)2;
	if(var_61_bool != 0) {
		var_58_string = "fire";
		return 0;
	EMIT "GOTO 0x347";
	}
	var_63_bool = var_59_int == (int)1;
	if(var_63_bool != 0) {
		var_58_string = "bullet";
		return 0;
	}
	var_58_string = "phys";
	return 0;
}


func_1338(var_115_bool, var_116_string)
{
	var_117_bool = 0; var_118_bool = 0;
	var_119_bool = 0;
	func_1559(var_119_bool);
	if(var_119_bool != 0) {
		lshHasSpeech(var_118_bool, var_116_string);
		var_120_bool = var_118_bool;
		if(var_120_bool != 0) {
			lshPlaySpeech(var_116_string);
			var_115_bool = 1;
			return 2;
		}
	}
	var_115_bool = 0;
	return 2;
}


func_704(var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0);
	var_39_bool = var_18_object == 0; //@ne
	if(var_39_bool != 0) {
		var_40_string = "";
		func_795("fdie");
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
		func_1360(var_93_string);
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


func_1477(var_136_int)
{
	var_137_float = 0; var_138_float = 0;
	GetGameTime(var_138_float);
	var_140_int = 0;
	var_140_int = var_138_float / (int)24;
	var_136_int = (int)1 + var_140_int;
	return 2;
}


func_1353()
{
	var_11_bool = 0;
	func_1559(var_11_bool);
	if(var_11_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_841(var_171_cvector)
{
	var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0);
	GetPosition(var_173_cvector);
	var_173_cvector = var_171_cvector;
	return 2;
}


func_1227(var_92_bool, var_93_object)
{
	var_94_string = ""; var_95_int = 0; var_96_bool = 0; var_97_int = 0; var_98_string = ""; var_99_string = ""; var_100_int = 0; var_101_bool = 0; var_102_int = 0; var_103_string = "";
	var_99_string = "c";
	var_100_int = 0;
	
Label_1230:
	if((int)1 != 0) {
		var_106_int = var_100_int + (int)1;
		var_107_int = var_99_string + var_106_int;
		@@var_93_object:HasProperty(var_107_int, var_101_bool);
		var_108_bool = var_101_bool == 0; //@nz
		if(var_108_bool != 0) {
		} else {
			var_100_int = var_100_int + (int)1;
			goto Label_1230;
		}
	}
	var_109_bool = var_100_int == 0; //@nz
	if(var_109_bool != 0) {
		var_92_bool = 0;
		return 10;
	}
	var_102_int = 0;
	var_111_bool = var_100_int > (int)1;
	if(var_111_bool != 0) {
		irand(var_102_int, var_100_int);
	}
	var_113_int = var_102_int + (int)1;
	var_114_int = var_99_string + var_113_int;
	@@var_93_object:GetProperty(var_114_int, var_103_string);
	var_115_bool = 0; var_116_string = "";
	var_103_string = var_116_string;
	func_1338(var_115_bool, var_116_string);
	var_115_bool = var_92_bool;
	return 10;
	
}


func_1486(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = "";
	var_39_int = var_36_int;
	if(var_39_int != 0) {
		"idle" = "idle" + var_36_int;
	}
	var_38_string = var_35_string;
	return 2;
}


func_846(var_42_cvector, var_43_object)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_43_object:GetPosition(var_47_cvector);
	var_42_cvector = var_47_cvector - var_46_cvector;
	return 4;
}


func_1360(var_41_string)
{
	var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	IsExisting3DSound(var_50_bool, var_41_string);
	var_58_bool = var_50_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_51_int = 0;

	Label_1366:
		var_60_int = var_51_int + (int)1;
		var_61_int = var_41_string + var_60_int;
		IsExisting3DSound(var_52_bool, var_61_int);
		var_62_bool = var_52_bool == 0; //@nz
		if(var_62_bool != 0) {
		} else {
			var_51_int = var_51_int + (int)1;
			goto Label_1366;
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


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_176_object, var_177_object)
{
	var_0_object = var_177_object;
	var_1_object = var_176_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_183_bool = 0; var_184_object = Obj();
		var_184_object = var_1_object;
		func_1522(var_184_object);
		if(var_183_bool != 0) {
			var_191_string = "";
			func_164(var_177_object, "Neutral");
			@@@var_0_object:SetMessage((int)512071);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512072, (int)13294, (int)13293);
			@@@var_0_object:AddReply((int)512083, (int)13294, (int)13306);
		} else {
				var_233_string = "";
				func_164(var_177_object, "Neutral");
				@@@var_0_object:SetMessage((int)513029);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513030, (int)-1, (int)14237);
				@@@var_0_object:AddReply((int)536131, (int)-1, (int)37890);
				goto Label_134;
		}
	}
Label_134:
	var_215_bool = 0;
	func_1559(var_215_bool);
	if(var_215_bool != 0) {

	Label_138:
		lshWaitForAnimEnd();
		var_216_string = var_3_string;
		if(var_216_string != 0) {
		} else {
			var_217_string = "";
			var_217_string = var_2_object;
			func_1307(var_217_string);
			goto Label_138;
	}
		PlayAnimation("all", "idle");

	Label_153:
		WaitForAnimEnd();
		var_230_string = var_3_string;
		if(var_230_string != 0) {
			goto Label_163;
		}
		PlayAnimation("all", "idle");
		goto Label_153;

	}
	goto Label_163;
	
Label_163:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_1493(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0;
	var_32_int = 0;
	
Label_1495:
	var_35_string = ""; var_36_int = 0;
	var_32_int = var_36_int;
	func_1486(var_35_string, var_36_int);
	HasAnimation(var_33_bool, "all", var_35_string);
	var_40_bool = var_33_bool == 0; //@nz
	if(var_40_bool != 0) {
	} else {
		var_32_int = var_32_int + (int)1;
		goto Label_1495;
	}
	var_32_int = var_29_int;
	return 4;
	
}


func_853(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_861(var_84_bool, var_85_object)
{
	var_86_bool = 0; var_87_bool = 0;
	IsPlayerActor(var_85_object, var_87_bool);
	var_87_bool = var_84_bool;
	return 2;
}


func_480(var_54_bool)
{
	var_54_bool = 1;
	return 0;
}


func_482()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_611(var_0_object, var_1_object, var_2_object, var_99_int)
{
	var_100_cvector = CVector(0,0,0); var_101_float = 0; var_102_cvector = CVector(0,0,0); var_103_float = 0; var_104_cvector = CVector(0,0,0); var_105_float = 0; var_106_cvector = CVector(0,0,0); var_107_float = 0;
	var_109_bool = var_99_int != (int)120;
	if(var_109_bool != 0) {
		return 8;
	}
	var_110_bool = var_0_object == 0; //@ne
	if(var_110_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_104_cvector);
		FindDirLength(var_105_float, var_104_cvector, (float)7000.0);
		var_113_cvector = CVector(0,0,0); var_114_float = 0;
		func_508(var_107_float, var_113_cvector, (float)1.7453293800354004);
		var_113_cvector = var_106_cvector;
		var_107_float = var_106_cvector | var_106_cvector;
		var_143_bool = 0;
		var_143_bool = 0;
		var_145_bool = var_107_float >= (float)2500.0;
		if(var_145_bool != 0) {
			var_146_bool = 0;
			var_147_float = var_105_float * var_105_float;
			var_149_float = var_147_float * (float)2.25;
			var_150_bool = var_107_float >= var_149_float;
			if(var_150_bool != 1) {
				var_151_bool = 0;
				func_679((bool)1, var_151_bool);
				if(var_151_bool != 1) {
					var_146_bool = 0;
				}
			}
			if(var_146_bool != 0) {
				var_143_bool = 1;
			}
		}
		if(var_143_bool == 0) goto Label_662;
		Stop();
		var_171_cvector = CVector(0,0,0);
		func_841(var_171_cvector);
		var_1_object = var_171_cvector + var_106_cvector;
	}
Label_662:
	return 8;
	
}


func_866(var_43_bool, var_44_object, var_45_string)
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


func_995(var_12_object, var_13_int, var_14_float)
{
	var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_int = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0);
	var_33_bool = 0;
	var_33_bool = 0;
	var_34_bool = 0;
	var_34_bool = 0;
	var_35_object = var_12_object;
	if(var_35_object != 0) {
		var_37_bool = var_13_int != (int)4;
		if(var_37_bool != 0) {
			var_34_bool = 1;
		}
	}
	if(var_34_bool != 0) {
		var_39_bool = var_13_int != (int)5;
		if(var_39_bool != 0) {
			var_33_bool = 1;
		}
	}
	if(var_33_bool != 0) {
		var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0);
		var_42_cvector = CVector(0,0,0); var_43_object = Obj();
		var_12_object = var_43_object;
		func_846(var_42_cvector, var_43_object);
		var_42_cvector = var_41_cvector;
		func_1407(var_40_cvector, var_41_cvector);
		var_40_cvector = var_24_cvector;
		CreateVectorVector(var_25_object);
		var_26_int = 1;

	Label_1024:
		var_54_int = "hit" + var_26_int;
		GetGeometryLocator(var_54_int, var_27_bool, var_28_cvector, var_29_cvector);
		var_55_bool = var_27_bool == 0; //@nz
		if(var_55_bool != 0) {
		} else {
			var_103_int = var_29_cvector | var_24_cvector;
			var_105_bool = var_103_int >= (float)0.7071067690849304;
			if(var_105_bool != 0) {
				@@var_25_object:add(var_28_cvector);
			}
			var_26_int = var_26_int + (int)1;
			goto Label_1024;
		}
		@@var_25_object:size(var_30_int);
		var_56_int = var_30_int;
		if(var_56_int != 0) {
			irand(var_31_int, var_30_int);
			@@var_25_object:get(var_32_cvector, var_31_int);
			var_57_object = Obj(); var_58_int = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0);
			var_12_object = var_57_object;
			var_13_int = var_58_int;
			var_14_float = var_59_float;
			var_32_cvector = var_60_cvector;
			var_61_cvector = -var_24_cvector;
			func_1063(var_59_float, var_60_cvector, var_61_cvector);
			return 18;
		}
		var_25_object = 0;
	}
	var_102_object = Obj();
	var_12_object = var_102_object;
	func_951(var_102_object);
	return 18;
	
}


func_1510()
{
	SetVariable("d6q03", (int)2);
	return 0;
}


func_1516()
{
	SetVariable("ood6Albinos1", (int)1);
	return 0;
}


func_878(var_27_float, var_28_object, var_29_float, var_30_int)
{
	var_31_int = 0; var_32_string = ""; var_33_int = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0; var_37_int = 0; var_38_string = ""; var_39_int = 0; var_40_float = 0; var_41_float = 0; var_42_float = 0;
	var_43_bool = 0; var_44_object = Obj(); var_45_string = "";
	var_28_object = var_44_object;
	func_866(var_43_bool, var_44_object, "health");
	var_52_bool = var_43_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_27_float = 0.0;
		return 12;
	}
	var_53_bool = 0; var_54_object = Obj(); var_55_string = "";
	var_28_object = var_54_object;
	func_866(var_53_bool, var_54_object, "armor");
	var_56_bool = var_53_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_37_int = 0;
	} else {
			@@var_28_object:GetProperty("armor", var_37_int);
	}
	var_58_string = ""; var_59_int = 0;
	var_30_int = var_59_int;
	func_827(var_58_string, var_59_int);
	var_38_string = "armor_" + var_58_string;
	var_64_bool = 0; var_65_object = Obj(); var_66_string = "";
	var_28_object = var_65_object;
	var_38_string = var_66_string;
	func_866(var_64_bool, var_65_object, var_66_string);
	var_67_bool = var_64_bool == 0; //@nz
	if(var_67_bool != 0) {
		var_39_int = 0;
	} else {
		@@var_28_object:GetProperty(var_38_string, var_39_int);

	}
	var_68_float = 0; var_69_float = 0; var_70_float = 0;
	var_71_int = var_37_int + var_39_int;
	var_69_float = var_71_int / (float)100.0;
	func_1417(var_68_float, var_69_float, (float)1);
	var_68_float = var_40_float;
	@@var_28_object:GetProperty("health", var_41_float);
	var_76_int = (int)1 - var_40_float;
	var_42_float = var_29_float * var_76_int;
	var_78_float = 0; var_79_float = 0; var_80_float = 0; var_81_float = 0;
	var_79_float = var_41_float - var_42_float;
	func_1424(var_78_float, var_79_float, (float)0, (float)1);
	@@var_28_object:SetProperty("health", var_78_float);
	var_84_bool = 0; var_85_object = Obj();
	var_28_object = var_85_object;
	func_861(var_84_bool, var_85_object);
	if(var_84_bool != 0) {
		var_88_float = 0;
		var_88_float = -var_42_float;
		func_1448(var_88_float);
	}
	var_42_float = var_27_float;
	return 12;
	
}


func_1264(var_123_bool, var_124_object)
{
	var_125_string = ""; var_126_int = 0; var_127_bool = 0; var_128_int = 0; var_129_string = ""; var_130_string = ""; var_131_int = 0; var_132_bool = 0; var_133_int = 0; var_134_string = "";
	var_136_int = 0;
	func_1477(var_136_int);
	var_142_int = "d" + var_136_int;
	var_130_string = var_142_int + "m";
	var_131_int = 0;
	
Label_1273:
	if((int)1 != 0) {
		var_146_int = var_131_int + (int)1;
		var_147_int = var_130_string + var_146_int;
		@@var_124_object:HasProperty(var_147_int, var_132_bool);
		var_148_bool = var_132_bool == 0; //@nz
		if(var_148_bool != 0) {
		} else {
			var_131_int = var_131_int + (int)1;
			goto Label_1273;
		}
	}
	var_149_bool = var_131_int == 0; //@nz
	if(var_149_bool != 0) {
		var_123_bool = 0;
		return 10;
	}
	var_133_int = 0;
	var_151_bool = var_131_int > (int)1;
	if(var_151_bool != 0) {
		irand(var_133_int, var_131_int);
	}
	var_153_int = var_133_int + (int)1;
	var_154_int = var_130_string + var_153_int;
	@@var_124_object:GetProperty(var_154_int, var_134_string);
	var_155_bool = 0; var_156_string = "";
	var_134_string = var_156_string;
	func_1338(var_155_bool, var_156_string);
	var_155_bool = var_123_bool;
	return 10;
	
}


func_1522(var_183_bool)
{
	var_185_int = 0; var_186_string = "";
	func_1443(var_185_int, "ood6Albinos1");
	var_190_bool = var_185_int == (int)0;
	if(var_190_bool != 0) {
		var_183_bool = 1;
		return 0;
	}
	var_183_bool = 0;
	return 0;
}


func_1401(var_83_object)
{
	var_84_object = Obj(); var_85_object = Obj();
	self(var_85_object);
	var_85_object = var_83_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_508(var_0_object, var_113_cvector, var_114_float)
{
	var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_float = 0; var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_float = 0;
	GetPosition(var_121_cvector);
	@@@var_0_object:GetPosition(var_122_cvector);
	GetDirection(var_123_cvector);
	var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0);
	var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0);
	var_130_cvector = var_121_cvector - var_122_cvector;
	func_1407(var_129_cvector, var_130_cvector);
	var_137_float = var_123_cvector * (float)0.75;
	var_128_cvector = var_129_cvector + var_137_float;
	func_1407(var_127_cvector, var_128_cvector);
	var_127_cvector = var_124_cvector;
	FindLongestDir(var_125_cvector, var_126_float, var_124_cvector, var_114_float, (int)32, (float)7000.0);
	var_126_float = var_126_float - (int)100;
	var_142_bool = var_126_float < (int)0;
	if(var_142_bool != 0) {
		var_126_float = 0;
	}
	var_113_cvector = var_125_cvector * var_126_float;
	return 12;
}


func_1534(var_72_int)
{
	var_73_int = 0; var_74_int = 0;
	GetVariable("branch", var_74_int);
	var_77_bool = var_74_int == (int)0;
	if(var_77_bool != 0) {
		var_72_int = 1;
		return 2;
	EMIT "GOTO 0x60d";
	}
	var_79_bool = var_74_int == (int)1;
	if(var_79_bool != 0) {
		var_72_int = 2;
		return 2;
	}
	var_72_int = 3;
	return 2;
}


func_1151()
{
	var_243_bool = 0; var_244_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_246_bool = 0;
	func_1559(var_246_bool);
	if(var_246_bool != 0) {
	} else {
		HasAnimationTrack(var_244_bool, "head");
		var_248_bool = var_244_bool;
		if(var_248_bool == 0) goto Label_1168;
		UnlookAsync("head");
	}
Label_1168:
	return 2;
	
}


