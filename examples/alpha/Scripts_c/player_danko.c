// @GLOBALS: 0:string:,1:object:

task task_0
{
	// @pe
	void OnTimer(int iID, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			func_3034();
		} else if(var_16_bool == 11) {
			func_3038();
		}
	
	}

}


task task_1
{
	void OnPlayerStopAltShooting(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool)
	{
		if(var_1_bool != 0)
			@StopAnimation();
	}

	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, int var_2_int, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			var_0_bool = true;
			if(var_1_bool != 0)
				@StopAnimation();
		} else {
			int var_20_int;
			var_16_bool = var_20_int;
			func_3139();
		}
	
	}

	// @pe
	void OnHit(bool var_0_bool, bool var_1_bool, object var_2_object, int var_3_int, float var_4_float, float var_5_float, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		if(var_1_bool != 0)
			@PlayAnimation("hitblock");
	}

}


task task_2
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			var_0_bool = true;
		} else {
			int var_19_int;
			var_16_bool = var_19_int;
			func_3139();
		}
	
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			func_3034();
		} else if(var_16_bool == 11) {
			func_3038();
		}
	
	}

}


task task_3
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, int var_4_int, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			var_0_bool = true;
		} else {
			int var_19_int;
			var_16_bool = var_19_int;
			func_3139();
		}
	
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, int var_4_int, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			func_3034();
		} else if(var_16_bool == 11) {
			func_3038();
		}
	
	}

}


task task_4
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, int var_5_int, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			var_0_bool = true;
		} else {
			int var_19_int;
			var_16_bool = var_19_int;
			func_3139();
		}
	
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, int var_5_int, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			func_3034();
		} else if(var_16_bool == 11) {
			func_3038();
		}
	
	}

}


task task_5
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, int var_6_int, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			var_0_bool = true;
		} else {
			int var_19_int;
			var_16_bool = var_19_int;
			func_3139();
		}
	
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, int var_6_int, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			func_3034();
		} else if(var_16_bool == 11) {
			func_3038();
		}
	
	}

}


task task_6
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, int var_7_int, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			var_0_bool = true;
		} else {
			int var_19_int;
			var_16_bool = var_19_int;
			func_3139();
		}
	
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, int var_7_int, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			func_3034();
		} else if(var_16_bool == 11) {
			func_3038();
		}
	
	}

}


task task_7
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			var_0_bool = true;
		} else {
			int var_19_int;
			var_16_bool = var_19_int;
			func_3139();
		}
	
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			func_3034();
		} else if(var_16_bool == 11) {
			func_3038();
		}
	
	}

}


task task_8
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			var_0_bool = true;
		} else {
			int var_19_int;
			var_16_bool = var_19_int;
			func_3139();
		}
	
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			func_3034();
		} else if(var_16_bool == 11) {
			func_3038();
		}
	
	}

}


task task_9
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, int var_10_int, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			var_0_bool = true;
		} else {
			int var_19_int;
			var_16_bool = var_19_int;
			func_3139();
		}
	
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, int var_10_int, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			func_3034();
		} else if(var_16_bool == 11) {
			func_3038();
		}
	
	}

}


task task_10
{
	void OnDispose(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool)
	{
		if(var_0_bool != null)
			@RemoveActor(var_0_bool);
		@RemoveAttachPoint("flame");
	}

	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, int var_13_int, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			var_2_bool = true;
		} else {
			int var_19_int;
			var_16_bool = var_19_int;
			func_3139();
		}
	
	}

	void OnPlayerStartShooting(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool)
	{
		bool var_16_bool;
		func_2127(var_16_bool);
		if(var_16_bool != 0) {
			var_1_bool = false;
			var_0_bool->SetLength(0.8333333); //@t
		}
	}

	void OnPlayerStopShooting(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool)
	{
		func_1978(var_14_bool, var_15_bool);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, int var_13_int, bool var_14_bool, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			func_3034();
		} else if(var_16_bool == 11) {
				func_3038();
		}
	Label_2004:
		for(;;) {

		}
	
		if(!(var_16_bool == 20)) goto Label_2004;
		func_2005(var_15_bool, var_16_bool);
	}

}


task task_11
{
	// @pe
	void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, int var_14_int, bool var_15_bool, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			var_0_bool = true;
		} else {
			int var_19_int;
			var_16_bool = var_19_int;
			func_3139();
		}
	
	}

}


task task_12
{
	void OnDispose(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool)
	{
		bool var_16_bool = false;
		if(!var_0_bool) { //@nz
			if(var_1_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0)
			@SetHandsItem(-1);
	}

}


maintask task_13
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool)
	{
		bool var_22_bool; bool var_23_bool;
		var_24_object = GlobalVars[1];
		object var_25_object;
		func_2806(var_25_object);
		var_25_object = var_24_object;
		GlobalVars[1] = var_24_object;
		bool var_20_bool;
		@HasProperty("effects", var_20_bool);
		if(!var_20_bool) { //@nz
			@SetProperty("effects", true);
			@ApplyEffect("player_disease.bin");
			@ApplyEffect("player_stat.bin");
			@ApplyEffect("player_hit.bin");
			@ApplyEffect("player_head.bin");
			@ApplyEffect("player_flashlight.bin");
			@ApplyEffect("player_visir.bin");
		}
		func_2633();
		float var_21_float;
		@GetProperty("health", var_21_float);
		if(var_21_float <= 0)
			func_2976();
		for(;;) {
			@IsWeaponHolstered(var_22_bool);
			var_55_bool = !var_22_bool; //@nz
			if(var_55_bool == 0) goto Label_2528;
			@IsWalking(var_23_bool);
			if(var_23_bool != 0) {
				@PlayAnimation("walk");
				@WaitForAnimEnd();
			} else {
			@Sleep(0.1);
			}
		}
	
	}
	EMIT "Return(); Pop(8)";

	void OnPlayerStartShooting(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool, string var_17_string, bool var_18_bool, bool var_19_bool, string var_20_string, bool var_21_bool)
	{
		bool var_58_bool; string var_59_string; bool var_60_bool;
		@IsWeaponHolstered(var_58_bool);
		if(!var_58_bool) { //@nz
			func_2637();
			@GetCurrentWeapon(var_59_string);
			string var_62_string;
			var_59_string = var_62_string;
			func_2356(var_62_string);
			func_2633();
			@IsAltShooting(var_60_bool);
			if(var_60_bool != 0)
				func_2558();
		}
	}

	void OnPlayerStartAltShooting(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool)
	{
		bool var_19_bool; string var_20_string; bool var_21_bool;
		@IsWeaponHolstered(var_19_bool);
		if(!var_19_bool) { //@nz
			func_2637();
			@GetCurrentWeapon(var_20_string);
			string var_24_string;
			var_20_string = var_24_string;
			func_2456(var_24_string);
			func_2633();
			@IsShooting(var_21_bool);
			if(var_21_bool != 0)
				func_2533();
		}
	}

	void OnPlayerHolsterWeapon(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool)
	{
		func_2637();
		TaskCall(0);
		func_0();
		TaskReturn();
		func_2633();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, int var_16_int)
	{
		int var_20_int;
		if(var_16_int == 10) {
			func_3034();
			return 4;
		EMIT "GOTO 0xa33";
		}
		if(var_16_int == 11) {
			func_3038();
			return 4;
		}
		func_2637();
		bool var_19_bool;
		@IsWeaponHolstered(var_19_bool);
		if(!var_19_bool) { //@nz
			@irand(var_20_int, 2);
			@PlayAnimation("idle" + (var_20_int + 1));
			@WaitForAnimEnd();
		}
		func_2633();
	}

}


// @pe
void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, string var_16_string)
{
	if(var_16_string == "die")
		func_2976();
}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, object var_16_object, string var_17_string)
{
	float var_19_float;
	if(var_17_string == "health") {
		@GetProperty("health", var_19_float);
		if(var_19_float <= 0)
			@SignalDeath(var_16_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, object var_16_object)
{
	func_2976();
}


void OnReputationChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, object var_16_object, float var_17_float)
{
	var_20_object = GlobalVars[1];
	bool var_19_bool;
	var_20_object->in(var_19_bool, var_16_object);
	if(var_19_bool != 0) {
	}
	var_22_object = GlobalVars[1];
	var_22_object->add(var_16_object);
	bool var_23_bool; float var_25_float;
	var_17_float = var_25_float;
	func_2668(var_23_bool, "reputation", var_25_float, (float)0, (float)1);
}


void OnPlayerLand(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool)
{
	func_3281();
	func_3002();
}


void OnPlayerStartWalking(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool)
{
	func_3023();
	func_2992();
}


void OnPlayerStopWalking(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool)
{
	func_3013();
	func_3002();
}


// @pe
void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, object var_16_object)
{
}


void OnFallDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, float var_16_float)
{
	float var_19_float; float var_20_float;
	if(var_16_float > 770.0) {
		@Trace(var_16_float);
		var_19_float = (var_16_float - 770.0) * 0.0034999999;
		float var_26_float; object var_27_object; float var_28_float;
		object var_30_object;
		func_2771(var_30_object);
		var_30_object = var_27_object;
		func_2687(var_26_float, var_27_object, var_28_float, 0);
		var_26_float = var_20_float;
		object var_85_object;
		func_2771(var_85_object);
		@ReportHit(var_85_object, 0, var_20_float, var_28_float);
	}
}


