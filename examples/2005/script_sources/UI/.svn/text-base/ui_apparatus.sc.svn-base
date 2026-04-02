include ui_inventory_base.sci
include ui_item_base.sci

const float c_fImmunityScale = 20.0;
const float c_fHealthScale = 15.0;

const float c_fBlackIm = 0.3;
const float c_fBlackHl = 0.4;

const float c_fBrownIm = 1.0;
const float c_fBrownHl = -1.0;

const float c_fBloodIm = -0.3;
const float c_fBloodHl =  0.4;

const float c_fSavyurImMul = 2.0;
const float c_fWhiteHlMul =  0.5;

maintask UI_Apparatus : TInventoryBase {
	var object wnd, selected_item, player, apparatus;
	var object hl_plus, im_plus, hl_mul, im_mul;
	
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
		
		@CreateFloatVector(im_plus);
		@CreateFloatVector(hl_plus);
		@CreateFloatVector(hl_mul);
		@CreateFloatVector(im_mul);
		
		// black
		im_plus->add(c_fBlackIm);		
		hl_plus->add(c_fBlackHl);
		im_mul->add(1);
		hl_mul->add(1);
		
		// blood
		im_plus->add(c_fBloodIm);		
		hl_plus->add(c_fBloodHl);
		im_mul->add(1);
		hl_mul->add(1);
		
		// brown
		im_plus->add(c_fBrownIm);		
		hl_plus->add(c_fBrownHl);
		im_mul->add(1);
		hl_mul->add(1);
		
		// savyur
		im_plus->add(0);		
		hl_plus->add(0);
		im_mul->add(c_fSavyurImMul);
		hl_mul->add(1);
		
		// white
		im_plus->add(0);		
		hl_plus->add(0);
		im_mul->add(1);
		hl_mul->add(c_fWhiteHlMul);
		
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
				
		for (int iSlot = 0; iSlot < 4; ++iSlot) {
			if (strSender == ("input0" + (iSlot + 1))) {
				if (GetInputItemAmount() > iSlot) {
					MoveInputToPlayer(iSlot);
				}
			}		
		}
		
		if (strSender == "output") {
			MoveOutputToPlayer();
		}
		
		return false;
	}
	
	void ProcessUpdate(void) {
		UpdateInputSlots();
		UpdateOutputSlot();
	}	

	// filters	
	bool CheckDisabled(object item) {
		return !IsGrassItem(item);
	}
	
	bool CheckSelected(int iSlot, int iCategory) {
		return false;
	}	
	
	// called before stucking in ProcessEvents function of base class	
	void PostInit() {
	}
	
	bool OnInvSlotClick(int iSlot, bool bLeftClick) {	
		if (bLeftClick) {
			MoveToInput(iSlot);
			return true;
		}
		return false;
	}
	
	bool MoveToInput(int iSlot) {
		if (!HasFreeInputSpace())
			return false;
			
		object item;
		
		int iItemCount;
		player->GetItemCount(iItemCount, c_iCOther);
		if (iItemCount <= iSlot)
			return false;
		
		int iAmount;
		player->GetItemAmount(iAmount, iSlot, c_iCOther);
		
		player->GetItem(item, iSlot, c_iCOther);
		int iItemID;
		item->GetItemID(iItemID);
		bool bSuccess;
		apparatus->AddItem(bSuccess ,item, 0, 1);
		if (!bSuccess)
			return false;
			
		player->RemoveItem(iSlot, 1, c_iCOther);
		return true;
	}	

	bool HasFreeInputSpace() {
		return (GetInputItemAmount() < 4);
	}

	int GetInputItemAmount() {
		int iItemCount;
		apparatus->GetItemCount(iItemCount);
		
		int iCount = 0;
		for (int i = 0; i < iItemCount; ++i) {
			object item;
			apparatus->GetItem(item, i);
			if (!IsGrassItem(item))
				continue;
				
			int iAmount;
			apparatus->GetItemAmount(iAmount, i);
			
			iCount += iAmount;
		}
		return iCount;
	}
	
	object GetInputItemInst(int iPos) {
		int iItemCount;
		apparatus->GetItemCount(iItemCount);
		
		int iCount = 0;
		for (int i = 0; i < iItemCount; ++i) {
			object item;
			apparatus->GetItem(item, i);
			if (!IsGrassItem(item))
				continue;
				
			int iAmount;
			apparatus->GetItemAmount(iAmount, i);
			
			iCount += iAmount;
			if (iCount > iPos) 
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
			if (!IsGrassItem(item))
				return item;
		}
		
		object ret = null;
		return ret;	
	}	
	
	bool IsGrassItem(object item) {
		int iItemID = GetItemID(item);
		bool bHas;
		@HasInvItemProperty(bHas, iItemID, "Grass");
		return bHas;		
	}	
	
	int GetGrassType(object item) {
		int id = GetItemID(item);
		bool bHas;
		@HasInvItemProperty(bHas, id, "Grass");
		if (!bHas)
			return -1;
			
		int iGrassType;
		@GetInvItemProperty(iGrassType, id, "Grass");
			
		return iGrassType;
	}		
	
	// input:	slot position
	// output:	slot position in apparatus container
	int GetInputItemRealSlot(int iPos) {
		int iItemCount;
		apparatus->GetItemCount(iItemCount);
		
		int iCount = 0;
		for (int i = 0; i < iItemCount; ++i) {
			object item;
			apparatus->GetItem(item, i);
			if (!IsGrassItem(item))
				continue;
				
			int iAmount;
			apparatus->GetItemAmount(iAmount, i);
			
			iCount += iAmount;
			if (iCount > iPos) 
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
	
	bool MoveInputToPlayer(int iSlot) {
		int iRealSlot = GetInputItemRealSlot(iSlot);
		if (iRealSlot == -1)
			return false;
			
		bool bSuccess;
		player->AddItem(bSuccess ,GetInputItemInst(iSlot), c_iCOther, 1);
		if (!bSuccess)
			return false;
			
		apparatus->RemoveItem(iRealSlot, 1);
		ChangeCategory(c_iCOther);
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
	
	void UpdateInputSlots() {
		int iAmount = GetInputItemAmount();
		for (int i = 0; i < 4; ++i) {
			object item = GetInputItemInst(i);
			if (item) {
				@SendMessage(0, "input0" + (i + 1), item);
			}
			else {
				@SendMessage(iSlotEmpty, "input0" + (i + 1));
			}
		}
	}
	
	void UpdateOutputSlot() {
		object item = GetOutputItemInst();
		if (item)
			@SendMessage(0, "output", item);
		else
			@SendMessage(iSlotEmpty, "output");
	}	
	
	bool Combine() {
		if (GetInputItemAmount() == 0)
			return false;
			
		if (GetOutputItemInst())
			return false;
			
		float im = 0, hl = 0;
		float immul = 1, hlmul = 1;
		for (int i = 0; i < GetInputItemAmount(); ++i) {
			object item = GetInputItemInst(i);
			int iType = GetGrassType(item);
			
			float fVal;
			im_plus->get(fVal, iType);
			im += fVal;
			hl_plus->get(fVal, iType);
			hl += fVal;
			
			im_mul->get(fVal, iType);
			immul *= fVal;
			
			hl_mul->get(fVal, iType);
			hlmul *= fVal;
		}
		
		im *= immul;
		hl *= hlmul;
		
		im = (im > 0) ? im : -im;	
		hl = (hl > 0) ? hl : -hl;	
		
		im *= c_fImmunityScale;
		hl *= c_fHealthScale;
		
		if (im > 100)
			im = 100;
			
		if (hl > 100)
			hl = 100;
		
		
		// creating item
		object item;
		@CreateInvItem(item);
		item->SetItemName("grass_combination");
		item->SetProperty("im_inc", (im / 100.0));
		item->SetProperty("hl_inc", -(hl / 100.0));
		
		// removing combination items
		apparatus->RemoveAllItems();
		
		// adding item to container
		bool bSuccess;
		apparatus->AddItem(bSuccess, item, 0, 1);
		return true;
	}	
}