// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,Trigger/2,GetGameTime/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Sly|W:Untrust|W:cleanup|W:restore|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:oob2MladVladFactory1|W:oob2MladVladFactory2|W:oob2MladVladFactory3|W:quest_b2_01|W:remove_mladvlad|W:branch|W:ui/NPC_MladVlad.png|W:ui/NPC_MladVlad_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1dd
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xba vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x1e1 vars=string
// @EVENT_6: op=0x1f5 vars=
// @EVENT_5: op=0x202 vars=
// @EVENT_7: op=0x24b vars=int
// @EVENT_45: op=0x28d vars=bool
// @EVENT_0: op=0x299 vars=object
// @PE: 0x51,0xa4,0xba,0x1d5,0x1dd,0x202,0x24b,0x271,0x28d,0x47a,0x480,0x486,0x48c,0x4b0,0x4bc,0x4c8

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1073();
		var_12_bool = var_8_bool == (int)21418;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1146();
			var_17_object = Obj(); var_18_object = Obj();
			var_17_object = var_1_object;
			var_18_object = var_0_object;
			func_1164();
		}
		var_42_bool = var_8_bool == (int)21423;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_1152();
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_1164();
		}
		var_50_bool = var_8_bool == (int)21431;
		if(var_50_bool != 0) {
			var_51_object = Obj(); var_52_object = Obj();
			var_51_object = var_1_object;
			var_52_object = var_0_object;
			func_1158();
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_object;
			func_1164();
		}
		var_58_bool = var_7_cvector == (int)21417;
		if(var_58_bool != 0) {
			var_59_string = "";
			func_164(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520225);
			@@@var_0_object:ClearReplies();
			var_77_bool = 0; var_78_object = Obj();
			var_78_object = var_1_object;
			func_1200(var_78_object);
			if(var_77_bool != 0) {
				@@@var_0_object:AddReply((int)520226, (int)21419, (int)21418);
			}
			var_86_bool = 0; var_87_object = Obj();
			var_87_object = var_1_object;
			func_1212(var_87_object);
			if(var_86_bool != 0) {
				@@@var_0_object:AddReply((int)520231, (int)21424, (int)21423);
			}
			var_95_bool = 0; var_96_object = Obj();
			var_96_object = var_1_object;
			func_1224(var_96_object);
			if(var_95_bool != 0) {
				@@@var_0_object:AddReply((int)520239, (int)21432, (int)21431);
			}
			@@@var_0_object:AddReply((int)520246, (int)-1, (int)21438);
			return 0;
		}
		var_108_bool = var_7_cvector == (int)21432;
		if(var_108_bool != 0) {
			var_109_string = "";
			func_164(var_8_bool, "Sly");
			@@@var_0_object:SetMessage((int)520240);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520241, (int)21434, (int)21433);
			return 0;
		}
		var_115_bool = var_7_cvector == (int)21434;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_164(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520242);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520243, (int)21436, (int)21435);
			@@@var_0_object:AddReply((int)530818, (int)32128, (int)32127);
			return 0;
		}
		var_125_bool = var_7_cvector == (int)32128;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_164(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530819);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530820, (int)21436, (int)32129);
			return 0;
		}
		var_132_bool = var_7_cvector == (int)21436;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_164(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520244);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520245, (int)-1, (int)21437);
			@@@var_0_object:AddReply((int)527839, (int)-1, (int)29182);
			return 0;
		}
		var_142_bool = var_7_cvector == (int)21424;
		if(var_142_bool != 0) {
			var_143_string = "";
			func_164(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520232);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520233, (int)21426, (int)21425);
			return 0;
		}
		var_149_bool = var_7_cvector == (int)21426;
		if(var_149_bool != 0) {
			var_150_string = "";
			func_164(var_8_bool, "Untrust");
			@@@var_0_object:SetMessage((int)520234);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520235, (int)21428, (int)21427);
			@@@var_0_object:AddReply((int)520238, (int)-1, (int)21430);
			return 0;
		}
		var_159_bool = var_7_cvector == (int)21428;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_164(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520236);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520237, (int)-1, (int)21429);
			return 0;
		}
		var_166_bool = var_7_cvector == (int)21419;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_164(var_8_bool, "Untrust");
			@@@var_0_object:SetMessage((int)520227);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520228, (int)21421, (int)21420);
			return 0;
		}
		var_173_bool = var_7_cvector == (int)21421;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_164(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520229);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520230, (int)-1, (int)21422);
			return 0;
		}
		var_3_string = true;
		var_179_bool = 0;
		func_1261(var_179_bool);
		if(var_179_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbb";
	
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0;
	var_11_bool = var_7_string == "cleanup";
	if(var_11_bool != 0) {
		var_1_object = true;
		IsLoaded(var_9_bool);
		var_12_bool = var_9_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_object = Obj();
			func_1080(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_500;
		var_1_object = false;
	}
Label_500:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1080(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_625();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_640();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_583();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_797(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_552(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_532(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1080(Obj());
				var_53_object = var_52_object;
				func_947(var_51_bool, var_52_object);
			}
		} else {
			func_547(var_7_int);
			func_574();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_574();
	} else {
		var_14_string = "";
		func_1027("Neutral");
	}
	return 0;
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	IsOverrideActive(var_9_bool);
	var_10_bool = var_9_bool == 0; //@nz
	if(var_10_bool != 0) {
		EventDisable(0);
		func_765();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_788(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_469(var_25_object);
		var_277_string = "";
		func_1027("Neutral");
		func_583();
		func_574();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_518(var_6_bool);
	return 0;
}


func_1152()
{
	SetVariable("oob2MladVladFactory2", (int)1);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_802(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_1255(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_1253(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_1257(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_1259(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_1236(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1080(Obj());
	var_100_object = var_99_object;
	func_889(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_268_bool = var_36_bool == 0; //@nz
	if(var_268_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_871();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_770(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_1027(var_252_string)
{
	var_253_bool = 0; var_254_float = 0; var_255_float = 0; var_256_bool = 0; var_257_float = 0; var_258_float = 0;
	lshHasAnimation(var_256_bool, var_252_string);
	var_259_bool = var_256_bool;
	if(var_259_bool != 0) {
		lshGetAnimTimes(var_252_string, var_257_float, var_258_float);
		lshPlayAnimation(var_257_float, var_258_float, (bool)0);
	} else {
		var_262_int = "Can't find lsh animation : " + var_252_string;
		Trace(var_262_int);
	}
	return 6;
	
}


func_640()
{
	StopGroup0();
	func_583();
	var_8_string = "";
	func_1027("Neutral");
	func_574();
	return 0;
}


func_1158()
{
	SetVariable("oob2MladVladFactory3", (int)1);
	return 0;
}


func_518(var_0_object)
{
	var_7_bool = 0;
	func_797(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_527:
	func_694();
	goto Label_527;
}
EMIT "Return(); Pop(0)";


func_778(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0;
	GetPosition(var_20_cvector);
	var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
	return 6;
}


func_1164()
{
	var_19_bool = 0;
	var_19_bool = 0;
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_int = 0; var_22_string = "";
	func_1096(var_21_int, "oob2MladVladFactory1");
	var_26_bool = var_21_int != (int)0;
	if(var_26_bool != 0) {
		var_27_int = 0; var_28_string = "";
		func_1096(var_27_int, "oob2MladVladFactory2");
		var_30_bool = var_27_int != (int)0;
		if(var_30_bool != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		var_31_int = 0; var_32_string = "";
		func_1096(var_31_int, "oob2MladVladFactory3");
		var_34_bool = var_31_int != (int)0;
		if(var_34_bool != 0) {
			var_19_bool = 1;
		}
	}
	if(var_19_bool != 0) {
		var_35_bool = 0; var_36_string = ""; var_37_string = "";
		func_1101(var_35_bool, "quest_b2_01", "remove_mladvlad");
	}
	return 0;
}


func_1043(var_204_string, var_205_bool)
{
	var_208_bool = 0; var_209_float = 0; var_210_float = 0; var_211_bool = 0; var_212_float = 0; var_213_float = 0;
	lshHasAnimation(var_211_bool, var_204_string);
	var_214_bool = var_211_bool;
	if(var_214_bool != 0) {
		lshGetAnimTimes(var_204_string, var_212_float, var_213_float);
		lshPlayAnimation(var_212_float, var_213_float, var_205_bool);
	} else {
		var_216_int = "Can't find lsh animation : " + var_204_string;
		Trace(var_216_int);
	}
	return 6;
	
}


func_788(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_778(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_532(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj();
	FindActor(var_34_object, "player");
	var_36_bool = var_34_object == 0; //@nz
	if(var_36_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	var_37_bool = 0; var_38_object = Obj();
	var_34_object = var_38_object;
	func_788(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_797(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_802(var_37_bool, var_38_object, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0;
	@@var_38_object:GetPosition(var_50_cvector);
	@@var_38_object:GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	var_58_float = var_58_float + var_49_float;
	SetByIndex(var_50_cvector, 1) = var_58_float;
	GetPosition(var_51_cvector);
	GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	var_59_float = var_59_float + var_49_float;
	SetByIndex(var_51_cvector, 1) = var_59_float;
	var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_61_int = var_52_cvector | var_52_cvector;
	var_62_float = sqrt(var_61_int);
	var_52_cvector = var_52_cvector / var_62_float;
	var_53_cvector = -var_52_cvector;
	var_63_float = var_52_cvector * var_39_float;
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	var_65_cvector = var_53_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1086(var_64_cvector, var_65_cvector);
	var_73_float = var_64_cvector * (int)25;
	var_74_int = var_63_float + var_73_float;
	var_54_cvector = var_74_int - CVector(0.0, 10.0, 0.0);
	var_55_cvector = var_51_cvector + var_54_cvector;
	IsOverrideActive(var_56_bool);
	var_76_bool = var_56_bool;
	if(var_76_bool != 0) {
		var_37_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_55_cvector, var_53_cvector, (bool)1);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	Rotate(var_78_float, var_79_float);
	var_80_bool = 0;
	func_1261(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_865;
		LookAsyncCamera("head");
	}
Label_865:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_547(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_164(var_2_object, var_200_string)
{
	var_201_bool = 0;
	func_1261(var_201_bool);
	var_202_bool = var_201_bool == 0; //@nz
	if(var_202_bool != 0) {
		return 0;
	}
	var_203_bool = var_200_string == var_2_object;
	if(var_203_bool != 0) {
		return 0;
	}
	var_204_string = ""; var_205_bool = 0;
	var_200_string = var_204_string;
	var_207_bool = var_200_string == "";
	if(var_207_bool != 0) {
		var_205_bool = 0;
	} else {
		var_205_bool = 1;
	}
	func_1043(var_204_string, var_205_bool);
	var_2_object = var_200_string;
	return 0;
	
}


func_1058(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_1261(var_136_bool);
	if(var_136_bool != 0) {
		lshHasSpeech(var_135_bool, var_133_string);
		var_137_bool = var_135_bool;
		if(var_137_bool != 0) {
			lshPlaySpeech(var_133_string);
			var_132_bool = 1;
			return 2;
		}
	}
	var_132_bool = 0;
	return 2;
}


func_552(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0;
	FindActor(var_18_object, "player");
	var_21_bool = var_18_object == 0; //@nz
	if(var_21_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	var_22_float = 0; var_23_object = Obj();
	var_18_object = var_23_object;
	func_770(var_22_float, var_23_object);
	var_31_bool = var_22_float > (float)90000.0;
	if(var_31_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	CanSee(var_19_bool, var_18_object);
	var_19_bool = var_15_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1200(var_218_bool)
{
	var_220_int = 0; var_221_string = "";
	func_1096(var_220_int, "oob2MladVladFactory1");
	var_225_bool = var_220_int == (int)0;
	if(var_225_bool != 0) {
		var_218_bool = 1;
		return 0;
	}
	var_218_bool = 0;
	return 0;
}


func_1073()
{
	var_10_bool = 0;
	func_1261(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_947(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_950:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_950;
		}
	}
	var_126_bool = var_117_int == 0; //@nz
	if(var_126_bool != 0) {
		var_109_bool = 0;
		return 10;
	}
	var_119_int = 0;
	var_128_bool = var_117_int > (int)1;
	if(var_128_bool != 0) {
		irand(var_119_int, var_117_int);
	}
	var_130_int = var_119_int + (int)1;
	var_131_int = var_116_string + var_130_int;
	@@var_110_object:GetProperty(var_131_int, var_120_string);
	var_132_bool = 0; var_133_string = "";
	var_120_string = var_133_string;
	func_1058(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_694()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_797(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1129((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_708:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_797(var_41_bool);
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_42_bool = var_17_int == 0; //@nz
		if(var_42_bool != 0) {
			Sleep((int)3, var_19_bool);
			var_44_bool = var_19_bool == 0; //@nz
			if(var_44_bool != 0) {
			} else {
		} else {
				irand(var_20_int, var_17_int);
				irand(var_21_int, (int)5);
				var_50_bool = var_21_int != (int)0;
				if(var_50_bool != 0) {
					var_20_int = 0;
				}
				var_52_string = ""; var_53_int = 0;
				var_20_int = var_53_int;
				func_1122(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_749;
				goto Label_760;
		}
		Label_749:
			var_45_bool = 0;
			func_763(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_760;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_708;

		}
	}
Label_760:
	ResetAAS();
	return 12;
	
}


func_1080(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1212(var_229_bool)
{
	var_231_int = 0; var_232_string = "";
	func_1096(var_231_int, "oob2MladVladFactory2");
	var_234_bool = var_231_int == (int)0;
	if(var_234_bool != 0) {
		var_229_bool = 1;
		return 0;
	}
	var_229_bool = 0;
	return 0;
}


func_574()
{
	var_279_float = 0; var_280_float = 0;
	rand(var_280_float, (int)8, (int)16);
	SetTimer((int)10, var_280_float);
	return 2;
}


func_1086(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0;
	var_69_int = var_65_cvector | var_65_cvector;
	var_68_float = sqrt(var_69_int);
	var_70_float = 9.999999974752427e-07;
	var_71_bool = var_68_float < var_70_float;
	if(var_71_bool != 0) {
		var_64_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_64_cvector = var_65_cvector / var_68_float;
	return 2;
}


func_583()
{
	KillTimer((int)10);
	return 0;
}


func_1224(var_238_bool)
{
	var_240_int = 0; var_241_string = "";
	func_1096(var_240_int, "oob2MladVladFactory3");
	var_243_bool = var_240_int == (int)0;
	if(var_243_bool != 0) {
		var_238_bool = 1;
		return 0;
	}
	var_238_bool = 0;
	return 0;
}


func_1096(var_220_int, var_221_string)
{
	var_222_int = 0; var_223_int = 0;
	GetVariable(var_221_string, var_223_int);
	var_223_int = var_220_int;
	return 2;
}


func_1101(var_35_bool, var_36_string, var_37_string)
{
	var_38_object = Obj(); var_39_object = Obj();
	FindActor(var_39_object, var_36_string);
	var_40_bool = var_39_object == 0; //@ne
	if(var_40_bool != 0) {
		var_35_bool = 0;
		return 2;
	}
	Trigger(var_39_object, var_37_string);
	var_35_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_string = "";
		func_164(var_194_object, "Neutral");
		@@@var_0_object:SetMessage((int)520225);
		@@@var_0_object:ClearReplies();
		var_218_bool = 0; var_219_object = Obj();
		var_219_object = var_1_object;
		func_1200(var_219_object);
		if(var_218_bool != 0) {
			@@@var_0_object:AddReply((int)520226, (int)21419, (int)21418);
		}
		var_229_bool = 0; var_230_object = Obj();
		var_230_object = var_1_object;
		func_1212(var_230_object);
		if(var_229_bool != 0) {
			@@@var_0_object:AddReply((int)520231, (int)21424, (int)21423);
		}
		var_238_bool = 0; var_239_object = Obj();
		var_239_object = var_1_object;
		func_1224(var_239_object);
		if(var_238_bool != 0) {
			@@@var_0_object:AddReply((int)520239, (int)21432, (int)21431);
		}
		@@@var_0_object:AddReply((int)520246, (int)-1, (int)21438);
		goto Label_134;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_134:
	var_250_bool = 0;
	func_1261(var_250_bool);
	if(var_250_bool != 0) {

	Label_138:
		lshWaitForAnimEnd();
		var_251_string = var_3_string;
		if(var_251_string != 0) {
		} else {
			var_252_string = "";
			var_252_string = var_2_object;
			func_1027(var_252_string);
			goto Label_138;
	}
		PlayAnimation("all", "idle");

	Label_153:
		WaitForAnimEnd();
		var_265_string = var_3_string;
		if(var_265_string != 0) {
			goto Label_163;
		}
		PlayAnimation("all", "idle");
		goto Label_153;
	}
	goto Label_163;
	
Label_163:
	return 0;
	
}


func_1236(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x4e3";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_469(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_984(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1113(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_993:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_993;
		}
	}
	var_166_bool = var_148_int == 0; //@nz
	if(var_166_bool != 0) {
		var_140_bool = 0;
		return 10;
	}
	var_150_int = 0;
	var_168_bool = var_148_int > (int)1;
	if(var_168_bool != 0) {
		irand(var_150_int, var_148_int);
	}
	var_170_int = var_150_int + (int)1;
	var_171_int = var_147_string + var_170_int;
	@@var_141_object:GetProperty(var_171_int, var_151_string);
	var_172_bool = 0; var_173_string = "";
	var_151_string = var_173_string;
	func_1058(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_1113(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_1122(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_1253(var_86_int)
{
	var_86_int = 515547;
	return 0;
}


func_1255(var_85_int)
{
	var_85_int = 502872;
	return 0;
}


func_871()
{
	var_270_bool = 0; var_271_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_273_bool = 0;
	func_1261(var_273_bool);
	if(var_273_bool != 0) {
	} else {
		HasAnimationTrack(var_271_bool, "head");
		var_275_bool = var_271_bool;
		if(var_275_bool == 0) goto Label_888;
		UnlookAsync("head");
	}
Label_888:
	return 2;
	
}


func_1257(var_87_string)
{
	var_87_string = "ui/NPC_MladVlad.png";
	return 0;
}


func_1129(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1131:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1122(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1131;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_1259(var_88_string)
{
	var_88_string = "ui/NPC_MladVlad_b.png";
	return 0;
}


func_1261(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_625()
{
	func_765();
	func_583();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_889(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_947(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_984(var_140_bool, var_141_object);
			var_175_bool = var_140_bool == 0; //@nz
			if(var_175_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		irand(var_106_int, (int)2);
		var_177_int = var_106_int;
		if(var_177_int != 0) {
			var_180_int = var_105_int + (int)1;
			var_182_int = var_180_int % (int)3;
			SetVariable("voice_common", var_182_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_185_bool = 0; var_186_object = Obj();
		var_99_object = var_186_object;
		func_984(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_947(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_945;
	
Label_945:
	var_98_bool = 1;
	return 4;
	
}


func_1146()
{
	SetVariable("oob2MladVladFactory1", (int)1);
	return 0;
}


func_763(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_765()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


