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
			func_2190();
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
		if(!var_8_int) { //@nz
			@Diary();
			@SetVariable("player_init", 1);
		}
		object var_15_object;
		var_7_object = var_15_object;
		func_517(var_15_object);
	}
	EMIT "Stack[-2] = 0";

	void OnPlayerStartShooting(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, string var_6_string, bool var_7_bool, bool var_8_bool, string var_9_string, bool var_10_bool)
	{
		bool var_23_bool; string var_24_string; bool var_25_bool;
		@IsWeaponHolstered(var_23_bool);
		if(!var_23_bool) { //@nz
			func_752();
			@GetCurrentWeapon(var_24_string);
			string var_27_string;
			var_24_string = var_27_string;
			func_468(var_27_string);
			func_748();
			@IsAltShooting(var_25_bool);
			if(var_25_bool != 0)
				func_652();
		}
	}

	void OnPlayerStartAltShooting(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool)
	{
		bool var_8_bool; string var_9_string; bool var_10_bool;
		@IsWeaponHolstered(var_8_bool);
		if(!var_8_bool) { //@nz
			func_752();
			@GetCurrentWeapon(var_9_string);
			string var_13_string;
			var_9_string = var_13_string;
			func_515();
			func_748();
			@IsShooting(var_10_bool);
			if(var_10_bool != 0)
				func_627();
		}
	}

	// @pe
	void OnPlayerHolsterWeapon(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool)
	{
		func_752();
		TaskCall(0);
		func_0();
		TaskReturn();
		func_748();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, bool var_4_bool, bool var_5_bool)
	{
		int var_11_int; bool var_12_bool; int var_13_int;
		int var_15_int;
		var_5_bool = var_15_int;
		bool var_14_bool;
		func_1985(var_14_bool, var_15_int);
		if(var_14_bool != 0)
			return 8;
		func_752();
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
			func_748();
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
			func_505(var_10_string);
		} else {
			int var_38_int;
			var_5_bool = var_38_int;
			func_2190();
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
			func_2190();
		}
	
	}

}


task task_5
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, int var_5_int)
	{
		if(var_5_int == 11)
			func_1037();
		int var_33_int;
		var_5_int = var_33_int;
		func_2190();
	}

}


task task_6
{
}


// @pe
void OnPlayerEnemy(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool)
{
	func_1860();
	func_1808();
}


// @pe
void OnPlayerStartWalking(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool)
{
	func_1849();
	func_1808();
}


// @pe
void OnPlayerStopWalking(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool)
{
	func_1829();
	func_1818();
}


// @pe
void OnLSHAnimationEnd(bool bCycled, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool)
{
	func_1839();
}


// @pe
void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, int var_5_int)
{
	int var_7_int;
	var_5_int = var_7_int;
	bool var_6_bool;
	func_1985(var_6_bool, var_7_int);
}


// @pe
void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, string var_5_string)
{
	if(var_5_string == "die")
		func_1787();
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
		func_1519(var_22_object);
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
	func_1681(var_6_bool);
	if(!var_6_bool) //@nz
		func_1787();
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
	func_1519(var_22_object);
	var_22_object = var_20_object;
	var_6_float = var_21_float;
	func_1602(var_19_bool, var_20_object, var_21_float);
}


// @pe
void OnPlayerLand(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool)
{
	func_2368();
	func_1818();
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
		func_1519(var_19_object);
		var_19_object = var_16_object;
		func_1388(var_15_float, var_16_object, var_17_float, 0);
		var_15_float = var_9_float;
		object var_88_object;
		func_1519(var_88_object);
		@ReportHit(var_88_object, 0, var_9_float, var_17_float, [0.0, 0.0, 0.0], [0.0, 0.0, 0.0]);
	}
}


