event OnMouseWheel 15;

maintask t0
{
	void init(void)
	{
		@ProcessEvents();
	}

	void OnMouseWheel(int a0, int a1, float a2)
	{
		@SendMessageToParent(a2);
	}
}

