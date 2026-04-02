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
		func_2184(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_123();
			object var_51_object;
			var_14_object = var_51_object;
			func_2191(var_51_object);
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
			func_2203(var_14_object);
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
		func_2325();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2327(var_15_object);
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
		func_2325();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, object var_8_object, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2327(var_15_object);
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
		func_2325();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_object = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2327(var_15_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, string var_10_string)
	{
		if(var_10_string == "kill") {
			var_13_bool = GlobalVars[0];
			GlobalVars[0] = true;
			func_1290(var_10_string);
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, int var_10_int)
	{
		if(var_10_int == 1) {
			func_2089(var_1_object);
		} else {
			int var_18_int;
			func_1434(var_9_bool, var_18_int, var_18_int);
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
			func_1893(var_14_object);
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
		func_1290(var_10_object);
		object var_15_object;
		var_10_object = var_15_object;
		func_2178();
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
	func_1795(var_14_object, var_15_int, var_16_float);
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
	func_1863(var_18_float, var_19_cvector, var_20_cvector);
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
	func_2139(var_11_object);
}


void func_1541(bool var_72_bool, object var_73_object, string var_74_string, float var_75_float, float var_76_float, float var_77_float)
{
	object var_81_object;
	var_73_object = var_81_object;
	string var_82_string;
	var_74_string = var_82_string;
	bool var_80_bool;
	func_1529(var_80_bool, var_81_object, var_82_string);
	if(!var_80_bool) //@nz
		var_72_bool = false;
	float var_79_float;
	var_73_object->GetProperty(var_74_string, var_79_float);
	float var_90_float; float var_92_float; float var_93_float;
	var_76_float = var_92_float;
	var_77_float = var_93_float;
	func_2003(var_90_float, (var_79_float + var_75_float), var_92_float, var_93_float);
	var_73_object->SetProperty(var_74_string, var_90_float);
	var_72_bool = true;
}


void func_2062(float var_588_float)
{
	object var_590_object;
	@CreateFloatVector(var_590_object);
	var_590_object->add(var_588_float);
	if(var_588_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_590_object);
}
EMIT "Stack[-1] = 0";


void func_1563(float var_532_float, object var_533_object, float var_534_float, int var_535_int)
{
	int var_545_int; int var_547_int;
	object var_552_object;
	var_533_object = var_552_object;
	bool var_551_bool;
	func_1529(var_551_bool, var_552_object, "health");
	if(!var_551_bool) //@nz
		var_532_float = 0.0;
	bool var_555_bool; object var_556_object;
	func_1529(var_555_bool, var_556_object, "armor");
	if(!var_555_bool) //@nz
		var_545_int = 0;
	else
		var_556_object->GetProperty("armor", var_545_int);
	string var_560_string; int var_561_int;
	var_535_int = var_561_int;
	func_1495(var_560_string, var_561_int);
	string var_546_string = "armor_" + var_560_string;
	bool var_566_bool; object var_567_object; string var_568_string;
	var_533_object = var_567_object;
	func_1529(var_566_bool, var_567_object, var_568_string);
	if(!var_566_bool) //@nz
		var_547_int = 0;
	else
		var_533_object->GetProperty(var_568_string, var_547_int);

	float var_570_float;
	func_1972(var_570_float, ((var_545_int + var_547_int) / 100.0), (float)1);
	float var_548_float;
	var_570_float = var_548_float;
	float var_549_float;
	var_533_object->GetProperty("health", var_549_float);
	float var_550_float = var_534_float * (1 - var_548_float);
	float var_580_float;
	func_2003(var_580_float, (var_549_float - var_550_float), (float)0, (float)1);
	var_533_object->SetProperty("health", var_580_float);
	bool var_586_bool; object var_587_object;
	var_533_object = var_587_object;
	func_1524(var_586_bool, var_587_object);
	if(var_586_bool != 0) {
		float var_588_float = -var_550_float;
		func_2062(var_588_float);
	}
	var_550_float = var_532_float;
	
}


void func_543(object var_0_object, int var_3_int, bool var_5_bool, object var_202_object, bool var_203_bool, float var_204_float, bool var_273_bool, bool var_365_bool)
{
	float var_216_float; cvector var_217_cvector; cvector var_218_cvector; bool var_220_bool; float var_223_float; cvector var_224_cvector; bool var_225_bool; float var_226_float;
	func_772(var_224_cvector, var_225_bool, var_226_float);
	var_5_bool = 0;
	var_251_bool = IsFuncExist(var_202_object, "@GetAttackDistance", 1);
	if(var_251_bool != 0) {
		var_202_object->GetAttackDistance(var_216_float);
		var_216_float += 50;
	} else {
						var_204_float = var_216_float;
	}
	if(var_216_float >= 150)
		var_216_float = 150;
	var_3_int = false;
	var_0_object = var_202_object;
	bool var_219_bool;
	@IsPlayerActor(var_0_object, var_219_bool);
	if(var_219_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_257_object;
		func_1956(var_257_object);
		@SendPlayerEnemy(var_202_object, var_257_object);
	}
	if(var_203_bool != 0)
		var_220_bool = false;
	else
		var_220_bool = true;

	
Label_583:
	for(;;) {
		bool var_260_bool = false;
		bool var_261_bool;
		func_1708(var_261_bool, var_0_object);
		if(var_261_bool != 0) {
			if(!var_3_int) //@nz
				var_260_bool = true;
		}
		if(var_260_bool != 0) {
			func_1187(var_226_float);
			var_0_object->GetPFPosition(var_217_cvector); //@t
			@GetPFPosition(var_218_cvector);
			var_223_float = (var_217_cvector - var_218_cvector) | (var_217_cvector - var_218_cvector);
			if(var_223_float >= ((300.0 + var_216_float) * (300.0 + var_216_float))) {
				bool var_267_bool; float var_269_float;
				var_216_float = var_269_float;
				TaskCall(5);
				func_1227(var_275_bool, var_267_bool, var_0_object, var_269_float, 3000.0, true, false);
				TaskReturn();
				if(!var_273_bool) { //@nz
				} else {
					var_220_bool = false;
			} else {
			if(var_223_float >= (var_204_float * var_204_float)) {
				var_0_object->GetPFPosition(var_224_cvector); //@t
				@CanReachByPF(var_225_bool, var_224_cvector);
				if(!var_225_bool) { //@nz
					bool var_359_bool; float var_361_float;
					var_216_float = var_361_float;
					TaskCall(5);
					func_1227(var_367_bool, var_359_bool, var_0_object, var_361_float, 3000.0, true, false);
					TaskReturn();
					if(!var_365_bool) { //@nz
						goto Label_755;
					}
					var_220_bool = false;
					goto Label_583;
				}
				if(!var_220_bool) { //@nz
					func_1877(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1187(var_226_float);
					@StopAsync();
					var_220_bool = true;
					bool var_381_bool;
					func_1708(var_381_bool, var_0_object);
					if(!var_381_bool) { //@nz
						goto Label_755;
					}
				}
				@rand(var_226_float);
				bool var_384_bool;
				var_386_bool = var_226_float < 0.19999999;
				if(var_386_bool != 1) {
					bool var_387_bool;
					func_1144(true, var_387_bool);
					if(var_387_bool != 1)
						var_384_bool = false;
				}
				if(var_384_bool != 0) {
					@Face(var_0_object);
					func_1192();
					@PlayAnimation("all", "attack_stay");
					bool var_424_bool; float var_425_float;
					func_1012(var_226_float, var_424_bool, var_425_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1187(var_226_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_663_bool;
					func_1144(var_226_float, var_663_bool);
					var_664_bool = !var_663_bool; //@nz
					if(var_664_bool == 0) goto Label_745;
					bool var_665_bool;
					func_1708(var_665_bool, var_0_object);
					if(!var_665_bool) { //@nz
						goto Label_755;
					}
					var_0_object->GetPFPosition(var_217_cvector); //@t
					@GetPFPosition(var_218_cvector);
					if(!(((var_217_cvector - var_218_cvector) | (var_217_cvector - var_218_cvector)) < (var_425_float * var_425_float))) goto Label_745;
					bool var_670_bool; float var_671_float;
					var_204_float = var_671_float;
					func_846(var_225_bool, var_226_float, var_670_bool, var_671_float);
					var_672_bool = !var_670_bool; //@nz
					if(var_672_bool == 0) goto Label_745;
					goto Label_755;
			}
				bool var_673_bool; float var_674_float;
				var_204_float = var_674_float;
				func_846(var_225_bool, var_226_float, var_673_bool, var_674_float);
				if(!var_673_bool) { //@nz
					goto Label_755;
				}
				var_220_bool = true;

			}
		Label_745:
			goto Label_754;
			}
			Label_754:
			}
		}
	Label_755:
		@WaitForAnimEnd();
		if(var_3_int != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_219_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_2079(float var_68_float)
{
	object var_70_object;
	@CreateFloatVector(var_70_object);
	var_70_object->add(var_68_float);
	@SendWorldWndMessage(16, var_70_object);
}
EMIT "Stack[-1] = 0";


void func_1055(object var_0_object, bool var_439_bool)
{
	cvector var_445_cvector; cvector var_446_cvector;
	bool var_450_bool;
	func_1708(var_450_bool, var_0_object);
	if(!var_450_bool) { //@nz
		var_439_bool = false;
		return 10;
	}
	bool var_453_bool;
	float var_449_float;
	func_1144(var_449_float, var_453_bool);
	if(var_453_bool != 0) {
		var_0_object->GetPFPosition(var_445_cvector); //@t
		@GetPFPosition(var_446_cvector);
		var_0_object->GetAttackDistance(var_449_float); //@t
		var_439_bool = ((var_445_cvector - var_446_cvector) | (var_445_cvector - var_446_cvector)) <= ((var_449_float + 50) * (var_449_float + 50));
		return 10;
	}
	var_439_bool = false;
}


void func_2089(object var_13_object)
{
	bool var_15_bool;
	@IsPlayerActor(var_13_object, var_15_bool);
	if(var_15_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_42(void)
{
	int var_20_int; int var_21_int; bool var_22_bool; float var_23_float; bool var_24_bool;
	@WaitForAnimEnd();
	bool var_25_bool;
	func_1888(var_25_bool);
	if(!var_25_bool) //@nz
		return 14;
	int var_29_int;
	func_2122(var_29_int);
	int var_18_int;
	var_29_int = var_18_int;
	int var_19_int = 0;
	
	for(;;) {
		bool var_42_bool = false;
		if(var_19_int < 5) {
			bool var_45_bool;
			func_1888(var_45_bool);
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
				func_2115(var_51_string, var_52_int);
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


void func_2098(void)
{
	object var_115_object;
	@GetScene(var_115_object);
	object var_117_object;
	func_1956(var_117_object);
	@BroadcastMessage("battle", var_117_object, var_115_object);
}
EMIT "Stack[-1] = 0";


void func_1083(bool var_437_bool)
{
	bool var_438_bool = false;
	bool var_439_bool;
	func_1055(var_438_bool, var_439_bool);
	if(var_439_bool != 0) {
		bool var_456_bool;
		func_1099(var_437_bool, var_438_bool, var_456_bool);
		if(var_456_bool != 0)
			var_438_bool = true;
	}
	if(var_438_bool != 0) {
		var_437_bool = true;
		return 0;
	}
	var_437_bool = false;
}


void func_2109(bool var_614_bool)
{
	bool var_616_bool;
	@GetVariable("god_mode", var_616_bool);
	var_616_bool = var_614_bool;
}


void func_2115(string var_35_string, int var_36_int)
{
	string var_38_string = "idle";
	if(var_36_int != 0)
		var_38_string += var_36_int;
	var_38_string = var_35_string;
}


void func_2122(int var_29_int)
{
	int var_32_int; bool var_33_bool;
	var_32_int = 0;
	
	for(;;) {
		string var_35_string; int var_36_int;
		var_32_int = var_36_int;
		func_2115(var_35_string, var_36_int);
		@HasAnimation(var_33_bool, "all", var_35_string);
		if(!var_33_bool) //@nz
			break;
		var_32_int += 1;
	}
	var_32_int = var_29_int;
}


void func_1099(object var_0_object, int var_4_int, bool var_456_bool)
{
	object var_462_object; float var_464_float; cvector var_465_cvector; cvector var_466_cvector;
	@GetScene(var_462_object);
	bool var_463_bool = false;
	
	for(;;) {
		cvector var_467_cvector;
		func_1509(var_467_cvector, var_0_object);
		var_473_int = -var_467_cvector;
		@FindDirLength(var_464_float, var_473_int, var_4_int);
		if(var_464_float < var_4_int) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_465_cvector); //@t
				@GetPFPosition(var_466_cvector);
				@WaitForAnimEnd();
				func_1187(var_466_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_463_bool = true;
				bool var_478_bool;
				func_1055(var_466_cvector, var_478_bool);
				var_479_bool = !var_478_bool; //@nz
				if(var_479_bool == 0) goto Label_1140;
		}
		for(;;) {
			var_463_bool = var_456_bool;

		}

	Label_1140:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_2139(object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	TaskCall(1);
	func_128(var_12_object);
	TaskReturn();
}


void func_1636(bool var_603_bool, object var_604_object)
{
	object var_608_object;
	var_604_object = var_608_object;
	bool var_607_bool;
	func_1529(var_607_bool, var_608_object, "health");
	if(!var_607_bool) { //@nz
		var_603_bool = false;
		return 2;
	}
	bool var_611_bool = false;
	bool var_612_bool; object var_613_object;
	func_1524(var_612_bool, var_613_object);
	if(var_612_bool != 0) {
		bool var_614_bool;
		func_2109(var_614_bool);
		if(var_614_bool != 0)
			var_611_bool = true;
	}
	if(var_611_bool != 0) {
		var_603_bool = false;
		return 2;
	}
	float var_606_float;
	var_613_object->GetProperty("health", var_606_float);
	var_603_bool = var_606_float <= 0.0;
}


void func_1144(object var_0_object, bool var_387_bool)
{
	bool var_389_bool;
	var_392_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_392_bool != 0) {
		var_0_object->IsAttacking(var_389_bool); //@t
		var_389_bool = var_387_bool;
	}
	var_387_bool = false;
}


void func_121(bool var_54_bool)
{
	var_54_bool = true;
}


void func_123(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_128(object var_12_object)
{
	func_2247();
	bool var_57_bool; object var_58_object;
	var_12_object = var_58_object;
	func_1524(var_57_bool, var_58_object);
	if(var_57_bool != 0) {
		bool var_61_bool; object var_62_object;
		var_12_object = var_62_object;
		func_2027(var_61_bool, var_62_object, 0.03);
	}
	object var_14_object;
	@GetScene(var_14_object);
	object var_99_object;
	func_1956(var_99_object);
	var_14_object->RemoveStationaryActor(var_99_object);
	object var_102_object;
	var_12_object = var_102_object;
	func_155(var_102_object);
}
EMIT "Stack[-1] = 0";


void func_1155(object var_2_object, bool var_5_bool)
{
	int var_503_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_502_float;
	@rand(var_502_float);
	float var_509_float;
	func_1201(var_509_float);
	if(var_502_float < var_509_float) {
		@irand(var_503_int, var_2_object);
		@Speak("attack" + (var_503_int + 1));
		int var_514_int;
		func_1199(var_514_int);
		var_5_bool = var_514_int;
	}
}


void func_1667(bool var_38_bool, object var_39_object)
{
	bool var_41_bool;
	var_39_object->IsDead(var_41_bool);
	var_41_bool = var_38_bool;
}


// @pe
void func_2184(bool var_15_bool, object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	bool var_17_bool;
	func_1708(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
}


void func_1672(bool var_27_bool, object var_28_object)
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
		func_1667(var_38_bool, var_39_object);
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


// @pe
void func_2191(object var_51_object)
{
	object var_52_object;
	var_51_object = var_52_object;
	func_2282(var_52_object);
}


void func_2197(int var_15_int)
{
	int var_17_int;
	@GetVariable("branch", var_17_int);
	var_17_int = var_15_int;
}


// @pe
void func_155(object var_102_object)
{
	object var_103_object;
	var_102_object = var_103_object;
	func_180(var_103_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_2203(object var_14_object)
{
	int var_15_int;
	func_2197(var_15_int);
	if(var_15_int == 1)
		@WorkWithCorpse(var_14_object);
	else
		@Barter(var_14_object);
	
}


void func_1187(object var_0_object)
{
	func_2089(var_0_object);
}


void func_1192(void)
{
	func_1915("attack_stay");
}


void func_2216(int var_20_int, int var_21_int)
{
	if(var_20_int > var_21_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_24_int = 0;
	if(var_20_int != var_21_int) {
		@irand(var_24_int, (var_21_int - var_20_int));
	} else if(var_20_int == 0) {
		return 4;
	}
	var_24_int += var_20_int;
	if(var_24_int == 0)
		return 4;
	int var_32_int;
	func_2277(var_32_int, "Money");
	bool var_25_bool;
	@AddItem(var_25_bool, var_32_int, 0, var_24_int);
	
}


void func_1708(bool var_23_bool, object var_24_object)
{
	object var_28_object;
	var_24_object = var_28_object;
	bool var_27_bool;
	func_1672(var_27_bool, var_28_object);
	if(!var_27_bool) { //@nz
		var_23_bool = false;
		return 2;
	}
	bool var_45_bool; object var_46_object;
	func_1529(var_45_bool, var_46_object, "noaccess");
	if(!var_45_bool) { //@nz
		var_23_bool = true;
		return 2;
	}
	int var_26_int;
	var_46_object->GetProperty("noaccess", var_26_int);
	var_23_bool = var_26_int == 0;
}


void func_1197(bool var_643_bool)
{
	var_643_bool = true;
}


void func_1199(int var_514_int)
{
	var_514_int = 1;
}


void func_1201(float var_509_float)
{
	var_509_float = 0.5;
}


void func_180(object var_103_object)
{
	cvector var_114_cvector; cvector var_115_cvector; cvector var_116_cvector; cvector var_117_cvector; string var_118_string; object var_119_object; bool var_120_bool; bool var_121_bool; float var_122_float; cvector var_123_cvector;
	if(var_103_object == null) {
		func_271("fdie");
	} else {
		var_103_object->GetPosition(var_114_cvector);
		@GetPosition(var_115_cvector);
		@GetDirection(var_116_cvector);
		var_117_cvector = var_115_cvector - var_114_cvector;
		var_157_float = GetByIndex(var_117_cvector, 0);
		var_158_float = GetByIndex(var_116_cvector, 0);
		var_160_float = GetByIndex(var_117_cvector, 2);
		var_161_float = GetByIndex(var_116_cvector, 2);
		if(((var_157_float * var_158_float) + (var_160_float * var_161_float)) >= 0)
			var_118_string = "fdie";
		else
			var_118_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_103_object = var_119_object;
		var_168_bool = IsFuncExist(var_103_object, "GetScriptProperty", 2);
		if(var_168_bool != 0) {
			var_103_object->HasScriptProperty(var_120_bool, "Owner");
			if(var_120_bool != 0) {
				var_103_object->GetScriptProperty(var_119_object, "Owner");
				if(var_119_object == null)
					var_103_object = var_119_object;
			}
		}
		var_175_bool = IsFuncExist(var_119_object, "@GetEyesHeight", 1);
		if(var_175_bool != 0) {
			var_119_object->GetEyesHeight(var_122_float);
			var_123_cvector = [0.0, 0.0, 0.0];
			var_176_float = GetByIndex(var_123_cvector, 1);
			var_122_float = var_176_float;
			SetByIndex(var_123_cvector, 1) = var_176_float;
			@LookAsync(var_103_object, "head", var_123_cvector);
			var_121_bool = true;
		} else {
			var_121_bool = false;

		}
		string var_178_string;
		var_118_string = var_178_string;
		func_1915(var_178_string);
		@PlayAnimation("all", var_118_string);
		@WaitForAnimEnd();
		if(var_121_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_118_string);
		@RemoveEnvelope();
		var_119_object = null;
	}
	
}


void func_1732(bool var_101_bool, cvector var_102_cvector)
{
	cvector var_106_cvector;
	@GetPosition(var_106_cvector);
	cvector var_107_cvector = var_102_cvector - var_106_cvector;
	var_109_float = GetByIndex(var_107_cvector, 0);
	var_110_float = GetByIndex(var_107_cvector, 2);
	bool var_108_bool;
	@Rotate(var_109_float, var_110_float, var_108_bool);
	var_108_bool = var_101_bool;
}


void func_2247(void)
{
	@ClearSubContainer(0);
	func_2216(300, 750);
	func_1904("Knife", 1, 8);
	func_1904("lockpick", 1, 6);
	int var_53_int;
	func_2277(var_53_int, "grabitel_mark");
	bool var_18_bool;
	@AddItem(var_18_bool, var_53_int, 0, 1);
}


void func_1227(object var_2_object, bool var_267_bool, object var_268_object, float var_269_float, float var_270_float, bool var_271_bool, bool var_272_bool)
{
	object var_280_object;
	func_2089(var_280_object);
	@SetTimer(1, 5);
	bool var_278_bool;
	@CanSee(var_278_bool, var_280_object);
	if(var_278_bool != 0) {
		var_2_object = true;
		object var_284_object;
		var_268_object = var_284_object;
		func_1893(var_284_object);
	} else {
		var_2_object = false;
	}
	bool var_291_bool; object var_292_object;
	func_1524(var_291_bool, var_292_object);
	if(var_291_bool != 0) {
		object var_295_object;
		func_1956(var_295_object);
		@SendPlayerEnemy(var_292_object, var_295_object);
	}
	bool var_296_bool; object var_297_object; float var_298_float; float var_299_float; bool var_300_bool; bool var_301_bool;
	var_268_object = var_297_object;
	var_269_float = var_298_float;
	var_270_float = var_299_float;
	var_271_bool = var_300_bool;
	var_272_bool = var_301_bool;
	bool var_279_bool;
	func_1332(var_278_bool, var_279_bool, var_296_bool, var_297_object, var_298_float, var_299_float, var_300_bool, var_301_bool);
	var_296_bool = var_279_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_279_bool = var_267_bool;
	
}


void func_1742(bool var_97_bool, object var_98_object)
{
	cvector var_100_cvector;
	var_98_object->GetPosition(var_100_cvector);
	bool var_101_bool; cvector var_102_cvector;
	var_100_cvector = var_102_cvector;
	func_1732(var_101_bool, var_102_cvector);
	var_101_bool = var_97_bool;
}


void func_1751(object var_27_object)
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


void func_2277(int var_32_int, string var_33_string)
{
	int var_35_int;
	@GetInvItemByName(var_35_int, var_33_string);
	var_35_int = var_32_int;
}


// @pe
void func_2282(object var_52_object)
{
	object var_53_object;
	var_52_object = var_53_object;
	TaskCall(6);
	func_1483(var_53_object);
	TaskReturn();
}


void func_2290(cvector var_137_cvector, cvector var_138_cvector, cvector var_139_cvector, float var_140_float)
{
	cvector var_147_cvector; float var_152_float;
	var_147_cvector = var_139_cvector - var_138_cvector;
	float var_148_float = 250000;
	var_153_float = GetByIndex(var_147_cvector, 1);
	float var_149_float = (var_153_float * 1000) - (var_140_float * var_140_float);
	float var_150_float = var_147_cvector | var_147_cvector;
	float var_157_float; float var_158_float; float var_159_float; float var_160_float;
	var_148_float = var_158_float;
	var_149_float = var_159_float;
	var_150_float = var_160_float;
	func_1979(var_157_float, var_158_float, var_159_float, var_160_float);
	float var_151_float;
	var_157_float = var_151_float;
	if(var_151_float < 0) {
		var_152_float = 1;
	} else {
		float var_171_float; float var_172_float; float var_173_float; float var_174_float; float var_175_float;
		var_148_float = var_172_float;
		var_149_float = var_173_float;
		var_150_float = var_174_float;
		var_175_float = sqrt(var_151_float);
		func_1986(var_172_float, var_173_float, var_174_float, var_175_float);
		var_152_float = sqrt(var_171_float);
	}
	var_137_cvector = (var_147_cvector + (([0.0, 500.0, 0.0] * var_152_float) * var_152_float)) / var_152_float;
	
}


void func_1795(object var_14_object, int var_15_int, float var_16_float)
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
		func_1509(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1962(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		@CreateVectorVector(var_27_object);
		var_28_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_28_int), var_29_bool, var_30_cvector, var_31_cvector);
			if(!var_29_bool) { //@nz
				break;
			Label_1857:
				var_27_object = null;
	}
			object var_104_object;
			var_14_object = var_104_object;
			func_1751(var_104_object);
		}
		if((var_31_cvector | var_26_cvector) >= 0.70710677)
			var_27_object->add(var_30_cvector);
		var_28_int += 1;
	}
	int var_32_int;
	var_27_object->size(var_32_int);
	if(var_32_int == 0) goto Label_1857;
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
	func_1863(var_61_float, var_62_cvector, var_63_cvector);
}


void func_772(bool var_1_bool, object var_2_object, int var_4_int)
{
	bool var_230_bool; bool var_231_bool; cvector var_232_cvector;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_230_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_230_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_231_bool, ("attack" + (var_2_object + 1)));
			if(!var_231_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_232_cvector, "all", "bjump");
		var_246_float = GetByIndex(var_232_cvector, 2);
		var_4_int = -var_246_float;

	}
}


void func_1290(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_1456(var_10_object);
}


// @pe
void func_271(string var_125_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_126_string;
	var_125_string = var_126_string;
	func_1915(var_126_string);
	@PlayAnimation("all", var_125_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_125_string);
	@RemoveEnvelope();
}


// @pe
void func_2325(void)
{
}


// @pe
void func_2327(bool var_13_bool)
{
	var_13_bool = false;
}


void func_807(object var_0_object, float var_518_float, int var_519_int)
{
	object var_523_object; float var_524_float; float var_525_float;
	@GetVictim((var_518_float * 0.9), var_523_object);
	@ReportAttack(var_0_object);
	if(var_523_object == var_0_object) {
		float var_529_float; object var_530_object; int var_531_int;
		var_523_object = var_530_object;
		var_519_int = var_531_int;
		func_494(var_531_int);
		var_529_float = var_524_float;
		float var_532_float; object var_533_object; float var_534_float; int var_535_int;
		var_523_object = var_533_object;
		int var_536_int; object var_537_object; int var_538_int;
		var_523_object = var_537_object;
		var_519_int = var_538_int;
		func_497(var_538_int);
		var_536_int = var_535_int;
		func_1563(var_532_float, var_533_object, var_534_float, var_535_int);
		var_532_float = var_525_float;
		int var_597_int;
		func_500(var_597_int);
		@ReportHit(var_0_object, var_597_int, var_525_float, var_534_float);
		object var_598_object; float var_599_float;
		var_523_object = var_598_object;
		var_525_float = var_599_float;
		func_502(var_598_object, var_599_float);
	}
}
EMIT "Stack[-3] = 0";


void func_303(bool var_54_bool, object var_55_object, bool var_77_bool, object var_684_object)
{
	object var_59_object;
	var_55_object = var_59_object;
	bool var_58_bool;
	func_1708(var_58_bool, var_59_object);
	if(!var_58_bool) { //@nz
		var_54_bool = false;
		return 2;
	}
	float var_61_float; object var_62_object;
	var_55_object = var_62_object;
	func_1516(var_61_float, var_62_object);
	float var_57_float;
	var_61_float = var_57_float;
	bool var_69_bool; float var_70_float;
	func_2014(var_69_bool, var_70_float, 250000.0, 3240000.0);
	if(var_69_bool != 0) {
		bool var_75_bool; object var_76_object;
		var_55_object = var_76_object;
		TaskCall(3);
		func_340(var_70_float, var_77_bool, var_75_bool, var_76_object);
		TaskReturn();
		var_77_bool = var_54_bool;
		return 2;
	}
	bool var_682_bool; object var_683_object;
	var_55_object = var_683_object;
	TaskCall(4);
	func_466(var_682_bool, var_683_object);
	TaskReturn();
	var_684_object = var_54_bool;
}


void func_1332(object var_0_object, bool var_1_bool, bool var_296_bool, object var_297_object, float var_298_float, float var_299_float, bool var_300_bool, bool var_301_bool)
{
	bool var_310_bool; object var_312_object; cvector var_313_cvector; cvector var_314_cvector; float var_316_float; object var_317_object;
	var_0_object = false;
	var_1_bool = var_297_object;
	bool var_311_bool;
	var_301_bool = var_311_bool;
	
	for(;;) {
		bool var_318_bool; object var_319_object;
		var_297_object = var_319_object;
		func_1472(var_318_bool, var_319_object);
		if(!var_318_bool) { //@nz
			var_296_bool = false;
			return 16;
		}
		var_297_object->GetPosition(var_313_cvector);
		@GetPosition(var_314_cvector);
		var_316_float = (var_313_cvector - var_314_cvector) | (var_313_cvector - var_314_cvector);
		bool var_323_bool = false;
		if(var_299_float > 0) {
			if(var_316_float > (var_299_float * var_299_float))
				var_323_bool = true;
		}
		if(var_323_bool != 0) {
			@Stop();
			var_296_bool = false;
			return 16;
		}
		if(var_316_float > (var_298_float * var_298_float)) {
			var_297_object->GetPFPosition(var_313_cvector);
			@FindPathTo(var_317_object, var_313_cvector);
			if(var_317_object != null) {
				var_317_object = var_312_object;
				var_317_object = null;
			}
			if(var_312_object != null) {
				if(var_311_bool == 0) goto Label_1385;
				var_311_bool = false;
				@RotatePath(var_312_object, var_310_bool);
				if(!var_310_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_336_string;
						func_1479(var_336_string);
						string var_337_string;
						func_1481(var_337_string);
						@FollowPath(var_312_object, var_300_bool, var_310_bool, var_336_string, var_337_string);
						if(!var_310_bool) { //@nz
							if(var_0_object == 0) goto Label_1404;
							var_312_object = null;
						}
					EMIT "GOTO 0x57d";

					Label_1404:
						} else {
					var_312_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_310_bool);
					if(!var_310_bool) { //@nz
						if(var_0_object != 0) {
							var_312_object = null;
							goto Label_1432;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1432;
		}
			var_317_object = null;
			goto Label_1430;

		Label_1430:
			var_312_object = null;

		}
	Label_1432:
		for(;;) {
			var_296_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_1863(object var_16_object, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	@AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	object var_27_object;
	var_16_object = var_27_object;
	func_1751(var_27_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_846(object var_0_object, bool var_1_bool, bool var_485_bool, float var_486_float)
{
	string var_494_string;
	func_1187(var_494_string);
	int var_491_int;
	@irand(var_491_int, var_1_bool);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2098();
	@PlayAnimation("all", ("attack_begin" + (var_491_int + 1)));
	@WaitForAnimEnd();
	int var_493_int;
	func_1155(var_493_int, var_494_string);
	bool var_515_bool;
	func_1708(var_515_bool, var_0_object);
	if(!var_515_bool) { //@nz
		@StopAsync();
		var_485_bool = false;
		return 8;
	}
	float var_518_float; int var_519_int;
	var_486_float = var_518_float;
	var_491_int = var_519_int;
	func_807(var_494_string, var_518_float, var_519_int);
	bool var_492_bool;
	@HasAnimation(var_492_bool, "all", ("attack_middle" + var_491_int));
	if(var_492_bool != 0) {
		func_2098();
		@PlayAnimation("all", ("attack_middle" + var_491_int));
		@WaitForAnimEnd();
		func_1187(var_494_string);
		bool var_628_bool;
		func_1708(var_628_bool, var_0_object);
		if(!var_628_bool) { //@nz
			@StopAsync();
			var_485_bool = false;
			return 8;
		}
		float var_631_float; int var_632_int;
		var_486_float = var_631_float;
		func_807(var_494_string, var_631_float, var_632_int);
		var_493_int = 1;

		for(;;) {
			var_494_string = (("attack_middle" + var_632_int) + "_") + var_493_int;
			@HasAnimation(var_492_bool, "all", var_494_string);
			if(!var_492_bool) { //@nz
			} else {
				func_2098();
				@PlayAnimation("all", var_494_string);
				@WaitForAnimEnd();
				func_1187(var_494_string);
				bool var_654_bool;
				func_1708(var_654_bool, var_0_object);
				if(!var_654_bool) { //@nz
					@StopAsync();
					var_485_bool = false;
					return 8;
				}
				float var_657_float; int var_658_int;
				var_486_float = var_657_float;
				var_491_int = var_658_int;
				func_807(var_494_string, var_657_float, var_658_int);
				var_493_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_491_int));
		bool var_643_bool;
		func_1197(var_643_bool);
		if(var_643_bool != 0) {
			bool var_644_bool;
			func_985(var_644_bool, 0.45);
			@StopAsync();
		}
		var_485_bool = true;
		return 8;

	}
}


void func_340(object var_0_object, bool var_75_bool, object var_76_object, object var_195_object)
{
	object var_92_object;
	var_76_object = var_92_object;
	func_2089(var_92_object);
	bool var_97_bool; object var_98_object;
	var_76_object = var_98_object;
	func_1742(var_97_bool, var_98_object);
	bool var_111_bool; object var_112_object;
	func_1708(var_111_bool, var_112_object);
	if(!var_111_bool) { //@nz
		var_75_bool = false;
		return 14;
	}
	func_2098();
	@Face(var_112_object);
	@PlayAnimation("all", "aattack_begin1");
	@WaitForAnimEnd();
	bool var_122_bool; object var_123_object;
	var_76_object = var_123_object;
	func_1708(var_122_bool, var_123_object);
	if(!var_122_bool) { //@nz
		@StopAsync();
		var_75_bool = false;
		return 14;
	}
	@PlayAnimation("all", "aattack_end1");
	object var_85_object;
	@GetScene(var_85_object);
	cvector var_86_cvector;
	bool var_87_bool;
	@GetGeometryLocator("knife", var_87_bool, var_86_cvector);
	object var_88_object;
	@AddActorByType(var_88_object, "scripted", var_85_object, var_86_cvector, [0.0, 0.0, 1.0], "grabitel_knife.xml");
	object var_132_object;
	func_1956(var_132_object);
	var_88_object->SetScriptProperty("Owner", var_132_object);
	var_88_object->SetScriptProperty("Target", var_76_object);
	cvector var_89_cvector;
	var_76_object->GetPosition(var_89_cvector);
	float var_90_float;
	var_76_object->GetEyesHeight(var_90_float);
	var_134_float = GetByIndex(var_89_cvector, 1);
	SetByIndex(var_89_cvector, 1) = (var_134_float + (var_90_float - 10));
	cvector var_137_cvector; cvector var_138_cvector; cvector var_139_cvector;
	var_86_cvector = var_138_cvector;
	var_89_cvector = var_139_cvector;
	func_2290(var_137_cvector, var_138_cvector, var_139_cvector, 2000.0);
	cvector var_91_cvector;
	var_137_cvector = var_91_cvector;
	var_88_object->SetScriptProperty("StartDirection", var_91_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	if(false != 0) {
		var_75_bool = true;
		return 14;
	}
	bool var_190_bool; object var_191_object;
	var_76_object = var_191_object;
	func_1708(var_190_bool, var_191_object);
	if(!var_190_bool) { //@nz
		var_75_bool = false;
		return 14;
	}
	bool var_193_bool; object var_194_object;
	var_76_object = var_194_object;
	TaskCall(4);
	func_466(var_193_bool, var_194_object);
	TaskReturn();
	var_195_object = var_75_bool;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_1877(object var_370_object)
{
	cvector var_374_cvector;
	var_370_object->GetPosition(var_374_cvector);
	cvector var_375_cvector;
	@GetPosition(var_375_cvector);
	cvector var_376_cvector = var_374_cvector - var_375_cvector;
	var_377_float = GetByIndex(var_376_cvector, 0);
	var_378_float = GetByIndex(var_376_cvector, 2);
	@RotateAsync(var_377_float, var_378_float);
}


void func_1888(bool var_25_bool)
{
	bool var_27_bool;
	@IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
}


void func_1893(object var_14_object)
{
	float var_17_float;
	var_14_object->GetEyesHeight(var_17_float);
	cvector var_18_cvector = [0.0, 0.0, 0.0];
	var_19_float = GetByIndex(var_18_cvector, 1);
	var_17_float = var_19_float;
	SetByIndex(var_18_cvector, 1) = var_19_float;
	@LookAsync(var_14_object, "head", var_18_cvector);
}


void func_1904(string var_39_string, int var_40_int, int var_41_int)
{
	bool var_43_bool;
	int var_45_int;
	var_40_int = var_45_int;
	int var_46_int;
	var_41_int = var_46_int;
	bool var_44_bool;
	func_2022(var_44_bool, var_45_int, var_46_int);
	if(var_44_bool != 0)
		@AddItem(var_43_bool, var_39_string, 0);
}


void func_1915(string var_126_string)
{
	bool var_135_bool; int var_136_int; bool var_137_bool; int var_138_int; bool var_139_bool; float var_140_float; cvector var_141_cvector; cvector var_142_cvector;
	@IsExisting3DSound(var_135_bool, var_126_string);
	if(!var_135_bool) { //@nz
		var_136_int = 0;

		for(;;) {
			@IsExisting3DSound(var_137_bool, (var_126_string + (var_136_int + 1)));
			if(!var_137_bool) { //@nz
				break;
			Label_1935:
				@irand(var_138_int, var_136_int);
				var_126_string += (var_138_int + 1);
	}
			@Is3DSoundLoaded(var_139_bool, var_126_string);
			if(var_139_bool != 0) {
				@GetEyesHeight(var_140_float);
				@GetDirection(var_141_cvector);
				var_142_cvector = var_141_cvector * 50;
				var_153_float = GetByIndex(var_142_cvector, 1);
				SetByIndex(var_142_cvector, 1) = (var_153_float + var_140_float);
				@PlayGlobalSound(var_126_string, var_142_cvector);
			}
		}
		var_136_int += 1;
	}
	var_148_bool = !var_136_int; //@nz
	if(var_148_bool == 0) goto Label_1935;
}


// @pe
void func_1434(bool var_0_bool, object var_1_object, int var_18_int)
{
	if(var_18_int != 0)
		return 0;
	bool var_21_bool;
	func_1472(var_21_bool, var_1_object);
	if(!var_21_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1956(object var_99_object)
{
	object var_101_object;
	@self(var_101_object);
	var_101_object = var_99_object;
}
EMIT "Stack[-1] = 0";


void func_1962(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_51_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_51_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_51_float;
}


void func_1456(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1972(float var_570_float, float var_571_float, float var_572_float)
{
	if(var_571_float < var_572_float)
		var_571_float = var_570_float;
	else
		var_572_float = var_570_float;
	
}


// @pe
void func_1979(float var_157_float, float var_158_float, float var_159_float, float var_160_float)
{
	var_157_float = (var_159_float * var_159_float) - ((4 * var_158_float) * var_160_float);
}


// @pe
void func_1472(bool var_21_bool, object var_22_object)
{
	object var_24_object;
	var_22_object = var_24_object;
	bool var_23_bool;
	func_1708(var_23_bool, var_24_object);
	var_23_bool = var_21_bool;
}


void func_1986(float var_171_float, float var_172_float, float var_173_float, float var_175_float)
{
	float var_177_float;
	var_178_int = -var_173_float;
	if(((var_178_int - var_175_float) / (2 * var_172_float)) > 0) {
		var_177_float = var_171_float;
		return 2;
	}
	var_184_int = -var_173_float;
	var_171_float = (var_184_int + var_175_float) / (2 * var_172_float);
}


void func_1479(string var_336_string)
{
	var_336_string = "walk";
}


void func_1481(string var_337_string)
{
	var_337_string = "run";
}


// @pe
void func_1483(object var_53_object)
{
	
	for(;;) {
		bool var_54_bool; object var_55_object;
		TaskCall(2);
		func_303(var_52_object, var_55_object, var_54_bool, var_55_object);
		TaskReturn();
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_466(bool var_193_bool, object var_194_object)
{
	var_201_bool = GlobalVars[0];
	GlobalVars[0] = false;
	object var_202_object;
	func_543(var_198_bool, var_199_float, var_200_int, var_193_bool, var_202_object, var_202_object, true, 200.0);
	bool var_676_bool = false;
	var_677_bool = GlobalVars[0];
	if(var_677_bool != 0) {
		if(var_3_int != 0)
			var_676_bool = true;
	}
	if(var_676_bool != 0) {
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
	}
	var_681_bool = GlobalVars[0];
	var_681_bool = var_193_bool;
}


// @pe
void func_2003(float var_90_float, float var_91_float, float var_92_float, float var_93_float)
{
	if(var_91_float < var_92_float) {
		var_92_float = var_90_float;
		return 0;
	}
	if(var_91_float > var_93_float) {
		var_93_float = var_90_float;
		return 0;
	}
	var_91_float = var_90_float;
}


void func_983(int var_3_int)
{
	var_3_int = true;
}


// @pe
void func_1495(string var_560_string, int var_561_int)
{
	if(var_561_int == 2) {
		var_560_string = "fire";
		return 0;
	EMIT "GOTO 0x5e3";
	}
	if(var_561_int == 1) {
		var_560_string = "bullet";
		return 0;
	}
	var_560_string = "phys";
}


void func_985(bool var_644_bool, float var_645_float)
{
	float var_648_float; bool var_649_bool;
	@rand(var_648_float);
	if(var_648_float < var_645_float) {

		for(;;) {
			@IsAnimationPlaying(var_649_bool);
			if(!var_649_bool) { //@nz
			} else {
				bool var_652_bool;
				func_1083(var_652_bool);
				if(var_652_bool != 0) {
					var_644_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_644_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1187(var_649_bool);
}


// @pe
void func_2014(bool var_69_bool, float var_70_float, float var_71_float, float var_72_float)
{
	var_69_bool = false;
	if(var_70_float >= var_71_float) {
		if(var_70_float <= var_72_float)
			var_69_bool = true;
	}
}


void func_1509(cvector var_44_cvector, object var_45_object)
{
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	var_45_object->GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
}


void func_2022(bool var_44_bool, int var_45_int, int var_46_int)
{
	int var_48_int;
	@irand(var_48_int, var_46_int);
	var_44_bool = var_48_int < var_45_int;
}


// @pe
void func_2027(bool var_61_bool, object var_62_object, float var_63_float)
{
	if(!var_62_object) { //@nz
		var_61_bool = false;
		return 0;
	}
	if(var_63_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_63_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_68_float;
		var_63_float = var_68_float;
		func_2079(var_68_float);
		bool var_72_bool; object var_73_object; float var_75_float;
		var_62_object = var_73_object;
		var_63_float = var_75_float;
		func_1541(var_72_bool, var_73_object, "reputation", var_75_float, (float)0, (float)1);
		var_61_bool = true;
		return 0;

	}
	
	var_61_bool = false;
}


void func_1516(float var_61_float, object var_62_object)
{
	cvector var_66_cvector;
	@GetPosition(var_66_cvector);
	cvector var_67_cvector;
	var_62_object->GetPosition(var_67_cvector);
	var_61_float = (var_67_cvector - var_66_cvector) | (var_67_cvector - var_66_cvector);
}


// @pe
void func_494(float var_529_float)
{
	var_529_float = 0.15;
}


// @pe
void func_497(int var_536_int)
{
	var_536_int = 0;
}


void func_1524(bool var_57_bool, object var_58_object)
{
	bool var_60_bool;
	@IsPlayerActor(var_58_object, var_60_bool);
	var_60_bool = var_57_bool;
}


void func_1012(object var_0_object, bool var_424_bool, float var_425_float)
{
	bool var_431_bool; cvector var_432_cvector; cvector var_433_cvector; cvector var_434_cvector; float var_435_float;
	
	for(;;) {
		@IsAnimationPlaying(var_431_bool);
		if(!var_431_bool) //@nz
			break;
		bool var_437_bool;
		func_1083(var_437_bool);
		if(var_437_bool != 0) {
			var_424_bool = true;
			return 10;
		}
		bool var_480_bool;
		func_1708(var_480_bool, var_0_object);
		if(!var_480_bool) { //@nz
			var_424_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_432_cvector); //@t
		@GetPFPosition(var_433_cvector);
		var_434_cvector = var_432_cvector - var_433_cvector;
		var_435_float = var_434_cvector | var_434_cvector;
		if(var_435_float < (var_425_float * var_425_float)) {
			bool var_485_bool; float var_486_float;
			var_425_float = var_486_float;
			func_846(var_434_cvector, var_435_float, var_485_bool, var_486_float);
			var_424_bool = true;
			return 10;
		}
		@sync();
	}
	func_1187(var_435_float);
	var_424_bool = false;
}


void func_500(int var_597_int)
{
	var_597_int = 1;
}


// @pe
void func_502(object var_598_object, float var_599_float)
{
	bool var_600_bool = false;
	if(var_599_float > 0) {
		bool var_603_bool; object var_604_object;
		var_598_object = var_604_object;
		func_1636(var_603_bool, var_604_object);
		if(var_603_bool != 0)
			var_600_bool = true;
	}
	if(var_600_bool != 0) {
		var_620_bool = GlobalVars[0];
		GlobalVars[0] = true;
		func_983(var_599_float);
	}
}


void func_1529(bool var_80_bool, object var_81_object, string var_82_string)
{
	var_87_bool = IsFuncExist(var_81_object, "HasProperty", 2);
	if(!var_87_bool) { //@nz
		var_80_bool = false;
		return 2;
	}
	bool var_84_bool;
	var_81_object->HasProperty(var_82_string, var_84_bool);
	var_84_bool = var_80_bool;
}


