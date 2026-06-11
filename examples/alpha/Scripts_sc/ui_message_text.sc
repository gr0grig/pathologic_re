event OnDraw 0;
event OnLButtonUp 3;
event OnMouseMove 8;
event OnMouseLeave 10;
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
	var object tv7;
	var object tv8;
	var object tv9;

	void init(void)
	{
		@SetOwnerDraw(true);
		@EnableClipping(true);
		@GetWindowSize(tv2, tv3);
		tv0 = 0;
		tv4 = 0;
		tv5 = -1;
		@CreateObjectVector(tv7);
		@CreateObjectVector(tv8);
		@CreateObjectVector(tv9);
		int L0;
		for (L0 = 0; L0 < 12; L0++) {
			object L1;
			@CreateStringVector(L1);
			tv7->add(L1);
			@CreateStringVector(L1);
			tv8->add(L1);
			@CreateIntVector(L1);
			tv9->add(L1);
		}
		int L2;
		@GetMessageCount(L2);
		int L3;
		for (L3 = 0; L3 < L2; L3++) {
			float L4;
			string L5;
			string L6;
			int L7;
			object L8;
			object L9;
			object L10;
			@GetMessage(L3, L5, L6, L4);
			L7 = L4 / 24;
			tv7->get(L8, L7);
			tv8->get(L9, L7);
			tv9->get(L10, L7);
			L8->add(L5);
			L9->add(L6);
			L10->add(L3);
		}
		@ProcessEvents();
	}

	void f_44_a0_v(void)
	{
		tv1 = f_4e_a0_i();
		tv1 = tv1 - tv3;
		if (tv1 < 0) {
			tv1 = 0;
		}
	}

	int f_4e_a0_i(void)
	{
		int L0;
		object L1;
		object L2;
		object L3;
		int L4;
		int L5;
		L0 = 0;
		tv7->get(L1, tv4);
		tv8->get(L2, tv4);
		tv9->get(L3, tv4);
		L1->size(L4);
		L5 = 0;
		for (; L5 < L4; L5++) {
			string L6;
			string L7;
			int L8;
			int L9;
			L1->get(L6, L5);
			L2->get(L7, L5);
			L3->get(L8, L5);
			@GetTextHeightInWidth(L9, "default", tv2, L6);
			L0 = L0 + L9;
			if (L8 == tv5) {
				L0 = L0 + 5;
				@GetTextHeightInWidth(L9, "default", tv2 - 15, L7);
				L0 = L0 + L9;
				L0 = L0 + 5;
			} else {
				L0 = L0 + 5;
			}
		}
		return L0;
	}

	int f_7c_a1_i(int a0)
	{
		int L0;
		object L1;
		object L2;
		object L3;
		int L4;
		int L5;
		L0 = tv0;
		tv7->get(L1, tv4);
		tv8->get(L2, tv4);
		tv9->get(L3, tv4);
		L1->size(L4);
		for (L5 = 0; L5 < L4; L5++) {
			int L6;
			string L7;
			string L8;
			int L9;
			int L10;
			L6 = L0;
			L1->get(L7, L5);
			L2->get(L8, L5);
			L3->get(L9, L5);
			@GetTextHeightInWidth(L10, "default", tv2, L7);
			L0 = L0 + L10;
			if (L9 == tv5) {
				L0 = L0 + 5;
				@GetTextHeightInWidth(L10, "default", tv2 - 15, L8);
				L0 = L0 + L10;
				L0 = L0 + 5;
			} else {
				L0 = L0 + 5;
			}
			if (a0 > L6 && a0 < L0) {
				return L9;
			}
		}
		return -1;
	}

	void OnDraw(void)
	{
		int L0;
		object L1;
		object L2;
		object L3;
		int L4;
		int L5;
		f_44_a0_v();
		L0 = tv0;
		tv7->get(L1, tv4);
		tv8->get(L2, tv4);
		tv9->get(L3, tv4);
		L1->size(L4);
		L5 = 0;
		for (; L5 < L4; L5++) {
			string L6;
			string L7;
			int L8;
			int L9;
			L1->get(L6, L5);
			L2->get(L7, L5);
			L3->get(L8, L5);
			if (L8 == tv6) {
				@PrintInWidth(L9, "default", 0, L0, tv2, L6, 1.0, 1.0, 1.0);
			} else {
				@PrintInWidth(L9, "default", 0, L0, tv2, L6, 0.8040000200271606, 0.8040000200271606, 0.8040000200271606);
			}
			L0 = L0 + L9;
			if (L8 == tv5) {
				L0 = L0 + 5;
				if (L8 == tv6) {
					@PrintInWidth(L9, "default", 15, L0, tv2 - 15, L7, 0.8040000200271606, 0.8040000200271606, 0.8040000200271606);
				} else {
					@PrintInWidth(L9, "default", 15, L0, tv2 - 15, L7, 0.6980000138282776, 0.6589999794960022, 0.6470000147819519);
				}
				L0 = L0 + L9;
				L0 = L0 + 5;
			} else {
				L0 = L0 + 5;
			}
		}
	}

	void OnLButtonUp(int a0, int a1)
	{
		int L0;
		L0 = f_7c_a1_i(a1);
		if (L0 == -1) {
			return;
		}
		if (L0 == tv5) {
			tv5 = -1;
		} else {
			tv5 = L0;
		}
		f_44_a0_v();
	}

	void OnMouseMove(int a0, int a1)
	{
		tv6 = f_7c_a1_i(a1);
	}

	void OnMouseLeave(void)
	{
		tv6 = -1;
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "scrollbar") {
			tv0 = -tv1 * a0 / 100;
			return;
		}
		if (a0 & 32768) {
			tv5 = a0 & 32767;
		} else {
			tv4 = a0;
		}
	}
}

