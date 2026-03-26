// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,SetProperty/2,rand/2,Sleep/1,GetPosition/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,Stop/0,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,GetDirection/1,FindLongestDir/6,Trace/1,Rotate/2,SetTimer/2,MovePoint/3,KillTimer/1,FindDirLength/3,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,IsLoaded/1,StopWorld/0,CameraTransit/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,HasAnimation/3,TriggerWorld/2,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetVariable/2,CreateDiaryEntry/4,GetProperty/2,SignalDeath/1,IsPlayerActor/2
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_d3_03|W:boy_free|W:noaccess|A:GetPosition|W:Can't retreat, distance: |W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|A:GetProperty|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:d3q03|W:disease|A:SetProperty|W:powder is given|W:powder|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:player|W:Adding diary entry|W:ui/NPC_None.png|W:health|W:boy_attacked
// @GLOBALS: 0:object:
// @RUN_OP: 0x108
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x84 vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x10c vars=object
// @TASK_3: vars=bool,bool params=0
// @EVENT_17: op=0x127 vars=object
// @EVENT_10: op=0x16e vars=object
// @EVENT_28: op=0x172 vars=
// @EVENT_41: op=0x17c vars=object
// @TASK_4: vars= params=0
// @EVENT_17: op=0x187 vars=object
// @TASK_5: vars=object,cvector,bool params=1
// @EVENT_7: op=0x23d vars=int
// @EVENT_41: op=0x278 vars=object
// @TASK_6: vars= params=1
// @EVENT_22: op=0x307 vars=object,int,float,float
// @EVENT_16: op=0x309 vars=object,string
// @EVENT_41: op=0x30b vars=object
// @STANDALONE_EVENT_22: op=0x4d0 vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x4d8 vars=object,string
// @STANDALONE_EVENT_41: op=0x4e5 vars=object
// @STANDALONE_EVENT_17: op=0x4fa vars=object
// @PE: 0x3f,0x74,0x84,0x10c,0x127,0x16e,0x17c,0x187,0x278,0x291,0x2f1,0x307,0x309,0x30b,0x3e6,0x40d,0x453,0x46c,0x4c8,0x4d0,0x4e5,0x4eb,0x4f2

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	if((int)1 != 0) {
		func_1020();
		var_15_bool = var_11_bool == (int)12062;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_1113(var_17_object);
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_1132(var_53_object);
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_1107();
		}
		var_76_bool = var_10_cvector == (int)12052;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_116(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10904);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10905, (int)12054, (int)12053);
			return 0;
		}
		var_97_bool = var_10_cvector == (int)12054;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_116(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10906);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10907, (int)12056, (int)12055);
			return 0;
		}
		var_104_bool = var_10_cvector == (int)12056;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_116(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10908);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10909, (int)12058, (int)12057);
			return 0;
		}
		var_111_bool = var_10_cvector == (int)12058;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_116(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10910);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10911, (int)12061, (int)12059);
			@@@var_0_object:AddReply((int)10912, (int)12061, (int)12060);
			return 0;
		}
		var_121_bool = var_10_cvector == (int)12061;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_116(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10913);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10914, (int)-1, (int)12062);
			return 0;
		}
		var_3_string = true;
		var_127_bool = 0;
		func_1222(var_127_bool);
		if(var_127_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x85";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_object = Obj();
	var_10_bool = var_12_object;
	TaskCall(0);
	func_0(var_13_object, var_11_int, var_12_object);
	TaskReturn();
	TaskCall(3);
	func_281();
	TaskReturn();
	return 0;
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj();
	var_10_bool = var_12_object;
	func_1259(var_11_bool, var_12_object);
	if(var_11_bool != 0) {
		func_373(var_9_cvector, var_10_bool);
		var_47_object = Obj();
		var_10_bool = var_47_object;
		func_1266(var_47_object);
	}
	return 0;
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	RequestClearPath(var_10_bool);
	return 0;
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	Stop();
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	func_373(var_9_cvector, var_10_bool);
	var_10_bool = Obj();
	func_1253();
	return 0;
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj();
	var_10_bool = var_12_object;
	func_1259(var_11_bool, var_12_object);
	if(var_11_bool != 0) {
		func_474();
		var_47_object = Obj();
		var_10_bool = var_47_object;
		func_1266(var_47_object);
	}
	return 0;
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_int)
{
	var_11_cvector = CVector(0,0,0); var_12_float = 0; var_13_cvector = CVector(0,0,0); var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0;
	var_20_bool = var_10_int != (int)120;
	if(var_20_bool != 0) {
		return 8;
	}
	var_21_bool = var_0_object == 0; //@ne
	if(var_21_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_15_cvector);
		FindDirLength(var_16_float, var_15_cvector, (float)7000.0);
		var_24_cvector = CVector(0,0,0); var_25_float = 0;
		func_479(var_18_float, var_24_cvector, (float)1.7453293800354004);
		var_24_cvector = var_17_cvector;
		var_18_float = var_17_cvector | var_17_cvector;
		var_54_bool = 0;
		var_54_bool = 0;
		var_56_bool = var_18_float >= (float)10000.0;
		if(var_56_bool != 0) {
			var_57_bool = 0;
			var_58_float = var_16_float * var_16_float;
			var_60_float = var_58_float * (float)2.25;
			var_61_bool = var_18_float >= var_60_float;
			if(var_61_bool != 1) {
				var_62_bool = 0;
				func_641((bool)1, var_62_bool);
				if(var_62_bool != 1) {
					var_57_bool = 0;
				}
			}
			if(var_57_bool != 0) {
				var_54_bool = 1;
			}
		}
		if(var_54_bool == 0) goto Label_624;
		Stop();
		var_82_cvector = CVector(0,0,0);
		func_781(var_82_cvector);
		var_1_object = var_82_cvector + var_17_cvector;
	}
