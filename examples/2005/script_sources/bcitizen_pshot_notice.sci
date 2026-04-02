bool citFilterPlayerShot(object actor)
{
	bool bCanSee;
	@CanSee(bCanSee, actor);
	return bCanSee || GetActorDistanceSqr(actor) <= 1500 * 1500;
}

void citProcessPlayerShot(object actor)
{
	citHandlePlayerNotice(actor);
}
