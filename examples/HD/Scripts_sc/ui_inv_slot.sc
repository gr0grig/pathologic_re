event OnMouseEnter 9;
event OnMouseLeave 10;
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
	var bool tv5;
	var bool tv6;
	var string tv7;
	var string tv8;

	void init(void)
	{
		tv2 = null;
		tv0 = 1;
		tv5 = false;
		tv6 = false;
		tv4 = false;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnMouseEnter(void)
	{
		if (!tv5) {
			int L0;
			tv6 = true;
			for (L0 = 0; L0 < 12; L0++) {
				@SendMessage(-5, f_111_a1_s(L0));
			}
			tv5 = true;
		}
		@SendMessageToParent(-8);
	}

	void OnMouseLeave(void)
	{
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
		if (tv4) {
			@StretchBlit("disabled", 1, 1, 50, 50);
		}
	}

	void OnLButtonDown(int a0, int a1)
	{
		@SetBackground("selected");
		@SendMessageToParent(0);
	}

	void OnRButtonDown(int a0, int a1)
	{
		@SendMessageToParent(1);
	}

	void OnLButtonUp(int a0, int a1)
	{
	}

	void f_4e_a0_v(void)
	{
		int L0;
		int L1;
		int L2;
		int L3;
		L0 = 0;
		L1 = 0;
		L2 = 0;
		L3 = 0;
		@ClientToScreen(L0, L1);
		@GetWindowSize(L2, L3);
		@SetMousePos(L0 + L2 / 2, L1 + L3 / 2);
	}

	void f_60_a1_v(string a0)
	{
		if (a0 != "") {
			int L0;
			int L1;
			int L2;
			int L3;
			int L4;
			int L5;
			L0 = 0;
			L1 = 0;
			L2 = 0;
			L3 = 0;
			@ClientToScreen(L0, L1);
			@GetWindowSize(L2, L3);
			L4 = 0;
			L5 = 0;
			@GetCursorPos(L4, L5);
			if (L4 > L0 && L5 > L1 && L4 < L0 + L2 && L5 < L1 + L3) {
				tv5 = false;
				if (a0 == "$parent") {
					@SendMessageToParent(-4);
				} else {
					@SendMessage(-4, a0);
				}
			} else {
				f_4e_a0_v();
			}
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a0 == -7) {
			if (tv5) {
				f_4e_a0_v();
			}
			return;
		}
		if (a0 == -6) {
			tv5 = true;
			return;
		}
		if (a0 == -1) {
			if (a2 != null) {
				a2->get(tv7, 0);
				a2->get(tv8, 1);
			}
			return;
		}
		if (a0 == -2) {
			if (tv5) {
				f_60_a1_v(tv7);
			}
			return;
		}
		if (a0 == -3) {
			if (tv5) {
				f_60_a1_v(tv8);
			}
			return;
		}
		if (a0 == -4) {
			tv5 = true;
			f_4e_a0_v();
			return;
		}
		if (a0 == -5) {
			if (tv6) {
				tv6 = false;
			} else {
				tv5 = false;
			}
			return;
		}
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
			if (a0 & 131072) {
				tv4 = true;
			} else {
				tv4 = false;
			}
			tv2 = a2;
			if (tv2) {
				int L0;
				tv2->GetItemID(L0);
				@GetInvItemSprite(tv3, L0);
				@LoadImage(tv3);
				@GetInvItemMaxStackSize(tv1, L0);
				if (tv4) {
					@SetTooltip(-1, "");
				} else {
					@SetTooltip(1, "", tv2);
				}
			} else {
				@SetTooltip(-1, "");
			}
		}
	}
}

string f_111_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "slot0" + (a0 + 1);
	}
	return "slot" + (a0 + 1);
}

