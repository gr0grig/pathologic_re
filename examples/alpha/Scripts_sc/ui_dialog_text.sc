event OnDraw 0;
event OnMouseMove 8;
event OnLButtonUp 3;
event OnMessage 200;

maintask t0
{
	var int tv0;
	var int tv1;
	var int tv2;
	var int tv3;
	var int tv4;
	var int tv5;
	var int tv6;

	void init(void)
	{
		tv3 = -1;
		tv0 = 0;
		@GetWindowSize(tv5, tv6);
		@EnableClipping(true);
		@SetOwnerDraw(true);
		f_10_a0_v();
		@ProcessEvents();
	}

	void f_10_a0_v(void)
	{
		tv1 = f_26_a0_i();
		tv1 = tv1 - tv6;
		if (tv1 < 0) {
			tv1 = 0;
			@SendMessage(16384, "p_scrollbar");
		} else {
			@SendMessage(-tv0 * 100 / tv1, "p_scrollbar");
		}
	}

	int f_26_a0_i(void)
	{
		int L0;
		int L1;
		string L2;
		int L3;
		int L4;
		int L5;
		@GetReplic(L2);
		@GetTextHeightInWidth(L0, "default", tv5, L2);
		L1 = L0;
		L1 = L1 + 15;
		@GetAnswerCount(L3);
		for (L5 = 0; L5 < L3; L5++) {
			string L6;
			if (L5 == 0) {
				L1 = L1 + 15;
			} else {
				L1 = L1 + 10;
			}
			@GetAnswer(L5, L6);
			@GetTextHeightInWidth(L0, "default", tv5 - 15, L6);
			L1 = L1 + L0;
		}
		return L1;
	}

	void OnDraw(void)
	{
		int L0;
		string L1;
		int L2;
		int L3;
		int L4;
		f_10_a0_v();
		L0 = tv0;
		@GetReplic(L1);
		@PrintInWidth(tv2, "default", 0, L0, tv5, L1, 0.8040000200271606, 0.8040000200271606, 0.8040000200271606);
		L0 = L0 + tv2;
		L0 = L0 + 15;
		@GetAnswerCount(L2);
		for (L4 = 0; L4 < L2; L4++) {
			string L5;
			@GetAnswer(L4, L5);
			if (L4 == tv3) {
				@PrintInWidth(L3, "default", 15, L0, tv5 - 15, L5, 1.0, 1.0, 1.0);
			} else {
				@PrintInWidth(L3, "default", 15, L0, tv5 - 15, L5, 0.6980000138282776, 0.6589999794960022, 0.6470000147819519);
			}
			L0 = L0 + L3;
			L0 = L0 + 10;
		}
	}

	void OnMouseMove(int a0, int a1)
	{
		int L0;
		int L1;
		int L2;
		int L3;
		L0 = tv0 + tv2 + 15;
		@GetAnswerCount(L1);
		tv3 = -1;
		for (L3 = 0; L3 < L1; L3++) {
			string L4;
			int L5;
			@GetAnswer(L3, L4, L5);
			@GetTextHeightInWidth(L2, "default", tv5, L4);
			if (a1 > L0 && a1 < L0 + L2) {
				tv3 = L3;
				tv4 = L5;
			}
			L0 = L0 + L2;
			L0 = L0 + 10;
		}
	}

	void OnLButtonUp(int a0, int a1)
	{
		if (tv3 == -1) {
			return;
		}
		@SendMessage(tv3, "history_text");
		tv0 = 0;
		f_10_a0_v();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "p_scrollbar") {
			tv0 = -tv1 * a0 / 100;
			f_10_a0_v();
		}
	}
}

