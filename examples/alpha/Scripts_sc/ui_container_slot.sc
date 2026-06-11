event OnDraw 0;
event OnLButtonDown 2;
event OnMessage 200;

maintask t0
{
	var int tv0;
	var int tv1;
	var object tv2;
	var string tv3;

	void init(void)
	{
		tv2 = null;
		tv0 = 1;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		if (!tv2) {
			return;
		}
		@Blit(tv3, 1, 1);
		if (tv1 > 1) {
			@Print("default", 2, 35, tv0);
		}
	}

	void OnLButtonDown(int a0, int a1)
	{
		@SendMessageToParent(0);
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a0 & 65536) {
			tv0 = a0 & 16383;
			return;
		}
		if (a0 & 32768) {
			tv2 = null;
			@SetTooltip(-1, "");
		} else {
			tv2 = a2;
			if (tv2) {
				int L0;
				tv2->GetItemID(L0);
				@GetInvItemSprite(tv3, L0);
				@LoadImage(tv3);
				@GetInvItemMaxStackSize(tv1, L0);
				@SetTooltip(1, "", tv2);
			} else {
				@SetTooltip(-1, "");
			}
		}
	}
}

