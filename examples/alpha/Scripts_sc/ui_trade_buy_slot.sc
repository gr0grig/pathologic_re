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
	var bool tv4;

	void init(void)
	{
		tv2 = null;
		tv0 = 0;
		tv4 = false;
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
		if (tv0 >= 2) {
			if (tv1 > 1) {
				@Print("default", 2, 35, tv0);
			}
		}
		if (tv4) {
			@StretchBlit("disabled", 0, 0, 50, 50);
		}
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
			return;
		}
		if (a0 & 131072) {
			tv4 = true;
		} else {
			tv4 = false;
		}
		tv2 = a2;
		if (tv2) {
			int L0;
			tv2->GetItemID(L0);
			@GetItemImage(L0, tv3);
			@LoadImage(tv3);
			@GetItemMaxStackSize(L0, tv1);
			if (tv4) {
				@SetTooltip(-1, "");
			} else {
				@SetTooltip(4, "", tv2);
			}
		} else {
			@SetTooltip(-1, "");
		}
	}
}

