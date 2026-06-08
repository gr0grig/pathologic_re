event OnDestroyWindow 14;
event OnChar 100;
event OnMessage 200;

maintask t0
{
	var object tv0;

	void init(void)
	{
		@SetCursor("default");
		@SetOwnerDraw(false);
		@SetNeedUpdate(false);
		@CaptureKeyboard();
		@ShowCursor();
		@GetChooseItems(tv0);
		f_15_a0_v();
		@ProcessEvents();
	}

	void f_15_a0_v(void)
	{
		int L0;
		tv0->size(L0);
		int L1;
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			if (L1 >= 4) {
				break;
			}
			tv0->get(L2, L1);
			@SendMessage(0, "cslot0" + (L1 + 1), L2);
		}
		int L3;
		for (L3 = L0; L3 < 4; L3 = L3 + 1) {
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
		int L0;
		for (L0 = 0; L0 < 4; L0 = L0 + 1) {
			if (a1 == "cslot0" + (L0 + 1)) {
				int L1;
				tv0->size(L1);
				if (L0 < L1) {
					object L2;
					@GetReturnValue(L2);
					L2->clear();
					L2->add(L0);
					@DestroyWindow();
				}
			}
		}
	}
}

