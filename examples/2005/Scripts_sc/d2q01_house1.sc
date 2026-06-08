event OnKeyDown 24;
event OnTrigger 26;
event OnLoad 5;
event OnUnload 6;

var object g0;

task t0
{
	void init(string a0)
	{
		@RegisterKeyCallback("space");
		@RegisterKeyCallback("escape");
		f_16_a1_v(a0);
		@UnregisterKeyCallback("escape");
		@UnregisterKeyCallback("space");
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}

	void f_16_a1_v(string a0)
	{
		@Trace("playing: " + a0);
		f_4e_a0_v();
		@CameraPlay(a0);
		@CameraWaitForPlayFinish();
		f_53_a0_v();
		@CameraSwitchToNormal();
	}
}

maintask t1
{
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace("@Trigger : " + a0);
		if (a0 == "d2q01_trigger") {
			t0{"scenes/d2q01_trigger.mot"};
		}
	}

	void OnLoad(void)
	{
		f_42_a2_b("quest_b1_05", "house_load");
	}

	void OnUnload(void)
	{
	}
}

bool f_42_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_4e_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_53_a0_v(void)
{
	@SetSepia(0, 0);
}

