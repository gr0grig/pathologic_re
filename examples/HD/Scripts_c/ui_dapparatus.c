maintask task_0
{
	void init(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object)
	{
		@FindActor(var_3_object, "player");
		if(!var_3_object) { //@nz
			@DestroyWindow();
			return 0;
		}
		@GetWindowData(var_4_object);
		if(!var_4_object) { //@nz
			@Trace("null apparatus");
			@DestroyWindow();
			return 0;
		}
		@CreateWindow("inventory_base.xml", false, var_1_object);
		func_653(var_4_object, 4);
	}

	// @pe
	void event_100(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, int var_5_int)
	{
		@DestroyWindow();
	}

	// @pe
	void event_102(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, int var_5_int)
	{
		int var_6_int;
		var_5_int = var_6_int;
		func_872(var_6_int);
	}

	// @pe
	void event_101(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, int var_5_int)
	{
		if(var_5_int == 266) {
			if(var_0_int == 0) {
				func_1046(var_5_int, 1);
			} else {
					if(var_0_int == 1)
						func_1046(var_5_int, 2);

				for(;;) {
					} else {
				if(var_0_int == 2) {
					func_1046(var_5_int, 3);
				} else if(var_0_int == 3) {
					func_1046(var_5_int, 4);
				} else if(var_0_int == 4) {
					func_1046(var_5_int, 0);
				}
		}
			if(!(var_5_int == 265)) goto Label_831;
			if(var_0_int == 0) {
				func_1046(var_5_int, 4);
			} else if(var_0_int == 1) {
				func_1046(var_5_int, 0);
			} else if(var_0_int == 2) {
				func_1046(var_5_int, 1);
			} else if(var_0_int == 3) {
				func_1046(var_5_int, 2);
			} else if(var_0_int == 4) {
				func_1046(var_5_int, 3);
				}
			}
		Label_831:
			int var_45_int;
			var_5_int = var_45_int;
			func_836(var_45_int);
			return 0;

		}
	
	}

	// @pe
	void OnSee(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, float var_5_float)
	{
		func_1140(var_0_int);
		func_1071();
		func_61();
	}

	void event_200(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, int var_5_int, string var_6_string, object var_7_object)
	{
		bool var_14_bool; int var_15_int; int var_16_int; object var_17_object; int var_18_int; object var_19_object;
		if(var_5_int < 0) {
			bool var_22_bool; int var_23_int; string var_24_string; object var_25_object;
			var_5_int = var_23_int;
			var_6_string = var_24_string;
			var_7_object = var_25_object;
			func_29(var_24_string, var_25_object);
			var_22_bool = false;
			return 12;
		}
		if(var_6_string == "button_weapon") {
			func_1046(var_19_object, 0);
			var_14_bool = true;
		} else if(var_6_string == "button_clothes") {
				func_1046(var_19_object, 1);
				var_14_bool = true;
		}
	Label_1034:
		for(;;) {
			if(!var_14_bool) { //@nz
				bool var_317_bool; int var_318_int; string var_319_string; object var_320_object;
				var_5_int = var_318_int;
				var_6_string = var_319_string;
				var_7_object = var_320_object;
				func_29(var_319_string, var_320_object);
				var_317_bool = var_14_bool;
			}
			if(var_14_bool != 0) {
			}
			return 12;

		}
	
		if(var_6_string == "button_medcine") {
			func_1046(var_19_object, 2);
			var_14_bool = true;
		} else if(var_6_string == "button_food") {
			func_1046(var_19_object, 3);
			var_14_bool = true;
		} else if(var_6_string == "button_other") {
			func_1046(var_19_object, 4);
		} else if(var_6_string == "button_detector") {
		} else if(var_6_string == "button_anticeptic") {
		}
		if(var_5_int != 0) {
			@GetVariable("noinv_drop", var_15_int);
			if(var_15_int != 0)
				return 12;
		}
	
		for(;;) {
			if(!(0 < 12)) goto Label_1034;
			string var_344_string; int var_345_int;
			var_16_int = var_345_int;
			func_1227(var_344_string, var_345_int);
			if(var_6_string == var_344_string) {
				object var_357_object;
				func_27(var_19_object, var_357_object);
				var_357_object = var_17_object;
				var_17_object->GetItemCount(var_18_int, var_0_int);
				if(var_18_int > var_16_int) {
					var_17_object->GetItem(var_19_object, var_16_int, var_0_int);
					bool var_359_bool; object var_360_object;
					var_19_object = var_360_object;
					func_71(var_359_bool, var_360_object);
					if(!var_359_bool) { //@nz
						bool var_366_bool; int var_367_int; bool var_368_bool;
						var_16_int = var_367_int;
						var_368_bool = var_5_int == 0;
						func_89(var_366_bool, var_367_int, var_368_bool);
						var_366_bool = true;
					}
					var_19_object = null;
				}
				goto Label_1034;
			EMIT "Stack[-3] = 0";
			}
			var_16_int += 1;
		}
	}

}


