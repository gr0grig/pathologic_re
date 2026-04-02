// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_1861();
			if(var_26_bool == 526) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_1944();
				func_149(var_27_cvector, "Neutral");
				var_0_object->SetMessage(500457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500458, 530, 527); //@t
				var_0_object->AddReply(500459, 532, 528); //@t
				var_0_object->AddReply(500460, 530, 529); //@t
				return 0;
			}
			if(var_26_bool == 532) {
				func_149(var_27_cvector, "Neutral");
				var_0_object->SetMessage(500462); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500466, 538, 536); //@t
				var_0_object->AddReply(500467, -1, 537); //@t
				return 0;
			}
			if(var_26_bool == 538) {
				func_149(var_27_cvector, "Neutral");
				var_0_object->SetMessage(500468); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500470, -1, 540); //@t
				var_0_object->AddReply(500471, -1, 541); //@t
				return 0;
			}
			if(var_26_bool == 530) {
				func_149(var_27_cvector, "Neutral");
				var_0_object->SetMessage(500461); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500463, 535, 533); //@t
				var_0_object->AddReply(500464, -1, 534); //@t
				return 0;
			}
			if(var_26_bool == 535) {
				func_149(var_27_cvector, "Neutral");
				var_0_object->SetMessage(500465); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506269, -1, 6939); //@t
				return 0;
			}
			var_3_string = true;
			bool var_100_bool;
			func_1936(var_100_bool);
			if(var_100_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_1861();
			if(var_26_bool == 11026) {
				func_444(var_27_cvector, "Dream");
				var_0_object->SetMessage(510004); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510015, -1, 11037); //@t
				return 0;
			}
			var_3_string = true;
			bool var_53_bool;
			func_1936(var_53_bool);
			if(var_53_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1d3";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_1861();
			if(var_27_cvector == 14011) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_1938();
			}
			if(var_26_bool == 13999) {
				func_656(var_27_cvector, "Suspicion");
				var_0_object->SetMessage(512800); //@t
				var_0_object->ClearReplies(); //@t
				bool var_56_bool = false;
				bool var_57_bool;
				func_1950(var_1_object);
				if(var_57_bool != 0) {
					bool var_65_bool;
					func_1962(var_1_object);
					if(var_65_bool != 0)
						var_56_bool = true;
				}
				if(var_56_bool != 0)
					var_0_object->AddReply(512801, 14001, 14000); //@t
				var_0_object->AddReply(512813, -1, 14013); //@t
				return 0;
			}
			if(var_26_bool == 14001) {
				func_656(var_27_cvector, "Suspicion");
				var_0_object->SetMessage(512802); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512803, 14003, 14002); //@t
				return 0;
			}
			if(var_26_bool == 14003) {
				func_656(var_27_cvector, "Suspicion");
				var_0_object->SetMessage(512804); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512805, 14005, 14004); //@t
				var_0_object->AddReply(512808, 14005, 14007); //@t
				return 0;
			}
			if(var_26_bool == 14005) {
				func_656(var_27_cvector, "Fear");
				var_0_object->SetMessage(512806); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512807, 14008, 14006); //@t
				return 0;
			}
			if(var_26_bool == 14008) {
				func_656(var_27_cvector, "Fear");
				var_0_object->SetMessage(512809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512810, 14010, 14009); //@t
				return 0;
			}
			if(var_26_bool == 14010) {
				func_656(var_27_cvector, "Autizm");
				var_0_object->SetMessage(512811); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512812, -1, 14011); //@t
				return 0;
			}
			var_3_string = true;
			bool var_115_bool;
			func_1936(var_115_bool);
			if(var_115_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2a7";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_1861();
			if(var_26_bool == 36960) {
				func_981(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_26_bool == 36962) {
				func_981(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_26_bool == 36964) {
				func_981(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_79_bool;
			func_1936(var_79_bool);
			if(var_79_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3ec";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_1861();
			if(var_26_int == 42557) {
				func_1235(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540549, -1, 42558); //@t
				var_0_object->AddReply(540797, -1, 42846); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_1936(var_56_bool);
			if(var_56_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4ea";
	
	}

}


maintask task_10
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		var_26_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1306(var_25_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, int var_26_int)
	{
		if(var_26_int == 10) {
			func_1371();
			bool var_30_bool = false;
			bool var_31_bool;
			func_1585(var_31_bool);
			if(var_31_bool != 0) {
				bool var_34_bool;
				func_1340(var_34_bool);
				if(var_34_bool != 0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				bool var_51_bool;
				func_1320(var_51_bool);
				if(var_51_bool != 0) {
					bool var_70_bool; object var_71_object;
					object var_72_object;
					func_1868(var_72_object);
					var_72_object = var_71_object;
					func_1735(var_70_bool, var_71_object);
				}
			} else {
				func_1335(var_26_int);
				func_1362();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_1553();
		func_1371();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		@StopGroup0();
		func_1371();
		func_1815("Neutral");
		func_1362();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, bool var_26_bool)
	{
		if(var_26_bool != 0)
			func_1362();
		else
			func_1815("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, object var_26_object)
	{
		bool var_28_bool;
		@IsOverrideActive(var_28_bool);
		if(!var_28_bool) { //@nz
			disable OnUse;
			func_1553();
			bool var_30_bool; object var_31_object;
			var_26_object = var_31_object;
			func_1576(var_30_bool, var_31_object);
			enable OnUse;
			object var_44_object;
			var_26_object = var_44_object;
			func_1991(var_44_object);
			func_1815("Neutral");
			func_1371();
			func_1362();
		}
	}

}


void func_0(object var_0_object, int var_47_int, object var_48_object)
{
	var_0_object = var_48_object;
	bool var_58_bool; object var_59_object;
	var_48_object = var_59_object;
	func_1590(var_58_bool, var_59_object, 70.0);
	if(!var_58_bool) { //@nz
		var_47_int = -2;
		return 8;
	}
	object var_54_object;
	@CreateDialog(var_54_object);
	int var_106_int;
	func_1930(var_106_int);
	var_54_object->SetNPCName(var_106_int);
	int var_107_int;
	func_1928(var_107_int);
	var_54_object->SetNPCDescription(var_107_int);
	string var_108_string;
	func_1932(var_108_string);
	var_54_object->SetPhoto(var_108_string);
	string var_109_string;
	func_1934(var_109_string);
	var_54_object->SetPhoto2(var_109_string);
	int var_110_int;
	func_1974(var_110_int);
	var_54_object->SetPlayerName(var_110_int);
	bool var_55_bool;
	@IsOverrideActive(var_55_bool);
	if(var_55_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	@DoDialog(var_54_object);
	bool var_119_bool; object var_120_object;
	object var_121_object;
	func_1868(var_121_object);
	var_121_object = var_120_object;
	func_1677(var_119_bool, var_120_object);
	object var_214_object; object var_215_object;
	var_48_object = var_214_object;
	var_54_object = var_215_object;
	TaskCall(1);
	func_81(var_216_object, var_217_object, var_218_string, var_219_bool, var_214_object, var_215_object);
	TaskReturn();
	bool var_57_bool;
	var_54_object->IsDialogEnd(var_57_bool);
	
	for(;;) {
		var_270_bool = !var_57_bool; //@nz
		if(var_270_bool == 0) goto Label_70;
		@sync();
		var_54_object->IsDialogEnd(var_57_bool);
	}
	
Label_70:
	object var_271_object;
	var_48_object = var_271_object;
	func_1659();
	@StopDialog(var_54_object);
	var_54_object->GetReturnValue(-1);
	int var_56_int = var_47_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_391(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_307_object, object var_308_object)
{
	var_0_object = var_308_object;
	var_1_object = var_307_object;
	var_3_string = false;
	if(1 != 0) {
		func_444(var_308_object, "Dream");
		var_0_object->SetMessage(510004); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(510015, -1, 11037); //@t
		goto Label_414;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x18b";
	}
Label_414:
	bool var_326_bool;
	func_1936(var_326_bool);
	if(var_326_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1815(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_443;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_443:
		return 0;

	}
	
}


void func_1928(int var_107_int)
{
	var_107_int = 515546;
}


void func_1930(int var_106_int)
{
	var_106_int = 502871;
}


void func_1932(string var_108_string)
{
	var_108_string = "ui/NPC_Mishka.png";
}


void func_1677(bool var_119_bool, object var_120_object)
{
	int var_126_int; int var_127_int;
	@GetVariable("voice_common", var_126_int);
	if(var_126_int != 0) {
		bool var_130_bool; object var_131_object;
		var_120_object = var_131_object;
		func_1735(var_130_bool, var_131_object);
		if(!var_130_bool) { //@nz
			bool var_161_bool; object var_162_object;
			var_120_object = var_162_object;
			func_1772(var_161_bool, var_162_object);
			if(!var_161_bool) { //@nz
				var_119_bool = false;
				return 4;
			}
		}
		@irand(var_127_int, 2);
		if(var_127_int != 0)
			@SetVariable("voice_common", ((var_126_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_206_bool; object var_207_object;
		var_120_object = var_207_object;
		func_1772(var_206_bool, var_207_object);
		if(!var_206_bool) { //@nz
			bool var_209_bool; object var_210_object;
			var_120_object = var_210_object;
			func_1735(var_209_bool, var_210_object);
			if(!var_209_bool) { //@nz
				var_119_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1733;
	
Label_1733:
	var_119_bool = true;
	
}


void func_1934(string var_109_string)
{
	var_109_string = "ui/NPC_Mishka_b.png";
}


void func_1551(bool var_65_bool)
{
	var_65_bool = true;
}


void func_1936(bool var_101_bool)
{
	var_101_bool = true;
}


// @pe
void func_656(object var_2_object, string var_369_string)
{
	bool var_370_bool;
	func_1936(var_370_bool);
	if(!var_370_bool) //@nz
		return 0;
	if(var_369_string == var_2_object)
		return 0;
	string var_373_string; bool var_374_bool;
	var_369_string = var_373_string;
	if(var_369_string == "")
		var_374_bool = false;
	else
		var_374_bool = true;
	func_1831(var_373_string, var_374_bool);
	var_2_object = var_369_string;
	
}


// @pe
void func_1938(void)
{
	@SetVariable("ood6Mishka1", 1);
}


void func_1553(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1911(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_1904(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


// @pe
void func_149(object var_2_object, string var_225_string)
{
	bool var_226_bool;
	func_1936(var_226_bool);
	if(!var_226_bool) //@nz
		return 0;
	if(var_225_string == var_2_object)
		return 0;
	string var_229_string; bool var_230_bool;
	var_225_string = var_229_string;
	if(var_225_string == "")
		var_230_bool = false;
	else
		var_230_bool = true;
	func_1831(var_229_string, var_230_bool);
	var_2_object = var_225_string;
	
}


// @pe
void func_918(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_435_object, object var_436_object)
{
	var_0_object = var_436_object;
	var_1_object = var_435_object;
	var_3_string = false;
	if(1 != 0) {
		func_981(var_436_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_951;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x39a";
	}
Label_951:
	bool var_460_bool;
	func_1936(var_460_bool);
	if(var_460_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1815(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_980;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_980:
		return 0;

	}
	
}


void func_1815(string var_254_string)
{
	bool var_258_bool; float var_259_float; float var_260_float;
	@lshHasAnimation(var_258_bool, var_254_string);
	if(var_258_bool != 0) {
		@lshGetAnimTimes(var_254_string, var_259_float, var_260_float);
		@lshPlayAnimation(var_259_float, var_260_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_254_string);
	}
	
}


// @pe
void func_1944(void)
{
	@SetVariable("KnowMishka", 1);
}


// @pe
void func_1177(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_494_object, object var_495_object)
{
	var_0_object = var_495_object;
	var_1_object = var_494_object;
	var_3_string = false;
	if(1 != 0) {
		func_1235(var_495_object, "Neutral");
		var_0_object->SetMessage(540548); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540549, -1, 42558); //@t
		var_0_object->AddReply(540797, -1, 42846); //@t
		goto Label_1205;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x49d";
	}
Label_1205:
	bool var_516_bool;
	func_1936(var_516_bool);
	if(var_516_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1815(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1234;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1234:
		return 0;

	}
	
}


void func_1306(object var_0_object)
{
	bool var_27_bool;
	func_1585(var_27_bool);
	if(!var_27_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1482();
	}
}
EMIT "Return(); Pop(0)";


void func_1558(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


// @pe
void func_1950(bool var_379_bool)
{
	int var_381_int;
	func_1884(var_381_int, "d6q01");
	if(var_381_int == 4)
		var_379_bool = true;
	var_379_bool = false;
}


void func_1566(bool var_34_bool, cvector var_35_cvector)
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


void func_1831(string var_229_string, bool var_230_bool)
{
	bool var_236_bool; float var_237_float; float var_238_float;
	@lshHasAnimation(var_236_bool, var_229_string);
	if(var_236_bool != 0) {
		@lshGetAnimTimes(var_229_string, var_237_float, var_238_float);
		@lshPlayAnimation(var_237_float, var_238_float, var_230_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_229_string);
	}
	
}


void func_1576(bool var_30_bool, object var_31_object)
{
	cvector var_33_cvector;
	var_31_object->GetPosition(var_33_cvector);
	bool var_34_bool; cvector var_35_cvector;
	var_33_cvector = var_35_cvector;
	func_1566(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
}


void func_1320(bool var_51_bool)
{
	object var_53_object;
	@FindActor(var_53_object, "player");
	if(!var_53_object) //@nz
		var_51_bool = false;
	bool var_56_bool; object var_57_object;
	var_53_object = var_57_object;
	func_1576(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1962(bool var_387_bool)
{
	int var_389_int;
	func_1884(var_389_int, "ood6Mishka1");
	if(var_389_int == 0) {
		var_387_bool = true;
		return 0;
	}
	var_387_bool = false;
}


void func_1585(bool var_27_bool)
{
	bool var_29_bool;
	@IsLoaded(var_29_bool);
	var_29_bool = var_27_bool;
}


void func_1590(bool var_58_bool, object var_59_object, float var_60_float)
{
	cvector var_71_cvector; bool var_78_bool;
	var_59_object->GetPosition(var_71_cvector);
	float var_70_float;
	var_59_object->GetEyesHeight(var_70_float);
	var_79_float = GetByIndex(var_71_cvector, 1);
	SetByIndex(var_71_cvector, 1) = (var_79_float + var_70_float);
	cvector var_72_cvector;
	@GetPosition(var_72_cvector);
	@GetEyesHeight(var_70_float);
	var_80_float = GetByIndex(var_72_cvector, 1);
	SetByIndex(var_72_cvector, 1) = (var_80_float + var_70_float);
	cvector var_73_cvector = var_71_cvector - var_72_cvector;
	var_81_float = GetByIndex(var_73_cvector, 1);
	SetByIndex(var_73_cvector, 1) = (float)0;
	var_83_float = sqrt(var_73_cvector | var_73_cvector);
	var_73_cvector /= var_83_float;
	cvector var_74_cvector = -var_73_cvector;
	cvector var_85_cvector;
	func_1874(var_85_cvector, (var_74_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_75_cvector = ((var_73_cvector * var_60_float) + (var_85_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_77_bool;
	@IsOverrideActive(var_77_bool);
	if(var_77_bool != 0)
		var_58_bool = false;
	@StopWorld();
	@CameraTransit((var_72_cvector + var_75_cvector), var_74_cvector, true);
	var_99_float = GetByIndex(var_75_cvector, 0);
	var_100_float = GetByIndex(var_75_cvector, 2);
	@Rotate(var_99_float, var_100_float);
	bool var_101_bool;
	func_1936(var_101_bool);
	if(var_101_bool != 0) {
	} else {
		@HasAnimationTrack(var_78_bool, "head");
		if(var_78_bool == 0) goto Label_1653;
		@LookAsyncCamera("head");
	}
Label_1653:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_58_bool = true;
	
}


void func_1974(int var_110_int)
{
	int var_112_int;
	@GetVariable("branch", var_112_int);
	if(var_112_int == 0) {
		var_110_int = 1;
		return 2;
	EMIT "GOTO 0x7c5";
	}
	if(var_112_int == 1) {
		var_110_int = 2;
		return 2;
	}
	var_110_int = 3;
}


void func_1335(object var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_103_float, var_104_float);
}


void func_1846(bool var_153_bool, string var_154_string)
{
	bool var_156_bool;
	bool var_157_bool;
	func_1936(var_157_bool);
	if(var_157_bool != 0) {
		@lshHasSpeech(var_156_bool, var_154_string);
		if(var_156_bool != 0) {
			@lshPlaySpeech(var_154_string);
			var_153_bool = true;
		}
	}
	var_153_bool = false;
}


void func_310(object var_0_object, int var_283_int, object var_284_object)
{
	var_0_object = var_284_object;
	bool var_294_bool; object var_295_object;
	var_284_object = var_295_object;
	func_1590(var_294_bool, var_295_object, 70.0);
	if(!var_294_bool) { //@nz
		var_283_int = -2;
		return 8;
	}
	object var_290_object;
	@CreateDialog(var_290_object);
	int var_298_int;
	func_1930(var_298_int);
	var_290_object->SetNPCName(var_298_int);
	int var_299_int;
	func_1928(var_299_int);
	var_290_object->SetNPCDescription(var_299_int);
	string var_300_string;
	func_1932(var_300_string);
	var_290_object->SetPhoto(var_300_string);
	string var_301_string;
	func_1934(var_301_string);
	var_290_object->SetPhoto2(var_301_string);
	int var_302_int;
	func_1974(var_302_int);
	var_290_object->SetPlayerName(var_302_int);
	bool var_291_bool;
	@IsOverrideActive(var_291_bool);
	if(var_291_bool != 0) {
		var_283_int = -2;
		return 8;
	}
	@DoDialog(var_290_object);
	bool var_304_bool; object var_305_object;
	object var_306_object;
	func_1868(var_306_object);
	var_306_object = var_305_object;
	func_1677(var_304_bool, var_305_object);
	object var_307_object; object var_308_object;
	var_284_object = var_307_object;
	var_290_object = var_308_object;
	TaskCall(3);
	func_391(var_309_object, var_310_object, var_311_string, var_312_bool, var_307_object, var_308_object);
	TaskReturn();
	bool var_293_bool;
	var_290_object->IsDialogEnd(var_293_bool);
	
	for(;;) {
		var_334_bool = !var_293_bool; //@nz
		if(var_334_bool == 0) goto Label_380;
		@sync();
		var_290_object->IsDialogEnd(var_293_bool);
	}
	
Label_380:
	object var_335_object;
	var_284_object = var_335_object;
	func_1659();
	@StopDialog(var_290_object);
	var_290_object->GetReturnValue(-1);
	int var_292_int = var_283_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_444(object var_2_object, string var_314_string)
{
	bool var_315_bool;
	func_1936(var_315_bool);
	if(!var_315_bool) //@nz
		return 0;
	if(var_314_string == var_2_object)
		return 0;
	string var_318_string; bool var_319_bool;
	var_314_string = var_318_string;
	if(var_314_string == "")
		var_319_bool = false;
	else
		var_319_bool = true;
	func_1831(var_318_string, var_319_bool);
	var_2_object = var_314_string;
	
}


void func_1340(bool var_34_bool)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) { //@nz
		var_34_bool = false;
		return 4;
	}
	float var_41_float; object var_42_object;
	func_1558(var_41_float, var_42_object);
	if(var_41_float > 90000.0) {
		var_34_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_42_object);
	var_38_bool = var_34_bool;
}
EMIT "Stack[-2] = 0";


void func_1861(void)
{
	bool var_29_bool;
	func_1936(var_29_bool);
	if(var_29_bool != 0)
		@lshStopSpeech();
}


void func_837(object var_0_object, int var_411_int, object var_412_object)
{
	var_0_object = var_412_object;
	bool var_422_bool; object var_423_object;
	var_412_object = var_423_object;
	func_1590(var_422_bool, var_423_object, 70.0);
	if(!var_422_bool) { //@nz
		var_411_int = -2;
		return 8;
	}
	object var_418_object;
	@CreateDialog(var_418_object);
	int var_426_int;
	func_1930(var_426_int);
	var_418_object->SetNPCName(var_426_int);
	int var_427_int;
	func_1928(var_427_int);
	var_418_object->SetNPCDescription(var_427_int);
	string var_428_string;
	func_1932(var_428_string);
	var_418_object->SetPhoto(var_428_string);
	string var_429_string;
	func_1934(var_429_string);
	var_418_object->SetPhoto2(var_429_string);
	int var_430_int;
	func_1974(var_430_int);
	var_418_object->SetPlayerName(var_430_int);
	bool var_419_bool;
	@IsOverrideActive(var_419_bool);
	if(var_419_bool != 0) {
		var_411_int = -2;
		return 8;
	}
	@DoDialog(var_418_object);
	bool var_432_bool; object var_433_object;
	object var_434_object;
	func_1868(var_434_object);
	var_434_object = var_433_object;
	func_1677(var_432_bool, var_433_object);
	object var_435_object; object var_436_object;
	var_412_object = var_435_object;
	var_418_object = var_436_object;
	TaskCall(7);
	func_918(var_437_object, var_438_object, var_439_string, var_440_bool, var_435_object, var_436_object);
	TaskReturn();
	bool var_421_bool;
	var_418_object->IsDialogEnd(var_421_bool);
	
	for(;;) {
		var_468_bool = !var_421_bool; //@nz
		if(var_468_bool == 0) goto Label_907;
		@sync();
		var_418_object->IsDialogEnd(var_421_bool);
	}
	
Label_907:
	object var_469_object;
	var_412_object = var_469_object;
	func_1659();
	@StopDialog(var_418_object);
	var_418_object->GetReturnValue(-1);
	int var_420_int = var_411_int;
}
EMIT "Stack[-4] = 0";


void func_1735(bool var_130_bool, object var_131_object)
{
	string var_137_string; bool var_139_bool; int var_140_int; string var_141_string;
	var_137_string = "c";
	int var_138_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_131_object->HasProperty((var_137_string + (var_138_int + 1)), var_139_bool);
			if(!var_139_bool) { //@nz
			} else {
				var_138_int += 1;
			}
		}
		if(!var_138_int) { //@nz
			var_130_bool = false;
			return 10;
		}
		var_140_int = 0;
		if(var_138_int > 1)
			@irand(var_140_int, var_138_int);
		var_131_object->GetProperty((var_137_string + (var_140_int + 1)), var_141_string);
		bool var_153_bool; string var_154_string;
		var_141_string = var_154_string;
		func_1846(var_153_bool, var_154_string);
		var_153_bool = var_130_bool;
		return 10;

	}
}


// @pe
void func_584(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_362_object, object var_363_object)
{
	var_0_object = var_363_object;
	var_1_object = var_362_object;
	var_3_string = false;
	if(1 != 0) {
		func_656(var_363_object, "Suspicion");
		var_0_object->SetMessage(512800); //@t
		var_0_object->ClearReplies(); //@t
		bool var_378_bool = false;
		bool var_379_bool;
		func_1950(var_1_object);
		if(var_379_bool != 0) {
			bool var_387_bool;
			func_1962(var_1_object);
			if(var_387_bool != 0)
				var_378_bool = true;
		}
		if(var_378_bool != 0)
			var_0_object->AddReply(512801, 14001, 14000); //@t
		var_0_object->AddReply(512813, -1, 14013); //@t
		goto Label_626;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x24c";
	}
Label_626:
	bool var_399_bool;
	func_1936(var_399_bool);
	if(var_399_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1815(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_655;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_655:
		return 0;

	}
	
}


// @pe
void func_1991(object var_44_object)
{
	var_45_bool = GlobalVars[1];
	if(!var_45_bool) { //@nz
		int var_47_int; object var_48_object;
		var_44_object = var_48_object;
		TaskCall(0);
		func_0(var_49_object, var_47_int, var_48_object);
		TaskReturn();
		var_279_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_280_bool;
	func_1898(var_280_bool, 3);
	if(var_280_bool != 0) {
		int var_283_int; object var_284_object;
		var_44_object = var_284_object;
		TaskCall(2);
		func_310(var_285_object, var_283_int, var_284_object);
		TaskReturn();
		return 0;
	}
	bool var_336_bool;
	func_1898(var_336_bool, 6);
	if(var_336_bool != 0) {
		int var_338_int; object var_339_object;
		var_44_object = var_339_object;
		TaskCall(4);
		func_503(var_340_object, var_338_int, var_339_object);
		TaskReturn();
		return 0;
	}
	bool var_409_bool;
	func_1898(var_409_bool, 12);
	if(var_409_bool != 0) {
		int var_411_int; object var_412_object;
		var_44_object = var_412_object;
		TaskCall(6);
		func_837(var_413_object, var_411_int, var_412_object);
		TaskReturn();
		return 0;
	}
	int var_470_int; object var_471_object;
	var_44_object = var_471_object;
	TaskCall(8);
	func_1096(var_472_object, var_470_int, var_471_object);
	TaskReturn();
}


void func_1482(void)
{
	bool var_39_bool; int var_40_int; int var_41_int; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_1585(var_43_bool);
	if(!var_43_bool) //@nz
		return 12;
	int var_45_int;
	func_1911(var_45_int);
	int var_37_int;
	var_45_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_38_int < 5) {
			bool var_61_bool;
			func_1585(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			if(!var_37_int) { //@nz
				@Sleep(3, var_39_bool);
				if(!var_39_bool) { //@nz
				} else {
			} else {
			@irand(var_40_int, var_37_int);
			@irand(var_41_int, 5);
			if(var_41_int != 0)
				var_40_int = 0;
			string var_72_string; int var_73_int;
			var_40_int = var_73_int;
			func_1904(var_72_string, var_73_int);
			@PlayAnimation("all", var_72_string);
			@WaitForAnimEnd(var_42_bool);
			var_74_bool = !var_42_bool; //@nz
			if(var_74_bool == 0) goto Label_1537;
			goto Label_1548;
			}
				Label_1537:
					bool var_65_bool;
					func_1551(var_65_bool);
					var_66_bool = !var_65_bool; //@nz
					if(var_66_bool == 0) goto Label_1543;
			}
		}
	Label_1548:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1543:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_1096(object var_0_object, int var_470_int, object var_471_object)
{
	var_0_object = var_471_object;
	bool var_481_bool; object var_482_object;
	var_471_object = var_482_object;
	func_1590(var_481_bool, var_482_object, 70.0);
	if(!var_481_bool) { //@nz
		var_470_int = -2;
		return 8;
	}
	object var_477_object;
	@CreateDialog(var_477_object);
	int var_485_int;
	func_1930(var_485_int);
	var_477_object->SetNPCName(var_485_int);
	int var_486_int;
	func_1928(var_486_int);
	var_477_object->SetNPCDescription(var_486_int);
	string var_487_string;
	func_1932(var_487_string);
	var_477_object->SetPhoto(var_487_string);
	string var_488_string;
	func_1934(var_488_string);
	var_477_object->SetPhoto2(var_488_string);
	int var_489_int;
	func_1974(var_489_int);
	var_477_object->SetPlayerName(var_489_int);
	bool var_478_bool;
	@IsOverrideActive(var_478_bool);
	if(var_478_bool != 0) {
		var_470_int = -2;
		return 8;
	}
	@DoDialog(var_477_object);
	bool var_491_bool; object var_492_object;
	object var_493_object;
	func_1868(var_493_object);
	var_493_object = var_492_object;
	func_1677(var_491_bool, var_492_object);
	object var_494_object; object var_495_object;
	var_471_object = var_494_object;
	var_477_object = var_495_object;
	TaskCall(9);
	func_1177(var_496_object, var_497_object, var_498_string, var_499_bool, var_494_object, var_495_object);
	TaskReturn();
	bool var_480_bool;
	var_477_object->IsDialogEnd(var_480_bool);
	
	for(;;) {
		var_524_bool = !var_480_bool; //@nz
		if(var_524_bool == 0) goto Label_1166;
		@sync();
		var_477_object->IsDialogEnd(var_480_bool);
	}
	
Label_1166:
	object var_525_object;
	var_471_object = var_525_object;
	func_1659();
	@StopDialog(var_477_object);
	var_477_object->GetReturnValue(-1);
	int var_479_int = var_470_int;
}
EMIT "Stack[-4] = 0";


void func_1868(object var_121_object)
{
	object var_123_object;
	@self(var_123_object);
	var_123_object = var_121_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_214_object, object var_215_object)
{
	var_0_object = var_215_object;
	var_3_string = false;
	if(1 != 0) {
		object var_221_object; object var_222_object;
		var_221_object = var_214_object;
		var_222_object = var_0_object;
		func_1944();
		func_149(var_215_object, "Neutral");
		var_0_object->SetMessage(500457); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(500458, 530, 527); //@t
		var_0_object->AddReply(500459, 532, 528); //@t
		var_0_object->AddReply(500460, 530, 529); //@t
		goto Label_119;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_119:
	bool var_252_bool;
	func_1936(var_252_bool);
	if(var_252_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1815(var_2_object);
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


void func_1362(void)
{
	float var_529_float;
	@rand(var_529_float, 8, 16);
	@SetTimer(10, var_529_float);
}


// @pe
void func_1235(object var_2_object, string var_501_string)
{
	bool var_502_bool;
	func_1936(var_502_bool);
	if(!var_502_bool) //@nz
		return 0;
	if(var_501_string == var_2_object)
		return 0;
	string var_505_string; bool var_506_bool;
	var_501_string = var_505_string;
	if(var_501_string == "")
		var_506_bool = false;
	else
		var_506_bool = true;
	func_1831(var_505_string, var_506_bool);
	var_2_object = var_501_string;
	
}


void func_1874(cvector var_85_cvector, cvector var_86_cvector)
{
	float var_89_float = sqrt(var_86_cvector | var_86_cvector);
	if(var_89_float < 0.000001)
		var_85_cvector = [0.0, 0.0, 0.0];
	var_85_cvector = var_86_cvector / var_89_float;
}


// @pe
void func_981(object var_2_object, string var_442_string)
{
	bool var_443_bool;
	func_1936(var_443_bool);
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
	func_1831(var_446_string, var_447_bool);
	var_2_object = var_442_string;
	
}


void func_1371(void)
{
	@KillTimer(10);
}


void func_1884(int var_381_int, string var_382_string)
{
	int var_384_int;
	@GetVariable(var_382_string, var_384_int);
	var_384_int = var_381_int;
}


void func_1889(int var_174_int)
{
	float var_176_float;
	@GetGameTime(var_176_float);
	var_174_int = 1 + (var_176_float / 24);
}


// @pe
void func_1898(bool var_280_bool, int var_281_int)
{
	int var_282_int;
	func_1889(var_282_int);
	var_280_bool = var_282_int == var_281_int;
}


void func_1772(bool var_161_bool, object var_162_object)
{
	bool var_170_bool; int var_171_int; string var_172_string;
	int var_174_int;
	func_1889(var_174_int);
	string var_168_string = ("d" + var_174_int) + "m";
	int var_169_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_162_object->HasProperty((var_168_string + (var_169_int + 1)), var_170_bool);
			if(!var_170_bool) { //@nz
			} else {
				var_169_int += 1;
			}
		}
		if(!var_169_int) { //@nz
			var_161_bool = false;
			return 10;
		}
		var_171_int = 0;
		if(var_169_int > 1)
			@irand(var_171_int, var_169_int);
		var_162_object->GetProperty((var_168_string + (var_171_int + 1)), var_172_string);
		bool var_193_bool; string var_194_string;
		var_172_string = var_194_string;
		func_1846(var_193_bool, var_194_string);
		var_193_bool = var_161_bool;
		return 10;

	}
}


void func_1904(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_503(object var_0_object, int var_338_int, object var_339_object)
{
	var_0_object = var_339_object;
	bool var_349_bool; object var_350_object;
	var_339_object = var_350_object;
	func_1590(var_349_bool, var_350_object, 70.0);
	if(!var_349_bool) { //@nz
		var_338_int = -2;
		return 8;
	}
	object var_345_object;
	@CreateDialog(var_345_object);
	int var_353_int;
	func_1930(var_353_int);
	var_345_object->SetNPCName(var_353_int);
	int var_354_int;
	func_1928(var_354_int);
	var_345_object->SetNPCDescription(var_354_int);
	string var_355_string;
	func_1932(var_355_string);
	var_345_object->SetPhoto(var_355_string);
	string var_356_string;
	func_1934(var_356_string);
	var_345_object->SetPhoto2(var_356_string);
	int var_357_int;
	func_1974(var_357_int);
	var_345_object->SetPlayerName(var_357_int);
	bool var_346_bool;
	@IsOverrideActive(var_346_bool);
	if(var_346_bool != 0) {
		var_338_int = -2;
		return 8;
	}
	@DoDialog(var_345_object);
	bool var_359_bool; object var_360_object;
	object var_361_object;
	func_1868(var_361_object);
	var_361_object = var_360_object;
	func_1677(var_359_bool, var_360_object);
	object var_362_object; object var_363_object;
	var_339_object = var_362_object;
	var_345_object = var_363_object;
	TaskCall(5);
	func_584(var_364_object, var_365_object, var_366_string, var_367_bool, var_362_object, var_363_object);
	TaskReturn();
	bool var_348_bool;
	var_345_object->IsDialogEnd(var_348_bool);
	
	for(;;) {
		var_407_bool = !var_348_bool; //@nz
		if(var_407_bool == 0) goto Label_573;
		@sync();
		var_345_object->IsDialogEnd(var_348_bool);
	}
	
Label_573:
	object var_408_object;
	var_339_object = var_408_object;
	func_1659();
	@StopDialog(var_345_object);
	var_345_object->GetReturnValue(-1);
	int var_347_int = var_338_int;
}
EMIT "Stack[-4] = 0";


void func_1659(void)
{
	bool var_273_bool;
	@CameraSwitchToNormal(true);
	bool var_275_bool;
	func_1936(var_275_bool);
	if(var_275_bool != 0) {
	} else {
		@HasAnimationTrack(var_273_bool, "head");
		if(var_273_bool == 0) goto Label_1676;
		@UnlookAsync("head");
	}
Label_1676:
	
}


