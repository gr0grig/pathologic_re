maintask task_0
{
	void init(void)
	{
		object var_10_object;
		func_74(var_10_object);
		object var_7_object;
		var_10_object = var_7_object;
		object var_6_object;
		func_80(var_6_object, var_7_object, "cs_final_theater_klara", "cs_final_theater_klara.xml");
		object var_3_object;
		var_6_object = var_3_object;
		object var_17_object; object var_18_object;
		object var_21_object;
		func_74(var_21_object);
		var_21_object = var_18_object;
		func_80(var_17_object, var_18_object, "cs_final_theater_danko", "cs_final_theater_danko.xml");
		object var_4_object;
		var_17_object = var_4_object;
		object var_22_object; object var_23_object;
		object var_26_object;
		func_74(var_26_object);
		var_26_object = var_23_object;
		func_80(var_22_object, var_23_object, "cs_final_theater_burah", "cs_final_theater_burah.xml");
		object var_5_object;
		var_22_object = var_5_object;
		var_4_object->ForceGeometryLoad();
		var_3_object->ForceGeometryLoad();
		var_5_object->ForceGeometryLoad();
		func_100();
		@RegisterKeyCallback("space");
		@CameraPlay("cs_final_theater.mot");
		@sync();
		bool var_31_bool;
		func_88(var_31_bool, "final_quest_actor", "voices");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		func_105();
		@CameraSwitchToNormal();
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(6)";
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";
	EMIT "Stack[-3] = 0";

	// @pe
	void OnKeyDown(int iKey)
	{
		@CameraSwitchToNormal();
	}

}


void func_100(void)
{
	@SetSepia(0.5, 0.886);
}


void func_105(void)
{
	@SetSepia(0, 0);
}


void func_74(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_80(object var_6_object, object var_7_object, string var_8_string, string var_9_string)
{
	object var_14_object;
	@AddActor(var_14_object, var_8_string, var_7_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], var_9_string);
	var_14_object = var_6_object;
}
EMIT "Stack[-1] = 0";


void func_88(bool var_31_bool, string var_32_string, string var_33_string)
{
	object var_35_object;
	@FindActor(var_35_object, var_32_string);
	if(var_35_object == null)
		var_31_bool = false;
	@Trigger(var_35_object, var_33_string);
	var_31_bool = true;
}
EMIT "Stack[-1] = 0";


