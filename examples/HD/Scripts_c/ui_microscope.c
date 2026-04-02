maintask task_0
{
	void init(int var_0_int, object var_1_object, object var_2_object, object var_3_object)
	{
		@FindActor(var_3_object, "player");
		if(!var_3_object) //@nz
			@DestroyWindow();
		@CreateWindow("inventory_base.xml", false, var_1_object);
		func_110(var_3_object, 4);
	}

	// @pe
	void event_100(int var_0_int, object var_1_object, object var_2_object, object var_3_object, int var_4_int)
	{
		@DestroyWindow();
	}

	// @pe
	void event_102(int var_0_int, object var_1_object, object var_2_object, object var_3_object, int var_4_int)
	{
		int var_5_int;
		var_4_int = var_5_int;
		func_329(var_5_int);
	}

	// @pe
	void event_101(int var_0_int, object var_1_object, object var_2_object, object var_3_object, int var_4_int)
	{
		if(var_4_int == 266) {
			if(var_0_int == 0) {
				func_503(var_4_int, 1);
			} else {
					if(var_0_int == 1)
						func_503(var_4_int, 2);

				for(;;) {
					} else {
				if(var_0_int == 2) {
					func_503(var_4_int, 3);
				} else if(var_0_int == 3) {
					func_503(var_4_int, 4);
				} else if(var_0_int == 4) {
					func_503(var_4_int, 0);
				}
		}
			if(!(var_4_int == 265)) goto Label_288;
			if(var_0_int == 0) {
				func_503(var_4_int, 4);
			} else if(var_0_int == 1) {
				func_503(var_4_int, 0);
			} else if(var_0_int == 2) {
				func_503(var_4_int, 1);
			} else if(var_0_int == 3) {
				func_503(var_4_int, 2);
			} else if(var_0_int == 4) {
				func_503(var_4_int, 3);
				}
			}
		Label_288:
			int var_44_int;
			var_4_int = var_44_int;
			func_293(var_44_int);
			return 0;

		}
	
	}

	// @pe
	void OnSee(int var_0_int, object var_1_object, object var_2_object, object var_3_object, float var_4_float)
	{
		func_597(var_0_int);
		func_528();
		func_22();
	}

	void event_200(int var_0_int, object var_1_object, object var_2_object, object var_3_object, int var_4_int, string var_5_string, object var_6_object)
	{
		bool var_13_bool; int var_14_int; int var_15_int; object var_16_object; int var_17_int; object var_18_object;
		if(var_4_int < 0) {
			bool var_21_bool; int var_22_int; string var_23_string; object var_24_object;
			var_4_int = var_22_int;
			var_5_string = var_23_string;
			var_6_object = var_24_object;
			func_19(var_24_object);
			var_21_bool = false;
			return 12;
		}
		if(var_5_string == "button_weapon") {
			func_503(var_18_object, 0);
			var_13_bool = true;
		} else if(var_5_string == "button_clothes") {
				func_503(var_18_object, 1);
				var_13_bool = true;
		}
	Label_491:
		for(;;) {
			if(!var_13_bool) { //@nz
				bool var_63_bool; int var_64_int; string var_65_string; object var_66_object;
				var_4_int = var_64_int;
				var_5_string = var_65_string;
				var_6_object = var_66_object;
				func_19(var_66_object);
				var_63_bool = var_13_bool;
			}
			if(var_13_bool != 0) {
			}
			return 12;

		}
	
		if(var_5_string == "button_medcine") {
			func_503(var_18_object, 2);
			var_13_bool = true;
		} else if(var_5_string == "button_food") {
			func_503(var_18_object, 3);
			var_13_bool = true;
		} else if(var_5_string == "button_other") {
			func_503(var_18_object, 4);
		} else if(var_5_string == "button_detector") {
		} else if(var_5_string == "button_anticeptic") {
		}
		if(var_4_int != 0) {
			@GetVariable("noinv_drop", var_14_int);
			if(var_14_int != 0)
				return 12;
		}
	
		for(;;) {
			if(!(0 < 12)) goto Label_491;
			string var_90_string; int var_91_int;
			var_15_int = var_91_int;
			func_684(var_90_string, var_91_int);
			if(var_5_string == var_90_string) {
				object var_103_object;
				func_17(var_18_object, var_103_object);
				var_103_object = var_16_object;
				var_16_object->GetItemCount(var_17_int, var_0_int);
				if(var_17_int > var_15_int) {
					var_16_object->GetItem(var_18_object, var_15_int, var_0_int);
					bool var_105_bool; object var_106_object;
					var_18_object = var_106_object;
					func_23(var_105_bool, var_106_object);
					if(!var_105_bool) { //@nz
						bool var_113_bool; int var_114_int; bool var_115_bool;
						var_15_int = var_114_int;
						var_115_bool = var_4_int == 0;
						func_55(var_113_bool, var_114_int, var_115_bool);
						var_113_bool = true;
					}
					var_18_object = null;
				}
				goto Label_491;
			EMIT "Stack[-3] = 0";
			}
			var_15_int += 1;
		}
	}

}


