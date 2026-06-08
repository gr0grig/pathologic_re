event OnDraw 0;
event OnMessage 200;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		tv0 = false;
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		if (tv0) {
			@Blit("default", 0, 0);
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		tv0 = a0 != 0;
	}
}

