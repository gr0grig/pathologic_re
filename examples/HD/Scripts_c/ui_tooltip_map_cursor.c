maintask task_0
{
	void init(void)
	{
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
		func_210(var_13_int, var_14_string, var_15_object, var_16_int, var_17_int, (float)1);
		@Blit("default", 0, 0);
	}
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-6] = 0";

}


void func_961(int var_298_int, int var_299_int, object var_300_object, float var_301_float)
{
	object var_320_object; string var_321_string; string var_322_string; int var_323_int; int var_324_int; float var_325_float; int var_326_int; float var_327_float; float var_328_float; int var_329_int; int var_330_int; int var_331_int; int var_332_int; int var_333_int; int var_334_int; int var_335_int;
	if(!var_300_object) //@nz
		return 34;
	var_301_float = 1;
	int var_319_int;
	var_300_object->size(var_319_int);
	if(!var_319_int) //@nz
		return 34;
	for(;;) {
		if(var_319_int != 0) {
			var_324_int = 0;
			var_325_float = 0;
			var_326_int = 0;

			while(var_326_int < var_319_int) {
				var_300_object->get(var_320_object, var_326_int);
				var_320_object->GetTime(var_327_float);
				if(var_327_float > var_325_float) {
					var_327_float = var_325_float;
					var_326_int = var_324_int;
				}
				var_326_int += 1;
			}

			var_300_object->get(var_320_object, var_324_int);
			var_320_object->GetTextID(var_323_int);
			@GetStringByID(var_322_string, var_323_int);
			var_320_object->GetTime(var_328_float);
			var_330_int = 60 * (var_329_int - var_329_int);
			if(var_330_int < 10) {
				var_348_int = var_329_int % 24;
				var_321_string += (((var_348_int + ":0") + var_330_int) + " ");
			} else {
			var_358_int = var_329_int % 24;
			var_321_string += (((var_358_int + ":") + var_330_int) + " ");
		}
		@GetTextHeightInWidth(var_331_int, "default", 268, var_321_string);
		var_331_int += 32;
		@GetScreenSize(var_332_int, var_333_int);
		if((var_332_int - var_298_int) > 300) {
		} else {
				var_334_int -= 300;
		}
		if(var_299_int > var_331_int) {
			var_335_int = var_299_int - var_331_int;
		} else {
			var_299_int = var_335_int;
			if(!((var_335_int + var_331_int) > 600)) goto Label_1061;
			var_335_int = 600 - var_331_int;

		}
	Label_1061:
		@ScreenToClient(var_334_int, var_335_int);
		int var_371_int; int var_372_int; int var_374_int; float var_375_float;
		func_270(var_371_int, var_372_int, 300, var_374_int, var_375_float);
		@PrintInWidth(var_374_int, "default", (var_371_int + 16), (var_372_int + 16), 268, var_321_string, 0.64705884, 0.64705884, 0.64705884, var_375_float);
		return 34;
		}
		var_321_string += var_322_string;
		var_300_object->remove(var_324_int);
		if((var_319_int + -1) != 0) {
			var_356_string = "

		";
			var_321_string += var_356_string;
		}
	}
	
}
EMIT "Stack[-16] = 0";


void func_194(int var_488_int)
{
	object var_492_object;
	@GetContainer(var_492_object);
	bool var_493_bool;
	var_492_object->HasProperty("barter", var_493_bool);
	if(!var_493_bool) //@nz
		var_488_int = 0;
	int var_494_int;
	var_492_object->GetProperty("barter", var_494_int);
	var_494_int = var_488_int;
}
EMIT "Stack[-3] = 0";


void func_133(int var_518_int)
{
	float var_520_float;
	@GetGameTime(var_520_float);
	var_518_int = 1 + (var_520_float / 24);
}


void func_39(int var_101_int, object var_102_object)
{
	int var_104_int;
	var_102_object->GetItemID(var_104_int);
	var_104_int = var_101_int;
}