void func_517(int var_124_int)
{
	int var_128_int;
	object var_129_object;
	func_17(var_128_int, var_129_object);
	object var_127_object;
	var_129_object = var_127_object;
	var_127_object->GetProperty("money", var_128_int);
	var_128_int = var_124_int;
}
EMIT "Stack[-2] = 0";


void func_528(void)
{
	int var_124_int;
	func_517(var_124_int);
	@SendMessage(var_124_int, "money");
}


void func_17(object var_3_object, object var_63_object)
{
	var_63_object = var_3_object;
}


// @pe
void func_19(bool var_21_bool)
{
	var_21_bool = false;
}


void func_22(void)
{
}


// @pe
void func_535(int var_17_int)
{
	if(var_17_int != 0)
		@SendMessage(0, "button_weapon");
	else
		@SendMessage(1, "button_weapon");
	if(var_17_int != 1)
		@SendMessage(0, "button_clothes");
	else
		@SendMessage(1, "button_clothes");

	if(var_17_int != 2)
		@SendMessage(0, "button_medcine");
	else
		@SendMessage(1, "button_medcine");

	if(var_17_int != 3)
		@SendMessage(0, "button_food");
	else
		@SendMessage(1, "button_food");

	if(var_17_int != 4)
		@SendMessage(0, "button_other");
	else
		@SendMessage(1, "button_other");

	
}


void func_23(bool var_84_bool, object var_85_object)
{
	int var_88_int;
	var_85_object->GetItemID(var_88_int);
	bool var_89_bool;
	@HasInvItemProperty(var_89_bool, var_88_int, "Microscope");
	var_84_bool = !var_89_bool;
}


void func_31(object var_2_object, bool var_67_bool, int var_68_int, int var_69_int)
{
	object var_71_object;
	object var_72_object;
	func_17(var_71_object, var_72_object);
	object var_73_object;
	func_17(var_72_object, var_73_object);
	object var_74_object;
	func_17(var_72_object, var_74_object);
	object var_75_object;
	func_17(var_72_object, var_75_object);
	var_72_object->GetItem(var_71_object, var_68_int, var_69_int);
	bool var_76_bool; object var_78_object;
	var_71_object = var_78_object;
	func_715(var_76_bool, var_2_object, var_78_object);
	var_76_bool = var_67_bool;
}
EMIT "Stack[-1] = 0";


