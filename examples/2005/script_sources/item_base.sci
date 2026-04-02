include game.sci

const int c_iCWeapon	= 0;
const int c_iCClothes	= 1;
const int c_iCMedcine	= 2;
const int c_iCFood		= 3;
const int c_iCOther		= 4;

void HumanBarter(object actor) {
	if (GetPlayer() == c_iBranchBurah)
		@WorkWithCorpse(actor);
	else
		@Barter(actor);
}

void GenerateMoney(int iMin, int iMax) 
{
	if (iMin > iMax) {
		@Trace("GenerateMoney: iMin > iMax");
		return;
	}
	
	int iAmount = 0;
	if (iMin != iMax) {
		@irand(iAmount, iMax - iMin);
	}
	else {
		if (iMin == 0)
			return;
	}
	iAmount += iMin;
	
	if (iAmount == 0)
		return;
	
	bool bSuccess;
	@AddItem(bSuccess, GetItemByName("Money"), 0, iAmount);
}

void PutOrgan(string name) {
	object item;
	@CreateInvItem(item);
	item->SetItemName(name);
	item->SetProperty("Organ", 1);
	
	int iItemID;
	item->GetItemID(iItemID);
	bool bAdded;
	@AddItem(bAdded, item, 0, 1);
}

void AddOrgans() {
	if (GetPlayer() != c_iBranchBurah)
		return;
		
	PutOrgan("liver");
	PutOrgan("kidney");
	PutOrgan("heart");
	PutOrgan("blood");
}

void GenerateDiseasedOrgans() {
	if (GetPlayer() != c_iBranchBurah)
		return;
		
	PutOrgan("diseased_liver");
	PutOrgan("diseased_kidney");
	PutOrgan("diseased_heart");
	PutOrgan("diseased_blood");
}

void GenerateAgony1Items()
{
	bool bSuccess;
	GenerateMoney(0, 10 + GetDay() * 100);
	
	GenerateRandomItem("bottle_water", 1, 4, 4);
	GenerateRandomItem("lockpick", 1, 6);
}

void GenerateChildItems(bool bMale)
{
	@ClearSubContainer(0);
	GenerateMoney(0, 3 + GetDay() * 5);
	
	GenerateRandomItem("flower", 1, 4);
	GenerateRandomItem("needle", 1, 4);
}

void GenerateBoinyMorlokItems(void)
{
	@ClearSubContainer(0);
	GenerateRandomItem("rusk", 1, 1, 2);
	GenerateRandomItem("peanut", 1, 4);
}

void GenerateBoinyButcherItems(void)
{
	@ClearSubContainer(0);
	GenerateRandomItem("rusk", 1, 1, 3);
	GenerateRandomItem("peanut", 1, 5);
}


void GenerateChildTradeItems(bool bMale)
{
	@ClearSubContainer(0);
	if (bMale) {
		GenerateRandomItem("rifle_ammo", 1, 2, 2);
		GenerateRandomItem("revolver_ammo", 1, 2, 2);
		GenerateRandomItem("samopal_ammo", 2, 2, 2);
	}
	else {
		GenerateRandomItem("lockpick", 1, 4);
		GenerateRandomItem("alpha_pills", 1, 2, 3);
		GenerateRandomItem("meradorm", 1, 2);
		GenerateRandomItem("powder", 1, 15);

		int iDay = GetDay();
		if (iDay >= 4) {
			GenerateRandomItem("beta_pills", 1, 2);
		}
		if (iDay >= 6) {
			GenerateRandomItem("gamma_pills", 1, 7);
		}
	}
}

void GenerateTeenagerItems(bool bMale)
{
	bool bSuccess;
	@ClearSubContainer(0);
	GenerateMoney(0, 10 + GetDay() * 10);
	
	GenerateRandomItem("hook", 1, 4);
	GenerateRandomItem("watch", 1, 10);
}

