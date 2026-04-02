maintask task_0
{
	void init(void)
	{
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(void)
	{
		int var_7_int = 0;
		int var_8_int = 0;
		@ClientToScreen(var_7_int, var_8_int);
		object var_6_object;
		@FindWindow(var_6_object, var_7_int, var_8_int);
		if(!var_6_object) { //@nz
		}
		int var_9_int;
		var_6_object->GetTooltipType(var_9_int);
		string var_10_string;
		var_6_object->GetTooltipText(var_10_string);
		object var_11_object;
		var_6_object->GetTooltipObject(var_11_object);
		int var_13_int; string var_14_string; object var_15_object; int var_16_int; int var_17_int;
		var_9_int = var_13_int;
		var_10_string = var_14_string;
		var_11_object = var_15_object;
		var_7_int = var_16_int;
		var_8_int = var_17_int;
		func_170(var_13_int, var_14_string, var_15_object, var_16_int, var_17_int);
	}
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-6] = 0";

}


// @pe
void func_224(int var_56_int, int var_57_int, int var_58_int, int var_59_int)
{
	@BlitClipped("bg", var_56_int, var_57_int, var_56_int, var_57_int, var_58_int, var_59_int);
	@StretchBlit("border", var_56_int, var_57_int, var_58_int, 1);
	@StretchBlit("border", var_56_int, ((var_57_int + var_59_int) - 1), var_58_int, 1);
	@StretchBlit("border", var_56_int, var_57_int, 1, var_59_int);
	@StretchBlit("border", ((var_56_int + var_58_int) - 1), var_57_int, 1, var_59_int);
}


void func_97(int var_42_int, object var_43_object)
{
	int var_45_int;
	var_43_object->GetItemID(var_45_int);
	var_45_int = var_42_int;
}


void func_128(float var_360_float, object var_361_object, int var_362_int, int var_363_int)
{
	bool var_370_bool;
	if(var_363_int != 0)
		var_360_float = 1;
	float var_368_float = 1;
	int var_369_int = 1;
	
	while(var_369_int <= var_362_int) {
		var_361_object->HasProperty(("buyf" + var_369_int), var_370_bool);
		if(var_370_bool != 0)
			var_361_object->GetProperty(("buyf" + var_369_int), var_368_float);
		var_369_int += 1;
	}
	
	var_360_float = var_368_float / 100;
}


void func_36(int var_253_int, object var_254_object, int var_255_int)
{
	bool var_270_bool; int var_271_int;
	if(var_255_int == 0) {
		int var_276_int; object var_277_object;
		var_254_object = var_277_object;
		func_97(var_276_int, var_277_object);
		@HasInvItemProperty(var_270_bool, var_276_int, "Price");
		if(!var_270_bool) { //@nz
			int var_281_int; object var_282_object;
			var_254_object = var_282_object;
			func_97(var_281_int, var_282_object);
			@Trace(("Item with id :" + var_281_int) + " doesn't have price");
			var_253_int = 1;
			return 8;
		}
		int var_286_int; object var_287_object;
		var_254_object = var_287_object;
		func_97(var_286_int, var_287_object);
		@GetInvItemProperty(var_271_int, var_286_int, "Price");
		var_271_int = var_253_int;
		return 8;
	}
	int var_289_int; object var_290_object;
	var_254_object = var_290_object;
	func_97(var_289_int, var_290_object);
	bool var_272_bool;
	@HasInvItemProperty(var_272_bool, var_289_int, ("BarterPrice" + var_255_int));
	if(!var_272_bool) //@nz
		return 8;
	int var_294_int; object var_295_object;
	var_254_object = var_295_object;
	func_97(var_294_int, var_295_object);
	int var_273_int;
	@GetInvItemProperty(var_273_int, var_294_int, ("BarterPrice" + var_255_int));
	if(var_273_int > 0) {
		var_273_int = 0;
		return 8;
	}
	var_253_int = -var_273_int;
}


