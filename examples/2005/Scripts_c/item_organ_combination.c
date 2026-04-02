// @GLOBALS: 0:int:ItemID1,1:int:ItemID2,2:int:Container

maintask task_0
{
	void init(void)
	{
		var_10_int = GlobalVars[0];
		var_11_int = GlobalVars[1];
		var_12_int = GlobalVars[2];
		int var_5_int;
		@GetItemPosByID(var_5_int, var_10_int, var_11_int, var_12_int);
		if(var_5_int == -1) {
			var_16_int = GlobalVars[0];
			var_20_int = GlobalVars[1];
			@Trace((("error: " + var_16_int) + " ") + var_20_int);
		}
		var_22_int = GlobalVars[2];
		object var_6_object;
		@GetItem(var_6_object, var_5_int, var_22_int);
		float var_7_float;
		var_6_object->GetProperty(var_7_float, "DiseaseRate");
		float var_8_float;
		var_6_object->GetProperty(var_8_float, "HealthIncrease");
		bool var_25_bool; float var_27_float;
		var_8_float = var_27_float;
		func_64(var_25_bool, "health", var_27_float, (float)0, (float)1);
		float var_41_float;
		func_104(var_41_float);
		float var_9_float;
		@GetProperty("disease", var_9_float);
		@SetProperty("disease", (var_9_float * var_7_float));
		func_94(var_9_float - (var_9_float * var_7_float));
		@Trace((("GC: " + var_41_float) + " ") + var_7_float);
		var_59_int = GlobalVars[2];
		@RemoveItem(var_5_int, 1, var_59_int);
	}
	EMIT "Stack[-4] = 0";

}


void func_64(bool var_25_bool, string var_26_string, float var_27_float, float var_28_float, float var_29_float)
{
	bool var_32_bool;
	@HasProperty(var_26_string, var_32_bool);
	if(!var_32_bool) //@nz
		var_25_bool = false;
	float var_33_float;
	@GetProperty(var_26_string, var_33_float);
	float var_35_float; float var_37_float; float var_38_float;
	var_28_float = var_37_float;
	var_29_float = var_38_float;
	func_83(var_35_float, (var_33_float + var_27_float), var_37_float, var_38_float);
	@SetProperty(var_26_string, var_35_float);
	var_25_bool = true;
}


// @pe
void func_83(float var_35_float, float var_36_float, float var_37_float, float var_38_float)
{
	if(var_36_float < var_37_float) {
		var_37_float = var_35_float;
		return 0;
	}
	if(var_36_float > var_38_float) {
		var_38_float = var_35_float;
		return 0;
	}
	var_36_float = var_35_float;
}


void func_104(float var_41_float)
{
	object var_43_object;
	@CreateFloatVector(var_43_object);
	var_43_object->add(var_41_float);
	@SendWorldWndMessage(15, var_43_object);
}
EMIT "Stack[-1] = 0";


void func_94(float var_48_float)
{
	object var_51_object;
	@CreateFloatVector(var_51_object);
	var_51_object->add(var_48_float);
	@SendWorldWndMessage(14, var_51_object);
}
EMIT "Stack[-1] = 0";


