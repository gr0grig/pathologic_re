// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1575();
			if(var_21_bool == 26881) {
				func_147(var_22_cvector, "Neutral");
				var_0_object->SetMessage(525525); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525526, 30726, 26882); //@t
				return 0;
			}
			if(var_21_bool == 30726) {
				func_147(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529273); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529272, 30728, 30725); //@t
				var_0_object->AddReply(529274, 30729, 30727); //@t
				return 0;
			}
			if(var_21_bool == 30729) {
				func_147(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529276); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529278, -1, 30731); //@t
				return 0;
			}
			if(var_21_bool == 30728) {
				func_147(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529275); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529277, -1, 30730); //@t
				return 0;
			}
			var_3_string = true;
			bool var_67_bool;
			func_1650(var_67_bool);
			if(var_67_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1575();
			if(var_22_cvector == 27693) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1652();
			}
			if(var_21_bool == 27688) {
				func_414(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526413); //@t
				var_0_object->ClearReplies(); //@t
				bool var_69_bool;
				func_1661(var_1_object);
				if(var_69_bool != 0)
					var_0_object->AddReply(526414, 30415, 27689); //@t
				var_0_object->AddReply(526419, -1, 27694); //@t
				var_0_object->AddReply(528977, -1, 30414); //@t
				return 0;
			}
			if(var_21_bool == 30415) {
				func_414(var_22_cvector, "Neutral");
				var_0_object->SetMessage(528978); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528980, 30418, 30417); //@t
				return 0;
			}
			if(var_21_bool == 30418) {
				func_414(var_22_cvector, "Neutral");
				var_0_object->SetMessage(528981); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528979, 27690, 30416); //@t
				return 0;
			}
			if(var_21_bool == 27690) {
				func_414(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526415); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526416, 27692, 27691); //@t
				return 0;
			}
			if(var_21_bool == 27692) {
				func_414(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526417); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526418, -1, 27693); //@t
				return 0;
			}
			var_3_string = true;
			bool var_114_bool;
			func_1650(var_114_bool);
			if(var_114_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1b5";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1575();
			if(var_21_bool == 36960) {
				func_712(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_21_bool == 36962) {
				func_712(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_21_bool == 36964) {
				func_712(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_69_bool;
			func_1650(var_69_bool);
			if(var_69_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2df";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1575();
			if(var_21_int == 42554) {
				func_966(var_22_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_46_bool;
			func_1650(var_46_bool);
			if(var_46_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3dd";
	
	}

}


maintask task_9
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1034(var_20_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, int var_21_int)
	{
		if(var_21_int == 10) {
			func_1105();
			bool var_25_bool = false;
			bool var_26_bool;
			func_1319(var_26_bool);
			if(var_26_bool != 0) {
				bool var_29_bool;
				func_1074(var_29_bool);
				if(var_29_bool != 0)
					var_25_bool = true;
			}
			if(var_25_bool != 0) {
				bool var_46_bool;
				func_1054(var_46_bool);
				if(var_46_bool != 0) {
					bool var_65_bool; object var_66_object;
					object var_67_object;
					func_1582(var_67_object);
					var_67_object = var_66_object;
					func_1467(var_65_bool, var_66_object);
				}
			} else {
				func_1069(var_21_int);
				func_1096();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1287();
		func_1105();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
		{
		@StopGroup0();
		func_1105();
		func_1547("Neutral");
		func_1096();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 0)
			func_1096();
		else
			func_1547("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, object var_21_object)
	{
		bool var_23_bool;
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			disable OnUse;
			func_1287();
			bool var_25_bool; object var_26_object;
			var_21_object = var_26_object;
			func_1310(var_25_bool, var_26_object);
			enable OnUse;
			object var_39_object;
			var_21_object = var_39_object;
			func_1744(var_39_object);
			func_1547("Neutral");
			func_1105();
			func_1096();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_25_bool;
	func_1319(var_25_bool);
	if(!var_25_bool) goto Label_0; //@nz
}


void func_1409(bool var_55_bool, object var_56_object)
{
	int var_62_int; int var_63_int;
	@GetVariable("voice_common", var_62_int);
	if(var_62_int != 0) {
		bool var_66_bool; object var_67_object;
		var_56_object = var_67_object;
		func_1467(var_66_bool, var_67_object);
		if(!var_66_bool) { //@nz
			bool var_97_bool; object var_98_object;
			var_56_object = var_98_object;
			func_1504(var_97_bool, var_98_object);
			if(!var_97_bool) { //@nz
				var_55_bool = false;
				return 4;
			}
		}
		@irand(var_63_int, 2);
		if(var_63_int != 0)
			@SetVariable("voice_common", ((var_62_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_142_bool; object var_143_object;
		var_56_object = var_143_object;
		func_1504(var_142_bool, var_143_object);
		if(!var_142_bool) { //@nz
			bool var_145_bool; object var_146_object;
			var_56_object = var_146_object;
			func_1467(var_145_bool, var_146_object);
			if(!var_145_bool) { //@nz
				var_55_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1465;
	
Label_1465:
	var_55_bool = true;
	
}


void func_1285(bool var_73_bool)
{
	var_73_bool = true;
}


void func_1287(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_649(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_352_object, object var_353_object)
{
	var_0_object = var_353_object;
	var_1_object = var_352_object;
	var_3_string = false;
	if(1 != 0) {
		func_712(var_353_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_682;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x28d";
	}
Label_682:
	bool var_377_bool;
	func_1650(var_377_bool);
	if(var_377_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1547(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_711;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_711:
		return 0;

	}
	
}


void func_1034(object var_0_object)
{
	bool var_21_bool;
	func_1319(var_21_bool);
	if(!var_21_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1162();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1216();
	}
}
EMIT "Return(); Pop(0)";


void func_1547(string var_28_string)
{
	float var_31_float; float var_32_float;
	@lshGetAnimTimes(var_28_string, var_31_float, var_32_float);
	@lshPlayAnimation(var_31_float, var_32_float, false);
}


// @pe
void func_908(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_411_object, object var_412_object)
{
	var_0_object = var_412_object;
	var_1_object = var_411_object;
	var_3_string = false;
	if(1 != 0) {
		func_966(var_412_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_936;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x390";
	}
Label_936:
	bool var_433_bool;
	func_1650(var_433_bool);
	if(var_433_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1547(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_965;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_965:
		return 0;

	}
	
}


void func_1292(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


void func_1673(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 441, 1, 526466);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_1699(var_36_bool, var_37_object, 438);
}
EMIT "Stack[-1] = 0";


void func_13(object var_0_object, int var_44_int, object var_45_object)
{
	var_0_object = var_45_object;
	bool var_55_bool; object var_56_object;
	object var_57_object;
	func_1582(var_57_object);
	var_57_object = var_56_object;
	func_1409(var_55_bool, var_56_object);
	bool var_150_bool; object var_151_object;
	var_45_object = var_151_object;
	func_1324(var_150_bool, var_151_object, 70.0);
	if(!var_150_bool) { //@nz
		var_44_int = -2;
		return 8;
	}
	object var_51_object;
	@CreateDialog(var_51_object);
	int var_197_int;
	func_1644(var_197_int);
	var_51_object->SetNPCName(var_197_int);
	int var_198_int;
	func_1642(var_198_int);
	var_51_object->SetNPCDescription(var_198_int);
	string var_199_string;
	func_1646(var_199_string);
	var_51_object->SetPhoto(var_199_string);
	string var_200_string;
	func_1648(var_200_string);
	var_51_object->SetPhoto2(var_200_string);
	int var_201_int;
	func_1727(var_201_int);
	var_51_object->SetPlayerName(var_201_int);
	bool var_52_bool;
	@IsOverrideActive(var_52_bool);
	if(var_52_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	@DoDialog(var_51_object);
	object var_210_object; object var_211_object;
	var_45_object = var_210_object;
	var_51_object = var_211_object;
	TaskCall(2);
	func_94(var_212_object, var_213_object, var_214_string, var_215_bool, var_210_object, var_211_object);
	TaskReturn();
	bool var_54_bool;
	var_51_object->IsDialogEnd(var_54_bool);
	
	for(;;) {
		var_246_bool = !var_54_bool; //@nz
		if(var_246_bool == 0) goto Label_83;
		@sync();
		var_51_object->IsDialogEnd(var_54_bool);
	}
	
Label_83:
	object var_247_object;
	var_45_object = var_247_object;
	func_1392();
	@StopDialog(var_51_object);
	var_51_object->GetReturnValue(-1);
	int var_53_int = var_44_int;
}
EMIT "Stack[-4] = 0";


void func_265(object var_0_object, int var_259_int, object var_260_object)
{
	var_0_object = var_260_object;
	bool var_270_bool; object var_271_object;
	object var_272_object;
	func_1582(var_272_object);
	var_272_object = var_271_object;
	func_1409(var_270_bool, var_271_object);
	bool var_273_bool; object var_274_object;
	var_260_object = var_274_object;
	func_1324(var_273_bool, var_274_object, 70.0);
	if(!var_273_bool) { //@nz
		var_259_int = -2;
		return 8;
	}
	object var_266_object;
	@CreateDialog(var_266_object);
	int var_277_int;
	func_1644(var_277_int);
	var_266_object->SetNPCName(var_277_int);
	int var_278_int;
	func_1642(var_278_int);
	var_266_object->SetNPCDescription(var_278_int);
	string var_279_string;
	func_1646(var_279_string);
	var_266_object->SetPhoto(var_279_string);
	string var_280_string;
	func_1648(var_280_string);
	var_266_object->SetPhoto2(var_280_string);
	int var_281_int;
	func_1727(var_281_int);
	var_266_object->SetPlayerName(var_281_int);
	bool var_267_bool;
	@IsOverrideActive(var_267_bool);
	if(var_267_bool != 0) {
		var_259_int = -2;
		return 8;
	}
	@DoDialog(var_266_object);
	object var_283_object; object var_284_object;
	var_260_object = var_283_object;
	var_266_object = var_284_object;
	TaskCall(4);
	func_346(var_285_object, var_286_object, var_287_string, var_288_bool, var_283_object, var_284_object);
	TaskReturn();
	bool var_269_bool;
	var_266_object->IsDialogEnd(var_269_bool);
	
	for(;;) {
		var_324_bool = !var_269_bool; //@nz
		if(var_324_bool == 0) goto Label_335;
		@sync();
		var_266_object->IsDialogEnd(var_269_bool);
	}
	
Label_335:
	object var_325_object;
	var_260_object = var_325_object;
	func_1392();
	@StopDialog(var_266_object);
	var_266_object->GetReturnValue(-1);
	int var_268_int = var_259_int;
}
EMIT "Stack[-4] = 0";


void func_1554(string var_221_string, bool var_222_bool)
{
	float var_227_float; float var_228_float;
	@lshGetAnimTimes(var_221_string, var_227_float, var_228_float);
	@lshPlayAnimation(var_227_float, var_228_float, var_222_bool);
}


// @pe
void func_147(object var_2_object, string var_217_string)
{
	bool var_218_bool;
	func_1650(var_218_bool);
	if(!var_218_bool) //@nz
		return 0;
	if(var_217_string == var_2_object)
		return 0;
	string var_221_string; bool var_222_bool;
	var_217_string = var_221_string;
	if(var_217_string == "")
		var_222_bool = false;
	else
		var_222_bool = true;
	func_1554(var_221_string, var_222_bool);
	var_2_object = var_217_string;
	
}


void func_1300(bool var_29_bool, cvector var_30_cvector)
{
	cvector var_34_cvector;
	@GetPosition(var_34_cvector);
	cvector var_35_cvector = var_30_cvector - var_34_cvector;
	var_37_float = GetByIndex(var_35_cvector, 0);
	var_38_float = GetByIndex(var_35_cvector, 2);
	bool var_36_bool;
	@Rotate(var_37_float, var_38_float, var_36_bool);
	var_36_bool = var_29_bool;
}


void func_1686(object var_45_object)
{
	object var_47_object;
	@GetDiaryRoot(var_47_object);
	if(!var_47_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_45_object = false;
	}
	var_47_object = var_45_object;
}
EMIT "Stack[-1] = 0";


void func_1560(bool var_89_bool, string var_90_string)
{
	bool var_92_bool;
	bool var_93_bool;
	func_1650(var_93_bool);
	if(var_93_bool != 0) {
		@lshHasSpeech(var_92_bool, var_90_string);
		if(var_92_bool != 0) {
			@lshPlaySpeech(var_90_string);
			var_89_bool = true;
		}
	}
	var_89_bool = false;
}


// @pe
void func_414(object var_2_object, string var_290_string)
{
	bool var_291_bool;
	func_1650(var_291_bool);
	if(!var_291_bool) //@nz
		return 0;
	if(var_290_string == var_2_object)
		return 0;
	string var_294_string; bool var_295_bool;
	var_290_string = var_294_string;
	if(var_290_string == "")
		var_295_bool = false;
	else
		var_295_bool = true;
	func_1554(var_294_string, var_295_bool);
	var_2_object = var_290_string;
	
}


void func_1310(bool var_25_bool, object var_26_object)
{
	cvector var_28_cvector;
	var_26_object->GetPosition(var_28_cvector);
	bool var_29_bool; cvector var_30_cvector;
	var_28_cvector = var_30_cvector;
	func_1300(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
}


void func_1054(bool var_46_bool)
{
	object var_48_object;
	@FindActor(var_48_object, "player");
	if(!var_48_object) //@nz
		var_46_bool = false;
	bool var_51_bool; object var_52_object;
	var_48_object = var_52_object;
	func_1310(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
}
EMIT "Stack[-1] = 0";


void func_1699(bool var_36_bool, object var_37_object, int var_38_int)
{
	object var_45_object;
	func_1686(var_45_object);
	object var_42_object;
	var_45_object = var_42_object;
	object var_43_object;
	var_42_object->Find(var_38_int, var_43_object);
	if(!var_43_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_38_int);
		var_36_bool = false;
	}
	var_43_object->AddChild(var_37_object);
	@SendWorldWndMessage(7);
	int var_44_int;
	var_37_object->GetCategory(var_44_int);
	@SetDiarySection(var_44_int);
	var_36_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1319(bool var_21_bool)
{
	bool var_23_bool;
	@IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
}


void func_1575(void)
{
	bool var_24_bool;
	func_1650(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


void func_1324(bool var_150_bool, object var_151_object, float var_152_float)
{
	cvector var_163_cvector; bool var_170_bool;
	var_151_object->GetPosition(var_163_cvector);
	float var_162_float;
	var_151_object->GetEyesHeight(var_162_float);
	var_171_float = GetByIndex(var_163_cvector, 1);
	SetByIndex(var_163_cvector, 1) = (var_171_float + var_162_float);
	cvector var_164_cvector;
	@GetPosition(var_164_cvector);
	@GetEyesHeight(var_162_float);
	var_172_float = GetByIndex(var_164_cvector, 1);
	SetByIndex(var_164_cvector, 1) = (var_172_float + var_162_float);
	cvector var_165_cvector = var_163_cvector - var_164_cvector;
	var_173_float = GetByIndex(var_165_cvector, 1);
	SetByIndex(var_165_cvector, 1) = (float)0;
	var_175_float = sqrt(var_165_cvector | var_165_cvector);
	var_165_cvector /= var_175_float;
	cvector var_166_cvector = -var_165_cvector;
	cvector var_177_cvector;
	func_1588(var_177_cvector, (var_166_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_167_cvector = ((var_165_cvector * var_152_float) + (var_177_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_169_bool;
	@IsOverrideActive(var_169_bool);
	if(var_169_bool != 0)
		var_150_bool = false;
	@StopWorld();
	@CameraTransit((var_164_cvector + var_167_cvector), var_166_cvector);
	var_190_float = GetByIndex(var_167_cvector, 0);
	var_191_float = GetByIndex(var_167_cvector, 2);
	@Rotate(var_190_float, var_191_float);
	bool var_192_bool;
	func_1650(var_192_bool);
	if(var_192_bool != 0) {
	} else {
		@HasAnimationTrack(var_170_bool, "head");
		if(var_170_bool == 0) goto Label_1386;
		@LookAsyncCamera("head");
	}
Label_1386:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_150_bool = true;
	
}


void func_1069(object var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_98_float, var_99_float);
}


void func_1582(object var_57_object)
{
	object var_59_object;
	@self(var_59_object);
	var_59_object = var_57_object;
}
EMIT "Stack[-1] = 0";


void func_1074(bool var_29_bool)
{
	object var_32_object;
	@FindActor(var_32_object, "player");
	if(!var_32_object) { //@nz
		var_29_bool = false;
		return 4;
	}
	float var_36_float; object var_37_object;
	func_1292(var_36_float, var_37_object);
	if(var_36_float > 90000.0) {
		var_29_bool = false;
		return 4;
	}
	bool var_33_bool;
	@CanSee(var_33_bool, var_37_object);
	var_33_bool = var_29_bool;
}
EMIT "Stack[-2] = 0";


void func_1588(cvector var_177_cvector, cvector var_178_cvector)
{
	float var_181_float = sqrt(var_178_cvector | var_178_cvector);
	if(var_181_float < 0.000001)
		var_177_cvector = [0.0, 0.0, 0.0];
	var_177_cvector = var_178_cvector / var_181_float;
}


void func_568(object var_0_object, int var_328_int, object var_329_object)
{
	var_0_object = var_329_object;
	bool var_339_bool; object var_340_object;
	object var_341_object;
	func_1582(var_341_object);
	var_341_object = var_340_object;
	func_1409(var_339_bool, var_340_object);
	bool var_342_bool; object var_343_object;
	var_329_object = var_343_object;
	func_1324(var_342_bool, var_343_object, 70.0);
	if(!var_342_bool) { //@nz
		var_328_int = -2;
		return 8;
	}
	object var_335_object;
	@CreateDialog(var_335_object);
	int var_346_int;
	func_1644(var_346_int);
	var_335_object->SetNPCName(var_346_int);
	int var_347_int;
	func_1642(var_347_int);
	var_335_object->SetNPCDescription(var_347_int);
	string var_348_string;
	func_1646(var_348_string);
	var_335_object->SetPhoto(var_348_string);
	string var_349_string;
	func_1648(var_349_string);
	var_335_object->SetPhoto2(var_349_string);
	int var_350_int;
	func_1727(var_350_int);
	var_335_object->SetPlayerName(var_350_int);
	bool var_336_bool;
	@IsOverrideActive(var_336_bool);
	if(var_336_bool != 0) {
		var_328_int = -2;
		return 8;
	}
	@DoDialog(var_335_object);
	object var_352_object; object var_353_object;
	var_329_object = var_352_object;
	var_335_object = var_353_object;
	TaskCall(6);
	func_649(var_354_object, var_355_object, var_356_string, var_357_bool, var_352_object, var_353_object);
	TaskReturn();
	bool var_338_bool;
	var_335_object->IsDialogEnd(var_338_bool);
	
	for(;;) {
		var_385_bool = !var_338_bool; //@nz
		if(var_385_bool == 0) goto Label_638;
		@sync();
		var_335_object->IsDialogEnd(var_338_bool);
	}
	
Label_638:
	object var_386_object;
	var_329_object = var_386_object;
	func_1392();
	@StopDialog(var_335_object);
	var_335_object->GetReturnValue(-1);
	int var_337_int = var_328_int;
}
EMIT "Stack[-4] = 0";


void func_1467(bool var_66_bool, object var_67_object)
{
	string var_73_string; bool var_75_bool; int var_76_int; string var_77_string;
	var_73_string = "c";
	int var_74_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_67_object->HasProperty((var_73_string + (var_74_int + 1)), var_75_bool);
			if(!var_75_bool) { //@nz
			} else {
				var_74_int += 1;
			}
		}
		if(!var_74_int) { //@nz
			var_66_bool = false;
			return 10;
		}
		var_76_int = 0;
		if(var_74_int > 1)
			@irand(var_76_int, var_74_int);
		var_67_object->GetProperty((var_73_string + (var_76_int + 1)), var_77_string);
		bool var_89_bool; string var_90_string;
		var_77_string = var_90_string;
		func_1560(var_89_bool, var_90_string);
		var_89_bool = var_66_bool;
		return 10;

	}
}


void func_827(object var_0_object, int var_387_int, object var_388_object)
{
	var_0_object = var_388_object;
	bool var_398_bool; object var_399_object;
	object var_400_object;
	func_1582(var_400_object);
	var_400_object = var_399_object;
	func_1409(var_398_bool, var_399_object);
	bool var_401_bool; object var_402_object;
	var_388_object = var_402_object;
	func_1324(var_401_bool, var_402_object, 70.0);
	if(!var_401_bool) { //@nz
		var_387_int = -2;
		return 8;
	}
	object var_394_object;
	@CreateDialog(var_394_object);
	int var_405_int;
	func_1644(var_405_int);
	var_394_object->SetNPCName(var_405_int);
	int var_406_int;
	func_1642(var_406_int);
	var_394_object->SetNPCDescription(var_406_int);
	string var_407_string;
	func_1646(var_407_string);
	var_394_object->SetPhoto(var_407_string);
	string var_408_string;
	func_1648(var_408_string);
	var_394_object->SetPhoto2(var_408_string);
	int var_409_int;
	func_1727(var_409_int);
	var_394_object->SetPlayerName(var_409_int);
	bool var_395_bool;
	@IsOverrideActive(var_395_bool);
	if(var_395_bool != 0) {
		var_387_int = -2;
		return 8;
	}
	@DoDialog(var_394_object);
	object var_411_object; object var_412_object;
	var_388_object = var_411_object;
	var_394_object = var_412_object;
	TaskCall(8);
	func_908(var_413_object, var_414_object, var_415_string, var_416_bool, var_411_object, var_412_object);
	TaskReturn();
	bool var_397_bool;
	var_394_object->IsDialogEnd(var_397_bool);
	
	for(;;) {
		var_441_bool = !var_397_bool; //@nz
		if(var_441_bool == 0) goto Label_897;
		@sync();
		var_394_object->IsDialogEnd(var_397_bool);
	}
	
Label_897:
	object var_442_object;
	var_388_object = var_442_object;
	func_1392();
	@StopDialog(var_394_object);
	var_394_object->GetReturnValue(-1);
	int var_396_int = var_387_int;
}
EMIT "Stack[-4] = 0";


void func_1598(int var_301_int, string var_302_string)
{
	int var_304_int;
	@GetVariable(var_302_string, var_304_int);
	var_304_int = var_301_int;
}


void func_1727(int var_201_int)
{
	int var_203_int;
	@GetVariable("branch", var_203_int);
	if(var_203_int == 0) {
		var_201_int = 1;
		return 2;
	EMIT "GOTO 0x6ce";
	}
	if(var_203_int == 1) {
		var_201_int = 2;
		return 2;
	}
	var_201_int = 3;
}


void func_1216(void)
{
	bool var_47_bool; int var_48_int; int var_49_int; bool var_50_bool;
	@WaitForAnimEnd();
	bool var_51_bool;
	func_1319(var_51_bool);
	if(!var_51_bool) //@nz
		return 12;
	int var_53_int;
	func_1625(var_53_int);
	int var_45_int;
	var_53_int = var_45_int;
	int var_46_int = 0;
	
	for(;;) {
		bool var_66_bool = false;
		if(var_46_int < 5) {
			bool var_69_bool;
			func_1319(var_69_bool);
			if(var_69_bool != 0)
				var_66_bool = true;
		}
		if(var_66_bool != 0) {
			if(!var_45_int) { //@nz
				@Sleep(3, var_47_bool);
				if(!var_47_bool) { //@nz
				} else {
			} else {
			@irand(var_48_int, var_45_int);
			@irand(var_49_int, 5);
			if(var_49_int != 0)
				var_48_int = 0;
			string var_80_string; int var_81_int;
			var_48_int = var_81_int;
			func_1618(var_80_string, var_81_int);
			@PlayAnimation("all", var_80_string);
			@WaitForAnimEnd(var_50_bool);
			var_82_bool = !var_50_bool; //@nz
			if(var_82_bool == 0) goto Label_1271;
			goto Label_1282;
			}
				Label_1271:
					bool var_73_bool;
					func_1285(var_73_bool);
					var_74_bool = !var_73_bool; //@nz
					if(var_74_bool == 0) goto Label_1277;
			}
		}
	Label_1282:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1277:
		@ResetAAS();
		var_46_int += 1;
	}
	
}


void func_1603(int var_110_int)
{
	float var_112_float;
	@GetGameTime(var_112_float);
	var_110_int = 1 + (var_112_float / 24);
}


// @pe
void func_966(object var_2_object, string var_418_string)
{
	bool var_419_bool;
	func_1650(var_419_bool);
	if(!var_419_bool) //@nz
		return 0;
	if(var_418_string == var_2_object)
		return 0;
	string var_422_string; bool var_423_bool;
	var_418_string = var_422_string;
	if(var_418_string == "")
		var_423_bool = false;
	else
		var_423_bool = true;
	func_1554(var_422_string, var_423_bool);
	var_2_object = var_418_string;
	
}


// @pe
void func_712(object var_2_object, string var_359_string)
{
	bool var_360_bool;
	func_1650(var_360_bool);
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
	func_1554(var_363_string, var_364_bool);
	var_2_object = var_359_string;
	
}


void func_1096(void)
{
	float var_35_float;
	@rand(var_35_float, 8, 16);
	@SetTimer(10, var_35_float);
}


// @pe
void func_1612(bool var_256_bool, int var_257_int)
{
	int var_258_int;
	func_1603(var_258_int);
	var_256_bool = var_258_int == var_257_int;
}


void func_1744(object var_39_object)
{
	int var_41_int;
	@GetVariable("mt_spi4ka", var_41_int);
	if(!var_41_int) { //@nz
		int var_44_int; object var_45_object;
		var_39_object = var_45_object;
		TaskCall(1);
		func_13(var_46_object, var_44_int, var_45_object);
		TaskReturn();
		@SetVariable("mt_spi4ka", 1);
	}
	bool var_256_bool;
	func_1612(var_256_bool, 8);
	if(var_256_bool != 0) {
		int var_259_int; object var_260_object;
		var_39_object = var_260_object;
		TaskCall(3);
		func_265(var_261_object, var_259_int, var_260_object);
		TaskReturn();
		return 2;
	}
	bool var_326_bool;
	func_1612(var_326_bool, 12);
	if(var_326_bool != 0) {
		int var_328_int; object var_329_object;
		var_39_object = var_329_object;
		TaskCall(5);
		func_568(var_330_object, var_328_int, var_329_object);
		TaskReturn();
		return 2;
	}
	int var_387_int; object var_388_object;
	var_39_object = var_388_object;
	TaskCall(7);
	func_827(var_389_object, var_387_int, var_388_object);
	TaskReturn();
}


void func_1105(void)
{
	@KillTimer(10);
}


void func_1618(string var_59_string, int var_60_int)
{
	string var_62_string = "idle";
	if(var_60_int != 0)
		var_62_string += var_60_int;
	var_62_string = var_59_string;
}


void func_1625(int var_53_int)
{
	int var_56_int; bool var_57_bool;
	var_56_int = 0;
	
	for(;;) {
		string var_59_string; int var_60_int;
		var_56_int = var_60_int;
		func_1618(var_59_string, var_60_int);
		@HasAnimation(var_57_bool, "all", var_59_string);
		if(!var_57_bool) //@nz
			break;
		var_56_int += 1;
	}
	var_56_int = var_53_int;
}


// @pe
void func_346(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_283_object, object var_284_object)
{
	var_0_object = var_284_object;
	var_3_string = false;
	if(1 != 0) {
		func_414(var_284_object, "Neutral");
		var_0_object->SetMessage(526413); //@t
		var_0_object->ClearReplies(); //@t
		bool var_299_bool;
		func_1661(var_283_object);
		if(var_299_bool != 0)
			var_0_object->AddReply(526414, 30415, 27689); //@t
		var_0_object->AddReply(526419, -1, 27694); //@t
		var_0_object->AddReply(528977, -1, 30414); //@t
		goto Label_384;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x15e";
	}
Label_384:
	bool var_316_bool;
	func_1650(var_316_bool);
	if(var_316_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1547(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_413;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_413:
		return 0;

	}
	
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_210_object, object var_211_object)
{
	var_0_object = var_211_object;
	var_1_object = var_210_object;
	var_3_string = false;
	if(1 != 0) {
		func_147(var_211_object, "Neutral");
		var_0_object->SetMessage(525525); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525526, 30726, 26882); //@t
		goto Label_117;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_117:
	bool var_233_bool;
	func_1650(var_233_bool);
	if(var_233_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1547(var_2_object);
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


void func_1504(bool var_97_bool, object var_98_object)
{
	bool var_106_bool; int var_107_int; string var_108_string;
	int var_110_int;
	func_1603(var_110_int);
	string var_104_string = ("d" + var_110_int) + "m";
	int var_105_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_98_object->HasProperty((var_104_string + (var_105_int + 1)), var_106_bool);
			if(!var_106_bool) { //@nz
			} else {
				var_105_int += 1;
			}
		}
		if(!var_105_int) { //@nz
			var_97_bool = false;
			return 10;
		}
		var_107_int = 0;
		if(var_105_int > 1)
			@irand(var_107_int, var_105_int);
		var_98_object->GetProperty((var_104_string + (var_107_int + 1)), var_108_string);
		bool var_129_bool; string var_130_string;
		var_108_string = var_130_string;
		func_1560(var_129_bool, var_130_string);
		var_129_bool = var_97_bool;
		return 10;

	}
}


void func_1642(int var_198_int)
{
	var_198_int = 515552;
}


void func_1644(int var_197_int)
{
	var_197_int = 502877;
}


void func_1646(string var_199_string)
{
	var_199_string = "ui/NPC_Spi4ka.png";
}


void func_1648(string var_200_string)
{
	var_200_string = "ui/NPC_Spi4ka_b.png";
}


void func_1392(void)
{
	bool var_249_bool;
	@CameraSwitchToNormal();
	bool var_250_bool;
	func_1650(var_250_bool);
	if(var_250_bool != 0) {
	} else {
		@HasAnimationTrack(var_249_bool, "head");
		if(var_249_bool == 0) goto Label_1408;
		@UnlookAsync("head");
	}
Label_1408:
	
}


void func_1650(bool var_93_bool)
{
	var_93_bool = true;
}


// @pe
void func_1652(void)
{
	@SetVariable("k8q01", 3);
	func_1673();
}


// @pe
void func_1661(bool var_299_bool)
{
	int var_301_int;
	func_1598(var_301_int, "k8q01");
	if(var_301_int == 2)
		var_299_bool = true;
	var_299_bool = false;
}


