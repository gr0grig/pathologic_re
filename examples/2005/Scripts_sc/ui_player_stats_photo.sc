event OnDraw 0;

maintask t0
{
	var string tv0;

	void init(void)
	{
		@EnableClipping(true);
		if (f_21_a0_i() == 0) {
			tv0 = "ui/stat_Danko.png";
		} else {
			if (f_21_a0_i() == 1) {
				tv0 = "ui/stat_Burah.png";
			} else {
				tv0 = "ui/stat_Klara.png";
			}
		}
		@LoadImage(tv0);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		@Blit(tv0, 0, 0);
	}
}

int f_21_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