void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, int var_5_int)
{
	object var_20_object; object var_21_object; object var_22_object; cvector var_23_cvector; string var_24_string; bool var_25_bool; cvector var_26_cvector; int var_27_int; bool var_28_bool; bool var_29_bool; int var_30_int; int var_31_int; bool var_32_bool; int var_33_int;
	if(var_5_int == 0) {
		@Inventory();
	} else {
			if(var_5_int == 1) {
				@GetMainOutdoorScene(var_20_object);
				@GetActiveScene(var_21_object);
				if(var_20_object == null) {
					@Trace("Can't find main outdoor oscene");
					return 28;
				}
				var_20_object->GetMap(var_22_object);
				if(var_22_object == null) {
					@Trace("Can't find map");
					return 28;
				}
				if(var_20_object == var_21_object) {
					@GetPosition(var_23_cvector);
				} else {
				var_21_object->GetName(var_24_string);
				var_20_object->GetLocator(("pt_gmap_" + var_24_string), var_25_bool, var_23_cvector, var_26_cvector);
				var_47_bool = !var_25_bool; //@nz
				if(var_47_bool == 0) goto Label_2236;
				@Trace("FIXME: No map locator for scene : " + var_24_string);
				var_23_cvector = [0.0, 0.0, 0.0];
			}
			if(var_5_int == 2) {
				@Diary();
			} else if(var_5_int == 3) {
				@ShowMessage();
			} else if(var_5_int == 4) {
				@ShowPlayerStats(var_27_int);
				if(var_27_int == 1)
					@ShowWindow("people.xml", true);
			}
			if(var_5_int == 5) {
				@IsFlashlightOn(var_28_bool);
				if(var_28_bool != 0) {
					@SwitchFlashlight(false);
					@PlaySound("flashlight_off");
				} else {
						bool var_65_bool;
						func_1687(var_65_bool);
						if(var_65_bool == 0) goto Label_2296;
						@SwitchFlashlight(true);
						@PlaySound("flashlight_on");
				}
				for(;;) {
					goto Label_2367;

				}

			Label_2296:
				@PlaySound("flashlight_nofuel");
			}
			if(var_5_int == 6) {
				int var_74_int;
				func_1693(var_74_int);
				if(var_74_int != 0)
					return 28;
				@IsVisirOn(var_29_bool);
				if(var_29_bool != 0) {
					@SwitchVisir(false);
					@SendWorldWndMessage(2);
				} else {
						@GetProperty("visir", var_30_int);
						if(var_30_int == 0) goto Label_2339;
						@GetProperty("vcharge", var_31_int);
						if(!(var_31_int >= 10)) goto Label_2339;
						@SwitchVisir(true);
						@SendWorldWndMessage(1);
				}
			Label_2339:
				for(;;) {
					goto Label_2367;

				}
			}
			if(var_5_int == 7) {
				@IsOverrideActive(var_32_bool);
				if(!var_32_bool) //@nz
					@ShowWindow("people.xml", true);
			} else if(var_5_int == 21) {
				@GetWeaponItem(var_33_int);
				if(!(var_33_int != -1)) goto Label_2367;
				@SelectItem(var_33_int, false, 0);
				@SetHandsItem(-1);
			}
			}
		Label_2236:
			var_43_float = GetByIndex(var_23_cvector, 0);
			var_44_float = GetByIndex(var_23_cvector, 2);
			var_22_object->SetMapParams(var_43_float, var_44_float);
			@ShowMap(var_22_object);
			var_22_object = null;
			var_21_object = null;
			var_20_object = null;
	}
Label_2367:
	for(;;) {
		return 28;

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
		func_1519(var_14_object);
		@BroadcastMessage("unholster", var_14_object, var_11_object);
		func_1673(var_9_string + "_unholster");
		@SetWeaponHolster(false);
		@PlayAnimation("unholster");
		@WaitForAnimEnd();
	} else {
		object var_25_object;
		func_1519(var_25_object);
		@BroadcastMessage("holster", var_25_object, var_11_object);
		func_1673(var_9_string + "_holster");
		@PlayAnimation("holster");
		@WaitForAnimEnd();
		@SetWeaponHolster(true);
	}
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_515(void)
{
}


void func_517(object var_15_object)
{
	int var_24_int; int var_25_int; string var_26_string; bool var_28_bool; bool var_29_bool;
	var_30_object = GlobalVars[1];
	object var_31_object;
	func_1554(var_31_object);
	var_31_object = var_30_object;
	GlobalVars[1] = var_30_object;
	var_34_object = GlobalVars[2];
	object var_35_object;
	func_1554(var_35_object);
	var_35_object = var_34_object;
	GlobalVars[2] = var_34_object;
	var_36_object = GlobalVars[3];
	object var_37_object;
	func_1554(var_37_object);
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
				if(!(var_25_int < var_24_int)) goto Label_586;
				var_15_object->get(var_26_string, var_25_int);
				@ApplyEffect(var_26_string);
				var_25_int += 1;
			}
		}
	}
