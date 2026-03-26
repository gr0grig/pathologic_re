// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,WaitForAnimEnd/1,LockAnimationEnd/2,GetVariable/2,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,FindActor/2,Trigger/2
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:execute|W:bdie|W:d11q02|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:quest_d11_02|W:actor_unload|W:player|W:ui/NPC_None.png
// @GLOBALS: 0:object:
// @RUN_OP: 0xb1
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x84 vars=int,int
// @TASK_2: vars=bool,bool params=0
// @EVENT_26: op=0xb6 vars=string
// @EVENT_5: op=0xcd vars=
// @EVENT_0: op=0xd4 vars=object
// @EVENT_6: op=0xfc vars=
// @STANDALONE_EVENT_6: op=0x17f vars=
// @PE: 0x3f,0x74,0x84,0xa9,0x146

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	if((int)1 != 0) {
		func_348();
		var_12_bool = var_7_bool == (int)15386;
		if(var_12_bool != 0) {
			var_13_string = "";
			func_116(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14172);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14173, (int)-1, (int)15387);
			return 0;
		}
		var_3_string = true;
		var_32_bool = 0;
		func_410(var_32_bool);
		if(var_32_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x85";
	
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
		func_224(var_9_bool, var_17_string);
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
	var_12_bool = var_9_int == (int)2;
	if(var_12_bool != 0) {
		var_13_object = Obj();
		var_7_object = var_13_object;
		func_169(var_13_object);
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
		func_268(var_9_bool);
		if(var_9_bool != 0) {
			var_7_bool = 1;
		}
	}
	if(var_7_bool != 0) {
		var_10_object = Obj();
		func_355(var_10_object);
		RemoveActor(var_10_object);
	}
	return 0;
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; var_8_string = ""; var_9_string = "";
	func_371(var_7_bool, "quest_d11_02", "actor_unload");
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = false;
	
Label_178:
	Hold();
	goto Label_178;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj();
	var_15_object = var_26_object;
	func_270(var_25_bool, var_26_object);
	var_65_bool = var_25_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_66_int = 0;
	func_406(var_66_int);
	@@var_21_object:SetNPCName(var_66_int);
	var_67_string = "";
	func_408(var_67_string);
	@@var_21_object:SetPhoto(var_67_string);
	var_68_int = 0;
	func_389(var_68_int);
	@@var_21_object:SetPlayerName(var_68_int);
	IsOverrideActive(var_22_bool);
	var_76_bool = var_22_bool;
	if(var_76_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	DoDialog(var_21_object);
	var_77_object = Obj(); var_78_object = Obj();
	var_15_object = var_77_object;
	var_21_object = var_78_object;
	TaskCall(1);
	func_63(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object);
	TaskReturn();
	@@var_21_object:IsDialogEnd(var_24_bool);
	
Label_45:
	var_111_bool = var_24_bool == 0; //@nz
	if(var_111_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_45;
	}
	var_15_object = Obj();
	func_326();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_224(var_0_object, var_17_string)
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
			func_268(var_24_bool);
			if(var_24_bool != 0) {
				var_22_bool = 1;
			}
		}
		if(var_22_bool != 0) {
			var_25_object = Obj();
			func_355(var_25_object);
			RemoveActor(var_25_object);
		}
	} else {
		var_29_bool = var_17_string == "restore";
		if(var_29_bool == 0) goto Label_251;
		var_0_object = false;
	}
Label_251:
	return 2;
	
}