void func_130(int var_0_int, object var_3_object, object var_4_object, bool var_377_bool, object var_378_object, int var_379_int)
{
	bool var_383_bool;
	object var_384_object;
	func_213(var_383_bool, var_384_object);
	object var_382_object;
	var_384_object = var_382_object;
	if(var_382_object != 0) {
		var_377_bool = false;
		return 4;
	}
	var_4_object->AddItem(var_383_bool, var_378_object, 0, 1); //@t
	if(!var_383_bool) { //@nz
		var_377_bool = false;
		return 4;
	}
	var_3_object->RemoveItem(var_379_int, 1, var_0_int); //@t
	var_377_bool = true;
}
EMIT "Stack[-2] = 0";


void func_261(object var_4_object, object var_63_object)
{
	int var_69_int; object var_72_object;
	var_4_object->GetItemCount(var_69_int); //@t
	int var_70_int = 0;
	int var_71_int = 0;
	
	while(var_71_int < var_69_int) {
		var_4_object->GetItem(var_72_object, var_71_int); //@t
		bool var_75_bool = false;
		bool var_76_bool; object var_77_object;
		var_72_object = var_77_object;
		func_176(var_76_bool, var_77_object);
		if(!var_76_bool) { //@nz
			bool var_90_bool; object var_91_object;
			var_72_object = var_91_object;
			func_184(var_90_bool, var_91_object);
			if(!var_90_bool) //@nz
				var_75_bool = true;
		}
		if(var_75_bool != 0)
			var_72_object = var_63_object;
		var_72_object = null;
		var_71_int += 1;
	}
	
	object var_73_object = null;
	var_73_object = var_63_object;
}
EMIT "Stack[-1] = 0";


void func_391(object var_3_object, object var_4_object, bool var_259_bool)
{
	bool var_263_bool;
	int var_264_int;
	func_296(var_263_bool, var_264_int);
	int var_262_int;
	var_264_int = var_262_int;
	if(var_262_int == -1) {
		var_259_bool = false;
		return 4;
	}
	object var_277_object;
	func_213(var_263_bool, var_277_object);
	var_3_object->AddItem(var_263_bool, var_277_object, 2, 1); //@t
	if(!var_263_bool) { //@nz
		var_259_bool = false;
		return 4;
	}
	var_4_object->RemoveItem(var_262_int, 1); //@t
	func_1046(var_263_bool, 2);
	var_259_bool = true;
}


void func_653(int var_0_int, int var_11_int)
{
	int var_16_int;
	var_11_int = var_16_int;
	object var_15_object;
	func_1046(var_15_object, var_16_int);
	func_1140(-1);
	func_1071();
	int var_14_int = 0;
	
	while(var_14_int < 12) {
		@CreateStringVector(var_15_object);
		string var_140_string;
		func_1227(var_140_string, (((var_14_int + 12) - 1) % 12));
		var_15_object->add(var_140_string);
		string var_147_string;
		func_1227(var_147_string, (((var_14_int + 12) + 1) % 12));
		var_15_object->add(var_147_string);
		string var_155_string; int var_156_int;
		var_14_int = var_156_int;
		func_1227(var_155_string, var_156_int);
		@SendMessage(-1, var_155_string, var_15_object);
		var_15_object = null;
		var_14_int += 1;
	}
	
	func_727();
	@SetCursor("default");
	@ShowCursor();
	@CaptureKeyboard();
	@SetOwnerDraw(false);
	@SetNeedUpdate(true);
	func_88();
	@ProcessEvents();
}


