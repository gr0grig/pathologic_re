// @GLOBALS: 0:string:Name

maintask task_0
{
	void init(void)
	{
		var_1_string = GlobalVars[0];
		@Trace("Triggered actor: " + var_1_string);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnIntersection(object actor)
	{
		bool var_3_bool; object var_4_object;
		@IsPlayerActor(actor, var_3_bool);
		if(var_3_bool != 0) {
			@GetScene(var_4_object);
			var_6_string = GlobalVars[0];
			@Trigger(var_4_object, var_6_string);
			var_4_object = null;
		}
	}

}


