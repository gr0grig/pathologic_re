// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,SetTimer/2,Sleep/1,IsPlayerActor/2,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,StopGroup0/0,Hold/0,GetPosition/1,GetDirection/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,Stop/0,KillTimer/1,FindDirLength/3,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,IsLoaded/1,StopWorld/0,CameraTransit/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,FindActor/2,Trigger/2,HasAnimation/3,SetVariable/2,ReportHit/4,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_d6_03|W:albinos_retreated|A:GetPosition|W:Can't retreat, distance: |W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:playing |W:start: |W:end: |W:d6q03|W:ood6Albinos1|W:player|W:ui/NPC_Black.png|W:albinos_dead
// @GLOBALS: 0:object:
// @RUN_OP: 0x144
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9d vars=int,int
// @TASK_2: vars= params=0
// @EVENT_17: op=0x150 vars=object
// @EVENT_0: op=0x15c vars=object
// @EVENT_7: op=0x167 vars=int
// @TASK_3: vars=object,cvector,bool params=1
// @EVENT_6: op=0x1b9 vars=
// @EVENT_7: op=0x1c1 vars=int
// @EVENT_41: op=0x267 vars=object
// @TASK_4: vars= params=1
// @EVENT_22: op=0x2f6 vars=object,int,float,float
// @EVENT_16: op=0x2f8 vars=object,string
// @EVENT_41: op=0x2fa vars=object
// @STANDALONE_EVENT_22: op=0x4a7 vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x4af vars=object,string
// @STANDALONE_EVENT_41: op=0x4bc vars=object
// @PE: 0x3f,0x8d,0x9d,0x15c,0x167,0x1c1,0x267,0x280,0x2e0,0x2f6,0x2f8,0x2fa,0x2fc,0x3e4,0x40b,0x412,0x41d,0x44e,0x454,0x45a,0x47d,0x4a7,0x4bc

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_cvector, var_9_bool)
{
	if((int)1 != 0) {
		func_1018();
		var_13_bool = var_9_bool == (int)13311;
		if(var_13_bool != 0) {
			var_14_object = Obj(); var_15_object = Obj();
			var_14_object = var_1_object;
			var_15_object = var_0_object;
			func_1102();
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_1108();
		}
		var_23_bool = var_8_cvector == (int)13292;
		if(var_23_bool != 0) {
			var_24_bool = 0; var_25_object = Obj();
			var_25_object = var_1_object;
			func_1114(var_25_object);
			if(var_24_bool != 0) {
				var_32_string = "";
				func_141(var_9_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12071);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12072, (int)13294, (int)13293);
				@@@var_0_object:AddReply((int)12083, (int)13294, (int)13306);
				return 0;
			}
			var_54_string = "";
			func_141(var_9_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13029);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13030, (int)-1, (int)14237);
			return 0;
		}
		var_60_bool = var_8_cvector == (int)13294;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_141(var_9_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12073);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12074, (int)13298, (int)13295);
			@@@var_0_object:AddReply((int)12075, (int)13298, (int)13296);
			@@@var_0_object:AddReply((int)12076, (int)13298, (int)13297);
			return 0;
		}
		var_73_bool = var_8_cvector == (int)13298;
		if(var_73_bool != 0) {
			var_74_string = "";
			func_141(var_9_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12077);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12078, (int)13302, (int)13301);
			@@@var_0_object:AddReply((int)12082, (int)13302, (int)13305);
			return 0;
		}
		var_83_bool = var_8_cvector == (int)13302;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_141(var_9_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12079);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12080, (int)13304, (int)13303);
			@@@var_0_object:AddReply((int)12084, (int)13304, (int)13309);
			return 0;
		}
		var_93_bool = var_8_cvector == (int)13304;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_141(var_9_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12085, (int)-1, (int)13311);
			return 0;
		}
		var_3_string = true;
		var_99_bool = 0;
		func_1147(var_99_bool);
		if(var_99_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9e";
	
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
		func_492(var_13_object, var_14_cvector, var_15_bool, var_12_object);
		TaskReturn();
	}
	return 2;
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool)
{
	func_436();
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
		func_1165();
	}
	return 0;
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	var_8_bool = 0; var_9_string = ""; var_10_string = "";
	func_1066(var_8_bool, "quest_d6_03", "albinos_retreated");
	Hold();
	return 0;
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_int)
{
	var_10_bool = var_8_int == (int)100;
	if(var_10_bool != 0) {
		func_1165();
	} else {
		var_85_int = 0;
		var_8_int = var_85_int;
		func_556(var_6_cvector, var_7_bool, var_8_int, var_85_int);
	}
	return 0;
	
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	func_608(var_8_object);
	var_8_object = Obj();
	func_1212();
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
	func_868(var_13_int, var_14_float);
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
	func_1149(var_9_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	SetTimer((int)100, (float)1.0);
	
Label_328:
	Sleep((int)3);
	func_367();
	goto Label_328;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_9_int, var_10_object)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0;
	var_0_object = var_10_object;
	var_20_bool = 0; var_21_object = Obj();
	var_10_object = var_21_object;
	func_940(var_20_bool, var_21_object);
	var_60_bool = var_20_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	CreateDialog(var_16_object);
	var_61_int = 0;
	func_1143(var_61_int);
	@@var_16_object:SetNPCName(var_61_int);
	var_62_string = "";
	func_1145(var_62_string);
	@@var_16_object:SetPhoto(var_62_string);
	var_63_int = 0;
	func_1126(var_63_int);
	@@var_16_object:SetPlayerName(var_63_int);
	IsOverrideActive(var_17_bool);
	var_71_bool = var_17_bool;
	if(var_71_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	DoDialog(var_16_object);
	var_72_object = Obj(); var_73_object = Obj();
	var_10_object = var_72_object;
	var_16_object = var_73_object;
	TaskCall(1);
	func_63(var_74_object, var_75_object, var_76_string, var_77_bool, var_72_object, var_73_object);
	TaskReturn();
	@@var_16_object:IsDialogEnd(var_19_bool);
	
Label_45:
	var_122_bool = var_19_bool == 0; //@nz
	if(var_122_bool != 0) {
		sync();
		@@var_16_object:IsDialogEnd(var_19_bool);
		goto Label_45;
	}
	var_10_object = Obj();
	func_996();
	StopDialog(var_16_object);
	@@var_16_object:GetReturnValue((int)-1);
	var_18_int = var_9_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1025(var_115_cvector, var_116_cvector)
{
	var_117_float = 0; var_118_float = 0;
	var_119_int = var_116_cvector | var_116_cvector;
	var_118_float = sqrt(var_119_int);
	var_120_float = 9.999999974752427e-07;
	var_121_bool = var_118_float < var_120_float;
	if(var_121_bool != 0) {
		var_115_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_115_cvector = var_116_cvector / var_118_float;
	return 2;
}


func_640(var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_649(var_18_object);
	
Label_645:
	Hold();
	goto Label_645;
}
EMIT "Return(); Pop(0)";


func_772(var_157_cvector)
{
	var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0);
	GetPosition(var_159_cvector);
	var_159_cvector = var_157_cvector;
	return 2;
}


func_777(var_142_cvector, var_143_object)
{
	var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0);
	GetPosition(var_146_cvector);
	@@var_143_object:GetPosition(var_147_cvector);
	var_142_cvector = var_147_cvector - var_146_cvector;
	return 4;
}


func_649(var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0);
	var_39_bool = var_18_object == 0; //@ne
	if(var_39_bool != 0) {
		var_40_string = "";
		func_736("fdie");
	} else {
		@@var_18_object:GetPosition(var_29_cvector);
		GetPosition(var_30_cvector);
		GetDirection(var_31_cvector);
		var_32_cvector = var_30_cvector - var_29_cvector;
		var_43_float = GetByIndex(var_32_cvector, 0);
		var_44_float = GetByIndex(var_31_cvector, 0);
		var_45_float = var_43_float * var_44_float;
		var_46_float = GetByIndex(var_32_cvector, 2);
		var_47_float = GetByIndex(var_31_cvector, 2);
		var_48_float = var_46_float * var_47_float;
		var_49_int = var_45_float + var_48_float;
		var_51_bool = var_49_int >= (int)0;
		if(var_51_bool != 0) {
			var_33_string = "fdie";
		} else {
				var_33_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_18_object = var_34_object;
		var_54_bool = IsFuncExist(var_18_object, "GetScriptProperty", (int)2);
		if(var_54_bool != 0) {
			@@var_18_object:HasScriptProperty(var_35_bool, "Owner");
			var_56_bool = var_35_bool;
			if(var_56_bool != 0) {
				@@var_18_object:GetScriptProperty(var_34_object, "Owner");
				var_58_bool = var_34_object == 0; //@ne
				if(var_58_bool != 0) {
					var_18_object = var_34_object;
				}
			}
		}
		var_61_bool = IsFuncExist(var_34_object, "@GetEyesHeight", (int)1);
		if(var_61_bool != 0) {
			@@var_34_object:GetEyesHeight(var_37_float);
			var_38_cvector = CVector(0.0, 0.0, 0.0);
			var_62_float = GetByIndex(var_38_cvector, 1);
			var_37_float = var_62_float;
			SetByIndex(var_38_cvector, 1) = var_62_float;
			LookAsync(var_18_object, "head", var_38_cvector);
			var_36_bool = 1;
		} else {
			var_36_bool = 0;

		}
		PlayAnimation("all", var_33_string);
		WaitForAnimEnd();
		var_65_bool = var_36_bool;
		if(var_65_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_33_string);
		RemoveEnvelope();
		var_34_object = 0;
	}
	return 20;
	
}


func_1035(var_66_float, var_67_float, var_68_float)
{
	var_71_bool = var_67_float < var_68_float;
	if(var_71_bool != 0) {
		var_67_float = var_66_float;
	} else {
		var_68_float = var_66_float;
	}
	return 0;
	
}


func_141(var_2_object, var_87_string)
{
	var_88_bool = 0;
	func_1147(var_88_bool);
	var_89_bool = var_88_bool == 0; //@nz
	if(var_89_bool != 0) {
		return 0;
	}
	var_90_bool = var_87_string == var_2_object;
	if(var_90_bool != 0) {
		return 0;
	}
	var_91_string = "";
	var_87_string = var_91_string;
	func_1000(var_91_string);
	var_2_object = var_87_string;
	return 0;
}


func_1165()
{
	var_11_object = Obj(); var_12_float = 0; var_13_object = Obj(); var_14_float = 0;
	FindActor(var_13_object, "player");
	var_16_object = var_13_object;
	if(var_16_object != 0) {
		var_17_float = 0; var_18_object = Obj();
		var_13_object = var_18_object;
		func_784(var_17_float, var_18_object);
		var_26_bool = var_17_float <= (float)640000.0;
		if(var_26_bool != 0) {
			var_27_float = 0; var_28_object = Obj(); var_29_float = 0; var_30_int = 0;
			var_13_object = var_28_object;
			func_804(var_27_float, var_28_object, (float)0.05000000074505806, (int)0);
			var_27_float = var_14_float;
			ReportHit(var_13_object, (int)6, var_14_float, (float)0.05000000074505806);
		}
	}
	return 4;
}
EMIT "Stack[-2] = 0";


func_784(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_1042(var_76_float, var_77_float, var_78_float, var_79_float)
{
	var_80_bool = var_77_float < var_78_float;
	if(var_80_bool != 0) {
		var_78_float = var_76_float;
		return 0;
	}
	var_81_bool = var_77_float > var_79_float;
	if(var_81_bool != 0) {
		var_79_float = var_76_float;
		return 0;
	}
	var_77_float = var_76_float;
	return 0;
}


func_792(var_43_bool, var_44_object, var_45_string)
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


func_1053(var_148_float, var_149_cvector, var_150_cvector)
{
	var_151_int = var_149_cvector | var_150_cvector;
	var_152_int = var_149_cvector | var_149_cvector;
	var_153_int = var_150_cvector | var_150_cvector;
	var_154_float = var_152_int * var_153_int;
	var_155_float = sqrt(var_154_float);
	var_148_float = var_151_int / var_155_float;
	return 0;
}


func_804(var_27_float, var_28_object, var_29_float, var_30_int)
{
	var_31_int = 0; var_32_string = ""; var_33_int = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0; var_37_int = 0; var_38_string = ""; var_39_int = 0; var_40_float = 0; var_41_float = 0; var_42_float = 0;
	var_43_bool = 0; var_44_object = Obj(); var_45_string = "";
	var_28_object = var_44_object;
	func_792(var_43_bool, var_44_object, "health");
	var_52_bool = var_43_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_27_float = 0.0;
		return 12;
	}
	var_53_bool = 0; var_54_object = Obj(); var_55_string = "";
	var_28_object = var_54_object;
	func_792(var_53_bool, var_54_object, "armor");
	var_56_bool = var_53_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_37_int = 0;
	} else {
			@@var_28_object:GetProperty("armor", var_37_int);
	}
	var_58_string = ""; var_59_int = 0;
	var_30_int = var_59_int;
	func_764(var_58_string, var_59_int);
	var_38_string = "armor_" + var_58_string;
	var_62_bool = 0; var_63_object = Obj(); var_64_string = "";
	var_28_object = var_63_object;
	var_38_string = var_64_string;
	func_792(var_62_bool, var_63_object, var_64_string);
	var_65_bool = var_62_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_39_int = 0;
	} else {
		@@var_28_object:GetProperty(var_38_string, var_39_int);

	}
	var_66_float = 0; var_67_float = 0; var_68_float = 0;
	var_69_int = var_37_int + var_39_int;
	var_67_float = var_69_int / (float)100.0;
	func_1035(var_66_float, var_67_float, (float)1);
	var_66_float = var_40_float;
	@@var_28_object:GetProperty("health", var_41_float);
	var_74_int = (int)1 - var_40_float;
	var_42_float = var_29_float * var_74_int;
	var_76_float = 0; var_77_float = 0; var_78_float = 0; var_79_float = 0;
	var_77_float = var_41_float - var_42_float;
	func_1042(var_76_float, var_77_float, (float)0, (float)1);
	@@var_28_object:SetProperty("health", var_76_float);
	var_42_float = var_27_float;
	return 12;
	
}


