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
			func_1084();
			if(var_8_bool == 15199) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1155();
			}
			if(var_8_bool == 40555) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_1155();
			}
			if(var_8_bool == 40548) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_1155();
			}
			if(var_8_bool == 15212) {
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_1164();
			}
			if(var_7_cvector == 15184) {
				func_154(var_8_bool, "Neutral");
				var_0_object->SetMessage(513949); //@t
				var_0_object->ClearReplies(); //@t
				bool var_74_bool;
				func_1170(var_1_object);
				if(var_74_bool != 0)
					var_0_object->AddReply(513950, 15186, 15185); //@t
				bool var_85_bool;
				func_1182(var_1_object);
				if(var_85_bool != 0)
					var_0_object->AddReply(513977, 15213, 15212); //@t
				var_0_object->AddReply(513980, -1, 15215); //@t
				return 0;
			}
			if(var_7_cvector == 15213) {
				func_154(var_8_bool, "Smile");
				var_0_object->SetMessage(513978); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513979, -1, 15214); //@t
				var_0_object->AddReply(538655, -1, 40549); //@t
				return 0;
			}
			if(var_7_cvector == 15186) {
				func_154(var_8_bool, "Sorrow");
				var_0_object->SetMessage(513951); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513952, 15188, 15187); //@t
				var_0_object->AddReply(538654, -1, 40548); //@t
				return 0;
			}
			if(var_7_cvector == 15188) {
				func_154(var_8_bool, "Sorrow");
				var_0_object->SetMessage(513953); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513954, 15190, 15189); //@t
				return 0;
			}
			if(var_7_cvector == 15190) {
				func_154(var_8_bool, "Neutral");
				var_0_object->SetMessage(513955); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538657, 40553, 40551); //@t
				var_0_object->AddReply(538658, 40554, 40552); //@t
				return 0;
			}
			if(var_7_cvector == 40554) {
				func_154(var_8_bool, "Neutral");
				var_0_object->SetMessage(538660); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538661, -1, 40555); //@t
				var_0_object->AddReply(538662, 40553, 40556); //@t
				return 0;
			}
			if(var_7_cvector == 40553) {
				func_154(var_8_bool, "Neutral");
				var_0_object->SetMessage(538659); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513956, 15192, 15191); //@t
				var_0_object->AddReply(538663, 15194, 40558); //@t
				return 0;
			}
			if(var_7_cvector == 15192) {
				func_154(var_8_bool, "Doubt");
				var_0_object->SetMessage(513957); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513958, 15194, 15193); //@t
				var_0_object->AddReply(538664, 15196, 40560); //@t
				return 0;
			}
			if(var_7_cvector == 15194) {
				func_154(var_8_bool, "Agression");
				var_0_object->SetMessage(513959); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513960, 15196, 15195); //@t
				return 0;
			}
			if(var_7_cvector == 15196) {
				func_154(var_8_bool, "Agression");
				var_0_object->SetMessage(513961); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513962, 15198, 15197); //@t
				var_0_object->AddReply(538665, 15198, 40562); //@t
				return 0;
			}
			if(var_7_cvector == 15198) {
				func_154(var_8_bool, "Doubt");
				var_0_object->SetMessage(513963); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513964, -1, 15199); //@t
				return 0;
			}
			var_3_string = true;
			bool var_188_bool;
			func_1153(var_188_bool);
			if(var_188_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb1";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_529(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1091(var_13_object);
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
			func_1091(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_636();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_651();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_594();
			bool var_11_bool = false;
			bool var_12_bool;
			func_808(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_563(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_543(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1091(var_53_object);
					var_53_object = var_52_object;
					func_958(var_51_bool, var_52_object);
				}
			} else {
				func_558(var_7_int);
				func_585();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_585();
		else
			func_1038("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_776();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_799(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_480(var_25_object);
			func_1038("Neutral");
			func_594();
			func_585();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_813(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1147(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1145(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1149(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1151(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1248(var_89_int);
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
	func_1091(var_100_object);
	var_100_object = var_99_object;
	func_900(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_259_bool = !var_36_bool; //@nz
		if(var_259_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_260_object;
	var_27_object = var_260_object;
	func_882();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1153(bool var_80_bool)
{
	var_80_bool = true;
}


// @pe
void func_1155(void)
{
	@SetVariable("d9q05", 2);
	func_1194();
}


void func_900(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_958(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_995(var_140_bool, var_141_object);
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
		func_995(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_958(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_956;
	
Label_956:
	var_98_bool = true;
	
}


void func_774(bool var_45_bool)
{
	var_45_bool = true;
}


void func_776(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_651(void)
{
	@StopGroup0();
	func_594();
	func_1038("Neutral");
	func_585();
}


// @pe
void func_1164(void)
{
	@SetVariable("ood9Burah1", 1);
}


void func_781(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1038(string var_243_string)
{
	bool var_247_bool; float var_248_float; float var_249_float;
	@lshHasAnimation(var_247_bool, var_243_string);
	if(var_247_bool != 0) {
		@lshGetAnimTimes(var_243_string, var_248_float, var_249_float);
		@lshPlayAnimation(var_248_float, var_249_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_243_string);
	}
	
}


void func_529(object var_0_object)
{
	bool var_7_bool;
	func_808(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_705();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1170(bool var_218_bool)
{
	int var_220_int;
	func_1107(var_220_int, "d9q05");
	if(var_220_int == 1)
		var_218_bool = true;
	var_218_bool = false;
}


void func_789(bool var_15_bool, cvector var_16_cvector)
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
void func_154(object var_2_object, string var_200_string)
{
	bool var_201_bool;
	func_1153(var_201_bool);
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
	func_1054(var_204_string, var_205_bool);
	var_2_object = var_200_string;
	
}


// @pe
void func_1182(bool var_229_bool)
{
	int var_231_int;
	func_1107(var_231_int, "ood9Burah1");
	if(var_231_int == 0) {
		var_229_bool = true;
		return 0;
	}
	var_229_bool = false;
}


void func_543(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_799(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1054(string var_204_string, bool var_205_bool)
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


void func_799(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_789(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_808(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1194(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 766, 2, 540063);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_1220(var_22_bool, var_23_object, 764);
}
EMIT "Stack[-1] = 0";


void func_813(bool var_37_bool, object var_38_object, float var_39_float)
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
	func_1097(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1153(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_876;
		@LookAsyncCamera("head");
	}
Label_876:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_558(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1069(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1153(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_563(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_781(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1207(object var_31_object)
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


void func_1084(void)
{
	bool var_10_bool;
	func_1153(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_958(bool var_109_bool, object var_110_object)
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
		func_1069(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_705(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_808(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1128(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_808(var_41_bool);
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
			func_1121(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_760;
			goto Label_771;
			}
				Label_760:
					bool var_45_bool;
					func_774(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_766;
			}
		}
	Label_771:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_766:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1091(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_1220(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_1207(var_31_object);
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


void func_585(void)
{
	float var_271_float;
	@rand(var_271_float, 8, 16);
	@SetTimer(10, var_271_float);
}


void func_1097(cvector var_64_cvector, cvector var_65_cvector)
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
		func_154(var_194_object, "Neutral");
		var_0_object->SetMessage(513949); //@t
		var_0_object->ClearReplies(); //@t
		bool var_218_bool;
		func_1170(var_1_object);
		if(var_218_bool != 0)
			var_0_object->AddReply(513950, 15186, 15185); //@t
		bool var_229_bool;
		func_1182(var_1_object);
		if(var_229_bool != 0)
			var_0_object->AddReply(513977, 15213, 15212); //@t
		var_0_object->AddReply(513980, -1, 15215); //@t
		goto Label_124;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_124:
	bool var_241_bool;
	func_1153(var_241_bool);
	if(var_241_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1038(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_153;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_153:
		return 0;

	}
	
}


void func_594(void)
{
	@KillTimer(10);
}


void func_1107(int var_220_int, string var_221_string)
{
	int var_223_int;
	@GetVariable(var_221_string, var_223_int);
	var_223_int = var_220_int;
}


void func_1112(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


void func_1248(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x4ef";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


// @pe
void func_480(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1121(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_995(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1112(var_153_int);
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
		func_1069(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_1128(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1121(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_882(void)
{
	bool var_262_bool;
	@CameraSwitchToNormal(true);
	bool var_264_bool;
	func_1153(var_264_bool);
	if(var_264_bool != 0) {
	} else {
		@HasAnimationTrack(var_262_bool, "head");
		if(var_262_bool == 0) goto Label_899;
		@UnlookAsync("head");
	}
Label_899:
	
}


void func_1145(int var_86_int)
{
	var_86_int = 515592;
}


void func_1147(int var_85_int)
{
	var_85_int = 511961;
}


// @pe
void func_636(void)
{
	func_776();
	func_594();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1149(string var_87_string)
{
	var_87_string = "ui/NPC_Burah.png";
}


void func_1151(string var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png";
}