Label_624:
	return 8;
	
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	func_625(var_10_object);
	var_10_object = Obj();
	func_1253();
	return 0;
}


task_6_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0;
}


task_6_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_string)
{
	return 0;
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
	var_10_object = var_14_object;
	var_11_int = var_15_int;
	var_12_float = var_16_float;
	func_870(var_15_int, var_16_float);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0;
	var_15_bool = var_11_string == "health";
	if(var_15_bool != 0) {
		GetProperty("health", var_13_float);
		var_18_bool = var_13_float <= (int)0;
		if(var_18_bool != 0) {
			SignalDeath(var_10_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	func_1224(var_11_object);
	return 0;
}


event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsPlayerActor(var_10_object, var_12_bool);
	var_13_bool = var_12_bool;
	if(var_13_bool != 0) {
		var_14_bool = 0; var_15_string = ""; var_16_string = "";
		func_1071(var_14_bool, "quest_d3_03", "boy_attacked");
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	
Label_264:
	Hold();
	goto Label_264;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_11_int, var_12_object)
{
	var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; var_20_int = 0; var_21_bool = 0;
	var_0_object = var_12_object;
	var_22_bool = 0; var_23_object = Obj();
	var_12_object = var_23_object;
	func_942(var_22_bool, var_23_object);
	var_62_bool = var_22_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_11_int = -2;
		return 8;
	}
	CreateDialog(var_18_object);
	var_63_int = 0;
	func_1218(var_63_int);
	@@var_18_object:SetNPCName(var_63_int);
	var_64_string = "";
	func_1220(var_64_string);
	@@var_18_object:SetPhoto(var_64_string);
	var_65_int = 0;
	func_1185(var_65_int);
	@@var_18_object:SetPlayerName(var_65_int);
	IsOverrideActive(var_19_bool);
	var_73_bool = var_19_bool;
	if(var_73_bool != 0) {
		var_11_int = -2;
		return 8;
	}
	DoDialog(var_18_object);
	var_74_object = Obj(); var_75_object = Obj();
	var_12_object = var_74_object;
	var_18_object = var_75_object;
	TaskCall(1);
	func_63(var_76_object, var_77_object, var_78_string, var_79_bool, var_74_object, var_75_object);
	TaskReturn();
	@@var_18_object:IsDialogEnd(var_21_bool);
	
Label_45:
	var_108_bool = var_21_bool == 0; //@nz
	if(var_108_bool != 0) {
		sync();
		@@var_18_object:IsDialogEnd(var_21_bool);
		goto Label_45;
	}
	var_12_object = Obj();
	func_998();
	StopDialog(var_18_object);
	@@var_18_object:GetReturnValue((int)-1);
	var_20_int = var_11_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_641(var_0_object, var_62_bool)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
	GetDirection(var_65_cvector);
	var_67_cvector = CVector(0,0,0); var_68_object = Obj();
	var_68_object = var_0_object;
	func_786(var_67_cvector, var_68_object);
	var_67_cvector = var_66_cvector;
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0);
	var_65_cvector = var_74_cvector;
	var_66_cvector = var_75_cvector;
	func_1037(var_73_float, var_74_cvector, var_75_cvector);
	var_62_bool = var_73_float >= (float)-0.3420201241970062;
	return 4;
}


func_1027(var_40_cvector, var_41_cvector)
{
	var_42_float = 0; var_43_float = 0;
	var_44_int = var_41_cvector | var_41_cvector;
	var_43_float = sqrt(var_44_int);
	var_45_float = 9.999999974752427e-07;
	var_46_bool = var_43_float < var_45_float;
	if(var_46_bool != 0) {
		var_40_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_40_cvector = var_41_cvector / var_43_float;
	return 2;
}


func_1156(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0;
	func_1143(Obj());
	var_37_object = var_34_object;
	@@var_34_object:Find(var_30_int, var_35_object);
	var_42_bool = var_35_object == 0; //@nz
	if(var_42_bool != 0) {
		var_44_int = "Can't find diary parent with id: " + var_30_int;
		Trace(var_44_int);
		var_28_bool = 0;
		return 6;
	}
	@@var_35_object:AddChild(var_29_object);
	SetVariable("player_diary", (int)1);
	@@var_29_object:GetCategory(var_36_int);
	SetDiarySection(var_36_int);
	var_28_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_389(var_141_bool)
{
	var_141_bool = 0;
	return 0;
}


func_781(var_82_cvector)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0);
	GetPosition(var_84_cvector);
	var_84_cvector = var_82_cvector;
	return 2;
}


func_1037(var_73_float, var_74_cvector, var_75_cvector)
{
	var_76_int = var_74_cvector | var_75_cvector;
	var_77_int = var_74_cvector | var_74_cvector;
	var_78_int = var_75_cvector | var_75_cvector;
	var_79_float = var_77_int * var_78_int;
	var_80_float = sqrt(var_79_float);
	var_73_float = var_76_int / var_80_float;
	return 0;
}


func_657(var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	func_666(var_13_object);
	
Label_662:
	Hold();
	goto Label_662;
}
EMIT "Return(); Pop(0)";


func_786(var_67_cvector, var_68_object)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	GetPosition(var_71_cvector);
	@@var_68_object:GetPosition(var_72_cvector);
	var_67_cvector = var_72_cvector - var_71_cvector;
	return 4;
}


