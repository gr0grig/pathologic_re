// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,rand/2,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,self/1,GetVariable/2,GetGameTime/1,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |W:b7q01|W:b7q01WastedGotoViktor|W:pt_map_viktor|A:AddMark|W:oob7WastedMaleM1|A:ShowMap|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1c4
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb8 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x1b9 vars=object
// @EVENT_26: op=0x1ed vars=string
// @EVENT_5: op=0x1f5 vars=
// @EVENT_6: op=0x1fa vars=
// @PE: 0x4a,0xa2,0xb8,0x1b9,0x1ed,0x32d,0x333,0x343,0x34f

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_733();
		var_11_bool = var_7_bool == (int)22211;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_790();
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_object;
			func_819(var_56_object);
		}
		var_82_bool = var_7_bool == (int)22213;
		if(var_82_bool != 0) {
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_813();
		}
		var_88_bool = var_6_int == (int)22210;
		if(var_88_bool != 0) {
			var_89_bool = 0; var_90_object = Obj();
			var_90_object = var_1_object;
			func_847(var_90_object);
			if(var_89_bool != 0) {
				var_97_string = "";
				func_162(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)520997);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)524092, (int)25396, (int)25395);
				@@@var_0_object:AddReply((int)524096, (int)25405, (int)25399);
				return 0;
			}
			var_121_string = "";
			func_162(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520999);
			@@@var_0_object:ClearReplies();
			var_123_bool = 0; var_124_object = Obj();
			var_124_object = var_1_object;
			func_835(var_124_object);
			if(var_123_bool != 0) {
				@@@var_0_object:AddReply((int)521000, (int)29872, (int)22213);
			}
			@@@var_0_object:AddReply((int)528488, (int)-1, (int)29877);
			return 0;
		}
		var_136_bool = var_6_int == (int)29872;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_162(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528483);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528484, (int)29874, (int)29873);
			return 0;
		}
		var_143_bool = var_6_int == (int)29874;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_162(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528485);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528486, (int)-1, (int)29875);
			@@@var_0_object:AddReply((int)528487, (int)-1, (int)29876);
			return 0;
		}
		var_153_bool = var_6_int == (int)25405;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_162(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524102);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524103, (int)25401, (int)25406);
			return 0;
		}
		var_160_bool = var_6_int == (int)25396;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_162(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524093);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524094, (int)25398, (int)25397);
			@@@var_0_object:AddReply((int)524101, (int)25401, (int)25404);
			return 0;
		}
		var_170_bool = var_6_int == (int)25398;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_162(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524095);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524097, (int)25401, (int)25400);
			@@@var_0_object:AddReply((int)524104, (int)25408, (int)25407);
			return 0;
		}
		var_180_bool = var_6_int == (int)25408;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_162(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524105);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524106, (int)25403, (int)25411);
			@@@var_0_object:AddReply((int)524107, (int)25401, (int)25412);
			return 0;
		}
		var_190_bool = var_6_int == (int)25401;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_162(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524098);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524099, (int)25403, (int)25402);
			return 0;
		}
		var_197_bool = var_6_int == (int)25403;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_162(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524100);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520998, (int)-1, (int)22211);
			return 0;
		}
		var_3_string = true;
		var_203_bool = 0;
		func_988(var_203_bool);
		if(var_203_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb9";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_605();
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
		func_473(var_6_string);
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
		func_522(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_740(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0;
	
Label_453:
	var_8_bool = 0;
	func_610(var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool != 0) {
		Hold();
		goto Label_453;
	}
	rand(var_7_float, (int)3);
	var_14_int = var_7_float + (int)3;
	Sleep(var_14_int);
	func_524();
	goto Label_453;
}
EMIT "Return(); Pop(2)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_615(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_982(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_980(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_984(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_986(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_963(var_70_int);
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
	var_150_bool = var_17_bool == 0; //@nz
	if(var_150_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_56;
	}
	var_8_object = Obj();
	func_684();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_773(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0;
	var_34_int = 0;
	
Label_775:
	var_37_string = ""; var_38_int = 0;
	var_34_int = var_38_int;
	func_766(var_37_string, var_38_int);
	HasAnimation(var_35_bool, "all", var_37_string);
	var_42_bool = var_35_bool == 0; //@nz
	if(var_42_bool != 0) {
	} else {
		var_34_int = var_34_int + (int)1;
		goto Label_775;
	}
	var_34_int = var_31_int;
	return 4;
	
}


func_522(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_524()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0;
	WaitForAnimEnd();
	var_29_bool = 0;
	func_610(var_29_bool);
	var_30_bool = var_29_bool == 0; //@nz
	if(var_30_bool != 0) {
		return 14;
	}
	func_773((int)0);
	var_31_int = var_22_int;
	var_23_int = 0;
	
Label_538:
	var_44_bool = 0;
	var_44_bool = 0;
	var_46_bool = var_23_int < (int)5;
	if(var_46_bool != 0) {
		var_47_bool = 0;
		func_610(var_47_bool);
		if(var_47_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		irand(var_24_int, (int)3);
		var_50_bool = var_24_int == (int)0;
		if(var_50_bool != 0) {
			var_51_int = var_22_int;
			if(var_51_int == 0) goto Label_571;
			irand(var_25_int, var_22_int);
			var_53_string = ""; var_54_int = 0;
			var_25_int = var_54_int;
			func_766(var_53_string, var_54_int);
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
						goto Label_600;
					}
					goto Label_589;
				}
				var_65_int = var_23_int;
				if(var_65_int == 0) goto Label_589;
				goto Label_600;
		}
		Label_589:
			var_56_bool = 0;
			func_603(var_56_bool);
			var_57_bool = var_56_bool == 0; //@nz
			if(var_57_bool != 0) {
				goto Label_600;
			}
			ResetAAS();
			var_23_int = var_23_int + (int)1;
			goto Label_538;

		}
	}
Label_600:
	ResetAAS();
	return 14;
	
}


