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
		TVideo{"fin_termit.wmv", false};
		@PlaySound("menumusic");
		TIntro{c_iCredits};
		super.init(false);		
	}
	
	object CreateMenuButtons(void) {
		object wnd;
		@CreateWindow("game_buttons.xml", false, wnd);
		return wnd;
	}
}
