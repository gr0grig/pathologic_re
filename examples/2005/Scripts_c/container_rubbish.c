maintask task_0
{
	void init(bool var_0_bool)
	{
		bool var_3_bool; bool var_4_bool;
		@TriggerWorld("playsound", "meshok_drop");
		@SetVisibility(true);
	
		for(;;) {
			var_0_bool = false;

			for(;;) {
				@Sleep(900.0, var_3_bool);
				var_9_bool = !var_3_bool; //@nz
				if(var_9_bool == 0) goto Label_15;
			}

		Label_15:
			@IsLoaded(var_4_bool);
			if(!var_4_bool) { //@nz
				object var_11_object;
				func_109(var_11_object);
				@RemoveActor(var_11_object);
			}
			var_0_bool = true;
			@Hold();
		}
	}
	EMIT "Return(); Pop(4)";

	void OnUse(bool var_0_bool, object var_1_object)
	{
		bool var_5_bool;
		func_106();
		bool var_6_bool;
		func_115(var_6_bool);
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
		func_106();
	}

	void OnInventoryRemoveItem(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, int var_4_int)
	{
		bool var_6_bool;
		@GetItemCount(var_6_bool);
		if(!var_6_bool) { //@nz
			object var_8_object;
			func_109(var_8_object);
			@RemoveActor(var_8_object);
		} else {
			func_106();
		}
	
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

			object var_18_object;
			func_109(var_18_object);
			@RemoveActor(var_18_object);
		}
	}

}


void func_106(void)
{
	@StopGroup0();
}


void func_115(bool var_6_bool)
{
	int var_8_int;
	@GetVariable("nouse_container", var_8_int);
	var_6_bool = !var_8_int;
}


void func_109(object var_11_object)
{
	object var_13_object;
	@self(var_13_object);
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


