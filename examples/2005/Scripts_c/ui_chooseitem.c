maintask task_0
{
	void init(object var_0_object)
	{
		@SetCursor("default");
		@SetOwnerDraw(false);
		@SetNeedUpdate(false);
		@CaptureKeyboard();
		@ShowCursor();
		@GetChooseItems(var_0_object);
		func_21(var_0_object);
		@ProcessEvents();
	}

	void OnPlayerStopShooting(object var_0_object)
	{
	}

	// @pe
	void event_100(object var_0_object, int var_1_int)
	{
		@DestroyWindow();
	}

	void event_200(object var_0_object, int var_1_int, string var_2_string, object var_3_object)
	{
		int var_7_int; int var_8_int; object var_9_object;
		var_7_int = 0;
	
		while(var_7_int < 4) {
			if(var_2_string == ("cslot0" + (var_7_int + 1))) {
				var_0_object->size(var_8_int); //@t
				if(var_7_int < var_8_int) {
					@GetReturnValue(var_9_object);
					var_9_object->clear();
					var_9_object->add(var_7_int);
					@DestroyWindow();
					var_9_object = null;
				}
			}
			var_7_int += 1;
		}
	
	}

}


void func_21(object var_0_object)
{
	int var_8_int; object var_10_object; int var_11_int;
	var_0_object->size(var_8_int); //@t
	int var_9_int = 0;
	
	for(;;) {
		if(var_9_int < var_8_int) {
			if(var_9_int >= 4) {
			} else {
				var_0_object->get(var_10_object, var_9_int); //@t
				@SendMessage(0, ("cslot0" + (var_9_int + 1)), var_10_object);
				var_10_object = null;
				var_9_int += 1;
			}
		}
		var_8_int = var_11_int;

		while(var_11_int < 4) {
			@SendMessage(32768, ("cslot0" + (var_11_int + 1)));
			var_11_int += 1;
		}


	}
}


