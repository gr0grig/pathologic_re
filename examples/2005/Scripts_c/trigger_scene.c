// @GLOBALS: 0:string:Name,1:bool:

maintask task_0
{
	void init(void)
	{
		var_0_bool = GlobalVars[1];
		GlobalVars[1] = true;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnIntersection(object actor)
	{
		object var_4_object;
		var_5_bool = GlobalVars[1];
		if(!var_5_bool) { //@nz
		}
		bool var_3_bool;
		@IsPlayerActor(actor, var_3_bool);
		if(var_3_bool != 0) {
			var_8_bool = GlobalVars[1];
			GlobalVars[1] = false;
			@GetScene(var_4_object);
			var_9_string = GlobalVars[0];
			@Trigger(var_4_object, var_9_string);
			var_4_object = null;
		}
	}

}


