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
		var_6_object->GetProperty(var_7_float, "hl_inc");
		float var_8_float;
		var_6_object->GetProperty(var_8_float, "im_inc");
		float var_9_float;
		@Trace((((("GC: " + var_7_float) + " ") + var_8_float) + " ") + var_9_float);
		bool var_33_bool; float var_35_float;
		var_7_float = var_35_float;
		func_66(var_33_bool, "health", var_35_float, (float)0, (float)1);
		float var_49_float;
		var_7_float = var_49_float;
		func_106(var_49_float);
		bool var_53_bool; float var_55_float;
		var_8_float = var_55_float;
		func_66(var_53_bool, "immunity", var_55_float, (float)0, (float)1);
		float var_58_float;
		var_8_float = var_58_float;
		func_96(var_58_float);
		var_63_int = GlobalVars[2];
		@RemoveItem(var_5_int, 1, var_63_int);
	}
	EMIT "Stack[-4] = 0";

}


void func_96(float var_58_float)
{
	object var_60_object;
	@CreateFloatVector(var_60_object);
	var_60_object->add(var_58_float);
	@SendWorldWndMessage(13, var_60_object);
}
EMIT "Stack[-1] = 0";


void func_66(bool var_33_bool, string var_34_string, float var_35_float, float var_36_float, float var_37_float)
{
	bool var_40_bool;
	@HasProperty(var_34_string, var_40_bool);
	if(!var_40_bool) //@nz
		var_33_bool = false;
	float var_41_float;
	@GetProperty(var_34_string, var_41_float);
	float var_43_float; float var_45_float; float var_46_float;
	var_36_float = var_45_float;
	var_37_float = var_46_float;
	func_85(var_43_float, (var_41_float + var_35_float), var_45_float, var_46_float);
	@SetProperty(var_34_string, var_43_float);
	var_33_bool = true;
}


// @pe
void func_85(float var_43_float, float var_44_float, float var_45_float, float var_46_float)
{
	if(var_44_float < var_45_float) {
		var_45_float = var_43_float;
		return 0;
	}
	if(var_44_float > var_46_float) {
		var_46_float = var_43_float;
		return 0;
	}
	var_44_float = var_43_float;
}


void func_106(float var_49_float)
{
	object var_51_object;
	@CreateFloatVector(var_51_object);
	var_51_object->add(var_49_float);
	@SendWorldWndMessage(15, var_51_object);
}
EMIT "Stack[-1] = 0";


