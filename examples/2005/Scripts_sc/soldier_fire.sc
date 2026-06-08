maintask t0
{
	void init(void)
	{
		bool L0;
		@IsLoaded(L0);
		if (L0) {
			@sync();
			@sync();
		} else {
			@Trace("Unloaded dynamic light");
		}
		@RemoveActor(f_13_a0_o());
	}
}

object f_13_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

