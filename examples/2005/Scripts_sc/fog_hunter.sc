event OnTimer 7;
event OnSee 1;
event OnHear 3;
event OnCollision 10;
event OnActorStuck 28;
event OnDeath 41;

property int Region;

task t0
{
	var object tv0;
	var bool tv1;
	var Vector tv2;
	var Vector tv3;

	void init(object a0)
	{
		Vector L0;
		Vector L1;
		float L2;
		float L3;
		bool L4;
		Vector L5;
		float L6;
		Vector L7;
		Vector L8;
		float L9;
		float L10;
		Vector L11;
		Vector L12;
		tv0 = a0;
		@Trace("TFogAttack");
		@FogLinear(0.800000011920929, 2.0);
		L2 = 0;
		@GetPosition(L0);
		a0->GetPFPosition(L1);
		L4 = true;
		while (true) {
			@Trace("Watching");
			a0->GetPFPosition(L1);
			@GetPosition(L5);
			L6 = f_35f_a2_f(L5, L1);
			if (L6 > 160000.0) {
				L8 = f_350_a1_V(L1 - L5);
				L9 = sqrt(L6) - 360.0;
				L7 = L5 + L8 * L9;
				if (L4) {
					@MovePoint(L7, 700);
					L3 = L9 / 700.0;
				} else {
					@MovePoint(L7, 220);
					L3 = L9 / 100.0;
				}
			} else {
				@Sleep(1.0);
				L3 = 1.0;
			}
			if (!f_332_a1_b(a0)) {
				if (!L4) {
					@KillTimer(21);
				}
				@FogLinear(0, 0.5);
				@Sleep(0.5);
				return;
			}
			if (L4) {
				L4 = false;
				a0->GetPFPosition(tv2);
				@SetTimer(21, 1);
			} else {
				if (tv1) {
					break;
				}
			}
			L2 = L2 + L3;
			if (L2 >= 20.0) {
				@Trace("Leaving");
				@KillTimer(21);
				@FogLinear(0, 1.0);
				@MovePoint(L0, 900);
				@Sleep(5);
				return;
			}
		}
		@KillTimer(21);
		@Trace("Attacking");
		@FogLinear(1, 0.5);
		@GetHeight(L10);
		L11 = [0.0, 0.0, 0.0];
		L11.y = L10;
		@PlayGlobalSound("breath", L11);
		a0->GetPFPosition(L12);
		@MovePoint(L12, 500);
		if (f_332_a1_b(a0)) {
			if (f_35f_a2_f(f_284_a0_V(), f_289_a1_V(a0)) <= 90000.0) {
				float L13;
				@PlaySound("attack");
				L13 = f_2c4_a2_f(a0, 0.20000000298023224);
				@ReportHit(a0, 5, L13, 0.20000000298023224);
			}
		}
		@SetVisirVisibility(false);
		@FogLinear(0, 1);
		@Sleep(5);
		@RemoveActor(f_34a_a0_o());
	}

	void OnTimer(int a0)
	{
		if (21 == a0) {
			tv3 = tv2;
			tv3.y = 0;
			tv0->GetPFPosition(tv2);
			tv2.y = 0;
			if (f_35a_a2_f(tv2, tv3) > 220.0) {
				tv1 = true;
			}
		}
	}
}

maintask t1
{
	void init(void)
	{
		@Trace("fog hunter inited");
		@PutOnGrid();
		@SetTimer(20, 1);
		for (; ; ) {
			t2{};
			t3{};
		}
	}
}

