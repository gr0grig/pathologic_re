event OnDraw 0;
event OnMouseWheel 15;
event OnMessage 200;

maintask t0
{
	var bool tv0;
	var int tv1;
	var int tv2;
	var int tv3;
	var int tv4;
	var object tv5;

	void init(void)
	{
		tv1 = 0;
		@GetWindowSize(tv3, tv4);
		@EnableClipping(true);
		@SetOwnerDraw(true);
		f_f_a0_v();
		@ProcessEvents();
	}

	void f_f_a0_v(void)
	{
		int L0;
		int L1;
		@CreateIntVector(tv5);
		if (f_50b_a0_i() == 1) {
			f_488_a3_v(tv5, false, 1);
		} else {
			if (f_50b_a0_i() == 0) {
				f_4a9_a3_v(tv5, false, 0);
			} else {
				f_4cd_a3_v(tv5, false, 2);
			}
		}
		tv5->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			int L2;
			tv5->get(L2, L1);
			if (f_4f7_a1_b(L2)) {
				@LoadImage(f_2eb_a1_s(L2));
			} else {
				if (f_501_a1_b(L2)) {
					@LoadImage(f_2eb_a1_s(L2));
				}
			}
		}
	}

	void OnDraw(void)
	{
		int L0;
		string L1;
		int L2;
		L0 = 0;
		@GetStringByID(L1, 200);
		@GetTextHeightInWidth(L0, "default", tv3, L1);
		L2 = f_77_a1_i(tv1 + L0);
		L2 = f_d1_a1_i(L2);
		if (tv1 + L0 < L2) {
			@PrintInWidth(L0, "default", 0, tv1, tv3, L1, 1.0, 1.0, 1.0);
		}
		tv2 = L2 - tv1 - tv4;
		if (tv2 < 0) {
			tv2 = 0;
		}
	}

	int f_77_a1_i(int a0)
	{
		int L0;
		int L1;
		bool L2;
		int L3;
		int L4;
		int L5;
		int L6;
		string L7;
		int L8;
		string L9;
		L0 = a0 + 15;
		L2 = true;
		tv5->size(L3);
		for (L4 = 0; L4 < L3; L4 = L4 + 1) {
			tv5->get(L5, L4);
			if (f_4f7_a1_b(L5)) {
				L2 = false;
				@Blit(f_2eb_a1_s(L5), 0, L0);
				L6 = f_14e_a1_i(L5);
				@GetStringByID(L7, L6);
				@GetTextHeightInWidth(L8, "name", 2 * tv3 / 5, L7);
				@PrintInWidth(L8, "name", 3 * tv3 / 5, L0 + 140 - L8, 2 * tv3 / 5, L7, 0.6000000238418579, 0.6000000238418579, 0.6000000238418579);
				if (L8 > 140) {
					L0 = L0 + L8;
				} else {
					L0 = L0 + 140;
				}
			}
		}
		if (L2) {
			return a0;
		}
		@GetStringByID(L9, 201);
		@PrintInWidth(L1, "default", 0, L0, tv3, L9, 1.0, 1.0, 1.0);
		L0 = L0 + (L1 + 7);
		@StretchBlit("separator", 0, L0, tv3, 1);
		return L0 + 7;
	}

	int f_d1_a1_i(int a0)
	{
		int L0;
		int L1;
		int L2;
		bool L3;
		int L4;
		L0 = a0;
		tv5->size(L2);
		L3 = true;
		for (L4 = 0; L4 < L2; L4 = L4 + 1) {
			int L5;
			tv5->get(L5, L4);
			if (f_501_a1_b(L5)) {
				int L6;
				string L7;
				int L8;
				L3 = false;
				@Blit(f_2eb_a1_s(L5), 0, L0);
				if (f_4ed_a1_b(L5)) {
					@Blit("birdmask", 0, L0);
				}
				L6 = f_14e_a1_i(L5);
				@GetStringByID(L7, L6);
				@GetTextHeightInWidth(L8, "name", 2 * tv3 / 5, L7);
				@PrintInWidth(L8, "name", 3 * tv3 / 5, L0 + 140 - L8 - 15, 2 * tv3 / 5, L7, 0.6000000238418579, 0.6000000238418579, 0.6000000238418579);
				L0 = L0 + 140;
			}
		}
		if (L3) {
			return a0;
		}
		return L0;
	}

	void OnMouseWheel(int a0, int a1, float a2)
	{
		int L0;
		L0 = a2 * 140 / 2;
		tv1 = tv1 + L0;
		f_127_a0_v();
	}

	void f_127_a0_v(void)
	{
		if (tv2 < 0) {
			tv2 = 0;
		}
		if (-tv1 > tv2) {
			tv1 = -tv2;
		} else {
			if (tv1 > 0) {
				tv1 = 0;
			}
		}
		if (tv2 == 0) {
			@SendMessage(16384, "scrollbar");
		} else {
			@SendMessage(-tv1 * 100 / tv2, "scrollbar");
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "scrollbar") {
			tv1 = -tv2 * a0 / 100;
			return;
		}
	}
}

