include std.sci

// CONSTANTS
const float c_fTeleportDelay = 5;
const float c_fDarkenTime = 3;
const float c_fUndarkenTime = 1;
// CONSTANTS

maintask TTeleport
{
	void init(void) {
		@Sleep(c_fTeleportDelay);

		Darken(0, 1, c_fDarkenTime);
		
		object player;
		@FindActor(player, "player");
		if (player) {
			object scene;
			@GetSceneByName(scene, "cot_alexandr");
			Vector vPos, vDir;
			bool bFound;
			scene->GetLocator("pt_d3q01_teleport", bFound, vPos, vDir);
			@Teleport(player, scene, vPos, vDir);
		}
		
		@SetVariable("d3q01", 8);
		
		@sync();
		
		Darken(1, 0, c_fUndarkenTime);
		
		@RemoveActor(self());
	}
}
