maintask task_0
{
	void init(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		@SensePlayerOnly(true);
		disable OnHear;
		disable OnSee;
		@Sleep(1.5);
		enable OnHear;
		enable OnSee;
		func_77();
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		bool var_12_bool;
		@IsPlayerActor(var_10_bool, var_12_bool);
		if(var_12_bool != 0) {
			bool var_14_bool;
			func_1736(var_14_bool, "quest_d4_03", "gang_attack");
			TaskCall(1);
			func_127();
			TaskReturn();
		}
	}

	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		bool var_12_bool;
		@IsPlayerActor(var_10_bool, var_12_bool);
		if(var_12_bool != 0) {
			bool var_14_bool;
			func_1736(var_14_bool, "quest_d4_03", "gang_attack");
			TaskCall(1);
			func_127();
			TaskReturn();
		}
	}

	void OnHear(bool var_0_bool, object var_1_object, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		bool var_12_bool;
		@IsPlayerActor(var_10_bool, var_12_bool);
		if(var_12_bool != 0) {
			bool var_14_bool;
			func_1736(var_14_bool, "quest_d4_03", "gang_attack");
			TaskCall(1);
			func_127();
			TaskReturn();
		}
	}

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		if(var_10_bool == "attack") {
			TaskCall(1);
			func_127();
			TaskReturn();
		} else {
			string var_513_string;
			func_81(var_513_string, var_513_string);
		}
	
	}

	void OnUnload(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		bool var_10_bool = false;
		if(var_0_bool != 0) {
			bool var_12_bool;
			func_125(var_12_bool);
			if(var_12_bool != 0)
				var_10_bool = true;
		}
		if(var_10_bool != 0) {
			object var_13_object;
			func_1642(var_13_object);
			@RemoveActor(var_13_object);
		}
	}

}


task task_1
{
	void OnUnload(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		object var_10_object;
		func_1642(var_10_object);
		@RemoveActor(var_10_object);
		@Hold();
	}

}


