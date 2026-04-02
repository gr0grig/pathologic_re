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


void func_194(int var_486_int)
{
	object var_490_object;
	@GetContainer(var_490_object);
	bool var_491_bool;
	var_490_object->HasProperty("barter", var_491_bool);
	if(!var_491_bool) //@nz
		var_486_int = 0;
	int var_492_int;
	var_490_object->GetProperty("barter", var_492_int);
	var_492_int = var_486_int;
}
EMIT "Stack[-3] = 0";


void func_1090(int var_744_int, int var_745_int, string var_746_string, float var_748_float)
{
	int var_757_int; int var_758_int;
	var_748_float = 1;
	int var_754_int;
	@GetTextHeightInWidth(var_754_int, "default", 218, var_746_string);
	var_754_int += 32;
	int var_755_int;
	int var_756_int;
	@GetScreenSize(var_755_int, var_756_int);
	if((var_755_int - var_744_int) > 250) {
	} else {
			var_757_int -= 250;
	}
	if(var_745_int > var_754_int) {
		var_758_int = var_745_int - var_754_int;
	} else {
		var_745_int = var_758_int;
		if(!((var_758_int + var_754_int) > 600)) goto Label_1119;
		var_758_int = 600 - var_754_int;

	}
Label_1119:
	@ScreenToClient(var_757_int, var_758_int);
	int var_766_int; int var_767_int; int var_769_int; float var_770_float;
	func_270(var_766_int, var_767_int, 250, var_769_int, var_770_float);
	@PrintInWidth(var_769_int, "default", (var_766_int + 16), (var_767_int + 16), 218, var_746_string, 0.64705884, 0.64705884, 0.64705884, var_770_float);
	
}


void func_133(int var_516_int)
{
	float var_518_float;
	@GetGameTime(var_518_float);
	var_516_int = 1 + (var_518_float / 24);
}


void func_39(int var_101_int, object var_102_object)
{
	int var_104_int;
	var_102_object->GetItemID(var_104_int);
	var_104_int = var_101_int;
}


void func_967(int var_296_int, int var_297_int, object var_298_object, float var_299_float)
{
	object var_318_object; string var_319_string; string var_320_string; int var_321_int; int var_322_int; float var_323_float; int var_324_int; float var_325_float; float var_326_float; int var_327_int; int var_328_int; int var_329_int; int var_330_int; int var_331_int; int var_332_int; int var_333_int;
	if(!var_298_object) //@nz
		return 34;
	var_299_float = 1;
	int var_317_int;
	var_298_object->size(var_317_int);
	if(!var_317_int) //@nz
		return 34;
	for(;;) {
		if(var_317_int != 0) {
			var_322_int = 0;
			var_323_float = 0;
			var_324_int = 0;

			while(var_324_int < var_317_int) {
				var_298_object->get(var_318_object, var_324_int);
				var_318_object->GetTime(var_325_float);
				if(var_325_float > var_323_float) {
					var_325_float = var_323_float;
					var_324_int = var_322_int;
				}
				var_324_int += 1;
			}

			var_298_object->get(var_318_object, var_322_int);
			var_318_object->GetTextID(var_321_int);
			@GetStringByID(var_320_string, var_321_int);
			var_318_object->GetTime(var_326_float);
			var_328_int = 60 * (var_327_int - var_327_int);
			if(var_328_int < 10) {
				var_346_int = var_327_int % 24;
				var_319_string += (((var_346_int + ":0") + var_328_int) + " ");
			} else {
			var_356_int = var_327_int % 24;
			var_319_string += (((var_356_int + ":") + var_328_int) + " ");
		}
		@GetTextHeightInWidth(var_329_int, "default", 218, var_319_string);
		var_329_int += 32;
		@GetScreenSize(var_330_int, var_331_int);
		if((var_330_int - var_296_int) > 250) {
		} else {
				var_332_int -= 250;
		}
		if(var_297_int > var_329_int) {
			var_333_int = var_297_int - var_329_int;
		} else {
			var_297_int = var_333_int;
			if(!((var_333_int + var_329_int) > 600)) goto Label_1067;
			var_333_int = 600 - var_329_int;

		}
	Label_1067:
		@ScreenToClient(var_332_int, var_333_int);
		int var_369_int; int var_370_int; int var_372_int; float var_373_float;
		func_270(var_369_int, var_370_int, 250, var_372_int, var_373_float);
		@PrintInWidth(var_372_int, "default", (var_369_int + 16), (var_370_int + 16), 218, var_319_string, 0.64705884, 0.64705884, 0.64705884, var_373_float);
		return 34;
		}
		var_319_string += var_320_string;
		var_298_object->remove(var_322_int);
		if((var_317_int + -1) != 0) {
			var_354_string = "

		";
			var_319_string += var_354_string;
		}
	}
	
}
EMIT "Stack[-16] = 0";


