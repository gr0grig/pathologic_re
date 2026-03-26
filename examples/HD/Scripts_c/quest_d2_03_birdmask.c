// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,GetVariable/2,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,self/1,GetGameTime/1,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:d2q03|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |W:ood2Birdmask1|W:d2q03BirdmaskGotoLara|W:pt_map_lara|A:AddMark|W:KnowTheater|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:branch|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1b0
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa4 vars=int,int
// @TASK_2: vars=bool,bool params=0
// @EVENT_0: op=0x1b5 vars=object
// @EVENT_26: op=0x1cb vars=string
// @EVENT_6: op=0x1e7 vars=
// @PE: 0x4a,0x8e,0xa4,0x290,0x2ad,0x2b9,0x2c5

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	if((int)1 != 0) {
		func_623();
		var_12_bool = var_8_bool == (int)7988;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_656();
			var_17_object = Obj(); var_18_object = Obj();
			var_17_object = var_1_object;
			var_18_object = var_0_object;
			func_662();
		}
		var_61_bool = var_8_bool == (int)7990;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_656();
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_object;
			func_662();
		}
		var_67_bool = var_8_bool == (int)7991;
		if(var_67_bool != 0) {
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_656();
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_662();
		}
		var_73_bool = var_8_bool == (int)7992;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_656();
		}
		var_77_bool = var_7_bool == (int)7616;
		if(var_77_bool != 0) {
			var_78_bool = 0; var_79_object = Obj();
			var_79_object = var_1_object;
			func_697(var_79_object);
			if(var_78_bool != 0) {
				var_86_string = "";
				func_142(var_8_bool, "Neutral");
				@@@var_0_object:SetMessage((int)506910);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)506911, (int)7618, (int)7617);
				var_107_bool = 0; var_108_object = Obj();
				var_108_object = var_1_object;
				func_685(var_108_object);
				if(var_107_bool != 0) {
					@@@var_0_object:AddReply((int)507249, (int)7993, (int)7989);
				}
				return 0;
			}
		}
		var_117_bool = var_7_bool == (int)7993;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_142(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)507253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507254, (int)7995, (int)7994);
			return 0;
		}
		var_124_bool = var_7_bool == (int)7995;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_142(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)507255);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507256, (int)7997, (int)7996);
			return 0;
		}
		var_131_bool = var_7_bool == (int)7997;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_142(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)507257);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507258, (int)7999, (int)7998);
			@@@var_0_object:AddReply((int)507261, (int)7618, (int)8002);
			return 0;
		}
		var_141_bool = var_7_bool == (int)7999;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_142(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)507259);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507260, (int)7618, (int)8000);
			return 0;
		}
		var_148_bool = var_7_bool == (int)7618;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_142(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)506912);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507242, (int)7983, (int)7982);
			var_154_bool = 0; var_155_object = Obj();
			var_155_object = var_1_object;
			func_709(var_155_object);
			if(var_154_bool != 0) {
				@@@var_0_object:AddReply((int)507252, (int)-1, (int)7992);
			}
			return 0;
		}
		var_164_bool = var_7_bool == (int)7983;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_142(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)507243);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507244, (int)7985, (int)7984);
			@@@var_0_object:AddReply((int)507251, (int)-1, (int)7991);
			return 0;
		}
		var_174_bool = var_7_bool == (int)7985;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_142(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)507245);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507246, (int)7987, (int)7986);
			@@@var_0_object:AddReply((int)507250, (int)-1, (int)7990);
			return 0;
		}
		var_184_bool = var_7_bool == (int)7987;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_142(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)507247);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507248, (int)-1, (int)7988);
			return 0;
		}
		var_3_string = true;
		var_190_bool = 0;
		func_817(var_190_bool);
		if(var_190_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa5";
	
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
			func_503(var_14_bool);
			if(var_14_bool != 0) {
				var_12_bool = 1;
			}
		}
		if(var_12_bool != 0) {
			var_15_object = Obj();
			func_630(var_15_object);
			RemoveActor(var_15_object);
		}
	} else {
		var_19_bool = var_7_string == "restore";
		if(var_19_bool == 0) goto Label_486;
		var_0_object = false;
	}
