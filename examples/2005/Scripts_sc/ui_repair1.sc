event OnDestroyWindow 14;
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
		@GetPlayerMoneyCount(tv0);
		@SetCursor("default");
		@SetOwnerDraw(false);
		@SetNeedUpdate(false);
		@CaptureKeyboard();
		@ShowCursor();
		@GetChooseItems(tv1);
		@GetAdditionalData(tv2);
		@GetReturnValue(tv3);
		f_1b_a0_v();
		@ProcessEvents();
	}

	void f_1b_a0_v(void)
	{
		@SendMessage(tv0, "money_slot");
		int L0;
		tv1->size(L0);
		int L1;
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			if (L1 >= 4) {
				break;
			}
			tv1->get(L2, L1);
			@SendMessage(0, "cslot0" + (L1 + 1), L2);
		}
		int L3;
		for (L3 = L0; L3 < 4; L3++) {
			@SendMessage(32768, "cslot0" + (L3 + 1));
		}
	}

	void OnDestroyWindow(void)
	{
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "ok") {
			@DestroyWindow();
		} else {
			if (a1 == "cancel") {
				tv3->clear();
				@DestroyWindow();
			} else {
				int L0;
				for (L0 = 0; L0 < 4; L0++) {
					if (a1 == f_66_a1_s(L0)) {
					}
				}
			}
		}
	}
}

string f_66_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "slot0" + (a0 + 1);
	}
	return "slot" + (a0 + 1);
}

