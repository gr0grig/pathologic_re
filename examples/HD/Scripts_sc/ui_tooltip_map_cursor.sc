event OnDraw 0;

maintask t0
{
	void init(void)
	{
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
		f_d2_a6_v(L3, L4, L5, L1, L2, 1);
		@Blit("default", 0, 0);
	}
}

int f_27_a1_i(object a0)
{
	int L0;
	a0->GetItemID(L0);
	return L0;
}

int f_2c_a2_i(object a0, int a1)
{
	if (a1 == 0) {
		int L0;
		L0 = f_85_a0_i();
		int L1;
		L1 = 0;
		int L2;
		L2 = 1;
		for (; L2 <= L0; L2++) {
			string L3;
			bool L4;
			L3 = "Price";
			if (L2 != 1) {
				L3 = L3 + L2;
			}
			@HasInvItemProperty(L4, f_27_a1_i(a0), L3);
			if (!L4) {
				continue;
			}
			@GetInvItemProperty(L1, f_27_a1_i(a0), L3);
		}
		bool L5;
		a0->HasProperty(L5, "durability");
		if (L5) {
			int L6;
			a0->GetProperty(L6, "durability");
			L1 = L1 * (0.5 * (1.0 + L6 / 100.0));
		}
		return L1;
	}
	bool L7;
	@HasInvItemProperty(L7, f_27_a1_i(a0), "BarterPrice" + a1);
	if (!L7) {
		return 0;
	}
	int L8;
	@GetInvItemProperty(L8, f_27_a1_i(a0), "BarterPrice" + a1);
	if (L8 > 0) {
		return L8;
	}
	return -L8;
}

string f_7b_a1_s(object a0)
{
	int L0;
	string L1;
	L0 = f_27_a1_i(a0);
	@GetInvItemName(L1, L0);
	return L1;
}

int f_85_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

float f_8e_a3_f(object a0, int a1, int a2)
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

float f_a8_a3_f(object a0, int a1, int a2)
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

int f_c2_a0_i(void)
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

void f_d2_a6_v(int a0, string a1, object a2, int a3, int a4, float a5)
{
	if (a0 == 1) {
		f_155_a5_v(a3, a4, a2, a1, a5);
	} else {
		if (a0 == 2) {
			f_3c1_a4_v(a3, a4, a2, a5);
		} else {
			if (a0 == 3) {
				f_27a_a5_v(a3, a4, a2, true, a5);
			} else {
				if (a0 == 4) {
					f_27a_a5_v(a3, a4, a2, false, a5);
				} else {
					if (a0 == 5) {
						f_43c_a5_v(a3, a4, a1, a2, a5);
					}
				}
			}
		}
	}
}

void f_10e_a5_v(int a0, int a1, int a2, int a3, float a4)
{
	@BlitClipped("bg", a0, a1, a0, a1, a2, a3, a4);
	@StretchBlit("border", a0, a1, a2, 1, a4);
	@StretchBlit("border", a0, a1 + a3 - 1, a2, 1, a4);
	@StretchBlit("border", a0, a1, 1, a3, a4);
	@StretchBlit("border", a0 + a2 - 1, a1, 1, a3, a4);
}

void f_129_a4_v(int a0, int a1, object a2, float a3)
{
	int L0;
	string L1;
	if (!a2) {
		return;
	}
	L0 = f_27_a1_i(a2);
	@GetInvItemSprite2(L1, L0);
	@StretchBlit(L1, a0, a1, 218, 218, a3);
	@StretchBlit("border", a0, a1, 218, 1, a3);
	@StretchBlit("border", a0, a1 + 218 - 1, 218, 1, a3);
	@StretchBlit("border", a0, a1, 1, 218, a3);
	@StretchBlit("border", a0 + 218 - 1, a1, 1, 218, a3);
}

