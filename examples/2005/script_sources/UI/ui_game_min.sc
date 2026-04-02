include ui_events.sci

maintask UI_Game
{
	void init(void) {
		@NewGame("world_min.xml", "player.xml");
		@DestroyWindow();
	}
}
