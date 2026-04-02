maintask task_0
{
	void init(object var_0_object)
	{
		@Trace("World inited");
		@SetSaveProperty(0, 4);
		object var_2_object;
		func_22(var_2_object);
		@sync();
		@AddBlankActorFromXml(var_2_object, var_0_object, "final_quest_actor", "final_quest_actor.xml");
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	// @pe
	void OnTrigger(object var_0_object, string var_1_string)
	{
		@Trace("world trigger " + var_1_string);
		if(var_1_string == "open") {
			func_88();
		} else if(var_1_string == "exit") {
			@RemoveWorld();
			@GameOver("gameover_credits.xml");
		}
	
	}

}


void func_88(void)
{
	@Trace("exiting from game");
	func_65(var_1_string);
	bool var_19_bool;
	func_100(var_19_bool, "final_quest_actor", "whiten");
}


void func_65(object var_0_object)
{
	object var_10_object; object var_11_object; bool var_12_bool;
	var_0_object->GetGroupActors(var_10_object, 0); //@t
	@Trace("door begin");
	
	for(;;) {
		var_10_object->Next(var_12_bool, var_11_object);
		if(var_12_bool == 0) goto Label_85;
		if(var_10_object != 0) {
			@Trace("door");
			@Trigger(var_11_object, "open");
		}
	}
	
Label_85:
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_100(bool var_19_bool, string var_20_string, string var_21_string)
{
	object var_23_object;
	@FindActor(var_23_object, var_20_string);
	if(var_23_object == null)
		var_19_bool = false;
	@Trigger(var_23_object, var_21_string);
	var_19_bool = true;
}
EMIT "Stack[-1] = 0";


void func_22(object var_0_object)
{
	object var_10_object;
	@FindActor(var_10_object, "player");
	@GetSceneByName(var_0_object, "final_theater");
	if(!var_0_object) //@nz
		@Trace("Final scene not found");
	bool var_11_bool;
	cvector var_12_cvector;
	cvector var_13_cvector;
	var_0_object->GetLocator("birth", var_11_bool, var_12_cvector, var_13_cvector); //@t
	if(var_11_bool != 0)
		@Teleport(var_10_object, var_0_object, var_12_cvector, var_13_cvector);
}
EMIT "Stack[-4] = 0";


