event OnChar 100;
event OnMessage 200;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var object tv5;
	var float tv6;

	void init(void)
	{
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@GetWindowData(tv5);
		if (!tv5) {
			@DestroyWindow();
			return;
		}
		tv5->GetProperty("agony", tv6);
		f_36_a0_v();
		f_96_a0_v();
		f_8d_a0_v();
		@ProcessEvents();
	}

	bool f_20_a1_b(int a0)
	{
		int L0;
		int L1;
		tv0->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			tv0->get(L2, L1);
			if (f_1be_a1_i(L2) == a0) {
				return true;
			}
		}
		return false;
	}

	void f_36_a0_v(void)
	{
		int L0;
		int L1;
		@CreateObjectVector(tv0);
		@CreateFloatVector(tv1);
		@CreateIntVector(tv3);
		@CreateIntVector(tv4);
		@FindActor(tv2, "player");
		if (!tv2) {
			@DestroyWindow();
			return;
		}
		tv2->GetItemCount(L0, 2);
		L1 = 0;
		for (; L1 < L0; L1++) {
			object L2;
			int L3;
			bool L4;
			float L5;
			int L6;
			tv2->GetItem(L2, L1, 2);
			L3 = f_1be_a1_i(L2);
			@HasInvItemProperty(L4, L3, "Agony");
			if (!L4) {
				continue;
			}
			if (f_20_a1_b(L3)) {
				continue;
			}
			@GetInvItemProperty(L5, L3, "Agony");
			tv2->GetItemCountOfType(L6, L3);
			tv0->add(L2);
			tv1->add(L5);
			tv4->add(L6);
			tv3->add(0);
		}
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	float f_78_a0_f(void)
	{
		float L0;
		int L1;
		int L2;
		L0 = tv6;
		tv0->size(L1);
		for (L2 = 0; L2 < L1; L2++) {
			object L3;
			float L4;
			int L5;
			tv0->get(L3, L2);
			tv1->get(L4, L2);
			tv3->get(L5, L2);
			L0 = L0 - L5 * L4;
		}
		return L0;
	}

	void f_8d_a0_v(void)
	{
		@SendMessage(100 * f_78_a0_f(), "level");
	}

	void f_96_a0_v(void)
	{
		int L0;
		int L1;
		tv0->size(L0);
		L1 = 0;
		for (; L1 < 6; L1++) {
			if (L1 < L0) {
				object L2;
				int L3;
				int L4;
				tv0->get(L2, L1);
				tv3->get(L3, L1);
				tv4->get(L4, L1);
				if (L3) {
					@SendMessage(16384, f_1ae_a1_s(L1), L2);
				} else {
					@SendMessage(0, f_1ae_a1_s(L1), L2);
				}
				@SendMessage(L3 | 65536, f_1ae_a1_s(L1));
			} else {
				@SendMessage(32768, f_1ae_a1_s(L1));
			}
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "ok") {
			f_150_a0_v();
		} else {
			if (a1 == "cancel") {
				f_166_a0_v();
			} else {
				int L0;
				L0 = f_1c3_a2_i(a0, a1);
				if (L0 != -1) {
					if (a0 == 0) {
						f_179_a1_v(L0);
					} else {
						if (a0 == 1) {
							f_194_a1_v(L0);
						}
					}
				}
			}
		}
	}

	void f_f3_a1_v(int a0)
	{
		int L0;
		int L1;
		float L2;
		int L3;
		tv2->GetItemCount(L0, 2);
		L1 = -1;
		for (L3 = 0; L3 < L0; L3++) {
			object L4;
			int L5;
			tv2->GetItem(L4, L3, 2);
			L5 = f_1be_a1_i(L4);
			if (L5 == a0) {
				bool L6;
				L4->HasProperty(L6, "disease");
				if (!L6) {
					if (L1 == -1 || L2 > 0) {
						L1 = L3;
						L2 = 0;
					}
				} else {
					float L7;
					L4->GetProperty(L7, "disease");
					if (L1 == -1 || L7 < L2) {
						L1 = L3;
						L2 = L7;
					}
				}
			}
		}
		if (L1 != -1) {
			tv2->RemoveItem(L1, 1, 2);
		}
	}

	void f_131_a0_v(void)
	{
		int L0;
		int L1;
		tv3->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			int L2;
			tv3->get(L2, L1);
			if (L2) {
				object L3;
				int L4;
				tv0->get(L3, L1);
				for (L4 = 0; L4 < L2; L4++) {
					f_f3_a1_v(f_1be_a1_i(L3));
				}
			}
		}
	}

	void f_150_a0_v(void)
	{
		float L0;
		L0 = f_78_a0_f();
		if (L0 < 0.0010000000474974513) {
			L0 = 0;
		}
		@Trace("Do " + L0);
		tv5->SetProperty("agony", L0);
		f_131_a0_v();
		@DestroyWindow();
	}

	void f_166_a0_v(void)
	{
		int L0;
		int L1;
		tv3->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			tv3->set(L1, 0);
		}
		f_96_a0_v();
		f_8d_a0_v();
	}

	void f_179_a1_v(int a0)
	{
		int L0;
		object L1;
		int L2;
		int L3;
		tv3->size(L0);
		if (a0 >= L0) {
			return;
		}
		tv0->get(L1, a0);
		tv4->get(L2, a0);
		tv3->get(L3, a0);
		if (L2 <= L3) {
			return;
		}
		L3 = L3 + 1;
		tv3->set(a0, L3);
		f_96_a0_v();
		f_8d_a0_v();
	}

	void f_194_a1_v(int a0)
	{
		int L0;
		object L1;
		int L2;
		tv3->size(L0);
		if (a0 >= L0) {
			return;
		}
		tv0->get(L1, a0);
		tv3->get(L2, a0);
		if (L2 == 0) {
			return;
		}
		L2 = L2 - 1;
		tv3->set(a0, L2);
		f_96_a0_v();
		f_8d_a0_v();
	}
}

string f_1ae_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "slot0" + (a0 + 1);
	}
	return "slot" + (a0 + 1);
}

int f_1be_a1_i(object a0)
{
	int L0;
	a0->GetItemID(L0);
	return L0;
}

int f_1c3_a2_i(int a0, string a1)
{
	int L0;
	for (L0 = 0; L0 < 6; L0++) {
		if (a1 == f_1ae_a1_s(L0)) {
			return L0;
		}
	}
	return -1;
}