void func_297(int var_189_int, int var_190_int, object var_191_object, float var_192_float)
{
	if(!var_191_object) { //@nz
	}
	int var_200_int; object var_201_object;
	var_191_object = var_201_object;
	func_39(var_200_int, var_201_object);
	int var_197_int;
	var_200_int = var_197_int;
	string var_198_string;
	@GetInvItemSprite2(var_198_string, var_197_int);
	@StretchBlit(var_198_string, var_189_int, var_190_int, 218, 218, var_192_float);
	@StretchBlit("border", var_189_int, var_190_int, 218, 1, var_192_float);
	@StretchBlit("border", var_189_int, ((var_190_int + 218) - 1), 218, 1, var_192_float);
	@StretchBlit("border", var_189_int, var_190_int, 1, 218, var_192_float);
	@StretchBlit("border", ((var_189_int + 218) - 1), var_190_int, 1, 218, var_192_float);
}


void func_168(float var_714_float, object var_715_object, int var_716_int, int var_717_int)
{
	bool var_724_bool;
	if(var_717_int != 0)
		var_714_float = 1;
	float var_722_float = 1;
	int var_723_int = 1;
	
	while(var_723_int <= var_716_int) {
		var_715_object->HasProperty(("buyf" + var_723_int), var_724_bool);
		if(var_724_bool != 0)
			var_715_object->GetProperty(("buyf" + var_723_int), var_722_float);
		var_723_int += 1;
	}
	
	var_714_float = var_722_float / 100;
}


void func_44(int var_483_int, object var_484_object, int var_485_int)
{
	int var_505_int; int var_506_int; int var_507_int; string var_508_string; bool var_509_bool; bool var_510_bool; int var_511_int; bool var_512_bool; int var_513_int;
	if(var_485_int == 0) {
		int var_516_int;
		func_133(var_516_int);
		var_516_int = var_505_int;
		var_506_int = 0;
		var_507_int = 1;

		for(;;) {
			if(var_507_int <= var_505_int) {
				var_508_string = "Price";
				if(var_507_int != 1)
					var_508_string += var_507_int;
				int var_525_int; object var_526_object;
				var_484_object = var_526_object;
				func_39(var_525_int, var_526_object);
				@HasInvItemProperty(var_509_bool, var_525_int, var_508_string);
				if(!var_509_bool) { //@nz
				} else {
				int var_529_int; object var_530_object;
				var_484_object = var_530_object;
				func_39(var_529_int, var_530_object);
				@GetInvItemProperty(var_506_int, var_529_int, var_508_string);
			}
			var_484_object->HasProperty(var_510_bool, "durability");
			if(var_510_bool != 0) {
				var_484_object->GetProperty(var_511_int, "durability");
				var_506_int *= (0.5 * (1.0 + (var_511_int / 100.0)));
			}
			var_506_int = var_483_int;
			return 18;
	}
		int var_540_int; object var_541_object;
		var_484_object = var_541_object;
		func_39(var_540_int, var_541_object);
		@HasInvItemProperty(var_512_bool, var_540_int, ("BarterPrice" + var_485_int));
		if(!var_512_bool) //@nz
			return 18;
		int var_545_int; object var_546_object;
		var_484_object = var_546_object;
		func_39(var_545_int, var_546_object);
		@GetInvItemProperty(var_513_int, var_545_int, ("BarterPrice" + var_485_int));
		if(var_513_int > 0) {
			var_513_int = 0;
			return 18;
		}
		var_483_int = -var_513_int;
		return 18;
		}
		var_507_int += 1;
	}
	
}


