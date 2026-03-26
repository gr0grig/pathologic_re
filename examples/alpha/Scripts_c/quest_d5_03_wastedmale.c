// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,GetVariable/2,HasAnimation/3,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:ood5Prisoner1|W:player|W:ui/NPC_None.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x12b
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9d vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x122 vars=object
// @EVENT_26: op=0x13b vars=string
// @EVENT_5: op=0x152 vars=
// @EVENT_6: op=0x157 vars=
// @PE: 0x3f,0x8d,0x9d,0x119,0x122,0x1f0,0x23a,0x240

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_518();
		var_11_bool = var_7_bool == (int)13016;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_570();
		}
		var_17_bool = var_7_bool == (int)13017;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_570();
		}
		var_21_bool = var_6_int == (int)13013;
		if(var_21_bool != 0) {
			var_22_bool = 0; var_23_object = Obj();
			var_23_object = var_1_object;
			func_576(var_23_object);
			if(var_22_bool != 0) {
				var_30_string = "";
				func_141(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)11803);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)11804, (int)13015, (int)13014);
				@@@var_0_object:AddReply((int)11808, (int)13019, (int)13018);
				return 0;
			}
			var_52_string = "";
			func_141(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12549);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12550, (int)-1, (int)13719);
			return 0;
		}
		var_58_bool = var_6_int == (int)13019;
		if(var_58_bool != 0) {
			var_59_string = "";
			func_141(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11809);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11810, (int)13015, (int)13020);
			@@@var_0_object:AddReply((int)11811, (int)13015, (int)13022);
			return 0;
		}
		var_68_bool = var_6_int == (int)13015;
		if(var_68_bool != 0) {
			var_69_string = "";
			func_141(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11805);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11806, (int)-1, (int)13016);
			@@@var_0_object:AddReply((int)11807, (int)-1, (int)13017);
			return 0;
		}
		var_3_string = true;
		var_77_bool = 0;
		func_609(var_77_bool);
		if(var_77_bool != 0) {
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
	func_430();
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	func_281(var_6_object, var_7_int, var_8_object);
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
			func_359(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_525(var_14_object);
			RemoveActor(var_14_object);
		}
	}
	return 2;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_359(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_525(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_299:
	var_6_bool = 0;
	func_435(var_6_bool);
	var_9_bool = var_6_bool == 0; //@nz
	if(var_9_bool != 0) {
		Hold();
		goto Label_299;
	}
	Sleep((int)3);
	func_361();
	goto Label_299;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_9_int, var_10_object)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0;
	var_0_object = var_10_object;
	var_20_bool = 0; var_21_object = Obj();
	var_10_object = var_21_object;
	func_440(var_20_bool, var_21_object);
	var_60_bool = var_20_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	CreateDialog(var_16_object);
	var_61_int = 0;
	func_605(var_61_int);
	@@var_16_object:SetNPCName(var_61_int);
	var_62_string = "";
	func_607(var_62_string);
	@@var_16_object:SetPhoto(var_62_string);
	var_63_int = 0;
	func_588(var_63_int);
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
	func_496();
	StopDialog(var_16_object);
	@@var_16_object:GetReturnValue((int)-1);
	var_18_int = var_9_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_518()
{
	var_9_bool = 0;
	func_609(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_525(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_141(var_2_object, var_87_string)
{
	var_88_bool = 0;
	func_609(var_88_bool);
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
	func_500(var_91_string);
	var_2_object = var_87_string;
	return 0;
}


func_531(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_46_cvector | var_46_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_45_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_45_cvector = var_46_cvector / var_49_float;
	return 2;
}


func_281(var_7_int, var_8_object, var_11_object)
{
	var_9_int = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	TaskCall(0);
	func_0(var_11_object, var_9_int, var_10_object);
	TaskReturn();
	var_11_object = var_7_int;
	return 0;
}


func_541(var_81_int, var_82_string)
{
	var_83_int = 0; var_84_int = 0;
	GetVariable(var_82_string, var_84_int);
	var_84_int = var_81_int;
	return 2;
}


func_546(var_33_string, var_34_int)
{
	var_35_string = ""; var_36_string = "";
	var_37_int = var_34_int;
	if(var_37_int != 0) {
		"idle" = "idle" + var_34_int;
	}
	var_36_string = var_33_string;
	return 2;
}


func_553(var_27_int)
{
	var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_bool = 0;
	var_30_int = 0;
	
Label_555:
	var_33_string = ""; var_34_int = 0;
	var_30_int = var_34_int;
	func_546(var_33_string, var_34_int);
	HasAnimation(var_31_bool, "all", var_33_string);
	var_38_bool = var_31_bool == 0; //@nz
	if(var_38_bool != 0) {
	} else {
		var_30_int = var_30_int + (int)1;
		goto Label_555;
	}
	var_30_int = var_27_int;
	return 4;
	
}


func_430()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_435(var_6_bool)
{
	var_7_bool = 0; var_8_bool = 0;
	IsLoaded(var_8_bool);
	var_8_bool = var_6_bool;
	return 2;
}


func_440(var_20_bool, var_21_object)
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
	func_531(var_45_cvector, var_46_cvector);
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


func_570()
{
	SetVariable("ood5Prisoner1", (int)1);
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_72_object, var_73_object)
{
	var_0_object = var_73_object;
	var_1_object = var_72_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_79_bool = 0; var_80_object = Obj();
		var_80_object = var_1_object;
		func_576(var_80_object);
		if(var_79_bool != 0) {
			var_87_string = "";
			func_141(var_73_object, "Neutral");
			@@@var_0_object:SetMessage((int)11803);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11804, (int)13015, (int)13014);
			@@@var_0_object:AddReply((int)11808, (int)13019, (int)13018);
		} else {
				var_117_string = "";
				func_141(var_73_object, "Neutral");
				@@@var_0_object:SetMessage((int)12549);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12550, (int)-1, (int)13719);
				goto Label_111;
		}
	}
Label_111:
	var_109_bool = 0;
	func_609(var_109_bool);
	if(var_109_bool != 0) {

	Label_115:
		lshWaitForAnimEnd();
		var_110_string = var_3_string;
		if(var_110_string != 0) {
		} else {
			var_111_string = "";
			var_111_string = var_2_object;
			func_500(var_111_string);
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


func_576(var_79_bool)
{
	var_81_int = 0; var_82_string = "";
	func_541(var_81_int, "ood5Prisoner1");
	var_86_bool = var_81_int == (int)0;
	if(var_86_bool != 0) {
		var_79_bool = 1;
		return 0;
	}
	var_79_bool = 0;
	return 0;
}


func_588(var_63_int)
{
	var_64_int = 0; var_65_int = 0;
	GetVariable("player", var_65_int);
	var_68_bool = var_65_int == (int)0;
	if(var_68_bool != 0) {
		var_63_int = 200001;
		return 2;
	EMIT "GOTO 0x25b";
	}
	var_70_bool = var_65_int == (int)1;
	if(var_70_bool != 0) {
		var_63_int = 200002;
		return 2;
	}
	var_63_int = 200003;
	return 2;
}


func_605(var_61_int)
{
	var_61_int = 3341;
	return 0;
}


func_607(var_62_string)
{
	var_62_string = "ui/NPC_None.png";
	return 0;
}


func_609(var_88_bool)
{
	var_88_bool = 0;
	return 0;
}


func_359(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_361()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0;
	WaitForAnimEnd();
	var_25_bool = 0;
	func_435(var_25_bool);
	var_26_bool = var_25_bool == 0; //@nz
	if(var_26_bool != 0) {
		return 14;
	}
	func_553((int)0);
	var_27_int = var_18_int;
	var_19_int = 0;
	
Label_375:
	var_40_bool = 0;
	var_40_bool = 0;
	var_42_bool = var_19_int < (int)5;
	if(var_42_bool != 0) {
		var_43_bool = 0;
		func_435(var_43_bool);
		if(var_43_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		irand(var_20_int, (int)3);
		var_46_bool = var_20_int == (int)0;
		if(var_46_bool != 0) {
			var_47_int = var_18_int;
			if(var_47_int == 0) goto Label_408;
			irand(var_21_int, var_18_int);
			var_49_string = ""; var_50_int = 0;
			var_21_int = var_50_int;
			func_546(var_49_string, var_50_int);
			PlayAnimation("all", var_49_string);
			WaitForAnimEnd(var_22_bool);
			var_51_bool = var_22_bool == 0; //@nz
			if(var_51_bool != 0) {
			} else {
		} else {
				var_54_bool = var_20_int == (int)1;
				if(var_54_bool != 0) {
					rand(var_23_float, (int)4);
					var_57_int = var_23_float + (int)1;
					Sleep(var_57_int, var_24_bool);
					var_58_bool = var_24_bool == 0; //@nz
					if(var_58_bool != 0) {
						goto Label_429;
					}
					goto Label_426;
				}
				var_59_int = var_19_int;
				if(var_59_int == 0) goto Label_426;
				goto Label_429;
		}
		Label_426:
			var_19_int = var_19_int + (int)1;
			goto Label_375;

		}
	}
Label_429:
	return 14;
	
}


func_496()
{
	CameraSwitchToNormal();
	return 0;
}


func_500(var_91_string)
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


