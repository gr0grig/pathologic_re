maintask task_0
{
	void init(void)
	{
		@ShowCursor();
		@SetOwnerDraw(false);
		@SetCursor("default");
		@SetBackground("default");
		@PlaySound("menumusic");
		@ProcessEvents();
	}

	void OnUse(void)
	{
	}

	// @pe
	void event_200(int var_0_int, string var_1_string, object var_2_object)
	{
		if(var_1_string == "start") {
			@ShowCursor(false);
			@NewGame("world_danko.xml", "player_danko.xml");
			@DestroyWindow();
		}
		if(var_1_string == "loadgame_button")
			@DestroyWindow();
		if(var_1_string == "savegame_button")
			@DestroyWindow();
		if(var_1_string == "danko_button") {
			@ShowCursor(false);
			@NewGame("world_danko.xml", "player_danko.xml");
			@DestroyWindow();
		}
	}

}


