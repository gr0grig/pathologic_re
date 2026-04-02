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
			if(var_8_bool == 25990) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1052();
				object var_70_object = var_1_object;
				func_1083(var_0_object);
			}
			if(var_7_cvector == 25978) {
				bool var_98_bool;
				func_1099(var_1_object);
				if(var_98_bool != 0) {
					func_182(var_8_bool, "Neutral");
					var_0_object->SetMessage(524639); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524640, 27569, 25979); //@t
					var_0_object->AddReply(526284, 27569, 27562); //@t
					return 0;
				}
				func_182(var_8_bool, "Neutral");
				var_0_object->SetMessage(524641); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524642, 27563, 25981); //@t
				var_0_object->AddReply(526287, 27567, 27565); //@t
				var_0_object->AddReply(526288, -1, 27566); //@t
				return 0;
			}
			if(var_7_cvector == 27567) {
				func_182(var_8_bool, "Neutral");
				var_0_object->SetMessage(526289); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526290, -1, 27568); //@t
				return 0;
			}
			if(var_7_cvector == 27563) {
				func_182(var_8_bool, "Neutral");
				var_0_object->SetMessage(526285); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526286, -1, 27564); //@t
				return 0;
			}
			if(var_7_cvector == 27569) {
				func_182(var_8_bool, "Neutral");
				var_0_object->SetMessage(526291); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526292, 25989, 27570); //@t
				var_0_object->AddReply(526293, 25989, 27572); //@t
				return 0;
			}
			if(var_7_cvector == 25989) {
				func_182(var_8_bool, "Neutral");
				var_0_object->SetMessage(524650); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526296, 27577, 27576); //@t
				return 0;
			}
			if(var_7_cvector == 27577) {
				func_182(var_8_bool, "Neutral");
				var_0_object->SetMessage(526297); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524651, -1, 25990); //@t
				return 0;
			}
			var_3_string = true;
			bool var_174_bool;
			func_1253(var_174_bool);
			if(var_174_bool != 0)
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


