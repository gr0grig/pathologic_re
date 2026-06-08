event OnTrigger 26;

var object g0;

maintask t0
{
	void init(void)
	{
		f_76_a0_v();
		f_59_a2_v("boiny@door1", true);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "unlock_boiny") {
			f_59_a2_v("boiny@door1", false);
		} else {
			if (a0 == "fail") {
				f_37_a0_v();
			} else {
				if (a0 == "completed") {
					f_3f_a0_v();
				} else {
					if (a0 == "cleanup") {
						int L0;
						@GetVariable("k8q01", L0);
						if (L0 != 1000) {
							f_37_a0_v();
						} else {
							f_47_a0_v();
						}
					}
				}
			}
		}
	}

	void f_37_a0_v(void)
	{
		@SetVariable("k8q01", -1);
		f_47_a0_v();
	}

	void f_3f_a0_v(void)
	{
		@SetVariable("k8q01", 1000);
		f_47_a0_v();
	}

	void f_47_a0_v(void)
	{
		disable OnTrigger;
		f_59_a2_v("boiny@door1", true);
		@RemoveActor(f_53_a0_o());
	}
}

object f_53_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

void f_59_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_6a_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_76_a0_v(void)
{
	f_6a_a2_b("klara2_npc_positioner", "init");
}

