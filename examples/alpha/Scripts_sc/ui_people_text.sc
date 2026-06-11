event OnDraw 0;
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
		object L0;
		int L1;
		int L2;
		@CreateIntVector(tv5);
		L0 = null;
		f_39c_a2_v(tv5, L0);
		tv5->size(L1);
		L2 = 0;
		for (; L2 < L1; L2++) {
			int L3;
			tv5->get(L3, L2);
			if (f_472_a1_b(L3)) {
				@LoadImage(f_236_a1_s(L3));
			} else {
				if (f_47c_a1_b(L3)) {
					@LoadImage(f_236_a1_s(L3));
				}
			}
		}
	}

	void OnDraw(void)
	{
		int L0;
		L0 = f_4d_a1_i(tv1);
		L0 = f_8b_a1_i(L0);
		tv2 = L0 - tv1 - tv4;
		if (tv2 < 0) {
			tv2 = 0;
		}
	}

	int f_4d_a1_i(int a0)
	{
		int L0;
		L0 = a0;
		int L1;
		tv5->size(L1);
		int L2;
		L2 = 0;
		for (; L2 < L1; L2++) {
			int L3;
			tv5->get(L3, L2);
			if (f_472_a1_b(L3)) {
				int L4;
				string L5;
				int L6;
				@Blit(f_236_a1_s(L3), 0, L0);
				L4 = f_d0_a1_i(L3);
				@GetStringByID(L5, L4);
				@PrintInWidth(L6, "default", tv3 / 2, L0, tv3 / 2, L5, 1.0, 1.0, 1.0);
				if (L6 > 140) {
					L0 = L0 + L6;
					continue;
				}
				L0 = L0 + 140;
			}
		}
		int L7;
		@PrintInWidth(L7, "default", tv3 / 2 - 20, L0, tv3, "***", 1.0, 1.0, 1.0);
		L0 = L0 + L7;
		return L0;
	}

	int f_8b_a1_i(int a0)
	{
		int L0;
		int L1;
		int L2;
		L0 = a0;
		tv5->size(L1);
		L2 = 0;
		for (; L2 < L1; L2++) {
			int L3;
			tv5->get(L3, L2);
			if (f_47c_a1_b(L3)) {
				int L4;
				string L5;
				int L6;
				@Blit(f_236_a1_s(L3), 0, L0);
				if (f_468_a1_b(L3)) {
					@Blit("birdmask", 0, L0);
				}
				L4 = f_d0_a1_i(L3);
				@GetStringByID(L5, L4);
				@PrintInWidth(L6, "default", tv3 / 2, L0, tv3 / 2, L5, 1.0, 1.0, 1.0);
				if (L6 > 140) {
					L0 = L0 + L6;
					continue;
				}
				L0 = L0 + 140;
			}
		}
		return L0;
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "scrollbar") {
			tv1 = -tv2 * a0 / 100;
			return;
		}
	}
}

