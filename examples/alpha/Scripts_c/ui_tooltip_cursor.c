// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,ClientToScreen/2,FindWindow/3,HasInvItemProperty/3,Trace/1,GetInvItemProperty/3,GetContainer/1,BlitClipped/7,StretchBlit/5,GetInvItemSprite2/2,LoadImage/1,GetStringByID/2,GetTextHeightInWidth/4,GetScreenSize/2,ScreenToClient/2,PrintInWidth/9,GetGameTime/1
// @STRINGS: W:default|A:GetTooltipType|A:GetTooltipText|A:GetTooltipObject|W:Price|W:Item with id :|W: doesn't have price|W:BarterPrice|A:GetItemID|W:sellf|A:HasProperty|A:GetProperty|W:buyf|W:barter|W:bg|W:border|W:Description|W:Error: Item doesnt have description (FIXME!)|A:size|A:get|A:GetTime|A:GetTextID|W::0|W: |A:remove|W:

|W:: 
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x9 vars=
// @PE: 0xaa,0xe0

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
	var_13_int = 0; var_14_string = ""; var_15_object = Obj(); var_16_int = 0; var_17_int = 0;
	var_9_int = var_13_int;
	var_10_string = var_14_string;
	var_11_object = var_15_object;
	var_7_int = var_16_int;
	var_8_int = var_17_int;
	func_170(var_13_int, var_14_string, var_15_object, var_16_int, var_17_int);
	return 12;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-6] = 0";