// @pe
void func_1046(int var_0_int, int var_16_int)
{
	if(var_16_int == -1)
		return 0;
	if(var_0_int == var_16_int)
		return 0;
	func_1078(var_16_int);
}


void func_153(int var_0_int, object var_3_object, object var_4_object, bool var_392_bool, object var_393_object, int var_394_int)
{
	bool var_398_bool;
	object var_399_object;
	func_237(var_398_bool, var_399_object);
	object var_397_object;
	var_399_object = var_397_object;
	if(var_397_object != 0) {
		var_392_bool = false;
		return 4;
	}
	var_4_object->AddItem(var_398_bool, var_393_object, 0, 1); //@t
	if(!var_398_bool) { //@nz
		var_392_bool = false;
		return 4;
	}
	var_3_object->RemoveItem(var_394_int, 1, var_0_int); //@t
	var_392_bool = true;
}
EMIT "Stack[-2] = 0";


void func_27(object var_3_object, object var_66_object)
{
	var_66_object = var_3_object;
}


// @pe
void func_29(bool var_22_bool, string var_24_string)
{
	if(var_24_string == "combine") {
		bool var_28_bool;
		func_506(var_25_object, var_28_bool);
		var_22_bool = true;
		return 0;
	EMIT "GOTO 0x3b";
	}
	if(var_24_string == "input_organ") {
		bool var_199_bool;
		func_361(var_24_string, var_25_object, var_199_bool);
	} else if(var_24_string == "input_grass") {
			bool var_259_bool;
			func_391(var_24_string, var_25_object, var_259_bool);
	}
Label_59:
	for(;;) {
		var_22_bool = false;
		return 0;

	}
	
	if(!(var_24_string == "output")) goto Label_59;
	bool var_285_bool;
	func_421(var_24_string, var_25_object, var_285_bool);
}


void func_1060(int var_130_int)
{
	int var_134_int;
	object var_135_object;
	func_27(var_134_int, var_135_object);
	object var_133_object;
	var_135_object = var_133_object;
	var_133_object->GetProperty("money", var_134_int);
	var_134_int = var_130_int;
}
EMIT "Stack[-2] = 0";


void func_421(object var_3_object, object var_4_object, bool var_285_bool)
{
	bool var_291_bool;
	object var_292_object;
	func_261(var_291_bool, var_292_object);
	object var_289_object;
	var_292_object = var_289_object;
	if(!var_289_object) { //@nz
		var_285_bool = false;
		return 6;
	}
	int var_294_int;
	func_338(var_291_bool, var_294_int);
	int var_290_int;
	var_294_int = var_290_int;
	var_3_object->AddItem(var_291_bool, var_289_object, 2, 1); //@t
	if(!var_291_bool) { //@nz
		var_285_bool = false;
		return 6;
	}
	var_4_object->RemoveItem(var_290_int, 1); //@t
	func_1046(var_291_bool, 2);
	var_285_bool = true;
}
EMIT "Stack[-3] = 0";


void func_296(object var_4_object, int var_264_int)
{
	int var_268_int; object var_270_object;
	var_4_object->GetItemCount(var_268_int); //@t
	int var_269_int = 0;
	
	while(var_269_int < var_268_int) {
		var_4_object->GetItem(var_270_object, var_269_int); //@t
		bool var_272_bool; object var_273_object;
		var_270_object = var_273_object;
		func_176(var_272_bool, var_273_object);
		if(var_272_bool != 0)
			var_269_int = var_264_int;
		var_270_object = null;
		var_269_int += 1;
	}
	
	var_264_int = -1;
}


void func_1071(void)
{
	int var_130_int;
	func_1060(var_130_int);
	@SendMessage(var_130_int, "money");
}


// @pe
void func_176(bool var_75_bool, object var_76_object)
{
	object var_79_object;
	var_76_object = var_79_object;
	string var_78_string;
	func_1248(var_78_string, var_79_object);
	var_75_bool = "grass_combination" == var_78_string;
}