void func_168(float var_710_float, object var_711_object, int var_712_int, int var_713_int)
{
	bool var_720_bool;
	if(var_713_int != 0)
		var_710_float = 1;
	float var_718_float = 1;
	int var_719_int = 1;
	
	while(var_719_int <= var_712_int) {
		var_711_object->HasProperty(("buyf" + var_719_int), var_720_bool);
		if(var_720_bool != 0)
			var_711_object->GetProperty(("buyf" + var_719_int), var_718_float);
		var_719_int += 1;
	}
	
	var_710_float = var_718_float / 100;
}


void func_297(int var_191_int, int var_192_int, object var_193_object, float var_194_float)
{
	if(!var_193_object) { //@nz
	}
	int var_202_int; object var_203_object;
	var_193_object = var_203_object;
	func_39(var_202_int, var_203_object);
	int var_199_int;
	var_202_int = var_199_int;
	string var_200_string;
	@GetInvItemSprite2(var_200_string, var_199_int);
	@StretchBlit(var_200_string, var_191_int, var_192_int, 218, 218, var_194_float);
	@StretchBlit("border", var_191_int, var_192_int, 218, 1, var_194_float);
	@StretchBlit("border", var_191_int, ((var_192_int + 218) - 1), 218, 1, var_194_float);
	@StretchBlit("border", var_191_int, var_192_int, 1, 218, var_194_float);
	@StretchBlit("border", ((var_191_int + 218) - 1), var_192_int, 1, 218, var_194_float);
}


void func_44(int var_485_int, object var_486_object, int var_487_int)
{
	int var_507_int; int var_508_int; int var_509_int; string var_510_string; bool var_511_bool; bool var_512_bool; int var_513_int; bool var_514_bool; int var_515_int;
	if(var_487_int == 0) {
		int var_518_int;
		func_133(var_518_int);
		var_518_int = var_507_int;
		var_508_int = 0;
		var_509_int = 1;

		for(;;) {
			if(var_509_int <= var_507_int) {
				var_510_string = "Price";
				if(var_509_int != 1)
					var_510_string += var_509_int;
				int var_527_int; object var_528_object;
				var_486_object = var_528_object;
				func_39(var_527_int, var_528_object);
				@HasInvItemProperty(var_511_bool, var_527_int, var_510_string);
				if(!var_511_bool) { //@nz
				} else {
				int var_531_int; object var_532_object;
				var_486_object = var_532_object;
				func_39(var_531_int, var_532_object);
				@GetInvItemProperty(var_508_int, var_531_int, var_510_string);
			}
			var_486_object->HasProperty(var_512_bool, "durability");
			if(var_512_bool != 0) {
				var_486_object->GetProperty(var_513_int, "durability");
				var_508_int *= (0.5 * (1.0 + (var_513_int / 100.0)));
			}
			var_508_int = var_485_int;
			return 18;
	}
		int var_542_int; object var_543_object;
		var_486_object = var_543_object;
		func_39(var_542_int, var_543_object);
		@HasInvItemProperty(var_514_bool, var_542_int, ("BarterPrice" + var_487_int));
		if(!var_514_bool) //@nz
			return 18;
		int var_547_int; object var_548_object;
		var_486_object = var_548_object;
		func_39(var_547_int, var_548_object);
		@GetInvItemProperty(var_515_int, var_547_int, ("BarterPrice" + var_487_int));
		if(var_515_int > 0) {
			var_515_int = 0;
			return 18;
		}
		var_485_int = -var_515_int;
		return 18;
		}
		var_509_int += 1;
	}
	
}


// @pe
void func_270(int var_171_int, int var_172_int, int var_173_int, int var_174_int, float var_175_float)
{
	@BlitClipped("bg", var_171_int, var_172_int, var_171_int, var_172_int, var_173_int, var_174_int, var_175_float);
	@StretchBlit("border", var_171_int, var_172_int, var_173_int, 1, var_175_float);
	@StretchBlit("border", var_171_int, ((var_172_int + var_174_int) - 1), var_173_int, 1, var_175_float);
	@StretchBlit("border", var_171_int, var_172_int, 1, var_174_int, var_175_float);
	@StretchBlit("border", ((var_171_int + var_173_int) - 1), var_172_int, 1, var_174_int, var_175_float);
}


