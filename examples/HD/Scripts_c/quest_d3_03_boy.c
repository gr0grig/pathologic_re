// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,SetProperty/2,rand/2,Sleep/1,GetPosition/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,Stop/0,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,GetDirection/1,FindLongestDir/6,Trace/1,Rotate/2,SetTimer/2,MovePoint/3,KillTimer/1,FindDirLength/3,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,GetScene/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,HasAnimation/3,TriggerWorld/2,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetVariable/2,GetProperty/2,SignalDeath/1,IsPlayerActor/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_d3_03|W:boy_free|W:noaccess|A:GetPosition|W:Can't retreat, distance: |W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|A:GetProperty|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:d3q03|W:disease|A:SetProperty|W:powder is given|W:powder|W:fail|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png|W:health|W:boy_attacked
// @GLOBALS: 0:object:
// @RUN_OP: 0x1a6
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x1aa vars=object
// @TASK_3: vars=bool,bool params=0
// @EVENT_17: op=0x1c7 vars=object
// @EVENT_10: op=0x215 vars=object
// @EVENT_28: op=0x219 vars=
// @EVENT_41: op=0x223 vars=object
// @TASK_4: vars= params=0
// @EVENT_17: op=0x232 vars=object
// @TASK_5: vars=object,cvector,bool params=1
// @EVENT_7: op=0x2fd vars=int
// @EVENT_41: op=0x338 vars=object
// @TASK_6: vars= params=1
// @EVENT_22: op=0x3cf vars=object,int,float,float
// @EVENT_16: op=0x3d1 vars=object,string
// @EVENT_41: op=0x3d3 vars=object
// @STANDALONE_EVENT_22: op=0x64d vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x655 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x65f vars=object,string
// @STANDALONE_EVENT_41: op=0x66c vars=object
// @STANDALONE_EVENT_17: op=0x681 vars=object
// @PE: 0x4a,0x84,0x9a,0x1aa,0x1c7,0x215,0x223,0x232,0x338,0x351,0x3b5,0x3cf,0x3d1,0x3d3,0x561,0x5b9,0x5d2,0x5dd,0x645,0x64d,0x655,0x66c,0x672,0x679

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	if((int)1 != 0) {
		func_1319();
		var_15_bool = var_11_bool == (int)12062;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_1471(var_17_object);
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_1490(var_51_object);
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_1465();
		}
		var_79_bool = var_11_bool == (int)35869;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_1501();
		}
		var_97_bool = var_11_bool == (int)35746;
		if(var_97_bool != 0) {
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_1501();
		}
		var_101_bool = var_10_cvector == (int)12052;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_132(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510904);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510905, (int)35745, (int)12053);
			@@@var_0_object:AddReply((int)534166, (int)-1, (int)35746);
			return 0;
		}
		var_127_bool = var_10_cvector == (int)35745;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_132(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)534165);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534167, (int)12054, (int)35747);
			@@@var_0_object:AddReply((int)534169, (int)35750, (int)35749);
			return 0;
		}
		var_137_bool = var_10_cvector == (int)35750;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_132(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)534170);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534272, (int)35857, (int)35861);
			return 0;
		}
		var_144_bool = var_10_cvector == (int)12054;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_132(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510906);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510907, (int)12056, (int)12055);
			return 0;
		}
		var_151_bool = var_10_cvector == (int)12056;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_132(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510908);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510909, (int)12058, (int)12057);
			@@@var_0_object:AddReply((int)534168, (int)35857, (int)35748);
			return 0;
		}
		var_161_bool = var_10_cvector == (int)12058;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_132(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510910);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534268, (int)35857, (int)35856);
			@@@var_0_object:AddReply((int)534270, (int)35860, (int)35859);
			return 0;
		}
		var_171_bool = var_10_cvector == (int)35860;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_132(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)534271);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534276, (int)12061, (int)35865);
			return 0;
		}
		var_178_bool = var_10_cvector == (int)35857;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_132(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)534269);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510911, (int)12061, (int)12059);
			@@@var_0_object:AddReply((int)510912, (int)12061, (int)12060);
			return 0;
		}
		var_188_bool = var_10_cvector == (int)12061;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_132(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510913);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534273, (int)35864, (int)35862);
			@@@var_0_object:AddReply((int)534274, (int)35864, (int)35863);
			return 0;
		}
		var_198_bool = var_10_cvector == (int)35864;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_132(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)534275);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510914, (int)-1, (int)12062);
			@@@var_0_object:AddReply((int)534277, (int)-1, (int)35869);
			return 0;
		}
		var_3_string = true;
		var_207_bool = 0;
		func_1603(var_207_bool);
		if(var_207_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9b";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_object = Obj();
	var_10_bool = var_12_object;
	TaskCall(0);
	func_0(var_13_object, var_11_int, var_12_object);
	TaskReturn();
	TaskCall(3);
	func_439();
	TaskReturn();
	return 0;
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj();
	var_10_bool = var_12_object;
	func_1650(var_11_bool, var_12_object);
	if(var_11_bool != 0) {
		func_540(var_9_cvector, var_10_bool);
		var_47_object = Obj();
		var_10_bool = var_47_object;
		func_1657(var_47_object);
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
	func_540(var_9_cvector, var_10_bool);
	var_10_bool = Obj();
	func_1644();
	return 0;
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj();
	var_10_bool = var_12_object;
	func_1650(var_11_bool, var_12_object);
	if(var_11_bool != 0) {
		func_657();
		var_47_object = Obj();
		var_10_bool = var_47_object;
		func_1657(var_47_object);
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
		func_662(var_18_float, var_24_cvector, (float)1.7453293800354004);
		var_24_cvector = var_17_cvector;
		var_18_float = var_17_cvector | var_17_cvector;
		var_54_bool = 0;
		var_54_bool = 0;
		var_56_bool = var_18_float >= (float)2500.0;
		if(var_56_bool != 0) {
			var_57_bool = 0;
			var_58_float = var_16_float * var_16_float;
			var_60_float = var_58_float * (float)2.25;
			var_61_bool = var_18_float >= var_60_float;
			if(var_61_bool != 1) {
				var_62_bool = 0;
				func_833((bool)1, var_62_bool);
				if(var_62_bool != 1) {
					var_57_bool = 0;
				}
			}
			if(var_57_bool != 0) {
				var_54_bool = 1;
			}
		}
		if(var_54_bool == 0) goto Label_816;
		Stop();
		var_82_cvector = CVector(0,0,0);
		func_981(var_82_cvector);
		var_1_object = var_82_cvector + var_17_cvector;
	}
Label_816:
	return 8;
	
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	func_817(var_10_object);
	var_10_object = Obj();
	func_1644();
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
	func_1114(var_14_object, var_15_int, var_16_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0);
	var_10_object = var_16_object;
	var_11_int = var_17_int;
	var_12_float = var_18_float;
	var_14_cvector = var_19_cvector;
	var_15_cvector = var_20_cvector;
	func_1182(var_18_float, var_19_cvector, var_20_cvector);
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
	func_1605(var_11_object);
	return 0;
}


event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsPlayerActor(var_10_object, var_12_bool);
	var_13_bool = var_12_bool;
	if(var_13_bool != 0) {
		var_14_bool = 0; var_15_string = ""; var_16_string = "";
		func_1429(var_14_bool, "quest_d3_03", "boy_attacked");
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	
Label_422:
	Hold();
	goto Label_422;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_11_int, var_12_object)
{
	var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; var_20_int = 0; var_21_bool = 0;
	var_0_object = var_12_object;
	var_22_bool = 0; var_23_object = Obj(); var_24_float = 0;
	var_12_object = var_23_object;
	func_1201(var_22_bool, var_23_object, (float)70.0);
	var_69_bool = var_22_bool == 0; //@nz
	if(var_69_bool != 0) {
		var_11_int = -2;
		return 8;
	}
	CreateDialog(var_18_object);
	var_70_int = 0;
	func_1597(var_70_int);
	@@var_18_object:SetNPCName(var_70_int);
	var_71_int = 0;
	func_1595(var_71_int);
	@@var_18_object:SetNPCDescription(var_71_int);
	var_72_string = "";
	func_1599(var_72_string);
	@@var_18_object:SetPhoto(var_72_string);
	var_73_string = "";
	func_1601(var_73_string);
	@@var_18_object:SetPhoto2(var_73_string);
	var_74_int = 0;
	func_1578(var_74_int);
	@@var_18_object:SetPlayerName(var_74_int);
	IsOverrideActive(var_19_bool);
	var_82_bool = var_19_bool;
	if(var_82_bool != 0) {
		var_11_int = -2;
		return 8;
	}
	DoDialog(var_18_object);
	var_83_object = Obj(); var_84_object = Obj();
	var_12_object = var_83_object;
	var_18_object = var_84_object;
	TaskCall(1);
	func_74(var_85_object, var_86_object, var_87_string, var_88_bool, var_83_object, var_84_object);
	TaskReturn();
	@@var_18_object:IsDialogEnd(var_21_bool);
	
Label_56:
	var_132_bool = var_21_bool == 0; //@nz
	if(var_132_bool != 0) {
		sync();
		@@var_18_object:IsDialogEnd(var_21_bool);
		goto Label_56;
	}
	var_12_object = Obj();
	func_1270();
	StopDialog(var_18_object);
	@@var_18_object:GetReturnValue((int)-1);
	var_20_int = var_11_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1537(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj();
	GetDiaryRoot(var_38_object);
	var_39_bool = var_38_object == 0; //@nz
	if(var_39_bool != 0) {
		Trace("Can't retrieve diary root");
		var_36_object = 0;
		return 2;
	}
	var_38_object = var_36_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_132(var_2_object, var_90_string)
{
	var_91_bool = 0;
	func_1603(var_91_bool);
	var_92_bool = var_91_bool == 0; //@nz
	if(var_92_bool != 0) {
		return 0;
	}
	var_93_bool = var_90_string == var_2_object;
	if(var_93_bool != 0) {
		return 0;
	}
	var_94_string = ""; var_95_bool = 0;
	var_90_string = var_94_string;
	var_97_bool = var_90_string == "";
	if(var_97_bool != 0) {
		var_95_bool = 0;
	} else {
		var_95_bool = 1;
	}
	func_1304(var_94_string, var_95_bool);
	var_2_object = var_90_string;
	return 0;
	
}


func_1416(var_53_object, var_54_string, var_55_int)
{
	var_56_object = Obj(); var_57_object = Obj();
	CreateInvItem(var_57_object);
	@@var_57_object:SetItemName(var_54_string);
	var_58_object = Obj(); var_59_object = Obj(); var_60_int = 0;
	var_53_object = var_58_object;
	var_57_object = var_59_object;
	var_55_int = var_60_int;
	func_1397(var_58_object, var_59_object, var_60_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1288(var_116_string)
{
	var_117_bool = 0; var_118_float = 0; var_119_float = 0; var_120_bool = 0; var_121_float = 0; var_122_float = 0;
	lshHasAnimation(var_120_bool, var_116_string);
	var_123_bool = var_120_bool;
	if(var_123_bool != 0) {
		lshGetAnimTimes(var_116_string, var_121_float, var_122_float);
		lshPlayAnimation(var_121_float, var_122_float, (bool)0);
	} else {
		var_126_int = "Can't find lsh animation : " + var_116_string;
		Trace(var_126_int);
	}
	return 6;
	
}


func_1550(var_27_bool, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0;
	func_1537(Obj());
	var_36_object = var_33_object;
	@@var_33_object:Find(var_29_int, var_34_object);
	var_41_bool = var_34_object == 0; //@nz
	if(var_41_bool != 0) {
		var_43_int = "Can't find diary parent with id: " + var_29_int;
		Trace(var_43_int);
		var_27_bool = 0;
		return 6;
	}
	@@var_34_object:AddChild(var_28_object);
	SendWorldWndMessage((int)7);
	@@var_28_object:GetCategory(var_35_int);
	SetDiarySection(var_35_int);
	var_27_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_655(var_221_bool)
{
	var_221_bool = 1;
	return 0;
}


func_528(var_166_float)
{
	var_167_float = 0; var_168_float = 0;
	GetCameraFarDistance(var_168_float);
	var_168_float = var_166_float;
	return 2;
}


func_657()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1429(var_14_bool, var_15_string, var_16_string)
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


func_662(var_0_object, var_24_cvector, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0;
	GetPosition(var_32_cvector);
	@@@var_0_object:GetPosition(var_33_cvector);
	GetDirection(var_34_cvector);
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0);
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0);
	var_41_cvector = var_32_cvector - var_33_cvector;
	func_1367(var_40_cvector, var_41_cvector);
	var_48_float = var_34_cvector * (float)0.75;
	var_39_cvector = var_40_cvector + var_48_float;
	func_1367(var_38_cvector, var_39_cvector);
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


func_1046(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj();
	var_14_object = var_18_object;
	func_1010(var_17_bool, var_18_object);
	var_34_bool = var_17_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_35_bool = 0; var_36_object = Obj(); var_37_string = "";
	var_14_object = var_36_object;
	func_993(var_35_bool, var_36_object, "noaccess");
	var_44_bool = var_35_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_13_bool = 1;
		return 2;
	}
	@@var_14_object:GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == (int)0;
	return 2;
}


func_1304(var_94_string, var_95_bool)
{
	var_98_bool = 0; var_99_float = 0; var_100_float = 0; var_101_bool = 0; var_102_float = 0; var_103_float = 0;
	lshHasAnimation(var_101_bool, var_94_string);
	var_104_bool = var_101_bool;
	if(var_104_bool != 0) {
		lshGetAnimTimes(var_94_string, var_102_float, var_103_float);
		lshPlayAnimation(var_102_float, var_103_float, var_95_bool);
	} else {
		var_106_int = "Can't find lsh animation : " + var_94_string;
		Trace(var_106_int);
	}
	return 6;
	
}


func_540(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1182(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj();
	GetScene(var_23_object);
	AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	var_27_object = Obj();
	var_16_object = var_27_object;
	func_1070(var_27_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1441(var_202_string, var_203_int)
{
	var_204_string = ""; var_205_string = "";
	var_206_int = var_203_int;
	if(var_206_int != 0) {
		"idle" = "idle" + var_203_int;
	}
	var_205_string = var_202_string;
	return 2;
}


func_1319()
{
	var_13_bool = 0;
	func_1603(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1448(var_196_int)
{
	var_197_int = 0; var_198_bool = 0; var_199_int = 0; var_200_bool = 0;
	var_199_int = 0;
	
Label_1450:
	var_202_string = ""; var_203_int = 0;
	var_199_int = var_203_int;
	func_1441(var_202_string, var_203_int);
	HasAnimation(var_200_bool, "all", var_202_string);
	var_207_bool = var_200_bool == 0; //@nz
	if(var_207_bool != 0) {
	} else {
		var_199_int = var_199_int + (int)1;
		goto Label_1450;
	}
	var_199_int = var_196_int;
	return 4;
	
}


func_1578(var_74_int)
{
	var_75_int = 0; var_76_int = 0;
	GetVariable("branch", var_76_int);
	var_79_bool = var_76_int == (int)0;
	if(var_79_bool != 0) {
		var_74_int = 1;
		return 2;
	EMIT "GOTO 0x639";
	}
	var_81_bool = var_76_int == (int)1;
	if(var_81_bool != 0) {
		var_74_int = 2;
		return 2;
	}
	var_74_int = 3;
	return 2;
}


func_556(var_170_object, var_171_cvector)
{
	var_172_object = Obj(); var_173_object = Obj();
	FindShiftedPathTo(var_173_object, var_171_cvector);
	var_173_object = var_170_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1196(var_192_bool)
{
	var_193_bool = 0; var_194_bool = 0;
	IsLoaded(var_194_bool);
	var_194_bool = var_192_bool;
	return 2;
}


func_1326(var_36_string)
{
	var_37_bool = 0; var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	IsExisting3DSound(var_45_bool, var_36_string);
	var_53_bool = var_45_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_46_int = 0;

	Label_1332:
		var_55_int = var_46_int + (int)1;
		var_56_int = var_36_string + var_55_int;
		IsExisting3DSound(var_47_bool, var_56_int);
		var_57_bool = var_47_bool == 0; //@nz
		if(var_57_bool != 0) {
		} else {
			var_46_int = var_46_int + (int)1;
			goto Label_1332;
		}
		var_58_bool = var_46_int == 0; //@nz
		if(var_58_bool != 0) {
			return 16;
		}
		irand(var_48_int, var_46_int);
		var_60_int = var_48_int + (int)1;
		var_36_string = var_36_string + var_60_int;
	}
	Is3DSoundLoaded(var_49_bool, var_36_string);
	var_61_bool = var_49_bool;
	if(var_61_bool != 0) {
		GetEyesHeight(var_50_float);
		GetDirection(var_51_cvector);
		var_52_cvector = var_51_cvector * (int)50;
		var_63_float = GetByIndex(var_52_cvector, 1);
		var_63_float = var_63_float + var_50_float;
		SetByIndex(var_52_cvector, 1) = var_63_float;
		PlayGlobalSound(var_36_string, var_52_cvector);
	}
	return 16;
	
}


func_1070(var_27_object)
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


func_1201(var_22_bool, var_23_object, var_24_float)
{
	var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_bool = 0;
	@@var_23_object:GetPosition(var_35_cvector);
	@@var_23_object:GetEyesHeight(var_34_float);
	var_43_float = GetByIndex(var_35_cvector, 1);
	var_43_float = var_43_float + var_34_float;
	SetByIndex(var_35_cvector, 1) = var_43_float;
	GetPosition(var_36_cvector);
	GetEyesHeight(var_34_float);
	var_44_float = GetByIndex(var_36_cvector, 1);
	var_44_float = var_44_float + var_34_float;
	SetByIndex(var_36_cvector, 1) = var_44_float;
	var_37_cvector = var_35_cvector - var_36_cvector;
	var_45_float = GetByIndex(var_37_cvector, 1);
	SetByIndex(var_37_cvector, 1) = (float)0;
	var_46_int = var_37_cvector | var_37_cvector;
	var_47_float = sqrt(var_46_int);
	var_37_cvector = var_37_cvector / var_47_float;
	var_38_cvector = -var_37_cvector;
	var_48_float = var_37_cvector * var_24_float;
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	var_50_cvector = var_38_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1367(var_49_cvector, var_50_cvector);
	var_58_float = var_49_cvector * (int)25;
	var_59_int = var_48_float + var_58_float;
	var_39_cvector = var_59_int - CVector(0.0, 10.0, 0.0);
	var_40_cvector = var_36_cvector + var_39_cvector;
	IsOverrideActive(var_41_bool);
	var_61_bool = var_41_bool;
	if(var_61_bool != 0) {
		var_22_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_40_cvector, var_38_cvector, (bool)1);
	var_63_float = GetByIndex(var_39_cvector, 0);
	var_64_float = GetByIndex(var_39_cvector, 2);
	Rotate(var_63_float, var_64_float);
	var_65_bool = 0;
	func_1603(var_65_bool);
	if(var_65_bool != 0) {
	} else {
		HasAnimationTrack(var_42_bool, "head");
		var_67_bool = var_42_bool;
		if(var_67_bool == 0) goto Label_1264;
		LookAsyncCamera("head");
	}
Label_1264:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_22_bool = 1;
	return 18;
	
}


func_817(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_692(var_0_object, var_1_object, var_2_object, var_48_object)
{
	var_52_cvector = CVector(0,0,0); var_53_float = 0; var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_float = 0; var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_float = 0;
	var_0_object = var_48_object;
	var_62_cvector = CVector(0,0,0); var_63_float = 0;
	func_662(var_61_float, var_62_cvector, (float)1.7453293800354004);
	var_62_cvector = var_57_cvector;
	var_58_float = var_57_cvector | var_57_cvector;
	var_93_bool = var_58_float < (float)2500.0;
	if(var_93_bool != 0) {
		var_94_cvector = CVector(0,0,0); var_95_float = 0;
		func_662(var_61_float, var_94_cvector, (float)2.6179938316345215);
		var_94_cvector = var_57_cvector;
		var_58_float = var_57_cvector | var_57_cvector;
		var_97_bool = var_58_float < (float)2500.0;
		if(var_97_bool != 0) {
			var_99_float = sqrt(var_58_float);
			var_100_int = "Can't retreat, distance: " + var_99_float;
			Trace(var_100_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_102_float = GetByIndex(var_57_cvector, 0);
	var_103_float = GetByIndex(var_57_cvector, 2);
	Rotate(var_102_float, var_103_float);
	var_104_cvector = CVector(0,0,0);
	func_981(var_104_cvector);
	var_1_object = var_104_cvector + var_57_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_734:
	MovePoint(var_1_object, (int)1, var_59_bool);
	var_110_bool = var_59_bool;
	if(var_110_bool != 0) {
		var_111_bool = var_0_object == 0; //@ne
		if(var_111_bool != 0) {
			goto Label_764;
		EMIT "GOTO 0x2fa";

		Label_764:
			return 10;
		}
		var_112_cvector = CVector(0,0,0); var_113_float = 0;
		func_662(var_61_float, var_112_cvector, (float)2.6179938316345215);
		var_112_cvector = var_60_cvector;
		var_61_float = var_60_cvector | var_60_cvector;
		var_115_bool = var_61_float >= (float)2500.0;
		if(var_115_bool != 0) {
			var_116_cvector = CVector(0,0,0);
			func_981(var_116_cvector);
			var_1_object = var_116_cvector + var_60_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_764;
		}
	}
	var_119_bool = var_2_object == 0; //@nz
	if(var_119_bool == 1) goto Label_734;
	
}


func_949(var_35_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_36_string = "";
	var_35_string = var_36_string;
	func_1326(var_36_string);
	PlayAnimation("all", var_35_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_35_string);
	RemoveEnvelope();
	return 0;
}


func_439()
{
	var_143_bool = 0; var_144_string = ""; var_145_string = "";
	func_1429(var_143_bool, "quest_d3_03", "boy_free");
	SetProperty("noaccess", (int)0);
	
Label_448:
	func_469(var_141_bool, var_142_bool);
	goto Label_448;
}
EMIT "Return(); Pop(0)";


func_1465()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1595(var_71_int)
{
	var_71_int = 515560;
	return 0;
}


func_1597(var_70_int)
{
	var_70_int = 503345;
	return 0;
}


func_1471(var_16_object)
{
	var_18_float = 0; var_19_float = 0;
	SetVariable("d3q03", (int)2);
	func_1511();
	@@var_16_object:GetProperty("disease", var_19_float);
	var_47_bool = var_19_float < (float)0.5;
	if(var_47_bool != 0) {
		@@var_16_object:SetProperty("disease", (float)0.5);
	}
	return 2;
}


func_1599(var_72_string)
{
	var_72_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_1601(var_73_string)
{
	var_73_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_576()
{
	var_178_int = 0; var_179_int = 0; var_180_int = 0; var_181_int = 0; var_182_bool = 0; var_183_float = 0; var_184_bool = 0; var_185_int = 0; var_186_int = 0; var_187_int = 0; var_188_int = 0; var_189_bool = 0; var_190_float = 0; var_191_bool = 0;
	WaitForAnimEnd();
	var_192_bool = 0;
	func_1196(var_192_bool);
	var_195_bool = var_192_bool == 0; //@nz
	if(var_195_bool != 0) {
		return 14;
	}
	func_1448((int)0);
	var_196_int = var_185_int;
	var_186_int = 0;
	
Label_590:
	var_209_bool = 0;
	var_209_bool = 0;
	var_211_bool = var_186_int < (int)5;
	if(var_211_bool != 0) {
		var_212_bool = 0;
		func_1196(var_212_bool);
		if(var_212_bool != 0) {
			var_209_bool = 1;
		}
	}
	if(var_209_bool != 0) {
		irand(var_187_int, (int)3);
		var_215_bool = var_187_int == (int)0;
		if(var_215_bool != 0) {
			var_216_int = var_185_int;
			if(var_216_int == 0) goto Label_623;
			irand(var_188_int, var_185_int);
			var_218_string = ""; var_219_int = 0;
			var_188_int = var_219_int;
			func_1441(var_218_string, var_219_int);
			PlayAnimation("all", var_218_string);
			WaitForAnimEnd(var_189_bool);
			var_220_bool = var_189_bool == 0; //@nz
			if(var_220_bool != 0) {
			} else {
		} else {
				var_225_bool = var_187_int == (int)1;
				if(var_225_bool != 0) {
					rand(var_190_float, (int)4);
					var_228_int = var_190_float + (int)1;
					Sleep(var_228_int, var_191_bool);
					var_229_bool = var_191_bool == 0; //@nz
					if(var_229_bool != 0) {
						goto Label_652;
					}
					goto Label_641;
				}
				var_230_int = var_186_int;
				if(var_230_int == 0) goto Label_641;
				goto Label_652;
		}
		Label_641:
			var_221_bool = 0;
			func_655(var_221_bool);
			var_222_bool = var_221_bool == 0; //@nz
			if(var_222_bool != 0) {
				goto Label_652;
			}
			ResetAAS();
			var_186_int = var_186_int + (int)1;
			goto Label_590;

		}
	}
Label_652:
	ResetAAS();
	return 14;
	
}


func_1603(var_65_bool)
{
	var_65_bool = 0;
	return 0;
}


func_833(var_0_object, var_62_bool)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
	GetDirection(var_65_cvector);
	var_67_cvector = CVector(0,0,0); var_68_object = Obj();
	var_68_object = var_0_object;
	func_986(var_67_cvector, var_68_object);
	var_67_cvector = var_66_cvector;
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0);
	var_65_cvector = var_74_cvector;
	var_66_cvector = var_75_cvector;
	func_1377(var_73_float, var_74_cvector, var_75_cvector);
	var_62_bool = var_73_float >= (float)-0.3420201241970062;
	return 4;
}


func_453(var_176_bool)
{
	var_176_bool = 1;
	return 0;
}


func_1605(var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	TaskCall(6);
	func_849(var_12_object);
	TaskReturn();
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_83_object, var_84_object)
{
	var_0_object = var_84_object;
	var_1_object = var_83_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_90_string = "";
		func_132(var_84_object, "Neutral");
		@@@var_0_object:SetMessage((int)510904);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)510905, (int)35745, (int)12053);
		@@@var_0_object:AddReply((int)534166, (int)-1, (int)35746);
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	var_114_bool = 0;
	func_1603(var_114_bool);
	if(var_114_bool != 0) {

	Label_106:
		lshWaitForAnimEnd();
		var_115_string = var_3_string;
		if(var_115_string != 0) {
		} else {
			var_116_string = "";
			var_116_string = var_2_object;
			func_1288(var_116_string);
			goto Label_106;
	}
		PlayAnimation("all", "idle");

	Label_121:
		WaitForAnimEnd();
		var_129_string = var_3_string;
		if(var_129_string != 0) {
			goto Label_131;
		}
		PlayAnimation("all", "idle");
		goto Label_121;
	}
	goto Label_131;
	
Label_131:
	return 0;
	
}


func_849(var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	func_858(var_13_object);
	
Label_854:
	Hold();
	goto Label_854;
}
EMIT "Return(); Pop(0)";


func_1490(var_50_object)
{
	Trace("powder is given");
	var_53_object = Obj(); var_54_string = ""; var_55_int = 0;
	var_50_object = var_53_object;
	func_1416(var_53_object, "powder", (int)1);
	return 0;
}


func_469(var_0_object, var_1_object)
{
	var_151_float = 0; var_152_cvector = CVector(0,0,0); var_153_cvector = CVector(0,0,0); var_154_bool = 0; var_155_object = Obj(); var_156_bool = 0; var_157_float = 0; var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0); var_160_bool = 0; var_161_object = Obj(); var_162_bool = 0;
	var_0_object = false;
	var_1_object = false;
	rand(var_157_float, (float)0.5);
	Sleep(var_157_float);
	
Label_477:
	var_164_bool = var_0_object == 0; //@nz
	if(var_164_bool != 0) {
		var_165_bool = var_1_object == 0; //@nz
		if(var_165_bool != 0) {

		Label_481:
			GetPosition(var_159_cvector);
			var_166_float = 0;
			func_528(var_166_float);
			GetRandomPFPointInCircle(var_158_cvector, var_159_cvector, var_166_float, var_160_bool);
			var_169_bool = var_160_bool;
			if(var_169_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_481;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_497;
	
Label_497:
	var_170_object = Obj(); var_171_cvector = CVector(0,0,0);
	var_158_cvector = var_171_cvector;
	func_556(var_170_object, var_171_cvector);
	var_170_object = var_161_object;
	var_174_bool = var_161_object != 0; //@nn
	if(var_174_bool != 0) {
		RotatePath(var_161_object, var_162_bool);
		var_175_bool = var_162_bool;
		if(var_175_bool != 0) {
			var_176_bool = 0;
			func_453(var_176_bool);
			FollowPath(var_161_object, var_176_bool, var_162_bool);
			var_161_object = 0;
			var_177_bool = var_162_bool;
			if(var_177_bool != 0) {
				TaskCall(4);
				func_576();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_161_object = 0;
	goto Label_477;
	
}


func_981(var_82_cvector)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0);
	GetPosition(var_84_cvector);
	var_84_cvector = var_82_cvector;
	return 2;
}


func_1367(var_42_cvector, var_43_cvector)
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


func_986(var_44_cvector, var_45_object)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_48_cvector);
	@@var_45_object:GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
	return 4;
}


func_858(var_13_object)
{
	var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_string = ""; var_19_object = Obj(); var_20_bool = 0; var_21_bool = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0);
	var_34_bool = var_13_object == 0; //@ne
	if(var_34_bool != 0) {
		var_35_string = "";
		func_949("fdie");
	} else {
		@@var_13_object:GetPosition(var_24_cvector);
		GetPosition(var_25_cvector);
		GetDirection(var_26_cvector);
		var_27_cvector = var_25_cvector - var_24_cvector;
		var_67_float = GetByIndex(var_27_cvector, 0);
		var_68_float = GetByIndex(var_26_cvector, 0);
		var_69_float = var_67_float * var_68_float;
		var_70_float = GetByIndex(var_27_cvector, 2);
		var_71_float = GetByIndex(var_26_cvector, 2);
		var_72_float = var_70_float * var_71_float;
		var_73_int = var_69_float + var_72_float;
		var_75_bool = var_73_int >= (int)0;
		if(var_75_bool != 0) {
			var_28_string = "fdie";
		} else {
				var_28_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_13_object = var_29_object;
		var_78_bool = IsFuncExist(var_13_object, "GetScriptProperty", (int)2);
		if(var_78_bool != 0) {
			@@var_13_object:HasScriptProperty(var_30_bool, "Owner");
			var_80_bool = var_30_bool;
			if(var_80_bool != 0) {
				@@var_13_object:GetScriptProperty(var_29_object, "Owner");
				var_82_bool = var_29_object == 0; //@ne
				if(var_82_bool != 0) {
					var_13_object = var_29_object;
				}
			}
		}
		var_85_bool = IsFuncExist(var_29_object, "@GetEyesHeight", (int)1);
		if(var_85_bool != 0) {
			@@var_29_object:GetEyesHeight(var_32_float);
			var_33_cvector = CVector(0.0, 0.0, 0.0);
			var_86_float = GetByIndex(var_33_cvector, 1);
			var_32_float = var_86_float;
			SetByIndex(var_33_cvector, 1) = var_86_float;
			LookAsync(var_13_object, "head", var_33_cvector);
			var_31_bool = 1;
		} else {
			var_31_bool = 0;

		}
		var_88_string = "";
		var_28_string = var_88_string;
		func_1326(var_88_string);
		PlayAnimation("all", var_28_string);
		WaitForAnimEnd();
		var_90_bool = var_31_bool;
		if(var_90_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_28_string);
		RemoveEnvelope();
		var_29_object = 0;
	}
	return 20;
	
}


func_1114(var_14_object, var_15_int, var_16_float)
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
		func_986(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1367(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		CreateVectorVector(var_27_object);
		var_28_int = 1;

	Label_1143:
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
			goto Label_1143;
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
			func_1182(var_61_float, var_62_cvector, var_63_cvector);
			return 18;
		}
		var_27_object = 0;
	}
	var_104_object = Obj();
	var_14_object = var_104_object;
	func_1070(var_104_object);
	return 18;
	
}


func_1501()
{
	func_1524();
	var_90_bool = 0; var_91_string = ""; var_92_string = "";
	func_1429(var_90_bool, "quest_d3_03", "fail");
	return 0;
}


func_1377(var_73_float, var_74_cvector, var_75_cvector)
{
	var_76_int = var_74_cvector | var_75_cvector;
	var_77_int = var_74_cvector | var_74_cvector;
	var_78_int = var_75_cvector | var_75_cvector;
	var_79_float = var_77_int * var_78_int;
	var_80_float = sqrt(var_79_float);
	var_73_float = var_76_int / var_80_float;
	return 0;
}


func_993(var_35_bool, var_36_object, var_37_string)
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


func_1511()
{
	var_22_object = Obj(); var_23_object = Obj();
	CreateDiaryEntry(var_23_object, (int)84, (int)2, (int)512166);
	var_27_bool = 0; var_28_object = Obj(); var_29_int = 0;
	var_23_object = var_28_object;
	func_1550(var_27_bool, var_28_object, (int)27);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1385(var_69_int, var_70_int)
{
	var_71_object = Obj(); var_72_object = Obj();
	CreateIntVector(var_72_object);
	@@var_72_object:add(var_69_int);
	@@var_72_object:add(var_70_int);
	SendWorldWndMessage((int)3, var_72_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1005(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0;
	@@var_29_object:IsDead(var_31_bool);
	var_31_bool = var_28_bool;
	return 2;
}


func_1650(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	func_1046(var_13_bool, var_14_object);
	var_13_bool = var_11_bool;
	return 0;
}


func_1010(var_17_bool, var_18_object)
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
		func_1005(var_28_bool, var_29_object);
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


func_1524()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)86, (int)2, (int)512168);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_1550(var_87_bool, var_88_object, (int)27);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1397(var_58_object, var_59_object, var_60_int)
{
	var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0;
	@@var_59_object:GetItemID(var_64_int);
	GetInvItemProperty(var_65_int, var_64_int, "Category");
	@@var_58_object:AddItem(var_66_bool, var_59_object, var_65_int, var_60_int);
	var_68_bool = var_66_bool == 0; //@nz
	if(var_68_bool != 0) {
		@@var_58_object:DropItems(var_59_object, var_60_int);
	} else {
		var_69_int = 0; var_70_int = 0;
		var_64_int = var_69_int;
		var_60_int = var_70_int;
		func_1385(var_69_int, var_70_int);
	}
	return 6;
	
}


func_1270()
{
	var_134_bool = 0; var_135_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_137_bool = 0;
	func_1603(var_137_bool);
	if(var_137_bool != 0) {
	} else {
		HasAnimationTrack(var_135_bool, "head");
		var_139_bool = var_135_bool;
		if(var_139_bool == 0) goto Label_1287;
		UnlookAsync("head");
	}
Label_1287:
	return 2;
	
}


func_1657(var_47_object)
{
	var_48_object = Obj();
	var_47_object = var_48_object;
	TaskCall(5);
	func_692(var_49_object, var_50_cvector, var_51_bool, var_48_object);
	TaskReturn();
	return 0;
}


