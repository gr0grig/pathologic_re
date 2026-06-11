maintask t0
{
	void init(void)
	{
		float L0;
		@GetProperty("health", L0);
		if (L0 > 0.05000000074505806) {
			@SetProperty("health", 0.05000000074505806);
		}
		@SetProperty("disease", 0);
	}
}