void GenerateTeenagerTradeItems(bool bMale)
{
	int iVal; 
	bool bSuccess;
	@ClearSubContainer(0);
	int iDay = GetDay();
	if (bMale) {
		GenerateRandomItem("alpha_pills", 1, 2, 4);
		GenerateRandomItem("meradorm", 2, 3, 3);
		
		if (iDay >= 3) {
			GenerateRandomItem("beta_pills", 1, 4);
		}
		
		if (iDay >= 8)
			GenerateRandomItem("monomicin", 1, 2, 2);
		else
		if (iDay >= 4)
			GenerateRandomItem("monomicin", 1, 2);
	}
	else {
		GenerateRandomItem("lockpick", 1, 4);
		GenerateRandomItem("rifle_ammo", 1, 2);
		GenerateRandomItem("revolver_ammo", 1, 2);
		GenerateRandomItem("samopal_ammo", 1, 2, 2);
		
		if (iDay >= 8)
			GenerateRandomItem("monomicin", 1, 2, 2);
		else
		if (iDay >= 4)
			GenerateRandomItem("monomicin", 1, 2);
	}
}

void GeneratePatrolItems() 
{
	int iVal;
	bool bSuccess;
	@ClearSubContainer(0);
	int iDay = GetDay();
	GenerateMoney(0, 100 + iDay * 100);
	
	GenerateRandomItem("tourniquet", 1, 7);
	GenerateRandomItem("bandage", 1, 7);
	GenerateRandomItem("packet", 1, 10);

	GenerateRandomItem("bottle_water", 1, 3);
	GenerateRandomItem("rusk", 1, 3, 4);
	GenerateRandomItem("hook", 1, 20);
	GenerateRandomItem("watch", 1, 20);
	
	if (iDay >= 3 && iDay < 6) {
		GenerateRandomItem("alpha_pills", 1, 2, 3);
	}
	
	if (iDay >= 4) {
		GenerateRandomItem("beta_pills", 1, 4, 3);
	}
	
	if (iDay >= 6) {
		GenerateRandomItem("alpha_pills", 1, 2, 8);
		GenerateRandomItem("gamma_pills", 1, 8, 3);
	}
	
	if (iDay >= 8) {
		GenerateRandomItem("revolver_ammo", 1, 3);
		GenerateRandomItem("rifle_ammo", 1, 3);
	}
	
	@AddItem(bSuccess, GetItemByName("patrol_mark"), 0, 1);
}

void GenerateDeadPatrolItems() 
{
	int iVal;
	bool bSuccess;
	@ClearSubContainer(0);
	int iDay = GetDay();
	GenerateMoney(0, 10 + iDay * 5);
	
	GenerateRandomItem("bottle_water", 1, 3);
	GenerateRandomItem("rusk", 1, 20);
	GenerateRandomItem("hook", 1, 30);
	GenerateRandomItem("watch", 1, 30);
	
	if (iDay >= 3) {
		GenerateRandomItem("alpha_pills", 1, 4, 3);
	}
	
	if (iDay >= 4) {
		GenerateRandomItem("beta_pills", 1, 8, 3);
	}
	
	if (iDay >= 6) {
		GenerateRandomItem("gamma_pills", 1, 16, 3);
	}
}

void GeneratePatrolTradeItems() {
	int iVal; 
	bool bSuccess;
	@ClearSubContainer(0);
	
	int iDay = GetDay();
	
	GenerateRandomItem("fresh_meat", 1, 4, 3);
	GenerateRandomItem("dried_meat", 1, 4, 3);
	GenerateRandomItem("smoked_meat", 1, 4, 3);
	GenerateRandomItem("vegetables", 1, 3, 3);
	
	if (iDay >= 3) {
		GenerateRandomItem("revolver_ammo", 1, 5);
		GenerateRandomItem("rifle_ammo", 1, 5);
		GenerateRandomItem("samopal_ammo", 1, 5);
		
		GenerateRandomItem("powder", 1, 500);
	}
}

void GenerateSoldierItems() 
{
	int iVal;
	bool bSuccess;
	@ClearSubContainer(0);
	GenerateMoney(500, 1000);
	
	GenerateRandomItem("rifle_ammo", 1, 3, 3);
	GenerateRandomItem("rusk", 1, 3, 2);
	GenerateRandomItem("bandage", 1, 6);
	GenerateRandomItem("tourniquet", 1, 6);
}

