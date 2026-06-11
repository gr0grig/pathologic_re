event OnDraw 0;

maintask t0
{
	var string tv0;
	var string tv1;
	var string tv2;

	void init(void)
	{
		@EnableClipping(true);
		if (f_3e_a0_i() == 0) {
			tv0 = "ui/stat_Danko0.png";
			tv1 = "ui/stat_Danko1.png";
			tv2 = "ui/stat_Danko2.png";
		} else {
			if (f_3e_a0_i() == 1) {
				tv0 = "ui/stat_Burah0.png";
				tv1 = "ui/stat_Burah1.png";
				tv2 = "ui/stat_Burah2.png";
			} else {
				tv0 = "ui/stat_Klara0.png";
				tv1 = "ui/stat_Klara1.png";
				tv2 = "ui/stat_Klara2.png";
			}
		}
		@LoadImage(tv0);
		@LoadImage(tv1);
		@LoadImage(tv2);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		float L0;
		@GetPlayerHealth(L0);
		if (L0 >= 0.699999988079071) {
			@Blit(tv0, 0, 0);
		} else {
			if (L0 >= 0.20000000298023224) {
				@Blit(tv1, 0, 0);
			} else {
				@Blit(tv2, 0, 0);
			}
		}
	}
}

int f_3e_a0_i(void)
{
	return 0;
}

