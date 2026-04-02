maintask task_0
{
	void init(int var_0_int, int var_1_int, int var_2_int, int var_3_int, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, object var_22_object, object var_23_object, int var_24_int, int var_25_int, object var_26_object)
	{
		@GetContainer(var_26_object);
		@CreateObjectVector(var_20_object);
		@CreateObjectVector(var_21_object);
		@CreateObjectVector(var_4_object);
		@CreateIntVector(var_5_object);
		@CreateIntVector(var_6_object);
		@CreateObjectVector(var_7_object);
		@CreateIntVector(var_8_object);
		@CreateIntVector(var_9_object);
		@CreateObjectVector(var_10_object);
		@CreateIntVector(var_11_object);
		@CreateObjectVector(var_12_object);
		@CreateIntVector(var_13_object);
		@CreateObjectVector(var_14_object);
		@CreateIntVector(var_15_object);
		@CreateObjectVector(var_16_object);
		@CreateIntVector(var_17_object);
		@CreateObjectVector(var_18_object);
		@CreateIntVector(var_19_object);
		int var_29_int;
		func_1558(var_29_int);
		float var_27_float;
		float var_28_float;
		func_270(var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_int, var_29_int, var_26_object, var_27_float, var_28_float);
		@GetGameTime(var_28_float);
		var_24_int = 1 + (var_28_float / 24);
		@ShowCursor();
		@SetCursor("default");
		@CaptureKeyboard();
		@ProcessEvents();
	}

	// @pe
	void event_100(int var_0_int, int var_1_int, int var_2_int, int var_3_int, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, object var_22_object, object var_23_object, int var_24_int, int var_25_int, object var_26_object, int var_27_int)
	{
		@DestroyWindow();
	}

	void event_200(int var_0_int, int var_1_int, int var_2_int, int var_3_int, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, object var_22_object, object var_23_object, int var_24_int, int var_25_int, object var_26_object, int var_27_int, string var_28_string, object var_29_object)
	{
		int var_30_int;
		int var_33_int;
		var_27_int = var_33_int;
		string var_34_string;
		var_28_string = var_34_string;
		func_1470(var_33_int, var_34_string);
		int var_31_int;
		int var_32_int = var_31_int;
		if(var_31_int != -1) {
			if(var_27_int == 0) {
				int var_57_int;
				func_1131(var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_57_int, var_57_int);
			} else {
				int var_404_int;
				var_31_int = var_404_int;
				func_1197(var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_404_int);
		}
			int var_498_int; int var_499_int; string var_500_string;
			var_27_int = var_499_int;
			var_28_string = var_500_string;
			func_1488(var_499_int, var_500_string);
			var_498_int = var_31_int;
			if(var_31_int != -1) {
				if(var_27_int == 0) {
					int var_513_int;
					func_1261(var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_513_int, var_513_int);
				} else {
					int var_563_int;
					var_31_int = var_563_int;
					func_1324(var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_563_int);
			}
				if(var_28_string == "cancel_button") {
					func_270(var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int);
					return 2;
				}
				if(var_28_string == "background_left") {
					@Trace("background_left" + var_27_int);
					var_0_int += (2 * var_27_int);
					func_628(var_28_string, var_29_object, var_30_int, var_31_int);
				}
				if(var_28_string == "background_right") {
					@Trace("background_right" + var_27_int);
					var_1_int += (2 * var_27_int);
					func_719(var_28_string, var_29_object, var_30_int, var_31_int);
				}
				if(var_28_string == "l_scroll_button_top") {
					var_0_int -= 2;
					func_628(var_28_string, var_29_object, var_30_int, var_31_int);
					return 2;
				}
				if(var_28_string == "l_scroll_button_bottom") {
					var_0_int += 2;
					func_628(var_28_string, var_29_object, var_30_int, var_31_int);
					return 2;
				}
				if(var_28_string == "r_scroll_button_top") {
					var_1_int -= 2;
					func_719(var_28_string, var_29_object, var_30_int, var_31_int);
					return 2;
				}
				if(var_28_string == "r_scroll_button_bottom") {
					var_1_int += 2;
					func_719(var_28_string, var_29_object, var_30_int, var_31_int);
					return 2;
				}
				if(var_28_string == "l_scrollbar") {
					int var_789_int;
					func_592(var_31_int, var_789_int);
					var_0_int = ((var_789_int * var_27_int) / 100.0) + 0.5;
					var_0_int *= 2;
					func_628(var_28_string, var_29_object, var_30_int, var_31_int);
					return 2;
				}
				if(var_28_string == "r_scrollbar") {
					int var_810_int;
					func_610(var_31_int, var_810_int);
					var_1_int = ((var_810_int * var_27_int) / 100.0) + 0.5;
					var_1_int *= 2;
					func_719(var_28_string, var_29_object, var_30_int, var_31_int);
					return 2;
				}
				if(var_28_string == "ok_button") {
					func_818(var_27_int, var_28_string, var_29_object, var_30_int, var_31_int);
					return 2;
				}
				return 2;
			}
			return 2;
		}
	
	}

}


void func_0(object var_20_object, object var_21_object, object var_257_object)
{
	int var_261_int; object var_262_object;
	var_21_object->size(var_261_int); //@t
	int var_263_int = 0;
	
	while(var_263_int < var_261_int) {
		var_21_object->get(var_262_object, var_263_int); //@t
		bool var_265_bool; object var_266_object; object var_267_object;
		var_262_object = var_266_object;
		var_257_object = var_267_object;
		func_1735(var_265_bool, var_266_object, var_267_object);
		if(var_265_bool != 0)
			var_21_object->remove(var_263_int); //@t
		var_263_int += 1;
	}
	
	var_20_object->add(var_257_object); //@t
}
EMIT "Stack[-2] = 0";


