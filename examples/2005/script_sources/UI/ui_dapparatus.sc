include ui_inventory_base.sci
include ui_item_base.sci
include ui_microscope_base.sci

maintask UI_DApparatus : TInventoryBase {
	var object wnd, selected_item, player, apparatus;
	
	void init(void) {
		@FindActor(player, "player");
		if (!player) {
			@DestroyWindow();
			return;
		}
		
		@GetWindowData(apparatus);
		if (!apparatus) {
			@Trace("null apparatus");
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
		if (strSender == "combine") {
			Combine();
			return true;
		}	
		else
		if (strSender == "input_organ") {
			MoveOrganToPlayer();
		}
		else
		if (strSender == "input_grass") {
			MoveGrassToPlayer();
		}
		else		
		if (strSender == "output") {
			MoveOutputToPlayer();
		}
		
		return false;
	}
	
	void ProcessUpdate(void) {
		UpdateGrassSlot();
		UpdateOrganSlot();
		UpdateOutputSlot();
	}	

	// filters	
	bool CheckDisabled(object item) {
		if (IsGrassItem(item))
			return false;
		
		return !IsOrganItem(item);
	}
	
	bool CheckSelected(int iSlot, int iCategory) {
		return false;
	}	
	
	// called before stucking in ProcessEvents function of base class	
	void PostInit() {
	}
	
	bool OnInvSlotClick(int iSlot, bool bLeftClick) {	
		if (bLeftClick) {
			return MoveToInput(iSlot);
		}
		return false;
	}
	
	bool MoveToInput(int iSlot) {
		object item;
		player->GetItem(item, iSlot, m_iSelectedCategory);
		if (IsGrassItem(item))
			return MoveToGrassInput(item, iSlot);
		if (IsOrganItem(item))
			return MoveToOrganInput(item, iSlot);
		return false;
	}
	
	bool MoveToGrassInput(object item, int iSlot) {
		object titem = GetGrassItemInst();
		if (titem)
			return false;
		
		bool bSuccess;
		apparatus->AddItem(bSuccess, item, 0, 1);
		if (!bSuccess)
			return false;
			
		player->RemoveItem(iSlot, 1, m_iSelectedCategory);
		return true;
	}	
	
	bool MoveToOrganInput(object item, int iSlot) {
		object titem = GetOrganItemInst();
		if (titem)
			return false;
		
		bool bSuccess;
		apparatus->AddItem(bSuccess, item, 0, 1);
		if (!bSuccess)
			return false;
			
		player->RemoveItem(iSlot, 1, m_iSelectedCategory);
		return true;
	}
	
	bool IsGrassItem(object item) {
		return ("grass_combination" == GetItemName(item));
	}	
	
	bool IsOrganItem(object item) {
		int iItemID = GetItemID(item);
		bool bHas;
		@HasInvItemProperty(bHas, iItemID, "Microscope");
		return bHas;		
	}
	
	int GetOrganType(object item) {
		int iItemID = GetItemID(item);
		bool bHas;
		@HasInvItemProperty(bHas, iItemID, "Microscope");
		if (!bHas)
			return false;
			
		int iType;
		@GetInvItemProperty(iType, iItemID, "Microscope");
		return iType;
	}

	object GetGrassItemInst(void) {
		int iItemCount;
		apparatus->GetItemCount(iItemCount);
		
		int iCount = 0;
		for (int i = 0; i < iItemCount; ++i) {
			object item;
			apparatus->GetItem(item, i);
			if (IsGrassItem(item))
				return item;
		}
		
		object ret = null;
		return ret;	
	}
	
	object GetOrganItemInst(void) {
		int iItemCount;
		apparatus->GetItemCount(iItemCount);
		
		int iCount = 0;
		for (int i = 0; i < iItemCount; ++i) {
			object item;
			apparatus->GetItem(item, i);
			if (IsOrganItem(item))
				return item;
		}
		
		object ret = null;
		return ret;	
	}	
	
	object GetOutputItemInst() {
		int iItemCount;
		apparatus->GetItemCount(iItemCount);
		
		int iCount = 0;
		for (int i = 0; i < iItemCount; ++i) {
			object item;
			apparatus->GetItem(item, i);
			if (!IsGrassItem(item) && !IsOrganItem(item))
				return item;
		}
		
		object ret = null;
		return ret;	
	}	
	
	int GetGrassItemSlot(void) {
		int iItemCount;
		apparatus->GetItemCount(iItemCount);
		
		for (int i = 0; i < iItemCount; ++i) {
			object item;
			apparatus->GetItem(item, i);
			if (IsGrassItem(item))
				return i;
		}
		return -1;
	}	

	int GetOrganItemSlot(void) {
		int iItemCount;
		apparatus->GetItemCount(iItemCount);
		
		for (int i = 0; i < iItemCount; ++i) {
			object item;
			apparatus->GetItem(item, i);
			if (IsOrganItem(item))
				return i;
		}
		return -1;
	}	
	
	int GetOutputItemSlot() {
		int iItemCount;
		apparatus->GetItemCount(iItemCount);
		
		int iCount = 0;
		for (int i = 0; i < iItemCount; ++i) {
			object item;
			apparatus->GetItem(item, i);
			if (!IsGrassItem(item))
				return i;
		}
		return -1;	
	}
	
	bool MoveOrganToPlayer(void) {
		int iSlot = GetOrganItemSlot();
		if (iSlot == -1)
			return false;
			
		bool bSuccess;
		player->AddItem(bSuccess, GetOrganItemInst(), c_iCOther, 1);
		if (!bSuccess)
			return false;
			
		apparatus->RemoveItem(iSlot, 1);
		ChangeCategory(c_iCOther);
		return true;			
	}
	
	bool MoveGrassToPlayer(void) {
		int iSlot = GetGrassItemSlot();
		if (iSlot == -1)
			return false;
			
		bool bSuccess;
		player->AddItem(bSuccess, GetGrassItemInst(), c_iCMedcine, 1);
		if (!bSuccess)
			return false;
			
		apparatus->RemoveItem(iSlot, 1);
		ChangeCategory(c_iCMedcine);
		return true;			
	}	
	
	bool MoveOutputToPlayer() {
		object item = GetOutputItemInst();
		if (!item)
			return false;
			
		int iSlot = GetOutputItemSlot();
			
		bool bSuccess;
		player->AddItem(bSuccess, item, c_iCMedcine, 1);
		if (!bSuccess)
			return false;
			
		apparatus->RemoveItem(iSlot, 1);
		ChangeCategory(c_iCMedcine);
		return true;			
	}
	
	void UpdateGrassSlot() {
		object item = GetGrassItemInst();
		if (item)
			@SendMessage(0, "input_grass", item);
		else
			@SendMessage(iSlotEmpty, "input_grass");
	}
	
	void UpdateOrganSlot() {
		object item = GetOrganItemInst();
		if (item)
			@SendMessage(0, "input_organ", item);
		else
			@SendMessage(iSlotEmpty, "input_organ");
	}
	
	
	void UpdateOutputSlot() {
		object item = GetOutputItemInst();
		if (item)
			@SendMessage(0, "output", item);
		else
			@SendMessage(iSlotEmpty, "output");
	}	
	
	bool Combine() {
		object gitem = GetGrassItemInst();
		object oitem = GetOrganItemInst();
		
		if (!gitem || !oitem)
			return false;

		if (GetOrganType(oitem) == c_iDiseasedAliveAvroksBlood) { // special case for burah serum
			apparatus->RemoveAllItems();
			object item;
			@CreateInvItem(item);
			item->SetItemName("burah_serum");
			bool bSuccess;
			apparatus->AddItem(bSuccess, item, 0, 1);
			return true;
		}
		
		float im_inc, hl_inc;
		gitem->GetProperty(im_inc, "im_inc");
		gitem->GetProperty(hl_inc, "hl_inc");
		
		float fDiseaseRate, fDiseaseSpeedRate, fHealthIncrease, fHealthProgress, fTirednessIncrease;

		if (GetOrganType(oitem) == c_iGoodHumanBlood) { // very weak preparate
			fDiseaseRate = 1;
			fHealthIncrease = hl_inc;
		}
		
		if (GetOrganType(oitem) == c_iDiseasedDeadHumanBlood) { // weak preparate
			float c = 1.0 * (1.0 - im_inc);
			fDiseaseRate = c;
			fHealthIncrease = hl_inc;
		}
		
		if (GetOrganType(oitem) == c_iDiseasedAliveHumanBlood) { // normal preparate
			float c = 0.8 * (1.0 - im_inc);
			fDiseaseRate = c;
			fHealthIncrease = hl_inc;
		}
		
		if (GetOrganType(oitem) == c_iDiseasedAliveBullBlood) { // good preparate
			float c = 0.5 * (1.0 - im_inc);
			fDiseaseRate = c;
			fHealthIncrease = hl_inc;
		}

		if (GetOrganType(oitem) == c_iDiseasedAliveSimonBlood) { // very good preparate
			float c = 0.3 * (1.0 - im_inc);
			fDiseaseRate = c;
			fHealthIncrease = hl_inc;
		}
		
		if (fDiseaseRate > 1)
			fDiseaseRate = 1;
			
		if (fDiseaseRate < 0.03)
			fDiseaseRate = 0.03;
			
		if (fHealthIncrease < -1)
			fHealthIncrease = -1;
		
		apparatus->RemoveAllItems();
		object item;
		@CreateInvItem(item);
		item->SetItemName("organ_combination");
		item->SetProperty("DiseaseRate", fDiseaseRate);
		item->SetProperty("HealthIncrease", fHealthIncrease);
		bool bSuccess;
		apparatus->AddItem(bSuccess, item, 0, 1);
	
		return true;
	}	
}