// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,SetVariable/2
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:ood12Whitemask1|W:ood12Whitemask2|W:player|W:ui/NPC_Black.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1df
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc0 vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x1e3 vars=object
// @PE: 0x3f,0xb0,0xc0,0x1e3,0x223,0x24f,0x255,0x25b,0x267

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_569();
		var_10_bool = var_6_int == (int)16338;
		if(var_10_bool != 0) {
			var_11_object = Obj(); var_12_object = Obj();
			var_11_object = var_1_object;
			var_12_object = var_0_object;
			func_597();
		}
		var_16_bool = var_6_int == (int)16349;
		if(var_16_bool != 0) {
			var_17_object = Obj(); var_18_object = Obj();
			var_17_object = var_1_object;
			var_18_object = var_0_object;
			func_597();
		}
		var_20_bool = var_6_int == (int)16351;
		if(var_20_bool != 0) {
			var_21_object = Obj(); var_22_object = Obj();
			var_21_object = var_1_object;
			var_22_object = var_0_object;
			func_597();
		}
		var_24_bool = var_5_int == (int)16322;
		if(var_24_bool != 0) {
			var_25_bool = 0; var_26_object = Obj();
			var_26_object = var_1_object;
			func_603(var_26_object);
			if(var_25_bool != 0) {
				var_33_object = Obj(); var_34_object = Obj();
				var_33_object = var_1_object;
				var_34_object = var_0_object;
				func_591();
				var_37_string = "";
				func_176(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)15058);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)15059, (int)16324, (int)16323);
				@@@var_0_object:AddReply((int)15072, (int)-1, (int)16336);
				return 0;
			}
			var_59_string = "";
			func_176(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)15073);
			@@@var_0_object:ClearReplies();
			var_61_bool = 0; var_62_object = Obj();
			var_62_object = var_1_object;
			func_615(var_62_object);
			if(var_61_bool != 0) {
				@@@var_0_object:AddReply((int)15074, (int)16339, (int)16338);
			}
			var_70_bool = 0; var_71_object = Obj();
			var_71_object = var_1_object;
			func_615(var_71_object);
			if(var_70_bool != 0) {
				@@@var_0_object:AddReply((int)15085, (int)16341, (int)16349);
			}
			var_75_bool = 0; var_76_object = Obj();
			var_76_object = var_1_object;
			func_615(var_76_object);
			if(var_75_bool != 0) {
				@@@var_0_object:AddReply((int)15086, (int)16341, (int)16351);
			}
			@@@var_0_object:AddReply((int)15087, (int)-1, (int)16353);
			return 0;
		}
		var_84_bool = var_5_int == (int)16339;
		if(var_84_bool != 0) {
			var_85_string = "";
			func_176(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)15075);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15076, (int)16341, (int)16340);
			@@@var_0_object:AddReply((int)15081, (int)-1, (int)16345);
			@@@var_0_object:AddReply((int)15082, (int)16347, (int)16346);
			return 0;
		}
		var_97_bool = var_5_int == (int)16347;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_176(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)15083);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15084, (int)-1, (int)16348);
			return 0;
		}
		var_104_bool = var_5_int == (int)16341;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_176(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)15077);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15078, (int)-1, (int)16342);
			@@@var_0_object:AddReply((int)15079, (int)-1, (int)16343);
			@@@var_0_object:AddReply((int)15080, (int)-1, (int)16344);
			return 0;
		}
		var_117_bool = var_5_int == (int)16324;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_176(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)15060);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15061, (int)16326, (int)16325);
			@@@var_0_object:AddReply((int)15071, (int)-1, (int)16335);
			return 0;
		}
		var_127_bool = var_5_int == (int)16326;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_176(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)15062);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15063, (int)16328, (int)16327);
			@@@var_0_object:AddReply((int)15067, (int)16332, (int)16331);
			return 0;
		}
		var_137_bool = var_5_int == (int)16332;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_176(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)15068);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15069, (int)-1, (int)16333);
			@@@var_0_object:AddReply((int)15070, (int)-1, (int)16334);
			return 0;
		}
		var_147_bool = var_5_int == (int)16328;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_176(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)15064);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15065, (int)-1, (int)16329);
			@@@var_0_object:AddReply((int)15066, (int)-1, (int)16330);
			return 0;
		}
		var_3_string = true;
		var_156_bool = 0;
		func_648(var_156_bool);
		if(var_156_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc1";
	
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
	
Label_479:
	Hold();
	goto Label_479;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0;
	var_0_object = var_7_object;
	var_17_bool = 0; var_18_object = Obj();
	var_7_object = var_18_object;
	func_491(var_17_bool, var_18_object);
	var_57_bool = var_17_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	CreateDialog(var_13_object);
	var_58_int = 0;
	func_644(var_58_int);
	@@var_13_object:SetNPCName(var_58_int);
	var_59_string = "";
	func_646(var_59_string);
	@@var_13_object:SetPhoto(var_59_string);
	var_60_int = 0;
	func_627(var_60_int);
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
	var_142_bool = var_16_bool == 0; //@nz
	if(var_142_bool != 0) {
		sync();
		@@var_13_object:IsDialogEnd(var_16_bool);
		goto Label_45;
	}
	var_7_object = Obj();
	func_547();
	StopDialog(var_13_object);
	@@var_13_object:GetReturnValue((int)-1);
	var_15_int = var_6_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_576(var_42_cvector, var_43_cvector)
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


func_644(var_58_int)
{
	var_58_int = 3354;
	return 0;
}


func_646(var_59_string)
{
	var_59_string = "ui/NPC_Black.png";
	return 0;
}


func_648(var_89_bool)
{
	var_89_bool = 0;
	return 0;
}


func_586(var_78_int, var_79_string)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable(var_79_string, var_81_int);
	var_81_int = var_78_int;
	return 2;
}


