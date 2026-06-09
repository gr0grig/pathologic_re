event OnDraw 0;
event OnMessage 200;

maintask t0
{
	var object tv0;
	var int tv1;
	var int tv2;
	var int tv3;
	var int tv4;
	var int tv5;
	var string tv6;

	void init(void)
	{
		tv1 = 0;
		tv2 = 0;
		tv5 = 0;
		@ClientToScreen(tv1, tv2);
		@GetWindowSize(tv3, tv4);
		f_2f_a0_v();
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		bool L0;
		tv0->IsLost(L0);
		if (L0) {
			bool L1;
			tv0->Restore(L1);
			if (!L1) {
				return;
			}
		}
		tv0->StretchBlit(tv1, tv2, tv3, tv4);
		@StretchBlit("ocular", 0, 0, tv3, tv4);
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a0 == tv5) {
			return;
		}
		if (tv0) {
			tv0->Stop();
		}
		tv5 = a0;
		f_2f_a0_v();
	}

	void f_2f_a0_v(void)
	{
		@ReleaseVideo(tv6);
		if (tv5 == 0) {
			tv6 = "ui_no_blood.wmv";
		} else {
			if (tv5 == 1) {
				tv6 = "ui_blood.wmv";
			} else {
				if (tv5 == 2) {
					tv6 = "ui_diseased_blood.wmv";
				} else {
					if (tv5 == 3) {
						tv6 = "ui_diseased_alive_blood.wmv";
					} else {
						if (tv5 == 4) {
							tv6 = "ui_bull_blood.wmv";
						} else {
							if (tv5 == 5) {
								tv6 = "ui_avroks_blood.wmv";
							} else {
								if (tv5 == 6) {
									tv6 = "ui_simon_blood.wmv";
								} else {
									@Trace("WRONG BLOOD NUMBER");
									return;
								}
							}
						}
					}
				}
			}
		}
		@LoadVideo(tv6);
		@FindVideo(tv0, tv6);
		tv0->Play(true);
	}
}