void OnAction(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, int var_16_int)
{
	object var_29_object; object var_30_object; object var_31_object; cvector var_32_cvector; string var_33_string; bool var_34_bool; cvector var_35_cvector; bool var_36_bool; bool var_37_bool; int var_38_int; int var_39_int; bool var_40_bool;
	if(var_16_int == 0) {
		@Inventory();
	} else {
			if(var_16_int == 1) {
				@GetMainOutdoorScene(var_29_object);
				@GetActiveScene(var_30_object);
				if(var_29_object == null) {
					@Trace("Can't find main outdoor oscene");
					return 24;
				}
				var_29_object->GetMap(var_31_object);
				if(var_31_object == null) {
					@Trace("Can't find map");
					return 24;
				}
				if(var_29_object == var_30_object) {
					@GetPosition(var_32_cvector);
				} else {
				var_30_object->GetName(var_33_string);
				var_29_object->GetLocator(("pt_gmap_" + var_33_string), var_34_bool, var_32_cvector, var_35_cvector);
				var_54_bool = !var_34_bool; //@nz
				if(var_54_bool == 0) goto Label_3185;
				@Trace("FIXME: No map locator for scene : " + var_33_string);
				var_32_cvector = [0.0, 0.0, 0.0];
			}
			if(var_16_int == 2) {
				@Diary();
			} else if(var_16_int == 3) {
				@ShowMessage();
			} else if(var_16_int == 4) {
				@ShowPlayerStats();
			}
			if(var_16_int == 5) {
				@IsFlashlightOn(var_36_bool);
				if(var_36_bool != 0) {
					@SwitchFlashlight(false);
					@PlaySound("flashlight_off");
				} else {
						bool var_68_bool;
						func_2848(var_68_bool);
						if(var_68_bool == 0) goto Label_3238;
						@SwitchFlashlight(true);
						@PlaySound("flashlight_on");
				}
				for(;;) {
					goto Label_3280;

				}

			Label_3238:
				@PlaySound("flashlight_nofuel");
			}
			if(var_16_int == 6) {
				@IsVisirOn(var_37_bool);
				if(var_37_bool != 0) {
					@SwitchVisir(false);
				} else {
						@GetProperty("visir", var_38_int);
						if(var_38_int == 0) goto Label_3268;
						@GetProperty("vcharge", var_39_int);
						if(!(var_39_int >= 10)) goto Label_3268;
						@SwitchVisir(true);
				}
			Label_3268:
				for(;;) {
					goto Label_3280;

				}
			}
			if(!(var_16_int == 7)) goto Label_3280;
			@IsOverrideActive(var_40_bool);
			var_87_bool = !var_40_bool; //@nz
			if(var_87_bool == 0) goto Label_3280;
			@ShowWindow("people.xml", true);
			}
		Label_3185:
			var_50_float = GetByIndex(var_32_cvector, 0);
			var_51_float = GetByIndex(var_32_cvector, 2);
			var_31_object->SetMapParams(var_50_float, var_51_float);
			@ShowMap(var_31_object);
			var_31_object = null;
			var_30_object = null;
			var_29_object = null;
	}
Label_3280:
	for(;;) {
		return 24;

	}
	
}


void func_0(void)
{
	bool var_18_bool;
	@IsWeaponHolstered(var_18_bool);
	if(var_18_bool != 0) {
		@SetWeaponHolster(false);
		@PlayAnimation("unholster");
		@WaitForAnimEnd();
	} else {
		@PlayAnimation("holster");
		@WaitForAnimEnd();
		@SetWeaponHolster(true);
	}
	
}


void func_518(float var_396_float)
{
	var_396_float = 0.5;
}


void func_520(int var_412_int)
{
	var_412_int = 1;
}


void func_522(int var_401_int)
{
	var_401_int = 0;
}


void func_524(int var_410_int)
{
	var_410_int = 0;
}


// @pe
void func_526(float var_389_float, bool var_390_bool)
{
	bool var_392_bool;
	var_390_bool = var_392_bool;
	float var_391_float;
	func_511(var_391_float, var_392_bool);
	float var_394_float; float var_395_float;
	float var_396_float;
	func_518(var_396_float);
	var_396_float = var_395_float;
	func_2908(var_394_float, var_395_float);
	var_389_float = var_391_float * var_394_float;
}


void func_540(void)
{
	int var_412_int;
	func_520(var_412_int);
	int var_411_int;
	var_412_int = var_411_int;
	func_2889(var_411_int);
}


void func_548(bool var_0_bool)
{
	bool var_350_bool; string var_351_string; int var_352_int; string var_353_string; float var_354_float; object var_355_object; bool var_356_bool; cvector var_357_cvector; cvector var_358_cvector; float var_359_float; float var_360_float; int var_361_int;
	var_0_bool = false;
	int var_348_int = 0;
	
	for(;;) {
		var_348_int += 1;
		@HasAnimation(var_350_bool, (("attack" + var_348_int) + "_phase1"));
		if(!var_350_bool) { //@nz
			break;
		Label_568:
			@GetCurrentWeapon(var_351_string);
			@irand(var_352_int, var_348_int);
			var_353_string = "attack" + (var_352_int + 1);
			string var_372_string;
			func_509(var_372_string);
			@PlaySound(var_372_string + (var_352_int + 1));
			@SetAttackState(true);
			@PlayAnimation(var_353_string + "_phase1");
			@WaitForAnimEnd();
			if(var_0_bool != 0)
				return 28;
			@SetAttackState(false);
			@GetAttackDistance(var_354_float);
			@GetVictim(var_354_float, var_355_object);
			if(var_355_object != null) {
				var_384_bool = IsFuncExist(var_355_object, "GetDirection", 1);
				if(var_384_bool != 0) {
					@GetDirection(var_357_cvector);
					var_355_object->GetDirection(var_358_cvector);
					float var_385_float; cvector var_386_cvector; cvector var_387_cvector;
					var_357_cvector = var_386_cvector;
					var_358_cvector = var_387_cvector;
					func_2831(var_385_float, var_386_cvector, var_387_cvector);
					var_356_bool = var_385_float >= 0.49999997;
				} else {
					var_356_bool = false;
		}
			}
			float var_389_float; bool var_390_bool;
			var_356_bool = var_390_bool;
			func_526(var_389_float, var_390_bool);
			var_389_float = var_359_float;
			float var_397_float; object var_398_object; float var_399_float; int var_400_int;
			var_355_object = var_398_object;
			int var_401_int;
			func_522(var_401_int);
			var_401_int = var_400_int;
			func_2687(var_397_float, var_398_object, var_399_float, var_400_int);
			var_397_float = var_360_float;
			if(var_360_float != 0) {
				@irand(var_361_int, 2);
				string var_404_string;
				func_509(var_404_string);
				@PlaySound((var_404_string + "_hit") + (var_361_int + 1));
				@ReportAttack(var_355_object);
				int var_410_int;
				func_524(var_410_int);
				@ReportHit(var_355_object, var_410_int, var_360_float, var_399_float);
				@BroadcastPlayerDamage(var_355_object);
			}
			func_540();
		}
		@PlayAnimation(var_353_string + "_phase2");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 28;
		var_355_object = null;
		bool var_416_bool;
		func_705(var_416_bool);
		if(var_416_bool == 1) goto Label_568;
		return 28;

	}
	var_368_bool = !(var_348_int + -1); //@nz
	if(var_368_bool == 0) goto Label_568;
}


// @pe
void func_38(bool var_0_bool, bool var_1_bool, float var_27_float)
{
	var_0_bool = false;
	var_1_bool = false;
	
Label_41:
	@PlayAnimation("block");
	@WaitForAnimEnd();
	if(var_0_bool != 0)
		return 0;
	float var_33_float;
	func_2661("armor_phys", var_33_float);
	var_1_bool = true;
	
	for(;;) {
		bool var_37_bool = false;
		bool var_38_bool;
		func_93(var_38_bool);
		if(var_38_bool != 0) {
			if(!var_0_bool) //@nz
				var_37_bool = true;
		}
		if(var_37_bool == 0) goto Label_71;
		@PlayAnimation("walkblock");
		@WaitForAnimEnd();
	}
	
Label_71:
	var_1_bool = false;
	float var_44_float = -var_33_float;
	func_2661("armor_phys", var_44_float);
	if(var_0_bool != 0)
		return 0;
	@PlayAnimation("unblock");
	@WaitForAnimEnd();
	if(var_0_bool != 0)
		return 0;
	bool var_48_bool;
	func_93(var_48_bool);
	if(var_48_bool == 1) goto Label_41;
}


void func_1602(void)
{
}


void func_1603(bool var_832_bool)
{
	bool var_834_bool;
	@IsShooting(var_834_bool);
	var_834_bool = var_832_bool;
}


void func_1608(bool var_878_bool)
{
	bool var_881_bool; bool var_882_bool;
	@GetWeaponProperty(var_881_bool, "ammo", var_882_bool);
	bool var_884_bool = true;
	var_885_bool = !var_881_bool; //@nz
	if(var_885_bool != 1) {
		var_886_bool = !var_882_bool; //@nz
		if(var_886_bool != 1)
			var_884_bool = false;
	}
	if(var_884_bool != 0) {
		bool var_887_bool;
		func_2854(var_887_bool, "samopal_ammo", 2);
		if(!var_887_bool) { //@nz
			@PlayAnimation("noammo");
			@WaitForAnimEnd();
			var_878_bool = false;
		}
	}
	var_878_bool = true;
}


