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
		func_1224(var_15_bool, var_16_object, actor);
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


void func_193(string var_138_string, object var_139_object)
{
	object var_145_object;
	var_139_object = var_145_object;
	int var_144_int;
	func_109(var_144_int, var_145_object);
	int var_142_int;
	var_144_int = var_142_int;
	string var_143_string;
	@GetInvItemName(var_143_string, var_142_int);
	var_143_string = var_138_string;
}


// @pe
void func_353(int var_170_int, int var_171_int, int var_172_int, int var_173_int, float var_174_float)
{
	@BlitClipped("bg", var_170_int, var_171_int, var_170_int, var_171_int, var_172_int, var_173_int, var_174_float);
	@StretchBlit("border", var_170_int, var_171_int, var_172_int, 1, var_174_float);
	@StretchBlit("border", var_170_int, ((var_171_int + var_173_int) - 1), var_172_int, 1, var_174_float);
	@StretchBlit("border", var_170_int, var_171_int, 1, var_173_int, var_174_float);
	@StretchBlit("border", ((var_170_int + var_172_int) - 1), var_171_int, 1, var_173_int, var_174_float);
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
			int var_297_int; int var_298_int; object var_299_object; float var_300_float;
			var_17_int = var_297_int;
			var_18_int = var_298_int;
			var_16_object = var_299_object;
			var_19_float = var_300_float;
			func_1050(var_297_int, var_298_int, var_299_object, var_300_float);
	}

	
	if(var_14_int == 3) {
		int var_391_int; int var_392_int; object var_393_object; float var_395_float;
		var_17_int = var_391_int;
		var_18_int = var_392_int;
		var_16_object = var_393_object;
		var_19_float = var_395_float;
		func_715(var_391_int, var_392_int, var_393_object, true, var_395_float);
	} else if(var_14_int == 4) {
		int var_738_int; int var_739_int; object var_740_object; float var_742_float;
		var_17_int = var_738_int;
		var_18_int = var_739_int;
		var_16_object = var_740_object;
		var_19_float = var_742_float;
		func_715(var_738_int, var_739_int, var_740_object, false, var_742_float);
	} else if(var_14_int == 5) {
		int var_745_int; int var_746_int; string var_747_string; object var_748_object; float var_749_float;
		var_17_int = var_745_int;
		var_18_int = var_746_int;
		var_15_string = var_747_string;
		var_16_object = var_748_object;
		var_19_float = var_749_float;
		func_1173(var_746_int, var_747_string, var_748_object, var_749_float);
	}
}


void func_1224(bool var_15_bool, object var_16_object, object var_17_object)
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
	@GetTextHeightInWidth(var_70_int, "default", 218, var_65_string);
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
		@GetTextHeightInWidth(var_75_int, "default", 218, var_66_string);
		var_70_int += var_75_int;
	}
	bool var_76_bool;
	@HasInvItemProperty(var_76_bool, var_64_int, "HasUses");
	bool var_77_bool;
	var_24_object->HasProperty(var_77_bool, "uses");
	bool var_128_bool = true;
	if(var_77_bool != 1) {
		if(var_76_bool != 1)
			var_128_bool = false;
	}
	if(var_128_bool != 0) {
		if(var_77_bool != 0)
			var_24_object->GetProperty(var_78_int, "uses");
		else
			var_78_int = 1;

		@GetStringByID(var_67_string, 1006);
		var_67_string += (" " + var_78_int);
		@GetTextHeightInWidth(var_79_int, "default", 218, var_67_string);
		var_70_int += var_79_int;
	}
	bool var_81_bool = false;
	string var_138_string; object var_139_object;
	var_24_object = var_139_object;
	func_193(var_138_string, var_139_object);
	if(var_138_string == "grass_combination") {
		var_81_bool = true;
		var_24_object->GetProperty(var_82_float, "im_inc");
		var_24_object->GetProperty(var_83_float, "hl_inc");
		@GetStringByID(var_84_string, 8);
		@GetStringByID(var_86_string, 9);
		var_156_string = "%
	";
		var_161_string = "%
	";
		@GetTextHeightInWidth(var_88_int, "default", 218, ((((var_84_string + " ") + (var_82_float * 100)) + var_156_string) + (((var_86_string + " ") + (var_83_float * 100)) + var_161_string)));
		var_70_int += var_88_int;
	} else {
				string var_274_string; object var_275_object;
				var_24_object = var_275_object;
				func_193(var_274_string, var_275_object);
				if(!(var_274_string == "organ_combination")) goto Label_601;
				var_81_bool = true;
				var_24_object->GetProperty(var_89_float, "DiseaseRate");
				var_24_object->GetProperty(var_91_float, "HealthIncrease");
				@GetStringByID(var_93_string, 11);
				@GetStringByID(var_94_string, 13);
				var_286_string = "%
			";
				var_80_string = ((var_93_string + " ") + (var_89_float * 100)) + var_286_string;
				var_291_string = "%
			";
				var_80_string += (((var_94_string + " ") + (var_91_float * 100)) + var_291_string);
				@GetTextHeightInWidth(var_96_int, "default", 218, var_80_string);
				var_70_int += var_96_int;

	}
