// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, cvector var_17_cvector)
	{
		if(1 != 0) {
			func_1270();
			if(var_16_bool == 26860) {
				func_139(var_17_cvector, "Rage");
				var_0_object->SetMessage(525504); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525505, 30769, 26861); //@t
				var_0_object->AddReply(541845, 44064, 44063); //@t
				return 0;
			}
			if(var_16_bool == 44064) {
				func_139(var_17_cvector, "Rage");
				var_0_object->SetMessage(541846); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541847, 30769, 44065); //@t
				var_0_object->AddReply(541848, 30769, 44066); //@t
				return 0;
			}
			if(var_16_bool == 30769) {
				func_139(var_17_cvector, "Rage");
				var_0_object->SetMessage(529315); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529316, -1, 30770); //@t
				var_0_object->AddReply(529317, -1, 30771); //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			func_1340(var_66_bool);
			if(var_66_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa2";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, cvector var_17_cvector)
	{
		if(1 != 0) {
			func_1270();
			if(var_16_bool == 36906) {
				func_393(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_16_bool == 36953) {
				func_393(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_16_bool == 36957) {
				func_393(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_69_bool;
			func_1340(var_69_bool);
			if(var_69_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1a0";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, cvector var_17_cvector)
	{
		if(1 != 0) {
			func_1270();
			if(var_16_int == 42554) {
				func_647(var_17_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_46_bool;
			func_1340(var_46_bool);
			if(var_46_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x29e";
	
	}

}


maintask task_6
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		func_715(var_15_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, int var_16_int)
	{
		if(var_16_int == 10) {
			func_780();
			bool var_20_bool = false;
			bool var_21_bool;
			func_994(var_21_bool);
			if(var_21_bool != 0) {
				bool var_24_bool;
				func_749(var_24_bool);
				if(var_24_bool != 0)
					var_20_bool = true;
			}
			if(var_20_bool != 0) {
				bool var_41_bool;
				func_729(var_41_bool);
				if(var_41_bool != 0) {
					bool var_60_bool; object var_61_object;
					object var_62_object;
					func_1277(var_62_object);
					var_62_object = var_61_object;
					func_1144(var_60_bool, var_61_object);
				}
			} else {
				func_744(var_16_int);
				func_771();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		func_962();
		func_780();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		@StopGroup0();
		func_780();
		func_1224("Neutral");
		func_771();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_16_bool != 0)
			func_771();
		else
			func_1224("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, object var_16_object)
	{
		bool var_18_bool;
		@IsOverrideActive(var_18_bool);
		if(!var_18_bool) { //@nz
			disable OnUse;
			func_962();
			bool var_20_bool; object var_21_object;
			var_16_object = var_21_object;
			func_985(var_20_bool, var_21_object);
			enable OnUse;
			object var_34_object;
			var_16_object = var_34_object;
			func_1359(var_34_object);
			func_1224("Neutral");
			func_780();
			func_771();
		}
	}

}


void func_0(object var_0_object, int var_39_int, object var_40_object)
{
	var_0_object = var_40_object;
	bool var_50_bool; object var_51_object;
	var_40_object = var_51_object;
	func_999(var_50_bool, var_51_object, 70.0);
	if(!var_50_bool) { //@nz
		var_39_int = -2;
		return 8;
	}
	object var_46_object;
	@CreateDialog(var_46_object);
	int var_98_int;
	func_1334(var_98_int);
	var_46_object->SetNPCName(var_98_int);
	int var_99_int;
	func_1332(var_99_int);
	var_46_object->SetNPCDescription(var_99_int);
	string var_100_string;
	func_1336(var_100_string);
	var_46_object->SetPhoto(var_100_string);
	string var_101_string;
	func_1338(var_101_string);
	var_46_object->SetPhoto2(var_101_string);
	int var_102_int;
	func_1342(var_102_int);
	var_46_object->SetPlayerName(var_102_int);
	bool var_47_bool;
	@IsOverrideActive(var_47_bool);
	if(var_47_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	@DoDialog(var_46_object);
	bool var_111_bool; object var_112_object;
	object var_113_object;
	func_1277(var_113_object);
	var_113_object = var_112_object;
	func_1086(var_111_bool, var_112_object);
	object var_206_object; object var_207_object;
	var_40_object = var_206_object;
	var_46_object = var_207_object;
	TaskCall(1);
	func_81(var_208_object, var_209_object, var_210_string, var_211_bool, var_206_object, var_207_object);
	TaskReturn();
	bool var_49_bool;
	var_46_object->IsDialogEnd(var_49_bool);
	
	for(;;) {
		var_255_bool = !var_49_bool; //@nz
		if(var_255_bool == 0) goto Label_70;
		@sync();
		var_46_object->IsDialogEnd(var_49_bool);
	}
	
Label_70:
	object var_256_object;
	var_40_object = var_256_object;
	func_1068();
	@StopDialog(var_46_object);
	var_46_object->GetReturnValue(-1);
	int var_48_int = var_39_int;
}
EMIT "Stack[-4] = 0";


void func_1283(cvector var_77_cvector, cvector var_78_cvector)
{
	float var_81_float = sqrt(var_78_cvector | var_78_cvector);
	if(var_81_float < 0.000001)
		var_77_cvector = [0.0, 0.0, 0.0];
	var_77_cvector = var_78_cvector / var_81_float;
}


void func_771(void)
{
	float var_387_float;
	@rand(var_387_float, 8, 16);
	@SetTimer(10, var_387_float);
}


// @pe
void func_647(object var_2_object, string var_359_string)
{
	bool var_360_bool;
	func_1340(var_360_bool);
	if(!var_360_bool) //@nz
		return 0;
	if(var_359_string == var_2_object)
		return 0;
	string var_363_string; bool var_364_bool;
	var_359_string = var_363_string;
	if(var_359_string == "")
		var_364_bool = false;
	else
		var_364_bool = true;
	func_1240(var_363_string, var_364_bool);
	var_2_object = var_359_string;
	
}


// @pe
void func_393(object var_2_object, string var_300_string)
{
	bool var_301_bool;
	func_1340(var_301_bool);
	if(!var_301_bool) //@nz
		return 0;
	if(var_300_string == var_2_object)
		return 0;
	string var_304_string; bool var_305_bool;
	var_300_string = var_304_string;
	if(var_300_string == "")
		var_305_bool = false;
	else
		var_305_bool = true;
	func_1240(var_304_string, var_305_bool);
	var_2_object = var_300_string;
	
}


// @pe
void func_139(object var_2_object, string var_213_string)
{
	bool var_214_bool;
	func_1340(var_214_bool);
	if(!var_214_bool) //@nz
		return 0;
	if(var_213_string == var_2_object)
		return 0;
	string var_217_string; bool var_218_bool;
	var_213_string = var_217_string;
	if(var_213_string == "")
		var_218_bool = false;
	else
		var_218_bool = true;
	func_1240(var_217_string, var_218_bool);
	var_2_object = var_213_string;
	
}


void func_780(void)
{
	@KillTimer(10);
}


void func_1293(int var_166_int)
{
	float var_168_float;
	@GetGameTime(var_168_float);
	var_166_int = 1 + (var_168_float / 24);
}


// @pe
void func_1302(bool var_266_bool, int var_267_int)
{
	int var_268_int;
	func_1293(var_268_int);
	var_266_bool = var_268_int == var_267_int;
}


void func_1308(string var_40_string, int var_41_int)
{
	string var_43_string = "idle";
	if(var_41_int != 0)
		var_43_string += var_41_int;
	var_43_string = var_40_string;
}


void func_1181(bool var_153_bool, object var_154_object)
{
	bool var_162_bool; int var_163_int; string var_164_string;
	int var_166_int;
	func_1293(var_166_int);
	string var_160_string = ("d" + var_166_int) + "m";
	int var_161_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_154_object->HasProperty((var_160_string + (var_161_int + 1)), var_162_bool);
			if(!var_162_bool) { //@nz
			} else {
				var_161_int += 1;
			}
		}
		if(!var_161_int) { //@nz
			var_153_bool = false;
			return 10;
		}
		var_163_int = 0;
		if(var_161_int > 1)
			@irand(var_163_int, var_161_int);
		var_154_object->GetProperty((var_160_string + (var_163_int + 1)), var_164_string);
		bool var_185_bool; string var_186_string;
		var_164_string = var_186_string;
		func_1255(var_185_bool, var_186_string);
		var_185_bool = var_153_bool;
		return 10;

	}
}


void func_1315(int var_34_int)
{
	int var_37_int; bool var_38_bool;
	var_37_int = 0;
	
	for(;;) {
		string var_40_string; int var_41_int;
		var_37_int = var_41_int;
		func_1308(var_40_string, var_41_int);
		@HasAnimation(var_38_bool, "all", var_40_string);
		if(!var_38_bool) //@nz
			break;
		var_37_int += 1;
	}
	var_37_int = var_34_int;
}


void func_1068(void)
{
	bool var_258_bool;
	@CameraSwitchToNormal(true);
	bool var_260_bool;
	func_1340(var_260_bool);
	if(var_260_bool != 0) {
	} else {
		@HasAnimationTrack(var_258_bool, "head");
		if(var_258_bool == 0) goto Label_1085;
		@UnlookAsync("head");
	}
Label_1085:
	
}


void func_1332(int var_99_int)
{
	var_99_int = 515544;
}


void func_1334(int var_98_int)
{
	var_98_int = 502869;
}


void func_1336(string var_100_string)
{
	var_100_string = "ui/NPC_Mark.png";
}


void func_1338(string var_101_string)
{
	var_101_string = "ui/NPC_Mark_b.png";
}


void func_1340(bool var_93_bool)
{
	var_93_bool = true;
}


void func_1086(bool var_111_bool, object var_112_object)
{
	int var_118_int; int var_119_int;
	@GetVariable("voice_common", var_118_int);
	if(var_118_int != 0) {
		bool var_122_bool; object var_123_object;
		var_112_object = var_123_object;
		func_1144(var_122_bool, var_123_object);
		if(!var_122_bool) { //@nz
			bool var_153_bool; object var_154_object;
			var_112_object = var_154_object;
			func_1181(var_153_bool, var_154_object);
			if(!var_153_bool) { //@nz
				var_111_bool = false;
				return 4;
			}
		}
		@irand(var_119_int, 2);
		if(var_119_int != 0)
			@SetVariable("voice_common", ((var_118_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_198_bool; object var_199_object;
		var_112_object = var_199_object;
		func_1181(var_198_bool, var_199_object);
		if(!var_198_bool) { //@nz
			bool var_201_bool; object var_202_object;
			var_112_object = var_202_object;
			func_1144(var_201_bool, var_202_object);
			if(!var_201_bool) { //@nz
				var_111_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1142;
	
Label_1142:
	var_111_bool = true;
	
}


void func_1342(int var_102_int)
{
	int var_104_int;
	@GetVariable("branch", var_104_int);
	if(var_104_int == 0) {
		var_102_int = 1;
		return 2;
	EMIT "GOTO 0x54d";
	}
	if(var_104_int == 1) {
		var_102_int = 2;
		return 2;
	}
	var_102_int = 3;
}


void func_960(bool var_54_bool)
{
	var_54_bool = true;
}


void func_962(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_967(float var_31_float, object var_32_object)
{
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	var_32_object->GetPosition(var_37_cvector);
	var_31_float = (var_37_cvector - var_36_cvector) | (var_37_cvector - var_36_cvector);
}


void func_1224(string var_239_string)
{
	bool var_243_bool; float var_244_float; float var_245_float;
	@lshHasAnimation(var_243_bool, var_239_string);
	if(var_243_bool != 0) {
		@lshGetAnimTimes(var_239_string, var_244_float, var_245_float);
		@lshPlayAnimation(var_244_float, var_245_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_239_string);
	}
	
}


// @pe
void func_330(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_293_object, object var_294_object)
{
	var_0_object = var_294_object;
	var_1_object = var_293_object;
	var_3_string = false;
	if(1 != 0) {
		func_393(var_294_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_363;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x14e";
	}
Label_363:
	bool var_318_bool;
	func_1340(var_318_bool);
	if(var_318_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1224(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_392;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_392:
		return 0;

	}
	
}


void func_715(object var_0_object)
{
	bool var_16_bool;
	func_994(var_16_bool);
	if(!var_16_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_891();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_589(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_352_object, object var_353_object)
{
	var_0_object = var_353_object;
	var_1_object = var_352_object;
	var_3_string = false;
	if(1 != 0) {
		func_647(var_353_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_617;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x251";
	}
Label_617:
	bool var_374_bool;
	func_1340(var_374_bool);
	if(var_374_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1224(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_646;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_646:
		return 0;

	}
	
}


void func_1359(object var_34_object)
{
	int var_36_int;
	@GetVariable("mt_mark", var_36_int);
	if(!var_36_int) { //@nz
		int var_39_int; object var_40_object;
		var_34_object = var_40_object;
		TaskCall(0);
		func_0(var_41_object, var_39_int, var_40_object);
		TaskReturn();
		@SetVariable("mt_mark", 1);
	}
	bool var_266_bool;
	func_1302(var_266_bool, 12);
	if(var_266_bool != 0) {
		int var_269_int; object var_270_object;
		var_34_object = var_270_object;
		TaskCall(2);
		func_249(var_271_object, var_269_int, var_270_object);
		TaskReturn();
		return 2;
	}
	int var_328_int; object var_329_object;
	var_34_object = var_329_object;
	TaskCall(4);
	func_508(var_330_object, var_328_int, var_329_object);
	TaskReturn();
}


void func_975(bool var_24_bool, cvector var_25_cvector)
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


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_206_object, object var_207_object)
{
	var_0_object = var_207_object;
	var_1_object = var_206_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_207_object, "Rage");
		var_0_object->SetMessage(525504); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525505, 30769, 26861); //@t
		var_0_object->AddReply(541845, 44064, 44063); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_237_bool;
	func_1340(var_237_bool);
	if(var_237_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1224(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_138;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_138:
		return 0;

	}
	
}


void func_1240(string var_217_string, bool var_218_bool)
{
	bool var_224_bool; float var_225_float; float var_226_float;
	@lshHasAnimation(var_224_bool, var_217_string);
	if(var_224_bool != 0) {
		@lshGetAnimTimes(var_217_string, var_225_float, var_226_float);
		@lshPlayAnimation(var_225_float, var_226_float, var_218_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_217_string);
	}
	
}


void func_985(bool var_20_bool, object var_21_object)
{
	cvector var_23_cvector;
	var_21_object->GetPosition(var_23_cvector);
	bool var_24_bool; cvector var_25_cvector;
	var_23_cvector = var_25_cvector;
	func_975(var_24_bool, var_25_cvector);
	var_24_bool = var_20_bool;
}


void func_729(bool var_41_bool)
{
	object var_43_object;
	@FindActor(var_43_object, "player");
	if(!var_43_object) //@nz
		var_41_bool = false;
	bool var_46_bool; object var_47_object;
	var_43_object = var_47_object;
	func_985(var_46_bool, var_47_object);
	var_46_bool = var_41_bool;
}
EMIT "Stack[-1] = 0";


void func_994(bool var_16_bool)
{
	bool var_18_bool;
	@IsLoaded(var_18_bool);
	var_18_bool = var_16_bool;
}


void func_999(bool var_50_bool, object var_51_object, float var_52_float)
{
	cvector var_63_cvector; bool var_70_bool;
	var_51_object->GetPosition(var_63_cvector);
	float var_62_float;
	var_51_object->GetEyesHeight(var_62_float);
	var_71_float = GetByIndex(var_63_cvector, 1);
	SetByIndex(var_63_cvector, 1) = (var_71_float + var_62_float);
	cvector var_64_cvector;
	@GetPosition(var_64_cvector);
	@GetEyesHeight(var_62_float);
	var_72_float = GetByIndex(var_64_cvector, 1);
	SetByIndex(var_64_cvector, 1) = (var_72_float + var_62_float);
	cvector var_65_cvector = var_63_cvector - var_64_cvector;
	var_73_float = GetByIndex(var_65_cvector, 1);
	SetByIndex(var_65_cvector, 1) = (float)0;
	var_75_float = sqrt(var_65_cvector | var_65_cvector);
	var_65_cvector /= var_75_float;
	cvector var_66_cvector = -var_65_cvector;
	cvector var_77_cvector;
	func_1283(var_77_cvector, (var_66_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_67_cvector = ((var_65_cvector * var_52_float) + (var_77_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_69_bool;
	@IsOverrideActive(var_69_bool);
	if(var_69_bool != 0)
		var_50_bool = false;
	@StopWorld();
	@CameraTransit((var_64_cvector + var_67_cvector), var_66_cvector, true);
	var_91_float = GetByIndex(var_67_cvector, 0);
	var_92_float = GetByIndex(var_67_cvector, 2);
	@Rotate(var_91_float, var_92_float);
	bool var_93_bool;
	func_1340(var_93_bool);
	if(var_93_bool != 0) {
	} else {
		@HasAnimationTrack(var_70_bool, "head");
		if(var_70_bool == 0) goto Label_1062;
		@LookAsyncCamera("head");
	}
Label_1062:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_50_bool = true;
	
}


void func_744(object var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0);
	var_94_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_93_float, var_94_float);
}


void func_1255(bool var_145_bool, string var_146_string)
{
	bool var_148_bool;
	bool var_149_bool;
	func_1340(var_149_bool);
	if(var_149_bool != 0) {
		@lshHasSpeech(var_148_bool, var_146_string);
		if(var_148_bool != 0) {
			@lshPlaySpeech(var_146_string);
			var_145_bool = true;
		}
	}
	var_145_bool = false;
}


void func_749(bool var_24_bool)
{
	object var_27_object;
	@FindActor(var_27_object, "player");
	if(!var_27_object) { //@nz
		var_24_bool = false;
		return 4;
	}
	float var_31_float; object var_32_object;
	func_967(var_31_float, var_32_object);
	if(var_31_float > 90000.0) {
		var_24_bool = false;
		return 4;
	}
	bool var_28_bool;
	@CanSee(var_28_bool, var_32_object);
	var_28_bool = var_24_bool;
}
EMIT "Stack[-2] = 0";


void func_1270(void)
{
	bool var_19_bool;
	func_1340(var_19_bool);
	if(var_19_bool != 0)
		@lshStopSpeech();
}


void func_1144(bool var_122_bool, object var_123_object)
{
	string var_129_string; bool var_131_bool; int var_132_int; string var_133_string;
	var_129_string = "c";
	int var_130_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_123_object->HasProperty((var_129_string + (var_130_int + 1)), var_131_bool);
			if(!var_131_bool) { //@nz
			} else {
				var_130_int += 1;
			}
		}
		if(!var_130_int) { //@nz
			var_122_bool = false;
			return 10;
		}
		var_132_int = 0;
		if(var_130_int > 1)
			@irand(var_132_int, var_130_int);
		var_123_object->GetProperty((var_129_string + (var_132_int + 1)), var_133_string);
		bool var_145_bool; string var_146_string;
		var_133_string = var_146_string;
		func_1255(var_145_bool, var_146_string);
		var_145_bool = var_122_bool;
		return 10;

	}
}


void func_249(object var_0_object, int var_269_int, object var_270_object)
{
	var_0_object = var_270_object;
	bool var_280_bool; object var_281_object;
	var_270_object = var_281_object;
	func_999(var_280_bool, var_281_object, 70.0);
	if(!var_280_bool) { //@nz
		var_269_int = -2;
		return 8;
	}
	object var_276_object;
	@CreateDialog(var_276_object);
	int var_284_int;
	func_1334(var_284_int);
	var_276_object->SetNPCName(var_284_int);
	int var_285_int;
	func_1332(var_285_int);
	var_276_object->SetNPCDescription(var_285_int);
	string var_286_string;
	func_1336(var_286_string);
	var_276_object->SetPhoto(var_286_string);
	string var_287_string;
	func_1338(var_287_string);
	var_276_object->SetPhoto2(var_287_string);
	int var_288_int;
	func_1342(var_288_int);
	var_276_object->SetPlayerName(var_288_int);
	bool var_277_bool;
	@IsOverrideActive(var_277_bool);
	if(var_277_bool != 0) {
		var_269_int = -2;
		return 8;
	}
	@DoDialog(var_276_object);
	bool var_290_bool; object var_291_object;
	object var_292_object;
	func_1277(var_292_object);
	var_292_object = var_291_object;
	func_1086(var_290_bool, var_291_object);
	object var_293_object; object var_294_object;
	var_270_object = var_293_object;
	var_276_object = var_294_object;
	TaskCall(3);
	func_330(var_295_object, var_296_object, var_297_string, var_298_bool, var_293_object, var_294_object);
	TaskReturn();
	bool var_279_bool;
	var_276_object->IsDialogEnd(var_279_bool);
	
	for(;;) {
		var_326_bool = !var_279_bool; //@nz
		if(var_326_bool == 0) goto Label_319;
		@sync();
		var_276_object->IsDialogEnd(var_279_bool);
	}
	
Label_319:
	object var_327_object;
	var_270_object = var_327_object;
	func_1068();
	@StopDialog(var_276_object);
	var_276_object->GetReturnValue(-1);
	int var_278_int = var_269_int;
}
EMIT "Stack[-4] = 0";


void func_891(void)
{
	bool var_28_bool; int var_29_int; int var_30_int; bool var_31_bool;
	@WaitForAnimEnd();
	bool var_32_bool;
	func_994(var_32_bool);
	if(!var_32_bool) //@nz
		return 12;
	int var_34_int;
	func_1315(var_34_int);
	int var_26_int;
	var_34_int = var_26_int;
	int var_27_int = 0;
	
	for(;;) {
		bool var_47_bool = false;
		if(var_27_int < 5) {
			bool var_50_bool;
			func_994(var_50_bool);
			if(var_50_bool != 0)
				var_47_bool = true;
		}
		if(var_47_bool != 0) {
			if(!var_26_int) { //@nz
				@Sleep(3, var_28_bool);
				if(!var_28_bool) { //@nz
				} else {
			} else {
			@irand(var_29_int, var_26_int);
			@irand(var_30_int, 5);
			if(var_30_int != 0)
				var_29_int = 0;
			string var_61_string; int var_62_int;
			var_29_int = var_62_int;
			func_1308(var_61_string, var_62_int);
			@PlayAnimation("all", var_61_string);
			@WaitForAnimEnd(var_31_bool);
			var_63_bool = !var_31_bool; //@nz
			if(var_63_bool == 0) goto Label_946;
			goto Label_957;
			}
				Label_946:
					bool var_54_bool;
					func_960(var_54_bool);
					var_55_bool = !var_54_bool; //@nz
					if(var_55_bool == 0) goto Label_952;
			}
		}
	Label_957:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_952:
		@ResetAAS();
		var_27_int += 1;
	}
	
}


void func_508(object var_0_object, int var_328_int, object var_329_object)
{
	var_0_object = var_329_object;
	bool var_339_bool; object var_340_object;
	var_329_object = var_340_object;
	func_999(var_339_bool, var_340_object, 70.0);
	if(!var_339_bool) { //@nz
		var_328_int = -2;
		return 8;
	}
	object var_335_object;
	@CreateDialog(var_335_object);
	int var_343_int;
	func_1334(var_343_int);
	var_335_object->SetNPCName(var_343_int);
	int var_344_int;
	func_1332(var_344_int);
	var_335_object->SetNPCDescription(var_344_int);
	string var_345_string;
	func_1336(var_345_string);
	var_335_object->SetPhoto(var_345_string);
	string var_346_string;
	func_1338(var_346_string);
	var_335_object->SetPhoto2(var_346_string);
	int var_347_int;
	func_1342(var_347_int);
	var_335_object->SetPlayerName(var_347_int);
	bool var_336_bool;
	@IsOverrideActive(var_336_bool);
	if(var_336_bool != 0) {
		var_328_int = -2;
		return 8;
	}
	@DoDialog(var_335_object);
	bool var_349_bool; object var_350_object;
	object var_351_object;
	func_1277(var_351_object);
	var_351_object = var_350_object;
	func_1086(var_349_bool, var_350_object);
	object var_352_object; object var_353_object;
	var_329_object = var_352_object;
	var_335_object = var_353_object;
	TaskCall(5);
	func_589(var_354_object, var_355_object, var_356_string, var_357_bool, var_352_object, var_353_object);
	TaskReturn();
	bool var_338_bool;
	var_335_object->IsDialogEnd(var_338_bool);
	
	for(;;) {
		var_382_bool = !var_338_bool; //@nz
		if(var_382_bool == 0) goto Label_578;
		@sync();
		var_335_object->IsDialogEnd(var_338_bool);
	}
	
Label_578:
	object var_383_object;
	var_329_object = var_383_object;
	func_1068();
	@StopDialog(var_335_object);
	var_335_object->GetReturnValue(-1);
	int var_337_int = var_328_int;
}
EMIT "Stack[-4] = 0";


void func_1277(object var_113_object)
{
	object var_115_object;
	@self(var_115_object);
	var_115_object = var_113_object;
}
EMIT "Stack[-1] = 0";


