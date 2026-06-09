event OnDraw 0;
event OnMouseEnter 9;
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
	var string tv6;
	var string tv7;

	void init(void)
	{
		tv2 = null;
		tv0 = 1;
		tv4 = false;
		tv5 = false;
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

	void OnMouseEnter(void)
	{
		if (!tv4) {
			int L0;
			tv5 = true;
			for (L0 = 0; L0 < 4; L0++) {
				@SendMessage(-5, f_104_a1_s(L0));
			}
			tv4 = true;
		}
		@SendMessageToParent(-9);
	}

	void f_34_a0_v(void)
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

	void f_46_a1_v(string a0)
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
				tv4 = false;
				if (a0 == "$parent") {
					@SendMessageToParent(-4);
				} else {
					@SendMessage(-4, a0);
				}
			} else {
				f_34_a0_v();
			}
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
		if (a0 == -7) {
			if (tv4) {
				f_34_a0_v();
			}
			return;
		}
		if (a0 == -6) {
			tv4 = true;
			return;
		}
		if (a0 == -1) {
			if (a2 != null) {
				a2->get(tv6, 0);
				a2->get(tv7, 1);
			}
			return;
		}
		if (a0 == -2) {
			if (tv4) {
				f_46_a1_v(tv6);
			}
			return;
		}
		if (a0 == -3) {
			if (tv4) {
				f_46_a1_v(tv7);
			}
			return;
		}
		if (a0 == -4) {
			tv4 = true;
			f_34_a0_v();
			return;
		}
		if (a0 == -5) {
			if (tv5) {
				tv5 = false;
			} else {
				tv4 = false;
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

string f_104_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "slot0" + (a0 + 1);
	}
	return "slot" + (a0 + 1);
}

