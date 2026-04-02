// @GLOBALS: 0:object:

task task_0
{
	void OnUse(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		bool var_10_bool;
		@IsOverrideActive(var_10_bool);
		if(!var_10_bool) { //@nz
			object var_12_object;
			var_8_cvector = var_12_object;
			func_1569(var_12_object);
		}
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
	}

}


task task_1
{
	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		func_189();
		object var_10_object;
		var_8_cvector = var_10_object;
		func_1734();
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		if(var_8_cvector == actor) {
			@KillTimer(100);
			@Face(actor);
		}
	}

	// @pe
	void OnStopHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		if(var_8_cvector == actor) {
			@SetTimer(100, 3.0);
			func_1276(actor);
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_97_object)
		{
		object var_99_object;
		var_97_object = var_99_object;
			bool var_98_bool;
		func_1126(var_98_bool, var_99_object);
		if(!var_98_bool) { //@nz
			object var_127_object;
			var_97_object = var_127_object;
			func_1906(var_127_object);
		}
		func_189();
		object var_143_object;
		var_97_object = var_143_object;
		func_1930(var_143_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector)
	{
		object var_12_object;
		var_8_bool = var_12_object;
		object var_13_object;
		var_9_cvector = var_13_object;
		bool var_14_bool;
		var_10_cvector = var_14_bool;
		bool var_11_bool;
		func_2078(var_11_bool, var_12_object, var_13_object, var_14_bool);
		if(var_11_bool != 0) {
			object var_97_object;
			var_8_bool = var_97_object;
			func_227();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		object var_10_object;
		var_8_cvector = var_10_object;
		bool var_9_bool;
		func_2050(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_189();
			object var_129_object;
			var_8_cvector = var_129_object;
			func_2072(var_129_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, int var_1_int, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		if(var_8_cvector != 100) {
		}
		@KillTimer(100);
		@StopGroup0();
	}

}


task task_2
{
	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_97_object)
		{
		object var_99_object;
		var_97_object = var_99_object;
			bool var_98_bool;
		func_1126(var_98_bool, var_99_object);
		if(!var_98_bool) { //@nz
			object var_127_object;
			var_97_object = var_127_object;
			func_1906(var_127_object);
		}
		func_436();
		object var_142_object;
		var_97_object = var_142_object;
		func_1930(var_142_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector)
	{
		object var_12_object;
		var_8_bool = var_12_object;
		object var_13_object;
		var_9_cvector = var_13_object;
		bool var_14_bool;
		var_10_cvector = var_14_bool;
		bool var_11_bool;
		func_2078(var_11_bool, var_12_object, var_13_object, var_14_bool);
		if(var_11_bool != 0) {
			object var_97_object;
			var_8_bool = var_97_object;
			func_403();
		}
	}

	// @pe
	void OnDeath(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		func_436();
		object var_9_object;
		var_8_cvector = var_9_object;
		func_1734();
	}

}


task task_3
{
	// @pe
	void OnHear(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, cvector var_7_cvector, cvector var_8_cvector)
	{
		bool var_9_bool = false;
		if(var_2_bool != 0) {
			if(var_8_cvector == actor)
				var_9_bool = true;
		}
		if(var_9_bool != 0)
			func_1276(actor);
	}

	// @pe
	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, cvector var_7_cvector, cvector var_8_cvector)
	{
		bool var_9_bool = false;
		if(var_2_bool != 0) {
			if(var_8_cvector == actor)
				var_9_bool = true;
		}
		if(var_9_bool != 0) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_97_object)
		{
		object var_99_object;
		var_97_object = var_99_object;
			bool var_98_bool;
		func_1126(var_98_bool, var_99_object);
		if(!var_98_bool) //@nz
			return 0;
		object var_127_object;
		var_97_object = var_127_object;
		func_1906(var_127_object);
		if(var_97_object == actor) {
			var_1_object = null;
		} else {
			var_1_object = var_97_object;
			if(var_2_bool == 0) goto Label_776;
			@StopAnimation();
			@StopGroup0();
		}
	Label_776:
	
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector)
	{
		object var_12_object;
		var_8_bool = var_12_object;
		object var_13_object;
		var_9_cvector = var_13_object;
		bool var_14_bool;
		var_10_cvector = var_14_bool;
		bool var_11_bool;
		func_2078(var_11_bool, var_12_object, var_13_object, var_14_bool);
		if(var_11_bool != 0) {
			object var_97_object;
			var_8_bool = var_97_object;
			func_753();
		}
	}

}


maintask task_4
{
	// @pe
	void init(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector)
	{
		func_1888();
	
		for(;;) {
			func_876(var_6_cvector, var_7_cvector);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnHear(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object)
	{
		bool var_10_bool;
		object var_12_object;
		var_8_object = var_12_object;
		bool var_11_bool;
		func_1126(var_11_bool, var_12_object);
		if(!var_11_bool) //@nz
			return 2;
		bool var_46_bool; object var_47_object;
		func_1970(var_46_bool, var_47_object);
		if(!var_46_bool) { //@nz
			var_125_object = GlobalVars[0];
			var_125_object->in(var_10_bool, var_47_object);
			if(!var_10_bool) //@nz
				return 2;
		}
		func_960();
		object var_127_object;
		var_8_object = var_127_object;
		TaskCall(1);
		func_165(var_128_object, var_127_object);
		TaskReturn();
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, object var_9_object, bool var_10_bool, object var_97_object)
		{
		object var_99_object;
		var_97_object = var_99_object;
			bool var_98_bool;
		func_1126(var_98_bool, var_99_object);
		if(!var_98_bool) { //@nz
			object var_127_object;
			var_97_object = var_127_object;
			func_1906(var_127_object);
		}
		func_960();
		object var_142_object;
		var_97_object = var_142_object;
		func_1930(var_142_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, object var_9_object, bool var_10_bool)
	{
		object var_12_object;
		var_8_object = var_12_object;
		object var_13_object;
		var_9_object = var_13_object;
		bool var_14_bool;
		var_10_bool = var_14_bool;
		bool var_11_bool;
		func_2078(var_11_bool, var_12_object, var_13_object, var_14_bool);
		if(var_11_bool != 0) {
			object var_97_object;
			var_8_object = var_97_object;
			func_829();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object)
	{
		object var_10_object;
		var_8_object = var_10_object;
		bool var_9_bool;
		func_2050(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_960();
			object var_128_object;
			var_8_object = var_128_object;
			func_2104(var_128_object);
		}
	}

}


// @pe
void OnHit(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
{
	object var_12_object;
	var_8_object = var_12_object;
	int var_13_int;
	var_9_int = var_13_int;
	float var_14_float;
	var_10_float = var_14_float;
	func_1194(var_12_object, var_13_int, var_14_float);
}


// @pe
void OnHit2(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, int var_9_int, float var_10_float, float var_11_float, cvector var_12_cvector, cvector var_13_cvector)
{
	object var_14_object;
	var_8_object = var_14_object;
	int var_15_int;
	var_9_int = var_15_int;
	float var_16_float;
	var_10_float = var_16_float;
	cvector var_17_cvector;
	var_12_cvector = var_17_cvector;
	cvector var_18_cvector;
	var_13_cvector = var_18_cvector;
	func_1262(var_16_float, var_17_cvector, var_18_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, string var_9_string)
{
	float var_11_float;
	if(var_9_string == "health") {
		@GetProperty("health", var_11_float);
		if(var_11_float <= 0)
			@SignalDeath(var_8_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object)
{
	bool var_9_bool; object var_10_object;
	func_995(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		object var_13_object;
		func_1448(var_13_object);
		@ReportReputationChange(var_10_object, var_13_object, -0.13, true);
	}
	object var_18_object;
	var_8_object = var_18_object;
	func_2110(var_18_object);
}


// @pe
void func_0(object var_20_object)
{
	object var_22_object;
	var_20_object = var_22_object;
	bool var_21_bool;
	func_995(var_21_bool, var_22_object);
	if(var_21_bool != 0)
		func_1654();
	func_1630();
	object var_99_object;
	var_20_object = var_99_object;
	func_17(var_99_object);
}


void func_2050(bool var_9_bool, object var_10_object)
{
	bool var_13_bool; object var_14_object;
	func_1126(var_13_bool, var_14_object);
	if(!var_13_bool) { //@nz
		var_9_bool = false;
		return 2;
	}
	var_48_object = GlobalVars[0];
	bool var_12_bool;
	var_48_object->in(var_12_bool, var_14_object);
	if(var_12_bool != 0) {
		var_9_bool = true;
		return 2;
	}
	bool var_50_bool; object var_51_object;
	var_10_object = var_51_object;
	func_1970(var_50_bool, var_51_object);
	var_50_bool = var_9_bool;
}


// @pe
void func_133(string var_122_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_123_string;
	var_122_string = var_123_string;
	func_1320(var_123_string);
	@PlayAnimation("all", var_122_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_122_string);
	@RemoveEnvelope();
}


void func_1543(object var_145_object)
{
	bool var_147_bool;
	@IsPlayerActor(var_145_object, var_147_bool);
	if(var_147_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1287(float var_240_float, object var_241_object)
{
	float var_244_float;
	@GetEyesHeight(var_244_float);
	float var_245_float;
	var_241_object->GetEyesHeight(var_245_float);
	var_240_float = var_245_float - var_244_float;
}


// @pe
void func_1930(object var_142_object)
{
	object var_143_object;
	var_142_object = var_143_object;
	func_1906(var_143_object);
	object var_144_object;
	var_142_object = var_144_object;
	func_1895(var_144_object, true);
}


void func_1294(string var_67_string, int var_68_int, int var_69_int)
{
	bool var_71_bool;
	int var_73_int;
	var_68_int = var_73_int;
	int var_74_int;
	var_69_int = var_74_int;
	bool var_72_bool;
	func_1486(var_72_bool, var_73_int, var_74_int);
	if(var_72_bool != 0)
		@AddItem(var_71_bool, var_67_string, 0);
}


void func_1552(void)
{
	object var_151_object;
	@GetScene(var_151_object);
	object var_153_object;
	func_1448(var_153_object);
	@BroadcastMessage("battle", var_153_object, var_151_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_17(object var_99_object)
{
	object var_100_object;
	var_99_object = var_100_object;
	func_42(var_100_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1941(object var_129_object)
{
	var_132_object = GlobalVars[0];
	bool var_131_bool;
	var_132_object->in(var_131_bool, var_129_object);
	if(var_131_bool != 0) {
		object var_134_object;
		var_129_object = var_134_object;
		func_1895(var_134_object, true);
	} else {
		object var_354_object;
		var_129_object = var_354_object;
		TaskCall(2);
		func_285(var_355_object, var_356_bool, var_354_object);
		TaskReturn();
		@ResetAAS();
	}
	
}


// @pe
void func_2072(object var_129_object)
{
	object var_130_object;
	var_129_object = var_130_object;
	func_2104(var_130_object);
}


void func_1305(string var_47_string, int var_48_int, int var_49_int, int var_50_int)
{
	int var_53_int; bool var_54_bool;
	int var_56_int;
	var_48_int = var_56_int;
	int var_57_int;
	var_49_int = var_57_int;
	bool var_55_bool;
	func_1486(var_55_bool, var_56_int, var_57_int);
	if(var_55_bool != 0) {
		@irand(var_53_int, var_50_int);
		@AddItem(var_54_bool, var_47_string, 0, (var_53_int + 1));
	}
}


void func_1690(int var_40_int, string var_41_string)
{
	int var_43_int;
	@GetInvItemByName(var_43_int, var_41_string);
	var_43_int = var_40_int;
}


void func_1563(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	var_81_int = var_79_int;
}


void func_285(object var_0_object, object var_1_object, object var_354_object)
{
	var_0_object = var_354_object;
	func_1543(var_0_object);
	@CanSee(var_1_object, var_0_object);
	if(var_1_object != 0) {
		bool var_365_bool;
		func_1962(var_365_bool, var_0_object);
		if(var_365_bool != 0) {
			func_1895(var_0_object, true);
			return 6;
		}
		@Face(var_0_object);
	}
	func_1552();
	@PlayAnimation("all", "shoot_begin");
	bool var_360_bool;
	@WaitForAnimEnd(var_360_bool);
	if(!var_360_bool) { //@nz
		@StopAsync();
		return 6;
	}
	@Speak("shot");
	@PlayAnimation("all", "shoot_end");
	@WaitForAnimEnd(var_360_bool);
	if(!var_360_bool) { //@nz
		@StopAsync();
		return 6;
	}
	@LockAnimationEnd("all", "shoot_end");
	int var_361_int = 0;
	int var_362_int = 0;
	
	for(;;) {
		if(var_362_int < 20) {
			func_1543(var_0_object);
			@Sleep(0.5, var_360_bool);
			if(!var_360_bool) //@nz
				return 6;
			@CanSee(var_1_object, var_0_object);
			if(var_1_object != 0) {
				var_361_int = 0;
				bool var_393_bool;
				func_1962(var_393_bool, var_0_object);
				if(var_393_bool != 0) {
					func_436();
					func_1895(var_0_object, false);
					return 6;
				}
				@Face(var_0_object);
			} else {
			@StopAsync();
			if(!((var_361_int + 1) == 4)) goto Label_391;
			@PlayAnimation("all", "attack_off");
			@WaitForAnimEnd();
			return 6;
		}
		func_436();
		object var_403_object;
		var_354_object = var_403_object;
		func_1895(var_403_object, false);
		return 6;
		}
	Label_391:
		var_362_int += 1;
	}
	
}


void func_2078(bool var_11_bool, object var_12_object, object var_13_object, bool var_14_bool)
{
	bool var_16_bool;
	object var_18_object;
	var_13_object = var_18_object;
	bool var_17_bool;
	func_1752(var_17_bool, var_18_object, !var_14_bool);
	if(var_17_bool != 0) {
		@CanSee(var_16_bool, var_12_object);
		bool var_85_bool = true;
		if(var_16_bool != 1) {
			float var_87_float; object var_88_object;
			var_12_object = var_88_object;
			func_987(var_87_float, var_88_object);
			var_96_bool = var_87_float <= 490000.0;
			if(var_96_bool != 1)
				var_85_bool = false;
		}
		if(var_85_bool != 0)
			var_11_bool = true;
	}
	var_11_bool = false;
}


void func_798(void)
{
}


// @pe
void func_1695(object var_19_object)
{
	object var_20_object;
	var_19_object = var_20_object;
	TaskCall(0);
	func_0(var_20_object);
	TaskReturn();
}


// @pe
void func_1569(object var_12_object)
{
	int var_13_int;
	func_1563(var_13_int);
	if(var_13_int == 1)
		@WorkWithCorpse(var_12_object);
	else
		@Barter(var_12_object);
	
}


void func_165(object var_0_object, object var_127_object)
{
	bool var_130_bool;
	@Face(var_127_object);
	
	for(;;) {
		@Sleep(0.5, var_130_bool);
		bool var_132_bool = true;
		var_133_bool = !var_130_bool; //@nz
		if(var_133_bool != 1) {
			bool var_134_bool;
			func_1126(var_134_bool, var_127_object);
			var_136_bool = !var_134_bool; //@nz
			if(var_136_bool != 1)
				var_132_bool = false;
		}
		if(var_132_bool != 0)
			break;
	}
	@StopAsync();
}


void func_1320(string var_123_string)
{
	bool var_132_bool; int var_133_int; bool var_134_bool; int var_135_int; bool var_136_bool; float var_137_float; cvector var_138_cvector; cvector var_139_cvector;
	@IsExisting3DSound(var_132_bool, var_123_string);
	if(!var_132_bool) { //@nz
		var_133_int = 0;

		for(;;) {
			@IsExisting3DSound(var_134_bool, (var_123_string + (var_133_int + 1)));
			if(!var_134_bool) { //@nz
				break;
			Label_1340:
				@irand(var_135_int, var_133_int);
				var_123_string += (var_135_int + 1);
	}
			@Is3DSoundLoaded(var_136_bool, var_123_string);
			if(var_136_bool != 0) {
				@GetEyesHeight(var_137_float);
				@GetDirection(var_138_cvector);
				var_139_cvector = var_138_cvector * 50;
				var_150_float = GetByIndex(var_139_cvector, 1);
				SetByIndex(var_139_cvector, 1) = (var_150_float + var_137_float);
				@PlayGlobalSound(var_123_string, var_139_cvector);
			}
		}
		var_133_int += 1;
	}
	var_145_bool = !var_133_int; //@nz
	if(var_145_bool == 0) goto Label_1340;
}


void func_1448(object var_13_object)
{
	object var_15_object;
	@self(var_15_object);
	var_15_object = var_13_object;
}
EMIT "Stack[-1] = 0";


void func_42(object var_100_object)
{
	cvector var_111_cvector; cvector var_112_cvector; cvector var_113_cvector; cvector var_114_cvector; string var_115_string; object var_116_object; bool var_117_bool; bool var_118_bool; float var_119_float; cvector var_120_cvector;
	if(var_100_object == null) {
		func_133("fdie");
	} else {
		var_100_object->GetPosition(var_111_cvector);
		@GetPosition(var_112_cvector);
		@GetDirection(var_113_cvector);
		var_114_cvector = var_112_cvector - var_111_cvector;
		var_154_float = GetByIndex(var_114_cvector, 0);
		var_155_float = GetByIndex(var_113_cvector, 0);
		var_157_float = GetByIndex(var_114_cvector, 2);
		var_158_float = GetByIndex(var_113_cvector, 2);
		if(((var_154_float * var_155_float) + (var_157_float * var_158_float)) >= 0)
			var_115_string = "fdie";
		else
			var_115_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_100_object = var_116_object;
		var_165_bool = IsFuncExist(var_100_object, "GetScriptProperty", 2);
		if(var_165_bool != 0) {
			var_100_object->HasScriptProperty(var_117_bool, "Owner");
			if(var_117_bool != 0) {
				var_100_object->GetScriptProperty(var_116_object, "Owner");
				if(var_116_object == null)
					var_100_object = var_116_object;
			}
		}
		var_172_bool = IsFuncExist(var_116_object, "@GetEyesHeight", 1);
		if(var_172_bool != 0) {
			var_116_object->GetEyesHeight(var_119_float);
			var_120_cvector = [0.0, 0.0, 0.0];
			var_173_float = GetByIndex(var_120_cvector, 1);
			var_119_float = var_173_float;
			SetByIndex(var_120_cvector, 1) = var_173_float;
			@LookAsync(var_100_object, "head", var_120_cvector);
			var_118_bool = true;
		} else {
			var_118_bool = false;

		}
		string var_175_string;
		var_115_string = var_175_string;
		func_1320(var_175_string);
		@PlayAnimation("all", var_115_string);
		@WaitForAnimEnd();
		if(var_118_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_115_string);
		@RemoveEnvelope();
		var_116_object = null;
	}
	
}


// @pe
void func_1962(bool var_365_bool, object var_366_object)
{
	object var_368_object;
	var_366_object = var_368_object;
	float var_367_float;
	func_987(var_367_float, var_368_object);
	var_365_bool = var_367_float <= 40000.0;
}


void func_1194(object var_12_object, int var_13_int, float var_14_float)
{
	cvector var_24_cvector; object var_25_object; int var_26_int; bool var_27_bool; cvector var_28_cvector; cvector var_29_cvector;
	bool var_33_bool = false;
	bool var_34_bool = false;
	if(var_12_object != 0) {
		if(var_13_int != 4)
			var_34_bool = true;
	}
	if(var_34_bool != 0) {
		if(var_13_int != 5)
			var_33_bool = true;
	}
	if(var_33_bool != 0) {
		cvector var_40_cvector; cvector var_41_cvector;
		cvector var_42_cvector; object var_43_object;
		var_12_object = var_43_object;
		func_980(var_42_cvector, var_43_object);
		var_42_cvector = var_41_cvector;
		func_1454(var_40_cvector, var_41_cvector);
		var_40_cvector = var_24_cvector;
		@CreateVectorVector(var_25_object);
		var_26_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_26_int), var_27_bool, var_28_cvector, var_29_cvector);
			if(!var_27_bool) { //@nz
				break;
			Label_1256:
				var_25_object = null;
	}
			object var_102_object;
			var_12_object = var_102_object;
			func_1150(var_102_object);
		}
		if((var_29_cvector | var_24_cvector) >= 0.70710677)
			var_25_object->add(var_28_cvector);
		var_26_int += 1;
	}
	int var_30_int;
	var_25_object->size(var_30_int);
	if(var_30_int == 0) goto Label_1256;
	int var_31_int;
	@irand(var_31_int, var_30_int);
	cvector var_32_cvector;
	var_25_object->get(var_32_cvector, var_31_int);
	object var_57_object; int var_58_int; float var_59_float; cvector var_60_cvector; cvector var_61_cvector;
	var_12_object = var_57_object;
	var_13_int = var_58_int;
	var_14_float = var_59_float;
	var_32_cvector = var_60_cvector;
	var_61_cvector = -var_24_cvector;
	func_1262(var_59_float, var_60_cvector, var_61_cvector);
}


void func_1454(cvector var_40_cvector, cvector var_41_cvector)
{
	float var_49_float = sqrt(var_41_cvector | var_41_cvector);
	if(var_49_float < 0.000001)
		var_40_cvector = [0.0, 0.0, 0.0];
	var_40_cvector = var_41_cvector / var_49_float;
}


void func_1582(int var_28_int, int var_29_int)
{
	if(var_28_int > var_29_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_32_int = 0;
	if(var_28_int != var_29_int) {
		@irand(var_32_int, (var_29_int - var_28_int));
	} else if(var_28_int == 0) {
		return 4;
	}
	var_32_int += var_28_int;
	if(var_32_int == 0)
		return 4;
	int var_40_int;
	func_1690(var_40_int, "Money");
	bool var_33_bool;
	@AddItem(var_33_bool, var_40_int, 0, var_32_int);
	
}


void func_1970(bool var_50_bool, object var_51_object)
{
	float var_55_float; float var_57_float;
	object var_59_object;
	var_51_object = var_59_object;
	bool var_58_bool;
	func_1126(var_58_bool, var_59_object);
	if(!var_58_bool) { //@nz
		var_50_bool = false;
		return 6;
	}
	bool var_61_bool; object var_62_object;
	func_995(var_61_bool, var_62_object);
	if(var_61_bool != 0) {
		var_62_object->GetProperty("reputation", var_55_float);
		var_50_bool = var_55_float < 0.33;
		return 6;
	}
	bool var_67_bool; object var_68_object;
	func_1000(var_67_bool, var_68_object, "class");
	if(!var_67_bool) { //@nz
		var_50_bool = false;
		return 6;
	}
	string var_56_string;
	var_68_object->GetProperty("class", var_56_string);
	bool var_72_bool = true;
	bool var_73_bool = true;
	var_75_bool = var_56_string == "bomber";
	if(var_75_bool != 1) {
		var_77_bool = var_56_string == "hunter";
		if(var_77_bool != 1)
			var_73_bool = false;
	}
	if(var_73_bool != 1) {
		var_79_bool = var_56_string == "grabitel";
		if(var_79_bool != 1)
			var_72_bool = false;
	}
	if(var_72_bool != 0) {
		var_50_bool = true;
		return 6;
	}
	bool var_80_bool; object var_81_object;
	func_1000(var_80_bool, var_81_object, "disease");
	if(!var_80_bool) { //@nz
		var_50_bool = false;
		return 6;
	}
	bool var_84_bool = true;
	bool var_85_bool; string var_86_string;
	func_1361(var_85_bool, var_86_string);
	if(var_85_bool != 1) {
		var_125_bool = var_86_string == "dog";
		if(var_125_bool != 1)
			var_84_bool = false;
	}
	if(var_84_bool != 0) {
		var_81_object->GetProperty("disease", var_57_float);
		var_50_bool = var_57_float > 0;
		return 6;
	}
	var_50_bool = false;
}


void func_436(void)
{
	@StopAsync();
	@StopGroup0();
	@Stop();
}


// @pe
void func_2104(object var_128_object)
{
	object var_129_object;
	var_128_object = var_129_object;
	func_1941(var_129_object);
}


void func_1464(float var_24_float, cvector var_25_cvector, cvector var_26_cvector)
{
	var_24_float = (var_26_cvector - var_25_cvector) | (var_26_cvector - var_25_cvector);
}


// @pe
void func_1468(float var_284_float, float var_285_float, float var_286_float)
{
	if(var_285_float < var_286_float)
		var_285_float = var_284_float;
	else
		var_286_float = var_284_float;
	
}


void func_189(void)
{
	@StopAsync();
	@KillTimer(100);
	@StopGroup0();
}


void func_1085(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	var_29_object->IsDead(var_31_bool);
	var_31_bool = var_28_bool;
}


// @pe
void func_2110(object var_18_object)
{
	object var_19_object;
	var_18_object = var_19_object;
	func_1695(var_19_object);
}


void func_960(void)
{
	@StopGroup0();
	@Stop();
}


void func_1090(bool var_17_bool, object var_18_object)
{
	if(var_18_object == null) {
		var_17_bool = false;
		return 4;
	}
	bool var_24_bool = false;
	var_27_bool = IsFuncExist(var_18_object, "IsDead", 1);
	if(var_27_bool != 0) {
		bool var_28_bool; object var_29_object;
		var_18_object = var_29_object;
		func_1085(var_28_bool, var_29_object);
		if(var_28_bool != 0)
			var_24_bool = true;
	}
	if(var_24_bool != 0) {
		var_17_bool = false;
		return 4;
	}
	object var_21_object;
	@GetScene(var_21_object);
	if(var_21_object == null) {
		var_17_bool = false;
		return 4;
	}
	object var_22_object;
	var_18_object->GetScene(var_22_object);
	if(var_21_object != var_22_object) {
		var_17_bool = false;
		return 4;
	}
	var_17_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1475(float var_294_float, float var_295_float, float var_296_float, float var_297_float)
{
	if(var_295_float < var_296_float) {
		var_296_float = var_294_float;
		return 0;
	}
	if(var_295_float > var_297_float) {
		var_297_float = var_294_float;
		return 0;
	}
	var_295_float = var_294_float;
}


void func_452(object var_0_object, object var_1_object, bool var_2_bool, object var_136_object, bool var_137_bool)
{
	bool var_143_bool; bool var_144_bool;
	var_0_object = var_136_object;
	func_1543(var_0_object);
	func_1552();
	@Face(var_0_object);
	if(var_137_bool != 0) {
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
	}
	@LockAnimationEnd("all", "attack_on");
	@SetAttackState(true);
	
Label_478:
	for(;;) {
		bool var_162_bool;
		func_1126(var_162_bool, var_0_object);
		if(var_162_bool != 0) {
			@CanSee(var_144_bool, var_0_object);
			if(var_144_bool != 0) {
				func_1543(var_0_object);
				func_632(var_144_bool);
			} else {
				func_1276(var_0_object);
				var_2_bool = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(var_143_bool);
				if(!var_143_bool) { //@nz
					if(var_1_object != null)
						func_627(var_143_bool, var_144_bool);
					@LockAnimationEnd("all", "attack_on");
					goto Label_478;
				}
				bool var_336_bool;
				func_1126(var_336_bool, var_0_object);
				if(!var_336_bool) { //@nz
				} else {
						@CanSee(var_144_bool, var_0_object);
						if(var_144_bool != 0) {
							var_2_bool = false;
							@Face(var_0_object);
							func_632(var_144_bool);
							goto Label_574;
						}
						@LockAnimationEnd("all", "attack_on");
						@Sleep(3, var_143_bool);
						if(!var_143_bool) { //@nz
							if(var_1_object != null)
								func_627(var_143_bool, var_144_bool);
							@LockAnimationEnd("all", "attack_on");
							goto Label_478;
						}
						bool var_350_bool;
						func_1126(var_350_bool, var_0_object);
						var_352_bool = !var_350_bool; //@nz
						if(var_352_bool == 0) goto Label_562;
				}
		}
		Label_584:
			for(;;) {
				@SetAttackState(false);
				@StopAsync();
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();

			}

		Label_562:
			var_2_bool = false;
			@CanSee(var_144_bool, var_0_object);
			if(var_144_bool != 0) {
				@Face(var_0_object);
				func_632(var_144_bool);
				goto Label_574;
			}
			goto Label_584;
		}
	Label_574:
		if(var_1_object != null)
			func_627(var_143_bool, var_144_bool);
		else
			@Sleep(2);

	}
	
}


void func_965(void)
{
}


// @pe
void func_966(string var_274_string, int var_275_int)
{
	if(var_275_int == 2) {
		var_274_string = "fire";
		return 0;
	EMIT "GOTO 0x3d2";
	}
	if(var_275_int == 1) {
		var_274_string = "bullet";
		return 0;
	}
	var_274_string = "phys";
}


void func_1613(string var_85_string)
{
	object var_89_object;
	@CreateInvItem(var_89_object);
	var_89_object->SetItemName(var_85_string);
	var_89_object->SetProperty("Organ", 1);
	int var_90_int;
	var_89_object->GetItemID(var_90_int);
	bool var_91_bool;
	@AddItem(var_91_bool, var_89_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1486(bool var_55_bool, int var_56_int, int var_57_int)
{
	int var_59_int;
	@irand(var_59_int, var_57_int);
	var_55_bool = var_59_int < var_56_int;
}


// @pe
void func_1361(bool var_85_bool, string var_86_string)
{
	var_85_bool = true;
	bool var_87_bool = true;
	bool var_88_bool = true;
	bool var_89_bool = true;
	bool var_90_bool = true;
	bool var_91_bool = true;
	bool var_92_bool = true;
	bool var_93_bool = true;
	bool var_94_bool = true;
	bool var_95_bool = true;
	bool var_96_bool = true;
	bool var_97_bool = true;
	var_99_bool = var_86_string == "woman";
	if(var_99_bool != 1) {
		var_101_bool = var_86_string == "worker";
		if(var_101_bool != 1)
			var_97_bool = false;
	}
	if(var_97_bool != 1) {
		var_103_bool = var_86_string == "butcher";
		if(var_103_bool != 1)
			var_96_bool = false;
	}
	if(var_96_bool != 1) {
		var_105_bool = var_86_string == "wasted_girl";
		if(var_105_bool != 1)
			var_95_bool = false;
	}
	if(var_95_bool != 1) {
		var_107_bool = var_86_string == "boy";
		if(var_107_bool != 1)
			var_94_bool = false;
	}
	if(var_94_bool != 1) {
		var_109_bool = var_86_string == "vaxxabitka";
		if(var_109_bool != 1)
			var_93_bool = false;
	}
	if(var_93_bool != 1) {
		var_111_bool = var_86_string == "unosha";
		if(var_111_bool != 1)
			var_92_bool = false;
	}
	if(var_92_bool != 1) {
		var_113_bool = var_86_string == "wasted_male";
		if(var_113_bool != 1)
			var_91_bool = false;
	}
	if(var_91_bool != 1) {
		var_115_bool = var_86_string == "alkash";
		if(var_115_bool != 1)
			var_90_bool = false;
	}
	if(var_90_bool != 1) {
		var_117_bool = var_86_string == "dohodyaga";
		if(var_117_bool != 1)
			var_89_bool = false;
	}
	if(var_89_bool != 1) {
		var_119_bool = var_86_string == "vaxxabit";
		if(var_119_bool != 1)
			var_88_bool = false;
	}
	if(var_88_bool != 1) {
		var_121_bool = var_86_string == "nudegirl";
		if(var_121_bool != 1)
			var_87_bool = false;
	}
	if(var_87_bool != 1) {
		var_123_bool = var_86_string == "morlok";
		if(var_123_bool != 1)
			var_85_bool = false;
	}
}


void func_1491(object var_9_object)
{
	object var_11_object;
	@CreateObjectSet(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_980(cvector var_42_cvector, object var_43_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_43_object->GetPosition(var_47_cvector);
	var_42_cvector = var_47_cvector - var_46_cvector;
}


void func_1752(bool var_17_bool, object var_18_object, bool var_19_bool)
{
	bool var_22_bool; object var_23_object;
	func_1000(var_22_bool, var_23_object, "class");
	if(!var_22_bool) { //@nz
		var_17_bool = false;
		return 2;
	}
	string var_21_string;
	var_23_object->GetProperty("class", var_21_string);
	bool var_33_bool = true;
	bool var_34_bool = true;
	bool var_35_bool = true;
	bool var_36_bool = true;
	bool var_37_bool = true;
	bool var_38_bool = true;
	bool var_39_bool = true;
	bool var_40_bool = true;
	bool var_41_bool = true;
	bool var_42_bool = true;
	var_44_bool = var_21_string == "patrol";
	if(var_44_bool != 1) {
		var_46_bool = var_21_string == "sanitar";
		if(var_46_bool != 1)
			var_42_bool = false;
	}
	if(var_42_bool != 1) {
		var_48_bool = var_21_string == "soldier";
		if(var_48_bool != 1)
			var_41_bool = false;
	}
	if(var_41_bool != 1) {
		var_50_bool = var_21_string == "woman";
		if(var_50_bool != 1)
			var_40_bool = false;
	}
	if(var_40_bool != 1) {
		var_52_bool = var_21_string == "wasted_girl";
		if(var_52_bool != 1)
			var_39_bool = false;
	}
	if(var_39_bool != 1) {
		var_54_bool = var_21_string == "vaxxabitka";
		if(var_54_bool != 1)
			var_38_bool = false;
	}
	if(var_38_bool != 1) {
		var_56_bool = var_21_string == "vaxxabit";
		if(var_56_bool != 1)
			var_37_bool = false;
	}
	if(var_37_bool != 1) {
		var_58_bool = var_21_string == "little_girl";
		if(var_58_bool != 1)
			var_36_bool = false;
	}
	if(var_36_bool != 1) {
		var_60_bool = var_21_string == "girl";
		if(var_60_bool != 1)
			var_35_bool = false;
	}
	if(var_35_bool != 1) {
		var_62_bool = var_21_string == "dohodyaga";
		if(var_62_bool != 1)
			var_34_bool = false;
	}
	if(var_34_bool != 1) {
		var_64_bool = var_21_string == "nudegirl";
		if(var_64_bool != 1)
			var_33_bool = false;
	}
	if(var_33_bool != 0) {
		var_17_bool = true;
		return 2;
	}
	if(var_19_bool != 0) {
		var_17_bool = false;
		return 2;
	}
	var_17_bool = true;
	bool var_66_bool = true;
	bool var_67_bool = true;
	bool var_68_bool = true;
	bool var_69_bool = true;
	bool var_70_bool = true;
	var_72_bool = var_21_string == "worker";
	if(var_72_bool != 1) {
		var_74_bool = var_21_string == "butcher";
		if(var_74_bool != 1)
			var_70_bool = false;
	}
	if(var_70_bool != 1) {
		var_76_bool = var_21_string == "boy";
		if(var_76_bool != 1)
			var_69_bool = false;
	}
	if(var_69_bool != 1) {
		var_78_bool = var_21_string == "unosha";
		if(var_78_bool != 1)
			var_68_bool = false;
	}
	if(var_68_bool != 1) {
		var_80_bool = var_21_string == "wasted_male";
		if(var_80_bool != 1)
			var_67_bool = false;
	}
	if(var_67_bool != 1) {
		var_82_bool = var_21_string == "alkash";
		if(var_82_bool != 1)
			var_66_bool = false;
	}
	if(var_66_bool != 1) {
		var_84_bool = var_21_string == "morlok";
		if(var_84_bool != 1)
			var_17_bool = false;
	}
}


// @pe
void func_1497(float var_207_float, cvector var_208_cvector, cvector var_209_cvector)
{
	var_210_float = GetByIndex(var_208_cvector, 0);
	var_211_float = GetByIndex(var_209_cvector, 0);
	var_213_float = GetByIndex(var_208_cvector, 2);
	var_214_float = GetByIndex(var_209_cvector, 2);
	var_207_float = (var_210_float * var_211_float) + (var_213_float * var_214_float);
}


void func_987(float var_367_float, object var_368_object)
{
	cvector var_372_cvector;
	@GetPosition(var_372_cvector);
	cvector var_373_cvector;
	var_368_object->GetPosition(var_373_cvector);
	var_367_float = (var_373_cvector - var_372_cvector) | (var_373_cvector - var_372_cvector);
}


void func_1630(void)
{
	int var_79_int;
	func_1563(var_79_int);
	if(var_79_int != 1) {
	}
	func_1613("liver");
	func_1613("kidney");
	func_1613("heart");
	func_1613("blood");
}


void func_1888(void)
{
	var_8_object = GlobalVars[0];
	object var_9_object;
	func_1491(var_9_object);
	var_9_object = var_8_object;
	GlobalVars[0] = var_8_object;
}


// @pe
void func_1506(float var_216_float, cvector var_217_cvector)
{
	var_218_float = GetByIndex(var_217_cvector, 0);
	var_219_float = GetByIndex(var_217_cvector, 0);
	var_221_float = GetByIndex(var_217_cvector, 2);
	var_222_float = GetByIndex(var_217_cvector, 2);
	var_216_float = sqrt((var_218_float * var_219_float) + (var_221_float * var_222_float));
}


void func_995(bool var_9_bool, object var_10_object)
{
	bool var_12_bool;
	@IsPlayerActor(var_10_object, var_12_bool);
	var_12_bool = var_9_bool;
}


void func_1126(bool var_13_bool, object var_14_object)
{
	object var_18_object;
	var_14_object = var_18_object;
	bool var_17_bool;
	func_1090(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_13_bool = false;
		return 2;
	}
	bool var_35_bool; object var_36_object;
	func_1000(var_35_bool, var_36_object, "noaccess");
	if(!var_35_bool) { //@nz
		var_13_bool = true;
		return 2;
	}
	int var_16_int;
	var_36_object->GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == 0;
}


// @pe
void func_1895(object var_134_object, bool var_135_bool)
{
	object var_136_object;
	var_134_object = var_136_object;
	bool var_137_bool;
	var_135_bool = var_137_bool;
	TaskCall(3);
	func_452(var_138_object, var_139_object, var_140_bool, var_136_object, var_137_bool);
	TaskReturn();
	@ResetAAS();
}


void func_1000(bool var_35_bool, object var_36_object, string var_37_string)
{
	var_42_bool = IsFuncExist(var_36_object, "HasProperty", 2);
	if(!var_42_bool) { //@nz
		var_35_bool = false;
		return 2;
	}
	bool var_39_bool;
	var_36_object->HasProperty(var_37_string, var_39_bool);
	var_39_bool = var_35_bool;
}


// @pe
void func_1516(float var_204_float, cvector var_205_cvector, cvector var_206_cvector)
{
	cvector var_208_cvector;
	var_205_cvector = var_208_cvector;
	cvector var_209_cvector;
	var_206_cvector = var_209_cvector;
	float var_207_float;
	func_1497(var_207_float, var_208_cvector, var_209_cvector);
	float var_216_float; cvector var_217_cvector;
	var_205_cvector = var_217_cvector;
	func_1506(var_216_float, var_217_cvector);
	float var_225_float; cvector var_226_cvector;
	var_206_cvector = var_226_cvector;
	func_1506(var_225_float, var_226_cvector);
	var_204_float = var_207_float / (var_216_float * var_225_float);
}


void func_876(object var_0_object, object var_1_object)
{
	int var_16_int; bool var_17_bool; cvector var_18_cvector; object var_19_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		func_965();
		@irand(var_16_int, 10);
		@Sleep((var_16_int + 5), var_17_bool);
		if(var_17_bool != 0) {
			func_798();
		} else {
		for(;;) {
			func_965();
			@GetPFPosition(var_18_cvector);
			float var_24_float; cvector var_26_cvector;
			var_18_cvector = var_26_cvector;
			func_1464(var_24_float, var_1_object, var_26_cvector);
			if(var_24_float > 40000) {
				@FindPathTo(var_19_object, var_1_object);
				if(var_19_object != null) {
					@RotatePath(var_19_object, var_17_bool);
					if(!var_17_bool) { //@nz
					} else {
					@FollowPath(var_19_object, false, var_17_bool);
					if(!var_17_bool) { //@nz
						goto Label_957;
					}
					var_35_float = GetByIndex(var_0_object, 0);
					var_36_float = GetByIndex(var_0_object, 2);
					@Rotate(var_35_float, var_36_float, var_17_bool);
					if(!var_17_bool) { //@nz
						goto Label_957;
					}
					@WaitForAnimEnd(var_17_bool);
					if(!var_17_bool) { //@nz
						goto Label_957;
					}
					goto Label_958;
				EMIT "GOTO 0x3ae";
				}
				@Sleep(1);
				var_19_object = null;
				goto Label_957;
			}
			var_40_float = GetByIndex(var_0_object, 0);
			var_41_float = GetByIndex(var_0_object, 2);
			@Rotate(var_40_float, var_41_float, var_17_bool);
			if(!var_17_bool) { //@nz
				goto Label_957;
			}
			@WaitForAnimEnd(var_17_bool);
			if(!var_17_bool) { //@nz
				goto Label_957;
			}
			goto Label_958;
			}
		Label_957:
		}
		}
	Label_958:
	}
	
}
EMIT "Return(); Pop(8)";


void func_1262(object var_14_object, cvector var_17_cvector, cvector var_18_cvector)
{
	object var_21_object;
	@GetScene(var_21_object);
	object var_22_object;
	@AddActorByType(var_22_object, "scripted", var_21_object, var_17_cvector, var_18_cvector, "blood_dir.xml");
	object var_25_object;
	var_14_object = var_25_object;
	func_1150(var_25_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1906(object var_127_object)
{
	if(var_127_object == null) {
	}
	var_131_object = GlobalVars[0];
	bool var_129_bool;
	var_131_object->in(var_129_bool, var_127_object);
	if(!var_129_bool) { //@nz
		var_133_object = GlobalVars[0];
		var_133_object->add(var_127_object);
	}
	bool var_134_bool; object var_135_object;
	func_995(var_134_bool, var_135_object);
	if(var_134_bool != 0) {
		object var_138_object;
		func_1448(var_138_object);
		@ReportReputationChange(var_135_object, var_138_object, -0.07);
	}
}


void func_627(object var_0_object, object var_1_object)
{
	var_1_object = null;
	@Face(var_1_object);
}


void func_1012(float var_249_float, object var_250_object, float var_251_float, int var_252_int)
{
	int var_259_int; int var_261_int;
	object var_266_object;
	var_250_object = var_266_object;
	bool var_265_bool;
	func_1000(var_265_bool, var_266_object, "health");
	if(!var_265_bool) //@nz
		var_249_float = 0.0;
	bool var_269_bool; object var_270_object;
	func_1000(var_269_bool, var_270_object, "armor");
	if(!var_269_bool) //@nz
		var_259_int = 0;
	else
		var_270_object->GetProperty("armor", var_259_int);
	string var_274_string; int var_275_int;
	var_252_int = var_275_int;
	func_966(var_274_string, var_275_int);
	string var_260_string = "armor_" + var_274_string;
	bool var_280_bool; object var_281_object; string var_282_string;
	var_250_object = var_281_object;
	func_1000(var_280_bool, var_281_object, var_282_string);
	if(!var_280_bool) //@nz
		var_261_int = 0;
	else
		var_250_object->GetProperty(var_282_string, var_261_int);

	float var_284_float;
	func_1468(var_284_float, ((var_259_int + var_261_int) / 100.0), (float)1);
	float var_262_float;
	var_284_float = var_262_float;
	float var_263_float;
	var_250_object->GetProperty("health", var_263_float);
	float var_264_float = var_251_float * (1 - var_262_float);
	float var_294_float;
	func_1475(var_294_float, (var_263_float - var_264_float), (float)0, (float)1);
	var_250_object->SetProperty("health", var_294_float);
	bool var_300_bool; object var_301_object;
	var_250_object = var_301_object;
	func_995(var_300_bool, var_301_object);
	if(var_300_bool != 0) {
		float var_302_float = -var_264_float;
		func_1533(var_302_float);
	}
	var_264_float = var_249_float;
	
}


void func_1654(void)
{
	@ClearSubContainer(0);
	func_1582(500, 1000);
	func_1305("rifle_ammo", 1, 3, 3);
	func_1305("rusk", 1, 3, 2);
	func_1294("bandage", 1, 6);
	func_1294("tourniquet", 1, 6);
}


void func_632(object var_0_object)
{
	object var_185_object; object var_186_object; float var_191_float; object var_192_object; object var_193_object;
	func_1543(var_0_object);
	@ReportAttack(var_0_object);
	bool var_195_bool;
	func_995(var_195_bool, var_0_object);
	if(var_195_bool != 0) {
		object var_197_object;
		func_1448(var_197_object);
		@SendPlayerEnemy(var_0_object, var_197_object);
	}
	cvector var_180_cvector;
	@GetDirection(var_180_cvector);
	cvector var_198_cvector;
	func_980(var_198_cvector, var_0_object);
	cvector var_181_cvector;
	var_198_cvector = var_181_cvector;
	float var_204_float; cvector var_205_cvector; cvector var_206_cvector;
	var_181_cvector = var_206_cvector;
	func_1516(var_204_float, var_205_cvector, var_206_cvector);
	if(var_204_float < 0.99939084) {
	}
	func_1552();
	@PlayAnimation("all", "attack_begin1");
	bool var_182_bool;
	cvector var_183_cvector;
	cvector var_184_cvector;
	@GetGeometryLocator("attack", var_182_bool, var_183_cvector, var_184_cvector);
	if(var_182_bool != 0) {
		@GetScene(var_186_object);
		@AddActorByType(var_185_object, "light-dynamic", var_186_object, var_183_cvector, var_184_cvector, "soldier_fire.xml");
		var_186_object = null;
		var_185_object = null;
	} else {
				@WaitForAnimEnd();
	}
	@Speak("shot");
	@GetDirection(var_205_cvector);
	cvector var_237_cvector;
	func_980(var_237_cvector, var_0_object);
	var_237_cvector = var_181_cvector;
	var_239_float = GetByIndex(var_181_cvector, 1);
	float var_240_float;
	func_1287(var_240_float, var_0_object);
	SetByIndex(var_181_cvector, 1) = (var_239_float + var_240_float);
	cvector var_187_cvector;
	@RandVecCone3D(var_187_cvector, var_181_cvector, 0.034906585);
	object var_188_object;
	int var_189_int;
	cvector var_190_cvector;
	@GetVictimMaterial(var_187_cvector, var_188_object, var_189_int, var_190_cvector);
	if(var_188_object != null) {
		if(var_188_object == var_0_object) {
			float var_249_float;
			func_1012(var_249_float, var_0_object, 1.5, 1);
			var_249_float = var_191_float;
			@ReportHit(var_0_object, 2, var_191_float, 1.5);
		} else if(var_189_int != -1) {
			@GetScene(var_192_object);
			@AddActorByType(var_193_object, "scripted", var_192_object, var_190_cvector, [0.0, 0.0, 1.0], "richochet.xml");
			var_193_object->SetScriptProperty("Material", var_189_int);
			var_193_object = null;
			var_192_object = null;

		}
	}
	@PlayAnimation("all", "attack_end1");
	@WaitForAnimEnd();
	@LockAnimationEnd("all", "attack_on");
	
}
EMIT "Stack[-6] = 0";


void func_1276(object var_321_object)
{
	cvector var_325_cvector;
	var_321_object->GetPosition(var_325_cvector);
	cvector var_326_cvector;
	@GetPosition(var_326_cvector);
	cvector var_327_cvector = var_325_cvector - var_326_cvector;
	var_328_float = GetByIndex(var_327_cvector, 0);
	var_329_float = GetByIndex(var_327_cvector, 2);
	@RotateAsync(var_328_float, var_329_float);
}


void func_1533(float var_302_float)
{
	object var_304_object;
	@CreateFloatVector(var_304_object);
	var_304_object->add(var_302_float);
	@SendWorldWndMessage(15, var_304_object);
}
EMIT "Stack[-1] = 0";


void func_1150(object var_25_object)
{
	string var_39_string;
	if(var_25_object == null)
		return 14;
	bool var_33_bool;
	@IsDead(var_33_bool);
	if(var_33_bool != 0)
		return 14;
	int var_34_int;
	@GetSecondaryAnimationType(var_34_int);
	if(var_34_int < 0)
		return 14;
	cvector var_35_cvector;
	var_25_object->GetPosition(var_35_cvector);
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	@GetDirection(var_37_cvector);
	cvector var_38_cvector = var_36_cvector - var_35_cvector;
	var_44_float = GetByIndex(var_38_cvector, 0);
	var_45_float = GetByIndex(var_37_cvector, 0);
	var_47_float = GetByIndex(var_38_cvector, 2);
	var_48_float = GetByIndex(var_37_cvector, 2);
	if(((var_44_float * var_45_float) + (var_47_float * var_48_float)) >= 0)
		var_39_string = "fhit";
	else
		var_39_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_39_string + "1"), (var_39_string + "2"), -10);
	
}


