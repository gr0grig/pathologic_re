task task_0
{
	void OnLoad(int var_0_int)
	{
		@StopGroup0();
	}

}


task task_1
{
	void OnUnload(int var_0_int)
	{
		@StopGroup0();
	}

}


maintask task_2
{
	void init(int var_0_int)
	{
		object var_2_object;
		@GetPFPolyID(var_0_int);
		if(var_0_int != -1)
			var_0_int = (var_0_int / 4) % 256;
		for(;;) {
			bool var_8_bool;
			func_70(var_8_bool);
			if(!var_8_bool) { //@nz
				TaskCall(0);
				func_0();
				TaskReturn();
			}
			bool var_12_bool;
			func_12(var_12_bool);
			if(var_12_bool != 0) {
				@GetScene(var_2_object);
				var_2_object->BlockPolygons(var_0_int, 255);
				@SetVisibility(true);
				func_69();
				TaskCall(1);
				func_6();
				TaskReturn();
				@SetVisibility(false);
				var_2_object->UnblockPolygons(var_0_int, 255);
				var_2_object = null;
			} else {
			TaskCall(1);
			func_6();
			TaskReturn();
			}
		}
	
	}
	EMIT "Return(); Pop(2)";

}


void func_0(void)
{
	@Hold();
}


void func_69(void)
{
}


void func_70(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_6(void)
{
	@Hold();
}


void func_12(bool var_12_bool)
{
	var_12_bool = true;
}


