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

maintask UI_Agony
{
	var object Items, Agony, player, Selection, Amounts, owner;
	var float fObjectAgony;
	var int iLeftOffset;
	
	void init(void) {
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		
		@GetWindowData(owner);
		if (!owner) {
			@DestroyWindow();
			return;
		}
		
		owner->GetProperty("agony", fObjectAgony);
		
		InitSlots();
		UpdateScrollbar();
		UpdateSlots();
		UpdateBar();
		
		@ProcessEvents();
	}
	
	bool HasItemWithID(int id)
	{
		int iSize;
		Items->size(iSize);
		for (int i = 0; i < iSize; ++i) {	
			object item;
			Items->get(item, i);
			if (GetItemID(item) == id)
				return true;
		}
		return false;
	}
	
	void InitSlots() {
		@CreateObjectVector(Items);
		@CreateFloatVector(Agony);
		@CreateIntVector(Selection);
		@CreateIntVector(Amounts);
		
		@FindActor(player, "player");
		if (!player) {
			@DestroyWindow(); 
			return;
		}
		
		int iItemCount;
		player->GetItemCount(iItemCount, c_iCMedcine);
		for (int i = 0; i < iItemCount; ++i) {
			object item;
			player->GetItem(item, i, c_iCMedcine);
			int id = GetItemID(item);
			bool bHas;
			@HasInvItemProperty(bHas, id, "Agony");
			if (!bHas)
				continue;
				
			if (HasItemWithID(id))
				continue;
				
			float fAgony;
			@GetInvItemProperty(fAgony, id, "Agony");
			
			int iAmount;
			player->GetItemCountOfType(iAmount, id);
			
			Items->add(item);
			Agony->add(fAgony);	
			Amounts->add(iAmount);
			Selection->add(0);		
		}
	}
	
	void OnChar(int wChar)
	{
		@DestroyWindow();
	}
	
	void OnMouseWheel(int x, int y, float fDelta) {
		iLeftOffset += fDelta;
		if (iLeftOffset < 0)
			iLeftOffset = 0;
		UpdateScrollbar();
		UpdateSlots();
	}		
	
	float GetAgonyLevel() {
		float fRet = fObjectAgony;
		int iSize;
		Items->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			object item;
			Items->get(item, i);
			float fAgony;
			Agony->get(fAgony, i);
			int iSel;
			Selection->get(iSel, i);
			fRet -= iSel * fAgony;
		}
		return fRet;
	}
	
	void UpdateBar() {
		@SendMessage(100 * GetAgonyLevel(), "level");
	}
	
	void UpdateScrollbar(void) {
		int iItemCount;
		Items->size(iItemCount);
		
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
		int iItemCount;
		Items->size(iItemCount);
		for (int i = iLeftOffset; i < c_iSlotsNumber + iLeftOffset; ++i) {
			if (i < iItemCount) {
				object item;
				Items->get(item, i);
				int iSelected;
				Selection->get(iSelected, i);
				int iAmount;
				Amounts->get(iAmount, i);
				
				if (iSelected) {
					@SendMessage(iSlotSelected, GetSlotWndName(i - iLeftOffset), item);
				}
				else
					@SendMessage(0, GetSlotWndName(i - iLeftOffset), item);
					
				@SendMessage(iSelected | iSlotNumber, GetSlotWndName(i - iLeftOffset));
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
			Items->size(iItemCount);
			
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
	
	void RemovePlayerItem(int iItemID) {
		int iCount;
		player->GetItemCount(iCount, c_iCMedcine);
		
		int iBest = -1;
		float fBestDisease;
		for (int i = 0; i < iCount; ++i) {
			object item;
			player->GetItem(item, i, c_iCMedcine);
			int iID = GetItemID(item);
			if (iID == iItemID) {
				bool bHas;
				item->HasProperty(bHas, "disease");
				if (!bHas) {
					if (iBest == -1 || fBestDisease > 0) {
						iBest = i;
						fBestDisease = 0;
					}
				}
				else {
					float fDisease;
					item->GetProperty(fDisease, "disease");
					if (iBest == -1 || fDisease < fBestDisease) {
						iBest = i;
						fBestDisease = fDisease;
					}
				}
			}
		}	
		
		if (iBest != -1) {
			player->RemoveItem(iBest, 1, c_iCMedcine);
		}
	}
	
	void RemovePlayerItems() {
		int iSize;
		Selection->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			int iSel;
			Selection->get(iSel, i);
			
			if (iSel) {
				object item;
				Items->get(item, i);
				for (int j = 0; j < iSel; ++j)
					RemovePlayerItem(GetItemID(item));
			}
		}		
	}
	
	void Do() {
		float fAgony = GetAgonyLevel();
		if (fAgony < 0.001)
			fAgony = 0;
		@Trace("Do " + fAgony);
		owner->SetProperty("agony", fAgony);
		
		RemovePlayerItems();
		@DestroyWindow();
	}
	
	void Cancel() {
		int iSize;
		Selection->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			Selection->set(i, 0);
		}
		UpdateSlots();
		UpdateBar();
	}
	
	void ProcessLClick(int iSlot) {
		int iSize;
		Selection->size(iSize);
		if (iSlot >= iSize)
			return;
		
		object item;
		Items->get(item, iSlot);
		
		int iAmount;
		Amounts->get(iAmount, iSlot);
		int iSelected;
		Selection->get(iSelected, iSlot);
		
		if (iAmount <= iSelected)
			return;
			
		iSelected += 1;
		Selection->set(iSlot, iSelected);
		UpdateSlots();	
		UpdateBar();	
	}	
	
	void ProcessRClick(int iSlot) {
		int iSize;
		Selection->size(iSize);
		if (iSlot >= iSize)
			return;
		
		object item;
		Items->get(item, iSlot);
		
		int iSelected;
		Selection->get(iSelected, iSlot);
		
		if (iSelected == 0)
			return;
			
		iSelected -= 1;
		Selection->set(iSlot, iSelected);
		UpdateSlots();	
		UpdateBar();	
	}
}
