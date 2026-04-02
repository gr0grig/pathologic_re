// @GLOBALS: 0:object:

task task_0
{
	void OnUse(object actor, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		bool var_14_bool;
		@IsOverrideActive(var_14_bool);
		if(!var_14_bool) { //@nz
			object var_16_object;
			var_12_bool = var_16_object;
			func_2031(var_16_object);
		}
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, object var_5_object, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, bool var_14_bool, bool var_15_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, bool var_12_bool, bool var_13_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
	}

}


task task_1
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		object var_13_object;
		var_12_bool = var_13_object;
		func_2313(var_13_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, int var_3_int, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		if(var_12_bool == 1) {
			func_2005(var_1_object);
		} else {
			int var_20_int;
			func_373(var_11_bool, var_20_int, var_20_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		bool var_13_bool = false;
		if(var_1_object == var_12_bool) {
			if(!var_2_bool) //@nz
				var_13_bool = true;
		}
		if(var_13_bool != 0) {
			var_2_bool = true;
			object var_16_object;
			var_12_bool = var_16_object;
			func_1829(var_16_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		bool var_13_bool = false;
		if(var_1_object == var_12_bool) {
			if(var_2_bool != 0)
				var_13_bool = true;
		}
		if(var_13_bool != 0) {
			var_2_bool = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		@RequestClearPath(var_12_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		func_229(var_12_bool);
		object var_17_object;
		var_12_bool = var_17_object;
		func_2212();
	}

}


task task_2
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool)
	{
		object var_13_object;
		var_12_bool = var_13_object;
		func_2313(var_13_object);
	}

}


maintask task_3
{
	// @pe
	void init(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		func_2242();
	
		for(;;) {
			func_1260(var_10_bool, var_11_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		bool var_13_bool; object var_14_object;
		func_2289(var_13_bool, var_14_object);
		if(var_13_bool != 0) {
			func_1331(var_11_bool, var_14_object);
			object var_23_object;
			var_12_object = var_23_object;
			func_2296(var_23_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		bool var_13_bool; object var_14_object;
		func_2261(var_13_bool, var_14_object);
		if(var_13_bool != 0) {
			func_1331(var_11_bool, var_14_object);
			object var_37_object;
			var_12_object = var_37_object;
			func_2283(var_37_object);
		}
	}

	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		object var_14_object;
		var_12_object = var_14_object;
		bool var_13_bool;
		func_1663(var_13_bool, var_14_object);
		if(!var_13_bool) { //@nz
			object var_48_object;
			var_12_object = var_48_object;
			func_2313(var_48_object);
		}
		func_1331(var_11_bool, var_12_object);
		object var_55_object;
		var_12_object = var_55_object;
		func_2326(var_55_object);
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		@RequestClearPath(var_12_object);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		@Stop();
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_1331(var_11_bool, var_12_object);
		object var_13_object;
		var_12_object = var_13_object;
		func_2212();
	}

}


task task_4
{
	// @pe
	void OnSee(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		object var_14_object;
		var_12_object = var_14_object;
		bool var_13_bool;
		func_2289(var_13_bool, var_14_object);
		if(var_13_bool != 0) {
			func_1484();
			object var_23_object;
			var_12_object = var_23_object;
			func_2296(var_23_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		object var_14_object;
		var_12_object = var_14_object;
		bool var_13_bool;
		func_2261(var_13_bool, var_14_object);
		if(var_13_bool != 0) {
			func_1484();
			object var_37_object;
			var_12_object = var_37_object;
			func_2283(var_37_object);
		}
	}

	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		object var_14_object;
		var_12_object = var_14_object;
		bool var_13_bool;
		func_1663(var_13_bool, var_14_object);
		if(!var_13_bool) { //@nz
			object var_48_object;
			var_12_object = var_48_object;
			func_2313(var_48_object);
		}
		func_1484();
		object var_55_object;
		var_12_object = var_55_object;
		func_2326(var_55_object);
	}

}


// @pe
void OnHit(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, float var_14_float, float var_15_float)
{
	object var_16_object;
	var_12_object = var_16_object;
	int var_17_int;
	var_13_int = var_17_int;
	float var_18_float;
	var_14_float = var_18_float;
	func_1731(var_16_object, var_17_int, var_18_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, float var_14_float, float var_15_float, cvector var_16_cvector, cvector var_17_cvector)
{
	object var_18_object;
	var_12_object = var_18_object;
	int var_19_int;
	var_13_int = var_19_int;
	float var_20_float;
	var_14_float = var_20_float;
	cvector var_21_cvector;
	var_16_cvector = var_21_cvector;
	cvector var_22_cvector;
	var_17_cvector = var_22_cvector;
	func_1799(var_20_float, var_21_cvector, var_22_cvector);
}


void OnPropertyChange(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object, string var_13_string)
{
	float var_15_float;
	if(var_13_string == "health") {
		@GetProperty("health", var_15_float);
		if(var_15_float <= 0)
			@SignalDeath(var_12_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_2163(var_13_object);
}


// @pe
void func_0(object var_56_object)
{
	func_2116();
	func_2092();
	object var_125_object;
	var_56_object = var_125_object;
	func_12(var_125_object);
}


// @pe
void func_12(object var_125_object)
{
	object var_126_object;
	var_125_object = var_126_object;
	func_37(var_126_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1549(float var_406_float, object var_407_object, float var_408_float, int var_409_int)
{
	int var_419_int; int var_421_int;
	object var_426_object;
	var_407_object = var_426_object;
	bool var_425_bool;
	func_1515(var_425_bool, var_426_object, "health");
	if(!var_425_bool) //@nz
		var_406_float = 0.0;
	bool var_429_bool; object var_430_object;
	func_1515(var_429_bool, var_430_object, "armor");
	if(!var_429_bool) //@nz
		var_419_int = 0;
	else
		var_430_object->GetProperty("armor", var_419_int);
	string var_434_string; int var_435_int;
	var_409_int = var_435_int;
	func_1489(var_434_string, var_435_int);
	string var_420_string = "armor_" + var_434_string;
	bool var_440_bool; object var_441_object; string var_442_string;
	var_407_object = var_441_object;
	func_1515(var_440_bool, var_441_object, var_442_string);
	if(!var_440_bool) //@nz
		var_421_int = 0;
	else
		var_407_object->GetProperty(var_442_string, var_421_int);

	float var_444_float;
	func_1908(var_444_float, ((var_419_int + var_421_int) / 100.0), (float)1);
	float var_422_float;
	var_444_float = var_422_float;
	float var_423_float;
	var_407_object->GetProperty("health", var_423_float);
	float var_424_float = var_408_float * (1 - var_422_float);
	float var_454_float;
	func_1923(var_454_float, (var_423_float - var_424_float), (float)0, (float)1);
	var_407_object->SetProperty("health", var_454_float);
	bool var_460_bool; object var_461_object;
	var_407_object = var_461_object;
	func_1510(var_460_bool, var_461_object);
	if(var_460_bool != 0) {
		float var_462_float = -var_424_float;
		func_1985(var_462_float);
	}
	var_424_float = var_406_float;
	
}


void func_2075(string var_111_string)
{
	object var_115_object;
	@CreateInvItem(var_115_object);
	var_115_object->SetItemName(var_111_string);
	var_115_object->SetProperty("Organ", 1);
	int var_116_int;
	var_115_object->GetItemID(var_116_int);
	bool var_117_bool;
	@AddItem(var_117_bool, var_115_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1054(bool var_0_bool, bool var_309_bool)
{
	cvector var_315_cvector; cvector var_316_cvector;
	bool var_320_bool;
	func_1663(var_320_bool, var_0_bool);
	if(!var_320_bool) { //@nz
		var_309_bool = false;
		return 10;
	}
	bool var_323_bool;
	float var_319_float;
	func_1143(var_319_float, var_323_bool);
	if(var_323_bool != 0) {
		var_0_bool->GetPFPosition(var_315_cvector); //@t
		@GetPFPosition(var_316_cvector);
		var_0_bool->GetAttackDistance(var_319_float); //@t
		var_309_bool = ((var_315_cvector - var_316_cvector) | (var_315_cvector - var_316_cvector)) <= ((var_319_float + 50) * (var_319_float + 50));
		return 10;
	}
	var_309_bool = false;
}


void func_544(bool var_0_bool, object var_3_object, int var_5_int, object var_66_object, bool var_67_bool, float var_68_float, bool var_143_bool, bool var_235_bool)
{
	float var_80_float; cvector var_81_cvector; cvector var_82_cvector; bool var_84_bool; float var_87_float; cvector var_88_cvector; bool var_89_bool; float var_90_float;
	func_773(var_88_cvector, var_89_bool, var_90_float);
	var_5_int = 0;
	var_115_bool = IsFuncExist(var_66_object, "@GetAttackDistance", 1);
	if(var_115_bool != 0) {
		var_66_object->GetAttackDistance(var_80_float);
		var_80_float += 50;
	} else {
						var_68_float = var_80_float;
	}
	if(var_80_float >= 150)
		var_80_float = 150;
	var_3_object = false;
	var_0_bool = var_66_object;
	bool var_83_bool;
	@IsPlayerActor(var_0_bool, var_83_bool);
	if(var_83_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_121_object;
		func_1892(var_121_object);
		@SendPlayerEnemy(var_66_object, var_121_object);
	}
	if(var_67_bool != 0)
		var_84_bool = false;
	else
		var_84_bool = true;

	
Label_584:
	for(;;) {
		bool var_126_bool = false;
		bool var_127_bool;
		func_1663(var_127_bool, var_0_bool);
		if(var_127_bool != 0) {
			if(!var_3_object) //@nz
				var_126_bool = true;
		}
		if(var_126_bool != 0) {
			func_1186(var_90_float);
			var_0_bool->GetPFPosition(var_81_cvector); //@t
			@GetPFPosition(var_82_cvector);
			var_87_float = (var_81_cvector - var_82_cvector) | (var_81_cvector - var_82_cvector);
			if(var_87_float >= ((300.0 + var_80_float) * (300.0 + var_80_float))) {
				bool var_137_bool; float var_139_float;
				var_80_float = var_139_float;
				TaskCall(1);
				func_166(var_145_bool, var_137_bool, var_0_bool, var_139_float, 3000.0, true, false);
				TaskReturn();
				if(!var_143_bool) { //@nz
				} else {
					var_84_bool = false;
			} else {
			if(var_87_float >= (var_68_float * var_68_float)) {
				var_0_bool->GetPFPosition(var_88_cvector); //@t
				@CanReachByPF(var_89_bool, var_88_cvector);
				if(!var_89_bool) { //@nz
					bool var_229_bool; float var_231_float;
					var_80_float = var_231_float;
					TaskCall(1);
					func_166(var_237_bool, var_229_bool, var_0_bool, var_231_float, 3000.0, true, false);
					TaskReturn();
					if(!var_235_bool) { //@nz
						goto Label_756;
					}
					var_84_bool = false;
					goto Label_584;
				}
				if(!var_84_bool) { //@nz
					func_1813(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1186(var_90_float);
					@StopAsync();
					var_84_bool = true;
					bool var_251_bool;
					func_1663(var_251_bool, var_0_bool);
					if(!var_251_bool) { //@nz
						goto Label_756;
					}
				}
				@rand(var_90_float);
				bool var_254_bool;
				var_256_bool = var_90_float < 0.6;
				if(var_256_bool != 1) {
					bool var_257_bool;
					func_1143(true, var_257_bool);
					if(var_257_bool != 1)
						var_254_bool = false;
				}
				if(var_254_bool != 0) {
					@Face(var_0_bool);
					func_1193();
					@PlayAnimation("all", "attack_stay");
					bool var_294_bool; float var_295_float;
					func_1011(var_90_float, var_294_bool, var_295_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1186(var_90_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_584_bool;
					func_1143(var_90_float, var_584_bool);
					var_585_bool = !var_584_bool; //@nz
					if(var_585_bool == 0) goto Label_746;
					bool var_586_bool;
					func_1663(var_586_bool, var_0_bool);
					if(!var_586_bool) { //@nz
						goto Label_756;
					}
					var_0_bool->GetPFPosition(var_81_cvector); //@t
					@GetPFPosition(var_82_cvector);
					if(!(((var_81_cvector - var_82_cvector) | (var_81_cvector - var_82_cvector)) < (var_295_float * var_295_float))) goto Label_746;
					bool var_591_bool; float var_592_float;
					var_68_float = var_592_float;
					func_847(var_89_bool, var_90_float, var_591_bool, var_592_float);
					var_593_bool = !var_591_bool; //@nz
					if(var_593_bool == 0) goto Label_746;
					goto Label_756;
			}
				bool var_594_bool; float var_595_float;
				var_68_float = var_595_float;
				func_847(var_89_bool, var_90_float, var_594_bool, var_595_float);
				if(!var_594_bool) { //@nz
					goto Label_756;
				}
				var_84_bool = true;

			}
		Label_746:
			goto Label_755;
			}
			Label_755:
			}
		}
	Label_756:
		@WaitForAnimEnd();
		if(var_3_object != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_83_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_37(object var_126_object)
{
	cvector var_137_cvector; cvector var_138_cvector; cvector var_139_cvector; cvector var_140_cvector; string var_141_string; object var_142_object; bool var_143_bool; bool var_144_bool; float var_145_float; cvector var_146_cvector;
	if(var_126_object == null) {
		func_128("fdie");
	} else {
		var_126_object->GetPosition(var_137_cvector);
		@GetPosition(var_138_cvector);
		@GetDirection(var_139_cvector);
		var_140_cvector = var_138_cvector - var_137_cvector;
		var_180_float = GetByIndex(var_140_cvector, 0);
		var_181_float = GetByIndex(var_139_cvector, 0);
		var_183_float = GetByIndex(var_140_cvector, 2);
		var_184_float = GetByIndex(var_139_cvector, 2);
		if(((var_180_float * var_181_float) + (var_183_float * var_184_float)) >= 0)
			var_141_string = "fdie";
		else
			var_141_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_126_object = var_142_object;
		var_191_bool = IsFuncExist(var_126_object, "GetScriptProperty", 2);
		if(var_191_bool != 0) {
			var_126_object->HasScriptProperty(var_143_bool, "Owner");
			if(var_143_bool != 0) {
				var_126_object->GetScriptProperty(var_142_object, "Owner");
				if(var_142_object == null)
					var_126_object = var_142_object;
			}
		}
		var_198_bool = IsFuncExist(var_142_object, "@GetEyesHeight", 1);
		if(var_198_bool != 0) {
			var_142_object->GetEyesHeight(var_145_float);
			var_146_cvector = [0.0, 0.0, 0.0];
			var_199_float = GetByIndex(var_146_cvector, 1);
			var_145_float = var_199_float;
			SetByIndex(var_146_cvector, 1) = var_199_float;
			@LookAsync(var_126_object, "head", var_146_cvector);
			var_144_bool = true;
		} else {
			var_144_bool = false;

		}
		string var_201_string;
		var_141_string = var_201_string;
		func_1851(var_201_string);
		@PlayAnimation("all", var_141_string);
		@WaitForAnimEnd();
		if(var_144_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_141_string);
		@RemoveEnvelope();
		var_142_object = null;
	}
	
}


void func_2092(void)
{
	int var_105_int;
	func_2025(var_105_int);
	if(var_105_int != 1) {
	}
	func_2075("liver");
	func_2075("kidney");
	func_2075("heart");
	func_2075("blood");
}


void func_1082(bool var_307_bool)
{
	bool var_308_bool = false;
	bool var_309_bool;
	func_1054(var_308_bool, var_309_bool);
	if(var_309_bool != 0) {
		bool var_326_bool;
		func_1098(var_307_bool, var_308_bool, var_326_bool);
		if(var_326_bool != 0)
			var_308_bool = true;
	}
	if(var_308_bool != 0) {
		var_307_bool = true;
		return 0;
	}
	var_307_bool = false;
}


void func_2116(void)
{
	@ClearSubContainer(0);
	func_2044(200, 500);
	func_1840("revolver_ammo", 1, 80);
	func_1840("samopal_ammo", 1, 80);
	func_1840("rifle_ammo", 1, 80);
	func_1840("lockpick", 1, 80);
	int var_101_int;
	func_2158(var_101_int, "hunter_mark");
	bool var_60_bool;
	@AddItem(var_60_bool, var_101_int, 0, 1);
}


void func_1098(bool var_0_bool, int var_4_int, bool var_326_bool)
{
	object var_332_object; float var_334_float; cvector var_335_cvector; cvector var_336_cvector;
	@GetScene(var_332_object);
	bool var_333_bool = false;
	
	for(;;) {
		cvector var_337_cvector;
		func_1503(var_337_cvector, var_0_bool);
		var_343_int = -var_337_cvector;
		@FindDirLength(var_334_float, var_343_int, var_4_int);
		if(var_334_float < var_4_int) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_335_cvector); //@t
				@GetPFPosition(var_336_cvector);
				@WaitForAnimEnd();
				func_1186(var_336_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_333_bool = true;
				bool var_348_bool;
				func_1054(var_336_cvector, var_348_bool);
				var_349_bool = !var_348_bool; //@nz
				if(var_349_bool == 0) goto Label_1139;
		}
		for(;;) {
			var_333_bool = var_326_bool;

		}

	Label_1139:
	}
}
EMIT "Stack[-5] = 0";


void func_1622(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	var_29_object->IsDead(var_31_bool);
	var_31_bool = var_28_bool;
}


void func_1627(bool var_17_bool, object var_18_object)
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
		func_1622(var_28_bool, var_29_object);
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


void func_2158(int var_74_int, string var_75_string)
{
	int var_77_int;
	@GetInvItemByName(var_77_int, var_75_string);
	var_77_int = var_74_int;
}


// @pe
void func_2163(object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_1510(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		bool var_18_bool; object var_19_object;
		var_13_object = var_19_object;
		func_1950(var_18_bool, var_19_object, 0.05);
	}
	object var_56_object;
	var_13_object = var_56_object;
	TaskCall(0);
	func_0(var_56_object);
	TaskReturn();
}


void func_1143(bool var_0_bool, bool var_257_bool)
{
	bool var_259_bool;
	var_262_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_262_bool != 0) {
		var_0_bool->IsAttacking(var_259_bool); //@t
		var_259_bool = var_257_bool;
	}
	var_257_bool = false;
}


void func_1663(bool var_13_bool, object var_14_object)
{
	object var_18_object;
	var_14_object = var_18_object;
	bool var_17_bool;
	func_1627(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_13_bool = false;
		return 2;
	}
	bool var_35_bool; object var_36_object;
	func_1515(var_35_bool, var_36_object, "noaccess");
	if(!var_35_bool) { //@nz
		var_13_bool = true;
		return 2;
	}
	int var_16_int;
	var_36_object->GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == 0;
}


// @pe
void func_128(string var_148_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_149_string;
	var_148_string = var_149_string;
	func_1851(var_149_string);
	@PlayAnimation("all", var_148_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_148_string);
	@RemoveEnvelope();
}


void func_1154(bool var_2_bool, int var_5_int)
{
	int var_377_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_376_float;
	@rand(var_376_float);
	float var_383_float;
	func_1202(var_383_float);
	if(var_376_float < var_383_float) {
		@irand(var_377_int, var_2_bool);
		@Speak("attack" + (var_377_int + 1));
		int var_388_int;
		func_1200(var_388_int);
		var_5_int = var_388_int;
	}
}


void func_1687(object var_29_object)
{
	string var_43_string;
	if(var_29_object == null)
		return 14;
	bool var_37_bool;
	@IsDead(var_37_bool);
	if(var_37_bool != 0)
		return 14;
	int var_38_int;
	@GetSecondaryAnimationType(var_38_int);
	if(var_38_int < 0)
		return 14;
	cvector var_39_cvector;
	var_29_object->GetPosition(var_39_cvector);
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	cvector var_41_cvector;
	@GetDirection(var_41_cvector);
	cvector var_42_cvector = var_40_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_42_cvector, 0);
	var_49_float = GetByIndex(var_41_cvector, 0);
	var_51_float = GetByIndex(var_42_cvector, 2);
	var_52_float = GetByIndex(var_41_cvector, 2);
	if(((var_48_float * var_49_float) + (var_51_float * var_52_float)) >= 0)
		var_43_string = "fhit";
	else
		var_43_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_43_string + "1"), (var_43_string + "2"), -10);
	
}


void func_1186(bool var_0_bool)
{
	func_2005(var_0_bool);
}


void func_166(bool var_2_bool, bool var_137_bool, object var_138_object, float var_139_float, float var_140_float, bool var_141_bool, bool var_142_bool)
{
	object var_150_object;
	func_2005(var_150_object);
	@SetTimer(1, 5);
	bool var_148_bool;
	@CanSee(var_148_bool, var_150_object);
	if(var_148_bool != 0) {
		var_2_bool = true;
		object var_154_object;
		var_138_object = var_154_object;
		func_1829(var_154_object);
	} else {
		var_2_bool = false;
	}
	bool var_161_bool; object var_162_object;
	func_1510(var_161_bool, var_162_object);
	if(var_161_bool != 0) {
		object var_165_object;
		func_1892(var_165_object);
		@SendPlayerEnemy(var_162_object, var_165_object);
	}
	bool var_166_bool; object var_167_object; float var_168_float; float var_169_float; bool var_170_bool; bool var_171_bool;
	var_138_object = var_167_object;
	var_139_float = var_168_float;
	var_140_float = var_169_float;
	var_141_bool = var_170_bool;
	var_142_bool = var_171_bool;
	bool var_149_bool;
	func_271(var_148_bool, var_149_bool, var_166_bool, var_167_object, var_168_float, var_169_float, var_170_bool, var_171_bool);
	var_166_bool = var_149_bool;
	if(var_2_bool != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_149_bool = var_137_bool;
	
}


void func_1191(int var_467_int)
{
	var_467_int = 0;
}


void func_1193(void)
{
	func_1851("attack_stay");
}


void func_2218(string var_67_string, int var_68_int)
{
	string var_70_string = "idle";
	if(var_68_int != 0)
		var_70_string += var_68_int;
	var_70_string = var_67_string;
}


// @pe
void func_1198(void)
{
}


void func_1200(int var_388_int)
{
	var_388_int = 1;
}


void func_2225(int var_61_int)
{
	int var_64_int; bool var_65_bool;
	var_64_int = 0;
	
	for(;;) {
		string var_67_string; int var_68_int;
		var_64_int = var_68_int;
		func_2218(var_67_string, var_68_int);
		@HasAnimation(var_65_bool, "all", var_67_string);
		if(!var_65_bool) //@nz
			break;
		var_64_int += 1;
	}
	var_64_int = var_61_int;
}


void func_1202(float var_383_float)
{
	var_383_float = 0.5;
}


void func_2242(void)
{
	var_12_object = GlobalVars[0];
	object var_13_object;
	func_1944(var_13_object);
	var_13_object = var_12_object;
	GlobalVars[0] = var_12_object;
}


void func_1731(object var_16_object, int var_17_int, float var_18_float)
{
	cvector var_28_cvector; object var_29_object; int var_30_int; bool var_31_bool; cvector var_32_cvector; cvector var_33_cvector;
	bool var_37_bool = false;
	bool var_38_bool = false;
	if(var_16_object != 0) {
		if(var_17_int != 4)
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		if(var_17_int != 5)
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		cvector var_44_cvector; cvector var_45_cvector;
		cvector var_46_cvector; object var_47_object;
		var_16_object = var_47_object;
		func_1503(var_46_cvector, var_47_object);
		var_46_cvector = var_45_cvector;
		func_1898(var_44_cvector, var_45_cvector);
		var_44_cvector = var_28_cvector;
		@CreateVectorVector(var_29_object);
		var_30_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_30_int), var_31_bool, var_32_cvector, var_33_cvector);
			if(!var_31_bool) { //@nz
				break;
			Label_1793:
				var_29_object = null;
	}
			object var_106_object;
			var_16_object = var_106_object;
			func_1687(var_106_object);
		}
		if((var_33_cvector | var_28_cvector) >= 0.70710677)
			var_29_object->add(var_32_cvector);
		var_30_int += 1;
	}
	int var_34_int;
	var_29_object->size(var_34_int);
	if(var_34_int == 0) goto Label_1793;
	int var_35_int;
	@irand(var_35_int, var_34_int);
	cvector var_36_cvector;
	var_29_object->get(var_36_cvector, var_35_int);
	object var_61_object; int var_62_int; float var_63_float; cvector var_64_cvector; cvector var_65_cvector;
	var_16_object = var_61_object;
	var_17_int = var_62_int;
	var_18_float = var_63_float;
	var_36_cvector = var_64_cvector;
	var_65_cvector = -var_28_cvector;
	func_1799(var_63_float, var_64_cvector, var_65_cvector);
}


void func_2249(bool var_17_bool, object var_18_object)
{
	var_23_object = GlobalVars[0];
	bool var_21_bool;
	var_23_object->in(var_21_bool, var_18_object);
	if(var_21_bool != 0)
		var_17_bool = true;
	bool var_22_bool;
	@IsPlayerActor(var_18_object, var_22_bool);
	var_22_bool = var_17_bool;
}


void func_2261(bool var_13_bool, object var_14_object)
{
	cvector var_16_cvector;
	object var_18_object;
	var_14_object = var_18_object;
	bool var_17_bool;
	func_2249(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		cvector var_25_cvector; object var_26_object;
		var_14_object = var_26_object;
		func_1503(var_25_cvector, var_26_object);
		var_25_cvector = var_16_cvector;
		float var_31_float; float var_32_float;
		var_33_float = GetByIndex(var_16_cvector, 1);
		var_33_float = var_32_float;
		func_1915(var_31_float, var_32_float);
		var_13_bool = var_31_float < 200;
	}
	var_13_bool = false;
}


void func_229(bool var_2_bool)
{
	@KillTimer(1);
	if(var_2_bool != 0) {
		var_2_bool = false;
		@UnlookAsync("head");
	}
	func_395(var_12_bool);
}


// @pe
void func_2283(object var_37_object)
{
	object var_38_object;
	var_37_object = var_38_object;
	func_2302(var_38_object);
}


void func_1260(bool var_0_bool, object var_1_object)
{
	float var_22_float; cvector var_23_cvector; cvector var_24_cvector; bool var_25_bool; object var_26_object; bool var_27_bool;
	@rand(var_22_float, 0.5);
	@Sleep(var_22_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_1272:
				@GetPosition(var_24_cvector);
				float var_31_float;
				func_1319(var_31_float);
				@GetRandomPFPointInCircle(var_23_cvector, var_24_cvector, var_31_float, var_25_bool);
				if(var_25_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_1272;
			}
				var_1_object = false;
		}
		}
		goto Label_1288;

	Label_1288:
		object var_35_object; cvector var_36_cvector;
		var_23_cvector = var_36_cvector;
		func_1349(var_35_object, var_36_cvector);
		var_35_object = var_26_object;
		if(var_26_object != null) {
			@RotatePath(var_26_object, var_27_bool);
			if(var_27_bool != 0) {
				bool var_41_bool;
				func_1347(var_41_bool);
				@FollowPath(var_26_object, var_41_bool, var_27_bool);
				var_26_object = null;
				if(var_27_bool != 0) {
					TaskCall(4);
					func_1403();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_26_object = null;
	}
	
}


// @pe
void func_2289(bool var_13_bool, object var_14_object)
{
	object var_16_object;
	var_14_object = var_16_object;
	bool var_15_bool;
	func_2249(var_15_bool, var_16_object);
	var_15_bool = var_13_bool;
}


// @pe
void func_2296(object var_23_object)
{
	object var_24_object;
	var_23_object = var_24_object;
	func_2302(var_24_object);
}


// @pe
void func_2302(object var_38_object)
{
	object var_39_object;
	var_38_object = var_39_object;
	TaskCall(2);
	func_422(var_39_object, true);
	TaskReturn();
	@ResetAAS();
}


void func_773(object var_1_object, bool var_2_bool, int var_4_int)
{
	bool var_94_bool; bool var_95_bool; cvector var_96_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_94_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_94_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_95_bool, ("attack" + (var_2_bool + 1)));
			if(!var_95_bool) //@nz
				break;
			var_2_bool += 1;
		}
		@GetAnimationOffset(var_96_cvector, "all", "bjump");
		var_110_float = GetByIndex(var_96_cvector, 2);
		var_4_int = -var_110_float;

	}
}


void func_1799(object var_18_object, cvector var_21_cvector, cvector var_22_cvector)
{
	object var_25_object;
	@GetScene(var_25_object);
	object var_26_object;
	@AddActorByType(var_26_object, "scripted", var_25_object, var_21_cvector, var_22_cvector, "blood_dir.xml");
	object var_29_object;
	var_18_object = var_29_object;
	func_1687(var_29_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2313(object var_48_object)
{
	if(var_48_object == null) {
	}
	var_52_object = GlobalVars[0];
	bool var_50_bool;
	var_52_object->in(var_50_bool, var_48_object);
	if(!var_50_bool) { //@nz
		var_54_object = GlobalVars[0];
		var_54_object->add(var_48_object);
	}
}


void func_271(bool var_0_bool, object var_1_object, bool var_166_bool, object var_167_object, float var_168_float, float var_169_float, bool var_170_bool, bool var_171_bool)
{
	bool var_180_bool; object var_182_object; cvector var_183_cvector; cvector var_184_cvector; float var_186_float; object var_187_object;
	var_0_bool = false;
	var_1_object = var_167_object;
	bool var_181_bool;
	var_171_bool = var_181_bool;
	
	for(;;) {
		bool var_188_bool; object var_189_object;
		var_167_object = var_189_object;
		func_411(var_188_bool, var_189_object);
		if(!var_188_bool) { //@nz
			var_166_bool = false;
			return 16;
		}
		var_167_object->GetPosition(var_183_cvector);
		@GetPosition(var_184_cvector);
		var_186_float = (var_183_cvector - var_184_cvector) | (var_183_cvector - var_184_cvector);
		bool var_193_bool = false;
		if(var_169_float > 0) {
			if(var_186_float > (var_169_float * var_169_float))
				var_193_bool = true;
		}
		if(var_193_bool != 0) {
			@Stop();
			var_166_bool = false;
			return 16;
		}
		if(var_186_float > (var_168_float * var_168_float)) {
			var_167_object->GetPFPosition(var_183_cvector);
			@FindPathTo(var_187_object, var_183_cvector);
			if(var_187_object != null) {
				var_187_object = var_182_object;
				var_187_object = null;
			}
			if(var_182_object != null) {
				if(var_181_bool == 0) goto Label_324;
				var_181_bool = false;
				@RotatePath(var_182_object, var_180_bool);
				if(!var_180_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_206_string;
						func_418(var_206_string);
						string var_207_string;
						func_420(var_207_string);
						@FollowPath(var_182_object, var_170_bool, var_180_bool, var_206_string, var_207_string);
						if(!var_180_bool) { //@nz
							if(var_0_bool == 0) goto Label_343;
							var_182_object = null;
						}
					EMIT "GOTO 0x158";

					Label_343:
						} else {
					var_182_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_180_bool);
					if(!var_180_bool) { //@nz
						if(var_0_bool != 0) {
							var_182_object = null;
							goto Label_371;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_371;
		}
			var_187_object = null;
			goto Label_369;

		Label_369:
			var_182_object = null;

		}
	Label_371:
		for(;;) {
			var_166_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1813(object var_240_object)
{
	cvector var_244_cvector;
	var_240_object->GetPosition(var_244_cvector);
	cvector var_245_cvector;
	@GetPosition(var_245_cvector);
	cvector var_246_cvector = var_244_cvector - var_245_cvector;
	var_247_float = GetByIndex(var_246_cvector, 0);
	var_248_float = GetByIndex(var_246_cvector, 2);
	@RotateAsync(var_247_float, var_248_float);
}


// @pe
void func_2326(object var_55_object)
{
	object var_56_object;
	var_55_object = var_56_object;
	func_2313(var_56_object);
	object var_57_object;
	var_55_object = var_57_object;
	TaskCall(2);
	func_422(var_57_object, true);
	TaskReturn();
	@ResetAAS();
}


void func_1824(bool var_57_bool)
{
	bool var_59_bool;
	@IsLoaded(var_59_bool);
	var_59_bool = var_57_bool;
}


void func_1829(object var_154_object)
{
	float var_157_float;
	var_154_object->GetEyesHeight(var_157_float);
	cvector var_158_cvector = [0.0, 0.0, 0.0];
	var_159_float = GetByIndex(var_158_cvector, 1);
	var_157_float = var_159_float;
	SetByIndex(var_158_cvector, 1) = var_159_float;
	@LookAsync(var_154_object, "head", var_158_cvector);
}


void func_1319(float var_31_float)
{
	float var_33_float;
	@GetCameraFarDistance(var_33_float);
	var_33_float = var_31_float;
}


void func_808(bool var_0_bool, float var_392_float, int var_393_int)
{
	object var_397_object; float var_398_float; float var_399_float;
	@GetVictim((var_392_float * 0.9), var_397_object);
	@ReportAttack(var_0_bool);
	if(var_397_object == var_0_bool) {
		float var_403_float; object var_404_object; int var_405_int;
		var_397_object = var_404_object;
		var_393_int = var_405_int;
		func_430(var_405_int);
		var_403_float = var_398_float;
		float var_406_float; object var_407_object; float var_408_float; int var_409_int;
		var_397_object = var_407_object;
		int var_410_int; object var_411_object; int var_412_int;
		var_397_object = var_411_object;
		var_393_int = var_412_int;
		func_433(var_412_int);
		var_410_int = var_409_int;
		func_1549(var_406_float, var_407_object, var_408_float, var_409_int);
		var_406_float = var_399_float;
		int var_467_int;
		func_1191(var_467_int);
		@ReportHit(var_0_bool, var_467_int, var_399_float, var_408_float);
		object var_468_object; float var_469_float;
		var_397_object = var_468_object;
		var_399_float = var_469_float;
		func_1198();
	}
}
EMIT "Stack[-3] = 0";


void func_1840(string var_81_string, int var_82_int, int var_83_int)
{
	bool var_85_bool;
	int var_87_int;
	var_82_int = var_87_int;
	int var_88_int;
	var_83_int = var_88_int;
	bool var_86_bool;
	func_1939(var_86_bool, var_87_int, var_88_int);
	if(var_86_bool != 0)
		@AddItem(var_85_bool, var_81_string, 0);
}


void func_1331(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_1851(string var_149_string)
{
	bool var_158_bool; int var_159_int; bool var_160_bool; int var_161_int; bool var_162_bool; float var_163_float; cvector var_164_cvector; cvector var_165_cvector;
	@IsExisting3DSound(var_158_bool, var_149_string);
	if(!var_158_bool) { //@nz
		var_159_int = 0;

		for(;;) {
			@IsExisting3DSound(var_160_bool, (var_149_string + (var_159_int + 1)));
			if(!var_160_bool) { //@nz
				break;
			Label_1871:
				@irand(var_161_int, var_159_int);
				var_149_string += (var_161_int + 1);
	}
			@Is3DSoundLoaded(var_162_bool, var_149_string);
			if(var_162_bool != 0) {
				@GetEyesHeight(var_163_float);
				@GetDirection(var_164_cvector);
				var_165_cvector = var_164_cvector * 50;
				var_176_float = GetByIndex(var_165_cvector, 1);
				SetByIndex(var_165_cvector, 1) = (var_176_float + var_163_float);
				@PlayGlobalSound(var_149_string, var_165_cvector);
			}
		}
		var_159_int += 1;
	}
	var_171_bool = !var_159_int; //@nz
	if(var_171_bool == 0) goto Label_1871;
}


void func_1347(bool var_41_bool)
{
	var_41_bool = false;
}


void func_1349(object var_35_object, cvector var_36_cvector)
{
	object var_38_object;
	@FindShiftedPathTo(var_38_object, var_36_cvector);
	var_38_object = var_35_object;
}
EMIT "Stack[-1] = 0";


void func_847(bool var_0_bool, object var_1_object, bool var_355_bool, float var_356_float)
{
	string var_364_string;
	func_1186(var_364_string);
	int var_361_int;
	@irand(var_361_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_2014();
	@PlayAnimation("all", ("attack_begin" + (var_361_int + 1)));
	@WaitForAnimEnd();
	int var_363_int;
	func_1154(var_363_int, var_364_string);
	bool var_389_bool;
	func_1663(var_389_bool, var_0_bool);
	if(!var_389_bool) { //@nz
		@StopAsync();
		var_355_bool = false;
		return 8;
	}
	float var_392_float; int var_393_int;
	var_356_float = var_392_float;
	var_361_int = var_393_int;
	func_808(var_364_string, var_392_float, var_393_int);
	bool var_362_bool;
	@HasAnimation(var_362_bool, "all", ("attack_middle" + var_361_int));
	if(var_362_bool != 0) {
		func_2014();
		@PlayAnimation("all", ("attack_middle" + var_361_int));
		@WaitForAnimEnd();
		func_1186(var_364_string);
		bool var_477_bool;
		func_1663(var_477_bool, var_0_bool);
		if(!var_477_bool) { //@nz
			@StopAsync();
			var_355_bool = false;
			return 8;
		}
		float var_480_float; int var_481_int;
		var_356_float = var_480_float;
		func_808(var_364_string, var_480_float, var_481_int);
		var_363_int = 1;

		for(;;) {
			var_364_string = (("attack_middle" + var_481_int) + "_") + var_363_int;
			@HasAnimation(var_362_bool, "all", var_364_string);
			if(!var_362_bool) { //@nz
			} else {
				func_2014();
				@PlayAnimation("all", var_364_string);
				@WaitForAnimEnd();
				func_1186(var_364_string);
				bool var_575_bool;
				func_1663(var_575_bool, var_0_bool);
				if(!var_575_bool) { //@nz
					@StopAsync();
					var_355_bool = false;
					return 8;
				}
				float var_578_float; int var_579_int;
				var_356_float = var_578_float;
				var_361_int = var_579_int;
				func_808(var_364_string, var_578_float, var_579_int);
				var_363_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_361_int));
		bool var_492_bool;
		func_442(var_363_int, var_364_string, var_492_bool);
		if(var_492_bool != 0) {
			bool var_565_bool;
			func_984(var_565_bool, 0.75);
			@StopAsync();
		}
		var_355_bool = true;
		return 8;

	}
}


void func_1892(object var_121_object)
{
	object var_123_object;
	@self(var_123_object);
	var_123_object = var_121_object;
}
EMIT "Stack[-1] = 0";


void func_1898(cvector var_44_cvector, cvector var_45_cvector)
{
	float var_53_float = sqrt(var_45_cvector | var_45_cvector);
	if(var_53_float < 0.000001)
		var_44_cvector = [0.0, 0.0, 0.0];
	var_44_cvector = var_45_cvector / var_53_float;
}


// @pe
void func_1908(float var_444_float, float var_445_float, float var_446_float)
{
	if(var_445_float < var_446_float)
		var_445_float = var_444_float;
	else
		var_446_float = var_444_float;
	
}


// @pe
void func_373(bool var_0_bool, object var_1_object, int var_20_int)
{
	if(var_20_int != 0)
		return 0;
	bool var_23_bool;
	func_411(var_23_bool, var_1_object);
	if(!var_23_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1403(void)
{
	int var_52_int; int var_53_int; bool var_54_bool; float var_55_float; bool var_56_bool;
	@WaitForAnimEnd();
	bool var_57_bool;
	func_1824(var_57_bool);
	if(!var_57_bool) //@nz
		return 14;
	int var_61_int;
	func_2225(var_61_int);
	int var_50_int;
	var_61_int = var_50_int;
	int var_51_int = 0;
	
	for(;;) {
		bool var_74_bool = false;
		if(var_51_int < 5) {
			bool var_77_bool;
			func_1824(var_77_bool);
			if(var_77_bool != 0)
				var_74_bool = true;
		}
		if(var_74_bool != 0) {
			@irand(var_52_int, 3);
			if(var_52_int == 0) {
				if(var_50_int == 0) goto Label_1450;
				@irand(var_53_int, var_50_int);
				string var_83_string; int var_84_int;
				var_53_int = var_84_int;
				func_2218(var_83_string, var_84_int);
				@PlayAnimation("all", var_83_string);
				@WaitForAnimEnd(var_54_bool);
				if(!var_54_bool) { //@nz
				} else {
			} else {
			if(var_52_int == 1) {
				@rand(var_55_float, 4);
				@Sleep((var_55_float + 1), var_56_bool);
				if(!var_56_bool) { //@nz
					goto Label_1479;
				}
			} else if(var_51_int != 0) {
				goto Label_1479;
			}
			}
					bool var_86_bool;
					func_1482(var_86_bool);
					var_87_bool = !var_86_bool; //@nz
					if(var_87_bool == 0) goto Label_1474;
			}
		}
	Label_1479:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1474:
		@ResetAAS();
		var_51_int += 1;
	}
	
}


// @pe
void func_1915(float var_31_float, float var_32_float)
{
	if(var_32_float < 0)
		var_31_float = -var_32_float;
	else
		var_32_float = var_31_float;
	
}


// @pe
void func_1923(float var_47_float, float var_48_float, float var_49_float, float var_50_float)
{
	if(var_48_float < var_49_float) {
		var_49_float = var_47_float;
		return 0;
	}
	if(var_48_float > var_50_float) {
		var_50_float = var_47_float;
		return 0;
	}
	var_48_float = var_47_float;
}


void func_395(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1934(bool var_518_bool, float var_519_float)
{
	float var_521_float;
	@rand(var_521_float);
	var_518_bool = var_521_float < var_519_float;
}


void func_1939(bool var_86_bool, int var_87_int, int var_88_int)
{
	int var_90_int;
	@irand(var_90_int, var_88_int);
	var_86_bool = var_90_int < var_87_int;
}


void func_1944(object var_13_object)
{
	object var_15_object;
	@CreateObjectSet(var_15_object);
	var_15_object = var_13_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_411(bool var_188_bool, object var_189_object)
{
	object var_191_object;
	var_189_object = var_191_object;
	bool var_190_bool;
	func_1663(var_190_bool, var_191_object);
	var_190_bool = var_188_bool;
}


// @pe
void func_1950(bool var_18_bool, object var_19_object, float var_20_float)
{
	if(!var_19_object) { //@nz
		var_18_bool = false;
		return 0;
	}
	if(var_20_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_20_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_25_float;
		var_20_float = var_25_float;
		func_1995(var_25_float);
		bool var_29_bool; object var_30_object; float var_32_float;
		var_19_object = var_30_object;
		var_20_float = var_32_float;
		func_1527(var_29_bool, var_30_object, "reputation", var_32_float, (float)0, (float)1);
		var_18_bool = true;
		return 0;

	}
	
	var_18_bool = false;
}


void func_418(string var_206_string)
{
	var_206_string = "walk";
}


void func_420(string var_207_string)
{
	var_207_string = "run";
}


// @pe
void func_422(object var_57_object, bool var_58_bool)
{
	object var_66_object; bool var_67_bool;
	func_544(var_63_float, var_64_int, var_65_bool, var_66_object, var_67_bool, var_66_object, var_67_bool, 180.0);
}


// @pe
void func_430(float var_403_float)
{
	var_403_float = 0.2;
}


// @pe
void func_433(int var_410_int)
{
	var_410_int = 0;
}


void func_442(bool var_0_bool, bool var_6_bool, bool var_492_bool)
{
	cvector var_504_cvector; cvector var_505_cvector; cvector var_506_cvector; cvector var_507_cvector; cvector var_508_cvector; cvector var_509_cvector; float var_510_float; float var_511_float; cvector var_512_cvector; float var_513_float; int var_514_int;
	bool var_515_bool = false;
	bool var_516_bool;
	func_1663(var_516_bool, var_0_bool);
	if(var_516_bool != 0) {
		bool var_518_bool;
		func_1934(var_518_bool, 0.5);
		if(var_518_bool != 0)
			var_515_bool = true;
	}
	if(var_515_bool != 0) {
		@GetPosition(var_504_cvector);
		var_0_bool->GetPosition(var_505_cvector); //@t
		@GetDirection(var_506_cvector);
		cvector var_522_cvector;
		func_1898(var_522_cvector, (var_504_cvector - var_505_cvector));
		var_522_cvector = var_507_cvector;
		@GetAnimationOffset(var_508_cvector, "all", "jump1");
		@GetAnimationOffset(var_509_cvector, "all", "jump2");
		var_533_float = GetByIndex(var_508_cvector, 2);
		var_534_float = GetByIndex(var_509_cvector, 2);
		if(var_533_float < var_534_float) {
			var_536_float = GetByIndex(var_509_cvector, 2);
			var_510_float = -var_536_float;
			var_537_float = GetByIndex(var_508_cvector, 2);
			var_511_float = -var_537_float;
		} else {
			var_563_float = GetByIndex(var_508_cvector, 2);
			var_510_float = -var_563_float;
			var_564_float = GetByIndex(var_509_cvector, 2);
			var_511_float = -var_564_float;
		}
		@FindLongestDir(var_512_cvector, var_513_float, var_507_cvector, 0.17453294, 6, (var_511_float * 3));
		if(var_513_float < var_510_float)
			@FindLongestDir(var_512_cvector, var_513_float, var_507_cvector, 0.5235988, 16, (var_511_float * 3));
		if(var_513_float >= var_510_float) {
			@StopAsync();
			var_548_int = -var_512_cvector;
			@SetDirection(var_548_int);
			var_6_bool = true;
			if(var_513_float >= var_511_float) {
				@irand(var_514_int, 2);
				@PlayAnimation("all", ("jump" + (var_514_int + 1)));
			} else {
					var_556_float = GetByIndex(var_508_cvector, 2);
					var_557_int = -var_556_float;
					if(!(var_557_int <= var_513_float)) goto Label_533;
					@PlayAnimation("all", "jump1");
			}
			for(;;) {
				@WaitForAnimEnd();
				var_6_bool = false;
				var_492_bool = false;

			}

		Label_533:
			@PlayAnimation("all", "jump2");
		}
	}
	var_492_bool = true;
	
}


void func_1985(float var_462_float)
{
	object var_464_object;
	@CreateFloatVector(var_464_object);
	var_464_object->add(var_462_float);
	@SendWorldWndMessage(15, var_464_object);
}
EMIT "Stack[-1] = 0";


void func_1482(bool var_86_bool)
{
	var_86_bool = true;
}


void func_1995(float var_25_float)
{
	object var_27_object;
	@CreateFloatVector(var_27_object);
	var_27_object->add(var_25_float);
	@SendWorldWndMessage(16, var_27_object);
}
EMIT "Stack[-1] = 0";


void func_1484(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1489(string var_434_string, int var_435_int)
{
	if(var_435_int == 2) {
		var_434_string = "fire";
		return 0;
	EMIT "GOTO 0x5dd";
	}
	if(var_435_int == 1) {
		var_434_string = "bullet";
		return 0;
	}
	var_434_string = "phys";
}


void func_2005(object var_130_object)
{
	bool var_132_bool;
	@IsPlayerActor(var_130_object, var_132_bool);
	if(var_132_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_984(bool var_565_bool, float var_566_float)
{
	float var_569_float; bool var_570_bool;
	@rand(var_569_float);
	if(var_569_float < var_566_float) {

		for(;;) {
			@IsAnimationPlaying(var_570_bool);
			if(!var_570_bool) { //@nz
			} else {
				bool var_573_bool;
				func_1082(var_573_bool);
				if(var_573_bool != 0) {
					var_565_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_565_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1186(var_570_bool);
}


void func_2014(void)
{
	object var_368_object;
	@GetScene(var_368_object);
	object var_370_object;
	func_1892(var_370_object);
	@BroadcastMessage("battle", var_370_object, var_368_object);
}
EMIT "Stack[-1] = 0";


void func_1503(cvector var_46_cvector, object var_47_object)
{
	cvector var_50_cvector;
	@GetPosition(var_50_cvector);
	cvector var_51_cvector;
	var_47_object->GetPosition(var_51_cvector);
	var_46_cvector = var_51_cvector - var_50_cvector;
}


void func_1510(bool var_14_bool, object var_15_object)
{
	bool var_17_bool;
	@IsPlayerActor(var_15_object, var_17_bool);
	var_17_bool = var_14_bool;
}


void func_2025(int var_105_int)
{
	int var_107_int;
	@GetVariable("branch", var_107_int);
	var_107_int = var_105_int;
}


void func_1515(bool var_37_bool, object var_38_object, string var_39_string)
{
	var_44_bool = IsFuncExist(var_38_object, "HasProperty", 2);
	if(!var_44_bool) { //@nz
		var_37_bool = false;
		return 2;
	}
	bool var_41_bool;
	var_38_object->HasProperty(var_39_string, var_41_bool);
	var_41_bool = var_37_bool;
}


// @pe
void func_2031(object var_16_object)
{
	int var_17_int;
	func_2025(var_17_int);
	if(var_17_int == 1)
		@WorkWithCorpse(var_16_object);
	else
		@Barter(var_16_object);
	
}


void func_1011(bool var_0_bool, bool var_294_bool, float var_295_float)
{
	bool var_301_bool; cvector var_302_cvector; cvector var_303_cvector; cvector var_304_cvector; float var_305_float;
	
	for(;;) {
		@IsAnimationPlaying(var_301_bool);
		if(!var_301_bool) //@nz
			break;
		bool var_307_bool;
		func_1082(var_307_bool);
		if(var_307_bool != 0) {
			var_294_bool = true;
			return 10;
		}
		bool var_350_bool;
		func_1663(var_350_bool, var_0_bool);
		if(!var_350_bool) { //@nz
			var_294_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_302_cvector); //@t
		@GetPFPosition(var_303_cvector);
		var_304_cvector = var_302_cvector - var_303_cvector;
		var_305_float = var_304_cvector | var_304_cvector;
		if(var_305_float < (var_295_float * var_295_float)) {
			bool var_355_bool; float var_356_float;
			var_295_float = var_356_float;
			func_847(var_304_cvector, var_305_float, var_355_bool, var_356_float);
			var_294_bool = true;
			return 10;
		}
		@sync();
	}
	func_1186(var_305_float);
	var_294_bool = false;
}


void func_1527(bool var_29_bool, object var_30_object, string var_31_string, float var_32_float, float var_33_float, float var_34_float)
{
	object var_38_object;
	var_30_object = var_38_object;
	string var_39_string;
	var_31_string = var_39_string;
	bool var_37_bool;
	func_1515(var_37_bool, var_38_object, var_39_string);
	if(!var_37_bool) //@nz
		var_29_bool = false;
	float var_36_float;
	var_30_object->GetProperty(var_31_string, var_36_float);
	float var_47_float; float var_49_float; float var_50_float;
	var_33_float = var_49_float;
	var_34_float = var_50_float;
	func_1923(var_47_float, (var_36_float + var_32_float), var_49_float, var_50_float);
	var_30_object->SetProperty(var_31_string, var_47_float);
	var_29_bool = true;
}


void func_2044(int var_62_int, int var_63_int)
{
	if(var_62_int > var_63_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_66_int = 0;
	if(var_62_int != var_63_int) {
		@irand(var_66_int, (var_63_int - var_62_int));
	} else if(var_62_int == 0) {
		return 4;
	}
	var_66_int += var_62_int;
	if(var_66_int == 0)
		return 4;
	int var_74_int;
	func_2158(var_74_int, "Money");
	bool var_67_bool;
	@AddItem(var_67_bool, var_74_int, 0, var_66_int);
	
}


