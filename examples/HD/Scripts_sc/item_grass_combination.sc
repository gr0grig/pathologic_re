property int ItemID1;
property int ItemID2;
property int Container;

maintask t0
{
	void init(void)
	{
		int L0;
		object L1;
		float L2;
		float L3;
		float L4;
		@GetItemPosByID(L0, ItemID1, ItemID2, Container);
		if (L0 == -1) {
			@Trace("error: " + ItemID1 + " " + ItemID2);
			return;
		}
		@GetItem(L1, L0, Container);
		L1->GetProperty(L2, "hl_inc");
		L1->GetProperty(L3, "im_inc");
		@Trace("GC: " + L2 + " " + L3 + " " + L4);
		f_42_a4_b("health", L2, 0, 1);
		f_6a_a1_v(L2);
		f_42_a4_b("immunity", L3, 0, 1);
		f_60_a1_v(L3);
		@RemoveItem(L0, 1, Container);
	}
}

bool f_42_a4_b(string a0, float a1, float a2, float a3)
{
	bool L0;
	float L1;
	@HasProperty(a0, L0);
	if (!L0) {
		return false;
	}
	@GetProperty(a0, L1);
	@SetProperty(a0, f_55_a3_f(L1 + a1, a2, a3));
	return true;
}

float f_55_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_60_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(13, L0);
}

void f_6a_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

