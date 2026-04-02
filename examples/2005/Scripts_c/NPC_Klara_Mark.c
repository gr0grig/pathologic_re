// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, cvector var_17_cvector)
	{
		if(1 != 0) {
			func_1236();
			if(var_16_bool == 26860) {
				func_147(var_17_cvector, "Neutral");
				var_0_object->SetMessage(525504); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525505, 30769, 26861); //@t
				return 0;
			}
			if(var_16_bool == 30769) {
				func_147(var_17_cvector, "Neutral");
				var_0_object->SetMessage(529315); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529316, -1, 30770); //@t
				var_0_object->AddReply(529317, -1, 30771); //@t
				return 0;
			}
			var_3_string = true;
			bool var_48_bool;
			func_1306(var_48_bool);
			if(var_48_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaa";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, cvector var_17_cvector)
	{
		if(1 != 0) {
			func_1236();
			if(var_16_bool == 36906) {
				func_373(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_16_bool == 36953) {
				func_373(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_16_bool == 36957) {
				func_373(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_64_bool;
			func_1306(var_64_bool);
			if(var_64_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x18c";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, cvector var_17_cvector)
	{
		if(1 != 0) {
			func_1236();
			if(var_16_int == 42554) {
				func_627(var_17_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_41_bool;
			func_1306(var_41_bool);
			if(var_41_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x28a";
	
	}

}


maintask task_7
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		func_695(var_15_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, int var_16_int)
	{
		if(var_16_int == 10) {
			func_766();
			bool var_20_bool = false;
			bool var_21_bool;
			func_980(var_21_bool);
			if(var_21_bool != 0) {
				bool var_24_bool;
				func_735(var_24_bool);
				if(var_24_bool != 0)
					var_20_bool = true;
			}
			if(var_20_bool != 0) {
				bool var_41_bool;
				func_715(var_41_bool);
				if(var_41_bool != 0) {
					bool var_60_bool; object var_61_object;
					object var_62_object;
					func_1243(var_62_object);
					var_62_object = var_61_object;
					func_1128(var_60_bool, var_61_object);
				}
			} else {
				func_730(var_16_int);
				func_757();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		func_948();
		func_766();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
		{
		@StopGroup0();
		func_766();
		func_1208("Neutral");
		func_757();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_16_bool != 0)
			func_757();
		else
			func_1208("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, object var_16_object)
	{
		bool var_18_bool;
		@IsOverrideActive(var_18_bool);
		if(!var_18_bool) { //@nz
			disable OnUse;
			func_948();
			bool var_20_bool; object var_21_object;
			var_16_object = var_21_object;
			func_971(var_20_bool, var_21_object);
			enable OnUse;
			object var_34_object;
			var_16_object = var_34_object;
			func_1325(var_34_object);
			func_1208("Neutral");
			func_766();
			func_757();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_20_bool;
	func_980(var_20_bool);
	if(!var_20_bool) goto Label_0; //@nz
}


void func_1281(int var_48_int)
{
	int var_51_int; bool var_52_bool;
	var_51_int = 0;
	
	for(;;) {
		string var_54_string; int var_55_int;
		var_51_int = var_55_int;
		func_1274(var_54_string, var_55_int);
		@HasAnimation(var_52_bool, "all", var_54_string);
		if(!var_52_bool) //@nz
			break;
		var_51_int += 1;
	}
	var_51_int = var_48_int;
}


void func_13(object var_0_object, int var_39_int, object var_40_object)
{
	var_0_object = var_40_object;
	bool var_50_bool; object var_51_object;
	object var_52_object;
	func_1243(var_52_object);
	var_52_object = var_51_object;
	func_1070(var_50_bool, var_51_object);
	bool var_145_bool; object var_146_object;
	var_40_object = var_146_object;
	func_985(var_145_bool, var_146_object, 70.0);
	if(!var_145_bool) { //@nz
		var_39_int = -2;
		return 8;
	}
	object var_46_object;
	@CreateDialog(var_46_object);
	int var_192_int;
	func_1300(var_192_int);
	var_46_object->SetNPCName(var_192_int);
	int var_193_int;
	func_1298(var_193_int);
	var_46_object->SetNPCDescription(var_193_int);
	string var_194_string;
	func_1302(var_194_string);
	var_46_object->SetPhoto(var_194_string);
	string var_195_string;
	func_1304(var_195_string);
	var_46_object->SetPhoto2(var_195_string);
	int var_196_int;
	func_1308(var_196_int);
	var_46_object->SetPlayerName(var_196_int);
	bool var_47_bool;
	@IsOverrideActive(var_47_bool);
	if(var_47_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	@DoDialog(var_46_object);
	object var_205_object; object var_206_object;
	var_40_object = var_205_object;
	var_46_object = var_206_object;
	TaskCall(2);
	func_94(var_207_object, var_208_object, var_209_string, var_210_bool, var_205_object, var_206_object);
	TaskReturn();
	bool var_49_bool;
	var_46_object->IsDialogEnd(var_49_bool);
	
	for(;;) {
		var_241_bool = !var_49_bool; //@nz
		if(var_241_bool == 0) goto Label_83;
		@sync();
		var_46_object->IsDialogEnd(var_49_bool);
	}
	
Label_83:
	object var_242_object;
	var_40_object = var_242_object;
	func_1053();
	@StopDialog(var_46_object);
	var_46_object->GetReturnValue(-1);
	int var_48_int = var_39_int;
}
EMIT "Stack[-4] = 0";


void func_1165(bool var_92_bool, object var_93_object)
{
	bool var_101_bool; int var_102_int; string var_103_string;
	int var_105_int;
	func_1259(var_105_int);
	string var_99_string = ("d" + var_105_int) + "m";
	int var_100_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_93_object->HasProperty((var_99_string + (var_100_int + 1)), var_101_bool);
			if(!var_101_bool) { //@nz
			} else {
				var_100_int += 1;
			}
		}
		if(!var_100_int) { //@nz
			var_92_bool = false;
			return 10;
		}
		var_102_int = 0;
		if(var_100_int > 1)
			@irand(var_102_int, var_100_int);
		var_93_object->GetProperty((var_99_string + (var_102_int + 1)), var_103_string);
		bool var_124_bool; string var_125_string;
		var_103_string = var_125_string;
		func_1221(var_124_bool, var_125_string);
		var_124_bool = var_92_bool;
		return 10;

	}
}


void func_1298(int var_193_int)
{
	var_193_int = 515544;
}


// @pe
void func_147(object var_2_object, string var_212_string)
{
	bool var_213_bool;
	func_1306(var_213_bool);
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
	func_1215(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	
}


void func_1300(int var_192_int)
{
	var_192_int = 502869;
}


void func_1302(string var_194_string)
{
	var_194_string = "ui/NPC_Mark.png";
}


void func_1304(string var_195_string)
{
	var_195_string = "ui/NPC_Mark_b.png";
}


void func_1306(bool var_88_bool)
{
	var_88_bool = true;
}


void func_1308(int var_196_int)
{
	int var_198_int;
	@GetVariable("branch", var_198_int);
	if(var_198_int == 0) {
		var_196_int = 1;
		return 2;
	EMIT "GOTO 0x52b";
	}
	if(var_198_int == 1) {
		var_196_int = 2;
		return 2;
	}
	var_196_int = 3;
}


void func_1053(void)
{
	bool var_244_bool;
	@CameraSwitchToNormal();
	bool var_245_bool;
	func_1306(var_245_bool);
	if(var_245_bool != 0) {
	} else {
		@HasAnimationTrack(var_244_bool, "head");
		if(var_244_bool == 0) goto Label_1069;
		@UnlookAsync("head");
	}
Label_1069:
	
}


void func_1325(object var_34_object)
{
	int var_36_int;
	@GetVariable("mt_mark", var_36_int);
	if(!var_36_int) { //@nz
		int var_39_int; object var_40_object;
		var_34_object = var_40_object;
		TaskCall(1);
		func_13(var_41_object, var_39_int, var_40_object);
		TaskReturn();
		@SetVariable("mt_mark", 1);
	}
	bool var_251_bool;
	func_1268(var_251_bool, 12);
	if(var_251_bool != 0) {
		int var_254_int; object var_255_object;
		var_34_object = var_255_object;
		TaskCall(3);
		func_229(var_256_object, var_254_int, var_255_object);
		TaskReturn();
	}
	int var_313_int; object var_314_object;
	var_34_object = var_314_object;
	TaskCall(5);
	func_488(var_315_object, var_313_int, var_314_object);
	TaskReturn();
}


void func_1070(bool var_50_bool, object var_51_object)
{
	int var_57_int; int var_58_int;
	@GetVariable("voice_common", var_57_int);
	if(var_57_int != 0) {
		bool var_61_bool; object var_62_object;
		var_51_object = var_62_object;
		func_1128(var_61_bool, var_62_object);
		if(!var_61_bool) { //@nz
			bool var_92_bool; object var_93_object;
			var_51_object = var_93_object;
			func_1165(var_92_bool, var_93_object);
			if(!var_92_bool) { //@nz
				var_50_bool = false;
				return 4;
			}
		}
		@irand(var_58_int, 2);
		if(var_58_int != 0)
			@SetVariable("voice_common", ((var_57_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_137_bool; object var_138_object;
		var_51_object = var_138_object;
		func_1165(var_137_bool, var_138_object);
		if(!var_137_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_51_object = var_141_object;
			func_1128(var_140_bool, var_141_object);
			if(!var_140_bool) { //@nz
				var_50_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1126;
	
Label_1126:
	var_50_bool = true;
	
}


void func_946(bool var_68_bool)
{
	var_68_bool = true;
}


void func_948(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_310(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_278_object, object var_279_object)
{
	var_0_object = var_279_object;
	var_1_object = var_278_object;
	var_3_string = false;
	if(1 != 0) {
		func_373(var_279_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_343;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x13a";
	}
Label_343:
	bool var_303_bool;
	func_1306(var_303_bool);
	if(var_303_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1208(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_372;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_372:
		return 0;

	}
	
}


void func_695(object var_0_object)
{
	bool var_16_bool;
	func_980(var_16_bool);
	if(!var_16_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_823();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_877();
	}
}
EMIT "Return(); Pop(0)";


void func_1208(string var_23_string)
{
	float var_26_float; float var_27_float;
	@lshGetAnimTimes(var_23_string, var_26_float, var_27_float);
	@lshPlayAnimation(var_26_float, var_27_float, false);
}


// @pe
void func_569(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_337_object, object var_338_object)
{
	var_0_object = var_338_object;
	var_1_object = var_337_object;
	var_3_string = false;
	if(1 != 0) {
		func_627(var_338_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_597;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x23d";
	}
Label_597:
	bool var_359_bool;
	func_1306(var_359_bool);
	if(var_359_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1208(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_626;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_626:
		return 0;

	}
	
}


void func_953(float var_31_float, object var_32_object)
{
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	var_32_object->GetPosition(var_37_cvector);
	var_31_float = (var_37_cvector - var_36_cvector) | (var_37_cvector - var_36_cvector);
}


void func_1215(string var_216_string, bool var_217_bool)
{
	float var_222_float; float var_223_float;
	@lshGetAnimTimes(var_216_string, var_222_float, var_223_float);
	@lshPlayAnimation(var_222_float, var_223_float, var_217_bool);
}


void func_961(bool var_24_bool, cvector var_25_cvector)
{
	cvector var_29_cvector;
	@GetPosition(var_29_cvector);
	cvector var_30_cvector = var_25_cvector - var_29_cvector;
	var_32_float = GetByIndex(var_30_cvector, 0);
	var_33_float = GetByIndex(var_30_cvector, 2);
	bool var_31_bool;
	@Rotate(var_32_float, var_33_float, var_31_bool);
	var_31_bool = var_24_bool;
}


void func_1221(bool var_84_bool, string var_85_string)
{
	bool var_87_bool;
	bool var_88_bool;
	func_1306(var_88_bool);
	if(var_88_bool != 0) {
		@lshHasSpeech(var_87_bool, var_85_string);
		if(var_87_bool != 0) {
			@lshPlaySpeech(var_85_string);
			var_84_bool = true;
		}
	}
	var_84_bool = false;
}


void func_971(bool var_20_bool, object var_21_object)
{
	cvector var_23_cvector;
	var_21_object->GetPosition(var_23_cvector);
	bool var_24_bool; cvector var_25_cvector;
	var_23_cvector = var_25_cvector;
	func_961(var_24_bool, var_25_cvector);
	var_24_bool = var_20_bool;
}


void func_715(bool var_41_bool)
{
	object var_43_object;
	@FindActor(var_43_object, "player");
	if(!var_43_object) //@nz
		var_41_bool = false;
	bool var_46_bool; object var_47_object;
	var_43_object = var_47_object;
	func_971(var_46_bool, var_47_object);
	var_46_bool = var_41_bool;
}
EMIT "Stack[-1] = 0";


void func_1236(void)
{
	bool var_19_bool;
	func_1306(var_19_bool);
	if(var_19_bool != 0)
		@lshStopSpeech();
}


void func_980(bool var_16_bool)
{
	bool var_18_bool;
	@IsLoaded(var_18_bool);
	var_18_bool = var_16_bool;
}


void func_985(bool var_145_bool, object var_146_object, float var_147_float)
{
	cvector var_158_cvector; bool var_165_bool;
	var_146_object->GetPosition(var_158_cvector);
	float var_157_float;
	var_146_object->GetEyesHeight(var_157_float);
	var_166_float = GetByIndex(var_158_cvector, 1);
	SetByIndex(var_158_cvector, 1) = (var_166_float + var_157_float);
	cvector var_159_cvector;
	@GetPosition(var_159_cvector);
	@GetEyesHeight(var_157_float);
	var_167_float = GetByIndex(var_159_cvector, 1);
	SetByIndex(var_159_cvector, 1) = (var_167_float + var_157_float);
	cvector var_160_cvector = var_158_cvector - var_159_cvector;
	var_168_float = GetByIndex(var_160_cvector, 1);
	SetByIndex(var_160_cvector, 1) = (float)0;
	var_170_float = sqrt(var_160_cvector | var_160_cvector);
	var_160_cvector /= var_170_float;
	cvector var_161_cvector = -var_160_cvector;
	cvector var_172_cvector;
	func_1249(var_172_cvector, (var_161_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_162_cvector = ((var_160_cvector * var_147_float) + (var_172_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_164_bool;
	@IsOverrideActive(var_164_bool);
	if(var_164_bool != 0)
		var_145_bool = false;
	@StopWorld();
	@CameraTransit((var_159_cvector + var_162_cvector), var_161_cvector);
	var_185_float = GetByIndex(var_162_cvector, 0);
	var_186_float = GetByIndex(var_162_cvector, 2);
	@Rotate(var_185_float, var_186_float);
	bool var_187_bool;
	func_1306(var_187_bool);
	if(var_187_bool != 0) {
	} else {
		@HasAnimationTrack(var_165_bool, "head");
		if(var_165_bool == 0) goto Label_1047;
		@LookAsyncCamera("head");
	}
Label_1047:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_145_bool = true;
	
}


void func_730(object var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0);
	var_94_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_93_float, var_94_float);
}


void func_1243(object var_52_object)
{
	object var_54_object;
	@self(var_54_object);
	var_54_object = var_52_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_205_object, object var_206_object)
{
	var_0_object = var_206_object;
	var_1_object = var_205_object;
	var_3_string = false;
	if(1 != 0) {
		func_147(var_206_object, "Neutral");
		var_0_object->SetMessage(525504); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525505, 30769, 26861); //@t
		goto Label_117;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_117:
	bool var_228_bool;
	func_1306(var_228_bool);
	if(var_228_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1208(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_146;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_146:
		return 0;

	}
	
}


void func_735(bool var_24_bool)
{
	object var_27_object;
	@FindActor(var_27_object, "player");
	if(!var_27_object) { //@nz
		var_24_bool = false;
		return 4;
	}
	float var_31_float; object var_32_object;
	func_953(var_31_float, var_32_object);
	if(var_31_float > 90000.0) {
		var_24_bool = false;
		return 4;
	}
	bool var_28_bool;
	@CanSee(var_28_bool, var_32_object);
	var_28_bool = var_24_bool;
}
EMIT "Stack[-2] = 0";


void func_1249(cvector var_172_cvector, cvector var_173_cvector)
{
	float var_176_float = sqrt(var_173_cvector | var_173_cvector);
	if(var_176_float < 0.000001)
		var_172_cvector = [0.0, 0.0, 0.0];
	var_172_cvector = var_173_cvector / var_176_float;
}


void func_229(object var_0_object, int var_254_int, object var_255_object)
{
	var_0_object = var_255_object;
	bool var_265_bool; object var_266_object;
	object var_267_object;
	func_1243(var_267_object);
	var_267_object = var_266_object;
	func_1070(var_265_bool, var_266_object);
	bool var_268_bool; object var_269_object;
	var_255_object = var_269_object;
	func_985(var_268_bool, var_269_object, 70.0);
	if(!var_268_bool) { //@nz
		var_254_int = -2;
		return 8;
	}
	object var_261_object;
	@CreateDialog(var_261_object);
	int var_272_int;
	func_1300(var_272_int);
	var_261_object->SetNPCName(var_272_int);
	int var_273_int;
	func_1298(var_273_int);
	var_261_object->SetNPCDescription(var_273_int);
	string var_274_string;
	func_1302(var_274_string);
	var_261_object->SetPhoto(var_274_string);
	string var_275_string;
	func_1304(var_275_string);
	var_261_object->SetPhoto2(var_275_string);
	int var_276_int;
	func_1308(var_276_int);
	var_261_object->SetPlayerName(var_276_int);
	bool var_262_bool;
	@IsOverrideActive(var_262_bool);
	if(var_262_bool != 0) {
		var_254_int = -2;
		return 8;
	}
	@DoDialog(var_261_object);
	object var_278_object; object var_279_object;
	var_255_object = var_278_object;
	var_261_object = var_279_object;
	TaskCall(4);
	func_310(var_280_object, var_281_object, var_282_string, var_283_bool, var_278_object, var_279_object);
	TaskReturn();
	bool var_264_bool;
	var_261_object->IsDialogEnd(var_264_bool);
	
	for(;;) {
		var_311_bool = !var_264_bool; //@nz
		if(var_311_bool == 0) goto Label_299;
		@sync();
		var_261_object->IsDialogEnd(var_264_bool);
	}
	
Label_299:
	object var_312_object;
	var_255_object = var_312_object;
	func_1053();
	@StopDialog(var_261_object);
	var_261_object->GetReturnValue(-1);
	int var_263_int = var_254_int;
}
EMIT "Stack[-4] = 0";


void func_1128(bool var_61_bool, object var_62_object)
{
	string var_68_string; bool var_70_bool; int var_71_int; string var_72_string;
	var_68_string = "c";
	int var_69_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_62_object->HasProperty((var_68_string + (var_69_int + 1)), var_70_bool);
			if(!var_70_bool) { //@nz
			} else {
				var_69_int += 1;
			}
		}
		if(!var_69_int) { //@nz
			var_61_bool = false;
			return 10;
		}
		var_71_int = 0;
		if(var_69_int > 1)
			@irand(var_71_int, var_69_int);
		var_62_object->GetProperty((var_68_string + (var_71_int + 1)), var_72_string);
		bool var_84_bool; string var_85_string;
		var_72_string = var_85_string;
		func_1221(var_84_bool, var_85_string);
		var_84_bool = var_61_bool;
		return 10;

	}
}


void func_488(object var_0_object, int var_313_int, object var_314_object)
{
	var_0_object = var_314_object;
	bool var_324_bool; object var_325_object;
	object var_326_object;
	func_1243(var_326_object);
	var_326_object = var_325_object;
	func_1070(var_324_bool, var_325_object);
	bool var_327_bool; object var_328_object;
	var_314_object = var_328_object;
	func_985(var_327_bool, var_328_object, 70.0);
	if(!var_327_bool) { //@nz
		var_313_int = -2;
		return 8;
	}
	object var_320_object;
	@CreateDialog(var_320_object);
	int var_331_int;
	func_1300(var_331_int);
	var_320_object->SetNPCName(var_331_int);
	int var_332_int;
	func_1298(var_332_int);
	var_320_object->SetNPCDescription(var_332_int);
	string var_333_string;
	func_1302(var_333_string);
	var_320_object->SetPhoto(var_333_string);
	string var_334_string;
	func_1304(var_334_string);
	var_320_object->SetPhoto2(var_334_string);
	int var_335_int;
	func_1308(var_335_int);
	var_320_object->SetPlayerName(var_335_int);
	bool var_321_bool;
	@IsOverrideActive(var_321_bool);
	if(var_321_bool != 0) {
		var_313_int = -2;
		return 8;
	}
	@DoDialog(var_320_object);
	object var_337_object; object var_338_object;
	var_314_object = var_337_object;
	var_320_object = var_338_object;
	TaskCall(6);
	func_569(var_339_object, var_340_object, var_341_string, var_342_bool, var_337_object, var_338_object);
	TaskReturn();
	bool var_323_bool;
	var_320_object->IsDialogEnd(var_323_bool);
	
	for(;;) {
		var_367_bool = !var_323_bool; //@nz
		if(var_367_bool == 0) goto Label_558;
		@sync();
		var_320_object->IsDialogEnd(var_323_bool);
	}
	
Label_558:
	object var_368_object;
	var_314_object = var_368_object;
	func_1053();
	@StopDialog(var_320_object);
	var_320_object->GetReturnValue(-1);
	int var_322_int = var_313_int;
}
EMIT "Stack[-4] = 0";


void func_1259(int var_105_int)
{
	float var_107_float;
	@GetGameTime(var_107_float);
	var_105_int = 1 + (var_107_float / 24);
}


void func_877(void)
{
	bool var_42_bool; int var_43_int; int var_44_int; bool var_45_bool;
	@WaitForAnimEnd();
	bool var_46_bool;
	func_980(var_46_bool);
	if(!var_46_bool) //@nz
		return 12;
	int var_48_int;
	func_1281(var_48_int);
	int var_40_int;
	var_48_int = var_40_int;
	int var_41_int = 0;
	
	for(;;) {
		bool var_61_bool = false;
		if(var_41_int < 5) {
			bool var_64_bool;
			func_980(var_64_bool);
			if(var_64_bool != 0)
				var_61_bool = true;
		}
		if(var_61_bool != 0) {
			if(!var_40_int) { //@nz
				@Sleep(3, var_42_bool);
				if(!var_42_bool) { //@nz
				} else {
			} else {
			@irand(var_43_int, var_40_int);
			@irand(var_44_int, 5);
			if(var_44_int != 0)
				var_43_int = 0;
			string var_75_string; int var_76_int;
			var_43_int = var_76_int;
			func_1274(var_75_string, var_76_int);
			@PlayAnimation("all", var_75_string);
			@WaitForAnimEnd(var_45_bool);
			var_77_bool = !var_45_bool; //@nz
			if(var_77_bool == 0) goto Label_932;
			goto Label_943;
			}
				Label_932:
					bool var_68_bool;
					func_946(var_68_bool);
					var_69_bool = !var_68_bool; //@nz
					if(var_69_bool == 0) goto Label_938;
			}
		}
	Label_943:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_938:
		@ResetAAS();
		var_41_int += 1;
	}
	
}


// @pe
void func_627(object var_2_object, string var_344_string)
{
	bool var_345_bool;
	func_1306(var_345_bool);
	if(!var_345_bool) //@nz
		return 0;
	if(var_344_string == var_2_object)
		return 0;
	string var_348_string; bool var_349_bool;
	var_344_string = var_348_string;
	if(var_344_string == "")
		var_349_bool = false;
	else
		var_349_bool = true;
	func_1215(var_348_string, var_349_bool);
	var_2_object = var_344_string;
	
}


// @pe
void func_1268(bool var_251_bool, int var_252_int)
{
	int var_253_int;
	func_1259(var_253_int);
	var_251_bool = var_253_int == var_252_int;
}


// @pe
void func_373(object var_2_object, string var_285_string)
{
	bool var_286_bool;
	func_1306(var_286_bool);
	if(!var_286_bool) //@nz
		return 0;
	if(var_285_string == var_2_object)
		return 0;
	string var_289_string; bool var_290_bool;
	var_285_string = var_289_string;
	if(var_285_string == "")
		var_290_bool = false;
	else
		var_290_bool = true;
	func_1215(var_289_string, var_290_bool);
	var_2_object = var_285_string;
	
}


void func_757(void)
{
	float var_30_float;
	@rand(var_30_float, 8, 16);
	@SetTimer(10, var_30_float);
}


void func_1274(string var_54_string, int var_55_int)
{
	string var_57_string = "idle";
	if(var_55_int != 0)
		var_57_string += var_55_int;
	var_57_string = var_54_string;
}


void func_766(void)
{
	@KillTimer(10);
}


