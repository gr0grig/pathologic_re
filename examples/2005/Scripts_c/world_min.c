maintask task_0
{
	// @pe
	void init(void)
	{
		func_4();
	}

}


void func_4(void)
{
	object var_5_object;
	@FindActor(var_5_object, "player");
	object var_6_object;
	@GetSceneByName(var_6_object, "test_scene");
	bool var_7_bool;
	cvector var_8_cvector;
	cvector var_9_cvector;
	var_6_object->GetLocator("birth", var_7_bool, var_8_cvector, var_9_cvector);
	if(var_7_bool != 0)
		@Teleport(var_5_object, var_6_object, var_8_cvector, var_9_cvector);
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


