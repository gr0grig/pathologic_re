// @GLOBALS: 0:object:

maintask task_0
{
	void init(bool var_0_bool)
	{
		object var_5_object; bool var_6_bool; object var_7_object; float var_8_float;
		var_9_object = GlobalVars[0];
		object var_10_object;
		func_218(var_10_object);
		var_10_object = var_9_object;
		GlobalVars[0] = var_9_object;
	
		for(;;) {
			@Sleep(1);
			var_14_object = GlobalVars[0];
			var_14_object->iterator(var_5_object);

			for(;;) {
				var_5_object->Next(var_6_bool, var_7_object);
				if(var_6_bool == 0) goto Label_36;
				@Trace("Damaging: " + var_7_object);
				float var_18_float; object var_19_object;
				func_130(var_18_float, var_19_object, 0.8, 1);
				var_18_float = var_8_float;
				object var_74_object;
				func_194(var_74_object);
				@ReportHit(var_19_object, var_74_object, 4, var_8_float, 0.8);
			}

		Label_36:
			var_7_object = null;
			var_5_object = null;
		}
	}
	EMIT "Return(); Pop(8)";

	// @pe
	void OnIntersection(bool var_0_bool, object var_1_object)
	{
		object var_3_object;
		var_1_object = var_3_object;
		bool var_2_bool;
		func_118(var_2_bool, var_3_object, "health");
		if(var_2_bool != 0) {
			@Trace("New damage target: " + var_1_object);
			var_13_object = GlobalVars[0];
			var_13_object->add(var_1_object);
		}
	}

	// @pe
	void OnStopIntersection(bool var_0_bool, object var_1_object)
	{
		var_2_object = GlobalVars[0];
		var_2_object->erase(var_1_object);
		@Trace("Removed damage target: " + var_1_object);
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
				func_108(var_8_bool);
				if(var_8_bool != 0)
					var_6_bool = true;
			}
			if(var_6_bool != 0) {
				object var_9_object;
				func_194(var_9_object);
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
			func_108(var_3_bool);
			if(var_3_bool != 0)
				var_1_bool = true;
		}
		if(var_1_bool != 0) {
			object var_4_object;
			func_194(var_4_object);
			@RemoveActor(var_4_object);
		}
	}

}


void func_194(object var_74_object)
{
	object var_76_object;
	@self(var_76_object);
	var_76_object = var_74_object;
}
EMIT "Stack[-1] = 0";


void func_130(float var_18_float, object var_19_object, float var_20_float, int var_21_int)
{
	int var_28_int; int var_30_int;
	object var_35_object;
	var_19_object = var_35_object;
	bool var_34_bool;
	func_118(var_34_bool, var_35_object, "health");
	if(!var_34_bool) //@nz
		var_18_float = 0.0;
	bool var_44_bool; object var_45_object;
	func_118(var_44_bool, var_45_object, "armor");
	if(!var_44_bool) //@nz
		var_28_int = 0;
	else
		var_45_object->GetProperty("armor", var_28_int);
	string var_49_string; int var_50_int;
	var_21_int = var_50_int;
	func_110(var_49_string, var_50_int);
	string var_29_string = "armor_" + var_49_string;
	bool var_53_bool; object var_54_object; string var_55_string;
	var_19_object = var_54_object;
	func_118(var_53_bool, var_54_object, var_55_string);
	if(!var_53_bool) //@nz
		var_30_int = 0;
	else
		var_19_object->GetProperty(var_55_string, var_30_int);

	float var_57_float;
	func_200(var_57_float, ((var_28_int + var_30_int) / 100.0), (float)1);
	float var_31_float;
	var_57_float = var_31_float;
	float var_32_float;
	var_19_object->GetProperty("health", var_32_float);
	float var_67_float;
	func_207(var_67_float, (var_32_float - (var_20_float * (1 - var_31_float))), (float)0, (float)1);
	var_19_object->SetProperty("health", var_67_float);
	float var_33_float = var_18_float;
	
}


// @pe
void func_200(float var_57_float, float var_58_float, float var_59_float)
{
	if(var_58_float < var_59_float)
		var_58_float = var_57_float;
	else
		var_59_float = var_57_float;
	
}


void func_108(bool var_3_bool)
{
	var_3_bool = true;
}


// @pe
void func_110(string var_49_string, int var_50_int)
{
	if(var_50_int == 1)
		var_49_string = "fire";
	var_49_string = "phys";
}


// @pe
void func_207(float var_67_float, float var_68_float, float var_69_float, float var_70_float)
{
	if(var_68_float < var_69_float) {
		var_69_float = var_67_float;
		return 0;
	}
	if(var_68_float > var_70_float) {
		var_70_float = var_67_float;
		return 0;
	}
	var_68_float = var_67_float;
}


void func_118(bool var_34_bool, object var_35_object, string var_36_string)
{
	var_41_bool = IsFuncExist(var_35_object, "HasProperty", 2);
	if(!var_41_bool) { //@nz
		var_34_bool = false;
		return 2;
	}
	bool var_38_bool;
	var_35_object->HasProperty(var_36_string, var_38_bool);
	var_38_bool = var_34_bool;
}


void func_218(object var_10_object)
{
	object var_12_object;
	@CreateObjectSet(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


