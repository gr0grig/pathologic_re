event OnMessage 200;

maintask t0
{
	void init(void)
	{
		@SetOwnerDraw(false);
		f_2b_a0_v();
		@ProcessEvents();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "scalpel") {
			if (f_20_a0_b()) {
				@UITrace("has slot");
			}
		} else {
			if (a1 == "squirt") {
				if (f_20_a0_b()) {
					@UITrace("has slot");
				}
			}
		}
	}
}

bool f_20_a0_b(void)
{
	int L0;
	int L1;
	@GetContainerItemCount(L0);
	@GetContainerSize(L1);
	if (L0 >= L1) {
		return false;
	}
	return true;
}

void f_2b_a0_v(void)
{
}