func_1061(var_81_int, var_82_string)
{
	var_83_int = 0; var_84_int = 0;
	GetVariable(var_82_string, var_84_int);
	var_84_int = var_81_int;
	return 2;
}


func_935(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0;
	IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
	return 2;
}


func_1066(var_11_bool, var_12_string, var_13_string)
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


func_940(var_20_bool, var_21_object)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0;
	@@var_21_object:GetPosition(var_31_cvector);
	@@var_21_object:GetEyesHeight(var_30_float);
	var_38_float = GetByIndex(var_31_cvector, 1);
	var_38_float = var_38_float + var_30_float;
	SetByIndex(var_31_cvector, 1) = var_38_float;
	GetPosition(var_32_cvector);
	GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_32_cvector, 1);
	var_39_float = var_39_float + var_30_float;
	SetByIndex(var_32_cvector, 1) = var_39_float;
	var_33_cvector = var_31_cvector - var_32_cvector;
	var_40_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_41_int = var_33_cvector | var_33_cvector;
	var_42_float = sqrt(var_41_int);
	var_33_cvector = var_33_cvector / var_42_float;
	var_34_cvector = -var_33_cvector;
	var_44_float = var_33_cvector * (int)70;
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_34_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1025(var_45_cvector, var_46_cvector);
	var_54_float = var_45_cvector * (int)25;
	var_55_int = var_44_float + var_54_float;
	var_35_cvector = var_55_int - CVector(0.0, 10.0, 0.0);
	var_36_cvector = var_32_cvector + var_35_cvector;
	IsOverrideActive(var_37_bool);
	var_57_bool = var_37_bool;
	if(var_57_bool != 0) {
		var_20_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_36_cvector, var_34_cvector);
	var_58_float = GetByIndex(var_35_cvector, 0);
	var_59_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_58_float, var_59_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_20_bool = 1;
	return 16;
}