// @pe
void func_1078(int var_20_int)
{
	if(var_20_int != 0)
		@SendMessage(0, "button_weapon");
	else
		@SendMessage(1, "button_weapon");
	if(var_20_int != 1)
		@SendMessage(0, "button_clothes");
	else
		@SendMessage(1, "button_clothes");

	if(var_20_int != 2)
		@SendMessage(0, "button_medcine");
	else
		@SendMessage(1, "button_medcine");

	if(var_20_int != 3)
		@SendMessage(0, "button_food");
	else
		@SendMessage(1, "button_food");

	if(var_20_int != 4)
		@SendMessage(0, "button_other");
	else
		@SendMessage(1, "button_other");

	
}


void func_184(bool var_88_bool, object var_89_object)
{
	object var_95_object;
	var_89_object = var_95_object;
	int var_94_int;
	func_1243(var_94_int, var_95_object);
	int var_92_int;
	var_94_int = var_92_int;
	bool var_93_bool;
	@HasInvItemProperty(var_93_bool, var_92_int, "Microscope");
	var_93_bool = var_88_bool;
}


void func_317(object var_4_object, int var_204_int)
{
	int var_208_int; object var_210_object;
	var_4_object->GetItemCount(var_208_int); //@t
	int var_209_int = 0;
	
	while(var_209_int < var_208_int) {
		var_4_object->GetItem(var_210_object, var_209_int); //@t
		bool var_212_bool; object var_213_object;
		var_210_object = var_213_object;
		func_184(var_212_bool, var_213_object);
		if(var_212_bool != 0)
			var_209_int = var_204_int;
		var_210_object = null;
		var_209_int += 1;
	}
	
	var_204_int = -1;
}


// @pe
void func_61(void)
{
	func_452();
	func_470();
	func_488();
}


void func_195(int var_134_int, object var_135_object)
{
	object var_143_object;
	var_135_object = var_143_object;
	int var_142_int;
	func_1243(var_142_int, var_143_object);
	int var_139_int;
	var_142_int = var_139_int;
	bool var_140_bool;
	@HasInvItemProperty(var_140_bool, var_139_int, "Microscope");
	if(!var_140_bool) //@nz
		var_134_int = false;
	int var_141_int;
	@GetInvItemProperty(var_141_int, var_139_int, "Microscope");
	var_141_int = var_134_int;
}


void func_452(void)
{
	object var_94_object;
	object var_95_object;
	func_213(var_94_object, var_95_object);
	var_95_object = var_94_object;
	if(var_94_object != 0)
		@SendMessage(0, "input_grass", var_94_object);
	else
		@SendMessage(32768, "input_grass");
	
}
EMIT "Stack[-1] = 0";


void func_836(int var_45_int)
{
	int var_48_int; int var_49_int;
	if(var_45_int == 269) {

		for(;;) {
			if(!(0 < 12)) goto Label_854;
			string var_55_string; int var_56_int;
			var_48_int = var_56_int;
			func_1227(var_55_string, var_56_int);
			@SendMessage(-2, var_55_string);
			var_48_int += 1;
		}
	}
Label_854:
	if(var_45_int == 270) {

		for(;;) {
			if(!(0 < 12)) goto Label_871;
			string var_73_string; int var_74_int;
			var_49_int = var_74_int;
			func_1227(var_73_string, var_74_int);
			@SendMessage(-3, var_73_string);
			var_49_int += 1;
		}
	}
Label_871:
}


// @pe
void func_71(bool var_73_bool, object var_74_object)
{
	object var_76_object;
	var_74_object = var_76_object;
	bool var_75_bool;
	func_176(var_75_bool, var_76_object);
	if(var_75_bool != 0) {
		var_73_bool = false;
		return 0;
	}
	bool var_88_bool; object var_89_object;
	var_74_object = var_89_object;
	func_184(var_88_bool, var_89_object);
	var_73_bool = !var_88_bool;
}


// @pe
void func_1227(string var_100_string, int var_101_int)
{
	if((var_101_int + 1) < 10)
		var_100_string = "slot0" + (var_101_int + 1);
	var_100_string = "slot" + (var_101_int + 1);
}


