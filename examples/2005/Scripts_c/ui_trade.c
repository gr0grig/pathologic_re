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
		func_1550(var_29_int);
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
		func_1462(var_33_int, var_34_string);
		int var_31_int;
		int var_32_int = var_31_int;
		if(var_31_int != -1) {
			if(var_27_int == 0) {
				int var_57_int;
				func_1123(var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_57_int, var_57_int);
			} else {
				int var_401_int;
				var_31_int = var_401_int;
				func_1189(var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_401_int);
		}
			int var_493_int; int var_494_int; string var_495_string;
			var_27_int = var_494_int;
			var_28_string = var_495_string;
			func_1480(var_494_int, var_495_string);
			var_493_int = var_31_int;
			if(var_31_int != -1) {
				if(var_27_int == 0) {
					int var_508_int;
					func_1253(var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_508_int, var_508_int);
				} else {
					int var_558_int;
					var_31_int = var_558_int;
					func_1316(var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_558_int);
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
					int var_784_int;
					func_592(var_31_int, var_784_int);
					var_0_int = ((var_784_int * var_27_int) / 100.0) + 0.5;
					var_0_int *= 2;
					func_628(var_28_string, var_29_object, var_30_int, var_31_int);
					return 2;
				}
				if(var_28_string == "r_scrollbar") {
					int var_805_int;
					func_610(var_31_int, var_805_int);
					var_1_int = ((var_805_int * var_27_int) / 100.0) + 0.5;
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


void func_1408(int var_1_int, object var_6_object, int var_308_int, int var_309_int)
{
	int var_312_int;
	var_6_object->size(var_312_int); //@t
	if((var_309_int + var_1_int) >= var_312_int)
		var_308_int = 0;
	int var_313_int;
	var_6_object->get(var_313_int, (var_309_int + var_1_int)); //@t
	var_313_int = var_308_int;
}


void func_0(object var_20_object, object var_21_object, object var_250_object)
{
	int var_254_int; object var_255_object;
	var_21_object->size(var_254_int); //@t
	int var_256_int = 0;
	
	while(var_256_int < var_254_int) {
		var_21_object->get(var_255_object, var_256_int); //@t
		bool var_258_bool; object var_259_object; object var_260_object;
		var_255_object = var_259_object;
		var_250_object = var_260_object;
		func_1727(var_258_bool, var_259_object, var_260_object);
		if(var_258_bool != 0)
			var_21_object->remove(var_256_int); //@t
		var_256_int += 1;
	}
	
	var_20_object->add(var_250_object); //@t
}
EMIT "Stack[-2] = 0";


void func_1669(int var_53_int)
{
	object var_57_object;
	@GetContainer(var_57_object);
	int var_56_int;
	var_57_object->GetItemCount(var_56_int);
	var_56_int = var_53_int;
}
EMIT "Stack[-1] = 0";


void func_1034(bool var_195_bool, object var_196_object, object var_197_object, object var_198_object)
{
	int var_203_int; object var_204_object; int var_205_int; int var_206_int;
	var_197_object->size(var_203_int);
	int var_207_int; object var_208_object;
	func_1660(var_207_int, var_208_object);
	if(var_207_int > 1) {
		var_205_int = 0;

		for(;;) {
			if(!(var_205_int < var_203_int)) goto Label_1068;
			var_197_object->get(var_204_object, var_205_int);
			var_198_object->get(var_206_int, var_205_int);
			if(var_208_object == var_204_object) {
				int var_217_int; object var_218_object;
				var_196_object = var_218_object;
				func_1660(var_217_int, var_218_object);
				if(var_206_int < var_217_int)
					var_198_object->set(var_205_int, (var_206_int + 1));
				var_195_bool = true;
				return 8;
			}
			var_205_int += 1;
		}
	}
Label_1068:
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


void func_1677(int var_83_int, int var_84_int)
{
	object var_88_object;
	@GetPlayerContainer(var_88_object);
	int var_87_int;
	var_88_object->GetItemCount(var_87_int, var_84_int);
	var_87_int = var_83_int;
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


void func_1550(int var_29_int)
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


void func_912(object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, bool var_182_bool, object var_183_object)
{
	object var_187_object;
	var_183_object = var_187_object;
	int var_186_int;
	func_1650(var_186_int, var_187_object);
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
		bool var_228_bool; object var_229_object;
		var_183_object = var_229_object;
		func_1034(var_228_bool, var_229_object, var_12_object, var_13_object);
		var_228_bool = var_182_bool;
		return 2;
	EMIT "GOTO 0x3c5";
	}
	if(var_185_int == 2) {
		bool var_234_bool; object var_235_object;
		var_183_object = var_235_object;
		func_1034(var_234_bool, var_235_object, var_14_object, var_15_object);
		var_234_bool = var_182_bool;
		return 2;
	EMIT "GOTO 0x3c5";
	}
	if(var_185_int == 3) {
		bool var_240_bool; object var_241_object;
		var_183_object = var_241_object;
		func_1034(var_240_bool, var_241_object, var_16_object, var_17_object);
		var_240_bool = var_182_bool;
		return 2;
	}
	bool var_244_bool; object var_245_object;
	var_183_object = var_245_object;
	func_1034(var_244_bool, var_245_object, var_18_object, var_19_object);
	var_244_bool = var_182_bool;
}


void func_1421(int var_126_int)
{
	float var_128_float;
	@GetGameTime(var_128_float);
	var_126_int = 1 + (var_128_float / 24);
}


void func_1685(object var_105_object, int var_106_int, int var_107_int)
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
void func_1430(string var_254_string, int var_255_int)
{
	if((var_255_int + 1) < 10)
		var_254_string = "l_slot0" + (var_255_int + 1);
	var_254_string = "l_slot" + (var_255_int + 1);
}


void func_1813(bool var_861_bool, object var_862_object, object var_863_object, int var_864_int)
{
	bool var_866_bool;
	var_862_object->AddItem(var_866_bool, var_863_object, var_864_int, 1);
	var_866_bool = var_861_bool;
}


void func_24(object var_20_object, object var_21_object, object var_471_object)
{
	int var_475_int; object var_476_object;
	var_20_object->size(var_475_int); //@t
	int var_477_int = 0;
	
	while(var_477_int < var_475_int) {
		var_20_object->get(var_476_object, var_477_int); //@t
		bool var_479_bool; object var_480_object; object var_481_object;
		var_476_object = var_480_object;
		var_471_object = var_481_object;
		func_1727(var_479_bool, var_480_object, var_481_object);
		if(var_479_bool != 0)
			var_20_object->remove(var_477_int); //@t
		var_477_int += 1;
	}
	
	var_21_object->add(var_471_object); //@t
}
EMIT "Stack[-2] = 0";


void func_1566(int var_124_int, object var_125_object)
{
	int var_127_int;
	var_125_object->GetItemID(var_127_int);
	var_127_int = var_124_int;
}


void func_1694(int var_98_int, int var_99_int, int var_100_int)
{
	object var_103_object;
	@GetPlayerContainer(var_103_object);
	int var_104_int;
	var_103_object->GetItemAmount(var_104_int, var_100_int, var_99_int);
	var_104_int = var_98_int;
}
EMIT "Stack[-2] = 0";


void func_418(object var_4_object, object var_5_object, object var_6_object, int var_25_int, int var_73_int, bool var_74_bool)
{
	object var_79_object; int var_81_int; int var_82_int;
	int var_84_int;
	var_73_int = var_84_int;
	int var_83_int;
	func_1677(var_83_int, var_84_int);
	int var_80_int;
	var_83_int = var_80_int;
	
	for(;;) {
		if(0 < var_80_int) {
			bool var_90_bool; int var_91_int; int var_92_int;
			var_73_int = var_91_int;
			var_82_int = var_92_int;
			func_1702(var_90_bool, var_91_int, var_92_int);
			if(var_90_bool != 0) {
			} else {
			int var_98_int; int var_99_int; int var_100_int;
			var_73_int = var_99_int;
			var_82_int = var_100_int;
			func_1694(var_98_int, var_99_int, var_100_int);
			var_98_int = var_81_int;
			object var_105_object; int var_106_int; int var_107_int;
			var_73_int = var_106_int;
			var_82_int = var_107_int;
			func_1685(var_105_object, var_106_int, var_107_int);
			var_105_object = var_79_object;
			bool var_112_bool = false;
			if(var_74_bool != 0) {
				bool var_114_bool; object var_115_object;
				func_1738(var_114_bool, var_115_object, var_25_int, true);
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
				func_1738(var_146_bool, var_147_object, var_25_int, true);
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


void func_1571(int var_103_int, object var_104_object, int var_105_int)
{
	int var_115_int; int var_116_int; int var_117_int; string var_118_string; bool var_119_bool; bool var_120_bool; int var_121_int; bool var_122_bool; int var_123_int;
	if(var_105_int == 0) {
		int var_126_int;
		func_1421(var_126_int);
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
				func_1566(var_135_int, var_136_object);
				@HasInvItemProperty(var_119_bool, var_135_int, var_118_string);
				if(!var_119_bool) { //@nz
				} else {
				int var_139_int; object var_140_object;
				var_104_object = var_140_object;
				func_1566(var_139_int, var_140_object);
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
		func_1566(var_150_int, var_151_object);
		@HasInvItemProperty(var_122_bool, var_150_int, ("BarterPrice" + var_105_int));
		if(!var_122_bool) //@nz
			return 18;
		int var_155_int; object var_156_object;
		var_104_object = var_156_object;
		func_1566(var_155_int, var_156_object);
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


void func_1316(int var_1_int, int var_2_int, object var_4_object, object var_5_object, object var_6_object, int var_24_int, int var_25_int, object var_26_object, int var_558_int)
{
	int var_559_int; object var_560_object; int var_561_int; int var_562_int; int var_563_int; int var_564_int; int var_568_int;
	var_6_object->size(var_564_int); //@t
	if((var_558_int + var_1_int) >= var_564_int)
		return 10;
	object var_565_object;
	var_4_object->get(var_565_object, (var_558_int + var_1_int)); //@t
	bool var_572_bool; object var_573_object;
	var_565_object = var_573_object;
	func_1738(var_572_bool, var_573_object, var_25_int, true);
	if(var_572_bool != 0)
		return 10;
	int var_566_int;
	var_6_object->get(var_566_int, (var_558_int + var_1_int)); //@t
	int var_567_int;
	var_5_object->get(var_567_int, (var_558_int + var_1_int)); //@t
	if(var_566_int > 0) {
		int var_580_int; object var_581_object;
		var_565_object = var_581_object;
		func_1571(var_580_int, var_581_object, var_25_int);
		float var_583_float;
		func_1498(var_583_float, var_26_object, var_24_int, var_25_int);
		var_568_int = var_580_int * var_583_float;
		if(var_568_int <= var_2_int) {
			bool var_588_bool; object var_589_object;
			func_912(var_559_int, var_560_object, var_561_int, var_562_int, var_563_int, var_564_int, var_589_object, var_566_int, var_567_int, var_568_int, var_588_bool, var_589_object);
			if(var_588_bool != 0) {
				var_566_int += -1;
				object var_591_object;
				var_565_object = var_591_object;
				func_0(var_567_int, var_568_int, var_591_object);
				var_6_object->set((var_558_int + var_1_int), var_566_int); //@t
				int var_594_int; object var_595_object;
				var_565_object = var_595_object;
				func_1571(var_594_int, var_595_object, var_25_int);
				var_597_int = -var_594_int;
				float var_598_float;
				func_1498(var_598_float, var_26_object, var_24_int, var_25_int);
				func_1113(var_567_int, var_568_int, (var_597_int * var_598_float));
			}
		}
	}
	func_628(var_565_object, var_566_int, var_567_int, var_568_int);
	func_719(var_565_object, var_566_int, var_567_int, var_568_int);
}
EMIT "Stack[-4] = 0";


void func_1189(int var_0_int, object var_7_object, object var_8_object, object var_9_object, int var_24_int, int var_25_int, object var_26_object, int var_401_int)
{
	int var_402_int; object var_403_object; int var_404_int; int var_405_int; int var_406_int; int var_407_int; int var_411_int;
	var_9_object->size(var_407_int); //@t
	if((var_401_int + var_0_int) >= var_407_int)
		return 10;
	object var_408_object;
	var_7_object->get(var_408_object, (var_401_int + var_0_int)); //@t
	bool var_415_bool; object var_416_object;
	var_408_object = var_416_object;
	func_1738(var_415_bool, var_416_object, var_25_int, false);
	if(var_415_bool != 0)
		return 10;
	int var_409_int;
	var_9_object->get(var_409_int, (var_401_int + var_0_int)); //@t
	int var_410_int;
	var_8_object->get(var_410_int, (var_401_int + var_0_int)); //@t
	if(var_409_int > 0) {
		bool var_423_bool; object var_424_object;
		func_973(var_402_int, var_403_object, var_404_int, var_405_int, var_406_int, var_407_int, var_424_object, var_409_int, var_410_int, var_411_int, var_423_bool, var_424_object);
		object var_471_object;
		var_408_object = var_471_object;
		func_24(var_410_int, var_411_int, var_471_object);
		var_409_int += -1;
		var_9_object->set((var_401_int + var_0_int), var_409_int); //@t
		int var_485_int; object var_486_object;
		var_408_object = var_486_object;
		func_1571(var_485_int, var_486_object, var_25_int);
		float var_488_float;
		func_1524(var_488_float, var_26_object, var_24_int, var_25_int);
		var_411_int = var_485_int * var_488_float;
		int var_492_int;
		var_411_int = var_492_int;
		func_1113(var_410_int, var_411_int, var_492_int);
	}
	func_628(var_408_object, var_409_int, var_410_int, var_411_int);
	func_719(var_408_object, var_409_int, var_410_int, var_411_int);
}
EMIT "Stack[-4] = 0";


void func_1702(bool var_90_bool, int var_91_int, int var_92_int)
{
	object var_95_object;
	@GetPlayerContainer(var_95_object);
	bool var_96_bool;
	var_95_object->IsItemSelected(var_96_bool, var_92_int, var_91_int);
	var_96_bool = var_90_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_1446(string var_326_string, int var_327_int)
{
	if((var_327_int + 1) < 10)
		var_326_string = "r_slot0" + (var_327_int + 1);
	var_326_string = "r_slot" + (var_327_int + 1);
}


void func_1788(bool var_841_bool, object var_842_object, object var_843_object, int var_844_int)
{
	int var_850_int; object var_851_object;
	var_842_object->GetItemCount(var_850_int, var_844_int);
	int var_852_int = 0;
	
	while(var_852_int < var_850_int) {
		var_842_object->GetItem(var_851_object, var_852_int, var_844_int);
		bool var_854_bool; object var_855_object; object var_856_object;
		var_843_object = var_855_object;
		var_851_object = var_856_object;
		func_1727(var_854_bool, var_855_object, var_856_object);
		if(var_854_bool != 0) {
			var_842_object->RemoveItem(var_852_int, 1, var_844_int);
			var_841_bool = true;
		}
		var_852_int += 1;
	}
	
	var_841_bool = false;
}
EMIT "Stack[-2] = 0";


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
	func_1677(var_181_int, var_182_int);
	int var_178_int;
	var_181_int = var_178_int;
	
	for(;;) {
		if(0 < var_178_int) {
			bool var_184_bool; int var_185_int; int var_186_int;
			var_170_int = var_185_int;
			var_180_int = var_186_int;
			func_1702(var_184_bool, var_185_int, var_186_int);
			if(var_184_bool != 0) {
			} else {
			int var_188_int; int var_189_int; int var_190_int;
			var_170_int = var_189_int;
			var_180_int = var_190_int;
			func_1694(var_188_int, var_189_int, var_190_int);
			var_188_int = var_179_int;
			object var_191_object; int var_192_int; int var_193_int;
			var_170_int = var_192_int;
			var_180_int = var_193_int;
			func_1685(var_191_object, var_192_int, var_193_int);
			var_191_object = var_177_object;
			var_171_object->add(var_177_object);
			var_172_object->add(var_179_int);
		}
		}
		var_180_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


void func_814(int var_3_int)
{
	@SendMessage(var_3_int, "l_money_slot");
}


void func_1710(object var_65_object, int var_66_int)
{
	object var_69_object;
	@GetContainer(var_69_object);
	object var_70_object;
	var_69_object->GetItem(var_70_object, var_66_int);
	var_70_object = var_65_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_818(int var_2_int, int var_3_int, object var_20_object, object var_21_object, int var_25_int)
{
	bool var_834_bool; object var_835_object; object var_836_object;
	@GetContainer(var_836_object);
	object var_837_object;
	@GetPlayerContainer(var_837_object);
	int var_833_int;
	var_21_object->size(var_833_int); //@t
	int var_838_int = 0;
	
	while(var_838_int < var_833_int) {
		var_21_object->get(var_835_object, var_838_int); //@t
		bool var_841_bool; object var_842_object; object var_843_object; int var_844_int;
		var_837_object = var_842_object;
		var_835_object = var_843_object;
		int var_845_int; object var_846_object;
		var_835_object = var_846_object;
		func_1650(var_845_int, var_846_object);
		var_845_int = var_844_int;
		func_1788(var_841_bool, var_842_object, var_843_object, var_844_int);
		var_841_bool = var_834_bool;
		if(!var_834_bool) //@nz
			@Trace("Error: failed to remove item");
		bool var_861_bool; object var_862_object; object var_863_object;
		var_836_object = var_862_object;
		func_1813(var_861_bool, var_862_object, var_863_object, 0);
		var_861_bool = var_834_bool;
		if(!var_834_bool) //@nz
			@Trace("Error: failed to add item");
		var_838_int += 1;
	}
	
	var_20_object->size(var_833_int); //@t
	int var_839_int = 0;
	
	while(var_839_int < var_833_int) {
		var_20_object->get(var_863_object, var_839_int); //@t
		bool var_872_bool; object var_873_object; object var_874_object;
		var_836_object = var_873_object;
		var_835_object = var_874_object;
		func_1788(var_872_bool, var_873_object, var_874_object, 0);
		var_872_bool = var_834_bool;
		if(!var_834_bool) //@nz
			@Trace("Error: failed to remove item");
		bool var_878_bool; object var_879_object; object var_880_object; int var_881_int;
		var_837_object = var_879_object;
		var_835_object = var_880_object;
		int var_882_int; object var_883_object;
		var_835_object = var_883_object;
		func_1650(var_882_int, var_883_object);
		var_882_int = var_881_int;
		func_1813(var_878_bool, var_879_object, var_880_object, var_881_int);
		var_878_bool = var_834_bool;
		if(!var_834_bool) //@nz
			@Trace("Error: failed to add item");
		var_839_int += 1;
	}
	
	if(var_25_int == 0)
		@SetPlayerMoneyCount(var_2_int);
	var_3_int = 0;
	int var_826_int;
	bool var_827_bool;
	object var_828_object;
	object var_829_object;
	object var_830_object;
	int var_831_int;
	int var_832_int;
	func_270(var_23_object, var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_826_int, var_827_bool, var_828_object, var_829_object, var_830_object, var_831_int, var_832_int, var_833_int, var_834_bool, var_835_object, var_836_object, var_837_object, var_838_int, var_839_int);
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


void func_1462(int var_32_int, string var_34_string)
{
	int var_36_int;
	
	while(0 < 18) {
		string var_39_string; int var_40_int;
		var_36_int = var_40_int;
		func_1430(var_39_string, var_40_int);
		if(var_34_string == var_39_string)
			var_36_int = var_32_int;
		var_36_int += 1;
	}
	
	var_32_int = -1;
}


void func_1719(int var_59_int, int var_60_int)
{
	object var_63_object;
	@GetContainer(var_63_object);
	int var_64_int;
	var_63_object->GetItemAmount(var_64_int, var_60_int);
	var_64_int = var_59_int;
}
EMIT "Stack[-2] = 0";


void func_1081(bool var_431_bool, object var_432_object, object var_433_object, object var_434_object)
{
	int var_439_int; object var_440_object; int var_442_int;
	var_433_object->size(var_439_int);
	int var_441_int = 0;
	
	for(;;) {
		if(!(var_441_int < var_439_int)) goto Label_1110;
		var_433_object->get(var_440_object, var_441_int);
		var_434_object->get(var_442_int, var_441_int);
		if(var_432_object == var_440_object) {
			var_442_int += -1;
			if(var_442_int == 0) {
				var_433_object->remove(var_441_int);
				var_434_object->remove(var_441_int);
				break;
			}
			var_434_object->set(var_441_int, var_442_int);
		}
		var_441_int += 1;
	}
	var_431_bool = true;
	
Label_1110:
	var_431_bool = false;
}
EMIT "Stack[-3] = 0";


// @pe
void func_1727(bool var_258_bool, object var_259_object, object var_260_object)
{
	object var_262_object;
	var_259_object = var_262_object;
	int var_261_int;
	func_1566(var_261_int, var_262_object);
	int var_263_int; object var_264_object;
	var_260_object = var_264_object;
	func_1566(var_263_int, var_264_object);
	var_258_bool = var_261_int == var_263_int;
}


void func_1480(int var_493_int, string var_495_string)
{
	int var_497_int;
	
	while(0 < 18) {
		string var_500_string; int var_501_int;
		var_497_int = var_501_int;
		func_1446(var_500_string, var_501_int);
		if(var_495_string == var_500_string)
			var_497_int = var_493_int;
		var_497_int += 1;
	}
	
	var_493_int = -1;
}


void func_1738(bool var_114_bool, object var_115_object, int var_116_int, bool var_117_bool)
{
	if(var_116_int == 0) {
		var_114_bool = false;
		return 4;
	}
	int var_124_int; object var_125_object;
	var_115_object = var_125_object;
	func_1566(var_124_int, var_125_object);
	bool var_120_bool;
	@HasInvItemProperty(var_120_bool, var_124_int, ("BarterPrice" + var_116_int));
	if(!var_120_bool) { //@nz
		var_114_bool = true;
		return 4;
	}
	int var_131_int; object var_132_object;
	var_115_object = var_132_object;
	func_1566(var_131_int, var_132_object);
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


void func_973(object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, bool var_423_bool, object var_424_object)
{
	object var_428_object;
	var_424_object = var_428_object;
	int var_427_int;
	func_1650(var_427_int, var_428_object);
	int var_426_int;
	var_427_int = var_426_int;
	if(var_426_int == 0) {
		bool var_431_bool; object var_432_object;
		var_424_object = var_432_object;
		func_1081(var_431_bool, var_432_object, var_10_object, var_11_object);
		var_431_bool = var_423_bool;
		return 2;
	EMIT "GOTO 0x402";
	}
	if(var_426_int == 1) {
		bool var_451_bool; object var_452_object;
		var_424_object = var_452_object;
		func_1081(var_451_bool, var_452_object, var_12_object, var_13_object);
		var_451_bool = var_423_bool;
		return 2;
	EMIT "GOTO 0x402";
	}
	if(var_426_int == 2) {
		bool var_457_bool; object var_458_object;
		var_424_object = var_458_object;
		func_1081(var_457_bool, var_458_object, var_14_object, var_15_object);
		var_457_bool = var_423_bool;
		return 2;
	EMIT "GOTO 0x402";
	}
	if(var_426_int == 3) {
		bool var_463_bool; object var_464_object;
		var_424_object = var_464_object;
		func_1081(var_463_bool, var_464_object, var_16_object, var_17_object);
		var_463_bool = var_423_bool;
		return 2;
	}
	bool var_467_bool; object var_468_object;
	var_424_object = var_468_object;
	func_1081(var_467_bool, var_468_object, var_18_object, var_19_object);
	var_467_bool = var_423_bool;
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
				func_1408(var_290_int, var_291_object, var_308_int, (var_289_int - var_1_int));
				var_308_int = var_290_int;
				if(var_290_int > 0)
					var_287_int = var_287_int | 16384;
				bool var_320_bool; object var_321_object;
				func_1738(var_320_bool, var_321_object, var_25_int, true);
				if(var_320_bool != 0)
					var_287_int = var_287_int | 131072;
				@CreateIntVector(var_291_object);
				var_291_object->add(var_290_int);
				var_291_object->add(var_288_int);
				string var_326_string;
				func_1446(var_326_string, (var_289_int - var_1_int));
				@SendMessage(65536, var_326_string, var_291_object);
				string var_338_string;
				func_1446(var_338_string, (var_289_int - var_1_int));
				@SendMessage(var_287_int, var_338_string, var_321_object);
				var_291_object = null;
			} else {
			string var_342_string;
			func_1446(var_342_string, (var_289_int - var_1_int));
			@SendMessage(32768, var_342_string);
		}

		}
		var_289_int += 1;
	}
	
}
EMIT "Stack[-6] = 0";


void func_592(object var_7_object, int var_784_int)
{
	int var_787_int;
	var_7_object->size(var_787_int); //@t
	if(((((var_787_int + 2) - 1) / 2) - 9) < 0)
		var_784_int = 0;
	int var_788_int = var_784_int;
}


// @pe
void func_1113(int var_2_int, int var_3_int, int var_266_int)
{
	var_2_int += var_266_int;
	var_3_int -= var_266_int;
	func_810(var_266_int);
	func_814(var_266_int);
}


void func_1498(float var_537_float, object var_538_object, int var_539_int, int var_540_int)
{
	bool var_546_bool;
	if(var_540_int != 0)
		var_537_float = 1;
	float var_544_float = 1;
	int var_545_int = 1;
	
	while(var_545_int <= var_539_int) {
		var_538_object->HasProperty(("sellf" + var_545_int), var_546_bool);
		if(var_546_bool != 0)
			var_538_object->GetProperty(("sellf" + var_545_int), var_544_float);
		var_545_int += 1;
	}
	
	var_537_float = var_544_float / 100;
}


void func_610(object var_4_object, int var_805_int)
{
	int var_808_int;
	var_4_object->size(var_808_int); //@t
	if(((((var_808_int + 2) - 1) / 2) - 9) < 0)
		var_805_int = 0;
	int var_809_int = var_805_int;
}


void func_1123(int var_0_int, int var_2_int, object var_7_object, object var_8_object, object var_9_object, int var_24_int, int var_25_int, object var_26_object, int var_57_int)
{
	int var_58_int; object var_59_object; int var_60_int; int var_61_int; int var_62_int; int var_63_int; int var_67_int;
	var_9_object->size(var_63_int); //@t
	if((var_57_int + var_0_int) >= var_63_int)
		return 10;
	object var_64_object;
	var_7_object->get(var_64_object, (var_57_int + var_0_int)); //@t
	bool var_71_bool; object var_72_object;
	var_64_object = var_72_object;
	func_1738(var_71_bool, var_72_object, var_25_int, false);
	if(var_71_bool != 0)
		return 10;
	int var_65_int;
	var_9_object->get(var_65_int, (var_57_int + var_0_int)); //@t
	int var_66_int;
	var_8_object->get(var_66_int, (var_57_int + var_0_int)); //@t
	if(var_65_int < var_66_int) {
		int var_103_int; object var_104_object;
		var_64_object = var_104_object;
		func_1571(var_103_int, var_104_object, var_25_int);
		float var_161_float;
		func_1524(var_161_float, var_26_object, var_24_int, var_25_int);
		var_67_int = var_103_int * var_161_float;
		if(var_67_int <= var_2_int) {
			bool var_182_bool; object var_183_object;
			func_912(var_58_int, var_59_object, var_60_int, var_61_int, var_62_int, var_63_int, var_183_object, var_65_int, var_66_int, var_67_int, var_182_bool, var_183_object);
			if(var_182_bool != 0) {
				var_65_int += 1;
				var_9_object->set((var_57_int + var_0_int), var_65_int); //@t
				object var_250_object;
				var_64_object = var_250_object;
				func_0(var_66_int, var_67_int, var_250_object);
				int var_266_int = -var_67_int;
				func_1113(var_66_int, var_67_int, var_266_int);
			}
		}
	}
	func_628(var_64_object, var_65_int, var_66_int, var_67_int);
	func_719(var_64_object, var_65_int, var_66_int, var_67_int);
}
EMIT "Stack[-4] = 0";


void func_1253(int var_1_int, object var_4_object, object var_5_object, object var_6_object, int var_24_int, int var_25_int, object var_26_object, int var_508_int)
{
	int var_509_int; object var_510_object; int var_511_int; int var_512_int; int var_513_int; int var_514_int; int var_518_int;
	var_6_object->size(var_514_int); //@t
	if((var_508_int + var_1_int) >= var_514_int)
		return 10;
	object var_515_object;
	var_4_object->get(var_515_object, (var_508_int + var_1_int)); //@t
	bool var_522_bool; object var_523_object;
	var_515_object = var_523_object;
	func_1738(var_522_bool, var_523_object, var_25_int, true);
	if(var_522_bool != 0)
		return 10;
	int var_516_int;
	var_6_object->get(var_516_int, (var_508_int + var_1_int)); //@t
	int var_517_int;
	var_5_object->get(var_517_int, (var_508_int + var_1_int)); //@t
	if(var_516_int < var_517_int) {
		bool var_529_bool; object var_530_object;
		func_973(var_509_int, var_510_object, var_511_int, var_512_int, var_513_int, var_514_int, var_530_object, var_516_int, var_517_int, var_518_int, var_529_bool, var_530_object);
		object var_531_object;
		var_515_object = var_531_object;
		func_24(var_517_int, var_518_int, var_531_object);
		var_516_int += 1;
		var_6_object->set((var_508_int + var_1_int), var_516_int); //@t
		int var_534_int; object var_535_object;
		var_515_object = var_535_object;
		func_1571(var_534_int, var_535_object, var_25_int);
		float var_537_float;
		func_1498(var_537_float, var_26_object, var_24_int, var_25_int);
		var_518_int = var_534_int * var_537_float;
		int var_557_int;
		var_518_int = var_557_int;
		func_1113(var_517_int, var_518_int, var_557_int);
	}
	func_628(var_515_object, var_516_int, var_517_int, var_518_int);
	func_719(var_515_object, var_516_int, var_517_int, var_518_int);
}
EMIT "Stack[-4] = 0";


void func_493(object var_7_object, object var_8_object, object var_9_object)
{
	int var_49_int; object var_51_object; int var_52_int;
	int var_53_int;
	func_1669(var_53_int);
	int var_48_int;
	var_53_int = var_48_int;
	
	while(0 < var_48_int) {
		int var_59_int; int var_60_int;
		var_52_int = var_60_int;
		func_1719(var_59_int, var_60_int);
		var_59_int = var_49_int;
		object var_65_object; int var_66_int;
		var_52_int = var_66_int;
		func_1710(var_65_object, var_66_int);
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


void func_1650(int var_186_int, object var_187_object)
{
	object var_191_object;
	var_187_object = var_191_object;
	int var_190_int;
	func_1566(var_190_int, var_191_object);
	int var_189_int;
	@GetInvItemProperty(var_189_int, var_190_int, "Category");
	var_189_int = var_186_int;
}


void func_1395(int var_0_int, object var_9_object, int var_236_int, int var_237_int)
{
	int var_240_int;
	var_9_object->size(var_240_int); //@t
	if((var_237_int + var_0_int) >= var_240_int)
		var_236_int = 0;
	int var_241_int;
	var_9_object->get(var_241_int, (var_237_int + var_0_int)); //@t
	var_241_int = var_236_int;
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
				func_1395(var_218_int, var_219_object, var_236_int, (var_215_int - var_0_int));
				var_236_int = var_218_int;
				if(var_218_int > 0)
					var_214_int = var_214_int | 16384;
				bool var_248_bool; object var_249_object;
				func_1738(var_248_bool, var_249_object, var_25_int, false);
				if(var_248_bool != 0)
					var_214_int = var_214_int | 131072;
				@CreateIntVector(var_219_object);
				var_219_object->add(var_218_int);
				var_219_object->add(var_217_int);
				string var_254_string;
				func_1430(var_254_string, (var_215_int - var_0_int));
				@SendMessage(65536, var_254_string, var_219_object);
				string var_266_string;
				func_1430(var_266_string, (var_215_int - var_0_int));
				@SendMessage(var_214_int, var_266_string, var_249_object);
				var_219_object = null;
				var_216_object = null;
			} else {
			string var_270_string;
			func_1430(var_270_string, (var_215_int - var_0_int));
			@SendMessage(32768, var_270_string);
		}

		}
		var_215_int += 1;
	}
	
}


void func_1524(float var_161_float, object var_162_object, int var_163_int, int var_164_int)
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


void func_1660(int var_207_int, object var_208_object)
{
	object var_212_object;
	var_208_object = var_212_object;
	int var_211_int;
	func_1566(var_211_int, var_212_object);
	int var_210_int;
	@GetItemMaxStackSize(var_211_int, var_210_int);
	var_210_int = var_207_int;
}


