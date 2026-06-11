event OnDraw 0;
event OnMessage 200;

maintask t0
{
	var int tv0;

	void init(void)
	{
		tv0 = 0;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		@Print("default", 2, 35, tv0);
	}

	void OnMessage(int a0, string a1, object a2)
	{
		tv0 = a0;
	}
}

