include std.sci
include idle_logic.sci

void citStationaryStopDoSomething(void)
{
	@UnlookAsync("head");
	@StopAnimation();
}

void citStationaryDoSomething(void)
{
	object player;
	@FindActor(player, "player");
	if (player) {
		float fDist = sqrt(GetActorDistanceSqr(player));
		if (fDist < 350) {
			HeadLook(player);	
		}
	}
	
	int iAnims = GetIdleAnimationCount();
	if (!iAnims)
		return;
	int nAnimation;
	@irand(nAnimation, iAnims);
	@PlayAnimation("all", GetIdleAnimation(nAnimation));
	@WaitForAnimEnd();
	
	@UnlookAsync("head");
}