Label_601:
	int var_97_int;
	int var_98_int;
	@GetScreenSize(var_97_int, var_98_int);
	var_70_int += 266;
	if((var_97_int - var_22_int) > 250) {
	} else {
			var_99_int -= 250;

	}
	if(var_23_int > var_70_int) {
		var_100_int = var_23_int - var_70_int;
	} else {
		var_23_int = var_100_int;
		if(!((var_100_int + var_70_int) > 600)) goto Label_624;
		var_100_int = 600 - var_70_int;

	}
Label_624:
	@ScreenToClient(var_99_int, var_100_int);
	int var_170_int; int var_171_int; int var_173_int; float var_174_float;
	var_99_int = var_170_int;
	var_100_int = var_171_int;
	var_70_int = var_173_int;
	var_26_float = var_174_float;
	func_353(var_170_int, var_171_int, 250, var_173_int, var_174_float);
	object var_192_object; float var_193_float;
	var_24_object = var_192_object;
	var_26_float = var_193_float;
	func_380((var_99_int + 16), (var_100_int + 16), var_192_object, var_193_float);
	var_100_int += 250;
	@PrintInWidth(var_70_int, "default", (var_99_int + 16), var_100_int, 218, var_65_string, 0.64705884, 0.64705884, 0.64705884, var_26_float);
	var_100_int += (var_70_int + var_71_int);
	bool var_234_bool = true;
	if(var_73_bool != 1) {
		if(var_72_bool != 1)
			var_234_bool = false;
	}
	if(var_234_bool != 0) {
		@PrintInWidth(var_70_int, "default", (var_99_int + 16), var_100_int, 218, var_66_string, 0.64705884, 0.64705884, 0.64705884, var_26_float);
		var_100_int += var_70_int;
	}
	bool var_244_bool = true;
	if(var_77_bool != 1) {
		if(var_76_bool != 1)
			var_244_bool = false;
	}
	if(var_244_bool != 0) {
		@PrintInWidth(var_70_int, "default", (var_99_int + 16), var_100_int, 218, var_67_string, 0.64705884, 0.64705884, 0.64705884, var_26_float);
		var_100_int += var_70_int;
	}
	if(var_81_bool != 0) {
		@PrintInWidth(var_70_int, "default", (var_99_int + 16), var_100_int, 218, var_80_string, 0.64705884, 0.64705884, 0.64705884, var_26_float);
		var_100_int += var_70_int;
	}
	@PrintInWidth(var_70_int, "default", (var_99_int + 16), var_100_int, 218, var_25_string, 0.64705884, 0.64705884, 0.64705884, var_26_float);
	var_100_int += var_70_int;
	
}


void func_264(int var_487_int)
{
	object var_491_object;
	@GetContainer(var_491_object);
	bool var_492_bool;
	var_491_object->HasProperty("barter", var_492_bool);
	if(!var_492_bool) //@nz
		var_487_int = 0;
	int var_493_int;
	var_491_object->GetProperty("barter", var_493_int);
	var_493_int = var_487_int;
}
EMIT "Stack[-3] = 0";


void func_203(int var_517_int)
{
	float var_519_float;
	@GetGameTime(var_519_float);
	var_517_int = 1 + (var_519_float / 24);
}


