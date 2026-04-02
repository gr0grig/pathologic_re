maintask task_0
{
	void init(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, bool var_11_bool, bool var_12_bool)
	{
		@SetNeedUpdate(true);
		var_11_bool = false;
		var_12_bool = false;
		var_10_int = -1;
		func_293(var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool);
		func_523(var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool);
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
	
		while(var_19_int < 256) {
			@IsValidVirtualKey(var_20_bool, var_19_int);
			if(var_20_bool != 0) {
				var_18_object->GetKeyState(var_21_int, var_19_int);
				if((var_21_int & 128) != 0) {
					if(var_12_bool != 0) {
						int var_32_int;
						var_19_int = var_32_int;
						func_72(var_16_bool, var_17_int, var_18_object, var_19_int, var_20_bool, var_21_int, var_32_int);
					}
					return 8;
				}
			}
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
			func_593(var_17_int, var_18_int);
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
			func_627(var_17_int, var_18_int);
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
			func_610(var_17_int, var_18_int);
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
			func_644(var_17_int, var_18_int);
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
			func_581(var_19_int, var_20_float);
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
			func_207(var_16_int, var_17_int, var_18_int, var_19_int, var_29_int, var_27_int, 0, var_29_int);
			var_19_int += 1;
		}
	
	}

	// @pe
	void event_200(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, bool var_11_bool, bool var_12_bool, int var_13_int, string var_14_string, object var_15_object)
	{
		string var_16_string;
		func_205(var_16_string);
		if(var_14_string == var_16_string) {
			var_18_int = -var_13_int;
			int var_19_int;
			func_677(var_19_int);
			var_0_int = (var_18_int * (var_19_int - var_2_int)) / 100;
		}
	}

}


// @pe
void func_128(int var_10_int, int var_37_int)
{
	if(var_10_int == -1) {
		int var_42_int;
		func_22(var_42_int, var_38_int, var_39_int, var_42_int);
		goto Label_137;
	}
Label_137:
}


void func_644(int var_17_int, int var_18_int)
{
	int var_22_int;
	var_17_int = var_22_int;
	int var_23_int;
	var_18_int = var_23_int;
	int var_21_int;
	func_661(var_21_int, var_22_int, var_23_int);
	int var_20_int;
	var_21_int = var_20_int;
	if(var_20_int != -1) {
		int var_37_int; int var_38_int; int var_39_int;
		var_20_int = var_37_int;
		var_17_int = var_38_int;
		var_18_int = var_39_int;
		func_203();
	}
}


void func_523(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int)
{
	@GetWindowSize(var_1_int, var_2_int);
	@ClientToScreen(0, 0);
	var_0_int = 0;
	@EnableClipping(true);
	@SetOwnerDraw(true);
	func_685(var_11_bool, var_12_bool);
	@ProcessEvents();
}


void func_13(object var_5_object, int var_123_int)
{
	int var_125_int;
	var_5_object->size(var_125_int); //@t
	var_125_int = var_123_int;
}


void func_18(int var_126_int)
{
	var_126_int = 17;
}


void func_20(bool var_11_bool, bool var_16_bool)
{
	var_16_bool = var_11_bool;
}


void func_661(int var_0_int, int var_21_int, int var_23_int)
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


// @pe
void func_22(int var_10_int, bool var_11_bool, bool var_12_bool, int var_42_int)
{
	var_10_int = var_42_int;
	var_11_bool = true;
	var_12_bool = false;
	@CaptureKeyboard();
	@CaptureMouse();
}


void func_282(object var_5_object, object var_6_object, object var_7_object, int var_24_int, int var_25_int)
{
	var_5_object->add(var_24_int); //@t
	var_6_object->add(var_25_int); //@t
	object var_27_object;
	@CreateIntVector(var_27_object);
	var_7_object->add(var_27_object); //@t
}
EMIT "Stack[-1] = 0";


