const int c_iBranchDanko = 0;
const int c_iBranchBurah = 1;
const int c_iBranchKlara = 2;
const int c_iBranchIntro = 3;
const int c_iBranchFinal = 4;

int GetPlayerName() {
	int player;
	@GetVariable("branch", player);
	if (player == c_iBranchDanko)
		return 1;
	else
	if (player == c_iBranchBurah)
		return 2;
		
	return 3;
}

int GetPlayer() {
	int player;
	@GetVariable("branch", player);
	return player;
}

void RegisterGameCompletion(void) {
	if (GetPlayer() == c_iBranchBurah) {
		@SetRegistryData("BurahCompleted", 1);
	}
	else
	if (GetPlayer() == c_iBranchDanko) {
		@SetRegistryData("DankoCompleted", 1);
	}
	else
	if (GetPlayer() == c_iBranchKlara) {
		@SetRegistryData("KlaraCompleted", 1);
	}	
}

bool IsBurahCompletionRegistered(void) {
	int iVal;
	@GetRegistryData(iVal, "BurahCompleted", 0);
	return (iVal != 0);
}

bool IsDankoCompletionRegistered(void) {
	int iVal;
	@GetRegistryData(iVal, "DankoCompleted", 0);
	return (iVal != 0);
}

bool IsKlaraCompletionRegistered(void) {
	int iVal;
	@GetRegistryData(iVal, "KlaraCompleted", 0);
	return (iVal != 0);
}


int GetItemID(object item)
{
	int iID;
	item->GetItemID(iID);
	return iID;
}

int GetItemPrice(object item, int iTradeType)
{
	if (iTradeType == 0) {
		int iDay = GetDay();
		int iPrice = 0;
		for (int i = 1; i <= iDay; ++i) {
			string strPrice = "Price";
			if (i != 1)
				strPrice += i;
		
			bool bHas;
			@HasInvItemProperty(bHas, GetItemID(item), strPrice);
			if (!bHas)
				continue;
			
			@GetInvItemProperty(iPrice, GetItemID(item), strPrice);	
		}
		return iPrice;
	}
	
	bool bHas;
	@HasInvItemProperty(bHas, GetItemID(item), "BarterPrice" + iTradeType);
	if (!bHas)
		return 0;
	
	int iPrice;
	@GetInvItemProperty(iPrice, GetItemID(item), "BarterPrice" + iTradeType);
	if (iPrice > 0)
		return iPrice;	
		
	return -iPrice;
}

int GetItemPriceWithDurability(object item, int iTradeType)
{
	if (iTradeType == 0) {
		int iDay = GetDay();
		int iPrice = 0;
		for (int i = 1; i <= iDay; ++i) {
			string strPrice = "Price";
			if (i != 1)
				strPrice += i;
		
			bool bHas;
			@HasInvItemProperty(bHas, GetItemID(item), strPrice);
			if (!bHas)
				continue;
			
			@GetInvItemProperty(iPrice, GetItemID(item), strPrice);	
		}
		bool bHasDurability;
		item->HasProperty(bHasDurability, "durability");
		if (bHasDurability) {
			int iDurability;
			item->GetProperty(iDurability, "durability");
			iPrice *= 0.5 * (1.0 + iDurability / 100.0);
		}
		
		return iPrice;
	}
	
	bool bHas;
	@HasInvItemProperty(bHas, GetItemID(item), "BarterPrice" + iTradeType);
	if (!bHas)
		return 0;
	
	int iPrice;
	@GetInvItemProperty(iPrice, GetItemID(item), "BarterPrice" + iTradeType);
	if (iPrice > 0)
		return iPrice;	
		
	return -iPrice;
}
