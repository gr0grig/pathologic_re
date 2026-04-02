maintask task_0
{
	void init(object var_0_object, object var_1_object, string var_2_string, int var_3_int, float var_4_float)
	{
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, string var_2_string, int var_3_int, float var_4_float, object var_5_object, object var_6_object)
	{
		if(var_5_object != 0) {
			var_1_object = var_5_object;
			var_4_float = 0;
			var_1_object->GetTooltipType(var_3_int); //@t
			var_1_object->GetTooltipText(var_2_string); //@t
			var_1_object->GetTooltipObject(var_0_object); //@t
			int var_8_int; string var_9_string;
			var_8_int = var_3_int;
			var_9_string = var_2_string;
			func_280(var_0_object);
		} else {
			var_1_object = null;
		}
	
	}

	void OnSee(object actor, object var_1_object, string var_2_string, int var_3_int, float var_4_float, float var_5_float)
	{
		if(!var_1_object) { //@nz
		}
		int var_9_int;
		var_1_object->GetTooltipType(var_9_int); //@t
		string var_10_string;
		var_1_object->GetTooltipText(var_10_string); //@t
		object var_11_object;
		var_1_object->GetTooltipObject(var_11_object); //@t
		bool var_13_bool = true;
		bool var_14_bool = true;
		bool var_15_bool; object var_16_object;
		func_1218(var_15_bool, var_16_object, actor);
		var_39_bool = !var_15_bool; //@nz
		if(var_39_bool != 1) {
			var_40_bool = var_9_int != var_3_int;
			if(var_40_bool != 1)
				var_14_bool = false;
		}
		if(var_14_bool != 1) {
			var_41_bool = var_10_string != var_2_string;
			if(var_41_bool != 1)
				var_13_bool = false;
		}
		if(var_13_bool != 0) {
			int var_42_int; string var_43_string;
			var_42_int = var_9_int;
			var_43_string = var_10_string;
			func_280(var_16_object);
			var_4_float = 0;
		} else {
			var_4_float += var_5_float;
		}
	
	}
	EMIT "Stack[-1] = 0";

	void OnUse(object actor, object var_1_object, string var_2_string, int var_3_int, float var_4_float)
	{
		float var_8_float; int var_9_int; int var_10_int;
		if(!var_1_object) //@nz
			return 6;
		if(var_4_float < 0.5) {
			var_8_float = 0;
		} else if(var_4_float < 0.65) {
				var_8_float = (var_4_float - 0.5) / 0.15;
		}
		for(;;) {
			@ClientToScreen(0, 0);
			int var_17_int; int var_18_int; float var_19_float;
			var_9_int = var_17_int;
			var_10_int = var_18_int;
			var_8_float = var_19_float;
			func_293(var_3_int, var_2_string, actor, var_17_int, var_18_int, var_19_float);
			@Blit("default", 0, 0);
			return 6;

		}
	
		var_8_float = 1;
	}

}


void func_193(string var_140_string, object var_141_object)
{
	object var_147_object;
	var_141_object = var_147_object;
	int var_146_int;
	func_109(var_146_int, var_147_object);
	int var_144_int;
	var_146_int = var_144_int;
	string var_145_string;
	@GetInvItemName(var_145_string, var_144_int);
	var_145_string = var_140_string;
}


void func_1218(bool var_15_bool, object var_16_object, object var_17_object)
{
	bool var_24_bool = false;
	if(var_16_object == null) {
		if(var_17_object != null)
			var_24_bool = true;
	}
	if(var_24_bool != 0) {
		var_15_bool = false;
		return 6;
	}
	bool var_27_bool = false;
	if(var_17_object == null) {
		if(var_16_object != null)
			var_27_bool = true;
	}
	if(var_27_bool != 0) {
		var_15_bool = false;
		return 6;
	}
	bool var_30_bool = false;
	if(var_16_object == null) {
		if(var_17_object == null)
			var_30_bool = true;
	}
	if(var_30_bool != 0) {
		var_15_bool = true;
		return 6;
	}
	int var_33_int; object var_34_object;
	var_16_object = var_34_object;
	func_109(var_33_int, var_34_object);
	int var_21_int;
	var_33_int = var_21_int;
	string var_22_string;
	@GetInvItemSprite2(var_22_string, var_21_int);
	int var_37_int; object var_38_object;
	var_17_object = var_38_object;
	func_109(var_37_int, var_38_object);
	var_37_int = var_21_int;
	string var_23_string;
	@GetInvItemSprite2(var_23_string, var_21_int);
	var_15_bool = var_22_string == var_23_string;
}


