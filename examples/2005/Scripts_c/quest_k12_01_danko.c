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
			func_548();
			if(var_6_int == 41147) {
				bool var_12_bool;
				func_585(var_1_object);
				if(!var_12_bool) { //@nz
					func_155(var_7_bool, "Neutral");
					var_0_object->SetMessage(539204); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539205, -1, 41148); //@t
					return 0;
				}
				func_155(var_7_bool, "Neutral");
				var_0_object->SetMessage(539206); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539207, -1, 41150); //@t
				return 0;
			}
			var_3_string = true;
			bool var_42_bool;
			func_622(var_42_bool);
			if(var_42_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb2";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		func_247();
	}

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
				func_295(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_555(var_14_object);
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
			func_295(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_555(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	object var_20_object;
	func_555(var_20_object);
	var_20_object = var_19_object;
	func_382(var_18_bool, var_19_object);
	bool var_113_bool; object var_114_object;
	var_8_object = var_114_object;
	func_297(var_113_bool, var_114_object, 70.0);
	if(!var_113_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_160_int;
	func_616(var_160_int);
	var_14_object->SetNPCName(var_160_int);
	int var_161_int;
	func_614(var_161_int);
	var_14_object->SetNPCDescription(var_161_int);
	string var_162_string;
	func_618(var_162_string);
	var_14_object->SetPhoto(var_162_string);
	string var_163_string;
	func_620(var_163_string);
	var_14_object->SetPhoto2(var_163_string);
	int var_164_int;
	func_597(var_164_int);
	var_14_object->SetPlayerName(var_164_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_173_object; object var_174_object;
	var_8_object = var_173_object;
	var_14_object = var_174_object;
	TaskCall(1);
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_223_bool = !var_17_bool; //@nz
		if(var_223_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_224_object;
	var_8_object = var_224_object;
	func_365();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_576(int var_73_int)
{
	float var_75_float;
	@GetGameTime(var_75_float);
	var_73_int = 1 + (var_75_float / 24);
}


void func_520(string var_207_string)
{
	float var_210_float; float var_211_float;
	@lshGetAnimTimes(var_207_string, var_210_float, var_211_float);
	@lshPlayAnimation(var_210_float, var_211_float, false);
}


// @pe
void func_585(bool var_180_bool)
{
	int var_182_int;
	func_571(var_182_int, "game_final");
	if(var_182_int != 0) {
		var_180_bool = true;
		return 0;
	}
	var_180_bool = false;
}


void func_527(string var_193_string, bool var_194_bool)
{
	float var_199_float; float var_200_float;
	@lshGetAnimTimes(var_193_string, var_199_float, var_200_float);
	@lshPlayAnimation(var_199_float, var_200_float, var_194_bool);
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_173_object, object var_174_object)
{
	var_0_object = var_174_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_180_bool;
		func_585(var_173_object);
		if(!var_180_bool) { //@nz
			func_155(var_174_object, "Neutral");
			var_0_object->SetMessage(539204); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(539205, -1, 41148); //@t
		} else {
					func_155(var_174_object, "Neutral");
					var_0_object->SetMessage(539206); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539207, -1, 41150); //@t
		}
	}
	for(;;) {
		bool var_205_bool;
		func_622(var_205_bool);
		if(var_205_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_520(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_154;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_154:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_533(bool var_52_bool, string var_53_string)
{
	bool var_55_bool;
	bool var_56_bool;
	func_622(var_56_bool);
	if(var_56_bool != 0) {
		@lshHasSpeech(var_55_bool, var_53_string);
		if(var_55_bool != 0) {
			@lshPlaySpeech(var_53_string);
			var_52_bool = true;
		}
	}
	var_52_bool = false;
}


void func_597(int var_164_int)
{
	int var_166_int;
	@GetVariable("branch", var_166_int);
	if(var_166_int == 0) {
		var_164_int = 1;
		return 2;
	EMIT "GOTO 0x264";
	}
	if(var_166_int == 1) {
		var_164_int = 2;
		return 2;
	}
	var_164_int = 3;
}


// @pe
void func_155(object var_2_object, string var_189_string)
{
	bool var_190_bool;
	func_622(var_190_bool);
	if(!var_190_bool) //@nz
		return 0;
	if(var_189_string == var_2_object)
		return 0;
	string var_193_string; bool var_194_bool;
	var_189_string = var_193_string;
	if(var_189_string == "")
		var_194_bool = false;
	else
		var_194_bool = true;
	func_527(var_193_string, var_194_bool);
	var_2_object = var_189_string;
	
}


void func_477(bool var_60_bool, object var_61_object)
{
	bool var_69_bool; int var_70_int; string var_71_string;
	int var_73_int;
	func_576(var_73_int);
	string var_67_string = ("d" + var_73_int) + "m";
	int var_68_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_61_object->HasProperty((var_67_string + (var_68_int + 1)), var_69_bool);
			if(!var_69_bool) { //@nz
			} else {
				var_68_int += 1;
			}
		}
		if(!var_68_int) { //@nz
			var_60_bool = false;
			return 10;
		}
		var_70_int = 0;
		if(var_68_int > 1)
			@irand(var_70_int, var_68_int);
		var_61_object->GetProperty((var_67_string + (var_70_int + 1)), var_71_string);
		bool var_92_bool; string var_93_string;
		var_71_string = var_93_string;
		func_533(var_92_bool, var_93_string);
		var_92_bool = var_60_bool;
		return 10;

	}
}


void func_548(void)
{
	bool var_9_bool;
	func_622(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_614(int var_161_int)
{
	var_161_int = 515573;
}


void func_295(bool var_8_bool)
{
	var_8_bool = true;
}


void func_616(int var_160_int)
{
	var_160_int = 504032;
}


void func_297(bool var_113_bool, object var_114_object, float var_115_float)
{
	cvector var_126_cvector; bool var_133_bool;
	var_114_object->GetPosition(var_126_cvector);
	float var_125_float;
	var_114_object->GetEyesHeight(var_125_float);
	var_134_float = GetByIndex(var_126_cvector, 1);
	SetByIndex(var_126_cvector, 1) = (var_134_float + var_125_float);
	cvector var_127_cvector;
	@GetPosition(var_127_cvector);
	@GetEyesHeight(var_125_float);
	var_135_float = GetByIndex(var_127_cvector, 1);
	SetByIndex(var_127_cvector, 1) = (var_135_float + var_125_float);
	cvector var_128_cvector = var_126_cvector - var_127_cvector;
	var_136_float = GetByIndex(var_128_cvector, 1);
	SetByIndex(var_128_cvector, 1) = (float)0;
	var_138_float = sqrt(var_128_cvector | var_128_cvector);
	var_128_cvector /= var_138_float;
	cvector var_129_cvector = -var_128_cvector;
	cvector var_140_cvector;
	func_561(var_140_cvector, (var_129_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_130_cvector = ((var_128_cvector * var_115_float) + (var_140_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_132_bool;
	@IsOverrideActive(var_132_bool);
	if(var_132_bool != 0)
		var_113_bool = false;
	@StopWorld();
	@CameraTransit((var_127_cvector + var_130_cvector), var_129_cvector);
	var_153_float = GetByIndex(var_130_cvector, 0);
	var_154_float = GetByIndex(var_130_cvector, 2);
	@Rotate(var_153_float, var_154_float);
	bool var_155_bool;
	func_622(var_155_bool);
	if(var_155_bool != 0) {
	} else {
		@HasAnimationTrack(var_133_bool, "head");
		if(var_133_bool == 0) goto Label_359;
		@LookAsyncCamera("head");
	}
Label_359:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_113_bool = true;
	
}


void func_618(string var_162_string)
{
	var_162_string = "ui/NPC_Bakalavr.png";
}


void func_555(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_620(string var_163_string)
{
	var_163_string = "ui/NPC_Bakalavr_b.png";
}


void func_365(void)
{
	bool var_226_bool;
	@CameraSwitchToNormal();
	bool var_227_bool;
	func_622(var_227_bool);
	if(var_227_bool != 0) {
	} else {
		@HasAnimationTrack(var_226_bool, "head");
		if(var_226_bool == 0) goto Label_381;
		@UnlookAsync("head");
	}
Label_381:
	
}


void func_622(bool var_56_bool)
{
	var_56_bool = true;
}


void func_561(cvector var_140_cvector, cvector var_141_cvector)
{
	float var_144_float = sqrt(var_141_cvector | var_141_cvector);
	if(var_144_float < 0.000001)
		var_140_cvector = [0.0, 0.0, 0.0];
	var_140_cvector = var_141_cvector / var_144_float;
}


void func_247(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_440(bool var_29_bool, object var_30_object)
{
	string var_36_string; bool var_38_bool; int var_39_int; string var_40_string;
	var_36_string = "c";
	int var_37_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_30_object->HasProperty((var_36_string + (var_37_int + 1)), var_38_bool);
			if(!var_38_bool) { //@nz
			} else {
				var_37_int += 1;
			}
		}
		if(!var_37_int) { //@nz
			var_29_bool = false;
			return 10;
		}
		var_39_int = 0;
		if(var_37_int > 1)
			@irand(var_39_int, var_37_int);
		var_30_object->GetProperty((var_36_string + (var_39_int + 1)), var_40_string);
		bool var_52_bool; string var_53_string;
		var_40_string = var_53_string;
		func_533(var_52_bool, var_53_string);
		var_52_bool = var_29_bool;
		return 10;

	}
}


void func_571(int var_182_int, string var_183_string)
{
	int var_185_int;
	@GetVariable(var_183_string, var_185_int);
	var_185_int = var_182_int;
}


void func_382(bool var_18_bool, object var_19_object)
{
	int var_25_int; int var_26_int;
	@GetVariable("voice_common", var_25_int);
	if(var_25_int != 0) {
		bool var_29_bool; object var_30_object;
		var_19_object = var_30_object;
		func_440(var_29_bool, var_30_object);
		if(!var_29_bool) { //@nz
			bool var_60_bool; object var_61_object;
			var_19_object = var_61_object;
			func_477(var_60_bool, var_61_object);
			if(!var_60_bool) { //@nz
				var_18_bool = false;
				return 4;
			}
		}
		@irand(var_26_int, 2);
		if(var_26_int != 0)
			@SetVariable("voice_common", ((var_25_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_105_bool; object var_106_object;
		var_19_object = var_106_object;
		func_477(var_105_bool, var_106_object);
		if(!var_105_bool) { //@nz
			bool var_108_bool; object var_109_object;
			var_19_object = var_109_object;
			func_440(var_108_bool, var_109_object);
			if(!var_108_bool) { //@nz
				var_18_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_438;
	
Label_438:
	var_18_bool = true;
	
}


