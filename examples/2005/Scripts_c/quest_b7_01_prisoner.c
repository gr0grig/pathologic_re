maintask task_0
{
	void init(bool var_0_bool)
	{
	
	Label_0:
		for(;;) {
			bool var_1_bool;
			func_62(var_1_bool);
			var_4_bool = !var_1_bool; //@nz
			if(var_4_bool == 0) goto Label_8;
			@Hold();
		}
	
	Label_8:
		@PlayAnimation("all", "prisoner");
		@WaitForAnimEnd();
		goto Label_0;
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		bool var_3_bool;
		if(var_1_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_3_bool);
			bool var_6_bool = false;
			if(!var_3_bool) { //@nz
				bool var_8_bool;
				func_60(var_8_bool);
				if(var_8_bool != 0)
					var_6_bool = true;
			}
			if(var_6_bool != 0) {
				object var_9_object;
				func_67(var_9_object);
				@RemoveActor(var_9_object);
			}
		}
	}

	void OnLoad(bool var_0_bool)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(bool var_0_bool)
	{
		bool var_1_bool = false;
		if(var_0_bool != 0) {
			bool var_3_bool;
			func_60(var_3_bool);
			if(var_3_bool != 0)
				var_1_bool = true;
		}
		if(var_1_bool != 0) {
			object var_4_object;
			func_67(var_4_object);
			@RemoveActor(var_4_object);
		}
	}

}


void func_67(object var_4_object)
{
	object var_6_object;
	@self(var_6_object);
	var_6_object = var_4_object;
}
EMIT "Stack[-1] = 0";


void func_60(bool var_3_bool)
{
	var_3_bool = true;
}


void func_62(bool var_1_bool)
{
	bool var_3_bool;
	@IsLoaded(var_3_bool);
	var_3_bool = var_1_bool;
}


