event OnUse 0;
event OnTimer 7;

var Vector g0;
var bool g1;

maintask t0
{
	var Vector tv0;
	var Vector tv1;
	var bool tv2;

	void init(void)
	{
		tv2 = false;
		g1 = false;
		g0 = f_12_a0_V();
		@SetTimer(10, 0.75);
		f_68_a0_v();
	}

	Vector f_12_a0_V(void)
	{
		Vector L0;
		@GetDirection(L0);
		return L0;
	}

	void OnUse(object a0)
	{
		f_4a_a0_v();
		@KillTimer(10);
		t1{a0};
		@SetTimer(10, 0.75);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			object L0;
			@FindActor(L0, "player");
			if (f_306_a1_b(L0)) {
				if (!g1) {
					f_2a6_a1_v(L0);
					g1 = true;
				}
			} else {
				if (g1) {
					@UnlookAsync("head");
					g1 = false;
				}
			}
		}
	}

	void f_4a_a0_v(void)
	{
		if (tv2) {
			@StopAnimation();
		} else {
			f_b6_a0_v();
		}
	}

	void f_53_a0_v(void)
	{
		int L0;
		tv2 = true;
		L0 = f_2f5_a0_i();
		if (L0) {
			int L1;
			@irand(L1, L0);
			@PlayAnimation("all", f_2ee_a1_s(L1));
			@WaitForAnimEnd();
		}
		tv2 = false;
	}

	void f_68_a0_v(void)
	{
		@GetPFPosition(tv1);
		@GetDirection(tv0);
		for (; ; ) {
			int L0;
			bool L1;
			@irand(L0, 60);
			@Sleep(L0 + 30, L1);
			if (L1) {
				f_53_a0_v();
			} else {
				for (; ; ) {
					Vector L2;
					@GetPFPosition(L2);
					if (f_2b1_a2_f(tv1, L2) > 40000) {
						object L3;
						@FindPathTo(L3, tv1);
						if (L3 != null) {
							@RotatePath(L3, L1);
							if (!L1) {
								continue;
							}
							@FollowPath(L3, false, L1);
							if (!L1) {
								continue;
							}
							@Rotate(tv0.x, tv0.z, L1);
							if (!L1) {
								continue;
							}
							@WaitForAnimEnd(L1);
							if (!L1) {
								continue;
							}
							break;
						} else {
							@Sleep(1);
						}
					} else {
						@Rotate(tv0.x, tv0.z, L1);
						if (!L1) {
							continue;
						}
						@WaitForAnimEnd(L1);
						if (!L1) {
							continue;
						}
						break;
					}
				}
			}
		}
	}

	void f_b6_a0_v(void)
	{
		@StopGroup0();
		@Stop();
	}
}

task t1
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var object tv5;
	var object tv6;
	var object tv7;
	var object tv8;
	var object tv9;
	var object tv10;

	void init(object a0)
	{
		Vector L0;
		int L1;
		object L2;
		Vector L3;
		Vector L4;
		Vector L5;
		Vector L6;
		bool L7;
		object L8;
		tv10 = f_2b5_a0_o();
		f_234_a1_v(a0);
		f_2c8_a0_v();
		f_2d4_a0_v();
		L0 = g0;
		@LockCamera();
		@RotateAsync(-L0.x, -L0.z);
		f_2da_a3_v(0, 1, 0.75);
		tv0 = f_25f_a2_o(a0, 0);
		tv1 = f_25f_a2_o(a0, 1);
		tv2 = f_25f_a2_o(a0, 2);
		tv3 = f_25f_a2_o(a0, 3);
		tv4 = f_25f_a2_o(a0, 4);
		tv5 = f_274_a2_o(a0, 0);
		tv6 = f_274_a2_o(a0, 1);
		tv7 = f_274_a2_o(a0, 2);
		tv8 = f_274_a2_o(a0, 3);
		tv9 = f_274_a2_o(a0, 4);
		f_1d6_a1_v(a0);
		for (L1 = 1; L1 < 5; L1++) {
			a0->RemoveAllItems(L1);
		}
		@GetScene(L2);
		L2->GetLocator("pt_arena_player", L7, L3, L4);
		L2->GetLocator("pt_arena_enemy", L7, L5, L6);
		@Teleport(a0, L2, L3, L4);
		@AddActor(L8, "pers_butcher", L2, L5, L6, "arena_fighter.xml");
		f_203_a4_v(L2, "pers_worker", "arena_spectator_worker.xml", "pt_arena_spectator1");
		f_203_a4_v(L2, "pers_worker", "arena_spectator_worker.xml", "pt_arena_spectator2");
		f_203_a4_v(L2, "pers_unosha", "arena_spectator_unosha.xml", "pt_arena_spectator3");
		f_203_a4_v(L2, "pers_unosha", "arena_spectator_unosha.xml", "pt_arena_spectator4");
		f_203_a4_v(L2, "pers_unosha", "arena_spectator_unosha2.xml", "pt_arena_spectator5");
		f_203_a4_v(L2, "pers_dohodyaga", "arena_spectator_dohodyaga.xml", "pt_arena_spectator6");
		f_203_a4_v(L2, "pers_boy", "arena_spectator_boy.xml", "pt_arena_spectator7");
		@Rotate(-L0.x, -L0.z);
		f_2a6_a1_v(a0);
		f_2da_a3_v(1, 0, 0.75);
		@UnlockCamera();
		for (; ; ) {
			bool L9;
			@Sleep(1);
			if (a0 != null) {
				L8->IsDead(L9);
				if (L9) {
					break;
				}
			}
		}
		Vector L10;
		Vector L11;
		@LockCamera();
		@RotateAsync(L0.x, L0.z);
		f_2da_a3_v(0, 1, 0.75);
		@RemoveActor(L8);
		f_214_a0_v();
		f_288_a4_v(a0, 0, tv0, tv5);
		f_288_a4_v(a0, 1, tv1, tv6);
		f_288_a4_v(a0, 2, tv2, tv7);
		f_288_a4_v(a0, 3, tv3, tv8);
		f_288_a4_v(a0, 4, tv4, tv9);
		a0->SelectWeapon();
		L2->GetLocator("pt_arena_return", L7, L10, L11);
		@Teleport(a0, L2, L10, L11);
		@StopAsync();
		@Rotate(L0.x, L0.z);
		f_2da_a3_v(1, 0, 0.75);
		@UnlockCamera();
		f_2ce_a0_v();
		f_2c2_a0_v();
		f_24b_a1_v(a0);
	}

	void f_1d6_a1_v(object a0)
	{
		int L0;
		int L1;
		a0->GetItemCount(L0, 0);
		L1 = 0;
		for (; L1 < L0; L1++) {
			object L2;
			a0->GetItem(L2, L1);
			int L3;
			L2->GetItemID(L3);
			bool L4;
			@HasInvItemProperty(L4, L3, "Group");
			if (L4) {
				int L5;
				@GetInvItemProperty(L5, L3, "Group");
				if (L5 != 0) {
					continue;
				} else {
					bool L6;
					a0->IsItemSelected(L6, L1, 0);
					if (L6) {
						continue;
					}
				}
			}
			int L7;
			a0->GetItemAmount(L7, L1, 0);
			a0->RemoveItem(L1, L7, 0);
			L1 = L1 + -1;
			L0 = L0 + -1;
		}
	}

	void f_203_a4_v(object a0, string a1, string a2, string a3)
	{
		Vector L0;
		Vector L1;
		bool L2;
		object L3;
		a0->GetLocator(a3, L2, L0, L1);
		if (!L2) {
			@Trace("Locator doesn't exist for arena spectator " + a3);
			return;
		}
		a0->AddStationaryActor(L3, L0, L1, a1, a2, true);
		tv10->add(L3);
	}

	void f_214_a0_v(void)
	{
		int L0;
		int L1;
		tv10->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			object L3;
			tv10->get(L2, L1);
			L2->GetActor(L3);
			if (L3 != null) {
				@RemoveActor(L3);
			}
			L2->Remove();
		}
		tv10->clear();
	}
}