Label_586:
	func_748();
	float var_27_float;
	@GetProperty("health", var_27_float);
	bool var_60_bool = false;
	if(var_27_float <= 0) {
		bool var_63_bool;
		func_1681(var_63_bool);
		if(!var_63_bool) //@nz
			var_60_bool = true;
	}
	if(var_60_bool != 0)
		func_1787();
	for(;;) {
		@IsWeaponHolstered(var_28_bool);
		var_83_bool = !var_28_bool; //@nz
		if(var_83_bool == 0) goto Label_622;
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


// @pe
void func_1543(int var_375_int, int var_376_int, int var_377_int, int var_378_int)
{
	if(var_376_int < var_377_int) {
		var_377_int = var_375_int;
		return 0;
	}
	if(var_376_int > var_378_int) {
		var_378_int = var_375_int;
		return 0;
	}
	var_376_int = var_375_int;
}


void func_1037(void)
{
	bool var_8_bool;
	func_1911(var_8_bool, "revolver_ammo", 2);
	if(var_8_bool != 0) {
		string var_29_string;
		func_1068(var_29_string);
		@PlaySound(var_29_string + "_reload");
		@PlayAnimation("reload");
		@WaitForAnimEnd();
	}
}


void func_1554(object var_31_object)
{
	object var_33_object;
	@CreateObjectSet(var_33_object);
	var_33_object = var_31_object;
}
EMIT "Stack[-1] = 0";


void func_1560(object var_575_object)
{
	object var_577_object;
	@CreateObjectVector(var_577_object);
	var_577_object = var_575_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1566(float var_110_float, cvector var_111_cvector, cvector var_112_cvector)
{
	var_113_float = GetByIndex(var_111_cvector, 0);
	var_114_float = GetByIndex(var_112_cvector, 0);
	var_116_float = GetByIndex(var_111_cvector, 2);
	var_117_float = GetByIndex(var_112_cvector, 2);
	var_110_float = (var_113_float * var_114_float) + (var_116_float * var_117_float);
}


// @pe
void func_1575(float var_119_float, cvector var_120_cvector)
{
	var_121_float = GetByIndex(var_120_cvector, 0);
	var_122_float = GetByIndex(var_120_cvector, 0);
	var_124_float = GetByIndex(var_120_cvector, 2);
	var_125_float = GetByIndex(var_120_cvector, 2);
	var_119_float = sqrt((var_121_float * var_122_float) + (var_124_float * var_125_float));
}


void func_1068(string var_29_string)
{
	var_29_string = "gun";
}


void func_1070(float var_564_float)
{
	var_564_float = 1.3;
}


void func_1072(int var_588_int)
{
	var_588_int = 1;
}


// @pe
void func_1585(float var_107_float, cvector var_108_cvector, cvector var_109_cvector)
{
	cvector var_111_cvector;
	var_108_cvector = var_111_cvector;
	cvector var_112_cvector;
	var_109_cvector = var_112_cvector;
	float var_110_float;
	func_1566(var_110_float, var_111_cvector, var_112_cvector);
	float var_119_float; cvector var_120_cvector;
	var_108_cvector = var_120_cvector;
	func_1575(var_119_float, var_120_cvector);
	float var_128_float; cvector var_129_cvector;
	var_109_cvector = var_129_cvector;
	func_1575(var_128_float, var_129_cvector);
	var_107_float = var_110_float / (var_119_float * var_128_float);
}


void func_50(string var_312_string)
{
	var_312_string = "scalpel";
}


void func_1074(int var_590_int)
{
	var_590_int = 2;
}


// @pe
void func_52(float var_330_float)
{
	var_330_float = 0.6;
}


void func_1076(int var_561_int)
{
	var_561_int = 2;
}


void func_1078(bool var_0_bool)
{
	string var_478_string; string var_479_string; int var_480_int; bool var_481_bool; float var_482_float; cvector var_484_cvector; object var_485_object; int var_486_int; cvector var_487_cvector; object var_488_object; int var_489_int; cvector var_490_cvector; float var_491_float; float var_492_float; float var_493_float; object var_494_object; float var_495_float; object var_496_object; object var_497_object; int var_498_int; int var_499_int; object var_500_object; bool var_501_bool;
	var_0_bool = false;
	
Label_1080:
	bool var_502_bool;
	func_969(var_502_bool);
	if(!var_502_bool) { //@nz
	} else {
		@GetCurrentWeapon(var_478_string);
		var_479_string = "attack1";
		@SetAttackState(true);
		func_1008();
		@PlayAnimation(var_479_string + "_phase1");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 48;
		@TriggerWeapon("shot");
		string var_557_string;
		func_1068(var_557_string);
		@PlaySound(var_557_string + "_shot");
		int var_560_int;
		int var_561_int;
		func_1076(var_561_int);
		var_561_int = var_560_int;
		func_1958(var_560_int);
		func_1302();
		@SetAttackState(false);
		int var_563_int;
		func_1004(var_563_int);
		var_563_int = var_480_int;
		float var_564_float;
		func_1070(var_564_float);
		var_482_float = var_564_float / var_480_int;
		float var_568_float;
		func_1006(var_568_float);
		float var_572_float;
		func_1947(var_572_float);
		@GetDirection(var_484_cvector);
		object var_575_object;
		func_1560(var_575_object);
		var_575_object = var_485_object;
		var_486_int = 0;

		for(;;) {
			if(var_486_int < var_480_int) {
				@RandVecCone3D(var_487_cvector, var_484_cvector, (1.0 / (1.5 + (((1.0 / var_568_float) - 1.5) * var_572_float))));
				@GetVictimMaterialExact(var_488_object, var_489_int, var_490_cvector, var_487_cvector, 10000);
				if(var_488_object != 0) {
					var_482_float = var_491_float;
					if(var_489_int == 4)
						var_491_float *= 3.0;
					float var_584_float; object var_585_object; float var_586_float; int var_587_int;
					var_488_object = var_585_object;
					var_491_float = var_586_float;
					int var_588_int;
					func_1072(var_588_int);
					var_588_int = var_587_int;
					func_1388(var_584_float, var_585_object, var_586_float, var_587_int);
					var_584_float = var_492_float;
					if(var_492_float != 0) {
						var_485_object->add(var_488_object);
						int var_590_int;
						func_1074(var_590_int);
						@ReportHit(var_488_object, var_590_int, var_492_float, var_491_float, var_490_cvector, var_487_cvector);
						bool var_591_bool;
						func_1303(var_591_bool);
						if(var_591_bool != 0) {
							var_488_object->GetProperty("health", var_493_float);
							if(!var_493_float) { //@nz
								@GetVictimMaterialExact(var_494_object, var_489_int, var_490_cvector, var_487_cvector, 10000, var_488_object);
								bool var_595_bool = false;
								if(var_494_object != 0) {
									if(var_494_object != var_488_object)
										var_595_bool = true;
								}
								if(var_595_bool != 0) {
									float var_598_float; object var_599_object; int var_601_int;
									var_494_object = var_599_object;
									int var_603_int;
									func_1072(var_603_int);
									var_603_int = var_601_int;
									func_1388(var_598_float, var_599_object, (var_491_float * 0.75), var_601_int);
									var_598_float = var_495_float;
									if(var_495_float != 0) {
										var_485_object->add(var_494_object);
										int var_605_int;
										func_1074(var_605_int);
										@ReportHit(var_494_object, var_605_int, var_495_float, var_491_float, var_490_cvector, var_487_cvector);
									}
								}
								var_494_object = null;
							}
						}
					} else {
					if(!(var_489_int != -1)) goto Label_1252;
					var_609_bool = !false; //@nz
					if(var_609_bool == 0) goto Label_1252;
					@GetScene(var_496_object);
					@AddActorByType(var_497_object, "scripted", var_496_object, var_490_cvector, [0.0, 0.0, 1.0], "richochet.xml");
					var_497_object->SetScriptProperty("Material", var_489_int);
					var_481_bool = true;
					var_497_object = null;
					var_496_object = null;
			}
				var_485_object->size(var_498_int);
				var_499_int = 0;

				for(;;) {
					if(var_499_int < var_498_int) {
						var_485_object->get(var_500_object, var_499_int);
						@ReportAttack(var_500_object);
						var_615_object = GlobalVars[2];
						var_615_object->in(var_501_bool, var_500_object);
						if(!var_501_bool) { //@nz
							var_617_object = GlobalVars[3];
							var_617_object->add(var_500_object);
							@BroadcastPlayerDamage(var_500_object, false);
						} else {
						@BroadcastPlayerDamage(var_500_object, true);
					}
					@PlayAnimation(var_479_string + "_phase2");
					@WaitForAnimEnd();
					if(var_0_bool != 0)
						return 48;
					func_1021();
					var_485_object = null;
					bool var_639_bool;
					func_1305(var_639_bool);
					if(var_639_bool == 1) goto Label_1080;
					}
					var_500_object = null;
					var_499_int += 1;
				}
				}
			}
		Label_1252:
			var_488_object = null;
			var_486_int += 1;
		}
	}
	
}


void func_55(float var_334_float)
{
	var_334_float = 0.5;
}


void func_57(int var_368_int)
{
	var_368_int = 2;
}


void func_59(int var_353_int)
{
	var_353_int = 0;
}


void func_61(int var_362_int)
{
	var_362_int = 1;
}


// @pe
void func_63(float var_328_float, bool var_329_bool)
{
	bool var_331_bool;
	var_329_bool = var_331_bool;
	func_52(var_331_bool);
	float var_332_float; float var_333_float;
	float var_334_float;
	func_55(var_334_float);
	var_334_float = var_333_float;
	func_1976(var_332_float, var_333_float);
	float var_330_float;
	var_328_float = var_330_float * var_332_float;
}


// @pe
void func_1602(bool var_19_bool, object var_20_object, float var_21_float)
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
		func_1654(var_29_float);
		bool var_33_bool; object var_34_object; float var_36_float;
		var_20_object = var_34_object;
		var_21_float = var_36_float;
		func_1366(var_33_bool, var_34_object, "reputation", var_36_float, (float)0, (float)1);
		var_19_bool = true;
		return 0;

	}
	
	var_19_bool = false;
}