void func_338(object var_4_object, int var_294_int)
{
	int var_299_int; object var_302_object;
	var_4_object->GetItemCount(var_299_int); //@t
	int var_300_int = 0;
	int var_301_int = 0;
	
	while(var_301_int < var_299_int) {
		var_4_object->GetItem(var_302_object, var_301_int); //@t
		bool var_304_bool; object var_305_object;
		var_302_object = var_305_object;
		func_176(var_304_bool, var_305_object);
		if(!var_304_bool) //@nz
			var_301_int = var_294_int;
		var_302_object = null;
		var_301_int += 1;
	}
	
	var_294_int = -1;
}


void func_213(object var_4_object, object var_101_object)
{
	int var_107_int; object var_110_object;
	var_4_object->GetItemCount(var_107_int); //@t
	int var_108_int = 0;
	int var_109_int = 0;
	
	while(var_109_int < var_107_int) {
		var_4_object->GetItem(var_110_object, var_109_int); //@t
		bool var_113_bool; object var_114_object;
		var_110_object = var_114_object;
		func_176(var_113_bool, var_114_object);
		if(var_113_bool != 0)
			var_110_object = var_101_object;
		var_110_object = null;
		var_109_int += 1;
	}
	
	object var_111_object = null;
	var_111_object = var_101_object;
}
EMIT "Stack[-1] = 0";


void func_470(void)
{
	object var_116_object;
	object var_117_object;
	func_237(var_116_object, var_117_object);
	var_117_object = var_116_object;
	if(var_116_object != 0)
		@SendMessage(0, "input_organ", var_116_object);
	else
		@SendMessage(32768, "input_organ");
	
}
EMIT "Stack[-1] = 0";


void func_727(void)
{
	string var_159_string;
	func_1227(var_159_string, 0);
	@SendMessage(-6, var_159_string);
}


void func_88(void)
{
}


// @pe
void func_89(bool var_366_bool, int var_367_int, bool var_368_bool)
{
	if(var_368_bool != 0) {
		bool var_371_bool; int var_372_int;
		func_100(var_372_int, var_368_bool, var_371_bool, var_372_int);
		var_371_bool = var_366_bool;
		return 0;
	}
	var_366_bool = false;
}


// @pe
void func_85(bool var_70_bool)
{
	var_70_bool = false;
}


void func_1243(int var_84_int, object var_85_object)
{
	int var_87_int;
	var_85_object->GetItemID(var_87_int);
	var_87_int = var_84_int;
}


void func_1248(string var_78_string, object var_79_object)
{
	object var_85_object;
	var_79_object = var_85_object;
	int var_84_int;
	func_1243(var_84_int, var_85_object);
	int var_82_int;
	var_84_int = var_82_int;
	string var_83_string;
	@GetInvItemName(var_83_string, var_82_int);
	var_83_string = var_78_string;
}


void func_100(int var_0_int, object var_3_object, bool var_371_bool, int var_372_int)
{
	object var_373_object; object var_374_object;
	var_3_object->GetItem(var_374_object, var_372_int, var_0_int); //@t
	bool var_375_bool; object var_376_object;
	var_374_object = var_376_object;
	func_176(var_375_bool, var_376_object);
	if(var_375_bool != 0) {
		bool var_377_bool; object var_378_object; int var_379_int;
		func_130(var_379_int, var_373_object, var_378_object, var_377_bool, var_378_object, var_379_int);
		var_377_bool = var_371_bool;
		return 2;
	}
	bool var_390_bool; object var_391_object;
	var_374_object = var_391_object;
	func_184(var_390_bool, var_391_object);
	if(var_390_bool != 0) {
		bool var_392_bool; object var_393_object; int var_394_int;
		func_153(var_394_int, var_373_object, var_393_object, var_392_bool, var_393_object, var_394_int);
		var_392_bool = var_371_bool;
		return 2;
	}
	var_371_bool = false;
}
EMIT "Stack[-1] = 0";


void func_488(void)
{
	object var_138_object;
	object var_139_object;
	func_261(var_138_object, var_139_object);
	var_139_object = var_138_object;
	if(var_138_object != 0)
		@SendMessage(0, "output", var_138_object);
	else
		@SendMessage(32768, "output");
	
}
EMIT "Stack[-1] = 0";


