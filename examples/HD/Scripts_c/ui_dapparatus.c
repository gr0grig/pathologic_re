// @IMPORTS: FindActor/2,DestroyWindow/0,GetWindowData/1,Trace/1,CreateWindow/3,HasInvItemProperty/3,GetInvItemProperty/3,SendMessage/3,SendMessage/2,CreateInvItem/1,CreateStringVector/1,SetCursor/1,ShowCursor/0,CaptureKeyboard/0,SetOwnerDraw/1,SetNeedUpdate/1,ProcessEvents/0,GetVariable/2,GetInvItemName/2
// @STRINGS: W:player|W:null apparatus|W:inventory_base.xml|W:combine|W:input_organ|W:input_grass|W:output|A:GetItem|A:AddItem|A:RemoveItem|W:grass_combination|W:Microscope|A:GetItemCount|A:RemoveAllItems|W:burah_serum|A:SetItemName|W:im_inc|A:GetProperty|W:hl_inc|W:organ_combination|W:DiseaseRate|A:SetProperty|W:HealthIncrease|A:add|W:default|W:button_weapon|W:button_clothes|W:button_medcine|W:button_food|W:button_other|W:button_detector|W:button_anticeptic|W:noinv_drop|W:money|A:GetItemAmount|W:slot0|W:slot|A:GetItemID
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,object,object,object,object params=0
// @EVENT_100: op=0x2df vars=int
// @EVENT_102: op=0x2e3 vars=int
// @EVENT_101: op=0x2e9 vars=int
// @EVENT_1: op=0x38c vars=float
// @EVENT_200: op=0x398 vars=int,string,object
// @PE: 0x1d,0x3d,0x47,0x55,0x59,0xb0,0x2df,0x2e3,0x2e9,0x38c,0x416,0x436,0x4cb

task_0_event_100(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int)
{
	DestroyWindow();
	return 0;
}


task_0_event_102(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int)
{
	var_6_int = 0;
	var_5_int = var_6_int;
	func_872(var_6_int);
	return 0;
}


task_0_event_101(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int)
{
	var_7_bool = var_5_int == (int)266;
	if(var_7_bool != 0) {
		var_9_bool = var_0_int == (int)0;
		if(var_9_bool != 0) {
			var_10_int = 0;
			func_1046(var_5_int, (int)1);
		} else {
			var_77_bool = var_0_int == (int)1;
			if(var_77_bool != 0) {
				var_78_int = 0;
				func_1046(var_5_int, (int)2);
				goto Label_788;
			}
			var_80_bool = var_0_int == (int)2;
			if(var_80_bool != 0) {
				var_81_int = 0;
				func_1046(var_5_int, (int)3);
				goto Label_788;
			}
			var_83_bool = var_0_int == (int)3;
			if(var_83_bool != 0) {
				var_84_int = 0;
				func_1046(var_5_int, (int)4);
				goto Label_788;
			}
			var_86_bool = var_0_int == (int)4;
			if(var_86_bool == 0) goto Label_788;
			var_87_int = 0;
			func_1046(var_5_int, (int)0);
	}
		var_89_bool = var_5_int == (int)265;
		if(var_89_bool == 0) goto Label_831;
		var_91_bool = var_0_int == (int)0;
		if(var_91_bool != 0) {
			var_92_int = 0;
			func_1046(var_5_int, (int)4);
			goto Label_831;
		}
		var_94_bool = var_0_int == (int)1;
		if(var_94_bool != 0) {
			var_95_int = 0;
			func_1046(var_5_int, (int)0);
			goto Label_831;
		}
		var_97_bool = var_0_int == (int)2;
		if(var_97_bool != 0) {
			var_98_int = 0;
			func_1046(var_5_int, (int)1);
			goto Label_831;
		}
		var_100_bool = var_0_int == (int)3;
		if(var_100_bool != 0) {
			var_101_int = 0;
			func_1046(var_5_int, (int)2);
			goto Label_831;
		}
		var_103_bool = var_0_int == (int)4;
		if(var_103_bool == 0) goto Label_831;
		var_104_int = 0;
		func_1046(var_5_int, (int)3);
	}
Label_788:
	goto Label_831;
	
Label_831:
	var_45_int = 0;
	var_5_int = var_45_int;
	func_836(var_45_int);
	return 0;
	
}


task_0_event_1(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_float)
{
	var_6_int = 0;
	var_6_int = var_0_int;
	func_1140(var_6_int);
	func_1071();
	func_61();
	return 0;
}


