maintask task_0
{
	void init(int var_0_int, object var_1_object, object var_2_object, object var_3_object)
	{
		@GetPlayerMoneyCount(var_0_int);
		@SetCursor("default");
		@SetOwnerDraw(false);
		@SetNeedUpdate(false);
		@CaptureKeyboard();
		@ShowCursor();
		@GetChooseItems(var_1_object);
		@GetAdditionalData(var_2_object);
		@GetReturnValue(var_3_object);
		func_27(var_2_object, var_3_object);
		@ProcessEvents();
	}

	void OnPlayerStopShooting(int var_0_int, object var_1_object, object var_2_object, object var_3_object)
	{
	}

	// @pe
	void event_100(int var_0_int, object var_1_object, object var_2_object, object var_3_object, int var_4_int)
	{
		@DestroyWindow();
	}

	void event_200(int var_0_int, object var_1_object, object var_2_object, object var_3_object, int var_4_int, string var_5_string, object var_6_object)
	{
		int var_8_int;
		if(var_5_string == "ok") {
			@DestroyWindow();
		} else if(var_5_string == "cancel") {
				var_3_object->clear(); //@t
				@DestroyWindow();
		}
	Label_101:
		for(;;) {

		}
	
	
		for(;;) {
			if(!(0 < 4)) goto Label_101;
			string var_15_string; int var_16_int;
			var_8_int = var_16_int;
			func_102(var_15_string, var_16_int);
			if(var_5_string == var_15_string) {
			}
			var_8_int += 1;
		}
	}

}


void func_27(int var_0_int, object var_1_object)
{
	object var_13_object; int var_14_int;
	@SendMessage(var_0_int, "money_slot");
	int var_11_int;
	var_1_object->size(var_11_int); //@t
	int var_12_int = 0;
	
	for(;;) {
		if(var_12_int < var_11_int) {
			if(var_12_int >= 4) {
			} else {
				var_1_object->get(var_13_object, var_12_int); //@t
				@SendMessage(0, ("cslot0" + (var_12_int + 1)), var_13_object);
				var_13_object = null;
				var_12_int += 1;
			}
		}
		var_11_int = var_14_int;

		while(var_14_int < 4) {
			@SendMessage(32768, ("cslot0" + (var_14_int + 1)));
			var_14_int += 1;
		}


	}
}


// @pe
void func_102(string var_15_string, int var_16_int)
{
	if((var_16_int + 1) < 10)
		var_15_string = "slot0" + (var_16_int + 1);
	var_15_string = "slot" + (var_16_int + 1);
}


