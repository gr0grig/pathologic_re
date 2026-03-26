// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:player|W:ui/NPC_Black.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x15e
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x93 vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x162 vars=object
// @PE: 0x3f,0x83,0x93,0x162,0x1a2

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_440();
		var_10_bool = var_5_int == (int)16130;
		if(var_10_bool != 0) {
			var_11_string = "";
			func_131(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14885, (int)16132, (int)16131);
			@@@var_0_object:AddReply((int)14905, (int)16132, (int)16151);
			@@@var_0_object:AddReply((int)14906, (int)16132, (int)16153);
			@@@var_0_object:AddReply((int)14907, (int)16132, (int)16155);
			return 0;
		}
		var_40_bool = var_5_int == (int)16132;
		if(var_40_bool != 0) {
			var_41_string = "";
			func_131(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14886);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14887, (int)16134, (int)16133);
			@@@var_0_object:AddReply((int)14893, (int)16140, (int)16139);
			@@@var_0_object:AddReply((int)14899, (int)16146, (int)16145);
			return 0;
		}
		var_53_bool = var_5_int == (int)16146;
		if(var_53_bool != 0) {
			var_54_string = "";
			func_131(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14900);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14901, (int)16148, (int)16147);
			@@@var_0_object:AddReply((int)14904, (int)-1, (int)16150);
			return 0;
		}
		var_63_bool = var_5_int == (int)16148;
		if(var_63_bool != 0) {
			var_64_string = "";
			func_131(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14902);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14903, (int)-1, (int)16149);
			return 0;
		}
		var_70_bool = var_5_int == (int)16140;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_131(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14894);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14895, (int)16142, (int)16141);
			@@@var_0_object:AddReply((int)14898, (int)-1, (int)16144);
			return 0;
		}
		var_80_bool = var_5_int == (int)16142;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_131(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14896);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14897, (int)-1, (int)16143);
			return 0;
		}
		var_87_bool = var_5_int == (int)16134;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_131(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14888);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14889, (int)16136, (int)16135);
			@@@var_0_object:AddReply((int)14892, (int)-1, (int)16138);
			return 0;
		}
		var_97_bool = var_5_int == (int)16136;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_131(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14890);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14891, (int)-1, (int)16137);
			return 0;
		}
		var_3_string = true;
		var_103_bool = 0;
		func_478(var_103_bool);
		if(var_103_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x94";
	
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
	
Label_350:
	Hold();
	goto Label_350;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0;
	var_0_object = var_7_object;
	var_17_bool = 0; var_18_object = Obj();
	var_7_object = var_18_object;
	func_362(var_17_bool, var_18_object);
	var_57_bool = var_17_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	CreateDialog(var_13_object);
	var_58_int = 0;
	func_474(var_58_int);
	@@var_13_object:SetNPCName(var_58_int);
	var_59_string = "";
	func_476(var_59_string);
	@@var_13_object:SetPhoto(var_59_string);
	var_60_int = 0;
	func_457(var_60_int);
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
	var_112_bool = var_16_bool == 0; //@nz
	if(var_112_bool != 0) {
		sync();
		@@var_13_object:IsDialogEnd(var_16_bool);
		goto Label_45;
	}
	var_7_object = Obj();
	func_418();
	StopDialog(var_13_object);
	@@var_13_object:GetReturnValue((int)-1);
	var_15_int = var_6_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_418()
{
	CameraSwitchToNormal();
	return 0;
}


func_131(var_2_object, var_76_string)
{
	var_77_bool = 0;
	func_478(var_77_bool);
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
	func_422(var_80_string);
	var_2_object = var_76_string;
	return 0;
}


func_422(var_80_string)
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


func_457(var_60_int)
{
	var_61_int = 0; var_62_int = 0;
	GetVariable("player", var_62_int);
	var_65_bool = var_62_int == (int)0;
	if(var_65_bool != 0) {
		var_60_int = 200001;
		return 2;
	EMIT "GOTO 0x1d8";
	}
	var_67_bool = var_62_int == (int)1;
	if(var_67_bool != 0) {
		var_60_int = 200002;
		return 2;
	}
	var_60_int = 200003;
	return 2;
}


func_362(var_17_bool, var_18_object)
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
	func_447(var_42_cvector, var_43_cvector);
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


func_447(var_42_cvector, var_43_cvector)
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


func_440()
{
	var_8_bool = 0;
	func_478(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_474(var_58_int)
{
	var_58_int = 14840;
	return 0;
}


func_476(var_59_string)
{
	var_59_string = "ui/NPC_Black.png";
	return 0;
}


func_478(var_77_bool)
{
	var_77_bool = 1;
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object;
	var_1_object = var_69_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_76_string = "";
		func_131(var_70_object, "Neutral");
		@@@var_0_object:SetMessage((int)14884);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)14885, (int)16132, (int)16131);
		@@@var_0_object:AddReply((int)14905, (int)16132, (int)16151);
		@@@var_0_object:AddReply((int)14906, (int)16132, (int)16153);
		@@@var_0_object:AddReply((int)14907, (int)16132, (int)16155);
		goto Label_101;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_101:
	var_104_bool = 0;
	func_478(var_104_bool);
	if(var_104_bool != 0) {

	Label_105:
		lshWaitForAnimEnd();
		var_105_string = var_3_string;
		if(var_105_string != 0) {
		} else {
			var_106_string = "";
			var_106_string = var_2_object;
			func_422(var_106_string);
			goto Label_105;
	}
		PlayAnimation("all", "idle");

	Label_120:
		WaitForAnimEnd();
		var_109_string = var_3_string;
		if(var_109_string != 0) {
			goto Label_130;
		}
		PlayAnimation("all", "idle");
		goto Label_120;
	}
	goto Label_130;
	
Label_130:
	return 0;
	
}


