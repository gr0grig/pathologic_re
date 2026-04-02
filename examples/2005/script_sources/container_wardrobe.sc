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
			GenerateRandomItem("Rifle", 1, 250);
			GenerateRandomItem("Revolver", 1, 250);

			int iDay = GetDay();
			if (iDay >= 3) {
				GenerateRandomItem("halfboot_repel", 1, 40);
				GenerateRandomItem("drapery", 1, 30);
				GenerateRandomItem("glove_disp", 1, 40);
			}
			if (iDay >= 5) {
				GenerateRandomItem("cloak_repel", 1, 40);
				GenerateRandomItem("glove", 1, 40);
			}
			if (iDay >= 6) {
				GenerateRandomItem("boot_repel", 1, 70);
			}
			
			if (iDay >= 8) {
				GenerateRandomItem("raincoat_repel", 1, 60);
			}
			
			GenerateRandomItem("Money", 1, 2, 5);
		}
		else {
			int iDay = GetDay();
			if (iDay >= 3) {
				GenerateRandomItem("halfboot_repel", 1, 60);
				GenerateRandomItem("drapery", 1, 40);
				GenerateRandomItem("glove_disp", 1, 60);
			}
			if (iDay >= 5) {
				GenerateRandomItem("cloak_repel", 1, 60);
				GenerateRandomItem("glove", 1, 60);
			}

			if (iDay >= 8) {			
				GenerateRandomItem("boot_repel", 1, 80);
			}
			
			if (iDay >= 8) {
				GenerateRandomItem("raincoat_repel", 1, 80);
			}

			GenerateRandomItem("Money", 1, 2, 3);
		}

		super.init();
	}
}
