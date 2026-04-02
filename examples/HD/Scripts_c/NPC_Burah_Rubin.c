// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector)
	{
		if(1 != 0) {
			func_1021();
			if(var_11_bool == 36971) {
				func_144(var_12_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_11_bool == 36973) {
				func_144(var_12_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_11_bool == 36975) {
				func_144(var_12_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_64_bool;
			func_1091(var_64_bool);
			if(var_64_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa7";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, cvector var_12_cvector)
	{
		if(1 != 0) {
			func_1021();
			if(var_11_int == 42563) {
				func_398(var_12_cvector, "Neutral");
				var_0_object->SetMessage(540554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540555, -1, 42564); //@t
				var_0_object->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_string = true;
			bool var_41_bool;
			func_1091(var_41_bool);
			if(var_41_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1a5";
	
	}

}


maintask task_4
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector)
	{
		func_466(var_10_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, int var_11_int)
	{
		if(var_11_int == 10) {
			func_531();
			bool var_15_bool = false;
			bool var_16_bool;
			func_745(var_16_bool);
			if(var_16_bool != 0) {
				bool var_19_bool;
				func_500(var_19_bool);
				if(var_19_bool != 0)
					var_15_bool = true;
			}
			if(var_15_bool != 0) {
				bool var_36_bool;
				func_480(var_36_bool);
				if(var_36_bool != 0) {
					bool var_55_bool; object var_56_object;
					object var_57_object;
					func_1028(var_57_object);
					var_57_object = var_56_object;
					func_895(var_55_bool, var_56_object);
				}
			} else {
				func_495(var_11_int);
				func_522();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector)
	{
		func_713();
		func_531();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector)
	{
		@StopGroup0();
		func_531();
		func_975("Neutral");
		func_522();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool)
	{
		if(var_11_bool != 0)
			func_522();
		else
			func_975("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, object var_11_object)
	{
		bool var_13_bool;
		@IsOverrideActive(var_13_bool);
		if(!var_13_bool) { //@nz
			disable OnUse;
			func_713();
			bool var_15_bool; object var_16_object;
			var_11_object = var_16_object;
			func_736(var_15_bool, var_16_object);
			enable OnUse;
			object var_29_object;
			var_11_object = var_29_object;
			func_1110(var_29_object);
			func_975("Neutral");
			func_531();
			func_522();
		}
	}

}


void func_0(object var_0_object, int var_43_int, object var_44_object)
{
	var_0_object = var_44_object;
	bool var_54_bool; object var_55_object;
	var_44_object = var_55_object;
	func_750(var_54_bool, var_55_object, 70.0);
	if(!var_54_bool) { //@nz
		var_43_int = -2;
		return 8;
	}
	object var_50_object;
	@CreateDialog(var_50_object);
	int var_102_int;
	func_1085(var_102_int);
	var_50_object->SetNPCName(var_102_int);
	int var_103_int;
	func_1083(var_103_int);
	var_50_object->SetNPCDescription(var_103_int);
	string var_104_string;
	func_1087(var_104_string);
	var_50_object->SetPhoto(var_104_string);
	string var_105_string;
	func_1089(var_105_string);
	var_50_object->SetPhoto2(var_105_string);
	int var_106_int;
	func_1093(var_106_int);
	var_50_object->SetPlayerName(var_106_int);
	bool var_51_bool;
	@IsOverrideActive(var_51_bool);
	if(var_51_bool != 0) {
		var_43_int = -2;
		return 8;
	}
	@DoDialog(var_50_object);
	bool var_115_bool; object var_116_object;
	object var_117_object;
	func_1028(var_117_object);
	var_117_object = var_116_object;
	func_837(var_115_bool, var_116_object);
	object var_205_object; object var_206_object;
	var_44_object = var_205_object;
	var_50_object = var_206_object;
	TaskCall(1);
	func_81(var_207_object, var_208_object, var_209_string, var_210_bool, var_205_object, var_206_object);
	TaskReturn();
	bool var_53_bool;
	var_50_object->IsDialogEnd(var_53_bool);
	
	for(;;) {
		var_257_bool = !var_53_bool; //@nz
		if(var_257_bool == 0) goto Label_70;
		@sync();
		var_50_object->IsDialogEnd(var_53_bool);
	}
	
Label_70:
	object var_258_object;
	var_44_object = var_258_object;
	func_819();
	@StopDialog(var_50_object);
	var_50_object->GetReturnValue(-1);
	int var_52_int = var_43_int;
}
EMIT "Stack[-4] = 0";


void func_642(void)
{
	bool var_23_bool; int var_24_int; int var_25_int; bool var_26_bool;
	@WaitForAnimEnd();
	bool var_27_bool;
	func_745(var_27_bool);
	if(!var_27_bool) //@nz
		return 12;
	int var_29_int;
	func_1066(var_29_int);
	int var_21_int;
	var_29_int = var_21_int;
	int var_22_int = 0;
	
	for(;;) {
		bool var_42_bool = false;
		if(var_22_int < 5) {
			bool var_45_bool;
			func_745(var_45_bool);
			if(var_45_bool != 0)
				var_42_bool = true;
		}
		if(var_42_bool != 0) {
			if(!var_21_int) { //@nz
				@Sleep(3, var_23_bool);
				if(!var_23_bool) { //@nz
				} else {
			} else {
			@irand(var_24_int, var_21_int);
			@irand(var_25_int, 5);
			if(var_25_int != 0)
				var_24_int = 0;
			string var_56_string; int var_57_int;
			var_24_int = var_57_int;
			func_1059(var_56_string, var_57_int);
			@PlayAnimation("all", var_56_string);
			@WaitForAnimEnd(var_26_bool);
			var_58_bool = !var_26_bool; //@nz
			if(var_58_bool == 0) goto Label_697;
			goto Label_708;
			}
				Label_697:
					bool var_49_bool;
					func_711(var_49_bool);
					var_50_bool = !var_49_bool; //@nz
					if(var_50_bool == 0) goto Label_703;
			}
		}
	Label_708:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_703:
		@ResetAAS();
		var_22_int += 1;
	}
	
}


void func_259(object var_0_object, int var_268_int, object var_269_object)
{
	var_0_object = var_269_object;
	bool var_279_bool; object var_280_object;
	var_269_object = var_280_object;
	func_750(var_279_bool, var_280_object, 70.0);
	if(!var_279_bool) { //@nz
		var_268_int = -2;
		return 8;
	}
	object var_275_object;
	@CreateDialog(var_275_object);
	int var_283_int;
	func_1085(var_283_int);
	var_275_object->SetNPCName(var_283_int);
	int var_284_int;
	func_1083(var_284_int);
	var_275_object->SetNPCDescription(var_284_int);
	string var_285_string;
	func_1087(var_285_string);
	var_275_object->SetPhoto(var_285_string);
	string var_286_string;
	func_1089(var_286_string);
	var_275_object->SetPhoto2(var_286_string);
	int var_287_int;
	func_1093(var_287_int);
	var_275_object->SetPlayerName(var_287_int);
	bool var_276_bool;
	@IsOverrideActive(var_276_bool);
	if(var_276_bool != 0) {
		var_268_int = -2;
		return 8;
	}
	@DoDialog(var_275_object);
	bool var_289_bool; object var_290_object;
	object var_291_object;
	func_1028(var_291_object);
	var_291_object = var_290_object;
	func_837(var_289_bool, var_290_object);
	object var_292_object; object var_293_object;
	var_269_object = var_292_object;
	var_275_object = var_293_object;
	TaskCall(3);
	func_340(var_294_object, var_295_object, var_296_string, var_297_bool, var_292_object, var_293_object);
	TaskReturn();
	bool var_278_bool;
	var_275_object->IsDialogEnd(var_278_bool);
	
	for(;;) {
		var_322_bool = !var_278_bool; //@nz
		if(var_322_bool == 0) goto Label_329;
		@sync();
		var_275_object->IsDialogEnd(var_278_bool);
	}
	
Label_329:
	object var_323_object;
	var_269_object = var_323_object;
	func_819();
	@StopDialog(var_275_object);
	var_275_object->GetReturnValue(-1);
	int var_277_int = var_268_int;
}
EMIT "Stack[-4] = 0";


void func_1028(object var_117_object)
{
	object var_119_object;
	@self(var_119_object);
	var_119_object = var_117_object;
}
EMIT "Stack[-1] = 0";


void func_522(void)
{
	float var_327_float;
	@rand(var_327_float, 8, 16);
	@SetTimer(10, var_327_float);
}


void func_1034(cvector var_81_cvector, cvector var_82_cvector)
{
	float var_85_float = sqrt(var_82_cvector | var_82_cvector);
	if(var_85_float < 0.000001)
		var_81_cvector = [0.0, 0.0, 0.0];
	var_81_cvector = var_82_cvector / var_85_float;
}


// @pe
void func_398(object var_2_object, string var_299_string)
{
	bool var_300_bool;
	func_1091(var_300_bool);
	if(!var_300_bool) //@nz
		return 0;
	if(var_299_string == var_2_object)
		return 0;
	string var_303_string; bool var_304_bool;
	var_299_string = var_303_string;
	if(var_299_string == "")
		var_304_bool = false;
	else
		var_304_bool = true;
	func_991(var_303_string, var_304_bool);
	var_2_object = var_299_string;
	
}


// @pe
void func_144(object var_2_object, string var_212_string)
{
	bool var_213_bool;
	func_1091(var_213_bool);
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
	func_991(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	
}


void func_531(void)
{
	@KillTimer(10);
}


void func_1044(int var_36_int)
{
	float var_38_float;
	@GetGameTime(var_38_float);
	var_36_int = 1 + (var_38_float / 24);
}


// @pe
void func_1053(bool var_34_bool, int var_35_int)
{
	int var_36_int;
	func_1044(var_36_int);
	var_34_bool = var_36_int == var_35_int;
}


void func_1059(string var_35_string, int var_36_int)
{
	string var_38_string = "idle";
	if(var_36_int != 0)
		var_38_string += var_36_int;
	var_38_string = var_35_string;
}


void func_932(bool var_157_bool, object var_158_object)
{
	bool var_166_bool; int var_167_int; string var_168_string;
	int var_170_int;
	func_1044(var_170_int);
	string var_164_string = ("d" + var_170_int) + "m";
	int var_165_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_158_object->HasProperty((var_164_string + (var_165_int + 1)), var_166_bool);
			if(!var_166_bool) { //@nz
			} else {
				var_165_int += 1;
			}
		}
		if(!var_165_int) { //@nz
			var_157_bool = false;
			return 10;
		}
		var_167_int = 0;
		if(var_165_int > 1)
			@irand(var_167_int, var_165_int);
		var_158_object->GetProperty((var_164_string + (var_167_int + 1)), var_168_string);
		bool var_184_bool; string var_185_string;
		var_168_string = var_185_string;
		func_1006(var_184_bool, var_185_string);
		var_184_bool = var_157_bool;
		return 10;

	}
}


void func_1066(int var_29_int)
{
	int var_32_int; bool var_33_bool;
	var_32_int = 0;
	
	for(;;) {
		string var_35_string; int var_36_int;
		var_32_int = var_36_int;
		func_1059(var_35_string, var_36_int);
		@HasAnimation(var_33_bool, "all", var_35_string);
		if(!var_33_bool) //@nz
			break;
		var_32_int += 1;
	}
	var_32_int = var_29_int;
}


void func_819(void)
{
	bool var_260_bool;
	@CameraSwitchToNormal(true);
	bool var_262_bool;
	func_1091(var_262_bool);
	if(var_262_bool != 0) {
	} else {
		@HasAnimationTrack(var_260_bool, "head");
		if(var_260_bool == 0) goto Label_836;
		@UnlookAsync("head");
	}
Label_836:
	
}


void func_1083(int var_103_int)
{
	var_103_int = 515551;
}


void func_1085(int var_102_int)
{
	var_102_int = 502876;
}


void func_1087(string var_104_string)
{
	var_104_string = "ui/NPC_Rubin.png";
}


void func_1089(string var_105_string)
{
	var_105_string = "ui/NPC_Rubin_b.png";
}


void func_1091(bool var_97_bool)
{
	var_97_bool = true;
}


void func_1093(int var_106_int)
{
	int var_108_int;
	@GetVariable("branch", var_108_int);
	if(var_108_int == 0) {
		var_106_int = 1;
		return 2;
	EMIT "GOTO 0x454";
	}
	if(var_108_int == 1) {
		var_106_int = 2;
		return 2;
	}
	var_106_int = 3;
}


void func_837(bool var_115_bool, object var_116_object)
{
	int var_122_int; int var_123_int;
	@GetVariable("voice_common", var_122_int);
	if(var_122_int != 0) {
		bool var_126_bool; object var_127_object;
		var_116_object = var_127_object;
		func_895(var_126_bool, var_127_object);
		if(!var_126_bool) { //@nz
			bool var_157_bool; object var_158_object;
			var_116_object = var_158_object;
			func_932(var_157_bool, var_158_object);
			if(!var_157_bool) { //@nz
				var_115_bool = false;
				return 4;
			}
		}
		@irand(var_123_int, 2);
		if(var_123_int != 0)
			@SetVariable("voice_common", ((var_122_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_197_bool; object var_198_object;
		var_116_object = var_198_object;
		func_932(var_197_bool, var_198_object);
		if(!var_197_bool) { //@nz
			bool var_200_bool; object var_201_object;
			var_116_object = var_201_object;
			func_895(var_200_bool, var_201_object);
			if(!var_200_bool) { //@nz
				var_115_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_893;
	
Label_893:
	var_115_bool = true;
	
}


void func_711(bool var_49_bool)
{
	var_49_bool = true;
}


void func_713(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_718(float var_26_float, object var_27_object)
{
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	cvector var_32_cvector;
	var_27_object->GetPosition(var_32_cvector);
	var_26_float = (var_32_cvector - var_31_cvector) | (var_32_cvector - var_31_cvector);
}


void func_975(string var_241_string)
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
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_205_object, object var_206_object)
{
	var_0_object = var_206_object;
	var_1_object = var_205_object;
	var_3_string = false;
	if(1 != 0) {
		func_144(var_206_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	bool var_239_bool;
	func_1091(var_239_bool);
	if(var_239_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_975(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_143;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_143:
		return 0;

	}
	
}


void func_466(object var_0_object)
{
	bool var_11_bool;
	func_745(var_11_bool);
	if(!var_11_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_642();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_340(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_292_object, object var_293_object)
{
	var_0_object = var_293_object;
	var_1_object = var_292_object;
	var_3_string = false;
	if(1 != 0) {
		func_398(var_293_object, "Neutral");
		var_0_object->SetMessage(540554); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540555, -1, 42564); //@t
		var_0_object->AddReply(540794, -1, 42843); //@t
		goto Label_368;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x158";
	}
Label_368:
	bool var_314_bool;
	func_1091(var_314_bool);
	if(var_314_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_975(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_397;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_397:
		return 0;

	}
	
}


void func_1110(object var_29_object)
{
	int var_31_int;
	@GetVariable("d12_rubin", var_31_int);
	bool var_33_bool = false;
	bool var_34_bool;
	func_1053(var_34_bool, 12);
	if(var_34_bool != 0) {
		if(!var_31_int) //@nz
			var_33_bool = true;
	}
	if(var_33_bool != 0) {
		int var_43_int; object var_44_object;
		var_29_object = var_44_object;
		TaskCall(0);
		func_0(var_45_object, var_43_int, var_44_object);
		TaskReturn();
		@SetVariable("d12_rubin", 1);
		return 2;
	}
	int var_268_int; object var_269_object;
	var_29_object = var_269_object;
	TaskCall(2);
	func_259(var_270_object, var_268_int, var_269_object);
	TaskReturn();
}


void func_726(bool var_19_bool, cvector var_20_cvector)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector = var_20_cvector - var_24_cvector;
	var_27_float = GetByIndex(var_25_cvector, 0);
	var_28_float = GetByIndex(var_25_cvector, 2);
	bool var_26_bool;
	@Rotate(var_27_float, var_28_float, var_26_bool);
	var_26_bool = var_19_bool;
}


void func_991(string var_216_string, bool var_217_bool)
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


void func_736(bool var_15_bool, object var_16_object)
{
	cvector var_18_cvector;
	var_16_object->GetPosition(var_18_cvector);
	bool var_19_bool; cvector var_20_cvector;
	var_18_cvector = var_20_cvector;
	func_726(var_19_bool, var_20_cvector);
	var_19_bool = var_15_bool;
}


void func_480(bool var_36_bool)
{
	object var_38_object;
	@FindActor(var_38_object, "player");
	if(!var_38_object) //@nz
		var_36_bool = false;
	bool var_41_bool; object var_42_object;
	var_38_object = var_42_object;
	func_736(var_41_bool, var_42_object);
	var_41_bool = var_36_bool;
}
EMIT "Stack[-1] = 0";


void func_745(bool var_11_bool)
{
	bool var_13_bool;
	@IsLoaded(var_13_bool);
	var_13_bool = var_11_bool;
}


void func_750(bool var_54_bool, object var_55_object, float var_56_float)
{
	cvector var_67_cvector; bool var_74_bool;
	var_55_object->GetPosition(var_67_cvector);
	float var_66_float;
	var_55_object->GetEyesHeight(var_66_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (var_75_float + var_66_float);
	cvector var_68_cvector;
	@GetPosition(var_68_cvector);
	@GetEyesHeight(var_66_float);
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (var_76_float + var_66_float);
	cvector var_69_cvector = var_67_cvector - var_68_cvector;
	var_77_float = GetByIndex(var_69_cvector, 1);
	SetByIndex(var_69_cvector, 1) = (float)0;
	var_79_float = sqrt(var_69_cvector | var_69_cvector);
	var_69_cvector /= var_79_float;
	cvector var_70_cvector = -var_69_cvector;
	cvector var_81_cvector;
	func_1034(var_81_cvector, (var_70_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_71_cvector = ((var_69_cvector * var_56_float) + (var_81_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_73_bool;
	@IsOverrideActive(var_73_bool);
	if(var_73_bool != 0)
		var_54_bool = false;
	@StopWorld();
	@CameraTransit((var_68_cvector + var_71_cvector), var_70_cvector, true);
	var_95_float = GetByIndex(var_71_cvector, 0);
	var_96_float = GetByIndex(var_71_cvector, 2);
	@Rotate(var_95_float, var_96_float);
	bool var_97_bool;
	func_1091(var_97_bool);
	if(var_97_bool != 0) {
	} else {
		@HasAnimationTrack(var_74_bool, "head");
		if(var_74_bool == 0) goto Label_813;
		@LookAsyncCamera("head");
	}
Label_813:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_54_bool = true;
	
}


void func_495(object var_0_object)
{
	var_88_float = GetByIndex(var_0_object, 0);
	var_89_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_88_float, var_89_float);
}


void func_1006(bool var_149_bool, string var_150_string)
{
	bool var_152_bool;
	bool var_153_bool;
	func_1091(var_153_bool);
	if(var_153_bool != 0) {
		@lshHasSpeech(var_152_bool, var_150_string);
		if(var_152_bool != 0) {
			@lshPlaySpeech(var_150_string);
			var_149_bool = true;
		}
	}
	var_149_bool = false;
}


void func_500(bool var_19_bool)
{
	object var_22_object;
	@FindActor(var_22_object, "player");
	if(!var_22_object) { //@nz
		var_19_bool = false;
		return 4;
	}
	float var_26_float; object var_27_object;
	func_718(var_26_float, var_27_object);
	if(var_26_float > 90000.0) {
		var_19_bool = false;
		return 4;
	}
	bool var_23_bool;
	@CanSee(var_23_bool, var_27_object);
	var_23_bool = var_19_bool;
}
EMIT "Stack[-2] = 0";


void func_1021(void)
{
	bool var_14_bool;
	func_1091(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_895(bool var_126_bool, object var_127_object)
{
	string var_133_string; bool var_135_bool; int var_136_int; string var_137_string;
	var_133_string = "c";
	int var_134_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_127_object->HasProperty((var_133_string + (var_134_int + 1)), var_135_bool);
			if(!var_135_bool) { //@nz
			} else {
				var_134_int += 1;
			}
		}
		if(!var_134_int) { //@nz
			var_126_bool = false;
			return 10;
		}
		var_136_int = 0;
		if(var_134_int > 1)
			@irand(var_136_int, var_134_int);
		var_127_object->GetProperty((var_133_string + (var_136_int + 1)), var_137_string);
		bool var_149_bool; string var_150_string;
		var_137_string = var_150_string;
		func_1006(var_149_bool, var_150_string);
		var_149_bool = var_126_bool;
		return 10;

	}
}


