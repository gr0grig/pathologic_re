event OnMessage 200;

maintask t0
{
	void init(void)
	{
		@SetOwnerDraw(false);
		@SetModal(true);
		@ProcessEvents();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "danko_button") {
			@SendToParent(0);
			@DestroyWindow();
		}
		if (a1 == "klara_button") {
			@SendToParent(1);
		}
		if (a1 == "burah_button") {
			@SendToParent(2);
		}
	}
}

