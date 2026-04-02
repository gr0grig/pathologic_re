// @GLOBALS: 0:string:,1:object:,2:object:,3:object:

task task_0
{
}


task task_1
{
	// @pe
	void OnAction(bool var_0_bool, int var_1_int, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool)
	{
		if(var_5_bool == 10) {
			var_0_bool = true;
		} else {
			int var_8_int;
			var_5_bool = var_8_int;
			func_2092();
		}
	
	}

}


task task_2
{
	void OnDispose(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool)
	{
		bool var_5_bool = false;
		if(!var_0_bool) { //@nz
			if(var_1_bool != 0)
				var_5_bool = true;
		}
		if(var_5_bool != 0)
			@SetHandsItem(-1);
	}

}


maintask task_3
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool)
	{
		object var_7_object;
		@CreateStringVector(var_7_object);
		var_7_object->add("player_reputation_decrease.bin");
		var_7_object->add("player_klara_dream.bin");
		int var_8_int;
		@GetVariable("player_init", var_8_int);
		if(!var_8_int) //@nz
			@SetVariable("player_init", 1);
		object var_15_object;
		var_7_object = var_15_object;
		func_509(var_15_object);
	}
	EMIT "Stack[-2] = 0";

	void OnPlayerStartShooting(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, string var_6_string, bool var_7_bool, bool var_8_bool, string var_9_string, bool var_10_bool)
	{
		bool var_23_bool; string var_24_string; bool var_25_bool;
		@IsWeaponHolstered(var_23_bool);
		if(!var_23_bool) { //@nz
			func_744();
			@GetCurrentWeapon(var_24_string);
			string var_27_string;
			var_24_string = var_27_string;
			func_460(var_27_string);
			func_740();
			@IsAltShooting(var_25_bool);
			if(var_25_bool != 0)
				func_644();
		}
	}

	void OnPlayerStartAltShooting(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool)
	{
		bool var_8_bool; string var_9_string; bool var_10_bool;
		@IsWeaponHolstered(var_8_bool);
		if(!var_8_bool) { //@nz
			func_744();
			@GetCurrentWeapon(var_9_string);
			string var_13_string;
			var_9_string = var_13_string;
			func_507();
			func_740();
			@IsShooting(var_10_bool);
			if(var_10_bool != 0)
				func_619();
		}
	}

	// @pe
	void OnPlayerHolsterWeapon(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool)
	{
		func_744();
		TaskCall(0);
		func_0();
		TaskReturn();
		func_740();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, bool var_4_bool, bool var_5_bool)
	{
		int var_11_int; bool var_12_bool; int var_13_int;
		int var_15_int;
		var_5_bool = var_15_int;
		bool var_14_bool;
		func_1955(var_14_bool, var_15_int);
		if(var_14_bool != 0)
			return 8;
		func_744();
		bool var_10_bool;
		@IsWeaponHolstered(var_10_bool);
		if(!var_10_bool) { //@nz
			var_11_int = 0;

			for(;;) {
				@HasAnimation(var_12_bool, ("idle" + (var_11_int + 1)));
				if(!var_12_bool) { //@nz
				} else {
					var_11_int += 1;
				}
				if(var_11_int != 0) {
					@irand(var_13_int, var_11_int);
					@PlayAnimation("idle" + (var_13_int + 1));
					@WaitForAnimEnd();
				}
		}
			func_740();
			return 8;

		}
	}

	void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, bool var_4_bool, bool var_5_bool)
	{
		string var_7_string;
		if(var_5_bool == 11) {
			@GetCurrentWeapon(var_7_string);
			string var_10_string;
			var_7_string = var_10_string;
			func_497(var_10_string);
		} else {
			int var_38_int;
			var_5_bool = var_38_int;
			func_2092();
		}
	
	}

}


task task_4
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, int var_4_int, bool var_5_bool)
	{
		if(var_5_bool == 10) {
			var_0_bool = true;
		} else {
			int var_8_int;
			var_5_bool = var_8_int;
			func_2092();
		}
	
	}

}


task task_5
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, int var_5_int)
	{
		if(var_5_int == 11)
			func_1032();
		int var_33_int;
		var_5_int = var_33_int;
		func_2092();
	}

}


task task_6
{
}


// @pe
void OnPlayerEnemy(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool)
{
	func_1830();
	func_1778();
}


// @pe
void OnPlayerStartWalking(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool)
{
	func_1819();
	func_1778();
}


// @pe
void OnPlayerStopWalking(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool)
{
	func_1799();
	func_1788();
}


// @pe
void OnLSHAnimationEnd(bool bCycled, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool)
{
	func_1809();
}


// @pe
void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, int var_5_int)
{
	int var_7_int;
	var_5_int = var_7_int;
	bool var_6_bool;
	func_1955(var_6_bool, var_7_int);
}


// @pe
void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, string var_5_string)
{
	if(var_5_string == "die")
		func_1766();
}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, string var_6_string)
{
	float var_10_float; object var_11_object;
	if(var_6_string == "health") {
		@GetProperty("health", var_10_float);
		if(var_10_float < 0.001)
			@SignalDeath(var_5_object);
	} else if(var_6_string == "reputation") {
		@GetScene(var_11_object);
		object var_22_object;
		func_1514(var_22_object);
		@BroadcastMessage("prc", var_22_object, var_11_object);
		var_11_object = null;
	}
	object var_12_object;
	@CreateStringVector(var_12_object);
	var_12_object->add(var_6_string);
	@SendWorldWndMessage(10, var_12_object);
	
}
EMIT "Stack[-1] = 0";


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object)
{
	bool var_6_bool;
	func_1660(var_6_bool);
	if(!var_6_bool) //@nz
		func_1766();
}


void OnReputationChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, float var_6_float, bool var_7_bool)
{
	if(!var_5_object) //@nz
		return 2;
	var_11_object = GlobalVars[2];
	bool var_9_bool;
	var_11_object->in(var_9_bool, var_5_object);
	if(var_9_bool != 0) {
		@Trace("Reputation is not changed for enemy: " + var_5_object);
		return 2;
	}
	if(!var_7_bool) { //@nz
		var_16_object = GlobalVars[1];
		var_16_object->in(var_9_bool, var_5_object);
		if(var_9_bool != 0)
			return 2;
	}
	var_18_object = GlobalVars[1];
	var_18_object->add(var_5_object);
	bool var_19_bool; object var_20_object; float var_21_float;
	object var_22_object;
	func_1514(var_22_object);
	var_22_object = var_20_object;
	var_6_float = var_21_float;
	func_1597(var_19_bool, var_20_object, var_21_float);
}


