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
			func_823();
			if(var_7_bool == 34738) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_878();
			}
			if(var_7_bool == 37544) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_878();
			}
			if(var_6_int == 34729) {
				bool var_49_bool;
				func_888(var_1_object);
				if(var_49_bool != 0) {
					object var_57_object; object var_58_object;
					var_57_object = var_1_object;
					var_58_object = var_0_object;
					func_872();
					func_169(var_7_bool, "Grin");
					var_0_object->SetMessage(533209); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(535195, 36867, 36866); //@t
					var_0_object->AddReply(535202, 36867, 36873); //@t
					return 0;
				}
				func_169(var_7_bool, "Untrust");
				var_0_object->SetMessage(533219); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533220, -1, 34740); //@t
				var_0_object->AddReply(535201, -1, 36872); //@t
				return 0;
			}
			if(var_6_int == 36867) {
				func_169(var_7_bool, "Untrust");
				var_0_object->SetMessage(535196); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535197, 36869, 36868); //@t
				var_0_object->AddReply(535200, 37527, 36871); //@t
				return 0;
			}
			if(var_6_int == 36869) {
				func_169(var_7_bool, "Untrust");
				var_0_object->SetMessage(535198); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535831, 37526, 37525); //@t
				var_0_object->AddReply(535828, 37538, 37522); //@t
				return 0;
			}
			if(var_6_int == 37526) {
				func_169(var_7_bool, "Untrust");
				var_0_object->SetMessage(535832); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535199, 37527, 36870); //@t
				var_0_object->AddReply(535194, 34731, 36865); //@t
				return 0;
			}
			if(var_6_int == 34731) {
				func_169(var_7_bool, "Untrust");
				var_0_object->SetMessage(533211); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533212, 34733, 34732); //@t
				var_0_object->AddReply(535834, 37538, 37528); //@t
				return 0;
			}
			if(var_6_int == 37538) {
				func_169(var_7_bool, "Smile");
				var_0_object->SetMessage(535843); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535844, 37533, 37539); //@t
				return 0;
			}
			if(var_6_int == 37527) {
				func_169(var_7_bool, "Untrust");
				var_0_object->SetMessage(535833); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535835, 34733, 37529); //@t
				var_0_object->AddReply(535845, 37533, 37542); //@t
				return 0;
			}
			if(var_6_int == 34733) {
				func_169(var_7_bool, "Neutral");
				var_0_object->SetMessage(533213); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533214, 34735, 34734); //@t
				var_0_object->AddReply(535842, 34735, 37537); //@t
				return 0;
			}
			if(var_6_int == 34735) {
				func_169(var_7_bool, "Neutral");
				var_0_object->SetMessage(533215); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533216, 37533, 34736); //@t
				return 0;
			}
			if(var_6_int == 37533) {
				func_169(var_7_bool, "Untrust");
				var_0_object->SetMessage(535838); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535840, 37536, 37535); //@t
				var_0_object->AddReply(535846, -1, 37544); //@t
				return 0;
			}
			if(var_6_int == 37536) {
				func_169(var_7_bool, "Untrust");
				var_0_object->SetMessage(535841); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533218, -1, 34738); //@t
				return 0;
			}
			var_3_string = true;
			bool var_184_bool;
			func_979(var_184_bool);
			if(var_184_bool != 0)
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
				func_550(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_830(var_14_object);
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
			func_550(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_830(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_552(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_973(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_971(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_975(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_977(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_954(var_70_int);
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
	func_830(var_81_object);
	var_81_object = var_80_object;
	func_639(var_79_bool, var_80_object);
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
	func_621();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_900(void)
{
	object var_15_object;
	@CreateDiaryEntry(var_15_object, 640, 2, 533226);
	bool var_19_bool; object var_20_object;
	var_15_object = var_20_object;
	func_926(var_19_bool, var_20_object, 637);
}
EMIT "Stack[-1] = 0";


void func_836(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_777(string var_219_string)
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


void func_971(int var_67_int)
{
	var_67_int = 515529;
}


void func_973(int var_66_int)
{
	var_66_int = 502855;
}


void func_846(int var_183_int, string var_184_string)
{
	int var_186_int;
	@GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
}


void func_975(string var_68_string)
{
	var_68_string = "ui/NPC_Andrei.png";
}


void func_913(object var_28_object)
{
	object var_30_object;
	@GetDiaryRoot(var_30_object);
	if(!var_30_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_28_object = false;
	}
	var_30_object = var_28_object;
}
EMIT "Stack[-1] = 0";


void func_977(string var_69_string)
{
	var_69_string = "ui/NPC_Andrei_b.png";
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_174_object, object var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_181_bool;
		func_888(var_1_object);
		if(var_181_bool != 0) {
			object var_189_object; object var_190_object;
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_872();
			func_169(var_175_object, "Grin");
			var_0_object->SetMessage(533209); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(535195, 36867, 36866); //@t
			var_0_object->AddReply(535202, 36867, 36873); //@t
		} else {
					func_169(var_175_object, "Untrust");
					var_0_object->SetMessage(533219); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(533220, -1, 34740); //@t
					var_0_object->AddReply(535201, -1, 36872); //@t
		}
	}
	for(;;) {
		bool var_217_bool;
		func_979(var_217_bool);
		if(var_217_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_777(var_2_object);
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


void func_979(bool var_61_bool)
{
	var_61_bool = true;
}


void func_851(bool var_37_bool, string var_38_string, string var_39_string)
{
	object var_41_object;
	@FindActor(var_41_object, var_38_string);
	if(var_41_object == null)
		var_37_bool = false;
	@Trigger(var_41_object, var_39_string);
	var_37_bool = true;
}
EMIT "Stack[-1] = 0";


void func_793(string var_197_string, bool var_198_bool)
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


void func_926(bool var_19_bool, object var_20_object, int var_21_int)
{
	object var_28_object;
	func_913(var_28_object);
	object var_25_object;
	var_28_object = var_25_object;
	object var_26_object;
	var_25_object->Find(var_21_int, var_26_object);
	if(!var_26_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_21_int);
		var_19_bool = false;
	}
	var_26_object->AddChild(var_20_object);
	@SendWorldWndMessage(7);
	int var_27_int;
	var_20_object->GetCategory(var_27_int);
	@SetDiarySection(var_27_int);
	var_19_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_734(bool var_121_bool, object var_122_object)
{
	bool var_130_bool; int var_131_int; string var_132_string;
	int var_134_int;
	func_863(var_134_int);
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
		func_808(var_153_bool, var_154_string);
		var_153_bool = var_121_bool;
		return 10;

	}
}


void func_863(int var_134_int)
{
	float var_136_float;
	@GetGameTime(var_136_float);
	var_134_int = 1 + (var_136_float / 24);
}


void func_550(bool var_8_bool)
{
	var_8_bool = true;
}


void func_552(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_836(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_979(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_615;
		@LookAsyncCamera("head");
	}
Label_615:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


// @pe
void func_169(object var_2_object, string var_193_string)
{
	bool var_194_bool;
	func_979(var_194_bool);
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
	func_793(var_197_string, var_198_bool);
	var_2_object = var_193_string;
	
}


void func_808(bool var_113_bool, string var_114_string)
{
	bool var_116_bool;
	bool var_117_bool;
	func_979(var_117_bool);
	if(var_117_bool != 0) {
		@lshHasSpeech(var_116_bool, var_114_string);
		if(var_116_bool != 0) {
			@lshPlaySpeech(var_114_string);
			var_113_bool = true;
		}
	}
	var_113_bool = false;
}


// @pe
void func_872(void)
{
	@SetVariable("ood7AndreiPrisoned1", 1);
}


void func_621(void)
{
	bool var_246_bool;
	@CameraSwitchToNormal(true);
	bool var_248_bool;
	func_979(var_248_bool);
	if(var_248_bool != 0) {
	} else {
		@HasAnimationTrack(var_246_bool, "head");
		if(var_246_bool == 0) goto Label_638;
		@UnlookAsync("head");
	}
Label_638:
	
}


// @pe
void func_878(void)
{
	func_900();
	bool var_37_bool;
	func_851(var_37_bool, "quest_d7_04", "completed");
}


void func_823(void)
{
	bool var_9_bool;
	func_979(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_888(bool var_181_bool)
{
	int var_183_int;
	func_846(var_183_int, "ood7AndreiPrisoned1");
	if(var_183_int == 0) {
		var_181_bool = true;
		return 0;
	}
	var_181_bool = false;
}


void func_697(bool var_90_bool, object var_91_object)
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
		func_808(var_113_bool, var_114_string);
		var_113_bool = var_90_bool;
		return 10;

	}
}


void func_954(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x3c9";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


void func_830(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_639(bool var_79_bool, object var_80_object)
{
	int var_86_int; int var_87_int;
	@GetVariable("voice_common", var_86_int);
	if(var_86_int != 0) {
		bool var_90_bool; object var_91_object;
		var_80_object = var_91_object;
		func_697(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			bool var_121_bool; object var_122_object;
			var_80_object = var_122_object;
			func_734(var_121_bool, var_122_object);
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
		func_734(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			bool var_169_bool; object var_170_object;
			var_80_object = var_170_object;
			func_697(var_169_bool, var_170_object);
			if(!var_169_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_695;
	
Label_695:
	var_79_bool = true;
	
}


