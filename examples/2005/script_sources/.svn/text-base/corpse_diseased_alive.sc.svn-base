include std.sci
include game.sci


// diseased corpse with dead diseased blood

// CONSTANTS
// CONSTANTS

///////////////////////////////////////////////////////
// Corpse with diseased blood and alive virus
///////////////////////////////////////////////////////
maintask TCorpse
{
	void init(void) {
		InitItems();
		for (;;) {
			@Hold();
		}
	}

	void OnUse(object actor) {
		@Trace("Trying to use");
		bool bOnGround;
		actor->IsOnGround(bOnGround);
		if (bOnGround) {
			disable OnUse;
			bool bActive;
			@IsOverrideActive(bActive);
			if (!bActive)
				@Barter(actor);
			enable OnUse;
		}	
	}
	
	void OnLoad(void) {
		SetVisibility();
	}
	
	void InitItems() {
		if (!AddItem("blooddiseasedalive", 1, 0))
			@Trace("Can't add corpse item");
	}
	
	void SetVisibility() {
		if (!IsDay(5)) {
			@SetVisibility(false);
			return;
		}
		
		int iRegion = GetActorRegion();
		if (IsRegionDiseased(iRegion - 1)) {
			@SetVisibility(true);
			@Trace("I am in region " + iRegion + " and visible");
		}
		else {
			@SetVisibility(true);
			@Trace("I am in region " + iRegion + " and not visible");
		}
	}
}
