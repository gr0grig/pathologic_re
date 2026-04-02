maintask task_0
{
	void init(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, bool var_11_bool, bool var_12_bool)
	{
		@SetNeedUpdate(true);
		var_11_bool = false;
		var_12_bool = false;
		var_10_int = -1;
		func_312(var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool);
		func_547(var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool);
	}

	void OnSee(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, bool var_11_bool, bool var_12_bool, float var_13_float)
	{
		bool var_16_bool; int var_17_int; bool var_20_bool; int var_21_int;
		bool var_22_bool;
		func_20(var_21_int, var_22_bool);
		if(!var_22_bool) //@nz
			return 8;
		object var_18_object;
		@GetKeyboardState(var_18_object);
		if(!var_18_object) { //@nz
			@Trace("GetKeyboardState fail");
			return 8;
		}
		int var_19_int = 0;
	
		while(var_19_int < 512) {
			@IsValidVirtualKey(var_20_bool, var_19_int);
			if(var_20_bool != 0) {
				var_18_object->GetKeyState(var_21_int, var_19_int);
				if((var_21_int & 128) != 0) {
					if(var_12_bool != 0) {
						int var_32_int;
						var_19_int = var_32_int;
						func_73(var_16_bool, var_17_int, var_18_object, var_19_int, var_20_bool, var_21_int, var_32_int);
					}
					return 8;
				}
				goto Label_67;
			}
		Label_67:
			var_19_int += 1;
		}
	
		var_12_bool = true;
	}
	EMIT "Stack[-4] = 0";

	// @pe
	void OnStopSee(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, bool var_11_bool, bool var_12_bool, int var_13_int, int var_14_int)
	{
		bool var_15_bool;
		func_20(var_14_int, var_15_bool);
		if(!var_15_bool) { //@nz
			int var_17_int; int var_18_int;
			var_13_int = var_17_int;
			var_14_int = var_18_int;
			func_617(var_17_int, var_18_int);
		}
	}

	// @pe
	void OnUnload(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, bool var_11_bool, bool var_12_bool, int var_13_int, int var_14_int)
	{
		bool var_15_bool;
		func_20(var_14_int, var_15_bool);
		if(!var_15_bool) { //@nz
			int var_17_int; int var_18_int;
			var_13_int = var_17_int;
			var_14_int = var_18_int;
			func_651(var_17_int, var_18_int);
		}
	}

	// @pe
	void OnHear(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, bool var_11_bool, bool var_12_bool, int var_13_int, int var_14_int)
	{
		bool var_15_bool;
		func_20(var_14_int, var_15_bool);
		if(!var_15_bool) { //@nz
			int var_17_int; int var_18_int;
			var_13_int = var_17_int;
			var_14_int = var_18_int;
			func_634(var_17_int, var_18_int);
		}
	}

	// @pe
	void OnTimer(int iID, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, bool var_11_bool, bool var_12_bool, int var_13_int, int var_14_int)
	{
		bool var_15_bool;
		func_20(var_14_int, var_15_bool);
		if(!var_15_bool) { //@nz
			int var_17_int; int var_18_int;
			var_13_int = var_17_int;
			var_14_int = var_18_int;
			func_668(var_17_int, var_18_int);
		}
	}

	// @pe
	void OnPlayerHolsterWeapon(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, bool var_11_bool, bool var_12_bool, int var_13_int, int var_14_int, float var_15_float)
	{
		bool var_16_bool;
		func_20(var_15_float, var_16_bool);
		if(!var_16_bool) { //@nz
			int var_18_int; int var_19_int; float var_20_float;
			var_13_int = var_18_int;
			var_14_int = var_19_int;
			var_15_float = var_20_float;
			func_605(var_19_int, var_20_float);
		}
	}

	void OnUse(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, bool var_11_bool, bool var_12_bool)
	{
		int var_16_int; int var_20_int;
		int var_21_int;
		func_13(var_20_int, var_21_int);
		int var_17_int;
		var_21_int = var_17_int;
		int var_24_int;
		func_18(var_24_int);
		int var_18_int;
		var_24_int = var_18_int;
		int var_19_int = 0;
	
		while(var_19_int < var_17_int) {
			var_20_int = (var_19_int * var_18_int) + var_0_int;
			int var_27_int; int var_29_int;
			var_19_int = var_27_int;
			func_226(var_16_int, var_17_int, var_18_int, var_19_int, var_29_int, var_27_int, 0, var_29_int);
			var_19_int += 1;
		}
	
	}

	// @pe
	void event_200(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, bool var_11_bool, bool var_12_bool, int var_13_int, string var_14_string, object var_15_object)
	{
		string var_16_string;
		func_224(var_16_string);
		if(var_14_string == var_16_string) {
			var_18_int = -var_13_int;
			int var_19_int;
			func_701(var_19_int);
			var_0_int = (var_18_int * (var_19_int - var_2_int)) / 100;
		}
	}

}