void func_77(void)
{
	int var_368_int;
	func_57(var_368_int);
	int var_367_int;
	var_368_int = var_367_int;
	func_1958(var_367_int);
}


void func_85(bool var_0_bool)
{
	bool var_262_bool; string var_263_string; float var_264_float; cvector var_265_cvector; object var_266_object; int var_267_int; cvector var_268_cvector; bool var_269_bool; cvector var_270_cvector; cvector var_271_cvector; string var_272_string; int var_273_int; cvector var_274_cvector; cvector var_275_cvector; float var_276_float; float var_277_float; int var_278_int; bool var_279_bool;
	var_0_bool = false;
	int var_260_int = 0;
	
	for(;;) {
		var_260_int += 1;
		string var_281_string;
		func_323(var_281_string);
		@HasAnimation(var_262_bool, (((var_281_string + "attack") + var_260_int) + "_phase1"));
		if(!var_262_bool) { //@nz
			break;
		Label_109:
			@GetCurrentWeapon(var_263_string);
			@GetAttackDistance(var_264_float);
			@GetDirection(var_265_cvector);
			var_269_bool = false;
			bool var_289_bool;
			func_321(var_289_bool);
			if(var_289_bool != 0) {
				@GetVictimMaterialExact(var_266_object, var_267_int, var_268_cvector, var_265_cvector, var_264_float);
				bool var_290_bool = false;
				bool var_291_bool = false;
				bool var_292_bool = false;
				if(var_266_object != null) {
					bool var_294_bool; object var_295_object;
					var_266_object = var_295_object;
					func_1354(var_294_bool, var_295_object, "health");
					if(var_294_bool != 0)
						var_292_bool = true;
				}
				if(var_292_bool != 0) {
					bool var_297_bool; object var_298_object;
					var_266_object = var_298_object;
					func_1461(var_297_bool, var_298_object);
					if(!var_297_bool) //@nz
						var_291_bool = true;
				}
				if(var_291_bool != 0) {
					if(var_267_int == 4)
						var_290_bool = true;
				}
				if(var_290_bool != 0) {
					var_306_bool = IsFuncExist(var_266_object, "GetDirection", 1);
					if(var_306_bool != 0) {
						@GetDirection(var_270_cvector);
						var_266_object->GetDirection(var_271_cvector);
						float var_307_float; cvector var_308_cvector; cvector var_309_cvector;
						var_270_cvector = var_308_cvector;
						var_271_cvector = var_309_cvector;
						func_1585(var_307_float, var_308_cvector, var_309_cvector);
						var_269_bool = var_307_float >= 0.49999997;
					}
				}
			}
			if(var_269_bool != 0) {
				var_272_string = "battack";
				string var_312_string;
				func_50(var_312_string);
				@PlaySound(var_312_string + "_back");
				break;
			Label_207:
				@SetAttackState(false);
				@GetAttackDistance(var_264_float);
				@GetDirection(var_265_cvector);
				@GetVictimMaterialExact(var_266_object, var_267_int, var_268_cvector, var_265_cvector, var_264_float);
				if(var_266_object != null) {
					var_323_bool = IsFuncExist(var_266_object, "GetDirection", 1);
					if(var_323_bool != 0) {
						@GetDirection(var_274_cvector);
						var_266_object->GetDirection(var_275_cvector);
						float var_324_float; cvector var_325_cvector; cvector var_326_cvector;
						var_274_cvector = var_325_cvector;
						var_275_cvector = var_326_cvector;
						func_1585(var_324_float, var_325_cvector, var_326_cvector);
						var_269_bool = var_324_float >= 0.49999997;
					} else {
								var_269_bool = false;
			}
							@irand(var_273_int, var_260_int);
							string var_389_string;
							func_323(var_389_string);
							var_272_string = (var_389_string + "attack") + (var_273_int + 1);
							string var_394_string;
							func_50(var_394_string);
							@PlaySound(var_394_string + (var_273_int + 1));
		}
			}
			float var_328_float; bool var_329_bool;
			var_269_bool = var_329_bool;
			func_63(var_328_float, var_329_bool);
			var_328_float = var_276_float;
			if(var_267_int == 4)
				var_276_float *= 3.0;
			float var_349_float; object var_350_object; float var_351_float; int var_352_int;
			var_266_object = var_350_object;
			int var_353_int;
			func_59(var_353_int);
			var_353_int = var_352_int;
			func_1388(var_349_float, var_350_object, var_351_float, var_352_int);
			var_349_float = var_277_float;
			if(var_277_float != 0) {
				@irand(var_278_int, 2);
				string var_356_string;
				func_50(var_356_string);
				@PlaySound((var_356_string + "_hit") + (var_278_int + 1));
				@ReportAttack(var_266_object);
				int var_362_int;
				func_61(var_362_int);
				@ReportHit(var_266_object, var_362_int, var_277_float, var_351_float, var_268_cvector, var_265_cvector);
				var_363_object = GlobalVars[2];
				var_363_object->in(var_279_bool, var_266_object);
				if(!var_279_bool) { //@nz
					var_365_object = GlobalVars[3];
					var_365_object->add(var_266_object);
					@BroadcastPlayerDamage(var_266_object, false);
				} else {
					@BroadcastPlayerDamage(var_266_object, true);

				}
			}
			func_77();
		}
		@PlayAnimation(var_272_string + "_phase2");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 40;
		var_266_object = null;
		bool var_385_bool;
		func_325(var_385_bool);
		if(var_385_bool == 1) goto Label_109;
		return 40;

	}
	var_288_bool = !(var_260_int + -1); //@nz
	if(var_288_bool == 0) goto Label_109;
	return 40;
	@SetAttackState(true);
	@PlayAnimation(var_272_string + "_phase1");
	@WaitForAnimEnd();
	if(var_0_bool == 0) goto Label_207;
}


