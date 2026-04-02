include ui_inventory_base.sci

maintask TInventoryContainer : TInventoryBase {
	var object wnd;
	var int iLeftOffset;
	void init(void) {
		@CreateWindow("inventory_base.xml", false, wnd);
		UpdateScrollbar();
		super.init(c_iCWeapon);
	}
	
	object GetPlayerContainer() {
		object pcont;
		@GetPlayerContainer(pcont);
		return pcont;
	}	
	
	bool ProcessMessage(int iMessage, string strSender, object data) {
		for (int iSlot = 0; iSlot < c_iContainerSize; ++iSlot) {
			if (strSender == GetContainerSlotWndName(iSlot)) {
				OnContainerSlotClick(iSlot, iMessage == 0);
				return true;
			}
		}
		
		if (strSender == "scrollbar") {
			object container;
			@GetContainer(container);
			int iItemCount;
			container->GetItemCount(iItemCount);
			iLeftOffset = 0.01 * (iItemCount - c_iContainerSize) * iMessage + 0.5;
			if (iLeftOffset < 0)
				iLeftOffset = 0;
			UpdateContainerSlots();
			return true;
		}
		
		return false;
	}
	
	void OnMouseWheel(int x, int y, float fDelta) {
		iLeftOffset += fDelta;
		if (iLeftOffset < 0)
			iLeftOffset = 0;
		UpdateScrollbar();
	}		
	
	void ProcessUpdate(void) {
		// this is necessary in case items were added outside
		UpdateContainerSlots();
	}
	
	// called before stucking in ProcessEvents function of base class	
	void PostInit() {
		UpdateScrollbar();
		UpdateContainerSlots();
	}
	
	// internal event handlers
	void OnContainerSlotClick(int iSlot, bool bLeftClick) {
		bool bSuccess;
		ChangeCategory(MoveToPlayerContainer(bSuccess, iSlot + iLeftOffset));
		if (!bSuccess) {
			// TODO play sound
		}
		UpdateScrollbar();
	}
	
	bool OnInvSlotClick(int iSlot, bool bLeftClick) {
		MoveToContainer(m_iSelectedCategory, iSlot);
		iLeftOffset++;
		UpdateScrollbar();
		return true;
	}
	
	void UpdateScrollbar(void) {
		object container;
		@GetContainer(container);
		int iItemCount;
		container->GetItemCount(iItemCount);
		if (iItemCount <= c_iContainerSize) {
			@SendMessage(c_iScrollDisabled, "scrollbar");
			iLeftOffset = 0;
		}
		else 
		if (iLeftOffset + c_iContainerSize > iItemCount) {
			iLeftOffset -= iLeftOffset + c_iContainerSize - iItemCount;
			int iMessage = iLeftOffset * 100 / (iItemCount - c_iContainerSize);
			@SendMessage(iMessage, "scrollbar");
		}
		else {
			int iMessage = iLeftOffset * 100 / (iItemCount - c_iContainerSize);
			@SendMessage(iMessage, "scrollbar");
		}
	}

	// helper functions	
	void UpdateContainerSlots(void) 
	{
		object container;
		@GetContainer(container);
		int iItemCount;
		container->GetItemCount(iItemCount);
		for (int i = iLeftOffset; i < iLeftOffset + c_iContainerSize; ++i) {
			if (i < iItemCount) {
				object item;
				container->GetItem(item, i);
				int iItemID;
				item->GetItemID(iItemID);
				int iAmount;
				container->GetItemAmount(iAmount, i);
				
				@SendMessage(0, GetContainerSlotWndName(i - iLeftOffset), item);
				@SendMessage(iAmount | iSlotNumber, GetContainerSlotWndName(i - iLeftOffset));
			}
			else 
				@SendMessage(iSlotEmpty, GetContainerSlotWndName(i - iLeftOffset));
		}
	}		
}

