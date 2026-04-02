include std.sci
include container_base.sci

maintask TContainer : TContainerBase
{
	void init(void) {
		@SetVisibility(true);
		@DisableUpdate();

		GenerateRandomItem("Knife", 1, 15);
		GenerateRandomItem("tvirin", 1, 7);
		GenerateRandomItem("lemon", 1, 5, 2);
		GenerateRandomItem("funduk", 1, 30);
		GenerateRandomItem("peanut", 1, 30);
		GenerateRandomItem("walnut", 1, 30);
		
		GenerateRandomItem("rifle_ammo", 1, 10);
		GenerateRandomItem("revolver_ammo", 1, 10, 2);
		GenerateRandomItem("samopal_ammo", 1, 13);

		super.init();
	}
}