func_556(var_0_object, var_1_object, var_2_object, var_85_int)
{
	var_86_cvector = CVector(0,0,0); var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0;
	var_95_bool = var_85_int != (int)120;
	if(var_95_bool != 0) {
		return 8;
	}
	var_96_bool = var_0_object == 0; //@ne
	if(var_96_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_90_cvector);
		FindDirLength(var_91_float, var_90_cvector, (float)7000.0);
		var_99_cvector = CVector(0,0,0); var_100_float = 0;
		func_462(var_93_float, var_99_cvector, (float)1.7453293800354004);
		var_99_cvector = var_92_cvector;
		var_93_float = var_92_cvector | var_92_cvector;
		var_129_bool = 0;
		var_129_bool = 0;
		var_131_bool = var_93_float >= (float)10000.0;
		if(var_131_bool != 0) {
			var_132_bool = 0;
			var_133_float = var_91_float * var_91_float;
			var_135_float = var_133_float * (float)2.25;
			var_136_bool = var_93_float >= var_135_float;
			if(var_136_bool != 1) {
				var_137_bool = 0;
				func_624((bool)1, var_137_bool);
				if(var_137_bool != 1) {
					var_132_bool = 0;
				}
			}
			if(var_132_bool != 0) {
				var_129_bool = 1;
			}
		}
		if(var_129_bool == 0) goto Label_607;
		Stop();
		var_157_cvector = CVector(0,0,0);
		func_772(var_157_cvector);
		var_1_object = var_157_cvector + var_92_cvector;
	}