void func_1637(float var_79_float)
{
	object var_81_object;
	@CreateFloatVector(var_81_object);
	var_81_object->add(var_79_float);
	if(var_79_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_81_object);
}
EMIT "Stack[-1] = 0";


void func_1654(float var_29_float)
{
	object var_31_object;
	@CreateFloatVector(var_31_object);
	var_31_object->add(var_29_float);
	@SendWorldWndMessage(16, var_31_object);
}
EMIT "Stack[-1] = 0";


void func_1664(int var_72_int)
{
	float var_74_float;
	@GetGameTime(var_74_float);
	var_72_int = 1 + (var_74_float / 24);
}


void func_1673(string var_17_string)
{
	bool var_20_bool;
	@IsExistingSound(var_20_bool, var_17_string);
	if(var_20_bool != 0)
		@PlaySound(var_17_string);
}


void func_1681(bool var_63_bool)
{
	bool var_65_bool;
	@GetVariable("god_mode", var_65_bool);
	var_65_bool = var_63_bool;
}


void func_1687(bool var_65_bool)
{
	int var_67_int;
	@GetItemCountOfType(var_67_int, "kerosene");
	var_67_int = var_65_bool;
}


void func_1693(int var_74_int)
{
	int var_76_int;
	@GetVariable("branch", var_76_int);
	var_76_int = var_74_int;
}


// @pe
void func_1699(bool var_57_bool, int var_58_int)
{
	if(var_58_int == 10) {
		func_1871();
		var_57_bool = true;
		return 0;
	EMIT "GOTO 0x6be";
	}
	if(var_58_int == 11) {
		func_1879();
		var_57_bool = true;
		return 0;
	EMIT "GOTO 0x6be";
	}
	if(var_58_int == 12) {
		func_1875();
		var_57_bool = true;
		return 0;
	}
	var_57_bool = false;
}


void func_1728(void)
{
	bool var_69_bool; int var_70_int; bool var_73_bool; int var_74_int; string var_76_string;
	@GetGroundMaterial(var_69_bool, var_70_int);
	if(!var_69_bool) //@nz
		var_70_int = -1;
	string var_78_string; int var_79_int;
	var_70_int = var_79_int;
	func_1487(var_78_string, var_79_int);
	string var_71_string;
	var_78_string = var_71_string;
	int var_72_int = 0;
	
	for(;;) {
		@IsExistingSound(var_73_bool, (("step_" + var_71_string) + (var_72_int + 1)));
		if(!var_73_bool) { //@nz
			break;
		Label_1759:
			if(var_72_int == 1) {
				var_74_int = 0;
			} else {
					@irand(var_74_int, var_72_int);
					var_109_string = GlobalVars[0];
					if(!((("step_" + var_71_string) + (var_74_int + 1)) != var_109_string)) goto Label_1775;
			}
			for(;;) {
				@PlaySound(("step_" + var_71_string) + (var_74_int + 1));
				var_104_string = GlobalVars[0];
				var_76_string = var_104_string;
				GlobalVars[0] = var_104_string;

			}

		Label_1775:
		}
		var_72_int += 1;
	}
	var_96_bool = !var_72_int; //@nz
	if(var_96_bool == 0) goto Label_1759;
	var_97_string = GlobalVars[0];
	GlobalVars[0] = "";
}


// @pe
void func_748(void)
{
	func_2368();
}


void func_752(void)
{
	@KillTimer(0);
}


