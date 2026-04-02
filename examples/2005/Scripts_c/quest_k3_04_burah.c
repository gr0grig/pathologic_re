// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_974();
			if(var_8_bool == 26978) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1081();
				object var_42_object = var_1_object;
				func_1094(var_0_object);
				object var_70_object = var_1_object;
				func_1123(var_0_object);
			}
			if(var_8_bool == 26979) {
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_1072();
			}
			if(var_7_cvector == 26977) {
				bool var_93_bool;
				func_1152(var_1_object);
				if(var_93_bool != 0) {
					object var_101_object; object var_102_object;
					var_101_object = var_1_object;
					var_102_object = var_0_object;
					func_1066();
					func_182(var_8_bool, "Neutral");
					var_0_object->SetMessage(525635); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(529332, 30788, 30787); //@t
					var_0_object->AddReply(540664, 42695, 42694); //@t
					return 0;
				}
				func_182(var_8_bool, "Neutral");
				var_0_object->SetMessage(525638); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525639, -1, 26981); //@t
				var_0_object->AddReply(529336, -1, 30791); //@t
				return 0;
			}
			if(var_7_cvector == 42695) {
				func_182(var_8_bool, "Neutral");
				var_0_object->SetMessage(540665); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540666, 30788, 42696); //@t
				var_0_object->AddReply(540667, -1, 42697); //@t
				return 0;
			}
			if(var_7_cvector == 30788) {
				func_182(var_8_bool, "Neutral");
				var_0_object->SetMessage(529333); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540668, 42699, 42698); //@t
				return 0;
			}
			if(var_7_cvector == 42699) {
				func_182(var_8_bool, "Neutral");
				var_0_object->SetMessage(540669); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529334, 30790, 30789); //@t
				return 0;
			}
			if(var_7_cvector == 30790) {
				func_182(var_8_bool, "Neutral");
				var_0_object->SetMessage(529335); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525636, -1, 26978); //@t
				var_0_object->AddReply(525637, -1, 26979); //@t
				return 0;
			}
			var_3_string = true;
			bool var_166_bool;
			func_1243(var_166_bool);
			if(var_166_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcd";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_433(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_981(var_13_object);
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
			func_981(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_546();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_561();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_504();
			bool var_11_bool = false;
			bool var_12_bool;
			func_718(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_473(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_453(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_981(var_53_object);
					var_53_object = var_52_object;
					func_866(var_51_bool, var_52_object);
				}
			} else {
				func_468(var_7_int);
				func_495();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_495();
		else
			func_946("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_686();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_709(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_384(var_25_object);
			func_946("Neutral");
			func_504();
			func_495();
		}
	}

}


// @pe
void func_1152(bool var_199_bool)
{
	int var_201_int;
	func_997(var_201_int, "ook3BurahIndoor1");
	if(var_201_int == 0) {
		var_199_bool = true;
		return 0;
	}
	var_199_bool = false;
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_718(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


// @pe
void func_384(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_903(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1033(var_92_int);
	string var_86_string = ("d" + var_92_int) + "m";
	int var_87_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_80_object->HasProperty((var_86_string + (var_87_int + 1)), var_88_bool);
			if(!var_88_bool) { //@nz
			} else {
				var_87_int += 1;
			}
		}
		if(!var_87_int) { //@nz
			var_79_bool = false;
			return 10;
		}
		var_89_int = 0;
		if(var_87_int > 1)
			@irand(var_89_int, var_87_int);
		var_80_object->GetProperty((var_86_string + (var_89_int + 1)), var_90_string);
		bool var_111_bool; string var_112_string;
		var_90_string = var_112_string;
		func_959(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


void func_1033(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_1164(void)
{
	object var_20_object;
	@CreateDiaryEntry(var_20_object, 357, 2, 525657);
	bool var_24_bool; object var_25_object;
	var_20_object = var_25_object;
	func_1190(var_24_bool, var_25_object, 354);
}
EMIT "Stack[-1] = 0";


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_981(var_39_object);
	var_39_object = var_38_object;
	func_808(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_723(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_1237(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1235(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1239(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1241(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1218(var_183_int);
	var_33_object->SetPlayerName(var_183_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	object var_192_object; object var_193_object;
	var_27_object = var_192_object;
	var_33_object = var_193_object;
	TaskCall(2);
	func_94(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_251_bool = !var_36_bool; //@nz
		if(var_251_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_252_object;
	var_27_object = var_252_object;
	func_791();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1042(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_791(void)
{
	bool var_254_bool;
	@CameraSwitchToNormal();
	bool var_255_bool;
	func_1243(var_255_bool);
	if(var_255_bool != 0) {
	} else {
		@HasAnimationTrack(var_254_bool, "head");
		if(var_254_bool == 0) goto Label_807;
		@UnlookAsync("head");
	}
Label_807:
	
}


void func_1177(object var_33_object)
{
	object var_35_object;
	@GetDiaryRoot(var_35_object);
	if(!var_35_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_33_object = false;
	}
	var_35_object = var_33_object;
}
EMIT "Stack[-1] = 0";


void func_1049(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1042(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


// @pe
void func_546(void)
{
	func_686();
	func_504();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1190(bool var_24_bool, object var_25_object, int var_26_int)
{
	object var_33_object;
	func_1177(var_33_object);
	object var_30_object;
	var_33_object = var_30_object;
	object var_31_object;
	var_30_object->Find(var_26_int, var_31_object);
	if(!var_31_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_26_int);
		var_24_bool = false;
	}
	var_31_object->AddChild(var_25_object);
	@SendWorldWndMessage(7);
	int var_32_int;
	var_25_object->GetCategory(var_32_int);
	@SetDiarySection(var_32_int);
	var_24_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_808(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_866(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_903(var_79_bool, var_80_object);
			if(!var_79_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@irand(var_45_int, 2);
		if(var_45_int != 0)
			@SetVariable("voice_common", ((var_44_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_124_bool; object var_125_object;
		var_38_object = var_125_object;
		func_903(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_866(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_864;
	
Label_864:
	var_37_bool = true;
	
}


// @pe
void func_1066(void)
{
	@SetVariable("ook3BurahIndoor1", 1);
}


void func_684(bool var_59_bool)
{
	var_59_bool = true;
}


void func_686(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1072(void)
{
	@SetVariable("k3q04", 3);
	func_1164();
}


void func_433(object var_0_object)
{
	bool var_7_bool;
	func_718(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_429();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_615();
	}
}
EMIT "Return(); Pop(0)";


void func_946(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


void func_561(void)
{
	@StopGroup0();
	func_504();
	func_946("Neutral");
	func_495();
}


void func_691(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


// @pe
void func_182(object var_2_object, string var_211_string)
{
	bool var_212_bool;
	func_1243(var_212_bool);
	if(!var_212_bool) //@nz
		return 0;
	if(var_211_string == var_2_object)
		return 0;
	string var_215_string; bool var_216_bool;
	var_211_string = var_215_string;
	if(var_211_string == "")
		var_216_bool = false;
	else
		var_216_bool = true;
	func_953(var_215_string, var_216_bool);
	var_2_object = var_211_string;
	
}


void func_953(string var_215_string, bool var_216_bool)
{
	float var_221_float; float var_222_float;
	@lshGetAnimTimes(var_215_string, var_221_float, var_222_float);
	@lshPlayAnimation(var_221_float, var_222_float, var_216_bool);
}


// @pe
void func_1081(void)
{
	@SetVariable("k3q04", 3);
	@SetVariable("k3q04Promise", 1);
	func_1164();
}


void func_699(bool var_15_bool, cvector var_16_cvector)
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


void func_959(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_1243(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_1218(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x4d1";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


void func_709(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_699(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_1094(object var_42_object)
{
	@Trace("grass combination (good) is given");
	object var_45_object;
	@CreateInvItem(var_45_object);
	var_45_object->SetItemName("grass_combination");
	var_45_object->SetProperty("im_inc", 0.4);
	var_45_object->SetProperty("hl_inc", -0.01);
	var_45_object->SetProperty("tr_inc", 0.03);
	object var_54_object; object var_55_object;
	var_42_object = var_54_object;
	var_45_object = var_55_object;
	func_1014(var_54_object, var_55_object, 1);
}
EMIT "Stack[-1] = 0";


void func_453(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_709(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_718(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_974(void)
{
	bool var_10_bool;
	func_1243(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_723(bool var_132_bool, object var_133_object, float var_134_float)
{
	cvector var_145_cvector; bool var_152_bool;
	var_133_object->GetPosition(var_145_cvector);
	float var_144_float;
	var_133_object->GetEyesHeight(var_144_float);
	var_153_float = GetByIndex(var_145_cvector, 1);
	SetByIndex(var_145_cvector, 1) = (var_153_float + var_144_float);
	cvector var_146_cvector;
	@GetPosition(var_146_cvector);
	@GetEyesHeight(var_144_float);
	var_154_float = GetByIndex(var_146_cvector, 1);
	SetByIndex(var_146_cvector, 1) = (var_154_float + var_144_float);
	cvector var_147_cvector = var_145_cvector - var_146_cvector;
	var_155_float = GetByIndex(var_147_cvector, 1);
	SetByIndex(var_147_cvector, 1) = (float)0;
	var_157_float = sqrt(var_147_cvector | var_147_cvector);
	var_147_cvector /= var_157_float;
	cvector var_148_cvector = -var_147_cvector;
	cvector var_159_cvector;
	func_987(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_149_cvector = ((var_147_cvector * var_134_float) + (var_159_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_151_bool;
	@IsOverrideActive(var_151_bool);
	if(var_151_bool != 0)
		var_132_bool = false;
	@StopWorld();
	@CameraTransit((var_146_cvector + var_149_cvector), var_148_cvector);
	var_172_float = GetByIndex(var_149_cvector, 0);
	var_173_float = GetByIndex(var_149_cvector, 2);
	@Rotate(var_172_float, var_173_float);
	bool var_174_bool;
	func_1243(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_785;
		@LookAsyncCamera("head");
	}
Label_785:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_1235(int var_180_int)
{
	var_180_int = 515592;
}


void func_1237(int var_179_int)
{
	var_179_int = 511961;
}


void func_981(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


void func_1239(string var_181_string)
{
	var_181_string = "ui/NPC_Burah.png";
}


void func_468(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1241(string var_182_string)
{
	var_182_string = "ui/NPC_Burah_b.png";
}


void func_473(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_691(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1243(bool var_75_bool)
{
	var_75_bool = true;
}


void func_987(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_199_bool;
		func_1152(var_1_object);
		if(var_199_bool != 0) {
			object var_207_object; object var_208_object;
			var_207_object = var_1_object;
			var_208_object = var_0_object;
			func_1066();
			func_182(var_193_object, "Neutral");
			var_0_object->SetMessage(525635); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(529332, 30788, 30787); //@t
			var_0_object->AddReply(540664, 42695, 42694); //@t
		} else {
					func_182(var_193_object, "Neutral");
					var_0_object->SetMessage(525638); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525639, -1, 26981); //@t
					var_0_object->AddReply(529336, -1, 30791); //@t
		}
	}
	for(;;) {
		bool var_230_bool;
		func_1243(var_230_bool);
		if(var_230_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_946(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_181;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_181:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


void func_866(bool var_48_bool, object var_49_object)
{
	string var_55_string; bool var_57_bool; int var_58_int; string var_59_string;
	var_55_string = "c";
	int var_56_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_49_object->HasProperty((var_55_string + (var_56_int + 1)), var_57_bool);
			if(!var_57_bool) { //@nz
			} else {
				var_56_int += 1;
			}
		}
		if(!var_56_int) { //@nz
			var_48_bool = false;
			return 10;
		}
		var_58_int = 0;
		if(var_56_int > 1)
			@irand(var_58_int, var_56_int);
		var_49_object->GetProperty((var_55_string + (var_58_int + 1)), var_59_string);
		bool var_71_bool; string var_72_string;
		var_59_string = var_72_string;
		func_959(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


void func_1123(object var_70_object)
{
	@Trace("grass combination (bad) is given");
	object var_73_object;
	@CreateInvItem(var_73_object);
	var_73_object->SetItemName("grass_combination");
	var_73_object->SetProperty("im_inc", 0.2);
	var_73_object->SetProperty("hl_inc", -0.08);
	var_73_object->SetProperty("tr_inc", 0.12);
	object var_82_object; object var_83_object;
	var_70_object = var_82_object;
	var_73_object = var_83_object;
	func_1014(var_82_object, var_83_object, 1);
}
EMIT "Stack[-1] = 0";


void func_997(int var_201_int, string var_202_string)
{
	int var_204_int;
	@GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
}


void func_615(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_718(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1049(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_718(var_55_bool);
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0) {
			if(!var_31_int) { //@nz
				@Sleep(3, var_33_bool);
				if(!var_33_bool) { //@nz
				} else {
			} else {
			@irand(var_34_int, var_31_int);
			@irand(var_35_int, 5);
			if(var_35_int != 0)
				var_34_int = 0;
			string var_66_string; int var_67_int;
			var_34_int = var_67_int;
			func_1042(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_670;
			goto Label_681;
			}
				Label_670:
					bool var_59_bool;
					func_684(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_676;
			}
		}
	Label_681:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_676:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


void func_1002(int var_65_int, int var_66_int)
{
	object var_68_object;
	@CreateIntVector(var_68_object);
	var_68_object->add(var_65_int);
	var_68_object->add(var_66_int);
	@SendWorldWndMessage(3, var_68_object);
}
EMIT "Stack[-1] = 0";


void func_495(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_1014(object var_54_object, object var_55_object, int var_56_int)
{
	int var_60_int;
	var_55_object->GetItemID(var_60_int);
	int var_61_int;
	@GetInvItemProperty(var_61_int, var_60_int, "Category");
	bool var_62_bool;
	var_54_object->AddItem(var_62_bool, var_55_object, var_61_int, var_56_int);
	if(!var_62_bool) { //@nz
		var_54_object->DropItems(var_55_object, var_56_int);
	} else {
		int var_65_int; int var_66_int;
		var_60_int = var_65_int;
		var_56_int = var_66_int;
		func_1002(var_65_int, var_66_int);
	}
	
}


void func_504(void)
{
	@KillTimer(10);
}