void func_651(int var_17_int, int var_18_int)
{
	int var_22_int;
	var_17_int = var_22_int;
	int var_23_int;
	var_18_int = var_23_int;
	int var_21_int;
	func_685(var_21_int, var_22_int, var_23_int);
	int var_20_int;
	var_21_int = var_20_int;
	if(var_20_int != -1) {
		int var_37_int; int var_38_int; int var_39_int;
		var_20_int = var_37_int;
		var_17_int = var_38_int;
		var_18_int = var_39_int;
		func_220();
	}
}


void func_524(object var_5_object, object var_7_object, int var_96_int, int var_97_int)
{
	int var_102_int; int var_104_int; object var_105_object;
	var_5_object->size(var_102_int); //@t
	int var_103_int = 0;
	
	while(var_103_int < var_102_int) {
		var_5_object->get(var_104_int, var_103_int); //@t
		if(var_96_int == var_104_int) {
			var_7_object->get(var_105_object, var_103_int); //@t
			var_105_object->add(var_97_int);
		EMIT "Stack[-1] = 0";
		}
		var_103_int += 1;
	}
	
	@Trace("AddKeyToAction fail");
}


void func_13(object var_5_object, int var_125_int)
{
	int var_127_int;
	var_5_object->size(var_127_int); //@t
	var_127_int = var_125_int;
}


void func_18(int var_128_int)
{
	var_128_int = 17;
}


// @pe
void func_147(int var_10_int, int var_37_int)
{
	if(var_10_int == -1) {
		int var_42_int;
		func_22(var_42_int, var_38_int, var_39_int, var_42_int);
		goto Label_156;
	}
Label_156:
}


void func_20(bool var_11_bool, bool var_16_bool)
{
	var_16_bool = var_11_bool;
}


// @pe
void func_22(int var_10_int, bool var_11_bool, bool var_12_bool, int var_42_int)
{
	var_10_int = var_42_int;
	var_11_bool = true;
	var_12_bool = false;
	@CaptureKeyboard();
	@CaptureMouse();
}


void func_668(int var_17_int, int var_18_int)
{
	int var_22_int;
	var_17_int = var_22_int;
	int var_23_int;
	var_18_int = var_23_int;
	int var_21_int;
	func_685(var_21_int, var_22_int, var_23_int);
	int var_20_int;
	var_21_int = var_20_int;
	if(var_20_int != -1) {
		int var_37_int; int var_38_int; int var_39_int;
		var_20_int = var_37_int;
		var_17_int = var_38_int;
		var_18_int = var_39_int;
		func_222();
	}
}


void func_547(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int)
{
	@GetWindowSize(var_1_int, var_2_int);
	@ClientToScreen(0, 0);
	var_0_int = 0;
	@EnableClipping(true);
	@SetOwnerDraw(true);
	func_709(var_11_bool, var_12_bool);
	@ProcessEvents();
}


