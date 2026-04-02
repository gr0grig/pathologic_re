maintask task_0
{
	void init(void)
	{
	
		while(true != 0) {
			func_8("cry");
		}
	
	}

}


void func_8(string var_1_string)
{
	@WaitForAnimEnd();
	bool var_6_bool;
	func_29(var_6_bool);
	if(!var_6_bool) //@nz
		return 4;
	bool var_4_bool;
	@HasAnimation(var_4_bool, "all", var_1_string);
	if(!var_4_bool) //@nz
		return 4;
	@PlayAnimation("all", var_1_string);
	bool var_5_bool;
	@WaitForAnimEnd(var_5_bool);
}


void func_29(bool var_6_bool)
{
	bool var_8_bool;
	@IsLoaded(var_8_bool);
	var_8_bool = var_6_bool;
}


