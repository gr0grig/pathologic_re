// @GLOBALS: 0:object:,1:bool:

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
			func_1249();
			if(var_16_bool == 26866) {
				func_152(var_17_cvector, "Neutral");
				var_0_object->SetMessage(525510); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525511, -1, 26867); //@t
				var_0_object->AddReply(529288, 30743, 30742); //@t
				return 0;
			}
			if(var_16_bool == 30743) {
				func_152(var_17_cvector, "Neutral");
				var_0_object->SetMessage(529289); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529290, -1, 30744); //@t
				var_0_object->AddReply(529291, -1, 30745); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_1319(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf";
	
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
			func_1249();
			if(var_16_bool == 36960) {
				func_383(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_16_bool == 36962) {
				func_383(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_16_bool == 36964) {
				func_383(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_64_bool;
			func_1319(var_64_bool);
			if(var_64_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x196";
	
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
			func_1249();
			if(var_16_int == 42548) {
				func_637(var_17_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_41_bool;
			func_1319(var_41_bool);
			if(var_41_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x294";
	
	}

}


maintask task_7
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		var_16_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_708(var_15_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, int var_16_int)
	{
		if(var_16_int == 10) {
			func_779();
			bool var_20_bool = false;
			bool var_21_bool;
			func_993(var_21_bool);
			if(var_21_bool != 0) {
				bool var_24_bool;
				func_748(var_24_bool);
				if(var_24_bool != 0)
					var_20_bool = true;
			}
			if(var_20_bool != 0) {
				bool var_41_bool;
				func_728(var_41_bool);
				if(var_41_bool != 0) {
					bool var_60_bool; object var_61_object;
					object var_62_object;
					func_1256(var_62_object);
					var_62_object = var_61_object;
					func_1141(var_60_bool, var_61_object);
				}
			} else {
				func_743(var_16_int);
				func_770();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		func_961();
		func_779();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
		{
		@StopGroup0();
		func_779();
		func_1221("Neutral");
		func_770();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_16_bool != 0)
			func_770();
		else
			func_1221("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, object var_16_object)
	{
		bool var_18_bool;
		@IsOverrideActive(var_18_bool);
		if(!var_18_bool) { //@nz
			disable OnUse;
			func_961();
			bool var_20_bool; object var_21_object;
			var_16_object = var_21_object;
			func_984(var_20_bool, var_21_object);
			enable OnUse;
			object var_34_object;
			var_16_object = var_34_object;
			func_1338(var_34_object);
			func_1221("Neutral");
			func_779();
			func_770();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_21_bool;
	func_993(var_21_bool);
	if(!var_21_bool) goto Label_0; //@nz
}


// @pe
void func_1281(bool var_251_bool, int var_252_int)
{
	int var_253_int;
	func_1272(var_253_int);
	var_251_bool = var_253_int == var_252_int;
}


void func_770(void)
{
	float var_31_float;
	@rand(var_31_float, 8, 16);
	@SetTimer(10, var_31_float);
}


void func_1287(string var_55_string, int var_56_int)
{
	string var_58_string = "idle";
	if(var_56_int != 0)
		var_58_string += var_56_int;
	var_58_string = var_55_string;
}


void func_779(void)
{
	@KillTimer(10);
}


void func_13(object var_0_object, int var_37_int, object var_38_object)
{
	var_0_object = var_38_object;
	bool var_48_bool; object var_49_object;
	object var_50_object;
	func_1256(var_50_object);
	var_50_object = var_49_object;
	func_1083(var_48_bool, var_49_object);
	bool var_143_bool; object var_144_object;
	var_38_object = var_144_object;
	func_998(var_143_bool, var_144_object, 70.0);
	if(!var_143_bool) { //@nz
		var_37_int = -2;
		return 8;
	}
	object var_44_object;
	@CreateDialog(var_44_object);
	int var_190_int;
	func_1313(var_190_int);
	var_44_object->SetNPCName(var_190_int);
	int var_191_int;
	func_1311(var_191_int);
	var_44_object->SetNPCDescription(var_191_int);
	string var_192_string;
	func_1315(var_192_string);
	var_44_object->SetPhoto(var_192_string);
	string var_193_string;
	func_1317(var_193_string);
	var_44_object->SetPhoto2(var_193_string);
	int var_194_int;
	func_1321(var_194_int);
	var_44_object->SetPlayerName(var_194_int);
	bool var_45_bool;
	@IsOverrideActive(var_45_bool);
	if(var_45_bool != 0) {
		var_37_int = -2;
		return 8;
	}
	@DoDialog(var_44_object);
	object var_203_object; object var_204_object;
	var_38_object = var_203_object;
	var_44_object = var_204_object;
	TaskCall(2);
	func_94(var_205_object, var_206_object, var_207_string, var_208_bool, var_203_object, var_204_object);
	TaskReturn();
	bool var_47_bool;
	var_44_object->IsDialogEnd(var_47_bool);
	
	for(;;) {
		var_242_bool = !var_47_bool; //@nz
		if(var_242_bool == 0) goto Label_83;
		@sync();
		var_44_object->IsDialogEnd(var_47_bool);
	}
	
Label_83:
	object var_243_object;
	var_38_object = var_243_object;
	func_1066();
	@StopDialog(var_44_object);
	var_44_object->GetReturnValue(-1);
	int var_46_int = var_37_int;
}
EMIT "Stack[-4] = 0";


void func_1294(int var_49_int)
{
	int var_52_int; bool var_53_bool;
	var_52_int = 0;
	
	for(;;) {
		string var_55_string; int var_56_int;
		var_52_int = var_56_int;
		func_1287(var_55_string, var_56_int);
		@HasAnimation(var_53_bool, "all", var_55_string);
		if(!var_53_bool) //@nz
			break;
		var_52_int += 1;
	}
	var_52_int = var_49_int;
}


// @pe
void func_152(object var_2_object, string var_210_string)
{
	bool var_211_bool;
	func_1319(var_211_bool);
	if(!var_211_bool) //@nz
		return 0;
	if(var_210_string == var_2_object)
		return 0;
	string var_214_string; bool var_215_bool;
	var_210_string = var_214_string;
	if(var_210_string == "")
		var_215_bool = false;
	else
		var_215_bool = true;
	func_1228(var_214_string, var_215_bool);
	var_2_object = var_210_string;
	
}


void func_1178(bool var_90_bool, object var_91_object)
{
	bool var_99_bool; int var_100_int; string var_101_string;
	int var_103_int;
	func_1272(var_103_int);
	string var_97_string = ("d" + var_103_int) + "m";
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
		bool var_122_bool; string var_123_string;
		var_101_string = var_123_string;
		func_1234(var_122_bool, var_123_string);
		var_122_bool = var_90_bool;
		return 10;

	}
}


void func_1311(int var_191_int)
{
	var_191_int = 515546;
}


void func_1313(int var_190_int)
{
	var_190_int = 502871;
}


void func_1315(string var_192_string)
{
	var_192_string = "ui/NPC_Mishka.png";
}


void func_1317(string var_193_string)
{
	var_193_string = "ui/NPC_Mishka_b.png";
}


void func_1319(bool var_86_bool)
{
	var_86_bool = true;
}


void func_1321(int var_194_int)
{
	int var_196_int;
	@GetVariable("branch", var_196_int);
	if(var_196_int == 0) {
		var_194_int = 1;
		return 2;
	EMIT "GOTO 0x538";
	}
	if(var_196_int == 1) {
		var_194_int = 2;
		return 2;
	}
	var_194_int = 3;
}


void func_1066(void)
{
	bool var_245_bool;
	@CameraSwitchToNormal();
	bool var_246_bool;
	func_1319(var_246_bool);
	if(var_246_bool != 0) {
	} else {
		@HasAnimationTrack(var_245_bool, "head");
		if(var_245_bool == 0) goto Label_1082;
		@UnlookAsync("head");
	}
Label_1082:
	
}


// @pe
void func_1338(object var_34_object)
{
	var_35_bool = GlobalVars[1];
	if(!var_35_bool) { //@nz
		int var_37_int; object var_38_object;
		var_34_object = var_38_object;
		TaskCall(1);
		func_13(var_39_object, var_37_int, var_38_object);
		TaskReturn();
		var_250_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_251_bool;
	func_1281(var_251_bool, 12);
	if(var_251_bool != 0) {
		int var_254_int; object var_255_object;
		var_34_object = var_255_object;
		TaskCall(3);
		func_239(var_256_object, var_254_int, var_255_object);
		TaskReturn();
		return 0;
	}
	int var_313_int; object var_314_object;
	var_34_object = var_314_object;
	TaskCall(5);
	func_498(var_315_object, var_313_int, var_314_object);
	TaskReturn();
}


void func_1083(bool var_48_bool, object var_49_object)
{
	int var_55_int; int var_56_int;
	@GetVariable("voice_common", var_55_int);
	if(var_55_int != 0) {
		bool var_59_bool; object var_60_object;
		var_49_object = var_60_object;
		func_1141(var_59_bool, var_60_object);
		if(!var_59_bool) { //@nz
			bool var_90_bool; object var_91_object;
			var_49_object = var_91_object;
			func_1178(var_90_bool, var_91_object);
			if(!var_90_bool) { //@nz
				var_48_bool = false;
				return 4;
			}
		}
		@irand(var_56_int, 2);
		if(var_56_int != 0)
			@SetVariable("voice_common", ((var_55_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_135_bool; object var_136_object;
		var_49_object = var_136_object;
		func_1178(var_135_bool, var_136_object);
		if(!var_135_bool) { //@nz
			bool var_138_bool; object var_139_object;
			var_49_object = var_139_object;
			func_1141(var_138_bool, var_139_object);
			if(!var_138_bool) { //@nz
				var_48_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1139;
	
Label_1139:
	var_48_bool = true;
	
}


void func_959(bool var_69_bool)
{
	var_69_bool = true;
}


// @pe
void func_320(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_278_object, object var_279_object)
{
	var_0_object = var_279_object;
	var_1_object = var_278_object;
	var_3_string = false;
	if(1 != 0) {
		func_383(var_279_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_353;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x144";
	}
Label_353:
	bool var_303_bool;
	func_1319(var_303_bool);
	if(var_303_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1221(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_382;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_382:
		return 0;

	}
	
}


void func_961(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_579(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_337_object, object var_338_object)
{
	var_0_object = var_338_object;
	var_1_object = var_337_object;
	var_3_string = false;
	if(1 != 0) {
		func_637(var_338_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_607;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x247";
	}
Label_607:
	bool var_359_bool;
	func_1319(var_359_bool);
	if(var_359_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1221(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_636;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_636:
		return 0;

	}
	
}


void func_708(object var_0_object)
{
	bool var_17_bool;
	func_993(var_17_bool);
	if(!var_17_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_836();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_890();
	}
}
EMIT "Return(); Pop(0)";


void func_1221(string var_24_string)
{
	float var_27_float; float var_28_float;
	@lshGetAnimTimes(var_24_string, var_27_float, var_28_float);
	@lshPlayAnimation(var_27_float, var_28_float, false);
}


void func_966(float var_31_float, object var_32_object)
{
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	var_32_object->GetPosition(var_37_cvector);
	var_31_float = (var_37_cvector - var_36_cvector) | (var_37_cvector - var_36_cvector);
}


void func_1228(string var_214_string, bool var_215_bool)
{
	float var_220_float; float var_221_float;
	@lshGetAnimTimes(var_214_string, var_220_float, var_221_float);
	@lshPlayAnimation(var_220_float, var_221_float, var_215_bool);
}


void func_974(bool var_24_bool, cvector var_25_cvector)
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


void func_1234(bool var_82_bool, string var_83_string)
{
	bool var_85_bool;
	bool var_86_bool;
	func_1319(var_86_bool);
	if(var_86_bool != 0) {
		@lshHasSpeech(var_85_bool, var_83_string);
		if(var_85_bool != 0) {
			@lshPlaySpeech(var_83_string);
			var_82_bool = true;
		}
	}
	var_82_bool = false;
}


void func_984(bool var_20_bool, object var_21_object)
{
	cvector var_23_cvector;
	var_21_object->GetPosition(var_23_cvector);
	bool var_24_bool; cvector var_25_cvector;
	var_23_cvector = var_25_cvector;
	func_974(var_24_bool, var_25_cvector);
	var_24_bool = var_20_bool;
}


void func_728(bool var_41_bool)
{
	object var_43_object;
	@FindActor(var_43_object, "player");
	if(!var_43_object) //@nz
		var_41_bool = false;
	bool var_46_bool; object var_47_object;
	var_43_object = var_47_object;
	func_984(var_46_bool, var_47_object);
	var_46_bool = var_41_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_203_object, object var_204_object)
{
	var_0_object = var_204_object;
	var_1_object = var_203_object;
	var_3_string = false;
	if(1 != 0) {
		func_152(var_204_object, "Neutral");
		var_0_object->SetMessage(525510); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525511, -1, 26867); //@t
		var_0_object->AddReply(529288, 30743, 30742); //@t
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_122:
	bool var_229_bool;
	func_1319(var_229_bool);
	if(var_229_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1221(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_151;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_151:
		return 0;

	}
	
}


void func_993(bool var_17_bool)
{
	bool var_19_bool;
	@IsLoaded(var_19_bool);
	var_19_bool = var_17_bool;
}


void func_1249(void)
{
	bool var_19_bool;
	func_1319(var_19_bool);
	if(var_19_bool != 0)
		@lshStopSpeech();
}


void func_998(bool var_143_bool, object var_144_object, float var_145_float)
{
	cvector var_156_cvector; bool var_163_bool;
	var_144_object->GetPosition(var_156_cvector);
	float var_155_float;
	var_144_object->GetEyesHeight(var_155_float);
	var_164_float = GetByIndex(var_156_cvector, 1);
	SetByIndex(var_156_cvector, 1) = (var_164_float + var_155_float);
	cvector var_157_cvector;
	@GetPosition(var_157_cvector);
	@GetEyesHeight(var_155_float);
	var_165_float = GetByIndex(var_157_cvector, 1);
	SetByIndex(var_157_cvector, 1) = (var_165_float + var_155_float);
	cvector var_158_cvector = var_156_cvector - var_157_cvector;
	var_166_float = GetByIndex(var_158_cvector, 1);
	SetByIndex(var_158_cvector, 1) = (float)0;
	var_168_float = sqrt(var_158_cvector | var_158_cvector);
	var_158_cvector /= var_168_float;
	cvector var_159_cvector = -var_158_cvector;
	cvector var_170_cvector;
	func_1262(var_170_cvector, (var_159_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_160_cvector = ((var_158_cvector * var_145_float) + (var_170_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_162_bool;
	@IsOverrideActive(var_162_bool);
	if(var_162_bool != 0)
		var_143_bool = false;
	@StopWorld();
	@CameraTransit((var_157_cvector + var_160_cvector), var_159_cvector);
	var_183_float = GetByIndex(var_160_cvector, 0);
	var_184_float = GetByIndex(var_160_cvector, 2);
	@Rotate(var_183_float, var_184_float);
	bool var_185_bool;
	func_1319(var_185_bool);
	if(var_185_bool != 0) {
	} else {
		@HasAnimationTrack(var_163_bool, "head");
		if(var_163_bool == 0) goto Label_1060;
		@LookAsyncCamera("head");
	}
Label_1060:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_143_bool = true;
	
}


void func_743(object var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0);
	var_94_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_93_float, var_94_float);
}


void func_1256(object var_50_object)
{
	object var_52_object;
	@self(var_52_object);
	var_52_object = var_50_object;
}
EMIT "Stack[-1] = 0";


void func_748(bool var_24_bool)
{
	object var_27_object;
	@FindActor(var_27_object, "player");
	if(!var_27_object) { //@nz
		var_24_bool = false;
		return 4;
	}
	float var_31_float; object var_32_object;
	func_966(var_31_float, var_32_object);
	if(var_31_float > 90000.0) {
		var_24_bool = false;
		return 4;
	}
	bool var_28_bool;
	@CanSee(var_28_bool, var_32_object);
	var_28_bool = var_24_bool;
}
EMIT "Stack[-2] = 0";


void func_1262(cvector var_170_cvector, cvector var_171_cvector)
{
	float var_174_float = sqrt(var_171_cvector | var_171_cvector);
	if(var_174_float < 0.000001)
		var_170_cvector = [0.0, 0.0, 0.0];
	var_170_cvector = var_171_cvector / var_174_float;
}


void func_239(object var_0_object, int var_254_int, object var_255_object)
{
	var_0_object = var_255_object;
	bool var_265_bool; object var_266_object;
	object var_267_object;
	func_1256(var_267_object);
	var_267_object = var_266_object;
	func_1083(var_265_bool, var_266_object);
	bool var_268_bool; object var_269_object;
	var_255_object = var_269_object;
	func_998(var_268_bool, var_269_object, 70.0);
	if(!var_268_bool) { //@nz
		var_254_int = -2;
		return 8;
	}
	object var_261_object;
	@CreateDialog(var_261_object);
	int var_272_int;
	func_1313(var_272_int);
	var_261_object->SetNPCName(var_272_int);
	int var_273_int;
	func_1311(var_273_int);
	var_261_object->SetNPCDescription(var_273_int);
	string var_274_string;
	func_1315(var_274_string);
	var_261_object->SetPhoto(var_274_string);
	string var_275_string;
	func_1317(var_275_string);
	var_261_object->SetPhoto2(var_275_string);
	int var_276_int;
	func_1321(var_276_int);
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
	func_320(var_280_object, var_281_object, var_282_string, var_283_bool, var_278_object, var_279_object);
	TaskReturn();
	bool var_264_bool;
	var_261_object->IsDialogEnd(var_264_bool);
	
	for(;;) {
		var_311_bool = !var_264_bool; //@nz
		if(var_311_bool == 0) goto Label_309;
		@sync();
		var_261_object->IsDialogEnd(var_264_bool);
	}
	
Label_309:
	object var_312_object;
	var_255_object = var_312_object;
	func_1066();
	@StopDialog(var_261_object);
	var_261_object->GetReturnValue(-1);
	int var_263_int = var_254_int;
}
EMIT "Stack[-4] = 0";


void func_498(object var_0_object, int var_313_int, object var_314_object)
{
	var_0_object = var_314_object;
	bool var_324_bool; object var_325_object;
	object var_326_object;
	func_1256(var_326_object);
	var_326_object = var_325_object;
	func_1083(var_324_bool, var_325_object);
	bool var_327_bool; object var_328_object;
	var_314_object = var_328_object;
	func_998(var_327_bool, var_328_object, 70.0);
	if(!var_327_bool) { //@nz
		var_313_int = -2;
		return 8;
	}
	object var_320_object;
	@CreateDialog(var_320_object);
	int var_331_int;
	func_1313(var_331_int);
	var_320_object->SetNPCName(var_331_int);
	int var_332_int;
	func_1311(var_332_int);
	var_320_object->SetNPCDescription(var_332_int);
	string var_333_string;
	func_1315(var_333_string);
	var_320_object->SetPhoto(var_333_string);
	string var_334_string;
	func_1317(var_334_string);
	var_320_object->SetPhoto2(var_334_string);
	int var_335_int;
	func_1321(var_335_int);
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
	func_579(var_339_object, var_340_object, var_341_string, var_342_bool, var_337_object, var_338_object);
	TaskReturn();
	bool var_323_bool;
	var_320_object->IsDialogEnd(var_323_bool);
	
	for(;;) {
		var_367_bool = !var_323_bool; //@nz
		if(var_367_bool == 0) goto Label_568;
		@sync();
		var_320_object->IsDialogEnd(var_323_bool);
	}
	
Label_568:
	object var_368_object;
	var_314_object = var_368_object;
	func_1066();
	@StopDialog(var_320_object);
	var_320_object->GetReturnValue(-1);
	int var_322_int = var_313_int;
}
EMIT "Stack[-4] = 0";


void func_1141(bool var_59_bool, object var_60_object)
{
	string var_66_string; bool var_68_bool; int var_69_int; string var_70_string;
	var_66_string = "c";
	int var_67_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_60_object->HasProperty((var_66_string + (var_67_int + 1)), var_68_bool);
			if(!var_68_bool) { //@nz
			} else {
				var_67_int += 1;
			}
		}
		if(!var_67_int) { //@nz
			var_59_bool = false;
			return 10;
		}
		var_69_int = 0;
		if(var_67_int > 1)
			@irand(var_69_int, var_67_int);
		var_60_object->GetProperty((var_66_string + (var_69_int + 1)), var_70_string);
		bool var_82_bool; string var_83_string;
		var_70_string = var_83_string;
		func_1234(var_82_bool, var_83_string);
		var_82_bool = var_59_bool;
		return 10;

	}
}


void func_1272(int var_103_int)
{
	float var_105_float;
	@GetGameTime(var_105_float);
	var_103_int = 1 + (var_105_float / 24);
}


void func_890(void)
{
	bool var_43_bool; int var_44_int; int var_45_int; bool var_46_bool;
	@WaitForAnimEnd();
	bool var_47_bool;
	func_993(var_47_bool);
	if(!var_47_bool) //@nz
		return 12;
	int var_49_int;
	func_1294(var_49_int);
	int var_41_int;
	var_49_int = var_41_int;
	int var_42_int = 0;
	
	for(;;) {
		bool var_62_bool = false;
		if(var_42_int < 5) {
			bool var_65_bool;
			func_993(var_65_bool);
			if(var_65_bool != 0)
				var_62_bool = true;
		}
		if(var_62_bool != 0) {
			if(!var_41_int) { //@nz
				@Sleep(3, var_43_bool);
				if(!var_43_bool) { //@nz
				} else {
			} else {
			@irand(var_44_int, var_41_int);
			@irand(var_45_int, 5);
			if(var_45_int != 0)
				var_44_int = 0;
			string var_76_string; int var_77_int;
			var_44_int = var_77_int;
			func_1287(var_76_string, var_77_int);
			@PlayAnimation("all", var_76_string);
			@WaitForAnimEnd(var_46_bool);
			var_78_bool = !var_46_bool; //@nz
			if(var_78_bool == 0) goto Label_945;
			goto Label_956;
			}
				Label_945:
					bool var_69_bool;
					func_959(var_69_bool);
					var_70_bool = !var_69_bool; //@nz
					if(var_70_bool == 0) goto Label_951;
			}
		}
	Label_956:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_951:
		@ResetAAS();
		var_42_int += 1;
	}
	
}


// @pe
void func_637(object var_2_object, string var_344_string)
{
	bool var_345_bool;
	func_1319(var_345_bool);
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
	func_1228(var_348_string, var_349_bool);
	var_2_object = var_344_string;
	
}


// @pe
void func_383(object var_2_object, string var_285_string)
{
	bool var_286_bool;
	func_1319(var_286_bool);
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
	func_1228(var_289_string, var_290_bool);
	var_2_object = var_285_string;
	
}