void func_301(object var_5_object, object var_6_object, object var_7_object, int var_24_int, int var_25_int)
{
	var_5_object->add(var_24_int); //@t
	var_6_object->add(var_25_int); //@t
	object var_27_object;
	@CreateIntVector(var_27_object);
	var_7_object->add(var_27_object); //@t
}
EMIT "Stack[-1] = 0";


void func_685(int var_0_int, int var_21_int, int var_23_int)
{
	int var_30_int;
	func_18(var_30_int);
	int var_28_int;
	var_30_int = var_28_int;
	int var_29_int = (var_23_int - var_0_int) / var_28_int;
	int var_31_int;
	func_13(var_29_int, var_31_int);
	if(var_29_int >= var_31_int)
		var_21_int = -1;
	var_29_int = var_21_int;
}


void func_312(object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object)
{
	bool var_19_bool; int var_20_int; string var_21_string;
	@CreateIntVector(var_8_object);
	@CreateStringVector(var_9_object);
	object var_18_object;
	@CreateKeyEnumerator(var_18_object);
	
	for(;;) {
		if(true != 0) {
			var_18_object->Next(var_19_bool, var_20_int);
			if(!var_19_bool) { //@nz
			} else {
				var_8_object->add(var_20_int); //@t
				@GetKeyName(var_21_string, var_20_int);
				var_9_object->add(var_21_string); //@t
			}
		}
		@CreateIntVector(var_5_object);
		@CreateIntVector(var_6_object);
		@CreateObjectVector(var_7_object);
		func_301(var_19_bool, var_20_int, var_21_string, 0, 33);
		func_301(var_19_bool, var_20_int, var_21_string, 1, 34);
		func_301(var_19_bool, var_20_int, var_21_string, 2, 35);
		func_301(var_19_bool, var_20_int, var_21_string, 3, 36);
		func_301(var_19_bool, var_20_int, var_21_string, 4, 37);
		func_301(var_19_bool, var_20_int, var_21_string, 5, 38);
		func_301(var_19_bool, var_20_int, var_21_string, 7, 40);
		func_301(var_19_bool, var_20_int, var_21_string, 8, 41);
		func_301(var_19_bool, var_20_int, var_21_string, 9, 42);
		func_301(var_19_bool, var_20_int, var_21_string, 10, 43);
		func_301(var_19_bool, var_20_int, var_21_string, 11, 44);
		func_301(var_19_bool, var_20_int, var_21_string, 20, 54);
		func_301(var_19_bool, var_20_int, var_21_string, 18, 55);
		func_301(var_19_bool, var_20_int, var_21_string, 12, 45);
		func_301(var_19_bool, var_20_int, var_21_string, 13, 46);
		func_301(var_19_bool, var_20_int, var_21_string, 14, 47);
		func_301(var_19_bool, var_20_int, var_21_string, 15, 48);
		func_301(var_19_bool, var_20_int, var_21_string, 16, 49);
		func_301(var_19_bool, var_20_int, var_21_string, 17, 50);
		func_301(var_19_bool, var_20_int, var_21_string, 21, 56);
		func_301(var_19_bool, var_20_int, var_21_string, 100, 52);
		func_301(var_19_bool, var_20_int, var_21_string, 101, 53);
		func_454(var_21_string);
		return 8;

	}
}
EMIT "Stack[-4] = 0";


void func_701(int var_124_int)
{
	int var_125_int;
	func_13(var_124_int, var_125_int);
	int var_128_int;
	func_18(var_128_int);
	var_124_int = var_125_int * var_128_int;
}


