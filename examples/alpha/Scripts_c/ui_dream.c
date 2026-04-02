maintask task_0
{
	void init(bool var_0_bool, float var_1_float, float var_2_float)
	{
		@CaptureKeyboard();
		var_0_bool = false;
		func_60();
		@SendMessage(((100 * 6.0) / 6.0), "dream_progress");
		@ShowCursor();
		@SetCursor("default");
		@SetOwnerDraw(false);
		@SetNeedUpdate(true);
		@CaptureKeyboard();
		@ProcessEvents();
	}

	void OnPlayerStopShooting(bool var_0_bool, float var_1_float, float var_2_float)
	{
		object var_4_object;
		@GetPlayer(var_4_object);
		var_4_object->SetProperty("sleeping", false);
	}
	EMIT "Stack[-1] = 0";

	void OnSee(bool var_0_bool, float var_1_float, float var_2_float, float var_3_float)
	{
		int var_7_int;
		if(!var_0_bool) { //@nz
		}
		func_60();
		var_1_float += var_3_float;
		float var_6_float;
		@GetGameTimeScale(var_6_float);
		if(((200.0 * var_1_float) * var_6_float) > var_2_float) {
			func_51(var_7_int);
			@DestroyWindow();
		}
		@SendMessage(((100 * (var_2_float - ((200.0 * var_1_float) * var_6_float))) / 6.0), "dream_progress");
	}

	// @pe
	void event_100(bool var_0_bool, float var_1_float, float var_2_float, int var_3_int)
	{
		if(var_0_bool != 0)
			func_51(var_3_int);
		@DestroyWindow();
	}

	void event_200(bool var_0_bool, float var_1_float, float var_2_float, int var_3_int, string var_4_string, object var_5_object)
	{
		int var_9_int;
		if(var_4_string == "dream_button") {
			if(var_0_bool != 0) {
				func_51(var_9_int);
				@DestroyWindow();
			} else {
					var_0_bool = true;
					func_39(var_9_int);
		}
				if(var_4_string == "button_plus") {
					if(var_0_bool != 0)
						return 4;
					if((var_2_float + 1) > 6.0)
						var_2_float = 6.0;
					else
						var_2_float = (var_2_float / 1) * 1;
				if(!(var_4_string == "button_minus")) goto Label_213;
				if(var_0_bool != 0)
					return 4;
				if((var_2_float - 1) < 1) {
				} else {
					var_2_float = ((float)1 / 1) * 1;
				}
				@SendMessage(((100 * var_2_float) / 6.0), "dream_progress");
				}
				@SendMessage(((100 * var_2_float) / 6.0), "dream_progress");
		}
		goto Label_213;
	
	Label_213:
		for(;;) {
			return 4;

		}
	
	}

}


void func_51(float var_1_float)
{
	float var_11_float;
	@GetGameTimeScale(var_11_float);
	@AdvanceGameTime((var_1_float * var_11_float) * 200.0);
}


void func_60(void)
{
	float var_4_float;
	@GetPlayerHealth(var_4_float);
	@SendMessage((100 * var_4_float), "health");
	if(var_4_float <= 0) {
		func_51(var_4_float);
		@DestroyWindow();
	}
	@GetPlayerImmunity(var_4_float);
	@SendMessage((100 * var_4_float), "immunity");
	@GetPlayerHunger(var_4_float);
	@SendMessage((100 * var_4_float), "hunger");
	@GetPlayerTiredness(var_4_float);
	@SendMessage((100 * var_4_float), "tiredness");
	@GetPlayerDisease(var_4_float);
	@SendMessage((100 * var_4_float), "infection");
}


void func_39(float var_1_float)
{
	object var_19_object;
	@GetPlayer(var_19_object);
	var_19_object->SetProperty("sleeping", true);
	@BeginPlayerUpdate();
	var_1_float = 0;
}
EMIT "Stack[-1] = 0";


