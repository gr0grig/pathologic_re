// @GLOBALS: 0:bool:

maintask task_0
{
	void init(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
	
		for(;;) {
			@Sleep(3);
			func_42();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
		void OnAttacked(object actor, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_14_object)
		{
		object var_16_object;
		var_14_object = var_16_object;
			bool var_15_bool;
		func_2157(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_123();
			object var_51_object;
			var_14_object = var_51_object;
			func_2164(var_51_object);
		}
		}

	void OnSee(object actor, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		bool var_12_bool;
		@IsPlayerActor(var_10_bool, var_12_bool);
		if(var_12_bool != 0) {
			object var_14_object;
			var_10_bool = var_14_object;
			func_8();
		}
	}

	void OnHear(object actor, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		bool var_12_bool;
		@IsPlayerActor(var_10_bool, var_12_bool);
		if(var_12_bool != 0) {
			object var_14_object;
			var_10_bool = var_14_object;
			func_8();
		}
	}

}


task task_1
{
	void OnUse(object actor, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		bool var_12_bool;
		@IsOverrideActive(var_12_bool);
		if(!var_12_bool) { //@nz
			object var_14_object;
			var_10_bool = var_14_object;
			func_2176(var_14_object);
		}
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		object var_11_object;
		var_10_bool = var_11_object;
		func_2285();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2287(var_15_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		if(var_10_bool == "kill")
			var_0_bool = true;
	}

}


task task_4
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		object var_11_object;
		var_10_bool = var_11_object;
		func_2285();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, object var_8_object, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2287(var_15_object);
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


task task_5
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		object var_11_object;
		var_10_object = var_11_object;
		func_2285();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_object = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2287(var_15_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, string var_10_string)
	{
		if(var_10_string == "kill") {
			var_13_bool = GlobalVars[0];
			GlobalVars[0] = true;
			func_1286(var_10_string);
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, int var_10_int)
	{
		if(var_10_int == 1) {
			func_2062(var_1_object);
		} else {
			int var_18_int;
			func_1430(var_9_bool, var_18_int, var_18_int);
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
			func_1889(var_14_object);
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
		func_1286(var_10_object);
		object var_15_object;
		var_10_object = var_15_object;
		func_2151();
	}

}


task task_6
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
	func_1791(var_14_object, var_15_int, var_16_float);
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
	func_1859(var_18_float, var_19_cvector, var_20_cvector);
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
	func_2112(var_11_object);
}


void func_1537(bool var_28_bool, object var_29_object, string var_30_string, float var_31_float, float var_32_float, float var_33_float)
{
	object var_37_object;
	var_29_object = var_37_object;
	string var_38_string;
	var_30_string = var_38_string;
	bool var_36_bool;
	func_1525(var_36_bool, var_37_object, var_38_string);
	if(!var_36_bool) //@nz
		var_28_bool = false;
	float var_35_float;
	var_29_object->GetProperty(var_30_string, var_35_float);
	float var_46_float; float var_48_float; float var_49_float;
	var_32_float = var_48_float;
	var_33_float = var_49_float;
	func_1988(var_46_float, (var_35_float + var_31_float), var_48_float, var_49_float);
	var_29_object->SetProperty(var_30_string, var_46_float);
	var_28_bool = true;
}


void func_2052(float var_24_float)
{
	object var_26_object;
	@CreateFloatVector(var_26_object);
	var_26_object->add(var_24_float);
	@SendWorldWndMessage(16, var_26_object);
}
EMIT "Stack[-1] = 0";


void func_2062(object var_13_object)
{
	bool var_15_bool;
	@IsPlayerActor(var_13_object, var_15_bool);
	if(var_15_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1559(float var_537_float, object var_538_object, float var_539_float, int var_540_int)
{
	int var_550_int; int var_552_int;
	object var_557_object;
	var_538_object = var_557_object;
	bool var_556_bool;
	func_1525(var_556_bool, var_557_object, "health");
	if(!var_556_bool) //@nz
		var_537_float = 0.0;
	bool var_560_bool; object var_561_object;
	func_1525(var_560_bool, var_561_object, "armor");
	if(!var_560_bool) //@nz
		var_550_int = 0;
	else
		var_561_object->GetProperty("armor", var_550_int);
	string var_565_string; int var_566_int;
	var_540_int = var_566_int;
	func_1491(var_565_string, var_566_int);
	string var_551_string = "armor_" + var_565_string;
	bool var_571_bool; object var_572_object; string var_573_string;
	var_538_object = var_572_object;
	func_1525(var_571_bool, var_572_object, var_573_string);
	if(!var_571_bool) //@nz
		var_552_int = 0;
	else
		var_538_object->GetProperty(var_573_string, var_552_int);

	float var_575_float;
	func_1957(var_575_float, ((var_550_int + var_552_int) / 100.0), (float)1);
	float var_553_float;
	var_575_float = var_553_float;
	float var_554_float;
	var_538_object->GetProperty("health", var_554_float);
	float var_555_float = var_539_float * (1 - var_553_float);
	float var_585_float;
	func_1988(var_585_float, (var_554_float - var_555_float), (float)0, (float)1);
	var_538_object->SetProperty("health", var_585_float);
	bool var_591_bool; object var_592_object;
	var_538_object = var_592_object;
	func_1520(var_591_bool, var_592_object);
	if(var_591_bool != 0) {
		float var_593_float = -var_555_float;
		func_2042(var_593_float);
	}
	var_555_float = var_537_float;
	
}


void func_2071(void)
{
	object var_122_object;
	@GetScene(var_122_object);
	object var_124_object;
	func_1941(var_124_object);
	@BroadcastMessage("battle", var_124_object, var_122_object);
}
EMIT "Stack[-1] = 0";


void func_539(object var_0_object, int var_3_int, bool var_5_bool, object var_207_object, bool var_208_bool, float var_209_float, bool var_278_bool, bool var_370_bool)
{
	float var_221_float; cvector var_222_cvector; cvector var_223_cvector; bool var_225_bool; float var_228_float; cvector var_229_cvector; bool var_230_bool; float var_231_float;
	func_768(var_229_cvector, var_230_bool, var_231_float);
	var_5_bool = 0;
	var_256_bool = IsFuncExist(var_207_object, "@GetAttackDistance", 1);
	if(var_256_bool != 0) {
		var_207_object->GetAttackDistance(var_221_float);
		var_221_float += 50;
	} else {
						var_209_float = var_221_float;
	}
	if(var_221_float >= 150)
		var_221_float = 150;
	var_3_int = false;
	var_0_object = var_207_object;
	bool var_224_bool;
	@IsPlayerActor(var_0_object, var_224_bool);
	if(var_224_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_262_object;
		func_1941(var_262_object);
		@SendPlayerEnemy(var_207_object, var_262_object);
	}
	if(var_208_bool != 0)
		var_225_bool = false;
	else
		var_225_bool = true;

	
Label_579:
	for(;;) {
		bool var_265_bool = false;
		bool var_266_bool;
		func_1704(var_266_bool, var_0_object);
		if(var_266_bool != 0) {
			if(!var_3_int) //@nz
				var_265_bool = true;
		}
		if(var_265_bool != 0) {
			func_1183(var_231_float);
			var_0_object->GetPFPosition(var_222_cvector); //@t
			@GetPFPosition(var_223_cvector);
			var_228_float = (var_222_cvector - var_223_cvector) | (var_222_cvector - var_223_cvector);
			if(var_228_float >= ((300.0 + var_221_float) * (300.0 + var_221_float))) {
				bool var_272_bool; float var_274_float;
				var_221_float = var_274_float;
				TaskCall(5);
				func_1223(var_280_bool, var_272_bool, var_0_object, var_274_float, 3000.0, true, false);
				TaskReturn();
				if(!var_278_bool) { //@nz
				} else {
					var_225_bool = false;
			} else {
			if(var_228_float >= (var_209_float * var_209_float)) {
				var_0_object->GetPFPosition(var_229_cvector); //@t
				@CanReachByPF(var_230_bool, var_229_cvector);
				if(!var_230_bool) { //@nz
					bool var_364_bool; float var_366_float;
					var_221_float = var_366_float;
					TaskCall(5);
					func_1223(var_372_bool, var_364_bool, var_0_object, var_366_float, 3000.0, true, false);
					TaskReturn();
					if(!var_370_bool) { //@nz
						goto Label_751;
					}
					var_225_bool = false;
					goto Label_579;
				}
				if(!var_225_bool) { //@nz
					func_1873(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1183(var_231_float);
					@StopAsync();
					var_225_bool = true;
					bool var_386_bool;
					func_1704(var_386_bool, var_0_object);
					if(!var_386_bool) { //@nz
						goto Label_751;
					}
				}
				@rand(var_231_float);
				bool var_389_bool;
				var_391_bool = var_231_float < 0.19999999;
				if(var_391_bool != 1) {
					bool var_392_bool;
					func_1140(true, var_392_bool);
					if(var_392_bool != 1)
						var_389_bool = false;
				}
				if(var_389_bool != 0) {
					@Face(var_0_object);
					func_1188();
					@PlayAnimation("all", "attack_stay");
					bool var_429_bool; float var_430_float;
					func_1008(var_231_float, var_429_bool, var_430_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1183(var_231_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_664_bool;
					func_1140(var_231_float, var_664_bool);
					var_665_bool = !var_664_bool; //@nz
					if(var_665_bool == 0) goto Label_741;
					bool var_666_bool;
					func_1704(var_666_bool, var_0_object);
					if(!var_666_bool) { //@nz
						goto Label_751;
					}
					var_0_object->GetPFPosition(var_222_cvector); //@t
					@GetPFPosition(var_223_cvector);
					if(!(((var_222_cvector - var_223_cvector) | (var_222_cvector - var_223_cvector)) < (var_430_float * var_430_float))) goto Label_741;
					bool var_671_bool; float var_672_float;
					var_209_float = var_672_float;
					func_842(var_230_bool, var_231_float, var_671_bool, var_672_float);
					var_673_bool = !var_671_bool; //@nz
					if(var_673_bool == 0) goto Label_741;
					goto Label_751;
			}
				bool var_674_bool; float var_675_float;
				var_209_float = var_675_float;
				func_842(var_230_bool, var_231_float, var_674_bool, var_675_float);
				if(!var_674_bool) { //@nz
					goto Label_751;
				}
				var_225_bool = true;

			}
		Label_741:
			goto Label_750;
			}
			Label_750:
			}
		}
	Label_751:
		@WaitForAnimEnd();
		if(var_3_int != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_224_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1051(object var_0_object, bool var_444_bool)
{
	cvector var_450_cvector; cvector var_451_cvector;
	bool var_455_bool;
	func_1704(var_455_bool, var_0_object);
	if(!var_455_bool) { //@nz
		var_444_bool = false;
		return 10;
	}
	bool var_458_bool;
	float var_454_float;
	func_1140(var_454_float, var_458_bool);
	if(var_458_bool != 0) {
		var_0_object->GetPFPosition(var_450_cvector); //@t
		@GetPFPosition(var_451_cvector);
		var_0_object->GetAttackDistance(var_454_float); //@t
		var_444_bool = ((var_450_cvector - var_451_cvector) | (var_450_cvector - var_451_cvector)) <= ((var_454_float + 50) * (var_454_float + 50));
		return 10;
	}
	var_444_bool = false;
}


void func_2082(bool var_615_bool)
{
	bool var_617_bool;
	@GetVariable("god_mode", var_617_bool);
	var_617_bool = var_615_bool;
}


void func_2088(string var_35_string, int var_36_int)
{
	string var_38_string = "idle";
	if(var_36_int != 0)
		var_38_string += var_36_int;
	var_38_string = var_35_string;
}


void func_42(void)
{
	int var_20_int; int var_21_int; bool var_22_bool; float var_23_float; bool var_24_bool;
	@WaitForAnimEnd();
	bool var_25_bool;
	func_1884(var_25_bool);
	if(!var_25_bool) //@nz
		return 14;
	int var_29_int;
	func_2095(var_29_int);
	int var_18_int;
	var_29_int = var_18_int;
	int var_19_int = 0;
	
	for(;;) {
		bool var_42_bool = false;
		if(var_19_int < 5) {
			bool var_45_bool;
			func_1884(var_45_bool);
			if(var_45_bool != 0)
				var_42_bool = true;
		}
		if(var_42_bool != 0) {
			@irand(var_20_int, 3);
			if(var_20_int == 0) {
				if(var_18_int == 0) goto Label_89;
				@irand(var_21_int, var_18_int);
				string var_51_string; int var_52_int;
				var_21_int = var_52_int;
				func_2088(var_51_string, var_52_int);
				@PlayAnimation("all", var_51_string);
				@WaitForAnimEnd(var_22_bool);
				if(!var_22_bool) { //@nz
				} else {
			} else {
			if(var_20_int == 1) {
				@rand(var_23_float, 4);
				@Sleep((var_23_float + 1), var_24_bool);
				if(!var_24_bool) { //@nz
					goto Label_118;
				}
			} else if(var_19_int != 0) {
				goto Label_118;
			}
			}
					bool var_54_bool;
					func_121(var_54_bool);
					var_55_bool = !var_54_bool; //@nz
					if(var_55_bool == 0) goto Label_113;
			}
		}
	Label_118:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_113:
		@ResetAAS();
		var_19_int += 1;
	}
	
}


void func_2095(int var_29_int)
{
	int var_32_int; bool var_33_bool;
	var_32_int = 0;
	
	for(;;) {
		string var_35_string; int var_36_int;
		var_32_int = var_36_int;
		func_2088(var_35_string, var_36_int);
		@HasAnimation(var_33_bool, "all", var_35_string);
		if(!var_33_bool) //@nz
			break;
		var_32_int += 1;
	}
	var_32_int = var_29_int;
}


void func_1079(bool var_442_bool)
{
	bool var_443_bool = false;
	bool var_444_bool;
	func_1051(var_443_bool, var_444_bool);
	if(var_444_bool != 0) {
		bool var_461_bool;
		func_1095(var_442_bool, var_443_bool, var_461_bool);
		if(var_461_bool != 0)
			var_443_bool = true;
	}
	if(var_443_bool != 0) {
		var_442_bool = true;
		return 0;
	}
	var_442_bool = false;
}


// @pe
void func_2112(object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	TaskCall(1);
	func_128(var_12_object);
	TaskReturn();
}


void func_1095(object var_0_object, int var_4_int, bool var_461_bool)
{
	object var_467_object; float var_469_float; cvector var_470_cvector; cvector var_471_cvector;
	@GetScene(var_467_object);
	bool var_468_bool = false;
	
	for(;;) {
		cvector var_472_cvector;
		func_1505(var_472_cvector, var_0_object);
		var_478_int = -var_472_cvector;
		@FindDirLength(var_469_float, var_478_int, var_4_int);
		if(var_469_float < var_4_int) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_470_cvector); //@t
				@GetPFPosition(var_471_cvector);
				@WaitForAnimEnd();
				func_1183(var_471_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_468_bool = true;
				bool var_483_bool;
				func_1051(var_471_cvector, var_483_bool);
				var_484_bool = !var_483_bool; //@nz
				if(var_484_bool == 0) goto Label_1136;
		}
		for(;;) {
			var_468_bool = var_461_bool;

		}

	Label_1136:
	}
}
EMIT "Stack[-5] = 0";


void func_1632(bool var_604_bool, object var_605_object)
{
	object var_609_object;
	var_605_object = var_609_object;
	bool var_608_bool;
	func_1525(var_608_bool, var_609_object, "health");
	if(!var_608_bool) { //@nz
		var_604_bool = false;
		return 2;
	}
	bool var_612_bool = false;
	bool var_613_bool; object var_614_object;
	func_1520(var_613_bool, var_614_object);
	if(var_613_bool != 0) {
		bool var_615_bool;
		func_2082(var_615_bool);
		if(var_615_bool != 0)
			var_612_bool = true;
	}
	if(var_612_bool != 0) {
		var_604_bool = false;
		return 2;
	}
	float var_607_float;
	var_614_object->GetProperty("health", var_607_float);
	var_604_bool = var_607_float <= 0.0;
}


// @pe
void func_2157(bool var_15_bool, object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	bool var_17_bool;
	func_1704(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
}


// @pe
void func_2164(object var_51_object)
{
	object var_52_object;
	var_51_object = var_52_object;
	func_2230(var_52_object);
}


void func_1140(object var_0_object, bool var_392_bool)
{
	bool var_394_bool;
	var_397_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_397_bool != 0) {
		var_0_object->IsAttacking(var_394_bool); //@t
		var_394_bool = var_392_bool;
	}
	var_392_bool = false;
}


void func_121(bool var_54_bool)
{
	var_54_bool = true;
}


void func_2170(int var_55_int)
{
	int var_57_int;
	@GetVariable("branch", var_57_int);
	var_57_int = var_55_int;
}


void func_123(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1663(bool var_38_bool, object var_39_object)
{
	bool var_41_bool;
	var_39_object->IsDead(var_41_bool);
	var_41_bool = var_38_bool;
}


// @pe
void func_2176(object var_14_object)
{
	int var_15_int;
	func_2170(var_15_int);
	if(var_15_int == 1)
		@WorkWithCorpse(var_14_object);
	else
		@Barter(var_14_object);
	
}


// @pe
void func_128(object var_12_object)
{
	object var_14_object;
	var_12_object = var_14_object;
	bool var_13_bool;
	func_1520(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		bool var_17_bool; object var_18_object;
		var_12_object = var_18_object;
		func_2007(var_17_bool, var_18_object, 0.03);
	}
	func_2206();
	@SetVariable("b1q04_dead", 1);
	object var_77_object;
	var_12_object = var_77_object;
	func_151(var_77_object);
}


void func_1151(object var_2_object, bool var_5_bool)
{
	int var_508_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_507_float;
	@rand(var_507_float);
	float var_514_float;
	func_1197(var_514_float);
	if(var_507_float < var_514_float) {
		@irand(var_508_int, var_2_object);
		@Speak("attack" + (var_508_int + 1));
		int var_519_int;
		func_1195(var_519_int);
		var_5_bool = var_519_int;
	}
}


void func_1668(bool var_27_bool, object var_28_object)
{
	if(var_28_object == null) {
		var_27_bool = false;
		return 4;
	}
	bool var_34_bool = false;
	var_37_bool = IsFuncExist(var_28_object, "IsDead", 1);
	if(var_37_bool != 0) {
		bool var_38_bool; object var_39_object;
		var_28_object = var_39_object;
		func_1663(var_38_bool, var_39_object);
		if(var_38_bool != 0)
			var_34_bool = true;
	}
	if(var_34_bool != 0) {
		var_27_bool = false;
		return 4;
	}
	object var_31_object;
	@GetScene(var_31_object);
	if(var_31_object == null) {
		var_27_bool = false;
		return 4;
	}
	object var_32_object;
	var_28_object->GetScene(var_32_object);
	if(var_31_object != var_32_object) {
		var_27_bool = false;
		return 4;
	}
	var_27_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2189(string var_61_string)
{
	object var_65_object;
	@CreateInvItem(var_65_object);
	var_65_object->SetItemName(var_61_string);
	var_65_object->SetProperty("Organ", 1);
	int var_66_int;
	var_65_object->GetItemID(var_66_int);
	bool var_67_bool;
	@AddItem(var_67_bool, var_65_object, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void func_151(object var_77_object)
{
	object var_78_object;
	var_77_object = var_78_object;
	func_176(var_78_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2206(void)
{
	int var_55_int;
	func_2170(var_55_int);
	if(var_55_int != 1) {
	}
	func_2189("liver");
	func_2189("kidney");
	func_2189("heart");
	func_2189("blood");
}


void func_1183(object var_0_object)
{
	func_2062(var_0_object);
}


void func_1188(void)
{
	func_1900("attack_stay");
}


void func_1704(bool var_23_bool, object var_24_object)
{
	object var_28_object;
	var_24_object = var_28_object;
	bool var_27_bool;
	func_1668(var_27_bool, var_28_object);
	if(!var_27_bool) { //@nz
		var_23_bool = false;
		return 2;
	}
	bool var_45_bool; object var_46_object;
	func_1525(var_45_bool, var_46_object, "noaccess");
	if(!var_45_bool) { //@nz
		var_23_bool = true;
		return 2;
	}
	int var_26_int;
	var_46_object->GetProperty("noaccess", var_26_int);
	var_23_bool = var_26_int == 0;
}


void func_1193(bool var_644_bool)
{
	var_644_bool = true;
}


void func_1195(int var_519_int)
{
	var_519_int = 1;
}


void func_1197(float var_514_float)
{
	var_514_float = 0.5;
}


void func_176(object var_78_object)
{
	cvector var_89_cvector; cvector var_90_cvector; cvector var_91_cvector; cvector var_92_cvector; string var_93_string; object var_94_object; bool var_95_bool; bool var_96_bool; float var_97_float; cvector var_98_cvector;
	if(var_78_object == null) {
		func_267("fdie");
	} else {
		var_78_object->GetPosition(var_89_cvector);
		@GetPosition(var_90_cvector);
		@GetDirection(var_91_cvector);
		var_92_cvector = var_90_cvector - var_89_cvector;
		var_132_float = GetByIndex(var_92_cvector, 0);
		var_133_float = GetByIndex(var_91_cvector, 0);
		var_135_float = GetByIndex(var_92_cvector, 2);
		var_136_float = GetByIndex(var_91_cvector, 2);
		if(((var_132_float * var_133_float) + (var_135_float * var_136_float)) >= 0)
			var_93_string = "fdie";
		else
			var_93_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_78_object = var_94_object;
		var_143_bool = IsFuncExist(var_78_object, "GetScriptProperty", 2);
		if(var_143_bool != 0) {
			var_78_object->HasScriptProperty(var_95_bool, "Owner");
			if(var_95_bool != 0) {
				var_78_object->GetScriptProperty(var_94_object, "Owner");
				if(var_94_object == null)
					var_78_object = var_94_object;
			}
		}
		var_150_bool = IsFuncExist(var_94_object, "@GetEyesHeight", 1);
		if(var_150_bool != 0) {
			var_94_object->GetEyesHeight(var_97_float);
			var_98_cvector = [0.0, 0.0, 0.0];
			var_151_float = GetByIndex(var_98_cvector, 1);
			var_97_float = var_151_float;
			SetByIndex(var_98_cvector, 1) = var_151_float;
			@LookAsync(var_78_object, "head", var_98_cvector);
			var_96_bool = true;
		} else {
			var_96_bool = false;

		}
		string var_153_string;
		var_93_string = var_153_string;
		func_1900(var_153_string);
		@PlayAnimation("all", var_93_string);
		@WaitForAnimEnd();
		if(var_96_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_93_string);
		@RemoveEnvelope();
		var_94_object = null;
	}
	
}


void func_2230(object var_52_object)
{
	@SetVariable("b1q04_attack", 1);
	object var_54_object;
	@GetScene(var_54_object);
	object var_57_object;
	func_1941(var_57_object);
	var_54_object->RemoveStationaryActor(var_57_object);
	object var_60_object;
	var_52_object = var_60_object;
	TaskCall(6);
	func_1479(var_60_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_1728(bool var_108_bool, cvector var_109_cvector)
{
	cvector var_113_cvector;
	@GetPosition(var_113_cvector);
	cvector var_114_cvector = var_109_cvector - var_113_cvector;
	var_116_float = GetByIndex(var_114_cvector, 0);
	var_117_float = GetByIndex(var_114_cvector, 2);
	bool var_115_bool;
	@Rotate(var_116_float, var_117_float, var_115_bool);
	var_115_bool = var_108_bool;
}


void func_1223(object var_2_object, bool var_272_bool, object var_273_object, float var_274_float, float var_275_float, bool var_276_bool, bool var_277_bool)
{
	object var_285_object;
	func_2062(var_285_object);
	@SetTimer(1, 5);
	bool var_283_bool;
	@CanSee(var_283_bool, var_285_object);
	if(var_283_bool != 0) {
		var_2_object = true;
		object var_289_object;
		var_273_object = var_289_object;
		func_1889(var_289_object);
	} else {
		var_2_object = false;
	}
	bool var_296_bool; object var_297_object;
	func_1520(var_296_bool, var_297_object);
	if(var_296_bool != 0) {
		object var_300_object;
		func_1941(var_300_object);
		@SendPlayerEnemy(var_297_object, var_300_object);
	}
	bool var_301_bool; object var_302_object; float var_303_float; float var_304_float; bool var_305_bool; bool var_306_bool;
	var_273_object = var_302_object;
	var_274_float = var_303_float;
	var_275_float = var_304_float;
	var_276_bool = var_305_bool;
	var_277_bool = var_306_bool;
	bool var_284_bool;
	func_1328(var_283_bool, var_284_bool, var_301_bool, var_302_object, var_303_float, var_304_float, var_305_bool, var_306_bool);
	var_301_bool = var_284_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_284_bool = var_272_bool;
	
}


void func_1738(bool var_104_bool, object var_105_object)
{
	cvector var_107_cvector;
	var_105_object->GetPosition(var_107_cvector);
	bool var_108_bool; cvector var_109_cvector;
	var_107_cvector = var_109_cvector;
	func_1728(var_108_bool, var_109_cvector);
	var_108_bool = var_104_bool;
}


void func_2250(cvector var_142_cvector, cvector var_143_cvector, cvector var_144_cvector, float var_145_float)
{
	cvector var_152_cvector; float var_157_float;
	var_152_cvector = var_144_cvector - var_143_cvector;
	float var_153_float = 250000;
	var_158_float = GetByIndex(var_152_cvector, 1);
	float var_154_float = (var_158_float * 1000) - (var_145_float * var_145_float);
	float var_155_float = var_152_cvector | var_152_cvector;
	float var_162_float; float var_163_float; float var_164_float; float var_165_float;
	var_153_float = var_163_float;
	var_154_float = var_164_float;
	var_155_float = var_165_float;
	func_1964(var_162_float, var_163_float, var_164_float, var_165_float);
	float var_156_float;
	var_162_float = var_156_float;
	if(var_156_float < 0) {
		var_157_float = 1;
	} else {
		float var_176_float; float var_177_float; float var_178_float; float var_179_float; float var_180_float;
		var_153_float = var_177_float;
		var_154_float = var_178_float;
		var_155_float = var_179_float;
		var_180_float = sqrt(var_156_float);
		func_1971(var_177_float, var_178_float, var_179_float, var_180_float);
		var_157_float = sqrt(var_176_float);
	}
	var_142_cvector = (var_152_cvector + (([0.0, 500.0, 0.0] * var_157_float) * var_157_float)) / var_157_float;
	
}


void func_1747(object var_27_object)
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


// @pe
void func_2285(void)
{
}


// @pe
void func_2287(bool var_13_bool)
{
	var_13_bool = false;
}


void func_1791(object var_14_object, int var_15_int, float var_16_float)
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
		func_1505(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1947(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		@CreateVectorVector(var_27_object);
		var_28_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_28_int), var_29_bool, var_30_cvector, var_31_cvector);
			if(!var_29_bool) { //@nz
				break;
			Label_1853:
				var_27_object = null;
	}
			object var_104_object;
			var_14_object = var_104_object;
			func_1747(var_104_object);
		}
		if((var_31_cvector | var_26_cvector) >= 0.70710677)
			var_27_object->add(var_30_cvector);
		var_28_int += 1;
	}
	int var_32_int;
	var_27_object->size(var_32_int);
	if(var_32_int == 0) goto Label_1853;
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
	func_1859(var_61_float, var_62_cvector, var_63_cvector);
}


void func_768(bool var_1_bool, object var_2_object, int var_4_int)
{
	bool var_235_bool; bool var_236_bool; cvector var_237_cvector;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_235_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_235_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_236_bool, ("attack" + (var_2_object + 1)));
			if(!var_236_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_237_cvector, "all", "bjump");
		var_251_float = GetByIndex(var_237_cvector, 2);
		var_4_int = -var_251_float;

	}
}


void func_1286(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_1452(var_10_object);
}


// @pe
void func_267(string var_100_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_101_string;
	var_100_string = var_101_string;
	func_1900(var_101_string);
	@PlayAnimation("all", var_100_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_100_string);
	@RemoveEnvelope();
}


void func_803(object var_0_object, float var_523_float, int var_524_int)
{
	object var_528_object; float var_529_float; float var_530_float;
	@GetVictim((var_523_float * 0.9), var_528_object);
	@ReportAttack(var_0_object);
	if(var_528_object == var_0_object) {
		float var_534_float; object var_535_object; int var_536_int;
		var_528_object = var_535_object;
		var_524_int = var_536_int;
		func_490(var_536_int);
		var_534_float = var_529_float;
		float var_537_float; object var_538_object; float var_539_float; int var_540_int;
		var_528_object = var_538_object;
		int var_541_int; object var_542_object; int var_543_int;
		var_528_object = var_542_object;
		var_524_int = var_543_int;
		func_493(var_543_int);
		var_541_int = var_540_int;
		func_1559(var_537_float, var_538_object, var_539_float, var_540_int);
		var_537_float = var_530_float;
		int var_598_int;
		func_496(var_598_int);
		@ReportHit(var_0_object, var_598_int, var_530_float, var_539_float);
		object var_599_object; float var_600_float;
		var_528_object = var_599_object;
		var_530_float = var_600_float;
		func_498(var_599_object, var_600_float);
	}
}
EMIT "Stack[-3] = 0";


void func_299(bool var_61_bool, object var_62_object, bool var_84_bool, object var_685_object)
{
	object var_66_object;
	var_62_object = var_66_object;
	bool var_65_bool;
	func_1704(var_65_bool, var_66_object);
	if(!var_65_bool) { //@nz
		var_61_bool = false;
		return 2;
	}
	float var_68_float; object var_69_object;
	var_62_object = var_69_object;
	func_1512(var_68_float, var_69_object);
	float var_64_float;
	var_68_float = var_64_float;
	bool var_76_bool; float var_77_float;
	func_1999(var_76_bool, var_77_float, 250000.0, 3240000.0);
	if(var_76_bool != 0) {
		bool var_82_bool; object var_83_object;
		var_62_object = var_83_object;
		TaskCall(3);
		func_336(var_77_float, var_84_bool, var_82_bool, var_83_object);
		TaskReturn();
		var_84_bool = var_61_bool;
		return 2;
	}
	bool var_683_bool; object var_684_object;
	var_62_object = var_684_object;
	TaskCall(4);
	func_462(var_683_bool, var_684_object);
	TaskReturn();
	var_685_object = var_61_bool;
}


void func_1328(object var_0_object, bool var_1_bool, bool var_301_bool, object var_302_object, float var_303_float, float var_304_float, bool var_305_bool, bool var_306_bool)
{
	bool var_315_bool; object var_317_object; cvector var_318_cvector; cvector var_319_cvector; float var_321_float; object var_322_object;
	var_0_object = false;
	var_1_bool = var_302_object;
	bool var_316_bool;
	var_306_bool = var_316_bool;
	
	for(;;) {
		bool var_323_bool; object var_324_object;
		var_302_object = var_324_object;
		func_1468(var_323_bool, var_324_object);
		if(!var_323_bool) { //@nz
			var_301_bool = false;
			return 16;
		}
		var_302_object->GetPosition(var_318_cvector);
		@GetPosition(var_319_cvector);
		var_321_float = (var_318_cvector - var_319_cvector) | (var_318_cvector - var_319_cvector);
		bool var_328_bool = false;
		if(var_304_float > 0) {
			if(var_321_float > (var_304_float * var_304_float))
				var_328_bool = true;
		}
		if(var_328_bool != 0) {
			@Stop();
			var_301_bool = false;
			return 16;
		}
		if(var_321_float > (var_303_float * var_303_float)) {
			var_302_object->GetPFPosition(var_318_cvector);
			@FindPathTo(var_322_object, var_318_cvector);
			if(var_322_object != null) {
				var_322_object = var_317_object;
				var_322_object = null;
			}
			if(var_317_object != null) {
				if(var_316_bool == 0) goto Label_1381;
				var_316_bool = false;
				@RotatePath(var_317_object, var_315_bool);
				if(!var_315_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_341_string;
						func_1475(var_341_string);
						string var_342_string;
						func_1477(var_342_string);
						@FollowPath(var_317_object, var_305_bool, var_315_bool, var_341_string, var_342_string);
						if(!var_315_bool) { //@nz
							if(var_0_object == 0) goto Label_1400;
							var_317_object = null;
						}
					EMIT "GOTO 0x579";

					Label_1400:
						} else {
					var_317_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_315_bool);
					if(!var_315_bool) { //@nz
						if(var_0_object != 0) {
							var_317_object = null;
							goto Label_1428;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1428;
		}
			var_322_object = null;
			goto Label_1426;

		Label_1426:
			var_317_object = null;

		}
	Label_1428:
		for(;;) {
			var_301_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_1859(object var_16_object, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	@AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	object var_27_object;
	var_16_object = var_27_object;
	func_1747(var_27_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_842(object var_0_object, bool var_1_bool, bool var_490_bool, float var_491_float)
{
	string var_499_string;
	func_1183(var_499_string);
	int var_496_int;
	@irand(var_496_int, var_1_bool);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2071();
	@PlayAnimation("all", ("attack_begin" + (var_496_int + 1)));
	@WaitForAnimEnd();
	int var_498_int;
	func_1151(var_498_int, var_499_string);
	bool var_520_bool;
	func_1704(var_520_bool, var_0_object);
	if(!var_520_bool) { //@nz
		@StopAsync();
		var_490_bool = false;
		return 8;
	}
	float var_523_float; int var_524_int;
	var_491_float = var_523_float;
	var_496_int = var_524_int;
	func_803(var_499_string, var_523_float, var_524_int);
	bool var_497_bool;
	@HasAnimation(var_497_bool, "all", ("attack_middle" + var_496_int));
	if(var_497_bool != 0) {
		func_2071();
		@PlayAnimation("all", ("attack_middle" + var_496_int));
		@WaitForAnimEnd();
		func_1183(var_499_string);
		bool var_629_bool;
		func_1704(var_629_bool, var_0_object);
		if(!var_629_bool) { //@nz
			@StopAsync();
			var_490_bool = false;
			return 8;
		}
		float var_632_float; int var_633_int;
		var_491_float = var_632_float;
		func_803(var_499_string, var_632_float, var_633_int);
		var_498_int = 1;

		for(;;) {
			var_499_string = (("attack_middle" + var_633_int) + "_") + var_498_int;
			@HasAnimation(var_497_bool, "all", var_499_string);
			if(!var_497_bool) { //@nz
			} else {
				func_2071();
				@PlayAnimation("all", var_499_string);
				@WaitForAnimEnd();
				func_1183(var_499_string);
				bool var_655_bool;
				func_1704(var_655_bool, var_0_object);
				if(!var_655_bool) { //@nz
					@StopAsync();
					var_490_bool = false;
					return 8;
				}
				float var_658_float; int var_659_int;
				var_491_float = var_658_float;
				var_496_int = var_659_int;
				func_803(var_499_string, var_658_float, var_659_int);
				var_498_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_496_int));
		bool var_644_bool;
		func_1193(var_644_bool);
		if(var_644_bool != 0) {
			bool var_645_bool;
			func_981(var_645_bool, 0.45);
			@StopAsync();
		}
		var_490_bool = true;
		return 8;

	}
}


void func_336(object var_0_object, bool var_82_bool, object var_83_object, object var_200_object)
{
	object var_99_object;
	var_83_object = var_99_object;
	func_2062(var_99_object);
	bool var_104_bool; object var_105_object;
	var_83_object = var_105_object;
	func_1738(var_104_bool, var_105_object);
	bool var_118_bool; object var_119_object;
	func_1704(var_118_bool, var_119_object);
	if(!var_118_bool) { //@nz
		var_82_bool = false;
		return 14;
	}
	func_2071();
	@Face(var_119_object);
	@PlayAnimation("all", "aattack_begin1");
	@WaitForAnimEnd();
	bool var_127_bool; object var_128_object;
	var_83_object = var_128_object;
	func_1704(var_127_bool, var_128_object);
	if(!var_127_bool) { //@nz
		@StopAsync();
		var_82_bool = false;
		return 14;
	}
	@PlayAnimation("all", "aattack_end1");
	object var_92_object;
	@GetScene(var_92_object);
	cvector var_93_cvector;
	bool var_94_bool;
	@GetGeometryLocator("knife", var_94_bool, var_93_cvector);
	object var_95_object;
	@AddActorByType(var_95_object, "scripted", var_92_object, var_93_cvector, [0.0, 0.0, 1.0], "grabitel_knife.xml");
	object var_137_object;
	func_1941(var_137_object);
	var_95_object->SetScriptProperty("Owner", var_137_object);
	var_95_object->SetScriptProperty("Target", var_83_object);
	cvector var_96_cvector;
	var_83_object->GetPosition(var_96_cvector);
	float var_97_float;
	var_83_object->GetEyesHeight(var_97_float);
	var_139_float = GetByIndex(var_96_cvector, 1);
	SetByIndex(var_96_cvector, 1) = (var_139_float + (var_97_float - 10));
	cvector var_142_cvector; cvector var_143_cvector; cvector var_144_cvector;
	var_93_cvector = var_143_cvector;
	var_96_cvector = var_144_cvector;
	func_2250(var_142_cvector, var_143_cvector, var_144_cvector, 2000.0);
	cvector var_98_cvector;
	var_142_cvector = var_98_cvector;
	var_95_object->SetScriptProperty("StartDirection", var_98_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	if(false != 0) {
		var_82_bool = true;
		return 14;
	}
	bool var_195_bool; object var_196_object;
	var_83_object = var_196_object;
	func_1704(var_195_bool, var_196_object);
	if(!var_195_bool) { //@nz
		var_82_bool = false;
		return 14;
	}
	bool var_198_bool; object var_199_object;
	var_83_object = var_199_object;
	TaskCall(4);
	func_462(var_198_bool, var_199_object);
	TaskReturn();
	var_200_object = var_82_bool;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_1873(object var_375_object)
{
	cvector var_379_cvector;
	var_375_object->GetPosition(var_379_cvector);
	cvector var_380_cvector;
	@GetPosition(var_380_cvector);
	cvector var_381_cvector = var_379_cvector - var_380_cvector;
	var_382_float = GetByIndex(var_381_cvector, 0);
	var_383_float = GetByIndex(var_381_cvector, 2);
	@RotateAsync(var_382_float, var_383_float);
}


void func_1884(bool var_25_bool)
{
	bool var_27_bool;
	@IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
}


void func_1889(object var_14_object)
{
	float var_17_float;
	var_14_object->GetEyesHeight(var_17_float);
	cvector var_18_cvector = [0.0, 0.0, 0.0];
	var_19_float = GetByIndex(var_18_cvector, 1);
	var_17_float = var_19_float;
	SetByIndex(var_18_cvector, 1) = var_19_float;
	@LookAsync(var_14_object, "head", var_18_cvector);
}


void func_1900(string var_101_string)
{
	bool var_110_bool; int var_111_int; bool var_112_bool; int var_113_int; bool var_114_bool; float var_115_float; cvector var_116_cvector; cvector var_117_cvector;
	@IsExisting3DSound(var_110_bool, var_101_string);
	if(!var_110_bool) { //@nz
		var_111_int = 0;

		for(;;) {
			@IsExisting3DSound(var_112_bool, (var_101_string + (var_111_int + 1)));
			if(!var_112_bool) { //@nz
				break;
			Label_1920:
				@irand(var_113_int, var_111_int);
				var_101_string += (var_113_int + 1);
	}
			@Is3DSoundLoaded(var_114_bool, var_101_string);
			if(var_114_bool != 0) {
				@GetEyesHeight(var_115_float);
				@GetDirection(var_116_cvector);
				var_117_cvector = var_116_cvector * 50;
				var_128_float = GetByIndex(var_117_cvector, 1);
				SetByIndex(var_117_cvector, 1) = (var_128_float + var_115_float);
				@PlayGlobalSound(var_101_string, var_117_cvector);
			}
		}
		var_111_int += 1;
	}
	var_123_bool = !var_111_int; //@nz
	if(var_123_bool == 0) goto Label_1920;
}


void func_1941(object var_57_object)
{
	object var_59_object;
	@self(var_59_object);
	var_59_object = var_57_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1430(bool var_0_bool, object var_1_object, int var_18_int)
{
	if(var_18_int != 0)
		return 0;
	bool var_21_bool;
	func_1468(var_21_bool, var_1_object);
	if(!var_21_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1947(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_51_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_51_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_51_float;
}


// @pe
void func_1957(float var_575_float, float var_576_float, float var_577_float)
{
	if(var_576_float < var_577_float)
		var_576_float = var_575_float;
	else
		var_577_float = var_575_float;
	
}


void func_1452(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1964(float var_162_float, float var_163_float, float var_164_float, float var_165_float)
{
	var_162_float = (var_164_float * var_164_float) - ((4 * var_163_float) * var_165_float);
}


void func_1971(float var_176_float, float var_177_float, float var_178_float, float var_180_float)
{
	float var_182_float;
	var_183_int = -var_178_float;
	if(((var_183_int - var_180_float) / (2 * var_177_float)) > 0) {
		var_182_float = var_176_float;
		return 2;
	}
	var_189_int = -var_178_float;
	var_176_float = (var_189_int + var_180_float) / (2 * var_177_float);
}


// @pe
void func_1468(bool var_21_bool, object var_22_object)
{
	object var_24_object;
	var_22_object = var_24_object;
	bool var_23_bool;
	func_1704(var_23_bool, var_24_object);
	var_23_bool = var_21_bool;
}


void func_1475(string var_341_string)
{
	var_341_string = "walk";
}


// @pe
void func_1988(float var_46_float, float var_47_float, float var_48_float, float var_49_float)
{
	if(var_47_float < var_48_float) {
		var_48_float = var_46_float;
		return 0;
	}
	if(var_47_float > var_49_float) {
		var_49_float = var_46_float;
		return 0;
	}
	var_47_float = var_46_float;
}


void func_1477(string var_342_string)
{
	var_342_string = "run";
}


// @pe
void func_1479(object var_60_object)
{
	
	for(;;) {
		bool var_61_bool; object var_62_object;
		TaskCall(2);
		func_299(var_54_object, var_62_object, var_61_bool, var_62_object);
		TaskReturn();
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_462(bool var_198_bool, object var_199_object)
{
	var_206_bool = GlobalVars[0];
	GlobalVars[0] = false;
	object var_207_object;
	func_539(var_203_bool, var_204_float, var_205_int, var_198_bool, var_207_object, var_207_object, true, 200.0);
	bool var_677_bool = false;
	var_678_bool = GlobalVars[0];
	if(var_678_bool != 0) {
		if(var_3_int != 0)
			var_677_bool = true;
	}
	if(var_677_bool != 0) {
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
	}
	var_682_bool = GlobalVars[0];
	var_682_bool = var_198_bool;
}


// @pe
void func_1999(bool var_76_bool, float var_77_float, float var_78_float, float var_79_float)
{
	var_76_bool = false;
	if(var_77_float >= var_78_float) {
		if(var_77_float <= var_79_float)
			var_76_bool = true;
	}
}


void func_979(int var_3_int)
{
	var_3_int = true;
}


// @pe
void func_1491(string var_565_string, int var_566_int)
{
	if(var_566_int == 2) {
		var_565_string = "fire";
		return 0;
	EMIT "GOTO 0x5df";
	}
	if(var_566_int == 1) {
		var_565_string = "bullet";
		return 0;
	}
	var_565_string = "phys";
}


void func_981(bool var_645_bool, float var_646_float)
{
	float var_649_float; bool var_650_bool;
	@rand(var_649_float);
	if(var_649_float < var_646_float) {

		for(;;) {
			@IsAnimationPlaying(var_650_bool);
			if(!var_650_bool) { //@nz
			} else {
				bool var_653_bool;
				func_1079(var_653_bool);
				if(var_653_bool != 0) {
					var_645_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_645_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1183(var_650_bool);
}


// @pe
void func_2007(bool var_17_bool, object var_18_object, float var_19_float)
{
	if(!var_18_object) { //@nz
		var_17_bool = false;
		return 0;
	}
	if(var_19_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_19_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_24_float;
		var_19_float = var_24_float;
		func_2052(var_24_float);
		bool var_28_bool; object var_29_object; float var_31_float;
		var_18_object = var_29_object;
		var_19_float = var_31_float;
		func_1537(var_28_bool, var_29_object, "reputation", var_31_float, (float)0, (float)1);
		var_17_bool = true;
		return 0;

	}
	
	var_17_bool = false;
}


void func_1505(cvector var_44_cvector, object var_45_object)
{
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	var_45_object->GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
}


void func_1512(float var_68_float, object var_69_object)
{
	cvector var_73_cvector;
	@GetPosition(var_73_cvector);
	cvector var_74_cvector;
	var_69_object->GetPosition(var_74_cvector);
	var_68_float = (var_74_cvector - var_73_cvector) | (var_74_cvector - var_73_cvector);
}


// @pe
void func_490(float var_534_float)
{
	var_534_float = 0.15;
}


// @pe
void func_493(int var_541_int)
{
	var_541_int = 0;
}


void func_1520(bool var_13_bool, object var_14_object)
{
	bool var_16_bool;
	@IsPlayerActor(var_14_object, var_16_bool);
	var_16_bool = var_13_bool;
}


void func_1008(object var_0_object, bool var_429_bool, float var_430_float)
{
	bool var_436_bool; cvector var_437_cvector; cvector var_438_cvector; cvector var_439_cvector; float var_440_float;
	
	for(;;) {
		@IsAnimationPlaying(var_436_bool);
		if(!var_436_bool) //@nz
			break;
		bool var_442_bool;
		func_1079(var_442_bool);
		if(var_442_bool != 0) {
			var_429_bool = true;
			return 10;
		}
		bool var_485_bool;
		func_1704(var_485_bool, var_0_object);
		if(!var_485_bool) { //@nz
			var_429_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_437_cvector); //@t
		@GetPFPosition(var_438_cvector);
		var_439_cvector = var_437_cvector - var_438_cvector;
		var_440_float = var_439_cvector | var_439_cvector;
		if(var_440_float < (var_430_float * var_430_float)) {
			bool var_490_bool; float var_491_float;
			var_430_float = var_491_float;
			func_842(var_439_cvector, var_440_float, var_490_bool, var_491_float);
			var_429_bool = true;
			return 10;
		}
		@sync();
	}
	func_1183(var_440_float);
	var_429_bool = false;
}


void func_496(int var_598_int)
{
	var_598_int = 1;
}


// @pe
void func_498(object var_599_object, float var_600_float)
{
	bool var_601_bool = false;
	if(var_600_float > 0) {
		bool var_604_bool; object var_605_object;
		var_599_object = var_605_object;
		func_1632(var_604_bool, var_605_object);
		if(var_604_bool != 0)
			var_601_bool = true;
	}
	if(var_601_bool != 0) {
		var_621_bool = GlobalVars[0];
		GlobalVars[0] = true;
		func_979(var_600_float);
	}
}


void func_1525(bool var_36_bool, object var_37_object, string var_38_string)
{
	var_43_bool = IsFuncExist(var_37_object, "HasProperty", 2);
	if(!var_43_bool) { //@nz
		var_36_bool = false;
		return 2;
	}
	bool var_40_bool;
	var_37_object->HasProperty(var_38_string, var_40_bool);
	var_40_bool = var_36_bool;
}


void func_2042(float var_593_float)
{
	object var_595_object;
	@CreateFloatVector(var_595_object);
	var_595_object->add(var_593_float);
	@SendWorldWndMessage(15, var_595_object);
}
EMIT "Stack[-1] = 0";


