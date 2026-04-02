include ui_game_base.sci

maintask UI_Game
{
	void init(void) {
		disable OnUpdate;
		disable OnDraw;
		@UISync();
		enable OnUpdate;
		enable OnDraw;
		TVideo{"fin_smiren.wmv", false};
		@DestroyWindow();
		@NewGame("world_final.xml", "player_final.xml");
	}
}
