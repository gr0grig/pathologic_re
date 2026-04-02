maintask TWorld
{
	void init(void) {
		PlacePlayer();
	}
	
	void PlacePlayer(void) {
		object player;
		@FindActor(player, "player");
		object scene;
		@GetSceneByName(scene, "test_scene");
		bool bFound;
		Vector vPos, vDir;
		scene->GetLocator("birth", bFound, vPos, vDir);
		if (bFound) {
			@Teleport(player, scene, vPos, vDir);
		}
	}
}
