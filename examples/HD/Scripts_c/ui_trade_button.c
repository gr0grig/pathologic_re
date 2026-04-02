maintask task_0
{
	void init(void)
	{
		@SetBackground("default");
		@SetOwnerDraw(false);
		@ProcessEvents();
	}

	// @pe
	void event_200(int var_0_int, string var_1_string, object var_2_object)
	{
		if(var_0_int == -4)
			func_9();
	}

	// @pe
	void OnStopSee(int var_0_int, int var_1_int)
	{
		@SetBackground("pressed");
		@SendMessageToParent(0);
	}

	// @pe
	void OnHear(int var_0_int, int var_1_int)
	{
		@SetBackground("default");
	}

	void OnCollision(void)
	{
		@SetBackground("default");
	}

}


void func_9(void)
{
	int var_9_int = 0;
	int var_10_int = 0;
	int var_11_int = 0;
	int var_12_int = 0;
	@ClientToScreen(var_9_int, var_10_int);
	@GetWindowSize(var_11_int, var_12_int);
	@SetMousePos((var_9_int + (var_11_int / 2)), (var_10_int + (var_12_int / 2)));
}