void func_142(float var_554_float, object var_555_object, int var_556_int, int var_557_int)
{
	bool var_564_bool;
	if(var_557_int != 0)
		var_554_float = 1;
	float var_562_float = 1;
	int var_563_int = 1;
	
	while(var_563_int <= var_556_int) {
		var_555_object->HasProperty(("sellf" + var_563_int), var_564_bool);
		if(var_564_bool != 0)
			var_555_object->GetProperty(("sellf" + var_563_int), var_562_float);
		var_563_int += 1;
	}
	
	var_554_float = var_562_float / 100;
}


// @pe
void func_210(int var_13_int, string var_14_string, object var_15_object, int var_16_int, int var_17_int, float var_18_float)
{
	if(var_13_int == 1) {
		int var_21_int; int var_22_int; object var_23_object; string var_24_string; float var_25_float;
		var_16_int = var_21_int;
		var_17_int = var_22_int;
		var_15_object = var_23_object;
		var_14_string = var_24_string;
		var_18_float = var_25_float;
		func_341(var_21_int, var_22_int, var_23_object, var_24_string, var_25_float);
	} else if(var_13_int == 2) {
			int var_298_int; int var_299_int; object var_300_object; float var_301_float;
			var_16_int = var_298_int;
			var_17_int = var_299_int;
			var_15_object = var_300_object;
			var_18_float = var_301_float;
			func_961(var_298_int, var_299_int, var_300_object, var_301_float);
	}

	
	if(var_13_int == 3) {
		int var_392_int; int var_393_int; object var_394_object; float var_396_float;
		var_16_int = var_392_int;
		var_17_int = var_393_int;
		var_15_object = var_394_object;
		var_18_float = var_396_float;
		func_634(var_392_int, var_393_int, var_394_object, true, var_396_float);
	} else if(var_13_int == 4) {
		int var_733_int; int var_734_int; object var_735_object; float var_737_float;
		var_16_int = var_733_int;
		var_17_int = var_734_int;
		var_15_object = var_735_object;
		var_18_float = var_737_float;
		func_634(var_733_int, var_734_int, var_735_object, false, var_737_float);
	} else if(var_13_int == 5) {
		int var_740_int; int var_741_int; string var_742_string; object var_743_object; float var_744_float;
		var_16_int = var_740_int;
		var_17_int = var_741_int;
		var_14_string = var_742_string;
		var_15_object = var_743_object;
		var_18_float = var_744_float;
		func_1084(var_741_int, var_742_string, var_743_object, var_744_float);
	}
}


