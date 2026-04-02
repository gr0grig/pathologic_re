include std.sci
include container_base.sci

maintask TContainer : TContainerBase
{
	void init(void) {
		@SetVisibility(true);
		@DisableUpdate();
		
		GenerateRandomItem("meradorm", 1, 20);
		GenerateRandomItem("alpha_pills", 1, 25, 4);
		GenerateRandomItem("tvirin", 1, 12);
		GenerateRandomItem("lemon", 1, 10, 2);
		
		int iDay = GetDay();
		
		if (iDay >= 5) { 
			GenerateRandomItem("novocaine", 1, 10);
		}
		
		if (iDay >= 7) { 
			GenerateRandomItem("morfin", 1, 20);
		}
		
		if (iDay >= 10) {
			GenerateRandomItem("etorfin", 1, 30);
		}

		GenerateRandomItem("revolver_ammo", 1, 20, 2);
		GenerateRandomItem("rifle_ammo", 1, 10);
		
		GenerateRandomItem("powder", 1, 500);
		GenerateRandomItem("syringe", 1, 20);
		GenerateRandomItem("kerosene", 1, 4, 10);
		GenerateRandomItem("lockpick", 1, 20);
		
		GenerateRandomItem("hook", 1, 15, 5);
		GenerateRandomItem("needle", 1, 15, 3);
		
		GenerateRandomItem("glove", 1, 70);

		super.init();
	}
}
