event OnTimer 7;
event OnSee 1;
event OnUnload 6;
event OnStopSee 2;
event OnCollision 10;
event OnDeath 41;
event OnMessage 42;
event OnHear 3;
event OnAttacked 17;
event OnUse 0;
event OnHit 22;
event OnPropertyChange 16;
event OnTrigger 26;
event OnLoad 5;
event OnHit2 43;

var bool g0;
var int g1;
var int g2;
var int g3;
var int g4;
var object g5;
var object g6;
var object g7;
var object g8;

maintask t0
{
	var Vector tv0;
	var Vector tv1;

	bool f_0_a0_b(void)
	{
		Vector L0;
		Vector L1;
		float L2;
		@GetPosition(L0);
		L1 = L0 - tv0;
		L2 = L1 | L1;
		return L2 < 40000;
	}

	void init(void)
	{
		if (!f_d9b_a0_b()) {
			@Trace("FSM Init failed");
			@RemoveActor(f_c5c_a0_o());
			return;
		}
		@GetPosition(tv0);
		@GetDirection(tv1);
		g3 = 0;
		g4 = 2;
		while (true) {
			if (0 == g3) {
				t9{};
				f_def_a1_b(2);
			} else {
				if (7 == g3) {
					t1{g8};
					if (7 == g3) {
						t7{1};
						if (7 == g3) {
							f_def_a1_b(2);
						}
					}
				} else {
					if (6 == g3) {
						t7{1};
						if (6 == g3) {
							t3{g7, 8};
							if (6 == g3) {
								t7{1};
								if (6 == g3) {
									f_def_a1_b(2);
								}
							}
						}
					} else {
						if (1 == g3) {
							f_e70_a1_v(true);
							t6{};
							if (1 == g3) {
								t4{};
								if (1 == g3) {
									t5{tv0, tv1, false};
									if (1 == g3) {
										f_def_a1_b(2);
									}
								}
							}
							f_e70_a1_v(false);
						} else {
							if (2 == g3) {
								if (!f_0_a0_b()) {
									t5{tv0, tv1, false};
								}
								if (2 == g3) {
									t4{};
									if (2 == g3) {
										if (!f_e7e_a0_b()) {
											f_def_a1_b(3);
										} else {
											if (f_c7e_a1_b(0.5)) {
												if (!f_e65_a0_b()) {
													f_def_a1_b(1);
												}
											}
										}
									}
								}
							} else {
								if (3 == g3) {
									object L0;
									int L1;
									bool L2;
									int L3;
									f_e89_a1_v(true);
									@GetMainOutdoorScene(L0);
									@irand(L1, g2);
									L2 = f_c7e_a1_b(0.5);
									for (L3 = 0; L3 < g2; L3++) {
										bool L4;
										Vector L5;
										Vector L6;
										int L7;
										L7 = (L3 + L1) % g2;
										if (L2) {
											L7 = g2 - 1 - L7;
										}
										L0->GetLocator("pt_b9q03_bonfire" + (g1 + 1) + "_patrol" + (L7 + 1), L4, L5, L6);
										t5{L5, L6, false};
										if (3 != g3) {
											break;
										}
										t7{1};
										if (3 != g3) {
											break;
										}
									}
									if (3 == g3) {
										f_def_a1_b(2);
									}
									f_e89_a1_v(false);
								} else {
									if (4 == g3) {
										Vector L8;
										Vector L9;
										g5->GetPosition(L8);
										g5->GetDirection(L9);
										t5{L8, -L9, true};
										if (4 == g3) {
											t7{2};
											if (4 == g3) {
												t5{tv0, tv1, true};
												if (4 == g3) {
													object L10;
													@GetMainOutdoorScene(L10);
													@BroadcastMessage("b9q03_corpse" + (g1 + 1), f_c5c_a0_o(), L10);
													t5{L8, L8, true};
													if (4 == g3) {
														t7{3};
														if (4 == g3) {
															f_def_a1_b(2);
														}
													}
												}
											}
										}
									} else {
										if (5 == g3) {
											t7{1};
											if (5 == g3) {
												t3{g6, 8};
												if (5 == g3) {
													t7{2};
													if (5 == g3) {
														f_def_a1_b(2);
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
			@sync();
		}
	}
}

task t1
{
	var object tv0;
	var int tv1;
	var int tv2;
	var bool tv3;
	var bool tv4;
	var float tv5;
	var int tv6;
	var object tv7;

	void init(object a0)
	{
		tv7 = a0;
		@SetTimer(1, 1);
		f_203_a3_v(a0, false, 150.0);
		@KillTimer(1);
	}

	float f_1c9_a2_f(object a0, int a1)
	{
		return 0.10000000149011612;
	}

	int f_1cc_a2_i(object a0, int a1)
	{
		return 0;
	}

	int f_1cf_a0_i(void)
	{
		return f_ebe_a0_i();
	}

	void OnTimer(int a0)
	{
		if (a0 == 1) {
			object L0;
			@GetMainOutdoorScene(L0);
			@BroadcastMessage("b9q03_helpme" + (g1 + 1), tv7, L0);
			@Trace("helpme timer");
		}
	}

	void OnSee(object a0)
	{
		if (f_af4_a1_b(a0) && g8 != a0) {
			f_2fd_a0_v();
			f_e53_a1_b(a0);
		}
	}

	void OnUnload(void)
	{
		f_2fd_a0_v();
		f_def_a1_b(0);
	}

	void f_203_a3_v(object a0, bool a1, float a2)
	{
		float L0;
		Vector L1;
		Vector L2;
		bool L3;
		bool L4;
		float L5;
		f_305_a0_v();
		tv6 = 0;
		if (a0->FuncExist("@GetAttackDistance", 1)) {
			a0->GetAttackDistance(L0);
			L0 = L0 + 50;
		} else {
			L0 = a2;
		}
		if (L0 >= 150) {
			L0 = 150;
		}
		tv3 = false;
		tv0 = a0;
		@IsPlayerActor(tv0, L3);
		if (L3) {
			@PlayGlobalMusic("attack");
		}
		if (a1) {
			L4 = false;
		} else {
			L4 = true;
		}
		L5 = 300.0 + L0;
		while (f_b77_a1_b(tv0) && !tv3 && !tv4) {
			Vector L6;
			float L7;
			f_4b7_a0_v();
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L6 = L1 - L2;
			L7 = L6 | L6;
			if (L7 >= L5 * L5) {
				if (!t2{tv0, L0, 2000.0, true, false}) {
					tv3 = true;
					break;
				}
				L4 = false;
			} else {
				if (L7 >= a2 * a2) {
					Vector L8;
					bool L9;
					float L10;
					tv0->GetPFPosition(L8);
					@CanReachByPF(L9, L8);
					if (!L9) {
						if (!t2{tv0, L0, 2000.0, true, false}) {
							tv3 = true;
							break;
						}
						L4 = false;
						continue;
					}
					if (!L4) {
						f_c0d_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						f_4b7_a0_v();
						@StopAsync();
						L4 = true;
						if (!f_b77_a1_b(tv0) || tv4) {
							break;
						}
					}
					@rand(L10);
					if (L10 < 0.6000000238418579 || f_48c_a0_b()) {
						@Face(tv0);
						f_4bc_a0_v();
						@PlayAnimation("all", "attack_stay");
						f_3fc_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						f_4b7_a0_v();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_48c_a0_b()) {
							if (!f_b77_a1_b(tv0) || tv4) {
								break;
							}
							tv0->GetPFPosition(L1);
							@GetPFPosition(L2);
							L6 = L1 - L2;
							L7 = L6 | L6;
							if (L7 < a2 * a2) {
								if (!f_34f_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_34f_a1_b(a2)) {
						break;
					}
					L4 = true;
				}
			}
		}
		@WaitForAnimEnd();
		if (tv3 || tv4) {
			return;
		}
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if (L3) {
			@Sleep(2.0);
		}
	}

	void f_2fd_a0_v(void)
	{
		@Stop();
		@StopAnimation();
		@StopGroup0();
		tv4 = true;
	}

	void f_305_a0_v(void)
	{
		for (tv1 = 0; ; tv1++) {
			bool L0;
			@HasAnimation(L0, "all", "attack_begin" + (tv1 + 1));
			if (!L0) {
				break;
			}
		}
		for (tv2 = 0; ; tv2++) {
			bool L1;
			@IsExisting3DSound(L1, "attack" + (tv2 + 1));
			if (!L1) {
				break;
			}
		}
		Vector L2;
		@GetAnimationOffset(L2, "all", "bjump");
		tv5 = -L2.z;
	}

	void f_328_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_1c9_a2_f(L0, a1);
			L2 = f_b05_a3_f(L0, L1, f_1cc_a2_i(L0, a1));
			@ReportHit(tv0, f_1cf_a0_i(), L2, L1);
			f_4c1_a2_v(L0, L2);
		}
	}

	bool f_34f_a1_b(float a0)
	{
		int L0;
		bool L1;
		f_4b7_a0_v();
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_497_a0_v();
		if (!f_b77_a1_b(tv0) || tv4) {
			@StopAsync();
			return false;
		}
		f_328_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			int L2;
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			f_4b7_a0_v();
			if (!f_b77_a1_b(tv0) || tv4) {
				@StopAsync();
				return false;
			}
			f_328_a2_v(a0, L0);
			for (L2 = 1; ; L2++) {
				string L3;
				L3 = "attack_middle" + L0 + "_" + L2;
				@HasAnimation(L1, "all", L3);
				if (!L1) {
					break;
				}
				@PlayAnimation("all", L3);
				@WaitForAnimEnd();
				f_4b7_a0_v();
				if (!f_b77_a1_b(tv0) || tv4) {
					@StopAsync();
					return false;
				}
				f_328_a2_v(a0, L0);
			}
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		if (f_4c3_a0_b()) {
			f_3e1_a1_b(0.75);
			@StopAsync();
		}
		return true;
	}

	bool f_3e1_a1_b(float a0)
	{
		float L0;
		@rand(L0);
		if (L0 < a0) {
			for (; ; ) {
				bool L1;
				@IsAnimationPlaying(L1);
				if (!L1) {
					break;
				}
				if (f_44f_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
			f_4b7_a0_v();
		}
		return false;
	}

	bool f_3fc_a1_b(float a0)
	{
		for (; ; ) {
			bool L0;
			Vector L1;
			Vector L2;
			Vector L3;
			float L4;
			@IsAnimationPlaying(L0);
			if (!L0) {
				break;
			}
			if (f_44f_a0_b()) {
				return true;
			}
			if (!f_b77_a1_b(tv0) || tv4) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_34f_a1_b(a0);
				return true;
			}
			@sync();
		}
		f_4b7_a0_v();
		return false;
	}

	bool f_42d_a0_b(void)
	{
		if (!f_b77_a1_b(tv0) || tv4) {
			return false;
		}
		if (f_48c_a0_b()) {
			Vector L0;
			Vector L1;
			Vector L2;
			float L3;
			float L4;
			tv0->GetPFPosition(L0);
			@GetPFPosition(L1);
			L2 = L0 - L1;
			L3 = L2 | L2;
			tv0->GetAttackDistance(L4);
			L4 = L4 + 50;
			return L3 <= L4 * L4;
		}
		return false;
	}

	bool f_44f_a0_b(void)
	{
		if (f_42d_a0_b() && f_45f_a0_b()) {
			return true;
		}
		return false;
	}

	bool f_45f_a0_b(void)
	{
		object L0;
		bool L1;
		@GetScene(L0);
		L1 = false;
		for (; ; ) {
			float L2;
			Vector L3;
			Vector L4;
			@FindDirLength(L2, -f_aed_a1_V(tv0), tv5);
			if (L2 < tv5) {
				break;
			}
			@Face(tv0);
			@PlayAnimation("all", "bjump");
			tv0->GetPFPosition(L3);
			@GetPFPosition(L4);
			@WaitForAnimEnd();
			f_4b7_a0_v();
			@StopAsync();
			@SetSpeed([0.0, 0.0, 0.0]);
			L1 = true;
			if (!f_42d_a0_b()) {
				break;
			}
		}
		return L1;
	}

	bool f_48c_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_497_a0_v(void)
	{
		float L0;
		if (!tv2) {
			return;
		}
		if (tv6) {
			tv6 = tv6 + -1;
			if (tv6 > 0) {
				return;
			}
		}
		@rand(L0);
		if (L0 < f_4c7_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv6 = f_4c5_a0_i();
		}
	}

	void f_4b7_a0_v(void)
	{
		f_c92_a1_v(tv0);
	}

	void f_4bc_a0_v(void)
	{
		f_c33_a1_v("attack_stay");
	}

	void f_4c1_a2_v(object a0, float a1)
	{
	}

	bool f_4c3_a0_b(void)
	{
		return true;
	}

	int f_4c5_a0_i(void)
	{
		return 1;
	}

	float f_4c7_a0_f(void)
	{
		return 0.5;
	}
}

task t2
{
	var bool tv0;
	var object tv1;
	var bool tv2;
	var object tv3;

	bool init(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		tv3 = a0;
		@SetTimer(2, 2);
		L0 = f_4fc_a5_b(a0, a1, a2, a3, a4);
		@KillTimer(2);
		return L0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 2) {
			object L0;
			@GetMainOutdoorScene(L0);
			@BroadcastMessage("b9q03_helpme" + (g1 + 1), tv3, L0);
			@Trace("helpme timer");
		} else {
			f_52d_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_53b_a0_v();
		f_def_a1_b(0);
	}

	bool f_4fc_a5_b(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		f_c92_a1_v(a0);
		@SetTimer(1, 5);
		@CanSee(L0, a0);
		if (L0) {
			tv2 = true;
			f_c1d_a1_v(a0);
		} else {
			tv2 = false;
		}
		if (f_af4_a1_b(a0)) {
			@SendPlayerEnemy(a0, f_c5c_a0_o());
		}
		L1 = f_565_a5_b(a0, a1, a2, a3, a4);
		if (tv2) {
			@UnlookAsync("head");
		}
		@KillTimer(1);
		return L1;
	}

	void f_52d_a1_v(int a0)
	{
		if (a0 == 1) {
			f_c92_a1_v(tv1);
		} else {
			f_5cb_a1_v(a0);
		}
	}

	void f_53b_a0_v(void)
	{
		@KillTimer(1);
		if (tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
		f_5e1_a0_v();
	}

	void OnSee(object a0)
	{
		if (tv1 == a0 && !tv2) {
			tv2 = true;
			f_c1d_a1_v(a0);
		}
	}

	void OnStopSee(object a0)
	{
		if (tv1 == a0 && tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
	}

	bool f_565_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_5f1_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_5f8_a0_s(), f_5fa_a0_s());
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

	void f_5cb_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_5f1_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_5e1_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_53b_a0_v();
		global.OnDeath(a0);
	}

	bool f_5f1_a1_b(object a0)
	{
		return f_b77_a1_b(a0);
	}

	string f_5f8_a0_s(void)
	{
		return "walk";
	}

	string f_5fa_a0_s(void)
	{
		return "run";
	}
}

task t3
{
	var bool tv0;
	var object tv1;
	var bool tv2;

	void init(object a0, float a1)
	{
		if (!f_b77_a1_b(a0)) {
			f_def_a1_b(2);
			return;
		}
		if (a1 > 0) {
			@SetTimer(3, a1);
			f_668_a5_b(a0, 350.0, 6000, true, true);
			@KillTimer(3);
		} else {
			f_668_a5_b(a0, 350.0, 6000, true, true);
		}
	}

	void OnUnload(void)
	{
		f_6e4_a0_v();
		tv2 = true;
		f_def_a1_b(0);
	}

	void OnMessage(object a0, string a1)
	{
		if (f_cf7_a2_b(a0, a1)) {
			f_6e4_a0_v();
		}
	}

	void OnSee(object a0)
	{
		if (f_d45_a1_b(a0)) {
			tv2 = true;
			f_6e4_a0_v();
		}
	}

	void OnHear(object a0)
	{
		if (f_d80_a1_b(a0)) {
			tv2 = true;
			f_6e4_a0_v();
		}
	}

	void OnAttacked(object a0)
	{
		disable OnMessage;
		disable OnSee;
		disable OnHear;
		f_6e4_a0_v();
		tv2 = true;
		f_e53_a1_b(a0);
	}

	void OnTimer(int a0)
	{
		if (a0 == 3) {
			f_6e4_a0_v();
			tv2 = true;
			return;
		}
		f_6ce_a1_v(a0);
	}

	bool f_668_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_6f4_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_6fb_a0_s(), f_6fd_a0_s());
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

	void f_6ce_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_6f4_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_6e4_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_6e4_a0_v();
		global.OnDeath(a0);
	}

	bool f_6f4_a1_b(object a0)
	{
		return f_b77_a1_b(a0);
	}

	string f_6fb_a0_s(void)
	{
		return "walk";
	}

	string f_6fd_a0_s(void)
	{
		return "run";
	}
}

task t4
{
	void init(void)
	{
		f_736_a0_v();
	}

	void OnUnload(void)
	{
		f_787_a0_v();
		f_def_a1_b(0);
	}

	void OnMessage(object a0, string a1)
	{
		if (f_cf7_a2_b(a0, a1)) {
			f_787_a0_v();
		}
	}

	void OnSee(object a0)
	{
		if (f_d45_a1_b(a0)) {
			f_787_a0_v();
		}
	}

	void OnHear(object a0)
	{
		if (f_d80_a1_b(a0)) {
			f_787_a0_v();
		}
	}

	void OnAttacked(object a0)
	{
		disable OnMessage;
		disable OnSee;
		disable OnHear;
		f_787_a0_v();
		f_e53_a1_b(a0);
	}

	void f_736_a0_v(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_c18_a0_b()) {
			return;
		}
		L0 = f_ca2_a0_i();
		for (L1 = 0; L1 < 5 && f_c18_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_c9b_a1_s(L3));
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
			if (!f_785_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_785_a0_b(void)
	{
		return true;
	}

	void f_787_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t5
{
	var bool tv0;

	bool init(Vector a0, Vector a1, bool a2)
	{
		a0.y += 30;
		return f_7d1_a6_b(a0, a1, 100, 4000, a2, true);
	}

	void OnUnload(void)
	{
		f_84d_a0_v();
		f_def_a1_b(0);
	}

	void OnMessage(object a0, string a1)
	{
		if (f_cf7_a2_b(a0, a1)) {
			f_84d_a0_v();
		}
	}

	void OnSee(object a0)
	{
		if (f_d45_a1_b(a0)) {
			f_84d_a0_v();
		}
	}

	void OnHear(object a0)
	{
		if (f_d80_a1_b(a0)) {
			f_84d_a0_v();
		}
	}

	void OnAttacked(object a0)
	{
		disable OnMessage;
		disable OnSee;
		disable OnHear;
		f_84d_a0_v();
		f_e53_a1_b(a0);
	}

	bool f_7cf_a0_b(void)
	{
		return true;
	}

	bool f_7d1_a6_b(Vector a0, Vector a1, float a2, float a3, bool a4, bool a5)
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
			if (!f_7cf_a0_b()) {
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
					@FollowPath(L2, a4, L0, f_85d_a0_s(), f_85f_a0_s());
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
		if (!f_7cf_a0_b()) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_84d_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_84d_a0_v();
		global.OnDeath(a0);
	}

	string f_85d_a0_s(void)
	{
		return "walk";
	}

	string f_85f_a0_s(void)
	{
		return "run";
	}
}

task t6
{
	var bool tv0;

	bool init(void)
	{
		bool L0;
		object L1;
		Vector L2;
		Vector L3;
		@GetMainOutdoorScene(L1);
		L1->GetLocator("pt_b9q03_bonfire" + (g1 + 1), L0, L2, L3);
		if (!L0) {
			return false;
		}
		return f_8a3_a3_b(L2, L3, false);
	}

	void OnMessage(object a0, string a1)
	{
		if (f_cf7_a2_b(a0, a1)) {
			f_939_a0_v();
		}
	}

	void OnSee(object a0)
	{
		if (f_d45_a1_b(a0)) {
			f_939_a0_v();
		}
	}

	void OnHear(object a0)
	{
		if (f_d80_a1_b(a0)) {
			f_939_a0_v();
		}
	}

	void OnAttacked(object a0)
	{
		disable OnMessage;
		disable OnSee;
		disable OnHear;
		f_939_a0_v();
		f_e53_a1_b(a0);
	}

	bool f_8a3_a3_b(Vector a0, Vector a1, bool a2)
	{
		a0.y += 30;
		return f_8bd_a6_b(a0, a1, 100, 4000, a2, true);
	}

	void OnUnload(void)
	{
		f_939_a0_v();
		f_def_a1_b(0);
	}

	bool f_8bb_a0_b(void)
	{
		return true;
	}

	bool f_8bd_a6_b(Vector a0, Vector a1, float a2, float a3, bool a4, bool a5)
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
			if (!f_8bb_a0_b()) {
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
					@FollowPath(L2, a4, L0, f_949_a0_s(), f_94b_a0_s());
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
		if (!f_8bb_a0_b()) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_939_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_939_a0_v();
		global.OnDeath(a0);
	}

	string f_949_a0_s(void)
	{
		return "walk";
	}

	string f_94b_a0_s(void)
	{
		return "run";
	}
}

task t7
{
	var bool tv0;

	void init(int a0)
	{
		int L0;
		for (L0 = 0; L0 < a0; L0++) {
			f_993_a1_v("hunt");
			if (tv0) {
				break;
			}
		}
	}

	void OnUnload(void)
	{
		f_9a8_a0_v();
		tv0 = true;
		f_def_a1_b(0);
	}

	void OnMessage(object a0, string a1)
	{
		if (f_cf7_a2_b(a0, a1)) {
			f_9a8_a0_v();
			tv0 = true;
		}
	}

	void OnSee(object a0)
	{
		if (f_d45_a1_b(a0)) {
			f_9a8_a0_v();
			tv0 = true;
		}
	}

	void OnHear(object a0)
	{
		if (f_d80_a1_b(a0)) {
			f_9a8_a0_v();
			tv0 = true;
		}
	}

	void OnAttacked(object a0)
	{
		disable OnMessage;
		disable OnSee;
		disable OnHear;
		f_9a8_a0_v();
		f_e53_a1_b(a0);
	}

	void f_993_a1_v(string a0)
	{
		bool L0;
		bool L1;
		@WaitForAnimEnd();
		if (!f_c18_a0_b()) {
			return;
		}
		@HasAnimation(L0, "all", a0);
		if (!L0) {
			return;
		}
		@PlayAnimation("all", a0);
		@WaitForAnimEnd(L1);
	}

	void f_9a8_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t8
{
	void init(object a0)
	{
		if (1 == g3) {
			f_e70_a1_v(false);
		}
		if (3 == g3) {
			f_e89_a1_v(false);
		}
		f_c28_a4_v(f_c5c_a0_o(), "coffee", 1, 3);
		f_c28_a4_v(f_c5c_a0_o(), "tvirin", 1, 6);
		f_c28_a4_v(f_c5c_a0_o(), "silver_ring", 1, 9);
		f_c28_a4_v(f_c5c_a0_o(), "gold_ring", 1, 8);
		f_c28_a4_v(f_c5c_a0_o(), "bracelet", 1, 6);
		f_c28_a4_v(f_c5c_a0_o(), "watch", 1, 9);
		f_c28_a4_v(f_c5c_a0_o(), "beads", 1, 9);
		f_c28_a4_v(f_c5c_a0_o(), "ear_ring", 1, 9);
		f_c28_a4_v(f_c5c_a0_o(), "feromicin", 1, 10);
		f_cd7_a0_v();
		f_a28_a1_v(a0);
	}

	void OnUnload(void)
	{
		@RemoveActor(f_c5c_a0_o());
		@Hold();
	}

	void f_a28_a1_v(object a0)
	{
		disable OnUse;
		f_a41_a1_v(a0);
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
			f_cb9_a1_v(a0);
		}
	}

	void f_a41_a1_v(object a0)
	{
		if (a0 == null) {
			f_a9c_a1_v("fdie");
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
			f_c33_a1_v(L4);
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

	void f_a9c_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_c33_a1_v(a0);
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

task t9
{
	void init(void)
	{
		if (g0) {
			@RemoveActor(f_c5c_a0_o());
			@Hold();
		}
		while (!f_c18_a0_b()) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			@RemoveActor(f_c5c_a0_o());
			@Hold();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

string f_adf_a1_s(int a0)
{
	if (a0 == 2) {
		return "fire";
	} else {
		if (a0 == 1) {
			return "bullet";
		}
	}
	return "phys";
}

Vector f_aed_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

bool f_af4_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_af9_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_b05_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_af9_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_af9_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_adf_a1_s(a2);
	if (!f_af9_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_c6c_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_c73_a3_f(L4 - L5, 0, 1));
	if (f_af4_a1_b(a0)) {
		f_c88_a1_v(-L5);
	}
	return L5;
}

bool f_b4e_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_b53_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_b4e_a1_b(a0)) {
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

bool f_b77_a1_b(object a0)
{
	int L0;
	if (!f_b53_a1_b(a0)) {
		return false;
	}
	if (!f_af9_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_b8f_a1_v(object a0)
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

void f_bbb_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_c62_a1_V(f_aed_a1_V(a0));
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
			f_bff_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_b8f_a1_v(a0);
}

void f_bff_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_b8f_a1_v(a0);
}

void f_c0d_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_c18_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_c1d_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_c28_a4_v(object a0, string a1, int a2, int a3)
{
	if (f_c83_a2_b(a2, a3)) {
		bool L0;
		a0->AddItem(L0, a1, 0);
	}
}

void f_c33_a1_v(string a0)
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

object f_c5c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_c62_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_c6c_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_c73_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

bool f_c7e_a1_b(float a0)
{
	float L0;
	@rand(L0);
	return L0 < a0;
}

bool f_c83_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

void f_c88_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(15, L0);
}

void f_c92_a1_v(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		@PlayGlobalMusic("attack");
	}
}

string f_c9b_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_ca2_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_c9b_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_cb3_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_cb9_a1_v(object a0)
{
	if (f_cb3_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_cc6_a1_v(string a0)
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

void f_cd7_a0_v(void)
{
	if (f_cb3_a0_i() != 1) {
		return;
	}
	f_cc6_a1_v("liver");
	f_cc6_a1_v("kidney");
	f_cc6_a1_v("heart");
	f_cc6_a1_v("blood");
}

void OnTrigger(string a0)
{
	if (a0 == "cleanup") {
		g0 = true;
	}
}

bool f_cf7_a2_b(object a0, string a1)
{
	if (a0 == f_c5c_a0_o()) {
		return false;
	}
	if (a1 == "b9q03_corpse" + (g1 + 1)) {
		if (f_e2f_a1_b(a0)) {
			return true;
		}
	} else {
		if (a1 == "b9q03_helpme" + (g1 + 1)) {
			Vector L0;
			Vector L1;
			Vector L2;
			float L3;
			a0->GetPosition(L0);
			@GetPosition(L1);
			L2 = L0 - L1;
			L3 = L2 | L2;
			if (L3 < 4000000.0) {
				if (f_e53_a1_b(a0)) {
					return true;
				}
			}
		} else {
			if (a1 == "player_shot") {
				Vector L4;
				Vector L5;
				Vector L6;
				float L7;
				a0->GetPosition(L4);
				@GetPosition(L5);
				L6 = L4 - L5;
				L7 = L6 | L6;
				if (L7 < 360000.0) {
					if (f_e53_a1_b(a0)) {
						return true;
					}
				}
				if (L7 < 12250000.0) {
					if (f_e2f_a1_b(a0)) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool f_d45_a1_b(object a0)
{
	if (a0->FuncExist("IsDead", 1) && f_b4e_a1_b(a0)) {
		if (f_af9_a2_b(a0, "b9q03_corpse")) {
			return false;
		}
		a0->SetProperty("b9q03_corpse", 1);
		return f_e1d_a1_b(a0);
	} else {
		if (f_af4_a1_b(a0)) {
			return f_e53_a1_b(a0);
		} else {
			if (f_af9_a2_b(a0, "b9q03")) {
				return f_e53_a1_b(a0);
			}
		}
	}
	return false;
}

bool f_d80_a1_b(object a0)
{
	if (f_af4_a1_b(a0)) {
		return f_e41_a1_b(a0);
	} else {
		if (f_af9_a2_b(a0, "b9q03")) {
			return f_e41_a1_b(a0);
		}
	}
	return false;
}

bool f_d9b_a0_b(void)
{
	object L0;
	Vector L1;
	Vector L2;
	Vector L3;
	bool L4;
	float L5;
	int L6;
	@GetMainOutdoorScene(L0);
	@GetPosition(L1);
	L5 = 4000000;
	L6 = 0;
	g1 = 1;
	while (true) {
		Vector L7;
		float L8;
		L0->GetLocator("pt_b9q03_bonfire" + g1, L4, L2, L3);
		if (!L4) {
			break;
		}
		L7 = L1 - L2;
		L8 = L7 | L7;
		if (L8 < L5) {
			L5 = L8;
			L6 = g1;
		}
		g1++;
	}
	g1 = L6 - 1;
	if (g1 == -1) {
		return false;
	}
	@Trace("Bonfire index: " + (g1 + 1));
	g2 = 0;
	while (true) {
		L0->GetLocator("pt_b9q03_bonfire" + (g1 + 1) + "_patrol" + (g2 + 1), L4, L2, L3);
		if (!L4) {
			break;
		}
		g2++;
	}
	@Trace("Bonfire pantrol point count: " + g2);
	return true;
}

bool f_def_a1_b(int a0)
{
	if (a0 == g3) {
		return false;
	}
	if (a0 == 0) {
		g4 = g3;
		@Trace("changing state to c_iStateWaitForLoad");
	} else {
		if (a0 == 1) {
			@Trace("changing state to c_iStateHeatHands");
		} else {
			if (a0 == 2) {
				@Trace("changing state to c_iStateIdle");
			} else {
				if (a0 == 3) {
					@Trace("changing state to c_iStatePatrol");
				} else {
					return false;
				}
			}
		}
	}
	g3 = a0;
	return true;
}

bool f_e1d_a1_b(object a0)
{
	if (g3 == 4) {
		return false;
	}
	g3 = 4;
	@Trace("changing state to c_iStateAware");
	g5 = a0;
	return true;
}

bool f_e2f_a1_b(object a0)
{
	if (g3 == 5) {
		return false;
	}
	g3 = 5;
	@Trace("changing state to c_iStateSearchEnemy");
	g6 = a0;
	return true;
}

bool f_e41_a1_b(object a0)
{
	if (g3 == 6) {
		return false;
	}
	g3 = 6;
	@Trace("changing state to c_iStateHearEnemy");
	g7 = a0;
	return true;
}

bool f_e53_a1_b(object a0)
{
	if (g3 == 7) {
		return false;
	}
	g3 = 7;
	@Trace("changing state to c_iStateAttack");
	g8 = a0;
	return true;
}

bool f_e65_a0_b(void)
{
	int L0;
	@GetVariable("b9q03HandHeatLock" + (g1 + 1), L0);
	return L0 != 0;
}

void f_e70_a1_v(bool a0)
{
	@SetVariable("b9q03HandHeatLock" + (g1 + 1), a0 ? 1 : 0);
}

bool f_e7e_a0_b(void)
{
	int L0;
	@GetVariable("b9q03PatrolLock" + (g1 + 1), L0);
	return L0 != 0;
}

void f_e89_a1_v(bool a0)
{
	@SetVariable("b9q03PatrolLock" + (g1 + 1), a0 ? 1 : 0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_bbb_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_bff_a5_v(a0, a1, a2, a4, a5);
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

void OnDeath(object a0)
{
	t8{a0};
}

int f_ebe_a0_i(void)
{
	return 0;
}