void func_715(int var_391_int, int var_392_int, object var_393_object, bool var_394_bool, float var_395_float)
{
	float var_442_float; string var_443_string; int var_445_int; string var_448_string; int var_451_int; int var_452_int; string var_453_string; int var_456_int; int var_457_int; string var_458_string; float var_460_float; float var_461_float; float var_462_float; string var_463_string; string var_464_string; string var_465_string; int var_467_int; float var_468_float; float var_469_float; string var_470_string; string var_471_string; int var_473_int; int var_476_int; int var_477_int;
	if(!var_393_object) { //@nz
	}
	object var_437_object;
	@GetContainer(var_437_object);
	float var_438_float;
	@GetGameTime(var_438_float);
	int var_439_int = 1 + (var_438_float / 24);
	int var_482_int; object var_483_object;
	var_393_object = var_483_object;
	func_109(var_482_int, var_483_object);
	int var_440_int;
	var_482_int = var_440_int;
	int var_484_int; object var_485_object; int var_486_int;
	var_393_object = var_485_object;
	int var_487_int;
	func_264(var_487_int);
	var_487_int = var_486_int;
	func_114(var_484_int, var_485_object, var_486_int);
	int var_441_int;
	var_484_int = var_441_int;
	if(var_394_bool != 0) {
		float var_553_float; object var_554_object; int var_555_int; int var_556_int;
		var_437_object = var_554_object;
		var_439_int = var_555_int;
		int var_557_int;
		func_264(var_557_int);
		var_557_int = var_556_int;
		func_212(var_553_float, var_554_object, var_555_int, var_556_int);
		var_553_float = var_442_float;
	} else {
										float var_715_float; object var_716_object; int var_717_int; int var_718_int;
										var_437_object = var_716_object;
										var_439_int = var_717_int;
										int var_719_int;
										func_264(var_719_int);
										var_719_int = var_718_int;
										func_238(var_715_float, var_716_object, var_717_int, var_718_int);
										var_715_float = var_442_float;
	}
	bool var_444_bool;
	@HasInvItemProperty(var_444_bool, var_440_int, "Description");
	if(var_444_bool != 0) {
		@GetInvItemProperty(var_445_int, var_440_int, "Description");
		@GetStringByID(var_443_string, var_445_int);
	} else {
									var_443_string = "Error: Item doesnt have description (FIXME!)";

	}
	var_577_string = "
";
	var_443_string += var_577_string;
	string var_446_string;
	@GetStringByID(var_446_string, 5);
	var_443_string += ((var_446_string + ": ") + (var_441_int * var_442_float));
	int var_447_int;
	@GetTextHeightInWidth(var_447_int, "default", 218, var_443_string);
	var_447_int += 266;
	bool var_449_bool;
	@HasInvItemProperty(var_449_bool, var_440_int, "HasDurability");
	bool var_450_bool;
	var_393_object->HasProperty(var_450_bool, "durability");
	bool var_587_bool = true;
	if(var_450_bool != 1) {
		if(var_449_bool != 1)
			var_587_bool = false;
	}
	if(var_587_bool != 0) {
		if(var_450_bool != 0)
			var_393_object->GetProperty(var_451_int, "durability");
		else
			var_451_int = 100;

		@GetStringByID(var_448_string, 7);
		var_448_string += ((" " + var_451_int) + "%");
		@GetTextHeightInWidth(var_452_int, "default", 218, var_448_string);
		var_447_int += var_452_int;
	}
	bool var_454_bool;
	@HasInvItemProperty(var_454_bool, var_440_int, "HasUses");
	bool var_455_bool;
	var_393_object->HasProperty(var_455_bool, "uses");
	bool var_601_bool = true;
	if(var_455_bool != 1) {
		if(var_454_bool != 1)
			var_601_bool = false;
	}
	if(var_601_bool != 0) {
		if(var_455_bool != 0)
			var_393_object->GetProperty(var_456_int, "uses");
		else
			var_456_int = 1;

		@GetStringByID(var_453_string, 1006);
		var_453_string += (" " + var_456_int);
		@GetTextHeightInWidth(var_457_int, "default", 218, var_453_string);
		var_447_int += var_457_int;
	}
	bool var_459_bool = false;
	string var_611_string; object var_612_object;
	var_393_object = var_612_object;
	func_193(var_611_string, var_612_object);
	if(var_611_string == "grass_combination") {
		var_459_bool = true;
		var_393_object->GetProperty(var_460_float, "im_inc");
		var_393_object->GetProperty(var_461_float, "hl_inc");
		@GetStringByID(var_463_string, 8);
		@GetStringByID(var_465_string, 9);
		var_623_string = "%
	";
		var_628_string = "%
	";
		var_634_string = "%
	";
		@GetTextHeightInWidth(var_467_int, "default", 218, (((((var_463_string + " ") + (var_460_float * 100)) + var_623_string) + (((var_465_string + " ") + (var_461_float * 100)) + var_628_string)) + (((var_464_string + " ") + (var_462_float * 100)) + var_634_string)));
		var_447_int += var_467_int;
	} else {
				string var_694_string; object var_695_object;
				var_393_object = var_695_object;
				func_193(var_694_string, var_695_object);
				if(!(var_694_string == "organ_combination")) goto Label_948;
				var_459_bool = true;
				var_393_object->GetProperty(var_468_float, "DiseaseRate");
				var_393_object->GetProperty(var_469_float, "HealthIncrease");
				@GetStringByID(var_470_string, 11);
				@GetStringByID(var_471_string, 13);
				var_706_string = "%
			";
				var_458_string = ((var_470_string + " ") + (var_468_float * 100)) + var_706_string;
				var_711_string = "%
			";
				var_458_string += (((var_471_string + " ") + (var_469_float * 100)) + var_711_string);
				@GetTextHeightInWidth(var_473_int, "default", 218, var_458_string);
				var_447_int += var_473_int;

	}
Label_948:
	int var_474_int;
	int var_475_int;
	@GetScreenSize(var_474_int, var_475_int);
	if((var_474_int - var_391_int) > 250) {
	} else {
			var_476_int -= 250;

	}
	if(var_392_int > var_447_int) {
		var_477_int = var_392_int - var_447_int;
	} else {
		var_392_int = var_477_int;
		if(!((var_477_int + var_447_int) > 600)) goto Label_969;
		var_477_int = 600 - var_447_int;

	}
Label_969:
	@ScreenToClient(var_476_int, var_477_int);
	int var_642_int; int var_643_int; int var_645_int; float var_646_float;
	var_476_int = var_642_int;
	var_477_int = var_643_int;
	var_447_int = var_645_int;
	var_395_float = var_646_float;
	func_353(var_642_int, var_643_int, 250, var_645_int, var_646_float);
	object var_649_object; float var_650_float;
	var_393_object = var_649_object;
	var_395_float = var_650_float;
	func_380((var_476_int + 16), (var_477_int + 16), var_649_object, var_650_float);
	var_477_int += 250;
	@PrintInWidth(var_447_int, "default", (var_476_int + 16), var_477_int, 218, var_443_string, 0.64705884, 0.64705884, 0.64705884, var_395_float);
	var_477_int += var_447_int;
	bool var_661_bool = true;
	if(var_450_bool != 1) {
		if(var_449_bool != 1)
			var_661_bool = false;
	}
	if(var_661_bool != 0) {
		@PrintInWidth(var_447_int, "default", (var_476_int + 16), var_477_int, 218, var_448_string, 0.64705884, 0.64705884, 0.64705884, var_395_float);
		var_477_int += var_447_int;
	}
	bool var_671_bool = true;
	if(var_455_bool != 1) {
		if(var_454_bool != 1)
			var_671_bool = false;
	}
	if(var_671_bool != 0) {
		@PrintInWidth(var_447_int, "default", (var_476_int + 16), var_477_int, 218, var_453_string, 0.64705884, 0.64705884, 0.64705884, var_395_float);
		var_477_int += var_447_int;
	}
	if(var_459_bool != 0) {
		@PrintInWidth(var_447_int, "default", (var_476_int + 16), var_477_int, 218, var_458_string, 0.64705884, 0.64705884, 0.64705884, var_395_float);
		var_477_int += var_447_int;
	}
	
}
EMIT "Stack[-41] = 0";


