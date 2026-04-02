include ui_game_base.sci
include ui_std.sci

maintask UI_Game : UI_GameBase
{
	var object video;
	void init(void) {
		super.init(false);
		@DestroyWindow();	
	}
	
	object CreateMenuButtons(void) {
		object wnd;
		@CreateWindow("ingame_buttons.xml", false, wnd);
		return wnd;
	}
	
	void OnChar(int char) {
		@Trace(char);
		if (char == VK_ESCAPE)
			@DestroyWindow();
	}
}
