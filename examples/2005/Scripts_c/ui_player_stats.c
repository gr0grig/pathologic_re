maintask task_0
{
	void init(void)
	{
		@CaptureKeyboard();
		@SetCursor("default");
		object var_7_object;
		@FindActor(var_7_object, "player");
		if(!var_7_object) //@nz
			@DestroyWindow();
		float var_8_float;
		var_7_object->GetProperty("health", var_8_float);
		@SendMessage((100 * var_8_float), "health");
		var_7_object->GetProperty("immunity", var_8_float);
		@SendMessage((100 * var_8_float), "immunity");
		var_7_object->GetProperty("reputation", var_8_float);
		@SendMessage((100 * var_8_float), "reputation");
		var_7_object->GetProperty("hunger", var_8_float);
		@SendMessage((100 * var_8_float), "hunger");
		var_7_object->GetProperty("tiredness", var_8_float);
		@SendMessage((100 * var_8_float), "tiredness");
		var_7_object->GetProperty("disease", var_8_float);
		@SendMessage((100 * var_8_float), "infection");
		float var_9_float;
		var_7_object->GetProperty("armor", var_9_float);
		float var_10_float;
		var_7_object->GetProperty("armor_fire", var_10_float);
		float var_11_float;
		var_7_object->GetProperty("armor_phys", var_11_float);
		float var_12_float;
		var_7_object->GetProperty("armor_bullet", var_12_float);
		float var_13_float;
		var_7_object->GetProperty("armor_disease", var_13_float);
		@SendMessage((var_9_float + var_10_float), "armor_fire");
		@SendMessage((var_9_float + var_11_float), "armor_phys");
		@SendMessage((var_9_float + var_12_float), "armor_bullet");
		@SendMessage(var_13_float, "armor_disease");
		@SendMessage(700, "reputation_text");
		@SendMessage(701, "health_text");
		@SendMessage(702, "immunity_text");
		@SendMessage(703, "hunger_text");
		@SendMessage(704, "tiredness_text");
		@SendMessage(705, "infection_text");
		@SendMessage(706, "armor_phys_text");
		@SendMessage(707, "armor_bullet_text");
		@SendMessage(708, "armor_fire_text");
		@SendMessage(709, "armor_disease_text");
		@SendMessage(710, "body_text");
		@SendMessage(711, "clothes_text");
		@SendMessage(712, "time_text");
		@ProcessEvents();
	}
	EMIT "Stack[-7] = 0";

	// @pe
	void event_200(int var_0_int, string var_1_string, object var_2_object)
	{
		if(var_1_string == "people_button")
			@DestroyWindow(1);
	}

	// @pe
	void event_100(int var_0_int)
	{
		@DestroyWindow();
	}

}


