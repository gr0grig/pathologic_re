maintask task_0
{
	void init(bool var_0_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		if(var_1_string == "activate") {
			var_0_bool = true;
		} else if(var_1_string == "deactivate") {
			var_0_bool = false;
		}
	
	}

	void OnIntersection(bool var_0_bool, object var_1_object)
	{
		bool var_3_bool;
		@IsPlayerActor(var_1_object, var_3_bool);
		if(var_3_bool != 0) {
			if(var_0_bool != 0) {
				bool var_6_bool;
				func_33(var_6_bool, "quest_b11_01", "shaft_drop");
			} else {
				var_1_object->SetProperty("health", 0);
			}
		}
	
	}

}


void func_33(bool var_6_bool, string var_7_string, string var_8_string)
{
	object var_10_object;
	@FindActor(var_10_object, var_7_string);
	if(var_10_object == null)
		var_6_bool = false;
	@Trigger(var_10_object, var_8_string);
	var_6_bool = true;
}
EMIT "Stack[-1] = 0";


