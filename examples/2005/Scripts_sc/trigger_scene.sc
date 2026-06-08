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
			object L1;
			g1 = false;
			@GetScene(L1);
			@Trigger(L1, Name);
		}
	}
}

