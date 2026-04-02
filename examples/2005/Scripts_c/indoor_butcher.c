// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_2398(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			object var_18_object;
			var_11_bool = var_18_object;
			func_2401(var_18_object);
		}
	}

	// @pe
	void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool)
	{
		func_2407();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
	}

}


task task_1
{
	void OnUse(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_2398(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_401();
			object var_20_object;
			var_11_bool = var_20_object;
			func_2401(var_20_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		object var_14_object;
		var_11_bool = var_14_object;
		func_2299(var_14_object);
		int var_23_int; object var_24_object;
		var_11_bool = var_24_object;
		func_2365(var_23_int, var_24_object);
		int var_13_int;
		var_23_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_401();
			object var_63_object;
			var_11_bool = var_63_object;
			func_2375(var_63_object);
		}
	}

	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool)
	{
		int var_15_int;
		object var_17_object;
		var_11_bool = var_17_object;
		object var_18_object;
		var_12_bool = var_18_object;
		bool var_19_bool;
		var_13_bool = var_19_bool;
		func_2445(var_19_bool);
		bool var_16_bool;
		if(var_16_bool != 0) {
			int var_20_int; object var_21_object; bool var_22_bool;
			var_11_bool = var_21_object;
			var_13_bool = var_22_bool;
			func_2383(var_22_bool);
			var_20_int = var_15_int;
			if(var_15_int > 0) {
				if(var_15_int > 1)
					func_401();
				object var_27_object;
				var_11_bool = var_27_object;
				func_2386();
			}
		}
	}

	void OnSteal(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_2388(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_401();
			object var_20_object;
			var_11_bool = var_20_object;
			func_2391();
		}
	}

	void OnMessage(object var_0_object, string var_1_string, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		int var_14_int;
		object var_16_object;
		var_11_bool = var_16_object;
		string var_17_string;
		var_12_bool = var_17_string;
		bool var_15_bool;
		func_2213(var_15_bool, var_16_object, var_17_string);
		if(var_15_bool != 0) {
			func_401();
			object var_30_object; string var_31_string;
			var_11_bool = var_30_object;
			var_12_bool = var_31_string;
			func_2245(var_30_object, var_31_string);
		} else {
			int var_41_int; string var_42_string; object var_43_object;
			var_12_bool = var_42_string;
			var_11_bool = var_43_object;
			func_2393(var_43_object);
			var_41_int = var_14_int;
			if(!(var_14_int > 0)) goto Label_284;
			if(var_14_int > 1)
				func_401();
			string var_48_string; object var_49_object;
			var_12_bool = var_48_string;
			var_11_bool = var_49_object;
			func_2396();
		}
	Label_284:
	
	}

	// @pe
	void OnTrigger(string name, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		string var_13_string;
		var_11_bool = var_13_string;
		bool var_12_bool;
		func_2312(var_12_bool, var_13_string);
		if(var_12_bool != 0) {
			func_401();
			string var_21_string;
			var_11_bool = var_21_string;
			func_2328(var_21_string);
		}
	}

	// @pe
	void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool)
	{
		func_401();
		func_2407();
	}

	// @pe
	void OnSee(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		object var_13_object;
		var_11_bool = var_13_object;
		bool var_12_bool;
		func_2270(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_401();
			object var_24_object;
			var_11_bool = var_24_object;
			func_2293(var_24_object);
		}
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool)
	{
		func_1152(var_10_bool);
		func_2407();
	}

	// @pe
	void OnTimer(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, int var_9_int, bool var_10_bool, bool var_11_bool)
	{
		if(var_11_bool == 1) {
			func_2071(var_1_int);
		} else {
			int var_19_int;
			func_1296(var_10_bool, var_19_int, var_19_int);
		}
	
	}

	// @pe
	void OnSee(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		bool var_12_bool = false;
		if(var_1_int == var_11_bool) {
			if(!var_2_int) //@nz
				var_12_bool = true;
		}
		if(var_12_bool != 0) {
			var_2_int = true;
			object var_15_object;
			var_11_bool = var_15_object;
			func_1944(var_15_object);
		}
	}

	// @pe
	void OnStopSee(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		bool var_12_bool = false;
		if(var_1_int == var_11_bool) {
			if(var_2_int != 0)
				var_12_bool = true;
		}
		if(var_12_bool != 0) {
			var_2_int = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		@RequestClearPath(var_11_bool);
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_1152(var_11_bool);
		object var_16_object;
		var_11_bool = var_16_object;
		func_2189();
	}

}


maintask task_4
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool)
	{
		@SensePlayerOnly(true);
		func_2441();
		func_1369();
	
		for(;;) {
			func_1542(var_9_bool, var_10_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		int var_12_int;
		object var_15_object;
		var_11_object = var_15_object;
		func_2398(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_1608(var_12_int, var_13_int);
			object var_20_object;
			var_11_object = var_20_object;
			func_2401(var_20_object);
		}
	}

	void OnAttacked(object actor, int iDamageType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		int var_12_int;
		object var_14_object;
		var_11_object = var_14_object;
		func_2299(var_14_object);
		int var_23_int; object var_24_object;
		var_11_object = var_24_object;
		func_2365(var_23_int, var_24_object);
		int var_13_int;
		var_23_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_1608(var_12_int, var_13_int);
			object var_63_object;
			var_11_object = var_63_object;
			func_2375(var_63_object);
		}
	}

	void OnPlayerDamage(object actor, int iDamageType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, object var_12_object, bool var_13_bool)
	{
		int var_14_int; int var_15_int;
		object var_17_object;
		var_11_object = var_17_object;
		object var_18_object;
		var_12_object = var_18_object;
		bool var_19_bool;
		var_13_bool = var_19_bool;
		func_2445(var_19_bool);
		bool var_16_bool;
		if(var_16_bool != 0) {
			int var_20_int; object var_21_object; bool var_22_bool;
			var_11_object = var_21_object;
			var_13_bool = var_22_bool;
			func_2383(var_22_bool);
			var_20_int = var_15_int;
			if(var_15_int > 0) {
				if(var_15_int > 1)
					func_1608(var_14_int, var_15_int);
				object var_27_object;
				var_11_object = var_27_object;
				func_2386();
			}
		}
	}

	void OnSteal(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		int var_12_int;
		object var_15_object;
		var_11_object = var_15_object;
		func_2388(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_1608(var_12_int, var_13_int);
			object var_20_object;
			var_11_object = var_20_object;
			func_2391();
		}
	}

	void OnMessage(object var_0_object, int iParam, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, string var_12_string)
	{
		int var_13_int; int var_14_int;
		object var_16_object;
		var_11_object = var_16_object;
		string var_17_string;
		var_12_string = var_17_string;
		bool var_15_bool;
		func_2213(var_15_bool, var_16_object, var_17_string);
		if(var_15_bool != 0) {
			func_1608(var_13_int, var_14_int);
			object var_30_object; string var_31_string;
			var_11_object = var_30_object;
			var_12_string = var_31_string;
			func_2245(var_30_object, var_31_string);
		} else {
			int var_41_int; string var_42_string; object var_43_object;
			var_12_string = var_42_string;
			var_11_object = var_43_object;
			func_2393(var_43_object);
			var_41_int = var_14_int;
			if(!(var_14_int > 0)) goto Label_1506;
			if(var_14_int > 1)
				func_1608(var_13_int, var_14_int);
			string var_48_string; object var_49_object;
			var_12_string = var_48_string;
			var_11_object = var_49_object;
			func_2396();
		}
	Label_1506:
	
	}

	// @pe
	void OnTrigger(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, string var_11_string)
	{
		bool var_12_bool; string var_13_string;
		func_2312(var_12_bool, var_13_string);
		if(var_12_bool != 0) {
			func_1608(var_10_bool, var_13_string);
			string var_21_string;
			var_11_string = var_21_string;
			func_2328(var_21_string);
		}
	}

	// @pe
	void OnSee(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		bool var_12_bool; object var_13_object;
		func_2270(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1608(var_10_bool, var_13_object);
			object var_24_object;
			var_11_object = var_24_object;
			func_2293(var_24_object);
		}
	}

	// @pe
	void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool)
	{
		func_1608(var_9_bool, var_10_bool);
		func_2407();
	}

	// @pe
	void OnCollision(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		@RequestClearPath(var_11_object);
	}

	void OnActorStuck(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool)
	{
		@Stop();
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		func_1608(var_10_bool, var_11_object);
		object var_12_object;
		var_11_object = var_12_object;
		func_2189();
	}

}