void GenerateSanitarItems() 
{
	int iVal;
	bool bSuccess;
	@ClearSubContainer(0);
	GenerateMoney(600, 1500);
	
	GenerateRandomItem("rusk", 1, 3, 2);
	GenerateRandomItem("alpha_pills", 1, 3, 5);
	GenerateRandomItem("beta_pills", 1, 6, 4);
	GenerateRandomItem("gamma_pills", 1, 12, 3);
	
	@AddItem(bSuccess, GetItemByName("ognemet_ammo"), 0, 1);
}

void GenerateBomberItems() 
{
	int iVal;
	bool bSuccess;
	@ClearSubContainer(0);
	GenerateMoney(600, 1500);
	
	GenerateRandomItem("fresh_meat", 1, 6);
	GenerateRandomItem("rusk", 1, 6, 2);
	GenerateRandomItem("gamma_pills", 1, 3);
	
	@AddItem(bSuccess, GetItemByName("bomber_mark"), 0, 1);
}

void GenerateGrabitelItems() 
{
	int iVal;
	bool bSuccess;
	@ClearSubContainer(0);
	GenerateMoney(300, 750);
	
	GenerateRandomItem("Knife", 1, 8);
	GenerateRandomItem("lockpick", 1, 6);
		
	@AddItem(bSuccess, GetItemByName("grabitel_mark"), 0, 1);		
}

void GenerateRichGrabitelItems() 
{
	int iVal;
	bool bSuccess;
	@ClearSubContainer(0);
	GenerateMoney(1500, 3000);
	
	GenerateRandomItem("Knife", 1, 4);
	GenerateRandomItem("lockpick", 1, 3);
	GenerateRandomItem("rifle_ammo", 1, 3, 3);
	GenerateRandomItem("samopal_ammo", 1, 3, 3);
	GenerateRandomItem("revolver_ammo", 1, 3, 3);
	GenerateRandomItem("Samopal", 1, 20);
	GenerateRandomItem("Revolver", 1, 20);
	GenerateRandomItem("Rifle", 1, 20);
		
	@AddItem(bSuccess, GetItemByName("grabitel_mark"), 0, 1);		
}

void GenerateHunterItems() 
{
	int iVal;
	bool bSuccess;
	@ClearSubContainer(0);
	GenerateMoney(200, 500);
	
	GenerateRandomItem("revolver_ammo", 1, 80);
	GenerateRandomItem("samopal_ammo", 1, 80);
	GenerateRandomItem("rifle_ammo", 1, 80);
	GenerateRandomItem("lockpick", 1, 80);
		
	@AddItem(bSuccess, GetItemByName("hunter_mark"), 0, 1);		
}

void GenerateAlkashItems()
{
	bool bSuccess;
	@ClearSubContainer(0);
	GenerateMoney(30, 50 + GetDay() * 40);
	
	GenerateRandomItem("tourniquet", 1, 10);
	GenerateRandomItem("bandage", 1, 10);

	GenerateRandomItem("bottle_empty", 1, 2);
	GenerateRandomItem("tvirin", 1, 8);
}

void GenerateAlkashTradeItems()
{
	bool bSuccess;
	@ClearSubContainer(0);

	GenerateRandomItem("tourniquet", 1, 4);
	GenerateRandomItem("bandage", 1, 2);
}

void GenerateOdinaryGathererTradeItems()
{
	bool bSuccess;
	@ClearSubContainer(0);
	
	int iVal;
	@irand(iVal, 15); iVal += 5;
	@AddItem(bSuccess, GetItemByName("grass_black_tvir"), 0, iVal);	

	@irand(iVal, 15); iVal += 5;
	@AddItem(bSuccess, GetItemByName("grass_blood_tvir"), 0, iVal);	

	@irand(iVal, 15); iVal += 5;
	@AddItem(bSuccess, GetItemByName("grass_brown_tvir"), 0, iVal);	
}

