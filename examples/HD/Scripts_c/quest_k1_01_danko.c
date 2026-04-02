// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool)
	{
		if(1 != 0) {
			func_872();
			if(var_6_int == 26038) {
				bool var_12_bool = false;
				bool var_13_bool = false;
				bool var_14_bool;
				func_921(var_1_object);
				if(var_14_bool != 0) {
					bool var_22_bool;
					func_933(var_1_object);
					if(!var_22_bool) //@nz
						var_13_bool = true;
				}
				if(var_13_bool != 0) {
					bool var_29_bool;
					func_945(var_1_object);
					if(var_29_bool != 0)
						var_12_bool = true;
				}
				if(var_12_bool != 0) {
					object var_35_object; object var_36_object;
					var_35_object = var_1_object;
					var_36_object = var_0_object;
					func_909();
					func_227(var_7_bool, "Neutral");
					var_0_object->SetMessage(524699); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524700, 28105, 26039); //@t
					var_0_object->AddReply(526838, 28123, 28122); //@t
					var_0_object->AddReply(542096, 28125, 44396); //@t
					return 0;
				}
				bool var_66_bool = false;
				bool var_67_bool;
				func_933(var_1_object);
				if(var_67_bool != 0) {
					bool var_69_bool;
					func_957(var_1_object);
					if(var_69_bool != 0)
						var_66_bool = true;
				}
				if(var_66_bool != 0) {
					object var_75_object; object var_76_object;
					var_75_object = var_1_object;
					var_76_object = var_0_object;
					func_915();
					func_227(var_7_bool, "Neutral");
					var_0_object->SetMessage(524714); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524715, 28112, 26054); //@t
					return 0;
				}
				func_227(var_7_bool, "Neutral");
				var_0_object->SetMessage(526834); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526835, -1, 28118); //@t
				var_0_object->AddReply(526836, -1, 28119); //@t
				return 0;
			}
			if(var_6_int == 28112) {
				func_227(var_7_bool, "Smile");
				var_0_object->SetMessage(526830); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526831, 26055, 28113); //@t
				var_0_object->AddReply(526832, 26055, 28114); //@t
				return 0;
			}
			if(var_6_int == 26055) {
				func_227(var_7_bool, "Smile");
				var_0_object->SetMessage(524716); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524717, -1, 26056); //@t
				var_0_object->AddReply(526829, -1, 28111); //@t
				return 0;
			}
			if(var_6_int == 28123) {
				func_227(var_7_bool, "Menace");
				var_0_object->SetMessage(526839); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526840, 28125, 28124); //@t
				return 0;
			}
			if(var_6_int == 28125) {
				func_227(var_7_bool, "Menace");
				var_0_object->SetMessage(526841); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526842, 28127, 28126); //@t
				return 0;
			}
			if(var_6_int == 28127) {
				func_227(var_7_bool, "Smile");
				var_0_object->SetMessage(526843); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526844, 28105, 28128); //@t
				var_0_object->AddReply(542097, 28107, 44398); //@t
				return 0;
			}
			if(var_6_int == 28105) {
				func_227(var_7_bool, "Menace");
				var_0_object->SetMessage(526823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526824, 28107, 28106); //@t
				return 0;
			}
			if(var_6_int == 28107) {
				func_227(var_7_bool, "Menace");
				var_0_object->SetMessage(526825); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526826, 28109, 28108); //@t
				return 0;
			}
			if(var_6_int == 28109) {
				func_227(var_7_bool, "Untrust");
				var_0_object->SetMessage(526827); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526828, -1, 28110); //@t
				var_0_object->AddReply(526833, -1, 28115); //@t
				return 0;
			}
			var_3_string = true;
			bool var_160_bool;
			func_994(var_160_bool);
			if(var_160_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xfa";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		int var_7_int;
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		bool var_8_bool;
		if(var_6_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_8_bool);
			bool var_11_bool = false;
			if(!var_8_bool) { //@nz
				bool var_13_bool;
				func_599(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_879(var_14_object);
				@RemoveActor(var_14_object);
			}
		} else if(var_6_string == "restore") {
			var_0_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_599(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_879(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_601(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_988(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_986(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_990(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_992(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_969(var_70_int);
	var_14_object->SetPlayerName(var_70_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	bool var_79_bool; object var_80_object;
	object var_81_object;
	func_879(var_81_object);
	var_81_object = var_80_object;
	func_688(var_79_bool, var_80_object);
	object var_174_object; object var_175_object;
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_279_bool = !var_17_bool; //@nz
		if(var_279_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_280_object;
	var_8_object = var_280_object;
	func_670();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_900(int var_134_int)
{
	float var_136_float;
	@GetGameTime(var_136_float);
	var_134_int = 1 + (var_136_float / 24);
}


void func_969(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x3d8";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


void func_842(string var_212_string, bool var_213_bool)
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


// @pe
void func_909(void)
{
	@SetVariable("ook1Danko1", 1);
}


void func_783(bool var_121_bool, object var_122_object)
{
	bool var_130_bool; int var_131_int; string var_132_string;
	int var_134_int;
	func_900(var_134_int);
	string var_128_string = ("d" + var_134_int) + "m";
	int var_129_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_122_object->HasProperty((var_128_string + (var_129_int + 1)), var_130_bool);
			if(!var_130_bool) { //@nz
			} else {
				var_129_int += 1;
			}
		}
		if(!var_129_int) { //@nz
			var_121_bool = false;
			return 10;
		}
		var_131_int = 0;
		if(var_129_int > 1)
			@irand(var_131_int, var_129_int);
		var_122_object->GetProperty((var_128_string + (var_131_int + 1)), var_132_string);
		bool var_153_bool; string var_154_string;
		var_132_string = var_154_string;
		func_857(var_153_bool, var_154_string);
		var_153_bool = var_121_bool;
		return 10;

	}
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_174_object, object var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_181_bool = false;
		bool var_182_bool = false;
		bool var_183_bool;
		func_921(var_1_object);
		if(var_183_bool != 0) {
			bool var_191_bool;
			func_933(var_1_object);
			if(!var_191_bool) //@nz
				var_182_bool = true;
		}
		if(var_182_bool != 0) {
			bool var_198_bool;
			func_945(var_1_object);
			if(var_198_bool != 0)
				var_181_bool = true;
		}
		if(var_181_bool != 0) {
			object var_204_object; object var_205_object;
			var_204_object = var_1_object;
			var_205_object = var_0_object;
			func_909();
			func_227(var_175_object, "Neutral");
			var_0_object->SetMessage(524699); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(524700, 28105, 26039); //@t
			var_0_object->AddReply(526838, 28123, 28122); //@t
			var_0_object->AddReply(542096, 28125, 44396); //@t
		} else {
					bool var_253_bool = false;
					bool var_254_bool;
					func_933(var_1_object);
					if(var_254_bool != 0) {
						bool var_256_bool;
						func_957(var_1_object);
						if(var_256_bool != 0)
							var_253_bool = true;
					}
					if(var_253_bool == 0) goto Label_175;
					object var_262_object; object var_263_object;
					var_262_object = var_1_object;
					var_263_object = var_0_object;
					func_915();
					func_227(var_175_object, "Neutral");
					var_0_object->SetMessage(524714); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524715, 28112, 26054); //@t
		}
	}
Label_197:
	for(;;) {
		bool var_235_bool;
		func_994(var_235_bool);
		if(var_235_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_826(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_226;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_226:
			return 0;

		}

	}
	
Label_175:
	func_227(var_175_object, "Neutral");
	var_0_object->SetMessage(526834); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(526835, -1, 28118); //@t
	var_0_object->AddReply(526836, -1, 28119); //@t
	goto Label_197;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


// @pe
void func_915(void)
{
	@SetVariable("ook1Danko2", 1);
}


void func_599(bool var_8_bool)
{
	var_8_bool = true;
}


// @pe
void func_921(bool var_183_bool)
{
	int var_185_int;
	func_895(var_185_int, "k1q01");
	if(var_185_int == 4)
		var_183_bool = true;
	var_183_bool = false;
}


void func_601(bool var_18_bool, object var_19_object, float var_20_float)
{
	cvector var_31_cvector; bool var_38_bool;
	var_19_object->GetPosition(var_31_cvector);
	float var_30_float;
	var_19_object->GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_39_float + var_30_float);
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	@GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (var_40_float + var_30_float);
	cvector var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_43_float = sqrt(var_33_cvector | var_33_cvector);
	var_33_cvector /= var_43_float;
	cvector var_34_cvector = -var_33_cvector;
	cvector var_45_cvector;
	func_885(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * var_20_float) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector, true);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_59_float, var_60_float);
	bool var_61_bool;
	func_994(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_664;
		@LookAsyncCamera("head");
	}
Label_664:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_986(int var_67_int)
{
	var_67_int = 515573;
}


void func_857(bool var_113_bool, string var_114_string)
{
	bool var_116_bool;
	bool var_117_bool;
	func_994(var_117_bool);
	if(var_117_bool != 0) {
		@lshHasSpeech(var_116_bool, var_114_string);
		if(var_116_bool != 0) {
			@lshPlaySpeech(var_114_string);
			var_113_bool = true;
		}
	}
	var_113_bool = false;
}


void func_988(int var_66_int)
{
	var_66_int = 504032;
}


void func_670(void)
{
	bool var_282_bool;
	@CameraSwitchToNormal(true);
	bool var_284_bool;
	func_994(var_284_bool);
	if(var_284_bool != 0) {
	} else {
		@HasAnimationTrack(var_282_bool, "head");
		if(var_282_bool == 0) goto Label_687;
		@UnlookAsync("head");
	}
Label_687:
	
}


void func_990(string var_68_string)
{
	var_68_string = "ui/NPC_Bakalavr.png";
}


void func_992(string var_69_string)
{
	var_69_string = "ui/NPC_Bakalavr_b.png";
}


void func_994(bool var_61_bool)
{
	var_61_bool = true;
}


// @pe
void func_227(object var_2_object, string var_208_string)
{
	bool var_209_bool;
	func_994(var_209_bool);
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
	func_842(var_212_string, var_213_bool);
	var_2_object = var_208_string;
	
}


// @pe
void func_933(bool var_191_bool)
{
	int var_193_int;
	func_895(var_193_int, "k1q01Healed");
	if(var_193_int != 0) {
		var_191_bool = true;
		return 0;
	}
	var_191_bool = false;
}


void func_872(void)
{
	bool var_9_bool;
	func_994(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_746(bool var_90_bool, object var_91_object)
{
	string var_97_string; bool var_99_bool; int var_100_int; string var_101_string;
	var_97_string = "c";
	int var_98_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_91_object->HasProperty((var_97_string + (var_98_int + 1)), var_99_bool);
			if(!var_99_bool) { //@nz
			} else {
				var_98_int += 1;
			}
		}
		if(!var_98_int) { //@nz
			var_90_bool = false;
			return 10;
		}
		var_100_int = 0;
		if(var_98_int > 1)
			@irand(var_100_int, var_98_int);
		var_91_object->GetProperty((var_97_string + (var_100_int + 1)), var_101_string);
		bool var_113_bool; string var_114_string;
		var_101_string = var_114_string;
		func_857(var_113_bool, var_114_string);
		var_113_bool = var_90_bool;
		return 10;

	}
}


void func_879(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_688(bool var_79_bool, object var_80_object)
{
	int var_86_int; int var_87_int;
	@GetVariable("voice_common", var_86_int);
	if(var_86_int != 0) {
		bool var_90_bool; object var_91_object;
		var_80_object = var_91_object;
		func_746(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			bool var_121_bool; object var_122_object;
			var_80_object = var_122_object;
			func_783(var_121_bool, var_122_object);
			if(!var_121_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@irand(var_87_int, 2);
		if(var_87_int != 0)
			@SetVariable("voice_common", ((var_86_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_166_bool; object var_167_object;
		var_80_object = var_167_object;
		func_783(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			bool var_169_bool; object var_170_object;
			var_80_object = var_170_object;
			func_746(var_169_bool, var_170_object);
			if(!var_169_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_744;
	
Label_744:
	var_79_bool = true;
	
}


// @pe
void func_945(bool var_198_bool)
{
	int var_200_int;
	func_895(var_200_int, "ook1Danko1");
	if(var_200_int == 0) {
		var_198_bool = true;
		return 0;
	}
	var_198_bool = false;
}


void func_885(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_826(string var_237_string)
{
	bool var_241_bool; float var_242_float; float var_243_float;
	@lshHasAnimation(var_241_bool, var_237_string);
	if(var_241_bool != 0) {
		@lshGetAnimTimes(var_237_string, var_242_float, var_243_float);
		@lshPlayAnimation(var_242_float, var_243_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_237_string);
	}
	
}


// @pe
void func_957(bool var_256_bool)
{
	int var_258_int;
	func_895(var_258_int, "ook1Danko2");
	if(var_258_int == 0) {
		var_256_bool = true;
		return 0;
	}
	var_256_bool = false;
}


void func_895(int var_185_int, string var_186_string)
{
	int var_188_int;
	@GetVariable(var_186_string, var_188_int);
	var_188_int = var_185_int;
}