Label_607:
	return 8;
	
}


func_436()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1078(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = "";
	var_39_int = var_36_int;
	if(var_39_int != 0) {
		"idle" = "idle" + var_36_int;
	}
	var_38_string = var_35_string;
	return 2;
}


func_1085(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0;
	var_32_int = 0;
	
Label_1087:
	var_35_string = ""; var_36_int = 0;
	var_32_int = var_36_int;
	func_1078(var_35_string, var_36_int);
	HasAnimation(var_33_bool, "all", var_35_string);
	var_40_bool = var_33_bool == 0; //@nz
	if(var_40_bool != 0) {
	} else {
		var_32_int = var_32_int + (int)1;
		goto Label_1087;
	}
	var_32_int = var_29_int;
	return 4;
	
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_72_object, var_73_object)
{
	var_0_object = var_73_object;
	var_1_object = var_72_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_79_bool = 0; var_80_object = Obj();
		var_80_object = var_1_object;
		func_1114(var_80_object);
		if(var_79_bool != 0) {
			var_87_string = "";
			func_141(var_73_object, "Neutral");
			@@@var_0_object:SetMessage((int)12071);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12072, (int)13294, (int)13293);
			@@@var_0_object:AddReply((int)12083, (int)13294, (int)13306);
		} else {
				var_117_string = "";
				func_141(var_73_object, "Neutral");
				@@@var_0_object:SetMessage((int)13029);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13030, (int)-1, (int)14237);
				goto Label_111;
		}
	}
