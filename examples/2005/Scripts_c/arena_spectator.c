maintask task_0
{
	void init(void)
	{
		object var_1_object;
		@FindActor(var_1_object, "player");
		object var_3_object;
		var_1_object = var_3_object;
		func_12(var_3_object);
		@Hold();
	}
	EMIT "Stack[-1] = 0";

}


void func_12(object var_3_object)
{
	float var_6_float;
	var_3_object->GetEyesHeight(var_6_float);
	cvector var_7_cvector = [0.0, 0.0, 0.0];
	var_8_float = GetByIndex(var_7_cvector, 1);
	var_6_float = var_8_float;
	SetByIndex(var_7_cvector, 1) = var_8_float;
	@LookAsync(var_3_object, "head", var_7_cvector);
}


