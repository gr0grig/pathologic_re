maintask task_0
{
	void init(void)
	{
		object var_3_object;
		@FindActor(var_3_object, "player");
		if(var_3_object == null) {
		}
		cvector var_4_cvector;
		var_3_object->GetDirection(var_4_cvector);
		object var_5_object;
		@CreateSmoke(var_5_object, "smoke", 20);
		var_5_object->AddSource((var_4_cvector * 100), var_4_cvector);
		var_5_object->SetOpacity(0.8);
		var_5_object->SetSpeed(500, 100);
		var_5_object->SetLifeTime(1.5);
		var_5_object->Enable();
		var_5_object->Fade(false);
		@Sleep(1.5);
		var_5_object->Fade();
		@Sleep(1.5);
		object var_19_object;
		func_56(var_19_object);
		@RemoveActor(var_19_object);
	}
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-3] = 0";

	void OnUnload(void)
	{
		object var_0_object;
		func_56(var_0_object);
		@RemoveActor(var_0_object);
		@sync();
	}

}


void func_56(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


