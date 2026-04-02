include ui_inventory_base.sci
include ui_std.sci
include ui_item_base.sci

const int c_iSlotsNumber = 4;

int GetSlotByMessage(int iMessage, string strSender) {
	for (int i = 0; i < c_iSlotsNumber; ++i) {
		if (strSender == GetSlotWndName(i)) {
			return i;
		}
	}
	return -1;
}

int GetPlayerMoney(void) {
	object player;
	@FindActor(player, "player");
	int iMoney;
	player->GetProperty("money", iMoney);
	return iMoney;
}

maintask UI_Repair
{
	var object items, prices, sel;
	var int iPlayerMoney, iSelMoney, iLeftOffset;
	
	void init(void) {
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		
		iPlayerMoney = GetPlayerMoney();
		@GetChooseItems(items);
		@GetAdditionalData(prices);
		@GetReturnValue(sel);
		
		UpdateScrollbar();
		UpdateSlots();
		
		@ProcessEvents();
	}
	
	bool IsSlotSelected(int iSlot) {
		int iSize;
		sel->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			int iVal;
			sel->get(iVal, i);
			if (iVal == iSlot)
				return true;
		}
		return false;
	}
	
	void SelectSlot(int iSlot) {
		if (IsSlotSelected(iSlot))
			return;
		int iVal;
		prices->get(iVal, iSlot);
		if (iPlayerMoney >= iVal) {
			iPlayerMoney -= iVal;
			iSelMoney += iVal;
			sel->add(iSlot);
		}
	}
	
	void DeselectSlot(int iSlot) {
		int iSize;
		sel->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			int iVal;
			sel->get(iVal, i);
			if (iVal == iSlot) {
				sel->remove(i);
				int iVal;
				prices->get(iVal, iSlot);
				iPlayerMoney += iVal;
				iSelMoney -= iVal;
				break;
			}
		}
	}	
	

	void OnChar(int wChar)
	{
		sel->clear();
		@DestroyWindow();
	}
	
	void OnMouseWheel(int x, int y, float fDelta) {
		iLeftOffset += fDelta;
		if (iLeftOffset < 0)
			iLeftOffset = 0;
		UpdateScrollbar();
		UpdateSlots();
	}		
	
	void UpdateScrollbar(void) {
		int iItemCount;
		items->size(iItemCount);
		
		if (iItemCount <= c_iSlotsNumber) {
			@SendMessage(c_iScrollDisabled, "scrollbar");
			iLeftOffset = 0;
		}
		else 
		if (iLeftOffset + c_iSlotsNumber > iItemCount) {
			iLeftOffset -= iLeftOffset + c_iSlotsNumber - iItemCount;
			int iMessage = iLeftOffset * 100 / (iItemCount - c_iSlotsNumber);
			@SendMessage(iMessage, "scrollbar");
		}
/*		else {
			int iMessage = iLeftOffset * 100 / (iItemCount - c_iSlotsNumber);
			@SendMessage(iMessage, "scrollbar");
		}*/
	}
	
	
	void UpdateSlots() 
	{
		@SendMessage(GetPlayerMoney(), "money_slot");
		@SendMessage(iSelMoney, "sel_money_slot");
		int iItemCount;
		items->size(iItemCount);
		for (int i = iLeftOffset; i < iLeftOffset + c_iSlotsNumber; ++i) {
			if (i < iItemCount) {
				object item;
				items->get(item, i);
				int iPrice;
				prices->get(iPrice, i);
				
				if (IsSlotSelected(i)) {
					@SendMessage(iSlotSelected | iPrice, GetSlotWndName(i - iLeftOffset), item);
				}
				else {
					@SendMessage(iPrice, GetSlotWndName(i - iLeftOffset), item);
				}
			}
			else 
				@SendMessage(iSlotEmpty, GetSlotWndName(i - iLeftOffset));
		}
	}	
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "ok") {
			Do();
		}
		else 
		if (strSender == "cancel") {
			Cancel();
		}
		else
		if (strSender == "scrollbar") {
			int iItemCount;
			items->size(iItemCount);
			
			iLeftOffset = 0.01 * (iItemCount - c_iSlotsNumber) * iMessage + 0.5;
			if (iLeftOffset < 0)
				iLeftOffset = 0;
			UpdateScrollbar();
			UpdateSlots();
		}
		else {
			int iSlot = GetSlotByMessage(iMessage, strSender);
			if (iSlot != -1) {
				if (iMessage == 0) {
					ProcessLClick(iSlot + iLeftOffset);
				}
				else
				if (iMessage == 1) {
					ProcessRClick(iSlot + iLeftOffset);
				}
			}
		}
	}	
	

	void Do() {
		@DestroyWindow();
	}
	
	void Cancel() {
		sel->clear();
		iPlayerMoney = GetPlayerMoney();
		iSelMoney = 0;
		UpdateSlots();
	}
	
	void ProcessLClick(int iSlot) {
		SelectSlot(iSlot);
		UpdateSlots();	
	}	
	
	void ProcessRClick(int iSlot) {
		DeselectSlot(iSlot);
		UpdateSlots();	
	}	
}
