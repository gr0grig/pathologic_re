include std.sci
include retreat.sci

int citFilterAttacked(object actor)
{
	return (IsAccessible(actor))? 2 : 0;
}

void citHandleAttacked(object actor)
{
	bcitizen_attack_wretreat_TRetreat{actor};
}

task bcitizen_attack_wretreat_TRetreat : TRetreatBase
{
	void init(object actor) {
		@Face(actor);
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
		@PlayAnimation("all", "attack_stay");
		@WaitForAnimEnd();
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		@StopAsync();

		super.init(actor);
	}

	void OnUnload(void) {
		CancelActivity();
		citHandleUnload();
	}
}