int f_14e_a1_i(int a0)
{
	if (a0 == 1) {
		return 502854;
	}
	if (a0 == 2) {
		return 502855;
	}
	if (a0 == 3) {
		return 502856;
	}
	if (a0 == 4) {
		return 502857;
	}
	if (a0 == 5) {
		return 502858;
	}
	if (a0 == 6) {
		return 502859;
	}
	if (a0 == 7) {
		return 502860;
	}
	if (a0 == 8) {
		return 502861;
	}
	if (a0 == 9) {
		return 502862;
	}
	if (a0 == 10) {
		return 502863;
	}
	if (a0 == 11) {
		return 502864;
	}
	if (a0 == 12) {
		return 502865;
	}
	if (a0 == 13) {
		return 502866;
	}
	if (a0 == 14) {
		return 502867;
	}
	if (a0 == 15) {
		return 502868;
	}
	if (a0 == 16) {
		return 502869;
	}
	if (a0 == 17) {
		return 502870;
	}
	if (a0 == 18) {
		return 502871;
	}
	if (a0 == 19) {
		return 502872;
	}
	if (a0 == 20) {
		return 502873;
	}
	if (a0 == 21) {
		return 502874;
	}
	if (a0 == 22) {
		return 502875;
	}
	if (a0 == 23) {
		return 502876;
	}
	if (a0 == 24) {
		return 502877;
	}
	if (a0 == 25) {
		return 502878;
	}
	if (a0 == 26) {
		return 502879;
	}
	if (a0 == 27) {
		return 503340;
	}
	if (a0 == 28) {
		return 503341;
	}
	if (a0 == 29) {
		return 503342;
	}
	if (a0 == 30) {
		return 503343;
	}
	if (a0 == 31) {
		return 503344;
	}
	if (a0 == 32) {
		return 503345;
	}
	if (a0 == 33) {
		return 503346;
	}
	if (a0 == 34) {
		return 503347;
	}
	if (a0 == 35) {
		return 503348;
	}
	if (a0 == 36) {
		return 503349;
	}
	if (a0 == 37) {
		return 503350;
	}
	if (a0 == 38) {
		return 503351;
	}
	if (a0 == 39) {
		return 503352;
	}
	if (a0 == 40) {
		return 503353;
	}
	if (a0 == 42) {
		return 503354;
	}
	if (a0 == 43) {
		return 503355;
	}
	if (a0 == 44) {
		return 504029;
	}
	if (a0 == 46) {
		return 504031;
	}
	if (a0 == 47) {
		return 504032;
	}
	if (a0 == 48) {
		return 506270;
	}
	if (a0 == 49) {
		return 506271;
	}
	if (a0 == 50) {
		return 506272;
	}
	if (a0 == 51) {
		return 506273;
	}
	if (a0 == 52) {
		return 506274;
	}
	if (a0 == 53) {
		return 506275;
	}
	if (a0 == 54) {
		return 506276;
	}
	if (a0 == 55) {
		return 506277;
	}
	if (a0 == 56) {
		return 506278;
	}
	if (a0 == 57) {
		return 506279;
	}
	if (a0 == 58) {
		return 506280;
	}
	if (a0 == 59) {
		return 506281;
	}
	if (a0 == 60) {
		return 506282;
	}
	if (a0 == 61) {
		return 506283;
	}
	if (a0 == 62) {
		return 506284;
	}
	if (a0 == 63) {
		return 506285;
	}
	if (a0 == 64) {
		return 506286;
	}
	if (a0 == 65) {
		return 506287;
	}
	if (a0 == 66) {
		return 511961;
	}
	if (a0 == 67) {
		return 512582;
	}
	if (a0 == 68) {
		return 512583;
	}
	if (a0 == 69) {
		return 512611;
	}
	if (a0 == 70) {
		return 513334;
	}
	if (a0 == 71) {
		return 514839;
	}
	if (a0 == 72) {
		return 514840;
	}
	if (a0 == 73) {
		return 514841;
	}
	if (a0 == 74) {
		return 518096;
	}
	if (a0 == 75) {
		return 518410;
	}
	if (a0 == 76) {
		return 518606;
	}
	if (a0 == 77) {
		return 518715;
	}
	if (a0 == 78) {
		return 521047;
	}
	if (a0 == 79) {
		return 527720;
	}
	if (a0 == 80) {
		return 529825;
	}
	if (a0 == 81) {
		return 529835;
	}
	if (a0 == 82) {
		return 530493;
	}
	if (a0 == 83) {
		return 531556;
	}
	if (a0 == 84) {
		return 533304;
	}
	return -1;
}

