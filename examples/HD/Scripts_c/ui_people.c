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
	void event_101(int var_0_int)
	{
		if(var_0_int == 267) {
			@SendMessage(1001, "text");
		} else if(var_0_int == 268) {
			@SendMessage(1000, "text");
		}
	
	}

	// @pe
	void event_102(int var_0_int)
	{
		if(var_0_int == 272) {
			@SendMessage(1001, "text");
		} else if(var_0_int == 274) {
			@SendMessage(1000, "text");
		}
	
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


