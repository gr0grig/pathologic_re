maintask task_0
{
	void init(int var_0_int)
	{
		var_0_int = 0;
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	// @pe
	void event_200(int var_0_int, int var_1_int, string var_2_string, object var_3_object)
	{
		var_0_int = var_1_int;
	}

	void OnUse(int var_0_int)
	{
		int var_4_int; int var_5_int;
		@GetWindowSize(var_4_int, var_5_int);
		int var_6_int = (var_4_int * var_0_int) / 100;
		if(var_6_int < 4) {
		}
		var_6_int -= 4;
		if(var_6_int != 0)
			@StretchBlit("middle", 2, 0, var_6_int, 7);
		@Blit("start", 0, 0);
		@Blit("end", (2 + var_6_int), 0);
	}

}


