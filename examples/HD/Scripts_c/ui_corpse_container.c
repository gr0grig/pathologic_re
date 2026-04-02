maintask task_0
{
	void init(int var_0_int, object var_1_object, int var_2_int, int var_3_int)
	{
		object var_11_object; string var_12_string; string var_13_string; int var_14_int;
		@CreateWindow("inventory_base.xml", false, var_1_object);
		object var_15_object;
		func_683(var_15_object);
		var_3_int = 2;
		int var_10_int = 0;
	
		for(;;) {
			if(var_10_int < 4) {
				@CreateStringVector(var_11_object);
				if((var_10_int - 1) >= 0) {
					string var_72_string;
					func_1672(var_72_string, (var_10_int - 1));
					var_72_string = var_12_string;
				} else {
					var_12_string = "$parent";
			}
				var_14_int = 0;

				while(var_14_int < 4) {
					@CreateStringVector(var_15_object);
					string var_98_string;
					func_1688(var_98_string, (((var_14_int + 4) - 1) % 4));
					var_15_object->add(var_98_string);
					string var_115_string;
					func_1688(var_115_string, (((var_14_int + 4) + 1) % 4));
					var_15_object->add(var_115_string);
					string var_123_string; int var_124_int;
					var_14_int = var_124_int;
					func_1688(var_123_string, var_124_int);
					@SendMessage(-1, var_123_string, var_15_object);
					var_15_object = null;
					var_14_int += 1;
				}

				func_930(var_15_object, 0);
			}
			if((var_10_int + 1) < 4) {
				string var_89_string;
				func_1672(var_89_string, (var_10_int + 1));
				var_89_string = var_13_string;
			} else {

			}
			var_11_object->add(var_12_string);
			var_11_object->add("$parent");
			string var_93_string; int var_94_int;
			var_10_int = var_94_int;
			func_1672(var_93_string, var_94_int);
			@SendMessage(-1, var_93_string, var_11_object);
			var_11_object = null;
			var_10_int += 1;
		}
	
	}

	// @pe
	void OnPlayerHolsterWeapon(int var_0_int, object var_1_object, int var_2_int, int var_3_int, int var_4_int, int var_5_int, float var_6_float)
	{
		if(var_6_float > 0) {
		} else if((float)1 < 0) {
			var_6_float = -1;
		}
		if((var_2_int + var_6_float) < 0)
			var_2_int = 0;
		func_683(var_6_float);
	
	}

	// @pe
	void event_100(int var_0_int, object var_1_object, int var_2_int, int var_3_int, int var_4_int)
	{
		@DestroyWindow();
	}

	// @pe
	void event_102(int var_0_int, object var_1_object, int var_2_int, int var_3_int, int var_4_int)
	{
		int var_5_int;
		func_288(var_5_int, var_5_int);
	}

	// @pe
	void event_101(int var_0_int, object var_1_object, int var_2_int, int var_3_int, int var_4_int)
	{
		if(var_4_int == 266) {
			if(var_0_int == 0) {
				func_1335(var_4_int, 1);
			} else {
					if(var_0_int == 1)
						func_1335(var_4_int, 2);

				for(;;) {
					} else {
				if(var_0_int == 2) {
					func_1335(var_4_int, 3);
				} else if(var_0_int == 3) {
					func_1335(var_4_int, 4);
				} else if(var_0_int == 4) {
					func_1335(var_4_int, 0);
				}
		}
			if(!(var_4_int == 265)) goto Label_1100;
			if(var_0_int == 0) {
				func_1335(var_4_int, 4);
			} else if(var_0_int == 1) {
				func_1335(var_4_int, 0);
			} else if(var_0_int == 2) {
				func_1335(var_4_int, 1);
			} else if(var_0_int == 3) {
				func_1335(var_4_int, 2);
			} else if(var_0_int == 4) {
				func_1335(var_4_int, 3);
				}
			}
		Label_1100:
			int var_44_int;
			func_122(var_44_int, var_44_int);
			return 0;

		}
	
	}

	// @pe
	void OnSee(int var_0_int, object var_1_object, int var_2_int, int var_3_int, float var_4_float)
	{
		func_1569(var_0_int);
		func_1370();
		func_627();
	}

	void event_200(int var_0_int, object var_1_object, int var_2_int, int var_3_int, int var_4_int, string var_5_string, object var_6_object)
	{
		bool var_13_bool; int var_14_int; int var_15_int; object var_16_object; int var_17_int; object var_18_object;
		if(var_4_int < 0) {
			bool var_21_bool; int var_22_int; string var_23_string; object var_24_object;
			var_4_int = var_22_int;
			var_5_string = var_23_string;
			var_6_object = var_24_object;
			func_460(var_18_object, var_21_bool, var_22_int, var_23_string, var_24_object);
			var_21_bool = false;
			return 12;
		}
		if(var_5_string == "button_weapon") {
			func_1335(var_18_object, 0);
			var_13_bool = true;
		} else if(var_5_string == "button_clothes") {
				func_1335(var_18_object, 1);
				var_13_bool = true;
		}
	Label_1323:
		for(;;) {
			if(!var_13_bool) { //@nz
				bool var_372_bool; int var_373_int; string var_374_string; object var_375_object;
				var_4_int = var_373_int;
				var_5_string = var_374_string;
				var_6_object = var_375_object;
				func_460(var_18_object, var_372_bool, var_373_int, var_374_string, var_375_object);
				var_372_bool = var_13_bool;
			}
			if(var_13_bool != 0) {
			}
			return 12;

		}
	
		if(var_5_string == "button_medcine") {
			func_1335(var_18_object, 2);
			var_13_bool = true;
		} else if(var_5_string == "button_food") {
			func_1335(var_18_object, 3);
			var_13_bool = true;
		} else if(var_5_string == "button_other") {
			func_1335(var_18_object, 4);
		} else if(var_5_string == "button_detector") {
		} else if(var_5_string == "button_anticeptic") {
		}
		if(var_4_int != 0) {
			@GetVariable("noinv_drop", var_14_int);
			if(var_14_int != 0)
				return 12;
		}
	
		for(;;) {
			if(!(0 < 12)) goto Label_1323;
			string var_399_string; int var_400_int;
			var_15_int = var_400_int;
			func_1656(var_399_string, var_400_int);
			if(var_5_string == var_399_string) {
				object var_412_object;
				func_454(var_412_object);
				var_412_object = var_16_object;
				var_16_object->GetItemCount(var_17_int, var_0_int);
				if(var_17_int > var_15_int) {
					var_16_object->GetItem(var_18_object, var_15_int, var_0_int);
					bool var_414_bool; object var_415_object;
					func_1177(var_415_object);
					if(!var_414_bool) { //@nz
						bool var_417_bool; int var_418_int; int var_419_int;
						var_15_int = var_418_int;
						var_419_int = var_4_int == 0;
						func_670(var_415_object, var_417_bool, var_418_int, var_419_int);
						var_417_bool = true;
					}
					var_18_object = null;
				}
				goto Label_1323;
			EMIT "Stack[-3] = 0";
			}
			var_15_int += 1;
		}
	}

}


