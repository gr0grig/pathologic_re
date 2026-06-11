event OnDialogReply 11;
event OnUse 0;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnUnload 6;
event OnTimer 7;
event OnDeath 41;
event OnCollision 10;
event OnHit 22;
event OnPropertyChange 16;
event OnTrigger 26;
event OnLoad 5;
event OnHit2 43;

var object g0;
var bool g1;
var int g2;
var object g3;
var object g4;
var int g5;

task t0
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_c4a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e73_a0_i());
		L0->SetNPCDescription(f_e71_a0_i());
		L0->SetPhoto(f_e75_a0_s());
		L0->SetPhoto2(f_e77_a0_s());
		L0->SetPlayerName(f_e24_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_c8e_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t1
{
	var object tv0;
	var object tv1;
	var string tv2;
	var bool tv3;

	void init(object a0, object a1)
	{
		tv0 = a1;
		tv1 = a0;
		tv3 = false;
		while (1) {
			if (f_d8a_a1_b(tv1)) {
				f_d3c_a2_v(tv1, tv0);
				f_c0_a1_v("Neutral");
				tv0->SetMessage(530322);
				tv0->ClearReplies();
				tv0->AddReply(530323, 31711, 31710);
				tv0->AddReply(531020, 32350, 32349);
				break;
			}
			if (f_d96_a1_b(tv1)) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(530326);
				tv0->ClearReplies();
				tv0->AddReply(530327, -1, 31714);
				break;
			}
			f_c0_a1_v("Neutral");
			tv0->SetMessage(530270);
			tv0->ClearReplies();
			tv0->AddReply(530271, -1, 31661);
			tv0->AddReply(530273, -1, 31663);
			tv0->AddReply(530274, -1, 31664);
			tv0->AddReply(530272, -1, 31662);
			break;
			return;
		}
		if (f_e79_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c9f_a1_v(tv2);
			}
		} else {
			@PlayAnimation("all", "idle");
			for (; ; ) {
				@WaitForAnimEnd();
				if (tv3) {
					break;
				}
				@PlayAnimation("all", "idle");
			}
		}
	}

	void f_c0_a1_v(string a0)
	{
		if (!f_e79_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_ca6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_cb7_a0_v();
			if (a1 == 31712) {
				f_d2d_a2_v(tv1, tv0);
				f_d42_a2_v(tv1, tv0);
				f_d7a_a2_v(tv1, tv0);
			}
			if (a1 == 31714) {
				f_d70_a2_v(tv1, tv0);
				f_d75_a2_v(tv1, tv0);
			}
			if (a1 == 31661) {
				f_d32_a2_v(tv1, tv0);
			}
			if (a1 == 31663) {
				f_d2d_a2_v(tv1, tv0);
			}
			if (a1 == 31664) {
				f_d37_a2_v(tv1, tv0);
			}
			if (a0 == 31709) {
				if (f_d8a_a1_b(tv1)) {
					f_d3c_a2_v(tv1, tv0);
					f_c0_a1_v("Neutral");
					tv0->SetMessage(530322);
					tv0->ClearReplies();
					tv0->AddReply(530323, 31711, 31710);
					tv0->AddReply(531020, 32350, 32349);
					return;
				}
				if (f_d96_a1_b(tv1)) {
					f_c0_a1_v("Neutral");
					tv0->SetMessage(530326);
					tv0->ClearReplies();
					tv0->AddReply(530327, -1, 31714);
					return;
				}
				f_c0_a1_v("Neutral");
				tv0->SetMessage(530270);
				tv0->ClearReplies();
				tv0->AddReply(530271, -1, 31661);
				tv0->AddReply(530273, -1, 31663);
				tv0->AddReply(530274, -1, 31664);
				tv0->AddReply(530272, -1, 31662);
				return;
			}
			if (a0 == 32350) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(531021);
				tv0->ClearReplies();
				tv0->AddReply(531023, 31711, 32352);
				return;
			}
			if (a0 == 31711) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(530324);
				tv0->ClearReplies();
				tv0->AddReply(530325, -1, 31712);
				return;
			}
			tv3 = true;
			if (f_e79_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t2
{
	void init(void)
	{
		g2 = 0;
		g5 = 1;
		while (true) {
			if (0 == g2) {
				t15{};
				if (!f_eb8_a1_b(g5)) {
					f_eb8_a1_b(2);
				}
			} else {
				if (1 == g2) {
					t3{};
					if (1 == g2) {
						t9{};
					}
				} else {
					if (2 == g2) {
						t13{};
					} else {
						if (3 == g2) {
							t3{};
							if (3 == g2) {
								t10{};
							}
						} else {
							if (8 == g2) {
								t6{};
							} else {
								if (4 == g2) {
									t7{};
								} else {
									if (5 == g2) {
										if (!t11{}) {
											if (5 == g2) {
												t12{};
												if (5 == g2) {
													f_eb8_a1_b(1);
												}
											}
										}
										if (5 == g2) {
											t12{};
											if (5 == g2) {
												f_eb8_a1_b(2);
											}
										}
									} else {
										if (6 == g2) {
											t5{g3};
										} else {
											if (7 == g2) {
												t8{g4};
												if (7 == g2) {
													if (!f_b9c_a1_b(g4) || f_b5a_a1_f(g4) > 1000000.0) {
														if (f_b9c_a1_b(g4)) {
															t4{g4};
															if (7 == g2) {
																t12{};
																if (7 == g2) {
																	f_eb8_a1_b(1);
																}
															}
														}
													}
												}
											} else {
												@Trace("Unknown FSM state");
											}
										}
									}
								}
							}
						}
					}
				}
			}
			@sync();
		}
	}
}

task t3
{
	void init(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return;
		}
		f_bbe_a1_b(L0);
	}

	void OnUse(object a0)
	{
		f_f2b_a1_b(a0);
	}

	void OnAttacked(object a0)
	{
		if (f_b62_a1_b(a0)) {
			f_eb8_a1_b(4);
		} else {
			f_ef6_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (!f_b9c_a1_b(a1) || f_b5a_a1_f(a1) > 1000000.0) {
			return;
		}
		f_f01_a1_v(a1);
	}

	void OnUnload(void)
	{
		@Stop();
		@StopGroup0();
		f_eb8_a1_b(0);
	}
}

task t4
{
	void init(object a0)
	{
		if (!a0) {
			return;
		}
		f_bbe_a1_b(a0);
	}

	void OnUse(object a0)
	{
		f_f2b_a1_b(a0);
	}

	void OnAttacked(object a0)
	{
		if (f_b62_a1_b(a0)) {
			f_eb8_a1_b(4);
		} else {
			f_ef6_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (!f_b9c_a1_b(a1) || f_b5a_a1_f(a1) > 1000000.0) {
			return;
		}
		f_f01_a1_v(a1);
	}

	void OnUnload(void)
	{
		@Stop();
		@StopGroup0();
		f_eb8_a1_b(0);
	}
}

task t5
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void init(object a0)
	{
		if (!f_b9c_a1_b(a0)) {
			f_eb8_a1_b(1);
			return;
		}
		f_33c_a1_v(a0);
	}

	void OnUnload(void)
	{
		f_3b9_a0_v();
		f_eb8_a1_b(0);
	}

	Vector f_31e_a1_V(float a0)
	{
		Vector L0;
		Vector L1;
		Vector L2;
		Vector L3;
		Vector L4;
		float L5;
		@GetPosition(L0);
		tv0->GetPosition(L1);
		@GetDirection(L2);
		L3 = f_ced_a1_V(f_ced_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_33c_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_31e_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_31e_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_b4e_a0_V() + L0;
		@SetTimer(120, 0.5);
		tv2 = false;
		do {
			bool L2;
			@MovePoint(tv1, 1, L2);
			if (L2) {
				Vector L3;
				float L4;
				if (tv0 == null) {
					break;
					continue;
				}
				L3 = f_31e_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_b4e_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void OnTimer(int a0)
	{
		if (a0 != 120) {
			return;
		}
		if (tv0 == null) {
			@Stop();
			@KillTimer(1);
			tv2 = true;
		} else {
			Vector L0;
			float L1;
			Vector L2;
			float L3;
			@GetDirection(L0);
			@FindDirLength(L1, L0, 7000.0);
			L2 = f_31e_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_3c9_a0_b())) {
				@Stop();
				tv1 = f_b4e_a0_V() + L2;
			}
		}
	}

	void f_3b9_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_3b9_a0_v();
		global.OnDeath(a0);
	}

	bool f_3c9_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_b53_a1_V(tv0);
		return f_cf7_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t6
{
	var object tv0;
	var Vector tv1;
	var bool tv2;
	var bool tv3;

	void init(void)
	{
		while (true) {
			object L0;
			@FindActor(L0, "player");
			if (!f_b9c_a1_b(L0)) {
				@Sleep(3);
				if (tv3) {
					break;
				} else {
					continue;
				}
			}
			f_420_a1_v(L0);
			if (tv3) {
				break;
			}
		}
	}

	void OnUnload(void)
	{
		@StopGroup0();
		tv3 = true;
		f_49d_a0_v();
		f_eb8_a1_b(0);
	}

	Vector f_402_a1_V(float a0)
	{
		Vector L0;
		Vector L1;
		Vector L2;
		Vector L3;
		Vector L4;
		float L5;
		@GetPosition(L0);
		tv0->GetPosition(L1);
		@GetDirection(L2);
		L3 = f_ced_a1_V(f_ced_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_420_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_402_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_402_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_b4e_a0_V() + L0;
		@SetTimer(120, 0.5);
		tv2 = false;
		do {
			bool L2;
			@MovePoint(tv1, 1, L2);
			if (L2) {
				Vector L3;
				float L4;
				if (tv0 == null) {
					break;
					continue;
				}
				L3 = f_402_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_b4e_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void OnTimer(int a0)
	{
		if (a0 != 120) {
			return;
		}
		if (tv0 == null) {
			@Stop();
			@KillTimer(1);
			tv2 = true;
		} else {
			Vector L0;
			float L1;
			Vector L2;
			float L3;
			@GetDirection(L0);
			@FindDirLength(L1, L0, 7000.0);
			L2 = f_402_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_4ad_a0_b())) {
				@Stop();
				tv1 = f_b4e_a0_V() + L2;
			}
		}
	}

	void f_49d_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_49d_a0_v();
		global.OnDeath(a0);
	}

	bool f_4ad_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_b53_a1_V(tv0);
		return f_cf7_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t7
{
	var object tv0;
	var Vector tv1;
	var bool tv2;
	var bool tv3;

	void init(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!f_b9c_a1_b(L0)) {
			f_eb8_a1_b(1);
			return;
		}
		@SetTimer(0, 5);
		f_524_a1_v(L0);
		@KillTimer(0);
	}

	void OnTimer(int a0)
	{
		if (a0 == 0) {
			if (!tv3) {
				f_5a1_a0_v();
				f_eb8_a1_b(1);
			} else {
				tv3 = false;
			}
			return;
		}
		f_56d_a1_v(a0);
	}

	void OnAttacked(object a0)
	{
		if (f_b62_a1_b(a0)) {
			tv3 = true;
		} else {
			f_5a1_a0_v();
			f_ef6_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_5a1_a0_v();
		f_eb8_a1_b(0);
	}

	Vector f_506_a1_V(float a0)
	{
		Vector L0;
		Vector L1;
		Vector L2;
		Vector L3;
		Vector L4;
		float L5;
		@GetPosition(L0);
		tv0->GetPosition(L1);
		@GetDirection(L2);
		L3 = f_ced_a1_V(f_ced_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_524_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_506_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_506_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_b4e_a0_V() + L0;
		@SetTimer(120, 0.5);
		tv2 = false;
		do {
			bool L2;
			@MovePoint(tv1, 1, L2);
			if (L2) {
				Vector L3;
				float L4;
				if (tv0 == null) {
					break;
					continue;
				}
				L3 = f_506_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_b4e_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void f_56d_a1_v(int a0)
	{
		if (a0 != 120) {
			return;
		}
		if (tv0 == null) {
			@Stop();
			@KillTimer(1);
			tv2 = true;
		} else {
			Vector L0;
			float L1;
			Vector L2;
			float L3;
			@GetDirection(L0);
			@FindDirLength(L1, L0, 7000.0);
			L2 = f_506_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_5b1_a0_b())) {
				@Stop();
				tv1 = f_b4e_a0_V() + L2;
			}
		}
	}

	void f_5a1_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_5a1_a0_v();
		global.OnDeath(a0);
	}

	bool f_5b1_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_b53_a1_V(tv0);
		return f_cf7_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t8
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void init(object a0)
	{
		@SetTimer(1, 3);
		f_61b_a1_v(a0);
		@KillTimer(1);
	}

	void OnTimer(int a0)
	{
		if (a0 == 1) {
			f_698_a0_v();
			f_eb8_a1_b(1);
			return;
		}
		f_664_a1_v(a0);
	}

	void OnAttacked(object a0)
	{
		if (f_b62_a1_b(a0)) {
			f_698_a0_v();
			f_eb8_a1_b(4);
		} else {
			f_698_a0_v();
			f_ef6_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_698_a0_v();
		f_eb8_a1_b(0);
	}

	Vector f_5fd_a1_V(float a0)
	{
		Vector L0;
		Vector L1;
		Vector L2;
		Vector L3;
		Vector L4;
		float L5;
		@GetPosition(L0);
		tv0->GetPosition(L1);
		@GetDirection(L2);
		L3 = f_ced_a1_V(f_ced_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_61b_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_5fd_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_5fd_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_b4e_a0_V() + L0;
		@SetTimer(120, 0.5);
		tv2 = false;
		do {
			bool L2;
			@MovePoint(tv1, 1, L2);
			if (L2) {
				Vector L3;
				float L4;
				if (tv0 == null) {
					break;
					continue;
				}
				L3 = f_5fd_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_b4e_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void f_664_a1_v(int a0)
	{
		if (a0 != 120) {
			return;
		}
		if (tv0 == null) {
			@Stop();
			@KillTimer(1);
			tv2 = true;
		} else {
			Vector L0;
			float L1;
			Vector L2;
			float L3;
			@GetDirection(L0);
			@FindDirLength(L1, L0, 7000.0);
			L2 = f_5fd_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_6a8_a0_b())) {
				@Stop();
				tv1 = f_b4e_a0_V() + L2;
			}
		}
	}

	void f_698_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_698_a0_v();
		global.OnDeath(a0);
	}

	bool f_6a8_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_b53_a1_V(tv0);
		return f_cf7_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t9
{
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;

	void init(void)
	{
		f_700_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		f_741_a0_v();
		f_f2b_a1_b(a0);
	}

	void OnAttacked(object a0)
	{
		if (f_b62_a1_b(a0)) {
			f_741_a0_v();
			f_eb8_a1_b(4);
		} else {
			f_741_a0_v();
			f_ef6_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (!f_b9c_a1_b(a1) || f_b5a_a1_f(a1) > 1000000.0) {
			return;
		}
		f_741_a0_v();
		f_f01_a1_v(a1);
	}

	void OnUnload(void)
	{
		f_741_a0_v();
		f_eb8_a1_b(0);
	}

	void f_700_a2_v(float a0, float a1)
	{
		if (!f_c45_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_74f_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_71b_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_b5a_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_71b_a0_b()) {
				if (!tv2) {
					f_cac_a1_v(tv4);
					tv2 = true;
				}
			} else {
				if (tv2) {
					@UnlookAsync("head");
					tv2 = false;
				}
			}
		}
	}

	void f_741_a0_v(void)
	{
		f_7a0_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}

	void f_74f_a0_v(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_c45_a0_b()) {
			return;
		}
		L0 = f_d1c_a0_i();
		for (L1 = 0; L1 < 5 && f_c45_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_d15_a1_s(L3));
					@WaitForAnimEnd(L4);
					if (!L4) {
						break;
					}
				}
			} else {
				if (L2 == 1) {
					float L5;
					bool L6;
					@rand(L5, 4);
					@Sleep(L5 + 1, L6);
					if (!L6) {
						break;
					}
				} else {
					if (L1) {
						break;
					}
				}
			}
			if (!f_79e_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_79e_a0_b(void)
	{
		return true;
	}

	void f_7a0_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t10
{
	var bool tv0;

	void init(void)
	{
		object L0;
		float L1;
		@SetTimer(2, 1);
		@FindActor(L0, "player");
		@rand(L1, 4);
		if (L1 > 1) {
			f_cac_a1_v(L0);
			@Sleep(L1 + 2);
			@UnlookAsync("head");
		} else {
			@Sleep(L1 + 2);
		}
		if (!tv0) {
			f_eb8_a1_b(2);
		}
		@KillTimer(2);
	}

	void f_7ce_a0_v(void)
	{
		@StopGroup0();
	}

	void OnTimer(int a0)
	{
		if (a0 != 2) {
			return;
		}
		if (!f_f67_a1_b(f_ce7_a0_o())) {
			f_7ce_a0_v();
		}
	}

	void OnUse(object a0)
	{
		f_7ce_a0_v();
		tv0 = f_f2b_a1_b(a0);
	}

	void OnAttacked(object a0)
	{
		if (f_b62_a1_b(a0)) {
			f_7ce_a0_v();
			f_eb8_a1_b(4);
			tv0 = true;
		} else {
			f_7ce_a0_v();
			tv0 = true;
			f_ef6_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (!f_b9c_a1_b(a1) || f_b5a_a1_f(a1) > 1000000.0) {
			return;
		}
		f_7ce_a0_v();
		tv0 = true;
		f_f01_a1_v(a1);
	}

	void OnUnload(void)
	{
		f_7ce_a0_v();
		tv0 = true;
		f_eb8_a1_b(0);
	}
}

task t11
{
	var bool tv0;

	bool init(void)
	{
		int L0;
		Vector L1;
		Vector L2;
		bool L3;
		object L4;
		bool L5;
		L0 = f_e7b_a0_i();
		if (L0 == -1 || f_e98_a1_b(L0)) {
			f_eb8_a1_b(1);
			return false;
		}
		@GetScene(L4);
		L4->GetLocator("pt_b9q03_bonfire" + L0, L3, L1, L2);
		L1.y += 50;
		L5 = f_8a2_a6_b(L1, L2, 100, 3000, false, true);
		if (L5) {
			f_ea0_a1_v(L0);
		}
		return L5;
	}

	void OnUse(object a0)
	{
		f_91e_a0_v();
		f_f2b_a1_b(a0);
	}

	void OnAttacked(object a0)
	{
		if (f_b62_a1_b(a0)) {
			f_91e_a0_v();
			f_eb8_a1_b(4);
		} else {
			f_91e_a0_v();
			f_ef6_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (!f_b9c_a1_b(a1) || f_b5a_a1_f(a1) > 1000000.0) {
			return;
		}
		f_91e_a0_v();
		f_f01_a1_v(a1);
	}

	void OnUnload(void)
	{
		f_91e_a0_v();
		f_eb8_a1_b(0);
	}

	bool f_8a0_a0_b(void)
	{
		return true;
	}

	bool f_8a2_a6_b(Vector a0, Vector a1, float a2, float a3, bool a4, bool a5)
	{
		bool L0;
		bool L1;
		tv0 = false;
		L1 = a5;
		for (; ; ) {
			object L2;
			Vector L3;
			Vector L4;
			Vector L5;
			float L6;
			if (!f_8a0_a0_b()) {
				return false;
			}
			L3 = a0;
			@GetPosition(L4);
			L5 = L3 - L4;
			L6 = L5 | L5;
			if (a3 > 0 && L6 > a3 * a3) {
				@Stop();
				return false;
			}
			if (L6 > a2 * a2) {
				object L7;
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
					@FollowPath(L2, a4, L0, f_92e_a0_s(), f_930_a0_s());
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
		if (!tv0) {
			@RotateAsync(a1.x, a1.z);
		}
		return !tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_8a0_a0_b()) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_91e_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_91e_a0_v();
		global.OnDeath(a0);
	}

	string f_92e_a0_s(void)
	{
		return "walk";
	}

	string f_930_a0_s(void)
	{
		return "run";
	}
}

task t12
{
	var bool tv0;

	void init(void)
	{
		f_971_a1_v("hunt");
	}

	void OnAttacked(object a0)
	{
		if (f_b62_a1_b(a0)) {
			f_986_a0_v();
			f_eb8_a1_b(4);
		} else {
			f_986_a0_v();
			f_ef6_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (!f_b9c_a1_b(a1) || f_b5a_a1_f(a1) > 1000000.0) {
			return;
		}
		f_986_a0_v();
		f_f01_a1_v(a1);
	}

	void OnUnload(void)
	{
		f_986_a0_v();
		tv0 = true;
		f_eb8_a1_b(0);
	}

	void f_971_a1_v(string a0)
	{
		bool L0;
		bool L1;
		@WaitForAnimEnd();
		if (!f_c45_a0_b()) {
			return;
		}
		@HasAnimation(L0, "all", a0);
		if (!L0) {
			return;
		}
		@PlayAnimation("all", a0);
		@WaitForAnimEnd(L1);
	}

	void f_986_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t13
{
	var bool tv0;
	var object tv1;
	var bool tv2;

	void init(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!f_b9c_a1_b(L0)) {
			f_eb8_a1_b(1);
			return;
		}
		if (f_9ef_a5_b(L0, 250.0, 6000, true, true)) {
			if (!tv2) {
				f_eb8_a1_b(3);
			}
		}
	}

	void OnUse(object a0)
	{
		f_a6b_a0_v();
		tv2 = f_f2b_a1_b(a0);
	}

	void OnAttacked(object a0)
	{
		if (f_b62_a1_b(a0)) {
			f_a6b_a0_v();
			f_eb8_a1_b(4);
		} else {
			f_a6b_a0_v();
			f_ef6_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (!f_b9c_a1_b(a1) || f_b5a_a1_f(a1) > 1000000.0) {
			return;
		}
		f_a6b_a0_v();
		f_f01_a1_v(a1);
	}

	void OnUnload(void)
	{
		f_a6b_a0_v();
		tv2 = true;
		f_eb8_a1_b(0);
	}

	bool f_9ef_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_a7b_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_a82_a0_s(), f_a84_a0_s());
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
		if (!f_a7b_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_a6b_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_a6b_a0_v();
		global.OnDeath(a0);
	}

	bool f_a7b_a1_b(object a0)
	{
		return f_b9c_a1_b(a0);
	}

	string f_a82_a0_s(void)
	{
		return "walk";
	}

	string f_a84_a0_s(void)
	{
		return "run";
	}
}

task t14
{
	void init(object a0)
	{
		f_e59_a0_v();
		f_a97_a1_v(a0);
	}

	void OnUnload(void)
	{
		@RemoveActor(f_ce7_a0_o());
		@Hold();
	}

	void f_a97_a1_v(object a0)
	{
		disable OnUse;
		f_ab0_a1_v(a0);
		@SetRTEnvelope(50, 40);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_e3b_a1_v(a0);
		}
	}

	void f_ab0_a1_v(object a0)
	{
		if (a0 == null) {
			f_b0b_a1_v("fdie");
		} else {
			Vector L0;
			a0->GetPosition(L0);
			Vector L1;
			@GetPosition(L1);
			Vector L2;
			@GetDirection(L2);
			Vector L3;
			L3 = L1 - L0;
			string L4;
			if (L3.x * L2.x + L3.z * L2.z >= 0) {
				L4 = "fdie";
			} else {
				L4 = "bdie";
			}
			@RemoveRTEnvelope();
			@SetDeathState();
			@Stop();
			@StopAsync();
			object L5;
			L5 = a0;
			if (a0->FuncExist("GetScriptProperty", 2)) {
				bool L6;
				a0->HasScriptProperty(L6, "Owner");
				if (L6) {
					a0->GetScriptProperty(L5, "Owner");
					if (L5 == null) {
						L5 = a0;
					}
				}
			}
			bool L7;
			if (L5->FuncExist("@GetEyesHeight", 1)) {
				float L8;
				Vector L9;
				L5->GetEyesHeight(L8);
				L9 = [0.0, 0.0, 0.0];
				L9.y = L8;
				@LookAsync(a0, "head", L9);
				L7 = true;
			} else {
				L7 = false;
			}
			f_cbe_a1_v(L4);
			@PlayAnimation("all", L4);
			@WaitForAnimEnd();
			if (L7) {
				@StopAsync();
				@UnlookAsync("head");
			}
			@LockAnimationEnd("all", L4);
			@RemoveEnvelope();
		}
	}

	void f_b0b_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_cbe_a1_v(a0);
		@PlayAnimation("all", a0);
		@WaitForAnimEnd();
		@LockAnimationEnd("all", a0);
		@RemoveEnvelope();
	}

	void OnHit(object a0, int a1, float a2, float a3)
	{
	}

	void OnPropertyChange(object a0, string a1)
	{
	}

	void OnDeath(object a0)
	{
	}
}

task t15
{
	void init(void)
	{
		if (g1) {
			@RemoveActor(f_ce7_a0_o());
			@Hold();
		}
		while (!f_c45_a0_b()) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			@RemoveActor(f_ce7_a0_o());
			@Hold();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

Vector f_b4e_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_b53_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_b5a_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_b62_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_b67_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_b73_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_b78_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_b73_a1_b(a0)) {
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

bool f_b9c_a1_b(object a0)
{
	int L0;
	if (!f_b78_a1_b(a0)) {
		return false;
	}
	if (!f_b67_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

bool f_bb4_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_bbe_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_bb4_a1_b(L0);
}

void f_bc7_a1_v(object a0)
{
	bool L0;
	int L1;
	Vector L2;
	Vector L3;
	Vector L4;
	Vector L5;
	string L6;
	if (a0 == null) {
		return;
	}
	@IsDead(L0);
	if (L0) {
		return;
	}
	@GetSecondaryAnimationType(L1);
	if (L1 < 0) {
		return;
	}
	a0->GetPosition(L2);
	@GetPosition(L3);
	@GetDirection(L4);
	L5 = L3 - L2;
	if (L5.x * L4.x + L5.z * L4.z >= 0) {
		L6 = "fhit";
	} else {
		L6 = "bhit";
	}
	@FadeSecondaryAnimation("hit_react", L6 + "1", L6 + "2", -10);
}

void f_bf3_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_ced_a1_V(f_b53_a1_V(a0));
		object L1;
		@CreateVectorVector(L1);
		int L2;
		for (L2 = 1; ; L2++) {
			bool L3;
			Vector L4;
			Vector L5;
			@GetGeometryLocator("hit" + L2, L3, L4, L5);
			if (!L3) {
				break;
			}
			if ((L5 | L0) >= 0.7071067690849304) {
				L1->add(L4);
			}
		}
		int L6;
		L1->size(L6);
		if (L6) {
			int L7;
			Vector L8;
			@irand(L7, L6);
			L1->get(L8, L7);
			f_c37_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_bc7_a1_v(a0);
}

void f_c37_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_bc7_a1_v(a0);
}

bool f_c45_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_c4a_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_ced_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_e79_a0_b()) {
	} else {
		bool L8;
		@HasAnimationTrack(L8, "head");
		if (L8) {
			@LookAsyncCamera("head");
		}
	}
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_c8e_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_e79_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_c9f_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_ca6_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_cac_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_cb7_a0_v(void)
{
	if (f_e79_a0_b()) {
		@lshStopSpeech();
	}
}

void f_cbe_a1_v(string a0)
{
	bool L0;
	@IsExisting3DSound(L0, a0);
	if (!L0) {
		int L1;
		for (L1 = 0; ; L1++) {
			bool L2;
			@IsExisting3DSound(L2, a0 + (L1 + 1));
			if (!L2) {
				break;
			}
		}
		if (!L1) {
			return;
		}
		int L3;
		@irand(L3, L1);
		a0 = a0 + (L3 + 1);
	}
	bool L4;
	@Is3DSoundLoaded(L4, a0);
	if (L4) {
		float L5;
		Vector L6;
		Vector L7;
		@GetEyesHeight(L5);
		@GetDirection(L6);
		L7 = L6 * 50;
		L7.y += L5;
		@PlayGlobalSound(a0, L7);
	}
}

object f_ce7_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_ced_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_cf7_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

int f_cff_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_d04_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_d10_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

string f_d15_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_d1c_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_d15_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_d2d_a2_v(object a0, object a1)
{
	a1->SetReturnValue(2);
}

void f_d32_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1);
}

void f_d37_a2_v(object a0, object a1)
{
	a1->SetReturnValue(3);
}

void f_d3c_a2_v(object a0, object a1)
{
	@SetVariable("oob9BoyFollower1", 1);
}

void f_d42_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_df2_a0_o();
	L0->AddMark("b9q03Bonfire1", "pt_bonfire1", 0, 531507, f_d10_a0_f());
	L0->AddMark("b9q03Bonfire2", "pt_bonfire2", 0, 531508, f_d10_a0_f());
	L0->AddMark("b9q03Bonfire3", "pt_bonfire3", 0, 531509, f_d10_a0_f());
	L0->AddMark("b9q03Bonfire4", "pt_bonfire4", 0, 531510, f_d10_a0_f());
	f_daf_a0_v();
}

void f_d70_a2_v(object a0, object a1)
{
	a1->SetReturnValue(4);
}

void f_d75_a2_v(object a0, object a1)
{
	f_dbc_a0_v();
}

void f_d7a_a2_v(object a0, object a1)
{
	f_e03_a3_v(f_df2_a0_o(), "pt_bonfire1", 2);
	a1->ShowMap(f_df2_a0_o());
}

bool f_d8a_a1_b(object a0)
{
	if (f_cff_a1_i("oob9BoyFollower1") == 0) {
		return true;
	}
	return false;
}

bool f_d96_a1_b(object a0)
{
	if (f_cff_a1_i("b9q03BonefiresCount") == 4) {
		return true;
	}
	return false;
}

void f_da2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 543, 2, 530355);
	f_dd6_a2_b(L0, 532);
}

void f_daf_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 534, 2, 530346);
	f_dd6_a2_b(L0, 532);
}

void f_dbc_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 535, 2, 530347);
	f_dd6_a2_b(L0, 532);
}

object f_dc9_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_dd6_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_dc9_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SendWorldWndMessage(7);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

object f_df2_a0_o(void)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("Can't find main outdoor scene");
		L1 = null;
		return L1;
	}
	L0->GetMap(L1);
	return L1;
}

void f_e03_a3_v(object a0, string a1, float a2)
{
	Vector L0;
	Vector L1;
	object L2;
	bool L3;
	@GetMainOutdoorScene(L2);
	if (L2 == null) {
		@Trace("Can't find main outdoor scene");
		return;
	}
	L2->GetLocator(a1, L3, L0, L1);
	if (!L3) {
		@Trace("Warning: outdoor scene locator " + a1 + " doesnt exist");
	}
	L2->GetMap(a0);
	if (a0 == null) {
		@Trace("Can't find map");
		return;
	}
	a0->SetMapParams(L0.x, L0.z, a2);
}

int f_e24_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	if (L0 == 0) {
		return 1;
	} else {
		if (L0 == 1) {
			return 2;
		}
	}
	return 3;
}