void func_709(int var_0_int, int var_2_int)
{
	int var_123_int;
	int var_124_int;
	func_701(var_124_int);
	if((var_124_int - var_2_int) < 0)
		var_123_int = 0;
	var_131_int = -var_0_int;
	if(var_131_int > var_123_int) {
		var_0_int = -var_123_int;
	} else if(var_0_int > 0) {
			var_0_int = 0;
	}
	if(var_123_int == 0) {
		string var_136_string;
		func_224(var_136_string);
		@SendMessage(16384, var_136_string);
	} else {
		var_137_int = -var_0_int;
		string var_141_string;
		func_224(var_141_string);
		@SendMessage(((var_137_int * 100) / var_123_int), var_141_string);

	}
	
}


void func_454(object var_8_object)
{
	int var_78_int; int var_79_int; int var_80_int; string var_81_string;
	func_509(var_80_int, var_81_string);
	int var_76_int;
	var_8_object->size(var_76_int); //@t
	int var_77_int = 0;
	
	for(;;) {
		if(!(var_77_int < var_76_int)) goto Label_508;
		var_8_object->get(var_78_int, var_77_int); //@t
		@GetBindType(var_79_int, var_78_int);
		if(!(var_79_int == 0)) goto Label_472;
		goto Label_505;
	EMIT "GOTO 0x1f9";

	Label_505:
		var_77_int += 1;
	}
	
Label_472:
	if(var_79_int == 1) {
		@GetBindAction(var_80_int, var_78_int);
		int var_96_int; int var_97_int;
		var_80_int = var_96_int;
		var_77_int = var_97_int;
		func_524(var_80_int, var_81_string, var_96_int, var_97_int);
	} else if(var_79_int == 2) {
		@GetBindCommand(var_81_string, var_78_int);
		if(var_81_string == "qsave") {
		int var_115_int;
		var_77_int = var_115_int;
		func_524(var_80_int, var_81_string, 100, var_115_int);
		goto Label_505;
	}
	}
	if(!(var_81_string == "qload")) goto Label_505;
	int var_119_int;
	var_77_int = var_119_int;
	func_524(var_80_int, var_81_string, 101, var_119_int);
	
Label_508:
}


void func_73(object var_5_object, object var_7_object, object var_8_object, int var_10_int, bool var_11_bool, bool var_12_bool, int var_32_int)
{
	bool var_42_bool; int var_43_int; object var_44_object; int var_45_int; bool var_46_bool; bool var_47_bool; int var_48_int; int var_49_int; int var_50_int;
	bool var_51_bool = false;
	if(var_32_int != -1) {
		if(var_32_int != 27)
			var_51_bool = true;
	}
	if(var_51_bool != 0) {
		@IsValidVirtualKey(var_42_bool, var_32_int);
		if(var_42_bool != 0) {
			var_5_object->get(var_43_int, var_10_int); //@t
			@Unbind(var_32_int);
			var_7_object->get(var_44_object, var_10_int); //@t
			var_44_object->size(var_45_int);
			if(var_32_int >= 256)
				var_46_bool = true;
			else
				var_46_bool = false;
					@Trace("wrong key code");
		}
		var_48_int = 0;

		for(;;) {
			if(var_48_int < var_45_int) {
				var_44_object->get(var_49_int, var_48_int);
				var_8_object->get(var_50_int, var_49_int); //@t
				if(var_46_bool != 0) {
					if(var_50_int >= 256) {
						@Unbind(var_50_int);
					} else {
				} else if(var_50_int < 256) {
				@Unbind(var_50_int);

				}
					var_48_int += 1;
				}
			}
			@Bind(var_32_int, var_43_int);
			func_312(var_46_bool, var_47_bool, var_48_int, var_49_int, var_50_int);
			var_44_object = null;
			goto Label_136;
	}
	Label_136:
		var_10_int = -1;
		var_11_bool = false;
		var_12_bool = false;
		@ReleaseKeyboard();
		@ReleaseMouse();
		@SendMessageToParent(1);

	}
	
}


// @pe
void func_218(void)
{
}


// @pe
void func_220(void)
{
}


void func_605(int var_0_int, float var_20_float)
{
	int var_23_int;
	func_18(var_23_int);
	int var_22_int = (var_20_float * var_23_int) / 2;
	var_0_int += var_22_int;
	int var_21_int;
	func_709(var_21_int, var_22_int);
}


