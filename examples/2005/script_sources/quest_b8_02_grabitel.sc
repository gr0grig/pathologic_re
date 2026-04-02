include std.sci
include grabitel_base.sci
include death_base.sci
include item_base.sci

void OnUnload(void)
{
	@RemoveActor(self());
	@Hold();
}

task TDeath : TDeathDirUsableBase
{
	void init(object actor) {
		GenerateRichGrabitelItems();
		AddOrgans();
		if (IsPlayerActor(actor))
			PlayerModReputation(actor, 0.01);
		super.init(actor);
	}
}