task_0_event_200(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int, var_6_string, var_7_object)
{
	var_8_bool = 0; var_9_int = 0; var_10_int = 0; var_11_object = Obj(); var_12_int = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_int = 0; var_19_object = Obj();
	var_21_bool = var_5_int < (int)0;
	if(var_21_bool != 0) {
		var_22_bool = 0; var_23_int = 0; var_24_string = ""; var_25_object = Obj();
		var_5_int = var_23_int;
		var_6_string = var_24_string;
		var_7_object = var_25_object;
		func_29(var_24_string, var_25_object);
		var_22_bool = (bool)0;
		return 12;
	}
	var_314_bool = var_6_string == "button_weapon";
	if(var_314_bool != 0) {
		var_315_int = 0;
		func_1046(var_19_object, (int)0);
		var_14_bool = 1;
	} else {
		var_323_bool = var_6_string == "button_clothes";
		if(var_323_bool != 0) {
			var_324_int = 0;
			func_1046(var_19_object, (int)1);
			var_14_bool = 1;
			goto Label_1034;
		}
		var_326_bool = var_6_string == "button_medcine";
		if(var_326_bool != 0) {
			var_327_int = 0;
			func_1046(var_19_object, (int)2);
			var_14_bool = 1;
			goto Label_1034;
		}
		var_329_bool = var_6_string == "button_food";
		if(var_329_bool != 0) {
			var_330_int = 0;
			func_1046(var_19_object, (int)3);
			var_14_bool = 1;
			goto Label_1034;
		}
		var_332_bool = var_6_string == "button_other";
		if(var_332_bool != 0) {
			var_333_int = 0;
			func_1046(var_19_object, (int)4);
			var_14_bool = 1;
			goto Label_1034;
		}
		var_335_bool = var_6_string == "button_detector";
		if(var_335_bool != 0) {
			goto Label_1034;
		}
		var_337_bool = var_6_string == "button_anticeptic";
		if(var_337_bool != 0) {
			goto Label_1034;
		}
		var_339_bool = var_5_int != (int)0;
		if(var_339_bool != 0) {
			GetVariable("noinv_drop", var_15_int);
			var_341_int = var_15_int;
			if(var_341_int != 0) {
				return 12;
			}
		}

	Label_996:
		var_343_bool = (int)0 < (int)12;
		if(var_343_bool == 0) goto Label_1034;
		var_344_string = ""; var_345_int = 0;
		var_16_int = var_345_int;
		func_1227(var_344_string, var_345_int);
		var_356_bool = var_6_string == var_344_string;
		if(var_356_bool != 0) {
			func_27(var_19_object, Obj());
			var_357_object = var_17_object;
			@@var_17_object:GetItemCount(var_18_int, var_0_int);
			var_358_bool = var_18_int > var_16_int;
			if(var_358_bool != 0) {
				@@var_17_object:GetItem(var_19_object, var_16_int, var_0_int);
				var_359_bool = 0; var_360_object = Obj();
				var_19_object = var_360_object;
				func_71(var_359_bool, var_360_object);
				var_365_bool = var_359_bool == 0; //@nz
				if(var_365_bool != 0) {
					var_366_bool = 0; var_367_int = 0; var_368_bool = 0;
					var_16_int = var_367_int;
					var_368_bool = var_5_int == (int)0;
					func_89(var_366_bool, var_367_int, var_368_bool);
					var_366_bool = var_14_bool;
				}
				var_19_object = 0;
			}
			goto Label_1034;
		EMIT "Stack[-3] = 0";
		}
		var_16_int = var_16_int + (int)1;
		goto Label_996;
	}
Label_1034:
	var_316_bool = var_14_bool == 0; //@nz
	if(var_316_bool != 0) {
		var_317_bool = 0; var_318_int = 0; var_319_string = ""; var_320_object = Obj();
		var_5_int = var_318_int;
		var_6_string = var_319_string;
		var_7_object = var_320_object;
		func_29(var_319_string, var_320_object);
		var_317_bool = var_14_bool;
	}
	var_321_bool = var_14_bool;
	if(var_321_bool != 0) {
	}
	return 12;
	
}


main(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object)
{
	FindActor(var_3_object, "player");
	var_6_bool = var_3_object == 0; //@nz
	if(var_6_bool != 0) {
		DestroyWindow();
		return 0;
	}
	GetWindowData(var_4_object);
	var_7_bool = var_4_object == 0; //@nz
	if(var_7_bool != 0) {
		Trace("null apparatus");
		DestroyWindow();
		return 0;
	}
	CreateWindow("inventory_base.xml", (bool)0, var_1_object);
	var_11_int = 0;
	func_653(var_4_object, (int)4);
	return 0;
}


func_130(var_0_int, var_3_object, var_4_object, var_377_bool, var_378_object, var_379_int)
{
	var_380_object = Obj(); var_381_bool = 0; var_382_object = Obj(); var_383_bool = 0;
	func_213(var_383_bool, Obj());
	var_384_object = var_382_object;
	var_385_object = var_382_object;
	if(var_385_object != 0) {
		var_377_bool = 0;
		return 4;
	}
	@@@var_4_object:AddItem(var_383_bool, var_378_object, (int)0, (int)1);
	var_388_bool = var_383_bool == 0; //@nz
	if(var_388_bool != 0) {
		var_377_bool = 0;
		return 4;
	}
	@@@var_3_object:RemoveItem(var_379_int, (int)1, var_0_int);
	var_377_bool = 1;
	return 4;
}
EMIT "Stack[-2] = 0";