func_405()
{
	var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_int = 0; var_147_bool = 0; var_148_float = 0; var_149_bool = 0; var_150_int = 0; var_151_int = 0; var_152_int = 0; var_153_int = 0; var_154_bool = 0; var_155_float = 0; var_156_bool = 0;
	WaitForAnimEnd();
	var_157_bool = 0;
	func_937(var_157_bool);
	var_160_bool = var_157_bool == 0; //@nz
	if(var_160_bool != 0) {
		return 14;
	}
	func_1090((int)0);
	var_161_int = var_150_int;
	var_151_int = 0;
	
Label_419:
	var_174_bool = 0;
	var_174_bool = 0;
	var_176_bool = var_151_int < (int)5;
	if(var_176_bool != 0) {
		var_177_bool = 0;
		func_937(var_177_bool);
		if(var_177_bool != 0) {
			var_174_bool = 1;
		}
	}
	if(var_174_bool != 0) {
		irand(var_152_int, (int)3);
		var_180_bool = var_152_int == (int)0;
		if(var_180_bool != 0) {
			var_181_int = var_150_int;
			if(var_181_int == 0) goto Label_452;
			irand(var_153_int, var_150_int);
			var_183_string = ""; var_184_int = 0;
			var_153_int = var_184_int;
			func_1083(var_183_string, var_184_int);
			PlayAnimation("all", var_183_string);
			WaitForAnimEnd(var_154_bool);
			var_185_bool = var_154_bool == 0; //@nz
			if(var_185_bool != 0) {
			} else {
		} else {
				var_188_bool = var_152_int == (int)1;
				if(var_188_bool != 0) {
					rand(var_155_float, (int)4);
					var_191_int = var_155_float + (int)1;
					Sleep(var_191_int, var_156_bool);
					var_192_bool = var_156_bool == 0; //@nz
					if(var_192_bool != 0) {
						goto Label_473;
					}
					goto Label_470;
				}
				var_193_int = var_151_int;
				if(var_193_int == 0) goto Label_470;
				goto Label_473;
		}
		Label_470:
			var_151_int = var_151_int + (int)1;
			goto Label_419;

		}
	}
Label_473:
	return 14;
	
}