void func_613(int var_389_int, int var_390_int, string var_391_string)
{
	int var_398_int; int var_401_int; int var_402_int;
	@GetTextHeightInWidth(var_398_int, "default", 218, var_391_string);
	var_398_int += 32;
	int var_399_int;
	int var_400_int;
	@GetScreenSize(var_399_int, var_400_int);
	if((var_399_int - var_389_int) > 250) {
	} else {
			var_401_int -= 250;
	}
	if(var_390_int > var_398_int)
		var_402_int = var_390_int - var_398_int;
	else
		var_390_int = var_402_int;

	@ScreenToClient(var_401_int, var_402_int);
	int var_410_int; int var_411_int; int var_413_int;
	func_224(var_410_int, var_411_int, 250, var_413_int);
	@PrintInWidth(var_413_int, "default", (var_410_int + 16), (var_411_int + 16), 218, var_391_string, 0.64705884, 0.64705884, 0.64705884);
	
}


void func_102(float var_301_float, object var_302_object, int var_303_int, int var_304_int)
{
	bool var_311_bool;
	if(var_304_int != 0)
		var_301_float = 1;
	float var_309_float = 1;
	int var_310_int = 1;
	
	while(var_310_int <= var_303_int) {
		var_302_object->HasProperty(("sellf" + var_310_int), var_311_bool);
		if(var_311_bool != 0)
			var_302_object->GetProperty(("sellf" + var_310_int), var_309_float);
		var_310_int += 1;
	}
	
	var_301_float = var_309_float / 100;
}


void func_487(int var_213_int, int var_214_int, object var_215_object, bool var_216_bool)
{
	float var_237_float; string var_238_string; int var_240_int; int var_245_int; int var_246_int;
	if(!var_215_object) { //@nz
	}
	object var_232_object;
	@GetContainer(var_232_object);
	float var_233_float;
	@GetGameTime(var_233_float);
	int var_234_int = 1 + (var_233_float / 24);
	int var_251_int; object var_252_object;
	var_215_object = var_252_object;
	func_97(var_251_int, var_252_object);
	int var_235_int;
	var_251_int = var_235_int;
	int var_253_int; object var_254_object; int var_255_int;
	var_215_object = var_254_object;
	int var_256_int;
	func_154(var_256_int);
	var_256_int = var_255_int;
	func_36(var_253_int, var_254_object, var_255_int);
	int var_236_int;
	var_253_int = var_236_int;
	if(var_216_bool != 0) {
		float var_301_float; object var_302_object; int var_303_int; int var_304_int;
		var_232_object = var_302_object;
		var_234_int = var_303_int;
		int var_305_int;
		func_154(var_305_int);
		var_305_int = var_304_int;
		func_102(var_301_float, var_302_object, var_303_int, var_304_int);
		var_301_float = var_237_float;
	} else {
					float var_360_float; object var_361_object; int var_362_int; int var_363_int;
					var_232_object = var_361_object;
					var_234_int = var_362_int;
					int var_364_int;
					func_154(var_364_int);
					var_364_int = var_363_int;
					func_128(var_360_float, var_361_object, var_362_int, var_363_int);
					var_360_float = var_237_float;
	}
	bool var_239_bool;
	@HasInvItemProperty(var_239_bool, var_235_int, "Description");
	if(var_239_bool != 0) {
		@GetInvItemProperty(var_240_int, var_235_int, "Description");
		@GetStringByID(var_238_string, var_240_int);
	} else {
				var_238_string = "Error: Item doesnt have description (FIXME!)";

	}
	var_325_string = "
";
	var_238_string += var_325_string;
	string var_241_string;
	@GetStringByID(var_241_string, 200005);
	var_238_string += ((var_241_string + ": ") + (var_236_int * var_237_float));
	int var_242_int;
	@GetTextHeightInWidth(var_242_int, "default", 218, var_238_string);
	var_242_int += 266;
	int var_243_int;
	int var_244_int;
	@GetScreenSize(var_243_int, var_244_int);
	if((var_243_int - var_213_int) > 250) {
	} else {
			var_245_int -= 250;

	}
	if(var_214_int > var_242_int)
		var_246_int = var_214_int - var_242_int;
	else
		var_214_int = var_246_int;

	@ScreenToClient(var_245_int, var_246_int);
	int var_337_int; int var_338_int; int var_340_int;
	var_245_int = var_337_int;
	var_246_int = var_338_int;
	func_224(var_337_int, var_338_int, 250, var_340_int);
	object var_343_object;
	var_215_object = var_343_object;
	func_251((var_245_int + 16), (var_246_int + 16), var_343_object);
	@PrintInWidth(var_340_int, "default", (var_245_int + 16), (((var_246_int + 16) + 218) + 16), 218, var_238_string, 0.64705884, 0.64705884, 0.64705884);
	
}
EMIT "Stack[-15] = 0";