void func_1668(int var_207_int, object var_208_object)
{
	object var_212_object;
	var_208_object = var_212_object;
	int var_211_int;
	func_1574(var_211_int, var_212_object);
	int var_210_int;
	@GetItemMaxStackSize(var_211_int, var_210_int);
	var_210_int = var_207_int;
}


void func_1798(bool var_846_bool, object var_847_object, object var_848_object, int var_849_int)
{
	int var_855_int; object var_856_object;
	var_847_object->GetItemCount(var_855_int, var_849_int);
	int var_857_int = 0;
	
	while(var_857_int < var_855_int) {
		var_847_object->GetItem(var_856_object, var_857_int, var_849_int);
		bool var_859_bool; object var_860_object; object var_861_object;
		var_848_object = var_860_object;
		var_856_object = var_861_object;
		func_1735(var_859_bool, var_860_object, var_861_object);
		if(var_859_bool != 0) {
			var_847_object->RemoveItem(var_857_int, 1, var_849_int);
			var_846_bool = true;
		}
		var_857_int += 1;
	}
	
	var_846_bool = false;
}
EMIT "Stack[-2] = 0";


void func_1416(int var_1_int, object var_6_object, int var_308_int, int var_309_int)
{
	int var_312_int;
	var_6_object->size(var_312_int); //@t
	if((var_309_int + var_1_int) >= var_312_int)
		var_308_int = 0;
	int var_313_int;
	var_6_object->get(var_313_int, (var_309_int + var_1_int)); //@t
	var_313_int = var_308_int;
}


void func_1034(bool var_195_bool, object var_196_object, object var_197_object, object var_198_object)
{
	int var_203_int; object var_204_object; int var_205_int; int var_206_int;
	var_197_object->size(var_203_int);
	int var_207_int; object var_208_object;
	var_196_object = var_208_object;
	func_1668(var_207_int, var_208_object);
	if(var_207_int > 1) {
		var_205_int = 0;

		for(;;) {
			if(!(var_205_int < var_203_int)) goto Label_1072;
			var_197_object->get(var_204_object, var_205_int);
			var_198_object->get(var_206_int, var_205_int);
			bool var_216_bool; object var_217_object; object var_218_object;
			var_196_object = var_217_object;
			var_204_object = var_218_object;
			func_1740(var_216_bool, var_217_object, var_218_object);
			if(var_216_bool != 0) {
				int var_224_int; object var_225_object;
				var_196_object = var_225_object;
				func_1668(var_224_int, var_225_object);
				if(var_206_int < var_224_int)
					var_198_object->set(var_205_int, (var_206_int + 1));
				var_195_bool = true;
				return 8;
			}
			var_205_int += 1;
		}
	}
Label_1072:
	if(var_203_int < 12) {
		var_197_object->add(var_196_object);
		var_198_object->add(1);
		var_195_bool = true;
		return 8;
	}
	var_195_bool = false;
}
EMIT "Stack[-3] = 0";


void func_524(object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object)
{
	func_555(0, var_10_object, var_11_object);
	func_555(1, var_12_object, var_13_object);
	func_555(2, var_14_object, var_15_object);
	func_555(3, var_16_object, var_17_object);
	func_555(4, var_18_object, var_19_object);
}


void func_1677(int var_53_int)
{
	object var_57_object;
	@GetContainer(var_57_object);
	int var_56_int;
	var_57_object->GetItemCount(var_56_int);
	var_56_int = var_53_int;
}
EMIT "Stack[-1] = 0";


void func_270(int var_0_int, int var_1_int, int var_2_int, int var_3_int, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, int var_25_int)
{
	var_0_int = 0;
	var_1_int = 0;
	var_3_int = 0;
	if(var_25_int == 0)
		@GetPlayerMoneyCount(var_2_int);
	else
		var_2_int = 0;
	var_20_object->clear(); //@t
	var_21_object->clear(); //@t
	var_4_object->clear(); //@t
	var_5_object->clear(); //@t
	var_6_object->clear(); //@t
	var_7_object->clear(); //@t
	var_8_object->clear(); //@t
	var_9_object->clear(); //@t
	var_10_object->clear(); //@t
	var_11_object->clear(); //@t
	var_12_object->clear(); //@t
	var_13_object->clear(); //@t
	var_14_object->clear(); //@t
	var_15_object->clear(); //@t
	var_16_object->clear(); //@t
	var_17_object->clear(); //@t
	var_18_object->clear(); //@t
	var_19_object->clear(); //@t
	int var_39_int;
	int var_40_int;
	func_493(var_28_float, var_39_int, var_40_int);
	func_367();
	func_524(var_21_object, var_22_object, var_23_object, var_24_int, var_25_int, var_26_object, var_27_float, var_28_float, var_39_int, var_40_int);
	func_628(var_27_float, var_28_float, var_39_int, var_40_int);
	func_814(var_40_int);
	func_719(var_27_float, var_28_float, var_39_int, var_40_int);
	func_810(var_40_int);
	var_7_object->size(var_40_int); //@t
	if(var_40_int <= 18)
		@SendMessage(16384, "l_scrollbar");
	else
		@SendMessage(0, "l_scrollbar");

	var_4_object->size(var_40_int); //@t
	if(var_40_int <= 18)
		@SendMessage(16384, "r_scrollbar");
	else
		@SendMessage(0, "r_scrollbar");

	
}