void func_900(int var_24_int)
{
	object var_33_object; object var_37_object; int var_38_int; int var_39_int; bool var_40_bool;
	@GetContainer(var_33_object);
	int var_34_int;
	var_33_object->GetItemCount(var_34_int);
	int var_35_int = 0;
	int var_36_int = 0;
	
	while(var_36_int < var_34_int) {
		var_33_object->GetItem(var_37_object, var_36_int);
		var_37_object->GetItemID(var_38_int);
		var_33_object->GetItemAmount(var_39_int, var_36_int);
		var_40_bool = false;
		var_37_object->HasProperty(var_40_bool, "Organ");
		if(!var_40_bool) //@nz
			var_35_int += 1;
		var_37_object = null;
		var_36_int += 1;
	}
	
	var_35_int = var_24_int;
}
EMIT "Stack[-8] = 0";


// @pe
void func_1672(string var_72_string, int var_73_int)
{
	if((var_73_int + 1) < 10)
		var_72_string = "cslot0" + (var_73_int + 1);
	var_72_string = "cslot" + (var_73_int + 1);
}


void func_654(int var_2_int, int var_344_int)
{
	bool var_350_bool;
	bool var_353_bool;
	var_350_bool = var_353_bool;
	int var_352_int;
	func_1439(var_352_int, var_353_bool, (var_344_int + var_2_int));
	int var_351_int;
	var_352_int = var_351_int;
	func_1335(var_350_bool, var_351_int);
	if(!var_350_bool) { //@nz
	}
	func_683(var_350_bool);
}


// @pe
void func_1688(string var_98_string, int var_99_int)
{
	if((var_99_int + 1) < 10)
		var_98_string = "ccslot0" + (var_99_int + 1);
	var_98_string = "ccslot" + (var_99_int + 1);
}


// @pe
void func_1177(bool var_196_bool)
{
	var_196_bool = false;
}


