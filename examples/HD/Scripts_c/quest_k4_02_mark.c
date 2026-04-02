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
			func_818();
			if(var_7_bool == 27077) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_860();
				object var_55_object = var_1_object;
				func_883(var_0_object);
			}
			if(var_7_bool == 43034) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_860();
				object var_85_object = var_1_object;
				func_883(var_0_object);
			}
			if(var_6_int == 27074) {
				bool var_89_bool;
				func_899(var_1_object);
				if(var_89_bool != 0) {
					func_164(var_7_bool, "Declaim");
					var_0_object->SetMessage(525762); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(529224, 43014, 30677); //@t
					var_0_object->AddReply(529229, 43754, 30682); //@t
					return 0;
				}
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(525766); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525767, -1, 27079); //@t
				var_0_object->AddReply(529227, -1, 30680); //@t
				return 0;
			}
			if(var_6_int == 43754) {
				func_164(var_7_bool, "Declaim");
				var_0_object->SetMessage(541585); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541586, 30678, 43755); //@t
				var_0_object->AddReply(541587, 43016, 43757); //@t
				return 0;
			}
			if(var_6_int == 43014) {
				func_164(var_7_bool, "Declaim");
				var_0_object->SetMessage(540934); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540935, 43016, 43015); //@t
				var_0_object->AddReply(540938, 43019, 43018); //@t
				return 0;
			}
			if(var_6_int == 43019) {
				func_164(var_7_bool, "Shyness");
				var_0_object->SetMessage(540939); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540940, 43016, 43020); //@t
				return 0;
			}
			if(var_6_int == 43016) {
				func_164(var_7_bool, "Gasp");
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
				func_164(var_7_bool, "Shyness");
				var_0_object->SetMessage(529228); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525763, 27076, 27075); //@t
				return 0;
			}
			if(var_6_int == 27076) {
				func_164(var_7_bool, "Shyness");
				var_0_object->SetMessage(525764); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525765, -1, 27077); //@t
				var_0_object->AddReply(540950, -1, 43034); //@t
				return 0;
			}
			var_3_string = true;
			bool var_217_bool;
			func_1040(var_217_bool);
			if(var_217_bool != 0)
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
				func_545(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_825(var_14_object);
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
			func_545(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_825(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_547(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_1034(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_1032(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_1036(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_1038(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_1015(var_70_int);
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
	func_825(var_81_object);
	var_81_object = var_80_object;
	func_634(var_79_bool, var_80_object);
	object var_174_object; object var_175_object;
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_239_bool = !var_17_bool; //@nz
		if(var_239_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_240_object;
	var_8_object = var_240_object;
	func_616();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_899(bool var_181_bool)
{
	int var_183_int;
	func_841(var_183_int, "k4q02");
	if(var_183_int == 1)
		var_181_bool = true;
	var_181_bool = false;
}


void func_772(string var_215_string)
{
	bool var_219_bool; float var_220_float; float var_221_float;
	@lshHasAnimation(var_219_bool, var_215_string);
	if(var_219_bool != 0) {
		@lshGetAnimTimes(var_215_string, var_220_float, var_221_float);
		@lshPlayAnimation(var_220_float, var_221_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_215_string);
	}
	
}


void func_1032(int var_67_int)
{
	var_67_int = 515544;
}


void func_1034(int var_66_int)
{
	var_66_int = 502869;
}


void func_1036(string var_68_string)
{
	var_68_string = "ui/NPC_Mark.png";
}


void func_1038(string var_69_string)
{
	var_69_string = "ui/NPC_Mark_b.png";
}


void func_911(void)
{
	object var_33_object;
	@CreateDiaryEntry(var_33_object, 381, 2, 525787);
	bool var_37_bool; object var_38_object;
	var_33_object = var_38_object;
	func_937(var_37_bool, var_38_object, 378);
}
EMIT "Stack[-1] = 0";


void func_1040(bool var_61_bool)
{
	var_61_bool = true;
}


void func_788(string var_193_string, bool var_194_bool)
{
	bool var_200_bool; float var_201_float; float var_202_float;
	@lshHasAnimation(var_200_bool, var_193_string);
	if(var_200_bool != 0) {
		@lshGetAnimTimes(var_193_string, var_201_float, var_202_float);
		@lshPlayAnimation(var_201_float, var_202_float, var_194_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_193_string);
	}
	
}


void func_924(object var_46_object)
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


void func_545(bool var_8_bool)
{
	var_8_bool = true;
}


void func_547(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_831(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1040(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_610;
		@LookAsyncCamera("head");
	}
Label_610:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


// @pe
void func_164(object var_2_object, string var_189_string)
{
	bool var_190_bool;
	func_1040(var_190_bool);
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
	func_788(var_193_string, var_194_bool);
	var_2_object = var_189_string;
	
}


void func_803(bool var_113_bool, string var_114_string)
{
	bool var_116_bool;
	bool var_117_bool;
	func_1040(var_117_bool);
	if(var_117_bool != 0) {
		@lshHasSpeech(var_116_bool, var_114_string);
		if(var_116_bool != 0) {
			@lshPlaySpeech(var_114_string);
			var_113_bool = true;
		}
	}
	var_113_bool = false;
}


void func_937(bool var_37_bool, object var_38_object, int var_39_int)
{
	object var_46_object;
	func_924(var_46_object);
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


void func_818(void)
{
	bool var_9_bool;
	func_1040(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_692(bool var_90_bool, object var_91_object)
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
		func_803(var_113_bool, var_114_string);
		var_113_bool = var_90_bool;
		return 10;

	}
}


void func_825(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_831(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_965(object var_18_object)
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


void func_841(int var_183_int, string var_184_string)
{
	int var_186_int;
	@GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
}


void func_846(float var_29_float)
{
	float var_31_float;
	@GetGameTime(var_31_float);
	var_31_float = var_29_float;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_174_object, object var_175_object)
{
	var_0_object = var_175_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_181_bool;
		func_899(var_174_object);
		if(var_181_bool != 0) {
			func_164(var_175_object, "Declaim");
			var_0_object->SetMessage(525762); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(529224, 43014, 30677); //@t
			var_0_object->AddReply(529229, 43754, 30682); //@t
		} else {
					func_164(var_175_object, "Neutral");
					var_0_object->SetMessage(525766); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525767, -1, 27079); //@t
					var_0_object->AddReply(529227, -1, 30680); //@t
		}
	}
	for(;;) {
		bool var_213_bool;
		func_1040(var_213_bool);
		if(var_213_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_772(var_2_object);
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


void func_851(int var_134_int)
{
	float var_136_float;
	@GetGameTime(var_136_float);
	var_134_int = 1 + (var_136_float / 24);
}


void func_982(object var_57_object, string var_58_string, float var_59_float)
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


void func_729(bool var_121_bool, object var_122_object)
{
	bool var_130_bool; int var_131_int; string var_132_string;
	int var_134_int;
	func_851(var_134_int);
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
		func_803(var_153_bool, var_154_string);
		var_153_bool = var_121_bool;
		return 10;

	}
}


void func_860(void)
{
	@SetVariable("k4q02", 2);
	object var_18_object;
	func_965(var_18_object);
	object var_15_object;
	var_18_object = var_15_object;
	float var_29_float;
	func_846(var_29_float);
	var_15_object->AddMark("k4q02MarkGotoTheater", "pt_map_theater", 0, 539602, var_29_float);
	func_911();
}
EMIT "Stack[-1] = 0";


void func_616(void)
{
	bool var_242_bool;
	@CameraSwitchToNormal(true);
	bool var_244_bool;
	func_1040(var_244_bool);
	if(var_244_bool != 0) {
	} else {
		@HasAnimationTrack(var_242_bool, "head");
		if(var_242_bool == 0) goto Label_633;
		@UnlookAsync("head");
	}
Label_633:
	
}


// @pe
void func_883(object var_56_object)
{
	object var_60_object;
	func_965(var_60_object);
	object var_57_object;
	var_60_object = var_57_object;
	func_982(var_57_object, "pt_map_theater", (float)2);
	object var_80_object;
	func_965(var_80_object);
	var_56_object->ShowMap(var_80_object);
}


void func_1015(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x406";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


void func_634(bool var_79_bool, object var_80_object)
{
	int var_86_int; int var_87_int;
	@GetVariable("voice_common", var_86_int);
	if(var_86_int != 0) {
		bool var_90_bool; object var_91_object;
		var_80_object = var_91_object;
		func_692(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			bool var_121_bool; object var_122_object;
			var_80_object = var_122_object;
			func_729(var_121_bool, var_122_object);
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
		func_729(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			bool var_169_bool; object var_170_object;
			var_80_object = var_170_object;
			func_692(var_169_bool, var_170_object);
			if(!var_169_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_690;
	
Label_690:
	var_79_bool = true;
	
}


