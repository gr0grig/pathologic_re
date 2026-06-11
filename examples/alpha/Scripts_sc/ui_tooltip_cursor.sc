event OnDraw 0;

maintask t0
{
	void init(void)
	{
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		object L0;
		int L1;
		int L2;
		int L3;
		string L4;
		object L5;
		L1 = 0;
		L2 = 0;
		@ClientToScreen(L1, L2);
		@FindWindow(L0, L1, L2);
		if (!L0) {
			return;
		}
		L0->GetTooltipType(L3);
		L0->GetTooltipText(L4);
		L0->GetTooltipObject(L5);
		f_aa_a5_v(L3, L4, L5, L1, L2);
	}
}

int f_24_a2_i(object a0, int a1)
{
	if (a1 == 0) {
		bool L0;
		int L1;
		@HasInvItemProperty(L0, f_61_a1_i(a0), "Price");
		if (!L0) {
			@Trace("Item with id :" + f_61_a1_i(a0) + " doesn't have price");
			return 1;
		}
		@GetInvItemProperty(L1, f_61_a1_i(a0), "Price");
		return L1;
	}
	bool L2;
	@HasInvItemProperty(L2, f_61_a1_i(a0), "BarterPrice" + a1);
	if (!L2) {
		return 0;
	}
	int L3;
	@GetInvItemProperty(L3, f_61_a1_i(a0), "BarterPrice" + a1);
	if (L3 > 0) {
		return L3;
	}
	return -L3;
}

int f_61_a1_i(object a0)
{
	int L0;
	a0->GetItemID(L0);
	return L0;
}

float f_66_a3_f(object a0, int a1, int a2)
{
	float L0;
	int L1;
	if (a2 != 0) {
		return 1;
	}
	L0 = 1;
	for (L1 = 1; L1 <= a1; L1++) {
		bool L2;
		a0->HasProperty("sellf" + L1, L2);
		if (L2) {
			a0->GetProperty("sellf" + L1, L0);
		}
	}
	return L0 / 100;
}

float f_80_a3_f(object a0, int a1, int a2)
{
	float L0;
	int L1;
	if (a2 != 0) {
		return 1;
	}
	L0 = 1;
	for (L1 = 1; L1 <= a1; L1++) {
		bool L2;
		a0->HasProperty("buyf" + L1, L2);
		if (L2) {
			a0->GetProperty("buyf" + L1, L0);
		}
	}
	return L0 / 100;
}

int f_9a_a0_i(void)
{
	object L0;
	bool L1;
	int L2;
	@GetContainer(L0);
	L0->HasProperty("barter", L1);
	if (!L1) {
		return 0;
	}
	L0->GetProperty("barter", L2);
	return L2;
}

void f_aa_a5_v(int a0, string a1, object a2, int a3, int a4)
{
	if (a0 == 1) {
		f_129_a3_v(a3, a4, a2);
	} else {
		if (a0 == 2) {
			f_174_a3_v(a3, a4, a2);
		} else {
			if (a0 == 3) {
				f_1e7_a4_v(a3, a4, a2, true);
			} else {
				if (a0 == 4) {
					f_1e7_a4_v(a3, a4, a2, false);
				} else {
					if (a0 == 5) {
						f_265_a4_v(a3, a4, a1, a2);
					}
				}
			}
		}
	}
}

void f_e0_a4_v(int a0, int a1, int a2, int a3)
{
	@BlitClipped("bg", a0, a1, a0, a1, a2, a3);
	@StretchBlit("border", a0, a1, a2, 1);
	@StretchBlit("border", a0, a1 + a3 - 1, a2, 1);
	@StretchBlit("border", a0, a1, 1, a3);
	@StretchBlit("border", a0 + a2 - 1, a1, 1, a3);
}

void f_fb_a3_v(int a0, int a1, object a2)
{
	int L0;
	string L1;
	if (!a2) {
		return;
	}
	L0 = f_61_a1_i(a2);
	@GetInvItemSprite2(L1, L0);
	@LoadImage(L1);
	@StretchBlit(L1, a0, a1, 218, 218);
	@StretchBlit("border", a0, a1, 218, 1);
	@StretchBlit("border", a0, a1 + 218 - 1, 218, 1);
	@StretchBlit("border", a0, a1, 1, 218);
	@StretchBlit("border", a0 + 218 - 1, a1, 1, 218);
}

void f_129_a3_v(int a0, int a1, object a2)
{
	int L0;
	string L1;
	bool L2;
	int L3;
	int L4;
	int L5;
	int L6;
	int L7;
	int L8;
	if (!a2) {
		return;
	}
	L0 = f_61_a1_i(a2);
	@HasInvItemProperty(L2, L0, "Description");
	if (L2) {
		@GetInvItemProperty(L3, L0, "Description");
		@GetStringByID(L1, L3);
	} else {
		L1 = "Error: Item doesnt have description (FIXME!)";
	}
	@GetTextHeightInWidth(L4, "default", 218, L1);
	@GetScreenSize(L5, L6);
	L4 = L4 + 266;
	if (L5 - a0 > 250) {
		L7 = a0;
	} else {
		L7 = a0 - 250;
	}
	if (a1 > L4) {
		L8 = a1 - L4;
	} else {
		L8 = a1;
	}
	@ScreenToClient(L7, L8);
	f_e0_a4_v(L7, L8, 250, L4);
	f_fb_a3_v(L7 + 16, L8 + 16, a2);
	@PrintInWidth(L4, "default", L7 + 16, L8 + 16 + 218 + 16, 218, L1, 0.6470588445663452, 0.6470588445663452, 0.6470588445663452);
}