void func_1028(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_903(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1019(var_92_int);
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


void func_1035(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1028(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


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
	func_1247(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1245(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1249(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1251(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1228(var_183_int);
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
		var_250_bool = !var_36_bool; //@nz
		if(var_250_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_251_object;
	var_27_object = var_251_object;
	func_791();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_791(void)
{
	bool var_253_bool;
	@CameraSwitchToNormal();
	bool var_254_bool;
	func_1253(var_254_bool);
	if(var_254_bool != 0) {
	} else {
		@HasAnimationTrack(var_253_bool, "head");
		if(var_253_bool == 0) goto Label_807;
		@UnlookAsync("head");
	}
Label_807:
	
}


void func_1178(object var_19_object)
{
	object var_22_object; object var_23_object;
	@GetMainOutdoorScene(var_22_object);
	if(var_22_object == null) {
		@Trace("Can't find main outdoor scene");
		var_23_object = null;
		var_23_object = var_19_object;
	}
	var_22_object->GetMap(var_23_object);
	var_23_object = var_19_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1052(void)
{
	@SetVariable("k1q01", 1);
	object var_19_object;
	func_1178(var_19_object);
	object var_16_object;
	var_19_object = var_16_object;
	float var_30_float;
	func_1014(var_30_float);
	var_16_object->AddMark("k1q01KaterinaGotoAlexandr", "pt_map_alexandr", 1, 524727, var_30_float);
	func_1111();
	func_1124();
	bool var_64_bool;
	func_1002(var_64_bool, "quest_k1_01", "remove_katerina");
}
EMIT "Stack[-1] = 0";


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


void func_1195(object var_72_object, string var_73_string, float var_74_float)
{
	object var_82_object;
	@GetMainOutdoorScene(var_82_object);
	if(var_82_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_80_cvector;
	cvector var_81_cvector;
	bool var_83_bool;
	var_82_object->GetLocator(var_73_string, var_83_bool, var_80_cvector, var_81_cvector);
	if(!var_83_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_73_string) + " doesnt exist");
	var_82_object->GetMap(var_72_object);
	if(var_72_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_93_float = GetByIndex(var_80_cvector, 0);
	var_94_float = GetByIndex(var_80_cvector, 2);
	var_72_object->SetMapParams(var_93_float, var_94_float, var_74_float);
}
EMIT "Stack[-2] = 0";


void func_684(bool var_59_bool)
{
	var_59_bool = true;
}


void func_686(void)
{
	@StopAnimation();
	@StopGroup0();
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
void func_182(object var_2_object, string var_207_string)
{
	bool var_208_bool;
	func_1253(var_208_bool);
	if(!var_208_bool) //@nz
		return 0;
	if(var_207_string == var_2_object)
		return 0;
	string var_211_string; bool var_212_bool;
	var_207_string = var_211_string;
	if(var_207_string == "")
		var_212_bool = false;
	else
		var_212_bool = true;
	func_953(var_211_string, var_212_bool);
	var_2_object = var_207_string;
	
}


void func_953(string var_211_string, bool var_212_bool)
{
	float var_217_float; float var_218_float;
	@lshGetAnimTimes(var_211_string, var_217_float, var_218_float);
	@lshPlayAnimation(var_217_float, var_218_float, var_212_bool);
}


// @pe
void func_1083(object var_71_object)
{
	object var_75_object;
	func_1178(var_75_object);
	object var_72_object;
	var_75_object = var_72_object;
	func_1195(var_72_object, "pt_map_alexandr", (float)2);
	object var_95_object;
	func_1178(var_95_object);
	var_71_object->ShowMap(var_95_object);
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
	func_1253(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
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


// @pe
void func_1099(bool var_199_bool)
{
	int var_201_int;
	func_997(var_201_int, "k1q01");
	if(var_201_int == 0) {
		var_199_bool = true;
		return 0;
	}
	var_199_bool = false;
}


void func_1228(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x4db";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


void func_718(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_974(void)
{
	bool var_10_bool;
	func_1253(var_10_bool);
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
	func_1253(var_174_bool);
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


void func_468(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_981(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


void func_1111(void)
{
	object var_34_object;
	@CreateDiaryEntry(var_34_object, 318, 1, 524734);
	bool var_38_bool; object var_39_object;
	var_34_object = var_39_object;
	func_1150(var_38_bool, var_39_object, -1);
}
EMIT "Stack[-1] = 0";


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


void func_987(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


void func_1245(int var_180_int)
{
	var_180_int = 515539;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_199_bool;
		func_1099(var_192_object);
		if(var_199_bool != 0) {
			func_182(var_193_object, "Neutral");
			var_0_object->SetMessage(524639); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(524640, 27569, 25979); //@t
			var_0_object->AddReply(526284, 27569, 27562); //@t
		} else {
					func_182(var_193_object, "Neutral");
					var_0_object->SetMessage(524641); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524642, 27563, 25981); //@t
					var_0_object->AddReply(526287, 27567, 27565); //@t
					var_0_object->AddReply(526288, -1, 27566); //@t
		}
	}
	for(;;) {
		bool var_226_bool;
		func_1253(var_226_bool);
		if(var_226_bool != 0) {

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


void func_1247(int var_179_int)
{
	var_179_int = 502864;
}


void func_1249(string var_181_string)
{
	var_181_string = "ui/NPC_Katerina.png";
}


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


void func_1251(string var_182_string)
{
	var_182_string = "ui/NPC_Katerina_b.png";
}


void func_1124(void)
{
	object var_57_object;
	@CreateDiaryEntry(var_57_object, 319, 1, 524735);
	bool var_61_bool; object var_62_object;
	var_57_object = var_62_object;
	func_1150(var_61_bool, var_62_object, 318);
}
EMIT "Stack[-1] = 0";


void func_1253(bool var_75_bool)
{
	var_75_bool = true;
}


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
	func_1035(var_39_int);
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
			func_1028(var_66_string, var_67_int);
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


void func_1002(bool var_64_bool, string var_65_string, string var_66_string)
{
	object var_68_object;
	@FindActor(var_68_object, var_65_string);
	if(var_68_object == null)
		var_64_bool = false;
	@Trigger(var_68_object, var_66_string);
	var_64_bool = true;
}
EMIT "Stack[-1] = 0";


void func_495(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_1137(object var_47_object)
{
	object var_49_object;
	@GetDiaryRoot(var_49_object);
	if(!var_49_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_47_object = false;
	}
	var_49_object = var_47_object;
}
EMIT "Stack[-1] = 0";


void func_1014(float var_30_float)
{
	float var_32_float;
	@GetGameTime(var_32_float);
	var_32_float = var_30_float;
}


void func_504(void)
{
	@KillTimer(10);
}


void func_1019(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_1150(bool var_38_bool, object var_39_object, int var_40_int)
{
	object var_47_object;
	func_1137(var_47_object);
	object var_44_object;
	var_47_object = var_44_object;
	object var_45_object;
	var_44_object->Find(var_40_int, var_45_object);
	if(!var_45_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_40_int);
		var_38_bool = false;
	}
	var_45_object->AddChild(var_39_object);
	@SendWorldWndMessage(7);
	int var_46_int;
	var_39_object->GetCategory(var_46_int);
	@SetDiarySection(var_46_int);
	var_38_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


