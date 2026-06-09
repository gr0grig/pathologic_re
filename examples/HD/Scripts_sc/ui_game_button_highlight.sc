event OnLButtonDown 2;
event OnLButtonUp 3;
event OnMouseEnter 9;
event OnMouseLeave 10;
event OnMessage 200;

maintask t0
{
	var string tv0;

	void init(void)
	{
		@SetBackground("default");
		@ProcessEvents();
		@GetWindowName(tv0);
		@Trace(tv0);
	}

	void OnLButtonDown(int a0, int a1)
	{
		@SetBackground("highlight");
		@SendMessageToParent(0);
	}

	void OnLButtonUp(int a0, int a1)
	{
		@SetBackground("default");
	}

	void OnMouseEnter(void)
	{
		@SetBackground("highlight");
	}

	void OnMouseLeave(void)
	{
		@SetBackground("default");
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a0 == 1) {
			@SetBackground("highlight");
		} else {
			if (a0 == 0) {
				@SetBackground("default");
			} else {
				if (a0 == 2) {
					@SetBackground("highlight");
					@SendMessageToParent(0);
				}
			}
		}
	}
}

