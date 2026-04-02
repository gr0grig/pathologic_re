// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_980();
			if(var_8_bool == 25990) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1058();
				object var_70_object = var_1_object;
				func_1089(var_0_object);
			}
			if(var_7_cvector == 25978) {
				bool var_98_bool;
				func_1105(var_1_object);
				if(var_98_bool != 0) {
					func_169(var_8_bool, "Neutral");
					var_0_object->SetMessage(524639); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524640, 27569, 25979); //@t
					var_0_object->AddReply(526284, 27569, 27562); //@t
					return 0;
				}
				func_169(var_8_bool, "Neutral");
				var_0_object->SetMessage(524641); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524642, 27563, 25981); //@t
				var_0_object->AddReply(526287, 27567, 27565); //@t
				var_0_object->AddReply(526288, -1, 27566); //@t
				return 0;
			}
			if(var_7_cvector == 27567) {
				func_169(var_8_bool, "Neutral");
				var_0_object->SetMessage(526289); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526290, -1, 27568); //@t
				return 0;
			}
			if(var_7_cvector == 27563) {
				func_169(var_8_bool, "Suffering");
				var_0_object->SetMessage(526285); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526286, -1, 27564); //@t
				var_0_object->AddReply(541700, -1, 43882); //@t
				return 0;
			}
			if(var_7_cvector == 27569) {
				func_169(var_8_bool, "Penetrating");
				var_0_object->SetMessage(526291); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526292, 25989, 27570); //@t
				var_0_object->AddReply(526293, 25989, 27572); //@t
				return 0;
			}
			if(var_7_cvector == 25989) {
				func_169(var_8_bool, "Neutral");
				var_0_object->SetMessage(524650); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526296, 27577, 27576); //@t
				return 0;
			}
			if(var_7_cvector == 27577) {
				func_169(var_8_bool, "Suffering");
				var_0_object->SetMessage(526297); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524651, -1, 25990); //@t
				return 0;
			}
			var_3_string = true;
			bool var_182_bool;
			func_1259(var_182_bool);
			if(var_182_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc0";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_425(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_987(var_13_object);
				@RemoveActor(var_13_object);
			}
		} else if(var_7_string == "restore") {
			var_1_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		if(var_1_object != 0) {
			object var_8_object;
			func_987(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_532();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_547();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_490();
			bool var_11_bool = false;
			bool var_12_bool;
			func_704(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_459(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_439(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_987(var_53_object);
					var_53_object = var_52_object;
					func_854(var_51_bool, var_52_object);
				}
			} else {
				func_454(var_7_int);
				func_481();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_481();
		else
			func_934("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_672();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_695(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_376(var_25_object);
			func_934("Neutral");
			func_490();
			func_481();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_709(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1253(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1251(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1255(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1257(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1234(var_89_int);
	var_33_object->SetPlayerName(var_89_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	bool var_98_bool; object var_99_object;
	object var_100_object;
	func_987(var_100_object);
	var_100_object = var_99_object;
	func_796(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_261_bool = !var_36_bool; //@nz
		if(var_261_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_262_object;
	var_27_object = var_262_object;
	func_778();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1025(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


void func_1156(bool var_38_bool, object var_39_object, int var_40_int)
{
	object var_47_object;
	func_1143(var_47_object);
	object var_44_object;
	var_47_object = var_44_object;
	object var_45_object;
	var_44_object->Find(var_40_int, var_45_object);
	if(!var_45_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_40_int);
		var_38_bool = false;
	}
	var_45_object->AddChild(var_39_object);
	@SendWorldWndMessage(7);
	int var_46_int;
	var_39_object->GetCategory(var_46_int);
	@SetDiarySection(var_46_int);
	var_38_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_778(void)
{
	bool var_264_bool;
	@CameraSwitchToNormal(true);
	bool var_266_bool;
	func_1259(var_266_bool);
	if(var_266_bool != 0) {
	} else {
		@HasAnimationTrack(var_264_bool, "head");
		if(var_264_bool == 0) goto Label_795;
		@UnlookAsync("head");
	}
Label_795:
	
}


void func_1034(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_1041(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1034(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


// @pe
void func_532(void)
{
	func_672();
	func_490();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_796(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_854(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_891(var_140_bool, var_141_object);
			if(!var_140_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@irand(var_106_int, 2);
		if(var_106_int != 0)
			@SetVariable("voice_common", ((var_105_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_185_bool; object var_186_object;
		var_99_object = var_186_object;
		func_891(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_854(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_852;
	
Label_852:
	var_98_bool = true;
	
}


void func_670(bool var_45_bool)
{
	var_45_bool = true;
}


void func_672(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1184(object var_19_object)
{
	object var_22_object; object var_23_object;
	@GetMainOutdoorScene(var_22_object);
	if(var_22_object == null) {
		@Trace("Can't find main outdoor scene");
		var_23_object = null;
		var_23_object = var_19_object;
	}
	var_22_object->GetMap(var_23_object);
	var_23_object = var_19_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1058(void)
{
	@SetVariable("k1q01", 1);
	object var_19_object;
	func_1184(var_19_object);
	object var_16_object;
	var_19_object = var_16_object;
	float var_30_float;
	func_1020(var_30_float);
	var_16_object->AddMark("k1q01KaterinaGotoAlexandr", "pt_map_alexandr", 1, 524727, var_30_float);
	func_1117();
	func_1130();
	bool var_64_bool;
	func_1008(var_64_bool, "quest_k1_01", "remove_katerina");
}
EMIT "Stack[-1] = 0";


void func_547(void)
{
	@StopGroup0();
	func_490();
	func_934("Neutral");
	func_481();
}


void func_677(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_934(string var_234_string)
{
	bool var_238_bool; float var_239_float; float var_240_float;
	@lshHasAnimation(var_238_bool, var_234_string);
	if(var_238_bool != 0) {
		@lshGetAnimTimes(var_234_string, var_239_float, var_240_float);
		@lshPlayAnimation(var_239_float, var_240_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_234_string);
	}
	
}


// @pe
void func_169(object var_2_object, string var_208_string)
{
	bool var_209_bool;
	func_1259(var_209_bool);
	if(!var_209_bool) //@nz
		return 0;
	if(var_208_string == var_2_object)
		return 0;
	string var_212_string; bool var_213_bool;
	var_208_string = var_212_string;
	if(var_208_string == "")
		var_213_bool = false;
	else
		var_213_bool = true;
	func_950(var_212_string, var_213_bool);
	var_2_object = var_208_string;
	
}


void func_425(object var_0_object)
{
	bool var_7_bool;
	func_704(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_601();
	}
}
EMIT "Return(); Pop(0)";


void func_685(bool var_15_bool, cvector var_16_cvector)
{
	cvector var_20_cvector;
	@GetPosition(var_20_cvector);
	cvector var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	bool var_22_bool;
	@Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
}


void func_1201(object var_72_object, string var_73_string, float var_74_float)
{
	object var_82_object;
	@GetMainOutdoorScene(var_82_object);
	if(var_82_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_80_cvector;
	cvector var_81_cvector;
	bool var_83_bool;
	var_82_object->GetLocator(var_73_string, var_83_bool, var_80_cvector, var_81_cvector);
	if(!var_83_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_73_string) + " doesnt exist");
	var_82_object->GetMap(var_72_object);
	if(var_72_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_93_float = GetByIndex(var_80_cvector, 0);
	var_94_float = GetByIndex(var_80_cvector, 2);
	var_72_object->SetMapParams(var_93_float, var_94_float, var_74_float);
}
EMIT "Stack[-2] = 0";


void func_950(string var_212_string, bool var_213_bool)
{
	bool var_219_bool; float var_220_float; float var_221_float;
	@lshHasAnimation(var_219_bool, var_212_string);
	if(var_219_bool != 0) {
		@lshGetAnimTimes(var_212_string, var_220_float, var_221_float);
		@lshPlayAnimation(var_220_float, var_221_float, var_213_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_212_string);
	}
	
}


void func_695(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_685(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_439(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_695(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_704(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


// @pe
void func_1089(object var_71_object)
{
	object var_75_object;
	func_1184(var_75_object);
	object var_72_object;
	var_75_object = var_72_object;
	func_1201(var_72_object, "pt_map_alexandr", (float)2);
	object var_95_object;
	func_1184(var_95_object);
	var_71_object->ShowMap(var_95_object);
}


void func_709(bool var_37_bool, object var_38_object, float var_39_float)
{
	cvector var_50_cvector; bool var_57_bool;
	var_38_object->GetPosition(var_50_cvector);
	float var_49_float;
	var_38_object->GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (var_58_float + var_49_float);
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	@GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (var_59_float + var_49_float);
	cvector var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_62_float = sqrt(var_52_cvector | var_52_cvector);
	var_52_cvector /= var_62_float;
	cvector var_53_cvector = -var_52_cvector;
	cvector var_64_cvector;
	func_993(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_54_cvector = ((var_52_cvector * var_39_float) + (var_64_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_56_bool;
	@IsOverrideActive(var_56_bool);
	if(var_56_bool != 0)
		var_37_bool = false;
	@StopWorld();
	@CameraTransit((var_51_cvector + var_54_cvector), var_53_cvector, true);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	@Rotate(var_78_float, var_79_float);
	bool var_80_bool;
	func_1259(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_772;
		@LookAsyncCamera("head");
	}
Label_772:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_454(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_965(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1259(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_459(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_677(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool;
		func_1105(var_193_object);
		if(var_200_bool != 0) {
			func_169(var_194_object, "Neutral");
			var_0_object->SetMessage(524639); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(524640, 27569, 25979); //@t
			var_0_object->AddReply(526284, 27569, 27562); //@t
		} else {
					func_169(var_194_object, "Neutral");
					var_0_object->SetMessage(524641); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524642, 27563, 25981); //@t
					var_0_object->AddReply(526287, 27567, 27565); //@t
					var_0_object->AddReply(526288, -1, 27566); //@t
		}
	}
	for(;;) {
		bool var_232_bool;
		func_1259(var_232_bool);
		if(var_232_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_934(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_168;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_168:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_1234(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x4e1";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


// @pe
void func_1105(bool var_200_bool)
{
	int var_202_int;
	func_1003(var_202_int, "k1q01");
	if(var_202_int == 0) {
		var_200_bool = true;
		return 0;
	}
	var_200_bool = false;
}


void func_980(void)
{
	bool var_10_bool;
	func_1259(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_854(bool var_109_bool, object var_110_object)
{
	string var_116_string; bool var_118_bool; int var_119_int; string var_120_string;
	var_116_string = "c";
	int var_117_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_110_object->HasProperty((var_116_string + (var_117_int + 1)), var_118_bool);
			if(!var_118_bool) { //@nz
			} else {
				var_117_int += 1;
			}
		}
		if(!var_117_int) { //@nz
			var_109_bool = false;
			return 10;
		}
		var_119_int = 0;
		if(var_117_int > 1)
			@irand(var_119_int, var_117_int);
		var_110_object->GetProperty((var_116_string + (var_119_int + 1)), var_120_string);
		bool var_132_bool; string var_133_string;
		var_120_string = var_133_string;
		func_965(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_601(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_704(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1041(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_704(var_41_bool);
			if(var_41_bool != 0)
				var_38_bool = true;
		}
		if(var_38_bool != 0) {
			if(!var_17_int) { //@nz
				@Sleep(3, var_19_bool);
				if(!var_19_bool) { //@nz
				} else {
			} else {
			@irand(var_20_int, var_17_int);
			@irand(var_21_int, 5);
			if(var_21_int != 0)
				var_20_int = 0;
			string var_52_string; int var_53_int;
			var_20_int = var_53_int;
			func_1034(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_656;
			goto Label_667;
			}
				Label_656:
					bool var_45_bool;
					func_670(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_662;
			}
		}
	Label_667:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_662:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_987(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_1117(void)
{
	object var_34_object;
	@CreateDiaryEntry(var_34_object, 318, 1, 524734);
	bool var_38_bool; object var_39_object;
	var_34_object = var_39_object;
	func_1156(var_38_bool, var_39_object, -1);
}
EMIT "Stack[-1] = 0";


void func_481(void)
{
	float var_273_float;
	@rand(var_273_float, 8, 16);
	@SetTimer(10, var_273_float);
}


void func_993(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


void func_1251(int var_86_int)
{
	var_86_int = 515539;
}


void func_1253(int var_85_int)
{
	var_85_int = 502864;
}


void func_1255(string var_87_string)
{
	var_87_string = "ui/NPC_Katerina.png";
}


void func_1257(string var_88_string)
{
	var_88_string = "ui/NPC_Katerina_b.png";
}


void func_490(void)
{
	@KillTimer(10);
}


void func_1259(bool var_80_bool)
{
	var_80_bool = true;
}


void func_1130(void)
{
	object var_57_object;
	@CreateDiaryEntry(var_57_object, 319, 1, 524735);
	bool var_61_bool; object var_62_object;
	var_57_object = var_62_object;
	func_1156(var_61_bool, var_62_object, 318);
}
EMIT "Stack[-1] = 0";


void func_1003(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


void func_1008(bool var_64_bool, string var_65_string, string var_66_string)
{
	object var_68_object;
	@FindActor(var_68_object, var_65_string);
	if(var_68_object == null)
		var_64_bool = false;
	@Trigger(var_68_object, var_66_string);
	var_64_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1143(object var_47_object)
{
	object var_49_object;
	@GetDiaryRoot(var_49_object);
	if(!var_49_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_47_object = false;
	}
	var_49_object = var_47_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_376(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_891(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1025(var_153_int);
	string var_147_string = ("d" + var_153_int) + "m";
	int var_148_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_141_object->HasProperty((var_147_string + (var_148_int + 1)), var_149_bool);
			if(!var_149_bool) { //@nz
			} else {
				var_148_int += 1;
			}
		}
		if(!var_148_int) { //@nz
			var_140_bool = false;
			return 10;
		}
		var_150_int = 0;
		if(var_148_int > 1)
			@irand(var_150_int, var_148_int);
		var_141_object->GetProperty((var_147_string + (var_150_int + 1)), var_151_string);
		bool var_172_bool; string var_173_string;
		var_151_string = var_173_string;
		func_965(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_1020(float var_30_float)
{
	float var_32_float;
	@GetGameTime(var_32_float);
	var_32_float = var_30_float;
}


