// @IMPORTS: SetOwnerDraw/1,ProcessEvents/0,ClientToScreen/2,FindWindow/3,Blit/3,HasInvItemProperty/3,GetInvItemProperty/3,GetInvItemName/2,GetGameTime/1,GetContainer/1,BlitClipped/8,StretchBlit/6,GetInvItemSprite2/2,GetStringByID/2,GetTextHeightInWidth/4,GetFontHeight/2,GetScreenSize/2,ScreenToClient/2,PrintInWidth/10
// @STRINGS: A:GetTooltipType|A:GetTooltipText|A:GetTooltipObject|W:default|A:GetItemID|W:Price|W:durability|A:HasProperty|A:GetProperty|W:BarterPrice|W:sellf|W:buyf|W:barter|W:bg|W:border|W:Description|W:Error: Item doesnt have description (FIXME!)|W:HasDurability|W: |W:%|W:HasUses|W:uses|W:grass_combination|W:im_inc|W:hl_inc|W:%
|W:organ_combination|W:DiseaseRate|W:HealthIncrease|W:: |A:size|A:get|A:GetTime|A:GetTextID|W::0|W::|A:remove|W:


// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x6 vars=
// @PE: 0xd2,0x10e

task_0_event_0()
{
	var_0_object = Obj(); var_1_int = 0; var_2_int = 0; var_3_int = 0; var_4_string = ""; var_5_object = Obj(); var_6_object = Obj(); var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_string = ""; var_11_object = Obj();
	var_7_int = 0;
	var_8_int = 0;
	ClientToScreen(var_7_int, var_8_int);
	FindWindow(var_6_object, var_7_int, var_8_int);
	var_12_bool = var_6_object == 0; //@nz
	if(var_12_bool != 0) {
		return 12;
	}
	@@var_6_object:GetTooltipType(var_9_int);
	@@var_6_object:GetTooltipText(var_10_string);
	@@var_6_object:GetTooltipObject(var_11_object);
	var_13_int = 0; var_14_string = ""; var_15_object = Obj(); var_16_int = 0; var_17_int = 0; var_18_float = 0;
	var_9_int = var_13_int;
	var_10_string = var_14_string;
	var_11_object = var_15_object;
	var_7_int = var_16_int;
	var_8_int = var_17_int;
	func_210(var_13_int, var_14_string, var_15_object, var_16_int, var_17_int, (float)1);
	Blit("default", (int)0, (int)0);
	return 12;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-6] = 0";