// @pe
void func_270(int var_169_int, int var_170_int, int var_171_int, int var_172_int, float var_173_float)
{
	@BlitClipped("bg", var_169_int, var_170_int, var_169_int, var_170_int, var_171_int, var_172_int, var_173_float);
	@StretchBlit("border", var_169_int, var_170_int, var_171_int, 1, var_173_float);
	@StretchBlit("border", var_169_int, ((var_170_int + var_172_int) - 1), var_171_int, 1, var_173_float);
	@StretchBlit("border", var_169_int, var_170_int, 1, var_172_int, var_173_float);
	@StretchBlit("border", ((var_169_int + var_171_int) - 1), var_170_int, 1, var_172_int, var_173_float);
}


void func_142(float var_552_float, object var_553_object, int var_554_int, int var_555_int)
{
	bool var_562_bool;
	if(var_555_int != 0)
		var_552_float = 1;
	float var_560_float = 1;
	int var_561_int = 1;
	
	while(var_561_int <= var_554_int) {
		var_553_object->HasProperty(("sellf" + var_561_int), var_562_bool);
		if(var_562_bool != 0)
			var_553_object->GetProperty(("sellf" + var_561_int), var_560_float);
		var_561_int += 1;
	}
	
	var_552_float = var_560_float / 100;
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
			int var_296_int; int var_297_int; object var_298_object; float var_299_float;
			var_16_int = var_296_int;
			var_17_int = var_297_int;
			var_15_object = var_298_object;
			var_18_float = var_299_float;
			func_967(var_296_int, var_297_int, var_298_object, var_299_float);
	}

	
	if(var_13_int == 3) {
		int var_390_int; int var_391_int; object var_392_object; float var_394_float;
		var_16_int = var_390_int;
		var_17_int = var_391_int;
		var_15_object = var_392_object;
		var_18_float = var_394_float;
		func_632(var_390_int, var_391_int, var_392_object, true, var_394_float);
	} else if(var_13_int == 4) {
		int var_737_int; int var_738_int; object var_739_object; float var_741_float;
		var_16_int = var_737_int;
		var_17_int = var_738_int;
		var_15_object = var_739_object;
		var_18_float = var_741_float;
		func_632(var_737_int, var_738_int, var_739_object, false, var_741_float);
	} else if(var_13_int == 5) {
		int var_744_int; int var_745_int; string var_746_string; object var_747_object; float var_748_float;
		var_16_int = var_744_int;
		var_17_int = var_745_int;
		var_14_string = var_746_string;
		var_15_object = var_747_object;
		var_18_float = var_748_float;
		func_1090(var_745_int, var_746_string, var_747_object, var_748_float);
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
	@GetTextHeightInWidth(var_69_int, "default", 218, var_64_string);
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
		@GetTextHeightInWidth(var_74_int, "default", 218, var_65_string);
		var_69_int += var_74_int;
	}
	bool var_75_bool;
	@HasInvItemProperty(var_75_bool, var_63_int, "HasUses");
	bool var_76_bool;
	var_23_object->HasProperty(var_76_bool, "uses");
	bool var_127_bool = true;
	if(var_76_bool != 1) {
		if(var_75_bool != 1)
			var_127_bool = false;
	}
	if(var_127_bool != 0) {
		if(var_76_bool != 0)
			var_23_object->GetProperty(var_77_int, "uses");
		else
			var_77_int = 1;

		@GetStringByID(var_66_string, 1006);
		var_66_string += (" " + var_77_int);
		@GetTextHeightInWidth(var_78_int, "default", 218, var_66_string);
		var_69_int += var_78_int;
	}
	bool var_80_bool = false;
	string var_137_string; object var_138_object;
	var_23_object = var_138_object;
	func_123(var_137_string, var_138_object);
	if(var_137_string == "grass_combination") {
		var_80_bool = true;
		var_23_object->GetProperty(var_81_float, "im_inc");
		var_23_object->GetProperty(var_82_float, "hl_inc");
		@GetStringByID(var_83_string, 8);
		@GetStringByID(var_85_string, 9);
		var_155_string = "%
	";
		var_160_string = "%
	";
		@GetTextHeightInWidth(var_87_int, "default", 218, ((((var_83_string + " ") + (var_81_float * 100)) + var_155_string) + (((var_85_string + " ") + (var_82_float * 100)) + var_160_string)));
		var_69_int += var_87_int;
	} else {
				string var_273_string; object var_274_object;
				var_23_object = var_274_object;
				func_123(var_273_string, var_274_object);
				if(!(var_273_string == "organ_combination")) goto Label_518;
				var_80_bool = true;
				var_23_object->GetProperty(var_88_float, "DiseaseRate");
				var_23_object->GetProperty(var_90_float, "HealthIncrease");
				@GetStringByID(var_92_string, 11);
				@GetStringByID(var_93_string, 13);
				var_285_string = "%
			";
				var_79_string = ((var_92_string + " ") + (var_88_float * 100)) + var_285_string;
				var_290_string = "%
			";
				var_79_string += (((var_93_string + " ") + (var_90_float * 100)) + var_290_string);
				@GetTextHeightInWidth(var_95_int, "default", 218, var_79_string);
				var_69_int += var_95_int;

	}
