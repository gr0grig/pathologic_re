event OnMouseWheel 15;
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
	var bool tv3;
	var string tv4;

	void init(void)
	{
		tv2 = null;
		tv0 = 0;
		tv1 = 1;
		tv3 = false;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnMouseWheel(int a0, int a1, float a2)
	{
		@SendToParent();
	}

	void OnDraw(void)
	{
		if (!tv2) {
			return;
		}
		@Blit(tv4, 1, 1);
		if (tv1 > 1 && !tv3) {
			string L0;
			L0 = tv0 + "/" + tv1;
			@Print("default", 2, 35, L0);
		}
		if (tv3) {
			@StretchBlit("disabled", 1, 1, 50, 50);
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
			a2->get(tv0, 0);
			a2->get(tv1, 1);
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
			tv3 = true;
		} else {
			tv3 = false;
		}
		tv2 = a2;
		if (tv2) {
			int L0;
			tv2->GetItemID(L0);
			@GetItemImage(L0, tv4);
			@LoadImage(tv4);
			if (tv3) {
				@SetTooltip(-1, "");
			} else {
				@SetTooltip(4, "", tv2);
			}
		} else {
			@SetTooltip(-1, "");
		}
	}
}

