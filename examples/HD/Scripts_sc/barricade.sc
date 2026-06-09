event OnLoad 5;
event OnUnload 6;

maintask t0
{
	var object tv0;

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		if (f_1c_a0_b()) {
			f_26_a1_v(true);
			f_41_a0_v();
		} else {
			f_26_a1_v(false);
			f_74_a0_v();
		}
	}

	void OnUnload(void)
	{
		f_74_a0_v();
	}

	bool f_1c_a0_b(void)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 > 198) {
			return true;
		}
		return false;
	}

	void f_26_a1_v(bool a0)
	{
		int L0;
		@SetVisibility(a0);
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
		}
	}

	void f_41_a0_v(void)
	{
		Vector L0;
		Vector L1;
		float L2;
		float L3;
		object L4;
		L0 = f_7a_a0_V() + [0.0, 150.0, 0.0];
		@RandVec2D(L2, L3);
		L1.x = L2;
		L1.y = 0;
		L1.z = L3;
		@GetScene(L4);
		if (!L4) {
			@Trace("Barricade null scene");
			return;
		}
		L4->AddStationaryActor(tv0, L0, L1, "pers_soldat", "soldier.xml", true);
		if (tv0 == null) {
			@Trace("Error adding soldier");
		} else {
			@Trace("Soldier was added: " + L0.x + " " + L0.y + " " + L0.z);
		}
	}

	void f_74_a0_v(void)
	{
		if (tv0) {
			tv0->Remove();
			tv0 = null;
		}
	}
}

Vector f_7a_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

