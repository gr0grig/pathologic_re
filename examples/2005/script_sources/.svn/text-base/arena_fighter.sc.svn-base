include std.sci
include attack_melee.sci
include death_base.sci

// CONSTANTS
const float c_fLooseDistance = 3000;
const float c_fAttackDistance = 125;
const float c_fLongAttackDistance = 300;
const float c_fForceJumpProbability = 0.4;
const float c_fEvadeProbability = 0.75;
const float c_fFalseAttackProbability = 0.1;
// CONSTANTS

void HandleDeath(object actor)
{
	TDeathDirHoldBase{actor};
}

void OnHit(object actor, int iHitType, float fDamage, float fHit)
{
	StdHandleHit(actor, iHitType, fDamage);
}

void OnHit2(object actor, int iHitType, float fDamage, float fHit, Vector vPos, Vector vDir)
{
	StdHandleHit2(actor, iHitType, fDamage, vPos, vDir);
}

void OnPropertyChange(object actor, string strProp)
{
	if (strProp == "health") {
		float fHealth;
		@GetProperty("health", fHealth);
		if (fHealth <= 0) {
			@SignalDeath(actor);
		}
	}
}

void OnDeath(object actor)
{
	HandleDeath(actor);
}

maintask TFighter : TAttackMeleeBase
{
	void init(void) {
		@SensePlayerOnly(true);
		
		@Sleep(1.5);

		object player;
		@FindActor(player, "player");
		super.init(player, true, c_fAttackDistance + 30);
	}

	float GetDamageAmount(object actor, int iAttackType) {return 0.1;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}

	bool IsAccessible(object actor) {
		return global.IsAccessible2(actor);
	}
}

task TFollowAttackMelee : TFollowAttackMeleeBase
{
	bool ContinueFollow(object actor) {
		return global.IsAccessible2(actor);
	}
}