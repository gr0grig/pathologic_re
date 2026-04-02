include std.sci
include actor_sdisp_base.sci
include game.sci

maintask TGirl : TSDispBase
{
	void OnUse(object actor) {
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive)
			@Barter(actor);
	}

	bool CanBeRemoved(void) {
		return true;
	}
}
