maintask t0
{
	void init(void)
	{
		object L0;
		@FindActor(L0, "player");
		f_c_a1_v(L0);
		@Hold();
	}
}

void f_c_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

