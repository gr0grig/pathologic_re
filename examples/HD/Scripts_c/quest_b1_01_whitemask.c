// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,GetGameTime/1,HasAnimation/3,SetVariable/2,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_wmask.png|W:ui/NPC_wmask_b.png|W:oob1WhiteMask1|W:b1BigVlad11Hours|W:pt_map_bigvlad|A:AddMark|W:Can't find main outdoor scene|A:GetMap|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x18b
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xcd vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x195 vars=object
// @EVENT_7: op=0x1ca vars=int
// @PE: 0x4a,0xb7,0xcd,0x195,0x1a0,0x1ca,0x1e1,0x318,0x32e,0x338,0x344

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_723();
		var_15_bool = var_10_bool == (int)21088;
		if(var_15_bool != 0) {
			var_16_bool = 0; var_17_object = Obj();
			var_17_object = var_1_object;
			func_824(var_17_object);
			if(var_16_bool != 0) {
				var_24_object = Obj(); var_25_object = Obj();
				var_24_object = var_1_object;
				var_25_object = var_0_object;
				func_792();
				var_28_string = "";
				func_183(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)519919);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)519920, (int)21090, (int)21089);
				@@@var_0_object:AddReply((int)519929, (int)21099, (int)21098);
				return 0;
			}
			var_52_bool = 0; var_53_object = Obj();
			var_53_object = var_1_object;
			func_814(var_52_bool, var_53_object);
			var_63_bool = var_52_bool == 0; //@nz
			if(var_63_bool != 0) {
				var_64_string = "";
				func_183(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)520031);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520032, (int)-1, (int)21216);
				return 0;
			}
			var_69_bool = 0; var_70_object = Obj();
			var_70_object = var_1_object;
			func_814(var_69_bool, var_70_object);
			if(var_69_bool != 0) {
				var_71_string = "";
				func_183(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)524628);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)524629, (int)-1, (int)25969);
				return 0;
			}
		}
		var_77_bool = var_10_bool == (int)21099;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_183(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)519930);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519931, (int)21090, (int)21100);
			@@@var_0_object:AddReply((int)519932, (int)21090, (int)21102);
			return 0;
		}
		var_87_bool = var_10_bool == (int)21090;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_798();
			var_106_string = "";
			func_183(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)519921);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519922, (int)21092, (int)21091);
			@@@var_0_object:AddReply((int)519928, (int)-1, (int)21097);
			return 0;
		}
		var_115_bool = var_10_bool == (int)21092;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_183(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)519923);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519924, (int)21094, (int)21093);
			@@@var_0_object:AddReply((int)519927, (int)-1, (int)21096);
			return 0;
		}
		var_125_bool = var_10_bool == (int)21094;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_183(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)519925);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519926, (int)-1, (int)21095);
			@@@var_0_object:AddReply((int)527022, (int)-1, (int)28306);
			return 0;
		}
		var_3_string = true;
		var_134_bool = 0;
		func_766(var_134_bool);
		if(var_134_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xce";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_481(var_9_object, var_10_object);
	var_14_int = 0; var_15_object = Obj();
	var_10_object = var_15_object;
	TaskCall(0);
	func_0(var_16_object, var_14_int, var_15_object);
	TaskReturn();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_12_bool = var_10_int == (int)10;
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_443(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_712(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_480;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_480:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_395:
	var_10_float = 0; var_11_float = 0;
	func_416(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
	Sleep((int)3);
	goto Label_395;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_594(var_25_bool, var_26_object, (float)70.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_760(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_758(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_762(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_764(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_864(var_77_int);
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
	var_171_bool = var_24_bool == 0; //@nz
	if(var_171_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_663();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_768(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = "";
	var_45_int = var_42_int;
	if(var_45_int != 0) {
		"idle" = "idle" + var_42_int;
	}
	var_44_string = var_41_string;
	return 2;
}


func_775(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0;
	var_38_int = 0;
	
Label_777:
	var_41_string = ""; var_42_int = 0;
	var_38_int = var_42_int;
	func_768(var_41_string, var_42_int);
	HasAnimation(var_39_bool, "all", var_41_string);
	var_46_bool = var_39_bool == 0; //@nz
	if(var_46_bool != 0) {
	} else {
		var_38_int = var_38_int + (int)1;
		goto Label_777;
	}
	var_38_int = var_35_int;
	return 4;
	
}


func_663()
{
	var_173_bool = 0; var_174_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_176_bool = 0;
	func_766(var_176_bool);
	if(var_176_bool != 0) {
	} else {
		HasAnimationTrack(var_174_bool, "head");
		var_178_bool = var_174_bool;
		if(var_178_bool == 0) goto Label_680;
		UnlookAsync("head");
	}
Label_680:
	return 2;
	
}


func_792()
{
	SetVariable("oob1WhiteMask1", (int)1);
	return 0;
}


func_798()
{
	var_90_object = Obj(); var_91_object = Obj();
	func_847(Obj());
	var_92_object = var_91_object;
	var_103_float = 0;
	func_745(var_103_float);
	@@var_91_object:AddMark("b1BigVlad11Hours", "pt_map_bigvlad", (int)3, (int)524625, var_103_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_416(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_10_float, var_11_float)
{
	var_12_bool = 0;
	func_589(var_12_bool);
	var_15_bool = var_12_bool == 0; //@nz
	if(var_15_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	SetTimer((int)10, (float)1.0);
	func_495();
	var_70_bool = var_3_string == 0; //@nz
	if(var_70_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_681(var_131_string)
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


func_814(var_147_bool, var_148_object)
{
	var_149_bool = 0; var_150_object = Obj();
	var_148_object = var_150_object;
	func_836(var_150_object);
	if(var_149_bool != 0) {
		var_147_bool = 1;
		return 0;
	}
	var_147_bool = 0;
	return 0;
}


func_183(var_2_object, var_105_string)
{
	var_106_bool = 0;
	func_766(var_106_bool);
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
	func_697(var_109_string, var_110_bool);
	var_2_object = var_105_string;
	return 0;
	
}


func_824(var_93_bool)
{
	var_95_int = 0; var_96_string = "";
	func_740(var_95_int, "oob1WhiteMask1");
	var_100_bool = var_95_int == (int)0;
	if(var_100_bool != 0) {
		var_93_bool = 1;
		return 0;
	}
	var_93_bool = 0;
	return 0;
}


func_697(var_109_string, var_110_bool)
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


func_443(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_581(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_574(var_60_bool)
{
	var_60_bool = 1;
	return 0;
}


func_576()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_836(var_149_bool)
{
	var_151_int = 0;
	func_750(var_151_int);
	var_157_bool = var_151_int >= (int)11;
	if(var_157_bool != 0) {
		var_149_bool = 1;
		return 0;
	}
	var_149_bool = 0;
	return 0;
}


func_581(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_712(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0);
	@@var_27_object:GetEyesHeight(var_30_float);
	var_31_cvector = CVector(0.0, 0.0, 0.0);
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	LookAsync(var_27_object, "head", var_31_cvector);
	return 4;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_bool = 0; var_94_object = Obj();
		var_94_object = var_1_object;
		func_824(var_94_object);
		if(var_93_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_792();
			var_105_string = "";
			func_183(var_87_object, "Neutral");
			@@@var_0_object:SetMessage((int)519919);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519920, (int)21090, (int)21089);
			@@@var_0_object:AddReply((int)519929, (int)21099, (int)21098);
		} else {
				var_147_bool = 0; var_148_object = Obj();
				var_148_object = var_1_object;
				func_814(var_147_bool, var_148_object);
				var_158_bool = var_147_bool == 0; //@nz
				if(var_158_bool != 0) {
					var_159_string = "";
					func_183(var_87_object, "Neutral");
					@@@var_0_object:SetMessage((int)520031);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)520032, (int)-1, (int)21216);
					goto Label_153;
				}
				var_164_bool = 0; var_165_object = Obj();
				var_165_object = var_1_object;
				func_814(var_164_bool, var_165_object);
				if(var_164_bool != 0) {
					var_166_string = "";
					func_183(var_87_object, "Neutral");
					@@@var_0_object:SetMessage((int)524628);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)524629, (int)-1, (int)25969);
					goto Label_153;
				}
				return 0;
		}
	}
Label_153:
	var_129_bool = 0;
	func_766(var_129_bool);
	if(var_129_bool != 0) {

	Label_157:
		lshWaitForAnimEnd();
		var_130_string = var_3_string;
		if(var_130_string != 0) {
		} else {
			var_131_string = "";
			var_131_string = var_2_object;
			func_681(var_131_string);
			goto Label_157;
	}
		PlayAnimation("all", "idle");

	Label_172:
		WaitForAnimEnd();
		var_144_string = var_3_string;
		if(var_144_string != 0) {
			goto Label_182;
		}
		PlayAnimation("all", "idle");
		goto Label_172;

	}
	goto Label_182;
	
Label_182:
	return 0;
	
}
EMIT "GOTO 0x4e";


func_589(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
	return 2;
}


func_847(var_92_object)
{
	var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj();
	GetMainOutdoorScene(var_95_object);
	var_97_bool = var_95_object == 0; //@ne
	if(var_97_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_96_object = 0;
		var_96_object = var_92_object;
		return 4;
	}
	@@var_95_object:GetMap(var_96_object);
	var_96_object = var_92_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_594(var_25_bool, var_26_object, var_27_float)
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
	func_730(var_52_cvector, var_53_cvector);
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
	func_766(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_657;
		LookAsyncCamera("head");
	}
Label_657:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_723()
{
	var_13_bool = 0;
	func_766(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_730(var_52_cvector, var_53_cvector)
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


func_864(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x36f";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_481(var_2_object, var_3_string)
{
	func_576();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_740(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0;
	GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
	return 2;
}


func_745(var_103_float)
{
	var_104_float = 0; var_105_float = 0;
	GetGameTime(var_105_float);
	var_105_float = var_103_float;
	return 2;
}


func_750(var_151_int)
{
	var_152_float = 0; var_153_float = 0;
	GetGameTime(var_153_float);
	var_154_int = 0;
	var_153_float = var_154_int;
	var_151_int = var_154_int % (int)24;
	return 2;
}


func_495()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0;
	WaitForAnimEnd();
	var_33_bool = 0;
	func_589(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		return 14;
	}
	func_775((int)0);
	var_35_int = var_26_int;
	var_27_int = 0;
	
Label_509:
	var_48_bool = 0;
	var_48_bool = 0;
	var_50_bool = var_27_int < (int)5;
	if(var_50_bool != 0) {
		var_51_bool = 0;
		func_589(var_51_bool);
		if(var_51_bool != 0) {
			var_48_bool = 1;
		}
	}
	if(var_48_bool != 0) {
		irand(var_28_int, (int)3);
		var_54_bool = var_28_int == (int)0;
		if(var_54_bool != 0) {
			var_55_int = var_26_int;
			if(var_55_int == 0) goto Label_542;
			irand(var_29_int, var_26_int);
			var_57_string = ""; var_58_int = 0;
			var_29_int = var_58_int;
			func_768(var_57_string, var_58_int);
			PlayAnimation("all", var_57_string);
			WaitForAnimEnd(var_30_bool);
			var_59_bool = var_30_bool == 0; //@nz
			if(var_59_bool != 0) {
			} else {
		} else {
				var_64_bool = var_28_int == (int)1;
				if(var_64_bool != 0) {
					rand(var_31_float, (int)4);
					var_67_int = var_31_float + (int)1;
					Sleep(var_67_int, var_32_bool);
					var_68_bool = var_32_bool == 0; //@nz
					if(var_68_bool != 0) {
						goto Label_571;
					}
					goto Label_560;
				}
				var_69_int = var_27_int;
				if(var_69_int == 0) goto Label_560;
				goto Label_571;
		}
		Label_560:
			var_60_bool = 0;
			func_574(var_60_bool);
			var_61_bool = var_60_bool == 0; //@nz
			if(var_61_bool != 0) {
				goto Label_571;
			}
			ResetAAS();
			var_27_int = var_27_int + (int)1;
			goto Label_509;

		}
	}
Label_571:
	ResetAAS();
	return 14;
	
}


func_758(var_74_int)
{
	var_74_int = 515569;
	return 0;
}


func_760(var_73_int)
{
	var_73_int = 503354;
	return 0;
}


func_762(var_75_string)
{
	var_75_string = "ui/NPC_wmask.png";
	return 0;
}


func_764(var_76_string)
{
	var_76_string = "ui/NPC_wmask_b.png";
	return 0;
}


func_766(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


