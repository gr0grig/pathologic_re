maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, int var_3_int, int var_4_int, int var_5_int, int var_6_int)
	{
		object var_12_object; string var_13_string; string var_14_string;
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		int var_17_int;
		func_648(var_17_int);
		var_3_int = var_17_int;
		@GetChooseItems(var_0_object);
		@GetAdditionalData(var_1_object);
		@GetReturnValue(var_2_object);
		var_6_int = 2;
		int var_11_int = 0;
	
		for(;;) {
			if(var_11_int < 4) {
				@CreateStringVector(var_12_object);
				if((var_11_int - 1) >= 0) {
					string var_30_string;
					func_614(var_30_string, (var_11_int - 1));
					var_30_string = var_13_string;
				} else {
					var_13_string = "$parent";
			}
				string var_55_string;
				func_614(var_55_string, 0);
				@SendMessage(-6, var_55_string);
				func_370(var_13_string, var_14_string);
				func_399(var_11_int, var_12_object, var_13_string, var_14_string);
				@ProcessEvents();
			}
			if((var_11_int + 1) < 4) {
				string var_47_string;
				func_614(var_47_string, (var_11_int + 1));
				var_47_string = var_14_string;
			} else {

			}
			var_12_object->add(var_13_string);
			var_12_object->add("$parent");
			string var_51_string; int var_52_int;
			var_11_int = var_52_int;
			func_614(var_51_string, var_52_int);
			@SendMessage(-1, var_51_string, var_12_object);
			var_12_object = null;
			var_11_int += 1;
		}
	
	}

	void event_101(object var_0_object, object var_1_object, object var_2_object, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int)
	{
		int var_11_int; int var_12_int; int var_13_int;
		if(var_7_int == 267) {
			if(var_6_int == 0) {
				var_6_int = 1;
				@SendMessage(-4, "cancel");
			} else {
						bool var_63_bool = true;
						var_65_bool = var_6_int == 1;
						if(var_65_bool != 1) {
							var_67_bool = var_6_int == 2;
							if(var_67_bool != 1)
								var_63_bool = false;
						}
						if(var_63_bool == 0) goto Label_123;
						var_6_int = 2;

						for(;;) {
							if(!(0 < 4)) goto Label_123;
							string var_71_string; int var_72_int;
							var_11_int = var_72_int;
							func_614(var_71_string, var_72_int);
							@SendMessage(-7, var_71_string);
							var_11_int += 1;
						}
			}
		}
	Label_123:
		if(var_7_int == 268) {
			bool var_22_bool = true;
			var_24_bool = var_6_int == 1;
			if(var_24_bool != 1) {
				var_26_bool = var_6_int == 0;
				if(var_26_bool != 1)
					var_22_bool = false;
			}
			if(var_22_bool != 0) {
				@SendMessage(-4, "ok");
			} else if(0 == 2) {
				var_6_int = 1;
				@SendMessage(-4, "cancel");

			}
		}
		if(var_7_int == 269) {

			for(;;) {
				if(!(0 < 4)) goto Label_170;
				if(var_6_int == 2) {
					string var_36_string; int var_37_int;
					var_12_int = var_37_int;
					func_614(var_36_string, var_37_int);
					@SendMessage(-2, var_36_string);
				}
				var_12_int += 1;
			}
		}
	Label_170:
		if(var_7_int == 270) {

			for(;;) {
				if(!(0 < 4)) goto Label_190;
				if(var_6_int == 2) {
					string var_56_string; int var_57_int;
					var_13_int = var_57_int;
					func_614(var_56_string, var_57_int);
					@SendMessage(-3, var_56_string);
				}
				var_13_int += 1;
			}
		}
	Label_190:
	
	}

	void event_102(object var_0_object, object var_1_object, object var_2_object, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int)
	{
		int var_11_int; int var_12_int; int var_13_int;
		if(var_7_int == 272) {
			if(var_6_int == 0) {
				var_6_int = 1;
				@SendMessage(-4, "cancel");
			} else {
						bool var_63_bool = true;
						var_65_bool = var_6_int == 1;
						if(var_65_bool != 1) {
							var_67_bool = var_6_int == 2;
							if(var_67_bool != 1)
								var_63_bool = false;
						}
						if(var_63_bool == 0) goto Label_229;
						var_6_int = 2;

						for(;;) {
							if(!(0 < 4)) goto Label_229;
							string var_71_string; int var_72_int;
							var_11_int = var_72_int;
							func_614(var_71_string, var_72_int);
							@SendMessage(-7, var_71_string);
							var_11_int += 1;
						}
			}
		}
	Label_229:
		if(var_7_int == 274) {
			bool var_22_bool = true;
			var_24_bool = var_6_int == 1;
			if(var_24_bool != 1) {
				var_26_bool = var_6_int == 0;
				if(var_26_bool != 1)
					var_22_bool = false;
			}
			if(var_22_bool != 0) {
				@SendMessage(-4, "ok");
			} else if(0 == 2) {
				var_6_int = 1;
				@SendMessage(-4, "cancel");

			}
		}
		if(var_7_int == 273) {

			for(;;) {
				if(!(0 < 4)) goto Label_276;
				if(var_6_int == 2) {
					string var_36_string; int var_37_int;
					var_12_int = var_37_int;
					func_614(var_36_string, var_37_int);
					@SendMessage(-2, var_36_string);
				}
				var_12_int += 1;
			}
		}
	Label_276:
		if(var_7_int == 271) {

			for(;;) {
				if(!(0 < 4)) goto Label_296;
				if(var_6_int == 2) {
					string var_56_string; int var_57_int;
					var_13_int = var_57_int;
					func_614(var_56_string, var_57_int);
					@SendMessage(-3, var_56_string);
				}
				var_13_int += 1;
			}
		}
	Label_296:
	
	}

	// @pe
	void event_100(object var_0_object, object var_1_object, object var_2_object, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int)
	{
		var_2_object->clear(); //@t
		@DestroyWindow();
	}

	// @pe
	void OnPlayerHolsterWeapon(object var_0_object, object var_1_object, object var_2_object, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, float var_9_float)
	{
		if((var_5_int + var_9_float) < 0)
			var_5_int = 0;
		func_370(var_8_int, var_9_float);
		func_399(var_6_int, var_7_int, var_8_int, var_9_float);
	}

	void event_200(object var_0_object, object var_1_object, object var_2_object, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, string var_8_string, object var_9_object)
	{
		int var_12_int; int var_13_int; int var_14_int; int var_15_int;
		if(var_7_int == -4) {
			string var_18_string;
			func_614(var_18_string, 0);
			if(var_8_string == var_18_string) {
				if(var_5_int > 0) {
					var_5_int += -1;
					func_399(var_12_int, var_13_int, var_14_int, var_15_int);
					func_370(var_14_int, var_15_int);
				}
			} else {
				string var_96_string;
				func_614(var_96_string, 3);
				if(!(var_8_string == var_96_string)) goto Label_497;
				var_0_object->size(var_13_int); //@t
				if(!((var_5_int + 4) <= var_13_int)) goto Label_497;
				var_5_int += 1;
				func_399(var_12_int, var_13_int, var_14_int, var_15_int);
				func_370(var_14_int, var_15_int);
		}
			if(var_7_int == -11) {
				var_6_int = 0;
				return 6;
			}
			if(var_7_int == -12) {
				var_6_int = 1;
				return 6;
			}
			if(var_7_int == -9) {
				var_6_int = 2;
				return 6;
			}
			if(var_7_int < 0)
				return 6;
			if(var_8_string == "ok") {
				func_582();
			} else if(var_8_string == "cancel") {
					func_585(var_13_int, var_14_int, var_15_int);
			}
		Label_581:
			for(;;) {
				return 6;

			}

			if(var_8_string == "scrollbar") {
				var_0_object->size(var_14_int); //@t
				if((((0.01 * (var_14_int - 4)) * var_7_int) + 0.5) < 0)
					var_5_int = 0;
				func_370(var_14_int, var_15_int);
				func_399(var_12_int, var_13_int, var_14_int, var_15_int);
				goto Label_581;
			}
			int var_126_int; int var_127_int; string var_128_string;
			var_7_int = var_127_int;
			var_8_string = var_128_string;
			func_630(var_127_int, var_128_string);
			var_126_int = var_15_int;
			if(!(var_15_int != -1)) goto Label_581;
			if(var_7_int == 0) {
				func_596(var_15_int + var_5_int);
			} else if(var_7_int == 1) {
				func_605(var_15_int + var_5_int);
			}
		}
	Label_497:
		@SendMessage(-4, var_8_string);
	
	}

}