task t2
{
	var bool tv0;
	var bool tv1;

	void OnTimer(int a0)
	{
		f_3a2_a1_v(a0);
		if (a0 == 20) {
			if (f_3a9_a1_b(f_296_a0_o())) {
				f_15f_a0_v();
			}
		}
	}

	void OnSee(object a0)
	{
		if (f_378_a1_b(a0)) {
			f_15f_a0_v();
			f_392_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (f_385_a1_b(a0)) {
			f_15f_a0_v();
			f_39a_a1_v(a0);
		}
	}

	void init(void)
	{
		float L0;
		tv0 = false;
		tv1 = false;
		@rand(L0, 0.5);
		@Sleep(L0);
		while (!tv0) {
			Vector L1;
			if (!tv1) {
				for (; ; ) {
					Vector L2;
					bool L3;
					@GetPosition(L2);
					@GetRandomPFPointInCircle(L1, L2, f_153_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_171_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_16f_a0_b(), L5);
					L4 = null;
					if (L5) {
						t4{};
					}
				}
			} else {
				@Sleep(1);
			}
		}
	}

	float f_153_a0_f(void)
	{
		float L0;
		@GetCameraFarDistance(L0);
		return L0;
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void OnActorStuck(void)
	{
		@Stop();
	}

	void f_15f_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void OnDeath(object a0)
	{
		f_15f_a0_v();
		global.OnDeath(a0);
	}

	bool f_16f_a0_b(void)
	{
		return false;
	}

	object f_171_a1_o(Vector a0)
	{
		object L0;
		@FindShiftedPathTo(L0, a0);
		return L0;
	}
}

task t3
{
	var bool tv0;
	var object tv1;

	void init(void)
	{
		object L0;
		@Trace("fog hunter following");
		L0 = f_296_a0_o();
		if (!f_3a9_a1_b(L0)) {
			return;
		}
		f_1cc_a5_b(L0, 100, 0, false, false);
	}

	void OnTimer(int a0)
	{
		f_3a2_a1_v(a0);
		f_232_a1_v(a0);
		if (a0 == 20) {
			if (!f_3a9_a1_b(f_296_a0_o())) {
				f_248_a0_v();
			}
		}
	}

	void OnSee(object a0)
	{
		if (f_378_a1_b(a0)) {
			f_248_a0_v();
			f_392_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (f_385_a1_b(a0)) {
			f_248_a0_v();
			f_39a_a1_v(a0);
		}
	}

	bool f_1c5_a1_b(object a0)
	{
		return f_3a9_a1_b(a0);
	}

	bool f_1cc_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_1c5_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_258_a0_s(), f_25a_a0_s());
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

	void f_232_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_1c5_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_248_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_248_a0_v();
		global.OnDeath(a0);
	}

	string f_258_a0_s(void)
	{
		return "walk";
	}

	string f_25a_a0_s(void)
	{
		return "run";
	}
}

task t4
{
	void init(void)
	{
		float L0;
		Vector L1;
		Vector L2;
		bool L3;
		@Trace("fog hunter idling");
		@rand(L0, 2);
		@FogLinear(1, 1);
		@Sleep(1);
		@Sleep(L0);
		@GetPosition(L1);
		@GetRandomPFPointInCircle(L2, L1, 1000, L3);
		@FogLinear(0, 0.5);
		if (L3) {
			@MovePoint(L2, 500);
		}
		@Sleep(1);
	}

	void OnTimer(int a0)
	{
		f_3a2_a1_v(a0);
	}
}

Vector f_284_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_289_a1_V(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return L0;
}

float f_28e_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

object f_296_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

bool f_29d_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_2a2_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_2ae_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_2a2_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_363_a3_f(L0 + a2, a3, a4));
	return true;
}

float f_2c4_a2_f(object a0, float a1)
{
	float L0;
	if (!f_2a2_a2_b(a0, "disease")) {
		return 0;
	}
	L0 = 0;
	if (f_2a2_a2_b(a0, "armor_disease")) {
		a0->GetProperty("armor_disease", L0);
		L0 = L0 / 100;
	}
	if (f_2a2_a2_b(a0, "immunity")) {
		float L1;
		a0->GetProperty("immunity", L1);
		L0 = L0 + L1;
		f_2ae_a5_b(a0, "immunity", -a1, 0, 1);
	}
	if (L0 >= 1) {
		return 0.0;
	}
	a1 = a1 * ((1 - L0) / 2);
	f_2ae_a5_b(a0, "disease", a1, 0, 1);
	if (f_29d_a1_b(a0)) {
		f_36e_a1_v(a1);
	}
	return a1;
}

bool f_309_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_30e_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_309_a1_b(a0)) {
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

bool f_332_a1_b(object a0)
{
	int L0;
	if (!f_30e_a1_b(a0)) {
		return false;
	}
	if (!f_2a2_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

object f_34a_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_350_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_35a_a2_f(Vector a0, Vector a1)
{
	Vector L0;
	L0 = a1 - a0;
	return sqrt(L0 | L0);
}

float f_35f_a2_f(Vector a0, Vector a1)
{
	Vector L0;
	L0 = a1 - a0;
	return L0 | L0;
}

float f_363_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_36e_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(14, L0);
}

bool f_378_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0 && f_332_a1_b(a0);
}

bool f_385_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0 && f_332_a1_b(a0);
}

void f_392_a1_v(object a0)
{
	t0{a0};
}

void f_39a_a1_v(object a0)
{
	t0{a0};
}

void f_3a2_a1_v(int a0)
{
	if (a0 == 20) {
		@ResetAAS();
	}
}

bool f_3a9_a1_b(object a0)
{
	object L0;
	if (!f_332_a1_b(a0)) {
		return false;
	}
	@GetActiveScene(L0);
	if (L0 != null && L0->FuncExist("GetCurrentRegion", 1)) {
		int L1;
		L0->GetCurrentRegion(L1);
		return L1 == Region && f_28e_a1_f(a0) < 4000000;
	}
	return false;
}

void OnDeath(object a0)
{
}

