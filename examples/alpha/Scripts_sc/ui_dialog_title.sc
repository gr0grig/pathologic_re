event OnDraw 0;

maintask t0
{
	var string tv0;

	void init(void)
	{
		object L0;
		@ShowCursor();
		@SetOwnerDraw(true);
		@GetConversation(L0);
		if (L0 == null) {
			@UITrace("null conversation");
			return;
		}
		L0->GetNPCName(tv0);
		@_strupr(tv0);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		@Print("default", 0, 0, tv0, 1.0, 1.0, 1.0);
	}
}