void func_109(int var_102_int, object var_103_object)
{
	int var_105_int;
	var_103_object->GetItemID(var_105_int);
	var_105_int = var_102_int;
}


void func_238(float var_715_float, object var_716_object, int var_717_int, int var_718_int)
{
	bool var_725_bool;
	if(var_718_int != 0)
		var_715_float = 1;
	float var_723_float = 1;
	int var_724_int = 1;
	
	while(var_724_int <= var_717_int) {
		var_716_object->HasProperty(("buyf" + var_724_int), var_725_bool);
		if(var_725_bool != 0)
			var_716_object->GetProperty(("buyf" + var_724_int), var_723_float);
		var_724_int += 1;
	}
	
	var_715_float = var_723_float / 100;
}


void func_114(int var_484_int, object var_485_object, int var_486_int)
{
	int var_506_int; int var_507_int; int var_508_int; string var_509_string; bool var_510_bool; bool var_511_bool; int var_512_int; bool var_513_bool; int var_514_int;
	if(var_486_int == 0) {
		int var_517_int;
		func_203(var_517_int);
		var_517_int = var_506_int;
		var_507_int = 0;
		var_508_int = 1;

		for(;;) {
			if(var_508_int <= var_506_int) {
				var_509_string = "Price";
				if(var_508_int != 1)
					var_509_string += var_508_int;
				int var_526_int; object var_527_object;
				var_485_object = var_527_object;
				func_109(var_526_int, var_527_object);
				@HasInvItemProperty(var_510_bool, var_526_int, var_509_string);
				if(!var_510_bool) { //@nz
				} else {
				int var_530_int; object var_531_object;
				var_485_object = var_531_object;
				func_109(var_530_int, var_531_object);
				@GetInvItemProperty(var_507_int, var_530_int, var_509_string);
			}
			var_485_object->HasProperty(var_511_bool, "durability");
			if(var_511_bool != 0) {
				var_485_object->GetProperty(var_512_int, "durability");
				var_507_int *= (0.5 * (1.0 + (var_512_int / 100.0)));
			}
			var_507_int = var_484_int;
			return 18;
	}
		int var_541_int; object var_542_object;
		var_485_object = var_542_object;
		func_109(var_541_int, var_542_object);
		@HasInvItemProperty(var_513_bool, var_541_int, ("BarterPrice" + var_486_int));
		if(!var_513_bool) //@nz
			return 18;
		int var_546_int; object var_547_object;
		var_485_object = var_547_object;
		func_109(var_546_int, var_547_object);
		@GetInvItemProperty(var_514_int, var_546_int, ("BarterPrice" + var_486_int));
		if(var_514_int > 0) {
			var_514_int = 0;
			return 18;
		}
		var_484_int = -var_514_int;
		return 18;
		}
		var_508_int += 1;
	}
	
}