int f_d0_a1_i(int a0)
{
	if (a0 == 1) {
		return 2854;
	}
	if (a0 == 2) {
		return 2855;
	}
	if (a0 == 3) {
		return 2856;
	}
	if (a0 == 4) {
		return 2857;
	}
	if (a0 == 5) {
		return 2858;
	}
	if (a0 == 6) {
		return 2859;
	}
	if (a0 == 7) {
		return 2860;
	}
	if (a0 == 8) {
		return 2861;
	}
	if (a0 == 9) {
		return 2862;
	}
	if (a0 == 10) {
		return 2863;
	}
	if (a0 == 11) {
		return 2864;
	}
	if (a0 == 12) {
		return 2865;
	}
	if (a0 == 13) {
		return 2866;
	}
	if (a0 == 14) {
		return 2867;
	}
	if (a0 == 15) {
		return 2868;
	}
	if (a0 == 16) {
		return 2869;
	}
	if (a0 == 17) {
		return 2870;
	}
	if (a0 == 18) {
		return 2871;
	}
	if (a0 == 19) {
		return 2872;
	}
	if (a0 == 20) {
		return 2873;
	}
	if (a0 == 21) {
		return 2874;
	}
	if (a0 == 22) {
		return 2875;
	}
	if (a0 == 23) {
		return 2876;
	}
	if (a0 == 24) {
		return 2877;
	}
	if (a0 == 25) {
		return 2878;
	}
	if (a0 == 26) {
		return 2879;
	}
	if (a0 == 27) {
		return 3340;
	}
	if (a0 == 28) {
		return 3341;
	}
	if (a0 == 29) {
		return 3342;
	}
	if (a0 == 30) {
		return 3343;
	}
	if (a0 == 31) {
		return 3344;
	}
	if (a0 == 32) {
		return 3345;
	}
	if (a0 == 33) {
		return 3346;
	}
	if (a0 == 34) {
		return 3347;
	}
	if (a0 == 35) {
		return 3348;
	}
	if (a0 == 36) {
		return 3349;
	}
	if (a0 == 37) {
		return 3350;
	}
	if (a0 == 38) {
		return 3351;
	}
	if (a0 == 39) {
		return 3352;
	}
	if (a0 == 40) {
		return 3353;
	}
	if (a0 == 42) {
		return 3354;
	}
	if (a0 == 43) {
		return 3355;
	}
	if (a0 == 44) {
		return 4029;
	}
	if (a0 == 46) {
		return 4031;
	}
	if (a0 == 47) {
		return 4032;
	}
	if (a0 == 48) {
		return 6270;
	}
	if (a0 == 49) {
		return 6271;
	}
	if (a0 == 50) {
		return 6272;
	}
	if (a0 == 51) {
		return 6273;
	}
	if (a0 == 52) {
		return 6274;
	}
	if (a0 == 53) {
		return 6275;
	}
	if (a0 == 54) {
		return 6276;
	}
	if (a0 == 55) {
		return 6277;
	}
	if (a0 == 56) {
		return 6278;
	}
	if (a0 == 57) {
		return 6279;
	}
	if (a0 == 58) {
		return 6280;
	}
	if (a0 == 59) {
		return 6281;
	}
	if (a0 == 60) {
		return 6282;
	}
	if (a0 == 61) {
		return 6283;
	}
	if (a0 == 62) {
		return 6284;
	}
	if (a0 == 63) {
		return 6285;
	}
	if (a0 == 64) {
		return 6286;
	}
	if (a0 == 65) {
		return 6287;
	}
	if (a0 == 66) {
		return 11961;
	}
	if (a0 == 67) {
		return 12582;
	}
	if (a0 == 68) {
		return 12583;
	}
	if (a0 == 69) {
		return 12611;
	}
	if (a0 == 70) {
		return 13334;
	}
	if (a0 == 71) {
		return 14839;
	}
	if (a0 == 72) {
		return 14840;
	}
	if (a0 == 73) {
		return 14841;
	}
	return -1;
}

