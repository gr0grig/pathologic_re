// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:ood12Klara1|W:player|W:ui/NPC_Klara.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x14a
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x8e vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x14e vars=object
// @PE: 0x3f,0x7e,0x8e,0x14e,0x18e,0x1ba,0x1c0

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_420();
		var_10_bool = var_6_int == (int)16187;
		if(var_10_bool != 0) {
			var_11_object = Obj(); var_12_object = Obj();
			var_11_object = var_1_object;
			var_12_object = var_0_object;
			func_442();
		}
		var_16_bool = var_5_int == (int)16186;
		if(var_16_bool != 0) {
			var_17_string = "";
			func_126(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14935);
			@@@var_0_object:ClearReplies();
			var_33_bool = 0; var_34_object = Obj();
			var_34_object = var_1_object;
			func_448(var_34_object);
			if(var_33_bool != 0) {
				@@@var_0_object:AddReply((int)14936, (int)16188, (int)16187);
			}
			@@@var_0_object:AddReply((int)14954, (int)-1, (int)16207);
			return 0;
		}
		var_48_bool = var_5_int == (int)16188;
		if(var_48_bool != 0) {
			var_49_string = "";
			func_126(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14937);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14938, (int)16190, (int)16189);
			@@@var_0_object:AddReply((int)14946, (int)16198, (int)16197);
			@@@var_0_object:AddReply((int)14950, (int)16203, (int)16202);
			return 0;
		}
		var_61_bool = var_5_int == (int)16203;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_126(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14951);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14952, (int)16190, (int)16204);
			@@@var_0_object:AddReply((int)14953, (int)-1, (int)16206);
			return 0;
		}
		var_71_bool = var_5_int == (int)16198;
		if(var_71_bool != 0) {
			var_72_string = "";
			func_126(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14947);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14948, (int)16190, (int)16199);
			@@@var_0_object:AddReply((int)14949, (int)-1, (int)16201);
			return 0;
		}
		var_81_bool = var_5_int == (int)16190;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_126(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14939);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14940, (int)16192, (int)16191);
			return 0;
		}
		var_88_bool = var_5_int == (int)16192;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_126(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14941);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14942, (int)16194, (int)16193);
			@@@var_0_object:AddReply((int)14945, (int)-1, (int)16196);
			return 0;
		}
		var_98_bool = var_5_int == (int)16194;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_126(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14943);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14944, (int)-1, (int)16195);
			return 0;
		}
		var_3_string = true;
		var_104_bool = 0;
		func_481(var_104_bool);
		if(var_104_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8f";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj();
	var_5_object = var_7_object;
	TaskCall(0);
	func_0(var_8_object, var_6_int, var_7_object);
	TaskReturn();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_330:
	Hold();
	goto Label_330;
}
EMIT "Return(); Pop(0)";


func_448(var_92_bool)
{
	var_94_int = 0; var_95_string = "";
	func_437(var_94_int, "ood12Klara1");
	var_99_bool = var_94_int == (int)0;
	if(var_99_bool != 0) {
		var_92_bool = 1;
		return 0;
	}
	var_92_bool = 0;
	return 0;
}


