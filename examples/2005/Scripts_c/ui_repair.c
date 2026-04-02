maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, int var_3_int, int var_4_int, int var_5_int)
	{
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		int var_8_int;
		func_316(var_8_int);
		@GetChooseItems(var_0_object);
		@GetAdditionalData(var_1_object);
		@GetReturnValue(var_2_object);
		func_102(var_4_int, var_5_int);
		func_131(var_2_object, var_8_int, var_4_int, var_5_int);
		@ProcessEvents();
	}

	// @pe
	void event_100(object var_0_object, object var_1_object, object var_2_object, int var_3_int, int var_4_int, int var_5_int, int var_6_int)
	{
		var_2_object->clear(); //@t
		@DestroyWindow();
	}

	// @pe
	void OnPlayerHolsterWeapon(object var_0_object, object var_1_object, object var_2_object, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, float var_8_float)
	{
		if((var_5_int + var_8_float) < 0)
			var_5_int = 0;
		func_102(var_7_int, var_8_float);
		func_131(var_5_int, var_6_int, var_7_int, var_8_float);
	}

	void event_200(object var_0_object, object var_1_object, object var_2_object, int var_3_int, int var_4_int, int var_5_int, int var_6_int, string var_7_string, object var_8_object)
	{
		int var_9_int; int var_10_int; int var_11_int; int var_12_int;
		if(var_7_string == "ok") {
			func_250();
		} else if(var_7_string == "cancel") {
				func_253(var_10_int, var_11_int, var_12_int);
		}
	Label_249:
		for(;;) {
			return 4;

		}
	
		if(var_7_string == "scrollbar") {
			var_0_object->size(var_11_int); //@t
			if((((0.01 * (var_11_int - 4)) * var_6_int) + 0.5) < 0)
				var_5_int = 0;
			func_102(var_11_int, var_12_int);
			func_131(var_9_int, var_10_int, var_11_int, var_12_int);
			goto Label_249;
		}
		int var_99_int; int var_100_int; string var_101_string;
		var_6_int = var_100_int;
		var_7_string = var_101_string;
		func_298(var_100_int, var_101_string);
		var_99_int = var_12_int;
		if(!(var_12_int != -1)) goto Label_249;
		if(var_6_int == 0) {
			func_264(var_12_int + var_5_int);
		} else if(var_6_int == 1) {
			func_273(var_12_int + var_5_int);
		}
	}

}


void func_131(object var_0_object, object var_1_object, int var_4_int, int var_5_int)
{
	object var_40_object; int var_41_int;
	int var_42_int;
	func_316(var_42_int);
	@SendMessage(var_42_int, "money_slot");
	@SendMessage(var_4_int, "sel_money_slot");
	int var_38_int;
	var_0_object->size(var_38_int); //@t
	int var_39_int = var_5_int;
	
	for(;;) {
		if(var_39_int < (var_5_int + 4)) {
			if(var_39_int < var_38_int) {
				var_0_object->get(var_40_object, var_39_int); //@t
				var_1_object->get(var_41_int, var_39_int); //@t
				bool var_49_bool; int var_50_int;
				var_39_int = var_50_int;
				func_29(var_41_int, var_49_bool, var_50_int);
				if(var_49_bool != 0) {
					string var_62_string;
					func_282(var_62_string, (var_39_int - var_5_int));
					@SendMessage((16384 | var_41_int), var_62_string, var_40_object);
				} else {
				string var_75_string;
				func_282(var_75_string, (var_39_int - var_5_int));
				@SendMessage(var_41_int, var_75_string, var_40_object);
			}
			string var_78_string;
			func_282(var_78_string, (var_39_int - var_5_int));
			@SendMessage(32768, var_78_string);
		}
		}
		var_40_object = null;
		goto Label_183;

	Label_183:
		var_39_int += 1;
	}
	
}