// @pe
void func_353(int var_172_int, int var_173_int, int var_174_int, int var_175_int, float var_176_float)
{
	@BlitClipped("bg", var_172_int, var_173_int, var_172_int, var_173_int, var_174_int, var_175_int, var_176_float);
	@StretchBlit("border", var_172_int, var_173_int, var_174_int, 1, var_176_float);
	@StretchBlit("border", var_172_int, ((var_173_int + var_175_int) - 1), var_174_int, 1, var_176_float);
	@StretchBlit("border", var_172_int, var_173_int, 1, var_175_int, var_176_float);
	@StretchBlit("border", ((var_172_int + var_174_int) - 1), var_173_int, 1, var_175_int, var_176_float);
}


// @pe
void func_293(int var_14_int, string var_15_string, object var_16_object, int var_17_int, int var_18_int, float var_19_float)
{
	if(var_14_int == 1) {
		int var_22_int; int var_23_int; object var_24_object; string var_25_string; float var_26_float;
		var_17_int = var_22_int;
		var_18_int = var_23_int;
		var_16_object = var_24_object;
		var_15_string = var_25_string;
		var_19_float = var_26_float;
		func_424(var_22_int, var_23_int, var_24_object, var_25_string, var_26_float);
	} else if(var_14_int == 2) {
			int var_299_int; int var_300_int; object var_301_object; float var_302_float;
			var_17_int = var_299_int;
			var_18_int = var_300_int;
			var_16_object = var_301_object;
			var_19_float = var_302_float;
			func_1044(var_299_int, var_300_int, var_301_object, var_302_float);
	}

	
	if(var_14_int == 3) {
		int var_393_int; int var_394_int; object var_395_object; float var_397_float;
		var_17_int = var_393_int;
		var_18_int = var_394_int;
		var_16_object = var_395_object;
		var_19_float = var_397_float;
		func_717(var_393_int, var_394_int, var_395_object, true, var_397_float);
	} else if(var_14_int == 4) {
		int var_734_int; int var_735_int; object var_736_object; float var_738_float;
		var_17_int = var_734_int;
		var_18_int = var_735_int;
		var_16_object = var_736_object;
		var_19_float = var_738_float;
		func_717(var_734_int, var_735_int, var_736_object, false, var_738_float);
	} else if(var_14_int == 5) {
		int var_741_int; int var_742_int; string var_743_string; object var_744_object; float var_745_float;
		var_17_int = var_741_int;
		var_18_int = var_742_int;
		var_15_string = var_743_string;
		var_16_object = var_744_object;
		var_19_float = var_745_float;
		func_1167(var_742_int, var_743_string, var_744_object, var_745_float);
	}
}


