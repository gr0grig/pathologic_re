include ui_events.sci
include ui_std.sci

maintask UI_InvMoneySlot
{
	var int iAmount;
	
	void init(void) {
		iAmount = 0;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnDraw() 
	{
		@Blit("money", 1, 1);
		@Print("default", 2, 35, iAmount);
	}
	
	void OnLButtonDown(int x, int y)
	{
		@SetBackground("selected");
		@SendMessageToParent(0);
	}
	
	void OnRButtonDown(int x, int y)
	{
		@SendMessageToParent(1);
	}	
	
	void OnLButtonUp(int x, int y)
	{
	}	
	
	void OnMessage(int iMessage, string strSender, object data) {
		iAmount = iMessage;
	}
}
