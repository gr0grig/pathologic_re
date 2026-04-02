include ui_std.sci
const int c_iContainerSize = 4;
const int c_iInventorySlots = 12;

task TInventoryBase {
	var int m_iSelectedCategory;
	
	void init(int iDefaultCategory) {
		m_iSelectedCategory = -1;
		ChangeCategory(iDefaultCategory);
		UpdateSlots(m_iSelectedCategory);
		UpdatePlayerMoney();
		
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@SetNeedUpdate(true);
		PostInit();
		@ProcessEvents();
	}
	
	void OnChar(int wChar) {
		@DestroyWindow();
	}
	
	bool CheckDisabled(object item) {
		return false;
	}
	
	bool CheckSelected(int iSlot, int iCategory) {
		bool bSelected;
		GetPlayerContainer()->IsItemSelected(bSelected, iSlot, iCategory);
		return bSelected;
	}
	
	void OnUpdate(float fDeltaTime) 
	{
		// this is necessary in case items were added outside
		UpdateSlots(m_iSelectedCategory);
		UpdatePlayerMoney();
		ProcessUpdate();
	}	
	
	void OnMessage(int iMessage, string strSender, object data) {
		bool bProcessed = false;	
		
		// first internal messages
		if (strSender == c_strBWeapon ) {
			ChangeCategory(c_iCWeapon);
			bProcessed = true;
		}
		else if (strSender == c_strBClothes) {
			ChangeCategory(c_iCClothes);
			bProcessed = true;
		}
		else if (strSender == c_strBMedcine) {
			ChangeCategory(c_iCMedcine);
			bProcessed = true;
		}
		else if (strSender == c_strBFood) {
			ChangeCategory(c_iCFood);
			bProcessed = true;
		}
		else if (strSender == c_strBOther) {
			ChangeCategory(c_iCOther);
			bProcessed = true;
		}
		else if (strSender == c_strBDetector) {
		}
		else if (strSender == c_strBAnticeptic) {
		}
		else {
			if (iMessage != 0) { // ??? TEST ME
				int iVal;
				@GetVariable("noinv_drop", iVal);
				if (iVal)
					return;
			}
			
			for (int iSlot = 0; iSlot < c_iInventorySlots; ++iSlot) {
				if (strSender == GetSlotWndName(iSlot)) {
					object pcontainer = GetPlayerContainer();
					
					int iItemCount;
					pcontainer->GetItemCount(iItemCount, m_iSelectedCategory);
					if (iItemCount > iSlot) {
						object item;
						pcontainer->GetItem(item, iSlot, m_iSelectedCategory);
						if (!CheckDisabled(item)) {
							bProcessed = OnInvSlotClick(iSlot, iMessage == 0);
						}
					}
					break;
				}
			}
		}
		
		if (!bProcessed) {
			bProcessed = ProcessMessage(iMessage, strSender, data);
		}
			
		if (bProcessed) {
		}
	}	
	
	// changes inventory category, but doesnt update items in slots
	void ChangeCategory(int iCategory) {
		if (iCategory == -1)
			return;
		if (m_iSelectedCategory == iCategory)
			return;
			
		m_iSelectedCategory = iCategory;
		ResetMainButtons(m_iSelectedCategory);
	}
	
	int GetPlayerMoneyCount() {
		object pcontainer = GetPlayerContainer();
		int iMoney;
		pcontainer->GetProperty("money", iMoney);
		return iMoney;
	}
	
	void SetPlayerMoneyCount(int iMoney) {
		object pcontainer = GetPlayerContainer();
		pcontainer->SetProperty("money", iMoney);
	}

	// updates money info	
	void UpdatePlayerMoney() {
		@SendMessage(GetPlayerMoneyCount(), "money");
	}	
	
	void ResetMainButtons(int iCategory) {
		if (iCategory != c_iCWeapon ) 
			@SendMessage(0, c_strBWeapon );
		else
			@SendMessage(1, c_strBWeapon );
			
		if (iCategory != c_iCClothes) 
			@SendMessage(0, c_strBClothes);
		else
			@SendMessage(1, c_strBClothes);
			
		if (iCategory != c_iCMedcine) 
			@SendMessage(0, c_strBMedcine);
		else
			@SendMessage(1, c_strBMedcine);
			
		if (iCategory != c_iCFood) 
			@SendMessage(0, c_strBFood);
		else
			@SendMessage(1, c_strBFood);
			
		if (iCategory != c_iCOther) 
			@SendMessage(0, c_strBOther);
		else
			@SendMessage(1, c_strBOther);
	}	
	
	// moves item from player container to container
	// returns -1 if not moved, otherwise returns category of item
	int MoveToPlayerContainer(bool bOk, int iSlot) 
	{
		bOk = false;
		if (iSlot == -1)
			return -1;
		object container, pcontainer, item;
		pcontainer = GetPlayerContainer();
		@GetContainer(container);
		
		int iItemCount;
		container->GetItemCount(iItemCount);
		if (iItemCount <= iSlot)
			return -1;
		
		int iAmount;
		container->GetItemAmount(iAmount, iSlot);
		if (iAmount == 0)
			return -1;
		
		container->GetItem(item, iSlot);
		int iItemID;
		item->GetItemID(iItemID);
		
		bool bOrgan = false;
		item->HasProperty(bOrgan, "Organ");
		if (bOrgan) {
			item->RemoveProperty("Organ");
		}
		
		int iCategory;
		@GetInvItemProperty(iCategory, iItemID, "Category");
		
		if (iItemID == GetMoneyID()) { 	// adding money to player
			int iMoney = GetPlayerMoneyCount();
			iMoney += iAmount;
			SetPlayerMoneyCount(iMoney);
			bool bSuccess;
			container->RemoveItem(iSlot, iAmount);
			UpdatePlayerMoney();
			bOk = true;
			return -1;
		}
		
		bool bSuccess;
		pcontainer->AddItem(bSuccess ,item, iCategory, 1);
		if (!bSuccess) {
			return iCategory;
		}
			
		bOk = true;
		container->RemoveItem(iSlot, 1);
		return iCategory;	
	}	
	
	// moves item from player container to container
	// returns false if not moved
	bool MoveToContainer(int iCategory, int iSlot) 
	{
		object container, pcontainer, item;
		pcontainer = GetPlayerContainer();
		@GetContainer(container);
		
		int iItemCount;
		pcontainer->GetItemCount(iItemCount, iCategory);
		if (iItemCount <= iSlot)
			return false;
		
		int iAmount;
		pcontainer->GetItemAmount(iAmount, iSlot, iCategory);
		pcontainer->GetItem(item, iSlot, iCategory);
		bool bSuccess;
		container->AddItem(bSuccess ,item, 0, 1);
		if (!bSuccess)
			return false;
			
		if (m_iSelectedCategory == c_iCWeapon) {
			int iItemID;
			item->GetItemID(iItemID);			
		
			bool bWeapon;
			@HasInvItemProperty(bWeapon, iItemID, "Weapon");
			if (bWeapon) {
				bool bSelected;
				pcontainer->IsItemSelected(bSelected, iSlot, m_iSelectedCategory);	
				if (bSelected)
					@SetPlayerHandsItem(-1);
			}
		}

		pcontainer->RemoveItem(iSlot, 1, iCategory);
		return true;
	}	
	
	void UpdateSlots(int iCategory) 
	{
		object container = GetPlayerContainer();
		
		int iItemCount;
		container->GetItemCount(iItemCount, iCategory);
		
		for (int i = 0; i < c_iInventorySlots; ++i) {
			if (i < iItemCount) {
				object item;
				container->GetItem(item, i, iCategory);
				
				int iAmount;
				container->GetItemAmount(iAmount, i, iCategory);
				
				bool bSelected = CheckSelected(i, iCategory);
				bool bDisabled = CheckDisabled(item);
						
				if (bSelected) {
					if (bDisabled)
						@SendMessage(iSlotSelected & iSlotDisabled, GetSlotWndName(i), item);
					else
						@SendMessage(iSlotSelected, GetSlotWndName(i), item);
				}
				else {
					if (bDisabled)
						@SendMessage(iSlotDisabled, GetSlotWndName(i), item);
					else
						@SendMessage(0, GetSlotWndName(i), item);
				}
				
				@SendMessage(iAmount | iSlotNumber, GetSlotWndName(i));
			}
			else 
				@SendMessage(iSlotEmpty, GetSlotWndName(i));
		}
	}
}





