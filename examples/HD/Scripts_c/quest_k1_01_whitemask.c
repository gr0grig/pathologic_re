// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,Trigger/2,HasAnimation/3,GetVariable/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_wmask.png|W:ui/NPC_wmask_b.png|W:quest_k1_01|W:remove_whitemask|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x19b
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9f vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool params=0
// @EVENT_0: op=0x1a5 vars=object
// @EVENT_7: op=0x1de vars=int
// @PE: 0x4a,0x89,0x9f,0x1a5,0x1b4,0x1de,0x1f5,0x326

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	if((int)1 != 0) {
		func_743();
		var_16_bool = var_11_object == (int)27285;
		if(var_16_bool != 0) {
			var_17_object = Obj(); var_18_object = Obj();
			var_17_object = var_1_object;
			var_18_object = var_0_object;
			func_806();
			var_25_string = "";
			func_137(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525998);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525999, (int)27287, (int)27286);
			@@@var_0_object:AddReply((int)526018, (int)27307, (int)27306);
			return 0;
		}
		var_50_bool = var_11_object == (int)27307;
		if(var_50_bool != 0) {
			var_51_string = "";
			func_137(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526019);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526020, (int)27287, (int)27308);
			return 0;
		}
		var_57_bool = var_11_object == (int)27287;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_137(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526000);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526001, (int)27289, (int)27288);
			@@@var_0_object:AddReply((int)526243, (int)-1, (int)27514);
			return 0;
		}
		var_67_bool = var_11_object == (int)27289;
		if(var_67_bool != 0) {
			var_68_string = "";
			func_137(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526002);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526003, (int)27291, (int)27290);
			@@@var_0_object:AddReply((int)526244, (int)27291, (int)27515);
			return 0;
		}
		var_77_bool = var_11_object == (int)27291;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_137(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526004);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526245, (int)27518, (int)27517);
			@@@var_0_object:AddReply((int)526009, (int)27297, (int)27296);
			return 0;
		}
		var_87_bool = var_11_object == (int)27297;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_137(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526010);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526249, (int)27518, (int)27521);
			return 0;
		}
		var_94_bool = var_11_object == (int)27518;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_137(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526246);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526005, (int)27293, (int)27292);
			@@@var_0_object:AddReply((int)541743, (int)-1, (int)43940);
			return 0;
		}
		var_104_bool = var_11_object == (int)27293;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_137(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526006);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526007, (int)27519, (int)27294);
			return 0;
		}
		var_111_bool = var_11_object == (int)27519;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_137(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526247);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526248, (int)27295, (int)27520);
			return 0;
		}
		var_118_bool = var_11_object == (int)27295;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_137(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526008);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526011, (int)27512, (int)27298);
			return 0;
		}
		var_125_bool = var_11_object == (int)27512;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_137(var_12_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526241);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526242, (int)-1, (int)27513);
			@@@var_0_object:AddReply((int)526250, (int)-1, (int)27523);
			return 0;
		}
		var_3_string = true;
		var_134_bool = 0;
		func_780(var_134_bool);
		if(var_134_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa0";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_int = var_5_int;
	if(var_12_int != 0) {
		return 0;
	}
	func_501(var_10_bool, var_11_object);
	var_16_int = 0; var_17_object = Obj();
	var_11_object = var_17_object;
	TaskCall(0);
	func_0(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	var_5_int = true;
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int)
{
	var_13_bool = var_11_int == (int)10;
	if(var_13_bool != 0) {
		var_14_bool = 0;
		func_463(var_9_object, var_10_bool, var_11_int, var_14_bool);
		if(var_14_bool != 0) {
			var_27_bool = var_2_object == 0; //@nz
			if(var_27_bool != 0) {
				var_28_object = Obj();
				var_28_object = var_4_bool;
				func_732(var_28_object);
				var_2_object = true;
			}
		} else {
			var_35_object = var_2_object;
			if(var_35_object == 0) goto Label_500;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_500:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool)
{
	
Label_411:
	var_11_float = 0; var_12_float = 0;
	func_436(var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, (float)300, (float)100);
	Sleep((int)3);
	goto Label_411;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_614(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_774(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_772(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_776(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_778(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_813(var_79_int);
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
	var_145_bool = var_26_bool == 0; //@nz
	if(var_145_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_683();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_515()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0;
	WaitForAnimEnd();
	var_34_bool = 0;
	func_609(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 14;
	}
	func_789((int)0);
	var_36_int = var_27_int;
	var_28_int = 0;
	
Label_529:
	var_49_bool = 0;
	var_49_bool = 0;
	var_51_bool = var_28_int < (int)5;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		func_609(var_52_bool);
		if(var_52_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		irand(var_29_int, (int)3);
		var_55_bool = var_29_int == (int)0;
		if(var_55_bool != 0) {
			var_56_int = var_27_int;
			if(var_56_int == 0) goto Label_562;
			irand(var_30_int, var_27_int);
			var_58_string = ""; var_59_int = 0;
			var_30_int = var_59_int;
			func_782(var_58_string, var_59_int);
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
						goto Label_591;
					}
					goto Label_580;
				}
				var_70_int = var_28_int;
				if(var_70_int == 0) goto Label_580;
				goto Label_591;
		}
		Label_580:
			var_61_bool = 0;
			func_594(var_61_bool);
			var_62_bool = var_61_bool == 0; //@nz
			if(var_62_bool != 0) {
				goto Label_591;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_529;

		}
	}
Label_591:
	ResetAAS();
	return 14;
	
}


func_772(var_76_int)
{
	var_76_int = 515569;
	return 0;
}


func_774(var_75_int)
{
	var_75_int = 503354;
	return 0;
}


func_776(var_77_string)
{
	var_77_string = "ui/NPC_wmask.png";
	return 0;
}


func_137(var_2_object, var_103_string)
{
	var_104_bool = 0;
	func_780(var_104_bool);
	var_105_bool = var_104_bool == 0; //@nz
	if(var_105_bool != 0) {
		return 0;
	}
	var_106_bool = var_103_string == var_2_object;
	if(var_106_bool != 0) {
		return 0;
	}
	var_107_string = ""; var_108_bool = 0;
	var_103_string = var_107_string;
	var_110_bool = var_103_string == "";
	if(var_110_bool != 0) {
		var_108_bool = 0;
	} else {
		var_108_bool = 1;
	}
	func_717(var_107_string, var_108_bool);
	var_2_object = var_103_string;
	return 0;
	
}


func_778(var_78_string)
{
	var_78_string = "ui/NPC_wmask_b.png";
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_object = Obj(); var_96_object = Obj();
		var_95_object = var_1_object;
		var_96_object = var_0_object;
		func_806();
		var_103_string = "";
		func_137(var_89_object, "Neutral");
		@@@var_0_object:SetMessage((int)525998);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525999, (int)27287, (int)27286);
		@@@var_0_object:AddReply((int)526018, (int)27307, (int)27306);
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	var_127_bool = 0;
	func_780(var_127_bool);
	if(var_127_bool != 0) {

	Label_111:
		lshWaitForAnimEnd();
		var_128_string = var_3_string;
		if(var_128_string != 0) {
		} else {
			var_129_string = "";
			var_129_string = var_2_object;
			func_701(var_129_string);
			goto Label_111;
	}
		PlayAnimation("all", "idle");

	Label_126:
		WaitForAnimEnd();
		var_142_string = var_3_string;
		if(var_142_string != 0) {
			goto Label_136;
		}
		PlayAnimation("all", "idle");
		goto Label_126;
	}
	goto Label_136;
	
Label_136:
	return 0;
	
}


func_780(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_717(var_107_string, var_108_bool)
{
	var_111_bool = 0; var_112_float = 0; var_113_float = 0; var_114_bool = 0; var_115_float = 0; var_116_float = 0;
	lshHasAnimation(var_114_bool, var_107_string);
	var_117_bool = var_114_bool;
	if(var_117_bool != 0) {
		lshGetAnimTimes(var_107_string, var_115_float, var_116_float);
		lshPlayAnimation(var_115_float, var_116_float, var_108_bool);
	} else {
		var_119_int = "Can't find lsh animation : " + var_107_string;
		Trace(var_119_int);
	}
	return 6;
	
}


func_782(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = "";
	var_46_int = var_43_int;
	if(var_46_int != 0) {
		"idle" = "idle" + var_43_int;
	}
	var_45_string = var_42_string;
	return 2;
}


func_463(var_0_object, var_1_object, var_4_bool, var_14_bool)
{
	var_15_float = 0; var_16_float = 0;
	var_17_bool = var_4_bool == 0; //@ne
	if(var_17_bool != 0) {
		var_14_bool = 0;
		return 2;
	}
	var_18_float = 0; var_19_object = Obj();
	var_19_object = var_4_bool;
	func_601(var_18_float, var_19_object);
	var_16_float = sqrt(var_18_float);
	var_26_object = var_2_object;
	if(var_26_object != 0) {
		var_16_float = var_16_float - var_1_object;
	}
	var_14_bool = var_16_float < var_0_object;
	return 2;
}


func_594(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_596()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_789(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_39_int = 0;
	
Label_791:
	var_42_string = ""; var_43_int = 0;
	var_39_int = var_43_int;
	func_782(var_42_string, var_43_int);
	HasAnimation(var_40_bool, "all", var_42_string);
	var_47_bool = var_40_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_39_int = var_39_int + (int)1;
		goto Label_791;
	}
	var_39_int = var_36_int;
	return 4;
	
}


func_601(var_18_float, var_19_object)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0);
	GetPosition(var_23_cvector);
	@@var_19_object:GetPosition(var_24_cvector);
	var_25_cvector = var_24_cvector - var_23_cvector;
	var_18_float = var_25_cvector | var_25_cvector;
	return 6;
}


func_732(var_28_object)
{
	var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_cvector = CVector(0,0,0);
	@@var_28_object:GetEyesHeight(var_31_float);
	var_32_cvector = CVector(0.0, 0.0, 0.0);
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	LookAsync(var_28_object, "head", var_32_cvector);
	return 4;
}


func_609(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_806()
{
	var_97_bool = 0; var_98_string = ""; var_99_string = "";
	func_760(var_97_bool, "quest_k1_01", "remove_whitemask");
	return 0;
}


func_614(var_27_bool, var_28_object, var_29_float)
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
	func_750(var_54_cvector, var_55_cvector);
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
	func_780(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_677;
		LookAsyncCamera("head");
	}
Label_677:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_743()
{
	var_14_bool = 0;
	func_780(var_14_bool);
	if(var_14_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_683()
{
	var_147_bool = 0; var_148_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_150_bool = 0;
	func_780(var_150_bool);
	if(var_150_bool != 0) {
	} else {
		HasAnimationTrack(var_148_bool, "head");
		var_152_bool = var_148_bool;
		if(var_152_bool == 0) goto Label_700;
		UnlookAsync("head");
	}
Label_700:
	return 2;
	
}


func_813(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x33c";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_750(var_54_cvector, var_55_cvector)
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


func_436(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_11_float, var_12_float)
{
	var_13_bool = 0;
	func_609(var_13_bool);
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
	func_515();
	var_71_bool = var_3_string == 0; //@nz
	if(var_71_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_501(var_2_object, var_3_string)
{
	func_596();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_760(var_97_bool, var_98_string, var_99_string)
{
	var_100_object = Obj(); var_101_object = Obj();
	FindActor(var_101_object, var_98_string);
	var_102_bool = var_101_object == 0; //@ne
	if(var_102_bool != 0) {
		var_97_bool = 0;
		return 2;
	}
	Trigger(var_101_object, var_99_string);
	var_97_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_701(var_129_string)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0;
	lshHasAnimation(var_133_bool, var_129_string);
	var_136_bool = var_133_bool;
	if(var_136_bool != 0) {
		lshGetAnimTimes(var_129_string, var_134_float, var_135_float);
		lshPlayAnimation(var_134_float, var_135_float, (bool)0);
	} else {
		var_139_int = "Can't find lsh animation : " + var_129_string;
		Trace(var_139_int);
	}
	return 6;
	
}


