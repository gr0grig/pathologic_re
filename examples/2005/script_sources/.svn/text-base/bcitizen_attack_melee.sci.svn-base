include std.sci
include attack_melee.sci
include std_melee_attack.sci

int citFilterAttacked(object actor)
{
	return (IsAccessible(actor))? 2 : 0;
}

void citHandleAttacked(object actor)
{
	bcitizen_attack_retreat_TAttack{actor};
}

task bcitizen_attack_retreat_TAttack : TAttackMeleeBase
{
	void init(object actor) {
		super.init(actor, true, c_fAttackDistance + 30);
	}

	float GetDamageAmount(object actor, int iAttackType) {return c_fMeleeDamage;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}
}

task TFollowAttackMelee : TFollowAttackMeleeBase
{
	void OnUnload(void) {
		CancelActivity();
		citHandleUnload();
	}
}
