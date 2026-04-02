include ui_game_base.sci

maintask UI_Game : UI_GameBase
{
	var object video;
	
	void init(void) {
		disable OnUpdate;
		disable OnDraw;
		@UISync();
		enable OnUpdate;
		enable OnDraw;
		TVideo{"death_fail.wmv", true};
		super.init(false);		
	}
	
	object CreateMenuButtons(void) {
		object wnd;
		@CreateWindow("game_buttons.xml", false, wnd);
		return wnd;
	}
}
