include std.sci
include grabitel_base.sci
include death_base.sci
include item_base.sci

task TDeath : TDeathDirUsableBase
{
	void init(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			GenerateGrabitelItems();
		}
		
		AddOrgans();
		super.init(actor);
	}
}
