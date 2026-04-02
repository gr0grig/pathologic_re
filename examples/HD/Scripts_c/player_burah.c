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
			func_3683();
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
			func_2868("armor_phys", var_14_float);
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
			func_3683();
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
			func_3683();
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
			func_3683();
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
			func_3683();
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
			func_3683();
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
		func_3683();
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
		func_3683();
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
		func_3175(var_19_object);
		var_19_object = var_18_object;
		func_2598(var_18_object);
	}

	void OnPlayerStartShooting(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, string var_13_string, bool var_14_bool, bool var_15_bool, string var_16_string, bool var_17_bool)
	{
		bool var_59_bool; string var_60_string; bool var_61_bool;
		@IsWeaponHolstered(var_59_bool);
		if(!var_59_bool) { //@nz
			func_2833();
			@GetCurrentWeapon(var_60_string);
			string var_63_string;
			var_60_string = var_63_string;
			func_2495(var_63_string);
			func_2829();
			@IsAltShooting(var_61_bool);
			if(var_61_bool != 0)
				func_2733();
		}
	}

	void OnPlayerStartAltShooting(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		bool var_15_bool; string var_16_string; bool var_17_bool;
		@IsWeaponHolstered(var_15_bool);
		if(!var_15_bool) { //@nz
			func_2833();
			@GetCurrentWeapon(var_16_string);
			string var_20_string;
			var_16_string = var_20_string;
			func_2587(var_20_string);
			func_2829();
			@IsShooting(var_17_bool);
			if(var_17_bool != 0)
				func_2708();
		}
	}

	// @pe
	void OnPlayerHolsterWeapon(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		func_2833();
		TaskCall(0);
		func_0();
		TaskReturn();
		func_2829();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		int var_18_int; bool var_19_bool; int var_20_int;
		int var_22_int;
		var_12_int = var_22_int;
		bool var_21_bool;
		func_3478(var_21_bool, var_22_int);
		if(var_21_bool != 0)
			return 8;
		func_2833();
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
			func_2829();
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
			func_2559(var_17_string);
		} else {
			int var_63_int;
			var_12_int = var_63_int;
			func_3683();
		}
	
	}

}


