event OnIntersection 23;

property string Name;
var bool g1;

maintask t0
{
	void init(void)
	{
		g1 = true;
		for (; ; ) {
			@Hold();
		}
	}

	void OnIntersection(object a0)
	{
		bool L0;
		if (!g1) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (L0) {
			string L1;
			g1 = false;
			@GetActorName(L1);
			f_1d_a2_b(Name, L1);
		}
	}
}

bool f_1d_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

