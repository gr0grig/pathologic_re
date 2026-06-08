// @GLOBALS: 0:bool:,1:object:

task task_0
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_17_object;
		var_16_bool = var_17_object;
		HandleAttackBase(var_17_object);
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		object var_21_object;
		var_17_object = var_21_object;
		bool var_19_bool;
		FilterPlayerDamage(var_19_bool, var_20_object, var_21_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		if(var_16_bool == "kill")
			var_0_bool = true;
	}

}


task task_1
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_17_object;
		var_16_bool = var_17_object;
		HandleAttackBase(var_17_object);
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, object var_8_object, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		object var_21_object;
		var_17_object = var_21_object;
		bool var_19_bool;
		FilterPlayerDamage(var_19_bool, var_20_object, var_21_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, string var_7_string, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		if(var_16_bool == "kill") {
			var_19_bool = GlobalVars[0];
			GlobalVars[0] = true;
		}
	}

}


task task_2
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_17_object;
		var_16_bool = var_17_object;
		HandleAttackBase(var_17_object);
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		object var_21_object;
		var_17_object = var_21_object;
		bool var_19_bool;
		FilterPlayerDamage(var_19_bool, var_20_object, var_21_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, string var_10_string, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		if(var_16_bool == "kill") {
			var_19_bool = GlobalVars[0];
			GlobalVars[0] = true;
			ResetSeenAndKillTimer1(var_16_bool);
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, int var_10_int, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		if(var_16_bool == 1) {
			PlayAttackMusicIfPlayer(var_1_object);
		} else {
			int var_24_int;
			TAttackMeleeBase_OnTimerBody(var_15_object, var_24_int, var_24_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		bool var_17_bool = false;
		if(var_1_object == var_16_bool) {
			if(!var_2_int) //@nz
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			var_2_int = true;
			object var_20_object;
			var_16_bool = var_20_object;
			LookAtActorHead(var_20_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		bool var_17_bool = false;
		if(var_1_object == var_16_bool) {
			if(var_2_int != 0)
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			var_2_int = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		@RequestClearPath(var_16_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		ResetSeenAndKillTimer1(var_16_bool);
		object var_21_object;
		var_16_bool = var_21_object;
		OnDeath_global();
	}

}


maintask task_3
{
	// @pe
	void init(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		InitGlobals();
		var_2_int = false;
	
		for(;;) {
			@SetTimer(130, 0.3);
			TWanderBase_init(var_14_object, var_15_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		TGrabitel_CancelActivity();
		object var_18_object;
		var_16_bool = var_18_object;
		OnDeath_global();
	}

	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		float var_21_float; bool var_22_bool;
		if(var_16_bool != 130) {
		}
		bool var_20_bool;
		@IsInWalkMode(var_20_bool);
		if(var_20_bool != 0) {
			@GetBrightness(var_21_float);
			var_22_bool = var_21_float <= 0.2;
			if(var_22_bool != var_2_int) {
				var_2_int = var_22_bool;
				if(var_22_bool != 0) {
					CancelActivityAndKP(var_21_float, var_22_bool);
					@KillTimer(130);
					bool var_30_bool;
					TaskCall(5);
					TCamp_init(var_30_bool);
					TaskReturn();
					if(var_30_bool != 0)
						TWanderBase_CancelActivity(var_21_float, var_22_bool);
					else
						@SetTimer(130, 0.3);
				}
			}
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		FilterSeeNormal(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			TGrabitel_CancelActivity();
			object var_115_object;
			var_16_bool = var_115_object;
			HandleSeeNormal(var_115_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		FilterHearNormal(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			TGrabitel_CancelActivity();
			object var_115_object;
			var_16_bool = var_115_object;
			HandleHearNormal(var_115_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool, object var_59_object)
		{
		TGrabitel_CancelActivity();
		object var_61_object;
		var_59_object = var_61_object;
		HandleAttack(var_61_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		object var_21_object;
		var_17_object = var_21_object;
		bool var_19_bool;
		FilterPlayerDamage(var_19_bool, var_20_object, var_21_object);
		if(var_19_bool != 0) {
			object var_59_object;
			var_16_bool = var_59_object;
			TGrabitel_OnPlayerDamage_continue();
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		@RequestClearPath(var_16_bool);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		@Stop();
	}

}


task task_4
{
	// @pe
	void OnSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		FilterSeeNormal(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			TIdle_CancelActivity();
			object var_114_object;
			var_16_bool = var_114_object;
			HandleSeeNormal(var_114_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		FilterHearNormal(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			TIdle_CancelActivity();
			object var_114_object;
			var_16_bool = var_114_object;
			HandleHearNormal(var_114_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool, object var_59_object)
		{
		TIdle_CancelActivity();
		object var_60_object;
		var_59_object = var_60_object;
		HandleAttack(var_60_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		object var_21_object;
		var_17_object = var_21_object;
		bool var_19_bool;
		FilterPlayerDamage(var_19_bool, var_20_object, var_21_object);
		if(var_19_bool != 0) {
			object var_59_object;
			var_16_bool = var_59_object;
			TFollowAttackMelee_init();
		}
	}

}


task task_5
{
	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		TCamp_CancelActivity();
		object var_17_object;
		var_16_bool = var_17_object;
		OnDeath_global();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		FilterSeeNormal(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			TCamp_CancelActivity();
			object var_114_object;
			var_16_bool = var_114_object;
			HandleSeeNormal(var_114_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		FilterHearNormal(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			TCamp_CancelActivity();
			object var_114_object;
			var_16_bool = var_114_object;
			HandleHearNormal(var_114_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool, object var_59_object)
		{
		TCamp_CancelActivity();
		object var_60_object;
		var_59_object = var_60_object;
		HandleAttack(var_60_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		object var_21_object;
		var_17_object = var_21_object;
		bool var_19_bool;
		FilterPlayerDamage(var_19_bool, var_20_object, var_21_object);
		if(var_19_bool != 0) {
			object var_59_object;
			var_16_bool = var_59_object;
			TIdle_continueAfterDamage();
		}
	}

}


task task_6
{
	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		TSearch_CancelActivity();
		object var_19_object;
		var_16_object = var_19_object;
		OnDeath_global();
	}

	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		TSearch_CancelActivity();
		object var_19_object;
		var_16_object = var_19_object;
		HandleAttack(var_19_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, int var_16_int)
	{
		if(var_16_int != 0)
			return 0;
		bool var_19_bool;
		ContinueFollow(var_19_bool, var_1_object);
		if(!var_19_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		@RequestClearPath(var_16_object);
	}

}


task task_7
{
}


task task_8
{
	void OnUse(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		bool var_18_bool;
		@IsOverrideActive(var_18_bool);
		if(!var_18_bool) { //@nz
			object var_20_object;
			var_16_object = var_20_object;
			TDeathDirUsable_OnUse(var_20_object);
		}
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, string var_17_string)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
	}

}


// @pe
void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float)
{
	object var_20_object;
	var_16_object = var_20_object;
	int var_21_int;
	var_17_int = var_21_int;
	float var_22_float;
	var_18_float = var_22_float;
	OnHitImpl(var_20_object, var_21_int, var_22_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_22_object;
	var_16_object = var_22_object;
	int var_23_int;
	var_17_int = var_23_int;
	float var_24_float;
	var_18_float = var_24_float;
	cvector var_25_cvector;
	var_20_cvector = var_25_cvector;
	cvector var_26_cvector;
	var_21_cvector = var_26_cvector;
	OnHit2Impl(var_24_float, var_25_cvector, var_26_cvector);
}


void OnPropertyChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, string var_17_string)
{
	float var_19_float;
	if(var_17_string == "health") {
		@GetProperty("health", var_19_float);
		if(var_19_float <= 0)
			@SignalDeath(var_16_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	HandleDeath_global(var_17_object);
}


void TAlternateAttack_init_body(bool actor_state, bool result, object actor, object var_210_object)
{
	object actorForMusic;
	actor = actorForMusic;
	PlayAttackMusicIfPlayer(actorForMusic);
	bool var_114_bool; object var_115_object;
	actor = var_115_object;
	RotateToActorVariant(var_114_bool, var_115_object);
	bool var_128_bool; object var_129_object;
	IsAccessible(var_128_bool, var_129_object);
	if(!var_128_bool) { //@nz
		result = false;
		return 14;
	}
	BroadcastBattle();
	@Face(var_129_object);
	@PlayAnimation("all", "aattack_begin1");
	@WaitForAnimEnd();
	bool var_137_bool; object var_138_object;
	actor = var_138_object;
	IsAccessible(var_137_bool, var_138_object);
	if(!var_137_bool) { //@nz
		@StopAsync();
		result = false;
		return 14;
	}
	@PlayAnimation("all", "aattack_end1");
	object scene;
	@GetScene(scene);
	cvector vPosition;
	bool bFound;
	@GetGeometryLocator("knife", bFound, vPosition);
	object knife;
	@AddActorByType(knife, "scripted", scene, vPosition, [0.0, 0.0, 1.0], "grabitel_knife.xml");
	object selfObj;
	self(selfObj);
	knife->SetScriptProperty("Owner", selfObj);
	knife->SetScriptProperty("Target", actor);
	cvector vTargetPos;
	actor->GetPosition(vTargetPos);
	float fEyesHeight;
	actor->GetEyesHeight(fEyesHeight);
	var_149_float = GetByIndex(vTargetPos, 1);
	SetByIndex(vTargetPos, 1) = (var_149_float + (fEyesHeight - 10));
	cvector var_152_cvector; cvector var_153_cvector; cvector var_154_cvector;
	vPosition = var_153_cvector;
	vTargetPos = var_154_cvector;
	CalculateKnifeDirection(var_152_cvector, var_153_cvector, var_154_cvector, 2000.0);
	cvector vDirection;
	var_152_cvector = vDirection;
	knife->SetScriptProperty("StartDirection", vDirection);
	@WaitForAnimEnd();
	@StopAsync();
	if(false != 0) {
		result = true;
		return 14;
	}
	bool var_205_bool; object var_206_object;
	actor = var_206_object;
	IsAccessible(var_205_bool, var_206_object);
	if(!var_205_bool) { //@nz
		result = false;
		return 14;
	}
	bool var_208_bool; object var_209_object;
	actor = var_209_object;
	TaskCall(1);
	TMeleeAttack_init_body(var_208_bool, var_209_object);
	TaskReturn();
	var_210_object = result;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void ApplyDamage(float fOutDelta, object actor, float fDamage, int iDamageType)
{
	int iArmor; int iClassArmor;
	object var_565_object;
	actor = var_565_object;
	bool var_564_bool;
	HasProperty(var_564_bool, var_565_object, "health");
	if(!var_564_bool) //@nz
		fOutDelta = 0.0;
	bool var_568_bool; object var_569_object;
	HasProperty(var_568_bool, var_569_object, "armor");
	if(!var_568_bool) //@nz
		iArmor = 0;
	else
		var_569_object->GetProperty("armor", iArmor);
	string strDmgName; int var_574_int;
	iDamageType = var_574_int;
	func_1988(strDmgName, var_574_int);
	string var_559_string = "armor_" + strDmgName;
	bool var_579_bool; object var_580_object; string strProp;
	actor = var_580_object;
	HasProperty(var_579_bool, var_580_object, strProp);
	if(!var_579_bool) //@nz
		iClassArmor = 0;
	else
		actor->GetProperty(strProp, iClassArmor);

	float var_583_float;
	minf(var_583_float, ((iArmor + iClassArmor) / 100.0), (float)1);
	float fReduction;
	var_583_float = fReduction;
	float fHealth;
	actor->GetProperty("health", fHealth);
	float fActualDamage = fDamage * (1 - fReduction);
	float var_593_float;
	clampf(var_593_float, (fHealth - fActualDamage), (float)0, (float)1);
	actor->SetProperty("health", var_593_float);
	bool var_599_bool; object var_600_object;
	actor = var_600_object;
	IsPlayerActor(var_599_bool, var_600_object);
	if(var_599_bool != 0) {
		float var_601_float = -fActualDamage;
		PlayerRumbleAndMsg(var_601_float);
	}
	fActualDamage = fOutDelta;
	
}


void self(object out)
{
	object tmp;
	@self(tmp);
	tmp = out;
}
EMIT "Stack[-1] = 0";


void Normalize(cvector out, cvector v)
{
	float len = sqrt(v | v);
	if(len < 0.000001)
		out = [0.0, 0.0, 0.0];
	out = v / len;
}


void TSearch_init(int m_bFollowing, object actor)
{
	m_bFollowing = false;
	bool bSuccess;
	@Sleep(1, bSuccess);
	if(!bSuccess) //@nz
		return 2;
	m_bFollowing = true;
	bool bInitOk; object actorCopy;
	bool var_707_bool;
	TFollowBase_init_search(var_707_bool, bSuccess, bInitOk, actorCopy, (float)200, (float)2000, true, true);
	if(!bInitOk) //@nz
		return 2;
	m_bFollowing = false;
	@Face(actorCopy);
	@WaitForAnimEnd(bSuccess);
	if(!bSuccess) { //@nz
		@StopAsync();
		return 2;
	}
	@PlayAnimation("all", "hunt");
	@WaitForAnimEnd(bSuccess);
	@StopAsync();
	if(!bSuccess) //@nz
		return 2;
}


void PutOrgan(string itemName)
{
	object item;
	@CreateInvItem(item);
	item->SetItemName(itemName);
	item->SetProperty("Organ", 1);
	int itemID;
	item->GetItemID(itemID);
	bool bOk;
	@AddItem(bOk, item, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void minf(float result, float a, float b)
{
	if(a < b)
		a = result;
	else
		b = result;
	
}


// @pe
void QuadraticDeterminant(float result, float a, float b, float c)
{
	result = (b * b) - ((4 * a) * c);
}


void AddOrgans(void)
{
	int branch;
	GetBranch(branch);
	if(branch != 1) {
	}
	PutOrgan("liver");
	PutOrgan("kidney");
	PutOrgan("heart");
	PutOrgan("blood");
}


void SolveQuadraticMinPos(float result, float a, float b, float d)
{
	float var_192_float;
	var_193_int = -b;
	if(((var_193_int - d) / (2 * a)) > 0) {
		var_192_float = result;
		return 2;
	}
	var_199_int = -b;
	result = (var_199_int + d) / (2 * a);
}


// @pe
void clampf(float result, float v, float fMin, float fMax)
{
	if(v < fMin) {
		fMin = result;
		return 0;
	}
	if(v > fMax) {
		fMax = result;
		return 0;
	}
	v = result;
}


void GenerateGrabitelItems(void)
{
	@ClearSubContainer(0);
	GenerateMoney(300, 750);
	func_2431("Knife", 1, 8);
	func_2431("lockpick", 1, 6);
	int markID;
	GetInvItemIDByName(markID, "grabitel_mark");
	bool bOk;
	@AddItem(bOk, markID, 0, 1);
}


// @pe
void ContinueFollow(bool result, object actor)
{
	object actorCopy;
	actor = actorCopy;
	bool bAccessibleOrDead;
	IsAccessible2(bAccessibleOrDead, actorCopy);
	bAccessibleOrDead = result;
}


void TSearch_CancelActivity(void)
{
	if(var_2_int != 0) {
		TFollowBase_CancelActivity(var_16_object);
	} else {
		@StopGroup0();
		@StopAnimation();
		@StopAsync();
	}
	
}


// @pe
void betweenf(bool result, float v, float fMin, float fMax)
{
	result = false;
	if(v >= fMin) {
		if(v <= fMax)
			result = true;
	}
}


// @pe
void TAttackMeleeBase_OnTimerBody(bool outFlag, object actor, int timerID)
{
	if(timerID != 0)
		return 0;
	bool bAccessible;
	ContinueFollowWrapper(bAccessible, actor);
	if(!bAccessible) //@nz
		outFlag = true;
	@KillTimer(0);
	@Stop();
}


void RandomBool(bool result, int n, int max)
{
	int roll;
	@irand(roll, max);
	result = roll < n;
}


void IsZeroHealth(bool result, object actor)
{
	object actorCopy;
	actor = actorCopy;
	bool var_620_bool;
	HasProperty(var_620_bool, actorCopy, "health");
	if(!var_620_bool) { //@nz
		result = false;
		return 2;
	}
	bool var_624_bool = false;
	bool var_625_bool; object var_626_object;
	IsPlayerActor(var_625_bool, var_626_object);
	if(var_625_bool != 0) {
		bool var_627_bool;
		IsGodMode(var_627_bool);
		if(var_627_bool != 0)
			var_624_bool = true;
	}
	if(var_624_bool != 0) {
		result = false;
		return 2;
	}
	float health;
	var_626_object->GetProperty("health", health);
	result = health <= 0.0;
}


void CreateObjectSet(object out)
{
	object set;
	@CreateObjectSet(set);
	set = out;
}
EMIT "Stack[-1] = 0";


// @pe
void PlayerModReputation(bool result, object player, float fMod)
{
	if(!player) { //@nz
		result = false;
		return 0;
	}
	if(fMod > 0) {
		@SendWorldWndMessage(8);
	} else if(fMod < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float fModCopy;
		fMod = fModCopy;
		SendWorldWndDeltaMsg(fModCopy);
		bool bOk; object playerCopy; float fModCopy2;
		player = playerCopy;
		fMod = fModCopy2;
		ModifyClampedProperty(bOk, playerCopy, "reputation", fModCopy2, (float)0, (float)1);
		result = true;
		return 0;

	}
	
	result = false;
}


void GetInvItemIDByName(int outID, string itemName)
{
	int tmp;
	@GetInvItemByName(tmp, itemName);
	tmp = outID;
}


void StopAttackTimer(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void TFollowBase_init_search(bool var_0_bool, object var_1_object, bool bOk, object actor, float fStartDist, float fLooseDist, bool bWalkMode, bool bRunMode)
{
	bool var_725_bool; object var_727_object; cvector var_728_cvector; cvector var_729_cvector; float var_731_float; object var_732_object;
	var_0_bool = false;
	var_1_object = actor;
	bool var_726_bool;
	bRunMode = var_726_bool;
	
	for(;;) {
		bool var_733_bool; object var_734_object;
		actor = var_734_object;
		ContinueFollow(var_733_bool, var_734_object);
		if(!var_733_bool) { //@nz
			bOk = false;
			return 16;
		}
		actor->GetPosition(var_728_cvector);
		@GetPosition(var_729_cvector);
		var_731_float = (var_728_cvector - var_729_cvector) | (var_728_cvector - var_729_cvector);
		bool var_753_bool = false;
		if(fLooseDist > 0) {
			if(var_731_float > (fLooseDist * fLooseDist))
				var_753_bool = true;
		}
		if(var_753_bool != 0) {
			@Stop();
			bOk = false;
			return 16;
		}
		if(var_731_float > (fStartDist * fStartDist)) {
			actor->GetPFPosition(var_728_cvector);
			@FindPathTo(var_732_object, var_728_cvector);
			if(var_732_object != null) {
				var_732_object = var_727_object;
				var_732_object = null;
			}
			if(var_727_object != null) {
				if(var_726_bool == 0) goto Label_1688;
				var_726_bool = false;
				@RotatePath(var_727_object, var_725_bool);
				if(!var_725_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_766_string;
						GetWalkAnimName_search(var_766_string);
						string var_767_string;
						GetRunAnimName_search(var_767_string);
						@FollowPath(var_727_object, bWalkMode, var_725_bool, var_766_string, var_767_string);
						if(!var_725_bool) { //@nz
							if(var_0_bool == 0) goto Label_1707;
							var_727_object = null;
						}
					EMIT "GOTO 0x6ac";

					Label_1707:
						} else {
					var_727_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_725_bool);
					if(!var_725_bool) { //@nz
						if(var_0_bool != 0) {
							var_727_object = null;
							goto Label_1735;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1735;
		}
			var_732_object = null;
			goto Label_1733;

		Label_1733:
			var_727_object = null;

		}
	Label_1735:
		for(;;) {
			bOk = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void ContinueFollowWrapper(bool var_331_bool, object var_332_object)
{
	object var_334_object;
	var_332_object = var_334_object;
	bool var_333_bool;
	IsAccessible(var_333_bool, var_334_object);
	var_333_bool = var_331_bool;
}


void IsDead(bool result, object actor)
{
	bool bDead;
	actor->IsDead(bDead);
	bDead = result;
}


void GetWalkAnimName(string out)
{
	out = "walk";
}


void GetRunAnimName(string out)
{
	out = "run";
}


void IsAccessible2_inline(bool var_31_bool, object var_32_object)
{
	if(var_32_object == null) {
		var_31_bool = false;
		return 4;
	}
	bool var_38_bool = false;
	var_41_bool = IsFuncExist(var_32_object, "IsDead", 1);
	if(var_41_bool != 0) {
		bool var_42_bool; object var_43_object;
		var_32_object = var_43_object;
		IsDead(var_42_bool, var_43_object);
		if(var_42_bool != 0)
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		var_31_bool = false;
		return 4;
	}
	object var_35_object;
	@GetScene(var_35_object);
	if(var_35_object == null) {
		var_31_bool = false;
		return 4;
	}
	object var_36_object;
	var_32_object->GetScene(var_36_object);
	if(var_35_object != var_36_object) {
		var_31_bool = false;
		return 4;
	}
	var_31_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void PlayerRumbleAndMsg(float var_601_float)
{
	object var_603_object;
	@CreateFloatVector(var_603_object);
	var_603_object->add(var_601_float);
	if(var_601_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_603_object);
}
EMIT "Stack[-1] = 0";


// @pe
void TMeleeAttack_init_body(bool result, object actor)
{
	var_216_bool = GlobalVars[0];
	GlobalVars[0] = false;
	object var_217_object;
	TAttackMeleeBase_init(var_213_bool, var_214_float, var_215_int, result, var_217_object, var_217_object, true, 200.0);
	bool var_689_bool = false;
	var_690_bool = GlobalVars[0];
	if(var_690_bool != 0) {
		if(var_3_int != 0)
			var_689_bool = true;
	}
	if(var_689_bool != 0) {
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
	}
	var_694_bool = GlobalVars[0];
	var_694_bool = result;
}


void SetTrueByRef(int var_3_int)
{
	var_3_int = true;
}


// @pe
void TGrabitel_CancelActivity(void)
{
	TWanderBase_CancelActivity(tmp_for_supercancel, tmp_for_supercancel2);
	@KillTimer(130);
}


void MaybePlayAttackStay(bool var_657_bool, float var_658_float)
{
	float var_661_float; bool var_662_bool;
	@rand(var_661_float);
	if(var_661_float < var_658_float) {

		for(;;) {
			@IsAnimationPlaying(var_662_bool);
			if(!var_662_bool) { //@nz
			} else {
				bool var_665_bool;
				CheckAttackOpportunity(var_665_bool);
				if(var_665_bool != 0) {
					var_657_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_657_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	PlayAttackMusicIfPlayer_var(var_662_bool);
}


void SendWorldWndDeltaMsg(float var_29_float)
{
	object var_31_object;
	@CreateFloatVector(var_31_object);
	var_31_object->add(var_29_float);
	@SendWorldWndMessage(16, var_31_object);
}
EMIT "Stack[-1] = 0";


void PlayAttackMusicIfPlayer(object actor)
{
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	if(bPlayer != 0)
		@PlayGlobalMusic("attack");
}


void IsAccessible(bool result, object actor)
{
	object actorCopy;
	actor = actorCopy;
	bool bAccessible2;
	IsAccessible2_inline(bAccessible2, actorCopy);
	if(!bAccessible2) { //@nz
		result = false;
		return 2;
	}
	bool bHasNoaccess; object actorCopy2;
	HasProperty(bHasNoaccess, actorCopy2, "noaccess");
	if(!bHasNoaccess) { //@nz
		result = true;
		return 2;
	}
	int noaccessVal;
	actorCopy2->GetProperty("noaccess", noaccessVal);
	result = noaccessVal == 0;
}


// @pe
void GetDamageAmount(float result)
{
	result = 0.15;
}


// @pe
void GetDamageType(int result)
{
	result = 0;
}


void BroadcastBattle(void)
{
	object scene;
	@GetScene(scene);
	object selfObj;
	self(selfObj);
	@BroadcastMessage("battle", selfObj, scene);
}
EMIT "Stack[-1] = 0";


void WaitForTargetInRange(bool target, bool bGotInRange, float fAttackDist)
{
	bool var_444_bool; cvector var_445_cvector; cvector var_446_cvector; cvector var_447_cvector; float var_448_float;
	
	for(;;) {
		@IsAnimationPlaying(var_444_bool);
		if(!var_444_bool) //@nz
			break;
		bool var_450_bool;
		CheckAttackOpportunity(var_450_bool);
		if(var_450_bool != 0) {
			bGotInRange = true;
			return 10;
		}
		bool var_493_bool;
		IsAccessible(var_493_bool, target);
		if(!var_493_bool) { //@nz
			bGotInRange = false;
			return 10;
		}
		target->GetPFPosition(var_445_cvector); //@t
		@GetPFPosition(var_446_cvector);
		var_447_cvector = var_445_cvector - var_446_cvector;
		var_448_float = var_447_cvector | var_447_cvector;
		if(var_448_float < (fAttackDist * fAttackDist)) {
			bool var_498_bool; float var_499_float;
			fAttackDist = var_499_float;
			PlayAttackSequence(var_447_cvector, var_448_float, var_498_bool, var_499_float);
			bGotInRange = true;
			return 10;
		}
		@sync();
	}
	PlayAttackMusicIfPlayer_var(var_448_float);
	bGotInRange = false;
}


void GetHitType(int result)
{
	result = 1;
}


// @pe
void MaybeKillTarget(object target, float fDamage)
{
	bool var_613_bool = false;
	if(fDamage > 0) {
		bool var_616_bool; object var_617_object;
		target = var_617_object;
		IsZeroHealth(var_616_bool, var_617_object);
		if(var_616_bool != 0)
			var_613_bool = true;
	}
	if(var_613_bool != 0) {
		var_633_bool = GlobalVars[0];
		GlobalVars[0] = true;
		SetTrueByRef(fDamage);
	}
}


void IsGodMode(bool var_627_bool)
{
	bool var_629_bool;
	@GetVariable("god_mode", var_629_bool);
	var_629_bool = var_627_bool;
}


void GetIdleAnimation(string out, int n)
{
	string tmp = "idle";
	if(n != 0)
		tmp += n;
	tmp = out;
}


void IsAccessible2(bool result, object actor)
{
	if(actor == null) {
		result = false;
		return 6;
	}
	object selfScene;
	@GetScene(selfScene);
	if(selfScene == null) {
		result = false;
		return 6;
	}
	object actorScene;
	actor->GetScene(actorScene);
	if(selfScene != actorScene) {
		result = false;
		return 6;
	}
	bool var_32_bool; object var_33_object;
	HasProperty(var_32_bool, var_33_object, "noaccess");
	if(!var_32_bool) { //@nz
		result = true;
		return 6;
	}
	int var_28_int;
	var_33_object->GetProperty("noaccess", var_28_int);
	result = var_28_int == 0;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void GetIdleAnimationCount(int result)
{
	int n; bool hasAnim;
	n = 0;
	
	for(;;) {
		string var_73_string; int var_74_int;
		n = var_74_int;
		GetIdleAnimation(var_73_string, var_74_int);
		@HasAnimation(hasAnim, "all", var_73_string);
		if(!hasAnim) //@nz
			break;
		n += 1;
	}
	n = result;
}


void CalculateKnifeDirection(cvector var_152_cvector, cvector var_153_cvector, cvector var_154_cvector, float var_155_float)
{
	cvector var_162_cvector; float var_167_float;
	var_162_cvector = var_154_cvector - var_153_cvector;
	float var_163_float = 250000;
	var_168_float = GetByIndex(var_162_cvector, 1);
	float var_164_float = (var_168_float * 1000) - (var_155_float * var_155_float);
	float var_165_float = var_162_cvector | var_162_cvector;
	float var_172_float; float var_173_float; float var_174_float; float var_175_float;
	var_163_float = var_173_float;
	var_164_float = var_174_float;
	var_165_float = var_175_float;
	QuadraticDeterminant(var_172_float, var_173_float, var_174_float, var_175_float);
	float var_166_float;
	var_172_float = var_166_float;
	if(var_166_float < 0) {
		var_167_float = 1;
	} else {
		float var_186_float; float var_187_float; float var_188_float; float var_189_float; float var_190_float;
		var_163_float = var_187_float;
		var_164_float = var_188_float;
		var_165_float = var_189_float;
		var_190_float = sqrt(var_166_float);
		SolveQuadraticMinPos(var_187_float, var_188_float, var_189_float, var_190_float);
		var_167_float = sqrt(var_186_float);
	}
	var_152_cvector = (var_162_cvector + (([0.0, 500.0, 0.0] * var_167_float) * var_167_float)) / var_167_float;
	
}


void TAttackMeleeBase_init(bool actor, int g_bAttackRet, float m_bStopAttack, object actorParam, bool bRequireAttack, float fAttackDist, bool var_288_bool, bool var_378_bool)
{
	float fActorAttackDist; cvector var_232_cvector; cvector var_233_cvector; bool var_235_bool; float var_238_float; cvector var_239_cvector; bool var_240_bool; float var_241_float;
	PrepareAttackParams(var_239_cvector, var_240_bool, var_241_float);
	m_bStopAttack = 0;
	var_266_bool = IsFuncExist(actorParam, "@GetAttackDistance", 1);
	if(var_266_bool != 0) {
		actorParam->GetAttackDistance(fActorAttackDist);
		fActorAttackDist += 50;
	} else {
						fAttackDist = fActorAttackDist;
	}
	if(fActorAttackDist >= 150)
		fActorAttackDist = 150;
	g_bAttackRet = false;
	actor = actorParam;
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	if(bPlayer != 0) {
		@PlayGlobalMusic("attack");
		object var_272_object;
		self(var_272_object);
		@SendPlayerEnemy(actorParam, var_272_object);
	}
	if(bRequireAttack != 0)
		var_235_bool = false;
	else
		var_235_bool = true;

	
Label_243:
	for(;;) {
		bool var_275_bool = false;
		bool var_276_bool;
		IsAccessible(var_276_bool, actor);
		if(var_276_bool != 0) {
			if(!g_bAttackRet) //@nz
				var_275_bool = true;
		}
		if(var_275_bool != 0) {
			PlayAttackMusicIfPlayer_var(var_241_float);
			actor->GetPFPosition(var_232_cvector); //@t
			@GetPFPosition(var_233_cvector);
			var_238_float = (var_232_cvector - var_233_cvector) | (var_232_cvector - var_233_cvector);
			if(var_238_float >= ((300.0 + fActorAttackDist) * (300.0 + fActorAttackDist))) {
				bool var_282_bool; float var_284_float;
				fActorAttackDist = var_284_float;
				TaskCall(2);
				TAttackMeleeBase_FollowTarget(var_290_bool, var_282_bool, actor, var_284_float, 3000.0, true, false);
				TaskReturn();
				if(!var_288_bool) { //@nz
				} else {
					var_235_bool = false;
			} else {
			if(var_238_float >= (fAttackDist * fAttackDist)) {
				actor->GetPFPosition(var_239_cvector); //@t
				@CanReachByPF(var_240_bool, var_239_cvector);
				if(!var_240_bool) { //@nz
					bool var_372_bool; float var_374_float;
					fActorAttackDist = var_374_float;
					TaskCall(2);
					TAttackMeleeBase_FollowTarget(var_380_bool, var_372_bool, actor, var_374_float, 3000.0, true, false);
					TaskReturn();
					if(!var_378_bool) { //@nz
						goto Label_415;
					}
					var_235_bool = false;
					goto Label_243;
				}
				if(!var_235_bool) { //@nz
					RotateToActor(actor);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					PlayAttackMusicIfPlayer_var(var_241_float);
					@StopAsync();
					var_235_bool = true;
					bool var_394_bool;
					IsAccessible(var_394_bool, actor);
					if(!var_394_bool) { //@nz
						goto Label_415;
					}
				}
				@rand(var_241_float);
				bool var_397_bool;
				var_399_bool = var_241_float < 0.19999999;
				if(var_399_bool != 1) {
					bool var_400_bool;
					IsAttacking(true, var_400_bool);
					if(var_400_bool != 1)
						var_397_bool = false;
				}
				if(var_397_bool != 0) {
					@Face(actor);
					PlayAttackStaySound();
					@PlayAnimation("all", "attack_stay");
					bool var_437_bool; float var_438_float;
					WaitForTargetInRange(var_241_float, var_437_bool, var_438_float);
					@StopAsync();
				} else {
					@Face(actor);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					PlayAttackMusicIfPlayer_var(var_241_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_676_bool;
					IsAttacking(var_241_float, var_676_bool);
					var_677_bool = !var_676_bool; //@nz
					if(var_677_bool == 0) goto Label_405;
					bool var_678_bool;
					IsAccessible(var_678_bool, actor);
					if(!var_678_bool) { //@nz
						goto Label_415;
					}
					actor->GetPFPosition(var_232_cvector); //@t
					@GetPFPosition(var_233_cvector);
					if(!(((var_232_cvector - var_233_cvector) | (var_232_cvector - var_233_cvector)) < (var_438_float * var_438_float))) goto Label_405;
					bool var_683_bool; float var_684_float;
					fAttackDist = var_684_float;
					PlayAttackSequence(var_240_bool, var_241_float, var_683_bool, var_684_float);
					var_685_bool = !var_683_bool; //@nz
					if(var_685_bool == 0) goto Label_405;
					goto Label_415;
			}
				bool var_686_bool; float var_687_float;
				fAttackDist = var_687_float;
				PlayAttackSequence(var_240_bool, var_241_float, var_686_bool, var_687_float);
				if(!var_686_bool) { //@nz
					goto Label_415;
				}
				var_235_bool = true;

			}
		Label_405:
			goto Label_414;
			}
			Label_414:
			}
		}
	Label_415:
		@WaitForAnimEnd();
		if(g_bAttackRet != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(bPlayer != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void IsTargetInAttackRange(bool target, bool result)
{
	cvector var_458_cvector; cvector var_459_cvector;
	bool var_463_bool;
	IsAccessible(var_463_bool, target);
	if(!var_463_bool) { //@nz
		result = false;
		return 10;
	}
	bool var_466_bool;
	float fAttackDist;
	IsAttacking(fAttackDist, var_466_bool);
	if(var_466_bool != 0) {
		target->GetPFPosition(var_458_cvector); //@t
		@GetPFPosition(var_459_cvector);
		target->GetAttackDistance(fAttackDist); //@t
		result = ((var_458_cvector - var_459_cvector) | (var_458_cvector - var_459_cvector)) <= ((fAttackDist + 50) * (fAttackDist + 50));
		return 10;
	}
	result = false;
}


void RotateToPosition(bool result, cvector target)
{
	cvector selfPos;
	@GetPosition(selfPos);
	cvector delta = target - selfPos;
	dx = GetByIndex(delta, 0);
	dz = GetByIndex(delta, 2);
	bool rotated;
	@Rotate(dx, dz, rotated);
	rotated = result;
}


void RotateToActorVariant(bool result, object actor)
{
	cvector pos;
	actor->GetPosition(pos);
	bool rotated; cvector posCopy;
	pos = posCopy;
	RotateToPosition(rotated, posCopy);
	rotated = result;
}


void TFollowBase_CancelActivity(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void GetWalkAnimName_search(string out)
{
	out = "walk";
}


void CheckAttackOpportunity(bool var_450_bool)
{
	bool var_451_bool = false;
	bool var_452_bool;
	IsTargetInAttackRange(var_451_bool, var_452_bool);
	if(var_452_bool != 0) {
		bool var_469_bool;
		BackJumpIfFarther(var_450_bool, var_451_bool, var_469_bool);
		if(var_469_bool != 0)
			var_451_bool = true;
	}
	if(var_451_bool != 0) {
		var_450_bool = true;
		return 0;
	}
	var_450_bool = false;
}


void GetRunAnimName_search(string out)
{
	out = "run";
}


void PlayHitReaction(object attacker)
{
	string strHitAnim;
	if(attacker == null)
		return 14;
	bool var_41_bool;
	@IsDead(var_41_bool);
	if(var_41_bool != 0)
		return 14;
	int var_42_int;
	@GetSecondaryAnimationType(var_42_int);
	if(var_42_int < 0)
		return 14;
	cvector attackerPos;
	attacker->GetPosition(attackerPos);
	cvector selfPos;
	@GetPosition(selfPos);
	cvector selfDir;
	@GetDirection(selfDir);
	cvector delta = selfPos - attackerPos;
	var_52_float = GetByIndex(delta, 0);
	var_53_float = GetByIndex(selfDir, 0);
	var_55_float = GetByIndex(delta, 2);
	var_56_float = GetByIndex(selfDir, 2);
	if(((var_52_float * var_53_float) + (var_55_float * var_56_float)) >= 0)
		strHitAnim = "fhit";
	else
		strHitAnim = "bhit";
	@FadeSecondaryAnimation("hit_react", (strHitAnim + "1"), (strHitAnim + "2"), -10);
	
}


// @pe
void TAttack_init(bool result, object actor)
{
	bool bPlayer; object actorCopy;
	IsPlayerActor(bPlayer, actorCopy);
	if(bPlayer != 0) {
		object selfObj;
		self(selfObj);
		@SendPlayerEnemy(actorCopy, selfObj);
	}
	bool bSuperOk; object actorCopy2;
	TAttackBase_init(result, actorCopy2, bSuperOk, actorCopy2);
	bSuperOk = result;
}


void func_2794(bool var_26_bool, object var_27_object)
{
	bool var_32_bool; object var_33_object;
	HasProperty(var_32_bool, var_33_object, "class");
	if(!var_32_bool) //@nz
		var_26_bool = false;
	string var_30_string;
	@GetProperty("class", var_30_string);
	string var_31_string;
	var_33_object->GetProperty("class", var_31_string);
	var_26_bool = var_31_string == var_30_string;
}


void TWanderBase_init(bool tmp, object actor)
{
	float var_28_float; cvector var_29_cvector; cvector var_30_cvector; bool var_31_bool; object var_32_object; bool var_33_bool;
	@rand(var_28_float, 0.5);
	@Sleep(var_28_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_1272:
				@GetPosition(var_30_cvector);
				float var_37_float;
				GetCameraFarDistance(var_37_float);
				@GetRandomPFPointInCircle(var_29_cvector, var_30_cvector, var_37_float, var_31_bool);
				if(var_31_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_1272;
			}
				actor = false;
		}
		}
		goto Label_1288;

	Label_1288:
		object var_41_object; cvector var_42_cvector;
		var_29_cvector = var_42_cvector;
		FindShiftedPathTo(var_41_object, var_42_cvector);
		var_41_object = var_32_object;
		if(var_32_object != null) {
			@RotatePath(var_32_object, var_33_bool);
			if(var_33_bool != 0) {
				bool var_47_bool;
				GetFollowPathFlag(var_47_bool);
				@FollowPath(var_32_object, var_47_bool, var_33_bool);
				var_32_object = null;
				if(var_33_bool != 0) {
					TaskCall(4);
					TIdleBase_init();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_32_object = null;
	}
	
}


void BackJumpIfFarther(bool target, bool fBjumpDist, bool result)
{
	object var_475_object; float var_477_float; cvector var_478_cvector; cvector var_479_cvector;
	@GetScene(var_475_object);
	bool var_476_bool = false;
	
	for(;;) {
		cvector var_480_cvector;
		GetActorDelta(var_480_cvector, target);
		var_486_int = -var_480_cvector;
		@FindDirLength(var_477_float, var_486_int, fBjumpDist);
		if(var_477_float < fBjumpDist) {
		} else {
				@Face(target);
				@PlayAnimation("all", "bjump");
				target->GetPFPosition(var_478_cvector); //@t
				@GetPFPosition(var_479_cvector);
				@WaitForAnimEnd();
				PlayAttackMusicIfPlayer_var(var_479_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_476_bool = true;
				bool var_491_bool;
				IsTargetInAttackRange(var_479_cvector, var_491_bool);
				var_492_bool = !var_491_bool; //@nz
				if(var_492_bool == 0) goto Label_800;
		}
		for(;;) {
			var_476_bool = result;

		}

	Label_800:
	}
}
EMIT "Stack[-5] = 0";


void TAttackBase_init(bool result, object actor, bool var_94_bool, object var_697_object)
{
	object actorCopy;
	actor = actorCopy;
	bool bAccessible;
	IsAccessible(bAccessible, actorCopy);
	if(!bAccessible) { //@nz
		result = false;
		return 2;
	}
	float fDist2; object actorCopy2;
	actor = actorCopy2;
	GetActorDistanceSqr(fDist2, actorCopy2);
	float fDist2Copy;
	fDist2 = fDist2Copy;
	bool bInRange; float fDist2Copy2;
	betweenf(bInRange, fDist2Copy2, 250000.0, 3240000.0);
	if(bInRange != 0) {
		bool var_92_bool; object var_93_object;
		actor = var_93_object;
		TaskCall(0);
		TAlternateAttack_init_body(fDist2Copy2, var_94_bool, var_92_bool, var_93_object);
		TaskReturn();
		var_94_bool = result;
		return 2;
	}
	bool var_695_bool; object var_696_object;
	actor = var_696_object;
	TaskCall(1);
	TMeleeAttack_init_body(var_695_bool, var_696_object);
	TaskReturn();
	var_697_object = result;
}


void InitGlobals(void)
{
	var_16_object = GlobalVars[1];
	object newSet;
	CreateObjectSet(newSet);
	newSet = var_16_object;
	GlobalVars[1] = var_16_object;
}


void IsEnemy(bool result, object actor)
{
	float fReputation;
	bool var_27_bool; object var_28_object;
	IsAccessible(var_27_bool, var_28_object);
	if(!var_27_bool) { //@nz
		result = false;
		return 6;
	}
	var_62_object = GlobalVars[1];
	bool bInEnemySet;
	var_62_object->in(bInEnemySet, var_28_object);
	if(bInEnemySet != 0) {
		result = true;
		return 6;
	}
	bool var_64_bool; object var_65_object;
	IsPlayerActor(var_64_bool, var_65_object);
	if(var_64_bool != 0) {
		var_65_object->GetProperty("reputation", fReputation);
		result = fReputation >= 0.33;
		return 6;
	}
	bool var_70_bool; object var_71_object;
	HasProperty(var_70_bool, var_71_object, "class");
	if(!var_70_bool) { //@nz
		result = false;
		return 6;
	}
	string strClass;
	var_71_object->GetProperty("class", strClass);
	bool var_75_bool; string var_76_string;
	strClass = var_76_string;
	IsCommonClass(var_75_bool, var_76_string);
	var_75_bool = result;
}


void OnHitImpl(object actor, int iHitType, float fDamage)
{
	cvector var_32_cvector; object var_33_object; int var_34_int; bool var_35_bool; cvector var_36_cvector; cvector var_37_cvector;
	bool var_41_bool = false;
	bool var_42_bool = false;
	if(actor != 0) {
		if(iHitType != 4)
			var_42_bool = true;
	}
	if(var_42_bool != 0) {
		if(iHitType != 5)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		cvector var_48_cvector; cvector var_49_cvector;
		cvector var_50_cvector; object var_51_object;
		actor = var_51_object;
		GetActorDelta(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		Normalize(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		@CreateVectorVector(var_33_object);
		var_34_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_34_int), var_35_bool, var_36_cvector, var_37_cvector);
			if(!var_35_bool) { //@nz
				break;
			Label_2384:
				var_33_object = null;
	}
			object var_110_object;
			actor = var_110_object;
			PlayHitReaction(var_110_object);
		}
		if((var_37_cvector | var_32_cvector) >= 0.70710677)
			var_33_object->add(var_36_cvector);
		var_34_int += 1;
	}
	int var_38_int;
	var_33_object->size(var_38_int);
	if(var_38_int == 0) goto Label_2384;
	int var_39_int;
	@irand(var_39_int, var_38_int);
	cvector var_40_cvector;
	var_33_object->get(var_40_cvector, var_39_int);
	object var_65_object; int var_66_int; float var_67_float; cvector var_68_cvector; cvector var_69_cvector;
	actor = var_65_object;
	iHitType = var_66_int;
	fDamage = var_67_float;
	var_40_cvector = var_68_cvector;
	var_69_cvector = -var_32_cvector;
	OnHit2Impl(var_67_float, var_68_cvector, var_69_cvector);
}


void TDeath_init(object actor)
{
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	if(bPlayer != 0)
		GenerateGrabitelItems();
	AddOrgans();
	object actorCopy;
	actor = actorCopy;
	TDeathDirBase_init(actorCopy);
}


void IsAttacking(bool actor, bool result)
{
	bool bAttacking;
	var_405_bool = IsFuncExist(actor, "IsAttacking", 1);
	if(var_405_bool != 0) {
		actor->IsAttacking(bAttacking); //@t
		bAttacking = result;
	}
	result = false;
}


void GetCameraFarDistance(float var_37_float)
{
	float var_39_float;
	@GetCameraFarDistance(var_39_float);
	var_39_float = var_37_float;
}


void SpeakAttack(int iNumAttackSounds, float fLastTime)
{
	int iWhich;
	if(!iNumAttackSounds) //@nz
		return 4;
	if(fLastTime != 0) {
		if((fLastTime + -1) > 0)
			return 4;
	}
	float fRoll;
	@rand(fRoll);
	float fProb;
	GetSpeakAttackProbability(fProb);
	if(fRoll < fProb) {
		@irand(iWhich, iNumAttackSounds);
		@Speak("attack" + (iWhich + 1));
		int iIncr;
		GetSpeakAttackCount(iIncr);
		fLastTime = iIncr;
	}
}


// @pe
void FilterHearNormal(bool result, object actor)
{
	object var_20_object;
	actor = var_20_object;
	bool bIsEnemy;
	IsEnemy(bIsEnemy, var_20_object);
	bIsEnemy = result;
}


// @pe
void TDeathDirBase_init(object killer)
{
	object killerCopy;
	killer = killerCopy;
	TDeathDirBase_PlayDeathAnim(killerCopy);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void TWanderBase_CancelActivity(bool out_a, object out_b)
{
	out_a = true;
	out_b = false;
	@Stop();
	@StopGroup0();
}


// @pe
void HandleHearNormal(object actor)
{
	object actorCopy;
	actor = actorCopy;
	TaskCall(7);
	bool bAttackOk;
	TAttack_init(bAttackOk, actorCopy);
	TaskReturn();
	if(bAttackOk != 0) {
		object var_754_object;
		actor = var_754_object;
		TaskCall(6);
		TSearch_init(var_757_bool, var_754_object);
		TaskReturn();
	}
	@ResetAAS();
}


void CancelActivityAndKP(bool out_a, object out_b)
{
	out_a = true;
	out_b = true;
	@Stop();
	@StopGroup0();
}


void GetFollowPathFlag(bool var_47_bool)
{
	var_47_bool = false;
}


void FindShiftedPathTo(object path, cvector target)
{
	object tmp;
	@FindShiftedPathTo(tmp, target);
	tmp = path;
}
EMIT "Stack[-1] = 0";


// @pe
void FilterSeeNormal(bool result, object actor)
{
	object var_20_object;
	actor = var_20_object;
	bool bIsEnemy;
	IsEnemy(bIsEnemy, var_20_object);
	bIsEnemy = result;
}


void TDeathDirBase_PlayDeathAnim(object killer)
{
	cvector killerPos; cvector selfPos; cvector selfDir; cvector delta; string animName; object ownerObj; bool var_144_bool; bool var_145_bool; float fEyesHeight; cvector lookOffset;
	if(killer == null) {
		PlayDeathFromNullActor("fdie");
	} else {
		killer->GetPosition(killerPos);
		@GetPosition(selfPos);
		@GetDirection(selfDir);
		delta = selfPos - killerPos;
		var_181_float = GetByIndex(delta, 0);
		var_182_float = GetByIndex(selfDir, 0);
		var_184_float = GetByIndex(delta, 2);
		var_185_float = GetByIndex(selfDir, 2);
		if(((var_181_float * var_182_float) + (var_184_float * var_185_float)) >= 0)
			animName = "fdie";
		else
			animName = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		killer = ownerObj;
		var_192_bool = IsFuncExist(killer, "GetScriptProperty", 2);
		if(var_192_bool != 0) {
			killer->HasScriptProperty(var_144_bool, "Owner");
			if(var_144_bool != 0) {
				killer->GetScriptProperty(ownerObj, "Owner");
				if(ownerObj == null)
					killer = ownerObj;
			}
		}
		var_199_bool = IsFuncExist(ownerObj, "@GetEyesHeight", 1);
		if(var_199_bool != 0) {
			ownerObj->GetEyesHeight(fEyesHeight);
			lookOffset = [0.0, 0.0, 0.0];
			var_200_float = GetByIndex(lookOffset, 1);
			fEyesHeight = var_200_float;
			SetByIndex(lookOffset, 1) = var_200_float;
			@LookAsync(killer, "head", lookOffset);
			var_145_bool = true;
		} else {
			var_145_bool = false;

		}
		string var_202_string;
		animName = var_202_string;
		PlayCombatSound(var_202_string);
		@PlayAnimation("all", animName);
		@WaitForAnimEnd();
		if(var_145_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", animName);
		@RemoveEnvelope();
		ownerObj = null;
	}
	
}


void PlayAttackMusicIfPlayer_var(bool var_0_bool)
{
	PlayAttackMusicIfPlayer(var_0_bool);
}


// @pe
void HandleSeeNormal(object actor)
{
	object actorCopy;
	actor = actorCopy;
	TaskCall(7);
	bool bAttackOk;
	TAttack_init(bAttackOk, actorCopy);
	TaskReturn();
	if(bAttackOk != 0) {
		object var_754_object;
		actor = var_754_object;
		TaskCall(6);
		TSearch_init(var_757_bool, var_754_object);
		TaskReturn();
	}
	@ResetAAS();
}


void PlayAttackStaySound(void)
{
	PlayCombatSound("attack_stay");
}


void OnHit2Impl(object actor, cvector vPos, cvector vDir)
{
	object var_29_object;
	@GetScene(var_29_object);
	object var_30_object;
	@AddActorByType(var_30_object, "scripted", var_29_object, vPos, vDir, "blood_dir.xml");
	object var_33_object;
	actor = var_33_object;
	PlayHitReaction(var_33_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void GetTrueFlag(bool result)
{
	result = true;
}


void GetSpeakAttackCount(int result)
{
	result = 1;
}


void GetSpeakAttackProbability(float result)
{
	result = 0.5;
}


void HandleAttackBase(object actor)
{
	if(actor == null) {
	}
	var_24_object = GlobalVars[1];
	bool var_22_bool;
	var_24_object->in(var_22_bool, actor);
	if(!var_22_bool) { //@nz
		var_26_object = GlobalVars[1];
		var_26_object->add(actor);
	}
}


void RotateToActor(object actor)
{
	cvector actorPos;
	actor->GetPosition(actorPos);
	cvector selfPos;
	@GetPosition(selfPos);
	cvector delta = actorPos - selfPos;
	dx = GetByIndex(delta, 0);
	dz = GetByIndex(delta, 2);
	@RotateAsync(dx, dz);
}


// @pe
void HandleAttack(object actor)
{
	object actorCopy;
	actor = actorCopy;
	HandleAttackBase(actorCopy);
	bool bAccessible; object actorCopy2;
	actor = actorCopy2;
	IsAccessible(bAccessible, actorCopy2);
	if(!bAccessible) //@nz
		return 0;
	bool bAttackedOk; object actorCopy3;
	actor = actorCopy3;
	TaskCall(7);
	TAttack_init(bAttackedOk, actorCopy3);
	TaskReturn();
	if(bAttackedOk != 0) {
		object var_703_object;
		actor = var_703_object;
		TaskCall(6);
		TSearch_init(var_706_bool, var_703_object);
		TaskReturn();
	}
	@ResetAAS();
}


void IsLoaded(bool var_63_bool)
{
	bool var_65_bool;
	@IsLoaded(var_65_bool);
	var_65_bool = var_63_bool;
}


void LookAtActorHead(object actor)
{
	float fEyesHeight;
	actor->GetEyesHeight(fEyesHeight);
	cvector vOffset = [0.0, 0.0, 0.0];
	var_304_float = GetByIndex(vOffset, 1);
	fEyesHeight = var_304_float;
	SetByIndex(vOffset, 1) = var_304_float;
	@LookAsync(actor, "head", vOffset);
}


void TAttackMeleeBase_FollowTarget(int iOut, bool bOk, object target, float fApproachDist, float fMaxDist, bool bWalkMode, bool bRunMode)
{
	object targetForMusic;
	PlayAttackMusicIfPlayer(targetForMusic);
	@SetTimer(1, 5);
	bool bCanSee;
	@CanSee(bCanSee, targetForMusic);
	if(bCanSee != 0) {
		iOut = true;
		object var_299_object;
		target = var_299_object;
		LookAtActorHead(var_299_object);
	} else {
		iOut = false;
	}
	bool var_306_bool; object var_307_object;
	IsPlayerActor(var_306_bool, var_307_object);
	if(var_306_bool != 0) {
		object var_308_object;
		self(var_308_object);
		@SendPlayerEnemy(var_307_object, var_308_object);
	}
	bool var_309_bool; object var_310_object; float var_311_float; float var_312_float; bool var_313_bool; bool var_314_bool;
	target = var_310_object;
	fApproachDist = var_311_float;
	fMaxDist = var_312_float;
	bWalkMode = var_313_bool;
	bRunMode = var_314_bool;
	bool var_294_bool;
	TFollowBase_init(bCanSee, var_294_bool, var_309_bool, var_310_object, var_311_float, var_312_float, var_313_bool, var_314_bool);
	var_309_bool = var_294_bool;
	if(iOut != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_294_bool = bOk;
	
}


void TIdleBase_init(void)
{
	int var_58_int; int var_59_int; bool var_60_bool; float var_61_float; bool var_62_bool;
	@WaitForAnimEnd();
	bool var_63_bool;
	IsLoaded(var_63_bool);
	if(!var_63_bool) //@nz
		return 14;
	int var_67_int;
	GetIdleAnimationCount(var_67_int);
	int var_56_int;
	var_67_int = var_56_int;
	int var_57_int = 0;
	
	for(;;) {
		bool var_80_bool = false;
		if(var_57_int < 5) {
			bool var_83_bool;
			IsLoaded(var_83_bool);
			if(var_83_bool != 0)
				var_80_bool = true;
		}
		if(var_80_bool != 0) {
			@irand(var_58_int, 3);
			if(var_58_int == 0) {
				if(var_56_int == 0) goto Label_1449;
				@irand(var_59_int, var_56_int);
				string var_89_string; int var_90_int;
				var_59_int = var_90_int;
				GetIdleAnimation(var_89_string, var_90_int);
				@PlayAnimation("all", var_89_string);
				@WaitForAnimEnd(var_60_bool);
				if(!var_60_bool) { //@nz
				} else {
			} else {
			if(var_58_int == 1) {
				@rand(var_61_float, 4);
				@Sleep((var_61_float + 1), var_62_bool);
				if(!var_62_bool) { //@nz
					goto Label_1478;
				}
			} else if(var_57_int != 0) {
				goto Label_1478;
			}
			}
					bool var_92_bool;
					ContinueIdle(var_92_bool);
					var_93_bool = !var_92_bool; //@nz
					if(var_93_bool == 0) goto Label_1473;
			}
		}
	Label_1478:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1473:
		@ResetAAS();
		var_57_int += 1;
	}
	
}


void func_2431(string var_88_string, int var_89_int, int var_90_int)
{
	bool var_92_bool;
	int var_94_int;
	var_89_int = var_94_int;
	int var_95_int;
	var_90_int = var_95_int;
	bool var_93_bool;
	RandomBool(var_93_bool, var_94_int, var_95_int);
	if(var_93_bool != 0)
		@AddItem(var_92_bool, var_88_string, 0);
}


void FilterPlayerDamage(bool result, object player, object actor)
{
	bool bCanSee; float fActorDistSqr;
	object var_27_object;
	actor = var_27_object;
	bool var_26_bool;
	func_2794(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		@CanSee(bCanSee, player);
		float var_44_float; object var_45_object;
		player = var_45_object;
		GetActorDistanceSqr(var_44_float, var_45_object);
		var_44_float = fActorDistSqr;
		bool var_52_bool = false;
		if(fActorDistSqr <= 1000000.0) {
			bool var_55_bool = true;
			if(bCanSee != 1) {
				var_58_bool = fActorDistSqr <= 490000.0;
				if(var_58_bool != 1)
					var_55_bool = false;
			}
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0)
			result = true;
	}
	result = false;
}


void PlayCombatSound(string var_150_string)
{
	bool var_159_bool; int var_160_int; bool var_161_bool; int var_162_int; bool var_163_bool; float var_164_float; cvector var_165_cvector; cvector var_166_cvector;
	@IsExisting3DSound(var_159_bool, var_150_string);
	if(!var_159_bool) { //@nz
		var_160_int = 0;

		for(;;) {
			@IsExisting3DSound(var_161_bool, (var_150_string + (var_160_int + 1)));
			if(!var_161_bool) { //@nz
				break;
			Label_2462:
				@irand(var_162_int, var_160_int);
				var_150_string += (var_162_int + 1);
	}
			@Is3DSoundLoaded(var_163_bool, var_150_string);
			if(var_163_bool != 0) {
				@GetEyesHeight(var_164_float);
				@GetDirection(var_165_cvector);
				var_166_cvector = var_165_cvector * 50;
				var_177_float = GetByIndex(var_166_cvector, 1);
				SetByIndex(var_166_cvector, 1) = (var_177_float + var_164_float);
				@PlayGlobalSound(var_150_string, var_166_cvector);
			}
		}
		var_160_int += 1;
	}
	var_172_bool = !var_160_int; //@nz
	if(var_172_bool == 0) goto Label_2462;
}


// @pe
void PlayDeathFromNullActor(string animName)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string soundKey;
	animName = soundKey;
	PlayCombatSound(soundKey);
	@PlayAnimation("all", animName);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", animName);
	@RemoveEnvelope();
}


// @pe
void HandleDeath_global(object actor)
{
	object actorCopy;
	actor = actorCopy;
	bool bIsPlayer;
	IsPlayerActor(bIsPlayer, actorCopy);
	if(bIsPlayer != 0) {
		bool bRepOk; object actorCopy2;
		actor = actorCopy2;
		PlayerModReputation(bRepOk, actorCopy2, 0.05);
	}
	object var_60_object;
	actor = var_60_object;
	TaskCall(8);
	TDeath_init(var_60_object);
	TaskReturn();
}


void PrepareAttackParams(object nAttacks, int nAttackSounds, bool fBjumpZ)
{
	bool var_245_bool; bool var_246_bool; cvector var_247_cvector;
	nAttacks = 0;
	
	for(;;) {
		@HasAnimation(var_245_bool, "all", ("attack_begin" + (nAttacks + 1)));
		if(!var_245_bool) { //@nz
		} else {
			nAttacks += 1;
		}
		nAttackSounds = 0;

		for(;;) {
			@IsExisting3DSound(var_246_bool, ("attack" + (nAttackSounds + 1)));
			if(!var_246_bool) //@nz
				break;
			nAttackSounds += 1;
		}
		@GetAnimationOffset(var_247_cvector, "all", "bjump");
		var_261_float = GetByIndex(var_247_cvector, 2);
		fBjumpZ = -var_261_float;

	}
}


// @pe
void IsCommonClass(bool result, string strClass)
{
	result = true;
	bool var_77_bool = true;
	bool var_78_bool = true;
	bool var_79_bool = true;
	bool var_80_bool = true;
	bool var_81_bool = true;
	bool var_82_bool = true;
	bool var_83_bool = true;
	bool var_84_bool = true;
	bool var_85_bool = true;
	bool var_86_bool = true;
	bool var_87_bool = true;
	var_89_bool = strClass == "woman";
	if(var_89_bool != 1) {
		var_91_bool = strClass == "worker";
		if(var_91_bool != 1)
			var_87_bool = false;
	}
	if(var_87_bool != 1) {
		var_93_bool = strClass == "butcher";
		if(var_93_bool != 1)
			var_86_bool = false;
	}
	if(var_86_bool != 1) {
		var_95_bool = strClass == "wasted_girl";
		if(var_95_bool != 1)
			var_85_bool = false;
	}
	if(var_85_bool != 1) {
		var_97_bool = strClass == "boy";
		if(var_97_bool != 1)
			var_84_bool = false;
	}
	if(var_84_bool != 1) {
		var_99_bool = strClass == "vaxxabitka";
		if(var_99_bool != 1)
			var_83_bool = false;
	}
	if(var_83_bool != 1) {
		var_101_bool = strClass == "unosha";
		if(var_101_bool != 1)
			var_82_bool = false;
	}
	if(var_82_bool != 1) {
		var_103_bool = strClass == "wasted_male";
		if(var_103_bool != 1)
			var_81_bool = false;
	}
	if(var_81_bool != 1) {
		var_105_bool = strClass == "alkash";
		if(var_105_bool != 1)
			var_80_bool = false;
	}
	if(var_80_bool != 1) {
		var_107_bool = strClass == "dohodyaga";
		if(var_107_bool != 1)
			var_79_bool = false;
	}
	if(var_79_bool != 1) {
		var_109_bool = strClass == "vaxxabit";
		if(var_109_bool != 1)
			var_78_bool = false;
	}
	if(var_78_bool != 1) {
		var_111_bool = strClass == "nudegirl";
		if(var_111_bool != 1)
			var_77_bool = false;
	}
	if(var_77_bool != 1) {
		var_113_bool = strClass == "morlok";
		if(var_113_bool != 1)
			result = false;
	}
}


void ResetSeenAndKillTimer1(int m_bSeenPlayer)
{
	@KillTimer(1);
	if(m_bSeenPlayer != 0) {
		m_bSeenPlayer = false;
		@UnlookAsync("head");
	}
	StopAttackTimer(outBool);
}


// @pe
void func_1988(string var_573_string, int var_574_int)
{
	if(var_574_int == 2) {
		var_573_string = "fire";
		return 0;
	EMIT "GOTO 0x7d0";
	}
	if(var_574_int == 1) {
		var_573_string = "bullet";
		return 0;
	}
	var_573_string = "phys";
}


void ContinueIdle(bool result)
{
	result = true;
}


void TIdle_CancelActivity(void)
{
	@StopAnimation();
	@StopGroup0();
}


void TCamp_init(bool result)
{
	bool bSuccess;
	@Sleep(5, bSuccess);
	result = !bSuccess;
}


void GetActorDelta(cvector out, object actor)
{
	cvector selfPos;
	@GetPosition(selfPos);
	cvector actorPos;
	actor->GetPosition(actorPos);
	out = actorPos - selfPos;
}


void ProcessAttackHit(bool actor, float fHitDist, int iAttackType)
{
	object victim; float fDamageAmount; float fActualDamage;
	@GetVictim((fHitDist * 0.9), victim);
	@ReportAttack(actor);
	if(victim == actor) {
		float fDamageOut; object var_543_object; int iDamageType;
		victim = var_543_object;
		iAttackType = iDamageType;
		GetDamageAmount(iDamageType);
		fDamageOut = fDamageAmount;
		float var_545_float; object var_546_object; float fDamageRecv; int iDamageTypeRecv;
		victim = var_546_object;
		int iArmor; object var_550_object; int iDamageTypeFinal;
		victim = var_550_object;
		iAttackType = iDamageTypeFinal;
		GetDamageType(iDamageTypeFinal);
		iArmor = iDamageTypeRecv;
		ApplyDamage(var_545_float, var_546_object, fDamageRecv, iDamageTypeRecv);
		var_545_float = fActualDamage;
		int iHitType;
		GetHitType(iHitType);
		@ReportHit(actor, iHitType, fActualDamage, fDamageRecv);
		object var_611_object; float fOut;
		victim = var_611_object;
		fActualDamage = fOut;
		MaybeKillTarget(var_611_object, fOut);
	}
}
EMIT "Stack[-3] = 0";


void TCamp_CancelActivity(void)
{
	@StopGroup0();
}


void GetActorDistanceSqr(float distSqr, object actor)
{
	cvector selfPos;
	@GetPosition(selfPos);
	cvector actorPos;
	actor->GetPosition(actorPos);
	distSqr = (actorPos - selfPos) | (actorPos - selfPos);
}


void TFollowBase_init(bool result_marker, object var_1_object, bool bOk, object actor, float fStartDist, float fLooseDist, bool bWalkMode, bool bRunMode)
{
	bool var_323_bool; object var_325_object; cvector var_326_cvector; cvector var_327_cvector; float var_329_float; object var_330_object;
	result_marker = false;
	var_1_object = actor;
	bool var_324_bool;
	bRunMode = var_324_bool;
	
	for(;;) {
		bool var_331_bool; object var_332_object;
		actor = var_332_object;
		ContinueFollowWrapper(var_331_bool, var_332_object);
		if(!var_331_bool) { //@nz
			bOk = false;
			return 16;
		}
		actor->GetPosition(var_326_cvector);
		@GetPosition(var_327_cvector);
		var_329_float = (var_326_cvector - var_327_cvector) | (var_326_cvector - var_327_cvector);
		bool var_336_bool = false;
		if(fLooseDist > 0) {
			if(var_329_float > (fLooseDist * fLooseDist))
				var_336_bool = true;
		}
		if(var_336_bool != 0) {
			@Stop();
			bOk = false;
			return 16;
		}
		if(var_329_float > (fStartDist * fStartDist)) {
			actor->GetPFPosition(var_326_cvector);
			@FindPathTo(var_330_object, var_326_cvector);
			if(var_330_object != null) {
				var_330_object = var_325_object;
				var_330_object = null;
			}
			if(var_325_object != null) {
				if(var_324_bool == 0) goto Label_1045;
				var_324_bool = false;
				@RotatePath(var_325_object, var_323_bool);
				if(!var_323_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_349_string;
						GetWalkAnimName(var_349_string);
						string var_350_string;
						GetRunAnimName(var_350_string);
						@FollowPath(var_325_object, bWalkMode, var_323_bool, var_349_string, var_350_string);
						if(!var_323_bool) { //@nz
							if(result_marker == 0) goto Label_1064;
							var_325_object = null;
						}
					EMIT "GOTO 0x429";

					Label_1064:
						} else {
					var_325_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_323_bool);
					if(!var_323_bool) { //@nz
						if(result_marker != 0) {
							var_325_object = null;
							goto Label_1092;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1092;
		}
			var_330_object = null;
			goto Label_1090;

		Label_1090:
			var_325_object = null;

		}
	Label_1092:
		for(;;) {
			bOk = !result_marker;
			return 16;

			}
	}
	
}


void IsPlayerActor(bool result, object actor)
{
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	bPlayer = result;
}


void GetBranch(int branch)
{
	int tmp;
	@GetVariable("branch", tmp);
	tmp = branch;
}


void HasProperty(bool result, object actor, string propName)
{
	var_48_bool = IsFuncExist(actor, "HasProperty", 2);
	if(!var_48_bool) { //@nz
		result = false;
		return 2;
	}
	bool bHas;
	actor->HasProperty(propName, bHas);
	bHas = result;
}


// @pe
void TDeathDirUsable_OnUse(object var_20_object)
{
	int var_21_int;
	GetBranch(var_21_int);
	if(var_21_int == 1)
		@WorkWithCorpse(var_20_object);
	else
		@Barter(var_20_object);
	
}


void ModifyClampedProperty(bool var_33_bool, object var_34_object, string var_35_string, float var_36_float, float var_37_float, float var_38_float)
{
	object var_42_object;
	var_34_object = var_42_object;
	string var_43_string;
	var_35_string = var_43_string;
	bool var_41_bool;
	HasProperty(var_41_bool, var_42_object, var_43_string);
	if(!var_41_bool) //@nz
		var_33_bool = false;
	float var_40_float;
	var_34_object->GetProperty(var_35_string, var_40_float);
	float var_51_float; float var_53_float; float var_54_float;
	var_37_float = var_53_float;
	var_38_float = var_54_float;
	clampf(var_51_float, (var_40_float + var_36_float), var_53_float, var_54_float);
	var_34_object->SetProperty(var_35_string, var_51_float);
	var_33_bool = true;
}


void GenerateMoney(int iMin, int iMax)
{
	if(iMin > iMax) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int n = 0;
	if(iMin != iMax) {
		@irand(n, (iMax - iMin));
	} else if(iMin == 0) {
		return 4;
	}
	n += iMin;
	if(n == 0)
		return 4;
	int moneyID;
	GetInvItemIDByName(moneyID, "Money");
	bool bOk;
	@AddItem(bOk, moneyID, 0, n);
	
}


void PlayAttackSequence(bool actor, object nAttacks, bool var_498_bool, float var_499_float)
{
	string strAnim;
	PlayAttackMusicIfPlayer_var(strAnim);
	int iWhich;
	@irand(iWhich, nAttacks);
	@Face(actor);
	@SetAttackState(true);
	BroadcastBattle();
	@PlayAnimation("all", ("attack_begin" + (iWhich + 1)));
	@WaitForAnimEnd();
	int var_506_int;
	SpeakAttack(var_506_int, strAnim);
	bool var_528_bool;
	IsAccessible(var_528_bool, actor);
	if(!var_528_bool) { //@nz
		@StopAsync();
		var_498_bool = false;
		return 8;
	}
	float var_531_float; int var_532_int;
	var_499_float = var_531_float;
	iWhich = var_532_int;
	ProcessAttackHit(strAnim, var_531_float, var_532_int);
	bool var_505_bool;
	@HasAnimation(var_505_bool, "all", ("attack_middle" + iWhich));
	if(var_505_bool != 0) {
		BroadcastBattle();
		@PlayAnimation("all", ("attack_middle" + iWhich));
		@WaitForAnimEnd();
		PlayAttackMusicIfPlayer_var(strAnim);
		bool var_641_bool;
		IsAccessible(var_641_bool, actor);
		if(!var_641_bool) { //@nz
			@StopAsync();
			var_498_bool = false;
			return 8;
		}
		float var_644_float; int var_645_int;
		var_499_float = var_644_float;
		ProcessAttackHit(strAnim, var_644_float, var_645_int);
		var_506_int = 1;

		for(;;) {
			strAnim = (("attack_middle" + var_645_int) + "_") + var_506_int;
			@HasAnimation(var_505_bool, "all", strAnim);
			if(!var_505_bool) { //@nz
			} else {
				BroadcastBattle();
				@PlayAnimation("all", strAnim);
				@WaitForAnimEnd();
				PlayAttackMusicIfPlayer_var(strAnim);
				bool var_667_bool;
				IsAccessible(var_667_bool, actor);
				if(!var_667_bool) { //@nz
					@StopAsync();
					var_498_bool = false;
					return 8;
				}
				float var_670_float; int var_671_int;
				var_499_float = var_670_float;
				iWhich = var_671_int;
				ProcessAttackHit(strAnim, var_670_float, var_671_int);
				var_506_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + iWhich));
		bool var_656_bool;
		GetTrueFlag(var_656_bool);
		if(var_656_bool != 0) {
			bool var_657_bool;
			MaybePlayAttackStay(var_657_bool, 0.45);
			@StopAsync();
		}
		var_498_bool = true;
		return 8;

	}
}