Label_518:
	int var_96_int;
	int var_97_int;
	@GetScreenSize(var_96_int, var_97_int);
	var_69_int += 266;
	if((var_96_int - var_21_int) > 250) {
	} else {
			var_98_int -= 250;

	}
	if(var_22_int > var_69_int) {
		var_99_int = var_22_int - var_69_int;
	} else {
		var_22_int = var_99_int;
		if(!((var_99_int + var_69_int) > 600)) goto Label_541;
		var_99_int = 600 - var_69_int;

	}
Label_541:
	@ScreenToClient(var_98_int, var_99_int);
	int var_169_int; int var_170_int; int var_172_int; float var_173_float;
	var_98_int = var_169_int;
	var_99_int = var_170_int;
	var_69_int = var_172_int;
	var_25_float = var_173_float;
	func_270(var_169_int, var_170_int, 250, var_172_int, var_173_float);
	object var_191_object; float var_192_float;
	var_23_object = var_191_object;
	var_25_float = var_192_float;
	func_297((var_98_int + 16), (var_99_int + 16), var_191_object, var_192_float);
	var_99_int += 250;
	@PrintInWidth(var_69_int, "default", (var_98_int + 16), var_99_int, 218, var_64_string, 0.64705884, 0.64705884, 0.64705884, var_25_float);
	var_99_int += (var_69_int + var_70_int);
	bool var_233_bool = true;
	if(var_72_bool != 1) {
		if(var_71_bool != 1)
			var_233_bool = false;
	}
	if(var_233_bool != 0) {
		@PrintInWidth(var_69_int, "default", (var_98_int + 16), var_99_int, 218, var_65_string, 0.64705884, 0.64705884, 0.64705884, var_25_float);
		var_99_int += var_69_int;
	}
	bool var_243_bool = true;
	if(var_76_bool != 1) {
		if(var_75_bool != 1)
			var_243_bool = false;
	}
	if(var_243_bool != 0) {
		@PrintInWidth(var_69_int, "default", (var_98_int + 16), var_99_int, 218, var_66_string, 0.64705884, 0.64705884, 0.64705884, var_25_float);
		var_99_int += var_69_int;
	}
	if(var_80_bool != 0) {
		@PrintInWidth(var_69_int, "default", (var_98_int + 16), var_99_int, 218, var_79_string, 0.64705884, 0.64705884, 0.64705884, var_25_float);
		var_99_int += var_69_int;
	}
	@PrintInWidth(var_69_int, "default", (var_98_int + 16), var_99_int, 218, var_24_string, 0.64705884, 0.64705884, 0.64705884, var_25_float);
	var_99_int += var_69_int;
	
}


