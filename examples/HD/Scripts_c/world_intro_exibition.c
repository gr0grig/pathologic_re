maintask task_0
{
	void init(object var_0_object)
	{
		@SetSaveProperty(0, 3);
		@RegisterKeyCallback("escape");
		func_38(var_0_object);
		@sync();
		@PlaySharedSound("intro");
		@Sleep(188.0);
		func_77(var_0_object);
		@Sleep(2);
		string var_31_string = "exit";
		func_60();
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnKeyDown(object var_0_object, int var_1_int)
	{
		string var_2_string = "exit";
		func_60();
	}

	// @pe
		void OnTrigger(object var_0_object, string var_31_string)
		{
		if(var_31_string == "exit")
			func_68();
		}

}


void func_68(void)
{
	@Trace("exiting");
	@RemoveWorld();
	@ActivateInitGameOverride("choose_pers.xml");
}


void func_77(object var_0_object)
{
	object var_23_object; object var_24_object; bool var_25_bool;
	var_0_object->GetGroupActors(var_23_object, 0); //@t
	
	for(;;) {
		var_23_object->Next(var_25_bool, var_24_object);
		if(var_25_bool == 0) goto Label_91;
		if(var_24_object != 0)
			@Trigger(var_24_object, "off");
	}
	
Label_91:
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_38(object var_0_object)
{
	object var_8_object;
	@FindActor(var_8_object, "player");
	@GetSceneByName(var_0_object, "intro_theater");
	if(!var_0_object) //@nz
		@Trace("Intro scene not found");
	bool var_9_bool;
	cvector var_10_cvector;
	cvector var_11_cvector;
	var_0_object->GetLocator("birth", var_9_bool, var_10_cvector, var_11_cvector); //@t
	if(var_9_bool != 0)
		@Teleport(var_8_object, var_0_object, var_10_cvector, var_11_cvector);
}
EMIT "Stack[-4] = 0";


