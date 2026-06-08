event OnDraw 0;
event OnLButtonDown 2;
event OnRButtonDown 6;
event OnLButtonUp 3;
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
		if (tv0 > 1) {
			@Print("default", 2, 35, tv0);
		}
	}

	void OnLButtonDown(int a0, int a1)
	{
		if (!tv2) {
			return;
		}
		@SetBackground("selected");
		@SendMessageToParent(0);
	}

	void OnRButtonDown(int a0, int a1)
	{
		if (!tv2) {
			return;
		}
		@SendMessageToParent(1);
	}

	void OnLButtonUp(int a0, int a1)
	{
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a0 & 65536) {
			tv0 = a0 & 16383;
			return;
		}
		if (a0 & 16384) {
			@SetBackground("selected");
		} else {
			@SetBackground("default");
		}
		if (a0 & 32768) {
			tv2 = null;
			@SetTooltip(-1, "");
		} else {
			int L0;
			string L1;
			L0 = a0 & 16383;
			@GetStringByID(L1, 1007);
			L1 = L1 + L0;
			tv2 = a2;
			if (tv2) {
				int L2;
				tv2->GetItemID(L2);
				@GetInvItemSprite(tv3, L2);
				@LoadImage(tv3);
				@GetInvItemMaxStackSize(tv1, L2);
				@SetTooltip(1, L1, tv2);
			} else {
				@SetTooltip(-1, "");
			}
		}
	}
}

