// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,FindActor/2,Trigger/2,GetGameTime/1,GetVariable/2
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:Door |W: not found|W:locked|A:SetProperty|W:sobor@door1|W:quest_d12_01|W:init_sobor|W:player|W:ui/NPC_Black.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x22c
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbb vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x230 vars=object
// @PE: 0x3f,0xab,0xbb,0x230,0x270,0x2bb,0x2c2,0x2c9,0x2d3,0x2dd,0x2e0

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_646();
		var_10_bool = var_6_int == (int)16592;
		if(var_10_bool != 0) {
			var_11_object = Obj(); var_12_object = Obj();
			var_11_object = var_1_object;
			var_12_object = var_0_object;
			func_699();
			var_23_object = Obj(); var_24_object = Obj();
			var_23_object = var_1_object;
			var_24_object = var_0_object;
			func_706();
		}
		var_32_bool = var_5_int == (int)16093;
		if(var_32_bool != 0) {
			var_33_bool = 0; var_34_object = Obj();
			var_34_object = var_1_object;
			func_723(var_33_bool, var_34_object);
			if(var_33_bool != 0) {
				var_44_string = "";
				func_171(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)14847);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)14848, (int)-1, (int)16094);
				return 0;
			}
			var_63_string = "";
			func_171(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14849);
			@@@var_0_object:ClearReplies();
			var_65_bool = 0; var_66_object = Obj();
			var_66_object = var_1_object;
			func_713(var_65_bool, var_66_object);
			if(var_65_bool != 0) {
				@@@var_0_object:AddReply((int)14850, (int)16097, (int)16096);
			}
			var_72_bool = 0; var_73_object = Obj();
			var_73_object = var_1_object;
			func_713(var_72_bool, var_73_object);
			if(var_72_bool != 0) {
				@@@var_0_object:AddReply((int)14852, (int)16099, (int)16098);
			}
			@@@var_0_object:AddReply((int)15494, (int)16591, (int)16590);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=61";
		EMIT "Call 0xab";
		EMIT "Pop(1)";
		EMIT "Push((int) 14855)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 14856)";
		EMIT "Push((int) 16103)";
		EMIT "Push((int) 16102)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_81_bool = var_5_int == (int)16103;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_171(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14857);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14858, (int)16105, (int)16104);
			@@@var_0_object:AddReply((int)14880, (int)16127, (int)16126);
			return 0;
		}
		var_91_bool = var_5_int == (int)16127;
		if(var_91_bool != 0) {
			var_92_string = "";
			func_171(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14881);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14882, (int)-1, (int)16128);
			return 0;
		}
		var_98_bool = var_5_int == (int)16105;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_171(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14859);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14860, (int)16107, (int)16106);
			@@@var_0_object:AddReply((int)14879, (int)-1, (int)16125);
			return 0;
		}
		var_108_bool = var_5_int == (int)16107;
		if(var_108_bool != 0) {
			var_109_string = "";
			func_171(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14861);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14862, (int)16109, (int)16108);
			return 0;
		}
		var_115_bool = var_5_int == (int)16109;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_171(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14863);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14864, (int)16111, (int)16110);
			@@@var_0_object:AddReply((int)14870, (int)16117, (int)16116);
			return 0;
		}
		var_125_bool = var_5_int == (int)16117;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_171(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14871);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14872, (int)-1, (int)16118);
			@@@var_0_object:AddReply((int)14873, (int)16120, (int)16119);
			return 0;
		}
		var_135_bool = var_5_int == (int)16120;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_171(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14874);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14875, (int)-1, (int)16121);
			@@@var_0_object:AddReply((int)14876, (int)16123, (int)16122);
			return 0;
		}
		var_145_bool = var_5_int == (int)16123;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_171(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14877);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14878, (int)-1, (int)16124);
			return 0;
		}
		var_152_bool = var_5_int == (int)16111;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_171(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14865);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14866, (int)16113, (int)16112);
			@@@var_0_object:AddReply((int)14869, (int)-1, (int)16115);
			return 0;
		}
		var_162_bool = var_5_int == (int)16113;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_171(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14867);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14868, (int)-1, (int)16114);
			return 0;
		}
		var_169_bool = var_5_int == (int)16591;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_171(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)15495);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15496, (int)-1, (int)16592);
			return 0;
		}
		var_176_bool = var_5_int == (int)16099;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_171(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14853);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14854, (int)-1, (int)16100);
			return 0;
		}
		var_183_bool = var_5_int == (int)16097;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_171(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14851);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15337, (int)-1, (int)16560);
			return 0;
		}
		var_3_string = true;
		var_189_bool = 0;
		func_768(var_189_bool);
		if(var_189_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbc";
	
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
	
Label_556:
	Hold();
	goto Label_556;
}
EMIT "Return(); Pop(0)";


