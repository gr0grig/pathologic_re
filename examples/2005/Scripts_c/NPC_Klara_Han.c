// @GLOBALS: 0:object:,1:bool:

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
			func_1591();
			if(var_22_cvector == 30413) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1668();
			}
			if(var_21_bool == 27787) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526521); //@t
				var_0_object->ClearReplies(); //@t
				bool var_69_bool;
				func_1677(var_1_object);
				if(var_69_bool != 0)
					var_0_object->AddReply(526522, 27789, 27788); //@t
				var_0_object->AddReply(526525, -1, 27791); //@t
				return 0;
			}
			if(var_21_bool == 27789) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526523); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526524, 30396, 27790); //@t
				var_0_object->AddReply(528967, 30396, 30402); //@t
				return 0;
			}
			if(var_21_bool == 30396) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(528961); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528962, 30398, 30397); //@t
				return 0;
			}
			if(var_21_bool == 30398) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(528963); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528964, 30400, 30399); //@t
				return 0;
			}
			if(var_21_bool == 30400) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(528965); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528968, 30405, 30404); //@t
				return 0;
			}
			if(var_21_bool == 30405) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(528969); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528970, 30407, 30406); //@t
				return 0;
			}
			if(var_21_bool == 30407) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(528971); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528966, 30411, 30401); //@t
				var_0_object->AddReply(528972, 30409, 30408); //@t
				return 0;
			}
			if(var_21_bool == 30409) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(528973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528974, 30411, 30410); //@t
				return 0;
			}
			if(var_21_bool == 30411) {
				func_157(var_22_cvector, "Neutral");
				var_0_object->SetMessage(528975); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528976, -1, 30413); //@t
				return 0;
			}
			var_3_string = true;
			bool var_145_bool;
			func_1666(var_145_bool);
			if(var_145_bool != 0)
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
			func_1591();
			if(var_21_bool == 31138) {
				func_522(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529675); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529676, -1, 31139); //@t
				return 0;
			}
			var_3_string = true;
			bool var_43_bool;
			func_1666(var_43_bool);
			if(var_43_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x221";
	
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
			func_1591();
			if(var_21_bool == 36960) {
				func_725(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_21_bool == 36962) {
				func_725(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_21_bool == 36964) {
				func_725(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_69_bool;
			func_1666(var_69_bool);
			if(var_69_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2ec";
	
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
			func_1591();
			if(var_21_int == 42554) {
				func_979(var_22_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_46_bool;
			func_1666(var_46_bool);
			if(var_46_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3ea";
	
	}

}


maintask task_9
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		var_21_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1050(var_20_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, int var_21_int)
	{
		if(var_21_int == 10) {
			func_1121();
			bool var_25_bool = false;
			bool var_26_bool;
			func_1335(var_26_bool);
			if(var_26_bool != 0) {
				bool var_29_bool;
				func_1090(var_29_bool);
				if(var_29_bool != 0)
					var_25_bool = true;
			}
			if(var_25_bool != 0) {
				bool var_46_bool;
				func_1070(var_46_bool);
				if(var_46_bool != 0) {
					bool var_65_bool; object var_66_object;
					object var_67_object;
					func_1598(var_67_object);
					var_67_object = var_66_object;
					func_1483(var_65_bool, var_66_object);
				}
			} else {
				func_1085(var_21_int);
				func_1112();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1303();
		func_1121();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
		{
		@StopGroup0();
		func_1121();
		func_1563("Neutral");
		func_1112();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 0)
			func_1112();
		else
			func_1563("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, object var_21_object)
	{
		bool var_23_bool;
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			disable OnUse;
			func_1303();
			bool var_25_bool; object var_26_object;
			var_21_object = var_26_object;
			func_1326(var_25_bool, var_26_object);
			enable OnUse;
			object var_39_object;
			var_21_object = var_39_object;
			func_1760(var_39_object);
			func_1563("Neutral");
			func_1121();
			func_1112();
		}
	}

}


void func_1664(string var_198_string)
{
	var_198_string = "ui/NPC_Han_b.png";
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_26_bool;
	func_1335(var_26_bool);
	if(!var_26_bool) goto Label_0; //@nz
}


void func_1666(bool var_91_bool)
{
	var_91_bool = true;
}


void func_1408(void)
{
	bool var_247_bool;
	@CameraSwitchToNormal();
	bool var_248_bool;
	func_1666(var_248_bool);
	if(var_248_bool != 0) {
	} else {
		@HasAnimationTrack(var_247_bool, "head");
		if(var_247_bool == 0) goto Label_1424;
		@UnlookAsync("head");
	}
Label_1424:
	
}


// @pe
void func_1668(void)
{
	@SetVariable("k9q01", 6);
	func_1689();
}


void func_388(object var_0_object, int var_42_int, object var_43_object)
{
	var_0_object = var_43_object;
	bool var_53_bool; object var_54_object;
	object var_55_object;
	func_1598(var_55_object);
	var_55_object = var_54_object;
	func_1425(var_53_bool, var_54_object);
	bool var_148_bool; object var_149_object;
	var_43_object = var_149_object;
	func_1340(var_148_bool, var_149_object, 70.0);
	if(!var_148_bool) { //@nz
		var_42_int = -2;
		return 8;
	}
	object var_49_object;
	@CreateDialog(var_49_object);
	int var_195_int;
	func_1660(var_195_int);
	var_49_object->SetNPCName(var_195_int);
	int var_196_int;
	func_1658(var_196_int);
	var_49_object->SetNPCDescription(var_196_int);
	string var_197_string;
	func_1662(var_197_string);
	var_49_object->SetPhoto(var_197_string);
	string var_198_string;
	func_1664(var_198_string);
	var_49_object->SetPhoto2(var_198_string);
	int var_199_int;
	func_1743(var_199_int);
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
	TaskCall(4);
	func_469(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object);
	TaskReturn();
	bool var_52_bool;
	var_49_object->IsDialogEnd(var_52_bool);
	
	for(;;) {
		var_244_bool = !var_52_bool; //@nz
		if(var_244_bool == 0) goto Label_458;
		@sync();
		var_49_object->IsDialogEnd(var_52_bool);
	}
	
Label_458:
	object var_245_object;
	var_43_object = var_245_object;
	func_1408();
	@StopDialog(var_49_object);
	var_49_object->GetReturnValue(-1);
	int var_51_int = var_42_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_522(object var_2_object, string var_215_string)
{
	bool var_216_bool;
	func_1666(var_216_bool);
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
	func_1570(var_219_string, var_220_bool);
	var_2_object = var_215_string;
	
}


// @pe
void func_1677(bool var_296_bool)
{
	int var_298_int;
	func_1614(var_298_int, "k9q01");
	if(var_298_int == 5)
		var_296_bool = true;
	var_296_bool = false;
}


void func_13(object var_0_object, int var_256_int, object var_257_object)
{
	var_0_object = var_257_object;
	bool var_267_bool; object var_268_object;
	object var_269_object;
	func_1598(var_269_object);
	var_269_object = var_268_object;
	func_1425(var_267_bool, var_268_object);
	bool var_270_bool; object var_271_object;
	var_257_object = var_271_object;
	func_1340(var_270_bool, var_271_object, 70.0);
	if(!var_270_bool) { //@nz
		var_256_int = -2;
		return 8;
	}
	object var_263_object;
	@CreateDialog(var_263_object);
	int var_274_int;
	func_1660(var_274_int);
	var_263_object->SetNPCName(var_274_int);
	int var_275_int;
	func_1658(var_275_int);
	var_263_object->SetNPCDescription(var_275_int);
	string var_276_string;
	func_1662(var_276_string);
	var_263_object->SetPhoto(var_276_string);
	string var_277_string;
	func_1664(var_277_string);
	var_263_object->SetPhoto2(var_277_string);
	int var_278_int;
	func_1743(var_278_int);
	var_263_object->SetPlayerName(var_278_int);
	bool var_264_bool;
	@IsOverrideActive(var_264_bool);
	if(var_264_bool != 0) {
		var_256_int = -2;
		return 8;
	}
	@DoDialog(var_263_object);
	object var_280_object; object var_281_object;
	var_257_object = var_280_object;
	var_263_object = var_281_object;
	TaskCall(2);
	func_94(var_282_object, var_283_object, var_284_string, var_285_bool, var_280_object, var_281_object);
	TaskReturn();
	bool var_266_bool;
	var_263_object->IsDialogEnd(var_266_bool);
	
	for(;;) {
		var_318_bool = !var_266_bool; //@nz
		if(var_318_bool == 0) goto Label_83;
		@sync();
		var_263_object->IsDialogEnd(var_266_bool);
	}
	
Label_83:
	object var_319_object;
	var_257_object = var_319_object;
	func_1408();
	@StopDialog(var_263_object);
	var_263_object->GetReturnValue(-1);
	int var_265_int = var_256_int;
}
EMIT "Stack[-4] = 0";


void func_1425(bool var_53_bool, object var_54_object)
{
	int var_60_int; int var_61_int;
	@GetVariable("voice_common", var_60_int);
	if(var_60_int != 0) {
		bool var_64_bool; object var_65_object;
		var_54_object = var_65_object;
		func_1483(var_64_bool, var_65_object);
		if(!var_64_bool) { //@nz
			bool var_95_bool; object var_96_object;
			var_54_object = var_96_object;
			func_1520(var_95_bool, var_96_object);
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
		func_1520(var_140_bool, var_141_object);
		if(!var_140_bool) { //@nz
			bool var_143_bool; object var_144_object;
			var_54_object = var_144_object;
			func_1483(var_143_bool, var_144_object);
			if(!var_143_bool) { //@nz
				var_53_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1481;
	
Label_1481:
	var_53_bool = true;
	
}


void func_1301(bool var_74_bool)
{
	var_74_bool = true;
}


// @pe
void func_662(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_346_object, object var_347_object)
{
	var_0_object = var_347_object;
	var_1_object = var_346_object;
	var_3_string = false;
	if(1 != 0) {
		func_725(var_347_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_695;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x29a";
	}
Label_695:
	bool var_371_bool;
	func_1666(var_371_bool);
	if(var_371_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1563(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_724;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_724:
		return 0;

	}
	
}


void func_1303(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_921(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_405_object, object var_406_object)
{
	var_0_object = var_406_object;
	var_1_object = var_405_object;
	var_3_string = false;
	if(1 != 0) {
		func_979(var_406_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_949;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x39d";
	}
Label_949:
	bool var_427_bool;
	func_1666(var_427_bool);
	if(var_427_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1563(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_978;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_978:
		return 0;

	}
	
}


void func_1050(object var_0_object)
{
	bool var_22_bool;
	func_1335(var_22_bool);
	if(!var_22_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1178();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1232();
	}
}
EMIT "Return(); Pop(0)";


void func_1563(string var_29_string)
{
	float var_32_float; float var_33_float;
	@lshGetAnimTimes(var_29_string, var_32_float, var_33_float);
	@lshPlayAnimation(var_32_float, var_33_float, false);
}


void func_1308(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


// @pe
void func_157(object var_2_object, string var_287_string)
{
	bool var_288_bool;
	func_1666(var_288_bool);
	if(!var_288_bool) //@nz
		return 0;
	if(var_287_string == var_2_object)
		return 0;
	string var_291_string; bool var_292_bool;
	var_287_string = var_291_string;
	if(var_287_string == "")
		var_292_bool = false;
	else
		var_292_bool = true;
	func_1570(var_291_string, var_292_bool);
	var_2_object = var_287_string;
	
}


void func_1689(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 523, 1, 529815);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_1715(var_36_bool, var_37_object, 517);
}
EMIT "Stack[-1] = 0";


void func_1570(string var_219_string, bool var_220_bool)
{
	float var_225_float; float var_226_float;
	@lshGetAnimTimes(var_219_string, var_225_float, var_226_float);
	@lshPlayAnimation(var_225_float, var_226_float, var_220_bool);
}


void func_1316(bool var_29_bool, cvector var_30_cvector)
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


void func_1702(object var_45_object)
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


void func_1576(bool var_87_bool, string var_88_string)
{
	bool var_90_bool;
	bool var_91_bool;
	func_1666(var_91_bool);
	if(var_91_bool != 0) {
		@lshHasSpeech(var_90_bool, var_88_string);
		if(var_90_bool != 0) {
			@lshPlaySpeech(var_88_string);
			var_87_bool = true;
		}
	}
	var_87_bool = false;
}


void func_1326(bool var_25_bool, object var_26_object)
{
	cvector var_28_cvector;
	var_26_object->GetPosition(var_28_cvector);
	bool var_29_bool; cvector var_30_cvector;
	var_28_cvector = var_30_cvector;
	func_1316(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
}


void func_1070(bool var_46_bool)
{
	object var_48_object;
	@FindActor(var_48_object, "player");
	if(!var_48_object) //@nz
		var_46_bool = false;
	bool var_51_bool; object var_52_object;
	var_48_object = var_52_object;
	func_1326(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
}
EMIT "Stack[-1] = 0";


void func_1715(bool var_36_bool, object var_37_object, int var_38_int)
{
	object var_45_object;
	func_1702(var_45_object);
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


void func_1591(void)
{
	bool var_24_bool;
	func_1666(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


void func_1335(bool var_22_bool)
{
	bool var_24_bool;
	@IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
}


void func_1340(bool var_148_bool, object var_149_object, float var_150_float)
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
	func_1604(var_175_cvector, (var_164_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1666(var_190_bool);
	if(var_190_bool != 0) {
	} else {
		@HasAnimationTrack(var_168_bool, "head");
		if(var_168_bool == 0) goto Label_1402;
		@LookAsyncCamera("head");
	}
Label_1402:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_148_bool = true;
	
}


void func_1085(object var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_98_float, var_99_float);
}


void func_1598(object var_55_object)
{
	object var_57_object;
	@self(var_57_object);
	var_57_object = var_55_object;
}
EMIT "Stack[-1] = 0";


void func_1090(bool var_29_bool)
{
	object var_32_object;
	@FindActor(var_32_object, "player");
	if(!var_32_object) { //@nz
		var_29_bool = false;
		return 4;
	}
	float var_36_float; object var_37_object;
	func_1308(var_36_float, var_37_object);
	if(var_36_float > 90000.0) {
		var_29_bool = false;
		return 4;
	}
	bool var_33_bool;
	@CanSee(var_33_bool, var_37_object);
	var_33_bool = var_29_bool;
}
EMIT "Stack[-2] = 0";


void func_1604(cvector var_175_cvector, cvector var_176_cvector)
{
	float var_179_float = sqrt(var_176_cvector | var_176_cvector);
	if(var_179_float < 0.000001)
		var_175_cvector = [0.0, 0.0, 0.0];
	var_175_cvector = var_176_cvector / var_179_float;
}


void func_581(object var_0_object, int var_322_int, object var_323_object)
{
	var_0_object = var_323_object;
	bool var_333_bool; object var_334_object;
	object var_335_object;
	func_1598(var_335_object);
	var_335_object = var_334_object;
	func_1425(var_333_bool, var_334_object);
	bool var_336_bool; object var_337_object;
	var_323_object = var_337_object;
	func_1340(var_336_bool, var_337_object, 70.0);
	if(!var_336_bool) { //@nz
		var_322_int = -2;
		return 8;
	}
	object var_329_object;
	@CreateDialog(var_329_object);
	int var_340_int;
	func_1660(var_340_int);
	var_329_object->SetNPCName(var_340_int);
	int var_341_int;
	func_1658(var_341_int);
	var_329_object->SetNPCDescription(var_341_int);
	string var_342_string;
	func_1662(var_342_string);
	var_329_object->SetPhoto(var_342_string);
	string var_343_string;
	func_1664(var_343_string);
	var_329_object->SetPhoto2(var_343_string);
	int var_344_int;
	func_1743(var_344_int);
	var_329_object->SetPlayerName(var_344_int);
	bool var_330_bool;
	@IsOverrideActive(var_330_bool);
	if(var_330_bool != 0) {
		var_322_int = -2;
		return 8;
	}
	@DoDialog(var_329_object);
	object var_346_object; object var_347_object;
	var_323_object = var_346_object;
	var_329_object = var_347_object;
	TaskCall(6);
	func_662(var_348_object, var_349_object, var_350_string, var_351_bool, var_346_object, var_347_object);
	TaskReturn();
	bool var_332_bool;
	var_329_object->IsDialogEnd(var_332_bool);
	
	for(;;) {
		var_379_bool = !var_332_bool; //@nz
		if(var_379_bool == 0) goto Label_651;
		@sync();
		var_329_object->IsDialogEnd(var_332_bool);
	}
	
Label_651:
	object var_380_object;
	var_323_object = var_380_object;
	func_1408();
	@StopDialog(var_329_object);
	var_329_object->GetReturnValue(-1);
	int var_331_int = var_322_int;
}
EMIT "Stack[-4] = 0";


void func_840(object var_0_object, int var_381_int, object var_382_object)
{
	var_0_object = var_382_object;
	bool var_392_bool; object var_393_object;
	object var_394_object;
	func_1598(var_394_object);
	var_394_object = var_393_object;
	func_1425(var_392_bool, var_393_object);
	bool var_395_bool; object var_396_object;
	var_382_object = var_396_object;
	func_1340(var_395_bool, var_396_object, 70.0);
	if(!var_395_bool) { //@nz
		var_381_int = -2;
		return 8;
	}
	object var_388_object;
	@CreateDialog(var_388_object);
	int var_399_int;
	func_1660(var_399_int);
	var_388_object->SetNPCName(var_399_int);
	int var_400_int;
	func_1658(var_400_int);
	var_388_object->SetNPCDescription(var_400_int);
	string var_401_string;
	func_1662(var_401_string);
	var_388_object->SetPhoto(var_401_string);
	string var_402_string;
	func_1664(var_402_string);
	var_388_object->SetPhoto2(var_402_string);
	int var_403_int;
	func_1743(var_403_int);
	var_388_object->SetPlayerName(var_403_int);
	bool var_389_bool;
	@IsOverrideActive(var_389_bool);
	if(var_389_bool != 0) {
		var_381_int = -2;
		return 8;
	}
	@DoDialog(var_388_object);
	object var_405_object; object var_406_object;
	var_382_object = var_405_object;
	var_388_object = var_406_object;
	TaskCall(8);
	func_921(var_407_object, var_408_object, var_409_string, var_410_bool, var_405_object, var_406_object);
	TaskReturn();
	bool var_391_bool;
	var_388_object->IsDialogEnd(var_391_bool);
	
	for(;;) {
		var_435_bool = !var_391_bool; //@nz
		if(var_435_bool == 0) goto Label_910;
		@sync();
		var_388_object->IsDialogEnd(var_391_bool);
	}
	
Label_910:
	object var_436_object;
	var_382_object = var_436_object;
	func_1408();
	@StopDialog(var_388_object);
	var_388_object->GetReturnValue(-1);
	int var_390_int = var_381_int;
}
EMIT "Stack[-4] = 0";


void func_1483(bool var_64_bool, object var_65_object)
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
		func_1576(var_87_bool, var_88_string);
		var_87_bool = var_64_bool;
		return 10;

	}
}


void func_1614(int var_298_int, string var_299_string)
{
	int var_301_int;
	@GetVariable(var_299_string, var_301_int);
	var_301_int = var_298_int;
}


void func_1743(int var_199_int)
{
	int var_201_int;
	@GetVariable("branch", var_201_int);
	if(var_201_int == 0) {
		var_199_int = 1;
		return 2;
	EMIT "GOTO 0x6de";
	}
	if(var_201_int == 1) {
		var_199_int = 2;
		return 2;
	}
	var_199_int = 3;
}


void func_1232(void)
{
	bool var_48_bool; int var_49_int; int var_50_int; bool var_51_bool;
	@WaitForAnimEnd();
	bool var_52_bool;
	func_1335(var_52_bool);
	if(!var_52_bool) //@nz
		return 12;
	int var_54_int;
	func_1641(var_54_int);
	int var_46_int;
	var_54_int = var_46_int;
	int var_47_int = 0;
	
	for(;;) {
		bool var_67_bool = false;
		if(var_47_int < 5) {
			bool var_70_bool;
			func_1335(var_70_bool);
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
			func_1634(var_81_string, var_82_int);
			@PlayAnimation("all", var_81_string);
			@WaitForAnimEnd(var_51_bool);
			var_83_bool = !var_51_bool; //@nz
			if(var_83_bool == 0) goto Label_1287;
			goto Label_1298;
			}
				Label_1287:
					bool var_74_bool;
					func_1301(var_74_bool);
					var_75_bool = !var_74_bool; //@nz
					if(var_75_bool == 0) goto Label_1293;
			}
		}
	Label_1298:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1293:
		@ResetAAS();
		var_47_int += 1;
	}
	
}


// @pe
void func_979(object var_2_object, string var_412_string)
{
	bool var_413_bool;
	func_1666(var_413_bool);
	if(!var_413_bool) //@nz
		return 0;
	if(var_412_string == var_2_object)
		return 0;
	string var_416_string; bool var_417_bool;
	var_412_string = var_416_string;
	if(var_412_string == "")
		var_417_bool = false;
	else
		var_417_bool = true;
	func_1570(var_416_string, var_417_bool);
	var_2_object = var_412_string;
	
}


void func_1619(int var_108_int)
{
	float var_110_float;
	@GetGameTime(var_110_float);
	var_108_int = 1 + (var_110_float / 24);
}


// @pe
void func_469(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_208_object, object var_209_object)
{
	var_0_object = var_209_object;
	var_1_object = var_208_object;
	var_3_string = false;
	if(1 != 0) {
		func_522(var_209_object, "Neutral");
		var_0_object->SetMessage(529675); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(529676, -1, 31139); //@t
		goto Label_492;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1d9";
	}
Label_492:
	bool var_231_bool;
	func_1666(var_231_bool);
	if(var_231_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1563(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_521;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_521:
		return 0;

	}
	
}


// @pe
void func_725(object var_2_object, string var_353_string)
{
	bool var_354_bool;
	func_1666(var_354_bool);
	if(!var_354_bool) //@nz
		return 0;
	if(var_353_string == var_2_object)
		return 0;
	string var_357_string; bool var_358_bool;
	var_353_string = var_357_string;
	if(var_353_string == "")
		var_358_bool = false;
	else
		var_358_bool = true;
	func_1570(var_357_string, var_358_bool);
	var_2_object = var_353_string;
	
}


void func_1112(void)
{
	float var_36_float;
	@rand(var_36_float, 8, 16);
	@SetTimer(10, var_36_float);
}


// @pe
void func_1628(bool var_253_bool, int var_254_int)
{
	int var_255_int;
	func_1619(var_255_int);
	var_253_bool = var_255_int == var_254_int;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_280_object, object var_281_object)
{
	var_0_object = var_281_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_281_object, "Neutral");
		var_0_object->SetMessage(526521); //@t
		var_0_object->ClearReplies(); //@t
		bool var_296_bool;
		func_1677(var_280_object);
		if(var_296_bool != 0)
			var_0_object->AddReply(526522, 27789, 27788); //@t
		var_0_object->AddReply(526525, -1, 27791); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_310_bool;
	func_1666(var_310_bool);
	if(var_310_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1563(var_2_object);
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
void func_1760(object var_39_object)
{
	var_40_bool = GlobalVars[1];
	if(!var_40_bool) { //@nz
		int var_42_int; object var_43_object;
		var_39_object = var_43_object;
		TaskCall(3);
		func_388(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_252_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_253_bool;
	func_1628(var_253_bool, 9);
	if(var_253_bool != 0) {
		int var_256_int; object var_257_object;
		var_39_object = var_257_object;
		TaskCall(1);
		func_13(var_258_object, var_256_int, var_257_object);
		TaskReturn();
		return 0;
	}
	bool var_320_bool;
	func_1628(var_320_bool, 12);
	if(var_320_bool != 0) {
		int var_322_int; object var_323_object;
		var_39_object = var_323_object;
		TaskCall(5);
		func_581(var_324_object, var_322_int, var_323_object);
		TaskReturn();
		return 0;
	}
	int var_381_int; object var_382_object;
	var_39_object = var_382_object;
	TaskCall(7);
	func_840(var_383_object, var_381_int, var_382_object);
	TaskReturn();
}


void func_1121(void)
{
	@KillTimer(10);
}


void func_1634(string var_60_string, int var_61_int)
{
	string var_63_string = "idle";
	if(var_61_int != 0)
		var_63_string += var_61_int;
	var_63_string = var_60_string;
}


void func_1641(int var_54_int)
{
	int var_57_int; bool var_58_bool;
	var_57_int = 0;
	
	for(;;) {
		string var_60_string; int var_61_int;
		var_57_int = var_61_int;
		func_1634(var_60_string, var_61_int);
		@HasAnimation(var_58_bool, "all", var_60_string);
		if(!var_58_bool) //@nz
			break;
		var_57_int += 1;
	}
	var_57_int = var_54_int;
}


void func_1520(bool var_95_bool, object var_96_object)
{
	bool var_104_bool; int var_105_int; string var_106_string;
	int var_108_int;
	func_1619(var_108_int);
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
		func_1576(var_127_bool, var_128_string);
		var_127_bool = var_95_bool;
		return 10;

	}
}


void func_1658(int var_196_int)
{
	var_196_int = 515536;
}


void func_1660(int var_195_int)
{
	var_195_int = 502861;
}


void func_1662(string var_197_string)
{
	var_197_string = "ui/NPC_Han.png";
}