func_591()
{
	SetVariable("ood12Whitemask1", (int)1);
	return 0;
}


func_597()
{
	SetVariable("ood12Whitemask2", (int)1);
	return 0;
}


func_603(var_76_bool)
{
	var_78_int = 0; var_79_string = "";
	func_586(var_78_int, "ood12Whitemask1");
	var_83_bool = var_78_int == (int)0;
	if(var_83_bool != 0) {
		var_76_bool = 1;
		return 0;
	}
	var_76_bool = 0;
	return 0;
}


func_547()
{
	CameraSwitchToNormal();
	return 0;
}


func_615(var_120_bool)
{
	var_122_int = 0; var_123_string = "";
	func_586(var_122_int, "ood12Whitemask2");
	var_125_bool = var_122_int == (int)0;
	if(var_125_bool != 0) {
		var_120_bool = 1;
		return 0;
	}
	var_120_bool = 0;
	return 0;
}


func_551(var_92_string)
{
	var_93_float = 0; var_94_float = 0; var_95_float = 0; var_96_float = 0;
	var_98_int = "playing " + var_92_string;
	Trace(var_98_int);
	lshGetAnimTimes(var_92_string, var_95_float, var_96_float);
	lshPlayAnimation(var_95_float, var_96_float);
	var_100_int = "start: " + var_95_float;
	Trace(var_100_int);
	var_102_int = "end: " + var_96_float;
	Trace(var_102_int);
	return 4;
}


func_491(var_17_bool, var_18_object)
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
	func_576(var_42_cvector, var_43_cvector);
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


func_176(var_2_object, var_88_string)
{
	var_89_bool = 0;
	func_648(var_89_bool);
	var_90_bool = var_89_bool == 0; //@nz
	if(var_90_bool != 0) {
		return 0;
	}
	var_91_bool = var_88_string == var_2_object;
	if(var_91_bool != 0) {
		return 0;
	}
	var_92_string = "";
	var_88_string = var_92_string;
	func_551(var_92_string);
	var_2_object = var_88_string;
	return 0;
}


func_627(var_60_int)
{
	var_61_int = 0; var_62_int = 0;
	GetVariable("player", var_62_int);
	var_65_bool = var_62_int == (int)0;
	if(var_65_bool != 0) {
		var_60_int = 200001;
		return 2;
	EMIT "GOTO 0x282";
	}
	var_67_bool = var_62_int == (int)1;
	if(var_67_bool != 0) {
		var_60_int = 200002;
		return 2;
	}
	var_60_int = 200003;
	return 2;
}


func_569()
{
	var_8_bool = 0;
	func_648(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
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
		func_603(var_77_object);
		if(var_76_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_591();
			var_88_string = "";
			func_176(var_70_object, "Neutral");
			@@@var_0_object:SetMessage((int)15058);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15059, (int)16324, (int)16323);
			@@@var_0_object:AddReply((int)15072, (int)-1, (int)16336);
		} else {
				var_118_string = "";
				func_176(var_70_object, "Neutral");
				@@@var_0_object:SetMessage((int)15073);
				@@@var_0_object:ClearReplies();
				var_120_bool = 0; var_121_object = Obj();
				var_121_object = var_1_object;
				func_615(var_121_object);
				if(var_120_bool != 0) {
					@@@var_0_object:AddReply((int)15074, (int)16339, (int)16338);
				}
				var_129_bool = 0; var_130_object = Obj();
				var_130_object = var_1_object;
				func_615(var_130_object);
				if(var_129_bool != 0) {
					@@@var_0_object:AddReply((int)15085, (int)16341, (int)16349);
				}
				var_134_bool = 0; var_135_object = Obj();
				var_135_object = var_1_object;
				func_615(var_135_object);
				if(var_134_bool != 0) {
					@@@var_0_object:AddReply((int)15086, (int)16341, (int)16351);
				}
				@@@var_0_object:AddReply((int)15087, (int)-1, (int)16353);
				goto Label_146;
		}
	}
Label_146:
	var_110_bool = 0;
	func_648(var_110_bool);
	if(var_110_bool != 0) {

	Label_150:
		lshWaitForAnimEnd();
		var_111_string = var_3_string;
		if(var_111_string != 0) {
		} else {
			var_112_string = "";
			var_112_string = var_2_object;
			func_551(var_112_string);
			goto Label_150;
	}
		PlayAnimation("all", "idle");

	Label_165:
		WaitForAnimEnd();
		var_115_string = var_3_string;
		if(var_115_string != 0) {
			goto Label_175;
		}
		PlayAnimation("all", "idle");
		goto Label_165;

	}
	goto Label_175;
	
Label_175:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


