include std.sci

const int c_iArmyCameDay = 9;

maintask TBarricade
{
	var object soldier;

	void init(void) {
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad() {
		if (IsVisible()) {
			EnableBarricade(true);
			SetSoldier();
		}
		else {
			EnableBarricade(false);
			RemoveSoldier();
		}
	}
	
	void OnUnload() {
		RemoveSoldier();
	}
	
	bool IsVisible() {
		float fTime;
		@GetGameTime(fTime);
		if (fTime > ((c_iArmyCameDay - 1) * 24 + 6))
			return true;
		return false;
	}
	
	void EnableBarricade(bool bEnable) {
		@SetVisibility(bEnable);
		int id;
		@GetPFPolyID(id);
		if (id != -1) {
			object scene;
			@GetMainOutdoorScene(scene);
			if (bEnable) {
				@Trace("Blocking polygons: " + (id & (127 * 8)));
				scene->BlockPolygons(id, 127 * 8);
			}
			else
				scene->UnblockPolygons(id, 127 * 8);
		}
	}
	
	void SetSoldier() {
		Vector vPos, vDir;
		vPos = GetActorPosition() + [0, 150, 0];
		float x, z;
		@RandVec2D(x, z);
		vDir.x = x;
		vDir.y = 0;
		vDir.z = z;
		object scene;
		@GetScene(scene);
		if (!scene) {
			@Trace("Barricade null scene");
			return;
		}
		scene->AddStationaryActor(soldier, vPos, vDir, "pers_soldat", "soldier.xml", true);
		if (soldier == null) {
			@Trace("Error adding soldier");
		}
		else {
			@Trace("Soldier was added: " + vPos.x + " " + vPos.y + " " + vPos.z);
		}
	}
	
	void RemoveSoldier() {
		if (soldier) { 
			soldier->Remove();
			soldier = null;
		}
	}
}
