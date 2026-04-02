// @GLOBALS: 0:object:,1:bool:,2:bool:

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
			func_1848();
			if(var_21_bool == 36971) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_21_bool == 36973) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_21_bool == 36975) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_69_bool;
			func_1972(var_69_bool);
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
			func_1848();
			if(var_22_cvector == 20555) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1974();
				object var_70_object = var_1_object;
				func_2020(var_0_object);
				object var_96_object = var_1_object;
				func_2009(var_0_object);
			}
			if(var_22_cvector == 20574) {
				object var_122_object; object var_123_object;
				var_122_object = var_1_object;
				var_123_object = var_0_object;
				func_1974();
				object var_124_object = var_1_object;
				func_2020(var_0_object);
				object var_126_object = var_1_object;
				func_2009(var_0_object);
			}
			if(var_22_cvector == 20537) {
				object var_130_object; object var_131_object;
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_1997();
			}
			if(var_22_cvector == 20543) {
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_2003();
			}
			if(var_21_bool == 19348) {
				bool var_142_bool;
				func_2036(var_1_object);
				if(var_142_bool != 0) {
					func_451(var_22_cvector, "Neutral");
					var_0_object->SetMessage(518239); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(518240, 20533, 19349); //@t
					var_0_object->AddReply(519398, 20561, 20560); //@t
					return 0;
				}
				func_451(var_22_cvector, "Neutral");
				var_0_object->SetMessage(518241); //@t
				var_0_object->ClearReplies(); //@t
				bool var_171_bool;
				func_2048(var_1_object);
				if(var_171_bool != 0)
					var_0_object->AddReply(519376, 20538, 20537); //@t
				bool var_180_bool;
				func_2060(var_1_object);
				if(var_180_bool != 0)
					var_0_object->AddReply(519382, 20544, 20543); //@t
				var_0_object->AddReply(518242, -1, 19351); //@t
				return 0;
			}
			if(var_21_bool == 20544) {
				func_451(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519383); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519384, 20546, 20545); //@t
				return 0;
			}
			if(var_21_bool == 20546) {
				func_451(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519385); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519387, 20549, 20548); //@t
				var_0_object->AddReply(519386, -1, 20547); //@t
				return 0;
			}
			if(var_21_bool == 20549) {
				func_451(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519388); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519389, -1, 20550); //@t
				var_0_object->AddReply(519390, -1, 20551); //@t
				return 0;
			}
			if(var_21_bool == 20538) {
				func_451(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519377); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519378, 20540, 20539); //@t
				return 0;
			}
			if(var_21_bool == 20540) {
				func_451(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519380, -1, 20541); //@t
				var_0_object->AddReply(519381, -1, 20542); //@t
				return 0;
			}
			if(var_21_bool == 20561) {
				func_451(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519399); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519400, 20563, 20562); //@t
				return 0;
			}
			if(var_21_bool == 20563) {
				func_451(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519401); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519402, 20565, 20564); //@t
				return 0;
			}
			if(var_21_bool == 20565) {
				func_451(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519403); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519404, 20533, 20566); //@t
				return 0;
			}
			if(var_21_bool == 20533) {
				func_451(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519372); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519373, 20535, 20534); //@t
				var_0_object->AddReply(519395, 20557, 20556); //@t
				return 0;
			}
			if(var_21_bool == 20557) {
				func_451(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519396); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519397, 20552, 20558); //@t
				return 0;
			}
			if(var_21_bool == 20535) {
				func_451(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519374); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519375, 20552, 20536); //@t
				var_0_object->AddReply(519406, 20571, 20570); //@t
				return 0;
			}
			if(var_21_bool == 20571) {
				func_451(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519407); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519408, 20557, 20572); //@t
				return 0;
			}
			if(var_21_bool == 20552) {
				func_451(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519391); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519392, 20554, 20553); //@t
				var_0_object->AddReply(519405, 20554, 20568); //@t
				return 0;
			}
			if(var_21_bool == 20554) {
				func_451(var_22_cvector, "Neutral");
				var_0_object->SetMessage(519393); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519394, -1, 20555); //@t
				var_0_object->AddReply(519409, -1, 20574); //@t
				return 0;
			}
			var_3_string = true;
			bool var_311_bool;
			func_1972(var_311_bool);
			if(var_311_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1da";
	
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
			func_1848();
			if(var_21_bool == 21877) {
				func_1033(var_22_cvector, "Neutral");
				var_0_object->SetMessage(520670); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520671, -1, 21878); //@t
				var_0_object->AddReply(527796, -1, 29129); //@t
				return 0;
			}
			var_3_string = true;
			bool var_46_bool;
			func_1972(var_46_bool);
			if(var_46_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x420";
	
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
			func_1848();
			if(var_21_int == 42563) {
				func_1236(var_22_cvector, "Neutral");
				var_0_object->SetMessage(540554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540555, -1, 42564); //@t
				var_0_object->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_string = true;
			bool var_46_bool;
			func_1972(var_46_bool);
			if(var_46_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4eb";
	
	}

}


maintask task_9
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		var_21_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1307(var_20_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, int var_21_int)
	{
		if(var_21_int == 10) {
			func_1378();
			bool var_25_bool = false;
			bool var_26_bool;
			func_1592(var_26_bool);
			if(var_26_bool != 0) {
				bool var_29_bool;
				func_1347(var_29_bool);
				if(var_29_bool != 0)
					var_25_bool = true;
			}
			if(var_25_bool != 0) {
				bool var_46_bool;
				func_1327(var_46_bool);
				if(var_46_bool != 0) {
					bool var_65_bool; object var_66_object;
					object var_67_object;
					func_1855(var_67_object);
					var_67_object = var_66_object;
					func_1740(var_65_bool, var_66_object);
				}
			} else {
				func_1342(var_21_int);
				func_1369();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1560();
		func_1378();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
		{
		@StopGroup0();
		func_1378();
		func_1820("Neutral");
		func_1369();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 0)
			func_1369();
		else
			func_1820("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, object var_21_object)
	{
		bool var_23_bool;
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			disable OnUse;
			func_1560();
			bool var_25_bool; object var_26_object;
			var_21_object = var_26_object;
			func_1583(var_25_bool, var_26_object);
			enable OnUse;
			object var_39_object;
			var_21_object = var_39_object;
			func_2193(var_39_object);
			func_1820("Neutral");
			func_1378();
			func_1369();
		}
	}

}


// @pe
void func_2048(bool var_323_bool)
{
	int var_325_int;
	func_1871(var_325_int, "oob2Alexandr1");
	if(var_325_int == 0) {
		var_323_bool = true;
		return 0;
	}
	var_323_bool = false;
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_26_bool;
	func_1592(var_26_bool);
	if(!var_26_bool) goto Label_0; //@nz
}


// @pe
void func_1033(object var_2_object, string var_215_string)
{
	bool var_216_bool;
	func_1972(var_216_bool);
	if(!var_216_bool) //@nz
		return 0;
	if(var_215_string == var_2_object)
		return 0;
	string var_219_string; bool var_220_bool;
	var_215_string = var_219_string;
	if(var_215_string == "")
		var_220_bool = false;
	else
		var_220_bool = true;
	func_1827(var_219_string, var_220_bool);
	var_2_object = var_215_string;
	
}


// @pe
void func_2060(bool var_332_bool)
{
	int var_334_int;
	func_1871(var_334_int, "oob2Alexandr2");
	if(var_334_int == 0) {
		var_332_bool = true;
		return 0;
	}
	var_332_bool = false;
}


void func_13(object var_0_object, int var_351_int, object var_352_object)
{
	var_0_object = var_352_object;
	bool var_362_bool; object var_363_object;
	object var_364_object;
	func_1855(var_364_object);
	var_364_object = var_363_object;
	func_1682(var_362_bool, var_363_object);
	bool var_365_bool; object var_366_object;
	var_352_object = var_366_object;
	func_1597(var_365_bool, var_366_object, 70.0);
	if(!var_365_bool) { //@nz
		var_351_int = -2;
		return 8;
	}
	object var_358_object;
	@CreateDialog(var_358_object);
	int var_369_int;
	func_1966(var_369_int);
	var_358_object->SetNPCName(var_369_int);
	int var_370_int;
	func_1964(var_370_int);
	var_358_object->SetNPCDescription(var_370_int);
	string var_371_string;
	func_1968(var_371_string);
	var_358_object->SetPhoto(var_371_string);
	string var_372_string;
	func_1970(var_372_string);
	var_358_object->SetPhoto2(var_372_string);
	int var_373_int;
	func_2176(var_373_int);
	var_358_object->SetPlayerName(var_373_int);
	bool var_359_bool;
	@IsOverrideActive(var_359_bool);
	if(var_359_bool != 0) {
		var_351_int = -2;
		return 8;
	}
	@DoDialog(var_358_object);
	object var_375_object; object var_376_object;
	var_352_object = var_375_object;
	var_358_object = var_376_object;
	TaskCall(2);
	func_94(var_377_object, var_378_object, var_379_string, var_380_bool, var_375_object, var_376_object);
	TaskReturn();
	bool var_361_bool;
	var_358_object->IsDialogEnd(var_361_bool);
	
	for(;;) {
		var_408_bool = !var_361_bool; //@nz
		if(var_408_bool == 0) goto Label_83;
		@sync();
		var_358_object->IsDialogEnd(var_361_bool);
	}
	
Label_83:
	object var_409_object;
	var_352_object = var_409_object;
	func_1665();
	@StopDialog(var_358_object);
	var_358_object->GetReturnValue(-1);
	int var_360_int = var_351_int;
}
EMIT "Stack[-4] = 0";


void func_272(object var_0_object, int var_259_int, object var_260_object)
{
	var_0_object = var_260_object;
	bool var_270_bool; object var_271_object;
	object var_272_object;
	func_1855(var_272_object);
	var_272_object = var_271_object;
	func_1682(var_270_bool, var_271_object);
	bool var_273_bool; object var_274_object;
	var_260_object = var_274_object;
	func_1597(var_273_bool, var_274_object, 70.0);
	if(!var_273_bool) { //@nz
		var_259_int = -2;
		return 8;
	}
	object var_266_object;
	@CreateDialog(var_266_object);
	int var_277_int;
	func_1966(var_277_int);
	var_266_object->SetNPCName(var_277_int);
	int var_278_int;
	func_1964(var_278_int);
	var_266_object->SetNPCDescription(var_278_int);
	string var_279_string;
	func_1968(var_279_string);
	var_266_object->SetPhoto(var_279_string);
	string var_280_string;
	func_1970(var_280_string);
	var_266_object->SetPhoto2(var_280_string);
	int var_281_int;
	func_2176(var_281_int);
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
	func_353(var_285_object, var_286_object, var_287_string, var_288_bool, var_283_object, var_284_object);
	TaskReturn();
	bool var_269_bool;
	var_266_object->IsDialogEnd(var_269_bool);
	
	for(;;) {
		var_344_bool = !var_269_bool; //@nz
		if(var_344_bool == 0) goto Label_342;
		@sync();
		var_266_object->IsDialogEnd(var_269_bool);
	}
	
Label_342:
	object var_345_object;
	var_260_object = var_345_object;
	func_1665();
	@StopDialog(var_266_object);
	var_266_object->GetReturnValue(-1);
	int var_268_int = var_259_int;
}
EMIT "Stack[-4] = 0";


void func_1558(bool var_74_bool)
{
	var_74_bool = true;
}


void func_1560(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2072(void)
{
	object var_48_object;
	@CreateDiaryEntry(var_48_object, 247, 1, 520468);
	bool var_52_bool; object var_53_object;
	var_48_object = var_53_object;
	func_2098(var_52_bool, var_53_object, 245);
}
EMIT "Stack[-1] = 0";


void func_1307(object var_0_object)
{
	bool var_22_bool;
	func_1592(var_22_bool);
	if(!var_22_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1435();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1489();
	}
}
EMIT "Return(); Pop(0)";


void func_1820(string var_29_string)
{
	float var_32_float; float var_33_float;
	@lshGetAnimTimes(var_29_string, var_32_float, var_33_float);
	@lshPlayAnimation(var_32_float, var_33_float, false);
}


void func_1565(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


void func_1827(string var_219_string, bool var_220_bool)
{
	float var_225_float; float var_226_float;
	@lshGetAnimTimes(var_219_string, var_225_float, var_226_float);
	@lshPlayAnimation(var_225_float, var_226_float, var_220_bool);
}


void func_1573(bool var_29_bool, cvector var_30_cvector)
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


void func_2085(object var_61_object)
{
	object var_63_object;
	@GetDiaryRoot(var_63_object);
	if(!var_63_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_61_object = false;
	}
	var_63_object = var_61_object;
}
EMIT "Stack[-1] = 0";


void func_1833(bool var_87_bool, string var_88_string)
{
	bool var_90_bool;
	bool var_91_bool;
	func_1972(var_91_bool);
	if(var_91_bool != 0) {
		@lshHasSpeech(var_90_bool, var_88_string);
		if(var_90_bool != 0) {
			@lshPlaySpeech(var_88_string);
			var_87_bool = true;
		}
	}
	var_87_bool = false;
}


void func_1583(bool var_25_bool, object var_26_object)
{
	cvector var_28_cvector;
	var_26_object->GetPosition(var_28_cvector);
	bool var_29_bool; cvector var_30_cvector;
	var_28_cvector = var_30_cvector;
	func_1573(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
}


void func_1327(bool var_46_bool)
{
	object var_48_object;
	@FindActor(var_48_object, "player");
	if(!var_48_object) //@nz
		var_46_bool = false;
	bool var_51_bool; object var_52_object;
	var_48_object = var_52_object;
	func_1583(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
}
EMIT "Stack[-1] = 0";


void func_2098(bool var_52_bool, object var_53_object, int var_54_int)
{
	object var_61_object;
	func_2085(var_61_object);
	object var_58_object;
	var_61_object = var_58_object;
	object var_59_object;
	var_58_object->Find(var_54_int, var_59_object);
	if(!var_59_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_54_int);
		var_52_bool = false;
	}
	var_59_object->AddChild(var_53_object);
	@SendWorldWndMessage(7);
	int var_60_int;
	var_53_object->GetCategory(var_60_int);
	@SetDiarySection(var_60_int);
	var_52_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1848(void)
{
	bool var_24_bool;
	func_1972(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


void func_1592(bool var_22_bool)
{
	bool var_24_bool;
	@IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
}


void func_1597(bool var_148_bool, object var_149_object, float var_150_float)
{
	cvector var_161_cvector; bool var_168_bool;
	var_149_object->GetPosition(var_161_cvector);
	float var_160_float;
	var_149_object->GetEyesHeight(var_160_float);
	var_169_float = GetByIndex(var_161_cvector, 1);
	SetByIndex(var_161_cvector, 1) = (var_169_float + var_160_float);
	cvector var_162_cvector;
	@GetPosition(var_162_cvector);
	@GetEyesHeight(var_160_float);
	var_170_float = GetByIndex(var_162_cvector, 1);
	SetByIndex(var_162_cvector, 1) = (var_170_float + var_160_float);
	cvector var_163_cvector = var_161_cvector - var_162_cvector;
	var_171_float = GetByIndex(var_163_cvector, 1);
	SetByIndex(var_163_cvector, 1) = (float)0;
	var_173_float = sqrt(var_163_cvector | var_163_cvector);
	var_163_cvector /= var_173_float;
	cvector var_164_cvector = -var_163_cvector;
	cvector var_175_cvector;
	func_1861(var_175_cvector, (var_164_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_165_cvector = ((var_163_cvector * var_150_float) + (var_175_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_167_bool;
	@IsOverrideActive(var_167_bool);
	if(var_167_bool != 0)
		var_148_bool = false;
	@StopWorld();
	@CameraTransit((var_162_cvector + var_165_cvector), var_164_cvector);
	var_188_float = GetByIndex(var_165_cvector, 0);
	var_189_float = GetByIndex(var_165_cvector, 2);
	@Rotate(var_188_float, var_189_float);
	bool var_190_bool;
	func_1972(var_190_bool);
	if(var_190_bool != 0) {
	} else {
		@HasAnimationTrack(var_168_bool, "head");
		if(var_168_bool == 0) goto Label_1659;
		@LookAsyncCamera("head");
	}
Label_1659:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_148_bool = true;
	
}


void func_1342(object var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_98_float, var_99_float);
}


void func_1855(object var_55_object)
{
	object var_57_object;
	@self(var_57_object);
	var_57_object = var_55_object;
}
EMIT "Stack[-1] = 0";


void func_1347(bool var_29_bool)
{
	object var_32_object;
	@FindActor(var_32_object, "player");
	if(!var_32_object) { //@nz
		var_29_bool = false;
		return 4;
	}
	float var_36_float; object var_37_object;
	func_1565(var_36_float, var_37_object);
	if(var_36_float > 90000.0) {
		var_29_bool = false;
		return 4;
	}
	bool var_33_bool;
	@CanSee(var_33_bool, var_37_object);
	var_33_bool = var_29_bool;
}
EMIT "Stack[-2] = 0";


void func_1861(cvector var_175_cvector, cvector var_176_cvector)
{
	float var_179_float = sqrt(var_176_cvector | var_176_cvector);
	if(var_179_float < 0.000001)
		var_175_cvector = [0.0, 0.0, 0.0];
	var_175_cvector = var_176_cvector / var_179_float;
}


void func_1097(object var_0_object, int var_411_int, object var_412_object)
{
	var_0_object = var_412_object;
	bool var_422_bool; object var_423_object;
	object var_424_object;
	func_1855(var_424_object);
	var_424_object = var_423_object;
	func_1682(var_422_bool, var_423_object);
	bool var_425_bool; object var_426_object;
	var_412_object = var_426_object;
	func_1597(var_425_bool, var_426_object, 70.0);
	if(!var_425_bool) { //@nz
		var_411_int = -2;
		return 8;
	}
	object var_418_object;
	@CreateDialog(var_418_object);
	int var_429_int;
	func_1966(var_429_int);
	var_418_object->SetNPCName(var_429_int);
	int var_430_int;
	func_1964(var_430_int);
	var_418_object->SetNPCDescription(var_430_int);
	string var_431_string;
	func_1968(var_431_string);
	var_418_object->SetPhoto(var_431_string);
	string var_432_string;
	func_1970(var_432_string);
	var_418_object->SetPhoto2(var_432_string);
	int var_433_int;
	func_2176(var_433_int);
	var_418_object->SetPlayerName(var_433_int);
	bool var_419_bool;
	@IsOverrideActive(var_419_bool);
	if(var_419_bool != 0) {
		var_411_int = -2;
		return 8;
	}
	@DoDialog(var_418_object);
	object var_435_object; object var_436_object;
	var_412_object = var_435_object;
	var_418_object = var_436_object;
	TaskCall(8);
	func_1178(var_437_object, var_438_object, var_439_string, var_440_bool, var_435_object, var_436_object);
	TaskReturn();
	bool var_421_bool;
	var_418_object->IsDialogEnd(var_421_bool);
	
	for(;;) {
		var_465_bool = !var_421_bool; //@nz
		if(var_465_bool == 0) goto Label_1167;
		@sync();
		var_418_object->IsDialogEnd(var_421_bool);
	}
	
Label_1167:
	object var_466_object;
	var_412_object = var_466_object;
	func_1665();
	@StopDialog(var_418_object);
	var_418_object->GetReturnValue(-1);
	int var_420_int = var_411_int;
}
EMIT "Stack[-4] = 0";


void func_2126(object var_33_object)
{
	object var_36_object; object var_37_object;
	@GetMainOutdoorScene(var_36_object);
	if(var_36_object == null) {
		@Trace("Can't find main outdoor scene");
		var_37_object = null;
		var_37_object = var_33_object;
	}
	var_36_object->GetMap(var_37_object);
	var_37_object = var_33_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1871(int var_292_int, string var_293_string)
{
	int var_295_int;
	@GetVariable(var_293_string, var_295_int);
	var_295_int = var_292_int;
}


void func_1876(int var_115_int, int var_116_int)
{
	object var_118_object;
	@CreateIntVector(var_118_object);
	var_118_object->add(var_115_int);
	var_118_object->add(var_116_int);
	@SendWorldWndMessage(3, var_118_object);
}
EMIT "Stack[-1] = 0";


void func_1369(void)
{
	float var_36_float;
	@rand(var_36_float, 8, 16);
	@SetTimer(10, var_36_float);
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_375_object, object var_376_object)
{
	var_0_object = var_376_object;
	var_1_object = var_375_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_376_object, "Neutral");
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
	bool var_400_bool;
	func_1972(var_400_bool);
	if(var_400_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1820(var_2_object);
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


void func_2143(object var_72_object, string var_73_string, float var_74_float)
{
	object var_82_object;
	@GetMainOutdoorScene(var_82_object);
	if(var_82_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_80_cvector;
	cvector var_81_cvector;
	bool var_83_bool;
	var_82_object->GetLocator(var_73_string, var_83_bool, var_80_cvector, var_81_cvector);
	if(!var_83_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_73_string) + " doesnt exist");
	var_82_object->GetMap(var_72_object);
	if(var_72_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_93_float = GetByIndex(var_80_cvector, 0);
	var_94_float = GetByIndex(var_80_cvector, 2);
	var_72_object->SetMapParams(var_93_float, var_94_float, var_74_float);
}
EMIT "Stack[-2] = 0";


void func_1888(object var_104_object, object var_105_object, int var_106_int)
{
	int var_110_int;
	var_105_object->GetItemID(var_110_int);
	int var_111_int;
	@GetInvItemProperty(var_111_int, var_110_int, "Category");
	bool var_112_bool;
	var_104_object->AddItem(var_112_bool, var_105_object, var_111_int, var_106_int);
	if(!var_112_bool) { //@nz
		var_104_object->DropItems(var_105_object, var_106_int);
	} else {
		int var_115_int; int var_116_int;
		var_110_int = var_115_int;
		var_106_int = var_116_int;
		func_1876(var_115_int, var_116_int);
	}
	
}


// @pe
void func_353(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_283_object, object var_284_object)
{
	var_0_object = var_284_object;
	var_1_object = var_283_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_290_bool;
		func_2036(var_1_object);
		if(var_290_bool != 0) {
			func_451(var_284_object, "Neutral");
			var_0_object->SetMessage(518239); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(518240, 20533, 19349); //@t
			var_0_object->AddReply(519398, 20561, 20560); //@t
		} else {
					func_451(var_284_object, "Neutral");
					var_0_object->SetMessage(518241); //@t
					var_0_object->ClearReplies(); //@t
					bool var_323_bool;
					func_2048(var_1_object);
					if(var_323_bool != 0)
						var_0_object->AddReply(519376, 20538, 20537); //@t
					bool var_332_bool;
					func_2060(var_1_object);
					if(var_332_bool != 0)
						var_0_object->AddReply(519382, 20544, 20543); //@t
					var_0_object->AddReply(518242, -1, 19351); //@t
		}
	}
	for(;;) {
		bool var_313_bool;
		func_1972(var_313_bool);
		if(var_313_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1820(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_450;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_450:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x165";


void func_1378(void)
{
	@KillTimer(10);
}


void func_1907(object var_99_object, string var_100_string, int var_101_int)
{
	object var_103_object;
	@CreateInvItem(var_103_object);
	var_103_object->SetItemName(var_100_string);
	object var_104_object; object var_105_object; int var_106_int;
	var_99_object = var_104_object;
	var_103_object = var_105_object;
	var_101_int = var_106_int;
	func_1888(var_104_object, var_105_object, var_106_int);
}
EMIT "Stack[-1] = 0";


void func_894(object var_0_object, int var_42_int, object var_43_object)
{
	var_0_object = var_43_object;
	bool var_53_bool; object var_54_object;
	object var_55_object;
	func_1855(var_55_object);
	var_55_object = var_54_object;
	func_1682(var_53_bool, var_54_object);
	bool var_148_bool; object var_149_object;
	var_43_object = var_149_object;
	func_1597(var_148_bool, var_149_object, 70.0);
	if(!var_148_bool) { //@nz
		var_42_int = -2;
		return 8;
	}
	object var_49_object;
	@CreateDialog(var_49_object);
	int var_195_int;
	func_1966(var_195_int);
	var_49_object->SetNPCName(var_195_int);
	int var_196_int;
	func_1964(var_196_int);
	var_49_object->SetNPCDescription(var_196_int);
	string var_197_string;
	func_1968(var_197_string);
	var_49_object->SetPhoto(var_197_string);
	string var_198_string;
	func_1970(var_198_string);
	var_49_object->SetPhoto2(var_198_string);
	int var_199_int;
	func_2176(var_199_int);
	var_49_object->SetPlayerName(var_199_int);
	bool var_50_bool;
	@IsOverrideActive(var_50_bool);
	if(var_50_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	@DoDialog(var_49_object);
	object var_208_object; object var_209_object;
	var_43_object = var_208_object;
	var_49_object = var_209_object;
	TaskCall(6);
	func_975(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object);
	TaskReturn();
	bool var_52_bool;
	var_49_object->IsDialogEnd(var_52_bool);
	
	for(;;) {
		var_247_bool = !var_52_bool; //@nz
		if(var_247_bool == 0) goto Label_964;
		@sync();
		var_49_object->IsDialogEnd(var_52_bool);
	}
	
Label_964:
	object var_248_object;
	var_43_object = var_248_object;
	func_1665();
	@StopDialog(var_49_object);
	var_49_object->GetReturnValue(-1);
	int var_51_int = var_42_int;
}
EMIT "Stack[-4] = 0";


void func_2176(int var_199_int)
{
	int var_201_int;
	@GetVariable("branch", var_201_int);
	if(var_201_int == 0) {
		var_199_int = 1;
		return 2;
	EMIT "GOTO 0x88f";
	}
	if(var_201_int == 1) {
		var_199_int = 2;
		return 2;
	}
	var_199_int = 3;
}


void func_1665(void)
{
	bool var_250_bool;
	@CameraSwitchToNormal();
	bool var_251_bool;
	func_1972(var_251_bool);
	if(var_251_bool != 0) {
	} else {
		@HasAnimationTrack(var_250_bool, "head");
		if(var_250_bool == 0) goto Label_1681;
		@UnlookAsync("head");
	}
Label_1681:
	
}


void func_1920(float var_44_float)
{
	float var_46_float;
	@GetGameTime(var_46_float);
	var_46_float = var_44_float;
}


void func_1925(int var_108_int)
{
	float var_110_float;
	@GetGameTime(var_110_float);
	var_108_int = 1 + (var_110_float / 24);
}


// @pe
void func_1934(bool var_256_bool, int var_257_int)
{
	int var_258_int;
	func_1925(var_258_int);
	var_256_bool = var_258_int == var_257_int;
}


// @pe
void func_2193(object var_39_object)
{
	var_40_bool = GlobalVars[1];
	if(!var_40_bool) { //@nz
		int var_42_int; object var_43_object;
		var_39_object = var_43_object;
		TaskCall(5);
		func_894(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_255_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_256_bool;
	func_1934(var_256_bool, 2);
	if(var_256_bool != 0) {
		int var_259_int; object var_260_object;
		var_39_object = var_260_object;
		TaskCall(3);
		func_272(var_261_object, var_259_int, var_260_object);
		TaskReturn();
		return 0;
	}
	bool var_346_bool = false;
	bool var_347_bool;
	func_1934(var_347_bool, 12);
	if(var_347_bool != 0) {
		var_349_bool = GlobalVars[2];
		if(!var_349_bool) //@nz
			var_346_bool = true;
	}
	if(var_346_bool != 0) {
		int var_351_int; object var_352_object;
		var_39_object = var_352_object;
		TaskCall(1);
		func_13(var_353_object, var_351_int, var_352_object);
		TaskReturn();
		var_410_bool = GlobalVars[2];
		GlobalVars[2] = true;
		return 0;
	}
	int var_411_int; object var_412_object;
	var_39_object = var_412_object;
	TaskCall(7);
	func_1097(var_413_object, var_411_int, var_412_object);
	TaskReturn();
}


void func_1682(bool var_53_bool, object var_54_object)
{
	int var_60_int; int var_61_int;
	@GetVariable("voice_common", var_60_int);
	if(var_60_int != 0) {
		bool var_64_bool; object var_65_object;
		var_54_object = var_65_object;
		func_1740(var_64_bool, var_65_object);
		if(!var_64_bool) { //@nz
			bool var_95_bool; object var_96_object;
			var_54_object = var_96_object;
			func_1777(var_95_bool, var_96_object);
			if(!var_95_bool) { //@nz
				var_53_bool = false;
				return 4;
			}
		}
		@irand(var_61_int, 2);
		if(var_61_int != 0)
			@SetVariable("voice_common", ((var_60_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_140_bool; object var_141_object;
		var_54_object = var_141_object;
		func_1777(var_140_bool, var_141_object);
		if(!var_140_bool) { //@nz
			bool var_143_bool; object var_144_object;
			var_54_object = var_144_object;
			func_1740(var_143_bool, var_144_object);
			if(!var_143_bool) { //@nz
				var_53_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1738;
	
Label_1738:
	var_53_bool = true;
	
}


void func_1940(string var_60_string, int var_61_int)
{
	string var_63_string = "idle";
	if(var_61_int != 0)
		var_63_string += var_61_int;
	var_63_string = var_60_string;
}


// @pe
void func_1178(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_435_object, object var_436_object)
{
	var_0_object = var_436_object;
	var_1_object = var_435_object;
	var_3_string = false;
	if(1 != 0) {
		func_1236(var_436_object, "Neutral");
		var_0_object->SetMessage(540554); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540555, -1, 42564); //@t
		var_0_object->AddReply(540794, -1, 42843); //@t
		goto Label_1206;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x49e";
	}
Label_1206:
	bool var_457_bool;
	func_1972(var_457_bool);
	if(var_457_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1820(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1235;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1235:
		return 0;

	}
	
}


void func_1947(int var_54_int)
{
	int var_57_int; bool var_58_bool;
	var_57_int = 0;
	
	for(;;) {
		string var_60_string; int var_61_int;
		var_57_int = var_61_int;
		func_1940(var_60_string, var_61_int);
		@HasAnimation(var_58_bool, "all", var_60_string);
		if(!var_58_bool) //@nz
			break;
		var_57_int += 1;
	}
	var_57_int = var_54_int;
}


// @pe
void func_157(object var_2_object, string var_382_string)
{
	bool var_383_bool;
	func_1972(var_383_bool);
	if(!var_383_bool) //@nz
		return 0;
	if(var_382_string == var_2_object)
		return 0;
	string var_386_string; bool var_387_bool;
	var_382_string = var_386_string;
	if(var_382_string == "")
		var_387_bool = false;
	else
		var_387_bool = true;
	func_1827(var_386_string, var_387_bool);
	var_2_object = var_382_string;
	
}


void func_1964(int var_196_int)
{
	var_196_int = 515528;
}


void func_1966(int var_195_int)
{
	var_195_int = 502854;
}


void func_1968(string var_197_string)
{
	var_197_string = "ui/NPC_Alexandr.png";
}


void func_1970(string var_198_string)
{
	var_198_string = "ui/NPC_Alexandr_b.png";
}


void func_1972(bool var_91_bool)
{
	var_91_bool = true;
}


void func_1974(void)
{
	@SetVariable("b2q01", 2);
	object var_33_object;
	func_2126(var_33_object);
	object var_30_object;
	var_33_object = var_30_object;
	float var_44_float;
	func_1920(var_44_float);
	var_30_object->AddMark("b2q01AlexandrGotoOspina", "pt_map_ospina", 1, 520459, var_44_float);
	func_2072();
}
EMIT "Stack[-1] = 0";


// @pe
void func_451(object var_2_object, string var_298_string)
{
	bool var_299_bool;
	func_1972(var_299_bool);
	if(!var_299_bool) //@nz
		return 0;
	if(var_298_string == var_2_object)
		return 0;
	string var_302_string; bool var_303_bool;
	var_298_string = var_302_string;
	if(var_298_string == "")
		var_303_bool = false;
	else
		var_303_bool = true;
	func_1827(var_302_string, var_303_bool);
	var_2_object = var_298_string;
	
}


void func_1740(bool var_64_bool, object var_65_object)
{
	string var_71_string; bool var_73_bool; int var_74_int; string var_75_string;
	var_71_string = "c";
	int var_72_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_65_object->HasProperty((var_71_string + (var_72_int + 1)), var_73_bool);
			if(!var_73_bool) { //@nz
			} else {
				var_72_int += 1;
			}
		}
		if(!var_72_int) { //@nz
			var_64_bool = false;
			return 10;
		}
		var_74_int = 0;
		if(var_72_int > 1)
			@irand(var_74_int, var_72_int);
		var_65_object->GetProperty((var_71_string + (var_74_int + 1)), var_75_string);
		bool var_87_bool; string var_88_string;
		var_75_string = var_88_string;
		func_1833(var_87_bool, var_88_string);
		var_87_bool = var_64_bool;
		return 10;

	}
}


// @pe
void func_1997(void)
{
	@SetVariable("oob2Alexandr1", 1);
}


// @pe
void func_975(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_208_object, object var_209_object)
{
	var_0_object = var_209_object;
	var_1_object = var_208_object;
	var_3_string = false;
	if(1 != 0) {
		func_1033(var_209_object, "Neutral");
		var_0_object->SetMessage(520670); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(520671, -1, 21878); //@t
		var_0_object->AddReply(527796, -1, 29129); //@t
		goto Label_1003;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3d3";
	}
Label_1003:
	bool var_234_bool;
	func_1972(var_234_bool);
	if(var_234_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1820(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1032;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1032:
		return 0;

	}
	
}


void func_1489(void)
{
	bool var_48_bool; int var_49_int; int var_50_int; bool var_51_bool;
	@WaitForAnimEnd();
	bool var_52_bool;
	func_1592(var_52_bool);
	if(!var_52_bool) //@nz
		return 12;
	int var_54_int;
	func_1947(var_54_int);
	int var_46_int;
	var_54_int = var_46_int;
	int var_47_int = 0;
	
	for(;;) {
		bool var_67_bool = false;
		if(var_47_int < 5) {
			bool var_70_bool;
			func_1592(var_70_bool);
			if(var_70_bool != 0)
				var_67_bool = true;
		}
		if(var_67_bool != 0) {
			if(!var_46_int) { //@nz
				@Sleep(3, var_48_bool);
				if(!var_48_bool) { //@nz
				} else {
			} else {
			@irand(var_49_int, var_46_int);
			@irand(var_50_int, 5);
			if(var_50_int != 0)
				var_49_int = 0;
			string var_81_string; int var_82_int;
			var_49_int = var_82_int;
			func_1940(var_81_string, var_82_int);
			@PlayAnimation("all", var_81_string);
			@WaitForAnimEnd(var_51_bool);
			var_83_bool = !var_51_bool; //@nz
			if(var_83_bool == 0) goto Label_1544;
			goto Label_1555;
			}
				Label_1544:
					bool var_74_bool;
					func_1558(var_74_bool);
					var_75_bool = !var_74_bool; //@nz
					if(var_75_bool == 0) goto Label_1550;
			}
		}
	Label_1555:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1550:
		@ResetAAS();
		var_47_int += 1;
	}
	
}


// @pe
void func_2003(void)
{
	@SetVariable("oob2Alexandr2", 1);
}


// @pe
void func_1236(object var_2_object, string var_442_string)
{
	bool var_443_bool;
	func_1972(var_443_bool);
	if(!var_443_bool) //@nz
		return 0;
	if(var_442_string == var_2_object)
		return 0;
	string var_446_string; bool var_447_bool;
	var_442_string = var_446_string;
	if(var_442_string == "")
		var_447_bool = false;
	else
		var_447_bool = true;
	func_1827(var_446_string, var_447_bool);
	var_2_object = var_442_string;
	
}


// @pe
void func_2009(object var_96_object)
{
	@Trace("key is given");
	object var_99_object;
	var_96_object = var_99_object;
	func_1907(var_99_object, "b2q01_key", 1);
}


// @pe
void func_2020(object var_71_object)
{
	object var_75_object;
	func_2126(var_75_object);
	object var_72_object;
	var_75_object = var_72_object;
	func_2143(var_72_object, "pt_map_ospina", (float)2);
	object var_95_object;
	func_2126(var_95_object);
	var_71_object->ShowMap(var_95_object);
}


void func_1777(bool var_95_bool, object var_96_object)
{
	bool var_104_bool; int var_105_int; string var_106_string;
	int var_108_int;
	func_1925(var_108_int);
	string var_102_string = ("d" + var_108_int) + "m";
	int var_103_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_96_object->HasProperty((var_102_string + (var_103_int + 1)), var_104_bool);
			if(!var_104_bool) { //@nz
			} else {
				var_103_int += 1;
			}
		}
		if(!var_103_int) { //@nz
			var_95_bool = false;
			return 10;
		}
		var_105_int = 0;
		if(var_103_int > 1)
			@irand(var_105_int, var_103_int);
		var_96_object->GetProperty((var_102_string + (var_105_int + 1)), var_106_string);
		bool var_127_bool; string var_128_string;
		var_106_string = var_128_string;
		func_1833(var_127_bool, var_128_string);
		var_127_bool = var_95_bool;
		return 10;

	}
}


// @pe
void func_2036(bool var_290_bool)
{
	int var_292_int;
	func_1871(var_292_int, "b2q01");
	if(var_292_int == 1)
		var_290_bool = true;
	var_290_bool = false;
}


