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
		if(name == "off") {
			TaskCall(1);
			func_14();
			TaskReturn();
		}
	}

}


task task_1
{
}


void func_14(void)
{
	cvector var_7_cvector; float var_10_float;
	@GetColor(var_7_cvector);
	float var_8_float = 1;
	
	for(;;) {
		@sync(var_10_float);
		var_8_float -= (var_10_float * 0.9);
		if(var_8_float <= 0.01)
			break;
		@SetColor(var_7_cvector * var_8_float);
	}
	@SetColor(var_7_cvector * 0.01);
}


