event OnChar 100;
event OnDraw 0;
event OnMessage 200;
event OnMouseWheel 15;
event OnLButtonDown 2;
event OnLButtonUp 3;

maintask t0
{
	var bool tv0;
	var int tv1;
	var int tv2;
	var int tv3;
	var int tv4;
	var int tv5;
	var int tv6;
	var int tv7;
	var object tv8;
	var object tv9;
	var object tv10;

	void init(void)
	{
		@CaptureKeyboard();
		while (true) {
			f_27_a1_v(true);
		}
	}

	void f_a_a3_v(object a0, int a1, int a2)
	{
		if (a0 == null) {
			@Blit("button_save", a1, a2);
		} else {
			@Blit("button_overwrite", a1, a2);
		}
	}

	void f_15_a1_v(object a0)
	{
		@SendMessageToParent(0, a0);
	}

	void f_1a_a1_v(object a0)
	{
		string L0;
		a0->GetFileName(L0);
		@DeleteGame(L0);
		@StopEventProcessing();
	}

	void OnChar(int a0)
	{
		@SendMessageToParent(1);
	}

	void f_27_a1_v(bool a0)
	{
		tv2 = -1;
		tv3 = -1;
		tv0 = a0;
		@CreateSaveEnumerator(tv8);
		if (!tv8) {
			return;
		}
		@CreateObjectVector(tv9);
		if (a0) {
			object L0;
			L0 = null;
			tv9->add(L0);
		}
		while (1) {
			object L1;
			tv8->Next(L1);
			if (!L1) {
				break;
			}
			if (a0) {
				bool L2;
				L1->IsQuickSave(L2);
				if (L2) {
					continue;
				}
			}
			tv9->add(L1);
		}
		@GetWindowSize(tv4, tv5);
		tv6 = 0;
		tv7 = 0;
		@ClientToScreen(tv6, tv7);
		tv1 = 0;
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@CreateWindow("sys_border.xml", false, tv10);
		f_1ea_a0_v();
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		f_6d_a1_v(f_6a_a1_i(tv1));
	}

	int f_6a_a1_i(int a0)
	{
		return a0;
	}

	void f_6d_a1_v(int a0)
	{
		int L0;
		int L1;
		tv9->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			int L3;
			int L4;
			tv9->get(L2, L1);
			L3 = 0;
			L4 = a0;
			@ClientToScreen(L3, L4);
			if (L2) {
				L2->BlitClipped(L3, L4, tv6, tv7, tv4, tv5);
				f_112_a3_v(0, a0, false);
				bool L5;
				L2->IsQuickSave(L5);
				if (L5) {
					@Print("default", 129, 7 + a0, f_20c_a1_s(17), 0.5568627715110779, 0.5568627715110779, 0.5568627715110779);
				} else {
					string L6;
					bool L7;
					int L8;
					L2->GetProperty(0, L7, L8);
					if (L7) {
						L6 = f_20c_a1_s(500 + L8);
					} else {
						L6 = "????";
					}
					@Print("default", 129, 7 + a0, L6, 0.5568627715110779, 0.5568627715110779, 0.5568627715110779);
				}
				string L9;
				L9 = f_211_a1_s(L2);
				@Print("big", 129, 28 + a0, L9, 1.0, 1.0, 1.0);
				L9 = f_229_a1_s(L2);
				@Print("default", 129, 47 + a0, L9, 0.5568627715110779, 0.5568627715110779, 0.5568627715110779);
				if (tv0) {
					if (tv3 == L1) {
						@Blit("button_x_pressed", 248, 68 + a0);
					} else {
						@Blit("button_x", 248, 68 + a0);
					}
				}
			} else {
				f_112_a3_v(0, a0, true);
				@Print("default", 129, 47 + a0, f_20c_a1_s(32), 0.5568627715110779, 0.5568627715110779, 0.5568627715110779);
			}
			if (tv2 == L1) {
				@Blit("button_pressed", 129, 67 + a0);
			} else {
				@Blit("button", 129, 67 + a0);
			}
			f_a_a3_v(L2, 129, 67 + a0);
			a0 = a0 + 90;
			@StretchBlit("separator", 0, a0 + 15, tv4, 1);
			a0 = a0 + 31;
		}
	}

	void f_112_a3_v(int a0, int a1, bool a2)
	{
		if (a2) {
			@StretchBlit("shot_black", a0, a1, 120, 90);
		}
		@StretchBlit("shot_border", a0, a1, 120, 1);
		@StretchBlit("shot_border", a0, a1 + 90 - 1, 120, 1);
		@StretchBlit("shot_border", a0, a1, 1, 90);
		@StretchBlit("shot_border", a0 + 120 - 1, a1, 1, 90);
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "scrollbar") {
			tv1 = -a0 * (f_1e2_a0_i() - tv5) / 100;
			f_1ea_a0_v();
		}
	}

	void OnMouseWheel(int a0, int a1, float a2)
	{
		int L0;
		L0 = a2 * f_1e0_a0_i() / 2;
		tv1 = tv1 + L0;
		f_1ea_a0_v();
	}

	void OnLButtonDown(int a0, int a1)
	{
		tv2 = f_192_a2_i(a0, a1);
		tv3 = f_1b9_a2_i(a0, a1);
	}

	void OnLButtonUp(int a0, int a1)
	{
		if (tv2 != -1) {
			tv2 = f_192_a2_i(a0, a1);
			if (tv2 != -1) {
				object L0;
				tv9->get(L0, tv2);
				f_15_a1_v(L0);
			}
		} else {
			if (tv0 && tv3 != -1) {
				tv3 = f_1b9_a2_i(a0, a1);
				if (tv3 != -1) {
					object L1;
					tv9->get(L1, tv3);
					if (L1) {
						f_1a_a1_v(L1);
					}
				}
			}
		}
	}

	int f_192_a2_i(int a0, int a1)
	{
		int L0;
		int L1;
		int L2;
		int L3;
		if (a0 < 129) {
			return -1;
		}
		if (a0 > 233) {
			return -1;
		}
		L0 = a1 - tv1;
		L1 = f_1e0_a0_i();
		L2 = L0 / L1;
		L0 = L0 - L2 * L1;
		tv9->size(L3);
		if (L3 <= L2) {
			return -1;
		}
		if (L0 >= 67 && L0 <= 91) {
			return L2;
		}
		return -1;
	}

	int f_1b9_a2_i(int a0, int a1)
	{
		int L0;
		int L1;
		int L2;
		int L3;
		if (a0 < 248) {
			return -1;
		}
		if (a0 > 268) {
			return -1;
		}
		L0 = a1 - tv1;
		L1 = f_1e0_a0_i();
		L2 = L0 / L1;
		L0 = L0 - L2 * L1;
		tv9->size(L3);
		if (L3 <= L2) {
			return -1;
		}
		if (L0 >= 68 && L0 <= 91) {
			return L2;
		}
		return -1;
	}

	int f_1e0_a0_i(void)
	{
		return 121;
	}

	int f_1e2_a0_i(void)
	{
		int L0;
		tv9->size(L0);
		return L0 * f_1e0_a0_i();
	}

	void f_1ea_a0_v(void)
	{
		int L0;
		L0 = f_1e2_a0_i() - tv5;
		if (L0 < 0) {
			L0 = 0;
		}
		if (-tv1 > L0) {
			tv1 = -L0;
		} else {
			if (tv1 > 0) {
				tv1 = 0;
			}
		}
		if (L0 == 0) {
			@SendMessage(16384, "scrollbar");
		} else {
			@SendMessage(-tv1 * 100 / L0, "scrollbar");
		}
	}
}

string f_20c_a1_s(int a0)
{
	string L0;
	@GetStringByID(L0, a0);
	return L0;
}

string f_211_a1_s(object a0)
{
	string L0;
	float L1;
	int L2;
	int L3;
	int L4;
	a0->GetGameTime(L1);
	L2 = L1 / 24;
	L3 = L1 - L2 * 24;
	L4 = (L1 - L2 * 24 - L3) * 60;
	@format(L0, f_20c_a1_s(18), L2 + 1, L3, L4);
	return L0;
}

string f_229_a1_s(object a0)
{
	string L0;
	int L1;
	int L2;
	int L3;
	int L4;
	int L5;
	a0->GetSaveTime(L1, L2, L3, L5, L4);
	@format(L0, f_20c_a1_s(19), L4, f_20c_a1_s(20 + L5), L3, L2, L1);
	return L0;
}

