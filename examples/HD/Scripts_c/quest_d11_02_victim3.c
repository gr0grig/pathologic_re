// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,WaitForAnimEnd/1,LockAnimationEnd/2,GetVariable/2,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,self/1,FindActor/2,Trigger/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:execute|W:bdie|W:d11q02|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |W:quest_d11_02|W:actor_unload|W:branch|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0xf0
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a vars=int,int
// @TASK_2: vars=bool,bool params=0
// @EVENT_26: op=0xf5 vars=string
// @EVENT_5: op=0x10c vars=
// @EVENT_0: op=0x113 vars=object
// @EVENT_6: op=0x141 vars=
// @STANDALONE_EVENT_6: op=0x1ec vars=
// @PE: 0x4a,0x84,0x9a,0xe8

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	if((int)1 != 0) {
		func_457();
		var_12_bool = var_7_bool == (int)15392;
		if(var_12_bool != 0) {
			var_13_string = "";
			func_132(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514178);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514179, (int)41568, (int)15393);
			@@@var_0_object:AddReply((int)539618, (int)41566, (int)41565);
			return 0;
		}
		var_38_bool = var_7_bool == (int)41566;
		if(var_38_bool != 0) {
			var_39_string = "";
			func_132(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539619);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539620, (int)-1, (int)41567);
			return 0;
		}
		var_45_bool = var_7_bool == (int)41568;
		if(var_45_bool != 0) {
			var_46_string = "";
			func_132(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539621);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539622, (int)-1, (int)41569);
			return 0;
		}
		var_3_string = true;
		var_51_bool = 0;
		func_523(var_51_bool);
		if(var_51_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9b";
	
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0;
	var_11_bool = var_7_string == "execute";
	if(var_11_bool != 0) {
		var_1_object = true;
		PlayAnimation("all", "bdie");
		WaitForAnimEnd(var_9_bool);
		var_14_bool = var_9_bool;
		if(var_14_bool != 0) {
			LockAnimationEnd("all", "bdie");
		}
	} else {
		var_17_string = "";
		var_7_string = var_17_string;
		func_293(var_9_bool, var_17_string);
	}
	return 2;
	
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		LockAnimationEnd("all", "bdie");
	}
	return 0;
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0;
	GetVariable("d11q02", var_9_int);
	var_11_bool = 0;
	var_11_bool = 0;
	var_13_bool = var_9_int == (int)2;
	if(var_13_bool != 0) {
		var_14_bool = var_1_object == 0; //@nz
		if(var_14_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_15_object = Obj();
		var_7_object = var_15_object;
		func_232(var_15_object);
	}
	return 2;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0;
	var_7_bool = 0;
	var_8_object = var_0_object;
	if(var_8_object != 0) {
		var_9_bool = 0;
		func_337(var_9_bool);
		if(var_9_bool != 0) {
			var_7_bool = 1;
		}
	}
	if(var_7_bool != 0) {
		var_10_object = Obj();
		func_464(var_10_object);
		RemoveActor(var_10_object);
	}
	return 0;
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; var_8_string = ""; var_9_string = "";
	func_480(var_7_bool, "quest_d11_02", "actor_unload");
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = false;
	
Label_241:
	Hold();
	goto Label_241;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_339(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_517(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_515(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_519(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_521(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_498(var_79_int);
	@@var_23_object:SetPlayerName(var_79_int);
	IsOverrideActive(var_24_bool);
	var_87_bool = var_24_bool;
	if(var_87_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	DoDialog(var_23_object);
	var_88_object = Obj(); var_89_object = Obj();
	var_17_object = var_88_object;
	var_23_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	@@var_23_object:IsDialogEnd(var_26_bool);
	
Label_56:
	var_137_bool = var_26_bool == 0; //@nz
	if(var_137_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_408();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_515(var_76_int)
{
	var_76_int = 515564;
	return 0;
}


func_132(var_2_object, var_95_string)
{
	var_96_bool = 0;
	func_523(var_96_bool);
	var_97_bool = var_96_bool == 0; //@nz
	if(var_97_bool != 0) {
		return 0;
	}
	var_98_bool = var_95_string == var_2_object;
	if(var_98_bool != 0) {
		return 0;
	}
	var_99_string = ""; var_100_bool = 0;
	var_95_string = var_99_string;
	var_102_bool = var_95_string == "";
	if(var_102_bool != 0) {
		var_100_bool = 0;
	} else {
		var_100_bool = 1;
	}
	func_442(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	return 0;
	
}


func_517(var_75_int)
{
	var_75_int = 503349;
	return 0;
}


func_519(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_521(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_523(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_408()
{
	var_139_bool = 0; var_140_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_142_bool = 0;
	func_523(var_142_bool);
	if(var_142_bool != 0) {
	} else {
		HasAnimationTrack(var_140_bool, "head");
		var_144_bool = var_140_bool;
		if(var_144_bool == 0) goto Label_425;
		UnlookAsync("head");
	}
Label_425:
	return 2;
	
}


func_293(var_0_object, var_17_string)
{
	var_18_bool = 0; var_19_bool = 0;
	var_21_bool = var_17_string == "cleanup";
	if(var_21_bool != 0) {
		var_0_object = true;
		IsLoaded(var_19_bool);
		var_22_bool = 0;
		var_22_bool = 0;
		var_23_bool = var_19_bool == 0; //@nz
		if(var_23_bool != 0) {
			var_24_bool = 0;
			func_337(var_24_bool);
			if(var_24_bool != 0) {
				var_22_bool = 1;
			}
		}
		if(var_22_bool != 0) {
			var_25_object = Obj();
			func_464(var_25_object);
			RemoveActor(var_25_object);
		}
	} else {
		var_29_bool = var_17_string == "restore";
		if(var_29_bool == 0) goto Label_320;
		var_0_object = false;
	}
Label_320:
	return 2;
	
}


func_426(var_121_string)
{
	var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_float = 0; var_127_float = 0;
	lshHasAnimation(var_125_bool, var_121_string);
	var_128_bool = var_125_bool;
	if(var_128_bool != 0) {
		lshGetAnimTimes(var_121_string, var_126_float, var_127_float);
		lshPlayAnimation(var_126_float, var_127_float, (bool)0);
	} else {
		var_131_int = "Can't find lsh animation : " + var_121_string;
		Trace(var_131_int);
	}
	return 6;
	
}


func_442(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0;
	lshHasAnimation(var_106_bool, var_99_string);
	var_109_bool = var_106_bool;
	if(var_109_bool != 0) {
		lshGetAnimTimes(var_99_string, var_107_float, var_108_float);
		lshPlayAnimation(var_107_float, var_108_float, var_100_bool);
	} else {
		var_111_int = "Can't find lsh animation : " + var_99_string;
		Trace(var_111_int);
	}
	return 6;
	
}


func_457()
{
	var_10_bool = 0;
	func_523(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_string = "";
		func_132(var_89_object, "Neutral");
		@@@var_0_object:SetMessage((int)514178);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)514179, (int)41568, (int)15393);
		@@@var_0_object:AddReply((int)539618, (int)41566, (int)41565);
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	var_119_bool = 0;
	func_523(var_119_bool);
	if(var_119_bool != 0) {

	Label_106:
		lshWaitForAnimEnd();
		var_120_string = var_3_string;
		if(var_120_string != 0) {
		} else {
			var_121_string = "";
			var_121_string = var_2_object;
			func_426(var_121_string);
			goto Label_106;
	}
		PlayAnimation("all", "idle");

	Label_121:
		WaitForAnimEnd();
		var_134_string = var_3_string;
		if(var_134_string != 0) {
			goto Label_131;
		}
		PlayAnimation("all", "idle");
		goto Label_121;
	}
	goto Label_131;
	
Label_131:
	return 0;
	
}


func_464(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_337(var_9_bool)
{
	var_9_bool = 1;
	return 0;
}


func_339(var_27_bool, var_28_object, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0;
	@@var_28_object:GetPosition(var_40_cvector);
	@@var_28_object:GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	var_48_float = var_48_float + var_39_float;
	SetByIndex(var_40_cvector, 1) = var_48_float;
	GetPosition(var_41_cvector);
	GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	var_49_float = var_49_float + var_39_float;
	SetByIndex(var_41_cvector, 1) = var_49_float;
	var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_51_int = var_42_cvector | var_42_cvector;
	var_52_float = sqrt(var_51_int);
	var_42_cvector = var_42_cvector / var_52_float;
	var_43_cvector = -var_42_cvector;
	var_53_float = var_42_cvector * var_29_float;
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	var_55_cvector = var_43_cvector ^ CVector(0.0, 1.0, 0.0);
	func_470(var_54_cvector, var_55_cvector);
	var_63_float = var_54_cvector * (int)25;
	var_64_int = var_53_float + var_63_float;
	var_44_cvector = var_64_int - CVector(0.0, 10.0, 0.0);
	var_45_cvector = var_41_cvector + var_44_cvector;
	IsOverrideActive(var_46_bool);
	var_66_bool = var_46_bool;
	if(var_66_bool != 0) {
		var_27_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_45_cvector, var_43_cvector, (bool)1);
	var_68_float = GetByIndex(var_44_cvector, 0);
	var_69_float = GetByIndex(var_44_cvector, 2);
	Rotate(var_68_float, var_69_float);
	var_70_bool = 0;
	func_523(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_402;
		LookAsyncCamera("head");
	}
Label_402:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_470(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0;
	var_59_int = var_55_cvector | var_55_cvector;
	var_58_float = sqrt(var_59_int);
	var_60_float = 9.999999974752427e-07;
	var_61_bool = var_58_float < var_60_float;
	if(var_61_bool != 0) {
		var_54_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_54_cvector = var_55_cvector / var_58_float;
	return 2;
}


func_480(var_7_bool, var_8_string, var_9_string)
{
	var_10_object = Obj(); var_11_object = Obj();
	FindActor(var_11_object, var_8_string);
	var_12_bool = var_11_object == 0; //@ne
	if(var_12_bool != 0) {
		var_7_bool = 0;
		return 2;
	}
	Trigger(var_11_object, var_9_string);
	var_7_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_232(var_15_object)
{
	var_16_int = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	TaskCall(0);
	func_0(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	return 0;
}


func_498(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x201";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