void f_174_a3_v(int a0, int a1, object a2)
{
	if (!a2) {
		return;
	}
	int L0;
	a2->size(L0);
	if (!L0) {
		return;
	}
	object L1;
	string L2;
	while (L0) {
		string L3;
		int L4;
		int L5;
		float L6;
		int L7;
		float L8;
		float L9;
		int L10;
		int L11;
		L5 = 0;
		L6 = 0;
		for (L7 = 0; L7 < L0; L7++) {
			a2->get(L1, L7);
			L1->GetTime(L8);
			if (L8 > L6) {
				L6 = L8;
				L5 = L7;
			}
		}
		a2->get(L1, L5);
		L1->GetTextID(L4);
		@GetStringByID(L3, L4);
		L1->GetTime(L9);
		L10 = (int)L9;
		L11 = 60 * (L9 - L10);
		if (L11 < 10) {
			L2 = L2 + (L10 % 24 + ":0" + L11 + " ");
		} else {
			L2 = L2 + (L10 % 24 + ":" + L11 + " ");
		}
		L2 = L2 + L3;
		a2->remove(L5);
		L0 = L0 + -1;
		if (L0) {
			L2 = L2 + "\n\n";
		}
	}
	int L12;
	@GetTextHeightInWidth(L12, "default", 218, L2);
	L12 = L12 + 32;
	int L13;
	int L14;
	@GetScreenSize(L13, L14);
	int L15;
	if (L13 - a0 > 250) {
		L15 = a0;
	} else {
		L15 = a0 - 250;
	}
	int L16;
	if (a1 > L12) {
		L16 = a1 - L12;
	} else {
		L16 = a1;
	}
	@ScreenToClient(L15, L16);
	f_e0_a4_v(L15, L16, 250, L12);
	@PrintInWidth(L12, "default", L15 + 16, L16 + 16, 218, L2, 0.6470588445663452, 0.6470588445663452, 0.6470588445663452);
}

void f_1e7_a4_v(int a0, int a1, object a2, bool a3)
{
	object L0;
	float L1;
	int L2;
	int L3;
	int L4;
	float L5;
	string L6;
	bool L7;
	int L8;
	string L9;
	int L10;
	int L11;
	int L12;
	int L13;
	int L14;
	if (!a2) {
		return;
	}
	@GetContainer(L0);
	@GetGameTime(L1);
	L2 = 1 + L1 / 24;
	L3 = f_61_a1_i(a2);
	L4 = f_24_a2_i(a2, f_9a_a0_i());
	if (a3) {
		L5 = f_66_a3_f(L0, L2, f_9a_a0_i());
	} else {
		L5 = f_80_a3_f(L0, L2, f_9a_a0_i());
	}
	L4 = L4 * L5;
	@HasInvItemProperty(L7, L3, "Description");
	if (L7) {
		@GetInvItemProperty(L8, L3, "Description");
		@GetStringByID(L6, L8);
	} else {
		L6 = "Error: Item doesnt have description (FIXME!)";
	}
	L6 = L6 + "\n";
	@GetStringByID(L9, 200005);
	L6 = L6 + (L9 + ": " + L4);
	@GetTextHeightInWidth(L10, "default", 218, L6);
	L10 = L10 + 266;
	@GetScreenSize(L11, L12);
	if (L11 - a0 > 250) {
		L13 = a0;
	} else {
		L13 = a0 - 250;
	}
	if (a1 > L10) {
		L14 = a1 - L10;
	} else {
		L14 = a1;
	}
	@ScreenToClient(L13, L14);
	f_e0_a4_v(L13, L14, 250, L10);
	f_fb_a3_v(L13 + 16, L14 + 16, a2);
	@PrintInWidth(L10, "default", L13 + 16, L14 + 16 + 218 + 16, 218, L6, 0.6470588445663452, 0.6470588445663452, 0.6470588445663452);
}

void f_265_a4_v(int a0, int a1, string a2, object a3)
{
	int L0;
	int L1;
	int L2;
	int L3;
	int L4;
	@GetTextHeightInWidth(L0, "default", 218, a2);
	L0 = L0 + 32;
	@GetScreenSize(L1, L2);
	if (L1 - a0 > 250) {
		L3 = a0;
	} else {
		L3 = a0 - 250;
	}
	if (a1 > L0) {
		L4 = a1 - L0;
	} else {
		L4 = a1;
	}
	@ScreenToClient(L3, L4);
	f_e0_a4_v(L3, L4, 250, L0);
	@PrintInWidth(L0, "default", L3 + 16, L4 + 16, 218, a2, 0.6470588445663452, 0.6470588445663452, 0.6470588445663452);
}

