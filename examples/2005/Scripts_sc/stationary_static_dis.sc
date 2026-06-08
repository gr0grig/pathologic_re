event OnLoad 5;
event OnUnload 6;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_53_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

task t1
{
	void init(void)
	{
		do {
			@Hold();
		} while (f_53_a0_b());
	}

	void OnUnload(void)
	{
		@StopGroup0();
		@sync();
	}
}

maintask t2
{
	var int tv0;

	bool f_19_a0_b(void)
	{
		return true;
	}

	void init(void)
	{
		@GetPFPolyID(tv0);
		if (tv0 != -1) {
			tv0 = tv0 / 4 % 256;
		}
		for (; ; ) {
			if (!f_53_a0_b()) {
				t0{};
			}
			if (f_19_a0_b()) {
				object L0;
				@GetScene(L0);
				L0->BlockPolygons(tv0, 255);
				@SetVisibility(true);
				f_52_a0_v();
				t1{};
				@SetVisibility(false);
				L0->UnblockPolygons(tv0, 255);
			} else {
				t1{};
			}
		}
	}
}

void f_52_a0_v(void)
{
}

bool f_53_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

