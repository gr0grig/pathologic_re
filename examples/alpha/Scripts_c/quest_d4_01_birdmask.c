// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,StopGroup0/0,IsLoaded/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,FindActor/2,Trigger/2,GetGameTime/1,HasAnimation/3,GetMainOutdoorScene/1,GetVariable/2
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_d4_01|W:birdmask_done|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:d4q01Whitemask|W:pt_d4q01_key1|A:AddMark|W:pt_d4q01_whitemask|A:ShowMap|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:ui/NPC_Black.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x133
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x8e vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x13c vars=object
// @PE: 0x3f,0x7e,0x8e,0x13c,0x1d6,0x236

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_492();
		var_11_bool = var_7_bool == (int)10626;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_550();
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_566(var_31_object);
		}
		var_57_bool = var_7_bool == (int)10627;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_550();
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_566(var_61_object);
		}
		var_63_bool = var_6_int == (int)10619;
		if(var_63_bool != 0) {
			var_64_string = "";
			func_126(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9650);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9651, (int)10621, (int)10620);
			@@@var_0_object:AddReply((int)9661, (int)10633, (int)10632);
			@@@var_0_object:AddReply((int)9665, (int)10625, (int)10638);
			return 0;
		}
		var_90_bool = var_6_int == (int)10633;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_126(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9662);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9663, (int)10625, (int)10634);
			@@@var_0_object:AddReply((int)9664, (int)10621, (int)10636);
			return 0;
		}
		var_100_bool = var_6_int == (int)10621;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_126(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9653, (int)10623, (int)10622);
			@@@var_0_object:AddReply((int)9660, (int)10625, (int)10630);
			return 0;
		}
		var_110_bool = var_6_int == (int)10623;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_126(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9654);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9655, (int)10625, (int)10624);
			@@@var_0_object:AddReply((int)9659, (int)10625, (int)10628);
			return 0;
		}
		var_120_bool = var_6_int == (int)10625;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_126(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9656);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9657, (int)-1, (int)10626);
			@@@var_0_object:AddReply((int)9658, (int)-1, (int)10627);
			return 0;
		}
		var_3_string = true;
		var_129_bool = 0;
		func_653(var_129_bool);
		if(var_129_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8f";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_bool = var_0_object == 0; //@nz
	if(var_7_bool != 0) {
		var_0_object = true;
		func_404();
		var_8_int = 0; var_9_object = Obj();
		var_6_object = var_9_object;
		TaskCall(0);
		func_0(var_10_object, var_8_int, var_9_object);
		TaskReturn();
		var_113_bool = 0; var_114_string = ""; var_115_string = "";
		func_509(var_113_bool, "quest_d4_01", "birdmask_done");
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_0_object = false;
	
Label_308:
	Sleep((int)3);
	func_335();
	goto Label_308;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_8_int, var_9_object)
{
	var_11_object = Obj(); var_12_bool = 0; var_13_int = 0; var_14_bool = 0; var_15_object = Obj(); var_16_bool = 0; var_17_int = 0; var_18_bool = 0;
	var_0_object = var_9_object;
	var_19_bool = 0; var_20_object = Obj();
	var_9_object = var_20_object;
	func_414(var_19_bool, var_20_object);
	var_59_bool = var_19_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_8_int = -2;
		return 8;
	}
	CreateDialog(var_15_object);
	var_60_int = 0;
	func_649(var_60_int);
	@@var_15_object:SetNPCName(var_60_int);
	var_61_string = "";
	func_651(var_61_string);
	@@var_15_object:SetPhoto(var_61_string);
	var_62_int = 0;
	func_632(var_62_int);
	@@var_15_object:SetPlayerName(var_62_int);
	IsOverrideActive(var_16_bool);
	var_70_bool = var_16_bool;
	if(var_70_bool != 0) {
		var_8_int = -2;
		return 8;
	}
	DoDialog(var_15_object);
	var_71_object = Obj(); var_72_object = Obj();
	var_9_object = var_71_object;
	var_15_object = var_72_object;
	TaskCall(1);
	func_63(var_73_object, var_74_object, var_75_string, var_76_bool, var_71_object, var_72_object);
	TaskReturn();
	@@var_15_object:IsDialogEnd(var_18_bool);
	
Label_45:
	var_111_bool = var_18_bool == 0; //@nz
	if(var_111_bool != 0) {
		sync();
		@@var_15_object:IsDialogEnd(var_18_bool);
		goto Label_45;
	}
	var_9_object = Obj();
	func_470();
	StopDialog(var_15_object);
	@@var_15_object:GetReturnValue((int)-1);
	var_17_int = var_8_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_582(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj();
	GetMainOutdoorScene(var_19_object);
	var_21_bool = var_19_object == 0; //@ne
	if(var_21_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_20_object = 0;
		var_20_object = var_16_object;
		return 4;
	}
	@@var_19_object:GetMap(var_20_object);
	var_20_object = var_16_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_649(var_60_int)
{
	var_60_int = 4029;
	return 0;
}


func_521(var_27_float)
{
	var_28_float = 0; var_29_float = 0;
	GetGameTime(var_29_float);
	var_29_float = var_27_float;
	return 2;
}


func_651(var_61_string)
{
	var_61_string = "ui/NPC_Black.png";
	return 0;
}


func_653(var_79_bool)
{
	var_79_bool = 0;
	return 0;
}


func_526(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_335()
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_bool = 0; var_12_float = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0;
	WaitForAnimEnd();
	var_21_bool = 0;
	func_409(var_21_bool);
	var_24_bool = var_21_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 14;
	}
	func_533((int)0);
	var_25_int = var_14_int;
	var_15_int = 0;
	
Label_349:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_15_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_409(var_41_bool);
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		irand(var_16_int, (int)3);
		var_44_bool = var_16_int == (int)0;
		if(var_44_bool != 0) {
			var_45_int = var_14_int;
			if(var_45_int == 0) goto Label_382;
			irand(var_17_int, var_14_int);
			var_47_string = ""; var_48_int = 0;
			var_17_int = var_48_int;
			func_526(var_47_string, var_48_int);
			PlayAnimation("all", var_47_string);
			WaitForAnimEnd(var_18_bool);
			var_49_bool = var_18_bool == 0; //@nz
			if(var_49_bool != 0) {
			} else {
		} else {
				var_52_bool = var_16_int == (int)1;
				if(var_52_bool != 0) {
					rand(var_19_float, (int)4);
					var_55_int = var_19_float + (int)1;
					Sleep(var_55_int, var_20_bool);
					var_56_bool = var_20_bool == 0; //@nz
					if(var_56_bool != 0) {
						goto Label_403;
					}
					goto Label_400;
				}
				var_57_int = var_15_int;
				if(var_57_int == 0) goto Label_400;
				goto Label_403;
		}
		Label_400:
			var_15_int = var_15_int + (int)1;
			goto Label_349;

		}
	}
Label_403:
	return 14;
	
}


