maintask task_0
{
	void init(void)
	{
		bool var_2_bool;
		func_37(var_2_bool);
		if(!var_2_bool) //@nz
			@SetDeathStateAndRemove();
		object var_1_object;
		@FindParticleSystem("blood", var_1_object);
		var_1_object->Enable();
		var_1_object->AddSource([0.0, 0.0, 0.0], [0.0, 400.0, 0.0], 1.5);
		@Sleep(0.5);
		var_1_object->Fade(true);
		@Sleep(1.0);
		@SetDeathStateAndRemove();
	}
	EMIT "Stack[-1] = 0";

	void OnUnload(void)
	{
		@SetDeathStateAndRemove();
		@sync();
	}

}


void func_37(bool var_2_bool)
{
	bool var_4_bool;
	@IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
}


