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
			func_1264();
			if(var_16_bool == 36906) {
				func_157(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_16_bool == 36953) {
				func_157(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_16_bool == 36957) {
				func_157(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_64_bool;
			func_1334(var_64_bool);
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
			func_1264();
			if(var_16_bool == 21972) {
				func_411(var_17_cvector, "Neutral");
				var_0_object->SetMessage(520759); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520760, 21974, 21973); //@t
				var_0_object->AddReply(520766, 21976, 21979); //@t
				return 0;
			}
			if(var_16_bool == 21974) {
				func_411(var_17_cvector, "Neutral");
				var_0_object->SetMessage(520761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520762, 21976, 21975); //@t
				return 0;
			}
			if(var_16_bool == 21976) {
				func_411(var_17_cvector, "Neutral");
				var_0_object->SetMessage(520763); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520764, -1, 21977); //@t
				var_0_object->AddReply(520765, -1, 21978); //@t
				return 0;
			}
			var_3_string = true;
			bool var_58_bool;
			func_1334(var_58_bool);
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
			func_1264();
			if(var_16_int == 42563) {
				func_655(var_17_cvector, "Neutral");
				var_0_object->SetMessage(540554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540555, -1, 42564); //@t
				var_0_object->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_string = true;
			bool var_41_bool;
			func_1334(var_41_bool);
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
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		func_723(var_15_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, int var_16_int)
	{
		if(var_16_int == 10) {
			func_794();
			bool var_20_bool = false;
			bool var_21_bool;
			func_1008(var_21_bool);
			if(var_21_bool != 0) {
				bool var_24_bool;
				func_763(var_24_bool);
				if(var_24_bool != 0)
					var_20_bool = true;
			}
			if(var_20_bool != 0) {
				bool var_41_bool;
				func_743(var_41_bool);
				if(var_41_bool != 0) {
					bool var_60_bool; object var_61_object;
					object var_62_object;
					func_1271(var_62_object);
					var_62_object = var_61_object;
					func_1156(var_60_bool, var_61_object);
				}
			} else {
				func_758(var_16_int);
				func_785();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		func_976();
		func_794();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
		{
		@StopGroup0();
		func_794();
		func_1236("Neutral");
		func_785();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_16_bool != 0)
			func_785();
		else
			func_1236("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, object var_16_object)
	{
		bool var_18_bool;
		@IsOverrideActive(var_18_bool);
		if(!var_18_bool) { //@nz
			disable OnUse;
			func_976();
			bool var_20_bool; object var_21_object;
			var_16_object = var_21_object;
			func_999(var_20_bool, var_21_object);
			enable OnUse;
			object var_34_object;
			var_16_object = var_34_object;
			func_1353(var_34_object);
			func_1236("Neutral");
			func_794();
			func_785();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_20_bool;
	func_1008(var_20_bool);
	if(!var_20_bool) goto Label_0; //@nz
}


void func_1156(bool var_63_bool, object var_64_object)
{
	string var_70_string; bool var_72_bool; int var_73_int; string var_74_string;
	var_70_string = "c";
	int var_71_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_64_object->HasProperty((var_70_string + (var_71_int + 1)), var_72_bool);
			if(!var_72_bool) { //@nz
			} else {
				var_71_int += 1;
			}
		}
		if(!var_71_int) { //@nz
			var_63_bool = false;
			return 10;
		}
		var_73_int = 0;
		if(var_71_int > 1)
			@irand(var_73_int, var_71_int);
		var_64_object->GetProperty((var_70_string + (var_73_int + 1)), var_74_string);
		bool var_86_bool; string var_87_string;
		var_74_string = var_87_string;
		func_1249(var_86_bool, var_87_string);
		var_86_bool = var_63_bool;
		return 10;

	}
}


void func_516(object var_0_object, int var_323_int, object var_324_object)
{
	var_0_object = var_324_object;
	bool var_334_bool; object var_335_object;
	object var_336_object;
	func_1271(var_336_object);
	var_336_object = var_335_object;
	func_1098(var_334_bool, var_335_object);
	bool var_337_bool; object var_338_object;
	var_324_object = var_338_object;
	func_1013(var_337_bool, var_338_object, 70.0);
	if(!var_337_bool) { //@nz
		var_323_int = -2;
		return 8;
	}
	object var_330_object;
	@CreateDialog(var_330_object);
	int var_341_int;
	func_1328(var_341_int);
	var_330_object->SetNPCName(var_341_int);
	int var_342_int;
	func_1326(var_342_int);
	var_330_object->SetNPCDescription(var_342_int);
	string var_343_string;
	func_1330(var_343_string);
	var_330_object->SetPhoto(var_343_string);
	string var_344_string;
	func_1332(var_344_string);
	var_330_object->SetPhoto2(var_344_string);
	int var_345_int;
	func_1336(var_345_int);
	var_330_object->SetPlayerName(var_345_int);
	bool var_331_bool;
	@IsOverrideActive(var_331_bool);
	if(var_331_bool != 0) {
		var_323_int = -2;
		return 8;
	}
	@DoDialog(var_330_object);
	object var_347_object; object var_348_object;
	var_324_object = var_347_object;
	var_330_object = var_348_object;
	TaskCall(6);
	func_597(var_349_object, var_350_object, var_351_string, var_352_bool, var_347_object, var_348_object);
	TaskReturn();
	bool var_333_bool;
	var_330_object->IsDialogEnd(var_333_bool);
	
	for(;;) {
		var_377_bool = !var_333_bool; //@nz
		if(var_377_bool == 0) goto Label_586;
		@sync();
		var_330_object->IsDialogEnd(var_333_bool);
	}
	
Label_586:
	object var_378_object;
	var_324_object = var_378_object;
	func_1081();
	@StopDialog(var_330_object);
	var_330_object->GetReturnValue(-1);
	int var_332_int = var_323_int;
}
EMIT "Stack[-4] = 0";


void func_1287(int var_107_int)
{
	float var_109_float;
	@GetGameTime(var_109_float);
	var_107_int = 1 + (var_109_float / 24);
}


void func_905(void)
{
	bool var_42_bool; int var_43_int; int var_44_int; bool var_45_bool;
	@WaitForAnimEnd();
	bool var_46_bool;
	func_1008(var_46_bool);
	if(!var_46_bool) //@nz
		return 12;
	int var_48_int;
	func_1309(var_48_int);
	int var_40_int;
	var_48_int = var_40_int;
	int var_41_int = 0;
	
	for(;;) {
		bool var_61_bool = false;
		if(var_41_int < 5) {
			bool var_64_bool;
			func_1008(var_64_bool);
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
			func_1302(var_75_string, var_76_int);
			@PlayAnimation("all", var_75_string);
			@WaitForAnimEnd(var_45_bool);
			var_77_bool = !var_45_bool; //@nz
			if(var_77_bool == 0) goto Label_960;
			goto Label_971;
			}
				Label_960:
					bool var_68_bool;
					func_974(var_68_bool);
					var_69_bool = !var_68_bool; //@nz
					if(var_69_bool == 0) goto Label_966;
			}
		}
	Label_971:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_966:
		@ResetAAS();
		var_41_int += 1;
	}
	
}


void func_13(object var_0_object, int var_262_int, object var_263_object)
{
	var_0_object = var_263_object;
	bool var_273_bool; object var_274_object;
	object var_275_object;
	func_1271(var_275_object);
	var_275_object = var_274_object;
	func_1098(var_273_bool, var_274_object);
	bool var_276_bool; object var_277_object;
	var_263_object = var_277_object;
	func_1013(var_276_bool, var_277_object, 70.0);
	if(!var_276_bool) { //@nz
		var_262_int = -2;
		return 8;
	}
	object var_269_object;
	@CreateDialog(var_269_object);
	int var_280_int;
	func_1328(var_280_int);
	var_269_object->SetNPCName(var_280_int);
	int var_281_int;
	func_1326(var_281_int);
	var_269_object->SetNPCDescription(var_281_int);
	string var_282_string;
	func_1330(var_282_string);
	var_269_object->SetPhoto(var_282_string);
	string var_283_string;
	func_1332(var_283_string);
	var_269_object->SetPhoto2(var_283_string);
	int var_284_int;
	func_1336(var_284_int);
	var_269_object->SetPlayerName(var_284_int);
	bool var_270_bool;
	@IsOverrideActive(var_270_bool);
	if(var_270_bool != 0) {
		var_262_int = -2;
		return 8;
	}
	@DoDialog(var_269_object);
	object var_286_object; object var_287_object;
	var_263_object = var_286_object;
	var_269_object = var_287_object;
	TaskCall(2);
	func_94(var_288_object, var_289_object, var_290_string, var_291_bool, var_286_object, var_287_object);
	TaskReturn();
	bool var_272_bool;
	var_269_object->IsDialogEnd(var_272_bool);
	
	for(;;) {
		var_319_bool = !var_272_bool; //@nz
		if(var_319_bool == 0) goto Label_83;
		@sync();
		var_269_object->IsDialogEnd(var_272_bool);
	}
	
Label_83:
	object var_320_object;
	var_263_object = var_320_object;
	func_1081();
	@StopDialog(var_269_object);
	var_269_object->GetReturnValue(-1);
	int var_271_int = var_262_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_655(object var_2_object, string var_354_string)
{
	bool var_355_bool;
	func_1334(var_355_bool);
	if(!var_355_bool) //@nz
		return 0;
	if(var_354_string == var_2_object)
		return 0;
	string var_358_string; bool var_359_bool;
	var_354_string = var_358_string;
	if(var_354_string == "")
		var_359_bool = false;
	else
		var_359_bool = true;
	func_1243(var_358_string, var_359_bool);
	var_2_object = var_354_string;
	
}


void func_272(object var_0_object, int var_41_int, object var_42_object)
{
	var_0_object = var_42_object;
	bool var_52_bool; object var_53_object;
	object var_54_object;
	func_1271(var_54_object);
	var_54_object = var_53_object;
	func_1098(var_52_bool, var_53_object);
	bool var_147_bool; object var_148_object;
	var_42_object = var_148_object;
	func_1013(var_147_bool, var_148_object, 70.0);
	if(!var_147_bool) { //@nz
		var_41_int = -2;
		return 8;
	}
	object var_48_object;
	@CreateDialog(var_48_object);
	int var_194_int;
	func_1328(var_194_int);
	var_48_object->SetNPCName(var_194_int);
	int var_195_int;
	func_1326(var_195_int);
	var_48_object->SetNPCDescription(var_195_int);
	string var_196_string;
	func_1330(var_196_string);
	var_48_object->SetPhoto(var_196_string);
	string var_197_string;
	func_1332(var_197_string);
	var_48_object->SetPhoto2(var_197_string);
	int var_198_int;
	func_1336(var_198_int);
	var_48_object->SetPlayerName(var_198_int);
	bool var_49_bool;
	@IsOverrideActive(var_49_bool);
	if(var_49_bool != 0) {
		var_41_int = -2;
		return 8;
	}
	@DoDialog(var_48_object);
	object var_207_object; object var_208_object;
	var_42_object = var_207_object;
	var_48_object = var_208_object;
	TaskCall(4);
	func_353(var_209_object, var_210_object, var_211_string, var_212_bool, var_207_object, var_208_object);
	TaskReturn();
	bool var_51_bool;
	var_48_object->IsDialogEnd(var_51_bool);
	
	for(;;) {
		var_246_bool = !var_51_bool; //@nz
		if(var_246_bool == 0) goto Label_342;
		@sync();
		var_48_object->IsDialogEnd(var_51_bool);
	}
	
Label_342:
	object var_247_object;
	var_42_object = var_247_object;
	func_1081();
	@StopDialog(var_48_object);
	var_48_object->GetReturnValue(-1);
	int var_50_int = var_41_int;
}
EMIT "Stack[-4] = 0";


void func_785(void)
{
	float var_30_float;
	@rand(var_30_float, 8, 16);
	@SetTimer(10, var_30_float);
}


// @pe
void func_1296(bool var_258_bool, int var_259_int)
{
	int var_260_int;
	func_1287(var_260_int);
	var_258_bool = var_260_int == var_259_int;
}


void func_1302(string var_54_string, int var_55_int)
{
	string var_57_string = "idle";
	if(var_55_int != 0)
		var_57_string += var_55_int;
	var_57_string = var_54_string;
}


void func_794(void)
{
	@KillTimer(10);
}


// @pe
void func_411(object var_2_object, string var_214_string)
{
	bool var_215_bool;
	func_1334(var_215_bool);
	if(!var_215_bool) //@nz
		return 0;
	if(var_214_string == var_2_object)
		return 0;
	string var_218_string; bool var_219_bool;
	var_214_string = var_218_string;
	if(var_214_string == "")
		var_219_bool = false;
	else
		var_219_bool = true;
	func_1243(var_218_string, var_219_bool);
	var_2_object = var_214_string;
	
}


void func_1309(int var_48_int)
{
	int var_51_int; bool var_52_bool;
	var_51_int = 0;
	
	for(;;) {
		string var_54_string; int var_55_int;
		var_51_int = var_55_int;
		func_1302(var_54_string, var_55_int);
		@HasAnimation(var_52_bool, "all", var_54_string);
		if(!var_52_bool) //@nz
			break;
		var_51_int += 1;
	}
	var_51_int = var_48_int;
}


// @pe
void func_157(object var_2_object, string var_293_string)
{
	bool var_294_bool;
	func_1334(var_294_bool);
	if(!var_294_bool) //@nz
		return 0;
	if(var_293_string == var_2_object)
		return 0;
	string var_297_string; bool var_298_bool;
	var_293_string = var_297_string;
	if(var_293_string == "")
		var_298_bool = false;
	else
		var_298_bool = true;
	func_1243(var_297_string, var_298_bool);
	var_2_object = var_293_string;
	
}


void func_1193(bool var_94_bool, object var_95_object)
{
	bool var_103_bool; int var_104_int; string var_105_string;
	int var_107_int;
	func_1287(var_107_int);
	string var_101_string = ("d" + var_107_int) + "m";
	int var_102_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_95_object->HasProperty((var_101_string + (var_102_int + 1)), var_103_bool);
			if(!var_103_bool) { //@nz
			} else {
				var_102_int += 1;
			}
		}
		if(!var_102_int) { //@nz
			var_94_bool = false;
			return 10;
		}
		var_104_int = 0;
		if(var_102_int > 1)
			@irand(var_104_int, var_102_int);
		var_95_object->GetProperty((var_101_string + (var_104_int + 1)), var_105_string);
		bool var_126_bool; string var_127_string;
		var_105_string = var_127_string;
		func_1249(var_126_bool, var_127_string);
		var_126_bool = var_94_bool;
		return 10;

	}
}


void func_1326(int var_195_int)
{
	var_195_int = 515544;
}


void func_1328(int var_194_int)
{
	var_194_int = 502869;
}


void func_1330(string var_196_string)
{
	var_196_string = "ui/NPC_Mark.png";
}


void func_1332(string var_197_string)
{
	var_197_string = "ui/NPC_Mark_b.png";
}


void func_1334(bool var_90_bool)
{
	var_90_bool = true;
}


void func_1336(int var_198_int)
{
	int var_200_int;
	@GetVariable("branch", var_200_int);
	if(var_200_int == 0) {
		var_198_int = 1;
		return 2;
	EMIT "GOTO 0x547";
	}
	if(var_200_int == 1) {
		var_198_int = 2;
		return 2;
	}
	var_198_int = 3;
}


void func_1081(void)
{
	bool var_249_bool;
	@CameraSwitchToNormal();
	bool var_250_bool;
	func_1334(var_250_bool);
	if(var_250_bool != 0) {
	} else {
		@HasAnimationTrack(var_249_bool, "head");
		if(var_249_bool == 0) goto Label_1097;
		@UnlookAsync("head");
	}
Label_1097:
	
}


void func_1353(object var_34_object)
{
	int var_37_int;
	@GetVariable("mt_mark", var_37_int);
	if(!var_37_int) { //@nz
		int var_41_int; object var_42_object;
		var_34_object = var_42_object;
		TaskCall(3);
		func_272(var_43_object, var_41_int, var_42_object);
		TaskReturn();
		@SetVariable("mt_mark", 1);
	}
	int var_38_int;
	@GetVariable("d12_mark", var_38_int);
	bool var_257_bool = false;
	bool var_258_bool;
	func_1296(var_258_bool, 12);
	if(var_258_bool != 0) {
		if(!var_38_int) //@nz
			var_257_bool = true;
	}
	if(var_257_bool != 0) {
		int var_262_int; object var_263_object;
		var_34_object = var_263_object;
		TaskCall(1);
		func_13(var_264_object, var_262_int, var_263_object);
		TaskReturn();
		@SetVariable("d12_mark", 1);
	}
	int var_323_int; object var_324_object;
	var_34_object = var_324_object;
	TaskCall(5);
	func_516(var_325_object, var_323_int, var_324_object);
	TaskReturn();
}


void func_1098(bool var_52_bool, object var_53_object)
{
	int var_59_int; int var_60_int;
	@GetVariable("voice_common", var_59_int);
	if(var_59_int != 0) {
		bool var_63_bool; object var_64_object;
		var_53_object = var_64_object;
		func_1156(var_63_bool, var_64_object);
		if(!var_63_bool) { //@nz
			bool var_94_bool; object var_95_object;
			var_53_object = var_95_object;
			func_1193(var_94_bool, var_95_object);
			if(!var_94_bool) { //@nz
				var_52_bool = false;
				return 4;
			}
		}
		@irand(var_60_int, 2);
		if(var_60_int != 0)
			@SetVariable("voice_common", ((var_59_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_139_bool; object var_140_object;
		var_53_object = var_140_object;
		func_1193(var_139_bool, var_140_object);
		if(!var_139_bool) { //@nz
			bool var_142_bool; object var_143_object;
			var_53_object = var_143_object;
			func_1156(var_142_bool, var_143_object);
			if(!var_142_bool) { //@nz
				var_52_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1154;
	
Label_1154:
	var_52_bool = true;
	
}


void func_974(bool var_68_bool)
{
	var_68_bool = true;
}


void func_976(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_723(object var_0_object)
{
	bool var_16_bool;
	func_1008(var_16_bool);
	if(!var_16_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_851();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_905();
	}
}
EMIT "Return(); Pop(0)";


void func_1236(string var_23_string)
{
	float var_26_float; float var_27_float;
	@lshGetAnimTimes(var_23_string, var_26_float, var_27_float);
	@lshPlayAnimation(var_26_float, var_27_float, false);
}


// @pe
void func_597(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_347_object, object var_348_object)
{
	var_0_object = var_348_object;
	var_1_object = var_347_object;
	var_3_string = false;
	if(1 != 0) {
		func_655(var_348_object, "Neutral");
		var_0_object->SetMessage(540554); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540555, -1, 42564); //@t
		var_0_object->AddReply(540794, -1, 42843); //@t
		goto Label_625;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x259";
	}
Label_625:
	bool var_369_bool;
	func_1334(var_369_bool);
	if(var_369_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1236(var_2_object);
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


void func_981(float var_31_float, object var_32_object)
{
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	var_32_object->GetPosition(var_37_cvector);
	var_31_float = (var_37_cvector - var_36_cvector) | (var_37_cvector - var_36_cvector);
}


void func_1243(string var_218_string, bool var_219_bool)
{
	float var_224_float; float var_225_float;
	@lshGetAnimTimes(var_218_string, var_224_float, var_225_float);
	@lshPlayAnimation(var_224_float, var_225_float, var_219_bool);
}


void func_989(bool var_24_bool, cvector var_25_cvector)
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
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_286_object, object var_287_object)
{
	var_0_object = var_287_object;
	var_1_object = var_286_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_287_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_311_bool;
	func_1334(var_311_bool);
	if(var_311_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1236(var_2_object);
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


// @pe
void func_353(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_207_object, object var_208_object)
{
	var_0_object = var_208_object;
	var_1_object = var_207_object;
	var_3_string = false;
	if(1 != 0) {
		func_411(var_208_object, "Neutral");
		var_0_object->SetMessage(520759); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(520760, 21974, 21973); //@t
		var_0_object->AddReply(520766, 21976, 21979); //@t
		goto Label_381;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x165";
	}
Label_381:
	bool var_233_bool;
	func_1334(var_233_bool);
	if(var_233_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1236(var_2_object);
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


void func_1249(bool var_86_bool, string var_87_string)
{
	bool var_89_bool;
	bool var_90_bool;
	func_1334(var_90_bool);
	if(var_90_bool != 0) {
		@lshHasSpeech(var_89_bool, var_87_string);
		if(var_89_bool != 0) {
			@lshPlaySpeech(var_87_string);
			var_86_bool = true;
		}
	}
	var_86_bool = false;
}


void func_999(bool var_20_bool, object var_21_object)
{
	cvector var_23_cvector;
	var_21_object->GetPosition(var_23_cvector);
	bool var_24_bool; cvector var_25_cvector;
	var_23_cvector = var_25_cvector;
	func_989(var_24_bool, var_25_cvector);
	var_24_bool = var_20_bool;
}


void func_743(bool var_41_bool)
{
	object var_43_object;
	@FindActor(var_43_object, "player");
	if(!var_43_object) //@nz
		var_41_bool = false;
	bool var_46_bool; object var_47_object;
	var_43_object = var_47_object;
	func_999(var_46_bool, var_47_object);
	var_46_bool = var_41_bool;
}
EMIT "Stack[-1] = 0";


void func_1008(bool var_16_bool)
{
	bool var_18_bool;
	@IsLoaded(var_18_bool);
	var_18_bool = var_16_bool;
}


void func_1264(void)
{
	bool var_19_bool;
	func_1334(var_19_bool);
	if(var_19_bool != 0)
		@lshStopSpeech();
}


void func_1013(bool var_147_bool, object var_148_object, float var_149_float)
{
	cvector var_160_cvector; bool var_167_bool;
	var_148_object->GetPosition(var_160_cvector);
	float var_159_float;
	var_148_object->GetEyesHeight(var_159_float);
	var_168_float = GetByIndex(var_160_cvector, 1);
	SetByIndex(var_160_cvector, 1) = (var_168_float + var_159_float);
	cvector var_161_cvector;
	@GetPosition(var_161_cvector);
	@GetEyesHeight(var_159_float);
	var_169_float = GetByIndex(var_161_cvector, 1);
	SetByIndex(var_161_cvector, 1) = (var_169_float + var_159_float);
	cvector var_162_cvector = var_160_cvector - var_161_cvector;
	var_170_float = GetByIndex(var_162_cvector, 1);
	SetByIndex(var_162_cvector, 1) = (float)0;
	var_172_float = sqrt(var_162_cvector | var_162_cvector);
	var_162_cvector /= var_172_float;
	cvector var_163_cvector = -var_162_cvector;
	cvector var_174_cvector;
	func_1277(var_174_cvector, (var_163_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_164_cvector = ((var_162_cvector * var_149_float) + (var_174_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_166_bool;
	@IsOverrideActive(var_166_bool);
	if(var_166_bool != 0)
		var_147_bool = false;
	@StopWorld();
	@CameraTransit((var_161_cvector + var_164_cvector), var_163_cvector);
	var_187_float = GetByIndex(var_164_cvector, 0);
	var_188_float = GetByIndex(var_164_cvector, 2);
	@Rotate(var_187_float, var_188_float);
	bool var_189_bool;
	func_1334(var_189_bool);
	if(var_189_bool != 0) {
	} else {
		@HasAnimationTrack(var_167_bool, "head");
		if(var_167_bool == 0) goto Label_1075;
		@LookAsyncCamera("head");
	}
Label_1075:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_147_bool = true;
	
}


void func_758(object var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0);
	var_94_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_93_float, var_94_float);
}


void func_1271(object var_54_object)
{
	object var_56_object;
	@self(var_56_object);
	var_56_object = var_54_object;
}
EMIT "Stack[-1] = 0";


void func_763(bool var_24_bool)
{
	object var_27_object;
	@FindActor(var_27_object, "player");
	if(!var_27_object) { //@nz
		var_24_bool = false;
		return 4;
	}
	float var_31_float; object var_32_object;
	func_981(var_31_float, var_32_object);
	if(var_31_float > 90000.0) {
		var_24_bool = false;
		return 4;
	}
	bool var_28_bool;
	@CanSee(var_28_bool, var_32_object);
	var_28_bool = var_24_bool;
}
EMIT "Stack[-2] = 0";


void func_1277(cvector var_174_cvector, cvector var_175_cvector)
{
	float var_178_float = sqrt(var_175_cvector | var_175_cvector);
	if(var_178_float < 0.000001)
		var_174_cvector = [0.0, 0.0, 0.0];
	var_174_cvector = var_175_cvector / var_178_float;
}