func_404()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_533(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_535:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_526(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_535;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_470()
{
	CameraSwitchToNormal();
	return 0;
}


func_599(var_32_object, var_33_string, var_34_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_object = Obj(); var_43_bool = 0;
	GetMainOutdoorScene(var_42_object);
	var_44_bool = var_42_object == 0; //@ne
	if(var_44_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_42_object:GetLocator(var_33_string, var_43_bool, var_40_cvector, var_41_cvector);
	var_46_bool = var_43_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_48_int = "Warning: outdoor scene locator " + var_33_string;
		var_50_int = var_48_int + " doesnt exist";
		Trace(var_50_int);
	}
	@@var_42_object:GetMap(var_32_object);
	var_51_bool = var_32_object == 0; //@ne
	if(var_51_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_53_float = GetByIndex(var_40_cvector, 0);
	var_54_float = GetByIndex(var_40_cvector, 2);
	@@var_32_object:SetMapParams(var_53_float, var_54_float, var_34_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_409(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0;
	IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
	return 2;
}


func_474(var_82_string)
{
	var_83_float = 0; var_84_float = 0; var_85_float = 0; var_86_float = 0;
	var_88_int = "playing " + var_82_string;
	Trace(var_88_int);
	lshGetAnimTimes(var_82_string, var_85_float, var_86_float);
	lshPlayAnimation(var_85_float, var_86_float);
	var_90_int = "start: " + var_85_float;
	Trace(var_90_int);
	var_92_int = "end: " + var_86_float;
	Trace(var_92_int);
	return 4;
}


func_414(var_19_bool, var_20_object)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0;
	@@var_20_object:GetPosition(var_30_cvector);
	@@var_20_object:GetEyesHeight(var_29_float);
	var_37_float = GetByIndex(var_30_cvector, 1);
	var_37_float = var_37_float + var_29_float;
	SetByIndex(var_30_cvector, 1) = var_37_float;
	GetPosition(var_31_cvector);
	GetEyesHeight(var_29_float);
	var_38_float = GetByIndex(var_31_cvector, 1);
	var_38_float = var_38_float + var_29_float;
	SetByIndex(var_31_cvector, 1) = var_38_float;
	var_32_cvector = var_30_cvector - var_31_cvector;
	var_39_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (float)0;
	var_40_int = var_32_cvector | var_32_cvector;
	var_41_float = sqrt(var_40_int);
	var_32_cvector = var_32_cvector / var_41_float;
	var_33_cvector = -var_32_cvector;
	var_43_float = var_32_cvector * (int)70;
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_45_cvector = var_33_cvector ^ CVector(0.0, 1.0, 0.0);
	func_499(var_44_cvector, var_45_cvector);
	var_53_float = var_44_cvector * (int)25;
	var_54_int = var_43_float + var_53_float;
	var_34_cvector = var_54_int - CVector(0.0, 10.0, 0.0);
	var_35_cvector = var_31_cvector + var_34_cvector;
	IsOverrideActive(var_36_bool);
	var_56_bool = var_36_bool;
	if(var_56_bool != 0) {
		var_19_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_35_cvector, var_33_cvector);
	var_57_float = GetByIndex(var_34_cvector, 0);
	var_58_float = GetByIndex(var_34_cvector, 2);
	Rotate(var_57_float, var_58_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_19_bool = 1;
	return 16;
}


func_550()
{
	var_14_object = Obj(); var_15_object = Obj();
	func_582(Obj());
	var_16_object = var_15_object;
	var_27_float = 0;
	func_521(var_27_float);
	@@var_15_object:AddMark("d4q01Whitemask", "pt_d4q01_key1", (int)1, (int)11523, var_27_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_492()
{
	var_9_bool = 0;
	func_653(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_499(var_44_cvector, var_45_cvector)
{
	var_47_float = 0; var_48_float = 0;
	var_49_int = var_45_cvector | var_45_cvector;
	var_48_float = sqrt(var_49_int);
	var_50_float = 9.999999974752427e-07;
	var_51_bool = var_48_float < var_50_float;
	if(var_51_bool != 0) {
		var_44_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_44_cvector = var_45_cvector / var_48_float;
	return 2;
}


func_566(var_31_object)
{
	var_32_object = Obj(); var_33_string = ""; var_34_float = 0;
	func_582(Obj());
	var_35_object = var_32_object;
	func_599(var_32_object, "pt_d4q01_whitemask", (float)2);
	var_55_object = Obj();
	func_582(var_55_object);
	@@var_31_object:ShowMap(var_55_object);
	return 0;
}


func_632(var_62_int)
{
	var_63_int = 0; var_64_int = 0;
	GetVariable("player", var_64_int);
	var_67_bool = var_64_int == (int)0;
	if(var_67_bool != 0) {
		var_62_int = 200001;
		return 2;
	EMIT "GOTO 0x287";
	}
	var_69_bool = var_64_int == (int)1;
	if(var_69_bool != 0) {
		var_62_int = 200002;
		return 2;
	}
	var_62_int = 200003;
	return 2;
}


func_509(var_113_bool, var_114_string, var_115_string)
{
	var_116_object = Obj(); var_117_object = Obj();
	FindActor(var_117_object, var_114_string);
	var_118_bool = var_117_object == 0; //@ne
	if(var_118_bool != 0) {
		var_113_bool = 0;
		return 2;
	}
	Trigger(var_117_object, var_115_string);
	var_113_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_126(var_2_object, var_78_string)
{
	var_79_bool = 0;
	func_653(var_79_bool);
	var_80_bool = var_79_bool == 0; //@nz
	if(var_80_bool != 0) {
		return 0;
	}
	var_81_bool = var_78_string == var_2_object;
	if(var_81_bool != 0) {
		return 0;
	}
	var_82_string = "";
	var_78_string = var_82_string;
	func_474(var_82_string);
	var_2_object = var_78_string;
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_71_object, var_72_object)
{
	var_0_object = var_72_object;
	var_1_object = var_71_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_78_string = "";
		func_126(var_72_object, "Neutral");
		@@@var_0_object:SetMessage((int)9650);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)9651, (int)10621, (int)10620);
		@@@var_0_object:AddReply((int)9661, (int)10633, (int)10632);
		@@@var_0_object:AddReply((int)9665, (int)10625, (int)10638);
		goto Label_96;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_96:
	var_103_bool = 0;
	func_653(var_103_bool);
	if(var_103_bool != 0) {

	Label_100:
		lshWaitForAnimEnd();
		var_104_string = var_3_string;
		if(var_104_string != 0) {
		} else {
			var_105_string = "";
			var_105_string = var_2_object;
			func_474(var_105_string);
			goto Label_100;
	}
		PlayAnimation("all", "idle");

	Label_115:
		WaitForAnimEnd();
		var_108_string = var_3_string;
		if(var_108_string != 0) {
			goto Label_125;
		}
		PlayAnimation("all", "idle");
		goto Label_115;
	}
	goto Label_125;
	
Label_125:
	return 0;
	
}