void func_293(int var_44_int)
{
	int var_47_int; int var_48_int;
	if(var_44_int == 269) {

		for(;;) {
			if(!(0 < 12)) goto Label_311;
			string var_54_string; int var_55_int;
			var_47_int = var_55_int;
			func_684(var_54_string, var_55_int);
			@SendMessage(-2, var_54_string);
			var_47_int += 1;
		}
	}
Label_311:
	if(var_44_int == 270) {

		for(;;) {
			if(!(0 < 12)) goto Label_328;
			string var_72_string; int var_73_int;
			var_48_int = var_73_int;
			func_684(var_72_string, var_73_int);
			@SendMessage(-3, var_72_string);
			var_48_int += 1;
		}
	}
Label_328:
}


// @pe
void func_684(string var_94_string, int var_95_int)
{
	if((var_95_int + 1) < 10)
		var_94_string = "slot0" + (var_95_int + 1);
	var_94_string = "slot" + (var_95_int + 1);
}


void func_54(void)
{
}


// @pe
void func_55(bool var_113_bool, int var_114_int, bool var_115_bool)
{
	if(var_115_bool != 0) {
		int var_118_int;
		func_66(var_118_int, var_115_bool, var_118_int);
		var_113_bool = true;
		return 0;
	}
	var_113_bool = false;
}


void func_184(void)
{
	string var_153_string;
	func_684(var_153_string, 0);
	@SendMessage(-6, var_153_string);
}


void func_700(int var_139_int, object var_140_object)
{
	int var_142_int;
	var_140_object->GetItemID(var_142_int);
	var_142_int = var_139_int;
}


void func_705(string var_146_string, object var_147_object)
{
	object var_153_object;
	var_147_object = var_153_object;
	int var_152_int;
	func_700(var_152_int, var_153_object);
	int var_150_int;
	var_152_int = var_150_int;
	string var_151_string;
	@GetInvItemName(var_151_string, var_150_int);
	var_151_string = var_146_string;
}


