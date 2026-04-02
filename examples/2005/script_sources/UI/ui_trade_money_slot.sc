include ui_events.sci
include ui_inventory_base.sci

maintask UI_MoneySlot
{
	var int iSum;
	
	void init(void) {
		iSum = 0;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnDraw() 
	{
		@Print("default", 2, 35, iSum);
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
		iSum = iMessage;
	}
}
