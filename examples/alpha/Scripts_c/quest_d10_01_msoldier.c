// @GLOBALS: 0:object:,1:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector)
	{
		@StopGroup0();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector)
	{
		if(1 != 0) {
			func_1481();
			if(var_12_cvector == 16575) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_1608();
				object var_60_object = var_1_object;
				func_1634(var_0_object);
			}
			if(var_12_cvector == 16583) {
				object var_88_object; object var_89_object;
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_1627();
			}
			if(var_11_cvector == 16570) {
				bool var_98_bool;
				func_1650(var_1_object);
				if(var_98_bool != 0) {
					object var_106_object; object var_107_object;
					var_106_object = var_1_object;
					var_107_object = var_0_object;
					func_1590();
					func_197(var_12_cvector, "Neutral");
					var_0_object->SetMessage(15453); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(15454, 16572, 16571); //@t
					return 0;
				}
				bool var_129_bool;
				func_1662(var_1_object);
				if(var_129_bool != 0) {
					object var_135_object; object var_136_object;
					var_135_object = var_1_object;
					var_136_object = var_0_object;
					func_1596();
					func_197(var_12_cvector, "Neutral");
					var_0_object->SetMessage(15459); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(15460, -1, 16577); //@t
					return 0;
				}
				bool var_144_bool;
				func_1674(var_1_object);
				if(var_144_bool != 0) {
					object var_150_object; object var_151_object;
					var_150_object = var_1_object;
					var_151_object = var_0_object;
					func_1602();
					func_197(var_12_cvector, "Neutral");
					var_0_object->SetMessage(15461); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(15462, 16580, 16579); //@t
					return 0;
				}
				func_197(var_12_cvector, "Neutral");
				var_0_object->SetMessage(15465); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15466, -1, 16583); //@t
				return 0;
			}
			if(var_11_cvector == 16580) {
				func_197(var_12_cvector, "Neutral");
				var_0_object->SetMessage(15463); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15464, -1, 16581); //@t
				return 0;
			}
			if(var_11_cvector == 16572) {
				func_197(var_12_cvector, "Neutral");
				var_0_object->SetMessage(15455); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15456, 16574, 16573); //@t
				return 0;
			}
			if(var_11_cvector == 16574) {
				func_197(var_12_cvector, "Neutral");
				var_0_object->SetMessage(15457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15458, -1, 16575); //@t
				return 0;
			}
			var_3_string = true;
			bool var_185_bool;
			func_2063(var_185_bool);
			if(var_185_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd6";
	
	}

}


task task_3
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_13_bool;
		@IsOverrideActive(var_13_bool);
		if(!var_13_bool) //@nz
			@WorkWithCorpse(var_11_cvector);
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, float var_7_float, float var_8_float, object var_9_object, object var_10_object, object var_11_object, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, string var_6_string, object var_7_object, object var_8_object, object var_9_object, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector)
	{
	}

}


