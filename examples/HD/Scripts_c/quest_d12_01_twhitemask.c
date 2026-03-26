// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,HasAnimation/3,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:SetProperty|W:itheater@door1|W:ood12Whitemask1|W:ood12Whitemask2|W:branch|W:ui/NPC_wmask.png|W:ui/NPC_wmask_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1fa
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd6 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x200 vars=object
// @EVENT_26: op=0x231 vars=string
// @EVENT_6: op=0x239 vars=
// @EVENT_7: op=0x27a vars=int
// @PE: 0x4a,0xc0,0xd6,0x200,0x231,0x250,0x27a,0x291,0x3c8,0x3cf,0x3d5,0x3db,0x3e7

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_899();
		var_17_bool = var_13_bool == (int)16338;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_981();
		}
		var_23_bool = var_13_bool == (int)16349;
		if(var_23_bool != 0) {
			var_24_object = Obj(); var_25_object = Obj();
			var_24_object = var_1_object;
			var_25_object = var_0_object;
			func_981();
		}
		var_27_bool = var_13_bool == (int)16351;
		if(var_27_bool != 0) {
			var_28_object = Obj(); var_29_object = Obj();
			var_28_object = var_1_object;
			var_29_object = var_0_object;
			func_981();
		}
		var_31_bool = var_12_bool == (int)16322;
		if(var_31_bool != 0) {
			var_32_bool = 0; var_33_object = Obj();
			var_33_object = var_1_object;
			func_987(var_33_object);
			if(var_32_bool != 0) {
				var_40_object = Obj(); var_41_object = Obj();
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_975();
				var_44_object = Obj(); var_45_object = Obj();
				var_44_object = var_1_object;
				var_45_object = var_0_object;
				func_968();
				var_56_string = "";
				func_192(var_13_bool, "Neutral");
				@@@var_0_object:SetMessage((int)515058);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)515059, (int)16324, (int)16323);
				@@@var_0_object:AddReply((int)515072, (int)-1, (int)16336);
				return 0;
			}
			var_80_string = "";
			func_192(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515073);
			@@@var_0_object:ClearReplies();
			var_82_bool = 0; var_83_object = Obj();
			var_83_object = var_1_object;
			func_999(var_83_object);
			if(var_82_bool != 0) {
				@@@var_0_object:AddReply((int)515074, (int)16339, (int)16338);
			}
			var_91_bool = 0; var_92_object = Obj();
			var_92_object = var_1_object;
			func_999(var_92_object);
			if(var_91_bool != 0) {
				@@@var_0_object:AddReply((int)515085, (int)16341, (int)16349);
			}
			var_96_bool = 0; var_97_object = Obj();
			var_97_object = var_1_object;
			func_999(var_97_object);
			if(var_96_bool != 0) {
				@@@var_0_object:AddReply((int)515086, (int)16341, (int)16351);
			}
			@@@var_0_object:AddReply((int)515087, (int)-1, (int)16353);
			return 0;
		}
		var_105_bool = var_12_bool == (int)16339;
		if(var_105_bool != 0) {
			var_106_string = "";
			func_192(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515075);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515076, (int)16341, (int)16340);
			@@@var_0_object:AddReply((int)515081, (int)-1, (int)16345);
			@@@var_0_object:AddReply((int)515082, (int)16347, (int)16346);
			return 0;
		}
		var_118_bool = var_12_bool == (int)16347;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_192(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515083);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515084, (int)16341, (int)16348);
			return 0;
		}
		var_125_bool = var_12_bool == (int)16341;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_192(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515077);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515078, (int)-1, (int)16342);
			@@@var_0_object:AddReply((int)515079, (int)-1, (int)16343);
			@@@var_0_object:AddReply((int)515080, (int)-1, (int)16344);
			return 0;
		}
		var_138_bool = var_12_bool == (int)16324;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_192(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515060);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515071, (int)-1, (int)16335);
			@@@var_0_object:AddReply((int)515061, (int)16326, (int)16325);
			return 0;
		}
		var_148_bool = var_12_bool == (int)16326;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_192(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515062);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515063, (int)16328, (int)16327);
			@@@var_0_object:AddReply((int)515067, (int)16332, (int)16331);
			return 0;
		}
		var_158_bool = var_12_bool == (int)16332;
		if(var_158_bool != 0) {
			var_159_string = "";
			func_192(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515068);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515069, (int)-1, (int)16333);
			@@@var_0_object:AddReply((int)515070, (int)-1, (int)16334);
			return 0;
		}
		var_168_bool = var_12_bool == (int)16328;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_192(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515064);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515065, (int)-1, (int)16329);
			@@@var_0_object:AddReply((int)515066, (int)-1, (int)16330);
			return 0;
		}
		var_3_string = true;
		var_177_bool = 0;
		func_1036(var_177_bool);
		if(var_177_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd7";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_657(var_11_bool, var_12_object);
	var_16_int = 0; var_17_object = Obj();
	var_12_object = var_17_object;
	TaskCall(0);
	func_0(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_14_bool = var_12_string == "cleanup";
	if(var_14_bool != 0) {
		func_541(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_657(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_590(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_906(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_619(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_888(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_656;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_656:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_523(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_770(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_1030(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_1028(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_1032(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_1034(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_1011(var_79_int);
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
	var_185_bool = var_26_bool == 0; //@nz
	if(var_185_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_839();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_770(var_27_bool, var_28_object, var_29_float)
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
	func_912(var_54_cvector, var_55_cvector);
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
	func_1036(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_833;
		LookAsyncCamera("head");
	}
Label_833:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_899()
{
	var_15_bool = 0;
	func_1036(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1028(var_76_int)
{
	var_76_int = 515569;
	return 0;
}


func_1030(var_75_int)
{
	var_75_int = 503354;
	return 0;
}


func_1032(var_77_string)
{
	var_77_string = "ui/NPC_wmask.png";
	return 0;
}


func_1034(var_78_string)
{
	var_78_string = "ui/NPC_wmask_b.png";
	return 0;
}


func_523(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_525:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_592(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_525;
}
EMIT "Return(); Pop(4)";


func_1036(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_906(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_912(var_54_cvector, var_55_cvector)
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


func_657(var_2_object, var_3_string)
{
	func_752();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_922(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
	return 2;
}


func_541(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_765(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_590(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_906(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_927(var_109_string, var_110_bool)
{
	var_111_object = Obj(); var_112_object = Obj();
	FindActor(var_112_object, var_109_string);
	var_113_bool = var_112_object == 0; //@nz
	if(var_113_bool != 0) {
		var_115_int = "Door " + var_109_string;
		var_117_int = var_115_int + " not found";
		Trace(var_117_int);
	} else {
		@@var_112_object:SetProperty("locked", var_110_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_671()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_765(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_951((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_685:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_765(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_718;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_944(var_68_string, var_69_int);
			PlayAnimation("all", var_68_string);
			WaitForAnimEnd(var_41_bool);
			var_70_bool = var_41_bool == 0; //@nz
			if(var_70_bool != 0) {
			} else {
		} else {
				var_75_bool = var_39_int == (int)1;
				if(var_75_bool != 0) {
					rand(var_42_float, (int)4);
					var_78_int = var_42_float + (int)1;
					Sleep(var_78_int, var_43_bool);
					var_79_bool = var_43_bool == 0; //@nz
					if(var_79_bool != 0) {
						goto Label_747;
					}
					goto Label_736;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_736;
				goto Label_747;
		}
		Label_736:
			var_71_bool = 0;
			func_750(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_747;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_685;

		}
	}
Label_747:
	ResetAAS();
	return 14;
	
}


func_944(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_951(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_953:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_944(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_953;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_192(var_2_object, var_119_string)
{
	var_120_bool = 0;
	func_1036(var_120_bool);
	var_121_bool = var_120_bool == 0; //@nz
	if(var_121_bool != 0) {
		return 0;
	}
	var_122_bool = var_119_string == var_2_object;
	if(var_122_bool != 0) {
		return 0;
	}
	var_123_string = ""; var_124_bool = 0;
	var_119_string = var_123_string;
	var_126_bool = var_119_string == "";
	if(var_126_bool != 0) {
		var_124_bool = 0;
	} else {
		var_124_bool = 1;
	}
	func_873(var_123_string, var_124_bool);
	var_2_object = var_119_string;
	return 0;
	
}


func_839()
{
	var_187_bool = 0; var_188_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_190_bool = 0;
	func_1036(var_190_bool);
	if(var_190_bool != 0) {
	} else {
		HasAnimationTrack(var_188_bool, "head");
		var_192_bool = var_188_bool;
		if(var_192_bool == 0) goto Label_856;
		UnlookAsync("head");
	}
Label_856:
	return 2;
	
}


func_968()
{
	var_109_string = ""; var_110_bool = 0;
	func_927("itheater@door1", (bool)0);
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_bool = 0; var_96_object = Obj();
		var_96_object = var_1_object;
		func_987(var_96_object);
		if(var_95_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_975();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_968();
			var_119_string = "";
			func_192(var_89_object, "Neutral");
			@@@var_0_object:SetMessage((int)515058);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515059, (int)16324, (int)16323);
			@@@var_0_object:AddReply((int)515072, (int)-1, (int)16336);
		} else {
				var_161_string = "";
				func_192(var_89_object, "Neutral");
				@@@var_0_object:SetMessage((int)515073);
				@@@var_0_object:ClearReplies();
				var_163_bool = 0; var_164_object = Obj();
				var_164_object = var_1_object;
				func_999(var_164_object);
				if(var_163_bool != 0) {
					@@@var_0_object:AddReply((int)515074, (int)16339, (int)16338);
				}
				var_172_bool = 0; var_173_object = Obj();
				var_173_object = var_1_object;
				func_999(var_173_object);
				if(var_172_bool != 0) {
					@@@var_0_object:AddReply((int)515085, (int)16341, (int)16349);
				}
				var_177_bool = 0; var_178_object = Obj();
				var_178_object = var_1_object;
				func_999(var_178_object);
				if(var_177_bool != 0) {
					@@@var_0_object:AddReply((int)515086, (int)16341, (int)16351);
				}
				@@@var_0_object:AddReply((int)515087, (int)-1, (int)16353);
				goto Label_162;
		}
	}
Label_162:
	var_143_bool = 0;
	func_1036(var_143_bool);
	if(var_143_bool != 0) {

	Label_166:
		lshWaitForAnimEnd();
		var_144_string = var_3_string;
		if(var_144_string != 0) {
		} else {
			var_145_string = "";
			var_145_string = var_2_object;
			func_857(var_145_string);
			goto Label_166;
	}
		PlayAnimation("all", "idle");

	Label_181:
		WaitForAnimEnd();
		var_158_string = var_3_string;
		if(var_158_string != 0) {
			goto Label_191;
		}
		PlayAnimation("all", "idle");
		goto Label_181;

	}
	goto Label_191;
	
Label_191:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_590(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_975()
{
	SetVariable("ood12Whitemask1", (int)1);
	return 0;
}


func_592(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_765(var_23_bool);
	var_26_bool = var_23_bool == 0; //@nz
	if(var_26_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	SetTimer((int)10, (float)1.0);
	func_671();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_981()
{
	SetVariable("ood12Whitemask2", (int)1);
	return 0;
}


func_857(var_145_string)
{
	var_146_bool = 0; var_147_float = 0; var_148_float = 0; var_149_bool = 0; var_150_float = 0; var_151_float = 0;
	lshHasAnimation(var_149_bool, var_145_string);
	var_152_bool = var_149_bool;
	if(var_152_bool != 0) {
		lshGetAnimTimes(var_145_string, var_150_float, var_151_float);
		lshPlayAnimation(var_150_float, var_151_float, (bool)0);
	} else {
		var_155_int = "Can't find lsh animation : " + var_145_string;
		Trace(var_155_int);
	}
	return 6;
	
}


func_987(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_922(var_97_int, "ood12Whitemask1");
	var_102_bool = var_97_int == (int)0;
	if(var_102_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_999(var_163_bool)
{
	var_165_int = 0; var_166_string = "";
	func_922(var_165_int, "ood12Whitemask2");
	var_168_bool = var_165_int == (int)0;
	if(var_168_bool != 0) {
		var_163_bool = 1;
		return 0;
	}
	var_163_bool = 0;
	return 0;
}


func_873(var_123_string, var_124_bool)
{
	var_127_bool = 0; var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_float = 0; var_132_float = 0;
	lshHasAnimation(var_130_bool, var_123_string);
	var_133_bool = var_130_bool;
	if(var_133_bool != 0) {
		lshGetAnimTimes(var_123_string, var_131_float, var_132_float);
		lshPlayAnimation(var_131_float, var_132_float, var_124_bool);
	} else {
		var_135_int = "Can't find lsh animation : " + var_123_string;
		Trace(var_135_int);
	}
	return 6;
	
}


func_619(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_757(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_750(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_752()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1011(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x402";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_757(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_888(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0);
	@@var_29_object:GetEyesHeight(var_32_float);
	var_33_cvector = CVector(0.0, 0.0, 0.0);
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	LookAsync(var_29_object, "head", var_33_cvector);
	return 4;
}


func_765(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