void func_361(object var_3_object, object var_4_object, bool var_199_bool)
{
	bool var_203_bool;
	int var_204_int;
	func_317(var_203_bool, var_204_int);
	int var_202_int;
	var_204_int = var_202_int;
	if(var_202_int == -1) {
		var_199_bool = false;
		return 4;
	}
	object var_217_object;
	func_237(var_203_bool, var_217_object);
	var_3_object->AddItem(var_203_bool, var_217_object, 4, 1); //@t
	if(!var_203_bool) { //@nz
		var_199_bool = false;
		return 4;
	}
	var_4_object->RemoveItem(var_202_int, 1); //@t
	func_1046(var_203_bool, 4);
	var_199_bool = true;
}


void func_872(int var_6_int)
{
	int var_9_int; int var_10_int;
	if(var_6_int == 273) {

		for(;;) {
			if(!(0 < 12)) goto Label_890;
			string var_16_string; int var_17_int;
			var_9_int = var_17_int;
			func_1227(var_16_string, var_17_int);
			@SendMessage(-2, var_16_string);
			var_9_int += 1;
		}
	}
Label_890:
	if(var_6_int == 271) {

		for(;;) {
			if(!(0 < 12)) goto Label_907;
			string var_34_string; int var_35_int;
			var_10_int = var_35_int;
			func_1227(var_34_string, var_35_int);
			@SendMessage(-3, var_34_string);
			var_10_int += 1;
		}
	}
Label_907:
}


void func_237(object var_4_object, object var_116_object)
{
	int var_122_int; object var_125_object;
	var_4_object->GetItemCount(var_122_int); //@t
	int var_123_int = 0;
	int var_124_int = 0;
	
	while(var_124_int < var_122_int) {
		var_4_object->GetItem(var_125_object, var_124_int); //@t
		bool var_128_bool; object var_129_object;
		var_125_object = var_129_object;
		func_184(var_128_bool, var_129_object);
		if(var_128_bool != 0)
			var_125_object = var_116_object;
		var_125_object = null;
		var_124_int += 1;
	}
	
	object var_126_object = null;
	var_126_object = var_116_object;
}
EMIT "Stack[-1] = 0";


