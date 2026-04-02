// @GLOBALS: 0:object:

task task_0
{
	void OnUse(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		bool var_12_bool;
		@IsOverrideActive(var_12_bool);
		if(!var_12_bool) //@nz
			@WorkWithCorpse(var_10_bool);
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, bool var_9_bool, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector, bool var_13_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
	}

}


task task_1
{
	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		func_171();
		object var_12_object;
		var_10_bool = var_12_object;
		func_1492();
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		if(var_10_bool == actor) {
			@KillTimer(100);
			@Face(actor);
		}
	}

	// @pe
	void OnStopHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		if(var_10_bool == actor) {
			@SetTimer(100, 3.0);
			func_1291(actor);
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool, object var_45_object)
		{
		object var_47_object;
		var_45_object = var_47_object;
			bool var_46_bool;
		func_1200(var_46_bool, var_47_object);
		if(!var_46_bool) { //@nz
			object var_75_object;
			var_45_object = var_75_object;
			func_1516(var_75_object);
		}
		func_171();
		object var_83_object;
		var_45_object = var_83_object;
		func_1529(var_83_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool)
	{
		object var_13_object;
		var_10_cvector = var_13_object;
		object var_14_object;
		var_11_bool = var_14_object;
		bool var_12_bool;
		func_1602(var_12_bool, var_13_object, var_14_object);
		if(var_12_bool != 0) {
			object var_45_object;
			var_10_cvector = var_45_object;
			func_209();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		object var_12_object;
		var_10_bool = var_12_object;
		bool var_11_bool;
		func_1574(var_11_bool, var_12_object);
		if(var_11_bool != 0) {
			func_171();
			object var_57_object;
			var_10_bool = var_57_object;
			func_1596(var_57_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, int var_1_int, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		if(var_10_bool != 100) {
		}
		@KillTimer(100);
		@StopGroup0();
	}

}


task task_2
{
	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool, object var_45_object)
		{
		object var_47_object;
		var_45_object = var_47_object;
			bool var_46_bool;
		func_1200(var_46_bool, var_47_object);
		if(!var_46_bool) { //@nz
			object var_75_object;
			var_45_object = var_75_object;
			func_1516(var_75_object);
		}
		func_405();
		object var_82_object;
		var_45_object = var_82_object;
		func_1529(var_82_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool)
	{
		object var_13_object;
		var_10_cvector = var_13_object;
		object var_14_object;
		var_11_bool = var_14_object;
		bool var_12_bool;
		func_1602(var_12_bool, var_13_object, var_14_object);
		if(var_12_bool != 0) {
			object var_45_object;
			var_10_cvector = var_45_object;
			func_373();
		}
	}

	// @pe
	void OnDeath(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		func_405();
		object var_11_object;
		var_10_bool = var_11_object;
		func_1492();
	}

}


task task_3
{
	// @pe
	void OnHear(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		bool var_11_bool = false;
		if(var_2_bool != 0) {
			if(var_10_bool == actor)
				var_11_bool = true;
		}
		if(var_11_bool != 0)
			func_1291(actor);
	}

	// @pe
	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		bool var_11_bool = false;
		if(var_2_bool != 0) {
			if(var_10_bool == actor)
				var_11_bool = true;
		}
		if(var_11_bool != 0) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool, object var_45_object)
		{
		object var_47_object;
		var_45_object = var_47_object;
			bool var_46_bool;
		func_1200(var_46_bool, var_47_object);
		if(!var_46_bool) //@nz
			return 0;
		object var_75_object;
		var_45_object = var_75_object;
		func_1516(var_75_object);
		if(var_45_object == actor) {
			var_1_object = null;
		} else {
			var_1_object = var_45_object;
			if(var_2_bool == 0) goto Label_703;
			@StopAnimation();
			@StopGroup0();
		}
	Label_703:
	
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool)
	{
		object var_13_object;
		var_10_cvector = var_13_object;
		object var_14_object;
		var_11_bool = var_14_object;
		bool var_12_bool;
		func_1602(var_12_bool, var_13_object, var_14_object);
		if(var_12_bool != 0) {
			object var_45_object;
			var_10_cvector = var_45_object;
			func_680();
		}
	}

}


maintask task_4
{
	void init(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, string var_7_string, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		if(var_10_bool == "attack") {
			object var_13_object;
			object var_14_object;
			func_1076(var_14_object);
			var_14_object = var_13_object;
			TaskCall(5);
			func_801(var_13_object);
			TaskReturn();
		} else if(var_10_bool == "execute") {
				TaskCall(6);
				func_982(var_285_bool);
				TaskReturn();
		}
	
		string var_311_string;
		func_755(var_311_string, var_311_string);
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		bool var_11_bool;
		func_1379(var_11_bool, "quest_d11_02", "soldier_attack");
	}

	void OnUnload(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool)
	{
		bool var_10_bool = false;
		if(var_0_object != 0) {
			bool var_12_bool;
			func_799(var_12_bool);
			if(var_12_bool != 0)
				var_10_bool = true;
		}
		if(var_10_bool != 0) {
			object var_13_object;
			func_1309(var_13_object);
			@RemoveActor(var_13_object);
		}
	}

}


task task_5
{
	void OnHear(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, object var_9_object, bool var_10_bool)
	{
		bool var_12_bool;
		object var_14_object;
		var_10_bool = var_14_object;
		bool var_13_bool;
		func_1200(var_13_bool, var_14_object);
		if(!var_13_bool) //@nz
			return 2;
		bool var_48_bool; object var_49_object;
		func_1569(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			var_53_object = GlobalVars[0];
			var_53_object->in(var_12_bool, var_49_object);
			if(!var_12_bool) //@nz
				return 2;
		}
		func_977();
		object var_55_object;
		var_10_bool = var_55_object;
		TaskCall(1);
		func_147(var_56_object, var_55_object);
		TaskReturn();
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, object var_9_object, object var_10_object, bool var_11_bool, object var_45_object)
		{
		object var_47_object;
		var_45_object = var_47_object;
			bool var_46_bool;
		func_1200(var_46_bool, var_47_object);
		if(!var_46_bool) { //@nz
			object var_75_object;
			var_45_object = var_75_object;
			func_1516(var_75_object);
		}
		func_977();
		object var_82_object;
		var_45_object = var_82_object;
		func_1529(var_82_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, object var_9_object, object var_10_object, bool var_11_bool)
	{
		object var_13_object;
		var_10_object = var_13_object;
		object var_14_object;
		var_11_bool = var_14_object;
		bool var_12_bool;
		func_1602(var_12_bool, var_13_object, var_14_object);
		if(var_12_bool != 0) {
			object var_45_object;
			var_10_object = var_45_object;
			func_853();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, object var_9_object, bool var_10_bool)
	{
		object var_12_object;
		var_10_bool = var_12_object;
		bool var_11_bool;
		func_1574(var_11_bool, var_12_object);
		if(var_11_bool != 0) {
			func_977();
			object var_56_object;
			var_10_bool = var_56_object;
			func_1655(var_56_object);
		}
	}

}


task task_6
{
	// @pe
	void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
		bool var_11_bool;
		func_1379(var_11_bool, "quest_d11_02", "soldier_attack");
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool, string var_10_string)
	{
		if(var_10_string == "attack") {
			@StopGroup0();
			var_0_object = true;
		}
	}

}


// @pe
void OnHit(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
{
	object var_14_object;
	var_10_object = var_14_object;
	int var_15_int;
	var_11_int = var_15_int;
	float var_16_float;
	var_12_float = var_16_float;
	func_1224(var_15_int, var_16_float);
}


void OnPropertyChange(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool, object var_10_object, string var_11_string)
{
	float var_13_float;
	if(var_11_string == "health") {
		@GetProperty("health", var_13_float);
		if(var_13_float <= 0)
			@SignalDeath(var_10_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool, object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	func_1661(var_11_object);
}


void OnUnload(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool)
{
	bool var_10_bool;
	func_1379(var_10_bool, "quest_d11_02", "actor_unload");
	object var_16_object;
	func_1309(var_16_object);
	@RemoveActor(var_16_object);
	@Hold();
}


// @pe
void func_0(object var_19_object)
{
	func_1421();
	object var_60_object;
	var_19_object = var_60_object;
	func_9(var_60_object);
}


void func_899(object var_0_object, object var_1_object)
{
	int var_255_int; bool var_256_bool; cvector var_257_cvector; object var_258_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		@irand(var_255_int, 60);
		@Sleep((var_255_int + 30), var_256_bool);
		if(var_256_bool != 0) {
			func_822();
		} else {
		for(;;) {
			@GetPFPosition(var_257_cvector);
			float var_263_float; cvector var_265_cvector;
			var_257_cvector = var_265_cvector;
			func_1315(var_263_float, var_1_object, var_265_cvector);
			if(var_263_float > 40000) {
				@FindPathTo(var_258_object, var_1_object);
				if(var_258_object != null) {
					@RotatePath(var_258_object, var_256_bool);
					if(!var_256_bool) { //@nz
					} else {
					@FollowPath(var_258_object, false, var_256_bool);
					if(!var_256_bool) { //@nz
						goto Label_974;
					}
					var_274_float = GetByIndex(var_0_object, 0);
					var_275_float = GetByIndex(var_0_object, 2);
					@Rotate(var_274_float, var_275_float, var_256_bool);
					if(!var_256_bool) { //@nz
						goto Label_974;
					}
					@WaitForAnimEnd(var_256_bool);
					if(!var_256_bool) { //@nz
						goto Label_974;
					}
					goto Label_975;
				EMIT "GOTO 0x3bf";
				}
				@Sleep(1);
				var_258_object = null;
				goto Label_974;
			}
			var_279_float = GetByIndex(var_0_object, 0);
			var_280_float = GetByIndex(var_0_object, 2);
			@Rotate(var_279_float, var_280_float, var_256_bool);
			if(!var_256_bool) { //@nz
				goto Label_974;
			}
			@WaitForAnimEnd(var_256_bool);
			if(!var_256_bool) { //@nz
				goto Label_974;
			}
			goto Label_975;
			}
		Label_974:
		}
		}
	Label_975:
	}
	
}
EMIT "Return(); Pop(8)";


void func_1540(object var_57_object)
{
	var_60_object = GlobalVars[0];
	bool var_59_bool;
	var_60_object->in(var_59_bool, var_57_object);
	if(var_59_bool != 0) {
		object var_62_object;
		var_57_object = var_62_object;
		func_1505(var_62_object, true);
	} else {
		object var_244_object;
		var_57_object = var_244_object;
		TaskCall(2);
		func_266(var_245_object, var_246_bool, var_244_object);
		TaskReturn();
		@ResetAAS();
	}
	
}


void func_1159(bool var_30_bool, object var_31_object)
{
	bool var_33_bool;
	var_31_object->IsDead(var_33_bool);
	var_33_bool = var_30_bool;
}


// @pe
void func_1655(object var_56_object)
{
	object var_57_object;
	var_56_object = var_57_object;
	func_1540(var_57_object);
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


void func_266(object var_0_object, object var_1_object, object var_244_object)
{
	var_0_object = var_244_object;
	@CanSee(var_1_object, var_0_object);
	if(var_1_object != 0) {
		bool var_254_bool;
		func_1561(var_254_bool, var_0_object);
		if(var_254_bool != 0) {
			func_1505(var_0_object, true);
			return 6;
		}
		@Face(var_0_object);
	}
	@PlayAnimation("all", "shoot_begin");
	bool var_250_bool;
	@WaitForAnimEnd(var_250_bool);
	if(!var_250_bool) { //@nz
		@StopAsync();
		return 6;
	}
	@Speak("shot");
	@PlayAnimation("all", "shoot_end");
	@WaitForAnimEnd(var_250_bool);
	if(!var_250_bool) { //@nz
		@StopAsync();
		return 6;
	}
	@LockAnimationEnd("all", "attack_on");
	int var_251_int = 0;
	int var_252_int = 0;
	
	for(;;) {
		if(var_252_int < 20) {
			@Sleep(0.5, var_250_bool);
			if(!var_250_bool) //@nz
				return 6;
			@CanSee(var_1_object, var_0_object);
			if(var_1_object != 0) {
				var_251_int = 0;
				bool var_281_bool;
				func_1561(var_281_bool, var_0_object);
				if(var_281_bool != 0) {
					func_405();
					func_1505(var_0_object, false);
					return 6;
				}
				@Face(var_0_object);
			} else {
			@StopAsync();
			if(!((var_251_int + 1) == 4)) goto Label_361;
			@PlayAnimation("all", "attack_off");
			@WaitForAnimEnd();
			return 6;
		}
		func_405();
		object var_291_object;
		var_244_object = var_291_object;
		func_1505(var_291_object, false);
		return 6;
		}
	Label_361:
		var_252_int += 1;
	}
	
}


void func_1291(object var_211_object)
{
	cvector var_215_cvector;
	var_211_object->GetPosition(var_215_cvector);
	cvector var_216_cvector;
	@GetPosition(var_216_cvector);
	cvector var_217_cvector = var_215_cvector - var_216_cvector;
	var_218_float = GetByIndex(var_217_cvector, 0);
	var_219_float = GetByIndex(var_217_cvector, 2);
	@RotateAsync(var_218_float, var_219_float);
}


void func_1164(bool var_19_bool, object var_20_object)
{
	if(var_20_object == null) {
		var_19_bool = false;
		return 4;
	}
	bool var_26_bool = false;
	var_29_bool = IsFuncExist(var_20_object, "IsDead", 1);
	if(var_29_bool != 0) {
		bool var_30_bool; object var_31_object;
		var_20_object = var_31_object;
		func_1159(var_30_bool, var_31_object);
		if(var_30_bool != 0)
			var_26_bool = true;
	}
	if(var_26_bool != 0) {
		var_19_bool = false;
		return 4;
	}
	object var_23_object;
	@GetScene(var_23_object);
	if(var_23_object == null) {
		var_19_bool = false;
		return 4;
	}
	object var_24_object;
	var_20_object->GetScene(var_24_object);
	if(var_23_object != var_24_object) {
		var_19_bool = false;
		return 4;
	}
	var_19_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1421(void)
{
	bool var_23_bool;
	@ClearSubContainer(0);
	func_1391(500, 1000);
	int var_22_int;
	@irand(var_22_int, 4);
	if(var_22_int != 0) {
		int var_48_int;
		func_1458(var_48_int, "rifle_ammo");
		@AddItem(var_23_bool, var_48_int, 0, var_22_int);
	}
	@irand(var_22_int, 3);
	if(var_22_int == 0) {
		int var_56_int;
		func_1458(var_56_int, "rusk");
		@AddItem(var_23_bool, var_56_int, 0, 1);
	}
}


void func_147(object var_0_object, object var_55_object)
{
	bool var_58_bool;
	@Face(var_55_object);
	
	for(;;) {
		@Sleep(0.5, var_58_bool);
		bool var_60_bool = true;
		var_61_bool = !var_58_bool; //@nz
		if(var_61_bool != 1) {
			bool var_62_bool;
			func_1200(var_62_bool, var_55_object);
			var_64_bool = !var_62_bool; //@nz
			if(var_64_bool != 1)
				var_60_bool = false;
		}
		if(var_60_bool != 0)
			break;
	}
	@StopAsync();
}


void func_405(void)
{
	@StopAsync();
	@StopGroup0();
	@Stop();
}


void func_1302(float var_138_float, object var_139_object)
{
	float var_142_float;
	@GetEyesHeight(var_142_float);
	float var_143_float;
	var_139_object->GetEyesHeight(var_143_float);
	var_138_float = var_143_float - var_142_float;
}


// @pe
void func_1561(bool var_254_bool, object var_255_object)
{
	object var_257_object;
	var_255_object = var_257_object;
	float var_256_float;
	func_1068(var_256_float, var_257_object);
	var_254_bool = var_256_float <= 40000.0;
}


void func_1309(object var_16_object)
{
	object var_18_object;
	@self(var_18_object);
	var_18_object = var_16_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1053(string var_172_string, int var_173_int)
{
	if(var_173_int == 1)
		var_172_string = "fire";
	var_172_string = "phys";
}


void func_799(bool var_12_bool)
{
	var_12_bool = true;
}


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


// @pe
void func_801(object var_13_object)
{
	func_1498();
	object var_24_object;
	var_13_object = var_24_object;
	func_853();
	
	for(;;) {
		func_814();
	}
}
EMIT "Return(); Pop(0)";


void func_1569(bool var_52_bool, object var_53_object)
{
	bool var_55_bool;
	@IsPlayerActor(var_53_object, var_55_bool);
	var_55_bool = var_52_bool;
}


void func_1315(float var_263_float, cvector var_264_cvector, cvector var_265_cvector)
{
	var_263_float = (var_265_cvector - var_264_cvector) | (var_265_cvector - var_264_cvector);
}


void func_1061(cvector var_100_cvector, object var_101_object)
{
	cvector var_104_cvector;
	@GetPosition(var_104_cvector);
	cvector var_105_cvector;
	var_101_object->GetPosition(var_105_cvector);
	var_100_cvector = var_105_cvector - var_104_cvector;
}


void func_1574(bool var_11_bool, object var_12_object)
{
	bool var_15_bool; object var_16_object;
	func_1200(var_15_bool, var_16_object);
	if(!var_15_bool) { //@nz
		var_11_bool = false;
		return 2;
	}
	var_50_object = GlobalVars[0];
	bool var_14_bool;
	var_50_object->in(var_14_bool, var_16_object);
	if(var_14_bool != 0) {
		var_11_bool = true;
		return 2;
	}
	bool var_52_bool; object var_53_object;
	var_12_object = var_53_object;
	func_1569(var_52_bool, var_53_object);
	var_52_bool = var_11_bool;
}


// @pe
void func_1319(float var_180_float, float var_181_float, float var_182_float)
{
	if(var_181_float < var_182_float)
		var_181_float = var_180_float;
	else
		var_182_float = var_180_float;
	
}


void func_421(object var_0_object, object var_1_object, bool var_2_bool, object var_64_object, bool var_65_bool)
{
	bool var_71_bool; bool var_72_bool;
	var_0_object = var_64_object;
	@Face(var_0_object);
	if(var_65_bool != 0) {
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
	}
	@LockAnimationEnd("all", "attack_on");
	@SetAttackState(true);
	
Label_440:
	for(;;) {
		bool var_79_bool;
		func_1200(var_79_bool, var_0_object);
		if(var_79_bool != 0) {
			@CanSee(var_72_bool, var_0_object);
			if(var_72_bool != 0) {
				func_590(var_72_bool);
			} else {
				func_1291(var_0_object);
				var_2_bool = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(var_71_bool);
				if(!var_71_bool) { //@nz
					if(var_1_object != null)
						func_585(var_71_bool, var_72_bool);
					@LockAnimationEnd("all", "attack_on");
					goto Label_440;
				}
				bool var_226_bool;
				func_1200(var_226_bool, var_0_object);
				if(!var_226_bool) { //@nz
				} else {
						@CanSee(var_72_bool, var_0_object);
						if(var_72_bool != 0) {
							var_2_bool = false;
							@Face(var_0_object);
							func_590(var_72_bool);
							goto Label_532;
						}
						@LockAnimationEnd("all", "attack_on");
						@Sleep(3, var_71_bool);
						if(!var_71_bool) { //@nz
							if(var_1_object != null)
								func_585(var_71_bool, var_72_bool);
							@LockAnimationEnd("all", "attack_on");
							goto Label_440;
						}
						bool var_240_bool;
						func_1200(var_240_bool, var_0_object);
						var_242_bool = !var_240_bool; //@nz
						if(var_242_bool == 0) goto Label_520;
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
			@CanSee(var_72_bool, var_0_object);
			if(var_72_bool != 0) {
				@Face(var_0_object);
				func_590(var_72_bool);
				goto Label_532;
			}
			goto Label_542;
		}
	Label_532:
		if(var_1_object != null)
			func_585(var_71_bool, var_72_bool);
		else
			@Sleep(2);

	}
	
}


void func_171(void)
{
	@StopAsync();
	@KillTimer(100);
	@StopGroup0();
}


void func_1068(float var_256_float, object var_257_object)
{
	cvector var_261_cvector;
	@GetPosition(var_261_cvector);
	cvector var_262_cvector;
	var_257_object->GetPosition(var_262_cvector);
	var_256_float = (var_262_cvector - var_261_cvector) | (var_262_cvector - var_261_cvector);
}


void func_814(void)
{
	func_1498();
	
	for(;;) {
		func_899(var_19_cvector, var_13_object);
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1326(float var_190_float, float var_191_float, float var_192_float, float var_193_float)
{
	if(var_191_float < var_192_float) {
		var_192_float = var_190_float;
		return 0;
	}
	if(var_191_float > var_193_float) {
		var_193_float = var_190_float;
		return 0;
	}
	var_191_float = var_190_float;
}


void func_1200(bool var_15_bool, object var_16_object)
{
	object var_20_object;
	var_16_object = var_20_object;
	bool var_19_bool;
	func_1164(var_19_bool, var_20_object);
	if(!var_19_bool) { //@nz
		var_15_bool = false;
		return 2;
	}
	bool var_37_bool; object var_38_object;
	func_1083(var_37_bool, var_38_object, "noaccess");
	if(!var_37_bool) { //@nz
		var_15_bool = true;
		return 2;
	}
	int var_18_int;
	var_38_object->GetProperty("noaccess", var_18_int);
	var_15_bool = var_18_int == 0;
}


void func_1458(int var_48_int, string var_49_string)
{
	int var_51_int;
	@GetInvItemByName(var_51_int, var_49_string);
	var_51_int = var_48_int;
}


void func_1076(object var_14_object)
{
	object var_16_object;
	@FindActor(var_16_object, "player");
	var_16_object = var_14_object;
}
EMIT "Stack[-1] = 0";


void func_822(void)
{
}


// @pe
void func_1463(object var_18_object)
{
	object var_19_object;
	var_18_object = var_19_object;
	TaskCall(0);
	func_0(var_19_object);
	TaskReturn();
}


void func_1337(object var_21_object)
{
	object var_23_object;
	@CreateObjectSet(var_23_object);
	var_23_object = var_21_object;
}
EMIT "Stack[-1] = 0";


void func_1083(bool var_37_bool, object var_38_object, string var_39_string)
{
	var_44_bool = IsFuncExist(var_38_object, "HasProperty", 2);
	if(!var_44_bool) { //@nz
		var_37_bool = false;
		return 2;
	}
	bool var_41_bool;
	var_38_object->HasProperty(var_39_string, var_41_bool);
	var_41_bool = var_37_bool;
}


// @pe
void func_1596(object var_57_object)
{
	object var_58_object;
	var_57_object = var_58_object;
	func_1655(var_58_object);
}


// @pe
void func_1343(float var_109_float, cvector var_110_cvector, cvector var_111_cvector)
{
	var_112_float = GetByIndex(var_110_cvector, 0);
	var_113_float = GetByIndex(var_111_cvector, 0);
	var_115_float = GetByIndex(var_110_cvector, 2);
	var_116_float = GetByIndex(var_111_cvector, 2);
	var_109_float = (var_112_float * var_113_float) + (var_115_float * var_116_float);
}


void func_1602(bool var_12_bool, object var_13_object, object var_14_object)
{
	object var_20_object;
	var_14_object = var_20_object;
	bool var_19_bool;
	func_1083(var_19_bool, var_20_object, "reputation");
	if(!var_19_bool) { //@nz
		var_12_bool = false;
		return 4;
	}
	float var_17_float;
	var_14_object->GetProperty("reputation", var_17_float);
	if(var_17_float < 0.5) {
		var_12_bool = false;
		return 4;
	}
	bool var_18_bool;
	@CanSee(var_18_bool, var_13_object);
	bool var_32_bool = true;
	if(var_18_bool != 1) {
		float var_34_float; object var_35_object;
		func_1068(var_34_float, var_35_object);
		var_43_bool = var_34_float <= 160000.0;
		if(var_43_bool != 1)
			var_32_bool = false;
	}
	if(var_32_bool != 0) {
		@ReportReputationChange(var_35_object, var_14_object, -0.2);
		var_12_bool = true;
		return 4;
	}
	var_12_bool = false;
}


void func_1095(float var_147_float, object var_148_object, float var_149_float, int var_150_int)
{
	int var_157_int; int var_159_int;
	object var_164_object;
	var_148_object = var_164_object;
	bool var_163_bool;
	func_1083(var_163_bool, var_164_object, "health");
	if(!var_163_bool) //@nz
		var_147_float = 0.0;
	bool var_167_bool; object var_168_object;
	func_1083(var_167_bool, var_168_object, "armor");
	if(!var_167_bool) //@nz
		var_157_int = 0;
	else
		var_168_object->GetProperty("armor", var_157_int);
	string var_172_string; int var_173_int;
	var_150_int = var_173_int;
	func_1053(var_172_string, var_173_int);
	string var_158_string = "armor_" + var_172_string;
	bool var_176_bool; object var_177_object; string var_178_string;
	var_148_object = var_177_object;
	func_1083(var_176_bool, var_177_object, var_178_string);
	if(!var_176_bool) //@nz
		var_159_int = 0;
	else
		var_148_object->GetProperty(var_178_string, var_159_int);

	float var_180_float;
	func_1319(var_180_float, ((var_157_int + var_159_int) / 100.0), (float)1);
	float var_160_float;
	var_180_float = var_160_float;
	float var_161_float;
	var_148_object->GetProperty("health", var_161_float);
	float var_190_float;
	func_1326(var_190_float, (var_161_float - (var_149_float * (1 - var_160_float))), (float)0, (float)1);
	var_148_object->SetProperty("health", var_190_float);
	float var_162_float = var_147_float;
	
}


// @pe
void func_1352(float var_118_float, cvector var_119_cvector)
{
	var_120_float = GetByIndex(var_119_cvector, 0);
	var_121_float = GetByIndex(var_119_cvector, 0);
	var_123_float = GetByIndex(var_119_cvector, 2);
	var_124_float = GetByIndex(var_119_cvector, 2);
	var_118_float = sqrt((var_120_float * var_121_float) + (var_123_float * var_124_float));
}


void func_585(object var_0_object, object var_1_object)
{
	var_1_object = null;
	@Face(var_1_object);
}


void func_1224(object var_14_object, int var_15_int)
{
	object var_27_object; object var_28_object; cvector var_29_cvector; float var_30_float; string var_36_string;
	bool var_37_bool = false;
	if(var_15_int != 4) {
		if(var_15_int != 5)
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		@GetScene(var_27_object);
		@GetPosition(var_29_cvector);
		@GetEyesHeight(var_30_float);
		var_42_float = GetByIndex(var_29_cvector, 1);
		SetByIndex(var_29_cvector, 1) = (var_42_float + (var_30_float / 2));
		@AddActorByType(var_28_object, "scripted", var_27_object, var_29_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_28_object = null;
		var_27_object = null;
	}
	if(var_14_object == null)
		return 20;
	int var_31_int;
	@GetSecondaryAnimationType(var_31_int);
	if(var_31_int < 0)
		return 20;
	cvector var_32_cvector;
	var_14_object->GetPosition(var_32_cvector);
	cvector var_33_cvector;
	@GetPosition(var_33_cvector);
	cvector var_34_cvector;
	@GetDirection(var_34_cvector);
	cvector var_35_cvector = var_33_cvector - var_32_cvector;
	var_51_float = GetByIndex(var_35_cvector, 0);
	var_52_float = GetByIndex(var_34_cvector, 0);
	var_54_float = GetByIndex(var_35_cvector, 2);
	var_55_float = GetByIndex(var_34_cvector, 2);
	if(((var_51_float * var_52_float) + (var_54_float * var_55_float)) >= 0)
		var_36_string = "fhit";
	else
		var_36_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_36_string + "1"), (var_36_string + "2"), -10);
	
}


void func_590(object var_0_object)
{
	float var_97_float; object var_98_object; object var_99_object;
	@ReportAttack(var_0_object);
	cvector var_91_cvector;
	@GetDirection(var_91_cvector);
	cvector var_100_cvector;
	func_1061(var_100_cvector, var_0_object);
	cvector var_92_cvector;
	var_100_cvector = var_92_cvector;
	float var_106_float; cvector var_107_cvector; cvector var_108_cvector;
	var_92_cvector = var_108_cvector;
	func_1362(var_106_float, var_107_cvector, var_108_cvector);
	if(var_106_float < 0.9659258) {
	}
	@PlayAnimation("all", "attack_begin1");
	@WaitForAnimEnd();
	@Speak("shot");
	@GetDirection(var_107_cvector);
	cvector var_135_cvector;
	func_1061(var_135_cvector, var_0_object);
	var_135_cvector = var_92_cvector;
	var_137_float = GetByIndex(var_92_cvector, 1);
	float var_138_float;
	func_1302(var_138_float, var_0_object);
	SetByIndex(var_92_cvector, 1) = (var_137_float + var_138_float);
	cvector var_93_cvector;
	@RandVecCone3D(var_93_cvector, var_92_cvector, 0.2617994);
	object var_94_object;
	int var_95_int;
	cvector var_96_cvector;
	@GetVictimMaterial(var_93_cvector, var_94_object, var_95_int, var_96_cvector);
	if(var_94_object != null) {
		if(var_94_object == var_0_object) {
			float var_147_float;
			func_1095(var_147_float, var_0_object, 1.5, 0);
			var_147_float = var_97_float;
			@ReportHit(var_0_object, 2, var_97_float, 1.5);
		} else if(var_95_int != -1) {
			@GetScene(var_98_object);
			@AddActorByType(var_99_object, "scripted", var_98_object, var_96_cvector, [0.0, 0.0, 1.0], "richochet.xml");
			var_99_object->SetScriptProperty("Material", var_95_int);
			var_99_object = null;
			var_98_object = null;
		}
	}
	@PlayAnimation("all", "attack_end1");
	@WaitForAnimEnd();
	@LockAnimationEnd("all", "attack_on");
	
}
EMIT "Stack[-6] = 0";


void func_977(void)
{
	@StopGroup0();
	@Stop();
}


// @pe
void func_1362(float var_106_float, cvector var_107_cvector, cvector var_108_cvector)
{
	cvector var_110_cvector;
	var_107_cvector = var_110_cvector;
	cvector var_111_cvector;
	var_108_cvector = var_111_cvector;
	float var_109_float;
	func_1343(var_109_float, var_110_cvector, var_111_cvector);
	float var_118_float; cvector var_119_cvector;
	var_107_cvector = var_119_cvector;
	func_1352(var_118_float, var_119_cvector);
	float var_127_float; cvector var_128_cvector;
	var_108_cvector = var_128_cvector;
	func_1352(var_127_float, var_128_cvector);
	var_106_float = var_109_float / (var_118_float * var_127_float);
}


void func_982(object var_0_object)
{
	var_0_object = false;
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	if(!var_0_object) { //@nz
		@LockAnimationEnd("all", "attack_on");
		@Sleep(20);
		if(!var_0_object) { //@nz
			@PlayAnimation("all", "attack_begin1");
			@WaitForAnimEnd();
			bool var_295_bool;
			func_1379(var_295_bool, "quest_d11_02", "execute");
			@Speak("shot");
			@PlayAnimation("all", "attack_begin2");
			@WaitForAnimEnd();
			@PlayAnimation("all", "attack_off");
			@WaitForAnimEnd();
		}
	}
	if(var_0_object != 0) {
		object var_307_object;
		object var_308_object;
		func_1076(var_308_object);
		var_308_object = var_307_object;
		TaskCall(5);
		func_801(var_307_object);
		TaskReturn();
	}
}


void func_1498(void)
{
	var_20_object = GlobalVars[0];
	object var_21_object;
	func_1337(var_21_object);
	var_21_object = var_20_object;
	GlobalVars[0] = var_20_object;
}


// @pe
void func_1505(object var_62_object, bool var_63_bool)
{
	object var_64_object;
	var_62_object = var_64_object;
	bool var_65_bool;
	var_63_bool = var_65_bool;
	TaskCall(3);
	func_421(var_66_object, var_67_object, var_68_bool, var_64_object, var_65_bool);
	TaskReturn();
	@ResetAAS();
}


void func_1379(bool var_10_bool, string var_11_string, string var_12_string)
{
	object var_14_object;
	@FindActor(var_14_object, var_11_string);
	if(var_14_object == null)
		var_10_bool = false;
	@Trigger(var_14_object, var_12_string);
	var_10_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1516(object var_75_object)
{
	if(var_75_object == null) {
	}
	var_79_object = GlobalVars[0];
	bool var_77_bool;
	var_79_object->in(var_77_bool, var_75_object);
	if(!var_77_bool) { //@nz
		var_81_object = GlobalVars[0];
		var_81_object->add(var_75_object);
	}
}


void func_1391(int var_25_int, int var_26_int)
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


void func_755(object var_0_object, string var_311_string)
{
	bool var_313_bool;
	if(var_311_string == "cleanup") {
		var_0_object = true;
		@IsLoaded(var_313_bool);
		bool var_316_bool = false;
		if(!var_313_bool) { //@nz
			bool var_318_bool;
			func_799(var_318_bool);
			if(var_318_bool != 0)
				var_316_bool = true;
		}
		if(var_316_bool != 0) {
			object var_319_object;
			func_1309(var_319_object);
			@RemoveActor(var_319_object);
		}
	} else if(var_311_string == "restore") {
		var_0_object = false;
	}
	
}


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
void func_1529(object var_82_object)
{
	object var_83_object;
	var_82_object = var_83_object;
	func_1516(var_83_object);
	object var_84_object;
	var_82_object = var_84_object;
	func_1505(var_84_object, true);
}


// @pe
void func_1661(object var_11_object)
{
	bool var_12_bool;
	func_1379(var_12_bool, "quest_d11_02", "soldier_dead");
	object var_18_object;
	var_11_object = var_18_object;
	func_1463(var_18_object);
}