void func_424(int var_22_int, int var_23_int, object var_24_object, string var_25_string, float var_26_float)
{
	string var_65_string; string var_66_string; string var_67_string; int var_69_int; int var_74_int; int var_75_int; int var_78_int; int var_79_int; string var_80_string; float var_82_float; float var_83_float; string var_84_string; string var_86_string; int var_88_int; float var_89_float; float var_91_float; string var_93_string; string var_94_string; int var_96_int; int var_99_int; int var_100_int;
	if(!var_24_object) { //@nz
	}
	int var_102_int; object var_103_object;
	var_24_object = var_103_object;
	func_109(var_102_int, var_103_object);
	int var_64_int;
	var_102_int = var_64_int;
	bool var_68_bool;
	@HasInvItemProperty(var_68_bool, var_64_int, "Description");
	if(var_68_bool != 0) {
		@GetInvItemProperty(var_69_int, var_64_int, "Description");
		@GetStringByID(var_65_string, var_69_int);
	} else {
									var_65_string = "Error: Item doesnt have description (FIXME!)";
	}
	int var_70_int;
	@GetTextHeightInWidth(var_70_int, "default", 268, var_65_string);
	int var_71_int;
	@GetFontHeight(var_71_int, "default");
	var_70_int += var_71_int;
	bool var_72_bool;
	@HasInvItemProperty(var_72_bool, var_64_int, "HasDurability");
	bool var_73_bool;
	var_24_object->HasProperty(var_73_bool, "durability");
	bool var_114_bool = true;
	if(var_73_bool != 1) {
		if(var_72_bool != 1)
			var_114_bool = false;
	}
	if(var_114_bool != 0) {
		if(var_73_bool != 0)
			var_24_object->GetProperty(var_74_int, "durability");
		else
			var_74_int = 100;

		@GetStringByID(var_66_string, 7);
		var_66_string += ((" " + var_74_int) + "%");
		@GetTextHeightInWidth(var_75_int, "default", 268, var_66_string);
		var_70_int += (var_75_int * 2);
	}
	bool var_76_bool;
	@HasInvItemProperty(var_76_bool, var_64_int, "HasUses");
	bool var_77_bool;
	var_24_object->HasProperty(var_77_bool, "uses");
	bool var_130_bool = true;
	if(var_77_bool != 1) {
		if(var_76_bool != 1)
			var_130_bool = false;
	}
	if(var_130_bool != 0) {
		if(var_77_bool != 0)
			var_24_object->GetProperty(var_78_int, "uses");
		else
			var_78_int = 1;

		@GetStringByID(var_67_string, 1006);
		var_67_string += (" " + var_78_int);
		@GetTextHeightInWidth(var_79_int, "default", 268, var_67_string);
		var_70_int += var_79_int;
	}
	bool var_81_bool = false;
	string var_140_string; object var_141_object;
	var_24_object = var_141_object;
	func_193(var_140_string, var_141_object);
	if(var_140_string == "grass_combination") {
		var_81_bool = true;
		var_24_object->GetProperty(var_82_float, "im_inc");
		var_24_object->GetProperty(var_83_float, "hl_inc");
		@GetStringByID(var_84_string, 8);
		@GetStringByID(var_86_string, 9);
		var_158_string = "%
	";
		var_163_string = "%
	";
		@GetTextHeightInWidth(var_88_int, "default", 268, ((((var_84_string + " ") + (var_82_float * 100)) + var_158_string) + (((var_86_string + " ") + (var_83_float * 100)) + var_163_string)));
		var_70_int += var_88_int;
	} else {
				string var_276_string; object var_277_object;
				var_24_object = var_277_object;
				func_193(var_276_string, var_277_object);
				if(!(var_276_string == "organ_combination")) goto Label_603;
				var_81_bool = true;
				var_24_object->GetProperty(var_89_float, "DiseaseRate");
				var_24_object->GetProperty(var_91_float, "HealthIncrease");
				@GetStringByID(var_93_string, 11);
				@GetStringByID(var_94_string, 13);
				var_288_string = "%
			";
				var_80_string = ((var_93_string + " ") + (var_89_float * 100)) + var_288_string;
				var_293_string = "%
			";
				var_80_string += (((var_94_string + " ") + (var_91_float * 100)) + var_293_string);
				@GetTextHeightInWidth(var_96_int, "default", 268, var_80_string);
				var_70_int += var_96_int;

	}
Label_603:
	int var_97_int;
	int var_98_int;
	@GetScreenSize(var_97_int, var_98_int);
	var_70_int += 266;
	if((var_97_int - var_22_int) > 300) {
	} else {
			var_99_int -= 300;

	}
	if(var_23_int > var_70_int) {
		var_100_int = var_23_int - var_70_int;
	} else {
		var_23_int = var_100_int;
		if(!((var_100_int + var_70_int) > 600)) goto Label_626;
		var_100_int = 600 - var_70_int;

	}
Label_626:
	@ScreenToClient(var_99_int, var_100_int);
	int var_172_int; int var_173_int; int var_175_int; float var_176_float;
	var_99_int = var_172_int;
	var_100_int = var_173_int;
	var_70_int = var_175_int;
	var_26_float = var_176_float;
	func_353(var_172_int, var_173_int, 300, var_175_int, var_176_float);
	object var_194_object; float var_195_float;
	var_24_object = var_194_object;
	var_26_float = var_195_float;
	func_380((var_99_int + 41), (var_100_int + 16), var_194_object, var_195_float);
	var_100_int += 250;
	@PrintInWidth(var_70_int, "default", (var_99_int + 16), var_100_int, 268, var_65_string, 0.64705884, 0.64705884, 0.64705884, var_26_float);
	var_100_int += (var_70_int + var_71_int);
	bool var_236_bool = true;
	if(var_73_bool != 1) {
		if(var_72_bool != 1)
			var_236_bool = false;
	}
	if(var_236_bool != 0) {
		@PrintInWidth(var_70_int, "default", (var_99_int + 16), var_100_int, 268, var_66_string, 0.64705884, 0.64705884, 0.64705884, var_26_float);
		var_100_int += var_70_int;
	}
	bool var_246_bool = true;
	if(var_77_bool != 1) {
		if(var_76_bool != 1)
			var_246_bool = false;
	}
	if(var_246_bool != 0) {
		@PrintInWidth(var_70_int, "default", (var_99_int + 16), var_100_int, 268, var_67_string, 0.64705884, 0.64705884, 0.64705884, var_26_float);
		var_100_int += var_70_int;
	}
	if(var_81_bool != 0) {
		@PrintInWidth(var_70_int, "default", (var_99_int + 16), var_100_int, 268, var_80_string, 0.64705884, 0.64705884, 0.64705884, var_26_float);
		var_100_int += var_70_int;
	}
	@PrintInWidth(var_70_int, "default", (var_99_int + 16), var_100_int, 268, var_25_string, 0.64705884, 0.64705884, 0.64705884, var_26_float);
	var_100_int += var_70_int;
	
}