// @pe
void OnPlayerLand(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool)
{
	func_2254();
	func_1788();
}


// @pe
void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object)
{
}


void OnFallDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, float var_5_float)
{
	float var_8_float; float var_9_float;
	if(var_5_float > 770.0) {
		@Trace(var_5_float);
		var_8_float = (var_5_float - 770.0) * 0.0034999999;
		float var_15_float; object var_16_object; float var_17_float;
		object var_19_object;
		func_1514(var_19_object);
		var_19_object = var_16_object;
		func_1383(var_15_float, var_16_object, var_17_float, 0);
		var_15_float = var_9_float;
		object var_84_object;
		func_1514(var_84_object);
		@ReportHit(var_84_object, 0, var_9_float, var_17_float, [0.0, 0.0, 0.0], [0.0, 0.0, 0.0]);
	}
}


void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, int var_5_int)
{
	object var_19_object; object var_20_object; object var_21_object; cvector var_22_cvector; string var_23_string; bool var_24_bool; cvector var_25_cvector; int var_26_int; bool var_27_bool; bool var_28_bool; int var_29_int; int var_30_int; bool var_31_bool;
	if(var_5_int == 0) {
		@Inventory();
	} else {
			if(var_5_int == 1) {
				@GetMainOutdoorScene(var_19_object);
				@GetActiveScene(var_20_object);
				if(var_19_object == null) {
					@Trace("Can't find main outdoor oscene");
					return 26;
				}
				var_19_object->GetMap(var_21_object);
				if(var_21_object == null) {
					@Trace("Can't find map");
					return 26;
				}
				if(var_19_object == var_20_object) {
					@GetPosition(var_22_cvector);
				} else {
				var_20_object->GetName(var_23_string);
				var_19_object->GetLocator(("pt_gmap_" + var_23_string), var_24_bool, var_22_cvector, var_25_cvector);
				var_45_bool = !var_24_bool; //@nz
				if(var_45_bool == 0) goto Label_2138;
				@Trace("FIXME: No map locator for scene : " + var_23_string);
				var_22_cvector = [0.0, 0.0, 0.0];
			}
			if(var_5_int == 2) {
				@Diary();
			} else if(var_5_int == 3) {
				@ShowMessage();
			} else if(var_5_int == 4) {
				@ShowPlayerStats(var_26_int);
				if(var_26_int == 1)
					@ShowWindow("people.xml", true);
			}
			if(var_5_int == 5) {
				@IsFlashlightOn(var_27_bool);
				if(var_27_bool != 0) {
					@SwitchFlashlight(false);
					@PlaySound("flashlight_off");
				} else {
						bool var_63_bool;
						func_1666(var_63_bool);
						if(var_63_bool == 0) goto Label_2198;
						@SwitchFlashlight(true);
						@PlaySound("flashlight_on");
				}
				for(;;) {
					goto Label_2253;

				}

			Label_2198:
				@PlaySound("flashlight_nofuel");
			}
			if(var_5_int == 6) {
				int var_72_int;
				func_1672(var_72_int);
				if(var_72_int != 0)
					return 26;
				@IsVisirOn(var_28_bool);
				if(var_28_bool != 0) {
					@SwitchVisir(false);
					@SendWorldWndMessage(2);
				} else {
						@GetProperty("visir", var_29_int);
						if(var_29_int == 0) goto Label_2241;
						@GetProperty("vcharge", var_30_int);
						if(!(var_30_int >= 10)) goto Label_2241;
						@SwitchVisir(true);
						@SendWorldWndMessage(1);
				}
			Label_2241:
				for(;;) {
					goto Label_2253;

				}
			}
			if(!(var_5_int == 7)) goto Label_2253;
			@IsOverrideActive(var_31_bool);
			var_90_bool = !var_31_bool; //@nz
			if(var_90_bool == 0) goto Label_2253;
			@ShowWindow("people.xml", true);
			}
		Label_2138:
			var_41_float = GetByIndex(var_22_cvector, 0);
			var_42_float = GetByIndex(var_22_cvector, 2);
			var_21_object->SetMapParams(var_41_float, var_42_float);
			@ShowMap(var_21_object);
			var_21_object = null;
			var_20_object = null;
			var_19_object = null;
	}
Label_2253:
	for(;;) {
		return 26;

	}
	
}


