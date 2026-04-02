// @GLOBALS: 0:object:,1:bool:,2:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, cvector var_17_cvector)
	{
		if(1 != 0) {
			func_1268();
			if(var_16_bool == 19145) {
				func_139(var_17_cvector, "Neutral");
				var_0_object->SetMessage(518012); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518013, 32562, 19146); //@t
				var_0_object->AddReply(531249, 32565, 32564); //@t
				return 0;
			}
			if(var_16_bool == 32565) {
				func_139(var_17_cvector, "Fear");
				var_0_object->SetMessage(531250); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531251, 32562, 32566); //@t
				return 0;
			}
			if(var_16_bool == 32562) {
				func_139(var_17_cvector, "Independence");
				var_0_object->SetMessage(531247); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531248, -1, 32563); //@t
				var_0_object->AddReply(531252, -1, 32568); //@t
				return 0;
			}
			var_3_string = true;
			bool var_63_bool;
			func_1338(var_63_bool);
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
			func_1268();
			if(var_16_bool == 36971) {
				func_388(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_16_bool == 36973) {
				func_388(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_16_bool == 36975) {
				func_388(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_69_bool;
			func_1338(var_69_bool);
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
			func_1268();
			if(var_16_int == 42560) {
				func_642(var_17_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_46_bool;
			func_1338(var_46_bool);
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		var_16_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_713(var_15_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, int var_16_int)
	{
		if(var_16_int == 10) {
			func_778();
			bool var_20_bool = false;
			bool var_21_bool;
			func_992(var_21_bool);
			if(var_21_bool != 0) {
				bool var_24_bool;
				func_747(var_24_bool);
				if(var_24_bool != 0)
					var_20_bool = true;
			}
			if(var_20_bool != 0) {
				bool var_41_bool;
				func_727(var_41_bool);
				if(var_41_bool != 0) {
					bool var_60_bool; object var_61_object;
					object var_62_object;
					func_1275(var_62_object);
					var_62_object = var_61_object;
					func_1142(var_60_bool, var_61_object);
				}
			} else {
				func_742(var_16_int);
				func_769();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		func_960();
		func_778();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		@StopGroup0();
		func_778();
		func_1222("Neutral");
		func_769();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_16_bool != 0)
			func_769();
		else
			func_1222("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, object var_16_object)
	{
		bool var_18_bool;
		@IsOverrideActive(var_18_bool);
		if(!var_18_bool) { //@nz
			disable OnUse;
			func_960();
			bool var_20_bool; object var_21_object;
			var_16_object = var_21_object;
			func_983(var_20_bool, var_21_object);
			enable OnUse;
			object var_34_object;
			var_16_object = var_34_object;
			func_1357(var_34_object);
			func_1222("Neutral");
			func_778();
			func_769();
		}
	}

}


void func_0(object var_0_object, int var_37_int, object var_38_object)
{
	var_0_object = var_38_object;
	bool var_48_bool; object var_49_object;
	var_38_object = var_49_object;
	func_997(var_48_bool, var_49_object, 70.0);
	if(!var_48_bool) { //@nz
		var_37_int = -2;
		return 8;
	}
	object var_44_object;
	@CreateDialog(var_44_object);
	int var_96_int;
	func_1332(var_96_int);
	var_44_object->SetNPCName(var_96_int);
	int var_97_int;
	func_1330(var_97_int);
	var_44_object->SetNPCDescription(var_97_int);
	string var_98_string;
	func_1334(var_98_string);
	var_44_object->SetPhoto(var_98_string);
	string var_99_string;
	func_1336(var_99_string);
	var_44_object->SetPhoto2(var_99_string);
	int var_100_int;
	func_1340(var_100_int);
	var_44_object->SetPlayerName(var_100_int);
	bool var_45_bool;
	@IsOverrideActive(var_45_bool);
	if(var_45_bool != 0) {
		var_37_int = -2;
		return 8;
	}
	@DoDialog(var_44_object);
	bool var_109_bool; object var_110_object;
	object var_111_object;
	func_1275(var_111_object);
	var_111_object = var_110_object;
	func_1084(var_109_bool, var_110_object);
	object var_204_object; object var_205_object;
	var_38_object = var_204_object;
	var_44_object = var_205_object;
	TaskCall(1);
	func_81(var_206_object, var_207_object, var_208_string, var_209_bool, var_204_object, var_205_object);
	TaskReturn();
	bool var_47_bool;
	var_44_object->IsDialogEnd(var_47_bool);
	
	for(;;) {
		var_253_bool = !var_47_bool; //@nz
		if(var_253_bool == 0) goto Label_70;
		@sync();
		var_44_object->IsDialogEnd(var_47_bool);
	}
	
Label_70:
	object var_254_object;
	var_38_object = var_254_object;
	func_1066();
	@StopDialog(var_44_object);
	var_44_object->GetReturnValue(-1);
	int var_46_int = var_37_int;
}
EMIT "Stack[-4] = 0";


void func_769(void)
{
	float var_388_float;
	@rand(var_388_float, 8, 16);
	@SetTimer(10, var_388_float);
}


// @pe
void func_642(object var_2_object, string var_360_string)
{
	bool var_361_bool;
	func_1338(var_361_bool);
	if(!var_361_bool) //@nz
		return 0;
	if(var_360_string == var_2_object)
		return 0;
	string var_364_string; bool var_365_bool;
	var_360_string = var_364_string;
	if(var_360_string == "")
		var_365_bool = false;
	else
		var_365_bool = true;
	func_1238(var_364_string, var_365_bool);
	var_2_object = var_360_string;
	
}


void func_1281(cvector var_75_cvector, cvector var_76_cvector)
{
	float var_79_float = sqrt(var_76_cvector | var_76_cvector);
	if(var_79_float < 0.000001)
		var_75_cvector = [0.0, 0.0, 0.0];
	var_75_cvector = var_76_cvector / var_79_float;
}


// @pe
void func_388(object var_2_object, string var_300_string)
{
	bool var_301_bool;
	func_1338(var_301_bool);
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
	func_1238(var_304_string, var_305_bool);
	var_2_object = var_300_string;
	
}


void func_778(void)
{
	@KillTimer(10);
}


// @pe
void func_139(object var_2_object, string var_211_string)
{
	bool var_212_bool;
	func_1338(var_212_bool);
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
	func_1238(var_215_string, var_216_bool);
	var_2_object = var_211_string;
	
}


void func_1291(int var_164_int)
{
	float var_166_float;
	@GetGameTime(var_166_float);
	var_164_int = 1 + (var_166_float / 24);
}


// @pe
void func_1300(bool var_264_bool, int var_265_int)
{
	int var_266_int;
	func_1291(var_266_int);
	var_264_bool = var_266_int == var_265_int;
}


void func_1306(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
}


void func_1179(bool var_151_bool, object var_152_object)
{
	bool var_160_bool; int var_161_int; string var_162_string;
	int var_164_int;
	func_1291(var_164_int);
	string var_158_string = ("d" + var_164_int) + "m";
	int var_159_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_152_object->HasProperty((var_158_string + (var_159_int + 1)), var_160_bool);
			if(!var_160_bool) { //@nz
			} else {
				var_159_int += 1;
			}
		}
		if(!var_159_int) { //@nz
			var_151_bool = false;
			return 10;
		}
		var_161_int = 0;
		if(var_159_int > 1)
			@irand(var_161_int, var_159_int);
		var_152_object->GetProperty((var_158_string + (var_161_int + 1)), var_162_string);
		bool var_183_bool; string var_184_string;
		var_162_string = var_184_string;
		func_1253(var_183_bool, var_184_string);
		var_183_bool = var_151_bool;
		return 10;

	}
}


void func_1313(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_1306(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


void func_1066(void)
{
	bool var_256_bool;
	@CameraSwitchToNormal(true);
	bool var_258_bool;
	func_1338(var_258_bool);
	if(var_258_bool != 0) {
	} else {
		@HasAnimationTrack(var_256_bool, "head");
		if(var_256_bool == 0) goto Label_1083;
		@UnlookAsync("head");
	}
Label_1083:
	
}


void func_1330(int var_97_int)
{
	var_97_int = 515537;
}


void func_1332(int var_96_int)
{
	var_96_int = 502862;
}


void func_1334(string var_98_string)
{
	var_98_string = "ui/NPC_Julia.png";
}


void func_1336(string var_99_string)
{
	var_99_string = "ui/NPC_Julia_b.png";
}


void func_1338(bool var_91_bool)
{
	var_91_bool = true;
}


void func_1084(bool var_109_bool, object var_110_object)
{
	int var_116_int; int var_117_int;
	@GetVariable("voice_common", var_116_int);
	if(var_116_int != 0) {
		bool var_120_bool; object var_121_object;
		var_110_object = var_121_object;
		func_1142(var_120_bool, var_121_object);
		if(!var_120_bool) { //@nz
			bool var_151_bool; object var_152_object;
			var_110_object = var_152_object;
			func_1179(var_151_bool, var_152_object);
			if(!var_151_bool) { //@nz
				var_109_bool = false;
				return 4;
			}
		}
		@irand(var_117_int, 2);
		if(var_117_int != 0)
			@SetVariable("voice_common", ((var_116_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_196_bool; object var_197_object;
		var_110_object = var_197_object;
		func_1179(var_196_bool, var_197_object);
		if(!var_196_bool) { //@nz
			bool var_199_bool; object var_200_object;
			var_110_object = var_200_object;
			func_1142(var_199_bool, var_200_object);
			if(!var_199_bool) { //@nz
				var_109_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1140;
	
Label_1140:
	var_109_bool = true;
	
}


void func_1340(int var_100_int)
{
	int var_102_int;
	@GetVariable("branch", var_102_int);
	if(var_102_int == 0) {
		var_100_int = 1;
		return 2;
	EMIT "GOTO 0x54b";
	}
	if(var_102_int == 1) {
		var_100_int = 2;
		return 2;
	}
	var_100_int = 3;
}


void func_958(bool var_55_bool)
{
	var_55_bool = true;
}


void func_960(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_325(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_293_object, object var_294_object)
{
	var_0_object = var_294_object;
	var_1_object = var_293_object;
	var_3_string = false;
	if(1 != 0) {
		func_388(var_294_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_358;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x149";
	}
Label_358:
	bool var_318_bool;
	func_1338(var_318_bool);
	if(var_318_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1222(var_2_object);
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


void func_1222(string var_237_string)
{
	bool var_241_bool; float var_242_float; float var_243_float;
	@lshHasAnimation(var_241_bool, var_237_string);
	if(var_241_bool != 0) {
		@lshGetAnimTimes(var_237_string, var_242_float, var_243_float);
		@lshPlayAnimation(var_242_float, var_243_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_237_string);
	}
	
}


void func_965(float var_31_float, object var_32_object)
{
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	var_32_object->GetPosition(var_37_cvector);
	var_31_float = (var_37_cvector - var_36_cvector) | (var_37_cvector - var_36_cvector);
}


// @pe
void func_584(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_353_object, object var_354_object)
{
	var_0_object = var_354_object;
	var_1_object = var_353_object;
	var_3_string = false;
	if(1 != 0) {
		func_642(var_354_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_612;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x24c";
	}
Label_612:
	bool var_375_bool;
	func_1338(var_375_bool);
	if(var_375_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1222(var_2_object);
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


void func_713(object var_0_object)
{
	bool var_17_bool;
	func_992(var_17_bool);
	if(!var_17_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_889();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1357(object var_34_object)
{
	var_35_bool = GlobalVars[1];
	if(!var_35_bool) { //@nz
		int var_37_int; object var_38_object;
		var_34_object = var_38_object;
		TaskCall(0);
		func_0(var_39_object, var_37_int, var_38_object);
		TaskReturn();
		var_262_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_263_bool = false;
	bool var_264_bool;
	func_1300(var_264_bool, 12);
	if(var_264_bool != 0) {
		var_267_bool = GlobalVars[2];
		if(!var_267_bool) //@nz
			var_263_bool = true;
	}
	if(var_263_bool != 0) {
		int var_269_int; object var_270_object;
		var_34_object = var_270_object;
		TaskCall(2);
		func_244(var_271_object, var_269_int, var_270_object);
		TaskReturn();
		var_328_bool = GlobalVars[2];
		GlobalVars[2] = true;
		return 0;
	}
	int var_329_int; object var_330_object;
	var_34_object = var_330_object;
	TaskCall(4);
	func_503(var_331_object, var_329_int, var_330_object);
	TaskReturn();
}


void func_973(bool var_24_bool, cvector var_25_cvector)
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
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_204_object, object var_205_object)
{
	var_0_object = var_205_object;
	var_1_object = var_204_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_205_object, "Neutral");
		var_0_object->SetMessage(518012); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518013, 32562, 19146); //@t
		var_0_object->AddReply(531249, 32565, 32564); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_235_bool;
	func_1338(var_235_bool);
	if(var_235_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1222(var_2_object);
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


void func_1238(string var_215_string, bool var_216_bool)
{
	bool var_222_bool; float var_223_float; float var_224_float;
	@lshHasAnimation(var_222_bool, var_215_string);
	if(var_222_bool != 0) {
		@lshGetAnimTimes(var_215_string, var_223_float, var_224_float);
		@lshPlayAnimation(var_223_float, var_224_float, var_216_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_215_string);
	}
	
}


void func_983(bool var_20_bool, object var_21_object)
{
	cvector var_23_cvector;
	var_21_object->GetPosition(var_23_cvector);
	bool var_24_bool; cvector var_25_cvector;
	var_23_cvector = var_25_cvector;
	func_973(var_24_bool, var_25_cvector);
	var_24_bool = var_20_bool;
}


void func_727(bool var_41_bool)
{
	object var_43_object;
	@FindActor(var_43_object, "player");
	if(!var_43_object) //@nz
		var_41_bool = false;
	bool var_46_bool; object var_47_object;
	var_43_object = var_47_object;
	func_983(var_46_bool, var_47_object);
	var_46_bool = var_41_bool;
}
EMIT "Stack[-1] = 0";


void func_992(bool var_17_bool)
{
	bool var_19_bool;
	@IsLoaded(var_19_bool);
	var_19_bool = var_17_bool;
}


void func_997(bool var_48_bool, object var_49_object, float var_50_float)
{
	cvector var_61_cvector; bool var_68_bool;
	var_49_object->GetPosition(var_61_cvector);
	float var_60_float;
	var_49_object->GetEyesHeight(var_60_float);
	var_69_float = GetByIndex(var_61_cvector, 1);
	SetByIndex(var_61_cvector, 1) = (var_69_float + var_60_float);
	cvector var_62_cvector;
	@GetPosition(var_62_cvector);
	@GetEyesHeight(var_60_float);
	var_70_float = GetByIndex(var_62_cvector, 1);
	SetByIndex(var_62_cvector, 1) = (var_70_float + var_60_float);
	cvector var_63_cvector = var_61_cvector - var_62_cvector;
	var_71_float = GetByIndex(var_63_cvector, 1);
	SetByIndex(var_63_cvector, 1) = (float)0;
	var_73_float = sqrt(var_63_cvector | var_63_cvector);
	var_63_cvector /= var_73_float;
	cvector var_64_cvector = -var_63_cvector;
	cvector var_75_cvector;
	func_1281(var_75_cvector, (var_64_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_65_cvector = ((var_63_cvector * var_50_float) + (var_75_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_67_bool;
	@IsOverrideActive(var_67_bool);
	if(var_67_bool != 0)
		var_48_bool = false;
	@StopWorld();
	@CameraTransit((var_62_cvector + var_65_cvector), var_64_cvector, true);
	var_89_float = GetByIndex(var_65_cvector, 0);
	var_90_float = GetByIndex(var_65_cvector, 2);
	@Rotate(var_89_float, var_90_float);
	bool var_91_bool;
	func_1338(var_91_bool);
	if(var_91_bool != 0) {
	} else {
		@HasAnimationTrack(var_68_bool, "head");
		if(var_68_bool == 0) goto Label_1060;
		@LookAsyncCamera("head");
	}
Label_1060:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_48_bool = true;
	
}


void func_742(object var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0);
	var_94_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_93_float, var_94_float);
}


void func_1253(bool var_143_bool, string var_144_string)
{
	bool var_146_bool;
	bool var_147_bool;
	func_1338(var_147_bool);
	if(var_147_bool != 0) {
		@lshHasSpeech(var_146_bool, var_144_string);
		if(var_146_bool != 0) {
			@lshPlaySpeech(var_144_string);
			var_143_bool = true;
		}
	}
	var_143_bool = false;
}


void func_747(bool var_24_bool)
{
	object var_27_object;
	@FindActor(var_27_object, "player");
	if(!var_27_object) { //@nz
		var_24_bool = false;
		return 4;
	}
	float var_31_float; object var_32_object;
	func_965(var_31_float, var_32_object);
	if(var_31_float > 90000.0) {
		var_24_bool = false;
		return 4;
	}
	bool var_28_bool;
	@CanSee(var_28_bool, var_32_object);
	var_28_bool = var_24_bool;
}
EMIT "Stack[-2] = 0";


void func_1268(void)
{
	bool var_19_bool;
	func_1338(var_19_bool);
	if(var_19_bool != 0)
		@lshStopSpeech();
}


void func_244(object var_0_object, int var_269_int, object var_270_object)
{
	var_0_object = var_270_object;
	bool var_280_bool; object var_281_object;
	var_270_object = var_281_object;
	func_997(var_280_bool, var_281_object, 70.0);
	if(!var_280_bool) { //@nz
		var_269_int = -2;
		return 8;
	}
	object var_276_object;
	@CreateDialog(var_276_object);
	int var_284_int;
	func_1332(var_284_int);
	var_276_object->SetNPCName(var_284_int);
	int var_285_int;
	func_1330(var_285_int);
	var_276_object->SetNPCDescription(var_285_int);
	string var_286_string;
	func_1334(var_286_string);
	var_276_object->SetPhoto(var_286_string);
	string var_287_string;
	func_1336(var_287_string);
	var_276_object->SetPhoto2(var_287_string);
	int var_288_int;
	func_1340(var_288_int);
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
	func_1275(var_292_object);
	var_292_object = var_291_object;
	func_1084(var_290_bool, var_291_object);
	object var_293_object; object var_294_object;
	var_270_object = var_293_object;
	var_276_object = var_294_object;
	TaskCall(3);
	func_325(var_295_object, var_296_object, var_297_string, var_298_bool, var_293_object, var_294_object);
	TaskReturn();
	bool var_279_bool;
	var_276_object->IsDialogEnd(var_279_bool);
	
	for(;;) {
		var_326_bool = !var_279_bool; //@nz
		if(var_326_bool == 0) goto Label_314;
		@sync();
		var_276_object->IsDialogEnd(var_279_bool);
	}
	
Label_314:
	object var_327_object;
	var_270_object = var_327_object;
	func_1066();
	@StopDialog(var_276_object);
	var_276_object->GetReturnValue(-1);
	int var_278_int = var_269_int;
}
EMIT "Stack[-4] = 0";


void func_1142(bool var_120_bool, object var_121_object)
{
	string var_127_string; bool var_129_bool; int var_130_int; string var_131_string;
	var_127_string = "c";
	int var_128_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_121_object->HasProperty((var_127_string + (var_128_int + 1)), var_129_bool);
			if(!var_129_bool) { //@nz
			} else {
				var_128_int += 1;
			}
		}
		if(!var_128_int) { //@nz
			var_120_bool = false;
			return 10;
		}
		var_130_int = 0;
		if(var_128_int > 1)
			@irand(var_130_int, var_128_int);
		var_121_object->GetProperty((var_127_string + (var_130_int + 1)), var_131_string);
		bool var_143_bool; string var_144_string;
		var_131_string = var_144_string;
		func_1253(var_143_bool, var_144_string);
		var_143_bool = var_120_bool;
		return 10;

	}
}


void func_503(object var_0_object, int var_329_int, object var_330_object)
{
	var_0_object = var_330_object;
	bool var_340_bool; object var_341_object;
	var_330_object = var_341_object;
	func_997(var_340_bool, var_341_object, 70.0);
	if(!var_340_bool) { //@nz
		var_329_int = -2;
		return 8;
	}
	object var_336_object;
	@CreateDialog(var_336_object);
	int var_344_int;
	func_1332(var_344_int);
	var_336_object->SetNPCName(var_344_int);
	int var_345_int;
	func_1330(var_345_int);
	var_336_object->SetNPCDescription(var_345_int);
	string var_346_string;
	func_1334(var_346_string);
	var_336_object->SetPhoto(var_346_string);
	string var_347_string;
	func_1336(var_347_string);
	var_336_object->SetPhoto2(var_347_string);
	int var_348_int;
	func_1340(var_348_int);
	var_336_object->SetPlayerName(var_348_int);
	bool var_337_bool;
	@IsOverrideActive(var_337_bool);
	if(var_337_bool != 0) {
		var_329_int = -2;
		return 8;
	}
	@DoDialog(var_336_object);
	bool var_350_bool; object var_351_object;
	object var_352_object;
	func_1275(var_352_object);
	var_352_object = var_351_object;
	func_1084(var_350_bool, var_351_object);
	object var_353_object; object var_354_object;
	var_330_object = var_353_object;
	var_336_object = var_354_object;
	TaskCall(5);
	func_584(var_355_object, var_356_object, var_357_string, var_358_bool, var_353_object, var_354_object);
	TaskReturn();
	bool var_339_bool;
	var_336_object->IsDialogEnd(var_339_bool);
	
	for(;;) {
		var_383_bool = !var_339_bool; //@nz
		if(var_383_bool == 0) goto Label_573;
		@sync();
		var_336_object->IsDialogEnd(var_339_bool);
	}
	
Label_573:
	object var_384_object;
	var_330_object = var_384_object;
	func_1066();
	@StopDialog(var_336_object);
	var_336_object->GetReturnValue(-1);
	int var_338_int = var_329_int;
}
EMIT "Stack[-4] = 0";


void func_889(void)
{
	bool var_29_bool; int var_30_int; int var_31_int; bool var_32_bool;
	@WaitForAnimEnd();
	bool var_33_bool;
	func_992(var_33_bool);
	if(!var_33_bool) //@nz
		return 12;
	int var_35_int;
	func_1313(var_35_int);
	int var_27_int;
	var_35_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_48_bool = false;
		if(var_28_int < 5) {
			bool var_51_bool;
			func_992(var_51_bool);
			if(var_51_bool != 0)
				var_48_bool = true;
		}
		if(var_48_bool != 0) {
			if(!var_27_int) { //@nz
				@Sleep(3, var_29_bool);
				if(!var_29_bool) { //@nz
				} else {
			} else {
			@irand(var_30_int, var_27_int);
			@irand(var_31_int, 5);
			if(var_31_int != 0)
				var_30_int = 0;
			string var_62_string; int var_63_int;
			var_30_int = var_63_int;
			func_1306(var_62_string, var_63_int);
			@PlayAnimation("all", var_62_string);
			@WaitForAnimEnd(var_32_bool);
			var_64_bool = !var_32_bool; //@nz
			if(var_64_bool == 0) goto Label_944;
			goto Label_955;
			}
				Label_944:
					bool var_55_bool;
					func_958(var_55_bool);
					var_56_bool = !var_55_bool; //@nz
					if(var_56_bool == 0) goto Label_950;
			}
		}
	Label_955:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_950:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_1275(object var_111_object)
{
	object var_113_object;
	@self(var_113_object);
	var_113_object = var_111_object;
}
EMIT "Stack[-1] = 0";


