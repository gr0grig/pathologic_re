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
	void OnSee(int var_0_int, object var_1_object, object var_2_object, object var_3_object, float var_4_float)
	{
		func_367(var_0_int);
		func_298();
		func_22();
	}

	void event_200(int var_0_int, object var_1_object, object var_2_object, object var_3_object, int var_4_int, string var_5_string, object var_6_object)
	{
		bool var_13_bool; int var_14_int; int var_15_int; object var_16_object; int var_17_int; object var_18_object;
		var_13_bool = false;
		if(var_5_string == "button_weapon") {
			func_273(var_18_object, 0);
			var_13_bool = true;
		} else if(var_5_string == "button_clothes") {
				func_273(var_18_object, 1);
				var_13_bool = true;
		}
	Label_261:
		for(;;) {
			if(!var_13_bool) { //@nz
				bool var_57_bool; int var_58_int; string var_59_string; object var_60_object;
				var_4_int = var_58_int;
				var_5_string = var_59_string;
				var_6_object = var_60_object;
				func_19(var_60_object);
				var_57_bool = var_13_bool;
			}
			if(var_13_bool != 0) {
			}
			return 12;

		}
	
		if(var_5_string == "button_medcine") {
			func_273(var_18_object, 2);
			var_13_bool = true;
		} else if(var_5_string == "button_food") {
			func_273(var_18_object, 3);
			var_13_bool = true;
		} else if(var_5_string == "button_other") {
			func_273(var_18_object, 4);
		} else if(var_5_string == "button_detector") {
		} else if(var_5_string == "button_anticeptic") {
		}
		if(var_4_int != 0) {
			@GetVariable("noinv_drop", var_14_int);
			if(var_14_int != 0)
				return 12;
		}
	
		for(;;) {
			if(!(0 < 12)) goto Label_261;
			string var_84_string; int var_85_int;
			var_15_int = var_85_int;
			func_454(var_84_string, var_85_int);
			if(var_5_string == var_84_string) {
				object var_97_object;
				func_17(var_18_object, var_97_object);
				var_97_object = var_16_object;
				var_16_object->GetItemCount(var_17_int, var_0_int);
				if(var_17_int > var_15_int) {
					var_16_object->GetItem(var_18_object, var_15_int, var_0_int);
					bool var_99_bool; object var_100_object;
					var_18_object = var_100_object;
					func_23(var_99_bool, var_100_object);
					if(!var_99_bool) { //@nz
						bool var_107_bool; int var_108_int; bool var_109_bool;
						var_15_int = var_108_int;
						var_109_bool = var_4_int == 0;
						func_55(var_107_bool, var_108_int, var_109_bool);
						var_107_bool = true;
					}
					var_18_object = null;
				}
				goto Label_261;
			EMIT "Stack[-3] = 0";
			}
			var_15_int += 1;
		}
	}

}


