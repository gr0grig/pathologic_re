event OnDraw 0;
event OnMessage 200;
event OnMouseWheel 15;

var int g0;

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
	var string tv10;
	var string tv11;

	void init(void)
	{
		object L0;
		tv4 = -1;
		tv1 = 0;
		@GetWindowSize(tv6, tv7);
		g0 = tv6 / 4.800000190734863;
		@CreateStringVector(tv8);
		@CreateStringVector(tv9);
		@GetConversation(L0);
		if (L0 == null) {
			@UITrace("null conversation");
			return;
		}
		L0->GetNPCName(tv10);
		@_strupr(tv10);
		L0->GetPlayerName(tv11);
		@_strupr(tv11);
		f_2b_a0_v();
		@EnableClipping(true);
		@SetOwnerDraw(true);
		tv0 = false;
		@ProcessEvents();
	}

	void f_2b_a0_v(void)
	{
		tv2 = f_61_a0_i();
		tv2 = tv2 - tv7;
		if (tv2 < 0) {
			tv2 = 0;
			@SendMessage(16484, "h_scrollbar");
		} else {
			@SendMessage(100, "h_scrollbar");
		}
		tv1 = -tv2;
	}

	void f_3f_a0_v(void)
	{
		tv2 = f_61_a0_i();
		tv2 = tv2 - tv7;
		if (tv2 < 0) {
			tv2 = 0;
		}
		if (-tv1 > tv2) {
			tv1 = -tv2;
		} else {
			if (tv1 > 0) {
				tv1 = 0;
			}
		}
		if (tv2 == 0) {
			@SendMessage(16384, "h_scrollbar");
		} else {
			@SendMessage(-tv1 * 100 / tv2, "h_scrollbar");
		}
	}

	int f_61_a0_i(void)
	{
		int L0;
		int L1;
		int L2;
		int L3;
		L2 = 0;
		tv8->size(L0);
		for (L3 = 0; L3 < L0; L3++) {
			string L4;
			string L5;
			tv8->get(L4, L3);
			tv9->get(L5, L3);
			@GetTextHeightInWidth(L1, "default", tv6 - g0, L4);
			L2 = L2 + L1;
			L2 = L2 + 10;
			@GetTextHeightInWidth(L1, "default", tv6 - g0, L5);
			L2 = L2 + L1;
			if (L3 != L0 - 1) {
				L2 = L2 + 10;
			}
		}
		return L2;
	}

	void OnDraw(void)
	{
		int L0;
		int L1;
		int L2;
		L0 = tv1;
		tv8->size(L1);
		for (L2 = 0; L2 < L1; L2++) {
			string L3;
			string L4;
			int L5;
			tv8->get(L3, L2);
			tv9->get(L4, L2);
			@PrintInWidth(L5, "default", g0, L0, tv6 - g0, L3, 0.8040000200271606, 0.8040000200271606, 0.8040000200271606);
			@Print("default", 0, L0, tv10, 0.8040000200271606, 0.8040000200271606, 0.8040000200271606);
			L0 = L0 + L5;
			L0 = L0 + 10;
			@PrintInWidth(L5, "default", g0, L0, tv6 - g0, L4, 0.6980000138282776, 0.6589999794960022, 0.6470000147819519);
			@Print("default", 0, L0, tv11, 0.6980000138282776, 0.6589999794960022, 0.6470000147819519);
			L0 = L0 + L5;
			L0 = L0 + 10;
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "h_scrollbar") {
			tv1 = -tv2 * a0 / 100;
		} else {
			if (a1 == "dialog_text") {
				string L0;
				string L1;
				a2->get(L0, 0);
				a2->get(L1, 1);
				tv8->add(L0);
				tv9->add(L1);
				f_2b_a0_v();
			}
		}
	}

	void OnMouseWheel(int a0, int a1, float a2)
	{
		int L0;
		int L1;
		@GetFontHeight(L0, "default");
		L1 = a2 * L0;
		tv1 = tv1 + L1;
		f_3f_a0_v();
	}
}

