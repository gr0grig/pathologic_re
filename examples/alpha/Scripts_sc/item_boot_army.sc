event OnDispose 32;
event OnInventoryRemoveItem 34;
event OnInventorySelChange 35;
event OnHit 22;

property int ItemID1;
property int ItemID2;
property int Container;
var int g3;
var int g4;
var int g5;
var int g6;
var int g7;
var int g8;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		float L0;
		tv0 = false;
		g3 = 0;
		g4 = 0;
		g5 = 0;
		g6 = 0;
		g7 = 0;
		g8 = 0;
		f_9f_a0_v();
		f_7c_a0_v();
		@GetGameTime(L0);
		for (; ; ) {
			float L1;
			float L2;
			int L3;
			@GetGameTime(L1);
			L2 = L1 - L0;
			L3 = L2 / 1.2000000476837158;
			if (L3 > 0) {
				int L4;
				L0 = L1 - L2 % 1.2000000476837158;
				@GetItemPosByID(L4, ItemID1, ItemID2, Container);
				if (L4 != -1) {
					object L5;
					bool L6;
					int L7;
					@GetItem(L5, L4, Container);
					L5->HasProperty(L6, "durability");
					if (L6) {
						L5->GetProperty(L7, "durability");
						L7 = f_cf_a3_i(L7 - L3, 0, 100);
					} else {
						L7 = 100;
					}
					L5->SetProperty("durability", L7);
					@SetItem(L5, 1, L4, Container);
					f_da_a1_v(L7);
				}
			}
			@sync();
			if (tv0) {
				break;
			}
		}
	}

	void OnDispose(void)
	{
		f_c8_a2_v("armor", -g3);
		f_c8_a2_v("armor_fire", -g4);
		f_c8_a2_v("armor_phys", -g5);
		f_c8_a2_v("armor_disease", -g6);
		f_c8_a2_v("visibility", -g7);
		f_c8_a2_v("audibility", -g8);
		tv0 = true;
	}

	void f_7c_a0_v(void)
	{
		int L0;
		@GetItemPosByID(L0, ItemID1, ItemID2, Container);
		if (L0 != -1) {
			object L1;
			bool L2;
			int L3;
			@GetItem(L1, L0, Container);
			L1->HasProperty(L2, "durability");
			if (!L2) {
				L3 = 100;
				L1->SetProperty("durability", L3);
				@SetItem(L1, 1, L0, Container);
			} else {
				L1->GetProperty(L3, "durability");
			}
			f_da_a1_v(L3);
		}
	}

	void f_9f_a0_v(void)
	{
	}

	void OnInventoryRemoveItem(object a0, int a1, int a2, int a3)
	{
		f_b2_a3_v(a1, a2, a3);
	}

	void OnInventorySelChange(object a0, int a1, int a2, bool a3, int a4)
	{
		if (!a3) {
			f_b2_a3_v(a1, a2, a4);
		}
	}

	void f_b2_a3_v(int a0, int a1, int a2)
	{
		if (a0 == ItemID1 && a1 == ItemID2 && Container == a2) {
			OnDispose();
		}
	}
}

void f_c8_a2_v(string a0, int a1)
{
	int L0;
	@GetProperty(a0, L0);
	@SetProperty(a0, L0 + a1);
}

int f_cf_a3_i(int a0, int a1, int a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_da_a1_v(int a0)
{
	g3 = f_124_a4_i("armor", g3, a0, 15);
	g4 = f_124_a4_i("armor_fire", g4, a0, 10);
	g5 = f_124_a4_i("armor_phys", g5, a0, 0);
	g6 = f_124_a4_i("armor_disease", g6, a0, 30);
	g7 = f_124_a4_i("visibility", g7, a0, 0);
	g8 = f_124_a4_i("audibility", g8, a0, -15);
}

int f_124_a4_i(string a0, int a1, int a2, int a3)
{
	int L0;
	L0 = a3 * (a2 / 100.0);
	if (L0 != a1) {
		f_c8_a2_v(a0, L0 - a1);
	}
	return L0;
}

void OnHit(object a0, int a1, float a2, float a3)
{
	if (a1 == 5) {
	} else {
		int L0;
		int L1;
		float L2;
		L0 = g3;
		if (a1 == 4) {
			L0 = L0 + g4;
		} else {
			L0 = L0 + g5;
		}
		@GetProperty("armor", L1);
		if (!L1) {
			L2 = 1;
		} else {
			L2 = (float)L0 / L1;
		}
		L2 = L2 * 0.75;
		if (L2 > 0) {
			int L3;
			@GetItemPosByID(L3, ItemID1, ItemID2, Container);
			if (L3 != -1) {
				object L4;
				bool L5;
				@GetItem(L4, L3, Container);
				L4->HasProperty(L5, "durability");
				if (L5) {
					int L6;
					int L7;
					L6 = (int)(L2 * a3 * 100.0);
					L4->GetProperty(L7, "durability");
					L7 = f_cf_a3_i(L7 - L6, 0, 100);
					L4->SetProperty("durability", L7);
					@SetItem(L4, 1, L3, Container);
					f_da_a1_v(L7);
				}
			}
		}
	}
}