void func_756(bool var_0_bool)
{
	bool var_52_bool; float var_53_float; cvector var_54_cvector; object var_55_object; int var_56_int; cvector var_57_cvector; bool var_58_bool; cvector var_59_cvector; cvector var_60_cvector; string var_61_string; int var_62_int; cvector var_63_cvector; cvector var_64_cvector; float var_65_float; float var_66_float; int var_67_int; bool var_68_bool;
	var_0_bool = false;
	int var_50_int = 0;
	
	for(;;) {
		var_50_int += 1;
		@HasAnimation(var_52_bool, (("attack" + var_50_int) + "_phase1"));
		if(!var_52_bool) { //@nz
			break;
		Label_776:
			@GetAttackDistance(var_53_float);
			var_53_float *= 2.1875;
			@GetDirection(var_54_cvector);
			@GetVictimMaterialExact(var_55_object, var_56_int, var_57_cvector, var_54_cvector, var_53_float);
			if(var_55_object != null) {
				bool var_78_bool; object var_79_object;
				var_55_object = var_79_object;
				func_1354(var_78_bool, var_79_object, "healable");
				if(var_78_bool != 0) {
					@PlayAnimation("heal_phase1");
					@WaitForAnimEnd();
					if(var_0_bool != 0)
						return 38;
					bool var_89_bool; object var_90_object;
					var_55_object = var_90_object;
					func_1466(var_89_bool, var_90_object);
					if(var_89_bool != 0)
						@Trigger(var_55_object, "heal");
					@PlayAnimation("heal_phase2");
					@WaitForAnimEnd();
					if(var_0_bool != 0)
						return 38;
					break;
				}
			}
			var_106_bool = IsFuncExist(var_55_object, "GetDirection", 1);
			if(var_106_bool != 0) {
				@GetDirection(var_59_cvector);
				var_55_object->GetDirection(var_60_cvector);
				float var_107_float; cvector var_108_cvector; cvector var_109_cvector;
				var_59_cvector = var_108_cvector;
				var_60_cvector = var_109_cvector;
				func_1585(var_107_float, var_108_cvector, var_109_cvector);
				var_58_bool = var_107_float >= 0.49999997;
			} else {
								var_58_bool = false;
		}
		}
		if(var_58_bool != 0) {
			var_61_string = "battack";
			@PlaySound("punch_back");
			break;
		Label_862:
			@GetVictimMaterialExact(var_55_object, var_56_int, var_57_cvector, var_54_cvector, var_53_float);
			if(var_55_object != null) {
				var_140_bool = IsFuncExist(var_55_object, "GetDirection", 1);
				if(var_140_bool != 0) {
					@GetDirection(var_63_cvector);
					var_55_object->GetDirection(var_64_cvector);
					float var_141_float; cvector var_142_cvector; cvector var_143_cvector;
					var_63_cvector = var_142_cvector;
					var_64_cvector = var_143_cvector;
					func_1585(var_141_float, var_142_cvector, var_143_cvector);
					var_58_bool = var_141_float >= 0.49999997;
				} else {
							var_58_bool = false;
		}
						@irand(var_62_int, var_50_int);
						var_61_string = "attack" + (var_62_int + 1);
						@PlaySound("punch" + (var_62_int + 1));

			}
			float var_145_float; bool var_146_bool;
			var_58_bool = var_146_bool;
			func_957(var_145_float, var_146_bool);
			var_145_float = var_65_float;
			if(var_56_int == 4)
				var_65_float *= 3.0;
			float var_151_float; object var_152_object; float var_153_float;
			var_55_object = var_152_object;
			func_1388(var_151_float, var_152_object, var_153_float, 0);
			var_151_float = var_66_float;
			if(var_66_float != 0) {
				@irand(var_67_int, 2);
				@PlaySound("punch_hit" + (var_67_int + 1));
				@ReportAttack(var_55_object);
				@ReportHit(var_55_object, 0, var_66_float, var_153_float, var_57_cvector, var_54_cvector);
				var_222_object = GlobalVars[2];
				var_222_object->in(var_68_bool, var_55_object);
				if(!var_68_bool) { //@nz
					var_224_object = GlobalVars[3];
					var_224_object->add(var_55_object);
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
	if(var_75_bool == 0) goto Label_776;
	return 38;
	bool var_101_bool;
	func_964(var_101_bool);
	if(var_101_bool == 1) goto Label_776;
	return 38;
	@PlayAnimation(var_61_string + "_phase1");
	@WaitForAnimEnd();
	if(var_0_bool == 0) goto Label_862;
}


void func_1787(void)
{
	int var_72_int;
	func_1664(var_72_int);
	if(var_72_int == 12)
		@UnlockAchievement("ACHIEVEMENT_MIGHT");
	object var_70_object;
	@GetMainOutdoorScene(var_70_object);
	object var_71_object;
	@AddBlankActor(var_71_object, var_70_object, "player_death", "play_death_klara.bin");
	@SetDeathState();
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1808(void)
{
	bool var_11_bool;
	@KillTimer(11, var_11_bool);
	if(var_11_bool != 0)
		@ModNoise(-3);
}


void func_1302(void)
{
}


void func_1303(bool var_591_bool)
{
	var_591_bool = false;
}


void func_1305(bool var_639_bool)
{
	bool var_641_bool;
	@IsShooting(var_641_bool);
	var_641_bool = var_639_bool;
}


// @pe
void func_1818(void)
{
	func_1808();
	@SetTimer(11, 0.15);
	@ModNoise(3);
}


// @pe
void func_1310(void)
{
	func_1334();
	bool var_13_bool;
	func_1911(var_13_bool, "revolver_ammo", 2);
	if(var_13_bool != 0) {
		string var_34_string;
		func_1332(var_34_string);
		@PlaySound(var_34_string + "_reload");
		@PlayAnimation("reload");
		@WaitForAnimEnd();
	}
}


void func_1829(void)
{
	bool var_6_bool;
	@KillTimer(10, var_6_bool);
	if(var_6_bool != 0)
		@ModNoise(-2);
}


void func_1839(void)
{
	bool var_6_bool;
	@KillTimer(12, var_6_bool);
	if(var_6_bool != 0)
		@ModNoise(-1);
}


void func_1332(string var_34_string)
{
	var_34_string = "gun";
}


void func_1334(void)
{
}


// @pe
void func_1335(string var_49_string, int var_50_int)
{
	if(var_50_int == 2) {
		var_49_string = "fire";
		return 0;
	EMIT "GOTO 0x543";
	}
	if(var_50_int == 1) {
		var_49_string = "bullet";
		return 0;
	}
	var_49_string = "phys";
}


// @pe
void func_1849(void)
{
	func_1829();
	@SetTimer(10, 0.35);
	@ModNoise(2);
}


void func_2368(void)
{
	float var_55_float;
	@rand(var_55_float, 10, 30);
	@SetTimer(0, var_55_float);
}


void func_321(bool var_289_bool)
{
	var_289_bool = false;
}


void func_323(string var_281_string)
{
	var_281_string = "";
}


// @pe
void func_1860(void)
{
	func_1839();
	@SetTimer(12, 0.6);
	@ModNoise(1);
}


void func_325(bool var_385_bool)
{
	bool var_387_bool;
	@IsShooting(var_387_bool);
	var_387_bool = var_385_bool;
}


void func_1349(bool var_75_bool, object var_76_object)
{
	bool var_78_bool;
	@IsPlayerActor(var_76_object, var_78_bool);
	var_78_bool = var_75_bool;
}


void func_2377(void)
{
	object var_548_object;
	@GetScene(var_548_object);
	object var_550_object;
	func_1519(var_550_object);
	@BroadcastMessage("player_shot", var_550_object, var_548_object);
}
EMIT "Stack[-1] = 0";


void func_1354(bool var_34_bool, object var_35_object, string var_36_string)
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


void func_330(bool var_0_bool, bool var_1_bool)
{
	bool var_415_bool; bool var_416_bool; bool var_417_bool; int var_418_int; int var_419_int;
	var_0_bool = false;
	var_1_bool = false;
	int var_411_int;
	@GetWeaponItem(var_411_int);
	@PlayAnimation("use_begin");
	@WaitForAnimEnd();
	if(var_0_bool != 0)
		return 18;
	int var_412_int;
	@GetWeaponItem(var_412_int);
	object var_413_object;
	@GetPlayerSelectedObject(var_413_object);
	bool var_414_bool = false;
	if(var_412_int == var_411_int) {
		bool var_423_bool; object var_424_object;
		var_413_object = var_424_object;
		func_1354(var_423_bool, var_424_object, "lp");
		if(var_423_bool != 0) {
			var_413_object->GetProperty("lp", var_415_bool);
			if(var_415_bool != 0) {
				var_413_object->GetProperty("locked", var_416_bool);
				if(var_416_bool != 0) {
					var_414_bool = true;
					var_413_object->SetProperty("locked", false);
					var_418_int = 0;
					@GetWeaponProperty(var_417_bool, "uses", var_418_int);
					if(var_418_int <= 1) {
						@GetWeaponItem(var_419_int);
						@SelectItem(var_419_int, false, 0);
						@RemoveItem(var_419_int, 1, 0);
						var_1_bool = true;
					} else {
							@SetWeaponProperty(var_417_bool, "uses", (var_418_int - 1));
					}
				}
			}
		}
	}
	if(var_414_bool != 0)
		@PlayAnimation("use_success");
	else
		@PlayAnimation("use_fail");

	@WaitForAnimEnd();
	if(var_0_bool != 0)
		return 18;
	if(var_1_bool != 0) {
		@PlayAnimation("holster");
		@WaitForAnimEnd();
		@SetHandsItem(-1);
		if(var_0_bool != 0)
			return 18;
		var_1_bool = false;
		@PlayAnimation("unholster");
		@WaitForAnimEnd();
	}
	
}
EMIT "Stack[-7] = 0";


// @pe
void func_1871(void)
{
	func_1728();
}


// @pe
void func_1875(void)
{
	func_1728();
}


void func_1366(bool var_33_bool, object var_34_object, string var_35_string, float var_36_float, float var_37_float, float var_38_float)
{
	object var_42_object;
	var_34_object = var_42_object;
	string var_43_string;
	var_35_string = var_43_string;
	bool var_41_bool;
	func_1354(var_41_bool, var_42_object, var_43_string);
	if(!var_41_bool) //@nz
		var_33_bool = false;
	float var_40_float;
	var_34_object->GetProperty(var_35_string, var_40_float);
	float var_51_float; float var_53_float; float var_54_float;
	var_37_float = var_53_float;
	var_38_float = var_54_float;
	func_1532(var_51_float, (var_40_float + var_36_float), var_53_float, var_54_float);
	var_34_object->SetProperty(var_35_string, var_51_float);
	var_33_bool = true;
}


// @pe
void func_1879(void)
{
	func_1728();
	func_1808();
}


void func_1388(float var_15_float, object var_16_object, float var_17_float, int var_18_int)
{
	int var_28_int; int var_30_int;
	object var_35_object;
	var_16_object = var_35_object;
	bool var_34_bool;
	func_1354(var_34_bool, var_35_object, "health");
	if(!var_34_bool) //@nz
		var_15_float = 0.0;
	bool var_44_bool; object var_45_object;
	func_1354(var_44_bool, var_45_object, "armor");
	if(!var_44_bool) //@nz
		var_28_int = 0;
	else
		var_45_object->GetProperty("armor", var_28_int);
	string var_49_string; int var_50_int;
	var_18_int = var_50_int;
	func_1335(var_49_string, var_50_int);
	string var_29_string = "armor_" + var_49_string;
	bool var_55_bool; object var_56_object; string var_57_string;
	var_16_object = var_56_object;
	func_1354(var_55_bool, var_56_object, var_57_string);
	if(!var_55_bool) //@nz
		var_30_int = 0;
	else
		var_16_object->GetProperty(var_57_string, var_30_int);

	float var_59_float;
	func_1525(var_59_float, ((var_28_int + var_30_int) / 100.0), (float)1);
	float var_31_float;
	var_59_float = var_31_float;
	float var_32_float;
	var_16_object->GetProperty("health", var_32_float);
	float var_33_float = var_17_float * (1 - var_31_float);
	float var_69_float;
	func_1532(var_69_float, (var_32_float - var_33_float), (float)0, (float)1);
	var_16_object->SetProperty("health", var_69_float);
	bool var_75_bool; object var_76_object;
	var_16_object = var_76_object;
	func_1349(var_75_bool, var_76_object);
	if(var_75_bool != 0) {
		float var_79_float = -var_33_float;
		func_1637(var_79_float);
	}
	var_33_float = var_15_float;
	
}


void func_1911(bool var_8_bool, string var_9_string, int var_10_int)
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


void func_1947(float var_335_float)
{
	bool var_338_bool; int var_339_int;
	@GetWeaponProperty(var_338_bool, "durability", var_339_int);
	if(var_338_bool != 0)
		var_335_float = var_339_int / 100.0;
	else
		var_335_float = 1.0;
	
}


void func_1958(int var_367_int)
{
	bool var_371_bool; int var_372_int;
	@GetWeaponProperty(var_371_bool, "durability", var_372_int);
	if(!var_371_bool) //@nz
		var_372_int = 100;
	int var_375_int;
	func_1543(var_375_int, (var_372_int - var_367_int), 0, 100);
	var_375_int = var_372_int;
	@SetWeaponProperty(var_371_bool, "durability", var_372_int);
}


void func_1461(bool var_297_bool, object var_298_object)
{
	bool var_300_bool;
	var_298_object->IsDead(var_300_bool);
	var_300_bool = var_297_bool;
}


// @pe
void func_1976(float var_332_float, float var_333_float)
{
	float var_335_float;
	func_1947(var_335_float);
	var_332_float = var_333_float + (var_335_float * (1 - var_333_float));
}


void func_1466(bool var_89_bool, object var_90_object)
{
	if(var_90_object == null) {
		var_89_bool = false;
		return 4;
	}
	object var_93_object;
	@GetScene(var_93_object);
	if(var_93_object == null) {
		var_89_bool = false;
		return 4;
	}
	object var_94_object;
	var_90_object->GetScene(var_94_object);
	if(var_93_object != var_94_object) {
		var_89_bool = false;
		return 4;
	}
	var_89_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_957(float var_145_float, bool var_146_bool)
{
	if(var_146_bool != 0)
		var_145_float = 0.4;
	else
		var_145_float = 0.2;
	
}


void func_1985(bool var_6_bool, int var_7_int)
{
	int var_19_int; int var_20_int; int var_21_int; int var_22_int; bool var_23_bool; bool var_24_bool; int var_25_int; object var_26_object; int var_27_int; bool var_28_bool; bool var_29_bool;
	int var_30_int;
	func_1693(var_30_int);
	if(var_30_int == 0) {
		var_19_int = 0;
		@GetVariable("birdMaskAchievement", var_19_int);
		if(var_19_int == 0) {
			@GetItemCount(var_20_int, 1);
			@GetInvItemByName(var_21_int, "bird_mask");
			@GetInvItemByName(var_22_int, "bird_balahon");
			var_23_bool = false;
			var_24_bool = false;
			var_25_int = 0;

			for(;;) {
				if(var_25_int < var_20_int) {
					@GetItem(var_26_object, var_25_int, 1);
					var_26_object->GetItemID(var_27_int);
					if(var_27_int == var_21_int) {
						@IsItemSelected(var_28_bool, var_25_int, 1);
						if(var_28_bool != 0)
							var_23_bool = true;
					} else {
					if(!(var_27_int == var_22_int)) goto Label_2035;
					@IsItemSelected(var_29_bool, var_25_int, 1);
					if(var_29_bool == 0) goto Label_2035;
				}
				bool var_51_bool = false;
				if(var_23_bool != 0) {
					if(true != 0)
						var_51_bool = true;
				}
				if(var_51_bool != 0) {
					@SetVariable("birdMaskAchievement", 1);
					@UnlockAchievement("ACHIEVEMENT_THEY");
				}
		}
	}
		bool var_57_bool; int var_58_int;
		var_7_int = var_58_int;
		func_1699(var_57_bool, var_58_int);
		var_57_bool = var_6_bool;
		}
	Label_2035:
		var_26_object = null;
		var_25_int += 1;
	}
	
}


void func_964(bool var_101_bool)
{
	bool var_103_bool;
	@IsShooting(var_103_bool);
	var_103_bool = var_101_bool;
}


void func_969(bool var_502_bool)
{
	bool var_505_bool; bool var_506_bool;
	@GetWeaponProperty(var_505_bool, "ammo", var_506_bool);
	bool var_508_bool = true;
	var_509_bool = !var_505_bool; //@nz
	if(var_509_bool != 1) {
		var_510_bool = !var_506_bool; //@nz
		if(var_510_bool != 1)
			var_508_bool = false;
	}
	if(var_508_bool != 0) {
		bool var_511_bool;
		func_1911(var_511_bool, "revolver_ammo", 2);
		if(!var_511_bool) { //@nz
			string var_533_string;
			func_1068(var_533_string);
			@PlaySound(var_533_string + "_noammo");
			@PlayAnimation("noammo");
			@WaitForAnimEnd();
			var_502_bool = false;
		}
	}
	var_502_bool = true;
}


// @pe
void func_1487(string var_78_string, int var_79_int)
{
	if(var_79_int == 1) {
		var_78_string = "wood";
		return 0;
	EMIT "GOTO 0x5ed";
	}
	if(var_79_int == 2) {
		var_78_string = "metal";
		return 0;
	EMIT "GOTO 0x5ed";
	}
	if(var_79_int == 3) {
		var_78_string = "ground";
		return 0;
	EMIT "GOTO 0x5ed";
	}
	if(var_79_int == 4) {
		var_78_string = "water";
		return 0;
	EMIT "GOTO 0x5ed";
	}
	if(var_79_int == 5) {
		var_78_string = "carpet";
		return 0;
	}
	var_78_string = "stone";
}


// @pe
void func_468(string var_27_string)
{
	if(var_27_string == "empty") {
		TaskCall(4);
		func_756(var_30_bool);
		TaskReturn();
	} else if(var_27_string == "scalpel") {
			TaskCall(1);
			func_85(var_239_bool);
			TaskReturn();
	}

	
	if(var_27_string == "lockpick") {
		TaskCall(2);
		func_330(var_400_bool, var_401_bool);
		TaskReturn();
	} else if(var_27_string == "gun") {
		TaskCall(5);
		func_1078(var_453_bool);
		TaskReturn();
	}
}


void func_1004(int var_563_int)
{
	var_563_int = 3;
}


void func_1006(float var_568_float)
{
	var_568_float = 0.02617994;
}


void func_1519(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_1008(void)
{
	bool var_541_bool; int var_542_int;
	@GetWeaponProperty(var_541_bool, "ammo", var_542_int);
	@SetWeaponProperty(var_541_bool, "ammo", (var_542_int - 1));
	func_2377();
}


// @pe
void func_1525(float var_59_float, float var_60_float, float var_61_float)
{
	if(var_60_float < var_61_float)
		var_60_float = var_59_float;
	else
		var_61_float = var_59_float;
	
}


// @pe
void func_505(string var_10_string)
{
	if(var_10_string == "gun") {
		TaskCall(6);
		func_1310();
		TaskReturn();
	}
}


// @pe
void func_1532(float var_69_float, float var_70_float, float var_71_float, float var_72_float)
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


void func_1021(void)
{
	bool var_626_bool; bool var_627_bool;
	@GetWeaponProperty(var_626_bool, "ammo", var_627_bool);
	bool var_629_bool = true;
	var_630_bool = !var_626_bool; //@nz
	if(var_630_bool != 1) {
		var_631_bool = !var_627_bool; //@nz
		if(var_631_bool != 1)
			var_629_bool = false;
	}
	if(var_629_bool != 0)
		func_1037();
}