void func_264(int var_489_int)
{
	object var_493_object;
	@GetContainer(var_493_object);
	bool var_494_bool;
	var_493_object->HasProperty("barter", var_494_bool);
	if(!var_494_bool) //@nz
		var_489_int = 0;
	int var_495_int;
	var_493_object->GetProperty("barter", var_495_int);
	var_495_int = var_489_int;
}
EMIT "Stack[-3] = 0";


void func_203(int var_519_int)
{
	float var_521_float;
	@GetGameTime(var_521_float);
	var_519_int = 1 + (var_521_float / 24);
}


void func_109(int var_102_int, object var_103_object)
{
	int var_105_int;
	var_103_object->GetItemID(var_105_int);
	var_105_int = var_102_int;
}


void func_717(int var_393_int, int var_394_int, object var_395_object, bool var_396_bool, float var_397_float)
{
	float var_444_float; string var_445_string; int var_447_int; string var_450_string; int var_453_int; int var_454_int; string var_455_string; int var_458_int; int var_459_int; string var_460_string; float var_462_float; float var_463_float; string var_465_string; string var_467_string; int var_469_int; float var_470_float; float var_471_float; string var_472_string; string var_473_string; int var_475_int; int var_478_int; int var_479_int;
	if(!var_395_object) { //@nz
	}
	object var_439_object;
	@GetContainer(var_439_object);
	float var_440_float;
	@GetGameTime(var_440_float);
	int var_441_int = 1 + (var_440_float / 24);
	int var_484_int; object var_485_object;
	var_395_object = var_485_object;
	func_109(var_484_int, var_485_object);
	int var_442_int;
	var_484_int = var_442_int;
	int var_486_int; object var_487_object; int var_488_int;
	var_395_object = var_487_object;
	int var_489_int;
	func_264(var_489_int);
	var_489_int = var_488_int;
	func_114(var_486_int, var_487_object, var_488_int);
	int var_443_int;
	var_486_int = var_443_int;
	if(var_396_bool != 0) {
		float var_555_float; object var_556_object; int var_557_int; int var_558_int;
		var_439_object = var_556_object;
		var_441_int = var_557_int;
		int var_559_int;
		func_264(var_559_int);
		var_559_int = var_558_int;
		func_212(var_555_float, var_556_object, var_557_int, var_558_int);
		var_555_float = var_444_float;
	} else {
										float var_711_float; object var_712_object; int var_713_int; int var_714_int;
										var_439_object = var_712_object;
										var_441_int = var_713_int;
										int var_715_int;
										func_264(var_715_int);
										var_715_int = var_714_int;
										func_238(var_711_float, var_712_object, var_713_int, var_714_int);
										var_711_float = var_444_float;
	}
	bool var_446_bool;
	@HasInvItemProperty(var_446_bool, var_442_int, "Description");
	if(var_446_bool != 0) {
		@GetInvItemProperty(var_447_int, var_442_int, "Description");
		@GetStringByID(var_445_string, var_447_int);
	} else {
									var_445_string = "Error: Item doesnt have description (FIXME!)";

	}
	var_579_string = "
";
	var_445_string += var_579_string;
	string var_448_string;
	@GetStringByID(var_448_string, 5);
	var_445_string += ((var_448_string + ": ") + (var_443_int * var_444_float));
	int var_449_int;
	@GetTextHeightInWidth(var_449_int, "default", 268, var_445_string);
	var_449_int += 266;
	bool var_451_bool;
	@HasInvItemProperty(var_451_bool, var_442_int, "HasDurability");
	bool var_452_bool;
	var_395_object->HasProperty(var_452_bool, "durability");
	bool var_589_bool = true;
	if(var_452_bool != 1) {
		if(var_451_bool != 1)
			var_589_bool = false;
	}
	if(var_589_bool != 0) {
		if(var_452_bool != 0)
			var_395_object->GetProperty(var_453_int, "durability");
		else
			var_453_int = 100;

		@GetStringByID(var_450_string, 7);
		var_450_string += ((" " + var_453_int) + "%");
		@GetTextHeightInWidth(var_454_int, "default", 268, var_450_string);
		var_449_int += var_454_int;
	}
	bool var_456_bool;
	@HasInvItemProperty(var_456_bool, var_442_int, "HasUses");
	bool var_457_bool;
	var_395_object->HasProperty(var_457_bool, "uses");
	bool var_603_bool = true;
	if(var_457_bool != 1) {
		if(var_456_bool != 1)
			var_603_bool = false;
	}
	if(var_603_bool != 0) {
		if(var_457_bool != 0)
			var_395_object->GetProperty(var_458_int, "uses");
		else
			var_458_int = 1;

		@GetStringByID(var_455_string, 1006);
		var_455_string += (" " + var_458_int);
		@GetTextHeightInWidth(var_459_int, "default", 268, var_455_string);
		var_449_int += var_459_int;
	}
	bool var_461_bool = false;
	string var_613_string; object var_614_object;
	var_395_object = var_614_object;
	func_193(var_613_string, var_614_object);
	if(var_613_string == "grass_combination") {
		var_461_bool = true;
		var_395_object->GetProperty(var_462_float, "im_inc");
		var_395_object->GetProperty(var_463_float, "hl_inc");
		@GetStringByID(var_465_string, 8);
		@GetStringByID(var_467_string, 9);
		var_625_string = "%
	";
		var_630_string = "%
	";
		@GetTextHeightInWidth(var_469_int, "default", 268, ((((var_465_string + " ") + (var_462_float * 100)) + var_625_string) + (((var_467_string + " ") + (var_463_float * 100)) + var_630_string)));
		var_449_int += var_469_int;
	} else {
				string var_690_string; object var_691_object;
				var_395_object = var_691_object;
				func_193(var_690_string, var_691_object);
				if(!(var_690_string == "organ_combination")) goto Label_942;
				var_461_bool = true;
				var_395_object->GetProperty(var_470_float, "DiseaseRate");
				var_395_object->GetProperty(var_471_float, "HealthIncrease");
				@GetStringByID(var_472_string, 11);
				@GetStringByID(var_473_string, 13);
				var_702_string = "%
			";
				var_460_string = ((var_472_string + " ") + (var_470_float * 100)) + var_702_string;
				var_707_string = "%
			";
				var_460_string += (((var_473_string + " ") + (var_471_float * 100)) + var_707_string);
				@GetTextHeightInWidth(var_475_int, "default", 268, var_460_string);
				var_449_int += var_475_int;

	}
Label_942:
	int var_476_int;
	int var_477_int;
	@GetScreenSize(var_476_int, var_477_int);
	if((var_476_int - var_393_int) > 300) {
	} else {
			var_478_int -= 300;

	}
	if(var_394_int > var_449_int) {
		var_479_int = var_394_int - var_449_int;
	} else {
		var_394_int = var_479_int;
		if(!((var_479_int + var_449_int) > 600)) goto Label_963;
		var_479_int = 600 - var_449_int;

	}
Label_963:
	@ScreenToClient(var_478_int, var_479_int);
	int var_638_int; int var_639_int; int var_641_int; float var_642_float;
	var_478_int = var_638_int;
	var_479_int = var_639_int;
	var_449_int = var_641_int;
	var_397_float = var_642_float;
	func_353(var_638_int, var_639_int, 300, var_641_int, var_642_float);
	object var_645_object; float var_646_float;
	var_395_object = var_645_object;
	var_397_float = var_646_float;
	func_380((var_478_int + 16), (var_479_int + 16), var_645_object, var_646_float);
	var_479_int += 250;
	@PrintInWidth(var_449_int, "default", (var_478_int + 16), var_479_int, 268, var_445_string, 0.64705884, 0.64705884, 0.64705884, var_397_float);
	var_479_int += var_449_int;
	bool var_657_bool = true;
	if(var_452_bool != 1) {
		if(var_451_bool != 1)
			var_657_bool = false;
	}
	if(var_657_bool != 0) {
		@PrintInWidth(var_449_int, "default", (var_478_int + 16), var_479_int, 268, var_450_string, 0.64705884, 0.64705884, 0.64705884, var_397_float);
		var_479_int += var_449_int;
	}
	bool var_667_bool = true;
	if(var_457_bool != 1) {
		if(var_456_bool != 1)
			var_667_bool = false;
	}
	if(var_667_bool != 0) {
		@PrintInWidth(var_449_int, "default", (var_478_int + 16), var_479_int, 268, var_455_string, 0.64705884, 0.64705884, 0.64705884, var_397_float);
		var_479_int += var_449_int;
	}
	if(var_461_bool != 0) {
		@PrintInWidth(var_449_int, "default", (var_478_int + 16), var_479_int, 268, var_460_string, 0.64705884, 0.64705884, 0.64705884, var_397_float);
		var_479_int += var_449_int;
	}
	
}
EMIT "Stack[-41] = 0";


