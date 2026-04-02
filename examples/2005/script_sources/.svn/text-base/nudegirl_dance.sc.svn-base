include std.sci
include NPC_Birdmask.sci
include idle.sci
include game.sci

int GetDanceAnimationCount() {
	int nAnims = 0;
	for (;;) {
		bool bExist;
		@HasAnimation(bExist, "all", GetDanceAnimation(nAnims));
		if (!bExist) break;
		++nAnims;
	}
	return nAnims;
}

string GetDanceAnimation(int i) {
	string name = "dance";
	if (i)
		name += i;
	return name;
}

bool CheckDistance(object player)
{
	if (player == null)
		return false;
	float fDist = sqrt(GetActorDistanceSqr(player));
	return fDist < 350;
}

maintask TNudegirlDance
{
	var bool m_bLooking;
	var object player;
	void init(void) {
		object player;
		@FindActor(player, "player");
		m_bLooking = false;
		@WaitForAnimEnd();

		if (!IsLoaded())
			return;

		// calculate number of animations
		int nAnims = GetDanceAnimationCount();
		
		while (nAnims) {
			int nAnimation;
			@irand(nAnimation, nAnims);
			@PlayAnimation("all", GetDanceAnimation(nAnimation));
			if (CheckDistance(player) && !m_bLooking) {
				m_bLooking = true;
				HeadLook(player);
			}
			bool bSuccess;
			@WaitForAnimEnd(bSuccess);
			if (!bSuccess) break;
			if (!CheckDistance(player) && m_bLooking) {
				@UnlookAsync("head");
				m_bLooking = false;
			}
		}
		
		for (;;) 
			@Hold();
	}
	
	void OnUnload() {
		for (;;) 
			@Hold();
	}
}