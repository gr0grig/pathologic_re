event OnDraw 0;

maintask t0
{
	void init(void)
	{
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		@Print("default", 15, 15, f_2b_a1_s(104));
		@Print("default", 15, 98, f_2b_a1_s(105));
		@Print("default", 16, 182, f_2b_a1_s(106));
		@Print("default", 16, 265, f_2b_a1_s(107));
	}
}

string f_2b_a1_s(int a0)
{
	string L0;
	@GetStringByID(L0, a0);
	return L0;
}

