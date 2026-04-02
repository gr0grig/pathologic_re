include std.sci
include quest_k4_01_grabitel_base.sci
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
