maintask task_0
{
	void init(void)
	{
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@ProcessEvents();
	}

	// @pe
	void event_100(int var_0_int)
	{
		@DestroyWindow();
	}

	// @pe
	void event_200(int var_0_int, string var_1_string, object var_2_object)
	{
	}

}


