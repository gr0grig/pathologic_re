event OnLoad 5;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;

var object g0;

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
		f_5d_a0_v();
		if (!f_3d_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_42_a1_v("Neutral");
			@lshWaitForAnimEnd();
		}
		@Hold();
	}

	void OnUnload(void)
	{
		t0{};
	}

	void OnUse(object a0)
	{
		f_5e_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_31_a1_b(a0);
		@WaitForAnimEnd();
	}
}

bool f_31_a1_b(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	bool L3;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@Rotate(L2.x, L2.z, L3);
	return L3;
}

bool f_3d_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_42_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

bool f_54_a0_b(void)
{
	bool L0;
	f_42_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

void f_5d_a0_v(void)
{
}

void f_5e_a1_v(object a0)
{
	f_54_a0_b();
}

