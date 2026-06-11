event OnChar 100;
event OnMessage 200;

maintask t0
{
	var int tv0;
	var object tv1;
	var object tv2;
	var object tv3;

	void init(void)
	{
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		f_13_a0_v();
		f_45_a0_v();
		@ProcessEvents();
	}

	void f_13_a0_v(void)
	{
		int L0;
		int L1;
		tv0 = -1;
		@CreateObjectVector(tv1);
		@CreateIntVector(tv2);
		@FindActor(tv3, "player");
		if (!tv3) {
			@DestroyWindow();
			return;
		}
		tv3->GetItemCount(L0, 4);
		L1 = 0;
		for (; L1 < L0; L1++) {
			object L2;
			int L3;
			bool L4;
			int L5;
			tv3->GetItem(L2, L1, 4);
			L3 = f_a7_a1_i(L2);
			@HasInvItemProperty(L4, L3, "Microscope");
			if (!L4) {
				continue;
			}
			@GetInvItemProperty(L5, L3, "Microscope");
			tv1->add(L2);
			tv2->add(L5);
		}
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	void f_45_a0_v(void)
	{
		int L0;
		int L1;
		tv1->size(L0);
		L1 = 0;
		for (; L1 < 12; L1++) {
			if (L1 < L0) {
				object L2;
				int L3;
				tv1->get(L2, L1);
				tv2->get(L3, L1);
				if (tv0 == L1) {
					@SendMessage(16384, f_97_a1_s(L1), L2);
					@SendMessage(L3, "video");
					@SetVariable("microscope_" + f_ac_a1_s(L2), 1);
				} else {
					@SendMessage(0, f_97_a1_s(L1), L2);
				}
				@SendMessage(65537, f_97_a1_s(L1));
			} else {
				@SendMessage(32768, f_97_a1_s(L1));
			}
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		int L0;
		for (L0 = 0; L0 < 12; L0++) {
			if (a1 == f_97_a1_s(L0)) {
				tv0 = L0;
				f_45_a0_v();
				break;
			}
		}
	}
}

string f_97_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "slot0" + (a0 + 1);
	}
	return "slot" + (a0 + 1);
}

int f_a7_a1_i(object a0)
{
	int L0;
	a0->GetItemID(L0);
	return L0;
}

string f_ac_a1_s(object a0)
{
	int L0;
	string L1;
	L0 = f_a7_a1_i(a0);
	@GetInvItemName(L1, L0);
	return L1;
}