void f_155_a5_v(int a0, int a1, object a2, string a3, float a4)
{
	int L0;
	string L1;
	string L2;
	string L3;
	bool L4;
	int L5;
	int L6;
	int L7;
	bool L8;
	bool L9;
	int L10;
	int L11;
	bool L12;
	bool L13;
	int L14;
	int L15;
	string L16;
	bool L17;
	float L18;
	float L19;
	string L20;
	string L21;
	string L22;
	int L23;
	int L24;
	float L25;
	float L26;
	float L27;
	float L28;
	string L29;
	string L30;
	int L31;
	int L32;
	int L33;
	int L34;
	int L35;
	int L36;
	if (!a2) {
		return;
	}
	L0 = f_27_a1_i(a2);
	@HasInvItemProperty(L4, L0, "Description");
	if (L4) {
		@GetInvItemProperty(L5, L0, "Description");
		@GetStringByID(L1, L5);
	} else {
		L1 = "Error: Item doesnt have description (FIXME!)";
	}
	@GetTextHeightInWidth(L6, "default", 268, L1);
	@GetFontHeight(L7, "default");
	L6 = L6 + L7;
	@HasInvItemProperty(L8, L0, "HasDurability");
	a2->HasProperty(L9, "durability");
	if (L9 || L8) {
		if (L9) {
			a2->GetProperty(L10, "durability");
		} else {
			L10 = 100;
		}
		@GetStringByID(L2, 7);
		L2 = L2 + (" " + L10 + "%");
		@GetTextHeightInWidth(L11, "default", 268, L2);
		L6 = L6 + L11 * 2;
	}
	@HasInvItemProperty(L12, L0, "HasUses");
	a2->HasProperty(L13, "uses");
	if (L13 || L12) {
		if (L13) {
			a2->GetProperty(L14, "uses");
		} else {
			L14 = 1;
		}
		@GetStringByID(L3, 1006);
		L3 = L3 + (" " + L14);
		@GetTextHeightInWidth(L15, "default", 268, L3);
		L6 = L6 + L15;
	}
	L17 = false;
	if (f_7b_a1_s(a2) == "grass_combination") {
		L17 = true;
		a2->GetProperty(L18, "im_inc");
		a2->GetProperty(L19, "hl_inc");
		@GetStringByID(L20, 8);
		@GetStringByID(L22, 9);
		L23 = L18 * 100;
		L16 = L20 + " " + L23 + "%\n";
		L23 = L19 * 100;
		L16 = L16 + (L22 + " " + L23 + "%\n");
		@GetTextHeightInWidth(L24, "default", 268, L16);
		L6 = L6 + L24;
	} else {
		if (f_7b_a1_s(a2) == "organ_combination") {
			L17 = true;
			a2->GetProperty(L25, "DiseaseRate");
			a2->GetProperty(L27, "HealthIncrease");
			@GetStringByID(L29, 11);
			@GetStringByID(L30, 13);
			L31 = L25 * 100;
			L16 = L29 + " " + L31 + "%\n";
			L31 = L27 * 100;
			L16 = L16 + (L30 + " " + L31 + "%\n");
			@GetTextHeightInWidth(L32, "default", 268, L16);
			L6 = L6 + L32;
		}
	}
	@GetScreenSize(L33, L34);
	L6 = L6 + 266;
	if (L33 - a0 > 300) {
		L35 = a0;
	} else {
		L35 = a0 - 300;
	}
	if (a1 > L6) {
		L36 = a1 - L6;
	} else {
		L36 = a1;
		if (L36 + L6 > 600) {
			L36 = 600 - L6;
		}
	}
	@ScreenToClient(L35, L36);
	f_10e_a5_v(L35, L36, 300, L6, a4);
	f_129_a4_v(L35 + 41, L36 + 16, a2, a4);
	L36 = L36 + 250;
	@PrintInWidth(L6, "default", L35 + 16, L36, 268, L1, 0.6470588445663452, 0.6470588445663452, 0.6470588445663452, a4);
	L36 = L36 + (L6 + L7);
	if (L9 || L8) {
		@PrintInWidth(L6, "default", L35 + 16, L36, 268, L2, 0.6470588445663452, 0.6470588445663452, 0.6470588445663452, a4);
		L36 = L36 + L6;
	}
	if (L13 || L12) {
		@PrintInWidth(L6, "default", L35 + 16, L36, 268, L3, 0.6470588445663452, 0.6470588445663452, 0.6470588445663452, a4);
		L36 = L36 + L6;
	}
	if (L17) {
		@PrintInWidth(L6, "default", L35 + 16, L36, 268, L16, 0.6470588445663452, 0.6470588445663452, 0.6470588445663452, a4);
		L36 = L36 + L6;
	}
	@PrintInWidth(L6, "default", L35 + 16, L36, 268, a3, 0.6470588445663452, 0.6470588445663452, 0.6470588445663452, a4);
	L36 = L36 + L6;
}

