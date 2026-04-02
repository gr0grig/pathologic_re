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
			func_1083();
			if(var_8_bool == 28227) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1144();
			}
			if(var_7_cvector == 28226) {
				bool var_50_bool;
				func_1162(var_1_object);
				if(var_50_bool != 0) {
					object var_58_object; object var_59_object;
					var_58_object = var_1_object;
					var_59_object = var_0_object;
					func_1156();
					func_169(var_8_bool, "Neutral");
					var_0_object->SetMessage(526934); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(527936, 29290, 29289); //@t
					var_0_object->AddReply(527942, 29297, 29295); //@t
					return 0;
				}
				func_169(var_8_bool, "Neutral");
				var_0_object->SetMessage(526936); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527935, -1, 29288); //@t
				var_0_object->AddReply(526937, -1, 28229); //@t
				return 0;
			}
			if(var_7_cvector == 29297) {
				func_169(var_8_bool, "Sorrow");
				var_0_object->SetMessage(527943); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527944, 29292, 29298); //@t
				return 0;
			}
			if(var_7_cvector == 29290) {
				func_169(var_8_bool, "Smile");
				var_0_object->SetMessage(527937); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527945, 29300, 29299); //@t
				return 0;
			}
			if(var_7_cvector == 29300) {
				func_169(var_8_bool, "Smile");
				var_0_object->SetMessage(527946); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527947, 29292, 29301); //@t
				return 0;
			}
			if(var_7_cvector == 29292) {
				func_169(var_8_bool, "Sorrow");
				var_0_object->SetMessage(527939); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527948, 29304, 29303); //@t
				var_0_object->AddReply(527940, 29294, 29293); //@t
				return 0;
			}
			if(var_7_cvector == 29294) {
				func_169(var_8_bool, "Neutral");
				var_0_object->SetMessage(527941); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527953, 29309, 29308); //@t
				return 0;
			}
			if(var_7_cvector == 29309) {
				func_169(var_8_bool, "Untrust");
				var_0_object->SetMessage(527954); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527956, 29304, 29311); //@t
				return 0;
			}
			if(var_7_cvector == 29304) {
				func_169(var_8_bool, "Sorrow");
				var_0_object->SetMessage(527949); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527950, 29310, 29305); //@t
				return 0;
			}
			if(var_7_cvector == 29310) {
				func_169(var_8_bool, "Sorrow");
				var_0_object->SetMessage(527955); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527960, 29317, 29316); //@t
				var_0_object->AddReply(527957, 29314, 29313); //@t
				return 0;
			}
			if(var_7_cvector == 29314) {
				func_169(var_8_bool, "Untrust");
				var_0_object->SetMessage(527958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527959, 29319, 29315); //@t
				return 0;
			}
			if(var_7_cvector == 29317) {
				func_169(var_8_bool, "Untrust");
				var_0_object->SetMessage(527961); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527962, 29319, 29318); //@t
				return 0;
			}
			if(var_7_cvector == 29319) {
				func_169(var_8_bool, "Untrust");
				var_0_object->SetMessage(527963); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526935, -1, 28227); //@t
				return 0;
			}
			var_3_string = true;
			bool var_177_bool;
			func_1266(var_177_bool);
			if(var_177_bool != 0)
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
		func_528(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1090(var_13_object);
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
			func_1090(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_635();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_650();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_593();
			bool var_11_bool = false;
			bool var_12_bool;
			func_807(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_562(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_542(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1090(var_53_object);
					var_53_object = var_52_object;
					func_957(var_51_bool, var_52_object);
				}
			} else {
				func_557(var_7_int);
				func_584();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_584();
		else
			func_1037("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_775();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_798(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_479(var_25_object);
			func_1037("Neutral");
			func_593();
			func_584();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_812(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1260(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1258(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1262(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1264(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1241(var_89_int);
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
	func_1090(var_100_object);
	var_100_object = var_99_object;
	func_899(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_262_bool = !var_36_bool; //@nz
		if(var_262_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_263_object;
	var_27_object = var_263_object;
	func_881();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_899(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_957(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_994(var_140_bool, var_141_object);
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
		func_994(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_957(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_955;
	
Label_955:
	var_98_bool = true;
	
}


// @pe
void func_1156(void)
{
	@SetVariable("k10q01KnowAboutRubin", 1);
}


void func_773(bool var_45_bool)
{
	var_45_bool = true;
}


void func_775(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1162(bool var_200_bool)
{
	int var_202_int;
	func_1106(var_202_int, "k10q01");
	if(var_202_int == 0) {
		var_200_bool = true;
		return 0;
	}
	var_200_bool = false;
}


void func_650(void)
{
	@StopGroup0();
	func_593();
	func_1037("Neutral");
	func_584();
}


void func_780(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1037(string var_238_string)
{
	bool var_242_bool; float var_243_float; float var_244_float;
	@lshHasAnimation(var_242_bool, var_238_string);
	if(var_242_bool != 0) {
		@lshGetAnimTimes(var_238_string, var_243_float, var_244_float);
		@lshPlayAnimation(var_243_float, var_244_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_238_string);
	}
	
}


void func_528(object var_0_object)
{
	bool var_7_bool;
	func_807(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_704();
	}
}
EMIT "Return(); Pop(0)";


void func_788(bool var_15_bool, cvector var_16_cvector)
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


void func_1174(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 447, 1, 527005);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_1213(var_22_bool, var_23_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1053(string var_216_string, bool var_217_bool)
{
	bool var_223_bool; float var_224_float; float var_225_float;
	@lshHasAnimation(var_223_bool, var_216_string);
	if(var_223_bool != 0) {
		@lshGetAnimTimes(var_216_string, var_224_float, var_225_float);
		@lshPlayAnimation(var_224_float, var_225_float, var_217_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_216_string);
	}
	
}


void func_542(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_798(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_798(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_788(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_1187(void)
{
	object var_41_object;
	@CreateDiaryEntry(var_41_object, 448, 1, 527006);
	bool var_45_bool; object var_46_object;
	var_41_object = var_46_object;
	func_1213(var_45_bool, var_46_object, 447);
}
EMIT "Stack[-1] = 0";


void func_807(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


// @pe
void func_169(object var_2_object, string var_212_string)
{
	bool var_213_bool;
	func_1266(var_213_bool);
	if(!var_213_bool) //@nz
		return 0;
	if(var_212_string == var_2_object)
		return 0;
	string var_216_string; bool var_217_bool;
	var_212_string = var_216_string;
	if(var_212_string == "")
		var_217_bool = false;
	else
		var_217_bool = true;
	func_1053(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	
}


void func_812(bool var_37_bool, object var_38_object, float var_39_float)
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
	func_1096(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1266(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_875;
		@LookAsyncCamera("head");
	}
Label_875:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_557(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1068(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1266(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_1200(object var_31_object)
{
	object var_33_object;
	@GetDiaryRoot(var_33_object);
	if(!var_33_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_31_object = false;
	}
	var_33_object = var_31_object;
}
EMIT "Stack[-1] = 0";


void func_562(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_780(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1083(void)
{
	bool var_10_bool;
	func_1266(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_957(bool var_109_bool, object var_110_object)
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
		func_1068(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_1213(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_1200(var_31_object);
	object var_28_object;
	var_31_object = var_28_object;
	object var_29_object;
	var_28_object->Find(var_24_int, var_29_object);
	if(!var_29_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_24_int);
		var_22_bool = false;
	}
	var_29_object->AddChild(var_23_object);
	@SendWorldWndMessage(7);
	int var_30_int;
	var_23_object->GetCategory(var_30_int);
	@SetDiarySection(var_30_int);
	var_22_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_704(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_807(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1127(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_807(var_41_bool);
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
			func_1120(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_759;
			goto Label_770;
			}
				Label_759:
					bool var_45_bool;
					func_773(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_765;
			}
		}
	Label_770:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_765:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1090(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_584(void)
{
	float var_274_float;
	@rand(var_274_float, 8, 16);
	@SetTimer(10, var_274_float);
}


void func_1096(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool;
		func_1162(var_1_object);
		if(var_200_bool != 0) {
			object var_208_object; object var_209_object;
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_1156();
			func_169(var_194_object, "Neutral");
			var_0_object->SetMessage(526934); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(527936, 29290, 29289); //@t
			var_0_object->AddReply(527942, 29297, 29295); //@t
		} else {
					func_169(var_194_object, "Neutral");
					var_0_object->SetMessage(526936); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(527935, -1, 29288); //@t
					var_0_object->AddReply(526937, -1, 28229); //@t
		}
	}
	for(;;) {
		bool var_236_bool;
		func_1266(var_236_bool);
		if(var_236_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1037(var_2_object);
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


void func_593(void)
{
	@KillTimer(10);
}


void func_1106(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


void func_1111(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


void func_1241(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x4e8";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


// @pe
void func_479(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1120(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_994(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1111(var_153_int);
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
		func_1068(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_1127(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1120(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_1258(int var_86_int)
{
	var_86_int = 515573;
}


void func_1260(int var_85_int)
{
	var_85_int = 504032;
}


void func_1262(string var_87_string)
{
	var_87_string = "ui/NPC_Bakalavr.png";
}


void func_1264(string var_88_string)
{
	var_88_string = "ui/NPC_Bakalavr_b.png";
}


void func_881(void)
{
	bool var_265_bool;
	@CameraSwitchToNormal(true);
	bool var_267_bool;
	func_1266(var_267_bool);
	if(var_267_bool != 0) {
	} else {
		@HasAnimationTrack(var_265_bool, "head");
		if(var_265_bool == 0) goto Label_898;
		@UnlookAsync("head");
	}
Label_898:
	
}


void func_1266(bool var_80_bool)
{
	var_80_bool = true;
}


// @pe
void func_1144(void)
{
	@SetVariable("k10q01", 1);
	func_1174();
	func_1187();
}


// @pe
void func_635(void)
{
	func_775();
	func_593();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