void func_1180(bool var_187_bool, int var_188_int, int var_189_int)
{
	object var_192_object;
	func_454(var_192_object);
	object var_193_object;
	func_454(var_193_object);
	object var_194_object;
	func_454(var_194_object);
	object var_195_object;
	func_454(var_195_object);
	bool var_191_bool;
	var_192_object->IsItemSelected(var_191_bool, var_188_int, var_189_int);
	var_191_bool = var_187_bool;
}


// @pe
void func_670(int var_0_int, int var_2_int, bool var_417_bool, int var_418_int)
{
	int var_423_int;
	var_418_int = var_423_int;
	bool var_421_bool;
	func_1519(var_419_int, var_421_bool, var_0_int, var_423_int);
	var_2_int += 1;
	func_683(var_419_int);
	var_417_bool = true;
}


void func_1439(int var_244_int, bool var_245_bool, int var_246_int)
{
	int var_266_int;
	var_245_bool = false;
	if(var_246_int == -1) {
		var_244_int = -1;
		return 22;
	}
	object var_271_object;
	func_454(var_271_object);
	object var_259_object;
	var_271_object = var_259_object;
	object var_258_object;
	@GetContainer(var_258_object);
	int var_261_int;
	var_258_object->GetItemCount(var_261_int);
	if(var_261_int <= var_246_int) {
		var_244_int = -1;
		return 22;
	}
	int var_262_int;
	var_258_object->GetItemAmount(var_262_int, var_246_int);
	if(var_262_int == 0) {
		var_244_int = -1;
		return 22;
	}
	object var_260_object;
	var_258_object->GetItem(var_260_object, var_246_int);
	int var_263_int;
	var_260_object->GetItemID(var_263_int);
	bool var_264_bool = false;
	var_260_object->HasProperty(var_264_bool, "Organ");
	if(var_264_bool != 0)
		var_260_object->RemoveProperty("Organ");
	int var_265_int;
	@GetInvItemProperty(var_265_int, var_263_int, "Category");
	int var_281_int;
	func_1704(var_281_int);
	if(var_263_int == var_281_int) {
		int var_286_int;
		func_1349(var_286_int);
		var_286_int = var_266_int;
		var_266_int += var_262_int;
		int var_293_int;
		var_266_int = var_293_int;
		func_1360(var_293_int);
		var_258_object->RemoveItem(var_246_int, var_262_int);
		func_1370();
		var_245_bool = true;
		var_244_int = -1;
		return 22;
	}
	bool var_268_bool;
	var_259_object->AddItem(var_268_bool, var_260_object, var_265_int, 1);
	if(!var_268_bool) { //@nz
		var_265_int = var_244_int;
		return 22;
	}
	var_245_bool = true;
	var_258_object->RemoveItem(var_246_int, 1);
	var_265_int = var_244_int;
}
EMIT "Stack[-9] = 0";
EMIT "Stack[-10] = 0";
EMIT "Stack[-11] = 0";


