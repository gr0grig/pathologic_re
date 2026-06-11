event OnKeyDown 24;
event OnTrigger 26;

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
		@CameraPlay(a0);
		@CameraWaitForPlayFinish();
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
}

