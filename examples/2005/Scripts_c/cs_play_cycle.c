maintask task_0
{
	void init(void)
	{
		float var_1_float;
		@GetAnimationLength(var_1_float);
	
		for(;;) {
			@PlayAnimation(0, var_1_float);
			@WaitForAnimEnd();
		}
	}
	EMIT "Return(); Pop(2)";

}


