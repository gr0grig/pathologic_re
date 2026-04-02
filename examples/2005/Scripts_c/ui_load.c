maintask task_0
{
	void init(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object)
	{
		@CaptureKeyboard();
	
		while(true != 0) {
			func_33(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, false);
		}
	
	}

	// @pe
	void event_100(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, int var_11_int)
	{
		@SendMessageToParent(1);
	}

	void OnUse(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object)
	{
		int var_12_int;
		func_100(var_12_int, var_1_int);
		int var_11_int;
		var_12_int = var_11_int;
		func_103(var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int);
	}

	// @pe
	void event_200(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, int var_11_int, string var_12_string, object var_13_object)
	{
		if(var_12_string == "scrollbar") {
			var_16_int = -var_11_int;
			int var_17_int;
			func_476(var_16_int, var_17_int);
			var_1_int = (var_16_int * (var_17_int - var_5_int)) / 100;
			func_484(var_12_string, var_13_object);
		}
	}

	void OnPlayerHolsterWeapon(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, float var_13_float)
	{
		int var_16_int;
		func_474(var_16_int);
		int var_15_int = (var_13_float * var_16_int) / 2;
		var_1_int += var_15_int;
		int var_14_int;
		func_484(var_14_int, var_15_int);
	}

	// @pe
	void OnStopSee(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int)
	{
		int var_13_int; int var_14_int; int var_15_int;
		func_396(var_14_int, var_15_int, var_13_int, var_14_int, var_15_int);
		var_2_int = var_13_int;
		int var_36_int; int var_37_int; int var_38_int;
		func_435(var_37_int, var_38_int, var_36_int, var_37_int, var_38_int);
		var_3_int = var_36_int;
	}

	void OnHear(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int)
	{
		object var_15_object; object var_16_object;
		if(var_2_int != -1) {
			int var_19_int; int var_20_int; int var_21_int;
			var_11_int = var_20_int;
			var_12_int = var_21_int;
			func_396(var_15_object, var_16_object, var_19_int, var_20_int, var_21_int);
			var_2_int = var_19_int;
			if(var_2_int != -1) {
				var_9_object->get(var_15_object, var_2_int); //@t
				object var_44_object;
				var_15_object = var_44_object;
				func_15(var_44_object);
				var_15_object = null;
			}
		} else {
			bool var_46_bool = false;
			if(var_0_bool != 0) {
				if(var_3_int != -1)
					var_46_bool = true;
			}
			if(var_46_bool == 0) goto Label_395;
			int var_50_int; int var_51_int; int var_52_int;
			var_11_int = var_51_int;
			var_12_int = var_52_int;
			func_435(var_15_object, var_16_object, var_50_int, var_51_int, var_52_int);
			var_3_int = var_50_int;
			if(!(var_3_int != -1)) goto Label_395;
			var_9_object->get(var_16_object, var_3_int); //@t
			if(var_16_object != 0) {
				object var_76_object;
				var_16_object = var_76_object;
				func_20(var_76_object);
			}
			var_16_object = null;
		}
	Label_395:
	
	}

}


void func_33(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, bool var_12_bool)
{
	object var_16_object; object var_17_object; bool var_18_bool;
	var_2_int = -1;
	var_3_int = -1;
	var_0_bool = var_12_bool;
	@CreateSaveEnumerator(var_8_object);
	if(!var_8_object) //@nz
		return 6;
	@CreateObjectVector(var_9_object);
	if(var_12_bool != 0) {
		var_9_object->add(Obj()); //@t
		var_16_object = null;
	}
Label_50:
	for(;;) {
		if(1 != 0) {
			var_8_object->Next(var_17_object); //@t
			if(!var_17_object) { //@nz
			} else {
				if(var_12_bool == 0) goto Label_64;
				var_17_object->IsQuickSave(var_18_bool);
				if(var_18_bool == 0) goto Label_64;
			}
		}
		@GetWindowSize(var_4_int, var_5_int);
		@ClientToScreen(0, 0);
		var_1_int = 0;
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@CreateWindow("sys_border.xml", false, var_10_object);
		func_484(var_17_object, var_18_bool);
		@ProcessEvents();
		return 6;

	}
	
Label_64:
	var_9_object->add(var_17_object); //@t
	var_17_object = null;
	goto Label_50;
}