void func_1167(int var_741_int, int var_742_int, string var_743_string, float var_745_float)
{
	int var_754_int; int var_755_int;
	var_745_float = 1;
	int var_751_int;
	@GetTextHeightInWidth(var_751_int, "default", 268, var_743_string);
	var_751_int += 32;
	int var_752_int;
	int var_753_int;
	@GetScreenSize(var_752_int, var_753_int);
	if((var_752_int - var_741_int) > 300) {
	} else {
			var_754_int -= 300;
	}
	if(var_742_int > var_751_int) {
		var_755_int = var_742_int - var_751_int;
	} else {
		var_742_int = var_755_int;
		if(!((var_755_int + var_751_int) > 600)) goto Label_1196;
		var_755_int = 600 - var_751_int;

	}
Label_1196:
	@ScreenToClient(var_754_int, var_755_int);
	int var_763_int; int var_764_int; int var_766_int; float var_767_float;
	func_353(var_763_int, var_764_int, 300, var_766_int, var_767_float);
	@PrintInWidth(var_766_int, "default", (var_763_int + 16), (var_764_int + 16), 268, var_743_string, 0.64705884, 0.64705884, 0.64705884, var_767_float);
	
}


void func_238(float var_711_float, object var_712_object, int var_713_int, int var_714_int)
{
	bool var_721_bool;
	if(var_714_int != 0)
		var_711_float = 1;
	float var_719_float = 1;
	int var_720_int = 1;
	
	while(var_720_int <= var_713_int) {
		var_712_object->HasProperty(("buyf" + var_720_int), var_721_bool);
		if(var_721_bool != 0)
			var_712_object->GetProperty(("buyf" + var_720_int), var_719_float);
		var_720_int += 1;
	}
	
	var_711_float = var_719_float / 100;
}