void func_293(object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object)
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
		func_282(var_19_bool, var_20_int, var_21_string, 0, 33);
		func_282(var_19_bool, var_20_int, var_21_string, 1, 34);
		func_282(var_19_bool, var_20_int, var_21_string, 2, 35);
		func_282(var_19_bool, var_20_int, var_21_string, 3, 36);
		func_282(var_19_bool, var_20_int, var_21_string, 4, 37);
		func_282(var_19_bool, var_20_int, var_21_string, 5, 38);
		func_282(var_19_bool, var_20_int, var_21_string, 7, 40);
		func_282(var_19_bool, var_20_int, var_21_string, 8, 41);
		func_282(var_19_bool, var_20_int, var_21_string, 9, 42);
		func_282(var_19_bool, var_20_int, var_21_string, 10, 43);
		func_282(var_19_bool, var_20_int, var_21_string, 11, 44);
		func_282(var_19_bool, var_20_int, var_21_string, 20, 54);
		func_282(var_19_bool, var_20_int, var_21_string, 18, 55);
		func_282(var_19_bool, var_20_int, var_21_string, 12, 45);
		func_282(var_19_bool, var_20_int, var_21_string, 13, 46);
		func_282(var_19_bool, var_20_int, var_21_string, 14, 47);
		func_282(var_19_bool, var_20_int, var_21_string, 15, 48);
		func_282(var_19_bool, var_20_int, var_21_string, 16, 49);
		func_282(var_19_bool, var_20_int, var_21_string, 17, 50);
		func_282(var_19_bool, var_20_int, var_21_string, 100, 52);
		func_282(var_19_bool, var_20_int, var_21_string, 101, 53);
		func_430(var_21_string);
		return 8;

	}
}
EMIT "Stack[-4] = 0";


void func_677(int var_122_int)
{
	int var_123_int;
	func_13(var_122_int, var_123_int);
	int var_126_int;
	func_18(var_126_int);
	var_122_int = var_123_int * var_126_int;
}


void func_685(int var_0_int, int var_2_int)
{
	int var_121_int;
	int var_122_int;
	func_677(var_122_int);
	if((var_122_int - var_2_int) < 0)
		var_121_int = 0;
	var_129_int = -var_0_int;
	if(var_129_int > var_121_int) {
		var_0_int = -var_121_int;
	} else if(var_0_int > 0) {
			var_0_int = 0;
	}
	if(var_121_int == 0) {
		string var_134_string;
		func_205(var_134_string);
		@SendMessage(16384, var_134_string);
	} else {
		var_135_int = -var_0_int;
		string var_139_string;
		func_205(var_139_string);
		@SendMessage(((var_135_int * 100) / var_121_int), var_139_string);

	}
	
}


void func_430(object var_8_object)
{
	int var_76_int; int var_77_int; int var_78_int; string var_79_string;
	func_485(var_78_int, var_79_string);
	int var_74_int;
	var_8_object->size(var_74_int); //@t
	int var_75_int = 0;
	
	for(;;) {
		if(!(var_75_int < var_74_int)) goto Label_484;
		var_8_object->get(var_76_int, var_75_int); //@t
		@GetBindType(var_77_int, var_76_int);
		if(!(var_77_int == 0)) goto Label_448;
		goto Label_481;
	EMIT "GOTO 0x1e1";

	Label_481:
		var_75_int += 1;
	}
	
Label_448:
	if(var_77_int == 1) {
		@GetBindAction(var_78_int, var_76_int);
		int var_94_int; int var_95_int;
		var_78_int = var_94_int;
		var_75_int = var_95_int;
		func_500(var_78_int, var_79_string, var_94_int, var_95_int);
	} else if(var_77_int == 2) {
		@GetBindCommand(var_79_string, var_76_int);
		if(var_79_string == "qsave") {
		int var_113_int;
		var_75_int = var_113_int;
		func_500(var_78_int, var_79_string, 100, var_113_int);
		goto Label_481;
	}
	}
	if(!(var_79_string == "qload")) goto Label_481;
	int var_117_int;
	var_75_int = var_117_int;
	func_500(var_78_int, var_79_string, 101, var_117_int);
	
Label_484:
}


void func_581(int var_0_int, float var_20_float)
{
	int var_23_int;
	func_18(var_23_int);
	int var_22_int = (var_20_float * var_23_int) / 2;
	var_0_int += var_22_int;
	int var_21_int;
	func_685(var_21_int, var_22_int);
}


// @pe
void func_199(void)
{
}


void func_72(object var_5_object, object var_7_object, object var_8_object, int var_10_int, bool var_11_bool, bool var_12_bool, int var_32_int)
{
	bool var_40_bool; int var_41_int; object var_42_object; int var_43_int; int var_44_int; int var_45_int; int var_46_int;
	bool var_47_bool = false;
	if(var_32_int != -1) {
		if(var_32_int != 27)
			var_47_bool = true;
	}
	if(var_47_bool != 0) {
		@IsValidVirtualKey(var_40_bool, var_32_int);
		if(var_40_bool != 0) {
			var_5_object->get(var_41_int, var_10_int); //@t
			@Unbind(var_32_int);
			var_7_object->get(var_42_object, var_10_int); //@t
			var_42_object->size(var_43_int);
			var_44_int = 0;

			while(var_44_int < var_43_int) {
				var_42_object->get(var_45_int, var_44_int);
				var_8_object->get(var_46_int, var_45_int); //@t
				@Unbind(var_46_int);
				var_44_int += 1;
			}

			@Bind(var_32_int, var_41_int);
			func_293(var_42_object, var_43_int, var_44_int, var_45_int, var_46_int);
			var_42_object = null;
		} else {
			@Trace("wrong key code");
		}
	}
	var_10_int = -1;
	var_11_bool = false;
	var_12_bool = false;
	@ReleaseKeyboard();
	@ReleaseMouse();
	@SendMessageToParent(1);
	
}