func_355(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_389(var_68_int)
{
	var_69_int = 0; var_70_int = 0;
	GetVariable("player", var_70_int);
	var_73_bool = var_70_int == (int)0;
	if(var_73_bool != 0) {
		var_68_int = 200001;
		return 2;
	EMIT "GOTO 0x194";
	}
	var_75_bool = var_70_int == (int)1;
	if(var_75_bool != 0) {
		var_68_int = 200002;
		return 2;
	}
	var_68_int = 200003;
	return 2;
}


func_326()
{
	CameraSwitchToNormal();
	return 0;
}


func_169(var_13_object)
{
	var_14_int = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	TaskCall(0);
	func_0(var_16_object, var_14_int, var_15_object);
	TaskReturn();
	return 0;
}


func_330(var_88_string)
{
	var_89_float = 0; var_90_float = 0; var_91_float = 0; var_92_float = 0;
	var_94_int = "playing " + var_88_string;
	Trace(var_94_int);
	lshGetAnimTimes(var_88_string, var_91_float, var_92_float);
	lshPlayAnimation(var_91_float, var_92_float);
	var_96_int = "start: " + var_91_float;
	Trace(var_96_int);
	var_98_int = "end: " + var_92_float;
	Trace(var_98_int);
	return 4;
}


func_361(var_50_cvector, var_51_cvector)
{
	var_53_float = 0; var_54_float = 0;
	var_55_int = var_51_cvector | var_51_cvector;
	var_54_float = sqrt(var_55_int);
	var_56_float = 9.999999974752427e-07;
	var_57_bool = var_54_float < var_56_float;
	if(var_57_bool != 0) {
		var_50_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_50_cvector = var_51_cvector / var_54_float;
	return 2;
}


func_268(var_9_bool)
{
	var_9_bool = 1;
	return 0;
}


func_270(var_25_bool, var_26_object)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0;
	@@var_26_object:GetPosition(var_36_cvector);
	@@var_26_object:GetEyesHeight(var_35_float);
	var_43_float = GetByIndex(var_36_cvector, 1);
	var_43_float = var_43_float + var_35_float;
	SetByIndex(var_36_cvector, 1) = var_43_float;
	GetPosition(var_37_cvector);
	GetEyesHeight(var_35_float);
	var_44_float = GetByIndex(var_37_cvector, 1);
	var_44_float = var_44_float + var_35_float;
	SetByIndex(var_37_cvector, 1) = var_44_float;
	var_38_cvector = var_36_cvector - var_37_cvector;
	var_45_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (float)0;
	var_46_int = var_38_cvector | var_38_cvector;
	var_47_float = sqrt(var_46_int);
	var_38_cvector = var_38_cvector / var_47_float;
	var_39_cvector = -var_38_cvector;
	var_49_float = var_38_cvector * (int)70;
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_51_cvector = var_39_cvector ^ CVector(0.0, 1.0, 0.0);
	func_361(var_50_cvector, var_51_cvector);
	var_59_float = var_50_cvector * (int)25;
	var_60_int = var_49_float + var_59_float;
	var_40_cvector = var_60_int - CVector(0.0, 10.0, 0.0);
	var_41_cvector = var_37_cvector + var_40_cvector;
	IsOverrideActive(var_42_bool);
	var_62_bool = var_42_bool;
	if(var_62_bool != 0) {
		var_25_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_41_cvector, var_39_cvector);
	var_63_float = GetByIndex(var_40_cvector, 0);
	var_64_float = GetByIndex(var_40_cvector, 2);
	Rotate(var_63_float, var_64_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 16;
}


func_371(var_7_bool, var_8_string, var_9_string)
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


func_116(var_2_object, var_84_string)
{
	var_85_bool = 0;
	func_410(var_85_bool);
	var_86_bool = var_85_bool == 0; //@nz
	if(var_86_bool != 0) {
		return 0;
	}
	var_87_bool = var_84_string == var_2_object;
	if(var_87_bool != 0) {
		return 0;
	}
	var_88_string = "";
	var_84_string = var_88_string;
	func_330(var_88_string);
	var_2_object = var_84_string;
	return 0;
}


func_406(var_66_int)
{
	var_66_int = 3353;
	return 0;
}


func_408(var_67_string)
{
	var_67_string = "ui/NPC_None.png";
	return 0;
}


func_410(var_85_bool)
{
	var_85_bool = 0;
	return 0;
}


func_348()
{
	var_10_bool = 0;
	func_410(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_77_object, var_78_object)
{
	var_0_object = var_78_object;
	var_1_object = var_77_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_84_string = "";
		func_116(var_78_object, "Neutral");
		@@@var_0_object:SetMessage((int)14172);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)14173, (int)-1, (int)15387);
		goto Label_86;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_86:
	var_103_bool = 0;
	func_410(var_103_bool);
	if(var_103_bool != 0) {

	Label_90:
		lshWaitForAnimEnd();
		var_104_string = var_3_string;
		if(var_104_string != 0) {
		} else {
			var_105_string = "";
			var_105_string = var_2_object;
			func_330(var_105_string);
			goto Label_90;
	}
		PlayAnimation("all", "idle");

	Label_105:
		WaitForAnimEnd();
		var_108_string = var_3_string;
		if(var_108_string != 0) {
			goto Label_115;
		}
		PlayAnimation("all", "idle");
		goto Label_105;
	}
	goto Label_115;
	
Label_115:
	return 0;
	
}