void func_912(object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, bool var_182_bool, object var_183_object)
{
	object var_187_object;
	var_183_object = var_187_object;
	int var_186_int;
	func_1658(var_186_int, var_187_object);
	int var_185_int;
	var_186_int = var_185_int;
	if(var_185_int == 0) {
		bool var_195_bool; object var_196_object;
		var_183_object = var_196_object;
		func_1034(var_195_bool, var_196_object, var_10_object, var_11_object);
		var_195_bool = var_182_bool;
		return 2;
	EMIT "GOTO 0x3c5";
	}
	if(var_185_int == 1) {
		bool var_235_bool; object var_236_object;
		var_183_object = var_236_object;
		func_1034(var_235_bool, var_236_object, var_12_object, var_13_object);
		var_235_bool = var_182_bool;
		return 2;
	EMIT "GOTO 0x3c5";
	}
	if(var_185_int == 2) {
		bool var_241_bool; object var_242_object;
		var_183_object = var_242_object;
		func_1034(var_241_bool, var_242_object, var_14_object, var_15_object);
		var_241_bool = var_182_bool;
		return 2;
	EMIT "GOTO 0x3c5";
	}
	if(var_185_int == 3) {
		bool var_247_bool; object var_248_object;
		var_183_object = var_248_object;
		func_1034(var_247_bool, var_248_object, var_16_object, var_17_object);
		var_247_bool = var_182_bool;
		return 2;
	}
	bool var_251_bool; object var_252_object;
	var_183_object = var_252_object;
	func_1034(var_251_bool, var_252_object, var_18_object, var_19_object);
	var_251_bool = var_182_bool;
}


void func_1685(int var_83_int, int var_84_int)
{
	object var_88_object;
	@GetPlayerContainer(var_88_object);
	int var_87_int;
	var_88_object->GetItemCount(var_87_int, var_84_int);
	var_87_int = var_83_int;
}
EMIT "Stack[-1] = 0";


void func_1558(int var_29_int)
{
	object var_33_object;
	@GetContainer(var_33_object);
	bool var_34_bool;
	var_33_object->HasProperty("barter", var_34_bool);
	if(!var_34_bool) //@nz
		var_29_int = 0;
	int var_35_int;
	var_33_object->GetProperty("barter", var_35_int);
	var_35_int = var_29_int;
}
EMIT "Stack[-3] = 0";


void func_1429(int var_126_int)
{
	float var_128_float;
	@GetGameTime(var_128_float);
	var_126_int = 1 + (var_128_float / 24);
}


void func_24(object var_20_object, object var_21_object, object var_476_object)
{
	int var_480_int; object var_481_object;
	var_20_object->size(var_480_int); //@t
	int var_482_int = 0;
	
	while(var_482_int < var_480_int) {
		var_20_object->get(var_481_object, var_482_int); //@t
		bool var_484_bool; object var_485_object; object var_486_object;
		var_481_object = var_485_object;
		var_476_object = var_486_object;
		func_1735(var_484_bool, var_485_object, var_486_object);
		if(var_484_bool != 0)
			var_20_object->remove(var_482_int); //@t
		var_482_int += 1;
	}
	
	var_21_object->add(var_476_object); //@t
}
EMIT "Stack[-2] = 0";


