maintask t0
{
	void init(void)
	{
		float L0;
		@PlaySound("drink");
		f_3b_a4_b("hunger", -0.009999999776482582, 0, 1);
		f_95_a1_v(-0.009999999776482582);
		@GetProperty("tiredness", L0);
		if (L0 + 0.029999999329447746 > 1) {
			float L1;
			L1 = L0 + 0.029999999329447746 - 1;
			f_3b_a4_b("health", -L1, 0, 1);
			f_9f_a1_v(-L1);
		}
		f_3b_a4_b("tiredness", 0.029999999329447746, 0, 1);
		f_8b_a1_v(0.029999999329447746);
		f_7e_a3_v(f_4e_a0_o(), "bottle_empty", 1);
	}
}

bool f_3b_a4_b(string a0, float a1, float a2, float a3)
{
	bool L0;
	float L1;
	@HasProperty(a0, L0);
	if (!L0) {
		return false;
	}
	@GetProperty(a0, L1);
	@SetProperty(a0, f_54_a3_f(L1 + a1, a2, a3));
	return true;
}

object f_4e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_54_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_5f_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_6b_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	} else {
		f_5f_a2_v(L0, a2);
	}
}

void f_7e_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_6b_a3_v(a0, L0, a2);
}

void f_8b_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(11, L0);
}

void f_95_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(12, L0);
}

void f_9f_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(15, L0);
}