func_1045(var_60_object, var_61_object, var_62_int)
{
	var_63_int = 0; var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_int = 0; var_68_bool = 0;
	@@var_61_object:GetItemID(var_66_int);
	GetInvItemProperty(var_67_int, var_66_int, "Category");
	@@var_60_object:AddItem(var_68_bool, var_61_object, var_67_int, var_62_int);
	var_70_bool = var_68_bool == 0; //@nz
	if(var_70_bool != 0) {
		@@var_60_object:DropItems(var_61_object, var_62_int);
	}
	return 6;
}


func_281()
{
	var_112_bool = 0; var_113_string = ""; var_114_string = "";
	func_1071(var_112_bool, "quest_d3_03", "boy_free");
	SetProperty("noaccess", (int)0);
	
Label_290:
	func_309(var_110_bool, var_111_bool);
	goto Label_290;
}
EMIT "Return(); Pop(0)";


func_793(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0;
	var_42_bool = IsFuncExist(var_36_object, "HasProperty", (int)2);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_35_bool = 0;
		return 2;
	}
	@@var_36_object:HasProperty(var_37_string, var_39_bool);
	var_39_bool = var_35_bool;
	return 2;
}


func_666(var_13_object)
{
	var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_string = ""; var_19_object = Obj(); var_20_bool = 0; var_21_bool = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0);
	var_34_bool = var_13_object == 0; //@ne
	if(var_34_bool != 0) {
		var_35_string = "";
		func_753("fdie");
	} else {
		@@var_13_object:GetPosition(var_24_cvector);
		GetPosition(var_25_cvector);
		GetDirection(var_26_cvector);
		var_27_cvector = var_25_cvector - var_24_cvector;
		var_38_float = GetByIndex(var_27_cvector, 0);
		var_39_float = GetByIndex(var_26_cvector, 0);
		var_40_float = var_38_float * var_39_float;
		var_41_float = GetByIndex(var_27_cvector, 2);
		var_42_float = GetByIndex(var_26_cvector, 2);
		var_43_float = var_41_float * var_42_float;
		var_44_int = var_40_float + var_43_float;
		var_46_bool = var_44_int >= (int)0;
		if(var_46_bool != 0) {
			var_28_string = "fdie";
		} else {
				var_28_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_13_object = var_29_object;
		var_49_bool = IsFuncExist(var_13_object, "GetScriptProperty", (int)2);
		if(var_49_bool != 0) {
			@@var_13_object:HasScriptProperty(var_30_bool, "Owner");
			var_51_bool = var_30_bool;
			if(var_51_bool != 0) {
				@@var_13_object:GetScriptProperty(var_29_object, "Owner");
				var_53_bool = var_29_object == 0; //@ne
				if(var_53_bool != 0) {
					var_13_object = var_29_object;
				}
			}
		}
		var_56_bool = IsFuncExist(var_29_object, "@GetEyesHeight", (int)1);
		if(var_56_bool != 0) {
			@@var_29_object:GetEyesHeight(var_32_float);
			var_33_cvector = CVector(0.0, 0.0, 0.0);
			var_57_float = GetByIndex(var_33_cvector, 1);
			var_32_float = var_57_float;
			SetByIndex(var_33_cvector, 1) = var_57_float;
			LookAsync(var_13_object, "head", var_33_cvector);
			var_31_bool = 1;
		} else {
			var_31_bool = 0;

		}
		PlayAnimation("all", var_28_string);
		WaitForAnimEnd();
		var_60_bool = var_31_bool;
		if(var_60_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_28_string);
		RemoveEnvelope();
		var_29_object = 0;
	}
	return 20;
	
}


