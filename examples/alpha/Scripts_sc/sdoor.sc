event OnUse 0;
event OnClearPath 38;

maintask t0
{
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		int L1;
		if (!a0 || !f_43_a1_b(a0)) {
			return;
		}
		@ClassifyActor(L0, a0);
		L0 = !L0;
		@GetOpenSide(L1);
		if (!L1) {
			@Open(L0);
		} else {
			if (L1 > 0) {
				if (L0) {
					@Close();
				} else {
					@Open(L0);
				}
			} else {
				if (L0) {
					@Open(L0);
				} else {
					@Close();
				}
			}
		}
	}

	void OnClearPath(object a0)
	{
		bool L0;
		if (!a0 || !f_43_a1_b(a0)) {
			return;
		}
		@ClassifyActor(L0, a0);
		@Open(!L0);
	}
}

bool f_43_a1_b(object a0)
{
	return !f_49_a0_b();
}

bool f_49_a0_b(void)
{
	int L0;
	@GetProperty("locked", L0);
	return L0 != 0;
}

