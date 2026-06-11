event OnUpdate 1;
event OnDraw 0;

maintask t0
{
	var bool tv0;
	var bool tv1;
	var bool tv2;
	var bool tv3;
	var bool tv4;
	var bool tv5;
	var float tv6;
	var float tv7;
	var float tv8;

	void init(void)
	{
		tv6 = 0;
		tv0 = false;
		tv1 = false;
		tv2 = false;
		tv3 = false;
		tv5 = false;
		tv8 = -1;
		tv4 = false;
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}

	void OnUpdate(float a0)
	{
		tv6 = tv6 + a0;
	}

	void OnDraw(void)
	{
		@Blit("cross", 399, 299);
		if (tv3) {
			float L0;
			L0 = (tv6 - tv7) / 2.0;
			if (L0 > 2) {
				tv3 = false;
				tv8 = f_116_a0_f();
				return;
			}
			L0 = L0 * 6.2829999923706055;
			@Blit("rep_down", 20, 500, 0.5 - 0.5 * cos(L0));
			return;
		}
		if (tv2) {
			float L1;
			L1 = (tv6 - tv7) / 2.0;
			if (L1 > 2) {
				tv2 = false;
				tv8 = f_116_a0_f();
				return;
			}
			L1 = L1 * 6.2829999923706055;
			@Blit("rep_up", 20, 500, 0.5 - 0.5 * cos(L1));
			return;
		}
		if (tv5) {
			float L2;
			if (!f_10f_a0_b()) {
				tv5 = false;
				return;
			}
			L2 = (tv6 - tv7) / 1.0;
			if (L2 > 1) {
				tv0 = false;
				@SetVariable("player_exchange", 0);
				return;
			}
			L2 = L2 * 6.2829999923706055;
			@Blit("exchange", 20, 500, 0.5 - 0.5 * cos(L2));
			return;
		}
		if (tv0) {
			float L3;
			if (!f_101_a0_b()) {
				tv0 = false;
				return;
			}
			L3 = (tv6 - tv7) / 2.0;
			if (L3 > 2) {
				tv0 = false;
				@SetVariable("player_mail", 0);
				return;
			}
			L3 = L3 * 6.2829999923706055;
			@Blit("mail", 20, 500, 0.5 - 0.5 * cos(L3));
			return;
		}
		if (tv1) {
			float L4;
			if (!f_108_a0_b()) {
				tv1 = false;
				return;
			}
			L4 = (tv6 - tv7) / 2.0;
			if (L4 > 2) {
				tv1 = false;
				@SetVariable("player_diary", 0);
				return;
			}
			L4 = L4 * 6.2829999923706055;
			@Blit("diary", 20, 470, 0.5 - 0.5 * cos(L4));
			return;
		}
		float L5;
		L5 = f_116_a0_f();
		if (!tv4) {
			if (L5 >= 0) {
				tv8 = L5;
				tv4 = true;
			}
			return;
		}
		if (tv8 != L5) {
			if (L5 < 0) {
				return;
			}
			tv7 = tv6;
			if (tv8 < f_116_a0_f()) {
				@PlaySound("rep_up");
				tv2 = true;
			} else {
				float L6;
				L6 = tv8 - f_116_a0_f();
				if (L6 >= 0.30000001192092896) {
					@PlaySound("rep_down_big");
				} else {
					@PlaySound("rep_down_small");
				}
				tv3 = true;
			}
			return;
		}
		if (f_10f_a0_b()) {
			@PlaySound("exchange");
			tv7 = tv6;
			tv5 = true;
			return;
		}
		if (f_101_a0_b()) {
			@PlaySound("mail");
			tv7 = tv6;
			tv0 = true;
			return;
		}
		if (f_108_a0_b()) {
			@PlaySound("diary");
			tv7 = tv6;
			tv1 = true;
		}
	}
}

bool f_101_a0_b(void)
{
	int L0;
	@GetVariable("player_mail", L0);
	return L0 != 0;
}

bool f_108_a0_b(void)
{
	int L0;
	@GetVariable("player_diary", L0);
	return L0 != 0;
}

bool f_10f_a0_b(void)
{
	int L0;
	@GetVariable("player_exchange", L0);
	return L0 != 0;
}

float f_116_a0_f(void)
{
	object L0;
	float L1;
	@FindActor(L0, "player");
	if (!L0) {
		return -1;
	}
	L0->GetProperty("reputation", L1);
	return L1;
}

