event OnDraw 0;
event OnLButtonDown 2;
event OnMouseEnter 9;
event OnMouseLeave 10;
event OnMessage 200;

maintask t0
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		tv0 = false;
		tv1 = false;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		if (!tv0 || tv1) {
			@StretchBlit("disabled", 0, 0, 250, 297);
		}
	}

	void OnLButtonDown(int a0, int a1)
	{
		if (!tv1) {
			@SendMessageToParent(0);
		}
	}

	void OnMouseEnter(void)
	{
		tv0 = true;
		@SendMessageToParent(1);
	}

	void OnMouseLeave(void)
	{
		tv0 = false;
		@SendMessageToParent(2);
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (131072 == a0) {
			tv1 = true;
		}
	}
}

