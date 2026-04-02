include std.sci
include idle_logic.sci

void citStationaryStopDoSomething(void)
{
	@StopAnimation();
}

void citStationaryDoSomething(void)
{
	int iAnims = GetIdleAnimationCount();
	if (!iAnims)
		return;
	int nAnimation;
	@irand(nAnimation, iAnims);
	@PlayAnimation("all", GetIdleAnimation(nAnimation));
	@WaitForAnimEnd();
}