func_913(var_18_object)
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


func_790()
{
	var_14_object = Obj(); var_15_object = Obj();
	SetVariable("b7q01", (int)5);
	func_913(Obj());
	var_18_object = var_15_object;
	var_29_float = 0;
	func_761(var_29_float);
	@@var_15_object:AddMark("b7q01WastedGotoViktor", "pt_map_viktor", (int)1, (int)521026, var_29_float);
	func_859();
	return 2;
}
EMIT "Stack[-1] = 0";


func_162(var_2_object, var_94_string)
{
	var_95_bool = 0;
	func_988(var_95_bool);
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
	func_718(var_98_string, var_99_bool);
	var_2_object = var_94_string;
	return 0;
	
}


func_930(var_57_object, var_58_string, var_59_float)
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


func_684()
{
	var_152_bool = 0; var_153_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_155_bool = 0;
	func_988(var_155_bool);
	if(var_155_bool != 0) {
	} else {
		HasAnimationTrack(var_153_bool, "head");
		var_157_bool = var_153_bool;
		if(var_157_bool == 0) goto Label_701;
		UnlookAsync("head");
	}
Label_701:
	return 2;
	
}


func_813()
{
	SetVariable("oob7WastedMaleM1", (int)1);
	return 0;
}


func_819(var_56_object)
{
	var_57_object = Obj(); var_58_string = ""; var_59_float = 0;
	func_913(Obj());
	var_60_object = var_57_object;
	func_930(var_57_object, "pt_map_viktor", (float)2);
	var_80_object = Obj();
	func_913(var_80_object);
	@@var_56_object:ShowMap(var_80_object);
	return 0;
}


func_702(var_120_string)
{
	var_121_bool = 0; var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_float = 0; var_126_float = 0;
	lshHasAnimation(var_124_bool, var_120_string);
	var_127_bool = var_124_bool;
	if(var_127_bool != 0) {
		lshGetAnimTimes(var_120_string, var_125_float, var_126_float);
		lshPlayAnimation(var_125_float, var_126_float, (bool)0);
	} else {
		var_130_int = "Can't find lsh animation : " + var_120_string;
		Trace(var_130_int);
	}
	return 6;
	
}