void func_341(int var_21_int, int var_22_int, object var_23_object, string var_24_string, float var_25_float)
{
	string var_64_string; string var_65_string; string var_66_string; int var_68_int; int var_73_int; int var_74_int; int var_77_int; int var_78_int; string var_79_string; float var_81_float; float var_82_float; string var_83_string; string var_85_string; int var_87_int; float var_88_float; float var_90_float; string var_92_string; string var_93_string; int var_95_int; int var_98_int; int var_99_int;
	if(!var_23_object) { //@nz
	}
	int var_101_int; object var_102_object;
	var_23_object = var_102_object;
	func_39(var_101_int, var_102_object);
	int var_63_int;
	var_101_int = var_63_int;
	bool var_67_bool;
	@HasInvItemProperty(var_67_bool, var_63_int, "Description");
	if(var_67_bool != 0) {
		@GetInvItemProperty(var_68_int, var_63_int, "Description");
		@GetStringByID(var_64_string, var_68_int);
	} else {
									var_64_string = "Error: Item doesnt have description (FIXME!)";
	}
	int var_69_int;
	@GetTextHeightInWidth(var_69_int, "default", 268, var_64_string);
	int var_70_int;
	@GetFontHeight(var_70_int, "default");
	var_69_int += var_70_int;
	bool var_71_bool;
	@HasInvItemProperty(var_71_bool, var_63_int, "HasDurability");
	bool var_72_bool;
	var_23_object->HasProperty(var_72_bool, "durability");
	bool var_113_bool = true;
	if(var_72_bool != 1) {
		if(var_71_bool != 1)
			var_113_bool = false;
	}
	if(var_113_bool != 0) {
		if(var_72_bool != 0)
			var_23_object->GetProperty(var_73_int, "durability");
		else
			var_73_int = 100;

		@GetStringByID(var_65_string, 7);
		var_65_string += ((" " + var_73_int) + "%");
		@GetTextHeightInWidth(var_74_int, "default", 268, var_65_string);
		var_69_int += (var_74_int * 2);
	}
	bool var_75_bool;
	@HasInvItemProperty(var_75_bool, var_63_int, "HasUses");
	bool var_76_bool;
	var_23_object->HasProperty(var_76_bool, "uses");
	bool var_129_bool = true;
	if(var_76_bool != 1) {
		if(var_75_bool != 1)
			var_129_bool = false;
	}
	if(var_129_bool != 0) {
		if(var_76_bool != 0)
			var_23_object->GetProperty(var_77_int, "uses");
		else
			var_77_int = 1;

		@GetStringByID(var_66_string, 1006);
		var_66_string += (" " + var_77_int);
		@GetTextHeightInWidth(var_78_int, "default", 268, var_66_string);
		var_69_int += var_78_int;
	}
	bool var_80_bool = false;
	string var_139_string; object var_140_object;
	var_23_object = var_140_object;
	func_123(var_139_string, var_140_object);
	if(var_139_string == "grass_combination") {
		var_80_bool = true;
		var_23_object->GetProperty(var_81_float, "im_inc");
		var_23_object->GetProperty(var_82_float, "hl_inc");
		@GetStringByID(var_83_string, 8);
		@GetStringByID(var_85_string, 9);
		var_157_string = "%
	";
		var_162_string = "%
	";
		@GetTextHeightInWidth(var_87_int, "default", 268, ((((var_83_string + " ") + (var_81_float * 100)) + var_157_string) + (((var_85_string + " ") + (var_82_float * 100)) + var_162_string)));
		var_69_int += var_87_int;
	} else {
				string var_275_string; object var_276_object;
				var_23_object = var_276_object;
				func_123(var_275_string, var_276_object);
				if(!(var_275_string == "organ_combination")) goto Label_520;
				var_80_bool = true;
				var_23_object->GetProperty(var_88_float, "DiseaseRate");
				var_23_object->GetProperty(var_90_float, "HealthIncrease");
				@GetStringByID(var_92_string, 11);
				@GetStringByID(var_93_string, 13);
				var_287_string = "%
			";
				var_79_string = ((var_92_string + " ") + (var_88_float * 100)) + var_287_string;
				var_292_string = "%
			";
				var_79_string += (((var_93_string + " ") + (var_90_float * 100)) + var_292_string);
				@GetTextHeightInWidth(var_95_int, "default", 268, var_79_string);
				var_69_int += var_95_int;

	}
Label_520:
	int var_96_int;
	int var_97_int;
	@GetScreenSize(var_96_int, var_97_int);
	var_69_int += 266;
	if((var_96_int - var_21_int) > 300) {
	} else {
			var_98_int -= 300;

	}
	if(var_22_int > var_69_int) {
		var_99_int = var_22_int - var_69_int;
	} else {
		var_22_int = var_99_int;
		if(!((var_99_int + var_69_int) > 600)) goto Label_543;
		var_99_int = 600 - var_69_int;

	}
Label_543:
	@ScreenToClient(var_98_int, var_99_int);
	int var_171_int; int var_172_int; int var_174_int; float var_175_float;
	var_98_int = var_171_int;
	var_99_int = var_172_int;
	var_69_int = var_174_int;
	var_25_float = var_175_float;
	func_270(var_171_int, var_172_int, 300, var_174_int, var_175_float);
	object var_193_object; float var_194_float;
	var_23_object = var_193_object;
	var_25_float = var_194_float;
	func_297((var_98_int + 41), (var_99_int + 16), var_193_object, var_194_float);
	var_99_int += 250;
	@PrintInWidth(var_69_int, "default", (var_98_int + 16), var_99_int, 268, var_64_string, 0.64705884, 0.64705884, 0.64705884, var_25_float);
	var_99_int += (var_69_int + var_70_int);
	bool var_235_bool = true;
	if(var_72_bool != 1) {
		if(var_71_bool != 1)
			var_235_bool = false;
	}
	if(var_235_bool != 0) {
		@PrintInWidth(var_69_int, "default", (var_98_int + 16), var_99_int, 268, var_65_string, 0.64705884, 0.64705884, 0.64705884, var_25_float);
		var_99_int += var_69_int;
	}
	bool var_245_bool = true;
	if(var_76_bool != 1) {
		if(var_75_bool != 1)
			var_245_bool = false;
	}
	if(var_245_bool != 0) {
		@PrintInWidth(var_69_int, "default", (var_98_int + 16), var_99_int, 268, var_66_string, 0.64705884, 0.64705884, 0.64705884, var_25_float);
		var_99_int += var_69_int;
	}
	if(var_80_bool != 0) {
		@PrintInWidth(var_69_int, "default", (var_98_int + 16), var_99_int, 268, var_79_string, 0.64705884, 0.64705884, 0.64705884, var_25_float);
		var_99_int += var_69_int;
	}
	@PrintInWidth(var_69_int, "default", (var_98_int + 16), var_99_int, 268, var_24_string, 0.64705884, 0.64705884, 0.64705884, var_25_float);
	var_99_int += var_69_int;
	
}


