// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		if(1 != 0) {
			func_2083();
			if(var_16_bool == 34838) {
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_2241();
				object var_48_object = var_1_object;
				func_2236(var_0_object);
			}
			if(var_16_bool == 34839) {
				object var_53_object; object var_54_object;
				var_53_object = var_1_object;
				var_54_object = var_0_object;
				func_2241();
			}
			if(var_16_bool == 34836) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_2250();
				object var_73_object = var_1_object;
				func_2236(var_0_object);
			}
			if(var_15_object == 34832) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(533328); //@t
				var_0_object->ClearReplies(); //@t
				bool var_90_bool;
				func_2260(var_1_object);
				if(var_90_bool != 0)
					var_0_object->AddReply(533329, 37766, 34833); //@t
				var_0_object->AddReply(533336, -1, 34840); //@t
				var_0_object->AddReply(536033, -1, 37770); //@t
				return 0;
			}
			if(var_15_object == 37766) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(536029); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536030, 37768, 37767); //@t
				var_0_object->AddReply(536034, 37768, 37771); //@t
				return 0;
			}
			if(var_15_object == 37768) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(536031); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536032, 34834, 37769); //@t
				var_0_object->AddReply(536035, 34834, 37773); //@t
				var_0_object->AddReply(533332, -1, 34836); //@t
				return 0;
			}
			if(var_15_object == 34834) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(533330); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533331, 34837, 34835); //@t
				var_0_object->AddReply(536036, 37776, 37775); //@t
				return 0;
			}
			if(var_15_object == 37776) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(536037); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536038, 37778, 37777); //@t
				var_0_object->AddReply(536040, 34837, 37779); //@t
				return 0;
			}
			if(var_15_object == 37778) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(536039); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536041, 34837, 37781); //@t
				return 0;
			}
			if(var_15_object == 34837) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(533333); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533334, -1, 34838); //@t
				var_0_object->AddReply(533335, -1, 34839); //@t
				return 0;
			}
			var_3_string = true;
			bool var_167_bool;
			func_2383(var_167_bool);
			if(var_167_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa5";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
	
	Label_436:
		for(;;) {
			bool var_17_bool;
			func_1969(var_17_bool);
			var_20_bool = !var_17_bool; //@nz
			if(var_20_bool == 0) goto Label_444;
			@Hold();
		}
	
	Label_444:
		float var_16_float;
		@rand(var_16_float, 3);
		@Sleep(var_16_float + 3);
		func_479();
		goto Label_436;
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		func_560();
		int var_17_int; object var_18_object;
		var_15_bool = var_18_object;
		TaskCall(0);
		func_0(var_19_object, var_17_int, var_18_object);
		TaskReturn();
		if(-1 != var_19_object) {
			bool var_147_bool;
			func_2180(var_147_bool, "quest_d8_04", "attack");
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		bool var_17_bool;
		@IsPlayerActor(var_15_bool, var_17_bool);
		if(var_17_bool != 0) {
			bool var_19_bool;
			func_2180(var_19_bool, "quest_d8_04", "attack");
		}
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		if(var_15_bool == "attack") {
			func_560();
			object var_18_object;
			object var_19_object;
			func_1670(var_19_object);
			var_19_object = var_18_object;
			TaskCall(3);
			func_565(var_18_object);
			TaskReturn();
		}
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		bool var_15_bool = false;
		if(var_0_object != 0) {
			bool var_17_bool;
			func_477(var_17_bool);
			if(var_17_bool != 0)
				var_15_bool = true;
		}
		if(var_15_bool != 0) {
			object var_18_object;
			func_2131(var_18_object);
			@RemoveActor(var_18_object);
		}
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, int var_15_int)
	{
		if(var_15_int == 1) {
			func_2192(var_1_object);
		} else {
			int var_23_int;
			func_1452(var_14_bool, var_23_int, var_23_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		bool var_16_bool = false;
		if(var_1_object == var_15_object) {
			if(!var_2_object) //@nz
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			var_2_object = true;
			object var_19_object;
			var_15_object = var_19_object;
			func_2072(var_19_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		bool var_16_bool = false;
		if(var_1_object == var_15_object) {
			if(var_2_object != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		@RequestClearPath(var_15_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		func_1308(var_15_object);
		object var_20_object;
		var_15_object = var_20_object;
		func_2424();
	}

}


task task_5
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		bool var_17_bool;
		@IsOverrideActive(var_17_bool);
		if(!var_17_bool) { //@nz
			object var_19_object;
			var_15_object = var_19_object;
			func_2362(var_19_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, string var_16_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
{
	object var_19_object;
	var_15_object = var_19_object;
	int var_20_int;
	var_16_int = var_20_int;
	float var_21_float;
	var_17_float = var_21_float;
	func_1876(var_19_object, var_20_int, var_21_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_21_object;
	var_15_object = var_21_object;
	int var_22_int;
	var_16_int = var_22_int;
	float var_23_float;
	var_17_float = var_23_float;
	cvector var_24_cvector;
	var_19_cvector = var_24_cvector;
	cvector var_25_cvector;
	var_20_cvector = var_25_cvector;
	func_1944(var_23_float, var_24_cvector, var_25_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, string var_16_string)
{
	float var_18_float;
	if(var_16_string == "health") {
		@GetProperty("health", var_18_float);
		if(var_18_float <= 0)
			@SignalDeath(var_15_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
{
	bool var_16_bool;
	func_2180(var_16_bool, "quest_d8_04", "death");
	object var_22_object;
	var_15_object = var_22_object;
	func_2385(var_22_object);
}


void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
{
	object var_15_object;
	func_2131(var_15_object);
	@RemoveActor(var_15_object);
	@Hold();
}


void func_0(object var_0_object, int var_17_int, object var_18_object)
{
	var_0_object = var_18_object;
	bool var_28_bool; object var_29_object;
	var_18_object = var_29_object;
	func_1974(var_28_bool, var_29_object, 110.0);
	if(!var_28_bool) { //@nz
		var_17_int = -2;
		return 8;
	}
	object var_24_object;
	@CreateDialog(var_24_object);
	int var_75_int;
	func_2377(var_75_int);
	var_24_object->SetNPCName(var_75_int);
	int var_76_int;
	func_2375(var_76_int);
	var_24_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_2379(var_77_string);
	var_24_object->SetPhoto(var_77_string);
	string var_78_string;
	func_2381(var_78_string);
	var_24_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_2339(var_79_int);
	var_24_object->SetPlayerName(var_79_int);
	bool var_25_bool;
	@IsOverrideActive(var_25_bool);
	if(var_25_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	@DoDialog(var_24_object);
	object var_88_object; object var_89_object;
	var_18_object = var_88_object;
	var_24_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	bool var_27_bool;
	var_24_object->IsDialogEnd(var_27_bool);
	
	for(;;) {
		var_138_bool = !var_27_bool; //@nz
		if(var_138_bool == 0) goto Label_63;
		@sync();
		var_24_object->IsDialogEnd(var_27_bool);
	}
	
Label_63:
	object var_139_object;
	var_18_object = var_139_object;
	func_2042();
	@StopDialog(var_24_object);
	var_24_object->GetReturnValue(-1);
	int var_26_int = var_17_int;
}
EMIT "Stack[-4] = 0";


void func_2311(bool var_30_bool, object var_31_object, int var_32_int)
{
	object var_39_object;
	func_2298(var_39_object);
	object var_36_object;
	var_39_object = var_36_object;
	object var_37_object;
	var_36_object->Find(var_32_int, var_37_object);
	if(!var_37_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_32_int);
		var_30_bool = false;
	}
	var_37_object->AddChild(var_31_object);
	@SendWorldWndMessage(7);
	int var_38_int;
	var_31_object->GetCategory(var_38_int);
	@SetDiarySection(var_38_int);
	var_30_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2059(string var_127_string)
{
	float var_130_float; float var_131_float;
	@lshGetAnimTimes(var_127_string, var_130_float, var_131_float);
	@lshPlayAnimation(var_130_float, var_131_float, false);
}


void func_1808(bool var_28_bool, object var_29_object)
{
	object var_33_object;
	var_29_object = var_33_object;
	bool var_32_bool;
	func_1772(var_32_bool, var_33_object);
	if(!var_32_bool) { //@nz
		var_28_bool = false;
		return 2;
	}
	bool var_50_bool; object var_51_object;
	func_1682(var_50_bool, var_51_object, "noaccess");
	if(!var_50_bool) { //@nz
		var_28_bool = true;
		return 2;
	}
	int var_31_int;
	var_51_object->GetProperty("noaccess", var_31_int);
	var_28_bool = var_31_int == 0;
}


void func_2066(string var_99_string, bool var_100_bool)
{
	float var_105_float; float var_106_float;
	@lshGetAnimTimes(var_99_string, var_105_float, var_106_float);
	@lshPlayAnimation(var_105_float, var_106_float, var_100_bool);
}


void func_2072(object var_19_object)
{
	float var_22_float;
	var_19_object->GetEyesHeight(var_22_float);
	cvector var_23_cvector = [0.0, 0.0, 0.0];
	var_24_float = GetByIndex(var_23_cvector, 1);
	var_22_float = var_24_float;
	SetByIndex(var_23_cvector, 1) = var_24_float;
	@LookAsync(var_19_object, "head", var_23_cvector);
}


void func_1050(object var_0_object, bool var_289_bool, float var_290_float)
{
	bool var_296_bool; cvector var_297_cvector; cvector var_298_cvector; cvector var_299_cvector; float var_300_float;
	
	for(;;) {
		@IsAnimationPlaying(var_296_bool);
		if(!var_296_bool) //@nz
			break;
		bool var_302_bool;
		func_1121(var_302_bool);
		if(var_302_bool != 0) {
			var_289_bool = true;
			return 10;
		}
		bool var_345_bool;
		func_1808(var_345_bool, var_0_object);
		if(!var_345_bool) { //@nz
			var_289_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_297_cvector); //@t
		@GetPFPosition(var_298_cvector);
		var_299_cvector = var_297_cvector - var_298_cvector;
		var_300_float = var_299_cvector | var_299_cvector;
		if(var_300_float < (var_290_float * var_290_float)) {
			bool var_350_bool; float var_351_float;
			var_290_float = var_351_float;
			func_886(var_299_cvector, var_300_float, var_350_bool, var_351_float);
			var_289_bool = true;
			return 10;
		}
		@sync();
	}
	func_1225(var_300_float);
	var_289_bool = false;
}


void func_1308(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1474(var_15_object);
}


void func_2042(void)
{
	bool var_141_bool;
	@CameraSwitchToNormal();
	bool var_142_bool;
	func_2383(var_142_bool);
	if(var_142_bool != 0) {
	} else {
		@HasAnimationTrack(var_141_bool, "head");
		if(var_141_bool == 0) goto Label_2058;
		@UnlookAsync("head");
	}
Label_2058:
	
}


void func_2083(void)
{
	bool var_18_bool;
	func_2383(var_18_bool);
	if(var_18_bool != 0)
		@lshStopSpeech();
}


void func_2339(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x932";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_1832(object var_32_object)
{
	string var_46_string;
	if(var_32_object == null)
		return 14;
	bool var_40_bool;
	@IsDead(var_40_bool);
	if(var_40_bool != 0)
		return 14;
	int var_41_int;
	@GetSecondaryAnimationType(var_41_int);
	if(var_41_int < 0)
		return 14;
	cvector var_42_cvector;
	var_32_object->GetPosition(var_42_cvector);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector;
	@GetDirection(var_44_cvector);
	cvector var_45_cvector = var_43_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_45_cvector, 0);
	var_52_float = GetByIndex(var_44_cvector, 0);
	var_54_float = GetByIndex(var_45_cvector, 2);
	var_55_float = GetByIndex(var_44_cvector, 2);
	if(((var_51_float * var_52_float) + (var_54_float * var_55_float)) >= 0)
		var_46_string = "fhit";
	else
		var_46_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_46_string + "1"), (var_46_string + "2"), -10);
	
}


void func_2090(string var_47_string)
{
	bool var_56_bool; int var_57_int; bool var_58_bool; int var_59_int; bool var_60_bool; float var_61_float; cvector var_62_cvector; cvector var_63_cvector;
	@IsExisting3DSound(var_56_bool, var_47_string);
	if(!var_56_bool) { //@nz
		var_57_int = 0;

		for(;;) {
			@IsExisting3DSound(var_58_bool, (var_47_string + (var_57_int + 1)));
			if(!var_58_bool) { //@nz
				break;
			Label_2110:
				@irand(var_59_int, var_57_int);
				var_47_string += (var_59_int + 1);
	}
			@Is3DSoundLoaded(var_60_bool, var_47_string);
			if(var_60_bool != 0) {
				@GetEyesHeight(var_61_float);
				@GetDirection(var_62_cvector);
				var_63_cvector = var_62_cvector * 50;
				var_74_float = GetByIndex(var_63_cvector, 1);
				SetByIndex(var_63_cvector, 1) = (var_74_float + var_61_float);
				@PlayGlobalSound(var_47_string, var_63_cvector);
			}
		}
		var_57_int += 1;
	}
	var_69_bool = !var_57_int; //@nz
	if(var_69_bool == 0) goto Label_2110;
}


void func_812(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_57_bool; bool var_58_bool; cvector var_59_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_57_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_57_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_58_bool, ("attack" + (var_2_object + 1)));
			if(!var_58_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_59_cvector, "all", "bjump");
		var_73_float = GetByIndex(var_59_cvector, 2);
		var_4_bool = -var_73_float;

	}
}


void func_558(bool var_65_bool)
{
	var_65_bool = true;
}


void func_560(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2356(int var_20_int)
{
	int var_22_int;
	@GetVariable("branch", var_22_int);
	var_22_int = var_20_int;
}


// @pe
void func_565(object var_18_object)
{
	
	for(;;) {
		object var_29_object;
		func_583(var_25_int, var_26_bool, var_27_float, var_28_int, var_29_object, var_29_object, true, 180.0);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_2362(object var_19_object)
{
	int var_20_int;
	func_2356(var_20_int);
	if(var_20_int == 1)
		@WorkWithCorpse(var_19_object);
	else
		@Barter(var_19_object);
	
}


// @pe
void func_577(float var_398_float)
{
	var_398_float = 0.1;
}


// @pe
void func_580(int var_405_int)
{
	var_405_int = 0;
}


void func_1093(object var_0_object, bool var_304_bool)
{
	cvector var_310_cvector; cvector var_311_cvector;
	bool var_315_bool;
	func_1808(var_315_bool, var_0_object);
	if(!var_315_bool) { //@nz
		var_304_bool = false;
		return 10;
	}
	bool var_318_bool;
	float var_314_float;
	func_1182(var_314_float, var_318_bool);
	if(var_318_bool != 0) {
		var_0_object->GetPFPosition(var_310_cvector); //@t
		@GetPFPosition(var_311_cvector);
		var_0_object->GetAttackDistance(var_314_float); //@t
		var_304_bool = ((var_310_cvector - var_311_cvector) | (var_310_cvector - var_311_cvector)) <= ((var_314_float + 50) * (var_314_float + 50));
		return 10;
	}
	var_304_bool = false;
}


void func_1350(object var_0_object, object var_1_object, bool var_161_bool, object var_162_object, float var_163_float, float var_164_float, bool var_165_bool, bool var_166_bool)
{
	bool var_175_bool; object var_177_object; cvector var_178_cvector; cvector var_179_cvector; float var_181_float; object var_182_object;
	var_0_object = false;
	var_1_object = var_162_object;
	bool var_176_bool;
	var_166_bool = var_176_bool;
	
	for(;;) {
		bool var_183_bool; object var_184_object;
		var_162_object = var_184_object;
		func_1490(var_183_bool, var_184_object);
		if(!var_183_bool) { //@nz
			var_161_bool = false;
			return 16;
		}
		var_162_object->GetPosition(var_178_cvector);
		@GetPosition(var_179_cvector);
		var_181_float = (var_178_cvector - var_179_cvector) | (var_178_cvector - var_179_cvector);
		bool var_188_bool = false;
		if(var_164_float > 0) {
			if(var_181_float > (var_164_float * var_164_float))
				var_188_bool = true;
		}
		if(var_188_bool != 0) {
			@Stop();
			var_161_bool = false;
			return 16;
		}
		if(var_181_float > (var_163_float * var_163_float)) {
			var_162_object->GetPFPosition(var_178_cvector);
			@FindPathTo(var_182_object, var_178_cvector);
			if(var_182_object != null) {
				var_182_object = var_177_object;
				var_182_object = null;
			}
			if(var_177_object != null) {
				if(var_176_bool == 0) goto Label_1403;
				var_176_bool = false;
				@RotatePath(var_177_object, var_175_bool);
				if(!var_175_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_201_string;
						func_1497(var_201_string);
						string var_202_string;
						func_1499(var_202_string);
						@FollowPath(var_177_object, var_165_bool, var_175_bool, var_201_string, var_202_string);
						if(!var_175_bool) { //@nz
							if(var_0_object == 0) goto Label_1422;
							var_177_object = null;
						}
					EMIT "GOTO 0x58f";

					Label_1422:
						} else {
					var_177_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_175_bool);
					if(!var_175_bool) { //@nz
						if(var_0_object != 0) {
							var_177_object = null;
							goto Label_1450;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1450;
		}
			var_182_object = null;
			goto Label_1448;

		Label_1448:
			var_177_object = null;

		}
	Label_1450:
		for(;;) {
			var_161_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_583(object var_0_object, string var_3_string, bool var_5_bool, object var_29_object, bool var_30_bool, float var_31_float, bool var_138_bool, bool var_230_bool)
{
	float var_43_float; cvector var_44_cvector; cvector var_45_cvector; bool var_47_bool; float var_50_float; cvector var_51_cvector; bool var_52_bool; float var_53_float;
	func_812(var_51_cvector, var_52_bool, var_53_float);
	var_5_bool = 0;
	var_78_bool = IsFuncExist(var_29_object, "@GetAttackDistance", 1);
	if(var_78_bool != 0) {
		var_29_object->GetAttackDistance(var_43_float);
		var_43_float += 50;
	} else {
						var_31_float = var_43_float;
	}
	if(var_43_float >= 150)
		var_43_float = 150;
	var_3_string = false;
	var_0_object = var_29_object;
	bool var_46_bool;
	@IsPlayerActor(var_0_object, var_46_bool);
	if(var_46_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_84_object;
		func_2131(var_84_object);
		@SendPlayerEnemy(var_29_object, var_84_object);
	}
	if(var_30_bool != 0)
		var_47_bool = false;
	else
		var_47_bool = true;

	
Label_623:
	for(;;) {
		bool var_89_bool = false;
		bool var_90_bool;
		func_1808(var_90_bool, var_0_object);
		if(var_90_bool != 0) {
			if(!var_3_string) //@nz
				var_89_bool = true;
		}
		if(var_89_bool != 0) {
			func_1225(var_53_float);
			var_0_object->GetPFPosition(var_44_cvector); //@t
			@GetPFPosition(var_45_cvector);
			var_50_float = (var_44_cvector - var_45_cvector) | (var_44_cvector - var_45_cvector);
			if(var_50_float >= ((400.0 + var_43_float) * (400.0 + var_43_float))) {
				bool var_132_bool; float var_134_float;
				var_43_float = var_134_float;
				TaskCall(4);
				func_1245(var_140_bool, var_132_bool, var_0_object, var_134_float, 10000.0, true, false);
				TaskReturn();
				if(!var_138_bool) { //@nz
				} else {
					var_47_bool = false;
			} else {
			if(var_50_float >= (var_31_float * var_31_float)) {
				var_0_object->GetPFPosition(var_51_cvector); //@t
				@CanReachByPF(var_52_bool, var_51_cvector);
				if(!var_52_bool) { //@nz
					bool var_224_bool; float var_226_float;
					var_43_float = var_226_float;
					TaskCall(4);
					func_1245(var_232_bool, var_224_bool, var_0_object, var_226_float, 10000.0, true, false);
					TaskReturn();
					if(!var_230_bool) { //@nz
						goto Label_795;
					}
					var_47_bool = false;
					goto Label_623;
				}
				if(!var_47_bool) { //@nz
					func_1958(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1225(var_53_float);
					@StopAsync();
					var_47_bool = true;
					bool var_246_bool;
					func_1808(var_246_bool, var_0_object);
					if(!var_246_bool) { //@nz
						goto Label_795;
					}
				}
				@rand(var_53_float);
				bool var_249_bool;
				var_251_bool = var_53_float < 0.25;
				if(var_251_bool != 1) {
					bool var_252_bool;
					func_1182(true, var_252_bool);
					if(var_252_bool != 1)
						var_249_bool = false;
				}
				if(var_249_bool != 0) {
					@Face(var_0_object);
					func_1232();
					@PlayAnimation("all", "attack_stay");
					bool var_289_bool; float var_290_float;
					func_1050(var_53_float, var_289_bool, var_290_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1225(var_53_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_507_bool;
					func_1182(var_53_float, var_507_bool);
					var_508_bool = !var_507_bool; //@nz
					if(var_508_bool == 0) goto Label_785;
					bool var_509_bool;
					func_1808(var_509_bool, var_0_object);
					if(!var_509_bool) { //@nz
						goto Label_795;
					}
					var_0_object->GetPFPosition(var_44_cvector); //@t
					@GetPFPosition(var_45_cvector);
					if(!(((var_44_cvector - var_45_cvector) | (var_44_cvector - var_45_cvector)) < (var_290_float * var_290_float))) goto Label_785;
					bool var_514_bool; float var_515_float;
					var_31_float = var_515_float;
					func_886(var_52_bool, var_53_float, var_514_bool, var_515_float);
					var_516_bool = !var_514_bool; //@nz
					if(var_516_bool == 0) goto Label_785;
					goto Label_795;
			}
				bool var_517_bool; float var_518_float;
				var_31_float = var_518_float;
				func_886(var_52_bool, var_53_float, var_517_bool, var_518_float);
				if(!var_517_bool) { //@nz
					goto Label_795;
				}
				var_47_bool = true;

			}
		Label_785:
			goto Label_794;
			}
			Label_794:
			}
		}
	Label_795:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_46_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_2375(int var_76_int)
{
	var_76_int = 521048;
}


void func_2377(int var_75_int)
{
	var_75_int = 521047;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_3_string = false;
	if(1 != 0) {
		func_142(var_89_object, "Neutral");
		var_0_object->SetMessage(533328); //@t
		var_0_object->ClearReplies(); //@t
		bool var_108_bool;
		func_2260(var_88_object);
		if(var_108_bool != 0)
			var_0_object->AddReply(533329, 37766, 34833); //@t
		var_0_object->AddReply(533336, -1, 34840); //@t
		var_0_object->AddReply(536033, -1, 37770); //@t
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	bool var_125_bool;
	func_2383(var_125_bool);
	if(var_125_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2059(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_141;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_141:
		return 0;

	}
	
}


void func_2379(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png";
}


void func_2381(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png";
}


void func_2383(bool var_70_bool)
{
	var_70_bool = false;
}


void func_847(object var_0_object, float var_387_float, int var_388_int)
{
	object var_392_object; float var_393_float; float var_394_float;
	@GetVictim((var_387_float * 0.9), var_392_object);
	@ReportAttack(var_0_object);
	if(var_392_object == var_0_object) {
		float var_398_float; object var_399_object; int var_400_int;
		var_392_object = var_399_object;
		var_388_int = var_400_int;
		func_577(var_400_int);
		var_398_float = var_393_float;
		float var_401_float; object var_402_object; float var_403_float; int var_404_int;
		var_392_object = var_402_object;
		int var_405_int; object var_406_object; int var_407_int;
		var_392_object = var_406_object;
		var_388_int = var_407_int;
		func_580(var_407_int);
		var_405_int = var_404_int;
		func_1694(var_401_float, var_402_object, var_403_float, var_404_int);
		var_401_float = var_394_float;
		int var_462_int;
		func_1230(var_462_int);
		@ReportHit(var_0_object, var_462_int, var_394_float, var_403_float);
		object var_463_object; float var_464_float;
		var_392_object = var_463_object;
		var_394_float = var_464_float;
		func_1237();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_1617(string var_46_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_47_string;
	var_46_string = var_47_string;
	func_2090(var_47_string);
	@PlayAnimation("all", var_46_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_46_string);
	@RemoveEnvelope();
}


// @pe
void func_2385(object var_22_object)
{
	object var_23_object;
	var_22_object = var_23_object;
	TaskCall(5);
	func_1501(var_23_object);
	TaskReturn();
}


void func_2131(object var_15_object)
{
	object var_17_object;
	@self(var_17_object);
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_1876(object var_19_object, int var_20_int, float var_21_float)
{
	cvector var_31_cvector; object var_32_object; int var_33_int; bool var_34_bool; cvector var_35_cvector; cvector var_36_cvector;
	bool var_40_bool = false;
	bool var_41_bool = false;
	if(var_19_object != 0) {
		if(var_20_int != 4)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		if(var_20_int != 5)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		cvector var_47_cvector; cvector var_48_cvector;
		cvector var_49_cvector; object var_50_object;
		var_19_object = var_50_object;
		func_1663(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_2137(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		@CreateVectorVector(var_32_object);
		var_33_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_33_int), var_34_bool, var_35_cvector, var_36_cvector);
			if(!var_34_bool) { //@nz
				break;
			Label_1938:
				var_32_object = null;
	}
			object var_109_object;
			var_19_object = var_109_object;
			func_1832(var_109_object);
		}
		if((var_36_cvector | var_31_cvector) >= 0.70710677)
			var_32_object->add(var_35_cvector);
		var_33_int += 1;
	}
	int var_37_int;
	var_32_object->size(var_37_int);
	if(var_37_int == 0) goto Label_1938;
	int var_38_int;
	@irand(var_38_int, var_37_int);
	cvector var_39_cvector;
	var_32_object->get(var_39_cvector, var_38_int);
	object var_64_object; int var_65_int; float var_66_float; cvector var_67_cvector; cvector var_68_cvector;
	var_19_object = var_64_object;
	var_20_int = var_65_int;
	var_21_float = var_66_float;
	var_39_cvector = var_67_cvector;
	var_68_cvector = -var_31_cvector;
	func_1944(var_66_float, var_67_cvector, var_68_cvector);
}


void func_2137(cvector var_47_cvector, cvector var_48_cvector)
{
	float var_56_float = sqrt(var_48_cvector | var_48_cvector);
	if(var_56_float < 0.000001)
		var_47_cvector = [0.0, 0.0, 0.0];
	var_47_cvector = var_48_cvector / var_56_float;
}


void func_1121(bool var_302_bool)
{
	bool var_303_bool = false;
	bool var_304_bool;
	func_1093(var_303_bool, var_304_bool);
	if(var_304_bool != 0) {
		bool var_321_bool;
		func_1137(var_302_bool, var_303_bool, var_321_bool);
		if(var_321_bool != 0)
			var_303_bool = true;
	}
	if(var_303_bool != 0) {
		var_302_bool = true;
		return 0;
	}
	var_302_bool = false;
}


// @pe
void func_2147(float var_439_float, float var_440_float, float var_441_float)
{
	if(var_440_float < var_441_float)
		var_440_float = var_439_float;
	else
		var_441_float = var_439_float;
	
}


// @pe
void func_2154(float var_449_float, float var_450_float, float var_451_float, float var_452_float)
{
	if(var_450_float < var_451_float) {
		var_451_float = var_449_float;
		return 0;
	}
	if(var_450_float > var_452_float) {
		var_452_float = var_449_float;
		return 0;
	}
	var_450_float = var_449_float;
}


void func_1137(object var_0_object, bool var_4_bool, bool var_321_bool)
{
	object var_327_object; float var_329_float; cvector var_330_cvector; cvector var_331_cvector;
	@GetScene(var_327_object);
	bool var_328_bool = false;
	
	for(;;) {
		cvector var_332_cvector;
		func_1663(var_332_cvector, var_0_object);
		var_338_int = -var_332_cvector;
		@FindDirLength(var_329_float, var_338_int, var_4_bool);
		if(var_329_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_330_cvector); //@t
				@GetPFPosition(var_331_cvector);
				@WaitForAnimEnd();
				func_1225(var_331_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_328_bool = true;
				bool var_343_bool;
				func_1093(var_331_cvector, var_343_bool);
				var_344_bool = !var_343_bool; //@nz
				if(var_344_bool == 0) goto Label_1178;
		}
		for(;;) {
			var_328_bool = var_321_bool;

		}

	Label_1178:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_1649(string var_429_string, int var_430_int)
{
	if(var_430_int == 2) {
		var_429_string = "fire";
		return 0;
	EMIT "GOTO 0x67d";
	}
	if(var_430_int == 1) {
		var_429_string = "bullet";
		return 0;
	}
	var_429_string = "phys";
}


void func_2165(int var_110_int, string var_111_string)
{
	int var_113_int;
	@GetVariable(var_111_string, var_113_int);
	var_113_int = var_110_int;
}


void func_886(object var_0_object, object var_1_object, bool var_350_bool, float var_351_float)
{
	string var_359_string;
	func_1225(var_359_string);
	int var_356_int;
	@irand(var_356_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2201();
	@PlayAnimation("all", ("attack_begin" + (var_356_int + 1)));
	@WaitForAnimEnd();
	int var_358_int;
	func_1193(var_358_int, var_359_string);
	bool var_384_bool;
	func_1808(var_384_bool, var_0_object);
	if(!var_384_bool) { //@nz
		@StopAsync();
		var_350_bool = false;
		return 8;
	}
	float var_387_float; int var_388_int;
	var_351_float = var_387_float;
	var_356_int = var_388_int;
	func_847(var_359_string, var_387_float, var_388_int);
	bool var_357_bool;
	@HasAnimation(var_357_bool, "all", ("attack_middle" + var_356_int));
	if(var_357_bool != 0) {
		func_2201();
		@PlayAnimation("all", ("attack_middle" + var_356_int));
		@WaitForAnimEnd();
		func_1225(var_359_string);
		bool var_472_bool;
		func_1808(var_472_bool, var_0_object);
		if(!var_472_bool) { //@nz
			@StopAsync();
			var_350_bool = false;
			return 8;
		}
		float var_475_float; int var_476_int;
		var_351_float = var_475_float;
		func_847(var_359_string, var_475_float, var_476_int);
		var_358_int = 1;

		for(;;) {
			var_359_string = (("attack_middle" + var_476_int) + "_") + var_358_int;
			@HasAnimation(var_357_bool, "all", var_359_string);
			if(!var_357_bool) { //@nz
			} else {
				func_2201();
				@PlayAnimation("all", var_359_string);
				@WaitForAnimEnd();
				func_1225(var_359_string);
				bool var_498_bool;
				func_1808(var_498_bool, var_0_object);
				if(!var_498_bool) { //@nz
					@StopAsync();
					var_350_bool = false;
					return 8;
				}
				float var_501_float; int var_502_int;
				var_351_float = var_501_float;
				var_356_int = var_502_int;
				func_847(var_359_string, var_501_float, var_502_int);
				var_358_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_356_int));
		bool var_487_bool;
		func_1239(var_487_bool);
		if(var_487_bool != 0) {
			bool var_488_bool;
			func_1023(var_488_bool, 0.75);
			@StopAsync();
		}
		var_350_bool = true;
		return 8;

	}
}


void func_2170(float var_457_float)
{
	object var_459_object;
	@CreateFloatVector(var_459_object);
	var_459_object->add(var_457_float);
	@SendWorldWndMessage(15, var_459_object);
}
EMIT "Stack[-1] = 0";


void func_1663(cvector var_49_cvector, object var_50_object)
{
	cvector var_53_cvector;
	@GetPosition(var_53_cvector);
	cvector var_54_cvector;
	var_50_object->GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
}


void func_2180(bool var_16_bool, string var_17_string, string var_18_string)
{
	object var_20_object;
	@FindActor(var_20_object, var_17_string);
	if(var_20_object == null)
		var_16_bool = false;
	@Trigger(var_20_object, var_18_string);
	var_16_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1670(object var_19_object)
{
	object var_21_object;
	@FindActor(var_21_object, "player");
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_1677(bool var_156_bool, object var_157_object)
{
	bool var_159_bool;
	@IsPlayerActor(var_157_object, var_159_bool);
	var_159_bool = var_156_bool;
}


// @pe
void func_142(object var_2_object, string var_95_string)
{
	bool var_96_bool;
	func_2383(var_96_bool);
	if(!var_96_bool) //@nz
		return 0;
	if(var_95_string == var_2_object)
		return 0;
	string var_99_string; bool var_100_bool;
	var_95_string = var_99_string;
	if(var_95_string == "")
		var_100_bool = false;
	else
		var_100_bool = true;
	func_2066(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	
}


void func_2192(object var_18_object)
{
	bool var_20_bool;
	@IsPlayerActor(var_18_object, var_20_bool);
	if(var_20_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1682(bool var_50_bool, object var_51_object, string var_52_string)
{
	var_57_bool = IsFuncExist(var_51_object, "HasProperty", 2);
	if(!var_57_bool) { //@nz
		var_50_bool = false;
		return 2;
	}
	bool var_54_bool;
	var_51_object->HasProperty(var_52_string, var_54_bool);
	var_54_bool = var_50_bool;
}


void func_1944(object var_21_object, cvector var_24_cvector, cvector var_25_cvector)
{
	object var_28_object;
	@GetScene(var_28_object);
	object var_29_object;
	@AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	object var_32_object;
	var_21_object = var_32_object;
	func_1832(var_32_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2201(void)
{
	object var_363_object;
	@GetScene(var_363_object);
	object var_365_object;
	func_2131(var_365_object);
	@BroadcastMessage("battle", var_365_object, var_363_object);
}
EMIT "Stack[-1] = 0";


void func_1182(object var_0_object, bool var_252_bool)
{
	bool var_254_bool;
	var_257_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_257_bool != 0) {
		var_0_object->IsAttacking(var_254_bool); //@t
		var_254_bool = var_252_bool;
	}
	var_252_bool = false;
}


void func_1694(float var_401_float, object var_402_object, float var_403_float, int var_404_int)
{
	int var_414_int; int var_416_int;
	object var_421_object;
	var_402_object = var_421_object;
	bool var_420_bool;
	func_1682(var_420_bool, var_421_object, "health");
	if(!var_420_bool) //@nz
		var_401_float = 0.0;
	bool var_424_bool; object var_425_object;
	func_1682(var_424_bool, var_425_object, "armor");
	if(!var_424_bool) //@nz
		var_414_int = 0;
	else
		var_425_object->GetProperty("armor", var_414_int);
	string var_429_string; int var_430_int;
	var_404_int = var_430_int;
	func_1649(var_429_string, var_430_int);
	string var_415_string = "armor_" + var_429_string;
	bool var_435_bool; object var_436_object; string var_437_string;
	var_402_object = var_436_object;
	func_1682(var_435_bool, var_436_object, var_437_string);
	if(!var_435_bool) //@nz
		var_416_int = 0;
	else
		var_402_object->GetProperty(var_437_string, var_416_int);

	float var_439_float;
	func_2147(var_439_float, ((var_414_int + var_416_int) / 100.0), (float)1);
	float var_417_float;
	var_439_float = var_417_float;
	float var_418_float;
	var_402_object->GetProperty("health", var_418_float);
	float var_419_float = var_403_float * (1 - var_417_float);
	float var_449_float;
	func_2154(var_449_float, (var_418_float - var_419_float), (float)0, (float)1);
	var_402_object->SetProperty("health", var_449_float);
	bool var_455_bool; object var_456_object;
	var_402_object = var_456_object;
	func_1677(var_455_bool, var_456_object);
	if(var_455_bool != 0) {
		float var_457_float = -var_419_float;
		func_2170(var_457_float);
	}
	var_419_float = var_401_float;
	
}


void func_2212(string var_46_string, int var_47_int)
{
	string var_49_string = "idle";
	if(var_47_int != 0)
		var_49_string += var_47_int;
	var_49_string = var_46_string;
}


void func_1958(object var_235_object)
{
	cvector var_239_cvector;
	var_235_object->GetPosition(var_239_cvector);
	cvector var_240_cvector;
	@GetPosition(var_240_cvector);
	cvector var_241_cvector = var_239_cvector - var_240_cvector;
	var_242_float = GetByIndex(var_241_cvector, 0);
	var_243_float = GetByIndex(var_241_cvector, 2);
	@RotateAsync(var_242_float, var_243_float);
}


void func_1193(object var_2_object, bool var_5_bool)
{
	int var_372_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_371_float;
	@rand(var_371_float);
	float var_378_float;
	func_1243(var_378_float);
	if(var_371_float < var_378_float) {
		@irand(var_372_int, var_2_object);
		@Speak("attack" + (var_372_int + 1));
		int var_383_int;
		func_1241(var_383_int);
		var_5_bool = var_383_int;
	}
}


void func_2219(int var_40_int)
{
	int var_43_int; bool var_44_bool;
	var_43_int = 0;
	
	for(;;) {
		string var_46_string; int var_47_int;
		var_43_int = var_47_int;
		func_2212(var_46_string, var_47_int);
		@HasAnimation(var_44_bool, "all", var_46_string);
		if(!var_44_bool) //@nz
			break;
		var_43_int += 1;
	}
	var_43_int = var_40_int;
}


// @pe
void func_1452(object var_0_object, object var_1_object, int var_23_int)
{
	if(var_23_int != 0)
		return 0;
	bool var_26_bool;
	func_1490(var_26_bool, var_1_object);
	if(!var_26_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1969(bool var_17_bool)
{
	bool var_19_bool;
	@IsLoaded(var_19_bool);
	var_19_bool = var_17_bool;
}


void func_1974(bool var_28_bool, object var_29_object, float var_30_float)
{
	cvector var_41_cvector; bool var_48_bool;
	var_29_object->GetPosition(var_41_cvector);
	float var_40_float;
	var_29_object->GetEyesHeight(var_40_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_40_float);
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	@GetEyesHeight(var_40_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (var_50_float + var_40_float);
	cvector var_43_cvector = var_41_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (float)0;
	var_53_float = sqrt(var_43_cvector | var_43_cvector);
	var_43_cvector /= var_53_float;
	cvector var_44_cvector = -var_43_cvector;
	cvector var_55_cvector;
	func_2137(var_55_cvector, (var_44_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_45_cvector = ((var_43_cvector * var_30_float) + (var_55_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_47_bool;
	@IsOverrideActive(var_47_bool);
	if(var_47_bool != 0)
		var_28_bool = false;
	@StopWorld();
	@CameraTransit((var_42_cvector + var_45_cvector), var_44_cvector);
	var_68_float = GetByIndex(var_45_cvector, 0);
	var_69_float = GetByIndex(var_45_cvector, 2);
	@Rotate(var_68_float, var_69_float);
	bool var_70_bool;
	func_2383(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_48_bool, "head");
		if(var_48_bool == 0) goto Label_2036;
		@LookAsyncCamera("head");
	}
Label_2036:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_28_bool = true;
	
}


// @pe
void func_2236(object var_49_object)
{
	var_49_object->SetReturnValue(1);
}


// @pe
void func_2241(void)
{
	@SetVariable("d8q04", 2);
	func_2285();
}


void func_1474(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1225(object var_0_object)
{
	func_2192(var_0_object);
}


// @pe
void func_2250(void)
{
	func_2272();
	bool var_67_bool;
	func_2180(var_67_bool, "quest_d8_04", "fail");
}


void func_1230(int var_462_int)
{
	var_462_int = 0;
}


void func_1232(void)
{
	func_2090("attack_stay");
}


// @pe
void func_1490(bool var_26_bool, object var_27_object)
{
	object var_29_object;
	var_27_object = var_29_object;
	bool var_28_bool;
	func_1808(var_28_bool, var_29_object);
	var_28_bool = var_26_bool;
}


// @pe
void func_2260(bool var_108_bool)
{
	int var_110_int;
	func_2165(var_110_int, "d8q04");
	if(var_110_int == 1)
		var_108_bool = true;
	var_108_bool = false;
}


// @pe
void func_1237(void)
{
}


void func_1239(bool var_487_bool)
{
	var_487_bool = true;
}


void func_1241(int var_383_int)
{
	var_383_int = 1;
}


void func_1497(string var_201_string)
{
	var_201_string = "walk";
}


void func_1243(float var_378_float)
{
	var_378_float = 0.5;
}


void func_1499(string var_202_string)
{
	var_202_string = "run";
}


void func_1245(object var_2_object, bool var_132_bool, object var_133_object, float var_134_float, float var_135_float, bool var_136_bool, bool var_137_bool)
{
	object var_145_object;
	func_2192(var_145_object);
	@SetTimer(1, 5);
	bool var_143_bool;
	@CanSee(var_143_bool, var_145_object);
	if(var_143_bool != 0) {
		var_2_object = true;
		object var_149_object;
		var_133_object = var_149_object;
		func_2072(var_149_object);
	} else {
		var_2_object = false;
	}
	bool var_156_bool; object var_157_object;
	func_1677(var_156_bool, var_157_object);
	if(var_156_bool != 0) {
		object var_160_object;
		func_2131(var_160_object);
		@SendPlayerEnemy(var_157_object, var_160_object);
	}
	bool var_161_bool; object var_162_object; float var_163_float; float var_164_float; bool var_165_bool; bool var_166_bool;
	var_133_object = var_162_object;
	var_134_float = var_163_float;
	var_135_float = var_164_float;
	var_136_bool = var_165_bool;
	var_137_bool = var_166_bool;
	bool var_144_bool;
	func_1350(var_143_bool, var_144_bool, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool);
	var_161_bool = var_144_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_144_bool = var_132_bool;
	
}


void func_477(bool var_17_bool)
{
	var_17_bool = true;
}


// @pe
void func_1501(object var_23_object)
{
	object var_24_object;
	var_23_object = var_24_object;
	func_1526(var_24_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2272(void)
{
	object var_60_object;
	@CreateDiaryEntry(var_60_object, 654, 2, 533367);
	bool var_64_bool; object var_65_object;
	var_60_object = var_65_object;
	func_2311(var_64_bool, var_65_object, 649);
}
EMIT "Stack[-1] = 0";


void func_479(void)
{
	int var_33_int; int var_34_int; bool var_35_bool; float var_36_float; bool var_37_bool;
	@WaitForAnimEnd();
	bool var_38_bool;
	func_1969(var_38_bool);
	if(!var_38_bool) //@nz
		return 14;
	int var_40_int;
	func_2219(var_40_int);
	int var_31_int;
	var_40_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_53_bool = false;
		if(var_32_int < 5) {
			bool var_56_bool;
			func_1969(var_56_bool);
			if(var_56_bool != 0)
				var_53_bool = true;
		}
		if(var_53_bool != 0) {
			@irand(var_33_int, 3);
			if(var_33_int == 0) {
				if(var_31_int == 0) goto Label_526;
				@irand(var_34_int, var_31_int);
				string var_62_string; int var_63_int;
				var_34_int = var_63_int;
				func_2212(var_62_string, var_63_int);
				@PlayAnimation("all", var_62_string);
				@WaitForAnimEnd(var_35_bool);
				if(!var_35_bool) { //@nz
				} else {
			} else {
			if(var_33_int == 1) {
				@rand(var_36_float, 4);
				@Sleep((var_36_float + 1), var_37_bool);
				if(!var_37_bool) { //@nz
					goto Label_555;
				}
			} else if(var_32_int != 0) {
				goto Label_555;
			}
			}
					bool var_65_bool;
					func_558(var_65_bool);
					var_66_bool = !var_65_bool; //@nz
					if(var_66_bool == 0) goto Label_550;
			}
		}
	Label_555:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_550:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


void func_1767(bool var_43_bool, object var_44_object)
{
	bool var_46_bool;
	var_44_object->IsDead(var_46_bool);
	var_46_bool = var_43_bool;
}


void func_1772(bool var_32_bool, object var_33_object)
{
	if(var_33_object == null) {
		var_32_bool = false;
		return 4;
	}
	bool var_39_bool = false;
	var_42_bool = IsFuncExist(var_33_object, "IsDead", 1);
	if(var_42_bool != 0) {
		bool var_43_bool; object var_44_object;
		var_33_object = var_44_object;
		func_1767(var_43_bool, var_44_object);
		if(var_43_bool != 0)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		var_32_bool = false;
		return 4;
	}
	object var_36_object;
	@GetScene(var_36_object);
	if(var_36_object == null) {
		var_32_bool = false;
		return 4;
	}
	object var_37_object;
	var_33_object->GetScene(var_37_object);
	if(var_36_object != var_37_object) {
		var_32_bool = false;
		return 4;
	}
	var_32_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2285(void)
{
	object var_26_object;
	@CreateDiaryEntry(var_26_object, 651, 2, 533364);
	bool var_30_bool; object var_31_object;
	var_26_object = var_31_object;
	func_2311(var_30_bool, var_31_object, 649);
}
EMIT "Stack[-1] = 0";


void func_1526(object var_24_object)
{
	cvector var_35_cvector; cvector var_36_cvector; cvector var_37_cvector; cvector var_38_cvector; string var_39_string; object var_40_object; bool var_41_bool; bool var_42_bool; float var_43_float; cvector var_44_cvector;
	if(var_24_object == null) {
		func_1617("fdie");
	} else {
		var_24_object->GetPosition(var_35_cvector);
		@GetPosition(var_36_cvector);
		@GetDirection(var_37_cvector);
		var_38_cvector = var_36_cvector - var_35_cvector;
		var_78_float = GetByIndex(var_38_cvector, 0);
		var_79_float = GetByIndex(var_37_cvector, 0);
		var_81_float = GetByIndex(var_38_cvector, 2);
		var_82_float = GetByIndex(var_37_cvector, 2);
		if(((var_78_float * var_79_float) + (var_81_float * var_82_float)) >= 0)
			var_39_string = "fdie";
		else
			var_39_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_24_object = var_40_object;
		var_89_bool = IsFuncExist(var_24_object, "GetScriptProperty", 2);
		if(var_89_bool != 0) {
			var_24_object->HasScriptProperty(var_41_bool, "Owner");
			if(var_41_bool != 0) {
				var_24_object->GetScriptProperty(var_40_object, "Owner");
				if(var_40_object == null)
					var_24_object = var_40_object;
			}
		}
		var_96_bool = IsFuncExist(var_40_object, "@GetEyesHeight", 1);
		if(var_96_bool != 0) {
			var_40_object->GetEyesHeight(var_43_float);
			var_44_cvector = [0.0, 0.0, 0.0];
			var_97_float = GetByIndex(var_44_cvector, 1);
			var_43_float = var_97_float;
			SetByIndex(var_44_cvector, 1) = var_97_float;
			@LookAsync(var_24_object, "head", var_44_cvector);
			var_42_bool = true;
		} else {
			var_42_bool = false;

		}
		string var_99_string;
		var_39_string = var_99_string;
		func_2090(var_99_string);
		@PlayAnimation("all", var_39_string);
		@WaitForAnimEnd();
		if(var_42_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_39_string);
		@RemoveEnvelope();
		var_40_object = null;
	}
	
}


void func_2298(object var_39_object)
{
	object var_41_object;
	@GetDiaryRoot(var_41_object);
	if(!var_41_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_39_object = false;
	}
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


void func_1023(bool var_488_bool, float var_489_float)
{
	float var_492_float; bool var_493_bool;
	@rand(var_492_float);
	if(var_492_float < var_489_float) {

		for(;;) {
			@IsAnimationPlaying(var_493_bool);
			if(!var_493_bool) { //@nz
			} else {
				bool var_496_bool;
				func_1121(var_496_bool);
				if(var_496_bool != 0) {
					var_488_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_488_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1225(var_493_bool);
}


