// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_16_object;
		var_12_bool = var_16_object;
		func_2734(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			object var_19_object;
			var_12_bool = var_19_object;
			func_2737();
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		func_2739();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		@SensePlayerOnly(true);
		func_2760();
		func_171();
	
		for(;;) {
			var_2_bool = false;
			func_432(var_10_object, var_11_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_16_object;
		var_12_bool = var_16_object;
		func_2734(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_367(var_14_int);
			object var_22_object;
			var_12_bool = var_22_object;
			func_2737();
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_15_object;
		var_12_bool = var_15_object;
		func_2507(var_15_object);
		int var_24_int; object var_25_object;
		var_12_bool = var_25_object;
		func_2589(var_24_int, var_25_object);
		int var_14_int;
		var_24_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_367(var_14_int);
			object var_65_object;
			var_12_bool = var_65_object;
			func_2599(var_65_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		int var_16_int;
		object var_18_object;
		var_12_bool = var_18_object;
		object var_19_object;
		var_13_object = var_19_object;
		bool var_20_bool;
		var_14_bool = var_20_bool;
		bool var_17_bool;
		func_2773(var_17_bool, var_18_object, var_19_object, var_20_bool);
		if(var_17_bool != 0) {
			int var_79_int; object var_80_object; bool var_81_bool;
			var_12_bool = var_80_object;
			var_14_bool = var_81_bool;
			func_2682(var_80_object, var_81_bool);
			var_79_int = var_16_int;
			if(var_16_int > 0) {
				if(var_16_int > 1)
					func_367(var_16_int);
				object var_117_object;
				var_12_bool = var_117_object;
				func_2689(var_117_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_16_object;
		var_12_bool = var_16_object;
		func_2724(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_367(var_14_int);
			object var_22_object;
			var_12_bool = var_22_object;
			func_2727();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		int var_15_int;
		object var_17_object;
		var_12_object = var_17_object;
		string var_18_string;
		var_13_bool = var_18_string;
		bool var_16_bool;
		func_2421(var_16_bool, var_17_object, var_18_string);
		if(var_16_bool != 0) {
			func_367(var_15_int);
			object var_32_object; string var_33_string;
			var_12_object = var_32_object;
			var_13_bool = var_33_string;
			func_2453(var_32_object, var_33_string);
		} else {
			int var_43_int; string var_44_string; object var_45_object;
			var_13_bool = var_44_string;
			var_12_object = var_45_object;
			func_2729(var_45_object);
			var_43_int = var_15_int;
			if(!(var_15_int > 0)) goto Label_308;
			if(var_15_int > 1)
				func_367(var_15_int);
			string var_50_string; object var_51_object;
			var_13_bool = var_50_string;
			var_12_object = var_51_object;
			func_2732();
		}
	Label_308:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		bool var_13_bool; string var_14_string;
		func_2520(var_13_bool, var_14_string);
		if(var_13_bool != 0) {
			func_367(var_14_string);
			string var_23_string;
			var_12_bool = var_23_string;
			func_2536(var_23_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		bool var_13_bool; object var_14_object;
		func_2478(var_13_bool, var_14_object);
		if(var_13_bool != 0) {
			func_367(var_14_object);
			object var_26_object;
			var_12_bool = var_26_object;
			func_2501(var_26_object);
		} else {
			object var_28_object;
			func_392(var_28_object, var_28_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_13_object;
		func_392(var_13_object, var_13_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		if(var_12_bool != 110) {
		}
		var_2_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		func_367(var_11_bool);
		func_2739();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		func_367(var_12_bool);
		object var_14_object;
		var_12_bool = var_14_object;
		func_2397();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		@RequestClearPath(var_12_bool);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		@Stop();
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_16_object;
		var_12_bool = var_16_object;
		func_2734(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_770();
			object var_21_object;
			var_12_bool = var_21_object;
			func_2737();
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_15_object;
		var_12_bool = var_15_object;
		func_2507(var_15_object);
		int var_24_int; object var_25_object;
		var_12_bool = var_25_object;
		func_2589(var_24_int, var_25_object);
		int var_14_int;
		var_24_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_770();
			object var_64_object;
			var_12_bool = var_64_object;
			func_2599(var_64_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		int var_16_int;
		object var_18_object;
		var_12_bool = var_18_object;
		object var_19_object;
		var_13_object = var_19_object;
		bool var_20_bool;
		var_14_bool = var_20_bool;
		bool var_17_bool;
		func_2773(var_17_bool, var_18_object, var_19_object, var_20_bool);
		if(var_17_bool != 0) {
			int var_79_int; object var_80_object; bool var_81_bool;
			var_12_bool = var_80_object;
			var_14_bool = var_81_bool;
			func_2682(var_80_object, var_81_bool);
			var_79_int = var_16_int;
			if(var_16_int > 0) {
				if(var_16_int > 1)
					func_770();
				object var_116_object;
				var_12_bool = var_116_object;
				func_2689(var_116_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_16_object;
		var_12_bool = var_16_object;
		func_2724(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_770();
			object var_21_object;
			var_12_bool = var_21_object;
			func_2727();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		int var_15_int;
		object var_17_object;
		var_12_object = var_17_object;
		string var_18_string;
		var_13_bool = var_18_string;
		bool var_16_bool;
		func_2421(var_16_bool, var_17_object, var_18_string);
		if(var_16_bool != 0) {
			func_770();
			object var_31_object; string var_32_string;
			var_12_object = var_31_object;
			var_13_bool = var_32_string;
			func_2453(var_31_object, var_32_string);
		} else {
			int var_42_int; string var_43_string; object var_44_object;
			var_13_bool = var_43_string;
			var_12_object = var_44_object;
			func_2729(var_44_object);
			var_42_int = var_15_int;
			if(!(var_15_int > 0)) goto Label_653;
			if(var_15_int > 1)
				func_770();
			string var_49_string; object var_50_object;
			var_13_bool = var_49_string;
			var_12_object = var_50_object;
			func_2732();
		}
	Label_653:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		string var_14_string;
		var_12_bool = var_14_string;
		bool var_13_bool;
		func_2520(var_13_bool, var_14_string);
		if(var_13_bool != 0) {
			func_770();
			string var_22_string;
			var_12_bool = var_22_string;
			func_2536(var_22_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		func_770();
		func_2739();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_12_bool = var_14_object;
		bool var_13_bool;
		func_2478(var_13_bool, var_14_object);
		if(var_13_bool != 0) {
			func_770();
			object var_25_object;
			var_12_bool = var_25_object;
			func_2501(var_25_object);
		}
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		func_1521(var_11_bool);
		func_2739();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 1) {
			func_2145(var_1_bool);
		} else {
			int var_20_int;
			func_1665(var_11_bool, var_20_int, var_20_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object)
	{
		bool var_13_bool = false;
		if(var_1_bool == var_12_object) {
			if(!var_2_bool) //@nz
				var_13_bool = true;
		}
		if(var_13_bool != 0) {
			var_2_bool = true;
			object var_16_object;
			var_12_object = var_16_object;
			func_2040(var_16_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object)
	{
		bool var_13_bool = false;
		if(var_1_bool == var_12_object) {
			if(var_2_bool != 0)
				var_13_bool = true;
		}
		if(var_13_bool != 0) {
			var_2_bool = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object)
	{
		@RequestClearPath(var_12_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object)
	{
		func_1521(var_12_object);
		object var_17_object;
		var_12_object = var_17_object;
		func_2397();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, string var_13_string)
{
	float var_15_float;
	if(var_13_string == "health") {
		@GetProperty("health", var_15_float);
		if(var_15_float <= 0)
			@SignalDeath(var_12_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_2376(var_13_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, float var_14_float, float var_15_float)
{
	object var_16_object;
	var_12_object = var_16_object;
	int var_17_int;
	var_13_int = var_17_int;
	float var_18_float;
	var_14_float = var_18_float;
	func_1942(var_16_object, var_17_int, var_18_float);
}


// @pe
void OnHit2(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, float var_14_float, float var_15_float, cvector var_16_cvector, cvector var_17_cvector)
{
	object var_18_object;
	var_12_object = var_18_object;
	int var_19_int;
	var_13_int = var_19_int;
	float var_20_float;
	var_14_float = var_20_float;
	cvector var_21_cvector;
	var_16_cvector = var_21_cvector;
	cvector var_22_cvector;
	var_17_cvector = var_22_cvector;
	func_2010(var_20_float, var_21_cvector, var_22_cvector);
}


// @pe
void func_0(object var_14_object)
{
	object var_15_object;
	var_14_object = var_15_object;
	func_33(var_15_object);
	object var_95_object;
	var_14_object = var_95_object;
	func_2783(var_95_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2051(string var_38_string)
{
	bool var_47_bool; int var_48_int; bool var_49_bool; int var_50_int; bool var_51_bool; float var_52_float; cvector var_53_cvector; cvector var_54_cvector;
	@IsExisting3DSound(var_47_bool, var_38_string);
	if(!var_47_bool) { //@nz
		var_48_int = 0;

		for(;;) {
			@IsExisting3DSound(var_49_bool, (var_38_string + (var_48_int + 1)));
			if(!var_49_bool) { //@nz
				break;
			Label_2071:
				@irand(var_50_int, var_48_int);
				var_38_string += (var_50_int + 1);
	}
			@Is3DSoundLoaded(var_51_bool, var_38_string);
			if(var_51_bool != 0) {
				@GetEyesHeight(var_52_float);
				@GetDirection(var_53_cvector);
				var_54_cvector = var_53_cvector * 50;
				var_65_float = GetByIndex(var_54_cvector, 1);
				SetByIndex(var_54_cvector, 1) = (var_65_float + var_52_float);
				@PlayGlobalSound(var_38_string, var_54_cvector);
			}
		}
		var_48_int += 1;
	}
	var_60_bool = !var_48_int; //@nz
	if(var_60_bool == 0) goto Label_2071;
}


void func_517(bool var_157_bool)
{
	var_157_bool = false;
}


void func_519(object var_151_object, cvector var_152_cvector)
{
	object var_154_object;
	@FindShiftedPathTo(var_154_object, var_152_cvector);
	var_154_object = var_151_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2573(int var_55_int, object var_56_object)
{
	object var_58_object;
	var_56_object = var_58_object;
	bool var_57_bool;
	func_2768(var_57_bool, var_58_object);
	if(var_57_bool != 0)
		var_55_int = 2;
	else
		var_55_int = 0;
	
}


// @pe
void func_2583(object var_66_object)
{
	object var_67_object;
	var_66_object = var_67_object;
	func_2599(var_67_object);
}


void func_1563(bool var_0_bool, bool var_1_bool, bool var_225_bool, object var_226_object, float var_227_float, float var_228_float, bool var_229_bool, bool var_230_bool)
{
	bool var_239_bool; object var_241_object; cvector var_242_cvector; cvector var_243_cvector; float var_245_float; object var_246_object;
	var_0_bool = false;
	var_1_bool = var_226_object;
	bool var_240_bool;
	var_230_bool = var_240_bool;
	
	for(;;) {
		bool var_247_bool; object var_248_object;
		var_226_object = var_248_object;
		func_1703(var_247_bool, var_248_object);
		if(!var_247_bool) { //@nz
			var_225_bool = false;
			return 16;
		}
		var_226_object->GetPosition(var_242_cvector);
		@GetPosition(var_243_cvector);
		var_245_float = (var_242_cvector - var_243_cvector) | (var_242_cvector - var_243_cvector);
		bool var_252_bool = false;
		if(var_228_float > 0) {
			if(var_245_float > (var_228_float * var_228_float))
				var_252_bool = true;
		}
		if(var_252_bool != 0) {
			@Stop();
			var_225_bool = false;
			return 16;
		}
		if(var_245_float > (var_227_float * var_227_float)) {
			var_226_object->GetPFPosition(var_242_cvector);
			@FindPathTo(var_246_object, var_242_cvector);
			if(var_246_object != null) {
				var_246_object = var_241_object;
				var_246_object = null;
			}
			if(var_241_object != null) {
				if(var_240_bool == 0) goto Label_1616;
				var_240_bool = false;
				@RotatePath(var_241_object, var_239_bool);
				if(!var_239_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_265_string;
						func_1710(var_265_string);
						string var_266_string;
						func_1712(var_266_string);
						@FollowPath(var_241_object, var_229_bool, var_239_bool, var_265_string, var_266_string);
						if(!var_239_bool) { //@nz
							if(var_0_bool == 0) goto Label_1635;
							var_241_object = null;
						}
					EMIT "GOTO 0x664";

					Label_1635:
						} else {
					var_241_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_239_bool);
					if(!var_239_bool) { //@nz
						if(var_0_bool != 0) {
							var_241_object = null;
							goto Label_1663;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1663;
		}
			var_246_object = null;
			goto Label_1661;

		Label_1661:
			var_241_object = null;

		}
	Label_1663:
		for(;;) {
			var_225_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_2589(int var_82_int, object var_83_object)
{
	object var_85_object;
	var_83_object = var_85_object;
	bool var_84_bool;
	func_1874(var_84_bool, var_85_object);
	if(var_84_bool != 0)
		var_82_int = 2;
	else
		var_82_int = 0;
	
}


void func_1053(bool var_0_bool, float var_451_float, int var_452_int)
{
	object var_456_object; float var_457_float; float var_458_float;
	@GetVictim((var_451_float * 0.9), var_456_object);
	@ReportAttack(var_0_bool);
	if(var_456_object == var_0_bool) {
		float var_462_float; object var_463_object; int var_464_int;
		var_456_object = var_463_object;
		var_452_int = var_464_int;
		func_783(var_464_int);
		var_462_float = var_457_float;
		float var_465_float; object var_466_object; float var_467_float; int var_468_int;
		var_456_object = var_466_object;
		int var_469_int; object var_470_object; int var_471_int;
		var_456_object = var_470_object;
		var_452_int = var_471_int;
		func_786(var_471_int);
		var_469_int = var_468_int;
		func_1760(var_465_float, var_466_object, var_467_float, var_468_int);
		var_465_float = var_458_float;
		int var_526_int;
		func_1436(var_526_int);
		@ReportHit(var_0_bool, var_526_int, var_458_float, var_467_float);
		object var_527_object; float var_528_float;
		var_456_object = var_527_object;
		var_458_float = var_528_float;
		func_1443();
	}
}
EMIT "Stack[-3] = 0";


void func_33(object var_15_object)
{
	cvector var_26_cvector; cvector var_27_cvector; cvector var_28_cvector; cvector var_29_cvector; string var_30_string; object var_31_object; bool var_32_bool; bool var_33_bool; float var_34_float; cvector var_35_cvector;
	if(var_15_object == null) {
		func_124("fdie");
	} else {
		var_15_object->GetPosition(var_26_cvector);
		@GetPosition(var_27_cvector);
		@GetDirection(var_28_cvector);
		var_29_cvector = var_27_cvector - var_26_cvector;
		var_69_float = GetByIndex(var_29_cvector, 0);
		var_70_float = GetByIndex(var_28_cvector, 0);
		var_72_float = GetByIndex(var_29_cvector, 2);
		var_73_float = GetByIndex(var_28_cvector, 2);
		if(((var_69_float * var_70_float) + (var_72_float * var_73_float)) >= 0)
			var_30_string = "fdie";
		else
			var_30_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_15_object = var_31_object;
		var_80_bool = IsFuncExist(var_15_object, "GetScriptProperty", 2);
		if(var_80_bool != 0) {
			var_15_object->HasScriptProperty(var_32_bool, "Owner");
			if(var_32_bool != 0) {
				var_15_object->GetScriptProperty(var_31_object, "Owner");
				if(var_31_object == null)
					var_15_object = var_31_object;
			}
		}
		var_87_bool = IsFuncExist(var_31_object, "@GetEyesHeight", 1);
		if(var_87_bool != 0) {
			var_31_object->GetEyesHeight(var_34_float);
			var_35_cvector = [0.0, 0.0, 0.0];
			var_88_float = GetByIndex(var_35_cvector, 1);
			var_34_float = var_88_float;
			SetByIndex(var_35_cvector, 1) = var_88_float;
			@LookAsync(var_15_object, "head", var_35_cvector);
			var_33_bool = true;
		} else {
			var_33_bool = false;

		}
		string var_90_string;
		var_30_string = var_90_string;
		func_2051(var_90_string);
		@PlayAnimation("all", var_30_string);
		@WaitForAnimEnd();
		if(var_33_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_30_string);
		@RemoveEnvelope();
		var_31_object = null;
	}
	
}


// @pe
void func_2599(object var_117_object)
{
	object var_118_object;
	var_117_object = var_118_object;
	TaskCall(3);
	func_775(var_118_object);
	TaskReturn();
}


void func_2092(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_2607(bool var_28_bool, object var_29_object, bool var_30_bool)
{
	bool var_35_bool; object var_36_object;
	func_1748(var_35_bool, var_36_object, "class");
	if(!var_35_bool) { //@nz
		var_28_bool = false;
		return 4;
	}
	string var_33_string;
	@GetProperty("class", var_33_string);
	string var_34_string;
	var_36_object->GetProperty("class", var_34_string);
	bool var_47_bool = false;
	if(!var_30_bool) { //@nz
		if(var_33_string == var_34_string)
			var_47_bool = true;
	}
	if(var_47_bool != 0) {
		var_28_bool = true;
		return 4;
	}
	if(var_34_string == "rat") {
		var_28_bool = false;
		return 4;
	EMIT "GOTO 0xa78";
	}
	if(var_34_string == "rat_big") {
		var_28_bool = false;
		return 4;
	EMIT "GOTO 0xa78";
	}
	if(var_34_string == "dog") {
		var_28_bool = false;
		return 4;
	EMIT "GOTO 0xa78";
	}
	if(var_34_string == "grabitel") {
		var_28_bool = false;
		return 4;
	EMIT "GOTO 0xa78";
	}
	if(var_34_string == "bomber") {
		var_28_bool = false;
		return 4;
	EMIT "GOTO 0xa78";
	}
	if(var_34_string == "sanitar") {
		var_28_bool = false;
		return 4;
	EMIT "GOTO 0xa78";
	}
	if(var_34_string == "hunter") {
		var_28_bool = false;
		return 4;
	EMIT "GOTO 0xa78";
	}
	if(var_34_string == "soldier") {
		var_28_bool = false;
		return 4;
	}
	var_28_bool = true;
}


void func_2098(cvector var_44_cvector, cvector var_45_cvector)
{
	float var_53_float = sqrt(var_45_cvector | var_45_cvector);
	if(var_53_float < 0.000001)
		var_44_cvector = [0.0, 0.0, 0.0];
	var_44_cvector = var_45_cvector / var_53_float;
}


// @pe
void func_2108(float var_503_float, float var_504_float, float var_505_float)
{
	if(var_504_float < var_505_float)
		var_504_float = var_503_float;
	else
		var_505_float = var_503_float;
	
}


// @pe
void func_2115(float var_513_float, float var_514_float, float var_515_float, float var_516_float)
{
	if(var_514_float < var_515_float) {
		var_515_float = var_513_float;
		return 0;
	}
	if(var_514_float > var_516_float) {
		var_516_float = var_513_float;
		return 0;
	}
	var_514_float = var_513_float;
}


void func_1092(bool var_0_bool, bool var_1_bool, bool var_414_bool, float var_415_float)
{
	string var_423_string;
	func_1431(var_423_string);
	int var_420_int;
	@irand(var_420_int, var_1_bool);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_2154();
	@PlayAnimation("all", ("attack_begin" + (var_420_int + 1)));
	@WaitForAnimEnd();
	int var_422_int;
	func_1399(var_422_int, var_423_string);
	bool var_448_bool;
	func_1874(var_448_bool, var_0_bool);
	if(!var_448_bool) { //@nz
		@StopAsync();
		var_414_bool = false;
		return 8;
	}
	float var_451_float; int var_452_int;
	var_415_float = var_451_float;
	var_420_int = var_452_int;
	func_1053(var_423_string, var_451_float, var_452_int);
	bool var_421_bool;
	@HasAnimation(var_421_bool, "all", ("attack_middle" + var_420_int));
	if(var_421_bool != 0) {
		func_2154();
		@PlayAnimation("all", ("attack_middle" + var_420_int));
		@WaitForAnimEnd();
		func_1431(var_423_string);
		bool var_536_bool;
		func_1874(var_536_bool, var_0_bool);
		if(!var_536_bool) { //@nz
			@StopAsync();
			var_414_bool = false;
			return 8;
		}
		float var_539_float; int var_540_int;
		var_415_float = var_539_float;
		func_1053(var_423_string, var_539_float, var_540_int);
		var_422_int = 1;

		for(;;) {
			var_423_string = (("attack_middle" + var_540_int) + "_") + var_422_int;
			@HasAnimation(var_421_bool, "all", var_423_string);
			if(!var_421_bool) { //@nz
			} else {
				func_2154();
				@PlayAnimation("all", var_423_string);
				@WaitForAnimEnd();
				func_1431(var_423_string);
				bool var_562_bool;
				func_1874(var_562_bool, var_0_bool);
				if(!var_562_bool) { //@nz
					@StopAsync();
					var_414_bool = false;
					return 8;
				}
				float var_565_float; int var_566_int;
				var_415_float = var_565_float;
				var_420_int = var_566_int;
				func_1053(var_423_string, var_565_float, var_566_int);
				var_422_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_420_int));
		bool var_551_bool;
		func_1445(var_551_bool);
		if(var_551_bool != 0) {
			bool var_552_bool;
			func_1229(var_552_bool, 0.75);
			@StopAsync();
		}
		var_414_bool = true;
		return 8;

	}
}


void func_2126(float var_521_float)
{
	object var_523_object;
	@CreateFloatVector(var_523_object);
	var_523_object->add(var_521_float);
	@SendWorldWndMessage(15, var_523_object);
}
EMIT "Stack[-1] = 0";


void func_2136(int var_23_int)
{
	float var_25_float;
	@GetGameTime(var_25_float);
	var_23_int = 1 + (var_25_float / 24);
}


void func_2145(object var_15_object)
{
	bool var_17_bool;
	@IsPlayerActor(var_15_object, var_17_bool);
	if(var_17_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_2154(void)
{
	object var_427_object;
	@GetScene(var_427_object);
	object var_429_object;
	func_2092(var_429_object);
	@BroadcastMessage("battle", var_429_object, var_427_object);
}
EMIT "Stack[-1] = 0";


void func_2165(int var_20_int, int var_21_int)
{
	if(var_20_int > var_21_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_33_int = 0;
	if(var_20_int != var_21_int) {
		@irand(var_33_int, (var_21_int - var_20_int));
	} else if(var_20_int == 0) {
		return 4;
	}
	var_33_int += var_20_int;
	if(var_33_int == 0)
		return 4;
	int var_41_int;
	func_2371(var_41_int, "Money");
	bool var_34_bool;
	@AddItem(var_34_bool, var_41_int, 0, var_33_int);
	
}


// @pe
void func_2682(int var_79_int, object var_80_object)
{
	object var_83_object;
	var_80_object = var_83_object;
	int var_82_int;
	func_2589(var_82_int, var_83_object);
	var_82_int = var_79_int;
}


// @pe
void func_124(string var_37_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_38_string;
	var_37_string = var_38_string;
	func_2051(var_38_string);
	@PlayAnimation("all", var_37_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_37_string);
	@RemoveEnvelope();
}


// @pe
void func_2689(object var_116_object)
{
	object var_117_object;
	var_116_object = var_117_object;
	func_2599(var_117_object);
}


// @pe
void func_1665(bool var_0_bool, bool var_1_bool, int var_20_int)
{
	if(var_20_int != 0)
		return 0;
	bool var_23_bool;
	func_1703(var_23_bool, var_1_bool);
	if(!var_23_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2695(bool var_21_bool, object var_22_object, object var_23_object, float var_24_float, bool var_25_bool)
{
	object var_29_object;
	var_23_object = var_29_object;
	bool var_28_bool;
	func_2607(var_28_bool, var_29_object, !var_25_bool);
	if(!var_28_bool) { //@nz
		var_21_bool = false;
		return 2;
	}
	bool var_27_bool;
	@CanSee(var_27_bool, var_22_object);
	bool var_67_bool = true;
	if(var_27_bool != 1) {
		float var_69_float; object var_70_object;
		var_22_object = var_70_object;
		func_1735(var_69_float, var_70_object);
		var_78_bool = var_69_float <= (var_24_float * var_24_float);
		if(var_78_bool != 1)
			var_67_bool = false;
	}
	if(var_67_bool != 0) {
		var_21_bool = true;
		return 2;
	}
	var_21_bool = false;
}


void func_2196(bool var_14_bool)
{
	int var_17_int; bool var_18_bool;
	if(var_14_bool != 0) {
		int var_23_int;
		func_2136(var_23_int);
		func_2165(0, (100 + (var_23_int * 100)));
		@irand(var_17_int, 8);
		if(var_17_int == 0) {
			int var_51_int;
			func_2371(var_51_int, "lemon");
			@AddItem(var_18_bool, var_51_int, 0, 1);
		} else {
				if(var_17_int == 1) {
					int var_57_int;
					func_2371(var_57_int, "rusk");
					@AddItem(var_18_bool, var_57_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_17_int == 2) {
				int var_63_int;
				func_2371(var_63_int, "hook");
				@AddItem(var_18_bool, var_63_int, 0, 1);
			} else if(var_17_int == 4) {
				int var_69_int;
				func_2371(var_69_int, "syringe");
				@AddItem(var_18_bool, var_69_int, 0, 1);
			} else if(var_17_int == 5) {
				int var_75_int;
				func_2371(var_75_int, "watch");
				@AddItem(var_18_bool, var_75_int, 0, 1);
			} else if(var_17_int == 6) {
				int var_81_int;
				func_2371(var_81_int, "razor");
				@AddItem(var_18_bool, var_81_int, 0, 1);
			}
	}
		int var_88_int;
		func_2136(var_88_int);
		func_2165(0, (50 + (var_88_int * 50)));
		@irand(var_17_int, 7);
		if(var_17_int == 0) {
			int var_94_int;
			func_2371(var_94_int, "beads");
			@AddItem(var_18_bool, var_94_int, 0, 1);
		} else if(var_17_int == 1) {
			int var_100_int;
			func_2371(var_100_int, "bracelet");
			@AddItem(var_18_bool, var_100_int, 0, 1);
		} else if(var_17_int == 2) {
			int var_106_int;
			func_2371(var_106_int, "ear_ring");
			@AddItem(var_18_bool, var_106_int, 0, 1);
		} else if(var_17_int == 3) {
			int var_112_int;
			func_2371(var_112_int, "gold_ring");
			@AddItem(var_18_bool, var_112_int, 0, 1);
		} else if(var_17_int == 4) {
			int var_118_int;
			func_2371(var_118_int, "silver_ring");
			@AddItem(var_18_bool, var_118_int, 0, 1);
		} else if(var_17_int == 5) {
			int var_124_int;
			func_2371(var_124_int, "flower");
			@AddItem(var_18_bool, var_124_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_1687(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_2724(int var_15_int)
{
	var_15_int = 0;
}


// @pe
void func_2727(void)
{
}


// @pe
void func_1703(bool var_23_bool, object var_24_object)
{
	object var_26_object;
	var_24_object = var_26_object;
	bool var_25_bool;
	func_1874(var_25_bool, var_26_object);
	var_25_bool = var_23_bool;
}


// @pe
void func_2729(int var_42_int)
{
	var_42_int = 0;
}


void func_171(void)
{
	bool var_128_bool;
	func_2035(var_128_bool);
	if(!var_128_bool) //@nz
		func_2739();
}


// @pe
void func_2732(void)
{
}


// @pe
void func_2734(int var_15_int)
{
	var_15_int = 0;
}


void func_1710(string var_265_string)
{
	var_265_string = "walk";
}


void func_1712(string var_266_string)
{
	var_266_string = "run";
}


// @pe
void func_2737(void)
{
}


void func_689(void)
{
	int var_168_int; int var_169_int; bool var_170_bool; float var_171_float; bool var_172_bool;
	@WaitForAnimEnd();
	bool var_173_bool;
	func_2035(var_173_bool);
	if(!var_173_bool) //@nz
		return 14;
	int var_175_int;
	func_2556(var_175_int);
	int var_166_int;
	var_175_int = var_166_int;
	int var_167_int = 0;
	
	for(;;) {
		bool var_188_bool = false;
		if(var_167_int < 5) {
			bool var_191_bool;
			func_2035(var_191_bool);
			if(var_191_bool != 0)
				var_188_bool = true;
		}
		if(var_188_bool != 0) {
			@irand(var_168_int, 3);
			if(var_168_int == 0) {
				if(var_166_int == 0) goto Label_736;
				@irand(var_169_int, var_166_int);
				string var_197_string; int var_198_int;
				var_169_int = var_198_int;
				func_2549(var_197_string, var_198_int);
				@PlayAnimation("all", var_197_string);
				@WaitForAnimEnd(var_170_bool);
				if(!var_170_bool) { //@nz
				} else {
			} else {
			if(var_168_int == 1) {
				@rand(var_171_float, 4);
				@Sleep((var_171_float + 1), var_172_bool);
				if(!var_172_bool) { //@nz
					goto Label_765;
				}
			} else if(var_167_int != 0) {
				goto Label_765;
			}
			}
					bool var_200_bool;
					func_768(var_200_bool);
					var_201_bool = !var_200_bool; //@nz
					if(var_201_bool == 0) goto Label_760;
			}
		}
	Label_765:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_760:
		@ResetAAS();
		var_167_int += 1;
	}
	
}


void func_2739(void)
{
}


// @pe
void func_1714(string var_493_string, int var_494_int)
{
	if(var_494_int == 2) {
		var_493_string = "fire";
		return 0;
	EMIT "GOTO 0x6be";
	}
	if(var_494_int == 1) {
		var_493_string = "bullet";
		return 0;
	}
	var_493_string = "phys";
}


// @pe
void func_2740(bool var_18_bool)
{
	var_18_bool = false;
}


// @pe
void func_2743(void)
{
}


// @pe
void func_2745(bool var_25_bool)
{
	var_25_bool = false;
}


// @pe
void func_2748(void)
{
}


// @pe
void func_2750(bool var_29_bool)
{
	var_29_bool = false;
}


void func_1728(cvector var_46_cvector, object var_47_object)
{
	cvector var_50_cvector;
	@GetPosition(var_50_cvector);
	cvector var_51_cvector;
	var_47_object->GetPosition(var_51_cvector);
	var_46_cvector = var_51_cvector - var_50_cvector;
}


// @pe
void func_2753(void)
{
}


// @pe
void func_2755(bool var_20_bool)
{
	var_20_bool = false;
}


// @pe
void func_2758(void)
{
}


void func_1735(float var_69_float, object var_70_object)
{
	cvector var_74_cvector;
	@GetPosition(var_74_cvector);
	cvector var_75_cvector;
	var_70_object->GetPosition(var_75_cvector);
	var_69_float = (var_75_cvector - var_74_cvector) | (var_75_cvector - var_74_cvector);
}


void func_2760(void)
{
	var_13_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_2196(true);
}


void func_1229(bool var_552_bool, float var_553_float)
{
	float var_556_float; bool var_557_bool;
	@rand(var_556_float);
	if(var_556_float < var_553_float) {

		for(;;) {
			@IsAnimationPlaying(var_557_bool);
			if(!var_557_bool) { //@nz
			} else {
				bool var_560_bool;
				func_1327(var_560_bool);
				if(var_560_bool != 0) {
					var_552_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_552_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1431(var_557_bool);
}


void func_1743(bool var_96_bool, object var_97_object)
{
	bool var_99_bool;
	@IsPlayerActor(var_97_object, var_99_bool);
	var_99_bool = var_96_bool;
}


void func_2768(bool var_57_bool, object var_58_object)
{
	bool var_60_bool;
	@IsPlayerActor(var_58_object, var_60_bool);
	var_60_bool = var_57_bool;
}


void func_1748(bool var_47_bool, object var_48_object, string var_49_string)
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
void func_2773(bool var_17_bool, object var_18_object, object var_19_object, bool var_20_bool)
{
	object var_22_object;
	var_18_object = var_22_object;
	object var_23_object;
	var_19_object = var_23_object;
	bool var_25_bool;
	var_20_bool = var_25_bool;
	bool var_21_bool;
	func_2695(var_21_bool, var_22_object, var_23_object, 700.0, var_25_bool);
	var_21_bool = var_17_bool;
}


// @pe
void func_2783(object var_95_object)
{
	bool var_96_bool; object var_97_object;
	func_1743(var_96_bool, var_97_object);
	if(var_96_bool != 0) {
		object var_100_object;
		func_2092(var_100_object);
		@ReportReputationChange(var_97_object, var_100_object, -0.05, true);
	}
	var_105_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_1760(float var_465_float, object var_466_object, float var_467_float, int var_468_int)
{
	int var_478_int; int var_480_int;
	object var_485_object;
	var_466_object = var_485_object;
	bool var_484_bool;
	func_1748(var_484_bool, var_485_object, "health");
	if(!var_484_bool) //@nz
		var_465_float = 0.0;
	bool var_488_bool; object var_489_object;
	func_1748(var_488_bool, var_489_object, "armor");
	if(!var_488_bool) //@nz
		var_478_int = 0;
	else
		var_489_object->GetProperty("armor", var_478_int);
	string var_493_string; int var_494_int;
	var_468_int = var_494_int;
	func_1714(var_493_string, var_494_int);
	string var_479_string = "armor_" + var_493_string;
	bool var_499_bool; object var_500_object; string var_501_string;
	var_466_object = var_500_object;
	func_1748(var_499_bool, var_500_object, var_501_string);
	if(!var_499_bool) //@nz
		var_480_int = 0;
	else
		var_466_object->GetProperty(var_501_string, var_480_int);

	float var_503_float;
	func_2108(var_503_float, ((var_478_int + var_480_int) / 100.0), (float)1);
	float var_481_float;
	var_503_float = var_481_float;
	float var_482_float;
	var_466_object->GetProperty("health", var_482_float);
	float var_483_float = var_467_float * (1 - var_481_float);
	float var_513_float;
	func_2115(var_513_float, (var_482_float - var_483_float), (float)0, (float)1);
	var_466_object->SetProperty("health", var_513_float);
	bool var_519_bool; object var_520_object;
	var_466_object = var_520_object;
	func_1743(var_519_bool, var_520_object);
	if(var_519_bool != 0) {
		float var_521_float = -var_483_float;
		func_2126(var_521_float);
	}
	var_483_float = var_465_float;
	
}


void func_1256(bool var_0_bool, bool var_353_bool, float var_354_float)
{
	bool var_360_bool; cvector var_361_cvector; cvector var_362_cvector; cvector var_363_cvector; float var_364_float;
	
	for(;;) {
		@IsAnimationPlaying(var_360_bool);
		if(!var_360_bool) //@nz
			break;
		bool var_366_bool;
		func_1327(var_366_bool);
		if(var_366_bool != 0) {
			var_353_bool = true;
			return 10;
		}
		bool var_409_bool;
		func_1874(var_409_bool, var_0_bool);
		if(!var_409_bool) { //@nz
			var_353_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_361_cvector); //@t
		@GetPFPosition(var_362_cvector);
		var_363_cvector = var_361_cvector - var_362_cvector;
		var_364_float = var_363_cvector | var_363_cvector;
		if(var_364_float < (var_354_float * var_354_float)) {
			bool var_414_bool; float var_415_float;
			var_354_float = var_415_float;
			func_1092(var_363_cvector, var_364_float, var_414_bool, var_415_float);
			var_353_bool = true;
			return 10;
		}
		@sync();
	}
	func_1431(var_364_float);
	var_353_bool = false;
}


void func_768(bool var_200_bool)
{
	var_200_bool = true;
}


void func_770(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_775(object var_118_object)
{
	object var_125_object;
	func_789(var_121_int, var_122_bool, var_123_float, var_124_int, var_125_object, var_125_object, true, 180.0);
}


// @pe
void func_783(float var_462_float)
{
	var_462_float = 0.05;
}


// @pe
void func_786(int var_469_int)
{
	var_469_int = 0;
}


void func_1299(bool var_0_bool, bool var_368_bool)
{
	cvector var_374_cvector; cvector var_375_cvector;
	bool var_379_bool;
	func_1874(var_379_bool, var_0_bool);
	if(!var_379_bool) { //@nz
		var_368_bool = false;
		return 10;
	}
	bool var_382_bool;
	float var_378_float;
	func_1388(var_378_float, var_382_bool);
	if(var_382_bool != 0) {
		var_0_bool->GetPFPosition(var_374_cvector); //@t
		@GetPFPosition(var_375_cvector);
		var_0_bool->GetAttackDistance(var_378_float); //@t
		var_368_bool = ((var_374_cvector - var_375_cvector) | (var_374_cvector - var_375_cvector)) <= ((var_378_float + 50) * (var_378_float + 50));
		return 10;
	}
	var_368_bool = false;
}


void func_789(bool var_0_bool, object var_3_object, bool var_5_bool, object var_125_object, bool var_126_bool, float var_127_float, bool var_202_bool, bool var_294_bool)
{
	float var_139_float; cvector var_140_cvector; cvector var_141_cvector; bool var_143_bool; float var_146_float; cvector var_147_cvector; bool var_148_bool; float var_149_float;
	func_1018(var_147_cvector, var_148_bool, var_149_float);
	var_5_bool = 0;
	var_174_bool = IsFuncExist(var_125_object, "@GetAttackDistance", 1);
	if(var_174_bool != 0) {
		var_125_object->GetAttackDistance(var_139_float);
		var_139_float += 50;
	} else {
						var_127_float = var_139_float;
	}
	if(var_139_float >= 150)
		var_139_float = 150;
	var_3_object = false;
	var_0_bool = var_125_object;
	bool var_142_bool;
	@IsPlayerActor(var_0_bool, var_142_bool);
	if(var_142_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_180_object;
		func_2092(var_180_object);
		@SendPlayerEnemy(var_125_object, var_180_object);
	}
	if(var_126_bool != 0)
		var_143_bool = false;
	else
		var_143_bool = true;

	
Label_829:
	for(;;) {
		bool var_185_bool = false;
		bool var_186_bool;
		func_1874(var_186_bool, var_0_bool);
		if(var_186_bool != 0) {
			if(!var_3_object) //@nz
				var_185_bool = true;
		}
		if(var_185_bool != 0) {
			func_1431(var_149_float);
			var_0_bool->GetPFPosition(var_140_cvector); //@t
			@GetPFPosition(var_141_cvector);
			var_146_float = (var_140_cvector - var_141_cvector) | (var_140_cvector - var_141_cvector);
			if(var_146_float >= ((400.0 + var_139_float) * (400.0 + var_139_float))) {
				bool var_196_bool; float var_198_float;
				var_139_float = var_198_float;
				TaskCall(4);
				func_1458(var_204_bool, var_196_bool, var_0_bool, var_198_float, 3000.0, true, false);
				TaskReturn();
				if(!var_202_bool) { //@nz
				} else {
					var_143_bool = false;
			} else {
			if(var_146_float >= (var_127_float * var_127_float)) {
				var_0_bool->GetPFPosition(var_147_cvector); //@t
				@CanReachByPF(var_148_bool, var_147_cvector);
				if(!var_148_bool) { //@nz
					bool var_288_bool; float var_290_float;
					var_139_float = var_290_float;
					TaskCall(4);
					func_1458(var_296_bool, var_288_bool, var_0_bool, var_290_float, 3000.0, true, false);
					TaskReturn();
					if(!var_294_bool) { //@nz
						goto Label_1001;
					}
					var_143_bool = false;
					goto Label_829;
				}
				if(!var_143_bool) { //@nz
					func_2024(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1431(var_149_float);
					@StopAsync();
					var_143_bool = true;
					bool var_310_bool;
					func_1874(var_310_bool, var_0_bool);
					if(!var_310_bool) { //@nz
						goto Label_1001;
					}
				}
				@rand(var_149_float);
				bool var_313_bool;
				var_315_bool = var_149_float < 0.25;
				if(var_315_bool != 1) {
					bool var_316_bool;
					func_1388(true, var_316_bool);
					if(var_316_bool != 1)
						var_313_bool = false;
				}
				if(var_313_bool != 0) {
					@Face(var_0_bool);
					func_1438();
					@PlayAnimation("all", "attack_stay");
					bool var_353_bool; float var_354_float;
					func_1256(var_149_float, var_353_bool, var_354_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1431(var_149_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_571_bool;
					func_1388(var_149_float, var_571_bool);
					var_572_bool = !var_571_bool; //@nz
					if(var_572_bool == 0) goto Label_991;
					bool var_573_bool;
					func_1874(var_573_bool, var_0_bool);
					if(!var_573_bool) { //@nz
						goto Label_1001;
					}
					var_0_bool->GetPFPosition(var_140_cvector); //@t
					@GetPFPosition(var_141_cvector);
					if(!(((var_140_cvector - var_141_cvector) | (var_140_cvector - var_141_cvector)) < (var_354_float * var_354_float))) goto Label_991;
					bool var_578_bool; float var_579_float;
					var_127_float = var_579_float;
					func_1092(var_148_bool, var_149_float, var_578_bool, var_579_float);
					var_580_bool = !var_578_bool; //@nz
					if(var_580_bool == 0) goto Label_991;
					goto Label_1001;
			}
				bool var_581_bool; float var_582_float;
				var_127_float = var_582_float;
				func_1092(var_148_bool, var_149_float, var_581_bool, var_582_float);
				if(!var_581_bool) { //@nz
					goto Label_1001;
				}
				var_143_bool = true;

			}
		Label_991:
			goto Label_1000;
			}
			Label_1000:
			}
		}
	Label_1001:
		@WaitForAnimEnd();
		if(var_3_object != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_142_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1833(bool var_40_bool, object var_41_object)
{
	bool var_43_bool;
	var_41_object->IsDead(var_43_bool);
	var_43_bool = var_40_bool;
}


void func_1838(bool var_29_bool, object var_30_object)
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
		func_1833(var_40_bool, var_41_object);
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


void func_1327(bool var_366_bool)
{
	bool var_367_bool = false;
	bool var_368_bool;
	func_1299(var_367_bool, var_368_bool);
	if(var_368_bool != 0) {
		bool var_385_bool;
		func_1343(var_366_bool, var_367_bool, var_385_bool);
		if(var_385_bool != 0)
			var_367_bool = true;
	}
	if(var_367_bool != 0) {
		var_366_bool = true;
		return 0;
	}
	var_366_bool = false;
}


void func_1343(bool var_0_bool, object var_4_object, bool var_385_bool)
{
	object var_391_object; float var_393_float; cvector var_394_cvector; cvector var_395_cvector;
	@GetScene(var_391_object);
	bool var_392_bool = false;
	
	for(;;) {
		cvector var_396_cvector;
		func_1728(var_396_cvector, var_0_bool);
		var_402_int = -var_396_cvector;
		@FindDirLength(var_393_float, var_402_int, var_4_object);
		if(var_393_float < var_4_object) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_394_cvector); //@t
				@GetPFPosition(var_395_cvector);
				@WaitForAnimEnd();
				func_1431(var_395_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_392_bool = true;
				bool var_407_bool;
				func_1299(var_395_cvector, var_407_bool);
				var_408_bool = !var_407_bool; //@nz
				if(var_408_bool == 0) goto Label_1384;
		}
		for(;;) {
			var_392_bool = var_385_bool;

		}

	Label_1384:
	}
}
EMIT "Stack[-5] = 0";


void func_2371(int var_41_int, string var_42_string)
{
	int var_44_int;
	@GetInvItemByName(var_44_int, var_42_string);
	var_44_int = var_41_int;
}


// @pe
void func_2376(object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	TaskCall(0);
	func_0(var_14_object);
	TaskReturn();
}


void func_1874(bool var_25_bool, object var_26_object)
{
	object var_30_object;
	var_26_object = var_30_object;
	bool var_29_bool;
	func_1838(var_29_bool, var_30_object);
	if(!var_29_bool) { //@nz
		var_25_bool = false;
		return 2;
	}
	bool var_47_bool; object var_48_object;
	func_1748(var_47_bool, var_48_object, "noaccess");
	if(!var_47_bool) { //@nz
		var_25_bool = true;
		return 2;
	}
	int var_28_int;
	var_48_object->GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == 0;
}


void func_1898(object var_29_object)
{
	string var_43_string;
	if(var_29_object == null)
		return 14;
	bool var_37_bool;
	@IsDead(var_37_bool);
	if(var_37_bool != 0)
		return 14;
	int var_38_int;
	@GetSecondaryAnimationType(var_38_int);
	if(var_38_int < 0)
		return 14;
	cvector var_39_cvector;
	var_29_object->GetPosition(var_39_cvector);
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	cvector var_41_cvector;
	@GetDirection(var_41_cvector);
	cvector var_42_cvector = var_40_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_42_cvector, 0);
	var_49_float = GetByIndex(var_41_cvector, 0);
	var_51_float = GetByIndex(var_42_cvector, 2);
	var_52_float = GetByIndex(var_41_cvector, 2);
	if(((var_48_float * var_49_float) + (var_51_float * var_52_float)) >= 0)
		var_43_string = "fhit";
	else
		var_43_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_43_string + "1"), (var_43_string + "2"), -10);
	
}


void func_1388(bool var_0_bool, bool var_316_bool)
{
	bool var_318_bool;
	var_321_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_321_bool != 0) {
		var_0_bool->IsAttacking(var_318_bool); //@t
		var_318_bool = var_316_bool;
	}
	var_316_bool = false;
}


void func_367(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_503(var_11_object, var_12_bool);
}


// @pe
void func_2421(bool var_16_bool, object var_17_object, string var_18_string)
{
	if(var_18_string == "unholster") {
		bool var_21_bool; object var_22_object;
		var_17_object = var_22_object;
		func_2740(var_22_object);
		var_21_bool = var_16_bool;
		return 0;
	EMIT "GOTO 0x993";
	}
	if(var_18_string == "player_shot") {
		bool var_25_bool; object var_26_object;
		var_17_object = var_26_object;
		func_2745(var_26_object);
		var_25_bool = var_16_bool;
		return 0;
	EMIT "GOTO 0x993";
	}
	if(var_18_string == "battle") {
		bool var_29_bool; object var_30_object;
		var_17_object = var_30_object;
		func_2750(var_30_object);
		var_29_bool = var_16_bool;
		return 0;
	}
	var_16_bool = false;
}


void func_375(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_510(var_16_bool, var_17_int);
}


void func_1399(bool var_2_bool, bool var_5_bool)
{
	int var_436_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_435_float;
	@rand(var_435_float);
	float var_442_float;
	func_1449(var_442_float);
	if(var_435_float < var_442_float) {
		@irand(var_436_int, var_2_bool);
		@Speak("attack" + (var_436_int + 1));
		int var_447_int;
		func_1447(var_447_int);
		var_5_bool = var_447_int;
	}
}


void func_392(bool var_2_bool, object var_13_object)
{
	bool var_18_bool; object var_19_object;
	func_1874(var_18_bool, var_19_object);
	if(!var_18_bool) //@nz
		return 4;
	if(var_2_bool != 0)
		return 4;
	bool var_16_bool;
	@IsPlayerActor(var_19_object, var_16_bool);
	if(!var_16_bool) //@nz
		return 4;
	int var_55_int; object var_56_object;
	var_13_object = var_56_object;
	func_2573(var_55_int, var_56_object);
	int var_17_int;
	var_55_int = var_17_int;
	if(var_17_int > 0) {
		if(var_17_int > 1)
			func_375(var_17_int);
		object var_66_object;
		var_13_object = var_66_object;
		func_2583(var_66_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_2453(object var_31_object, string var_32_string)
{
	if(var_32_string == "unholster") {
		object var_35_object;
		var_31_object = var_35_object;
		func_2743();
	} else if(var_32_string == "player_shot") {
			object var_38_object;
			var_31_object = var_38_object;
			func_2748();
	}
Label_2477:
	for(;;) {

	}
	
	if(!(var_32_string == "battle")) goto Label_2477;
	object var_41_object;
	var_31_object = var_41_object;
	func_2753();
}


void func_1942(object var_16_object, int var_17_int, float var_18_float)
{
	cvector var_28_cvector; object var_29_object; int var_30_int; bool var_31_bool; cvector var_32_cvector; cvector var_33_cvector;
	bool var_37_bool = false;
	bool var_38_bool = false;
	if(var_16_object != 0) {
		if(var_17_int != 4)
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		if(var_17_int != 5)
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		cvector var_44_cvector; cvector var_45_cvector;
		cvector var_46_cvector; object var_47_object;
		var_16_object = var_47_object;
		func_1728(var_46_cvector, var_47_object);
		var_46_cvector = var_45_cvector;
		func_2098(var_44_cvector, var_45_cvector);
		var_44_cvector = var_28_cvector;
		@CreateVectorVector(var_29_object);
		var_30_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_30_int), var_31_bool, var_32_cvector, var_33_cvector);
			if(!var_31_bool) { //@nz
				break;
			Label_2004:
				var_29_object = null;
	}
			object var_106_object;
			var_16_object = var_106_object;
			func_1898(var_106_object);
		}
		if((var_33_cvector | var_28_cvector) >= 0.70710677)
			var_29_object->add(var_32_cvector);
		var_30_int += 1;
	}
	int var_34_int;
	var_29_object->size(var_34_int);
	if(var_34_int == 0) goto Label_2004;
	int var_35_int;
	@irand(var_35_int, var_34_int);
	cvector var_36_cvector;
	var_29_object->get(var_36_cvector, var_35_int);
	object var_61_object; int var_62_int; float var_63_float; cvector var_64_cvector; cvector var_65_cvector;
	var_16_object = var_61_object;
	var_17_int = var_62_int;
	var_18_float = var_63_float;
	var_36_cvector = var_64_cvector;
	var_65_cvector = -var_28_cvector;
	func_2010(var_63_float, var_64_cvector, var_65_cvector);
}


void func_1431(bool var_0_bool)
{
	func_2145(var_0_bool);
}


void func_1436(int var_526_int)
{
	var_526_int = 0;
}


void func_1438(void)
{
	func_2051("attack_stay");
}


// @pe
void func_1443(void)
{
}


void func_1445(bool var_551_bool)
{
	var_551_bool = true;
}


void func_1447(int var_447_int)
{
	var_447_int = 1;
}


void func_1449(float var_442_float)
{
	var_442_float = 0.5;
}


void func_2478(bool var_13_bool, object var_14_object)
{
	bool var_16_bool;
	bool var_17_bool = false;
	bool var_18_bool; object var_19_object;
	var_14_object = var_19_object;
	func_2740(var_19_object);
	if(var_18_bool != 0) {
		bool var_20_bool; object var_21_object;
		func_1743(var_20_bool, var_21_object);
		if(var_20_bool != 0)
			var_17_bool = true;
	}
	if(var_17_bool != 0) {
		var_21_object->IsWeaponHolstered(var_16_bool);
		if(!var_16_bool) //@nz
			var_13_bool = true;
	}
	var_13_bool = false;
}


void func_432(bool var_0_bool, bool var_1_bool)
{
	float var_138_float; cvector var_139_cvector; cvector var_140_cvector; bool var_141_bool; object var_142_object; bool var_143_bool;
	@rand(var_138_float, 0.5);
	@Sleep(var_138_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_444:
				@GetPosition(var_140_cvector);
				float var_147_float;
				func_491(var_147_float);
				@GetRandomPFPointInCircle(var_139_cvector, var_140_cvector, var_147_float, var_141_bool);
				if(var_141_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_444;
			}
				var_1_bool = false;
		}
		}
		goto Label_460;

	Label_460:
		object var_151_object; cvector var_152_cvector;
		var_139_cvector = var_152_cvector;
		func_519(var_151_object, var_152_cvector);
		var_151_object = var_142_object;
		if(var_142_object != null) {
			@RotatePath(var_142_object, var_143_bool);
			if(var_143_bool != 0) {
				bool var_157_bool;
				func_517(var_157_bool);
				@FollowPath(var_142_object, var_157_bool, var_143_bool);
				var_142_object = null;
				if(var_143_bool != 0) {
					TaskCall(2);
					func_689();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_142_object = null;
	}
	
}


void func_1458(bool var_2_bool, bool var_196_bool, object var_197_object, float var_198_float, float var_199_float, bool var_200_bool, bool var_201_bool)
{
	object var_209_object;
	func_2145(var_209_object);
	@SetTimer(1, 5);
	bool var_207_bool;
	@CanSee(var_207_bool, var_209_object);
	if(var_207_bool != 0) {
		var_2_bool = true;
		object var_213_object;
		var_197_object = var_213_object;
		func_2040(var_213_object);
	} else {
		var_2_bool = false;
	}
	bool var_220_bool; object var_221_object;
	func_1743(var_220_bool, var_221_object);
	if(var_220_bool != 0) {
		object var_224_object;
		func_2092(var_224_object);
		@SendPlayerEnemy(var_221_object, var_224_object);
	}
	bool var_225_bool; object var_226_object; float var_227_float; float var_228_float; bool var_229_bool; bool var_230_bool;
	var_197_object = var_226_object;
	var_198_float = var_227_float;
	var_199_float = var_228_float;
	var_200_bool = var_229_bool;
	var_201_bool = var_230_bool;
	bool var_208_bool;
	func_1563(var_207_bool, var_208_bool, var_225_bool, var_226_object, var_227_float, var_228_float, var_229_bool, var_230_bool);
	var_225_bool = var_208_bool;
	if(var_2_bool != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_208_bool = var_196_bool;
	
}


// @pe
void func_2501(object var_25_object)
{
	object var_26_object;
	var_25_object = var_26_object;
	func_2743();
}


// @pe
void func_2507(object var_15_object)
{
	bool var_16_bool; object var_17_object;
	func_1743(var_16_bool, var_17_object);
	if(var_16_bool != 0) {
		object var_20_object;
		func_2092(var_20_object);
		@ReportReputationChange(var_17_object, var_20_object, -0.05);
	}
}


void func_2520(bool var_13_bool, string var_14_string)
{
	object var_16_object;
	if(var_14_string == "heal") {
		@FindActor(var_16_object, "player");
		bool var_20_bool; object var_21_object;
		var_16_object = var_21_object;
		func_2755(var_21_object);
		var_20_bool = var_13_bool;
	EMIT "Stack[-1] = 0";
	}
	var_13_bool = false;
}


void func_2010(object var_18_object, cvector var_21_cvector, cvector var_22_cvector)
{
	object var_25_object;
	@GetScene(var_25_object);
	object var_26_object;
	@AddActorByType(var_26_object, "scripted", var_25_object, var_21_cvector, var_22_cvector, "blood_dir.xml");
	object var_29_object;
	var_18_object = var_29_object;
	func_1898(var_29_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2536(string var_22_string)
{
	object var_24_object;
	if(var_22_string == "heal") {
		@FindActor(var_24_object, "player");
		object var_28_object;
		var_24_object = var_28_object;
		func_2758();
		var_24_object = null;
	}
}


void func_2024(object var_299_object)
{
	cvector var_303_cvector;
	var_299_object->GetPosition(var_303_cvector);
	cvector var_304_cvector;
	@GetPosition(var_304_cvector);
	cvector var_305_cvector = var_303_cvector - var_304_cvector;
	var_306_float = GetByIndex(var_305_cvector, 0);
	var_307_float = GetByIndex(var_305_cvector, 2);
	@RotateAsync(var_306_float, var_307_float);
}


void func_491(float var_147_float)
{
	float var_149_float;
	@GetCameraFarDistance(var_149_float);
	var_149_float = var_147_float;
}


void func_1521(bool var_2_bool)
{
	@KillTimer(1);
	if(var_2_bool != 0) {
		var_2_bool = false;
		@UnlookAsync("head");
	}
	func_1687(var_12_object);
}


void func_2035(bool var_128_bool)
{
	bool var_130_bool;
	@IsLoaded(var_130_bool);
	var_130_bool = var_128_bool;
}


void func_2549(string var_181_string, int var_182_int)
{
	string var_184_string = "idle";
	if(var_182_int != 0)
		var_184_string += var_182_int;
	var_184_string = var_181_string;
}


void func_503(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_2040(object var_16_object)
{
	float var_19_float;
	var_16_object->GetEyesHeight(var_19_float);
	cvector var_20_cvector = [0.0, 0.0, 0.0];
	var_21_float = GetByIndex(var_20_cvector, 1);
	var_19_float = var_21_float;
	SetByIndex(var_20_cvector, 1) = var_21_float;
	@LookAsync(var_16_object, "head", var_20_cvector);
}


void func_1018(bool var_1_bool, bool var_2_bool, object var_4_object)
{
	bool var_153_bool; bool var_154_bool; cvector var_155_cvector;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_153_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_153_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_154_bool, ("attack" + (var_2_bool + 1)));
			if(!var_154_bool) //@nz
				break;
			var_2_bool += 1;
		}
		@GetAnimationOffset(var_155_cvector, "all", "bjump");
		var_169_float = GetByIndex(var_155_cvector, 2);
		var_4_object = -var_169_float;

	}
}


void func_2556(int var_175_int)
{
	int var_178_int; bool var_179_bool;
	var_178_int = 0;
	
	for(;;) {
		string var_181_string; int var_182_int;
		var_178_int = var_182_int;
		func_2549(var_181_string, var_182_int);
		@HasAnimation(var_179_bool, "all", var_181_string);
		if(!var_179_bool) //@nz
			break;
		var_178_int += 1;
	}
	var_178_int = var_175_int;
}


void func_510(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


