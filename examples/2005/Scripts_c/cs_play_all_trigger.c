maintask task_0
{
	void init(void)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnTrigger(string name)
	{
		if(name == "play") {
			disable OnTrigger;
			@PlayAnimation();
			@Hold();
			enable OnTrigger;
		}
	}

}