Label_111:
	var_109_bool = 0;
	func_1147(var_109_bool);
	if(var_109_bool != 0) {

	Label_115:
		lshWaitForAnimEnd();
		var_110_string = var_3_string;
		if(var_110_string != 0) {
		} else {
			var_111_string = "";
			var_111_string = var_2_object;
			func_1000(var_111_string);
			goto Label_115;
	}
		PlayAnimation("all", "idle");

	Label_130:
		WaitForAnimEnd();
		var_114_string = var_3_string;
		if(var_114_string != 0) {
			goto Label_140;
		}
		PlayAnimation("all", "idle");
		goto Label_130;

	}
	goto Label_140;
	
Label_140:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


func_1102()
{
	SetVariable("d6q03", (int)2);
	return 0;
}


func_462(var_0_object, var_99_cvector, var_100_float)
{
	var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_float = 0;
	GetPosition(var_107_cvector);
	@@@var_0_object:GetPosition(var_108_cvector);
	GetDirection(var_109_cvector);
	var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0);
	var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0);
	var_116_cvector = var_107_cvector - var_108_cvector;
	func_1025(var_115_cvector, var_116_cvector);
	var_123_float = var_109_cvector * (float)0.75;
	var_114_cvector = var_115_cvector + var_123_float;
	func_1025(var_113_cvector, var_114_cvector);
	var_113_cvector = var_110_cvector;
	FindLongestDir(var_111_cvector, var_112_float, var_110_cvector, var_100_float, (int)32, (float)7000.0);
	var_112_float = var_112_float - (int)100;
	var_128_bool = var_112_float < (int)0;
	if(var_128_bool != 0) {
		var_112_float = 0;
	}
	var_99_cvector = var_111_cvector * var_112_float;
	return 12;
}


func_1108()
{
	SetVariable("ood6Albinos1", (int)1);
	return 0;
}


func_1114(var_79_bool)
{
	var_81_int = 0; var_82_string = "";
	func_1061(var_81_int, "ood6Albinos1");
	var_86_bool = var_81_int == (int)0;
	if(var_86_bool != 0) {
		var_79_bool = 1;
		return 0;
	}
	var_79_bool = 0;
	return 0;
}


