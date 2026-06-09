event evt_11 11;
event OnUse 0;
event OnAttacked 17;
event OnTimer 7;
event OnDeath 41;
event OnSee 1;
event OnStopSee 2;
event OnCollision 10;
event OnHit 22;
event OnPropertyChange 16;
event OnHit2 43;

var object g0;

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
		if (!f_88b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a10_a0_i());
		L0->SetNPCDescription(f_a0e_a0_i());
		L0->SetPhoto(f_a12_a0_s());
		L0->SetPhoto2(f_a14_a0_s());
		L0->SetPlayerName(f_9ea_a0_i());
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
		f_8d0_a1_v(a0);
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
			f_84_a1_v("Neutral");
			tv0->SetMessage(518092);
			tv0->ClearReplies();
			tv0->AddReply(519592, 20773, 20772);
			tv0->AddReply(519588, 20769, 20768);
			break;
			return;
		}
		if (f_a16_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_8e2_a1_v(tv2);
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

	void f_84_a1_v(string a0)
	{
		if (!f_a16_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_8f2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_90c_a0_v();
			if (a1 == 19225) {
				f_9e1_a2_v(tv1, tv0);
			}
			if (a1 == 19226) {
				f_9dc_a2_v(tv1, tv0);
			}
			if (a1 == 20788) {
				f_9e1_a2_v(tv1, tv0);
			}
			if (a1 == 20778) {
				f_9dc_a2_v(tv1, tv0);
			}
			if (a0 == 19224) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(518092);
				tv0->ClearReplies();
				tv0->AddReply(519592, 20773, 20772);
				tv0->AddReply(519588, 20769, 20768);
				return;
			}
			if (a0 == 20769) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(519589);
				tv0->ClearReplies();
				tv0->AddReply(519590, 20771, 20770);
				tv0->AddReply(519596, 20773, 20776);
				return;
			}
			if (a0 == 20771) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(519591);
				tv0->ClearReplies();
				tv0->AddReply(519597, -1, 20778);
				tv0->AddReply(519598, 20773, 20779);
				return;
			}
			if (a0 == 20773) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(519593);
				tv0->ClearReplies();
				tv0->AddReply(519594, 20775, 20774);
				return;
			}
			if (a0 == 20775) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(519595);
				tv0->ClearReplies();
				tv0->AddReply(519599, 28362, 20781);
				tv0->AddReply(519600, 20786, 20782);
				return;
			}
			if (a0 == 20786) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(519603);
				tv0->ClearReplies();
				tv0->AddReply(519604, 20784, 20787);
				tv0->AddReply(519605, -1, 20788);
				return;
			}
			if (a0 == 28362) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(527067);
				tv0->ClearReplies();
				tv0->AddReply(527068, 20784, 28363);
				tv0->AddReply(527069, 20784, 28364);
				return;
			}
			if (a0 == 20784) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(519602);
				tv0->ClearReplies();
				tv0->AddReply(518093, -1, 19225);
				tv0->AddReply(518094, -1, 19226);
				return;
			}
			tv3 = true;
			if (f_a16_a0_b()) {
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
		for (; ; ) {
			@Sleep(3);
			f_1bb_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		f_20c_a0_v();
		L0 = t0{a0};
		if (L0 == 0) {
			f_966_a2_b(a0, 0.05000000074505806);
			t3{a0};
		} else {
			if (L0 == 1) {
				t4{a0, true};
			}
		}
	}

	void OnAttacked(object a0)
	{
		if (f_a61_a1_b(a0)) {
			f_20c_a0_v();
			f_a68_a1_v(a0);
		}
	}

	void f_1bb_a0_v(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_886_a0_b()) {
			return;
		}
		L0 = f_9cb_a0_i();
		for (L1 = 0; L1 < 5 && f_886_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_9c4_a1_s(L3));
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
			if (!f_20a_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_20a_a0_b(void)
	{
		return true;
	}

	void f_20c_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t3
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void init(object a0)
	{
		f_a18_a0_v();
		f_246_a1_v(a0);
	}

	void OnAttacked(object a0)
	{
		if (f_a61_a1_b(a0)) {
			f_2c3_a0_v();
			f_a68_a1_v(a0);
		}
	}

	Vector f_228_a1_V(float a0)
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
		L3 = f_942_a1_V(f_942_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_246_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_228_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_228_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_740_a0_V() + L0;
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
				L3 = f_228_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_740_a0_V() + L3;
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
			L2 = f_228_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_2d3_a0_b())) {
				@Stop();
				tv1 = f_740_a0_V() + L2;
			}
		}
	}

	void f_2c3_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_2c3_a0_v();
		global.OnDeath(a0);
	}

	bool f_2d3_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_745_a1_V(tv0);
		return f_95e_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t4
{
	var object tv0;
	var int tv1;
	var int tv2;
	var bool tv3;
	var float tv4;
	var int tv5;

	void init(object a0, bool a1)
	{
		object L0;
		@GetScene(L0);
		L0->RemoveStationaryActor(f_93c_a0_o());
		for (; ; ) {
			f_2fd_a3_v(a0, a1, 180.0);
			@Sleep(1);
		}
	}

	float f_2f7_a2_f(object a0, int a1)
	{
		return 0.029999999329447746;
	}

	int f_2fa_a2_i(object a0, int a1)
	{
		return 0;
	}

	void f_2fd_a3_v(object a0, bool a1, float a2)
	{
		float L0;
		Vector L1;
		Vector L2;
		bool L3;
		bool L4;
		float L5;
		f_3e2_a0_v();
		tv5 = 0;
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
			@SendPlayerEnemy(a0, f_93c_a0_o());
		}
		if (a1) {
			L4 = false;
		} else {
			L4 = true;
		}
		L5 = 400.0 + L0;
		while (f_7e5_a1_b(tv0) && !tv3) {
			Vector L6;
			float L7;
			f_57f_a0_v();
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L6 = L1 - L2;
			L7 = L6 | L6;
			if (L7 >= L5 * L5) {
				if (!t5{tv0, L0, 10000.0, true, false}) {
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
						if (!t5{tv0, L0, 10000.0, true, false}) {
							break;
						}
						L4 = false;
						continue;
					}
					if (!L4) {
						f_87b_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						f_57f_a0_v();
						@StopAsync();
						L4 = true;
						if (!f_7e5_a1_b(tv0)) {
							break;
						}
					}
					@rand(L10);
					if (L10 < 0.25 || f_554_a0_b()) {
						@Face(tv0);
						f_586_a0_v();
						@PlayAnimation("all", "attack_stay");
						f_4d0_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						f_57f_a0_v();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_554_a0_b()) {
							if (!f_7e5_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L1);
							@GetPFPosition(L2);
							L6 = L1 - L2;
							L7 = L6 | L6;
							if (L7 < a2 * a2) {
								if (!f_42c_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_42c_a1_b(a2)) {
						break;
					}
					L4 = true;
				}
			}
		}
		@WaitForAnimEnd();
		if (tv3) {
			return;
		}
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if (L3) {
			@Sleep(2.0);
		}
	}

	void f_3e2_a0_v(void)
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
		tv4 = -L2.z;
	}

	void f_405_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_2f7_a2_f(L0, a1);
			L2 = f_773_a3_f(L0, L1, f_2fa_a2_i(L0, a1));
			@ReportHit(tv0, f_584_a0_i(), L2, L1);
			f_58b_a2_v(L0, L2);
		}
	}

	bool f_42c_a1_b(float a0)
	{
		int L0;
		bool L1;
		f_57f_a0_v();
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		f_9b9_a0_v();
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_55f_a0_v();
		if (!f_7e5_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_405_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			int L2;
			f_9b9_a0_v();
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			f_57f_a0_v();
			if (!f_7e5_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_405_a2_v(a0, L0);
			for (L2 = 1; ; L2++) {
				string L3;
				L3 = "attack_middle" + L0 + "_" + L2;
				@HasAnimation(L1, "all", L3);
				if (!L1) {
					break;
				}
				f_9b9_a0_v();
				@PlayAnimation("all", L3);
				@WaitForAnimEnd();
				f_57f_a0_v();
				if (!f_7e5_a1_b(tv0)) {
					@StopAsync();
					return false;
				}
				f_405_a2_v(a0, L0);
			}
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		if (f_58d_a0_b()) {
			f_4b5_a1_b(0.75);
			@StopAsync();
		}
		return true;
	}

	bool f_4b5_a1_b(float a0)
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
				if (f_517_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
			f_57f_a0_v();
		}
		return false;
	}

	bool f_4d0_a1_b(float a0)
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
			if (f_517_a0_b()) {
				return true;
			}
			if (!f_7e5_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_42c_a1_b(a0);
				return true;
			}
			@sync();
		}
		f_57f_a0_v();
		return false;
	}

	bool f_4fb_a0_b(void)
	{
		if (!f_7e5_a1_b(tv0)) {
			return false;
		}
		if (f_554_a0_b()) {
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

	bool f_517_a0_b(void)
	{
		if (f_4fb_a0_b() && f_527_a0_b()) {
			return true;
		}
		return false;
	}

	bool f_527_a0_b(void)
	{
		object L0;
		bool L1;
		@GetScene(L0);
		L1 = false;
		for (; ; ) {
			float L2;
			Vector L3;
			Vector L4;
			@FindDirLength(L2, -f_745_a1_V(tv0), tv4);
			if (L2 < tv4) {
				break;
			}
			@Face(tv0);
			@PlayAnimation("all", "bjump");
			tv0->GetPFPosition(L3);
			@GetPFPosition(L4);
			@WaitForAnimEnd();
			f_57f_a0_v();
			@StopAsync();
			@SetSpeed([0.0, 0.0, 0.0]);
			L1 = true;
			if (!f_4fb_a0_b()) {
				break;
			}
		}
		return L1;
	}

	bool f_554_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_55f_a0_v(void)
	{
		float L0;
		if (!tv2) {
			return;
		}
		if (tv5) {
			tv5 = tv5 + -1;
			if (tv5 > 0) {
				return;
			}
		}
		@rand(L0);
		if (L0 < f_591_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv5 = f_58f_a0_i();
		}
	}

	void f_57f_a0_v(void)
	{
		f_9b0_a1_v(tv0);
	}

	int f_584_a0_i(void)
	{
		return 0;
	}

	void f_586_a0_v(void)
	{
		f_913_a1_v("attack_stay");
	}

	void f_58b_a2_v(object a0, float a1)
	{
	}

	bool f_58d_a0_b(void)
	{
		return true;
	}

	int f_58f_a0_i(void)
	{
		return 1;
	}

	float f_591_a0_f(void)
	{
		return 0.5;
	}
}

task t5
{
	var bool tv0;
	var object tv1;
	var bool tv2;

	bool init(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		f_9b0_a1_v(a0);
		@SetTimer(1, 5);
		@CanSee(L0, a0);
		if (L0) {
			tv2 = true;
			f_901_a1_v(a0);
		} else {
			tv2 = false;
		}
		if (f_74c_a1_b(a0)) {
			@SendPlayerEnemy(a0, f_93c_a0_o());
		}
		L1 = f_5fc_a5_b(a0, a1, a2, a3, a4);
		if (tv2) {
			@UnlookAsync("head");
		}
		@KillTimer(1);
		return L1;
	}

	void OnTimer(int a0)
	{
		if (a0 == 1) {
			f_9b0_a1_v(tv1);
		} else {
			f_662_a1_v(a0);
		}
	}

	void f_5d2_a0_v(void)
	{
		@KillTimer(1);
		if (tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
		f_678_a0_v();
	}

	void OnSee(object a0)
	{
		if (tv1 == a0 && !tv2) {
			tv2 = true;
			f_901_a1_v(a0);
		}
	}

	void OnStopSee(object a0)
	{
		if (tv1 == a0 && tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
	}

	bool f_5fc_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_688_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_68f_a0_s(), f_691_a0_s());
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

	void f_662_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_688_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_678_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_5d2_a0_v();
		global.OnDeath(a0);
	}

	bool f_688_a1_b(object a0)
	{
		return f_7e5_a1_b(a0);
	}

	string f_68f_a0_s(void)
	{
		return "walk";
	}

	string f_691_a0_s(void)
	{
		return "run";
	}
}

task t6
{
	void init(object a0)
	{
		bool L0;
		@AddItem(L0, "powder", 0, 1);
		f_69e_a1_v(a0);
	}

	void f_69e_a1_v(object a0)
	{
		disable OnUse;
		f_6b7_a1_v(a0);
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
			f_a01_a1_v(a0);
		}
	}

	void f_6b7_a1_v(object a0)
	{
		if (a0 == null) {
			f_712_a1_v("fdie");
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
			f_913_a1_v(L4);
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

	void f_712_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_913_a1_v(a0);
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

string f_732_a1_s(int a0)
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

Vector f_740_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_745_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

bool f_74c_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_751_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_75d_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_751_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_953_a3_f(L0 + a2, a3, a4));
	return true;
}

float f_773_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_751_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_751_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_732_a1_s(a2);
	if (!f_751_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_94c_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_953_a3_f(L4 - L5, 0, 1));
	if (f_74c_a1_b(a0)) {
		f_989_a1_v(-L5);
	}
	return L5;
}

