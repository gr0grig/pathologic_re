include ui_events.sci
include ui_std.sci
include ui_tooltip_base.sci

maintask UI_InvSlot
{
	var int iAmount, iMaxStackSize;
	var object item;
	var string strImage;
	var bool bDisabled;
	
	void init(void) {
		item = null;
		iAmount = 1;
		bDisabled = false;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnDraw() {
		if (!item)
			return;
		
		@Blit(strImage, 1, 1);
		
		if (iAmount > 1) {
			@Print("default", 2, 35, iAmount);
		}
			
		if (bDisabled) {
			@StretchBlit("disabled", 1, 1, 50, 50);
		}
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
		if (iMessage & iSlotNumber) {
			iAmount = iMessage & iSlotMask;
			return;
		}			
		
		if (iMessage & iSlotSelected)
			@SetBackground("selected");
		else
			@SetBackground("default");
			
		if (iMessage & iSlotEmpty ) {
			item = null;
			@SetTooltip(c_iTooltipNone, "");
		}
		else {
			if (iMessage & iSlotDisabled )
				bDisabled = true;
			else
				bDisabled = false;		
			
			item = data;
			int iItemID;
			if (item) {
				item->GetItemID(iItemID);
				@GetInvItemSprite(strImage, iItemID);
				@LoadImage(strImage);
				@GetInvItemMaxStackSize(iMaxStackSize, iItemID);
				if (bDisabled) 
					@SetTooltip(c_iTooltipNone, "");
				else
					@SetTooltip(c_iTooltipInvObject, "", item);
			}
			else {
				@SetTooltip(-1, "");
			}
		}
	}
}
