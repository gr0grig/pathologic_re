// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, bool var_2_bool, bool var_3_bool)
	{
		object var_6_object; object var_7_object;
		@GetSceneByName(var_6_object, "house_petr");
		@Trigger(var_6_object, "nopetr");
		@GetSceneByName(var_6_object, "cot_maria");
		@Trigger(var_6_object, "nomaria");
		bool var_12_bool;
		func_255(var_12_bool);
		if(var_12_bool != 0) {
			@Trace("bad petr init");
			var_2_bool = true;
		} else {
			@GetSceneByName(var_7_object, "shouse1_kabak");
			object var_42_object; object var_43_object;
			var_7_object = var_43_object;
			func_229(var_42_object, var_43_object, "pt_b2q03_petr", "NPC_Petr", "b2q03_petr.xml");
			var_0_object = var_42_object;
			var_7_object = null;
		}
		func_199(2);
	
	}
	EMIT "Stack[-2] = 0";

	void OnGameTime(object var_0_object, object var_1_object, bool var_2_bool, bool var_3_bool, int var_4_int, float var_5_float)
	{
		object var_7_object;
		if(var_4_int == 1) {
			bool var_10_bool;
			func_255(var_10_bool);
			if(var_10_bool != 0) {
				@Trace("bad maria init");
				var_3_bool = true;
			} else {
				@GetSceneByName(var_7_object, "shouse1_kabak");
				object var_18_object; object var_19_object;
				var_7_object = var_19_object;
				func_229(var_18_object, var_19_object, "pt_b2q03_maria", "NPC_Maria", "b2q03_maria.xml");
				var_1_object = var_18_object;
				var_7_object = null;
		}
			int var_36_int; float var_37_float;
			var_4_int = var_36_int;
			var_5_float = var_37_float;
			func_218();
		}
		goto Label_71;
	
	Label_71:
	
	}

	void OnTrigger(object var_0_object, object var_1_object, bool var_2_bool, bool var_3_bool, string var_4_string)
	{
		float var_8_float; object var_9_object; object var_10_object;
		@Trace(var_4_string);
		if(var_4_string == "place_maria") {
			int var_13_int;
			func_247(var_13_int);
			if(var_13_int < 22) {
				@GetGameTime(var_8_float);
				@SetTimeEvent(1, (var_8_float + 0.5));
			}
		} else if(var_4_string == "kabak_unload") {
				if(var_2_bool != 0) {
					var_2_bool = false;
					@GetSceneByName(var_9_object, "shouse1_kabak");
					object var_26_object; object var_27_object;
					var_9_object = var_27_object;
					func_229(var_26_object, var_27_object, "pt_b2q03_petr", "NPC_Petr", "b2q03_petr.xml");
					var_0_object = var_26_object;
					var_9_object = null;
				}
				if(var_3_bool != 0) {
					var_3_bool = false;
					@GetSceneByName(var_10_object, "shouse1_kabak");
					object var_46_object; object var_47_object;
					var_10_object = var_47_object;
					func_229(var_46_object, var_47_object, "pt_b2q03_maria", "NPC_Maria", "b2q03_maria.xml");
					var_1_object = var_46_object;
					var_10_object = null;
				}
		}

	
		if(var_4_string == "fail") {
			func_151();
		} else if(var_4_string == "completed") {
			func_159();
		}
	}

}


void func_159(void)
{
	@SetVariable("b2q03", 1000);
	func_167(var_9_object, var_10_object);
}


void func_223(object var_35_object)
{
	object var_37_object;
	@self(var_37_object);
	var_37_object = var_35_object;
}
EMIT "Stack[-1] = 0";


void func_229(object var_42_object, object var_43_object, string var_44_string, string var_45_string, string var_46_string)
{
	bool var_51_bool; cvector var_52_cvector; cvector var_53_cvector;
	var_43_object->GetLocator(var_44_string, var_51_bool, var_52_cvector, var_53_cvector);
	if(!var_51_bool) //@nz
		@Trace(("Locator " + var_44_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_45_string, var_43_object, var_52_cvector, var_53_cvector, var_46_string);
	object var_54_object = var_42_object;
	
}
EMIT "Stack[-1] = 0";


void func_167(object var_0_object, object var_1_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	object var_26_object;
	@GetSceneByName(var_26_object, "house_petr");
	@Trigger(var_26_object, "petr");
	@GetSceneByName(var_26_object, "cot_maria");
	@Trigger(var_26_object, "maria");
	object var_35_object;
	func_223(var_35_object);
	@RemoveActor(var_35_object);
}
EMIT "Stack[-1] = 0";


void func_199(int var_19_int)
{
	float var_20_float; float var_21_float;
	@GetGameTime(var_21_float);
	if(var_21_float >= (var_19_int * 24)) {
		func_167(var_20_float, var_21_float);
	} else {
		@SetTimeEvent(0, (var_19_int * 24));
		@Hold();
	}
	
}


void func_140(void)
{
	int var_39_int;
	@GetVariable("b2q03", var_39_int);
	if(var_39_int != 1000)
		func_151();
}


void func_247(int var_13_int)
{
	float var_15_float;
	@GetGameTime(var_15_float);
	int var_16_int;
	var_15_float = var_16_int;
	var_13_int = var_16_int % 24;
}


void func_151(void)
{
	@SetVariable("b2q03", -1);
	func_167(var_9_object, var_10_object);
}


// @pe
void func_218(void)
{
	func_140();
}


void func_255(bool var_12_bool)
{
	object var_15_object;
	@GetActiveScene(var_15_object);
	object var_16_object;
	@GetSceneByName(var_16_object, "shouse1_kabak");
	var_12_bool = var_16_object == var_15_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


