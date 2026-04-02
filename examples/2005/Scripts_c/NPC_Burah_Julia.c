// @GLOBALS: 0:object:,1:bool:,2:bool:

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
			func_1267();
			if(var_16_bool == 36971) {
				func_157(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_16_bool == 36973) {
				func_157(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_16_bool == 36975) {
				func_157(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_64_bool;
			func_1337(var_64_bool);
			if(var_64_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
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
			func_1267();
			if(var_16_bool == 19145) {
				func_411(var_17_cvector, "Neutral");
				var_0_object->SetMessage(518012); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518013, 32562, 19146); //@t
				var_0_object->AddReply(531249, 32565, 32564); //@t
				return 0;
			}
			if(var_16_bool == 32565) {
				func_411(var_17_cvector, "Neutral");
				var_0_object->SetMessage(531250); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531251, 32562, 32566); //@t
				return 0;
			}
			if(var_16_bool == 32562) {
				func_411(var_17_cvector, "Neutral");
				var_0_object->SetMessage(531247); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531248, -1, 32563); //@t
				var_0_object->AddReply(531252, -1, 32568); //@t
				return 0;
			}
			var_3_string = true;
			bool var_58_bool;
			func_1337(var_58_bool);
			if(var_58_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1b2";
	
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
			func_1267();
			if(var_16_int == 42560) {
				func_655(var_17_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_41_bool;
			func_1337(var_41_bool);
			if(var_41_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2a6";
	
	}

}


maintask task_7
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		var_16_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_726(var_15_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, int var_16_int)
	{
		if(var_16_int == 10) {
			func_797();
			bool var_20_bool = false;
			bool var_21_bool;
			func_1011(var_21_bool);
			if(var_21_bool != 0) {
				bool var_24_bool;
				func_766(var_24_bool);
				if(var_24_bool != 0)
					var_20_bool = true;
			}
			if(var_20_bool != 0) {
				bool var_41_bool;
				func_746(var_41_bool);
				if(var_41_bool != 0) {
					bool var_60_bool; object var_61_object;
					object var_62_object;
					func_1274(var_62_object);
					var_62_object = var_61_object;
					func_1159(var_60_bool, var_61_object);
				}
			} else {
				func_761(var_16_int);
				func_788();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		func_979();
		func_797();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
		{
		@StopGroup0();
		func_797();
		func_1239("Neutral");
		func_788();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_16_bool != 0)
			func_788();
		else
			func_1239("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, object var_16_object)
	{
		bool var_18_bool;
		@IsOverrideActive(var_18_bool);
		if(!var_18_bool) { //@nz
			disable OnUse;
			func_979();
			bool var_20_bool; object var_21_object;
			var_16_object = var_21_object;
			func_1002(var_20_bool, var_21_object);
			enable OnUse;
			object var_34_object;
			var_16_object = var_34_object;
			func_1356(var_34_object);
			func_1239("Neutral");
			func_797();
			func_788();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_21_bool;
	func_1011(var_21_bool);
	if(!var_21_bool) goto Label_0; //@nz
}


void func_1280(cvector var_170_cvector, cvector var_171_cvector)
{
	float var_174_float = sqrt(var_171_cvector | var_171_cvector);
	if(var_174_float < 0.000001)
		var_170_cvector = [0.0, 0.0, 0.0];
	var_170_cvector = var_171_cvector / var_174_float;
}


void func_516(object var_0_object, int var_317_int, object var_318_object)
{
	var_0_object = var_318_object;
	bool var_328_bool; object var_329_object;
	object var_330_object;
	func_1274(var_330_object);
	var_330_object = var_329_object;
	func_1101(var_328_bool, var_329_object);
	bool var_331_bool; object var_332_object;
	var_318_object = var_332_object;
	func_1016(var_331_bool, var_332_object, 70.0);
	if(!var_331_bool) { //@nz
		var_317_int = -2;
		return 8;
	}
	object var_324_object;
	@CreateDialog(var_324_object);
	int var_335_int;
	func_1331(var_335_int);
	var_324_object->SetNPCName(var_335_int);
	int var_336_int;
	func_1329(var_336_int);
	var_324_object->SetNPCDescription(var_336_int);
	string var_337_string;
	func_1333(var_337_string);
	var_324_object->SetPhoto(var_337_string);
	string var_338_string;
	func_1335(var_338_string);
	var_324_object->SetPhoto2(var_338_string);
	int var_339_int;
	func_1339(var_339_int);
	var_324_object->SetPlayerName(var_339_int);
	bool var_325_bool;
	@IsOverrideActive(var_325_bool);
	if(var_325_bool != 0) {
		var_317_int = -2;
		return 8;
	}
	@DoDialog(var_324_object);
	object var_341_object; object var_342_object;
	var_318_object = var_341_object;
	var_324_object = var_342_object;
	TaskCall(6);
	func_597(var_343_object, var_344_object, var_345_string, var_346_bool, var_341_object, var_342_object);
	TaskReturn();
	bool var_327_bool;
	var_324_object->IsDialogEnd(var_327_bool);
	
	for(;;) {
		var_371_bool = !var_327_bool; //@nz
		if(var_371_bool == 0) goto Label_586;
		@sync();
		var_324_object->IsDialogEnd(var_327_bool);
	}
	
Label_586:
	object var_372_object;
	var_318_object = var_372_object;
	func_1084();
	@StopDialog(var_324_object);
	var_324_object->GetReturnValue(-1);
	int var_326_int = var_317_int;
}
EMIT "Stack[-4] = 0";


void func_1159(bool var_59_bool, object var_60_object)
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
		func_1252(var_82_bool, var_83_string);
		var_82_bool = var_59_bool;
		return 10;

	}
}


void func_1290(int var_103_int)
{
	float var_105_float;
	@GetGameTime(var_105_float);
	var_103_int = 1 + (var_105_float / 24);
}


void func_908(void)
{
	bool var_43_bool; int var_44_int; int var_45_int; bool var_46_bool;
	@WaitForAnimEnd();
	bool var_47_bool;
	func_1011(var_47_bool);
	if(!var_47_bool) //@nz
		return 12;
	int var_49_int;
	func_1312(var_49_int);
	int var_41_int;
	var_49_int = var_41_int;
	int var_42_int = 0;
	
	for(;;) {
		bool var_62_bool = false;
		if(var_42_int < 5) {
			bool var_65_bool;
			func_1011(var_65_bool);
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
			func_1305(var_76_string, var_77_int);
			@PlayAnimation("all", var_76_string);
			@WaitForAnimEnd(var_46_bool);
			var_78_bool = !var_46_bool; //@nz
			if(var_78_bool == 0) goto Label_963;
			goto Label_974;
			}
				Label_963:
					bool var_69_bool;
					func_977(var_69_bool);
					var_70_bool = !var_69_bool; //@nz
					if(var_70_bool == 0) goto Label_969;
			}
		}
	Label_974:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_969:
		@ResetAAS();
		var_42_int += 1;
	}
	
}


void func_13(object var_0_object, int var_257_int, object var_258_object)
{
	var_0_object = var_258_object;
	bool var_268_bool; object var_269_object;
	object var_270_object;
	func_1274(var_270_object);
	var_270_object = var_269_object;
	func_1101(var_268_bool, var_269_object);
	bool var_271_bool; object var_272_object;
	var_258_object = var_272_object;
	func_1016(var_271_bool, var_272_object, 70.0);
	if(!var_271_bool) { //@nz
		var_257_int = -2;
		return 8;
	}
	object var_264_object;
	@CreateDialog(var_264_object);
	int var_275_int;
	func_1331(var_275_int);
	var_264_object->SetNPCName(var_275_int);
	int var_276_int;
	func_1329(var_276_int);
	var_264_object->SetNPCDescription(var_276_int);
	string var_277_string;
	func_1333(var_277_string);
	var_264_object->SetPhoto(var_277_string);
	string var_278_string;
	func_1335(var_278_string);
	var_264_object->SetPhoto2(var_278_string);
	int var_279_int;
	func_1339(var_279_int);
	var_264_object->SetPlayerName(var_279_int);
	bool var_265_bool;
	@IsOverrideActive(var_265_bool);
	if(var_265_bool != 0) {
		var_257_int = -2;
		return 8;
	}
	@DoDialog(var_264_object);
	object var_281_object; object var_282_object;
	var_258_object = var_281_object;
	var_264_object = var_282_object;
	TaskCall(2);
	func_94(var_283_object, var_284_object, var_285_string, var_286_bool, var_281_object, var_282_object);
	TaskReturn();
	bool var_267_bool;
	var_264_object->IsDialogEnd(var_267_bool);
	
	for(;;) {
		var_314_bool = !var_267_bool; //@nz
		if(var_314_bool == 0) goto Label_83;
		@sync();
		var_264_object->IsDialogEnd(var_267_bool);
	}
	
Label_83:
	object var_315_object;
	var_258_object = var_315_object;
	func_1084();
	@StopDialog(var_264_object);
	var_264_object->GetReturnValue(-1);
	int var_266_int = var_257_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_655(object var_2_object, string var_348_string)
{
	bool var_349_bool;
	func_1337(var_349_bool);
	if(!var_349_bool) //@nz
		return 0;
	if(var_348_string == var_2_object)
		return 0;
	string var_352_string; bool var_353_bool;
	var_348_string = var_352_string;
	if(var_348_string == "")
		var_353_bool = false;
	else
		var_353_bool = true;
	func_1246(var_352_string, var_353_bool);
	var_2_object = var_348_string;
	
}


void func_272(object var_0_object, int var_37_int, object var_38_object)
{
	var_0_object = var_38_object;
	bool var_48_bool; object var_49_object;
	object var_50_object;
	func_1274(var_50_object);
	var_50_object = var_49_object;
	func_1101(var_48_bool, var_49_object);
	bool var_143_bool; object var_144_object;
	var_38_object = var_144_object;
	func_1016(var_143_bool, var_144_object, 70.0);
	if(!var_143_bool) { //@nz
		var_37_int = -2;
		return 8;
	}
	object var_44_object;
	@CreateDialog(var_44_object);
	int var_190_int;
	func_1331(var_190_int);
	var_44_object->SetNPCName(var_190_int);
	int var_191_int;
	func_1329(var_191_int);
	var_44_object->SetNPCDescription(var_191_int);
	string var_192_string;
	func_1333(var_192_string);
	var_44_object->SetPhoto(var_192_string);
	string var_193_string;
	func_1335(var_193_string);
	var_44_object->SetPhoto2(var_193_string);
	int var_194_int;
	func_1339(var_194_int);
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
	TaskCall(4);
	func_353(var_205_object, var_206_object, var_207_string, var_208_bool, var_203_object, var_204_object);
	TaskReturn();
	bool var_47_bool;
	var_44_object->IsDialogEnd(var_47_bool);
	
	for(;;) {
		var_242_bool = !var_47_bool; //@nz
		if(var_242_bool == 0) goto Label_342;
		@sync();
		var_44_object->IsDialogEnd(var_47_bool);
	}
	
Label_342:
	object var_243_object;
	var_38_object = var_243_object;
	func_1084();
	@StopDialog(var_44_object);
	var_44_object->GetReturnValue(-1);
	int var_46_int = var_37_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1299(bool var_252_bool, int var_253_int)
{
	int var_254_int;
	func_1290(var_254_int);
	var_252_bool = var_254_int == var_253_int;
}


void func_788(void)
{
	float var_31_float;
	@rand(var_31_float, 8, 16);
	@SetTimer(10, var_31_float);
}


void func_1305(string var_55_string, int var_56_int)
{
	string var_58_string = "idle";
	if(var_56_int != 0)
		var_58_string += var_56_int;
	var_58_string = var_55_string;
}


// @pe
void func_411(object var_2_object, string var_210_string)
{
	bool var_211_bool;
	func_1337(var_211_bool);
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
	func_1246(var_214_string, var_215_bool);
	var_2_object = var_210_string;
	
}


void func_797(void)
{
	@KillTimer(10);
}


// @pe
void func_157(object var_2_object, string var_288_string)
{
	bool var_289_bool;
	func_1337(var_289_bool);
	if(!var_289_bool) //@nz
		return 0;
	if(var_288_string == var_2_object)
		return 0;
	string var_292_string; bool var_293_bool;
	var_288_string = var_292_string;
	if(var_288_string == "")
		var_293_bool = false;
	else
		var_293_bool = true;
	func_1246(var_292_string, var_293_bool);
	var_2_object = var_288_string;
	
}


void func_1312(int var_49_int)
{
	int var_52_int; bool var_53_bool;
	var_52_int = 0;
	
	for(;;) {
		string var_55_string; int var_56_int;
		var_52_int = var_56_int;
		func_1305(var_55_string, var_56_int);
		@HasAnimation(var_53_bool, "all", var_55_string);
		if(!var_53_bool) //@nz
			break;
		var_52_int += 1;
	}
	var_52_int = var_49_int;
}


void func_1196(bool var_90_bool, object var_91_object)
{
	bool var_99_bool; int var_100_int; string var_101_string;
	int var_103_int;
	func_1290(var_103_int);
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
		func_1252(var_122_bool, var_123_string);
		var_122_bool = var_90_bool;
		return 10;

	}
}


void func_1329(int var_191_int)
{
	var_191_int = 515537;
}


void func_1331(int var_190_int)
{
	var_190_int = 502862;
}


void func_1333(string var_192_string)
{
	var_192_string = "ui/NPC_Julia.png";
}


void func_1335(string var_193_string)
{
	var_193_string = "ui/NPC_Julia_b.png";
}


void func_1337(bool var_86_bool)
{
	var_86_bool = true;
}


void func_1339(int var_194_int)
{
	int var_196_int;
	@GetVariable("branch", var_196_int);
	if(var_196_int == 0) {
		var_194_int = 1;
		return 2;
	EMIT "GOTO 0x54a";
	}
	if(var_196_int == 1) {
		var_194_int = 2;
		return 2;
	}
	var_194_int = 3;
}


void func_1084(void)
{
	bool var_245_bool;
	@CameraSwitchToNormal();
	bool var_246_bool;
	func_1337(var_246_bool);
	if(var_246_bool != 0) {
	} else {
		@HasAnimationTrack(var_245_bool, "head");
		if(var_245_bool == 0) goto Label_1100;
		@UnlookAsync("head");
	}
Label_1100:
	
}


// @pe
void func_1356(object var_34_object)
{
	var_35_bool = GlobalVars[1];
	if(!var_35_bool) { //@nz
		int var_37_int; object var_38_object;
		var_34_object = var_38_object;
		TaskCall(3);
		func_272(var_39_object, var_37_int, var_38_object);
		TaskReturn();
		var_250_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_251_bool = false;
	bool var_252_bool;
	func_1299(var_252_bool, 12);
	if(var_252_bool != 0) {
		var_255_bool = GlobalVars[2];
		if(!var_255_bool) //@nz
			var_251_bool = true;
	}
	if(var_251_bool != 0) {
		int var_257_int; object var_258_object;
		var_34_object = var_258_object;
		TaskCall(1);
		func_13(var_259_object, var_257_int, var_258_object);
		TaskReturn();
		var_316_bool = GlobalVars[2];
		GlobalVars[2] = true;
		return 0;
	}
	int var_317_int; object var_318_object;
	var_34_object = var_318_object;
	TaskCall(5);
	func_516(var_319_object, var_317_int, var_318_object);
	TaskReturn();
}


void func_1101(bool var_48_bool, object var_49_object)
{
	int var_55_int; int var_56_int;
	@GetVariable("voice_common", var_55_int);
	if(var_55_int != 0) {
		bool var_59_bool; object var_60_object;
		var_49_object = var_60_object;
		func_1159(var_59_bool, var_60_object);
		if(!var_59_bool) { //@nz
			bool var_90_bool; object var_91_object;
			var_49_object = var_91_object;
			func_1196(var_90_bool, var_91_object);
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
		func_1196(var_135_bool, var_136_object);
		if(!var_135_bool) { //@nz
			bool var_138_bool; object var_139_object;
			var_49_object = var_139_object;
			func_1159(var_138_bool, var_139_object);
			if(!var_138_bool) { //@nz
				var_48_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1157;
	
Label_1157:
	var_48_bool = true;
	
}


void func_977(bool var_69_bool)
{
	var_69_bool = true;
}


void func_979(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_597(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_341_object, object var_342_object)
{
	var_0_object = var_342_object;
	var_1_object = var_341_object;
	var_3_string = false;
	if(1 != 0) {
		func_655(var_342_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_625;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x259";
	}
Label_625:
	bool var_363_bool;
	func_1337(var_363_bool);
	if(var_363_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1239(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_654;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_654:
		return 0;

	}
	
}


void func_726(object var_0_object)
{
	bool var_17_bool;
	func_1011(var_17_bool);
	if(!var_17_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_854();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_908();
	}
}
EMIT "Return(); Pop(0)";


void func_1239(string var_24_string)
{
	float var_27_float; float var_28_float;
	@lshGetAnimTimes(var_24_string, var_27_float, var_28_float);
	@lshPlayAnimation(var_27_float, var_28_float, false);
}


void func_984(float var_31_float, object var_32_object)
{
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	var_32_object->GetPosition(var_37_cvector);
	var_31_float = (var_37_cvector - var_36_cvector) | (var_37_cvector - var_36_cvector);
}


void func_1246(string var_214_string, bool var_215_bool)
{
	float var_220_float; float var_221_float;
	@lshGetAnimTimes(var_214_string, var_220_float, var_221_float);
	@lshPlayAnimation(var_220_float, var_221_float, var_215_bool);
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_281_object, object var_282_object)
{
	var_0_object = var_282_object;
	var_1_object = var_281_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_282_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_306_bool;
	func_1337(var_306_bool);
	if(var_306_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1239(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_156;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_156:
		return 0;

	}
	
}


void func_992(bool var_24_bool, cvector var_25_cvector)
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
void func_353(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_203_object, object var_204_object)
{
	var_0_object = var_204_object;
	var_1_object = var_203_object;
	var_3_string = false;
	if(1 != 0) {
		func_411(var_204_object, "Neutral");
		var_0_object->SetMessage(518012); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518013, 32562, 19146); //@t
		var_0_object->AddReply(531249, 32565, 32564); //@t
		goto Label_381;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x165";
	}
Label_381:
	bool var_229_bool;
	func_1337(var_229_bool);
	if(var_229_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1239(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_410;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_410:
		return 0;

	}
	
}


void func_1252(bool var_82_bool, string var_83_string)
{
	bool var_85_bool;
	bool var_86_bool;
	func_1337(var_86_bool);
	if(var_86_bool != 0) {
		@lshHasSpeech(var_85_bool, var_83_string);
		if(var_85_bool != 0) {
			@lshPlaySpeech(var_83_string);
			var_82_bool = true;
		}
	}
	var_82_bool = false;
}


void func_1002(bool var_20_bool, object var_21_object)
{
	cvector var_23_cvector;
	var_21_object->GetPosition(var_23_cvector);
	bool var_24_bool; cvector var_25_cvector;
	var_23_cvector = var_25_cvector;
	func_992(var_24_bool, var_25_cvector);
	var_24_bool = var_20_bool;
}


void func_746(bool var_41_bool)
{
	object var_43_object;
	@FindActor(var_43_object, "player");
	if(!var_43_object) //@nz
		var_41_bool = false;
	bool var_46_bool; object var_47_object;
	var_43_object = var_47_object;
	func_1002(var_46_bool, var_47_object);
	var_46_bool = var_41_bool;
}
EMIT "Stack[-1] = 0";


void func_1267(void)
{
	bool var_19_bool;
	func_1337(var_19_bool);
	if(var_19_bool != 0)
		@lshStopSpeech();
}


void func_1011(bool var_17_bool)
{
	bool var_19_bool;
	@IsLoaded(var_19_bool);
	var_19_bool = var_17_bool;
}


void func_1016(bool var_143_bool, object var_144_object, float var_145_float)
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
	func_1280(var_170_cvector, (var_159_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1337(var_185_bool);
	if(var_185_bool != 0) {
	} else {
		@HasAnimationTrack(var_163_bool, "head");
		if(var_163_bool == 0) goto Label_1078;
		@LookAsyncCamera("head");
	}
Label_1078:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_143_bool = true;
	
}


void func_761(object var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0);
	var_94_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_93_float, var_94_float);
}


void func_1274(object var_50_object)
{
	object var_52_object;
	@self(var_52_object);
	var_52_object = var_50_object;
}
EMIT "Stack[-1] = 0";


void func_766(bool var_24_bool)
{
	object var_27_object;
	@FindActor(var_27_object, "player");
	if(!var_27_object) { //@nz
		var_24_bool = false;
		return 4;
	}
	float var_31_float; object var_32_object;
	func_984(var_31_float, var_32_object);
	if(var_31_float > 90000.0) {
		var_24_bool = false;
		return 4;
	}
	bool var_28_bool;
	@CanSee(var_28_bool, var_32_object);
	var_28_bool = var_24_bool;
}
EMIT "Stack[-2] = 0";