main()
{
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


func_961(var_298_int, var_299_int, var_300_object, var_301_float)
{
	var_302_int = 0; var_303_object = Obj(); var_304_string = ""; var_305_string = ""; var_306_int = 0; var_307_int = 0; var_308_float = 0; var_309_int = 0; var_310_float = 0; var_311_float = 0; var_312_int = 0; var_313_int = 0; var_314_int = 0; var_315_int = 0; var_316_int = 0; var_317_int = 0; var_318_int = 0; var_319_int = 0; var_320_object = Obj(); var_321_string = ""; var_322_string = ""; var_323_int = 0; var_324_int = 0; var_325_float = 0; var_326_int = 0; var_327_float = 0; var_328_float = 0; var_329_int = 0; var_330_int = 0; var_331_int = 0; var_332_int = 0; var_333_int = 0; var_334_int = 0; var_335_int = 0;
	var_336_bool = var_300_object == 0; //@nz
	if(var_336_bool != 0) {
		return 34;
	}
	var_301_float = 1;
	@@var_300_object:size(var_319_int);
	var_337_bool = var_319_int == 0; //@nz
	if(var_337_bool != 0) {
		return 34;
	}
Label_971:
	var_338_int = var_319_int;
	if(var_338_int != 0) {
		var_324_int = 0;
		var_325_float = 0;
		var_326_int = 0;

	Label_976:
		var_339_bool = var_326_int < var_319_int;
		if(var_339_bool != 0) {
			@@var_300_object:get(var_320_object, var_326_int);
			@@var_320_object:GetTime(var_327_float);
			var_340_bool = var_327_float > var_325_float;
			if(var_340_bool != 0) {
				var_327_float = var_325_float;
				var_326_int = var_324_int;
			}
			var_326_int = var_326_int + (int)1;
			goto Label_976;
		}
		@@var_300_object:get(var_320_object, var_324_int);
		@@var_320_object:GetTextID(var_323_int);
		GetStringByID(var_322_string, var_323_int);
		@@var_320_object:GetTime(var_328_float);
		var_328_float = (int)0;
		var_342_int = var_329_int;
		var_344_int = var_328_float - var_329_int;
		var_330_int = (int)60 * var_344_int;
		var_346_bool = var_330_int < (int)10;
		if(var_346_bool != 0) {
			var_348_int = var_329_int % (int)24;
			var_350_int = var_348_int + ":0";
			var_351_int = var_350_int + var_330_int;
			var_353_int = var_351_int + " ";
			var_321_string = var_321_string + var_353_int;
		} else {
			var_358_int = var_329_int % (int)24;
			var_360_int = var_358_int + ":";
			var_361_int = var_360_int + var_330_int;
			var_363_int = var_361_int + " ";
			var_321_string = var_321_string + var_363_int;
	}
		GetTextHeightInWidth(var_331_int, "default", (int)268, var_321_string);
		var_331_int = var_331_int + (int)32;
		GetScreenSize(var_332_int, var_333_int);
		var_367_int = var_332_int - var_298_int;
		var_369_bool = var_367_int > (int)300;
		if(var_369_bool != 0) {
			var_298_int = var_334_int;
		} else {
				var_334_int = var_298_int - (int)300;
		}
		var_370_bool = var_299_int > var_331_int;
		if(var_370_bool != 0) {
			var_335_int = var_299_int - var_331_int;
		} else {
			var_299_int = var_335_int;
			var_385_int = var_335_int + var_331_int;
			var_387_bool = var_385_int > (int)600;
			if(var_387_bool == 0) goto Label_1061;
			var_335_int = (int)600 - var_331_int;

		}
	Label_1061:
		ScreenToClient(var_334_int, var_335_int);
		var_371_int = 0; var_372_int = 0; var_373_int = 0; var_374_int = 0; var_375_float = 0;
		var_334_int = var_371_int;
		var_335_int = var_372_int;
		var_331_int = var_374_int;
		var_301_float = var_375_float;
		func_270(var_371_int, var_372_int, (int)300, var_374_int, var_375_float);
		var_378_int = var_334_int + (int)16;
		var_380_int = var_335_int + (int)16;
		PrintInWidth(var_331_int, "default", var_378_int, var_380_int, (int)268, var_321_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_301_float);
		return 34;
	}
	var_321_string = var_321_string + var_322_string;
	@@var_300_object:remove(var_324_int);
	var_319_int = var_319_int + (int)-1;
	var_355_int = var_319_int;
	if(var_355_int != 0) {
		var_356_string = "

	";
		var_321_string = var_321_string + var_356_string;
	}
	goto Label_971;
	
}
EMIT "Stack[-16] = 0";


func_194(var_488_int)
{
	var_489_object = Obj(); var_490_bool = 0; var_491_int = 0; var_492_object = Obj(); var_493_bool = 0; var_494_int = 0;
	GetContainer(var_492_object);
	@@var_492_object:HasProperty("barter", var_493_bool);
	var_496_bool = var_493_bool == 0; //@nz
	if(var_496_bool != 0) {
		var_488_int = 0;
		return 6;
	}
	@@var_492_object:GetProperty("barter", var_494_int);
	var_494_int = var_488_int;
	return 6;
}
EMIT "Stack[-3] = 0";


func_133(var_518_int)
{
	var_519_float = 0; var_520_float = 0;
	GetGameTime(var_520_float);
	var_522_int = 0;
	var_522_int = var_520_float / (int)24;
	var_518_int = (int)1 + var_522_int;
	return 2;
}


func_39(var_101_int, var_102_object)
{
	var_103_int = 0; var_104_int = 0;
	@@var_102_object:GetItemID(var_104_int);
	var_104_int = var_101_int;
	return 2;
}


func_168(var_710_float, var_711_object, var_712_int, var_713_int)
{
	var_715_float = 0; var_716_int = 0; var_717_bool = 0; var_718_float = 0; var_719_int = 0; var_720_bool = 0;
	var_722_bool = var_713_int != (int)0;
	if(var_722_bool != 0) {
		var_710_float = 1;
		return 6;
	}
	var_718_float = 1;
	var_719_int = 1;
	
Label_176:
	var_723_bool = var_719_int <= var_712_int;
	if(var_723_bool != 0) {
		var_725_int = "buyf" + var_719_int;
		@@var_711_object:HasProperty(var_725_int, var_720_bool);
		var_726_bool = var_720_bool;
		if(var_726_bool != 0) {
			var_728_int = "buyf" + var_719_int;
			@@var_711_object:GetProperty(var_728_int, var_718_float);
		}
		var_719_int = var_719_int + (int)1;
		goto Label_176;
	}
	var_710_float = var_718_float / (int)100;
	return 6;
}


func_297(var_191_int, var_192_int, var_193_object, var_194_float)
{
	var_197_int = 0; var_198_string = ""; var_199_int = 0; var_200_string = "";
	var_201_bool = var_193_object == 0; //@nz
	if(var_201_bool != 0) {
		return 4;
	}
	var_202_int = 0; var_203_object = Obj();
	var_193_object = var_203_object;
	func_39(var_202_int, var_203_object);
	var_202_int = var_199_int;
	GetInvItemSprite2(var_200_string, var_199_int);
	StretchBlit(var_200_string, var_191_int, var_192_int, (int)218, (int)218, var_194_float);
	StretchBlit("border", var_191_int, var_192_int, (int)218, (int)1, var_194_float);
	var_211_int = var_192_int + (int)218;
	var_213_int = var_211_int - (int)1;
	StretchBlit("border", var_191_int, var_213_int, (int)218, (int)1, var_194_float);
	StretchBlit("border", var_191_int, var_192_int, (int)1, (int)218, var_194_float);
	var_221_int = var_191_int + (int)218;
	var_223_int = var_221_int - (int)1;
	StretchBlit("border", var_223_int, var_192_int, (int)1, (int)218, var_194_float);
	return 4;
}


func_44(var_485_int, var_486_object, var_487_int)
{
	var_498_int = 0; var_499_int = 0; var_500_int = 0; var_501_string = ""; var_502_bool = 0; var_503_bool = 0; var_504_int = 0; var_505_bool = 0; var_506_int = 0; var_507_int = 0; var_508_int = 0; var_509_int = 0; var_510_string = ""; var_511_bool = 0; var_512_bool = 0; var_513_int = 0; var_514_bool = 0; var_515_int = 0;
	var_517_bool = var_487_int == (int)0;
	if(var_517_bool != 0) {
		func_133((int)0);
		var_518_int = var_507_int;
		var_508_int = 0;
		var_509_int = 1;

	Label_54:
		var_524_bool = var_509_int <= var_507_int;
		if(var_524_bool != 0) {
			var_526_bool = var_509_int != (int)1;
			if(var_526_bool != 0) {
				"Price" = "Price" + var_509_int;
			}
			var_527_int = 0; var_528_object = Obj();
			var_486_object = var_528_object;
			func_39(var_527_int, var_528_object);
			HasInvItemProperty(var_511_bool, var_527_int, var_510_string);
			var_529_bool = var_511_bool == 0; //@nz
			if(var_529_bool != 0) {
			} else {
				var_531_int = 0; var_532_object = Obj();
				var_486_object = var_532_object;
				func_39(var_531_int, var_532_object);
				GetInvItemProperty(var_508_int, var_531_int, var_510_string);
		}
			@@var_486_object:HasProperty(var_512_bool, "durability");
			var_534_bool = var_512_bool;
			if(var_534_bool != 0) {
				@@var_486_object:GetProperty(var_513_int, "durability");
				var_539_float = var_513_int / (float)100.0;
				var_540_int = (float)1.0 + var_539_float;
				var_541_float = (float)0.5 * var_540_int;
				var_508_int = var_508_int * var_541_float;
			}
			var_508_int = var_485_int;
			return 18;
	}
		var_542_int = 0; var_543_object = Obj();
		var_486_object = var_543_object;
		func_39(var_542_int, var_543_object);
		var_545_int = "BarterPrice" + var_487_int;
		HasInvItemProperty(var_514_bool, var_542_int, var_545_int);
		var_546_bool = var_514_bool == 0; //@nz
		if(var_546_bool != 0) {
			return 18;
		}
		var_547_int = 0; var_548_object = Obj();
		var_486_object = var_548_object;
		func_39(var_547_int, var_548_object);
		var_550_int = "BarterPrice" + var_487_int;
		GetInvItemProperty(var_515_int, var_547_int, var_550_int);
		var_552_bool = var_515_int > (int)0;
		if(var_552_bool != 0) {
			var_515_int = (int)0;
			return 18;
		}
		var_485_int = -var_515_int;
		return 18;
	}
	var_509_int = var_509_int + (int)1;
	goto Label_54;
	
}


func_270(var_171_int, var_172_int, var_173_int, var_174_int, var_175_float)
{
	BlitClipped("bg", var_171_int, var_172_int, var_171_int, var_172_int, var_173_int, var_174_int, var_175_float);
	StretchBlit("border", var_171_int, var_172_int, var_173_int, (int)1, var_175_float);
	var_180_int = var_172_int + var_174_int;
	var_182_int = var_180_int - (int)1;
	StretchBlit("border", var_171_int, var_182_int, var_173_int, (int)1, var_175_float);
	StretchBlit("border", var_171_int, var_172_int, (int)1, var_174_int, var_175_float);
	var_187_int = var_171_int + var_173_int;
	var_189_int = var_187_int - (int)1;
	StretchBlit("border", var_189_int, var_172_int, (int)1, var_174_int, var_175_float);
	return 0;
}


func_142(var_554_float, var_555_object, var_556_int, var_557_int)
{
	var_559_float = 0; var_560_int = 0; var_561_bool = 0; var_562_float = 0; var_563_int = 0; var_564_bool = 0;
	var_566_bool = var_557_int != (int)0;
	if(var_566_bool != 0) {
		var_554_float = 1;
		return 6;
	}
	var_562_float = 1;
	var_563_int = 1;
	
Label_150:
	var_567_bool = var_563_int <= var_556_int;
	if(var_567_bool != 0) {
		var_569_int = "sellf" + var_563_int;
		@@var_555_object:HasProperty(var_569_int, var_564_bool);
		var_570_bool = var_564_bool;
		if(var_570_bool != 0) {
			var_572_int = "sellf" + var_563_int;
			@@var_555_object:GetProperty(var_572_int, var_562_float);
		}
		var_563_int = var_563_int + (int)1;
		goto Label_150;
	}
	var_554_float = var_562_float / (int)100;
	return 6;
}


func_210(var_13_int, var_14_string, var_15_object, var_16_int, var_17_int, var_18_float)
{
	var_20_bool = var_13_int == (int)1;
	if(var_20_bool != 0) {
		var_21_int = 0; var_22_int = 0; var_23_object = Obj(); var_24_string = ""; var_25_float = 0;
		var_16_int = var_21_int;
		var_17_int = var_22_int;
		var_15_object = var_23_object;
		var_14_string = var_24_string;
		var_18_float = var_25_float;
		func_341(var_21_int, var_22_int, var_23_object, var_24_string, var_25_float);
	} else {
		var_297_bool = var_13_int == (int)2;
		if(var_297_bool != 0) {
			var_298_int = 0; var_299_int = 0; var_300_object = Obj(); var_301_float = 0;
			var_16_int = var_298_int;
			var_17_int = var_299_int;
			var_15_object = var_300_object;
			var_18_float = var_301_float;
			func_961(var_298_int, var_299_int, var_300_object, var_301_float);
			goto Label_269;
		}
		var_391_bool = var_13_int == (int)3;
		if(var_391_bool != 0) {
			var_392_int = 0; var_393_int = 0; var_394_object = Obj(); var_395_bool = 0; var_396_float = 0;
			var_16_int = var_392_int;
			var_17_int = var_393_int;
			var_15_object = var_394_object;
			var_18_float = var_396_float;
			func_634(var_392_int, var_393_int, var_394_object, (bool)1, var_396_float);
			goto Label_269;
		}
		var_732_bool = var_13_int == (int)4;
		if(var_732_bool != 0) {
			var_733_int = 0; var_734_int = 0; var_735_object = Obj(); var_736_bool = 0; var_737_float = 0;
			var_16_int = var_733_int;
			var_17_int = var_734_int;
			var_15_object = var_735_object;
			var_18_float = var_737_float;
			func_634(var_733_int, var_734_int, var_735_object, (bool)0, var_737_float);
			goto Label_269;
		}
		var_739_bool = var_13_int == (int)5;
		if(var_739_bool == 0) goto Label_269;
		var_740_int = 0; var_741_int = 0; var_742_string = ""; var_743_object = Obj(); var_744_float = 0;
		var_16_int = var_740_int;
		var_17_int = var_741_int;
		var_14_string = var_742_string;
		var_15_object = var_743_object;
		var_18_float = var_744_float;
		func_1084(var_741_int, var_742_string, var_743_object, var_744_float);
	}
Label_269:
	return 0;
	
}


func_341(var_21_int, var_22_int, var_23_object, var_24_string, var_25_float)
{
	var_26_int = 0; var_27_string = ""; var_28_string = ""; var_29_string = ""; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_bool = 0; var_40_int = 0; var_41_int = 0; var_42_string = ""; var_43_bool = 0; var_44_float = 0; var_45_float = 0; var_46_string = ""; var_47_string = ""; var_48_string = ""; var_49_int = 0; var_50_int = 0; var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; var_55_string = ""; var_56_string = ""; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_string = ""; var_65_string = ""; var_66_string = ""; var_67_bool = 0; var_68_int = 0; var_69_int = 0; var_70_int = 0; var_71_bool = 0; var_72_bool = 0; var_73_int = 0; var_74_int = 0; var_75_bool = 0; var_76_bool = 0; var_77_int = 0; var_78_int = 0; var_79_string = ""; var_80_bool = 0; var_81_float = 0; var_82_float = 0; var_83_string = ""; var_84_string = ""; var_85_string = ""; var_86_int = 0; var_87_int = 0; var_88_float = 0; var_89_float = 0; var_90_float = 0; var_91_float = 0; var_92_string = ""; var_93_string = ""; var_94_int = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_int = 0; var_99_int = 0;
	var_100_bool = var_23_object == 0; //@nz
	if(var_100_bool != 0) {
		return 74;
	}
	var_101_int = 0; var_102_object = Obj();
	var_23_object = var_102_object;
	func_39(var_101_int, var_102_object);
	var_101_int = var_63_int;
	HasInvItemProperty(var_67_bool, var_63_int, "Description");
	var_106_bool = var_67_bool;
	if(var_106_bool != 0) {
		GetInvItemProperty(var_68_int, var_63_int, "Description");
		GetStringByID(var_64_string, var_68_int);
	} else {
									var_64_string = "Error: Item doesnt have description (FIXME!)";
	}
	GetTextHeightInWidth(var_69_int, "default", (int)268, var_64_string);
	GetFontHeight(var_70_int, "default");
	var_69_int = var_69_int + var_70_int;
	HasInvItemProperty(var_71_bool, var_63_int, "HasDurability");
	@@var_23_object:HasProperty(var_72_bool, "durability");
	var_113_bool = 0;
	var_113_bool = 1;
	var_114_bool = var_72_bool;
	if(var_114_bool != 1) {
		var_115_bool = var_71_bool;
		if(var_115_bool != 1) {
			var_113_bool = 0;
		}
	}
	if(var_113_bool != 0) {
		var_116_bool = var_72_bool;
		if(var_116_bool != 0) {
			@@var_23_object:GetProperty(var_73_int, "durability");
		} else {
								var_73_int = 100;

		}
		GetStringByID(var_65_string, (int)7);
		var_120_int = " " + var_73_int;
		var_122_int = var_120_int + "%";
		var_65_string = var_65_string + var_122_int;
		GetTextHeightInWidth(var_74_int, "default", (int)268, var_65_string);
		var_126_float = var_74_int * (int)2;
		var_69_int = var_69_int + var_126_float;
	}
	HasInvItemProperty(var_75_bool, var_63_int, "HasUses");
	@@var_23_object:HasProperty(var_76_bool, "uses");
	var_129_bool = 0;
	var_129_bool = 1;
	var_130_bool = var_76_bool;
	if(var_130_bool != 1) {
		var_131_bool = var_75_bool;
		if(var_131_bool != 1) {
			var_129_bool = 0;
		}
	}
	if(var_129_bool != 0) {
		var_132_bool = var_76_bool;
		if(var_132_bool != 0) {
			@@var_23_object:GetProperty(var_77_int, "uses");
		} else {
						var_77_int = 1;

		}
		GetStringByID(var_66_string, (int)1006);
		var_136_int = " " + var_77_int;
		var_66_string = var_66_string + var_136_int;
		GetTextHeightInWidth(var_78_int, "default", (int)268, var_66_string);
		var_69_int = var_69_int + var_78_int;
	}
	var_80_bool = 0;
	var_139_string = ""; var_140_object = Obj();
	var_23_object = var_140_object;
	func_123(var_139_string, var_140_object);
	var_148_bool = var_139_string == "grass_combination";
	if(var_148_bool != 0) {
		var_80_bool = 1;
		@@var_23_object:GetProperty(var_81_float, "im_inc");
		@@var_23_object:GetProperty(var_82_float, "hl_inc");
		GetStringByID(var_83_string, (int)8);
		GetStringByID(var_85_string, (int)9);
		var_86_int = var_81_float * (int)100;
		var_155_int = var_83_string + " ";
		var_156_int = var_155_int + var_86_int;
		var_157_string = "%
	";
		var_79_string = var_156_int + var_157_string;
		var_86_int = var_82_float * (int)100;
		var_160_int = var_85_string + " ";
		var_161_int = var_160_int + var_86_int;
		var_162_string = "%
	";
		var_163_int = var_161_int + var_162_string;
		var_79_string = var_79_string + var_163_int;
		GetTextHeightInWidth(var_87_int, "default", (int)268, var_79_string);
		var_69_int = var_69_int + var_87_int;
	} else {
				var_275_string = ""; var_276_object = Obj();
				var_23_object = var_276_object;
				func_123(var_275_string, var_276_object);
				var_278_bool = var_275_string == "organ_combination";
				if(var_278_bool == 0) goto Label_520;
				var_80_bool = 1;
				@@var_23_object:GetProperty(var_88_float, "DiseaseRate");
				@@var_23_object:GetProperty(var_90_float, "HealthIncrease");
				GetStringByID(var_92_string, (int)11);
				GetStringByID(var_93_string, (int)13);
				var_94_int = var_88_float * (int)100;
				var_285_int = var_92_string + " ";
				var_286_int = var_285_int + var_94_int;
				var_287_string = "%
			";
				var_79_string = var_286_int + var_287_string;
				var_94_int = var_90_float * (int)100;
				var_290_int = var_93_string + " ";
				var_291_int = var_290_int + var_94_int;
				var_292_string = "%
			";
				var_293_int = var_291_int + var_292_string;
				var_79_string = var_79_string + var_293_int;
				GetTextHeightInWidth(var_95_int, "default", (int)268, var_79_string);
				var_69_int = var_69_int + var_95_int;

	}
Label_520:
	GetScreenSize(var_96_int, var_97_int);
	var_69_int = var_69_int + (int)266;
	var_167_int = var_96_int - var_21_int;
	var_169_bool = var_167_int > (int)300;
	if(var_169_bool != 0) {
		var_21_int = var_98_int;
	} else {
			var_98_int = var_21_int - (int)300;

	}
	var_170_bool = var_22_int > var_69_int;
	if(var_170_bool != 0) {
		var_99_int = var_22_int - var_69_int;
	} else {
		var_22_int = var_99_int;
		var_270_int = var_99_int + var_69_int;
		var_272_bool = var_270_int > (int)600;
		if(var_272_bool == 0) goto Label_543;
		var_99_int = (int)600 - var_69_int;

	}
Label_543:
	ScreenToClient(var_98_int, var_99_int);
	var_171_int = 0; var_172_int = 0; var_173_int = 0; var_174_int = 0; var_175_float = 0;
	var_98_int = var_171_int;
	var_99_int = var_172_int;
	var_69_int = var_174_int;
	var_25_float = var_175_float;
	func_270(var_171_int, var_172_int, (int)300, var_174_int, var_175_float);
	var_191_int = 0; var_192_int = 0; var_193_object = Obj(); var_194_float = 0;
	var_191_int = var_98_int + (int)41;
	var_192_int = var_99_int + (int)16;
	var_23_object = var_193_object;
	var_25_float = var_194_float;
	func_297(var_191_int, var_192_int, var_193_object, var_194_float);
	var_99_int = var_99_int + (int)250;
	var_229_int = var_98_int + (int)16;
	PrintInWidth(var_69_int, "default", var_229_int, var_99_int, (int)268, var_64_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_25_float);
	var_234_int = var_69_int + var_70_int;
	var_99_int = var_99_int + var_234_int;
	var_235_bool = 0;
	var_235_bool = 1;
	var_236_bool = var_72_bool;
	if(var_236_bool != 1) {
		var_237_bool = var_71_bool;
		if(var_237_bool != 1) {
			var_235_bool = 0;
		}
	}
	if(var_235_bool != 0) {
		var_240_int = var_98_int + (int)16;
		PrintInWidth(var_69_int, "default", var_240_int, var_99_int, (int)268, var_65_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_25_float);
		var_99_int = var_99_int + var_69_int;
	}
	var_245_bool = 0;
	var_245_bool = 1;
	var_246_bool = var_76_bool;
	if(var_246_bool != 1) {
		var_247_bool = var_75_bool;
		if(var_247_bool != 1) {
			var_245_bool = 0;
		}
	}
	if(var_245_bool != 0) {
		var_250_int = var_98_int + (int)16;
		PrintInWidth(var_69_int, "default", var_250_int, var_99_int, (int)268, var_66_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_25_float);
		var_99_int = var_99_int + var_69_int;
	}
	var_255_bool = var_80_bool;
	if(var_255_bool != 0) {
		var_258_int = var_98_int + (int)16;
		PrintInWidth(var_69_int, "default", var_258_int, var_99_int, (int)268, var_79_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_25_float);
		var_99_int = var_99_int + var_69_int;
	}
	var_265_int = var_98_int + (int)16;
	PrintInWidth(var_69_int, "default", var_265_int, var_99_int, (int)268, var_24_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_25_float);
	var_99_int = var_99_int + var_69_int;
	return 74;
	
}


func_634(var_392_int, var_393_int, var_394_object, var_395_bool, var_396_float)
{
	var_397_object = Obj(); var_398_float = 0; var_399_int = 0; var_400_int = 0; var_401_int = 0; var_402_float = 0; var_403_string = ""; var_404_bool = 0; var_405_int = 0; var_406_string = ""; var_407_int = 0; var_408_string = ""; var_409_bool = 0; var_410_bool = 0; var_411_int = 0; var_412_int = 0; var_413_string = ""; var_414_bool = 0; var_415_bool = 0; var_416_int = 0; var_417_int = 0; var_418_string = ""; var_419_bool = 0; var_420_float = 0; var_421_float = 0; var_422_float = 0; var_423_string = ""; var_424_string = ""; var_425_string = ""; var_426_int = 0; var_427_int = 0; var_428_float = 0; var_429_float = 0; var_430_string = ""; var_431_string = ""; var_432_int = 0; var_433_int = 0; var_434_int = 0; var_435_int = 0; var_436_int = 0; var_437_int = 0; var_438_object = Obj(); var_439_float = 0; var_440_int = 0; var_441_int = 0; var_442_int = 0; var_443_float = 0; var_444_string = ""; var_445_bool = 0; var_446_int = 0; var_447_string = ""; var_448_int = 0; var_449_string = ""; var_450_bool = 0; var_451_bool = 0; var_452_int = 0; var_453_int = 0; var_454_string = ""; var_455_bool = 0; var_456_bool = 0; var_457_int = 0; var_458_int = 0; var_459_string = ""; var_460_bool = 0; var_461_float = 0; var_462_float = 0; var_463_float = 0; var_464_string = ""; var_465_string = ""; var_466_string = ""; var_467_int = 0; var_468_int = 0; var_469_float = 0; var_470_float = 0; var_471_string = ""; var_472_string = ""; var_473_int = 0; var_474_int = 0; var_475_int = 0; var_476_int = 0; var_477_int = 0; var_478_int = 0;
	var_479_bool = var_394_object == 0; //@nz
	if(var_479_bool != 0) {
		return 82;
	}
	GetContainer(var_438_object);
	GetGameTime(var_439_float);
	var_482_float = var_439_float / (int)24;
	var_440_int = (int)1 + var_482_float;
	var_483_int = 0; var_484_object = Obj();
	var_394_object = var_484_object;
	func_39(var_483_int, var_484_object);
	var_483_int = var_441_int;
	var_485_int = 0; var_486_object = Obj(); var_487_int = 0;
	var_394_object = var_486_object;
	func_194((int)0);
	var_488_int = var_487_int;
	func_44(var_485_int, var_486_object, var_487_int);
	var_485_int = var_442_int;
	var_553_bool = var_395_bool;
	if(var_553_bool != 0) {
		var_554_float = 0; var_555_object = Obj(); var_556_int = 0; var_557_int = 0;
		var_438_object = var_555_object;
		var_440_int = var_556_int;
		func_194((int)0);
		var_558_int = var_557_int;
		func_142(var_554_float, var_555_object, var_556_int, var_557_int);
		var_554_float = var_443_float;
	} else {
										var_710_float = 0; var_711_object = Obj(); var_712_int = 0; var_713_int = 0;
										var_438_object = var_711_object;
										var_440_int = var_712_int;
										func_194((int)0);
										var_714_int = var_713_int;
										func_168(var_710_float, var_711_object, var_712_int, var_713_int);
										var_710_float = var_443_float;
	}
	var_442_int = var_442_int * var_443_float;
	HasInvItemProperty(var_445_bool, var_441_int, "Description");
	var_576_bool = var_445_bool;
	if(var_576_bool != 0) {
		GetInvItemProperty(var_446_int, var_441_int, "Description");
		GetStringByID(var_444_string, var_446_int);
	} else {
									var_444_string = "Error: Item doesnt have description (FIXME!)";

	}
	var_578_string = "
";
	var_444_string = var_444_string + var_578_string;
	GetStringByID(var_447_string, (int)5);
	var_581_int = var_447_string + ": ";
	var_582_int = var_581_int + var_442_int;
	var_444_string = var_444_string + var_582_int;
	GetTextHeightInWidth(var_448_int, "default", (int)268, var_444_string);
	var_448_int = var_448_int + (int)266;
	HasInvItemProperty(var_450_bool, var_441_int, "HasDurability");
	@@var_394_object:HasProperty(var_451_bool, "durability");
	var_588_bool = 0;
	var_588_bool = 1;
	var_589_bool = var_451_bool;
	if(var_589_bool != 1) {
		var_590_bool = var_450_bool;
		if(var_590_bool != 1) {
			var_588_bool = 0;
		}
	}
	if(var_588_bool != 0) {
		var_591_bool = var_451_bool;
		if(var_591_bool != 0) {
			@@var_394_object:GetProperty(var_452_int, "durability");
		} else {
								var_452_int = 100;

		}
		GetStringByID(var_449_string, (int)7);
		var_595_int = " " + var_452_int;
		var_597_int = var_595_int + "%";
		var_449_string = var_449_string + var_597_int;
		GetTextHeightInWidth(var_453_int, "default", (int)268, var_449_string);
		var_448_int = var_448_int + var_453_int;
	}
	HasInvItemProperty(var_455_bool, var_441_int, "HasUses");
	@@var_394_object:HasProperty(var_456_bool, "uses");
	var_602_bool = 0;
	var_602_bool = 1;
	var_603_bool = var_456_bool;
	if(var_603_bool != 1) {
		var_604_bool = var_455_bool;
		if(var_604_bool != 1) {
			var_602_bool = 0;
		}
	}
	if(var_602_bool != 0) {
		var_605_bool = var_456_bool;
		if(var_605_bool != 0) {
			@@var_394_object:GetProperty(var_457_int, "uses");
		} else {
						var_457_int = 1;

		}
		GetStringByID(var_454_string, (int)1006);
		var_609_int = " " + var_457_int;
		var_454_string = var_454_string + var_609_int;
		GetTextHeightInWidth(var_458_int, "default", (int)268, var_454_string);
		var_448_int = var_448_int + var_458_int;
	}
	var_460_bool = 0;
	var_612_string = ""; var_613_object = Obj();
	var_394_object = var_613_object;
	func_123(var_612_string, var_613_object);
	var_615_bool = var_612_string == "grass_combination";
	if(var_615_bool != 0) {
		var_460_bool = 1;
		@@var_394_object:GetProperty(var_461_float, "im_inc");
		@@var_394_object:GetProperty(var_462_float, "hl_inc");
		GetStringByID(var_464_string, (int)8);
		GetStringByID(var_466_string, (int)9);
		var_467_int = var_461_float * (int)100;
		var_622_int = var_464_string + " ";
		var_623_int = var_622_int + var_467_int;
		var_624_string = "%
	";
		var_459_string = var_623_int + var_624_string;
		var_467_int = var_462_float * (int)100;
		var_627_int = var_466_string + " ";
		var_628_int = var_627_int + var_467_int;
		var_629_string = "%
	";
		var_630_int = var_628_int + var_629_string;
		var_459_string = var_459_string + var_630_int;
		GetTextHeightInWidth(var_468_int, "default", (int)268, var_459_string);
		var_448_int = var_448_int + var_468_int;
	} else {
				var_689_string = ""; var_690_object = Obj();
				var_394_object = var_690_object;
				func_123(var_689_string, var_690_object);
				var_692_bool = var_689_string == "organ_combination";
				if(var_692_bool == 0) goto Label_859;
				var_460_bool = 1;
				@@var_394_object:GetProperty(var_469_float, "DiseaseRate");
				@@var_394_object:GetProperty(var_470_float, "HealthIncrease");
				GetStringByID(var_471_string, (int)11);
				GetStringByID(var_472_string, (int)13);
				var_473_int = var_469_float * (int)100;
				var_699_int = var_471_string + " ";
				var_700_int = var_699_int + var_473_int;
				var_701_string = "%
			";
				var_459_string = var_700_int + var_701_string;
				var_473_int = var_470_float * (int)100;
				var_704_int = var_472_string + " ";
				var_705_int = var_704_int + var_473_int;
				var_706_string = "%
			";
				var_707_int = var_705_int + var_706_string;
				var_459_string = var_459_string + var_707_int;
				GetTextHeightInWidth(var_474_int, "default", (int)268, var_459_string);
				var_448_int = var_448_int + var_474_int;

	}
Label_859:
	GetScreenSize(var_475_int, var_476_int);
	var_633_int = var_475_int - var_392_int;
	var_635_bool = var_633_int > (int)300;
	if(var_635_bool != 0) {
		var_392_int = var_477_int;
	} else {
			var_477_int = var_392_int - (int)300;

	}
	var_636_bool = var_393_int > var_448_int;
	if(var_636_bool != 0) {
		var_478_int = var_393_int - var_448_int;
	} else {
		var_393_int = var_478_int;
		var_684_int = var_478_int + var_448_int;
		var_686_bool = var_684_int > (int)600;
		if(var_686_bool == 0) goto Label_880;
		var_478_int = (int)600 - var_448_int;

	}
Label_880:
	ScreenToClient(var_477_int, var_478_int);
	var_637_int = 0; var_638_int = 0; var_639_int = 0; var_640_int = 0; var_641_float = 0;
	var_477_int = var_637_int;
	var_478_int = var_638_int;
	var_448_int = var_640_int;
	var_396_float = var_641_float;
	func_270(var_637_int, var_638_int, (int)300, var_640_int, var_641_float);
	var_642_int = 0; var_643_int = 0; var_644_object = Obj(); var_645_float = 0;
	var_642_int = var_477_int + (int)16;
	var_643_int = var_478_int + (int)16;
	var_394_object = var_644_object;
	var_396_float = var_645_float;
	func_297(var_642_int, var_643_int, var_644_object, var_645_float);
	var_478_int = var_478_int + (int)250;
	var_651_int = var_477_int + (int)16;
	PrintInWidth(var_448_int, "default", var_651_int, var_478_int, (int)268, var_444_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_396_float);
	var_478_int = var_478_int + var_448_int;
	var_656_bool = 0;
	var_656_bool = 1;
	var_657_bool = var_451_bool;
	if(var_657_bool != 1) {
		var_658_bool = var_450_bool;
		if(var_658_bool != 1) {
			var_656_bool = 0;
		}
	}
	if(var_656_bool != 0) {
		var_661_int = var_477_int + (int)16;
		PrintInWidth(var_448_int, "default", var_661_int, var_478_int, (int)268, var_449_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_396_float);
		var_478_int = var_478_int + var_448_int;
	}
	var_666_bool = 0;
	var_666_bool = 1;
	var_667_bool = var_456_bool;
	if(var_667_bool != 1) {
		var_668_bool = var_455_bool;
		if(var_668_bool != 1) {
			var_666_bool = 0;
		}
	}
	if(var_666_bool != 0) {
		var_671_int = var_477_int + (int)16;
		PrintInWidth(var_448_int, "default", var_671_int, var_478_int, (int)268, var_454_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_396_float);
		var_478_int = var_478_int + var_448_int;
	}
	var_676_bool = var_460_bool;
	if(var_676_bool != 0) {
		var_679_int = var_477_int + (int)16;
		PrintInWidth(var_448_int, "default", var_679_int, var_478_int, (int)268, var_459_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_396_float);
		var_478_int = var_478_int + var_448_int;
	}
	return 82;
	
}
EMIT "Stack[-41] = 0";


func_123(var_139_string, var_140_object)
{
	var_141_int = 0; var_142_string = ""; var_143_int = 0; var_144_string = "";
	var_145_int = 0; var_146_object = Obj();
	var_140_object = var_146_object;
	func_39(var_145_int, var_146_object);
	var_145_int = var_143_int;
	GetInvItemName(var_144_string, var_143_int);
	var_144_string = var_139_string;
	return 4;
}


func_1084(var_740_int, var_741_int, var_742_string, var_744_float)
{
	var_745_int = 0; var_746_int = 0; var_747_int = 0; var_748_int = 0; var_749_int = 0; var_750_int = 0; var_751_int = 0; var_752_int = 0; var_753_int = 0; var_754_int = 0;
	var_744_float = 1;
	GetTextHeightInWidth(var_750_int, "default", (int)268, var_742_string);
	var_750_int = var_750_int + (int)32;
	GetScreenSize(var_751_int, var_752_int);
	var_758_int = var_751_int - var_740_int;
	var_760_bool = var_758_int > (int)300;
	if(var_760_bool != 0) {
		var_740_int = var_753_int;
	} else {
			var_753_int = var_740_int - (int)300;
	}
	var_761_bool = var_741_int > var_750_int;
	if(var_761_bool != 0) {
		var_754_int = var_741_int - var_750_int;
	} else {
		var_741_int = var_754_int;
		var_776_int = var_754_int + var_750_int;
		var_778_bool = var_776_int > (int)600;
		if(var_778_bool == 0) goto Label_1113;
		var_754_int = (int)600 - var_750_int;

	}
Label_1113:
	ScreenToClient(var_753_int, var_754_int);
	var_762_int = 0; var_763_int = 0; var_764_int = 0; var_765_int = 0; var_766_float = 0;
	var_753_int = var_762_int;
	var_754_int = var_763_int;
	var_750_int = var_765_int;
	var_744_float = var_766_float;
	func_270(var_762_int, var_763_int, (int)300, var_765_int, var_766_float);
	var_769_int = var_753_int + (int)16;
	var_771_int = var_754_int + (int)16;
	PrintInWidth(var_750_int, "default", var_769_int, var_771_int, (int)268, var_742_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_744_float);
	return 10;
	
}