void func_288(int var_3_int, int var_5_int)
{
	int var_12_int; int var_13_int; int var_14_int; int var_15_int; int var_16_int; int var_17_int;
	if(var_5_int == 272) {
		if(var_3_int == 0) {
			var_3_int = 1;

			while(0 < 4) {
				string var_25_string; int var_26_int;
				var_12_int = var_26_int;
				func_1688(var_25_string, var_26_int);
				@SendMessage(-7, var_25_string);
				var_12_int += 1;
			}

		} else {
							bool var_132_bool = true;
							var_134_bool = var_3_int == 1;
							if(var_134_bool != 1) {
								var_136_bool = var_3_int == 2;
								if(var_136_bool != 1)
									var_132_bool = false;
							}
							if(var_132_bool == 0) goto Label_336;
							var_3_int = 2;

							for(;;) {
								if(!(0 < 4)) goto Label_336;
								string var_140_string; int var_141_int;
								var_13_int = var_141_int;
								func_1672(var_140_string, var_141_int);
								@SendMessage(-7, var_140_string);
								var_13_int += 1;
							}
		}
	}
Label_336:
	if(var_5_int == 274) {
		bool var_40_bool = true;
		var_42_bool = var_3_int == 1;
		if(var_42_bool != 1) {
			var_44_bool = var_3_int == 0;
			if(var_44_bool != 1)
				var_40_bool = false;
		}
		if(var_40_bool != 0) {

			while(0 < 12) {
				string var_48_string; int var_49_int;
				var_14_int = var_49_int;
				func_1656(var_48_string, var_49_int);
				@SendMessage(-7, var_48_string);
				var_14_int += 1;
			}

		} else {
					if(!(0 == 2)) goto Label_383;
					var_3_int = 1;

					for(;;) {
						if(!(0 < 4)) goto Label_383;
						string var_129_string; int var_130_int;
						var_15_int = var_130_int;
						func_1688(var_129_string, var_130_int);
						@SendMessage(-7, var_129_string);
						var_15_int += 1;
					}

		}
	}
Label_383:
	if(var_3_int == 0) {
		int var_63_int;
		var_5_int = var_63_int;
		func_1141(var_63_int);
		return 12;
	}
	if(var_5_int == 273) {

		for(;;) {
			if(0 < 4) {
				if(var_3_int == 2) {
					string var_91_string; int var_92_int;
					var_16_int = var_92_int;
					func_1672(var_91_string, var_92_int);
					@SendMessage(-2, var_91_string);
				} else if(var_3_int == 1) {
				string var_107_string; int var_108_int;
				var_16_int = var_108_int;
				func_1688(var_107_string, var_108_int);
				@SendMessage(-2, var_107_string);
			}
	}
		if(var_5_int == 271) {

			for(;;) {
				if(0 < 4) {
					if(var_3_int == 2) {
						string var_116_string; int var_117_int;
						var_17_int = var_117_int;
						func_1672(var_116_string, var_117_int);
						@SendMessage(-3, var_116_string);
					} else if(var_3_int == 1) {
					string var_122_string; int var_123_int;
					var_17_int = var_123_int;
					func_1688(var_122_string, var_123_int);
					@SendMessage(-3, var_122_string);
				}
		}
			return 12;

			}
			var_17_int += 1;
		}
		}
		var_16_int += 1;
	}
	
}