func_963(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x3d2";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_835(var_138_bool)
{
	var_140_int = 0; var_141_string = "";
	func_756(var_140_int, "oob7WastedMaleM1");
	var_143_bool = var_140_int == (int)0;
	if(var_143_bool != 0) {
		var_138_bool = 1;
		return 0;
	}
	var_138_bool = 0;
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_86_bool = 0; var_87_object = Obj();
		var_87_object = var_1_object;
		func_847(var_87_object);
		if(var_86_bool != 0) {
			var_94_string = "";
			func_162(var_80_object, "Neutral");
			@@@var_0_object:SetMessage((int)520997);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524092, (int)25396, (int)25395);
			@@@var_0_object:AddReply((int)524096, (int)25405, (int)25399);
		} else {
				var_136_string = "";
				func_162(var_80_object, "Neutral");
				@@@var_0_object:SetMessage((int)520999);
				@@@var_0_object:ClearReplies();
				var_138_bool = 0; var_139_object = Obj();
				var_139_object = var_1_object;
				func_835(var_139_object);
				if(var_138_bool != 0) {
					@@@var_0_object:AddReply((int)521000, (int)29872, (int)22213);
				}
				@@@var_0_object:AddReply((int)528488, (int)-1, (int)29877);
				goto Label_132;
		}
	}
Label_132:
	var_118_bool = 0;
	func_988(var_118_bool);
	if(var_118_bool != 0) {

	Label_136:
		lshWaitForAnimEnd();
		var_119_string = var_3_string;
		if(var_119_string != 0) {
		} else {
			var_120_string = "";
			var_120_string = var_2_object;
			func_702(var_120_string);
			goto Label_136;
	}
		PlayAnimation("all", "idle");

	Label_151:
		WaitForAnimEnd();
		var_133_string = var_3_string;
		if(var_133_string != 0) {
			goto Label_161;
		}
		PlayAnimation("all", "idle");
		goto Label_151;

	}
	goto Label_161;
	
Label_161:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_718(var_98_string, var_99_bool)
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


func_847(var_86_bool)
{
	var_88_int = 0; var_89_string = "";
	func_756(var_88_int, "b7q01");
	var_93_bool = var_88_int == (int)4;
	if(var_93_bool != 0) {
		var_86_bool = 1;
		return 0;
	}
	var_86_bool = 0;
	return 0;
}


func_980(var_67_int)
{
	var_67_int = 515556;
	return 0;
}


func_982(var_66_int)
{
	var_66_int = 503341;
	return 0;
}


func_984(var_68_string)
{
	var_68_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_473(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0;
	var_0_object = true;
	IsLoaded(var_10_bool);
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_10_bool == 0; //@nz
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_522(var_13_bool);
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_14_object = Obj();
		func_740(var_14_object);
		RemoveActor(var_14_object);
	}
	return 2;
}


func_986(var_69_string)
{
	var_69_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_603(var_56_bool)
{
	var_56_bool = 1;
	return 0;
}


func_988(var_61_bool)
{
	var_61_bool = 0;
	return 0;
}


func_605()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_733()
{
	var_9_bool = 0;
	func_988(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_859()
{
	var_32_object = Obj(); var_33_object = Obj();
	CreateDiaryEntry(var_33_object, (int)258, (int)1, (int)521030);
	var_37_bool = 0; var_38_object = Obj(); var_39_int = 0;
	var_33_object = var_38_object;
	func_885(var_37_bool, var_38_object, (int)253);
	return 2;
}
EMIT "Stack[-1] = 0";


func_610(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
	return 2;
}


func_740(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_615(var_18_bool, var_19_object, var_20_float)
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
	func_746(var_45_cvector, var_46_cvector);
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
	func_988(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_678;
		LookAsyncCamera("head");
	}
Label_678:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_872(var_46_object)
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


func_746(var_45_cvector, var_46_cvector)
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


func_756(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
	return 2;
}


func_885(var_37_bool, var_38_object, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0;
	func_872(Obj());
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


func_761(var_29_float)
{
	var_30_float = 0; var_31_float = 0;
	GetGameTime(var_31_float);
	var_31_float = var_29_float;
	return 2;
}


func_766(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = "";
	var_41_int = var_38_int;
	if(var_41_int != 0) {
		"idle" = "idle" + var_38_int;
	}
	var_40_string = var_37_string;
	return 2;
}


