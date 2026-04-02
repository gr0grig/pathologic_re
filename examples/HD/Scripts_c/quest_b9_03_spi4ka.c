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
			func_1018();
			if(var_7_cvector == 31724) {
				bool var_13_bool;
				func_1095(var_1_object);
				if(var_13_bool != 0) {
					object var_21_object; object var_22_object;
					var_21_object = var_1_object;
					var_22_object = var_0_object;
					func_1089();
					func_164(var_8_bool, "Azart");
					var_0_object->SetMessage(530337); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530338, 32415, 31725); //@t
					var_0_object->AddReply(531096, 32418, 32414); //@t
					return 0;
				}
				func_164(var_8_bool, "Neutral");
				var_0_object->SetMessage(530341); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530342, -1, 31729); //@t
				return 0;
			}
			if(var_7_cvector == 32418) {
				func_164(var_8_bool, "Azart");
				var_0_object->SetMessage(531100); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531101, -1, 32419); //@t
				var_0_object->AddReply(531102, 31726, 32420); //@t
				return 0;
			}
			if(var_7_cvector == 31726) {
				func_164(var_8_bool, "Serious");
				var_0_object->SetMessage(530339); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531202, 32518, 32511); //@t
				var_0_object->AddReply(530340, -1, 31727); //@t
				return 0;
			}
			if(var_7_cvector == 32518) {
				func_164(var_8_bool, "Serious");
				var_0_object->SetMessage(531208); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531209, -1, 32519); //@t
				var_0_object->AddReply(531210, 32521, 32520); //@t
				return 0;
			}
			if(var_7_cvector == 32521) {
				func_164(var_8_bool, "Fear");
				var_0_object->SetMessage(531211); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531212, -1, 32522); //@t
				var_0_object->AddReply(531213, -1, 32523); //@t
				return 0;
			}
			if(var_7_cvector == 32415) {
				func_164(var_8_bool, "Azart");
				var_0_object->SetMessage(531097); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531098, 32417, 32416); //@t
				var_0_object->AddReply(531207, 32417, 32516); //@t
				return 0;
			}
			if(var_7_cvector == 32417) {
				func_164(var_8_bool, "Secret");
				var_0_object->SetMessage(531099); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531103, 32512, 32421); //@t
				var_0_object->AddReply(531206, -1, 32515); //@t
				return 0;
			}
			if(var_7_cvector == 32512) {
				func_164(var_8_bool, "Secret");
				var_0_object->SetMessage(531203); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531204, -1, 32513); //@t
				var_0_object->AddReply(531205, -1, 32514); //@t
				return 0;
			}
			var_3_string = true;
			bool var_124_bool;
			func_1087(var_124_bool);
			if(var_124_bool != 0)
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
		func_463(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1025(var_13_object);
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
			func_1025(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_570();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_585();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_528();
			bool var_11_bool = false;
			bool var_12_bool;
			func_742(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_497(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_477(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1025(var_53_object);
					var_53_object = var_52_object;
					func_892(var_51_bool, var_52_object);
				}
			} else {
				func_492(var_7_int);
				func_519();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_519();
		else
			func_972("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_710();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_733(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_414(var_25_object);
			func_972("Neutral");
			func_528();
			func_519();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_747(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1081(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1079(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1083(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1085(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1107(var_89_int);
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
	func_1025(var_100_object);
	var_100_object = var_99_object;
	func_834(var_98_bool, var_99_object);
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
	func_816();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1025(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_1031(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


void func_519(void)
{
	float var_271_float;
	@rand(var_271_float, 8, 16);
	@SetTimer(10, var_271_float);
}


void func_528(void)
{
	@KillTimer(10);
}


void func_1041(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


void func_1046(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


// @pe
void func_414(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1055(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_929(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1046(var_153_int);
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
		func_1003(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


// @pe
void func_164(object var_2_object, string var_212_string)
{
	bool var_213_bool;
	func_1087(var_213_bool);
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
	func_988(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	
}


void func_1062(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1055(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_816(void)
{
	bool var_262_bool;
	@CameraSwitchToNormal(true);
	bool var_264_bool;
	func_1087(var_264_bool);
	if(var_264_bool != 0) {
	} else {
		@HasAnimationTrack(var_262_bool, "head");
		if(var_262_bool == 0) goto Label_833;
		@UnlookAsync("head");
	}
Label_833:
	
}


void func_1079(int var_86_int)
{
	var_86_int = 515552;
}


void func_1081(int var_85_int)
{
	var_85_int = 502877;
}


// @pe
void func_570(void)
{
	func_710();
	func_528();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1083(string var_87_string)
{
	var_87_string = "ui/NPC_Spi4ka.png";
}


void func_1085(string var_88_string)
{
	var_88_string = "ui/NPC_Spi4ka_b.png";
}


void func_1087(bool var_80_bool)
{
	var_80_bool = true;
}


// @pe
void func_1089(void)
{
	@SetVariable("oob9Spi4ka_Kapella1", 1);
}


void func_834(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_892(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_929(var_140_bool, var_141_object);
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
		func_929(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_892(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_890;
	
Label_890:
	var_98_bool = true;
	
}


void func_708(bool var_45_bool)
{
	var_45_bool = true;
}


void func_710(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1095(bool var_200_bool)
{
	int var_202_int;
	func_1041(var_202_int, "oob9Spi4ka_Kapella1");
	if(var_202_int == 0) {
		var_200_bool = true;
		return 0;
	}
	var_200_bool = false;
}


void func_585(void)
{
	@StopGroup0();
	func_528();
	func_972("Neutral");
	func_519();
}


void func_715(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_972(string var_238_string)
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


void func_463(object var_0_object)
{
	bool var_7_bool;
	func_742(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_639();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool;
		func_1095(var_1_object);
		if(var_200_bool != 0) {
			object var_208_object; object var_209_object;
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_1089();
			func_164(var_194_object, "Azart");
			var_0_object->SetMessage(530337); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530338, 32415, 31725); //@t
			var_0_object->AddReply(531096, 32418, 32414); //@t
		} else {
					func_164(var_194_object, "Neutral");
					var_0_object->SetMessage(530341); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530342, -1, 31729); //@t
		}
	}
	for(;;) {
		bool var_236_bool;
		func_1087(var_236_bool);
		if(var_236_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_972(var_2_object);
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
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_1107(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x462";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


void func_723(bool var_15_bool, cvector var_16_cvector)
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


void func_988(string var_216_string, bool var_217_bool)
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


void func_733(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_723(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_477(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_733(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_742(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_747(bool var_37_bool, object var_38_object, float var_39_float)
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
	func_1031(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1087(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_810;
		@LookAsyncCamera("head");
	}
Label_810:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_492(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1003(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1087(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_497(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_715(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1018(void)
{
	bool var_10_bool;
	func_1087(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_892(bool var_109_bool, object var_110_object)
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
		func_1003(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_639(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_742(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1062(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_742(var_41_bool);
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
			func_1055(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_694;
			goto Label_705;
			}
				Label_694:
					bool var_45_bool;
					func_708(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_700;
			}
		}
	Label_705:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_700:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


