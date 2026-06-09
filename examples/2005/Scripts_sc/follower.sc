event OnConsole 1000;
event OnTimer 7;
event OnCollision 10;
event OnDeath 41;

var bool g0;

maintask t0
{
	void init(void)
	{
		object L0;
		g0 = true;
		@FindActor(L0, "player");
		while (L0 != null) {
			if (t1{L0}) {
				t2{};
			}
			@WaitForAnimEnd();
			@Sleep(3);
		}
	}

	void OnConsole(string a0, string a1)
	{
		if (a0 == "fstop") {
			t2{};
		} else {
			global.OnConsole(a0, a1);
		}
	}
}

task t1
{
	var bool tv0;
	var object tv1;
	var bool tv2;

	bool init(object a0)
	{
		tv2 = false;
		f_4f_a5_b(a0, 200, 10000, g0, true);
		return tv2;
	}

	void OnConsole(string a0, string a1)
	{
		if (a0 == "fstop") {
			tv2 = true;
			f_cb_a0_v();
		} else {
			if (a0 == "fgo") {
				tv2 = false;
			} else {
				global.OnConsole(a0, a1);
			}
		}
	}

	bool f_4f_a5_b(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		tv0 = false;
		tv1 = a0;
		L1 = a4;
		for (; ; ) {
			object L2;
			Vector L3;
			Vector L4;
			Vector L5;
			float L6;
			if (!f_db_a1_b(a0)) {
				return false;
			}
			a0->GetPosition(L3);
			@GetPosition(L4);
			L5 = L3 - L4;
			L6 = L5 | L5;
			if (a2 > 0 && L6 > a2 * a2) {
				@Stop();
				return false;
			}
			if (L6 > a1 * a1) {
				object L7;
				a0->GetPFPosition(L3);
				@FindPathTo(L7, L3);
				if (L7 != null) {
					L2 = L7;
					L7 = null;
				}
				if (L2 != null) {
					if (L1) {
						L1 = false;
						@RotatePath(L2, L0);
						if (!L0) {
							break;
						}
					}
					@SetTimer(0, 0.30000001192092896);
					@FollowPath(L2, a3, L0, f_e2_a0_s(), f_e4_a0_s());
					if (!L0) {
						if (tv0) {
							L2 = null;
							break;
						} else {
							continue;
						}
					} else {
						L2 = null;
					}
				} else {
					@KillTimer(0);
					@Sleep(0.5, L0);
					if (!L0) {
						if (tv0) {
							L2 = null;
							break;
						}
					}
					@SetTimer(0, 0.30000001192092896);
				}
			} else {
				@KillTimer(0);
				break;
			}
		}
		return !tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_db_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_cb_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_cb_a0_v();
		global.OnDeath(a0);
	}

	bool f_db_a1_b(object a0)
	{
		return f_131_a1_b(a0);
	}

	string f_e2_a0_s(void)
	{
		return "walk";
	}

	string f_e4_a0_s(void)
	{
		return "run";
	}
}

task t2
{
	void init(void)
	{
		@Trace("Waiting for your orders!");
		@Hold();
		@Trace("Following you!");
	}

	void OnConsole(string a0, string a1)
	{
		if (a0 == "fgo") {
			@StopGroup0();
		} else {
			global.OnConsole(a0, a1);
		}
	}
}

bool f_fc_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_108_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_10d_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_108_a1_b(a0)) {
		return false;
	}
	@GetScene(L0);
	if (L0 == null) {
		return false;
	}
	a0->GetScene(L1);
	if (L0 != L1) {
		return false;
	}
	return true;
}

bool f_131_a1_b(object a0)
{
	int L0;
	if (!f_10d_a1_b(a0)) {
		return false;
	}
	if (!f_fc_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void OnDeath(object a0)
{
}

void OnConsole(string a0, string a1)
{
	if (a0 == "frun") {
		g0 = true;
	} else {
		if (a0 == "fwalk") {
			g0 = false;
		}
	}
}