task task_2
{
	void OnUnload(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		object var_10_object;
		func_1642(var_10_object);
		@RemoveActor(var_10_object);
		@Hold();
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, int var_10_int)
	{
		if(var_10_int == 1) {
			func_1748(var_1_object);
		} else {
			int var_18_int;
			func_1030(var_9_bool, var_18_int, var_18_int);
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
			func_1579(var_14_object);
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
		func_886(var_10_object);
		object var_15_object;
		var_10_object = var_15_object;
		func_1907();
	}

}


task task_3
{
	void OnUnload(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		object var_10_object;
		func_1642(var_10_object);
		@RemoveActor(var_10_object);
		@Hold();
	}

	void OnUse(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		bool var_12_bool;
		@IsOverrideActive(var_12_bool);
		if(!var_12_bool) { //@nz
			object var_14_object;
			var_10_object = var_14_object;
			func_1774(var_14_object);
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


// @pe
void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
{
	object var_14_object;
	var_10_object = var_14_object;
	int var_15_int;
	var_11_int = var_15_int;
	float var_16_float;
	var_12_float = var_16_float;
	func_1486(var_14_object, var_15_int, var_16_float);
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
	func_1554(var_18_float, var_19_cvector, var_20_cvector);
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
	func_1853(var_11_object);
}


// @pe
void func_1665(float var_51_float, float var_52_float, float var_53_float, float var_54_float)
{
	if(var_52_float < var_53_float) {
		var_53_float = var_51_float;
		return 0;
	}
	if(var_52_float > var_54_float) {
		var_54_float = var_51_float;
		return 0;
	}
	var_52_float = var_51_float;
}


void func_1282(bool var_33_bool, object var_34_object, string var_35_string, float var_36_float, float var_37_float, float var_38_float)
{
	object var_42_object;
	var_34_object = var_42_object;
	string var_43_string;
	var_35_string = var_43_string;
	bool var_41_bool;
	func_1270(var_41_bool, var_42_object, var_43_string);
	if(!var_41_bool) //@nz
		var_33_bool = false;
	float var_40_float;
	var_34_object->GetProperty(var_35_string, var_40_float);
	float var_51_float; float var_53_float; float var_54_float;
	var_37_float = var_53_float;
	var_38_float = var_54_float;
	func_1665(var_51_float, (var_40_float + var_36_float), var_53_float, var_54_float);
	var_34_object->SetProperty(var_35_string, var_51_float);
	var_33_bool = true;
}


// @pe
void func_1030(bool var_0_bool, object var_1_object, int var_18_int)
{
	if(var_18_int != 0)
		return 0;
	bool var_21_bool;
	func_1068(var_21_bool, var_1_object);
	if(!var_21_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1418(bool var_23_bool, object var_24_object)
{
	object var_28_object;
	var_24_object = var_28_object;
	bool var_27_bool;
	func_1382(var_27_bool, var_28_object);
	if(!var_27_bool) { //@nz
		var_23_bool = false;
		return 2;
	}
	bool var_45_bool; object var_46_object;
	func_1270(var_45_bool, var_46_object, "noaccess");
	if(!var_45_bool) { //@nz
		var_23_bool = true;
		return 2;
	}
	int var_26_int;
	var_46_object->GetProperty("noaccess", var_26_int);
	var_23_bool = var_26_int == 0;
}


// @pe
void func_139(float var_391_float)
{
	var_391_float = 0.1;
}


void func_1676(bool var_90_bool, int var_91_int, int var_92_int)
{
	int var_94_int;
	@irand(var_94_int, var_92_int);
	var_90_bool = var_94_int < var_91_int;
}


// @pe
void func_142(int var_398_int)
{
	var_398_int = 1;
}


// @pe
void func_1681(bool var_22_bool, object var_23_object, float var_24_float)
{
	if(!var_23_object) { //@nz
		var_22_bool = false;
		return 0;
	}
	if(var_24_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_24_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_29_float;
		var_24_float = var_29_float;
		func_1726(var_29_float);
		bool var_33_bool; object var_34_object; float var_36_float;
		var_23_object = var_34_object;
		var_24_float = var_36_float;
		func_1282(var_33_bool, var_34_object, "reputation", var_36_float, (float)0, (float)1);
		var_22_bool = true;
		return 0;

	}
	
	var_22_bool = false;
}


void func_1554(object var_16_object, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	@AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	object var_27_object;
	var_16_object = var_27_object;
	func_1442(var_27_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_663(bool var_0_bool, bool var_297_bool)
{
	cvector var_303_cvector; cvector var_304_cvector;
	bool var_308_bool;
	func_1418(var_308_bool, var_0_bool);
	if(!var_308_bool) { //@nz
		var_297_bool = false;
		return 10;
	}
	bool var_311_bool;
	float var_307_float;
	func_752(var_307_float, var_311_bool);
	if(var_311_bool != 0) {
		var_0_bool->GetPFPosition(var_303_cvector); //@t
		@GetPFPosition(var_304_cvector);
		var_0_bool->GetAttackDistance(var_307_float); //@t
		var_297_bool = ((var_303_cvector - var_304_cvector) | (var_303_cvector - var_304_cvector)) <= ((var_307_float + 50) * (var_307_float + 50));
		return 10;
	}
	var_297_bool = false;
}


void func_1304(float var_394_float, object var_395_object, float var_396_float, int var_397_int)
{
	int var_407_int; int var_409_int;
	object var_414_object;
	var_395_object = var_414_object;
	bool var_413_bool;
	func_1270(var_413_bool, var_414_object, "health");
	if(!var_413_bool) //@nz
		var_394_float = 0.0;
	bool var_417_bool; object var_418_object;
	func_1270(var_417_bool, var_418_object, "armor");
	if(!var_417_bool) //@nz
		var_407_int = 0;
	else
		var_418_object->GetProperty("armor", var_407_int);
	string var_422_string; int var_423_int;
	var_397_int = var_423_int;
	func_1244(var_422_string, var_423_int);
	string var_408_string = "armor_" + var_422_string;
	bool var_428_bool; object var_429_object; string var_430_string;
	var_395_object = var_429_object;
	func_1270(var_428_bool, var_429_object, var_430_string);
	if(!var_428_bool) //@nz
		var_409_int = 0;
	else
		var_395_object->GetProperty(var_430_string, var_409_int);

	float var_432_float;
	func_1658(var_432_float, ((var_407_int + var_409_int) / 100.0), (float)1);
	float var_410_float;
	var_432_float = var_410_float;
	float var_411_float;
	var_395_object->GetProperty("health", var_411_float);
	float var_412_float = var_396_float * (1 - var_410_float);
	float var_442_float;
	func_1665(var_442_float, (var_411_float - var_412_float), (float)0, (float)1);
	var_395_object->SetProperty("health", var_442_float);
	bool var_448_bool; object var_449_object;
	var_395_object = var_449_object;
	func_1265(var_448_bool, var_449_object);
	if(var_448_bool != 0) {
		float var_450_float = -var_412_float;
		func_1716(var_450_float);
	}
	var_412_float = var_394_float;
	
}


void func_153(bool var_0_bool, int var_3_int, bool var_5_bool, object var_22_object, bool var_23_bool, float var_24_float, bool var_131_bool, bool var_223_bool)
{
	float var_36_float; cvector var_37_cvector; cvector var_38_cvector; bool var_40_bool; float var_43_float; cvector var_44_cvector; bool var_45_bool; float var_46_float;
	func_382(var_44_cvector, var_45_bool, var_46_float);
	var_5_bool = 0;
	var_71_bool = IsFuncExist(var_22_object, "@GetAttackDistance", 1);
	if(var_71_bool != 0) {
		var_22_object->GetAttackDistance(var_36_float);
		var_36_float += 50;
	} else {
						var_24_float = var_36_float;
	}
	if(var_36_float >= 150)
		var_36_float = 150;
	var_3_int = false;
	var_0_bool = var_22_object;
	bool var_39_bool;
	@IsPlayerActor(var_0_bool, var_39_bool);
	if(var_39_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_77_object;
		func_1642(var_77_object);
		@SendPlayerEnemy(var_22_object, var_77_object);
	}
	if(var_23_bool != 0)
		var_40_bool = false;
	else
		var_40_bool = true;

	
Label_193:
	for(;;) {
		bool var_82_bool = false;
		bool var_83_bool;
		func_1418(var_83_bool, var_0_bool);
		if(var_83_bool != 0) {
			if(!var_3_int) //@nz
				var_82_bool = true;
		}
		if(var_82_bool != 0) {
			func_795(var_46_float);
			var_0_bool->GetPFPosition(var_37_cvector); //@t
			@GetPFPosition(var_38_cvector);
			var_43_float = (var_37_cvector - var_38_cvector) | (var_37_cvector - var_38_cvector);
			if(var_43_float >= ((400.0 + var_36_float) * (400.0 + var_36_float))) {
				bool var_125_bool; float var_127_float;
				var_36_float = var_127_float;
				TaskCall(2);
				func_823(var_133_bool, var_125_bool, var_0_bool, var_127_float, 3000.0, true, false);
				TaskReturn();
				if(!var_131_bool) { //@nz
				} else {
					var_40_bool = false;
			} else {
			if(var_43_float >= (var_24_float * var_24_float)) {
				var_0_bool->GetPFPosition(var_44_cvector); //@t
				@CanReachByPF(var_45_bool, var_44_cvector);
				if(!var_45_bool) { //@nz
					bool var_217_bool; float var_219_float;
					var_36_float = var_219_float;
					TaskCall(2);
					func_823(var_225_bool, var_217_bool, var_0_bool, var_219_float, 3000.0, true, false);
					TaskReturn();
					if(!var_223_bool) { //@nz
						goto Label_365;
					}
					var_40_bool = false;
					goto Label_193;
				}
				if(!var_40_bool) { //@nz
					func_1568(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_795(var_46_float);
					@StopAsync();
					var_40_bool = true;
					bool var_239_bool;
					func_1418(var_239_bool, var_0_bool);
					if(!var_239_bool) { //@nz
						goto Label_365;
					}
				}
				@rand(var_46_float);
				bool var_242_bool;
				var_244_bool = var_46_float < 0.25;
				if(var_244_bool != 1) {
					bool var_245_bool;
					func_752(true, var_245_bool);
					if(var_245_bool != 1)
						var_242_bool = false;
				}
				if(var_242_bool != 0) {
					@Face(var_0_bool);
					func_802();
					@PlayAnimation("all", "attack_stay");
					bool var_282_bool; float var_283_float;
					func_620(var_46_float, var_282_bool, var_283_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_795(var_46_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_500_bool;
					func_752(var_46_float, var_500_bool);
					var_501_bool = !var_500_bool; //@nz
					if(var_501_bool == 0) goto Label_355;
					bool var_502_bool;
					func_1418(var_502_bool, var_0_bool);
					if(!var_502_bool) { //@nz
						goto Label_365;
					}
					var_0_bool->GetPFPosition(var_37_cvector); //@t
					@GetPFPosition(var_38_cvector);
					if(!(((var_37_cvector - var_38_cvector) | (var_37_cvector - var_38_cvector)) < (var_283_float * var_283_float))) goto Label_355;
					bool var_507_bool; float var_508_float;
					var_24_float = var_508_float;
					func_456(var_45_bool, var_46_float, var_507_bool, var_508_float);
					var_509_bool = !var_507_bool; //@nz
					if(var_509_bool == 0) goto Label_355;
					goto Label_365;
			}
				bool var_510_bool; float var_511_float;
				var_24_float = var_511_float;
				func_456(var_45_bool, var_46_float, var_510_bool, var_511_float);
				if(!var_510_bool) { //@nz
					goto Label_365;
				}
				var_40_bool = true;

			}
		Label_355:
			goto Label_364;
			}
			Label_364:
			}
		}
	Label_365:
		@WaitForAnimEnd();
		if(var_3_int != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_39_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1818(void)
{
	@ClearSubContainer(0);
	func_1787(300, 750);
	func_1590("Knife", 1, 8);
	func_1590("lockpick", 1, 6);
	int var_99_int;
	func_1848(var_99_int, "grabitel_mark");
	bool var_64_bool;
	@AddItem(var_64_bool, var_99_int, 0, 1);
}


void func_795(bool var_0_bool)
{
	func_1748(var_0_bool);
}


void func_1052(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1568(object var_228_object)
{
	cvector var_232_cvector;
	var_228_object->GetPosition(var_232_cvector);
	cvector var_233_cvector;
	@GetPosition(var_233_cvector);
	cvector var_234_cvector = var_232_cvector - var_233_cvector;
	var_235_float = GetByIndex(var_234_cvector, 0);
	var_236_float = GetByIndex(var_234_cvector, 2);
	@RotateAsync(var_235_float, var_236_float);
}


void func_800(int var_455_int)
{
	var_455_int = 0;
}


void func_802(void)
{
	func_1601("attack_stay");
}


void func_417(bool var_0_bool, float var_380_float, int var_381_int)
{
	object var_385_object; float var_386_float; float var_387_float;
	@GetVictim((var_380_float * 0.9), var_385_object);
	@ReportAttack(var_0_bool);
	if(var_385_object == var_0_bool) {
		float var_391_float; object var_392_object; int var_393_int;
		var_385_object = var_392_object;
		var_381_int = var_393_int;
		func_139(var_393_int);
		var_391_float = var_386_float;
		float var_394_float; object var_395_object; float var_396_float; int var_397_int;
		var_385_object = var_395_object;
		int var_398_int; object var_399_object; int var_400_int;
		var_385_object = var_399_object;
		var_381_int = var_400_int;
		func_142(var_400_int);
		var_398_int = var_397_int;
		func_1304(var_394_float, var_395_object, var_396_float, var_397_int);
		var_394_float = var_387_float;
		int var_455_int;
		func_800(var_455_int);
		@ReportHit(var_0_bool, var_455_int, var_387_float, var_396_float);
		object var_456_object; float var_457_float;
		var_385_object = var_456_object;
		var_387_float = var_457_float;
		func_807();
	}
}
EMIT "Stack[-3] = 0";


void func_928(bool var_0_bool, string var_1_string, bool var_154_bool, object var_155_object, float var_156_float, float var_157_float, bool var_158_bool, bool var_159_bool)
{
	bool var_168_bool; object var_170_object; cvector var_171_cvector; cvector var_172_cvector; float var_174_float; object var_175_object;
	var_0_bool = false;
	var_1_string = var_155_object;
	bool var_169_bool;
	var_159_bool = var_169_bool;
	
	for(;;) {
		bool var_176_bool; object var_177_object;
		var_155_object = var_177_object;
		func_1068(var_176_bool, var_177_object);
		if(!var_176_bool) { //@nz
			var_154_bool = false;
			return 16;
		}
		var_155_object->GetPosition(var_171_cvector);
		@GetPosition(var_172_cvector);
		var_174_float = (var_171_cvector - var_172_cvector) | (var_171_cvector - var_172_cvector);
		bool var_181_bool = false;
		if(var_157_float > 0) {
			if(var_174_float > (var_157_float * var_157_float))
				var_181_bool = true;
		}
		if(var_181_bool != 0) {
			@Stop();
			var_154_bool = false;
			return 16;
		}
		if(var_174_float > (var_156_float * var_156_float)) {
			var_155_object->GetPFPosition(var_171_cvector);
			@FindPathTo(var_175_object, var_171_cvector);
			if(var_175_object != null) {
				var_175_object = var_170_object;
				var_175_object = null;
			}
			if(var_170_object != null) {
				if(var_169_bool == 0) goto Label_981;
				var_169_bool = false;
				@RotatePath(var_170_object, var_168_bool);
				if(!var_168_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_194_string;
						func_1075(var_194_string);
						string var_195_string;
						func_1077(var_195_string);
						@FollowPath(var_170_object, var_158_bool, var_168_bool, var_194_string, var_195_string);
						if(!var_168_bool) { //@nz
							if(var_0_bool == 0) goto Label_1000;
							var_170_object = null;
						}
					EMIT "GOTO 0x3e9";

					Label_1000:
						} else {
					var_170_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_168_bool);
					if(!var_168_bool) { //@nz
						if(var_0_bool != 0) {
							var_170_object = null;
							goto Label_1028;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1028;
		}
			var_175_object = null;
			goto Label_1026;

		Label_1026:
			var_170_object = null;

		}
	Label_1028:
		for(;;) {
			var_154_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1442(object var_27_object)
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
void func_807(void)
{
}


void func_809(bool var_480_bool)
{
	var_480_bool = true;
}


void func_811(int var_376_int)
{
	var_376_int = 1;
}


void func_1579(object var_14_object)
{
	float var_17_float;
	var_14_object->GetEyesHeight(var_17_float);
	cvector var_18_cvector = [0.0, 0.0, 0.0];
	var_19_float = GetByIndex(var_18_cvector, 1);
	var_17_float = var_19_float;
	SetByIndex(var_18_cvector, 1) = var_19_float;
	@LookAsync(var_14_object, "head", var_18_cvector);
}


void func_813(float var_371_float)
{
	var_371_float = 0.5;
}


// @pe
void func_1068(bool var_21_bool, object var_22_object)
{
	object var_24_object;
	var_22_object = var_24_object;
	bool var_23_bool;
	func_1418(var_23_bool, var_24_object);
	var_23_bool = var_21_bool;
}


void func_691(bool var_295_bool)
{
	bool var_296_bool = false;
	bool var_297_bool;
	func_663(var_296_bool, var_297_bool);
	if(var_297_bool != 0) {
		bool var_314_bool;
		func_707(var_295_bool, var_296_bool, var_314_bool);
		if(var_314_bool != 0)
			var_296_bool = true;
	}
	if(var_296_bool != 0) {
		var_295_bool = true;
		return 0;
	}
	var_295_bool = false;
}


void func_1075(string var_194_string)
{
	var_194_string = "walk";
}


void func_1077(string var_195_string)
{
	var_195_string = "run";
}


void func_1716(float var_450_float)
{
	object var_452_object;
	@CreateFloatVector(var_452_object);
	var_452_object->add(var_450_float);
	@SendWorldWndMessage(15, var_452_object);
}
EMIT "Stack[-1] = 0";


void func_823(object var_2_object, bool var_125_bool, object var_126_object, float var_127_float, float var_128_float, bool var_129_bool, bool var_130_bool)
{
	object var_138_object;
	func_1748(var_138_object);
	@SetTimer(1, 5);
	bool var_136_bool;
	@CanSee(var_136_bool, var_138_object);
	if(var_136_bool != 0) {
		var_2_object = true;
		object var_142_object;
		var_126_object = var_142_object;
		func_1579(var_142_object);
	} else {
		var_2_object = false;
	}
	bool var_149_bool; object var_150_object;
	func_1265(var_149_bool, var_150_object);
	if(var_149_bool != 0) {
		object var_153_object;
		func_1642(var_153_object);
		@SendPlayerEnemy(var_150_object, var_153_object);
	}
	bool var_154_bool; object var_155_object; float var_156_float; float var_157_float; bool var_158_bool; bool var_159_bool;
	var_126_object = var_155_object;
	var_127_float = var_156_float;
	var_128_float = var_157_float;
	var_129_bool = var_158_bool;
	var_130_bool = var_159_bool;
	bool var_137_bool;
	func_928(var_136_bool, var_137_bool, var_154_bool, var_155_object, var_156_float, var_157_float, var_158_bool, var_159_bool);
	var_154_bool = var_137_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_137_bool = var_125_bool;
	
}


void func_1848(int var_78_int, string var_79_string)
{
	int var_81_int;
	@GetInvItemByName(var_81_int, var_79_string);
	var_81_int = var_78_int;
}


void func_1590(string var_85_string, int var_86_int, int var_87_int)
{
	bool var_89_bool;
	int var_91_int;
	var_86_int = var_91_int;
	int var_92_int;
	var_87_int = var_92_int;
	bool var_90_bool;
	func_1676(var_90_bool, var_91_int, var_92_int);
	if(var_90_bool != 0)
		@AddItem(var_89_bool, var_85_string, 0);
}


// @pe
void func_1079(object var_60_object)
{
	func_1818();
	object var_103_object;
	var_60_object = var_103_object;
	func_1096(var_103_object);
}


// @pe
void func_1212(string var_126_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_127_string;
	var_126_string = var_127_string;
	func_1601(var_127_string);
	@PlayAnimation("all", var_126_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_126_string);
	@RemoveEnvelope();
}


// @pe
void func_1853(object var_11_object)
{
	bool var_12_bool;
	func_1736(var_12_bool, "quest_d4_03", "death");
	bool var_18_bool; object var_19_object;
	var_11_object = var_19_object;
	func_1265(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		bool var_22_bool; object var_23_object;
		var_11_object = var_23_object;
		func_1681(var_22_bool, var_23_object, 0.03);
	}
	object var_60_object;
	var_11_object = var_60_object;
	TaskCall(3);
	func_1079(var_60_object);
	TaskReturn();
}


void func_1726(float var_29_float)
{
	object var_31_object;
	@CreateFloatVector(var_31_object);
	var_31_object->add(var_29_float);
	@SendWorldWndMessage(16, var_31_object);
}
EMIT "Stack[-1] = 0";


void func_1601(string var_127_string)
{
	bool var_136_bool; int var_137_int; bool var_138_bool; int var_139_int; bool var_140_bool; float var_141_float; cvector var_142_cvector; cvector var_143_cvector;
	@IsExisting3DSound(var_136_bool, var_127_string);
	if(!var_136_bool) { //@nz
		var_137_int = 0;

		for(;;) {
			@IsExisting3DSound(var_138_bool, (var_127_string + (var_137_int + 1)));
			if(!var_138_bool) { //@nz
				break;
			Label_1621:
				@irand(var_139_int, var_137_int);
				var_127_string += (var_139_int + 1);
	}
			@Is3DSoundLoaded(var_140_bool, var_127_string);
			if(var_140_bool != 0) {
				@GetEyesHeight(var_141_float);
				@GetDirection(var_142_cvector);
				var_143_cvector = var_142_cvector * 50;
				var_154_float = GetByIndex(var_143_cvector, 1);
				SetByIndex(var_143_cvector, 1) = (var_154_float + var_141_float);
				@PlayGlobalSound(var_127_string, var_143_cvector);
			}
		}
		var_137_int += 1;
	}
	var_149_bool = !var_137_int; //@nz
	if(var_149_bool == 0) goto Label_1621;
}


void func_707(bool var_0_bool, int var_4_int, bool var_314_bool)
{
	object var_320_object; float var_322_float; cvector var_323_cvector; cvector var_324_cvector;
	@GetScene(var_320_object);
	bool var_321_bool = false;
	
	for(;;) {
		cvector var_325_cvector;
		func_1258(var_325_cvector, var_0_bool);
		var_331_int = -var_325_cvector;
		@FindDirLength(var_322_float, var_331_int, var_4_int);
		if(var_322_float < var_4_int) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_323_cvector); //@t
				@GetPFPosition(var_324_cvector);
				@WaitForAnimEnd();
				func_795(var_324_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_321_bool = true;
				bool var_336_bool;
				func_663(var_324_cvector, var_336_bool);
				var_337_bool = !var_336_bool; //@nz
				if(var_337_bool == 0) goto Label_748;
		}
		for(;;) {
			var_321_bool = var_314_bool;

		}

	Label_748:
	}
}
EMIT "Stack[-5] = 0";


void func_1736(bool var_12_bool, string var_13_string, string var_14_string)
{
	object var_16_object;
	@FindActor(var_16_object, var_13_string);
	if(var_16_object == null)
		var_12_bool = false;
	@Trigger(var_16_object, var_14_string);
	var_12_bool = true;
}
EMIT "Stack[-1] = 0";


void func_456(bool var_0_bool, string var_1_string, bool var_343_bool, float var_344_float)
{
	string var_352_string;
	func_795(var_352_string);
	int var_349_int;
	@irand(var_349_int, var_1_string);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_1757();
	@PlayAnimation("all", ("attack_begin" + (var_349_int + 1)));
	@WaitForAnimEnd();
	int var_351_int;
	func_763(var_351_int, var_352_string);
	bool var_377_bool;
	func_1418(var_377_bool, var_0_bool);
	if(!var_377_bool) { //@nz
		@StopAsync();
		var_343_bool = false;
		return 8;
	}
	float var_380_float; int var_381_int;
	var_344_float = var_380_float;
	var_349_int = var_381_int;
	func_417(var_352_string, var_380_float, var_381_int);
	bool var_350_bool;
	@HasAnimation(var_350_bool, "all", ("attack_middle" + var_349_int));
	if(var_350_bool != 0) {
		func_1757();
		@PlayAnimation("all", ("attack_middle" + var_349_int));
		@WaitForAnimEnd();
		func_795(var_352_string);
		bool var_465_bool;
		func_1418(var_465_bool, var_0_bool);
		if(!var_465_bool) { //@nz
			@StopAsync();
			var_343_bool = false;
			return 8;
		}
		float var_468_float; int var_469_int;
		var_344_float = var_468_float;
		func_417(var_352_string, var_468_float, var_469_int);
		var_351_int = 1;

		for(;;) {
			var_352_string = (("attack_middle" + var_469_int) + "_") + var_351_int;
			@HasAnimation(var_350_bool, "all", var_352_string);
			if(!var_350_bool) { //@nz
			} else {
				func_1757();
				@PlayAnimation("all", var_352_string);
				@WaitForAnimEnd();
				func_795(var_352_string);
				bool var_491_bool;
				func_1418(var_491_bool, var_0_bool);
				if(!var_491_bool) { //@nz
					@StopAsync();
					var_343_bool = false;
					return 8;
				}
				float var_494_float; int var_495_int;
				var_344_float = var_494_float;
				var_349_int = var_495_int;
				func_417(var_352_string, var_494_float, var_495_int);
				var_351_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_349_int));
		bool var_480_bool;
		func_809(var_480_bool);
		if(var_480_bool != 0) {
			bool var_481_bool;
			func_593(var_481_bool, 0.75);
			@StopAsync();
		}
		var_343_bool = true;
		return 8;

	}
}


// @pe
void func_1096(object var_103_object)
{
	object var_104_object;
	var_103_object = var_104_object;
	func_1121(var_104_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_77(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1486(object var_14_object, int var_15_int, float var_16_float)
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
		func_1258(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1648(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		@CreateVectorVector(var_27_object);
		var_28_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_28_int), var_29_bool, var_30_cvector, var_31_cvector);
			if(!var_29_bool) { //@nz
				break;
			Label_1548:
				var_27_object = null;
	}
			object var_104_object;
			var_14_object = var_104_object;
			func_1442(var_104_object);
		}
		if((var_31_cvector | var_26_cvector) >= 0.70710677)
			var_27_object->add(var_30_cvector);
		var_28_int += 1;
	}
	int var_32_int;
	var_27_object->size(var_32_int);
	if(var_32_int == 0) goto Label_1548;
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
	func_1554(var_61_float, var_62_cvector, var_63_cvector);
}


void func_81(bool var_0_bool, string var_513_string)
{
	bool var_515_bool;
	if(var_513_string == "cleanup") {
		var_0_bool = true;
		@IsLoaded(var_515_bool);
		bool var_518_bool = false;
		if(!var_515_bool) { //@nz
			bool var_520_bool;
			func_125(var_520_bool);
			if(var_520_bool != 0)
				var_518_bool = true;
		}
		if(var_518_bool != 0) {
			object var_521_object;
			func_1642(var_521_object);
			@RemoveActor(var_521_object);
		}
	} else if(var_513_string == "restore") {
		var_0_bool = false;
	}
	
}


void func_593(bool var_481_bool, float var_482_float)
{
	float var_485_float; bool var_486_bool;
	@rand(var_485_float);
	if(var_485_float < var_482_float) {

		for(;;) {
			@IsAnimationPlaying(var_486_bool);
			if(!var_486_bool) { //@nz
			} else {
				bool var_489_bool;
				func_691(var_489_bool);
				if(var_489_bool != 0) {
					var_481_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_481_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_795(var_486_bool);
}


void func_1748(object var_13_object)
{
	bool var_15_bool;
	@IsPlayerActor(var_13_object, var_15_bool);
	if(var_15_bool != 0)
		@PlayGlobalMusic("attack");
}


// @pe
void func_1244(string var_422_string, int var_423_int)
{
	if(var_423_int == 2) {
		var_422_string = "fire";
		return 0;
	EMIT "GOTO 0x4e8";
	}
	if(var_423_int == 1) {
		var_422_string = "bullet";
		return 0;
	}
	var_422_string = "phys";
}


void func_1757(void)
{
	object var_356_object;
	@GetScene(var_356_object);
	object var_358_object;
	func_1642(var_358_object);
	@BroadcastMessage("battle", var_358_object, var_356_object);
}
EMIT "Stack[-1] = 0";


void func_1121(object var_104_object)
{
	cvector var_115_cvector; cvector var_116_cvector; cvector var_117_cvector; cvector var_118_cvector; string var_119_string; object var_120_object; bool var_121_bool; bool var_122_bool; float var_123_float; cvector var_124_cvector;
	if(var_104_object == null) {
		func_1212("fdie");
	} else {
		var_104_object->GetPosition(var_115_cvector);
		@GetPosition(var_116_cvector);
		@GetDirection(var_117_cvector);
		var_118_cvector = var_116_cvector - var_115_cvector;
		var_158_float = GetByIndex(var_118_cvector, 0);
		var_159_float = GetByIndex(var_117_cvector, 0);
		var_161_float = GetByIndex(var_118_cvector, 2);
		var_162_float = GetByIndex(var_117_cvector, 2);
		if(((var_158_float * var_159_float) + (var_161_float * var_162_float)) >= 0)
			var_119_string = "fdie";
		else
			var_119_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_104_object = var_120_object;
		var_169_bool = IsFuncExist(var_104_object, "GetScriptProperty", 2);
		if(var_169_bool != 0) {
			var_104_object->HasScriptProperty(var_121_bool, "Owner");
			if(var_121_bool != 0) {
				var_104_object->GetScriptProperty(var_120_object, "Owner");
				if(var_120_object == null)
					var_104_object = var_120_object;
			}
		}
		var_176_bool = IsFuncExist(var_120_object, "@GetEyesHeight", 1);
		if(var_176_bool != 0) {
			var_120_object->GetEyesHeight(var_123_float);
			var_124_cvector = [0.0, 0.0, 0.0];
			var_177_float = GetByIndex(var_124_cvector, 1);
			var_123_float = var_177_float;
			SetByIndex(var_124_cvector, 1) = var_177_float;
			@LookAsync(var_104_object, "head", var_124_cvector);
			var_122_bool = true;
		} else {
			var_122_bool = false;

		}
		string var_179_string;
		var_119_string = var_179_string;
		func_1601(var_179_string);
		@PlayAnimation("all", var_119_string);
		@WaitForAnimEnd();
		if(var_122_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_119_string);
		@RemoveEnvelope();
		var_120_object = null;
	}
	
}


void func_1377(bool var_38_bool, object var_39_object)
{
	bool var_41_bool;
	var_39_object->IsDead(var_41_bool);
	var_41_bool = var_38_bool;
}


void func_1382(bool var_27_bool, object var_28_object)
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
		func_1377(var_38_bool, var_39_object);
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


void func_1768(int var_15_int)
{
	int var_17_int;
	@GetVariable("branch", var_17_int);
	var_17_int = var_15_int;
}


void func_1642(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_1258(cvector var_44_cvector, object var_45_object)
{
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	var_45_object->GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
}


void func_620(bool var_0_bool, bool var_282_bool, float var_283_float)
{
	bool var_289_bool; cvector var_290_cvector; cvector var_291_cvector; cvector var_292_cvector; float var_293_float;
	
	for(;;) {
		@IsAnimationPlaying(var_289_bool);
		if(!var_289_bool) //@nz
			break;
		bool var_295_bool;
		func_691(var_295_bool);
		if(var_295_bool != 0) {
			var_282_bool = true;
			return 10;
		}
		bool var_338_bool;
		func_1418(var_338_bool, var_0_bool);
		if(!var_338_bool) { //@nz
			var_282_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_290_cvector); //@t
		@GetPFPosition(var_291_cvector);
		var_292_cvector = var_290_cvector - var_291_cvector;
		var_293_float = var_292_cvector | var_292_cvector;
		if(var_293_float < (var_283_float * var_283_float)) {
			bool var_343_bool; float var_344_float;
			var_283_float = var_344_float;
			func_456(var_292_cvector, var_293_float, var_343_bool, var_344_float);
			var_282_bool = true;
			return 10;
		}
		@sync();
	}
	func_795(var_293_float);
	var_282_bool = false;
}


// @pe
void func_1774(object var_14_object)
{
	int var_15_int;
	func_1768(var_15_int);
	if(var_15_int == 1)
		@WorkWithCorpse(var_14_object);
	else
		@Barter(var_14_object);
	
}


void func_752(bool var_0_bool, bool var_245_bool)
{
	bool var_247_bool;
	var_250_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_250_bool != 0) {
		var_0_bool->IsAttacking(var_247_bool); //@t
		var_247_bool = var_245_bool;
	}
	var_245_bool = false;
}


void func_1265(bool var_18_bool, object var_19_object)
{
	bool var_21_bool;
	@IsPlayerActor(var_19_object, var_21_bool);
	var_21_bool = var_18_bool;
}


void func_1648(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_51_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_51_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_51_float;
}


void func_886(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_1052(var_10_object);
}


void func_1270(bool var_41_bool, object var_42_object, string var_43_string)
{
	var_48_bool = IsFuncExist(var_42_object, "HasProperty", 2);
	if(!var_48_bool) { //@nz
		var_41_bool = false;
		return 2;
	}
	bool var_45_bool;
	var_42_object->HasProperty(var_43_string, var_45_bool);
	var_45_bool = var_41_bool;
}


// @pe
void func_1658(float var_432_float, float var_433_float, float var_434_float)
{
	if(var_433_float < var_434_float)
		var_433_float = var_432_float;
	else
		var_434_float = var_432_float;
	
}


void func_1787(int var_66_int, int var_67_int)
{
	if(var_66_int > var_67_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_70_int = 0;
	if(var_66_int != var_67_int) {
		@irand(var_70_int, (var_67_int - var_66_int));
	} else if(var_66_int == 0) {
		return 4;
	}
	var_70_int += var_66_int;
	if(var_70_int == 0)
		return 4;
	int var_78_int;
	func_1848(var_78_int, "Money");
	bool var_71_bool;
	@AddItem(var_71_bool, var_78_int, 0, var_70_int);
	
}


void func_763(object var_2_object, bool var_5_bool)
{
	int var_365_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_364_float;
	@rand(var_364_float);
	float var_371_float;
	func_813(var_371_float);
	if(var_364_float < var_371_float) {
		@irand(var_365_int, var_2_object);
		@Speak("attack" + (var_365_int + 1));
		int var_376_int;
		func_811(var_376_int);
		var_5_bool = var_376_int;
	}
}


void func_125(bool var_12_bool)
{
	var_12_bool = true;
}


void func_382(string var_1_string, object var_2_object, int var_4_int)
{
	bool var_50_bool; bool var_51_bool; cvector var_52_cvector;
	var_1_string = 0;
	
	for(;;) {
		@HasAnimation(var_50_bool, "all", ("attack_begin" + (var_1_string + 1)));
		if(!var_50_bool) { //@nz
		} else {
			var_1_string += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_51_bool, ("attack" + (var_2_object + 1)));
			if(!var_51_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_52_cvector, "all", "bjump");
		var_66_float = GetByIndex(var_52_cvector, 2);
		var_4_int = -var_66_float;

	}
}


void func_127(void)
{
	object var_20_object;
	@FindActor(var_20_object, "player");
	object var_22_object;
	object var_19_object;
	func_153(var_16_bool, var_17_float, var_18_int, var_19_object, var_22_object, var_22_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