void func_102(object var_0_object, int var_5_int)
{
	int var_17_int;
	var_0_object->size(var_17_int); //@t
	if(var_17_int <= 4) {
		@SendMessage(16384, "scrollbar");
		var_5_int = 0;
	} else if((var_5_int + 4) > var_17_int) {
		@SendMessage((((var_5_int - ((var_5_int + 4) - var_17_int)) * 100) / (var_17_int - 4)), "scrollbar");
	}
	
}


// @pe
void func_264(int var_114_int)
{
	int var_115_int;
	var_114_int = var_115_int;
	func_46(var_10_int, var_11_int, var_12_int, var_114_int, var_115_int);
	func_131(var_10_int, var_11_int, var_12_int, var_114_int);
}


void func_298(int var_99_int, string var_101_string)
{
	int var_103_int;
	
	while(0 < 4) {
		string var_106_string; int var_107_int;
		var_103_int = var_107_int;
		func_282(var_106_string, var_107_int);
		if(var_101_string == var_106_string)
			var_103_int = var_99_int;
		var_103_int += 1;
	}
	
	var_99_int = -1;
}


void func_250(void)
{
	@DestroyWindow();
}


void func_46(object var_1_object, object var_2_object, int var_3_int, int var_4_int, int var_115_int)
{
	int var_119_int;
	var_115_int = var_119_int;
	int var_117_int;
	bool var_118_bool;
	func_29(var_117_int, var_118_bool, var_119_int);
	if(var_118_bool != 0) {
	}
	var_1_object->get(var_117_int, var_115_int); //@t
	if(var_3_int >= var_117_int) {
		var_3_int -= var_117_int;
		var_4_int += var_117_int;
		var_2_object->add(var_115_int); //@t
	}
}


// @pe
void func_273(int var_123_int)
{
	int var_124_int;
	var_123_int = var_124_int;
	func_62(var_10_int, var_11_int, var_12_int, var_123_int, var_124_int);
	func_131(var_10_int, var_11_int, var_12_int, var_123_int);
}


void func_253(object var_2_object, int var_3_int, int var_4_int)
{
	var_2_object->clear(); //@t
	int var_17_int;
	func_316(var_17_int);
	var_3_int = var_17_int;
	var_4_int = 0;
	func_131(var_9_int, var_10_int, var_11_int, var_12_int);
}


// @pe
void func_282(string var_62_string, int var_63_int)
{
	if((var_63_int + 1) < 10)
		var_62_string = "slot0" + (var_63_int + 1);
	var_62_string = "slot" + (var_63_int + 1);
}


void func_316(int var_8_int)
{
	object var_11_object;
	@FindActor(var_11_object, "player");
	int var_12_int;
	var_11_object->GetProperty("money", var_12_int);
	var_12_int = var_8_int;
}
EMIT "Stack[-2] = 0";


void func_29(object var_2_object, bool var_49_bool, int var_50_int)
{
	int var_54_int; int var_56_int;
	var_2_object->size(var_54_int); //@t
	int var_55_int = 0;
	
	while(var_55_int < var_54_int) {
		var_2_object->get(var_56_int, var_55_int); //@t
		if(var_56_int == var_50_int)
			var_49_bool = true;
		var_55_int += 1;
	}
	
	var_49_bool = false;
}


void func_62(object var_1_object, object var_2_object, int var_3_int, int var_4_int, int var_124_int)
{
	int var_129_int; int var_131_int; int var_132_int;
	var_2_object->size(var_129_int); //@t
	int var_130_int = 0;
	
	for(;;) {
		if(var_130_int < var_129_int) {
			var_2_object->get(var_131_int, var_130_int); //@t
			if(var_131_int == var_124_int) {
				var_2_object->remove(var_130_int); //@t
				var_1_object->get(var_132_int, var_124_int); //@t
				var_3_int += var_132_int;
				var_4_int -= var_132_int;
			} else {
				var_130_int += 1;
			}
		}

	}
}


