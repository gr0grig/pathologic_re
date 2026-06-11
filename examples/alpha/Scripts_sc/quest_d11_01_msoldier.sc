event evt_11 11;
event OnUse 0;
event OnHit 22;
event OnPropertyChange 16;
event OnDeath 41;
event OnHear 3;
event OnStopHear 4;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnSee 1;
event OnTimer 7;

var object g0;
var object g1;

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
		if (!f_5dd_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_7c1_a0_i());
		L0->SetPhoto(f_7c3_a0_s());
		L0->SetPlayerName(f_6b5_a0_i());
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
		f_615_a1_v(a0);
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
			if (f_6a9_a1_b(tv1)) {
				f_6a3_a2_v(tv1, tv0);
				f_83_a1_v("Neutral");
				tv0->SetMessage(14445);
				tv0->ClearReplies();
				tv0->AddReply(14446, 15675, 15674);
				tv0->AddReply(14456, 15687, 15686);
				break;
			}
			return;
		}
		if (f_7c5_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_619_a1_v(tv2);
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

	void f_83_a1_v(string a0)
	{
		if (!f_7c5_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_619_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_62b_a0_v();
			if (a1 == 15678) {
				f_693_a2_v(tv1, tv0);
			}
			if (a1 == 15679) {
				f_693_a2_v(tv1, tv0);
			}
			if (a0 == 15673) {
				if (f_6a9_a1_b(tv1)) {
					f_6a3_a2_v(tv1, tv0);
					f_83_a1_v("Neutral");
					tv0->SetMessage(14445);
					tv0->ClearReplies();
					tv0->AddReply(14446, 15675, 15674);
					tv0->AddReply(14456, 15687, 15686);
					return;
				}
			}
			if (a0 == 15687) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(14457);
				tv0->ClearReplies();
				tv0->AddReply(14458, 15689, 15688);
				return;
			}
			if (a0 == 15689) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(14459);
				tv0->ClearReplies();
				tv0->AddReply(14460, 15681, 15690);
				return;
			}
			if (a0 == 15675) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(14447);
				tv0->ClearReplies();
				tv0->AddReply(14448, 15677, 15676);
				tv0->AddReply(14452, 15681, 15680);
				return;
			}
			if (a0 == 15681) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(14453);
				tv0->ClearReplies();
				tv0->AddReply(14454, 15677, 15682);
				tv0->AddReply(14455, 15677, 15684);
				return;
			}
			if (a0 == 15677) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(14449);
				tv0->ClearReplies();
				tv0->AddReply(14450, -1, 15678);
				tv0->AddReply(14451, -1, 15679);
				return;
			}
			tv3 = true;
			if (f_7c5_a0_b()) {
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
	void init(object a0)
	{
		f_6e4_a0_v();
		f_149_a1_v(a0);
	}

	void f_149_a1_v(object a0)
	{
		disable OnUse;
		f_160_a1_v(a0);
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
			@WorkWithCorpse(a0);
		}
	}

	void f_160_a1_v(object a0)
	{
		if (a0 == null) {
			f_1b7_a1_v("fdie");
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

	void f_1b7_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
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

task t3
{
	var object tv0;

	void init(object a0)
	{
		tv0 = a0;
		@Face(a0);
		for (; ; ) {
			bool L0;
			@Sleep(0.5, L0);
			if (!L0 || !f_570_a1_b(tv0)) {
				break;
			}
		}
		@StopAsync();
	}

	void f_1eb_a0_v(void)
	{
		@StopAsync();
		@KillTimer(100);
		@StopGroup0();
	}

	void OnDeath(object a0)
	{
		f_1eb_a0_v();
		global.OnDeath(a0);
	}

	void OnHear(object a0)
	{
		if (a0 == tv0) {
			@KillTimer(100);
			@Face(tv0);
		}
	}

	void OnStopHear(object a0)
	{
		if (a0 == tv0) {
			@SetTimer(100, 3.0);
			f_5cb_a1_v(tv0);
		}
	}

	void OnAttacked(object a0)
	{
		if (!f_570_a1_b(a0)) {
			f_743_a1_v(a0);
			return;
		}
		f_1eb_a0_v();
		f_750_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_799_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_77d_a1_b(a0)) {
			f_1eb_a0_v();
			f_793_a1_v(a0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 != 100) {
			return;
		}
		@KillTimer(100);
		@StopGroup0();
	}
}

task t4
{
	var object tv0;
	var bool tv1;

	void init(object a0)
	{
		bool L0;
		int L1;
		int L2;
		tv0 = a0;
		@CanSee(tv1, tv0);
		if (tv1) {
			if (f_770_a1_b(tv0)) {
				f_738_a2_v(tv0, true);
				return;
			}
			@Face(tv0);
		}
		@PlayAnimation("all", "shoot_begin");
		@WaitForAnimEnd(L0);
		if (!L0) {
			@StopAsync();
			return;
		}
		@Speak("shot");
		@PlayAnimation("all", "shoot_end");
		@WaitForAnimEnd(L0);
		if (!L0) {
			@StopAsync();
			return;
		}
		@LockAnimationEnd("all", "attack_on");
		L1 = 0;
		L2 = 0;
		for (; L2 < 20; L2++) {
			@Sleep(0.5, L0);
			if (!L0) {
				return;
			}
			@CanSee(tv1, tv0);
			if (tv1) {
				L1 = 0;
				if (f_770_a1_b(tv0)) {
					f_2d5_a0_v();
					f_738_a2_v(tv0, false);
					return;
				}
				@Face(tv0);
			} else {
				@StopAsync();
				L1 = L1 + 1;
				if (L1 == 4) {
					@PlayAnimation("all", "attack_off");
					@WaitForAnimEnd();
					return;
				}
			}
		}
		f_2d5_a0_v();
		f_738_a2_v(a0, false);
	}

	void OnAttacked(object a0)
	{
		if (!f_570_a1_b(a0)) {
			f_743_a1_v(a0);
			return;
		}
		f_2d5_a0_v();
		f_750_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_799_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void f_2d5_a0_v(void)
	{
		@StopAsync();
		@StopGroup0();
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_2d5_a0_v();
		global.OnDeath(a0);
	}
}

task t5
{
	var object tv0;
	var object tv1;
	var bool tv2;

	void init(object a0, bool a1)
	{
		tv0 = a0;
		@Face(tv0);
		if (a1) {
			@PlayAnimation("all", "attack_on");
			@WaitForAnimEnd();
		}
		@LockAnimationEnd("all", "attack_on");
		@SetAttackState(true);
		while (f_570_a1_b(tv0)) {
			bool L0;
			bool L1;
			@CanSee(L1, tv0);
			if (L1) {
				f_38e_a0_v();
			} else {
				f_5cb_a1_v(tv0);
				tv2 = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(L0);
				if (!L0) {
					if (tv1 != null) {
						f_389_a0_v();
					}
					@LockAnimationEnd("all", "attack_on");
					continue;
				}
				if (!f_570_a1_b(tv0)) {
					break;
				}
				@CanSee(L1, tv0);
				if (L1) {
					tv2 = false;
					@Face(tv0);
					f_38e_a0_v();
				} else {
					@LockAnimationEnd("all", "attack_on");
					@Sleep(3, L0);
					if (!L0) {
						if (tv1 != null) {
							f_389_a0_v();
						}
						@LockAnimationEnd("all", "attack_on");
						continue;
					}
					if (!f_570_a1_b(tv0)) {
						break;
					}
					tv2 = false;
					@CanSee(L1, tv0);
					if (L1) {
						@Face(tv0);
						f_38e_a0_v();
					} else {
						break;
					}
				}
			}
			if (tv1 != null) {
				f_389_a0_v();
			} else {
				@Sleep(2);
			}
		}
		@SetAttackState(false);
		@StopAsync();
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
	}

	void OnHear(object a0)
	{
		if (tv2 && a0 == tv0) {
			f_5cb_a1_v(tv0);
		}
	}

	void OnSee(object a0)
	{
		if (tv2 && a0 == tv0) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}

	void f_389_a0_v(void)
	{
		tv0 = tv1;
		tv1 = null;
		@Face(tv0);
	}

	void f_38e_a0_v(void)
	{
		Vector L0;
		Vector L1;
		Vector L2;
		object L3;
		int L4;
		Vector L5;
		@ReportAttack(tv0);
		@GetDirection(L0);
		L1 = f_4e5_a1_V(tv0);
		if (f_671_a2_f(L0, L1) < 0.9659258127212524) {
			return;
		}
		@PlayAnimation("all", "attack_begin1");
		@WaitForAnimEnd();
		@Speak("shot");
		@GetDirection(L0);
		L1 = f_4e5_a1_V(tv0);
		L1.y += f_5d6_a1_f(tv0);
		@RandVecCone3D(L2, L1, 0.2617993950843811);
		@GetVictimMaterial(L2, L3, L4, L5);
		if (L3 != null) {
			if (L3 == tv0) {
				float L6;
				L6 = f_507_a3_f(tv0, 1.5, 0);
				@ReportHit(tv0, 2, L6, 1.5);
			} else {
				if (L4 != -1) {
					object L7;
					object L8;
					@GetScene(L7);
					@AddActorByType(L8, "scripted", L7, L5, [0.0, 0.0, 1.0], "richochet.xml");
					L8->SetScriptProperty("Material", L4);
				}
			}
		}
		@PlayAnimation("all", "attack_end1");
		@WaitForAnimEnd();
		@LockAnimationEnd("all", "attack_on");
	}

	void OnAttacked(object a0)
	{
		if (!f_570_a1_b(a0)) {
			return;
		}
		f_743_a1_v(a0);
		if (a0 == tv0) {
			tv1 = null;
		} else {
			tv1 = a0;
			if (tv2) {
				@StopAnimation();
				@StopGroup0();
			}
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_799_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}
}

maintask t6
{
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void OnAttacked(object a0)
	{
		f_687_a2_b("quest_d11_01", "soldier_attack");
		t7{f_4f4_a0_o()};
	}
}

task t7
{
	var Vector tv0;
	var Vector tv1;

	void init(object a0)
	{
		f_731_a0_v();
		OnAttacked(a0);
		for (; ; ) {
			f_435_a0_v();
		}
	}

	void f_435_a0_v(void)
	{
		f_731_a0_v();
		for (; ; ) {
			f_48a_a0_v();
		}
	}

	void f_43d_a0_v(void)
	{
	}

	void OnHear(object a0)
	{
		if (!f_570_a1_b(a0)) {
			return;
		}
		if (!f_778_a1_b(a0)) {
			bool L0;
			g0->in(L0, a0);
			if (!L0) {
				return;
			}
		}
		f_4d8_a0_v();
		t3{a0};
	}

	void OnAttacked(object a0)
	{
		if (!f_570_a1_b(a0)) {
			f_743_a1_v(a0);
			return;
		}
		f_4d8_a0_v();
		f_750_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_799_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_77d_a1_b(a0)) {
			f_4d8_a0_v();
			f_7c7_a1_v(a0);
		}
	}

	void f_48a_a0_v(void)
	{
		@GetPFPosition(tv1);
		@GetDirection(tv0);
		for (; ; ) {
			int L0;
			bool L1;
			@irand(L0, 60);
			@Sleep(L0 + 30, L1);
			if (L1) {
				f_43d_a0_v();
			} else {
				for (; ; ) {
					Vector L2;
					@GetPFPosition(L2);
					if (f_642_a2_f(tv1, L2) > 40000) {
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

void f_4d8_a0_v(void)
{
	@StopGroup0();
	@Stop();
}

string f_4dd_a1_s(int a0)
{
	if (a0 == 1) {
		return "fire";
	}
	return "phys";
}

Vector f_4e5_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_4ec_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

object f_4f4_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

bool f_4fb_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_507_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_4fb_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_4fb_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_4dd_a1_s(a2);
	if (!f_4fb_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_646_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_64d_a3_f(L4 - L5, 0, 1));
	return L5;
}

bool f_547_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_54c_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_547_a1_b(a0)) {
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

bool f_570_a1_b(object a0)
{
	int L0;
	if (!f_54c_a1_b(a0)) {
		return false;
	}
	if (!f_4fb_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_588_a3_v(object a0, int a1, float a2)
{
	if (a1 != 4 && a1 != 5) {
		object L0;
		object L1;
		Vector L2;
		float L3;
		@GetScene(L0);
		@GetPosition(L2);
		@GetEyesHeight(L3);
		L2.y += L3 / 2;
		@AddActorByType(L1, "scripted", L0, L2, [0.0, 0.0, 1.0], "blood.xml");
	}
	if (a0 == null) {
		return;
	}
	int L4;
	@GetSecondaryAnimationType(L4);
	if (L4 < 0) {
		return;
	}
	Vector L5;
	a0->GetPosition(L5);
	Vector L6;
	@GetPosition(L6);
	Vector L7;
	@GetDirection(L7);
	Vector L8;
	L8 = L6 - L5;
	string L9;
	if (L8.x * L7.x + L8.z * L7.z >= 0) {
		L9 = "fhit";
	} else {
		L9 = "bhit";
	}
	@FadeSecondaryAnimation("hit_react", L9 + "1", L9 + "2", -10);
}

void f_5cb_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

float f_5d6_a1_f(object a0)
{
	float L0;
	float L1;
	@GetEyesHeight(L0);
	a0->GetEyesHeight(L1);
	return L1 - L0;
}

bool f_5dd_a1_b(object a0)
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
	L5 = L3 * 70 + f_638_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_615_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_619_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_62b_a0_v(void)
{
	if (f_7c5_a0_b()) {
		@lshStopSpeech();
	}
}

object f_632_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_638_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_642_a2_f(Vector a0, Vector a1)
{
	Vector L0;
	L0 = a1 - a0;
	return L0 | L0;
}

float f_646_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_64d_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

object f_658_a0_o(void)
{
	object L0;
	@CreateObjectSet(L0);
	return L0;
}

float f_65e_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_667_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_671_a2_f(Vector a0, Vector a1)
{
	return f_65e_a2_f(a0, a1) / (f_667_a1_f(a0) * f_667_a1_f(a1));
}

int f_682_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_687_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_693_a2_v(object a0, object a1)
{
	@SetVariable("d11q01", 3);
	f_687_a2_b("quest_d11_01", "soldier_attack");
	f_687_a2_b("quest_d11_01", "restore_andrei");
}

void f_6a3_a2_v(object a0, object a1)
{
	@SetVariable("ood11Officer1", 1);
}

bool f_6a9_a1_b(object a0)
{
	if (f_682_a1_i("ood11Officer1") == 0) {
		return true;
	}
	return false;
}

int f_6b5_a0_i(void)
{
	int L0;
	@GetVariable("player", L0);
	if (L0 == 0) {
		return 200001;
	} else {
		if (L0 == 1) {
			return 200002;
		}
	}
	return 200003;
}

void f_6c6_a2_v(int a0, int a1)
{
	if (a0 > a1) {
		@Trace("GenerateMoney: iMin > iMax");
		return;
	}
	int L0;
	L0 = 0;
	if (a0 != a1) {
		int L1;
		@irand(L1, a1 - a0);
	} else {
		if (a0 == 0) {
			return;
		}
	}
	L0 = L0 + a0;
	if (L0 == 0) {
		return;
	}
	int L2;
	@GetInvItemByName(L2, "Money");
	bool L3;
	@AddItem(L3, L2, 0, L0);
}

void f_6e4_a0_v(void)
{
	int L0;
	bool L1;
	@ClearSubContainer(0);
	f_6c6_a2_v(500, 1000);
	@irand(L0, 4);
	if (L0 != 0) {
		@AddItem(L1, f_709_a1_i("rifle_ammo"), 0, L0);
	}
	@irand(L0, 3);
	if (L0 == 0) {
		@AddItem(L1, f_709_a1_i("rusk"), 0, 1);
	}
}

int f_709_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_70e_a1_v(object a0)
{
	t2{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_588_a3_v(a0, a1, a2);
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
	f_7cd_a1_v(a0);
}

void f_731_a0_v(void)
{
	g0 = f_658_a0_o();
}

void f_738_a2_v(object a0, bool a1)
{
	t5{a0, a1};
	@ResetAAS();
}

void f_743_a1_v(object a0)
{
	bool L0;
	if (a0 == null) {
		return;
	}
	g0->in(L0, a0);
	if (!L0) {
		g0->add(a0);
	}
}

void f_750_a1_v(object a0)
{
	f_743_a1_v(a0);
	f_738_a2_v(a0, true);
}

void f_75b_a1_v(object a0)
{
	bool L0;
	g0->in(L0, a0);
	if (L0) {
		f_738_a2_v(a0, true);
	} else {
		t4{a0};
		@ResetAAS();
	}
}

bool f_770_a1_b(object a0)
{
	return f_4ec_a1_f(a0) <= 40000.0;
}

bool f_778_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_77d_a1_b(object a0)
{
	bool L0;
	if (!f_570_a1_b(a0)) {
		return false;
	}
	g0->in(L0, a0);
	if (L0) {
		return true;
	}
	return f_778_a1_b(a0);
}

void f_793_a1_v(object a0)
{
	f_7c7_a1_v(a0);
}

bool f_799_a2_b(object a0, object a1)
{
	float L0;
	bool L1;
	if (!f_4fb_a2_b(a1, "reputation")) {
		return false;
	}
	a1->GetProperty("reputation", L0);
	if (L0 < 0.5) {
		return false;
	}
	@CanSee(L1, a0);
	if (L1 || f_4ec_a1_f(a0) <= 160000.0) {
		@ReportReputationChange(a0, a1, -0.20000000298023224);
		return true;
	}
	return false;
}

int f_7c1_a0_i(void)
{
	return 14841;
}

string f_7c3_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_7c5_a0_b(void)
{
	return false;
}

void f_7c7_a1_v(object a0)
{
	f_75b_a1_v(a0);
}

void f_7cd_a1_v(object a0)
{
	object L0;
	@GetScene(L0);
	L0->RemoveStationaryActor(f_632_a0_o());
	f_70e_a1_v(a0);
}

