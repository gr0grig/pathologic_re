// @GLOBALS: 0:string:,1:object:,2:object:,3:object:

task task_0
{
}


task task_1
{
	void OnPlayerStopAltShooting(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		if(var_1_bool != 0)
			@StopAnimation();
	}

	// @pe
	void OnPlayerStartShooting(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		func_112(var_11_bool);
		bool var_19_bool;
		TaskCall(2);
		func_181(var_20_bool, var_19_bool);
		TaskReturn();
		if(var_20_bool != 0)
			var_0_bool = true;
		else
			func_102(var_11_bool);
	
	}

	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, float var_2_float, int var_3_int, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		if(var_12_bool == 10) {
			var_0_bool = true;
			if(var_1_bool != 0)
				@StopAnimation();
		} else {
			int var_16_int;
			var_12_bool = var_16_int;
			func_3584();
		}
	
	}

	// @pe
	void OnHit(bool var_0_bool, bool var_1_bool, float fDamage, object var_3_object, int var_4_int, float var_5_float, float var_6_float, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool)
	{
		if(var_1_bool != 0)
			@PlayAnimation("hitblock");
	}

	void OnDispose(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		if(var_1_bool != 0) {
			float var_14_float = -var_2_float;
			func_2862("armor_phys", var_14_float);
			@SetProperty("blocking", false);
		}
	}

}


task task_2
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, int var_4_int, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		if(var_12_bool == 10) {
			var_0_bool = true;
		} else {
			int var_15_int;
			var_12_bool = var_15_int;
			func_3584();
		}
	
	}

}


task task_3
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, int var_5_int, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		if(var_12_bool == 10) {
			var_0_bool = true;
		} else {
			int var_15_int;
			var_12_bool = var_15_int;
			func_3584();
		}
	
	}

}


task task_4
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, int var_6_int, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		if(var_12_bool == 10) {
			var_0_bool = true;
		} else {
			int var_15_int;
			var_12_bool = var_15_int;
			func_3584();
		}
	
	}

}


task task_5
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, int var_7_int, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		if(var_12_bool == 10) {
			var_0_bool = true;
		} else {
			int var_15_int;
			var_12_bool = var_15_int;
			func_3584();
		}
	
	}

}


task task_6
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, int var_8_int, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		if(var_12_bool == 10) {
			var_0_bool = true;
		} else {
			int var_15_int;
			var_12_bool = var_15_int;
			func_3584();
		}
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, int var_9_int, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		if(var_12_bool == 11)
			func_1699();
		int var_40_int;
		var_12_bool = var_40_int;
		func_3584();
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, int var_10_int, bool var_11_bool, bool var_12_bool)
	{
		if(var_12_bool == 11)
			func_2065();
		int var_40_int;
		var_12_bool = var_40_int;
		func_3584();
	}

}


task task_11
{
}


task task_12
{
	void OnDispose(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		bool var_12_bool = false;
		if(!var_0_bool) { //@nz
			if(var_1_bool != 0)
				var_12_bool = true;
		}
		if(var_12_bool != 0)
			@SetHandsItem(-1);
	}

}


maintask task_13
{
	void init(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		int var_13_int;
		@GetVariable("player_init", var_13_int);
		if(!var_13_int) { //@nz
			@Diary();
			@SetVariable("player_init", 1);
		}
		object var_18_object;
		object var_19_object;
		func_3153(var_19_object);
		var_19_object = var_18_object;
		func_2592(var_18_object);
	}

	void OnPlayerStartShooting(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, string var_13_string, bool var_14_bool, bool var_15_bool, string var_16_string, bool var_17_bool)
	{
		bool var_59_bool; string var_60_string; bool var_61_bool;
		@IsWeaponHolstered(var_59_bool);
		if(!var_59_bool) { //@nz
			func_2827();
			@GetCurrentWeapon(var_60_string);
			string var_63_string;
			var_60_string = var_63_string;
			func_2489(var_63_string);
			func_2823();
			@IsAltShooting(var_61_bool);
			if(var_61_bool != 0)
				func_2727();
		}
	}

	void OnPlayerStartAltShooting(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		bool var_15_bool; string var_16_string; bool var_17_bool;
		@IsWeaponHolstered(var_15_bool);
		if(!var_15_bool) { //@nz
			func_2827();
			@GetCurrentWeapon(var_16_string);
			string var_20_string;
			var_16_string = var_20_string;
			func_2581(var_20_string);
			func_2823();
			@IsShooting(var_17_bool);
			if(var_17_bool != 0)
				func_2702();
		}
	}

	// @pe
	void OnPlayerHolsterWeapon(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		func_2827();
		TaskCall(0);
		func_0();
		TaskReturn();
		func_2823();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		int var_18_int; bool var_19_bool; int var_20_int;
		int var_22_int;
		var_12_int = var_22_int;
		bool var_21_bool;
		func_3447(var_21_bool, var_22_int);
		if(var_21_bool != 0)
			return 8;
		func_2827();
		bool var_17_bool;
		@IsWeaponHolstered(var_17_bool);
		if(!var_17_bool) { //@nz
			var_18_int = 0;

			for(;;) {
				@HasAnimation(var_19_bool, ("idle" + (var_18_int + 1)));
				if(!var_19_bool) { //@nz
				} else {
					var_18_int += 1;
				}
				if(var_18_int != 0) {
					@irand(var_20_int, var_18_int);
					@PlayAnimation("idle" + (var_20_int + 1));
					@WaitForAnimEnd();
				}
		}
			func_2823();
			return 8;

		}
	}

	void OnAction(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		string var_14_string;
		if(var_12_int == 11) {
			@GetCurrentWeapon(var_14_string);
			string var_17_string;
			var_14_string = var_17_string;
			func_2553(var_17_string);
		} else {
			int var_63_int;
			var_12_int = var_63_int;
			func_3584();
		}
	
	}

}


