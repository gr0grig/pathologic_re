event OnDraw 0;
event OnLButtonDown 2;
event OnRButtonDown 6;
event OnLButtonUp 3;
event OnMessage 200;

maintask t0
{
	var int tv0;
	var object tv1;
	var string tv2;

	void init(void)
	{
		tv1 = null;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		if (!tv1) {
			return;
		}
		@Blit(tv2, 1, 1);
	}

	void OnLButtonDown(int a0, int a1)
	{
		@SendMessageToParent(0);
	}

	void OnRButtonDown(int a0, int a1)
	{
		@SendMessageToParent(1);
	}

	void OnLButtonUp(int a0, int a1)
	{
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a0 & 65536) {
			return;
		}
		if (a0 & 16384) {
			@SetBackground("selected");
		} else {
			@SetBackground("default");
		}
		if (a0 & 32768) {
			tv1 = null;
			@SetTooltip(-1, "");
			return;
		}
		tv1 = a2;
		if (tv1) {
			int L0;
			tv1->GetItemID(L0);
			@GetInvItemSprite(tv2, L0);
			@LoadImage(tv2);
			@GetInvItemMaxStackSize(tv0, L0);
			@SetTooltip(1, "", tv1);
		} else {
			@SetTooltip(-1, "");
		}
	}
}

