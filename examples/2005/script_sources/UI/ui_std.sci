include ui_events.sci
include ../world_wnd_messages.sci

const string c_strBWeapon = "button_weapon";
const string c_strBClothes = "button_clothes";
const string c_strBMedcine = "button_medcine";
const string c_strBFood = "button_food";
const string c_strBOther = "button_other";
const string c_strBDetector = "button_detector";
const string c_strBAnticeptic = "button_anticeptic";
const int c_iCWeapon = 0;
const int c_iCClothes = 1;
const int c_iCMedcine = 2;
const int c_iCFood = 3;
const int c_iCOther = 4;

const int iSlotSelected = 16384;
const int iSlotEmpty = 32768;
const int iSlotNumber = 65536;
const int iSlotDisabled = 65536 * 2;
const int iSlotMask = 16383;

const int c_iScrollDisabled = 16384;
const int c_iScrollMask = 16383;

const int c_iTextID_Day = 4;
const int c_iTextID_Price = 5;

float GetGameTime(void) {
	float fTime;
	@GetGameTime(fTime);
	return fTime;
}

int GetDay()
{
	float fTime;
	@GetGameTime(fTime);
	return 1 + (int)(fTime / 24);
}

int GetHour()
{
	float fTime;
	@GetGameTime(fTime);
	return (int)fTime % 24;
}

int GetMinute()
{
	float fTime;
	@GetGameTime(fTime);
	return (fTime - (int)fTime) * 60;
}

string GetSlotWndName(int iSlot) 
{
	if (iSlot + 1 < 10)
		return "slot0" + (iSlot + 1);
	return "slot" + (iSlot + 1);
}

string GetContainerSlotWndName(int iSlot) 
{
	if (iSlot + 1 < 10)
		return "cslot0" + (iSlot + 1);
	return "cslot" + (iSlot + 1);
}

string GetCorpseContainerSlotWndName(int iSlot) 
{
	if (iSlot + 1 < 10)
		return "ccslot0" + (iSlot + 1);
	return "ccslot" + (iSlot + 1);
}

string GetLeftTradeSlotWndName(int iSlot) 
{
	if (iSlot + 1 < 10)
		return "l_slot0" + (iSlot + 1);
	return "l_slot" + (iSlot + 1);
}

string GetRightTradeSlotWndName(int iSlot) 
{
	if (iSlot + 1 < 10)
		return "r_slot0" + (iSlot + 1);
	return "r_slot" + (iSlot + 1);
}

bool IsContainer()
{
	bool bContainer;
	@HasContainer(bContainer);
	return bContainer;
}

bool IsCorpseContainer() 
{
	bool bCorpse;
	@IsCorpseContainer(bCorpse);
	return bCorpse;
}

int GetContainerSize()
{	
	if (!IsContainer())
		return false;
		
	object container;
	@GetContainer(container);
	if (container == null)
		return 0;
		
	int iSize;
	container->GetCapacity(iSize);
	return iSize;
}

// returns amount of item
int PlayerHasItem(int iItemID) 
{
	int iAmount;
	iAmount = PlayerHasItemInCategory(c_iCWeapon, iItemID);
	if (iAmount > 0)
		return iAmount;
	iAmount = PlayerHasItemInCategory(c_iCClothes, iItemID);
	if (iAmount > 0)
		return iAmount;
	iAmount = PlayerHasItemInCategory(c_iCMedcine, iItemID);
	if (iAmount > 0)
		return iAmount;
	iAmount = PlayerHasItemInCategory(c_iCFood, iItemID);
	if (iAmount > 0)
		return iAmount;
	iAmount = PlayerHasItemInCategory(c_iCOther, iItemID);
	if (iAmount > 0)
		return iAmount;
	return 0;
}

// returns amount of item
int PlayerHasItemInCategory(int iCategory, int _iItemID)
{
	int iItemCount;
	@GetPlayerContainerItemCount(iCategory, iItemCount);
	for (int i = 0; i < iItemCount; ++i) {
		int iItemID, iAmount;
		@GetPlayerContainerItem(iCategory, i, iItemID, iAmount);
		if (iItemID == _iItemID) {
			return iAmount;
		}
	}
	return 0;
}

// returns amount of items which can be placed to player inventory
int PutToPlayerInventory(int iItemID, int _iAmount)
{
	int iAmount = _iAmount;
	int iCategory;
	@GetItemCategory(iItemId, iCategory);
	
	int iItemCount;
	@GetPlayerContainerItemCount(iCategory, iItemCount);
	
	int iMaxStackSize;
	@GetItemMaxStackSize(iItemID, iMaxStackSize);
	
	// locking for the same item
	for (int i = 0; i < iItemCount; ++i) {
		int iItemID, iAmount;
		@GetPlayerContainerItem(iCategory, i, iItemID, iAmount);
		if (iAmount < iMaxStackSize) {
			// trying to add
			int iFreeSpace = iMaxStackSize - iAmount;
			if (iAmount < iFreeSpace) {
				@SetPlayerContainerItemAmount(iCategory, i, iAmount);
				return 0;
			}
			
			@SetPlayerContainerItemAmount(iCategory, i, iFreeSpace);
			iAmount -= iFreeSpace;
		}
	}
	
	// creating new items
	while (iAmount && iItemCount + 1 < 12) {
		if (iAmount < iMaxStackSize) {
		
		}
		
	}
	
	return iAmount;
}

int GetMoneyID()
{
	int iItemID;
	@GetInvItemByName(iItemID, "Money");
	return iItemID;
}

string GetStringByID(int id) {
	string str;
	@GetStringByID(str, id);
	return str;
}