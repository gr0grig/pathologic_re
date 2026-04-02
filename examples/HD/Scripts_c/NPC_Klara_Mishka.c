// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, cvector var_17_cvector)
	{
		if(1 != 0) {
			func_1250();
			if(var_16_bool == 26866) {
				func_139(var_17_cvector, "Neutral");
				var_0_object->SetMessage(525510); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525511, -1, 26867); //@t
				var_0_object->AddReply(529288, 30743, 30742); //@t
				return 0;
			}
			if(var_16_bool == 30743) {
				func_139(var_17_cvector, "Neutral");
				var_0_object->SetMessage(529289); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529290, -1, 30744); //@t
				var_0_object->AddReply(529291, -1, 30745); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_1320(var_56_bool);
			if(var_56_bool != 0)
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
			func_1250();
			if(var_16_bool == 36960) {
				func_370(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_16_bool == 36962) {
				func_370(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_16_bool == 36964) {
				func_370(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_69_bool;
			func_1320(var_69_bool);
			if(var_69_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x189";
	
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
			func_1250();
			if(var_16_int == 42548) {
				func_624(var_17_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_46_bool;
			func_1320(var_46_bool);
			if(var_46_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x287";
	
	}

}


maintask task_6
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		var_16_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_695(var_15_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, int var_16_int)
	{
		if(var_16_int == 10) {
			func_760();
			bool var_20_bool = false;
			bool var_21_bool;
			func_974(var_21_bool);
			if(var_21_bool != 0) {
				bool var_24_bool;
				func_729(var_24_bool);
				if(var_24_bool != 0)
					var_20_bool = true;
			}
			if(var_20_bool != 0) {
				bool var_41_bool;
				func_709(var_41_bool);
				if(var_41_bool != 0) {
					bool var_60_bool; object var_61_object;
					object var_62_object;
					func_1257(var_62_object);
					var_62_object = var_61_object;
					func_1124(var_60_bool, var_61_object);
				}
			} else {
				func_724(var_16_int);
				func_751();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		func_942();
		func_760();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		@StopGroup0();
		func_760();
		func_1204("Neutral");
		func_751();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_16_bool != 0)
			func_751();
		else
			func_1204("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, object var_16_object)
	{
		bool var_18_bool;
		@IsOverrideActive(var_18_bool);
		if(!var_18_bool) { //@nz
			disable OnUse;
			func_942();
			bool var_20_bool; object var_21_object;
			var_16_object = var_21_object;
			func_965(var_20_bool, var_21_object);
			enable OnUse;
			object var_34_object;
			var_16_object = var_34_object;
			func_1339(var_34_object);
			func_1204("Neutral");
			func_760();
			func_751();
		}
	}

}


void func_0(object var_0_object, int var_37_int, object var_38_object)
{
	var_0_object = var_38_object;
	bool var_48_bool; object var_49_object;
	var_38_object = var_49_object;
	func_979(var_48_bool, var_49_object, 70.0);
	if(!var_48_bool) { //@nz
		var_37_int = -2;
		return 8;
	}
	object var_44_object;
	@CreateDialog(var_44_object);
	int var_96_int;
	func_1314(var_96_int);
	var_44_object->SetNPCName(var_96_int);
	int var_97_int;
	func_1312(var_97_int);
	var_44_object->SetNPCDescription(var_97_int);
	string var_98_string;
	func_1316(var_98_string);
	var_44_object->SetPhoto(var_98_string);
	string var_99_string;
	func_1318(var_99_string);
	var_44_object->SetPhoto2(var_99_string);
	int var_100_int;
	func_1322(var_100_int);
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
	func_1257(var_111_object);
	var_111_object = var_110_object;
	func_1066(var_109_bool, var_110_object);
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
	func_1048();
	@StopDialog(var_44_object);
	var_44_object->GetReturnValue(-1);
	int var_46_int = var_37_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1282(bool var_263_bool, int var_264_int)
{
	int var_265_int;
	func_1273(var_265_int);
	var_263_bool = var_265_int == var_264_int;
}


void func_1288(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
}


void func_1161(bool var_151_bool, object var_152_object)
{
	bool var_160_bool; int var_161_int; string var_162_string;
	int var_164_int;
	func_1273(var_164_int);
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
		func_1235(var_183_bool, var_184_string);
		var_183_bool = var_151_bool;
		return 10;

	}
}


// @pe
void func_139(object var_2_object, string var_211_string)
{
	bool var_212_bool;
	func_1320(var_212_bool);
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
	func_1220(var_215_string, var_216_bool);
	var_2_object = var_211_string;
	
}


void func_1295(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_1288(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


void func_1048(void)
{
	bool var_256_bool;
	@CameraSwitchToNormal(true);
	bool var_258_bool;
	func_1320(var_258_bool);
	if(var_258_bool != 0) {
	} else {
		@HasAnimationTrack(var_256_bool, "head");
		if(var_256_bool == 0) goto Label_1065;
		@UnlookAsync("head");
	}
Label_1065:
	
}


void func_1312(int var_97_int)
{
	var_97_int = 515546;
}


void func_1314(int var_96_int)
{
	var_96_int = 502871;
}


void func_1316(string var_98_string)
{
	var_98_string = "ui/NPC_Mishka.png";
}


void func_1318(string var_99_string)
{
	var_99_string = "ui/NPC_Mishka_b.png";
}


void func_1320(bool var_91_bool)
{
	var_91_bool = true;
}


void func_1322(int var_100_int)
{
	int var_102_int;
	@GetVariable("branch", var_102_int);
	if(var_102_int == 0) {
		var_100_int = 1;
		return 2;
	EMIT "GOTO 0x539";
	}
	if(var_102_int == 1) {
		var_100_int = 2;
		return 2;
	}
	var_100_int = 3;
}


void func_1066(bool var_109_bool, object var_110_object)
{
	int var_116_int; int var_117_int;
	@GetVariable("voice_common", var_116_int);
	if(var_116_int != 0) {
		bool var_120_bool; object var_121_object;
		var_110_object = var_121_object;
		func_1124(var_120_bool, var_121_object);
		if(!var_120_bool) { //@nz
			bool var_151_bool; object var_152_object;
			var_110_object = var_152_object;
			func_1161(var_151_bool, var_152_object);
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
		func_1161(var_196_bool, var_197_object);
		if(!var_196_bool) { //@nz
			bool var_199_bool; object var_200_object;
			var_110_object = var_200_object;
			func_1124(var_199_bool, var_200_object);
			if(!var_199_bool) { //@nz
				var_109_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1122;
	
Label_1122:
	var_109_bool = true;
	
}


void func_940(bool var_55_bool)
{
	var_55_bool = true;
}


void func_942(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_307(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_290_object, object var_291_object)
{
	var_0_object = var_291_object;
	var_1_object = var_290_object;
	var_3_string = false;
	if(1 != 0) {
		func_370(var_291_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_340;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x137";
	}
Label_340:
	bool var_315_bool;
	func_1320(var_315_bool);
	if(var_315_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1204(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_369;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_369:
		return 0;

	}
	
}


void func_1204(string var_237_string)
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


void func_947(float var_31_float, object var_32_object)
{
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	var_32_object->GetPosition(var_37_cvector);
	var_31_float = (var_37_cvector - var_36_cvector) | (var_37_cvector - var_36_cvector);
}


// @pe
void func_566(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_349_object, object var_350_object)
{
	var_0_object = var_350_object;
	var_1_object = var_349_object;
	var_3_string = false;
	if(1 != 0) {
		func_624(var_350_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_594;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x23a";
	}
Label_594:
	bool var_371_bool;
	func_1320(var_371_bool);
	if(var_371_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1204(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_623;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_623:
		return 0;

	}
	
}


void func_695(object var_0_object)
{
	bool var_17_bool;
	func_974(var_17_bool);
	if(!var_17_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_871();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1339(object var_34_object)
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
	bool var_263_bool;
	func_1282(var_263_bool, 12);
	if(var_263_bool != 0) {
		int var_266_int; object var_267_object;
		var_34_object = var_267_object;
		TaskCall(2);
		func_226(var_268_object, var_266_int, var_267_object);
		TaskReturn();
		return 0;
	}
	int var_325_int; object var_326_object;
	var_34_object = var_326_object;
	TaskCall(4);
	func_485(var_327_object, var_325_int, var_326_object);
	TaskReturn();
}


void func_955(bool var_24_bool, cvector var_25_cvector)
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


void func_1220(string var_215_string, bool var_216_bool)
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


void func_965(bool var_20_bool, object var_21_object)
{
	cvector var_23_cvector;
	var_21_object->GetPosition(var_23_cvector);
	bool var_24_bool; cvector var_25_cvector;
	var_23_cvector = var_25_cvector;
	func_955(var_24_bool, var_25_cvector);
	var_24_bool = var_20_bool;
}


void func_709(bool var_41_bool)
{
	object var_43_object;
	@FindActor(var_43_object, "player");
	if(!var_43_object) //@nz
		var_41_bool = false;
	bool var_46_bool; object var_47_object;
	var_43_object = var_47_object;
	func_965(var_46_bool, var_47_object);
	var_46_bool = var_41_bool;
}
EMIT "Stack[-1] = 0";


void func_974(bool var_17_bool)
{
	bool var_19_bool;
	@IsLoaded(var_19_bool);
	var_19_bool = var_17_bool;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_204_object, object var_205_object)
{
	var_0_object = var_205_object;
	var_1_object = var_204_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_205_object, "Neutral");
		var_0_object->SetMessage(525510); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525511, -1, 26867); //@t
		var_0_object->AddReply(529288, 30743, 30742); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_235_bool;
	func_1320(var_235_bool);
	if(var_235_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1204(var_2_object);
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


void func_979(bool var_48_bool, object var_49_object, float var_50_float)
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
	func_1263(var_75_cvector, (var_64_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1320(var_91_bool);
	if(var_91_bool != 0) {
	} else {
		@HasAnimationTrack(var_68_bool, "head");
		if(var_68_bool == 0) goto Label_1042;
		@LookAsyncCamera("head");
	}
Label_1042:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_48_bool = true;
	
}


void func_724(object var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0);
	var_94_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_93_float, var_94_float);
}


void func_1235(bool var_143_bool, string var_144_string)
{
	bool var_146_bool;
	bool var_147_bool;
	func_1320(var_147_bool);
	if(var_147_bool != 0) {
		@lshHasSpeech(var_146_bool, var_144_string);
		if(var_146_bool != 0) {
			@lshPlaySpeech(var_144_string);
			var_143_bool = true;
		}
	}
	var_143_bool = false;
}


void func_729(bool var_24_bool)
{
	object var_27_object;
	@FindActor(var_27_object, "player");
	if(!var_27_object) { //@nz
		var_24_bool = false;
		return 4;
	}
	float var_31_float; object var_32_object;
	func_947(var_31_float, var_32_object);
	if(var_31_float > 90000.0) {
		var_24_bool = false;
		return 4;
	}
	bool var_28_bool;
	@CanSee(var_28_bool, var_32_object);
	var_28_bool = var_24_bool;
}
EMIT "Stack[-2] = 0";


void func_1250(void)
{
	bool var_19_bool;
	func_1320(var_19_bool);
	if(var_19_bool != 0)
		@lshStopSpeech();
}


void func_226(object var_0_object, int var_266_int, object var_267_object)
{
	var_0_object = var_267_object;
	bool var_277_bool; object var_278_object;
	var_267_object = var_278_object;
	func_979(var_277_bool, var_278_object, 70.0);
	if(!var_277_bool) { //@nz
		var_266_int = -2;
		return 8;
	}
	object var_273_object;
	@CreateDialog(var_273_object);
	int var_281_int;
	func_1314(var_281_int);
	var_273_object->SetNPCName(var_281_int);
	int var_282_int;
	func_1312(var_282_int);
	var_273_object->SetNPCDescription(var_282_int);
	string var_283_string;
	func_1316(var_283_string);
	var_273_object->SetPhoto(var_283_string);
	string var_284_string;
	func_1318(var_284_string);
	var_273_object->SetPhoto2(var_284_string);
	int var_285_int;
	func_1322(var_285_int);
	var_273_object->SetPlayerName(var_285_int);
	bool var_274_bool;
	@IsOverrideActive(var_274_bool);
	if(var_274_bool != 0) {
		var_266_int = -2;
		return 8;
	}
	@DoDialog(var_273_object);
	bool var_287_bool; object var_288_object;
	object var_289_object;
	func_1257(var_289_object);
	var_289_object = var_288_object;
	func_1066(var_287_bool, var_288_object);
	object var_290_object; object var_291_object;
	var_267_object = var_290_object;
	var_273_object = var_291_object;
	TaskCall(3);
	func_307(var_292_object, var_293_object, var_294_string, var_295_bool, var_290_object, var_291_object);
	TaskReturn();
	bool var_276_bool;
	var_273_object->IsDialogEnd(var_276_bool);
	
	for(;;) {
		var_323_bool = !var_276_bool; //@nz
		if(var_323_bool == 0) goto Label_296;
		@sync();
		var_273_object->IsDialogEnd(var_276_bool);
	}
	
Label_296:
	object var_324_object;
	var_267_object = var_324_object;
	func_1048();
	@StopDialog(var_273_object);
	var_273_object->GetReturnValue(-1);
	int var_275_int = var_266_int;
}
EMIT "Stack[-4] = 0";


void func_1124(bool var_120_bool, object var_121_object)
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
		func_1235(var_143_bool, var_144_string);
		var_143_bool = var_120_bool;
		return 10;

	}
}


void func_485(object var_0_object, int var_325_int, object var_326_object)
{
	var_0_object = var_326_object;
	bool var_336_bool; object var_337_object;
	var_326_object = var_337_object;
	func_979(var_336_bool, var_337_object, 70.0);
	if(!var_336_bool) { //@nz
		var_325_int = -2;
		return 8;
	}
	object var_332_object;
	@CreateDialog(var_332_object);
	int var_340_int;
	func_1314(var_340_int);
	var_332_object->SetNPCName(var_340_int);
	int var_341_int;
	func_1312(var_341_int);
	var_332_object->SetNPCDescription(var_341_int);
	string var_342_string;
	func_1316(var_342_string);
	var_332_object->SetPhoto(var_342_string);
	string var_343_string;
	func_1318(var_343_string);
	var_332_object->SetPhoto2(var_343_string);
	int var_344_int;
	func_1322(var_344_int);
	var_332_object->SetPlayerName(var_344_int);
	bool var_333_bool;
	@IsOverrideActive(var_333_bool);
	if(var_333_bool != 0) {
		var_325_int = -2;
		return 8;
	}
	@DoDialog(var_332_object);
	bool var_346_bool; object var_347_object;
	object var_348_object;
	func_1257(var_348_object);
	var_348_object = var_347_object;
	func_1066(var_346_bool, var_347_object);
	object var_349_object; object var_350_object;
	var_326_object = var_349_object;
	var_332_object = var_350_object;
	TaskCall(5);
	func_566(var_351_object, var_352_object, var_353_string, var_354_bool, var_349_object, var_350_object);
	TaskReturn();
	bool var_335_bool;
	var_332_object->IsDialogEnd(var_335_bool);
	
	for(;;) {
		var_379_bool = !var_335_bool; //@nz
		if(var_379_bool == 0) goto Label_555;
		@sync();
		var_332_object->IsDialogEnd(var_335_bool);
	}
	
Label_555:
	object var_380_object;
	var_326_object = var_380_object;
	func_1048();
	@StopDialog(var_332_object);
	var_332_object->GetReturnValue(-1);
	int var_334_int = var_325_int;
}
EMIT "Stack[-4] = 0";


void func_871(void)
{
	bool var_29_bool; int var_30_int; int var_31_int; bool var_32_bool;
	@WaitForAnimEnd();
	bool var_33_bool;
	func_974(var_33_bool);
	if(!var_33_bool) //@nz
		return 12;
	int var_35_int;
	func_1295(var_35_int);
	int var_27_int;
	var_35_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_48_bool = false;
		if(var_28_int < 5) {
			bool var_51_bool;
			func_974(var_51_bool);
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
			func_1288(var_62_string, var_63_int);
			@PlayAnimation("all", var_62_string);
			@WaitForAnimEnd(var_32_bool);
			var_64_bool = !var_32_bool; //@nz
			if(var_64_bool == 0) goto Label_926;
			goto Label_937;
			}
				Label_926:
					bool var_55_bool;
					func_940(var_55_bool);
					var_56_bool = !var_55_bool; //@nz
					if(var_56_bool == 0) goto Label_932;
			}
		}
	Label_937:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_932:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_1257(object var_111_object)
{
	object var_113_object;
	@self(var_113_object);
	var_113_object = var_111_object;
}
EMIT "Stack[-1] = 0";


void func_751(void)
{
	float var_384_float;
	@rand(var_384_float, 8, 16);
	@SetTimer(10, var_384_float);
}


// @pe
void func_624(object var_2_object, string var_356_string)
{
	bool var_357_bool;
	func_1320(var_357_bool);
	if(!var_357_bool) //@nz
		return 0;
	if(var_356_string == var_2_object)
		return 0;
	string var_360_string; bool var_361_bool;
	var_356_string = var_360_string;
	if(var_356_string == "")
		var_361_bool = false;
	else
		var_361_bool = true;
	func_1220(var_360_string, var_361_bool);
	var_2_object = var_356_string;
	
}


void func_1263(cvector var_75_cvector, cvector var_76_cvector)
{
	float var_79_float = sqrt(var_76_cvector | var_76_cvector);
	if(var_79_float < 0.000001)
		var_75_cvector = [0.0, 0.0, 0.0];
	var_75_cvector = var_76_cvector / var_79_float;
}


// @pe
void func_370(object var_2_object, string var_297_string)
{
	bool var_298_bool;
	func_1320(var_298_bool);
	if(!var_298_bool) //@nz
		return 0;
	if(var_297_string == var_2_object)
		return 0;
	string var_301_string; bool var_302_bool;
	var_297_string = var_301_string;
	if(var_297_string == "")
		var_302_bool = false;
	else
		var_302_bool = true;
	func_1220(var_301_string, var_302_bool);
	var_2_object = var_297_string;
	
}


void func_760(void)
{
	@KillTimer(10);
}


void func_1273(int var_164_int)
{
	float var_166_float;
	@GetGameTime(var_166_float);
	var_164_int = 1 + (var_166_float / 24);
}


