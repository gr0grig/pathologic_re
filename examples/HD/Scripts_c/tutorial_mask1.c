// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,FindActor/2,Hold/0,rand/2,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,self/1,HasAnimation/3,GetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:tutorial_light_1|A:Switch|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x196
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9f vars=int,int
// @TASK_2: vars=bool,bool params=0
// @EVENT_0: op=0x19f vars=object
// @EVENT_26: op=0x1b1 vars=string
// @EVENT_5: op=0x1f7 vars=
// @EVENT_6: op=0x1fc vars=
// @PE: 0x4a,0x89,0x9f,0x19f,0x1b1,0x1ef

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	if((int)1 != 0) {
		func_735();
		var_12_bool = var_7_bool == (int)18998;
		if(var_12_bool != 0) {
			var_13_string = "";
			func_137(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)517861);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517862, (int)19000, (int)18999);
			@@@var_0_object:AddReply((int)517880, (int)19018, (int)19017);
			@@@var_0_object:AddReply((int)517884, (int)19023, (int)19022);
			return 0;
		}
		var_41_bool = var_7_bool == (int)19023;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_137(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)517885);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517886, (int)19018, (int)19024);
			@@@var_0_object:AddReply((int)517887, (int)19000, (int)19026);
			return 0;
		}
		var_51_bool = var_7_bool == (int)19018;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_137(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)517881);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517882, (int)19000, (int)19019);
			@@@var_0_object:AddReply((int)517883, (int)-1, (int)19021);
			return 0;
		}
		var_61_bool = var_7_bool == (int)19000;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_137(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)517863);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517864, (int)19002, (int)19001);
			return 0;
		}
		var_68_bool = var_7_bool == (int)19002;
		if(var_68_bool != 0) {
			var_69_string = "";
			func_137(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)517865);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517866, (int)19004, (int)19003);
			return 0;
		}
		var_75_bool = var_7_bool == (int)19004;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_137(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)517867);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517868, (int)19006, (int)19005);
			return 0;
		}
		var_82_bool = var_7_bool == (int)19006;
		if(var_82_bool != 0) {
			var_83_string = "";
			func_137(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)517869);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517870, (int)19008, (int)19007);
			return 0;
		}
		var_89_bool = var_7_bool == (int)19008;
		if(var_89_bool != 0) {
			var_90_string = "";
			func_137(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)517871);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517872, (int)19010, (int)19009);
			return 0;
		}
		var_96_bool = var_7_bool == (int)19010;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_137(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)517873);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517874, (int)19012, (int)19011);
			return 0;
		}
		var_103_bool = var_7_bool == (int)19012;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_137(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)517875);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517876, (int)-1, (int)19013);
			@@@var_0_object:AddReply((int)517877, (int)-1, (int)19014);
			@@@var_0_object:AddReply((int)517878, (int)19016, (int)19015);
			return 0;
		}
		var_116_bool = var_7_bool == (int)19016;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_137(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)517879);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517888, (int)-1, (int)19028);
			return 0;
		}
		var_3_string = true;
		var_122_bool = 0;
		func_790(var_122_bool);
		if(var_122_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa0";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_bool = var_1_object == 0; //@nz
	if(var_8_bool != 0) {
		func_607();
		var_9_int = 0; var_10_object = Obj();
		var_7_object = var_10_object;
		TaskCall(0);
		func_0(var_11_object, var_9_int, var_10_object);
		TaskReturn();
		var_1_object = true;
		var_142_string = "";
		var_142_string = "cleanup";
		func_433();
	}
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_9_bool = var_7_string == "cleanup";
	if(var_9_bool != 0) {
		var_10_bool = 0;
		func_446((bool)0);
	}
	var_14_string = "";
	var_7_string = var_14_string;
	func_495(var_14_string);
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0;
	var_7_bool = 0;
	var_8_object = var_0_object;
	if(var_8_object != 0) {
		var_9_bool = 0;
		func_524(var_9_bool);
		if(var_9_bool != 0) {
			var_7_bool = 1;
		}
	}
	if(var_7_bool != 0) {
		var_10_object = Obj();
		func_742(var_10_object);
		RemoveActor(var_10_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = false;
	var_7_bool = 0;
	func_446((bool)1);
	func_454();
	return 0;
}


func_0(var_0_object, var_9_int, var_10_object)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0;
	var_0_object = var_10_object;
	var_20_bool = 0; var_21_object = Obj(); var_22_float = 0;
	var_10_object = var_21_object;
	func_617(var_20_bool, var_21_object, (float)130.0);
	var_67_bool = var_20_bool == 0; //@nz
	if(var_67_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	CreateDialog(var_16_object);
	var_68_int = 0;
	func_784(var_68_int);
	@@var_16_object:SetNPCName(var_68_int);
	var_69_int = 0;
	func_782(var_69_int);
	@@var_16_object:SetNPCDescription(var_69_int);
	var_70_string = "";
	func_786(var_70_string);
	@@var_16_object:SetPhoto(var_70_string);
	var_71_string = "";
	func_788(var_71_string);
	@@var_16_object:SetPhoto2(var_71_string);
	var_72_int = 0;
	func_792(var_72_int);
	@@var_16_object:SetPlayerName(var_72_int);
	IsOverrideActive(var_17_bool);
	var_80_bool = var_17_bool;
	if(var_80_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	DoDialog(var_16_object);
	var_81_object = Obj(); var_82_object = Obj();
	var_10_object = var_81_object;
	var_16_object = var_82_object;
	TaskCall(1);
	func_74(var_83_object, var_84_object, var_85_string, var_86_bool, var_81_object, var_82_object);
	TaskReturn();
	@@var_16_object:IsDialogEnd(var_19_bool);
	
Label_56:
	var_133_bool = var_19_bool == 0; //@nz
	if(var_133_bool != 0) {
		sync();
		@@var_16_object:IsDialogEnd(var_19_bool);
		goto Label_56;
	}
	var_10_object = Obj();
	func_686();
	StopDialog(var_16_object);
	@@var_16_object:GetReturnValue((int)-1);
	var_18_int = var_9_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_704(var_117_string)
{
	var_118_bool = 0; var_119_float = 0; var_120_float = 0; var_121_bool = 0; var_122_float = 0; var_123_float = 0;
	lshHasAnimation(var_121_bool, var_117_string);
	var_124_bool = var_121_bool;
	if(var_124_bool != 0) {
		lshGetAnimTimes(var_117_string, var_122_float, var_123_float);
		lshPlayAnimation(var_122_float, var_123_float, (bool)0);
	} else {
		var_127_int = "Can't find lsh animation : " + var_117_string;
		Trace(var_127_int);
	}
	return 6;
	
}


func_454()
{
	var_11_float = 0; var_12_float = 0;
	
Label_455:
	var_13_bool = 0;
	func_612(var_13_bool);
	var_16_bool = var_13_bool == 0; //@nz
	if(var_16_bool != 0) {
		Hold();
		goto Label_455;
	}
	rand(var_12_float, (int)3);
	var_19_int = var_12_float + (int)3;
	Sleep(var_19_int);
	func_526();
	goto Label_455;
}
EMIT "Return(); Pop(2)";


func_137(var_2_object, var_88_string)
{
	var_89_bool = 0;
	func_790(var_89_bool);
	var_90_bool = var_89_bool == 0; //@nz
	if(var_90_bool != 0) {
		return 0;
	}
	var_91_bool = var_88_string == var_2_object;
	if(var_91_bool != 0) {
		return 0;
	}
	var_92_string = ""; var_93_bool = 0;
	var_88_string = var_92_string;
	var_95_bool = var_88_string == "";
	if(var_95_bool != 0) {
		var_93_bool = 0;
	} else {
		var_93_bool = 1;
	}
	func_720(var_92_string, var_93_bool);
	var_2_object = var_88_string;
	return 0;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_81_object, var_82_object)
{
	var_0_object = var_82_object;
	var_1_object = var_81_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_88_string = "";
		func_137(var_82_object, "Neutral");
		@@@var_0_object:SetMessage((int)517861);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)517862, (int)19000, (int)18999);
		@@@var_0_object:AddReply((int)517880, (int)19018, (int)19017);
		@@@var_0_object:AddReply((int)517884, (int)19023, (int)19022);
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	var_115_bool = 0;
	func_790(var_115_bool);
	if(var_115_bool != 0) {

	Label_111:
		lshWaitForAnimEnd();
		var_116_string = var_3_string;
		if(var_116_string != 0) {
		} else {
			var_117_string = "";
			var_117_string = var_2_object;
			func_704(var_117_string);
			goto Label_111;
	}
		PlayAnimation("all", "idle");

	Label_126:
		WaitForAnimEnd();
		var_130_string = var_3_string;
		if(var_130_string != 0) {
			goto Label_136;
		}
		PlayAnimation("all", "idle");
		goto Label_126;
	}
	goto Label_136;
	
Label_136:
	return 0;
	
}


func_524(var_9_bool)
{
	var_9_bool = 1;
	return 0;
}


func_782(var_69_int)
{
	var_69_int = 515571;
	return 0;
}


func_526()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0;
	WaitForAnimEnd();
	var_34_bool = 0;
	func_612(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 14;
	}
	func_765((int)0);
	var_36_int = var_27_int;
	var_28_int = 0;
	
Label_540:
	var_49_bool = 0;
	var_49_bool = 0;
	var_51_bool = var_28_int < (int)5;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		func_612(var_52_bool);
		if(var_52_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		irand(var_29_int, (int)3);
		var_55_bool = var_29_int == (int)0;
		if(var_55_bool != 0) {
			var_56_int = var_27_int;
			if(var_56_int == 0) goto Label_573;
			irand(var_30_int, var_27_int);
			var_58_string = ""; var_59_int = 0;
			var_30_int = var_59_int;
			func_758(var_58_string, var_59_int);
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
						goto Label_602;
					}
					goto Label_591;
				}
				var_70_int = var_28_int;
				if(var_70_int == 0) goto Label_591;
				goto Label_602;
		}
		Label_591:
			var_61_bool = 0;
			func_605(var_61_bool);
			var_62_bool = var_61_bool == 0; //@nz
			if(var_62_bool != 0) {
				goto Label_602;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_540;

		}
	}