func_481(var_77_bool)
{
	var_77_bool = 1;
	return 0;
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0;
	var_0_object = var_7_object;
	var_17_bool = 0; var_18_object = Obj();
	var_7_object = var_18_object;
	func_342(var_17_bool, var_18_object);
	var_57_bool = var_17_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	CreateDialog(var_13_object);
	var_58_int = 0;
	func_477(var_58_int);
	@@var_13_object:SetNPCName(var_58_int);
	var_59_string = "";
	func_479(var_59_string);
	@@var_13_object:SetPhoto(var_59_string);
	var_60_int = 0;
	func_460(var_60_int);
	@@var_13_object:SetPlayerName(var_60_int);
	IsOverrideActive(var_14_bool);
	var_68_bool = var_14_bool;
	if(var_68_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	DoDialog(var_13_object);
	var_69_object = Obj(); var_70_object = Obj();
	var_7_object = var_69_object;
	var_13_object = var_70_object;
	TaskCall(1);
	func_63(var_71_object, var_72_object, var_73_string, var_74_bool, var_69_object, var_70_object);
	TaskReturn();
	@@var_13_object:IsDialogEnd(var_16_bool);
	
Label_45:
	var_114_bool = var_16_bool == 0; //@nz
	if(var_114_bool != 0) {
		sync();
		@@var_13_object:IsDialogEnd(var_16_bool);
		goto Label_45;
	}
	var_7_object = Obj();
	func_398();
	StopDialog(var_13_object);
	@@var_13_object:GetReturnValue((int)-1);
	var_15_int = var_6_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_420()
{
	var_8_bool = 0;
	func_481(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_479(var_59_string)
{
	var_59_string = "ui/NPC_Klara.png";
	return 0;
}


func_427(var_42_cvector, var_43_cvector)
{
	var_45_float = 0; var_46_float = 0;
	var_47_int = var_43_cvector | var_43_cvector;
	var_46_float = sqrt(var_47_int);
	var_48_float = 9.999999974752427e-07;
	var_49_bool = var_46_float < var_48_float;
	if(var_49_bool != 0) {
		var_42_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_42_cvector = var_43_cvector / var_46_float;
	return 2;
}


func_460(var_60_int)
{
	var_61_int = 0; var_62_int = 0;
	GetVariable("player", var_62_int);
	var_65_bool = var_62_int == (int)0;
	if(var_65_bool != 0) {
		var_60_int = 200001;
		return 2;
	EMIT "GOTO 0x1db";
	}
	var_67_bool = var_62_int == (int)1;
	if(var_67_bool != 0) {
		var_60_int = 200002;
		return 2;
	}
	var_60_int = 200003;
	return 2;
}


func_398()
{
	CameraSwitchToNormal();
	return 0;
}


func_402(var_80_string)
{
	var_81_float = 0; var_82_float = 0; var_83_float = 0; var_84_float = 0;
	var_86_int = "playing " + var_80_string;
	Trace(var_86_int);
	lshGetAnimTimes(var_80_string, var_83_float, var_84_float);
	lshPlayAnimation(var_83_float, var_84_float);
	var_88_int = "start: " + var_83_float;
	Trace(var_88_int);
	var_90_int = "end: " + var_84_float;
	Trace(var_90_int);
	return 4;
}


func_437(var_94_int, var_95_string)
{
	var_96_int = 0; var_97_int = 0;
	GetVariable(var_95_string, var_97_int);
	var_97_int = var_94_int;
	return 2;
}


func_342(var_17_bool, var_18_object)
{
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0;
	@@var_18_object:GetPosition(var_28_cvector);
	@@var_18_object:GetEyesHeight(var_27_float);
	var_35_float = GetByIndex(var_28_cvector, 1);
	var_35_float = var_35_float + var_27_float;
	SetByIndex(var_28_cvector, 1) = var_35_float;
	GetPosition(var_29_cvector);
	GetEyesHeight(var_27_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	var_36_float = var_36_float + var_27_float;
	SetByIndex(var_29_cvector, 1) = var_36_float;
	var_30_cvector = var_28_cvector - var_29_cvector;
	var_37_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (float)0;
	var_38_int = var_30_cvector | var_30_cvector;
	var_39_float = sqrt(var_38_int);
	var_30_cvector = var_30_cvector / var_39_float;
	var_31_cvector = -var_30_cvector;
	var_41_float = var_30_cvector * (int)70;
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	var_43_cvector = var_31_cvector ^ CVector(0.0, 1.0, 0.0);
	func_427(var_42_cvector, var_43_cvector);
	var_51_float = var_42_cvector * (int)25;
	var_52_int = var_41_float + var_51_float;
	var_32_cvector = var_52_int - CVector(0.0, 10.0, 0.0);
	var_33_cvector = var_29_cvector + var_32_cvector;
	IsOverrideActive(var_34_bool);
	var_54_bool = var_34_bool;
	if(var_54_bool != 0) {
		var_17_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_33_cvector, var_31_cvector);
	var_55_float = GetByIndex(var_32_cvector, 0);
	var_56_float = GetByIndex(var_32_cvector, 2);
	Rotate(var_55_float, var_56_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_17_bool = 1;
	return 16;
}


func_442()
{
	SetVariable("ood12Klara1", (int)1);
	return 0;
}


func_477(var_58_int)
{
	var_58_int = 2865;
	return 0;
}


func_126(var_2_object, var_76_string)
{
	var_77_bool = 0;
	func_481(var_77_bool);
	var_78_bool = var_77_bool == 0; //@nz
	if(var_78_bool != 0) {
		return 0;
	}
	var_79_bool = var_76_string == var_2_object;
	if(var_79_bool != 0) {
		return 0;
	}
	var_80_string = "";
	var_76_string = var_80_string;
	func_402(var_80_string);
	var_2_object = var_76_string;
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object;
	var_1_object = var_69_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_76_string = "";
		func_126(var_70_object, "Neutral");
		@@@var_0_object:SetMessage((int)14935);
		@@@var_0_object:ClearReplies();
		var_92_bool = 0; var_93_object = Obj();
		var_93_object = var_1_object;
		func_448(var_93_object);
		if(var_92_bool != 0) {
			@@@var_0_object:AddReply((int)14936, (int)16188, (int)16187);
		}
		@@@var_0_object:AddReply((int)14954, (int)-1, (int)16207);
		goto Label_96;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_96:
	var_106_bool = 0;
	func_481(var_106_bool);
	if(var_106_bool != 0) {

	Label_100:
		lshWaitForAnimEnd();
		var_107_string = var_3_string;
		if(var_107_string != 0) {
		} else {
			var_108_string = "";
			var_108_string = var_2_object;
			func_402(var_108_string);
			goto Label_100;
	}
		PlayAnimation("all", "idle");

	Label_115:
		WaitForAnimEnd();
		var_111_string = var_3_string;
		if(var_111_string != 0) {
			goto Label_125;
		}
		PlayAnimation("all", "idle");
		goto Label_115;
	}
	goto Label_125;
	
Label_125:
	return 0;
	
}


