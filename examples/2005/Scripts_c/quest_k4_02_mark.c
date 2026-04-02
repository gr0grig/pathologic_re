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
			func_775();
			if(var_7_bool == 27077) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_817();
				object var_55_object = var_1_object;
				func_840(var_0_object);
			}
			if(var_7_bool == 43034) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_817();
				object var_85_object = var_1_object;
				func_840(var_0_object);
			}
			if(var_6_int == 27074) {
				bool var_89_bool;
				func_856(var_1_object);
				if(var_89_bool != 0) {
					func_164(var_7_bool, "Neutral");
					var_0_object->SetMessage(525762); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(529224, 43014, 30677); //@t
					var_0_object->AddReply(529229, 30678, 30682); //@t
					return 0;
				}
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(525766); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525767, -1, 27079); //@t
				var_0_object->AddReply(529227, -1, 30680); //@t
				return 0;
			}
			if(var_6_int == 43014) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540934); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540935, 43016, 43015); //@t
				var_0_object->AddReply(540938, 43019, 43018); //@t
				return 0;
			}
			if(var_6_int == 43019) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540939); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540940, 43016, 43020); //@t
				return 0;
			}
			if(var_6_int == 43016) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540936); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540937, 43022, 43017); //@t
				var_0_object->AddReply(540943, 43022, 43024); //@t
				return 0;
			}
			if(var_6_int == 43022) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540941); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540942, 30678, 43023); //@t
				var_0_object->AddReply(540944, 43027, 43026); //@t
				return 0;
			}
			if(var_6_int == 43027) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540945); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540946, 43029, 43028); //@t
				return 0;
			}
			if(var_6_int == 43029) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540947); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540948, 30678, 43030); //@t
				return 0;
			}
			if(var_6_int == 30678) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(529225); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529226, 30681, 30679); //@t
				var_0_object->AddReply(540949, 30681, 43032); //@t
				return 0;
			}
			if(var_6_int == 30681) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(529228); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525763, 27076, 27075); //@t
				return 0;
			}
			if(var_6_int == 27076) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(525764); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525765, -1, 27077); //@t
				var_0_object->AddReply(540950, -1, 43034); //@t
				return 0;
			}
			var_3_string = true;
			bool var_202_bool;
			func_997(var_202_bool);
			if(var_202_bool != 0)
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
				func_522(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_782(var_14_object);
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
			func_522(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_782(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	object var_20_object;
	func_782(var_20_object);
	var_20_object = var_19_object;
	func_609(var_18_bool, var_19_object);
	bool var_113_bool; object var_114_object;
	var_8_object = var_114_object;
	func_524(var_113_bool, var_114_object, 70.0);
	if(!var_113_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_160_int;
	func_991(var_160_int);
	var_14_object->SetNPCName(var_160_int);
	int var_161_int;
	func_989(var_161_int);
	var_14_object->SetNPCDescription(var_161_int);
	string var_162_string;
	func_993(var_162_string);
	var_14_object->SetPhoto(var_162_string);
	string var_163_string;
	func_995(var_163_string);
	var_14_object->SetPhoto2(var_163_string);
	int var_164_int;
	func_972(var_164_int);
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
		var_228_bool = !var_17_bool; //@nz
		if(var_228_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_229_object;
	var_8_object = var_229_object;
	func_592();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_775(void)
{
	bool var_9_bool;
	func_997(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_522(bool var_8_bool)
{
	var_8_bool = true;
}


void func_524(bool var_113_bool, object var_114_object, float var_115_float)
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
	func_788(var_140_cvector, (var_129_cvector ^ [0.0, 1.0, 0.0]));
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
	func_997(var_155_bool);
	if(var_155_bool != 0) {
	} else {
		@HasAnimationTrack(var_133_bool, "head");
		if(var_133_bool == 0) goto Label_586;
		@LookAsyncCamera("head");
	}
Label_586:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_113_bool = true;
	
}


void func_782(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_788(cvector var_140_cvector, cvector var_141_cvector)
{
	float var_144_float = sqrt(var_141_cvector | var_141_cvector);
	if(var_144_float < 0.000001)
		var_140_cvector = [0.0, 0.0, 0.0];
	var_140_cvector = var_141_cvector / var_144_float;
}


void func_922(object var_18_object)
{
	object var_21_object; object var_22_object;
	@GetMainOutdoorScene(var_21_object);
	if(var_21_object == null) {
		@Trace("Can't find main outdoor scene");
		var_22_object = null;
		var_22_object = var_18_object;
	}
	var_21_object->GetMap(var_22_object);
	var_22_object = var_18_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_667(bool var_29_bool, object var_30_object)
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
		func_760(var_52_bool, var_53_string);
		var_52_bool = var_29_bool;
		return 10;

	}
}


void func_798(int var_182_int, string var_183_string)
{
	int var_185_int;
	@GetVariable(var_183_string, var_185_int);
	var_185_int = var_182_int;
}


void func_803(float var_29_float)
{
	float var_31_float;
	@GetGameTime(var_31_float);
	var_31_float = var_29_float;
}


// @pe
void func_164(object var_2_object, string var_188_string)
{
	bool var_189_bool;
	func_997(var_189_bool);
	if(!var_189_bool) //@nz
		return 0;
	if(var_188_string == var_2_object)
		return 0;
	string var_192_string; bool var_193_bool;
	var_188_string = var_192_string;
	if(var_188_string == "")
		var_193_bool = false;
	else
		var_193_bool = true;
	func_754(var_192_string, var_193_bool);
	var_2_object = var_188_string;
	
}


void func_808(int var_73_int)
{
	float var_75_float;
	@GetGameTime(var_75_float);
	var_73_int = 1 + (var_75_float / 24);
}


void func_939(object var_57_object, string var_58_string, float var_59_float)
{
	object var_67_object;
	@GetMainOutdoorScene(var_67_object);
	if(var_67_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_65_cvector;
	cvector var_66_cvector;
	bool var_68_bool;
	var_67_object->GetLocator(var_58_string, var_68_bool, var_65_cvector, var_66_cvector);
	if(!var_68_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_58_string) + " doesnt exist");
	var_67_object->GetMap(var_57_object);
	if(var_57_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_78_float = GetByIndex(var_65_cvector, 0);
	var_79_float = GetByIndex(var_65_cvector, 2);
	var_57_object->SetMapParams(var_78_float, var_79_float, var_59_float);
}
EMIT "Stack[-2] = 0";


void func_817(void)
{
	@SetVariable("k4q02", 2);
	object var_18_object;
	func_922(var_18_object);
	object var_15_object;
	var_18_object = var_15_object;
	float var_29_float;
	func_803(var_29_float);
	var_15_object->AddMark("k4q02MarkGotoTheater", "pt_map_theater", 0, 539602, var_29_float);
	func_868();
}
EMIT "Stack[-1] = 0";


void func_704(bool var_60_bool, object var_61_object)
{
	bool var_69_bool; int var_70_int; string var_71_string;
	int var_73_int;
	func_808(var_73_int);
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
		func_760(var_92_bool, var_93_string);
		var_92_bool = var_60_bool;
		return 10;

	}
}


// @pe
void func_840(object var_56_object)
{
	object var_60_object;
	func_922(var_60_object);
	object var_57_object;
	var_60_object = var_57_object;
	func_939(var_57_object, "pt_map_theater", (float)2);
	object var_80_object;
	func_922(var_80_object);
	var_56_object->ShowMap(var_80_object);
}


void func_972(int var_164_int)
{
	int var_166_int;
	@GetVariable("branch", var_166_int);
	if(var_166_int == 0) {
		var_164_int = 1;
		return 2;
	EMIT "GOTO 0x3db";
	}
	if(var_166_int == 1) {
		var_164_int = 2;
		return 2;
	}
	var_164_int = 3;
}


void func_592(void)
{
	bool var_231_bool;
	@CameraSwitchToNormal();
	bool var_232_bool;
	func_997(var_232_bool);
	if(var_232_bool != 0) {
	} else {
		@HasAnimationTrack(var_231_bool, "head");
		if(var_231_bool == 0) goto Label_608;
		@UnlookAsync("head");
	}
Label_608:
	
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_173_object, object var_174_object)
{
	var_0_object = var_174_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_180_bool;
		func_856(var_173_object);
		if(var_180_bool != 0) {
			func_164(var_174_object, "Neutral");
			var_0_object->SetMessage(525762); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(529224, 43014, 30677); //@t
			var_0_object->AddReply(529229, 30678, 30682); //@t
		} else {
					func_164(var_174_object, "Neutral");
					var_0_object->SetMessage(525766); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525767, -1, 27079); //@t
					var_0_object->AddReply(529227, -1, 30680); //@t
		}
	}
	for(;;) {
		bool var_207_bool;
		func_997(var_207_bool);
		if(var_207_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_747(var_2_object);
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


// @pe
void func_856(bool var_180_bool)
{
	int var_182_int;
	func_798(var_182_int, "k4q02");
	if(var_182_int == 1)
		var_180_bool = true;
	var_180_bool = false;
}


void func_989(int var_161_int)
{
	var_161_int = 515544;
}


void func_991(int var_160_int)
{
	var_160_int = 502869;
}


void func_609(bool var_18_bool, object var_19_object)
{
	int var_25_int; int var_26_int;
	@GetVariable("voice_common", var_25_int);
	if(var_25_int != 0) {
		bool var_29_bool; object var_30_object;
		var_19_object = var_30_object;
		func_667(var_29_bool, var_30_object);
		if(!var_29_bool) { //@nz
			bool var_60_bool; object var_61_object;
			var_19_object = var_61_object;
			func_704(var_60_bool, var_61_object);
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
		func_704(var_105_bool, var_106_object);
		if(!var_105_bool) { //@nz
			bool var_108_bool; object var_109_object;
			var_19_object = var_109_object;
			func_667(var_108_bool, var_109_object);
			if(!var_108_bool) { //@nz
				var_18_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_665;
	
Label_665:
	var_18_bool = true;
	
}


void func_993(string var_162_string)
{
	var_162_string = "ui/NPC_Mark.png";
}


void func_995(string var_163_string)
{
	var_163_string = "ui/NPC_Mark_b.png";
}


void func_868(void)
{
	object var_33_object;
	@CreateDiaryEntry(var_33_object, 381, 2, 525787);
	bool var_37_bool; object var_38_object;
	var_33_object = var_38_object;
	func_894(var_37_bool, var_38_object, 378);
}
EMIT "Stack[-1] = 0";


void func_997(bool var_56_bool)
{
	var_56_bool = true;
}


void func_747(string var_209_string)
{
	float var_212_float; float var_213_float;
	@lshGetAnimTimes(var_209_string, var_212_float, var_213_float);
	@lshPlayAnimation(var_212_float, var_213_float, false);
}


void func_881(object var_46_object)
{
	object var_48_object;
	@GetDiaryRoot(var_48_object);
	if(!var_48_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_46_object = false;
	}
	var_48_object = var_46_object;
}
EMIT "Stack[-1] = 0";


void func_754(string var_192_string, bool var_193_bool)
{
	float var_198_float; float var_199_float;
	@lshGetAnimTimes(var_192_string, var_198_float, var_199_float);
	@lshPlayAnimation(var_198_float, var_199_float, var_193_bool);
}


void func_760(bool var_52_bool, string var_53_string)
{
	bool var_55_bool;
	bool var_56_bool;
	func_997(var_56_bool);
	if(var_56_bool != 0) {
		@lshHasSpeech(var_55_bool, var_53_string);
		if(var_55_bool != 0) {
			@lshPlaySpeech(var_53_string);
			var_52_bool = true;
		}
	}
	var_52_bool = false;
}


void func_894(bool var_37_bool, object var_38_object, int var_39_int)
{
	object var_46_object;
	func_881(var_46_object);
	object var_43_object;
	var_46_object = var_43_object;
	object var_44_object;
	var_43_object->Find(var_39_int, var_44_object);
	if(!var_44_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_39_int);
		var_37_bool = false;
	}
	var_44_object->AddChild(var_38_object);
	@SendWorldWndMessage(7);
	int var_45_int;
	var_38_object->GetCategory(var_45_int);
	@SetDiarySection(var_45_int);
	var_37_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


