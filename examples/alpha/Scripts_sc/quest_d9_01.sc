event OnTrigger 26;

maintask t0
{
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_rifles") {
			object L0;
			int L1;
			@GetMainOutdoorScene(L0);
			for (L1 = 1; L1 <= 5; L1++) {
				object L2;
				@AddActor(L2, "d9q01_rifle" + L1, L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d9q01_rifle.xml");
			}
		} else {
			if (a0 == "unlock_polyh") {
				f_4b_a2_v("polyh@door1", false);
			} else {
				if (a0 == "fail") {
					f_34_a0_v();
				} else {
					if (a0 == "completed") {
						f_3c_a0_v();
					}
				}
			}
		}
	}

	void f_34_a0_v(void)
	{
		@SetVariable("d9q01", -1);
		f_44_a0_v();
	}

	void f_3c_a0_v(void)
	{
		@SetVariable("d9q01", 1000);
		f_44_a0_v();
	}

	void f_44_a0_v(void)
	{
		disable OnTrigger;
		f_4b_a2_v("polyh@door1", true);
	}
}

void f_4b_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	}
	L0->SetProperty("locked", a1);
}

