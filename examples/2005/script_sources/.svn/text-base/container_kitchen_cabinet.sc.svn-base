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
			GenerateRandomItem("Knife", 1, 30);
			
			GenerateRandomItem("tvirin", 1, 10);
			GenerateRandomItem("lemon", 1, 20, 2);
			GenerateRandomItem("funduk", 1, 40);
			GenerateRandomItem("peanut", 1, 40);
			GenerateRandomItem("walnut", 1, 40);
			
			GenerateRandomItem("Money", 1, 2, 5);
		}
		else {
			GenerateRandomItem("Knife", 1, 30);
			GenerateRandomItem("tvirin", 1, 20);
			GenerateRandomItem("lemon", 1, 10, 2);
			GenerateRandomItem("funduk", 1, 50, 2);
			GenerateRandomItem("peanut", 1, 50, 2);
			GenerateRandomItem("walnut", 1, 50, 2);
			GenerateRandomItem("rusk", 1, 10, 2);
			GenerateRandomItem("dried_fish", 1, 50);
			GenerateRandomItem("egg", 1, 40);
			GenerateRandomItem("vegetables", 1, 50);
			GenerateRandomItem("milk", 1, 30);
			GenerateRandomItem("dried_meat", 1, 50);
			GenerateRandomItem("smoked_meat", 1, 50);
			GenerateRandomItem("fresh_fish", 1, 50);
			GenerateRandomItem("fresh_meat", 1, 50);
			GenerateRandomItem("bread", 1, 10);
			
			GenerateRandomItem("Money", 1, 2, 3);
		}

		super.init();
	}
}
