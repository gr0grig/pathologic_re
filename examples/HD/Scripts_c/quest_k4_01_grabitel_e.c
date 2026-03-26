// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,SetRTEnvelope/2,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,GetScene/1,AddActorByType/6,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,AddItem/3,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,GetVariable/2,Trigger/2,HasAnimation/3,SetVariable/2,WorkWithCorpse/1,Barter/1,AddItem/4,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:ook4GrabitelEntrance1|W:branch|W:GenerateMoney: iMin > iMax|W:Money|W:Knife|W:lockpick|W:grabitel_mark|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png|W:health|W:quest_k4_01|W:grabitel_entrance_dead
// @GLOBALS: 0:object:
// @RUN_OP: 0xe8
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9f vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0xf2 vars=object
// @EVENT_7: op=0x127 vars=int
// @TASK_3: vars= params=1
// @EVENT_0: op=0x1ba vars=object
// @EVENT_22: op=0x239 vars=object,int,float,float
// @EVENT_16: op=0x23b vars=object,string
// @EVENT_41: op=0x23d vars=object
// @STANDALONE_EVENT_22: op=0x44f vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x457 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x461 vars=object,string
// @STANDALONE_EVENT_41: op=0x46e vars=object
// @PE: 0x4a,0x89,0x9f,0xf2,0xfd,0x127,0x13e,0x1a2,0x1ab,0x21f,0x239,0x23b,0x23d,0x3c5,0x3cb,0x3ee,0x447,0x44f,0x457,0x46e

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_850();
		var_15_bool = var_11_object == (int)27024;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_965();
		}
		var_21_bool = var_10_bool == (int)27023;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_137(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)525700);
			@@@var_0_object:ClearReplies();
			var_40_bool = 0; var_41_object = Obj();
			var_41_object = var_1_object;
			func_971(var_41_object);
			if(var_40_bool != 0) {
				@@@var_0_object:AddReply((int)525701, (int)27026, (int)27024);
			}
			@@@var_0_object:AddReply((int)525702, (int)-1, (int)27025);
			return 0;
		}
		var_55_bool = var_10_bool == (int)27026;
		if(var_55_bool != 0) {
			var_56_string = "";
			func_137(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)525703);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525704, (int)-1, (int)27027);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_1093(var_61_bool);
		if(var_61_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa0";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_318(var_9_object, var_10_object);
	var_14_int = 0; var_15_object = Obj();
	var_10_object = var_15_object;
	TaskCall(0);
	func_0(var_16_object, var_14_int, var_15_object);
	TaskReturn();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_12_bool = var_10_int == (int)10;
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_280(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_839(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_317;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_317:
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
		func_1006(var_14_object);
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
	func_634(var_14_object, var_15_int, var_16_float);
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
	func_702(var_18_float, var_19_cvector, var_20_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string)
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


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_bool = 0; var_12_string = ""; var_13_string = "";
	func_929(var_11_bool, "quest_k4_01", "grabitel_entrance_dead");
	var_17_object = Obj();
	var_10_object = var_17_object;
	func_1095(var_17_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_232:
	Sleep((int)3);
	var_11_float = 0; var_12_float = 0;
	func_253(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
	goto Label_232;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_721(var_25_bool, var_26_object, (float)70.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_1087(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_1085(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_1089(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_1091(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_983(var_77_int);
	@@var_21_object:SetPlayerName(var_77_int);
	IsOverrideActive(var_22_bool);
	var_85_bool = var_22_bool;
	if(var_85_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	DoDialog(var_21_object);
	var_86_object = Obj(); var_87_object = Obj();
	var_15_object = var_86_object;
	var_21_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	@@var_21_object:IsDialogEnd(var_24_bool);
	
Label_56:
	var_143_bool = var_24_bool == 0; //@nz
	if(var_143_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_790();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_137(var_2_object, var_93_string)
{
	var_94_bool = 0;
	func_1093(var_94_bool);
	var_95_bool = var_94_bool == 0; //@nz
	if(var_95_bool != 0) {
		return 0;
	}
	var_96_bool = var_93_string == var_2_object;
	if(var_96_bool != 0) {
		return 0;
	}
	var_97_string = ""; var_98_bool = 0;
	var_93_string = var_97_string;
	var_100_bool = var_93_string == "";
	if(var_100_bool != 0) {
		var_98_bool = 0;
	} else {
		var_98_bool = 1;
	}
	func_824(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	return 0;
	
}


func_909(var_42_cvector, var_43_cvector)
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


func_790()
{
	var_145_bool = 0; var_146_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_148_bool = 0;
	func_1093(var_148_bool);
	if(var_148_bool != 0) {
	} else {
		HasAnimationTrack(var_146_bool, "head");
		var_150_bool = var_146_bool;
		if(var_150_bool == 0) goto Label_807;
		UnlookAsync("head");
	}
Label_807:
	return 2;
	
}


func_919(var_48_bool, var_49_int, var_50_int)
{
	var_51_int = 0; var_52_int = 0;
	irand(var_52_int, var_50_int);
	var_48_bool = var_52_int < var_49_int;
	return 2;
}


func_280(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_582(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_1050()
{
	var_19_int = 0; var_20_bool = 0; var_21_int = 0; var_22_bool = 0;
	ClearSubContainer((int)0);
	var_24_int = 0; var_25_int = 0;
	func_1019((int)300, (int)750);
	var_43_string = ""; var_44_int = 0; var_45_int = 0;
	func_857("Knife", (int)1, (int)8);
	var_54_string = ""; var_55_int = 0; var_56_int = 0;
	func_857("lockpick", (int)1, (int)6);
	var_57_int = 0; var_58_string = "";
	func_1080(var_57_int, "grabitel_mark");
	AddItem(var_22_bool, var_57_int, (int)0, (int)1);
	return 4;
}


func_411(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_924(var_113_int, var_114_string)
{
	var_115_int = 0; var_116_int = 0;
	GetVariable(var_114_string, var_116_int);
	var_116_int = var_113_int;
	return 2;
}


func_413()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_543(var_84_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_85_string = "";
	var_84_string = var_85_string;
	func_868(var_85_string);
	PlayAnimation("all", var_84_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_84_string);
	RemoveEnvelope();
	return 0;
}


func_929(var_11_bool, var_12_string, var_13_string)
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


func_418(var_18_object)
{
	func_1050();
	var_61_object = Obj();
	var_18_object = var_61_object;
	func_427(var_61_object);
	return 0;
}


func_808(var_127_string)
{
	var_128_bool = 0; var_129_float = 0; var_130_float = 0; var_131_bool = 0; var_132_float = 0; var_133_float = 0;
	lshHasAnimation(var_131_bool, var_127_string);
	var_134_bool = var_131_bool;
	if(var_134_bool != 0) {
		lshGetAnimTimes(var_127_string, var_132_float, var_133_float);
		lshPlayAnimation(var_132_float, var_133_float, (bool)0);
	} else {
		var_137_int = "Can't find lsh animation : " + var_127_string;
		Trace(var_137_int);
	}
	return 6;
	
}


func_427(var_61_object)
{
	EventDisable(0);
	var_62_object = Obj();
	var_61_object = var_62_object;
	func_452(var_62_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_438:
	Hold();
	goto Label_438;
}
EMIT "Return(); Pop(0)";


func_941(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = "";
	var_46_int = var_43_int;
	if(var_46_int != 0) {
		"idle" = "idle" + var_43_int;
	}
	var_45_string = var_42_string;
	return 2;
}


func_948(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_39_int = 0;
	
Label_950:
	var_42_string = ""; var_43_int = 0;
	var_39_int = var_43_int;
	func_941(var_42_string, var_43_int);
	HasAnimation(var_40_bool, "all", var_42_string);
	var_47_bool = var_40_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_39_int = var_39_int + (int)1;
		goto Label_950;
	}
	var_39_int = var_36_int;
	return 4;
	
}


func_1080(var_36_int, var_37_string)
{
	var_38_int = 0; var_39_int = 0;
	GetInvItemByName(var_39_int, var_37_string);
	var_39_int = var_36_int;
	return 2;
}


func_824(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0;
	lshHasAnimation(var_104_bool, var_97_string);
	var_107_bool = var_104_bool;
	if(var_107_bool != 0) {
		lshGetAnimTimes(var_97_string, var_105_float, var_106_float);
		lshPlayAnimation(var_105_float, var_106_float, var_98_bool);
	} else {
		var_109_int = "Can't find lsh animation : " + var_97_string;
		Trace(var_109_int);
	}
	return 6;
	
}


func_1085(var_74_int)
{
	var_74_int = 518411;
	return 0;
}


func_318(var_2_object, var_3_string)
{
	func_413();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_1087(var_73_int)
{
	var_73_int = 518410;
	return 0;
}


func_575(var_44_cvector, var_45_object)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_48_cvector);
	@@var_45_object:GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
	return 4;
}


func_1089(var_75_string)
{
	var_75_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_702(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj();
	GetScene(var_23_object);
	AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	var_27_object = Obj();
	var_16_object = var_27_object;
	func_590(var_27_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1091(var_76_string)
{
	var_76_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_452(var_62_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_string = ""; var_68_object = Obj(); var_69_bool = 0; var_70_bool = 0; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_string = ""; var_78_object = Obj(); var_79_bool = 0; var_80_bool = 0; var_81_float = 0; var_82_cvector = CVector(0,0,0);
	var_83_bool = var_62_object == 0; //@ne
	if(var_83_bool != 0) {
		var_84_string = "";
		func_543("fdie");
	} else {
		@@var_62_object:GetPosition(var_73_cvector);
		GetPosition(var_74_cvector);
		GetDirection(var_75_cvector);
		var_76_cvector = var_74_cvector - var_73_cvector;
		var_116_float = GetByIndex(var_76_cvector, 0);
		var_117_float = GetByIndex(var_75_cvector, 0);
		var_118_float = var_116_float * var_117_float;
		var_119_float = GetByIndex(var_76_cvector, 2);
		var_120_float = GetByIndex(var_75_cvector, 2);
		var_121_float = var_119_float * var_120_float;
		var_122_int = var_118_float + var_121_float;
		var_124_bool = var_122_int >= (int)0;
		if(var_124_bool != 0) {
			var_77_string = "fdie";
		} else {
				var_77_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_62_object = var_78_object;
		var_127_bool = IsFuncExist(var_62_object, "GetScriptProperty", (int)2);
		if(var_127_bool != 0) {
			@@var_62_object:HasScriptProperty(var_79_bool, "Owner");
			var_129_bool = var_79_bool;
			if(var_129_bool != 0) {
				@@var_62_object:GetScriptProperty(var_78_object, "Owner");
				var_131_bool = var_78_object == 0; //@ne
				if(var_131_bool != 0) {
					var_62_object = var_78_object;
				}
			}
		}
		var_134_bool = IsFuncExist(var_78_object, "@GetEyesHeight", (int)1);
		if(var_134_bool != 0) {
			@@var_78_object:GetEyesHeight(var_81_float);
			var_82_cvector = CVector(0.0, 0.0, 0.0);
			var_135_float = GetByIndex(var_82_cvector, 1);
			var_81_float = var_135_float;
			SetByIndex(var_82_cvector, 1) = var_135_float;
			LookAsync(var_62_object, "head", var_82_cvector);
			var_80_bool = 1;
		} else {
			var_80_bool = 0;

		}
		var_137_string = "";
		var_77_string = var_137_string;
		func_868(var_137_string);
		PlayAnimation("all", var_77_string);
		WaitForAnimEnd();
		var_139_bool = var_80_bool;
		if(var_139_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_77_string);
		RemoveEnvelope();
		var_78_object = 0;
	}
	return 20;
	
}


func_1093(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_965()
{
	SetVariable("ook4GrabitelEntrance1", (int)1);
	return 0;
}


func_582(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_839(var_27_object)
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


func_1095(var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	TaskCall(3);
	func_418(var_18_object);
	TaskReturn();
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_string = "";
		func_137(var_87_object, "Neutral");
		@@@var_0_object:SetMessage((int)525700);
		@@@var_0_object:ClearReplies();
		var_111_bool = 0; var_112_object = Obj();
		var_112_object = var_1_object;
		func_971(var_112_object);
		if(var_111_bool != 0) {
			@@@var_0_object:AddReply((int)525701, (int)27026, (int)27024);
		}
		@@@var_0_object:AddReply((int)525702, (int)-1, (int)27025);
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	var_125_bool = 0;
	func_1093(var_125_bool);
	if(var_125_bool != 0) {

	Label_111:
		lshWaitForAnimEnd();
		var_126_string = var_3_string;
		if(var_126_string != 0) {
		} else {
			var_127_string = "";
			var_127_string = var_2_object;
			func_808(var_127_string);
			goto Label_111;
	}
		PlayAnimation("all", "idle");

	Label_126:
		WaitForAnimEnd();
		var_140_string = var_3_string;
		if(var_140_string != 0) {
			goto Label_136;
		}
		PlayAnimation("all", "idle");
		goto Label_126;
	}
	goto Label_136;
	
Label_136:
	return 0;
	
}


func_971(var_111_bool)
{
	var_113_int = 0; var_114_string = "";
	func_924(var_113_int, "ook4GrabitelEntrance1");
	var_118_bool = var_113_int == (int)0;
	if(var_118_bool != 0) {
		var_111_bool = 1;
		return 0;
	}
	var_111_bool = 0;
	return 0;
}


func_716(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_332()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0;
	WaitForAnimEnd();
	var_34_bool = 0;
	func_716(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 14;
	}
	func_948((int)0);
	var_36_int = var_27_int;
	var_28_int = 0;
	
Label_346:
	var_49_bool = 0;
	var_49_bool = 0;
	var_51_bool = var_28_int < (int)5;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		func_716(var_52_bool);
		if(var_52_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		irand(var_29_int, (int)3);
		var_55_bool = var_29_int == (int)0;
		if(var_55_bool != 0) {
			var_56_int = var_27_int;
			if(var_56_int == 0) goto Label_379;
			irand(var_30_int, var_27_int);
			var_58_string = ""; var_59_int = 0;
			var_30_int = var_59_int;
			func_941(var_58_string, var_59_int);
			PlayAnimation("all", var_58_string);
			WaitForAnimEnd(var_31_bool);
			var_60_bool = var_31_bool == 0; //@nz
			if(var_60_bool != 0) {
			} else {
		} else {
				var_65_bool = var_29_int == (int)1;
				if(var_65_bool != 0) {
					rand(var_32_float, (int)4);
					var_68_int = var_32_float + (int)1;
					Sleep(var_68_int, var_33_bool);
					var_69_bool = var_33_bool == 0; //@nz
					if(var_69_bool != 0) {
						goto Label_408;
					}
					goto Label_397;
				}
				var_70_int = var_28_int;
				if(var_70_int == 0) goto Label_397;
				goto Label_408;
		}
		Label_397:
			var_61_bool = 0;
			func_411(var_61_bool);
			var_62_bool = var_61_bool == 0; //@nz
			if(var_62_bool != 0) {
				goto Label_408;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_346;

		}
	}
Label_408:
	ResetAAS();
	return 14;
	
}


func_590(var_27_object)
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


func_721(var_25_bool, var_26_object, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0;
	@@var_26_object:GetPosition(var_38_cvector);
	@@var_26_object:GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	var_46_float = var_46_float + var_37_float;
	SetByIndex(var_38_cvector, 1) = var_46_float;
	GetPosition(var_39_cvector);
	GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	var_47_float = var_47_float + var_37_float;
	SetByIndex(var_39_cvector, 1) = var_47_float;
	var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_49_int = var_40_cvector | var_40_cvector;
	var_50_float = sqrt(var_49_int);
	var_40_cvector = var_40_cvector / var_50_float;
	var_41_cvector = -var_40_cvector;
	var_51_float = var_40_cvector * var_27_float;
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_41_cvector ^ CVector(0.0, 1.0, 0.0);
	func_909(var_52_cvector, var_53_cvector);
	var_61_float = var_52_cvector * (int)25;
	var_62_int = var_51_float + var_61_float;
	var_42_cvector = var_62_int - CVector(0.0, 10.0, 0.0);
	var_43_cvector = var_39_cvector + var_42_cvector;
	IsOverrideActive(var_44_bool);
	var_64_bool = var_44_bool;
	if(var_64_bool != 0) {
		var_25_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_43_cvector, var_41_cvector, (bool)1);
	var_66_float = GetByIndex(var_42_cvector, 0);
	var_67_float = GetByIndex(var_42_cvector, 2);
	Rotate(var_66_float, var_67_float);
	var_68_bool = 0;
	func_1093(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_784;
		LookAsyncCamera("head");
	}
Label_784:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_850()
{
	var_13_bool = 0;
	func_1093(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_983(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x3e6";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_857(var_43_string, var_44_int, var_45_int)
{
	var_46_bool = 0; var_47_bool = 0;
	var_48_bool = 0; var_49_int = 0; var_50_int = 0;
	var_44_int = var_49_int;
	var_45_int = var_50_int;
	func_919(var_48_bool, var_49_int, var_50_int);
	if(var_48_bool != 0) {
		AddItem(var_47_bool, var_43_string, (int)0);
	}
	return 2;
}


func_868(var_85_string)
{
	var_86_bool = 0; var_87_int = 0; var_88_bool = 0; var_89_int = 0; var_90_bool = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_int = 0; var_96_bool = 0; var_97_int = 0; var_98_bool = 0; var_99_float = 0; var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0);
	IsExisting3DSound(var_94_bool, var_85_string);
	var_102_bool = var_94_bool == 0; //@nz
	if(var_102_bool != 0) {
		var_95_int = 0;

	Label_874:
		var_104_int = var_95_int + (int)1;
		var_105_int = var_85_string + var_104_int;
		IsExisting3DSound(var_96_bool, var_105_int);
		var_106_bool = var_96_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_95_int = var_95_int + (int)1;
			goto Label_874;
		}
		var_107_bool = var_95_int == 0; //@nz
		if(var_107_bool != 0) {
			return 16;
		}
		irand(var_97_int, var_95_int);
		var_109_int = var_97_int + (int)1;
		var_85_string = var_85_string + var_109_int;
	}
	Is3DSoundLoaded(var_98_bool, var_85_string);
	var_110_bool = var_98_bool;
	if(var_110_bool != 0) {
		GetEyesHeight(var_99_float);
		GetDirection(var_100_cvector);
		var_101_cvector = var_100_cvector * (int)50;
		var_112_float = GetByIndex(var_101_cvector, 1);
		var_112_float = var_112_float + var_99_float;
		SetByIndex(var_101_cvector, 1) = var_112_float;
		PlayGlobalSound(var_85_string, var_101_cvector);
	}
	return 16;
	
}


func_1000(var_15_int)
{
	var_16_int = 0; var_17_int = 0;
	GetVariable("branch", var_17_int);
	var_17_int = var_15_int;
	return 2;
}


func_1006(var_14_object)
{
	var_15_int = 0;
	func_1000(var_15_int);
	var_20_bool = var_15_int == (int)1;
	if(var_20_bool != 0) {
		WorkWithCorpse(var_14_object);
	} else {
		Barter(var_14_object);
	}
	return 0;
	
}


func_634(var_14_object, var_15_int, var_16_float)
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
		func_575(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_909(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		CreateVectorVector(var_27_object);
		var_28_int = 1;

	Label_663:
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
			goto Label_663;
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
			func_702(var_61_float, var_62_cvector, var_63_cvector);
			return 18;
		}
		var_27_object = 0;
	}
	var_104_object = Obj();
	var_14_object = var_104_object;
	func_590(var_104_object);
	return 18;
	
}


func_1019(var_24_int, var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_30_bool = var_24_int > var_25_int;
	if(var_30_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_28_int = 0;
	var_32_bool = var_24_int != var_25_int;
	if(var_32_bool != 0) {
		var_33_int = var_25_int - var_24_int;
		irand(var_28_int, var_33_int);
	} else {
		var_42_bool = var_24_int == (int)0;
		if(var_42_bool == 0) goto Label_1037;
		return 4;
	}
Label_1037:
	var_28_int = var_28_int + var_24_int;
	var_35_bool = var_28_int == (int)0;
	if(var_35_bool != 0) {
		return 4;
	}
	var_36_int = 0; var_37_string = "";
	func_1080(var_36_int, "Money");
	AddItem(var_29_bool, var_36_int, (int)0, var_28_int);
	return 4;
	
}


func_253(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_11_float, var_12_float)
{
	var_13_bool = 0;
	func_716(var_13_bool);
	var_16_bool = var_13_bool == 0; //@nz
	if(var_16_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	SetTimer((int)10, (float)1.0);
	func_332();
	var_71_bool = var_3_string == 0; //@nz
	if(var_71_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


