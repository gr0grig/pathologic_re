maintask task_0
{
	void init(bool var_0_bool)
	{
		var_0_bool = false;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(bool var_0_bool)
	{
		float var_2_float;
		if(!var_0_bool) { //@nz
			@GetGameTime(var_2_float);
			if(var_2_float >= 240)
				var_0_bool = true;
		}
	}

}