void GenerateOutstandingGathererTradeItems()
{
	bool bSuccess;
	@ClearSubContainer(0);
	
	int iVal;
	@irand(iVal, 10); iVal += 3;
	@AddItem(bSuccess, GetItemByName("grass_savyur"), 0, iVal);	

	@irand(iVal, 10); iVal += 3;
	@AddItem(bSuccess, GetItemByName("grass_white_plet"), 0, iVal);	
}

void GenerateGrifTradeItems()
{
	bool bSuccess;
	@ClearSubContainer(0);
	int iVal; 
	int iDay = GetDay();

	@AddItem(bSuccess, GetItemByName("Rifle"), 0, 1);	
	@AddItem(bSuccess, GetItemByName("Revolver"), 0, 1);	
	@AddItem(bSuccess, GetItemByName("Knife"), 0, 1);	
	
	if (iDay != 10) {
		@AddItem(bSuccess, GetItemByName("tvirin"), 0, 1);	
	}
	else {
		@AddItem(bSuccess, GetItemByName("tvirin"), 0, 4);	// for d10 petr quest
	}
	
	@AddItem(bSuccess, GetItemByName("lockpick"), 0, 3);
	
	GenerateRandomItem("Scalpel", 1, 2);
	GenerateRandomItem("revolver_ammo", 1, 1, 5, 10);
	GenerateRandomItem("rifle_ammo", 1, 1, 5, 20);
	
	@irand(iVal, 100); 
	if (iVal != 0)
		@AddItem(bSuccess, GetItemByName("kerosene"), 0, iVal);	
	
	if (iDay >= 3) {	
		@AddItem(bSuccess, GetItemByName("halfboot_repel"), 0, 1);	
		@AddItem(bSuccess, GetItemByName("boot_repel"), 0, 1);	
	}

	if (iDay >= 9) {	
		@AddItem(bSuccess, GetItemByName("boot_army"), 0, 1);	
		@AddItem(bSuccess, GetItemByName("balahon"), 0, 1);	
		@AddItem(bSuccess, GetItemByName("glove_army"), 0, 1);	
	}
	
	if (GetPlayer() == c_iBranchDanko)
		@AddItem(bSuccess, GetItemByName("Gun_danko"), 0, 1);
}

void GenerateCitizenItems(bool bMale)
{
	int iVal;
	bool bSuccess;
	
	if (bMale) {
		GenerateMoney(0, 100 + GetDay() * 100);
		
		@irand(iVal, 8); 
		if (iVal == 0) 
			@AddItem(bSuccess, GetItemByName("lemon"), 0, 1);	
		else
		if (iVal == 1) 
			@AddItem(bSuccess, GetItemByName("rusk"), 0, 1);	
		else
		if (iVal == 2) 
			@AddItem(bSuccess, GetItemByName("hook"), 0, 1);	
		else
		if (iVal == 4) 
			@AddItem(bSuccess, GetItemByName("syringe"), 0, 1);	
		else
		if (iVal == 5) 
			@AddItem(bSuccess, GetItemByName("watch"), 0, 1);	
		else
		if (iVal == 6) 
			@AddItem(bSuccess, GetItemByName("razor"), 0, 1);	
		
	}
	else {
		GenerateMoney(0, 50 + GetDay() * 50);
		
		@irand(iVal, 7); 
		if (iVal == 0) 
			@AddItem(bSuccess, GetItemByName("beads"), 0, 1);	
		else
		if (iVal == 1) 
			@AddItem(bSuccess, GetItemByName("bracelet"), 0, 1);	
		else
		if (iVal == 2) 
			@AddItem(bSuccess, GetItemByName("ear_ring"), 0, 1);	
		else
		if (iVal == 3) 
			@AddItem(bSuccess, GetItemByName("gold_ring"), 0, 1);	
		else
		if (iVal == 4) 
			@AddItem(bSuccess, GetItemByName("silver_ring"), 0, 1);	
		else
		if (iVal == 5) 
			@AddItem(bSuccess, GetItemByName("flower"), 0, 1);	
		
	}
}

