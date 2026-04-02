// @GLOBALS: 0:object:,1:object:,2:object:,3:object:,4:object:,5:object:,6:object:

maintask task_0
{
	void init(void)
	{
		var_2_object = GlobalVars[0];
		object var_3_object;
		func_153(var_3_object);
		var_3_object = var_2_object;
		GlobalVars[0] = var_2_object;
		var_6_object = GlobalVars[1];
		object var_7_object;
		func_153(var_7_object);
		var_7_object = var_6_object;
		GlobalVars[1] = var_6_object;
		var_8_object = GlobalVars[2];
		object var_9_object;
		func_153(var_9_object);
		var_9_object = var_8_object;
		GlobalVars[2] = var_8_object;
		var_10_object = GlobalVars[3];
		object var_11_object;
		func_153(var_11_object);
		var_11_object = var_10_object;
		GlobalVars[3] = var_10_object;
		var_12_object = GlobalVars[4];
		object var_13_object;
		func_153(var_13_object);
		var_13_object = var_12_object;
		GlobalVars[4] = var_12_object;
		var_14_object = GlobalVars[5];
		object var_15_object;
		func_153(var_15_object);
		var_15_object = var_14_object;
		GlobalVars[5] = var_14_object;
		var_16_object = GlobalVars[6];
		object var_17_object;
		func_159(var_17_object);
		var_17_object = var_16_object;
		GlobalVars[6] = var_16_object;
		func_81();
		int var_1_int = 0;
	
		while(var_1_int < 16) {
			@SetTimeEvent(((var_1_int * 2) + 1), (19 + (var_1_int * 24)));
			@SetTimeEvent(((var_1_int * 2) + 2), (10 + (var_1_int * 24)));
			var_1_int += 1;
		}
	
		func_245(true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnGameTime(int iID, float fTime)
	{
		int var_2_int;
		iID = var_2_int;
		float var_3_float;
		fTime = var_3_float;
		func_238(var_3_float);
	}

	// @pe
	void OnTrigger(string name)
	{
		TaskCall(1);
		func_117(("scenes/" + name) + ".mot");
		TaskReturn();
	}

	// @pe
	void OnConsole(string var_0_string, string var_1_string)
	{
		if(var_0_string == "play") {
			string var_4_string;
			var_1_string = var_4_string;
			TaskCall(1);
			func_117(var_4_string);
			TaskReturn();
		} else {
			string var_12_string; string var_13_string;
			var_0_string = var_12_string;
			var_1_string = var_13_string;
			func_203();
		}
	
	}

}


task task_1
{
	// @pe
	void OnGameTime(int iID, float fTime)
	{
		int var_2_int;
		iID = var_2_int;
		float var_3_float;
		fTime = var_3_float;
		func_238(var_3_float);
	}

	// @pe
	void OnKeyDown(int iKey)
	{
		@CameraSwitchToNormal();
	}

}


void OnConsole(string var_0_string, string var_1_string)
{
	int var_5_int; int var_6_int; object var_7_object;
	if(var_0_string == "horror") {
		@_strtoi(var_5_int, var_1_string);
		var_10_object = GlobalVars[6];
		var_10_object->size(var_6_int);
		bool var_11_bool = false;
		if(var_5_int >= 0) {
			if(var_5_int < var_6_int)
				var_11_bool = true;
		}
		if(var_11_bool != 0) {
			var_15_object = GlobalVars[6];
			var_15_object->get(var_7_object, var_5_int);
			object var_16_object;
			var_7_object = var_16_object;
			func_165(var_16_object, false);
			@Trace("Replaced");
			var_7_object = null;
		} else {
			@Trace("Invalid region index");
		}
	}
	
}


void func_165(object var_16_object, int var_17_int)
{
	int var_24_int; string var_25_string; string var_27_string; object var_29_object;
	var_16_object->size(var_24_int);
	if(var_17_int == 1) {
		var_25_string = "s_";
	} else if(var_17_int == 2) {
	}
	int var_26_int = 0;
	
	for(;;) {
		if(var_26_int < var_24_int) {
			var_16_object->get(var_27_string, var_26_int);
			@GetSceneByName(var_29_object, var_27_string);
			if(!var_29_object) //@nz
				@Trace(("City manager: can't replace indoor scene \"" + var_27_string) + "\" because it doesn't exist");
			else
				@ReplaceScene(var_29_object, (("n_" + var_27_string) + ".isc"));

		}
		var_29_object = null;
		var_26_int += 1;
	}
	
}


// @pe
void func_238(int var_2_int)
{
	bool var_4_bool = var_2_int % 2;
	func_245(var_4_bool);
}


void func_81(void)
{
}


// @pe
void func_117(string var_4_string)
{
	@Trace("playing: " + var_4_string);
	@RegisterKeyCallback("space");
	@RegisterKeyCallback("escape");
	@CameraPlay(var_4_string, false);
	@CameraWaitForPlayFinish();
	@UnregisterKeyCallback("escape");
	@UnregisterKeyCallback("space");
	@CameraSwitchToNormal();
}


// @pe
void func_245(bool var_39_bool)
{
	if(var_39_bool != 0) {
		@Trace("night time");
		@SwitchLights(0, true);
	} else {
		@Trace("day time");
		@SwitchLights(0, false);
	}
	
}


void func_153(object var_3_object)
{
	object var_5_object;
	@CreateObjectSet(var_5_object);
	var_5_object = var_3_object;
}
EMIT "Stack[-1] = 0";


void func_159(object var_17_object)
{
	object var_19_object;
	@CreateObjectVector(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


