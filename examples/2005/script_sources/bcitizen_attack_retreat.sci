include std.sci
include retreat.sci

int citFilterAttacked(object actor)
{
	return (IsAccessible(actor))? 2 : 0;
}

void citHandleAttacked(object actor)
{
	bcitizen_attack_retreat_TRetreat{actor};
}

task bcitizen_attack_retreat_TRetreat : TRetreatBase
{
	void OnUnload(void) {
		CancelActivity();
		citHandleUnload();
	}
}
