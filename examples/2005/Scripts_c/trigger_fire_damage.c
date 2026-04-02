// @GLOBALS: 0:object:

maintask task_0
{
	void init(bool var_0_bool)
	{
		int var_5_int; int var_6_int; object var_7_object; float var_8_float;
		var_9_object = GlobalVars[0];
		object var_10_object;
		func_266(var_10_object);
		var_10_object = var_9_object;
		GlobalVars[0] = var_9_object;
	
		for(;;) {
			@Sleep(1);
			var_14_object = GlobalVars[0];
			var_14_object->size(var_5_int);
			var_6_int = 0;

			for(;;) {
				if(var_6_int < var_5_int) {
					var_16_object = GlobalVars[0];
					var_16_object->get(var_7_object, var_6_int);
					if(!var_7_object) { //@nz
						var_18_object = GlobalVars[0];
						var_18_object->remove(var_6_int);
					} else {
					@Trace("Damaging: " + var_7_object);
					float var_21_float; object var_22_object;
					func_169(var_21_float, var_22_object, 0.8, 2);
					var_21_float = var_8_float;
					object var_87_object;
					func_242(var_87_object);
					@ReportHit(var_22_object, var_87_object, 4, var_8_float, 0.8);
					var_6_int += 1;
				}
				}
				var_7_object = null;
			}

		}
	}
	EMIT "Return(); Pop(8)";

	// @pe
	void OnIntersection(bool var_0_bool, object var_1_object)
	{
		object var_3_object;
		var_1_object = var_3_object;
		bool var_2_bool;
		func_157(var_2_bool, var_3_object, "health");
		if(var_2_bool != 0) {
			@Trace("New damage target: " + var_1_object);
			var_13_object = GlobalVars[0];
			var_13_object->add(var_1_object);
		}
	}

	void OnStopIntersection(bool var_0_bool, object var_1_object)
	{
		object var_7_object;
		var_8_object = GlobalVars[0];
		int var_5_int;
		var_8_object->size(var_5_int);
		int var_6_int = 0;
	
		for(;;) {
			if(var_6_int < var_5_int) {
				var_10_object = GlobalVars[0];
				var_10_object->get(var_7_object, var_6_int);
				if(var_7_object == var_1_object) {
					var_12_object = GlobalVars[0];
					var_12_object->remove(var_6_int);
					var_5_int += -1;
				} else {
				var_6_int += 1;
				goto Label_86;
			}
			@Trace("Removed damage target: " + var_1_object);
			}
			var_7_object = null;

		Label_86:
		}
	
	}

	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		bool var_3_bool;
		if(var_1_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_3_bool);
			bool var_6_bool = false;
			if(!var_3_bool) { //@nz
				bool var_8_bool;
				func_136(var_8_bool);
				if(var_8_bool != 0)
					var_6_bool = true;
			}
			if(var_6_bool != 0) {
				object var_9_object;
				func_242(var_9_object);
				@RemoveActor(var_9_object);
			}
		} else if(var_1_string == "restore") {
			var_0_bool = false;
		}
	
	}

	void OnUnload(bool var_0_bool)
	{
		bool var_1_bool = false;
		if(var_0_bool != 0) {
			bool var_3_bool;
			func_136(var_3_bool);
			if(var_3_bool != 0)
				var_1_bool = true;
		}
		if(var_1_bool != 0) {
			object var_4_object;
			func_242(var_4_object);
			@RemoveActor(var_4_object);
		}
	}

}


void func_136(bool var_3_bool)
{
	var_3_bool = true;
}


void func_169(float var_21_float, object var_22_object, float var_23_float, int var_24_int)
{
	int var_31_int; int var_33_int;
	object var_38_object;
	var_22_object = var_38_object;
	bool var_37_bool;
	func_157(var_37_bool, var_38_object, "health");
	if(!var_37_bool) //@nz
		var_21_float = 0.0;
	bool var_47_bool; object var_48_object;
	func_157(var_47_bool, var_48_object, "armor");
	if(!var_47_bool) //@nz
		var_31_int = 0;
	else
		var_48_object->GetProperty("armor", var_31_int);
	string var_52_string; int var_53_int;
	var_24_int = var_53_int;
	func_138(var_52_string, var_53_int);
	string var_32_string = "armor_" + var_52_string;
	bool var_58_bool; object var_59_object; string var_60_string;
	var_22_object = var_59_object;
	func_157(var_58_bool, var_59_object, var_60_string);
	if(!var_58_bool) //@nz
		var_33_int = 0;
	else
		var_22_object->GetProperty(var_60_string, var_33_int);

	float var_62_float;
	func_248(var_62_float, ((var_31_int + var_33_int) / 100.0), (float)1);
	float var_34_float;
	var_62_float = var_34_float;
	float var_35_float;
	var_22_object->GetProperty("health", var_35_float);
	float var_36_float = var_23_float * (1 - var_34_float);
	float var_72_float;
	func_255(var_72_float, (var_35_float - var_36_float), (float)0, (float)1);
	var_22_object->SetProperty("health", var_72_float);
	bool var_78_bool; object var_79_object;
	var_22_object = var_79_object;
	func_152(var_78_bool, var_79_object);
	if(var_78_bool != 0) {
		float var_82_float = -var_36_float;
		func_272(var_82_float);
	}
	var_36_float = var_21_float;
	
}


void func_266(object var_10_object)
{
	object var_12_object;
	@CreateObjectVector(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_138(string var_52_string, int var_53_int)
{
	if(var_53_int == 2) {
		var_52_string = "fire";
		return 0;
	EMIT "GOTO 0x96";
	}
	if(var_53_int == 1) {
		var_52_string = "bullet";
		return 0;
	}
	var_52_string = "phys";
}


void func_272(float var_82_float)
{
	object var_84_object;
	@CreateFloatVector(var_84_object);
	var_84_object->add(var_82_float);
	@SendWorldWndMessage(15, var_84_object);
}
EMIT "Stack[-1] = 0";


void func_242(object var_87_object)
{
	object var_89_object;
	@self(var_89_object);
	var_89_object = var_87_object;
}
EMIT "Stack[-1] = 0";


void func_157(bool var_37_bool, object var_38_object, string var_39_string)
{
	var_44_bool = IsFuncExist(var_38_object, "HasProperty", 2);
	if(!var_44_bool) { //@nz
		var_37_bool = false;
		return 2;
	}
	bool var_41_bool;
	var_38_object->HasProperty(var_39_string, var_41_bool);
	var_41_bool = var_37_bool;
}


// @pe
void func_248(float var_62_float, float var_63_float, float var_64_float)
{
	if(var_63_float < var_64_float)
		var_63_float = var_62_float;
	else
		var_64_float = var_62_float;
	
}


void func_152(bool var_78_bool, object var_79_object)
{
	bool var_81_bool;
	@IsPlayerActor(var_79_object, var_81_bool);
	var_81_bool = var_78_bool;
}


// @pe
void func_255(float var_72_float, float var_73_float, float var_74_float, float var_75_float)
{
	if(var_73_float < var_74_float) {
		var_74_float = var_72_float;
		return 0;
	}
	if(var_73_float > var_75_float) {
		var_75_float = var_72_float;
		return 0;
	}
	var_73_float = var_72_float;
}


