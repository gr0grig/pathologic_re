include std.sci

// CONSTANTS
const float c_fTeleportDelay = 2.5;
const float c_fDarkenTime = 2;
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
			@GetSceneByName(scene, "factory");
			Vector vPos, vDir;
			bool bFound;
			scene->GetLocator("pt_b4q01_teleport", bFound, vPos, vDir);
			@Teleport(player, scene, vPos, vDir);
			
			float fGameTime;
			@GetGameTime(fGameTime);
			@AdvanceGameTime((4 * 24 + 14) - fGameTime);

			int iItemCount;
			player->GetItemCount(iItemCount, 0);
			for (int i = iItemCount; i; --i) {
				object item;
				player->GetItem(item, i - 1, 0);
				int iItemID;
				item->GetItemID(iItemID);
				bool bWeapon;
				@HasInvItemProperty(bWeapon, iItemID, "Weapon");
				if (!bWeapon) {
					@HasInvItemProperty(bWeapon, iItemID, "Ammo");
					if (!bWeapon)
						continue;
				}
				int iAmount;
				player->GetItemAmount(iAmount, i - 1);
				player->RemoveItem(i - 1, iAmount);
			}
			player->SelectWeapon();
			
			player->SetProperty("health", 0.3);
			float fTiredness;
			player->GetProperty("tiredness", fTiredness);
			if (fTiredness > 0.8) {
				player->SetProperty("tiredness", 0.8);
				ReportTirednessChange(0.8 - fTiredness);
			}
			float fHunger;
			player->GetProperty("hunger", fHunger);
			if (fHunger > 0.8)
				player->SetProperty("hunger", 0.8);
			float fReputation;
			player->GetProperty("reputation", fReputation);
			if (fReputation > 0.2) {
				PlayerModReputation(player, 0.2 - fReputation);
			}
			
			LockDoorActor("ifactory@door1", true);
			object door;
			@FindActor(door, "ifactory_grid_door");
			door->SetProperty("locked", true);
			door->Close();
		}
		
		@sync();
		LockDoorActor("warehouse_gangster@door1", false);
		
		Darken(1, 0, c_fUndarkenTime);
		
		@RemoveActor(self());
	}
}
