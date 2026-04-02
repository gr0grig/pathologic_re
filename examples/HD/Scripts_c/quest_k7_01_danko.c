// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_1500();
			if(var_8_bool == 27639) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1766();
				object var_70_object = var_1_object;
				func_1840(var_0_object);
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_1824();
				object var_98_object = var_1_object;
				func_1802(var_0_object);
			}
			if(var_8_bool == 27440) {
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_1741();
			}
			if(var_8_bool == 27442) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_1709();
			}
			if(var_8_bool == 27451) {
				object var_158_object = var_1_object;
				func_1747(var_0_object);
			}
			if(var_8_bool == 27643) {
				object var_176_object; object var_177_object;
				var_176_object = var_1_object;
				var_177_object = var_0_object;
				func_1766();
				object var_178_object; object var_179_object;
				var_178_object = var_1_object;
				var_179_object = var_0_object;
				func_1824();
				object var_180_object = var_1_object;
				func_1840(var_0_object);
				object var_182_object = var_1_object;
				func_1802(var_0_object);
			}
			if(var_8_bool == 27652) {
				object var_186_object; object var_187_object;
				var_186_object = var_1_object;
				var_187_object = var_0_object;
				func_1792();
				object var_199_object = var_1_object;
				func_1830(var_0_object);
				object var_217_object; object var_218_object;
				var_217_object = var_1_object;
				var_218_object = var_0_object;
				func_1818();
			}
			if(var_8_bool == 43156) {
				object var_223_object; object var_224_object;
				var_223_object = var_1_object;
				var_224_object = var_0_object;
				func_1792();
				object var_225_object = var_1_object;
				func_1702(var_0_object);
			}
			if(var_7_cvector == 27636) {
				bool var_267_bool;
				func_1896(var_1_object);
				if(var_267_bool != 0) {
					object var_273_object; object var_274_object;
					var_273_object = var_1_object;
					var_274_object = var_0_object;
					func_1760();
					func_227(var_8_bool, "Neutral");
					var_0_object->SetMessage(526351); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526352, 27638, 27637); //@t
					var_0_object->AddReply(528648, 27638, 30055); //@t
					return 0;
				}
				func_227(var_8_bool, "Neutral");
				var_0_object->SetMessage(526160); //@t
				var_0_object->ClearReplies(); //@t
				bool var_303_bool = false;
				bool var_304_bool;
				func_1861(var_1_object);
				if(var_304_bool != 0) {
					bool var_310_bool;
					func_1884(var_1_object);
					if(var_310_bool != 0)
						var_303_bool = true;
				}
				if(var_303_bool != 0)
					var_0_object->AddReply(526161, 27441, 27440); //@t
				bool var_319_bool = false;
				bool var_320_bool;
				func_1861(var_1_object);
				if(var_320_bool != 0) {
					bool var_322_bool;
					func_1873(var_322_bool, var_1_object);
					if(var_322_bool != 0)
						var_319_bool = true;
				}
				if(var_319_bool != 0)
					var_0_object->AddReply(526165, 30046, 27444); //@t
				bool var_334_bool;
				func_1908(var_1_object);
				if(var_334_bool != 0)
					var_0_object->AddReply(526356, 27642, 27641); //@t
				bool var_343_bool;
				func_1920(var_1_object);
				if(var_343_bool != 0)
					var_0_object->AddReply(526365, 27651, 27650); //@t
				var_0_object->AddReply(526166, -1, 27445); //@t
				var_0_object->AddReply(528636, -1, 30041); //@t
				return 0;
			}
			if(var_7_cvector == 27651) {
				func_227(var_8_bool, "Neutral");
				var_0_object->SetMessage(526366); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528637, 30043, 30042); //@t
				return 0;
			}
			if(var_7_cvector == 30043) {
				func_227(var_8_bool, "Neutral");
				var_0_object->SetMessage(528638); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528639, 30045, 30044); //@t
				return 0;
			}
			if(var_7_cvector == 30045) {
				func_227(var_8_bool, "Untrust");
				var_0_object->SetMessage(528640); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526367, -1, 27652); //@t
				var_0_object->AddReply(541054, -1, 43156); //@t
				return 0;
			}
			if(var_7_cvector == 27642) {
				func_227(var_8_bool, "Smile");
				var_0_object->SetMessage(526357); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526358, -1, 27643); //@t
				return 0;
			}
			if(var_7_cvector == 30046) {
				func_227(var_8_bool, "Untrust");
				var_0_object->SetMessage(528641); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528642, 30049, 30047); //@t
				var_0_object->AddReply(528643, 30049, 30048); //@t
				return 0;
			}
			if(var_7_cvector == 30049) {
				func_227(var_8_bool, "Neutral");
				var_0_object->SetMessage(528644); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528645, 30052, 30050); //@t
				return 0;
			}
			if(var_7_cvector == 30052) {
				func_227(var_8_bool, "Neutral");
				var_0_object->SetMessage(528646); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528647, 27447, 30054); //@t
				var_0_object->AddReply(541055, 30070, 43157); //@t
				return 0;
			}
			if(var_7_cvector == 27447) {
				func_227(var_8_bool, "Menace");
				var_0_object->SetMessage(526168); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528657, 30068, 30067); //@t
				return 0;
			}
			if(var_7_cvector == 30068) {
				func_227(var_8_bool, "Menace");
				var_0_object->SetMessage(528658); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528659, 30070, 30069); //@t
				return 0;
			}
			if(var_7_cvector == 30070) {
				func_227(var_8_bool, "Untrust");
				var_0_object->SetMessage(528660); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526169, 27450, 27448); //@t
				var_0_object->AddReply(528661, 30072, 30071); //@t
				return 0;
			}
			if(var_7_cvector == 30072) {
				func_227(var_8_bool, "Untrust");
				var_0_object->SetMessage(528662); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528663, 27450, 30073); //@t
				return 0;
			}
			if(var_7_cvector == 27450) {
				func_227(var_8_bool, "Neutral");
				var_0_object->SetMessage(526170); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526171, -1, 27451); //@t
				return 0;
			}
			if(var_7_cvector == 27441) {
				func_227(var_8_bool, "Sorrow");
				var_0_object->SetMessage(526162); //@t
				var_0_object->ClearReplies(); //@t
				bool var_458_bool;
				func_1873(var_458_bool, var_1_object);
				if(var_458_bool != 0)
					var_0_object->AddReply(526167, 30046, 27446); //@t
				bool var_463_bool;
				func_1873(var_463_bool, var_1_object);
				if(!var_463_bool) //@nz
					var_0_object->AddReply(541052, 43155, 43154); //@t
				return 0;
			}
			if(var_7_cvector == 43155) {
				func_227(var_8_bool, "Untrust");
				var_0_object->SetMessage(541053); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526163, -1, 27442); //@t
				return 0;
			}
			if(var_7_cvector == 27638) {
				func_227(var_8_bool, "Untrust");
				var_0_object->SetMessage(526353); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528654, 30064, 30063); //@t
				var_0_object->AddReply(528656, 30064, 30065); //@t
				return 0;
			}
			if(var_7_cvector == 30064) {
				func_227(var_8_bool, "Untrust");
				var_0_object->SetMessage(528655); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528650, 30060, 30057); //@t
				var_0_object->AddReply(528651, 30056, 30058); //@t
				return 0;
			}
			if(var_7_cvector == 30056) {
				func_227(var_8_bool, "Neutral");
				var_0_object->SetMessage(528649); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528653, 30060, 30061); //@t
				return 0;
			}
			if(var_7_cvector == 30060) {
				func_227(var_8_bool, "Menace");
				var_0_object->SetMessage(528652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526354, -1, 27639); //@t
				var_0_object->AddReply(526355, -1, 27640); //@t
				return 0;
			}
			var_3_string = true;
			bool var_513_bool;
			func_2100(var_513_bool);
			if(var_513_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xfa";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_904(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1507(var_13_object);
				@RemoveActor(var_13_object);
			}
		} else if(var_7_string == "restore") {
			var_1_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		if(var_1_object != 0) {
			object var_8_object;
			func_1507(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_1011();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_1026();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_969();
			bool var_11_bool = false;
			bool var_12_bool;
			func_1224(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_938(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_918(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1507(var_53_object);
					var_53_object = var_52_object;
					func_1374(var_51_bool, var_52_object);
				}
			} else {
				func_933(var_7_int);
				func_960();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_960();
		else
			func_1454("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_1151();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_1215(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_855(var_25_object);
			func_1454("Neutral");
			func_969();
			func_960();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_1229(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_2094(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_2092(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_2096(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_2098(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_2075(var_89_int);
	var_33_object->SetPlayerName(var_89_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	bool var_98_bool; object var_99_object;
	object var_100_object;
	func_1507(var_100_object);
	var_100_object = var_99_object;
	func_1316(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_311_bool = !var_36_bool; //@nz
		if(var_311_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_312_object;
	var_27_object = var_312_object;
	func_1298();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1792(void)
{
	func_1958();
	bool var_196_bool;
	func_1652(var_196_bool, "quest_k7_02", "completed");
}


void func_1026(void)
{
	@StopGroup0();
	func_969();
	func_1454("Neutral");
	func_960();
}


void func_1539(object var_62_object, string var_63_string)
{
	object var_66_object;
	@GetMainOutdoorScene(var_66_object);
	object var_67_object;
	@AddBlankActor(var_67_object, var_66_object, var_63_string, (var_63_string + ".bin"));
	var_67_object = var_62_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1802(object var_99_object)
{
	object var_103_object;
	func_2025(var_103_object);
	object var_100_object;
	var_103_object = var_100_object;
	func_2042(var_100_object, "pt_gatherer3", (float)2);
	object var_123_object;
	func_2025(var_123_object);
	var_99_object->ShowMap(var_123_object);
}


void func_1550(int var_89_int, int var_90_int)
{
	object var_92_object;
	@CreateIntVector(var_92_object);
	var_92_object->add(var_89_int);
	var_92_object->add(var_90_int);
	@SendWorldWndMessage(3, var_92_object);
}
EMIT "Stack[-1] = 0";


void func_1298(void)
{
	bool var_314_bool;
	@CameraSwitchToNormal(true);
	bool var_316_bool;
	func_2100(var_316_bool);
	if(var_316_bool != 0) {
	} else {
		@HasAnimationTrack(var_314_bool, "head");
		if(var_314_bool == 0) goto Label_1315;
		@UnlookAsync("head");
	}
Label_1315:
	
}


void func_1562(object var_202_object, int var_203_int)
{
	int var_205_int;
	object var_206_object;
	var_202_object = var_206_object;
	int var_208_int;
	func_1198(var_206_object, "money", var_208_int);
	if(var_208_int > 0) {
		@GetInvItemByName(var_205_int, "Money");
		int var_215_int; int var_216_int;
		var_205_int = var_215_int;
		var_203_int = var_216_int;
		func_1550(var_215_int, var_216_int);
	}
}


void func_2075(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x82a";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


// @pe
void func_1818(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_1824(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1316(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_1374(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_1411(var_140_bool, var_141_object);
			if(!var_140_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@irand(var_106_int, 2);
		if(var_106_int != 0)
			@SetVariable("voice_common", ((var_105_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_185_bool; object var_186_object;
		var_99_object = var_186_object;
		func_1411(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_1374(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1372;
	
Label_1372:
	var_98_bool = true;
	
}


// @pe
void func_1830(object var_199_object)
{
	@Trace("money 5000 is given");
	object var_202_object;
	var_199_object = var_202_object;
	func_1562(var_202_object, 5000);
}


void func_2092(int var_86_int)
{
	var_86_int = 515573;
}


void func_1581(object var_78_object, object var_79_object, int var_80_int)
{
	int var_84_int;
	var_79_object->GetItemID(var_84_int);
	int var_85_int;
	@GetInvItemProperty(var_85_int, var_84_int, "Category");
	bool var_86_bool;
	var_78_object->AddItem(var_86_bool, var_79_object, var_85_int, var_80_int);
	if(!var_86_bool) { //@nz
		var_78_object->DropItems(var_79_object, var_80_int);
	} else {
		int var_89_int; int var_90_int;
		var_84_int = var_89_int;
		var_80_int = var_90_int;
		func_1550(var_89_int, var_90_int);
	}
	
}


void func_2094(int var_85_int)
{
	var_85_int = 504032;
}


void func_2096(string var_87_string)
{
	var_87_string = "ui/NPC_Bakalavr.png";
}


void func_1840(object var_70_object)
{
	@Trace("Samopal is given");
	object var_73_object;
	@CreateInvItem(var_73_object);
	var_73_object->SetItemName("Samopal");
	var_73_object->SetProperty("durability", 30);
	object var_78_object; object var_79_object;
	var_70_object = var_78_object;
	var_73_object = var_79_object;
	func_1581(var_78_object, var_79_object, 1);
}
EMIT "Stack[-1] = 0";


void func_2098(string var_88_string)
{
	var_88_string = "ui/NPC_Bakalavr_b.png";
}


void func_2100(bool var_80_bool)
{
	var_80_bool = true;
}


void func_1080(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_1224(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1685(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_1224(var_41_bool);
			if(var_41_bool != 0)
				var_38_bool = true;
		}
		if(var_38_bool != 0) {
			if(!var_17_int) { //@nz
				@Sleep(3, var_19_bool);
				if(!var_19_bool) { //@nz
				} else {
			} else {
			@irand(var_20_int, var_17_int);
			@irand(var_21_int, 5);
			if(var_21_int != 0)
				var_20_int = 0;
			string var_52_string; int var_53_int;
			var_20_int = var_53_int;
			func_1678(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_1135;
			goto Label_1146;
			}
				Label_1135:
					bool var_45_bool;
					func_1149(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_1141;
			}
		}
	Label_1146:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1141:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1600(bool var_277_bool, object var_278_object, string var_279_string)
{
	int var_282_int;
	@GetInvItemByName(var_282_int, var_279_string);
	bool var_283_bool;
	var_278_object->HasItem(var_282_int, var_283_bool);
	var_283_bool = var_277_bool;
}


// @pe
void func_1861(bool var_257_bool)
{
	int var_259_int;
	func_1534(var_259_int, "k7q01");
	if(var_259_int == 2)
		var_257_bool = true;
	var_257_bool = false;
}


// @pe
void func_1607(bool var_227_bool, object var_228_object, float var_229_float)
{
	if(!var_228_object) { //@nz
		var_227_bool = false;
		return 0;
	}
	if(var_229_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_229_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_234_float;
		var_229_float = var_234_float;
		func_1642(var_234_float);
		bool var_238_bool; object var_239_object; float var_241_float;
		var_228_object = var_239_object;
		var_229_float = var_241_float;
		func_1176(var_238_bool, var_239_object, "reputation", var_241_float, (float)0, (float)1);
		var_227_bool = true;
		return 0;

	}
	
	var_227_bool = false;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool;
		func_1896(var_1_object);
		if(var_200_bool != 0) {
			object var_208_object; object var_209_object;
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_1760();
			func_227(var_194_object, "Neutral");
			var_0_object->SetMessage(526351); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526352, 27638, 27637); //@t
			var_0_object->AddReply(528648, 27638, 30055); //@t
		} else {
					func_227(var_194_object, "Neutral");
					var_0_object->SetMessage(526160); //@t
					var_0_object->ClearReplies(); //@t
					bool var_256_bool = false;
					bool var_257_bool;
					func_1861(var_1_object);
					if(var_257_bool != 0) {
						bool var_263_bool;
						func_1884(var_1_object);
						if(var_263_bool != 0)
							var_256_bool = true;
					}
					if(var_256_bool != 0)
						var_0_object->AddReply(526161, 27441, 27440); //@t
					bool var_272_bool = false;
					bool var_273_bool;
					func_1861(var_1_object);
					if(var_273_bool != 0) {
						bool var_275_bool;
						func_1873(var_275_bool, var_1_object);
						if(var_275_bool != 0)
							var_272_bool = true;
					}
					if(var_272_bool != 0)
						var_0_object->AddReply(526165, 30046, 27444); //@t
					bool var_287_bool;
					func_1908(var_1_object);
					if(var_287_bool != 0)
						var_0_object->AddReply(526356, 27642, 27641); //@t
					bool var_296_bool;
					func_1920(var_1_object);
					if(var_296_bool != 0)
						var_0_object->AddReply(526365, 27651, 27650); //@t
					var_0_object->AddReply(526166, -1, 27445); //@t
					var_0_object->AddReply(528636, -1, 30041); //@t
		}
	}
	for(;;) {
		bool var_236_bool;
		func_2100(var_236_bool);
		if(var_236_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1454(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_226;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_226:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


// @pe
void func_1873(bool var_275_bool, object var_276_object)
{
	object var_278_object;
	var_276_object = var_278_object;
	bool var_277_bool;
	func_1600(var_277_bool, var_278_object, "bird_mask");
	if(var_277_bool != 0) {
		var_275_bool = true;
		return 0;
	}
	var_275_bool = false;
}


// @pe
void func_855(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


// @pe
void func_1884(bool var_263_bool)
{
	int var_265_int;
	func_1534(var_265_int, "ook7DankoTheater1");
	if(var_265_int == 0) {
		var_263_bool = true;
		return 0;
	}
	var_263_bool = false;
}


void func_1374(bool var_109_bool, object var_110_object)
{
	string var_116_string; bool var_118_bool; int var_119_int; string var_120_string;
	var_116_string = "c";
	int var_117_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_110_object->HasProperty((var_116_string + (var_117_int + 1)), var_118_bool);
			if(!var_118_bool) { //@nz
			} else {
				var_117_int += 1;
			}
		}
		if(!var_117_int) { //@nz
			var_109_bool = false;
			return 10;
		}
		var_119_int = 0;
		if(var_117_int > 1)
			@irand(var_119_int, var_117_int);
		var_110_object->GetProperty((var_116_string + (var_119_int + 1)), var_120_string);
		bool var_132_bool; string var_133_string;
		var_120_string = var_133_string;
		func_1485(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


// @pe
void func_1896(bool var_200_bool)
{
	int var_202_int;
	func_1534(var_202_int, "ook7DankoTheater2");
	if(var_202_int == 0) {
		var_200_bool = true;
		return 0;
	}
	var_200_bool = false;
}


void func_1642(float var_234_float)
{
	object var_236_object;
	@CreateFloatVector(var_236_object);
	var_236_object->add(var_234_float);
	@SendWorldWndMessage(16, var_236_object);
}
EMIT "Stack[-1] = 0";


void func_1652(bool var_150_bool, string var_151_string, string var_152_string)
{
	object var_154_object;
	@FindActor(var_154_object, var_151_string);
	if(var_154_object == null)
		var_150_bool = false;
	@Trigger(var_154_object, var_152_string);
	var_150_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1908(bool var_287_bool)
{
	int var_289_int;
	func_1534(var_289_int, "k7q02");
	if(var_289_int == 0) {
		var_287_bool = true;
		return 0;
	}
	var_287_bool = false;
}


void func_1149(bool var_45_bool)
{
	var_45_bool = true;
}


void func_1151(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1664(float var_28_float)
{
	float var_30_float;
	@GetGameTime(var_30_float);
	var_30_float = var_28_float;
}


// @pe
void func_1920(bool var_296_bool)
{
	int var_298_int;
	func_1534(var_298_int, "k7q02");
	if(var_298_int == 2)
		var_296_bool = true;
	var_296_bool = false;
}


void func_1411(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1669(var_153_int);
	string var_147_string = ("d" + var_153_int) + "m";
	int var_148_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_141_object->HasProperty((var_147_string + (var_148_int + 1)), var_149_bool);
			if(!var_149_bool) { //@nz
			} else {
				var_148_int += 1;
			}
		}
		if(!var_148_int) { //@nz
			var_140_bool = false;
			return 10;
		}
		var_150_int = 0;
		if(var_148_int > 1)
			@irand(var_150_int, var_148_int);
		var_141_object->GetProperty((var_147_string + (var_150_int + 1)), var_151_string);
		bool var_172_bool; string var_173_string;
		var_151_string = var_173_string;
		func_1485(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_1156(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1669(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


void func_904(object var_0_object)
{
	bool var_7_bool;
	func_1224(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1080();
	}
}
EMIT "Return(); Pop(0)";


void func_1164(bool var_246_bool, object var_247_object, string var_248_string)
{
	var_253_bool = IsFuncExist(var_247_object, "HasProperty", 2);
	if(!var_253_bool) { //@nz
		var_246_bool = false;
		return 2;
	}
	bool var_250_bool;
	var_247_object->HasProperty(var_248_string, var_250_bool);
	var_250_bool = var_246_bool;
}


void func_1932(void)
{
	object var_165_object;
	@CreateDiaryEntry(var_165_object, 420, 1, 526219);
	bool var_169_bool; object var_170_object;
	var_165_object = var_170_object;
	func_1997(var_169_bool, var_170_object, 416);
}
EMIT "Stack[-1] = 0";


void func_1678(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_1685(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1678(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_918(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_1215(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1176(bool var_238_bool, object var_239_object, string var_240_string, float var_241_float, float var_242_float, float var_243_float)
{
	object var_247_object;
	var_239_object = var_247_object;
	string var_248_string;
	var_240_string = var_248_string;
	bool var_246_bool;
	func_1164(var_246_bool, var_247_object, var_248_string);
	if(!var_246_bool) //@nz
		var_238_bool = false;
	float var_245_float;
	var_239_object->GetProperty(var_240_string, var_245_float);
	float var_256_float; float var_258_float; float var_259_float;
	var_242_float = var_258_float;
	var_243_float = var_259_float;
	func_1523(var_256_float, (var_245_float + var_241_float), var_258_float, var_259_float);
	var_239_object->SetProperty(var_240_string, var_256_float);
	var_238_bool = true;
}


void func_1945(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 430, 2, 526368);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_1997(var_36_bool, var_37_object, -1);
}
EMIT "Stack[-1] = 0";


void func_933(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


// @pe
void func_1702(object var_225_object)
{
	object var_228_object;
	var_225_object = var_228_object;
	bool var_227_bool;
	func_1607(var_227_bool, var_228_object, 0.05);
}


void func_1958(void)
{
	object var_189_object;
	@CreateDiaryEntry(var_189_object, 433, 2, 526371);
	bool var_193_bool; object var_194_object;
	var_189_object = var_194_object;
	func_1997(var_193_bool, var_194_object, 430);
}
EMIT "Stack[-1] = 0";


void func_938(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_1156(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1709(void)
{
	object var_135_object;
	int var_136_int;
	func_1534(var_136_int, "k7q01CorpseMark");
	if(var_136_int == 0) {
		@SetVariable("k7q01CorpseMark", 1);
		object var_144_object;
		func_2025(var_144_object);
		var_144_object = var_135_object;
		float var_149_float;
		func_1664(var_149_float);
		var_135_object->AddMark("k7q01BirdmaskGotoCorpse", "pt_d7q02_corpse", 3, 526214, var_149_float);
		bool var_150_bool;
		func_1652(var_150_bool, "quest_k7_01", "place_corpse");
		var_135_object = null;
	}
}


void func_1198(object var_206_object, string var_207_string, int var_208_int)
{
	int var_210_int;
	var_206_object->GetProperty(var_207_string, var_210_int);
	var_206_object->SetProperty(var_207_string, (var_210_int + var_208_int));
}


void func_1454(string var_238_string)
{
	bool var_242_bool; float var_243_float; float var_244_float;
	@lshHasAnimation(var_242_bool, var_238_string);
	if(var_242_bool != 0) {
		@lshGetAnimTimes(var_238_string, var_243_float, var_244_float);
		@lshPlayAnimation(var_243_float, var_244_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_238_string);
	}
	
}


void func_1971(void)
{
	object var_55_object;
	@CreateDiaryEntry(var_55_object, 431, 2, 526369);
	bool var_59_bool; object var_60_object;
	var_55_object = var_60_object;
	func_1997(var_59_bool, var_60_object, 430);
}
EMIT "Stack[-1] = 0";


void func_1205(bool var_15_bool, cvector var_16_cvector)
{
	cvector var_20_cvector;
	@GetPosition(var_20_cvector);
	cvector var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	bool var_22_bool;
	@Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
}


void func_1470(string var_216_string, bool var_217_bool)
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


void func_1215(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_1205(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_960(void)
{
	float var_323_float;
	@rand(var_323_float, 8, 16);
	@SetTimer(10, var_323_float);
}


void func_1984(object var_45_object)
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


void func_1224(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_969(void)
{
	@KillTimer(10);
}


void func_1229(bool var_37_bool, object var_38_object, float var_39_float)
{
	cvector var_50_cvector; bool var_57_bool;
	var_38_object->GetPosition(var_50_cvector);
	float var_49_float;
	var_38_object->GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (var_58_float + var_49_float);
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	@GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (var_59_float + var_49_float);
	cvector var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_62_float = sqrt(var_52_cvector | var_52_cvector);
	var_52_cvector /= var_62_float;
	cvector var_53_cvector = -var_52_cvector;
	cvector var_64_cvector;
	func_1513(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_54_cvector = ((var_52_cvector * var_39_float) + (var_64_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_56_bool;
	@IsOverrideActive(var_56_bool);
	if(var_56_bool != 0)
		var_37_bool = false;
	@StopWorld();
	@CameraTransit((var_51_cvector + var_54_cvector), var_53_cvector, true);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	@Rotate(var_78_float, var_79_float);
	bool var_80_bool;
	func_2100(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_1292;
		@LookAsyncCamera("head");
	}
Label_1292:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


// @pe
void func_1741(void)
{
	@SetVariable("ook7DankoTheater1", 1);
}


void func_1485(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_2100(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_1997(bool var_36_bool, object var_37_object, int var_38_int)
{
	object var_45_object;
	func_1984(var_45_object);
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


void func_1747(object var_158_object)
{
	@SetVariable("k7q01", 3);
	func_1932();
	int var_161_int;
	var_158_object->RemoveItemByType(var_161_int, "bird_mask", 1);
}


void func_1500(void)
{
	bool var_10_bool;
	func_2100(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1760(void)
{
	@SetVariable("ook7DankoTheater2", 1);
}


// @pe
void func_227(object var_2_object, string var_212_string)
{
	bool var_213_bool;
	func_2100(var_213_bool);
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
	func_1470(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	
}


void func_1507(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_1766(void)
{
	object var_17_object;
	func_2025(var_17_object);
	object var_16_object;
	var_17_object = var_16_object;
	float var_28_float;
	func_1664(var_28_float);
	var_16_object->AddMark("k7q02DankoGotoGatherer", "pt_gatherer3", 0, 526372, var_28_float);
	func_1945();
	func_1971();
	object var_62_object;
	func_1539(var_62_object, "quest_k7_02");
}
EMIT "Stack[-1] = 0";


void func_1513(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


void func_2025(object var_17_object)
{
	object var_20_object; object var_21_object;
	@GetMainOutdoorScene(var_20_object);
	if(var_20_object == null) {
		@Trace("Can't find main outdoor scene");
		var_21_object = null;
		var_21_object = var_17_object;
	}
	var_20_object->GetMap(var_21_object);
	var_21_object = var_17_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1011(void)
{
	func_1151();
	func_969();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1523(float var_256_float, float var_257_float, float var_258_float, float var_259_float)
{
	if(var_257_float < var_258_float) {
		var_258_float = var_256_float;
		return 0;
	}
	if(var_257_float > var_259_float) {
		var_259_float = var_256_float;
		return 0;
	}
	var_257_float = var_256_float;
}


void func_2042(object var_100_object, string var_101_string, float var_102_float)
{
	object var_110_object;
	@GetMainOutdoorScene(var_110_object);
	if(var_110_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_108_cvector;
	cvector var_109_cvector;
	bool var_111_bool;
	var_110_object->GetLocator(var_101_string, var_111_bool, var_108_cvector, var_109_cvector);
	if(!var_111_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_101_string) + " doesnt exist");
	var_110_object->GetMap(var_100_object);
	if(var_100_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_121_float = GetByIndex(var_108_cvector, 0);
	var_122_float = GetByIndex(var_108_cvector, 2);
	var_100_object->SetMapParams(var_121_float, var_122_float, var_102_float);
}
EMIT "Stack[-2] = 0";


void func_1534(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


