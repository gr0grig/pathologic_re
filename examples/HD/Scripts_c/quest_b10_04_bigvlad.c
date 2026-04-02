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
			func_915();
			if(var_7_cvector == 31752) {
				bool var_13_bool;
				func_982(var_1_object);
				if(!var_13_bool) { //@nz
					object var_22_object; object var_23_object;
					var_22_object = var_1_object;
					var_23_object = var_0_object;
					func_976();
					func_170(var_8_bool, "Neutral");
					var_0_object->SetMessage(530380); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530381, 32786, 31753); //@t
					var_0_object->AddReply(530382, 32786, 31754); //@t
					return 0;
				}
				func_170(var_8_bool, "Neutral");
				var_0_object->SetMessage(530383); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530384, -1, 31756); //@t
				var_0_object->AddReply(531445, -1, 32792); //@t
				return 0;
			}
			if(var_7_cvector == 32786) {
				func_170(var_8_bool, "Distrust");
				var_0_object->SetMessage(531440); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531441, 32788, 32787); //@t
				var_0_object->AddReply(531444, 32788, 32790); //@t
				return 0;
			}
			if(var_7_cvector == 32788) {
				func_170(var_8_bool, "Neutral");
				var_0_object->SetMessage(531442); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531443, -1, 32789); //@t
				var_0_object->AddReply(531446, -1, 32794); //@t
				return 0;
			}
			var_3_string = true;
			bool var_78_bool;
			func_1019(var_78_bool);
			if(var_78_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc1";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_360(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_922(var_13_object);
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
			func_922(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_467();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_482();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_425();
			bool var_11_bool = false;
			bool var_12_bool;
			func_639(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_394(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_374(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_922(var_53_object);
					var_53_object = var_52_object;
					func_789(var_51_bool, var_52_object);
				}
			} else {
				func_389(var_7_int);
				func_416();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_416();
		else
			func_869("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_607();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_630(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_311(var_25_object);
			func_869("Neutral");
			func_425();
			func_416();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_644(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1013(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1011(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1015(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1017(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_994(var_89_int);
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
	func_922(var_100_object);
	var_100_object = var_99_object;
	func_731(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_263_bool = !var_36_bool; //@nz
		if(var_263_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_264_object;
	var_27_object = var_264_object;
	func_713();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_900(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1019(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_644(bool var_37_bool, object var_38_object, float var_39_float)
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
	func_928(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1019(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_707;
		@LookAsyncCamera("head");
	}
Label_707:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_389(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_394(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_612(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_915(void)
{
	bool var_10_bool;
	func_1019(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_789(bool var_109_bool, object var_110_object)
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
		func_900(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_536(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_639(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_959(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_639(var_41_bool);
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
			func_952(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_591;
			goto Label_602;
			}
				Label_591:
					bool var_45_bool;
					func_605(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_597;
			}
		}
	Label_602:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_597:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_922(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_416(void)
{
	float var_275_float;
	@rand(var_275_float, 8, 16);
	@SetTimer(10, var_275_float);
}


void func_928(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


void func_425(void)
{
	@KillTimer(10);
}


// @pe
void func_170(object var_2_object, string var_213_string)
{
	bool var_214_bool;
	func_1019(var_214_bool);
	if(!var_214_bool) //@nz
		return 0;
	if(var_213_string == var_2_object)
		return 0;
	string var_217_string; bool var_218_bool;
	var_213_string = var_217_string;
	if(var_213_string == "")
		var_218_bool = false;
	else
		var_218_bool = true;
	func_885(var_217_string, var_218_bool);
	var_2_object = var_213_string;
	
}


void func_938(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


void func_943(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


// @pe
void func_311(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_952(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_826(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_943(var_153_int);
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
		func_900(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_959(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_952(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_713(void)
{
	bool var_266_bool;
	@CameraSwitchToNormal(true);
	bool var_268_bool;
	func_1019(var_268_bool);
	if(var_268_bool != 0) {
	} else {
		@HasAnimationTrack(var_266_bool, "head");
		if(var_266_bool == 0) goto Label_730;
		@UnlookAsync("head");
	}
Label_730:
	
}


// @pe
void func_976(void)
{
	@SetVariable("b10q04PlennikTalk", 1);
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool;
		func_982(var_1_object);
		if(!var_200_bool) { //@nz
			object var_209_object; object var_210_object;
			var_209_object = var_1_object;
			var_210_object = var_0_object;
			func_976();
			func_170(var_194_object, "Neutral");
			var_0_object->SetMessage(530380); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530381, 32786, 31753); //@t
			var_0_object->AddReply(530382, 32786, 31754); //@t
		} else {
					func_170(var_194_object, "Neutral");
					var_0_object->SetMessage(530383); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530384, -1, 31756); //@t
					var_0_object->AddReply(531445, -1, 32792); //@t
		}
	}
	for(;;) {
		bool var_237_bool;
		func_1019(var_237_bool);
		if(var_237_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_869(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_169;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_169:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


// @pe
void func_467(void)
{
	func_607();
	func_425();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_982(bool var_200_bool)
{
	int var_202_int;
	func_938(var_202_int, "b10q04PlennikTalk");
	if(var_202_int != 0) {
		var_200_bool = true;
		return 0;
	}
	var_200_bool = false;
}


void func_731(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_789(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_826(var_140_bool, var_141_object);
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
		func_826(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_789(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_787;
	
Label_787:
	var_98_bool = true;
	
}


void func_605(bool var_45_bool)
{
	var_45_bool = true;
}


void func_607(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_994(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x3f1";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


void func_482(void)
{
	@StopGroup0();
	func_425();
	func_869("Neutral");
	func_416();
}


void func_612(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_869(string var_239_string)
{
	bool var_243_bool; float var_244_float; float var_245_float;
	@lshHasAnimation(var_243_bool, var_239_string);
	if(var_243_bool != 0) {
		@lshGetAnimTimes(var_239_string, var_244_float, var_245_float);
		@lshPlayAnimation(var_244_float, var_245_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_239_string);
	}
	
}


void func_360(object var_0_object)
{
	bool var_7_bool;
	func_639(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_536();
	}
}
EMIT "Return(); Pop(0)";


void func_620(bool var_15_bool, cvector var_16_cvector)
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


void func_1011(int var_86_int)
{
	var_86_int = 515531;
}


void func_1013(int var_85_int)
{
	var_85_int = 502857;
}


void func_885(string var_217_string, bool var_218_bool)
{
	bool var_224_bool; float var_225_float; float var_226_float;
	@lshHasAnimation(var_224_bool, var_217_string);
	if(var_224_bool != 0) {
		@lshGetAnimTimes(var_217_string, var_225_float, var_226_float);
		@lshPlayAnimation(var_225_float, var_226_float, var_218_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_217_string);
	}
	
}


void func_1015(string var_87_string)
{
	var_87_string = "ui/NPC_BigVlad.png";
}


void func_630(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_620(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_1017(string var_88_string)
{
	var_88_string = "ui/NPC_BigVlad_b.png";
}


void func_374(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_630(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1019(bool var_80_bool)
{
	var_80_bool = true;
}


void func_639(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