func_608(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_736(var_40_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_40_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_40_string);
	RemoveEnvelope();
	return 0;
}


func_996()
{
	CameraSwitchToNormal();
	return 0;
}


func_868(var_12_object, var_13_int)
{
	var_15_object = Obj(); var_16_object = Obj(); var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_int = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_object = Obj(); var_26_object = Obj(); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = "";
	var_35_bool = 0;
	var_35_bool = 0;
	var_37_bool = var_13_int != (int)4;
	if(var_37_bool != 0) {
		var_39_bool = var_13_int != (int)5;
		if(var_39_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		GetScene(var_25_object);
		GetPosition(var_27_cvector);
		GetEyesHeight(var_28_float);
		var_40_float = GetByIndex(var_27_cvector, 1);
		var_42_float = var_28_float / (int)2;
		var_40_float = var_40_float + var_42_float;
		SetByIndex(var_27_cvector, 1) = var_40_float;
		AddActorByType(var_26_object, "scripted", var_25_object, var_27_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_26_object = 0;
		var_25_object = 0;
	}
	var_46_bool = var_12_object == 0; //@ne
	if(var_46_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_29_int);
	var_48_bool = var_29_int < (int)0;
	if(var_48_bool != 0) {
		return 20;
	}
	@@var_12_object:GetPosition(var_30_cvector);
	GetPosition(var_31_cvector);
	GetDirection(var_32_cvector);
	var_33_cvector = var_31_cvector - var_30_cvector;
	var_49_float = GetByIndex(var_33_cvector, 0);
	var_50_float = GetByIndex(var_32_cvector, 0);
	var_51_float = var_49_float * var_50_float;
	var_52_float = GetByIndex(var_33_cvector, 2);
	var_53_float = GetByIndex(var_32_cvector, 2);
	var_54_float = var_52_float * var_53_float;
	var_55_int = var_51_float + var_54_float;
	var_57_bool = var_55_int >= (int)0;
	if(var_57_bool != 0) {
		var_34_string = "fhit";
	} else {
		var_34_string = "bhit";
	}
	var_60_int = var_34_string + "1";
	var_62_int = var_34_string + "2";
	FadeSecondaryAnimation("hit_react", var_60_int, var_62_int, (int)-10);
	return 20;
	
}


func_1126(var_63_int)
{
	var_64_int = 0; var_65_int = 0;
	GetVariable("player", var_65_int);
	var_68_bool = var_65_int == (int)0;
	if(var_68_bool != 0) {
		var_63_int = 200001;
		return 2;
	EMIT "GOTO 0x475";
	}
	var_70_bool = var_65_int == (int)1;
	if(var_70_bool != 0) {
		var_63_int = 200002;
		return 2;
	}
	var_63_int = 200003;
	return 2;
}


func_1000(var_91_string)
{
	var_92_float = 0; var_93_float = 0; var_94_float = 0; var_95_float = 0;
	var_97_int = "playing " + var_91_string;
	Trace(var_97_int);
	lshGetAnimTimes(var_91_string, var_94_float, var_95_float);
	lshPlayAnimation(var_94_float, var_95_float);
	var_99_int = "start: " + var_94_float;
	Trace(var_99_int);
	var_101_int = "end: " + var_95_float;
	Trace(var_101_int);
	return 4;
}


func_492(var_0_object, var_1_object, var_2_object, var_12_object)
{
	var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0;
	var_0_object = var_12_object;
	var_26_cvector = CVector(0,0,0); var_27_float = 0;
	func_462(var_25_float, var_26_cvector, (float)1.7453293800354004);
	var_26_cvector = var_21_cvector;
	var_22_float = var_21_cvector | var_21_cvector;
	var_57_bool = var_22_float < (float)10000.0;
	if(var_57_bool != 0) {
		var_59_float = sqrt(var_22_float);
		var_60_int = "Can't retreat, distance: " + var_59_float;
		Trace(var_60_int);
		Sleep((float)0.5);
		return 10;
	}
	var_62_float = GetByIndex(var_21_cvector, 0);
	var_63_float = GetByIndex(var_21_cvector, 2);
	Rotate(var_62_float, var_63_float);
	var_64_cvector = CVector(0,0,0);
	func_772(var_64_cvector);
	var_1_object = var_64_cvector + var_21_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_525:
	MovePoint(var_1_object, (int)1, var_23_bool);
	var_70_bool = var_23_bool;
	if(var_70_bool != 0) {
		var_71_bool = var_0_object == 0; //@ne
		if(var_71_bool != 0) {
			goto Label_555;
		EMIT "GOTO 0x229";

		Label_555:
			return 10;
		}
		var_72_cvector = CVector(0,0,0); var_73_float = 0;
		func_462(var_25_float, var_72_cvector, (float)2.6179938316345215);
		var_72_cvector = var_24_cvector;
		var_25_float = var_24_cvector | var_24_cvector;
		var_75_bool = var_25_float >= (float)10000.0;
		if(var_75_bool != 0) {
			var_76_cvector = CVector(0,0,0);
			func_772(var_76_cvector);
			var_1_object = var_76_cvector + var_24_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_555;
		}
	}
	var_79_bool = var_2_object == 0; //@nz
	if(var_79_bool == 1) goto Label_525;
	
}


func_367()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0;
	WaitForAnimEnd();
	var_25_bool = 0;
	func_935(var_25_bool);
	var_28_bool = var_25_bool == 0; //@nz
	if(var_28_bool != 0) {
		return 14;
	}
	func_1085((int)0);
	var_29_int = var_18_int;
	var_19_int = 0;
	
Label_381:
	var_42_bool = 0;
	var_42_bool = 0;
	var_44_bool = var_19_int < (int)5;
	if(var_44_bool != 0) {
		var_45_bool = 0;
		func_935(var_45_bool);
		if(var_45_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		irand(var_20_int, (int)3);
		var_48_bool = var_20_int == (int)0;
		if(var_48_bool != 0) {
			var_49_int = var_18_int;
			if(var_49_int == 0) goto Label_414;
			irand(var_21_int, var_18_int);
			var_51_string = ""; var_52_int = 0;
			var_21_int = var_52_int;
			func_1078(var_51_string, var_52_int);
			PlayAnimation("all", var_51_string);
			WaitForAnimEnd(var_22_bool);
			var_53_bool = var_22_bool == 0; //@nz
			if(var_53_bool != 0) {
			} else {
		} else {
				var_56_bool = var_20_int == (int)1;
				if(var_56_bool != 0) {
					rand(var_23_float, (int)4);
					var_59_int = var_23_float + (int)1;
					Sleep(var_59_int, var_24_bool);
					var_60_bool = var_24_bool == 0; //@nz
					if(var_60_bool != 0) {
						goto Label_435;
					}
					goto Label_432;
				}
				var_61_int = var_19_int;
				if(var_61_int == 0) goto Label_432;
				goto Label_435;
		}
		Label_432:
			var_19_int = var_19_int + (int)1;
			goto Label_381;

		}
	}
Label_435:
	return 14;
	
}


func_624(var_0_object, var_137_bool)
{
	var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0);
	GetDirection(var_140_cvector);
	var_142_cvector = CVector(0,0,0); var_143_object = Obj();
	var_143_object = var_0_object;
	func_777(var_142_cvector, var_143_object);
	var_142_cvector = var_141_cvector;
	var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0);
	var_140_cvector = var_149_cvector;
	var_141_cvector = var_150_cvector;
	func_1053(var_148_float, var_149_cvector, var_150_cvector);
	var_137_bool = var_148_float >= (float)-0.3420201241970062;
	return 4;
}


func_1143(var_61_int)
{
	var_61_int = 12611;
	return 0;
}


func_1145(var_62_string)
{
	var_62_string = "ui/NPC_Black.png";
	return 0;
}


func_1018()
{
	var_11_bool = 0;
	func_1147(var_11_bool);
	if(var_11_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1147(var_88_bool)
{
	var_88_bool = 0;
	return 0;
}


func_764(var_58_string, var_59_int)
{
	var_61_bool = var_59_int == (int)1;
	if(var_61_bool != 0) {
		var_58_string = "fire";
		return 0;
	}
	var_58_string = "phys";
	return 0;
}


func_1149(var_9_object)
{
	KillTimer((int)100);
	var_11_bool = 0; var_12_string = ""; var_13_string = "";
	func_1066(var_11_bool, "quest_d6_03", "albinos_dead");
	var_17_object = Obj();
	var_9_object = var_17_object;
	TaskCall(4);
	func_640(var_17_object);
	TaskReturn();
	return 0;
}


