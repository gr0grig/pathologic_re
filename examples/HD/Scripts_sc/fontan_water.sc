event OnGameTime 9;
event OnUse 0;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		@SetVisibility(true);
		@SetTimeEvent(0, 24);
		tv0 = false;
		do {
			@Hold();
		} while (!tv0);
		@SetUsable(false);
	}

	void OnGameTime(int a0, float a1)
	{
		if (a0 == 0) {
			@StopGroup0();
			tv0 = true;
		}
	}

	void OnUse(object a0)
	{
		disable OnUse;
		f_46_a5_b(a0, "hunger", -0.009999999776482582, 0, 1);
		f_71_a1_v(-0.009999999776482582);
		f_46_a5_b(a0, "tiredness", 0.029999999329447746, 0, 1);
		f_67_a1_v(0.029999999329447746);
		@PlaySound("drink");
		@Sleep(1);
		enable OnUse;
	}
}

bool f_3a_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_46_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_3a_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_5c_a3_f(L0 + a2, a3, a4));
	return true;
}

float f_5c_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_67_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(11, L0);
}

void f_71_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(12, L0);
}

