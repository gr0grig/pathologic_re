include ui_game_base.sci

const bool c_bSimpleStart = false;

void LoadMap(string strMap) 
{
	@UITrace("loading map: " + strMap);
	bool bSuccess;
	@LoadMap(bSuccess, strMap);
}

maintask UI_Game : UI_GameBase
{
	var object video;
	void init(void) {
	
		if (c_bSimpleStart) {
			@NewGame("world_danko.xml", "player_danko.xml");
			@DestroyWindow();
			return;
		}
		
		//@CreateWindow("mapload.xml", false, wndPers);
		TVideo{"logo_buka.wmv", true};
		TVideo{"logo_icepick.wmv", true};
		TIntro{0};
		TVideo{"intro.wmv", true};
		super.init(false);
	}
	
	object CreateMenuButtons(void) {
		object wnd;
		@CreateWindow("game_buttons.xml", false, wnd);
		return wnd;
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "editbox") {
			string strMap;
			data->get(strMap, 0);
			@DestroyWindow();
			LoadMap(strMap);
			return;
		}
		super.OnMessage(iMessage, strSender, data);
	}

}
