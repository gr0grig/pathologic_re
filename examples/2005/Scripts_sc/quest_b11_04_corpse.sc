event OnPropertyChange 16;
event OnTrigger 26;
event OnUnload 6;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		object L0;
		@SetProperty("disease", 1);
		@FindGeometry("corpse", L0);
		L0->Enable(true);
		while (true) {
			@Hold();
		}
	}

	void OnPropertyChange(object a0, string a1)
	{
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_30_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0) {
			@RemoveActor(f_30_a0_o());
		}
	}
}

object f_30_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

