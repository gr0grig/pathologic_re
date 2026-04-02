maintask task_0
{
	void init(int var_0_int)
	{
		@GetDiarySelectedSection(var_0_int);
		@SetCursor("default");
		@ShowCursor();
		func_53(var_0_int);
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@ProcessEvents();
	}

	// @pe
	void event_100(int var_0_int, int var_1_int)
	{
		@SetDiarySelectedSection(var_0_int);
		@DestroyWindow();
	}

	// @pe
	void event_200(int var_0_int, int var_1_int, string var_2_string, object var_3_object)
	{
		if(var_2_string == "button_mission") {
			func_53(0);
		} else if(var_2_string == "button_daytasks") {
				func_53(1);
		}
	Label_52:
		for(;;) {
			return 0;

		}
	
		if(!(var_2_string == "button_othertasks")) goto Label_52;
		func_53(2);
	}

}


// @pe
void func_53(int var_2_int)
{
	if(var_2_int != 0)
		@SendMessage(0, "button_mission");
	else
		@SendMessage(1, "button_mission");
	if(var_2_int != 1)
		@SendMessage(0, "button_daytasks");
	else
		@SendMessage(1, "button_daytasks");

	if(var_2_int != 2)
		@SendMessage(0, "button_othertasks");
	else
		@SendMessage(1, "button_othertasks");

	@SendMessage(var_2_int, "text");
	
}


