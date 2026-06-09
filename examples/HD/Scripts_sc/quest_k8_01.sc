event OnTrigger 26;

var object g0;

maintask t0
{
	void init(void)
	{
		f_7c_a0_v();
		f_82_a0_v();
		f_5f_a2_v("boiny@door1", true);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "unlock_boiny") {
			f_5f_a2_v("boiny@door1", false);
		} else {
			if (a0 == "fail") {
				f_39_a0_v();
			} else {
				if (a0 == "completed") {
					f_41_a0_v();
				} else {
					if (a0 == "cleanup") {
						int L0;
						@GetVariable("k8q01", L0);
						if (L0 != 1000) {
							f_39_a0_v();
						}
						f_4f_a0_v();
					}
				}
			}
		}
	}

	void f_39_a0_v(void)
	{
		@SetVariable("k8q01", -1);
		f_49_a0_v();
	}

	void f_41_a0_v(void)
	{
		@SetVariable("k8q01", 1000);
		f_49_a0_v();
	}

	void f_49_a0_v(void)
	{
		f_5f_a2_v("boiny@door1", true);
	}

	void f_4f_a0_v(void)
	{
		disable OnTrigger;
		f_8b_a0_v();
		@RemoveActor(f_59_a0_o());
	}
}

object f_59_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

void f_5f_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_70_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_7c_a0_v(void)
{
	f_70_a2_b("klara2_npc_positioner", "init");
}

void f_82_a0_v(void)
{
	object L0;
	@GetSceneByName(L0, "burah_home");
	@Trigger(L0, "noburah");
}

void f_8b_a0_v(void)
{
	object L0;
	@GetSceneByName(L0, "burah_home");
	@Trigger(L0, "burah");
}