float f_22c_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_234_a1_v(object a0)
{
	bool L0;
	if (!a0) {
		return;
	}
	a0->HasProperty("noaccess", L0);
	if (L0) {
		int L1;
		a0->GetProperty("noaccess", L1);
		a0->SetProperty("noaccess", L1 + 1);
	} else {
		a0->SetProperty("noaccess", 1);
	}
}

void f_24b_a1_v(object a0)
{
	int L0;
	if (!a0) {
		return;
	}
	a0->GetProperty("noaccess", L0);
	if (L0 > 1) {
		a0->SetProperty("noaccess", L0 - 1);
	} else {
		a0->RemoveProperty("noaccess");
	}
}

object f_25f_a2_o(object a0, int a1)
{
	object L0;
	int L1;
	int L2;
	L0 = f_2b5_a0_o();
	a0->GetItemCount(L1, a1);
	for (L2 = 0; L2 < L1; L2++) {
		object L3;
		a0->GetItem(L3, L2, a1);
		L0->add(L3);
	}
	return L0;
}

object f_274_a2_o(object a0, int a1)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	a0->GetItemCount(L1, a1);
	for (L2 = 0; L2 < L1; L2++) {
		bool L3;
		a0->IsItemSelected(L3, L2, a1);
		if (L3) {
			L0->add(L2);
		}
	}
	return L0;
}

void f_288_a4_v(object a0, int a1, object a2, object a3)
{
	a0->RemoveAllItems(a1);
	int L0;
	a2->size(L0);
	int L1;
	for (L1 = 0; L1 < L0; L1++) {
		object L2;
		bool L3;
		a2->get(L2, L1);
		a0->AddItem(L3, L2, a1);
	}
	a3->size(L0);
	int L4;
	for (L4 = 0; L4 < L0; L4++) {
		int L5;
		a3->get(L5, L4);
		a0->SelectItem(L5, true, a1);
	}
}

void f_2a6_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

float f_2b1_a2_f(Vector a0, Vector a1)
{
	Vector L0;
	L0 = a1 - a0;
	return L0 | L0;
}

object f_2b5_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

void f_2bb_a2_v(string a0, int a1)
{
	int L0;
	@GetVariable(a0, L0);
	@SetVariable(a0, L0 + a1);
}

void f_2c2_a0_v(void)
{
	f_2bb_a2_v("noinv_drop", -1);
}

void f_2c8_a0_v(void)
{
	f_2bb_a2_v("noinv_drop", 1);
}

void f_2ce_a0_v(void)
{
	f_2bb_a2_v("nouse_container", -1);
}

void f_2d4_a0_v(void)
{
	f_2bb_a2_v("nouse_container", 1);
}

void f_2da_a3_v(float a0, float a1, float a2)
{
	bool L0;
	float L1;
	L0 = a1 > a0;
	L1 = (a1 - a0) / a2;
	while (L0 ? a0 < a1 : a1 < a0) {
		float L2;
		@ModDarkenLevel(a0);
		@sync(L2);
		a0 = a0 + L2 * L1;
	}
	@ModDarkenLevel(a1);
}

string f_2ee_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_2f5_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_2ee_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

bool f_306_a1_b(object a0)
{
	float L0;
	if (a0 == null) {
		return false;
	}
	L0 = sqrt(f_22c_a1_f(a0));
	if (g1) {
		L0 = L0 - 100;
	}
	return L0 < 300;
}