void func_297(int var_20_int, int var_21_int, object var_22_object)
{
	string var_33_string; int var_35_int; int var_39_int; int var_40_int;
	if(!var_22_object) { //@nz
	}
	int var_42_int; object var_43_object;
	var_22_object = var_43_object;
	func_97(var_42_int, var_43_object);
	int var_32_int;
	var_42_int = var_32_int;
	bool var_34_bool;
	@HasInvItemProperty(var_34_bool, var_32_int, "Description");
	if(var_34_bool != 0) {
		@GetInvItemProperty(var_35_int, var_32_int, "Description");
		@GetStringByID(var_33_string, var_35_int);
	} else {
				var_33_string = "Error: Item doesnt have description (FIXME!)";
	}
	int var_36_int;
	@GetTextHeightInWidth(var_36_int, "default", 218, var_33_string);
	int var_37_int;
	int var_38_int;
	@GetScreenSize(var_37_int, var_38_int);
	var_36_int += 266;
	if((var_37_int - var_20_int) > 250) {
	} else {
			var_39_int -= 250;

	}
	if(var_21_int > var_36_int)
		var_40_int = var_21_int - var_36_int;
	else
		var_21_int = var_40_int;

	@ScreenToClient(var_39_int, var_40_int);
	int var_56_int; int var_57_int; int var_59_int;
	var_39_int = var_56_int;
	var_40_int = var_57_int;
	func_224(var_56_int, var_57_int, 250, var_59_int);
	object var_77_object;
	var_22_object = var_77_object;
	func_251((var_39_int + 16), (var_40_int + 16), var_77_object);
	@PrintInWidth(var_59_int, "default", (var_39_int + 16), (((var_40_int + 16) + 218) + 16), 218, var_33_string, 0.64705884, 0.64705884, 0.64705884);
	
}


// @pe
void func_170(int var_13_int, string var_14_string, object var_15_object, int var_16_int, int var_17_int)
{
	if(var_13_int == 1) {
		int var_20_int; int var_21_int; object var_22_object;
		var_16_int = var_20_int;
		var_17_int = var_21_int;
		var_15_object = var_22_object;
		func_297(var_20_int, var_21_int, var_22_object);
	} else if(var_13_int == 2) {
			int var_125_int; int var_126_int; object var_127_object;
			var_16_int = var_125_int;
			var_17_int = var_126_int;
			var_15_object = var_127_object;
			func_372(var_125_int, var_126_int, var_127_object);
	}

	
	if(var_13_int == 3) {
		int var_213_int; int var_214_int; object var_215_object;
		var_16_int = var_213_int;
		var_17_int = var_214_int;
		var_15_object = var_215_object;
		func_487(var_213_int, var_214_int, var_215_object, true);
	} else if(var_13_int == 4) {
		int var_383_int; int var_384_int; object var_385_object;
		var_16_int = var_383_int;
		var_17_int = var_384_int;
		var_15_object = var_385_object;
		func_487(var_383_int, var_384_int, var_385_object, false);
	} else if(var_13_int == 5) {
		int var_389_int; int var_390_int; string var_391_string; object var_392_object;
		var_16_int = var_389_int;
		var_17_int = var_390_int;
		var_14_string = var_391_string;
		var_15_object = var_392_object;
		func_613(var_390_int, var_391_string, var_392_object);
	}
}