void func_212(float var_553_float, object var_554_object, int var_555_int, int var_556_int)
{
	bool var_563_bool;
	if(var_556_int != 0)
		var_553_float = 1;
	float var_561_float = 1;
	int var_562_int = 1;
	
	while(var_562_int <= var_555_int) {
		var_554_object->HasProperty(("sellf" + var_562_int), var_563_bool);
		if(var_563_bool != 0)
			var_554_object->GetProperty(("sellf" + var_562_int), var_561_float);
		var_562_int += 1;
	}
	
	var_553_float = var_561_float / 100;
}


void func_1173(int var_745_int, int var_746_int, string var_747_string, float var_749_float)
{
	int var_758_int; int var_759_int;
	var_749_float = 1;
	int var_755_int;
	@GetTextHeightInWidth(var_755_int, "default", 218, var_747_string);
	var_755_int += 32;
	int var_756_int;
	int var_757_int;
	@GetScreenSize(var_756_int, var_757_int);
	if((var_756_int - var_745_int) > 250) {
	} else {
			var_758_int -= 250;
	}
	if(var_746_int > var_755_int) {
		var_759_int = var_746_int - var_755_int;
	} else {
		var_746_int = var_759_int;
		if(!((var_759_int + var_755_int) > 600)) goto Label_1202;
		var_759_int = 600 - var_755_int;

	}
Label_1202:
	@ScreenToClient(var_758_int, var_759_int);
	int var_767_int; int var_768_int; int var_770_int; float var_771_float;
	func_353(var_767_int, var_768_int, 250, var_770_int, var_771_float);
	@PrintInWidth(var_770_int, "default", (var_767_int + 16), (var_768_int + 16), 218, var_747_string, 0.64705884, 0.64705884, 0.64705884, var_771_float);
	
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


void func_1050(int var_297_int, int var_298_int, object var_299_object, float var_300_float)
{
	object var_319_object; string var_320_string; string var_321_string; int var_322_int; int var_323_int; float var_324_float; int var_325_int; float var_326_float; float var_327_float; int var_328_int; int var_329_int; int var_330_int; int var_331_int; int var_332_int; int var_333_int; int var_334_int;
	if(!var_299_object) //@nz
		return 34;
	var_300_float = 1;
	int var_318_int;
	var_299_object->size(var_318_int);
	if(!var_318_int) //@nz
		return 34;
	for(;;) {
		if(var_318_int != 0) {
			var_323_int = 0;
			var_324_float = 0;
			var_325_int = 0;

			while(var_325_int < var_318_int) {
				var_299_object->get(var_319_object, var_325_int);
				var_319_object->GetTime(var_326_float);
				if(var_326_float > var_324_float) {
					var_326_float = var_324_float;
					var_325_int = var_323_int;
				}
				var_325_int += 1;
			}

			var_299_object->get(var_319_object, var_323_int);
			var_319_object->GetTextID(var_322_int);
			@GetStringByID(var_321_string, var_322_int);
			var_319_object->GetTime(var_327_float);
			var_329_int = 60 * (var_328_int - var_328_int);
			if(var_329_int < 10) {
				var_347_int = var_328_int % 24;
				var_320_string += (((var_347_int + ":0") + var_329_int) + " ");
			} else {
			var_357_int = var_328_int % 24;
			var_320_string += (((var_357_int + ":") + var_329_int) + " ");
		}
		@GetTextHeightInWidth(var_330_int, "default", 218, var_320_string);
		var_330_int += 32;
		@GetScreenSize(var_331_int, var_332_int);
		if((var_331_int - var_297_int) > 250) {
		} else {
				var_333_int -= 250;
		}
		if(var_298_int > var_330_int) {
			var_334_int = var_298_int - var_330_int;
		} else {
			var_298_int = var_334_int;
			if(!((var_334_int + var_330_int) > 600)) goto Label_1150;
			var_334_int = 600 - var_330_int;

		}
	Label_1150:
		@ScreenToClient(var_333_int, var_334_int);
		int var_370_int; int var_371_int; int var_373_int; float var_374_float;
		func_353(var_370_int, var_371_int, 250, var_373_int, var_374_float);
		@PrintInWidth(var_373_int, "default", (var_370_int + 16), (var_371_int + 16), 218, var_320_string, 0.64705884, 0.64705884, 0.64705884, var_374_float);
		return 34;
		}
		var_320_string += var_321_string;
		var_299_object->remove(var_323_int);
		if((var_318_int + -1) != 0) {
			var_355_string = "

		";
			var_320_string += var_355_string;
		}
	}
	
}
EMIT "Stack[-16] = 0";


void func_380(int var_190_int, int var_191_int, object var_192_object, float var_193_float)
{
	if(!var_192_object) { //@nz
	}
	int var_201_int; object var_202_object;
	var_192_object = var_202_object;
	func_109(var_201_int, var_202_object);
	int var_198_int;
	var_201_int = var_198_int;
	string var_199_string;
	@GetInvItemSprite2(var_199_string, var_198_int);
	@StretchBlit(var_199_string, var_190_int, var_191_int, 218, 218, var_193_float);
	@StretchBlit("border", var_190_int, var_191_int, 218, 1, var_193_float);
	@StretchBlit("border", var_190_int, ((var_191_int + 218) - 1), 218, 1, var_193_float);
	@StretchBlit("border", var_190_int, var_191_int, 1, 218, var_193_float);
	@StretchBlit("border", ((var_190_int + 218) - 1), var_191_int, 1, 218, var_193_float);
}


