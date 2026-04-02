include ui_trade_base.sci
include ui_item_base.sci

const int c_iTradeSlotsNumber = 18;
const int c_iTradeSlotsWidth = 2;
const int c_iPlayerContainerSlotsNumber = 12;

int GetContainerItemCount() {
	int iItemCount;
	object container;
	@GetContainer(container);
	container->GetItemCount(iItemCount);
	return iItemCount;
}

int GetPlayerContainerItemCount(int iCategory) {
	int iItemCount;
	object pcontainer;
	@GetPlayerContainer(pcontainer);
	pcontainer->GetItemCount(iItemCount, iCategory);
	return iItemCount;
}

object GetPlayerContainerItem(int iCategory, int i) {
	object pcontainer, item;
	@GetPlayerContainer(pcontainer);
	pcontainer->GetItem(item, i, iCategory);
	return item;
}

int GetPlayerContainerItemAmount(int iCategory, int i) {
	object pcontainer; int iAmount;
	@GetPlayerContainer(pcontainer);
	pcontainer->GetItemAmount(iAmount, i, iCategory);
	return iAmount;
}

bool IsPlayerItemSelected(int iCategory, int iSlot) {
	object pcontainer;
	@GetPlayerContainer(pcontainer);

	bool bSelected;
	pcontainer->IsItemSelected(bSelected, iSlot, iCategory);	
	return bSelected;
}

object GetContainerItem(int i) {
	object container, item;
	@GetContainer(container);
	container->GetItem(item, i);
	return item;
}

int GetContainerItemAmount(int i) {
	object container; int iAmount;
	@GetContainer(container);
	container->GetItemAmount(iAmount, i);
	return iAmount;
}

bool ExactEqualItems(object item1, object item2) {
	bool bEqual;
	item1->Compare(bEqual, item2);
	return bEqual;
/*	if ((GetItemID(item1) != GetItemID(item2))
		return false;
		
	bool bHas1, bHas2;
	item1->HasProperty(bHas1, "durability");
	item2->HasProperty(bHas2, "durability");
	
	if (bHas1 != bHas2)
		return false;
	
	if (bHas1) {
		int iD1, iD2;
		item1->GetProperty(iD1, "durability");
		item2->GetProperty(iD2, "durability");
		if (iD1 != iD2)
			return false;
	}

	return true;	*/
}

bool DiseaseEqualItems(object item1, object item2) {
	return ExactEqualItems(item1, item2);
}

object CorrectDisease(object item1, object item2) {
	return item1;
}

bool IsItemToDisable(object item, int iTradeType, bool bSell) {
	if (iTradeType == 0)
		return false;
		
	bool bHas;
	@HasInvItemProperty(bHas, GetItemID(item), "BarterPrice" + iTradeType);
	if (!bHas)
		return true;
	
	int iPrice;
	@GetInvItemProperty(iPrice, GetItemID(item), "BarterPrice" + iTradeType);
	if (bSell && iPrice > 0)
		return false;
		
	if (!bSell && iPrice < 0)
		return false;
		
	return true;
}

bool RemoveItem(object container, object _item, int iCategory) {
	int iItemCount;
	object item;
	container->GetItemCount(iItemCount, iCategory);
	for (int i = 0; i < iItemCount; ++i) {
		container->GetItem(item, i, iCategory);
		if (ExactEqualItems(_item, item)) {
			container->RemoveItem(i, 1, iCategory);
			return true;
		}
	}
	return false;
}

bool AddItem(object container, object _item, int iCategory) {
	bool bSuccess;
	container->AddItem(bSuccess, _item, iCategory , 1);
	return bSuccess;
}

