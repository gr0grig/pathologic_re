include std.sci

int citFilterKillmeMessage(object actor)
{
	if (!IsAccessible(actor))
		return 0;
		
	return (citNeedKillmeAttack(actor) ? 2 : 0);
}

void citHandleKillmeMessage(object actor)
{
	citHandleAttacked(actor);
}
