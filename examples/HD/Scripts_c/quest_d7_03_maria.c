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
			func_674();
			if(var_6_int == 34774) {
				bool var_12_bool;
				func_717(var_1_object);
				if(var_12_bool != 0) {
					object var_20_object; object var_21_object;
					var_20_object = var_1_object;
					var_21_object = var_0_object;
					func_711();
					func_169(var_7_bool, "Rage");
					var_0_object->SetMessage(533260); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(533261, 34776, 34775); //@t
					var_0_object->AddReply(535781, 34776, 37465); //@t
					return 0;
				}
				func_169(var_7_bool, "Angry");
				var_0_object->SetMessage(533258); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533259, -1, 34773); //@t
				var_0_object->AddReply(535778, -1, 37462); //@t
				return 0;
			}
			if(var_6_int == 34776) {
				func_169(var_7_bool, "Angry");
				var_0_object->SetMessage(533262); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533263, 37460, 34777); //@t
				var_0_object->AddReply(535782, 37467, 37466); //@t
				return 0;
			}
			if(var_6_int == 37467) {
				func_169(var_7_bool, "Angry");
				var_0_object->SetMessage(535783); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535784, 37463, 37468); //@t
				return 0;
			}
			if(var_6_int == 37460) {
				func_169(var_7_bool, "Angry");
				var_0_object->SetMessage(535776); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535777, 37463, 37461); //@t
				return 0;
			}
			if(var_6_int == 37463) {
				func_169(var_7_bool, "Staring");
				var_0_object->SetMessage(535779); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535780, -1, 37464); //@t
				var_0_object->AddReply(535785, -1, 37469); //@t
				return 0;
			}
			var_3_string = true;
			bool var_90_bool;
			func_754(var_90_bool);
			if(var_90_bool != 0)
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
				func_401(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_681(var_14_object);
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
			func_401(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_681(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_403(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_748(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_746(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_750(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_752(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_729(var_70_int);
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
	func_681(var_81_object);
	var_81_object = var_80_object;
	func_490(var_79_bool, var_80_object);
	object var_174_object; object var_175_object;
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_243_bool = !var_17_bool; //@nz
		if(var_243_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_244_object;
	var_8_object = var_244_object;
	func_472();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_644(string var_197_string, bool var_198_bool)
{
	bool var_204_bool; float var_205_float; float var_206_float;
	@lshHasAnimation(var_204_bool, var_197_string);
	if(var_204_bool != 0) {
		@lshGetAnimTimes(var_197_string, var_205_float, var_206_float);
		@lshPlayAnimation(var_205_float, var_206_float, var_198_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_197_string);
	}
	
}


// @pe
void func_711(void)
{
	@SetVariable("ood7MariaPetr1", 1);
}


void func_585(bool var_121_bool, object var_122_object)
{
	bool var_130_bool; int var_131_int; string var_132_string;
	int var_134_int;
	func_702(var_134_int);
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
		func_659(var_153_bool, var_154_string);
		var_153_bool = var_121_bool;
		return 10;

	}
}


// @pe
void func_717(bool var_181_bool)
{
	int var_183_int;
	func_697(var_183_int, "ood7MariaPetr1");
	if(var_183_int == 0) {
		var_181_bool = true;
		return 0;
	}
	var_181_bool = false;
}


void func_401(bool var_8_bool)
{
	var_8_bool = true;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_174_object, object var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_181_bool;
		func_717(var_1_object);
		if(var_181_bool != 0) {
			object var_189_object; object var_190_object;
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_711();
			func_169(var_175_object, "Rage");
			var_0_object->SetMessage(533260); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(533261, 34776, 34775); //@t
			var_0_object->AddReply(535781, 34776, 37465); //@t
		} else {
					func_169(var_175_object, "Angry");
					var_0_object->SetMessage(533258); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(533259, -1, 34773); //@t
					var_0_object->AddReply(535778, -1, 37462); //@t
		}
	}
	for(;;) {
		bool var_217_bool;
		func_754(var_217_bool);
		if(var_217_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_628(var_2_object);
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


void func_403(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_687(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_754(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_466;
		@LookAsyncCamera("head");
	}
Label_466:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_659(bool var_113_bool, string var_114_string)
{
	bool var_116_bool;
	bool var_117_bool;
	func_754(var_117_bool);
	if(var_117_bool != 0) {
		@lshHasSpeech(var_116_bool, var_114_string);
		if(var_116_bool != 0) {
			@lshPlaySpeech(var_114_string);
			var_113_bool = true;
		}
	}
	var_113_bool = false;
}


void func_472(void)
{
	bool var_246_bool;
	@CameraSwitchToNormal(true);
	bool var_248_bool;
	func_754(var_248_bool);
	if(var_248_bool != 0) {
	} else {
		@HasAnimationTrack(var_246_bool, "head");
		if(var_246_bool == 0) goto Label_489;
		@UnlookAsync("head");
	}
Label_489:
	
}


void func_729(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x2e8";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


void func_674(void)
{
	bool var_9_bool;
	func_754(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_548(bool var_90_bool, object var_91_object)
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
		func_659(var_113_bool, var_114_string);
		var_113_bool = var_90_bool;
		return 10;

	}
}


void func_681(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_169(object var_2_object, string var_193_string)
{
	bool var_194_bool;
	func_754(var_194_bool);
	if(!var_194_bool) //@nz
		return 0;
	if(var_193_string == var_2_object)
		return 0;
	string var_197_string; bool var_198_bool;
	var_193_string = var_197_string;
	if(var_193_string == "")
		var_198_bool = false;
	else
		var_198_bool = true;
	func_644(var_197_string, var_198_bool);
	var_2_object = var_193_string;
	
}


void func_746(int var_67_int)
{
	var_67_int = 515543;
}


void func_490(bool var_79_bool, object var_80_object)
{
	int var_86_int; int var_87_int;
	@GetVariable("voice_common", var_86_int);
	if(var_86_int != 0) {
		bool var_90_bool; object var_91_object;
		var_80_object = var_91_object;
		func_548(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			bool var_121_bool; object var_122_object;
			var_80_object = var_122_object;
			func_585(var_121_bool, var_122_object);
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
		func_585(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			bool var_169_bool; object var_170_object;
			var_80_object = var_170_object;
			func_548(var_169_bool, var_170_object);
			if(!var_169_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_546;
	
Label_546:
	var_79_bool = true;
	
}


void func_748(int var_66_int)
{
	var_66_int = 502868;
}


void func_750(string var_68_string)
{
	var_68_string = "ui/NPC_Maria.png";
}


void func_687(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_752(string var_69_string)
{
	var_69_string = "ui/NPC_Maria_b.png";
}


void func_754(bool var_61_bool)
{
	var_61_bool = true;
}


void func_628(string var_219_string)
{
	bool var_223_bool; float var_224_float; float var_225_float;
	@lshHasAnimation(var_223_bool, var_219_string);
	if(var_223_bool != 0) {
		@lshGetAnimTimes(var_219_string, var_224_float, var_225_float);
		@lshPlayAnimation(var_224_float, var_225_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_219_string);
	}
	
}


void func_697(int var_183_int, string var_184_string)
{
	int var_186_int;
	@GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
}


void func_702(int var_134_int)
{
	float var_136_float;
	@GetGameTime(var_136_float);
	var_134_int = 1 + (var_136_float / 24);
}