// @pe
void func_614(string var_30_string, int var_31_int)
{
	if((var_31_int + 1) < 10)
		var_30_string = "slot0" + (var_31_int + 1);
	var_30_string = "slot" + (var_31_int + 1);
}


void func_582(void)
{
	@DestroyWindow();
}


void func_648(int var_17_int)
{
	object var_20_object;
	@FindActor(var_20_object, "player");
	int var_21_int;
	var_20_object->GetProperty("money", var_21_int);
	var_21_int = var_17_int;
}
EMIT "Stack[-2] = 0";


void func_585(object var_2_object, int var_3_int, int var_4_int)
{
	var_2_object->clear(); //@t
	int var_115_int;
	func_648(var_115_int);
	var_3_int = var_115_int;
	var_4_int = 0;
	func_399(var_12_int, var_13_int, var_14_int, var_15_int);
}


void func_297(object var_2_object, bool var_91_bool, int var_92_int)
{
	int var_96_int; int var_98_int;
	var_2_object->size(var_96_int); //@t
	int var_97_int = 0;
	
	while(var_97_int < var_96_int) {
		var_2_object->get(var_98_int, var_97_int); //@t
		if(var_98_int == var_92_int)
			var_91_bool = true;
		var_97_int += 1;
	}
	
	var_91_bool = false;
}


