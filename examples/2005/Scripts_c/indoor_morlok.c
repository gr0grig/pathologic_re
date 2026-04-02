// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_2409(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			object var_18_object;
			var_11_bool = var_18_object;
			func_2412(var_18_object);
		}
	}

	// @pe
	void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool)
	{
		func_2418();
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
		func_2409(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_401();
			object var_20_object;
			var_11_bool = var_20_object;
			func_2412(var_20_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		object var_14_object;
		var_11_bool = var_14_object;
		func_2302(var_14_object);
		int var_23_int; object var_24_object;
		var_11_bool = var_24_object;
		func_2368(var_23_int, var_24_object);
		int var_13_int;
		var_23_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_401();
			object var_63_object;
			var_11_bool = var_63_object;
			func_2378(var_63_object);
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
		func_2456(var_18_object, var_19_bool);
		bool var_16_bool;
		if(var_16_bool != 0) {
			int var_37_int; object var_38_object; bool var_39_bool;
			var_11_bool = var_38_object;
			var_13_bool = var_39_bool;
			func_2386(var_38_object, var_39_bool);
			var_37_int = var_15_int;
			if(var_15_int > 0) {
				if(var_15_int > 1)
					func_401();
				object var_74_object;
				var_11_bool = var_74_object;
				func_2393(var_74_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_2399(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_401();
			object var_20_object;
			var_11_bool = var_20_object;
			func_2402();
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
		func_2216(var_15_bool, var_16_object, var_17_string);
		if(var_15_bool != 0) {
			func_401();
			object var_30_object; string var_31_string;
			var_11_bool = var_30_object;
			var_12_bool = var_31_string;
			func_2248(var_30_object, var_31_string);
		} else {
			int var_41_int; string var_42_string; object var_43_object;
			var_12_bool = var_42_string;
			var_11_bool = var_43_object;
			func_2404(var_43_object);
			var_41_int = var_14_int;
			if(!(var_14_int > 0)) goto Label_284;
			if(var_14_int > 1)
				func_401();
			string var_48_string; object var_49_object;
			var_12_bool = var_48_string;
			var_11_bool = var_49_object;
			func_2407();
		}
	Label_284:
	
	}

	// @pe
	void OnTrigger(string name, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		string var_13_string;
		var_11_bool = var_13_string;
		bool var_12_bool;
		func_2315(var_12_bool, var_13_string);
		if(var_12_bool != 0) {
			func_401();
			string var_21_string;
			var_11_bool = var_21_string;
			func_2331(var_21_string);
		}
	}

	// @pe
	void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool)
	{
		func_401();
		func_2418();
	}

	// @pe
	void OnSee(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		object var_13_object;
		var_11_bool = var_13_object;
		bool var_12_bool;
		func_2273(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_401();
			object var_24_object;
			var_11_bool = var_24_object;
			func_2296(var_24_object);
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
		func_2418();
	}

	// @pe
	void OnTimer(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, int var_9_int, bool var_10_bool, bool var_11_bool)
	{
		if(var_11_bool == 1) {
			func_2074(var_1_int);
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
			func_1947(var_15_object);
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
		func_2192();
	}

}


maintask task_4
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool)
	{
		@SensePlayerOnly(true);
		func_2452();
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
		func_2409(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_1613(var_12_int, var_13_int);
			object var_20_object;
			var_11_object = var_20_object;
			func_2412(var_20_object);
		}
	}

	void OnAttacked(object actor, int iDamageType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		int var_12_int;
		object var_14_object;
		var_11_object = var_14_object;
		func_2302(var_14_object);
		int var_23_int; object var_24_object;
		var_11_object = var_24_object;
		func_2368(var_23_int, var_24_object);
		int var_13_int;
		var_23_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_1613(var_12_int, var_13_int);
			object var_63_object;
			var_11_object = var_63_object;
			func_2378(var_63_object);
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
		func_2456(var_18_object, var_19_bool);
		bool var_16_bool;
		if(var_16_bool != 0) {
			int var_37_int; object var_38_object; bool var_39_bool;
			var_11_object = var_38_object;
			var_13_bool = var_39_bool;
			func_2386(var_38_object, var_39_bool);
			var_37_int = var_15_int;
			if(var_15_int > 0) {
				if(var_15_int > 1)
					func_1613(var_14_int, var_15_int);
				object var_74_object;
				var_11_object = var_74_object;
				func_2393(var_74_object);
			}
		}
	}

	void OnSteal(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		int var_12_int;
		object var_15_object;
		var_11_object = var_15_object;
		func_2399(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_1613(var_12_int, var_13_int);
			object var_20_object;
			var_11_object = var_20_object;
			func_2402();
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
		func_2216(var_15_bool, var_16_object, var_17_string);
		if(var_15_bool != 0) {
			func_1613(var_13_int, var_14_int);
			object var_30_object; string var_31_string;
			var_11_object = var_30_object;
			var_12_string = var_31_string;
			func_2248(var_30_object, var_31_string);
		} else {
			int var_41_int; string var_42_string; object var_43_object;
			var_12_string = var_42_string;
			var_11_object = var_43_object;
			func_2404(var_43_object);
			var_41_int = var_14_int;
			if(!(var_14_int > 0)) goto Label_1506;
			if(var_14_int > 1)
				func_1613(var_13_int, var_14_int);
			string var_48_string; object var_49_object;
			var_12_string = var_48_string;
			var_11_object = var_49_object;
			func_2407();
		}
	Label_1506:
	
	}

	// @pe
	void OnTrigger(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, string var_11_string)
	{
		bool var_12_bool; string var_13_string;
		func_2315(var_12_bool, var_13_string);
		if(var_12_bool != 0) {
			func_1613(var_10_bool, var_13_string);
			string var_21_string;
			var_11_string = var_21_string;
			func_2331(var_21_string);
		}
	}

	// @pe
	void OnSee(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		bool var_12_bool; object var_13_object;
		func_2273(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1613(var_10_bool, var_13_object);
			object var_24_object;
			var_11_object = var_24_object;
			func_2296(var_24_object);
		}
	}

	// @pe
	void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, bool var_9_bool, bool var_10_bool)
	{
		func_1613(var_9_bool, var_10_bool);
		func_2418();
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
		func_1613(var_10_bool, var_11_object);
		object var_12_object;
		var_11_object = var_12_object;
		func_2192();
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
	func_2171(var_12_object);
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
	func_1849(var_15_object, var_16_int, var_17_float);
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
	func_1917(var_19_float, var_20_cvector, var_21_cvector);
}


// @pe
void func_2048(float var_471_float, float var_472_float, float var_473_float, float var_474_float)
{
	if(var_472_float < var_473_float) {
		var_473_float = var_471_float;
		return 0;
	}
	if(var_472_float > var_474_float) {
		var_474_float = var_471_float;
		return 0;
	}
	var_472_float = var_471_float;
}


// @pe
void func_0(object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	func_33(var_14_object);
	object var_94_object;
	var_13_object = var_94_object;
	func_2478(var_94_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1030(int var_2_int, int var_5_int)
{
	int var_394_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_393_float;
	@rand(var_393_float);
	float var_400_float;
	func_1080(var_400_float);
	if(var_393_float < var_400_float) {
		@irand(var_394_int, var_2_int);
		@Speak("attack" + (var_394_int + 1));
		int var_405_int;
		func_1078(var_405_int);
		var_5_int = var_405_int;
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
				func_1601(var_32_float);
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
		object var_36_object; cvector var_37_cvector;
		var_24_cvector = var_37_cvector;
		func_1347(var_36_object, var_37_cvector);
		var_36_object = var_27_object;
		if(var_27_object != null) {
			@RotatePath(var_27_object, var_28_bool);
			if(var_28_bool != 0) {
				bool var_44_bool;
				func_1345(var_44_bool);
				@FollowPath(var_27_object, var_44_bool, var_28_bool);
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


void func_2059(bool var_113_bool, int var_114_int, int var_115_int)
{
	int var_117_int;
	@irand(var_117_int, var_115_int);
	var_113_bool = var_117_int < var_114_int;
}


void func_2064(float var_479_float)
{
	object var_481_object;
	@CreateFloatVector(var_481_object);
	var_481_object->add(var_479_float);
	@SendWorldWndMessage(15, var_481_object);
}
EMIT "Stack[-1] = 0";


void func_2074(object var_147_object)
{
	bool var_149_bool;
	@IsPlayerActor(var_147_object, var_149_bool);
	if(var_149_bool != 0)
		@PlayGlobalMusic("attack");
}


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
		func_1984(var_89_string);
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


void func_2083(void)
{
	object var_385_object;
	@GetScene(var_385_object);
	object var_387_object;
	func_2025(var_387_object);
	@BroadcastMessage("battle", var_387_object, var_385_object);
}
EMIT "Stack[-1] = 0";


void func_1062(object var_0_object)
{
	func_2074(var_0_object);
}


void func_1067(int var_484_int)
{
	var_484_int = 0;
}


void func_1069(void)
{
	func_1984("attack_stay");
}


void func_2094(int var_130_int)
{
	int var_132_int;
	@GetVariable("branch", var_132_int);
	var_132_int = var_130_int;
}


// @pe
void func_1074(void)
{
}


void func_1076(bool var_509_bool)
{
	var_509_bool = true;
}


// @pe
void func_2100(object var_26_object)
{
	int var_27_int;
	func_2094(var_27_int);
	if(var_27_int == 1)
		@WorkWithCorpse(var_26_object);
	else
		@Barter(var_26_object);
	
}


void func_1078(int var_405_int)
{
	var_405_int = 1;
}


void func_1080(float var_400_float)
{
	var_400_float = 0.5;
}


void func_1089(int var_2_int, bool var_154_bool, object var_155_object, float var_156_float, float var_157_float, bool var_158_bool, bool var_159_bool)
{
	object var_167_object;
	func_2074(var_167_object);
	@SetTimer(1, 5);
	bool var_165_bool;
	@CanSee(var_165_bool, var_167_object);
	if(var_165_bool != 0) {
		var_2_int = true;
		object var_171_object;
		var_155_object = var_171_object;
		func_1947(var_171_object);
	} else {
		var_2_int = false;
	}
	bool var_178_bool; object var_179_object;
	func_1650(var_178_bool, var_179_object);
	if(var_178_bool != 0) {
		object var_182_object;
		func_2025(var_182_object);
		@SendPlayerEnemy(var_179_object, var_182_object);
	}
	bool var_183_bool; object var_184_object; float var_185_float; float var_186_float; bool var_187_bool; bool var_188_bool;
	var_155_object = var_184_object;
	var_156_float = var_185_float;
	var_157_float = var_186_float;
	var_158_bool = var_187_bool;
	var_159_bool = var_188_bool;
	bool var_166_bool;
	func_1194(var_165_bool, var_166_bool, var_183_bool, var_184_object, var_185_float, var_186_float, var_187_bool, var_188_bool);
	var_183_bool = var_166_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_166_bool = var_154_bool;
	
}


void func_1601(float var_32_float)
{
	float var_34_float;
	@GetCameraFarDistance(var_34_float);
	var_34_float = var_32_float;
}


void func_2113(string var_136_string)
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


void func_1613(object var_0_object, int var_1_int)
{
	var_0_object = true;
	var_1_int = false;
	@Stop();
	@StopGroup0();
}


void func_2130(void)
{
	int var_130_int;
	func_2094(var_130_int);
	if(var_130_int != 1) {
	}
	func_2113("liver");
	func_2113("kidney");
	func_2113("heart");
	func_2113("blood");
}


// @pe
void func_1629(string var_451_string, int var_452_int)
{
	if(var_452_int == 2) {
		var_451_string = "fire";
		return 0;
	EMIT "GOTO 0x669";
	}
	if(var_452_int == 1) {
		var_451_string = "bullet";
		return 0;
	}
	var_451_string = "phys";
}


void func_2154(void)
{
	@ClearSubContainer(0);
	func_1969("rusk", 1, 1, 2);
	func_1958("peanut", 1, 4);
}


void func_1643(cvector var_45_cvector, object var_46_object)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector;
	var_46_object->GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
}


void func_1650(bool var_95_bool, object var_96_object)
{
	bool var_98_bool;
	@IsPlayerActor(var_96_object, var_98_bool);
	var_98_bool = var_95_bool;
}


void func_1655(bool var_22_bool, object var_23_object, string var_24_string)
{
	var_29_bool = IsFuncExist(var_23_object, "HasProperty", 2);
	if(!var_29_bool) { //@nz
		var_22_bool = false;
		return 2;
	}
	bool var_26_bool;
	var_23_object->HasProperty(var_24_string, var_26_bool);
	var_26_bool = var_22_bool;
}


// @pe
void func_2171(object var_12_object)
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
	func_1984(var_37_string);
	@PlayAnimation("all", var_36_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_36_string);
	@RemoveEnvelope();
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


void func_1667(float var_423_float, object var_424_object, float var_425_float, int var_426_int)
{
	int var_436_int; int var_438_int;
	object var_443_object;
	var_424_object = var_443_object;
	bool var_442_bool;
	func_1655(var_442_bool, var_443_object, "health");
	if(!var_442_bool) //@nz
		var_423_float = 0.0;
	bool var_446_bool; object var_447_object;
	func_1655(var_446_bool, var_447_object, "armor");
	if(!var_446_bool) //@nz
		var_436_int = 0;
	else
		var_447_object->GetProperty("armor", var_436_int);
	string var_451_string; int var_452_int;
	var_426_int = var_452_int;
	func_1629(var_451_string, var_452_int);
	string var_437_string = "armor_" + var_451_string;
	bool var_457_bool; object var_458_object; string var_459_string;
	var_424_object = var_458_object;
	func_1655(var_457_bool, var_458_object, var_459_string);
	if(!var_457_bool) //@nz
		var_438_int = 0;
	else
		var_424_object->GetProperty(var_459_string, var_438_int);

	float var_461_float;
	func_2041(var_461_float, ((var_436_int + var_438_int) / 100.0), (float)1);
	float var_439_float;
	var_461_float = var_439_float;
	float var_440_float;
	var_424_object->GetProperty("health", var_440_float);
	float var_441_float = var_425_float * (1 - var_439_float);
	float var_471_float;
	func_2048(var_471_float, (var_440_float - var_441_float), (float)0, (float)1);
	var_424_object->SetProperty("health", var_471_float);
	bool var_477_bool; object var_478_object;
	var_424_object = var_478_object;
	func_1650(var_477_bool, var_478_object);
	if(var_477_bool != 0) {
		float var_479_float = -var_441_float;
		func_2064(var_479_float);
	}
	var_441_float = var_423_float;
	
}


void func_649(int var_1_int, int var_2_int, float var_4_float)
{
	bool var_111_bool; bool var_112_bool; cvector var_113_cvector;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_111_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_111_bool) { //@nz
		} else {
			var_1_int += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_112_bool, ("attack" + (var_2_int + 1)));
			if(!var_112_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_113_cvector, "all", "bjump");
		var_127_float = GetByIndex(var_113_cvector, 2);
		var_4_float = -var_127_float;

	}
}


// @pe
void func_2216(bool var_15_bool, object var_16_object, string var_17_string)
{
	if(var_17_string == "unholster") {
		bool var_20_bool; object var_21_object;
		var_16_object = var_21_object;
		func_2419(var_21_object);
		var_20_bool = var_15_bool;
		return 0;
	EMIT "GOTO 0x8c6";
	}
	if(var_17_string == "player_shot") {
		bool var_24_bool; object var_25_object;
		var_16_object = var_25_object;
		func_2424(var_25_object);
		var_24_bool = var_15_bool;
		return 0;
	EMIT "GOTO 0x8c6";
	}
	if(var_17_string == "battle") {
		bool var_28_bool; object var_29_object;
		var_16_object = var_29_object;
		func_2429(var_29_object);
		var_28_bool = var_15_bool;
		return 0;
	}
	var_15_bool = false;
}


void func_1194(object var_0_object, int var_1_int, bool var_183_bool, object var_184_object, float var_185_float, float var_186_float, bool var_187_bool, bool var_188_bool)
{
	bool var_197_bool; object var_199_object; cvector var_200_cvector; cvector var_201_cvector; float var_203_float; object var_204_object;
	var_0_object = false;
	var_1_int = var_184_object;
	bool var_198_bool;
	var_188_bool = var_198_bool;
	
	for(;;) {
		bool var_205_bool; object var_206_object;
		var_184_object = var_206_object;
		func_1334(var_205_bool, var_206_object);
		if(!var_205_bool) { //@nz
			var_183_bool = false;
			return 16;
		}
		var_184_object->GetPosition(var_200_cvector);
		@GetPosition(var_201_cvector);
		var_203_float = (var_200_cvector - var_201_cvector) | (var_200_cvector - var_201_cvector);
		bool var_210_bool = false;
		if(var_186_float > 0) {
			if(var_203_float > (var_186_float * var_186_float))
				var_210_bool = true;
		}
		if(var_210_bool != 0) {
			@Stop();
			var_183_bool = false;
			return 16;
		}
		if(var_203_float > (var_185_float * var_185_float)) {
			var_184_object->GetPFPosition(var_200_cvector);
			@FindPathTo(var_204_object, var_200_cvector);
			if(var_204_object != null) {
				var_204_object = var_199_object;
				var_204_object = null;
			}
			if(var_199_object != null) {
				if(var_198_bool == 0) goto Label_1247;
				var_198_bool = false;
				@RotatePath(var_199_object, var_197_bool);
				if(!var_197_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_223_string;
						func_1341(var_223_string);
						string var_224_string;
						func_1343(var_224_string);
						@FollowPath(var_199_object, var_187_bool, var_197_bool, var_223_string, var_224_string);
						if(!var_197_bool) { //@nz
							if(var_0_object == 0) goto Label_1266;
							var_199_object = null;
						}
					EMIT "GOTO 0x4f3";

					Label_1266:
						} else {
					var_199_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_197_bool);
					if(!var_197_bool) { //@nz
						if(var_0_object != 0) {
							var_199_object = null;
							goto Label_1294;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1294;
		}
			var_204_object = null;
			goto Label_1292;

		Label_1292:
			var_199_object = null;

		}
	Label_1294:
		for(;;) {
			var_183_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_684(object var_0_object, float var_409_float, int var_410_int)
{
	object var_414_object; float var_415_float; float var_416_float;
	@GetVictim((var_409_float * 0.9), var_414_object);
	@ReportAttack(var_0_object);
	if(var_414_object == var_0_object) {
		float var_420_float; object var_421_object; int var_422_int;
		var_414_object = var_421_object;
		var_410_int = var_422_int;
		func_414(var_422_int);
		var_420_float = var_415_float;
		float var_423_float; object var_424_object; float var_425_float; int var_426_int;
		var_414_object = var_424_object;
		int var_427_int; object var_428_object; int var_429_int;
		var_414_object = var_428_object;
		var_410_int = var_429_int;
		func_417(var_429_int);
		var_427_int = var_426_int;
		func_1667(var_423_float, var_424_object, var_425_float, var_426_int);
		var_423_float = var_416_float;
		int var_484_int;
		func_1067(var_484_int);
		@ReportHit(var_0_object, var_484_int, var_416_float, var_425_float);
		object var_485_object; float var_486_float;
		var_414_object = var_485_object;
		var_416_float = var_486_float;
		func_1074();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_2248(object var_30_object, string var_31_string)
{
	if(var_31_string == "unholster") {
		object var_34_object;
		var_30_object = var_34_object;
		func_2422();
	} else if(var_31_string == "player_shot") {
			object var_37_object;
			var_30_object = var_37_object;
			func_2427();
	}
Label_2272:
	for(;;) {

	}
	
	if(!(var_31_string == "battle")) goto Label_2272;
	object var_40_object;
	var_30_object = var_40_object;
	func_2432();
}


void func_1740(bool var_57_bool, object var_58_object)
{
	bool var_60_bool;
	var_58_object->IsDead(var_60_bool);
	var_60_bool = var_57_bool;
}


void func_1745(bool var_46_bool, object var_47_object)
{
	if(var_47_object == null) {
		var_46_bool = false;
		return 4;
	}
	bool var_53_bool = false;
	var_56_bool = IsFuncExist(var_47_object, "IsDead", 1);
	if(var_56_bool != 0) {
		bool var_57_bool; object var_58_object;
		var_47_object = var_58_object;
		func_1740(var_57_bool, var_58_object);
		if(var_57_bool != 0)
			var_53_bool = true;
	}
	if(var_53_bool != 0) {
		var_46_bool = false;
		return 4;
	}
	object var_50_object;
	@GetScene(var_50_object);
	if(var_50_object == null) {
		var_46_bool = false;
		return 4;
	}
	object var_51_object;
	var_47_object->GetScene(var_51_object);
	if(var_50_object != var_51_object) {
		var_46_bool = false;
		return 4;
	}
	var_46_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_723(object var_0_object, int var_1_int, bool var_372_bool, float var_373_float)
{
	string var_381_string;
	func_1062(var_381_string);
	int var_378_int;
	@irand(var_378_int, var_1_int);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2083();
	@PlayAnimation("all", ("attack_begin" + (var_378_int + 1)));
	@WaitForAnimEnd();
	int var_380_int;
	func_1030(var_380_int, var_381_string);
	bool var_406_bool;
	func_1781(var_406_bool, var_0_object);
	if(!var_406_bool) { //@nz
		@StopAsync();
		var_372_bool = false;
		return 8;
	}
	float var_409_float; int var_410_int;
	var_373_float = var_409_float;
	var_378_int = var_410_int;
	func_684(var_381_string, var_409_float, var_410_int);
	bool var_379_bool;
	@HasAnimation(var_379_bool, "all", ("attack_middle" + var_378_int));
	if(var_379_bool != 0) {
		func_2083();
		@PlayAnimation("all", ("attack_middle" + var_378_int));
		@WaitForAnimEnd();
		func_1062(var_381_string);
		bool var_494_bool;
		func_1781(var_494_bool, var_0_object);
		if(!var_494_bool) { //@nz
			@StopAsync();
			var_372_bool = false;
			return 8;
		}
		float var_497_float; int var_498_int;
		var_373_float = var_497_float;
		func_684(var_381_string, var_497_float, var_498_int);
		var_380_int = 1;

		for(;;) {
			var_381_string = (("attack_middle" + var_498_int) + "_") + var_380_int;
			@HasAnimation(var_379_bool, "all", var_381_string);
			if(!var_379_bool) { //@nz
			} else {
				func_2083();
				@PlayAnimation("all", var_381_string);
				@WaitForAnimEnd();
				func_1062(var_381_string);
				bool var_520_bool;
				func_1781(var_520_bool, var_0_object);
				if(!var_520_bool) { //@nz
					@StopAsync();
					var_372_bool = false;
					return 8;
				}
				float var_523_float; int var_524_int;
				var_373_float = var_523_float;
				var_378_int = var_524_int;
				func_684(var_381_string, var_523_float, var_524_int);
				var_380_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_378_int));
		bool var_509_bool;
		func_1076(var_509_bool);
		if(var_509_bool != 0) {
			bool var_510_bool;
			func_860(var_510_bool, 0.75);
			@StopAsync();
		}
		var_372_bool = true;
		return 8;

	}
}


void func_2273(bool var_12_bool, object var_13_object)
{
	bool var_15_bool;
	bool var_16_bool = false;
	bool var_17_bool; object var_18_object;
	var_13_object = var_18_object;
	func_2419(var_18_object);
	if(var_17_bool != 0) {
		bool var_19_bool; object var_20_object;
		func_1650(var_19_bool, var_20_object);
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


void func_1781(bool var_42_bool, object var_43_object)
{
	object var_47_object;
	var_43_object = var_47_object;
	bool var_46_bool;
	func_1745(var_46_bool, var_47_object);
	if(!var_46_bool) { //@nz
		var_42_bool = false;
		return 2;
	}
	bool var_64_bool; object var_65_object;
	func_1655(var_64_bool, var_65_object, "noaccess");
	if(!var_64_bool) { //@nz
		var_42_bool = true;
		return 2;
	}
	int var_45_int;
	var_65_object->GetProperty("noaccess", var_45_int);
	var_42_bool = var_45_int == 0;
}


// @pe
void func_2296(object var_24_object)
{
	object var_25_object;
	var_24_object = var_25_object;
	func_2422();
}


// @pe
void func_2302(object var_14_object)
{
	bool var_15_bool; object var_16_object;
	func_1650(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		object var_19_object;
		func_2025(var_19_object);
		@ReportReputationChange(var_16_object, var_19_object, -0.03);
	}
}


void func_2315(bool var_12_bool, string var_13_string)
{
	object var_15_object;
	if(var_13_string == "heal") {
		@FindActor(var_15_object, "player");
		bool var_19_bool; object var_20_object;
		var_15_object = var_20_object;
		func_2434(var_20_object);
		var_19_bool = var_12_bool;
	EMIT "Stack[-1] = 0";
	}
	var_12_bool = false;
}


void func_1805(object var_28_object)
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


void func_2331(string var_21_string)
{
	object var_23_object;
	if(var_21_string == "heal") {
		@FindActor(var_23_object, "player");
		object var_27_object;
		var_23_object = var_27_object;
		func_2437();
		var_23_object = null;
	}
}


void func_1318(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2344(string var_68_string, int var_69_int)
{
	string var_71_string = "idle";
	if(var_69_int != 0)
		var_71_string += var_69_int;
	var_71_string = var_68_string;
}


void func_2351(int var_62_int)
{
	int var_65_int; bool var_66_bool;
	var_65_int = 0;
	
	for(;;) {
		string var_68_string; int var_69_int;
		var_65_int = var_69_int;
		func_2344(var_68_string, var_69_int);
		@HasAnimation(var_66_bool, "all", var_68_string);
		if(!var_66_bool) //@nz
			break;
		var_65_int += 1;
	}
	var_65_int = var_62_int;
}


// @pe
void func_1334(bool var_205_bool, object var_206_object)
{
	object var_208_object;
	var_206_object = var_208_object;
	bool var_207_bool;
	func_1781(var_207_bool, var_208_object);
	var_207_bool = var_205_bool;
}


void func_1849(object var_15_object, int var_16_int, float var_17_float)
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
		func_1643(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_2031(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		@CreateVectorVector(var_28_object);
		var_29_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_29_int), var_30_bool, var_31_cvector, var_32_cvector);
			if(!var_30_bool) { //@nz
				break;
			Label_1911:
				var_28_object = null;
	}
			object var_105_object;
			var_15_object = var_105_object;
			func_1805(var_105_object);
		}
		if((var_32_cvector | var_27_cvector) >= 0.70710677)
			var_28_object->add(var_31_cvector);
		var_29_int += 1;
	}
	int var_33_int;
	var_28_object->size(var_33_int);
	if(var_33_int == 0) goto Label_1911;
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
	func_1917(var_62_float, var_63_cvector, var_64_cvector);
}


void func_1341(string var_223_string)
{
	var_223_string = "walk";
}


void func_1343(string var_224_string)
{
	var_224_string = "run";
}


// @pe
void func_2368(int var_40_int, object var_41_object)
{
	object var_43_object;
	var_41_object = var_43_object;
	bool var_42_bool;
	func_1781(var_42_bool, var_43_object);
	if(var_42_bool != 0)
		var_40_int = 2;
	else
		var_40_int = 0;
	
}


void func_1345(bool var_44_bool)
{
	var_44_bool = true;
}


void func_320(void)
{
	int var_55_int; int var_56_int; bool var_57_bool; float var_58_float; bool var_59_bool;
	@WaitForAnimEnd();
	bool var_60_bool;
	func_1942(var_60_bool);
	if(!var_60_bool) //@nz
		return 14;
	int var_62_int;
	func_2351(var_62_int);
	int var_53_int;
	var_62_int = var_53_int;
	int var_54_int = 0;
	
	for(;;) {
		bool var_75_bool = false;
		if(var_54_int < 5) {
			bool var_78_bool;
			func_1942(var_78_bool);
			if(var_78_bool != 0)
				var_75_bool = true;
		}
		if(var_75_bool != 0) {
			@irand(var_55_int, 3);
			if(var_55_int == 0) {
				if(var_53_int == 0) goto Label_367;
				@irand(var_56_int, var_53_int);
				string var_84_string; int var_85_int;
				var_56_int = var_85_int;
				func_2344(var_84_string, var_85_int);
				@PlayAnimation("all", var_84_string);
				@WaitForAnimEnd(var_57_bool);
				if(!var_57_bool) { //@nz
				} else {
			} else {
			if(var_55_int == 1) {
				@rand(var_58_float, 4);
				@Sleep((var_58_float + 1), var_59_bool);
				if(!var_59_bool) { //@nz
					goto Label_396;
				}
			} else if(var_54_int != 0) {
				goto Label_396;
			}
			}
					bool var_87_bool;
					func_399(var_87_bool);
					var_88_bool = !var_87_bool; //@nz
					if(var_88_bool == 0) goto Label_391;
			}
		}
	Label_396:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_391:
		@ResetAAS();
		var_54_int += 1;
	}
	
}


void func_1347(object var_36_object, cvector var_37_cvector)
{
	object var_39_object;
	@FindPathTo(var_39_object, var_37_cvector, 1, 1);
	var_39_object = var_36_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2378(object var_75_object)
{
	object var_76_object;
	var_75_object = var_76_object;
	TaskCall(2);
	func_406(var_76_object);
	TaskReturn();
}


// @pe
void func_2386(int var_37_int, object var_38_object)
{
	object var_41_object;
	var_38_object = var_41_object;
	int var_40_int;
	func_2368(var_40_int, var_41_object);
	var_40_int = var_37_int;
}


// @pe
void func_2393(object var_74_object)
{
	object var_75_object;
	var_74_object = var_75_object;
	func_2378(var_75_object);
}


void func_1369(void)
{
	bool var_13_bool;
	func_1942(var_13_bool);
	if(!var_13_bool) //@nz
		func_2418();
}


void func_860(bool var_510_bool, float var_511_float)
{
	float var_514_float; bool var_515_bool;
	@rand(var_514_float);
	if(var_514_float < var_511_float) {

		for(;;) {
			@IsAnimationPlaying(var_515_bool);
			if(!var_515_bool) { //@nz
			} else {
				bool var_518_bool;
				func_958(var_518_bool);
				if(var_518_bool != 0) {
					var_510_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_510_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1062(var_515_bool);
}


// @pe
void func_2399(int var_14_int)
{
	var_14_int = 0;
}


// @pe
void func_2402(void)
{
}


// @pe
void func_2404(int var_41_int)
{
	var_41_int = 0;
}


// @pe
void func_2407(void)
{
}


// @pe
void func_2409(int var_14_int)
{
	var_14_int = 2;
}


// @pe
void func_2412(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	func_2439(var_21_object);
}


void func_2418(void)
{
}


// @pe
void func_2419(bool var_17_bool)
{
	var_17_bool = false;
}


// @pe
void func_2422(void)
{
}


void func_887(object var_0_object, bool var_311_bool, float var_312_float)
{
	bool var_318_bool; cvector var_319_cvector; cvector var_320_cvector; cvector var_321_cvector; float var_322_float;
	
	for(;;) {
		@IsAnimationPlaying(var_318_bool);
		if(!var_318_bool) //@nz
			break;
		bool var_324_bool;
		func_958(var_324_bool);
		if(var_324_bool != 0) {
			var_311_bool = true;
			return 10;
		}
		bool var_367_bool;
		func_1781(var_367_bool, var_0_object);
		if(!var_367_bool) { //@nz
			var_311_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_319_cvector); //@t
		@GetPFPosition(var_320_cvector);
		var_321_cvector = var_319_cvector - var_320_cvector;
		var_322_float = var_321_cvector | var_321_cvector;
		if(var_322_float < (var_312_float * var_312_float)) {
			bool var_372_bool; float var_373_float;
			var_312_float = var_373_float;
			func_723(var_321_cvector, var_322_float, var_372_bool, var_373_float);
			var_311_bool = true;
			return 10;
		}
		@sync();
	}
	func_1062(var_322_float);
	var_311_bool = false;
}


// @pe
void func_2424(bool var_24_bool)
{
	var_24_bool = false;
}


// @pe
void func_2427(void)
{
}


void func_1917(object var_17_object, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_24_object;
	@GetScene(var_24_object);
	object var_25_object;
	@AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	object var_28_object;
	var_17_object = var_28_object;
	func_1805(var_28_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2429(bool var_28_bool)
{
	var_28_bool = false;
}


// @pe
void func_2432(void)
{
}


// @pe
void func_2434(bool var_19_bool)
{
	var_19_bool = false;
}


// @pe
void func_2437(void)
{
}


void func_2439(object var_21_object)
{
	bool var_23_bool;
	var_24_bool = GlobalVars[0];
	if(var_24_bool != 0) {
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			object var_26_object;
			var_21_object = var_26_object;
			func_2100(var_26_object);
		}
	}
}


void func_1931(object var_257_object)
{
	cvector var_261_cvector;
	var_257_object->GetPosition(var_261_cvector);
	cvector var_262_cvector;
	@GetPosition(var_262_cvector);
	cvector var_263_cvector = var_261_cvector - var_262_cvector;
	var_264_float = GetByIndex(var_263_cvector, 0);
	var_265_float = GetByIndex(var_263_cvector, 2);
	@RotateAsync(var_264_float, var_265_float);
}


void func_399(bool var_87_bool)
{
	var_87_bool = true;
}


void func_401(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2452(void)
{
	var_12_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


void func_1942(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


// @pe
void func_406(object var_76_object)
{
	object var_83_object;
	func_420(var_79_int, var_80_bool, var_81_float, var_82_int, var_83_object, var_83_object, true, 180.0);
}


void func_2456(bool var_16_bool, object var_18_object)
{
	bool var_22_bool; object var_23_object;
	func_1655(var_22_bool, var_23_object, "class");
	if(!var_22_bool) //@nz
		var_16_bool = false;
	string var_21_string;
	var_23_object->GetProperty("class", var_21_string);
	var_16_bool = true;
	var_34_bool = var_21_string == "butcher";
	if(var_34_bool != 1) {
		var_36_bool = var_21_string == "morlok";
		if(var_36_bool != 1)
			var_16_bool = false;
	}
}


void func_1947(object var_171_object)
{
	float var_174_float;
	var_171_object->GetEyesHeight(var_174_float);
	cvector var_175_cvector = [0.0, 0.0, 0.0];
	var_176_float = GetByIndex(var_175_cvector, 1);
	var_174_float = var_176_float;
	SetByIndex(var_175_cvector, 1) = var_176_float;
	@LookAsync(var_171_object, "head", var_175_cvector);
}


// @pe
void func_414(float var_420_float)
{
	var_420_float = 0.05;
}


// @pe
void func_417(int var_427_int)
{
	var_427_int = 0;
}


void func_930(object var_0_object, bool var_326_bool)
{
	cvector var_332_cvector; cvector var_333_cvector;
	bool var_337_bool;
	func_1781(var_337_bool, var_0_object);
	if(!var_337_bool) { //@nz
		var_326_bool = false;
		return 10;
	}
	bool var_340_bool;
	float var_336_float;
	func_1019(var_336_float, var_340_bool);
	if(var_340_bool != 0) {
		var_0_object->GetPFPosition(var_332_cvector); //@t
		@GetPFPosition(var_333_cvector);
		var_0_object->GetAttackDistance(var_336_float); //@t
		var_326_bool = ((var_332_cvector - var_333_cvector) | (var_332_cvector - var_333_cvector)) <= ((var_336_float + 50) * (var_336_float + 50));
		return 10;
	}
	var_326_bool = false;
}


void func_420(object var_0_object, bool var_3_bool, int var_5_int, object var_83_object, bool var_84_bool, float var_85_float, bool var_160_bool, bool var_252_bool)
{
	float var_97_float; cvector var_98_cvector; cvector var_99_cvector; bool var_101_bool; float var_104_float; cvector var_105_cvector; bool var_106_bool; float var_107_float;
	func_649(var_105_cvector, var_106_bool, var_107_float);
	var_5_int = 0;
	var_132_bool = IsFuncExist(var_83_object, "@GetAttackDistance", 1);
	if(var_132_bool != 0) {
		var_83_object->GetAttackDistance(var_97_float);
		var_97_float += 50;
	} else {
						var_85_float = var_97_float;
	}
	if(var_97_float >= 150)
		var_97_float = 150;
	var_3_bool = false;
	var_0_object = var_83_object;
	bool var_100_bool;
	@IsPlayerActor(var_0_object, var_100_bool);
	if(var_100_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_138_object;
		func_2025(var_138_object);
		@SendPlayerEnemy(var_83_object, var_138_object);
	}
	if(var_84_bool != 0)
		var_101_bool = false;
	else
		var_101_bool = true;

	
Label_460:
	for(;;) {
		bool var_143_bool = false;
		bool var_144_bool;
		func_1781(var_144_bool, var_0_object);
		if(var_144_bool != 0) {
			if(!var_3_bool) //@nz
				var_143_bool = true;
		}
		if(var_143_bool != 0) {
			func_1062(var_107_float);
			var_0_object->GetPFPosition(var_98_cvector); //@t
			@GetPFPosition(var_99_cvector);
			var_104_float = (var_98_cvector - var_99_cvector) | (var_98_cvector - var_99_cvector);
			if(var_104_float >= ((400.0 + var_97_float) * (400.0 + var_97_float))) {
				bool var_154_bool; float var_156_float;
				var_97_float = var_156_float;
				TaskCall(3);
				func_1089(var_162_bool, var_154_bool, var_0_object, var_156_float, 3000.0, true, false);
				TaskReturn();
				if(!var_160_bool) { //@nz
				} else {
					var_101_bool = false;
			} else {
			if(var_104_float >= (var_85_float * var_85_float)) {
				var_0_object->GetPFPosition(var_105_cvector); //@t
				@CanReachByPF(var_106_bool, var_105_cvector);
				if(!var_106_bool) { //@nz
					bool var_246_bool; float var_248_float;
					var_97_float = var_248_float;
					TaskCall(3);
					func_1089(var_254_bool, var_246_bool, var_0_object, var_248_float, 3000.0, true, false);
					TaskReturn();
					if(!var_252_bool) { //@nz
						goto Label_632;
					}
					var_101_bool = false;
					goto Label_460;
				}
				if(!var_101_bool) { //@nz
					func_1931(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1062(var_107_float);
					@StopAsync();
					var_101_bool = true;
					bool var_268_bool;
					func_1781(var_268_bool, var_0_object);
					if(!var_268_bool) { //@nz
						goto Label_632;
					}
				}
				@rand(var_107_float);
				bool var_271_bool;
				var_273_bool = var_107_float < 0.25;
				if(var_273_bool != 1) {
					bool var_274_bool;
					func_1019(true, var_274_bool);
					if(var_274_bool != 1)
						var_271_bool = false;
				}
				if(var_271_bool != 0) {
					@Face(var_0_object);
					func_1069();
					@PlayAnimation("all", "attack_stay");
					bool var_311_bool; float var_312_float;
					func_887(var_107_float, var_311_bool, var_312_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1062(var_107_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_529_bool;
					func_1019(var_107_float, var_529_bool);
					var_530_bool = !var_529_bool; //@nz
					if(var_530_bool == 0) goto Label_622;
					bool var_531_bool;
					func_1781(var_531_bool, var_0_object);
					if(!var_531_bool) { //@nz
						goto Label_632;
					}
					var_0_object->GetPFPosition(var_98_cvector); //@t
					@GetPFPosition(var_99_cvector);
					if(!(((var_98_cvector - var_99_cvector) | (var_98_cvector - var_99_cvector)) < (var_312_float * var_312_float))) goto Label_622;
					bool var_536_bool; float var_537_float;
					var_85_float = var_537_float;
					func_723(var_106_bool, var_107_float, var_536_bool, var_537_float);
					var_538_bool = !var_536_bool; //@nz
					if(var_538_bool == 0) goto Label_622;
					goto Label_632;
			}
				bool var_539_bool; float var_540_float;
				var_85_float = var_540_float;
				func_723(var_106_bool, var_107_float, var_539_bool, var_540_float);
				if(!var_539_bool) { //@nz
					goto Label_632;
				}
				var_101_bool = true;

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
		if(var_100_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1958(string var_121_string, int var_122_int, int var_123_int)
{
	bool var_125_bool;
	int var_127_int;
	var_122_int = var_127_int;
	int var_128_int;
	var_123_int = var_128_int;
	bool var_126_bool;
	func_2059(var_126_bool, var_127_int, var_128_int);
	if(var_126_bool != 0)
		@AddItem(var_125_bool, var_121_string, 0);
}


// @pe
void func_2478(object var_94_object)
{
	bool var_95_bool; object var_96_object;
	func_1650(var_95_bool, var_96_object);
	if(var_95_bool != 0) {
		object var_99_object;
		func_2025(var_99_object);
		@ReportReputationChange(var_96_object, var_99_object, -0.07, true);
		func_2154();
	}
	func_2130();
	var_150_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_1969(string var_105_string, int var_106_int, int var_107_int, int var_108_int)
{
	int var_111_int; bool var_112_bool;
	int var_114_int;
	var_106_int = var_114_int;
	int var_115_int;
	var_107_int = var_115_int;
	bool var_113_bool;
	func_2059(var_113_bool, var_114_int, var_115_int);
	if(var_113_bool != 0) {
		@irand(var_111_int, var_108_int);
		@AddItem(var_112_bool, var_105_string, 0, (var_111_int + 1));
	}
}


void func_958(bool var_324_bool)
{
	bool var_325_bool = false;
	bool var_326_bool;
	func_930(var_325_bool, var_326_bool);
	if(var_326_bool != 0) {
		bool var_343_bool;
		func_974(var_324_bool, var_325_bool, var_343_bool);
		if(var_343_bool != 0)
			var_325_bool = true;
	}
	if(var_325_bool != 0) {
		var_324_bool = true;
		return 0;
	}
	var_324_bool = false;
}


void func_1984(string var_37_string)
{
	bool var_46_bool; int var_47_int; bool var_48_bool; int var_49_int; bool var_50_bool; float var_51_float; cvector var_52_cvector; cvector var_53_cvector;
	@IsExisting3DSound(var_46_bool, var_37_string);
	if(!var_46_bool) { //@nz
		var_47_int = 0;

		for(;;) {
			@IsExisting3DSound(var_48_bool, (var_37_string + (var_47_int + 1)));
			if(!var_48_bool) { //@nz
				break;
			Label_2004:
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
	if(var_59_bool == 0) goto Label_2004;
}


void func_974(object var_0_object, float var_4_float, bool var_343_bool)
{
	object var_349_object; float var_351_float; cvector var_352_cvector; cvector var_353_cvector;
	@GetScene(var_349_object);
	bool var_350_bool = false;
	
	for(;;) {
		cvector var_354_cvector;
		func_1643(var_354_cvector, var_0_object);
		var_360_int = -var_354_cvector;
		@FindDirLength(var_351_float, var_360_int, var_4_float);
		if(var_351_float < var_4_float) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_352_cvector); //@t
				@GetPFPosition(var_353_cvector);
				@WaitForAnimEnd();
				func_1062(var_353_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_350_bool = true;
				bool var_365_bool;
				func_930(var_353_cvector, var_365_bool);
				var_366_bool = !var_365_bool; //@nz
				if(var_366_bool == 0) goto Label_1015;
		}
		for(;;) {
			var_350_bool = var_343_bool;

		}

	Label_1015:
	}
}
EMIT "Stack[-5] = 0";


void func_2025(object var_99_object)
{
	object var_101_object;
	@self(var_101_object);
	var_101_object = var_99_object;
}
EMIT "Stack[-1] = 0";


void func_2031(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_52_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_52_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_52_float;
}


// @pe
void func_2041(float var_461_float, float var_462_float, float var_463_float)
{
	if(var_462_float < var_463_float)
		var_462_float = var_461_float;
	else
		var_463_float = var_461_float;
	
}


void func_1019(object var_0_object, bool var_274_bool)
{
	bool var_276_bool;
	var_279_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_279_bool != 0) {
		var_0_object->IsAttacking(var_276_bool); //@t
		var_276_bool = var_274_bool;
	}
	var_274_bool = false;
}