Label_602:
	ResetAAS();
	return 14;
	
}


func_784(var_68_int)
{
	var_68_int = 504029;
	return 0;
}


func_720(var_92_string, var_93_bool)
{
	var_96_bool = 0; var_97_float = 0; var_98_float = 0; var_99_bool = 0; var_100_float = 0; var_101_float = 0;
	lshHasAnimation(var_99_bool, var_92_string);
	var_102_bool = var_99_bool;
	if(var_102_bool != 0) {
		lshGetAnimTimes(var_92_string, var_100_float, var_101_float);
		lshPlayAnimation(var_100_float, var_101_float, var_93_bool);
	} else {
		var_104_int = "Can't find lsh animation : " + var_92_string;
		Trace(var_104_int);
	}
	return 6;
	
}


func_786(var_70_string)
{
	var_70_string = "ui/NPC_bmask.png";
	return 0;
}


func_788(var_71_string)
{
	var_71_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_790(var_63_bool)
{
	var_63_bool = 0;
	return 0;
}


func_792(var_72_int)
{
	var_73_int = 0; var_74_int = 0;
	GetVariable("branch", var_74_int);
	var_77_bool = var_74_int == (int)0;
	if(var_77_bool != 0) {
		var_72_int = 1;
		return 2;
	EMIT "GOTO 0x327";
	}
	var_79_bool = var_74_int == (int)1;
	if(var_79_bool != 0) {
		var_72_int = 2;
		return 2;
	}
	var_72_int = 3;
	return 2;
}


func_475(var_0_object)
{
	var_17_bool = 0; var_18_bool = 0;
	var_0_object = true;
	IsLoaded(var_18_bool);
	var_19_bool = 0;
	var_19_bool = 0;
	var_20_bool = var_18_bool == 0; //@nz
	if(var_20_bool != 0) {
		var_21_bool = 0;
		func_524(var_21_bool);
		if(var_21_bool != 0) {
			var_19_bool = 1;
		}
	}
	if(var_19_bool != 0) {
		var_22_object = Obj();
		func_742(var_22_object);
		RemoveActor(var_22_object);
	}
	return 2;
}


func_605(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_607()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_735()
{
	var_10_bool = 0;
	func_790(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_612(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_742(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_617(var_20_bool, var_21_object, var_22_float)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0;
	@@var_21_object:GetPosition(var_33_cvector);
	@@var_21_object:GetEyesHeight(var_32_float);
	var_41_float = GetByIndex(var_33_cvector, 1);
	var_41_float = var_41_float + var_32_float;
	SetByIndex(var_33_cvector, 1) = var_41_float;
	GetPosition(var_34_cvector);
	GetEyesHeight(var_32_float);
	var_42_float = GetByIndex(var_34_cvector, 1);
	var_42_float = var_42_float + var_32_float;
	SetByIndex(var_34_cvector, 1) = var_42_float;
	var_35_cvector = var_33_cvector - var_34_cvector;
	var_43_float = GetByIndex(var_35_cvector, 1);
	SetByIndex(var_35_cvector, 1) = (float)0;
	var_44_int = var_35_cvector | var_35_cvector;
	var_45_float = sqrt(var_44_int);
	var_35_cvector = var_35_cvector / var_45_float;
	var_36_cvector = -var_35_cvector;
	var_46_float = var_35_cvector * var_22_float;
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	var_48_cvector = var_36_cvector ^ CVector(0.0, 1.0, 0.0);
	func_748(var_47_cvector, var_48_cvector);
	var_56_float = var_47_cvector * (int)25;
	var_57_int = var_46_float + var_56_float;
	var_37_cvector = var_57_int - CVector(0.0, 10.0, 0.0);
	var_38_cvector = var_34_cvector + var_37_cvector;
	IsOverrideActive(var_39_bool);
	var_59_bool = var_39_bool;
	if(var_59_bool != 0) {
		var_20_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_38_cvector, var_36_cvector, (bool)1);
	var_61_float = GetByIndex(var_37_cvector, 0);
	var_62_float = GetByIndex(var_37_cvector, 2);
	Rotate(var_61_float, var_62_float);
	var_63_bool = 0;
	func_790(var_63_bool);
	if(var_63_bool != 0) {
	} else {
		HasAnimationTrack(var_40_bool, "head");
		var_65_bool = var_40_bool;
		if(var_65_bool == 0) goto Label_680;
		LookAsyncCamera("head");
	}
Label_680:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_20_bool = 1;
	return 18;
	
}


func_748(var_47_cvector, var_48_cvector)
{
	var_50_float = 0; var_51_float = 0;
	var_52_int = var_48_cvector | var_48_cvector;
	var_51_float = sqrt(var_52_int);
	var_53_float = 9.999999974752427e-07;
	var_54_bool = var_51_float < var_53_float;
	if(var_54_bool != 0) {
		var_47_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_47_cvector = var_48_cvector / var_51_float;
	return 2;
}


func_686()
{
	var_135_bool = 0; var_136_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_138_bool = 0;
	func_790(var_138_bool);
	if(var_138_bool != 0) {
	} else {
		HasAnimationTrack(var_136_bool, "head");
		var_140_bool = var_136_bool;
		if(var_140_bool == 0) goto Label_703;
		UnlookAsync("head");
	}
Label_703:
	return 2;
	
}


func_495(var_14_string)
{
	var_16_bool = var_14_string == "cleanup";
	if(var_16_bool != 0) {
		func_475(var_14_string);
	}
	return 0;
}


func_758(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = "";
	var_46_int = var_43_int;
	if(var_46_int != 0) {
		"idle" = "idle" + var_43_int;
	}
	var_45_string = var_42_string;
	return 2;
}


func_765(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_39_int = 0;
	
Label_767:
	var_42_string = ""; var_43_int = 0;
	var_39_int = var_43_int;
	func_758(var_42_string, var_43_int);
	HasAnimation(var_40_bool, "all", var_42_string);
	var_47_bool = var_40_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_39_int = var_39_int + (int)1;
		goto Label_767;
	}
	var_39_int = var_36_int;
	return 4;
	
}


func_446(var_7_bool)
{
	var_8_object = Obj(); var_9_object = Obj();
	FindActor(var_9_object, "tutorial_light_1");
	@@var_9_object:Switch(var_7_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


