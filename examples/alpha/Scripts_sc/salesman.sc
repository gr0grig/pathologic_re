event OnLoad 5;
event evt_11 11;
event OnUnload 6;
event OnSee 1;
event OnUse 0;
event OnCollision 10;
event OnTimer 7;

var int g0;
var int g1;
var int g2;
var int g3;
var int g4;

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

task t1
{
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			@WaitForAnimEnd();
			@PlayAnimation("all", "idle");
			if (tv0) {
				return;
			}
		}
	}

	void evt_11(int a0)
	{
		@StopAnimation();
		@StopTrade();
		tv0 = true;
	}
}

maintask t2
{
	var object tv0;
	var float tv1;
	var int tv2;

	void f_1c_a0_v(void)
	{
		int L0;
		int L1;
		int L2;
		int L3;
		int L4;
		if (f_10b_a2_b(f_19c_a0_o(), "clothes")) {
			@GetProperty("clothes", L0);
		} else {
			L0 = 0;
		}
		if (f_10b_a2_b(f_19c_a0_o(), "weapon")) {
			@GetProperty("weapon", L1);
		} else {
			L1 = 0;
		}
		if (f_10b_a2_b(f_19c_a0_o(), "food")) {
			@GetProperty("food", L2);
		} else {
			L2 = 0;
		}
		if (f_10b_a2_b(f_19c_a0_o(), "medcine")) {
			@GetProperty("medcine", L3);
		} else {
			L3 = 0;
		}
		if (f_10b_a2_b(f_19c_a0_o(), "other")) {
			@GetProperty("other", L4);
		} else {
			L4 = 0;
		}
		g0 = L0;
		g1 = L1;
		g2 = L2;
		g3 = L3;
		g4 = L4;
	}

	void init(void)
	{
		f_1c_a0_v();
		tv2 = f_1c6_a0_i();
		f_506_a0_v();
		f_99_a0_v();
	}

	void OnLoad(void)
	{
		@Trace("load salesman");
		if (f_1c6_a0_i() != tv2) {
			@Trace("Updating salesman");
			tv2 = f_1c6_a0_i();
			f_506_a0_v();
		}
		@StopGroup0();
	}

	void OnUnload(void)
	{
		@Hold();
	}

	void f_99_a0_v(void)
	{
		if (!f_163_a0_b()) {
			t0{};
		}
		tv1 = 0;
		tv0 = null;
		for (; ; ) {
			@PlayAnimation("all", "idle");
			@WaitForAnimEnd();
		}
	}

	void OnSee(object a0)
	{
		bool L0;
		if (tv0 != null) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		tv0 = a0;
		tv1 = 0;
		f_158_a1_v(tv0);
		@SetTimer(111, 0.20000000298023224);
		@SetTimer(112, 3.0);
	}

	void OnUse(object a0)
	{
		f_550_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_158_a1_v(a0);
	}

	void OnTimer(int a0)
	{
		if (a0 == 111) {
			Vector L0;
			Vector L1;
			if (!f_140_a1_b(tv0)) {
				@KillTimer(112);
				@KillTimer(111);
				tv0 = null;
				return;
			}
			@GetDirection(L0);
			L1 = f_104_a1_V(tv0);
			if (f_1b5_a2_f(L0, L1) < 0.7660444378852844) {
				f_158_a1_v(tv0);
			}
			return;
		}
		if (a0 == 112) {
			@KillTimer(112);
			@KillTimer(111);
			tv0 = null;
			@ResetAAS();
		}
	}
}

Vector f_104_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