// @pe
void OnPlayerEnemy(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
{
	func_3353();
	func_3301();
}


// @pe
void OnPlayerStartWalking(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
{
	func_3342();
	func_3301();
}


// @pe
void OnPlayerStopWalking(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
{
	func_3322();
	func_3311();
}


// @pe
void OnLSHAnimationEnd(bool bCycled, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
{
	func_3332();
}


// @pe
void OnTimer(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, int var_12_int)
{
	int var_14_int;
	var_12_int = var_14_int;
	bool var_13_bool;
	func_3478(var_13_bool, var_14_int);
}


// @pe
void OnTrigger(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, string var_12_string)
{
	if(var_12_string == "die")
		func_3280();
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
		func_3007(var_29_object);
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
	func_3169(var_13_bool);
	if(!var_13_bool) //@nz
		func_3280();
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
	func_3007(var_29_object);
	var_29_object = var_27_object;
	var_13_float = var_28_float;
	func_3090(var_26_bool, var_27_object, var_28_float);
}


// @pe
void OnPlayerLand(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
{
	func_3861();
	func_3311();
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
		func_3007(var_26_object);
		var_26_object = var_23_object;
		func_2897(var_22_float, var_23_object, var_24_float, 0);
		var_22_float = var_16_float;
		object var_95_object;
		func_3007(var_95_object);
		@ReportHit(var_95_object, 0, var_16_float, var_24_float, [0.0, 0.0, 0.0], [0.0, 0.0, 0.0]);
	}
}


void OnAction(bool var_0_bool, bool var_1_bool, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, int var_12_int)
{
	object var_27_object; object var_28_object; object var_29_object; cvector var_30_cvector; string var_31_string; bool var_32_bool; cvector var_33_cvector; int var_34_int; bool var_35_bool; bool var_36_bool; int var_37_int; int var_38_int; bool var_39_bool; int var_40_int;
	if(var_12_int == 0) {
		@Inventory();
	} else {
			if(var_12_int == 1) {
				@GetMainOutdoorScene(var_27_object);
				@GetActiveScene(var_28_object);
				if(var_27_object == null) {
					@Trace("Can't find main outdoor oscene");
					return 28;
				}
				var_27_object->GetMap(var_29_object);
				if(var_29_object == null) {
					@Trace("Can't find map");
					return 28;
				}
				if(var_27_object == var_28_object) {
					@GetPosition(var_30_cvector);
				} else {
				var_28_object->GetName(var_31_string);
				var_27_object->GetLocator(("pt_gmap_" + var_31_string), var_32_bool, var_30_cvector, var_33_cvector);
				var_54_bool = !var_32_bool; //@nz
				if(var_54_bool == 0) goto Label_3729;
				@Trace("FIXME: No map locator for scene : " + var_31_string);
				var_30_cvector = [0.0, 0.0, 0.0];
			}
			if(var_12_int == 2) {
				@Diary();
			} else if(var_12_int == 3) {
				@ShowMessage();
			} else if(var_12_int == 4) {
				@ShowPlayerStats(var_34_int);
				if(var_34_int == 1)
					@ShowWindow("people.xml", true);
			}
			if(var_12_int == 5) {
				@IsFlashlightOn(var_35_bool);
				if(var_35_bool != 0) {
					@SwitchFlashlight(false);
					@PlaySound("flashlight_off");
				} else {
						bool var_72_bool;
						func_3180(var_72_bool);
						if(var_72_bool == 0) goto Label_3789;
						@SwitchFlashlight(true);
						@PlaySound("flashlight_on");
				}
				for(;;) {
					goto Label_3860;

				}

			Label_3789:
				@PlaySound("flashlight_nofuel");
			}
			if(var_12_int == 6) {
				int var_81_int;
				func_3186(var_81_int);
				if(var_81_int != 0)
					return 28;
				@IsVisirOn(var_36_bool);
				if(var_36_bool != 0) {
					@SwitchVisir(false);
					@SendWorldWndMessage(2);
				} else {
						@GetProperty("visir", var_37_int);
						if(var_37_int == 0) goto Label_3832;
						@GetProperty("vcharge", var_38_int);
						if(!(var_38_int >= 10)) goto Label_3832;
						@SwitchVisir(true);
						@SendWorldWndMessage(1);
				}
			Label_3832:
				for(;;) {
					goto Label_3860;

				}
			}
			if(var_12_int == 7) {
				@IsOverrideActive(var_39_bool);
				if(!var_39_bool) //@nz
					@ShowWindow("people.xml", true);
			} else if(var_12_int == 21) {
				@GetWeaponItem(var_40_int);
				if(!(var_40_int != -1)) goto Label_3860;
				@SelectItem(var_40_int, false, 0);
				@SetHandsItem(-1);
			}
			}
		Label_3729:
			var_50_float = GetByIndex(var_30_cvector, 0);
			var_51_float = GetByIndex(var_30_cvector, 2);
			var_29_object->SetMapParams(var_50_float, var_51_float);
			@ShowMap(var_29_object);
			var_29_object = null;
			var_28_object = null;
			var_27_object = null;
	}
Label_3860:
	for(;;) {
		return 28;

	}
	
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
		func_3007(var_21_object);
		@BroadcastMessage("unholster", var_21_object, var_18_object);
		func_3161(var_16_string + "_unholster");
		@SetWeaponHolster(false);
		@PlayAnimation("unholster");
		@WaitForAnimEnd();
	} else {
		object var_32_object;
		func_3007(var_32_object);
		@BroadcastMessage("holster", var_32_object, var_18_object);
		func_3161(var_16_string + "_holster");
		@PlayAnimation("holster");
		@WaitForAnimEnd();
		@SetWeaponHolster(true);
	}
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_3073(float var_140_float, cvector var_141_cvector, cvector var_142_cvector)
{
	cvector var_144_cvector;
	var_141_cvector = var_144_cvector;
	cvector var_145_cvector;
	var_142_cvector = var_145_cvector;
	float var_143_float;
	func_3054(var_143_float, var_144_cvector, var_145_cvector);
	float var_152_float; cvector var_153_cvector;
	var_141_cvector = var_153_cvector;
	func_3063(var_152_float, var_153_cvector);
	float var_161_float; cvector var_162_cvector;
	var_142_cvector = var_162_cvector;
	func_3063(var_161_float, var_162_cvector);
	var_140_float = var_143_float / (var_152_float * var_161_float);
}


void func_2049(void)
{
	bool var_1072_bool; bool var_1073_bool;
	@GetWeaponProperty(var_1072_bool, "ammo", var_1073_bool);
	bool var_1075_bool = true;
	var_1076_bool = !var_1072_bool; //@nz
	if(var_1076_bool != 1) {
		var_1077_bool = !var_1073_bool; //@nz
		if(var_1077_bool != 1)
			var_1075_bool = false;
	}
	if(var_1075_bool != 0)
		func_2065();
}


void func_1031(void)
{
	int var_562_int;
	func_1011(var_562_int);
	int var_561_int;
	var_562_int = var_561_int;
	func_3451(var_561_int);
}


void func_1039(bool var_0_bool)
{
	bool var_468_bool; string var_469_string; float var_470_float; cvector var_471_cvector; object var_472_object; int var_473_int; cvector var_474_cvector; bool var_475_bool; cvector var_476_cvector; cvector var_477_cvector; string var_478_string; int var_479_int; cvector var_480_cvector; cvector var_481_cvector; float var_482_float; float var_483_float; int var_484_int; bool var_485_bool;
	var_0_bool = false;
	int var_466_int = 0;
	
	for(;;) {
		var_466_int += 1;
		string var_487_string;
		func_1275(var_487_string);
		@HasAnimation(var_468_bool, (((var_487_string + "attack") + var_466_int) + "_phase1"));
		if(!var_468_bool) { //@nz
			break;
		Label_1063:
			@GetCurrentWeapon(var_469_string);
			@GetAttackDistance(var_470_float);
			@GetDirection(var_471_cvector);
			var_475_bool = false;
			bool var_495_bool;
			func_998(var_495_bool);
			if(var_495_bool != 0) {
				@GetVictimMaterialExact(var_472_object, var_473_int, var_474_cvector, var_471_cvector, var_470_float);
				bool var_496_bool = false;
				bool var_497_bool = false;
				bool var_498_bool = false;
				if(var_472_object != null) {
					bool var_500_bool; object var_501_object;
					var_472_object = var_501_object;
					func_2856(var_500_bool, var_501_object, "health");
					if(var_500_bool != 0)
						var_498_bool = true;
				}
				if(var_498_bool != 0) {
					bool var_503_bool; object var_504_object;
					var_472_object = var_504_object;
					func_2970(var_503_bool, var_504_object);
					if(!var_503_bool) //@nz
						var_497_bool = true;
				}
				if(var_497_bool != 0) {
					if(var_473_int == 4)
						var_496_bool = true;
				}
				if(var_496_bool != 0) {
					var_510_bool = IsFuncExist(var_472_object, "GetDirection", 1);
					if(var_510_bool != 0) {
						@GetDirection(var_476_cvector);
						var_472_object->GetDirection(var_477_cvector);
						float var_511_float; cvector var_512_cvector; cvector var_513_cvector;
						var_476_cvector = var_512_cvector;
						var_477_cvector = var_513_cvector;
						func_3073(var_511_float, var_512_cvector, var_513_cvector);
						var_475_bool = var_511_float >= 0.49999997;
					}
				}
			}
			if(var_475_bool != 0) {
				var_478_string = "battack";
				string var_516_string;
				func_1000(var_516_string);
				@PlaySound(var_516_string + "_back");
				break;
			Label_1161:
				@SetAttackState(false);
				@GetAttackDistance(var_470_float);
				@GetDirection(var_471_cvector);
				@GetVictimMaterialExact(var_472_object, var_473_int, var_474_cvector, var_471_cvector, var_470_float);
				if(var_472_object != null) {
					var_527_bool = IsFuncExist(var_472_object, "GetDirection", 1);
					if(var_527_bool != 0) {
						@GetDirection(var_480_cvector);
						var_472_object->GetDirection(var_481_cvector);
						float var_528_float; cvector var_529_cvector; cvector var_530_cvector;
						var_480_cvector = var_529_cvector;
						var_481_cvector = var_530_cvector;
						func_3073(var_528_float, var_529_cvector, var_530_cvector);
						var_475_bool = var_528_float >= 0.49999997;
					} else {
								var_475_bool = false;
			}
							@irand(var_479_int, var_466_int);
							string var_570_string;
							func_1275(var_570_string);
							var_478_string = (var_570_string + "attack") + (var_479_int + 1);
							string var_575_string;
							func_1000(var_575_string);
							@PlaySound(var_575_string + (var_479_int + 1));
		}
			}
			float var_532_float; bool var_533_bool;
			var_475_bool = var_533_bool;
			func_1017(var_532_float, var_533_bool);
			var_532_float = var_482_float;
			if(var_473_int == 4)
				var_482_float *= 3.0;
			float var_543_float; object var_544_object; float var_545_float; int var_546_int;
			var_472_object = var_544_object;
			int var_547_int;
			func_1013(var_547_int);
			var_547_int = var_546_int;
			func_2897(var_543_float, var_544_object, var_545_float, var_546_int);
			var_543_float = var_483_float;
			if(var_483_float != 0) {
				@irand(var_484_int, 2);
				string var_550_string;
				func_1000(var_550_string);
				@PlaySound((var_550_string + "_hit") + (var_484_int + 1));
				@ReportAttack(var_472_object);
				int var_556_int;
				func_1015(var_556_int);
				@ReportHit(var_472_object, var_556_int, var_483_float, var_545_float, var_474_cvector, var_471_cvector);
				var_557_object = GlobalVars[2];
				var_557_object->in(var_485_bool, var_472_object);
				if(!var_485_bool) { //@nz
					var_559_object = GlobalVars[3];
					var_559_object->add(var_472_object);
					@BroadcastPlayerDamage(var_472_object, false);
				} else {
					@BroadcastPlayerDamage(var_472_object, true);

				}
			}
			func_1031();
		}
		@PlayAnimation(var_478_string + "_phase2");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 40;
		var_472_object = null;
		bool var_566_bool;
		func_1277(var_566_bool);
		if(var_566_bool == 1) goto Label_1063;
		return 40;

	}
	var_494_bool = !(var_466_int + -1); //@nz
	if(var_494_bool == 0) goto Label_1063;
	return 40;
	@SetAttackState(true);
	@PlayAnimation(var_478_string + "_phase1");
	@WaitForAnimEnd();
	if(var_0_bool == 0) goto Label_1161;
}


void func_2065(void)
{
	bool var_1078_bool;
	func_3404(var_1078_bool, "samopal_ammo", 2);
	if(var_1078_bool != 0) {
		string var_1081_string;
		func_2096(var_1081_string);
		@PlaySound(var_1081_string + "_reload");
		@PlayAnimation("reload");
		@WaitForAnimEnd();
	}
}


// @pe
void func_3090(bool var_26_bool, object var_27_object, float var_28_float)
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
		func_3142(var_36_float);
		bool var_40_bool; object var_41_object; float var_43_float;
		var_27_object = var_41_object;
		var_28_float = var_43_float;
		func_2875(var_40_bool, var_41_object, "reputation", var_43_float, (float)0, (float)1);
		var_26_bool = true;
		return 0;

	}
	
	var_26_bool = false;
}


// @pe
void func_2587(string var_20_string)
{
	if(var_20_string == "empty") {
		TaskCall(1);
		func_50(var_24_bool, var_25_bool, var_26_float, 0.25);
		TaskReturn();
	}
}


void func_2598(object var_18_object)
{
	int var_30_int; int var_31_int; string var_32_string; bool var_34_bool; bool var_35_bool;
	var_36_object = GlobalVars[1];
	object var_37_object;
	func_3042(var_37_object);
	var_37_object = var_36_object;
	GlobalVars[1] = var_36_object;
	var_40_object = GlobalVars[2];
	object var_41_object;
	func_3042(var_41_object);
	var_41_object = var_40_object;
	GlobalVars[2] = var_40_object;
	var_42_object = GlobalVars[3];
	object var_43_object;
	func_3042(var_43_object);
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
				if(!(var_31_int < var_30_int)) goto Label_2667;
				var_18_object->get(var_32_string, var_31_int);
				@ApplyEffect(var_32_string);
				var_31_int += 1;
			}
		}
	}
