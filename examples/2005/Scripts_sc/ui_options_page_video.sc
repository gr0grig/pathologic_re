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
		@Print("default", 15, 15, f_19_a1_s(102));
		@Print("default", 15, 98, f_19_a1_s(103));
	}
}

string f_19_a1_s(int a0)
{
	string L0;
	@GetStringByID(L0, a0);
	return L0;
}