void func_634(int var_392_int, int var_393_int, object var_394_object, bool var_395_bool, float var_396_float)
{
	float var_443_float; string var_444_string; int var_446_int; string var_449_string; int var_452_int; int var_453_int; string var_454_string; int var_457_int; int var_458_int; string var_459_string; float var_461_float; float var_462_float; string var_464_string; string var_466_string; int var_468_int; float var_469_float; float var_470_float; string var_471_string; string var_472_string; int var_474_int; int var_477_int; int var_478_int;
	if(!var_394_object) { //@nz
	}
	object var_438_object;
	@GetContainer(var_438_object);
	float var_439_float;
	@GetGameTime(var_439_float);
	int var_440_int = 1 + (var_439_float / 24);
	int var_483_int; object var_484_object;
	var_394_object = var_484_object;
	func_39(var_483_int, var_484_object);
	int var_441_int;
	var_483_int = var_441_int;
	int var_485_int; object var_486_object; int var_487_int;
	var_394_object = var_486_object;
	int var_488_int;
	func_194(var_488_int);
	var_488_int = var_487_int;
	func_44(var_485_int, var_486_object, var_487_int);
	int var_442_int;
	var_485_int = var_442_int;
	if(var_395_bool != 0) {
		float var_554_float; object var_555_object; int var_556_int; int var_557_int;
		var_438_object = var_555_object;
		var_440_int = var_556_int;
		int var_558_int;
		func_194(var_558_int);
		var_558_int = var_557_int;
		func_142(var_554_float, var_555_object, var_556_int, var_557_int);
		var_554_float = var_443_float;
	} else {
										float var_710_float; object var_711_object; int var_712_int; int var_713_int;
										var_438_object = var_711_object;
										var_440_int = var_712_int;
										int var_714_int;
										func_194(var_714_int);
										var_714_int = var_713_int;
										func_168(var_710_float, var_711_object, var_712_int, var_713_int);
										var_710_float = var_443_float;
	}
	bool var_445_bool;
	@HasInvItemProperty(var_445_bool, var_441_int, "Description");
	if(var_445_bool != 0) {
		@GetInvItemProperty(var_446_int, var_441_int, "Description");
		@GetStringByID(var_444_string, var_446_int);
	} else {
									var_444_string = "Error: Item doesnt have description (FIXME!)";

	}
	var_578_string = "
";
	var_444_string += var_578_string;
	string var_447_string;
	@GetStringByID(var_447_string, 5);
	var_444_string += ((var_447_string + ": ") + (var_442_int * var_443_float));
	int var_448_int;
	@GetTextHeightInWidth(var_448_int, "default", 268, var_444_string);
	var_448_int += 266;
	bool var_450_bool;
	@HasInvItemProperty(var_450_bool, var_441_int, "HasDurability");
	bool var_451_bool;
	var_394_object->HasProperty(var_451_bool, "durability");
	bool var_588_bool = true;
	if(var_451_bool != 1) {
		if(var_450_bool != 1)
			var_588_bool = false;
	}
	if(var_588_bool != 0) {
		if(var_451_bool != 0)
			var_394_object->GetProperty(var_452_int, "durability");
		else
			var_452_int = 100;

		@GetStringByID(var_449_string, 7);
		var_449_string += ((" " + var_452_int) + "%");
		@GetTextHeightInWidth(var_453_int, "default", 268, var_449_string);
		var_448_int += var_453_int;
	}
	bool var_455_bool;
	@HasInvItemProperty(var_455_bool, var_441_int, "HasUses");
	bool var_456_bool;
	var_394_object->HasProperty(var_456_bool, "uses");
	bool var_602_bool = true;
	if(var_456_bool != 1) {
		if(var_455_bool != 1)
			var_602_bool = false;
	}
	if(var_602_bool != 0) {
		if(var_456_bool != 0)
			var_394_object->GetProperty(var_457_int, "uses");
		else
			var_457_int = 1;

		@GetStringByID(var_454_string, 1006);
		var_454_string += (" " + var_457_int);
		@GetTextHeightInWidth(var_458_int, "default", 268, var_454_string);
		var_448_int += var_458_int;
	}
	bool var_460_bool = false;
	string var_612_string; object var_613_object;
	var_394_object = var_613_object;
	func_123(var_612_string, var_613_object);
	if(var_612_string == "grass_combination") {
		var_460_bool = true;
		var_394_object->GetProperty(var_461_float, "im_inc");
		var_394_object->GetProperty(var_462_float, "hl_inc");
		@GetStringByID(var_464_string, 8);
		@GetStringByID(var_466_string, 9);
		var_624_string = "%
	";
		var_629_string = "%
	";
		@GetTextHeightInWidth(var_468_int, "default", 268, ((((var_464_string + " ") + (var_461_float * 100)) + var_624_string) + (((var_466_string + " ") + (var_462_float * 100)) + var_629_string)));
		var_448_int += var_468_int;
	} else {
				string var_689_string; object var_690_object;
				var_394_object = var_690_object;
				func_123(var_689_string, var_690_object);
				if(!(var_689_string == "organ_combination")) goto Label_859;
				var_460_bool = true;
				var_394_object->GetProperty(var_469_float, "DiseaseRate");
				var_394_object->GetProperty(var_470_float, "HealthIncrease");
				@GetStringByID(var_471_string, 11);
				@GetStringByID(var_472_string, 13);
				var_701_string = "%
			";
				var_459_string = ((var_471_string + " ") + (var_469_float * 100)) + var_701_string;
				var_706_string = "%
			";
				var_459_string += (((var_472_string + " ") + (var_470_float * 100)) + var_706_string);
				@GetTextHeightInWidth(var_474_int, "default", 268, var_459_string);
				var_448_int += var_474_int;

	}
Label_859:
	int var_475_int;
	int var_476_int;
	@GetScreenSize(var_475_int, var_476_int);
	if((var_475_int - var_392_int) > 300) {
	} else {
			var_477_int -= 300;

	}
	if(var_393_int > var_448_int) {
		var_478_int = var_393_int - var_448_int;
	} else {
		var_393_int = var_478_int;
		if(!((var_478_int + var_448_int) > 600)) goto Label_880;
		var_478_int = 600 - var_448_int;

	}
Label_880:
	@ScreenToClient(var_477_int, var_478_int);
	int var_637_int; int var_638_int; int var_640_int; float var_641_float;
	var_477_int = var_637_int;
	var_478_int = var_638_int;
	var_448_int = var_640_int;
	var_396_float = var_641_float;
	func_270(var_637_int, var_638_int, 300, var_640_int, var_641_float);
	object var_644_object; float var_645_float;
	var_394_object = var_644_object;
	var_396_float = var_645_float;
	func_297((var_477_int + 16), (var_478_int + 16), var_644_object, var_645_float);
	var_478_int += 250;
	@PrintInWidth(var_448_int, "default", (var_477_int + 16), var_478_int, 268, var_444_string, 0.64705884, 0.64705884, 0.64705884, var_396_float);
	var_478_int += var_448_int;
	bool var_656_bool = true;
	if(var_451_bool != 1) {
		if(var_450_bool != 1)
			var_656_bool = false;
	}
	if(var_656_bool != 0) {
		@PrintInWidth(var_448_int, "default", (var_477_int + 16), var_478_int, 268, var_449_string, 0.64705884, 0.64705884, 0.64705884, var_396_float);
		var_478_int += var_448_int;
	}
	bool var_666_bool = true;
	if(var_456_bool != 1) {
		if(var_455_bool != 1)
			var_666_bool = false;
	}
	if(var_666_bool != 0) {
		@PrintInWidth(var_448_int, "default", (var_477_int + 16), var_478_int, 268, var_454_string, 0.64705884, 0.64705884, 0.64705884, var_396_float);
		var_478_int += var_448_int;
	}
	if(var_460_bool != 0) {
		@PrintInWidth(var_448_int, "default", (var_477_int + 16), var_478_int, 268, var_459_string, 0.64705884, 0.64705884, 0.64705884, var_396_float);
		var_478_int += var_448_int;
	}
	
}
EMIT "Stack[-41] = 0";


