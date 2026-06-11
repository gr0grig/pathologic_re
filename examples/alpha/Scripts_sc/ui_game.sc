event OnDraw 0;
event OnMessage 200;

maintask t0
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

	void OnDraw(void)
	{
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "start") {
			@ShowCursor(false);
			@NewGame("world_danko.xml", "player_danko.xml");
			@DestroyWindow();
		}
		if (a1 == "loadgame_button") {
			@DestroyWindow();
		}
		if (a1 == "savegame_button") {
			@DestroyWindow();
		}
		if (a1 == "danko_button") {
			@ShowCursor(false);
			@NewGame("world_danko.xml", "player_danko.xml");
			@DestroyWindow();
		}
	}
}

