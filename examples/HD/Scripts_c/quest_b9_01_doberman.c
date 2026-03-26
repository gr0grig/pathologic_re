// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,rand/2,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,self/1,GetVariable/2,FindActor/2,Trigger/2,GetGameTime/1,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |W:oob9MDoberman1|W:b9q01|W:b9q01MDobermanGotoFactory|W:pt_gmap_factory|A:AddMark|W:quest_b9_01|W:remove_mdoberman|A:ShowMap|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x161
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa8 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x159 vars=object
// @EVENT_26: op=0x18a vars=string
// @EVENT_5: op=0x192 vars=
// @EVENT_6: op=0x197 vars=
// @PE: 0x4a,0x92,0xa8,0x159,0x18a,0x2ba,0x2df,0x2ef,0x2fb

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_629();
		var_11_bool = var_7_bool == (int)22720;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_698();
		}
		var_17_bool = var_7_bool == (int)22722;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_704();
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_735(var_72_object);
		}
		var_98_bool = var_6_int == (int)22719;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_146(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)521558);
			@@@var_0_object:ClearReplies();
			var_117_bool = 0;
			var_117_bool = 0;
			var_118_bool = 0; var_119_object = Obj();
			var_119_object = var_1_object;
			func_751(var_119_object);
			if(var_118_bool != 0) {
				var_124_bool = 0; var_125_object = Obj();
				var_125_object = var_1_object;
				func_763(var_125_object);
				if(var_124_bool != 0) {
					var_117_bool = 1;
				}
			}
			if(var_117_bool != 0) {
				@@@var_0_object:AddReply((int)521559, (int)22721, (int)22720);
			}
			@@@var_0_object:AddReply((int)521562, (int)-1, (int)22723);
			return 0;
		}
		var_137_bool = var_6_int == (int)22721;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_146(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)521560);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522279, (int)23434, (int)23433);
			@@@var_0_object:AddReply((int)522272, (int)23426, (int)23425);
			return 0;
		}
		var_147_bool = var_6_int == (int)23426;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_146(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522273);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522274, (int)23431, (int)23427);
			@@@var_0_object:AddReply((int)522275, (int)23429, (int)23428);
			return 0;
		}
		var_157_bool = var_6_int == (int)23429;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_146(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522276);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522277, (int)23431, (int)23430);
			return 0;
		}
		var_164_bool = var_6_int == (int)23431;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_146(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522278);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522281, (int)23434, (int)23435);
			return 0;
		}
		var_171_bool = var_6_int == (int)23434;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_146(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522280);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521561, (int)-1, (int)22722);
			return 0;
		}
		var_3_string = true;
		var_177_bool = 0;
		func_904(var_177_bool);
		if(var_177_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa9";
	
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
	var_8_bool = var_6_string == "cleanup";
	if(var_8_bool != 0) {
		func_374(var_6_string);
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
		func_423(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_636(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0;
	
Label_354:
	var_8_bool = 0;
	func_506(var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool != 0) {
		Hold();
		goto Label_354;
	}
	rand(var_7_float, (int)3);
	var_14_int = var_7_float + (int)3;
	Sleep(var_14_int);
	func_425();
	goto Label_354;
}
EMIT "Return(); Pop(2)";


func_896(var_67_int)
{
	var_67_int = 518097;
	return 0;
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_511(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_898(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_896(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_900(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_902(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_879(var_70_int);
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
	var_143_bool = var_17_bool == 0; //@nz
	if(var_143_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_56;
	}
	var_8_object = Obj();
	func_580();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_898(var_66_int)
{
	var_66_int = 518096;
	return 0;
}


func_642(var_45_cvector, var_46_cvector)
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


func_900(var_68_string)
{
	var_68_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_902(var_69_string)
{
	var_69_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_775()
{
	var_42_object = Obj(); var_43_object = Obj();
	CreateDiaryEntry(var_43_object, (int)300, (int)1, (int)521615);
	var_47_bool = 0; var_48_object = Obj(); var_49_int = 0;
	var_43_object = var_48_object;
	func_801(var_47_bool, var_48_object, (int)297);
	return 2;
}
EMIT "Stack[-1] = 0";


func_904(var_61_bool)
{
	var_61_bool = 0;
	return 0;
}


func_652(var_107_int, var_108_string)
{
	var_109_int = 0; var_110_int = 0;
	GetVariable(var_108_string, var_110_int);
	var_110_int = var_107_int;
	return 2;
}


func_657(var_65_bool, var_66_string, var_67_string)
{
	var_68_object = Obj(); var_69_object = Obj();
	FindActor(var_69_object, var_66_string);
	var_70_bool = var_69_object == 0; //@ne
	if(var_70_bool != 0) {
		var_65_bool = 0;
		return 2;
	}
	Trigger(var_69_object, var_67_string);
	var_65_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_146(var_2_object, var_86_string)
{
	var_87_bool = 0;
	func_904(var_87_bool);
	var_88_bool = var_87_bool == 0; //@nz
	if(var_88_bool != 0) {
		return 0;
	}
	var_89_bool = var_86_string == var_2_object;
	if(var_89_bool != 0) {
		return 0;
	}
	var_90_string = ""; var_91_bool = 0;
	var_86_string = var_90_string;
	var_93_bool = var_86_string == "";
	if(var_93_bool != 0) {
		var_91_bool = 0;
	} else {
		var_91_bool = 1;
	}
	func_614(var_90_string, var_91_bool);
	var_2_object = var_86_string;
	return 0;
	
}


func_788(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj();
	GetDiaryRoot(var_58_object);
	var_59_bool = var_58_object == 0; //@nz
	if(var_59_bool != 0) {
		Trace("Can't retrieve diary root");
		var_56_object = 0;
		return 2;
	}
	var_58_object = var_56_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_669(var_39_float)
{
	var_40_float = 0; var_41_float = 0;
	GetGameTime(var_41_float);
	var_41_float = var_39_float;
	return 2;
}


func_801(var_47_bool, var_48_object, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0;
	func_788(Obj());
	var_56_object = var_53_object;
	@@var_53_object:Find(var_49_int, var_54_object);
	var_61_bool = var_54_object == 0; //@nz
	if(var_61_bool != 0) {
		var_63_int = "Can't find diary parent with id: " + var_49_int;
		Trace(var_63_int);
		var_47_bool = 0;
		return 6;
	}
	@@var_54_object:AddChild(var_48_object);
	SendWorldWndMessage((int)7);
	@@var_48_object:GetCategory(var_55_int);
	SetDiarySection(var_55_int);
	var_47_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_674(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = "";
	var_41_int = var_38_int;
	if(var_41_int != 0) {
		"idle" = "idle" + var_38_int;
	}
	var_40_string = var_37_string;
	return 2;
}


func_423(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_425()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0;
	WaitForAnimEnd();
	var_29_bool = 0;
	func_506(var_29_bool);
	var_30_bool = var_29_bool == 0; //@nz
	if(var_30_bool != 0) {
		return 14;
	}
	func_681((int)0);
	var_31_int = var_22_int;
	var_23_int = 0;
	
Label_439:
	var_44_bool = 0;
	var_44_bool = 0;
	var_46_bool = var_23_int < (int)5;
	if(var_46_bool != 0) {
		var_47_bool = 0;
		func_506(var_47_bool);
		if(var_47_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		irand(var_24_int, (int)3);
		var_50_bool = var_24_int == (int)0;
		if(var_50_bool != 0) {
			var_51_int = var_22_int;
			if(var_51_int == 0) goto Label_472;
			irand(var_25_int, var_22_int);
			var_53_string = ""; var_54_int = 0;
			var_25_int = var_54_int;
			func_674(var_53_string, var_54_int);
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
						goto Label_501;
					}
					goto Label_490;
				}
				var_65_int = var_23_int;
				if(var_65_int == 0) goto Label_490;
				goto Label_501;
		}
		Label_490:
			var_56_bool = 0;
			func_504(var_56_bool);
			var_57_bool = var_56_bool == 0; //@nz
			if(var_57_bool != 0) {
				goto Label_501;
			}
			ResetAAS();
			var_23_int = var_23_int + (int)1;
			goto Label_439;

		}
	}
Label_501:
	ResetAAS();
	return 14;
	
}


func_681(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0;
	var_34_int = 0;
	
Label_683:
	var_37_string = ""; var_38_int = 0;
	var_34_int = var_38_int;
	func_674(var_37_string, var_38_int);
	HasAnimation(var_35_bool, "all", var_37_string);
	var_42_bool = var_35_bool == 0; //@nz
	if(var_42_bool != 0) {
	} else {
		var_34_int = var_34_int + (int)1;
		goto Label_683;
	}
	var_34_int = var_31_int;
	return 4;
	
}


func_698()
{
	SetVariable("oob9MDoberman1", (int)1);
	return 0;
}


func_829(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj();
	GetMainOutdoorScene(var_31_object);
	var_33_bool = var_31_object == 0; //@ne
	if(var_33_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_32_object = 0;
		var_32_object = var_28_object;
		return 4;
	}
	@@var_31_object:GetMap(var_32_object);
	var_32_object = var_28_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_704()
{
	var_20_object = Obj(); var_21_object = Obj();
	var_22_int = 0; var_23_string = "";
	func_652(var_22_int, "b9q01");
	var_27_bool = var_22_int == (int)2;
	if(var_27_bool != 0) {
		func_829(Obj());
		var_28_object = var_21_object;
		var_39_float = 0;
		func_669(var_39_float);
		@@var_21_object:AddMark("b9q01MDobermanGotoFactory", "pt_gmap_factory", (int)1, (int)530198, var_39_float);
		func_775();
		var_65_bool = 0; var_66_string = ""; var_67_string = "";
		func_657(var_65_bool, "quest_b9_01", "remove_mdoberman");
		var_21_object = 0;
	}
	return 2;
}


func_580()
{
	var_145_bool = 0; var_146_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_148_bool = 0;
	func_904(var_148_bool);
	if(var_148_bool != 0) {
	} else {
		HasAnimationTrack(var_146_bool, "head");
		var_150_bool = var_146_bool;
		if(var_150_bool == 0) goto Label_597;
		UnlookAsync("head");
	}
Label_597:
	return 2;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_86_string = "";
		func_146(var_80_object, "Neutral");
		@@@var_0_object:SetMessage((int)521558);
		@@@var_0_object:ClearReplies();
		var_104_bool = 0;
		var_104_bool = 0;
		var_105_bool = 0; var_106_object = Obj();
		var_106_object = var_1_object;
		func_751(var_106_object);
		if(var_105_bool != 0) {
			var_113_bool = 0; var_114_object = Obj();
			var_114_object = var_1_object;
			func_763(var_114_object);
			if(var_113_bool != 0) {
				var_104_bool = 1;
			}
		}
		if(var_104_bool != 0) {
			@@@var_0_object:AddReply((int)521559, (int)22721, (int)22720);
		}
		@@@var_0_object:AddReply((int)521562, (int)-1, (int)22723);
		goto Label_116;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_116:
	var_125_bool = 0;
	func_904(var_125_bool);
	if(var_125_bool != 0) {

	Label_120:
		lshWaitForAnimEnd();
		var_126_string = var_3_string;
		if(var_126_string != 0) {
		} else {
			var_127_string = "";
			var_127_string = var_2_object;
			func_598(var_127_string);
			goto Label_120;
	}
		PlayAnimation("all", "idle");

	Label_135:
		WaitForAnimEnd();
		var_140_string = var_3_string;
		if(var_140_string != 0) {
			goto Label_145;
		}
		PlayAnimation("all", "idle");
		goto Label_135;
	}
	goto Label_145;
	
Label_145:
	return 0;
	
}


func_846(var_73_object, var_74_string, var_75_float)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_object = Obj(); var_80_bool = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0;
	GetMainOutdoorScene(var_83_object);
	var_85_bool = var_83_object == 0; //@ne
	if(var_85_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_83_object:GetLocator(var_74_string, var_84_bool, var_81_cvector, var_82_cvector);
	var_87_bool = var_84_bool == 0; //@nz
	if(var_87_bool != 0) {
		var_89_int = "Warning: outdoor scene locator " + var_74_string;
		var_91_int = var_89_int + " doesnt exist";
		Trace(var_91_int);
	}
	@@var_83_object:GetMap(var_73_object);
	var_92_bool = var_73_object == 0; //@ne
	if(var_92_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_94_float = GetByIndex(var_81_cvector, 0);
	var_95_float = GetByIndex(var_81_cvector, 2);
	@@var_73_object:SetMapParams(var_94_float, var_95_float, var_75_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_598(var_127_string)
{
	var_128_bool = 0; var_129_float = 0; var_130_float = 0; var_131_bool = 0; var_132_float = 0; var_133_float = 0;
	lshHasAnimation(var_131_bool, var_127_string);
	var_134_bool = var_131_bool;
	if(var_134_bool != 0) {
		lshGetAnimTimes(var_127_string, var_132_float, var_133_float);
		lshPlayAnimation(var_132_float, var_133_float, (bool)0);
	} else {
		var_137_int = "Can't find lsh animation : " + var_127_string;
		Trace(var_137_int);
	}
	return 6;
	
}


func_735(var_72_object)
{
	var_73_object = Obj(); var_74_string = ""; var_75_float = 0;
	func_829(Obj());
	var_76_object = var_73_object;
	func_846(var_73_object, "pt_gmap_factory", (float)2);
	var_96_object = Obj();
	func_829(var_96_object);
	@@var_72_object:ShowMap(var_96_object);
	return 0;
}


func_614(var_90_string, var_91_bool)
{
	var_94_bool = 0; var_95_float = 0; var_96_float = 0; var_97_bool = 0; var_98_float = 0; var_99_float = 0;
	lshHasAnimation(var_97_bool, var_90_string);
	var_100_bool = var_97_bool;
	if(var_100_bool != 0) {
		lshGetAnimTimes(var_90_string, var_98_float, var_99_float);
		lshPlayAnimation(var_98_float, var_99_float, var_91_bool);
	} else {
		var_102_int = "Can't find lsh animation : " + var_90_string;
		Trace(var_102_int);
	}
	return 6;
	
}


func_879(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x37e";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_751(var_105_bool)
{
	var_107_int = 0; var_108_string = "";
	func_652(var_107_int, "b9q01");
	var_112_bool = var_107_int == (int)2;
	if(var_112_bool != 0) {
		var_105_bool = 1;
		return 0;
	}
	var_105_bool = 0;
	return 0;
}


func_629()
{
	var_9_bool = 0;
	func_904(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_374(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0;
	var_0_object = true;
	IsLoaded(var_10_bool);
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_10_bool == 0; //@nz
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_423(var_13_bool);
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_14_object = Obj();
		func_636(var_14_object);
		RemoveActor(var_14_object);
	}
	return 2;
}


func_504(var_56_bool)
{
	var_56_bool = 1;
	return 0;
}


func_506(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
	return 2;
}


func_763(var_113_bool)
{
	var_115_int = 0; var_116_string = "";
	func_652(var_115_int, "oob9MDoberman1");
	var_118_bool = var_115_int == (int)0;
	if(var_118_bool != 0) {
		var_113_bool = 1;
		return 0;
	}
	var_113_bool = 0;
	return 0;
}


func_636(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_511(var_18_bool, var_19_object, var_20_float)
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
	func_642(var_45_cvector, var_46_cvector);
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
	func_904(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_574;
		LookAsyncCamera("head");
	}
Label_574:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


