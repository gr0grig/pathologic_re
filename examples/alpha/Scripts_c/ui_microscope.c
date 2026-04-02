maintask task_0
{
	void init(int var_0_int, object var_1_object, object var_2_object, object var_3_object)
	{
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		func_19(var_0_int, var_1_object, var_2_object, var_3_object);
		func_69(var_1_object, var_2_object, var_3_object);
		@ProcessEvents();
	}

	// @pe
	void event_100(int var_0_int, object var_1_object, object var_2_object, object var_3_object, int var_4_int)
	{
		@DestroyWindow();
	}

	void event_200(int var_0_int, object var_1_object, object var_2_object, object var_3_object, int var_4_int, string var_5_string, object var_6_object)
	{
		int var_7_int; int var_8_int;
	
		for(;;) {
			if(0 < 12) {
				string var_11_string; int var_12_int;
				var_8_int = var_12_int;
				func_151(var_11_string, var_12_int);
				if(var_5_string == var_11_string) {
					var_0_int = var_8_int;
					func_69(var_6_object, var_7_int, var_8_int);
				} else {
					var_8_int += 1;
				}
			}

		}
	}

}


void func_69(int var_0_int, object var_1_object, object var_2_object)
{
	int var_35_int; object var_37_object; int var_38_int;
	var_1_object->size(var_35_int); //@t
	int var_36_int = 0;
	
	for(;;) {
		if(var_36_int < 12) {
			if(var_36_int < var_35_int) {
				var_1_object->get(var_37_object, var_36_int); //@t
				var_2_object->get(var_38_int, var_36_int); //@t
				if(var_0_int == var_36_int) {
					string var_44_string; int var_45_int;
					var_36_int = var_45_int;
					func_151(var_44_string, var_45_int);
					@SendMessage(16384, var_44_string, var_37_object);
					@SendMessage(var_38_int, "video");
					string var_58_string; object var_59_object;
					var_37_object = var_59_object;
					func_172(var_58_string, var_59_object);
					@SetVariable(("microscope_" + var_58_string), 1);
				} else {
				string var_73_string; int var_74_int;
				var_36_int = var_74_int;
				func_151(var_73_string, var_74_int);
				@SendMessage(0, var_73_string, var_37_object);
			}
			string var_76_string; int var_77_int;
			var_36_int = var_77_int;
			func_151(var_76_string, var_77_int);
			@SendMessage(32768, var_76_string);
		}
		}
		string var_69_string; int var_70_int;
		var_36_int = var_70_int;
		func_151(var_69_string, var_70_int);
		@SendMessage(65537, var_69_string);
		var_37_object = null;
		goto Label_127;

	Label_127:
		var_36_int += 1;
	}
	
}


void func_167(int var_23_int, object var_24_object)
{
	int var_26_int;
	var_24_object->GetItemID(var_26_int);
	var_26_int = var_23_int;
}


void func_172(string var_58_string, object var_59_object)
{
	object var_65_object;
	var_59_object = var_65_object;
	int var_64_int;
	func_167(var_64_int, var_65_object);
	int var_62_int;
	var_64_int = var_62_int;
	string var_63_string;
	@GetInvItemName(var_63_string, var_62_int);
	var_63_string = var_58_string;
}


void func_19(int var_0_int, object var_1_object, object var_2_object, object var_3_object)
{
	object var_14_object; int var_15_int; bool var_16_bool; int var_17_int;
	var_0_int = -1;
	@CreateObjectVector(var_1_object);
	@CreateIntVector(var_2_object);
	@FindActor(var_3_object, "player");
	if(!var_3_object) { //@nz
		@DestroyWindow();
		return 12;
	}
	int var_12_int;
	var_3_object->GetItemCount(var_12_int, 4); //@t
	int var_13_int = 0;
	
	for(;;) {
		if(var_13_int < var_12_int) {
			var_3_object->GetItem(var_14_object, var_13_int, 4); //@t
			int var_23_int; object var_24_object;
			func_167(var_23_int, var_24_object);
			var_23_int = var_15_int;
			@HasInvItemProperty(var_16_bool, var_15_int, "Microscope");
			if(!var_16_bool) { //@nz
			} else {
			@GetInvItemProperty(var_17_int, var_15_int, "Microscope");
			var_1_object->add(var_24_object); //@t
			var_2_object->add(var_17_int); //@t
			var_14_object = null;
		}
		return 12;
		}
		var_13_int += 1;
	}
	
}


// @pe
void func_151(string var_44_string, int var_45_int)
{
	if((var_45_int + 1) < 10)
		var_44_string = "slot0" + (var_45_int + 1);
	var_44_string = "slot" + (var_45_int + 1);
}


