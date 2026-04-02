// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, int var_12_int, int var_13_int, bool var_14_bool, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool)
	{
		if(1 != 0) {
			func_1280();
			if(var_18_bool == 34719) {
				object var_23_object; object var_24_object;
				var_23_object = var_1_object;
				var_24_object = var_0_object;
				func_1391();
				object var_88_object = var_1_object;
				func_1432(var_0_object);
			}
			if(var_18_bool == 37504) {
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_1391();
				object var_118_object = var_1_object;
				func_1432(var_0_object);
			}
			if(var_18_bool == 37503) {
				object var_122_object; object var_123_object;
				var_122_object = var_1_object;
				var_123_object = var_0_object;
				func_1391();
				object var_124_object = var_1_object;
				func_1432(var_0_object);
			}
			if(var_17_bool == 34716) {
				bool var_128_bool;
				func_1448(var_1_object);
				if(var_128_bool != 0) {
					object var_136_object; object var_137_object;
					var_136_object = var_1_object;
					var_137_object = var_0_object;
					func_1385();
					func_201(var_18_bool, "Neutral");
					var_0_object->SetMessage(533196); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(535791, 37488, 37477); //@t
					var_0_object->AddReply(535798, 37488, 37485); //@t
					return 0;
				}
				bool var_164_bool = false;
				bool var_165_bool;
				func_1460(var_1_object);
				if(var_165_bool != 0) {
					bool var_171_bool;
					func_1472(var_1_object);
					if(var_171_bool != 0)
						var_164_bool = true;
				}
				if(var_164_bool != 0) {
					object var_177_object; object var_178_object;
					var_177_object = var_1_object;
					var_178_object = var_0_object;
					func_1426();
					func_201(var_18_bool, "Neutral");
					var_0_object->SetMessage(533221); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(533222, 37473, 34742); //@t
					var_0_object->AddReply(535790, -1, 37476); //@t
					return 0;
				}
				func_201(var_18_bool, "Neutral");
				var_0_object->SetMessage(533200); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533201, -1, 34721); //@t
				var_0_object->AddReply(535786, -1, 37472); //@t
				return 0;
			}
			if(var_17_bool == 37473) {
				func_201(var_18_bool, "Neutral");
				var_0_object->SetMessage(535787); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535788, -1, 37474); //@t
				var_0_object->AddReply(535789, -1, 37475); //@t
				return 0;
			}
			if(var_17_bool == 37488) {
				func_201(var_18_bool, "Neutral");
				var_0_object->SetMessage(535799); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535800, 37491, 37490); //@t
				return 0;
			}
			if(var_17_bool == 37491) {
				func_201(var_18_bool, "Neutral");
				var_0_object->SetMessage(535801); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535802, 37493, 37492); //@t
				var_0_object->AddReply(535806, 37498, 37497); //@t
				return 0;
			}
			if(var_17_bool == 37498) {
				func_201(var_18_bool, "Neutral");
				var_0_object->SetMessage(535807); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535808, 37500, 37499); //@t
				return 0;
			}
			if(var_17_bool == 37500) {
				func_201(var_18_bool, "Neutral");
				var_0_object->SetMessage(535809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535810, 37493, 37501); //@t
				var_0_object->AddReply(535811, -1, 37503); //@t
				return 0;
			}
			if(var_17_bool == 37493) {
				func_201(var_18_bool, "Neutral");
				var_0_object->SetMessage(535803); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535804, 37495, 37494); //@t
				var_0_object->AddReply(535812, -1, 37504); //@t
				return 0;
			}
			if(var_17_bool == 37495) {
				func_201(var_18_bool, "Neutral");
				var_0_object->SetMessage(535805); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533199, -1, 34719); //@t
				return 0;
			}
			var_3_string = true;
			bool var_258_bool;
			func_1383(var_258_bool);
			if(var_258_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe0";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, int var_12_int, int var_13_int, bool var_14_bool, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool)
	{
		if(1 != 0) {
			func_1280();
			if(var_17_bool == 42557) {
				func_658(var_18_bool, "Neutral");
				var_0_object->SetMessage(540548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540549, -1, 42558); //@t
				var_0_object->AddReply(540797, -1, 42846); //@t
				return 0;
			}
			var_3_string = true;
			bool var_47_bool;
			func_1383(var_47_bool);
			if(var_47_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2a9";
	
	}

}


maintask task_4
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, bool var_16_bool)
	{
		func_751(var_16_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, bool var_16_bool, object var_17_object)
	{
		func_885(var_16_bool, var_17_object);
		bool var_21_bool;
		func_1345(var_21_bool, 7);
		if(var_21_bool != 0) {
			int var_29_int; object var_30_object;
			var_17_object = var_30_object;
			TaskCall(0);
			func_0(var_31_object, var_29_int, var_30_object);
			TaskReturn();
			return 0;
		}
		int var_204_int; object var_205_object;
		var_17_object = var_205_object;
		TaskCall(2);
		func_519(var_206_object, var_204_int, var_205_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, bool var_16_bool, string var_17_string)
	{
		if(var_17_string == "cleanup")
			func_769(var_17_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, bool var_16_bool)
	{
		if(var_6_object != 0)
			func_885(var_15_bool, var_16_bool);
		bool var_21_bool = false;
		if(var_5_object != 0) {
			bool var_23_bool;
			func_818(var_23_bool);
			if(var_23_bool != 0)
				var_21_bool = true;
		}
		if(var_21_bool != 0) {
			object var_24_object;
			func_1287(var_24_object);
			@RemoveActor(var_24_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, bool var_16_bool, int var_17_int)
	{
		if(var_17_int == 10) {
			bool var_20_bool;
			func_847(var_15_bool, var_16_bool, var_17_int, var_20_bool);
			if(var_20_bool != 0) {
				if(!var_2_object) { //@nz
					func_1254(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_1280(void)
{
	bool var_20_bool;
	func_1383(var_20_bool);
	if(var_20_bool != 0)
		@lshStopSpeech();
}


void func_0(object var_0_object, int var_29_int, object var_30_object)
{
	var_0_object = var_30_object;
	bool var_40_bool; object var_41_object;
	var_30_object = var_41_object;
	func_998(var_40_bool, var_41_object, 70.0);
	if(!var_40_bool) { //@nz
		var_29_int = -2;
		return 8;
	}
	object var_36_object;
	@CreateDialog(var_36_object);
	int var_88_int;
	func_1377(var_88_int);
	var_36_object->SetNPCName(var_88_int);
	int var_89_int;
	func_1375(var_89_int);
	var_36_object->SetNPCDescription(var_89_int);
	string var_90_string;
	func_1379(var_90_string);
	var_36_object->SetPhoto(var_90_string);
	string var_91_string;
	func_1381(var_91_string);
	var_36_object->SetPhoto2(var_91_string);
	int var_92_int;
	func_1601(var_92_int);
	var_36_object->SetPlayerName(var_92_int);
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0) {
		var_29_int = -2;
		return 8;
	}
	@DoDialog(var_36_object);
	object var_101_object; object var_102_object;
	var_30_object = var_101_object;
	var_36_object = var_102_object;
	TaskCall(1);
	func_74(var_103_object, var_104_object, var_105_string, var_106_bool, var_101_object, var_102_object);
	TaskReturn();
	bool var_39_bool;
	var_36_object->IsDialogEnd(var_39_bool);
	
	for(;;) {
		var_195_bool = !var_39_bool; //@nz
		if(var_195_bool == 0) goto Label_63;
		@sync();
		var_36_object->IsDialogEnd(var_39_bool);
	}
	
Label_63:
	object var_196_object;
	var_30_object = var_196_object;
	func_1067();
	@StopDialog(var_36_object);
	var_36_object->GetReturnValue(-1);
	int var_38_int = var_29_int;
}
EMIT "Stack[-4] = 0";


void func_769(object var_5_object)
{
	var_5_object = true;
	bool var_20_bool = false;
	bool var_21_bool;
	func_993(var_21_bool);
	if(!var_21_bool) { //@nz
		bool var_25_bool;
		func_818(var_25_bool);
		if(var_25_bool != 0)
			var_20_bool = true;
	}
	if(var_20_bool != 0) {
		object var_26_object;
		func_1287(var_26_object);
		@RemoveActor(var_26_object);
	}
}


void func_899(void)
{
	int var_44_int; int var_45_int; bool var_46_bool; float var_47_float; bool var_48_bool;
	@WaitForAnimEnd();
	bool var_49_bool;
	func_993(var_49_bool);
	if(!var_49_bool) //@nz
		return 14;
	int var_51_int;
	func_1358(var_51_int);
	int var_42_int;
	var_51_int = var_42_int;
	int var_43_int = 0;
	
	for(;;) {
		bool var_64_bool = false;
		if(var_43_int < 5) {
			bool var_67_bool;
			func_993(var_67_bool);
			if(var_67_bool != 0)
				var_64_bool = true;
		}
		if(var_64_bool != 0) {
			@irand(var_44_int, 3);
			if(var_44_int == 0) {
				if(var_42_int == 0) goto Label_946;
				@irand(var_45_int, var_42_int);
				string var_73_string; int var_74_int;
				var_45_int = var_74_int;
				func_1351(var_73_string, var_74_int);
				@PlayAnimation("all", var_73_string);
				@WaitForAnimEnd(var_46_bool);
				if(!var_46_bool) { //@nz
				} else {
			} else {
			if(var_44_int == 1) {
				@rand(var_47_float, 4);
				@Sleep((var_47_float + 1), var_48_bool);
				if(!var_48_bool) { //@nz
					goto Label_975;
				}
			} else if(var_43_int != 0) {
				goto Label_975;
			}
			}
					bool var_76_bool;
					func_978(var_76_bool);
					var_77_bool = !var_76_bool; //@nz
					if(var_77_bool == 0) goto Label_970;
			}
		}
	Label_975:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_970:
		@ResetAAS();
		var_43_int += 1;
	}
	
}


void func_1287(object var_24_object)
{
	object var_26_object;
	@self(var_26_object);
	var_26_object = var_24_object;
}
EMIT "Stack[-1] = 0";


void func_519(object var_0_object, int var_204_int, object var_205_object)
{
	var_0_object = var_205_object;
	bool var_215_bool; object var_216_object;
	var_205_object = var_216_object;
	func_998(var_215_bool, var_216_object, 70.0);
	if(!var_215_bool) { //@nz
		var_204_int = -2;
		return 8;
	}
	object var_211_object;
	@CreateDialog(var_211_object);
	int var_219_int;
	func_1377(var_219_int);
	var_211_object->SetNPCName(var_219_int);
	int var_220_int;
	func_1375(var_220_int);
	var_211_object->SetNPCDescription(var_220_int);
	string var_221_string;
	func_1379(var_221_string);
	var_211_object->SetPhoto(var_221_string);
	string var_222_string;
	func_1381(var_222_string);
	var_211_object->SetPhoto2(var_222_string);
	int var_223_int;
	func_1601(var_223_int);
	var_211_object->SetPlayerName(var_223_int);
	bool var_212_bool;
	@IsOverrideActive(var_212_bool);
	if(var_212_bool != 0) {
		var_204_int = -2;
		return 8;
	}
	@DoDialog(var_211_object);
	bool var_225_bool; object var_226_object;
	object var_227_object;
	func_1287(var_227_object);
	var_227_object = var_226_object;
	func_1085(var_225_bool, var_226_object);
	object var_315_object; object var_316_object;
	var_205_object = var_315_object;
	var_211_object = var_316_object;
	TaskCall(3);
	func_600(var_317_object, var_318_object, var_319_string, var_320_bool, var_315_object, var_316_object);
	TaskReturn();
	bool var_214_bool;
	var_211_object->IsDialogEnd(var_214_bool);
	
	for(;;) {
		var_345_bool = !var_214_bool; //@nz
		if(var_345_bool == 0) goto Label_589;
		@sync();
		var_211_object->IsDialogEnd(var_214_bool);
	}
	
Label_589:
	object var_346_object;
	var_205_object = var_346_object;
	func_1067();
	@StopDialog(var_211_object);
	var_211_object->GetReturnValue(-1);
	int var_213_int = var_204_int;
}
EMIT "Stack[-4] = 0";


void func_1293(cvector var_67_cvector, cvector var_68_cvector)
{
	float var_71_float = sqrt(var_68_cvector | var_68_cvector);
	if(var_71_float < 0.000001)
		var_67_cvector = [0.0, 0.0, 0.0];
	var_67_cvector = var_68_cvector / var_71_float;
}


void func_1551(object var_29_object)
{
	object var_32_object; object var_33_object;
	@GetMainOutdoorScene(var_32_object);
	if(var_32_object == null) {
		@Trace("Can't find main outdoor scene");
		var_33_object = null;
		var_33_object = var_29_object;
	}
	var_32_object->GetMap(var_33_object);
	var_33_object = var_29_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1426(void)
{
	@SetVariable("ood7Nudegirl2", 1);
}


// @pe
void func_658(object var_2_object, string var_322_string)
{
	bool var_323_bool;
	func_1383(var_323_bool);
	if(!var_323_bool) //@nz
		return 0;
	if(var_322_string == var_2_object)
		return 0;
	string var_326_string; bool var_327_bool;
	var_322_string = var_326_string;
	if(var_322_string == "")
		var_327_bool = false;
	else
		var_327_bool = true;
	func_1239(var_326_string, var_327_bool);
	var_2_object = var_322_string;
	
}


void func_1303(int var_110_int, string var_111_string)
{
	int var_113_int;
	@GetVariable(var_111_string, var_113_int);
	var_113_int = var_110_int;
}


// @pe
void func_1432(object var_89_object)
{
	object var_93_object;
	func_1551(var_93_object);
	object var_90_object;
	var_93_object = var_90_object;
	func_1568(var_90_object, "pt_map_andrei", (float)2);
	object var_113_object;
	func_1551(var_113_object);
	var_89_object->ShowMap(var_113_object);
}


void func_1308(object var_74_object, string var_75_string)
{
	object var_78_object;
	@GetMainOutdoorScene(var_78_object);
	object var_79_object;
	@AddBlankActor(var_79_object, var_78_object, var_75_string, (var_75_string + ".bin"));
	var_79_object = var_74_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1180(bool var_267_bool, object var_268_object)
{
	bool var_276_bool; int var_277_int; string var_278_string;
	int var_280_int;
	func_1336(var_280_int);
	string var_274_string = ("d" + var_280_int) + "m";
	int var_275_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_268_object->HasProperty((var_274_string + (var_275_int + 1)), var_276_bool);
			if(!var_276_bool) { //@nz
			} else {
				var_275_int += 1;
			}
		}
		if(!var_275_int) { //@nz
			var_267_bool = false;
			return 10;
		}
		var_277_int = 0;
		if(var_275_int > 1)
			@irand(var_277_int, var_275_int);
		var_268_object->GetProperty((var_274_string + (var_277_int + 1)), var_278_string);
		bool var_294_bool; string var_295_string;
		var_278_string = var_295_string;
		func_1265(var_294_bool, var_295_string);
		var_294_bool = var_267_bool;
		return 10;

	}
}


void func_1568(object var_90_object, string var_91_string, float var_92_float)
{
	object var_100_object;
	@GetMainOutdoorScene(var_100_object);
	if(var_100_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_98_cvector;
	cvector var_99_cvector;
	bool var_101_bool;
	var_100_object->GetLocator(var_91_string, var_101_bool, var_98_cvector, var_99_cvector);
	if(!var_101_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_91_string) + " doesnt exist");
	var_100_object->GetMap(var_90_object);
	if(var_90_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_111_float = GetByIndex(var_98_cvector, 0);
	var_112_float = GetByIndex(var_98_cvector, 2);
	var_90_object->SetMapParams(var_111_float, var_112_float, var_92_float);
}
EMIT "Stack[-2] = 0";


void func_1319(bool var_82_bool, string var_83_string, string var_84_string)
{
	object var_86_object;
	@FindActor(var_86_object, var_83_string);
	if(var_86_object == null)
		var_82_bool = false;
	@Trigger(var_86_object, var_84_string);
	var_82_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1448(bool var_108_bool)
{
	int var_110_int;
	func_1303(var_110_int, "ood7Nudegirl1");
	if(var_110_int == 0) {
		var_108_bool = true;
		return 0;
	}
	var_108_bool = false;
}


void func_1067(void)
{
	bool var_198_bool;
	@CameraSwitchToNormal(true);
	bool var_200_bool;
	func_1383(var_200_bool);
	if(var_200_bool != 0) {
	} else {
		@HasAnimationTrack(var_198_bool, "head");
		if(var_198_bool == 0) goto Label_1084;
		@UnlookAsync("head");
	}
Label_1084:
	
}


void func_818(bool var_23_bool)
{
	var_23_bool = true;
}


void func_1331(float var_40_float)
{
	float var_42_float;
	@GetGameTime(var_42_float);
	var_42_float = var_40_float;
}


// @pe
void func_1460(bool var_163_bool)
{
	int var_165_int;
	func_1303(var_165_int, "d7q04");
	if(var_165_int == 1000)
		var_163_bool = true;
	var_163_bool = false;
}


// @pe
void func_820(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_26_float, float var_27_float)
{
	bool var_28_bool;
	func_993(var_28_bool);
	if(!var_28_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_26_float;
	var_1_object = var_27_float;
	@SetTimer(10, 1.0);
	func_899();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1336(int var_23_int)
{
	float var_25_float;
	@GetGameTime(var_25_float);
	var_23_int = 1 + (var_25_float / 24);
}


void func_1085(bool var_225_bool, object var_226_object)
{
	int var_232_int; int var_233_int;
	@GetVariable("voice_common", var_232_int);
	if(var_232_int != 0) {
		bool var_236_bool; object var_237_object;
		var_226_object = var_237_object;
		func_1143(var_236_bool, var_237_object);
		if(!var_236_bool) { //@nz
			bool var_267_bool; object var_268_object;
			var_226_object = var_268_object;
			func_1180(var_267_bool, var_268_object);
			if(!var_267_bool) { //@nz
				var_225_bool = false;
				return 4;
			}
		}
		@irand(var_233_int, 2);
		if(var_233_int != 0)
			@SetVariable("voice_common", ((var_232_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_307_bool; object var_308_object;
		var_226_object = var_308_object;
		func_1180(var_307_bool, var_308_object);
		if(!var_307_bool) { //@nz
			bool var_310_bool; object var_311_object;
			var_226_object = var_311_object;
			func_1143(var_310_bool, var_311_object);
			if(!var_310_bool) { //@nz
				var_225_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1141;
	
Label_1141:
	var_225_bool = true;
	
}


// @pe
void func_1472(bool var_169_bool)
{
	int var_171_int;
	func_1303(var_171_int, "ood7Nudegirl2");
	if(var_171_int == 0) {
		var_169_bool = true;
		return 0;
	}
	var_169_bool = false;
}


void func_1601(int var_92_int)
{
	int var_94_int;
	@GetVariable("branch", var_94_int);
	if(var_94_int == 0) {
		var_92_int = 1;
		return 2;
	EMIT "GOTO 0x650";
	}
	if(var_94_int == 1) {
		var_92_int = 2;
		return 2;
	}
	var_92_int = 3;
}


// @pe
void func_1345(bool var_21_bool, int var_22_int)
{
	int var_23_int;
	func_1336(var_23_int);
	var_21_bool = var_23_int == var_22_int;
}


void func_1223(string var_146_string)
{
	bool var_150_bool; float var_151_float; float var_152_float;
	@lshHasAnimation(var_150_bool, var_146_string);
	if(var_150_bool != 0) {
		@lshGetAnimTimes(var_146_string, var_151_float, var_152_float);
		@lshPlayAnimation(var_151_float, var_152_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_146_string);
	}
	
}


void func_1351(string var_57_string, int var_58_int)
{
	string var_60_string = "idle";
	if(var_58_int != 0)
		var_60_string += var_58_int;
	var_60_string = var_57_string;
}


// @pe
void func_201(object var_2_object, string var_120_string)
{
	bool var_121_bool;
	func_1383(var_121_bool);
	if(!var_121_bool) //@nz
		return 0;
	if(var_120_string == var_2_object)
		return 0;
	string var_124_string; bool var_125_bool;
	var_120_string = var_124_string;
	if(var_120_string == "")
		var_125_bool = false;
	else
		var_125_bool = true;
	func_1239(var_124_string, var_125_bool);
	var_2_object = var_120_string;
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_101_object, object var_102_object)
{
	var_0_object = var_102_object;
	var_1_object = var_101_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_108_bool;
		func_1448(var_1_object);
		if(var_108_bool != 0) {
			object var_116_object; object var_117_object;
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_1385();
			func_201(var_102_object, "Neutral");
			var_0_object->SetMessage(533196); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(535791, 37488, 37477); //@t
			var_0_object->AddReply(535798, 37488, 37485); //@t
		} else {
					bool var_162_bool = false;
					bool var_163_bool;
					func_1460(var_1_object);
					if(var_163_bool != 0) {
						bool var_169_bool;
						func_1472(var_1_object);
						if(var_169_bool != 0)
							var_162_bool = true;
					}
					if(var_162_bool == 0) goto Label_149;
					object var_175_object; object var_176_object;
					var_175_object = var_1_object;
					var_176_object = var_0_object;
					func_1426();
					func_201(var_102_object, "Neutral");
					var_0_object->SetMessage(533221); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(533222, 37473, 34742); //@t
					var_0_object->AddReply(535790, -1, 37476); //@t
		}
	}
Label_171:
	for(;;) {
		bool var_144_bool;
		func_1383(var_144_bool);
		if(var_144_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1223(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_200;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_200:
			return 0;

		}

	}
	
Label_149:
	func_201(var_102_object, "Neutral");
	var_0_object->SetMessage(533200); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(533201, -1, 34721); //@t
	var_0_object->AddReply(535786, -1, 37472); //@t
	goto Label_171;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_1484(void)
{
	object var_44_object;
	@CreateDiaryEntry(var_44_object, 637, 2, 533223);
	bool var_48_bool; object var_49_object;
	var_44_object = var_49_object;
	func_1523(var_48_bool, var_49_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1358(int var_51_int)
{
	int var_54_int; bool var_55_bool;
	var_54_int = 0;
	
	for(;;) {
		string var_57_string; int var_58_int;
		var_54_int = var_58_int;
		func_1351(var_57_string, var_58_int);
		@HasAnimation(var_55_bool, "all", var_57_string);
		if(!var_55_bool) //@nz
			break;
		var_54_int += 1;
	}
	var_54_int = var_51_int;
}


void func_847(object var_0_object, object var_1_object, bool var_4_bool, bool var_20_bool)
{
	if(var_4_bool == null)
		var_20_bool = false;
	float var_24_float;
	func_985(var_24_float, var_4_bool);
	float var_22_float = sqrt(var_24_float);
	if(var_2_object != 0)
		var_22_float -= var_1_object;
	var_20_bool = var_22_float < var_0_object;
}


void func_978(bool var_76_bool)
{
	var_76_bool = true;
}


void func_980(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1239(string var_124_string, bool var_125_bool)
{
	bool var_131_bool; float var_132_float; float var_133_float;
	@lshHasAnimation(var_131_bool, var_124_string);
	if(var_131_bool != 0) {
		@lshGetAnimTimes(var_124_string, var_132_float, var_133_float);
		@lshPlayAnimation(var_132_float, var_133_float, var_125_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_124_string);
	}
	
}


// @pe
void func_600(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_315_object, object var_316_object)
{
	var_0_object = var_316_object;
	var_1_object = var_315_object;
	var_3_string = false;
	if(1 != 0) {
		func_658(var_316_object, "Neutral");
		var_0_object->SetMessage(540548); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540549, -1, 42558); //@t
		var_0_object->AddReply(540797, -1, 42846); //@t
		goto Label_628;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x25c";
	}
Label_628:
	bool var_337_bool;
	func_1383(var_337_bool);
	if(var_337_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1223(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_657;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_657:
		return 0;

	}
	
}


void func_985(float var_24_float, object var_25_object)
{
	cvector var_29_cvector;
	@GetPosition(var_29_cvector);
	cvector var_30_cvector;
	var_25_object->GetPosition(var_30_cvector);
	var_24_float = (var_30_cvector - var_29_cvector) | (var_30_cvector - var_29_cvector);
}


void func_1497(void)
{
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 638, 2, 533224);
	bool var_71_bool; object var_72_object;
	var_67_object = var_72_object;
	func_1523(var_71_bool, var_72_object, 637);
}
EMIT "Stack[-1] = 0";


void func_1375(int var_89_int)
{
	var_89_int = 533305;
}


void func_1377(int var_88_int)
{
	var_88_int = 533304;
}


void func_993(bool var_28_bool)
{
	bool var_30_bool;
	@IsLoaded(var_30_bool);
	var_30_bool = var_28_bool;
}


void func_1379(string var_90_string)
{
	var_90_string = "ui/NPC_Citizen1.png";
}


void func_1381(string var_91_string)
{
	var_91_string = "ui/NPC_Citizen1_b.png";
}


void func_998(bool var_40_bool, object var_41_object, float var_42_float)
{
	cvector var_53_cvector; bool var_60_bool;
	var_41_object->GetPosition(var_53_cvector);
	float var_52_float;
	var_41_object->GetEyesHeight(var_52_float);
	var_61_float = GetByIndex(var_53_cvector, 1);
	SetByIndex(var_53_cvector, 1) = (var_61_float + var_52_float);
	cvector var_54_cvector;
	@GetPosition(var_54_cvector);
	@GetEyesHeight(var_52_float);
	var_62_float = GetByIndex(var_54_cvector, 1);
	SetByIndex(var_54_cvector, 1) = (var_62_float + var_52_float);
	cvector var_55_cvector = var_53_cvector - var_54_cvector;
	var_63_float = GetByIndex(var_55_cvector, 1);
	SetByIndex(var_55_cvector, 1) = (float)0;
	var_65_float = sqrt(var_55_cvector | var_55_cvector);
	var_55_cvector /= var_65_float;
	cvector var_56_cvector = -var_55_cvector;
	cvector var_67_cvector;
	func_1293(var_67_cvector, (var_56_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_57_cvector = ((var_55_cvector * var_42_float) + (var_67_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_59_bool;
	@IsOverrideActive(var_59_bool);
	if(var_59_bool != 0)
		var_40_bool = false;
	@StopWorld();
	@CameraTransit((var_54_cvector + var_57_cvector), var_56_cvector, true);
	var_81_float = GetByIndex(var_57_cvector, 0);
	var_82_float = GetByIndex(var_57_cvector, 2);
	@Rotate(var_81_float, var_82_float);
	bool var_83_bool;
	func_1383(var_83_bool);
	if(var_83_bool != 0) {
	} else {
		@HasAnimationTrack(var_60_bool, "head");
		if(var_60_bool == 0) goto Label_1061;
		@LookAsyncCamera("head");
	}
Label_1061:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_40_bool = true;
	
}


void func_1383(bool var_83_bool)
{
	var_83_bool = false;
}


void func_1254(object var_34_object)
{
	float var_37_float;
	var_34_object->GetEyesHeight(var_37_float);
	cvector var_38_cvector = [0.0, 0.0, 0.0];
	var_39_float = GetByIndex(var_38_cvector, 1);
	var_37_float = var_39_float;
	SetByIndex(var_38_cvector, 1) = var_39_float;
	@LookAsync(var_34_object, "head", var_38_cvector);
}


// @pe
void func_1385(void)
{
	@SetVariable("ood7Nudegirl1", 1);
}


void func_1510(object var_57_object)
{
	object var_59_object;
	@GetDiaryRoot(var_59_object);
	if(!var_59_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_57_object = false;
	}
	var_59_object = var_57_object;
}
EMIT "Stack[-1] = 0";


void func_1391(void)
{
	@SetVariable("d7q04", 1);
	object var_29_object;
	func_1551(var_29_object);
	object var_26_object;
	var_29_object = var_26_object;
	float var_40_float;
	func_1331(var_40_float);
	var_26_object->AddMark("d7q04NudeGotoAndrei", "pt_map_andrei", 0, 515352, var_40_float);
	func_1484();
	func_1497();
	object var_74_object;
	func_1308(var_74_object, "quest_d7_04");
	bool var_82_bool;
	func_1319(var_82_bool, "quest_d7_04", "init_kabak");
}
EMIT "Stack[-1] = 0";


void func_751(object var_6_object, float var_17_float, float var_18_float)
{
	float var_19_float; bool var_20_bool; float var_21_float; bool var_22_bool;
	var_6_object = false;
	
	for(;;) {
		@rand(var_21_float, 3);
		@Sleep((var_21_float + 3), var_22_bool);
		var_6_object = true;
		float var_26_float; float var_27_float;
		var_17_float = var_26_float;
		func_820(var_27_float, var_19_float, var_20_bool, var_21_float, var_22_bool, var_26_float, var_27_float);
		var_6_object = false;
	}
}
EMIT "Return(); Pop(4)";


void func_1265(bool var_259_bool, string var_260_string)
{
	bool var_262_bool;
	bool var_263_bool;
	func_1383(var_263_bool);
	if(var_263_bool != 0) {
		@lshHasSpeech(var_262_bool, var_260_string);
		if(var_262_bool != 0) {
			@lshPlaySpeech(var_260_string);
			var_259_bool = true;
		}
	}
	var_259_bool = false;
}


void func_1523(bool var_48_bool, object var_49_object, int var_50_int)
{
	object var_57_object;
	func_1510(var_57_object);
	object var_54_object;
	var_57_object = var_54_object;
	object var_55_object;
	var_54_object->Find(var_50_int, var_55_object);
	if(!var_55_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_50_int);
		var_48_bool = false;
	}
	var_55_object->AddChild(var_49_object);
	@SendWorldWndMessage(7);
	int var_56_int;
	var_49_object->GetCategory(var_56_int);
	@SetDiarySection(var_56_int);
	var_48_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_885(object var_2_object, string var_3_string)
{
	func_980();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_1143(bool var_236_bool, object var_237_object)
{
	string var_243_string; bool var_245_bool; int var_246_int; string var_247_string;
	var_243_string = "c";
	int var_244_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_237_object->HasProperty((var_243_string + (var_244_int + 1)), var_245_bool);
			if(!var_245_bool) { //@nz
			} else {
				var_244_int += 1;
			}
		}
		if(!var_244_int) { //@nz
			var_236_bool = false;
			return 10;
		}
		var_246_int = 0;
		if(var_244_int > 1)
			@irand(var_246_int, var_244_int);
		var_237_object->GetProperty((var_243_string + (var_246_int + 1)), var_247_string);
		bool var_259_bool; string var_260_string;
		var_247_string = var_260_string;
		func_1265(var_259_bool, var_260_string);
		var_259_bool = var_236_bool;
		return 10;

	}
}


