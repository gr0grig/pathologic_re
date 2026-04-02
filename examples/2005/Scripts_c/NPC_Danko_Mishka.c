// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_1860();
			if(var_26_bool == 36960) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_26_bool == 36962) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_26_bool == 36964) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_74_bool;
			func_1935(var_74_bool);
			if(var_74_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_1860();
			if(var_26_bool == 526) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_1943();
				func_421(var_27_cvector, "Neutral");
				var_0_object->SetMessage(500457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500458, 530, 527); //@t
				var_0_object->AddReply(500459, 532, 528); //@t
				var_0_object->AddReply(500460, 530, 529); //@t
				return 0;
			}
			if(var_26_bool == 532) {
				func_421(var_27_cvector, "Neutral");
				var_0_object->SetMessage(500462); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500466, 538, 536); //@t
				var_0_object->AddReply(500467, -1, 537); //@t
				return 0;
			}
			if(var_26_bool == 538) {
				func_421(var_27_cvector, "Neutral");
				var_0_object->SetMessage(500468); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500470, -1, 540); //@t
				var_0_object->AddReply(500471, -1, 541); //@t
				return 0;
			}
			if(var_26_bool == 530) {
				func_421(var_27_cvector, "Neutral");
				var_0_object->SetMessage(500461); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500463, 535, 533); //@t
				var_0_object->AddReply(500464, -1, 534); //@t
				return 0;
			}
			if(var_26_bool == 535) {
				func_421(var_27_cvector, "Neutral");
				var_0_object->SetMessage(500465); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506269, -1, 6939); //@t
				return 0;
			}
			var_3_string = true;
			bool var_95_bool;
			func_1935(var_95_bool);
			if(var_95_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1bc";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_1860();
			if(var_26_bool == 11026) {
				func_716(var_27_cvector, "Neutral");
				var_0_object->SetMessage(510004); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510015, -1, 11037); //@t
				return 0;
			}
			var_3_string = true;
			bool var_48_bool;
			func_1935(var_48_bool);
			if(var_48_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2e3";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_1860();
			if(var_27_cvector == 14011) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_1937();
			}
			if(var_26_bool == 13999) {
				func_928(var_27_cvector, "Neutral");
				var_0_object->SetMessage(512800); //@t
				var_0_object->ClearReplies(); //@t
				bool var_51_bool = false;
				bool var_52_bool;
				func_1949(var_1_object);
				if(var_52_bool != 0) {
					bool var_60_bool;
					func_1961(var_1_object);
					if(var_60_bool != 0)
						var_51_bool = true;
				}
				if(var_51_bool != 0)
					var_0_object->AddReply(512801, 14001, 14000); //@t
				var_0_object->AddReply(512813, -1, 14013); //@t
				return 0;
			}
			if(var_26_bool == 14001) {
				func_928(var_27_cvector, "Neutral");
				var_0_object->SetMessage(512802); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512803, 14003, 14002); //@t
				return 0;
			}
			if(var_26_bool == 14003) {
				func_928(var_27_cvector, "Neutral");
				var_0_object->SetMessage(512804); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512805, 14005, 14004); //@t
				var_0_object->AddReply(512808, 14005, 14007); //@t
				return 0;
			}
			if(var_26_bool == 14005) {
				func_928(var_27_cvector, "Neutral");
				var_0_object->SetMessage(512806); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512807, 14008, 14006); //@t
				return 0;
			}
			if(var_26_bool == 14008) {
				func_928(var_27_cvector, "Neutral");
				var_0_object->SetMessage(512809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512810, 14010, 14009); //@t
				return 0;
			}
			if(var_26_bool == 14010) {
				func_928(var_27_cvector, "Neutral");
				var_0_object->SetMessage(512811); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512812, -1, 14011); //@t
				return 0;
			}
			var_3_string = true;
			bool var_110_bool;
			func_1935(var_110_bool);
			if(var_110_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3b7";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_1860();
			if(var_26_int == 42557) {
				func_1248(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540549, -1, 42558); //@t
				var_0_object->AddReply(540797, -1, 42846); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_1935(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4f7";
	
	}

}


maintask task_11
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		var_26_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1319(var_25_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, int var_26_int)
	{
		if(var_26_int == 10) {
			func_1390();
			bool var_30_bool = false;
			bool var_31_bool;
			func_1604(var_31_bool);
			if(var_31_bool != 0) {
				bool var_34_bool;
				func_1359(var_34_bool);
				if(var_34_bool != 0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				bool var_51_bool;
				func_1339(var_51_bool);
				if(var_51_bool != 0) {
					bool var_70_bool; object var_71_object;
					object var_72_object;
					func_1867(var_72_object);
					var_72_object = var_71_object;
					func_1752(var_70_bool, var_71_object);
				}
			} else {
				func_1354(var_26_int);
				func_1381();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_1572();
		func_1390();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
		{
		@StopGroup0();
		func_1390();
		func_1832("Neutral");
		func_1381();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, bool var_26_bool)
	{
		if(var_26_bool != 0)
			func_1381();
		else
			func_1832("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, object var_26_object)
	{
		bool var_28_bool;
		@IsOverrideActive(var_28_bool);
		if(!var_28_bool) { //@nz
			disable OnUse;
			func_1572();
			bool var_30_bool; object var_31_object;
			var_26_object = var_31_object;
			func_1595(var_30_bool, var_31_object);
			enable OnUse;
			object var_44_object;
			var_26_object = var_44_object;
			func_1990(var_44_object);
			func_1832("Neutral");
			func_1390();
			func_1381();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_31_bool;
	func_1604(var_31_bool);
	if(!var_31_bool) goto Label_0; //@nz
}


void func_775(object var_0_object, int var_326_int, object var_327_object)
{
	var_0_object = var_327_object;
	bool var_337_bool; object var_338_object;
	object var_339_object;
	func_1867(var_339_object);
	var_339_object = var_338_object;
	func_1694(var_337_bool, var_338_object);
	bool var_340_bool; object var_341_object;
	var_327_object = var_341_object;
	func_1609(var_340_bool, var_341_object, 70.0);
	if(!var_340_bool) { //@nz
		var_326_int = -2;
		return 8;
	}
	object var_333_object;
	@CreateDialog(var_333_object);
	int var_344_int;
	func_1929(var_344_int);
	var_333_object->SetNPCName(var_344_int);
	int var_345_int;
	func_1927(var_345_int);
	var_333_object->SetNPCDescription(var_345_int);
	string var_346_string;
	func_1931(var_346_string);
	var_333_object->SetPhoto(var_346_string);
	string var_347_string;
	func_1933(var_347_string);
	var_333_object->SetPhoto2(var_347_string);
	int var_348_int;
	func_1973(var_348_int);
	var_333_object->SetPlayerName(var_348_int);
	bool var_334_bool;
	@IsOverrideActive(var_334_bool);
	if(var_334_bool != 0) {
		var_326_int = -2;
		return 8;
	}
	@DoDialog(var_333_object);
	object var_350_object; object var_351_object;
	var_327_object = var_350_object;
	var_333_object = var_351_object;
	TaskCall(8);
	func_856(var_352_object, var_353_object, var_354_string, var_355_bool, var_350_object, var_351_object);
	TaskReturn();
	bool var_336_bool;
	var_333_object->IsDialogEnd(var_336_bool);
	
	for(;;) {
		var_395_bool = !var_336_bool; //@nz
		if(var_395_bool == 0) goto Label_845;
		@sync();
		var_333_object->IsDialogEnd(var_336_bool);
	}
	
Label_845:
	object var_396_object;
	var_327_object = var_396_object;
	func_1677();
	@StopDialog(var_333_object);
	var_333_object->GetReturnValue(-1);
	int var_335_int = var_326_int;
}
EMIT "Stack[-4] = 0";


void func_1927(int var_201_int)
{
	var_201_int = 515546;
}


void func_1929(int var_200_int)
{
	var_200_int = 502871;
}


void func_1931(string var_202_string)
{
	var_202_string = "ui/NPC_Mishka.png";
}


void func_1933(string var_203_string)
{
	var_203_string = "ui/NPC_Mishka_b.png";
}


void func_1677(void)
{
	bool var_262_bool;
	@CameraSwitchToNormal();
	bool var_263_bool;
	func_1935(var_263_bool);
	if(var_263_bool != 0) {
	} else {
		@HasAnimationTrack(var_262_bool, "head");
		if(var_262_bool == 0) goto Label_1693;
		@UnlookAsync("head");
	}
Label_1693:
	
}


void func_1935(bool var_96_bool)
{
	var_96_bool = true;
}


void func_272(object var_0_object, int var_47_int, object var_48_object)
{
	var_0_object = var_48_object;
	bool var_58_bool; object var_59_object;
	object var_60_object;
	func_1867(var_60_object);
	var_60_object = var_59_object;
	func_1694(var_58_bool, var_59_object);
	bool var_153_bool; object var_154_object;
	var_48_object = var_154_object;
	func_1609(var_153_bool, var_154_object, 70.0);
	if(!var_153_bool) { //@nz
		var_47_int = -2;
		return 8;
	}
	object var_54_object;
	@CreateDialog(var_54_object);
	int var_200_int;
	func_1929(var_200_int);
	var_54_object->SetNPCName(var_200_int);
	int var_201_int;
	func_1927(var_201_int);
	var_54_object->SetNPCDescription(var_201_int);
	string var_202_string;
	func_1931(var_202_string);
	var_54_object->SetPhoto(var_202_string);
	string var_203_string;
	func_1933(var_203_string);
	var_54_object->SetPhoto2(var_203_string);
	int var_204_int;
	func_1973(var_204_int);
	var_54_object->SetPlayerName(var_204_int);
	bool var_55_bool;
	@IsOverrideActive(var_55_bool);
	if(var_55_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	@DoDialog(var_54_object);
	object var_213_object; object var_214_object;
	var_48_object = var_213_object;
	var_54_object = var_214_object;
	TaskCall(4);
	func_353(var_215_object, var_216_object, var_217_string, var_218_bool, var_213_object, var_214_object);
	TaskReturn();
	bool var_57_bool;
	var_54_object->IsDialogEnd(var_57_bool);
	
	for(;;) {
		var_259_bool = !var_57_bool; //@nz
		if(var_259_bool == 0) goto Label_342;
		@sync();
		var_54_object->IsDialogEnd(var_57_bool);
	}
	
Label_342:
	object var_260_object;
	var_48_object = var_260_object;
	func_1677();
	@StopDialog(var_54_object);
	var_54_object->GetReturnValue(-1);
	int var_56_int = var_47_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1937(void)
{
	@SetVariable("ood6Mishka1", 1);
}


void func_13(object var_0_object, int var_399_int, object var_400_object)
{
	var_0_object = var_400_object;
	bool var_410_bool; object var_411_object;
	object var_412_object;
	func_1867(var_412_object);
	var_412_object = var_411_object;
	func_1694(var_410_bool, var_411_object);
	bool var_413_bool; object var_414_object;
	var_400_object = var_414_object;
	func_1609(var_413_bool, var_414_object, 70.0);
	if(!var_413_bool) { //@nz
		var_399_int = -2;
		return 8;
	}
	object var_406_object;
	@CreateDialog(var_406_object);
	int var_417_int;
	func_1929(var_417_int);
	var_406_object->SetNPCName(var_417_int);
	int var_418_int;
	func_1927(var_418_int);
	var_406_object->SetNPCDescription(var_418_int);
	string var_419_string;
	func_1931(var_419_string);
	var_406_object->SetPhoto(var_419_string);
	string var_420_string;
	func_1933(var_420_string);
	var_406_object->SetPhoto2(var_420_string);
	int var_421_int;
	func_1973(var_421_int);
	var_406_object->SetPlayerName(var_421_int);
	bool var_407_bool;
	@IsOverrideActive(var_407_bool);
	if(var_407_bool != 0) {
		var_399_int = -2;
		return 8;
	}
	@DoDialog(var_406_object);
	object var_423_object; object var_424_object;
	var_400_object = var_423_object;
	var_406_object = var_424_object;
	TaskCall(2);
	func_94(var_425_object, var_426_object, var_427_string, var_428_bool, var_423_object, var_424_object);
	TaskReturn();
	bool var_409_bool;
	var_406_object->IsDialogEnd(var_409_bool);
	
	for(;;) {
		var_456_bool = !var_409_bool; //@nz
		if(var_456_bool == 0) goto Label_83;
		@sync();
		var_406_object->IsDialogEnd(var_409_bool);
	}
	
Label_83:
	object var_457_object;
	var_400_object = var_457_object;
	func_1677();
	@StopDialog(var_406_object);
	var_406_object->GetReturnValue(-1);
	int var_408_int = var_399_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_663(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_295_object, object var_296_object)
{
	var_0_object = var_296_object;
	var_1_object = var_295_object;
	var_3_string = false;
	if(1 != 0) {
		func_716(var_296_object, "Neutral");
		var_0_object->SetMessage(510004); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(510015, -1, 11037); //@t
		goto Label_686;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x29b";
	}
Label_686:
	bool var_314_bool;
	func_1935(var_314_bool);
	if(var_314_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1832(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_715;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_715:
		return 0;

	}
	
}


// @pe
void func_1943(void)
{
	@SetVariable("KnowMishka", 1);
}


// @pe
void func_1949(bool var_367_bool)
{
	int var_369_int;
	func_1883(var_369_int, "d6q01");
	if(var_369_int == 4)
		var_367_bool = true;
	var_367_bool = false;
}


// @pe
void func_157(object var_2_object, string var_430_string)
{
	bool var_431_bool;
	func_1935(var_431_bool);
	if(!var_431_bool) //@nz
		return 0;
	if(var_430_string == var_2_object)
		return 0;
	string var_434_string; bool var_435_bool;
	var_430_string = var_434_string;
	if(var_430_string == "")
		var_435_bool = false;
	else
		var_435_bool = true;
	func_1839(var_434_string, var_435_bool);
	var_2_object = var_430_string;
	
}


void func_1694(bool var_58_bool, object var_59_object)
{
	int var_65_int; int var_66_int;
	@GetVariable("voice_common", var_65_int);
	if(var_65_int != 0) {
		bool var_69_bool; object var_70_object;
		var_59_object = var_70_object;
		func_1752(var_69_bool, var_70_object);
		if(!var_69_bool) { //@nz
			bool var_100_bool; object var_101_object;
			var_59_object = var_101_object;
			func_1789(var_100_bool, var_101_object);
			if(!var_100_bool) { //@nz
				var_58_bool = false;
				return 4;
			}
		}
		@irand(var_66_int, 2);
		if(var_66_int != 0)
			@SetVariable("voice_common", ((var_65_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_145_bool; object var_146_object;
		var_59_object = var_146_object;
		func_1789(var_145_bool, var_146_object);
		if(!var_145_bool) { //@nz
			bool var_148_bool; object var_149_object;
			var_59_object = var_149_object;
			func_1752(var_148_bool, var_149_object);
			if(!var_148_bool) { //@nz
				var_58_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1750;
	
Label_1750:
	var_58_bool = true;
	
}


// @pe
void func_928(object var_2_object, string var_357_string)
{
	bool var_358_bool;
	func_1935(var_358_bool);
	if(!var_358_bool) //@nz
		return 0;
	if(var_357_string == var_2_object)
		return 0;
	string var_361_string; bool var_362_bool;
	var_357_string = var_361_string;
	if(var_357_string == "")
		var_362_bool = false;
	else
		var_362_bool = true;
	func_1839(var_361_string, var_362_bool);
	var_2_object = var_357_string;
	
}


void func_1570(bool var_79_bool)
{
	var_79_bool = true;
}


void func_1572(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_421(object var_2_object, string var_224_string)
{
	bool var_225_bool;
	func_1935(var_225_bool);
	if(!var_225_bool) //@nz
		return 0;
	if(var_224_string == var_2_object)
		return 0;
	string var_228_string; bool var_229_bool;
	var_224_string = var_228_string;
	if(var_224_string == "")
		var_229_bool = false;
	else
		var_229_bool = true;
	func_1839(var_228_string, var_229_bool);
	var_2_object = var_224_string;
	
}


// @pe
void func_1190(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_482_object, object var_483_object)
{
	var_0_object = var_483_object;
	var_1_object = var_482_object;
	var_3_string = false;
	if(1 != 0) {
		func_1248(var_483_object, "Neutral");
		var_0_object->SetMessage(540548); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540549, -1, 42558); //@t
		var_0_object->AddReply(540797, -1, 42846); //@t
		goto Label_1218;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4aa";
	}
Label_1218:
	bool var_504_bool;
	func_1935(var_504_bool);
	if(var_504_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1832(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1247;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1247:
		return 0;

	}
	
}


void func_1319(object var_0_object)
{
	bool var_27_bool;
	func_1604(var_27_bool);
	if(!var_27_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1447();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1501();
	}
}
EMIT "Return(); Pop(0)";


void func_1832(string var_34_string)
{
	float var_37_float; float var_38_float;
	@lshGetAnimTimes(var_34_string, var_37_float, var_38_float);
	@lshPlayAnimation(var_37_float, var_38_float, false);
}


// @pe
void func_1961(bool var_375_bool)
{
	int var_377_int;
	func_1883(var_377_int, "ood6Mishka1");
	if(var_377_int == 0) {
		var_375_bool = true;
		return 0;
	}
	var_375_bool = false;
}


void func_1577(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


void func_1839(string var_228_string, bool var_229_bool)
{
	float var_234_float; float var_235_float;
	@lshGetAnimTimes(var_228_string, var_234_float, var_235_float);
	@lshPlayAnimation(var_234_float, var_235_float, var_229_bool);
}


void func_1585(bool var_34_bool, cvector var_35_cvector)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector = var_35_cvector - var_39_cvector;
	var_42_float = GetByIndex(var_40_cvector, 0);
	var_43_float = GetByIndex(var_40_cvector, 2);
	bool var_41_bool;
	@Rotate(var_42_float, var_43_float, var_41_bool);
	var_41_bool = var_34_bool;
}


void func_1973(int var_204_int)
{
	int var_206_int;
	@GetVariable("branch", var_206_int);
	if(var_206_int == 0) {
		var_204_int = 1;
		return 2;
	EMIT "GOTO 0x7c4";
	}
	if(var_206_int == 1) {
		var_204_int = 2;
		return 2;
	}
	var_204_int = 3;
}


void func_1845(bool var_92_bool, string var_93_string)
{
	bool var_95_bool;
	bool var_96_bool;
	func_1935(var_96_bool);
	if(var_96_bool != 0) {
		@lshHasSpeech(var_95_bool, var_93_string);
		if(var_95_bool != 0) {
			@lshPlaySpeech(var_93_string);
			var_92_bool = true;
		}
	}
	var_92_bool = false;
}


void func_1595(bool var_30_bool, object var_31_object)
{
	cvector var_33_cvector;
	var_31_object->GetPosition(var_33_cvector);
	bool var_34_bool; cvector var_35_cvector;
	var_33_cvector = var_35_cvector;
	func_1585(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
}


void func_1339(bool var_51_bool)
{
	object var_53_object;
	@FindActor(var_53_object, "player");
	if(!var_53_object) //@nz
		var_51_bool = false;
	bool var_56_bool; object var_57_object;
	var_53_object = var_57_object;
	func_1595(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
}
EMIT "Stack[-1] = 0";


void func_1604(bool var_27_bool)
{
	bool var_29_bool;
	@IsLoaded(var_29_bool);
	var_29_bool = var_27_bool;
}


void func_1860(void)
{
	bool var_29_bool;
	func_1935(var_29_bool);
	if(var_29_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1990(object var_44_object)
{
	var_45_bool = GlobalVars[1];
	if(!var_45_bool) { //@nz
		int var_47_int; object var_48_object;
		var_44_object = var_48_object;
		TaskCall(3);
		func_272(var_49_object, var_47_int, var_48_object);
		TaskReturn();
		var_267_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_268_bool;
	func_1897(var_268_bool, 3);
	if(var_268_bool != 0) {
		int var_271_int; object var_272_object;
		var_44_object = var_272_object;
		TaskCall(5);
		func_582(var_273_object, var_271_int, var_272_object);
		TaskReturn();
		return 0;
	}
	bool var_324_bool;
	func_1897(var_324_bool, 6);
	if(var_324_bool != 0) {
		int var_326_int; object var_327_object;
		var_44_object = var_327_object;
		TaskCall(7);
		func_775(var_328_object, var_326_int, var_327_object);
		TaskReturn();
		return 0;
	}
	bool var_397_bool;
	func_1897(var_397_bool, 12);
	if(var_397_bool != 0) {
		int var_399_int; object var_400_object;
		var_44_object = var_400_object;
		TaskCall(1);
		func_13(var_401_object, var_399_int, var_400_object);
		TaskReturn();
		return 0;
	}
	int var_458_int; object var_459_object;
	var_44_object = var_459_object;
	TaskCall(9);
	func_1109(var_460_object, var_458_int, var_459_object);
	TaskReturn();
}


void func_582(object var_0_object, int var_271_int, object var_272_object)
{
	var_0_object = var_272_object;
	bool var_282_bool; object var_283_object;
	object var_284_object;
	func_1867(var_284_object);
	var_284_object = var_283_object;
	func_1694(var_282_bool, var_283_object);
	bool var_285_bool; object var_286_object;
	var_272_object = var_286_object;
	func_1609(var_285_bool, var_286_object, 70.0);
	if(!var_285_bool) { //@nz
		var_271_int = -2;
		return 8;
	}
	object var_278_object;
	@CreateDialog(var_278_object);
	int var_289_int;
	func_1929(var_289_int);
	var_278_object->SetNPCName(var_289_int);
	int var_290_int;
	func_1927(var_290_int);
	var_278_object->SetNPCDescription(var_290_int);
	string var_291_string;
	func_1931(var_291_string);
	var_278_object->SetPhoto(var_291_string);
	string var_292_string;
	func_1933(var_292_string);
	var_278_object->SetPhoto2(var_292_string);
	int var_293_int;
	func_1973(var_293_int);
	var_278_object->SetPlayerName(var_293_int);
	bool var_279_bool;
	@IsOverrideActive(var_279_bool);
	if(var_279_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	@DoDialog(var_278_object);
	object var_295_object; object var_296_object;
	var_272_object = var_295_object;
	var_278_object = var_296_object;
	TaskCall(6);
	func_663(var_297_object, var_298_object, var_299_string, var_300_bool, var_295_object, var_296_object);
	TaskReturn();
	bool var_281_bool;
	var_278_object->IsDialogEnd(var_281_bool);
	
	for(;;) {
		var_322_bool = !var_281_bool; //@nz
		if(var_322_bool == 0) goto Label_652;
		@sync();
		var_278_object->IsDialogEnd(var_281_bool);
	}
	
Label_652:
	object var_323_object;
	var_272_object = var_323_object;
	func_1677();
	@StopDialog(var_278_object);
	var_278_object->GetReturnValue(-1);
	int var_280_int = var_271_int;
}
EMIT "Stack[-4] = 0";


void func_1609(bool var_153_bool, object var_154_object, float var_155_float)
{
	cvector var_166_cvector; bool var_173_bool;
	var_154_object->GetPosition(var_166_cvector);
	float var_165_float;
	var_154_object->GetEyesHeight(var_165_float);
	var_174_float = GetByIndex(var_166_cvector, 1);
	SetByIndex(var_166_cvector, 1) = (var_174_float + var_165_float);
	cvector var_167_cvector;
	@GetPosition(var_167_cvector);
	@GetEyesHeight(var_165_float);
	var_175_float = GetByIndex(var_167_cvector, 1);
	SetByIndex(var_167_cvector, 1) = (var_175_float + var_165_float);
	cvector var_168_cvector = var_166_cvector - var_167_cvector;
	var_176_float = GetByIndex(var_168_cvector, 1);
	SetByIndex(var_168_cvector, 1) = (float)0;
	var_178_float = sqrt(var_168_cvector | var_168_cvector);
	var_168_cvector /= var_178_float;
	cvector var_169_cvector = -var_168_cvector;
	cvector var_180_cvector;
	func_1873(var_180_cvector, (var_169_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_170_cvector = ((var_168_cvector * var_155_float) + (var_180_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_172_bool;
	@IsOverrideActive(var_172_bool);
	if(var_172_bool != 0)
		var_153_bool = false;
	@StopWorld();
	@CameraTransit((var_167_cvector + var_170_cvector), var_169_cvector);
	var_193_float = GetByIndex(var_170_cvector, 0);
	var_194_float = GetByIndex(var_170_cvector, 2);
	@Rotate(var_193_float, var_194_float);
	bool var_195_bool;
	func_1935(var_195_bool);
	if(var_195_bool != 0) {
	} else {
		@HasAnimationTrack(var_173_bool, "head");
		if(var_173_bool == 0) goto Label_1671;
		@LookAsyncCamera("head");
	}
Label_1671:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_153_bool = true;
	
}


void func_1354(object var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_103_float, var_104_float);
}


void func_1867(object var_60_object)
{
	object var_62_object;
	@self(var_62_object);
	var_62_object = var_60_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_716(object var_2_object, string var_302_string)
{
	bool var_303_bool;
	func_1935(var_303_bool);
	if(!var_303_bool) //@nz
		return 0;
	if(var_302_string == var_2_object)
		return 0;
	string var_306_string; bool var_307_bool;
	var_302_string = var_306_string;
	if(var_302_string == "")
		var_307_bool = false;
	else
		var_307_bool = true;
	func_1839(var_306_string, var_307_bool);
	var_2_object = var_302_string;
	
}


void func_1359(bool var_34_bool)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) { //@nz
		var_34_bool = false;
		return 4;
	}
	float var_41_float; object var_42_object;
	func_1577(var_41_float, var_42_object);
	if(var_41_float > 90000.0) {
		var_34_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_42_object);
	var_38_bool = var_34_bool;
}
EMIT "Stack[-2] = 0";


void func_1873(cvector var_180_cvector, cvector var_181_cvector)
{
	float var_184_float = sqrt(var_181_cvector | var_181_cvector);
	if(var_184_float < 0.000001)
		var_180_cvector = [0.0, 0.0, 0.0];
	var_180_cvector = var_181_cvector / var_184_float;
}


void func_1109(object var_0_object, int var_458_int, object var_459_object)
{
	var_0_object = var_459_object;
	bool var_469_bool; object var_470_object;
	object var_471_object;
	func_1867(var_471_object);
	var_471_object = var_470_object;
	func_1694(var_469_bool, var_470_object);
	bool var_472_bool; object var_473_object;
	var_459_object = var_473_object;
	func_1609(var_472_bool, var_473_object, 70.0);
	if(!var_472_bool) { //@nz
		var_458_int = -2;
		return 8;
	}
	object var_465_object;
	@CreateDialog(var_465_object);
	int var_476_int;
	func_1929(var_476_int);
	var_465_object->SetNPCName(var_476_int);
	int var_477_int;
	func_1927(var_477_int);
	var_465_object->SetNPCDescription(var_477_int);
	string var_478_string;
	func_1931(var_478_string);
	var_465_object->SetPhoto(var_478_string);
	string var_479_string;
	func_1933(var_479_string);
	var_465_object->SetPhoto2(var_479_string);
	int var_480_int;
	func_1973(var_480_int);
	var_465_object->SetPlayerName(var_480_int);
	bool var_466_bool;
	@IsOverrideActive(var_466_bool);
	if(var_466_bool != 0) {
		var_458_int = -2;
		return 8;
	}
	@DoDialog(var_465_object);
	object var_482_object; object var_483_object;
	var_459_object = var_482_object;
	var_465_object = var_483_object;
	TaskCall(10);
	func_1190(var_484_object, var_485_object, var_486_string, var_487_bool, var_482_object, var_483_object);
	TaskReturn();
	bool var_468_bool;
	var_465_object->IsDialogEnd(var_468_bool);
	
	for(;;) {
		var_512_bool = !var_468_bool; //@nz
		if(var_512_bool == 0) goto Label_1179;
		@sync();
		var_465_object->IsDialogEnd(var_468_bool);
	}
	
Label_1179:
	object var_513_object;
	var_459_object = var_513_object;
	func_1677();
	@StopDialog(var_465_object);
	var_465_object->GetReturnValue(-1);
	int var_467_int = var_458_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_856(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_350_object, object var_351_object)
{
	var_0_object = var_351_object;
	var_1_object = var_350_object;
	var_3_string = false;
	if(1 != 0) {
		func_928(var_351_object, "Neutral");
		var_0_object->SetMessage(512800); //@t
		var_0_object->ClearReplies(); //@t
		bool var_366_bool = false;
		bool var_367_bool;
		func_1949(var_1_object);
		if(var_367_bool != 0) {
			bool var_375_bool;
			func_1961(var_1_object);
			if(var_375_bool != 0)
				var_366_bool = true;
		}
		if(var_366_bool != 0)
			var_0_object->AddReply(512801, 14001, 14000); //@t
		var_0_object->AddReply(512813, -1, 14013); //@t
		goto Label_898;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x35c";
	}
Label_898:
	bool var_387_bool;
	func_1935(var_387_bool);
	if(var_387_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1832(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_927;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_927:
		return 0;

	}
	
}


void func_1752(bool var_69_bool, object var_70_object)
{
	string var_76_string; bool var_78_bool; int var_79_int; string var_80_string;
	var_76_string = "c";
	int var_77_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_70_object->HasProperty((var_76_string + (var_77_int + 1)), var_78_bool);
			if(!var_78_bool) { //@nz
			} else {
				var_77_int += 1;
			}
		}
		if(!var_77_int) { //@nz
			var_69_bool = false;
			return 10;
		}
		var_79_int = 0;
		if(var_77_int > 1)
			@irand(var_79_int, var_77_int);
		var_70_object->GetProperty((var_76_string + (var_79_int + 1)), var_80_string);
		bool var_92_bool; string var_93_string;
		var_80_string = var_93_string;
		func_1845(var_92_bool, var_93_string);
		var_92_bool = var_69_bool;
		return 10;

	}
}


void func_1883(int var_369_int, string var_370_string)
{
	int var_372_int;
	@GetVariable(var_370_string, var_372_int);
	var_372_int = var_369_int;
}


void func_1501(void)
{
	bool var_53_bool; int var_54_int; int var_55_int; bool var_56_bool;
	@WaitForAnimEnd();
	bool var_57_bool;
	func_1604(var_57_bool);
	if(!var_57_bool) //@nz
		return 12;
	int var_59_int;
	func_1910(var_59_int);
	int var_51_int;
	var_59_int = var_51_int;
	int var_52_int = 0;
	
	for(;;) {
		bool var_72_bool = false;
		if(var_52_int < 5) {
			bool var_75_bool;
			func_1604(var_75_bool);
			if(var_75_bool != 0)
				var_72_bool = true;
		}
		if(var_72_bool != 0) {
			if(!var_51_int) { //@nz
				@Sleep(3, var_53_bool);
				if(!var_53_bool) { //@nz
				} else {
			} else {
			@irand(var_54_int, var_51_int);
			@irand(var_55_int, 5);
			if(var_55_int != 0)
				var_54_int = 0;
			string var_86_string; int var_87_int;
			var_54_int = var_87_int;
			func_1903(var_86_string, var_87_int);
			@PlayAnimation("all", var_86_string);
			@WaitForAnimEnd(var_56_bool);
			var_88_bool = !var_56_bool; //@nz
			if(var_88_bool == 0) goto Label_1556;
			goto Label_1567;
			}
				Label_1556:
					bool var_79_bool;
					func_1570(var_79_bool);
					var_80_bool = !var_79_bool; //@nz
					if(var_80_bool == 0) goto Label_1562;
			}
		}
	Label_1567:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1562:
		@ResetAAS();
		var_52_int += 1;
	}
	
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_423_object, object var_424_object)
{
	var_0_object = var_424_object;
	var_1_object = var_423_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_424_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_448_bool;
	func_1935(var_448_bool);
	if(var_448_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1832(var_2_object);
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
void func_1248(object var_2_object, string var_489_string)
{
	bool var_490_bool;
	func_1935(var_490_bool);
	if(!var_490_bool) //@nz
		return 0;
	if(var_489_string == var_2_object)
		return 0;
	string var_493_string; bool var_494_bool;
	var_489_string = var_493_string;
	if(var_489_string == "")
		var_494_bool = false;
	else
		var_494_bool = true;
	func_1839(var_493_string, var_494_bool);
	var_2_object = var_489_string;
	
}


// @pe
void func_353(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_213_object, object var_214_object)
{
	var_0_object = var_214_object;
	var_3_string = false;
	if(1 != 0) {
		object var_220_object; object var_221_object;
		var_220_object = var_213_object;
		var_221_object = var_0_object;
		func_1943();
		func_421(var_214_object, "Neutral");
		var_0_object->SetMessage(500457); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(500458, 530, 527); //@t
		var_0_object->AddReply(500459, 532, 528); //@t
		var_0_object->AddReply(500460, 530, 529); //@t
		goto Label_391;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x165";
	}
Label_391:
	bool var_246_bool;
	func_1935(var_246_bool);
	if(var_246_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1832(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_420;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_420:
		return 0;

	}
	
}


void func_1888(int var_113_int)
{
	float var_115_float;
	@GetGameTime(var_115_float);
	var_113_int = 1 + (var_115_float / 24);
}


void func_1381(void)
{
	float var_41_float;
	@rand(var_41_float, 8, 16);
	@SetTimer(10, var_41_float);
}


// @pe
void func_1897(bool var_268_bool, int var_269_int)
{
	int var_270_int;
	func_1888(var_270_int);
	var_268_bool = var_270_int == var_269_int;
}


void func_1390(void)
{
	@KillTimer(10);
}


void func_1903(string var_65_string, int var_66_int)
{
	string var_68_string = "idle";
	if(var_66_int != 0)
		var_68_string += var_66_int;
	var_68_string = var_65_string;
}


void func_1910(int var_59_int)
{
	int var_62_int; bool var_63_bool;
	var_62_int = 0;
	
	for(;;) {
		string var_65_string; int var_66_int;
		var_62_int = var_66_int;
		func_1903(var_65_string, var_66_int);
		@HasAnimation(var_63_bool, "all", var_65_string);
		if(!var_63_bool) //@nz
			break;
		var_62_int += 1;
	}
	var_62_int = var_59_int;
}


void func_1789(bool var_100_bool, object var_101_object)
{
	bool var_109_bool; int var_110_int; string var_111_string;
	int var_113_int;
	func_1888(var_113_int);
	string var_107_string = ("d" + var_113_int) + "m";
	int var_108_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_101_object->HasProperty((var_107_string + (var_108_int + 1)), var_109_bool);
			if(!var_109_bool) { //@nz
			} else {
				var_108_int += 1;
			}
		}
		if(!var_108_int) { //@nz
			var_100_bool = false;
			return 10;
		}
		var_110_int = 0;
		if(var_108_int > 1)
			@irand(var_110_int, var_108_int);
		var_101_object->GetProperty((var_107_string + (var_110_int + 1)), var_111_string);
		bool var_132_bool; string var_133_string;
		var_111_string = var_133_string;
		func_1845(var_132_bool, var_133_string);
		var_132_bool = var_100_bool;
		return 10;

	}
}


