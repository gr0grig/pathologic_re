include std.sci
include attack_on_notice.sci
include death_base.sci
include grabitel_attack.sci
include item_base.sci

void DoAttack(object actor)
{
	object scene;
	@GetScene(scene);
	scene->RemoveStationaryActor(self());
	TAttack{actor};
}

maintask TAttacked : TAttackOnNotice
{
}

task TAttack
{
	void init(object actor) {
		for (;;) {
			TAttackBase{actor};
			@Sleep(1);
		}
	}
}

void HandleAttackBase(object actor)
{
}

bool FilterPlayerDamage(object player, object actor)
{
	return false;
}

task TDeath : TDeathDirUsableBase
{
	void init(object actor) {
		GenerateGrabitelItems();
		AddOrgans();
		if (IsPlayerActor(actor))
			PlayerModReputation(actor, 0.02);
		super.init(actor);
	}
}
