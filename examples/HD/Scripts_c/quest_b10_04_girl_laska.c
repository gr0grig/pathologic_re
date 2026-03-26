// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,GetGameTime/1,HasAnimation/3,SetVariable/2,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png|W:oob10GirlLaska1|W:b10q04GirlGotoKapella|W:pt_map_kapella|A:AddMark|A:ShowMap|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x107
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9f vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x10d vars=object
// @EVENT_26: op=0x13e vars=string
// @EVENT_6: op=0x146 vars=
// @EVENT_7: op=0x187 vars=int
// @PE: 0x4a,0x89,0x9f,0x10d,0x13e,0x15d,0x187,0x19e,0x2d3,0x2ed,0x2fd

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_656();
		var_17_bool = var_13_bool == (int)31810;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_723();
		}
		var_23_bool = var_13_bool == (int)31812;
		if(var_23_bool != 0) {
			var_24_object = Obj(); var_25_object = Obj();
			var_24_object = var_1_object;
			var_25_object = var_0_object;
			func_729();
			var_44_object = Obj(); var_45_object = Obj();
			var_44_object = var_1_object;
			var_45_object = var_0_object;
			func_749(var_45_object);
		}
		var_71_bool = var_13_bool == (int)32837;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_729();
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_749(var_75_object);
		}
		var_77_bool = var_12_bool == (int)31809;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_137(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530443);
			@@@var_0_object:ClearReplies();
			var_96_bool = 0; var_97_object = Obj();
			var_97_object = var_1_object;
			func_765(var_97_object);
			if(var_96_bool != 0) {
				@@@var_0_object:AddReply((int)530444, (int)31811, (int)31810);
			}
			@@@var_0_object:AddReply((int)530447, (int)-1, (int)31813);
			return 0;
		}
		var_111_bool = var_12_bool == (int)31811;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_137(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530446, (int)-1, (int)31812);
			@@@var_0_object:AddReply((int)531483, (int)-1, (int)32837);
			return 0;
		}
		var_3_string = true;
		var_120_bool = 0;
		func_721(var_120_bool);
		if(var_120_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa0";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_414(var_11_bool, var_12_object);
	var_16_int = 0; var_17_object = Obj();
	var_12_object = var_17_object;
	TaskCall(0);
	func_0(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_14_bool = var_12_string == "cleanup";
	if(var_14_bool != 0) {
		func_298(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_414(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_347(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_663(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_376(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_645(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_413;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_413:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_280(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_527(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_715(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_713(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_717(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_719(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_827(var_79_int);
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
	func_596();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_514(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_645(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0);
	@@var_29_object:GetEyesHeight(var_32_float);
	var_33_cvector = CVector(0.0, 0.0, 0.0);
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	LookAsync(var_29_object, "head", var_33_cvector);
	return 4;
}


func_137(var_2_object, var_95_string)
{
	var_96_bool = 0;
	func_721(var_96_bool);
	var_97_bool = var_96_bool == 0; //@nz
	if(var_97_bool != 0) {
		return 0;
	}
	var_98_bool = var_95_string == var_2_object;
	if(var_98_bool != 0) {
		return 0;
	}
	var_99_string = ""; var_100_bool = 0;
	var_95_string = var_99_string;
	var_102_bool = var_95_string == "";
	if(var_102_bool != 0) {
		var_100_bool = 0;
	} else {
		var_100_bool = 1;
	}
	func_630(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	return 0;
	
}


func_522(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_777(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj();
	GetMainOutdoorScene(var_33_object);
	var_35_bool = var_33_object == 0; //@ne
	if(var_35_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_34_object = 0;
		var_34_object = var_30_object;
		return 4;
	}
	@@var_33_object:GetMap(var_34_object);
	var_34_object = var_30_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_765(var_113_bool)
{
	var_115_int = 0; var_116_string = "";
	func_679(var_115_int, "oob10GirlLaska1");
	var_120_bool = var_115_int == (int)0;
	if(var_120_bool != 0) {
		var_113_bool = 1;
		return 0;
	}
	var_113_bool = 0;
	return 0;
}


func_527(var_27_bool, var_28_object, var_29_float)
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
	func_669(var_54_cvector, var_55_cvector);
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
	func_721(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_590;
		LookAsyncCamera("head");
	}
Label_590:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_656()
{
	var_15_bool = 0;
	func_721(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_663(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_280(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_282:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_349(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_282;
}
EMIT "Return(); Pop(4)";


func_794(var_46_object, var_47_string, var_48_float)
{
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_object = Obj(); var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_object = Obj(); var_57_bool = 0;
	GetMainOutdoorScene(var_56_object);
	var_58_bool = var_56_object == 0; //@ne
	if(var_58_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_56_object:GetLocator(var_47_string, var_57_bool, var_54_cvector, var_55_cvector);
	var_60_bool = var_57_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_62_int = "Warning: outdoor scene locator " + var_47_string;
		var_64_int = var_62_int + " doesnt exist";
		Trace(var_64_int);
	}
	@@var_56_object:GetMap(var_46_object);
	var_65_bool = var_46_object == 0; //@ne
	if(var_65_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_67_float = GetByIndex(var_54_cvector, 0);
	var_68_float = GetByIndex(var_54_cvector, 2);
	@@var_46_object:SetMapParams(var_67_float, var_68_float, var_48_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_669(var_54_cvector, var_55_cvector)
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


func_414(var_2_object, var_3_string)
{
	func_509();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_679(var_115_int, var_116_string)
{
	var_117_int = 0; var_118_int = 0;
	GetVariable(var_116_string, var_118_int);
	var_118_int = var_115_int;
	return 2;
}


func_298(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_522(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_347(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_663(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_428()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_522(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_696((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_442:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_522(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_475;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_689(var_68_string, var_69_int);
			PlayAnimation("all", var_68_string);
			WaitForAnimEnd(var_41_bool);
			var_70_bool = var_41_bool == 0; //@nz
			if(var_70_bool != 0) {
			} else {
		} else {
				var_75_bool = var_39_int == (int)1;
				if(var_75_bool != 0) {
					rand(var_42_float, (int)4);
					var_78_int = var_42_float + (int)1;
					Sleep(var_78_int, var_43_bool);
					var_79_bool = var_43_bool == 0; //@nz
					if(var_79_bool != 0) {
						goto Label_504;
					}
					goto Label_493;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_493;
				goto Label_504;
		}
		Label_493:
			var_71_bool = 0;
			func_507(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_504;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_442;

		}
	}
Label_504:
	ResetAAS();
	return 14;
	
}


func_684(var_41_float)
{
	var_42_float = 0; var_43_float = 0;
	GetGameTime(var_43_float);
	var_43_float = var_41_float;
	return 2;
}


func_689(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_696(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_698:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_689(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_698;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_827(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x34a";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_713(var_76_int)
{
	var_76_int = 515559;
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_string = "";
		func_137(var_89_object, "Neutral");
		@@@var_0_object:SetMessage((int)530443);
		@@@var_0_object:ClearReplies();
		var_113_bool = 0; var_114_object = Obj();
		var_114_object = var_1_object;
		func_765(var_114_object);
		if(var_113_bool != 0) {
			@@@var_0_object:AddReply((int)530444, (int)31811, (int)31810);
		}
		@@@var_0_object:AddReply((int)530447, (int)-1, (int)31813);
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	var_127_bool = 0;
	func_721(var_127_bool);
	if(var_127_bool != 0) {

	Label_111:
		lshWaitForAnimEnd();
		var_128_string = var_3_string;
		if(var_128_string != 0) {
		} else {
			var_129_string = "";
			var_129_string = var_2_object;
			func_614(var_129_string);
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


func_715(var_75_int)
{
	var_75_int = 503344;
	return 0;
}


func_717(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_719(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_721(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_723()
{
	SetVariable("oob10GirlLaska1", (int)1);
	return 0;
}


func_596()
{
	var_147_bool = 0; var_148_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_150_bool = 0;
	func_721(var_150_bool);
	if(var_150_bool != 0) {
	} else {
		HasAnimationTrack(var_148_bool, "head");
		var_152_bool = var_148_bool;
		if(var_152_bool == 0) goto Label_613;
		UnlookAsync("head");
	}
Label_613:
	return 2;
	
}


func_729()
{
	var_26_object = Obj(); var_27_object = Obj();
	SetVariable("b10q04GirlGotoKapella", (int)1);
	func_777(Obj());
	var_30_object = var_27_object;
	var_41_float = 0;
	func_684(var_41_float);
	@@var_27_object:AddMark("b10q04GirlGotoKapella", "pt_map_kapella", (int)0, (int)530490, var_41_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_347(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_349(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_522(var_23_bool);
	var_26_bool = var_23_bool == 0; //@nz
	if(var_26_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	SetTimer((int)10, (float)1.0);
	func_428();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_614(var_129_string)
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


func_749(var_45_object)
{
	var_46_object = Obj(); var_47_string = ""; var_48_float = 0;
	func_777(Obj());
	var_49_object = var_46_object;
	func_794(var_46_object, "pt_map_kapella", (float)2);
	var_69_object = Obj();
	func_777(var_69_object);
	@@var_45_object:ShowMap(var_69_object);
	return 0;
}


func_630(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0;
	lshHasAnimation(var_106_bool, var_99_string);
	var_109_bool = var_106_bool;
	if(var_109_bool != 0) {
		lshGetAnimTimes(var_99_string, var_107_float, var_108_float);
		lshPlayAnimation(var_107_float, var_108_float, var_100_bool);
	} else {
		var_111_int = "Can't find lsh animation : " + var_99_string;
		Trace(var_111_int);
	}
	return 6;
	
}


func_376(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_514(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_507(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_509()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


