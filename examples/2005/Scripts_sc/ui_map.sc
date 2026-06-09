event OnUpdate 1;
event OnDraw 0;
event OnDragBegin 11;
event OnDragEnd 12;
event OnMouseMove 8;
event OnMouseLeave 10;
event OnMouseWheel 15;
event OnMessage 200;
event OnKeyDown 101;

var float g0;
var float g1;

maintask t0
{
	var int tv0;
	var int tv1;
	var int tv2;
	var int tv3;
	var int tv4;
	var int tv5;
	var int tv6;
	var int tv7;
	var int tv8;
	var int tv9;
	var int tv10;
	var int tv11;
	var float tv12;
	var float tv13;
	var float tv14;
	var bool tv15;
	var bool tv16;
	var bool tv17;
	var bool tv18;
	var bool tv19;
	var object tv20;
	var object tv21;
	var object tv22;
	var object tv23;
	var object tv24;
	var Vector tv25;
	var string tv26;

	bool f_0_a0_b(void)
	{
		if (tv0 == 2 && f_345_a0_i() >= 8) {
			return true;
		}
		return false;
	}

	void init(void)
	{
		float L0;
		float L1;
		int L2;
		object L3;
		@GetMap(tv22);
		if (tv22 == null) {
			@Trace("Map not found");
			return;
		}
		@CreatePolyImage(tv24, 16, 16, "ui/ui_player.png");
		tv22->GetSize(tv1, tv2);
		tv22->GetMapParams(L0, L1, tv14);
		tv22->ConvertToMapCoordinates(L0, L1);
		tv12 = L0;
		tv13 = L1;
		tv16 = true;
		@GetWindowSize(tv3, tv4);
		g0 = tv3 / 2048.0;
		g1 = g0;
		tv19 = false;
		if (tv14 < 0) {
			tv18 = true;
			f_99_a0_v();
			tv14 = 2;
		}
		@GetVariable("map_chertez_force", L2);
		if (L2) {
			tv18 = true;
			@SetVariable("map_chertez_force", 0);
		}
		tv0 = 0;
		tv5 = -1;
		tv6 = -1;
		tv15 = false;
		tv23 = null;
		tv11 = -1;
		@CreateObjectVector(tv20);
		@GetMainOutdoorScene(L3);
		@GetActiveScene(tv21);
		if (L3 != tv21) {
			string L4;
			int L5;
			int L6;
			tv17 = true;
			tv21->GetName(L4);
			tv25 = f_378_a1_V("pt_gmap_" + L4);
			L5 = tv25.x;
			L6 = tv25.z;
			tv22->ConvertToMapCoordinates(L5, L6);
			tv25.x = L5;
			tv25.z = L6;
			@Trace("indoor map: pt_gmap_" + L4);
		} else {
			int L7;
			int L8;
			@Trace("outdoor map");
			tv17 = false;
			@GetPlayerMapPos(L7, L8);
			tv25.x = L7;
			tv25.z = L8;
		}
		f_df_a0_v();
		@ShowCursor();
		@SetCursor("default");
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@SetBackground("default");
		@EnableClipping(true);
		@CaptureKeyboard();
		@PlaySound("map_open");
		@ProcessEvents();
	}

	void f_99_a0_v(void)
	{
		int L0;
		if (tv19) {
			return;
		}
		@GetVariable("map_chertez_state", L0);
		if (f_33f_a0_i() == 0) {
			tv26 = "ui\\ui_chertez_danko_bg.tex";
			if (L0 >= 1 && L0 <= 6) {
				tv26 = "ui\\ui_chertez_danko_" + L0 + ".tex";
			}
		} else {
			if (f_33f_a0_i() == 1) {
				tv26 = "ui\\ui_chertez_burah_bg.tex";
				if (L0 >= 1 && L0 <= 6) {
					tv26 = "ui\\ui_chertez_burah_" + L0 + ".tex";
				}
			} else {
				tv26 = "ui\\ui_chertez_klara_bg.tex";
				if (L0 >= 1 && L0 <= 6) {
					tv26 = "ui\\ui_chertez_klara_" + L0 + ".tex";
				}
			}
		}
		@LoadImage(tv26);
		tv19 = true;
	}

	void f_df_a0_v(void)
	{
		int L0;
		L0 = 0;
		for (; L0 < 16; L0++) {
			if (f_354_a1_b(L0)) {
				@SetRegionColor(L0, 0.5, 0.5, 0.5, 0.0);
			} else {
				if (f_360_a1_b(L0)) {
					@SetRegionColor(L0, 0.5, 0.0, 0.0, 0.5);
					continue;
				}
				if (f_36c_a1_b(L0)) {
					@SetRegionColor(L0, 0.0, 0.0, 0.0, 0.5);
				}
			}
		}
	}

	int f_10b_a1_i(int a0)
	{
		return tv12 + (a0 - tv3 / 2) / tv14;
	}

	int f_112_a1_i(int a0)
	{
		return tv13 + (a0 - tv4 / 2) / tv14;
	}

	int f_119_a1_i(int a0)
	{
		return (a0 - tv12) * tv14 + tv3 / 2;
	}

	int f_120_a1_i(int a0)
	{
		return (a0 - tv13) * tv14 + tv4 / 2;
	}

	void OnUpdate(float a0)
	{
		int L0;
		int L1;
		int L2;
		int L3;
		int L4;
		int L5;
		L0 = tv12 - tv3 / tv14 / 2;
		L1 = tv12 + tv3 / tv14 / 2;
		L2 = tv13 - tv4 / tv14 / 2;
		L3 = tv13 + tv4 / tv14 / 2;
		L4 = 0;
		L5 = 0;
		if (L0 < 0) {
			L4 = -L0;
		} else {
			if (L1 > 2048) {
				L4 = 2048 - L1;
			}
		}
		if (L2 < 0) {
			L5 = -L2;
		} else {
			if (L3 > 2048) {
				L5 = 2048 - L3;
			}
		}
		tv12 = tv12 + L4;
		tv13 = tv13 + L5;
		if (!f_0_a0_b() && !tv18) {
			float L6;
			float L7;
			int L8;
			int L9;
			int L10;
			tv20->clear();
			L9 = 0;
			tv22->GetMarkCount(L8);
			for (L10 = 0; L10 < L8; L10++) {
				object L11;
				string L12;
				Vector L13;
				tv22->GetMark(L10, L11);
				L11->GetLocator(L12);
				L13 = f_378_a1_V(L12);
				L6 = L13.x;
				L7 = L13.z;
				tv22->ConvertToMapCoordinates(L6, L7);
				L6 = f_119_a1_i(L6);
				L7 = f_120_a1_i(L7);
				if ((L6 - tv5) * (L6 - tv5) + (L7 - tv6) * (L7 - tv6) < 900) {
					tv20->add(L11);
					L9 = L9 + 1;
				}
			}
			if (!L9) {
				int L14;
				int L15;
				int L16;
				int L17;
				L16 = f_10b_a1_i(tv5);
				L17 = f_112_a1_i(tv6);
				tv22->GetObjectFromPoint(L14, L16, L17);
				if (L14 >= 0) {
					string L18;
					tv22->GetObjectID(L15, L14);
					@GetStringByID(L18, L15 + 100000);
					@SetTooltip(5, L18);
					if (tv11 != L14) {
						tv22->CreateObjectHighlight(tv23, L14);
						tv11 = L14;
					}
				} else {
					@SetTooltip(-1, "");
					tv23 = null;
					tv11 = -1;
				}
			} else {
				@SetTooltip(2, "", tv20);
				tv23 = null;
				tv11 = -1;
			}
		} else {
			@SetTooltip(-1, "");
			tv11 = -1;
			tv23 = null;
		}
	}

	void f_1c5_a2_v(object a0, int a1)
	{
		float L0;
		float L1;
		int L2;
		int L3;
		a0->GetMarkCount(L2);
		for (L3 = 0; L3 < L2; L3++) {
			object L4;
			string L5;
			int L6;
			Vector L7;
			a0->GetMark(L3, L4);
			L4->GetLocator(L5);
			L4->GetType(L6);
			L7 = f_378_a1_V(L5);
			L0 = L7.x;
			L1 = L7.z;
			a0->ConvertToMapCoordinates(L0, L1);
			L0 = f_119_a1_i(L0);
			L1 = f_120_a1_i(L1);
			if (L6 == a1) {
				if (L6 == 0) {
					@Blit("quest_mark", L0 - 16, L1 - 16);
				}
				if (L6 == 1) {
					@Blit("mainquest_mark", L0 - 16, L1 - 16);
				}
				if (L6 == 3) {
					@Blit("info_mark", L0 - 16, L1 - 16);
				}
			}
		}
	}

	void f_20d_a0_v(void)
	{
		float L0;
		int L1;
		int L2;
		int L3;
		int L4;
		int L5;
		int L6;
		if (f_0_a0_b()) {
			return;
		}
		L0 = tv14;
		if (L0 < g0) {
			L0 = g0;
		}
		L1 = tv12 - tv3 / L0 / 2;
		L2 = tv12 + tv3 / L0 / 2;
		L3 = tv13 - tv4 / L0 / 2;
		L4 = tv13 + tv4 / L0 / 2;
		L5 = 0;
		L6 = 0;
		@ClientToScreen(L5, L6);
		@RenderMap(L5, L6, tv3 + L5, tv4 + L6, L1, L3, L2, L4);
		if (f_389_a0_b()) {
			@RenderRegions(L5, L6, tv3 + L5, tv4 + L6, L1, L3, L2, L4);
		}
		if (tv23) {
			tv23->Render(L5, L6, tv3 + L5, tv4 + L6, L1, L3, L2, L4);
		}
		f_1c5_a2_v(tv22, 3);
		f_1c5_a2_v(tv22, 0);
		f_1c5_a2_v(tv22, 1);
		f_26c_a0_v();
	}

	void f_253_a0_v(void)
	{
		int L0;
		int L1;
		int L2;
		int L3;
		float L4;
		L0 = 0;
		L1 = 0;
		@ScreenToClient(L0, L1);
		@GetScreenSize(L2, L3);
		L4 = L3 / 768.0;
		@StretchBlit(tv26, L0, L1, L2, L4 * 1024, 1);
	}

	void OnDraw(void)
	{
		if (tv18) {
			f_253_a0_v();
		} else {
			f_20d_a0_v();
		}
	}

	void f_26c_a0_v(void)
	{
		int L0;
		int L1;
		if (!tv17) {
			float L2;
			@GetPlayerMapAngle(L2);
			L0 = f_119_a1_i(tv25.x);
			L1 = f_120_a1_i(tv25.z);
			@ClientToScreen(L0, L1);
			tv24->Blit(L0, L1, L2);
		} else {
			L0 = f_119_a1_i(tv25.x);
			L1 = f_120_a1_i(tv25.z);
			@ClientToScreen(L0, L1);
			tv24->Blit(L0, L1);
		}
	}

	void OnDragBegin(int a0, int a1)
	{
		if (f_0_a0_b() || tv18) {
			return;
		}
		tv15 = true;
		tv7 = a0;
		tv8 = a1;
		tv9 = tv12;
		tv10 = tv13;
		@SetCursor("drag");
	}

	void OnDragEnd(int a0, int a1, bool a2)
	{
		tv15 = false;
		@SetCursor("default");
	}

	void OnMouseMove(int a0, int a1)
	{
		tv5 = a0;
		tv6 = a1;
		tv16 = false;
		if (tv15) {
			tv12 = tv9 + (tv7 - a0) / tv14;
			tv13 = tv10 + (tv8 - a1) / tv14;
		}
	}

	void OnMouseLeave(void)
	{
		tv16 = true;
	}

	void OnMouseWheel(int a0, int a1, float a2)
	{
		if (tv18) {
			return;
		}
		if (a2 > 0) {
			int L0;
			for (L0 = 0; L0 < a2; L0++) {
				f_2df_a1_v(1.100000023841858);
			}
		} else {
			int L1;
			for (L1 = 0; L1 < -a2; L1++) {
				f_2ef_a1_v(1.100000023841858);
			}
		}
	}

	void f_2df_a1_v(float a0)
	{
		if (tv18) {
			return;
		}
		tv14 = tv14 * a0;
		if (tv14 > 2.0) {
			tv14 = 2.0;
		}
		tv0 = tv0 + -1;
		if (tv0 < 0) {
			tv0 = 0;
		}
	}

	void f_2ef_a1_v(float a0)
	{
		if (tv18) {
			return;
		}
		tv14 = tv14 / a0;
		if (tv14 < g0) {
			tv14 = g0;
			tv0 = tv0 + 1;
			if (tv0 > 2) {
				tv0 = 2;
			}
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "button_plus") {
			f_2df_a1_v(1.399999976158142);
		} else {
			if (a1 == "button_minus") {
				f_2ef_a1_v(1.399999976158142);
			} else {
				if (a1 == "tavro") {
					tv18 = a0 == 0;
					@SendMessage(tv18 ? 1 : 0, "tavro");
					if (tv18) {
						f_99_a0_v();
					}
				}
			}
		}
	}

	void OnKeyDown(int a0)
	{
		int L0;
		int L1;
		if (a0 == 107) {
			f_2df_a1_v(1.399999976158142);
			return;
		}
		if (a0 == 109) {
			f_2ef_a1_v(1.399999976158142);
			return;
		}
		L0 = tv12;
		L1 = tv13;
		tv22->ConvertToWorldCoordinates(L0, L1);
		tv22->SetMapParams(L0, L1, tv14);
		@DestroyWindow();
	}
}

int f_33f_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

int f_345_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_34e_a1_s(int a0)
{
	return "Region" + a0 + "State";
}

bool f_354_a1_b(int a0)
{
	int L0;
	@GetVariable(f_34e_a1_s(a0), L0);
	return (L0 & 3) == 0;
}

bool f_360_a1_b(int a0)
{
	int L0;
	@GetVariable(f_34e_a1_s(a0), L0);
	return (L0 & 3) == 1;
}

bool f_36c_a1_b(int a0)
{
	int L0;
	@GetVariable(f_34e_a1_s(a0), L0);
	return (L0 & 3) == 2;
}

Vector f_378_a1_V(string a0)
{
	Vector L0;
	Vector L1;
	object L2;
	object L3;
	bool L4;
	@GetMainOutdoorScene(L2);
	if (L2 == null) {
		@Trace("Can't find main outdoor scene");
		L0 = [0.0, 0.0, 0.0];
		return L0;
	}
	L2->GetLocator(a0, L4, L0, L1);
	return L0;
}

bool f_389_a0_b(void)
{
	int L0;
	int L1;
	L0 = f_345_a0_i();
	@GetVariable("RMap" + L0, L1);
	return L1 != 0;
}