int GetItemByName(string strName) 
{
	int iItemID;
	@GetInvItemByName(iItemID, strName);
	return iItemID;
}

bool AddItem(string strName, int iAmount, int iContainer) {
	int iItemID = GetItemByName(strName);
	if (iItemID == -1)
		return false;

	if (iAmount == 0)
		return true;
	
	bool bSuccess;
	@AddItem(bSuccess, iItemID, iContainer, iAmount);
	return bSuccess;
}

bool AddItemByID(int iItemID, int iAmount, int iContainer) {
	if (iAmount == 0)
		return true;
	
	bool bSuccess;
	@AddItem(bSuccess, iItemID, iContainer, iAmount);
	return bSuccess;
}

bool AddItemsToSalesman(object salesman, int iDay, int iCategory) // iDay [1..12]
{
	if (iCategory == c_iCWeapon) {
		return AddWeaponItemsToSalesman(salesman, iDay);
	}
	else
	if (iCategory == c_iCClothes) {
		return AddClothesItemsToSalesman(salesman, iDay);
	}
	else
	if (iCategory == c_iCMedcine) {
		return AddMedicineItemsToSalesman(salesman, iDay);
	}
	else
	if (iCategory == c_iCFood) {
		return AddFoodItemsToSalesman(salesman, iDay);
	}
	
	return AddOtherItemsToSalesman(salesman, iDay);
}

bool AddWeaponItemsToSalesman(object salesman, int iDay)
{
	
	return true;
}

bool AddClothesItemsToSalesman(object salesman, int iDay)
{
	GenerateRandomItem("drapery", 1, 2);
	if (iDay >= 2) {
		GenerateRandomItem("halfboot_repel", 1, 3);
		GenerateRandomItem("glove_disp", 1, 3);
		GenerateRandomItem("drapery", 1, 3);
	}
	
	if (iDay >= 4) {
		GenerateRandomItem("glove", 1, 4);
		GenerateRandomItem("cloak_repel", 1, 4);
	}
	
	if (iDay >= 5) {
		GenerateRandomItem("mask", 1, 8);		
		GenerateRandomItem("boot_repel", 1, 4);
	}
	
	if (iDay >= 7) {
		GenerateRandomItem("raincoat_repel", 1, 4);
	}
	
	if (iDay >= 9) {
		GenerateRandomItem("glove_army", 1, 5);
		GenerateRandomItem("boot_army", 1, 5);
	}
	
	if (iDay >= 10) {
		GenerateRandomItem("balahon", 1, 9);
	}
	
	return true;
}

bool AddMedicineItemsToSalesman(object salesman, int iDay)
{
	bool bSuccess;
	
	GenerateActorRandomItem(salesman, "tourniquet", 1, 2, 10);
	GenerateActorRandomItem(salesman, "alpha_pills", 1, 1, 10);
	GenerateActorRandomItem(salesman, "meradorm", 1, 1, 2);
	
	if (iDay >= 3) {
		GenerateActorRandomItem(salesman, "neomicin", 1, 1, 2);
	}

	if (iDay >= 4) {
		GenerateActorRandomItem(salesman, "novocaine", 1, 2);
		GenerateActorRandomItem(salesman, "gamma_pills", 1, 2, 2);
		GenerateActorRandomItem(salesman, "beta_pills", 1, 2, 2);
	}
	if (iDay >= 6) {
		GenerateActorRandomItem(salesman, "packet", 1, 4);
		GenerateActorRandomItem(salesman, "morfin", 1, 2);
		GenerateActorRandomItem(salesman, "Scalpel", 1, 8);
		GenerateActorRandomItem(salesman, "monomicin", 1, 2, 2);
	}
	if (iDay >= 9) {
		GenerateActorRandomItem(salesman, "etorfin", 1, 2);
		GenerateActorRandomItem(salesman, "feromicin", 1, 2);
		GenerateActorRandomItem(salesman, "delta_pills", 1, 2, 2);
	}

	return true;
}

