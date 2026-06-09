event OnMouseWheel 15;
event OnDraw 0;
event OnLButtonDown 2;
event OnRButtonDown 6;
event OnLButtonUp 3;
event OnMouseEnter 9;
event OnMessage 200;

maintask t0
{
	var int tv0;
	var int tv1;
	var object tv2;
	var bool tv3;
	var string tv4;
	var bool tv5;
	var bool tv6;
	var string tv7;
	var string tv8;
	var string tv9;
	var string tv10;
	var int tv11;

	void init(void)
	{
		tv2 = null;
		tv0 = 0;
		tv1 = 1;
		tv3 = false;
		tv5 = false;
		tv11 = 0;
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
			int L1;
			int L2;
			L0 = tv0 + "/" + tv1;
			@GetTextWidth(L1, "default", L0);
			L2 = 48 - L1;
			if (L2 < 2) {
				L2 = 2;
			}
			@Print("default", L2, 35, L0);
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

	void f_4a_a0_v(void)
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

	void OnMouseEnter(void)
	{
		if (!tv5) {
			int L0;
			@SendMessageToParent(-20);
			tv6 = true;
			for (L0 = 0; L0 < tv11; L0++) {
				@SendMessage(-5, f_151_a1_s(L0));
				@SendMessage(-5, f_161_a1_s(L0));
			}
			tv5 = true;
		}
	}

	void f_79_a1_v(string a0)
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
				f_4a_a0_v();
			}
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a0 == -1) {
			if (a2 != null) {
				a2->get(tv7, 0);
				a2->get(tv8, 1);
				a2->get(tv9, 2);
				a2->get(tv10, 3);
			}
			return;
		}
		if (a0 == -19) {
			a2->get(tv11, 0);
			return;
		}
		if (a0 == -7) {
			if (tv5) {
				f_4a_a0_v();
			}
			return;
		}
		if (a0 == -6) {
			tv5 = true;
			return;
		}
		if (a0 == -13) {
			if (tv5) {
				f_79_a1_v(tv7);
			}
			return;
		}
		if (a0 == -14) {
			if (tv5) {
				f_79_a1_v(tv8);
			}
			return;
		}
		if (a0 == -15) {
			if (tv5) {
				f_79_a1_v(tv9);
			}
			return;
		}
		if (a0 == -16) {
			if (tv5) {
				f_79_a1_v(tv10);
			}
			return;
		}
		if (a0 == -4) {
			tv5 = true;
			f_4a_a0_v();
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
		if (a0 < 0) {
			return;
		}
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
				@SetTooltip(3, "", tv2);
			}
		} else {
			@SetTooltip(-1, "");
		}
	}
}

string f_151_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "l_slot0" + (a0 + 1);
	}
	return "l_slot" + (a0 + 1);
}

string f_161_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "r_slot0" + (a0 + 1);
	}
	return "r_slot" + (a0 + 1);
}

