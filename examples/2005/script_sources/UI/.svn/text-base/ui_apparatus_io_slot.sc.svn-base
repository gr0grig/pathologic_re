include ui_events.sci
include ui_inventory_base.sci
include ui_tooltip_base.sci

maintask UI_TradeSlot
{
	var int iMaxStackSize;
	var object item;
	var string strImage;
	
	void init(void) {
		item = null;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnDraw() 
	{
		if (!item)
			return;
		
		@Blit(strImage, 1, 1);
	}
	
	void OnLButtonDown(int x, int y)
	{
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
		if (iMessage & iSlotNumber) {
			return;
		}
		
		if (iMessage & iSlotSelected)
			@SetBackground("selected");
		else
			@SetBackground("default");
			
		if (iMessage & iSlotEmpty ) {
			item = null;
			@SetTooltip(c_iTooltipNone, "");
			return;
		}

		item = data;
		int iItemID;
		if (item) {
			item->GetItemID(iItemID);
			@GetInvItemSprite(strImage, iItemID);
			@LoadImage(strImage);
			@GetInvItemMaxStackSize(iMaxStackSize, iItemID);
			@SetTooltip(c_iTooltipInvObject, "", item);
		}
		else {
			@SetTooltip(c_iTooltipNone, "");
		}
	}
}