// @pe
void func_222(void)
{
}


void func_224(string var_136_string)
{
	var_136_string = "scrollbar";
}


void func_226(int var_1_int, object var_6_object, object var_7_object, object var_9_object, int var_10_int, int var_27_int, int var_28_int, int var_29_int)
{
	string var_41_string; int var_42_int; string var_45_string; int var_49_int; string var_50_string; int var_51_int;
	if(var_27_int == var_10_int) {
		int var_54_int;
		func_18(var_54_int);
		@StretchBlit("whitepixel", var_28_int, var_29_int, var_1_int, var_54_int);
		string var_55_string;
		func_747(var_55_string, 108);
		var_55_string = var_41_string;
		@GetTextWidth(var_42_int, "default", var_41_string);
		@Print("default", (var_28_int + ((var_1_int - var_42_int) / 2)), var_29_int, var_41_string, 0.2509804, 0.2509804, 0.2509804);
	}
	int var_43_int;
	var_6_object->get(var_43_int, var_27_int); //@t
	string var_68_string; int var_69_int;
	var_43_int = var_69_int;
	func_747(var_68_string, var_69_int);
	string var_44_string;
	var_68_string = var_44_string;
	object var_46_object;
	var_7_object->get(var_46_object, var_27_int); //@t
	int var_47_int;
	var_46_object->size(var_47_int);
	int var_48_int = 0;
	
	while(var_48_int < var_47_int) {
		if(var_48_int != 0)
			var_45_string += " , ";
		var_46_object->get(var_49_int, var_48_int);
		var_9_object->get(var_50_string, var_49_int); //@t
		var_45_string += var_50_string;
		var_48_int += 1;
	}
	
	@Print("default", var_28_int, var_29_int, var_44_string, 0.5568628, 0.5568628, 0.5568628);
	if(var_47_int != 0) {
		@GetTextWidth(var_51_int, "default", var_45_string);
		@Print("default", ((var_28_int + var_1_int) - var_51_int), var_29_int, var_45_string, 0.5568628, 0.5568628, 0.5568628);
	}
}
EMIT "Stack[-6] = 0";


void func_617(int var_17_int, int var_18_int)
{
	int var_22_int;
	var_17_int = var_22_int;
	int var_23_int;
	var_18_int = var_23_int;
	int var_21_int;
	func_685(var_21_int, var_22_int, var_23_int);
	int var_20_int;
	var_21_int = var_20_int;
	if(var_20_int != -1) {
		int var_37_int; int var_38_int; int var_39_int;
		var_20_int = var_37_int;
		var_17_int = var_38_int;
		var_18_int = var_39_int;
		func_147(var_38_int, var_39_int);
	}
}


void func_747(string var_55_string, int var_56_int)
{
	string var_58_string;
	@GetStringByID(var_58_string, var_56_int);
	var_58_string = var_55_string;
}


void func_634(int var_17_int, int var_18_int)
{
	int var_22_int;
	var_17_int = var_22_int;
	int var_23_int;
	var_18_int = var_23_int;
	int var_21_int;
	func_685(var_21_int, var_22_int, var_23_int);
	int var_20_int;
	var_21_int = var_20_int;
	if(var_20_int != -1) {
		int var_37_int; int var_38_int; int var_39_int;
		var_20_int = var_37_int;
		var_17_int = var_38_int;
		var_18_int = var_39_int;
		func_218();
	}
}


void func_509(object var_5_object, object var_7_object)
{
	int var_85_int; object var_87_object;
	var_5_object->size(var_85_int); //@t
	int var_86_int = 0;
	
	while(var_86_int < var_85_int) {
		var_7_object->get(var_87_object, var_86_int); //@t
		var_87_object->clear();
		var_87_object = null;
		var_86_int += 1;
	}
	
}


