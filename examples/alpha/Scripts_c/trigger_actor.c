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
		string var_4_string;
		var_5_bool = GlobalVars[1];
		if(!var_5_bool) { //@nz
		}
		bool var_3_bool;
		@IsPlayerActor(actor, var_3_bool);
		if(var_3_bool != 0) {
			var_8_bool = GlobalVars[1];
			GlobalVars[1] = false;
			@GetActorName(var_4_string);
			bool var_9_bool; string var_10_string; string var_11_string;
			var_12_string = GlobalVars[0];
			var_12_string = var_10_string;
			var_4_string = var_11_string;
			func_29(var_9_bool, var_10_string, var_11_string);
		}
	}

}


void func_29(bool var_9_bool, string var_10_string, string var_11_string)
{
	object var_14_object;
	@FindActor(var_14_object, var_10_string);
	if(var_14_object == null)
		var_9_bool = false;
	@Trigger(var_14_object, var_11_string);
	var_9_bool = true;
}
EMIT "Stack[-1] = 0";