int f_e35_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_e3b_a1_v(object a0)
{
	if (f_e35_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_e48_a1_v(string a0)
{
	object L0;
	int L1;
	bool L2;
	@CreateInvItem(L0);
	L0->SetItemName(a0);
	L0->SetProperty("Organ", 1);
	L0->GetItemID(L1);
	@AddItem(L2, L0, 0, 1);
}

void f_e59_a0_v(void)
{
	if (f_e35_a0_i() != 1) {
		return;
	}
	f_e48_a1_v("liver");
	f_e48_a1_v("kidney");
	f_e48_a1_v("heart");
	f_e48_a1_v("blood");
}

int f_e71_a0_i(void)
{
	return 515558;
}

int f_e73_a0_i(void)
{
	return 503343;
}

string f_e75_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_e77_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_e79_a0_b(void)
{
	return false;
}

int f_e7b_a0_i(void)
{
	object L0;
	Vector L1;
	Vector L2;
	Vector L3;
	bool L4;
	float L5;
	int L6;
	int L7;
	@GetScene(L0);
	@GetPosition(L1);
	L5 = 9000000;
	L6 = 1;
	L7 = -1;
	while (true) {
		Vector L8;
		float L9;
		L0->GetLocator("pt_b9q03_bonfire" + L6, L4, L2, L3);
		if (!L4) {
			break;
		}
		L8 = L1 - L2;
		L9 = L8 | L8;
		if (L9 < L5) {
			L5 = L9;
			L7 = L6;
		}
		L6 = L6 + 1;
	}
	return L7;
}

bool f_e98_a1_b(int a0)
{
	int L0;
	@GetVariable("b9q03Bonfire" + a0, L0);
	return L0 != 0;
}

void f_ea0_a1_v(int a0)
{
	string L0;
	L0 = a0;
	@TriggerWorld("enable_bonfire", L0);
	f_d04_a2_b("quest_b9_03", "bonfire_burn");
	@SetVariable("b9q03Bonfire" + a0, 1);
}

void OnTrigger(string a0)
{
	if (a0 == "cleanup") {
		g1 = true;
	}
}

bool f_eb8_a1_b(int a0)
{
	if (a0 == 1) {
		@Trace("changing state to c_iStateWaitForCommand");
	} else {
		if (a0 == 2) {
			@Trace("changing state to c_iStateFollow");
		} else {
			if (a0 == 3) {
				@Trace("changing state to c_iStateIdleAndFollow");
			} else {
				if (a0 == 4) {
					@Trace("changing state to c_iStateRetreatPlayer");
				} else {
					if (a0 == 5) {
						@Trace("changing state to c_iStateBurn");
					} else {
						if (a0 == 0) {
							g5 = g2;
							@Trace("changing state to c_iStateWaitForLoad");
						} else {
							if (a0 == 8) {
								@Trace("changing state to c_iStateGoAway");
							} else {
								return false;
							}
						}
					}
				}
			}
		}
	}
	g2 = a0;
	return true;
}

void f_ef6_a1_v(object a0)
{
	@Trace("changing state to c_iStateRetreat");
	g2 = 6;
	g3 = a0;
}

void f_f01_a1_v(object a0)
{
	@Trace("changing state to c_iStateRetreatPDamage");
	g2 = 7;
	g4 = a0;
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_bf3_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_c37_a5_v(a0, a1, a2, a4, a5);
}

void OnPropertyChange(object a0, string a1)
{
	if (a1 == "health") {
		float L0;
		@GetProperty("health", L0);
		if (L0 <= 0) {
			@SignalDeath(a0);
		}
	}
}

bool f_f2b_a1_b(object a0)
{
	int L0;
	L0 = t0{a0};
	if (L0 == 2) {
		f_eb8_a1_b(2);
	} else {
		if (L0 == 1) {
			f_eb8_a1_b(1);
		} else {
			if (L0 == 3) {
				f_eb8_a1_b(5);
			} else {
				if (L0 == 4) {
					f_eb8_a1_b(8);
				} else {
					return false;
				}
			}
		}
	}
	return true;
}

void OnDeath(object a0)
{
	f_da2_a0_v();
	f_d04_a2_b("quest_b9_03", "fail");
	t14{a0};
}

bool f_f67_a1_b(object a0)
{
	object L0;
	Vector L1;
	Vector L2;
	Vector L3;
	float L4;
	@FindActor(L0, "player");
	if (!f_b9c_a1_b(L0)) {
		return false;
	}
	a0->GetPosition(L1);
	L0->GetPosition(L2);
	L3 = L1 - L2;
	L4 = L3 | L3;
	return L4 < 75625.0;
}