void func_1693(object var_105_object, int var_106_int, int var_107_int)
{
	object var_110_object;
	@GetPlayerContainer(var_110_object);
	object var_111_object;
	var_110_object->GetItem(var_111_object, var_107_int, var_106_int);
	var_111_object = var_105_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1438(string var_254_string, int var_255_int)
{
	if((var_255_int + 1) < 10)
		var_254_string = "l_slot0" + (var_255_int + 1);
	var_254_string = "l_slot" + (var_255_int + 1);
}


void func_1823(bool var_866_bool, object var_867_object, object var_868_object, int var_869_int)
{
	bool var_871_bool;
	var_867_object->AddItem(var_871_bool, var_868_object, var_869_int, 1);
	var_871_bool = var_866_bool;
}


void func_418(object var_4_object, object var_5_object, object var_6_object, int var_25_int, int var_73_int, bool var_74_bool)
{
	object var_79_object; int var_81_int; int var_82_int;
	int var_84_int;
	var_73_int = var_84_int;
	int var_83_int;
	func_1685(var_83_int, var_84_int);
	int var_80_int;
	var_83_int = var_80_int;
	
	for(;;) {
		if(0 < var_80_int) {
			bool var_90_bool; int var_91_int; int var_92_int;
			var_73_int = var_91_int;
			var_82_int = var_92_int;
			func_1710(var_90_bool, var_91_int, var_92_int);
			if(var_90_bool != 0) {
			} else {
			int var_98_int; int var_99_int; int var_100_int;
			var_73_int = var_99_int;
			var_82_int = var_100_int;
			func_1702(var_98_int, var_99_int, var_100_int);
			var_98_int = var_81_int;
			object var_105_object; int var_106_int; int var_107_int;
			var_73_int = var_106_int;
			var_82_int = var_107_int;
			func_1693(var_105_object, var_106_int, var_107_int);
			var_105_object = var_79_object;
			bool var_112_bool = false;
			if(var_74_bool != 0) {
				bool var_114_bool; object var_115_object;
				func_1748(var_114_bool, var_115_object, var_25_int, true);
				if(var_114_bool != 0)
					var_112_bool = true;
			}
			if(var_112_bool != 0) {
				var_4_object->add(var_115_object); //@t
				var_5_object->add(var_81_int); //@t
				var_6_object->add(0); //@t
				goto Label_488;
			}
			bool var_144_bool = false;
			if(!var_74_bool) { //@nz
				bool var_146_bool; object var_147_object;
				var_79_object = var_147_object;
				func_1748(var_146_bool, var_147_object, var_25_int, true);
				if(!var_146_bool) //@nz
					var_144_bool = true;
			}
			if(var_144_bool == 0) goto Label_488;
			var_4_object->add(var_79_object); //@t
			var_5_object->add(var_81_int); //@t
			var_6_object->add(0); //@t
		}
		}
	Label_488:
		var_82_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


void func_1702(int var_98_int, int var_99_int, int var_100_int)
{
	object var_103_object;
	@GetPlayerContainer(var_103_object);
	int var_104_int;
	var_103_object->GetItemAmount(var_104_int, var_100_int, var_99_int);
	var_104_int = var_98_int;
}
EMIT "Stack[-2] = 0";


void func_1574(int var_124_int, object var_125_object)
{
	int var_127_int;
	var_125_object->GetItemID(var_127_int);
	var_127_int = var_124_int;
}


void func_810(int var_2_int)
{
	@SendMessage(var_2_int, "r_money_slot");
}


void func_555(int var_170_int, object var_171_object, object var_172_object)
{
	object var_177_object; int var_179_int; int var_180_int;
	int var_182_int;
	var_170_int = var_182_int;
	int var_181_int;
	func_1685(var_181_int, var_182_int);
	int var_178_int;
	var_181_int = var_178_int;
	
	for(;;) {
		if(0 < var_178_int) {
			bool var_184_bool; int var_185_int; int var_186_int;
			var_170_int = var_185_int;
			var_180_int = var_186_int;
			func_1710(var_184_bool, var_185_int, var_186_int);
			if(var_184_bool != 0) {
			} else {
			int var_188_int; int var_189_int; int var_190_int;
			var_170_int = var_189_int;
			var_180_int = var_190_int;
			func_1702(var_188_int, var_189_int, var_190_int);
			var_188_int = var_179_int;
			object var_191_object; int var_192_int; int var_193_int;
			var_170_int = var_192_int;
			var_180_int = var_193_int;
			func_1693(var_191_object, var_192_int, var_193_int);
			var_191_object = var_177_object;
			var_171_object->add(var_177_object);
			var_172_object->add(var_179_int);
		}
		}
		var_180_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


void func_1324(int var_1_int, int var_2_int, object var_4_object, object var_5_object, object var_6_object, int var_24_int, int var_25_int, object var_26_object, int var_563_int)
{
	int var_564_int; object var_565_object; int var_566_int; int var_567_int; int var_568_int; int var_569_int; int var_573_int;
	var_6_object->size(var_569_int); //@t
	if((var_563_int + var_1_int) >= var_569_int)
		return 10;
	object var_570_object;
	var_4_object->get(var_570_object, (var_563_int + var_1_int)); //@t
	bool var_577_bool; object var_578_object;
	var_570_object = var_578_object;
	func_1748(var_577_bool, var_578_object, var_25_int, true);
	if(var_577_bool != 0)
		return 10;
	int var_571_int;
	var_6_object->get(var_571_int, (var_563_int + var_1_int)); //@t
	int var_572_int;
	var_5_object->get(var_572_int, (var_563_int + var_1_int)); //@t
	if(var_571_int > 0) {
		int var_585_int; object var_586_object;
		var_570_object = var_586_object;
		func_1579(var_585_int, var_586_object, var_25_int);
		float var_588_float;
		func_1506(var_588_float, var_26_object, var_24_int, var_25_int);
		var_573_int = var_585_int * var_588_float;
		if(var_573_int <= var_2_int) {
			bool var_593_bool; object var_594_object;
			func_912(var_564_int, var_565_object, var_566_int, var_567_int, var_568_int, var_569_int, var_594_object, var_571_int, var_572_int, var_573_int, var_593_bool, var_594_object);
			if(var_593_bool != 0) {
				var_571_int += -1;
				object var_596_object;
				var_570_object = var_596_object;
				func_0(var_572_int, var_573_int, var_596_object);
				var_6_object->set((var_563_int + var_1_int), var_571_int); //@t
				int var_599_int; object var_600_object;
				var_570_object = var_600_object;
				func_1579(var_599_int, var_600_object, var_25_int);
				var_602_int = -var_599_int;
				float var_603_float;
				func_1506(var_603_float, var_26_object, var_24_int, var_25_int);
				func_1121(var_572_int, var_573_int, (var_602_int * var_603_float));
			}
		}
	}
	func_628(var_570_object, var_571_int, var_572_int, var_573_int);
	func_719(var_570_object, var_571_int, var_572_int, var_573_int);
}
EMIT "Stack[-4] = 0";


void func_1197(int var_0_int, object var_7_object, object var_8_object, object var_9_object, int var_24_int, int var_25_int, object var_26_object, int var_404_int)
{
	int var_405_int; object var_406_object; int var_407_int; int var_408_int; int var_409_int; int var_410_int; int var_414_int;
	var_9_object->size(var_410_int); //@t
	if((var_404_int + var_0_int) >= var_410_int)
		return 10;
	object var_411_object;
	var_7_object->get(var_411_object, (var_404_int + var_0_int)); //@t
	bool var_418_bool; object var_419_object;
	var_411_object = var_419_object;
	func_1748(var_418_bool, var_419_object, var_25_int, false);
	if(var_418_bool != 0)
		return 10;
	int var_412_int;
	var_9_object->get(var_412_int, (var_404_int + var_0_int)); //@t
	int var_413_int;
	var_8_object->get(var_413_int, (var_404_int + var_0_int)); //@t
	if(var_412_int > 0) {
		bool var_426_bool; object var_427_object;
		func_973(var_405_int, var_406_object, var_407_int, var_408_int, var_409_int, var_410_int, var_427_object, var_412_int, var_413_int, var_414_int, var_426_bool, var_427_object);
		object var_476_object;
		var_411_object = var_476_object;
		func_24(var_413_int, var_414_int, var_476_object);
		var_412_int += -1;
		var_9_object->set((var_404_int + var_0_int), var_412_int); //@t
		int var_490_int; object var_491_object;
		var_411_object = var_491_object;
		func_1579(var_490_int, var_491_object, var_25_int);
		float var_493_float;
		func_1532(var_493_float, var_26_object, var_24_int, var_25_int);
		var_414_int = var_490_int * var_493_float;
		int var_497_int;
		var_414_int = var_497_int;
		func_1121(var_413_int, var_414_int, var_497_int);
	}
	func_628(var_411_object, var_412_int, var_413_int, var_414_int);
	func_719(var_411_object, var_412_int, var_413_int, var_414_int);
}
EMIT "Stack[-4] = 0";


void func_814(int var_3_int)
{
	@SendMessage(var_3_int, "l_money_slot");
}


void func_1710(bool var_90_bool, int var_91_int, int var_92_int)
{
	object var_95_object;
	@GetPlayerContainer(var_95_object);
	bool var_96_bool;
	var_95_object->IsItemSelected(var_96_bool, var_92_int, var_91_int);
	var_96_bool = var_90_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_1454(string var_326_string, int var_327_int)
{
	if((var_327_int + 1) < 10)
		var_326_string = "r_slot0" + (var_327_int + 1);
	var_326_string = "r_slot" + (var_327_int + 1);
}


void func_1579(int var_103_int, object var_104_object, int var_105_int)
{
	int var_115_int; int var_116_int; int var_117_int; string var_118_string; bool var_119_bool; bool var_120_bool; int var_121_int; bool var_122_bool; int var_123_int;
	if(var_105_int == 0) {
		int var_126_int;
		func_1429(var_126_int);
		var_126_int = var_115_int;
		var_116_int = 0;
		var_117_int = 1;

		for(;;) {
			if(var_117_int <= var_115_int) {
				var_118_string = "Price";
				if(var_117_int != 1)
					var_118_string += var_117_int;
				int var_135_int; object var_136_object;
				var_104_object = var_136_object;
				func_1574(var_135_int, var_136_object);
				@HasInvItemProperty(var_119_bool, var_135_int, var_118_string);
				if(!var_119_bool) { //@nz
				} else {
				int var_139_int; object var_140_object;
				var_104_object = var_140_object;
				func_1574(var_139_int, var_140_object);
				@GetInvItemProperty(var_116_int, var_139_int, var_118_string);
			}
			var_104_object->HasProperty(var_120_bool, "durability");
			if(var_120_bool != 0) {
				var_104_object->GetProperty(var_121_int, "durability");
				var_116_int *= (0.5 * (1.0 + (var_121_int / 100.0)));
			}
			var_116_int = var_103_int;
			return 18;
	}
		int var_150_int; object var_151_object;
		var_104_object = var_151_object;
		func_1574(var_150_int, var_151_object);
		@HasInvItemProperty(var_122_bool, var_150_int, ("BarterPrice" + var_105_int));
		if(!var_122_bool) //@nz
			return 18;
		int var_155_int; object var_156_object;
		var_104_object = var_156_object;
		func_1574(var_155_int, var_156_object);
		@GetInvItemProperty(var_123_int, var_155_int, ("BarterPrice" + var_105_int));
		if(var_123_int > 0) {
			var_123_int = 0;
			return 18;
		}
		var_103_int = -var_123_int;
		return 18;
		}
		var_117_int += 1;
	}
	
}


void func_818(int var_2_int, int var_3_int, object var_20_object, object var_21_object, int var_25_int)
{
	bool var_839_bool; object var_840_object; object var_841_object;
	@GetContainer(var_841_object);
	object var_842_object;
	@GetPlayerContainer(var_842_object);
	int var_838_int;
	var_21_object->size(var_838_int); //@t
	int var_843_int = 0;
	
	while(var_843_int < var_838_int) {
		var_21_object->get(var_840_object, var_843_int); //@t
		bool var_846_bool; object var_847_object; object var_848_object; int var_849_int;
		var_842_object = var_847_object;
		var_840_object = var_848_object;
		int var_850_int; object var_851_object;
		var_840_object = var_851_object;
		func_1658(var_850_int, var_851_object);
		var_850_int = var_849_int;
		func_1798(var_846_bool, var_847_object, var_848_object, var_849_int);
		var_846_bool = var_839_bool;
		if(!var_839_bool) //@nz
			@Trace("Error: failed to remove item");
		bool var_866_bool; object var_867_object; object var_868_object;
		var_841_object = var_867_object;
		func_1823(var_866_bool, var_867_object, var_868_object, 0);
		var_866_bool = var_839_bool;
		if(!var_839_bool) //@nz
			@Trace("Error: failed to add item");
		var_843_int += 1;
	}
	
	var_20_object->size(var_838_int); //@t
	int var_844_int = 0;
	
	while(var_844_int < var_838_int) {
		var_20_object->get(var_868_object, var_844_int); //@t
		bool var_877_bool; object var_878_object; object var_879_object;
		var_841_object = var_878_object;
		var_840_object = var_879_object;
		func_1798(var_877_bool, var_878_object, var_879_object, 0);
		var_877_bool = var_839_bool;
		if(!var_839_bool) //@nz
			@Trace("Error: failed to remove item");
		bool var_883_bool; object var_884_object; object var_885_object; int var_886_int;
		var_842_object = var_884_object;
		var_840_object = var_885_object;
		int var_887_int; object var_888_object;
		var_840_object = var_888_object;
		func_1658(var_887_int, var_888_object);
		var_887_int = var_886_int;
		func_1823(var_883_bool, var_884_object, var_885_object, var_886_int);
		var_883_bool = var_839_bool;
		if(!var_839_bool) //@nz
			@Trace("Error: failed to add item");
		var_844_int += 1;
	}
	
	if(var_25_int == 0)
		@SetPlayerMoneyCount(var_2_int);
	var_3_int = 0;
	int var_831_int;
	bool var_832_bool;
	object var_833_object;
	object var_834_object;
	object var_835_object;
	int var_836_int;
	int var_837_int;
	func_270(var_23_object, var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_831_int, var_832_bool, var_833_object, var_834_object, var_835_object, var_836_int, var_837_int, var_838_int, var_839_bool, var_840_object, var_841_object, var_842_object, var_843_int, var_844_int);
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


void func_1718(object var_65_object, int var_66_int)
{
	object var_69_object;
	@GetContainer(var_69_object);
	object var_70_object;
	var_69_object->GetItem(var_70_object, var_66_int);
	var_70_object = var_65_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1085(bool var_434_bool, object var_435_object, object var_436_object, object var_437_object)
{
	int var_442_int; object var_443_object; int var_445_int;
	var_436_object->size(var_442_int);
	int var_444_int = 0;
	
	for(;;) {
		if(!(var_444_int < var_442_int)) goto Label_1118;
		var_436_object->get(var_443_object, var_444_int);
		var_437_object->get(var_445_int, var_444_int);
		bool var_447_bool; object var_448_object; object var_449_object;
		var_435_object = var_448_object;
		var_443_object = var_449_object;
		func_1740(var_447_bool, var_448_object, var_449_object);
		if(var_447_bool != 0) {
			var_445_int += -1;
			if(var_445_int == 0) {
				var_436_object->remove(var_444_int);
				var_437_object->remove(var_444_int);
				break;
			}
			var_437_object->set(var_444_int, var_445_int);
		}
		var_444_int += 1;
	}
	var_434_bool = true;
	
Label_1118:
	var_434_bool = false;
}
EMIT "Stack[-3] = 0";


void func_1470(int var_32_int, string var_34_string)
{
	int var_36_int;
	
	while(0 < 18) {
		string var_39_string; int var_40_int;
		var_36_int = var_40_int;
		func_1438(var_39_string, var_40_int);
		if(var_34_string == var_39_string)
			var_36_int = var_32_int;
		var_36_int += 1;
	}
	
	var_32_int = -1;
}


void func_1727(int var_59_int, int var_60_int)
{
	object var_63_object;
	@GetContainer(var_63_object);
	int var_64_int;
	var_63_object->GetItemAmount(var_64_int, var_60_int);
	var_64_int = var_59_int;
}
EMIT "Stack[-2] = 0";


void func_1735(bool var_219_bool, object var_220_object, object var_221_object)
{
	bool var_223_bool;
	var_220_object->Compare(var_223_bool, var_221_object);
	var_223_bool = var_219_bool;
}


// @pe
void func_1740(bool var_216_bool, object var_217_object, object var_218_object)
{
	object var_220_object;
	var_217_object = var_220_object;
	object var_221_object;
	var_218_object = var_221_object;
	bool var_219_bool;
	func_1735(var_219_bool, var_220_object, var_221_object);
	var_219_bool = var_216_bool;
}


void func_973(object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, bool var_426_bool, object var_427_object)
{
	object var_431_object;
	var_427_object = var_431_object;
	int var_430_int;
	func_1658(var_430_int, var_431_object);
	int var_429_int;
	var_430_int = var_429_int;
	if(var_429_int == 0) {
		bool var_434_bool; object var_435_object;
		var_427_object = var_435_object;
		func_1085(var_434_bool, var_435_object, var_10_object, var_11_object);
		var_434_bool = var_426_bool;
		return 2;
	EMIT "GOTO 0x402";
	}
	if(var_429_int == 1) {
		bool var_456_bool; object var_457_object;
		var_427_object = var_457_object;
		func_1085(var_456_bool, var_457_object, var_12_object, var_13_object);
		var_456_bool = var_426_bool;
		return 2;
	EMIT "GOTO 0x402";
	}
	if(var_429_int == 2) {
		bool var_462_bool; object var_463_object;
		var_427_object = var_463_object;
		func_1085(var_462_bool, var_463_object, var_14_object, var_15_object);
		var_462_bool = var_426_bool;
		return 2;
	EMIT "GOTO 0x402";
	}
	if(var_429_int == 3) {
		bool var_468_bool; object var_469_object;
		var_427_object = var_469_object;
		func_1085(var_468_bool, var_469_object, var_16_object, var_17_object);
		var_468_bool = var_426_bool;
		return 2;
	}
	bool var_472_bool; object var_473_object;
	var_427_object = var_473_object;
	func_1085(var_472_bool, var_473_object, var_18_object, var_19_object);
	var_472_bool = var_426_bool;
}


void func_719(int var_1_int, object var_4_object, object var_5_object, int var_25_int)
{
	int var_285_int; object var_286_object; int var_287_int; int var_288_int; int var_290_int; object var_291_object;
	var_4_object->size(var_285_int); //@t
	if((var_1_int + 18) > var_285_int) {
		var_296_int = var_285_int % 2;
		if(var_296_int == 0)
			var_1_int -= ((var_1_int + 18) - var_285_int);
		else
			var_1_int -= (((var_1_int + 18) - var_285_int) - 1);
	}
	if(var_1_int < 0)
		var_1_int = 0;
	int var_289_int = var_1_int;
	
	for(;;) {
		if(var_289_int < (var_1_int + 18)) {
			if(var_289_int < var_285_int) {
				var_4_object->get(var_286_object, var_289_int); //@t
				var_5_object->get(var_288_int, var_289_int); //@t
				var_287_int = 0;
				int var_308_int;
				func_1416(var_290_int, var_291_object, var_308_int, (var_289_int - var_1_int));
				var_308_int = var_290_int;
				if(var_290_int > 0)
					var_287_int = var_287_int | 16384;
				bool var_320_bool; object var_321_object;
				func_1748(var_320_bool, var_321_object, var_25_int, true);
				if(var_320_bool != 0)
					var_287_int = var_287_int | 131072;
				@CreateIntVector(var_291_object);
				var_291_object->add(var_290_int);
				var_291_object->add(var_288_int);
				string var_326_string;
				func_1454(var_326_string, (var_289_int - var_1_int));
				@SendMessage(65536, var_326_string, var_291_object);
				string var_338_string;
				func_1454(var_338_string, (var_289_int - var_1_int));
				@SendMessage(var_287_int, var_338_string, var_321_object);
				var_291_object = null;
			} else {
			string var_342_string;
			func_1454(var_342_string, (var_289_int - var_1_int));
			@SendMessage(32768, var_342_string);
		}

		}
		var_289_int += 1;
	}
	
}
EMIT "Stack[-6] = 0";


void func_1488(int var_498_int, string var_500_string)
{
	int var_502_int;
	
	while(0 < 18) {
		string var_505_string; int var_506_int;
		var_502_int = var_506_int;
		func_1454(var_505_string, var_506_int);
		if(var_500_string == var_505_string)
			var_502_int = var_498_int;
		var_502_int += 1;
	}
	
	var_498_int = -1;
}


void func_592(object var_7_object, int var_789_int)
{
	int var_792_int;
	var_7_object->size(var_792_int); //@t
	if(((((var_792_int + 2) - 1) / 2) - 9) < 0)
		var_789_int = 0;
	int var_793_int = var_789_int;
}


void func_1748(bool var_114_bool, object var_115_object, int var_116_int, bool var_117_bool)
{
	if(var_116_int == 0) {
		var_114_bool = false;
		return 4;
	}
	int var_124_int; object var_125_object;
	var_115_object = var_125_object;
	func_1574(var_124_int, var_125_object);
	bool var_120_bool;
	@HasInvItemProperty(var_120_bool, var_124_int, ("BarterPrice" + var_116_int));
	if(!var_120_bool) { //@nz
		var_114_bool = true;
		return 4;
	}
	int var_131_int; object var_132_object;
	var_115_object = var_132_object;
	func_1574(var_131_int, var_132_object);
	int var_121_int;
	@GetInvItemProperty(var_121_int, var_131_int, ("BarterPrice" + var_116_int));
	bool var_135_bool = false;
	if(var_117_bool != 0) {
		if(var_121_int > 0)
			var_135_bool = true;
	}
	if(var_135_bool != 0) {
		var_114_bool = false;
		return 4;
	}
	bool var_139_bool = false;
	if(!var_117_bool) { //@nz
		if(var_121_int < 0)
			var_139_bool = true;
	}
	if(var_139_bool != 0) {
		var_114_bool = false;
		return 4;
	}
	var_114_bool = true;
}


// @pe
void func_1121(int var_2_int, int var_3_int, int var_269_int)
{
	var_2_int += var_269_int;
	var_3_int -= var_269_int;
	func_810(var_269_int);
	func_814(var_269_int);
}


void func_610(object var_4_object, int var_810_int)
{
	int var_813_int;
	var_4_object->size(var_813_int); //@t
	if(((((var_813_int + 2) - 1) / 2) - 9) < 0)
		var_810_int = 0;
	int var_814_int = var_810_int;
}


void func_1506(float var_542_float, object var_543_object, int var_544_int, int var_545_int)
{
	bool var_551_bool;
	if(var_545_int != 0)
		var_542_float = 1;
	float var_549_float = 1;
	int var_550_int = 1;
	
	while(var_550_int <= var_544_int) {
		var_543_object->HasProperty(("sellf" + var_550_int), var_551_bool);
		if(var_551_bool != 0)
			var_543_object->GetProperty(("sellf" + var_550_int), var_549_float);
		var_550_int += 1;
	}
	
	var_542_float = var_549_float / 100;
}


void func_1131(int var_0_int, int var_2_int, object var_7_object, object var_8_object, object var_9_object, int var_24_int, int var_25_int, object var_26_object, int var_57_int)
{
	int var_58_int; object var_59_object; int var_60_int; int var_61_int; int var_62_int; int var_63_int; int var_67_int;
	var_9_object->size(var_63_int); //@t
	if((var_57_int + var_0_int) >= var_63_int)
		return 10;
	object var_64_object;
	var_7_object->get(var_64_object, (var_57_int + var_0_int)); //@t
	bool var_71_bool; object var_72_object;
	var_64_object = var_72_object;
	func_1748(var_71_bool, var_72_object, var_25_int, false);
	if(var_71_bool != 0)
		return 10;
	int var_65_int;
	var_9_object->get(var_65_int, (var_57_int + var_0_int)); //@t
	int var_66_int;
	var_8_object->get(var_66_int, (var_57_int + var_0_int)); //@t
	if(var_65_int < var_66_int) {
		int var_103_int; object var_104_object;
		var_64_object = var_104_object;
		func_1579(var_103_int, var_104_object, var_25_int);
		float var_161_float;
		func_1532(var_161_float, var_26_object, var_24_int, var_25_int);
		var_67_int = var_103_int * var_161_float;
		if(var_67_int <= var_2_int) {
			bool var_182_bool; object var_183_object;
			func_912(var_58_int, var_59_object, var_60_int, var_61_int, var_62_int, var_63_int, var_183_object, var_65_int, var_66_int, var_67_int, var_182_bool, var_183_object);
			if(var_182_bool != 0) {
				var_65_int += 1;
				var_9_object->set((var_57_int + var_0_int), var_65_int); //@t
				object var_257_object;
				var_64_object = var_257_object;
				func_0(var_66_int, var_67_int, var_257_object);
				int var_269_int = -var_67_int;
				func_1121(var_66_int, var_67_int, var_269_int);
			}
		}
	}
	func_628(var_64_object, var_65_int, var_66_int, var_67_int);
	func_719(var_64_object, var_65_int, var_66_int, var_67_int);
}
EMIT "Stack[-4] = 0";


void func_1261(int var_1_int, object var_4_object, object var_5_object, object var_6_object, int var_24_int, int var_25_int, object var_26_object, int var_513_int)
{
	int var_514_int; object var_515_object; int var_516_int; int var_517_int; int var_518_int; int var_519_int; int var_523_int;
	var_6_object->size(var_519_int); //@t
	if((var_513_int + var_1_int) >= var_519_int)
		return 10;
	object var_520_object;
	var_4_object->get(var_520_object, (var_513_int + var_1_int)); //@t
	bool var_527_bool; object var_528_object;
	var_520_object = var_528_object;
	func_1748(var_527_bool, var_528_object, var_25_int, true);
	if(var_527_bool != 0)
		return 10;
	int var_521_int;
	var_6_object->get(var_521_int, (var_513_int + var_1_int)); //@t
	int var_522_int;
	var_5_object->get(var_522_int, (var_513_int + var_1_int)); //@t
	if(var_521_int < var_522_int) {
		bool var_534_bool; object var_535_object;
		func_973(var_514_int, var_515_object, var_516_int, var_517_int, var_518_int, var_519_int, var_535_object, var_521_int, var_522_int, var_523_int, var_534_bool, var_535_object);
		object var_536_object;
		var_520_object = var_536_object;
		func_24(var_522_int, var_523_int, var_536_object);
		var_521_int += 1;
		var_6_object->set((var_513_int + var_1_int), var_521_int); //@t
		int var_539_int; object var_540_object;
		var_520_object = var_540_object;
		func_1579(var_539_int, var_540_object, var_25_int);
		float var_542_float;
		func_1506(var_542_float, var_26_object, var_24_int, var_25_int);
		var_523_int = var_539_int * var_542_float;
		int var_562_int;
		var_523_int = var_562_int;
		func_1121(var_522_int, var_523_int, var_562_int);
	}
	func_628(var_520_object, var_521_int, var_522_int, var_523_int);
	func_719(var_520_object, var_521_int, var_522_int, var_523_int);
}
EMIT "Stack[-4] = 0";


void func_493(object var_7_object, object var_8_object, object var_9_object)
{
	int var_49_int; object var_51_object; int var_52_int;
	int var_53_int;
	func_1677(var_53_int);
	int var_48_int;
	var_53_int = var_48_int;
	
	while(0 < var_48_int) {
		int var_59_int; int var_60_int;
		var_52_int = var_60_int;
		func_1727(var_59_int, var_60_int);
		var_59_int = var_49_int;
		object var_65_object; int var_66_int;
		var_52_int = var_66_int;
		func_1718(var_65_object, var_66_int);
		var_65_object = var_51_object;
		var_7_object->add(var_51_object); //@t
		var_8_object->add(var_49_int); //@t
		var_9_object->add(0); //@t
		var_52_int += 1;
	}
	
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_367(void)
{
	func_418(var_27_float, var_28_float, var_39_int, var_40_int, 0, false);
	func_418(var_27_float, var_28_float, var_39_int, var_40_int, 1, false);
	func_418(var_27_float, var_28_float, var_39_int, var_40_int, 2, false);
	func_418(var_27_float, var_28_float, var_39_int, var_40_int, 3, false);
	func_418(var_27_float, var_28_float, var_39_int, var_40_int, 4, false);
	func_418(var_27_float, var_28_float, var_39_int, var_40_int, 0, true);
	func_418(var_27_float, var_28_float, var_39_int, var_40_int, 1, true);
	func_418(var_27_float, var_28_float, var_39_int, var_40_int, 2, true);
	func_418(var_27_float, var_28_float, var_39_int, var_40_int, 3, true);
	func_418(var_27_float, var_28_float, var_39_int, var_40_int, 4, true);
}


void func_628(int var_0_int, object var_7_object, object var_8_object, int var_25_int)
{
	int var_213_int; int var_214_int; object var_216_object; int var_217_int; int var_218_int; object var_219_object;
	var_7_object->size(var_213_int); //@t
	if((var_0_int + 18) > var_213_int) {
		var_224_int = var_213_int % 2;
		if(var_224_int == 0)
			var_0_int -= ((var_0_int + 18) - var_213_int);
		else
			var_0_int -= (((var_0_int + 18) - var_213_int) - 1);
	}
	if(var_0_int < 0)
		var_0_int = 0;
	int var_215_int = var_0_int;
	
	for(;;) {
		if(var_215_int < (var_0_int + 18)) {
			if(var_215_int < var_213_int) {
				var_7_object->get(var_216_object, var_215_int); //@t
				var_8_object->get(var_217_int, var_215_int); //@t
				var_214_int = 0;
				int var_236_int;
				func_1403(var_218_int, var_219_object, var_236_int, (var_215_int - var_0_int));
				var_236_int = var_218_int;
				if(var_218_int > 0)
					var_214_int = var_214_int | 16384;
				bool var_248_bool; object var_249_object;
				func_1748(var_248_bool, var_249_object, var_25_int, false);
				if(var_248_bool != 0)
					var_214_int = var_214_int | 131072;
				@CreateIntVector(var_219_object);
				var_219_object->add(var_218_int);
				var_219_object->add(var_217_int);
				string var_254_string;
				func_1438(var_254_string, (var_215_int - var_0_int));
				@SendMessage(65536, var_254_string, var_219_object);
				string var_266_string;
				func_1438(var_266_string, (var_215_int - var_0_int));
				@SendMessage(var_214_int, var_266_string, var_249_object);
				var_219_object = null;
				var_216_object = null;
			} else {
			string var_270_string;
			func_1438(var_270_string, (var_215_int - var_0_int));
			@SendMessage(32768, var_270_string);
		}

		}
		var_215_int += 1;
	}
	
}


void func_1658(int var_186_int, object var_187_object)
{
	object var_191_object;
	var_187_object = var_191_object;
	int var_190_int;
	func_1574(var_190_int, var_191_object);
	int var_189_int;
	@GetInvItemProperty(var_189_int, var_190_int, "Category");
	var_189_int = var_186_int;
}


void func_1403(int var_0_int, object var_9_object, int var_236_int, int var_237_int)
{
	int var_240_int;
	var_9_object->size(var_240_int); //@t
	if((var_237_int + var_0_int) >= var_240_int)
		var_236_int = 0;
	int var_241_int;
	var_9_object->get(var_241_int, (var_237_int + var_0_int)); //@t
	var_241_int = var_236_int;
}


void func_1532(float var_161_float, object var_162_object, int var_163_int, int var_164_int)
{
	bool var_170_bool;
	if(var_164_int != 0)
		var_161_float = 1;
	float var_168_float = 1;
	int var_169_int = 1;
	
	while(var_169_int <= var_163_int) {
		var_162_object->HasProperty(("buyf" + var_169_int), var_170_bool);
		if(var_170_bool != 0)
			var_162_object->GetProperty(("buyf" + var_169_int), var_168_float);
		var_169_int += 1;
	}
	
	var_161_float = var_168_float / 100;
}


