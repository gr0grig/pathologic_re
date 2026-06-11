event OnDraw 0;

maintask t0
{
	var string tv0;

	void init(void)
	{
		object L0;
		@GetConversation(L0);
		if (L0 == null) {
			@UITrace("null conversation");
			return;
		}
		L0->GetPhoto(tv0);
		@LoadImage(tv0);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		@Blit(tv0, 0, 0);
	}
}

