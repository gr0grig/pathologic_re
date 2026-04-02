maintask task_0
{
	void init(void)
	{
	
		while(true != 0) {
			func_8("sobor_idle");
		}
	
	}

}


void func_8(string var_1_string)
{
	bool var_4_bool;
	@HasAnimation(var_4_bool, "all", var_1_string);
	if(!var_4_bool) { //@nz
	}
	@PlayAnimation("all", var_1_string);
	bool var_5_bool;
	@WaitForAnimEnd(var_5_bool);
	@LockAnimationEnd("all", var_1_string);
}