Label_486:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0;
	var_7_bool = 0;
	var_8_object = var_0_object;
	if(var_8_object != 0) {
		var_9_bool = 0;
		func_503(var_9_bool);
		if(var_9_bool != 0) {
			var_7_bool = 1;
		}
	}
	if(var_7_bool != 0) {
		var_10_object = Obj();
		func_630(var_10_object);
		RemoveActor(var_10_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = false;
	func_455();
	return 0;
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_505(var_25_bool, var_26_object, (float)130.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_811(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_809(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_813(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_815(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_792(var_77_int);
	@@var_21_object:SetPlayerName(var_77_int);
	IsOverrideActive(var_22_bool);
	var_85_bool = var_22_bool;
	if(var_85_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	DoDialog(var_21_object);
	var_86_object = Obj(); var_87_object = Obj();
	var_15_object = var_86_object;
	var_21_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	@@var_21_object:IsDialogEnd(var_24_bool);
	
Label_56:
	var_149_bool = var_24_bool == 0; //@nz
	if(var_149_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_574();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_709(var_154_bool)
{
	var_156_int = 0; var_157_string = "";
	func_646(var_156_int, "d2q03");
	var_159_bool = var_156_int == (int)3;
	if(var_159_bool != 0) {
		var_154_bool = 1;
		return 0;
	}
	var_154_bool = 0;
	return 0;
}


func_646(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0;
	GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
	return 2;
}


func_775(var_23_object)
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


func_455()
{
	
Label_455:
	Hold();
	goto Label_455;
}
EMIT "Return(); Pop(0)";


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_bool = 0; var_94_object = Obj();
		var_94_object = var_1_object;
		func_697(var_94_object);
		if(var_93_bool != 0) {
			var_101_string = "";
			func_142(var_87_object, "Neutral");
			@@@var_0_object:SetMessage((int)506910);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506911, (int)7618, (int)7617);
			var_122_bool = 0; var_123_object = Obj();
			var_123_object = var_1_object;
			func_685(var_123_object);
			if(var_122_bool != 0) {
				@@@var_0_object:AddReply((int)507249, (int)7993, (int)7989);
			}
		} else {
				return 0;
		}
	}
	var_131_bool = 0;
	func_817(var_131_bool);
	if(var_131_bool != 0) {

	Label_116:
		lshWaitForAnimEnd();
		var_132_string = var_3_string;
		if(var_132_string != 0) {
		} else {
			var_133_string = "";
			var_133_string = var_2_object;
			func_592(var_133_string);
			goto Label_116;
	}
		PlayAnimation("all", "idle");

	Label_131:
		WaitForAnimEnd();
		var_146_string = var_3_string;
		if(var_146_string != 0) {
			goto Label_141;
		}
		PlayAnimation("all", "idle");
		goto Label_131;

	}
	goto Label_141;
	
Label_141:
	return 0;
	
}
EMIT "GOTO 0x4e";


func_651(var_34_float)
{
	var_35_float = 0; var_36_float = 0;
	GetGameTime(var_36_float);
	var_36_float = var_34_float;
	return 2;
}


func_142(var_2_object, var_101_string)
{
	var_102_bool = 0;
	func_817(var_102_bool);
	var_103_bool = var_102_bool == 0; //@nz
	if(var_103_bool != 0) {
		return 0;
	}
	var_104_bool = var_101_string == var_2_object;
	if(var_104_bool != 0) {
		return 0;
	}
	var_105_string = ""; var_106_bool = 0;
	var_101_string = var_105_string;
	var_108_bool = var_101_string == "";
	if(var_108_bool != 0) {
		var_106_bool = 0;
	} else {
		var_106_bool = 1;
	}
	func_608(var_105_string, var_106_bool);
	var_2_object = var_101_string;
	return 0;
	
}


func_656()
{
	SetVariable("ood2Birdmask1", (int)1);
	return 0;
}


func_592(var_133_string)
{
	var_134_bool = 0; var_135_float = 0; var_136_float = 0; var_137_bool = 0; var_138_float = 0; var_139_float = 0;
	lshHasAnimation(var_137_bool, var_133_string);
	var_140_bool = var_137_bool;
	if(var_140_bool != 0) {
		lshGetAnimTimes(var_133_string, var_138_float, var_139_float);
		lshPlayAnimation(var_138_float, var_139_float, (bool)0);
	} else {
		var_143_int = "Can't find lsh animation : " + var_133_string;
		Trace(var_143_int);
	}
	return 6;
	
}


func_721()
{
	var_37_object = Obj(); var_38_object = Obj();
	CreateDiaryEntry(var_38_object, (int)133, (int)2, (int)515270);
	var_42_bool = 0; var_43_object = Obj(); var_44_int = 0;
	var_38_object = var_43_object;
	func_747(var_42_bool, var_43_object, (int)12);
	return 2;
}
EMIT "Stack[-1] = 0";


func_662()
{
	var_19_object = Obj(); var_20_object = Obj();
	SetVariable("d2q03", (int)3);
	func_775(Obj());
	var_23_object = var_20_object;
	var_34_float = 0;
	func_651(var_34_float);
	@@var_20_object:AddMark("d2q03BirdmaskGotoLara", "pt_map_lara", (int)0, (int)515293, var_34_float);
	func_721();
	return 2;
}
EMIT "Stack[-1] = 0";


func_792(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x327";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_734(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj();
	GetDiaryRoot(var_53_object);
	var_54_bool = var_53_object == 0; //@nz
	if(var_54_bool != 0) {
		Trace("Can't retrieve diary root");
		var_51_object = 0;
		return 2;
	}
	var_53_object = var_51_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_608(var_105_string, var_106_bool)
{
	var_109_bool = 0; var_110_float = 0; var_111_float = 0; var_112_bool = 0; var_113_float = 0; var_114_float = 0;
	lshHasAnimation(var_112_bool, var_105_string);
	var_115_bool = var_112_bool;
	if(var_115_bool != 0) {
		lshGetAnimTimes(var_105_string, var_113_float, var_114_float);
		lshPlayAnimation(var_113_float, var_114_float, var_106_bool);
	} else {
		var_117_int = "Can't find lsh animation : " + var_105_string;
		Trace(var_117_int);
	}
	return 6;
	
}


func_809(var_74_int)
{
	var_74_int = 515571;
	return 0;
}


func_811(var_73_int)
{
	var_73_int = 504029;
	return 0;
}


func_747(var_42_bool, var_43_object, var_44_int)
{
	var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0;
	func_734(Obj());
	var_51_object = var_48_object;
	@@var_48_object:Find(var_44_int, var_49_object);
	var_56_bool = var_49_object == 0; //@nz
	if(var_56_bool != 0) {
		var_58_int = "Can't find diary parent with id: " + var_44_int;
		Trace(var_58_int);
		var_42_bool = 0;
		return 6;
	}
	@@var_49_object:AddChild(var_43_object);
	SendWorldWndMessage((int)7);
	@@var_43_object:GetCategory(var_50_int);
	SetDiarySection(var_50_int);
	var_42_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_813(var_75_string)
{
	var_75_string = "ui/NPC_bmask.png";
	return 0;
}


func_685(var_122_bool)
{
	var_124_int = 0; var_125_string = "";
	func_646(var_124_int, "KnowTheater");
	var_127_bool = var_124_int == (int)1;
	if(var_127_bool != 0) {
		var_122_bool = 1;
		return 0;
	}
	var_122_bool = 0;
	return 0;
}


func_815(var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_623()
{
	var_10_bool = 0;
	func_817(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_817(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_505(var_25_bool, var_26_object, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0;
	@@var_26_object:GetPosition(var_38_cvector);
	@@var_26_object:GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	var_46_float = var_46_float + var_37_float;
	SetByIndex(var_38_cvector, 1) = var_46_float;
	GetPosition(var_39_cvector);
	GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	var_47_float = var_47_float + var_37_float;
	SetByIndex(var_39_cvector, 1) = var_47_float;
	var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_49_int = var_40_cvector | var_40_cvector;
	var_50_float = sqrt(var_49_int);
	var_40_cvector = var_40_cvector / var_50_float;
	var_41_cvector = -var_40_cvector;
	var_51_float = var_40_cvector * var_27_float;
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_41_cvector ^ CVector(0.0, 1.0, 0.0);
	func_636(var_52_cvector, var_53_cvector);
	var_61_float = var_52_cvector * (int)25;
	var_62_int = var_51_float + var_61_float;
	var_42_cvector = var_62_int - CVector(0.0, 10.0, 0.0);
	var_43_cvector = var_39_cvector + var_42_cvector;
	IsOverrideActive(var_44_bool);
	var_64_bool = var_44_bool;
	if(var_64_bool != 0) {
		var_25_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_43_cvector, var_41_cvector, (bool)1);
	var_66_float = GetByIndex(var_42_cvector, 0);
	var_67_float = GetByIndex(var_42_cvector, 2);
	Rotate(var_66_float, var_67_float);
	var_68_bool = 0;
	func_817(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_568;
		LookAsyncCamera("head");
	}
Label_568:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_630(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_503(var_9_bool)
{
	var_9_bool = 1;
	return 0;
}


func_697(var_93_bool)
{
	var_95_int = 0; var_96_string = "";
	func_646(var_95_int, "ood2Birdmask1");
	var_100_bool = var_95_int == (int)0;
	if(var_100_bool != 0) {
		var_93_bool = 1;
		return 0;
	}
	var_93_bool = 0;
	return 0;
}


func_636(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0;
	var_57_int = var_53_cvector | var_53_cvector;
	var_56_float = sqrt(var_57_int);
	var_58_float = 9.999999974752427e-07;
	var_59_bool = var_56_float < var_58_float;
	if(var_59_bool != 0) {
		var_52_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_52_cvector = var_53_cvector / var_56_float;
	return 2;
}


func_574()
{
	var_151_bool = 0; var_152_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_154_bool = 0;
	func_817(var_154_bool);
	if(var_154_bool != 0) {
	} else {
		HasAnimationTrack(var_152_bool, "head");
		var_156_bool = var_152_bool;
		if(var_156_bool == 0) goto Label_591;
		UnlookAsync("head");
	}
Label_591:
	return 2;
	
}


