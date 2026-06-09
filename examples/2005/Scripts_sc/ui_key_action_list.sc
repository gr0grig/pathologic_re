event OnUpdate 1;
event OnLButtonDown 2;
event OnRButtonDown 6;
event OnLButtonUp 3;
event OnRButtonUp 7;
event OnMouseWheel 15;
event OnDraw 0;
event OnMessage 200;

maintask t0
{
	var int tv0;
	var int tv1;
	var int tv2;
	var int tv3;
	var int tv4;
	var object tv5;
	var object tv6;
	var object tv7;
	var object tv8;
	var object tv9;
	var int tv10;
	var bool tv11;
	var bool tv12;

	void init(void)
	{
		@SetNeedUpdate(true);
		tv11 = false;
		tv12 = false;
		tv10 = -1;
		f_125_a0_v();
		f_20b_a0_v();
	}

	int f_d_a0_i(void)
	{
		int L0;
		tv5->size(L0);
		return L0;
	}

	int f_12_a0_i(void)
	{
		return 17;
	}

	bool f_14_a0_b(void)
	{
		return tv11;
	}

	void f_16_a1_v(int a0)
	{
		tv10 = a0;
		tv11 = true;
		tv12 = false;
		@CaptureKeyboard();
		@CaptureMouse();
	}

	void OnUpdate(float a0)
	{
		object L0;
		int L1;
		if (!f_14_a0_b()) {
			return;
		}
		@GetKeyboardState(L0);
		if (!L0) {
			@Trace("GetKeyboardState fail");
			return;
		}
		for (L1 = 0; L1 < 256; L1++) {
			bool L2;
			@IsValidVirtualKey(L2, L1);
			if (L2) {
				int L3;
				L0->GetKeyState(L3, L1);
				if (L3 & 128) {
					if (tv12) {
						f_48_a1_v(L1);
					}
					return;
				}
			}
		}
		tv12 = true;
	}

	void f_48_a1_v(int a0)
	{
		if (a0 != -1 && a0 != 27) {
			bool L0;
			@IsValidVirtualKey(L0, a0);
			if (L0) {
				int L1;
				object L2;
				int L3;
				int L4;
				tv5->get(L1, tv10);
				@Unbind(a0);
				tv7->get(L2, tv10);
				L2->size(L3);
				for (L4 = 0; L4 < L3; L4++) {
					int L5;
					int L6;
					L2->get(L5, L4);
					tv8->get(L6, L5);
					@Unbind(L6);
				}
				@Bind(a0, L1);
				f_125_a0_v();
			} else {
				@Trace("wrong key code");
			}
		}
		tv10 = -1;
		tv11 = false;
		tv12 = false;
		@ReleaseKeyboard();
		@ReleaseMouse();
		@SendMessageToParent(1);
	}

	void f_80_a3_v(int a0, int a1, int a2)
	{
		if (tv10 == -1) {
			f_16_a1_v(a0);
		} else {
		}
	}

	void OnLButtonDown(int a0, int a1)
	{
		if (!f_14_a0_b()) {
			f_251_a2_v(a0, a1);
		}
	}

	void OnRButtonDown(int a0, int a1)
	{
		if (!f_14_a0_b()) {
			f_273_a2_v(a0, a1);
		}
	}

	void OnLButtonUp(int a0, int a1)
	{
		if (!f_14_a0_b()) {
			f_262_a2_v(a0, a1);
		}
	}

	void OnRButtonUp(int a0, int a1)
	{
		if (!f_14_a0_b()) {
			f_284_a2_v(a0, a1);
		}
	}

	void OnMouseWheel(int a0, int a1, float a2)
	{
		if (!f_14_a0_b()) {
			f_245_a3_v(a0, a1, a2);
		}
	}

	void f_c7_a3_v(int a0, int a1, int a2)
	{
	}

	void f_c9_a3_v(int a0, int a1, int a2)
	{
	}

	void f_cb_a3_v(int a0, int a1, int a2)
	{
	}

	string f_cd_a0_s(void)
	{
		return "scrollbar";
	}

	void f_cf_a3_v(int a0, int a1, int a2)
	{
		string L0;
		int L1;
		int L2;
		string L3;
		string L4;
		object L5;
		int L6;
		int L7;
		if (a0 == tv10) {
			@StretchBlit("whitepixel", a1, a2, tv1, f_12_a0_i());
			L0 = f_2d3_a1_s(108);
			@GetTextWidth(L1, "default", L0);
			@Print("default", a1 + (tv1 - L1) / 2, a2, L0, 0.250980406999588, 0.250980406999588, 0.250980406999588);
			return;
		}
		tv6->get(L2, a0);
		L3 = f_2d3_a1_s(L2);
		tv7->get(L5, a0);
		L5->size(L6);
		for (L7 = 0; L7 < L6; L7++) {
			int L8;
			string L9;
			if (L7) {
				L4 = L4 + " , ";
			}
			L5->get(L8, L7);
			tv9->get(L9, L8);
			L4 = L4 + L9;
		}
		@Print("default", a1, a2, L3, 0.5568627715110779, 0.5568627715110779, 0.5568627715110779);
		if (L6) {
			int L10;
			@GetTextWidth(L10, "default", L4);
			@Print("default", a1 + tv1 - L10, a2, L4, 0.5568627715110779, 0.5568627715110779, 0.5568627715110779);
		}
	}

	void f_11a_a2_v(int a0, int a1)
	{
		object L0;
		tv5->add(a0);
		tv6->add(a1);
		@CreateIntVector(L0);
		tv7->add(L0);
	}

	void f_125_a0_v(void)
	{
		object L0;
		@CreateIntVector(tv8);
		@CreateStringVector(tv9);
		@CreateKeyEnumerator(L0);
		while (true) {
			bool L1;
			int L2;
			string L3;
			L0->Next(L1, L2);
			if (!L1) {
				break;
			}
			tv8->add(L2);
			@GetKeyName(L3, L2);
			tv9->add(L3);
		}
		@CreateIntVector(tv5);
		@CreateIntVector(tv6);
		@CreateObjectVector(tv7);
		f_11a_a2_v(0, 33);
		f_11a_a2_v(1, 34);
		f_11a_a2_v(2, 35);
		f_11a_a2_v(3, 36);
		f_11a_a2_v(4, 37);
		f_11a_a2_v(5, 38);
		f_11a_a2_v(7, 40);
		f_11a_a2_v(8, 41);
		f_11a_a2_v(9, 42);
		f_11a_a2_v(10, 43);
		f_11a_a2_v(11, 44);
		f_11a_a2_v(20, 54);
		f_11a_a2_v(18, 55);
		f_11a_a2_v(12, 45);
		f_11a_a2_v(13, 46);
		f_11a_a2_v(14, 47);
		f_11a_a2_v(15, 48);
		f_11a_a2_v(16, 49);
		f_11a_a2_v(17, 50);
		f_11a_a2_v(100, 52);
		f_11a_a2_v(101, 53);
		f_1ae_a0_v();
	}

	void f_1ae_a0_v(void)
	{
		int L0;
		int L1;
		f_1e5_a0_v();
		tv8->size(L0);
		L1 = 0;
		for (; L1 < L0; L1++) {
			int L2;
			int L3;
			tv8->get(L2, L1);
			@GetBindType(L3, L2);
			if (L3 == 0) {
				continue;
			} else {
				if (L3 == 1) {
					int L4;
					@GetBindAction(L4, L2);
					f_1f4_a2_v(L4, L1);
					continue;
				}
				if (L3 == 2) {
					string L5;
					@GetBindCommand(L5, L2);
					if (L5 == "qsave") {
						f_1f4_a2_v(100, L1);
						continue;
					}
					if (L5 == "qload") {
						f_1f4_a2_v(101, L1);
					}
				}
			}
		}
	}

	void f_1e5_a0_v(void)
	{
		int L0;
		int L1;
		tv5->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			tv7->get(L2, L1);
			L2->clear();
		}
	}

	void f_1f4_a2_v(int a0, int a1)
	{
		int L0;
		int L1;
		tv5->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			int L2;
			tv5->get(L2, L1);
			if (a0 == L2) {
				object L3;
				tv7->get(L3, L1);
				L3->add(a1);
				return;
			}
		}
		@Trace("AddKeyToAction fail");
	}

	void f_20b_a0_v(void)
	{
		@GetWindowSize(tv1, tv2);
		tv3 = 0;
		tv4 = 0;
		@ClientToScreen(tv3, tv4);
		tv0 = 0;
		@EnableClipping(true);
		@SetOwnerDraw(true);
		f_2ad_a0_v();
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		int L0;
		int L1;
		int L2;
		L0 = f_d_a0_i();
		L1 = f_12_a0_i();
		for (L2 = 0; L2 < L0; L2++) {
			int L3;
			L3 = L2 * L1 + tv0;
			f_cf_a3_v(L2, 0, L3);
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == f_cd_a0_s()) {
			tv0 = -a0 * (f_2a5_a0_i() - tv2) / 100;
		}
	}

	void f_245_a3_v(int a0, int a1, float a2)
	{
		int L0;
		L0 = a2 * f_12_a0_i() / 2;
		tv0 = tv0 + L0;
		f_2ad_a0_v();
	}

	void f_251_a2_v(int a0, int a1)
	{
		int L0;
		L0 = f_295_a2_i(a0, a1);
		if (L0 != -1) {
			f_80_a3_v(L0, a0, a1);
		}
	}

	void f_262_a2_v(int a0, int a1)
	{
		int L0;
		L0 = f_295_a2_i(a0, a1);
		if (L0 != -1) {
			f_c7_a3_v(L0, a0, a1);
		}
	}

	void f_273_a2_v(int a0, int a1)
	{
		int L0;
		L0 = f_295_a2_i(a0, a1);
		if (L0 != -1) {
			f_c9_a3_v(L0, a0, a1);
		}
	}

	void f_284_a2_v(int a0, int a1)
	{
		int L0;
		L0 = f_295_a2_i(a0, a1);
		if (L0 != -1) {
			f_cb_a3_v(L0, a0, a1);
		}
	}

	int f_295_a2_i(int a0, int a1)
	{
		int L0;
		int L1;
		int L2;
		L0 = a1 - tv0;
		L1 = f_12_a0_i();
		L2 = L0 / L1;
		if (L2 >= f_d_a0_i()) {
			return -1;
		}
		return L2;
	}

	int f_2a5_a0_i(void)
	{
		return f_d_a0_i() * f_12_a0_i();
	}

	void f_2ad_a0_v(void)
	{
		int L0;
		L0 = f_2a5_a0_i() - tv2;
		if (L0 < 0) {
			L0 = 0;
		}
		if (-tv0 > L0) {
			tv0 = -L0;
		} else {
			if (tv0 > 0) {
				tv0 = 0;
			}
		}
		if (L0 == 0) {
			@SendMessage(16384, f_cd_a0_s());
		} else {
			@SendMessage(-tv0 * 100 / L0, f_cd_a0_s());
		}
	}
}

string f_2d3_a1_s(int a0)
{
	string L0;
	@GetStringByID(L0, a0);
	return L0;
}