bool f_7bc_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_7c1_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_7bc_a1_b(a0)) {
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

bool f_7e5_a1_b(object a0)
{
	int L0;
	if (!f_7c1_a1_b(a0)) {
		return false;
	}
	if (!f_751_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_7fd_a1_v(object a0)
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

void f_829_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_942_a1_V(f_745_a1_V(a0));
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
			f_86d_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_7fd_a1_v(a0);
}

void f_86d_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_7fd_a1_v(a0);
}

void f_87b_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_886_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_88b_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_942_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_a16_a0_b()) {
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

void f_8d0_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_a16_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_8e2_a1_v(string a0)
{
	bool L0;
	@lshHasAnimation(L0, a0);
	if (L0) {
		float L1;
		float L2;
		@lshGetAnimTimes(a0, L1, L2);
		@lshPlayAnimation(L1, L2, false);
	} else {
		@Trace("Can't find lsh animation : " + a0);
	}
}

void f_8f2_a2_v(string a0, bool a1)
{
	bool L0;
	@lshHasAnimation(L0, a0);
	if (L0) {
		float L1;
		float L2;
		@lshGetAnimTimes(a0, L1, L2);
		@lshPlayAnimation(L1, L2, a1);
	} else {
		@Trace("Can't find lsh animation : " + a0);
	}
}

void f_901_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_90c_a0_v(void)
{
	if (f_a16_a0_b()) {
		@lshStopSpeech();
	}
}

void f_913_a1_v(string a0)
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

object f_93c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_942_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_94c_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_953_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

float f_95e_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

bool f_966_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_99a_a1_v(a1);
	f_75d_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_989_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

void f_99a_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_9a4_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_9b0_a1_v(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		@PlayGlobalMusic("attack");
	}
}

