// @GLOBALS: 0:bool:

maintask task_0
{
	void init(bool var_0_bool, object var_1_object, bool var_2_bool)
	{
		var_5_bool = GlobalVars[0];
		GlobalVars[0] = true;
		object var_4_object;
		@FindActor(var_4_object, "player");
	
		while(var_4_object != null) {
			bool var_8_bool; object var_9_object;
			var_4_object = var_9_object;
			TaskCall(1);
			func_30(var_13_bool, var_8_bool, var_9_object, "pt_b4_boy_dest");
			TaskReturn();
			if(var_11_bool != 0) {
				TaskCall(2);
				func_221();
				TaskReturn();
			}
			@WaitForAnimEnd();
			@Sleep(3);
		}
	
	}
	EMIT "Stack[-1] = 0";

}


task task_1
{
	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, int var_3_int)
	{
		if(var_3_int != 0)
			return 0;
		bool var_6_bool;
		func_210(var_6_bool, var_1_object);
		if(!var_6_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object)
	{
		@RequestClearPath(var_3_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object)
	{
		func_194(var_3_object);
		object var_5_object;
		var_3_object = var_5_object;
		func_307();
	}

}


task task_2
{
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object)
{
}


void func_194(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_230(bool var_71_bool, object var_72_object, string var_73_string)
{
	var_78_bool = IsFuncExist(var_72_object, "HasProperty", 2);
	if(!var_78_bool) { //@nz
		var_71_bool = false;
		return 2;
	}
	bool var_75_bool;
	var_72_object->HasProperty(var_73_string, var_75_bool);
	var_75_bool = var_71_bool;
}


void func_283(bool var_49_bool, object var_50_object)
{
	object var_54_object;
	var_50_object = var_54_object;
	bool var_53_bool;
	func_247(var_53_bool, var_54_object);
	if(!var_53_bool) { //@nz
		var_49_bool = false;
		return 2;
	}
	bool var_71_bool; object var_72_object;
	func_230(var_71_bool, var_72_object, "noaccess");
	if(!var_71_bool) { //@nz
		var_49_bool = true;
		return 2;
	}
	int var_52_int;
	var_72_object->GetProperty("noaccess", var_52_int);
	var_49_bool = var_52_int == 0;
}


void func_242(bool var_64_bool, object var_65_object)
{
	bool var_67_bool;
	var_65_object->IsDead(var_67_bool);
	var_67_bool = var_64_bool;
}


// @pe
void func_210(bool var_47_bool, object var_48_object)
{
	object var_50_object;
	var_48_object = var_50_object;
	bool var_49_bool;
	func_283(var_49_bool, var_50_object);
	var_49_bool = var_47_bool;
}


void func_247(bool var_53_bool, object var_54_object)
{
	if(var_54_object == null) {
		var_53_bool = false;
		return 4;
	}
	bool var_60_bool = false;
	var_63_bool = IsFuncExist(var_54_object, "IsDead", 1);
	if(var_63_bool != 0) {
		bool var_64_bool; object var_65_object;
		var_54_object = var_65_object;
		func_242(var_64_bool, var_65_object);
		if(var_64_bool != 0)
			var_60_bool = true;
	}
	if(var_60_bool != 0) {
		var_53_bool = false;
		return 4;
	}
	object var_57_object;
	@GetScene(var_57_object);
	if(var_57_object == null) {
		var_53_bool = false;
		return 4;
	}
	object var_58_object;
	var_54_object->GetScene(var_58_object);
	if(var_57_object != var_58_object) {
		var_53_bool = false;
		return 4;
	}
	var_53_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_56(bool var_0_bool, object var_1_object, bool var_24_bool, object var_25_object, cvector var_26_cvector, float var_27_float, bool var_28_bool, bool var_29_bool)
{
	bool var_39_bool; object var_41_object; cvector var_42_cvector; cvector var_43_cvector; object var_46_object;
	var_0_bool = false;
	var_1_object = var_25_object;
	bool var_40_bool;
	var_29_bool = var_40_bool;
	
	for(;;) {
		bool var_47_bool; object var_48_object;
		func_210(var_47_bool, var_48_object);
		if(!var_47_bool) { //@nz
			var_24_bool = false;
			return 16;
		}
		var_48_object->GetPosition(var_42_cvector);
		@GetPosition(var_43_cvector);
		bool var_84_bool = false;
		if(var_27_float > 0) {
			if(((var_42_cvector - var_43_cvector) | (var_42_cvector - var_43_cvector)) > (var_27_float * var_27_float))
				var_84_bool = true;
		}
		if(var_84_bool != 0) {
			@Stop();
			var_24_bool = false;
			return 16;
		}
		@FindPathTo(var_46_object, var_26_cvector);
		if(var_46_object != null) {
			@Trace("path found");
			var_46_object = var_41_object;
			var_46_object = null;
		}
		if(var_41_object != null) {
			@Trace("1");
			if(var_40_bool == 0) goto Label_113;
			@Trace("2");
			var_40_bool = false;
			@RotatePath(var_41_object, var_39_bool);
			if(!var_39_bool) { //@nz
			} else {
					@Trace("3");
					@SetTimer(0, 3);
					string var_99_string;
					func_217(var_99_string);
					string var_100_string;
					func_219(var_100_string);
					@FollowPath(var_41_object, var_28_bool, var_39_bool, var_99_string, var_100_string);
					if(!var_39_bool) { //@nz
						if(var_0_bool == 0) goto Label_138;
						@Trace("4");
						var_41_object = null;
					}
				EMIT "GOTO 0x8e";

				Label_138:
					@Trace("5");
					} else {
				@Trace("6");
				var_41_object = null;
		} else {
				@Trace("7");
				@KillTimer(0);
				@Sleep(0.5, var_39_bool);
				if(!var_39_bool) { //@nz
					if(var_0_bool != 0) {
						var_41_object = null;
						goto Label_170;
					}
				}
				@SetTimer(0, 0.3);
		}
			var_46_object = null;
			var_41_object = null;

		}
	Label_170:
		for(;;) {
			var_24_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_217(string var_99_string)
{
	var_99_string = "walk";
}


void func_219(string var_100_string)
{
	var_100_string = "run";
}


void func_221(void)
{
	@Trace("Waiting for your orders!");
	@Hold();
	@Trace("Following you!");
}


void func_30(bool var_2_bool, bool var_8_bool, object var_9_object, string var_10_string)
{
	object var_18_object;
	@GetMainOutdoorScene(var_18_object);
	bool var_19_bool;
	cvector var_20_cvector;
	cvector var_21_cvector;
	var_18_object->GetLocator(var_10_string, var_19_bool, var_20_cvector, var_21_cvector);
	if(!var_19_bool) { //@nz
		@Trace("Unknown destination point");
		var_8_bool = false;
	}
	bool var_24_bool; object var_25_object; cvector var_26_cvector; bool var_28_bool;
	var_9_object = var_25_object;
	var_30_bool = GlobalVars[0];
	var_30_bool = var_28_bool;
	func_56(var_26_cvector, var_21_cvector, var_24_bool, var_25_object, var_26_cvector, (float)10000, var_28_bool, true);
	var_8_bool = false;
}
EMIT "Stack[-4] = 0";