void func_66(int var_0_int, object var_2_object, int var_112_int)
{
	int var_120_int;
	object var_121_object;
	func_17(var_120_int, var_121_object);
	object var_117_object;
	var_121_object = var_117_object;
	object var_118_object;
	var_117_object->GetItem(var_118_object, var_112_int, var_0_int);
	bool var_122_bool; object var_124_object;
	var_118_object = var_124_object;
	func_485(var_122_bool, var_2_object, var_124_object);
	bool var_119_bool;
	var_122_bool = var_119_bool;
	if(var_119_bool != 0) {
		var_2_object = null;
		@SendMessage(0, "video");
	} else {
		int var_133_int; object var_134_object;
		var_118_object = var_134_object;
		func_470(var_133_int, var_134_object);
		@GetInvItemProperty(var_120_int, var_133_int, "Microscope");
		@SendMessage(var_120_int, "video");
		string var_140_string; object var_141_object;
		func_475(var_140_string, var_141_object);
		@SetVariable(("microscope_" + var_140_string), 1);
		var_2_object = var_141_object;
	}
	
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


void func_485(bool var_72_bool, object var_73_object, object var_74_object)
{
	bool var_77_bool = true;
	var_78_bool = !var_73_object; //@nz
	if(var_78_bool != 1) {
		var_79_bool = !var_74_object; //@nz
		if(var_79_bool != 1)
			var_77_bool = false;
	}
	if(var_77_bool != 0)
		var_72_bool = false;
	bool var_76_bool;
	var_73_object->Compare(var_76_bool, var_74_object);
	var_76_bool = var_72_bool;
}


// @pe
void func_454(string var_90_string, int var_91_int)
{
	if((var_91_int + 1) < 10)
		var_90_string = "slot0" + (var_91_int + 1);
	var_90_string = "slot" + (var_91_int + 1);
}


void func_298(void)
{
	int var_120_int;
	func_287(var_120_int);
	@SendMessage(var_120_int, "money");
}


// @pe
void func_110(int var_0_int, int var_8_int)
{
	int var_9_int;
	func_273(var_9_int, var_9_int);
	func_367(-1);
	func_298();
	@SetCursor("default");
	@ShowCursor();
	@CaptureKeyboard();
	@SetOwnerDraw(false);
	@SetNeedUpdate(true);
	func_54();
	@ProcessEvents();
}


void func_367(int var_44_int)
{
	object var_55_object; int var_56_int; bool var_57_bool; bool var_58_bool;
	object var_59_object;
	func_17(var_58_bool, var_59_object);
	object var_52_object;
	var_59_object = var_52_object;
	int var_53_int;
	var_52_object->GetItemCount(var_53_int, var_44_int);
	int var_54_int = 0;
	
	for(;;) {
		if(var_54_int < 12) {
			if(var_54_int < var_53_int) {
				var_52_object->GetItem(var_55_object, var_54_int, var_44_int);
				var_52_object->GetItemAmount(var_56_int, var_54_int, var_44_int);
				bool var_63_bool; int var_64_int; int var_65_int;
				var_54_int = var_64_int;
				var_44_int = var_65_int;
				func_31(var_58_bool, var_63_bool, var_64_int, var_65_int);
				var_63_bool = var_57_bool;
				bool var_80_bool; object var_81_object;
				var_55_object = var_81_object;
				func_23(var_80_bool, var_81_object);
				var_80_bool = var_58_bool;
				if(var_57_bool != 0) {
					if(var_58_bool != 0) {
						string var_90_string; int var_91_int;
						var_54_int = var_91_int;
						func_454(var_90_string, var_91_int);
						@SendMessage(0, var_90_string, var_55_object);
					} else {
					string var_108_string; int var_109_int;
					var_54_int = var_109_int;
					func_454(var_108_string, var_109_int);
					@SendMessage(16384, var_108_string, var_55_object);
				}
				if(var_58_bool != 0) {
					string var_112_string; int var_113_int;
					var_54_int = var_113_int;
					func_454(var_112_string, var_113_int);
					@SendMessage(131072, var_112_string, var_55_object);
					goto Label_432;
				}
				string var_115_string; int var_116_int;
				var_54_int = var_116_int;
				func_454(var_115_string, var_116_int);
				@SendMessage(0, var_115_string, var_55_object);
			}
			string var_118_string; int var_119_int;
			var_54_int = var_119_int;
			func_454(var_118_string, var_119_int);
			@SendMessage(32768, var_118_string);
		}
		}
		goto Label_432;

	Label_432:
		string var_104_string; int var_105_int;
		var_54_int = var_105_int;
		func_454(var_104_string, var_105_int);
		@SendMessage((var_56_int | 65536), var_104_string);
		var_55_object = null;
		goto Label_449;

	Label_449:
		var_54_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


void func_17(object var_3_object, object var_59_object)
{
	var_59_object = var_3_object;
}


// @pe
void func_273(int var_0_int, int var_9_int)
{
	if(var_9_int == -1)
		return 0;
	if(var_0_int == var_9_int)
		return 0;
	func_305(var_9_int);
}


// @pe
void func_19(bool var_57_bool)
{
	var_57_bool = false;
}


// @pe
void func_305(int var_13_int)
{
	if(var_13_int != 0)
		@SendMessage(0, "button_weapon");
	else
		@SendMessage(1, "button_weapon");
	if(var_13_int != 1)
		@SendMessage(0, "button_clothes");
	else
		@SendMessage(1, "button_clothes");

	if(var_13_int != 2)
		@SendMessage(0, "button_medcine");
	else
		@SendMessage(1, "button_medcine");

	if(var_13_int != 3)
		@SendMessage(0, "button_food");
	else
		@SendMessage(1, "button_food");

	if(var_13_int != 4)
		@SendMessage(0, "button_other");
	else
		@SendMessage(1, "button_other");

	
}


void func_23(bool var_80_bool, object var_81_object)
{
	int var_84_int;
	var_81_object->GetItemID(var_84_int);
	bool var_85_bool;
	@HasInvItemProperty(var_85_bool, var_84_int, "Microscope");
	var_80_bool = !var_85_bool;
}


void func_470(int var_133_int, object var_134_object)
{
	int var_136_int;
	var_134_object->GetItemID(var_136_int);
	var_136_int = var_133_int;
}


// @pe
void func_55(bool var_107_bool, int var_108_int, bool var_109_bool)
{
	if(var_109_bool != 0) {
		int var_112_int;
		func_66(var_112_int, var_109_bool, var_112_int);
		var_107_bool = true;
		return 0;
	}
	var_107_bool = false;
}


void func_54(void)
{
}


void func_22(void)
{
}


void func_475(string var_140_string, object var_141_object)
{
	object var_147_object;
	var_141_object = var_147_object;
	int var_146_int;
	func_470(var_146_int, var_147_object);
	int var_144_int;
	var_146_int = var_144_int;
	string var_145_string;
	@GetInvItemName(var_145_string, var_144_int);
	var_145_string = var_140_string;
}


void func_31(object var_2_object, bool var_63_bool, int var_64_int, int var_65_int)
{
	object var_67_object;
	object var_68_object;
	func_17(var_67_object, var_68_object);
	object var_69_object;
	func_17(var_68_object, var_69_object);
	object var_70_object;
	func_17(var_68_object, var_70_object);
	object var_71_object;
	func_17(var_68_object, var_71_object);
	var_68_object->GetItem(var_67_object, var_64_int, var_65_int);
	bool var_72_bool; object var_74_object;
	var_67_object = var_74_object;
	func_485(var_72_bool, var_2_object, var_74_object);
	var_72_bool = var_63_bool;
}
EMIT "Stack[-1] = 0";


void func_287(int var_120_int)
{
	int var_124_int;
	object var_125_object;
	func_17(var_124_int, var_125_object);
	object var_123_object;
	var_125_object = var_123_object;
	var_123_object->GetProperty("money", var_124_int);
	var_124_int = var_120_int;
}
EMIT "Stack[-2] = 0";


