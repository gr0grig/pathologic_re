maintask task_0
{
	void init(bool var_0_bool, object var_1_object)
	{
		object var_3_object;
		@FindActor(var_3_object, "player");
	
		while(var_3_object != null) {
			bool var_6_bool; object var_7_object;
			var_3_object = var_7_object;
			TaskCall(1);
			func_24(var_12_bool, var_13_object, var_6_bool, var_7_object, (float)200, (float)5000, true, true);
			TaskReturn();
			@WaitForAnimEnd();
			@Sleep(3);
		}
	
	}
	EMIT "Stack[-1] = 0";

}


task task_1
{
	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int)
	{
		if(var_2_int != 0)
			return 0;
		bool var_5_bool;
		func_164(var_5_bool, var_1_object);
		if(!var_5_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object)
	{
		@RequestClearPath(var_2_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object)
	{
		func_148(var_2_object);
		object var_4_object;
		var_2_object = var_4_object;
		func_252();
	}

}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, object var_2_object)
{
}


void func_192(bool var_36_bool, object var_37_object)
{
	if(var_37_object == null) {
		var_36_bool = false;
		return 4;
	}
	bool var_43_bool = false;
	var_46_bool = IsFuncExist(var_37_object, "IsDead", 1);
	if(var_46_bool != 0) {
		bool var_47_bool; object var_48_object;
		var_37_object = var_48_object;
		func_187(var_47_bool, var_48_object);
		if(var_47_bool != 0)
			var_43_bool = true;
	}
	if(var_43_bool != 0) {
		var_36_bool = false;
		return 4;
	}
	object var_40_object;
	@GetScene(var_40_object);
	if(var_40_object == null) {
		var_36_bool = false;
		return 4;
	}
	object var_41_object;
	var_37_object->GetScene(var_41_object);
	if(var_40_object != var_41_object) {
		var_36_bool = false;
		return 4;
	}
	var_36_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_164(bool var_30_bool, object var_31_object)
{
	object var_33_object;
	var_31_object = var_33_object;
	bool var_32_bool;
	func_228(var_32_bool, var_33_object);
	var_32_bool = var_30_bool;
}


void func_228(bool var_32_bool, object var_33_object)
{
	object var_37_object;
	var_33_object = var_37_object;
	bool var_36_bool;
	func_192(var_36_bool, var_37_object);
	if(!var_36_bool) { //@nz
		var_32_bool = false;
		return 2;
	}
	bool var_54_bool; object var_55_object;
	func_175(var_54_bool, var_55_object, "noaccess");
	if(!var_54_bool) { //@nz
		var_32_bool = true;
		return 2;
	}
	int var_35_int;
	var_55_object->GetProperty("noaccess", var_35_int);
	var_32_bool = var_35_int == 0;
}


void func_171(string var_80_string)
{
	var_80_string = "walk";
}


void func_173(string var_81_string)
{
	var_81_string = "run";
}


void func_175(bool var_54_bool, object var_55_object, string var_56_string)
{
	var_61_bool = IsFuncExist(var_55_object, "HasProperty", 2);
	if(!var_61_bool) { //@nz
		var_54_bool = false;
		return 2;
	}
	bool var_58_bool;
	var_55_object->HasProperty(var_56_string, var_58_bool);
	var_58_bool = var_54_bool;
}


void func_148(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_24(bool var_0_bool, object var_1_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, bool var_10_bool, bool var_11_bool)
{
	bool var_22_bool; object var_24_object; cvector var_25_cvector; cvector var_26_cvector; float var_28_float; object var_29_object;
	var_0_bool = false;
	var_1_object = var_7_object;
	bool var_23_bool;
	var_11_bool = var_23_bool;
	
	for(;;) {
		bool var_30_bool; object var_31_object;
		var_7_object = var_31_object;
		func_164(var_30_bool, var_31_object);
		if(!var_30_bool) { //@nz
			var_6_bool = false;
			return 16;
		}
		var_7_object->GetPosition(var_25_cvector);
		@GetPosition(var_26_cvector);
		var_28_float = (var_25_cvector - var_26_cvector) | (var_25_cvector - var_26_cvector);
		bool var_67_bool = false;
		if(var_9_float > 0) {
			if(var_28_float > (var_9_float * var_9_float))
				var_67_bool = true;
		}
		if(var_67_bool != 0) {
			@Stop();
			var_6_bool = false;
			return 16;
		}
		if(var_28_float > (var_8_float * var_8_float)) {
			var_7_object->GetPFPosition(var_25_cvector);
			@FindPathTo(var_29_object, var_25_cvector);
			if(var_29_object != null) {
				var_29_object = var_24_object;
				var_29_object = null;
			}
			if(var_24_object != null) {
				if(var_23_bool == 0) goto Label_77;
				var_23_bool = false;
				@RotatePath(var_24_object, var_22_bool);
				if(!var_22_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_80_string;
						func_171(var_80_string);
						string var_81_string;
						func_173(var_81_string);
						@FollowPath(var_24_object, var_10_bool, var_22_bool, var_80_string, var_81_string);
						if(!var_22_bool) { //@nz
							if(var_0_bool == 0) goto Label_96;
							var_24_object = null;
						}
					EMIT "GOTO 0x61";

					Label_96:
						} else {
					var_24_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_22_bool);
					if(!var_22_bool) { //@nz
						if(var_0_bool != 0) {
							var_24_object = null;
							goto Label_124;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_124;
		}
			var_29_object = null;
			goto Label_122;

		Label_122:
			var_24_object = null;

		}
	Label_124:
		for(;;) {
			var_6_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_187(bool var_47_bool, object var_48_object)
{
	bool var_50_bool;
	var_48_object->IsDead(var_50_bool);
	var_50_bool = var_47_bool;
}


