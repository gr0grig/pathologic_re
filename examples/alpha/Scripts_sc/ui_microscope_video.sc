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

	void init(void)
	{
		tv1 = 0;
		tv2 = 0;
		tv5 = 0;
		@ClientToScreen(tv1, tv2);
		@GetWindowSize(tv3, tv4);
		f_25_a0_v();
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		tv0->StretchBlit(tv1, tv2, tv3, tv4);
		@Blit("ocular", 0, 0);
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
		f_25_a0_v();
	}

	void f_25_a0_v(void)
	{
		if (tv5 == 0) {
			@LoadImage("ui_no_blood.wmv", true);
			@FindVideo(tv0, "ui_no_blood.wmv");
			tv0->Play(true);
		} else {
			if (tv5 == 1) {
				@LoadImage("ui_good_blood.wmv", true);
				@FindVideo(tv0, "ui_good_blood.wmv");
				tv0->Play(true);
			} else {
				if (tv5 == 2) {
					@LoadImage("ui_bad_blood.wmv", true);
					@FindVideo(tv0, "ui_bad_blood.wmv");
					tv0->Play(true);
				}
			}
		}
	}
}

