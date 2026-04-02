include std.sci
include container_base.sci

maintask TContainer : TContainerBase
{
	void init(void) {
		@SetVisibility(true);
		@DisableUpdate();
		
		GenerateRandomItem("Rifle", 1, 250);
		GenerateRandomItem("rifle_ammo", 1, 20, 2);
		GenerateRandomItem("revolver_ammo", 1, 20, 2);

		int iDay = GetDay();
		if (iDay >= 3) {
			GenerateRandomItem("halfboot_repel", 1, 30);
			GenerateRandomItem("drapery", 1, 40);
			GenerateRandomItem("glove_disp", 1, 40);
		}
		if (iDay >= 5) {
			GenerateRandomItem("cloak_repel", 1, 70);
			GenerateRandomItem("glove", 1, 70);
		}
		
		if (iDay >= 6) {
			GenerateRandomItem("boot_repel", 1, 40);			
		}
		
		if (iDay >= 8) {
			GenerateRandomItem("raincoat_repel", 1, 80);
		}
		
		GenerateRandomItem("needle", 1, 5, 1);

		super.init();
	}
}
