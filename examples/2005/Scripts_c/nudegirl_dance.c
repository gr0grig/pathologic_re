maintask task_0
{
	void init(bool var_0_bool, object var_1_object)
	{
		object var_6_object; int var_8_int; bool var_9_bool;
		@FindActor(var_6_object, "player");
		@WaitForAnimEnd();
		bool var_11_bool;
		func_83(var_11_bool);
		if(!var_11_bool) { //@nz
		}
		int var_15_int;
		func_99(var_15_int);
		int var_7_int;
		var_15_int = var_7_int;
	
		for(;;) {
			if(var_7_int != 0) {
				@irand(var_8_int, var_7_int);
				string var_30_string; int var_31_int;
				var_8_int = var_31_int;
				func_116(var_30_string, var_31_int);
				@PlayAnimation("all", var_30_string);
				bool var_32_bool = false;
				bool var_33_bool; object var_34_object;
				var_6_object = var_34_object;
				func_123(var_33_bool, var_34_object);
				if(var_33_bool != 0) {
					if(!false) //@nz
						var_32_bool = true;
				}
				if(var_32_bool != 0) {
					object var_48_object;
					var_6_object = var_48_object;
					func_88(var_48_object);
				}
				@WaitForAnimEnd(var_9_bool);
				if(!var_9_bool) { //@nz
				} else {
					bool var_56_bool = false;
					bool var_57_bool; object var_58_object;
					var_6_object = var_58_object;
					func_123(var_57_bool, var_58_object);
					if(!var_57_bool) { //@nz
						if(true != 0)
							var_56_bool = true;
					}
					if(var_56_bool != 0) {
						@UnlookAsync("head");
						var_0_bool = false;
					}
				}
			}
			for(;;) {
				@Hold();
			}

		}
	}
	EMIT "Return(); Pop(8)";
	EMIT "Stack[-4] = 0";

	void OnUnload(bool var_0_bool, object var_1_object)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

}


void func_99(int var_15_int)
{
	int var_18_int; bool var_19_bool;
	var_18_int = 0;
	
	for(;;) {
		string var_21_string; int var_22_int;
		var_18_int = var_22_int;
		func_116(var_21_string, var_22_int);
		@HasAnimation(var_19_bool, "all", var_21_string);
		if(!var_19_bool) //@nz
			break;
		var_18_int += 1;
	}
	var_18_int = var_15_int;
}


void func_75(float var_38_float, object var_39_object)
{
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector;
	var_39_object->GetPosition(var_44_cvector);
	var_38_float = (var_44_cvector - var_43_cvector) | (var_44_cvector - var_43_cvector);
}


void func_83(bool var_11_bool)
{
	bool var_13_bool;
	@IsLoaded(var_13_bool);
	var_13_bool = var_11_bool;
}


void func_116(string var_21_string, int var_22_int)
{
	string var_24_string = "dance";
	if(var_22_int != 0)
		var_24_string += var_22_int;
	var_24_string = var_21_string;
}


void func_88(object var_48_object)
{
	float var_51_float;
	var_48_object->GetEyesHeight(var_51_float);
	cvector var_52_cvector = [0.0, 0.0, 0.0];
	var_53_float = GetByIndex(var_52_cvector, 1);
	var_51_float = var_53_float;
	SetByIndex(var_52_cvector, 1) = var_53_float;
	@LookAsync(var_48_object, "head", var_52_cvector);
}


void func_123(bool var_33_bool, object var_34_object)
{
	if(var_34_object == null)
		var_33_bool = false;
	float var_38_float; object var_39_object;
	var_34_object = var_39_object;
	func_75(var_38_float, var_39_object);
	float var_36_float = sqrt(var_38_float);
	var_33_bool = var_36_float < 350;
}


