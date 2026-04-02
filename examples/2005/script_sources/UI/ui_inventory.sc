include ui_inventory_base.sci

maintask TInventory : TInventoryBase
{
	var object wnd;

	void init(void) {
		@CreateWindow("inventory_base.xml", false, wnd);
		super.init(c_iCWeapon);
	}
	
	object GetPlayerContainer() {
		object pcont;
		@GetPlayerContainer(pcont);
		return pcont;
	}	
	
	bool ProcessMessage(int iMessage, string strSender, object data) {
		return false;
	}
	
	void ProcessUpdate(void) {
	}	
	
	// called before stucking in ProcessEvents function of base class	
	void PostInit() {}
	
	bool OnInvSlotClick(int iSlot, bool bLeftClick) {	
		if (bLeftClick)
			ToggleSlot(iSlot);
		else {
			// dropping item to earth
			MoveToContainer(m_iSelectedCategory, iSlot);
		}
		return true;
	}
	
	void ToggleSlot(int iSlot)
	{
		object container = GetPlayerContainer();
		
		int iItemCount;
		container->GetItemCount(iItemCount, m_iSelectedCategory);
		if (iSlot >= iItemCount)
			return;
			
		object item;
		container->GetItem(item, iSlot, m_iSelectedCategory);
		
		int iItemID;
		item->GetItemID(iItemID);

		int iAmount;
		container->GetItemAmount(iAmount, iSlot, m_iSelectedCategory);

		bool bSelected;
		container->IsItemSelected(bSelected, iSlot, m_iSelectedCategory);	
			
		if (m_iSelectedCategory == c_iCWeapon) {
			bool bWeapon;
			@HasInvItemProperty(bWeapon, iItemID, "Weapon");
			if (!bWeapon)
				return;
			
			if (bSelected) {
				container->SelectItem(iSlot, false, m_iSelectedCategory);
				@SetPlayerHandsItem(-1);
			}
			else {
				@SetPlayerHandsItem(iItemID);
				
				for (int i = 0; i < iItemCount; ++i) {
					container->SelectItem(i, false, m_iSelectedCategory);
				}
				container->SelectItem(iSlot, true, m_iSelectedCategory);
			}
		}
		else 
		if (m_iSelectedCategory == c_iCClothes) {
			bool bSelectable;
			@HasInvItemProperty(bSelectable, iItemID, "Group");
			if (!bSelectable)
				return;
				
			int iGroup;
			@GetInvItemProperty(iGroup, iItemID, "Group");
		
			if (bSelected) {
				container->SelectItem(iSlot, false, m_iSelectedCategory);
			}
			else {
				for (int i = 0; i < iItemCount; ++i) {
					bool bSel;
					container->IsItemSelected(bSel, i, m_iSelectedCategory);	
					if (!bSel)
						continue;
					object item;
					container->GetItem(item, i, m_iSelectedCategory);
					int iID;
					item->GetItemID(iID);
					bool bGroup;
					@HasInvItemProperty(bGroup, iID, "Group");
					if (!bGroup)
						continue;
					int iItemGroup;
					@GetInvItemProperty(iItemGroup, iID, "Group");
					if (iItemGroup == iGroup) {
						container->SelectItem(i, false, m_iSelectedCategory);
						break;
					}
				}
				container->SelectItem(iSlot, true, m_iSelectedCategory);
			}	
		}
		else {
			bool bUsed;
			@UseItem(iSlot, m_iSelectedCategory, bUsed);
			if (bUsed) {
				iAmount--;
				if (iAmount == 0) {
					bool bSuccess;
					//container->RemoveItem(bSuccess, iItemID, m_iSelectedCategory);
					container->RemoveItem(iSlot, 1, m_iSelectedCategory);
				}
				else {
					container->SetItemAmount(iAmount, iSlot, m_iSelectedCategory);
				}
			}
		}
	}	
}
/*
maintask UI_Inventory
{
	void init(void) {
		if (IsContainer()) {
			if (IsCorpseContainer())
				TInventoryCorpseContainer{};
			else
				TInventoryContainer{};
		}
		else
			TInventory{};
	}
}
*/