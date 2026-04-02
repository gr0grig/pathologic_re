include std.sci
include attack_on_notice.sci
include death_base.sci
include item_base.sci

void DoAttack(object actor)
{
	TAttack{actor};
}

maintask TAttacked : TAttackOnNotice
{
}

task TDeath : TDeathDirUsableBase
{
	void init(object actor) {
		GenerateGrabitelItems();
		if (IsPlayerActor(actor))
			PlayerModReputation(actor, 0.03);
		object scene;
		@GetScene(scene);
		scene->RemoveStationaryActor(self());
		super.init(actor);
	}
}
