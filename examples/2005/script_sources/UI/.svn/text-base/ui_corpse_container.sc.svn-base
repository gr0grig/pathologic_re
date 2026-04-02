include ui_inventory_base.sci

maintask TInventoryCorpseContainer : TInventoryBase {
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
			if (strSender == GetCorpseContainerSlotWndName(iSlot)) {
				OnCorpseContainerSlotClick(GetRealSlotPosition(iSlot, true), true);
				return true;
			}
		}	
		
		for (int iSlot = 0; iSlot < c_iContainerSize; ++iSlot) {
			if (strSender == GetContainerSlotWndName(iSlot)) {
				OnContainerSlotClick(GetRealSlotPosition(iSlot, false), true);
				return true;
			}
		}
		
		if (strSender == "scrollbar") {
			int iItemCount = GetRealItemCount();;
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
	void OnCorpseContainerSlotClick(int iSlot, bool bLeftClick) {
		@PlaySound("take_organ");
		bool bSuccess;
		ChangeCategory(MoveToPlayerContainer(bSuccess, iSlot));
		if (!bSuccess) {
			// TODO play sound
		}
	}	
	
	void OnContainerSlotClick(int iSlot, bool bLeftClick) {
		bool bSuccess;
		ChangeCategory(MoveToPlayerContainer(bSuccess, iSlot + iLeftOffset));
		if (!bSuccess) {
			// TODO play sound
		}
		UpdateScrollbar();
	}		
	
	bool OnInvSlotClick(int iSlot, int iMessage) {
		MoveToContainer(m_iSelectedCategory, iSlot);
		iLeftOffset++;
		UpdateScrollbar();
		return true;
	}
	
	void UpdateScrollbar(void) {
		int iItemCount = GetRealItemCount();
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
	void UpdateContainerSlots() 
	{
		object container;
		@GetContainer(container);
		int iItemCount;
		container->GetItemCount(iItemCount);
		
		// usual items
		int iPos = 0;
		for (int i = 0; i < iItemCount; ++i) {
			object item;
			container->GetItem(item, i);
			int iItemID;
			item->GetItemID(iItemID);
			int iAmount;
			container->GetItemAmount(iAmount, i);
			
			bool bOrgan = false;
			item->HasProperty(bOrgan, "Organ");
			if (bOrgan)
				continue;		
			
			if (iPos >= iLeftOffset) {
				@SendMessage(0, GetContainerSlotWndName(iPos - iLeftOffset), item);
				@SendMessage(iAmount | iSlotNumber, GetContainerSlotWndName(iPos - iLeftOffset));
			}
			iPos++;
			if (iPos >= c_iContainerSize + iLeftOffset)
				break;
		}
		
		for (int i = iPos + iLeftOffset; i < c_iContainerSize + iLeftOffset; ++i) {
			@SendMessage(iSlotEmpty, GetContainerSlotWndName(i - iLeftOffset));
		}
		
		// organ items
		iPos = 0;
		for (int i = 0; i < iItemCount; ++i) {
			object item;
			container->GetItem(item, i);
			int iItemID;
			item->GetItemID(iItemID);
			int iAmount;
			container->GetItemAmount(iAmount, i);
			
			bool bOrgan = false;
			item->HasProperty(bOrgan, "Organ");
			if (!bOrgan)
				continue;		
			
			@SendMessage(0, GetCorpseContainerSlotWndName(iPos), item);
			@SendMessage(iAmount | iSlotNumber, GetCorpseContainerSlotWndName(iPos));
			iPos++;
			if (iPos >= c_iContainerSize)
				break;
		}
		
		for (int i = iPos; i < c_iContainerSize; ++i) {
			@SendMessage(iSlotEmpty, GetCorpseContainerSlotWndName(i));
		}		
	}	
	
	int GetRealSlotPosition(int iPos, bool bCorpseSlot) {
		object container;
		@GetContainer(container);
		int iItemCount;
		container->GetItemCount(iItemCount);
		
		int iOrganPos = 0;
		int iContainerPos = 0;
		for (int i = 0; i < iItemCount; ++i) {
			object item;
			container->GetItem(item, i);
			int iItemID;
			item->GetItemID(iItemID);
			int iAmount;
			container->GetItemAmount(iAmount, i);
			
			bool bOrgan = false;
			item->HasProperty(bOrgan, "Organ");
			if (bOrgan) {
				if (bCorpseSlot && (iOrganPos == iPos))
					return i;
				iOrganPos++;
			}
			else {
				if (!bCorpseSlot && (iContainerPos == iPos))
					return i;
				iContainerPos++;
			}
		}	
		return -1;
	}
	
	int GetRealItemCount(void) {
		object container;
		@GetContainer(container);
		int iItemCount;
		container->GetItemCount(iItemCount);
		
		int iRealItemCount = 0;
		for (int i = 0; i < iItemCount; ++i) {
			object item;
			container->GetItem(item, i);
			int iItemID;
			item->GetItemID(iItemID);
			int iAmount;
			container->GetItemAmount(iAmount, i);
			
			bool bOrgan = false;
			item->HasProperty(bOrgan, "Organ");
			if (!bOrgan)
				iRealItemCount++;
		}	
		return iRealItemCount;
	}	
}
