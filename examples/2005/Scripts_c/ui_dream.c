maintask task_0
{
	void init(bool var_0_bool, float var_1_float, float var_2_float)
	{
		@CaptureKeyboard();
		var_0_bool = false;
		func_96();
		@SendMessage(((100 * 6.0) / 6.0), "dream_progress");
		@SendMessage(701, "health_text");
		@SendMessage(702, "immunity_text");
		@SendMessage(703, "hunger_text");
		@SendMessage(704, "tiredness_text");
		@SendMessage(705, "infection_text");
		@ShowCursor();
		@SetCursor("default");
		@SetOwnerDraw(false);
		@SetNeedUpdate(true);
		@CaptureKeyboard();
		@ProcessEvents();
	}

	void OnPlayerStopShooting(bool var_0_bool, float var_1_float, float var_2_float)
	{
		object var_5_object;
		@GetPlayer(var_5_object);
		var_5_object->SetProperty("sleeping", false);
		object var_6_object;
		@CreateFloatVector(var_6_object);
		var_6_object->add(0);
		@SendWorldWndMessage(11, var_6_object);
		@SendWorldWndMessage(12, var_6_object);
		@SendWorldWndMessage(13, var_6_object);
		@SendWorldWndMessage(14, var_6_object);
		@SendWorldWndMessage(15, var_6_object);
		@SendWorldWndMessage(16, var_6_object);
	}
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";

	void OnSee(bool var_0_bool, float var_1_float, float var_2_float, float var_3_float)
	{
		if(!var_0_bool) { //@nz
		}
		float var_6_float;
		@GetGameTimeScale(var_6_float);
		@AdvanceGameTime((var_3_float * var_6_float) * 200.0);
		func_96();
		var_1_float += var_3_float;
		if(((200.0 * var_1_float) * var_6_float) > var_2_float) {
			func_95();
			@DestroyWindow();
		}
		@SendMessage(((100 * (var_2_float - ((200.0 * var_1_float) * var_6_float))) / 6.0), "dream_progress");
	}

	// @pe
	void event_100(bool var_0_bool, float var_1_float, float var_2_float, int var_3_int)
	{
		if(var_0_bool != 0)
			func_95();
		@DestroyWindow();
	}

	void event_200(bool var_0_bool, float var_1_float, float var_2_float, int var_3_int, string var_4_string, object var_5_object)
	{
		int var_9_int;
		if(var_4_string == "dream_button") {
			if(var_0_bool != 0) {
				func_95();
				@DestroyWindow();
			} else {
					var_0_bool = true;
					func_83(var_9_int);
		}
				if(var_4_string == "button_plus") {
					if(var_0_bool != 0)
						return 4;
					if((var_2_float + 1) > 6.0)
						var_2_float = 6.0;
					else
						var_2_float = (var_2_float / 1) * 1;
				if(!(var_4_string == "button_minus")) goto Label_254;
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
		goto Label_254;
	
	Label_254:
		for(;;) {
			return 4;

		}
	
	}

}


void func_96(void)
{
	float var_4_float;
	@GetPlayerHealth(var_4_float);
	@SendMessage((100 * var_4_float), "health");
	if(var_4_float <= 0) {
		func_95();
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


void func_83(float var_1_float)
{
	object var_14_object;
	@GetPlayer(var_14_object);
	var_14_object->SetProperty("sleeping", true);
	@BeginPlayerUpdate();
	var_1_float = 0;
}
EMIT "Stack[-1] = 0";


void func_95(void)
{
}