void func_1140(int var_51_int)
{
	object var_62_object; int var_63_int; bool var_64_bool; bool var_65_bool;
	object var_66_object;
	func_27(var_65_bool, var_66_object);
	object var_59_object;
	var_66_object = var_59_object;
	int var_60_int;
	var_59_object->GetItemCount(var_60_int, var_51_int);
	int var_61_int = 0;
	
	for(;;) {
		if(var_61_int < 12) {
			if(var_61_int < var_60_int) {
				var_59_object->GetItem(var_62_object, var_61_int, var_51_int);
				var_59_object->GetItemAmount(var_63_int, var_61_int, var_51_int);
				bool var_70_bool; int var_71_int; int var_72_int;
				var_61_int = var_71_int;
				var_51_int = var_72_int;
				func_85(var_72_int);
				var_70_bool = var_64_bool;
				bool var_73_bool; object var_74_object;
				var_62_object = var_74_object;
				func_71(var_73_bool, var_74_object);
				var_73_bool = var_65_bool;
				if(var_64_bool != 0) {
					if(var_65_bool != 0) {
						string var_100_string; int var_101_int;
						var_61_int = var_101_int;
						func_1227(var_100_string, var_101_int);
						@SendMessage(0, var_100_string, var_62_object);
					} else {
					string var_118_string; int var_119_int;
					var_61_int = var_119_int;
					func_1227(var_118_string, var_119_int);
					@SendMessage(16384, var_118_string, var_62_object);
				}
				if(var_65_bool != 0) {
					string var_122_string; int var_123_int;
					var_61_int = var_123_int;
					func_1227(var_122_string, var_123_int);
					@SendMessage(131072, var_122_string, var_62_object);
					goto Label_1205;
				}
				string var_125_string; int var_126_int;
				var_61_int = var_126_int;
				func_1227(var_125_string, var_126_int);
				@SendMessage(0, var_125_string, var_62_object);
			}
			string var_128_string; int var_129_int;
			var_61_int = var_129_int;
			func_1227(var_128_string, var_129_int);
			@SendMessage(32768, var_128_string);
		}
		}
		goto Label_1205;

	Label_1205:
		string var_114_string; int var_115_int;
		var_61_int = var_115_int;
		func_1227(var_114_string, var_115_int);
		@SendMessage((var_63_int | 65536), var_114_string);
		var_62_object = null;
		goto Label_1222;

	Label_1222:
		var_61_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


void func_506(object var_4_object, bool var_28_bool)
{
	object var_48_object; bool var_49_bool; float var_52_float; float var_54_float; float var_57_float; float var_58_float; float var_59_float; float var_60_float; bool var_62_bool;
	object var_63_object;
	func_261(var_62_bool, var_63_object);
	if(var_63_object != 0) {
		var_28_bool = false;
		return 34;
	}
	object var_101_object;
	func_213(var_62_bool, var_101_object);
	object var_46_object;
	var_101_object = var_46_object;
	object var_116_object;
	func_237(var_62_bool, var_116_object);
	object var_47_object;
	var_116_object = var_47_object;
	bool var_131_bool = true;
	var_132_bool = !var_46_object; //@nz
	if(var_132_bool != 1) {
		var_133_bool = !var_47_object; //@nz
		if(var_133_bool != 1)
			var_131_bool = false;
	}
	if(var_131_bool != 0) {
		var_28_bool = false;
		return 34;
	}
	int var_134_int; object var_135_object;
	var_47_object = var_135_object;
	func_195(var_134_int, var_135_object);
	if(var_134_int == 5) {
		var_4_object->RemoveAllItems(); //@t
		@CreateInvItem(var_48_object);
		var_48_object->SetItemName("burah_serum");
		var_4_object->AddItem(var_49_bool, var_48_object, 0, 1); //@t
		var_28_bool = true;
		return 34;
	EMIT "Stack[-15] = 0";
	}
	float var_50_float;
	var_46_object->GetProperty(var_50_float, "im_inc");
	float var_51_float;
	var_46_object->GetProperty(var_51_float, "hl_inc");
	int var_154_int; object var_155_object;
	var_47_object = var_155_object;
	func_195(var_154_int, var_155_object);
	if(var_154_int == 1) {
		var_52_float = 1;
		var_51_float = var_54_float;
	}
	int var_158_int; object var_159_object;
	var_47_object = var_159_object;
	func_195(var_158_int, var_159_object);
	if(var_158_int == 2) {
		var_57_float = 1.0 * (1.0 - var_50_float);
		var_57_float = var_52_float;
		var_51_float = var_54_float;
	}
	int var_165_int; object var_166_object;
	var_47_object = var_166_object;
	func_195(var_165_int, var_166_object);
	if(var_165_int == 3) {
		var_58_float = 0.8 * (1.0 - var_50_float);
		var_58_float = var_52_float;
		var_51_float = var_54_float;
	}
	int var_172_int; object var_173_object;
	var_47_object = var_173_object;
	func_195(var_172_int, var_173_object);
	if(var_172_int == 4) {
		var_59_float = 0.5 * (1.0 - var_50_float);
		var_59_float = var_52_float;
		var_51_float = var_54_float;
	}
	int var_179_int; object var_180_object;
	var_47_object = var_180_object;
	func_195(var_179_int, var_180_object);
	if(var_179_int == 6) {
		var_60_float = 0.3 * (1.0 - var_50_float);
		var_60_float = var_52_float;
		var_51_float = var_54_float;
	}
	if(var_52_float > 1)
		var_52_float = 1;
	if(var_52_float < 0.03)
		var_52_float = 0.03;
	if(var_54_float < -1)
		var_54_float = -1;
	var_4_object->RemoveAllItems(); //@t
	object var_61_object;
	@CreateInvItem(var_61_object);
	var_61_object->SetItemName("organ_combination");
	var_61_object->SetProperty("DiseaseRate", var_52_float);
	var_61_object->SetProperty("HealthIncrease", var_54_float);
	var_4_object->AddItem(var_62_bool, var_61_object, 0, 1); //@t
	var_28_bool = true;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-16] = 0";
EMIT "Stack[-17] = 0";


