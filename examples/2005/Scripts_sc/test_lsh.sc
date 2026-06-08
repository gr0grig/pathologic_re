event OnUse 0;
event OnTrigger 26;
event OnUnload 6;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		f_11_a0_v();
	}

	void OnUse(object a0)
	{
		float L0;
		Vector L1;
		a0->GetEyesHeight(L0);
		L1 = [0.0, 0.0, 0.0];
		L1.y = L0;
		@lshLookAsync(a0, L1);
		@Trace("LOOK ASYNC");
	}

	void f_11_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_41_a0_b()) {
				@RemoveActor(f_43_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_41_a0_b()) {
			@RemoveActor(f_43_a0_o());
		}
	}
}

bool f_41_a0_b(void)
{
	return true;
}

object f_43_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

