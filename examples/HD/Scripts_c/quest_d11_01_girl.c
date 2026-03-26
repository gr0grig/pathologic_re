// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,self/1,GetVariable/2,FindActor/2,Trigger/2,GetGameTime/1,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |W:pt_map_uprava_admin|A:ShowMap|W:ood11Nude1|W:d11q01|W:d11q01NudeGotoRastrel|W:pt_d11q01_msoldier|A:AddMark|W:d11q01NudeGotoBlock|W:quest_d11_01|W:init_soldiers|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1e2
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc1 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x1da vars=object
// @EVENT_26: op=0x1e6 vars=string
// @EVENT_6: op=0x202 vars=
// @PE: 0x4a,0xab,0xc1,0x1da,0x2b7,0x2c7,0x2f2,0x2fe

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_650();
		var_11_bool = var_7_bool == (int)15659;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_717();
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_695(var_67_object);
		}
		var_93_bool = var_7_bool == (int)15660;
		if(var_93_bool != 0) {
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_717();
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_695(var_97_object);
		}
		var_99_bool = var_6_int == (int)15646;
		if(var_99_bool != 0) {
			var_100_bool = 0;
			var_100_bool = 0;
			var_101_bool = 0; var_102_object = Obj();
			var_102_object = var_1_object;
			func_754(var_102_object);
			if(var_101_bool != 0) {
				var_109_bool = 0; var_110_object = Obj();
				var_110_object = var_1_object;
				func_766(var_110_object);
				if(var_109_bool != 0) {
					var_100_bool = 1;
				}
			}
			if(var_100_bool != 0) {
				var_115_object = Obj(); var_116_object = Obj();
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_711();
				var_119_string = "";
				func_171(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)514421);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)514422, (int)15648, (int)15647);
				@@@var_0_object:AddReply((int)514443, (int)15650, (int)15670);
				return 0;
			}
			var_143_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514502);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514503, (int)-1, (int)15740);
			@@@var_0_object:AddReply((int)534053, (int)-1, (int)35635);
			return 0;
		}
		var_152_bool = var_6_int == (int)15648;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514423);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514424, (int)15650, (int)15649);
			@@@var_0_object:AddReply((int)514440, (int)15667, (int)15666);
			return 0;
		}
		var_162_bool = var_6_int == (int)15667;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514441);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514442, (int)15650, (int)15668);
			return 0;
		}
		var_169_bool = var_6_int == (int)15650;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514425);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514426, (int)15652, (int)15651);
			@@@var_0_object:AddReply((int)514436, (int)15662, (int)15661);
			return 0;
		}
		var_179_bool = var_6_int == (int)15662;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514437);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514438, (int)15652, (int)15663);
			@@@var_0_object:AddReply((int)514439, (int)15652, (int)15665);
			return 0;
		}
		var_189_bool = var_6_int == (int)15652;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514427);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514428, (int)15654, (int)15653);
			@@@var_0_object:AddReply((int)534052, (int)15658, (int)35633);
			return 0;
		}
		var_199_bool = var_6_int == (int)15654;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514429);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514430, (int)15656, (int)15655);
			@@@var_0_object:AddReply((int)540067, (int)15658, (int)42030);
			return 0;
		}
		var_209_bool = var_6_int == (int)15656;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514431);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514432, (int)15658, (int)15657);
			return 0;
		}
		var_216_bool = var_6_int == (int)15658;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514433);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514434, (int)-1, (int)15659);
			@@@var_0_object:AddReply((int)514435, (int)-1, (int)15660);
			return 0;
		}
		var_3_string = true;
		var_225_bool = 0;
		func_907(var_225_bool);
		if(var_225_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc2";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
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
			func_530(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_657(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_513;
		var_0_object = false;
	}
Label_513:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_530(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_657(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_482:
	Hold();
	goto Label_482;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_532(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_901(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_899(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_903(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_905(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_882(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_object = Obj(); var_80_object = Obj();
	var_8_object = var_79_object;
	var_14_object = var_80_object;
	TaskCall(1);
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_56:
	var_155_bool = var_17_bool == 0; //@nz
	if(var_155_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_56;
	}
	var_8_object = Obj();
	func_601();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_832(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj();
	GetMainOutdoorScene(var_21_object);
	var_23_bool = var_21_object == 0; //@ne
	if(var_23_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_22_object = 0;
		var_22_object = var_18_object;
		return 4;
	}
	@@var_21_object:GetMap(var_22_object);
	var_22_object = var_18_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_899(var_67_int)
{
	var_67_int = 515596;
	return 0;
}


func_901(var_66_int)
{
	var_66_int = 514839;
	return 0;
}


func_903(var_68_string)
{
	var_68_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_711()
{
	SetVariable("ood11Nude1", (int)1);
	return 0;
}


func_905(var_69_string)
{
	var_69_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_650()
{
	var_9_bool = 0;
	func_907(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_907(var_61_bool)
{
	var_61_bool = 0;
	return 0;
}


func_778()
{
	var_37_object = Obj(); var_38_object = Obj();
	CreateDiaryEntry(var_38_object, (int)194, (int)1, (int)515479);
	var_42_bool = 0; var_43_object = Obj(); var_44_int = 0;
	var_38_object = var_43_object;
	func_804(var_42_bool, var_43_object, (int)192);
	return 2;
}
EMIT "Stack[-1] = 0";


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_86_bool = 0;
		var_86_bool = 0;
		var_87_bool = 0; var_88_object = Obj();
		var_88_object = var_1_object;
		func_754(var_88_object);
		if(var_87_bool != 0) {
			var_95_bool = 0; var_96_object = Obj();
			var_96_object = var_1_object;
			func_766(var_96_object);
			if(var_95_bool != 0) {
				var_86_bool = 1;
			}
		}
		if(var_86_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_711();
			var_105_string = "";
			func_171(var_80_object, "Neutral");
			@@@var_0_object:SetMessage((int)514421);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514422, (int)15648, (int)15647);
			@@@var_0_object:AddReply((int)514443, (int)15650, (int)15670);
		} else {
				var_147_string = "";
				func_171(var_80_object, "Neutral");
				@@@var_0_object:SetMessage((int)514502);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)514503, (int)-1, (int)15740);
				@@@var_0_object:AddReply((int)534053, (int)-1, (int)35635);
				goto Label_141;
		}
	}
Label_141:
	var_129_bool = 0;
	func_907(var_129_bool);
	if(var_129_bool != 0) {

	Label_145:
		lshWaitForAnimEnd();
		var_130_string = var_3_string;
		if(var_130_string != 0) {
		} else {
			var_131_string = "";
			var_131_string = var_2_object;
			func_619(var_131_string);
			goto Label_145;
	}
		PlayAnimation("all", "idle");

	Label_160:
		WaitForAnimEnd();
		var_144_string = var_3_string;
		if(var_144_string != 0) {
			goto Label_170;
		}
		PlayAnimation("all", "idle");
		goto Label_160;

	}
	goto Label_170;
	
Label_170:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_717()
{
	var_14_object = Obj(); var_15_object = Obj();
	SetVariable("d11q01", (int)2);
	func_832(Obj());
	var_18_object = var_15_object;
	var_29_float = 0;
	func_690(var_29_float);
	@@var_15_object:AddMark("d11q01NudeGotoRastrel", "pt_d11q01_msoldier", (int)1, (int)515482, var_29_float);
	var_36_float = 0;
	func_690(var_36_float);
	@@var_15_object:AddMark("d11q01NudeGotoBlock", "pt_map_uprava_admin", (int)1, (int)515305, var_36_float);
	func_778();
	var_60_bool = 0; var_61_string = ""; var_62_string = "";
	func_678(var_60_bool, "quest_d11_01", "init_soldiers");
	return 2;
}
EMIT "Stack[-1] = 0";


func_657(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_530(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_849(var_68_object, var_69_string, var_70_float)
{
	var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_object = Obj(); var_75_bool = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_object = Obj(); var_79_bool = 0;
	GetMainOutdoorScene(var_78_object);
	var_80_bool = var_78_object == 0; //@ne
	if(var_80_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_78_object:GetLocator(var_69_string, var_79_bool, var_76_cvector, var_77_cvector);
	var_82_bool = var_79_bool == 0; //@nz
	if(var_82_bool != 0) {
		var_84_int = "Warning: outdoor scene locator " + var_69_string;
		var_86_int = var_84_int + " doesnt exist";
		Trace(var_86_int);
	}
	@@var_78_object:GetMap(var_68_object);
	var_87_bool = var_68_object == 0; //@ne
	if(var_87_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_89_float = GetByIndex(var_76_cvector, 0);
	var_90_float = GetByIndex(var_76_cvector, 2);
	@@var_68_object:SetMapParams(var_89_float, var_90_float, var_70_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_532(var_18_bool, var_19_object, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0;
	@@var_19_object:GetPosition(var_31_cvector);
	@@var_19_object:GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	var_39_float = var_39_float + var_30_float;
	SetByIndex(var_31_cvector, 1) = var_39_float;
	GetPosition(var_32_cvector);
	GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	var_40_float = var_40_float + var_30_float;
	SetByIndex(var_32_cvector, 1) = var_40_float;
	var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_42_int = var_33_cvector | var_33_cvector;
	var_43_float = sqrt(var_42_int);
	var_33_cvector = var_33_cvector / var_43_float;
	var_34_cvector = -var_33_cvector;
	var_44_float = var_33_cvector * var_20_float;
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_34_cvector ^ CVector(0.0, 1.0, 0.0);
	func_663(var_45_cvector, var_46_cvector);
	var_54_float = var_45_cvector * (int)25;
	var_55_int = var_44_float + var_54_float;
	var_35_cvector = var_55_int - CVector(0.0, 10.0, 0.0);
	var_36_cvector = var_32_cvector + var_35_cvector;
	IsOverrideActive(var_37_bool);
	var_57_bool = var_37_bool;
	if(var_57_bool != 0) {
		var_18_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_36_cvector, var_34_cvector, (bool)1);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_59_float, var_60_float);
	var_61_bool = 0;
	func_907(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_595;
		LookAsyncCamera("head");
	}
Label_595:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_791(var_51_object)
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


func_663(var_45_cvector, var_46_cvector)
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


func_601()
{
	var_157_bool = 0; var_158_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_160_bool = 0;
	func_907(var_160_bool);
	if(var_160_bool != 0) {
	} else {
		HasAnimationTrack(var_158_bool, "head");
		var_162_bool = var_158_bool;
		if(var_162_bool == 0) goto Label_618;
		UnlookAsync("head");
	}
Label_618:
	return 2;
	
}


func_673(var_89_int, var_90_string)
{
	var_91_int = 0; var_92_int = 0;
	GetVariable(var_90_string, var_92_int);
	var_92_int = var_89_int;
	return 2;
}


func_804(var_42_bool, var_43_object, var_44_int)
{
	var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0;
	func_791(Obj());
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


func_678(var_60_bool, var_61_string, var_62_string)
{
	var_63_object = Obj(); var_64_object = Obj();
	FindActor(var_64_object, var_61_string);
	var_65_bool = var_64_object == 0; //@ne
	if(var_65_bool != 0) {
		var_60_bool = 0;
		return 2;
	}
	Trigger(var_64_object, var_62_string);
	var_60_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_171(var_2_object, var_105_string)
{
	var_106_bool = 0;
	func_907(var_106_bool);
	var_107_bool = var_106_bool == 0; //@nz
	if(var_107_bool != 0) {
		return 0;
	}
	var_108_bool = var_105_string == var_2_object;
	if(var_108_bool != 0) {
		return 0;
	}
	var_109_string = ""; var_110_bool = 0;
	var_105_string = var_109_string;
	var_112_bool = var_105_string == "";
	if(var_112_bool != 0) {
		var_110_bool = 0;
	} else {
		var_110_bool = 1;
	}
	func_635(var_109_string, var_110_bool);
	var_2_object = var_105_string;
	return 0;
	
}


func_619(var_131_string)
{
	var_132_bool = 0; var_133_float = 0; var_134_float = 0; var_135_bool = 0; var_136_float = 0; var_137_float = 0;
	lshHasAnimation(var_135_bool, var_131_string);
	var_138_bool = var_135_bool;
	if(var_138_bool != 0) {
		lshGetAnimTimes(var_131_string, var_136_float, var_137_float);
		lshPlayAnimation(var_136_float, var_137_float, (bool)0);
	} else {
		var_141_int = "Can't find lsh animation : " + var_131_string;
		Trace(var_141_int);
	}
	return 6;
	
}


func_690(var_29_float)
{
	var_30_float = 0; var_31_float = 0;
	GetGameTime(var_31_float);
	var_31_float = var_29_float;
	return 2;
}


func_882(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x381";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_754(var_87_bool)
{
	var_89_int = 0; var_90_string = "";
	func_673(var_89_int, "d11q01");
	var_94_bool = var_89_int == (int)1;
	if(var_94_bool != 0) {
		var_87_bool = 1;
		return 0;
	}
	var_87_bool = 0;
	return 0;
}


func_695(var_67_object)
{
	var_68_object = Obj(); var_69_string = ""; var_70_float = 0;
	func_832(Obj());
	var_71_object = var_68_object;
	func_849(var_68_object, "pt_map_uprava_admin", (float)2);
	var_91_object = Obj();
	func_832(var_91_object);
	@@var_67_object:ShowMap(var_91_object);
	return 0;
}


func_635(var_109_string, var_110_bool)
{
	var_113_bool = 0; var_114_float = 0; var_115_float = 0; var_116_bool = 0; var_117_float = 0; var_118_float = 0;
	lshHasAnimation(var_116_bool, var_109_string);
	var_119_bool = var_116_bool;
	if(var_119_bool != 0) {
		lshGetAnimTimes(var_109_string, var_117_float, var_118_float);
		lshPlayAnimation(var_117_float, var_118_float, var_110_bool);
	} else {
		var_121_int = "Can't find lsh animation : " + var_109_string;
		Trace(var_121_int);
	}
	return 6;
	
}


func_766(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_673(var_97_int, "ood11Nude1");
	var_100_bool = var_97_int == (int)0;
	if(var_100_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


