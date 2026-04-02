include actor_std.sci
include retreat.sci

bool citFilterPlayerShot(object actor)
{
	bool bCanSee;
	@CanSee(bCanSee, actor);
	return bCanSee || GetActorDistanceSqr(actor) <= 2000 * 2000;
}

void citProcessPlayerShot(object actor)
{
	bcitizen_pshot_retreat_TRetreat{actor};
}

task bcitizen_pshot_retreat_TRetreat : TRetreatBase
{
	void OnUnload(void) {
		CancelActivity();
		citHandleUnload();
	}
}
