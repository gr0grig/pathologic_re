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
		func_647(var_4_object, 4);
	}

	// @pe
	void event_100(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, int var_5_int)
	{
		@DestroyWindow();
	}

	// @pe
	void OnSee(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, float var_5_float)
	{
		func_904(var_0_int);
		func_835();
		func_61();
	}

	void event_200(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, int var_5_int, string var_6_string, object var_7_object)
	{
		bool var_14_bool; int var_15_int; int var_16_int; object var_17_object; int var_18_int; object var_19_object;
		var_14_bool = false;
		if(var_6_string == "button_weapon") {
			func_810(var_19_object, 0);
			var_14_bool = true;
		} else if(var_6_string == "button_clothes") {
				func_810(var_19_object, 1);
				var_14_bool = true;
		}
	Label_798:
		for(;;) {
			if(!var_14_bool) { //@nz
				bool var_58_bool; int var_59_int; string var_60_string; object var_61_object;
				var_5_int = var_59_int;
				var_6_string = var_60_string;
				var_7_object = var_61_object;
				func_29(var_60_string, var_61_object);
				var_58_bool = var_14_bool;
			}
			if(var_14_bool != 0) {
			}
			return 12;

		}
	
		if(var_6_string == "button_medcine") {
			func_810(var_19_object, 2);
			var_14_bool = true;
		} else if(var_6_string == "button_food") {
			func_810(var_19_object, 3);
			var_14_bool = true;
		} else if(var_6_string == "button_other") {
			func_810(var_19_object, 4);
		} else if(var_6_string == "button_detector") {
		} else if(var_6_string == "button_anticeptic") {
		}
		if(var_5_int != 0) {
			@GetVariable("noinv_drop", var_15_int);
			if(var_15_int != 0)
				return 12;
		}
	
		for(;;) {
			if(!(0 < 12)) goto Label_798;
			string var_337_string; int var_338_int;
			var_16_int = var_338_int;
			func_991(var_337_string, var_338_int);
			if(var_6_string == var_337_string) {
				object var_350_object;
				func_27(var_19_object, var_350_object);
				var_350_object = var_17_object;
				var_17_object->GetItemCount(var_18_int, var_0_int);
				if(var_18_int > var_16_int) {
					var_17_object->GetItem(var_19_object, var_16_int, var_0_int);
					bool var_352_bool; object var_353_object;
					var_19_object = var_353_object;
					func_71(var_352_bool, var_353_object);
					if(!var_352_bool) { //@nz
						bool var_359_bool; int var_360_int; bool var_361_bool;
						var_16_int = var_360_int;
						var_361_bool = var_5_int == 0;
						func_89(var_359_bool, var_360_int, var_361_bool);
						var_359_bool = true;
					}
					var_19_object = null;
				}
				goto Label_798;
			EMIT "Stack[-3] = 0";
			}
			var_16_int += 1;
		}
	}

}


void func_130(int var_0_int, object var_3_object, object var_4_object, bool var_370_bool, object var_371_object, int var_372_int)
{
	bool var_376_bool;
	object var_377_object;
	func_213(var_376_bool, var_377_object);
	object var_375_object;
	var_377_object = var_375_object;
	if(var_375_object != 0) {
		var_370_bool = false;
		return 4;
	}
	var_4_object->AddItem(var_376_bool, var_371_object, 0, 1); //@t
	if(!var_376_bool) { //@nz
		var_370_bool = false;
		return 4;
	}
	var_3_object->RemoveItem(var_372_int, 1, var_0_int); //@t
	var_370_bool = true;
}
EMIT "Stack[-2] = 0";


