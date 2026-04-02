include std.sci
include hunter_base.sci
include hunter_attack.sci

void HandleAttackBase(object actor)
{
}

maintask TBerserk
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnLoad(void) {
		object player;
		@FindActor(player, "player");
		if (player)
			TAttack{player, false};
	}
}