string f_236_a1_s(int a0)
{
	if (a0 == 1) {
		return "ui/NPC_Black.png";
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
		return "ui/NPC_Black.png";
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
		return "ui/NPC_None.png";
	}
	if (a0 == 28) {
		return "ui/NPC_None.png";
	}
	if (a0 == 29) {
		return "ui/NPC_None.png";
	}
	if (a0 == 30) {
		return "ui/NPC_None.png";
	}
	if (a0 == 31) {
		return "ui/NPC_None.png";
	}
	if (a0 == 32) {
		return "ui/NPC_None.png";
	}
	if (a0 == 33) {
		return "ui/NPC_None.png";
	}
	if (a0 == 34) {
		return "ui/NPC_None.png";
	}
	if (a0 == 35) {
		return "ui/NPC_None.png";
	}
	if (a0 == 36) {
		return "ui/NPC_None.png";
	}
	if (a0 == 37) {
		return "ui/NPC_None.png";
	}
	if (a0 == 38) {
		return "ui/NPC_None.png";
	}
	if (a0 == 39) {
		return "ui/NPC_None.png";
	}
	if (a0 == 40) {
		return "ui/NPC_None.png";
	}
	if (a0 == 42) {
		return "ui/NPC_Black.png";
	}
	if (a0 == 43) {
		return "ui/NPC_Black.png";
	}
	if (a0 == 44) {
		return "ui/NPC_Black.png";
	}
	if (a0 == 46) {
		return "ui/NPC_Black.png";
	}
	if (a0 == 47) {
		return "ui/NPC_Bakalavr.png";
	}
	if (a0 == 48) {
		return "ui/NPC_None.png";
	}
	if (a0 == 49) {
		return "ui/NPC_None.png";
	}
	if (a0 == 50) {
		return "ui/NPC_None.png";
	}
	if (a0 == 51) {
		return "ui/NPC_None.png";
	}
	if (a0 == 52) {
		return "ui/NPC_None.png";
	}
	if (a0 == 53) {
		return "ui/NPC_None.png";
	}
	if (a0 == 54) {
		return "ui/NPC_None.png";
	}
	if (a0 == 55) {
		return "ui/NPC_None.png";
	}
	if (a0 == 56) {
		return "ui/NPC_None.png";
	}
	if (a0 == 57) {
		return "ui/NPC_None.png";
	}
	if (a0 == 58) {
		return "ui/NPC_None.png";
	}
	if (a0 == 59) {
		return "ui/NPC_None.png";
	}
	if (a0 == 60) {
		return "ui/NPC_None.png";
	}
	if (a0 == 61) {
		return "ui/NPC_None.png";
	}
	if (a0 == 62) {
		return "ui/NPC_None.png";
	}
	if (a0 == 63) {
		return "ui/NPC_None.png";
	}
	if (a0 == 64) {
		return "ui/NPC_None.png";
	}
	if (a0 == 65) {
		return "ui/NPC_None.png";
	}
	if (a0 == 66) {
		return "ui/NPC_Burah.png";
	}
	if (a0 == 67) {
		return "ui/NPC_Black.png";
	}
	if (a0 == 68) {
		return "ui/NPC_Black.png";
	}
	if (a0 == 69) {
		return "ui/NPC_Black.png";
	}
	if (a0 == 70) {
		return "ui/NPC_Aglaja.png";
	}
	if (a0 == 71) {
		return "ui/NPC_None.png";
	}
	if (a0 == 72) {
		return "ui/NPC_Black.png";
	}
	if (a0 == 73) {
		return "ui/NPC_Black.png";
	}
	return "";
}

void f_39c_a2_v(object a0, object a1)
{
	object L0;
	a0->add(1);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_alexandr@door1");
		a1->add(L0);
	}
	a0->add(2);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("shouse1_kabak@door1");
		a1->add(L0);
	}
	a0->add(3);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_anna@door1");
		a1->add(L0);
	}
	a0->add(4);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_bigvad@door1");
		a1->add(L0);
	}
	a0->add(6);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_georg@door1");
		L0->add("cot_georg@door2");
		a1->add(L0);
	}
	a0->add(9);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_julia@door1");
		a1->add(L0);
	}
	a0->add(10);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_kapella@door1");
		a1->add(L0);
	}
	a0->add(11);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_katerina@door1");
		a1->add(L0);
	}
	a0->add(13);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_lara@door1");
		a1->add(L0);
	}
	a0->add(18);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("vagon_mishka@door1");
		a1->add(L0);
	}
	a0->add(19);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("house_vlad@door1");
		a1->add(L0);
	}
	a0->add(20);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("warehouse_notkin@door1");
		a1->add(L0);
	}
	a0->add(21);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("dt_house_1_04@door1");
		a1->add(L0);
	}
	a0->add(22);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("house_petr@door1");
		a1->add(L0);
	}
	a0->add(24);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("house_spi4ka@door1");
		L0->add("house_spi4ka@door2");
		a1->add(L0);
	}
	a0->add(26);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_viktor@door1");
		L0->add("cot_viktor@door2");
		a1->add(L0);
	}
}

bool f_468_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 4) != 0;
}

bool f_472_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 2) != 0;
}

bool f_47c_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 8) != 0;
}

