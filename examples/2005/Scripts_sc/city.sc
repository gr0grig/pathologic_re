event OnGameTime 9;
event OnTrigger 26;
event OnConsole 1000;
event OnKeyDown 24;

var object g0;
var object g1;
var object g2;
var object g3;
var object g4;
var object g5;
var object g6;

maintask t0
{
	void init(void)
	{
		int L0;
		g0 = f_99_a0_o();
		g1 = f_99_a0_o();
		g2 = f_99_a0_o();
		g3 = f_99_a0_o();
		g4 = f_99_a0_o();
		g5 = f_99_a0_o();
		g6 = f_9f_a0_o();
		f_51_a0_v();
		for (L0 = 0; L0 < 16; L0++) {
			@SetTimeEvent(L0 * 2 + 1, 19 + L0 * 24);
			@SetTimeEvent(L0 * 2 + 2, 10 + L0 * 24);
		}
		f_f5_a1_v(true);
		for (; ; ) {
			@Hold();
		}
	}

	void f_51_a0_v(void)
	{
	}

	void OnGameTime(int a0, float a1)
	{
		f_ee_a2_v(a0, a1);
	}

	void OnTrigger(string a0)
	{
		t1{"scenes/" + a0 + ".mot"};
	}

	void OnConsole(string a0, string a1)
	{
		if (a0 == "play") {
			t1{a1};
		} else {
			global.OnConsole(a0, a1);
		}
	}
}

task t1
{
	void init(string a0)
	{
		@Trace("playing: " + a0);
		@RegisterKeyCallback("space");
		@RegisterKeyCallback("escape");
		@CameraPlay(a0, false);
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("escape");
		@UnregisterKeyCallback("space");
		@CameraSwitchToNormal();
	}

	void OnGameTime(int a0, float a1)
	{
		f_ee_a2_v(a0, a1);
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

object f_99_a0_o(void)
{
	object L0;
	@CreateObjectSet(L0);
	return L0;
}

object f_9f_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

void f_a5_a2_v(object a0, int a1)
{
	int L0;
	string L1;
	int L2;
	a0->size(L0);
	if (a1 == 1) {
		L1 = "s_";
	} else {
		if (a1 == 2) {
			L1 = "n_";
		}
	}
	for (L2 = 0; L2 < L0; L2++) {
		string L3;
		string L4;
		object L5;
		a0->get(L3, L2);
		L4 = L1 + L3 + ".isc";
		@GetSceneByName(L5, L3);
		if (!L5) {
			@Trace("City manager: can't replace indoor scene \"" + L3 + "\" because it doesn't exist");
		} else {
			@ReplaceScene(L5, L4);
		}
	}
}

void OnConsole(string a0, string a1)
{
	if (a0 == "horror") {
		int L0;
		int L1;
		@_strtoi(L0, a1);
		g6->size(L1);
		if (L0 >= 0 && L0 < L1) {
			object L2;
			g6->get(L2, L0);
			f_a5_a2_v(L2, false);
			@Trace("Replaced");
		} else {
			@Trace("Invalid region index");
		}
	}
}

void f_ee_a2_v(int a0, float a1)
{
	f_f5_a1_v(a0 % 2);
}

void f_f5_a1_v(bool a0)
{
	if (a0) {
		@Trace("night time");
		@SwitchLights(0, true);
	} else {
		@Trace("day time");
		@SwitchLights(0, false);
	}
}

