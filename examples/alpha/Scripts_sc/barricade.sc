event OnLoad 5;
event OnUnload 6;

task t0
{
	void init(void)
	{
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}
}

maintask t1
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
		if (f_27_a0_b()) {
			f_31_a1_v(true);
			f_4c_a0_v();
		} else {
			f_31_a1_v(false);
			f_7f_a0_v();
		}
	}

	void OnUnload(void)
	{
		f_7f_a0_v();
		t0{};
	}

	bool f_27_a0_b(void)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 > 198) {
			return true;
		}
		return false;
	}

	void f_31_a1_v(bool a0)
	{
		int L0;
		@SetVisibility(a0);
		@GetPFPolyID(L0);
		if (L0 != -1) {
			object L1;
			@Trace("Blocking polygons: " + (L0 & 248));
			@GetMainOutdoorScene(L1);
			if (a0) {
				L1->BlockPolygons(L0, 248);
			} else {
				L1->UnblockPolygons(L0, 248);
			}
		}
	}

	void f_4c_a0_v(void)
	{
		Vector L0;
		Vector L1;
		float L2;
		float L3;
		object L4;
		L0 = f_85_a0_V() + [0.0, 150.0, 0.0];
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

	void f_7f_a0_v(void)
	{
		if (tv0) {
			tv0->Remove();
			tv0 = null;
		}
	}
}

Vector f_85_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