void func_0(void)
{
	string var_9_string;
	@GetCurrentWeapon(var_9_string);
	bool var_10_bool;
	@IsWeaponHolstered(var_10_bool);
	object var_11_object;
	@GetScene(var_11_object);
	if(var_10_bool != 0) {
		object var_14_object;
		func_1514(var_14_object);
		@BroadcastMessage("unholster", var_14_object, var_11_object);
		func_1652(var_9_string + "_unholster");
		@SetWeaponHolster(false);
		@PlayAnimation("unholster");
		@WaitForAnimEnd();
	} else {
		object var_25_object;
		func_1514(var_25_object);
		@BroadcastMessage("holster", var_25_object, var_11_object);
		func_1652(var_9_string + "_holster");
		@PlayAnimation("holster");
		@WaitForAnimEnd();
		@SetWeaponHolster(true);
	}
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_1538(int var_372_int, int var_373_int, int var_374_int, int var_375_int)
{
	if(var_373_int < var_374_int) {
		var_374_int = var_372_int;
		return 0;
	}
	if(var_373_int > var_375_int) {
		var_375_int = var_372_int;
		return 0;
	}
	var_373_int = var_372_int;
}


void func_1032(void)
{
	bool var_8_bool;
	func_1881(var_8_bool, "revolver_ammo", 2);
	if(var_8_bool != 0) {
		string var_29_string;
		func_1063(var_29_string);
		@PlaySound(var_29_string + "_reload");
		@PlayAnimation("reload");
		@WaitForAnimEnd();
	}
}


void func_1549(object var_31_object)
{
	object var_33_object;
	@CreateObjectSet(var_33_object);
	var_33_object = var_31_object;
}
EMIT "Stack[-1] = 0";


void func_1555(object var_567_object)
{
	object var_569_object;
	@CreateObjectVector(var_569_object);
	var_569_object = var_567_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1561(float var_111_float, cvector var_112_cvector, cvector var_113_cvector)
{
	var_114_float = GetByIndex(var_112_cvector, 0);
	var_115_float = GetByIndex(var_113_cvector, 0);
	var_117_float = GetByIndex(var_112_cvector, 2);
	var_118_float = GetByIndex(var_113_cvector, 2);
	var_111_float = (var_114_float * var_115_float) + (var_117_float * var_118_float);
}


// @pe
void func_1570(float var_120_float, cvector var_121_cvector)
{
	var_122_float = GetByIndex(var_121_cvector, 0);
	var_123_float = GetByIndex(var_121_cvector, 0);
	var_125_float = GetByIndex(var_121_cvector, 2);
	var_126_float = GetByIndex(var_121_cvector, 2);
	var_120_float = sqrt((var_122_float * var_123_float) + (var_125_float * var_126_float));
}


void func_1063(string var_29_string)
{
	var_29_string = "gun";
}


void func_1065(float var_556_float)
{
	var_556_float = 1.3;
}


void func_1067(int var_580_int)
{
	var_580_int = 1;
}


// @pe
void func_1580(float var_108_float, cvector var_109_cvector, cvector var_110_cvector)
{
	cvector var_112_cvector;
	var_109_cvector = var_112_cvector;
	cvector var_113_cvector;
	var_110_cvector = var_113_cvector;
	float var_111_float;
	func_1561(var_111_float, var_112_cvector, var_113_cvector);
	float var_120_float; cvector var_121_cvector;
	var_109_cvector = var_121_cvector;
	func_1570(var_120_float, var_121_cvector);
	float var_129_float; cvector var_130_cvector;
	var_110_cvector = var_130_cvector;
	func_1570(var_129_float, var_130_cvector);
	var_108_float = var_111_float / (var_120_float * var_129_float);
}


void func_1069(int var_582_int)
{
	var_582_int = 2;
}


void func_1071(int var_553_int)
{
	var_553_int = 2;
}


void func_1073(bool var_0_bool)
{
	string var_470_string; string var_471_string; int var_472_int; bool var_473_bool; float var_474_float; cvector var_476_cvector; object var_477_object; int var_478_int; cvector var_479_cvector; object var_480_object; int var_481_int; cvector var_482_cvector; float var_483_float; float var_484_float; float var_485_float; object var_486_object; float var_487_float; object var_488_object; object var_489_object; int var_490_int; int var_491_int; object var_492_object; bool var_493_bool;
	var_0_bool = false;
	
Label_1075:
	bool var_494_bool;
	func_964(var_494_bool);
	if(!var_494_bool) { //@nz
	} else {
		@GetCurrentWeapon(var_470_string);
		var_471_string = "attack1";
		@SetAttackState(true);
		func_1003();
		@PlayAnimation(var_471_string + "_phase1");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 48;
		@TriggerWeapon("shot");
		string var_549_string;
		func_1063(var_549_string);
		@PlaySound(var_549_string + "_shot");
		int var_552_int;
		int var_553_int;
		func_1071(var_553_int);
		var_553_int = var_552_int;
		func_1928(var_552_int);
		func_1297();
		@SetAttackState(false);
		int var_555_int;
		func_999(var_555_int);
		var_555_int = var_472_int;
		float var_556_float;
		func_1065(var_556_float);
		var_474_float = var_556_float / var_472_int;
		float var_560_float;
		func_1001(var_560_float);
		float var_564_float;
		func_1917(var_564_float);
		@GetDirection(var_476_cvector);
		object var_567_object;
		func_1555(var_567_object);
		var_567_object = var_477_object;
		var_478_int = 0;

		for(;;) {
			if(var_478_int < var_472_int) {
				@RandVecCone3D(var_479_cvector, var_476_cvector, (1.0 / (1.5 + (((1.0 / var_560_float) - 1.5) * var_564_float))));
				@GetVictimMaterialExact(var_480_object, var_481_int, var_482_cvector, var_479_cvector, 10000);
				if(var_480_object != 0) {
					var_474_float = var_483_float;
					if(var_481_int == 4)
						var_483_float *= 3.0;
					float var_576_float; object var_577_object; float var_578_float; int var_579_int;
					var_480_object = var_577_object;
					var_483_float = var_578_float;
					int var_580_int;
					func_1067(var_580_int);
					var_580_int = var_579_int;
					func_1383(var_576_float, var_577_object, var_578_float, var_579_int);
					var_576_float = var_484_float;
					if(var_484_float != 0) {
						var_477_object->add(var_480_object);
						int var_582_int;
						func_1069(var_582_int);
						@ReportHit(var_480_object, var_582_int, var_484_float, var_483_float, var_482_cvector, var_479_cvector);
						bool var_583_bool;
						func_1298(var_583_bool);
						if(var_583_bool != 0) {
							var_480_object->GetProperty("health", var_485_float);
							if(!var_485_float) { //@nz
								@GetVictimMaterialExact(var_486_object, var_481_int, var_482_cvector, var_479_cvector, 10000, var_480_object);
								bool var_587_bool = false;
								if(var_486_object != 0) {
									if(var_486_object != var_480_object)
										var_587_bool = true;
								}
								if(var_587_bool != 0) {
									float var_590_float; object var_591_object; int var_593_int;
									var_486_object = var_591_object;
									int var_595_int;
									func_1067(var_595_int);
									var_595_int = var_593_int;
									func_1383(var_590_float, var_591_object, (var_483_float * 0.75), var_593_int);
									var_590_float = var_487_float;
									if(var_487_float != 0) {
										var_477_object->add(var_486_object);
										int var_597_int;
										func_1069(var_597_int);
										@ReportHit(var_486_object, var_597_int, var_487_float, var_483_float, var_482_cvector, var_479_cvector);
									}
								}
								var_486_object = null;
							}
						}
					} else {
					if(!(var_481_int != -1)) goto Label_1247;
					var_601_bool = !false; //@nz
					if(var_601_bool == 0) goto Label_1247;
					@GetScene(var_488_object);
					@AddActorByType(var_489_object, "scripted", var_488_object, var_482_cvector, [0.0, 0.0, 1.0], "richochet.xml");
					var_489_object->SetScriptProperty("Material", var_481_int);
					var_473_bool = true;
					var_489_object = null;
					var_488_object = null;
			}
				var_477_object->size(var_490_int);
				var_491_int = 0;

				for(;;) {
					if(var_491_int < var_490_int) {
						var_477_object->get(var_492_object, var_491_int);
						@ReportAttack(var_492_object);
						var_607_object = GlobalVars[2];
						var_607_object->in(var_493_bool, var_492_object);
						if(!var_493_bool) { //@nz
							var_609_object = GlobalVars[3];
							var_609_object->add(var_492_object);
							@BroadcastPlayerDamage(var_492_object, false);
						} else {
						@BroadcastPlayerDamage(var_492_object, true);
					}
					@PlayAnimation(var_471_string + "_phase2");
					@WaitForAnimEnd();
					if(var_0_bool != 0)
						return 48;
					func_1016();
					var_477_object = null;
					bool var_631_bool;
					func_1300(var_631_bool);
					if(var_631_bool == 1) goto Label_1075;
					}
					var_492_object = null;
					var_491_int += 1;
				}
				}
			}
		Label_1247:
			var_480_object = null;
			var_478_int += 1;
		}
	}
	
}


void func_50(string var_309_string)
{
	var_309_string = "scalpel";
}


// @pe
void func_52(float var_327_float)
{
	var_327_float = 0.6;
}


void func_55(float var_331_float)
{
	var_331_float = 0.5;
}


void func_57(int var_365_int)
{
	var_365_int = 2;
}


void func_59(int var_350_int)
{
	var_350_int = 0;
}


void func_61(int var_359_int)
{
	var_359_int = 1;
}


// @pe
void func_1597(bool var_19_bool, object var_20_object, float var_21_float)
{
	if(!var_20_object) { //@nz
		var_19_bool = false;
		return 0;
	}
	if(var_21_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_21_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_29_float;
		var_21_float = var_29_float;
		func_1642(var_29_float);
		bool var_33_bool; object var_34_object; float var_36_float;
		var_20_object = var_34_object;
		var_21_float = var_36_float;
		func_1361(var_33_bool, var_34_object, "reputation", var_36_float, (float)0, (float)1);
		var_19_bool = true;
		return 0;

	}
	
	var_19_bool = false;
}


// @pe
void func_63(float var_325_float, bool var_326_bool)
{
	bool var_328_bool;
	var_326_bool = var_328_bool;
	func_52(var_328_bool);
	float var_329_float; float var_330_float;
	float var_331_float;
	func_55(var_331_float);
	var_331_float = var_330_float;
	func_1946(var_329_float, var_330_float);
	float var_327_float;
	var_325_float = var_327_float * var_329_float;
}


void func_77(void)
{
	int var_365_int;
	func_57(var_365_int);
	int var_364_int;
	var_365_int = var_364_int;
	func_1928(var_364_int);
}


void func_85(bool var_0_bool)
{
	bool var_259_bool; string var_260_string; float var_261_float; cvector var_262_cvector; object var_263_object; int var_264_int; cvector var_265_cvector; bool var_266_bool; cvector var_267_cvector; cvector var_268_cvector; string var_269_string; int var_270_int; cvector var_271_cvector; cvector var_272_cvector; float var_273_float; float var_274_float; int var_275_int; bool var_276_bool;
	var_0_bool = false;
	int var_257_int = 0;
	
	for(;;) {
		var_257_int += 1;
		string var_278_string;
		func_323(var_278_string);
		@HasAnimation(var_259_bool, (((var_278_string + "attack") + var_257_int) + "_phase1"));
		if(!var_259_bool) { //@nz
			break;
		Label_109:
			@GetCurrentWeapon(var_260_string);
			@GetAttackDistance(var_261_float);
			@GetDirection(var_262_cvector);
			var_266_bool = false;
			bool var_286_bool;
			func_321(var_286_bool);
			if(var_286_bool != 0) {
				@GetVictimMaterialExact(var_263_object, var_264_int, var_265_cvector, var_262_cvector, var_261_float);
				bool var_287_bool = false;
				bool var_288_bool = false;
				bool var_289_bool = false;
				if(var_263_object != null) {
					bool var_291_bool; object var_292_object;
					var_263_object = var_292_object;
					func_1349(var_291_bool, var_292_object, "health");
					if(var_291_bool != 0)
						var_289_bool = true;
				}
				if(var_289_bool != 0) {
					bool var_294_bool; object var_295_object;
					var_263_object = var_295_object;
					func_1456(var_294_bool, var_295_object);
					if(!var_294_bool) //@nz
						var_288_bool = true;
				}
				if(var_288_bool != 0) {
					if(var_264_int == 4)
						var_287_bool = true;
				}
				if(var_287_bool != 0) {
					var_303_bool = IsFuncExist(var_263_object, "GetDirection", 1);
					if(var_303_bool != 0) {
						@GetDirection(var_267_cvector);
						var_263_object->GetDirection(var_268_cvector);
						float var_304_float; cvector var_305_cvector; cvector var_306_cvector;
						var_267_cvector = var_305_cvector;
						var_268_cvector = var_306_cvector;
						func_1580(var_304_float, var_305_cvector, var_306_cvector);
						var_266_bool = var_304_float >= 0.49999997;
					}
				}
			}
			if(var_266_bool != 0) {
				var_269_string = "battack";
				string var_309_string;
				func_50(var_309_string);
				@PlaySound(var_309_string + "_back");
				break;
			Label_207:
				@SetAttackState(false);
				@GetAttackDistance(var_261_float);
				@GetDirection(var_262_cvector);
				@GetVictimMaterialExact(var_263_object, var_264_int, var_265_cvector, var_262_cvector, var_261_float);
				if(var_263_object != null) {
					var_320_bool = IsFuncExist(var_263_object, "GetDirection", 1);
					if(var_320_bool != 0) {
						@GetDirection(var_271_cvector);
						var_263_object->GetDirection(var_272_cvector);
						float var_321_float; cvector var_322_cvector; cvector var_323_cvector;
						var_271_cvector = var_322_cvector;
						var_272_cvector = var_323_cvector;
						func_1580(var_321_float, var_322_cvector, var_323_cvector);
						var_266_bool = var_321_float >= 0.49999997;
					} else {
								var_266_bool = false;
			}
							@irand(var_270_int, var_257_int);
							string var_386_string;
							func_323(var_386_string);
							var_269_string = (var_386_string + "attack") + (var_270_int + 1);
							string var_391_string;
							func_50(var_391_string);
							@PlaySound(var_391_string + (var_270_int + 1));
		}
			}
			float var_325_float; bool var_326_bool;
			var_266_bool = var_326_bool;
			func_63(var_325_float, var_326_bool);
			var_325_float = var_273_float;
			if(var_264_int == 4)
				var_273_float *= 3.0;
			float var_346_float; object var_347_object; float var_348_float; int var_349_int;
			var_263_object = var_347_object;
			int var_350_int;
			func_59(var_350_int);
			var_350_int = var_349_int;
			func_1383(var_346_float, var_347_object, var_348_float, var_349_int);
			var_346_float = var_274_float;
			if(var_274_float != 0) {
				@irand(var_275_int, 2);
				string var_353_string;
				func_50(var_353_string);
				@PlaySound((var_353_string + "_hit") + (var_275_int + 1));
				@ReportAttack(var_263_object);
				int var_359_int;
				func_61(var_359_int);
				@ReportHit(var_263_object, var_359_int, var_274_float, var_348_float, var_265_cvector, var_262_cvector);
				var_360_object = GlobalVars[2];
				var_360_object->in(var_276_bool, var_263_object);
				if(!var_276_bool) { //@nz
					var_362_object = GlobalVars[3];
					var_362_object->add(var_263_object);
					@BroadcastPlayerDamage(var_263_object, false);
				} else {
					@BroadcastPlayerDamage(var_263_object, true);

				}
			}
			func_77();
		}
		@PlayAnimation(var_269_string + "_phase2");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 40;
		var_263_object = null;
		bool var_382_bool;
		func_325(var_382_bool);
		if(var_382_bool == 1) goto Label_109;
		return 40;

	}
	var_285_bool = !(var_257_int + -1); //@nz
	if(var_285_bool == 0) goto Label_109;
	return 40;
	@SetAttackState(true);
	@PlayAnimation(var_269_string + "_phase1");
	@WaitForAnimEnd();
	if(var_0_bool == 0) goto Label_207;
}


void func_1632(float var_79_float)
{
	object var_81_object;
	@CreateFloatVector(var_81_object);
	var_81_object->add(var_79_float);
	@SendWorldWndMessage(15, var_81_object);
}
EMIT "Stack[-1] = 0";


void func_1642(float var_29_float)
{
	object var_31_object;
	@CreateFloatVector(var_31_object);
	var_31_object->add(var_29_float);
	@SendWorldWndMessage(16, var_31_object);
}
EMIT "Stack[-1] = 0";


void func_1652(string var_17_string)
{
	bool var_20_bool;
	@IsExistingSound(var_20_bool, var_17_string);
	if(var_20_bool != 0)
		@PlaySound(var_17_string);
}


void func_1660(bool var_63_bool)
{
	bool var_65_bool;
	@GetVariable("god_mode", var_65_bool);
	var_65_bool = var_63_bool;
}


void func_1666(bool var_63_bool)
{
	int var_65_int;
	@GetItemCountOfType(var_65_int, "kerosene");
	var_65_int = var_63_bool;
}


void func_1672(int var_72_int)
{
	int var_74_int;
	@GetVariable("branch", var_74_int);
	var_74_int = var_72_int;
}


// @pe
void func_1678(bool var_8_bool, int var_9_int)
{
	if(var_9_int == 10) {
		func_1841();
		var_8_bool = true;
		return 0;
	EMIT "GOTO 0x6a9";
	}
	if(var_9_int == 11) {
		func_1849();
		var_8_bool = true;
		return 0;
	EMIT "GOTO 0x6a9";
	}
	if(var_9_int == 12) {
		func_1845();
		var_8_bool = true;
		return 0;
	}
	var_8_bool = false;
}


void func_1707(void)
{
	bool var_20_bool; int var_21_int; bool var_24_bool; int var_25_int; string var_27_string;
	@GetGroundMaterial(var_20_bool, var_21_int);
	if(!var_20_bool) //@nz
		var_21_int = -1;
	string var_29_string; int var_30_int;
	var_21_int = var_30_int;
	func_1482(var_29_string, var_30_int);
	string var_22_string;
	var_29_string = var_22_string;
	int var_23_int = 0;
	
	for(;;) {
		@IsExistingSound(var_24_bool, (("step_" + var_22_string) + (var_23_int + 1)));
		if(!var_24_bool) { //@nz
			break;
		Label_1738:
			if(var_23_int == 1) {
				var_25_int = 0;
			} else {
					@irand(var_25_int, var_23_int);
					var_60_string = GlobalVars[0];
					if(!((("step_" + var_22_string) + (var_25_int + 1)) != var_60_string)) goto Label_1754;
			}
			for(;;) {
				@PlaySound(("step_" + var_22_string) + (var_25_int + 1));
				var_55_string = GlobalVars[0];
				var_27_string = var_55_string;
				GlobalVars[0] = var_55_string;

			}

		Label_1754:
		}
		var_23_int += 1;
	}
	var_47_bool = !var_23_int; //@nz
	if(var_47_bool == 0) goto Label_1738;
	var_48_string = GlobalVars[0];
	GlobalVars[0] = "";
}


void func_2254(void)
{
	float var_55_float;
	@rand(var_55_float, 10, 30);
	@SetTimer(0, var_55_float);
}


void func_2263(void)
{
	object var_540_object;
	@GetScene(var_540_object);
	object var_542_object;
	func_1514(var_542_object);
	@BroadcastMessage("player_shot", var_542_object, var_540_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_740(void)
{
	func_2254();
}


void func_1766(void)
{
	object var_70_object;
	@GetMainOutdoorScene(var_70_object);
	object var_71_object;
	@AddBlankActor(var_71_object, var_70_object, "player_death", "play_death_klara.bin");
	@SetDeathState();
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_744(void)
{
	@KillTimer(0);
}


void func_748(bool var_0_bool)
{
	bool var_52_bool; float var_53_float; cvector var_54_cvector; object var_55_object; int var_56_int; cvector var_57_cvector; bool var_58_bool; cvector var_59_cvector; cvector var_60_cvector; string var_61_string; int var_62_int; cvector var_63_cvector; cvector var_64_cvector; float var_65_float; float var_66_float; int var_67_int; bool var_68_bool;
	var_0_bool = false;
	int var_50_int = 0;
	
	for(;;) {
		var_50_int += 1;
		@HasAnimation(var_52_bool, (("attack" + var_50_int) + "_phase1"));
		if(!var_52_bool) { //@nz
			break;
		Label_768:
			@GetAttackDistance(var_53_float);
			var_53_float *= 2.1875;
			@GetDirection(var_54_cvector);
			@GetVictimMaterialExact(var_55_object, var_56_int, var_57_cvector, var_54_cvector, var_53_float);
			if(var_55_object != null) {
				bool var_78_bool; object var_79_object;
				var_55_object = var_79_object;
				func_1349(var_78_bool, var_79_object, "healable");
				if(var_78_bool != 0) {
					@PlaySound("heal");
					@PlayAnimation("heal_phase1");
					@WaitForAnimEnd();
					if(var_0_bool != 0)
						return 38;
					bool var_90_bool; object var_91_object;
					var_55_object = var_91_object;
					func_1461(var_90_bool, var_91_object);
					if(var_90_bool != 0)
						@Trigger(var_55_object, "heal");
					@PlayAnimation("heal_phase2");
					@WaitForAnimEnd();
					if(var_0_bool != 0)
						return 38;
					break;
				}
			}
			var_107_bool = IsFuncExist(var_55_object, "GetDirection", 1);
			if(var_107_bool != 0) {
				@GetDirection(var_59_cvector);
				var_55_object->GetDirection(var_60_cvector);
				float var_108_float; cvector var_109_cvector; cvector var_110_cvector;
				var_59_cvector = var_109_cvector;
				var_60_cvector = var_110_cvector;
				func_1580(var_108_float, var_109_cvector, var_110_cvector);
				var_58_bool = var_108_float >= 0.49999997;
			} else {
								var_58_bool = false;
		}
		}
		if(var_58_bool != 0) {
			var_61_string = "battack";
			@PlaySound("punch_back");
			break;
		Label_857:
			@GetVictimMaterialExact(var_55_object, var_56_int, var_57_cvector, var_54_cvector, var_53_float);
			if(var_55_object != null) {
				var_141_bool = IsFuncExist(var_55_object, "GetDirection", 1);
				if(var_141_bool != 0) {
					@GetDirection(var_63_cvector);
					var_55_object->GetDirection(var_64_cvector);
					float var_142_float; cvector var_143_cvector; cvector var_144_cvector;
					var_63_cvector = var_143_cvector;
					var_64_cvector = var_144_cvector;
					func_1580(var_142_float, var_143_cvector, var_144_cvector);
					var_58_bool = var_142_float >= 0.49999997;
				} else {
							var_58_bool = false;
		}
						@irand(var_62_int, var_50_int);
						var_61_string = "attack" + (var_62_int + 1);
						@PlaySound("punch" + (var_62_int + 1));

			}
			float var_146_float; bool var_147_bool;
			var_58_bool = var_147_bool;
			func_952(var_146_float, var_147_bool);
			var_146_float = var_65_float;
			if(var_56_int == 4)
				var_65_float *= 3.0;
			float var_152_float; object var_153_object; float var_154_float;
			var_55_object = var_153_object;
			func_1383(var_152_float, var_153_object, var_154_float, 0);
			var_152_float = var_66_float;
			if(var_66_float != 0) {
				@irand(var_67_int, 2);
				@PlaySound("punch_hit" + (var_67_int + 1));
				@ReportAttack(var_55_object);
				@ReportHit(var_55_object, 0, var_66_float, var_154_float, var_57_cvector, var_54_cvector);
				var_219_object = GlobalVars[2];
				var_219_object->in(var_68_bool, var_55_object);
				if(!var_68_bool) { //@nz
					var_221_object = GlobalVars[3];
					var_221_object->add(var_55_object);
					@BroadcastPlayerDamage(var_55_object, false);
				} else {
					@BroadcastPlayerDamage(var_55_object, true);

				}
			}
		}
		@PlayAnimation(var_61_string + "_phase2");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 38;
		var_55_object = null;

	}
	var_75_bool = !(var_50_int + -1); //@nz
	if(var_75_bool == 0) goto Label_768;
	return 38;
	bool var_102_bool;
	func_959(var_102_bool);
	if(var_102_bool == 1) goto Label_768;
	return 38;
	@PlayAnimation(var_61_string + "_phase1");
	@WaitForAnimEnd();
	if(var_0_bool == 0) goto Label_857;
}


void func_1778(void)
{
	bool var_11_bool;
	@KillTimer(11, var_11_bool);
	if(var_11_bool != 0)
		@ModNoise(-3);
}


// @pe
void func_1788(void)
{
	func_1778();
	@SetTimer(11, 0.15);
	@ModNoise(3);
}


void func_1799(void)
{
	bool var_6_bool;
	@KillTimer(10, var_6_bool);
	if(var_6_bool != 0)
		@ModNoise(-2);
}


void func_1297(void)
{
}


void func_1298(bool var_583_bool)
{
	var_583_bool = false;
}


void func_1809(void)
{
	bool var_6_bool;
	@KillTimer(12, var_6_bool);
	if(var_6_bool != 0)
		@ModNoise(-1);
}


void func_1300(bool var_631_bool)
{
	bool var_633_bool;
	@IsShooting(var_633_bool);
	var_633_bool = var_631_bool;
}


// @pe
void func_1305(void)
{
	func_1329();
	bool var_13_bool;
	func_1881(var_13_bool, "revolver_ammo", 2);
	if(var_13_bool != 0) {
		string var_34_string;
		func_1327(var_34_string);
		@PlaySound(var_34_string + "_reload");
		@PlayAnimation("reload");
		@WaitForAnimEnd();
	}
}


// @pe
void func_1819(void)
{
	func_1799();
	@SetTimer(10, 0.35);
	@ModNoise(2);
}


// @pe
void func_1830(void)
{
	func_1809();
	@SetTimer(12, 0.6);
	@ModNoise(1);
}


void func_1327(string var_34_string)
{
	var_34_string = "gun";
}


void func_1329(void)
{
}


// @pe
void func_1330(string var_49_string, int var_50_int)
{
	if(var_50_int == 2) {
		var_49_string = "fire";
		return 0;
	EMIT "GOTO 0x53e";
	}
	if(var_50_int == 1) {
		var_49_string = "bullet";
		return 0;
	}
	var_49_string = "phys";
}


// @pe
void func_1841(void)
{
	func_1707();
}


// @pe
void func_1845(void)
{
	func_1707();
}


// @pe
void func_1849(void)
{
	func_1707();
	func_1778();
}


void func_1344(bool var_75_bool, object var_76_object)
{
	bool var_78_bool;
	@IsPlayerActor(var_76_object, var_78_bool);
	var_78_bool = var_75_bool;
}


void func_321(bool var_286_bool)
{
	var_286_bool = false;
}


void func_323(string var_278_string)
{
	var_278_string = "";
}


void func_1349(bool var_34_bool, object var_35_object, string var_36_string)
{
	var_41_bool = IsFuncExist(var_35_object, "HasProperty", 2);
	if(!var_41_bool) { //@nz
		var_34_bool = false;
		return 2;
	}
	bool var_38_bool;
	var_35_object->HasProperty(var_36_string, var_38_bool);
	var_38_bool = var_34_bool;
}


void func_325(bool var_382_bool)
{
	bool var_384_bool;
	@IsShooting(var_384_bool);
	var_384_bool = var_382_bool;
}


void func_330(bool var_0_bool, bool var_1_bool)
{
	bool var_408_bool; bool var_409_bool; bool var_410_bool; int var_411_int; int var_412_int;
	var_0_bool = false;
	var_1_bool = false;
	@PlayAnimation("use_begin");
	@WaitForAnimEnd();
	if(var_0_bool != 0)
		return 14;
	object var_406_object;
	@GetPlayerSelectedObject(var_406_object);
	bool var_407_bool = false;
	bool var_415_bool; object var_416_object;
	var_406_object = var_416_object;
	func_1349(var_415_bool, var_416_object, "lp");
	if(var_415_bool != 0) {
		var_406_object->GetProperty("lp", var_408_bool);
		if(var_408_bool != 0) {
			var_406_object->GetProperty("locked", var_409_bool);
			if(var_409_bool != 0) {
				var_407_bool = true;
				var_406_object->SetProperty("locked", false);
				var_411_int = 0;
				@GetWeaponProperty(var_410_bool, "uses", var_411_int);
				if(var_411_int <= 1) {
					@GetWeaponItem(var_412_int);
					@SelectItem(var_412_int, false, 0);
					@RemoveItem(var_412_int, 1, 0);
					var_1_bool = true;
				} else {
						@SetWeaponProperty(var_410_bool, "uses", (var_411_int - 1));
				}
			}
		}
	}
	if(var_407_bool != 0)
		@PlayAnimation("use_success");
	else
		@PlayAnimation("use_fail");

	@WaitForAnimEnd();
	if(var_0_bool != 0)
		return 14;
	if(var_1_bool != 0) {
		@PlayAnimation("holster");
		@WaitForAnimEnd();
		@SetHandsItem(-1);
		if(var_0_bool != 0)
			return 14;
		var_1_bool = false;
		@PlayAnimation("unholster");
		@WaitForAnimEnd();
	}
	
}
EMIT "Stack[-7] = 0";


void func_1361(bool var_33_bool, object var_34_object, string var_35_string, float var_36_float, float var_37_float, float var_38_float)
{
	object var_42_object;
	var_34_object = var_42_object;
	string var_43_string;
	var_35_string = var_43_string;
	bool var_41_bool;
	func_1349(var_41_bool, var_42_object, var_43_string);
	if(!var_41_bool) //@nz
		var_33_bool = false;
	float var_40_float;
	var_34_object->GetProperty(var_35_string, var_40_float);
	float var_51_float; float var_53_float; float var_54_float;
	var_37_float = var_53_float;
	var_38_float = var_54_float;
	func_1527(var_51_float, (var_40_float + var_36_float), var_53_float, var_54_float);
	var_34_object->SetProperty(var_35_string, var_51_float);
	var_33_bool = true;
}


void func_1881(bool var_8_bool, string var_9_string, int var_10_int)
{
	bool var_15_bool; int var_16_int; bool var_18_bool;
	@GetWeaponProperty(var_15_bool, "ammo", var_16_int);
	bool var_20_bool = false;
	if(var_15_bool != 0) {
		if(var_16_int >= var_10_int)
			var_20_bool = true;
	}
	if(var_20_bool != 0) {
		var_8_bool = false;
		return 8;
	}
	int var_17_int;
	@GetInvItemByName(var_17_int, var_9_string);
	
	for(;;) {
		if(var_16_int < var_10_int) {
			@RemoveItemByType(var_18_bool, var_17_int, 1);
			if(!var_18_bool) { //@nz
			} else {
				var_16_int += 1;
			}
		}
		if(!var_16_int) { //@nz
			var_8_bool = false;
			return 8;
		}
		@SetWeaponProperty(var_15_bool, "ammo", var_16_int);
		var_8_bool = true;
		return 8;

	}
}


void func_1383(float var_15_float, object var_16_object, float var_17_float, int var_18_int)
{
	int var_28_int; int var_30_int;
	object var_35_object;
	var_16_object = var_35_object;
	bool var_34_bool;
	func_1349(var_34_bool, var_35_object, "health");
	if(!var_34_bool) //@nz
		var_15_float = 0.0;
	bool var_44_bool; object var_45_object;
	func_1349(var_44_bool, var_45_object, "armor");
	if(!var_44_bool) //@nz
		var_28_int = 0;
	else
		var_45_object->GetProperty("armor", var_28_int);
	string var_49_string; int var_50_int;
	var_18_int = var_50_int;
	func_1330(var_49_string, var_50_int);
	string var_29_string = "armor_" + var_49_string;
	bool var_55_bool; object var_56_object; string var_57_string;
	var_16_object = var_56_object;
	func_1349(var_55_bool, var_56_object, var_57_string);
	if(!var_55_bool) //@nz
		var_30_int = 0;
	else
		var_16_object->GetProperty(var_57_string, var_30_int);

	float var_59_float;
	func_1520(var_59_float, ((var_28_int + var_30_int) / 100.0), (float)1);
	float var_31_float;
	var_59_float = var_31_float;
	float var_32_float;
	var_16_object->GetProperty("health", var_32_float);
	float var_33_float = var_17_float * (1 - var_31_float);
	float var_69_float;
	func_1527(var_69_float, (var_32_float - var_33_float), (float)0, (float)1);
	var_16_object->SetProperty("health", var_69_float);
	bool var_75_bool; object var_76_object;
	var_16_object = var_76_object;
	func_1344(var_75_bool, var_76_object);
	if(var_75_bool != 0) {
		float var_79_float = -var_33_float;
		func_1632(var_79_float);
	}
	var_33_float = var_15_float;
	
}


void func_1917(float var_332_float)
{
	bool var_335_bool; int var_336_int;
	@GetWeaponProperty(var_335_bool, "durability", var_336_int);
	if(var_335_bool != 0)
		var_332_float = var_336_int / 100.0;
	else
		var_332_float = 1.0;
	
}


void func_1928(int var_364_int)
{
	bool var_368_bool; int var_369_int;
	@GetWeaponProperty(var_368_bool, "durability", var_369_int);
	if(!var_368_bool) //@nz
		var_369_int = 100;
	int var_372_int;
	func_1538(var_372_int, (var_369_int - var_364_int), 0, 100);
	var_372_int = var_369_int;
	@SetWeaponProperty(var_368_bool, "durability", var_369_int);
}


// @pe
void func_1946(float var_329_float, float var_330_float)
{
	float var_332_float;
	func_1917(var_332_float);
	var_329_float = var_330_float + (var_332_float * (1 - var_330_float));
}


// @pe
void func_1955(bool var_6_bool, int var_7_int)
{
	int var_9_int;
	var_7_int = var_9_int;
	bool var_8_bool;
	func_1678(var_8_bool, var_9_int);
	var_8_bool = var_6_bool;
}


void func_1456(bool var_294_bool, object var_295_object)
{
	bool var_297_bool;
	var_295_object->IsDead(var_297_bool);
	var_297_bool = var_294_bool;
}


void func_1461(bool var_90_bool, object var_91_object)
{
	if(var_91_object == null) {
		var_90_bool = false;
		return 4;
	}
	object var_94_object;
	@GetScene(var_94_object);
	if(var_94_object == null) {
		var_90_bool = false;
		return 4;
	}
	object var_95_object;
	var_91_object->GetScene(var_95_object);
	if(var_94_object != var_95_object) {
		var_90_bool = false;
		return 4;
	}
	var_90_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_952(float var_146_float, bool var_147_bool)
{
	if(var_147_bool != 0)
		var_146_float = 0.4;
	else
		var_146_float = 0.2;
	
}


void func_959(bool var_102_bool)
{
	bool var_104_bool;
	@IsShooting(var_104_bool);
	var_104_bool = var_102_bool;
}


void func_964(bool var_494_bool)
{
	bool var_497_bool; bool var_498_bool;
	@GetWeaponProperty(var_497_bool, "ammo", var_498_bool);
	bool var_500_bool = true;
	var_501_bool = !var_497_bool; //@nz
	if(var_501_bool != 1) {
		var_502_bool = !var_498_bool; //@nz
		if(var_502_bool != 1)
			var_500_bool = false;
	}
	if(var_500_bool != 0) {
		bool var_503_bool;
		func_1881(var_503_bool, "revolver_ammo", 2);
		if(!var_503_bool) { //@nz
			string var_525_string;
			func_1063(var_525_string);
			@PlaySound(var_525_string + "_noammo");
			@PlayAnimation("noammo");
			@WaitForAnimEnd();
			var_494_bool = false;
		}
	}
	var_494_bool = true;
}


// @pe
void func_1482(string var_29_string, int var_30_int)
{
	if(var_30_int == 1) {
		var_29_string = "wood";
		return 0;
	EMIT "GOTO 0x5e8";
	}
	if(var_30_int == 2) {
		var_29_string = "metal";
		return 0;
	EMIT "GOTO 0x5e8";
	}
	if(var_30_int == 3) {
		var_29_string = "ground";
		return 0;
	EMIT "GOTO 0x5e8";
	}
	if(var_30_int == 4) {
		var_29_string = "water";
		return 0;
	EMIT "GOTO 0x5e8";
	}
	if(var_30_int == 5) {
		var_29_string = "carpet";
		return 0;
	}
	var_29_string = "stone";
}


// @pe
void func_460(string var_27_string)
{
	if(var_27_string == "empty") {
		TaskCall(4);
		func_748(var_30_bool);
		TaskReturn();
	} else if(var_27_string == "scalpel") {
			TaskCall(1);
			func_85(var_236_bool);
			TaskReturn();
	}

	
	if(var_27_string == "lockpick") {
		TaskCall(2);
		func_330(var_397_bool, var_398_bool);
		TaskReturn();
	} else if(var_27_string == "gun") {
		TaskCall(5);
		func_1073(var_445_bool);
		TaskReturn();
	}
}


void func_999(int var_555_int)
{
	var_555_int = 3;
}


void func_1001(float var_560_float)
{
	var_560_float = 0.02617994;
}


void func_1514(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_1003(void)
{
	bool var_533_bool; int var_534_int;
	@GetWeaponProperty(var_533_bool, "ammo", var_534_int);
	@SetWeaponProperty(var_533_bool, "ammo", (var_534_int - 1));
	func_2263();
}


// @pe
void func_1520(float var_59_float, float var_60_float, float var_61_float)
{
	if(var_60_float < var_61_float)
		var_60_float = var_59_float;
	else
		var_61_float = var_59_float;
	
}


// @pe
void func_497(string var_10_string)
{
	if(var_10_string == "gun") {
		TaskCall(6);
		func_1305();
		TaskReturn();
	}
}


// @pe
void func_1527(float var_69_float, float var_70_float, float var_71_float, float var_72_float)
{
	if(var_70_float < var_71_float) {
		var_71_float = var_69_float;
		return 0;
	}
	if(var_70_float > var_72_float) {
		var_72_float = var_69_float;
		return 0;
	}
	var_70_float = var_69_float;
}


void func_1016(void)
{
	bool var_618_bool; bool var_619_bool;
	@GetWeaponProperty(var_618_bool, "ammo", var_619_bool);
	bool var_621_bool = true;
	var_622_bool = !var_618_bool; //@nz
	if(var_622_bool != 1) {
		var_623_bool = !var_619_bool; //@nz
		if(var_623_bool != 1)
			var_621_bool = false;
	}
	if(var_621_bool != 0)
		func_1032();
}


// @pe
void func_507(void)
{
}


void func_509(object var_15_object)
{
	int var_24_int; int var_25_int; string var_26_string; bool var_28_bool; bool var_29_bool;
	var_30_object = GlobalVars[1];
	object var_31_object;
	func_1549(var_31_object);
	var_31_object = var_30_object;
	GlobalVars[1] = var_30_object;
	var_34_object = GlobalVars[2];
	object var_35_object;
	func_1549(var_35_object);
	var_35_object = var_34_object;
	GlobalVars[2] = var_34_object;
	var_36_object = GlobalVars[3];
	object var_37_object;
	func_1549(var_37_object);
	var_37_object = var_36_object;
	GlobalVars[3] = var_36_object;
	bool var_23_bool;
	@HasProperty("effects", var_23_bool);
	if(!var_23_bool) { //@nz
		@SetProperty("effects", true);
		@ApplyEffect("player_disease.bin");
		@ApplyEffect("player_stat.bin");
		@ApplyEffect("player_hit.bin");
		@ApplyEffect("player_head.bin");
		@ApplyEffect("player_flashlight.bin");
		@ApplyEffect("player_visir.bin");
		@ApplyEffect("player_vis.bin");
		@ApplyEffect("player_eyes_height.bin");
		@ApplyEffect("player_gifts.bin");
		if(var_15_object != 0) {
			var_15_object->size(var_24_int);
			var_25_int = 0;

			for(;;) {
				if(!(var_25_int < var_24_int)) goto Label_578;
				var_15_object->get(var_26_string, var_25_int);
				@ApplyEffect(var_26_string);
				var_25_int += 1;
			}
		}
	}
Label_578:
	func_740();
	float var_27_float;
	@GetProperty("health", var_27_float);
	bool var_60_bool = false;
	if(var_27_float <= 0) {
		bool var_63_bool;
		func_1660(var_63_bool);
		if(!var_63_bool) //@nz
			var_60_bool = true;
	}
	if(var_60_bool != 0)
		func_1766();
	for(;;) {
		@IsWeaponHolstered(var_28_bool);
		var_74_bool = !var_28_bool; //@nz
		if(var_74_bool == 0) goto Label_614;
		@IsWalking(var_29_bool);
		if(var_29_bool != 0) {
			@PlayAnimation("walk");
			@WaitForAnimEnd();
		} else {
		@Sleep(0.1);
		}
	}
	
}
EMIT "Return(); Pop(14)";