void func_261(object var_4_object, object var_274_object)
{
	int var_280_int; object var_283_object;
	var_4_object->GetItemCount(var_280_int); //@t
	int var_281_int = 0;
	int var_282_int = 0;
	
	while(var_282_int < var_280_int) {
		var_4_object->GetItem(var_283_object, var_282_int); //@t
		bool var_286_bool = false;
		bool var_287_bool; object var_288_object;
		var_283_object = var_288_object;
		func_176(var_287_bool, var_288_object);
		if(!var_287_bool) { //@nz
			bool var_290_bool; object var_291_object;
			var_283_object = var_291_object;
			func_184(var_290_bool, var_291_object);
			if(!var_290_bool) //@nz
				var_286_bool = true;
		}
		if(var_286_bool != 0)
			var_283_object = var_274_object;
		var_283_object = null;
		var_282_int += 1;
	}
	
	object var_284_object = null;
	var_284_object = var_274_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_647(int var_0_int, int var_11_int)
{
	int var_12_int;
	func_810(var_12_int, var_12_int);
	func_904(-1);
	func_835();
	@SetCursor("default");
	@ShowCursor();
	@CaptureKeyboard();
	@SetOwnerDraw(false);
	@SetNeedUpdate(true);
	func_88();
	@ProcessEvents();
}


void func_904(int var_47_int)
{
	object var_58_object; int var_59_int; bool var_60_bool; bool var_61_bool;
	object var_62_object;
	func_27(var_61_bool, var_62_object);
	object var_55_object;
	var_62_object = var_55_object;
	int var_56_int;
	var_55_object->GetItemCount(var_56_int, var_47_int);
	int var_57_int = 0;
	
	for(;;) {
		if(var_57_int < 12) {
			if(var_57_int < var_56_int) {
				var_55_object->GetItem(var_58_object, var_57_int, var_47_int);
				var_55_object->GetItemAmount(var_59_int, var_57_int, var_47_int);
				bool var_66_bool; int var_67_int; int var_68_int;
				var_57_int = var_67_int;
				var_47_int = var_68_int;
				func_85(var_68_int);
				var_66_bool = var_60_bool;
				bool var_69_bool; object var_70_object;
				var_58_object = var_70_object;
				func_71(var_69_bool, var_70_object);
				var_69_bool = var_61_bool;
				if(var_60_bool != 0) {
					if(var_61_bool != 0) {
						string var_96_string; int var_97_int;
						var_57_int = var_97_int;
						func_991(var_96_string, var_97_int);
						@SendMessage(0, var_96_string, var_58_object);
					} else {
					string var_114_string; int var_115_int;
					var_57_int = var_115_int;
					func_991(var_114_string, var_115_int);
					@SendMessage(16384, var_114_string, var_58_object);
				}
				if(var_61_bool != 0) {
					string var_118_string; int var_119_int;
					var_57_int = var_119_int;
					func_991(var_118_string, var_119_int);
					@SendMessage(131072, var_118_string, var_58_object);
					goto Label_969;
				}
				string var_121_string; int var_122_int;
				var_57_int = var_122_int;
				func_991(var_121_string, var_122_int);
				@SendMessage(0, var_121_string, var_58_object);
			}
			string var_124_string; int var_125_int;
			var_57_int = var_125_int;
			func_991(var_124_string, var_125_int);
			@SendMessage(32768, var_124_string);
		}
		}
		goto Label_969;

	Label_969:
		string var_110_string; int var_111_int;
		var_57_int = var_111_int;
		func_991(var_110_string, var_111_int);
		@SendMessage((var_59_int | 65536), var_110_string);
		var_58_object = null;
		goto Label_986;

	Label_986:
		var_57_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


void func_391(object var_3_object, object var_4_object, bool var_241_bool)
{
	bool var_245_bool;
	int var_246_int;
	func_296(var_245_bool, var_246_int);
	int var_244_int;
	var_246_int = var_244_int;
	if(var_244_int == -1) {
		var_241_bool = false;
		return 4;
	}
	object var_259_object;
	func_213(var_245_bool, var_259_object);
	var_3_object->AddItem(var_245_bool, var_259_object, 2, 1); //@t
	if(!var_245_bool) { //@nz
		var_241_bool = false;
		return 4;
	}
	var_4_object->RemoveItem(var_244_int, 1); //@t
	func_810(var_245_bool, 2);
	var_241_bool = true;
}


void func_153(int var_0_int, object var_3_object, object var_4_object, bool var_385_bool, object var_386_object, int var_387_int)
{
	bool var_391_bool;
	object var_392_object;
	func_237(var_391_bool, var_392_object);
	object var_390_object;
	var_392_object = var_390_object;
	if(var_390_object != 0) {
		var_385_bool = false;
		return 4;
	}
	var_4_object->AddItem(var_391_bool, var_386_object, 0, 1); //@t
	if(!var_391_bool) { //@nz
		var_385_bool = false;
		return 4;
	}
	var_3_object->RemoveItem(var_387_int, 1, var_0_int); //@t
	var_385_bool = true;
}
EMIT "Stack[-2] = 0";


void func_27(object var_3_object, object var_62_object)
{
	var_62_object = var_3_object;
}


// @pe
void func_29(bool var_58_bool, string var_60_string)
{
	if(var_60_string == "combine") {
		bool var_64_bool;
		func_506(var_61_object, var_64_bool);
		var_58_bool = true;
		return 0;
	EMIT "GOTO 0x3b";
	}
	if(var_60_string == "input_organ") {
		bool var_215_bool;
		func_361(var_60_string, var_61_object, var_215_bool);
	} else if(var_60_string == "input_grass") {
			bool var_241_bool;
			func_391(var_60_string, var_61_object, var_241_bool);
	}
Label_59:
	for(;;) {
		var_58_bool = false;
		return 0;

	}
	
	if(!(var_60_string == "output")) goto Label_59;
	bool var_267_bool;
	func_421(var_60_string, var_61_object, var_267_bool);
}


void func_421(object var_3_object, object var_4_object, bool var_267_bool)
{
	bool var_273_bool;
	object var_274_object;
	func_261(var_273_bool, var_274_object);
	object var_271_object;
	var_274_object = var_271_object;
	if(!var_271_object) { //@nz
		var_267_bool = false;
		return 6;
	}
	int var_295_int;
	func_338(var_273_bool, var_295_int);
	int var_272_int;
	var_295_int = var_272_int;
	var_3_object->AddItem(var_273_bool, var_271_object, 2, 1); //@t
	if(!var_273_bool) { //@nz
		var_267_bool = false;
		return 6;
	}
	var_4_object->RemoveItem(var_272_int, 1); //@t
	func_810(var_273_bool, 2);
	var_267_bool = true;
}
EMIT "Stack[-3] = 0";


void func_296(object var_4_object, int var_246_int)
{
	int var_250_int; object var_252_object;
	var_4_object->GetItemCount(var_250_int); //@t
	int var_251_int = 0;
	
	while(var_251_int < var_250_int) {
		var_4_object->GetItem(var_252_object, var_251_int); //@t
		bool var_254_bool; object var_255_object;
		var_252_object = var_255_object;
		func_176(var_254_bool, var_255_object);
		if(var_254_bool != 0)
			var_251_int = var_246_int;
		var_252_object = null;
		var_251_int += 1;
	}
	
	var_246_int = -1;
}


// @pe
void func_810(int var_0_int, int var_12_int)
{
	if(var_12_int == -1)
		return 0;
	if(var_0_int == var_12_int)
		return 0;
	func_842(var_12_int);
}


// @pe
void func_176(bool var_71_bool, object var_72_object)
{
	object var_75_object;
	var_72_object = var_75_object;
	string var_74_string;
	func_1012(var_74_string, var_75_object);
	var_71_bool = "grass_combination" == var_74_string;
}


void func_824(int var_126_int)
{
	int var_130_int;
	object var_131_object;
	func_27(var_130_int, var_131_object);
	object var_129_object;
	var_131_object = var_129_object;
	var_129_object->GetProperty("money", var_130_int);
	var_130_int = var_126_int;
}
EMIT "Stack[-2] = 0";


void func_184(bool var_84_bool, object var_85_object)
{
	object var_91_object;
	var_85_object = var_91_object;
	int var_90_int;
	func_1007(var_90_int, var_91_object);
	int var_88_int;
	var_90_int = var_88_int;
	bool var_89_bool;
	@HasInvItemProperty(var_89_bool, var_88_int, "Microscope");
	var_89_bool = var_84_bool;
}


void func_317(object var_4_object, int var_220_int)
{
	int var_224_int; object var_226_object;
	var_4_object->GetItemCount(var_224_int); //@t
	int var_225_int = 0;
	
	while(var_225_int < var_224_int) {
		var_4_object->GetItem(var_226_object, var_225_int); //@t
		bool var_228_bool; object var_229_object;
		var_226_object = var_229_object;
		func_184(var_228_bool, var_229_object);
		if(var_228_bool != 0)
			var_225_int = var_220_int;
		var_226_object = null;
		var_225_int += 1;
	}
	
	var_220_int = -1;
}


// @pe
void func_61(void)
{
	func_452();
	func_470();
	func_488();
}


void func_195(int var_150_int, object var_151_object)
{
	object var_159_object;
	var_151_object = var_159_object;
	int var_158_int;
	func_1007(var_158_int, var_159_object);
	int var_155_int;
	var_158_int = var_155_int;
	bool var_156_bool;
	@HasInvItemProperty(var_156_bool, var_155_int, "Microscope");
	if(!var_156_bool) //@nz
		var_150_int = false;
	int var_157_int;
	@GetInvItemProperty(var_157_int, var_155_int, "Microscope");
	var_157_int = var_150_int;
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


void func_835(void)
{
	int var_126_int;
	func_824(var_126_int);
	@SendMessage(var_126_int, "money");
}


// @pe
void func_71(bool var_69_bool, object var_70_object)
{
	object var_72_object;
	var_70_object = var_72_object;
	bool var_71_bool;
	func_176(var_71_bool, var_72_object);
	if(var_71_bool != 0) {
		var_69_bool = false;
		return 0;
	}
	bool var_84_bool; object var_85_object;
	var_70_object = var_85_object;
	func_184(var_84_bool, var_85_object);
	var_69_bool = !var_84_bool;
}


// @pe
void func_842(int var_16_int)
{
	if(var_16_int != 0)
		@SendMessage(0, "button_weapon");
	else
		@SendMessage(1, "button_weapon");
	if(var_16_int != 1)
		@SendMessage(0, "button_clothes");
	else
		@SendMessage(1, "button_clothes");

	if(var_16_int != 2)
		@SendMessage(0, "button_medcine");
	else
		@SendMessage(1, "button_medcine");

	if(var_16_int != 3)
		@SendMessage(0, "button_food");
	else
		@SendMessage(1, "button_food");

	if(var_16_int != 4)
		@SendMessage(0, "button_other");
	else
		@SendMessage(1, "button_other");

	
}


void func_338(object var_4_object, int var_295_int)
{
	int var_300_int; object var_303_object;
	var_4_object->GetItemCount(var_300_int); //@t
	int var_301_int = 0;
	int var_302_int = 0;
	
	while(var_302_int < var_300_int) {
		var_4_object->GetItem(var_303_object, var_302_int); //@t
		bool var_305_bool; object var_306_object;
		var_303_object = var_306_object;
		func_176(var_305_bool, var_306_object);
		if(!var_305_bool) //@nz
			var_302_int = var_295_int;
		var_303_object = null;
		var_302_int += 1;
	}
	
	var_295_int = -1;
}


void func_213(object var_4_object, object var_99_object)
{
	int var_105_int; object var_108_object;
	var_4_object->GetItemCount(var_105_int); //@t
	int var_106_int = 0;
	int var_107_int = 0;
	
	while(var_107_int < var_105_int) {
		var_4_object->GetItem(var_108_object, var_107_int); //@t
		bool var_111_bool; object var_112_object;
		var_108_object = var_112_object;
		func_176(var_111_bool, var_112_object);
		if(var_111_bool != 0)
			var_108_object = var_99_object;
		var_108_object = null;
		var_107_int += 1;
	}
	
	object var_109_object = null;
	var_109_object = var_99_object;
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


// @pe
void func_85(bool var_66_bool)
{
	var_66_bool = false;
}


void func_88(void)
{
}


// @pe
void func_89(bool var_359_bool, int var_360_int, bool var_361_bool)
{
	if(var_361_bool != 0) {
		bool var_364_bool; int var_365_int;
		func_100(var_365_int, var_361_bool, var_364_bool, var_365_int);
		var_364_bool = var_359_bool;
		return 0;
	}
	var_359_bool = false;
}


// @pe
void func_991(string var_96_string, int var_97_int)
{
	if((var_97_int + 1) < 10)
		var_96_string = "slot0" + (var_97_int + 1);
	var_96_string = "slot" + (var_97_int + 1);
}


void func_100(int var_0_int, object var_3_object, bool var_364_bool, int var_365_int)
{
	object var_366_object; object var_367_object;
	var_3_object->GetItem(var_367_object, var_365_int, var_0_int); //@t
	bool var_368_bool; object var_369_object;
	var_367_object = var_369_object;
	func_176(var_368_bool, var_369_object);
	if(var_368_bool != 0) {
		bool var_370_bool; object var_371_object; int var_372_int;
		func_130(var_372_int, var_366_object, var_371_object, var_370_bool, var_371_object, var_372_int);
		var_370_bool = var_364_bool;
		return 2;
	}
	bool var_383_bool; object var_384_object;
	var_367_object = var_384_object;
	func_184(var_383_bool, var_384_object);
	if(var_383_bool != 0) {
		bool var_385_bool; object var_386_object; int var_387_int;
		func_153(var_387_int, var_366_object, var_386_object, var_385_bool, var_386_object, var_387_int);
		var_385_bool = var_364_bool;
		return 2;
	}
	var_364_bool = false;
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


void func_361(object var_3_object, object var_4_object, bool var_215_bool)
{
	bool var_219_bool;
	int var_220_int;
	func_317(var_219_bool, var_220_int);
	int var_218_int;
	var_220_int = var_218_int;
	if(var_218_int == -1) {
		var_215_bool = false;
		return 4;
	}
	object var_233_object;
	func_237(var_219_bool, var_233_object);
	var_3_object->AddItem(var_219_bool, var_233_object, 4, 1); //@t
	if(!var_219_bool) { //@nz
		var_215_bool = false;
		return 4;
	}
	var_4_object->RemoveItem(var_218_int, 1); //@t
	func_810(var_219_bool, 4);
	var_215_bool = true;
}


void func_237(object var_4_object, object var_125_object)
{
	int var_131_int; object var_134_object;
	var_4_object->GetItemCount(var_131_int); //@t
	int var_132_int = 0;
	int var_133_int = 0;
	
	while(var_133_int < var_131_int) {
		var_4_object->GetItem(var_134_object, var_133_int); //@t
		bool var_137_bool; object var_138_object;
		var_134_object = var_138_object;
		func_184(var_137_bool, var_138_object);
		if(var_137_bool != 0)
			var_134_object = var_125_object;
		var_134_object = null;
		var_133_int += 1;
	}
	
	object var_135_object = null;
	var_135_object = var_125_object;
}
EMIT "Stack[-1] = 0";


void func_1007(int var_80_int, object var_81_object)
{
	int var_83_int;
	var_81_object->GetItemID(var_83_int);
	var_83_int = var_80_int;
}


void func_1012(string var_74_string, object var_75_object)
{
	object var_81_object;
	var_75_object = var_81_object;
	int var_80_int;
	func_1007(var_80_int, var_81_object);
	int var_78_int;
	var_80_int = var_78_int;
	string var_79_string;
	@GetInvItemName(var_79_string, var_78_int);
	var_79_string = var_74_string;
}


void func_506(object var_4_object, bool var_64_bool)
{
	object var_84_object; bool var_85_bool; float var_88_float; float var_90_float; float var_93_float; float var_94_float; float var_95_float; float var_96_float; bool var_98_bool;
	object var_99_object;
	func_213(var_98_bool, var_99_object);
	object var_82_object;
	var_99_object = var_82_object;
	object var_125_object;
	func_237(var_98_bool, var_125_object);
	object var_83_object;
	var_125_object = var_83_object;
	bool var_147_bool = true;
	var_148_bool = !var_82_object; //@nz
	if(var_148_bool != 1) {
		var_149_bool = !var_83_object; //@nz
		if(var_149_bool != 1)
			var_147_bool = false;
	}
	if(var_147_bool != 0) {
		var_64_bool = false;
		return 34;
	}
	int var_150_int; object var_151_object;
	var_83_object = var_151_object;
	func_195(var_150_int, var_151_object);
	if(var_150_int == 5) {
		var_4_object->RemoveAllItems(); //@t
		@CreateInvItem(var_84_object);
		var_84_object->SetItemName("burah_serum");
		var_4_object->AddItem(var_85_bool, var_84_object, 0, 1); //@t
		var_64_bool = true;
		return 34;
	EMIT "Stack[-15] = 0";
	}
	float var_86_float;
	var_82_object->GetProperty(var_86_float, "im_inc");
	float var_87_float;
	var_82_object->GetProperty(var_87_float, "hl_inc");
	int var_170_int; object var_171_object;
	var_83_object = var_171_object;
	func_195(var_170_int, var_171_object);
	if(var_170_int == 1) {
		var_88_float = 1;
		var_87_float = var_90_float;
	}
	int var_174_int; object var_175_object;
	var_83_object = var_175_object;
	func_195(var_174_int, var_175_object);
	if(var_174_int == 2) {
		var_93_float = 1.0 * (1.0 - var_86_float);
		var_93_float = var_88_float;
		var_87_float = var_90_float;
	}
	int var_181_int; object var_182_object;
	var_83_object = var_182_object;
	func_195(var_181_int, var_182_object);
	if(var_181_int == 3) {
		var_94_float = 0.8 * (1.0 - var_86_float);
		var_94_float = var_88_float;
		var_87_float = var_90_float;
	}
	int var_188_int; object var_189_object;
	var_83_object = var_189_object;
	func_195(var_188_int, var_189_object);
	if(var_188_int == 4) {
		var_95_float = 0.5 * (1.0 - var_86_float);
		var_95_float = var_88_float;
		var_87_float = var_90_float;
	}
	int var_195_int; object var_196_object;
	var_83_object = var_196_object;
	func_195(var_195_int, var_196_object);
	if(var_195_int == 6) {
		var_96_float = 0.3 * (1.0 - var_86_float);
		var_96_float = var_88_float;
		var_87_float = var_90_float;
	}
	if(var_88_float > 1)
		var_88_float = 1;
	if(var_88_float < 0.03)
		var_88_float = 0.03;
	if(var_90_float < -1)
		var_90_float = -1;
	var_4_object->RemoveAllItems(); //@t
	object var_97_object;
	@CreateInvItem(var_97_object);
	var_97_object->SetItemName("organ_combination");
	var_97_object->SetProperty("DiseaseRate", var_88_float);
	var_97_object->SetProperty("HealthIncrease", var_90_float);
	var_4_object->AddItem(var_98_bool, var_97_object, 0, 1); //@t
	var_64_bool = true;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-16] = 0";
EMIT "Stack[-17] = 0";