func_261(var_4_object, var_63_object)
{
	var_64_int = 0; var_65_int = 0; var_66_int = 0; var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0; var_70_int = 0; var_71_int = 0; var_72_object = Obj(); var_73_object = Obj();
	@@@var_4_object:GetItemCount(var_69_int);
	var_70_int = 0;
	var_71_int = 0;
	
Label_266:
	var_74_bool = var_71_int < var_69_int;
	if(var_74_bool != 0) {
		@@@var_4_object:GetItem(var_72_object, var_71_int);
		var_75_bool = 0;
		var_75_bool = 0;
		var_76_bool = 0; var_77_object = Obj();
		var_72_object = var_77_object;
		func_176(var_76_bool, var_77_object);
		var_89_bool = var_76_bool == 0; //@nz
		if(var_89_bool != 0) {
			var_90_bool = 0; var_91_object = Obj();
			var_72_object = var_91_object;
			func_184(var_90_bool, var_91_object);
			var_99_bool = var_90_bool == 0; //@nz
			if(var_99_bool != 0) {
				var_75_bool = 1;
			}
		}
		if(var_75_bool != 0) {
			var_72_object = var_63_object;
			var_72_object = 0;
			var_71_int = var_71_int + (int)1;
			goto Label_266;
		}
		return 10;
	}
	var_73_object = 0;
	var_73_object = var_63_object;
	return 10;
}
EMIT "Stack[-1] = 0";


func_391(var_3_object, var_4_object, var_259_bool)
{
	var_260_int = 0; var_261_bool = 0; var_262_int = 0; var_263_bool = 0;
	func_296(var_263_bool, (int)0);
	var_264_int = var_262_int;
	var_276_bool = var_262_int == (int)-1;
	if(var_276_bool != 0) {
		var_259_bool = 0;
		return 4;
	}
	var_277_object = Obj();
	func_213(var_263_bool, var_277_object);
	@@@var_3_object:AddItem(var_263_bool, var_277_object, (int)2, (int)1);
	var_280_bool = var_263_bool == 0; //@nz
	if(var_280_bool != 0) {
		var_259_bool = 0;
		return 4;
	}
	@@@var_4_object:RemoveItem(var_262_int, (int)1);
	var_282_int = 0;
	func_1046(var_263_bool, (int)2);
	var_259_bool = 1;
	return 4;
}


func_653(var_0_int, var_11_int)
{
	var_12_int = 0; var_13_object = Obj(); var_14_int = 0; var_15_object = Obj();
	var_16_int = 0;
	var_11_int = var_16_int;
	func_1046(var_15_object, var_16_int);
	var_51_int = 0;
	var_51_int = (int)-1;
	func_1140(var_51_int);
	func_1071();
	var_14_int = 0;
	
Label_667:
	var_139_bool = var_14_int < (int)12;
	if(var_139_bool != 0) {
		CreateStringVector(var_15_object);
		var_140_string = ""; var_141_int = 0;
		var_143_int = var_14_int + (int)12;
		var_145_int = var_143_int - (int)1;
		var_141_int = var_145_int % (int)12;
		func_1227(var_140_string, var_141_int);
		@@var_15_object:add(var_140_string);
		var_147_string = ""; var_148_int = 0;
		var_150_int = var_14_int + (int)12;
		var_152_int = var_150_int + (int)1;
		var_148_int = var_152_int % (int)12;
		func_1227(var_147_string, var_148_int);
		@@var_15_object:add(var_147_string);
		var_155_string = ""; var_156_int = 0;
		var_14_int = var_156_int;
		func_1227(var_155_string, var_156_int);
		SendMessage((int)-1, var_155_string, var_15_object);
		var_15_object = 0;
		var_14_int = var_14_int + (int)1;
		goto Label_667;
	}
	func_727();
	SetCursor("default");
	ShowCursor();
	CaptureKeyboard();
	SetOwnerDraw((bool)0);
	SetNeedUpdate((bool)1);
	func_88();
	ProcessEvents();
	return 4;
}


func_1046(var_0_int, var_16_int)
{
	var_18_bool = var_16_int == (int)-1;
	if(var_18_bool != 0) {
		return 0;
	}
	var_19_bool = var_0_int == var_16_int;
	if(var_19_bool != 0) {
		return 0;
	}
	var_0_int = var_16_int;
	var_20_int = 0;
	var_20_int = var_0_int;
	func_1078(var_20_int);
	return 0;
}


func_153(var_0_int, var_3_object, var_4_object, var_392_bool, var_393_object, var_394_int)
{
	var_395_object = Obj(); var_396_bool = 0; var_397_object = Obj(); var_398_bool = 0;
	func_237(var_398_bool, Obj());
	var_399_object = var_397_object;
	var_400_object = var_397_object;
	if(var_400_object != 0) {
		var_392_bool = 0;
		return 4;
	}
	@@@var_4_object:AddItem(var_398_bool, var_393_object, (int)0, (int)1);
	var_403_bool = var_398_bool == 0; //@nz
	if(var_403_bool != 0) {
		var_392_bool = 0;
		return 4;
	}
	@@@var_3_object:RemoveItem(var_394_int, (int)1, var_0_int);
	var_392_bool = 1;
	return 4;
}
EMIT "Stack[-2] = 0";


