include ui_std.sci

maintask UI_GameButtonSimple
{
	var bool bHightlight, bDisabled;
	void init(void) {
		bHightlight = false;
		bDisabled = false;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnDraw(void) {
		if (!bHightlight || bDisabled)
			@StretchBlit("disabled", 0, 0, 250, 297);
	}
	
	void OnLButtonDown(int x, int y) {
		if (!bDisabled)
			@SendMessageToParent(0);
	}
	
	void OnMouseEnter() {
		bHightlight = true;
		@SendMessageToParent(1);
	}	
	
	void OnMouseLeave() {
		bHightlight = false;
		@SendMessageToParent(2);
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (iSlotDisabled == iMessage) {
			bDisabled = true;
		}
	}
}