Label_2667:
	func_2829();
	float var_33_float;
	@GetProperty("health", var_33_float);
	bool var_66_bool = false;
	if(var_33_float <= 0) {
		bool var_69_bool;
		func_3169(var_69_bool);
		if(!var_69_bool) //@nz
			var_66_bool = true;
	}
	if(var_66_bool != 0)
		func_3280();
	for(;;) {
		@IsWeaponHolstered(var_34_bool);
		var_89_bool = !var_34_bool; //@nz
		if(var_89_bool == 0) goto Label_2703;
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


void func_2096(string var_987_string)
{
	var_987_string = "samopal";
}


void func_2098(float var_1012_float)
{
	var_1012_float = 1.8;
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


void func_2100(int var_1034_int)
{
	var_1034_int = 1;
}


void func_3125(float var_86_float)
{
	object var_88_object;
	@CreateFloatVector(var_88_object);
	var_88_object->add(var_86_float);
	if(var_86_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_88_object);
}
EMIT "Stack[-1] = 0";


void func_2102(int var_1036_int)
{
	var_1036_int = 2;
}


void func_2104(int var_1009_int)
{
	var_1009_int = 2;
}


void func_2106(bool var_0_bool)
{
	string var_950_string; string var_951_string; int var_952_int; bool var_953_bool; float var_954_float; cvector var_956_cvector; object var_957_object; int var_958_int; cvector var_959_cvector; object var_960_object; int var_961_int; cvector var_962_cvector; float var_963_float; float var_964_float; float var_965_float; object var_966_object; float var_967_float; object var_968_object; object var_969_object; int var_970_int; int var_971_int; object var_972_object; bool var_973_bool;
	var_0_bool = false;
	
Label_2108:
	bool var_974_bool;
	func_1997(var_974_bool);
	if(!var_974_bool) { //@nz
	} else {
		@GetCurrentWeapon(var_950_string);
		var_951_string = "attack1";
		@SetAttackState(true);
		func_2036();
		@PlayAnimation(var_951_string + "_phase1");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 48;
		@TriggerWeapon("shot");
		string var_1005_string;
		func_2096(var_1005_string);
		@PlaySound(var_1005_string + "_shot");
		int var_1008_int;
		int var_1009_int;
		func_2104(var_1009_int);
		var_1009_int = var_1008_int;
		func_3451(var_1008_int);
		func_2330();
		@SetAttackState(false);
		int var_1011_int;
		func_2032(var_1011_int);
		var_1011_int = var_952_int;
		float var_1012_float;
		func_2098(var_1012_float);
		var_954_float = var_1012_float / var_952_int;
		float var_1016_float;
		func_2034(var_1016_float);
		float var_1020_float;
		func_3440(var_1020_float);
		@GetDirection(var_956_cvector);
		object var_1023_object;
		func_3048(var_1023_object);
		var_1023_object = var_957_object;
		var_958_int = 0;

		for(;;) {
			if(var_958_int < var_952_int) {
				@RandVecCone3D(var_959_cvector, var_956_cvector, (1.0 / (1.5 + (((1.0 / var_1016_float) - 1.5) * var_1020_float))));
				@GetVictimMaterialExact(var_960_object, var_961_int, var_962_cvector, var_959_cvector, 10000);
				if(var_960_object != 0) {
					var_954_float = var_963_float;
					if(var_961_int == 4)
						var_963_float *= 3.0;
					float var_1030_float; object var_1031_object; float var_1032_float; int var_1033_int;
					var_960_object = var_1031_object;
					var_963_float = var_1032_float;
					int var_1034_int;
					func_2100(var_1034_int);
					var_1034_int = var_1033_int;
					func_2897(var_1030_float, var_1031_object, var_1032_float, var_1033_int);
					var_1030_float = var_964_float;
					if(var_964_float != 0) {
						var_957_object->add(var_960_object);
						int var_1036_int;
						func_2102(var_1036_int);
						@ReportHit(var_960_object, var_1036_int, var_964_float, var_963_float, var_962_cvector, var_959_cvector);
						bool var_1037_bool;
						func_2331(var_1037_bool);
						if(var_1037_bool != 0) {
							var_960_object->GetProperty("health", var_965_float);
							if(!var_965_float) { //@nz
								@GetVictimMaterialExact(var_966_object, var_961_int, var_962_cvector, var_959_cvector, 10000, var_960_object);
								bool var_1041_bool = false;
								if(var_966_object != 0) {
									if(var_966_object != var_960_object)
										var_1041_bool = true;
								}
								if(var_1041_bool != 0) {
									float var_1044_float; object var_1045_object; int var_1047_int;
									var_966_object = var_1045_object;
									int var_1049_int;
									func_2100(var_1049_int);
									var_1049_int = var_1047_int;
									func_2897(var_1044_float, var_1045_object, (var_963_float * 0.75), var_1047_int);
									var_1044_float = var_967_float;
									if(var_967_float != 0) {
										var_957_object->add(var_966_object);
										int var_1051_int;
										func_2102(var_1051_int);
										@ReportHit(var_966_object, var_1051_int, var_967_float, var_963_float, var_962_cvector, var_959_cvector);
									}
								}
								var_966_object = null;
							}
						}
					} else {
					if(!(var_961_int != -1)) goto Label_2280;
					var_1055_bool = !false; //@nz
					if(var_1055_bool == 0) goto Label_2280;
					@GetScene(var_968_object);
					@AddActorByType(var_969_object, "scripted", var_968_object, var_962_cvector, [0.0, 0.0, 1.0], "richochet.xml");
					var_969_object->SetScriptProperty("Material", var_961_int);
					var_953_bool = true;
					var_969_object = null;
					var_968_object = null;
			}
				var_957_object->size(var_970_int);
				var_971_int = 0;

				for(;;) {
					if(var_971_int < var_970_int) {
						var_957_object->get(var_972_object, var_971_int);
						@ReportAttack(var_972_object);
						var_1061_object = GlobalVars[2];
						var_1061_object->in(var_973_bool, var_972_object);
						if(!var_973_bool) { //@nz
							var_1063_object = GlobalVars[3];
							var_1063_object->add(var_972_object);
							@BroadcastPlayerDamage(var_972_object, false);
						} else {
						@BroadcastPlayerDamage(var_972_object, true);
					}
					@PlayAnimation(var_951_string + "_phase2");
					@WaitForAnimEnd();
					if(var_0_bool != 0)
						return 48;
					func_2049();
					var_957_object = null;
					bool var_1085_bool;
					func_2333(var_1085_bool);
					if(var_1085_bool == 1) goto Label_2108;
					}
					var_972_object = null;
					var_971_int += 1;
				}
				}
			}
		Label_2280:
			var_960_object = null;
			var_958_int += 1;
		}
	}
	
}


void func_1600(void)
{
}


void func_1601(bool var_755_bool)
{
	bool var_757_bool;
	@IsShooting(var_757_bool);
	var_757_bool = var_755_bool;
}


// @pe
void func_1606(void)
{
	func_1630();
	bool var_20_bool;
	func_3404(var_20_bool, "rifle_ammo", 1);
	if(var_20_bool != 0) {
		string var_41_string;
		func_1628(var_41_string);
		@PlaySound(var_41_string + "_reload");
		@PlayAnimation("reload");
		@WaitForAnimEnd();
	}
}


void func_3142(float var_36_float)
{
	object var_38_object;
	@CreateFloatVector(var_38_object);
	var_38_object->add(var_36_float);
	@SendWorldWndMessage(16, var_38_object);
}
EMIT "Stack[-1] = 0";


void func_3152(int var_78_int)
{
	float var_80_float;
	@GetGameTime(var_80_float);
	var_78_int = 1 + (var_80_float / 24);
}


void func_3161(string var_24_string)
{
	bool var_27_bool;
	@IsExistingSound(var_27_bool, var_24_string);
	if(var_27_bool != 0)
		@PlaySound(var_24_string);
}


void func_1628(string var_41_string)
{
	var_41_string = "rifle";
}


void func_1630(void)
{
}


void func_1631(bool var_809_bool)
{
	bool var_812_bool; bool var_813_bool;
	@GetWeaponProperty(var_812_bool, "ammo", var_813_bool);
	bool var_815_bool = true;
	var_816_bool = !var_812_bool; //@nz
	if(var_816_bool != 1) {
		var_817_bool = !var_813_bool; //@nz
		if(var_817_bool != 1)
			var_815_bool = false;
	}
	if(var_815_bool != 0) {
		bool var_818_bool;
		func_3404(var_818_bool, "revolver_ammo", 6);
		if(!var_818_bool) { //@nz
			string var_822_string;
			func_1730(var_822_string);
			@PlaySound(var_822_string + "_noammo");
			@PlayAnimation("noammo");
			@WaitForAnimEnd();
			var_809_bool = false;
		}
	}
	var_809_bool = true;
}


void func_3169(bool var_69_bool)
{
	bool var_71_bool;
	@GetVariable("god_mode", var_71_bool);
	var_71_bool = var_69_bool;
}


void func_102(float var_2_float)
{
	func_2868("armor_phys", var_2_float);
	@SetProperty("blocking", true);
}


void func_3175(object var_19_object)
{
	object var_21_object = null;
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_3180(bool var_72_bool)
{
	int var_74_int;
	@GetItemCountOfType(var_74_int, "kerosene");
	var_74_int = var_72_bool;
}


void func_112(float var_2_float)
{
	@SetProperty("blocking", false);
	float var_45_float = -var_2_float;
	func_2868("armor_phys", var_45_float);
}


void func_3186(int var_81_int)
{
	int var_83_int;
	@GetVariable("branch", var_83_int);
	var_83_int = var_81_int;
}


// @pe
void func_3192(bool var_64_bool, int var_65_int)
{
	if(var_65_int == 10) {
		func_3364();
		var_64_bool = true;
		return 0;
	EMIT "GOTO 0xc93";
	}
	if(var_65_int == 11) {
		func_3372();
		var_64_bool = true;
		return 0;
	EMIT "GOTO 0xc93";
	}
	if(var_65_int == 12) {
		func_3368();
		var_64_bool = true;
		return 0;
	}
	var_64_bool = false;
}


void func_122(bool var_37_bool)
{
	bool var_39_bool;
	@IsAltShooting(var_39_bool);
	var_39_bool = var_37_bool;
}


void func_1666(int var_846_int)
{
	var_846_int = 1;
}


void func_1668(float var_851_float)
{
	var_851_float = 0.02617994;
}


void func_1670(void)
{
	bool var_830_bool; int var_831_int;
	@GetWeaponProperty(var_830_bool, "ammo", var_831_int);
	@SetWeaponProperty(var_830_bool, "ammo", (var_831_int - 1));
	func_3870();
}


void func_1683(void)
{
	bool var_907_bool; bool var_908_bool;
	@GetWeaponProperty(var_907_bool, "ammo", var_908_bool);
	bool var_910_bool = true;
	var_911_bool = !var_907_bool; //@nz
	if(var_911_bool != 1) {
		var_912_bool = !var_908_bool; //@nz
		if(var_912_bool != 1)
			var_910_bool = false;
	}
	if(var_910_bool != 0)
		func_1699();
}


void func_3221(void)
{
	bool var_76_bool; int var_77_int; bool var_80_bool; int var_81_int; string var_83_string;
	@GetGroundMaterial(var_76_bool, var_77_int);
	if(!var_76_bool) //@nz
		var_77_int = -1;
	string var_85_string; int var_86_int;
	var_77_int = var_86_int;
	func_2975(var_85_string, var_86_int);
	string var_78_string;
	var_85_string = var_78_string;
	int var_79_int = 0;
	
	for(;;) {
		@IsExistingSound(var_80_bool, (("step_" + var_78_string) + (var_79_int + 1)));
		if(!var_80_bool) { //@nz
			break;
		Label_3252:
			if(var_79_int == 1) {
				var_81_int = 0;
			} else {
					@irand(var_81_int, var_79_int);
					var_116_string = GlobalVars[0];
					if(!((("step_" + var_78_string) + (var_81_int + 1)) != var_116_string)) goto Label_3268;
			}
			for(;;) {
				@PlaySound(("step_" + var_78_string) + (var_81_int + 1));
				var_111_string = GlobalVars[0];
				var_83_string = var_111_string;
				GlobalVars[0] = var_111_string;

			}

		Label_3268:
		}
		var_79_int += 1;
	}
	var_103_bool = !var_79_int; //@nz
	if(var_103_bool == 0) goto Label_3252;
	var_104_string = GlobalVars[0];
	GlobalVars[0] = "";
}


void func_1699(void)
{
	bool var_913_bool;
	func_3404(var_913_bool, "revolver_ammo", 6);
	if(var_913_bool != 0) {
		string var_916_string;
		func_1730(var_916_string);
		@PlaySound(var_916_string + "_reload");
		@PlayAnimation("reload");
		@WaitForAnimEnd();
	}
}


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


// @pe
void func_188(float var_138_float, bool var_139_bool)
{
	if(var_139_bool != 0)
		var_138_float = 0.2;
	else
		var_138_float = 0.1;
	
}


void func_1730(string var_822_string)
{
	var_822_string = "revolver";
}


void func_195(int var_148_int)
{
	var_148_int = 0;
}


void func_1732(float var_847_float)
{
	var_847_float = 0.8;
}


void func_708(void)
{
}


void func_197(int var_217_int)
{
	var_217_int = 0;
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
					func_2856(var_75_bool, var_76_object, "health");
					if(var_75_bool != 0)
						var_73_bool = true;
				}
				if(var_73_bool != 0) {
					bool var_84_bool; object var_85_object;
					var_47_object = var_85_object;
					func_2970(var_84_bool, var_85_object);
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
						func_3073(var_94_float, var_95_cvector, var_96_cvector);
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
						func_3073(var_132_float, var_133_cvector, var_134_cvector);
						var_50_bool = var_132_float >= 0.49999997;
					} else {
								var_50_bool = false;
			}
							@irand(var_54_int, var_41_int);
							string var_229_string;
							func_199(var_229_string);
							var_53_string = (var_229_string + "attack") + (var_54_int + 1);
							string var_234_string;
							func_186(var_234_string);
							@PlaySound(var_234_string + (var_54_int + 1));
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
			func_2897(var_144_float, var_145_object, var_146_float, var_147_int);
			var_144_float = var_58_float;
			if(var_58_float != 0) {
				@irand(var_59_int, 2);
				string var_211_string;
				func_186(var_211_string);
				@PlaySound((var_211_string + "_hit") + (var_59_int + 1));
				@ReportAttack(var_47_object);
				int var_217_int;
				func_197(var_217_int);
				@ReportHit(var_47_object, var_217_int, var_58_float, var_146_float, var_49_cvector, var_46_cvector);
				var_218_object = GlobalVars[2];
				var_218_object->in(var_60_bool, var_47_object);
				if(!var_60_bool) { //@nz
					var_220_object = GlobalVars[3];
					var_220_object->add(var_47_object);
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
		bool var_225_bool;
		func_447(var_225_bool);
		if(var_225_bool == 1) goto Label_225;
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


void func_713(bool var_271_bool)
{
	bool var_273_bool;
	@IsShooting(var_273_bool);
	var_273_bool = var_271_bool;
}


void func_1738(int var_844_int)
{
	var_844_int = 2;
}


void func_1734(int var_869_int)
{
	var_869_int = 1;
}


void func_718(string var_357_string)
{
	var_357_string = "scalpel";
}


void func_1736(int var_871_int)
{
	var_871_int = 2;
}


// @pe
void func_720(float var_375_float)
{
	var_375_float = 0.6;
}


void func_1740(bool var_0_bool)
{
	string var_785_string; string var_786_string; int var_787_int; bool var_788_bool; float var_789_float; cvector var_791_cvector; object var_792_object; int var_793_int; cvector var_794_cvector; object var_795_object; int var_796_int; cvector var_797_cvector; float var_798_float; float var_799_float; float var_800_float; object var_801_object; float var_802_float; object var_803_object; object var_804_object; int var_805_int; int var_806_int; object var_807_object; bool var_808_bool;
	var_0_bool = false;
	
Label_1742:
	bool var_809_bool;
	func_1631(var_809_bool);
	if(!var_809_bool) { //@nz
	} else {
		@GetCurrentWeapon(var_785_string);
		var_786_string = "attack1";
		@SetAttackState(true);
		func_1670();
		@PlayAnimation(var_786_string + "_phase1");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 48;
		@TriggerWeapon("shot");
		string var_840_string;
		func_1730(var_840_string);
		@PlaySound(var_840_string + "_shot");
		int var_843_int;
		int var_844_int;
		func_1738(var_844_int);
		var_844_int = var_843_int;
		func_3451(var_843_int);
		func_1964();
		@SetAttackState(false);
		int var_846_int;
		func_1666(var_846_int);
		var_846_int = var_787_int;
		float var_847_float;
		func_1732(var_847_float);
		var_789_float = var_847_float / var_787_int;
		float var_851_float;
		func_1668(var_851_float);
		float var_855_float;
		func_3440(var_855_float);
		@GetDirection(var_791_cvector);
		object var_858_object;
		func_3048(var_858_object);
		var_858_object = var_792_object;
		var_793_int = 0;

		for(;;) {
			if(var_793_int < var_787_int) {
				@RandVecCone3D(var_794_cvector, var_791_cvector, (1.0 / (1.5 + (((1.0 / var_851_float) - 1.5) * var_855_float))));
				@GetVictimMaterialExact(var_795_object, var_796_int, var_797_cvector, var_794_cvector, 10000);
				if(var_795_object != 0) {
					var_789_float = var_798_float;
					if(var_796_int == 4)
						var_798_float *= 3.0;
					float var_865_float; object var_866_object; float var_867_float; int var_868_int;
					var_795_object = var_866_object;
					var_798_float = var_867_float;
					int var_869_int;
					func_1734(var_869_int);
					var_869_int = var_868_int;
					func_2897(var_865_float, var_866_object, var_867_float, var_868_int);
					var_865_float = var_799_float;
					if(var_799_float != 0) {
						var_792_object->add(var_795_object);
						int var_871_int;
						func_1736(var_871_int);
						@ReportHit(var_795_object, var_871_int, var_799_float, var_798_float, var_797_cvector, var_794_cvector);
						bool var_872_bool;
						func_1965(var_872_bool);
						if(var_872_bool != 0) {
							var_795_object->GetProperty("health", var_800_float);
							if(!var_800_float) { //@nz
								@GetVictimMaterialExact(var_801_object, var_796_int, var_797_cvector, var_794_cvector, 10000, var_795_object);
								bool var_876_bool = false;
								if(var_801_object != 0) {
									if(var_801_object != var_795_object)
										var_876_bool = true;
								}
								if(var_876_bool != 0) {
									float var_879_float; object var_880_object; int var_882_int;
									var_801_object = var_880_object;
									int var_884_int;
									func_1734(var_884_int);
									var_884_int = var_882_int;
									func_2897(var_879_float, var_880_object, (var_798_float * 0.75), var_882_int);
									var_879_float = var_802_float;
									if(var_802_float != 0) {
										var_792_object->add(var_801_object);
										int var_886_int;
										func_1736(var_886_int);
										@ReportHit(var_801_object, var_886_int, var_802_float, var_798_float, var_797_cvector, var_794_cvector);
									}
								}
								var_801_object = null;
							}
						}
					} else {
					if(!(var_796_int != -1)) goto Label_1914;
					var_890_bool = !false; //@nz
					if(var_890_bool == 0) goto Label_1914;
					@GetScene(var_803_object);
					@AddActorByType(var_804_object, "scripted", var_803_object, var_797_cvector, [0.0, 0.0, 1.0], "richochet.xml");
					var_804_object->SetScriptProperty("Material", var_796_int);
					var_788_bool = true;
					var_804_object = null;
					var_803_object = null;
			}
				var_792_object->size(var_805_int);
				var_806_int = 0;

				for(;;) {
					if(var_806_int < var_805_int) {
						var_792_object->get(var_807_object, var_806_int);
						@ReportAttack(var_807_object);
						var_896_object = GlobalVars[2];
						var_896_object->in(var_808_bool, var_807_object);
						if(!var_808_bool) { //@nz
							var_898_object = GlobalVars[3];
							var_898_object->add(var_807_object);
							@BroadcastPlayerDamage(var_807_object, false);
						} else {
						@BroadcastPlayerDamage(var_807_object, true);
					}
					@PlayAnimation(var_786_string + "_phase2");
					@WaitForAnimEnd();
					if(var_0_bool != 0)
						return 48;
					func_1683();
					var_792_object = null;
					bool var_920_bool;
					func_1967(var_920_bool);
					if(var_920_bool == 1) goto Label_1742;
					}
					var_807_object = null;
					var_806_int += 1;
				}
				}
			}
		Label_1914:
			var_795_object = null;
			var_793_int += 1;
		}
	}
	
}


void func_3280(void)
{
	int var_78_int;
	func_3152(var_78_int);
	if(var_78_int == 12)
		@UnlockAchievement("ACHIEVEMENT_MIGHT");
	object var_76_object;
	@GetMainOutdoorScene(var_76_object);
	object var_77_object;
	@AddBlankActor(var_77_object, var_76_object, "player_death", "play_death_burah.bin");
	@SetDeathState();
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_723(float var_379_float)
{
	var_379_float = 0.5;
}


void func_725(int var_413_int)
{
	var_413_int = 2;
}


void func_727(int var_398_int)
{
	var_398_int = 0;
}


void func_729(int var_407_int)
{
	var_407_int = 1;
}


// @pe
void func_731(float var_373_float, bool var_374_bool)
{
	bool var_376_bool;
	var_374_bool = var_376_bool;
	func_720(var_376_bool);
	float var_377_float; float var_378_float;
	float var_379_float;
	func_723(var_379_float);
	var_379_float = var_378_float;
	func_3469(var_377_float, var_378_float);
	float var_375_float;
	var_373_float = var_375_float * var_377_float;
}


void func_3301(void)
{
	bool var_18_bool;
	@KillTimer(11, var_18_bool);
	if(var_18_bool != 0)
		@ModNoise(-3);
}


void func_745(void)
{
	int var_413_int;
	func_725(var_413_int);
	int var_412_int;
	var_413_int = var_412_int;
	func_3451(var_412_int);
}


// @pe
void func_3311(void)
{
	func_3301();
	@SetTimer(11, 0.15);
	@ModNoise(3);
}


void func_753(bool var_0_bool)
{
	bool var_309_bool; string var_310_string; float var_311_float; cvector var_312_cvector; object var_313_object; int var_314_int; cvector var_315_cvector; bool var_316_bool; cvector var_317_cvector; cvector var_318_cvector; string var_319_string; int var_320_int; cvector var_321_cvector; cvector var_322_cvector; float var_323_float; float var_324_float; int var_325_int; bool var_326_bool;
	var_0_bool = false;
	int var_307_int = 0;
	
	for(;;) {
		var_307_int += 1;
		string var_328_string;
		func_991(var_328_string);
		@HasAnimation(var_309_bool, (((var_328_string + "attack") + var_307_int) + "_phase1"));
		if(!var_309_bool) { //@nz
			break;
		Label_777:
			@GetCurrentWeapon(var_310_string);
			@GetAttackDistance(var_311_float);
			@GetDirection(var_312_cvector);
			var_316_bool = false;
			bool var_336_bool;
			func_989(var_336_bool);
			if(var_336_bool != 0) {
				@GetVictimMaterialExact(var_313_object, var_314_int, var_315_cvector, var_312_cvector, var_311_float);
				bool var_337_bool = false;
				bool var_338_bool = false;
				bool var_339_bool = false;
				if(var_313_object != null) {
					bool var_341_bool; object var_342_object;
					var_313_object = var_342_object;
					func_2856(var_341_bool, var_342_object, "health");
					if(var_341_bool != 0)
						var_339_bool = true;
				}
				if(var_339_bool != 0) {
					bool var_344_bool; object var_345_object;
					var_313_object = var_345_object;
					func_2970(var_344_bool, var_345_object);
					if(!var_344_bool) //@nz
						var_338_bool = true;
				}
				if(var_338_bool != 0) {
					if(var_314_int == 4)
						var_337_bool = true;
				}
				if(var_337_bool != 0) {
					var_351_bool = IsFuncExist(var_313_object, "GetDirection", 1);
					if(var_351_bool != 0) {
						@GetDirection(var_317_cvector);
						var_313_object->GetDirection(var_318_cvector);
						float var_352_float; cvector var_353_cvector; cvector var_354_cvector;
						var_317_cvector = var_353_cvector;
						var_318_cvector = var_354_cvector;
						func_3073(var_352_float, var_353_cvector, var_354_cvector);
						var_316_bool = var_352_float >= 0.49999997;
					}
				}
			}
			if(var_316_bool != 0) {
				var_319_string = "battack";
				string var_357_string;
				func_718(var_357_string);
				@PlaySound(var_357_string + "_back");
				break;
			Label_875:
				@SetAttackState(false);
				@GetAttackDistance(var_311_float);
				@GetDirection(var_312_cvector);
				@GetVictimMaterialExact(var_313_object, var_314_int, var_315_cvector, var_312_cvector, var_311_float);
				if(var_313_object != null) {
					var_368_bool = IsFuncExist(var_313_object, "GetDirection", 1);
					if(var_368_bool != 0) {
						@GetDirection(var_321_cvector);
						var_313_object->GetDirection(var_322_cvector);
						float var_369_float; cvector var_370_cvector; cvector var_371_cvector;
						var_321_cvector = var_370_cvector;
						var_322_cvector = var_371_cvector;
						func_3073(var_369_float, var_370_cvector, var_371_cvector);
						var_316_bool = var_369_float >= 0.49999997;
					} else {
								var_316_bool = false;
			}
							@irand(var_320_int, var_307_int);
							string var_434_string;
							func_991(var_434_string);
							var_319_string = (var_434_string + "attack") + (var_320_int + 1);
							string var_439_string;
							func_718(var_439_string);
							@PlaySound(var_439_string + (var_320_int + 1));
		}
			}
			float var_373_float; bool var_374_bool;
			var_316_bool = var_374_bool;
			func_731(var_373_float, var_374_bool);
			var_373_float = var_323_float;
			if(var_314_int == 4)
				var_323_float *= 3.0;
			float var_394_float; object var_395_object; float var_396_float; int var_397_int;
			var_313_object = var_395_object;
			int var_398_int;
			func_727(var_398_int);
			var_398_int = var_397_int;
			func_2897(var_394_float, var_395_object, var_396_float, var_397_int);
			var_394_float = var_324_float;
			if(var_324_float != 0) {
				@irand(var_325_int, 2);
				string var_401_string;
				func_718(var_401_string);
				@PlaySound((var_401_string + "_hit") + (var_325_int + 1));
				@ReportAttack(var_313_object);
				int var_407_int;
				func_729(var_407_int);
				@ReportHit(var_313_object, var_407_int, var_324_float, var_396_float, var_315_cvector, var_312_cvector);
				var_408_object = GlobalVars[2];
				var_408_object->in(var_326_bool, var_313_object);
				if(!var_326_bool) { //@nz
					var_410_object = GlobalVars[3];
					var_410_object->add(var_313_object);
					@BroadcastPlayerDamage(var_313_object, false);
				} else {
					@BroadcastPlayerDamage(var_313_object, true);

				}
			}
			func_745();
		}
		@PlayAnimation(var_319_string + "_phase2");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 40;
		var_313_object = null;
		bool var_430_bool;
		func_993(var_430_bool);
		if(var_430_bool == 1) goto Label_777;
		return 40;

	}
	var_335_bool = !(var_307_int + -1); //@nz
	if(var_335_bool == 0) goto Label_777;
	return 40;
	@SetAttackState(true);
	@PlayAnimation(var_319_string + "_phase1");
	@WaitForAnimEnd();
	if(var_0_bool == 0) goto Label_875;
}


void func_3322(void)
{
	bool var_13_bool;
	@KillTimer(10, var_13_bool);
	if(var_13_bool != 0)
		@ModNoise(-2);
}


void func_1275(string var_487_string)
{
	var_487_string = "";
}


void func_1277(bool var_566_bool)
{
	bool var_568_bool;
	@IsShooting(var_568_bool);
	var_568_bool = var_566_bool;
}


void func_1282(bool var_630_bool)
{
	bool var_633_bool; bool var_634_bool;
	@GetWeaponProperty(var_633_bool, "ammo", var_634_bool);
	bool var_636_bool = true;
	var_637_bool = !var_633_bool; //@nz
	if(var_637_bool != 1) {
		var_638_bool = !var_634_bool; //@nz
		if(var_638_bool != 1)
			var_636_bool = false;
	}
	if(var_636_bool != 0) {
		bool var_639_bool;
		func_3404(var_639_bool, "rifle_ammo", 1);
		if(!var_639_bool) { //@nz
			string var_661_string;
			func_1355(var_661_string);
			@PlaySound(var_661_string + "_noammo");
			@PlayAnimation("noammo");
			@WaitForAnimEnd();
			var_630_bool = false;
		}
	}
	var_630_bool = true;
}


void func_3332(void)
{
	bool var_13_bool;
	@KillTimer(12, var_13_bool);
	if(var_13_bool != 0)
		@ModNoise(-1);
}


// @pe
void func_2829(void)
{
	func_3861();
}


// @pe
void func_3342(void)
{
	func_3322();
	@SetTimer(10, 0.35);
	@ModNoise(2);
}


void func_2833(void)
{
	@KillTimer(0);
}


void func_3861(void)
{
	float var_61_float;
	@rand(var_61_float, 10, 30);
	@SetTimer(0, var_61_float);
}


// @pe
void func_2837(string var_56_string, int var_57_int)
{
	if(var_57_int == 2) {
		var_56_string = "fire";
		return 0;
	EMIT "GOTO 0xb21";
	}
	if(var_57_int == 1) {
		var_56_string = "bullet";
		return 0;
	}
	var_56_string = "phys";
}


// @pe
void func_3353(void)
{
	func_3332();
	@SetTimer(12, 0.6);
	@ModNoise(1);
}


void func_2330(void)
{
}


void func_2331(bool var_1037_bool)
{
	var_1037_bool = false;
}


void func_2333(bool var_1085_bool)
{
	bool var_1087_bool;
	@IsShooting(var_1087_bool);
	var_1087_bool = var_1085_bool;
}


void func_3870(void)
{
	object var_672_object;
	@GetScene(var_672_object);
	object var_674_object;
	func_3007(var_674_object);
	@BroadcastMessage("player_shot", var_674_object, var_672_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2338(void)
{
	func_2362();
	bool var_56_bool;
	func_3404(var_56_bool, "samopal_ammo", 2);
	if(var_56_bool != 0) {
		string var_59_string;
		func_2360(var_59_string);
		@PlaySound(var_59_string + "_reload");
		@PlayAnimation("reload");
		@WaitForAnimEnd();
	}
}


void func_2851(bool var_82_bool, object var_83_object)
{
	bool var_85_bool;
	@IsPlayerActor(var_83_object, var_85_bool);
	var_85_bool = var_82_bool;
}


// @pe
void func_3364(void)
{
	func_3221();
}


void func_1317(int var_687_int)
{
	var_687_int = 1;
}


void func_1319(float var_692_float)
{
	var_692_float = 0.017453292;
}


void func_2856(bool var_41_bool, object var_42_object, string var_43_string)
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


void func_1321(bool var_715_bool)
{
	var_715_bool = true;
}


// @pe
void func_3368(void)
{
	func_3221();
}


void func_1323(void)
{
	bool var_668_bool;
	@SetWeaponProperty(var_668_bool, "ammo", false);
	func_3870();
}


// @pe
void func_3372(void)
{
	func_3221();
	func_3301();
}


void func_2868(string var_29_string, float var_30_float)
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


void func_1336(void)
{
	bool var_748_bool;
	func_3404(var_748_bool, "rifle_ammo", 1);
	if(var_748_bool != 0) {
		string var_751_string;
		func_1355(var_751_string);
		@PlaySound(var_751_string + "_reload");
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
	bool var_1105_bool; bool var_1106_bool; bool var_1107_bool; int var_1108_int; int var_1109_int;
	var_0_bool = false;
	var_1_bool = false;
	int var_1101_int;
	@GetWeaponItem(var_1101_int);
	@PlayAnimation("use_begin");
	@WaitForAnimEnd();
	if(var_0_bool != 0)
		return 18;
	int var_1102_int;
	@GetWeaponItem(var_1102_int);
	object var_1103_object;
	@GetPlayerSelectedObject(var_1103_object);
	bool var_1104_bool = false;
	if(var_1102_int == var_1101_int) {
		bool var_1113_bool; object var_1114_object;
		var_1103_object = var_1114_object;
		func_2856(var_1113_bool, var_1114_object, "lp");
		if(var_1113_bool != 0) {
			var_1103_object->GetProperty("lp", var_1105_bool);
			if(var_1105_bool != 0) {
				var_1103_object->GetProperty("locked", var_1106_bool);
				if(var_1106_bool != 0) {
					var_1104_bool = true;
					var_1103_object->SetProperty("locked", false);
					var_1108_int = 0;
					@GetWeaponProperty(var_1107_bool, "uses", var_1108_int);
					if(var_1108_int <= 1) {
						@GetWeaponItem(var_1109_int);
						@SelectItem(var_1109_int, false, 0);
						@RemoveItem(var_1109_int, 1, 0);
						var_1_bool = true;
					} else {
							@SetWeaponProperty(var_1107_bool, "uses", (var_1108_int - 1));
					}
				}
			}
		}
	}
	if(var_1104_bool != 0)
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


void func_2875(bool var_40_bool, object var_41_object, string var_42_string, float var_43_float, float var_44_float, float var_45_float)
{
	object var_49_object;
	var_41_object = var_49_object;
	string var_50_string;
	var_42_string = var_50_string;
	bool var_48_bool;
	func_2856(var_48_bool, var_49_object, var_50_string);
	if(!var_48_bool) //@nz
		var_40_bool = false;
	float var_47_float;
	var_41_object->GetProperty(var_42_string, var_47_float);
	float var_58_float; float var_60_float; float var_61_float;
	var_44_float = var_60_float;
	var_45_float = var_61_float;
	func_3020(var_58_float, (var_47_float + var_43_float), var_60_float, var_61_float);
	var_41_object->SetProperty(var_42_string, var_58_float);
	var_40_bool = true;
}


void func_1355(string var_661_string)
{
	var_661_string = "rifle";
}


void func_3404(bool var_20_bool, string var_21_string, int var_22_int)
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


void func_1357(float var_688_float)
{
	var_688_float = 1.5;
}


void func_1359(int var_712_int)
{
	var_712_int = 1;
}


void func_1361(int var_714_int)
{
	var_714_int = 2;
}


void func_2897(float var_22_float, object var_23_object, float var_24_float, int var_25_int)
{
	int var_35_int; int var_37_int;
	object var_42_object;
	var_23_object = var_42_object;
	bool var_41_bool;
	func_2856(var_41_bool, var_42_object, "health");
	if(!var_41_bool) //@nz
		var_22_float = 0.0;
	bool var_51_bool; object var_52_object;
	func_2856(var_51_bool, var_52_object, "armor");
	if(!var_51_bool) //@nz
		var_35_int = 0;
	else
		var_52_object->GetProperty("armor", var_35_int);
	string var_56_string; int var_57_int;
	var_25_int = var_57_int;
	func_2837(var_56_string, var_57_int);
	string var_36_string = "armor_" + var_56_string;
	bool var_62_bool; object var_63_object; string var_64_string;
	var_23_object = var_63_object;
	func_2856(var_62_bool, var_63_object, var_64_string);
	if(!var_62_bool) //@nz
		var_37_int = 0;
	else
		var_23_object->GetProperty(var_64_string, var_37_int);

	float var_66_float;
	func_3013(var_66_float, ((var_35_int + var_37_int) / 100.0), (float)1);
	float var_38_float;
	var_66_float = var_38_float;
	float var_39_float;
	var_23_object->GetProperty("health", var_39_float);
	float var_40_float = var_24_float * (1 - var_38_float);
	float var_76_float;
	func_3020(var_76_float, (var_39_float - var_40_float), (float)0, (float)1);
	var_23_object->SetProperty("health", var_76_float);
	bool var_82_bool; object var_83_object;
	var_23_object = var_83_object;
	func_2851(var_82_bool, var_83_object);
	if(var_82_bool != 0) {
		float var_86_float = -var_40_float;
		func_3125(var_86_float);
	}
	var_40_float = var_22_float;
	
}


void func_1363(int var_685_int)
{
	var_685_int = 2;
}


void func_1365(bool var_0_bool)
{
	string var_606_string; string var_607_string; int var_608_int; bool var_609_bool; float var_610_float; cvector var_612_cvector; object var_613_object; int var_614_int; cvector var_615_cvector; object var_616_object; int var_617_int; cvector var_618_cvector; float var_619_float; float var_620_float; float var_621_float; object var_622_object; float var_623_float; object var_624_object; object var_625_object; int var_626_int; int var_627_int; object var_628_object; bool var_629_bool;
	var_0_bool = false;
	
Label_1367:
	bool var_630_bool;
	func_1282(var_630_bool);
	if(!var_630_bool) { //@nz
	} else {
		@GetCurrentWeapon(var_606_string);
		var_607_string = "attack1";
		@SetAttackState(true);
		func_1323();
		@PlayAnimation(var_607_string + "_phase1");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 48;
		@TriggerWeapon("shot");
		string var_681_string;
		func_1355(var_681_string);
		@PlaySound(var_681_string + "_shot");
		int var_684_int;
		int var_685_int;
		func_1363(var_685_int);
		var_685_int = var_684_int;
		func_3451(var_684_int);
		func_1600();
		@SetAttackState(false);
		int var_687_int;
		func_1317(var_687_int);
		var_687_int = var_608_int;
		float var_688_float;
		func_1357(var_688_float);
		var_610_float = var_688_float / var_608_int;
		float var_692_float;
		func_1319(var_692_float);
		float var_696_float;
		func_3440(var_696_float);
		@GetDirection(var_612_cvector);
		object var_699_object;
		func_3048(var_699_object);
		var_699_object = var_613_object;
		var_614_int = 0;

		for(;;) {
			if(var_614_int < var_608_int) {
				@RandVecCone3D(var_615_cvector, var_612_cvector, (1.0 / (1.5 + (((1.0 / var_692_float) - 1.5) * var_696_float))));
				@GetVictimMaterialExact(var_616_object, var_617_int, var_618_cvector, var_615_cvector, 10000);
				if(var_616_object != 0) {
					var_610_float = var_619_float;
					if(var_617_int == 4)
						var_619_float *= 3.0;
					float var_708_float; object var_709_object; float var_710_float; int var_711_int;
					var_616_object = var_709_object;
					var_619_float = var_710_float;
					int var_712_int;
					func_1359(var_712_int);
					var_712_int = var_711_int;
					func_2897(var_708_float, var_709_object, var_710_float, var_711_int);
					var_708_float = var_620_float;
					if(var_620_float != 0) {
						var_613_object->add(var_616_object);
						int var_714_int;
						func_1361(var_714_int);
						@ReportHit(var_616_object, var_714_int, var_620_float, var_619_float, var_618_cvector, var_615_cvector);
						bool var_715_bool;
						func_1321(var_715_bool);
						if(var_715_bool != 0) {
							var_616_object->GetProperty("health", var_621_float);
							if(!var_621_float) { //@nz
								@GetVictimMaterialExact(var_622_object, var_617_int, var_618_cvector, var_615_cvector, 10000, var_616_object);
								bool var_719_bool = false;
								if(var_622_object != 0) {
									if(var_622_object != var_616_object)
										var_719_bool = true;
								}
								if(var_719_bool != 0) {
									float var_722_float; object var_723_object; int var_725_int;
									var_622_object = var_723_object;
									int var_727_int;
									func_1359(var_727_int);
									var_727_int = var_725_int;
									func_2897(var_722_float, var_723_object, (var_619_float * 0.75), var_725_int);
									var_722_float = var_623_float;
									if(var_623_float != 0) {
										var_613_object->add(var_622_object);
										int var_729_int;
										func_1361(var_729_int);
										@ReportHit(var_622_object, var_729_int, var_623_float, var_619_float, var_618_cvector, var_615_cvector);
									}
								}
								var_622_object = null;
							}
						}
					} else {
					if(!(var_617_int != -1)) goto Label_1539;
					var_733_bool = !false; //@nz
					if(var_733_bool == 0) goto Label_1539;
					@GetScene(var_624_object);
					@AddActorByType(var_625_object, "scripted", var_624_object, var_618_cvector, [0.0, 0.0, 1.0], "richochet.xml");
					var_625_object->SetScriptProperty("Material", var_617_int);
					var_609_bool = true;
					var_625_object = null;
					var_624_object = null;
			}
				var_613_object->size(var_626_int);
				var_627_int = 0;

				for(;;) {
					if(var_627_int < var_626_int) {
						var_613_object->get(var_628_object, var_627_int);
						@ReportAttack(var_628_object);
						var_739_object = GlobalVars[2];
						var_739_object->in(var_629_bool, var_628_object);
						if(!var_629_bool) { //@nz
							var_741_object = GlobalVars[3];
							var_741_object->add(var_628_object);
							@BroadcastPlayerDamage(var_628_object, false);
						} else {
						@BroadcastPlayerDamage(var_628_object, true);
					}
					@PlayAnimation(var_607_string + "_phase2");
					@WaitForAnimEnd();
					if(var_0_bool != 0)
						return 48;
					func_1332();
					var_613_object = null;
					bool var_755_bool;
					func_1601(var_755_bool);
					if(var_755_bool == 1) goto Label_1367;
					}
					var_628_object = null;
					var_627_int += 1;
				}
				}
			}
		Label_1539:
			var_616_object = null;
			var_614_int += 1;
		}
	}
	
}


void func_3440(float var_380_float)
{
	bool var_383_bool; int var_384_int;
	@GetWeaponProperty(var_383_bool, "durability", var_384_int);
	if(var_383_bool != 0)
		var_380_float = var_384_int / 100.0;
	else
		var_380_float = 1.0;
	
}


void func_3451(int var_412_int)
{
	bool var_416_bool; int var_417_int;
	@GetWeaponProperty(var_416_bool, "durability", var_417_int);
	if(!var_416_bool) //@nz
		var_417_int = 100;
	int var_420_int;
	func_3031(var_420_int, (var_417_int - var_412_int), 0, 100);
	var_420_int = var_417_int;
	@SetWeaponProperty(var_416_bool, "durability", var_417_int);
}


// @pe
void func_3469(float var_377_float, float var_378_float)
{
	float var_380_float;
	func_3440(var_380_float);
	var_377_float = var_378_float + (var_380_float * (1 - var_378_float));
}


void func_3478(bool var_13_bool, int var_14_int)
{
	int var_26_int; int var_27_int; int var_28_int; int var_29_int; bool var_30_bool; bool var_31_bool; int var_32_int; object var_33_object; int var_34_int; bool var_35_bool; bool var_36_bool;
	int var_37_int;
	func_3186(var_37_int);
	if(var_37_int == 0) {
		var_26_int = 0;
		@GetVariable("birdMaskAchievement", var_26_int);
		if(var_26_int == 0) {
			@GetItemCount(var_27_int, 1);
			@GetInvItemByName(var_28_int, "bird_mask");
			@GetInvItemByName(var_29_int, "bird_balahon");
			var_30_bool = false;
			var_31_bool = false;
			var_32_int = 0;

			for(;;) {
				if(var_32_int < var_27_int) {
					@GetItem(var_33_object, var_32_int, 1);
					var_33_object->GetItemID(var_34_int);
					if(var_34_int == var_28_int) {
						@IsItemSelected(var_35_bool, var_32_int, 1);
						if(var_35_bool != 0)
							var_30_bool = true;
					} else {
					if(!(var_34_int == var_29_int)) goto Label_3528;
					@IsItemSelected(var_36_bool, var_32_int, 1);
					if(var_36_bool == 0) goto Label_3528;
				}
				bool var_58_bool = false;
				if(var_30_bool != 0) {
					if(true != 0)
						var_58_bool = true;
				}
				if(var_58_bool != 0) {
					@SetVariable("birdMaskAchievement", 1);
					@UnlockAchievement("ACHIEVEMENT_THEY");
				}
		}
	}
		bool var_64_bool; int var_65_int;
		var_14_int = var_65_int;
		func_3192(var_64_bool, var_65_int);
		var_64_bool = var_13_bool;
		}
	Label_3528:
		var_33_object = null;
		var_32_int += 1;
	}
	
}


void func_2970(bool var_130_bool, object var_131_object)
{
	bool var_133_bool;
	var_131_object->IsDead(var_133_bool);
	var_133_bool = var_130_bool;
}


// @pe
void func_2975(string var_85_string, int var_86_int)
{
	if(var_86_int == 1) {
		var_85_string = "wood";
		return 0;
	EMIT "GOTO 0xbbd";
	}
	if(var_86_int == 2) {
		var_85_string = "metal";
		return 0;
	EMIT "GOTO 0xbbd";
	}
	if(var_86_int == 3) {
		var_85_string = "ground";
		return 0;
	EMIT "GOTO 0xbbd";
	}
	if(var_86_int == 4) {
		var_85_string = "water";
		return 0;
	EMIT "GOTO 0xbbd";
	}
	if(var_86_int == 5) {
		var_85_string = "carpet";
		return 0;
	}
	var_85_string = "stone";
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


void func_1965(bool var_872_bool)
{
	var_872_bool = false;
}


void func_1967(bool var_920_bool)
{
	bool var_922_bool;
	@IsShooting(var_922_bool);
	var_922_bool = var_920_bool;
}


// @pe
void func_1972(void)
{
	func_1996();
	bool var_47_bool;
	func_3404(var_47_bool, "revolver_ammo", 6);
	if(var_47_bool != 0) {
		string var_50_string;
		func_1994(var_50_string);
		@PlaySound(var_50_string + "_reload");
		@PlayAnimation("reload");
		@WaitForAnimEnd();
	}
}


void func_444(void)
{
}


void func_445(bool var_70_bool)
{
	var_70_bool = false;
}


void func_3007(object var_26_object)
{
	object var_28_object;
	@self(var_28_object);
	var_28_object = var_26_object;
}
EMIT "Stack[-1] = 0";


void func_447(bool var_225_bool)
{
	bool var_227_bool;
	@IsShooting(var_227_bool);
	var_227_bool = var_225_bool;
}


// @pe
void func_2495(string var_63_string)
{
	if(var_63_string == "empty") {
		TaskCall(3);
		func_465(var_66_bool);
		TaskReturn();
	} else if(var_63_string == "scalpel") {
			TaskCall(4);
			func_753(var_286_bool);
			TaskReturn();
	}

	
	if(var_63_string == "knife") {
		TaskCall(5);
		func_1039(var_445_bool);
		TaskReturn();
	} else if(var_63_string == "rifle") {
		TaskCall(6);
		func_1365(var_581_bool);
		TaskReturn();
	} else if(var_63_string == "revolver") {
		TaskCall(8);
		func_1740(var_760_bool);
		TaskReturn();
	} else if(var_63_string == "samopal") {
		TaskCall(10);
		func_2106(var_925_bool);
		TaskReturn();
	} else if(var_63_string == "lockpick") {
		TaskCall(12);
		func_2363(var_1090_bool, var_1091_bool);
		TaskReturn();
	}
}


void func_452(string var_166_string)
{
	var_166_string = "punch";
}


// @pe
void func_3013(float var_66_float, float var_67_float, float var_68_float)
{
	if(var_67_float < var_68_float)
		var_67_float = var_66_float;
	else
		var_68_float = var_66_float;
	
}


// @pe
void func_454(float var_184_float, bool var_185_bool)
{
	if(var_185_bool != 0)
		var_184_float = 0.3;
	else
		var_184_float = 0.2;
	
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


void func_1997(bool var_974_bool)
{
	bool var_977_bool; bool var_978_bool;
	@GetWeaponProperty(var_977_bool, "ammo", var_978_bool);
	bool var_980_bool = true;
	var_981_bool = !var_977_bool; //@nz
	if(var_981_bool != 1) {
		var_982_bool = !var_978_bool; //@nz
		if(var_982_bool != 1)
			var_980_bool = false;
	}
	if(var_980_bool != 0) {
		bool var_983_bool;
		func_3404(var_983_bool, "samopal_ammo", 2);
		if(!var_983_bool) { //@nz
			string var_987_string;
			func_2096(var_987_string);
			@PlaySound(var_987_string + "_noammo");
			@PlayAnimation("noammo");
			@WaitForAnimEnd();
			var_974_bool = false;
		}
	}
	var_974_bool = true;
}


void func_463(int var_263_int)
{
	var_263_int = 0;
}


// @pe
void func_3020(float var_76_float, float var_77_float, float var_78_float, float var_79_float)
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
					func_2856(var_121_bool, var_122_object, "health");
					if(var_121_bool != 0)
						var_119_bool = true;
				}
				if(var_119_bool != 0) {
					bool var_130_bool; object var_131_object;
					var_93_object = var_131_object;
					func_2970(var_130_bool, var_131_object);
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
						func_3073(var_140_float, var_141_cvector, var_142_cvector);
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
						func_3073(var_178_float, var_179_cvector, var_180_cvector);
						var_96_bool = var_178_float >= 0.49999997;
					} else {
								var_96_bool = false;
			}
							@irand(var_100_int, var_87_int);
							string var_275_string;
							func_711(var_275_string);
							var_99_string = (var_275_string + "attack") + (var_100_int + 1);
							string var_280_string;
							func_452(var_280_string);
							@PlaySound(var_280_string + (var_100_int + 1));
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
			func_2897(var_190_float, var_191_object, var_192_float, var_193_int);
			var_190_float = var_104_float;
			if(var_104_float != 0) {
				@irand(var_105_int, 2);
				string var_257_string;
				func_452(var_257_string);
				@PlaySound((var_257_string + "_hit") + (var_105_int + 1));
				@ReportAttack(var_93_object);
				int var_263_int;
				func_463(var_263_int);
				@ReportHit(var_93_object, var_263_int, var_104_float, var_192_float, var_95_cvector, var_92_cvector);
				var_264_object = GlobalVars[2];
				var_264_object->in(var_106_bool, var_93_object);
				if(!var_106_bool) { //@nz
					var_266_object = GlobalVars[3];
					var_266_object->add(var_93_object);
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
		bool var_271_bool;
		func_713(var_271_bool);
		if(var_271_bool == 1) goto Label_489;
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
void func_3031(int var_420_int, int var_421_int, int var_422_int, int var_423_int)
{
	if(var_421_int < var_422_int) {
		var_422_int = var_420_int;
		return 0;
	}
	if(var_421_int > var_423_int) {
		var_423_int = var_420_int;
		return 0;
	}
	var_421_int = var_420_int;
}


void func_989(bool var_336_bool)
{
	var_336_bool = false;
}


void func_991(string var_328_string)
{
	var_328_string = "";
}


void func_993(bool var_430_bool)
{
	bool var_432_bool;
	@IsShooting(var_432_bool);
	var_432_bool = var_430_bool;
}


void func_3042(object var_37_object)
{
	object var_39_object;
	@CreateObjectSet(var_39_object);
	var_39_object = var_37_object;
}
EMIT "Stack[-1] = 0";


void func_998(bool var_495_bool)
{
	var_495_bool = true;
}


void func_1000(string var_516_string)
{
	var_516_string = "knife";
}


void func_3048(object var_699_object)
{
	object var_701_object;
	@CreateObjectVector(var_701_object);
	var_701_object = var_699_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1002(float var_534_float, bool var_535_bool)
{
	if(var_535_bool != 0)
		var_534_float = 0.7;
	else
		var_534_float = 0.4;
	
}


// @pe
void func_3054(float var_143_float, cvector var_144_cvector, cvector var_145_cvector)
{
	var_146_float = GetByIndex(var_144_cvector, 0);
	var_147_float = GetByIndex(var_145_cvector, 0);
	var_149_float = GetByIndex(var_144_cvector, 2);
	var_150_float = GetByIndex(var_145_cvector, 2);
	var_143_float = (var_146_float * var_147_float) + (var_149_float * var_150_float);
}


void func_2032(int var_1011_int)
{
	var_1011_int = 5;
}


void func_1009(float var_539_float)
{
	var_539_float = 0.5;
}


void func_2034(float var_1016_float)
{
	var_1016_float = 0.03926991;
}


void func_1011(int var_562_int)
{
	var_562_int = 4;
}


void func_2036(void)
{
	bool var_995_bool; int var_996_int;
	@GetWeaponProperty(var_995_bool, "ammo", var_996_int);
	@SetWeaponProperty(var_995_bool, "ammo", (var_996_int - 1));
	func_3870();
}


void func_1013(int var_547_int)
{
	var_547_int = 0;
}


void func_1015(int var_556_int)
{
	var_556_int = 1;
}


// @pe
void func_3063(float var_152_float, cvector var_153_cvector)
{
	var_154_float = GetByIndex(var_153_cvector, 0);
	var_155_float = GetByIndex(var_153_cvector, 0);
	var_157_float = GetByIndex(var_153_cvector, 2);
	var_158_float = GetByIndex(var_153_cvector, 2);
	var_152_float = sqrt((var_154_float * var_155_float) + (var_157_float * var_158_float));
}


// @pe
void func_1017(float var_532_float, bool var_533_bool)
{
	bool var_535_bool;
	var_533_bool = var_535_bool;
	float var_534_float;
	func_1002(var_534_float, var_535_bool);
	float var_537_float; float var_538_float;
	float var_539_float;
	func_1009(var_539_float);
	var_539_float = var_538_float;
	func_3469(var_537_float, var_538_float);
	var_532_float = var_534_float * var_537_float;
}


// @pe
void func_2559(string var_17_string)
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
Label_2586:
	for(;;) {

	}
	
	if(!(var_17_string == "samopal")) goto Label_2586;
	TaskCall(11);
	func_2338();
	TaskReturn();
}