void f_27a_a5_v(int a0, int a1, object a2, bool a3, float a4)
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
	string L11;
	bool L12;
	bool L13;
	int L14;
	int L15;
	string L16;
	bool L17;
	bool L18;
	int L19;
	int L20;
	string L21;
	bool L22;
	float L23;
	float L24;
	float L25;
	string L26;
	string L27;
	string L28;
	int L29;
	int L30;
	float L31;
	float L32;
	string L33;
	string L34;
	int L35;
	int L36;
	int L37;
	int L38;
	int L39;
	int L40;
	if (!a2) {
		return;
	}
	@GetContainer(L0);
	@GetGameTime(L1);
	L2 = 1 + L1 / 24;
	L3 = f_27_a1_i(a2);
	L4 = f_2c_a2_i(a2, f_c2_a0_i());
	if (a3) {
		L5 = f_8e_a3_f(L0, L2, f_c2_a0_i());
	} else {
		L5 = f_a8_a3_f(L0, L2, f_c2_a0_i());
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
	@GetStringByID(L9, 5);
	L6 = L6 + (L9 + ": " + L4);
	@GetTextHeightInWidth(L10, "default", 268, L6);
	L10 = L10 + 266;
	@HasInvItemProperty(L12, L3, "HasDurability");
	a2->HasProperty(L13, "durability");
	if (L13 || L12) {
		if (L13) {
			a2->GetProperty(L14, "durability");
		} else {
			L14 = 100;
		}
		@GetStringByID(L11, 7);
		L11 = L11 + (" " + L14 + "%");
		@GetTextHeightInWidth(L15, "default", 268, L11);
		L10 = L10 + L15;
	}
	@HasInvItemProperty(L17, L3, "HasUses");
	a2->HasProperty(L18, "uses");
	if (L18 || L17) {
		if (L18) {
			a2->GetProperty(L19, "uses");
		} else {
			L19 = 1;
		}
		@GetStringByID(L16, 1006);
		L16 = L16 + (" " + L19);
		@GetTextHeightInWidth(L20, "default", 268, L16);
		L10 = L10 + L20;
	}
	L22 = false;
	if (f_7b_a1_s(a2) == "grass_combination") {
		L22 = true;
		a2->GetProperty(L23, "im_inc");
		a2->GetProperty(L24, "hl_inc");
		@GetStringByID(L26, 8);
		@GetStringByID(L28, 9);
		L29 = L23 * 100;
		L21 = L26 + " " + L29 + "%\n";
		L29 = L24 * 100;
		L21 = L21 + (L28 + " " + L29 + "%\n");
		@GetTextHeightInWidth(L30, "default", 268, L21);
		L10 = L10 + L30;
	} else {
		if (f_7b_a1_s(a2) == "organ_combination") {
			L22 = true;
			a2->GetProperty(L31, "DiseaseRate");
			a2->GetProperty(L32, "HealthIncrease");
			@GetStringByID(L33, 11);
			@GetStringByID(L34, 13);
			L35 = L31 * 100;
			L21 = L33 + " " + L35 + "%\n";
			L35 = L32 * 100;
			L21 = L21 + (L34 + " " + L35 + "%\n");
			@GetTextHeightInWidth(L36, "default", 268, L21);
			L10 = L10 + L36;
		}
	}
	@GetScreenSize(L37, L38);
	if (L37 - a0 > 300) {
		L39 = a0;
	} else {
		L39 = a0 - 300;
	}
	if (a1 > L10) {
		L40 = a1 - L10;
	} else {
		L40 = a1;
		if (L40 + L10 > 600) {
			L40 = 600 - L10;
		}
	}
	@ScreenToClient(L39, L40);
	f_10e_a5_v(L39, L40, 300, L10, a4);
	f_129_a4_v(L39 + 16, L40 + 16, a2, a4);
	L40 = L40 + 250;
	@PrintInWidth(L10, "default", L39 + 16, L40, 268, L6, 0.6470588445663452, 0.6470588445663452, 0.6470588445663452, a4);
	L40 = L40 + L10;
	if (L13 || L12) {
		@PrintInWidth(L10, "default", L39 + 16, L40, 268, L11, 0.6470588445663452, 0.6470588445663452, 0.6470588445663452, a4);
		L40 = L40 + L10;
	}
	if (L18 || L17) {
		@PrintInWidth(L10, "default", L39 + 16, L40, 268, L16, 0.6470588445663452, 0.6470588445663452, 0.6470588445663452, a4);
		L40 = L40 + L10;
	}
	if (L22) {
		@PrintInWidth(L10, "default", L39 + 16, L40, 268, L21, 0.6470588445663452, 0.6470588445663452, 0.6470588445663452, a4);
		L40 = L40 + L10;
	}
}

void f_3c1_a4_v(int a0, int a1, object a2, float a3)
{
	if (!a2) {
		return;
	}
	a3 = 1;
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
	@GetTextHeightInWidth(L12, "default", 268, L2);
	L12 = L12 + 32;
	int L13;
	int L14;
	@GetScreenSize(L13, L14);
	int L15;
	if (L13 - a0 > 300) {
		L15 = a0;
	} else {
		L15 = a0 - 300;
	}
	int L16;
	if (a1 > L12) {
		L16 = a1 - L12;
	} else {
		L16 = a1;
		if (L16 + L12 > 600) {
			L16 = 600 - L12;
		}
	}
	@ScreenToClient(L15, L16);
	f_10e_a5_v(L15, L16, 300, L12, a3);
	@PrintInWidth(L12, "default", L15 + 16, L16 + 16, 268, L2, 0.6470588445663452, 0.6470588445663452, 0.6470588445663452, a3);
}

void f_43c_a5_v(int a0, int a1, string a2, object a3, float a4)
{
	int L0;
	int L1;
	int L2;
	int L3;
	int L4;
	a4 = 1;
	@GetTextHeightInWidth(L0, "default", 268, a2);
	L0 = L0 + 32;
	@GetScreenSize(L1, L2);
	if (L1 - a0 > 300) {
		L3 = a0;
	} else {
		L3 = a0 - 300;
	}
	if (a1 > L0) {
		L4 = a1 - L0;
	} else {
		L4 = a1;
		if (L4 + L0 > 600) {
			L4 = 600 - L0;
		}
	}
	@ScreenToClient(L3, L4);
	f_10e_a5_v(L3, L4, 300, L0, a4);
	@PrintInWidth(L0, "default", L3 + 16, L4 + 16, 268, a2, 0.6470588445663452, 0.6470588445663452, 0.6470588445663452, a4);
}

