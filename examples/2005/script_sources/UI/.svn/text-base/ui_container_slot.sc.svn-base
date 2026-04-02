include ui_std.sci
include ui_tooltip_base.sci

maintask UI_ContainerSlot
{
	var int iAmount, iMaxStackSize;
	var object item;
	var string strImage;
	
	void init(void) {
		item = null;
		iAmount = 1;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnMouseWheel(int x, int y, float fDelta) {
		@SendToParent();
	}		
	
	void OnDraw() 
	{
		if (!item)
			return;
		
		@Blit(strImage, 1, 1);
		
		if (iMaxStackSize > 1)
			@Print("default", 2, 35, iAmount);
	}
	
	void OnLButtonDown(int x, int y)
	{
		if (item)
			@SendMessageToParent(0);
	}	
		
	void OnMessage(int iMessage, string strSender, object data) {
		if (iMessage & iSlotNumber) {
			iAmount = iMessage & iSlotMask;
			return;
		}
		
		if (iMessage & iSlotEmpty ) {
			item = null;
			@SetTooltip(c_iTooltipNone, "");
		}
		else {
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
				@SetTooltip(-1, "");
			}
		}
	}
}