// @pe
void OnPlayerEnemy(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
{
	func_3322();
	func_3270();
}


// @pe
void OnPlayerStartWalking(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
{
	func_3311();
	func_3270();
}


// @pe
void OnPlayerStopWalking(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
{
	func_3291();
	func_3280();
}


// @pe
void OnLSHAnimationEnd(bool bCycled, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
{
	func_3301();
}


// @pe
void OnTimer(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, int var_12_int)
{
	int var_14_int;
	var_12_int = var_14_int;
	bool var_13_bool;
	func_3447(var_13_bool, var_14_int);
}


// @pe
void OnTrigger(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, string var_12_string)
{
	if(var_12_string == "die")
		func_3258();
}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object, string var_13_string)
{
	float var_17_float; object var_18_object;
	if(var_13_string == "health") {
		@GetProperty("health", var_17_float);
		if(var_17_float < 0.001)
			@SignalDeath(var_12_object);
	} else if(var_13_string == "reputation") {
		@GetScene(var_18_object);
		object var_29_object;
		func_3001(var_29_object);
		@BroadcastMessage("prc", var_29_object, var_18_object);
		var_18_object = null;
	}
	object var_19_object;
	@CreateStringVector(var_19_object);
	var_19_object->add(var_13_string);
	@SendWorldWndMessage(10, var_19_object);
	
}
EMIT "Stack[-1] = 0";


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object)
{
	bool var_13_bool;
	func_3147(var_13_bool);
	if(!var_13_bool) //@nz
		func_3258();
}


void OnReputationChange(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object, float var_13_float, bool var_14_bool)
{
	if(!var_12_object) //@nz
		return 2;
	var_18_object = GlobalVars[2];
	bool var_16_bool;
	var_18_object->in(var_16_bool, var_12_object);
	if(var_16_bool != 0) {
		@Trace("Reputation is not changed for enemy: " + var_12_object);
		return 2;
	}
	if(!var_14_bool) { //@nz
		var_23_object = GlobalVars[1];
		var_23_object->in(var_16_bool, var_12_object);
		if(var_16_bool != 0)
			return 2;
	}
	var_25_object = GlobalVars[1];
	var_25_object->add(var_12_object);
	bool var_26_bool; object var_27_object; float var_28_float;
	object var_29_object;
	func_3001(var_29_object);
	var_29_object = var_27_object;
	var_13_float = var_28_float;
	func_3084(var_26_bool, var_27_object, var_28_float);
}


// @pe
void OnPlayerLand(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
{
	func_3746();
	func_3280();
}


// @pe
void OnAttacked(bool var_0_bool, bool var_1_bool, float fDamage, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object)
{
}


void OnFallDamage(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, float var_12_float)
{
	float var_15_float; float var_16_float;
	if(var_12_float > 770.0) {
		@Trace(var_12_float);
		var_15_float = (var_12_float - 770.0) * 0.0034999999;
		float var_22_float; object var_23_object; float var_24_float;
		object var_26_object;
		func_3001(var_26_object);
		var_26_object = var_23_object;
		func_2891(var_22_float, var_23_object, var_24_float, 0);
		var_22_float = var_16_float;
		object var_91_object;
		func_3001(var_91_object);
		@ReportHit(var_91_object, 0, var_16_float, var_24_float, [0.0, 0.0, 0.0], [0.0, 0.0, 0.0]);
	}
}


void OnAction(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, int var_12_int)
{
	object var_26_object; object var_27_object; object var_28_object; cvector var_29_cvector; string var_30_string; bool var_31_bool; cvector var_32_cvector; int var_33_int; bool var_34_bool; bool var_35_bool; int var_36_int; int var_37_int; bool var_38_bool;
	if(var_12_int == 0) {
		@Inventory();
	} else {
			if(var_12_int == 1) {
				@GetMainOutdoorScene(var_26_object);
				@GetActiveScene(var_27_object);
				if(var_26_object == null) {
					@Trace("Can't find main outdoor oscene");
					return 26;
				}
				var_26_object->GetMap(var_28_object);
				if(var_28_object == null) {
					@Trace("Can't find map");
					return 26;
				}
				if(var_26_object == var_27_object) {
					@GetPosition(var_29_cvector);
				} else {
				var_27_object->GetName(var_30_string);
				var_26_object->GetLocator(("pt_gmap_" + var_30_string), var_31_bool, var_29_cvector, var_32_cvector);
				var_52_bool = !var_31_bool; //@nz
				if(var_52_bool == 0) goto Label_3630;
				@Trace("FIXME: No map locator for scene : " + var_30_string);
				var_29_cvector = [0.0, 0.0, 0.0];
			}
			if(var_12_int == 2) {
				@Diary();
			} else if(var_12_int == 3) {
				@ShowMessage();
			} else if(var_12_int == 4) {
				@ShowPlayerStats(var_33_int);
				if(var_33_int == 1)
					@ShowWindow("people.xml", true);
			}
			if(var_12_int == 5) {
				@IsFlashlightOn(var_34_bool);
				if(var_34_bool != 0) {
					@SwitchFlashlight(false);
					@PlaySound("flashlight_off");
				} else {
						bool var_70_bool;
						func_3158(var_70_bool);
						if(var_70_bool == 0) goto Label_3690;
						@SwitchFlashlight(true);
						@PlaySound("flashlight_on");
				}
				for(;;) {
					goto Label_3745;

				}

			Label_3690:
				@PlaySound("flashlight_nofuel");
			}
			if(var_12_int == 6) {
				int var_79_int;
				func_3164(var_79_int);
				if(var_79_int != 0)
					return 26;
				@IsVisirOn(var_35_bool);
				if(var_35_bool != 0) {
					@SwitchVisir(false);
					@SendWorldWndMessage(2);
				} else {
						@GetProperty("visir", var_36_int);
						if(var_36_int == 0) goto Label_3733;
						@GetProperty("vcharge", var_37_int);
						if(!(var_37_int >= 10)) goto Label_3733;
						@SwitchVisir(true);
						@SendWorldWndMessage(1);
				}
			Label_3733:
				for(;;) {
					goto Label_3745;

				}
			}
			if(!(var_12_int == 7)) goto Label_3745;
			@IsOverrideActive(var_38_bool);
			var_97_bool = !var_38_bool; //@nz
			if(var_97_bool == 0) goto Label_3745;
			@ShowWindow("people.xml", true);
			}
		Label_3630:
			var_48_float = GetByIndex(var_29_cvector, 0);
			var_49_float = GetByIndex(var_29_cvector, 2);
			var_28_object->SetMapParams(var_48_float, var_49_float);
			@ShowMap(var_28_object);
			var_28_object = null;
			var_27_object = null;
			var_26_object = null;
	}
Label_3745:
	for(;;) {
		return 26;

	}
	
}


void func_2049(void)
{
	bool var_1068_bool; bool var_1069_bool;
	@GetWeaponProperty(var_1068_bool, "ammo", var_1069_bool);
	bool var_1071_bool = true;
	var_1072_bool = !var_1068_bool; //@nz
	if(var_1072_bool != 1) {
		var_1073_bool = !var_1069_bool; //@nz
		if(var_1073_bool != 1)
			var_1071_bool = false;
	}
	if(var_1071_bool != 0)
		func_2065();
}


void func_0(void)
{
	string var_16_string;
	@GetCurrentWeapon(var_16_string);
	bool var_17_bool;
	@IsWeaponHolstered(var_17_bool);
	object var_18_object;
	@GetScene(var_18_object);
	if(var_17_bool != 0) {
		object var_21_object;
		func_3001(var_21_object);
		@BroadcastMessage("unholster", var_21_object, var_18_object);
		func_3139(var_16_string + "_unholster");
		@SetWeaponHolster(false);
		@PlayAnimation("unholster");
		@WaitForAnimEnd();
	} else {
		object var_32_object;
		func_3001(var_32_object);
		@BroadcastMessage("holster", var_32_object, var_18_object);
		func_3139(var_16_string + "_holster");
		@PlayAnimation("holster");
		@WaitForAnimEnd();
		@SetWeaponHolster(true);
	}
	
}
EMIT "Stack[-1] = 0";


void func_1031(void)
{
	int var_558_int;
	func_1011(var_558_int);
	int var_557_int;
	var_558_int = var_557_int;
	func_3420(var_557_int);
}


// @pe
void func_3084(bool var_26_bool, object var_27_object, float var_28_float)
{
	if(!var_27_object) { //@nz
		var_26_bool = false;
		return 0;
	}
	if(var_28_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_28_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_36_float;
		var_28_float = var_36_float;
		func_3129(var_36_float);
		bool var_40_bool; object var_41_object; float var_43_float;
		var_27_object = var_41_object;
		var_28_float = var_43_float;
		func_2869(var_40_bool, var_41_object, "reputation", var_43_float, (float)0, (float)1);
		var_26_bool = true;
		return 0;

	}
	
	var_26_bool = false;
}


void func_1039(bool var_0_bool)
{
	bool var_464_bool; string var_465_string; float var_466_float; cvector var_467_cvector; object var_468_object; int var_469_int; cvector var_470_cvector; bool var_471_bool; cvector var_472_cvector; cvector var_473_cvector; string var_474_string; int var_475_int; cvector var_476_cvector; cvector var_477_cvector; float var_478_float; float var_479_float; int var_480_int; bool var_481_bool;
	var_0_bool = false;
	int var_462_int = 0;
	
	for(;;) {
		var_462_int += 1;
		string var_483_string;
		func_1275(var_483_string);
		@HasAnimation(var_464_bool, (((var_483_string + "attack") + var_462_int) + "_phase1"));
		if(!var_464_bool) { //@nz
			break;
		Label_1063:
			@GetCurrentWeapon(var_465_string);
			@GetAttackDistance(var_466_float);
			@GetDirection(var_467_cvector);
			var_471_bool = false;
			bool var_491_bool;
			func_998(var_491_bool);
			if(var_491_bool != 0) {
				@GetVictimMaterialExact(var_468_object, var_469_int, var_470_cvector, var_467_cvector, var_466_float);
				bool var_492_bool = false;
				bool var_493_bool = false;
				bool var_494_bool = false;
				if(var_468_object != null) {
					bool var_496_bool; object var_497_object;
					var_468_object = var_497_object;
					func_2850(var_496_bool, var_497_object, "health");
					if(var_496_bool != 0)
						var_494_bool = true;
				}
				if(var_494_bool != 0) {
					bool var_499_bool; object var_500_object;
					var_468_object = var_500_object;
					func_2964(var_499_bool, var_500_object);
					if(!var_499_bool) //@nz
						var_493_bool = true;
				}
				if(var_493_bool != 0) {
					if(var_469_int == 4)
						var_492_bool = true;
				}
				if(var_492_bool != 0) {
					var_506_bool = IsFuncExist(var_468_object, "GetDirection", 1);
					if(var_506_bool != 0) {
						@GetDirection(var_472_cvector);
						var_468_object->GetDirection(var_473_cvector);
						float var_507_float; cvector var_508_cvector; cvector var_509_cvector;
						var_472_cvector = var_508_cvector;
						var_473_cvector = var_509_cvector;
						func_3067(var_507_float, var_508_cvector, var_509_cvector);
						var_471_bool = var_507_float >= 0.49999997;
					}
				}
			}
			if(var_471_bool != 0) {
				var_474_string = "battack";
				string var_512_string;
				func_1000(var_512_string);
				@PlaySound(var_512_string + "_back");
				break;
			Label_1161:
				@SetAttackState(false);
				@GetAttackDistance(var_466_float);
				@GetDirection(var_467_cvector);
				@GetVictimMaterialExact(var_468_object, var_469_int, var_470_cvector, var_467_cvector, var_466_float);
				if(var_468_object != null) {
					var_523_bool = IsFuncExist(var_468_object, "GetDirection", 1);
					if(var_523_bool != 0) {
						@GetDirection(var_476_cvector);
						var_468_object->GetDirection(var_477_cvector);
						float var_524_float; cvector var_525_cvector; cvector var_526_cvector;
						var_476_cvector = var_525_cvector;
						var_477_cvector = var_526_cvector;
						func_3067(var_524_float, var_525_cvector, var_526_cvector);
						var_471_bool = var_524_float >= 0.49999997;
					} else {
								var_471_bool = false;
			}
							@irand(var_475_int, var_462_int);
							string var_566_string;
							func_1275(var_566_string);
							var_474_string = (var_566_string + "attack") + (var_475_int + 1);
							string var_571_string;
							func_1000(var_571_string);
							@PlaySound(var_571_string + (var_475_int + 1));
		}
			}
			float var_528_float; bool var_529_bool;
			var_471_bool = var_529_bool;
			func_1017(var_528_float, var_529_bool);
			var_528_float = var_478_float;
			if(var_469_int == 4)
				var_478_float *= 3.0;
			float var_539_float; object var_540_object; float var_541_float; int var_542_int;
			var_468_object = var_540_object;
			int var_543_int;
			func_1013(var_543_int);
			var_543_int = var_542_int;
			func_2891(var_539_float, var_540_object, var_541_float, var_542_int);
			var_539_float = var_479_float;
			if(var_479_float != 0) {
				@irand(var_480_int, 2);
				string var_546_string;
				func_1000(var_546_string);
				@PlaySound((var_546_string + "_hit") + (var_480_int + 1));
				@ReportAttack(var_468_object);
				int var_552_int;
				func_1015(var_552_int);
				@ReportHit(var_468_object, var_552_int, var_479_float, var_541_float, var_470_cvector, var_467_cvector);
				var_553_object = GlobalVars[2];
				var_553_object->in(var_481_bool, var_468_object);
				if(!var_481_bool) { //@nz
					var_555_object = GlobalVars[3];
					var_555_object->add(var_468_object);
					@BroadcastPlayerDamage(var_468_object, false);
				} else {
					@BroadcastPlayerDamage(var_468_object, true);

				}
			}
			func_1031();
		}
		@PlayAnimation(var_474_string + "_phase2");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 40;
		var_468_object = null;
		bool var_562_bool;
		func_1277(var_562_bool);
		if(var_562_bool == 1) goto Label_1063;
		return 40;

	}
	var_490_bool = !(var_462_int + -1); //@nz
	if(var_490_bool == 0) goto Label_1063;
	return 40;
	@SetAttackState(true);
	@PlayAnimation(var_474_string + "_phase1");
	@WaitForAnimEnd();
	if(var_0_bool == 0) goto Label_1161;
}


void func_2065(void)
{
	bool var_1074_bool;
	func_3373(var_1074_bool, "samopal_ammo", 2);
	if(var_1074_bool != 0) {
		string var_1077_string;
		func_2096(var_1077_string);
		@PlaySound(var_1077_string + "_reload");
		@PlayAnimation("reload");
		@WaitForAnimEnd();
	}
}


// @pe
void func_2581(string var_20_string)
{
	if(var_20_string == "empty") {
		TaskCall(1);
		func_50(var_24_bool, var_25_bool, var_26_float, 0.25);
		TaskReturn();
	}
}


void func_2592(object var_18_object)
{
	int var_30_int; int var_31_int; string var_32_string; bool var_34_bool; bool var_35_bool;
	var_36_object = GlobalVars[1];
	object var_37_object;
	func_3036(var_37_object);
	var_37_object = var_36_object;
	GlobalVars[1] = var_36_object;
	var_40_object = GlobalVars[2];
	object var_41_object;
	func_3036(var_41_object);
	var_41_object = var_40_object;
	GlobalVars[2] = var_40_object;
	var_42_object = GlobalVars[3];
	object var_43_object;
	func_3036(var_43_object);
	var_43_object = var_42_object;
	GlobalVars[3] = var_42_object;
	bool var_29_bool;
	@HasProperty("effects", var_29_bool);
	if(!var_29_bool) { //@nz
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
		if(var_18_object != 0) {
			var_18_object->size(var_30_int);
			var_31_int = 0;

			for(;;) {
				if(!(var_31_int < var_30_int)) goto Label_2661;
				var_18_object->get(var_32_string, var_31_int);
				@ApplyEffect(var_32_string);
				var_31_int += 1;
			}
		}
	}
Label_2661:
	func_2823();
	float var_33_float;
	@GetProperty("health", var_33_float);
	bool var_66_bool = false;
	if(var_33_float <= 0) {
		bool var_69_bool;
		func_3147(var_69_bool);
		if(!var_69_bool) //@nz
			var_66_bool = true;
	}
	if(var_66_bool != 0)
		func_3258();
	for(;;) {
		@IsWeaponHolstered(var_34_bool);
		var_80_bool = !var_34_bool; //@nz
		if(var_80_bool == 0) goto Label_2697;
		@IsWalking(var_35_bool);
		if(var_35_bool != 0) {
			@PlayAnimation("walk");
			@WaitForAnimEnd();
		} else {
		@Sleep(0.1);
		}
	}
	
}
EMIT "Return(); Pop(14)";


void func_3119(float var_86_float)
{
	object var_88_object;
	@CreateFloatVector(var_88_object);
	var_88_object->add(var_86_float);
	@SendWorldWndMessage(15, var_88_object);
}
EMIT "Stack[-1] = 0";


void func_2096(string var_983_string)
{
	var_983_string = "samopal";
}


void func_2098(float var_1008_float)
{
	var_1008_float = 1.8;
}


// @pe
void func_50(bool var_0_bool, bool var_1_bool, float var_2_float, float var_23_float)
{
	var_0_bool = false;
	var_1_bool = false;
	var_2_float = var_23_float;
	
Label_54:
	@PlayAnimation("block");
	@WaitForAnimEnd();
	if(var_0_bool != 0)
		return 0;
	func_102(var_23_float);
	var_1_bool = true;
	
	for(;;) {
		bool var_36_bool = false;
		bool var_37_bool;
		func_122(var_37_bool);
		if(var_37_bool != 0) {
			if(!var_0_bool) //@nz
				var_36_bool = true;
		}
		if(var_36_bool == 0) goto Label_82;
		@PlayAnimation("walkblock");
		@WaitForAnimEnd();
	}
	
Label_82:
	var_1_bool = false;
	func_112(var_23_float);
	if(var_0_bool != 0)
		return 0;
	@PlayAnimation("unblock");
	@WaitForAnimEnd();
	if(var_0_bool != 0)
		return 0;
	bool var_49_bool;
	func_122(var_49_bool);
	if(var_49_bool == 1) goto Label_54;
}


void func_2100(int var_1030_int)
{
	var_1030_int = 1;
}


void func_2102(int var_1032_int)
{
	var_1032_int = 2;
}


void func_2104(int var_1005_int)
{
	var_1005_int = 2;
}


void func_3129(float var_36_float)
{
	object var_38_object;
	@CreateFloatVector(var_38_object);
	var_38_object->add(var_36_float);
	@SendWorldWndMessage(16, var_38_object);
}
EMIT "Stack[-1] = 0";


void func_2106(bool var_0_bool)
{
	string var_946_string; string var_947_string; int var_948_int; bool var_949_bool; float var_950_float; cvector var_952_cvector; object var_953_object; int var_954_int; cvector var_955_cvector; object var_956_object; int var_957_int; cvector var_958_cvector; float var_959_float; float var_960_float; float var_961_float; object var_962_object; float var_963_float; object var_964_object; object var_965_object; int var_966_int; int var_967_int; object var_968_object; bool var_969_bool;
	var_0_bool = false;
	
Label_2108:
	bool var_970_bool;
	func_1997(var_970_bool);
	if(!var_970_bool) { //@nz
	} else {
		@GetCurrentWeapon(var_946_string);
		var_947_string = "attack1";
		@SetAttackState(true);
		func_2036();
		@PlayAnimation(var_947_string + "_phase1");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 48;
		@TriggerWeapon("shot");
		string var_1001_string;
		func_2096(var_1001_string);
		@PlaySound(var_1001_string + "_shot");
		int var_1004_int;
		int var_1005_int;
		func_2104(var_1005_int);
		var_1005_int = var_1004_int;
		func_3420(var_1004_int);
		func_2330();
		@SetAttackState(false);
		int var_1007_int;
		func_2032(var_1007_int);
		var_1007_int = var_948_int;
		float var_1008_float;
		func_2098(var_1008_float);
		var_950_float = var_1008_float / var_948_int;
		float var_1012_float;
		func_2034(var_1012_float);
		float var_1016_float;
		func_3409(var_1016_float);
		@GetDirection(var_952_cvector);
		object var_1019_object;
		func_3042(var_1019_object);
		var_1019_object = var_953_object;
		var_954_int = 0;

		for(;;) {
			if(var_954_int < var_948_int) {
				@RandVecCone3D(var_955_cvector, var_952_cvector, (1.0 / (1.5 + (((1.0 / var_1012_float) - 1.5) * var_1016_float))));
				@GetVictimMaterialExact(var_956_object, var_957_int, var_958_cvector, var_955_cvector, 10000);
				if(var_956_object != 0) {
					var_950_float = var_959_float;
					if(var_957_int == 4)
						var_959_float *= 3.0;
					float var_1026_float; object var_1027_object; float var_1028_float; int var_1029_int;
					var_956_object = var_1027_object;
					var_959_float = var_1028_float;
					int var_1030_int;
					func_2100(var_1030_int);
					var_1030_int = var_1029_int;
					func_2891(var_1026_float, var_1027_object, var_1028_float, var_1029_int);
					var_1026_float = var_960_float;
					if(var_960_float != 0) {
						var_953_object->add(var_956_object);
						int var_1032_int;
						func_2102(var_1032_int);
						@ReportHit(var_956_object, var_1032_int, var_960_float, var_959_float, var_958_cvector, var_955_cvector);
						bool var_1033_bool;
						func_2331(var_1033_bool);
						if(var_1033_bool != 0) {
							var_956_object->GetProperty("health", var_961_float);
							if(!var_961_float) { //@nz
								@GetVictimMaterialExact(var_962_object, var_957_int, var_958_cvector, var_955_cvector, 10000, var_956_object);
								bool var_1037_bool = false;
								if(var_962_object != 0) {
									if(var_962_object != var_956_object)
										var_1037_bool = true;
								}
								if(var_1037_bool != 0) {
									float var_1040_float; object var_1041_object; int var_1043_int;
									var_962_object = var_1041_object;
									int var_1045_int;
									func_2100(var_1045_int);
									var_1045_int = var_1043_int;
									func_2891(var_1040_float, var_1041_object, (var_959_float * 0.75), var_1043_int);
									var_1040_float = var_963_float;
									if(var_963_float != 0) {
										var_953_object->add(var_962_object);
										int var_1047_int;
										func_2102(var_1047_int);
										@ReportHit(var_962_object, var_1047_int, var_963_float, var_959_float, var_958_cvector, var_955_cvector);
									}
								}
								var_962_object = null;
							}
						}
					} else {
					if(!(var_957_int != -1)) goto Label_2280;
					var_1051_bool = !false; //@nz
					if(var_1051_bool == 0) goto Label_2280;
					@GetScene(var_964_object);
					@AddActorByType(var_965_object, "scripted", var_964_object, var_958_cvector, [0.0, 0.0, 1.0], "richochet.xml");
					var_965_object->SetScriptProperty("Material", var_957_int);
					var_949_bool = true;
					var_965_object = null;
					var_964_object = null;
			}
				var_953_object->size(var_966_int);
				var_967_int = 0;

				for(;;) {
					if(var_967_int < var_966_int) {
						var_953_object->get(var_968_object, var_967_int);
						@ReportAttack(var_968_object);
						var_1057_object = GlobalVars[2];
						var_1057_object->in(var_969_bool, var_968_object);
						if(!var_969_bool) { //@nz
							var_1059_object = GlobalVars[3];
							var_1059_object->add(var_968_object);
							@BroadcastPlayerDamage(var_968_object, false);
						} else {
						@BroadcastPlayerDamage(var_968_object, true);
					}
					@PlayAnimation(var_947_string + "_phase2");
					@WaitForAnimEnd();
					if(var_0_bool != 0)
						return 48;
					func_2049();
					var_953_object = null;
					bool var_1081_bool;
					func_2333(var_1081_bool);
					if(var_1081_bool == 1) goto Label_2108;
					}
					var_968_object = null;
					var_967_int += 1;
				}
				}
			}
		Label_2280:
			var_956_object = null;
			var_954_int += 1;
		}
	}
	
}


void func_1600(void)
{
}


void func_1601(bool var_751_bool)
{
	bool var_753_bool;
	@IsShooting(var_753_bool);
	var_753_bool = var_751_bool;
}


void func_3139(string var_24_string)
{
	bool var_27_bool;
	@IsExistingSound(var_27_bool, var_24_string);
	if(var_27_bool != 0)
		@PlaySound(var_24_string);
}


// @pe
void func_1606(void)
{
	func_1630();
	bool var_20_bool;
	func_3373(var_20_bool, "rifle_ammo", 1);
	if(var_20_bool != 0) {
		string var_41_string;
		func_1628(var_41_string);
		@PlaySound(var_41_string + "_reload");
		@PlayAnimation("reload");
		@WaitForAnimEnd();
	}
}


void func_3147(bool var_69_bool)
{
	bool var_71_bool;
	@GetVariable("god_mode", var_71_bool);
	var_71_bool = var_69_bool;
}


void func_3153(object var_19_object)
{
	object var_21_object = null;
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_3158(bool var_70_bool)
{
	int var_72_int;
	@GetItemCountOfType(var_72_int, "kerosene");
	var_72_int = var_70_bool;
}


void func_1628(string var_41_string)
{
	var_41_string = "rifle";
}


void func_3164(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	var_81_int = var_79_int;
}


void func_1630(void)
{
}


void func_1631(bool var_805_bool)
{
	bool var_808_bool; bool var_809_bool;
	@GetWeaponProperty(var_808_bool, "ammo", var_809_bool);
	bool var_811_bool = true;
	var_812_bool = !var_808_bool; //@nz
	if(var_812_bool != 1) {
		var_813_bool = !var_809_bool; //@nz
		if(var_813_bool != 1)
			var_811_bool = false;
	}
	if(var_811_bool != 0) {
		bool var_814_bool;
		func_3373(var_814_bool, "revolver_ammo", 6);
		if(!var_814_bool) { //@nz
			string var_818_string;
			func_1730(var_818_string);
			@PlaySound(var_818_string + "_noammo");
			@PlayAnimation("noammo");
			@WaitForAnimEnd();
			var_805_bool = false;
		}
	}
	var_805_bool = true;
}


// @pe
void func_3170(bool var_15_bool, int var_16_int)
{
	if(var_16_int == 10) {
		func_3333();
		var_15_bool = true;
		return 0;
	EMIT "GOTO 0xc7d";
	}
	if(var_16_int == 11) {
		func_3341();
		var_15_bool = true;
		return 0;
	EMIT "GOTO 0xc7d";
	}
	if(var_16_int == 12) {
		func_3337();
		var_15_bool = true;
		return 0;
	}
	var_15_bool = false;
}


void func_102(float var_2_float)
{
	func_2862("armor_phys", var_2_float);
	@SetProperty("blocking", true);
}


void func_112(float var_2_float)
{
	@SetProperty("blocking", false);
	float var_45_float = -var_2_float;
	func_2862("armor_phys", var_45_float);
}


void func_122(bool var_37_bool)
{
	bool var_39_bool;
	@IsAltShooting(var_39_bool);
	var_39_bool = var_37_bool;
}


void func_3199(void)
{
	bool var_27_bool; int var_28_int; bool var_31_bool; int var_32_int; string var_34_string;
	@GetGroundMaterial(var_27_bool, var_28_int);
	if(!var_27_bool) //@nz
		var_28_int = -1;
	string var_36_string; int var_37_int;
	var_28_int = var_37_int;
	func_2969(var_36_string, var_37_int);
	string var_29_string;
	var_36_string = var_29_string;
	int var_30_int = 0;
	
	for(;;) {
		@IsExistingSound(var_31_bool, (("step_" + var_29_string) + (var_30_int + 1)));
		if(!var_31_bool) { //@nz
			break;
		Label_3230:
			if(var_30_int == 1) {
				var_32_int = 0;
			} else {
					@irand(var_32_int, var_30_int);
					var_67_string = GlobalVars[0];
					if(!((("step_" + var_29_string) + (var_32_int + 1)) != var_67_string)) goto Label_3246;
			}
			for(;;) {
				@PlaySound(("step_" + var_29_string) + (var_32_int + 1));
				var_62_string = GlobalVars[0];
				var_34_string = var_62_string;
				GlobalVars[0] = var_62_string;

			}

		Label_3246:
		}
		var_30_int += 1;
	}
	var_54_bool = !var_30_int; //@nz
	if(var_54_bool == 0) goto Label_3230;
	var_55_string = GlobalVars[0];
	GlobalVars[0] = "";
}


void func_1666(int var_842_int)
{
	var_842_int = 1;
}


void func_1668(float var_847_float)
{
	var_847_float = 0.02617994;
}


void func_1670(void)
{
	bool var_826_bool; int var_827_int;
	@GetWeaponProperty(var_826_bool, "ammo", var_827_int);
	@SetWeaponProperty(var_826_bool, "ammo", (var_827_int - 1));
	func_3755();
}


void func_1683(void)
{
	bool var_903_bool; bool var_904_bool;
	@GetWeaponProperty(var_903_bool, "ammo", var_904_bool);
	bool var_906_bool = true;
	var_907_bool = !var_903_bool; //@nz
	if(var_907_bool != 1) {
		var_908_bool = !var_904_bool; //@nz
		if(var_908_bool != 1)
			var_906_bool = false;
	}
	if(var_906_bool != 0)
		func_1699();
}


void func_3746(void)
{
	float var_61_float;
	@rand(var_61_float, 10, 30);
	@SetTimer(0, var_61_float);
}


void func_1699(void)
{
	bool var_909_bool;
	func_3373(var_909_bool, "revolver_ammo", 6);
	if(var_909_bool != 0) {
		string var_912_string;
		func_1730(var_912_string);
		@PlaySound(var_912_string + "_reload");
		@PlayAnimation("reload");
		@WaitForAnimEnd();
	}
}


void func_3755(void)
{
	object var_668_object;
	@GetScene(var_668_object);
	object var_670_object;
	func_3001(var_670_object);
	@BroadcastMessage("player_shot", var_670_object, var_668_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_690(float var_182_float, bool var_183_bool)
{
	bool var_185_bool;
	var_183_bool = var_185_bool;
	float var_184_float;
	func_454(var_184_float, var_185_bool);
	var_184_float = var_182_float;
}


// @pe
void func_181(bool var_0_bool, bool var_19_bool)
{
	func_201(var_19_bool);
	var_19_bool = var_0_bool;
}


void func_186(string var_120_string)
{
	var_120_string = "punch";
}


void func_3258(void)
{
	object var_76_object;
	@GetMainOutdoorScene(var_76_object);
	object var_77_object;
	@AddBlankActor(var_77_object, var_76_object, "player_death", "play_death_burah.bin");
	@SetDeathState();
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_188(float var_138_float, bool var_139_bool)
{
	if(var_139_bool != 0)
		var_138_float = 0.2;
	else
		var_138_float = 0.1;
	
}


void func_1730(string var_818_string)
{
	var_818_string = "revolver";
}


void func_195(int var_148_int)
{
	var_148_int = 0;
}


void func_1732(float var_843_float)
{
	var_843_float = 0.8;
}


void func_708(void)
{
}


void func_1734(int var_865_int)
{
	var_865_int = 1;
}


void func_3270(void)
{
	bool var_18_bool;
	@KillTimer(11, var_18_bool);
	if(var_18_bool != 0)
		@ModNoise(-3);
}


void func_1736(int var_867_int)
{
	var_867_int = 2;
}


void func_197(int var_213_int)
{
	var_213_int = 0;
}


void func_709(bool var_116_bool)
{
	var_116_bool = false;
}


void func_199(string var_62_string)
{
	var_62_string = "b";
}


void func_711(string var_108_string)
{
	var_108_string = "";
}


void func_201(bool var_0_bool)
{
	bool var_43_bool; string var_44_string; float var_45_float; cvector var_46_cvector; object var_47_object; int var_48_int; cvector var_49_cvector; bool var_50_bool; cvector var_51_cvector; cvector var_52_cvector; string var_53_string; int var_54_int; cvector var_55_cvector; cvector var_56_cvector; float var_57_float; float var_58_float; int var_59_int; bool var_60_bool;
	var_0_bool = false;
	int var_41_int = 0;
	
	for(;;) {
		var_41_int += 1;
		string var_62_string;
		func_199(var_62_string);
		@HasAnimation(var_43_bool, (((var_62_string + "attack") + var_41_int) + "_phase1"));
		if(!var_43_bool) { //@nz
			break;
		Label_225:
			@GetCurrentWeapon(var_44_string);
			@GetAttackDistance(var_45_float);
			@GetDirection(var_46_cvector);
			var_50_bool = false;
			bool var_70_bool;
			func_445(var_70_bool);
			if(var_70_bool != 0) {
				@GetVictimMaterialExact(var_47_object, var_48_int, var_49_cvector, var_46_cvector, var_45_float);
				bool var_71_bool = false;
				bool var_72_bool = false;
				bool var_73_bool = false;
				if(var_47_object != null) {
					bool var_75_bool; object var_76_object;
					var_47_object = var_76_object;
					func_2850(var_75_bool, var_76_object, "health");
					if(var_75_bool != 0)
						var_73_bool = true;
				}
				if(var_73_bool != 0) {
					bool var_84_bool; object var_85_object;
					var_47_object = var_85_object;
					func_2964(var_84_bool, var_85_object);
					if(!var_84_bool) //@nz
						var_72_bool = true;
				}
				if(var_72_bool != 0) {
					if(var_48_int == 4)
						var_71_bool = true;
				}
				if(var_71_bool != 0) {
					var_93_bool = IsFuncExist(var_47_object, "GetDirection", 1);
					if(var_93_bool != 0) {
						@GetDirection(var_51_cvector);
						var_47_object->GetDirection(var_52_cvector);
						float var_94_float; cvector var_95_cvector; cvector var_96_cvector;
						var_51_cvector = var_95_cvector;
						var_52_cvector = var_96_cvector;
						func_3067(var_94_float, var_95_cvector, var_96_cvector);
						var_50_bool = var_94_float >= 0.49999997;
					}
				}
			}
			if(var_50_bool != 0) {
				var_53_string = "battack";
				string var_120_string;
				func_186(var_120_string);
				@PlaySound(var_120_string + "_back");
				break;
			Label_323:
				@SetAttackState(false);
				@GetAttackDistance(var_45_float);
				@GetDirection(var_46_cvector);
				@GetVictimMaterialExact(var_47_object, var_48_int, var_49_cvector, var_46_cvector, var_45_float);
				if(var_47_object != null) {
					var_131_bool = IsFuncExist(var_47_object, "GetDirection", 1);
					if(var_131_bool != 0) {
						@GetDirection(var_55_cvector);
						var_47_object->GetDirection(var_56_cvector);
						float var_132_float; cvector var_133_cvector; cvector var_134_cvector;
						var_55_cvector = var_133_cvector;
						var_56_cvector = var_134_cvector;
						func_3067(var_132_float, var_133_cvector, var_134_cvector);
						var_50_bool = var_132_float >= 0.49999997;
					} else {
								var_50_bool = false;
			}
							@irand(var_54_int, var_41_int);
							string var_225_string;
							func_199(var_225_string);
							var_53_string = (var_225_string + "attack") + (var_54_int + 1);
							string var_230_string;
							func_186(var_230_string);
							@PlaySound(var_230_string + (var_54_int + 1));
		}
			}
			float var_136_float; bool var_137_bool;
			var_50_bool = var_137_bool;
			func_426(var_136_float, var_137_bool);
			var_136_float = var_57_float;
			if(var_48_int == 4)
				var_57_float *= 3.0;
			float var_144_float; object var_145_object; float var_146_float; int var_147_int;
			var_47_object = var_145_object;
			int var_148_int;
			func_195(var_148_int);
			var_148_int = var_147_int;
			func_2891(var_144_float, var_145_object, var_146_float, var_147_int);
			var_144_float = var_58_float;
			if(var_58_float != 0) {
				@irand(var_59_int, 2);
				string var_207_string;
				func_186(var_207_string);
				@PlaySound((var_207_string + "_hit") + (var_59_int + 1));
				@ReportAttack(var_47_object);
				int var_213_int;
				func_197(var_213_int);
				@ReportHit(var_47_object, var_213_int, var_58_float, var_146_float, var_49_cvector, var_46_cvector);
				var_214_object = GlobalVars[2];
				var_214_object->in(var_60_bool, var_47_object);
				if(!var_60_bool) { //@nz
					var_216_object = GlobalVars[3];
					var_216_object->add(var_47_object);
					@BroadcastPlayerDamage(var_47_object, false);
				} else {
					@BroadcastPlayerDamage(var_47_object, true);

				}
			}
			func_444();
		}
		@PlayAnimation(var_53_string + "_phase2");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 40;
		var_47_object = null;
		bool var_221_bool;
		func_447(var_221_bool);
		if(var_221_bool == 1) goto Label_225;
		return 40;

	}
	var_69_bool = !(var_41_int + -1); //@nz
	if(var_69_bool == 0) goto Label_225;
	return 40;
	@SetAttackState(true);
	@PlayAnimation(var_53_string + "_phase1");
	@WaitForAnimEnd();
	if(var_0_bool == 0) goto Label_323;
}


void func_713(bool var_267_bool)
{
	bool var_269_bool;
	@IsShooting(var_269_bool);
	var_269_bool = var_267_bool;
}


void func_1738(int var_840_int)
{
	var_840_int = 2;
}


void func_718(string var_353_string)
{
	var_353_string = "scalpel";
}


// @pe
void func_720(float var_371_float)
{
	var_371_float = 0.6;
}


void func_1740(bool var_0_bool)
{
	string var_781_string; string var_782_string; int var_783_int; bool var_784_bool; float var_785_float; cvector var_787_cvector; object var_788_object; int var_789_int; cvector var_790_cvector; object var_791_object; int var_792_int; cvector var_793_cvector; float var_794_float; float var_795_float; float var_796_float; object var_797_object; float var_798_float; object var_799_object; object var_800_object; int var_801_int; int var_802_int; object var_803_object; bool var_804_bool;
	var_0_bool = false;
	
Label_1742:
	bool var_805_bool;
	func_1631(var_805_bool);
	if(!var_805_bool) { //@nz
	} else {
		@GetCurrentWeapon(var_781_string);
		var_782_string = "attack1";
		@SetAttackState(true);
		func_1670();
		@PlayAnimation(var_782_string + "_phase1");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 48;
		@TriggerWeapon("shot");
		string var_836_string;
		func_1730(var_836_string);
		@PlaySound(var_836_string + "_shot");
		int var_839_int;
		int var_840_int;
		func_1738(var_840_int);
		var_840_int = var_839_int;
		func_3420(var_839_int);
		func_1964();
		@SetAttackState(false);
		int var_842_int;
		func_1666(var_842_int);
		var_842_int = var_783_int;
		float var_843_float;
		func_1732(var_843_float);
		var_785_float = var_843_float / var_783_int;
		float var_847_float;
		func_1668(var_847_float);
		float var_851_float;
		func_3409(var_851_float);
		@GetDirection(var_787_cvector);
		object var_854_object;
		func_3042(var_854_object);
		var_854_object = var_788_object;
		var_789_int = 0;

		for(;;) {
			if(var_789_int < var_783_int) {
				@RandVecCone3D(var_790_cvector, var_787_cvector, (1.0 / (1.5 + (((1.0 / var_847_float) - 1.5) * var_851_float))));
				@GetVictimMaterialExact(var_791_object, var_792_int, var_793_cvector, var_790_cvector, 10000);
				if(var_791_object != 0) {
					var_785_float = var_794_float;
					if(var_792_int == 4)
						var_794_float *= 3.0;
					float var_861_float; object var_862_object; float var_863_float; int var_864_int;
					var_791_object = var_862_object;
					var_794_float = var_863_float;
					int var_865_int;
					func_1734(var_865_int);
					var_865_int = var_864_int;
					func_2891(var_861_float, var_862_object, var_863_float, var_864_int);
					var_861_float = var_795_float;
					if(var_795_float != 0) {
						var_788_object->add(var_791_object);
						int var_867_int;
						func_1736(var_867_int);
						@ReportHit(var_791_object, var_867_int, var_795_float, var_794_float, var_793_cvector, var_790_cvector);
						bool var_868_bool;
						func_1965(var_868_bool);
						if(var_868_bool != 0) {
							var_791_object->GetProperty("health", var_796_float);
							if(!var_796_float) { //@nz
								@GetVictimMaterialExact(var_797_object, var_792_int, var_793_cvector, var_790_cvector, 10000, var_791_object);
								bool var_872_bool = false;
								if(var_797_object != 0) {
									if(var_797_object != var_791_object)
										var_872_bool = true;
								}
								if(var_872_bool != 0) {
									float var_875_float; object var_876_object; int var_878_int;
									var_797_object = var_876_object;
									int var_880_int;
									func_1734(var_880_int);
									var_880_int = var_878_int;
									func_2891(var_875_float, var_876_object, (var_794_float * 0.75), var_878_int);
									var_875_float = var_798_float;
									if(var_798_float != 0) {
										var_788_object->add(var_797_object);
										int var_882_int;
										func_1736(var_882_int);
										@ReportHit(var_797_object, var_882_int, var_798_float, var_794_float, var_793_cvector, var_790_cvector);
									}
								}
								var_797_object = null;
							}
						}
					} else {
					if(!(var_792_int != -1)) goto Label_1914;
					var_886_bool = !false; //@nz
					if(var_886_bool == 0) goto Label_1914;
					@GetScene(var_799_object);
					@AddActorByType(var_800_object, "scripted", var_799_object, var_793_cvector, [0.0, 0.0, 1.0], "richochet.xml");
					var_800_object->SetScriptProperty("Material", var_792_int);
					var_784_bool = true;
					var_800_object = null;
					var_799_object = null;
			}
				var_788_object->size(var_801_int);
				var_802_int = 0;

				for(;;) {
					if(var_802_int < var_801_int) {
						var_788_object->get(var_803_object, var_802_int);
						@ReportAttack(var_803_object);
						var_892_object = GlobalVars[2];
						var_892_object->in(var_804_bool, var_803_object);
						if(!var_804_bool) { //@nz
							var_894_object = GlobalVars[3];
							var_894_object->add(var_803_object);
							@BroadcastPlayerDamage(var_803_object, false);
						} else {
						@BroadcastPlayerDamage(var_803_object, true);
					}
					@PlayAnimation(var_782_string + "_phase2");
					@WaitForAnimEnd();
					if(var_0_bool != 0)
						return 48;
					func_1683();
					var_788_object = null;
					bool var_916_bool;
					func_1967(var_916_bool);
					if(var_916_bool == 1) goto Label_1742;
					}
					var_803_object = null;
					var_802_int += 1;
				}
				}
			}
		Label_1914:
			var_791_object = null;
			var_789_int += 1;
		}
	}
	
}


// @pe
void func_3280(void)
{
	func_3270();
	@SetTimer(11, 0.15);
	@ModNoise(3);
}


void func_723(float var_375_float)
{
	var_375_float = 0.5;
}


void func_725(int var_409_int)
{
	var_409_int = 2;
}


void func_727(int var_394_int)
{
	var_394_int = 0;
}


void func_729(int var_403_int)
{
	var_403_int = 1;
}


// @pe
void func_731(float var_369_float, bool var_370_bool)
{
	bool var_372_bool;
	var_370_bool = var_372_bool;
	func_720(var_372_bool);
	float var_373_float; float var_374_float;
	float var_375_float;
	func_723(var_375_float);
	var_375_float = var_374_float;
	func_3438(var_373_float, var_374_float);
	float var_371_float;
	var_369_float = var_371_float * var_373_float;
}


void func_3291(void)
{
	bool var_13_bool;
	@KillTimer(10, var_13_bool);
	if(var_13_bool != 0)
		@ModNoise(-2);
}


void func_3301(void)
{
	bool var_13_bool;
	@KillTimer(12, var_13_bool);
	if(var_13_bool != 0)
		@ModNoise(-1);
}


void func_745(void)
{
	int var_409_int;
	func_725(var_409_int);
	int var_408_int;
	var_409_int = var_408_int;
	func_3420(var_408_int);
}


// @pe
void func_3311(void)
{
	func_3291();
	@SetTimer(10, 0.35);
	@ModNoise(2);
}


void func_753(bool var_0_bool)
{
	bool var_305_bool; string var_306_string; float var_307_float; cvector var_308_cvector; object var_309_object; int var_310_int; cvector var_311_cvector; bool var_312_bool; cvector var_313_cvector; cvector var_314_cvector; string var_315_string; int var_316_int; cvector var_317_cvector; cvector var_318_cvector; float var_319_float; float var_320_float; int var_321_int; bool var_322_bool;
	var_0_bool = false;
	int var_303_int = 0;
	
	for(;;) {
		var_303_int += 1;
		string var_324_string;
		func_991(var_324_string);
		@HasAnimation(var_305_bool, (((var_324_string + "attack") + var_303_int) + "_phase1"));
		if(!var_305_bool) { //@nz
			break;
		Label_777:
			@GetCurrentWeapon(var_306_string);
			@GetAttackDistance(var_307_float);
			@GetDirection(var_308_cvector);
			var_312_bool = false;
			bool var_332_bool;
			func_989(var_332_bool);
			if(var_332_bool != 0) {
				@GetVictimMaterialExact(var_309_object, var_310_int, var_311_cvector, var_308_cvector, var_307_float);
				bool var_333_bool = false;
				bool var_334_bool = false;
				bool var_335_bool = false;
				if(var_309_object != null) {
					bool var_337_bool; object var_338_object;
					var_309_object = var_338_object;
					func_2850(var_337_bool, var_338_object, "health");
					if(var_337_bool != 0)
						var_335_bool = true;
				}
				if(var_335_bool != 0) {
					bool var_340_bool; object var_341_object;
					var_309_object = var_341_object;
					func_2964(var_340_bool, var_341_object);
					if(!var_340_bool) //@nz
						var_334_bool = true;
				}
				if(var_334_bool != 0) {
					if(var_310_int == 4)
						var_333_bool = true;
				}
				if(var_333_bool != 0) {
					var_347_bool = IsFuncExist(var_309_object, "GetDirection", 1);
					if(var_347_bool != 0) {
						@GetDirection(var_313_cvector);
						var_309_object->GetDirection(var_314_cvector);
						float var_348_float; cvector var_349_cvector; cvector var_350_cvector;
						var_313_cvector = var_349_cvector;
						var_314_cvector = var_350_cvector;
						func_3067(var_348_float, var_349_cvector, var_350_cvector);
						var_312_bool = var_348_float >= 0.49999997;
					}
				}
			}
			if(var_312_bool != 0) {
				var_315_string = "battack";
				string var_353_string;
				func_718(var_353_string);
				@PlaySound(var_353_string + "_back");
				break;
			Label_875:
				@SetAttackState(false);
				@GetAttackDistance(var_307_float);
				@GetDirection(var_308_cvector);
				@GetVictimMaterialExact(var_309_object, var_310_int, var_311_cvector, var_308_cvector, var_307_float);
				if(var_309_object != null) {
					var_364_bool = IsFuncExist(var_309_object, "GetDirection", 1);
					if(var_364_bool != 0) {
						@GetDirection(var_317_cvector);
						var_309_object->GetDirection(var_318_cvector);
						float var_365_float; cvector var_366_cvector; cvector var_367_cvector;
						var_317_cvector = var_366_cvector;
						var_318_cvector = var_367_cvector;
						func_3067(var_365_float, var_366_cvector, var_367_cvector);
						var_312_bool = var_365_float >= 0.49999997;
					} else {
								var_312_bool = false;
			}
							@irand(var_316_int, var_303_int);
							string var_430_string;
							func_991(var_430_string);
							var_315_string = (var_430_string + "attack") + (var_316_int + 1);
							string var_435_string;
							func_718(var_435_string);
							@PlaySound(var_435_string + (var_316_int + 1));
		}
			}
			float var_369_float; bool var_370_bool;
			var_312_bool = var_370_bool;
			func_731(var_369_float, var_370_bool);
			var_369_float = var_319_float;
			if(var_310_int == 4)
				var_319_float *= 3.0;
			float var_390_float; object var_391_object; float var_392_float; int var_393_int;
			var_309_object = var_391_object;
			int var_394_int;
			func_727(var_394_int);
			var_394_int = var_393_int;
			func_2891(var_390_float, var_391_object, var_392_float, var_393_int);
			var_390_float = var_320_float;
			if(var_320_float != 0) {
				@irand(var_321_int, 2);
				string var_397_string;
				func_718(var_397_string);
				@PlaySound((var_397_string + "_hit") + (var_321_int + 1));
				@ReportAttack(var_309_object);
				int var_403_int;
				func_729(var_403_int);
				@ReportHit(var_309_object, var_403_int, var_320_float, var_392_float, var_311_cvector, var_308_cvector);
				var_404_object = GlobalVars[2];
				var_404_object->in(var_322_bool, var_309_object);
				if(!var_322_bool) { //@nz
					var_406_object = GlobalVars[3];
					var_406_object->add(var_309_object);
					@BroadcastPlayerDamage(var_309_object, false);
				} else {
					@BroadcastPlayerDamage(var_309_object, true);

				}
			}
			func_745();
		}
		@PlayAnimation(var_315_string + "_phase2");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 40;
		var_309_object = null;
		bool var_426_bool;
		func_993(var_426_bool);
		if(var_426_bool == 1) goto Label_777;
		return 40;

	}
	var_331_bool = !(var_303_int + -1); //@nz
	if(var_331_bool == 0) goto Label_777;
	return 40;
	@SetAttackState(true);
	@PlayAnimation(var_315_string + "_phase1");
	@WaitForAnimEnd();
	if(var_0_bool == 0) goto Label_875;
}


// @pe
void func_3322(void)
{
	func_3301();
	@SetTimer(12, 0.6);
	@ModNoise(1);
}


void func_1275(string var_483_string)
{
	var_483_string = "";
}


void func_1277(bool var_562_bool)
{
	bool var_564_bool;
	@IsShooting(var_564_bool);
	var_564_bool = var_562_bool;
}


void func_1282(bool var_626_bool)
{
	bool var_629_bool; bool var_630_bool;
	@GetWeaponProperty(var_629_bool, "ammo", var_630_bool);
	bool var_632_bool = true;
	var_633_bool = !var_629_bool; //@nz
	if(var_633_bool != 1) {
		var_634_bool = !var_630_bool; //@nz
		if(var_634_bool != 1)
			var_632_bool = false;
	}
	if(var_632_bool != 0) {
		bool var_635_bool;
		func_3373(var_635_bool, "rifle_ammo", 1);
		if(!var_635_bool) { //@nz
			string var_657_string;
			func_1355(var_657_string);
			@PlaySound(var_657_string + "_noammo");
			@PlayAnimation("noammo");
			@WaitForAnimEnd();
			var_626_bool = false;
		}
	}
	var_626_bool = true;
}


// @pe
void func_3333(void)
{
	func_3199();
}


// @pe
void func_2823(void)
{
	func_3746();
}


// @pe
void func_3337(void)
{
	func_3199();
}


void func_2827(void)
{
	@KillTimer(0);
}


// @pe
void func_3341(void)
{
	func_3199();
	func_3270();
}


// @pe
void func_2831(string var_56_string, int var_57_int)
{
	if(var_57_int == 2) {
		var_56_string = "fire";
		return 0;
	EMIT "GOTO 0xb1b";
	}
	if(var_57_int == 1) {
		var_56_string = "bullet";
		return 0;
	}
	var_56_string = "phys";
}


void func_2330(void)
{
}


void func_2331(bool var_1033_bool)
{
	var_1033_bool = false;
}


void func_2333(bool var_1081_bool)
{
	bool var_1083_bool;
	@IsShooting(var_1083_bool);
	var_1083_bool = var_1081_bool;
}


void func_2845(bool var_82_bool, object var_83_object)
{
	bool var_85_bool;
	@IsPlayerActor(var_83_object, var_85_bool);
	var_85_bool = var_82_bool;
}


void func_2850(bool var_41_bool, object var_42_object, string var_43_string)
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
void func_2338(void)
{
	func_2362();
	bool var_56_bool;
	func_3373(var_56_bool, "samopal_ammo", 2);
	if(var_56_bool != 0) {
		string var_59_string;
		func_2360(var_59_string);
		@PlaySound(var_59_string + "_reload");
		@PlayAnimation("reload");
		@WaitForAnimEnd();
	}
}


void func_1317(int var_683_int)
{
	var_683_int = 1;
}


void func_1319(float var_688_float)
{
	var_688_float = 0.017453292;
}


void func_1321(bool var_711_bool)
{
	var_711_bool = true;
}


void func_1323(void)
{
	bool var_664_bool;
	@SetWeaponProperty(var_664_bool, "ammo", false);
	func_3755();
}


void func_3373(bool var_20_bool, string var_21_string, int var_22_int)
{
	bool var_27_bool; int var_28_int; bool var_30_bool;
	@GetWeaponProperty(var_27_bool, "ammo", var_28_int);
	bool var_32_bool = false;
	if(var_27_bool != 0) {
		if(var_28_int >= var_22_int)
			var_32_bool = true;
	}
	if(var_32_bool != 0) {
		var_20_bool = false;
		return 8;
	}
	int var_29_int;
	@GetInvItemByName(var_29_int, var_21_string);
	
	for(;;) {
		if(var_28_int < var_22_int) {
			@RemoveItemByType(var_30_bool, var_29_int, 1);
			if(!var_30_bool) { //@nz
			} else {
				var_28_int += 1;
			}
		}
		if(!var_28_int) { //@nz
			var_20_bool = false;
			return 8;
		}
		@SetWeaponProperty(var_27_bool, "ammo", var_28_int);
		var_20_bool = true;
		return 8;

	}
}


void func_2862(string var_29_string, float var_30_float)
{
	float var_32_float;
	@GetProperty(var_29_string, var_32_float);
	@SetProperty(var_29_string, (var_32_float + var_30_float));
}


// @pe
void func_1332(void)
{
	func_1336();
}


void func_2869(bool var_40_bool, object var_41_object, string var_42_string, float var_43_float, float var_44_float, float var_45_float)
{
	object var_49_object;
	var_41_object = var_49_object;
	string var_50_string;
	var_42_string = var_50_string;
	bool var_48_bool;
	func_2850(var_48_bool, var_49_object, var_50_string);
	if(!var_48_bool) //@nz
		var_40_bool = false;
	float var_47_float;
	var_41_object->GetProperty(var_42_string, var_47_float);
	float var_58_float; float var_60_float; float var_61_float;
	var_44_float = var_60_float;
	var_45_float = var_61_float;
	func_3014(var_58_float, (var_47_float + var_43_float), var_60_float, var_61_float);
	var_41_object->SetProperty(var_42_string, var_58_float);
	var_40_bool = true;
}


void func_1336(void)
{
	bool var_744_bool;
	func_3373(var_744_bool, "rifle_ammo", 1);
	if(var_744_bool != 0) {
		string var_747_string;
		func_1355(var_747_string);
		@PlaySound(var_747_string + "_reload");
		@PlayAnimation("reload");
		@WaitForAnimEnd();
	}
}


void func_2360(string var_59_string)
{
	var_59_string = "samopal";
}


void func_2362(void)
{
}


void func_2363(bool var_0_bool, bool var_1_bool)
{
	bool var_1097_bool; bool var_1098_bool; bool var_1099_bool; int var_1100_int; int var_1101_int;
	var_0_bool = false;
	var_1_bool = false;
	@PlayAnimation("use_begin");
	@WaitForAnimEnd();
	if(var_0_bool != 0)
		return 14;
	object var_1095_object;
	@GetPlayerSelectedObject(var_1095_object);
	bool var_1096_bool = false;
	bool var_1104_bool; object var_1105_object;
	var_1095_object = var_1105_object;
	func_2850(var_1104_bool, var_1105_object, "lp");
	if(var_1104_bool != 0) {
		var_1095_object->GetProperty("lp", var_1097_bool);
		if(var_1097_bool != 0) {
			var_1095_object->GetProperty("locked", var_1098_bool);
			if(var_1098_bool != 0) {
				var_1096_bool = true;
				var_1095_object->SetProperty("locked", false);
				var_1100_int = 0;
				@GetWeaponProperty(var_1099_bool, "uses", var_1100_int);
				if(var_1100_int <= 1) {
					@GetWeaponItem(var_1101_int);
					@SelectItem(var_1101_int, false, 0);
					@RemoveItem(var_1101_int, 1, 0);
					var_1_bool = true;
				} else {
						@SetWeaponProperty(var_1099_bool, "uses", (var_1100_int - 1));
				}
			}
		}
	}
	if(var_1096_bool != 0)
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


void func_2891(float var_22_float, object var_23_object, float var_24_float, int var_25_int)
{
	int var_35_int; int var_37_int;
	object var_42_object;
	var_23_object = var_42_object;
	bool var_41_bool;
	func_2850(var_41_bool, var_42_object, "health");
	if(!var_41_bool) //@nz
		var_22_float = 0.0;
	bool var_51_bool; object var_52_object;
	func_2850(var_51_bool, var_52_object, "armor");
	if(!var_51_bool) //@nz
		var_35_int = 0;
	else
		var_52_object->GetProperty("armor", var_35_int);
	string var_56_string; int var_57_int;
	var_25_int = var_57_int;
	func_2831(var_56_string, var_57_int);
	string var_36_string = "armor_" + var_56_string;
	bool var_62_bool; object var_63_object; string var_64_string;
	var_23_object = var_63_object;
	func_2850(var_62_bool, var_63_object, var_64_string);
	if(!var_62_bool) //@nz
		var_37_int = 0;
	else
		var_23_object->GetProperty(var_64_string, var_37_int);

	float var_66_float;
	func_3007(var_66_float, ((var_35_int + var_37_int) / 100.0), (float)1);
	float var_38_float;
	var_66_float = var_38_float;
	float var_39_float;
	var_23_object->GetProperty("health", var_39_float);
	float var_40_float = var_24_float * (1 - var_38_float);
	float var_76_float;
	func_3014(var_76_float, (var_39_float - var_40_float), (float)0, (float)1);
	var_23_object->SetProperty("health", var_76_float);
	bool var_82_bool; object var_83_object;
	var_23_object = var_83_object;
	func_2845(var_82_bool, var_83_object);
	if(var_82_bool != 0) {
		float var_86_float = -var_40_float;
		func_3119(var_86_float);
	}
	var_40_float = var_22_float;
	
}


void func_1355(string var_657_string)
{
	var_657_string = "rifle";
}


void func_1357(float var_684_float)
{
	var_684_float = 1.5;
}


void func_1359(int var_708_int)
{
	var_708_int = 1;
}


void func_3409(float var_376_float)
{
	bool var_379_bool; int var_380_int;
	@GetWeaponProperty(var_379_bool, "durability", var_380_int);
	if(var_379_bool != 0)
		var_376_float = var_380_int / 100.0;
	else
		var_376_float = 1.0;
	
}


void func_1361(int var_710_int)
{
	var_710_int = 2;
}


void func_1363(int var_681_int)
{
	var_681_int = 2;
}


void func_1365(bool var_0_bool)
{
	string var_602_string; string var_603_string; int var_604_int; bool var_605_bool; float var_606_float; cvector var_608_cvector; object var_609_object; int var_610_int; cvector var_611_cvector; object var_612_object; int var_613_int; cvector var_614_cvector; float var_615_float; float var_616_float; float var_617_float; object var_618_object; float var_619_float; object var_620_object; object var_621_object; int var_622_int; int var_623_int; object var_624_object; bool var_625_bool;
	var_0_bool = false;
	
Label_1367:
	bool var_626_bool;
	func_1282(var_626_bool);
	if(!var_626_bool) { //@nz
	} else {
		@GetCurrentWeapon(var_602_string);
		var_603_string = "attack1";
		@SetAttackState(true);
		func_1323();
		@PlayAnimation(var_603_string + "_phase1");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 48;
		@TriggerWeapon("shot");
		string var_677_string;
		func_1355(var_677_string);
		@PlaySound(var_677_string + "_shot");
		int var_680_int;
		int var_681_int;
		func_1363(var_681_int);
		var_681_int = var_680_int;
		func_3420(var_680_int);
		func_1600();
		@SetAttackState(false);
		int var_683_int;
		func_1317(var_683_int);
		var_683_int = var_604_int;
		float var_684_float;
		func_1357(var_684_float);
		var_606_float = var_684_float / var_604_int;
		float var_688_float;
		func_1319(var_688_float);
		float var_692_float;
		func_3409(var_692_float);
		@GetDirection(var_608_cvector);
		object var_695_object;
		func_3042(var_695_object);
		var_695_object = var_609_object;
		var_610_int = 0;

		for(;;) {
			if(var_610_int < var_604_int) {
				@RandVecCone3D(var_611_cvector, var_608_cvector, (1.0 / (1.5 + (((1.0 / var_688_float) - 1.5) * var_692_float))));
				@GetVictimMaterialExact(var_612_object, var_613_int, var_614_cvector, var_611_cvector, 10000);
				if(var_612_object != 0) {
					var_606_float = var_615_float;
					if(var_613_int == 4)
						var_615_float *= 3.0;
					float var_704_float; object var_705_object; float var_706_float; int var_707_int;
					var_612_object = var_705_object;
					var_615_float = var_706_float;
					int var_708_int;
					func_1359(var_708_int);
					var_708_int = var_707_int;
					func_2891(var_704_float, var_705_object, var_706_float, var_707_int);
					var_704_float = var_616_float;
					if(var_616_float != 0) {
						var_609_object->add(var_612_object);
						int var_710_int;
						func_1361(var_710_int);
						@ReportHit(var_612_object, var_710_int, var_616_float, var_615_float, var_614_cvector, var_611_cvector);
						bool var_711_bool;
						func_1321(var_711_bool);
						if(var_711_bool != 0) {
							var_612_object->GetProperty("health", var_617_float);
							if(!var_617_float) { //@nz
								@GetVictimMaterialExact(var_618_object, var_613_int, var_614_cvector, var_611_cvector, 10000, var_612_object);
								bool var_715_bool = false;
								if(var_618_object != 0) {
									if(var_618_object != var_612_object)
										var_715_bool = true;
								}
								if(var_715_bool != 0) {
									float var_718_float; object var_719_object; int var_721_int;
									var_618_object = var_719_object;
									int var_723_int;
									func_1359(var_723_int);
									var_723_int = var_721_int;
									func_2891(var_718_float, var_719_object, (var_615_float * 0.75), var_721_int);
									var_718_float = var_619_float;
									if(var_619_float != 0) {
										var_609_object->add(var_618_object);
										int var_725_int;
										func_1361(var_725_int);
										@ReportHit(var_618_object, var_725_int, var_619_float, var_615_float, var_614_cvector, var_611_cvector);
									}
								}
								var_618_object = null;
							}
						}
					} else {
					if(!(var_613_int != -1)) goto Label_1539;
					var_729_bool = !false; //@nz
					if(var_729_bool == 0) goto Label_1539;
					@GetScene(var_620_object);
					@AddActorByType(var_621_object, "scripted", var_620_object, var_614_cvector, [0.0, 0.0, 1.0], "richochet.xml");
					var_621_object->SetScriptProperty("Material", var_613_int);
					var_605_bool = true;
					var_621_object = null;
					var_620_object = null;
			}
				var_609_object->size(var_622_int);
				var_623_int = 0;

				for(;;) {
					if(var_623_int < var_622_int) {
						var_609_object->get(var_624_object, var_623_int);
						@ReportAttack(var_624_object);
						var_735_object = GlobalVars[2];
						var_735_object->in(var_625_bool, var_624_object);
						if(!var_625_bool) { //@nz
							var_737_object = GlobalVars[3];
							var_737_object->add(var_624_object);
							@BroadcastPlayerDamage(var_624_object, false);
						} else {
						@BroadcastPlayerDamage(var_624_object, true);
					}
					@PlayAnimation(var_603_string + "_phase2");
					@WaitForAnimEnd();
					if(var_0_bool != 0)
						return 48;
					func_1332();
					var_609_object = null;
					bool var_751_bool;
					func_1601(var_751_bool);
					if(var_751_bool == 1) goto Label_1367;
					}
					var_624_object = null;
					var_623_int += 1;
				}
				}
			}
		Label_1539:
			var_612_object = null;
			var_610_int += 1;
		}
	}
	
}


void func_3420(int var_408_int)
{
	bool var_412_bool; int var_413_int;
	@GetWeaponProperty(var_412_bool, "durability", var_413_int);
	if(!var_412_bool) //@nz
		var_413_int = 100;
	int var_416_int;
	func_3025(var_416_int, (var_413_int - var_408_int), 0, 100);
	var_416_int = var_413_int;
	@SetWeaponProperty(var_412_bool, "durability", var_413_int);
}


// @pe
void func_3438(float var_373_float, float var_374_float)
{
	float var_376_float;
	func_3409(var_376_float);
	var_373_float = var_374_float + (var_376_float * (1 - var_374_float));
}


// @pe
void func_3447(bool var_13_bool, int var_14_int)
{
	int var_16_int;
	var_14_int = var_16_int;
	bool var_15_bool;
	func_3170(var_15_bool, var_16_int);
	var_15_bool = var_13_bool;
}


void func_2964(bool var_130_bool, object var_131_object)
{
	bool var_133_bool;
	var_131_object->IsDead(var_133_bool);
	var_133_bool = var_130_bool;
}


// @pe
void func_2969(string var_36_string, int var_37_int)
{
	if(var_37_int == 1) {
		var_36_string = "wood";
		return 0;
	EMIT "GOTO 0xbb7";
	}
	if(var_37_int == 2) {
		var_36_string = "metal";
		return 0;
	EMIT "GOTO 0xbb7";
	}
	if(var_37_int == 3) {
		var_36_string = "ground";
		return 0;
	EMIT "GOTO 0xbb7";
	}
	if(var_37_int == 4) {
		var_36_string = "water";
		return 0;
	EMIT "GOTO 0xbb7";
	}
	if(var_37_int == 5) {
		var_36_string = "carpet";
		return 0;
	}
	var_36_string = "stone";
}


// @pe
void func_426(float var_136_float, bool var_137_bool)
{
	bool var_139_bool;
	var_137_bool = var_139_bool;
	float var_138_float;
	func_188(var_138_float, var_139_bool);
	var_138_float = var_136_float;
}


void func_1964(void)
{
}


void func_1965(bool var_868_bool)
{
	var_868_bool = false;
}


void func_1967(bool var_916_bool)
{
	bool var_918_bool;
	@IsShooting(var_918_bool);
	var_918_bool = var_916_bool;
}


// @pe
void func_1972(void)
{
	func_1996();
	bool var_47_bool;
	func_3373(var_47_bool, "revolver_ammo", 6);
	if(var_47_bool != 0) {
		string var_50_string;
		func_1994(var_50_string);
		@PlaySound(var_50_string + "_reload");
		@PlayAnimation("reload");
		@WaitForAnimEnd();
	}
}


void func_3001(object var_26_object)
{
	object var_28_object;
	@self(var_28_object);
	var_28_object = var_26_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2489(string var_63_string)
{
	if(var_63_string == "empty") {
		TaskCall(3);
		func_465(var_66_bool);
		TaskReturn();
	} else if(var_63_string == "scalpel") {
			TaskCall(4);
			func_753(var_282_bool);
			TaskReturn();
	}

	
	if(var_63_string == "knife") {
		TaskCall(5);
		func_1039(var_441_bool);
		TaskReturn();
	} else if(var_63_string == "rifle") {
		TaskCall(6);
		func_1365(var_577_bool);
		TaskReturn();
	} else if(var_63_string == "revolver") {
		TaskCall(8);
		func_1740(var_756_bool);
		TaskReturn();
	} else if(var_63_string == "samopal") {
		TaskCall(10);
		func_2106(var_921_bool);
		TaskReturn();
	} else if(var_63_string == "lockpick") {
		TaskCall(12);
		func_2363(var_1086_bool, var_1087_bool);
		TaskReturn();
	}
}


void func_444(void)
{
}


void func_445(bool var_70_bool)
{
	var_70_bool = false;
}


void func_447(bool var_221_bool)
{
	bool var_223_bool;
	@IsShooting(var_223_bool);
	var_223_bool = var_221_bool;
}


// @pe
void func_3007(float var_66_float, float var_67_float, float var_68_float)
{
	if(var_67_float < var_68_float)
		var_67_float = var_66_float;
	else
		var_68_float = var_66_float;
	
}


void func_452(string var_166_string)
{
	var_166_string = "punch";
}


// @pe
void func_454(float var_184_float, bool var_185_bool)
{
	if(var_185_bool != 0)
		var_184_float = 0.3;
	else
		var_184_float = 0.2;
	
}


// @pe
void func_3014(float var_76_float, float var_77_float, float var_78_float, float var_79_float)
{
	if(var_77_float < var_78_float) {
		var_78_float = var_76_float;
		return 0;
	}
	if(var_77_float > var_79_float) {
		var_79_float = var_76_float;
		return 0;
	}
	var_77_float = var_76_float;
}


void func_1994(string var_50_string)
{
	var_50_string = "revolver";
}


void func_1996(void)
{
}


void func_461(int var_194_int)
{
	var_194_int = 0;
}


void func_1997(bool var_970_bool)
{
	bool var_973_bool; bool var_974_bool;
	@GetWeaponProperty(var_973_bool, "ammo", var_974_bool);
	bool var_976_bool = true;
	var_977_bool = !var_973_bool; //@nz
	if(var_977_bool != 1) {
		var_978_bool = !var_974_bool; //@nz
		if(var_978_bool != 1)
			var_976_bool = false;
	}
	if(var_976_bool != 0) {
		bool var_979_bool;
		func_3373(var_979_bool, "samopal_ammo", 2);
		if(!var_979_bool) { //@nz
			string var_983_string;
			func_2096(var_983_string);
			@PlaySound(var_983_string + "_noammo");
			@PlayAnimation("noammo");
			@WaitForAnimEnd();
			var_970_bool = false;
		}
	}
	var_970_bool = true;
}


void func_463(int var_259_int)
{
	var_259_int = 0;
}


void func_465(bool var_0_bool)
{
	bool var_89_bool; string var_90_string; float var_91_float; cvector var_92_cvector; object var_93_object; int var_94_int; cvector var_95_cvector; bool var_96_bool; cvector var_97_cvector; cvector var_98_cvector; string var_99_string; int var_100_int; cvector var_101_cvector; cvector var_102_cvector; float var_103_float; float var_104_float; int var_105_int; bool var_106_bool;
	var_0_bool = false;
	int var_87_int = 0;
	
	for(;;) {
		var_87_int += 1;
		string var_108_string;
		func_711(var_108_string);
		@HasAnimation(var_89_bool, (((var_108_string + "attack") + var_87_int) + "_phase1"));
		if(!var_89_bool) { //@nz
			break;
		Label_489:
			@GetCurrentWeapon(var_90_string);
			@GetAttackDistance(var_91_float);
			@GetDirection(var_92_cvector);
			var_96_bool = false;
			bool var_116_bool;
			func_709(var_116_bool);
			if(var_116_bool != 0) {
				@GetVictimMaterialExact(var_93_object, var_94_int, var_95_cvector, var_92_cvector, var_91_float);
				bool var_117_bool = false;
				bool var_118_bool = false;
				bool var_119_bool = false;
				if(var_93_object != null) {
					bool var_121_bool; object var_122_object;
					var_93_object = var_122_object;
					func_2850(var_121_bool, var_122_object, "health");
					if(var_121_bool != 0)
						var_119_bool = true;
				}
				if(var_119_bool != 0) {
					bool var_130_bool; object var_131_object;
					var_93_object = var_131_object;
					func_2964(var_130_bool, var_131_object);
					if(!var_130_bool) //@nz
						var_118_bool = true;
				}
				if(var_118_bool != 0) {
					if(var_94_int == 4)
						var_117_bool = true;
				}
				if(var_117_bool != 0) {
					var_139_bool = IsFuncExist(var_93_object, "GetDirection", 1);
					if(var_139_bool != 0) {
						@GetDirection(var_97_cvector);
						var_93_object->GetDirection(var_98_cvector);
						float var_140_float; cvector var_141_cvector; cvector var_142_cvector;
						var_97_cvector = var_141_cvector;
						var_98_cvector = var_142_cvector;
						func_3067(var_140_float, var_141_cvector, var_142_cvector);
						var_96_bool = var_140_float >= 0.49999997;
					}
				}
			}
			if(var_96_bool != 0) {
				var_99_string = "battack";
				string var_166_string;
				func_452(var_166_string);
				@PlaySound(var_166_string + "_back");
				break;
			Label_587:
				@SetAttackState(false);
				@GetAttackDistance(var_91_float);
				@GetDirection(var_92_cvector);
				@GetVictimMaterialExact(var_93_object, var_94_int, var_95_cvector, var_92_cvector, var_91_float);
				if(var_93_object != null) {
					var_177_bool = IsFuncExist(var_93_object, "GetDirection", 1);
					if(var_177_bool != 0) {
						@GetDirection(var_101_cvector);
						var_93_object->GetDirection(var_102_cvector);
						float var_178_float; cvector var_179_cvector; cvector var_180_cvector;
						var_101_cvector = var_179_cvector;
						var_102_cvector = var_180_cvector;
						func_3067(var_178_float, var_179_cvector, var_180_cvector);
						var_96_bool = var_178_float >= 0.49999997;
					} else {
								var_96_bool = false;
			}
							@irand(var_100_int, var_87_int);
							string var_271_string;
							func_711(var_271_string);
							var_99_string = (var_271_string + "attack") + (var_100_int + 1);
							string var_276_string;
							func_452(var_276_string);
							@PlaySound(var_276_string + (var_100_int + 1));
		}
			}
			float var_182_float; bool var_183_bool;
			var_96_bool = var_183_bool;
			func_690(var_182_float, var_183_bool);
			var_182_float = var_103_float;
			if(var_94_int == 4)
				var_103_float *= 3.0;
			float var_190_float; object var_191_object; float var_192_float; int var_193_int;
			var_93_object = var_191_object;
			int var_194_int;
			func_461(var_194_int);
			var_194_int = var_193_int;
			func_2891(var_190_float, var_191_object, var_192_float, var_193_int);
			var_190_float = var_104_float;
			if(var_104_float != 0) {
				@irand(var_105_int, 2);
				string var_253_string;
				func_452(var_253_string);
				@PlaySound((var_253_string + "_hit") + (var_105_int + 1));
				@ReportAttack(var_93_object);
				int var_259_int;
				func_463(var_259_int);
				@ReportHit(var_93_object, var_259_int, var_104_float, var_192_float, var_95_cvector, var_92_cvector);
				var_260_object = GlobalVars[2];
				var_260_object->in(var_106_bool, var_93_object);
				if(!var_106_bool) { //@nz
					var_262_object = GlobalVars[3];
					var_262_object->add(var_93_object);
					@BroadcastPlayerDamage(var_93_object, false);
				} else {
					@BroadcastPlayerDamage(var_93_object, true);

				}
			}
			func_708();
		}
		@PlayAnimation(var_99_string + "_phase2");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 40;
		var_93_object = null;
		bool var_267_bool;
		func_713(var_267_bool);
		if(var_267_bool == 1) goto Label_489;
		return 40;

	}
	var_115_bool = !(var_87_int + -1); //@nz
	if(var_115_bool == 0) goto Label_489;
	return 40;
	@SetAttackState(true);
	@PlayAnimation(var_99_string + "_phase1");
	@WaitForAnimEnd();
	if(var_0_bool == 0) goto Label_587;
}


// @pe
void func_3025(int var_416_int, int var_417_int, int var_418_int, int var_419_int)
{
	if(var_417_int < var_418_int) {
		var_418_int = var_416_int;
		return 0;
	}
	if(var_417_int > var_419_int) {
		var_419_int = var_416_int;
		return 0;
	}
	var_417_int = var_416_int;
}


void func_3036(object var_37_object)
{
	object var_39_object;
	@CreateObjectSet(var_39_object);
	var_39_object = var_37_object;
}
EMIT "Stack[-1] = 0";


void func_989(bool var_332_bool)
{
	var_332_bool = false;
}


void func_991(string var_324_string)
{
	var_324_string = "";
}


void func_993(bool var_426_bool)
{
	bool var_428_bool;
	@IsShooting(var_428_bool);
	var_428_bool = var_426_bool;
}


void func_3042(object var_695_object)
{
	object var_697_object;
	@CreateObjectVector(var_697_object);
	var_697_object = var_695_object;
}
EMIT "Stack[-1] = 0";


void func_998(bool var_491_bool)
{
	var_491_bool = true;
}


void func_1000(string var_512_string)
{
	var_512_string = "knife";
}


// @pe
void func_3048(float var_143_float, cvector var_144_cvector, cvector var_145_cvector)
{
	var_146_float = GetByIndex(var_144_cvector, 0);
	var_147_float = GetByIndex(var_145_cvector, 0);
	var_149_float = GetByIndex(var_144_cvector, 2);
	var_150_float = GetByIndex(var_145_cvector, 2);
	var_143_float = (var_146_float * var_147_float) + (var_149_float * var_150_float);
}


// @pe
void func_1002(float var_530_float, bool var_531_bool)
{
	if(var_531_bool != 0)
		var_530_float = 0.7;
	else
		var_530_float = 0.4;
	
}


void func_2032(int var_1007_int)
{
	var_1007_int = 5;
}


void func_1009(float var_535_float)
{
	var_535_float = 0.5;
}


void func_2034(float var_1012_float)
{
	var_1012_float = 0.03926991;
}


void func_1011(int var_558_int)
{
	var_558_int = 4;
}


void func_2036(void)
{
	bool var_991_bool; int var_992_int;
	@GetWeaponProperty(var_991_bool, "ammo", var_992_int);
	@SetWeaponProperty(var_991_bool, "ammo", (var_992_int - 1));
	func_3755();
}


void func_1013(int var_543_int)
{
	var_543_int = 0;
}


// @pe
void func_3057(float var_152_float, cvector var_153_cvector)
{
	var_154_float = GetByIndex(var_153_cvector, 0);
	var_155_float = GetByIndex(var_153_cvector, 0);
	var_157_float = GetByIndex(var_153_cvector, 2);
	var_158_float = GetByIndex(var_153_cvector, 2);
	var_152_float = sqrt((var_154_float * var_155_float) + (var_157_float * var_158_float));
}


void func_1015(int var_552_int)
{
	var_552_int = 1;
}


// @pe
void func_2553(string var_17_string)
{
	if(var_17_string == "rifle") {
		TaskCall(7);
		func_1606();
		TaskReturn();
	} else if(var_17_string == "revolver") {
			TaskCall(9);
			func_1972();
			TaskReturn();
	}
Label_2580:
	for(;;) {

	}
	
	if(!(var_17_string == "samopal")) goto Label_2580;
	TaskCall(11);
	func_2338();
	TaskReturn();
}


// @pe
void func_3067(float var_140_float, cvector var_141_cvector, cvector var_142_cvector)
{
	cvector var_144_cvector;
	var_141_cvector = var_144_cvector;
	cvector var_145_cvector;
	var_142_cvector = var_145_cvector;
	float var_143_float;
	func_3048(var_143_float, var_144_cvector, var_145_cvector);
	float var_152_float; cvector var_153_cvector;
	var_141_cvector = var_153_cvector;
	func_3057(var_152_float, var_153_cvector);
	float var_161_float; cvector var_162_cvector;
	var_142_cvector = var_162_cvector;
	func_3057(var_161_float, var_162_cvector);
	var_140_float = var_143_float / (var_152_float * var_161_float);
}


// @pe
void func_1017(float var_528_float, bool var_529_bool)
{
	bool var_531_bool;
	var_529_bool = var_531_bool;
	float var_530_float;
	func_1002(var_530_float, var_531_bool);
	float var_533_float; float var_534_float;
	float var_535_float;
	func_1009(var_535_float);
	var_535_float = var_534_float;
	func_3438(var_533_float, var_534_float);
	var_528_float = var_530_float * var_533_float;
}


