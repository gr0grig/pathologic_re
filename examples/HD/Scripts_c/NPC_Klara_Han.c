// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1655();
			if(var_22_cvector == 30413) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1732();
			}
			if(var_21_bool == 27787) {
				func_149(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526521); //@t
				var_0_object->ClearReplies(); //@t
				bool var_74_bool;
				func_1741(var_1_object);
				if(var_74_bool != 0)
					var_0_object->AddReply(526522, 27789, 27788); //@t
				var_0_object->AddReply(526525, -1, 27791); //@t
				var_0_object->AddReply(541603, -1, 43771); //@t
				return 0;
			}
			if(var_21_bool == 27789) {
				func_149(var_22_cvector, "Doubt");
				var_0_object->SetMessage(526523); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526524, 30396, 27790); //@t
				var_0_object->AddReply(528967, 30396, 30402); //@t
				return 0;
			}
			if(var_21_bool == 30396) {
				func_149(var_22_cvector, "Doubt");
				var_0_object->SetMessage(528961); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528962, 30398, 30397); //@t
				return 0;
			}
			if(var_21_bool == 30398) {
				func_149(var_22_cvector, "Neutral");
				var_0_object->SetMessage(528963); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528964, 30400, 30399); //@t
				return 0;
			}
			if(var_21_bool == 30400) {
				func_149(var_22_cvector, "Grin");
				var_0_object->SetMessage(528965); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528968, 30405, 30404); //@t
				return 0;
			}
			if(var_21_bool == 30405) {
				func_149(var_22_cvector, "Doubt");
				var_0_object->SetMessage(528969); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528970, 30407, 30406); //@t
				return 0;
			}
			if(var_21_bool == 30407) {
				func_149(var_22_cvector, "Questioning");
				var_0_object->SetMessage(528971); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528966, 30411, 30401); //@t
				var_0_object->AddReply(528972, 30409, 30408); //@t
				return 0;
			}
			if(var_21_bool == 30409) {
				func_149(var_22_cvector, "Neutral");
				var_0_object->SetMessage(528973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528974, 30411, 30410); //@t
				return 0;
			}
			if(var_21_bool == 30411) {
				func_149(var_22_cvector, "Neutral");
				var_0_object->SetMessage(528975); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528976, -1, 30413); //@t
				return 0;
			}
			var_3_string = true;
			bool var_153_bool;
			func_1730(var_153_bool);
			if(var_153_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xac";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1655();
			if(var_21_bool == 31138) {
				func_524(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529675); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529676, 43773, 31139); //@t
				var_0_object->AddReply(541604, 43774, 43772); //@t
				return 0;
			}
			if(var_21_bool == 43774) {
				func_524(var_22_cvector, "Neutral");
				var_0_object->SetMessage(541606); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541607, 43773, 43775); //@t
				var_0_object->AddReply(541608, 43773, 43776); //@t
				return 0;
			}
			if(var_21_bool == 43773) {
				func_524(var_22_cvector, "Neutral");
				var_0_object->SetMessage(541605); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541609, -1, 43778); //@t
				var_0_object->AddReply(541610, -1, 43781); //@t
				return 0;
			}
			var_3_string = true;
			bool var_71_bool;
			func_1730(var_71_bool);
			if(var_71_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x223";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1655();
			if(var_21_bool == 36960) {
				func_778(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_21_bool == 36962) {
				func_778(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_21_bool == 36964) {
				func_778(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_74_bool;
			func_1730(var_74_bool);
			if(var_74_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x321";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1655();
			if(var_21_int == 42554) {
				func_1032(var_22_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_1730(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x41f";
	
	}

}


maintask task_8
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1100(var_20_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, int var_21_int)
	{
		if(var_21_int == 10) {
			func_1165();
			bool var_25_bool = false;
			bool var_26_bool;
			func_1379(var_26_bool);
			if(var_26_bool != 0) {
				bool var_29_bool;
				func_1134(var_29_bool);
				if(var_29_bool != 0)
					var_25_bool = true;
			}
			if(var_25_bool != 0) {
				bool var_46_bool;
				func_1114(var_46_bool);
				if(var_46_bool != 0) {
					bool var_65_bool; object var_66_object;
					object var_67_object;
					func_1662(var_67_object);
					var_67_object = var_66_object;
					func_1529(var_65_bool, var_66_object);
				}
			} else {
				func_1129(var_21_int);
				func_1156();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1347();
		func_1165();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		@StopGroup0();
		func_1165();
		func_1609("Neutral");
		func_1156();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 0)
			func_1156();
		else
			func_1609("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, object var_21_object)
	{
		bool var_23_bool;
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			disable OnUse;
			func_1347();
			bool var_25_bool; object var_26_object;
			var_21_object = var_26_object;
			func_1370(var_25_bool, var_26_object);
			enable OnUse;
			object var_39_object;
			var_21_object = var_39_object;
			func_1824(var_39_object);
			func_1609("Neutral");
			func_1165();
			func_1156();
		}
	}

}


void func_0(object var_0_object, int var_274_int, object var_275_object)
{
	var_0_object = var_275_object;
	bool var_285_bool; object var_286_object;
	var_275_object = var_286_object;
	func_1384(var_285_bool, var_286_object, 70.0);
	if(!var_285_bool) { //@nz
		var_274_int = -2;
		return 8;
	}
	object var_281_object;
	@CreateDialog(var_281_object);
	int var_289_int;
	func_1724(var_289_int);
	var_281_object->SetNPCName(var_289_int);
	int var_290_int;
	func_1722(var_290_int);
	var_281_object->SetNPCDescription(var_290_int);
	string var_291_string;
	func_1726(var_291_string);
	var_281_object->SetPhoto(var_291_string);
	string var_292_string;
	func_1728(var_292_string);
	var_281_object->SetPhoto2(var_292_string);
	int var_293_int;
	func_1807(var_293_int);
	var_281_object->SetPlayerName(var_293_int);
	bool var_282_bool;
	@IsOverrideActive(var_282_bool);
	if(var_282_bool != 0) {
		var_274_int = -2;
		return 8;
	}
	@DoDialog(var_281_object);
	bool var_295_bool; object var_296_object;
	object var_297_object;
	func_1662(var_297_object);
	var_297_object = var_296_object;
	func_1471(var_295_bool, var_296_object);
	object var_298_object; object var_299_object;
	var_275_object = var_298_object;
	var_281_object = var_299_object;
	TaskCall(1);
	func_81(var_300_object, var_301_object, var_302_string, var_303_bool, var_298_object, var_299_object);
	TaskReturn();
	bool var_284_bool;
	var_281_object->IsDialogEnd(var_284_bool);
	
	for(;;) {
		var_339_bool = !var_284_bool; //@nz
		if(var_339_bool == 0) goto Label_70;
		@sync();
		var_281_object->IsDialogEnd(var_284_bool);
	}
	
Label_70:
	object var_340_object;
	var_275_object = var_340_object;
	func_1453();
	@StopDialog(var_281_object);
	var_281_object->GetReturnValue(-1);
	int var_283_int = var_274_int;
}
EMIT "Stack[-4] = 0";


void func_385(object var_0_object, int var_44_int, object var_45_object)
{
	var_0_object = var_45_object;
	bool var_55_bool; object var_56_object;
	var_45_object = var_56_object;
	func_1384(var_55_bool, var_56_object, 70.0);
	if(!var_55_bool) { //@nz
		var_44_int = -2;
		return 8;
	}
	object var_51_object;
	@CreateDialog(var_51_object);
	int var_103_int;
	func_1724(var_103_int);
	var_51_object->SetNPCName(var_103_int);
	int var_104_int;
	func_1722(var_104_int);
	var_51_object->SetNPCDescription(var_104_int);
	string var_105_string;
	func_1726(var_105_string);
	var_51_object->SetPhoto(var_105_string);
	string var_106_string;
	func_1728(var_106_string);
	var_51_object->SetPhoto2(var_106_string);
	int var_107_int;
	func_1807(var_107_int);
	var_51_object->SetPlayerName(var_107_int);
	bool var_52_bool;
	@IsOverrideActive(var_52_bool);
	if(var_52_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	@DoDialog(var_51_object);
	bool var_116_bool; object var_117_object;
	object var_118_object;
	func_1662(var_118_object);
	var_118_object = var_117_object;
	func_1471(var_116_bool, var_117_object);
	object var_211_object; object var_212_object;
	var_45_object = var_211_object;
	var_51_object = var_212_object;
	TaskCall(3);
	func_466(var_213_object, var_214_object, var_215_string, var_216_bool, var_211_object, var_212_object);
	TaskReturn();
	bool var_54_bool;
	var_51_object->IsDialogEnd(var_54_bool);
	
	for(;;) {
		var_260_bool = !var_54_bool; //@nz
		if(var_260_bool == 0) goto Label_455;
		@sync();
		var_51_object->IsDialogEnd(var_54_bool);
	}
	
Label_455:
	object var_261_object;
	var_45_object = var_261_object;
	func_1453();
	@StopDialog(var_51_object);
	var_51_object->GetReturnValue(-1);
	int var_53_int = var_44_int;
}
EMIT "Stack[-4] = 0";


void func_1156(void)
{
	float var_461_float;
	@rand(var_461_float, 8, 16);
	@SetTimer(10, var_461_float);
}


void func_1668(cvector var_82_cvector, cvector var_83_cvector)
{
	float var_86_float = sqrt(var_83_cvector | var_83_cvector);
	if(var_86_float < 0.000001)
		var_82_cvector = [0.0, 0.0, 0.0];
	var_82_cvector = var_83_cvector / var_86_float;
}


// @pe
void func_1032(object var_2_object, string var_433_string)
{
	bool var_434_bool;
	func_1730(var_434_bool);
	if(!var_434_bool) //@nz
		return 0;
	if(var_433_string == var_2_object)
		return 0;
	string var_437_string; bool var_438_bool;
	var_433_string = var_437_string;
	if(var_433_string == "")
		var_438_bool = false;
	else
		var_438_bool = true;
	func_1625(var_437_string, var_438_bool);
	var_2_object = var_433_string;
	
}


// @pe
void func_778(object var_2_object, string var_374_string)
{
	bool var_375_bool;
	func_1730(var_375_bool);
	if(!var_375_bool) //@nz
		return 0;
	if(var_374_string == var_2_object)
		return 0;
	string var_378_string; bool var_379_bool;
	var_374_string = var_378_string;
	if(var_374_string == "")
		var_379_bool = false;
	else
		var_379_bool = true;
	func_1625(var_378_string, var_379_bool);
	var_2_object = var_374_string;
	
}


// @pe
void func_524(object var_2_object, string var_218_string)
{
	bool var_219_bool;
	func_1730(var_219_bool);
	if(!var_219_bool) //@nz
		return 0;
	if(var_218_string == var_2_object)
		return 0;
	string var_222_string; bool var_223_bool;
	var_218_string = var_222_string;
	if(var_218_string == "")
		var_223_bool = false;
	else
		var_223_bool = true;
	func_1625(var_222_string, var_223_bool);
	var_2_object = var_218_string;
	
}


void func_1165(void)
{
	@KillTimer(10);
}


void func_1678(int var_316_int, string var_317_string)
{
	int var_319_int;
	@GetVariable(var_317_string, var_319_int);
	var_319_int = var_316_int;
}


void func_1807(int var_107_int)
{
	int var_109_int;
	@GetVariable("branch", var_109_int);
	if(var_109_int == 0) {
		var_107_int = 1;
		return 2;
	EMIT "GOTO 0x71e";
	}
	if(var_109_int == 1) {
		var_107_int = 2;
		return 2;
	}
	var_107_int = 3;
}


void func_1683(int var_171_int)
{
	float var_173_float;
	@GetGameTime(var_173_float);
	var_171_int = 1 + (var_173_float / 24);
}


// @pe
void func_149(object var_2_object, string var_305_string)
{
	bool var_306_bool;
	func_1730(var_306_bool);
	if(!var_306_bool) //@nz
		return 0;
	if(var_305_string == var_2_object)
		return 0;
	string var_309_string; bool var_310_bool;
	var_305_string = var_309_string;
	if(var_305_string == "")
		var_310_bool = false;
	else
		var_310_bool = true;
	func_1625(var_309_string, var_310_bool);
	var_2_object = var_305_string;
	
}


// @pe
void func_1692(bool var_271_bool, int var_272_int)
{
	int var_273_int;
	func_1683(var_273_int);
	var_271_bool = var_273_int == var_272_int;
}


void func_1566(bool var_158_bool, object var_159_object)
{
	bool var_167_bool; int var_168_int; string var_169_string;
	int var_171_int;
	func_1683(var_171_int);
	string var_165_string = ("d" + var_171_int) + "m";
	int var_166_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_159_object->HasProperty((var_165_string + (var_166_int + 1)), var_167_bool);
			if(!var_167_bool) { //@nz
			} else {
				var_166_int += 1;
			}
		}
		if(!var_166_int) { //@nz
			var_158_bool = false;
			return 10;
		}
		var_168_int = 0;
		if(var_166_int > 1)
			@irand(var_168_int, var_166_int);
		var_159_object->GetProperty((var_165_string + (var_168_int + 1)), var_169_string);
		bool var_190_bool; string var_191_string;
		var_169_string = var_191_string;
		func_1640(var_190_bool, var_191_string);
		var_190_bool = var_158_bool;
		return 10;

	}
}


void func_1824(object var_39_object)
{
	int var_41_int;
	@GetVariable("mt_han", var_41_int);
	if(!var_41_int) { //@nz
		int var_44_int; object var_45_object;
		var_39_object = var_45_object;
		TaskCall(2);
		func_385(var_46_object, var_44_int, var_45_object);
		TaskReturn();
		@SetVariable("mt_han", 1);
	}
	bool var_271_bool;
	func_1692(var_271_bool, 9);
	if(var_271_bool != 0) {
		int var_274_int; object var_275_object;
		var_39_object = var_275_object;
		TaskCall(0);
		func_0(var_276_object, var_274_int, var_275_object);
		TaskReturn();
		return 2;
	}
	bool var_341_bool;
	func_1692(var_341_bool, 12);
	if(var_341_bool != 0) {
		int var_343_int; object var_344_object;
		var_39_object = var_344_object;
		TaskCall(4);
		func_634(var_345_object, var_343_int, var_344_object);
		TaskReturn();
		return 2;
	}
	int var_402_int; object var_403_object;
	var_39_object = var_403_object;
	TaskCall(6);
	func_893(var_404_object, var_402_int, var_403_object);
	TaskReturn();
}


void func_1698(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_1705(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1698(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_1453(void)
{
	bool var_263_bool;
	@CameraSwitchToNormal(true);
	bool var_265_bool;
	func_1730(var_265_bool);
	if(var_265_bool != 0) {
	} else {
		@HasAnimationTrack(var_263_bool, "head");
		if(var_263_bool == 0) goto Label_1470;
		@UnlookAsync("head");
	}
Label_1470:
	
}


void func_1722(int var_104_int)
{
	var_104_int = 515536;
}


void func_1724(int var_103_int)
{
	var_103_int = 502861;
}


void func_1726(string var_105_string)
{
	var_105_string = "ui/NPC_Han.png";
}


void func_1471(bool var_116_bool, object var_117_object)
{
	int var_123_int; int var_124_int;
	@GetVariable("voice_common", var_123_int);
	if(var_123_int != 0) {
		bool var_127_bool; object var_128_object;
		var_117_object = var_128_object;
		func_1529(var_127_bool, var_128_object);
		if(!var_127_bool) { //@nz
			bool var_158_bool; object var_159_object;
			var_117_object = var_159_object;
			func_1566(var_158_bool, var_159_object);
			if(!var_158_bool) { //@nz
				var_116_bool = false;
				return 4;
			}
		}
		@irand(var_124_int, 2);
		if(var_124_int != 0)
			@SetVariable("voice_common", ((var_123_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_203_bool; object var_204_object;
		var_117_object = var_204_object;
		func_1566(var_203_bool, var_204_object);
		if(!var_203_bool) { //@nz
			bool var_206_bool; object var_207_object;
			var_117_object = var_207_object;
			func_1529(var_206_bool, var_207_object);
			if(!var_206_bool) { //@nz
				var_116_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1527;
	
Label_1527:
	var_116_bool = true;
	
}


void func_1728(string var_106_string)
{
	var_106_string = "ui/NPC_Han_b.png";
}


void func_1345(bool var_59_bool)
{
	var_59_bool = true;
}


void func_1730(bool var_98_bool)
{
	var_98_bool = true;
}


void func_1347(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1732(void)
{
	@SetVariable("k9q01", 6);
	func_1753();
}


void func_1352(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


void func_1609(string var_244_string)
{
	bool var_248_bool; float var_249_float; float var_250_float;
	@lshHasAnimation(var_248_bool, var_244_string);
	if(var_248_bool != 0) {
		@lshGetAnimTimes(var_244_string, var_249_float, var_250_float);
		@lshPlayAnimation(var_249_float, var_250_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_244_string);
	}
	
}


// @pe
void func_715(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_367_object, object var_368_object)
{
	var_0_object = var_368_object;
	var_1_object = var_367_object;
	var_3_string = false;
	if(1 != 0) {
		func_778(var_368_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_748;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2cf";
	}
Label_748:
	bool var_392_bool;
	func_1730(var_392_bool);
	if(var_392_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1609(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_777;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_777:
		return 0;

	}
	
}


void func_1100(object var_0_object)
{
	bool var_21_bool;
	func_1379(var_21_bool);
	if(!var_21_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1276();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1741(bool var_314_bool)
{
	int var_316_int;
	func_1678(var_316_int, "k9q01");
	if(var_316_int == 5)
		var_314_bool = true;
	var_314_bool = false;
}


// @pe
void func_974(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_426_object, object var_427_object)
{
	var_0_object = var_427_object;
	var_1_object = var_426_object;
	var_3_string = false;
	if(1 != 0) {
		func_1032(var_427_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_1002;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3d2";
	}
Label_1002:
	bool var_448_bool;
	func_1730(var_448_bool);
	if(var_448_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1609(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1031;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1031:
		return 0;

	}
	
}


void func_1360(bool var_29_bool, cvector var_30_cvector)
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


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_298_object, object var_299_object)
{
	var_0_object = var_299_object;
	var_3_string = false;
	if(1 != 0) {
		func_149(var_299_object, "Neutral");
		var_0_object->SetMessage(526521); //@t
		var_0_object->ClearReplies(); //@t
		bool var_314_bool;
		func_1741(var_298_object);
		if(var_314_bool != 0)
			var_0_object->AddReply(526522, 27789, 27788); //@t
		var_0_object->AddReply(526525, -1, 27791); //@t
		var_0_object->AddReply(541603, -1, 43771); //@t
		goto Label_119;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_119:
	bool var_331_bool;
	func_1730(var_331_bool);
	if(var_331_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1609(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_148;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_148:
		return 0;

	}
	
}


// @pe
void func_466(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_211_object, object var_212_object)
{
	var_0_object = var_212_object;
	var_1_object = var_211_object;
	var_3_string = false;
	if(1 != 0) {
		func_524(var_212_object, "Neutral");
		var_0_object->SetMessage(529675); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(529676, 43773, 31139); //@t
		var_0_object->AddReply(541604, 43774, 43772); //@t
		goto Label_494;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1d6";
	}
Label_494:
	bool var_242_bool;
	func_1730(var_242_bool);
	if(var_242_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1609(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_523;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_523:
		return 0;

	}
	
}


void func_1625(string var_222_string, bool var_223_bool)
{
	bool var_229_bool; float var_230_float; float var_231_float;
	@lshHasAnimation(var_229_bool, var_222_string);
	if(var_229_bool != 0) {
		@lshGetAnimTimes(var_222_string, var_230_float, var_231_float);
		@lshPlayAnimation(var_230_float, var_231_float, var_223_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_222_string);
	}
	
}


void func_1370(bool var_25_bool, object var_26_object)
{
	cvector var_28_cvector;
	var_26_object->GetPosition(var_28_cvector);
	bool var_29_bool; cvector var_30_cvector;
	var_28_cvector = var_30_cvector;
	func_1360(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
}


void func_1114(bool var_46_bool)
{
	object var_48_object;
	@FindActor(var_48_object, "player");
	if(!var_48_object) //@nz
		var_46_bool = false;
	bool var_51_bool; object var_52_object;
	var_48_object = var_52_object;
	func_1370(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
}
EMIT "Stack[-1] = 0";


void func_1753(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 523, 1, 529815);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_1779(var_36_bool, var_37_object, 517);
}
EMIT "Stack[-1] = 0";


void func_1379(bool var_21_bool)
{
	bool var_23_bool;
	@IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
}


void func_1766(object var_45_object)
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


void func_1384(bool var_55_bool, object var_56_object, float var_57_float)
{
	cvector var_68_cvector; bool var_75_bool;
	var_56_object->GetPosition(var_68_cvector);
	float var_67_float;
	var_56_object->GetEyesHeight(var_67_float);
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (var_76_float + var_67_float);
	cvector var_69_cvector;
	@GetPosition(var_69_cvector);
	@GetEyesHeight(var_67_float);
	var_77_float = GetByIndex(var_69_cvector, 1);
	SetByIndex(var_69_cvector, 1) = (var_77_float + var_67_float);
	cvector var_70_cvector = var_68_cvector - var_69_cvector;
	var_78_float = GetByIndex(var_70_cvector, 1);
	SetByIndex(var_70_cvector, 1) = (float)0;
	var_80_float = sqrt(var_70_cvector | var_70_cvector);
	var_70_cvector /= var_80_float;
	cvector var_71_cvector = -var_70_cvector;
	cvector var_82_cvector;
	func_1668(var_82_cvector, (var_71_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_72_cvector = ((var_70_cvector * var_57_float) + (var_82_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_74_bool;
	@IsOverrideActive(var_74_bool);
	if(var_74_bool != 0)
		var_55_bool = false;
	@StopWorld();
	@CameraTransit((var_69_cvector + var_72_cvector), var_71_cvector, true);
	var_96_float = GetByIndex(var_72_cvector, 0);
	var_97_float = GetByIndex(var_72_cvector, 2);
	@Rotate(var_96_float, var_97_float);
	bool var_98_bool;
	func_1730(var_98_bool);
	if(var_98_bool != 0) {
	} else {
		@HasAnimationTrack(var_75_bool, "head");
		if(var_75_bool == 0) goto Label_1447;
		@LookAsyncCamera("head");
	}
Label_1447:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_55_bool = true;
	
}


void func_1129(object var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_98_float, var_99_float);
}


void func_1640(bool var_150_bool, string var_151_string)
{
	bool var_153_bool;
	bool var_154_bool;
	func_1730(var_154_bool);
	if(var_154_bool != 0) {
		@lshHasSpeech(var_153_bool, var_151_string);
		if(var_153_bool != 0) {
			@lshPlaySpeech(var_151_string);
			var_150_bool = true;
		}
	}
	var_150_bool = false;
}


void func_1134(bool var_29_bool)
{
	object var_32_object;
	@FindActor(var_32_object, "player");
	if(!var_32_object) { //@nz
		var_29_bool = false;
		return 4;
	}
	float var_36_float; object var_37_object;
	func_1352(var_36_float, var_37_object);
	if(var_36_float > 90000.0) {
		var_29_bool = false;
		return 4;
	}
	bool var_33_bool;
	@CanSee(var_33_bool, var_37_object);
	var_33_bool = var_29_bool;
}
EMIT "Stack[-2] = 0";


void func_1779(bool var_36_bool, object var_37_object, int var_38_int)
{
	object var_45_object;
	func_1766(var_45_object);
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


void func_1655(void)
{
	bool var_24_bool;
	func_1730(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


void func_1529(bool var_127_bool, object var_128_object)
{
	string var_134_string; bool var_136_bool; int var_137_int; string var_138_string;
	var_134_string = "c";
	int var_135_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_128_object->HasProperty((var_134_string + (var_135_int + 1)), var_136_bool);
			if(!var_136_bool) { //@nz
			} else {
				var_135_int += 1;
			}
		}
		if(!var_135_int) { //@nz
			var_127_bool = false;
			return 10;
		}
		var_137_int = 0;
		if(var_135_int > 1)
			@irand(var_137_int, var_135_int);
		var_128_object->GetProperty((var_134_string + (var_137_int + 1)), var_138_string);
		bool var_150_bool; string var_151_string;
		var_138_string = var_151_string;
		func_1640(var_150_bool, var_151_string);
		var_150_bool = var_127_bool;
		return 10;

	}
}


void func_634(object var_0_object, int var_343_int, object var_344_object)
{
	var_0_object = var_344_object;
	bool var_354_bool; object var_355_object;
	var_344_object = var_355_object;
	func_1384(var_354_bool, var_355_object, 70.0);
	if(!var_354_bool) { //@nz
		var_343_int = -2;
		return 8;
	}
	object var_350_object;
	@CreateDialog(var_350_object);
	int var_358_int;
	func_1724(var_358_int);
	var_350_object->SetNPCName(var_358_int);
	int var_359_int;
	func_1722(var_359_int);
	var_350_object->SetNPCDescription(var_359_int);
	string var_360_string;
	func_1726(var_360_string);
	var_350_object->SetPhoto(var_360_string);
	string var_361_string;
	func_1728(var_361_string);
	var_350_object->SetPhoto2(var_361_string);
	int var_362_int;
	func_1807(var_362_int);
	var_350_object->SetPlayerName(var_362_int);
	bool var_351_bool;
	@IsOverrideActive(var_351_bool);
	if(var_351_bool != 0) {
		var_343_int = -2;
		return 8;
	}
	@DoDialog(var_350_object);
	bool var_364_bool; object var_365_object;
	object var_366_object;
	func_1662(var_366_object);
	var_366_object = var_365_object;
	func_1471(var_364_bool, var_365_object);
	object var_367_object; object var_368_object;
	var_344_object = var_367_object;
	var_350_object = var_368_object;
	TaskCall(5);
	func_715(var_369_object, var_370_object, var_371_string, var_372_bool, var_367_object, var_368_object);
	TaskReturn();
	bool var_353_bool;
	var_350_object->IsDialogEnd(var_353_bool);
	
	for(;;) {
		var_400_bool = !var_353_bool; //@nz
		if(var_400_bool == 0) goto Label_704;
		@sync();
		var_350_object->IsDialogEnd(var_353_bool);
	}
	
Label_704:
	object var_401_object;
	var_344_object = var_401_object;
	func_1453();
	@StopDialog(var_350_object);
	var_350_object->GetReturnValue(-1);
	int var_352_int = var_343_int;
}
EMIT "Stack[-4] = 0";


void func_1276(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_1379(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1705(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_1379(var_55_bool);
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0) {
			if(!var_31_int) { //@nz
				@Sleep(3, var_33_bool);
				if(!var_33_bool) { //@nz
				} else {
			} else {
			@irand(var_34_int, var_31_int);
			@irand(var_35_int, 5);
			if(var_35_int != 0)
				var_34_int = 0;
			string var_66_string; int var_67_int;
			var_34_int = var_67_int;
			func_1698(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_1331;
			goto Label_1342;
			}
				Label_1331:
					bool var_59_bool;
					func_1345(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_1337;
			}
		}
	Label_1342:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1337:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


void func_893(object var_0_object, int var_402_int, object var_403_object)
{
	var_0_object = var_403_object;
	bool var_413_bool; object var_414_object;
	var_403_object = var_414_object;
	func_1384(var_413_bool, var_414_object, 70.0);
	if(!var_413_bool) { //@nz
		var_402_int = -2;
		return 8;
	}
	object var_409_object;
	@CreateDialog(var_409_object);
	int var_417_int;
	func_1724(var_417_int);
	var_409_object->SetNPCName(var_417_int);
	int var_418_int;
	func_1722(var_418_int);
	var_409_object->SetNPCDescription(var_418_int);
	string var_419_string;
	func_1726(var_419_string);
	var_409_object->SetPhoto(var_419_string);
	string var_420_string;
	func_1728(var_420_string);
	var_409_object->SetPhoto2(var_420_string);
	int var_421_int;
	func_1807(var_421_int);
	var_409_object->SetPlayerName(var_421_int);
	bool var_410_bool;
	@IsOverrideActive(var_410_bool);
	if(var_410_bool != 0) {
		var_402_int = -2;
		return 8;
	}
	@DoDialog(var_409_object);
	bool var_423_bool; object var_424_object;
	object var_425_object;
	func_1662(var_425_object);
	var_425_object = var_424_object;
	func_1471(var_423_bool, var_424_object);
	object var_426_object; object var_427_object;
	var_403_object = var_426_object;
	var_409_object = var_427_object;
	TaskCall(7);
	func_974(var_428_object, var_429_object, var_430_string, var_431_bool, var_426_object, var_427_object);
	TaskReturn();
	bool var_412_bool;
	var_409_object->IsDialogEnd(var_412_bool);
	
	for(;;) {
		var_456_bool = !var_412_bool; //@nz
		if(var_456_bool == 0) goto Label_963;
		@sync();
		var_409_object->IsDialogEnd(var_412_bool);
	}
	
Label_963:
	object var_457_object;
	var_403_object = var_457_object;
	func_1453();
	@StopDialog(var_409_object);
	var_409_object->GetReturnValue(-1);
	int var_411_int = var_402_int;
}
EMIT "Stack[-4] = 0";


void func_1662(object var_118_object)
{
	object var_120_object;
	@self(var_120_object);
	var_120_object = var_118_object;
}
EMIT "Stack[-1] = 0";


