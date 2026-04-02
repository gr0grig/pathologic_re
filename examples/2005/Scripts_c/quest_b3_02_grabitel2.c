// @GLOBALS: 0:bool:

task task_0
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		object var_11_object;
		var_10_bool = var_11_object;
		func_2342();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2344(var_15_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		if(var_10_bool == "kill")
			var_0_bool = true;
	}

}


task task_1
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		object var_11_object;
		var_10_bool = var_11_object;
		func_2342();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, object var_8_object, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2344(var_15_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, string var_7_string, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		if(var_10_bool == "kill") {
			var_13_bool = GlobalVars[0];
			GlobalVars[0] = true;
		}
	}

}


task task_2
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		object var_11_object;
		var_10_object = var_11_object;
		func_2342();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_object = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2344(var_15_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, string var_10_string)
	{
		if(var_10_string == "kill") {
			var_13_bool = GlobalVars[0];
			GlobalVars[0] = true;
			func_950(var_10_string);
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, int var_10_int)
	{
		if(var_10_int == 1) {
			func_2055(var_1_object);
		} else {
			int var_18_int;
			func_1094(var_9_bool, var_18_int, var_18_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		bool var_11_bool = false;
		if(var_1_object == var_10_object) {
			if(!var_2_int) //@nz
				var_11_bool = true;
		}
		if(var_11_bool != 0) {
			var_2_int = true;
			object var_14_object;
			var_10_object = var_14_object;
			func_1866(var_14_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		bool var_11_bool = false;
		if(var_1_object == var_10_object) {
			if(var_2_int != 0)
				var_11_bool = true;
		}
		if(var_11_bool != 0) {
			var_2_int = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		@RequestClearPath(var_10_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		func_950(var_10_object);
		object var_15_object;
		var_10_object = var_15_object;
		func_2323();
	}

}


maintask task_3
{
	void init(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
	
		for(;;) {
			@Sleep(3);
			func_1185();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, object var_14_object)
		{
		object var_16_object;
		var_14_object = var_16_object;
			bool var_15_bool;
		func_2329(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_1266();
			object var_51_object;
			var_14_object = var_51_object;
			func_2336(var_51_object);
		}
		}

	void OnSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		bool var_12_bool;
		@IsPlayerActor(var_10_object, var_12_bool);
		if(var_12_bool != 0) {
			object var_14_object;
			var_10_object = var_14_object;
			func_1151();
		}
	}

	void OnHear(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		bool var_12_bool;
		@IsPlayerActor(var_10_object, var_12_bool);
		if(var_12_bool != 0) {
			object var_14_object;
			var_10_object = var_14_object;
			func_1151();
		}
	}

}


task task_4
{
	void OnUse(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		bool var_12_bool;
		@IsOverrideActive(var_12_bool);
		if(!var_12_bool) { //@nz
			object var_14_object;
			var_10_object = var_14_object;
			func_2146(var_14_object);
		}
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, string var_11_string)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
	}

}


task task_5
{
}


// @pe
void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
{
	object var_14_object;
	var_10_object = var_14_object;
	int var_15_int;
	var_11_int = var_15_int;
	float var_16_float;
	var_12_float = var_16_float;
	func_1768(var_14_object, var_15_int, var_16_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float, cvector var_14_cvector, cvector var_15_cvector)
{
	object var_16_object;
	var_10_object = var_16_object;
	int var_17_int;
	var_11_int = var_17_int;
	float var_18_float;
	var_12_float = var_18_float;
	cvector var_19_cvector;
	var_14_cvector = var_19_cvector;
	cvector var_20_cvector;
	var_15_cvector = var_20_cvector;
	func_1836(var_18_float, var_19_cvector, var_20_cvector);
}


void OnPropertyChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, string var_11_string)
{
	float var_13_float;
	if(var_11_string == "health") {
		@GetProperty("health", var_13_float);
		if(var_13_float <= 0)
			@SignalDeath(var_10_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	func_2266(var_11_object);
}


void func_1536(float var_534_float, object var_535_object, float var_536_float, int var_537_int)
{
	int var_547_int; int var_549_int;
	object var_554_object;
	var_535_object = var_554_object;
	bool var_553_bool;
	func_1502(var_553_bool, var_554_object, "health");
	if(!var_553_bool) //@nz
		var_534_float = 0.0;
	bool var_557_bool; object var_558_object;
	func_1502(var_557_bool, var_558_object, "armor");
	if(!var_557_bool) //@nz
		var_547_int = 0;
	else
		var_558_object->GetProperty("armor", var_547_int);
	string var_562_string; int var_563_int;
	var_537_int = var_563_int;
	func_1468(var_562_string, var_563_int);
	string var_548_string = "armor_" + var_562_string;
	bool var_568_bool; object var_569_object; string var_570_string;
	var_535_object = var_569_object;
	func_1502(var_568_bool, var_569_object, var_570_string);
	if(!var_568_bool) //@nz
		var_549_int = 0;
	else
		var_535_object->GetProperty(var_570_string, var_549_int);

	float var_572_float;
	func_1945(var_572_float, ((var_547_int + var_549_int) / 100.0), (float)1);
	float var_550_float;
	var_572_float = var_550_float;
	float var_551_float;
	var_535_object->GetProperty("health", var_551_float);
	float var_552_float = var_536_float * (1 - var_550_float);
	float var_582_float;
	func_1976(var_582_float, (var_551_float - var_552_float), (float)0, (float)1);
	var_535_object->SetProperty("health", var_582_float);
	bool var_588_bool; object var_589_object;
	var_535_object = var_589_object;
	func_1497(var_588_bool, var_589_object);
	if(var_588_bool != 0) {
		float var_590_float = -var_552_float;
		func_2035(var_590_float);
	}
	var_552_float = var_534_float;
	
}


void func_0(bool var_0_bool, bool var_79_bool, object var_80_object, object var_197_object)
{
	object var_96_object;
	var_80_object = var_96_object;
	func_2055(var_96_object);
	bool var_101_bool; object var_102_object;
	var_80_object = var_102_object;
	func_1715(var_101_bool, var_102_object);
	bool var_115_bool; object var_116_object;
	func_1681(var_115_bool, var_116_object);
	if(!var_115_bool) { //@nz
		var_79_bool = false;
		return 14;
	}
	func_2064();
	@Face(var_116_object);
	@PlayAnimation("all", "aattack_begin1");
	@WaitForAnimEnd();
	bool var_124_bool; object var_125_object;
	var_80_object = var_125_object;
	func_1681(var_124_bool, var_125_object);
	if(!var_124_bool) { //@nz
		@StopAsync();
		var_79_bool = false;
		return 14;
	}
	@PlayAnimation("all", "aattack_end1");
	object var_89_object;
	@GetScene(var_89_object);
	cvector var_90_cvector;
	bool var_91_bool;
	@GetGeometryLocator("knife", var_91_bool, var_90_cvector);
	object var_92_object;
	@AddActorByType(var_92_object, "scripted", var_89_object, var_90_cvector, [0.0, 0.0, 1.0], "grabitel_knife.xml");
	object var_134_object;
	func_1929(var_134_object);
	var_92_object->SetScriptProperty("Owner", var_134_object);
	var_92_object->SetScriptProperty("Target", var_80_object);
	cvector var_93_cvector;
	var_80_object->GetPosition(var_93_cvector);
	float var_94_float;
	var_80_object->GetEyesHeight(var_94_float);
	var_136_float = GetByIndex(var_93_cvector, 1);
	SetByIndex(var_93_cvector, 1) = (var_136_float + (var_94_float - 10));
	cvector var_139_cvector; cvector var_140_cvector; cvector var_141_cvector;
	var_90_cvector = var_140_cvector;
	var_93_cvector = var_141_cvector;
	func_2105(var_139_cvector, var_140_cvector, var_141_cvector, 2000.0);
	cvector var_95_cvector;
	var_139_cvector = var_95_cvector;
	var_92_object->SetScriptProperty("StartDirection", var_95_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	if(false != 0) {
		var_79_bool = true;
		return 14;
	}
	bool var_192_bool; object var_193_object;
	var_80_object = var_193_object;
	func_1681(var_192_bool, var_193_object);
	if(!var_192_bool) { //@nz
		var_79_bool = false;
		return 14;
	}
	bool var_195_bool; object var_196_object;
	var_80_object = var_196_object;
	TaskCall(1);
	func_126(var_195_bool, var_196_object);
	TaskReturn();
	var_197_object = var_79_bool;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_2055(object var_96_object)
{
	bool var_98_bool;
	@IsPlayerActor(var_96_object, var_98_bool);
	if(var_98_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_2064(void)
{
	object var_119_object;
	@GetScene(var_119_object);
	object var_121_object;
	func_1929(var_121_object);
	@BroadcastMessage("battle", var_121_object, var_119_object);
}
EMIT "Stack[-1] = 0";


void func_2075(bool var_612_bool)
{
	bool var_614_bool;
	@GetVariable("god_mode", var_614_bool);
	var_614_bool = var_612_bool;
}


void func_2081(string var_35_string, int var_36_int)
{
	string var_38_string = "idle";
	if(var_36_int != 0)
		var_38_string += var_36_int;
	var_38_string = var_35_string;
}


void func_2088(int var_29_int)
{
	int var_32_int; bool var_33_bool;
	var_32_int = 0;
	
	for(;;) {
		string var_35_string; int var_36_int;
		var_32_int = var_36_int;
		func_2081(var_35_string, var_36_int);
		@HasAnimation(var_33_bool, "all", var_35_string);
		if(!var_33_bool) //@nz
			break;
		var_32_int += 1;
	}
	var_32_int = var_29_int;
}


void func_2105(cvector var_139_cvector, cvector var_140_cvector, cvector var_141_cvector, float var_142_float)
{
	cvector var_149_cvector; float var_154_float;
	var_149_cvector = var_141_cvector - var_140_cvector;
	float var_150_float = 250000;
	var_155_float = GetByIndex(var_149_cvector, 1);
	float var_151_float = (var_155_float * 1000) - (var_142_float * var_142_float);
	float var_152_float = var_149_cvector | var_149_cvector;
	float var_159_float; float var_160_float; float var_161_float; float var_162_float;
	var_150_float = var_160_float;
	var_151_float = var_161_float;
	var_152_float = var_162_float;
	func_1952(var_159_float, var_160_float, var_161_float, var_162_float);
	float var_153_float;
	var_159_float = var_153_float;
	if(var_153_float < 0) {
		var_154_float = 1;
	} else {
		float var_173_float; float var_174_float; float var_175_float; float var_176_float; float var_177_float;
		var_150_float = var_174_float;
		var_151_float = var_175_float;
		var_152_float = var_176_float;
		var_177_float = sqrt(var_153_float);
		func_1959(var_174_float, var_175_float, var_176_float, var_177_float);
		var_154_float = sqrt(var_173_float);
	}
	var_139_cvector = (var_149_cvector + (([0.0, 500.0, 0.0] * var_154_float) * var_154_float)) / var_154_float;
	
}


// @pe
void func_1094(bool var_0_bool, object var_1_object, int var_18_int)
{
	if(var_18_int != 0)
		return 0;
	bool var_21_bool;
	func_1132(var_21_bool, var_1_object);
	if(!var_21_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1609(bool var_601_bool, object var_602_object)
{
	object var_606_object;
	var_602_object = var_606_object;
	bool var_605_bool;
	func_1502(var_605_bool, var_606_object, "health");
	if(!var_605_bool) { //@nz
		var_601_bool = false;
		return 2;
	}
	bool var_609_bool = false;
	bool var_610_bool; object var_611_object;
	func_1497(var_610_bool, var_611_object);
	if(var_610_bool != 0) {
		bool var_612_bool;
		func_2075(var_612_bool);
		if(var_612_bool != 0)
			var_609_bool = true;
	}
	if(var_609_bool != 0) {
		var_601_bool = false;
		return 2;
	}
	float var_604_float;
	var_611_object->GetProperty("health", var_604_float);
	var_601_bool = var_604_float <= 0.0;
}


void func_1116(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2140(int var_102_int)
{
	int var_104_int;
	@GetVariable("branch", var_104_int);
	var_104_int = var_102_int;
}


// @pe
void func_2146(object var_14_object)
{
	int var_15_int;
	func_2140(var_15_int);
	if(var_15_int == 1)
		@WorkWithCorpse(var_14_object);
	else
		@Barter(var_14_object);
	
}


void func_1640(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	var_33_object->IsDead(var_35_bool);
	var_35_bool = var_32_bool;
}


// @pe
void func_1132(bool var_320_bool, object var_321_object)
{
	object var_323_object;
	var_321_object = var_323_object;
	bool var_322_bool;
	func_1681(var_322_bool, var_323_object);
	var_322_bool = var_320_bool;
}


void func_1645(bool var_21_bool, object var_22_object)
{
	if(var_22_object == null) {
		var_21_bool = false;
		return 4;
	}
	bool var_28_bool = false;
	var_31_bool = IsFuncExist(var_22_object, "IsDead", 1);
	if(var_31_bool != 0) {
		bool var_32_bool; object var_33_object;
		var_22_object = var_33_object;
		func_1640(var_32_bool, var_33_object);
		if(var_32_bool != 0)
			var_28_bool = true;
	}
	if(var_28_bool != 0) {
		var_21_bool = false;
		return 4;
	}
	object var_25_object;
	@GetScene(var_25_object);
	if(var_25_object == null) {
		var_21_bool = false;
		return 4;
	}
	object var_26_object;
	var_22_object->GetScene(var_26_object);
	if(var_25_object != var_26_object) {
		var_21_bool = false;
		return 4;
	}
	var_21_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2159(int var_65_int, int var_66_int)
{
	if(var_65_int > var_66_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_69_int = 0;
	if(var_65_int != var_66_int) {
		@irand(var_69_int, (var_66_int - var_65_int));
	} else if(var_65_int == 0) {
		return 4;
	}
	var_69_int += var_65_int;
	if(var_69_int == 0)
		return 4;
	int var_77_int;
	func_2261(var_77_int, "Money");
	bool var_70_bool;
	@AddItem(var_70_bool, var_77_int, 0, var_69_int);
	
}


void func_1139(string var_338_string)
{
	var_338_string = "walk";
}


void func_1141(string var_339_string)
{
	var_339_string = "run";
}


// @pe
void func_126(bool var_195_bool, object var_196_object)
{
	var_203_bool = GlobalVars[0];
	GlobalVars[0] = false;
	object var_204_object;
	func_203(var_200_bool, var_201_float, var_202_int, var_195_bool, var_204_object, var_204_object, true, 200.0);
	bool var_674_bool = false;
	var_675_bool = GlobalVars[0];
	if(var_675_bool != 0) {
		if(var_3_int != 0)
			var_674_bool = true;
	}
	if(var_674_bool != 0) {
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
	}
	var_679_bool = GlobalVars[0];
	var_679_bool = var_195_bool;
}


void func_643(int var_3_int)
{
	var_3_int = true;
}


void func_645(bool var_642_bool, float var_643_float)
{
	float var_646_float; bool var_647_bool;
	@rand(var_646_float);
	if(var_646_float < var_643_float) {

		for(;;) {
			@IsAnimationPlaying(var_647_bool);
			if(!var_647_bool) { //@nz
			} else {
				bool var_650_bool;
				func_743(var_650_bool);
				if(var_650_bool != 0) {
					var_642_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_642_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_847(var_647_bool);
}


void func_2190(string var_108_string)
{
	object var_112_object;
	@CreateInvItem(var_112_object);
	var_112_object->SetItemName(var_108_string);
	var_112_object->SetProperty("Organ", 1);
	int var_113_int;
	var_112_object->GetItemID(var_113_int);
	bool var_114_bool;
	@AddItem(var_114_bool, var_112_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1681(bool var_17_bool, object var_18_object)
{
	object var_22_object;
	var_18_object = var_22_object;
	bool var_21_bool;
	func_1645(var_21_bool, var_22_object);
	if(!var_21_bool) { //@nz
		var_17_bool = false;
		return 2;
	}
	bool var_39_bool; object var_40_object;
	func_1502(var_39_bool, var_40_object, "noaccess");
	if(!var_39_bool) { //@nz
		var_17_bool = true;
		return 2;
	}
	int var_20_int;
	var_40_object->GetProperty("noaccess", var_20_int);
	var_17_bool = var_20_int == 0;
}


// @pe
void func_154(float var_531_float)
{
	var_531_float = 0.15;
}


// @pe
void func_157(int var_538_int)
{
	var_538_int = 0;
}


void func_2207(void)
{
	int var_102_int;
	func_2140(var_102_int);
	if(var_102_int != 1) {
	}
	func_2190("liver");
	func_2190("kidney");
	func_2190("heart");
	func_2190("blood");
}


void func_672(bool var_0_bool, bool var_426_bool, float var_427_float)
{
	bool var_433_bool; cvector var_434_cvector; cvector var_435_cvector; cvector var_436_cvector; float var_437_float;
	
	for(;;) {
		@IsAnimationPlaying(var_433_bool);
		if(!var_433_bool) //@nz
			break;
		bool var_439_bool;
		func_743(var_439_bool);
		if(var_439_bool != 0) {
			var_426_bool = true;
			return 10;
		}
		bool var_482_bool;
		func_1681(var_482_bool, var_0_bool);
		if(!var_482_bool) { //@nz
			var_426_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_434_cvector); //@t
		@GetPFPosition(var_435_cvector);
		var_436_cvector = var_434_cvector - var_435_cvector;
		var_437_float = var_436_cvector | var_436_cvector;
		if(var_437_float < (var_427_float * var_427_float)) {
			bool var_487_bool; float var_488_float;
			var_427_float = var_488_float;
			func_506(var_436_cvector, var_437_float, var_487_bool, var_488_float);
			var_426_bool = true;
			return 10;
		}
		@sync();
	}
	func_847(var_437_float);
	var_426_bool = false;
}


void func_160(int var_595_int)
{
	var_595_int = 1;
}


// @pe
void func_162(object var_596_object, float var_597_float)
{
	bool var_598_bool = false;
	if(var_597_float > 0) {
		bool var_601_bool; object var_602_object;
		var_596_object = var_602_object;
		func_1609(var_601_bool, var_602_object);
		if(var_601_bool != 0)
			var_598_bool = true;
	}
	if(var_598_bool != 0) {
		var_618_bool = GlobalVars[0];
		GlobalVars[0] = true;
		func_643(var_597_float);
	}
}


void func_1185(void)
{
	int var_20_int; int var_21_int; bool var_22_bool; float var_23_float; bool var_24_bool;
	@WaitForAnimEnd();
	bool var_25_bool;
	func_1861(var_25_bool);
	if(!var_25_bool) //@nz
		return 14;
	int var_29_int;
	func_2088(var_29_int);
	int var_18_int;
	var_29_int = var_18_int;
	int var_19_int = 0;
	
	for(;;) {
		bool var_42_bool = false;
		if(var_19_int < 5) {
			bool var_45_bool;
			func_1861(var_45_bool);
			if(var_45_bool != 0)
				var_42_bool = true;
		}
		if(var_42_bool != 0) {
			@irand(var_20_int, 3);
			if(var_20_int == 0) {
				if(var_18_int == 0) goto Label_1232;
				@irand(var_21_int, var_18_int);
				string var_51_string; int var_52_int;
				var_21_int = var_52_int;
				func_2081(var_51_string, var_52_int);
				@PlayAnimation("all", var_51_string);
				@WaitForAnimEnd(var_22_bool);
				if(!var_22_bool) { //@nz
				} else {
			} else {
			if(var_20_int == 1) {
				@rand(var_23_float, 4);
				@Sleep((var_23_float + 1), var_24_bool);
				if(!var_24_bool) { //@nz
					goto Label_1261;
				}
			} else if(var_19_int != 0) {
				goto Label_1261;
			}
			}
					bool var_54_bool;
					func_1264(var_54_bool);
					var_55_bool = !var_54_bool; //@nz
					if(var_55_bool == 0) goto Label_1256;
			}
		}
	Label_1261:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1256:
		@ResetAAS();
		var_19_int += 1;
	}
	
}


void func_1705(bool var_105_bool, cvector var_106_cvector)
{
	cvector var_110_cvector;
	@GetPosition(var_110_cvector);
	cvector var_111_cvector = var_106_cvector - var_110_cvector;
	var_113_float = GetByIndex(var_111_cvector, 0);
	var_114_float = GetByIndex(var_111_cvector, 2);
	bool var_112_bool;
	@Rotate(var_113_float, var_114_float, var_112_bool);
	var_112_bool = var_105_bool;
}


void func_1715(bool var_101_bool, object var_102_object)
{
	cvector var_104_cvector;
	var_102_object->GetPosition(var_104_cvector);
	bool var_105_bool; cvector var_106_cvector;
	var_104_cvector = var_106_cvector;
	func_1705(var_105_bool, var_106_cvector);
	var_105_bool = var_101_bool;
}


void func_2231(void)
{
	@ClearSubContainer(0);
	func_2159(300, 750);
	func_1877("Knife", 1, 8);
	func_1877("lockpick", 1, 6);
	int var_98_int;
	func_2261(var_98_int, "grabitel_mark");
	bool var_63_bool;
	@AddItem(var_63_bool, var_98_int, 0, 1);
}


void func_1724(object var_27_object)
{
	string var_41_string;
	if(var_27_object == null)
		return 14;
	bool var_35_bool;
	@IsDead(var_35_bool);
	if(var_35_bool != 0)
		return 14;
	int var_36_int;
	@GetSecondaryAnimationType(var_36_int);
	if(var_36_int < 0)
		return 14;
	cvector var_37_cvector;
	var_27_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	@GetDirection(var_39_cvector);
	cvector var_40_cvector = var_38_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_40_cvector, 0);
	var_47_float = GetByIndex(var_39_cvector, 0);
	var_49_float = GetByIndex(var_40_cvector, 2);
	var_50_float = GetByIndex(var_39_cvector, 2);
	if(((var_46_float * var_47_float) + (var_49_float * var_50_float)) >= 0)
		var_41_string = "fhit";
	else
		var_41_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_41_string + "1"), (var_41_string + "2"), -10);
	
}


void func_203(bool var_0_bool, int var_3_int, float var_5_float, object var_204_object, bool var_205_bool, float var_206_float, bool var_275_bool, bool var_367_bool)
{
	float var_218_float; cvector var_219_cvector; cvector var_220_cvector; bool var_222_bool; float var_225_float; cvector var_226_cvector; bool var_227_bool; float var_228_float;
	func_432(var_226_cvector, var_227_bool, var_228_float);
	var_5_float = 0;
	var_253_bool = IsFuncExist(var_204_object, "@GetAttackDistance", 1);
	if(var_253_bool != 0) {
		var_204_object->GetAttackDistance(var_218_float);
		var_218_float += 50;
	} else {
						var_206_float = var_218_float;
	}
	if(var_218_float >= 150)
		var_218_float = 150;
	var_3_int = false;
	var_0_bool = var_204_object;
	bool var_221_bool;
	@IsPlayerActor(var_0_bool, var_221_bool);
	if(var_221_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_259_object;
		func_1929(var_259_object);
		@SendPlayerEnemy(var_204_object, var_259_object);
	}
	if(var_205_bool != 0)
		var_222_bool = false;
	else
		var_222_bool = true;

	
Label_243:
	for(;;) {
		bool var_262_bool = false;
		bool var_263_bool;
		func_1681(var_263_bool, var_0_bool);
		if(var_263_bool != 0) {
			if(!var_3_int) //@nz
				var_262_bool = true;
		}
		if(var_262_bool != 0) {
			func_847(var_228_float);
			var_0_bool->GetPFPosition(var_219_cvector); //@t
			@GetPFPosition(var_220_cvector);
			var_225_float = (var_219_cvector - var_220_cvector) | (var_219_cvector - var_220_cvector);
			if(var_225_float >= ((300.0 + var_218_float) * (300.0 + var_218_float))) {
				bool var_269_bool; float var_271_float;
				var_218_float = var_271_float;
				TaskCall(2);
				func_887(var_277_bool, var_269_bool, var_0_bool, var_271_float, 3000.0, true, false);
				TaskReturn();
				if(!var_275_bool) { //@nz
				} else {
					var_222_bool = false;
			} else {
			if(var_225_float >= (var_206_float * var_206_float)) {
				var_0_bool->GetPFPosition(var_226_cvector); //@t
				@CanReachByPF(var_227_bool, var_226_cvector);
				if(!var_227_bool) { //@nz
					bool var_361_bool; float var_363_float;
					var_218_float = var_363_float;
					TaskCall(2);
					func_887(var_369_bool, var_361_bool, var_0_bool, var_363_float, 3000.0, true, false);
					TaskReturn();
					if(!var_367_bool) { //@nz
						goto Label_415;
					}
					var_222_bool = false;
					goto Label_243;
				}
				if(!var_222_bool) { //@nz
					func_1850(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_847(var_228_float);
					@StopAsync();
					var_222_bool = true;
					bool var_383_bool;
					func_1681(var_383_bool, var_0_bool);
					if(!var_383_bool) { //@nz
						goto Label_415;
					}
				}
				@rand(var_228_float);
				bool var_386_bool;
				var_388_bool = var_228_float < 0.19999999;
				if(var_388_bool != 1) {
					bool var_389_bool;
					func_804(true, var_389_bool);
					if(var_389_bool != 1)
						var_386_bool = false;
				}
				if(var_386_bool != 0) {
					@Face(var_0_bool);
					func_852();
					@PlayAnimation("all", "attack_stay");
					bool var_426_bool; float var_427_float;
					func_672(var_228_float, var_426_bool, var_427_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_847(var_228_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_661_bool;
					func_804(var_228_float, var_661_bool);
					var_662_bool = !var_661_bool; //@nz
					if(var_662_bool == 0) goto Label_405;
					bool var_663_bool;
					func_1681(var_663_bool, var_0_bool);
					if(!var_663_bool) { //@nz
						goto Label_415;
					}
					var_0_bool->GetPFPosition(var_219_cvector); //@t
					@GetPFPosition(var_220_cvector);
					if(!(((var_219_cvector - var_220_cvector) | (var_219_cvector - var_220_cvector)) < (var_427_float * var_427_float))) goto Label_405;
					bool var_668_bool; float var_669_float;
					var_206_float = var_669_float;
					func_506(var_227_bool, var_228_float, var_668_bool, var_669_float);
					var_670_bool = !var_668_bool; //@nz
					if(var_670_bool == 0) goto Label_405;
					goto Label_415;
			}
				bool var_671_bool; float var_672_float;
				var_206_float = var_672_float;
				func_506(var_227_bool, var_228_float, var_671_bool, var_672_float);
				if(!var_671_bool) { //@nz
					goto Label_415;
				}
				var_222_bool = true;

			}
		Label_405:
			goto Label_414;
			}
			Label_414:
			}
		}
	Label_415:
		@WaitForAnimEnd();
		if(var_3_int != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_221_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_715(bool var_0_bool, bool var_441_bool)
{
	cvector var_447_cvector; cvector var_448_cvector;
	bool var_452_bool;
	func_1681(var_452_bool, var_0_bool);
	if(!var_452_bool) { //@nz
		var_441_bool = false;
		return 10;
	}
	bool var_455_bool;
	float var_451_float;
	func_804(var_451_float, var_455_bool);
	if(var_455_bool != 0) {
		var_0_bool->GetPFPosition(var_447_cvector); //@t
		@GetPFPosition(var_448_cvector);
		var_0_bool->GetAttackDistance(var_451_float); //@t
		var_441_bool = ((var_447_cvector - var_448_cvector) | (var_447_cvector - var_448_cvector)) <= ((var_451_float + 50) * (var_451_float + 50));
		return 10;
	}
	var_441_bool = false;
}


void func_2261(int var_77_int, string var_78_string)
{
	int var_80_int;
	@GetInvItemByName(var_80_int, var_78_string);
	var_80_int = var_77_int;
}


void func_2266(object var_11_object)
{
	object var_13_object;
	@GetScene(var_13_object);
	object var_14_object;
	func_1929(var_14_object);
	var_13_object->RemoveStationaryActor(var_14_object);
	bool var_17_bool; object var_18_object;
	var_11_object = var_18_object;
	func_1497(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		bool var_21_bool; object var_22_object;
		var_11_object = var_22_object;
		func_2000(var_21_bool, var_22_object, 0.02);
	}
	object var_59_object;
	var_11_object = var_59_object;
	TaskCall(4);
	func_1271(var_59_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_743(bool var_439_bool)
{
	bool var_440_bool = false;
	bool var_441_bool;
	func_715(var_440_bool, var_441_bool);
	if(var_441_bool != 0) {
		bool var_458_bool;
		func_759(var_439_bool, var_440_bool, var_458_bool);
		if(var_458_bool != 0)
			var_440_bool = true;
	}
	if(var_440_bool != 0) {
		var_439_bool = true;
		return 0;
	}
	var_439_bool = false;
}


void func_1768(object var_14_object, int var_15_int, float var_16_float)
{
	cvector var_26_cvector; object var_27_object; int var_28_int; bool var_29_bool; cvector var_30_cvector; cvector var_31_cvector;
	bool var_35_bool = false;
	bool var_36_bool = false;
	if(var_14_object != 0) {
		if(var_15_int != 4)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		if(var_15_int != 5)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		cvector var_42_cvector; cvector var_43_cvector;
		cvector var_44_cvector; object var_45_object;
		var_14_object = var_45_object;
		func_1482(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1935(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		@CreateVectorVector(var_27_object);
		var_28_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_28_int), var_29_bool, var_30_cvector, var_31_cvector);
			if(!var_29_bool) { //@nz
				break;
			Label_1830:
				var_27_object = null;
	}
			object var_104_object;
			var_14_object = var_104_object;
			func_1724(var_104_object);
		}
		if((var_31_cvector | var_26_cvector) >= 0.70710677)
			var_27_object->add(var_30_cvector);
		var_28_int += 1;
	}
	int var_32_int;
	var_27_object->size(var_32_int);
	if(var_32_int == 0) goto Label_1830;
	int var_33_int;
	@irand(var_33_int, var_32_int);
	cvector var_34_cvector;
	var_27_object->get(var_34_cvector, var_33_int);
	object var_59_object; int var_60_int; float var_61_float; cvector var_62_cvector; cvector var_63_cvector;
	var_14_object = var_59_object;
	var_15_int = var_60_int;
	var_16_float = var_61_float;
	var_34_cvector = var_62_cvector;
	var_63_cvector = -var_26_cvector;
	func_1836(var_61_float, var_62_cvector, var_63_cvector);
}


void func_1264(bool var_54_bool)
{
	var_54_bool = true;
}


void func_1266(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_759(bool var_0_bool, bool var_4_bool, bool var_458_bool)
{
	object var_464_object; float var_466_float; cvector var_467_cvector; cvector var_468_cvector;
	@GetScene(var_464_object);
	bool var_465_bool = false;
	
	for(;;) {
		cvector var_469_cvector;
		func_1482(var_469_cvector, var_0_bool);
		var_475_int = -var_469_cvector;
		@FindDirLength(var_466_float, var_475_int, var_4_bool);
		if(var_466_float < var_4_bool) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_467_cvector); //@t
				@GetPFPosition(var_468_cvector);
				@WaitForAnimEnd();
				func_847(var_468_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_465_bool = true;
				bool var_480_bool;
				func_715(var_468_cvector, var_480_bool);
				var_481_bool = !var_480_bool; //@nz
				if(var_481_bool == 0) goto Label_800;
		}
		for(;;) {
			var_465_bool = var_458_bool;

		}

	Label_800:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_1271(object var_59_object)
{
	func_2231();
	func_2207();
	object var_122_object;
	var_59_object = var_122_object;
	func_1283(var_122_object);
}


// @pe
void func_1283(object var_122_object)
{
	object var_123_object;
	var_122_object = var_123_object;
	func_1308(var_123_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_2329(bool var_15_bool, object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	bool var_17_bool;
	func_1681(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
}


void func_1308(object var_123_object)
{
	cvector var_134_cvector; cvector var_135_cvector; cvector var_136_cvector; cvector var_137_cvector; string var_138_string; object var_139_object; bool var_140_bool; bool var_141_bool; float var_142_float; cvector var_143_cvector;
	if(var_123_object == null) {
		func_1399("fdie");
	} else {
		var_123_object->GetPosition(var_134_cvector);
		@GetPosition(var_135_cvector);
		@GetDirection(var_136_cvector);
		var_137_cvector = var_135_cvector - var_134_cvector;
		var_177_float = GetByIndex(var_137_cvector, 0);
		var_178_float = GetByIndex(var_136_cvector, 0);
		var_180_float = GetByIndex(var_137_cvector, 2);
		var_181_float = GetByIndex(var_136_cvector, 2);
		if(((var_177_float * var_178_float) + (var_180_float * var_181_float)) >= 0)
			var_138_string = "fdie";
		else
			var_138_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_123_object = var_139_object;
		var_188_bool = IsFuncExist(var_123_object, "GetScriptProperty", 2);
		if(var_188_bool != 0) {
			var_123_object->HasScriptProperty(var_140_bool, "Owner");
			if(var_140_bool != 0) {
				var_123_object->GetScriptProperty(var_139_object, "Owner");
				if(var_139_object == null)
					var_123_object = var_139_object;
			}
		}
		var_195_bool = IsFuncExist(var_139_object, "@GetEyesHeight", 1);
		if(var_195_bool != 0) {
			var_139_object->GetEyesHeight(var_142_float);
			var_143_cvector = [0.0, 0.0, 0.0];
			var_196_float = GetByIndex(var_143_cvector, 1);
			var_142_float = var_196_float;
			SetByIndex(var_143_cvector, 1) = var_196_float;
			@LookAsync(var_123_object, "head", var_143_cvector);
			var_141_bool = true;
		} else {
			var_141_bool = false;

		}
		string var_198_string;
		var_138_string = var_198_string;
		func_1888(var_198_string);
		@PlayAnimation("all", var_138_string);
		@WaitForAnimEnd();
		if(var_141_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_138_string);
		@RemoveEnvelope();
		var_139_object = null;
	}
	
}


// @pe
void func_2336(object var_51_object)
{
	object var_52_object;
	var_51_object = var_52_object;
	func_2347(var_52_object);
}


void func_804(bool var_0_bool, bool var_389_bool)
{
	bool var_391_bool;
	var_394_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_394_bool != 0) {
		var_0_bool->IsAttacking(var_391_bool); //@t
		var_391_bool = var_389_bool;
	}
	var_389_bool = false;
}


// @pe
void func_2342(void)
{
}


// @pe
void func_2344(bool var_13_bool)
{
	var_13_bool = false;
}


void func_2347(object var_52_object)
{
	object var_54_object;
	@GetScene(var_54_object);
	object var_55_object;
	func_1929(var_55_object);
	var_54_object->RemoveStationaryActor(var_55_object);
	bool var_58_bool; object var_59_object;
	var_52_object = var_59_object;
	TaskCall(5);
	object var_53_object;
	func_1431(var_53_object, var_54_object, var_58_bool, var_59_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_1836(object var_16_object, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	@AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	object var_27_object;
	var_16_object = var_27_object;
	func_1724(var_27_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_815(int var_2_int, float var_5_float)
{
	int var_505_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_float != 0) {
		if((var_5_float + -1) > 0)
			return 4;
	}
	float var_504_float;
	@rand(var_504_float);
	float var_511_float;
	func_861(var_511_float);
	if(var_504_float < var_511_float) {
		@irand(var_505_int, var_2_int);
		@Speak("attack" + (var_505_int + 1));
		int var_516_int;
		func_859(var_516_int);
		var_5_float = var_516_int;
	}
}


void func_1850(object var_372_object)
{
	cvector var_376_cvector;
	var_372_object->GetPosition(var_376_cvector);
	cvector var_377_cvector;
	@GetPosition(var_377_cvector);
	cvector var_378_cvector = var_376_cvector - var_377_cvector;
	var_379_float = GetByIndex(var_378_cvector, 0);
	var_380_float = GetByIndex(var_378_cvector, 2);
	@RotateAsync(var_379_float, var_380_float);
}


void func_1861(bool var_25_bool)
{
	bool var_27_bool;
	@IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
}


void func_1866(object var_286_object)
{
	float var_289_float;
	var_286_object->GetEyesHeight(var_289_float);
	cvector var_290_cvector = [0.0, 0.0, 0.0];
	var_291_float = GetByIndex(var_290_cvector, 1);
	var_289_float = var_291_float;
	SetByIndex(var_290_cvector, 1) = var_291_float;
	@LookAsync(var_286_object, "head", var_290_cvector);
}


void func_847(bool var_0_bool)
{
	func_2055(var_0_bool);
}


void func_852(void)
{
	func_1888("attack_stay");
}


void func_1877(string var_84_string, int var_85_int, int var_86_int)
{
	bool var_88_bool;
	int var_90_int;
	var_85_int = var_90_int;
	int var_91_int;
	var_86_int = var_91_int;
	bool var_89_bool;
	func_1995(var_89_bool, var_90_int, var_91_int);
	if(var_89_bool != 0)
		@AddItem(var_88_bool, var_84_string, 0);
}


void func_857(bool var_641_bool)
{
	var_641_bool = true;
}


void func_859(int var_516_int)
{
	var_516_int = 1;
}


void func_861(float var_511_float)
{
	var_511_float = 0.5;
}


void func_1888(string var_146_string)
{
	bool var_155_bool; int var_156_int; bool var_157_bool; int var_158_int; bool var_159_bool; float var_160_float; cvector var_161_cvector; cvector var_162_cvector;
	@IsExisting3DSound(var_155_bool, var_146_string);
	if(!var_155_bool) { //@nz
		var_156_int = 0;

		for(;;) {
			@IsExisting3DSound(var_157_bool, (var_146_string + (var_156_int + 1)));
			if(!var_157_bool) { //@nz
				break;
			Label_1908:
				@irand(var_158_int, var_156_int);
				var_146_string += (var_158_int + 1);
	}
			@Is3DSoundLoaded(var_159_bool, var_146_string);
			if(var_159_bool != 0) {
				@GetEyesHeight(var_160_float);
				@GetDirection(var_161_cvector);
				var_162_cvector = var_161_cvector * 50;
				var_173_float = GetByIndex(var_162_cvector, 1);
				SetByIndex(var_162_cvector, 1) = (var_173_float + var_160_float);
				@PlayGlobalSound(var_146_string, var_162_cvector);
			}
		}
		var_156_int += 1;
	}
	var_168_bool = !var_156_int; //@nz
	if(var_168_bool == 0) goto Label_1908;
}


void func_887(int var_2_int, bool var_269_bool, object var_270_object, float var_271_float, float var_272_float, bool var_273_bool, bool var_274_bool)
{
	object var_282_object;
	func_2055(var_282_object);
	@SetTimer(1, 5);
	bool var_280_bool;
	@CanSee(var_280_bool, var_282_object);
	if(var_280_bool != 0) {
		var_2_int = true;
		object var_286_object;
		var_270_object = var_286_object;
		func_1866(var_286_object);
	} else {
		var_2_int = false;
	}
	bool var_293_bool; object var_294_object;
	func_1497(var_293_bool, var_294_object);
	if(var_293_bool != 0) {
		object var_297_object;
		func_1929(var_297_object);
		@SendPlayerEnemy(var_294_object, var_297_object);
	}
	bool var_298_bool; object var_299_object; float var_300_float; float var_301_float; bool var_302_bool; bool var_303_bool;
	var_270_object = var_299_object;
	var_271_float = var_300_float;
	var_272_float = var_301_float;
	var_273_bool = var_302_bool;
	var_274_bool = var_303_bool;
	bool var_281_bool;
	func_992(var_280_bool, var_281_bool, var_298_bool, var_299_object, var_300_float, var_301_float, var_302_bool, var_303_bool);
	var_298_bool = var_281_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_281_bool = var_269_bool;
	
}


// @pe
void func_1399(string var_145_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_146_string;
	var_145_string = var_146_string;
	func_1888(var_146_string);
	@PlayAnimation("all", var_145_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_145_string);
	@RemoveEnvelope();
}


void func_1929(object var_14_object)
{
	object var_16_object;
	@self(var_16_object);
	var_16_object = var_14_object;
}
EMIT "Stack[-1] = 0";


void func_1935(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_51_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_51_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_51_float;
}


void func_1431(bool var_58_bool, object var_59_object, bool var_81_bool, object var_682_object)
{
	object var_63_object;
	var_59_object = var_63_object;
	bool var_62_bool;
	func_1681(var_62_bool, var_63_object);
	if(!var_62_bool) { //@nz
		var_58_bool = false;
		return 2;
	}
	float var_65_float; object var_66_object;
	var_59_object = var_66_object;
	func_1489(var_65_float, var_66_object);
	float var_61_float;
	var_65_float = var_61_float;
	bool var_73_bool; float var_74_float;
	func_1987(var_73_bool, var_74_float, 250000.0, 3240000.0);
	if(var_73_bool != 0) {
		bool var_79_bool; object var_80_object;
		var_59_object = var_80_object;
		TaskCall(0);
		func_0(var_74_float, var_81_bool, var_79_bool, var_80_object);
		TaskReturn();
		var_81_bool = var_58_bool;
		return 2;
	}
	bool var_680_bool; object var_681_object;
	var_59_object = var_681_object;
	TaskCall(1);
	func_126(var_680_bool, var_681_object);
	TaskReturn();
	var_682_object = var_58_bool;
}


// @pe
void func_1945(float var_572_float, float var_573_float, float var_574_float)
{
	if(var_573_float < var_574_float)
		var_573_float = var_572_float;
	else
		var_574_float = var_572_float;
	
}


// @pe
void func_1952(float var_159_float, float var_160_float, float var_161_float, float var_162_float)
{
	var_159_float = (var_161_float * var_161_float) - ((4 * var_160_float) * var_162_float);
}


void func_1959(float var_173_float, float var_174_float, float var_175_float, float var_177_float)
{
	float var_179_float;
	var_180_int = -var_175_float;
	if(((var_180_int - var_177_float) / (2 * var_174_float)) > 0) {
		var_179_float = var_173_float;
		return 2;
	}
	var_186_int = -var_175_float;
	var_173_float = (var_186_int + var_177_float) / (2 * var_174_float);
}


void func_432(object var_1_object, int var_2_int, bool var_4_bool)
{
	bool var_232_bool; bool var_233_bool; cvector var_234_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_232_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_232_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_233_bool, ("attack" + (var_2_int + 1)));
			if(!var_233_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_234_cvector, "all", "bjump");
		var_248_float = GetByIndex(var_234_cvector, 2);
		var_4_bool = -var_248_float;

	}
}


void func_950(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_1116(var_10_object);
}


// @pe
void func_1976(float var_50_float, float var_51_float, float var_52_float, float var_53_float)
{
	if(var_51_float < var_52_float) {
		var_52_float = var_50_float;
		return 0;
	}
	if(var_51_float > var_53_float) {
		var_53_float = var_50_float;
		return 0;
	}
	var_51_float = var_50_float;
}


// @pe
void func_1468(string var_562_string, int var_563_int)
{
	if(var_563_int == 2) {
		var_562_string = "fire";
		return 0;
	EMIT "GOTO 0x5c8";
	}
	if(var_563_int == 1) {
		var_562_string = "bullet";
		return 0;
	}
	var_562_string = "phys";
}


// @pe
void func_1987(bool var_73_bool, float var_74_float, float var_75_float, float var_76_float)
{
	var_73_bool = false;
	if(var_74_float >= var_75_float) {
		if(var_74_float <= var_76_float)
			var_73_bool = true;
	}
}


void func_1482(cvector var_44_cvector, object var_45_object)
{
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	var_45_object->GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
}


void func_1995(bool var_89_bool, int var_90_int, int var_91_int)
{
	int var_93_int;
	@irand(var_93_int, var_91_int);
	var_89_bool = var_93_int < var_90_int;
}


// @pe
void func_2000(bool var_21_bool, object var_22_object, float var_23_float)
{
	if(!var_22_object) { //@nz
		var_21_bool = false;
		return 0;
	}
	if(var_23_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_23_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_28_float;
		var_23_float = var_28_float;
		func_2045(var_28_float);
		bool var_32_bool; object var_33_object; float var_35_float;
		var_22_object = var_33_object;
		var_23_float = var_35_float;
		func_1514(var_32_bool, var_33_object, "reputation", var_35_float, (float)0, (float)1);
		var_21_bool = true;
		return 0;

	}
	
	var_21_bool = false;
}


void func_1489(float var_65_float, object var_66_object)
{
	cvector var_70_cvector;
	@GetPosition(var_70_cvector);
	cvector var_71_cvector;
	var_66_object->GetPosition(var_71_cvector);
	var_65_float = (var_71_cvector - var_70_cvector) | (var_71_cvector - var_70_cvector);
}


void func_467(bool var_0_bool, float var_520_float, int var_521_int)
{
	object var_525_object; float var_526_float; float var_527_float;
	@GetVictim((var_520_float * 0.9), var_525_object);
	@ReportAttack(var_0_bool);
	if(var_525_object == var_0_bool) {
		float var_531_float; object var_532_object; int var_533_int;
		var_525_object = var_532_object;
		var_521_int = var_533_int;
		func_154(var_533_int);
		var_531_float = var_526_float;
		float var_534_float; object var_535_object; float var_536_float; int var_537_int;
		var_525_object = var_535_object;
		int var_538_int; object var_539_object; int var_540_int;
		var_525_object = var_539_object;
		var_521_int = var_540_int;
		func_157(var_540_int);
		var_538_int = var_537_int;
		func_1536(var_534_float, var_535_object, var_536_float, var_537_int);
		var_534_float = var_527_float;
		int var_595_int;
		func_160(var_595_int);
		@ReportHit(var_0_bool, var_595_int, var_527_float, var_536_float);
		object var_596_object; float var_597_float;
		var_525_object = var_596_object;
		var_527_float = var_597_float;
		func_162(var_596_object, var_597_float);
	}
}
EMIT "Stack[-3] = 0";


void func_1497(bool var_17_bool, object var_18_object)
{
	bool var_20_bool;
	@IsPlayerActor(var_18_object, var_20_bool);
	var_20_bool = var_17_bool;
}


void func_1502(bool var_40_bool, object var_41_object, string var_42_string)
{
	var_47_bool = IsFuncExist(var_41_object, "HasProperty", 2);
	if(!var_47_bool) { //@nz
		var_40_bool = false;
		return 2;
	}
	bool var_44_bool;
	var_41_object->HasProperty(var_42_string, var_44_bool);
	var_44_bool = var_40_bool;
}


void func_992(bool var_0_bool, object var_1_object, bool var_298_bool, object var_299_object, float var_300_float, float var_301_float, bool var_302_bool, bool var_303_bool)
{
	bool var_312_bool; object var_314_object; cvector var_315_cvector; cvector var_316_cvector; float var_318_float; object var_319_object;
	var_0_bool = false;
	var_1_object = var_299_object;
	bool var_313_bool;
	var_303_bool = var_313_bool;
	
	for(;;) {
		bool var_320_bool; object var_321_object;
		var_299_object = var_321_object;
		func_1132(var_320_bool, var_321_object);
		if(!var_320_bool) { //@nz
			var_298_bool = false;
			return 16;
		}
		var_299_object->GetPosition(var_315_cvector);
		@GetPosition(var_316_cvector);
		var_318_float = (var_315_cvector - var_316_cvector) | (var_315_cvector - var_316_cvector);
		bool var_325_bool = false;
		if(var_301_float > 0) {
			if(var_318_float > (var_301_float * var_301_float))
				var_325_bool = true;
		}
		if(var_325_bool != 0) {
			@Stop();
			var_298_bool = false;
			return 16;
		}
		if(var_318_float > (var_300_float * var_300_float)) {
			var_299_object->GetPFPosition(var_315_cvector);
			@FindPathTo(var_319_object, var_315_cvector);
			if(var_319_object != null) {
				var_319_object = var_314_object;
				var_319_object = null;
			}
			if(var_314_object != null) {
				if(var_313_bool == 0) goto Label_1045;
				var_313_bool = false;
				@RotatePath(var_314_object, var_312_bool);
				if(!var_312_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_338_string;
						func_1139(var_338_string);
						string var_339_string;
						func_1141(var_339_string);
						@FollowPath(var_314_object, var_302_bool, var_312_bool, var_338_string, var_339_string);
						if(!var_312_bool) { //@nz
							if(var_0_bool == 0) goto Label_1064;
							var_314_object = null;
						}
					EMIT "GOTO 0x429";

					Label_1064:
						} else {
					var_314_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_312_bool);
					if(!var_312_bool) { //@nz
						if(var_0_bool != 0) {
							var_314_object = null;
							goto Label_1092;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1092;
		}
			var_319_object = null;
			goto Label_1090;

		Label_1090:
			var_314_object = null;

		}
	Label_1092:
		for(;;) {
			var_298_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1514(bool var_32_bool, object var_33_object, string var_34_string, float var_35_float, float var_36_float, float var_37_float)
{
	object var_41_object;
	var_33_object = var_41_object;
	string var_42_string;
	var_34_string = var_42_string;
	bool var_40_bool;
	func_1502(var_40_bool, var_41_object, var_42_string);
	if(!var_40_bool) //@nz
		var_32_bool = false;
	float var_39_float;
	var_33_object->GetProperty(var_34_string, var_39_float);
	float var_50_float; float var_52_float; float var_53_float;
	var_36_float = var_52_float;
	var_37_float = var_53_float;
	func_1976(var_50_float, (var_39_float + var_35_float), var_52_float, var_53_float);
	var_33_object->SetProperty(var_34_string, var_50_float);
	var_32_bool = true;
}


void func_2035(float var_590_float)
{
	object var_592_object;
	@CreateFloatVector(var_592_object);
	var_592_object->add(var_590_float);
	@SendWorldWndMessage(15, var_592_object);
}
EMIT "Stack[-1] = 0";


void func_506(bool var_0_bool, object var_1_object, bool var_487_bool, float var_488_float)
{
	string var_496_string;
	func_847(var_496_string);
	int var_493_int;
	@irand(var_493_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_2064();
	@PlayAnimation("all", ("attack_begin" + (var_493_int + 1)));
	@WaitForAnimEnd();
	int var_495_int;
	func_815(var_495_int, var_496_string);
	bool var_517_bool;
	func_1681(var_517_bool, var_0_bool);
	if(!var_517_bool) { //@nz
		@StopAsync();
		var_487_bool = false;
		return 8;
	}
	float var_520_float; int var_521_int;
	var_488_float = var_520_float;
	var_493_int = var_521_int;
	func_467(var_496_string, var_520_float, var_521_int);
	bool var_494_bool;
	@HasAnimation(var_494_bool, "all", ("attack_middle" + var_493_int));
	if(var_494_bool != 0) {
		func_2064();
		@PlayAnimation("all", ("attack_middle" + var_493_int));
		@WaitForAnimEnd();
		func_847(var_496_string);
		bool var_626_bool;
		func_1681(var_626_bool, var_0_bool);
		if(!var_626_bool) { //@nz
			@StopAsync();
			var_487_bool = false;
			return 8;
		}
		float var_629_float; int var_630_int;
		var_488_float = var_629_float;
		func_467(var_496_string, var_629_float, var_630_int);
		var_495_int = 1;

		for(;;) {
			var_496_string = (("attack_middle" + var_630_int) + "_") + var_495_int;
			@HasAnimation(var_494_bool, "all", var_496_string);
			if(!var_494_bool) { //@nz
			} else {
				func_2064();
				@PlayAnimation("all", var_496_string);
				@WaitForAnimEnd();
				func_847(var_496_string);
				bool var_652_bool;
				func_1681(var_652_bool, var_0_bool);
				if(!var_652_bool) { //@nz
					@StopAsync();
					var_487_bool = false;
					return 8;
				}
				float var_655_float; int var_656_int;
				var_488_float = var_655_float;
				var_493_int = var_656_int;
				func_467(var_496_string, var_655_float, var_656_int);
				var_495_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_493_int));
		bool var_641_bool;
		func_857(var_641_bool);
		if(var_641_bool != 0) {
			bool var_642_bool;
			func_645(var_642_bool, 0.45);
			@StopAsync();
		}
		var_487_bool = true;
		return 8;

	}
}


void func_2045(float var_28_float)
{
	object var_30_object;
	@CreateFloatVector(var_30_object);
	var_30_object->add(var_28_float);
	@SendWorldWndMessage(16, var_30_object);
}
EMIT "Stack[-1] = 0";


