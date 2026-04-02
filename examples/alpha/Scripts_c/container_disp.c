maintask task_0
{
	void init(bool var_0_bool)
	{
		bool var_3_bool; bool var_4_bool;
		@SetVisibility(true);
	
		for(;;) {
			var_0_bool = false;

			for(;;) {
				@Sleep(900.0, var_3_bool);
				var_7_bool = !var_3_bool; //@nz
				if(var_7_bool == 0) goto Label_11;
			}

		Label_11:
			@IsLoaded(var_4_bool);
			if(!var_4_bool) //@nz
				@SetDeathState();
			var_0_bool = true;
			@Hold();
		}
	}
	EMIT "Return(); Pop(4)";

	void OnUse(bool var_0_bool, object var_1_object)
	{
		bool var_5_bool;
		func_95();
		bool var_6_bool;
		func_98(var_6_bool);
		if(!var_6_bool) { //@nz
		}
		@StopGroup0();
		bool var_4_bool;
		var_1_object->IsOnGround(var_4_bool);
		if(var_4_bool != 0) {
			disable OnUse;
			@IsOverrideActive(var_5_bool);
			if(!var_5_bool) //@nz
				@Barter(var_1_object);
			enable OnUse;
		}
	}

	// @pe
	void OnInventoryAddItem(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, int var_4_int)
	{
		func_95();
	}

	void OnInventoryRemoveItem(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, int var_4_int)
	{
		bool var_6_bool;
		@GetItemCount(var_6_bool);
		@Trace(var_6_bool);
		if(!var_6_bool) //@nz
			@SetDeathState();
		else
			func_95();
	
	}

	void OnUnload(bool var_0_bool)
	{
		int var_6_int; int var_7_int; object var_8_object; bool var_9_bool; bool var_10_bool;
		if(var_0_bool != 0) {
			@GetItemCount(var_6_int);
			var_7_int = 0;

			while(var_7_int < var_6_int) {
				@GetItem(var_8_object, var_7_int);
				var_8_object->HasProperty(var_9_bool, "undisposable");
				if(var_9_bool != 0) {
					var_8_object->GetProperty(var_10_bool, "undisposable");
					if(var_10_bool != 0) {
					}
				}
				var_8_object = null;
				var_7_int += 1;
			}

			@SetDeathState();
		}
	}

}


void func_98(bool var_6_bool)
{
	int var_8_int;
	@GetVariable("nouse_container", var_8_int);
	var_6_bool = !var_8_int;
}


void func_95(void)
{
	@StopGroup0();
}