task task_4
{
	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector)
	{
		func_571();
		object var_13_object;
		var_11_cvector = var_13_object;
		func_1896();
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == actor) {
			@KillTimer(100);
			@Face(actor);
		}
	}

	// @pe
	void OnStopHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == actor) {
			@SetTimer(100, 3.0);
			func_1385(actor);
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector, object var_46_object)
		{
		object var_48_object;
		var_46_object = var_48_object;
			bool var_47_bool;
		func_1294(var_47_bool, var_48_object);
		if(!var_47_bool) { //@nz
			object var_76_object;
			var_46_object = var_76_object;
			func_1920(var_76_object);
		}
		func_571();
		object var_84_object;
		var_46_object = var_84_object;
		func_1933(var_84_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector)
	{
		object var_14_object;
		var_11_cvector = var_14_object;
		object var_15_object;
		var_12_cvector = var_15_object;
		bool var_13_bool;
		func_1977(var_13_bool, var_14_object, var_15_object);
		if(var_13_bool != 0) {
			object var_46_object;
			var_11_cvector = var_46_object;
			func_609();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector)
	{
		object var_13_object;
		var_11_cvector = var_13_object;
		bool var_12_bool;
		func_1949(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_571();
			object var_58_object;
			var_11_cvector = var_58_object;
			func_1971(var_58_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector != 100) {
		}
		@KillTimer(100);
		@StopGroup0();
	}

}


task task_5
{
	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_12_bool = false;
		if(var_2_object != 0) {
			if(var_11_cvector == actor)
				var_12_bool = true;
		}
		if(var_12_bool != 0)
			func_1385(actor);
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_12_bool = false;
		if(var_2_object != 0) {
			if(var_11_cvector == actor)
				var_12_bool = true;
		}
		if(var_12_bool != 0) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, cvector var_12_cvector, object var_46_object)
		{
		object var_48_object;
		var_46_object = var_48_object;
			bool var_47_bool;
		func_1294(var_47_bool, var_48_object);
		if(!var_47_bool) //@nz
			return 0;
		object var_76_object;
		var_46_object = var_76_object;
		func_1920(var_76_object);
		if(var_46_object == actor) {
			var_1_object = null;
		} else {
			var_1_object = var_46_object;
			if(var_2_object == 0) goto Label_948;
			@StopAnimation();
			@StopGroup0();
		}
	Label_948:
	
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, cvector var_12_cvector)
	{
		object var_14_object;
		var_11_cvector = var_14_object;
		object var_15_object;
		var_12_cvector = var_15_object;
		bool var_13_bool;
		func_1977(var_13_bool, var_14_object, var_15_object);
		if(var_13_bool != 0) {
			object var_46_object;
			var_11_cvector = var_46_object;
			func_925();
		}
	}

}


maintask task_6
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector)
	{
		func_1902();
	
		for(;;) {
			func_1064(var_9_cvector, var_10_cvector);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
	{
		var_14_object = GlobalVars[0];
		bool var_13_bool;
		var_14_object->in(var_13_bool, var_11_object);
		if(!var_13_bool) { //@nz
			object var_16_object;
			var_11_object = var_16_object;
			func_961(var_16_object);
		}
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, string var_11_string)
	{
		object var_13_object;
		if(var_11_string == "attack") {
			object var_16_object;
			func_1170(var_16_object);
			var_16_object = var_13_object;
			func_1142();
			object var_20_object;
			var_13_object = var_20_object;
			func_1933(var_20_object);
			var_13_object = null;
		}
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
	{
		bool var_12_bool;
		func_1573(var_12_bool, "quest_d10_01", "soldier_fight");
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, object var_12_object)
	{
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector)
	{
		func_1142();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
	{
		bool var_14_bool; object var_15_object;
		func_1294(var_14_bool, var_15_object);
		if(!var_14_bool) { //@nz
		}
		var_49_object = GlobalVars[0];
		bool var_13_bool;
		var_49_object->in(var_13_bool, var_15_object);
		if(var_13_bool != 0) {
			func_1142();
			object var_51_object;
			var_11_object = var_51_object;
			TaskCall(4);
			func_547(var_52_object, var_51_object);
			TaskReturn();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1949(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1142();
			object var_57_object;
			var_11_object = var_57_object;
			func_2017(var_57_object);
		}
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, int var_12_int, float var_13_float, float var_14_float)
{
	object var_15_object;
	var_11_object = var_15_object;
	int var_16_int;
	var_12_int = var_16_int;
	float var_17_float;
	var_13_float = var_17_float;
	func_1318(var_16_int, var_17_float);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, string var_12_string)
{
	float var_14_float;
	if(var_12_string == "health") {
		@GetProperty("health", var_14_float);
		if(var_14_float <= 0)
			@SignalDeath(var_11_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	func_2037(var_12_object);
}


void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector)
{
	object var_11_object;
	func_1488(var_11_object);
	@RemoveActor(var_11_object);
	@Hold();
}


void func_0(void)
{
	@Hold();
}


// @pe
void func_1541(float var_118_float, cvector var_119_cvector)
{
	var_120_float = GetByIndex(var_119_cvector, 0);
	var_121_float = GetByIndex(var_119_cvector, 0);
	var_123_float = GetByIndex(var_119_cvector, 2);
	var_124_float = GetByIndex(var_119_cvector, 2);
	var_118_float = sqrt((var_120_float * var_121_float) + (var_123_float * var_124_float));
}


void func_6(object var_0_object, int var_17_int, object var_18_object)
{
	var_0_object = var_18_object;
	bool var_28_bool; object var_29_object;
	var_18_object = var_29_object;
	func_1403(var_28_bool, var_29_object);
	if(!var_28_bool) { //@nz
		var_17_int = -2;
		return 8;
	}
	object var_24_object;
	@CreateDialog(var_24_object);
	int var_69_int;
	func_2059(var_69_int);
	var_24_object->SetNPCName(var_69_int);
	string var_70_string;
	func_2061(var_70_string);
	var_24_object->SetPhoto(var_70_string);
	int var_71_int;
	func_1778(var_71_int);
	var_24_object->SetPlayerName(var_71_int);
	bool var_25_bool;
	@IsOverrideActive(var_25_bool);
	if(var_25_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	@DoDialog(var_24_object);
	object var_80_object; object var_81_object;
	var_18_object = var_80_object;
	var_24_object = var_81_object;
	TaskCall(2);
	func_69(var_82_object, var_83_object, var_84_string, var_85_bool, var_80_object, var_81_object);
	TaskReturn();
	bool var_27_bool;
	var_24_object->IsDialogEnd(var_27_bool);
	
	for(;;) {
		var_161_bool = !var_27_bool; //@nz
		if(var_161_bool == 0) goto Label_58;
		@sync();
		var_24_object->IsDialogEnd(var_27_bool);
	}
	
Label_58:
	object var_162_object;
	var_18_object = var_162_object;
	func_1459();
	@StopDialog(var_24_object);
	var_24_object->GetReturnValue(-1);
	int var_26_int = var_17_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_519(string var_78_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_78_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_78_string);
	@RemoveEnvelope();
}


void func_2059(int var_69_int)
{
	var_69_int = 14841;
}


void func_2061(string var_70_string)
{
	var_70_string = "ui/NPC_Black.png";
}


void func_2063(bool var_100_bool)
{
	var_100_bool = false;
}


// @pe
void func_1551(float var_106_float, cvector var_107_cvector, cvector var_108_cvector)
{
	cvector var_110_cvector;
	var_107_cvector = var_110_cvector;
	cvector var_111_cvector;
	var_108_cvector = var_111_cvector;
	float var_109_float;
	func_1532(var_109_float, var_110_cvector, var_111_cvector);
	float var_118_float; cvector var_119_cvector;
	var_107_cvector = var_119_cvector;
	func_1541(var_118_float, var_119_cvector);
	float var_127_float; cvector var_128_cvector;
	var_108_cvector = var_128_cvector;
	func_1541(var_127_float, var_128_cvector);
	var_106_float = var_109_float / (var_118_float * var_127_float);
}


void func_1049(void)
{
}


void func_1568(int var_89_int, string var_90_string)
{
	int var_92_int;
	@GetVariable(var_90_string, var_92_int);
	var_92_int = var_89_int;
}


void func_547(object var_0_object, object var_51_object)
{
	bool var_54_bool;
	@Face(var_51_object);
	
	for(;;) {
		@Sleep(0.5, var_54_bool);
		bool var_56_bool = true;
		var_57_bool = !var_54_bool; //@nz
		if(var_57_bool != 1) {
			bool var_58_bool;
			func_1294(var_58_bool, var_51_object);
			var_60_bool = !var_58_bool; //@nz
			if(var_60_bool != 1)
				var_56_bool = false;
		}
		if(var_56_bool != 0)
			break;
	}
	@StopAsync();
}


void func_1573(bool var_12_bool, string var_13_string, string var_14_string)
{
	object var_16_object;
	@FindActor(var_16_object, var_13_string);
	if(var_16_object == null)
		var_12_bool = false;
	@Trigger(var_16_object, var_14_string);
	var_12_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1064(object var_0_object, object var_1_object)
{
	int var_19_int; bool var_20_bool; cvector var_21_cvector; object var_22_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		@irand(var_19_int, 60);
		@Sleep((var_19_int + 30), var_20_bool);
		if(var_20_bool != 0) {
			func_1049();
		} else {
		for(;;) {
			@GetPFPosition(var_21_cvector);
			float var_27_float; cvector var_29_cvector;
			var_21_cvector = var_29_cvector;
			func_1504(var_27_float, var_1_object, var_29_cvector);
			if(var_27_float > 40000) {
				@FindPathTo(var_22_object, var_1_object);
				if(var_22_object != null) {
					@RotatePath(var_22_object, var_20_bool);
					if(!var_20_bool) { //@nz
					} else {
					@FollowPath(var_22_object, false, var_20_bool);
					if(!var_20_bool) { //@nz
						goto Label_1139;
					}
					var_38_float = GetByIndex(var_0_object, 0);
					var_39_float = GetByIndex(var_0_object, 2);
					@Rotate(var_38_float, var_39_float, var_20_bool);
					if(!var_20_bool) { //@nz
						goto Label_1139;
					}
					@WaitForAnimEnd(var_20_bool);
					if(!var_20_bool) { //@nz
						goto Label_1139;
					}
					goto Label_1140;
				EMIT "GOTO 0x464";
				}
				@Sleep(1);
				var_22_object = null;
				goto Label_1139;
			}
			var_43_float = GetByIndex(var_0_object, 0);
			var_44_float = GetByIndex(var_0_object, 2);
			@Rotate(var_43_float, var_44_float, var_20_bool);
			if(!var_20_bool) { //@nz
				goto Label_1139;
			}
			@WaitForAnimEnd(var_20_bool);
			if(!var_20_bool) { //@nz
				goto Label_1139;
			}
			goto Label_1140;
			}
		Label_1139:
		}
		}
	Label_1140:
	}
	
}
EMIT "Return(); Pop(8)";


void func_1585(float var_32_float)
{
	float var_34_float;
	@GetGameTime(var_34_float);
	var_34_float = var_32_float;
}


// @pe
void func_1590(void)
{
	@SetVariable("ood10MSoldier1", 1);
}


void func_571(void)
{
	@StopAsync();
	@KillTimer(100);
	@StopGroup0();
}


// @pe
void func_1596(void)
{
	@SetVariable("ood10MSoldier2", 1);
}


// @pe
void func_1602(void)
{
	@SetVariable("ood10MSoldier3", 1);
}


// @pe
void func_69(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_80_object, object var_81_object)
{
	var_0_object = var_81_object;
	var_1_object = var_80_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_87_bool;
		func_1650(var_1_object);
		if(var_87_bool != 0) {
			object var_95_object; object var_96_object;
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_1590();
			func_197(var_81_object, "Neutral");
			var_0_object->SetMessage(15453); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(15454, 16572, 16571); //@t
		} else {
					bool var_126_bool;
					func_1662(var_1_object);
					if(var_126_bool == 0) goto Label_125;
					object var_132_object; object var_133_object;
					var_132_object = var_1_object;
					var_133_object = var_0_object;
					func_1596();
					func_197(var_81_object, "Neutral");
					var_0_object->SetMessage(15459); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(15460, -1, 16577); //@t
		}
	}
Label_167:
	for(;;) {
		bool var_118_bool;
		func_2063(var_118_bool);
		if(var_118_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1463(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_196;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_196:
			}
			bool var_141_bool;
			func_1674(var_1_object);
			if(var_141_bool != 0) {
			object var_147_object; object var_148_object;
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_1602();
			func_197(var_81_object, "Neutral");
			var_0_object->SetMessage(15461); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(15462, 16580, 16579); //@t
			goto Label_167;
		}
		return 0;
	}
	func_197(var_81_object, "Neutral");
	var_0_object->SetMessage(15465); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(15466, -1, 16583); //@t
	goto Label_167;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x49";


void func_1608(void)
{
	object var_21_object;
	func_1728(var_21_object);
	object var_20_object;
	var_21_object = var_20_object;
	float var_32_float;
	func_1585(var_32_float);
	var_20_object->AddMark("d10q01SoldierGotoPetr", "pt_d10q01_petr", 1, 15467, var_32_float);
	func_2043();
}
EMIT "Stack[-1] = 0";


// @pe
void func_1627(void)
{
	bool var_90_bool;
	func_1573(var_90_bool, "quest_d10_01", "soldier_fight");
}


// @pe
void func_1634(object var_61_object)
{
	object var_65_object;
	func_1728(var_65_object);
	object var_62_object;
	var_65_object = var_62_object;
	func_1745(var_62_object, "pt_d10q01_petr", (float)2);
	object var_85_object;
	func_1728(var_85_object);
	var_61_object->ShowMap(var_85_object);
}


// @pe
void func_1650(bool var_87_bool)
{
	int var_89_int;
	func_1568(var_89_int, "ood10MSoldier1");
	if(var_89_int == 0) {
		var_87_bool = true;
		return 0;
	}
	var_87_bool = false;
}


void func_1142(void)
{
	@StopGroup0();
	@Stop();
}


// @pe
void func_1147(string var_172_string, int var_173_int)
{
	if(var_173_int == 1)
		var_172_string = "fire";
	var_172_string = "phys";
}


// @pe
void func_1662(bool var_126_bool)
{
	int var_128_int;
	func_1568(var_128_int, "ood10MSoldier2");
	if(var_128_int == 0) {
		var_126_bool = true;
		return 0;
	}
	var_126_bool = false;
}


void func_1155(cvector var_100_cvector, object var_101_object)
{
	cvector var_104_cvector;
	@GetPosition(var_104_cvector);
	cvector var_105_cvector;
	var_101_object->GetPosition(var_105_cvector);
	var_100_cvector = var_105_cvector - var_104_cvector;
}


// @pe
void func_1674(bool var_141_bool)
{
	int var_143_int;
	func_1568(var_143_int, "ood10MSoldier3");
	if(var_143_int == 0) {
		var_141_bool = true;
		return 0;
	}
	var_141_bool = false;
}


void func_1162(float var_35_float, object var_36_object)
{
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	cvector var_41_cvector;
	var_36_object->GetPosition(var_41_cvector);
	var_35_float = (var_41_cvector - var_40_cvector) | (var_41_cvector - var_40_cvector);
}


void func_1170(object var_16_object)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	var_18_object = var_16_object;
}
EMIT "Stack[-1] = 0";


void func_1686(object var_50_object)
{
	object var_52_object;
	@GetDiaryRoot(var_52_object);
	if(!var_52_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_50_object = false;
	}
	var_52_object = var_50_object;
}
EMIT "Stack[-1] = 0";


void func_1177(bool var_38_bool, object var_39_object, string var_40_string)
{
	var_45_bool = IsFuncExist(var_39_object, "HasProperty", 2);
	if(!var_45_bool) { //@nz
		var_38_bool = false;
		return 2;
	}
	bool var_42_bool;
	var_39_object->HasProperty(var_40_string, var_42_bool);
	var_42_bool = var_38_bool;
}


void func_666(object var_0_object, object var_1_object, object var_2_object, object var_64_object, bool var_65_bool)
{
	bool var_71_bool; bool var_72_bool;
	var_0_object = var_64_object;
	@Face(var_0_object);
	if(var_65_bool != 0) {
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
	}
	@LockAnimationEnd("all", "attack_on");
	@SetAttackState(true);
	
Label_685:
	for(;;) {
		bool var_79_bool;
		func_1294(var_79_bool, var_0_object);
		if(var_79_bool != 0) {
			@CanSee(var_72_bool, var_0_object);
			if(var_72_bool != 0) {
				func_835(var_72_bool);
			} else {
				func_1385(var_0_object);
				var_2_object = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(var_71_bool);
				if(!var_71_bool) { //@nz
					if(var_1_object != null)
						func_830(var_71_bool, var_72_bool);
					@LockAnimationEnd("all", "attack_on");
					goto Label_685;
				}
				bool var_226_bool;
				func_1294(var_226_bool, var_0_object);
				if(!var_226_bool) { //@nz
				} else {
						@CanSee(var_72_bool, var_0_object);
						if(var_72_bool != 0) {
							var_2_object = false;
							@Face(var_0_object);
							func_835(var_72_bool);
							goto Label_777;
						}
						@LockAnimationEnd("all", "attack_on");
						@Sleep(3, var_71_bool);
						if(!var_71_bool) { //@nz
							if(var_1_object != null)
								func_830(var_71_bool, var_72_bool);
							@LockAnimationEnd("all", "attack_on");
							goto Label_685;
						}
						bool var_240_bool;
						func_1294(var_240_bool, var_0_object);
						var_242_bool = !var_240_bool; //@nz
						if(var_242_bool == 0) goto Label_765;
				}
		}
		Label_787:
			for(;;) {
				@SetAttackState(false);
				@StopAsync();
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();

			}

		Label_765:
			var_2_object = false;
			@CanSee(var_72_bool, var_0_object);
			if(var_72_bool != 0) {
				@Face(var_0_object);
				func_835(var_72_bool);
				goto Label_777;
			}
			goto Label_787;
		}
	Label_777:
		if(var_1_object != null)
			func_830(var_71_bool, var_72_bool);
		else
			@Sleep(2);

	}
	
}


void func_1699(bool var_41_bool, object var_42_object, int var_43_int)
{
	object var_50_object;
	func_1686(var_50_object);
	object var_47_object;
	var_50_object = var_47_object;
	object var_48_object;
	var_47_object->Find(var_43_int, var_48_object);
	if(!var_48_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_43_int);
		var_41_bool = false;
	}
	var_48_object->AddChild(var_42_object);
	@SetVariable("player_diary", 1);
	int var_49_int;
	var_42_object->GetCategory(var_49_int);
	@SetDiarySection(var_49_int);
	var_41_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1189(float var_147_float, object var_148_object, float var_149_float, int var_150_int)
{
	int var_157_int; int var_159_int;
	object var_164_object;
	var_148_object = var_164_object;
	bool var_163_bool;
	func_1177(var_163_bool, var_164_object, "health");
	if(!var_163_bool) //@nz
		var_147_float = 0.0;
	bool var_167_bool; object var_168_object;
	func_1177(var_167_bool, var_168_object, "armor");
	if(!var_167_bool) //@nz
		var_157_int = 0;
	else
		var_168_object->GetProperty("armor", var_157_int);
	string var_172_string; int var_173_int;
	var_150_int = var_173_int;
	func_1147(var_172_string, var_173_int);
	string var_158_string = "armor_" + var_172_string;
	bool var_176_bool; object var_177_object; string var_178_string;
	var_148_object = var_177_object;
	func_1177(var_176_bool, var_177_object, var_178_string);
	if(!var_176_bool) //@nz
		var_159_int = 0;
	else
		var_148_object->GetProperty(var_178_string, var_159_int);

	float var_180_float;
	func_1508(var_180_float, ((var_157_int + var_159_int) / 100.0), (float)1);
	float var_160_float;
	var_180_float = var_160_float;
	float var_161_float;
	var_148_object->GetProperty("health", var_161_float);
	float var_190_float;
	func_1515(var_190_float, (var_161_float - (var_149_float * (1 - var_160_float))), (float)0, (float)1);
	var_148_object->SetProperty("health", var_190_float);
	float var_162_float = var_147_float;
	
}


void func_1728(object var_21_object)
{
	object var_24_object; object var_25_object;
	@GetMainOutdoorScene(var_24_object);
	if(var_24_object == null) {
		@Trace("Can't find main outdoor scene");
		var_25_object = null;
		var_25_object = var_21_object;
	}
	var_24_object->GetMap(var_25_object);
	var_25_object = var_21_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_197(object var_2_object, string var_99_string)
{
	bool var_100_bool;
	func_2063(var_100_bool);
	if(!var_100_bool) //@nz
		return 0;
	if(var_99_string == var_2_object)
		return 0;
	string var_103_string;
	func_1463(var_103_string);
	var_2_object = var_103_string;
}


void func_1745(object var_62_object, string var_63_string, float var_64_float)
{
	object var_72_object;
	@GetMainOutdoorScene(var_72_object);
	if(var_72_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_70_cvector;
	cvector var_71_cvector;
	bool var_73_bool;
	var_72_object->GetLocator(var_63_string, var_73_bool, var_70_cvector, var_71_cvector);
	if(!var_73_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_63_string) + " doesnt exist");
	var_72_object->GetMap(var_62_object);
	if(var_62_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_83_float = GetByIndex(var_70_cvector, 0);
	var_84_float = GetByIndex(var_70_cvector, 2);
	var_62_object->SetMapParams(var_83_float, var_84_float, var_64_float);
}
EMIT "Stack[-2] = 0";


void func_1253(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	var_32_object->IsDead(var_34_bool);
	var_34_bool = var_31_bool;
}


void func_1258(bool var_20_bool, object var_21_object)
{
	if(var_21_object == null) {
		var_20_bool = false;
		return 4;
	}
	bool var_27_bool = false;
	var_30_bool = IsFuncExist(var_21_object, "IsDead", 1);
	if(var_30_bool != 0) {
		bool var_31_bool; object var_32_object;
		var_21_object = var_32_object;
		func_1253(var_31_bool, var_32_object);
		if(var_31_bool != 0)
			var_27_bool = true;
	}
	if(var_27_bool != 0) {
		var_20_bool = false;
		return 4;
	}
	object var_24_object;
	@GetScene(var_24_object);
	if(var_24_object == null) {
		var_20_bool = false;
		return 4;
	}
	object var_25_object;
	var_21_object->GetScene(var_25_object);
	if(var_24_object != var_25_object) {
		var_20_bool = false;
		return 4;
	}
	var_20_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1778(int var_71_int)
{
	int var_73_int;
	@GetVariable("player", var_73_int);
	if(var_73_int == 0) {
		var_71_int = 200001;
		return 2;
	EMIT "GOTO 0x701";
	}
	if(var_73_int == 1) {
		var_71_int = 200002;
		return 2;
	}
	var_71_int = 200003;
}


void func_1795(int var_20_int, int var_21_int)
{
	int var_27_int;
	if(var_20_int > var_21_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_26_int = 0;
	if(var_20_int != var_21_int) {
		@irand(var_27_int, (var_21_int - var_20_int));
	} else if(var_20_int == 0) {
		return 8;
	}
	var_26_int += var_20_int;
	if(var_26_int == 0)
		return 8;
	int var_28_int;
	@GetInvItemByName(var_28_int, "Money");
	bool var_29_bool;
	@AddItem(var_29_bool, var_28_int, 0, var_26_int);
	
}


void func_1294(bool var_16_bool, object var_17_object)
{
	object var_21_object;
	var_17_object = var_21_object;
	bool var_20_bool;
	func_1258(var_20_bool, var_21_object);
	if(!var_20_bool) { //@nz
		var_16_bool = false;
		return 2;
	}
	bool var_38_bool; object var_39_object;
	func_1177(var_38_bool, var_39_object, "noaccess");
	if(!var_38_bool) { //@nz
		var_16_bool = true;
		return 2;
	}
	int var_19_int;
	var_39_object->GetProperty("noaccess", var_19_int);
	var_16_bool = var_19_int == 0;
}


void func_1825(void)
{
	bool var_18_bool;
	@ClearSubContainer(0);
	func_1795(500, 1000);
	int var_17_int;
	@irand(var_17_int, 4);
	if(var_17_int != 0) {
		int var_43_int;
		func_1862(var_43_int, "rifle_ammo");
		@AddItem(var_18_bool, var_43_int, 0, var_17_int);
	}
	@irand(var_17_int, 3);
	if(var_17_int == 0) {
		int var_51_int;
		func_1862(var_51_int, "rusk");
		@AddItem(var_18_bool, var_51_int, 0, 1);
	}
}


void func_1318(object var_15_object, int var_16_int)
{
	object var_28_object; object var_29_object; cvector var_30_cvector; float var_31_float; string var_37_string;
	bool var_38_bool = false;
	if(var_16_int != 4) {
		if(var_16_int != 5)
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		@GetScene(var_28_object);
		@GetPosition(var_30_cvector);
		@GetEyesHeight(var_31_float);
		var_43_float = GetByIndex(var_30_cvector, 1);
		SetByIndex(var_30_cvector, 1) = (var_43_float + (var_31_float / 2));
		@AddActorByType(var_29_object, "scripted", var_28_object, var_30_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_29_object = null;
		var_28_object = null;
	}
	if(var_15_object == null)
		return 20;
	int var_32_int;
	@GetSecondaryAnimationType(var_32_int);
	if(var_32_int < 0)
		return 20;
	cvector var_33_cvector;
	var_15_object->GetPosition(var_33_cvector);
	cvector var_34_cvector;
	@GetPosition(var_34_cvector);
	cvector var_35_cvector;
	@GetDirection(var_35_cvector);
	cvector var_36_cvector = var_34_cvector - var_33_cvector;
	var_52_float = GetByIndex(var_36_cvector, 0);
	var_53_float = GetByIndex(var_35_cvector, 0);
	var_55_float = GetByIndex(var_36_cvector, 2);
	var_56_float = GetByIndex(var_35_cvector, 2);
	if(((var_52_float * var_53_float) + (var_55_float * var_56_float)) >= 0)
		var_37_string = "fhit";
	else
		var_37_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_37_string + "1"), (var_37_string + "2"), -10);
	
}


void func_830(object var_0_object, object var_1_object)
{
	var_1_object = null;
	@Face(var_1_object);
}


void func_835(object var_0_object)
{
	float var_97_float; object var_98_object; object var_99_object;
	@ReportAttack(var_0_object);
	cvector var_91_cvector;
	@GetDirection(var_91_cvector);
	cvector var_100_cvector;
	func_1155(var_100_cvector, var_0_object);
	cvector var_92_cvector;
	var_100_cvector = var_92_cvector;
	float var_106_float; cvector var_107_cvector; cvector var_108_cvector;
	var_92_cvector = var_108_cvector;
	func_1551(var_106_float, var_107_cvector, var_108_cvector);
	if(var_106_float < 0.9659258) {
	}
	@PlayAnimation("all", "attack_begin1");
	@WaitForAnimEnd();
	@Speak("shot");
	@GetDirection(var_107_cvector);
	cvector var_135_cvector;
	func_1155(var_135_cvector, var_0_object);
	var_135_cvector = var_92_cvector;
	var_137_float = GetByIndex(var_92_cvector, 1);
	float var_138_float;
	func_1396(var_138_float, var_0_object);
	SetByIndex(var_92_cvector, 1) = (var_137_float + var_138_float);
	cvector var_93_cvector;
	@RandVecCone3D(var_93_cvector, var_92_cvector, 0.2617994);
	object var_94_object;
	int var_95_int;
	cvector var_96_cvector;
	@GetVictimMaterial(var_93_cvector, var_94_object, var_95_int, var_96_cvector);
	if(var_94_object != null) {
		if(var_94_object == var_0_object) {
			float var_147_float;
			func_1189(var_147_float, var_0_object, 1.5, 0);
			var_147_float = var_97_float;
			@ReportHit(var_0_object, 2, var_97_float, 1.5);
		} else if(var_95_int != -1) {
			@GetScene(var_98_object);
			@AddActorByType(var_99_object, "scripted", var_98_object, var_96_cvector, [0.0, 0.0, 1.0], "richochet.xml");
			var_99_object->SetScriptProperty("Material", var_95_int);
			var_99_object = null;
			var_98_object = null;
		}
	}
	@PlayAnimation("all", "attack_end1");
	@WaitForAnimEnd();
	@LockAnimationEnd("all", "attack_on");
	
}
EMIT "Stack[-6] = 0";


void func_1862(int var_43_int, string var_44_string)
{
	int var_46_int;
	@GetInvItemByName(var_46_int, var_44_string);
	var_46_int = var_43_int;
}


// @pe
void func_1867(object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	TaskCall(3);
	func_400(var_14_object);
	TaskReturn();
}


void func_1385(object var_211_object)
{
	cvector var_215_cvector;
	var_211_object->GetPosition(var_215_cvector);
	cvector var_216_cvector;
	@GetPosition(var_216_cvector);
	cvector var_217_cvector = var_215_cvector - var_216_cvector;
	var_218_float = GetByIndex(var_217_cvector, 0);
	var_219_float = GetByIndex(var_217_cvector, 2);
	@RotateAsync(var_218_float, var_219_float);
}


void func_1902(void)
{
	var_11_object = GlobalVars[0];
	object var_12_object;
	func_1526(var_12_object);
	var_12_object = var_11_object;
	GlobalVars[0] = var_11_object;
}


void func_1396(float var_138_float, object var_139_object)
{
	float var_142_float;
	@GetEyesHeight(var_142_float);
	float var_143_float;
	var_139_object->GetEyesHeight(var_143_float);
	var_138_float = var_143_float - var_142_float;
}


// @pe
void func_1909(object var_62_object, bool var_63_bool)
{
	object var_64_object;
	var_62_object = var_64_object;
	bool var_65_bool;
	var_63_bool = var_65_bool;
	TaskCall(5);
	func_666(var_66_object, var_67_object, var_68_bool, var_64_object, var_65_bool);
	TaskReturn();
	@ResetAAS();
}


void func_1403(bool var_28_bool, object var_29_object)
{
	cvector var_39_cvector;
	var_29_object->GetPosition(var_39_cvector);
	float var_38_float;
	var_29_object->GetEyesHeight(var_38_float);
	var_46_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_46_float + var_38_float);
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	@GetEyesHeight(var_38_float);
	var_47_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_47_float + var_38_float);
	cvector var_41_cvector = var_39_cvector - var_40_cvector;
	var_48_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (float)0;
	var_50_float = sqrt(var_41_cvector | var_41_cvector);
	var_41_cvector /= var_50_float;
	cvector var_42_cvector = -var_41_cvector;
	cvector var_53_cvector;
	func_1494(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_43_cvector = ((var_41_cvector * 70) + (var_53_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_45_bool;
	@IsOverrideActive(var_45_bool);
	if(var_45_bool != 0)
		var_28_bool = false;
	@StopWorld();
	@CameraTransit((var_40_cvector + var_43_cvector), var_42_cvector);
	var_66_float = GetByIndex(var_43_cvector, 0);
	var_67_float = GetByIndex(var_43_cvector, 2);
	@Rotate(var_66_float, var_67_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_28_bool = true;
}


void func_1920(object var_21_object)
{
	if(var_21_object == null) {
	}
	var_25_object = GlobalVars[0];
	bool var_23_bool;
	var_25_object->in(var_23_bool, var_21_object);
	if(!var_23_bool) { //@nz
		var_27_object = GlobalVars[0];
		var_27_object->add(var_21_object);
	}
}


// @pe
void func_1933(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	func_1920(var_21_object);
	object var_28_object;
	var_20_object = var_28_object;
	func_1909(var_28_object, true);
}


// @pe
void func_400(object var_14_object)
{
	func_1825();
	object var_55_object;
	var_14_object = var_55_object;
	func_409(var_55_object);
}


void func_1944(bool var_53_bool, object var_54_object)
{
	bool var_56_bool;
	@IsPlayerActor(var_54_object, var_56_bool);
	var_56_bool = var_53_bool;
}


// @pe
void func_409(object var_55_object)
{
	object var_56_object;
	var_55_object = var_56_object;
	func_432(var_56_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1949(bool var_12_bool, object var_13_object)
{
	bool var_16_bool; object var_17_object;
	func_1294(var_16_bool, var_17_object);
	if(!var_16_bool) { //@nz
		var_12_bool = false;
		return 2;
	}
	var_51_object = GlobalVars[0];
	bool var_15_bool;
	var_51_object->in(var_15_bool, var_17_object);
	if(var_15_bool != 0) {
		var_12_bool = true;
		return 2;
	}
	bool var_53_bool; object var_54_object;
	var_13_object = var_54_object;
	func_1944(var_53_bool, var_54_object);
	var_53_bool = var_12_bool;
}


void func_432(object var_56_object)
{
	cvector var_67_cvector; cvector var_68_cvector; cvector var_69_cvector; cvector var_70_cvector; string var_71_string; object var_72_object; bool var_73_bool; bool var_74_bool; float var_75_float; cvector var_76_cvector;
	if(var_56_object == null) {
		func_519("fdie");
	} else {
		var_56_object->GetPosition(var_67_cvector);
		@GetPosition(var_68_cvector);
		@GetDirection(var_69_cvector);
		var_70_cvector = var_68_cvector - var_67_cvector;
		var_81_float = GetByIndex(var_70_cvector, 0);
		var_82_float = GetByIndex(var_69_cvector, 0);
		var_84_float = GetByIndex(var_70_cvector, 2);
		var_85_float = GetByIndex(var_69_cvector, 2);
		if(((var_81_float * var_82_float) + (var_84_float * var_85_float)) >= 0)
			var_71_string = "fdie";
		else
			var_71_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_56_object = var_72_object;
		var_92_bool = IsFuncExist(var_56_object, "GetScriptProperty", 2);
		if(var_92_bool != 0) {
			var_56_object->HasScriptProperty(var_73_bool, "Owner");
			if(var_73_bool != 0) {
				var_56_object->GetScriptProperty(var_72_object, "Owner");
				if(var_72_object == null)
					var_56_object = var_72_object;
			}
		}
		var_99_bool = IsFuncExist(var_72_object, "@GetEyesHeight", 1);
		if(var_99_bool != 0) {
			var_72_object->GetEyesHeight(var_75_float);
			var_76_cvector = [0.0, 0.0, 0.0];
			var_100_float = GetByIndex(var_76_cvector, 1);
			var_75_float = var_100_float;
			SetByIndex(var_76_cvector, 1) = var_100_float;
			@LookAsync(var_56_object, "head", var_76_cvector);
			var_74_bool = true;
		} else {
			var_74_bool = false;

		}
		@PlayAnimation("all", var_71_string);
		@WaitForAnimEnd();
		if(var_74_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_71_string);
		@RemoveEnvelope();
		var_72_object = null;
	}
	
}


// @pe
void func_1459(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_1971(object var_58_object)
{
	object var_59_object;
	var_58_object = var_59_object;
	func_2017(var_59_object);
}


void func_1463(string var_103_string)
{
	@Trace("playing " + var_103_string);
	float var_106_float;
	float var_107_float;
	@lshGetAnimTimes(var_103_string, var_106_float, var_107_float);
	@lshPlayAnimation(var_106_float, var_107_float);
	@Trace("start: " + var_106_float);
	@Trace("end: " + var_107_float);
}


void func_1977(bool var_13_bool, object var_14_object, object var_15_object)
{
	object var_21_object;
	var_15_object = var_21_object;
	bool var_20_bool;
	func_1177(var_20_bool, var_21_object, "reputation");
	if(!var_20_bool) { //@nz
		var_13_bool = false;
		return 4;
	}
	float var_18_float;
	var_15_object->GetProperty("reputation", var_18_float);
	if(var_18_float < 0.5) {
		var_13_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_14_object);
	bool var_33_bool = true;
	if(var_19_bool != 1) {
		float var_35_float; object var_36_object;
		func_1162(var_35_float, var_36_object);
		var_44_bool = var_35_float <= 160000.0;
		if(var_44_bool != 1)
			var_33_bool = false;
	}
	if(var_33_bool != 0) {
		@ReportReputationChange(var_36_object, var_15_object, -0.2);
		var_13_bool = true;
		return 4;
	}
	var_13_bool = false;
}


// @pe
void func_961(object var_16_object)
{
	func_1142();
	int var_17_int; object var_18_object;
	var_16_object = var_18_object;
	TaskCall(1);
	func_6(var_19_object, var_17_int, var_18_object);
	TaskReturn();
}


void func_1481(void)
{
	bool var_14_bool;
	func_2063(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_1488(object var_11_object)
{
	object var_13_object;
	@self(var_13_object);
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


void func_1494(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_1504(float var_27_float, cvector var_28_cvector, cvector var_29_cvector)
{
	var_27_float = (var_29_cvector - var_28_cvector) | (var_29_cvector - var_28_cvector);
}


void func_2017(object var_57_object)
{
	var_60_object = GlobalVars[0];
	bool var_59_bool;
	var_60_object->in(var_59_bool, var_57_object);
	if(var_59_bool != 0) {
		object var_62_object;
		var_57_object = var_62_object;
		func_1909(var_62_object, true);
	}
}


// @pe
void func_1508(float var_180_float, float var_181_float, float var_182_float)
{
	if(var_181_float < var_182_float)
		var_181_float = var_180_float;
	else
		var_182_float = var_180_float;
	
}


// @pe
void func_1515(float var_190_float, float var_191_float, float var_192_float, float var_193_float)
{
	if(var_191_float < var_192_float) {
		var_192_float = var_190_float;
		return 0;
	}
	if(var_191_float > var_193_float) {
		var_193_float = var_190_float;
		return 0;
	}
	var_191_float = var_190_float;
}


// @pe
void func_2037(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_1867(var_13_object);
}


void func_1526(object var_12_object)
{
	object var_14_object;
	@CreateObjectSet(var_14_object);
	var_14_object = var_12_object;
}
EMIT "Stack[-1] = 0";


void func_2043(void)
{
	@Trace("Adding diary entry");
	object var_36_object;
	@CreateDiaryEntry(var_36_object, 188, 1, 15473);
	bool var_41_bool; object var_42_object;
	var_36_object = var_42_object;
	func_1699(var_41_bool, var_42_object, 186);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1532(float var_109_float, cvector var_110_cvector, cvector var_111_cvector)
{
	var_112_float = GetByIndex(var_110_cvector, 0);
	var_113_float = GetByIndex(var_111_cvector, 0);
	var_115_float = GetByIndex(var_110_cvector, 2);
	var_116_float = GetByIndex(var_111_cvector, 2);
	var_109_float = (var_112_float * var_113_float) + (var_115_float * var_116_float);
}


