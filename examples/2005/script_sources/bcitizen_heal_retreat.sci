include std.sci
include retreat.sci

bool citFilterHealed(object actor)
{
	return IsAccessible(actor);
}

void citProcessHealed(object actor)
{
	bcitizen_heal_retreat_TRetreat{actor};
}

task bcitizen_heal_retreat_TRetreat: TRetreatBase
{
	void init(object actor) {
		@Face(actor);
		@PlayAnimation("all", "bow");
		@WaitForAnimEnd();
		@StopAsync();
		
		ReportReputationChange(c_fHealRepChange);
		ModPropertyF(actor, "reputation", c_fHealRepChange, 0, 1);
		ReportHealthChange(c_fHealHealthChange);
		ModPropertyF(actor, "health", c_fHealHealthChange, 0, 1);

		super.init(actor);
	}

	void OnUnload(void) {
		CancelActivity();
		citHandleUnload();
	}
}
