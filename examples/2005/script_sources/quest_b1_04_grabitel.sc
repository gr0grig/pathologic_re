include std.sci
include quest_b1_04_base.sci
include grabitel_attack.sci

const float c_fDeathRepChange = 0.03;

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
