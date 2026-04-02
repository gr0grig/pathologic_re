include retreat.sci

bool citFilterUnholster(object actor)
{
	bool bCanSee;
	@CanSee(bCanSee, actor);
	return bCanSee;
}

void citProcessUnholster(object actor)
{
	bcitizen_unholster_retreat_TRetreat{actor};
}

task bcitizen_unholster_retreat_TRetreat : TRetreatBase
{
	void OnUnload(void) {
		CancelActivity();
		citHandleUnload();
	}
}