bool f_10b_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_117_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_11c_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_117_a1_b(a0)) {
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

bool f_140_a1_b(object a0)
{
	int L0;
	if (!f_11c_a1_b(a0)) {
		return false;
	}
	if (!f_10b_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_158_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_163_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_168_a1_b(object a0)
{
	float L0;
	Vector L1;
	Vector L2;
	Vector L3;
	Vector L4;
	Vector L5;
	Vector L6;
	bool L7;
	a0->GetPosition(L1);
	a0->GetEyesHeight(L0);
	L1.y += L0;
	@GetPosition(L2);
	@GetEyesHeight(L0);
	L2.y += L0;
	L3 = L1 - L2;
	L3.y = 0;
	L3 = L3 / sqrt(L3 | L3);
	L4 = -L3;
	L5 = L3 * 70 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_198_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

object f_19c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_1a2_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_1ab_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_1b5_a2_f(Vector a0, Vector a1)
{
	return f_1a2_a2_f(a0, a1) / (f_1ab_a1_f(a0) * f_1ab_a1_f(a1));
}

int f_1c6_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_1cf_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

bool f_1d4_a3_b(object a0, int a1, int a2)
{
	if (a2 == 0) {
		return f_207_a2_b(a0, a1);
	} else {
		if (a2 == 1) {
			return f_290_a2_b(a0, a1);
		} else {
			if (a2 == 2) {
				return f_32b_a2_b(a0, a1);
			} else {
				if (a2 == 3) {
					return f_411_a2_b(a0, a1);
				}
			}
		}
	}
	return f_4da_a2_b(a0, a1);
}

bool f_207_a2_b(object a0, int a1)
{
	bool L0;
	if (a1 < 3) {
		return true;
	}
	if (a1 >= 2) {
		int L1;
		@irand(L1, 3);
		if (L1 == 0) {
			a0->AddItem(L0, f_1cf_a1_i("Scalpel"), 0, 1);
		} else {
			if (L1 == 1) {
				a0->AddItem(L0, f_1cf_a1_i("Knife"), 0, 1);
			} else {
				a0->AddItem(L0, f_1cf_a1_i("Hammer"), 0, 1);
			}
		}
	}
	if (a1 >= 5) {
		int L2;
		@irand(L2, 4);
		if (L2 == 0) {
			int L3;
			@irand(L3, 4);
			L3 = L3 + 1;
			a0->AddItem(L0, f_1cf_a1_i("revolver_ammo"), 0, L3);
		} else {
			if (L2 == 1) {
				int L4;
				@irand(L4, 4);
				L4 = L4 + 1;
				a0->AddItem(L0, f_1cf_a1_i("rifle_ammo"), 0, L4);
			} else {
				if (L2 == 2) {
					int L5;
					@irand(L5, 50);
					L5 = L5 + 1;
					a0->AddItem(L0, f_1cf_a1_i("ognemet_ammo"), 0, L5);
				} else {
					a0->AddItem(L0, f_1cf_a1_i("Revolver"), 0, 1);
				}
			}
		}
	}
	if (a1 >= 7) {
		int L6;
		@irand(L6, 8);
		if (L6 == 0) {
			a0->AddItem(L0, f_1cf_a1_i("Rifle"), 0, 1);
		} else {
			if (L6 == 1) {
				a0->AddItem(L0, f_1cf_a1_i("bottle_weapon"), 0, 1);
			}
		}
	}
	return true;
}

bool f_290_a2_b(object a0, int a1)
{
	bool L0;
	if (a1 < 2) {
		return true;
	}
	if (a1 >= 2) {
		int L1;
		@irand(L1, 3);
		if (L1 == 0) {
			a0->AddItem(L0, f_1cf_a1_i("glove"), 0, 1);
		} else {
			if (L1 == 1) {
				a0->AddItem(L0, f_1cf_a1_i("drapery"), 0, 1);
			} else {
				a0->AddItem(L0, f_1cf_a1_i("balahon"), 0, 1);
			}
		}
	}
	if (a1 >= 4) {
		int L2;
		@irand(L2, 7);
		if (L2 == 0) {
			a0->AddItem(L0, f_1cf_a1_i("mask"), 0, 1);
		} else {
			if (L2 == 1) {
				a0->AddItem(L0, f_1cf_a1_i("cloak_repel"), 0, 1);
			} else {
				if (L2 == 2) {
					a0->AddItem(L0, f_1cf_a1_i("raincoat_repel"), 0, 1);
				}
			}
		}
		if (L2 == 3) {
			a0->AddItem(L0, f_1cf_a1_i("halfboot_repel"), 0, 1);
		}
		if (L2 == 4) {
			a0->AddItem(L0, f_1cf_a1_i("boot_repel"), 0, 1);
		}
		if (L2 == 5) {
			a0->AddItem(L0, f_1cf_a1_i("tihohody"), 0, 1);
		} else {
			a0->AddItem(L0, f_1cf_a1_i("glove_disp"), 0, 1);
		}
	}
	if (a1 >= 9) {
		int L3;
		@irand(L3, 2);
		if (L3 == 0) {
			a0->AddItem(L0, f_1cf_a1_i("boot_army"), 0, 1);
		} else {
			a0->AddItem(L0, f_1cf_a1_i("glove_army"), 0, 1);
		}
	}
	return true;
}

bool f_32b_a2_b(object a0, int a1)
{
	bool L0;
	if (a1 < 2) {
		return true;
	}
	if (a1 >= 2) {
		int L1;
		@irand(L1, 4);
		if (L1 == 0) {
			a0->AddItem(L0, f_1cf_a1_i("alpha_pills"), 0, 1);
		} else {
			if (L1 == 1) {
				a0->AddItem(L0, f_1cf_a1_i("tvirin"), 0, 1);
			} else {
				if (L1 == 2) {
					a0->AddItem(L0, f_1cf_a1_i("bandage"), 0, 1);
				} else {
					a0->AddItem(L0, f_1cf_a1_i("tourniquet"), 0, 1);
				}
			}
		}
	}
	if (a1 >= 4) {
		int L2;
		@irand(L2, 6);
		if (L2 == 0) {
			a0->AddItem(L0, f_1cf_a1_i("beta_pills"), 0, 1);
		} else {
			if (L2 == 1) {
				a0->AddItem(L0, f_1cf_a1_i("neomicin"), 0, 1);
			} else {
				if (L2 == 2) {
					a0->AddItem(L0, f_1cf_a1_i("novocaine"), 0, 1);
				} else {
					if (L2 == 3) {
						a0->AddItem(L0, f_1cf_a1_i("black_vaccine"), 0, 1);
					} else {
						if (L2 == 4) {
							a0->AddItem(L0, f_1cf_a1_i("etorfin"), 0, 1);
						} else {
							a0->AddItem(L0, f_1cf_a1_i("meradorm"), 0, 1);
						}
					}
				}
			}
		}
	}
	if (a1 >= 5) {
		int L3;
		@irand(L3, 8);
		if (L3 == 0) {
			a0->AddItem(L0, f_1cf_a1_i("gamma_pills"), 0, 1);
		} else {
			if (L3 == 1) {
				a0->AddItem(L0, f_1cf_a1_i("delta_pills"), 0, 1);
			} else {
				if (L3 == 2) {
					a0->AddItem(L0, f_1cf_a1_i("monomicin"), 0, 1);
				} else {
					if (L3 == 3) {
						a0->AddItem(L0, f_1cf_a1_i("morfin"), 0, 1);
					} else {
						if (L3 == 4) {
							a0->AddItem(L0, f_1cf_a1_i("packet"), 0, 1);
						} else {
							if (L3 == 5) {
								a0->AddItem(L0, f_1cf_a1_i("blue_vaccine"), 0, 1);
							} else {
								if (L3 == 6) {
									a0->AddItem(L0, f_1cf_a1_i("etorfin"), 0, 1);
								} else {
									a0->AddItem(L0, f_1cf_a1_i("feromicin"), 0, 1);
								}
							}
						}
					}
				}
			}
		}
	}
	return true;
}

bool f_411_a2_b(object a0, int a1)
{
	bool L0;
	int L1;
	int L2;
	if (a1 < 3) {
		L2 = 2;
	} else {
		if (a1 < 5) {
			L2 = 3;
		} else {
			if (a1 < 7) {
				L2 = 3;
			} else {
				if (a1 < 7) {
					L2 = 4;
				} else {
					L2 = 5;
				}
			}
		}
	}
	@irand(L1, L2);
	if (!L1) {
		a0->AddItem(L0, f_1cf_a1_i("lemon"), 0, 1);
	}
	@irand(L1, L2);
	if (!L1) {
		a0->AddItem(L0, f_1cf_a1_i("rusk"), 0, 1);
	}
	@irand(L1, L2);
	if (!L1) {
		a0->AddItem(L0, f_1cf_a1_i("dried_fish"), 0, 1);
	}
	@irand(L1, L2);
	if (!L1) {
		a0->AddItem(L0, f_1cf_a1_i("egg"), 0, 1);
	}
	@irand(L1, L2);
	if (!L1) {
		a0->AddItem(L0, f_1cf_a1_i("vegetables"), 0, 1);
	}
	@irand(L1, L2);
	if (!L1) {
		a0->AddItem(L0, f_1cf_a1_i("milk"), 0, 1);
	}
	@irand(L1, L2);
	if (!L1) {
		a0->AddItem(L0, f_1cf_a1_i("dried_meat"), 0, 1);
	}
	@irand(L1, L2);
	if (!L1) {
		a0->AddItem(L0, f_1cf_a1_i("smoked_meat"), 0, 1);
	}
	@irand(L1, L2);
	if (!L1) {
		a0->AddItem(L0, f_1cf_a1_i("fresh_fish"), 0, 1);
	}
	@irand(L1, L2);
	if (!L1) {
		a0->AddItem(L0, f_1cf_a1_i("fresh_meat"), 0, 1);
	}
	@irand(L1, L2);
	if (!L1) {
		a0->AddItem(L0, f_1cf_a1_i("bread"), 0, 1);
	}
	a0->AddItem(L0, f_1cf_a1_i("bottle_water"), 0, 1);
	@irand(L1, 20);
	if (L1 == 0) {
		a0->AddItem(L0, f_1cf_a1_i("funduk"), 0, 1);
	} else {
		if (L1 == 1) {
			a0->AddItem(L0, f_1cf_a1_i("peanut"), 0, 1);
		}
	}
	if (L1 == 2) {
		a0->AddItem(L0, f_1cf_a1_i("walnut"), 0, 1);
	}
	return true;
}

bool f_4da_a2_b(object a0, int a1)
{
	bool L0;
	int L1;
	@irand(L1, 5);
	if (L1 == 0) {
		a0->AddItem(L0, f_1cf_a1_i("hook"), 0, 1);
	}
	@irand(L1, 5);
	if (L1 == 0) {
		a0->AddItem(L0, f_1cf_a1_i("needle"), 0, 1);
	}
	@irand(L1, 100);
	if (L1 != 0) {
		a0->AddItem(L0, f_1cf_a1_i("kerosene"), 0, L1);
	}
	return true;
}

void f_506_a0_v(void)
{
	int L0;
	L0 = f_1c6_a0_i();
	@ClearSubContainer(0);
	if (g0 != 0) {
		f_1d4_a3_b(f_19c_a0_o(), L0, 1);
	}
	if (g1 != 0) {
		f_1d4_a3_b(f_19c_a0_o(), L0, 0);
	}
	if (g2 != 0) {
		f_1d4_a3_b(f_19c_a0_o(), L0, 3);
	}
	if (g3 != 0) {
		f_1d4_a3_b(f_19c_a0_o(), L0, 2);
	}
	if (g4 != 0) {
		f_1d4_a3_b(f_19c_a0_o(), L0, 4);
	}
}

void f_550_a1_v(object a0)
{
	if (!f_168_a1_b(a0)) {
		return;
	}
	t1{a0};
	f_198_a1_v(a0);
}

