maintask task_0
{
	void init(int var_0_int)
	{
		@GetDiarySelectedSection(var_0_int);
		@SetCursor("default");
		@ShowCursor();
		func_147(var_0_int);
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
	void event_101(int var_0_int, int var_1_int)
	{
		if(var_1_int == 266) {
			if(var_0_int == 0) {
				var_0_int = 1;
				func_147(var_0_int);
			} else {
					if(var_0_int == 1) {
						var_0_int = 2;
						func_147(var_0_int);
				}
				for(;;) {
					} else if(var_0_int == 2) {
				var_0_int = 0;
				func_147(var_0_int);
		}
			if(var_1_int == 265) {
				if(var_0_int == 0) {
					var_0_int = 2;
					func_147(var_0_int);
				} else if(var_0_int == 1) {
						var_0_int = 0;
						func_147(var_0_int);
				}
			Label_85:
				for(;;) {
					goto Label_101;

				}

				if(!(var_0_int == 2)) goto Label_85;
				func_147(1);
			}
			if(var_1_int == 267) {
				@SendMessage(1001, "text");
			} else if(var_1_int == 268) {
				@SendMessage(1000, "text");
				}
			}
		Label_101:
			return 0;

		}
	
	}

	// @pe
	void event_102(int var_0_int, int var_1_int)
	{
		if(var_1_int == 272) {
			@SendMessage(1001, "text");
		} else if(var_1_int == 274) {
			@SendMessage(1000, "text");
		}
	
	}

	// @pe
	void event_200(int var_0_int, int var_1_int, string var_2_string, object var_3_object)
	{
		if(var_2_string == "button_mission") {
			func_147(0);
		} else if(var_2_string == "button_daytasks") {
				func_147(1);
		}
	Label_146:
		for(;;) {
			return 0;

		}
	
		if(!(var_2_string == "button_othertasks")) goto Label_146;
		func_147(2);
	}

}


// @pe
void func_147(int var_2_int)
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


