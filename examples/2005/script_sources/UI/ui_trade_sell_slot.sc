include ui_events.sci
include ui_inventory_base.sci
include ui_tooltip_base.sci

maintask UI_TradeSlot
{
	var int iAmount, iTotalAmount;
	var object item;
	var bool bDisabled;
	var string strImage;
	
	void init(void) {
		item = null;
		iAmount = 0;
		iTotalAmount = 1;
		bDisabled = false;
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
		
		if (iTotalAmount > 1 && !bDisabled) {
			string str = iAmount + "/" + iTotalAmount;
			int iWidth;
			@GetTextWidth(iWidth, "default", str);
			int iPos = 50 - 2 - iWidth;
			if (iPos < 2)
				iPos = 2;
			@Print("default", iPos, 35, str);
		}
			
		if (bDisabled) {
			@StretchBlit("disabled", 1, 1, 50, 50);
		}
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
			data->get(iAmount, 0);
			data->get(iTotalAmount, 1);
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

		if (iMessage & iSlotDisabled ) {
			bDisabled = true;
		}
		else {
			bDisabled = false;		
		}
		
		//else {
			item = data;
			int iItemID;
			if (item) {
				item->GetItemID(iItemID);
				@GetItemImage(iItemID, strImage);
				@LoadImage(strImage);
				if (bDisabled)
					@SetTooltip(c_iTooltipNone, "");
				else
					@SetTooltip(c_iTooltipTradeSell, "", item);
			}
			else {
				@SetTooltip(c_iTooltipNone, "");
			}
		//}
	}
}