void func_114(int var_486_int, object var_487_object, int var_488_int)
{
	int var_508_int; int var_509_int; int var_510_int; string var_511_string; bool var_512_bool; bool var_513_bool; int var_514_int; bool var_515_bool; int var_516_int;
	if(var_488_int == 0) {
		int var_519_int;
		func_203(var_519_int);
		var_519_int = var_508_int;
		var_509_int = 0;
		var_510_int = 1;

		for(;;) {
			if(var_510_int <= var_508_int) {
				var_511_string = "Price";
				if(var_510_int != 1)
					var_511_string += var_510_int;
				int var_528_int; object var_529_object;
				var_487_object = var_529_object;
				func_109(var_528_int, var_529_object);
				@HasInvItemProperty(var_512_bool, var_528_int, var_511_string);
				if(!var_512_bool) { //@nz
				} else {
				int var_532_int; object var_533_object;
				var_487_object = var_533_object;
				func_109(var_532_int, var_533_object);
				@GetInvItemProperty(var_509_int, var_532_int, var_511_string);
			}
			var_487_object->HasProperty(var_513_bool, "durability");
			if(var_513_bool != 0) {
				var_487_object->GetProperty(var_514_int, "durability");
				var_509_int *= (0.5 * (1.0 + (var_514_int / 100.0)));
			}
			var_509_int = var_486_int;
			return 18;
	}
		int var_543_int; object var_544_object;
		var_487_object = var_544_object;
		func_109(var_543_int, var_544_object);
		@HasInvItemProperty(var_515_bool, var_543_int, ("BarterPrice" + var_488_int));
		if(!var_515_bool) //@nz
			return 18;
		int var_548_int; object var_549_object;
		var_487_object = var_549_object;
		func_109(var_548_int, var_549_object);
		@GetInvItemProperty(var_516_int, var_548_int, ("BarterPrice" + var_488_int));
		if(var_516_int > 0) {
			var_516_int = 0;
			return 18;
		}
		var_486_int = -var_516_int;
		return 18;
		}
		var_510_int += 1;
	}
	
}