string f_2eb_a1_s(int a0)
{
	if (a0 == 1) {
		return "ui/NPC_Alexandr.png";
	}
	if (a0 == 2) {
		return "ui/NPC_Andrei.png";
	}
	if (a0 == 3) {
		return "ui/NPC_Anna.png";
	}
	if (a0 == 4) {
		return "ui/NPC_BigVlad.png";
	}
	if (a0 == 5) {
		return "ui/NPC_Eva.png";
	}
	if (a0 == 6) {
		return "ui/NPC_Georg.png";
	}
	if (a0 == 7) {
		return "ui/NPC_Grif.png";
	}
	if (a0 == 8) {
		return "ui/NPC_Han.png";
	}
	if (a0 == 9) {
		return "ui/NPC_Julia.png";
	}
	if (a0 == 10) {
		return "ui/NPC_Kapella.png";
	}
	if (a0 == 11) {
		return "ui/NPC_Katerina.png";
	}
	if (a0 == 12) {
		return "ui/NPC_Klara.png";
	}
	if (a0 == 13) {
		return "ui/NPC_Lara.png";
	}
	if (a0 == 14) {
		return "ui/NPC_Laska.png";
	}
	if (a0 == 15) {
		return "ui/NPC_Maria.png";
	}
	if (a0 == 16) {
		return "ui/NPC_Mark.png";
	}
	if (a0 == 17) {
		return "ui/NPC_Mat.png";
	}
	if (a0 == 18) {
		return "ui/NPC_Mishka.png";
	}
	if (a0 == 19) {
		return "ui/NPC_MladVlad.png";
	}
	if (a0 == 20) {
		return "ui/NPC_Notkin.png";
	}
	if (a0 == 21) {
		return "ui/NPC_Ospina.png";
	}
	if (a0 == 22) {
		return "ui/NPC_Petr.png";
	}
	if (a0 == 23) {
		return "ui/NPC_Rubin.png";
	}
	if (a0 == 24) {
		return "ui/NPC_Spi4ka.png";
	}
	if (a0 == 25) {
		return "ui/NPC_Starshina.png";
	}
	if (a0 == 26) {
		return "ui/NPC_Viktor.png";
	}
	if (a0 == 27) {
		return "ui/NPC_Citizen2.png";
	}
	if (a0 == 28) {
		return "ui/NPC_Citizen3.png";
	}
	if (a0 == 29) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 30) {
		return "ui/NPC_Citizen3.png";
	}
	if (a0 == 31) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 32) {
		return "ui/NPC_Citizen3.png";
	}
	if (a0 == 33) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 34) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 35) {
		return "ui/NPC_Citizen3.png";
	}
	if (a0 == 36) {
		return "ui/NPC_Citizen2.png";
	}
	if (a0 == 37) {
		return "ui/NPC_Citizen3.png";
	}
	if (a0 == 38) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 39) {
		return "ui/NPC_Citizen3.png";
	}
	if (a0 == 40) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 42) {
		return "ui/NPC_wmask.png";
	}
	if (a0 == 43) {
		return "ui/NPC_Black.png";
	}
	if (a0 == 44) {
		return "ui/NPC_bmask.png";
	}
	if (a0 == 46) {
		return "ui/NPC_Citizen2.png";
	}
	if (a0 == 47) {
		return "ui/NPC_Bakalavr.png";
	}
	if (a0 == 48) {
		return "ui/NPC_Citizen2.png";
	}
	if (a0 == 49) {
		return "ui/NPC_Citizen3.png";
	}
	if (a0 == 50) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 51) {
		return "ui/NPC_Citizen3.png";
	}
	if (a0 == 52) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 53) {
		return "ui/NPC_Citizen3.png";
	}
	if (a0 == 54) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 55) {
		return "ui/NPC_Citizen2.png";
	}
	if (a0 == 56) {
		return "ui/NPC_Citizen2.png";
	}
	if (a0 == 57) {
		return "ui/NPC_Citizen2.png";
	}
	if (a0 == 58) {
		return "ui/NPC_Citizen3.png";
	}
	if (a0 == 59) {
		return "ui/NPC_Citizen2.png";
	}
	if (a0 == 60) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 61) {
		return "ui/NPC_Citizen2.png";
	}
	if (a0 == 62) {
		return "ui/NPC_Citizen3.png";
	}
	if (a0 == 63) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 64) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 65) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 66) {
		return "ui/NPC_Burah.png";
	}
	if (a0 == 67) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 68) {
		return "ui/NPC_Citizen3.png";
	}
	if (a0 == 69) {
		return "ui/NPC_Black.png";
	}
	if (a0 == 70) {
		return "ui/NPC_Aglaja.png";
	}
	if (a0 == 71) {
		return "ui/NPC_Citizen3.png";
	}
	if (a0 == 72) {
		return "ui/NPC_Block.png";
	}
	if (a0 == 73) {
		return "ui/NPC_Citizen2.png";
	}
	if (a0 == 74) {
		return "ui/NPC_Citizen2.png";
	}
	if (a0 == 75) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 76) {
		return "ui/NPC_Citizen2.png";
	}
	if (a0 == 77) {
		return "ui/NPC_Citizen3.png";
	}
	if (a0 == 78) {
		return "ui/NPC_Citizen2.png";
	}
	if (a0 == 79) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 80) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 81) {
		return "ui/NPC_Citizen2.png";
	}
	if (a0 == 82) {
		return "ui/NPC_Citizen3.png";
	}
	if (a0 == 83) {
		return "ui/NPC_Citizen1.png";
	}
	if (a0 == 84) {
		return "ui/NPC_Citizen1.png";
	}
	return "";
}

void f_488_a3_v(object a0, bool a1, int a2)
{
	a0->add(18);
	a0->add(24);
	a0->add(20);
	a0->add(14);
	if (a1 == false) {
		a0->add(10);
		a0->add(17);
		a0->add(8);
	} else {
		if (a2 != 1) {
			a0->add(10);
		}
	}
}

void f_4a9_a3_v(object a0, bool a1, int a2)
{
	a0->add(6);
	a0->add(26);
	a0->add(2);
	a0->add(22);
	if (a1 == false) {
		a0->add(15);
		a0->add(5);
		a0->add(16);
		a0->add(19);
	} else {
		if (a2 != 0) {
			a0->add(15);
		}
	}
}

void f_4cd_a3_v(object a0, bool a1, int a2)
{
	a0->add(7);
	a0->add(23);
	a0->add(21);
	a0->add(9);
	a0->add(3);
	a0->add(1);
	a0->add(11);
	a0->add(13);
	if (a1 == false) {
		a0->add(25);
	}
}

bool f_4ed_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 4) != 0;
}

bool f_4f7_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 2) != 0;
}

bool f_501_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 8) != 0;
}

int f_50b_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

