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
			func_1073();
			if(var_8_bool == 21418) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1146();
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_1164();
			}
			if(var_8_bool == 21423) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_1152();
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_1164();
			}
			if(var_8_bool == 21431) {
				object var_51_object; object var_52_object;
				var_51_object = var_1_object;
				var_52_object = var_0_object;
				func_1158();
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_object;
				func_1164();
			}
			if(var_7_cvector == 21417) {
				func_164(var_8_bool, "Neutral");
				var_0_object->SetMessage(520225); //@t
				var_0_object->ClearReplies(); //@t
				bool var_77_bool;
				func_1200(var_1_object);
				if(var_77_bool != 0)
					var_0_object->AddReply(520226, 21419, 21418); //@t
				bool var_86_bool;
				func_1212(var_1_object);
				if(var_86_bool != 0)
					var_0_object->AddReply(520231, 21424, 21423); //@t
				bool var_95_bool;
				func_1224(var_1_object);
				if(var_95_bool != 0)
					var_0_object->AddReply(520239, 21432, 21431); //@t
				var_0_object->AddReply(520246, -1, 21438); //@t
				return 0;
			}
			if(var_7_cvector == 21432) {
				func_164(var_8_bool, "Sly");
				var_0_object->SetMessage(520240); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520241, 21434, 21433); //@t
				return 0;
			}
			if(var_7_cvector == 21434) {
				func_164(var_8_bool, "Neutral");
				var_0_object->SetMessage(520242); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520243, 21436, 21435); //@t
				var_0_object->AddReply(530818, 32128, 32127); //@t
				return 0;
			}
			if(var_7_cvector == 32128) {
				func_164(var_8_bool, "Neutral");
				var_0_object->SetMessage(530819); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530820, 21436, 32129); //@t
				return 0;
			}
			if(var_7_cvector == 21436) {
				func_164(var_8_bool, "Neutral");
				var_0_object->SetMessage(520244); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520245, -1, 21437); //@t
				var_0_object->AddReply(527839, -1, 29182); //@t
				return 0;
			}
			if(var_7_cvector == 21424) {
				func_164(var_8_bool, "Neutral");
				var_0_object->SetMessage(520232); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520233, 21426, 21425); //@t
				return 0;
			}
			if(var_7_cvector == 21426) {
				func_164(var_8_bool, "Untrust");
				var_0_object->SetMessage(520234); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520235, 21428, 21427); //@t
				var_0_object->AddReply(520238, -1, 21430); //@t
				return 0;
			}
			if(var_7_cvector == 21428) {
				func_164(var_8_bool, "Neutral");
				var_0_object->SetMessage(520236); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520237, -1, 21429); //@t
				return 0;
			}
			if(var_7_cvector == 21419) {
				func_164(var_8_bool, "Untrust");
				var_0_object->SetMessage(520227); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520228, 21421, 21420); //@t
				return 0;
			}
			if(var_7_cvector == 21421) {
				func_164(var_8_bool, "Neutral");
				var_0_object->SetMessage(520229); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520230, -1, 21422); //@t
				return 0;
			}
			var_3_string = true;
			bool var_179_bool;
			func_1261(var_179_bool);
			if(var_179_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbb";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_518(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1080(var_13_object);
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
			func_1080(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_625();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_640();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_583();
			bool var_11_bool = false;
			bool var_12_bool;
			func_797(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_552(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_532(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1080(var_53_object);
					var_53_object = var_52_object;
					func_947(var_51_bool, var_52_object);
				}
			} else {
				func_547(var_7_int);
				func_574();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_574();
		else
			func_1027("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_765();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_788(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_469(var_25_object);
			func_1027("Neutral");
			func_583();
			func_574();
		}
	}

}


// @pe
void func_1152(void)
{
	@SetVariable("oob2MladVladFactory2", 1);
}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_802(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1255(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1253(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1257(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1259(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1236(var_89_int);
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
	func_1080(var_100_object);
	var_100_object = var_99_object;
	func_889(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_268_bool = !var_36_bool; //@nz
		if(var_268_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_269_object;
	var_27_object = var_269_object;
	func_871();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_770(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1027(string var_252_string)
{
	bool var_256_bool; float var_257_float; float var_258_float;
	@lshHasAnimation(var_256_bool, var_252_string);
	if(var_256_bool != 0) {
		@lshGetAnimTimes(var_252_string, var_257_float, var_258_float);
		@lshPlayAnimation(var_257_float, var_258_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_252_string);
	}
	
}


void func_640(void)
{
	@StopGroup0();
	func_583();
	func_1027("Neutral");
	func_574();
}


// @pe
void func_1158(void)
{
	@SetVariable("oob2MladVladFactory3", 1);
}


void func_518(object var_0_object)
{
	bool var_7_bool;
	func_797(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_694();
	}
}
EMIT "Return(); Pop(0)";


void func_778(bool var_15_bool, cvector var_16_cvector)
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


// @pe
void func_1164(void)
{
	bool var_19_bool = false;
	bool var_20_bool = false;
	int var_21_int;
	func_1096(var_21_int, "oob2MladVladFactory1");
	if(var_21_int != 0) {
		int var_27_int;
		func_1096(var_27_int, "oob2MladVladFactory2");
		if(var_27_int != 0)
			var_20_bool = true;
	}
	if(var_20_bool != 0) {
		int var_31_int;
		func_1096(var_31_int, "oob2MladVladFactory3");
		if(var_31_int != 0)
			var_19_bool = true;
	}
	if(var_19_bool != 0) {
		bool var_35_bool;
		func_1101(var_35_bool, "quest_b2_01", "remove_mladvlad");
	}
}


void func_1043(string var_204_string, bool var_205_bool)
{
	bool var_211_bool; float var_212_float; float var_213_float;
	@lshHasAnimation(var_211_bool, var_204_string);
	if(var_211_bool != 0) {
		@lshGetAnimTimes(var_204_string, var_212_float, var_213_float);
		@lshPlayAnimation(var_212_float, var_213_float, var_205_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_204_string);
	}
	
}


void func_788(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_778(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_532(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_788(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_797(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_802(bool var_37_bool, object var_38_object, float var_39_float)
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
	func_1086(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1261(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_865;
		@LookAsyncCamera("head");
	}
Label_865:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_547(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


// @pe
void func_164(object var_2_object, string var_200_string)
{
	bool var_201_bool;
	func_1261(var_201_bool);
	if(!var_201_bool) //@nz
		return 0;
	if(var_200_string == var_2_object)
		return 0;
	string var_204_string; bool var_205_bool;
	var_200_string = var_204_string;
	if(var_200_string == "")
		var_205_bool = false;
	else
		var_205_bool = true;
	func_1043(var_204_string, var_205_bool);
	var_2_object = var_200_string;
	
}


void func_1058(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1261(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_552(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_770(var_22_float, var_23_object);
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
void func_1200(bool var_218_bool)
{
	int var_220_int;
	func_1096(var_220_int, "oob2MladVladFactory1");
	if(var_220_int == 0) {
		var_218_bool = true;
		return 0;
	}
	var_218_bool = false;
}


void func_1073(void)
{
	bool var_10_bool;
	func_1261(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_947(bool var_109_bool, object var_110_object)
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
		func_1058(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_694(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_797(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1129(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_797(var_41_bool);
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
			func_1122(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_749;
			goto Label_760;
			}
				Label_749:
					bool var_45_bool;
					func_763(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_755;
			}
		}
	Label_760:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_755:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1080(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1212(bool var_229_bool)
{
	int var_231_int;
	func_1096(var_231_int, "oob2MladVladFactory2");
	if(var_231_int == 0) {
		var_229_bool = true;
		return 0;
	}
	var_229_bool = false;
}


void func_574(void)
{
	float var_280_float;
	@rand(var_280_float, 8, 16);
	@SetTimer(10, var_280_float);
}


void func_1086(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


void func_583(void)
{
	@KillTimer(10);
}


// @pe
void func_1224(bool var_238_bool)
{
	int var_240_int;
	func_1096(var_240_int, "oob2MladVladFactory3");
	if(var_240_int == 0) {
		var_238_bool = true;
		return 0;
	}
	var_238_bool = false;
}


void func_1096(int var_220_int, string var_221_string)
{
	int var_223_int;
	@GetVariable(var_221_string, var_223_int);
	var_223_int = var_220_int;
}


void func_1101(bool var_35_bool, string var_36_string, string var_37_string)
{
	object var_39_object;
	@FindActor(var_39_object, var_36_string);
	if(var_39_object == null)
		var_35_bool = false;
	@Trigger(var_39_object, var_37_string);
	var_35_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		func_164(var_194_object, "Neutral");
		var_0_object->SetMessage(520225); //@t
		var_0_object->ClearReplies(); //@t
		bool var_218_bool;
		func_1200(var_1_object);
		if(var_218_bool != 0)
			var_0_object->AddReply(520226, 21419, 21418); //@t
		bool var_229_bool;
		func_1212(var_1_object);
		if(var_229_bool != 0)
			var_0_object->AddReply(520231, 21424, 21423); //@t
		bool var_238_bool;
		func_1224(var_1_object);
		if(var_238_bool != 0)
			var_0_object->AddReply(520239, 21432, 21431); //@t
		var_0_object->AddReply(520246, -1, 21438); //@t
		goto Label_134;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_134:
	bool var_250_bool;
	func_1261(var_250_bool);
	if(var_250_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1027(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_163;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_163:
		return 0;

	}
	
}


void func_1236(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x4e3";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


// @pe
void func_469(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_984(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1113(var_153_int);
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
		func_1058(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_1113(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


void func_1122(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_1253(int var_86_int)
{
	var_86_int = 515547;
}


void func_1255(int var_85_int)
{
	var_85_int = 502872;
}


void func_871(void)
{
	bool var_271_bool;
	@CameraSwitchToNormal(true);
	bool var_273_bool;
	func_1261(var_273_bool);
	if(var_273_bool != 0) {
	} else {
		@HasAnimationTrack(var_271_bool, "head");
		if(var_271_bool == 0) goto Label_888;
		@UnlookAsync("head");
	}
Label_888:
	
}


void func_1257(string var_87_string)
{
	var_87_string = "ui/NPC_MladVlad.png";
}


void func_1129(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1122(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_1259(string var_88_string)
{
	var_88_string = "ui/NPC_MladVlad_b.png";
}


void func_1261(bool var_80_bool)
{
	var_80_bool = true;
}


// @pe
void func_625(void)
{
	func_765();
	func_583();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_889(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_947(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_984(var_140_bool, var_141_object);
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
		func_984(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_947(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_945;
	
Label_945:
	var_98_bool = true;
	
}


// @pe
void func_1146(void)
{
	@SetVariable("oob2MladVladFactory1", 1);
}


void func_763(bool var_45_bool)
{
	var_45_bool = true;
}


void func_765(void)
{
	@StopAnimation();
	@StopGroup0();
}


