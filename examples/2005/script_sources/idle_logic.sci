include std.sci

string GetIdleAnimation(int i) {
	string name = "idle";
	if (i)
		name += i;
	return name;
}

int GetIdleAnimationCount(void)
{
	int nAnims = 0;
	for (;;) {
		bool bExist;
		@HasAnimation(bExist, "all", GetIdleAnimation(nAnims));
		if (!bExist) break;
		++nAnims;
	}
	return nAnims;
}

string GetNormalIdleAnimation(int i) {
	return "idle" + (i + 1);
}

int GetNormalIdleAnimationCount(void)
{
	int nAnims = 0;
	for (;;) {
		bool bExist;
		@HasAnimation(bExist, "all", GetIdleAnimation(nAnims + 1));
		if (!bExist) break;
		++nAnims;
	}
	return nAnims;
}