void func_123(string var_139_string, object var_140_object)
{
	object var_146_object;
	var_140_object = var_146_object;
	int var_145_int;
	func_39(var_145_int, var_146_object);
	int var_143_int;
	var_145_int = var_143_int;
	string var_144_string;
	@GetInvItemName(var_144_string, var_143_int);
	var_144_string = var_139_string;
}


void func_1084(int var_740_int, int var_741_int, string var_742_string, float var_744_float)
{
	int var_753_int; int var_754_int;
	var_744_float = 1;
	int var_750_int;
	@GetTextHeightInWidth(var_750_int, "default", 268, var_742_string);
	var_750_int += 32;
	int var_751_int;
	int var_752_int;
	@GetScreenSize(var_751_int, var_752_int);
	if((var_751_int - var_740_int) > 300) {
	} else {
			var_753_int -= 300;
	}
	if(var_741_int > var_750_int) {
		var_754_int = var_741_int - var_750_int;
	} else {
		var_741_int = var_754_int;
		if(!((var_754_int + var_750_int) > 600)) goto Label_1113;
		var_754_int = 600 - var_750_int;

	}
Label_1113:
	@ScreenToClient(var_753_int, var_754_int);
	int var_762_int; int var_763_int; int var_765_int; float var_766_float;
	func_270(var_762_int, var_763_int, 300, var_765_int, var_766_float);
	@PrintInWidth(var_765_int, "default", (var_762_int + 16), (var_763_int + 16), 268, var_742_string, 0.64705884, 0.64705884, 0.64705884, var_766_float);
	
}


