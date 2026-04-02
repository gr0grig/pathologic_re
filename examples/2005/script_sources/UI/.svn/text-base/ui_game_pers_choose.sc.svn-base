include ui_events.sci

maintask UI_PersChoose
{
	void init(void) {
		@SetOwnerDraw(false);
		//@SetCursor("default");
		@SetModal(true);
		//SetBackground("default");
		@ProcessEvents();
	}
		

	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "danko_button") {
			@SendToParent(0);
			@DestroyWindow();
		}

		if (strSender == "klara_button") {
			@SendToParent(1);
		}

		if (strSender == "burah_button") {
			@SendToParent(2);
		}

	}
}
