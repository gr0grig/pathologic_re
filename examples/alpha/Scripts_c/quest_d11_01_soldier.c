// @GLOBALS: 0:object:

task task_0
{
	void OnUse(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_13_bool;
		@IsOverrideActive(var_13_bool);
		if(!var_13_bool) //@nz
			@WorkWithCorpse(var_11_cvector);
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, cvector var_13_cvector, cvector var_14_cvector)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, cvector var_11_cvector, cvector var_12_cvector)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
	}

}


task task_1
{
	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		func_171();
		object var_13_object;
		var_11_cvector = var_13_object;
		func_1552();
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == actor) {
			@KillTimer(100);
			@Face(actor);
		}
	}

	// @pe
	void OnStopHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == actor) {
			@SetTimer(100, 3.0);
			func_1340(actor);
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, cvector var_11_cvector, cvector var_12_cvector, object var_46_object)
		{
		object var_48_object;
		var_46_object = var_48_object;
			bool var_47_bool;
		func_1249(var_47_bool, var_48_object);
		if(!var_47_bool) { //@nz
			object var_76_object;
			var_46_object = var_76_object;
			func_1576(var_76_object);
		}
		func_171();
		object var_84_object;
		var_46_object = var_84_object;
		func_1589(var_84_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, cvector var_11_cvector, cvector var_12_cvector)
	{
		object var_14_object;
		var_11_cvector = var_14_object;
		object var_15_object;
		var_12_cvector = var_15_object;
		bool var_13_bool;
		func_1662(var_13_bool, var_14_object, var_15_object);
		if(var_13_bool != 0) {
			object var_46_object;
			var_11_cvector = var_46_object;
			func_209();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		object var_13_object;
		var_11_cvector = var_13_object;
		bool var_12_bool;
		func_1634(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_171();
			object var_58_object;
			var_11_cvector = var_58_object;
			func_1656(var_58_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, int var_1_int, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector != 100) {
		}
		@KillTimer(100);
		@StopGroup0();
	}

}


task task_2
{
	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, cvector var_11_cvector, cvector var_12_cvector, object var_46_object)
		{
		object var_48_object;
		var_46_object = var_48_object;
			bool var_47_bool;
		func_1249(var_47_bool, var_48_object);
		if(!var_47_bool) { //@nz
			object var_76_object;
			var_46_object = var_76_object;
			func_1576(var_76_object);
		}
		func_405();
		object var_83_object;
		var_46_object = var_83_object;
		func_1589(var_83_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, cvector var_11_cvector, cvector var_12_cvector)
	{
		object var_14_object;
		var_11_cvector = var_14_object;
		object var_15_object;
		var_12_cvector = var_15_object;
		bool var_13_bool;
		func_1662(var_13_bool, var_14_object, var_15_object);
		if(var_13_bool != 0) {
			object var_46_object;
			var_11_cvector = var_46_object;
			func_373();
		}
	}

	// @pe
	void OnDeath(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		func_405();
		object var_12_object;
		var_11_cvector = var_12_object;
		func_1552();
	}

}


task task_3
{
	// @pe
	void OnHear(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_12_bool = false;
		if(var_2_bool != 0) {
			if(var_11_cvector == actor)
				var_12_bool = true;
		}
		if(var_12_bool != 0)
			func_1340(actor);
	}

	// @pe
	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_12_bool = false;
		if(var_2_bool != 0) {
			if(var_11_cvector == actor)
				var_12_bool = true;
		}
		if(var_12_bool != 0) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, cvector var_11_cvector, cvector var_12_cvector, object var_46_object)
		{
		object var_48_object;
		var_46_object = var_48_object;
			bool var_47_bool;
		func_1249(var_47_bool, var_48_object);
		if(!var_47_bool) //@nz
			return 0;
		object var_76_object;
		var_46_object = var_76_object;
		func_1576(var_76_object);
		if(var_46_object == actor) {
			var_1_object = null;
		} else {
			var_1_object = var_46_object;
			if(var_2_bool == 0) goto Label_703;
			@StopAnimation();
			@StopGroup0();
		}
	Label_703:
	
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, cvector var_11_cvector, cvector var_12_cvector)
	{
		object var_14_object;
		var_11_cvector = var_14_object;
		object var_15_object;
		var_12_cvector = var_15_object;
		bool var_13_bool;
		func_1662(var_13_bool, var_14_object, var_15_object);
		if(var_13_bool != 0) {
			object var_46_object;
			var_11_cvector = var_46_object;
			func_680();
		}
	}

}


maintask task_4
{
	void init(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_13_bool;
		@IsPlayerActor(var_11_cvector, var_13_bool);
		if(var_13_bool != 0) {
			object var_15_object;
			var_11_cvector = var_15_object;
			TaskCall(5);
			func_753(var_15_object);
			TaskReturn();
		}
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_12_bool;
		func_1439(var_12_bool, "quest_d11_01", "soldier_attack");
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, string var_6_string, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == "attack") {
			object var_14_object;
			object var_15_object;
			func_1125(var_15_object);
			var_15_object = var_14_object;
			TaskCall(7);
			func_921(var_14_object);
			TaskReturn();
		}
	}

}


