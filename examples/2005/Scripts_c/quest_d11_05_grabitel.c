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
		func_2150(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_123();
			object var_51_object;
			var_14_object = var_51_object;
			func_2157(var_51_object);
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
			func_2169(var_14_object);
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
		func_2233();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2235(var_15_object);
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
		func_2233();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, object var_8_object, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2235(var_15_object);
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
		func_2233();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_object = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2235(var_15_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, string var_10_string)
	{
		if(var_10_string == "kill") {
			var_13_bool = GlobalVars[0];
			GlobalVars[0] = true;
			func_1279(var_10_string);
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, int var_10_int)
	{
		if(var_10_int == 1) {
			func_2055(var_1_object);
		} else {
			int var_18_int;
			func_1423(var_9_bool, var_18_int, var_18_int);
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
			func_1882(var_14_object);
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
		func_1279(var_10_object);
		object var_15_object;
		var_10_object = var_15_object;
		func_2144();
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
	func_1784(var_14_object, var_15_int, var_16_float);
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
	func_1852(var_18_float, var_19_cvector, var_20_cvector);
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
	func_2105(var_11_object);
}


void func_2055(object var_13_object)
{
	bool var_15_bool;
	@IsPlayerActor(var_13_object, var_15_bool);
	if(var_15_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_2064(void)
{
	object var_120_object;
	@GetScene(var_120_object);
	object var_122_object;
	func_1934(var_122_object);
	@BroadcastMessage("battle", var_122_object, var_120_object);
}
EMIT "Stack[-1] = 0";


void func_1552(float var_535_float, object var_536_object, float var_537_float, int var_538_int)
{
	int var_548_int; int var_550_int;
	object var_555_object;
	var_536_object = var_555_object;
	bool var_554_bool;
	func_1518(var_554_bool, var_555_object, "health");
	if(!var_554_bool) //@nz
		var_535_float = 0.0;
	bool var_558_bool; object var_559_object;
	func_1518(var_558_bool, var_559_object, "armor");
	if(!var_558_bool) //@nz
		var_548_int = 0;
	else
		var_559_object->GetProperty("armor", var_548_int);
	string var_563_string; int var_564_int;
	var_538_int = var_564_int;
	func_1484(var_563_string, var_564_int);
	string var_549_string = "armor_" + var_563_string;
	bool var_569_bool; object var_570_object; string var_571_string;
	var_536_object = var_570_object;
	func_1518(var_569_bool, var_570_object, var_571_string);
	if(!var_569_bool) //@nz
		var_550_int = 0;
	else
		var_536_object->GetProperty(var_571_string, var_550_int);

	float var_573_float;
	func_1950(var_573_float, ((var_548_int + var_550_int) / 100.0), (float)1);
	float var_551_float;
	var_573_float = var_551_float;
	float var_552_float;
	var_536_object->GetProperty("health", var_552_float);
	float var_553_float = var_537_float * (1 - var_551_float);
	float var_583_float;
	func_1981(var_583_float, (var_552_float - var_553_float), (float)0, (float)1);
	var_536_object->SetProperty("health", var_583_float);
	bool var_589_bool; object var_590_object;
	var_536_object = var_590_object;
	func_1513(var_589_bool, var_590_object);
	if(var_589_bool != 0) {
		float var_591_float = -var_553_float;
		func_2035(var_591_float);
	}
	var_553_float = var_535_float;
	
}


void func_532(object var_0_object, int var_3_int, bool var_5_bool, object var_205_object, bool var_206_bool, float var_207_float, bool var_276_bool, bool var_368_bool)
{
	float var_219_float; cvector var_220_cvector; cvector var_221_cvector; bool var_223_bool; float var_226_float; cvector var_227_cvector; bool var_228_bool; float var_229_float;
	func_761(var_227_cvector, var_228_bool, var_229_float);
	var_5_bool = 0;
	var_254_bool = IsFuncExist(var_205_object, "@GetAttackDistance", 1);
	if(var_254_bool != 0) {
		var_205_object->GetAttackDistance(var_219_float);
		var_219_float += 50;
	} else {
						var_207_float = var_219_float;
	}
	if(var_219_float >= 150)
		var_219_float = 150;
	var_3_int = false;
	var_0_object = var_205_object;
	bool var_222_bool;
	@IsPlayerActor(var_0_object, var_222_bool);
	if(var_222_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_260_object;
		func_1934(var_260_object);
		@SendPlayerEnemy(var_205_object, var_260_object);
	}
	if(var_206_bool != 0)
		var_223_bool = false;
	else
		var_223_bool = true;

	
Label_572:
	for(;;) {
		bool var_263_bool = false;
		bool var_264_bool;
		func_1697(var_264_bool, var_0_object);
		if(var_264_bool != 0) {
			if(!var_3_int) //@nz
				var_263_bool = true;
		}
		if(var_263_bool != 0) {
			func_1176(var_229_float);
			var_0_object->GetPFPosition(var_220_cvector); //@t
			@GetPFPosition(var_221_cvector);
			var_226_float = (var_220_cvector - var_221_cvector) | (var_220_cvector - var_221_cvector);
			if(var_226_float >= ((300.0 + var_219_float) * (300.0 + var_219_float))) {
				bool var_270_bool; float var_272_float;
				var_219_float = var_272_float;
				TaskCall(5);
				func_1216(var_278_bool, var_270_bool, var_0_object, var_272_float, 3000.0, true, false);
				TaskReturn();
				if(!var_276_bool) { //@nz
				} else {
					var_223_bool = false;
			} else {
			if(var_226_float >= (var_207_float * var_207_float)) {
				var_0_object->GetPFPosition(var_227_cvector); //@t
				@CanReachByPF(var_228_bool, var_227_cvector);
				if(!var_228_bool) { //@nz
					bool var_362_bool; float var_364_float;
					var_219_float = var_364_float;
					TaskCall(5);
					func_1216(var_370_bool, var_362_bool, var_0_object, var_364_float, 3000.0, true, false);
					TaskReturn();
					if(!var_368_bool) { //@nz
						goto Label_744;
					}
					var_223_bool = false;
					goto Label_572;
				}
				if(!var_223_bool) { //@nz
					func_1866(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1176(var_229_float);
					@StopAsync();
					var_223_bool = true;
					bool var_384_bool;
					func_1697(var_384_bool, var_0_object);
					if(!var_384_bool) { //@nz
						goto Label_744;
					}
				}
				@rand(var_229_float);
				bool var_387_bool;
				var_389_bool = var_229_float < 0.19999999;
				if(var_389_bool != 1) {
					bool var_390_bool;
					func_1133(true, var_390_bool);
					if(var_390_bool != 1)
						var_387_bool = false;
				}
				if(var_387_bool != 0) {
					@Face(var_0_object);
					func_1181();
					@PlayAnimation("all", "attack_stay");
					bool var_427_bool; float var_428_float;
					func_1001(var_229_float, var_427_bool, var_428_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1176(var_229_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_662_bool;
					func_1133(var_229_float, var_662_bool);
					var_663_bool = !var_662_bool; //@nz
					if(var_663_bool == 0) goto Label_734;
					bool var_664_bool;
					func_1697(var_664_bool, var_0_object);
					if(!var_664_bool) { //@nz
						goto Label_744;
					}
					var_0_object->GetPFPosition(var_220_cvector); //@t
					@GetPFPosition(var_221_cvector);
					if(!(((var_220_cvector - var_221_cvector) | (var_220_cvector - var_221_cvector)) < (var_428_float * var_428_float))) goto Label_734;
					bool var_669_bool; float var_670_float;
					var_207_float = var_670_float;
					func_835(var_228_bool, var_229_float, var_669_bool, var_670_float);
					var_671_bool = !var_669_bool; //@nz
					if(var_671_bool == 0) goto Label_734;
					goto Label_744;
			}
				bool var_672_bool; float var_673_float;
				var_207_float = var_673_float;
				func_835(var_228_bool, var_229_float, var_672_bool, var_673_float);
				if(!var_672_bool) { //@nz
					goto Label_744;
				}
				var_223_bool = true;

			}
		Label_734:
			goto Label_743;
			}
			Label_743:
			}
		}
	Label_744:
		@WaitForAnimEnd();
		if(var_3_int != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_222_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1044(object var_0_object, bool var_442_bool)
{
	cvector var_448_cvector; cvector var_449_cvector;
	bool var_453_bool;
	func_1697(var_453_bool, var_0_object);
	if(!var_453_bool) { //@nz
		var_442_bool = false;
		return 10;
	}
	bool var_456_bool;
	float var_452_float;
	func_1133(var_452_float, var_456_bool);
	if(var_456_bool != 0) {
		var_0_object->GetPFPosition(var_448_cvector); //@t
		@GetPFPosition(var_449_cvector);
		var_0_object->GetAttackDistance(var_452_float); //@t
		var_442_bool = ((var_448_cvector - var_449_cvector) | (var_448_cvector - var_449_cvector)) <= ((var_452_float + 50) * (var_452_float + 50));
		return 10;
	}
	var_442_bool = false;
}


void func_2075(bool var_613_bool)
{
	bool var_615_bool;
	@GetVariable("god_mode", var_615_bool);
	var_615_bool = var_613_bool;
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


void func_42(void)
{
	int var_20_int; int var_21_int; bool var_22_bool; float var_23_float; bool var_24_bool;
	@WaitForAnimEnd();
	bool var_25_bool;
	func_1877(var_25_bool);
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
			func_1877(var_45_bool);
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


void func_1072(bool var_440_bool)
{
	bool var_441_bool = false;
	bool var_442_bool;
	func_1044(var_441_bool, var_442_bool);
	if(var_442_bool != 0) {
		bool var_459_bool;
		func_1088(var_440_bool, var_441_bool, var_459_bool);
		if(var_459_bool != 0)
			var_441_bool = true;
	}
	if(var_441_bool != 0) {
		var_440_bool = true;
		return 0;
	}
	var_440_bool = false;
}


// @pe
void func_2105(object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	TaskCall(1);
	func_128(var_12_object);
	TaskReturn();
}


void func_1088(object var_0_object, int var_4_int, bool var_459_bool)
{
	object var_465_object; float var_467_float; cvector var_468_cvector; cvector var_469_cvector;
	@GetScene(var_465_object);
	bool var_466_bool = false;
	
	for(;;) {
		cvector var_470_cvector;
		func_1498(var_470_cvector, var_0_object);
		var_476_int = -var_470_cvector;
		@FindDirLength(var_467_float, var_476_int, var_4_int);
		if(var_467_float < var_4_int) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_468_cvector); //@t
				@GetPFPosition(var_469_cvector);
				@WaitForAnimEnd();
				func_1176(var_469_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_466_bool = true;
				bool var_481_bool;
				func_1044(var_469_cvector, var_481_bool);
				var_482_bool = !var_481_bool; //@nz
				if(var_482_bool == 0) goto Label_1129;
		}
		for(;;) {
			var_466_bool = var_459_bool;

		}

	Label_1129:
	}
}
EMIT "Stack[-5] = 0";


void func_1625(bool var_602_bool, object var_603_object)
{
	object var_607_object;
	var_603_object = var_607_object;
	bool var_606_bool;
	func_1518(var_606_bool, var_607_object, "health");
	if(!var_606_bool) { //@nz
		var_602_bool = false;
		return 2;
	}
	bool var_610_bool = false;
	bool var_611_bool; object var_612_object;
	func_1513(var_611_bool, var_612_object);
	if(var_611_bool != 0) {
		bool var_613_bool;
		func_2075(var_613_bool);
		if(var_613_bool != 0)
			var_610_bool = true;
	}
	if(var_610_bool != 0) {
		var_602_bool = false;
		return 2;
	}
	float var_605_float;
	var_612_object->GetProperty("health", var_605_float);
	var_602_bool = var_605_float <= 0.0;
}


// @pe
void func_2150(bool var_15_bool, object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	bool var_17_bool;
	func_1697(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
}


// @pe
void func_2157(object var_51_object)
{
	object var_52_object;
	var_51_object = var_52_object;
	func_2182(var_52_object);
}


void func_1133(object var_0_object, bool var_390_bool)
{
	bool var_392_bool;
	var_395_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_395_bool != 0) {
		var_0_object->IsAttacking(var_392_bool); //@t
		var_392_bool = var_390_bool;
	}
	var_390_bool = false;
}


void func_2163(int var_15_int)
{
	int var_17_int;
	@GetVariable("branch", var_17_int);
	var_17_int = var_15_int;
}


void func_1656(bool var_38_bool, object var_39_object)
{
	bool var_41_bool;
	var_39_object->IsDead(var_41_bool);
	var_41_bool = var_38_bool;
}


void func_121(bool var_54_bool)
{
	var_54_bool = true;
}


// @pe
void func_2169(object var_14_object)
{
	int var_15_int;
	func_2163(var_15_int);
	if(var_15_int == 1)
		@WorkWithCorpse(var_14_object);
	else
		@Barter(var_14_object);
	
}


void func_123(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1144(object var_2_object, bool var_5_bool)
{
	int var_506_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_505_float;
	@rand(var_505_float);
	float var_512_float;
	func_1190(var_512_float);
	if(var_505_float < var_512_float) {
		@irand(var_506_int, var_2_object);
		@Speak("attack" + (var_506_int + 1));
		int var_517_int;
		func_1188(var_517_int);
		var_5_bool = var_517_int;
	}
}


void func_1661(bool var_27_bool, object var_28_object)
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
		func_1656(var_38_bool, var_39_object);
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
void func_128(object var_12_object)
{
	object var_14_object;
	var_12_object = var_14_object;
	bool var_13_bool;
	func_1513(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		bool var_17_bool; object var_18_object;
		var_12_object = var_18_object;
		func_2000(var_17_bool, var_18_object, 0.03);
	}
	object var_55_object;
	var_12_object = var_55_object;
	func_144(var_55_object);
}


void func_2182(object var_52_object)
{
	object var_54_object;
	@GetScene(var_54_object);
	object var_55_object;
	func_1934(var_55_object);
	var_54_object->RemoveStationaryActor(var_55_object);
	object var_58_object;
	var_52_object = var_58_object;
	TaskCall(6);
	func_1472(var_58_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


// @pe
void func_144(object var_55_object)
{
	object var_56_object;
	var_55_object = var_56_object;
	func_169(var_56_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2198(cvector var_140_cvector, cvector var_141_cvector, cvector var_142_cvector, float var_143_float)
{
	cvector var_150_cvector; float var_155_float;
	var_150_cvector = var_142_cvector - var_141_cvector;
	float var_151_float = 250000;
	var_156_float = GetByIndex(var_150_cvector, 1);
	float var_152_float = (var_156_float * 1000) - (var_143_float * var_143_float);
	float var_153_float = var_150_cvector | var_150_cvector;
	float var_160_float; float var_161_float; float var_162_float; float var_163_float;
	var_151_float = var_161_float;
	var_152_float = var_162_float;
	var_153_float = var_163_float;
	func_1957(var_160_float, var_161_float, var_162_float, var_163_float);
	float var_154_float;
	var_160_float = var_154_float;
	if(var_154_float < 0) {
		var_155_float = 1;
	} else {
		float var_174_float; float var_175_float; float var_176_float; float var_177_float; float var_178_float;
		var_151_float = var_175_float;
		var_152_float = var_176_float;
		var_153_float = var_177_float;
		var_178_float = sqrt(var_154_float);
		func_1964(var_175_float, var_176_float, var_177_float, var_178_float);
		var_155_float = sqrt(var_174_float);
	}
	var_140_cvector = (var_150_cvector + (([0.0, 500.0, 0.0] * var_155_float) * var_155_float)) / var_155_float;
	
}


void func_1176(object var_0_object)
{
	func_2055(var_0_object);
}


void func_1181(void)
{
	func_1893("attack_stay");
}


void func_1697(bool var_23_bool, object var_24_object)
{
	object var_28_object;
	var_24_object = var_28_object;
	bool var_27_bool;
	func_1661(var_27_bool, var_28_object);
	if(!var_27_bool) { //@nz
		var_23_bool = false;
		return 2;
	}
	bool var_45_bool; object var_46_object;
	func_1518(var_45_bool, var_46_object, "noaccess");
	if(!var_45_bool) { //@nz
		var_23_bool = true;
		return 2;
	}
	int var_26_int;
	var_46_object->GetProperty("noaccess", var_26_int);
	var_23_bool = var_26_int == 0;
}


void func_1186(bool var_642_bool)
{
	var_642_bool = true;
}


void func_1188(int var_517_int)
{
	var_517_int = 1;
}


void func_1190(float var_512_float)
{
	var_512_float = 0.5;
}


void func_169(object var_56_object)
{
	cvector var_67_cvector; cvector var_68_cvector; cvector var_69_cvector; cvector var_70_cvector; string var_71_string; object var_72_object; bool var_73_bool; bool var_74_bool; float var_75_float; cvector var_76_cvector;
	if(var_56_object == null) {
		func_260("fdie");
	} else {
		var_56_object->GetPosition(var_67_cvector);
		@GetPosition(var_68_cvector);
		@GetDirection(var_69_cvector);
		var_70_cvector = var_68_cvector - var_67_cvector;
		var_110_float = GetByIndex(var_70_cvector, 0);
		var_111_float = GetByIndex(var_69_cvector, 0);
		var_113_float = GetByIndex(var_70_cvector, 2);
		var_114_float = GetByIndex(var_69_cvector, 2);
		if(((var_110_float * var_111_float) + (var_113_float * var_114_float)) >= 0)
			var_71_string = "fdie";
		else
			var_71_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_56_object = var_72_object;
		var_121_bool = IsFuncExist(var_56_object, "GetScriptProperty", 2);
		if(var_121_bool != 0) {
			var_56_object->HasScriptProperty(var_73_bool, "Owner");
			if(var_73_bool != 0) {
				var_56_object->GetScriptProperty(var_72_object, "Owner");
				if(var_72_object == null)
					var_56_object = var_72_object;
			}
		}
		var_128_bool = IsFuncExist(var_72_object, "@GetEyesHeight", 1);
		if(var_128_bool != 0) {
			var_72_object->GetEyesHeight(var_75_float);
			var_76_cvector = [0.0, 0.0, 0.0];
			var_129_float = GetByIndex(var_76_cvector, 1);
			var_75_float = var_129_float;
			SetByIndex(var_76_cvector, 1) = var_129_float;
			@LookAsync(var_56_object, "head", var_76_cvector);
			var_74_bool = true;
		} else {
			var_74_bool = false;

		}
		string var_131_string;
		var_71_string = var_131_string;
		func_1893(var_131_string);
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
void func_2233(void)
{
}


void func_1721(bool var_106_bool, cvector var_107_cvector)
{
	cvector var_111_cvector;
	@GetPosition(var_111_cvector);
	cvector var_112_cvector = var_107_cvector - var_111_cvector;
	var_114_float = GetByIndex(var_112_cvector, 0);
	var_115_float = GetByIndex(var_112_cvector, 2);
	bool var_113_bool;
	@Rotate(var_114_float, var_115_float, var_113_bool);
	var_113_bool = var_106_bool;
}


// @pe
void func_2235(bool var_13_bool)
{
	var_13_bool = false;
}


void func_1216(object var_2_object, bool var_270_bool, object var_271_object, float var_272_float, float var_273_float, bool var_274_bool, bool var_275_bool)
{
	object var_283_object;
	func_2055(var_283_object);
	@SetTimer(1, 5);
	bool var_281_bool;
	@CanSee(var_281_bool, var_283_object);
	if(var_281_bool != 0) {
		var_2_object = true;
		object var_287_object;
		var_271_object = var_287_object;
		func_1882(var_287_object);
	} else {
		var_2_object = false;
	}
	bool var_294_bool; object var_295_object;
	func_1513(var_294_bool, var_295_object);
	if(var_294_bool != 0) {
		object var_298_object;
		func_1934(var_298_object);
		@SendPlayerEnemy(var_295_object, var_298_object);
	}
	bool var_299_bool; object var_300_object; float var_301_float; float var_302_float; bool var_303_bool; bool var_304_bool;
	var_271_object = var_300_object;
	var_272_float = var_301_float;
	var_273_float = var_302_float;
	var_274_bool = var_303_bool;
	var_275_bool = var_304_bool;
	bool var_282_bool;
	func_1321(var_281_bool, var_282_bool, var_299_bool, var_300_object, var_301_float, var_302_float, var_303_bool, var_304_bool);
	var_299_bool = var_282_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_282_bool = var_270_bool;
	
}


void func_1731(bool var_102_bool, object var_103_object)
{
	cvector var_105_cvector;
	var_103_object->GetPosition(var_105_cvector);
	bool var_106_bool; cvector var_107_cvector;
	var_105_cvector = var_107_cvector;
	func_1721(var_106_bool, var_107_cvector);
	var_106_bool = var_102_bool;
}


void func_1740(object var_27_object)
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


void func_1784(object var_14_object, int var_15_int, float var_16_float)
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
		func_1498(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1940(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		@CreateVectorVector(var_27_object);
		var_28_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_28_int), var_29_bool, var_30_cvector, var_31_cvector);
			if(!var_29_bool) { //@nz
				break;
			Label_1846:
				var_27_object = null;
	}
			object var_104_object;
			var_14_object = var_104_object;
			func_1740(var_104_object);
		}
		if((var_31_cvector | var_26_cvector) >= 0.70710677)
			var_27_object->add(var_30_cvector);
		var_28_int += 1;
	}
	int var_32_int;
	var_27_object->size(var_32_int);
	if(var_32_int == 0) goto Label_1846;
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
	func_1852(var_61_float, var_62_cvector, var_63_cvector);
}


void func_761(bool var_1_bool, object var_2_object, int var_4_int)
{
	bool var_233_bool; bool var_234_bool; cvector var_235_cvector;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_233_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_233_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_234_bool, ("attack" + (var_2_object + 1)));
			if(!var_234_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_235_cvector, "all", "bjump");
		var_249_float = GetByIndex(var_235_cvector, 2);
		var_4_int = -var_249_float;

	}
}


void func_1279(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_1445(var_10_object);
}


// @pe
void func_260(string var_78_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_79_string;
	var_78_string = var_79_string;
	func_1893(var_79_string);
	@PlayAnimation("all", var_78_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_78_string);
	@RemoveEnvelope();
}


void func_796(object var_0_object, float var_521_float, int var_522_int)
{
	object var_526_object; float var_527_float; float var_528_float;
	@GetVictim((var_521_float * 0.9), var_526_object);
	@ReportAttack(var_0_object);
	if(var_526_object == var_0_object) {
		float var_532_float; object var_533_object; int var_534_int;
		var_526_object = var_533_object;
		var_522_int = var_534_int;
		func_483(var_534_int);
		var_532_float = var_527_float;
		float var_535_float; object var_536_object; float var_537_float; int var_538_int;
		var_526_object = var_536_object;
		int var_539_int; object var_540_object; int var_541_int;
		var_526_object = var_540_object;
		var_522_int = var_541_int;
		func_486(var_541_int);
		var_539_int = var_538_int;
		func_1552(var_535_float, var_536_object, var_537_float, var_538_int);
		var_535_float = var_528_float;
		int var_596_int;
		func_489(var_596_int);
		@ReportHit(var_0_object, var_596_int, var_528_float, var_537_float);
		object var_597_object; float var_598_float;
		var_526_object = var_597_object;
		var_528_float = var_598_float;
		func_491(var_597_object, var_598_float);
	}
}
EMIT "Stack[-3] = 0";


void func_292(bool var_59_bool, object var_60_object, bool var_82_bool, object var_683_object)
{
	object var_64_object;
	var_60_object = var_64_object;
	bool var_63_bool;
	func_1697(var_63_bool, var_64_object);
	if(!var_63_bool) { //@nz
		var_59_bool = false;
		return 2;
	}
	float var_66_float; object var_67_object;
	var_60_object = var_67_object;
	func_1505(var_66_float, var_67_object);
	float var_62_float;
	var_66_float = var_62_float;
	bool var_74_bool; float var_75_float;
	func_1992(var_74_bool, var_75_float, 250000.0, 3240000.0);
	if(var_74_bool != 0) {
		bool var_80_bool; object var_81_object;
		var_60_object = var_81_object;
		TaskCall(3);
		func_329(var_75_float, var_82_bool, var_80_bool, var_81_object);
		TaskReturn();
		var_82_bool = var_59_bool;
		return 2;
	}
	bool var_681_bool; object var_682_object;
	var_60_object = var_682_object;
	TaskCall(4);
	func_455(var_681_bool, var_682_object);
	TaskReturn();
	var_683_object = var_59_bool;
}


void func_1321(object var_0_object, bool var_1_bool, bool var_299_bool, object var_300_object, float var_301_float, float var_302_float, bool var_303_bool, bool var_304_bool)
{
	bool var_313_bool; object var_315_object; cvector var_316_cvector; cvector var_317_cvector; float var_319_float; object var_320_object;
	var_0_object = false;
	var_1_bool = var_300_object;
	bool var_314_bool;
	var_304_bool = var_314_bool;
	
	for(;;) {
		bool var_321_bool; object var_322_object;
		var_300_object = var_322_object;
		func_1461(var_321_bool, var_322_object);
		if(!var_321_bool) { //@nz
			var_299_bool = false;
			return 16;
		}
		var_300_object->GetPosition(var_316_cvector);
		@GetPosition(var_317_cvector);
		var_319_float = (var_316_cvector - var_317_cvector) | (var_316_cvector - var_317_cvector);
		bool var_326_bool = false;
		if(var_302_float > 0) {
			if(var_319_float > (var_302_float * var_302_float))
				var_326_bool = true;
		}
		if(var_326_bool != 0) {
			@Stop();
			var_299_bool = false;
			return 16;
		}
		if(var_319_float > (var_301_float * var_301_float)) {
			var_300_object->GetPFPosition(var_316_cvector);
			@FindPathTo(var_320_object, var_316_cvector);
			if(var_320_object != null) {
				var_320_object = var_315_object;
				var_320_object = null;
			}
			if(var_315_object != null) {
				if(var_314_bool == 0) goto Label_1374;
				var_314_bool = false;
				@RotatePath(var_315_object, var_313_bool);
				if(!var_313_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_339_string;
						func_1468(var_339_string);
						string var_340_string;
						func_1470(var_340_string);
						@FollowPath(var_315_object, var_303_bool, var_313_bool, var_339_string, var_340_string);
						if(!var_313_bool) { //@nz
							if(var_0_object == 0) goto Label_1393;
							var_315_object = null;
						}
					EMIT "GOTO 0x572";

					Label_1393:
						} else {
					var_315_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_313_bool);
					if(!var_313_bool) { //@nz
						if(var_0_object != 0) {
							var_315_object = null;
							goto Label_1421;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1421;
		}
			var_320_object = null;
			goto Label_1419;

		Label_1419:
			var_315_object = null;

		}
	Label_1421:
		for(;;) {
			var_299_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_1852(object var_16_object, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	@AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	object var_27_object;
	var_16_object = var_27_object;
	func_1740(var_27_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_835(object var_0_object, bool var_1_bool, bool var_488_bool, float var_489_float)
{
	string var_497_string;
	func_1176(var_497_string);
	int var_494_int;
	@irand(var_494_int, var_1_bool);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2064();
	@PlayAnimation("all", ("attack_begin" + (var_494_int + 1)));
	@WaitForAnimEnd();
	int var_496_int;
	func_1144(var_496_int, var_497_string);
	bool var_518_bool;
	func_1697(var_518_bool, var_0_object);
	if(!var_518_bool) { //@nz
		@StopAsync();
		var_488_bool = false;
		return 8;
	}
	float var_521_float; int var_522_int;
	var_489_float = var_521_float;
	var_494_int = var_522_int;
	func_796(var_497_string, var_521_float, var_522_int);
	bool var_495_bool;
	@HasAnimation(var_495_bool, "all", ("attack_middle" + var_494_int));
	if(var_495_bool != 0) {
		func_2064();
		@PlayAnimation("all", ("attack_middle" + var_494_int));
		@WaitForAnimEnd();
		func_1176(var_497_string);
		bool var_627_bool;
		func_1697(var_627_bool, var_0_object);
		if(!var_627_bool) { //@nz
			@StopAsync();
			var_488_bool = false;
			return 8;
		}
		float var_630_float; int var_631_int;
		var_489_float = var_630_float;
		func_796(var_497_string, var_630_float, var_631_int);
		var_496_int = 1;

		for(;;) {
			var_497_string = (("attack_middle" + var_631_int) + "_") + var_496_int;
			@HasAnimation(var_495_bool, "all", var_497_string);
			if(!var_495_bool) { //@nz
			} else {
				func_2064();
				@PlayAnimation("all", var_497_string);
				@WaitForAnimEnd();
				func_1176(var_497_string);
				bool var_653_bool;
				func_1697(var_653_bool, var_0_object);
				if(!var_653_bool) { //@nz
					@StopAsync();
					var_488_bool = false;
					return 8;
				}
				float var_656_float; int var_657_int;
				var_489_float = var_656_float;
				var_494_int = var_657_int;
				func_796(var_497_string, var_656_float, var_657_int);
				var_496_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_494_int));
		bool var_642_bool;
		func_1186(var_642_bool);
		if(var_642_bool != 0) {
			bool var_643_bool;
			func_974(var_643_bool, 0.45);
			@StopAsync();
		}
		var_488_bool = true;
		return 8;

	}
}


void func_329(object var_0_object, bool var_80_bool, object var_81_object, object var_198_object)
{
	object var_97_object;
	var_81_object = var_97_object;
	func_2055(var_97_object);
	bool var_102_bool; object var_103_object;
	var_81_object = var_103_object;
	func_1731(var_102_bool, var_103_object);
	bool var_116_bool; object var_117_object;
	func_1697(var_116_bool, var_117_object);
	if(!var_116_bool) { //@nz
		var_80_bool = false;
		return 14;
	}
	func_2064();
	@Face(var_117_object);
	@PlayAnimation("all", "aattack_begin1");
	@WaitForAnimEnd();
	bool var_125_bool; object var_126_object;
	var_81_object = var_126_object;
	func_1697(var_125_bool, var_126_object);
	if(!var_125_bool) { //@nz
		@StopAsync();
		var_80_bool = false;
		return 14;
	}
	@PlayAnimation("all", "aattack_end1");
	object var_90_object;
	@GetScene(var_90_object);
	cvector var_91_cvector;
	bool var_92_bool;
	@GetGeometryLocator("knife", var_92_bool, var_91_cvector);
	object var_93_object;
	@AddActorByType(var_93_object, "scripted", var_90_object, var_91_cvector, [0.0, 0.0, 1.0], "grabitel_knife.xml");
	object var_135_object;
	func_1934(var_135_object);
	var_93_object->SetScriptProperty("Owner", var_135_object);
	var_93_object->SetScriptProperty("Target", var_81_object);
	cvector var_94_cvector;
	var_81_object->GetPosition(var_94_cvector);
	float var_95_float;
	var_81_object->GetEyesHeight(var_95_float);
	var_137_float = GetByIndex(var_94_cvector, 1);
	SetByIndex(var_94_cvector, 1) = (var_137_float + (var_95_float - 10));
	cvector var_140_cvector; cvector var_141_cvector; cvector var_142_cvector;
	var_91_cvector = var_141_cvector;
	var_94_cvector = var_142_cvector;
	func_2198(var_140_cvector, var_141_cvector, var_142_cvector, 2000.0);
	cvector var_96_cvector;
	var_140_cvector = var_96_cvector;
	var_93_object->SetScriptProperty("StartDirection", var_96_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	if(false != 0) {
		var_80_bool = true;
		return 14;
	}
	bool var_193_bool; object var_194_object;
	var_81_object = var_194_object;
	func_1697(var_193_bool, var_194_object);
	if(!var_193_bool) { //@nz
		var_80_bool = false;
		return 14;
	}
	bool var_196_bool; object var_197_object;
	var_81_object = var_197_object;
	TaskCall(4);
	func_455(var_196_bool, var_197_object);
	TaskReturn();
	var_198_object = var_80_bool;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_1866(object var_373_object)
{
	cvector var_377_cvector;
	var_373_object->GetPosition(var_377_cvector);
	cvector var_378_cvector;
	@GetPosition(var_378_cvector);
	cvector var_379_cvector = var_377_cvector - var_378_cvector;
	var_380_float = GetByIndex(var_379_cvector, 0);
	var_381_float = GetByIndex(var_379_cvector, 2);
	@RotateAsync(var_380_float, var_381_float);
}


void func_1877(bool var_25_bool)
{
	bool var_27_bool;
	@IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
}


void func_1882(object var_14_object)
{
	float var_17_float;
	var_14_object->GetEyesHeight(var_17_float);
	cvector var_18_cvector = [0.0, 0.0, 0.0];
	var_19_float = GetByIndex(var_18_cvector, 1);
	var_17_float = var_19_float;
	SetByIndex(var_18_cvector, 1) = var_19_float;
	@LookAsync(var_14_object, "head", var_18_cvector);
}


void func_1893(string var_79_string)
{
	bool var_88_bool; int var_89_int; bool var_90_bool; int var_91_int; bool var_92_bool; float var_93_float; cvector var_94_cvector; cvector var_95_cvector;
	@IsExisting3DSound(var_88_bool, var_79_string);
	if(!var_88_bool) { //@nz
		var_89_int = 0;

		for(;;) {
			@IsExisting3DSound(var_90_bool, (var_79_string + (var_89_int + 1)));
			if(!var_90_bool) { //@nz
				break;
			Label_1913:
				@irand(var_91_int, var_89_int);
				var_79_string += (var_91_int + 1);
	}
			@Is3DSoundLoaded(var_92_bool, var_79_string);
			if(var_92_bool != 0) {
				@GetEyesHeight(var_93_float);
				@GetDirection(var_94_cvector);
				var_95_cvector = var_94_cvector * 50;
				var_106_float = GetByIndex(var_95_cvector, 1);
				SetByIndex(var_95_cvector, 1) = (var_106_float + var_93_float);
				@PlayGlobalSound(var_79_string, var_95_cvector);
			}
		}
		var_89_int += 1;
	}
	var_101_bool = !var_89_int; //@nz
	if(var_101_bool == 0) goto Label_1913;
}


void func_1934(object var_55_object)
{
	object var_57_object;
	@self(var_57_object);
	var_57_object = var_55_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1423(bool var_0_bool, object var_1_object, int var_18_int)
{
	if(var_18_int != 0)
		return 0;
	bool var_21_bool;
	func_1461(var_21_bool, var_1_object);
	if(!var_21_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1940(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_51_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_51_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_51_float;
}


// @pe
void func_1950(float var_573_float, float var_574_float, float var_575_float)
{
	if(var_574_float < var_575_float)
		var_574_float = var_573_float;
	else
		var_575_float = var_573_float;
	
}


void func_1445(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1957(float var_160_float, float var_161_float, float var_162_float, float var_163_float)
{
	var_160_float = (var_162_float * var_162_float) - ((4 * var_161_float) * var_163_float);
}


void func_1964(float var_174_float, float var_175_float, float var_176_float, float var_178_float)
{
	float var_180_float;
	var_181_int = -var_176_float;
	if(((var_181_int - var_178_float) / (2 * var_175_float)) > 0) {
		var_180_float = var_174_float;
		return 2;
	}
	var_187_int = -var_176_float;
	var_174_float = (var_187_int + var_178_float) / (2 * var_175_float);
}


// @pe
void func_1461(bool var_21_bool, object var_22_object)
{
	object var_24_object;
	var_22_object = var_24_object;
	bool var_23_bool;
	func_1697(var_23_bool, var_24_object);
	var_23_bool = var_21_bool;
}


void func_1468(string var_339_string)
{
	var_339_string = "walk";
}


// @pe
void func_1981(float var_46_float, float var_47_float, float var_48_float, float var_49_float)
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


void func_1470(string var_340_string)
{
	var_340_string = "run";
}


// @pe
void func_1472(object var_58_object)
{
	
	for(;;) {
		bool var_59_bool; object var_60_object;
		TaskCall(2);
		func_292(var_54_object, var_60_object, var_59_bool, var_60_object);
		TaskReturn();
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_455(bool var_196_bool, object var_197_object)
{
	var_204_bool = GlobalVars[0];
	GlobalVars[0] = false;
	object var_205_object;
	func_532(var_201_bool, var_202_float, var_203_int, var_196_bool, var_205_object, var_205_object, true, 200.0);
	bool var_675_bool = false;
	var_676_bool = GlobalVars[0];
	if(var_676_bool != 0) {
		if(var_3_int != 0)
			var_675_bool = true;
	}
	if(var_675_bool != 0) {
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
	}
	var_680_bool = GlobalVars[0];
	var_680_bool = var_196_bool;
}


// @pe
void func_1992(bool var_74_bool, float var_75_float, float var_76_float, float var_77_float)
{
	var_74_bool = false;
	if(var_75_float >= var_76_float) {
		if(var_75_float <= var_77_float)
			var_74_bool = true;
	}
}


void func_972(int var_3_int)
{
	var_3_int = true;
}


// @pe
void func_1484(string var_563_string, int var_564_int)
{
	if(var_564_int == 2) {
		var_563_string = "fire";
		return 0;
	EMIT "GOTO 0x5d8";
	}
	if(var_564_int == 1) {
		var_563_string = "bullet";
		return 0;
	}
	var_563_string = "phys";
}


void func_974(bool var_643_bool, float var_644_float)
{
	float var_647_float; bool var_648_bool;
	@rand(var_647_float);
	if(var_647_float < var_644_float) {

		for(;;) {
			@IsAnimationPlaying(var_648_bool);
			if(!var_648_bool) { //@nz
			} else {
				bool var_651_bool;
				func_1072(var_651_bool);
				if(var_651_bool != 0) {
					var_643_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_643_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1176(var_648_bool);
}


// @pe
void func_2000(bool var_17_bool, object var_18_object, float var_19_float)
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
		func_2045(var_24_float);
		bool var_28_bool; object var_29_object; float var_31_float;
		var_18_object = var_29_object;
		var_19_float = var_31_float;
		func_1530(var_28_bool, var_29_object, "reputation", var_31_float, (float)0, (float)1);
		var_17_bool = true;
		return 0;

	}
	
	var_17_bool = false;
}


void func_1498(cvector var_44_cvector, object var_45_object)
{
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	var_45_object->GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
}


void func_1505(float var_66_float, object var_67_object)
{
	cvector var_71_cvector;
	@GetPosition(var_71_cvector);
	cvector var_72_cvector;
	var_67_object->GetPosition(var_72_cvector);
	var_66_float = (var_72_cvector - var_71_cvector) | (var_72_cvector - var_71_cvector);
}


// @pe
void func_483(float var_532_float)
{
	var_532_float = 0.15;
}


// @pe
void func_486(int var_539_int)
{
	var_539_int = 0;
}


void func_1513(bool var_13_bool, object var_14_object)
{
	bool var_16_bool;
	@IsPlayerActor(var_14_object, var_16_bool);
	var_16_bool = var_13_bool;
}


void func_1001(object var_0_object, bool var_427_bool, float var_428_float)
{
	bool var_434_bool; cvector var_435_cvector; cvector var_436_cvector; cvector var_437_cvector; float var_438_float;
	
	for(;;) {
		@IsAnimationPlaying(var_434_bool);
		if(!var_434_bool) //@nz
			break;
		bool var_440_bool;
		func_1072(var_440_bool);
		if(var_440_bool != 0) {
			var_427_bool = true;
			return 10;
		}
		bool var_483_bool;
		func_1697(var_483_bool, var_0_object);
		if(!var_483_bool) { //@nz
			var_427_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_435_cvector); //@t
		@GetPFPosition(var_436_cvector);
		var_437_cvector = var_435_cvector - var_436_cvector;
		var_438_float = var_437_cvector | var_437_cvector;
		if(var_438_float < (var_428_float * var_428_float)) {
			bool var_488_bool; float var_489_float;
			var_428_float = var_489_float;
			func_835(var_437_cvector, var_438_float, var_488_bool, var_489_float);
			var_427_bool = true;
			return 10;
		}
		@sync();
	}
	func_1176(var_438_float);
	var_427_bool = false;
}


void func_489(int var_596_int)
{
	var_596_int = 1;
}


// @pe
void func_491(object var_597_object, float var_598_float)
{
	bool var_599_bool = false;
	if(var_598_float > 0) {
		bool var_602_bool; object var_603_object;
		var_597_object = var_603_object;
		func_1625(var_602_bool, var_603_object);
		if(var_602_bool != 0)
			var_599_bool = true;
	}
	if(var_599_bool != 0) {
		var_619_bool = GlobalVars[0];
		GlobalVars[0] = true;
		func_972(var_598_float);
	}
}


void func_1518(bool var_36_bool, object var_37_object, string var_38_string)
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


void func_2035(float var_591_float)
{
	object var_593_object;
	@CreateFloatVector(var_593_object);
	var_593_object->add(var_591_float);
	@SendWorldWndMessage(15, var_593_object);
}
EMIT "Stack[-1] = 0";


void func_1530(bool var_28_bool, object var_29_object, string var_30_string, float var_31_float, float var_32_float, float var_33_float)
{
	object var_37_object;
	var_29_object = var_37_object;
	string var_38_string;
	var_30_string = var_38_string;
	bool var_36_bool;
	func_1518(var_36_bool, var_37_object, var_38_string);
	if(!var_36_bool) //@nz
		var_28_bool = false;
	float var_35_float;
	var_29_object->GetProperty(var_30_string, var_35_float);
	float var_46_float; float var_48_float; float var_49_float;
	var_32_float = var_48_float;
	var_33_float = var_49_float;
	func_1981(var_46_float, (var_35_float + var_31_float), var_48_float, var_49_float);
	var_29_object->SetProperty(var_30_string, var_46_float);
	var_28_bool = true;
}


void func_2045(float var_24_float)
{
	object var_26_object;
	@CreateFloatVector(var_26_object);
	var_26_object->add(var_24_float);
	@SendWorldWndMessage(16, var_26_object);
}
EMIT "Stack[-1] = 0";