main()
{
	SetBackground("default");
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


func_224(var_56_int, var_57_int, var_58_int, var_59_int)
{
	BlitClipped("bg", var_56_int, var_57_int, var_56_int, var_57_int, var_58_int, var_59_int);
	StretchBlit("border", var_56_int, var_57_int, var_58_int, (int)1);
	var_64_int = var_57_int + var_59_int;
	var_66_int = var_64_int - (int)1;
	StretchBlit("border", var_56_int, var_66_int, var_58_int, (int)1);
	StretchBlit("border", var_56_int, var_57_int, (int)1, var_59_int);
	var_71_int = var_56_int + var_58_int;
	var_73_int = var_71_int - (int)1;
	StretchBlit("border", var_73_int, var_57_int, (int)1, var_59_int);
	return 0;
}


func_97(var_42_int, var_43_object)
{
	var_44_int = 0; var_45_int = 0;
	@@var_43_object:GetItemID(var_45_int);
	var_45_int = var_42_int;
	return 2;
}


func_128(var_360_float, var_361_object, var_362_int, var_363_int)
{
	var_365_float = 0; var_366_int = 0; var_367_bool = 0; var_368_float = 0; var_369_int = 0; var_370_bool = 0;
	var_372_bool = var_363_int != (int)0;
	if(var_372_bool != 0) {
		var_360_float = 1;
		return 6;
	}
	var_368_float = 1;
	var_369_int = 1;
	
Label_136:
	var_373_bool = var_369_int <= var_362_int;
	if(var_373_bool != 0) {
		var_375_int = "buyf" + var_369_int;
		@@var_361_object:HasProperty(var_375_int, var_370_bool);
		var_376_bool = var_370_bool;
		if(var_376_bool != 0) {
			var_378_int = "buyf" + var_369_int;
			@@var_361_object:GetProperty(var_378_int, var_368_float);
		}
		var_369_int = var_369_int + (int)1;
		goto Label_136;
	}
	var_360_float = var_368_float / (int)100;
	return 6;
}


func_36(var_253_int, var_254_object, var_255_int)
{
	var_266_bool = 0; var_267_int = 0; var_268_bool = 0; var_269_int = 0; var_270_bool = 0; var_271_int = 0; var_272_bool = 0; var_273_int = 0;
	var_275_bool = var_255_int == (int)0;
	if(var_275_bool != 0) {
		var_276_int = 0; var_277_object = Obj();
		var_254_object = var_277_object;
		func_97(var_276_int, var_277_object);
		HasInvItemProperty(var_270_bool, var_276_int, "Price");
		var_279_bool = var_270_bool == 0; //@nz
		if(var_279_bool != 0) {
			var_281_int = 0; var_282_object = Obj();
			var_254_object = var_282_object;
			func_97(var_281_int, var_282_object);
			var_283_int = "Item with id :" + var_281_int;
			var_285_int = var_283_int + " doesn't have price";
			Trace(var_285_int);
			var_253_int = 1;
			return 8;
		}
		var_286_int = 0; var_287_object = Obj();
		var_254_object = var_287_object;
		func_97(var_286_int, var_287_object);
		GetInvItemProperty(var_271_int, var_286_int, "Price");
		var_271_int = var_253_int;
		return 8;
	}
	var_289_int = 0; var_290_object = Obj();
	var_254_object = var_290_object;
	func_97(var_289_int, var_290_object);
	var_292_int = "BarterPrice" + var_255_int;
	HasInvItemProperty(var_272_bool, var_289_int, var_292_int);
	var_293_bool = var_272_bool == 0; //@nz
	if(var_293_bool != 0) {
		return 8;
	}
	var_294_int = 0; var_295_object = Obj();
	var_254_object = var_295_object;
	func_97(var_294_int, var_295_object);
	var_297_int = "BarterPrice" + var_255_int;
	GetInvItemProperty(var_273_int, var_294_int, var_297_int);
	var_299_bool = var_273_int > (int)0;
	if(var_299_bool != 0) {
		var_273_int = (int)0;
		return 8;
	}
	var_253_int = -var_273_int;
	return 8;
}


func_613(var_389_int, var_390_int, var_391_string)
{
	var_393_int = 0; var_394_int = 0; var_395_int = 0; var_396_int = 0; var_397_int = 0; var_398_int = 0; var_399_int = 0; var_400_int = 0; var_401_int = 0; var_402_int = 0;
	GetTextHeightInWidth(var_398_int, "default", (int)218, var_391_string);
	var_398_int = var_398_int + (int)32;
	GetScreenSize(var_399_int, var_400_int);
	var_406_int = var_399_int - var_389_int;
	var_408_bool = var_406_int > (int)250;
	if(var_408_bool != 0) {
		var_389_int = var_401_int;
	} else {
			var_401_int = var_389_int - (int)250;
	}
	var_409_bool = var_390_int > var_398_int;
	if(var_409_bool != 0) {
		var_402_int = var_390_int - var_398_int;
	} else {
		var_390_int = var_402_int;

	}
	ScreenToClient(var_401_int, var_402_int);
	var_410_int = 0; var_411_int = 0; var_412_int = 0; var_413_int = 0;
	var_401_int = var_410_int;
	var_402_int = var_411_int;
	var_398_int = var_413_int;
	func_224(var_410_int, var_411_int, (int)250, var_413_int);
	var_416_int = var_401_int + (int)16;
	var_418_int = var_402_int + (int)16;
	PrintInWidth(var_398_int, "default", var_416_int, var_418_int, (int)218, var_391_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452);
	return 10;
	
}


func_102(var_301_float, var_302_object, var_303_int, var_304_int)
{
	var_306_float = 0; var_307_int = 0; var_308_bool = 0; var_309_float = 0; var_310_int = 0; var_311_bool = 0;
	var_313_bool = var_304_int != (int)0;
	if(var_313_bool != 0) {
		var_301_float = 1;
		return 6;
	}
	var_309_float = 1;
	var_310_int = 1;
	
Label_110:
	var_314_bool = var_310_int <= var_303_int;
	if(var_314_bool != 0) {
		var_316_int = "sellf" + var_310_int;
		@@var_302_object:HasProperty(var_316_int, var_311_bool);
		var_317_bool = var_311_bool;
		if(var_317_bool != 0) {
			var_319_int = "sellf" + var_310_int;
			@@var_302_object:GetProperty(var_319_int, var_309_float);
		}
		var_310_int = var_310_int + (int)1;
		goto Label_110;
	}
	var_301_float = var_309_float / (int)100;
	return 6;
}


func_487(var_213_int, var_214_int, var_215_object, var_216_bool)
{
	var_217_object = Obj(); var_218_float = 0; var_219_int = 0; var_220_int = 0; var_221_int = 0; var_222_float = 0; var_223_string = ""; var_224_bool = 0; var_225_int = 0; var_226_string = ""; var_227_int = 0; var_228_int = 0; var_229_int = 0; var_230_int = 0; var_231_int = 0; var_232_object = Obj(); var_233_float = 0; var_234_int = 0; var_235_int = 0; var_236_int = 0; var_237_float = 0; var_238_string = ""; var_239_bool = 0; var_240_int = 0; var_241_string = ""; var_242_int = 0; var_243_int = 0; var_244_int = 0; var_245_int = 0; var_246_int = 0;
	var_247_bool = var_215_object == 0; //@nz
	if(var_247_bool != 0) {
		return 30;
	}
	GetContainer(var_232_object);
	GetGameTime(var_233_float);
	var_250_float = var_233_float / (int)24;
	var_234_int = (int)1 + var_250_float;
	var_251_int = 0; var_252_object = Obj();
	var_215_object = var_252_object;
	func_97(var_251_int, var_252_object);
	var_251_int = var_235_int;
	var_253_int = 0; var_254_object = Obj(); var_255_int = 0;
	var_215_object = var_254_object;
	func_154((int)0);
	var_256_int = var_255_int;
	func_36(var_253_int, var_254_object, var_255_int);
	var_253_int = var_236_int;
	var_300_bool = var_216_bool;
	if(var_300_bool != 0) {
		var_301_float = 0; var_302_object = Obj(); var_303_int = 0; var_304_int = 0;
		var_232_object = var_302_object;
		var_234_int = var_303_int;
		func_154((int)0);
		var_305_int = var_304_int;
		func_102(var_301_float, var_302_object, var_303_int, var_304_int);
		var_301_float = var_237_float;
	} else {
					var_360_float = 0; var_361_object = Obj(); var_362_int = 0; var_363_int = 0;
					var_232_object = var_361_object;
					var_234_int = var_362_int;
					func_154((int)0);
					var_364_int = var_363_int;
					func_128(var_360_float, var_361_object, var_362_int, var_363_int);
					var_360_float = var_237_float;
	}
	var_236_int = var_236_int * var_237_float;
	HasInvItemProperty(var_239_bool, var_235_int, "Description");
	var_323_bool = var_239_bool;
	if(var_323_bool != 0) {
		GetInvItemProperty(var_240_int, var_235_int, "Description");
		GetStringByID(var_238_string, var_240_int);
	} else {
				var_238_string = "Error: Item doesnt have description (FIXME!)";

	}
	var_325_string = "
";
	var_238_string = var_238_string + var_325_string;
	GetStringByID(var_241_string, (int)200005);
	var_328_int = var_241_string + ": ";
	var_329_int = var_328_int + var_236_int;
	var_238_string = var_238_string + var_329_int;
	GetTextHeightInWidth(var_242_int, "default", (int)218, var_238_string);
	var_242_int = var_242_int + (int)266;
	GetScreenSize(var_243_int, var_244_int);
	var_333_int = var_243_int - var_213_int;
	var_335_bool = var_333_int > (int)250;
	if(var_335_bool != 0) {
		var_213_int = var_245_int;
	} else {
			var_245_int = var_213_int - (int)250;

	}
	var_336_bool = var_214_int > var_242_int;
	if(var_336_bool != 0) {
		var_246_int = var_214_int - var_242_int;
	} else {
		var_214_int = var_246_int;

	}
	ScreenToClient(var_245_int, var_246_int);
	var_337_int = 0; var_338_int = 0; var_339_int = 0; var_340_int = 0;
	var_245_int = var_337_int;
	var_246_int = var_338_int;
	var_242_int = var_340_int;
	func_224(var_337_int, var_338_int, (int)250, var_340_int);
	var_341_int = 0; var_342_int = 0; var_343_object = Obj();
	var_341_int = var_245_int + (int)16;
	var_342_int = var_246_int + (int)16;
	var_215_object = var_343_object;
	func_251(var_341_int, var_342_int, var_343_object);
	var_348_int = var_245_int + (int)16;
	var_350_int = var_246_int + (int)16;
	var_352_int = var_350_int + (int)218;
	var_354_int = var_352_int + (int)16;
	PrintInWidth(var_242_int, "default", var_348_int, var_354_int, (int)218, var_238_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452);
	return 30;
	
}
EMIT "Stack[-15] = 0";


func_297(var_20_int, var_21_int, var_22_object)
{
	var_23_int = 0; var_24_string = ""; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0;
	var_41_bool = var_22_object == 0; //@nz
	if(var_41_bool != 0) {
		return 18;
	}
	var_42_int = 0; var_43_object = Obj();
	var_22_object = var_43_object;
	func_97(var_42_int, var_43_object);
	var_42_int = var_32_int;
	HasInvItemProperty(var_34_bool, var_32_int, "Description");
	var_47_bool = var_34_bool;
	if(var_47_bool != 0) {
		GetInvItemProperty(var_35_int, var_32_int, "Description");
		GetStringByID(var_33_string, var_35_int);
	} else {
				var_33_string = "Error: Item doesnt have description (FIXME!)";
	}
	GetTextHeightInWidth(var_36_int, "default", (int)218, var_33_string);
	GetScreenSize(var_37_int, var_38_int);
	var_36_int = var_36_int + (int)266;
	var_52_int = var_37_int - var_20_int;
	var_54_bool = var_52_int > (int)250;
	if(var_54_bool != 0) {
		var_20_int = var_39_int;
	} else {
			var_39_int = var_20_int - (int)250;

	}
	var_55_bool = var_21_int > var_36_int;
	if(var_55_bool != 0) {
		var_40_int = var_21_int - var_36_int;
	} else {
		var_21_int = var_40_int;

	}
	ScreenToClient(var_39_int, var_40_int);
	var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0;
	var_39_int = var_56_int;
	var_40_int = var_57_int;
	var_36_int = var_59_int;
	func_224(var_56_int, var_57_int, (int)250, var_59_int);
	var_75_int = 0; var_76_int = 0; var_77_object = Obj();
	var_75_int = var_39_int + (int)16;
	var_76_int = var_40_int + (int)16;
	var_22_object = var_77_object;
	func_251(var_75_int, var_76_int, var_77_object);
	var_111_int = var_39_int + (int)16;
	var_113_int = var_40_int + (int)16;
	var_115_int = var_113_int + (int)218;
	var_117_int = var_115_int + (int)16;
	PrintInWidth(var_36_int, "default", var_111_int, var_117_int, (int)218, var_33_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452);
	return 18;
	
}


func_170(var_13_int, var_14_string, var_15_object, var_16_int, var_17_int)
{
	var_19_bool = var_13_int == (int)1;
	if(var_19_bool != 0) {
		var_20_int = 0; var_21_int = 0; var_22_object = Obj();
		var_16_int = var_20_int;
		var_17_int = var_21_int;
		var_15_object = var_22_object;
		func_297(var_20_int, var_21_int, var_22_object);
	} else {
		var_124_bool = var_13_int == (int)2;
		if(var_124_bool != 0) {
			var_125_int = 0; var_126_int = 0; var_127_object = Obj();
			var_16_int = var_125_int;
			var_17_int = var_126_int;
			var_15_object = var_127_object;
			func_372(var_125_int, var_126_int, var_127_object);
			goto Label_223;
		}
		var_212_bool = var_13_int == (int)3;
		if(var_212_bool != 0) {
			var_213_int = 0; var_214_int = 0; var_215_object = Obj(); var_216_bool = 0;
			var_16_int = var_213_int;
			var_17_int = var_214_int;
			var_15_object = var_215_object;
			func_487(var_213_int, var_214_int, var_215_object, (bool)1);
			goto Label_223;
		}
		var_382_bool = var_13_int == (int)4;
		if(var_382_bool != 0) {
			var_383_int = 0; var_384_int = 0; var_385_object = Obj(); var_386_bool = 0;
			var_16_int = var_383_int;
			var_17_int = var_384_int;
			var_15_object = var_385_object;
			func_487(var_383_int, var_384_int, var_385_object, (bool)0);
			goto Label_223;
		}
		var_388_bool = var_13_int == (int)5;
		if(var_388_bool == 0) goto Label_223;
		var_389_int = 0; var_390_int = 0; var_391_string = ""; var_392_object = Obj();
		var_16_int = var_389_int;
		var_17_int = var_390_int;
		var_14_string = var_391_string;
		var_15_object = var_392_object;
		func_613(var_390_int, var_391_string, var_392_object);
	}
Label_223:
	return 0;
	
}


func_372(var_125_int, var_126_int, var_127_object)
{
	var_128_int = 0; var_129_object = Obj(); var_130_string = ""; var_131_string = ""; var_132_int = 0; var_133_int = 0; var_134_float = 0; var_135_int = 0; var_136_float = 0; var_137_float = 0; var_138_int = 0; var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_object = Obj(); var_147_string = ""; var_148_string = ""; var_149_int = 0; var_150_int = 0; var_151_float = 0; var_152_int = 0; var_153_float = 0; var_154_float = 0; var_155_int = 0; var_156_int = 0; var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_int = 0; var_161_int = 0;
	var_162_bool = var_127_object == 0; //@nz
	if(var_162_bool != 0) {
		return 34;
	}
	@@var_127_object:size(var_145_int);
	var_163_bool = var_145_int == 0; //@nz
	if(var_163_bool != 0) {
		return 34;
	}
Label_381:
	var_164_int = var_145_int;
	if(var_164_int != 0) {
		var_150_int = 0;
		var_151_float = 0;
		var_152_int = 0;

	Label_386:
		var_165_bool = var_152_int < var_145_int;
		if(var_165_bool != 0) {
			@@var_127_object:get(var_146_object, var_152_int);
			@@var_146_object:GetTime(var_153_float);
			var_166_bool = var_153_float > var_151_float;
			if(var_166_bool != 0) {
				var_153_float = var_151_float;
				var_152_int = var_150_int;
			}
			var_152_int = var_152_int + (int)1;
			goto Label_386;
		}
		@@var_127_object:get(var_146_object, var_150_int);
		@@var_146_object:GetTextID(var_149_int);
		GetStringByID(var_148_string, var_149_int);
		@@var_146_object:GetTime(var_154_float);
		var_154_float = (int)0;
		var_168_int = var_155_int;
		var_170_int = var_154_float - var_155_int;
		var_156_int = (int)60 * var_170_int;
		var_172_bool = var_156_int < (int)10;
		if(var_172_bool != 0) {
			var_174_int = var_155_int % (int)24;
			var_176_int = var_174_int + ":0";
			var_177_int = var_176_int + var_156_int;
			var_179_int = var_177_int + " ";
			var_147_string = var_147_string + var_179_int;
		} else {
			var_184_int = var_155_int % (int)24;
			var_186_int = var_184_int + ":";
			var_187_int = var_186_int + var_156_int;
			var_189_int = var_187_int + " ";
			var_147_string = var_147_string + var_189_int;
	}
		GetTextHeightInWidth(var_157_int, "default", (int)218, var_147_string);
		var_157_int = var_157_int + (int)32;
		GetScreenSize(var_158_int, var_159_int);
		var_193_int = var_158_int - var_125_int;
		var_195_bool = var_193_int > (int)250;
		if(var_195_bool != 0) {
			var_125_int = var_160_int;
		} else {
				var_160_int = var_125_int - (int)250;
		}
		var_196_bool = var_126_int > var_157_int;
		if(var_196_bool != 0) {
			var_161_int = var_126_int - var_157_int;
		} else {
			var_126_int = var_161_int;

		}
		ScreenToClient(var_160_int, var_161_int);
		var_197_int = 0; var_198_int = 0; var_199_int = 0; var_200_int = 0;
		var_160_int = var_197_int;
		var_161_int = var_198_int;
		var_157_int = var_200_int;
		func_224(var_197_int, var_198_int, (int)250, var_200_int);
		var_203_int = var_160_int + (int)16;
		var_205_int = var_161_int + (int)16;
		PrintInWidth(var_157_int, "default", var_203_int, var_205_int, (int)218, var_147_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452);
		return 34;
	}
	var_147_string = var_147_string + var_148_string;
	@@var_127_object:remove(var_150_int);
	var_145_int = var_145_int + (int)-1;
	var_181_int = var_145_int;
	if(var_181_int != 0) {
		var_182_string = "

	";
		var_147_string = var_147_string + var_182_string;
	}
	goto Label_381;
	
}
EMIT "Stack[-16] = 0";


func_154(var_256_int)
{
	var_257_object = Obj(); var_258_bool = 0; var_259_int = 0; var_260_object = Obj(); var_261_bool = 0; var_262_int = 0;
	GetContainer(var_260_object);
	@@var_260_object:HasProperty("barter", var_261_bool);
	var_264_bool = var_261_bool == 0; //@nz
	if(var_264_bool != 0) {
		var_256_int = 0;
		return 6;
	}
	@@var_260_object:GetProperty("barter", var_262_int);
	var_262_int = var_256_int;
	return 6;
}
EMIT "Stack[-3] = 0";


func_251(var_75_int, var_76_int, var_77_object)
{
	var_80_int = 0; var_81_string = ""; var_82_int = 0; var_83_string = "";
	var_84_bool = var_77_object == 0; //@nz
	if(var_84_bool != 0) {
		return 4;
	}
	var_85_int = 0; var_86_object = Obj();
	var_77_object = var_86_object;
	func_97(var_85_int, var_86_object);
	var_85_int = var_82_int;
	GetInvItemSprite2(var_83_string, var_82_int);
	LoadImage(var_83_string);
	StretchBlit(var_83_string, var_75_int, var_76_int, (int)218, (int)218);
	StretchBlit("border", var_75_int, var_76_int, (int)218, (int)1);
	var_94_int = var_76_int + (int)218;
	var_96_int = var_94_int - (int)1;
	StretchBlit("border", var_75_int, var_96_int, (int)218, (int)1);
	StretchBlit("border", var_75_int, var_76_int, (int)1, (int)218);
	var_104_int = var_75_int + (int)218;
	var_106_int = var_104_int - (int)1;
	StretchBlit("border", var_106_int, var_76_int, (int)1, (int)218);
	return 4;
}