void func_372(int var_125_int, int var_126_int, object var_127_object)
{
	object var_146_object; string var_147_string; string var_148_string; int var_149_int; int var_150_int; float var_151_float; int var_152_int; float var_153_float; float var_154_float; int var_155_int; int var_156_int; int var_157_int; int var_158_int; int var_159_int; int var_160_int; int var_161_int;
	if(!var_127_object) //@nz
		return 34;
	int var_145_int;
	var_127_object->size(var_145_int);
	if(!var_145_int) //@nz
		return 34;
	for(;;) {
		if(var_145_int != 0) {
			var_150_int = 0;
			var_151_float = 0;
			var_152_int = 0;

			while(var_152_int < var_145_int) {
				var_127_object->get(var_146_object, var_152_int);
				var_146_object->GetTime(var_153_float);
				if(var_153_float > var_151_float) {
					var_153_float = var_151_float;
					var_152_int = var_150_int;
				}
				var_152_int += 1;
			}

			var_127_object->get(var_146_object, var_150_int);
			var_146_object->GetTextID(var_149_int);
			@GetStringByID(var_148_string, var_149_int);
			var_146_object->GetTime(var_154_float);
			var_156_int = 60 * (var_155_int - var_155_int);
			if(var_156_int < 10) {
				var_174_int = var_155_int % 24;
				var_147_string += (((var_174_int + ":0") + var_156_int) + " ");
			} else {
			var_184_int = var_155_int % 24;
			var_147_string += (((var_184_int + ":") + var_156_int) + " ");
		}
		@GetTextHeightInWidth(var_157_int, "default", 218, var_147_string);
		var_157_int += 32;
		@GetScreenSize(var_158_int, var_159_int);
		if((var_158_int - var_125_int) > 250) {
		} else {
				var_160_int -= 250;
		}
		if(var_126_int > var_157_int)
			var_161_int = var_126_int - var_157_int;
		else
			var_126_int = var_161_int;

		@ScreenToClient(var_160_int, var_161_int);
		int var_197_int; int var_198_int; int var_200_int;
		func_224(var_197_int, var_198_int, 250, var_200_int);
		@PrintInWidth(var_200_int, "default", (var_197_int + 16), (var_198_int + 16), 218, var_147_string, 0.64705884, 0.64705884, 0.64705884);
		return 34;
		}
		var_147_string += var_148_string;
		var_127_object->remove(var_150_int);
		if((var_145_int + -1) != 0) {
			var_182_string = "

		";
			var_147_string += var_182_string;
		}
	}
	
}
EMIT "Stack[-16] = 0";


void func_154(int var_256_int)
{
	object var_260_object;
	@GetContainer(var_260_object);
	bool var_261_bool;
	var_260_object->HasProperty("barter", var_261_bool);
	if(!var_261_bool) //@nz
		var_256_int = 0;
	int var_262_int;
	var_260_object->GetProperty("barter", var_262_int);
	var_262_int = var_256_int;
}
EMIT "Stack[-3] = 0";


void func_251(int var_75_int, int var_76_int, object var_77_object)
{
	if(!var_77_object) { //@nz
	}
	int var_85_int; object var_86_object;
	var_77_object = var_86_object;
	func_97(var_85_int, var_86_object);
	int var_82_int;
	var_85_int = var_82_int;
	string var_83_string;
	@GetInvItemSprite2(var_83_string, var_82_int);
	@LoadImage(var_83_string);
	@StretchBlit(var_83_string, var_75_int, var_76_int, 218, 218);
	@StretchBlit("border", var_75_int, var_76_int, 218, 1);
	@StretchBlit("border", var_75_int, ((var_76_int + 218) - 1), 218, 1);
	@StretchBlit("border", var_75_int, var_76_int, 1, 218);
	@StretchBlit("border", ((var_75_int + 218) - 1), var_76_int, 1, 218);
}


