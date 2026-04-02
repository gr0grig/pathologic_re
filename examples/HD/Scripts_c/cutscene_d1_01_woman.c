// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		if(1 != 0) {
			func_1636();
			if(var_13_cvector == 19229) {
				func_132(var_14_bool, "Neutral");
				var_0_object->SetMessage(518110); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518111, -1, 19230); //@t
				var_0_object->AddReply(534585, -1, 36223); //@t
				return 0;
			}
			var_3_string = true;
			bool var_43_bool;
			func_2225(var_43_bool);
			if(var_43_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9b";
	
	}

}


task task_2
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_2188(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			object var_20_object;
			var_13_bool = var_20_object;
			func_2191(var_20_object);
		}
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		func_2243();
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, float var_7_float, float var_8_float, bool var_9_bool, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, string var_6_string, bool var_7_bool, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
	}

}


task task_3
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_2188(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_597();
			object var_22_object;
			var_13_bool = var_22_object;
			func_2191(var_22_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_16_object;
		var_13_bool = var_16_object;
		func_2076(var_16_object);
		int var_25_int; object var_26_object;
		var_13_bool = var_26_object;
		func_2142(var_25_int, var_26_object);
		int var_15_int;
		var_25_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_597();
			object var_65_object;
			var_13_bool = var_65_object;
			func_2152(var_65_object);
		}
	}

	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		int var_17_int;
		object var_19_object;
		var_13_object = var_19_object;
		object var_20_object;
		var_14_cvector = var_20_object;
		bool var_21_bool;
		var_15_bool = var_21_bool;
		func_2240(var_21_bool);
		bool var_18_bool;
		if(var_18_bool != 0) {
			int var_22_int; object var_23_object; bool var_24_bool;
			var_13_object = var_23_object;
			var_15_bool = var_24_bool;
			func_2160(var_23_object, var_24_bool);
			var_22_int = var_17_int;
			if(var_17_int > 0) {
				if(var_17_int > 1)
					func_597();
				object var_63_object;
				var_13_object = var_63_object;
				func_2170(var_63_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_2178(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_597();
			object var_22_object;
			var_13_bool = var_22_object;
			func_2181();
		}
	}

	void OnMessage(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, string var_6_string, bool var_7_bool, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		int var_16_int;
		object var_18_object;
		var_13_cvector = var_18_object;
		string var_19_string;
		var_14_bool = var_19_string;
		bool var_17_bool;
		func_1990(var_17_bool, var_18_object, var_19_string);
		if(var_17_bool != 0) {
			func_597();
			object var_32_object; string var_33_string;
			var_13_cvector = var_32_object;
			var_14_bool = var_33_string;
			func_2022(var_32_object, var_33_string);
		} else {
			int var_43_int; string var_44_string; object var_45_object;
			var_14_bool = var_44_string;
			var_13_cvector = var_45_object;
			func_2183(var_45_object);
			var_43_int = var_16_int;
			if(!(var_16_int > 0)) goto Label_480;
			if(var_16_int > 1)
				func_597();
			string var_50_string; object var_51_object;
			var_14_bool = var_50_string;
			var_13_cvector = var_51_object;
			func_2186();
		}
	Label_480:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, string var_5_string, bool var_6_bool, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		string var_15_string;
		var_13_bool = var_15_string;
		bool var_14_bool;
		func_2089(var_14_bool, var_15_string);
		if(var_14_bool != 0) {
			func_597();
			string var_23_string;
			var_13_bool = var_23_string;
			func_2105(var_23_string);
		}
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		func_597();
		func_2243();
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_15_object;
		var_13_bool = var_15_object;
		bool var_14_bool;
		func_2047(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_597();
			object var_26_object;
			var_13_bool = var_26_object;
			func_2070(var_26_object);
		}
	}

}


maintask task_4
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		@SensePlayerOnly(true);
		func_2227();
		func_616();
	
		for(;;) {
			func_789(var_11_cvector, var_12_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		int var_14_int;
		object var_17_object;
		var_13_bool = var_17_object;
		func_2188(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_860(var_14_int, var_15_int);
			object var_22_object;
			var_13_bool = var_22_object;
			func_2191(var_22_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		int var_14_int;
		object var_16_object;
		var_13_bool = var_16_object;
		func_2076(var_16_object);
		int var_25_int; object var_26_object;
		var_13_bool = var_26_object;
		func_2142(var_25_int, var_26_object);
		int var_15_int;
		var_25_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_860(var_14_int, var_15_int);
			object var_65_object;
			var_13_bool = var_65_object;
			func_2152(var_65_object);
		}
	}

	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		int var_16_int; int var_17_int;
		object var_19_object;
		var_13_object = var_19_object;
		object var_20_object;
		var_14_cvector = var_20_object;
		bool var_21_bool;
		var_15_bool = var_21_bool;
		func_2240(var_21_bool);
		bool var_18_bool;
		if(var_18_bool != 0) {
			int var_22_int; object var_23_object; bool var_24_bool;
			var_13_object = var_23_object;
			var_15_bool = var_24_bool;
			func_2160(var_23_object, var_24_bool);
			var_22_int = var_17_int;
			if(var_17_int > 0) {
				if(var_17_int > 1)
					func_860(var_16_int, var_17_int);
				object var_63_object;
				var_13_object = var_63_object;
				func_2170(var_63_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		int var_14_int;
		object var_17_object;
		var_13_bool = var_17_object;
		func_2178(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_860(var_14_int, var_15_int);
			object var_22_object;
			var_13_bool = var_22_object;
			func_2181();
		}
	}

	void OnMessage(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, string var_8_string, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		int var_15_int; int var_16_int;
		object var_18_object;
		var_13_cvector = var_18_object;
		string var_19_string;
		var_14_bool = var_19_string;
		bool var_17_bool;
		func_1990(var_17_bool, var_18_object, var_19_string);
		if(var_17_bool != 0) {
			func_860(var_15_int, var_16_int);
			object var_32_object; string var_33_string;
			var_13_cvector = var_32_object;
			var_14_bool = var_33_string;
			func_2022(var_32_object, var_33_string);
		} else {
			int var_43_int; string var_44_string; object var_45_object;
			var_14_bool = var_44_string;
			var_13_cvector = var_45_object;
			func_2183(var_45_object);
			var_43_int = var_16_int;
			if(!(var_16_int > 0)) goto Label_753;
			if(var_16_int > 1)
				func_860(var_15_int, var_16_int);
			string var_50_string; object var_51_object;
			var_14_bool = var_50_string;
			var_13_cvector = var_51_object;
			func_2186();
		}
	Label_753:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		bool var_14_bool; string var_15_string;
		func_2089(var_14_bool, var_15_string);
		if(var_14_bool != 0) {
			func_860(var_12_cvector, var_15_string);
			string var_23_string;
			var_13_bool = var_23_string;
			func_2105(var_23_string);
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		bool var_14_bool; object var_15_object;
		func_2047(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_860(var_12_cvector, var_15_object);
			object var_26_object;
			var_13_bool = var_26_object;
			func_2070(var_26_object);
		}
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		func_860(var_11_cvector, var_12_bool);
		func_2243();
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		@RequestClearPath(var_13_bool);
	}

	void OnActorStuck(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		@Stop();
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		func_860(var_12_cvector, var_13_bool);
		object var_14_object;
		var_13_bool = var_14_object;
		func_1966();
	}

}


task task_5
{
	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		func_1074(var_12_bool);
		func_2243();
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, int var_10_int, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		cvector var_18_cvector; float var_19_float; cvector var_20_cvector; float var_21_float;
		if(var_13_bool != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_18_cvector);
			@FindDirLength(var_19_float, var_18_cvector, 7000.0);
			cvector var_27_cvector;
			func_919(var_21_float, var_27_cvector, 1.7453294);
			var_27_cvector = var_20_cvector;
			var_21_float = var_20_cvector | var_20_cvector;
			bool var_57_bool = false;
			if(var_21_float >= 2500.0) {
				bool var_60_bool;
				var_64_bool = var_21_float >= ((var_19_float * var_19_float) * 2.25);
				if(var_64_bool != 1) {
					bool var_65_bool;
					func_1090(true, var_65_bool);
					if(var_65_bool != 1)
						var_60_bool = false;
				}
				if(var_60_bool != 0)
					var_57_bool = true;
			}
			if(var_57_bool == 0) goto Label_1073;
			@Stop();
			cvector var_85_cvector;
			func_1293(var_85_cvector);
			var_1_object = var_85_cvector + var_20_cvector;
		}
	Label_1073:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		func_1074(var_13_bool);
		object var_15_object;
		var_13_bool = var_15_object;
		func_1966();
	}

}


task task_6
{
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, int var_13_int)
	{
		cvector var_18_cvector; float var_19_float; cvector var_20_cvector; float var_21_float;
		if(var_13_int != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_18_cvector);
			@FindDirLength(var_19_float, var_18_cvector, 7000.0);
			cvector var_27_cvector;
			func_1106(var_21_float, var_27_cvector, 1.7453294);
			var_27_cvector = var_20_cvector;
			var_21_float = var_20_cvector | var_20_cvector;
			bool var_57_bool = false;
			if(var_21_float >= 2500.0) {
				bool var_60_bool;
				var_64_bool = var_21_float >= ((var_19_float * var_19_float) * 2.25);
				if(var_64_bool != 1) {
					bool var_65_bool;
					func_1277(true, var_65_bool);
					if(var_65_bool != 1)
						var_60_bool = false;
				}
				if(var_60_bool != 0)
					var_57_bool = true;
			}
			if(var_57_bool == 0) goto Label_1260;
			@Stop();
			cvector var_85_cvector;
			func_1293(var_85_cvector);
			var_1_object = var_85_cvector + var_20_cvector;
		}
	Label_1260:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object)
	{
		func_1261(var_13_object);
		object var_15_object;
		var_13_object = var_15_object;
		func_1966();
	}

}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, string var_14_string)
{
	float var_16_float;
	if(var_14_string == "health") {
		@GetProperty("health", var_16_float);
		if(var_16_float <= 0)
			@SignalDeath(var_13_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	func_1945(var_14_object);
}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, int var_14_int, float var_15_float, float var_16_float)
{
	object var_17_object;
	var_13_object = var_17_object;
	int var_18_int;
	var_14_int = var_18_int;
	float var_19_float;
	var_15_float = var_19_float;
	func_1431(var_17_object, var_18_int, var_19_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, int var_14_int, float var_15_float, float var_16_float, cvector var_17_cvector, cvector var_18_cvector)
{
	object var_19_object;
	var_13_object = var_19_object;
	int var_20_int;
	var_14_int = var_20_int;
	float var_21_float;
	var_15_float = var_21_float;
	cvector var_22_cvector;
	var_17_cvector = var_22_cvector;
	cvector var_23_cvector;
	var_18_cvector = var_23_cvector;
	func_1499(var_21_float, var_22_cvector, var_23_cvector);
}


void func_0(object var_0_object, int var_24_int, object var_25_object)
{
	var_0_object = var_25_object;
	bool var_35_bool; object var_36_object;
	var_25_object = var_36_object;
	func_1518(var_35_bool, var_36_object, 70.0);
	if(!var_35_bool) { //@nz
		var_24_int = -2;
		return 8;
	}
	object var_31_object;
	@CreateDialog(var_31_object);
	int var_83_int;
	func_2219(var_83_int);
	var_31_object->SetNPCName(var_83_int);
	int var_84_int;
	func_2217(var_84_int);
	var_31_object->SetNPCDescription(var_84_int);
	string var_85_string;
	func_2221(var_85_string);
	var_31_object->SetPhoto(var_85_string);
	string var_86_string;
	func_2223(var_86_string);
	var_31_object->SetPhoto2(var_86_string);
	int var_87_int;
	func_1717(var_87_int);
	var_31_object->SetPlayerName(var_87_int);
	bool var_32_bool;
	@IsOverrideActive(var_32_bool);
	if(var_32_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	@DoDialog(var_31_object);
	object var_96_object; object var_97_object;
	var_25_object = var_96_object;
	var_31_object = var_97_object;
	TaskCall(1);
	func_74(var_98_object, var_99_object, var_100_string, var_101_bool, var_96_object, var_97_object);
	TaskReturn();
	bool var_34_bool;
	var_31_object->IsDialogEnd(var_34_bool);
	
	for(;;) {
		var_145_bool = !var_34_bool; //@nz
		if(var_145_bool == 0) goto Label_63;
		@sync();
		var_31_object->IsDialogEnd(var_34_bool);
	}
	
Label_63:
	object var_146_object;
	var_25_object = var_146_object;
	func_1587();
	@StopDialog(var_31_object);
	var_31_object->GetReturnValue(-1);
	int var_33_int = var_24_int;
}
EMIT "Stack[-4] = 0";


void func_516(void)
{
	int var_171_int; int var_172_int; bool var_173_bool; float var_174_float; bool var_175_bool;
	@WaitForAnimEnd();
	bool var_176_bool;
	func_1513(var_176_bool);
	if(!var_176_bool) //@nz
		return 14;
	int var_178_int;
	func_2125(var_178_int);
	int var_169_int;
	var_178_int = var_169_int;
	int var_170_int = 0;
	
	for(;;) {
		bool var_191_bool = false;
		if(var_170_int < 5) {
			bool var_194_bool;
			func_1513(var_194_bool);
			if(var_194_bool != 0)
				var_191_bool = true;
		}
		if(var_191_bool != 0) {
			@irand(var_171_int, 3);
			if(var_171_int == 0) {
				if(var_169_int == 0) goto Label_563;
				@irand(var_172_int, var_169_int);
				string var_200_string; int var_201_int;
				var_172_int = var_201_int;
				func_2118(var_200_string, var_201_int);
				@PlayAnimation("all", var_200_string);
				@WaitForAnimEnd(var_173_bool);
				if(!var_173_bool) { //@nz
				} else {
			} else {
			if(var_171_int == 1) {
				@rand(var_174_float, 4);
				@Sleep((var_174_float + 1), var_175_bool);
				if(!var_175_bool) { //@nz
					goto Label_592;
				}
			} else if(var_170_int != 0) {
				goto Label_592;
			}
			}
					bool var_203_bool;
					func_595(var_203_bool);
					var_204_bool = !var_203_bool; //@nz
					if(var_204_bool == 0) goto Label_587;
			}
		}
	Label_592:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_587:
		@ResetAAS();
		var_170_int += 1;
	}
	
}


// @pe
void func_2070(object var_26_object)
{
	object var_27_object;
	var_26_object = var_27_object;
	func_2200();
}


// @pe
void func_2076(object var_16_object)
{
	bool var_17_bool; object var_18_object;
	func_1305(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		object var_21_object;
		func_1684(var_21_object);
		@ReportReputationChange(var_18_object, var_21_object, -0.05);
	}
}


void func_2089(bool var_14_bool, string var_15_string)
{
	object var_17_object;
	if(var_15_string == "heal") {
		@FindActor(var_17_object, "player");
		bool var_21_bool; object var_22_object;
		var_17_object = var_22_object;
		func_2212(var_22_object);
		var_21_bool = var_14_bool;
	EMIT "Stack[-1] = 0";
	}
	var_14_bool = false;
}


void func_1074(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_1587(void)
{
	bool var_148_bool;
	@CameraSwitchToNormal(true);
	bool var_150_bool;
	func_2225(var_150_bool);
	if(var_150_bool != 0) {
	} else {
		@HasAnimationTrack(var_148_bool, "head");
		if(var_148_bool == 0) goto Label_1604;
		@UnlookAsync("head");
	}
Label_1604:
	
}


void func_2105(string var_23_string)
{
	object var_25_object;
	if(var_23_string == "heal") {
		@FindActor(var_25_object, "player");
		object var_29_object;
		var_25_object = var_29_object;
		func_2215();
		var_25_object = null;
	}
}


void func_1090(object var_0_object, bool var_65_bool)
{
	cvector var_68_cvector;
	@GetDirection(var_68_cvector);
	cvector var_70_cvector;
	func_1298(var_70_cvector, var_0_object);
	cvector var_69_cvector;
	var_70_cvector = var_69_cvector;
	float var_76_float; cvector var_77_cvector; cvector var_78_cvector;
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_1700(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= -0.34202012;
}


void func_1605(string var_129_string)
{
	bool var_133_bool; float var_134_float; float var_135_float;
	@lshHasAnimation(var_133_bool, var_129_string);
	if(var_133_bool != 0) {
		@lshGetAnimTimes(var_129_string, var_134_float, var_135_float);
		@lshPlayAnimation(var_134_float, var_135_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_129_string);
	}
	
}


void func_2118(string var_184_string, int var_185_int)
{
	string var_187_string = "idle";
	if(var_185_int != 0)
		var_187_string += var_185_int;
	var_187_string = var_184_string;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_96_object, object var_97_object)
{
	var_0_object = var_97_object;
	var_1_object = var_96_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_97_object, "Neutral");
		var_0_object->SetMessage(518110); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518111, -1, 19230); //@t
		var_0_object->AddReply(534585, -1, 36223); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_127_bool;
	func_2225(var_127_bool);
	if(var_127_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1605(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_131;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_131:
		return 0;

	}
	
}


void func_2125(int var_178_int)
{
	int var_181_int; bool var_182_bool;
	var_181_int = 0;
	
	for(;;) {
		string var_184_string; int var_185_int;
		var_181_int = var_185_int;
		func_2118(var_184_string, var_185_int);
		@HasAnimation(var_182_bool, "all", var_184_string);
		if(!var_182_bool) //@nz
			break;
		var_181_int += 1;
	}
	var_181_int = var_178_int;
}


void func_1106(object var_0_object, cvector var_27_cvector, float var_28_float)
{
	cvector var_35_cvector;
	@GetPosition(var_35_cvector);
	cvector var_36_cvector;
	var_0_object->GetPosition(var_36_cvector); //@t
	cvector var_37_cvector;
	@GetDirection(var_37_cvector);
	cvector var_41_cvector;
	cvector var_43_cvector;
	func_1690(var_43_cvector, (var_35_cvector - var_36_cvector));
	func_1690(var_41_cvector, (var_43_cvector + (var_37_cvector * 0.75)));
	cvector var_38_cvector;
	var_41_cvector = var_38_cvector;
	cvector var_39_cvector;
	float var_40_float;
	@FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, 32, 7000.0);
	if((var_40_float - 100) < 0)
		var_40_float = 0;
	var_27_cvector = var_39_cvector * var_40_float;
}


void func_595(bool var_203_bool)
{
	var_203_bool = true;
}


void func_1621(string var_107_string, bool var_108_bool)
{
	bool var_114_bool; float var_115_float; float var_116_float;
	@lshHasAnimation(var_114_bool, var_107_string);
	if(var_114_bool != 0) {
		@lshGetAnimTimes(var_107_string, var_115_float, var_116_float);
		@lshPlayAnimation(var_115_float, var_116_float, var_108_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_107_string);
	}
	
}


void func_597(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2142(int var_25_int, object var_26_object)
{
	object var_28_object;
	var_26_object = var_28_object;
	bool var_27_bool;
	func_1363(var_27_bool, var_28_object);
	if(var_27_bool != 0)
		var_25_int = 2;
	else
		var_25_int = 0;
	
}


void func_1636(void)
{
	bool var_16_bool;
	func_2225(var_16_bool);
	if(var_16_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_2152(object var_65_object)
{
	object var_66_object;
	var_65_object = var_66_object;
	TaskCall(5);
	func_884(var_66_object);
	TaskReturn();
}


void func_616(void)
{
	bool var_128_bool;
	func_1513(var_128_bool);
	if(!var_128_bool) //@nz
		func_2243();
}


void func_1643(string var_39_string)
{
	bool var_48_bool; int var_49_int; bool var_50_bool; int var_51_int; bool var_52_bool; float var_53_float; cvector var_54_cvector; cvector var_55_cvector;
	@IsExisting3DSound(var_48_bool, var_39_string);
	if(!var_48_bool) { //@nz
		var_49_int = 0;

		for(;;) {
			@IsExisting3DSound(var_50_bool, (var_39_string + (var_49_int + 1)));
			if(!var_50_bool) { //@nz
				break;
			Label_1663:
				@irand(var_51_int, var_49_int);
				var_39_string += (var_51_int + 1);
	}
			@Is3DSoundLoaded(var_52_bool, var_39_string);
			if(var_52_bool != 0) {
				@GetEyesHeight(var_53_float);
				@GetDirection(var_54_cvector);
				var_55_cvector = var_54_cvector * 50;
				var_66_float = GetByIndex(var_55_cvector, 1);
				SetByIndex(var_55_cvector, 1) = (var_66_float + var_53_float);
				@PlayGlobalSound(var_39_string, var_55_cvector);
			}
		}
		var_49_int += 1;
	}
	var_61_bool = !var_49_int; //@nz
	if(var_61_bool == 0) goto Label_1663;
}


// @pe
void func_2160(int var_22_int, object var_23_object)
{
	object var_26_object;
	var_23_object = var_26_object;
	bool var_25_bool;
	func_1363(var_25_bool, var_26_object);
	if(var_25_bool != 0)
		var_22_int = 2;
	else
		var_22_int = 0;
	
}


void func_1136(object var_0_object, object var_1_object, object var_2_object, object var_64_object)
{
	float var_74_float; cvector var_76_cvector; float var_77_float;
	cvector var_78_cvector;
	func_1106(var_77_float, var_78_cvector, 1.7453294);
	cvector var_73_cvector;
	var_78_cvector = var_73_cvector;
	if((var_73_cvector | var_73_cvector) < 2500.0) {
		cvector var_110_cvector;
		func_1106(var_77_float, var_110_cvector, 2.6179938);
		var_110_cvector = var_73_cvector;
		var_74_float = var_73_cvector | var_73_cvector;
		if(var_74_float < 2500.0) {
			var_115_float = sqrt(var_74_float);
			@Trace("Can't retreat, distance: " + var_115_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_118_float = GetByIndex(var_73_cvector, 0);
	var_119_float = GetByIndex(var_73_cvector, 2);
	@Rotate(var_118_float, var_119_float);
	cvector var_120_cvector;
	func_1293(var_120_cvector);
	@SetTimer(120, 0.5);
	
Label_1178:
	bool var_75_bool;
	@MovePoint((var_120_cvector + var_73_cvector), 1, var_75_bool);
	if(var_75_bool != 0) {
		if(var_64_object == null) {
			goto Label_1208;
		EMIT "GOTO 0x4b6";

		Label_1208:
			for(;;) {
				return 10;
		}
			cvector var_128_cvector;
			func_1106(var_77_float, var_128_cvector, 2.6179938);
			var_128_cvector = var_76_cvector;
			if((var_76_cvector | var_76_cvector) >= 2500.0) {
				cvector var_132_cvector;
				func_1293(var_132_cvector);
				var_1_object = var_132_cvector + var_76_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1178; //@nz

	}
}


// @pe
void func_2170(object var_63_object)
{
	object var_64_object;
	var_63_object = var_64_object;
	TaskCall(6);
	func_1136(var_65_object, var_66_cvector, var_67_bool, var_64_object);
	TaskReturn();
}


// @pe
void func_2178(int var_16_int)
{
	var_16_int = 0;
}


// @pe
void func_132(object var_2_object, string var_103_string)
{
	bool var_104_bool;
	func_2225(var_104_bool);
	if(!var_104_bool) //@nz
		return 0;
	if(var_103_string == var_2_object)
		return 0;
	string var_107_string; bool var_108_bool;
	var_103_string = var_107_string;
	if(var_103_string == "")
		var_108_bool = false;
	else
		var_108_bool = true;
	func_1621(var_107_string, var_108_bool);
	var_2_object = var_103_string;
	
}


// @pe
void func_2181(void)
{
}


// @pe
void func_2183(int var_43_int)
{
	var_43_int = 0;
}


// @pe
void func_2186(void)
{
}


// @pe
void func_2188(int var_16_int)
{
	var_16_int = 2;
}


// @pe
void func_2191(object var_22_object)
{
	object var_23_object;
	var_22_object = var_23_object;
	func_2232(var_23_object);
}


void func_1684(object var_132_object)
{
	object var_134_object;
	@self(var_134_object);
	var_134_object = var_132_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2197(bool var_19_bool)
{
	var_19_bool = false;
}


// @pe
void func_2200(void)
{
}


void func_1690(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_54_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_54_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_54_float;
}


// @pe
void func_2202(bool var_26_bool)
{
	var_26_bool = false;
}


// @pe
void func_2205(void)
{
}


// @pe
void func_2207(bool var_30_bool)
{
	var_30_bool = false;
}


// @pe
void func_2210(void)
{
}


// @pe
void func_1700(float var_76_float, cvector var_77_cvector, cvector var_78_cvector)
{
	var_83_float = sqrt((var_77_cvector | var_77_cvector) * (var_78_cvector | var_78_cvector));
	var_76_float = (var_77_cvector | var_78_cvector) / var_83_float;
}


// @pe
void func_2212(bool var_21_bool)
{
	var_21_bool = false;
}


// @pe
void func_2215(void)
{
}


void func_2217(int var_84_int)
{
	var_84_int = 515567;
}


void func_2219(int var_83_int)
{
	var_83_int = 503352;
}


void func_1708(int var_23_int)
{
	float var_25_float;
	@GetGameTime(var_25_float);
	var_23_int = 1 + (var_25_float / 24);
}


void func_2221(string var_85_string)
{
	var_85_string = "ui/NPC_Citizen3.png";
}


void func_2223(string var_86_string)
{
	var_86_string = "ui/NPC_Citizen3_b.png";
}


void func_2225(bool var_78_bool)
{
	var_78_bool = false;
}


void func_2227(void)
{
	func_1765(true);
}


void func_1717(int var_87_int)
{
	int var_89_int;
	@GetVariable("branch", var_89_int);
	if(var_89_int == 0) {
		var_87_int = 1;
		return 2;
	EMIT "GOTO 0x6c4";
	}
	if(var_89_int == 1) {
		var_87_int = 2;
		return 2;
	}
	var_87_int = 3;
}


// @pe
void func_2232(object var_23_object)
{
	object var_25_object;
	var_23_object = var_25_object;
	TaskCall(0);
	int var_24_int;
	func_0(var_26_object, var_24_int, var_25_object);
	TaskReturn();
}


// @pe
void func_2240(bool var_18_bool)
{
	var_18_bool = true;
}


void func_2243(void)
{
	object var_132_object;
	func_1684(var_132_object);
	@RemoveActor(var_132_object);
	@Hold();
}


// @pe
void func_196(object var_15_object)
{
	object var_16_object;
	var_15_object = var_16_object;
	func_229(var_16_object);
	object var_96_object;
	var_15_object = var_96_object;
	func_2251();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1734(int var_20_int, int var_21_int)
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
	func_1940(var_41_int, "Money");
	bool var_34_bool;
	@AddItem(var_34_bool, var_41_int, 0, var_33_int);
	
}


// @pe
void func_2251(void)
{
}


void func_229(object var_16_object)
{
	cvector var_27_cvector; cvector var_28_cvector; cvector var_29_cvector; cvector var_30_cvector; string var_31_string; object var_32_object; bool var_33_bool; bool var_34_bool; float var_35_float; cvector var_36_cvector;
	if(var_16_object == null) {
		func_320("fdie");
	} else {
		var_16_object->GetPosition(var_27_cvector);
		@GetPosition(var_28_cvector);
		@GetDirection(var_29_cvector);
		var_30_cvector = var_28_cvector - var_27_cvector;
		var_70_float = GetByIndex(var_30_cvector, 0);
		var_71_float = GetByIndex(var_29_cvector, 0);
		var_73_float = GetByIndex(var_30_cvector, 2);
		var_74_float = GetByIndex(var_29_cvector, 2);
		if(((var_70_float * var_71_float) + (var_73_float * var_74_float)) >= 0)
			var_31_string = "fdie";
		else
			var_31_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_16_object = var_32_object;
		var_81_bool = IsFuncExist(var_16_object, "GetScriptProperty", 2);
		if(var_81_bool != 0) {
			var_16_object->HasScriptProperty(var_33_bool, "Owner");
			if(var_33_bool != 0) {
				var_16_object->GetScriptProperty(var_32_object, "Owner");
				if(var_32_object == null)
					var_16_object = var_32_object;
			}
		}
		var_88_bool = IsFuncExist(var_32_object, "@GetEyesHeight", 1);
		if(var_88_bool != 0) {
			var_32_object->GetEyesHeight(var_35_float);
			var_36_cvector = [0.0, 0.0, 0.0];
			var_89_float = GetByIndex(var_36_cvector, 1);
			var_35_float = var_89_float;
			SetByIndex(var_36_cvector, 1) = var_89_float;
			@LookAsync(var_16_object, "head", var_36_cvector);
			var_34_bool = true;
		} else {
			var_34_bool = false;

		}
		string var_91_string;
		var_31_string = var_91_string;
		func_1643(var_91_string);
		@PlayAnimation("all", var_31_string);
		@WaitForAnimEnd();
		if(var_34_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_31_string);
		@RemoveEnvelope();
		var_32_object = null;
	}
	
}


void func_1765(bool var_14_bool)
{
	int var_17_int; bool var_18_bool;
	if(var_14_bool != 0) {
		int var_23_int;
		func_1708(var_23_int);
		func_1734(0, (100 + (var_23_int * 100)));
		@irand(var_17_int, 8);
		if(var_17_int == 0) {
			int var_51_int;
			func_1940(var_51_int, "lemon");
			@AddItem(var_18_bool, var_51_int, 0, 1);
		} else {
				if(var_17_int == 1) {
					int var_57_int;
					func_1940(var_57_int, "rusk");
					@AddItem(var_18_bool, var_57_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_17_int == 2) {
				int var_63_int;
				func_1940(var_63_int, "hook");
				@AddItem(var_18_bool, var_63_int, 0, 1);
			} else if(var_17_int == 4) {
				int var_69_int;
				func_1940(var_69_int, "syringe");
				@AddItem(var_18_bool, var_69_int, 0, 1);
			} else if(var_17_int == 5) {
				int var_75_int;
				func_1940(var_75_int, "watch");
				@AddItem(var_18_bool, var_75_int, 0, 1);
			} else if(var_17_int == 6) {
				int var_81_int;
				func_1940(var_81_int, "razor");
				@AddItem(var_18_bool, var_81_int, 0, 1);
			}
	}
		int var_88_int;
		func_1708(var_88_int);
		func_1734(0, (50 + (var_88_int * 50)));
		@irand(var_17_int, 7);
		if(var_17_int == 0) {
			int var_94_int;
			func_1940(var_94_int, "beads");
			@AddItem(var_18_bool, var_94_int, 0, 1);
		} else if(var_17_int == 1) {
			int var_100_int;
			func_1940(var_100_int, "bracelet");
			@AddItem(var_18_bool, var_100_int, 0, 1);
		} else if(var_17_int == 2) {
			int var_106_int;
			func_1940(var_106_int, "ear_ring");
			@AddItem(var_18_bool, var_106_int, 0, 1);
		} else if(var_17_int == 3) {
			int var_112_int;
			func_1940(var_112_int, "gold_ring");
			@AddItem(var_18_bool, var_112_int, 0, 1);
		} else if(var_17_int == 4) {
			int var_118_int;
			func_1940(var_118_int, "silver_ring");
			@AddItem(var_18_bool, var_118_int, 0, 1);
		} else if(var_17_int == 5) {
			int var_124_int;
			func_1940(var_124_int, "flower");
			@AddItem(var_18_bool, var_124_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_1261(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_1277(object var_0_object, bool var_65_bool)
{
	cvector var_68_cvector;
	@GetDirection(var_68_cvector);
	cvector var_70_cvector;
	func_1298(var_70_cvector, var_0_object);
	cvector var_69_cvector;
	var_70_cvector = var_69_cvector;
	float var_76_float; cvector var_77_cvector; cvector var_78_cvector;
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_1700(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= -0.34202012;
}


void func_1293(cvector var_85_cvector)
{
	cvector var_87_cvector;
	@GetPosition(var_87_cvector);
	var_87_cvector = var_85_cvector;
}


void func_1298(cvector var_47_cvector, object var_48_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_48_object->GetPosition(var_52_cvector);
	var_47_cvector = var_52_cvector - var_51_cvector;
}


void func_789(object var_0_object, object var_1_object)
{
	float var_141_float; cvector var_142_cvector; cvector var_143_cvector; bool var_144_bool; object var_145_object; bool var_146_bool;
	@rand(var_141_float, 0.5);
	@Sleep(var_141_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_801:
				@GetPosition(var_143_cvector);
				float var_150_float;
				func_848(var_150_float);
				@GetRandomPFPointInCircle(var_142_cvector, var_143_cvector, var_150_float, var_144_bool);
				if(var_144_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_801;
			}
				var_1_object = false;
		}
		}
		goto Label_817;

	Label_817:
		object var_154_object; cvector var_155_cvector;
		var_142_cvector = var_155_cvector;
		func_878(var_154_object, var_155_cvector);
		var_154_object = var_145_object;
		if(var_145_object != null) {
			@RotatePath(var_145_object, var_146_bool);
			if(var_146_bool != 0) {
				bool var_160_bool;
				func_876(var_160_bool);
				@FollowPath(var_145_object, var_160_bool, var_146_bool);
				var_145_object = null;
				if(var_146_bool != 0) {
					TaskCall(3);
					func_516();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_145_object = null;
	}
	
}


void func_1305(bool var_21_bool, object var_22_object)
{
	bool var_24_bool;
	@IsPlayerActor(var_22_object, var_24_bool);
	var_24_bool = var_21_bool;
}


void func_1310(bool var_47_bool, object var_48_object, string var_49_string)
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


void func_1322(bool var_40_bool, object var_41_object)
{
	bool var_43_bool;
	var_41_object->IsDead(var_43_bool);
	var_43_bool = var_40_bool;
}


void func_1327(bool var_29_bool, object var_30_object)
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
		func_1322(var_40_bool, var_41_object);
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


// @pe
void func_320(string var_38_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_39_string;
	var_38_string = var_39_string;
	func_1643(var_39_string);
	@PlayAnimation("all", var_38_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_38_string);
	@RemoveEnvelope();
}


void func_848(float var_150_float)
{
	float var_152_float;
	@GetCameraFarDistance(var_152_float);
	var_152_float = var_150_float;
}


void func_1363(bool var_25_bool, object var_26_object)
{
	object var_30_object;
	var_26_object = var_30_object;
	bool var_29_bool;
	func_1327(var_29_bool, var_30_object);
	if(!var_29_bool) { //@nz
		var_25_bool = false;
		return 2;
	}
	bool var_47_bool; object var_48_object;
	func_1310(var_47_bool, var_48_object, "noaccess");
	if(!var_47_bool) { //@nz
		var_25_bool = true;
		return 2;
	}
	int var_28_int;
	var_48_object->GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == 0;
}


void func_860(object var_0_object, object var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_1387(object var_30_object)
{
	string var_44_string;
	if(var_30_object == null)
		return 14;
	bool var_38_bool;
	@IsDead(var_38_bool);
	if(var_38_bool != 0)
		return 14;
	int var_39_int;
	@GetSecondaryAnimationType(var_39_int);
	if(var_39_int < 0)
		return 14;
	cvector var_40_cvector;
	var_30_object->GetPosition(var_40_cvector);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	@GetDirection(var_42_cvector);
	cvector var_43_cvector = var_41_cvector - var_40_cvector;
	var_49_float = GetByIndex(var_43_cvector, 0);
	var_50_float = GetByIndex(var_42_cvector, 0);
	var_52_float = GetByIndex(var_43_cvector, 2);
	var_53_float = GetByIndex(var_42_cvector, 2);
	if(((var_49_float * var_50_float) + (var_52_float * var_53_float)) >= 0)
		var_44_string = "fhit";
	else
		var_44_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_44_string + "1"), (var_44_string + "2"), -10);
	
}


void func_876(bool var_160_bool)
{
	var_160_bool = false;
}


void func_878(object var_154_object, cvector var_155_cvector)
{
	object var_157_object;
	@FindShiftedPathTo(var_157_object, var_155_cvector);
	var_157_object = var_154_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_884(object var_66_object)
{
	@Face(var_66_object);
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_stay");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_off");
	@WaitForAnimEnd();
	@StopAsync();
	object var_76_object;
	func_949(var_68_cvector, var_69_bool, var_76_object, var_76_object);
}


void func_1940(int var_41_int, string var_42_string)
{
	int var_44_int;
	@GetInvItemByName(var_44_int, var_42_string);
	var_44_int = var_41_int;
}


void func_919(object var_0_object, cvector var_27_cvector, float var_28_float)
{
	cvector var_35_cvector;
	@GetPosition(var_35_cvector);
	cvector var_36_cvector;
	var_0_object->GetPosition(var_36_cvector); //@t
	cvector var_37_cvector;
	@GetDirection(var_37_cvector);
	cvector var_41_cvector;
	cvector var_43_cvector;
	func_1690(var_43_cvector, (var_35_cvector - var_36_cvector));
	func_1690(var_41_cvector, (var_43_cvector + (var_37_cvector * 0.75)));
	cvector var_38_cvector;
	var_41_cvector = var_38_cvector;
	cvector var_39_cvector;
	float var_40_float;
	@FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, 32, 7000.0);
	if((var_40_float - 100) < 0)
		var_40_float = 0;
	var_27_cvector = var_39_cvector * var_40_float;
}


void func_1431(object var_17_object, int var_18_int, float var_19_float)
{
	cvector var_29_cvector; object var_30_object; int var_31_int; bool var_32_bool; cvector var_33_cvector; cvector var_34_cvector;
	bool var_38_bool = false;
	bool var_39_bool = false;
	if(var_17_object != 0) {
		if(var_18_int != 4)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		if(var_18_int != 5)
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		cvector var_45_cvector; cvector var_46_cvector;
		cvector var_47_cvector; object var_48_object;
		var_17_object = var_48_object;
		func_1298(var_47_cvector, var_48_object);
		var_47_cvector = var_46_cvector;
		func_1690(var_45_cvector, var_46_cvector);
		var_45_cvector = var_29_cvector;
		@CreateVectorVector(var_30_object);
		var_31_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_31_int), var_32_bool, var_33_cvector, var_34_cvector);
			if(!var_32_bool) { //@nz
				break;
			Label_1493:
				var_30_object = null;
	}
			object var_107_object;
			var_17_object = var_107_object;
			func_1387(var_107_object);
		}
		if((var_34_cvector | var_29_cvector) >= 0.70710677)
			var_30_object->add(var_33_cvector);
		var_31_int += 1;
	}
	int var_35_int;
	var_30_object->size(var_35_int);
	if(var_35_int == 0) goto Label_1493;
	int var_36_int;
	@irand(var_36_int, var_35_int);
	cvector var_37_cvector;
	var_30_object->get(var_37_cvector, var_36_int);
	object var_62_object; int var_63_int; float var_64_float; cvector var_65_cvector; cvector var_66_cvector;
	var_17_object = var_62_object;
	var_18_int = var_63_int;
	var_19_float = var_64_float;
	var_37_cvector = var_65_cvector;
	var_66_cvector = -var_29_cvector;
	func_1499(var_64_float, var_65_cvector, var_66_cvector);
}


// @pe
void func_1945(object var_14_object)
{
	object var_15_object;
	var_14_object = var_15_object;
	TaskCall(2);
	func_196(var_15_object);
	TaskReturn();
}


void func_949(object var_0_object, object var_1_object, object var_2_object, object var_76_object)
{
	float var_83_float; cvector var_85_cvector; float var_86_float;
	cvector var_87_cvector;
	func_919(var_86_float, var_87_cvector, 1.7453294);
	cvector var_82_cvector;
	var_87_cvector = var_82_cvector;
	if((var_82_cvector | var_82_cvector) < 2500.0) {
		cvector var_119_cvector;
		func_919(var_86_float, var_119_cvector, 2.6179938);
		var_119_cvector = var_82_cvector;
		var_83_float = var_82_cvector | var_82_cvector;
		if(var_83_float < 2500.0) {
			var_124_float = sqrt(var_83_float);
			@Trace("Can't retreat, distance: " + var_124_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_127_float = GetByIndex(var_82_cvector, 0);
	var_128_float = GetByIndex(var_82_cvector, 2);
	@Rotate(var_127_float, var_128_float);
	cvector var_129_cvector;
	func_1293(var_129_cvector);
	@SetTimer(120, 0.5);
	
Label_991:
	bool var_84_bool;
	@MovePoint((var_129_cvector + var_82_cvector), 1, var_84_bool);
	if(var_84_bool != 0) {
		if(var_76_object == null) {
			goto Label_1021;
		EMIT "GOTO 0x3fb";

		Label_1021:
			for(;;) {
				return 10;
		}
			cvector var_137_cvector;
			func_919(var_86_float, var_137_cvector, 2.6179938);
			var_137_cvector = var_85_cvector;
			if((var_85_cvector | var_85_cvector) >= 2500.0) {
				cvector var_141_cvector;
				func_1293(var_141_cvector);
				var_1_object = var_141_cvector + var_85_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_991; //@nz

	}
}


// @pe
void func_1990(bool var_17_bool, object var_18_object, string var_19_string)
{
	if(var_19_string == "unholster") {
		bool var_22_bool; object var_23_object;
		var_18_object = var_23_object;
		func_2197(var_23_object);
		var_22_bool = var_17_bool;
		return 0;
	EMIT "GOTO 0x7e4";
	}
	if(var_19_string == "player_shot") {
		bool var_26_bool; object var_27_object;
		var_18_object = var_27_object;
		func_2202(var_27_object);
		var_26_bool = var_17_bool;
		return 0;
	EMIT "GOTO 0x7e4";
	}
	if(var_19_string == "battle") {
		bool var_30_bool; object var_31_object;
		var_18_object = var_31_object;
		func_2207(var_31_object);
		var_30_bool = var_17_bool;
		return 0;
	}
	var_17_bool = false;
}


void func_1499(object var_19_object, cvector var_22_cvector, cvector var_23_cvector)
{
	object var_26_object;
	@GetScene(var_26_object);
	object var_27_object;
	@AddActorByType(var_27_object, "scripted", var_26_object, var_22_cvector, var_23_cvector, "blood_dir.xml");
	object var_30_object;
	var_19_object = var_30_object;
	func_1387(var_30_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2022(object var_32_object, string var_33_string)
{
	if(var_33_string == "unholster") {
		object var_36_object;
		var_32_object = var_36_object;
		func_2200();
	} else if(var_33_string == "player_shot") {
			object var_39_object;
			var_32_object = var_39_object;
			func_2205();
	}
Label_2046:
	for(;;) {

	}
	
	if(!(var_33_string == "battle")) goto Label_2046;
	object var_42_object;
	var_32_object = var_42_object;
	func_2210();
}


void func_1513(bool var_128_bool)
{
	bool var_130_bool;
	@IsLoaded(var_130_bool);
	var_130_bool = var_128_bool;
}


void func_1518(bool var_35_bool, object var_36_object, float var_37_float)
{
	cvector var_48_cvector; bool var_55_bool;
	var_36_object->GetPosition(var_48_cvector);
	float var_47_float;
	var_36_object->GetEyesHeight(var_47_float);
	var_56_float = GetByIndex(var_48_cvector, 1);
	SetByIndex(var_48_cvector, 1) = (var_56_float + var_47_float);
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	@GetEyesHeight(var_47_float);
	var_57_float = GetByIndex(var_49_cvector, 1);
	SetByIndex(var_49_cvector, 1) = (var_57_float + var_47_float);
	cvector var_50_cvector = var_48_cvector - var_49_cvector;
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (float)0;
	var_60_float = sqrt(var_50_cvector | var_50_cvector);
	var_50_cvector /= var_60_float;
	cvector var_51_cvector = -var_50_cvector;
	cvector var_62_cvector;
	func_1690(var_62_cvector, (var_51_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_52_cvector = ((var_50_cvector * var_37_float) + (var_62_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_54_bool;
	@IsOverrideActive(var_54_bool);
	if(var_54_bool != 0)
		var_35_bool = false;
	@StopWorld();
	@CameraTransit((var_49_cvector + var_52_cvector), var_51_cvector, true);
	var_76_float = GetByIndex(var_52_cvector, 0);
	var_77_float = GetByIndex(var_52_cvector, 2);
	@Rotate(var_76_float, var_77_float);
	bool var_78_bool;
	func_2225(var_78_bool);
	if(var_78_bool != 0) {
	} else {
		@HasAnimationTrack(var_55_bool, "head");
		if(var_55_bool == 0) goto Label_1581;
		@LookAsyncCamera("head");
	}
Label_1581:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_35_bool = true;
	
}


void func_2047(bool var_14_bool, object var_15_object)
{
	bool var_17_bool;
	bool var_18_bool = false;
	bool var_19_bool; object var_20_object;
	var_15_object = var_20_object;
	func_2197(var_20_object);
	if(var_19_bool != 0) {
		bool var_21_bool; object var_22_object;
		func_1305(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			var_18_bool = true;
	}
	if(var_18_bool != 0) {
		var_22_object->IsWeaponHolstered(var_17_bool);
		if(!var_17_bool) //@nz
			var_14_bool = true;
	}
	var_14_bool = false;
}


