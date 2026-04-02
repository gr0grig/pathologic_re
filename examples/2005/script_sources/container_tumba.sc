include std.sci
include container_steal_base.sci

maintask TContainer : TContainerStealBase
{
	void init(void) {
		@SetVisibility(true);
		@DisableUpdate();

		object scene;
		@GetScene(scene);
		bool bNailed;
		scene->GetProperty("nailed", bNailed);
		if (bNailed) {
			GenerateRandomItem("alpha_pills", 1, 2, 3);
			GenerateRandomItem("tvirin", 1, 20);
			GenerateRandomItem("lemon", 1, 10);
			GenerateRandomItem("meradorm", 1, 25);
			
			GenerateRandomItem("syringe", 1, 20);
			GenerateRandomItem("kerosene", 1, 3, 10);
			GenerateRandomItem("hook", 1, 15, 3);
			GenerateRandomItem("needle", 1, 5, 2);
			GenerateRandomItem("Money", 1, 2, 5);

			int iDay = GetDay();
			
			if (iDay >= 4) {						
				GenerateRandomItem("neomicin", 1, 15);
				GenerateRandomItem("glove_disp", 1, 30);
			}
			
			if (iDay >= 5) {
				GenerateRandomItem("novocaine", 1, 20);
				GenerateRandomItem("beta_pills", 1, 4, 2);
				GenerateRandomItem("Scalpel", 1, 45);
			}
			
			if (iDay >= 7) {
				GenerateRandomItem("packet", 1, 25);
				GenerateRandomItem("monomicin", 1, 25);
				GenerateRandomItem("morfin", 1, 25);
				GenerateRandomItem("gamma_pills", 1, 8, 2);
			}
			
			if (iDay >= 10) {
				GenerateRandomItem("feromicin", 1, 35);
				GenerateRandomItem("delta_pills", 1, 16);
				GenerateRandomItem("etorfin", 1, 40);
			}
		}
		else {
			int iDay = GetDay();

			GenerateRandomItem("bandage", 1, 50);
			GenerateRandomItem("tourniquet", 1, 50);
			GenerateRandomItem("alpha_pills", 1, 4, 3);
			if (iDay <= 7) {
				GenerateRandomItem("packet", 1, 50);
			}
			else {
				GenerateRandomItem("packet", 1, 20);
			}
			GenerateRandomItem("needle", 1, 15, 2);
			GenerateRandomItem("hook", 1, 5);
			GenerateRandomItem("flower", 1, 10);
			GenerateRandomItem("syringe", 1, 30);
			GenerateRandomItem("watch", 1, 30);
			GenerateRandomItem("razor", 1, 30);
			GenerateRandomItem("beads", 1, 20);
			GenerateRandomItem("bracelet", 1, 20);
			GenerateRandomItem("ear_ring", 1, 20);
			GenerateRandomItem("gold_ring", 1, 50);
			GenerateRandomItem("silver_ring", 1, 30);
			GenerateRandomItem("glove", 1, 80);
			
			GenerateRandomItem("Money", 1, 2, 3);
		}

		super.init();
	}
}
