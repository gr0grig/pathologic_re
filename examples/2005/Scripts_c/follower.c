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
			func_45(var_12_bool, var_8_bool, var_9_object);
			TaskReturn();
			if(var_10_bool != 0) {
				TaskCall(2);
				func_230();
				TaskReturn();
			}
			@WaitForAnimEnd();
			@Sleep(3);
		}
	
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnConsole(string var_0_string, string var_1_string, bool var_2_bool, object var_3_object, bool var_4_bool)
	{
		if(var_3_object == "fstop") {
			TaskCall(2);
			func_230();
			TaskReturn();
		} else {
			string var_9_string; string var_10_string;
			var_3_object = var_9_string;
			var_4_bool = var_10_string;
			func_331();
		}
	
	}

}


task task_1
{
	// @pe
	void OnConsole(bool var_0_bool, object var_1_object, bool var_2_bool, string var_3_string, string var_4_string)
	{
		if(var_3_string == "fstop") {
			var_2_bool = true;
			func_203(var_4_string);
		} else if(var_3_string == "fgo") {
				var_2_bool = false;
		}
	
		string var_10_string; string var_11_string;
		var_3_string = var_10_string;
		var_4_string = var_11_string;
		func_331();
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, int var_3_int)
	{
		if(var_3_int != 0)
			return 0;
		bool var_6_bool;
		func_219(var_6_bool, var_1_object);
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
		func_203(var_3_object);
		object var_5_object;
		var_3_object = var_5_object;
		func_329();
	}

}


task task_2
{
	// @pe
	void OnConsole(bool var_0_bool, object var_1_object, bool var_2_bool, string var_3_string, string var_4_string)
	{
		if(var_3_string == "fgo") {
			@StopGroup0();
		} else {
			string var_7_string; string var_8_string;
			var_3_string = var_7_string;
			var_4_string = var_8_string;
			func_331();
		}
	
	}

}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object)
{
}


// @pe
void OnConsole(bool var_0_bool, object var_1_object, bool var_2_bool, string var_3_string, string var_4_string)
{
	if(var_3_string == "frun") {
		var_7_bool = GlobalVars[0];
		GlobalVars[0] = true;
	} else if(var_3_string == "fwalk") {
		var_10_bool = GlobalVars[0];
		GlobalVars[0] = false;
	}
	
}


void func_226(string var_86_string)
{
	var_86_string = "walk";
}


void func_228(string var_87_string)
{
	var_87_string = "run";
}


void func_230(void)
{
	@Trace("Waiting for your orders!");
	@Hold();
	@Trace("Following you!");
}


void func_264(bool var_53_bool, object var_54_object)
{
	bool var_56_bool;
	var_54_object->IsDead(var_56_bool);
	var_56_bool = var_53_bool;
}


void func_203(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_45(bool var_2_bool, bool var_8_bool, object var_9_object)
{
	var_19_bool = GlobalVars[0];
	bool var_17_bool;
	var_19_bool = var_17_bool;
	bool var_13_bool;
	object var_14_object;
	func_79(var_8_bool, var_14_object, var_13_bool, var_14_object, (float)200, (float)10000, var_17_bool, true);
	var_8_bool = false;
}


void func_269(bool var_42_bool, object var_43_object)
{
	if(var_43_object == null) {
		var_42_bool = false;
		return 4;
	}
	bool var_49_bool = false;
	var_52_bool = IsFuncExist(var_43_object, "IsDead", 1);
	if(var_52_bool != 0) {
		bool var_53_bool; object var_54_object;
		var_43_object = var_54_object;
		func_264(var_53_bool, var_54_object);
		if(var_53_bool != 0)
			var_49_bool = true;
	}
	if(var_49_bool != 0) {
		var_42_bool = false;
		return 4;
	}
	object var_46_object;
	@GetScene(var_46_object);
	if(var_46_object == null) {
		var_42_bool = false;
		return 4;
	}
	object var_47_object;
	var_43_object->GetScene(var_47_object);
	if(var_46_object != var_47_object) {
		var_42_bool = false;
		return 4;
	}
	var_42_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_79(bool var_0_bool, object var_1_object, bool var_13_bool, object var_14_object, float var_15_float, float var_16_float, bool var_17_bool, bool var_18_bool)
{
	bool var_28_bool; object var_30_object; cvector var_31_cvector; cvector var_32_cvector; float var_34_float; object var_35_object;
	var_0_bool = false;
	var_1_object = var_14_object;
	bool var_29_bool;
	var_18_bool = var_29_bool;
	
	for(;;) {
		bool var_36_bool; object var_37_object;
		var_14_object = var_37_object;
		func_219(var_36_bool, var_37_object);
		if(!var_36_bool) { //@nz
			var_13_bool = false;
			return 16;
		}
		var_14_object->GetPosition(var_31_cvector);
		@GetPosition(var_32_cvector);
		var_34_float = (var_31_cvector - var_32_cvector) | (var_31_cvector - var_32_cvector);
		bool var_73_bool = false;
		if(var_16_float > 0) {
			if(var_34_float > (var_16_float * var_16_float))
				var_73_bool = true;
		}
		if(var_73_bool != 0) {
			@Stop();
			var_13_bool = false;
			return 16;
		}
		if(var_34_float > (var_15_float * var_15_float)) {
			var_14_object->GetPFPosition(var_31_cvector);
			@FindPathTo(var_35_object, var_31_cvector);
			if(var_35_object != null) {
				var_35_object = var_30_object;
				var_35_object = null;
			}
			if(var_30_object != null) {
				if(var_29_bool == 0) goto Label_132;
				var_29_bool = false;
				@RotatePath(var_30_object, var_28_bool);
				if(!var_28_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_86_string;
						func_226(var_86_string);
						string var_87_string;
						func_228(var_87_string);
						@FollowPath(var_30_object, var_17_bool, var_28_bool, var_86_string, var_87_string);
						if(!var_28_bool) { //@nz
							if(var_0_bool == 0) goto Label_151;
							var_30_object = null;
						}
					EMIT "GOTO 0x98";

					Label_151:
						} else {
					var_30_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_28_bool);
					if(!var_28_bool) { //@nz
						if(var_0_bool != 0) {
							var_30_object = null;
							goto Label_179;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_179;
		}
			var_35_object = null;
			goto Label_177;

		Label_177:
			var_30_object = null;

		}
	Label_179:
		for(;;) {
			var_13_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_305(bool var_38_bool, object var_39_object)
{
	object var_43_object;
	var_39_object = var_43_object;
	bool var_42_bool;
	func_269(var_42_bool, var_43_object);
	if(!var_42_bool) { //@nz
		var_38_bool = false;
		return 2;
	}
	bool var_60_bool; object var_61_object;
	func_252(var_60_bool, var_61_object, "noaccess");
	if(!var_60_bool) { //@nz
		var_38_bool = true;
		return 2;
	}
	int var_41_int;
	var_61_object->GetProperty("noaccess", var_41_int);
	var_38_bool = var_41_int == 0;
}


// @pe
void func_219(bool var_36_bool, object var_37_object)
{
	object var_39_object;
	var_37_object = var_39_object;
	bool var_38_bool;
	func_305(var_38_bool, var_39_object);
	var_38_bool = var_36_bool;
}


void func_252(bool var_60_bool, object var_61_object, string var_62_string)
{
	var_67_bool = IsFuncExist(var_61_object, "HasProperty", 2);
	if(!var_67_bool) { //@nz
		var_60_bool = false;
		return 2;
	}
	bool var_64_bool;
	var_61_object->HasProperty(var_62_string, var_64_bool);
	var_64_bool = var_60_bool;
}


