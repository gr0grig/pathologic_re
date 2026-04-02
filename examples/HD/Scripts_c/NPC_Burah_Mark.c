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
			func_1265();
			if(var_16_bool == 21972) {
				func_139(var_17_cvector, "Declaim");
				var_0_object->SetMessage(520759); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520760, 21974, 21973); //@t
				var_0_object->AddReply(520766, 21976, 21979); //@t
				return 0;
			}
			if(var_16_bool == 21974) {
				func_139(var_17_cvector, "Declaim");
				var_0_object->SetMessage(520761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520762, 21976, 21975); //@t
				return 0;
			}
			if(var_16_bool == 21976) {
				func_139(var_17_cvector, "Declaim");
				var_0_object->SetMessage(520763); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520764, -1, 21977); //@t
				var_0_object->AddReply(520765, -1, 21978); //@t
				return 0;
			}
			var_3_string = true;
			bool var_63_bool;
			func_1335(var_63_bool);
			if(var_63_bool != 0)
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
			func_1265();
			if(var_16_bool == 36906) {
				func_388(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_16_bool == 36953) {
				func_388(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_16_bool == 36957) {
				func_388(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_69_bool;
			func_1335(var_69_bool);
			if(var_69_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x19b";
	
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
			func_1265();
			if(var_16_int == 42563) {
				func_642(var_17_cvector, "Neutral");
				var_0_object->SetMessage(540554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540555, -1, 42564); //@t
				var_0_object->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_string = true;
			bool var_46_bool;
			func_1335(var_46_bool);
			if(var_46_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x299";
	
	}

}


maintask task_6
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		func_710(var_15_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, int var_16_int)
	{
		if(var_16_int == 10) {
			func_775();
			bool var_20_bool = false;
			bool var_21_bool;
			func_989(var_21_bool);
			if(var_21_bool != 0) {
				bool var_24_bool;
				func_744(var_24_bool);
				if(var_24_bool != 0)
					var_20_bool = true;
			}
			if(var_20_bool != 0) {
				bool var_41_bool;
				func_724(var_41_bool);
				if(var_41_bool != 0) {
					bool var_60_bool; object var_61_object;
					object var_62_object;
					func_1272(var_62_object);
					var_62_object = var_61_object;
					func_1139(var_60_bool, var_61_object);
				}
			} else {
				func_739(var_16_int);
				func_766();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		func_957();
		func_775();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		@StopGroup0();
		func_775();
		func_1219("Neutral");
		func_766();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_16_bool != 0)
			func_766();
		else
			func_1219("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, object var_16_object)
	{
		bool var_18_bool;
		@IsOverrideActive(var_18_bool);
		if(!var_18_bool) { //@nz
			disable OnUse;
			func_957();
			bool var_20_bool; object var_21_object;
			var_16_object = var_21_object;
			func_980(var_20_bool, var_21_object);
			enable OnUse;
			object var_34_object;
			var_16_object = var_34_object;
			func_1354(var_34_object);
			func_1219("Neutral");
			func_775();
			func_766();
		}
	}

}


void func_0(object var_0_object, int var_41_int, object var_42_object)
{
	var_0_object = var_42_object;
	bool var_52_bool; object var_53_object;
	var_42_object = var_53_object;
	func_994(var_52_bool, var_53_object, 70.0);
	if(!var_52_bool) { //@nz
		var_41_int = -2;
		return 8;
	}
	object var_48_object;
	@CreateDialog(var_48_object);
	int var_100_int;
	func_1329(var_100_int);
	var_48_object->SetNPCName(var_100_int);
	int var_101_int;
	func_1327(var_101_int);
	var_48_object->SetNPCDescription(var_101_int);
	string var_102_string;
	func_1331(var_102_string);
	var_48_object->SetPhoto(var_102_string);
	string var_103_string;
	func_1333(var_103_string);
	var_48_object->SetPhoto2(var_103_string);
	int var_104_int;
	func_1337(var_104_int);
	var_48_object->SetPlayerName(var_104_int);
	bool var_49_bool;
	@IsOverrideActive(var_49_bool);
	if(var_49_bool != 0) {
		var_41_int = -2;
		return 8;
	}
	@DoDialog(var_48_object);
	bool var_113_bool; object var_114_object;
	object var_115_object;
	func_1272(var_115_object);
	var_115_object = var_114_object;
	func_1081(var_113_bool, var_114_object);
	object var_208_object; object var_209_object;
	var_42_object = var_208_object;
	var_48_object = var_209_object;
	TaskCall(1);
	func_81(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object);
	TaskReturn();
	bool var_51_bool;
	var_48_object->IsDialogEnd(var_51_bool);
	
	for(;;) {
		var_257_bool = !var_51_bool; //@nz
		if(var_257_bool == 0) goto Label_70;
		@sync();
		var_48_object->IsDialogEnd(var_51_bool);
	}
	
Label_70:
	object var_258_object;
	var_42_object = var_258_object;
	func_1063();
	@StopDialog(var_48_object);
	var_48_object->GetReturnValue(-1);
	int var_50_int = var_41_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_642(object var_2_object, string var_366_string)
{
	bool var_367_bool;
	func_1335(var_367_bool);
	if(!var_367_bool) //@nz
		return 0;
	if(var_366_string == var_2_object)
		return 0;
	string var_370_string; bool var_371_bool;
	var_366_string = var_370_string;
	if(var_366_string == "")
		var_371_bool = false;
	else
		var_371_bool = true;
	func_1235(var_370_string, var_371_bool);
	var_2_object = var_366_string;
	
}


// @pe
void func_388(object var_2_object, string var_305_string)
{
	bool var_306_bool;
	func_1335(var_306_bool);
	if(!var_306_bool) //@nz
		return 0;
	if(var_305_string == var_2_object)
		return 0;
	string var_309_string; bool var_310_bool;
	var_305_string = var_309_string;
	if(var_305_string == "")
		var_310_bool = false;
	else
		var_310_bool = true;
	func_1235(var_309_string, var_310_bool);
	var_2_object = var_305_string;
	
}


void func_775(void)
{
	@KillTimer(10);
}


void func_1288(int var_168_int)
{
	float var_170_float;
	@GetGameTime(var_170_float);
	var_168_int = 1 + (var_170_float / 24);
}


// @pe
void func_139(object var_2_object, string var_215_string)
{
	bool var_216_bool;
	func_1335(var_216_bool);
	if(!var_216_bool) //@nz
		return 0;
	if(var_215_string == var_2_object)
		return 0;
	string var_219_string; bool var_220_bool;
	var_215_string = var_219_string;
	if(var_215_string == "")
		var_220_bool = false;
	else
		var_220_bool = true;
	func_1235(var_219_string, var_220_bool);
	var_2_object = var_215_string;
	
}


void func_766(void)
{
	float var_394_float;
	@rand(var_394_float, 8, 16);
	@SetTimer(10, var_394_float);
}


// @pe
void func_1297(bool var_270_bool, int var_271_int)
{
	int var_272_int;
	func_1288(var_272_int);
	var_270_bool = var_272_int == var_271_int;
}


void func_1303(string var_40_string, int var_41_int)
{
	string var_43_string = "idle";
	if(var_41_int != 0)
		var_43_string += var_41_int;
	var_43_string = var_40_string;
}


void func_1176(bool var_155_bool, object var_156_object)
{
	bool var_164_bool; int var_165_int; string var_166_string;
	int var_168_int;
	func_1288(var_168_int);
	string var_162_string = ("d" + var_168_int) + "m";
	int var_163_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_156_object->HasProperty((var_162_string + (var_163_int + 1)), var_164_bool);
			if(!var_164_bool) { //@nz
			} else {
				var_163_int += 1;
			}
		}
		if(!var_163_int) { //@nz
			var_155_bool = false;
			return 10;
		}
		var_165_int = 0;
		if(var_163_int > 1)
			@irand(var_165_int, var_163_int);
		var_156_object->GetProperty((var_162_string + (var_165_int + 1)), var_166_string);
		bool var_187_bool; string var_188_string;
		var_166_string = var_188_string;
		func_1250(var_187_bool, var_188_string);
		var_187_bool = var_155_bool;
		return 10;

	}
}


void func_1310(int var_34_int)
{
	int var_37_int; bool var_38_bool;
	var_37_int = 0;
	
	for(;;) {
		string var_40_string; int var_41_int;
		var_37_int = var_41_int;
		func_1303(var_40_string, var_41_int);
		@HasAnimation(var_38_bool, "all", var_40_string);
		if(!var_38_bool) //@nz
			break;
		var_37_int += 1;
	}
	var_37_int = var_34_int;
}


void func_1063(void)
{
	bool var_260_bool;
	@CameraSwitchToNormal(true);
	bool var_262_bool;
	func_1335(var_262_bool);
	if(var_262_bool != 0) {
	} else {
		@HasAnimationTrack(var_260_bool, "head");
		if(var_260_bool == 0) goto Label_1080;
		@UnlookAsync("head");
	}
Label_1080:
	
}


void func_1327(int var_101_int)
{
	var_101_int = 515544;
}


void func_1329(int var_100_int)
{
	var_100_int = 502869;
}


void func_1331(string var_102_string)
{
	var_102_string = "ui/NPC_Mark.png";
}


void func_1333(string var_103_string)
{
	var_103_string = "ui/NPC_Mark_b.png";
}


void func_1335(bool var_95_bool)
{
	var_95_bool = true;
}


void func_1337(int var_104_int)
{
	int var_106_int;
	@GetVariable("branch", var_106_int);
	if(var_106_int == 0) {
		var_104_int = 1;
		return 2;
	EMIT "GOTO 0x548";
	}
	if(var_106_int == 1) {
		var_104_int = 2;
		return 2;
	}
	var_104_int = 3;
}


void func_1081(bool var_113_bool, object var_114_object)
{
	int var_120_int; int var_121_int;
	@GetVariable("voice_common", var_120_int);
	if(var_120_int != 0) {
		bool var_124_bool; object var_125_object;
		var_114_object = var_125_object;
		func_1139(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_155_bool; object var_156_object;
			var_114_object = var_156_object;
			func_1176(var_155_bool, var_156_object);
			if(!var_155_bool) { //@nz
				var_113_bool = false;
				return 4;
			}
		}
		@irand(var_121_int, 2);
		if(var_121_int != 0)
			@SetVariable("voice_common", ((var_120_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_200_bool; object var_201_object;
		var_114_object = var_201_object;
		func_1176(var_200_bool, var_201_object);
		if(!var_200_bool) { //@nz
			bool var_203_bool; object var_204_object;
			var_114_object = var_204_object;
			func_1139(var_203_bool, var_204_object);
			if(!var_203_bool) { //@nz
				var_113_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1137;
	
Label_1137:
	var_113_bool = true;
	
}


void func_955(bool var_54_bool)
{
	var_54_bool = true;
}


void func_957(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_962(float var_31_float, object var_32_object)
{
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	var_32_object->GetPosition(var_37_cvector);
	var_31_float = (var_37_cvector - var_36_cvector) | (var_37_cvector - var_36_cvector);
}


void func_1219(string var_241_string)
{
	bool var_245_bool; float var_246_float; float var_247_float;
	@lshHasAnimation(var_245_bool, var_241_string);
	if(var_245_bool != 0) {
		@lshGetAnimTimes(var_241_string, var_246_float, var_247_float);
		@lshPlayAnimation(var_246_float, var_247_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_241_string);
	}
	
}


// @pe
void func_325(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_298_object, object var_299_object)
{
	var_0_object = var_299_object;
	var_1_object = var_298_object;
	var_3_string = false;
	if(1 != 0) {
		func_388(var_299_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_358;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x149";
	}
Label_358:
	bool var_323_bool;
	func_1335(var_323_bool);
	if(var_323_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1219(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_387;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_387:
		return 0;

	}
	
}


void func_710(object var_0_object)
{
	bool var_16_bool;
	func_989(var_16_bool);
	if(!var_16_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_886();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_584(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_359_object, object var_360_object)
{
	var_0_object = var_360_object;
	var_1_object = var_359_object;
	var_3_string = false;
	if(1 != 0) {
		func_642(var_360_object, "Neutral");
		var_0_object->SetMessage(540554); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540555, -1, 42564); //@t
		var_0_object->AddReply(540794, -1, 42843); //@t
		goto Label_612;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x24c";
	}
Label_612:
	bool var_381_bool;
	func_1335(var_381_bool);
	if(var_381_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1219(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_641;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_641:
		return 0;

	}
	
}


void func_1354(object var_34_object)
{
	int var_37_int;
	@GetVariable("mt_mark", var_37_int);
	if(!var_37_int) { //@nz
		int var_41_int; object var_42_object;
		var_34_object = var_42_object;
		TaskCall(0);
		func_0(var_43_object, var_41_int, var_42_object);
		TaskReturn();
		@SetVariable("mt_mark", 1);
	}
	int var_38_int;
	@GetVariable("d12_mark", var_38_int);
	bool var_269_bool = false;
	bool var_270_bool;
	func_1297(var_270_bool, 12);
	if(var_270_bool != 0) {
		if(!var_38_int) //@nz
			var_269_bool = true;
	}
	if(var_269_bool != 0) {
		int var_274_int; object var_275_object;
		var_34_object = var_275_object;
		TaskCall(2);
		func_244(var_276_object, var_274_int, var_275_object);
		TaskReturn();
		@SetVariable("d12_mark", 1);
		return 4;
	}
	int var_335_int; object var_336_object;
	var_34_object = var_336_object;
	TaskCall(4);
	func_503(var_337_object, var_335_int, var_336_object);
	TaskReturn();
}


void func_970(bool var_24_bool, cvector var_25_cvector)
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
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_208_object, object var_209_object)
{
	var_0_object = var_209_object;
	var_1_object = var_208_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_209_object, "Declaim");
		var_0_object->SetMessage(520759); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(520760, 21974, 21973); //@t
		var_0_object->AddReply(520766, 21976, 21979); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_239_bool;
	func_1335(var_239_bool);
	if(var_239_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1219(var_2_object);
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


void func_1235(string var_219_string, bool var_220_bool)
{
	bool var_226_bool; float var_227_float; float var_228_float;
	@lshHasAnimation(var_226_bool, var_219_string);
	if(var_226_bool != 0) {
		@lshGetAnimTimes(var_219_string, var_227_float, var_228_float);
		@lshPlayAnimation(var_227_float, var_228_float, var_220_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_219_string);
	}
	
}


void func_980(bool var_20_bool, object var_21_object)
{
	cvector var_23_cvector;
	var_21_object->GetPosition(var_23_cvector);
	bool var_24_bool; cvector var_25_cvector;
	var_23_cvector = var_25_cvector;
	func_970(var_24_bool, var_25_cvector);
	var_24_bool = var_20_bool;
}


void func_724(bool var_41_bool)
{
	object var_43_object;
	@FindActor(var_43_object, "player");
	if(!var_43_object) //@nz
		var_41_bool = false;
	bool var_46_bool; object var_47_object;
	var_43_object = var_47_object;
	func_980(var_46_bool, var_47_object);
	var_46_bool = var_41_bool;
}
EMIT "Stack[-1] = 0";


void func_989(bool var_16_bool)
{
	bool var_18_bool;
	@IsLoaded(var_18_bool);
	var_18_bool = var_16_bool;
}


void func_994(bool var_52_bool, object var_53_object, float var_54_float)
{
	cvector var_65_cvector; bool var_72_bool;
	var_53_object->GetPosition(var_65_cvector);
	float var_64_float;
	var_53_object->GetEyesHeight(var_64_float);
	var_73_float = GetByIndex(var_65_cvector, 1);
	SetByIndex(var_65_cvector, 1) = (var_73_float + var_64_float);
	cvector var_66_cvector;
	@GetPosition(var_66_cvector);
	@GetEyesHeight(var_64_float);
	var_74_float = GetByIndex(var_66_cvector, 1);
	SetByIndex(var_66_cvector, 1) = (var_74_float + var_64_float);
	cvector var_67_cvector = var_65_cvector - var_66_cvector;
	var_75_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (float)0;
	var_77_float = sqrt(var_67_cvector | var_67_cvector);
	var_67_cvector /= var_77_float;
	cvector var_68_cvector = -var_67_cvector;
	cvector var_79_cvector;
	func_1278(var_79_cvector, (var_68_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_69_cvector = ((var_67_cvector * var_54_float) + (var_79_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_71_bool;
	@IsOverrideActive(var_71_bool);
	if(var_71_bool != 0)
		var_52_bool = false;
	@StopWorld();
	@CameraTransit((var_66_cvector + var_69_cvector), var_68_cvector, true);
	var_93_float = GetByIndex(var_69_cvector, 0);
	var_94_float = GetByIndex(var_69_cvector, 2);
	@Rotate(var_93_float, var_94_float);
	bool var_95_bool;
	func_1335(var_95_bool);
	if(var_95_bool != 0) {
	} else {
		@HasAnimationTrack(var_72_bool, "head");
		if(var_72_bool == 0) goto Label_1057;
		@LookAsyncCamera("head");
	}
Label_1057:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_52_bool = true;
	
}


void func_739(object var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0);
	var_94_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_93_float, var_94_float);
}


void func_1250(bool var_147_bool, string var_148_string)
{
	bool var_150_bool;
	bool var_151_bool;
	func_1335(var_151_bool);
	if(var_151_bool != 0) {
		@lshHasSpeech(var_150_bool, var_148_string);
		if(var_150_bool != 0) {
			@lshPlaySpeech(var_148_string);
			var_147_bool = true;
		}
	}
	var_147_bool = false;
}


void func_744(bool var_24_bool)
{
	object var_27_object;
	@FindActor(var_27_object, "player");
	if(!var_27_object) { //@nz
		var_24_bool = false;
		return 4;
	}
	float var_31_float; object var_32_object;
	func_962(var_31_float, var_32_object);
	if(var_31_float > 90000.0) {
		var_24_bool = false;
		return 4;
	}
	bool var_28_bool;
	@CanSee(var_28_bool, var_32_object);
	var_28_bool = var_24_bool;
}
EMIT "Stack[-2] = 0";


void func_1265(void)
{
	bool var_19_bool;
	func_1335(var_19_bool);
	if(var_19_bool != 0)
		@lshStopSpeech();
}


void func_1139(bool var_124_bool, object var_125_object)
{
	string var_131_string; bool var_133_bool; int var_134_int; string var_135_string;
	var_131_string = "c";
	int var_132_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_125_object->HasProperty((var_131_string + (var_132_int + 1)), var_133_bool);
			if(!var_133_bool) { //@nz
			} else {
				var_132_int += 1;
			}
		}
		if(!var_132_int) { //@nz
			var_124_bool = false;
			return 10;
		}
		var_134_int = 0;
		if(var_132_int > 1)
			@irand(var_134_int, var_132_int);
		var_125_object->GetProperty((var_131_string + (var_134_int + 1)), var_135_string);
		bool var_147_bool; string var_148_string;
		var_135_string = var_148_string;
		func_1250(var_147_bool, var_148_string);
		var_147_bool = var_124_bool;
		return 10;

	}
}


void func_244(object var_0_object, int var_274_int, object var_275_object)
{
	var_0_object = var_275_object;
	bool var_285_bool; object var_286_object;
	var_275_object = var_286_object;
	func_994(var_285_bool, var_286_object, 70.0);
	if(!var_285_bool) { //@nz
		var_274_int = -2;
		return 8;
	}
	object var_281_object;
	@CreateDialog(var_281_object);
	int var_289_int;
	func_1329(var_289_int);
	var_281_object->SetNPCName(var_289_int);
	int var_290_int;
	func_1327(var_290_int);
	var_281_object->SetNPCDescription(var_290_int);
	string var_291_string;
	func_1331(var_291_string);
	var_281_object->SetPhoto(var_291_string);
	string var_292_string;
	func_1333(var_292_string);
	var_281_object->SetPhoto2(var_292_string);
	int var_293_int;
	func_1337(var_293_int);
	var_281_object->SetPlayerName(var_293_int);
	bool var_282_bool;
	@IsOverrideActive(var_282_bool);
	if(var_282_bool != 0) {
		var_274_int = -2;
		return 8;
	}
	@DoDialog(var_281_object);
	bool var_295_bool; object var_296_object;
	object var_297_object;
	func_1272(var_297_object);
	var_297_object = var_296_object;
	func_1081(var_295_bool, var_296_object);
	object var_298_object; object var_299_object;
	var_275_object = var_298_object;
	var_281_object = var_299_object;
	TaskCall(3);
	func_325(var_300_object, var_301_object, var_302_string, var_303_bool, var_298_object, var_299_object);
	TaskReturn();
	bool var_284_bool;
	var_281_object->IsDialogEnd(var_284_bool);
	
	for(;;) {
		var_331_bool = !var_284_bool; //@nz
		if(var_331_bool == 0) goto Label_314;
		@sync();
		var_281_object->IsDialogEnd(var_284_bool);
	}
	
Label_314:
	object var_332_object;
	var_275_object = var_332_object;
	func_1063();
	@StopDialog(var_281_object);
	var_281_object->GetReturnValue(-1);
	int var_283_int = var_274_int;
}
EMIT "Stack[-4] = 0";


void func_886(void)
{
	bool var_28_bool; int var_29_int; int var_30_int; bool var_31_bool;
	@WaitForAnimEnd();
	bool var_32_bool;
	func_989(var_32_bool);
	if(!var_32_bool) //@nz
		return 12;
	int var_34_int;
	func_1310(var_34_int);
	int var_26_int;
	var_34_int = var_26_int;
	int var_27_int = 0;
	
	for(;;) {
		bool var_47_bool = false;
		if(var_27_int < 5) {
			bool var_50_bool;
			func_989(var_50_bool);
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
			func_1303(var_61_string, var_62_int);
			@PlayAnimation("all", var_61_string);
			@WaitForAnimEnd(var_31_bool);
			var_63_bool = !var_31_bool; //@nz
			if(var_63_bool == 0) goto Label_941;
			goto Label_952;
			}
				Label_941:
					bool var_54_bool;
					func_955(var_54_bool);
					var_55_bool = !var_54_bool; //@nz
					if(var_55_bool == 0) goto Label_947;
			}
		}
	Label_952:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_947:
		@ResetAAS();
		var_27_int += 1;
	}
	
}


void func_503(object var_0_object, int var_335_int, object var_336_object)
{
	var_0_object = var_336_object;
	bool var_346_bool; object var_347_object;
	var_336_object = var_347_object;
	func_994(var_346_bool, var_347_object, 70.0);
	if(!var_346_bool) { //@nz
		var_335_int = -2;
		return 8;
	}
	object var_342_object;
	@CreateDialog(var_342_object);
	int var_350_int;
	func_1329(var_350_int);
	var_342_object->SetNPCName(var_350_int);
	int var_351_int;
	func_1327(var_351_int);
	var_342_object->SetNPCDescription(var_351_int);
	string var_352_string;
	func_1331(var_352_string);
	var_342_object->SetPhoto(var_352_string);
	string var_353_string;
	func_1333(var_353_string);
	var_342_object->SetPhoto2(var_353_string);
	int var_354_int;
	func_1337(var_354_int);
	var_342_object->SetPlayerName(var_354_int);
	bool var_343_bool;
	@IsOverrideActive(var_343_bool);
	if(var_343_bool != 0) {
		var_335_int = -2;
		return 8;
	}
	@DoDialog(var_342_object);
	bool var_356_bool; object var_357_object;
	object var_358_object;
	func_1272(var_358_object);
	var_358_object = var_357_object;
	func_1081(var_356_bool, var_357_object);
	object var_359_object; object var_360_object;
	var_336_object = var_359_object;
	var_342_object = var_360_object;
	TaskCall(5);
	func_584(var_361_object, var_362_object, var_363_string, var_364_bool, var_359_object, var_360_object);
	TaskReturn();
	bool var_345_bool;
	var_342_object->IsDialogEnd(var_345_bool);
	
	for(;;) {
		var_389_bool = !var_345_bool; //@nz
		if(var_389_bool == 0) goto Label_573;
		@sync();
		var_342_object->IsDialogEnd(var_345_bool);
	}
	
Label_573:
	object var_390_object;
	var_336_object = var_390_object;
	func_1063();
	@StopDialog(var_342_object);
	var_342_object->GetReturnValue(-1);
	int var_344_int = var_335_int;
}
EMIT "Stack[-4] = 0";


void func_1272(object var_115_object)
{
	object var_117_object;
	@self(var_117_object);
	var_117_object = var_115_object;
}
EMIT "Stack[-1] = 0";


void func_1278(cvector var_79_cvector, cvector var_80_cvector)
{
	float var_83_float = sqrt(var_80_cvector | var_80_cvector);
	if(var_83_float < 0.000001)
		var_79_cvector = [0.0, 0.0, 0.0];
	var_79_cvector = var_80_cvector / var_83_float;
}


