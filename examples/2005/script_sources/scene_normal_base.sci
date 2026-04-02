include std.sci
include scene_actor_gen.sci

task TSceneNormalBase : TSceneActorGen
{
	void init(void) {
		GenerateItems();
		super.init();
	}
	
	void GenerateItems(void) {
		bool bNailed;
		@GetProperty("nailed", bNailed);

		GenerateFoodItems(bNailed);
		GeneratePFoodItems(bNailed);
		GenerateKnifeItems(bNailed);
		GenerateBottleItems(bNailed);
	}
	
	void GenerateFoodItems(bool bNailed) {
		for (int iLocator = 1; ; ++iLocator) {
			bool bFound;
			Vector vPos, vDir;
			@GetLocator("pt_item_food" + iLocator, bFound, vPos, vDir);
			if (!bFound)
				break;
			GenerateFood(vPos, vDir, bNailed);
		}
	}
	
	void GeneratePFoodItems(bool bNailed) {
		for (int iLocator = 1; ; ++iLocator) {
			bool bFound;
			Vector vPos, vDir;
			@GetLocator("pt_item_pfood" + iLocator, bFound, vPos, vDir);
			if (!bFound)
				break;
			GeneratePFood(vPos, vDir, bNailed);
		}
	}

	void GenerateKnifeItems(bool bNailed) {
		for (int iLocator = 1; ; ++iLocator) {
			bool bFound;
			Vector vPos, vDir;
			@GetLocator("pt_item_knife" + iLocator, bFound, vPos, vDir);
			if (!bFound)
				break;
			GenerateKnife(vPos, vDir, bNailed);
		}
	}
	
	void GenerateBottleItems(bool bNailed) {
		for (int iLocator = 1; ; ++iLocator) {
			bool bFound;
			Vector vPos, vDir;
			@GetLocator("pt_item_bottle" + iLocator, bFound, vPos, vDir);
			if (!bFound)
				break;
			GenerateBottle(vPos, vDir, bNailed);
		}
	}

	void GenerateFood(Vector vPos, Vector vDir, bool bNailed) {
		if (rndbool((bNailed)? 0.05 : 0.2)) {
			string item_name;
			@RandOneOf(item_name, 5, 5, 3, 2, 3, "bread", "bottle_water", "milk", "vegetables", "lemon");

			object actor;
			@AddActorByType(actor, "scripted_container", self(), vPos, vDir, "item_" + item_name + "_steal.xml");
		}
		else {
			if (rndbool(0.5)) {
				object actor;
				float fx, fy;
				@RandVec2D(fx, fy);
				Vector vPlateDir;
				vPlateDir.x = fx;
				vPlateDir.y = 0;
				vPlateDir.z = fy;
				@AddActorByType(actor, "scripted_container", self(), vPos, vPlateDir, "item_plate.xml");
			}
		}
	}

	void GeneratePFood(Vector vPos, Vector vDir, bool bNailed) {
		if (rndbool((bNailed)? 0.05 : 0.2)) {
			string item_name;
			@RandOneOf(item_name, 8, 3, 3, 3, 2, 2, 1, "rusk", "dried_fish", "dried_meat", "smoked_meat", "fresh_fish", "fresh_meat", "tvirin");

			object actor;
			float fx, fy;
			@RandVec2D(fx, fy);
			Vector vPlateDir;
			vPlateDir.x = fx;
			vPlateDir.y = 0;
			vPlateDir.z = fy;
			@AddActorByType(actor, "scripted_container", self(), vPos, vPlateDir, "item_plate.xml");
			@AddActorByType(actor, "scripted_container", self(), vPos + [0, 5, 0], vDir, "item_" + item_name + "_steal.xml");
		}
		else {
			if (rndbool(0.5)) {
				object actor;
				float fx, fy;
				@RandVec2D(fx, fy);
				Vector vPlateDir;
				vPlateDir.x = fx;
				vPlateDir.y = 0;
				vPlateDir.z = fy;
				@AddActorByType(actor, "scripted_container", self(), vPos, vPlateDir, "item_plate.xml");
			}
		}
	}

	void GenerateKnife(Vector vPos, Vector vDir, bool bNailed) {
		if (rndbool((bNailed)? 0.05 : 0.05)) {
			object actor;
			@AddActorByType(actor, "scripted_container", self(), vPos, vDir, "item_knife_steal.xml");
		}
	}

	void GenerateBottle(Vector vPos, Vector vDir, bool bNailed) {
		if (rndbool((bNailed)? 0.2 : 0.4)) {
			string item_name;
			@RandOneOf(item_name, 10, 15, 3, 3, 3, 1, "bottle_water", "bottle_empty", "vegetables", "milk", "egg", "tvirin");

			object actor;
			@AddActorByType(actor, "scripted_container", self(), vPos, vDir, "item_" + item_name + "_steal.xml");
		}
	}
}