func_1185(var_65_int)
{
	var_66_int = 0; var_67_int = 0;
	GetVariable("player", var_67_int);
	var_70_bool = var_67_int == (int)0;
	if(var_70_bool != 0) {
		var_65_int = 200001;
		return 2;
	EMIT "GOTO 0x4b0";
	}
	var_72_bool = var_67_int == (int)1;
	if(var_72_bool != 0) {
		var_65_int = 200002;
		return 2;
	}
	var_65_int = 200003;
	return 2;
}


func_1058(var_55_object, var_56_string, var_57_int)
{
	var_58_object = Obj(); var_59_object = Obj();
	CreateInvItem(var_59_object);
	@@var_59_object:SetItemName(var_56_string);
	var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0;
	var_55_object = var_60_object;
	var_59_object = var_61_object;
	var_57_int = var_62_int;
	func_1045(var_60_object, var_61_object, var_62_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_805(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0;
	@@var_29_object:IsDead(var_31_bool);
	var_31_bool = var_28_bool;
	return 2;
}


func_937(var_157_bool)
{
	var_158_bool = 0; var_159_bool = 0;
	IsLoaded(var_159_bool);
	var_159_bool = var_157_bool;
	return 2;
}


func_810(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj();
	var_23_bool = var_18_object == 0; //@ne
	if(var_23_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	var_24_bool = 0;
	var_24_bool = 0;
	var_27_bool = IsFuncExist(var_18_object, "IsDead", (int)1);
	if(var_27_bool != 0) {
		var_28_bool = 0; var_29_object = Obj();
		var_18_object = var_29_object;
		func_805(var_28_bool, var_29_object);
		if(var_28_bool != 0) {
			var_24_bool = 1;
		}
	}
	if(var_24_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	GetScene(var_21_object);
	var_32_bool = var_21_object == 0; //@ne
	if(var_32_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	@@var_18_object:GetScene(var_22_object);
	var_33_bool = var_21_object != var_22_object;
	if(var_33_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	var_17_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_942(var_22_bool, var_23_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0;
	@@var_23_object:GetPosition(var_33_cvector);
	@@var_23_object:GetEyesHeight(var_32_float);
	var_40_float = GetByIndex(var_33_cvector, 1);
	var_40_float = var_40_float + var_32_float;
	SetByIndex(var_33_cvector, 1) = var_40_float;
	GetPosition(var_34_cvector);
	GetEyesHeight(var_32_float);
	var_41_float = GetByIndex(var_34_cvector, 1);
	var_41_float = var_41_float + var_32_float;
	SetByIndex(var_34_cvector, 1) = var_41_float;
	var_35_cvector = var_33_cvector - var_34_cvector;
	var_42_float = GetByIndex(var_35_cvector, 1);
	SetByIndex(var_35_cvector, 1) = (float)0;
	var_43_int = var_35_cvector | var_35_cvector;
	var_44_float = sqrt(var_43_int);
	var_35_cvector = var_35_cvector / var_44_float;
	var_36_cvector = -var_35_cvector;
	var_46_float = var_35_cvector * (int)70;
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	var_48_cvector = var_36_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1027(var_47_cvector, var_48_cvector);
	var_56_float = var_47_cvector * (int)25;
	var_57_int = var_46_float + var_56_float;
	var_37_cvector = var_57_int - CVector(0.0, 10.0, 0.0);
	var_38_cvector = var_34_cvector + var_37_cvector;
	IsOverrideActive(var_39_bool);
	var_59_bool = var_39_bool;
	if(var_59_bool != 0) {
		var_22_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_38_cvector, var_36_cvector);
	var_60_float = GetByIndex(var_37_cvector, 0);
	var_61_float = GetByIndex(var_37_cvector, 2);
	Rotate(var_60_float, var_61_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_22_bool = 1;
	return 16;
}


func_1071(var_14_bool, var_15_string, var_16_string)
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


func_1202()
{
	var_22_object = Obj(); var_23_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_23_object, (int)84, (int)2, (int)12166);
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0;
	var_23_object = var_29_object;
	func_1156(var_28_bool, var_29_object, (int)27);
	return 2;
}
EMIT "Stack[-1] = 0";


func_309(var_0_object, var_1_object)
{
	var_120_float = 0; var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_float = 0; var_124_bool = 0; var_125_object = Obj(); var_126_bool = 0; var_127_float = 0; var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_float = 0; var_131_bool = 0; var_132_object = Obj(); var_133_bool = 0;
	var_0_object = false;
	var_1_object = false;
	rand(var_127_float, (float)0.5);
	Sleep(var_127_float);
	
Label_317:
	var_135_bool = var_0_object == 0; //@nz
	if(var_135_bool != 0) {
		var_136_bool = var_1_object == 0; //@nz
		if(var_136_bool != 0) {

		Label_321:
			GetPosition(var_129_cvector);
			GetCameraFarDistance(var_130_float);
			var_130_float = var_130_float * (float)2.5;
			GetRandomPFPointInCircle(var_128_cvector, var_129_cvector, var_130_float, var_131_bool);
			var_138_bool = var_131_bool;
			if(var_138_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_321;
		}
				var_1_object = false;
	}
			return 14;
	}
	goto Label_338;
	
Label_338:
	FindShiftedPathTo(var_132_object, var_128_cvector);
	var_139_bool = var_132_object != 0; //@nn
	if(var_139_bool != 0) {
		RotatePath(var_132_object, var_133_bool);
		var_140_bool = var_133_bool;
		if(var_140_bool != 0) {
			var_141_bool = 0;
			func_389(var_141_bool);
			FollowPath(var_132_object, var_141_bool, var_133_bool);
			var_132_object = 0;
			var_142_bool = var_133_bool;
			if(var_142_bool != 0) {
				TaskCall(4);
				func_405();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_132_object = 0;
	goto Label_317;
	
}


func_1083(var_167_string, var_168_int)
{
	var_169_string = ""; var_170_string = "";
	var_171_int = var_168_int;
	if(var_171_int != 0) {
		"idle" = "idle" + var_168_int;
	}
	var_170_string = var_167_string;
	return 2;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_74_object, var_75_object)
{
	var_0_object = var_75_object;
	var_1_object = var_74_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_81_string = "";
		func_116(var_75_object, "Neutral");
		@@@var_0_object:SetMessage((int)10904);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)10905, (int)12054, (int)12053);
		goto Label_86;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_86:
	var_100_bool = 0;
	func_1222(var_100_bool);
	if(var_100_bool != 0) {

	Label_90:
		lshWaitForAnimEnd();
		var_101_string = var_3_string;
		if(var_101_string != 0) {
		} else {
			var_102_string = "";
			var_102_string = var_2_object;
			func_1002(var_102_string);
			goto Label_90;
	}
		PlayAnimation("all", "idle");

	Label_105:
		WaitForAnimEnd();
		var_105_string = var_3_string;
		if(var_105_string != 0) {
			goto Label_115;
		}
		PlayAnimation("all", "idle");
		goto Label_105;
	}
	goto Label_115;
	
Label_115:
	return 0;
	
}


func_1218(var_63_int)
{
	var_63_int = 3345;
	return 0;
}


func_1090(var_161_int)
{
	var_162_int = 0; var_163_bool = 0; var_164_int = 0; var_165_bool = 0;
	var_164_int = 0;
	
Label_1092:
	var_167_string = ""; var_168_int = 0;
	var_164_int = var_168_int;
	func_1083(var_167_string, var_168_int);
	HasAnimation(var_165_bool, "all", var_167_string);
	var_172_bool = var_165_bool == 0; //@nz
	if(var_172_bool != 0) {
	} else {
		var_164_int = var_164_int + (int)1;
		goto Label_1092;
	}
	var_164_int = var_161_int;
	return 4;
	
}


func_1220(var_64_string)
{
	var_64_string = "ui/NPC_None.png";
	return 0;
}


func_1222(var_82_bool)
{
	var_82_bool = 0;
	return 0;
}


func_1224(var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	TaskCall(6);
	func_657(var_12_object);
	TaskReturn();
	return 0;
}


func_846(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj();
	var_14_object = var_18_object;
	func_810(var_17_bool, var_18_object);
	var_34_bool = var_17_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_35_bool = 0; var_36_object = Obj(); var_37_string = "";
	var_14_object = var_36_object;
	func_793(var_35_bool, var_36_object, "noaccess");
	var_44_bool = var_35_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_13_bool = 1;
		return 2;
	}
	@@var_14_object:GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == (int)0;
	return 2;
}


func_1107()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1113(var_16_object)
{
	var_18_float = 0; var_19_float = 0;
	SetVariable("d3q03", (int)2);
	func_1202();
	@@var_16_object:GetProperty("disease", var_19_float);
	var_49_bool = var_19_float < (float)0.5;
	if(var_49_bool != 0) {
		@@var_16_object:SetProperty("disease", (float)0.5);
	}
	return 2;
}


func_474()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_479(var_0_object, var_24_cvector, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0;
	GetPosition(var_32_cvector);
	@@@var_0_object:GetPosition(var_33_cvector);
	GetDirection(var_34_cvector);
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0);
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0);
	var_41_cvector = var_32_cvector - var_33_cvector;
	func_1027(var_40_cvector, var_41_cvector);
	var_48_float = var_34_cvector * (float)0.75;
	var_39_cvector = var_40_cvector + var_48_float;
	func_1027(var_38_cvector, var_39_cvector);
	var_38_cvector = var_35_cvector;
	FindLongestDir(var_36_cvector, var_37_float, var_35_cvector, var_25_float, (int)32, (float)7000.0);
	var_37_float = var_37_float - (int)100;
	var_53_bool = var_37_float < (int)0;
	if(var_53_bool != 0) {
		var_37_float = 0;
	}
	var_24_cvector = var_36_cvector * var_37_float;
	return 12;
}


func_998()
{
	CameraSwitchToNormal();
	return 0;
}


func_870(var_14_object, var_15_int)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_int = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_object = Obj(); var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = "";
	var_37_bool = 0;
	var_37_bool = 0;
	var_39_bool = var_15_int != (int)4;
	if(var_39_bool != 0) {
		var_41_bool = var_15_int != (int)5;
		if(var_41_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		GetScene(var_27_object);
		GetPosition(var_29_cvector);
		GetEyesHeight(var_30_float);
		var_42_float = GetByIndex(var_29_cvector, 1);
		var_44_float = var_30_float / (int)2;
		var_42_float = var_42_float + var_44_float;
		SetByIndex(var_29_cvector, 1) = var_42_float;
		AddActorByType(var_28_object, "scripted", var_27_object, var_29_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_28_object = 0;
		var_27_object = 0;
	}
	var_48_bool = var_14_object == 0; //@ne
	if(var_48_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_31_int);
	var_50_bool = var_31_int < (int)0;
	if(var_50_bool != 0) {
		return 20;
	}
	@@var_14_object:GetPosition(var_32_cvector);
	GetPosition(var_33_cvector);
	GetDirection(var_34_cvector);
	var_35_cvector = var_33_cvector - var_32_cvector;
	var_51_float = GetByIndex(var_35_cvector, 0);
	var_52_float = GetByIndex(var_34_cvector, 0);
	var_53_float = var_51_float * var_52_float;
	var_54_float = GetByIndex(var_35_cvector, 2);
	var_55_float = GetByIndex(var_34_cvector, 2);
	var_56_float = var_54_float * var_55_float;
	var_57_int = var_53_float + var_56_float;
	var_59_bool = var_57_int >= (int)0;
	if(var_59_bool != 0) {
		var_36_string = "fhit";
	} else {
		var_36_string = "bhit";
	}
	var_62_int = var_36_string + "1";
	var_64_int = var_36_string + "2";
	FadeSecondaryAnimation("hit_react", var_62_int, var_64_int, (int)-10);
	return 20;
	
}


func_1002(var_85_string)
{
	var_86_float = 0; var_87_float = 0; var_88_float = 0; var_89_float = 0;
	var_91_int = "playing " + var_85_string;
	Trace(var_91_int);
	lshGetAnimTimes(var_85_string, var_88_float, var_89_float);
	lshPlayAnimation(var_88_float, var_89_float);
	var_93_int = "start: " + var_88_float;
	Trace(var_93_int);
	var_95_int = "end: " + var_89_float;
	Trace(var_95_int);
	return 4;
}


func_1259(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	func_846(var_13_bool, var_14_object);
	var_13_bool = var_11_bool;
	return 0;
}


func_1132(var_52_object)
{
	Trace("powder is given");
	var_55_object = Obj(); var_56_string = ""; var_57_int = 0;
	var_52_object = var_55_object;
	func_1058(var_55_object, "powder", (int)1);
	return 0;
}


func_625(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1266(var_47_object)
{
	var_48_object = Obj();
	var_47_object = var_48_object;
	TaskCall(5);
	func_509(var_49_object, var_50_cvector, var_51_bool, var_48_object);
	TaskReturn();
	return 0;
}


func_753(var_35_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_35_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_35_string);
	RemoveEnvelope();
	return 0;
}


func_116(var_2_object, var_81_string)
{
	var_82_bool = 0;
	func_1222(var_82_bool);
	var_83_bool = var_82_bool == 0; //@nz
	if(var_83_bool != 0) {
		return 0;
	}
	var_84_bool = var_81_string == var_2_object;
	if(var_84_bool != 0) {
		return 0;
	}
	var_85_string = "";
	var_81_string = var_85_string;
	func_1002(var_85_string);
	var_2_object = var_81_string;
	return 0;
}


func_373(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1143(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj();
	GetDiaryRoot(var_39_object);
	var_40_bool = var_39_object == 0; //@nz
	if(var_40_bool != 0) {
		Trace("Can't retrieve diary root");
		var_37_object = 0;
		return 2;
	}
	var_39_object = var_37_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1020()
{
	var_13_bool = 0;
	func_1222(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_509(var_0_object, var_1_object, var_2_object, var_48_object)
{
	var_52_cvector = CVector(0,0,0); var_53_float = 0; var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_float = 0; var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_float = 0;
	var_0_object = var_48_object;
	var_62_cvector = CVector(0,0,0); var_63_float = 0;
	func_479(var_61_float, var_62_cvector, (float)1.7453293800354004);
	var_62_cvector = var_57_cvector;
	var_58_float = var_57_cvector | var_57_cvector;
	var_93_bool = var_58_float < (float)10000.0;
	if(var_93_bool != 0) {
		var_95_float = sqrt(var_58_float);
		var_96_int = "Can't retreat, distance: " + var_95_float;
		Trace(var_96_int);
		Sleep((float)0.5);
		return 10;
	}
	var_98_float = GetByIndex(var_57_cvector, 0);
	var_99_float = GetByIndex(var_57_cvector, 2);
	Rotate(var_98_float, var_99_float);
	var_100_cvector = CVector(0,0,0);
	func_781(var_100_cvector);
	var_1_object = var_100_cvector + var_57_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_542:
	MovePoint(var_1_object, (int)1, var_59_bool);
	var_106_bool = var_59_bool;
	if(var_106_bool != 0) {
		var_107_bool = var_0_object == 0; //@ne
		if(var_107_bool != 0) {
			goto Label_572;
		EMIT "GOTO 0x23a";

		Label_572:
			return 10;
		}
		var_108_cvector = CVector(0,0,0); var_109_float = 0;
		func_479(var_61_float, var_108_cvector, (float)2.6179938316345215);
		var_108_cvector = var_60_cvector;
		var_61_float = var_60_cvector | var_60_cvector;
		var_111_bool = var_61_float >= (float)10000.0;
		if(var_111_bool != 0) {
			var_112_cvector = CVector(0,0,0);
			func_781(var_112_cvector);
			var_1_object = var_112_cvector + var_60_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_572;
		}
	}
	var_115_bool = var_2_object == 0; //@nz
	if(var_115_bool == 1) goto Label_542;
	
}


