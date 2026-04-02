maintask task_0
{
	void init(void)
	{
		@RemoveRTEnvelope();
		@RemoveEnvelope();
		@SetDeathState();
		string var_1_string;
		@GetProperty("animation", var_1_string);
		@LockAnimationEnd("all", var_1_string);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";

}


