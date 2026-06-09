event evt_11 11;
event OnTimer 7;
event OnSee 1;
event OnStopSee 2;
event OnCollision 10;
event OnDeath 41;
event OnUse 0;
event OnHit 22;
event OnPropertyChange 16;
event OnAttacked 17;
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
		if (!f_75b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_917_a0_i());
		L0->SetNPCDescription(f_915_a0_i());
		L0->SetPhoto(f_919_a0_s());
		L0->SetPhoto2(f_91b_a0_s());
		L0->SetPlayerName(f_884_a0_i());
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
		f_7a0_a1_v(a0);
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
			tv0->SetMessage(509102);
			tv0->ClearReplies();
			tv0->AddReply(509103, 9989, 9982);
			tv0->AddReply(509104, 9985, 9983);
			break;
			return;
		}
		if (f_91d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_7b2_a1_v(tv2);
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
		if (!f_91d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_7c2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_7dc_a0_v();
			if (a0 == 9981) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(509102);
				tv0->ClearReplies();
				tv0->AddReply(509103, 9989, 9982);
				tv0->AddReply(509104, 9985, 9983);
				return;
			}
			if (a0 == 9985) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(509106);
				tv0->ClearReplies();
				tv0->AddReply(509107, 9984, 9986);
				return;
			}
			if (a0 == 9984) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(509105);
				tv0->ClearReplies();
				tv0->AddReply(509108, 9988, 9987);
				return;
			}
			if (a0 == 9988) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(509109);
				tv0->ClearReplies();
				tv0->AddReply(509112, 9992, 9991);
				return;
			}
			if (a0 == 9989) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(509110);
				tv0->ClearReplies();
				tv0->AddReply(509111, 9992, 9990);
				return;
			}
			if (a0 == 9992) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(509113);
				tv0->ClearReplies();
				tv0->AddReply(509114, 9994, 9993);
				tv0->AddReply(509116, -1, 9995);
				return;
			}
			if (a0 == 9994) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(509115);
				tv0->ClearReplies();
				tv0->AddReply(509117, -1, 9997);
				tv0->AddReply(509118, 9999, 9998);
				return;
			}
			if (a0 == 9999) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(509119);
				tv0->ClearReplies();
				tv0->AddReply(509120, -1, 10000);
				return;
			}
			tv3 = true;
			if (f_91d_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t2
{
	var object tv0;
	var int tv1;
	var int tv2;
	var bool tv3;
	var float tv4;
	var int tv5;

	void init(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return;
		}
		f_161_a3_v(L0, true, 180.0);
	}

	float f_15b_a2_f(object a0, int a1)
	{
		return 0.30000001192092896;
	}

	int f_15e_a2_i(object a0, int a1)
	{
		return 0;
	}

	void f_161_a3_v(object a0, bool a1, float a2)
	{
		float L0;
		Vector L1;
		Vector L2;
		bool L3;
		bool L4;
		float L5;
		f_246_a0_v();
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
			@SendPlayerEnemy(a0, f_80c_a0_o());
		}
		if (a1) {
			L4 = false;
		} else {
			L4 = true;
		}
		L5 = 400.0 + L0;
		while (f_6ba_a1_b(tv0) && !tv3) {
			Vector L6;
			float L7;
			f_3e3_a0_v();
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L6 = L1 - L2;
			L7 = L6 | L6;
			if (L7 >= L5 * L5) {
				if (!t3{tv0, L0, 10000.0, true, false}) {
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
						if (!t3{tv0, L0, 10000.0, true, false}) {
							break;
						}
						L4 = false;
						continue;
					}
					if (!L4) {
						f_750_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						f_3e3_a0_v();
						@StopAsync();
						L4 = true;
						if (!f_6ba_a1_b(tv0)) {
							break;
						}
					}
					@rand(L10);
					if (L10 < 0.25 || f_3b8_a0_b()) {
						@Face(tv0);
						f_3ea_a0_v();
						@PlayAnimation("all", "attack_stay");
						f_334_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						f_3e3_a0_v();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_3b8_a0_b()) {
							if (!f_6ba_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L1);
							@GetPFPosition(L2);
							L6 = L1 - L2;
							L7 = L6 | L6;
							if (L7 < a2 * a2) {
								if (!f_290_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_290_a1_b(a2)) {
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

	void f_246_a0_v(void)
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

	void f_269_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_15b_a2_f(L0, a1);
			L2 = f_648_a3_f(L0, L1, f_15e_a2_i(L0, a1));
			@ReportHit(tv0, f_3e8_a0_i(), L2, L1);
			f_3ef_a2_v(L0, L2);
		}
	}

	bool f_290_a1_b(float a0)
	{
		int L0;
		bool L1;
		f_3e3_a0_v();
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		f_879_a0_v();
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_3c3_a0_v();
		if (!f_6ba_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_269_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			int L2;
			f_879_a0_v();
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			f_3e3_a0_v();
			if (!f_6ba_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_269_a2_v(a0, L0);
			for (L2 = 1; ; L2++) {
				string L3;
				L3 = "attack_middle" + L0 + "_" + L2;
				@HasAnimation(L1, "all", L3);
				if (!L1) {
					break;
				}
				f_879_a0_v();
				@PlayAnimation("all", L3);
				@WaitForAnimEnd();
				f_3e3_a0_v();
				if (!f_6ba_a1_b(tv0)) {
					@StopAsync();
					return false;
				}
				f_269_a2_v(a0, L0);
			}
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		if (f_3f1_a0_b()) {
			f_319_a1_b(0.75);
			@StopAsync();
		}
		return true;
	}

	bool f_319_a1_b(float a0)
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
				if (f_37b_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
			f_3e3_a0_v();
		}
		return false;
	}

	bool f_334_a1_b(float a0)
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
			if (f_37b_a0_b()) {
				return true;
			}
			if (!f_6ba_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_290_a1_b(a0);
				return true;
			}
			@sync();
		}
		f_3e3_a0_v();
		return false;
	}

	bool f_35f_a0_b(void)
	{
		if (!f_6ba_a1_b(tv0)) {
			return false;
		}
		if (f_3b8_a0_b()) {
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

	bool f_37b_a0_b(void)
	{
		if (f_35f_a0_b() && f_38b_a0_b()) {
			return true;
		}
		return false;
	}

	bool f_38b_a0_b(void)
	{
		object L0;
		bool L1;
		@GetScene(L0);
		L1 = false;
		for (; ; ) {
			float L2;
			Vector L3;
			Vector L4;
			@FindDirLength(L2, -f_61a_a1_V(tv0), tv4);
			if (L2 < tv4) {
				break;
			}
			@Face(tv0);
			@PlayAnimation("all", "bjump");
			tv0->GetPFPosition(L3);
			@GetPFPosition(L4);
			@WaitForAnimEnd();
			f_3e3_a0_v();
			@StopAsync();
			@SetSpeed([0.0, 0.0, 0.0]);
			L1 = true;
			if (!f_35f_a0_b()) {
				break;
			}
		}
		return L1;
	}

	bool f_3b8_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_3c3_a0_v(void)
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
		if (L0 < f_3f5_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv5 = f_3f3_a0_i();
		}
	}

	void f_3e3_a0_v(void)
	{
		f_870_a1_v(tv0);
	}

	int f_3e8_a0_i(void)
	{
		return 0;
	}

	void f_3ea_a0_v(void)
	{
		f_7e3_a1_v("attack_stay");
	}

	void f_3ef_a2_v(object a0, float a1)
	{
	}

	bool f_3f1_a0_b(void)
	{
		return true;
	}

	int f_3f3_a0_i(void)
	{
		return 1;
	}

	float f_3f5_a0_f(void)
	{
		return 0.5;
	}
}

task t3
{
	var bool tv0;
	var object tv1;
	var bool tv2;

	bool init(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		f_870_a1_v(a0);
		@SetTimer(1, 5);
		@CanSee(L0, a0);
		if (L0) {
			tv2 = true;
			f_7d1_a1_v(a0);
		} else {
			tv2 = false;
		}
		if (f_621_a1_b(a0)) {
			@SendPlayerEnemy(a0, f_80c_a0_o());
		}
		L1 = f_460_a5_b(a0, a1, a2, a3, a4);
		if (tv2) {
			@UnlookAsync("head");
		}
		@KillTimer(1);
		return L1;
	}

	void OnTimer(int a0)
	{
		if (a0 == 1) {
			f_870_a1_v(tv1);
		} else {
			f_4c6_a1_v(a0);
		}
	}

	void f_436_a0_v(void)
	{
		@KillTimer(1);
		if (tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
		f_4dc_a0_v();
	}

	void OnSee(object a0)
	{
		if (tv1 == a0 && !tv2) {
			tv2 = true;
			f_7d1_a1_v(a0);
		}
	}

	void OnStopSee(object a0)
	{
		if (tv1 == a0 && tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
	}

	bool f_460_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_4ec_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_4f3_a0_s(), f_4f5_a0_s());
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

	void f_4c6_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_4ec_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_4dc_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_436_a0_v();
		global.OnDeath(a0);
	}

	bool f_4ec_a1_b(object a0)
	{
		return f_6ba_a1_b(a0);
	}

	string f_4f3_a0_s(void)
	{
		return "walk";
	}

	string f_4f5_a0_s(void)
	{
		return "run";
	}
}

task t4
{
	void init(object a0)
	{
		f_50e_a1_v(a0);
		@SetRTEnvelope(50, 40);
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_89b_a1_v(a0);
		}
	}

	void f_50e_a1_v(object a0)
	{
		if (a0 == null) {
			f_569_a1_v("fdie");
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
			f_7e3_a1_v(L4);
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

	void f_569_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_7e3_a1_v(a0);
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

maintask t5
{
	var Vector tv0;
	var Vector tv1;
	var bool tv2;

	void init(void)
	{
		tv2 = true;
		f_5b2_a0_v();
	}

	bool f_58e_a0_b(void)
	{
		return tv2;
	}

	void f_590_a1_v(object a0)
	{
		t0{a0};
		tv2 = false;
	}

	void f_599_a0_v(void)
	{
	}

	void OnUse(object a0)
	{
		if (f_58e_a0_b()) {
			f_606_a0_v();
			f_590_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		bool L0;
		@IsPlayerActor(a0, L0);
		if (L0) {
			t2{};
		}
	}

	void f_5b2_a0_v(void)
	{
		@GetPFPosition(tv1);
		@GetDirection(tv0);
		for (; ; ) {
			int L0;
			bool L1;
			f_60b_a0_v();
			@irand(L0, 10);
			@Sleep(L0 + 5, L1);
			if (L1) {
				f_599_a0_v();
			} else {
				for (; ; ) {
					Vector L2;
					f_60b_a0_v();
					@GetPFPosition(L2);
					if (f_81c_a2_f(tv1, L2) > 40000) {
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
}

void f_606_a0_v(void)
{
	@StopGroup0();
	@Stop();
}

void f_60b_a0_v(void)
{
}

string f_60c_a1_s(int a0)
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

Vector f_61a_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

bool f_621_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_626_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_632_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_626_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_827_a3_f(L0 + a2, a3, a4));
	return true;
}

float f_648_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_626_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_626_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_60c_a1_s(a2);
	if (!f_626_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_820_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_827_a3_f(L4 - L5, 0, 1));
	if (f_621_a1_b(a0)) {
		f_855_a1_v(-L5);
	}
	return L5;
}

bool f_691_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_696_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_691_a1_b(a0)) {
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

bool f_6ba_a1_b(object a0)
{
	int L0;
	if (!f_696_a1_b(a0)) {
		return false;
	}
	if (!f_626_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_6d2_a1_v(object a0)
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

void f_6fe_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_812_a1_V(f_61a_a1_V(a0));
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
			f_742_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_6d2_a1_v(a0);
}

void f_742_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_6d2_a1_v(a0);
}

void f_750_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_75b_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_812_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_91d_a0_b()) {
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

void f_7a0_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_91d_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_7b2_a1_v(string a0)
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

void f_7c2_a2_v(string a0, bool a1)
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

void f_7d1_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_7dc_a0_v(void)
{
	if (f_91d_a0_b()) {
		@lshStopSpeech();
	}
}

void f_7e3_a1_v(string a0)
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

object f_80c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_812_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_81c_a2_f(Vector a0, Vector a1)
{
	Vector L0;
	L0 = a1 - a0;
	return L0 | L0;
}

float f_820_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_827_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

bool f_832_a2_b(object a0, float a1)
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
	f_866_a1_v(a1);
	f_632_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_855_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

void f_866_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

void f_870_a1_v(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		@PlayGlobalMusic("attack");
	}
}

void f_879_a0_v(void)
{
	object L0;
	@GetScene(L0);
	@BroadcastMessage("battle", f_80c_a0_o(), L0);
}

int f_884_a0_i(void)
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

int f_895_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_89b_a1_v(object a0)
{
	if (f_895_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_8a8_a1_v(string a0)
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

void f_8b9_a0_v(void)
{
	if (f_895_a0_i() != 1) {
		return;
	}
	f_8a8_a1_v("liver");
	f_8a8_a1_v("kidney");
	f_8a8_a1_v("heart");
	f_8a8_a1_v("blood");
}

void f_8d1_a1_v(object a0)
{
	bool L0;
	@AddItem(L0, "revolver_ammo", 0, 2);
	@AddItem(L0, "alpha_pills", 0, 2);
	f_8b9_a0_v();
	if (f_621_a1_b(a0)) {
		f_832_a2_b(a0, -0.20000000298023224);
	}
	t4{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_6fe_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_742_a5_v(a0, a1, a2, a4, a5);
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
	f_8d1_a1_v(a0);
}

int f_915_a0_i(void)
{
	return 515572;
}

int f_917_a0_i(void)
{
	return 504031;
}

string f_919_a0_s(void)
{
	return "ui/NPC_Citizen2.png";
}

string f_91b_a0_s(void)
{
	return "ui/NPC_Citizen2_b.png";
}

bool f_91d_a0_b(void)
{
	return false;
}

