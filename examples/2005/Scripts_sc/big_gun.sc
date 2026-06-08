event OnLoad 5;

maintask t0
{
	void init(void)
	{
		int L0;
		@GetPFPolyID(L0);
		if (L0 != -1) {
			object L1;
			@Trace("Gun blocking polygon: " + (L0 & 1016));
			@GetMainOutdoorScene(L1);
			L1->BlockPolygons(L0, 1016);
		}
		@Hold();
	}

	void OnLoad(void)
	{
		@SetVisibility(true);
		@StopGroup0();
	}
}