task task_5
{
	// @pe
	void OnStopSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == actor)
			func_865(var_11_cvector);
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_12_bool;
		func_1439(var_12_bool, "quest_d11_01", "soldier_attack");
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, string var_8_string, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == "attack") {
			object var_14_object;
			object var_15_object;
			func_1125(var_15_object);
			var_15_object = var_14_object;
			TaskCall(7);
			func_921(var_14_object);
			TaskReturn();
		}
	}

}


task task_6
{
	void OnUnload(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector)
	{
		@StopAnimation();
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == actor)
			@StopAnimation();
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_12_bool;
		func_1439(var_12_bool, "quest_d11_01", "soldier_attack");
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, string var_9_string, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == "attack") {
			object var_14_object;
			object var_15_object;
			func_1125(var_15_object);
			var_15_object = var_14_object;
			TaskCall(7);
			func_921(var_14_object);
			TaskReturn();
		}
	}

}


task task_7
{
	void OnHear(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
	{
		bool var_13_bool;
		object var_15_object;
		var_11_object = var_15_object;
		bool var_14_bool;
		func_1249(var_14_bool, var_15_object);
		if(!var_14_bool) //@nz
			return 2;
		bool var_49_bool; object var_50_object;
		func_1629(var_49_bool, var_50_object);
		if(!var_49_bool) { //@nz
			var_54_object = GlobalVars[0];
			var_54_object->in(var_13_bool, var_50_object);
			if(!var_13_bool) //@nz
				return 2;
		}
		func_1097();
		object var_56_object;
		var_11_object = var_56_object;
		TaskCall(1);
		func_147(var_57_object, var_56_object);
		TaskReturn();
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, object var_12_object, object var_46_object)
		{
		object var_48_object;
		var_46_object = var_48_object;
			bool var_47_bool;
		func_1249(var_47_bool, var_48_object);
		if(!var_47_bool) { //@nz
			object var_76_object;
			var_46_object = var_76_object;
			func_1576(var_76_object);
		}
		func_1097();
		object var_83_object;
		var_46_object = var_83_object;
		func_1589(var_83_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, object var_12_object)
	{
		object var_14_object;
		var_11_object = var_14_object;
		object var_15_object;
		var_12_object = var_15_object;
		bool var_13_bool;
		func_1662(var_13_bool, var_14_object, var_15_object);
		if(var_13_bool != 0) {
			object var_46_object;
			var_11_object = var_46_object;
			func_973();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1634(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1097();
			object var_57_object;
			var_11_object = var_57_object;
			func_1702(var_57_object);
		}
	}

}


// @pe
void OnHit(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, int var_12_int, float var_13_float, float var_14_float)
{
	object var_15_object;
	var_11_object = var_15_object;
	int var_16_int;
	var_12_int = var_16_int;
	float var_17_float;
	var_13_float = var_17_float;
	func_1273(var_16_int, var_17_float);
}


void OnPropertyChange(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, string var_12_string)
{
	float var_14_float;
	if(var_12_string == "health") {
		@GetProperty("health", var_14_float);
		if(var_14_float <= 0)
			@SignalDeath(var_11_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	func_1708(var_12_object);
}


// @pe
void func_0(object var_19_object)
{
	func_1481();
	object var_60_object;
	var_19_object = var_60_object;
	func_9(var_60_object);
}


// @pe
void func_1412(float var_119_float, cvector var_120_cvector)
{
	var_121_float = GetByIndex(var_120_cvector, 0);
	var_122_float = GetByIndex(var_120_cvector, 0);
	var_124_float = GetByIndex(var_120_cvector, 2);
	var_125_float = GetByIndex(var_120_cvector, 2);
	var_119_float = sqrt((var_121_float * var_122_float) + (var_124_float * var_125_float));
}


// @pe
void func_9(object var_60_object)
{
	object var_61_object;
	var_60_object = var_61_object;
	func_32(var_61_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_266(object var_0_object, object var_1_object, object var_245_object)
{
	var_0_object = var_245_object;
	@CanSee(var_1_object, var_0_object);
	if(var_1_object != 0) {
		bool var_255_bool;
		func_1621(var_255_bool, var_0_object);
		if(var_255_bool != 0) {
			func_1565(var_0_object, true);
			return 6;
		}
		@Face(var_0_object);
	}
	@PlayAnimation("all", "shoot_begin");
	bool var_251_bool;
	@WaitForAnimEnd(var_251_bool);
	if(!var_251_bool) { //@nz
		@StopAsync();
		return 6;
	}
	@Speak("shot");
	@PlayAnimation("all", "shoot_end");
	@WaitForAnimEnd(var_251_bool);
	if(!var_251_bool) { //@nz
		@StopAsync();
		return 6;
	}
	@LockAnimationEnd("all", "attack_on");
	int var_252_int = 0;
	int var_253_int = 0;
	
	for(;;) {
		if(var_253_int < 20) {
			@Sleep(0.5, var_251_bool);
			if(!var_251_bool) //@nz
				return 6;
			@CanSee(var_1_object, var_0_object);
			if(var_1_object != 0) {
				var_252_int = 0;
				bool var_282_bool;
				func_1621(var_282_bool, var_0_object);
				if(var_282_bool != 0) {
					func_405();
					func_1565(var_0_object, false);
					return 6;
				}
				@Face(var_0_object);
			} else {
			@StopAsync();
			if(!((var_252_int + 1) == 4)) goto Label_361;
			@PlayAnimation("all", "attack_off");
			@WaitForAnimEnd();
			return 6;
		}
		func_405();
		object var_292_object;
		var_245_object = var_292_object;
		func_1565(var_292_object, false);
		return 6;
		}
	Label_361:
		var_253_int += 1;
	}
	
}


// @pe
void func_1422(float var_107_float, cvector var_108_cvector, cvector var_109_cvector)
{
	cvector var_111_cvector;
	var_108_cvector = var_111_cvector;
	cvector var_112_cvector;
	var_109_cvector = var_112_cvector;
	float var_110_float;
	func_1403(var_110_float, var_111_cvector, var_112_cvector);
	float var_119_float; cvector var_120_cvector;
	var_108_cvector = var_120_cvector;
	func_1412(var_119_float, var_120_cvector);
	float var_128_float; cvector var_129_cvector;
	var_109_cvector = var_129_cvector;
	func_1412(var_128_float, var_129_cvector);
	var_107_float = var_110_float / (var_119_float * var_128_float);
}


void func_147(object var_0_object, object var_56_object)
{
	bool var_59_bool;
	@Face(var_56_object);
	
	for(;;) {
		@Sleep(0.5, var_59_bool);
		bool var_61_bool = true;
		var_62_bool = !var_59_bool; //@nz
		if(var_62_bool != 1) {
			bool var_63_bool;
			func_1249(var_63_bool, var_56_object);
			var_65_bool = !var_63_bool; //@nz
			if(var_65_bool != 1)
				var_61_bool = false;
		}
		if(var_61_bool != 0)
			break;
	}
	@StopAsync();
}


// @pe
void func_1403(float var_110_float, cvector var_111_cvector, cvector var_112_cvector)
{
	var_113_float = GetByIndex(var_111_cvector, 0);
	var_114_float = GetByIndex(var_112_cvector, 0);
	var_116_float = GetByIndex(var_111_cvector, 2);
	var_117_float = GetByIndex(var_112_cvector, 2);
	var_110_float = (var_113_float * var_114_float) + (var_116_float * var_117_float);
}


void func_405(void)
{
	@StopAsync();
	@StopGroup0();
	@Stop();
}


void func_1558(void)
{
	var_21_object = GlobalVars[0];
	object var_22_object;
	func_1397(var_22_object);
	var_22_object = var_21_object;
	GlobalVars[0] = var_21_object;
}


// @pe
void func_921(object var_14_object)
{
	func_1558();
	object var_25_object;
	var_14_object = var_25_object;
	func_973();
	
	for(;;) {
		func_934();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1565(object var_63_object, bool var_64_bool)
{
	object var_65_object;
	var_63_object = var_65_object;
	bool var_66_bool;
	var_64_bool = var_66_bool;
	TaskCall(3);
	func_421(var_67_object, var_68_object, var_69_bool, var_65_object, var_66_bool);
	TaskReturn();
	@ResetAAS();
}


void func_798(void)
{
	@LockAnimationEnd("all", "attack_on");
}


void func_1439(bool var_12_bool, string var_13_string, string var_14_string)
{
	object var_16_object;
	@FindActor(var_16_object, var_13_string);
	if(var_16_object == null)
		var_12_bool = false;
	@Trigger(var_16_object, var_14_string);
	var_12_bool = true;
}
EMIT "Stack[-1] = 0";


void func_32(object var_61_object)
{
	cvector var_72_cvector; cvector var_73_cvector; cvector var_74_cvector; cvector var_75_cvector; string var_76_string; object var_77_object; bool var_78_bool; bool var_79_bool; float var_80_float; cvector var_81_cvector;
	if(var_61_object == null) {
		func_119("fdie");
	} else {
		var_61_object->GetPosition(var_72_cvector);
		@GetPosition(var_73_cvector);
		@GetDirection(var_74_cvector);
		var_75_cvector = var_73_cvector - var_72_cvector;
		var_86_float = GetByIndex(var_75_cvector, 0);
		var_87_float = GetByIndex(var_74_cvector, 0);
		var_89_float = GetByIndex(var_75_cvector, 2);
		var_90_float = GetByIndex(var_74_cvector, 2);
		if(((var_86_float * var_87_float) + (var_89_float * var_90_float)) >= 0)
			var_76_string = "fdie";
		else
			var_76_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_61_object = var_77_object;
		var_97_bool = IsFuncExist(var_61_object, "GetScriptProperty", 2);
		if(var_97_bool != 0) {
			var_61_object->HasScriptProperty(var_78_bool, "Owner");
			if(var_78_bool != 0) {
				var_61_object->GetScriptProperty(var_77_object, "Owner");
				if(var_77_object == null)
					var_61_object = var_77_object;
			}
		}
		var_104_bool = IsFuncExist(var_77_object, "@GetEyesHeight", 1);
		if(var_104_bool != 0) {
			var_77_object->GetEyesHeight(var_80_float);
			var_81_cvector = [0.0, 0.0, 0.0];
			var_105_float = GetByIndex(var_81_cvector, 1);
			var_80_float = var_105_float;
			SetByIndex(var_81_cvector, 1) = var_105_float;
			@LookAsync(var_61_object, "head", var_81_cvector);
			var_79_bool = true;
		} else {
			var_79_bool = false;

		}
		@PlayAnimation("all", var_76_string);
		@WaitForAnimEnd();
		if(var_79_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_76_string);
		@RemoveEnvelope();
		var_77_object = null;
	}
	
}


void func_803(object var_0_object, object var_1_object, object var_37_object)
{
	var_0_object = var_37_object;
	cvector var_41_cvector;
	func_852(var_41_cvector);
	
Label_809:
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_50_cvector;
	func_1110(var_50_cvector, var_0_object);
	var_50_cvector = var_41_cvector;
	float var_56_float; cvector var_57_cvector; cvector var_58_cvector;
	var_40_cvector = var_57_cvector;
	var_41_cvector = var_58_cvector;
	func_1422(var_56_float, var_57_cvector, var_58_cvector);
	if(var_56_float < 0.70710677) {
		func_1351(var_0_object, 4.712389);
		func_798();
	}
	@Sleep(0.5);
	bool var_95_bool = false;
	if(!false) { //@nz
		bool var_97_bool;
		func_1249(var_97_bool, var_0_object);
		if(var_97_bool != 0)
			var_95_bool = true;
	}
	if(var_95_bool == 1) goto Label_809;
	@StopAsync();
	@UnlookAsync("spine");
}


void func_421(object var_0_object, object var_1_object, bool var_2_bool, object var_65_object, bool var_66_bool)
{
	bool var_72_bool; bool var_73_bool;
	var_0_object = var_65_object;
	@Face(var_0_object);
	if(var_66_bool != 0) {
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
	}
	@LockAnimationEnd("all", "attack_on");
	@SetAttackState(true);
	
Label_440:
	for(;;) {
		bool var_80_bool;
		func_1249(var_80_bool, var_0_object);
		if(var_80_bool != 0) {
			@CanSee(var_73_bool, var_0_object);
			if(var_73_bool != 0) {
				func_590(var_73_bool);
			} else {
				func_1340(var_0_object);
				var_2_bool = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(var_72_bool);
				if(!var_72_bool) { //@nz
					if(var_1_object != null)
						func_585(var_72_bool, var_73_bool);
					@LockAnimationEnd("all", "attack_on");
					goto Label_440;
				}
				bool var_227_bool;
				func_1249(var_227_bool, var_0_object);
				if(!var_227_bool) { //@nz
				} else {
						@CanSee(var_73_bool, var_0_object);
						if(var_73_bool != 0) {
							var_2_bool = false;
							@Face(var_0_object);
							func_590(var_73_bool);
							goto Label_532;
						}
						@LockAnimationEnd("all", "attack_on");
						@Sleep(3, var_72_bool);
						if(!var_72_bool) { //@nz
							if(var_1_object != null)
								func_585(var_72_bool, var_73_bool);
							@LockAnimationEnd("all", "attack_on");
							goto Label_440;
						}
						bool var_241_bool;
						func_1249(var_241_bool, var_0_object);
						var_243_bool = !var_241_bool; //@nz
						if(var_243_bool == 0) goto Label_520;
				}
		}
		Label_542:
			for(;;) {
				@SetAttackState(false);
				@StopAsync();
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();

			}

		Label_520:
			var_2_bool = false;
			@CanSee(var_73_bool, var_0_object);
			if(var_73_bool != 0) {
				@Face(var_0_object);
				func_590(var_73_bool);
				goto Label_532;
			}
			goto Label_542;
		}
	Label_532:
		if(var_1_object != null)
			func_585(var_72_bool, var_73_bool);
		else
			@Sleep(2);

	}
	
}


void func_934(void)
{
	func_1558();
	
	for(;;) {
		func_1019(var_20_cvector, var_14_object);
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1702(object var_57_object)
{
	object var_58_object;
	var_57_object = var_58_object;
	func_1600(var_58_object);
}


void func_1576(object var_76_object)
{
	if(var_76_object == null) {
	}
	var_80_object = GlobalVars[0];
	bool var_78_bool;
	var_80_object->in(var_78_bool, var_76_object);
	if(!var_78_bool) { //@nz
		var_82_object = GlobalVars[0];
		var_82_object->add(var_76_object);
	}
}


void func_171(void)
{
	@StopAsync();
	@KillTimer(100);
	@StopGroup0();
}


void func_1451(int var_25_int, int var_26_int)
{
	int var_32_int;
	if(var_25_int > var_26_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_31_int = 0;
	if(var_25_int != var_26_int) {
		@irand(var_32_int, (var_26_int - var_25_int));
	} else if(var_25_int == 0) {
		return 8;
	}
	var_31_int += var_25_int;
	if(var_31_int == 0)
		return 8;
	int var_33_int;
	@GetInvItemByName(var_33_int, "Money");
	bool var_34_bool;
	@AddItem(var_34_bool, var_33_int, 0, var_31_int);
	
}


void func_1708(object var_12_object)
{
	object var_14_object;
	@GetScene(var_14_object);
	object var_15_object;
	func_1369(var_15_object);
	var_14_object->RemoveStationaryActor(var_15_object);
	object var_18_object;
	var_12_object = var_18_object;
	func_1523(var_18_object);
}
EMIT "Stack[-1] = 0";


void func_942(void)
{
}


// @pe
void func_1589(object var_83_object)
{
	object var_84_object;
	var_83_object = var_84_object;
	func_1576(var_84_object);
	object var_85_object;
	var_83_object = var_85_object;
	func_1565(var_85_object, true);
}


void func_1208(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	var_32_object->IsDead(var_34_bool);
	var_34_bool = var_31_bool;
}


void func_1340(object var_212_object)
{
	cvector var_216_cvector;
	var_212_object->GetPosition(var_216_cvector);
	cvector var_217_cvector;
	@GetPosition(var_217_cvector);
	cvector var_218_cvector = var_216_cvector - var_217_cvector;
	var_219_float = GetByIndex(var_218_cvector, 0);
	var_220_float = GetByIndex(var_218_cvector, 2);
	@RotateAsync(var_219_float, var_220_float);
}


void func_1213(bool var_20_bool, object var_21_object)
{
	if(var_21_object == null) {
		var_20_bool = false;
		return 4;
	}
	bool var_27_bool = false;
	var_30_bool = IsFuncExist(var_21_object, "IsDead", 1);
	if(var_30_bool != 0) {
		bool var_31_bool; object var_32_object;
		var_21_object = var_32_object;
		func_1208(var_31_bool, var_32_object);
		if(var_31_bool != 0)
			var_27_bool = true;
	}
	if(var_27_bool != 0) {
		var_20_bool = false;
		return 4;
	}
	object var_24_object;
	@GetScene(var_24_object);
	if(var_24_object == null) {
		var_20_bool = false;
		return 4;
	}
	object var_25_object;
	var_21_object->GetScene(var_25_object);
	if(var_24_object != var_25_object) {
		var_20_bool = false;
		return 4;
	}
	var_20_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1600(object var_58_object)
{
	var_61_object = GlobalVars[0];
	bool var_60_bool;
	var_61_object->in(var_60_bool, var_58_object);
	if(var_60_bool != 0) {
		object var_63_object;
		var_58_object = var_63_object;
		func_1565(var_63_object, true);
	} else {
		object var_245_object;
		var_58_object = var_245_object;
		TaskCall(2);
		func_266(var_246_object, var_247_bool, var_245_object);
		TaskReturn();
		@ResetAAS();
	}
	
}


void func_1351(object var_82_object, float var_83_float)
{
	cvector var_87_cvector;
	var_82_object->GetPosition(var_87_cvector);
	cvector var_88_cvector;
	@GetPosition(var_88_cvector);
	cvector var_89_cvector = var_87_cvector - var_88_cvector;
	var_90_float = GetByIndex(var_89_cvector, 0);
	var_91_float = GetByIndex(var_89_cvector, 2);
	@RotateAsync(var_90_float, var_91_float, var_83_float);
}


void func_1481(void)
{
	bool var_23_bool;
	@ClearSubContainer(0);
	func_1451(500, 1000);
	int var_22_int;
	@irand(var_22_int, 4);
	if(var_22_int != 0) {
		int var_48_int;
		func_1518(var_48_int, "rifle_ammo");
		@AddItem(var_23_bool, var_48_int, 0, var_22_int);
	}
	@irand(var_22_int, 3);
	if(var_22_int == 0) {
		int var_56_int;
		func_1518(var_56_int, "rusk");
		@AddItem(var_23_bool, var_56_int, 0, 1);
	}
}


void func_585(object var_0_object, object var_1_object)
{
	var_1_object = null;
	@Face(var_1_object);
}


void func_1097(void)
{
	@StopGroup0();
	@Stop();
}


void func_590(object var_0_object)
{
	float var_98_float; object var_99_object; object var_100_object;
	@ReportAttack(var_0_object);
	cvector var_92_cvector;
	@GetDirection(var_92_cvector);
	cvector var_101_cvector;
	func_1110(var_101_cvector, var_0_object);
	cvector var_93_cvector;
	var_101_cvector = var_93_cvector;
	float var_107_float; cvector var_108_cvector; cvector var_109_cvector;
	var_93_cvector = var_109_cvector;
	func_1422(var_107_float, var_108_cvector, var_109_cvector);
	if(var_107_float < 0.9659258) {
	}
	@PlayAnimation("all", "attack_begin1");
	@WaitForAnimEnd();
	@Speak("shot");
	@GetDirection(var_108_cvector);
	cvector var_136_cvector;
	func_1110(var_136_cvector, var_0_object);
	var_136_cvector = var_93_cvector;
	var_138_float = GetByIndex(var_93_cvector, 1);
	float var_139_float;
	func_1362(var_139_float, var_0_object);
	SetByIndex(var_93_cvector, 1) = (var_138_float + var_139_float);
	cvector var_94_cvector;
	@RandVecCone3D(var_94_cvector, var_93_cvector, 0.2617994);
	object var_95_object;
	int var_96_int;
	cvector var_97_cvector;
	@GetVictimMaterial(var_94_cvector, var_95_object, var_96_int, var_97_cvector);
	if(var_95_object != null) {
		if(var_95_object == var_0_object) {
			float var_148_float;
			func_1144(var_148_float, var_0_object, 1.5, 0);
			var_148_float = var_98_float;
			@ReportHit(var_0_object, 2, var_98_float, 1.5);
		} else if(var_96_int != -1) {
			@GetScene(var_99_object);
			@AddActorByType(var_100_object, "scripted", var_99_object, var_97_cvector, [0.0, 0.0, 1.0], "richochet.xml");
			var_100_object->SetScriptProperty("Material", var_96_int);
			var_100_object = null;
			var_99_object = null;
		}
	}
	@PlayAnimation("all", "attack_end1");
	@WaitForAnimEnd();
	@LockAnimationEnd("all", "attack_on");
	
}
EMIT "Stack[-6] = 0";


// @pe
void func_1102(string var_173_string, int var_174_int)
{
	if(var_174_int == 1)
		var_173_string = "fire";
	var_173_string = "phys";
}


void func_1362(float var_139_float, object var_140_object)
{
	float var_143_float;
	@GetEyesHeight(var_143_float);
	float var_144_float;
	var_140_object->GetEyesHeight(var_144_float);
	var_139_float = var_144_float - var_143_float;
}


void func_852(object var_0_object)
{
	float var_45_float;
	@GetEyesHeight(var_45_float);
	float var_46_float;
	var_0_object->GetEyesHeight(var_46_float); //@t
	cvector var_47_cvector = [0.0, 0.0, 0.0];
	var_48_float = GetByIndex(var_47_cvector, 1);
	SetByIndex(var_47_cvector, 1) = (var_46_float - var_45_float);
	@DirLookAsyncRel(var_0_object, "spine", var_47_cvector);
}


// @pe
void func_1621(bool var_255_bool, object var_256_object)
{
	object var_258_object;
	var_256_object = var_258_object;
	float var_257_float;
	func_1117(var_257_float, var_258_object);
	var_255_bool = var_257_float <= 40000.0;
}


void func_1110(cvector var_101_cvector, object var_102_object)
{
	cvector var_105_cvector;
	@GetPosition(var_105_cvector);
	cvector var_106_cvector;
	var_102_object->GetPosition(var_106_cvector);
	var_101_cvector = var_106_cvector - var_105_cvector;
}


void func_1369(object var_15_object)
{
	object var_17_object;
	@self(var_17_object);
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_1629(bool var_53_bool, object var_54_object)
{
	bool var_56_bool;
	@IsPlayerActor(var_54_object, var_56_bool);
	var_56_bool = var_53_bool;
}


void func_1117(float var_257_float, object var_258_object)
{
	cvector var_262_cvector;
	@GetPosition(var_262_cvector);
	cvector var_263_cvector;
	var_258_object->GetPosition(var_263_cvector);
	var_257_float = (var_263_cvector - var_262_cvector) | (var_263_cvector - var_262_cvector);
}


void func_1375(float var_264_float, cvector var_265_cvector, cvector var_266_cvector)
{
	var_264_float = (var_266_cvector - var_265_cvector) | (var_266_cvector - var_265_cvector);
}


void func_1249(bool var_16_bool, object var_17_object)
{
	object var_21_object;
	var_17_object = var_21_object;
	bool var_20_bool;
	func_1213(var_20_bool, var_21_object);
	if(!var_20_bool) { //@nz
		var_16_bool = false;
		return 2;
	}
	bool var_38_bool; object var_39_object;
	func_1132(var_38_bool, var_39_object, "noaccess");
	if(!var_38_bool) { //@nz
		var_16_bool = true;
		return 2;
	}
	int var_19_int;
	var_39_object->GetProperty("noaccess", var_19_int);
	var_16_bool = var_19_int == 0;
}


void func_1634(bool var_12_bool, object var_13_object)
{
	bool var_16_bool; object var_17_object;
	func_1249(var_16_bool, var_17_object);
	if(!var_16_bool) { //@nz
		var_12_bool = false;
		return 2;
	}
	var_51_object = GlobalVars[0];
	bool var_15_bool;
	var_51_object->in(var_15_bool, var_17_object);
	if(var_15_bool != 0) {
		var_12_bool = true;
		return 2;
	}
	bool var_53_bool; object var_54_object;
	var_13_object = var_54_object;
	func_1629(var_53_bool, var_54_object);
	var_53_bool = var_12_bool;
}


void func_865(object var_1_object)
{
	@StopGroup0();
	var_1_object = true;
}


// @pe
void func_1379(float var_181_float, float var_182_float, float var_183_float)
{
	if(var_182_float < var_183_float)
		var_182_float = var_181_float;
	else
		var_183_float = var_181_float;
	
}


void func_1125(object var_15_object)
{
	object var_17_object;
	@FindActor(var_17_object, "player");
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_869(object var_0_object, bool var_18_bool, object var_19_object)
{
	func_1340(var_19_object);
	@PlayAnimation("all", "attack_on");
	bool var_22_bool;
	@WaitForAnimEnd(var_22_bool);
	if(!var_22_bool) //@nz
		var_18_bool = false;
	@LockAnimationEnd("all", "attack_on");
	var_18_bool = true;
}


// @pe
void func_1386(float var_191_float, float var_192_float, float var_193_float, float var_194_float)
{
	if(var_192_float < var_193_float) {
		var_193_float = var_191_float;
		return 0;
	}
	if(var_192_float > var_194_float) {
		var_194_float = var_191_float;
		return 0;
	}
	var_192_float = var_191_float;
}


void func_1132(bool var_38_bool, object var_39_object, string var_40_string)
{
	var_45_bool = IsFuncExist(var_39_object, "HasProperty", 2);
	if(!var_45_bool) { //@nz
		var_38_bool = false;
		return 2;
	}
	bool var_42_bool;
	var_39_object->HasProperty(var_40_string, var_42_bool);
	var_42_bool = var_38_bool;
}


void func_1518(int var_48_int, string var_49_string)
{
	int var_51_int;
	@GetInvItemByName(var_51_int, var_49_string);
	var_51_int = var_48_int;
}


// @pe
void func_753(object var_15_object)
{
	object var_19_object;
	var_15_object = var_19_object;
	TaskCall(6);
	bool var_18_bool;
	func_869(var_20_object, var_18_bool, var_19_object);
	TaskReturn();
	if(var_20_object != 0) {
		object var_37_object;
		func_803(var_17_bool, var_37_object, var_37_object);
		@PlayAnimation("all", "attack_off");
	}
}


// @pe
void func_1523(object var_18_object)
{
	object var_19_object;
	var_18_object = var_19_object;
	TaskCall(0);
	func_0(var_19_object);
	TaskReturn();
}


void func_1397(object var_22_object)
{
	object var_24_object;
	@CreateObjectSet(var_24_object);
	var_24_object = var_22_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_119(string var_83_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_83_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_83_string);
	@RemoveEnvelope();
}


// @pe
void func_1656(object var_58_object)
{
	object var_59_object;
	var_58_object = var_59_object;
	func_1702(var_59_object);
}


void func_1273(object var_15_object, int var_16_int)
{
	object var_28_object; object var_29_object; cvector var_30_cvector; float var_31_float; string var_37_string;
	bool var_38_bool = false;
	if(var_16_int != 4) {
		if(var_16_int != 5)
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		@GetScene(var_28_object);
		@GetPosition(var_30_cvector);
		@GetEyesHeight(var_31_float);
		var_43_float = GetByIndex(var_30_cvector, 1);
		SetByIndex(var_30_cvector, 1) = (var_43_float + (var_31_float / 2));
		@AddActorByType(var_29_object, "scripted", var_28_object, var_30_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_29_object = null;
		var_28_object = null;
	}
	if(var_15_object == null)
		return 20;
	int var_32_int;
	@GetSecondaryAnimationType(var_32_int);
	if(var_32_int < 0)
		return 20;
	cvector var_33_cvector;
	var_15_object->GetPosition(var_33_cvector);
	cvector var_34_cvector;
	@GetPosition(var_34_cvector);
	cvector var_35_cvector;
	@GetDirection(var_35_cvector);
	cvector var_36_cvector = var_34_cvector - var_33_cvector;
	var_52_float = GetByIndex(var_36_cvector, 0);
	var_53_float = GetByIndex(var_35_cvector, 0);
	var_55_float = GetByIndex(var_36_cvector, 2);
	var_56_float = GetByIndex(var_35_cvector, 2);
	if(((var_52_float * var_53_float) + (var_55_float * var_56_float)) >= 0)
		var_37_string = "fhit";
	else
		var_37_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_37_string + "1"), (var_37_string + "2"), -10);
	
}


void func_1019(object var_0_object, object var_1_object)
{
	int var_256_int; bool var_257_bool; cvector var_258_cvector; object var_259_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		@irand(var_256_int, 60);
		@Sleep((var_256_int + 30), var_257_bool);
		if(var_257_bool != 0) {
			func_942();
		} else {
		for(;;) {
			@GetPFPosition(var_258_cvector);
			float var_264_float; cvector var_266_cvector;
			var_258_cvector = var_266_cvector;
			func_1375(var_264_float, var_1_object, var_266_cvector);
			if(var_264_float > 40000) {
				@FindPathTo(var_259_object, var_1_object);
				if(var_259_object != null) {
					@RotatePath(var_259_object, var_257_bool);
					if(!var_257_bool) { //@nz
					} else {
					@FollowPath(var_259_object, false, var_257_bool);
					if(!var_257_bool) { //@nz
						goto Label_1094;
					}
					var_275_float = GetByIndex(var_0_object, 0);
					var_276_float = GetByIndex(var_0_object, 2);
					@Rotate(var_275_float, var_276_float, var_257_bool);
					if(!var_257_bool) { //@nz
						goto Label_1094;
					}
					@WaitForAnimEnd(var_257_bool);
					if(!var_257_bool) { //@nz
						goto Label_1094;
					}
					goto Label_1095;
				EMIT "GOTO 0x437";
				}
				@Sleep(1);
				var_259_object = null;
				goto Label_1094;
			}
			var_280_float = GetByIndex(var_0_object, 0);
			var_281_float = GetByIndex(var_0_object, 2);
			@Rotate(var_280_float, var_281_float, var_257_bool);
			if(!var_257_bool) { //@nz
				goto Label_1094;
			}
			@WaitForAnimEnd(var_257_bool);
			if(!var_257_bool) { //@nz
				goto Label_1094;
			}
			goto Label_1095;
			}
		Label_1094:
		}
		}
	Label_1095:
	}
	
}
EMIT "Return(); Pop(8)";


void func_1144(float var_148_float, object var_149_object, float var_150_float, int var_151_int)
{
	int var_158_int; int var_160_int;
	object var_165_object;
	var_149_object = var_165_object;
	bool var_164_bool;
	func_1132(var_164_bool, var_165_object, "health");
	if(!var_164_bool) //@nz
		var_148_float = 0.0;
	bool var_168_bool; object var_169_object;
	func_1132(var_168_bool, var_169_object, "armor");
	if(!var_168_bool) //@nz
		var_158_int = 0;
	else
		var_169_object->GetProperty("armor", var_158_int);
	string var_173_string; int var_174_int;
	var_151_int = var_174_int;
	func_1102(var_173_string, var_174_int);
	string var_159_string = "armor_" + var_173_string;
	bool var_177_bool; object var_178_object; string var_179_string;
	var_149_object = var_178_object;
	func_1132(var_177_bool, var_178_object, var_179_string);
	if(!var_177_bool) //@nz
		var_160_int = 0;
	else
		var_149_object->GetProperty(var_179_string, var_160_int);

	float var_181_float;
	func_1379(var_181_float, ((var_158_int + var_160_int) / 100.0), (float)1);
	float var_161_float;
	var_181_float = var_161_float;
	float var_162_float;
	var_149_object->GetProperty("health", var_162_float);
	float var_191_float;
	func_1386(var_191_float, (var_162_float - (var_150_float * (1 - var_161_float))), (float)0, (float)1);
	var_149_object->SetProperty("health", var_191_float);
	float var_163_float = var_148_float;
	
}


void func_1662(bool var_13_bool, object var_14_object, object var_15_object)
{
	object var_21_object;
	var_15_object = var_21_object;
	bool var_20_bool;
	func_1132(var_20_bool, var_21_object, "reputation");
	if(!var_20_bool) { //@nz
		var_13_bool = false;
		return 4;
	}
	float var_18_float;
	var_15_object->GetProperty("reputation", var_18_float);
	if(var_18_float < 0.5) {
		var_13_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_14_object);
	bool var_33_bool = true;
	if(var_19_bool != 1) {
		float var_35_float; object var_36_object;
		func_1117(var_35_float, var_36_object);
		var_44_bool = var_35_float <= 160000.0;
		if(var_44_bool != 1)
			var_33_bool = false;
	}
	if(var_33_bool != 0) {
		@ReportReputationChange(var_36_object, var_15_object, -0.2);
		var_13_bool = true;
		return 4;
	}
	var_13_bool = false;
}


