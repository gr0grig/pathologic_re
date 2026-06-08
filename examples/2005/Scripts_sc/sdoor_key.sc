event OnUse 0;
event OnClearPath 38;

maintask t0
{
	void OnUse(object a0)
	{
		if (f_61_a0_b()) {
			string L0;
			int L1;
			@GetProperty("key", L0);
			a0->GetItemCountOfType(L1, L0);
			if (L1) {
				f_68_a1_v(false);
			}
		}
		f_19_a1_v(a0);
	}

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void f_19_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (!a0) {
			return;
		}
		if (!f_5b_a1_b(a0)) {
			@PlaySound("door_closed");
			@Trace("Door is locked");
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
		if (!a0 || !f_5b_a1_b(a0)) {
			return;
		}
		@ClassifyActor(L0, a0);
		@Open(!L0);
	}
}

bool f_5b_a1_b(object a0)
{
	return !f_61_a0_b();
}

bool f_61_a0_b(void)
{
	int L0;
	@GetProperty("locked", L0);
	return L0 != 0;
}

void f_68_a1_v(bool a0)
{
	@SetProperty("locked", a0);
}