void func_1569(int var_166_int)
{
	object var_177_object; int var_178_int; bool var_179_bool; bool var_180_bool;
	object var_181_object;
	func_454(var_181_object);
	object var_174_object;
	var_181_object = var_174_object;
	int var_175_int;
	var_174_object->GetItemCount(var_175_int, var_166_int);
	int var_176_int = 0;
	
	for(;;) {
		if(var_176_int < 12) {
			if(var_176_int < var_175_int) {
				var_174_object->GetItem(var_177_object, var_176_int, var_166_int);
				var_174_object->GetItemAmount(var_178_int, var_176_int, var_166_int);
				bool var_187_bool; int var_188_int; int var_189_int;
				var_176_int = var_188_int;
				var_166_int = var_189_int;
				func_1180(var_187_bool, var_188_int, var_189_int);
				var_187_bool = var_179_bool;
				bool var_196_bool; object var_197_object;
				var_177_object = var_197_object;
				func_1177(var_197_object);
				var_196_bool = var_180_bool;
				if(var_179_bool != 0) {
					if(var_180_bool != 0) {
						string var_201_string; int var_202_int;
						var_176_int = var_202_int;
						func_1656(var_201_string, var_202_int);
						@SendMessage(0, var_201_string, var_177_object);
					} else {
					string var_219_string; int var_220_int;
					var_176_int = var_220_int;
					func_1656(var_219_string, var_220_int);
					@SendMessage(16384, var_219_string, var_177_object);
				}
				if(var_180_bool != 0) {
					string var_223_string; int var_224_int;
					var_176_int = var_224_int;
					func_1656(var_223_string, var_224_int);
					@SendMessage(131072, var_223_string, var_177_object);
					goto Label_1634;
				}
				string var_226_string; int var_227_int;
				var_176_int = var_227_int;
				func_1656(var_226_string, var_227_int);
				@SendMessage(0, var_226_string, var_177_object);
			}
			string var_229_string; int var_230_int;
			var_176_int = var_230_int;
			func_1656(var_229_string, var_230_int);
			@SendMessage(32768, var_229_string);
		}
		}
		goto Label_1634;

	Label_1634:
		string var_215_string; int var_216_int;
		var_176_int = var_216_int;
		func_1656(var_215_string, var_216_int);
		@SendMessage((var_178_int | 65536), var_215_string);
		var_177_object = null;
		goto Label_1651;

	Label_1651:
		var_176_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


void func_930(int var_0_int, int var_126_int)
{
	int var_131_int;
	var_126_int = var_131_int;
	object var_130_object;
	func_1335(var_130_object, var_131_int);
	func_1569(-1);
	func_1370();
	int var_129_int = 0;
	
	while(var_129_int < 12) {
		@CreateStringVector(var_130_object);
		string var_241_string;
		func_1656(var_241_string, (((var_129_int + 12) - 1) % 12));
		var_130_object->add(var_241_string);
		string var_248_string;
		func_1656(var_248_string, (((var_129_int + 12) + 1) % 12));
		var_130_object->add(var_248_string);
		string var_256_string; int var_257_int;
		var_129_int = var_257_int;
		func_1656(var_256_string, var_257_int);
		@SendMessage(-1, var_256_string, var_130_object);
		var_130_object = null;
		var_129_int += 1;
	}
	
	func_100();
	@SetCursor("default");
	@ShowCursor();
	@CaptureKeyboard();
	@SetOwnerDraw(false);
	@SetNeedUpdate(true);
	func_631();
	@ProcessEvents();
}


void func_1704(int var_281_int)
{
	int var_283_int;
	@GetInvItemByName(var_283_int, "Money");
	var_283_int = var_281_int;
}


void func_683(int var_2_int)
{
	int var_24_int;
	func_900(var_24_int);
	int var_21_int;
	var_24_int = var_21_int;
	if(var_21_int <= 4) {
		@SendMessage(16384, "scrollbar");
		var_2_int = 0;
	} else if((var_2_int + 4) > var_21_int) {
			var_2_int -= ((var_2_int + 4) - var_21_int);
			@SendMessage(((var_2_int * 100) / (var_21_int - 4)), "scrollbar");
	}
	
	@SendMessage(((var_2_int * 100) / (var_21_int - 4)), "scrollbar");
}


// @pe
void func_1335(int var_0_int, int var_131_int)
{
	if(var_131_int == -1)
		return 0;
	if(var_0_int == var_131_int)
		return 0;
	func_1377(var_131_int);
}


void func_1349(int var_231_int)
{
	object var_236_object;
	func_454(var_236_object);
	object var_234_object;
	var_236_object = var_234_object;
	int var_235_int;
	var_234_object->GetProperty("money", var_235_int);
	var_235_int = var_231_int;
}
EMIT "Stack[-2] = 0";


void func_454(object var_181_object)
{
	object var_183_object;
	@GetPlayerContainer(var_183_object);
	var_183_object = var_181_object;
}
EMIT "Stack[-1] = 0";


void func_460(int var_2_int, int var_3_int, bool var_21_bool, int var_22_int, string var_23_string)
{
	object var_30_object; int var_31_int; int var_32_int; int var_33_int; int var_34_int;
	if(var_22_int == -4) {
		string var_37_string;
		func_1672(var_37_string, 0);
		if(var_23_string == var_37_string) {
			if(var_2_int > 0) {
				var_2_int += -1;
				func_723(var_34_int);
				func_683(var_34_int);
			}
		} else {
			string var_185_string;
			func_1672(var_185_string, 3);
			if(!(var_23_string == var_185_string)) goto Label_505;
			@GetContainer(var_30_object);
			var_30_object->GetItemCount(var_31_int);
			if((var_2_int + 4) <= var_31_int) {
				var_2_int += 1;
				func_723(var_34_int);
				func_683(var_34_int);
			}
			var_30_object = null;
	}
		if(var_22_int == -8) {
			var_3_int = 0;
			var_21_bool = true;
			return 10;
		}
		if(var_22_int == -10) {
			var_3_int = 1;
			var_21_bool = true;
			return 10;
		}
		if(var_22_int == -9) {
			var_3_int = 2;
			var_21_bool = true;
			return 10;
		}
		if(var_22_int < 0) {
			var_21_bool = true;
			return 10;
		}

		while(0 < 4) {
			string var_202_string; int var_203_int;
			var_32_int = var_203_int;
			func_1688(var_202_string, var_203_int);
			if(var_23_string == var_202_string) {
				int var_205_int;
				int var_207_int; int var_208_int;
				var_32_int = var_208_int;
				func_846(var_207_int, var_208_int, true);
				var_207_int = var_205_int;
				func_638(true);
				var_21_bool = true;
				return 10;
			}
			var_32_int += 1;
		}


		while(0 < 4) {
			string var_341_string; int var_342_int;
			var_33_int = var_342_int;
			func_1672(var_341_string, var_342_int);
			if(var_23_string == var_341_string) {
				int var_344_int;
				int var_346_int; int var_347_int;
				var_33_int = var_347_int;
				func_846(var_346_int, var_347_int, false);
				var_346_int = var_344_int;
				func_654(var_344_int, true);
				var_21_bool = true;
				return 10;
			}
			var_33_int += 1;
		}

		if(var_23_string == "scrollbar") {
			int var_359_int;
			func_900(var_359_int);
			var_359_int = var_34_int;
			if((((0.01 * (var_34_int - 4)) * var_22_int) + 0.5) < 0)
				var_2_int = 0;
			func_723(var_34_int);
			var_21_bool = true;
			return 10;
		}
		var_21_bool = false;
		return 10;
	}
Label_505:
	@SendMessage(-4, var_23_string);
	var_21_bool = true;
	
}


void func_846(int var_207_int, int var_208_int, bool var_209_bool)
{
	object var_219_object; object var_224_object; int var_225_int; int var_226_int; bool var_227_bool;
	@GetContainer(var_219_object);
	int var_220_int;
	var_219_object->GetItemCount(var_220_int);
	int var_221_int = 0;
	int var_222_int = 0;
	int var_223_int = 0;
	
	for(;;) {
		if(var_223_int < var_220_int) {
			var_219_object->GetItem(var_224_object, var_223_int);
			var_224_object->GetItemID(var_225_int);
			var_219_object->GetItemAmount(var_226_int, var_223_int);
			var_227_bool = false;
			var_224_object->HasProperty(var_227_bool, "Organ");
			if(var_227_bool != 0) {
				bool var_231_bool = false;
				if(var_209_bool != 0) {
					if(var_221_int == var_208_int)
						var_231_bool = true;
				}
				if(var_231_bool != 0) {
					var_223_int = var_207_int;
					return 18;
				}
				var_221_int += 1;
			} else {
			bool var_236_bool = false;
			if(!var_209_bool) { //@nz
				if(var_222_int == var_208_int)
					var_236_bool = true;
			}
			if(var_236_bool != 0) {
				var_223_int = var_207_int;
				return 18;
			}
			var_222_int += 1;
		}
		var_207_int = -1;
		return 18;
		}
		var_224_object = null;
		var_223_int += 1;
	}
	
}
EMIT "Stack[-9] = 0";


void func_1360(int var_293_int)
{
	object var_296_object;
	func_454(var_296_object);
	object var_295_object;
	var_296_object = var_295_object;
	var_295_object->SetProperty("money", var_293_int);
}
EMIT "Stack[-1] = 0";


void func_1105(int var_102_int)
{
	int var_105_int; int var_106_int;
	if(var_102_int == 269) {

		for(;;) {
			if(!(0 < 12)) goto Label_1123;
			string var_112_string; int var_113_int;
			var_105_int = var_113_int;
			func_1656(var_112_string, var_113_int);
			@SendMessage(-2, var_112_string);
			var_105_int += 1;
		}
	}
Label_1123:
	if(var_102_int == 270) {

		for(;;) {
			if(!(0 < 12)) goto Label_1140;
			string var_120_string; int var_121_int;
			var_106_int = var_121_int;
			func_1656(var_120_string, var_121_int);
			@SendMessage(-3, var_120_string);
			var_106_int += 1;
		}
	}
Label_1140:
}


void func_723(int var_2_int)
{
	object var_286_object; object var_290_object; int var_291_int; int var_292_int; bool var_293_bool; int var_294_int; int var_295_int; object var_296_object; int var_297_int; int var_298_int; bool var_299_bool; int var_300_int;
	@GetContainer(var_286_object);
	int var_287_int;
	var_286_object->GetItemCount(var_287_int);
	int var_288_int = 0;
	int var_289_int = 0;
	
	for(;;) {
		if(var_289_int < var_287_int) {
			var_286_object->GetItem(var_290_object, var_289_int);
			var_290_object->GetItemID(var_291_int);
			var_286_object->GetItemAmount(var_292_int, var_289_int);
			var_293_bool = false;
			var_290_object->HasProperty(var_293_bool, "Organ");
			if(var_293_bool != 0) {
			} else {
			if(var_288_int >= var_2_int) {
				string var_307_string;
				func_1672(var_307_string, (var_288_int - var_2_int));
				@SendMessage(0, var_307_string, var_290_object);
				string var_311_string;
				func_1672(var_311_string, (var_288_int - var_2_int));
				@SendMessage((var_292_int | 65536), var_311_string);
			}
			var_288_int += 1;
			if(var_288_int >= (4 + var_2_int)) {
			} else {
							var_290_object = null;
			}
		}
		var_294_int = var_288_int + var_2_int;

		while(var_294_int < (4 + var_2_int)) {
			string var_321_string;
			func_1672(var_321_string, (var_294_int - var_2_int));
			@SendMessage(32768, var_321_string);
			var_294_int += 1;
		}

		var_288_int = 0;
		var_295_int = 0;

		for(;;) {
			if(var_295_int < var_287_int) {
				var_286_object->GetItem(var_296_object, var_295_int);
				var_296_object->GetItemID(var_297_int);
				var_286_object->GetItemAmount(var_298_int, var_295_int);
				var_299_bool = false;
				var_296_object->HasProperty(var_299_bool, "Organ");
				if(!var_299_bool) { //@nz
				} else {
				string var_329_string; int var_330_int;
				var_288_int = var_330_int;
				func_1688(var_329_string, var_330_int);
				@SendMessage(0, var_329_string, var_296_object);
				string var_333_string; int var_334_int;
				func_1688(var_333_string, var_334_int);
				@SendMessage((var_298_int | 65536), var_333_string);
				if((var_334_int + 1) >= 4) {
				} else {
					var_296_object = null;

				}
			}
			var_288_int = var_300_int;

			while(var_300_int < 4) {
				string var_341_string; int var_342_int;
				var_300_int = var_342_int;
				func_1688(var_341_string, var_342_int);
				@SendMessage(32768, var_341_string);
				var_300_int += 1;
			}

			}
			var_295_int += 1;
		}
		}
		var_289_int += 1;
	}
	
}
EMIT "Stack[-15] = 0";


void func_1370(void)
{
	int var_231_int;
	func_1349(var_231_int);
	@SendMessage(var_231_int, "money");
}


// @pe
void func_1377(int var_135_int)
{
	if(var_135_int != 0)
		@SendMessage(0, "button_weapon");
	else
		@SendMessage(1, "button_weapon");
	if(var_135_int != 1)
		@SendMessage(0, "button_clothes");
	else
		@SendMessage(1, "button_clothes");

	if(var_135_int != 2)
		@SendMessage(0, "button_medcine");
	else
		@SendMessage(1, "button_medcine");

	if(var_135_int != 3)
		@SendMessage(0, "button_food");
	else
		@SendMessage(1, "button_food");

	if(var_135_int != 4)
		@SendMessage(0, "button_other");
	else
		@SendMessage(1, "button_other");

	
}


void func_100(void)
{
	string var_260_string;
	func_1656(var_260_string, 0);
	@SendMessage(-6, var_260_string);
	string var_263_string;
	func_1688(var_263_string, 0);
	@SendMessage(-6, var_263_string);
	string var_266_string;
	func_1672(var_266_string, 0);
	@SendMessage(-6, var_266_string);
}


void func_1519(int var_0_int, bool var_421_bool, int var_422_int, int var_423_int)
{
	int var_439_int; bool var_440_bool; bool var_441_bool;
	object var_442_object;
	func_454(var_442_object);
	object var_434_object;
	var_442_object = var_434_object;
	object var_433_object;
	@GetContainer(var_433_object);
	int var_436_int;
	var_434_object->GetItemCount(var_436_int, var_422_int);
	if(var_436_int <= var_423_int) {
		var_421_bool = false;
		return 18;
	}
	int var_437_int;
	var_434_object->GetItemAmount(var_437_int, var_423_int, var_422_int);
	object var_435_object;
	var_434_object->GetItem(var_435_object, var_423_int, var_422_int);
	bool var_438_bool;
	var_433_object->AddItem(var_438_bool, var_435_object, 0, 1);
	if(!var_438_bool) { //@nz
		var_421_bool = false;
		return 18;
	}
	if(var_0_int == 0) {
		var_435_object->GetItemID(var_439_int);
		@HasInvItemProperty(var_440_bool, var_439_int, "Weapon");
		if(var_440_bool != 0) {
			var_434_object->IsItemSelected(var_441_bool, var_423_int, var_0_int);
			if(var_441_bool != 0)
				@SetPlayerHandsItem(-1);
		}
	}
	var_434_object->RemoveItem(var_423_int, 1, var_422_int);
	var_421_bool = true;
}
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


// @pe
void func_627(void)
{
	func_723(var_4_float);
}


void func_1141(int var_63_int)
{
	int var_66_int; int var_67_int;
	if(var_63_int == 273) {

		for(;;) {
			if(!(0 < 12)) goto Label_1159;
			string var_73_string; int var_74_int;
			var_66_int = var_74_int;
			func_1656(var_73_string, var_74_int);
			@SendMessage(-2, var_73_string);
			var_66_int += 1;
		}
	}
Label_1159:
	if(var_63_int == 271) {

		for(;;) {
			if(!(0 < 12)) goto Label_1176;
			string var_81_string; int var_82_int;
			var_67_int = var_82_int;
			func_1656(var_81_string, var_82_int);
			@SendMessage(-3, var_81_string);
			var_67_int += 1;
		}
	}
Label_1176:
}


// @pe
void func_631(void)
{
	func_683(var_130_object);
	func_723(var_130_object);
}


// @pe
void func_1656(string var_201_string, int var_202_int)
{
	if((var_202_int + 1) < 10)
		var_201_string = "slot0" + (var_202_int + 1);
	var_201_string = "slot" + (var_202_int + 1);
}


void func_122(int var_3_int, int var_44_int)
{
	int var_51_int; int var_52_int; int var_53_int; int var_54_int; int var_55_int; int var_56_int;
	if(var_44_int == 267) {
		if(var_3_int == 0) {
			var_3_int = 1;

			while(0 < 4) {
				string var_64_string; int var_65_int;
				var_51_int = var_65_int;
				func_1688(var_64_string, var_65_int);
				@SendMessage(-7, var_64_string);
				var_51_int += 1;
			}

		} else {
							bool var_171_bool = true;
							var_173_bool = var_3_int == 1;
							if(var_173_bool != 1) {
								var_175_bool = var_3_int == 2;
								if(var_175_bool != 1)
									var_171_bool = false;
							}
							if(var_171_bool == 0) goto Label_170;
							var_3_int = 2;

							for(;;) {
								if(!(0 < 4)) goto Label_170;
								string var_179_string; int var_180_int;
								var_52_int = var_180_int;
								func_1672(var_179_string, var_180_int);
								@SendMessage(-7, var_179_string);
								var_52_int += 1;
							}
		}
	}
Label_170:
	if(var_44_int == 268) {
		bool var_79_bool = true;
		var_81_bool = var_3_int == 1;
		if(var_81_bool != 1) {
			var_83_bool = var_3_int == 0;
			if(var_83_bool != 1)
				var_79_bool = false;
		}
		if(var_79_bool != 0) {

			while(0 < 12) {
				string var_87_string; int var_88_int;
				var_53_int = var_88_int;
				func_1656(var_87_string, var_88_int);
				@SendMessage(-7, var_87_string);
				var_53_int += 1;
			}

		} else {
					if(!(0 == 2)) goto Label_217;
					var_3_int = 1;

					for(;;) {
						if(!(0 < 4)) goto Label_217;
						string var_168_string; int var_169_int;
						var_54_int = var_169_int;
						func_1688(var_168_string, var_169_int);
						@SendMessage(-7, var_168_string);
						var_54_int += 1;
					}

		}
	}
Label_217:
	if(var_3_int == 0) {
		int var_102_int;
		var_44_int = var_102_int;
		func_1105(var_102_int);
		return 12;
	}
	if(var_44_int == 269) {

		for(;;) {
			if(0 < 4) {
				if(var_3_int == 2) {
					string var_130_string; int var_131_int;
					var_55_int = var_131_int;
					func_1672(var_130_string, var_131_int);
					@SendMessage(-2, var_130_string);
				} else if(var_3_int == 1) {
				string var_146_string; int var_147_int;
				var_55_int = var_147_int;
				func_1688(var_146_string, var_147_int);
				@SendMessage(-2, var_146_string);
			}
	}
		if(var_44_int == 270) {

			for(;;) {
				if(0 < 4) {
					if(var_3_int == 2) {
						string var_155_string; int var_156_int;
						var_56_int = var_156_int;
						func_1672(var_155_string, var_156_int);
						@SendMessage(-3, var_155_string);
					} else if(var_3_int == 1) {
					string var_161_string; int var_162_int;
					var_56_int = var_162_int;
					func_1688(var_161_string, var_162_int);
					@SendMessage(-3, var_161_string);
				}
		}
			return 12;

			}
			var_56_int += 1;
		}
		}
		var_55_int += 1;
	}
	
}


void func_638(int var_205_int)
{
	@PlaySound("take_organ");
	int var_243_int;
	int var_244_int; bool var_245_bool; int var_246_int;
	bool var_241_bool = var_245_bool;
	var_205_int = var_246_int;
	func_1439(var_244_int, var_245_bool, var_246_int);
	var_244_int = var_243_int;
	func_1335(var_241_bool, var_243_int);
	if(!var_241_bool) { //@nz
	}
}


