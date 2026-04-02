maintask task_0
{
	void init(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, string var_22_string, object var_23_object, object var_24_object, object var_25_object, object var_26_object, int var_27_int, int var_28_int, object var_29_object)
	{
		object var_35_object; object var_36_object; int var_37_int; string var_38_string; string var_39_string; string var_40_string; string var_41_string; object var_42_object; object var_43_object; float var_44_float; string var_46_string; string var_47_string; string var_48_string; string var_49_string; object var_50_object; object var_51_object; int var_52_int; string var_53_string; string var_54_string; string var_55_string; string var_56_string; object var_57_object; object var_58_object; float var_59_float;
		int var_60_int;
		func_2102(var_60_int);
		var_0_int = var_60_int;
		@GetContainer(var_29_object);
		@CreateObjectVector(var_23_object);
		@CreateObjectVector(var_24_object);
		@CreateObjectVector(var_5_object);
		@CreateIntVector(var_6_object);
		@CreateIntVector(var_7_object);
		@CreateIntVector(var_8_object);
		@CreateObjectVector(var_9_object);
		@CreateIntVector(var_10_object);
		@CreateIntVector(var_11_object);
		@CreateObjectVector(var_12_object);
		@CreateIntVector(var_13_object);
		@CreateObjectVector(var_14_object);
		@CreateIntVector(var_15_object);
		@CreateObjectVector(var_16_object);
		@CreateIntVector(var_17_object);
		@CreateObjectVector(var_18_object);
		@CreateIntVector(var_19_object);
		@CreateObjectVector(var_20_object);
		@CreateIntVector(var_21_object);
		int var_147_int;
		func_2393(var_147_int);
		var_28_int = var_147_int;
		var_22_string = "";
		int var_45_int = 0;
	
		for(;;) {
			if(var_45_int < var_0_int) {
				var_46_string = "";
				var_47_string = "";
				var_48_string = "$parent";
				var_49_string = "$parent";
				var_159_int = var_45_int % 2;
				if(var_159_int == 0) {
					string var_162_string;
					func_2086(var_162_string, (var_45_int + 1));
					var_162_string = var_47_string;
					string var_175_string;
					func_2070(var_175_string, (var_45_int + 1));
					var_175_string = var_46_string;
				} else {
				string var_206_string;
				func_2086(var_206_string, (var_45_int - 1));
				var_206_string = var_46_string;
			}
			var_52_int = 0;

			for(;;) {
				if(var_52_int < var_0_int) {
					var_53_string = "";
					var_54_string = "";
					var_55_string = "$parent";
					var_56_string = "$parent";
					var_211_int = var_52_int % 2;
					if(var_211_int == 0) {
						string var_214_string;
						func_2070(var_214_string, (var_52_int + 1));
						var_214_string = var_54_string;
					} else {
					string var_235_string;
					func_2070(var_235_string, (var_52_int - 1));
					var_235_string = var_53_string;
					string var_238_string;
					func_2086(var_238_string, (var_52_int - 1));
					var_238_string = var_54_string;
				}
				string var_242_string;
				func_2086(var_242_string, 0);
				@SendMessage(-6, var_242_string);
				func_872(var_35_object, var_36_object, var_37_int, var_38_string, var_39_string, var_40_string, var_41_string, var_42_object, var_43_object, var_44_float, var_45_int, var_46_string, var_47_string, var_48_string, var_49_string, var_50_object, var_51_object, var_52_int, var_53_string, var_54_string, var_55_string, var_56_string, var_57_object, var_58_object, var_59_float);
				@GetGameTime(var_59_float);
				var_27_int = 1 + (var_59_float / 24);
				@ShowCursor();
				@SetCursor("default");
				@CaptureKeyboard();
				@ProcessEvents();
				}
				if(var_52_int > 1) {
					string var_219_string;
					func_2070(var_219_string, (var_52_int - 2));
					var_219_string = var_55_string;
				}
				if(var_52_int < (var_0_int - 2)) {
					string var_225_string;
					func_2070(var_225_string, (var_52_int + 2));
					var_225_string = var_56_string;
				}
				@CreateStringVector(var_57_object);
				var_57_object->add(var_53_string);
				var_57_object->add(var_54_string);
				var_57_object->add(var_55_string);
				var_57_object->add(var_56_string);
				string var_229_string; int var_230_int;
				var_52_int = var_230_int;
				func_2070(var_229_string, var_230_int);
				@SendMessage(-1, var_229_string, var_57_object);
				@CreateIntVector(var_58_object);
				var_58_object->add(var_0_int);
				string var_232_string; int var_233_int;
				var_52_int = var_233_int;
				func_2070(var_232_string, var_233_int);
				@SendMessage(-19, var_232_string, var_58_object);
				var_58_object = null;
				var_57_object = null;
				var_52_int += 1;
			}
			}
			if(var_45_int > 1) {
				string var_190_string;
				func_2086(var_190_string, (var_45_int - 2));
				var_190_string = var_48_string;
			}
			if(var_45_int < (var_0_int - 2)) {
				string var_196_string;
				func_2086(var_196_string, (var_45_int + 2));
				var_196_string = var_49_string;
			}
			@CreateStringVector(var_50_object);
			var_50_object->add(var_46_string);
			var_50_object->add(var_47_string);
			var_50_object->add(var_48_string);
			var_50_object->add(var_49_string);
			string var_200_string; int var_201_int;
			var_45_int = var_201_int;
			func_2086(var_200_string, var_201_int);
			@SendMessage(-1, var_200_string, var_50_object);
			@CreateIntVector(var_51_object);
			var_51_object->add(var_0_int);
			string var_203_string; int var_204_int;
			var_45_int = var_204_int;
			func_2086(var_203_string, var_204_int);
			@SendMessage(-19, var_203_string, var_51_object);
			var_51_object = null;
			var_50_object = null;
			var_45_int += 1;
		}
	
	}

	void event_101(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, string var_22_string, object var_23_object, object var_24_object, object var_25_object, object var_26_object, int var_27_int, int var_28_int, object var_29_object, int var_30_int)
	{
		int var_35_int; int var_36_int; int var_37_int; int var_38_int;
		if(var_30_int == 269) {
			if(var_22_string == "") {

				for(;;) {
					if(!(0 < var_0_int)) goto Label_367;
					string var_45_string; int var_46_int;
					var_35_int = var_46_int;
					func_2086(var_45_string, var_46_int);
					@SendMessage(-13, var_45_string);
					string var_58_string; int var_59_int;
					var_35_int = var_59_int;
					func_2070(var_58_string, var_59_int);
					@SendMessage(-13, var_58_string);
					var_35_int += 1;
				}
			}
		}
	Label_367:
		if(var_30_int == 270) {
			if(var_22_string == "") {

				for(;;) {
					if(!(0 < var_0_int)) goto Label_393;
					string var_77_string; int var_78_int;
					var_36_int = var_78_int;
					func_2086(var_77_string, var_78_int);
					@SendMessage(-14, var_77_string);
					string var_80_string; int var_81_int;
					var_36_int = var_81_int;
					func_2070(var_80_string, var_81_int);
					@SendMessage(-14, var_80_string);
					var_36_int += 1;
				}
			}
		}
	Label_393:
		if(var_30_int == 267) {
			if(var_22_string == "cancel_button") {
				@SendMessage(-4, "ok_button");
				var_22_string = "ok_button";
			} else {

				for(;;) {
					if(!(0 < var_0_int)) goto Label_425;
					string var_110_string; int var_111_int;
					var_37_int = var_111_int;
					func_2086(var_110_string, var_111_int);
					@SendMessage(-15, var_110_string);
					string var_113_string; int var_114_int;
					var_37_int = var_114_int;
					func_2070(var_113_string, var_114_int);
					@SendMessage(-15, var_113_string);
					var_37_int += 1;
				}
			}
		}
	Label_425:
		if(var_30_int == 268) {
			if(var_22_string == "cancel_button") {
				string var_94_string;
				func_2086(var_94_string, 1);
				@SendMessage(-4, var_94_string);
			} else if("" == "ok_button" != 0) {
					@SendMessage(-4, "cancel_button");
					var_22_string = "cancel_button";
			}
		}
	Label_469:
		for(;;) {

		}
	
	
		for(;;) {
			if(!(0 < var_0_int)) goto Label_469;
			string var_102_string; int var_103_int;
			var_38_int = var_103_int;
			func_2086(var_102_string, var_103_int);
			@SendMessage(-16, var_102_string);
			string var_105_string; int var_106_int;
			var_38_int = var_106_int;
			func_2070(var_105_string, var_106_int);
			@SendMessage(-16, var_105_string);
			var_38_int += 1;
		}
	
	}

	void event_102(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, string var_22_string, object var_23_object, object var_24_object, object var_25_object, object var_26_object, int var_27_int, int var_28_int, object var_29_object, int var_30_int)
	{
		int var_35_int; int var_36_int; int var_37_int; int var_38_int;
		if(var_30_int == 273) {
			if(var_22_string == "") {

				for(;;) {
					if(!(0 < var_0_int)) goto Label_497;
					string var_45_string; int var_46_int;
					var_35_int = var_46_int;
					func_2086(var_45_string, var_46_int);
					@SendMessage(-13, var_45_string);
					string var_58_string; int var_59_int;
					var_35_int = var_59_int;
					func_2070(var_58_string, var_59_int);
					@SendMessage(-13, var_58_string);
					var_35_int += 1;
				}
			}
		}
	Label_497:
		if(var_30_int == 271) {
			if(var_22_string == "") {

				for(;;) {
					if(!(0 < var_0_int)) goto Label_523;
					string var_77_string; int var_78_int;
					var_36_int = var_78_int;
					func_2086(var_77_string, var_78_int);
					@SendMessage(-14, var_77_string);
					string var_80_string; int var_81_int;
					var_36_int = var_81_int;
					func_2070(var_80_string, var_81_int);
					@SendMessage(-14, var_80_string);
					var_36_int += 1;
				}
			}
		}
	Label_523:
		if(var_30_int == 272) {
			if(var_22_string == "cancel_button") {
				@SendMessage(-4, "ok_button");
				var_22_string = "ok_button";
			} else {

				for(;;) {
					if(!(0 < var_0_int)) goto Label_555;
					string var_110_string; int var_111_int;
					var_37_int = var_111_int;
					func_2086(var_110_string, var_111_int);
					@SendMessage(-15, var_110_string);
					string var_113_string; int var_114_int;
					var_37_int = var_114_int;
					func_2070(var_113_string, var_114_int);
					@SendMessage(-15, var_113_string);
					var_37_int += 1;
				}
			}
		}
	Label_555:
		if(var_30_int == 274) {
			if(var_22_string == "cancel_button") {
				string var_94_string;
				func_2086(var_94_string, 1);
				@SendMessage(-4, var_94_string);
			} else if("" == "ok_button" != 0) {
					@SendMessage(-4, "cancel_button");
					var_22_string = "cancel_button";
			}
		}
	Label_599:
		for(;;) {

		}
	
	
		for(;;) {
			if(!(0 < var_0_int)) goto Label_599;
			string var_102_string; int var_103_int;
			var_38_int = var_103_int;
			func_2086(var_102_string, var_103_int);
			@SendMessage(-16, var_102_string);
			string var_105_string; int var_106_int;
			var_38_int = var_106_int;
			func_2070(var_105_string, var_106_int);
			@SendMessage(-16, var_105_string);
			var_38_int += 1;
		}
	
	}

	// @pe
	void event_100(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, string var_22_string, object var_23_object, object var_24_object, object var_25_object, object var_26_object, int var_27_int, int var_28_int, object var_29_object, int var_30_int)
	{
		@DestroyWindow();
	}

	void event_200(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, string var_22_string, object var_23_object, object var_24_object, object var_25_object, object var_26_object, int var_27_int, int var_28_int, object var_29_object, int var_30_int, string var_31_string, object var_32_object)
	{
		int var_33_int; int var_34_int;
		if(var_30_int == -20) {
			var_22_string = "";
			@Trace("iSlotResetButtons");
			return 2;
		}
		if(var_30_int == -4) {
			bool var_40_bool = true;
			string var_41_string;
			func_2086(var_41_string, 0);
			var_53_bool = var_31_string == var_41_string;
			if(var_53_bool != 1) {
				string var_54_string;
				func_2086(var_54_string, 1);
				var_56_bool = var_31_string == var_54_string;
				if(var_56_bool != 1)
					var_40_bool = false;
			}
			if(var_40_bool != 0) {
				if(var_2_int < 2) {
					var_22_string = "cancel_button";
					@SendMessage(-4, var_22_string);
					return 2;
				EMIT "GOTO 0x286";
				}
				var_2_int -= 2;
				func_1332(var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
			}
			bool var_148_bool = true;
			string var_149_string;
			func_2086(var_149_string, (var_0_int - 1));
			var_152_bool = var_31_string == var_149_string;
			if(var_152_bool != 1) {
				string var_153_string;
				func_2086(var_153_string, (var_0_int - 2));
				var_156_bool = var_31_string == var_153_string;
				if(var_156_bool != 1)
					var_148_bool = false;
			}
			if(var_148_bool != 0) {
				var_2_int += 2;
				func_1332(var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
			}
			bool var_158_bool = true;
			string var_159_string;
			func_2070(var_159_string, 0);
			var_171_bool = var_31_string == var_159_string;
			if(var_171_bool != 1) {
				string var_172_string;
				func_2070(var_172_string, 1);
				var_174_bool = var_31_string == var_172_string;
				if(var_174_bool != 1)
					var_158_bool = false;
			}
			if(var_158_bool != 0) {
				var_1_int -= 2;
				func_1245(var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
			}
			bool var_233_bool = true;
			string var_234_string;
			func_2070(var_234_string, (var_0_int - 1));
			var_237_bool = var_31_string == var_234_string;
			if(var_237_bool != 1) {
				string var_238_string;
				func_2070(var_238_string, (var_0_int - 2));
				var_241_bool = var_31_string == var_238_string;
				if(var_241_bool != 1)
					var_233_bool = false;
			}
			if(var_233_bool != 0) {
				var_1_int += 2;
				func_1245(var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
			}
			@SendMessage(-4, var_31_string);
			return 2;
		}
		int var_244_int; int var_245_int; string var_246_string;
		var_30_int = var_245_int;
		var_31_string = var_246_string;
		func_2299(var_245_int, var_246_string);
		var_244_int = var_34_int;
		if(var_34_int != -1) {
			if(var_30_int == 0) {
				int var_347_int;
				func_1749(var_27_int, var_28_int, var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_347_int, var_347_int);
			} else {
				int var_537_int;
				var_34_int = var_537_int;
				func_1815(var_28_int, var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int, var_537_int);
		}
			int var_631_int; int var_632_int; string var_633_string;
			var_30_int = var_632_int;
			var_31_string = var_633_string;
			func_2320(var_632_int, var_633_string);
			var_631_int = var_34_int;
			if(var_34_int != -1) {
				if(var_30_int == 0) {
					int var_648_int;
					func_1879(var_27_int, var_28_int, var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_648_int, var_648_int);
				} else {
					int var_703_int;
					var_34_int = var_703_int;
					func_1949(var_26_object, var_27_int, var_28_int, var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int, var_703_int);
			}
				if(var_31_string == "cancel_button") {
					func_872(var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_string, var_23_object, var_24_object, var_25_object, var_26_object, var_27_int, var_28_int, var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
					return 2;
				}
				if(var_31_string == "background_left") {
					@Trace("background_left" + var_30_int);
					var_1_int -= (2 * var_30_int);
					func_1245(var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
				}
				if(var_31_string == "background_right") {
					@Trace("background_right" + var_30_int);
					var_2_int -= (2 * var_30_int);
					func_1332(var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
				}
				if(var_31_string == "l_scroll_button_top") {
					var_1_int -= 2;
					func_1245(var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
					return 2;
				}
				if(var_31_string == "l_scroll_button_bottom") {
					var_1_int += 2;
					func_1245(var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
					return 2;
				}
				if(var_31_string == "r_scroll_button_top") {
					var_2_int -= 2;
					func_1332(var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
					return 2;
				}
				if(var_31_string == "r_scroll_button_bottom") {
					var_2_int += 2;
					func_1332(var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
					return 2;
				}
				if(var_31_string == "l_scrollbar") {
					int var_938_int;
					func_1207(var_33_int, var_34_int, var_938_int);
					var_1_int = ((var_938_int * var_30_int) / 100.0) + 0.5;
					var_1_int *= 2;
					func_1245(var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
					return 2;
				}
				if(var_31_string == "r_scrollbar") {
					int var_960_int;
					func_1226(var_33_int, var_34_int, var_960_int);
					var_2_int = ((var_960_int * var_30_int) / 100.0) + 0.5;
					var_2_int *= 2;
					func_1332(var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
					return 2;
				}
				if(var_31_string == "ok_button") {
					func_1436(var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
					return 2;
				}
				return 2;
			}
			return 2;
		}
	
	}

}


void func_0(bool var_325_bool, object var_326_object, int var_327_int, bool var_328_bool)
{
	if(var_327_int == 0) {
		var_325_bool = false;
		return 4;
	}
	int var_335_int; object var_336_object;
	var_326_object = var_336_object;
	func_2409(var_335_int, var_336_object);
	bool var_331_bool;
	@HasInvItemProperty(var_331_bool, var_335_int, ("BarterPrice" + var_327_int));
	if(!var_331_bool) { //@nz
		var_325_bool = true;
		return 4;
	}
	int var_342_int; object var_343_object;
	var_326_object = var_343_object;
	func_2409(var_342_int, var_343_object);
	int var_332_int;
	@GetInvItemProperty(var_332_int, var_342_int, ("BarterPrice" + var_327_int));
	bool var_346_bool = false;
	if(var_328_bool != 0) {
		if(var_332_int > 0)
			var_346_bool = true;
	}
	if(var_346_bool != 0) {
		var_325_bool = false;
		return 4;
	}
	bool var_350_bool = false;
	if(!var_328_bool) { //@nz
		if(var_332_int < 0)
			var_350_bool = true;
	}
	if(var_350_bool != 0) {
		var_325_bool = false;
		return 4;
	}
	var_325_bool = true;
}


void func_2048(int var_2_int, object var_7_object, int var_504_int, int var_505_int)
{
	int var_508_int;
	var_7_object->size(var_508_int); //@t
	if((var_505_int + var_2_int) >= var_508_int)
		var_504_int = 0;
	int var_509_int;
	var_7_object->get(var_509_int, (var_505_int + var_2_int)); //@t
	var_509_int = var_504_int;
}


void func_2562(int var_264_int, int var_265_int)
{
	object var_268_object;
	@GetContainer(var_268_object);
	int var_269_int;
	var_268_object->GetItemAmount(var_269_int, var_265_int);
	var_269_int = var_264_int;
}
EMIT "Stack[-2] = 0";


void func_1146(object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object)
{
	func_1177(0, var_12_object, var_13_object);
	func_1177(1, var_14_object, var_15_object);
	func_1177(2, var_16_object, var_17_object);
	func_1177(3, var_18_object, var_19_object);
	func_1177(4, var_20_object, var_21_object);
}


void func_2570(bool var_484_bool, object var_485_object, object var_486_object)
{
	bool var_488_bool;
	var_485_object->Compare(var_488_bool, var_486_object);
	var_488_bool = var_484_bool;
}


void func_2061(int var_391_int)
{
	float var_393_float;
	@GetGameTime(var_393_float);
	var_391_int = 1 + (var_393_float / 24);
}


// @pe
void func_2575(bool var_481_bool, object var_482_object, object var_483_object)
{
	object var_485_object;
	var_482_object = var_485_object;
	object var_486_object;
	var_483_object = var_486_object;
	bool var_484_bool;
	func_2570(var_484_bool, var_485_object, var_486_object);
	var_484_bool = var_481_bool;
}


void func_2320(int var_631_int, string var_633_string)
{
	int var_637_int;
	int var_638_int;
	func_2102(var_638_int);
	int var_636_int;
	var_638_int = var_636_int;
	
	while(0 < var_636_int) {
		string var_640_string; int var_641_int;
		var_637_int = var_641_int;
		func_2086(var_640_string, var_641_int);
		if(var_633_string == var_640_string)
			var_637_int = var_631_int;
		var_637_int += 1;
	}
	
	var_631_int = -1;
}


void func_1428(int var_3_int)
{
	@SendMessage(var_3_int, "r_money_slot");
}


// @pe
void func_2070(string var_175_string, int var_176_int)
{
	if((var_176_int + 1) < 10)
		var_175_string = "l_slot0" + (var_176_int + 1);
	var_175_string = "l_slot" + (var_176_int + 1);
}


void func_2583(bool var_997_bool, object var_998_object, object var_999_object, int var_1000_int)
{
	int var_1006_int; object var_1007_object;
	var_998_object->GetItemCount(var_1006_int, var_1000_int);
	int var_1008_int = 0;
	
	while(var_1008_int < var_1006_int) {
		var_998_object->GetItem(var_1007_object, var_1008_int, var_1000_int);
		bool var_1010_bool; object var_1011_object; object var_1012_object;
		var_999_object = var_1011_object;
		var_1007_object = var_1012_object;
		func_2570(var_1010_bool, var_1011_object, var_1012_object);
		if(var_1010_bool != 0) {
			var_998_object->RemoveItem(var_1008_int, 1, var_1000_int);
			var_997_bool = true;
		}
		var_1008_int += 1;
	}
	
	var_997_bool = false;
}
EMIT "Stack[-2] = 0";


void func_1815(int var_1_int, object var_9_object, object var_10_object, object var_11_object, int var_27_int, int var_28_int, object var_29_object, int var_537_int)
{
	int var_538_int; object var_539_object; int var_540_int; int var_541_int; int var_542_int; int var_543_int; int var_547_int;
	var_11_object->size(var_543_int); //@t
	if((var_537_int + var_1_int) >= var_543_int)
		return 10;
	object var_544_object;
	var_9_object->get(var_544_object, (var_537_int + var_1_int)); //@t
	bool var_551_bool; object var_552_object;
	var_544_object = var_552_object;
	func_0(var_551_bool, var_552_object, var_28_int, false);
	if(var_551_bool != 0)
		return 10;
	int var_545_int;
	var_11_object->get(var_545_int, (var_537_int + var_1_int)); //@t
	int var_546_int;
	var_10_object->get(var_546_int, (var_537_int + var_1_int)); //@t
	if(var_545_int > 0) {
		bool var_559_bool; object var_560_object;
		func_1591(var_538_int, var_539_object, var_540_int, var_541_int, var_542_int, var_543_int, var_560_object, var_545_int, var_546_int, var_547_int, var_559_bool, var_560_object);
		object var_609_object;
		var_544_object = var_609_object;
		func_74(var_546_int, var_547_int, var_609_object);
		var_545_int += -1;
		var_11_object->set((var_537_int + var_1_int), var_545_int); //@t
		int var_623_int; object var_624_object;
		var_544_object = var_624_object;
		func_2414(var_623_int, var_624_object, var_28_int);
		float var_626_float;
		func_2367(var_626_float, var_29_object, var_27_int, var_28_int);
		var_547_int = var_623_int * var_626_float;
		int var_630_int;
		var_547_int = var_630_int;
		func_1739(var_546_int, var_547_int, var_630_int);
	}
	func_1245(var_543_int, var_544_object, var_545_int, var_546_int, var_547_int);
	func_1332(var_542_int, var_543_int, var_544_object, var_545_int, var_546_int, var_547_int);
}
EMIT "Stack[-4] = 0";


void func_1432(int var_4_int)
{
	@SendMessage(var_4_int, "l_money_slot");
}


void func_1177(int var_384_int, object var_385_object, object var_386_object)
{
	object var_391_object; int var_393_int; int var_394_int;
	int var_396_int;
	var_384_int = var_396_int;
	int var_395_int;
	func_2520(var_395_int, var_396_int);
	int var_392_int;
	var_395_int = var_392_int;
	
	while(0 < var_392_int) {
		int var_398_int; int var_399_int; int var_400_int;
		var_384_int = var_399_int;
		var_394_int = var_400_int;
		func_2537(var_398_int, var_399_int, var_400_int);
		var_398_int = var_393_int;
		object var_401_object; int var_402_int; int var_403_int;
		var_384_int = var_402_int;
		var_394_int = var_403_int;
		func_2528(var_401_object, var_402_int, var_403_int);
		var_401_object = var_391_object;
		var_385_object->add(var_391_object);
		var_386_object->add(var_393_int);
		var_394_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


void func_1436(int var_3_int, int var_4_int, object var_23_object, object var_24_object, int var_28_int)
{
	bool var_990_bool; object var_991_object; object var_992_object;
	@GetContainer(var_992_object);
	object var_993_object;
	@GetPlayerContainer(var_993_object);
	int var_989_int;
	var_24_object->size(var_989_int); //@t
	int var_994_int = 0;
	
	while(var_994_int < var_989_int) {
		var_24_object->get(var_991_object, var_994_int); //@t
		bool var_997_bool; object var_998_object; object var_999_object; int var_1000_int;
		var_993_object = var_998_object;
		var_991_object = var_999_object;
		int var_1001_int; object var_1002_object;
		var_991_object = var_1002_object;
		func_2493(var_1001_int, var_1002_object);
		var_1001_int = var_1000_int;
		func_2583(var_997_bool, var_998_object, var_999_object, var_1000_int);
		var_997_bool = var_990_bool;
		if(!var_990_bool) //@nz
			@Trace("Error: failed to remove item");
		bool var_1017_bool; object var_1018_object; object var_1019_object;
		var_992_object = var_1018_object;
		func_2608(var_1017_bool, var_1018_object, var_1019_object, 0);
		var_1017_bool = var_990_bool;
		if(!var_990_bool) //@nz
			@Trace("Error: failed to add item");
		var_994_int += 1;
	}
	
	var_23_object->size(var_989_int); //@t
	int var_995_int = 0;
	
	while(var_995_int < var_989_int) {
		var_23_object->get(var_1019_object, var_995_int); //@t
		bool var_1028_bool; object var_1029_object; object var_1030_object;
		var_992_object = var_1029_object;
		var_991_object = var_1030_object;
		func_2583(var_1028_bool, var_1029_object, var_1030_object, 0);
		var_1028_bool = var_990_bool;
		if(!var_990_bool) //@nz
			@Trace("Error: failed to remove item");
		bool var_1034_bool; object var_1035_object; object var_1036_object; int var_1037_int;
		var_993_object = var_1035_object;
		var_991_object = var_1036_object;
		int var_1038_int; object var_1039_object;
		var_991_object = var_1039_object;
		func_2493(var_1038_int, var_1039_object);
		var_1038_int = var_1037_int;
		func_2608(var_1034_bool, var_1035_object, var_1036_object, var_1037_int);
		var_1034_bool = var_990_bool;
		if(!var_990_bool) //@nz
			@Trace("Error: failed to add item");
		var_995_int += 1;
	}
	
	if(var_28_int == 0)
		@SetPlayerMoneyCount(var_3_int);
	var_4_int = 0;
	int var_982_int;
	bool var_983_bool;
	object var_984_object;
	object var_985_object;
	object var_986_object;
	int var_987_int;
	int var_988_int;
	func_872(var_24_object, var_25_object, var_26_object, var_27_int, var_28_int, var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int, var_982_int, var_983_bool, var_984_object, var_985_object, var_986_object, var_987_int, var_988_int, var_989_int, var_990_bool, var_991_object, var_992_object, var_993_object, var_994_int, var_995_int);
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


void func_1949(int var_2_int, int var_3_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, int var_27_int, int var_28_int, object var_29_object, int var_703_int)
{
	int var_706_int; int var_707_int; int var_708_int; int var_709_int; int var_710_int; int var_715_int;
	var_7_object->size(var_710_int); //@t
	if((var_703_int + var_2_int) >= var_710_int)
		return 12;
	object var_711_object;
	var_5_object->get(var_711_object, (var_703_int + var_2_int)); //@t
	bool var_719_bool; object var_720_object;
	var_711_object = var_720_object;
	func_0(var_719_bool, var_720_object, var_28_int, true);
	if(var_719_bool != 0)
		return 12;
	int var_712_int;
	var_8_object->get(var_712_int, (var_703_int + var_2_int)); //@t
	if(var_712_int > 0)
		return 12;
	int var_713_int;
	var_7_object->get(var_713_int, (var_703_int + var_2_int)); //@t
	int var_714_int;
	var_6_object->get(var_714_int, (var_703_int + var_2_int)); //@t
	if(var_713_int > 0) {
		int var_730_int; object var_731_object;
		var_711_object = var_731_object;
		func_2414(var_730_int, var_731_object, var_28_int);
		float var_733_float;
		func_2341(var_733_float, var_29_object, var_27_int, var_28_int);
		var_715_int = var_730_int * var_733_float;
		if(var_715_int <= var_3_int) {
			bool var_738_bool; object var_739_object;
			func_1530(var_706_int, var_707_int, var_708_int, var_709_int, var_710_int, var_739_object, var_712_int, var_713_int, var_714_int, var_715_int, var_738_bool, var_739_object);
			if(var_738_bool != 0) {
				var_713_int += -1;
				object var_741_object;
				var_711_object = var_741_object;
				func_50(var_714_int, var_715_int, var_741_object);
				var_7_object->set((var_703_int + var_2_int), var_713_int); //@t
				int var_744_int; object var_745_object;
				var_711_object = var_745_object;
				func_2414(var_744_int, var_745_object, var_28_int);
				var_747_int = -var_744_int;
				float var_748_float;
				func_2341(var_748_float, var_29_object, var_27_int, var_28_int);
				func_1739(var_714_int, var_715_int, (var_747_int * var_748_float));
			}
		}
	}
	func_1245(var_711_object, var_712_int, var_713_int, var_714_int, var_715_int);
	func_1332(var_710_int, var_711_object, var_712_int, var_713_int, var_714_int, var_715_int);
}
EMIT "Stack[-5] = 0";


void func_2341(float var_682_float, object var_683_object, int var_684_int, int var_685_int)
{
	bool var_691_bool;
	if(var_685_int != 0)
		var_682_float = 1;
	float var_689_float = 1;
	int var_690_int = 1;
	
	while(var_690_int <= var_684_int) {
		var_683_object->HasProperty(("sellf" + var_690_int), var_691_bool);
		if(var_691_bool != 0)
			var_683_object->GetProperty(("sellf" + var_690_int), var_689_float);
		var_690_int += 1;
	}
	
	var_682_float = var_689_float / 100;
}


// @pe
void func_2086(string var_162_string, int var_163_int)
{
	if((var_163_int + 1) < 10)
		var_162_string = "r_slot0" + (var_163_int + 1);
	var_162_string = "r_slot" + (var_163_int + 1);
}


void func_1703(bool var_567_bool, object var_568_object, object var_569_object, object var_570_object)
{
	int var_575_int; object var_576_object; int var_578_int;
	var_569_object->size(var_575_int);
	int var_577_int = 0;
	
	for(;;) {
		if(!(var_577_int < var_575_int)) goto Label_1736;
		var_569_object->get(var_576_object, var_577_int);
		var_570_object->get(var_578_int, var_577_int);
		bool var_580_bool; object var_581_object; object var_582_object;
		var_568_object = var_581_object;
		var_576_object = var_582_object;
		func_2575(var_580_bool, var_581_object, var_582_object);
		if(var_580_bool != 0) {
			var_578_int += -1;
			if(var_578_int == 0) {
				var_569_object->remove(var_577_int);
				var_570_object->remove(var_577_int);
				break;
			}
			var_570_object->set(var_577_int, var_578_int);
		}
		var_577_int += 1;
	}
	var_567_bool = true;
	
Label_1736:
	var_567_bool = false;
}
EMIT "Stack[-3] = 0";


void func_2608(bool var_1017_bool, object var_1018_object, object var_1019_object, int var_1020_int)
{
	bool var_1022_bool;
	var_1018_object->AddItem(var_1022_bool, var_1019_object, var_1020_int, 1);
	var_1022_bool = var_1017_bool;
}


void func_50(object var_23_object, object var_24_object, object var_522_object)
{
	int var_526_int; object var_527_object;
	var_24_object->size(var_526_int); //@t
	int var_528_int = 0;
	
	while(var_528_int < var_526_int) {
		var_24_object->get(var_527_object, var_528_int); //@t
		bool var_530_bool; object var_531_object; object var_532_object;
		var_527_object = var_531_object;
		var_522_object = var_532_object;
		func_2570(var_530_bool, var_531_object, var_532_object);
		if(var_530_bool != 0)
			var_24_object->remove(var_528_int); //@t
		var_528_int += 1;
	}
	
	var_23_object->add(var_522_object); //@t
}
EMIT "Stack[-2] = 0";


void func_1332(int var_0_int, int var_2_int, object var_5_object, object var_6_object, object var_8_object, int var_28_int)
{
	int var_483_int; object var_484_object; int var_485_int; int var_486_int; int var_488_int; int var_489_int; object var_490_object;
	var_5_object->size(var_483_int); //@t
	if((var_2_int + var_0_int) > var_483_int) {
		var_494_int = var_483_int % 2;
		if(var_494_int == 0)
			var_2_int -= ((var_2_int + var_0_int) - var_483_int);
		else
			var_2_int -= (((var_2_int + var_0_int) - var_483_int) - 1);
	}
	if(var_2_int < 0)
		var_2_int = 0;
	int var_487_int = var_2_int;
	
	for(;;) {
		if(var_487_int < (var_2_int + var_0_int)) {
			if(var_487_int < var_483_int) {
				var_5_object->get(var_484_object, var_487_int); //@t
				var_6_object->get(var_486_int, var_487_int); //@t
				var_485_int = 0;
				int var_504_int;
				func_2048(var_489_int, var_490_object, var_504_int, (var_487_int - var_2_int));
				var_504_int = var_488_int;
				if(var_488_int > 0)
					var_485_int = var_485_int | 16384;
				var_8_object->get(var_489_int, var_487_int); //@t
				bool var_516_bool = true;
				bool var_517_bool; object var_518_object;
				func_0(var_517_bool, var_518_object, var_28_int, true);
				if(var_517_bool != 1) {
					var_522_bool = var_489_int > 0;
					if(var_522_bool != 1)
						var_516_bool = false;
				}
				if(var_516_bool != 0)
					var_485_int = var_485_int | 131072;
				@CreateIntVector(var_490_object);
				var_490_object->add(var_488_int);
				var_490_object->add(var_486_int);
				string var_525_string;
				func_2086(var_525_string, (var_487_int - var_2_int));
				@SendMessage(65536, var_525_string, var_490_object);
				string var_527_string;
				func_2086(var_527_string, (var_487_int - var_2_int));
				@SendMessage(var_485_int, var_527_string, var_518_object);
				var_490_object = null;
			} else {
			string var_531_string;
			func_2086(var_531_string, (var_487_int - var_2_int));
			@SendMessage(32768, var_531_string);
		}

		}
		var_487_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


void func_2102(int var_60_int)
{
	int var_65_int; int var_66_int;
	@GetWindowSize(var_65_int, var_66_int);
	int var_64_int = 18;
	bool var_67_bool = false;
	if(var_65_int == 1024) {
		if(var_66_int == 768)
			var_67_bool = true;
	}
	if(var_67_bool != 0) {
		var_64_int = 24;
	} else {
			bool var_72_bool = false;
			if(var_65_int == 1280) {
				if(var_66_int == 1024)
					var_72_bool = true;
			}
			if(var_72_bool == 0) goto Label_2130;
			var_64_int = 32;
	}
Label_2297:
	for(;;) {
		var_64_int = var_60_int;

	}
	
Label_2130:
	bool var_77_bool = false;
	if(var_65_int == 1280) {
		if(var_66_int == 720)
			var_77_bool = true;
	}
	if(var_77_bool != 0) {
		var_64_int = 22;
		goto Label_2297;
	}
	bool var_82_bool = false;
	if(var_65_int == 1280) {
		if(var_66_int == 768)
			var_82_bool = true;
	}
	if(var_82_bool != 0) {
		var_64_int = 24;
		goto Label_2297;
	}
	bool var_87_bool = false;
	if(var_65_int == 1280) {
		if(var_66_int == 800)
			var_87_bool = true;
	}
	if(var_87_bool != 0) {
		var_64_int = 24;
		goto Label_2297;
	}
	bool var_92_bool = false;
	if(var_65_int == 1360) {
		if(var_66_int == 768)
			var_92_bool = true;
	}
	if(var_92_bool != 0) {
		var_64_int = 24;
		goto Label_2297;
	}
	bool var_97_bool = false;
	if(var_65_int == 1366) {
		if(var_66_int == 768)
			var_97_bool = true;
	}
	if(var_97_bool != 0) {
		var_64_int = 24;
		goto Label_2297;
	}
	bool var_102_bool = false;
	if(var_65_int == 1440) {
		if(var_66_int == 900)
			var_102_bool = true;
	}
	if(var_102_bool != 0) {
		var_64_int = 28;
		goto Label_2297;
	}
	bool var_107_bool = false;
	if(var_65_int == 1536) {
		if(var_66_int == 864)
			var_107_bool = true;
	}
	if(var_107_bool != 0) {
		var_64_int = 26;
		goto Label_2297;
	}
	bool var_112_bool = false;
	if(var_65_int == 1600) {
		if(var_66_int == 1200)
			var_112_bool = true;
	}
	if(var_112_bool != 0) {
		var_64_int = 38;
		goto Label_2297;
	}
	bool var_117_bool = false;
	if(var_65_int == 1600) {
		if(var_66_int == 1200)
			var_117_bool = true;
	}
	if(var_117_bool != 0) {
		var_64_int = 38;
		goto Label_2297;
	}
	bool var_122_bool = false;
	if(var_65_int == 1600) {
		if(var_66_int == 900)
			var_122_bool = true;
	}
	if(var_122_bool != 0) {
		var_64_int = 28;
		goto Label_2297;
	}
	bool var_127_bool = false;
	if(var_65_int == 1600) {
		if(var_66_int == 1050)
			var_127_bool = true;
	}
	if(var_127_bool != 0) {
		var_64_int = 32;
		goto Label_2297;
	}
	bool var_132_bool = false;
	if(var_65_int == 1600) {
		if(var_66_int == 1050)
			var_132_bool = true;
	}
	if(var_132_bool != 0) {
		var_64_int = 32;
		goto Label_2297;
	}
	bool var_137_bool = false;
	if(var_65_int == 1920) {
		if(var_66_int == 1080)
			var_137_bool = true;
	}
	if(var_137_bool != 0) {
		var_64_int = 34;
		goto Label_2297;
	}
	bool var_142_bool = false;
	if(var_65_int == 1920) {
		if(var_66_int == 1200)
			var_142_bool = true;
	}
	if(var_142_bool == 0) goto Label_2297;
	var_64_int = 38;
}


void func_1207(int var_0_int, object var_9_object, int var_938_int)
{
	int var_941_int;
	var_9_object->size(var_941_int); //@t
	if(((((var_941_int + 2) - 1) / 2) - (var_0_int / 2)) < 0)
		var_938_int = 0;
	int var_942_int = var_938_int;
}


void func_1591(object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, bool var_559_bool, object var_560_object)
{
	object var_564_object;
	var_560_object = var_564_object;
	int var_563_int;
	func_2493(var_563_int, var_564_object);
	int var_562_int;
	var_563_int = var_562_int;
	if(var_562_int == 0) {
		bool var_567_bool; object var_568_object;
		var_560_object = var_568_object;
		func_1703(var_567_bool, var_568_object, var_12_object, var_13_object);
		var_567_bool = var_559_bool;
		return 2;
	EMIT "GOTO 0x66c";
	}
	if(var_562_int == 1) {
		bool var_589_bool; object var_590_object;
		var_560_object = var_590_object;
		func_1703(var_589_bool, var_590_object, var_14_object, var_15_object);
		var_589_bool = var_559_bool;
		return 2;
	EMIT "GOTO 0x66c";
	}
	if(var_562_int == 2) {
		bool var_595_bool; object var_596_object;
		var_560_object = var_596_object;
		func_1703(var_595_bool, var_596_object, var_16_object, var_17_object);
		var_595_bool = var_559_bool;
		return 2;
	EMIT "GOTO 0x66c";
	}
	if(var_562_int == 3) {
		bool var_601_bool; object var_602_object;
		var_560_object = var_602_object;
		func_1703(var_601_bool, var_602_object, var_18_object, var_19_object);
		var_601_bool = var_559_bool;
		return 2;
	}
	bool var_605_bool; object var_606_object;
	var_560_object = var_606_object;
	func_1703(var_605_bool, var_606_object, var_20_object, var_21_object);
	var_605_bool = var_559_bool;
}


void func_2493(int var_451_int, object var_452_object)
{
	object var_456_object;
	var_452_object = var_456_object;
	int var_455_int;
	func_2409(var_455_int, var_456_object);
	int var_454_int;
	@GetInvItemProperty(var_454_int, var_455_int, "Category");
	var_454_int = var_451_int;
}


void func_2367(float var_426_float, object var_427_object, int var_428_int, int var_429_int)
{
	bool var_435_bool;
	if(var_429_int != 0)
		var_426_float = 1;
	float var_433_float = 1;
	int var_434_int = 1;
	
	while(var_434_int <= var_428_int) {
		var_427_object->HasProperty(("buyf" + var_434_int), var_435_bool);
		if(var_435_bool != 0)
			var_427_object->GetProperty(("buyf" + var_434_int), var_433_float);
		var_434_int += 1;
	}
	
	var_426_float = var_433_float / 100;
}


void func_2503(int var_472_int, object var_473_object)
{
	object var_477_object;
	var_473_object = var_477_object;
	int var_476_int;
	func_2409(var_476_int, var_477_object);
	int var_475_int;
	@GetItemMaxStackSize(var_476_int, var_475_int);
	var_475_int = var_472_int;
}


void func_969(void)
{
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, 0, false);
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, 1, false);
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, 2, false);
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, 3, false);
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, 4, false);
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, 0, true);
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, 1, true);
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, 2, true);
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, 3, true);
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, 4, true);
}


void func_1226(int var_0_int, object var_5_object, int var_960_int)
{
	int var_963_int;
	var_5_object->size(var_963_int); //@t
	if(((((var_963_int + 2) - 1) / 2) - (var_0_int / 2)) < 0)
		var_960_int = 0;
	int var_964_int = var_960_int;
}


// @pe
void func_1739(int var_3_int, int var_4_int, int var_534_int)
{
	var_3_int += var_534_int;
	var_4_int -= var_534_int;
	func_1428(var_534_int);
	func_1432(var_534_int);
}


void func_74(object var_23_object, object var_24_object, object var_609_object)
{
	int var_613_int; object var_614_object;
	var_23_object->size(var_613_int); //@t
	int var_615_int = 0;
	
	while(var_615_int < var_613_int) {
		var_23_object->get(var_614_object, var_615_int); //@t
		bool var_617_bool; object var_618_object; object var_619_object;
		var_614_object = var_618_object;
		var_609_object = var_619_object;
		func_2570(var_617_bool, var_618_object, var_619_object);
		if(var_617_bool != 0)
			var_23_object->remove(var_615_int); //@t
		var_615_int += 1;
	}
	
	var_24_object->add(var_609_object); //@t
}
EMIT "Stack[-2] = 0";


void func_2512(int var_258_int)
{
	object var_262_object;
	@GetContainer(var_262_object);
	int var_261_int;
	var_262_object->GetItemCount(var_261_int);
	var_261_int = var_258_int;
}
EMIT "Stack[-1] = 0";


void func_1749(int var_1_int, int var_3_int, object var_9_object, object var_10_object, object var_11_object, int var_27_int, int var_28_int, object var_29_object, int var_347_int)
{
	int var_348_int; object var_349_object; int var_350_int; int var_351_int; int var_352_int; int var_353_int; int var_357_int;
	var_11_object->size(var_353_int); //@t
	if((var_347_int + var_1_int) >= var_353_int)
		return 10;
	object var_354_object;
	var_9_object->get(var_354_object, (var_347_int + var_1_int)); //@t
	bool var_361_bool; object var_362_object;
	var_354_object = var_362_object;
	func_0(var_361_bool, var_362_object, var_28_int, false);
	if(var_361_bool != 0)
		return 10;
	int var_355_int;
	var_11_object->get(var_355_int, (var_347_int + var_1_int)); //@t
	int var_356_int;
	var_10_object->get(var_356_int, (var_347_int + var_1_int)); //@t
	if(var_355_int < var_356_int) {
		int var_368_int; object var_369_object;
		var_354_object = var_369_object;
		func_2414(var_368_int, var_369_object, var_28_int);
		float var_426_float;
		func_2367(var_426_float, var_29_object, var_27_int, var_28_int);
		var_357_int = var_368_int * var_426_float;
		if(var_357_int <= var_3_int) {
			bool var_447_bool; object var_448_object;
			func_1530(var_348_int, var_349_object, var_350_int, var_351_int, var_352_int, var_353_int, var_448_object, var_355_int, var_356_int, var_357_int, var_447_bool, var_448_object);
			if(var_447_bool != 0) {
				var_355_int += 1;
				var_11_object->set((var_347_int + var_1_int), var_355_int); //@t
				object var_522_object;
				var_354_object = var_522_object;
				func_50(var_356_int, var_357_int, var_522_object);
				int var_534_int = -var_357_int;
				func_1739(var_356_int, var_357_int, var_534_int);
			}
		}
	}
	func_1245(var_353_int, var_354_object, var_355_int, var_356_int, var_357_int);
	func_1332(var_352_int, var_353_int, var_354_object, var_355_int, var_356_int, var_357_int);
}
EMIT "Stack[-4] = 0";


void func_1879(int var_2_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, int var_27_int, int var_28_int, object var_29_object, int var_648_int)
{
	int var_651_int; int var_652_int; int var_653_int; int var_654_int; int var_655_int; int var_660_int;
	var_7_object->size(var_655_int); //@t
	if((var_648_int + var_2_int) >= var_655_int)
		return 12;
	object var_656_object;
	var_5_object->get(var_656_object, (var_648_int + var_2_int)); //@t
	bool var_664_bool; object var_665_object;
	var_656_object = var_665_object;
	func_0(var_664_bool, var_665_object, var_28_int, true);
	if(var_664_bool != 0)
		return 12;
	int var_657_int;
	var_8_object->get(var_657_int, (var_648_int + var_2_int)); //@t
	if(var_657_int > 0)
		return 12;
	int var_658_int;
	var_7_object->get(var_658_int, (var_648_int + var_2_int)); //@t
	int var_659_int;
	var_6_object->get(var_659_int, (var_648_int + var_2_int)); //@t
	if(var_658_int < var_659_int) {
		bool var_674_bool; object var_675_object;
		func_1591(var_651_int, var_652_int, var_653_int, var_654_int, var_655_int, var_675_object, var_657_int, var_658_int, var_659_int, var_660_int, var_674_bool, var_675_object);
		object var_676_object;
		var_656_object = var_676_object;
		func_74(var_659_int, var_660_int, var_676_object);
		var_658_int += 1;
		var_7_object->set((var_648_int + var_2_int), var_658_int); //@t
		int var_679_int; object var_680_object;
		var_656_object = var_680_object;
		func_2414(var_679_int, var_680_object, var_28_int);
		float var_682_float;
		func_2341(var_682_float, var_29_object, var_27_int, var_28_int);
		var_660_int = var_679_int * var_682_float;
		int var_702_int;
		var_660_int = var_702_int;
		func_1739(var_659_int, var_660_int, var_702_int);
	}
	func_1245(var_656_object, var_657_int, var_658_int, var_659_int, var_660_int);
	func_1332(var_655_int, var_656_object, var_657_int, var_658_int, var_659_int, var_660_int);
}
EMIT "Stack[-5] = 0";


void func_2520(int var_290_int, int var_291_int)
{
	object var_295_object;
	@GetPlayerContainer(var_295_object);
	int var_294_int;
	var_295_object->GetItemCount(var_294_int, var_291_int);
	var_294_int = var_290_int;
}
EMIT "Stack[-1] = 0";


void func_2393(int var_147_int)
{
	object var_151_object;
	@GetContainer(var_151_object);
	bool var_152_bool;
	var_151_object->HasProperty("barter", var_152_bool);
	if(!var_152_bool) //@nz
		var_147_int = 0;
	int var_153_int;
	var_151_object->GetProperty("barter", var_153_int);
	var_153_int = var_147_int;
}
EMIT "Stack[-3] = 0";


void func_1115(object var_9_object, object var_10_object, object var_11_object)
{
	int var_254_int; object var_256_object; int var_257_int;
	int var_258_int;
	func_2512(var_258_int);
	int var_253_int;
	var_258_int = var_253_int;
	
	while(0 < var_253_int) {
		int var_264_int; int var_265_int;
		var_257_int = var_265_int;
		func_2562(var_264_int, var_265_int);
		var_264_int = var_254_int;
		object var_270_object; int var_271_int;
		var_257_int = var_271_int;
		func_2553(var_270_object, var_271_int);
		var_270_object = var_256_object;
		var_9_object->add(var_256_object); //@t
		var_10_object->add(var_254_int); //@t
		var_11_object->add(0); //@t
		var_257_int += 1;
	}
	
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1245(int var_0_int, int var_1_int, object var_9_object, object var_10_object, int var_28_int)
{
	int var_424_int; int var_425_int; object var_427_object; int var_428_int; int var_429_int; object var_430_object;
	var_9_object->size(var_424_int); //@t
	if((var_1_int + var_0_int) > var_424_int) {
		var_434_int = var_424_int % 2;
		if(var_434_int == 0)
			var_1_int -= ((var_1_int + var_0_int) - var_424_int);
		else
			var_1_int -= (((var_1_int + var_0_int) - var_424_int) - 1);
	}
	if(var_1_int < 0)
		var_1_int = 0;
	int var_426_int = var_1_int;
	
	for(;;) {
		if(var_426_int < (var_1_int + var_0_int)) {
			if(var_426_int < var_424_int) {
				var_9_object->get(var_427_object, var_426_int); //@t
				var_10_object->get(var_428_int, var_426_int); //@t
				var_425_int = 0;
				int var_444_int;
				func_2035(var_429_int, var_430_object, var_444_int, (var_426_int - var_1_int));
				var_444_int = var_429_int;
				if(var_429_int > 0)
					var_425_int = var_425_int | 16384;
				bool var_456_bool; object var_457_object;
				func_0(var_456_bool, var_457_object, var_28_int, false);
				if(var_456_bool != 0)
					var_425_int = var_425_int | 131072;
				@CreateIntVector(var_430_object);
				var_430_object->add(var_429_int);
				var_430_object->add(var_428_int);
				string var_462_string;
				func_2070(var_462_string, (var_426_int - var_1_int));
				@SendMessage(65536, var_462_string, var_430_object);
				string var_464_string;
				func_2070(var_464_string, (var_426_int - var_1_int));
				@SendMessage(var_425_int, var_464_string, var_457_object);
				var_430_object = null;
				var_427_object = null;
			} else {
			string var_468_string;
			func_2070(var_468_string, (var_426_int - var_1_int));
			@SendMessage(32768, var_468_string);
		}

		}
		var_426_int += 1;
	}
	
}


void func_2528(object var_315_object, int var_316_int, int var_317_int)
{
	object var_320_object;
	@GetPlayerContainer(var_320_object);
	object var_321_object;
	var_320_object->GetItem(var_321_object, var_317_int, var_316_int);
	var_321_object = var_315_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_872(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, object var_23_object, object var_24_object, int var_28_int)
{
	var_1_int = 0;
	var_2_int = 0;
	var_4_int = 0;
	if(var_28_int == 0)
		@GetPlayerMoneyCount(var_3_int);
	else
		var_3_int = 0;
	var_23_object->clear(); //@t
	var_24_object->clear(); //@t
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
	var_20_object->clear(); //@t
	var_21_object->clear(); //@t
	int var_244_int;
	int var_245_int;
	func_1115(var_59_float, var_244_int, var_245_int);
	func_969();
	func_1146(var_52_int, var_53_string, var_54_string, var_55_string, var_56_string, var_57_object, var_58_object, var_59_float, var_244_int, var_245_int);
	func_1245(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int);
	func_1432(var_245_int);
	func_1332(var_56_string, var_57_object, var_58_object, var_59_float, var_244_int, var_245_int);
	func_1428(var_245_int);
	var_9_object->size(var_245_int); //@t
	if(var_245_int <= var_0_int)
		@SendMessage(16384, "l_scrollbar");
	else
		@SendMessage(0, "l_scrollbar");

	var_5_object->size(var_245_int); //@t
	if(var_245_int <= var_0_int)
		@SendMessage(16384, "r_scrollbar");
	else
		@SendMessage(0, "r_scrollbar");

	
}


void func_2409(int var_335_int, object var_336_object)
{
	int var_338_int;
	var_336_object->GetItemID(var_338_int);
	var_338_int = var_335_int;
}


void func_2537(int var_308_int, int var_309_int, int var_310_int)
{
	object var_313_object;
	@GetPlayerContainer(var_313_object);
	int var_314_int;
	var_313_object->GetItemAmount(var_314_int, var_310_int, var_309_int);
	var_314_int = var_308_int;
}
EMIT "Stack[-2] = 0";


void func_2414(int var_368_int, object var_369_object, int var_370_int)
{
	int var_380_int; int var_381_int; int var_382_int; string var_383_string; bool var_384_bool; bool var_385_bool; int var_386_int; bool var_387_bool; int var_388_int;
	if(var_370_int == 0) {
		int var_391_int;
		func_2061(var_391_int);
		var_391_int = var_380_int;
		var_381_int = 0;
		var_382_int = 1;

		for(;;) {
			if(var_382_int <= var_380_int) {
				var_383_string = "Price";
				if(var_382_int != 1)
					var_383_string += var_382_int;
				int var_400_int; object var_401_object;
				var_369_object = var_401_object;
				func_2409(var_400_int, var_401_object);
				@HasInvItemProperty(var_384_bool, var_400_int, var_383_string);
				if(!var_384_bool) { //@nz
				} else {
				int var_404_int; object var_405_object;
				var_369_object = var_405_object;
				func_2409(var_404_int, var_405_object);
				@GetInvItemProperty(var_381_int, var_404_int, var_383_string);
			}
			var_369_object->HasProperty(var_385_bool, "durability");
			if(var_385_bool != 0) {
				var_369_object->GetProperty(var_386_int, "durability");
				var_381_int *= (0.5 * (1.0 + (var_386_int / 100.0)));
			}
			var_381_int = var_368_int;
			return 18;
	}
		int var_415_int; object var_416_object;
		var_369_object = var_416_object;
		func_2409(var_415_int, var_416_object);
		@HasInvItemProperty(var_387_bool, var_415_int, ("BarterPrice" + var_370_int));
		if(!var_387_bool) //@nz
			return 18;
		int var_420_int; object var_421_object;
		var_369_object = var_421_object;
		func_2409(var_420_int, var_421_object);
		@GetInvItemProperty(var_388_int, var_420_int, ("BarterPrice" + var_370_int));
		if(var_388_int > 0) {
			var_388_int = 0;
			return 18;
		}
		var_368_int = -var_388_int;
		return 18;
		}
		var_382_int += 1;
	}
	
}


void func_2545(bool var_297_bool, int var_298_int, int var_299_int)
{
	object var_302_object;
	@GetPlayerContainer(var_302_object);
	bool var_303_bool;
	var_302_object->IsItemSelected(var_303_bool, var_299_int, var_298_int);
	var_303_bool = var_297_bool;
}
EMIT "Stack[-2] = 0";


void func_2035(int var_1_int, object var_11_object, int var_444_int, int var_445_int)
{
	int var_448_int;
	var_11_object->size(var_448_int); //@t
	if((var_445_int + var_1_int) >= var_448_int)
		var_444_int = 0;
	int var_449_int;
	var_11_object->get(var_449_int, (var_445_int + var_1_int)); //@t
	var_449_int = var_444_int;
}


void func_1652(bool var_460_bool, object var_461_object, object var_462_object, object var_463_object)
{
	int var_468_int; object var_469_object; int var_470_int; int var_471_int;
	var_462_object->size(var_468_int);
	int var_472_int; object var_473_object;
	var_461_object = var_473_object;
	func_2503(var_472_int, var_473_object);
	if(var_472_int > 1) {
		var_470_int = 0;

		for(;;) {
			if(!(var_470_int < var_468_int)) goto Label_1690;
			var_462_object->get(var_469_object, var_470_int);
			var_463_object->get(var_471_int, var_470_int);
			bool var_481_bool; object var_482_object; object var_483_object;
			var_461_object = var_482_object;
			var_469_object = var_483_object;
			func_2575(var_481_bool, var_482_object, var_483_object);
			if(var_481_bool != 0) {
				int var_489_int; object var_490_object;
				var_461_object = var_490_object;
				func_2503(var_489_int, var_490_object);
				if(var_471_int < var_489_int)
					var_463_object->set(var_470_int, (var_471_int + 1));
				var_460_bool = true;
				return 8;
			}
			var_470_int += 1;
		}
	}
Label_1690:
	if(var_468_int < 12) {
		var_462_object->add(var_461_object);
		var_463_object->add(1);
		var_460_bool = true;
		return 8;
	}
	var_460_bool = false;
}
EMIT "Stack[-3] = 0";


void func_2553(object var_270_object, int var_271_int)
{
	object var_274_object;
	@GetContainer(var_274_object);
	object var_275_object;
	var_274_object->GetItem(var_275_object, var_271_int);
	var_275_object = var_270_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1530(object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, bool var_447_bool, object var_448_object)
{
	object var_452_object;
	var_448_object = var_452_object;
	int var_451_int;
	func_2493(var_451_int, var_452_object);
	int var_450_int;
	var_451_int = var_450_int;
	if(var_450_int == 0) {
		bool var_460_bool; object var_461_object;
		var_448_object = var_461_object;
		func_1652(var_460_bool, var_461_object, var_12_object, var_13_object);
		var_460_bool = var_447_bool;
		return 2;
	EMIT "GOTO 0x62f";
	}
	if(var_450_int == 1) {
		bool var_500_bool; object var_501_object;
		var_448_object = var_501_object;
		func_1652(var_500_bool, var_501_object, var_14_object, var_15_object);
		var_500_bool = var_447_bool;
		return 2;
	EMIT "GOTO 0x62f";
	}
	if(var_450_int == 2) {
		bool var_506_bool; object var_507_object;
		var_448_object = var_507_object;
		func_1652(var_506_bool, var_507_object, var_16_object, var_17_object);
		var_506_bool = var_447_bool;
		return 2;
	EMIT "GOTO 0x62f";
	}
	if(var_450_int == 3) {
		bool var_512_bool; object var_513_object;
		var_448_object = var_513_object;
		func_1652(var_512_bool, var_513_object, var_18_object, var_19_object);
		var_512_bool = var_447_bool;
		return 2;
	}
	bool var_516_bool; object var_517_object;
	var_448_object = var_517_object;
	func_1652(var_516_bool, var_517_object, var_20_object, var_21_object);
	var_516_bool = var_447_bool;
}


void func_2299(int var_244_int, string var_246_string)
{
	int var_250_int;
	int var_251_int;
	func_2102(var_251_int);
	int var_249_int;
	var_251_int = var_249_int;
	
	while(0 < var_249_int) {
		string var_339_string; int var_340_int;
		var_250_int = var_340_int;
		func_2070(var_339_string, var_340_int);
		if(var_246_string == var_339_string)
			var_250_int = var_244_int;
		var_250_int += 1;
	}
	
	var_244_int = -1;
}


void func_1020(object var_5_object, object var_6_object, object var_7_object, object var_8_object, int var_28_int, int var_278_int, bool var_279_bool)
{
	object var_285_object; int var_287_int; int var_288_int; bool var_289_bool;
	int var_291_int;
	var_278_int = var_291_int;
	int var_290_int;
	func_2520(var_290_int, var_291_int);
	int var_286_int;
	var_290_int = var_286_int;
	
	for(;;) {
		if(0 < var_286_int) {
			bool var_297_bool; int var_298_int; int var_299_int;
			var_278_int = var_298_int;
			var_288_int = var_299_int;
			func_2545(var_297_bool, var_298_int, var_299_int);
			var_297_bool = var_289_bool;
			bool var_304_bool = false;
			if(!var_279_bool) { //@nz
				if(var_289_bool != 0)
					var_304_bool = true;
			}
			if(var_304_bool != 0) {
			} else {
			int var_308_int; int var_309_int; int var_310_int;
			var_278_int = var_309_int;
			var_288_int = var_310_int;
			func_2537(var_308_int, var_309_int, var_310_int);
			var_308_int = var_287_int;
			object var_315_object; int var_316_int; int var_317_int;
			var_278_int = var_316_int;
			var_288_int = var_317_int;
			func_2528(var_315_object, var_316_int, var_317_int);
			var_315_object = var_285_object;
			bool var_322_bool = false;
			if(var_279_bool != 0) {
				bool var_324_bool = true;
				bool var_325_bool; object var_326_object;
				func_0(var_325_bool, var_326_object, var_28_int, true);
				if(var_325_bool != 1) {
					if(var_289_bool != 1)
						var_324_bool = false;
				}
				if(var_324_bool != 0)
					var_322_bool = true;
			}
			if(var_322_bool != 0) {
				var_5_object->add(var_326_object); //@t
				var_6_object->add(var_287_int); //@t
				var_7_object->add(0); //@t
				var_8_object->add(1); //@t
				goto Label_1110;
			}
			bool var_357_bool = false;
			if(!var_279_bool) { //@nz
				bool var_359_bool; object var_360_object;
				var_285_object = var_360_object;
				func_0(var_359_bool, var_360_object, var_28_int, true);
				if(!var_359_bool) //@nz
					var_357_bool = true;
			}
			if(var_357_bool == 0) goto Label_1110;
			var_5_object->add(var_285_object); //@t
			var_6_object->add(var_287_int); //@t
			var_7_object->add(0); //@t
			var_8_object->add(0); //@t
		}
		}
	Label_1110:
		var_288_int += 1;
	}
	
}
EMIT "Stack[-5] = 0";


