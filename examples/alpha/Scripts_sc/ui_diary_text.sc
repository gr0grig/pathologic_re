event OnDraw 0;
event OnMessage 200;

maintask t0
{
	var bool tv0;
	var int tv1;
	var int tv2;
	var int tv3;
	var int tv4;
	var int tv5;
	var int tv6;

	void init(void)
	{
		tv5 = 0;
		tv1 = 0;
		@GetWindowSize(tv3, tv4);
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		object L0;
		int L1;
		int L2;
		@GetDiaryRoot(L0);
		tv6 = 0;
		L0->ChildCount(L1);
		for (L2 = 0; L2 < L1; L2++) {
			object L3;
			L0->Child(L3, L2);
			f_2a_a2_v(L3, 0);
			tv6 = tv6 + 15;
		}
		tv2 = tv6 - tv4;
		if (tv2 < 0) {
			tv2 = 0;
		}
	}

	void f_2a_a2_v(object a0, int a1)
	{
		int L0;
		int L1;
		string L2;
		int L3;
		int L4;
		int L5;
		a0->GetCategory(L0);
		if (L0 != tv5) {
			return;
		}
		a0->GetTextID(L1);
		@GetStringByID(L2, L1);
		@PrintInWidth(L3, "default", a1, tv1 + tv6, tv3 + a1, L2, 1.0, 1.0, 1.0);
		tv6 = tv6 + L3;
		a0->ChildCount(L4);
		L5 = 0;
		for (; L5 < L4; L5++) {
			object L6;
			int L7;
			a0->Child(L6, L5);
			L6->GetCategory(L7);
			if (L7 != tv5) {
				continue;
			}
			tv6 = tv6 + 10;
			f_2a_a2_v(L6, a1 + 20);
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "scrollbar") {
			tv1 = -tv2 * a0 / 100;
			return;
		}
		tv5 = a0;
	}
}

