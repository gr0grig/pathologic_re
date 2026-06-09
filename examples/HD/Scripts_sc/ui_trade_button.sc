event OnMessage 200;
event OnLButtonDown 2;
event OnLButtonUp 3;
event OnMouseLeave 10;

maintask t0
{
	void init(void)
	{
		@SetBackground("default");
		@SetOwnerDraw(false);
		@ProcessEvents();
	}

	void f_9_a0_v(void)
	{
		int L0;
		int L1;
		int L2;
		int L3;
		L0 = 0;
		L1 = 0;
		L2 = 0;
		L3 = 0;
		@ClientToScreen(L0, L1);
		@GetWindowSize(L2, L3);
		@SetMousePos(L0 + L2 / 2, L1 + L3 / 2);
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a0 == -4) {
			f_9_a0_v();
			return;
		}
	}

	void OnLButtonDown(int a0, int a1)
	{
		@SetBackground("pressed");
		@SendMessageToParent(0);
	}

	void OnLButtonUp(int a0, int a1)
	{
		@SetBackground("default");
	}

	void OnMouseLeave(void)
	{
		@SetBackground("default");
	}
}

