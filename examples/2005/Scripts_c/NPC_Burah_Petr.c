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
			func_1595();
			if(var_21_bool == 36906) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_21_bool == 36953) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_21_bool == 36957) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_69_bool;
			func_1670(var_69_bool);
			if(var_69_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1595();
			if(var_21_bool == 19178) {
				func_411(var_22_cvector, "Neutral");
				var_0_object->SetMessage(518045); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518046, 32123, 19179); //@t
				var_0_object->AddReply(530814, 32123, 32122); //@t
				return 0;
			}
			if(var_21_bool == 32123) {
				func_411(var_22_cvector, "Neutral");
				var_0_object->SetMessage(530815); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530816, -1, 32125); //@t
				var_0_object->AddReply(530817, -1, 32126); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_1670(var_56_bool);
			if(var_56_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1595();
			if(var_22_cvector == 20596) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1672();
			}
			if(var_21_bool == 19322) {
				func_647(var_22_cvector, "Neutral");
				var_0_object->SetMessage(518209); //@t
				var_0_object->ClearReplies(); //@t
				bool var_46_bool;
				func_1678(var_1_object);
				if(var_46_bool != 0)
					var_0_object->AddReply(519429, 20597, 20596); //@t
				var_0_object->AddReply(518210, 20610, 19323); //@t
				var_0_object->AddReply(518211, -1, 19324); //@t
				return 0;
			}
			if(var_21_bool == 20610) {
				func_647(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519442); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519443, -1, 20611); //@t
				return 0;
			}
			if(var_21_bool == 20597) {
				func_647(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519430); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519431, 20599, 20598); //@t
				var_0_object->AddReply(519438, -1, 20605); //@t
				return 0;
			}
			if(var_21_bool == 20599) {
				func_647(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519432); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519433, 20601, 20600); //@t
				var_0_object->AddReply(519439, 20607, 20606); //@t
				return 0;
			}
			if(var_21_bool == 20607) {
				func_647(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519440); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519441, 20601, 20608); //@t
				return 0;
			}
			if(var_21_bool == 20601) {
				func_647(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519434); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519435, 20603, 20602); //@t
				return 0;
			}
			if(var_21_bool == 20603) {
				func_647(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519436); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519437, -1, 20604); //@t
				return 0;
			}
			var_3_string = true;
			bool var_111_bool;
			func_1670(var_111_bool);
			if(var_111_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x29e";
	
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
			func_1595();
			if(var_21_int == 42563) {
				func_986(var_22_cvector, "Neutral");
				var_0_object->SetMessage(540554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540555, -1, 42564); //@t
				var_0_object->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_string = true;
			bool var_46_bool;
			func_1670(var_46_bool);
			if(var_46_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3f1";
	
	}

}


maintask task_9
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1054(var_20_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, int var_21_int)
	{
		if(var_21_int == 10) {
			func_1125();
			bool var_25_bool = false;
			bool var_26_bool;
			func_1339(var_26_bool);
			if(var_26_bool != 0) {
				bool var_29_bool;
				func_1094(var_29_bool);
				if(var_29_bool != 0)
					var_25_bool = true;
			}
			if(var_25_bool != 0) {
				bool var_46_bool;
				func_1074(var_46_bool);
				if(var_46_bool != 0) {
					bool var_65_bool; object var_66_object;
					object var_67_object;
					func_1602(var_67_object);
					var_67_object = var_66_object;
					func_1487(var_65_bool, var_66_object);
				}
			} else {
				func_1089(var_21_int);
				func_1116();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1307();
		func_1125();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
		{
		@StopGroup0();
		func_1125();
		func_1567("Neutral");
		func_1116();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 0)
			func_1116();
		else
			func_1567("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, object var_21_object)
	{
		bool var_23_bool;
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			disable OnUse;
			func_1307();
			bool var_25_bool; object var_26_object;
			var_21_object = var_26_object;
			func_1330(var_25_bool, var_26_object);
			enable OnUse;
			object var_39_object;
			var_21_object = var_39_object;
			func_1707(var_39_object);
			func_1567("Neutral");
			func_1125();
			func_1116();
		}
	}

}


void func_1664(int var_199_int)
{
	var_199_int = 502875;
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_25_bool;
	func_1339(var_25_bool);
	if(!var_25_bool) goto Label_0; //@nz
}


void func_1666(string var_201_string)
{
	var_201_string = "ui/NPC_Petr.png";
}


void func_1668(string var_202_string)
{
	var_202_string = "ui/NPC_Petr_b.png";
}


void func_1412(void)
{
	bool var_254_bool;
	@CameraSwitchToNormal();
	bool var_255_bool;
	func_1670(var_255_bool);
	if(var_255_bool != 0) {
	} else {
		@HasAnimationTrack(var_254_bool, "head");
		if(var_254_bool == 0) goto Label_1428;
		@UnlookAsync("head");
	}
Label_1428:
	
}


void func_1670(bool var_95_bool)
{
	var_95_bool = true;
}


// @pe
void func_647(object var_2_object, string var_295_string)
{
	bool var_296_bool;
	func_1670(var_296_bool);
	if(!var_296_bool) //@nz
		return 0;
	if(var_295_string == var_2_object)
		return 0;
	string var_299_string; bool var_300_bool;
	var_295_string = var_299_string;
	if(var_295_string == "")
		var_300_bool = false;
	else
		var_300_bool = true;
	func_1574(var_299_string, var_300_bool);
	var_2_object = var_295_string;
	
}


// @pe
void func_1672(void)
{
	@SetVariable("oob2Petr1", 1);
}


void func_13(object var_0_object, int var_336_int, object var_337_object)
{
	var_0_object = var_337_object;
	bool var_347_bool; object var_348_object;
	object var_349_object;
	func_1602(var_349_object);
	var_349_object = var_348_object;
	func_1429(var_347_bool, var_348_object);
	bool var_350_bool; object var_351_object;
	var_337_object = var_351_object;
	func_1344(var_350_bool, var_351_object, 70.0);
	if(!var_350_bool) { //@nz
		var_336_int = -2;
		return 8;
	}
	object var_343_object;
	@CreateDialog(var_343_object);
	int var_354_int;
	func_1664(var_354_int);
	var_343_object->SetNPCName(var_354_int);
	int var_355_int;
	func_1662(var_355_int);
	var_343_object->SetNPCDescription(var_355_int);
	string var_356_string;
	func_1666(var_356_string);
	var_343_object->SetPhoto(var_356_string);
	string var_357_string;
	func_1668(var_357_string);
	var_343_object->SetPhoto2(var_357_string);
	int var_358_int;
	func_1690(var_358_int);
	var_343_object->SetPlayerName(var_358_int);
	bool var_344_bool;
	@IsOverrideActive(var_344_bool);
	if(var_344_bool != 0) {
		var_336_int = -2;
		return 8;
	}
	@DoDialog(var_343_object);
	object var_360_object; object var_361_object;
	var_337_object = var_360_object;
	var_343_object = var_361_object;
	TaskCall(2);
	func_94(var_362_object, var_363_object, var_364_string, var_365_bool, var_360_object, var_361_object);
	TaskReturn();
	bool var_346_bool;
	var_343_object->IsDialogEnd(var_346_bool);
	
	for(;;) {
		var_393_bool = !var_346_bool; //@nz
		if(var_393_bool == 0) goto Label_83;
		@sync();
		var_343_object->IsDialogEnd(var_346_bool);
	}
	
Label_83:
	object var_394_object;
	var_337_object = var_394_object;
	func_1412();
	@StopDialog(var_343_object);
	var_343_object->GetReturnValue(-1);
	int var_345_int = var_336_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1678(bool var_304_bool)
{
	int var_306_int;
	func_1618(var_306_int, "oob2Petr1");
	if(var_306_int == 0) {
		var_304_bool = true;
		return 0;
	}
	var_304_bool = false;
}


void func_272(object var_0_object, int var_46_int, object var_47_object)
{
	var_0_object = var_47_object;
	bool var_57_bool; object var_58_object;
	object var_59_object;
	func_1602(var_59_object);
	var_59_object = var_58_object;
	func_1429(var_57_bool, var_58_object);
	bool var_152_bool; object var_153_object;
	var_47_object = var_153_object;
	func_1344(var_152_bool, var_153_object, 70.0);
	if(!var_152_bool) { //@nz
		var_46_int = -2;
		return 8;
	}
	object var_53_object;
	@CreateDialog(var_53_object);
	int var_199_int;
	func_1664(var_199_int);
	var_53_object->SetNPCName(var_199_int);
	int var_200_int;
	func_1662(var_200_int);
	var_53_object->SetNPCDescription(var_200_int);
	string var_201_string;
	func_1666(var_201_string);
	var_53_object->SetPhoto(var_201_string);
	string var_202_string;
	func_1668(var_202_string);
	var_53_object->SetPhoto2(var_202_string);
	int var_203_int;
	func_1690(var_203_int);
	var_53_object->SetPlayerName(var_203_int);
	bool var_54_bool;
	@IsOverrideActive(var_54_bool);
	if(var_54_bool != 0) {
		var_46_int = -2;
		return 8;
	}
	@DoDialog(var_53_object);
	object var_212_object; object var_213_object;
	var_47_object = var_212_object;
	var_53_object = var_213_object;
	TaskCall(4);
	func_353(var_214_object, var_215_object, var_216_string, var_217_bool, var_212_object, var_213_object);
	TaskReturn();
	bool var_56_bool;
	var_53_object->IsDialogEnd(var_56_bool);
	
	for(;;) {
		var_251_bool = !var_56_bool; //@nz
		if(var_251_bool == 0) goto Label_342;
		@sync();
		var_53_object->IsDialogEnd(var_56_bool);
	}
	
Label_342:
	object var_252_object;
	var_47_object = var_252_object;
	func_1412();
	@StopDialog(var_53_object);
	var_53_object->GetReturnValue(-1);
	int var_55_int = var_46_int;
}
EMIT "Stack[-4] = 0";


void func_1429(bool var_57_bool, object var_58_object)
{
	int var_64_int; int var_65_int;
	@GetVariable("voice_common", var_64_int);
	if(var_64_int != 0) {
		bool var_68_bool; object var_69_object;
		var_58_object = var_69_object;
		func_1487(var_68_bool, var_69_object);
		if(!var_68_bool) { //@nz
			bool var_99_bool; object var_100_object;
			var_58_object = var_100_object;
			func_1524(var_99_bool, var_100_object);
			if(!var_99_bool) { //@nz
				var_57_bool = false;
				return 4;
			}
		}
		@irand(var_65_int, 2);
		if(var_65_int != 0)
			@SetVariable("voice_common", ((var_64_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_144_bool; object var_145_object;
		var_58_object = var_145_object;
		func_1524(var_144_bool, var_145_object);
		if(!var_144_bool) { //@nz
			bool var_147_bool; object var_148_object;
			var_58_object = var_148_object;
			func_1487(var_147_bool, var_148_object);
			if(!var_147_bool) { //@nz
				var_57_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1485;
	
Label_1485:
	var_57_bool = true;
	
}


void func_1305(bool var_73_bool)
{
	var_73_bool = true;
}


void func_1690(int var_203_int)
{
	int var_205_int;
	@GetVariable("branch", var_205_int);
	if(var_205_int == 0) {
		var_203_int = 1;
		return 2;
	EMIT "GOTO 0x6a9";
	}
	if(var_205_int == 1) {
		var_203_int = 2;
		return 2;
	}
	var_203_int = 3;
}


void func_1307(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_411(object var_2_object, string var_219_string)
{
	bool var_220_bool;
	func_1670(var_220_bool);
	if(!var_220_bool) //@nz
		return 0;
	if(var_219_string == var_2_object)
		return 0;
	string var_223_string; bool var_224_bool;
	var_219_string = var_223_string;
	if(var_219_string == "")
		var_224_bool = false;
	else
		var_224_bool = true;
	func_1574(var_223_string, var_224_bool);
	var_2_object = var_219_string;
	
}


// @pe
void func_157(object var_2_object, string var_367_string)
{
	bool var_368_bool;
	func_1670(var_368_bool);
	if(!var_368_bool) //@nz
		return 0;
	if(var_367_string == var_2_object)
		return 0;
	string var_371_string; bool var_372_bool;
	var_367_string = var_371_string;
	if(var_367_string == "")
		var_372_bool = false;
	else
		var_372_bool = true;
	func_1574(var_371_string, var_372_bool);
	var_2_object = var_367_string;
	
}


void func_1054(object var_0_object)
{
	bool var_21_bool;
	func_1339(var_21_bool);
	if(!var_21_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1182();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1236();
	}
}
EMIT "Return(); Pop(0)";


void func_1567(string var_28_string)
{
	float var_31_float; float var_32_float;
	@lshGetAnimTimes(var_28_string, var_31_float, var_32_float);
	@lshPlayAnimation(var_31_float, var_32_float, false);
}


// @pe
void func_928(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_421_object, object var_422_object)
{
	var_0_object = var_422_object;
	var_1_object = var_421_object;
	var_3_string = false;
	if(1 != 0) {
		func_986(var_422_object, "Neutral");
		var_0_object->SetMessage(540554); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540555, -1, 42564); //@t
		var_0_object->AddReply(540794, -1, 42843); //@t
		goto Label_956;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3a4";
	}
Label_956:
	bool var_443_bool;
	func_1670(var_443_bool);
	if(var_443_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1567(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_985;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_985:
		return 0;

	}
	
}


void func_1312(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


void func_1574(string var_223_string, bool var_224_bool)
{
	float var_229_float; float var_230_float;
	@lshGetAnimTimes(var_223_string, var_229_float, var_230_float);
	@lshPlayAnimation(var_229_float, var_230_float, var_224_bool);
}


void func_1320(bool var_29_bool, cvector var_30_cvector)
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


void func_1707(object var_39_object)
{
	int var_42_int;
	@GetVariable("mt_petr", var_42_int);
	if(!var_42_int) { //@nz
		int var_46_int; object var_47_object;
		var_39_object = var_47_object;
		TaskCall(3);
		func_272(var_48_object, var_46_int, var_47_object);
		TaskReturn();
		@SetVariable("mt_petr", 1);
	}
	bool var_261_bool;
	func_1632(var_261_bool, 2);
	if(var_261_bool != 0) {
		int var_264_int; object var_265_object;
		var_39_object = var_265_object;
		TaskCall(5);
		func_498(var_266_object, var_264_int, var_265_object);
		TaskReturn();
		return 4;
	}
	int var_43_int;
	@GetVariable("d12_petr", var_43_int);
	bool var_332_bool = false;
	bool var_333_bool;
	func_1632(var_333_bool, 12);
	if(var_333_bool != 0) {
		if(var_43_int != 0)
			var_332_bool = true;
	}
	if(var_332_bool != 0) {
		int var_336_int; object var_337_object;
		var_39_object = var_337_object;
		TaskCall(1);
		func_13(var_338_object, var_336_int, var_337_object);
		TaskReturn();
		@SetVariable("d12_petr", 1);
		return 4;
	}
	int var_397_int; object var_398_object;
	var_39_object = var_398_object;
	TaskCall(7);
	func_847(var_399_object, var_397_int, var_398_object);
	TaskReturn();
}


void func_1580(bool var_91_bool, string var_92_string)
{
	bool var_94_bool;
	bool var_95_bool;
	func_1670(var_95_bool);
	if(var_95_bool != 0) {
		@lshHasSpeech(var_94_bool, var_92_string);
		if(var_94_bool != 0) {
			@lshPlaySpeech(var_92_string);
			var_91_bool = true;
		}
	}
	var_91_bool = false;
}


void func_1330(bool var_25_bool, object var_26_object)
{
	cvector var_28_cvector;
	var_26_object->GetPosition(var_28_cvector);
	bool var_29_bool; cvector var_30_cvector;
	var_28_cvector = var_30_cvector;
	func_1320(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
}


void func_1074(bool var_46_bool)
{
	object var_48_object;
	@FindActor(var_48_object, "player");
	if(!var_48_object) //@nz
		var_46_bool = false;
	bool var_51_bool; object var_52_object;
	var_48_object = var_52_object;
	func_1330(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
}
EMIT "Stack[-1] = 0";


void func_1339(bool var_21_bool)
{
	bool var_23_bool;
	@IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
}


void func_1595(void)
{
	bool var_24_bool;
	func_1670(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


void func_1344(bool var_152_bool, object var_153_object, float var_154_float)
{
	cvector var_165_cvector; bool var_172_bool;
	var_153_object->GetPosition(var_165_cvector);
	float var_164_float;
	var_153_object->GetEyesHeight(var_164_float);
	var_173_float = GetByIndex(var_165_cvector, 1);
	SetByIndex(var_165_cvector, 1) = (var_173_float + var_164_float);
	cvector var_166_cvector;
	@GetPosition(var_166_cvector);
	@GetEyesHeight(var_164_float);
	var_174_float = GetByIndex(var_166_cvector, 1);
	SetByIndex(var_166_cvector, 1) = (var_174_float + var_164_float);
	cvector var_167_cvector = var_165_cvector - var_166_cvector;
	var_175_float = GetByIndex(var_167_cvector, 1);
	SetByIndex(var_167_cvector, 1) = (float)0;
	var_177_float = sqrt(var_167_cvector | var_167_cvector);
	var_167_cvector /= var_177_float;
	cvector var_168_cvector = -var_167_cvector;
	cvector var_179_cvector;
	func_1608(var_179_cvector, (var_168_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_169_cvector = ((var_167_cvector * var_154_float) + (var_179_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_171_bool;
	@IsOverrideActive(var_171_bool);
	if(var_171_bool != 0)
		var_152_bool = false;
	@StopWorld();
	@CameraTransit((var_166_cvector + var_169_cvector), var_168_cvector);
	var_192_float = GetByIndex(var_169_cvector, 0);
	var_193_float = GetByIndex(var_169_cvector, 2);
	@Rotate(var_192_float, var_193_float);
	bool var_194_bool;
	func_1670(var_194_bool);
	if(var_194_bool != 0) {
	} else {
		@HasAnimationTrack(var_172_bool, "head");
		if(var_172_bool == 0) goto Label_1406;
		@LookAsyncCamera("head");
	}
Label_1406:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_152_bool = true;
	
}


void func_1089(object var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_98_float, var_99_float);
}


void func_1602(object var_59_object)
{
	object var_61_object;
	@self(var_61_object);
	var_61_object = var_59_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_579(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_288_object, object var_289_object)
{
	var_0_object = var_289_object;
	var_3_string = false;
	if(1 != 0) {
		func_647(var_289_object, "Neutral");
		var_0_object->SetMessage(518209); //@t
		var_0_object->ClearReplies(); //@t
		bool var_304_bool;
		func_1678(var_288_object);
		if(var_304_bool != 0)
			var_0_object->AddReply(519429, 20597, 20596); //@t
		var_0_object->AddReply(518210, 20610, 19323); //@t
		var_0_object->AddReply(518211, -1, 19324); //@t
		goto Label_617;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x247";
	}
Label_617:
	bool var_321_bool;
	func_1670(var_321_bool);
	if(var_321_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1567(var_2_object);
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


void func_1094(bool var_29_bool)
{
	object var_32_object;
	@FindActor(var_32_object, "player");
	if(!var_32_object) { //@nz
		var_29_bool = false;
		return 4;
	}
	float var_36_float; object var_37_object;
	func_1312(var_36_float, var_37_object);
	if(var_36_float > 90000.0) {
		var_29_bool = false;
		return 4;
	}
	bool var_33_bool;
	@CanSee(var_33_bool, var_37_object);
	var_33_bool = var_29_bool;
}
EMIT "Stack[-2] = 0";


void func_1608(cvector var_179_cvector, cvector var_180_cvector)
{
	float var_183_float = sqrt(var_180_cvector | var_180_cvector);
	if(var_183_float < 0.000001)
		var_179_cvector = [0.0, 0.0, 0.0];
	var_179_cvector = var_180_cvector / var_183_float;
}


void func_1487(bool var_68_bool, object var_69_object)
{
	string var_75_string; bool var_77_bool; int var_78_int; string var_79_string;
	var_75_string = "c";
	int var_76_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_69_object->HasProperty((var_75_string + (var_76_int + 1)), var_77_bool);
			if(!var_77_bool) { //@nz
			} else {
				var_76_int += 1;
			}
		}
		if(!var_76_int) { //@nz
			var_68_bool = false;
			return 10;
		}
		var_78_int = 0;
		if(var_76_int > 1)
			@irand(var_78_int, var_76_int);
		var_69_object->GetProperty((var_75_string + (var_78_int + 1)), var_79_string);
		bool var_91_bool; string var_92_string;
		var_79_string = var_92_string;
		func_1580(var_91_bool, var_92_string);
		var_91_bool = var_68_bool;
		return 10;

	}
}


void func_847(object var_0_object, int var_397_int, object var_398_object)
{
	var_0_object = var_398_object;
	bool var_408_bool; object var_409_object;
	object var_410_object;
	func_1602(var_410_object);
	var_410_object = var_409_object;
	func_1429(var_408_bool, var_409_object);
	bool var_411_bool; object var_412_object;
	var_398_object = var_412_object;
	func_1344(var_411_bool, var_412_object, 70.0);
	if(!var_411_bool) { //@nz
		var_397_int = -2;
		return 8;
	}
	object var_404_object;
	@CreateDialog(var_404_object);
	int var_415_int;
	func_1664(var_415_int);
	var_404_object->SetNPCName(var_415_int);
	int var_416_int;
	func_1662(var_416_int);
	var_404_object->SetNPCDescription(var_416_int);
	string var_417_string;
	func_1666(var_417_string);
	var_404_object->SetPhoto(var_417_string);
	string var_418_string;
	func_1668(var_418_string);
	var_404_object->SetPhoto2(var_418_string);
	int var_419_int;
	func_1690(var_419_int);
	var_404_object->SetPlayerName(var_419_int);
	bool var_405_bool;
	@IsOverrideActive(var_405_bool);
	if(var_405_bool != 0) {
		var_397_int = -2;
		return 8;
	}
	@DoDialog(var_404_object);
	object var_421_object; object var_422_object;
	var_398_object = var_421_object;
	var_404_object = var_422_object;
	TaskCall(8);
	func_928(var_423_object, var_424_object, var_425_string, var_426_bool, var_421_object, var_422_object);
	TaskReturn();
	bool var_407_bool;
	var_404_object->IsDialogEnd(var_407_bool);
	
	for(;;) {
		var_451_bool = !var_407_bool; //@nz
		if(var_451_bool == 0) goto Label_917;
		@sync();
		var_404_object->IsDialogEnd(var_407_bool);
	}
	
Label_917:
	object var_452_object;
	var_398_object = var_452_object;
	func_1412();
	@StopDialog(var_404_object);
	var_404_object->GetReturnValue(-1);
	int var_406_int = var_397_int;
}
EMIT "Stack[-4] = 0";


void func_1618(int var_306_int, string var_307_string)
{
	int var_309_int;
	@GetVariable(var_307_string, var_309_int);
	var_309_int = var_306_int;
}


void func_1236(void)
{
	bool var_47_bool; int var_48_int; int var_49_int; bool var_50_bool;
	@WaitForAnimEnd();
	bool var_51_bool;
	func_1339(var_51_bool);
	if(!var_51_bool) //@nz
		return 12;
	int var_53_int;
	func_1645(var_53_int);
	int var_45_int;
	var_53_int = var_45_int;
	int var_46_int = 0;
	
	for(;;) {
		bool var_66_bool = false;
		if(var_46_int < 5) {
			bool var_69_bool;
			func_1339(var_69_bool);
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
			func_1638(var_80_string, var_81_int);
			@PlayAnimation("all", var_80_string);
			@WaitForAnimEnd(var_50_bool);
			var_82_bool = !var_50_bool; //@nz
			if(var_82_bool == 0) goto Label_1291;
			goto Label_1302;
			}
				Label_1291:
					bool var_73_bool;
					func_1305(var_73_bool);
					var_74_bool = !var_73_bool; //@nz
					if(var_74_bool == 0) goto Label_1297;
			}
		}
	Label_1302:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1297:
		@ResetAAS();
		var_46_int += 1;
	}
	
}


void func_1623(int var_112_int)
{
	float var_114_float;
	@GetGameTime(var_114_float);
	var_112_int = 1 + (var_114_float / 24);
}


// @pe
void func_986(object var_2_object, string var_428_string)
{
	bool var_429_bool;
	func_1670(var_429_bool);
	if(!var_429_bool) //@nz
		return 0;
	if(var_428_string == var_2_object)
		return 0;
	string var_432_string; bool var_433_bool;
	var_428_string = var_432_string;
	if(var_428_string == "")
		var_433_bool = false;
	else
		var_433_bool = true;
	func_1574(var_432_string, var_433_bool);
	var_2_object = var_428_string;
	
}


void func_1116(void)
{
	float var_35_float;
	@rand(var_35_float, 8, 16);
	@SetTimer(10, var_35_float);
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_360_object, object var_361_object)
{
	var_0_object = var_361_object;
	var_1_object = var_360_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_361_object, "Neutral");
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
	bool var_385_bool;
	func_1670(var_385_bool);
	if(var_385_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1567(var_2_object);
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
void func_1632(bool var_261_bool, int var_262_int)
{
	int var_263_int;
	func_1623(var_263_int);
	var_261_bool = var_263_int == var_262_int;
}


// @pe
void func_353(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_212_object, object var_213_object)
{
	var_0_object = var_213_object;
	var_1_object = var_212_object;
	var_3_string = false;
	if(1 != 0) {
		func_411(var_213_object, "Neutral");
		var_0_object->SetMessage(518045); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518046, 32123, 19179); //@t
		var_0_object->AddReply(530814, 32123, 32122); //@t
		goto Label_381;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x165";
	}
Label_381:
	bool var_238_bool;
	func_1670(var_238_bool);
	if(var_238_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1567(var_2_object);
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


void func_1125(void)
{
	@KillTimer(10);
}


void func_1638(string var_59_string, int var_60_int)
{
	string var_62_string = "idle";
	if(var_60_int != 0)
		var_62_string += var_60_int;
	var_62_string = var_59_string;
}


void func_1645(int var_53_int)
{
	int var_56_int; bool var_57_bool;
	var_56_int = 0;
	
	for(;;) {
		string var_59_string; int var_60_int;
		var_56_int = var_60_int;
		func_1638(var_59_string, var_60_int);
		@HasAnimation(var_57_bool, "all", var_59_string);
		if(!var_57_bool) //@nz
			break;
		var_56_int += 1;
	}
	var_56_int = var_53_int;
}


void func_498(object var_0_object, int var_264_int, object var_265_object)
{
	var_0_object = var_265_object;
	bool var_275_bool; object var_276_object;
	object var_277_object;
	func_1602(var_277_object);
	var_277_object = var_276_object;
	func_1429(var_275_bool, var_276_object);
	bool var_278_bool; object var_279_object;
	var_265_object = var_279_object;
	func_1344(var_278_bool, var_279_object, 70.0);
	if(!var_278_bool) { //@nz
		var_264_int = -2;
		return 8;
	}
	object var_271_object;
	@CreateDialog(var_271_object);
	int var_282_int;
	func_1664(var_282_int);
	var_271_object->SetNPCName(var_282_int);
	int var_283_int;
	func_1662(var_283_int);
	var_271_object->SetNPCDescription(var_283_int);
	string var_284_string;
	func_1666(var_284_string);
	var_271_object->SetPhoto(var_284_string);
	string var_285_string;
	func_1668(var_285_string);
	var_271_object->SetPhoto2(var_285_string);
	int var_286_int;
	func_1690(var_286_int);
	var_271_object->SetPlayerName(var_286_int);
	bool var_272_bool;
	@IsOverrideActive(var_272_bool);
	if(var_272_bool != 0) {
		var_264_int = -2;
		return 8;
	}
	@DoDialog(var_271_object);
	object var_288_object; object var_289_object;
	var_265_object = var_288_object;
	var_271_object = var_289_object;
	TaskCall(6);
	func_579(var_290_object, var_291_object, var_292_string, var_293_bool, var_288_object, var_289_object);
	TaskReturn();
	bool var_274_bool;
	var_271_object->IsDialogEnd(var_274_bool);
	
	for(;;) {
		var_329_bool = !var_274_bool; //@nz
		if(var_329_bool == 0) goto Label_568;
		@sync();
		var_271_object->IsDialogEnd(var_274_bool);
	}
	
Label_568:
	object var_330_object;
	var_265_object = var_330_object;
	func_1412();
	@StopDialog(var_271_object);
	var_271_object->GetReturnValue(-1);
	int var_273_int = var_264_int;
}
EMIT "Stack[-4] = 0";


void func_1524(bool var_99_bool, object var_100_object)
{
	bool var_108_bool; int var_109_int; string var_110_string;
	int var_112_int;
	func_1623(var_112_int);
	string var_106_string = ("d" + var_112_int) + "m";
	int var_107_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_100_object->HasProperty((var_106_string + (var_107_int + 1)), var_108_bool);
			if(!var_108_bool) { //@nz
			} else {
				var_107_int += 1;
			}
		}
		if(!var_107_int) { //@nz
			var_99_bool = false;
			return 10;
		}
		var_109_int = 0;
		if(var_107_int > 1)
			@irand(var_109_int, var_107_int);
		var_100_object->GetProperty((var_106_string + (var_109_int + 1)), var_110_string);
		bool var_131_bool; string var_132_string;
		var_110_string = var_132_string;
		func_1580(var_131_bool, var_132_string);
		var_131_bool = var_99_bool;
		return 10;

	}
}


void func_1662(int var_200_int)
{
	var_200_int = 515550;
}


