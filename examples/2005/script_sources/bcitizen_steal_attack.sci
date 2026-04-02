include std.sci

int citFilterSteal(object actor)
{
@Trace("Received steal");
	bool bCanSee;
	@CanSee(bCanSee, actor);
	if (bCanSee) {
		return citFilterAttacked(actor);
	}
	return 0;
}

void citHandleSteal(object actor)
{
	citHandleAttacked(actor);
}
