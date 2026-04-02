maintask task_0
{
	void init(object var_0_object)
	{
		@SetSaveProperty(0, 3);
		func_22(var_0_object);
		@sync();
		@PlaySharedSound("intro");
		@Sleep(188.0);
		func_61(var_0_object);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnTrigger(object var_0_object, string var_1_string)
	{
		if(var_1_string == "exit")
			func_52();
	}

}


void func_52(void)
{
	@Trace("exiting");
	@RemoveWorld();
	@ActivateInitGameOverride("choose_pers.xml");
}


void func_61(object var_0_object)
{
	object var_22_object; object var_23_object; bool var_24_bool;
	var_0_object->GetGroupActors(var_22_object, 0); //@t
	
	for(;;) {
		var_22_object->Next(var_24_bool, var_23_object);
		if(var_24_bool == 0) goto Label_75;
		if(var_23_object != 0)
			@Trigger(var_23_object, "off");
	}
	
Label_75:
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_22(object var_0_object)
{
	object var_7_object;
	@FindActor(var_7_object, "player");
	@GetSceneByName(var_0_object, "intro_theater");
	if(!var_0_object) //@nz
		@Trace("Intro scene not found");
	bool var_8_bool;
	cvector var_9_cvector;
	cvector var_10_cvector;
	var_0_object->GetLocator("birth", var_8_bool, var_9_cvector, var_10_cvector); //@t
	if(var_8_bool != 0)
		@Teleport(var_7_object, var_0_object, var_9_cvector, var_10_cvector);
}
EMIT "Stack[-4] = 0";


