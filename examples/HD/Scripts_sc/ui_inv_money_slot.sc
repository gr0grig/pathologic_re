event OnDraw 0;
event OnLButtonDown 2;
event OnRButtonDown 6;
event OnLButtonUp 3;
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
		@Blit("money", 1, 1);
		@Print("default", 2, 35, tv0);
	}

	void OnLButtonDown(int a0, int a1)
	{
		@SetBackground("selected");
		@SendMessageToParent(0);
	}

	void OnRButtonDown(int a0, int a1)
	{
		@SendMessageToParent(1);
	}

	void OnLButtonUp(int a0, int a1)
	{
	}

	void OnMessage(int a0, string a1, object a2)
	{
		tv0 = a0;
	}
}

