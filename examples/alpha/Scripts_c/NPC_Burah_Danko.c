// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(void)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(void)
	{
		func_108();
		bool var_1_bool;
		func_61(var_1_bool);
		if(!var_1_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_66("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(void)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor)
	{
		object var_1_object;
		actor = var_1_object;
		func_112();
	}

	// @pe
	void OnCollision(object actor)
	{
		object var_2_object;
		actor = var_2_object;
		bool var_1_bool;
		func_49(var_1_bool, var_2_object);
		@WaitForAnimEnd();
	}

}


void func_0(void)
{
	@Hold();
}


void func_66(string var_5_string)
{
	@Trace("playing " + var_5_string);
	float var_8_float;
	float var_9_float;
	@lshGetAnimTimes(var_5_string, var_8_float, var_9_float);
	@lshPlayAnimation(var_8_float, var_9_float);
	@Trace("start: " + var_8_float);
	@Trace("end: " + var_9_float);
}


void func_99(bool var_12_bool)
{
	func_66("No");
	bool var_14_bool;
	@lshWaitForAnimEnd(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_108(void)
{
	var_0_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


// @pe
void func_112(void)
{
	var_2_bool = GlobalVars[1];
	if(!var_2_bool) { //@nz
	}
	bool var_4_bool;
	func_93(var_4_bool, 1);
	if(var_4_bool != 0) {
	}
	bool var_12_bool;
	func_99(var_12_bool);
}


void func_49(bool var_1_bool, object var_2_object)
{
	cvector var_7_cvector;
	var_2_object->GetPosition(var_7_cvector);
	cvector var_8_cvector;
	@GetPosition(var_8_cvector);
	cvector var_9_cvector = var_7_cvector - var_8_cvector;
	var_11_float = GetByIndex(var_9_cvector, 0);
	var_12_float = GetByIndex(var_9_cvector, 2);
	bool var_10_bool;
	@Rotate(var_11_float, var_12_float, var_10_bool);
	var_10_bool = var_1_bool;
}


void func_84(int var_6_int)
{
	float var_8_float;
	@GetGameTime(var_8_float);
	var_6_int = 1 + (var_8_float / 24);
}


// @pe
void func_93(bool var_4_bool, int var_5_int)
{
	int var_6_int;
	func_84(var_6_int);
	var_4_bool = var_6_int == var_5_int;
}


void func_61(bool var_1_bool)
{
	bool var_3_bool;
	@IsLoaded(var_3_bool);
	var_3_bool = var_1_bool;
}


