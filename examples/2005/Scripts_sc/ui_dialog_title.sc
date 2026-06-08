event OnDraw 0;

maintask t0
{
	var string tv0;
	var int tv1;
	var int tv2;

	void init(void)
	{
		object L0;
		@ShowCursor();
		@SetOwnerDraw(true);
		@GetWindowSize(tv1, tv2);
		@GetConversation(L0);
		if (L0 == null) {
			@UITrace("null conversation");
			return;
		}
		L0->GetNPCName(tv0);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		int L0;
		@PrintInWidth(L0, "default", 0, 0, tv1, tv0, 0.501960813999176, 0.501960813999176, 0.501960813999176);
	}
}