void func_1044(int var_299_int, int var_300_int, object var_301_object, float var_302_float)
{
	object var_321_object; string var_322_string; string var_323_string; int var_324_int; int var_325_int; float var_326_float; int var_327_int; float var_328_float; float var_329_float; int var_330_int; int var_331_int; int var_332_int; int var_333_int; int var_334_int; int var_335_int; int var_336_int;
	if(!var_301_object) //@nz
		return 34;
	var_302_float = 1;
	int var_320_int;
	var_301_object->size(var_320_int);
	if(!var_320_int) //@nz
		return 34;
	for(;;) {
		if(var_320_int != 0) {
			var_325_int = 0;
			var_326_float = 0;
			var_327_int = 0;

			while(var_327_int < var_320_int) {
				var_301_object->get(var_321_object, var_327_int);
				var_321_object->GetTime(var_328_float);
				if(var_328_float > var_326_float) {
					var_328_float = var_326_float;
					var_327_int = var_325_int;
				}
				var_327_int += 1;
			}

			var_301_object->get(var_321_object, var_325_int);
			var_321_object->GetTextID(var_324_int);
			@GetStringByID(var_323_string, var_324_int);
			var_321_object->GetTime(var_329_float);
			var_331_int = 60 * (var_330_int - var_330_int);
			if(var_331_int < 10) {
				var_349_int = var_330_int % 24;
				var_322_string += (((var_349_int + ":0") + var_331_int) + " ");
			} else {
			var_359_int = var_330_int % 24;
			var_322_string += (((var_359_int + ":") + var_331_int) + " ");
		}
		@GetTextHeightInWidth(var_332_int, "default", 268, var_322_string);
		var_332_int += 32;
		@GetScreenSize(var_333_int, var_334_int);
		if((var_333_int - var_299_int) > 300) {
		} else {
				var_335_int -= 300;
		}
		if(var_300_int > var_332_int) {
			var_336_int = var_300_int - var_332_int;
		} else {
			var_300_int = var_336_int;
			if(!((var_336_int + var_332_int) > 600)) goto Label_1144;
			var_336_int = 600 - var_332_int;

		}
	Label_1144:
		@ScreenToClient(var_335_int, var_336_int);
		int var_372_int; int var_373_int; int var_375_int; float var_376_float;
		func_353(var_372_int, var_373_int, 300, var_375_int, var_376_float);
		@PrintInWidth(var_375_int, "default", (var_372_int + 16), (var_373_int + 16), 268, var_322_string, 0.64705884, 0.64705884, 0.64705884, var_376_float);
		return 34;
		}
		var_322_string += var_323_string;
		var_301_object->remove(var_325_int);
		if((var_320_int + -1) != 0) {
			var_357_string = "

		";
			var_322_string += var_357_string;
		}
	}
	
}
EMIT "Stack[-16] = 0";