void OnPropertyChange(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, string var_12_string)
{
	float var_14_float;
	if(var_12_string == "health") {
		@GetProperty("health", var_14_float);
		if(var_14_float <= 0)
			@SignalDeath(var_11_object);
	}
}


// @pe
void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	func_2168(var_12_object);
}


// @pe
void OnHit(object actor, int iHitType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, int var_12_int, float var_13_float, float var_14_float)
{
	object var_15_object;
	var_11_object = var_15_object;
	int var_16_int;
	var_12_int = var_16_int;
	float var_17_float;
	var_13_float = var_17_float;
	func_1846(var_15_object, var_16_int, var_17_float);
}


// @pe
void OnHit2(object actor, int iHitType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, int var_12_int, float var_13_float, float var_14_float, cvector var_15_cvector, cvector var_16_cvector)
{
	object var_17_object;
	var_11_object = var_17_object;
	int var_18_int;
	var_12_int = var_18_int;
	float var_19_float;
	var_13_float = var_19_float;
	cvector var_20_cvector;
	var_15_cvector = var_20_cvector;
	cvector var_21_cvector;
	var_16_cvector = var_21_cvector;
	func_1914(var_19_float, var_20_cvector, var_21_cvector);
}


// @pe
void func_0(object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	func_33(var_14_object);
	object var_94_object;
	var_13_object = var_94_object;
	func_2448(var_94_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1030(int var_2_int, int var_5_int)
{
	int var_378_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_377_float;
	@rand(var_377_float);
	float var_384_float;
	func_1080(var_384_float);
	if(var_377_float < var_384_float) {
		@irand(var_378_int, var_2_int);
		@Speak("attack" + (var_378_int + 1));
		int var_389_int;
		func_1078(var_389_int);
		var_5_int = var_389_int;
	}
}


void func_1542(object var_0_object, int var_1_int)
{
	float var_23_float; cvector var_24_cvector; cvector var_25_cvector; bool var_26_bool; object var_27_object; bool var_28_bool;
	@rand(var_23_float, 0.5);
	@Sleep(var_23_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_1554:
				@GetPosition(var_25_cvector);
				float var_32_float;
				func_1345(var_32_float);
				@GetRandomPFPointInCircle(var_24_cvector, var_25_cvector, var_32_float, var_26_bool);
				if(var_26_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_1554;
			}
				var_1_int = false;
		}
		}
		goto Label_1570;

	Label_1570:
		object var_34_object; cvector var_35_cvector;
		var_24_cvector = var_35_cvector;
		func_1347(var_34_object, var_35_cvector);
		var_34_object = var_27_object;
		if(var_27_object != null) {
			@RotatePath(var_27_object, var_28_bool);
			if(var_28_bool != 0) {
				bool var_42_bool;
				func_1624(var_42_bool);
				@FollowPath(var_27_object, var_42_bool, var_28_bool);
				var_27_object = null;
				if(var_28_bool != 0) {
					TaskCall(1);
					func_320();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_27_object = null;
	}
	
}


void func_2056(bool var_113_bool, int var_114_int, int var_115_int)
{
	int var_117_int;
	@irand(var_117_int, var_115_int);
	var_113_bool = var_117_int < var_114_int;
}


void func_2061(float var_463_float)
{
	object var_465_object;
	@CreateFloatVector(var_465_object);
	var_465_object->add(var_463_float);
	@SendWorldWndMessage(15, var_465_object);
}
EMIT "Stack[-1] = 0";


void func_2071(object var_133_object)
{
	bool var_135_bool;
	@IsPlayerActor(var_133_object, var_135_bool);
	if(var_135_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_2080(void)
{
	object var_369_object;
	@GetScene(var_369_object);
	object var_371_object;
	func_2022(var_371_object);
	@BroadcastMessage("battle", var_371_object, var_369_object);
}
EMIT "Stack[-1] = 0";


void func_33(object var_14_object)
{
	cvector var_25_cvector; cvector var_26_cvector; cvector var_27_cvector; cvector var_28_cvector; string var_29_string; object var_30_object; bool var_31_bool; bool var_32_bool; float var_33_float; cvector var_34_cvector;
	if(var_14_object == null) {
		func_124("fdie");
	} else {
		var_14_object->GetPosition(var_25_cvector);
		@GetPosition(var_26_cvector);
		@GetDirection(var_27_cvector);
		var_28_cvector = var_26_cvector - var_25_cvector;
		var_68_float = GetByIndex(var_28_cvector, 0);
		var_69_float = GetByIndex(var_27_cvector, 0);
		var_71_float = GetByIndex(var_28_cvector, 2);
		var_72_float = GetByIndex(var_27_cvector, 2);
		if(((var_68_float * var_69_float) + (var_71_float * var_72_float)) >= 0)
			var_29_string = "fdie";
		else
			var_29_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_14_object = var_30_object;
		var_79_bool = IsFuncExist(var_14_object, "GetScriptProperty", 2);
		if(var_79_bool != 0) {
			var_14_object->HasScriptProperty(var_31_bool, "Owner");
			if(var_31_bool != 0) {
				var_14_object->GetScriptProperty(var_30_object, "Owner");
				if(var_30_object == null)
					var_14_object = var_30_object;
			}
		}
		var_86_bool = IsFuncExist(var_30_object, "@GetEyesHeight", 1);
		if(var_86_bool != 0) {
			var_30_object->GetEyesHeight(var_33_float);
			var_34_cvector = [0.0, 0.0, 0.0];
			var_87_float = GetByIndex(var_34_cvector, 1);
			var_33_float = var_87_float;
			SetByIndex(var_34_cvector, 1) = var_87_float;
			@LookAsync(var_14_object, "head", var_34_cvector);
			var_32_bool = true;
		} else {
			var_32_bool = false;

		}
		string var_89_string;
		var_29_string = var_89_string;
		func_1981(var_89_string);
		@PlayAnimation("all", var_29_string);
		@WaitForAnimEnd();
		if(var_32_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_29_string);
		@RemoveEnvelope();
		var_30_object = null;
	}
	
}


void func_1062(object var_0_object)
{
	func_2071(var_0_object);
}


void func_1067(int var_468_int)
{
	var_468_int = 0;
}


void func_2091(int var_130_int)
{
	int var_132_int;
	@GetVariable("branch", var_132_int);
	var_132_int = var_130_int;
}


void func_1069(void)
{
	func_1981("attack_stay");
}


// @pe
void func_2097(object var_26_object)
{
	int var_27_int;
	func_2091(var_27_int);
	if(var_27_int == 1)
		@WorkWithCorpse(var_26_object);
	else
		@Barter(var_26_object);
	
}


// @pe
void func_1074(void)
{
}


void func_1076(bool var_493_bool)
{
	var_493_bool = true;
}


void func_1078(int var_389_int)
{
	var_389_int = 1;
}


void func_1080(float var_384_float)
{
	var_384_float = 0.5;
}


void func_2110(string var_136_string)
{
	object var_140_object;
	@CreateInvItem(var_140_object);
	var_140_object->SetItemName(var_136_string);
	var_140_object->SetProperty("Organ", 1);
	int var_141_int;
	var_140_object->GetItemID(var_141_int);
	bool var_142_bool;
	@AddItem(var_142_bool, var_140_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1089(int var_2_int, bool var_140_bool, object var_141_object, float var_142_float, float var_143_float, bool var_144_bool, bool var_145_bool)
{
	object var_153_object;
	func_2071(var_153_object);
	@SetTimer(1, 5);
	bool var_151_bool;
	@CanSee(var_151_bool, var_153_object);
	if(var_151_bool != 0) {
		var_2_int = true;
		object var_157_object;
		var_141_object = var_157_object;
		func_1944(var_157_object);
	} else {
		var_2_int = false;
	}
	bool var_164_bool; object var_165_object;
	func_1647(var_164_bool, var_165_object);
	if(var_164_bool != 0) {
		object var_166_object;
		func_2022(var_166_object);
		@SendPlayerEnemy(var_165_object, var_166_object);
	}
	bool var_167_bool; object var_168_object; float var_169_float; float var_170_float; bool var_171_bool; bool var_172_bool;
	var_141_object = var_168_object;
	var_142_float = var_169_float;
	var_143_float = var_170_float;
	var_144_bool = var_171_bool;
	var_145_bool = var_172_bool;
	bool var_152_bool;
	func_1194(var_151_bool, var_152_bool, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool);
	var_167_bool = var_152_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_152_bool = var_140_bool;
	
}


void func_1608(object var_0_object, int var_1_int)
{
	var_0_object = true;
	var_1_int = false;
	@Stop();
	@StopGroup0();
}


void func_2127(void)
{
	int var_130_int;
	func_2091(var_130_int);
	if(var_130_int != 1) {
	}
	func_2110("liver");
	func_2110("kidney");
	func_2110("heart");
	func_2110("blood");
}


void func_1624(bool var_42_bool)
{
	var_42_bool = false;
}


// @pe
void func_1626(string var_435_string, int var_436_int)
{
	if(var_436_int == 2) {
		var_435_string = "fire";
		return 0;
	EMIT "GOTO 0x666";
	}
	if(var_436_int == 1) {
		var_435_string = "bullet";
		return 0;
	}
	var_435_string = "phys";
}


void func_2151(void)
{
	@ClearSubContainer(0);
	func_1966("rusk", 1, 1, 3);
	func_1955("peanut", 1, 5);
}


void func_1640(cvector var_45_cvector, object var_46_object)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector;
	var_46_object->GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
}


void func_1647(bool var_95_bool, object var_96_object)
{
	bool var_98_bool;
	@IsPlayerActor(var_96_object, var_98_bool);
	var_98_bool = var_95_bool;
}


void func_1652(bool var_47_bool, object var_48_object, string var_49_string)
{
	var_54_bool = IsFuncExist(var_48_object, "HasProperty", 2);
	if(!var_54_bool) { //@nz
		var_47_bool = false;
		return 2;
	}
	bool var_51_bool;
	var_48_object->HasProperty(var_49_string, var_51_bool);
	var_51_bool = var_47_bool;
}


// @pe
void func_2168(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	TaskCall(0);
	func_0(var_13_object);
	TaskReturn();
}


// @pe
void func_124(string var_36_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_37_string;
	var_36_string = var_37_string;
	func_1981(var_37_string);
	@PlayAnimation("all", var_36_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_36_string);
	@RemoveEnvelope();
}


void func_1664(float var_407_float, object var_408_object, float var_409_float, int var_410_int)
{
	int var_420_int; int var_422_int;
	object var_427_object;
	var_408_object = var_427_object;
	bool var_426_bool;
	func_1652(var_426_bool, var_427_object, "health");
	if(!var_426_bool) //@nz
		var_407_float = 0.0;
	bool var_430_bool; object var_431_object;
	func_1652(var_430_bool, var_431_object, "armor");
	if(!var_430_bool) //@nz
		var_420_int = 0;
	else
		var_431_object->GetProperty("armor", var_420_int);
	string var_435_string; int var_436_int;
	var_410_int = var_436_int;
	func_1626(var_435_string, var_436_int);
	string var_421_string = "armor_" + var_435_string;
	bool var_441_bool; object var_442_object; string var_443_string;
	var_408_object = var_442_object;
	func_1652(var_441_bool, var_442_object, var_443_string);
	if(!var_441_bool) //@nz
		var_422_int = 0;
	else
		var_408_object->GetProperty(var_443_string, var_422_int);

	float var_445_float;
	func_2038(var_445_float, ((var_420_int + var_422_int) / 100.0), (float)1);
	float var_423_float;
	var_445_float = var_423_float;
	float var_424_float;
	var_408_object->GetProperty("health", var_424_float);
	float var_425_float = var_409_float * (1 - var_423_float);
	float var_455_float;
	func_2045(var_455_float, (var_424_float - var_425_float), (float)0, (float)1);
	var_408_object->SetProperty("health", var_455_float);
	bool var_461_bool; object var_462_object;
	var_408_object = var_462_object;
	func_1647(var_461_bool, var_462_object);
	if(var_461_bool != 0) {
		float var_463_float = -var_425_float;
		func_2061(var_463_float);
	}
	var_425_float = var_407_float;
	
}


void func_1152(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_1318(var_11_bool);
}


void func_649(int var_1_int, int var_2_int, float var_4_float)
{
	bool var_99_bool; bool var_100_bool; cvector var_101_cvector;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_99_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_99_bool) { //@nz
		} else {
			var_1_int += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_100_bool, ("attack" + (var_2_int + 1)));
			if(!var_100_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_101_cvector, "all", "bjump");
		var_115_float = GetByIndex(var_101_cvector, 2);
		var_4_float = -var_115_float;

	}
}


// @pe
void func_2213(bool var_15_bool, object var_16_object, string var_17_string)
{
	if(var_17_string == "unholster") {
		bool var_20_bool; object var_21_object;
		var_16_object = var_21_object;
		func_2408(var_21_object);
		var_20_bool = var_15_bool;
		return 0;
	EMIT "GOTO 0x8c3";
	}
	if(var_17_string == "player_shot") {
		bool var_24_bool; object var_25_object;
		var_16_object = var_25_object;
		func_2413(var_25_object);
		var_24_bool = var_15_bool;
		return 0;
	EMIT "GOTO 0x8c3";
	}
	if(var_17_string == "battle") {
		bool var_28_bool; object var_29_object;
		var_16_object = var_29_object;
		func_2418(var_29_object);
		var_28_bool = var_15_bool;
		return 0;
	}
	var_15_bool = false;
}


void func_1194(object var_0_object, int var_1_int, bool var_167_bool, object var_168_object, float var_169_float, float var_170_float, bool var_171_bool, bool var_172_bool)
{
	bool var_181_bool; object var_183_object; cvector var_184_cvector; cvector var_185_cvector; float var_187_float; object var_188_object;
	var_0_object = false;
	var_1_int = var_168_object;
	bool var_182_bool;
	var_172_bool = var_182_bool;
	
	for(;;) {
		bool var_189_bool; object var_190_object;
		var_168_object = var_190_object;
		func_1334(var_189_bool, var_190_object);
		if(!var_189_bool) { //@nz
			var_167_bool = false;
			return 16;
		}
		var_168_object->GetPosition(var_184_cvector);
		@GetPosition(var_185_cvector);
		var_187_float = (var_184_cvector - var_185_cvector) | (var_184_cvector - var_185_cvector);
		bool var_194_bool = false;
		if(var_170_float > 0) {
			if(var_187_float > (var_170_float * var_170_float))
				var_194_bool = true;
		}
		if(var_194_bool != 0) {
			@Stop();
			var_167_bool = false;
			return 16;
		}
		if(var_187_float > (var_169_float * var_169_float)) {
			var_168_object->GetPFPosition(var_184_cvector);
			@FindPathTo(var_188_object, var_184_cvector);
			if(var_188_object != null) {
				var_188_object = var_183_object;
				var_188_object = null;
			}
			if(var_183_object != null) {
				if(var_182_bool == 0) goto Label_1247;
				var_182_bool = false;
				@RotatePath(var_183_object, var_181_bool);
				if(!var_181_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_207_string;
						func_1341(var_207_string);
						string var_208_string;
						func_1343(var_208_string);
						@FollowPath(var_183_object, var_171_bool, var_181_bool, var_207_string, var_208_string);
						if(!var_181_bool) { //@nz
							if(var_0_object == 0) goto Label_1266;
							var_183_object = null;
						}
					EMIT "GOTO 0x4f3";

					Label_1266:
						} else {
					var_183_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_181_bool);
					if(!var_181_bool) { //@nz
						if(var_0_object != 0) {
							var_183_object = null;
							goto Label_1294;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1294;
		}
			var_188_object = null;
			goto Label_1292;

		Label_1292:
			var_183_object = null;

		}
	Label_1294:
		for(;;) {
			var_167_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_684(object var_0_object, float var_393_float, int var_394_int)
{
	object var_398_object; float var_399_float; float var_400_float;
	@GetVictim((var_393_float * 0.9), var_398_object);
	@ReportAttack(var_0_object);
	if(var_398_object == var_0_object) {
		float var_404_float; object var_405_object; int var_406_int;
		var_398_object = var_405_object;
		var_394_int = var_406_int;
		func_414(var_406_int);
		var_404_float = var_399_float;
		float var_407_float; object var_408_object; float var_409_float; int var_410_int;
		var_398_object = var_408_object;
		int var_411_int; object var_412_object; int var_413_int;
		var_398_object = var_412_object;
		var_394_int = var_413_int;
		func_417(var_413_int);
		var_411_int = var_410_int;
		func_1664(var_407_float, var_408_object, var_409_float, var_410_int);
		var_407_float = var_400_float;
		int var_468_int;
		func_1067(var_468_int);
		@ReportHit(var_0_object, var_468_int, var_400_float, var_409_float);
		object var_469_object; float var_470_float;
		var_398_object = var_469_object;
		var_400_float = var_470_float;
		func_1074();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_2245(object var_30_object, string var_31_string)
{
	if(var_31_string == "unholster") {
		object var_34_object;
		var_30_object = var_34_object;
		func_2411();
	} else if(var_31_string == "player_shot") {
			object var_37_object;
			var_30_object = var_37_object;
			func_2416();
	}
Label_2269:
	for(;;) {

	}
	
	if(!(var_31_string == "battle")) goto Label_2269;
	object var_40_object;
	var_30_object = var_40_object;
	func_2421();
}


void func_1737(bool var_40_bool, object var_41_object)
{
	bool var_43_bool;
	var_41_object->IsDead(var_43_bool);
	var_43_bool = var_40_bool;
}


void func_1742(bool var_29_bool, object var_30_object)
{
	if(var_30_object == null) {
		var_29_bool = false;
		return 4;
	}
	bool var_36_bool = false;
	var_39_bool = IsFuncExist(var_30_object, "IsDead", 1);
	if(var_39_bool != 0) {
		bool var_40_bool; object var_41_object;
		var_30_object = var_41_object;
		func_1737(var_40_bool, var_41_object);
		if(var_40_bool != 0)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		var_29_bool = false;
		return 4;
	}
	object var_33_object;
	@GetScene(var_33_object);
	if(var_33_object == null) {
		var_29_bool = false;
		return 4;
	}
	object var_34_object;
	var_30_object->GetScene(var_34_object);
	if(var_33_object != var_34_object) {
		var_29_bool = false;
		return 4;
	}
	var_29_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_723(object var_0_object, int var_1_int, bool var_356_bool, float var_357_float)
{
	string var_365_string;
	func_1062(var_365_string);
	int var_362_int;
	@irand(var_362_int, var_1_int);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2080();
	@PlayAnimation("all", ("attack_begin" + (var_362_int + 1)));
	@WaitForAnimEnd();
	int var_364_int;
	func_1030(var_364_int, var_365_string);
	bool var_390_bool;
	func_1778(var_390_bool, var_0_object);
	if(!var_390_bool) { //@nz
		@StopAsync();
		var_356_bool = false;
		return 8;
	}
	float var_393_float; int var_394_int;
	var_357_float = var_393_float;
	var_362_int = var_394_int;
	func_684(var_365_string, var_393_float, var_394_int);
	bool var_363_bool;
	@HasAnimation(var_363_bool, "all", ("attack_middle" + var_362_int));
	if(var_363_bool != 0) {
		func_2080();
		@PlayAnimation("all", ("attack_middle" + var_362_int));
		@WaitForAnimEnd();
		func_1062(var_365_string);
		bool var_478_bool;
		func_1778(var_478_bool, var_0_object);
		if(!var_478_bool) { //@nz
			@StopAsync();
			var_356_bool = false;
			return 8;
		}
		float var_481_float; int var_482_int;
		var_357_float = var_481_float;
		func_684(var_365_string, var_481_float, var_482_int);
		var_364_int = 1;

		for(;;) {
			var_365_string = (("attack_middle" + var_482_int) + "_") + var_364_int;
			@HasAnimation(var_363_bool, "all", var_365_string);
			if(!var_363_bool) { //@nz
			} else {
				func_2080();
				@PlayAnimation("all", var_365_string);
				@WaitForAnimEnd();
				func_1062(var_365_string);
				bool var_504_bool;
				func_1778(var_504_bool, var_0_object);
				if(!var_504_bool) { //@nz
					@StopAsync();
					var_356_bool = false;
					return 8;
				}
				float var_507_float; int var_508_int;
				var_357_float = var_507_float;
				var_362_int = var_508_int;
				func_684(var_365_string, var_507_float, var_508_int);
				var_364_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_362_int));
		bool var_493_bool;
		func_1076(var_493_bool);
		if(var_493_bool != 0) {
			bool var_494_bool;
			func_860(var_494_bool, 0.75);
			@StopAsync();
		}
		var_356_bool = true;
		return 8;

	}
}


void func_2270(bool var_12_bool, object var_13_object)
{
	bool var_15_bool;
	bool var_16_bool = false;
	bool var_17_bool; object var_18_object;
	var_13_object = var_18_object;
	func_2408(var_18_object);
	if(var_17_bool != 0) {
		bool var_19_bool; object var_20_object;
		func_1647(var_19_bool, var_20_object);
		if(var_19_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		var_20_object->IsWeaponHolstered(var_15_bool);
		if(!var_15_bool) //@nz
			var_12_bool = true;
	}
	var_12_bool = false;
}


void func_1778(bool var_25_bool, object var_26_object)
{
	object var_30_object;
	var_26_object = var_30_object;
	bool var_29_bool;
	func_1742(var_29_bool, var_30_object);
	if(!var_29_bool) { //@nz
		var_25_bool = false;
		return 2;
	}
	bool var_47_bool; object var_48_object;
	func_1652(var_47_bool, var_48_object, "noaccess");
	if(!var_47_bool) { //@nz
		var_25_bool = true;
		return 2;
	}
	int var_28_int;
	var_48_object->GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == 0;
}


// @pe
void func_2293(object var_24_object)
{
	object var_25_object;
	var_24_object = var_25_object;
	func_2411();
}


// @pe
void func_2299(object var_14_object)
{
	bool var_15_bool; object var_16_object;
	func_1647(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		object var_19_object;
		func_2022(var_19_object);
		@ReportReputationChange(var_16_object, var_19_object, -0.03);
	}
}


void func_2312(bool var_12_bool, string var_13_string)
{
	object var_15_object;
	if(var_13_string == "heal") {
		@FindActor(var_15_object, "player");
		bool var_19_bool; object var_20_object;
		var_15_object = var_20_object;
		func_2423(var_20_object);
		var_19_bool = var_12_bool;
	EMIT "Stack[-1] = 0";
	}
	var_12_bool = false;
}


void func_1802(object var_28_object)
{
	string var_42_string;
	if(var_28_object == null)
		return 14;
	bool var_36_bool;
	@IsDead(var_36_bool);
	if(var_36_bool != 0)
		return 14;
	int var_37_int;
	@GetSecondaryAnimationType(var_37_int);
	if(var_37_int < 0)
		return 14;
	cvector var_38_cvector;
	var_28_object->GetPosition(var_38_cvector);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_41_cvector = var_39_cvector - var_38_cvector;
	var_47_float = GetByIndex(var_41_cvector, 0);
	var_48_float = GetByIndex(var_40_cvector, 0);
	var_50_float = GetByIndex(var_41_cvector, 2);
	var_51_float = GetByIndex(var_40_cvector, 2);
	if(((var_47_float * var_48_float) + (var_50_float * var_51_float)) >= 0)
		var_42_string = "fhit";
	else
		var_42_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_42_string + "1"), (var_42_string + "2"), -10);
	
}


// @pe
void func_1296(object var_0_object, int var_1_int, int var_19_int)
{
	if(var_19_int != 0)
		return 0;
	bool var_22_bool;
	func_1334(var_22_bool, var_1_int);
	if(!var_22_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2328(string var_21_string)
{
	object var_23_object;
	if(var_21_string == "heal") {
		@FindActor(var_23_object, "player");
		object var_27_object;
		var_23_object = var_27_object;
		func_2426();
		var_23_object = null;
	}
}


void func_2341(string var_66_string, int var_67_int)
{
	string var_69_string = "idle";
	if(var_67_int != 0)
		var_69_string += var_67_int;
	var_69_string = var_66_string;
}


void func_1318(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2348(int var_60_int)
{
	int var_63_int; bool var_64_bool;
	var_63_int = 0;
	
	for(;;) {
		string var_66_string; int var_67_int;
		var_63_int = var_67_int;
		func_2341(var_66_string, var_67_int);
		@HasAnimation(var_64_bool, "all", var_66_string);
		if(!var_64_bool) //@nz
			break;
		var_63_int += 1;
	}
	var_63_int = var_60_int;
}


// @pe
void func_1334(bool var_189_bool, object var_190_object)
{
	object var_192_object;
	var_190_object = var_192_object;
	bool var_191_bool;
	func_1778(var_191_bool, var_192_object);
	var_191_bool = var_189_bool;
}


void func_1846(object var_15_object, int var_16_int, float var_17_float)
{
	cvector var_27_cvector; object var_28_object; int var_29_int; bool var_30_bool; cvector var_31_cvector; cvector var_32_cvector;
	bool var_36_bool = false;
	bool var_37_bool = false;
	if(var_15_object != 0) {
		if(var_16_int != 4)
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		if(var_16_int != 5)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		cvector var_43_cvector; cvector var_44_cvector;
		cvector var_45_cvector; object var_46_object;
		var_15_object = var_46_object;
		func_1640(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_2028(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		@CreateVectorVector(var_28_object);
		var_29_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_29_int), var_30_bool, var_31_cvector, var_32_cvector);
			if(!var_30_bool) { //@nz
				break;
			Label_1908:
				var_28_object = null;
	}
			object var_105_object;
			var_15_object = var_105_object;
			func_1802(var_105_object);
		}
		if((var_32_cvector | var_27_cvector) >= 0.70710677)
			var_28_object->add(var_31_cvector);
		var_29_int += 1;
	}
	int var_33_int;
	var_28_object->size(var_33_int);
	if(var_33_int == 0) goto Label_1908;
	int var_34_int;
	@irand(var_34_int, var_33_int);
	cvector var_35_cvector;
	var_28_object->get(var_35_cvector, var_34_int);
	object var_60_object; int var_61_int; float var_62_float; cvector var_63_cvector; cvector var_64_cvector;
	var_15_object = var_60_object;
	var_16_int = var_61_int;
	var_17_float = var_62_float;
	var_35_cvector = var_63_cvector;
	var_64_cvector = -var_27_cvector;
	func_1914(var_62_float, var_63_cvector, var_64_cvector);
}


// @pe
void func_2365(int var_23_int, object var_24_object)
{
	object var_26_object;
	var_24_object = var_26_object;
	bool var_25_bool;
	func_1778(var_25_bool, var_26_object);
	if(var_25_bool != 0)
		var_23_int = 2;
	else
		var_23_int = 0;
	
}


void func_1341(string var_207_string)
{
	var_207_string = "walk";
}


void func_1343(string var_208_string)
{
	var_208_string = "run";
}


void func_320(void)
{
	int var_53_int; int var_54_int; bool var_55_bool; float var_56_float; bool var_57_bool;
	@WaitForAnimEnd();
	bool var_58_bool;
	func_1939(var_58_bool);
	if(!var_58_bool) //@nz
		return 14;
	int var_60_int;
	func_2348(var_60_int);
	int var_51_int;
	var_60_int = var_51_int;
	int var_52_int = 0;
	
	for(;;) {
		bool var_73_bool = false;
		if(var_52_int < 5) {
			bool var_76_bool;
			func_1939(var_76_bool);
			if(var_76_bool != 0)
				var_73_bool = true;
		}
		if(var_73_bool != 0) {
			@irand(var_53_int, 3);
			if(var_53_int == 0) {
				if(var_51_int == 0) goto Label_367;
				@irand(var_54_int, var_51_int);
				string var_82_string; int var_83_int;
				var_54_int = var_83_int;
				func_2341(var_82_string, var_83_int);
				@PlayAnimation("all", var_82_string);
				@WaitForAnimEnd(var_55_bool);
				if(!var_55_bool) { //@nz
				} else {
			} else {
			if(var_53_int == 1) {
				@rand(var_56_float, 4);
				@Sleep((var_56_float + 1), var_57_bool);
				if(!var_57_bool) { //@nz
					goto Label_396;
				}
			} else if(var_52_int != 0) {
				goto Label_396;
			}
			}
					bool var_85_bool;
					func_399(var_85_bool);
					var_86_bool = !var_85_bool; //@nz
					if(var_86_bool == 0) goto Label_391;
			}
		}
	Label_396:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_391:
		@ResetAAS();
		var_52_int += 1;
	}
	
}


void func_1345(float var_32_float)
{
	var_32_float = 1000.0;
}


void func_1347(object var_34_object, cvector var_35_cvector)
{
	object var_37_object;
	@FindPathTo(var_37_object, var_35_cvector, 1, 1);
	var_37_object = var_34_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2375(object var_63_object)
{
	object var_64_object;
	var_63_object = var_64_object;
	TaskCall(2);
	func_406(var_64_object);
	TaskReturn();
}


// @pe
void func_2383(int var_20_int)
{
	var_20_int = 0;
}


// @pe
void func_2386(void)
{
}


// @pe
void func_2388(int var_14_int)
{
	var_14_int = 0;
}


// @pe
void func_2391(void)
{
}


// @pe
void func_2393(int var_41_int)
{
	var_41_int = 0;
}


void func_1369(void)
{
	bool var_13_bool;
	func_1939(var_13_bool);
	if(!var_13_bool) //@nz
		func_2407();
}


// @pe
void func_2396(void)
{
}


void func_860(bool var_494_bool, float var_495_float)
{
	float var_498_float; bool var_499_bool;
	@rand(var_498_float);
	if(var_498_float < var_495_float) {

		for(;;) {
			@IsAnimationPlaying(var_499_bool);
			if(!var_499_bool) { //@nz
			} else {
				bool var_502_bool;
				func_958(var_502_bool);
				if(var_502_bool != 0) {
					var_494_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_494_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1062(var_499_bool);
}


// @pe
void func_2398(int var_14_int)
{
	var_14_int = 2;
}


// @pe
void func_2401(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	func_2428(var_21_object);
}


void func_2407(void)
{
}


// @pe
void func_2408(bool var_17_bool)
{
	var_17_bool = false;
}


// @pe
void func_2411(void)
{
}


// @pe
void func_2413(bool var_24_bool)
{
	var_24_bool = false;
}


// @pe
void func_2416(void)
{
}


// @pe
void func_2418(bool var_28_bool)
{
	var_28_bool = false;
}


// @pe
void func_2421(void)
{
}


void func_887(object var_0_object, bool var_295_bool, float var_296_float)
{
	bool var_302_bool; cvector var_303_cvector; cvector var_304_cvector; cvector var_305_cvector; float var_306_float;
	
	for(;;) {
		@IsAnimationPlaying(var_302_bool);
		if(!var_302_bool) //@nz
			break;
		bool var_308_bool;
		func_958(var_308_bool);
		if(var_308_bool != 0) {
			var_295_bool = true;
			return 10;
		}
		bool var_351_bool;
		func_1778(var_351_bool, var_0_object);
		if(!var_351_bool) { //@nz
			var_295_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_303_cvector); //@t
		@GetPFPosition(var_304_cvector);
		var_305_cvector = var_303_cvector - var_304_cvector;
		var_306_float = var_305_cvector | var_305_cvector;
		if(var_306_float < (var_296_float * var_296_float)) {
			bool var_356_bool; float var_357_float;
			var_296_float = var_357_float;
			func_723(var_305_cvector, var_306_float, var_356_bool, var_357_float);
			var_295_bool = true;
			return 10;
		}
		@sync();
	}
	func_1062(var_306_float);
	var_295_bool = false;
}


// @pe
void func_2423(bool var_19_bool)
{
	var_19_bool = false;
}


void func_1914(object var_17_object, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_24_object;
	@GetScene(var_24_object);
	object var_25_object;
	@AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	object var_28_object;
	var_17_object = var_28_object;
	func_1802(var_28_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2426(void)
{
}


void func_2428(object var_21_object)
{
	bool var_23_bool;
	var_24_bool = GlobalVars[0];
	if(var_24_bool != 0) {
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			object var_26_object;
			var_21_object = var_26_object;
			func_2097(var_26_object);
		}
	}
}


void func_1928(object var_241_object)
{
	cvector var_245_cvector;
	var_241_object->GetPosition(var_245_cvector);
	cvector var_246_cvector;
	@GetPosition(var_246_cvector);
	cvector var_247_cvector = var_245_cvector - var_246_cvector;
	var_248_float = GetByIndex(var_247_cvector, 0);
	var_249_float = GetByIndex(var_247_cvector, 2);
	@RotateAsync(var_248_float, var_249_float);
}


void func_2441(void)
{
	var_12_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


// @pe
void func_2445(bool var_16_bool)
{
	var_16_bool = false;
}


void func_399(bool var_85_bool)
{
	var_85_bool = true;
}


// @pe
void func_2448(object var_94_object)
{
	bool var_95_bool; object var_96_object;
	func_1647(var_95_bool, var_96_object);
	if(var_95_bool != 0) {
		object var_99_object;
		func_2022(var_99_object);
		@ReportReputationChange(var_96_object, var_99_object, -0.07, true);
		func_2151();
	}
	func_2127();
	var_150_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_401(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1939(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


// @pe
void func_406(object var_64_object)
{
	object var_71_object;
	func_420(var_67_int, var_68_bool, var_69_float, var_70_int, var_71_object, var_71_object, true, 180.0);
}


void func_1944(object var_157_object)
{
	float var_160_float;
	var_157_object->GetEyesHeight(var_160_float);
	cvector var_161_cvector = [0.0, 0.0, 0.0];
	var_162_float = GetByIndex(var_161_cvector, 1);
	var_160_float = var_162_float;
	SetByIndex(var_161_cvector, 1) = var_162_float;
	@LookAsync(var_157_object, "head", var_161_cvector);
}


// @pe
void func_414(float var_404_float)
{
	var_404_float = 0.05;
}


// @pe
void func_417(int var_411_int)
{
	var_411_int = 0;
}


void func_930(object var_0_object, bool var_310_bool)
{
	cvector var_316_cvector; cvector var_317_cvector;
	bool var_321_bool;
	func_1778(var_321_bool, var_0_object);
	if(!var_321_bool) { //@nz
		var_310_bool = false;
		return 10;
	}
	bool var_324_bool;
	float var_320_float;
	func_1019(var_320_float, var_324_bool);
	if(var_324_bool != 0) {
		var_0_object->GetPFPosition(var_316_cvector); //@t
		@GetPFPosition(var_317_cvector);
		var_0_object->GetAttackDistance(var_320_float); //@t
		var_310_bool = ((var_316_cvector - var_317_cvector) | (var_316_cvector - var_317_cvector)) <= ((var_320_float + 50) * (var_320_float + 50));
		return 10;
	}
	var_310_bool = false;
}


void func_1955(string var_121_string, int var_122_int, int var_123_int)
{
	bool var_125_bool;
	int var_127_int;
	var_122_int = var_127_int;
	int var_128_int;
	var_123_int = var_128_int;
	bool var_126_bool;
	func_2056(var_126_bool, var_127_int, var_128_int);
	if(var_126_bool != 0)
		@AddItem(var_125_bool, var_121_string, 0);
}


void func_420(object var_0_object, bool var_3_bool, int var_5_int, object var_71_object, bool var_72_bool, float var_73_float, bool var_146_bool, bool var_236_bool)
{
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector; bool var_89_bool; float var_92_float; cvector var_93_cvector; bool var_94_bool; float var_95_float;
	func_649(var_93_cvector, var_94_bool, var_95_float);
	var_5_int = 0;
	var_120_bool = IsFuncExist(var_71_object, "@GetAttackDistance", 1);
	if(var_120_bool != 0) {
		var_71_object->GetAttackDistance(var_85_float);
		var_85_float += 50;
	} else {
						var_73_float = var_85_float;
	}
	if(var_85_float >= 150)
		var_85_float = 150;
	var_3_bool = false;
	var_0_object = var_71_object;
	bool var_88_bool;
	@IsPlayerActor(var_0_object, var_88_bool);
	if(var_88_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_126_object;
		func_2022(var_126_object);
		@SendPlayerEnemy(var_71_object, var_126_object);
	}
	if(var_72_bool != 0)
		var_89_bool = false;
	else
		var_89_bool = true;

	
Label_460:
	for(;;) {
		bool var_129_bool = false;
		bool var_130_bool;
		func_1778(var_130_bool, var_0_object);
		if(var_130_bool != 0) {
			if(!var_3_bool) //@nz
				var_129_bool = true;
		}
		if(var_129_bool != 0) {
			func_1062(var_95_float);
			var_0_object->GetPFPosition(var_86_cvector); //@t
			@GetPFPosition(var_87_cvector);
			var_92_float = (var_86_cvector - var_87_cvector) | (var_86_cvector - var_87_cvector);
			if(var_92_float >= ((400.0 + var_85_float) * (400.0 + var_85_float))) {
				bool var_140_bool; float var_142_float;
				var_85_float = var_142_float;
				TaskCall(3);
				func_1089(var_148_bool, var_140_bool, var_0_object, var_142_float, 3000.0, true, false);
				TaskReturn();
				if(!var_146_bool) { //@nz
				} else {
					var_89_bool = false;
			} else {
			if(var_92_float >= (var_73_float * var_73_float)) {
				var_0_object->GetPFPosition(var_93_cvector); //@t
				@CanReachByPF(var_94_bool, var_93_cvector);
				if(!var_94_bool) { //@nz
					bool var_230_bool; float var_232_float;
					var_85_float = var_232_float;
					TaskCall(3);
					func_1089(var_238_bool, var_230_bool, var_0_object, var_232_float, 3000.0, true, false);
					TaskReturn();
					if(!var_236_bool) { //@nz
						goto Label_632;
					}
					var_89_bool = false;
					goto Label_460;
				}
				if(!var_89_bool) { //@nz
					func_1928(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1062(var_95_float);
					@StopAsync();
					var_89_bool = true;
					bool var_252_bool;
					func_1778(var_252_bool, var_0_object);
					if(!var_252_bool) { //@nz
						goto Label_632;
					}
				}
				@rand(var_95_float);
				bool var_255_bool;
				var_257_bool = var_95_float < 0.25;
				if(var_257_bool != 1) {
					bool var_258_bool;
					func_1019(true, var_258_bool);
					if(var_258_bool != 1)
						var_255_bool = false;
				}
				if(var_255_bool != 0) {
					@Face(var_0_object);
					func_1069();
					@PlayAnimation("all", "attack_stay");
					bool var_295_bool; float var_296_float;
					func_887(var_95_float, var_295_bool, var_296_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1062(var_95_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_513_bool;
					func_1019(var_95_float, var_513_bool);
					var_514_bool = !var_513_bool; //@nz
					if(var_514_bool == 0) goto Label_622;
					bool var_515_bool;
					func_1778(var_515_bool, var_0_object);
					if(!var_515_bool) { //@nz
						goto Label_632;
					}
					var_0_object->GetPFPosition(var_86_cvector); //@t
					@GetPFPosition(var_87_cvector);
					if(!(((var_86_cvector - var_87_cvector) | (var_86_cvector - var_87_cvector)) < (var_296_float * var_296_float))) goto Label_622;
					bool var_520_bool; float var_521_float;
					var_73_float = var_521_float;
					func_723(var_94_bool, var_95_float, var_520_bool, var_521_float);
					var_522_bool = !var_520_bool; //@nz
					if(var_522_bool == 0) goto Label_622;
					goto Label_632;
			}
				bool var_523_bool; float var_524_float;
				var_73_float = var_524_float;
				func_723(var_94_bool, var_95_float, var_523_bool, var_524_float);
				if(!var_523_bool) { //@nz
					goto Label_632;
				}
				var_89_bool = true;

			}
		Label_622:
			goto Label_631;
			}
			Label_631:
			}
		}
	Label_632:
		@WaitForAnimEnd();
		if(var_3_bool != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_88_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1966(string var_105_string, int var_106_int, int var_107_int, int var_108_int)
{
	int var_111_int; bool var_112_bool;
	int var_114_int;
	var_106_int = var_114_int;
	int var_115_int;
	var_107_int = var_115_int;
	bool var_113_bool;
	func_2056(var_113_bool, var_114_int, var_115_int);
	if(var_113_bool != 0) {
		@irand(var_111_int, var_108_int);
		@AddItem(var_112_bool, var_105_string, 0, (var_111_int + 1));
	}
}


void func_1981(string var_37_string)
{
	bool var_46_bool; int var_47_int; bool var_48_bool; int var_49_int; bool var_50_bool; float var_51_float; cvector var_52_cvector; cvector var_53_cvector;
	@IsExisting3DSound(var_46_bool, var_37_string);
	if(!var_46_bool) { //@nz
		var_47_int = 0;

		for(;;) {
			@IsExisting3DSound(var_48_bool, (var_37_string + (var_47_int + 1)));
			if(!var_48_bool) { //@nz
				break;
			Label_2001:
				@irand(var_49_int, var_47_int);
				var_37_string += (var_49_int + 1);
	}
			@Is3DSoundLoaded(var_50_bool, var_37_string);
			if(var_50_bool != 0) {
				@GetEyesHeight(var_51_float);
				@GetDirection(var_52_cvector);
				var_53_cvector = var_52_cvector * 50;
				var_64_float = GetByIndex(var_53_cvector, 1);
				SetByIndex(var_53_cvector, 1) = (var_64_float + var_51_float);
				@PlayGlobalSound(var_37_string, var_53_cvector);
			}
		}
		var_47_int += 1;
	}
	var_59_bool = !var_47_int; //@nz
	if(var_59_bool == 0) goto Label_2001;
}


void func_958(bool var_308_bool)
{
	bool var_309_bool = false;
	bool var_310_bool;
	func_930(var_309_bool, var_310_bool);
	if(var_310_bool != 0) {
		bool var_327_bool;
		func_974(var_308_bool, var_309_bool, var_327_bool);
		if(var_327_bool != 0)
			var_309_bool = true;
	}
	if(var_309_bool != 0) {
		var_308_bool = true;
		return 0;
	}
	var_308_bool = false;
}


void func_974(object var_0_object, float var_4_float, bool var_327_bool)
{
	object var_333_object; float var_335_float; cvector var_336_cvector; cvector var_337_cvector;
	@GetScene(var_333_object);
	bool var_334_bool = false;
	
	for(;;) {
		cvector var_338_cvector;
		func_1640(var_338_cvector, var_0_object);
		var_344_int = -var_338_cvector;
		@FindDirLength(var_335_float, var_344_int, var_4_float);
		if(var_335_float < var_4_float) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_336_cvector); //@t
				@GetPFPosition(var_337_cvector);
				@WaitForAnimEnd();
				func_1062(var_337_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_334_bool = true;
				bool var_349_bool;
				func_930(var_337_cvector, var_349_bool);
				var_350_bool = !var_349_bool; //@nz
				if(var_350_bool == 0) goto Label_1015;
		}
		for(;;) {
			var_334_bool = var_327_bool;

		}

	Label_1015:
	}
}
EMIT "Stack[-5] = 0";


void func_2022(object var_99_object)
{
	object var_101_object;
	@self(var_101_object);
	var_101_object = var_99_object;
}
EMIT "Stack[-1] = 0";


void func_2028(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_52_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_52_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_52_float;
}


// @pe
void func_2038(float var_445_float, float var_446_float, float var_447_float)
{
	if(var_446_float < var_447_float)
		var_446_float = var_445_float;
	else
		var_447_float = var_445_float;
	
}


void func_1019(object var_0_object, bool var_258_bool)
{
	bool var_260_bool;
	var_263_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_263_bool != 0) {
		var_0_object->IsAttacking(var_260_bool); //@t
		var_260_bool = var_258_bool;
	}
	var_258_bool = false;
}


// @pe
void func_2045(float var_455_float, float var_456_float, float var_457_float, float var_458_float)
{
	if(var_456_float < var_457_float) {
		var_457_float = var_455_float;
		return 0;
	}
	if(var_456_float > var_458_float) {
		var_458_float = var_455_float;
		return 0;
	}
	var_456_float = var_455_float;
}


