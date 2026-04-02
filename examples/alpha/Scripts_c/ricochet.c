// @GLOBALS: 0:int:Material

maintask task_0
{
	void init(void)
	{
		bool var_2_bool;
		func_67(var_2_bool);
		if(!var_2_bool) //@nz
			@SetDeathStateAndRemove();
		string var_6_string; int var_7_int;
		var_8_int = GlobalVars[0];
		var_8_int = var_7_int;
		func_47(var_6_string, var_7_int);
		@PlayGlobalSound(var_6_string, [0.0, 0.0, 0.0], 500);
		object var_1_object;
		@FindParticleSystem("richochet", var_1_object);
		var_1_object->Enable();
		var_1_object->AddSource([0.0, 0.0, 0.0], [0.0, 400.0, 0.0], 1.5);
		@Sleep(0.5);
		var_1_object->Fade(true);
		@Sleep(0.5);
		@SetDeathStateAndRemove();
	}
	EMIT "Stack[-1] = 0";

	void OnUnload(void)
	{
		@SetDeathStateAndRemove();
		@sync();
	}

}


void func_67(bool var_2_bool)
{
	bool var_4_bool;
	@IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
}


// @pe
void func_47(string var_6_string, int var_7_int)
{
	if(var_7_int == 1) {
		var_6_string = "wood";
		return 0;
	EMIT "GOTO 0x41";
	}
	if(var_7_int == 2) {
		var_6_string = "metal";
		return 0;
	EMIT "GOTO 0x41";
	}
	if(var_7_int == 3) {
		var_6_string = "ground";
		return 0;
	}
	var_6_string = "stone";
}


