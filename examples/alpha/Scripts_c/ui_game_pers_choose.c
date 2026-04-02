maintask task_0
{
	void init(void)
	{
		@SetOwnerDraw(false);
		@SetModal(true);
		@ProcessEvents();
	}

	// @pe
	void event_200(int var_0_int, string var_1_string, object var_2_object)
	{
		if(var_1_string == "danko_button") {
			@SendToParent(0);
			@DestroyWindow();
		}
		if(var_1_string == "klara_button")
			@SendToParent(1);
		if(var_1_string == "burah_button")
			@SendToParent(2);
	}

}


