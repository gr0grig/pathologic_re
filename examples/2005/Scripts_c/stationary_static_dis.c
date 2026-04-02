task task_0
{
	void OnLoad(int var_0_int)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	void OnUnload(int var_0_int)
	{
		@StopGroup0();
		@sync();
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
			func_83(var_8_bool);
			if(!var_8_bool) { //@nz
				TaskCall(0);
				func_0();
				TaskReturn();
			}
			bool var_14_bool;
			func_25(var_14_bool);
			if(var_14_bool != 0) {
				@GetScene(var_2_object);
				var_2_object->BlockPolygons(var_0_int, 255);
				@SetVisibility(true);
				func_82();
				TaskCall(1);
				func_13();
				TaskReturn();
				@SetVisibility(false);
				var_2_object->UnblockPolygons(var_0_int, 255);
				var_2_object = null;
			} else {
			TaskCall(1);
			func_13();
			TaskReturn();
			}
		}
	
	}
	EMIT "Return(); Pop(2)";

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_12_bool;
	func_83(var_12_bool);
	if(!var_12_bool) goto Label_0; //@nz
}


void func_13(void)
{
	
Label_13:
	@Hold();
	bool var_17_bool;
	func_83(var_17_bool);
	if(var_17_bool == 1) goto Label_13;
}


void func_82(void)
{
}


void func_83(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_25(bool var_14_bool)
{
	var_14_bool = true;
}


