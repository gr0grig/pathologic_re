include std.sci
include game.sci
include dialogs.sci
include idle.sci
include NPC_Dohodyaga.sci

maintask TSalesman : TIdleBaseLookAsync
{
	var bool bClothes, bWeapon, bFood, bMedcine, bOther;
	var float fRepThreshold;
	
	void init(void) {
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
		int iPrevDay;
		@GetVariable("tr_salesman_kabak", iPrevDay);
		
		if (iPrevDay != GetDay()) {
			@Trace("Updating salesman");
			@SetVariable("tr_salesman_kabak", GetDay());
			RefillItems();
		}

		if (SetTradeCamera(actor)) {
			TTrade{actor};
			UnsetTradeCamera(actor);
		}
	}
	
	void RefillItems() 	{
		int iDay = GetDay();
		@ClearSubContainer(0);
		AddKabakItemsToSalesman(self(), GetDay());
	}
}