void func_66(int var_0_int, object var_2_object, int var_118_int)
{
	int var_126_int;
	object var_127_object;
	func_17(var_126_int, var_127_object);
	object var_123_object;
	var_127_object = var_123_object;
	object var_124_object;
	var_123_object->GetItem(var_124_object, var_118_int, var_0_int);
	bool var_128_bool; object var_130_object;
	var_124_object = var_130_object;
	func_715(var_128_bool, var_2_object, var_130_object);
	bool var_125_bool;
	var_128_bool = var_125_bool;
	if(var_125_bool != 0) {
		var_2_object = null;
		@SendMessage(0, "video");
	} else {
		int var_139_int; object var_140_object;
		var_124_object = var_140_object;
		func_700(var_139_int, var_140_object);
		@GetInvItemProperty(var_126_int, var_139_int, "Microscope");
		@SendMessage(var_126_int, "video");
		string var_146_string; object var_147_object;
		func_705(var_146_string, var_147_object);
		@SetVariable(("microscope_" + var_146_string), 1);
		var_2_object = var_147_object;
	}
	
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


void func_329(int var_5_int)
{
	int var_8_int; int var_9_int;
	if(var_5_int == 273) {

		for(;;) {
			if(!(0 < 12)) goto Label_347;
			string var_15_string; int var_16_int;
			var_8_int = var_16_int;
			func_684(var_15_string, var_16_int);
			@SendMessage(-2, var_15_string);
			var_8_int += 1;
		}
	}
Label_347:
	if(var_5_int == 271) {

		for(;;) {
			if(!(0 < 12)) goto Label_364;
			string var_33_string; int var_34_int;
			var_9_int = var_34_int;
			func_684(var_33_string, var_34_int);
			@SendMessage(-3, var_33_string);
			var_9_int += 1;
		}
	}
Label_364:
}


void func_715(bool var_76_bool, object var_77_object, object var_78_object)
{
	bool var_81_bool = true;
	var_82_bool = !var_77_object; //@nz
	if(var_82_bool != 1) {
		var_83_bool = !var_78_object; //@nz
		if(var_83_bool != 1)
			var_81_bool = false;
	}
	if(var_81_bool != 0)
		var_76_bool = false;
	bool var_80_bool;
	var_77_object->Compare(var_80_bool, var_78_object);
	var_80_bool = var_76_bool;
}


void func_597(int var_48_int)
{
	object var_59_object; int var_60_int; bool var_61_bool; bool var_62_bool;
	object var_63_object;
	func_17(var_62_bool, var_63_object);
	object var_56_object;
	var_63_object = var_56_object;
	int var_57_int;
	var_56_object->GetItemCount(var_57_int, var_48_int);
	int var_58_int = 0;
	
	for(;;) {
		if(var_58_int < 12) {
			if(var_58_int < var_57_int) {
				var_56_object->GetItem(var_59_object, var_58_int, var_48_int);
				var_56_object->GetItemAmount(var_60_int, var_58_int, var_48_int);
				bool var_67_bool; int var_68_int; int var_69_int;
				var_58_int = var_68_int;
				var_48_int = var_69_int;
				func_31(var_62_bool, var_67_bool, var_68_int, var_69_int);
				var_67_bool = var_61_bool;
				bool var_84_bool; object var_85_object;
				var_59_object = var_85_object;
				func_23(var_84_bool, var_85_object);
				var_84_bool = var_62_bool;
				if(var_61_bool != 0) {
					if(var_62_bool != 0) {
						string var_94_string; int var_95_int;
						var_58_int = var_95_int;
						func_684(var_94_string, var_95_int);
						@SendMessage(0, var_94_string, var_59_object);
					} else {
					string var_112_string; int var_113_int;
					var_58_int = var_113_int;
					func_684(var_112_string, var_113_int);
					@SendMessage(16384, var_112_string, var_59_object);
				}
				if(var_62_bool != 0) {
					string var_116_string; int var_117_int;
					var_58_int = var_117_int;
					func_684(var_116_string, var_117_int);
					@SendMessage(131072, var_116_string, var_59_object);
					goto Label_662;
				}
				string var_119_string; int var_120_int;
				var_58_int = var_120_int;
				func_684(var_119_string, var_120_int);
				@SendMessage(0, var_119_string, var_59_object);
			}
			string var_122_string; int var_123_int;
			var_58_int = var_123_int;
			func_684(var_122_string, var_123_int);
			@SendMessage(32768, var_122_string);
		}
		}
		goto Label_662;

	Label_662:
		string var_108_string; int var_109_int;
		var_58_int = var_109_int;
		func_684(var_108_string, var_109_int);
		@SendMessage((var_60_int | 65536), var_108_string);
		var_59_object = null;
		goto Label_679;

	Label_679:
		var_58_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


void func_110(int var_0_int, int var_8_int)
{
	int var_13_int;
	var_8_int = var_13_int;
	object var_12_object;
	func_503(var_12_object, var_13_int);
	func_597(-1);
	func_528();
	int var_11_int = 0;
	
	while(var_11_int < 12) {
		@CreateStringVector(var_12_object);
		string var_134_string;
		func_684(var_134_string, (((var_11_int + 12) - 1) % 12));
		var_12_object->add(var_134_string);
		string var_141_string;
		func_684(var_141_string, (((var_11_int + 12) + 1) % 12));
		var_12_object->add(var_141_string);
		string var_149_string; int var_150_int;
		var_11_int = var_150_int;
		func_684(var_149_string, var_150_int);
		@SendMessage(-1, var_149_string, var_12_object);
		var_12_object = null;
		var_11_int += 1;
	}
	
	func_184();
	@SetCursor("default");
	@ShowCursor();
	@CaptureKeyboard();
	@SetOwnerDraw(false);
	@SetNeedUpdate(true);
	func_54();
	@ProcessEvents();
}


// @pe
void func_503(int var_0_int, int var_13_int)
{
	if(var_13_int == -1)
		return 0;
	if(var_0_int == var_13_int)
		return 0;
	func_535(var_13_int);
}