void func_212(float var_555_float, object var_556_object, int var_557_int, int var_558_int)
{
	bool var_565_bool;
	if(var_558_int != 0)
		var_555_float = 1;
	float var_563_float = 1;
	int var_564_int = 1;
	
	while(var_564_int <= var_557_int) {
		var_556_object->HasProperty(("sellf" + var_564_int), var_565_bool);
		if(var_565_bool != 0)
			var_556_object->GetProperty(("sellf" + var_564_int), var_563_float);
		var_564_int += 1;
	}
	
	var_555_float = var_563_float / 100;
}


void func_280(object var_44_object)
{
	int var_47_int; string var_48_string;
	if(var_44_object != 0) {
		int var_50_int; object var_51_object;
		var_44_object = var_51_object;
		func_109(var_50_int, var_51_object);
		var_50_int = var_47_int;
		@GetInvItemSprite2(var_48_string, var_47_int);
		@LoadImage(var_48_string);
	}
}


void func_380(int var_192_int, int var_193_int, object var_194_object, float var_195_float)
{
	if(!var_194_object) { //@nz
	}
	int var_203_int; object var_204_object;
	var_194_object = var_204_object;
	func_109(var_203_int, var_204_object);
	int var_200_int;
	var_203_int = var_200_int;
	string var_201_string;
	@GetInvItemSprite2(var_201_string, var_200_int);
	@StretchBlit(var_201_string, var_192_int, var_193_int, 218, 218, var_195_float);
	@StretchBlit("border", var_192_int, var_193_int, 218, 1, var_195_float);
	@StretchBlit("border", var_192_int, ((var_193_int + 218) - 1), 218, 1, var_195_float);
	@StretchBlit("border", var_192_int, var_193_int, 1, 218, var_195_float);
	@StretchBlit("border", ((var_192_int + 218) - 1), var_193_int, 1, 218, var_195_float);
}


