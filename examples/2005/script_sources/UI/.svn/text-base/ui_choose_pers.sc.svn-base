include ui_game_base.sci

maintask UI_Game : UI_GameBase
{
	var object video;
	void init(void) {
		super.init(true);
	}
	
	object CreateMenuButtons(void) {
		object wnd;
		@CreateWindow("game_buttons.xml", false, wnd);
		return wnd;
	}
}
