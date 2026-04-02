maintask task_0
{
	void init(bool var_0_bool)
	{
		var_0_bool = false;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		if(var_1_string == "shot")
			func_13(var_1_string);
	}

}


void func_13(bool var_0_bool)
{
	float var_10_float; float var_11_float; bool var_12_bool; cvector var_13_cvector;
	if(var_0_bool != 0)
		return 10;
	string var_9_string;
	@GetCurrentWeapon(var_9_string);
	if(var_9_string == "samopal") {
		var_10_float = 18;
		var_11_float = 0.033333335;
	} else if(var_9_string == "rifle") {
	}
Label_38:
	for(;;) {
		@GetGeometryLocator((var_9_string + "_blast"), var_12_bool, var_13_cvector);
		if(var_12_bool != 0) {
			var_0_bool = true;
			@SetLitColor([0.49607846, 0.4176471, 0.16862746]);
			@MakeBillboard("blast", (var_9_string + "_blast.tex"), var_13_cvector, (float)18);
			@Sleep(0.075);
			@SetLitColor([0.0, 0.0, 0.0]);
			@RemoveBillboard("blast");
			var_0_bool = false;
		}
		return 10;

	}
	
	if(var_9_string == "revolver") {
		var_10_float = 15;
		var_11_float = 0.075;
		goto Label_38;
	}
}


