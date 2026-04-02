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
			func_803();
			if(var_7_bool == 34738) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_858();
			}
			if(var_7_bool == 37544) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_858();
			}
			if(var_6_int == 34729) {
				bool var_49_bool;
				func_868(var_1_object);
				if(var_49_bool != 0) {
					object var_57_object; object var_58_object;
					var_57_object = var_1_object;
					var_58_object = var_0_object;
					func_852();
					func_169(var_7_bool, "Neutral");
					var_0_object->SetMessage(533209); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(535195, 36867, 36866); //@t
					var_0_object->AddReply(535202, 36867, 36873); //@t
					return 0;
				}
				func_169(var_7_bool, "Neutral");
				var_0_object->SetMessage(533219); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533220, -1, 34740); //@t
				var_0_object->AddReply(535201, -1, 36872); //@t
				return 0;
			}
			if(var_6_int == 36867) {
				func_169(var_7_bool, "Neutral");
				var_0_object->SetMessage(535196); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535197, 36869, 36868); //@t
				var_0_object->AddReply(535200, 37527, 36871); //@t
				return 0;
			}
			if(var_6_int == 36869) {
				func_169(var_7_bool, "Neutral");
				var_0_object->SetMessage(535198); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535831, 37526, 37525); //@t
				var_0_object->AddReply(535828, 37538, 37522); //@t
				return 0;
			}
			if(var_6_int == 37526) {
				func_169(var_7_bool, "Neutral");
				var_0_object->SetMessage(535832); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535199, 37527, 36870); //@t
				var_0_object->AddReply(535194, 34731, 36865); //@t
				return 0;
			}
			if(var_6_int == 34731) {
				func_169(var_7_bool, "Neutral");
				var_0_object->SetMessage(533211); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533212, 34733, 34732); //@t
				var_0_object->AddReply(535834, 37538, 37528); //@t
				return 0;
			}
			if(var_6_int == 37538) {
				func_169(var_7_bool, "Neutral");
				var_0_object->SetMessage(535843); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535844, 37533, 37539); //@t
				return 0;
			}
			if(var_6_int == 37527) {
				func_169(var_7_bool, "Neutral");
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
				func_169(var_7_bool, "Neutral");
				var_0_object->SetMessage(535838); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535840, 37536, 37535); //@t
				var_0_object->AddReply(535846, -1, 37544); //@t
				return 0;
			}
			if(var_6_int == 37536) {
				func_169(var_7_bool, "Neutral");
				var_0_object->SetMessage(535841); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533218, -1, 34738); //@t
				return 0;
			}
			var_3_string = true;
			bool var_179_bool;
			func_959(var_179_bool);
			if(var_179_bool != 0)
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
				func_810(var_14_object);
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
			func_810(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	object var_20_object;
	func_810(var_20_object);
	var_20_object = var_19_object;
	func_637(var_18_bool, var_19_object);
	bool var_113_bool; object var_114_object;
	var_8_object = var_114_object;
	func_552(var_113_bool, var_114_object, 70.0);
	if(!var_113_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_160_int;
	func_953(var_160_int);
	var_14_object->SetNPCName(var_160_int);
	int var_161_int;
	func_951(var_161_int);
	var_14_object->SetNPCDescription(var_161_int);
	string var_162_string;
	func_955(var_162_string);
	var_14_object->SetPhoto(var_162_string);
	string var_163_string;
	func_957(var_163_string);
	var_14_object->SetPhoto2(var_163_string);
	int var_164_int;
	func_934(var_164_int);
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
		var_232_bool = !var_17_bool; //@nz
		if(var_232_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_233_object;
	var_8_object = var_233_object;
	func_620();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_775(string var_213_string)
{
	float var_216_float; float var_217_float;
	@lshGetAnimTimes(var_213_string, var_216_float, var_217_float);
	@lshPlayAnimation(var_216_float, var_217_float, false);
}


void func_906(bool var_19_bool, object var_20_object, int var_21_int)
{
	object var_28_object;
	func_893(var_28_object);
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


void func_843(int var_73_int)
{
	float var_75_float;
	@GetGameTime(var_75_float);
	var_73_int = 1 + (var_75_float / 24);
}


void func_893(object var_28_object)
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


void func_782(string var_196_string, bool var_197_bool)
{
	float var_202_float; float var_203_float;
	@lshGetAnimTimes(var_196_string, var_202_float, var_203_float);
	@lshPlayAnimation(var_202_float, var_203_float, var_197_bool);
}


void func_957(string var_163_string)
{
	var_163_string = "ui/NPC_Andrei_b.png";
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_173_object, object var_174_object)
{
	var_0_object = var_174_object;
	var_1_object = var_173_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_180_bool;
		func_868(var_1_object);
		if(var_180_bool != 0) {
			object var_188_object; object var_189_object;
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_852();
			func_169(var_174_object, "Neutral");
			var_0_object->SetMessage(533209); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(535195, 36867, 36866); //@t
			var_0_object->AddReply(535202, 36867, 36873); //@t
		} else {
					func_169(var_174_object, "Neutral");
					var_0_object->SetMessage(533219); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(533220, -1, 34740); //@t
					var_0_object->AddReply(535201, -1, 36872); //@t
		}
	}
	for(;;) {
		bool var_211_bool;
		func_959(var_211_bool);
		if(var_211_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_775(var_2_object);
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


void func_788(bool var_52_bool, string var_53_string)
{
	bool var_55_bool;
	bool var_56_bool;
	func_959(var_56_bool);
	if(var_56_bool != 0) {
		@lshHasSpeech(var_55_bool, var_53_string);
		if(var_55_bool != 0) {
			@lshPlaySpeech(var_53_string);
			var_52_bool = true;
		}
	}
	var_52_bool = false;
}


void func_831(bool var_37_bool, string var_38_string, string var_39_string)
{
	object var_41_object;
	@FindActor(var_41_object, var_38_string);
	if(var_41_object == null)
		var_37_bool = false;
	@Trigger(var_41_object, var_39_string);
	var_37_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_852(void)
{
	@SetVariable("ood7AndreiPrisoned1", 1);
}


// @pe
void func_858(void)
{
	func_880();
	bool var_37_bool;
	func_831(var_37_bool, "quest_d7_04", "completed");
}


void func_732(bool var_60_bool, object var_61_object)
{
	bool var_69_bool; int var_70_int; string var_71_string;
	int var_73_int;
	func_843(var_73_int);
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
		func_788(var_92_bool, var_93_string);
		var_92_bool = var_60_bool;
		return 10;

	}
}


void func_803(void)
{
	bool var_9_bool;
	func_959(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_868(bool var_180_bool)
{
	int var_182_int;
	func_826(var_182_int, "ood7AndreiPrisoned1");
	if(var_182_int == 0) {
		var_180_bool = true;
		return 0;
	}
	var_180_bool = false;
}


void func_934(int var_164_int)
{
	int var_166_int;
	@GetVariable("branch", var_166_int);
	if(var_166_int == 0) {
		var_164_int = 1;
		return 2;
	EMIT "GOTO 0x3b5";
	}
	if(var_166_int == 1) {
		var_164_int = 2;
		return 2;
	}
	var_164_int = 3;
}


void func_550(bool var_8_bool)
{
	var_8_bool = true;
}


void func_552(bool var_113_bool, object var_114_object, float var_115_float)
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
	func_816(var_140_cvector, (var_129_cvector ^ [0.0, 1.0, 0.0]));
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
	func_959(var_155_bool);
	if(var_155_bool != 0) {
	} else {
		@HasAnimationTrack(var_133_bool, "head");
		if(var_133_bool == 0) goto Label_614;
		@LookAsyncCamera("head");
	}
Label_614:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_113_bool = true;
	
}


// @pe
void func_169(object var_2_object, string var_192_string)
{
	bool var_193_bool;
	func_959(var_193_bool);
	if(!var_193_bool) //@nz
		return 0;
	if(var_192_string == var_2_object)
		return 0;
	string var_196_string; bool var_197_bool;
	var_192_string = var_196_string;
	if(var_192_string == "")
		var_197_bool = false;
	else
		var_197_bool = true;
	func_782(var_196_string, var_197_bool);
	var_2_object = var_192_string;
	
}


void func_810(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_620(void)
{
	bool var_235_bool;
	@CameraSwitchToNormal();
	bool var_236_bool;
	func_959(var_236_bool);
	if(var_236_bool != 0) {
	} else {
		@HasAnimationTrack(var_235_bool, "head");
		if(var_235_bool == 0) goto Label_636;
		@UnlookAsync("head");
	}
Label_636:
	
}


void func_816(cvector var_140_cvector, cvector var_141_cvector)
{
	float var_144_float = sqrt(var_141_cvector | var_141_cvector);
	if(var_144_float < 0.000001)
		var_140_cvector = [0.0, 0.0, 0.0];
	var_140_cvector = var_141_cvector / var_144_float;
}


void func_951(int var_161_int)
{
	var_161_int = 515529;
}


void func_880(void)
{
	object var_15_object;
	@CreateDiaryEntry(var_15_object, 640, 2, 533226);
	bool var_19_bool; object var_20_object;
	var_15_object = var_20_object;
	func_906(var_19_bool, var_20_object, 637);
}
EMIT "Stack[-1] = 0";


void func_695(bool var_29_bool, object var_30_object)
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
		func_788(var_52_bool, var_53_string);
		var_52_bool = var_29_bool;
		return 10;

	}
}


void func_953(int var_160_int)
{
	var_160_int = 502855;
}


void func_826(int var_182_int, string var_183_string)
{
	int var_185_int;
	@GetVariable(var_183_string, var_185_int);
	var_185_int = var_182_int;
}


void func_955(string var_162_string)
{
	var_162_string = "ui/NPC_Andrei.png";
}


void func_637(bool var_18_bool, object var_19_object)
{
	int var_25_int; int var_26_int;
	@GetVariable("voice_common", var_25_int);
	if(var_25_int != 0) {
		bool var_29_bool; object var_30_object;
		var_19_object = var_30_object;
		func_695(var_29_bool, var_30_object);
		if(!var_29_bool) { //@nz
			bool var_60_bool; object var_61_object;
			var_19_object = var_61_object;
			func_732(var_60_bool, var_61_object);
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
		func_732(var_105_bool, var_106_object);
		if(!var_105_bool) { //@nz
			bool var_108_bool; object var_109_object;
			var_19_object = var_109_object;
			func_695(var_108_bool, var_109_object);
			if(!var_108_bool) { //@nz
				var_18_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_693;
	
Label_693:
	var_18_bool = true;
	
}


void func_959(bool var_56_bool)
{
	var_56_bool = true;
}


