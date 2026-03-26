// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,GetVariable/2,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:ood11Burah1|W:player|W:ui/NPC_Burah.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x19c
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9d vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x194 vars=object
// @EVENT_26: op=0x1a0 vars=string
// @EVENT_6: op=0x1bc vars=
// @PE: 0x3f,0x8d,0x9d,0x194,0x206,0x238,0x23e

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_540();
		var_11_bool = var_6_int == (int)15548;
		if(var_11_bool != 0) {
			var_12_bool = 0; var_13_object = Obj();
			var_13_object = var_1_object;
			func_574(var_13_object);
			if(var_12_bool != 0) {
				var_20_object = Obj(); var_21_object = Obj();
				var_20_object = var_1_object;
				var_21_object = var_0_object;
				func_568();
				var_24_string = "";
				func_141(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)14326);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)14327, (int)15550, (int)15549);
				return 0;
			}
			var_43_string = "";
			func_141(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14532);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14533, (int)-1, (int)15764);
			return 0;
		}
		var_49_bool = var_6_int == (int)15550;
		if(var_49_bool != 0) {
			var_50_string = "";
			func_141(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14328);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14329, (int)15552, (int)15551);
			return 0;
		}
		var_56_bool = var_6_int == (int)15552;
		if(var_56_bool != 0) {
			var_57_string = "";
			func_141(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14330);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14331, (int)15554, (int)15553);
			@@@var_0_object:AddReply((int)14344, (int)15567, (int)15566);
			return 0;
		}
		var_66_bool = var_6_int == (int)15567;
		if(var_66_bool != 0) {
			var_67_string = "";
			func_141(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14345);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14346, (int)15569, (int)15568);
			return 0;
		}
		var_73_bool = var_6_int == (int)15569;
		if(var_73_bool != 0) {
			var_74_string = "";
			func_141(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14347);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14348, (int)15554, (int)15570);
			return 0;
		}
		var_80_bool = var_6_int == (int)15554;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_141(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14332);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14333, (int)15556, (int)15555);
			return 0;
		}
		var_87_bool = var_6_int == (int)15556;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_141(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14334);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14335, (int)15558, (int)15557);
			return 0;
		}
		var_94_bool = var_6_int == (int)15558;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_141(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14336);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14337, (int)15560, (int)15559);
			return 0;
		}
		var_101_bool = var_6_int == (int)15560;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_141(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14338);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14339, (int)15562, (int)15561);
			return 0;
		}
		var_108_bool = var_6_int == (int)15562;
		if(var_108_bool != 0) {
			var_109_string = "";
			func_141(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14340);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14341, (int)15564, (int)15563);
			return 0;
		}
		var_115_bool = var_6_int == (int)15564;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_141(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14342);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14343, (int)-1, (int)15565);
			return 0;
		}
		var_3_string = true;
		var_121_bool = 0;
		func_607(var_121_bool);
		if(var_121_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9e";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0;
	var_10_bool = var_6_string == "cleanup";
	if(var_10_bool != 0) {
		var_0_object = true;
		IsLoaded(var_8_bool);
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = var_8_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_bool = 0;
			func_460(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_547(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_443;
		var_0_object = false;
	}
Label_443:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_460(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_547(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_412:
	Hold();
	goto Label_412;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj();
	var_8_object = var_19_object;
	func_462(var_18_bool, var_19_object);
	var_58_bool = var_18_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_59_int = 0;
	func_603(var_59_int);
	@@var_14_object:SetNPCName(var_59_int);
	var_60_string = "";
	func_605(var_60_string);
	@@var_14_object:SetPhoto(var_60_string);
	var_61_int = 0;
	func_586(var_61_int);
	@@var_14_object:SetPlayerName(var_61_int);
	IsOverrideActive(var_15_bool);
	var_69_bool = var_15_bool;
	if(var_69_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_70_object = Obj(); var_71_object = Obj();
	var_8_object = var_70_object;
	var_14_object = var_71_object;
	TaskCall(1);
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_45:
	var_121_bool = var_17_bool == 0; //@nz
	if(var_121_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_45;
	}
	var_8_object = Obj();
	func_518();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_547(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_518()
{
	CameraSwitchToNormal();
	return 0;
}


func_553(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0;
	var_48_int = var_44_cvector | var_44_cvector;
	var_47_float = sqrt(var_48_int);
	var_49_float = 9.999999974752427e-07;
	var_50_bool = var_47_float < var_49_float;
	if(var_50_bool != 0) {
		var_43_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_43_cvector = var_44_cvector / var_47_float;
	return 2;
}


func_586(var_61_int)
{
	var_62_int = 0; var_63_int = 0;
	GetVariable("player", var_63_int);
	var_66_bool = var_63_int == (int)0;
	if(var_66_bool != 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x259";
	}
	var_68_bool = var_63_int == (int)1;
	if(var_68_bool != 0) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
	return 2;
}


func_522(var_93_string)
{
	var_94_float = 0; var_95_float = 0; var_96_float = 0; var_97_float = 0;
	var_99_int = "playing " + var_93_string;
	Trace(var_99_int);
	lshGetAnimTimes(var_93_string, var_96_float, var_97_float);
	lshPlayAnimation(var_96_float, var_97_float);
	var_101_int = "start: " + var_96_float;
	Trace(var_101_int);
	var_103_int = "end: " + var_97_float;
	Trace(var_103_int);
	return 4;
}


func_460(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_141(var_2_object, var_89_string)
{
	var_90_bool = 0;
	func_607(var_90_bool);
	var_91_bool = var_90_bool == 0; //@nz
	if(var_91_bool != 0) {
		return 0;
	}
	var_92_bool = var_89_string == var_2_object;
	if(var_92_bool != 0) {
		return 0;
	}
	var_93_string = "";
	var_89_string = var_93_string;
	func_522(var_93_string);
	var_2_object = var_89_string;
	return 0;
}


func_462(var_18_bool, var_19_object)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0;
	@@var_19_object:GetPosition(var_29_cvector);
	@@var_19_object:GetEyesHeight(var_28_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	var_36_float = var_36_float + var_28_float;
	SetByIndex(var_29_cvector, 1) = var_36_float;
	GetPosition(var_30_cvector);
	GetEyesHeight(var_28_float);
	var_37_float = GetByIndex(var_30_cvector, 1);
	var_37_float = var_37_float + var_28_float;
	SetByIndex(var_30_cvector, 1) = var_37_float;
	var_31_cvector = var_29_cvector - var_30_cvector;
	var_38_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (float)0;
	var_39_int = var_31_cvector | var_31_cvector;
	var_40_float = sqrt(var_39_int);
	var_31_cvector = var_31_cvector / var_40_float;
	var_32_cvector = -var_31_cvector;
	var_42_float = var_31_cvector * (int)70;
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_44_cvector = var_32_cvector ^ CVector(0.0, 1.0, 0.0);
	func_553(var_43_cvector, var_44_cvector);
	var_52_float = var_43_cvector * (int)25;
	var_53_int = var_42_float + var_52_float;
	var_33_cvector = var_53_int - CVector(0.0, 10.0, 0.0);
	var_34_cvector = var_30_cvector + var_33_cvector;
	IsOverrideActive(var_35_bool);
	var_55_bool = var_35_bool;
	if(var_55_bool != 0) {
		var_18_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_34_cvector, var_32_cvector);
	var_56_float = GetByIndex(var_33_cvector, 0);
	var_57_float = GetByIndex(var_33_cvector, 2);
	Rotate(var_56_float, var_57_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 16;
}


func_607(var_90_bool)
{
	var_90_bool = 1;
	return 0;
}


func_563(var_79_int, var_80_string)
{
	var_81_int = 0; var_82_int = 0;
	GetVariable(var_80_string, var_82_int);
	var_82_int = var_79_int;
	return 2;
}


func_568()
{
	SetVariable("ood11Burah1", (int)1);
	return 0;
}


func_603(var_59_int)
{
	var_59_int = 11961;
	return 0;
}


func_540()
{
	var_9_bool = 0;
	func_607(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_605(var_60_string)
{
	var_60_string = "ui/NPC_Burah.png";
	return 0;
}


func_574(var_77_bool)
{
	var_79_int = 0; var_80_string = "";
	func_563(var_79_int, "ood11Burah1");
	var_84_bool = var_79_int == (int)0;
	if(var_84_bool != 0) {
		var_77_bool = 1;
		return 0;
	}
	var_77_bool = 0;
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object;
	var_1_object = var_70_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_77_bool = 0; var_78_object = Obj();
		var_78_object = var_1_object;
		func_574(var_78_object);
		if(var_77_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_568();
			var_89_string = "";
			func_141(var_71_object, "Neutral");
			@@@var_0_object:SetMessage((int)14326);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14327, (int)15550, (int)15549);
		} else {
				var_116_string = "";
				func_141(var_71_object, "Neutral");
				@@@var_0_object:SetMessage((int)14532);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)14533, (int)-1, (int)15764);
				goto Label_111;
		}
	}
Label_111:
	var_108_bool = 0;
	func_607(var_108_bool);
	if(var_108_bool != 0) {

	Label_115:
		lshWaitForAnimEnd();
		var_109_string = var_3_string;
		if(var_109_string != 0) {
		} else {
			var_110_string = "";
			var_110_string = var_2_object;
			func_522(var_110_string);
			goto Label_115;
	}
		PlayAnimation("all", "idle");

	Label_130:
		WaitForAnimEnd();
		var_113_string = var_3_string;
		if(var_113_string != 0) {
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


