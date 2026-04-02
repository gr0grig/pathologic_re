include ui_inventory_base.sci
include ui_item_base.sci
include ui_microscope_base.sci

maintask UI_Microscope : TInventoryBase {
	var object wnd, selected_item, player;
	void init(void) {
		@FindActor(player, "player");
		if (!player) {
			@DestroyWindow();
			return;
		}
		@CreateWindow("inventory_base.xml", false, wnd);
		super.init(c_iCOther);
	}
	
	object GetPlayerContainer() {
		return player;
	}	
	
	bool ProcessMessage(int iMessage, string strSender, object data) {
		return false;
	}
	
	void ProcessUpdate(void) {
	}	

	// filters	
	bool CheckDisabled(object item) {
		int iItemID;
		item->GetItemID(iItemID);
		bool bHas;
		@HasInvItemProperty(bHas, iItemID, "Microscope");
		return !bHas;
	}
	
	bool CheckSelected(int iSlot, int iCategory) {
		object item;
		GetPlayerContainer()->GetItem(item, iSlot, iCategory);
		return CheckSameItems(selected_item, item);
	}	
	
	// called before stucking in ProcessEvents function of base class	
	void PostInit() {
	}
	
	bool OnInvSlotClick(int iSlot, bool bLeftClick) {	
		if (bLeftClick) {
			ToggleSlot(iSlot);
			return true;
		}
		return false;
	}
	
	void ToggleSlot(int iSlot) {
		object container = GetPlayerContainer();
		object item;
		container->GetItem(item, iSlot, m_iSelectedCategory);

		bool bSelected = CheckSameItems(selected_item, item);
		if (bSelected) {
			// deselecting item
			selected_item = null;
			@SendMessage(c_iNoBlood, "video");
		}
		else {
			// selecting new one
			int iMicro;
			@GetInvItemProperty(iMicro, GetItemID(item), "Microscope");
			@SendMessage(iMicro, "video");
			@SetVariable("microscope_" + GetItemName(item), 1);
			selected_item = item;
		}
	}
}