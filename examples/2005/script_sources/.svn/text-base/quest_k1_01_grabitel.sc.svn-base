include std.sci
include attack_on_notice.sci
include death_base.sci
include grabitel_attack.sci

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

void DoAttack(object actor)
{
	@SetVariable("b1q04_attack", 1);
	object scene;
	@GetScene(scene);
	scene->RemoveStationaryActor(self());
	TAttack{actor};
}

maintask TAttacked : TAttackOnNoticeSpecialIdle
{
	void init() {
		super.init("hunt");
	}
}

task TDeath : TDeathDirUsableBase
{
	void init(object actor) {
		@SetVariable("b1q04_dead", 1);
		if (IsPlayerActor(actor))
			PlayerModReputation(actor, 0.03);
		super.init(actor);
	}
}
