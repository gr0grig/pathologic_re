// @GLOBALS: 0:string:Name

maintask task_0
{
	void init(void)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnIntersection(object actor)
	{
		bool var_3_bool; string var_4_string;
		@IsPlayerActor(actor, var_3_bool);
		if(var_3_bool != 0) {
			@GetActorName(var_4_string);
			bool var_6_bool; string var_7_string; string var_8_string;
			var_9_string = GlobalVars[0];
			var_9_string = var_7_string;
			var_4_string = var_8_string;
			func_19(var_6_bool, var_7_string, var_8_string);
		}
	}

}


void func_19(bool var_6_bool, string var_7_string, string var_8_string)
{
	object var_11_object;
	@FindActor(var_11_object, var_7_string);
	if(var_11_object == null)
		var_6_bool = false;
	@Trigger(var_11_object, var_8_string);
	var_6_bool = true;
}
EMIT "Stack[-1] = 0";


