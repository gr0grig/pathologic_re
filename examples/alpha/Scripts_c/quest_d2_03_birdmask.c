// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,GetVariable/2,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,GetGameTime/1,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:d2q03|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:ood2Birdmask1|W:d2q03BirdmaskGotoLara|W:pt_map_lara|A:AddMark|W:d2q03BirdmaskGotoLaraSelf|W:KnowTheater|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:player|W:Adding diary entry|W:ui/NPC_Black.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x19f
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x93 vars=int,int
// @TASK_2: vars=bool,bool params=0
// @EVENT_0: op=0x1a4 vars=object
// @EVENT_26: op=0x1ba vars=string
// @EVENT_6: op=0x1d6 vars=
// @PE: 0x3f,0x83,0x93,0x220,0x257,0x27d,0x289,0x295

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	if((int)1 != 0) {
		func_566();
		var_12_bool = var_8_bool == (int)7988;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_599();
			var_17_object = Obj(); var_18_object = Obj();
			var_17_object = var_1_object;
			var_18_object = var_0_object;
			func_605();
		}
		var_68_bool = var_8_bool == (int)7990;
		if(var_68_bool != 0) {
			var_69_object = Obj(); var_70_object = Obj();
			var_69_object = var_1_object;
			var_70_object = var_0_object;
			func_599();
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_605();
		}
		var_74_bool = var_8_bool == (int)7991;
		if(var_74_bool != 0) {
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_599();
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_605();
		}
		var_80_bool = var_8_bool == (int)7992;
		if(var_80_bool != 0) {
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_599();
		}
		var_84_bool = var_7_bool == (int)7616;
		if(var_84_bool != 0) {
			var_85_bool = 0; var_86_object = Obj();
			var_86_object = var_1_object;
			func_649(var_86_object);
			if(var_85_bool != 0) {
				var_93_string = "";
				func_131(var_8_bool, "Neutral");
				@@@var_0_object:SetMessage((int)6910);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)6911, (int)7618, (int)7617);
				var_112_bool = 0; var_113_object = Obj();
				var_113_object = var_1_object;
				func_637(var_113_object);
				if(var_112_bool != 0) {
					@@@var_0_object:AddReply((int)7249, (int)7993, (int)7989);
				}
				return 0;
			}
		}
		var_122_bool = var_7_bool == (int)7993;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_131(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7254, (int)7995, (int)7994);
			return 0;
		}
		var_129_bool = var_7_bool == (int)7995;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_131(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7255);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7256, (int)7997, (int)7996);
			return 0;
		}
		var_136_bool = var_7_bool == (int)7997;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_131(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7257);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7258, (int)7999, (int)7998);
			@@@var_0_object:AddReply((int)7261, (int)7618, (int)8002);
			return 0;
		}
		var_146_bool = var_7_bool == (int)7999;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_131(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7259);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7260, (int)7618, (int)8000);
			return 0;
		}
		var_153_bool = var_7_bool == (int)7618;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_131(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6912);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7242, (int)7983, (int)7982);
			var_159_bool = 0; var_160_object = Obj();
			var_160_object = var_1_object;
			func_661(var_160_object);
			if(var_159_bool != 0) {
				@@@var_0_object:AddReply((int)7252, (int)-1, (int)7992);
			}
			return 0;
		}
		var_169_bool = var_7_bool == (int)7983;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_131(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7243);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7244, (int)7985, (int)7984);
			@@@var_0_object:AddReply((int)7251, (int)-1, (int)7991);
			return 0;
		}
		var_179_bool = var_7_bool == (int)7985;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_131(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7245);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7246, (int)7987, (int)7986);
			@@@var_0_object:AddReply((int)7250, (int)-1, (int)7990);
			return 0;
		}
		var_189_bool = var_7_bool == (int)7987;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_131(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7247);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7248, (int)-1, (int)7988);
			return 0;
		}
		var_3_string = true;
		var_195_bool = 0;
		func_769(var_195_bool);
		if(var_195_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x94";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0;
	var_10_object = var_1_object;
	if(var_10_object != 0) {
		return 2;
	}
	GetVariable("d2q03", var_9_int);
	var_13_bool = var_9_int != (int)-1;
	if(var_13_bool != 0) {
		var_14_int = 0; var_15_object = Obj();
		var_7_object = var_15_object;
		TaskCall(0);
		func_0(var_16_object, var_14_int, var_15_object);
		TaskReturn();
		var_1_object = true;
	}
	return 2;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0;
	var_11_bool = var_7_string == "cleanup";
	if(var_11_bool != 0) {
		var_0_object = true;
		IsLoaded(var_9_bool);
		var_12_bool = 0;
		var_12_bool = 0;
		var_13_bool = var_9_bool == 0; //@nz
		if(var_13_bool != 0) {
			var_14_bool = 0;
			func_486(var_14_bool);
			if(var_14_bool != 0) {
				var_12_bool = 1;
			}
		}
		if(var_12_bool != 0) {
			var_15_object = Obj();
			func_573(var_15_object);
			RemoveActor(var_15_object);
		}
	} else {
		var_19_bool = var_7_string == "restore";
		if(var_19_bool == 0) goto Label_469;
		var_0_object = false;
	}
Label_469:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0;
	var_7_bool = 0;
	var_8_object = var_0_object;
	if(var_8_object != 0) {
		var_9_bool = 0;
		func_486(var_9_bool);
		if(var_9_bool != 0) {
			var_7_bool = 1;
		}
	}
	if(var_7_bool != 0) {
		var_10_object = Obj();
		func_573(var_10_object);
		RemoveActor(var_10_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = false;
	func_438();
	return 0;
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj();
	var_15_object = var_26_object;
	func_488(var_25_bool, var_26_object);
	var_65_bool = var_25_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_66_int = 0;
	func_765(var_66_int);
	@@var_21_object:SetNPCName(var_66_int);
	var_67_string = "";
	func_767(var_67_string);
	@@var_21_object:SetPhoto(var_67_string);
	var_68_int = 0;
	func_732(var_68_int);
	@@var_21_object:SetPlayerName(var_68_int);
	IsOverrideActive(var_22_bool);
	var_76_bool = var_22_bool;
	if(var_76_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	DoDialog(var_21_object);
	var_77_object = Obj(); var_78_object = Obj();
	var_15_object = var_77_object;
	var_21_object = var_78_object;
	TaskCall(1);
	func_63(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object);
	TaskReturn();
	@@var_21_object:IsDialogEnd(var_24_bool);
	
Label_45:
	var_128_bool = var_24_bool == 0; //@nz
	if(var_128_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_45;
	}
	var_15_object = Obj();
	func_544();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_769(var_93_bool)
{
	var_93_bool = 0;
	return 0;
}


func_131(var_2_object, var_92_string)
{
	var_93_bool = 0;
	func_769(var_93_bool);
	var_94_bool = var_93_bool == 0; //@nz
	if(var_94_bool != 0) {
		return 0;
	}
	var_95_bool = var_92_string == var_2_object;
	if(var_95_bool != 0) {
		return 0;
	}
	var_96_string = "";
	var_92_string = var_96_string;
	func_548(var_96_string);
	var_2_object = var_92_string;
	return 0;
}


func_573(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_579(var_50_cvector, var_51_cvector)
{
	var_53_float = 0; var_54_float = 0;
	var_55_int = var_51_cvector | var_51_cvector;
	var_54_float = sqrt(var_55_int);
	var_56_float = 9.999999974752427e-07;
	var_57_bool = var_54_float < var_56_float;
	if(var_57_bool != 0) {
		var_50_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_50_cvector = var_51_cvector / var_54_float;
	return 2;
}


func_649(var_84_bool)
{
	var_86_int = 0; var_87_string = "";
	func_589(var_86_int, "ood2Birdmask1");
	var_91_bool = var_86_int == (int)0;
	if(var_91_bool != 0) {
		var_84_bool = 1;
		return 0;
	}
	var_84_bool = 0;
	return 0;
}


func_765(var_66_int)
{
	var_66_int = 4029;
	return 0;
}


func_715(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj();
	GetMainOutdoorScene(var_26_object);
	var_28_bool = var_26_object == 0; //@ne
	if(var_28_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_27_object = 0;
		var_27_object = var_23_object;
		return 4;
	}
	@@var_26_object:GetMap(var_27_object);
	var_27_object = var_23_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_589(var_86_int, var_87_string)
{
	var_88_int = 0; var_89_int = 0;
	GetVariable(var_87_string, var_89_int);
	var_89_int = var_86_int;
	return 2;
}


func_594(var_34_float)
{
	var_35_float = 0; var_36_float = 0;
	GetGameTime(var_36_float);
	var_36_float = var_34_float;
	return 2;
}


func_767(var_67_string)
{
	var_67_string = "ui/NPC_Black.png";
	return 0;
}


func_661(var_159_bool)
{
	var_161_int = 0; var_162_string = "";
	func_589(var_161_int, "d2q03");
	var_164_bool = var_161_int == (int)3;
	if(var_164_bool != 0) {
		var_159_bool = 1;
		return 0;
	}
	var_159_bool = 0;
	return 0;
}


func_599()
{
	SetVariable("ood2Birdmask1", (int)1);
	return 0;
}


func_732(var_68_int)
{
	var_69_int = 0; var_70_int = 0;
	GetVariable("player", var_70_int);
	var_73_bool = var_70_int == (int)0;
	if(var_73_bool != 0) {
		var_68_int = 200001;
		return 2;
	EMIT "GOTO 0x2eb";
	}
	var_75_bool = var_70_int == (int)1;
	if(var_75_bool != 0) {
		var_68_int = 200002;
		return 2;
	}
	var_68_int = 200003;
	return 2;
}


func_605()
{
	var_19_object = Obj(); var_20_object = Obj();
	SetVariable("d2q03", (int)3);
	func_715(Obj());
	var_23_object = var_20_object;
	var_34_float = 0;
	func_594(var_34_float);
	@@var_20_object:AddMark("d2q03BirdmaskGotoLara", "pt_map_lara", (int)0, (int)15293, var_34_float);
	var_41_float = 0;
	func_594(var_41_float);
	@@var_20_object:AddMark("d2q03BirdmaskGotoLaraSelf", "", (int)0, (int)15292, var_41_float);
	func_749();
	return 2;
}
EMIT "Stack[-1] = 0";


func_544()
{
	CameraSwitchToNormal();
	return 0;
}


func_673(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj();
	GetDiaryRoot(var_59_object);
	var_60_bool = var_59_object == 0; //@nz
	if(var_60_bool != 0) {
		Trace("Can't retrieve diary root");
		var_57_object = 0;
		return 2;
	}
	var_59_object = var_57_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_548(var_96_string)
{
	var_97_float = 0; var_98_float = 0; var_99_float = 0; var_100_float = 0;
	var_102_int = "playing " + var_96_string;
	Trace(var_102_int);
	lshGetAnimTimes(var_96_string, var_99_float, var_100_float);
	lshPlayAnimation(var_99_float, var_100_float);
	var_104_int = "start: " + var_99_float;
	Trace(var_104_int);
	var_106_int = "end: " + var_100_float;
	Trace(var_106_int);
	return 4;
}


func_486(var_9_bool)
{
	var_9_bool = 1;
	return 0;
}


func_488(var_25_bool, var_26_object)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0;
	@@var_26_object:GetPosition(var_36_cvector);
	@@var_26_object:GetEyesHeight(var_35_float);
	var_43_float = GetByIndex(var_36_cvector, 1);
	var_43_float = var_43_float + var_35_float;
	SetByIndex(var_36_cvector, 1) = var_43_float;
	GetPosition(var_37_cvector);
	GetEyesHeight(var_35_float);
	var_44_float = GetByIndex(var_37_cvector, 1);
	var_44_float = var_44_float + var_35_float;
	SetByIndex(var_37_cvector, 1) = var_44_float;
	var_38_cvector = var_36_cvector - var_37_cvector;
	var_45_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (float)0;
	var_46_int = var_38_cvector | var_38_cvector;
	var_47_float = sqrt(var_46_int);
	var_38_cvector = var_38_cvector / var_47_float;
	var_39_cvector = -var_38_cvector;
	var_49_float = var_38_cvector * (int)70;
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_51_cvector = var_39_cvector ^ CVector(0.0, 1.0, 0.0);
	func_579(var_50_cvector, var_51_cvector);
	var_59_float = var_50_cvector * (int)25;
	var_60_int = var_49_float + var_59_float;
	var_40_cvector = var_60_int - CVector(0.0, 10.0, 0.0);
	var_41_cvector = var_37_cvector + var_40_cvector;
	IsOverrideActive(var_42_bool);
	var_62_bool = var_42_bool;
	if(var_62_bool != 0) {
		var_25_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_41_cvector, var_39_cvector);
	var_63_float = GetByIndex(var_40_cvector, 0);
	var_64_float = GetByIndex(var_40_cvector, 2);
	Rotate(var_63_float, var_64_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 16;
}


func_749()
{
	var_42_object = Obj(); var_43_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_43_object, (int)133, (int)2, (int)15270);
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0;
	var_43_object = var_49_object;
	func_686(var_48_bool, var_49_object, (int)12);
	return 2;
}
EMIT "Stack[-1] = 0";


func_686(var_48_bool, var_49_object, var_50_int)
{
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0;
	func_673(Obj());
	var_57_object = var_54_object;
	@@var_54_object:Find(var_50_int, var_55_object);
	var_62_bool = var_55_object == 0; //@nz
	if(var_62_bool != 0) {
		var_64_int = "Can't find diary parent with id: " + var_50_int;
		Trace(var_64_int);
		var_48_bool = 0;
		return 6;
	}
	@@var_55_object:AddChild(var_49_object);
	SetVariable("player_diary", (int)1);
	@@var_49_object:GetCategory(var_56_int);
	SetDiarySection(var_56_int);
	var_48_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_566()
{
	var_10_bool = 0;
	func_769(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_438()
{
	
Label_438:
	Hold();
	goto Label_438;
}
EMIT "Return(); Pop(0)";


func_637(var_111_bool)
{
	var_113_int = 0; var_114_string = "";
	func_589(var_113_int, "KnowTheater");
	var_116_bool = var_113_int == (int)1;
	if(var_116_bool != 0) {
		var_111_bool = 1;
		return 0;
	}
	var_111_bool = 0;
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_77_object, var_78_object)
{
	var_0_object = var_78_object;
	var_1_object = var_77_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_84_bool = 0; var_85_object = Obj();
		var_85_object = var_1_object;
		func_649(var_85_object);
		if(var_84_bool != 0) {
			var_92_string = "";
			func_131(var_78_object, "Neutral");
			@@@var_0_object:SetMessage((int)6910);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6911, (int)7618, (int)7617);
			var_111_bool = 0; var_112_object = Obj();
			var_112_object = var_1_object;
			func_637(var_112_object);
			if(var_111_bool != 0) {
				@@@var_0_object:AddReply((int)7249, (int)7993, (int)7989);
			}
		} else {
				return 0;
		}
	}
	var_120_bool = 0;
	func_769(var_120_bool);
	if(var_120_bool != 0) {

	Label_105:
		lshWaitForAnimEnd();
		var_121_string = var_3_string;
		if(var_121_string != 0) {
		} else {
			var_122_string = "";
			var_122_string = var_2_object;
			func_548(var_122_string);
			goto Label_105;
	}
		PlayAnimation("all", "idle");

	Label_120:
		WaitForAnimEnd();
		var_125_string = var_3_string;
		if(var_125_string != 0) {
			goto Label_130;
		}
		PlayAnimation("all", "idle");
		goto Label_120;

	}
	goto Label_130;
	
Label_130:
	return 0;
	
}
EMIT "GOTO 0x43";


