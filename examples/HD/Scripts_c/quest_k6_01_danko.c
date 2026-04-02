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
			func_1019();
			if(var_8_bool == 27393) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1154();
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_1161();
				object var_49_object = var_1_object;
				func_1171(var_0_object);
			}
			if(var_8_bool == 27390) {
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_object;
				func_1154();
				object var_93_object; object var_94_object;
				var_93_object = var_1_object;
				var_94_object = var_0_object;
				func_1161();
				object var_95_object = var_1_object;
				func_1171(var_0_object);
			}
			if(var_7_cvector == 27383) {
				bool var_99_bool;
				func_1178(var_1_object);
				if(var_99_bool != 0) {
					object var_107_object; object var_108_object;
					var_107_object = var_1_object;
					var_108_object = var_0_object;
					func_1148();
					func_169(var_8_bool, "Menace");
					var_0_object->SetMessage(526097); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526098, 27386, 27384); //@t
					var_0_object->AddReply(526099, 27386, 27385); //@t
					return 0;
				}
				func_169(var_8_bool, "Menace");
				var_0_object->SetMessage(526107); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526108, -1, 27395); //@t
				var_0_object->AddReply(528917, -1, 30347); //@t
				return 0;
			}
			if(var_7_cvector == 27386) {
				func_169(var_8_bool, "Smile");
				var_0_object->SetMessage(526100); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526101, 27388, 27387); //@t
				var_0_object->AddReply(541281, 43414, 43413); //@t
				return 0;
			}
			if(var_7_cvector == 43414) {
				func_169(var_8_bool, "Untrust");
				var_0_object->SetMessage(541282); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541283, 27392, 43415); //@t
				return 0;
			}
			if(var_7_cvector == 27388) {
				func_169(var_8_bool, "Sorrow");
				var_0_object->SetMessage(526102); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526103, 27392, 27389); //@t
				var_0_object->AddReply(526104, -1, 27390); //@t
				return 0;
			}
			if(var_7_cvector == 27392) {
				func_169(var_8_bool, "Smile");
				var_0_object->SetMessage(526105); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526106, -1, 27393); //@t
				return 0;
			}
			var_3_string = true;
			bool var_177_bool;
			func_1269(var_177_bool);
			if(var_177_bool != 0)
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
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_430(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1026(var_13_object);
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
			func_1026(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_537();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_552();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_495();
			bool var_11_bool = false;
			bool var_12_bool;
			func_743(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_464(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_444(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1026(var_53_object);
					var_53_object = var_52_object;
					func_893(var_51_bool, var_52_object);
				}
			} else {
				func_459(var_7_int);
				func_486();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_486();
		else
			func_973("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_677();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_734(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_381(var_25_object);
			func_973("Neutral");
			func_495();
			func_486();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_748(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1263(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1261(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1265(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1267(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1244(var_89_int);
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
	func_1026(var_100_object);
	var_100_object = var_99_object;
	func_835(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_262_bool = !var_36_bool; //@nz
		if(var_262_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_263_object;
	var_27_object = var_263_object;
	func_817();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1026(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1154(void)
{
	bool var_15_bool;
	func_1103(var_15_bool, "quest_k6_01", "teleport");
}


void func_1032(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


// @pe
void func_1161(void)
{
	func_1190();
	bool var_46_bool;
	func_1103(var_46_bool, "quest_k6_01", "completed");
}


void func_893(bool var_109_bool, object var_110_object)
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
		func_1004(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


// @pe
void func_1042(float var_80_float, float var_81_float, float var_82_float, float var_83_float)
{
	if(var_81_float < var_82_float) {
		var_82_float = var_80_float;
		return 0;
	}
	if(var_81_float > var_83_float) {
		var_83_float = var_80_float;
		return 0;
	}
	var_81_float = var_80_float;
}


// @pe
void func_1171(object var_49_object)
{
	object var_52_object;
	var_49_object = var_52_object;
	bool var_51_bool;
	func_1058(var_51_bool, var_52_object, 0.3);
}


// @pe
void func_537(void)
{
	func_677();
	func_495();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1178(bool var_200_bool)
{
	int var_202_int;
	func_1053(var_202_int, "ook6Danko1");
	if(var_202_int == 0) {
		var_200_bool = true;
		return 0;
	}
	var_200_bool = false;
}


void func_1053(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


void func_930(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1115(var_153_int);
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
		func_1004(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_675(bool var_45_bool)
{
	var_45_bool = true;
}


// @pe
void func_1058(bool var_51_bool, object var_52_object, float var_53_float)
{
	if(!var_52_object) { //@nz
		var_51_bool = false;
		return 0;
	}
	if(var_53_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_53_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_58_float;
		var_53_float = var_58_float;
		func_1093(var_58_float);
		bool var_62_bool; object var_63_object; float var_65_float;
		var_52_object = var_63_object;
		var_53_float = var_65_float;
		func_702(var_62_bool, var_63_object, "reputation", var_65_float, (float)0, (float)1);
		var_51_bool = true;
		return 0;

	}
	
	var_51_bool = false;
}


void func_677(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1190(void)
{
	object var_24_object;
	@CreateDiaryEntry(var_24_object, 415, 1, 526116);
	bool var_28_bool; object var_29_object;
	var_24_object = var_29_object;
	func_1216(var_28_bool, var_29_object, 408);
}
EMIT "Stack[-1] = 0";


void func_552(void)
{
	@StopGroup0();
	func_495();
	func_973("Neutral");
	func_486();
}


// @pe
void func_169(object var_2_object, string var_212_string)
{
	bool var_213_bool;
	func_1269(var_213_bool);
	if(!var_213_bool) //@nz
		return 0;
	if(var_212_string == var_2_object)
		return 0;
	string var_216_string; bool var_217_bool;
	var_212_string = var_216_string;
	if(var_212_string == "")
		var_217_bool = false;
	else
		var_217_bool = true;
	func_989(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	
}


void func_682(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_430(object var_0_object)
{
	bool var_7_bool;
	func_743(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_606();
	}
}
EMIT "Return(); Pop(0)";


void func_817(void)
{
	bool var_265_bool;
	@CameraSwitchToNormal(true);
	bool var_267_bool;
	func_1269(var_267_bool);
	if(var_267_bool != 0) {
	} else {
		@HasAnimationTrack(var_265_bool, "head");
		if(var_265_bool == 0) goto Label_834;
		@UnlookAsync("head");
	}
Label_834:
	
}


void func_690(bool var_70_bool, object var_71_object, string var_72_string)
{
	var_77_bool = IsFuncExist(var_71_object, "HasProperty", 2);
	if(!var_77_bool) { //@nz
		var_70_bool = false;
		return 2;
	}
	bool var_74_bool;
	var_71_object->HasProperty(var_72_string, var_74_bool);
	var_74_bool = var_70_bool;
}


void func_1203(object var_37_object)
{
	object var_39_object;
	@GetDiaryRoot(var_39_object);
	if(!var_39_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_37_object = false;
	}
	var_39_object = var_37_object;
}
EMIT "Stack[-1] = 0";


void func_444(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_734(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_702(bool var_62_bool, object var_63_object, string var_64_string, float var_65_float, float var_66_float, float var_67_float)
{
	object var_71_object;
	var_63_object = var_71_object;
	string var_72_string;
	var_64_string = var_72_string;
	bool var_70_bool;
	func_690(var_70_bool, var_71_object, var_72_string);
	if(!var_70_bool) //@nz
		var_62_bool = false;
	float var_69_float;
	var_63_object->GetProperty(var_64_string, var_69_float);
	float var_80_float; float var_82_float; float var_83_float;
	var_66_float = var_82_float;
	var_67_float = var_83_float;
	func_1042(var_80_float, (var_69_float + var_65_float), var_82_float, var_83_float);
	var_63_object->SetProperty(var_64_string, var_80_float);
	var_62_bool = true;
}


void func_1216(bool var_28_bool, object var_29_object, int var_30_int)
{
	object var_37_object;
	func_1203(var_37_object);
	object var_34_object;
	var_37_object = var_34_object;
	object var_35_object;
	var_34_object->Find(var_30_int, var_35_object);
	if(!var_35_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_30_int);
		var_28_bool = false;
	}
	var_35_object->AddChild(var_29_object);
	@SendWorldWndMessage(7);
	int var_36_int;
	var_29_object->GetCategory(var_36_int);
	@SetDiarySection(var_36_int);
	var_28_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_835(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_893(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_930(var_140_bool, var_141_object);
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
		func_930(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_893(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_891;
	
Label_891:
	var_98_bool = true;
	
}


void func_1093(float var_58_float)
{
	object var_60_object;
	@CreateFloatVector(var_60_object);
	var_60_object->add(var_58_float);
	@SendWorldWndMessage(16, var_60_object);
}
EMIT "Stack[-1] = 0";


void func_459(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_973(string var_238_string)
{
	bool var_242_bool; float var_243_float; float var_244_float;
	@lshHasAnimation(var_242_bool, var_238_string);
	if(var_242_bool != 0) {
		@lshGetAnimTimes(var_238_string, var_243_float, var_244_float);
		@lshPlayAnimation(var_243_float, var_244_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_238_string);
	}
	
}


void func_1103(bool var_15_bool, string var_16_string, string var_17_string)
{
	object var_19_object;
	@FindActor(var_19_object, var_16_string);
	if(var_19_object == null)
		var_15_bool = false;
	@Trigger(var_19_object, var_17_string);
	var_15_bool = true;
}
EMIT "Stack[-1] = 0";


void func_464(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_682(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool;
		func_1178(var_1_object);
		if(var_200_bool != 0) {
			object var_208_object; object var_209_object;
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_1148();
			func_169(var_194_object, "Menace");
			var_0_object->SetMessage(526097); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526098, 27386, 27384); //@t
			var_0_object->AddReply(526099, 27386, 27385); //@t
		} else {
					func_169(var_194_object, "Menace");
					var_0_object->SetMessage(526107); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526108, -1, 27395); //@t
					var_0_object->AddReply(528917, -1, 30347); //@t
		}
	}
	for(;;) {
		bool var_236_bool;
		func_1269(var_236_bool);
		if(var_236_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_973(var_2_object);
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


void func_724(bool var_15_bool, cvector var_16_cvector)
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


void func_1115(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


void func_1244(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x4eb";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


void func_989(string var_216_string, bool var_217_bool)
{
	bool var_223_bool; float var_224_float; float var_225_float;
	@lshHasAnimation(var_223_bool, var_216_string);
	if(var_223_bool != 0) {
		@lshGetAnimTimes(var_216_string, var_224_float, var_225_float);
		@lshPlayAnimation(var_224_float, var_225_float, var_217_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_216_string);
	}
	
}


void func_606(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_743(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1131(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_743(var_41_bool);
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
			func_1124(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_661;
			goto Label_672;
			}
				Label_661:
					bool var_45_bool;
					func_675(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_667;
			}
		}
	Label_672:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_667:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_734(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_724(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_1124(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_486(void)
{
	float var_274_float;
	@rand(var_274_float, 8, 16);
	@SetTimer(10, var_274_float);
}


void func_743(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1131(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1124(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_748(bool var_37_bool, object var_38_object, float var_39_float)
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
	func_1032(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1269(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_811;
		@LookAsyncCamera("head");
	}
Label_811:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_1261(int var_86_int)
{
	var_86_int = 515573;
}


void func_1004(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1269(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_1263(int var_85_int)
{
	var_85_int = 504032;
}


void func_495(void)
{
	@KillTimer(10);
}


void func_1265(string var_87_string)
{
	var_87_string = "ui/NPC_Bakalavr.png";
}


void func_1267(string var_88_string)
{
	var_88_string = "ui/NPC_Bakalavr_b.png";
}


void func_1269(bool var_80_bool)
{
	var_80_bool = true;
}


void func_1019(void)
{
	bool var_10_bool;
	func_1269(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1148(void)
{
	@SetVariable("ook6Danko1", 1);
}


// @pe
void func_381(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


