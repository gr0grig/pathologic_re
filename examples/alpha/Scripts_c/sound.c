task task_0
{
	void OnLoad(object var_0_object, float var_1_float, float var_2_float)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, float var_1_float, float var_2_float)
	{
		var_0_object = null;
		bool var_3_bool;
		func_167(var_3_bool);
		if(!var_3_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		bool var_7_bool; object var_8_object;
		object var_10_object;
		func_172(var_10_object);
		var_10_object = var_8_object;
		func_155(var_7_bool, var_8_object, "distance");
		if(!var_7_bool) { //@nz
			var_1_float = 250000;
		} else {
				@GetProperty("distance", var_1_float);
				var_1_float *= var_1_float;
		}
		bool var_20_bool; object var_21_object;
		object var_23_object;
		func_172(var_23_object);
		var_23_object = var_21_object;
		func_155(var_20_bool, var_21_object, "mindistance");
		if(!var_20_bool) { //@nz
		} else {
			@GetProperty("mindistance", (float)100);

		}
		@SetTimer(101, 1.0);
	
		for(;;) {
			@Hold();
		}
	
	}
	EMIT "Return(); Pop(0)";

	void OnTimer(object var_0_object, float fTime, float var_2_float, int var_3_int)
	{
		object var_14_object;
		func_148(var_14_object);
		object var_9_object;
		var_14_object = var_9_object;
		if(var_9_object == null) {
			@Trace("Null player");
			return 10;
		}
		cvector var_20_cvector; object var_21_object;
		var_9_object = var_21_object;
		func_143(var_20_cvector, var_21_object);
		cvector var_10_cvector;
		var_20_cvector = var_10_cvector;
		cvector var_24_cvector;
		func_138(var_24_cvector);
		cvector var_11_cvector;
		var_24_cvector = var_11_cvector;
		float var_13_float = (var_10_cvector - var_11_cvector) | (var_10_cvector - var_11_cvector);
		bool var_27_bool = false;
		if(var_0_object != null) {
			if(var_13_float > fTime)
				var_27_bool = true;
		}
		if(var_27_bool != 0) {
			@Trace("stopped");
			var_0_object->Stop(); //@t
			var_0_object = null;
			return 10;
		}
		bool var_31_bool = false;
		if(var_0_object == null) {
			if(var_13_float < fTime)
				var_31_bool = true;
		}
		if(var_31_bool != 0) {
			disable OnTimer;
			@Trace("started");
			@WaitFor3DSoundToLoad("envsound");
			@PlayLoopedGlobalSound(var_0_object, "envsound", [0.0, 0.0, 0.0], 0.0, var_2_float);
			if(var_0_object == null)
				@Trace("Sound was not found");
			else
				var_0_object->FadeIn(0.5); //@t
			enable OnTimer;
		}
	
	}
	EMIT "Stack[-5] = 0";

	void OnUnload(object var_0_object, float var_1_float, float var_2_float)
	{
		@KillTimer(101);
		TaskCall(0);
		func_0();
		TaskReturn();
		@SetTimer(101, 1.0);
	}

}


void func_0(void)
{
	@Hold();
}


void func_167(bool var_3_bool)
{
	bool var_5_bool;
	@IsLoaded(var_5_bool);
	var_5_bool = var_3_bool;
}


void func_138(cvector var_24_cvector)
{
	cvector var_26_cvector;
	@GetPosition(var_26_cvector);
	var_26_cvector = var_24_cvector;
}


void func_172(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_143(cvector var_20_cvector, object var_21_object)
{
	cvector var_23_cvector;
	var_21_object->GetPosition(var_23_cvector);
	var_23_cvector = var_20_cvector;
}


void func_148(object var_14_object)
{
	object var_16_object;
	@FindActor(var_16_object, "player");
	var_16_object = var_14_object;
}
EMIT "Stack[-1] = 0";


void func_155(bool var_7_bool, object var_8_object, string var_9_string)
{
	var_17_bool = IsFuncExist(var_8_object, "HasProperty", 2);
	if(!var_17_bool) { //@nz
		var_7_bool = false;
		return 2;
	}
	bool var_14_bool;
	var_8_object->HasProperty(var_9_string, var_14_bool);
	var_14_bool = var_7_bool;
}