// @pe
void func_201(void)
{
}


// @pe
void func_203(void)
{
}


void func_205(string var_134_string)
{
	var_134_string = "scrollbar";
}


void func_207(int var_1_int, object var_6_object, object var_7_object, object var_9_object, int var_10_int, int var_27_int, int var_28_int, int var_29_int)
{
	string var_41_string; int var_42_int; string var_45_string; int var_49_int; string var_50_string; int var_51_int;
	if(var_27_int == var_10_int) {
		int var_54_int;
		func_18(var_54_int);
		@StretchBlit("whitepixel", var_28_int, var_29_int, var_1_int, var_54_int);
		string var_55_string;
		func_723(var_55_string, 108);
		var_55_string = var_41_string;
		@GetTextWidth(var_42_int, "default", var_41_string);
		@Print("default", (var_28_int + ((var_1_int - var_42_int) / 2)), var_29_int, var_41_string, 0.2509804, 0.2509804, 0.2509804);
	}
	int var_43_int;
	var_6_object->get(var_43_int, var_27_int); //@t
	string var_68_string; int var_69_int;
	var_43_int = var_69_int;
	func_723(var_68_string, var_69_int);
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


void func_593(int var_17_int, int var_18_int)
{
	int var_22_int;
	var_17_int = var_22_int;
	int var_23_int;
	var_18_int = var_23_int;
	int var_21_int;
	func_661(var_21_int, var_22_int, var_23_int);
	int var_20_int;
	var_21_int = var_20_int;
	if(var_20_int != -1) {
		int var_37_int; int var_38_int; int var_39_int;
		var_20_int = var_37_int;
		var_17_int = var_38_int;
		var_18_int = var_39_int;
		func_128(var_38_int, var_39_int);
	}
}


void func_723(string var_55_string, int var_56_int)
{
	string var_58_string;
	@GetStringByID(var_58_string, var_56_int);
	var_58_string = var_55_string;
}


void func_610(int var_17_int, int var_18_int)
{
	int var_22_int;
	var_17_int = var_22_int;
	int var_23_int;
	var_18_int = var_23_int;
	int var_21_int;
	func_661(var_21_int, var_22_int, var_23_int);
	int var_20_int;
	var_21_int = var_20_int;
	if(var_20_int != -1) {
		int var_37_int; int var_38_int; int var_39_int;
		var_20_int = var_37_int;
		var_17_int = var_38_int;
		var_18_int = var_39_int;
		func_199();
	}
}


void func_485(object var_5_object, object var_7_object)
{
	int var_83_int; object var_85_object;
	var_5_object->size(var_83_int); //@t
	int var_84_int = 0;
	
	while(var_84_int < var_83_int) {
		var_7_object->get(var_85_object, var_84_int); //@t
		var_85_object->clear();
		var_85_object = null;
		var_84_int += 1;
	}
	
}


void func_627(int var_17_int, int var_18_int)
{
	int var_22_int;
	var_17_int = var_22_int;
	int var_23_int;
	var_18_int = var_23_int;
	int var_21_int;
	func_661(var_21_int, var_22_int, var_23_int);
	int var_20_int;
	var_21_int = var_20_int;
	if(var_20_int != -1) {
		int var_37_int; int var_38_int; int var_39_int;
		var_20_int = var_37_int;
		var_17_int = var_38_int;
		var_18_int = var_39_int;
		func_201();
	}
}


void func_500(object var_5_object, object var_7_object, int var_94_int, int var_95_int)
{
	int var_100_int; int var_102_int; object var_103_object;
	var_5_object->size(var_100_int); //@t
	int var_101_int = 0;
	
	while(var_101_int < var_100_int) {
		var_5_object->get(var_102_int, var_101_int); //@t
		if(var_94_int == var_102_int) {
			var_7_object->get(var_103_object, var_101_int); //@t
			var_103_object->add(var_95_int);
		EMIT "Stack[-1] = 0";
		}
		var_101_int += 1;
	}
	
	@Trace("AddKeyToAction fail");
}


