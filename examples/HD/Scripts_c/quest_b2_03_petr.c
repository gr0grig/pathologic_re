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
			func_999();
			if(var_7_cvector == 32383) {
				bool var_13_bool = false;
				bool var_14_bool;
				func_1072(var_1_object);
				if(var_14_bool != 0) {
					bool var_22_bool;
					func_1084(var_1_object);
					if(var_22_bool != 0)
						var_13_bool = true;
				}
				if(var_13_bool != 0) {
					object var_28_object; object var_29_object;
					var_28_object = var_1_object;
					var_29_object = var_0_object;
					func_1060();
					func_212(var_8_bool, "Neutral");
					var_0_object->SetMessage(531057); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531274, 32589, 32588); //@t
					return 0;
				}
				bool var_53_bool = false;
				bool var_54_bool;
				func_1108(var_1_object);
				if(var_54_bool != 0) {
					bool var_60_bool;
					func_1096(var_1_object);
					if(var_60_bool != 0)
						var_53_bool = true;
				}
				if(var_53_bool != 0) {
					object var_66_object; object var_67_object;
					var_66_object = var_1_object;
					var_67_object = var_0_object;
					func_1066();
					func_212(var_8_bool, "Neutral");
					var_0_object->SetMessage(531059); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531060, -1, 32386); //@t
					var_0_object->AddReply(531242, -1, 32557); //@t
					return 0;
				}
				func_212(var_8_bool, "Untrust");
				var_0_object->SetMessage(531055); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531056, -1, 32382); //@t
				var_0_object->AddReply(531241, -1, 32556); //@t
				return 0;
			}
			if(var_7_cvector == 32589) {
				func_212(var_8_bool, "Autizm");
				var_0_object->SetMessage(531275); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531243, 32559, 32558); //@t
				var_0_object->AddReply(531058, -1, 32384); //@t
				return 0;
			}
			if(var_7_cvector == 32559) {
				func_212(var_8_bool, "Autizm");
				var_0_object->SetMessage(531244); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531245, -1, 32560); //@t
				var_0_object->AddReply(531246, -1, 32561); //@t
				return 0;
			}
			var_3_string = true;
			bool var_106_bool;
			func_1145(var_106_bool);
			if(var_106_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xeb";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_444(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1006(var_13_object);
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
			func_1006(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_551();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_566();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_509();
			bool var_11_bool = false;
			bool var_12_bool;
			func_723(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_478(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_458(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1006(var_53_object);
					var_53_object = var_52_object;
					func_873(var_51_bool, var_52_object);
				}
			} else {
				func_473(var_7_int);
				func_500();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_500();
		else
			func_953("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_691();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_714(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_395(var_25_object);
			func_953("Neutral");
			func_509();
			func_500();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_728(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1139(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1137(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1141(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1143(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1120(var_89_int);
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
	func_1006(var_100_object);
	var_100_object = var_99_object;
	func_815(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_291_bool = !var_36_bool; //@nz
		if(var_291_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_292_object;
	var_27_object = var_292_object;
	func_797();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1027(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


// @pe
void func_395(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1036(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_910(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1027(var_153_int);
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
		func_984(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_1043(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1036(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_797(void)
{
	bool var_294_bool;
	@CameraSwitchToNormal(true);
	bool var_296_bool;
	func_1145(var_296_bool);
	if(var_296_bool != 0) {
	} else {
		@HasAnimationTrack(var_294_bool, "head");
		if(var_294_bool == 0) goto Label_814;
		@UnlookAsync("head");
	}
Label_814:
	
}


// @pe
void func_1060(void)
{
	@SetVariable("oob2PetrKabak1", 1);
}


// @pe
void func_551(void)
{
	func_691();
	func_509();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1066(void)
{
	@SetVariable("oob2PetrKabak2", 1);
}


void func_815(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_873(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_910(var_140_bool, var_141_object);
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
		func_910(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_873(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_871;
	
Label_871:
	var_98_bool = true;
	
}


// @pe
void func_1072(bool var_201_bool)
{
	int var_203_int;
	func_1022(var_203_int, "b2q03");
	if(var_203_int == 1)
		var_201_bool = true;
	var_201_bool = false;
}


void func_689(bool var_45_bool)
{
	var_45_bool = true;
}


void func_691(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_566(void)
{
	@StopGroup0();
	func_509();
	func_953("Neutral");
	func_500();
}


void func_696(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_953(string var_242_string)
{
	bool var_246_bool; float var_247_float; float var_248_float;
	@lshHasAnimation(var_246_bool, var_242_string);
	if(var_246_bool != 0) {
		@lshGetAnimTimes(var_242_string, var_247_float, var_248_float);
		@lshPlayAnimation(var_247_float, var_248_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_242_string);
	}
	
}


void func_444(object var_0_object)
{
	bool var_7_bool;
	func_723(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_620();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1084(bool var_209_bool)
{
	int var_211_int;
	func_1022(var_211_int, "oob2PetrKabak1");
	if(var_211_int == 0) {
		var_209_bool = true;
		return 0;
	}
	var_209_bool = false;
}


void func_704(bool var_15_bool, cvector var_16_cvector)
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
void func_1096(bool var_265_bool)
{
	int var_267_int;
	func_1022(var_267_int, "oob2PetrKabak2");
	if(var_267_int == 0) {
		var_265_bool = true;
		return 0;
	}
	var_265_bool = false;
}


void func_969(string var_223_string, bool var_224_bool)
{
	bool var_230_bool; float var_231_float; float var_232_float;
	@lshHasAnimation(var_230_bool, var_223_string);
	if(var_230_bool != 0) {
		@lshGetAnimTimes(var_223_string, var_231_float, var_232_float);
		@lshPlayAnimation(var_231_float, var_232_float, var_224_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_223_string);
	}
	
}


void func_714(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_704(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_458(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_714(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool = false;
		bool var_201_bool;
		func_1072(var_1_object);
		if(var_201_bool != 0) {
			bool var_209_bool;
			func_1084(var_1_object);
			if(var_209_bool != 0)
				var_200_bool = true;
		}
		if(var_200_bool != 0) {
			object var_215_object; object var_216_object;
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_1060();
			func_212(var_194_object, "Neutral");
			var_0_object->SetMessage(531057); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531274, 32589, 32588); //@t
		} else {
					bool var_258_bool = false;
					bool var_259_bool;
					func_1108(var_1_object);
					if(var_259_bool != 0) {
						bool var_265_bool;
						func_1096(var_1_object);
						if(var_265_bool != 0)
							var_258_bool = true;
					}
					if(var_258_bool == 0) goto Label_160;
					object var_271_object; object var_272_object;
					var_271_object = var_1_object;
					var_272_object = var_0_object;
					func_1066();
					func_212(var_194_object, "Neutral");
					var_0_object->SetMessage(531059); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531060, -1, 32386); //@t
					var_0_object->AddReply(531242, -1, 32557); //@t
		}
	}
Label_182:
	for(;;) {
		bool var_240_bool;
		func_1145(var_240_bool);
		if(var_240_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_953(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_211;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_211:
			return 0;

		}

	}
	
Label_160:
	func_212(var_194_object, "Untrust");
	var_0_object->SetMessage(531055); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(531056, -1, 32382); //@t
	var_0_object->AddReply(531241, -1, 32556); //@t
	goto Label_182;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_723(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


// @pe
void func_212(object var_2_object, string var_219_string)
{
	bool var_220_bool;
	func_1145(var_220_bool);
	if(!var_220_bool) //@nz
		return 0;
	if(var_219_string == var_2_object)
		return 0;
	string var_223_string; bool var_224_bool;
	var_219_string = var_223_string;
	if(var_219_string == "")
		var_224_bool = false;
	else
		var_224_bool = true;
	func_969(var_223_string, var_224_bool);
	var_2_object = var_219_string;
	
}


// @pe
void func_1108(bool var_259_bool)
{
	int var_261_int;
	func_1022(var_261_int, "b2q03");
	if(var_261_int == 1000)
		var_259_bool = true;
	var_259_bool = false;
}


void func_728(bool var_37_bool, object var_38_object, float var_39_float)
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
	func_1012(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1145(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_791;
		@LookAsyncCamera("head");
	}
Label_791:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_473(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_984(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1145(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_478(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_696(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1120(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x46f";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


void func_999(void)
{
	bool var_10_bool;
	func_1145(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_873(bool var_109_bool, object var_110_object)
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
		func_984(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_620(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_723(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1043(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_723(var_41_bool);
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
			func_1036(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_675;
			goto Label_686;
			}
				Label_675:
					bool var_45_bool;
					func_689(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_681;
			}
		}
	Label_686:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_681:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1006(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_1137(int var_86_int)
{
	var_86_int = 515550;
}


void func_1139(int var_85_int)
{
	var_85_int = 502875;
}


void func_500(void)
{
	float var_303_float;
	@rand(var_303_float, 8, 16);
	@SetTimer(10, var_303_float);
}


void func_1141(string var_87_string)
{
	var_87_string = "ui/NPC_Petr.png";
}


void func_1012(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


void func_1143(string var_88_string)
{
	var_88_string = "ui/NPC_Petr_b.png";
}


void func_1145(bool var_80_bool)
{
	var_80_bool = true;
}


void func_509(void)
{
	@KillTimer(10);
}


void func_1022(int var_203_int, string var_204_string)
{
	int var_206_int;
	@GetVariable(var_204_string, var_206_int);
	var_206_int = var_203_int;
}