func_27(var_3_object, var_66_object)
{
	var_66_object = var_3_object;
	return 0;
}


func_29(var_22_bool, var_24_string)
{
	var_27_bool = var_24_string == "combine";
	if(var_27_bool != 0) {
		func_506(var_25_object, (bool)0);
		var_22_bool = 1;
		return 0;
	EMIT "GOTO 0x3b";
	}
	var_198_bool = var_24_string == "input_organ";
	if(var_198_bool != 0) {
		func_361(var_24_string, var_25_object, (bool)0);
	} else {
		var_258_bool = var_24_string == "input_grass";
		if(var_258_bool != 0) {
			func_391(var_24_string, var_25_object, (bool)0);
			goto Label_59;
		}
		var_284_bool = var_24_string == "output";
		if(var_284_bool == 0) goto Label_59;
		func_421(var_24_string, var_25_object, (bool)0);
	}
Label_59:
	var_22_bool = 0;
	return 0;
	
}


func_1060(var_130_int)
{
	var_131_object = Obj(); var_132_int = 0; var_133_object = Obj(); var_134_int = 0;
	func_27(var_134_int, Obj());
	var_135_object = var_133_object;
	@@var_133_object:GetProperty("money", var_134_int);
	var_134_int = var_130_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_421(var_3_object, var_4_object, var_285_bool)
{
	var_286_object = Obj(); var_287_int = 0; var_288_bool = 0; var_289_object = Obj(); var_290_int = 0; var_291_bool = 0;
	func_261(var_291_bool, Obj());
	var_292_object = var_289_object;
	var_293_bool = var_289_object == 0; //@nz
	if(var_293_bool != 0) {
		var_285_bool = 0;
		return 6;
	}
	func_338(var_291_bool, (int)0);
	var_294_int = var_290_int;
	@@@var_3_object:AddItem(var_291_bool, var_289_object, (int)2, (int)1);
	var_310_bool = var_291_bool == 0; //@nz
	if(var_310_bool != 0) {
		var_285_bool = 0;
		return 6;
	}
	@@@var_4_object:RemoveItem(var_290_int, (int)1);
	var_312_int = 0;
	func_1046(var_291_bool, (int)2);
	var_285_bool = 1;
	return 6;
}
EMIT "Stack[-3] = 0";


func_296(var_4_object, var_264_int)
{
	var_265_int = 0; var_266_int = 0; var_267_object = Obj(); var_268_int = 0; var_269_int = 0; var_270_object = Obj();
	@@@var_4_object:GetItemCount(var_268_int);
	var_269_int = 0;
	
Label_300:
	var_271_bool = var_269_int < var_268_int;
	if(var_271_bool != 0) {
		@@@var_4_object:GetItem(var_270_object, var_269_int);
		var_272_bool = 0; var_273_object = Obj();
		var_270_object = var_273_object;
		func_176(var_272_bool, var_273_object);
		if(var_272_bool != 0) {
			var_269_int = var_264_int;
			var_270_object = 0;
			var_269_int = var_269_int + (int)1;
			goto Label_300;
		}
		return 6;
	}
	var_264_int = -1;
	return 6;
}


func_1071()
{
	var_130_int = 0;
	func_1060(var_130_int);
	SendMessage(var_130_int, "money");
	return 0;
}


func_176(var_75_bool, var_76_object)
{
	var_78_string = ""; var_79_object = Obj();
	var_76_object = var_79_object;
	func_1248(var_78_string, var_79_object);
	var_75_bool = "grass_combination" == var_78_string;
	return 0;
}


func_1078(var_20_int)
{
	var_22_bool = var_20_int != (int)0;
	if(var_22_bool != 0) {
		SendMessage((int)0, "button_weapon");
	} else {
						SendMessage((int)1, "button_weapon");
	}
	var_26_bool = var_20_int != (int)1;
	if(var_26_bool != 0) {
		SendMessage((int)0, "button_clothes");
	} else {
					SendMessage((int)1, "button_clothes");

	}
	var_30_bool = var_20_int != (int)2;
	if(var_30_bool != 0) {
		SendMessage((int)0, "button_medcine");
	} else {
				SendMessage((int)1, "button_medcine");

	}
	var_34_bool = var_20_int != (int)3;
	if(var_34_bool != 0) {
		SendMessage((int)0, "button_food");
	} else {
			SendMessage((int)1, "button_food");

	}
	var_38_bool = var_20_int != (int)4;
	if(var_38_bool != 0) {
		SendMessage((int)0, "button_other");
	} else {
		SendMessage((int)1, "button_other");

	}
	return 0;
	
}


func_184(var_88_bool, var_89_object)
{
	var_90_int = 0; var_91_bool = 0; var_92_int = 0; var_93_bool = 0;
	var_94_int = 0; var_95_object = Obj();
	var_89_object = var_95_object;
	func_1243(var_94_int, var_95_object);
	var_94_int = var_92_int;
	HasInvItemProperty(var_93_bool, var_92_int, "Microscope");
	var_93_bool = var_88_bool;
	return 4;
}


func_317(var_4_object, var_204_int)
{
	var_205_int = 0; var_206_int = 0; var_207_object = Obj(); var_208_int = 0; var_209_int = 0; var_210_object = Obj();
	@@@var_4_object:GetItemCount(var_208_int);
	var_209_int = 0;
	
Label_321:
	var_211_bool = var_209_int < var_208_int;
	if(var_211_bool != 0) {
		@@@var_4_object:GetItem(var_210_object, var_209_int);
		var_212_bool = 0; var_213_object = Obj();
		var_210_object = var_213_object;
		func_184(var_212_bool, var_213_object);
		if(var_212_bool != 0) {
			var_209_int = var_204_int;
			var_210_object = 0;
			var_209_int = var_209_int + (int)1;
			goto Label_321;
		}
		return 6;
	}
	var_204_int = -1;
	return 6;
}


func_61()
{
	func_452();
	func_470();
	func_488();
	return 0;
}


func_195(var_134_int, var_135_object)
{
	var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_int = 0; var_140_bool = 0; var_141_int = 0;
	var_142_int = 0; var_143_object = Obj();
	var_135_object = var_143_object;
	func_1243(var_142_int, var_143_object);
	var_142_int = var_139_int;
	HasInvItemProperty(var_140_bool, var_139_int, "Microscope");
	var_145_bool = var_140_bool == 0; //@nz
	if(var_145_bool != 0) {
		var_134_int = 0;
		return 6;
	}
	GetInvItemProperty(var_141_int, var_139_int, "Microscope");
	var_141_int = var_134_int;
	return 6;
}


func_452()
{
	var_93_object = Obj(); var_94_object = Obj();
	func_213(var_94_object, Obj());
	var_95_object = var_94_object;
	var_110_object = var_94_object;
	if(var_110_object != 0) {
		SendMessage((int)0, "input_grass", var_94_object);
	} else {
		SendMessage((int)32768, "input_grass");
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_836(var_45_int)
{
	var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0;
	var_51_bool = var_45_int == (int)269;
	if(var_51_bool != 0) {

	Label_841:
		var_53_bool = (int)0 < (int)12;
		if(var_53_bool != 0) {
			var_55_string = ""; var_56_int = 0;
			var_48_int = var_56_int;
			func_1227(var_55_string, var_56_int);
			SendMessage((int)-2, var_55_string);
			var_48_int = var_48_int + (int)1;
			goto Label_841;
		}
	}
	var_69_bool = var_45_int == (int)270;
	if(var_69_bool != 0) {

	Label_858:
		var_71_bool = (int)0 < (int)12;
		if(var_71_bool != 0) {
			var_73_string = ""; var_74_int = 0;
			var_49_int = var_74_int;
			func_1227(var_73_string, var_74_int);
			SendMessage((int)-3, var_73_string);
			var_49_int = var_49_int + (int)1;
			goto Label_858;
		}
	}
	return 4;
}


func_71(var_73_bool, var_74_object)
{
	var_75_bool = 0; var_76_object = Obj();
	var_74_object = var_76_object;
	func_176(var_75_bool, var_76_object);
	if(var_75_bool != 0) {
		var_73_bool = 0;
		return 0;
	}
	var_88_bool = 0; var_89_object = Obj();
	var_74_object = var_89_object;
	func_184(var_88_bool, var_89_object);
	var_73_bool = !var_88_bool;
	return 0;
}


func_1227(var_100_string, var_101_int)
{
	var_103_int = var_101_int + (int)1;
	var_105_bool = var_103_int < (int)10;
	if(var_105_bool != 0) {
		var_108_int = var_101_int + (int)1;
		var_100_string = "slot0" + var_108_int;
		return 0;
	}
	var_111_int = var_101_int + (int)1;
	var_100_string = "slot" + var_111_int;
	return 0;
}


func_338(var_4_object, var_294_int)
{
	var_295_int = 0; var_296_int = 0; var_297_int = 0; var_298_object = Obj(); var_299_int = 0; var_300_int = 0; var_301_int = 0; var_302_object = Obj();
	@@@var_4_object:GetItemCount(var_299_int);
	var_300_int = 0;
	var_301_int = 0;
	
Label_343:
	var_303_bool = var_301_int < var_299_int;
	if(var_303_bool != 0) {
		@@@var_4_object:GetItem(var_302_object, var_301_int);
		var_304_bool = 0; var_305_object = Obj();
		var_302_object = var_305_object;
		func_176(var_304_bool, var_305_object);
		var_306_bool = var_304_bool == 0; //@nz
		if(var_306_bool != 0) {
			var_301_int = var_294_int;
			var_302_object = 0;
			var_301_int = var_301_int + (int)1;
			goto Label_343;
		}
		return 8;
	}
	var_294_int = -1;
	return 8;
}


func_213(var_4_object, var_101_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_object = Obj(); var_106_object = Obj(); var_107_int = 0; var_108_int = 0; var_109_int = 0; var_110_object = Obj(); var_111_object = Obj();
	@@@var_4_object:GetItemCount(var_107_int);
	var_108_int = 0;
	var_109_int = 0;
	
Label_218:
	var_112_bool = var_109_int < var_107_int;
	if(var_112_bool != 0) {
		@@@var_4_object:GetItem(var_110_object, var_109_int);
		var_113_bool = 0; var_114_object = Obj();
		var_110_object = var_114_object;
		func_176(var_113_bool, var_114_object);
		if(var_113_bool != 0) {
			var_110_object = var_101_object;
			var_110_object = 0;
			var_109_int = var_109_int + (int)1;
			goto Label_218;
		}
		return 10;
	}
	var_111_object = 0;
	var_111_object = var_101_object;
	return 10;
}
EMIT "Stack[-1] = 0";


func_470()
{
	var_115_object = Obj(); var_116_object = Obj();
	func_237(var_116_object, Obj());
	var_117_object = var_116_object;
	var_132_object = var_116_object;
	if(var_132_object != 0) {
		SendMessage((int)0, "input_organ", var_116_object);
	} else {
		SendMessage((int)32768, "input_organ");
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_727()
{
	var_159_string = ""; var_160_int = 0;
	func_1227(var_159_string, (int)0);
	SendMessage((int)-6, var_159_string);
	return 0;
}


func_88()
{
	return 0;
}


func_89(var_366_bool, var_367_int, var_368_bool)
{
	var_370_bool = var_368_bool;
	if(var_370_bool != 0) {
		var_371_bool = 0; var_372_int = 0;
		var_367_int = var_372_int;
		func_100(var_367_int, var_368_bool, var_371_bool, var_372_int);
		var_371_bool = var_366_bool;
		return 0;
	}
	var_366_bool = 0;
	return 0;
}


func_85(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_1243(var_84_int, var_85_object)
{
	var_86_int = 0; var_87_int = 0;
	@@var_85_object:GetItemID(var_87_int);
	var_87_int = var_84_int;
	return 2;
}


func_1248(var_78_string, var_79_object)
{
	var_80_int = 0; var_81_string = ""; var_82_int = 0; var_83_string = "";
	var_84_int = 0; var_85_object = Obj();
	var_79_object = var_85_object;
	func_1243(var_84_int, var_85_object);
	var_84_int = var_82_int;
	GetInvItemName(var_83_string, var_82_int);
	var_83_string = var_78_string;
	return 4;
}


func_100(var_0_int, var_3_object, var_371_bool, var_372_int)
{
	var_373_object = Obj(); var_374_object = Obj();
	@@@var_3_object:GetItem(var_374_object, var_372_int, var_0_int);
	var_375_bool = 0; var_376_object = Obj();
	var_374_object = var_376_object;
	func_176(var_375_bool, var_376_object);
	if(var_375_bool != 0) {
		var_377_bool = 0; var_378_object = Obj(); var_379_int = 0;
		var_374_object = var_378_object;
		var_372_int = var_379_int;
		func_130(var_372_int, var_373_object, var_374_object, var_377_bool, var_378_object, var_379_int);
		var_377_bool = var_371_bool;
		return 2;
	}
	var_390_bool = 0; var_391_object = Obj();
	var_374_object = var_391_object;
	func_184(var_390_bool, var_391_object);
	if(var_390_bool != 0) {
		var_392_bool = 0; var_393_object = Obj(); var_394_int = 0;
		var_374_object = var_393_object;
		var_372_int = var_394_int;
		func_153(var_372_int, var_373_object, var_374_object, var_392_bool, var_393_object, var_394_int);
		var_392_bool = var_371_bool;
		return 2;
	}
	var_371_bool = 0;
	return 2;
}
EMIT "Stack[-1] = 0";


func_488()
{
	var_137_object = Obj(); var_138_object = Obj();
	func_261(var_138_object, Obj());
	var_139_object = var_138_object;
	var_159_object = var_138_object;
	if(var_159_object != 0) {
		SendMessage((int)0, "output", var_138_object);
	} else {
		SendMessage((int)32768, "output");
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_361(var_3_object, var_4_object, var_199_bool)
{
	var_200_int = 0; var_201_bool = 0; var_202_int = 0; var_203_bool = 0;
	func_317(var_203_bool, (int)0);
	var_204_int = var_202_int;
	var_216_bool = var_202_int == (int)-1;
	if(var_216_bool != 0) {
		var_199_bool = 0;
		return 4;
	}
	var_217_object = Obj();
	func_237(var_203_bool, var_217_object);
	@@@var_3_object:AddItem(var_203_bool, var_217_object, (int)4, (int)1);
	var_220_bool = var_203_bool == 0; //@nz
	if(var_220_bool != 0) {
		var_199_bool = 0;
		return 4;
	}
	@@@var_4_object:RemoveItem(var_202_int, (int)1);
	var_222_int = 0;
	func_1046(var_203_bool, (int)4);
	var_199_bool = 1;
	return 4;
}


func_872(var_6_int)
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0;
	var_12_bool = var_6_int == (int)273;
	if(var_12_bool != 0) {

	Label_877:
		var_14_bool = (int)0 < (int)12;
		if(var_14_bool != 0) {
			var_16_string = ""; var_17_int = 0;
			var_9_int = var_17_int;
			func_1227(var_16_string, var_17_int);
			SendMessage((int)-2, var_16_string);
			var_9_int = var_9_int + (int)1;
			goto Label_877;
		}
	}
	var_30_bool = var_6_int == (int)271;
	if(var_30_bool != 0) {

	Label_894:
		var_32_bool = (int)0 < (int)12;
		if(var_32_bool != 0) {
			var_34_string = ""; var_35_int = 0;
			var_10_int = var_35_int;
			func_1227(var_34_string, var_35_int);
			SendMessage((int)-3, var_34_string);
			var_10_int = var_10_int + (int)1;
			goto Label_894;
		}
	}
	return 4;
}


func_237(var_4_object, var_116_object)
{
	var_117_int = 0; var_118_int = 0; var_119_int = 0; var_120_object = Obj(); var_121_object = Obj(); var_122_int = 0; var_123_int = 0; var_124_int = 0; var_125_object = Obj(); var_126_object = Obj();
	@@@var_4_object:GetItemCount(var_122_int);
	var_123_int = 0;
	var_124_int = 0;
	
Label_242:
	var_127_bool = var_124_int < var_122_int;
	if(var_127_bool != 0) {
		@@@var_4_object:GetItem(var_125_object, var_124_int);
		var_128_bool = 0; var_129_object = Obj();
		var_125_object = var_129_object;
		func_184(var_128_bool, var_129_object);
		if(var_128_bool != 0) {
			var_125_object = var_116_object;
			var_125_object = 0;
			var_124_int = var_124_int + (int)1;
			goto Label_242;
		}
		return 10;
	}
	var_126_object = 0;
	var_126_object = var_116_object;
	return 10;
}
EMIT "Stack[-1] = 0";


func_1140(var_51_int)
{
	var_52_object = Obj(); var_53_int = 0; var_54_int = 0; var_55_object = Obj(); var_56_int = 0; var_57_bool = 0; var_58_bool = 0; var_59_object = Obj(); var_60_int = 0; var_61_int = 0; var_62_object = Obj(); var_63_int = 0; var_64_bool = 0; var_65_bool = 0;
	func_27(var_65_bool, Obj());
	var_66_object = var_59_object;
	@@var_59_object:GetItemCount(var_60_int, var_51_int);
	var_61_int = 0;
	
Label_1148:
	var_68_bool = var_61_int < (int)12;
	if(var_68_bool != 0) {
		var_69_bool = var_61_int < var_60_int;
		if(var_69_bool != 0) {
			@@var_59_object:GetItem(var_62_object, var_61_int, var_51_int);
			@@var_59_object:GetItemAmount(var_63_int, var_61_int, var_51_int);
			var_70_bool = 0; var_71_int = 0; var_72_int = 0;
			var_61_int = var_71_int;
			var_51_int = var_72_int;
			func_85(var_72_int);
			var_70_bool = var_64_bool;
			var_73_bool = 0; var_74_object = Obj();
			var_62_object = var_74_object;
			func_71(var_73_bool, var_74_object);
			var_73_bool = var_65_bool;
			var_97_bool = var_64_bool;
			if(var_97_bool != 0) {
				var_98_bool = var_65_bool;
				if(var_98_bool != 0) {
					var_100_string = ""; var_101_int = 0;
					var_61_int = var_101_int;
					func_1227(var_100_string, var_101_int);
					SendMessage((int)0, var_100_string, var_62_object);
				} else {
					var_118_string = ""; var_119_int = 0;
					var_61_int = var_119_int;
					func_1227(var_118_string, var_119_int);
					SendMessage((int)16384, var_118_string, var_62_object);
			}
				var_120_bool = var_65_bool;
				if(var_120_bool != 0) {
					var_122_string = ""; var_123_int = 0;
					var_61_int = var_123_int;
					func_1227(var_122_string, var_123_int);
					SendMessage((int)131072, var_122_string, var_62_object);
					goto Label_1205;
				}
				var_125_string = ""; var_126_int = 0;
				var_61_int = var_126_int;
				func_1227(var_125_string, var_126_int);
				SendMessage((int)0, var_125_string, var_62_object);
		}
			var_128_string = ""; var_129_int = 0;
			var_61_int = var_129_int;
			func_1227(var_128_string, var_129_int);
			SendMessage((int)32768, var_128_string);
	}
		goto Label_1205;
		var_113_int = var_63_int | (int)65536;
		var_114_string = ""; var_115_int = 0;
		var_61_int = var_115_int;
		func_1227(var_114_string, var_115_int);
		SendMessage(var_113_int, var_114_string);
		var_62_object = 0;
		goto Label_1222;
		var_61_int = var_61_int + (int)1;
		goto Label_1148;
	}
	return 14;
	
}
EMIT "Stack[-7] = 0";


func_506(var_4_object, var_28_bool)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_bool = 0; var_33_float = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_object = Obj(); var_45_bool = 0; var_46_object = Obj(); var_47_object = Obj(); var_48_object = Obj(); var_49_bool = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; var_55_float = 0; var_56_float = 0; var_57_float = 0; var_58_float = 0; var_59_float = 0; var_60_float = 0; var_61_object = Obj(); var_62_bool = 0;
	var_63_object = Obj();
	func_261(var_62_bool, var_63_object);
	if(var_63_object != 0) {
		var_28_bool = 0;
		return 34;
	}
	func_213(var_62_bool, Obj());
	var_101_object = var_46_object;
	func_237(var_62_bool, Obj());
	var_116_object = var_47_object;
	var_131_bool = 0;
	var_131_bool = 1;
	var_132_bool = var_46_object == 0; //@nz
	if(var_132_bool != 1) {
		var_133_bool = var_47_object == 0; //@nz
		if(var_133_bool != 1) {
			var_131_bool = 0;
		}
	}
	if(var_131_bool != 0) {
		var_28_bool = 0;
		return 34;
	}
	var_134_int = 0; var_135_object = Obj();
	var_47_object = var_135_object;
	func_195(var_134_int, var_135_object);
	var_148_bool = var_134_int == (int)5;
	if(var_148_bool != 0) {
		@@@var_4_object:RemoveAllItems();
		CreateInvItem(var_48_object);
		@@var_48_object:SetItemName("burah_serum");
		@@@var_4_object:AddItem(var_49_bool, var_48_object, (int)0, (int)1);
		var_28_bool = 1;
		return 34;
	EMIT "Stack[-15] = 0";
	}
	@@var_46_object:GetProperty(var_50_float, "im_inc");
	@@var_46_object:GetProperty(var_51_float, "hl_inc");
	var_154_int = 0; var_155_object = Obj();
	var_47_object = var_155_object;
	func_195(var_154_int, var_155_object);
	var_157_bool = var_154_int == (int)1;
	if(var_157_bool != 0) {
		var_52_float = 1;
		var_51_float = var_54_float;
	}
	var_158_int = 0; var_159_object = Obj();
	var_47_object = var_159_object;
	func_195(var_158_int, var_159_object);
	var_161_bool = var_158_int == (int)2;
	if(var_161_bool != 0) {
		var_164_int = (float)1.0 - var_50_float;
		var_57_float = (float)1.0 * var_164_int;
		var_57_float = var_52_float;
		var_51_float = var_54_float;
	}
	var_165_int = 0; var_166_object = Obj();
	var_47_object = var_166_object;
	func_195(var_165_int, var_166_object);
	var_168_bool = var_165_int == (int)3;
	if(var_168_bool != 0) {
		var_171_int = (float)1.0 - var_50_float;
		var_58_float = (float)0.800000011920929 * var_171_int;
		var_58_float = var_52_float;
		var_51_float = var_54_float;
	}
	var_172_int = 0; var_173_object = Obj();
	var_47_object = var_173_object;
	func_195(var_172_int, var_173_object);
	var_175_bool = var_172_int == (int)4;
	if(var_175_bool != 0) {
		var_178_int = (float)1.0 - var_50_float;
		var_59_float = (float)0.5 * var_178_int;
		var_59_float = var_52_float;
		var_51_float = var_54_float;
	}
	var_179_int = 0; var_180_object = Obj();
	var_47_object = var_180_object;
	func_195(var_179_int, var_180_object);
	var_182_bool = var_179_int == (int)6;
	if(var_182_bool != 0) {
		var_185_int = (float)1.0 - var_50_float;
		var_60_float = (float)0.30000001192092896 * var_185_int;
		var_60_float = var_52_float;
		var_51_float = var_54_float;
	}
	var_187_bool = var_52_float > (int)1;
	if(var_187_bool != 0) {
		var_52_float = 1;
	}
	var_189_bool = var_52_float < (float)0.029999999329447746;
	if(var_189_bool != 0) {
		var_52_float = 0.029999999329447746;
	}
	var_191_bool = var_54_float < (int)-1;
	if(var_191_bool != 0) {
		var_54_float = -1;
	}
	@@@var_4_object:RemoveAllItems();
	CreateInvItem(var_61_object);
	@@var_61_object:SetItemName("organ_combination");
	@@var_61_object:SetProperty("DiseaseRate", var_52_float);
	@@var_61_object:SetProperty("HealthIncrease", var_54_float);
	@@@var_4_object:AddItem(var_62_bool, var_61_object, (int)0, (int)1);
	var_28_bool = 1;
	return 34;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-16] = 0";
EMIT "Stack[-17] = 0";


