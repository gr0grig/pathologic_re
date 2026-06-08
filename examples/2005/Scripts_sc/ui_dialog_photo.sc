event OnDraw 0;
event OnLButtonDown 2;

maintask t0
{
	var string tv0;
	var object tv1;

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

	void OnLButtonDown(int a0, int a1)
	{
		if (!tv1) {
			@CreateWindow("dialog_photo.xml", true, tv1);
		} else {
			tv1->DestroyWindow();
		}
	}
}

