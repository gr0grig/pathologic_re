include std.sci
include follow.sci

// CONSTANTS
const float c_fDiseaseDist = 300;
const float c_fDiseaseAmount = 0.2;
// CONSTANTS

task TAttackZombieFollowBase : TFollowBase
{
	bool init(object actor) {
		return super.init(actor, 150, 3000, false, true);
	}

	string GetWalkPrefix(void) {return "zwalk";}
}

task TAttackZombieBase
{
	void init(object actor) {
		while (TAttackZombieFollow{actor}) {
			@Face(actor);
			bool bSuccess;
			@WaitForAnimEnd(bSuccess);
			if (!bSuccess)
				break;
			@PlayAnimation("all", "dattack_begin");
			@WaitForAnimEnd(bSuccess);
			if (!bSuccess)
				break;
			if (GetActorDistanceSqr(actor) <= c_fDiseaseDist * c_fDiseaseDist) {
				Disease(actor, c_fDiseaseAmount);
			}
			@PlayAnimation("all", "dattack_end");
			@WaitForAnimEnd(bSuccess);
			if (!bSuccess)
				break;
			@StopAsync();
		}
	}
	
	void CancelActivity(void) {
		@StopAsync();
		@StopAnimation();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}
}
