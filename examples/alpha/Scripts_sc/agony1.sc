event OnLoad 5;
event OnUse 0;
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
	void init(void)
	{
		@SetProperty("agony", 0.5);
		f_15_a0_v();
	}

	void f_e_a0_v(void)
	{
		bool L0;
		@AddItem(L0, "Money", 0, 500);
	}

	void f_15_a0_v(void)
	{
		@RemoveEnvelope();
		@SetRTEnvelope(50, 40);
		for (; ; ) {
			bool L0;
			@PlayAnimation("all", "agony");
			@WaitForAnimEnd(L0);
			if (f_86_a0_b()) {
				if (L0) {
					f_3a_a0_v();
				}
				@SetDeathState();
				f_e_a0_v();
				break;
			}
		}
		@LockAnimationEnd("all", "agony_die");
		for (; ; ) {
			@Hold();
		}
	}

	void f_3a_a0_v(void)
	{
		@PlayAnimation("all", "agony_die");
		@WaitForAnimEnd();
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsDead(L0);
		if (L0) {
			bool L1;
			@IsOverrideActive(L1);
			if (!L1) {
				@WorkWithCorpse(a0);
			}
		} else {
			float L2;
			bool L3;
			@GetProperty("agony", L2);
			if (L2 == 0) {
				return;
			}
			@IsOverrideActive(L3);
			if (!L3) {
				float L4;
				@ShowWindow("agony.xml", true, false, f_b1_a0_o());
				@GetProperty("agony", L4);
				if (L4 == 0) {
					@SetProperty("agony", 0);
					f_9b_a5_b(a0, "reputation", 0.20000000298023224, 0, 1);
				}
			}
		}
	}

	void OnLoad(void)
	{
		bool L0;
		@IsDead(L0);
		if (L0) {
			@LockAnimationEnd("all", "agony_die");
		}
	}

	void OnUnload(void)
	{
		f_8c_a0_v();
		t0{};
	}
}

bool f_86_a0_b(void)
{
	float L0;
	@GetProperty("agony", L0);
	return !L0;
}

void f_8c_a0_v(void)
{
	@StopAnimation();
}

bool f_8f_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_9b_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_8f_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_b7_a3_f(L0 + a2, a3, a4));
	return true;
}

object f_b1_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_b7_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

