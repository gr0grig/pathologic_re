// @GLOBALS: 0:object:

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
		func_93();
		bool var_0_bool;
		func_61(var_0_bool);
		if(!var_0_bool) { //@nz
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
		func_94();
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


void func_66(string var_4_string)
{
	@Trace("playing " + var_4_string);
	float var_7_float;
	float var_8_float;
	@lshGetAnimTimes(var_4_string, var_7_float, var_8_float);
	@lshPlayAnimation(var_7_float, var_8_float);
	@Trace("start: " + var_7_float);
	@Trace("end: " + var_8_float);
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


void func_84(bool var_2_bool)
{
	func_66("No");
	bool var_4_bool;
	@lshWaitForAnimEnd(var_4_bool);
	var_4_bool = var_2_bool;
}


void func_93(void)
{
}


void func_61(bool var_0_bool)
{
	bool var_2_bool;
	@IsLoaded(var_2_bool);
	var_2_bool = var_0_bool;
}


// @pe
void func_94(void)
{
	bool var_2_bool;
	func_84(var_2_bool);
}


