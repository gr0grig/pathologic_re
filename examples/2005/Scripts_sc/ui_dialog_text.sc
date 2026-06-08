event OnDraw 0;
event OnMouseMove 8;
event OnLButtonUp 3;
event OnMouseWheel 15;
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
		tv1 = f_32_a0_i();
		tv1 = tv1 - tv6;
		if (tv1 < 0) {
			tv1 = 0;
		}
		if (-tv0 > tv1) {
			tv0 = -tv1;
		} else {
			if (tv0 > 0) {
				tv0 = 0;
			}
		}
		if (tv1 == 0) {
			@SendMessage(16384, "p_scrollbar");
		} else {
			@SendMessage(-tv0 * 100 / tv1, "p_scrollbar");
		}
	}

	int f_32_a0_i(void)
	{
		int L0;
		int L1;
		string L2;
		int L3;
		int L4;
		int L5;
		L2 = f_10b_a0_s();
		@GetTextHeightInWidth(L0, "default", tv5 - 5, L2);
		L1 = L0;
		L1 = L1 + 10;
		@GetAnswerCount(L3);
		for (L5 = 0; L5 < L3; L5 = L5 + 1) {
			string L6;
			if (L5 == 0) {
				L1 = L1 + 10;
			} else {
				L1 = L1 + 5;
			}
			L6 = f_114_a1_s(L5);
			@GetTextHeightInWidth(L0, "default", tv5 - 15 - 5, L6);
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
		L1 = f_10b_a0_s();
		@PrintInWidth(tv2, "default", 0, L0, tv5 - 5, L1, 0.8040000200271606, 0.8040000200271606, 0.8040000200271606);
		L0 = L0 + tv2;
		L0 = L0 + 10;
		@GetAnswerCount(L2);
		for (L4 = 0; L4 < L2; L4 = L4 + 1) {
			string L5;
			L5 = f_114_a1_s(L4);
			if (L4 == tv3) {
				@PrintInWidth(L3, "default", 15, L0, tv5 - 15 - 5, L5, 1.0, 1.0, 1.0);
			} else {
				@PrintInWidth(L3, "default", 15, L0, tv5 - 15 - 5, L5, 0.6980000138282776, 0.6589999794960022, 0.6470000147819519);
			}
			L0 = L0 + L3;
			L0 = L0 + 5;
		}
	}

	void OnMouseMove(int a0, int a1)
	{
		int L0;
		int L1;
		int L2;
		int L3;
		L0 = tv0 + tv2 + 10;
		@GetAnswerCount(L1);
		tv3 = -1;
		for (L3 = 0; L3 < L1; L3 = L3 + 1) {
			string L4;
			int L5;
			L4 = f_114_a1_s(L3);
			L5 = f_11d_a1_i(L3);
			@GetTextHeightInWidth(L2, "default", tv5 - 15 - 5, L4);
			if (a1 > L0 && a1 < L0 + L2) {
				tv3 = L3;
				tv4 = L5;
			}
			L0 = L0 + L2;
			L0 = L0 + 5;
		}
	}

	void OnLButtonUp(int a0, int a1)
	{
		string L0;
		int L1;
		int L2;
		string L3;
		object L4;
		if (tv3 == -1) {
			return;
		}
		L0 = f_10b_a0_s();
		L3 = f_114_a1_s(tv3);
		L1 = f_11d_a1_i(tv3);
		L2 = f_122_a1_i(tv3);
		@SelectAnswer(L1, L2);
		@CreateStringVector(L4);
		L4->add(L0);
		L4->add(L3);
		tv3 = -1;
		@SendMessage(0, "history_text", L4);
		tv0 = 0;
		f_10_a0_v();
	}

	void OnMouseWheel(int a0, int a1, float a2)
	{
		int L0;
		int L1;
		@GetFontHeight(L0, "default");
		L1 = a2 * L0;
		tv0 = tv0 + L1;
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

string f_10b_a0_s(void)
{
	string L0;
	@GetReplic(L0);
	if (L0 == "") {
		L0 = "Error: missing replic";
	}
	return L0;
}

string f_114_a1_s(int a0)
{
	string L0;
	@GetAnswer(a0, L0);
	if (L0 == "") {
		L0 = "ERROR: missing answer";
	}
	return L0;
}

int f_11d_a1_i(int a0)
{
	int L0;
	string L1;
	@GetAnswer(a0, L1, L0);
	return L0;
}

int f_122_a1_i(int a0)
{
	int L0;
	int L1;
	string L2;
	@GetAnswer(a0, L2, L0, L1);
	return L1;
}

