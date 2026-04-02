// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_1452();
			if(var_8_bool == 27639) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1655();
				object var_70_object = var_1_object;
				func_1729(var_0_object);
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_1713();
				object var_98_object = var_1_object;
				func_1691(var_0_object);
			}
			if(var_8_bool == 27440) {
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_1630();
			}
			if(var_8_bool == 27442) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_1598();
			}
			if(var_8_bool == 27451) {
				object var_158_object = var_1_object;
				func_1636(var_0_object);
			}
			if(var_8_bool == 27643) {
				object var_176_object; object var_177_object;
				var_176_object = var_1_object;
				var_177_object = var_0_object;
				func_1655();
				object var_178_object; object var_179_object;
				var_178_object = var_1_object;
				var_179_object = var_0_object;
				func_1713();
				object var_180_object = var_1_object;
				func_1729(var_0_object);
				object var_182_object = var_1_object;
				func_1691(var_0_object);
			}
			if(var_8_bool == 27652) {
				object var_186_object; object var_187_object;
				var_186_object = var_1_object;
				var_187_object = var_0_object;
				func_1681();
				object var_199_object = var_1_object;
				func_1719(var_0_object);
				object var_217_object; object var_218_object;
				var_217_object = var_1_object;
				var_218_object = var_0_object;
				func_1707();
			}
			if(var_7_cvector == 27636) {
				bool var_223_bool;
				func_1785(var_1_object);
				if(var_223_bool != 0) {
					object var_229_object; object var_230_object;
					var_229_object = var_1_object;
					var_230_object = var_0_object;
					func_1649();
					func_240(var_8_bool, "Neutral");
					var_0_object->SetMessage(526351); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526352, 27638, 27637); //@t
					var_0_object->AddReply(528648, 27638, 30055); //@t
					return 0;
				}
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(526160); //@t
				var_0_object->ClearReplies(); //@t
				bool var_254_bool = false;
				bool var_255_bool;
				func_1750(var_1_object);
				if(var_255_bool != 0) {
					bool var_261_bool;
					func_1773(var_1_object);
					if(var_261_bool != 0)
						var_254_bool = true;
				}
				if(var_254_bool != 0)
					var_0_object->AddReply(526161, 27441, 27440); //@t
				bool var_270_bool = false;
				bool var_271_bool;
				func_1750(var_1_object);
				if(var_271_bool != 0) {
					bool var_273_bool;
					func_1762(var_273_bool, var_1_object);
					if(var_273_bool != 0)
						var_270_bool = true;
				}
				if(var_270_bool != 0)
					var_0_object->AddReply(526165, 30046, 27444); //@t
				bool var_285_bool;
				func_1797(var_1_object);
				if(var_285_bool != 0)
					var_0_object->AddReply(526356, 27642, 27641); //@t
				bool var_294_bool;
				func_1809(var_1_object);
				if(var_294_bool != 0)
					var_0_object->AddReply(526365, 27651, 27650); //@t
				var_0_object->AddReply(526166, -1, 27445); //@t
				var_0_object->AddReply(528636, -1, 30041); //@t
				return 0;
			}
			if(var_7_cvector == 27651) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(526366); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528637, 30043, 30042); //@t
				return 0;
			}
			if(var_7_cvector == 30043) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528638); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528639, 30045, 30044); //@t
				return 0;
			}
			if(var_7_cvector == 30045) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528640); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526367, -1, 27652); //@t
				var_0_object->AddReply(541054, -1, 43156); //@t
				return 0;
			}
			if(var_7_cvector == 27642) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(526357); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526358, -1, 27643); //@t
				return 0;
			}
			if(var_7_cvector == 30046) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528641); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528642, 30049, 30047); //@t
				var_0_object->AddReply(528643, 30049, 30048); //@t
				return 0;
			}
			if(var_7_cvector == 30049) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528644); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528645, 30052, 30050); //@t
				return 0;
			}
			if(var_7_cvector == 30052) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528646); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528647, 27447, 30054); //@t
				var_0_object->AddReply(541055, 30070, 43157); //@t
				return 0;
			}
			if(var_7_cvector == 27447) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(526168); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528657, 30068, 30067); //@t
				return 0;
			}
			if(var_7_cvector == 30068) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528658); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528659, 30070, 30069); //@t
				return 0;
			}
			if(var_7_cvector == 30070) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528660); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526169, 27450, 27448); //@t
				var_0_object->AddReply(528661, 30072, 30071); //@t
				return 0;
			}
			if(var_7_cvector == 30072) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528662); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528663, 27450, 30073); //@t
				return 0;
			}
			if(var_7_cvector == 27450) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(526170); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526171, -1, 27451); //@t
				return 0;
			}
			if(var_7_cvector == 27441) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(526162); //@t
				var_0_object->ClearReplies(); //@t
				bool var_409_bool;
				func_1762(var_409_bool, var_1_object);
				if(var_409_bool != 0)
					var_0_object->AddReply(526167, 30046, 27446); //@t
				var_0_object->AddReply(541052, 43155, 43154); //@t
				return 0;
			}
			if(var_7_cvector == 43155) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(541053); //@t
				var_0_object->ClearReplies(); //@t
				bool var_421_bool;
				func_1762(var_421_bool, var_1_object);
				if(!var_421_bool) //@nz
					var_0_object->AddReply(526163, -1, 27442); //@t
				return 0;
			}
			if(var_7_cvector == 27638) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(526353); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528654, 30064, 30063); //@t
				var_0_object->AddReply(528656, 30064, 30065); //@t
				return 0;
			}
			if(var_7_cvector == 30064) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528655); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528650, 30060, 30057); //@t
				var_0_object->AddReply(528651, 30056, 30058); //@t
				return 0;
			}
			if(var_7_cvector == 30056) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528649); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528653, 30060, 30061); //@t
				return 0;
			}
			if(var_7_cvector == 30060) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526354, -1, 27639); //@t
				var_0_object->AddReply(526355, -1, 27640); //@t
				return 0;
			}
			var_3_string = true;
			bool var_464_bool;
			func_1989(var_464_bool);
			if(var_464_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x107";
	
	}

}


