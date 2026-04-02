include std.sci

// CONSTANTS
const float c_fDarkenTime = 1;
const float c_fUndarkenTime = 5;
// CONSTANTS

maintask TTeleport
{
	void init(void) {
		object scene;
		@GetMainOutdoorScene(scene);
	
		Darken(0, 1, c_fDarkenTime);
		
		object player;
		@FindActor(player, "player");
		if (player) {
			bool bFound;
			object scene_i;
			@GetSceneByName(scene_i, "storojka");
			Vector vPos, vDir;
			scene_i->GetLocator("birth", bFound, vPos, vDir);
			@Teleport(player, scene_i, vPos, vDir);
			@sync();
			
			
			scene->GetLocator("pt_d11q01_teleport", bFound, vPos, vDir);
			@Teleport(player, scene, vPos, vDir);
			
			
			float fHealth;
			player->GetProperty("health", fHealth);
			if (fHealth > 0.2)
				player->SetProperty("health", 0.2);
				
			float fTiredness;
			player->GetProperty("tiredness", fTiredness);
			if (fTiredness > 0.6) {
				player->SetProperty("tiredness", 0.6);
				ReportTirednessChange(0.6 - fTiredness);
			}
		}
		
		@sync();
		Darken(1, 0, c_fUndarkenTime);
		
		// placing dogs 
		SpawnActor(scene, "pt_d11q01_dog1", "pers_dog", "d11q01_dog.xml");
		SpawnActor(scene, "pt_d11q01_dog2", "pers_dog", "d11q01_dog.xml");
		SpawnActor(scene, "pt_d11q01_dog3", "pers_dog", "d11q01_dog.xml");
		
		@SetVariable("d11q01SoldierAttack", 1);
		@RemoveActor(self());
	}
}