void func_632(int var_390_int, int var_391_int, object var_392_object, bool var_393_bool, float var_394_float)
{
	float var_441_float; string var_442_string; int var_444_int; string var_447_string; int var_450_int; int var_451_int; string var_452_string; int var_455_int; int var_456_int; string var_457_string; float var_459_float; float var_460_float; float var_461_float; string var_462_string; string var_463_string; string var_464_string; int var_466_int; float var_467_float; float var_468_float; string var_469_string; string var_470_string; int var_472_int; int var_475_int; int var_476_int;
	if(!var_392_object) { //@nz
	}
	object var_436_object;
	@GetContainer(var_436_object);
	float var_437_float;
	@GetGameTime(var_437_float);
	int var_438_int = 1 + (var_437_float / 24);
	int var_481_int; object var_482_object;
	var_392_object = var_482_object;
	func_39(var_481_int, var_482_object);
	int var_439_int;
	var_481_int = var_439_int;
	int var_483_int; object var_484_object; int var_485_int;
	var_392_object = var_484_object;
	int var_486_int;
	func_194(var_486_int);
	var_486_int = var_485_int;
	func_44(var_483_int, var_484_object, var_485_int);
	int var_440_int;
	var_483_int = var_440_int;
	if(var_393_bool != 0) {
		float var_552_float; object var_553_object; int var_554_int; int var_555_int;
		var_436_object = var_553_object;
		var_438_int = var_554_int;
		int var_556_int;
		func_194(var_556_int);
		var_556_int = var_555_int;
		func_142(var_552_float, var_553_object, var_554_int, var_555_int);
		var_552_float = var_441_float;
	} else {
										float var_714_float; object var_715_object; int var_716_int; int var_717_int;
										var_436_object = var_715_object;
										var_438_int = var_716_int;
										int var_718_int;
										func_194(var_718_int);
										var_718_int = var_717_int;
										func_168(var_714_float, var_715_object, var_716_int, var_717_int);
										var_714_float = var_441_float;
	}
	bool var_443_bool;
	@HasInvItemProperty(var_443_bool, var_439_int, "Description");
	if(var_443_bool != 0) {
		@GetInvItemProperty(var_444_int, var_439_int, "Description");
		@GetStringByID(var_442_string, var_444_int);
	} else {
									var_442_string = "Error: Item doesnt have description (FIXME!)";

	}
	var_576_string = "
";
	var_442_string += var_576_string;
	string var_445_string;
	@GetStringByID(var_445_string, 5);
	var_442_string += ((var_445_string + ": ") + (var_440_int * var_441_float));
	int var_446_int;
	@GetTextHeightInWidth(var_446_int, "default", 218, var_442_string);
	var_446_int += 266;
	bool var_448_bool;
	@HasInvItemProperty(var_448_bool, var_439_int, "HasDurability");
	bool var_449_bool;
	var_392_object->HasProperty(var_449_bool, "durability");
	bool var_586_bool = true;
	if(var_449_bool != 1) {
		if(var_448_bool != 1)
			var_586_bool = false;
	}
	if(var_586_bool != 0) {
		if(var_449_bool != 0)
			var_392_object->GetProperty(var_450_int, "durability");
		else
			var_450_int = 100;

		@GetStringByID(var_447_string, 7);
		var_447_string += ((" " + var_450_int) + "%");
		@GetTextHeightInWidth(var_451_int, "default", 218, var_447_string);
		var_446_int += var_451_int;
	}
	bool var_453_bool;
	@HasInvItemProperty(var_453_bool, var_439_int, "HasUses");
	bool var_454_bool;
	var_392_object->HasProperty(var_454_bool, "uses");
	bool var_600_bool = true;
	if(var_454_bool != 1) {
		if(var_453_bool != 1)
			var_600_bool = false;
	}
	if(var_600_bool != 0) {
		if(var_454_bool != 0)
			var_392_object->GetProperty(var_455_int, "uses");
		else
			var_455_int = 1;

		@GetStringByID(var_452_string, 1006);
		var_452_string += (" " + var_455_int);
		@GetTextHeightInWidth(var_456_int, "default", 218, var_452_string);
		var_446_int += var_456_int;
	}
	bool var_458_bool = false;
	string var_610_string; object var_611_object;
	var_392_object = var_611_object;
	func_123(var_610_string, var_611_object);
	if(var_610_string == "grass_combination") {
		var_458_bool = true;
		var_392_object->GetProperty(var_459_float, "im_inc");
		var_392_object->GetProperty(var_460_float, "hl_inc");
		@GetStringByID(var_462_string, 8);
		@GetStringByID(var_464_string, 9);
		var_622_string = "%
	";
		var_627_string = "%
	";
		var_633_string = "%
	";
		@GetTextHeightInWidth(var_466_int, "default", 218, (((((var_462_string + " ") + (var_459_float * 100)) + var_622_string) + (((var_464_string + " ") + (var_460_float * 100)) + var_627_string)) + (((var_463_string + " ") + (var_461_float * 100)) + var_633_string)));
		var_446_int += var_466_int;
	} else {
				string var_693_string; object var_694_object;
				var_392_object = var_694_object;
				func_123(var_693_string, var_694_object);
				if(!(var_693_string == "organ_combination")) goto Label_865;
				var_458_bool = true;
				var_392_object->GetProperty(var_467_float, "DiseaseRate");
				var_392_object->GetProperty(var_468_float, "HealthIncrease");
				@GetStringByID(var_469_string, 11);
				@GetStringByID(var_470_string, 13);
				var_705_string = "%
			";
				var_457_string = ((var_469_string + " ") + (var_467_float * 100)) + var_705_string;
				var_710_string = "%
			";
				var_457_string += (((var_470_string + " ") + (var_468_float * 100)) + var_710_string);
				@GetTextHeightInWidth(var_472_int, "default", 218, var_457_string);
				var_446_int += var_472_int;

	}
Label_865:
	int var_473_int;
	int var_474_int;
	@GetScreenSize(var_473_int, var_474_int);
	if((var_473_int - var_390_int) > 250) {
	} else {
			var_475_int -= 250;

	}
	if(var_391_int > var_446_int) {
		var_476_int = var_391_int - var_446_int;
	} else {
		var_391_int = var_476_int;
		if(!((var_476_int + var_446_int) > 600)) goto Label_886;
		var_476_int = 600 - var_446_int;

	}
Label_886:
	@ScreenToClient(var_475_int, var_476_int);
	int var_641_int; int var_642_int; int var_644_int; float var_645_float;
	var_475_int = var_641_int;
	var_476_int = var_642_int;
	var_446_int = var_644_int;
	var_394_float = var_645_float;
	func_270(var_641_int, var_642_int, 250, var_644_int, var_645_float);
	object var_648_object; float var_649_float;
	var_392_object = var_648_object;
	var_394_float = var_649_float;
	func_297((var_475_int + 16), (var_476_int + 16), var_648_object, var_649_float);
	var_476_int += 250;
	@PrintInWidth(var_446_int, "default", (var_475_int + 16), var_476_int, 218, var_442_string, 0.64705884, 0.64705884, 0.64705884, var_394_float);
	var_476_int += var_446_int;
	bool var_660_bool = true;
	if(var_449_bool != 1) {
		if(var_448_bool != 1)
			var_660_bool = false;
	}
	if(var_660_bool != 0) {
		@PrintInWidth(var_446_int, "default", (var_475_int + 16), var_476_int, 218, var_447_string, 0.64705884, 0.64705884, 0.64705884, var_394_float);
		var_476_int += var_446_int;
	}
	bool var_670_bool = true;
	if(var_454_bool != 1) {
		if(var_453_bool != 1)
			var_670_bool = false;
	}
	if(var_670_bool != 0) {
		@PrintInWidth(var_446_int, "default", (var_475_int + 16), var_476_int, 218, var_452_string, 0.64705884, 0.64705884, 0.64705884, var_394_float);
		var_476_int += var_446_int;
	}
	if(var_458_bool != 0) {
		@PrintInWidth(var_446_int, "default", (var_475_int + 16), var_476_int, 218, var_457_string, 0.64705884, 0.64705884, 0.64705884, var_394_float);
		var_476_int += var_446_int;
	}
	
}
EMIT "Stack[-41] = 0";


void func_123(string var_137_string, object var_138_object)
{
	object var_144_object;
	var_138_object = var_144_object;
	int var_143_int;
	func_39(var_143_int, var_144_object);
	int var_141_int;
	var_143_int = var_141_int;
	string var_142_string;
	@GetInvItemName(var_142_string, var_141_int);
	var_142_string = var_137_string;
}