maintask task_3
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
				func_1459(var_13_object);
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
			func_1459(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_1017();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_1032();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_975();
			bool var_11_bool = false;
			bool var_12_bool;
			func_1196(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_944(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_924(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1459(var_53_object);
					var_53_object = var_52_object;
					func_1344(var_51_bool, var_52_object);
				}
			} else {
				func_939(var_7_int);
				func_966();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_966();
		else
			func_1424("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_1157();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_1187(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_855(var_25_object);
			func_1424("Neutral");
			func_975();
			func_966();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_1196(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


// @pe
void func_1797(bool var_276_bool)
{
	int var_278_int;
	func_1475(var_278_int, "k7q02");
	if(var_278_int == 0) {
		var_276_bool = true;
		return 0;
	}
	var_276_bool = false;
}


void func_1286(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_1344(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_1381(var_79_bool, var_80_object);
			if(!var_79_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@irand(var_45_int, 2);
		if(var_45_int != 0)
			@SetVariable("voice_common", ((var_44_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_124_bool; object var_125_object;
		var_38_object = var_125_object;
		func_1381(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_1344(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1342;
	
Label_1342:
	var_37_bool = true;
	
}


void func_1541(bool var_266_bool, object var_267_object, string var_268_string)
{
	int var_271_int;
	@GetInvItemByName(var_271_int, var_268_string);
	bool var_272_bool;
	var_267_object->HasItem(var_271_int, var_272_bool);
	var_272_bool = var_266_bool;
}


void func_1032(void)
{
	@StopGroup0();
	func_975();
	func_1424("Neutral");
	func_966();
}


void func_1548(bool var_150_bool, string var_151_string, string var_152_string)
{
	object var_154_object;
	@FindActor(var_154_object, var_151_string);
	if(var_154_object == null)
		var_150_bool = false;
	@Trigger(var_154_object, var_152_string);
	var_150_bool = true;
}
EMIT "Stack[-1] = 0";


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1459(var_39_object);
	var_39_object = var_38_object;
	func_1286(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_1201(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_1983(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1981(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1985(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1987(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1964(var_183_int);
	var_33_object->SetPlayerName(var_183_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	object var_192_object; object var_193_object;
	var_27_object = var_192_object;
	var_33_object = var_193_object;
	TaskCall(2);
	func_94(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_300_bool = !var_36_bool; //@nz
		if(var_300_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_301_object;
	var_27_object = var_301_object;
	func_1269();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1809(bool var_285_bool)
{
	int var_287_int;
	func_1475(var_287_int, "k7q02");
	if(var_287_int == 2)
		var_285_bool = true;
	var_285_bool = false;
}


void func_1560(float var_28_float)
{
	float var_30_float;
	@GetGameTime(var_30_float);
	var_30_float = var_28_float;
}


void func_1565(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_1821(void)
{
	object var_165_object;
	@CreateDiaryEntry(var_165_object, 420, 1, 526219);
	bool var_169_bool; object var_170_object;
	var_165_object = var_170_object;
	func_1886(var_169_bool, var_170_object, 416);
}
EMIT "Stack[-1] = 0";


void func_1574(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_1834(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 430, 2, 526368);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_1886(var_36_bool, var_37_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1581(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1574(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_1847(void)
{
	object var_189_object;
	@CreateDiaryEntry(var_189_object, 433, 2, 526371);
	bool var_193_bool; object var_194_object;
	var_189_object = var_194_object;
	func_1886(var_193_bool, var_194_object, 430);
}
EMIT "Stack[-1] = 0";


void func_1598(void)
{
	object var_135_object;
	int var_136_int;
	func_1475(var_136_int, "k7q01CorpseMark");
	if(var_136_int == 0) {
		@SetVariable("k7q01CorpseMark", 1);
		object var_144_object;
		func_1914(var_144_object);
		var_144_object = var_135_object;
		float var_149_float;
		func_1560(var_149_float);
		var_135_object->AddMark("k7q01BirdmaskGotoCorpse", "pt_d7q02_corpse", 3, 526214, var_149_float);
		bool var_150_bool;
		func_1548(var_150_bool, "quest_k7_01", "place_corpse");
		var_135_object = null;
	}
}


void func_1086(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_1196(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1581(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_1196(var_55_bool);
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
			func_1574(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_1141;
			goto Label_1152;
			}
				Label_1141:
					bool var_59_bool;
					func_1155(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_1147;
			}
		}
	Label_1152:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1147:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


void func_1344(bool var_48_bool, object var_49_object)
{
	string var_55_string; bool var_57_bool; int var_58_int; string var_59_string;
	var_55_string = "c";
	int var_56_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_49_object->HasProperty((var_55_string + (var_56_int + 1)), var_57_bool);
			if(!var_57_bool) { //@nz
			} else {
				var_56_int += 1;
			}
		}
		if(!var_56_int) { //@nz
			var_48_bool = false;
			return 10;
		}
		var_58_int = 0;
		if(var_56_int > 1)
			@irand(var_58_int, var_56_int);
		var_49_object->GetProperty((var_55_string + (var_58_int + 1)), var_59_string);
		bool var_71_bool; string var_72_string;
		var_59_string = var_72_string;
		func_1437(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


void func_1860(void)
{
	object var_55_object;
	@CreateDiaryEntry(var_55_object, 431, 2, 526369);
	bool var_59_bool; object var_60_object;
	var_55_object = var_60_object;
	func_1886(var_59_bool, var_60_object, 430);
}
EMIT "Stack[-1] = 0";


void func_1873(object var_45_object)
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


// @pe
void func_855(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_199_bool;
		func_1785(var_1_object);
		if(var_199_bool != 0) {
			object var_207_object; object var_208_object;
			var_207_object = var_1_object;
			var_208_object = var_0_object;
			func_1649();
			func_240(var_193_object, "Neutral");
			var_0_object->SetMessage(526351); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526352, 27638, 27637); //@t
			var_0_object->AddReply(528648, 27638, 30055); //@t
		} else {
					func_240(var_193_object, "Neutral");
					var_0_object->SetMessage(526160); //@t
					var_0_object->ClearReplies(); //@t
					bool var_245_bool = false;
					bool var_246_bool;
					func_1750(var_1_object);
					if(var_246_bool != 0) {
						bool var_252_bool;
						func_1773(var_1_object);
						if(var_252_bool != 0)
							var_245_bool = true;
					}
					if(var_245_bool != 0)
						var_0_object->AddReply(526161, 27441, 27440); //@t
					bool var_261_bool = false;
					bool var_262_bool;
					func_1750(var_1_object);
					if(var_262_bool != 0) {
						bool var_264_bool;
						func_1762(var_264_bool, var_1_object);
						if(var_264_bool != 0)
							var_261_bool = true;
					}
					if(var_261_bool != 0)
						var_0_object->AddReply(526165, 30046, 27444); //@t
					bool var_276_bool;
					func_1797(var_1_object);
					if(var_276_bool != 0)
						var_0_object->AddReply(526356, 27642, 27641); //@t
					bool var_285_bool;
					func_1809(var_1_object);
					if(var_285_bool != 0)
						var_0_object->AddReply(526365, 27651, 27650); //@t
					var_0_object->AddReply(526166, -1, 27445); //@t
					var_0_object->AddReply(528636, -1, 30041); //@t
		}
	}
	for(;;) {
		bool var_230_bool;
		func_1989(var_230_bool);
		if(var_230_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1424(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_239;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_239:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


// @pe
void func_1630(void)
{
	@SetVariable("ook7DankoTheater1", 1);
}


void func_1886(bool var_36_bool, object var_37_object, int var_38_int)
{
	object var_45_object;
	func_1873(var_45_object);
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


void func_1636(object var_158_object)
{
	@SetVariable("k7q01", 3);
	func_1821();
	int var_161_int;
	var_158_object->RemoveItemByType(var_161_int, "bird_mask", 1);
}


void func_1381(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1565(var_92_int);
	string var_86_string = ("d" + var_92_int) + "m";
	int var_87_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_80_object->HasProperty((var_86_string + (var_87_int + 1)), var_88_bool);
			if(!var_88_bool) { //@nz
			} else {
				var_87_int += 1;
			}
		}
		if(!var_87_int) { //@nz
			var_79_bool = false;
			return 10;
		}
		var_89_int = 0;
		if(var_87_int > 1)
			@irand(var_89_int, var_87_int);
		var_80_object->GetProperty((var_86_string + (var_89_int + 1)), var_90_string);
		bool var_111_bool; string var_112_string;
		var_90_string = var_112_string;
		func_1437(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


// @pe
void func_1649(void)
{
	@SetVariable("ook7DankoTheater2", 1);
}


void func_1655(void)
{
	object var_17_object;
	func_1914(var_17_object);
	object var_16_object;
	var_17_object = var_16_object;
	float var_28_float;
	func_1560(var_28_float);
	var_16_object->AddMark("k7q02DankoGotoGatherer", "pt_gatherer3", 0, 526372, var_28_float);
	func_1834();
	func_1860();
	object var_62_object;
	func_1480(var_62_object, "quest_k7_02");
}
EMIT "Stack[-1] = 0";


void func_1914(object var_17_object)
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


void func_1155(bool var_59_bool)
{
	var_59_bool = true;
}


void func_1157(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_904(object var_0_object)
{
	bool var_7_bool;
	func_1196(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_900();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1086();
	}
}
EMIT "Return(); Pop(0)";


void func_1162(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1931(object var_100_object, string var_101_string, float var_102_float)
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


void func_1424(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


// @pe
void func_1681(void)
{
	func_1847();
	bool var_196_bool;
	func_1548(var_196_bool, "quest_k7_02", "completed");
}


void func_1170(object var_206_object, string var_207_string, int var_208_int)
{
	int var_210_int;
	var_206_object->GetProperty(var_207_string, var_210_int);
	var_206_object->SetProperty(var_207_string, (var_210_int + var_208_int));
}


void func_1431(string var_215_string, bool var_216_bool)
{
	float var_221_float; float var_222_float;
	@lshGetAnimTimes(var_215_string, var_221_float, var_222_float);
	@lshPlayAnimation(var_221_float, var_222_float, var_216_bool);
}


void func_1177(bool var_15_bool, cvector var_16_cvector)
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


// @pe
void func_1691(object var_99_object)
{
	object var_103_object;
	func_1914(var_103_object);
	object var_100_object;
	var_103_object = var_100_object;
	func_1931(var_100_object, "pt_gatherer3", (float)2);
	object var_123_object;
	func_1914(var_123_object);
	var_99_object->ShowMap(var_123_object);
}


void func_924(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_1187(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1437(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_1989(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_1187(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_1177(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


// @pe
void func_1707(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_1196(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1964(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x7bb";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


void func_1452(void)
{
	bool var_10_bool;
	func_1989(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_939(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_944(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_1162(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1201(bool var_132_bool, object var_133_object, float var_134_float)
{
	cvector var_145_cvector; bool var_152_bool;
	var_133_object->GetPosition(var_145_cvector);
	float var_144_float;
	var_133_object->GetEyesHeight(var_144_float);
	var_153_float = GetByIndex(var_145_cvector, 1);
	SetByIndex(var_145_cvector, 1) = (var_153_float + var_144_float);
	cvector var_146_cvector;
	@GetPosition(var_146_cvector);
	@GetEyesHeight(var_144_float);
	var_154_float = GetByIndex(var_146_cvector, 1);
	SetByIndex(var_146_cvector, 1) = (var_154_float + var_144_float);
	cvector var_147_cvector = var_145_cvector - var_146_cvector;
	var_155_float = GetByIndex(var_147_cvector, 1);
	SetByIndex(var_147_cvector, 1) = (float)0;
	var_157_float = sqrt(var_147_cvector | var_147_cvector);
	var_147_cvector /= var_157_float;
	cvector var_148_cvector = -var_147_cvector;
	cvector var_159_cvector;
	func_1465(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_149_cvector = ((var_147_cvector * var_134_float) + (var_159_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_151_bool;
	@IsOverrideActive(var_151_bool);
	if(var_151_bool != 0)
		var_132_bool = false;
	@StopWorld();
	@CameraTransit((var_146_cvector + var_149_cvector), var_148_cvector);
	var_172_float = GetByIndex(var_149_cvector, 0);
	var_173_float = GetByIndex(var_149_cvector, 2);
	@Rotate(var_172_float, var_173_float);
	bool var_174_bool;
	func_1989(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_1263;
		@LookAsyncCamera("head");
	}
Label_1263:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


// @pe
void func_1713(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1459(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1719(object var_199_object)
{
	@Trace("money 5000 is given");
	object var_202_object;
	var_199_object = var_202_object;
	func_1503(var_202_object, 5000);
}


void func_1465(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


void func_1981(int var_180_int)
{
	var_180_int = 515573;
}


void func_1983(int var_179_int)
{
	var_179_int = 504032;
}


void func_1985(string var_181_string)
{
	var_181_string = "ui/NPC_Bakalavr.png";
}


void func_1729(object var_70_object)
{
	@Trace("Samopal is given");
	object var_73_object;
	@CreateInvItem(var_73_object);
	var_73_object->SetItemName("Samopal");
	var_73_object->SetProperty("durability", 30);
	object var_78_object; object var_79_object;
	var_70_object = var_78_object;
	var_73_object = var_79_object;
	func_1522(var_78_object, var_79_object, 1);
}
EMIT "Stack[-1] = 0";


void func_1987(string var_182_string)
{
	var_182_string = "ui/NPC_Bakalavr_b.png";
}


void func_1475(int var_201_int, string var_202_string)
{
	int var_204_int;
	@GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
}


void func_1989(bool var_75_bool)
{
	var_75_bool = true;
}


void func_966(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_1480(object var_62_object, string var_63_string)
{
	object var_66_object;
	@GetMainOutdoorScene(var_66_object);
	object var_67_object;
	@AddBlankActor(var_67_object, var_66_object, var_63_string, (var_63_string + ".bin"));
	var_67_object = var_62_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_975(void)
{
	@KillTimer(10);
}


void func_1491(int var_89_int, int var_90_int)
{
	object var_92_object;
	@CreateIntVector(var_92_object);
	var_92_object->add(var_89_int);
	var_92_object->add(var_90_int);
	@SendWorldWndMessage(3, var_92_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1750(bool var_246_bool)
{
	int var_248_int;
	func_1475(var_248_int, "k7q01");
	if(var_248_int == 2)
		var_246_bool = true;
	var_246_bool = false;
}


void func_1503(object var_202_object, int var_203_int)
{
	int var_205_int;
	object var_206_object;
	var_202_object = var_206_object;
	int var_208_int;
	func_1170(var_206_object, "money", var_208_int);
	if(var_208_int > 0) {
		@GetInvItemByName(var_205_int, "Money");
		int var_215_int; int var_216_int;
		var_205_int = var_215_int;
		var_203_int = var_216_int;
		func_1491(var_215_int, var_216_int);
	}
}


// @pe
void func_1762(bool var_264_bool, object var_265_object)
{
	object var_267_object;
	var_265_object = var_267_object;
	bool var_266_bool;
	func_1541(var_266_bool, var_267_object, "bird_mask");
	if(var_266_bool != 0) {
		var_264_bool = true;
		return 0;
	}
	var_264_bool = false;
}


// @pe
void func_1773(bool var_252_bool)
{
	int var_254_int;
	func_1475(var_254_int, "ook7DankoTheater1");
	if(var_254_int == 0) {
		var_252_bool = true;
		return 0;
	}
	var_252_bool = false;
}


// @pe
void func_240(object var_2_object, string var_211_string)
{
	bool var_212_bool;
	func_1989(var_212_bool);
	if(!var_212_bool) //@nz
		return 0;
	if(var_211_string == var_2_object)
		return 0;
	string var_215_string; bool var_216_bool;
	var_211_string = var_215_string;
	if(var_211_string == "")
		var_216_bool = false;
	else
		var_216_bool = true;
	func_1431(var_215_string, var_216_bool);
	var_2_object = var_211_string;
	
}


void func_1522(object var_78_object, object var_79_object, int var_80_int)
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
		func_1491(var_89_int, var_90_int);
	}
	
}


void func_1269(void)
{
	bool var_303_bool;
	@CameraSwitchToNormal();
	bool var_304_bool;
	func_1989(var_304_bool);
	if(var_304_bool != 0) {
	} else {
		@HasAnimationTrack(var_303_bool, "head");
		if(var_303_bool == 0) goto Label_1285;
		@UnlookAsync("head");
	}
Label_1285:
	
}


// @pe
void func_1785(bool var_199_bool)
{
	int var_201_int;
	func_1475(var_201_int, "ook7DankoTheater2");
	if(var_201_int == 0) {
		var_199_bool = true;
		return 0;
	}
	var_199_bool = false;
}


// @pe
void func_1017(void)
{
	func_1157();
	func_975();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