void func_2633(void)
{
	func_3281();
}


void func_2637(void)
{
	@KillTimer(0);
}


void func_2127(bool var_962_bool)
{
	int var_965_int;
	@GetInvItemByName(var_965_int, "ognemet_ammo");
	bool var_966_bool;
	@RemoveItemByType(var_966_bool, var_965_int, 1);
	var_966_bool = var_962_bool;
}


// @pe
void func_2641(string var_60_string, int var_61_int)
{
	if(var_61_int == 1)
		var_60_string = "fire";
	var_60_string = "phys";
}


void func_1107(bool var_592_bool)
{
	bool var_594_bool;
	@IsShooting(var_594_bool);
	var_594_bool = var_592_bool;
}


void func_1112(bool var_638_bool)
{
	bool var_641_bool; bool var_642_bool;
	@GetWeaponProperty(var_641_bool, "ammo", var_642_bool);
	bool var_644_bool = true;
	var_645_bool = !var_641_bool; //@nz
	if(var_645_bool != 1) {
		var_646_bool = !var_642_bool; //@nz
		if(var_646_bool != 1)
			var_644_bool = false;
	}
	if(var_644_bool != 0) {
		bool var_647_bool;
		func_2854(var_647_bool, "rifle_ammo", 1);
		if(!var_647_bool) { //@nz
			@PlayAnimation("noammo");
			@WaitForAnimEnd();
			var_638_bool = false;
		}
	}
	var_638_bool = true;
}


void func_2136(float var_98_float)
{
	var_98_float = 0.065;
}


void func_2138(int var_110_int)
{
	var_110_int = 1;
}


void func_2649(bool var_45_bool, object var_46_object, string var_47_string)
{
	var_52_bool = IsFuncExist(var_46_object, "HasProperty", 2);
	if(!var_52_bool) { //@nz
		var_45_bool = false;
		return 2;
	}
	bool var_49_bool;
	var_46_object->HasProperty(var_47_string, var_49_bool);
	var_49_bool = var_45_bool;
}


void func_2140(int var_176_int)
{
	var_176_int = 4;
}


void func_93(bool var_38_bool)
{
	bool var_40_bool;
	@IsAltShooting(var_40_bool);
	var_40_bool = var_38_bool;
}


void func_2142(bool var_992_bool)
{
	bool var_994_bool;
	@IsShooting(var_994_bool);
	var_994_bool = var_992_bool;
}