void func_330(object var_1_object, object var_2_object, int var_3_int, int var_4_int, int var_151_int)
{
	int var_156_int; int var_158_int; int var_159_int;
	var_2_object->size(var_156_int); //@t
	int var_157_int = 0;
	
	for(;;) {
		if(var_157_int < var_156_int) {
			var_2_object->get(var_158_int, var_157_int); //@t
			if(var_158_int == var_151_int) {
				var_2_object->remove(var_157_int); //@t
				var_1_object->get(var_159_int, var_151_int); //@t
				var_3_int += var_159_int;
				var_4_int -= var_159_int;
			} else {
				var_157_int += 1;
			}
		}

	}
}


void func_399(object var_0_object, object var_1_object, int var_4_int, int var_5_int)
{
	object var_82_object; int var_83_int;
	int var_84_int;
	func_648(var_84_int);
	@SendMessage(var_84_int, "money_slot");
	@SendMessage(var_4_int, "sel_money_slot");
	int var_80_int;
	var_0_object->size(var_80_int); //@t
	int var_81_int = var_5_int;
	
	for(;;) {
		if(var_81_int < (var_5_int + 4)) {
			if(var_81_int < var_80_int) {
				var_0_object->get(var_82_object, var_81_int); //@t
				var_1_object->get(var_83_int, var_81_int); //@t
				bool var_91_bool; int var_92_int;
				var_81_int = var_92_int;
				func_297(var_83_int, var_91_bool, var_92_int);
				if(var_91_bool != 0) {
					string var_104_string;
					func_614(var_104_string, (var_81_int - var_5_int));
					@SendMessage((16384 | var_83_int), var_104_string, var_82_object);
				} else {
				string var_107_string;
				func_614(var_107_string, (var_81_int - var_5_int));
				@SendMessage(var_83_int, var_107_string, var_82_object);
			}
			string var_110_string;
			func_614(var_110_string, (var_81_int - var_5_int));
			@SendMessage(32768, var_110_string);
		}
		}
		var_82_object = null;
		goto Label_451;

	Label_451:
		var_81_int += 1;
	}
	
}


void func_370(object var_0_object, int var_5_int)
{
	int var_59_int;
	var_0_object->size(var_59_int); //@t
	if(var_59_int <= 4) {
		@SendMessage(16384, "scrollbar");
		var_5_int = 0;
	} else if((var_5_int + 4) > var_59_int) {
		@SendMessage((((var_5_int - ((var_5_int + 4) - var_59_int)) * 100) / (var_59_int - 4)), "scrollbar");
	}
	
}


// @pe
void func_596(int var_141_int)
{
	int var_142_int;
	var_141_int = var_142_int;
	func_314(var_13_int, var_14_int, var_15_int, var_141_int, var_142_int);
	func_399(var_13_int, var_14_int, var_15_int, var_141_int);
}


void func_630(int var_126_int, string var_128_string)
{
	int var_130_int;
	
	while(0 < 4) {
		string var_133_string; int var_134_int;
		var_130_int = var_134_int;
		func_614(var_133_string, var_134_int);
		if(var_128_string == var_133_string)
			var_130_int = var_126_int;
		var_130_int += 1;
	}
	
	var_126_int = -1;
}


void func_314(object var_1_object, object var_2_object, int var_3_int, int var_4_int, int var_142_int)
{
	int var_146_int;
	var_142_int = var_146_int;
	int var_144_int;
	bool var_145_bool;
	func_297(var_144_int, var_145_bool, var_146_int);
	if(var_145_bool != 0) {
	}
	var_1_object->get(var_144_int, var_142_int); //@t
	if(var_3_int >= var_144_int) {
		var_3_int -= var_144_int;
		var_4_int += var_144_int;
		var_2_object->add(var_142_int); //@t
	}
}


// @pe
void func_605(int var_150_int)
{
	int var_151_int;
	var_150_int = var_151_int;
	func_330(var_13_int, var_14_int, var_15_int, var_150_int, var_151_int);
	func_399(var_13_int, var_14_int, var_15_int, var_150_int);
}