func_768(var_88_bool)
{
	var_88_bool = 0;
	return 0;
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0;
	var_0_object = var_7_object;
	var_17_bool = 0; var_18_object = Obj();
	var_7_object = var_18_object;
	func_568(var_17_bool, var_18_object);
	var_57_bool = var_17_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	CreateDialog(var_13_object);
	var_58_int = 0;
	func_764(var_58_int);
	@@var_13_object:SetNPCName(var_58_int);
	var_59_string = "";
	func_766(var_59_string);
	@@var_13_object:SetPhoto(var_59_string);
	var_60_int = 0;
	func_747(var_60_int);
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
	var_131_bool = var_16_bool == 0; //@nz
	if(var_131_bool != 0) {
		sync();
		@@var_13_object:IsDialogEnd(var_16_bool);
		goto Label_45;
	}
	var_7_object = Obj();
	func_624();
	StopDialog(var_13_object);
	@@var_13_object:GetReturnValue((int)-1);
	var_15_int = var_6_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_706()
{
	var_25_bool = 0; var_26_string = ""; var_27_string = "";
	func_679(var_25_bool, "quest_d12_01", "init_sobor");
	return 0;
}


func_646()
{
	var_8_bool = 0;
	func_768(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_713(var_116_bool, var_117_object)
{
	var_118_bool = 0; var_119_object = Obj();
	var_117_object = var_119_object;
	func_733(var_119_object);
	if(var_118_bool != 0) {
		var_116_bool = 1;
		return 0;
	}
	var_116_bool = 0;
	return 0;
}


func_653(var_42_cvector, var_43_cvector)
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


func_723(var_76_bool, var_77_object)
{
	var_78_bool = 0; var_79_object = Obj();
	var_77_object = var_79_object;
	func_736(var_79_object);
	if(var_78_bool != 0) {
		var_76_bool = 1;
		return 0;
	}
	var_76_bool = 0;
	return 0;
}


func_663(var_13_string, var_14_bool)
{
	var_15_object = Obj(); var_16_object = Obj();
	FindActor(var_16_object, var_13_string);
	var_17_bool = var_16_object == 0; //@nz
	if(var_17_bool != 0) {
		var_19_int = "Door " + var_13_string;
		var_21_int = var_19_int + " not found";
		Trace(var_21_int);
	}
	@@var_16_object:SetProperty("locked", var_14_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_733(var_118_bool)
{
	var_118_bool = 0;
	return 0;
}


func_736(var_78_bool)
{
	var_80_int = 0;
	func_691(var_80_int);
	var_86_bool = var_80_int < (int)19;
	if(var_86_bool != 0) {
		var_78_bool = 1;
		return 0;
	}
	var_78_bool = 0;
	return 0;
}


func_679(var_25_bool, var_26_string, var_27_string)
{
	var_28_object = Obj(); var_29_object = Obj();
	FindActor(var_29_object, var_26_string);
	var_30_bool = var_29_object == 0; //@ne
	if(var_30_bool != 0) {
		var_25_bool = 0;
		return 2;
	}
	Trigger(var_29_object, var_27_string);
	var_25_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_171(var_2_object, var_87_string)
{
	var_88_bool = 0;
	func_768(var_88_bool);
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
	func_628(var_91_string);
	var_2_object = var_87_string;
	return 0;
}


func_747(var_60_int)
{
	var_61_int = 0; var_62_int = 0;
	GetVariable("player", var_62_int);
	var_65_bool = var_62_int == (int)0;
	if(var_65_bool != 0) {
		var_60_int = 200001;
		return 2;
	EMIT "GOTO 0x2fa";
	}
	var_67_bool = var_62_int == (int)1;
	if(var_67_bool != 0) {
		var_60_int = 200002;
		return 2;
	}
	var_60_int = 200003;
	return 2;
}


func_624()
{
	CameraSwitchToNormal();
	return 0;
}


func_691(var_80_int)
{
	var_81_float = 0; var_82_float = 0;
	GetGameTime(var_82_float);
	var_83_int = 0;
	var_82_float = var_83_int;
	var_80_int = var_83_int % (int)24;
	return 2;
}


func_628(var_91_string)
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


func_568(var_17_bool, var_18_object)
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
	func_653(var_42_cvector, var_43_cvector);
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


func_699()
{
	var_13_string = ""; var_14_bool = 0;
	func_663("sobor@door1", (bool)0);
	return 0;
}


func_764(var_58_int)
{
	var_58_int = 4029;
	return 0;
}


func_766(var_59_string)
{
	var_59_string = "ui/NPC_Black.png";
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object;
	var_1_object = var_69_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_76_bool = 0; var_77_object = Obj();
		var_77_object = var_1_object;
		func_723(var_76_bool, var_77_object);
		if(var_76_bool != 0) {
			var_87_string = "";
			func_171(var_70_object, "Neutral");
			@@@var_0_object:SetMessage((int)14847);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14848, (int)-1, (int)16094);
		} else {
				var_114_string = "";
				func_171(var_70_object, "Neutral");
				@@@var_0_object:SetMessage((int)14849);
				@@@var_0_object:ClearReplies();
				var_116_bool = 0; var_117_object = Obj();
				var_117_object = var_1_object;
				func_713(var_116_bool, var_117_object);
				if(var_116_bool != 0) {
					@@@var_0_object:AddReply((int)14850, (int)16097, (int)16096);
				}
				var_123_bool = 0; var_124_object = Obj();
				var_124_object = var_1_object;
				func_713(var_123_bool, var_124_object);
				if(var_123_bool != 0) {
					@@@var_0_object:AddReply((int)14852, (int)16099, (int)16098);
				}
				@@@var_0_object:AddReply((int)15494, (int)16591, (int)16590);
				goto Label_141;
		}
	}
Label_141:
	var_106_bool = 0;
	func_768(var_106_bool);
	if(var_106_bool != 0) {

	Label_145:
		lshWaitForAnimEnd();
		var_107_string = var_3_string;
		if(var_107_string != 0) {
		} else {
			var_108_string = "";
			var_108_string = var_2_object;
			func_628(var_108_string);
			goto Label_145;
	}
		PlayAnimation("all", "idle");

	Label_160:
		WaitForAnimEnd();
		var_111_string = var_3_string;
		if(var_111_string != 0) {
			goto Label_170;
		}
		PlayAnimation("all", "idle");
		goto Label_160;

	}
	goto Label_170;
	
Label_170:
	return 0;
	
}
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=61";
EMIT "Call 0xab";
EMIT "Pop(1)";
EMIT "Push((int) 14855)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
EMIT "Pop(0)";
EMIT "Push((int) 14856)";
EMIT "Push((int) 16103)";
EMIT "Push((int) 16102)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "GOTO 0x8d";
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


