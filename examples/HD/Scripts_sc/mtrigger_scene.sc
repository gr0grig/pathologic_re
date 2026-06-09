event OnIntersection 23;

property string Name;

maintask t0
{
	void init(void)
	{
		@Trace("Triggered actor: " + Name);
		for (; ; ) {
			@Hold();
		}
	}

	void OnIntersection(object a0)
	{
		bool L0;
		@IsPlayerActor(a0, L0);
		if (L0) {
			object L1;
			@GetScene(L1);
			@Trigger(L1, Name);
		}
	}
}