void func_547(string var_106_string, object var_107_object)
{
	int var_115_int; int var_116_int; int var_117_int; int var_118_int; int var_119_int;
	var_107_object->GetSaveTime(var_115_int, var_116_int, var_117_int, var_119_int, var_118_int);
	string var_120_string;
	func_518(var_120_string, 19);
	string var_122_string;
	func_518(var_122_string, (20 + var_119_int));
	string var_114_string;
	@format(var_114_string, var_120_string, var_118_int, var_122_string, var_117_int, var_116_int, var_115_int);
	var_114_string = var_106_string;
}


// @pe
void func_100(int var_12_int, int var_13_int)
{
	var_13_int = var_12_int;
}


void func_484(int var_1_int, int var_5_int)
{
	int var_28_int;
	int var_29_int;
	func_476(var_28_int, var_29_int);
	if((var_29_int - var_5_int) < 0)
		var_28_int = 0;
	var_35_int = -var_1_int;
	if(var_35_int > var_28_int) {
		var_1_int = -var_28_int;
	} else if(var_1_int > 0) {
			var_1_int = 0;
	}
	if(var_28_int == 0) {
		@SendMessage(16384, "scrollbar");
	} else {
		var_41_int = -var_1_int;
		@SendMessage(((var_41_int * 100) / var_28_int), "scrollbar");

	}
	
}


void func_518(string var_68_string, int var_69_int)
{
	string var_71_string;
	@GetStringByID(var_71_string, var_69_int);
	var_71_string = var_68_string;
}


void func_103(int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, object var_9_object, int var_11_int)
{
	int var_24_int; object var_26_object; int var_27_int; int var_28_int; bool var_29_bool; string var_30_string; bool var_31_bool; int var_32_int; string var_33_string;
	var_9_object->size(var_24_int); //@t
	int var_25_int = 0;
	
	for(;;) {
		if(var_25_int < var_24_int) {
			var_9_object->get(var_26_object, var_25_int); //@t
			var_27_int = 0;
			var_11_int = var_28_int;
			@ClientToScreen(var_27_int, var_28_int);
			if(var_26_object != 0) {
				var_26_object->BlitClipped(var_27_int, var_28_int, var_6_int, var_7_int, var_4_int, var_5_int);
				int var_37_int;
				func_268(0, var_37_int, false);
				var_26_object->IsQuickSave(var_29_bool);
				if(var_29_bool != 0) {
					string var_68_string;
					func_518(var_68_string, 17);
					@Print("default", 129, (7 + var_37_int), var_68_string, 0.5568628, 0.5568628, 0.5568628);
				} else {
							var_26_object->GetProperty(0, var_31_bool, var_32_int);
							if(var_31_bool != 0) {
								string var_166_string;
								func_518(var_166_string, (500 + var_32_int));
								var_166_string = var_30_string;
							} else {
								var_30_string = "????";
			}
							int var_177_int;
							var_11_int = var_177_int;
							func_268(0, var_177_int, true);
							string var_183_string;
							func_518(var_183_string, 32);
							@Print("default", 129, (47 + var_11_int), var_183_string, 0.5568628, 0.5568628, 0.5568628);
		}
					}
					@Print("default", 129, (7 + var_11_int), var_30_string, 0.5568628, 0.5568628, 0.5568628);
		}
		string var_75_string; object var_76_object;
		var_26_object = var_76_object;
		func_523(var_75_string, var_76_object);
		var_75_string = var_33_string;
		@Print("big", 129, (28 + var_11_int), var_33_string, 1.0, 1.0, 1.0);
		string var_106_string; object var_107_object;
		var_26_object = var_107_object;
		func_547(var_106_string, var_107_object);
		var_106_string = var_33_string;
		@Print("default", 129, (47 + var_11_int), var_33_string, 0.5568628, 0.5568628, 0.5568628);
		if(var_0_bool != 0) {
			if(var_3_int == var_25_int)
				@Blit("button_x_pressed", 248, (68 + var_11_int));
			else
				@Blit("button_x", 248, (68 + var_11_int));

		}
		goto Label_230;

	Label_230:
		if(var_2_int == var_25_int)
			@Blit("button_pressed", 129, (67 + var_11_int));
		else
			@Blit("button", 129, (67 + var_11_int));

		object var_143_object;
		var_26_object = var_143_object;
		func_10(129, (67 + var_11_int));
		var_11_int += 90;
		@StretchBlit("separator", 0, (var_11_int + 15), var_4_int, 1);
		var_11_int += 31;
		var_26_object = null;
		var_25_int += 1;
	}
	
}