maintask UI_Trade
{
	var int iLeftOffset, iRightOffset;
	var int iPlayerMoney, iSalesmanMoney;
	var object vRSlotsItems, vRSlotsAmounts, vRSlotsSelection;
	var object vLSlotsItems, vLSlotsAmounts, vLSlotsSelection;
	
	var object vPlayerWeaponItems, vPlayerWeaponAmounts;
	var object vPlayerClothesItems, vPlayerClothesAmounts;
	var object vPlayerMedcineItems, vPlayerMedcineAmounts;
	var object vPlayerFoodItems, vPlayerFoodAmounts;
	var object vPlayerOtherItems, vPlayerOtherAmounts;
	
	var object vItemsToAdd, vItemsToRemove;
	
	var object vSalesmanItems, vSalesmanAmounts;
	
	var int iDay, iTradeType;
	var object salesman;
	
	void EnqueueItemToAdd(object _item) {
		int iSize;
		object item;
		vItemsToRemove->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			vItemsToRemove->get(item, i);
			if (ExactEqualItems(item, _item)) {
				vItemsToRemove->remove(i);
				return;
			}
		}
		
		vItemsToAdd->add(_item);
	}
	
	void EnqueueItemToRemove(object _item) {
		int iSize;
		object item;
		vItemsToAdd->size(iSize	);
		for (int i = 0; i < iSize; ++i) {
			vItemsToAdd->get(item, i);
			if (ExactEqualItems(item, _item)) {
				vItemsToAdd->remove(i);
				return;
			}
		}
		
		vItemsToRemove->add(_item);
	}
	
	void init(void) {
		@GetContainer(salesman);
	
		@CreateObjectVector(vItemsToAdd); 
		@CreateObjectVector(vItemsToRemove); 
	
		@CreateObjectVector(vRSlotsItems); 
		@CreateIntVector(vRSlotsAmounts); 
		@CreateIntVector(vRSlotsSelection); 
			
		@CreateObjectVector(vLSlotsItems); 
		@CreateIntVector(vLSlotsAmounts); 
		@CreateIntVector(vLSlotsSelection); 
			
		@CreateObjectVector(vPlayerWeaponItems); 
		@CreateIntVector(vPlayerWeaponAmounts); 
		
		@CreateObjectVector(vPlayerClothesItems); 
		@CreateIntVector(vPlayerClothesAmounts); 
		
		@CreateObjectVector(vPlayerMedcineItems); 
		@CreateIntVector(vPlayerMedcineAmounts); 
		
		@CreateObjectVector(vPlayerFoodItems); 
		@CreateIntVector(vPlayerFoodAmounts); 
		
		@CreateObjectVector(vPlayerOtherItems); 
		@CreateIntVector(vPlayerOtherAmounts); 
		
		iTradeType = GetTradeType();
		
		CancelTrade();	
		
		// day
		float fTime;
		@GetGameTime(fTime);
		iDay = 1 + fTime / 24;
	
		@ShowCursor();
		@SetCursor("default");
		@CaptureKeyboard();
		@ProcessEvents();
	}
	
	void OnChar(int wChar) 
	{
		@DestroyWindow();
	}	
	
	void OnMessage(int iMessage, string strSender, object data) 
	{
		int iSlot;
		iSlot = GetLeftSlotByMessage(iMessage, strSender);
		if (iSlot != -1) {
			if (iMessage == 0)
				ProcessSalesmanSlotLClick(iSlot);
			else
				ProcessSalesmanSlotRClick(iSlot);
			return;
		}

		iSlot = GetRightSlotByMessage(iMessage, strSender);
		if (iSlot != -1) {
			if (iMessage == 0)
				ProcessPlayerSlotLClick(iSlot);
			else
				ProcessPlayerSlotRClick(iSlot);
			return;
		}
		
		if (strSender == "cancel_button") {
			CancelTrade();
			return;
		}
		
		if (strSender == "background_left") {
			@Trace("background_left" + iMessage);
			iLeftOffset += 2 * iMessage;
			UpdateSalesmanTradeSlots();
		}

		if (strSender == "background_right") {
			@Trace("background_right" + iMessage);
			iRightOffset += 2 * iMessage;
			UpdatePlayerTradeSlots();
		}
		
		if (strSender == "l_scroll_button_top") {
			iLeftOffset -= 2;
			UpdateSalesmanTradeSlots();
			return;
		}
		
		if (strSender == "l_scroll_button_bottom") {
			iLeftOffset += 2;
			UpdateSalesmanTradeSlots();
			return;
		}
		
		if (strSender == "r_scroll_button_top") {
			iRightOffset -= 2;
			UpdatePlayerTradeSlots();
			return;
		}
		
		if (strSender == "r_scroll_button_bottom") {
			iRightOffset += 2;
			UpdatePlayerTradeSlots();
			return;
		}
		
		if (strSender == "l_scrollbar") {
			iLeftOffset = GetLScrollRange() * iMessage / 100.0 + 0.5;
			iLeftOffset *= c_iTradeSlotsWidth;
			UpdateSalesmanTradeSlots();
			return;
		}		

		if (strSender == "r_scrollbar") {
			iRightOffset = (GetRScrollRange() * iMessage / 100.0 + 0.5);
			iRightOffset *= c_iTradeSlotsWidth;
			UpdatePlayerTradeSlots();
			return;
		}		
		
		if (strSender == "ok_button") {
			DoTrade();
			return;
		}
	}	
	
	// resets trade (or inits it)
	void CancelTrade() 
	{
		iLeftOffset = 0; 
		iRightOffset = 0;
		
		iSalesmanMoney = 0;
		if (iTradeType == 0)
			@GetPlayerMoneyCount(iPlayerMoney);
		else
			iPlayerMoney = 0;
		
		vItemsToAdd->clear();
		vItemsToRemove->clear();
	
		vRSlotsItems->clear(); 
		vRSlotsAmounts->clear(); 
		vRSlotsSelection->clear(); 
		
		vLSlotsItems->clear(); 
		vLSlotsAmounts->clear(); 
		vLSlotsSelection->clear(); 
		
		vPlayerWeaponItems->clear(); 
		vPlayerWeaponAmounts->clear(); 
		vPlayerClothesItems->clear(); 
		vPlayerClothesAmounts->clear(); 
		vPlayerMedcineItems->clear(); 
		vPlayerMedcineAmounts->clear(); 
		vPlayerFoodItems->clear(); 
		vPlayerFoodAmounts->clear(); 
		vPlayerOtherItems->clear(); 
		vPlayerOtherAmounts->clear(); 
	
		FillSalesmanItems();
		FillPlayerItems();
		FillPlayerItemCopy();
		
		UpdateSalesmanTradeSlots();
		UpdateSalesmanMoneySlot();
		
		UpdatePlayerTradeSlots();
		UpdatePlayerMoneySlot();
		
		int iItemCount;
		vLSlotsItems->size(iItemCount);
		if (iItemCount <= c_iTradeSlotsNumber)
			@SendMessage(c_iScrollDisabled, "l_scrollbar");
		else
			@SendMessage(0, "l_scrollbar");

		vRSlotsItems->size(iItemCount);
		if (iItemCount <= c_iTradeSlotsNumber)
			@SendMessage(c_iScrollDisabled, "r_scrollbar");
		else
			@SendMessage(0, "r_scrollbar");	
	}
	
	void FillPlayerItems() {
		FillCategory(c_iCWeapon, false);
		FillCategory(c_iCClothes, false);
		FillCategory(c_iCMedcine, false);
		FillCategory(c_iCFood, false);
		FillCategory(c_iCOther, false);
		
		FillCategory(c_iCWeapon, true);
		FillCategory(c_iCClothes, true);
		FillCategory(c_iCMedcine, true);
		FillCategory(c_iCFood, true);
		FillCategory(c_iCOther, true);
	}		
	
	void FillCategory(int iCategory, bool bDisabledItems) {
		object item;
		int iItemCount, iAmount;
		iItemCount = GetPlayerContainerItemCount(iCategory);
		for (int i = 0; i < iItemCount; ++i) {
			if (IsPlayerItemSelected(iCategory, i))
				continue;
				
			iAmount = GetPlayerContainerItemAmount(iCategory, i);
			item = GetPlayerContainerItem(iCategory, i);
			if (bDisabledItems && IsItemToDisable(item, iTradeType, true)) {
				vRSlotsItems->add(item);
				vRSlotsAmounts->add(iAmount);
				vRSlotsSelection->add(0);
			}
			else
			if (!bDisabledItems && !IsItemToDisable(item, iTradeType, true)) {
				vRSlotsItems->add(item);
				vRSlotsAmounts->add(iAmount);
				vRSlotsSelection->add(0);
			}
		}
	}	
	
	void FillSalesmanItems() {
		int iItemCount, iAmount;
		object container, item;
		iItemCount = GetContainerItemCount();
		for (int i = 0; i < iItemCount; ++i) {
			iAmount = GetContainerItemAmount(i);
			item = GetContainerItem(i);
		
			vLSlotsItems->add(item);
			vLSlotsAmounts->add(iAmount);
			vLSlotsSelection->add(0);
		}
	}	
	
	void FillPlayerItemCopy()	
	{
		FillPlayerItemCopyCategory(c_iCWeapon, vPlayerWeaponItems, vPlayerWeaponAmounts);
		FillPlayerItemCopyCategory(c_iCClothes, vPlayerClothesItems, vPlayerClothesAmounts);
		FillPlayerItemCopyCategory(c_iCMedcine, vPlayerMedcineItems, vPlayerMedcineAmounts);
		FillPlayerItemCopyCategory(c_iCFood, vPlayerFoodItems, vPlayerFoodAmounts);
		FillPlayerItemCopyCategory(c_iCOther, vPlayerOtherItems, vPlayerOtherAmounts);
	}
	
	void FillPlayerItemCopyCategory(int iCategory, object items, object amounts)
	{
		object item;
		int iItemCount, iAmount;
		iItemCount = GetPlayerContainerItemCount(iCategory);
		for (int i = 0; i < iItemCount; ++i) {
			if (IsPlayerItemSelected(iCategory, i))
				continue;
		
			iAmount = GetPlayerContainerItemAmount(iCategory, i);
			item = GetPlayerContainerItem(iCategory, i);
		
			items->add(item);
			amounts->add(iAmount);
		}	
	}
	
	int GetLScrollRange() {
		int iItemCount;
		vLSlotsItems->size(iItemCount);
		int iRange = (iItemCount + c_iTradeSlotsWidth - 1) / c_iTradeSlotsWidth - c_iTradeSlotsNumber / c_iTradeSlotsWidth;;
		if (iRange < 0)
			return 0;
		return iRange;
	}
	
	int GetRScrollRange() {
		int iItemCount;
		vRSlotsItems->size(iItemCount);
		int iRange = (iItemCount + c_iTradeSlotsWidth - 1) / c_iTradeSlotsWidth - c_iTradeSlotsNumber / c_iTradeSlotsWidth;
		if (iRange < 0)
			return 0;
		return iRange;
	}	
	
	void UpdateSalesmanTradeSlots() 
	{
		int iItemCount;
		vLSlotsItems->size(iItemCount);
		
		// checking offset
		if (iLeftOffset + c_iTradeSlotsNumber > iItemCount) {
			if (iItemCount % 2 == 0)
				iLeftOffset -= iLeftOffset + c_iTradeSlotsNumber - iItemCount;
			else
				iLeftOffset -= iLeftOffset + c_iTradeSlotsNumber - iItemCount - 1;
		}
		
		if (iLeftOffset < 0)
			iLeftOffset = 0;
		
		int iMessage;
		for (int i = iLeftOffset; i < iLeftOffset + c_iTradeSlotsNumber; ++i) {
			if (i < iItemCount) {
				object item;
				vLSlotsItems->get(item, i);
				int iAmount;
				vLSlotsAmounts->get(iAmount, i);
			
				iMessage = 0;//GetItemID(item);
				int iSelected = IsSalesmanTradeSlotSelected(i - iLeftOffset);
				if (iSelected > 0)
					iMessage |= iSlotSelected;
					
				if (IsItemToDisable(item, iTradeType, false))
					iMessage |= iSlotDisabled;
					
				object obj;
				@CreateIntVector(obj);
				obj->add(iSelected);
				obj->add(iAmount);
				@SendMessage(iSlotNumber, GetLeftTradeSlotWndName(i - iLeftOffset), obj);
				@SendMessage(iMessage, GetLeftTradeSlotWndName(i - iLeftOffset), item);
			}
			else 
				@SendMessage(iSlotEmpty, GetLeftTradeSlotWndName(i - iLeftOffset));
		}		
	}
	
	void UpdatePlayerTradeSlots() 
	{
		int iItemCount;
		vRSlotsItems->size(iItemCount);
		
		// checking offset
		if (iRightOffset + c_iTradeSlotsNumber > iItemCount) {
			if (iItemCount % 2 == 0)
				iRightOffset -= iRightOffset + c_iTradeSlotsNumber - iItemCount;
			else
				iRightOffset -= iRightOffset + c_iTradeSlotsNumber - iItemCount - 1;
		}
		
		if (iRightOffset < 0)
			iRightOffset = 0;
		
		object item;
		int iMessage, iAmount;
		for (int i = iRightOffset; i < iRightOffset + c_iTradeSlotsNumber; ++i) {
			if (i < iItemCount) {
				vRSlotsItems->get(item, i); 
				vRSlotsAmounts->get(iAmount, i); 
				
				iMessage = 0;//GetItemID(item);
				int iSelected = IsPlayerTradeSlotSelected(i - iRightOffset);
				if (iSelected > 0)
					iMessage |= iSlotSelected;

				if (IsItemToDisable(item, iTradeType, true))
					iMessage |= iSlotDisabled;

				object obj;
				@CreateIntVector(obj);
				obj->add(iSelected);
				obj->add(iAmount);
					
				@SendMessage(iSlotNumber, GetRightTradeSlotWndName(i - iRightOffset), obj);
				@SendMessage(iMessage, GetRightTradeSlotWndName(i - iRightOffset), item);
			}
			else 
				@SendMessage(iSlotEmpty, GetRightTradeSlotWndName(i - iRightOffset));
		}
	}	
	
	void UpdatePlayerMoneySlot() {
		@SendMessage(iPlayerMoney, "r_money_slot");
	}

	void UpdateSalesmanMoneySlot() {
		@SendMessage(iSalesmanMoney, "l_money_slot");
	}	
	
	
	void DoTrade() 
	{
		int iSize;
		bool bSuccess;
		object item, container, pcontainer;
		@GetContainer(container);
		@GetPlayerContainer(pcontainer);
		vItemsToRemove->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			vItemsToRemove->get(item, i);
			bSuccess = RemoveItem(pcontainer, item, GetItemCategory(item));
			if (!bSuccess)
				@Trace("Error: failed to remove item");
			bSuccess = AddItem(container, item, 0);
			if (!bSuccess)
				@Trace("Error: failed to add item");
		}

		vItemsToAdd->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			vItemsToAdd->get(item, i);
			bSuccess = RemoveItem(container, item, 0);
			if (!bSuccess)
				@Trace("Error: failed to remove item");
				
			bSuccess = AddItem(pcontainer, item, GetItemCategory(item));
			if (!bSuccess)
				@Trace("Error: failed to add item");
		}
		
		if (iTradeType == 0)	
			@SetPlayerMoneyCount(iPlayerMoney);
			
		iSalesmanMoney = 0;
		CancelTrade();			
	}
	
	// returns false if its not possible to add
	bool AddItemToPlayerContainer(object item) 
	{
		int iCategory = GetItemCategory(item);
		if (iCategory == c_iCWeapon) {
			return AddItemToPlayerContainerCategory(item, vPlayerWeaponItems, vPlayerWeaponAmounts);
		}
		else 
		if (iCategory == c_iCClothes) {
			return AddItemToPlayerContainerCategory(item, vPlayerClothesItems, vPlayerClothesAmounts);
		}
		else 
		if (iCategory == c_iCMedcine) {
			return AddItemToPlayerContainerCategory(item, vPlayerMedcineItems, vPlayerMedcineAmounts);
		}
		else 
		if (iCategory == c_iCFood) {
			return AddItemToPlayerContainerCategory(item, vPlayerFoodItems, vPlayerFoodAmounts);
		}
		return AddItemToPlayerContainerCategory(item, vPlayerOtherItems, vPlayerOtherAmounts);
	}
	
	// returns false if its not possible to remove
	bool RemoveItemFromPlayerContainer(object item) 
	{
		int iCategory = GetItemCategory(item);
		if (iCategory == c_iCWeapon) {
			return RemoveItemFromPlayerContainerCategory(item, vPlayerWeaponItems, vPlayerWeaponAmounts);
		}
		else 
		if (iCategory == c_iCClothes) {
			return RemoveItemFromPlayerContainerCategory(item, vPlayerClothesItems, vPlayerClothesAmounts);
		}
		else 
		if (iCategory == c_iCMedcine) {
			return RemoveItemFromPlayerContainerCategory(item, vPlayerMedcineItems, vPlayerMedcineAmounts);
		}
		else 
		if (iCategory == c_iCFood) {
			return RemoveItemFromPlayerContainerCategory(item, vPlayerFoodItems, vPlayerFoodAmounts);
		}
		return RemoveItemFromPlayerContainerCategory(item, vPlayerOtherItems, vPlayerOtherAmounts);
	}	
	
	bool AddItemToPlayerContainerCategory(object item, object items, object amounts) 
	{
		int iSize;
		items->size(iSize);
		object pitem;
		
		// trying to stack				
		if (GetItemMaxStackSize(item) > 1)
		for (int i = 0; i < iSize; ++i) {
			int iPlayerItemAmount;
			items->get(pitem, i);
			amounts->get(iPlayerItemAmount, i);
			if (DiseaseEqualItems(item, pitem)) {
				if (iPlayerItemAmount < GetItemMaxStackSize(item)) {
					amounts->set(i, iPlayerItemAmount + 1);
				}
				return true; // can stack this item
			}
		}
		
		// trying to add
		if (iSize < c_iPlayerContainerSlotsNumber) { 
			items->add(item);
			amounts->add(1);
			return true; 
		}
		return false;	
	}
	
	bool RemoveItemFromPlayerContainerCategory(object item, object items, object amounts) 
	{
		int iSize;
		items->size(iSize);
		object pitem;
		
		for (int i = 0; i < iSize; ++i) {
			int iPlayerItemAmount;
			items->get(pitem, i);
			amounts->get(iPlayerItemAmount, i);
			
			if (DiseaseEqualItems(item, pitem)) {
				iPlayerItemAmount--;
				if (iPlayerItemAmount == 0) {
					items->remove(i);	
					amounts->remove(i);
				}
				else
					amounts->set(i, iPlayerItemAmount);
				return true;
			}
		}	
		return false;
	}	
	
	int IsSalesmanSlotSelected(int iSlot) {
		int iSize;
		vLSlotsSelection->size(iSize);
		if (iSlot + iLeftOffset >= iSize)
			return 0;
		int iSelected;
		vLSlotsSelection->get(iSelected, iSlot + iLeftOffset);
		return iSelected;
	}	
	
	int IsPlayerSlotSelected(int iSlot) {
		int iSize;
		vRSlotsSelection->size(iSize);
		if (iSlot + iRightOffset >= iSize)
			return 0;
		int iSelected;
		vRSlotsSelection->get(iSelected, iSlot + iRightOffset);
		return iSelected;
	}	
	
	void DoPreSale(int iPrice) {
		iPlayerMoney += iPrice;
		iSalesmanMoney -= iPrice;
		UpdatePlayerMoneySlot();
		UpdateSalesmanMoneySlot();
	}	
	
	void ProcessSalesmanSlotLClick(int iSlot) 
	{
		int iSize;
		vLSlotsSelection->size(iSize);
		if (iSlot + iLeftOffset >= iSize)
			return;
		
		object item;
		vLSlotsItems->get(item, iSlot + iLeftOffset);
		if (IsItemToDisable(item, iTradeType, false))
			return;
			
		int iSelected;
		vLSlotsSelection->get(iSelected, iSlot + iLeftOffset);
		int iAmount;
		vLSlotsAmounts->get(iAmount, iSlot + iLeftOffset);
		if (iSelected < iAmount) {
			int iPrice = GetItemPriceWithDurability(item, iTradeType) * GetTradeBuyFactor(salesman, iDay, iTradeType);
			
			if (iPrice <= iPlayerMoney)
			if (AddItemToPlayerContainer(item)) {
				iSelected += 1;
				vLSlotsSelection->set(iSlot + iLeftOffset, iSelected);
				// putting to the list of items to add
				EnqueueItemToAdd(item);
				DoPreSale(-iPrice);
			}
		}
		
		UpdateSalesmanTradeSlots();	
		UpdatePlayerTradeSlots();		
	}
	
	void ProcessSalesmanSlotRClick(int iSlot) 
	{
		int iSize;
		vLSlotsSelection->size(iSize);
		if (iSlot + iLeftOffset >= iSize)
			return;
			
		object item;
		vLSlotsItems->get(item, iSlot + iLeftOffset);
		if (IsItemToDisable(item, iTradeType, false))
			return;
			
		int iSelected, iAmount;
		vLSlotsSelection->get(iSelected, iSlot + iLeftOffset);
		vLSlotsAmounts->get(iAmount, iSlot + iLeftOffset);
		if (iSelected > 0) {
			RemoveItemFromPlayerContainer(item);
			EnqueueItemToRemove(item);
			iSelected--;
			vLSlotsSelection->set(iSlot + iLeftOffset, iSelected);
			int iPrice = GetItemPriceWithDurability(item, iTradeType) * GetTradeBuyFactor(salesman, iDay, iTradeType);
			DoPreSale(iPrice);
		}
		
		UpdateSalesmanTradeSlots();	
		UpdatePlayerTradeSlots();		
	}
	
	void ProcessPlayerSlotLClick(int iSlot) 
	{
		int iSize;
		vRSlotsSelection->size(iSize);
		if (iSlot + iRightOffset >= iSize)
			return;
			
		object item;
		vRSlotsItems->get(item, iSlot + iRightOffset);
		if (IsItemToDisable(item, iTradeType, true))
			return;
			
		int iSelected, iAmount;
		vRSlotsSelection->get(iSelected, iSlot + iRightOffset);
		
		
		vRSlotsAmounts->get(iAmount, iSlot + iRightOffset);
		if (iSelected < iAmount) {
			RemoveItemFromPlayerContainer(item);
			EnqueueItemToRemove(item);
			iSelected += 1;
			vRSlotsSelection->set(iSlot + iRightOffset, iSelected);
			int iPrice = GetItemPriceWithDurability(item, iTradeType) * GetTradeSellFactor(salesman, iDay, iTradeType);
			DoPreSale(iPrice);
		}
		
		UpdateSalesmanTradeSlots();	
		UpdatePlayerTradeSlots();		
	}
	
	void ProcessPlayerSlotRClick(int iSlot) 
	{
		int iSize;
		vRSlotsSelection->size(iSize);
		if (iSlot + iRightOffset >= iSize)
			return;
			
		object item;
		vRSlotsItems->get(item, iSlot + iRightOffset);
		if (IsItemToDisable(item, iTradeType, true))
			return;
			
		int iSelected;
		vRSlotsSelection->get(iSelected, iSlot + iRightOffset);
		int iAmount;
		vRSlotsAmounts->get(iAmount, iSlot + iRightOffset);
		if (iSelected > 0) {
			int iPrice = GetItemPriceWithDurability(item, iTradeType) * GetTradeSellFactor(salesman, iDay, iTradeType);
			
			if (iPrice <= iPlayerMoney)
			if (AddItemToPlayerContainer(item)) {
				iSelected--;
				// putting to the list of items to add
				EnqueueItemToAdd(item);
				vRSlotsSelection->set(iSlot + iRightOffset, iSelected);
				DoPreSale(-GetItemPriceWithDurability(item, iTradeType) * GetTradeSellFactor(salesman, iDay, iTradeType));
			}		
		}
		
		UpdateSalesmanTradeSlots();	
		UpdatePlayerTradeSlots();		
	}
	
	void ResetSalesmanTradeSlots()
	{
		int iSize;
		vLSlotsSelection->size(iSize);
		
		for (int i = 0; i < iSize; ++i) {
			vLSlotsSelection->set(i, 0);
		}
		UpdateSalesmanTradeSlots();
	}

	void ResetPlayerTradeSlots()
	{
		int iSize;
		vRSlotsSelection->size(iSize);
		
		for (int i = 0; i < iSize; ++i) {
			vRSlotsSelection->set(i, 0);
		}
		UpdatePlayerTradeSlots();
	}	
	
	int IsSalesmanTradeSlotSelected(int iSlot) {
		int iSize;
		vLSlotsSelection->size(iSize);
		if (iSlot + iLeftOffset >= iSize)
			return 0;
		int iSelected;
		vLSlotsSelection->get(iSelected, iSlot + iLeftOffset);
		return iSelected;
	}	
	
	int IsPlayerTradeSlotSelected(int iSlot) {
		int iSize;
		vRSlotsSelection->size(iSize);
		if (iSlot + iRightOffset >= iSize)
			return 0;
		int iSelected;
		vRSlotsSelection->get(iSelected, iSlot + iRightOffset);
		return iSelected;
	}	
}
