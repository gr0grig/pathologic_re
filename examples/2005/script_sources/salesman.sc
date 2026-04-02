include std.sci
include game.sci
include dialogs.sci
include idle.sci
include NPC_Salesman.sci

float GetReputation(object actor) {
	float fRep;
	actor->GetProperty("reputation", fRep);
	return fRep;
}

maintask TSalesman : TIdleBaseLookAsync
{
	var bool bClothes, bWeapon, bFood, bMedcine, bOther;
	var float fRepThreshold;
	var int iPrevDay;
	
	void init(void) {
		iPrevDay = -1;
		InitProperties();
		
		if (!IsLoaded()) 
			@Hold();
		
		while (true) {
			super.init(300, 100);
		}
	}	
	
	void OnUnload(void) {
		CancelActivity();
		@Hold();
	}
	
	void OnLoad(void) {
		@StopGroup0();
	}
	
	void OnUse(object actor) {
		if (fRepThreshold > GetReputation(actor)) {
			TDlg_SalesmanBadRep{actor};
			return;
		}
		
		if (iPrevDay != GetDay()) {
			@Trace("Updating salesman");
			iPrevDay = GetDay();
			RefillItems();
		}

		if (SetTradeCamera(actor)) {
			TTrade{actor};
			UnsetTradeCamera(actor);
		}
	}
	
	void InitProperties() {
		int clothes, weapon, food, medcine, other;
		float rep_threshold;
		
		if (HasProperty(self(), "clothes"))
			@GetProperty("clothes", clothes);
		
		if (HasProperty(self(), "weapon"))
			@GetProperty("weapon", weapon);
			
		if (HasProperty(self(), "food"))
			@GetProperty("food", food);
			
		if (HasProperty(self(), "medcine"))
			@GetProperty("medcine", medcine);
			
		if (HasProperty(self(), "other"))
			@GetProperty("other", other);

		if (HasProperty(self(), "rep_threshold"))
			@GetProperty("rep_threshold", rep_threshold);
		else
			rep_threshold = 0.33;
			
		bClothes = (clothes != 0);
		bWeapon = (weapon != 0);
		bFood = (food != 0);
		bMedcine = (medcine != 0);
		bOther = (other != 0);				
		fRepThreshold = rep_threshold;
	}	
	
	void RefillItems() 	{
		int iDay = GetDay();
		@ClearSubContainer(0);
		
		if (bClothes) // can trade bClothes
			AddItemsToSalesman(self(), iDay, c_iCClothes);
		
		if (bWeapon)  // can trade bWeapon
			AddItemsToSalesman(self(), iDay, c_iCWeapon);
		
		if (bFood) // can trade bFood
			AddItemsToSalesman(self(), iDay, c_iCFood);
		
		if (bMedcine) // can trade bMedcine
			AddItemsToSalesman(self(), iDay, c_iCMedcine);
		
		if (bOther) // can trade bOther
			AddItemsToSalesman(self(), iDay, c_iCOther);
	}
}

