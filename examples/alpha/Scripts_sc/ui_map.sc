event OnUpdate 1;
event OnDraw 0;
event OnDragBegin 11;
event OnDragEnd 12;
event OnMouseMove 8;
event OnMouseLeave 10;
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
	var float tv11;
	var float tv12;
	var float tv13;
	var bool tv14;
	var bool tv15;
	var bool tv16;
	var object tv17;
	var object tv18;
	var object tv19;
	var object tv20;
	var Vector tv21;

	bool f_0_a0_b(void)
	{
		if (tv13 < g0 + 0.009999999776482582) {
			return true;
		}
		return false;
	}

	void init(void)
	{
		float L0;
		float L1;
		object L2;
		@GetMap(tv19);
		if (tv19 == null) {
			@Trace("Map not found");
			return;
		}
		tv19->GetSize(tv0, tv1);
		tv19->GetMapParams(L0, L1, tv13);
		tv19->ConvertToMapCoordinates(L0, L1);
		tv11 = L0;
		tv12 = L1;
		tv15 = true;
		@GetWindowSize(tv2, tv3);
		g0 = tv2 / 2048.0;
		g1 = g0;
		tv4 = -1;
		tv5 = -1;
		tv14 = false;
		tv20 = null;
		tv10 = -1;
		@CreateObjectVector(tv17);
		@GetMainOutdoorScene(L2);
		@GetActiveScene(tv18);
		if (L2 != tv18) {
			string L3;
			int L4;
			int L5;
			tv16 = true;
			tv18->GetName(L3);
			tv21 = f_211_a1_V("pt_gmap_" + L3);
			L4 = tv21.x;
			L5 = tv21.z;
			tv19->ConvertToMapCoordinates(L4, L5);
			tv21.x = L4;
			tv21.z = L5;
			@Trace("indoor map: pt_gmap_" + L3);
		} else {
			int L6;
			int L7;
			@Trace("outdoor map");
			tv16 = false;
			@GetPlayerMapPos(L6, L7);
			tv21.x = L6;
			tv21.z = L7;
		}
		@ShowCursor();
		@SetCursor("default");
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@SetBackground("default");
		@CaptureKeyboard();
		@PlaySound("map_open");
		@ProcessEvents();
	}

	int f_72_a1_i(int a0)
	{
		return tv11 + (a0 - tv2 / 2) / tv13;
	}

	int f_79_a1_i(int a0)
	{
		return tv12 + (a0 - tv3 / 2) / tv13;
	}

	int f_80_a1_i(int a0)
	{
		return (a0 - tv11) * tv13 + tv2 / 2;
	}

	int f_87_a1_i(int a0)
	{
		return (a0 - tv12) * tv13 + tv3 / 2;
	}

	void OnUpdate(float a0)
	{
		int L0;
		int L1;
		int L2;
		int L3;
		int L4;
		int L5;
		float L6;
		float L7;
		int L8;
		int L9;
		int L10;
		L0 = tv11 - tv2 / tv13 / 2;
		L1 = tv11 + tv2 / tv13 / 2;
		L2 = tv12 - tv3 / tv13 / 2;
		L3 = tv12 + tv3 / tv13 / 2;
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
		tv11 = tv11 + L4;
		tv12 = tv12 + L5;
		tv17->clear();
		L9 = 0;
		tv19->GetMarkCount(L8);
		for (L10 = 0; L10 < L8; L10++) {
			object L11;
			string L12;
			Vector L13;
			tv19->GetMark(L10, L11);
			L11->GetLocator(L12);
			L13 = f_211_a1_V(L12);
			L6 = L13.x;
			L7 = L13.z;
			tv19->ConvertToMapCoordinates(L6, L7);
			L6 = f_80_a1_i(L6);
			L7 = f_87_a1_i(L7);
			if ((L6 - tv4) * (L6 - tv4) + (L7 - tv5) * (L7 - tv5) < 900) {
				tv17->add(L11);
				L9 = L9 + 1;
			}
		}
		if (!L9) {
			int L14;
			int L15;
			int L16;
			int L17;
			L16 = f_72_a1_i(tv4);
			L17 = f_79_a1_i(tv5);
			tv19->GetObjectFromPoint(L14, L16, L17);
			if (L14 >= 0) {
				string L18;
				tv19->GetObjectID(L15, L14);
				@GetStringByID(L18, L15 + 100000);
				@SetTooltip(5, L18);
				if (tv10 != L14) {
					tv19->CreateObjectHighlight(tv20, L14);
					tv10 = L14;
				}
			} else {
				@SetTooltip(-1, "");
				tv20 = null;
				tv10 = -1;
			}
		} else {
			@SetTooltip(2, "", tv17);
			tv20 = null;
			tv10 = -1;
		}
	}

	void OnDraw(void)
	{
		int L0;
		int L1;
		int L2;
		int L3;
		int L4;
		int L5;
		float L6;
		float L7;
		int L8;
		int L9;
		if (f_0_a0_b()) {
			return;
		}
		L0 = tv11 - tv2 / tv13 / 2;
		L1 = tv11 + tv2 / tv13 / 2;
		L2 = tv12 - tv3 / tv13 / 2;
		L3 = tv12 + tv3 / tv13 / 2;
		L4 = 0;
		L5 = 0;
		@ClientToScreen(L4, L5);
		@RenderMap(L4, L5, tv2 + L4, tv3 + L5, L0, L2, L1, L3);
		if (tv20) {
			tv20->Render(L4, L5, tv2 + L4, tv3 + L5, L0, L2, L1, L3);
		}
		tv19->GetMarkCount(L8);
		for (L9 = 0; L9 < L8; L9++) {
			object L10;
			string L11;
			int L12;
			Vector L13;
			tv19->GetMark(L9, L10);
			L10->GetLocator(L11);
			L10->GetType(L12);
			L13 = f_211_a1_V(L11);
			L6 = L13.x;
			L7 = L13.z;
			tv19->ConvertToMapCoordinates(L6, L7);
			L6 = f_80_a1_i(L6);
			L7 = f_87_a1_i(L7);
			if (L12 == 0) {
				@Blit("quest_mark", L6 - 16, L7 - 16);
			}
			if (L12 == 1) {
				@Blit("mainquest_mark", L6 - 16, L7 - 16);
			}
			if (L12 == 3) {
				@Blit("info_mark", L6 - 16, L7 - 16);
			}
		}
		if (!tv16) {
			float L14;
			int L15;
			@GetPlayerMapAngle(L14);
			L15 = L14 / 6.28000020980835 * 16;
			L6 = f_80_a1_i(tv21.x);
			L7 = f_87_a1_i(tv21.z);
			@Blit("player" + L15, L6 - 8, L7 - 8);
		} else {
			L6 = f_80_a1_i(tv21.x);
			L7 = f_87_a1_i(tv21.z);
			@Blit("player0", L6 - 8, L7 - 8);
		}
	}

	void OnDragBegin(int a0, int a1)
	{
		if (f_0_a0_b()) {
			return;
		}
		tv14 = true;
		tv6 = a0;
		tv7 = a1;
		tv8 = tv11;
		tv9 = tv12;
		@SetCursor("drag");
	}

	void OnDragEnd(int a0, int a1, bool a2)
	{
		tv14 = false;
		@SetCursor("default");
	}

	void OnMouseMove(int a0, int a1)
	{
		tv4 = a0;
		tv5 = a1;
		tv15 = false;
		if (tv14) {
			tv11 = tv8 + (tv6 - a0) / tv13;
			tv12 = tv9 + (tv7 - a1) / tv13;
		}
	}

	void OnMouseLeave(void)
	{
		tv15 = true;
	}

	void f_1db_a0_v(void)
	{
		tv13 = tv13 * 1.399999976158142;
		if (tv13 > 2.0) {
			tv13 = 2.0;
		}
	}

	void f_1e2_a0_v(void)
	{
		tv13 = tv13 / 1.399999976158142;
		if (tv13 < g0) {
			tv13 = g0;
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "button_plus") {
			f_1db_a0_v();
		}
		if (a1 == "button_minus") {
			f_1e2_a0_v();
		}
	}

	void OnKeyDown(int a0)
	{
		int L0;
		int L1;
		if (a0 == 107) {
			f_1db_a0_v();
			return;
		}
		if (a0 == 109) {
			f_1e2_a0_v();
			return;
		}
		L0 = tv11;
		L1 = tv12;
		tv19->ConvertToWorldCoordinates(L0, L1);
		tv19->SetMapParams(L0, L1, tv13);
		@DestroyWindow();
	}
}

Vector f_211_a1_V(string a0)
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

