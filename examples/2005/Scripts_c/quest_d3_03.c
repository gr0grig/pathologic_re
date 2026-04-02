maintask task_0
{
	void init(object var_0_object)
	{
		@SetVariable("d3q03", 1);
		func_113(3);
	}

	void OnTrigger(object var_0_object, string var_1_string)
	{
		object var_4_object; int var_5_int;
		@Trace(var_1_string);
		if(var_1_string == "boy") {
			@GetMainOutdoorScene(var_4_object);
			object var_8_object; object var_9_object;
			var_4_object = var_9_object;
			func_143(var_8_object, var_9_object, "pt_d3q03_boy", "pers_littleboy", "d3q03_boy.xml");
			var_4_object = null;
		} else if(var_1_string == "boy_attacked") {
				@GetVariable("d3q03", var_5_int);
				bool var_29_bool; int var_30_int;
				var_5_int = var_30_int;
				func_161(var_29_bool, var_30_int);
				if(var_29_bool != 0)
					func_73();
		}

	
		if(var_1_string == "boy_free") {
			var_8_object->Remove(); //@t
		} else if(var_1_string == "fail") {
			func_73();
		} else if(var_1_string == "completed") {
			func_81();
		}
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_62();
	}

}


// @pe
void func_161(bool var_29_bool, int var_30_int)
{
	var_29_bool = false;
	if(var_30_int >= 1) {
		if(var_30_int < 1000)
			var_29_bool = true;
	}
}


void func_103(object var_0_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	object var_10_object;
	func_137(var_10_object);
	@RemoveActor(var_10_object);
}


void func_73(void)
{
	@SetVariable("d3q03", -1);
	func_103(var_4_int);
}


void func_137(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_143(object var_8_object, object var_9_object, string var_10_string, string var_11_string, string var_12_string)
{
	bool var_17_bool; cvector var_18_cvector; cvector var_19_cvector;
	var_9_object->GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector);
	if(!var_17_bool) //@nz
		@Trace(("Locator " + var_10_string) + " doesn't exist");
	else
		var_9_object->AddStationaryActor(Obj(), var_18_cvector, var_19_cvector, var_11_string, var_12_string);
	object var_20_object = var_8_object;
	
}
EMIT "Stack[-1] = 0";


void func_113(int var_3_int)
{
	float var_5_float;
	@GetGameTime(var_5_float);
	if(var_5_float >= (var_3_int * 24)) {
		func_103(var_5_float);
	} else {
		@SetTimeEvent(0, (var_3_int * 24));
		@Hold();
	}
	
}


void func_81(void)
{
	int var_48_int;
	@GetVariable("d3q03", var_48_int);
	bool var_50_bool = false;
	if(var_48_int != 1000) {
		if(var_48_int != -1)
			var_50_bool = true;
	}
	if(var_50_bool != 0) {
		@SetVariable("d3q03", 1000);
		func_103(var_48_int);
	}
}


void func_62(void)
{
	int var_4_int;
	@GetVariable("d3q03", var_4_int);
	if(var_4_int != 1000)
		func_73();
}


