include std.sci
include attack_on_notice.sci
include death_base.sci

void DoAttack(object actor)
{
	@SetVariable("b1q04_attack", 1);
	object scene;
	@GetScene(scene);
	scene->RemoveStationaryActor(self());
	TAttack{actor};
}

maintask TAttacked : TAttackOnNotice
{
}

task TDeath : TDeathDirUsableBase
{
	void init(object actor) {
		if (IsPlayerActor(actor)) {
			PlayerModReputation(actor, c_fDeathRepChange);
		}
		AddOrgans();
		@SetVariable("b1q04_dead", 1);
		super.init(actor);
	}
}