void f_9b9_a0_v(void)
{
	object L0;
	@GetScene(L0);
	@BroadcastMessage("battle", f_93c_a0_o(), L0);
}

string f_9c4_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_9cb_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_9c4_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_9dc_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1);
}

void f_9e1_a2_v(object a0, object a1)
{
	@SetVariable("b1q03_retreat", 1);
	a1->SetReturnValue(0);
}

int f_9ea_a0_i(void)
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

int f_9fb_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_a01_a1_v(object a0)
{
	if (f_9fb_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

int f_a0e_a0_i(void)
{
	return 518097;
}

int f_a10_a0_i(void)
{
	return 518096;
}

string f_a12_a0_s(void)
{
	return "ui/NPC_Citizen2.png";
}

string f_a14_a0_s(void)
{
	return "ui/NPC_Citizen2_b.png";
}

bool f_a16_a0_b(void)
{
	return false;
}

void f_a18_a0_v(void)
{
	object L0;
	@GetScene(L0);
	L0->RemoveStationaryActor(f_93c_a0_o());
}

void f_a22_a1_v(object a0)
{
	if (f_74c_a1_b(a0)) {
		f_966_a2_b(a0, -0.10000000149011612);
		f_9a4_a2_b("quest_b1_03", "doberman_dead");
	}
	f_a18_a0_v();
	t6{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_829_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_86d_a5_v(a0, a1, a2, a4, a5);
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
	f_a22_a1_v(a0);
}

bool f_a61_a1_b(object a0)
{
	return f_7e5_a1_b(a0);
}

void f_a68_a1_v(object a0)
{
	t4{a0, true};
}

