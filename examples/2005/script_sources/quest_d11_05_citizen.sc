include std.sci
include quest_d11_05_base.sci
include attack_melee.sci
include std_melee_attack.sci

const float c_fDeathRepChange = 0.0;

task TAttack : TAttackMeleeBase
{
	void init(object actor) {
		for (;;) {
			super.init(actor, true, c_fAttackDistance + 30);
			@Sleep(1);
		}
	}

	float GetDamageAmount(object actor, int iAttackType) {return 0.03;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}
}

task TFollowAttackMelee : TFollowAttackMeleeBase
{
}