void func_2147(bool var_0_bool)
{
	var_0_bool = false;
	@PlayAnimation("attack1");
	@WaitForAnimEnd();
	if(var_0_bool != 0)
		return 14;
	cvector var_1008_cvector;
	@GetDirection(var_1008_cvector);
	cvector var_1009_cvector;
	@GetPosition(var_1009_cvector);
	float var_1010_float;
	@GetEyesHeight(var_1010_float);
	var_1017_float = GetByIndex(var_1009_cvector, 1);
	SetByIndex(var_1009_cvector, 1) = (var_1017_float + var_1010_float);
	object var_1011_object;
	@GetScene(var_1011_object);
	object var_1012_object;
	@AddActorByType(var_1012_object, "scripted", var_1011_object, (var_1009_cvector + (var_1008_cvector * 10)), [0.0, 0.0, 1.0], "player_grenade.xml");
	object var_1024_object;
	func_2771(var_1024_object);
	var_1012_object->SetScriptProperty("Owner", var_1024_object);
	var_1012_object->SetScriptProperty("StartVelocity", (var_1008_cvector * 1000));
	float var_1029_float;
	func_2246(var_1029_float);
	var_1012_object->SetScriptProperty("DamageAmount", var_1029_float);
	int var_1031_int;
	func_2248(var_1031_int);
	var_1012_object->SetScriptProperty("DamageType", var_1031_int);
	int var_1013_int;
	@GetInvItemByName(var_1013_int, "bottle_weapon");
	bool var_1014_bool;
	@RemoveItemByType(var_1014_bool, var_1013_int, 1);
	@SelectAnyItemByID(var_1014_bool, var_1013_int, 0);
	@PlayAnimation("attack2");
	@WaitForAnimEnd();
	if(var_0_bool != 0)
		return 14;
	if(var_1014_bool != 0) {
		@PlayAnimation("aunholster");
		@WaitForAnimEnd();
	} else {
		@SetHandsItem(-1);
		@PlayAnimation("unholster");
		@WaitForAnimEnd();
	}
	
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


void func_1636(int var_910_int)
{
	var_910_int = 5;
}


void func_2661(string var_32_string, float var_33_float)
{
	float var_35_float;
	@GetProperty(var_32_string, var_35_float);
	@SetProperty(var_32_string, (var_35_float + var_33_float));
}


void func_1638(float var_912_float)
{
	var_912_float = 0.17453294;
}


void func_1640(void)
{
	bool var_897_bool; int var_898_int;
	@GetWeaponProperty(var_897_bool, "ammo", var_898_int);
	@SetWeaponProperty(var_897_bool, "ammo", (var_898_int - 1));
}


void func_2668(bool var_23_bool, string var_24_string, float var_25_float, float var_26_float, float var_27_float)
{
	bool var_30_bool;
	@HasProperty(var_24_string, var_30_bool);
	if(!var_30_bool) //@nz
		var_23_bool = false;
	float var_31_float;
	@GetProperty(var_24_string, var_31_float);
	float var_33_float; float var_35_float; float var_36_float;
	var_26_float = var_35_float;
	var_27_float = var_36_float;
	func_2784(var_33_float, (var_31_float + var_25_float), var_35_float, var_36_float);
	@SetProperty(var_24_string, var_33_float);
	var_23_bool = true;
}


void func_1650(void)
{
	bool var_937_bool; bool var_938_bool;
	@GetWeaponProperty(var_937_bool, "ammo", var_938_bool);
	bool var_940_bool = true;
	var_941_bool = !var_937_bool; //@nz
	if(var_941_bool != 1) {
		var_942_bool = !var_938_bool; //@nz
		if(var_942_bool != 1)
			var_940_bool = false;
	}
	if(var_940_bool != 0) {
		bool var_943_bool;
		func_2854(var_943_bool, "samopal_ammo", 2);
		if(var_943_bool != 0) {
			string var_946_string;
			func_1681(var_946_string);
			@PlaySound(var_946_string + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}
}


void func_1140(int var_680_int)
{
	var_680_int = 1;
}


void func_1142(float var_682_float)
{
	var_682_float = 0.017453292;
}


void func_1144(void)
{
	bool var_670_bool;
	@SetWeaponProperty(var_670_bool, "ammo", false);
}


void func_125(string var_104_string)
{
	var_104_string = "punch";
}


void func_1150(void)
{
	bool var_707_bool;
	func_2854(var_707_bool, "rifle_ammo", 1);
	if(var_707_bool != 0) {
		string var_710_string;
		func_1169(var_710_string);
		@PlaySound(var_710_string + "_reload");
		@PlayAnimation("reload");
		@WaitForAnimEnd();
	}
}


void func_2687(float var_26_float, object var_27_object, float var_28_float, int var_29_int)
{
	int var_39_int; int var_41_int;
	object var_46_object;
	var_27_object = var_46_object;
	bool var_45_bool;
	func_2649(var_45_bool, var_46_object, "health");
	if(!var_45_bool) //@nz
		var_26_float = 0.0;
	bool var_55_bool; object var_56_object;
	func_2649(var_55_bool, var_56_object, "armor");
	if(!var_55_bool) //@nz
		var_39_int = 0;
	else
		var_56_object->GetProperty("armor", var_39_int);
	string var_60_string; int var_61_int;
	var_29_int = var_61_int;
	func_2641(var_60_string, var_61_int);
	string var_40_string = "armor_" + var_60_string;
	bool var_64_bool; object var_65_object; string var_66_string;
	var_27_object = var_65_object;
	func_2649(var_64_bool, var_65_object, var_66_string);
	if(!var_64_bool) //@nz
		var_41_int = 0;
	else
		var_27_object->GetProperty(var_66_string, var_41_int);

	float var_68_float;
	func_2777(var_68_float, ((var_39_int + var_41_int) / 100.0), (float)1);
	float var_42_float;
	var_68_float = var_42_float;
	float var_43_float;
	var_27_object->GetProperty("health", var_43_float);
	float var_78_float;
	func_2784(var_78_float, (var_43_float - (var_28_float * (1 - var_42_float))), (float)0, (float)1);
	var_27_object->SetProperty("health", var_78_float);
	float var_44_float = var_26_float;
	
}


// @pe
void func_127(float var_144_float, bool var_145_bool)
{
	if(var_145_bool != 0)
		var_144_float = 0.4;
	else
		var_144_float = 0.2;
	
}


void func_134(int var_151_int)
{
	var_151_int = 0;
}


void func_136(int var_212_int)
{
	var_212_int = 0;
}


void func_138(bool var_0_bool)
{
	bool var_82_bool; string var_83_string; int var_84_int; string var_85_string; float var_86_float; object var_87_object; bool var_88_bool; cvector var_89_cvector; cvector var_90_cvector; float var_91_float; float var_92_float; int var_93_int;
	var_0_bool = false;
	int var_80_int = 0;
	
	for(;;) {
		var_80_int += 1;
		@HasAnimation(var_82_bool, (("attack" + var_80_int) + "_phase1"));
		if(!var_82_bool) { //@nz
			break;
		Label_158:
			@GetCurrentWeapon(var_83_string);
			@irand(var_84_int, var_80_int);
			var_85_string = "attack" + (var_84_int + 1);
			string var_104_string;
			func_125(var_104_string);
			@PlaySound(var_104_string + (var_84_int + 1));
			@SetAttackState(true);
			@PlayAnimation(var_85_string + "_phase1");
			@WaitForAnimEnd();
			if(var_0_bool != 0)
				return 28;
			@SetAttackState(false);
			@GetAttackDistance(var_86_float);
			@GetVictim(var_86_float, var_87_object);
			if(var_87_object != null) {
				var_116_bool = IsFuncExist(var_87_object, "GetDirection", 1);
				if(var_116_bool != 0) {
					@GetDirection(var_89_cvector);
					var_87_object->GetDirection(var_90_cvector);
					float var_117_float; cvector var_118_cvector; cvector var_119_cvector;
					var_89_cvector = var_118_cvector;
					var_90_cvector = var_119_cvector;
					func_2831(var_117_float, var_118_cvector, var_119_cvector);
					var_88_bool = var_117_float >= 0.49999997;
				} else {
					var_88_bool = false;
		}
			}
			float var_142_float; bool var_143_bool;
			var_88_bool = var_143_bool;
			func_269(var_142_float, var_143_bool);
			var_142_float = var_91_float;
			float var_147_float; object var_148_object; float var_149_float; int var_150_int;
			var_87_object = var_148_object;
			int var_151_int;
			func_134(var_151_int);
			var_151_int = var_150_int;
			func_2687(var_147_float, var_148_object, var_149_float, var_150_int);
			var_147_float = var_92_float;
			if(var_92_float != 0) {
				@irand(var_93_int, 2);
				string var_206_string;
				func_125(var_206_string);
				@PlaySound((var_206_string + "_hit") + (var_93_int + 1));
				@ReportAttack(var_87_object);
				int var_212_int;
				func_136(var_212_int);
				@ReportHit(var_87_object, var_212_int, var_92_float, var_149_float);
				@BroadcastPlayerDamage(var_87_object);
			}
			func_302();
		}
		@PlayAnimation(var_85_string + "_phase2");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 28;
		var_87_object = null;
		bool var_216_bool;
		func_303(var_216_bool);
		if(var_216_bool == 1) goto Label_158;
		return 28;

	}
	var_100_bool = !(var_80_int + -1); //@nz
	if(var_100_bool == 0) goto Label_158;
}


void func_1169(string var_676_string)
{
	var_676_string = "rifle";
}


void func_1681(string var_906_string)
{
	var_906_string = "samopal";
}


void func_1171(float var_681_float)
{
	var_681_float = 1.5;
}


void func_1683(float var_911_float)
{
	var_911_float = 0.8;
}


void func_1173(int var_692_int)
{
	var_692_int = 0;
}


void func_1685(int var_920_int)
{
	var_920_int = 0;
}


void func_1175(int var_694_int)
{
	var_694_int = 2;
}


void func_1687(int var_922_int)
{
	var_922_int = 2;
}


void func_1177(bool var_0_bool)
{
	string var_618_string; int var_619_int; string var_620_string; int var_621_int; bool var_622_bool; float var_623_float; float var_624_float; cvector var_625_cvector; object var_626_object; int var_627_int; cvector var_628_cvector; object var_629_object; int var_630_int; cvector var_631_cvector; float var_632_float; object var_633_object; object var_634_object; object var_635_object; object var_636_object; bool var_637_bool;
	var_0_bool = false;
	
Label_1179:
	bool var_638_bool;
	func_1112(var_638_bool);
	if(!var_638_bool) { //@nz
	} else {
		@GetCurrentWeapon(var_618_string);
		@irand(var_619_int, 2);
		var_620_string = "attack1";
		@SetAttackState(true);
		func_1144();
		@PlayAnimation(var_620_string + "_phase1");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 40;
		string var_676_string;
		func_1169(var_676_string);
		@PlaySound(var_676_string + "_shot");
		func_1346();
		@SetAttackState(false);
		int var_680_int;
		func_1140(var_680_int);
		var_680_int = var_621_int;
		float var_681_float;
		func_1171(var_681_float);
		var_623_float = var_681_float / var_621_int;
		float var_682_float;
		func_1142(var_682_float);
		var_682_float = var_624_float;
		@GetDirection(var_625_cvector);
		object var_683_object;
		func_2806(var_683_object);
		var_683_object = var_626_object;
		var_627_int = 0;

		for(;;) {
			if(var_627_int < var_621_int) {
				@RandVecCone3D(var_628_cvector, var_625_cvector, var_624_float);
				@GetVictimMaterial(var_629_object, var_630_int, var_631_cvector, var_628_cvector);
				if(var_629_object != null) {
					float var_688_float; object var_689_object; float var_690_float; int var_691_int;
					var_629_object = var_689_object;
					int var_692_int;
					func_1173(var_692_int);
					var_692_int = var_691_int;
					func_2687(var_688_float, var_689_object, var_690_float, var_691_int);
					var_688_float = var_632_float;
					if(var_632_float != 0) {
						var_626_object->add(var_629_object);
						int var_694_int;
						func_1175(var_694_int);
						@ReportHit(var_629_object, var_694_int, var_632_float, var_690_float);
					} else {
					if(!(var_630_int != -1)) goto Label_1285;
					var_698_bool = !false; //@nz
					if(var_698_bool == 0) goto Label_1285;
					@GetScene(var_633_object);
					@AddActorByType(var_634_object, "scripted", var_633_object, var_631_cvector, [0.0, 0.0, 1.0], "richochet.xml");
					var_634_object->SetScriptProperty("Material", var_630_int);
					var_622_bool = true;
					var_634_object = null;
					var_633_object = null;
			}
				var_626_object->iterator(var_635_object);

				for(;;) {
					var_635_object->Next(var_637_bool, var_636_object);
					if(var_637_bool == 0) goto Label_1300;
					@ReportAttack(var_636_object);
					@BroadcastPlayerDamage(var_636_object);
				}

			Label_1300:
				@PlayAnimation(var_620_string + "_phase2");
				@WaitForAnimEnd();
				if(var_0_bool != 0)
					return 40;
				func_1150();
				var_636_object = null;
				var_635_object = null;
				var_626_object = null;
				bool var_714_bool;
				func_1347(var_714_bool);
				if(var_714_bool == 1) goto Label_1179;
				}
			}
		Label_1285:
			var_629_object = null;
			var_627_int += 1;
		}
	}
	
}


void func_1689(bool var_0_bool)
{
	string var_858_string; int var_859_int; string var_860_string; int var_861_int; bool var_862_bool; float var_863_float; float var_864_float; cvector var_865_cvector; object var_866_object; int var_867_int; cvector var_868_cvector; object var_869_object; int var_870_int; cvector var_871_cvector; float var_872_float; object var_873_object; object var_874_object; object var_875_object; object var_876_object; bool var_877_bool;
	var_0_bool = false;
	
Label_1691:
	bool var_878_bool;
	func_1608(var_878_bool);
	if(!var_878_bool) { //@nz
	} else {
		@GetCurrentWeapon(var_858_string);
		@irand(var_859_int, 2);
		var_860_string = "attack1";
		@SetAttackState(true);
		func_1640();
		@PlayAnimation(var_860_string + "_phase1");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 40;
		string var_906_string;
		func_1681(var_906_string);
		@PlaySound(var_906_string + "_shot");
		func_1858();
		@SetAttackState(false);
		int var_910_int;
		func_1636(var_910_int);
		var_910_int = var_861_int;
		float var_911_float;
		func_1683(var_911_float);
		var_863_float = var_911_float / var_861_int;
		float var_912_float;
		func_1638(var_912_float);
		var_912_float = var_864_float;
		@GetDirection(var_865_cvector);
		object var_913_object;
		func_2806(var_913_object);
		var_913_object = var_866_object;
		var_867_int = 0;

		for(;;) {
			if(var_867_int < var_861_int) {
				@RandVecCone3D(var_868_cvector, var_865_cvector, var_864_float);
				@GetVictimMaterial(var_869_object, var_870_int, var_871_cvector, var_868_cvector);
				if(var_869_object != null) {
					float var_916_float; object var_917_object; float var_918_float; int var_919_int;
					var_869_object = var_917_object;
					int var_920_int;
					func_1685(var_920_int);
					var_920_int = var_919_int;
					func_2687(var_916_float, var_917_object, var_918_float, var_919_int);
					var_916_float = var_872_float;
					if(var_872_float != 0) {
						var_866_object->add(var_869_object);
						int var_922_int;
						func_1687(var_922_int);
						@ReportHit(var_869_object, var_922_int, var_872_float, var_918_float);
					} else {
					if(!(var_870_int != -1)) goto Label_1797;
					var_926_bool = !false; //@nz
					if(var_926_bool == 0) goto Label_1797;
					@GetScene(var_873_object);
					@AddActorByType(var_874_object, "scripted", var_873_object, var_871_cvector, [0.0, 0.0, 1.0], "richochet.xml");
					var_874_object->SetScriptProperty("Material", var_870_int);
					var_862_bool = true;
					var_874_object = null;
					var_873_object = null;
			}
				var_866_object->iterator(var_875_object);

				for(;;) {
					var_875_object->Next(var_877_bool, var_876_object);
					if(var_877_bool == 0) goto Label_1812;
					@ReportAttack(var_876_object);
					@BroadcastPlayerDamage(var_876_object);
				}

			Label_1812:
				@PlayAnimation(var_860_string + "_phase2");
				@WaitForAnimEnd();
				if(var_0_bool != 0)
					return 40;
				func_1650();
				var_876_object = null;
				var_875_object = null;
				var_866_object = null;
				bool var_950_bool;
				func_1859(var_950_bool);
				if(var_950_bool == 1) goto Label_1691;
				}
			}
		Label_1797:
			var_869_object = null;
			var_867_int += 1;
		}
	}
	
}


// @pe
void func_2751(string var_40_string, int var_41_int)
{
	if(var_41_int == 1) {
		var_40_string = "wood";
		return 0;
	EMIT "GOTO 0xad1";
	}
	if(var_41_int == 2) {
		var_40_string = "metal";
		return 0;
	EMIT "GOTO 0xad1";
	}
	if(var_41_int == 3) {
		var_40_string = "ground";
		return 0;
	}
	var_40_string = "stone";
}


void func_705(bool var_416_bool)
{
	bool var_418_bool;
	@IsShooting(var_418_bool);
	var_418_bool = var_416_bool;
}


void func_710(string var_460_string)
{
	var_460_string = "knife";
}


void func_2246(float var_1029_float)
{
	var_1029_float = 0.5;
}


// @pe
void func_712(float var_479_float, bool var_480_bool)
{
	if(var_480_bool != 0)
		var_479_float = 0.3;
	else
		var_479_float = 0.3;
	
}


void func_2248(int var_1031_int)
{
	var_1031_int = 0;
}


void func_2250(bool var_0_bool, bool var_1_bool)
{
	bool var_1054_bool; bool var_1055_bool; bool var_1056_bool; int var_1057_int; int var_1058_int;
	var_0_bool = false;
	var_1_bool = false;
	@PlayAnimation("use_begin");
	@WaitForAnimEnd();
	if(var_0_bool != 0)
		return 14;
	object var_1052_object;
	@GetPlayerSelectedObject(var_1052_object);
	bool var_1053_bool = false;
	bool var_1061_bool; object var_1062_object;
	var_1052_object = var_1062_object;
	func_2649(var_1061_bool, var_1062_object, "lp");
	if(var_1061_bool != 0) {
		var_1052_object->GetProperty("lp", var_1054_bool);
		if(var_1054_bool != 0) {
			var_1052_object->GetProperty("locked", var_1055_bool);
			if(var_1055_bool != 0) {
				var_1053_bool = true;
				var_1052_object->SetProperty("locked", false);
				var_1057_int = 0;
				@GetWeaponProperty(var_1056_bool, "uses", var_1057_int);
				if(var_1057_int <= 1) {
					@GetWeaponItem(var_1058_int);
					@SelectItem(var_1058_int, false, 0);
					@RemoveItem(var_1058_int, 1, 0);
					var_1_bool = true;
				} else {
						@SetWeaponProperty(var_1056_bool, "uses", (var_1057_int - 1));
				}
			}
		}
	}
	if(var_1053_bool != 0)
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


void func_719(float var_484_float)
{
	var_484_float = 0.5;
}


void func_721(int var_500_int)
{
	var_500_int = 1;
}


void func_3281(void)
{
	float var_39_float;
	@rand(var_39_float, 10, 30);
	@SetTimer(0, var_39_float);
}


void func_723(int var_489_int)
{
	var_489_int = 0;
}


void func_2771(object var_30_object)
{
	object var_32_object;
	@self(var_32_object);
	var_32_object = var_30_object;
}
EMIT "Stack[-1] = 0";


void func_725(int var_498_int)
{
	var_498_int = 1;
}


// @pe
void func_727(float var_477_float, bool var_478_bool)
{
	bool var_480_bool;
	var_478_bool = var_480_bool;
	float var_479_float;
	func_712(var_479_float, var_480_bool);
	float var_482_float; float var_483_float;
	float var_484_float;
	func_719(var_484_float);
	var_484_float = var_483_float;
	func_2908(var_482_float, var_483_float);
	var_477_float = var_479_float * var_482_float;
}


// @pe
void func_2777(float var_68_float, float var_69_float, float var_70_float)
{
	if(var_69_float < var_70_float)
		var_69_float = var_68_float;
	else
		var_70_float = var_68_float;
	
}


// @pe
void func_2784(float var_78_float, float var_79_float, float var_80_float, float var_81_float)
{
	if(var_79_float < var_80_float) {
		var_80_float = var_78_float;
		return 0;
	}
	if(var_79_float > var_81_float) {
		var_81_float = var_78_float;
		return 0;
	}
	var_79_float = var_78_float;
}


void func_741(void)
{
	int var_500_int;
	func_721(var_500_int);
	int var_499_int;
	var_500_int = var_499_int;
	func_2889(var_499_int);
}


// @pe
void func_2795(int var_318_int, int var_319_int, int var_320_int, int var_321_int)
{
	if(var_319_int < var_320_int) {
		var_320_int = var_318_int;
		return 0;
	}
	if(var_319_int > var_321_int) {
		var_321_int = var_318_int;
		return 0;
	}
	var_319_int = var_318_int;
}


void func_749(bool var_0_bool)
{
	bool var_438_bool; string var_439_string; int var_440_int; string var_441_string; float var_442_float; object var_443_object; bool var_444_bool; cvector var_445_cvector; cvector var_446_cvector; float var_447_float; float var_448_float; int var_449_int;
	var_0_bool = false;
	int var_436_int = 0;
	
	for(;;) {
		var_436_int += 1;
		@HasAnimation(var_438_bool, (("attack" + var_436_int) + "_phase1"));
		if(!var_438_bool) { //@nz
			break;
		Label_769:
			@GetCurrentWeapon(var_439_string);
			@irand(var_440_int, var_436_int);
			var_441_string = "attack" + (var_440_int + 1);
			string var_460_string;
			func_710(var_460_string);
			@PlaySound(var_460_string + (var_440_int + 1));
			@SetAttackState(true);
			@PlayAnimation(var_441_string + "_phase1");
			@WaitForAnimEnd();
			if(var_0_bool != 0)
				return 28;
			@SetAttackState(false);
			@GetAttackDistance(var_442_float);
			@GetVictim(var_442_float, var_443_object);
			if(var_443_object != null) {
				var_472_bool = IsFuncExist(var_443_object, "GetDirection", 1);
				if(var_472_bool != 0) {
					@GetDirection(var_445_cvector);
					var_443_object->GetDirection(var_446_cvector);
					float var_473_float; cvector var_474_cvector; cvector var_475_cvector;
					var_445_cvector = var_474_cvector;
					var_446_cvector = var_475_cvector;
					func_2831(var_473_float, var_474_cvector, var_475_cvector);
					var_444_bool = var_473_float >= 0.49999997;
				} else {
					var_444_bool = false;
		}
			}
			float var_477_float; bool var_478_bool;
			var_444_bool = var_478_bool;
			func_727(var_477_float, var_478_bool);
			var_477_float = var_447_float;
			float var_485_float; object var_486_object; float var_487_float; int var_488_int;
			var_443_object = var_486_object;
			int var_489_int;
			func_723(var_489_int);
			var_489_int = var_488_int;
			func_2687(var_485_float, var_486_object, var_487_float, var_488_int);
			var_485_float = var_448_float;
			if(var_448_float != 0) {
				@irand(var_449_int, 2);
				string var_492_string;
				func_710(var_492_string);
				@PlaySound((var_492_string + "_hit") + (var_449_int + 1));
				@ReportAttack(var_443_object);
				int var_498_int;
				func_725(var_498_int);
				@ReportHit(var_443_object, var_498_int, var_448_float, var_487_float);
				@BroadcastPlayerDamage(var_443_object);
			}
			func_741();
		}
		@PlayAnimation(var_441_string + "_phase2");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 28;
		var_443_object = null;
		bool var_504_bool;
		func_906(var_504_bool);
		if(var_504_bool == 1) goto Label_769;
		return 28;

	}
	var_456_bool = !(var_436_int + -1); //@nz
	if(var_456_bool == 0) goto Label_769;
}


void func_2806(object var_25_object)
{
	object var_27_object;
	@CreateObjectSet(var_27_object);
	var_27_object = var_25_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2812(float var_120_float, cvector var_121_cvector, cvector var_122_cvector)
{
	var_123_float = GetByIndex(var_121_cvector, 0);
	var_124_float = GetByIndex(var_122_cvector, 0);
	var_126_float = GetByIndex(var_121_cvector, 2);
	var_127_float = GetByIndex(var_122_cvector, 2);
	var_120_float = (var_123_float * var_124_float) + (var_126_float * var_127_float);
}


// @pe
void func_2821(float var_129_float, cvector var_130_cvector)
{
	var_131_float = GetByIndex(var_130_cvector, 0);
	var_132_float = GetByIndex(var_130_cvector, 0);
	var_134_float = GetByIndex(var_130_cvector, 2);
	var_135_float = GetByIndex(var_130_cvector, 2);
	var_129_float = sqrt((var_131_float * var_132_float) + (var_134_float * var_135_float));
}


// @pe
void func_269(float var_142_float, bool var_143_bool)
{
	bool var_145_bool;
	var_143_bool = var_145_bool;
	float var_144_float;
	func_127(var_144_float, var_145_bool);
	var_144_float = var_142_float;
}


// @pe
void func_2831(float var_117_float, cvector var_118_cvector, cvector var_119_cvector)
{
	cvector var_121_cvector;
	var_118_cvector = var_121_cvector;
	cvector var_122_cvector;
	var_119_cvector = var_122_cvector;
	float var_120_float;
	func_2812(var_120_float, var_121_cvector, var_122_cvector);
	float var_129_float; cvector var_130_cvector;
	var_118_cvector = var_130_cvector;
	func_2821(var_129_float, var_130_cvector);
	float var_138_float; cvector var_139_cvector;
	var_119_cvector = var_139_cvector;
	func_2821(var_138_float, var_139_cvector);
	var_117_float = var_120_float / (var_129_float * var_138_float);
}


void func_2848(bool var_68_bool)
{
	int var_70_int;
	@GetItemCountOfType(var_70_int, "kerosene");
	var_70_int = var_68_bool;
}


void func_2854(bool var_647_bool, string var_648_string, int var_649_int)
{
	int var_654_int; bool var_656_bool; bool var_657_bool;
	@GetInvItemByName(var_654_int, var_648_string);
	int var_655_int = 0;
	
	for(;;) {
		if(var_655_int < var_649_int) {
			@RemoveItemByType(var_656_bool, var_654_int, 1);
			if(!var_656_bool) { //@nz
			} else {
				var_655_int += 1;
			}
		}
		if(!var_655_int) { //@nz
			var_647_bool = false;
			return 8;
		}
		@SetWeaponProperty(var_657_bool, "ammo", var_655_int);
		var_647_bool = true;
		return 8;

	}
}


void func_302(void)
{
}


void func_303(bool var_216_bool)
{
	bool var_218_bool;
	@IsShooting(var_218_bool);
	var_218_bool = var_216_bool;
}


void func_308(string var_260_string)
{
	var_260_string = "scalpel";
}


// @pe
void func_2356(string var_62_string)
{
	if(var_62_string == "empty") {
		TaskCall(2);
		func_138(var_65_bool);
		TaskReturn();
	} else if(var_62_string == "scalpel") {
			TaskCall(3);
			func_347(var_221_bool);
			TaskReturn();
	}

	
	if(var_62_string == "hammer") {
		TaskCall(4);
		func_548(var_333_bool);
		TaskReturn();
	} else if(var_62_string == "knife") {
		TaskCall(5);
		func_749(var_421_bool);
		TaskReturn();
	} else if(var_62_string == "trost") {
		TaskCall(6);
		func_950(var_509_bool);
		TaskReturn();
	} else if(var_62_string == "rifle") {
		TaskCall(7);
		func_1177(var_597_bool);
		TaskReturn();
	} else if(var_62_string == "revolver") {
		TaskCall(8);
		func_1433(var_719_bool);
		TaskReturn();
	} else if(var_62_string == "samopal") {
		TaskCall(9);
		func_1689(var_837_bool);
		TaskReturn();
	} else if(var_62_string == "ognemet") {
		TaskCall(10);
		func_1864(var_955_object, var_956_bool, var_957_bool);
		TaskReturn();
	} else if(var_62_string == "bottle") {
		TaskCall(11);
		func_2147(var_1000_bool);
		TaskReturn();
	} else if(var_62_string == "lockpick") {
		TaskCall(12);
		func_2250(var_1043_bool, var_1044_bool);
		TaskReturn();
	}
}


// @pe
void func_310(float var_279_float, bool var_280_bool)
{
	if(var_280_bool != 0)
		var_279_float = 0.2;
	else
		var_279_float = 0.4;
	
}


void func_317(float var_284_float)
{
	var_284_float = 0.5;
}


void func_2878(float var_285_float)
{
	bool var_288_bool; int var_289_int;
	@GetWeaponProperty(var_288_bool, "durability", var_289_int);
	if(var_288_bool != 0)
		var_285_float = var_289_int / 100.0;
	else
		var_285_float = 1.0;
	
}


void func_319(int var_311_int)
{
	var_311_int = 1;
}


void func_321(int var_300_int)
{
	var_300_int = 0;
}


void func_1346(void)
{
}


void func_323(int var_309_int)
{
	var_309_int = 1;
}


void func_1347(bool var_714_bool)
{
	bool var_716_bool;
	@IsShooting(var_716_bool);
	var_716_bool = var_714_bool;
}


// @pe
void func_325(float var_277_float, bool var_278_bool)
{
	bool var_280_bool;
	var_278_bool = var_280_bool;
	float var_279_float;
	func_310(var_279_float, var_280_bool);
	float var_282_float; float var_283_float;
	float var_284_float;
	func_317(var_284_float);
	var_284_float = var_283_float;
	func_2908(var_282_float, var_283_float);
	var_277_float = var_279_float * var_282_float;
}


void func_1858(void)
{
}


void func_1859(bool var_950_bool)
{
	bool var_952_bool;
	@IsShooting(var_952_bool);
	var_952_bool = var_950_bool;
}


void func_1352(bool var_760_bool)
{
	bool var_763_bool; bool var_764_bool;
	@GetWeaponProperty(var_763_bool, "ammo", var_764_bool);
	bool var_766_bool = true;
	var_767_bool = !var_763_bool; //@nz
	if(var_767_bool != 1) {
		var_768_bool = !var_764_bool; //@nz
		if(var_768_bool != 1)
			var_766_bool = false;
	}
	if(var_766_bool != 0) {
		bool var_769_bool;
		func_2854(var_769_bool, "revolver_ammo", 6);
		if(!var_769_bool) { //@nz
			@PlayAnimation("noammo");
			@WaitForAnimEnd();
			var_760_bool = false;
		}
	}
	var_760_bool = true;
}


void func_2889(int var_310_int)
{
	bool var_314_bool; int var_315_int;
	@GetWeaponProperty(var_314_bool, "durability", var_315_int);
	if(var_314_bool != 0) {
		int var_318_int;
		func_2795(var_318_int, (var_315_int - var_310_int), 0, 100);
		var_318_int = var_315_int;
	} else {
		var_315_int = 100;
	}
	@SetWeaponProperty(var_314_bool, "durability", var_315_int);
	
}


void func_1864(bool var_0_bool, bool var_1_bool, bool var_2_bool)
{
	float var_961_float;
	bool var_962_bool;
	func_2127(var_962_bool);
	if(!var_962_bool) //@nz
		return 4;
	var_1_bool = false;
	func_1932();
	object var_960_object;
	@GetScene(var_960_object);
	@AddActorByType(var_0_bool, "flame", var_960_object, [0.0, 0.0, 0.0]);
	object var_978_object;
	func_2771(var_978_object);
	var_0_bool->Attach(var_978_object, "flame"); //@t
	var_0_bool->SetLength(0.8333333); //@t
	@SetTimer(20, 0.1);
	
	for(;;) {
		@PlayAnimation("attack");
		@WaitForAnimEnd();
		if(false != 0) {
		} else {
				if(var_1_bool == 0) goto Label_1911;
				var_0_bool->GetActualLength(var_961_float); //@t
				if(!(var_961_float < 0.016666668)) goto Label_1911;
		}
		for(;;) {
			@KillTimer(20);
			@RemoveActor(var_0_bool);
			@RemoveAttachPoint("flame");
			return 4;

		}

	Label_1911:
		bool var_992_bool;
		func_2142(var_992_bool);
		if(!var_992_bool) { //@nz
			if(!var_1_bool) //@nz
				func_1978(var_960_object, var_961_float);
		}
	}
}
EMIT "Stack[-2] = 0";


void func_339(void)
{
	int var_311_int;
	func_319(var_311_int);
	int var_310_int;
	var_311_int = var_310_int;
	func_2889(var_310_int);
}


void func_347(bool var_0_bool)
{
	bool var_238_bool; string var_239_string; int var_240_int; string var_241_string; float var_242_float; object var_243_object; bool var_244_bool; cvector var_245_cvector; cvector var_246_cvector; float var_247_float; float var_248_float; int var_249_int;
	var_0_bool = false;
	int var_236_int = 0;
	
	for(;;) {
		var_236_int += 1;
		@HasAnimation(var_238_bool, (("attack" + var_236_int) + "_phase1"));
		if(!var_238_bool) { //@nz
			break;
		Label_367:
			@GetCurrentWeapon(var_239_string);
			@irand(var_240_int, var_236_int);
			var_241_string = "attack" + (var_240_int + 1);
			string var_260_string;
			func_308(var_260_string);
			@PlaySound(var_260_string + (var_240_int + 1));
			@SetAttackState(true);
			@PlayAnimation(var_241_string + "_phase1");
			@WaitForAnimEnd();
			if(var_0_bool != 0)
				return 28;
			@SetAttackState(false);
			@GetAttackDistance(var_242_float);
			@GetVictim(var_242_float, var_243_object);
			if(var_243_object != null) {
				var_272_bool = IsFuncExist(var_243_object, "GetDirection", 1);
				if(var_272_bool != 0) {
					@GetDirection(var_245_cvector);
					var_243_object->GetDirection(var_246_cvector);
					float var_273_float; cvector var_274_cvector; cvector var_275_cvector;
					var_245_cvector = var_274_cvector;
					var_246_cvector = var_275_cvector;
					func_2831(var_273_float, var_274_cvector, var_275_cvector);
					var_244_bool = var_273_float >= 0.49999997;
				} else {
					var_244_bool = false;
		}
			}
			float var_277_float; bool var_278_bool;
			var_244_bool = var_278_bool;
			func_325(var_277_float, var_278_bool);
			var_277_float = var_247_float;
			float var_296_float; object var_297_object; float var_298_float; int var_299_int;
			var_243_object = var_297_object;
			int var_300_int;
			func_321(var_300_int);
			var_300_int = var_299_int;
			func_2687(var_296_float, var_297_object, var_298_float, var_299_int);
			var_296_float = var_248_float;
			if(var_248_float != 0) {
				@irand(var_249_int, 2);
				string var_303_string;
				func_308(var_303_string);
				@PlaySound((var_303_string + "_hit") + (var_249_int + 1));
				@ReportAttack(var_243_object);
				int var_309_int;
				func_323(var_309_int);
				@ReportHit(var_243_object, var_309_int, var_248_float, var_298_float);
				@BroadcastPlayerDamage(var_243_object);
			}
			func_339();
		}
		@PlayAnimation(var_241_string + "_phase2");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 28;
		var_243_object = null;
		bool var_328_bool;
		func_504(var_328_bool);
		if(var_328_bool == 1) goto Label_367;
		return 28;

	}
	var_256_bool = !(var_236_int + -1); //@nz
	if(var_256_bool == 0) goto Label_367;
}


// @pe
void func_2908(float var_282_float, float var_283_float)
{
	float var_285_float;
	func_2878(var_285_float);
	var_282_float = var_283_float + (var_285_float * (1 - var_283_float));
}


void func_1380(int var_792_int)
{
	var_792_int = 1;
}


void func_2917(void)
{
	bool var_31_bool; int var_32_int; bool var_35_bool; int var_36_int; string var_38_string;
	@GetGroundMaterial(var_31_bool, var_32_int);
	if(!var_31_bool) //@nz
		var_32_int = -1;
	string var_40_string; int var_41_int;
	var_32_int = var_41_int;
	func_2751(var_40_string, var_41_int);
	string var_33_string;
	var_40_string = var_33_string;
	int var_34_int = 0;
	
	for(;;) {
		@IsExistingSound(var_35_bool, (("step_" + var_33_string) + (var_34_int + 1)));
		if(!var_35_bool) { //@nz
			break;
		Label_2948:
			if(var_34_int == 1) {
				var_36_int = 0;
			} else {
					@irand(var_36_int, var_34_int);
					var_67_string = GlobalVars[0];
					if(!((("step_" + var_33_string) + (var_36_int + 1)) != var_67_string)) goto Label_2964;
			}
			for(;;) {
				@PlaySound(("step_" + var_33_string) + (var_36_int + 1));
				var_62_string = GlobalVars[0];
				var_38_string = var_62_string;
				GlobalVars[0] = var_62_string;

			}

		Label_2964:
		}
		var_34_int += 1;
	}
	var_54_bool = !var_34_int; //@nz
	if(var_54_bool == 0) goto Label_2948;
	var_55_string = GlobalVars[0];
	GlobalVars[0] = "";
}


void func_1382(float var_794_float)
{
	var_794_float = 0.02617994;
}


void func_1384(void)
{
	bool var_779_bool; int var_780_int;
	@GetWeaponProperty(var_779_bool, "ammo", var_780_int);
	@SetWeaponProperty(var_779_bool, "ammo", (var_780_int - 1));
}


void func_1394(void)
{
	bool var_819_bool; bool var_820_bool;
	@GetWeaponProperty(var_819_bool, "ammo", var_820_bool);
	bool var_822_bool = true;
	var_823_bool = !var_819_bool; //@nz
	if(var_823_bool != 1) {
		var_824_bool = !var_820_bool; //@nz
		if(var_824_bool != 1)
			var_822_bool = false;
	}
	if(var_822_bool != 0) {
		bool var_825_bool;
		func_2854(var_825_bool, "revolver_ammo", 6);
		if(var_825_bool != 0) {
			string var_828_string;
			func_1425(var_828_string);
			@PlaySound(var_828_string + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}
}


void func_906(bool var_504_bool)
{
	bool var_506_bool;
	@IsShooting(var_506_bool);
	var_506_bool = var_504_bool;
}


void func_1932(void)
{
	cvector var_971_cvector;
	var_972_float = GetByIndex(var_971_cvector, 1);
	SetByIndex(var_971_cvector, 1) = (float)0;
	var_973_float = GetByIndex(var_971_cvector, 0);
	SetByIndex(var_971_cvector, 0) = (float)0;
	var_974_float = GetByIndex(var_971_cvector, 2);
	SetByIndex(var_971_cvector, 2) = (float)0;
	@CreateAttachPoint("flame", var_971_cvector);
}


void func_911(string var_548_string)
{
	var_548_string = "trost";
}


// @pe
void func_913(float var_567_float, bool var_568_bool)
{
	if(var_568_bool != 0)
		var_567_float = 0.3;
	else
		var_567_float = 0.2;
	
}


void func_1425(string var_788_string)
{
	var_788_string = "revolver";
}


void func_1427(float var_793_float)
{
	var_793_float = 0.8;
}


void func_1429(int var_802_int)
{
	var_802_int = 0;
}


void func_1431(int var_804_int)
{
	var_804_int = 2;
}


void func_920(float var_572_float)
{
	var_572_float = 0.5;
}


void func_1433(bool var_0_bool)
{
	string var_740_string; int var_741_int; string var_742_string; int var_743_int; bool var_744_bool; float var_745_float; float var_746_float; cvector var_747_cvector; object var_748_object; int var_749_int; cvector var_750_cvector; object var_751_object; int var_752_int; cvector var_753_cvector; float var_754_float; object var_755_object; object var_756_object; object var_757_object; object var_758_object; bool var_759_bool;
	var_0_bool = false;
	
Label_1435:
	bool var_760_bool;
	func_1352(var_760_bool);
	if(!var_760_bool) { //@nz
	} else {
		@GetCurrentWeapon(var_740_string);
		@irand(var_741_int, 2);
		var_742_string = "attack1";
		@SetAttackState(true);
		func_1384();
		@PlayAnimation(var_742_string + "_phase1");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 40;
		string var_788_string;
		func_1425(var_788_string);
		@PlaySound(var_788_string + "_shot");
		func_1602();
		@SetAttackState(false);
		int var_792_int;
		func_1380(var_792_int);
		var_792_int = var_743_int;
		float var_793_float;
		func_1427(var_793_float);
		var_745_float = var_793_float / var_743_int;
		float var_794_float;
		func_1382(var_794_float);
		var_794_float = var_746_float;
		@GetDirection(var_747_cvector);
		object var_795_object;
		func_2806(var_795_object);
		var_795_object = var_748_object;
		var_749_int = 0;

		for(;;) {
			if(var_749_int < var_743_int) {
				@RandVecCone3D(var_750_cvector, var_747_cvector, var_746_float);
				@GetVictimMaterial(var_751_object, var_752_int, var_753_cvector, var_750_cvector);
				if(var_751_object != null) {
					float var_798_float; object var_799_object; float var_800_float; int var_801_int;
					var_751_object = var_799_object;
					int var_802_int;
					func_1429(var_802_int);
					var_802_int = var_801_int;
					func_2687(var_798_float, var_799_object, var_800_float, var_801_int);
					var_798_float = var_754_float;
					if(var_754_float != 0) {
						var_748_object->add(var_751_object);
						int var_804_int;
						func_1431(var_804_int);
						@ReportHit(var_751_object, var_804_int, var_754_float, var_800_float);
					} else {
					if(!(var_752_int != -1)) goto Label_1541;
					var_808_bool = !false; //@nz
					if(var_808_bool == 0) goto Label_1541;
					@GetScene(var_755_object);
					@AddActorByType(var_756_object, "scripted", var_755_object, var_753_cvector, [0.0, 0.0, 1.0], "richochet.xml");
					var_756_object->SetScriptProperty("Material", var_752_int);
					var_744_bool = true;
					var_756_object = null;
					var_755_object = null;
			}
				var_748_object->iterator(var_757_object);

				for(;;) {
					var_757_object->Next(var_759_bool, var_758_object);
					if(var_759_bool == 0) goto Label_1556;
					@ReportAttack(var_758_object);
					@BroadcastPlayerDamage(var_758_object);
				}

			Label_1556:
				@PlayAnimation(var_742_string + "_phase2");
				@WaitForAnimEnd();
				if(var_0_bool != 0)
					return 40;
				func_1394();
				var_758_object = null;
				var_757_object = null;
				var_748_object = null;
				bool var_832_bool;
				func_1603(var_832_bool);
				if(var_832_bool == 1) goto Label_1435;
				}
			}
		Label_1541:
			var_751_object = null;
			var_749_int += 1;
		}
	}
	
}


void func_922(int var_588_int)
{
	var_588_int = 1;
}


// @pe
void func_2456(string var_24_string)
{
	if(var_24_string == "empty") {
		TaskCall(1);
		func_38(var_28_bool, var_29_bool, 0.25);
		TaskReturn();
	}
}


void func_924(int var_577_int)
{
	var_577_int = 0;
}


void func_926(int var_586_int)
{
	var_586_int = 0;
}


// @pe
void func_928(float var_565_float, bool var_566_bool)
{
	bool var_568_bool;
	var_566_bool = var_568_bool;
	float var_567_float;
	func_913(var_567_float, var_568_bool);
	float var_570_float; float var_571_float;
	float var_572_float;
	func_920(var_572_float);
	var_572_float = var_571_float;
	func_2908(var_570_float, var_571_float);
	var_565_float = var_567_float * var_570_float;
}


void func_2976(void)
{
	bool var_49_bool; object var_50_object; object var_51_object;
	@IsDead(var_49_bool);
	if(!var_49_bool) { //@nz
		@SetDeathState();
		@GetMainOutdoorScene(var_50_object);
		@AddBlankActor(var_51_object, var_50_object, "player_death", "play_death_danko.bin");
		var_51_object = null;
		var_50_object = null;
	}
}


void func_942(void)
{
	int var_588_int;
	func_922(var_588_int);
	int var_587_int;
	var_588_int = var_587_int;
	func_2889(var_587_int);
}


void func_2992(void)
{
	bool var_22_bool;
	@KillTimer(11, var_22_bool);
	if(var_22_bool != 0)
		@ModNoise(-2);
}


void func_950(bool var_0_bool)
{
	bool var_526_bool; string var_527_string; int var_528_int; string var_529_string; float var_530_float; object var_531_object; bool var_532_bool; cvector var_533_cvector; cvector var_534_cvector; float var_535_float; float var_536_float; int var_537_int;
	var_0_bool = false;
	int var_524_int = 0;
	
	for(;;) {
		var_524_int += 1;
		@HasAnimation(var_526_bool, (("attack" + var_524_int) + "_phase1"));
		if(!var_526_bool) { //@nz
			break;
		Label_970:
			@GetCurrentWeapon(var_527_string);
			@irand(var_528_int, var_524_int);
			var_529_string = "attack" + (var_528_int + 1);
			string var_548_string;
			func_911(var_548_string);
			@PlaySound(var_548_string + (var_528_int + 1));
			@SetAttackState(true);
			@PlayAnimation(var_529_string + "_phase1");
			@WaitForAnimEnd();
			if(var_0_bool != 0)
				return 28;
			@SetAttackState(false);
			@GetAttackDistance(var_530_float);
			@GetVictim(var_530_float, var_531_object);
			if(var_531_object != null) {
				var_560_bool = IsFuncExist(var_531_object, "GetDirection", 1);
				if(var_560_bool != 0) {
					@GetDirection(var_533_cvector);
					var_531_object->GetDirection(var_534_cvector);
					float var_561_float; cvector var_562_cvector; cvector var_563_cvector;
					var_533_cvector = var_562_cvector;
					var_534_cvector = var_563_cvector;
					func_2831(var_561_float, var_562_cvector, var_563_cvector);
					var_532_bool = var_561_float >= 0.49999997;
				} else {
					var_532_bool = false;
		}
			}
			float var_565_float; bool var_566_bool;
			var_532_bool = var_566_bool;
			func_928(var_565_float, var_566_bool);
			var_565_float = var_535_float;
			float var_573_float; object var_574_object; float var_575_float; int var_576_int;
			var_531_object = var_574_object;
			int var_577_int;
			func_924(var_577_int);
			var_577_int = var_576_int;
			func_2687(var_573_float, var_574_object, var_575_float, var_576_int);
			var_573_float = var_536_float;
			if(var_536_float != 0) {
				@irand(var_537_int, 2);
				string var_580_string;
				func_911(var_580_string);
				@PlaySound((var_580_string + "_hit") + (var_537_int + 1));
				@ReportAttack(var_531_object);
				int var_586_int;
				func_926(var_586_int);
				@ReportHit(var_531_object, var_586_int, var_536_float, var_575_float);
				@BroadcastPlayerDamage(var_531_object);
			}
			func_942();
		}
		@PlayAnimation(var_529_string + "_phase2");
		@WaitForAnimEnd();
		if(var_0_bool != 0)
			return 28;
		var_531_object = null;
		bool var_592_bool;
		func_1107(var_592_bool);
		if(var_592_bool == 1) goto Label_970;
		return 28;

	}
	var_544_bool = !(var_524_int + -1); //@nz
	if(var_544_bool == 0) goto Label_970;
}


void func_1978(bool var_0_bool, bool var_1_bool)
{
	var_1_bool = true;
	var_0_bool->SetLength(0.0); //@t
}


void func_3002(void)
{
	func_2992();
	@SetTimer(11, 0.15);
	@ModNoise(2);
}


void func_3013(void)
{
	bool var_17_bool;
	@KillTimer(10, var_17_bool);
	if(var_17_bool != 0)
		@ModNoise(-1);
}


void func_3023(void)
{
	func_3013();
	@SetTimer(10, 0.35);
	@ModNoise(1);
}


void func_2005(bool var_0_bool, bool var_1_bool)
{
	object var_84_object; float var_85_float; object var_88_object; bool var_89_bool; float var_90_float; float var_91_float; float var_92_float;
	var_0_bool->Intersect(var_84_object, var_85_float); //@t
	if(!var_1_bool) { //@nz
		float var_94_float; float var_95_float;
		func_2777(var_94_float, var_95_float, 0.8333333);
		var_0_bool->SetLength(var_94_float); //@t
	}
	float var_98_float;
	func_2136(var_98_float);
	float var_86_float;
	var_98_float = var_86_float;
	bool var_87_bool = false;
	
	for(;;) {
		var_84_object->Next(var_89_bool, var_88_object);
		if(var_89_bool != 0) {
			bool var_100_bool = false;
			if(var_88_object != null) {
				object var_102_object;
				func_2771(var_102_object);
				if(var_88_object != var_102_object)
					var_100_bool = true;
			}
			if(var_100_bool != 0) {
				float var_106_float; object var_107_object; float var_108_float; int var_109_int;
				var_88_object = var_107_object;
				var_86_float = var_108_float;
				int var_110_int;
				func_2138(var_110_int);
				var_110_int = var_109_int;
				func_2687(var_106_float, var_107_object, var_108_float, var_109_int);
				var_106_float = var_90_float;
				bool var_162_bool; object var_163_object;
				var_88_object = var_163_object;
				func_2649(var_162_bool, var_163_object, "disease");
				if(var_162_bool != 0) {
					var_88_object->GetProperty("disease", var_91_float);
					if(var_91_float <= 0.1)
						var_91_float = 0;
					else
						var_91_float -= 0.1;
				bool var_178_bool = false;
				bool var_179_bool = false;
				if(true != 0) {
					if(!var_1_bool) //@nz
						var_179_bool = true;
				}
				if(var_179_bool != 0) {
					if(var_95_float < 0.1)
						var_178_bool = true;
				}
				if(var_178_bool != 0) {
					float var_184_float; object var_185_object; float var_186_float; int var_187_int;
					object var_188_object;
					func_2771(var_188_object);
					var_188_object = var_185_object;
					var_86_float = var_186_float;
					int var_189_int;
					func_2138(var_189_int);
					var_189_int = var_187_int;
					func_2687(var_184_float, var_185_object, var_186_float, var_187_int);
				}
				bool var_190_bool;
				func_2127(var_190_bool);
				if(!var_190_bool) //@nz
					var_1_bool = true;
				}
				var_88_object->SetProperty("disease", var_91_float);
			}
			bool var_169_bool; object var_170_object;
			var_88_object = var_170_object;
			func_2649(var_169_bool, var_170_object, "fire");
			if(var_169_bool != 0) {
				var_88_object->GetProperty("fire", var_92_float);
				var_88_object->SetProperty("fire", (var_92_float + 0.1));
			}
			@ReportAttack(var_88_object);
			int var_176_int;
			func_2140(var_176_int);
			@ReportHit(var_88_object, var_176_int, var_90_float, var_86_float);
			@BroadcastPlayerDamage(var_88_object);
		}
	}
	
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-9] = 0";


void func_3034(void)
{
	func_2917();
}


void func_3038(void)
{
	func_2917();
	func_2992();
}


void func_504(bool var_328_bool)
{
	bool var_330_bool;
	@IsShooting(var_330_bool);
	var_330_bool = var_328_bool;
}


void func_509(string var_372_string)
{
	var_372_string = "hammer";
}


// @pe
void func_511(float var_391_float, bool var_392_bool)
{
	if(var_392_bool != 0)
		var_391_float = 0.6;
	else
		var_391_float = 0.3;
	
}