// @pe
void func_10(int var_144_int, int var_145_int)
{
	@Blit("button_text", var_144_int, var_145_int);
}


void func_523(string var_75_string, object var_76_object)
{
	float var_83_float;
	var_76_object->GetGameTime(var_83_float);
	string var_95_string;
	func_518(var_95_string, 18);
	string var_82_string;
	@format(var_82_string, var_95_string, ((var_83_float / 24) + 1), (var_83_float - ((var_83_float / 24) * 24)), (((var_83_float - ((var_83_float / 24) * 24)) - (var_83_float - ((var_83_float / 24) * 24))) * 60));
	var_82_string = var_75_string;
}


// @pe
void func_268(int var_36_int, int var_37_int, bool var_38_bool)
{
	if(var_38_bool != 0)
		@StretchBlit("shot_black", var_36_int, var_37_int, 120, 90);
	@StretchBlit("shot_border", var_36_int, var_37_int, 120, 1);
	@StretchBlit("shot_border", var_36_int, ((var_37_int + 90) - 1), 120, 1);
	@StretchBlit("shot_border", var_36_int, var_37_int, 1, 90);
	@StretchBlit("shot_border", ((var_36_int + 120) - 1), var_37_int, 1, 90);
}


void func_396(int var_1_int, object var_9_object, int var_19_int, int var_20_int, int var_21_int)
{
	if(var_20_int < 129) {
		var_19_int = -1;
		return 8;
	}
	if(var_20_int > 233) {
		var_19_int = -1;
		return 8;
	}
	int var_26_int = var_21_int - var_1_int;
	int var_34_int;
	func_474(var_34_int);
	int var_27_int;
	var_34_int = var_27_int;
	int var_28_int = var_26_int / var_27_int;
	var_26_int -= (var_28_int * var_27_int);
	int var_29_int;
	var_9_object->size(var_29_int); //@t
	if(var_29_int <= var_28_int)
		return 8;
	bool var_37_bool = false;
	if(var_26_int >= 67) {
		if(var_26_int <= 91)
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		var_28_int = -1;
		return 8;
	}
	var_19_int = -1;
}


// @pe
void func_15(object var_44_object)
{
	@SendMessageToParent(0, var_44_object);
}


void func_435(int var_1_int, object var_9_object, int var_50_int, int var_51_int, int var_52_int)
{
	if(var_51_int < 248) {
		var_50_int = -1;
		return 8;
	}
	if(var_51_int > 268) {
		var_50_int = -1;
		return 8;
	}
	int var_57_int = var_52_int - var_1_int;
	int var_65_int;
	func_474(var_65_int);
	int var_58_int;
	var_65_int = var_58_int;
	int var_59_int = var_57_int / var_58_int;
	var_57_int -= (var_59_int * var_58_int);
	int var_60_int;
	var_9_object->size(var_60_int); //@t
	if(var_60_int <= var_59_int)
		return 8;
	bool var_68_bool = false;
	if(var_57_int >= 68) {
		if(var_57_int <= 91)
			var_68_bool = true;
	}
	if(var_68_bool != 0) {
		var_59_int = -1;
		return 8;
	}
	var_50_int = -1;
}


void func_20(object var_76_object)
{
	string var_78_string;
	var_76_object->GetFileName(var_78_string);
	@DeleteGame(var_78_string);
	@StopEventProcessing();
}


void func_474(int var_32_int)
{
	var_32_int = 121;
}


void func_476(object var_9_object, int var_29_int)
{
	int var_31_int;
	var_9_object->size(var_31_int); //@t
	int var_32_int;
	func_474(var_32_int);
	var_29_int = var_31_int * var_32_int;
}


