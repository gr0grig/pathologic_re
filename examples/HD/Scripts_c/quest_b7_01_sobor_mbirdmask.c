// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,rand/2,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,self/1,GetVariable/2,GetGameTime/1,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |W:b7q01|W:b7q01BirdmaskGotoMat|W:pt_map_mat|A:AddMark|A:ShowMap|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x16d
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb3 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x162 vars=object
// @EVENT_26: op=0x196 vars=string
// @EVENT_5: op=0x19e vars=
// @EVENT_6: op=0x1a3 vars=
// @PE: 0x4a,0x9d,0xb3,0x162,0x196,0x2d6,0x2e6

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_646();
		var_11_bool = var_7_bool == (int)22187;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_703();
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_object;
			func_726(var_56_object);
		}
		var_82_bool = var_6_int == (int)22184;
		if(var_82_bool != 0) {
			var_83_bool = 0; var_84_object = Obj();
			var_84_object = var_1_object;
			func_742(var_84_object);
			if(var_83_bool != 0) {
				var_91_string = "";
				func_157(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)520971);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520972, (int)22186, (int)22185);
				@@@var_0_object:AddReply((int)524081, (int)25382, (int)25381);
				@@@var_0_object:AddReply((int)524088, (int)25386, (int)25388);
				return 0;
			}
			var_118_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520975);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520976, (int)-1, (int)22189);
			return 0;
		}
		var_124_bool = var_6_int == (int)25382;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524082);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524083, (int)25384, (int)25383);
			@@@var_0_object:AddReply((int)524089, (int)25392, (int)25391);
			return 0;
		}
		var_134_bool = var_6_int == (int)25392;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524090);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524091, (int)22186, (int)25393);
			return 0;
		}
		var_141_bool = var_6_int == (int)25384;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524084);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524085, (int)25386, (int)25385);
			return 0;
		}
		var_148_bool = var_6_int == (int)25386;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524086);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524087, (int)22186, (int)25387);
			return 0;
		}
		var_155_bool = var_6_int == (int)22186;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520973);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520974, (int)-1, (int)22187);
			return 0;
		}
		var_3_string = true;
		var_161_bool = 0;
		func_883(var_161_bool);
		if(var_161_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb4";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_518();
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_8_bool = var_6_string == "cleanup";
	if(var_8_bool != 0) {
		func_386(var_6_string);
	}
	return 0;
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
		func_435(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_653(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0;
	
Label_366:
	var_8_bool = 0;
	func_523(var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool != 0) {
		Hold();
		goto Label_366;
	}
	rand(var_7_float, (int)3);
	var_14_int = var_7_float + (int)3;
	Sleep(var_14_int);
	func_437();
	goto Label_366;
}
EMIT "Return(); Pop(2)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_528(var_18_bool, var_19_object, (float)130.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_877(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_875(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_879(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_881(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_858(var_70_int);
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
	var_144_bool = var_17_bool == 0; //@nz
	if(var_144_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_56;
	}
	var_8_object = Obj();
	func_597();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_386(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0;
	var_0_object = true;
	IsLoaded(var_10_bool);
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_10_bool == 0; //@nz
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_435(var_13_bool);
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_14_object = Obj();
		func_653(var_14_object);
		RemoveActor(var_14_object);
	}
	return 2;
}


func_516(var_56_bool)
{
	var_56_bool = 1;
	return 0;
}


func_646()
{
	var_9_bool = 0;
	func_883(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_518()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_523(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
	return 2;
}


func_780(var_37_bool, var_38_object, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0;
	func_767(Obj());
	var_46_object = var_43_object;
	@@var_43_object:Find(var_39_int, var_44_object);
	var_51_bool = var_44_object == 0; //@nz
	if(var_51_bool != 0) {
		var_53_int = "Can't find diary parent with id: " + var_39_int;
		Trace(var_53_int);
		var_37_bool = 0;
		return 6;
	}
	@@var_44_object:AddChild(var_38_object);
	SendWorldWndMessage((int)7);
	@@var_38_object:GetCategory(var_45_int);
	SetDiarySection(var_45_int);
	var_37_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_653(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_528(var_18_bool, var_19_object, var_20_float)
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
	func_659(var_45_cvector, var_46_cvector);
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
	func_883(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_591;
		LookAsyncCamera("head");
	}
Label_591:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_659(var_45_cvector, var_46_cvector)
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


func_669(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
	return 2;
}


func_157(var_2_object, var_94_string)
{
	var_95_bool = 0;
	func_883(var_95_bool);
	var_96_bool = var_95_bool == 0; //@nz
	if(var_96_bool != 0) {
		return 0;
	}
	var_97_bool = var_94_string == var_2_object;
	if(var_97_bool != 0) {
		return 0;
	}
	var_98_string = ""; var_99_bool = 0;
	var_94_string = var_98_string;
	var_101_bool = var_94_string == "";
	if(var_101_bool != 0) {
		var_99_bool = 0;
	} else {
		var_99_bool = 1;
	}
	func_631(var_98_string, var_99_bool);
	var_2_object = var_94_string;
	return 0;
	
}


func_674(var_29_float)
{
	var_30_float = 0; var_31_float = 0;
	GetGameTime(var_31_float);
	var_31_float = var_29_float;
	return 2;
}


func_679(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = "";
	var_41_int = var_38_int;
	if(var_41_int != 0) {
		"idle" = "idle" + var_38_int;
	}
	var_40_string = var_37_string;
	return 2;
}


func_808(var_18_object)
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


func_686(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0;
	var_34_int = 0;
	
Label_688:
	var_37_string = ""; var_38_int = 0;
	var_34_int = var_38_int;
	func_679(var_37_string, var_38_int);
	HasAnimation(var_35_bool, "all", var_37_string);
	var_42_bool = var_35_bool == 0; //@nz
	if(var_42_bool != 0) {
	} else {
		var_34_int = var_34_int + (int)1;
		goto Label_688;
	}
	var_34_int = var_31_int;
	return 4;
	
}


func_435(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_437()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0;
	WaitForAnimEnd();
	var_29_bool = 0;
	func_523(var_29_bool);
	var_30_bool = var_29_bool == 0; //@nz
	if(var_30_bool != 0) {
		return 14;
	}
	func_686((int)0);
	var_31_int = var_22_int;
	var_23_int = 0;
	
Label_451:
	var_44_bool = 0;
	var_44_bool = 0;
	var_46_bool = var_23_int < (int)5;
	if(var_46_bool != 0) {
		var_47_bool = 0;
		func_523(var_47_bool);
		if(var_47_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		irand(var_24_int, (int)3);
		var_50_bool = var_24_int == (int)0;
		if(var_50_bool != 0) {
			var_51_int = var_22_int;
			if(var_51_int == 0) goto Label_484;
			irand(var_25_int, var_22_int);
			var_53_string = ""; var_54_int = 0;
			var_25_int = var_54_int;
			func_679(var_53_string, var_54_int);
			PlayAnimation("all", var_53_string);
			WaitForAnimEnd(var_26_bool);
			var_55_bool = var_26_bool == 0; //@nz
			if(var_55_bool != 0) {
			} else {
		} else {
				var_60_bool = var_24_int == (int)1;
				if(var_60_bool != 0) {
					rand(var_27_float, (int)4);
					var_63_int = var_27_float + (int)1;
					Sleep(var_63_int, var_28_bool);
					var_64_bool = var_28_bool == 0; //@nz
					if(var_64_bool != 0) {
						goto Label_513;
					}
					goto Label_502;
				}
				var_65_int = var_23_int;
				if(var_65_int == 0) goto Label_502;
				goto Label_513;
		}
		Label_502:
			var_56_bool = 0;
			func_516(var_56_bool);
			var_57_bool = var_56_bool == 0; //@nz
			if(var_57_bool != 0) {
				goto Label_513;
			}
			ResetAAS();
			var_23_int = var_23_int + (int)1;
			goto Label_451;

		}
	}
Label_513:
	ResetAAS();
	return 14;
	
}


func_825(var_57_object, var_58_string, var_59_float)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); var_68_bool = 0;
	GetMainOutdoorScene(var_67_object);
	var_69_bool = var_67_object == 0; //@ne
	if(var_69_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_67_object:GetLocator(var_58_string, var_68_bool, var_65_cvector, var_66_cvector);
	var_71_bool = var_68_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_73_int = "Warning: outdoor scene locator " + var_58_string;
		var_75_int = var_73_int + " doesnt exist";
		Trace(var_75_int);
	}
	@@var_67_object:GetMap(var_57_object);
	var_76_bool = var_57_object == 0; //@ne
	if(var_76_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_78_float = GetByIndex(var_65_cvector, 0);
	var_79_float = GetByIndex(var_65_cvector, 2);
	@@var_57_object:SetMapParams(var_78_float, var_79_float, var_59_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_703()
{
	var_14_object = Obj(); var_15_object = Obj();
	SetVariable("b7q01", (int)2);
	func_808(Obj());
	var_18_object = var_15_object;
	var_29_float = 0;
	func_674(var_29_float);
	@@var_15_object:AddMark("b7q01BirdmaskGotoMat", "pt_map_mat", (int)1, (int)521022, var_29_float);
	func_754();
	return 2;
}
EMIT "Stack[-1] = 0";


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_86_bool = 0; var_87_object = Obj();
		var_87_object = var_1_object;
		func_742(var_87_object);
		if(var_86_bool != 0) {
			var_94_string = "";
			func_157(var_80_object, "Neutral");
			@@@var_0_object:SetMessage((int)520971);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520972, (int)22186, (int)22185);
			@@@var_0_object:AddReply((int)524081, (int)25382, (int)25381);
			@@@var_0_object:AddReply((int)524088, (int)25386, (int)25388);
		} else {
				var_139_string = "";
				func_157(var_80_object, "Neutral");
				@@@var_0_object:SetMessage((int)520975);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520976, (int)-1, (int)22189);
				goto Label_127;
		}
	}
Label_127:
	var_121_bool = 0;
	func_883(var_121_bool);
	if(var_121_bool != 0) {

	Label_131:
		lshWaitForAnimEnd();
		var_122_string = var_3_string;
		if(var_122_string != 0) {
		} else {
			var_123_string = "";
			var_123_string = var_2_object;
			func_615(var_123_string);
			goto Label_131;
	}
		PlayAnimation("all", "idle");

	Label_146:
		WaitForAnimEnd();
		var_136_string = var_3_string;
		if(var_136_string != 0) {
			goto Label_156;
		}
		PlayAnimation("all", "idle");
		goto Label_146;

	}
	goto Label_156;
	
Label_156:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_597()
{
	var_146_bool = 0; var_147_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_149_bool = 0;
	func_883(var_149_bool);
	if(var_149_bool != 0) {
	} else {
		HasAnimationTrack(var_147_bool, "head");
		var_151_bool = var_147_bool;
		if(var_151_bool == 0) goto Label_614;
		UnlookAsync("head");
	}
Label_614:
	return 2;
	
}


func_726(var_56_object)
{
	var_57_object = Obj(); var_58_string = ""; var_59_float = 0;
	func_808(Obj());
	var_60_object = var_57_object;
	func_825(var_57_object, "pt_map_mat", (float)2);
	var_80_object = Obj();
	func_808(var_80_object);
	@@var_56_object:ShowMap(var_80_object);
	return 0;
}


func_858(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x369";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_742(var_86_bool)
{
	var_88_int = 0; var_89_string = "";
	func_669(var_88_int, "b7q01");
	var_93_bool = var_88_int == (int)1;
	if(var_93_bool != 0) {
		var_86_bool = 1;
		return 0;
	}
	var_86_bool = 0;
	return 0;
}


func_615(var_123_string)
{
	var_124_bool = 0; var_125_float = 0; var_126_float = 0; var_127_bool = 0; var_128_float = 0; var_129_float = 0;
	lshHasAnimation(var_127_bool, var_123_string);
	var_130_bool = var_127_bool;
	if(var_130_bool != 0) {
		lshGetAnimTimes(var_123_string, var_128_float, var_129_float);
		lshPlayAnimation(var_128_float, var_129_float, (bool)0);
	} else {
		var_133_int = "Can't find lsh animation : " + var_123_string;
		Trace(var_133_int);
	}
	return 6;
	
}


func_875(var_67_int)
{
	var_67_int = 515571;
	return 0;
}


func_877(var_66_int)
{
	var_66_int = 504029;
	return 0;
}


func_879(var_68_string)
{
	var_68_string = "ui/NPC_bmask.png";
	return 0;
}


func_881(var_69_string)
{
	var_69_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_754()
{
	var_32_object = Obj(); var_33_object = Obj();
	CreateDiaryEntry(var_33_object, (int)255, (int)1, (int)521023);
	var_37_bool = 0; var_38_object = Obj(); var_39_int = 0;
	var_33_object = var_38_object;
	func_780(var_37_bool, var_38_object, (int)253);
	return 2;
}
EMIT "Stack[-1] = 0";


func_883(var_61_bool)
{
	var_61_bool = 0;
	return 0;
}


func_631(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0;
	lshHasAnimation(var_105_bool, var_98_string);
	var_108_bool = var_105_bool;
	if(var_108_bool != 0) {
		lshGetAnimTimes(var_98_string, var_106_float, var_107_float);
		lshPlayAnimation(var_106_float, var_107_float, var_99_bool);
	} else {
		var_110_int = "Can't find lsh animation : " + var_98_string;
		Trace(var_110_int);
	}
	return 6;
	
}


func_767(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj();
	GetDiaryRoot(var_48_object);
	var_49_bool = var_48_object == 0; //@nz
	if(var_49_bool != 0) {
		Trace("Can't retrieve diary root");
		var_46_object = 0;
		return 2;
	}
	var_48_object = var_46_object;
	return 2;
}
EMIT "Stack[-1] = 0";


