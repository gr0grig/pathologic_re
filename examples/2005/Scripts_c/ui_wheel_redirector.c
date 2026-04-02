maintask task_0
{
	void init(void)
	{
		@ProcessEvents();
	}

	// @pe
	void OnPlayerHolsterWeapon(int var_0_int, int var_1_int, float var_2_float)
	{
		@SendMessageToParent(var_2_float);
	}

}


