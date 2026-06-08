event OnTrigger 26;
event OnLoad 5;
event OnUnload 6;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		tv0 = false;
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			tv0 = true;
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnLoad(void)
	{
		if (!tv0) {
			@SetVisibility(true);
			f_26_a1_v(true);
		}
	}

	void OnUnload(void)
	{
		if (tv0) {
			f_26_a1_v(false);
			@RemoveActor(f_43_a0_o());
		}
	}
}

void f_26_a1_v(bool a0)
{
	int L0;
	@GetPFPolyID(L0);
	if (L0 != -1) {
		object L1;
		@GetMainOutdoorScene(L1);
		if (a0) {
			@Trace("Blocking polygons: " + (L0 & 1016));
			L1->BlockPolygons(L0, 1016);
		} else {
			L1->UnblockPolygons(L0, 1016);
		}
	} else {
		@Trace("ERROR: Can't find PF polygon to block");
	}
}

object f_43_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