bool AddKabakItemsToSalesman(object salesman, int iDay)
{
	GenerateActorRandomItem(salesman, "coffee", 1, 1, 2);
	GenerateActorRandomItem(salesman, "tvirin", 1, 1, 2);
	GenerateActorRandomItem(salesman, "silver_ring", 1, 2);
	GenerateActorRandomItem(salesman, "gold_ring", 1, 2);
	GenerateActorRandomItem(salesman, "bracelet", 1, 2);
	GenerateActorRandomItem(salesman, "watch", 1, 2);
	GenerateActorRandomItem(salesman, "beads", 1, 2);
	GenerateActorRandomItem(salesman, "ear_ring", 1, 2);
	GenerateActorRandomItem(salesman, "flower", 1, 2);
	GenerateActorRandomItem(salesman, "hook", 1, 4);
	GenerateActorRandomItem(salesman, "morfin", 1, 4);

	return true;
}

bool AddFoodItemsToSalesman(object salesman, int iDay) // iDay [1..12]
{
	bool bSuccess;
	int i, iProb;
	
	if (iDay < 3) {
		iProb = 2;
	}
	else 
	if (iDay < 5) {
		iProb = 3;
	}
	else
	if (iDay < 7) {
		iProb = 3;
	}
	else 
	if (iDay < 7) {
		iProb = 4;
	}
	else {
		iProb = 5;
	}
	
	GenerateRandomItem("lemon", 1, iProb);
	GenerateRandomItem("rusk", 1, iProb);
	
	if (iDay == 2) {
		GenerateRandomItem("dried_fish", 1, 1, 2);
		GenerateRandomItem("smoked_meat", 1, 1, 2);
		GenerateRandomItem("bread", 1, 1, 2);
	}
	else {
		GenerateRandomItem("dried_fish", 1, iProb);
		GenerateRandomItem("smoked_meat", 1, iProb);	
		GenerateRandomItem("bread", 1, iProb);	
	}
		
	GenerateRandomItem("egg", 1, iProb);
	GenerateRandomItem("vegetables", 1, iProb);
	GenerateRandomItem("milk", 1, iProb);
	GenerateRandomItem("dried_meat", 1, iProb);
	GenerateRandomItem("fresh_fish", 1, iProb);
	GenerateRandomItem("fresh_meat", 1, iProb);

	GenerateRandomItem("funduk", 1, 20);
	GenerateRandomItem("peanut", 1, 20);
	GenerateRandomItem("walnut", 1, 20);
	return true;
}

bool AddOtherItemsToSalesman(object salesman, int iDay) {
	GenerateRandomItem("hook", 1, 5);
	GenerateRandomItem("needle", 2, 3, 3);
	GenerateRandomItem("kerosene", 9, 10, 4, 20);
	
	if (iDay >= 9) {
		GenerateRandomItem("rifle_ammo", 1, 2, 5);	
	}
	return true;
}

void GenerateBurahAndreiTradeItems(void) 
{
	int iDay = GetDay();
	
	GenerateRandomItem("samopal_ammo", 1, 1, 6);
	GenerateRandomItem("rifle_ammo", 1, 1, 8);
	GenerateRandomItem("revolver_ammo", 1, 1, 8);
	GenerateRandomItem("tvirin", 1, 1, 3);	
	
	if (iDay >= 5) {
		GenerateRandomItem("Samopal", 1, 1);
	}
}

void GenerateKlaraAndreiTradeItems(void)
{
	int iVal; 
	bool bSuccess;
	@ClearSubContainer(0);
	
	int iCount;
	@irand(iCount, 8);
	iCount += 2;
		
	for (int i = 0; i < iCount; ++i) {
		object item;
		@CreateInvItem(item);
		item->SetItemName("grass_combination");
		
		int iVal;
		@irand(iVal, 50);
		iVal += 30;
		item->SetProperty("im_inc", (iVal / 100.0));

		@irand(iVal, 40);
		item->SetProperty("hl_inc", -(iVal / 100.0));
		
//		@irand(iVal, 50);
//		item->SetProperty("tr_inc", (iVal / 100.0));
		
		bool bAdded;
		@AddItem(bAdded, item, 0);
	}
}

