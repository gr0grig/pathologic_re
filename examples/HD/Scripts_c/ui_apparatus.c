// @IMPORTS: FindActor/2,DestroyWindow/0,GetWindowData/1,Trace/1,CreateFloatVector/1,CreateWindow/3,HasInvItemProperty/3,GetInvItemProperty/3,SendMessage/3,SendMessage/2,CreateInvItem/1,CreateStringVector/1,SetCursor/1,ShowCursor/0,CaptureKeyboard/0,SetOwnerDraw/1,SetNeedUpdate/1,ProcessEvents/0,GetVariable/2
// @STRINGS: W:player|W:null apparatus|A:add|W:inventory_base.xml|W:combine|W:input0|W:output|A:GetItemCount|A:GetItemAmount|A:GetItem|A:GetItemID|A:AddItem|A:RemoveItem|W:Grass|A:get|W:grass_combination|A:SetItemName|W:im_inc|A:SetProperty|W:hl_inc|A:RemoveAllItems|W:default|W:button_weapon|W:button_clothes|W:button_medcine|W:button_food|W:button_other|W:button_detector|W:button_anticeptic|W:noinv_drop|W:money|A:GetProperty|W:slot0|W:slot
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,object,object,object,object,object,object,object,object params=0
// @EVENT_100: op=0x29e vars=int
// @EVENT_102: op=0x2a2 vars=int
// @EVENT_101: op=0x2a8 vars=int
// @EVENT_1: op=0x34b vars=float
// @EVENT_200: op=0x357 vars=int,string,object
// @PE: 0x88,0x8f,0x96,0x9a,0x29e,0x2a2,0x2a8,0x34b,0x3d5,0x3f5,0x48a

task_0_event_100(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_int)
{
	DestroyWindow();
	return 0;
}


task_0_event_102(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_int)
{
	var_10_int = 0;
	var_9_int = var_10_int;
	func_807(var_10_int);
	return 0;
}


task_0_event_101(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_int)
{
	var_11_bool = var_9_int == (int)266;
	if(var_11_bool != 0) {
		var_13_bool = var_0_int == (int)0;
		if(var_13_bool != 0) {
			var_14_int = 0;
			func_981(var_9_int, (int)1);
		} else {
			var_81_bool = var_0_int == (int)1;
			if(var_81_bool != 0) {
				var_82_int = 0;
				func_981(var_9_int, (int)2);
				goto Label_723;
			}
			var_84_bool = var_0_int == (int)2;
			if(var_84_bool != 0) {
				var_85_int = 0;
				func_981(var_9_int, (int)3);
				goto Label_723;
			}
			var_87_bool = var_0_int == (int)3;
			if(var_87_bool != 0) {
				var_88_int = 0;
				func_981(var_9_int, (int)4);
				goto Label_723;
			}
			var_90_bool = var_0_int == (int)4;
			if(var_90_bool == 0) goto Label_723;
			var_91_int = 0;
			func_981(var_9_int, (int)0);
	}
		var_93_bool = var_9_int == (int)265;
		if(var_93_bool == 0) goto Label_766;
		var_95_bool = var_0_int == (int)0;
		if(var_95_bool != 0) {
			var_96_int = 0;
			func_981(var_9_int, (int)4);
			goto Label_766;
		}
		var_98_bool = var_0_int == (int)1;
		if(var_98_bool != 0) {
			var_99_int = 0;
			func_981(var_9_int, (int)0);
			goto Label_766;
		}
		var_101_bool = var_0_int == (int)2;
		if(var_101_bool != 0) {
			var_102_int = 0;
			func_981(var_9_int, (int)1);
			goto Label_766;
		}
		var_104_bool = var_0_int == (int)3;
		if(var_104_bool != 0) {
			var_105_int = 0;
			func_981(var_9_int, (int)2);
			goto Label_766;
		}
		var_107_bool = var_0_int == (int)4;
		if(var_107_bool == 0) goto Label_766;
		var_108_int = 0;
		func_981(var_9_int, (int)3);
	}
Label_723:
	goto Label_766;
	
Label_766:
	var_49_int = 0;
	var_9_int = var_49_int;
	func_771(var_49_int);
	return 0;
	
}


task_0_event_1(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_float)
{
	var_10_int = 0;
	var_10_int = var_0_int;
	func_1075(var_10_int);
	func_1006();
	func_136();
	return 0;
}


task_0_event_200(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_int, var_10_string, var_11_object)
{
	var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_object = Obj(); var_16_int = 0; var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_int = 0; var_21_object = Obj(); var_22_int = 0; var_23_object = Obj();
	var_25_bool = var_9_int < (int)0;
	if(var_25_bool != 0) {
		var_26_bool = 0; var_27_int = 0; var_28_string = ""; var_29_object = Obj();
		var_9_int = var_27_int;
		var_10_string = var_28_string;
		var_11_object = var_29_object;
		func_97(var_28_string, var_29_object);
		var_26_bool = (bool)0;
		return 12;
	}
	var_262_bool = var_10_string == "button_weapon";
	if(var_262_bool != 0) {
		var_263_int = 0;
		func_981(var_23_object, (int)0);
		var_18_bool = 1;
	} else {
		var_271_bool = var_10_string == "button_clothes";
		if(var_271_bool != 0) {
			var_272_int = 0;
			func_981(var_23_object, (int)1);
			var_18_bool = 1;
			goto Label_969;
		}
		var_274_bool = var_10_string == "button_medcine";
		if(var_274_bool != 0) {
			var_275_int = 0;
			func_981(var_23_object, (int)2);
			var_18_bool = 1;
			goto Label_969;
		}
		var_277_bool = var_10_string == "button_food";
		if(var_277_bool != 0) {
			var_278_int = 0;
			func_981(var_23_object, (int)3);
			var_18_bool = 1;
			goto Label_969;
		}
		var_280_bool = var_10_string == "button_other";
		if(var_280_bool != 0) {
			var_281_int = 0;
			func_981(var_23_object, (int)4);
			var_18_bool = 1;
			goto Label_969;
		}
		var_283_bool = var_10_string == "button_detector";
		if(var_283_bool != 0) {
			goto Label_969;
		}
		var_285_bool = var_10_string == "button_anticeptic";
		if(var_285_bool != 0) {
			goto Label_969;
		}
		var_287_bool = var_9_int != (int)0;
		if(var_287_bool != 0) {
			GetVariable("noinv_drop", var_19_int);
			var_289_int = var_19_int;
			if(var_289_int != 0) {
				return 12;
			}
		}

	Label_931:
		var_291_bool = (int)0 < (int)12;
		if(var_291_bool == 0) goto Label_969;
		var_292_string = ""; var_293_int = 0;
		var_20_int = var_293_int;
		func_1162(var_292_string, var_293_int);
		var_304_bool = var_10_string == var_292_string;
		if(var_304_bool != 0) {
			func_95(var_23_object, Obj());
			var_305_object = var_21_object;
			@@var_21_object:GetItemCount(var_22_int, var_0_int);
			var_306_bool = var_22_int > var_20_int;
			if(var_306_bool != 0) {
				@@var_21_object:GetItem(var_23_object, var_20_int, var_0_int);
				var_307_bool = 0; var_308_object = Obj();
				var_23_object = var_308_object;
				func_143(var_307_bool, var_308_object);
				var_311_bool = var_307_bool == 0; //@nz
				if(var_311_bool != 0) {
					var_312_bool = 0; var_313_int = 0; var_314_bool = 0;
					var_20_int = var_313_int;
					var_314_bool = var_9_int == (int)0;
					func_154(var_312_bool, var_313_int, var_314_bool);
					var_312_bool = var_18_bool;
				}
				var_23_object = 0;
			}
			goto Label_969;
		EMIT "Stack[-3] = 0";
		}
		var_20_int = var_20_int + (int)1;
		goto Label_931;
	}
Label_969:
	var_264_bool = var_18_bool == 0; //@nz
	if(var_264_bool != 0) {
		var_265_bool = 0; var_266_int = 0; var_267_string = ""; var_268_object = Obj();
		var_9_int = var_266_int;
		var_10_string = var_267_string;
		var_11_object = var_268_object;
		func_97(var_267_string, var_268_object);
		var_265_bool = var_18_bool;
	}
	var_269_bool = var_18_bool;
	if(var_269_bool != 0) {
	}
	return 12;
	
}


main(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object)
{
	FindActor(var_3_object, "player");
	var_10_bool = var_3_object == 0; //@nz
	if(var_10_bool != 0) {
		DestroyWindow();
		return 0;
	}
	GetWindowData(var_4_object);
	var_11_bool = var_4_object == 0; //@nz
	if(var_11_bool != 0) {
		Trace("null apparatus");
		DestroyWindow();
		return 0;
	}
	CreateFloatVector(var_6_object);
	CreateFloatVector(var_5_object);
	CreateFloatVector(var_7_object);
	CreateFloatVector(var_8_object);
	@@@var_6_object:add((float)0.30000001192092896);
	@@@var_5_object:add((float)0.4000000059604645);
	@@@var_8_object:add((int)1);
	@@@var_7_object:add((int)1);
	@@@var_6_object:add((float)-0.30000001192092896);
	@@@var_5_object:add((float)0.4000000059604645);
	@@@var_8_object:add((int)1);
	@@@var_7_object:add((int)1);
	@@@var_6_object:add((float)1.0);
	@@@var_5_object:add((float)-1.0);
	@@@var_8_object:add((int)1);
	@@@var_7_object:add((int)1);
	@@@var_6_object:add((int)0);
	@@@var_5_object:add((int)0);
	@@@var_8_object:add((float)2.0);
	@@@var_7_object:add((int)1);
	@@@var_6_object:add((int)0);
	@@@var_5_object:add((int)0);
	@@@var_8_object:add((int)1);
	@@@var_7_object:add((float)0.5);
	CreateWindow("inventory_base.xml", (bool)0, var_1_object);
	var_35_int = 0;
	func_588(var_8_object, (int)4);
	return 0;
}


func_771(var_49_int)
{
	var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0;
	var_55_bool = var_49_int == (int)269;
	if(var_55_bool != 0) {

	Label_776:
		var_57_bool = (int)0 < (int)12;
		if(var_57_bool != 0) {
			var_59_string = ""; var_60_int = 0;
			var_52_int = var_60_int;
			func_1162(var_59_string, var_60_int);
			SendMessage((int)-2, var_59_string);
			var_52_int = var_52_int + (int)1;
			goto Label_776;
		}
	}
	var_73_bool = var_49_int == (int)270;
	if(var_73_bool != 0) {

	Label_793:
		var_75_bool = (int)0 < (int)12;
		if(var_75_bool != 0) {
			var_77_string = ""; var_78_int = 0;
			var_53_int = var_78_int;
			func_1162(var_77_string, var_78_int);
			SendMessage((int)-3, var_77_string);
			var_53_int = var_53_int + (int)1;
			goto Label_793;
		}
	}
	return 4;
}


func_136()
{
	func_434();
	func_470();
	return 0;
}


func_265(var_4_object, var_82_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_object = Obj(); var_87_object = Obj(); var_88_int = 0; var_89_int = 0; var_90_int = 0; var_91_object = Obj(); var_92_object = Obj();
	@@@var_4_object:GetItemCount(var_88_int);
	var_89_int = 0;
	var_90_int = 0;
	
Label_270:
	var_93_bool = var_90_int < var_88_int;
	if(var_93_bool != 0) {
		@@@var_4_object:GetItem(var_91_object, var_90_int);
		var_94_bool = 0; var_95_object = Obj();
		var_91_object = var_95_object;
		func_290(var_94_bool, var_95_object);
		var_96_bool = var_94_bool == 0; //@nz
		if(var_96_bool != 0) {
			var_91_object = var_82_object;
			var_91_object = 0;
			var_90_int = var_90_int + (int)1;
			goto Label_270;
		}
		return 10;
	}
	var_92_object = 0;
	var_92_object = var_82_object;
	return 10;
}
EMIT "Stack[-1] = 0";


func_1162(var_113_string, var_114_int)
{
	var_116_int = var_114_int + (int)1;
	var_118_bool = var_116_int < (int)10;
	if(var_118_bool != 0) {
		var_121_int = var_114_int + (int)1;
		var_113_string = "slot0" + var_121_int;
		return 0;
	}
	var_124_int = var_114_int + (int)1;
	var_113_string = "slot" + var_124_int;
	return 0;
}


func_143(var_97_bool, var_98_object)
{
	var_99_bool = 0; var_100_object = Obj();
	var_98_object = var_100_object;
	func_290(var_99_bool, var_100_object);
	var_97_bool = !var_99_bool;
	return 0;
}


func_403(var_3_object, var_4_object, var_233_bool)
{
	var_234_object = Obj(); var_235_int = 0; var_236_bool = 0; var_237_object = Obj(); var_238_int = 0; var_239_bool = 0;
	func_265(var_239_bool, Obj());
	var_240_object = var_237_object;
	var_241_bool = var_237_object == 0; //@nz
	if(var_241_bool != 0) {
		var_233_bool = 0;
		return 6;
	}
	func_348(var_239_bool, (int)0);
	var_242_int = var_238_int;
	@@@var_3_object:AddItem(var_239_bool, var_237_object, (int)2, (int)1);
	var_258_bool = var_239_bool == 0; //@nz
	if(var_258_bool != 0) {
		var_233_bool = 0;
		return 6;
	}
	@@@var_4_object:RemoveItem(var_238_int, (int)1);
	var_260_int = 0;
	func_981(var_239_bool, (int)2);
	var_233_bool = 1;
	return 6;
}
EMIT "Stack[-3] = 0";


func_662()
{
	var_172_string = ""; var_173_int = 0;
	func_1162(var_172_string, (int)0);
	SendMessage((int)-6, var_172_string);
	return 0;
}


func_150(var_94_bool)
{
	var_94_bool = 0;
	return 0;
}


func_153()
{
	return 0;
}


func_154(var_312_bool, var_313_int, var_314_bool)
{
	var_316_bool = var_314_bool;
	if(var_316_bool != 0) {
		var_317_bool = 0; var_318_int = 0;
		var_313_int = var_318_int;
		func_165(var_313_int, var_314_bool, var_317_bool, var_318_int);
		var_312_bool = 1;
		return 0;
	}
	var_312_bool = 0;
	return 0;
}


func_1178(var_105_int, var_106_object)
{
	var_107_int = 0; var_108_int = 0;
	@@var_106_object:GetItemID(var_108_int);
	var_108_int = var_105_int;
	return 2;
}


func_290(var_99_bool, var_100_object)
{
	var_101_int = 0; var_102_bool = 0; var_103_int = 0; var_104_bool = 0;
	var_105_int = 0; var_106_object = Obj();
	var_100_object = var_106_object;
	func_1178(var_105_int, var_106_object);
	var_105_int = var_103_int;
	HasInvItemProperty(var_104_bool, var_103_int, "Grass");
	var_104_bool = var_99_bool;
	return 4;
}


func_165(var_3_object, var_4_object, var_317_bool, var_318_int)
{
	var_319_object = Obj(); var_320_int = 0; var_321_int = 0; var_322_int = 0; var_323_bool = 0; var_324_object = Obj(); var_325_int = 0; var_326_int = 0; var_327_int = 0; var_328_bool = 0;
	var_329_bool = 0;
	func_203(var_329_bool);
	var_332_bool = var_329_bool == 0; //@nz
	if(var_332_bool != 0) {
		var_317_bool = 0;
		return 10;
	}
	@@@var_3_object:GetItemCount(var_325_int, (int)4);
	var_334_bool = var_325_int <= var_318_int;
	if(var_334_bool != 0) {
		var_317_bool = 0;
		return 10;
	}
	@@@var_3_object:GetItemAmount(var_326_int, var_318_int, (int)4);
	@@@var_3_object:GetItem(var_324_object, var_318_int, (int)4);
	@@var_324_object:GetItemID(var_327_int);
	@@@var_4_object:AddItem(var_328_bool, var_324_object, (int)0, (int)1);
	var_339_bool = var_328_bool == 0; //@nz
	if(var_339_bool != 0) {
		var_317_bool = 0;
		return 10;
	}
	@@@var_3_object:RemoveItem(var_318_int, (int)1, (int)4);
	var_317_bool = 1;
	return 10;
}
EMIT "Stack[-5] = 0";


func_807(var_10_int)
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0;
	var_16_bool = var_10_int == (int)273;
	if(var_16_bool != 0) {

	Label_812:
		var_18_bool = (int)0 < (int)12;
		if(var_18_bool != 0) {
			var_20_string = ""; var_21_int = 0;
			var_13_int = var_21_int;
			func_1162(var_20_string, var_21_int);
			SendMessage((int)-2, var_20_string);
			var_13_int = var_13_int + (int)1;
			goto Label_812;
		}
	}
	var_34_bool = var_10_int == (int)271;
	if(var_34_bool != 0) {

	Label_829:
		var_36_bool = (int)0 < (int)12;
		if(var_36_bool != 0) {
			var_38_string = ""; var_39_int = 0;
			var_14_int = var_39_int;
			func_1162(var_38_string, var_39_int);
			SendMessage((int)-3, var_38_string);
			var_14_int = var_14_int + (int)1;
			goto Label_829;
		}
	}
	return 4;
}


func_301(var_120_int, var_121_object)
{
	var_122_int = 0; var_123_bool = 0; var_124_int = 0; var_125_int = 0; var_126_bool = 0; var_127_int = 0;
	var_128_int = 0; var_129_object = Obj();
	var_121_object = var_129_object;
	func_1178(var_128_int, var_129_object);
	var_128_int = var_125_int;
	HasInvItemProperty(var_126_bool, var_125_int, "Grass");
	var_131_bool = var_126_bool == 0; //@nz
	if(var_131_bool != 0) {
		var_120_int = -1;
		return 6;
	}
	GetInvItemProperty(var_127_int, var_125_int, "Grass");
	var_127_int = var_120_int;
	return 6;
}


func_434()
{
	var_86_int = 0; var_87_int = 0; var_88_object = Obj(); var_89_int = 0; var_90_int = 0; var_91_object = Obj();
	func_209(var_91_object, (int)0);
	var_92_int = var_89_int;
	
Label_440:
	var_109_bool = (int)0 < (int)4;
	if(var_109_bool != 0) {
		var_110_object = Obj(); var_111_int = 0;
		var_90_int = var_111_int;
		func_234(var_91_object, var_110_object, var_111_int);
		var_110_object = var_91_object;
		var_130_object = var_91_object;
		if(var_130_object != 0) {
			var_134_int = var_90_int + (int)1;
			var_135_int = "input0" + var_134_int;
			SendMessage((int)0, var_135_int, var_91_object);
		} else {
			var_140_int = var_90_int + (int)1;
			var_141_int = "input0" + var_140_int;
			SendMessage((int)32768, var_141_int);
	}
		var_91_object = 0;
		var_90_int = var_90_int + (int)1;
		goto Label_440;
	}
	return 6;
	
}


func_1075(var_75_int)
{
	var_76_object = Obj(); var_77_int = 0; var_78_int = 0; var_79_object = Obj(); var_80_int = 0; var_81_bool = 0; var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; var_85_int = 0; var_86_object = Obj(); var_87_int = 0; var_88_bool = 0; var_89_bool = 0;
	func_95(var_89_bool, Obj());
	var_90_object = var_83_object;
	@@var_83_object:GetItemCount(var_84_int, var_75_int);
	var_85_int = 0;
	
Label_1083:
	var_92_bool = var_85_int < (int)12;
	if(var_92_bool != 0) {
		var_93_bool = var_85_int < var_84_int;
		if(var_93_bool != 0) {
			@@var_83_object:GetItem(var_86_object, var_85_int, var_75_int);
			@@var_83_object:GetItemAmount(var_87_int, var_85_int, var_75_int);
			var_94_bool = 0; var_95_int = 0; var_96_int = 0;
			var_85_int = var_95_int;
			var_75_int = var_96_int;
			func_150(var_96_int);
			var_94_bool = var_88_bool;
			var_97_bool = 0; var_98_object = Obj();
			var_86_object = var_98_object;
			func_143(var_97_bool, var_98_object);
			var_97_bool = var_89_bool;
			var_110_bool = var_88_bool;
			if(var_110_bool != 0) {
				var_111_bool = var_89_bool;
				if(var_111_bool != 0) {
					var_113_string = ""; var_114_int = 0;
					var_85_int = var_114_int;
					func_1162(var_113_string, var_114_int);
					SendMessage((int)0, var_113_string, var_86_object);
				} else {
					var_131_string = ""; var_132_int = 0;
					var_85_int = var_132_int;
					func_1162(var_131_string, var_132_int);
					SendMessage((int)16384, var_131_string, var_86_object);
			}
				var_133_bool = var_89_bool;
				if(var_133_bool != 0) {
					var_135_string = ""; var_136_int = 0;
					var_85_int = var_136_int;
					func_1162(var_135_string, var_136_int);
					SendMessage((int)131072, var_135_string, var_86_object);
					goto Label_1140;
				}
				var_138_string = ""; var_139_int = 0;
				var_85_int = var_139_int;
				func_1162(var_138_string, var_139_int);
				SendMessage((int)0, var_138_string, var_86_object);
		}
			var_141_string = ""; var_142_int = 0;
			var_85_int = var_142_int;
			func_1162(var_141_string, var_142_int);
			SendMessage((int)32768, var_141_string);
	}
		goto Label_1140;
		var_126_int = var_87_int | (int)65536;
		var_127_string = ""; var_128_int = 0;
		var_85_int = var_128_int;
		func_1162(var_127_string, var_128_int);
		SendMessage(var_126_int, var_127_string);
		var_86_object = 0;
		goto Label_1157;
		var_85_int = var_85_int + (int)1;
		goto Label_1083;
	}
	return 14;
	
}
EMIT "Stack[-7] = 0";


func_319(var_4_object, var_169_int, var_170_int)
{
	var_171_int = 0; var_172_int = 0; var_173_int = 0; var_174_object = Obj(); var_175_int = 0; var_176_int = 0; var_177_int = 0; var_178_int = 0; var_179_object = Obj(); var_180_int = 0;
	@@@var_4_object:GetItemCount(var_176_int);
	var_178_int = 0;
	
Label_324:
	var_181_bool = var_178_int < var_176_int;
	if(var_181_bool != 0) {
		@@@var_4_object:GetItem(var_179_object, var_178_int);
		var_182_bool = 0; var_183_object = Obj();
		var_179_object = var_183_object;
		func_290(var_182_bool, var_183_object);
		var_184_bool = var_182_bool == 0; //@nz
		if(var_184_bool != 0) {
		} else {
			@@@var_4_object:GetItemAmount(var_180_int, var_178_int);
			(int)0 = (int)0 + var_180_int;
			var_186_bool = var_177_int > var_170_int;
			if(var_186_bool != 0) {
				var_178_int = var_169_int;
				return 10;
			}
			var_179_object = 0;
	}
		var_169_int = -1;
		var_178_int = var_178_int + (int)1;
		goto Label_324;
	}
	return 10;
	
}


func_203(var_329_bool)
{
	var_330_int = 0;
	func_209(var_329_bool, var_330_int);
	var_329_bool = var_330_int < (int)4;
	return 0;
}


func_588(var_0_int, var_35_int)
{
	var_36_int = 0; var_37_object = Obj(); var_38_int = 0; var_39_object = Obj();
	var_40_int = 0;
	var_35_int = var_40_int;
	func_981(var_39_object, var_40_int);
	var_75_int = 0;
	var_75_int = (int)-1;
	func_1075(var_75_int);
	func_1006();
	var_38_int = 0;
	
Label_602:
	var_152_bool = var_38_int < (int)12;
	if(var_152_bool != 0) {
		CreateStringVector(var_39_object);
		var_153_string = ""; var_154_int = 0;
		var_156_int = var_38_int + (int)12;
		var_158_int = var_156_int - (int)1;
		var_154_int = var_158_int % (int)12;
		func_1162(var_153_string, var_154_int);
		@@var_39_object:add(var_153_string);
		var_160_string = ""; var_161_int = 0;
		var_163_int = var_38_int + (int)12;
		var_165_int = var_163_int + (int)1;
		var_161_int = var_165_int % (int)12;
		func_1162(var_160_string, var_161_int);
		@@var_39_object:add(var_160_string);
		var_168_string = ""; var_169_int = 0;
		var_38_int = var_169_int;
		func_1162(var_168_string, var_169_int);
		SendMessage((int)-1, var_168_string, var_39_object);
		var_39_object = 0;
		var_38_int = var_38_int + (int)1;
		goto Label_602;
	}
	func_662();
	SetCursor("default");
	ShowCursor();
	CaptureKeyboard();
	SetOwnerDraw((bool)0);
	SetNeedUpdate((bool)1);
	func_153();
	ProcessEvents();
	return 4;
}


func_209(var_4_object, var_55_int)
{
	var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_object = Obj(); var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_object = Obj(); var_65_int = 0;
	@@@var_4_object:GetItemCount(var_61_int);
	var_63_int = 0;
	
Label_214:
	var_66_bool = var_63_int < var_61_int;
	if(var_66_bool != 0) {
		@@@var_4_object:GetItem(var_64_object, var_63_int);
		var_67_bool = 0; var_68_object = Obj();
		var_64_object = var_68_object;
		func_290(var_67_bool, var_68_object);
		var_78_bool = var_67_bool == 0; //@nz
		if(var_78_bool != 0) {
		} else {
			@@@var_4_object:GetItemAmount(var_65_int, var_63_int);
			(int)0 = (int)0 + var_65_int;
			var_64_object = 0;
	}
		var_62_int = var_55_int;
		var_63_int = var_63_int + (int)1;
		goto Label_214;
	}
	return 10;
	
}


func_981(var_0_int, var_40_int)
{
	var_42_bool = var_40_int == (int)-1;
	if(var_42_bool != 0) {
		return 0;
	}
	var_43_bool = var_0_int == var_40_int;
	if(var_43_bool != 0) {
		return 0;
	}
	var_0_int = var_40_int;
	var_44_int = 0;
	var_44_int = var_0_int;
	func_1013(var_44_int);
	return 0;
}


func_470()
{
	var_142_object = Obj(); var_143_object = Obj();
	func_265(var_143_object, Obj());
	var_144_object = var_143_object;
	var_160_object = var_143_object;
	if(var_160_object != 0) {
		SendMessage((int)0, "output", var_143_object);
	} else {
		SendMessage((int)32768, "output");
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_348(var_4_object, var_242_int)
{
	var_243_int = 0; var_244_int = 0; var_245_int = 0; var_246_object = Obj(); var_247_int = 0; var_248_int = 0; var_249_int = 0; var_250_object = Obj();
	@@@var_4_object:GetItemCount(var_247_int);
	var_248_int = 0;
	var_249_int = 0;
	
Label_353:
	var_251_bool = var_249_int < var_247_int;
	if(var_251_bool != 0) {
		@@@var_4_object:GetItem(var_250_object, var_249_int);
		var_252_bool = 0; var_253_object = Obj();
		var_250_object = var_253_object;
		func_290(var_252_bool, var_253_object);
		var_254_bool = var_252_bool == 0; //@nz
		if(var_254_bool != 0) {
			var_249_int = var_242_int;
			var_250_object = 0;
			var_249_int = var_249_int + (int)1;
			goto Label_353;
		}
		return 8;
	}
	var_242_int = -1;
	return 8;
}


func_95(var_3_object, var_90_object)
{
	var_90_object = var_3_object;
	return 0;
}


func_97(var_26_bool, var_28_string)
{
	var_30_int = 0; var_31_int = 0;
	var_33_bool = var_28_string == "combine";
	if(var_33_bool != 0) {
		func_488(var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, (bool)0);
		var_26_bool = 1;
		return 2;
	}
	var_31_int = 0;
	
Label_107:
	var_155_bool = var_31_int < (int)4;
	if(var_155_bool != 0) {
		var_158_int = var_31_int + (int)1;
		var_159_int = "input0" + var_158_int;
		var_160_bool = var_28_string == var_159_int;
		if(var_160_bool != 0) {
			var_161_int = 0;
			func_209(var_31_int, var_161_int);
			var_162_bool = var_161_int > var_31_int;
			if(var_162_bool != 0) {
				var_163_bool = 0; var_164_int = 0;
				var_31_int = var_164_int;
				func_371(var_30_int, var_31_int, var_163_bool, var_164_int);
			}
		}
		var_31_int = var_31_int + (int)1;
		goto Label_107;
	}
	var_232_bool = var_28_string == "output";
	if(var_232_bool != 0) {
		func_403(var_30_int, var_31_int, (bool)0);
	}
	var_26_bool = 0;
	return 2;
}


func_995(var_143_int)
{
	var_144_object = Obj(); var_145_int = 0; var_146_object = Obj(); var_147_int = 0;
	func_95(var_147_int, Obj());
	var_148_object = var_146_object;
	@@var_146_object:GetProperty("money", var_147_int);
	var_147_int = var_143_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_488(var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_34_bool)
{
	var_35_float = 0; var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_int = 0; var_40_object = Obj(); var_41_int = 0; var_42_float = 0; var_43_object = Obj(); var_44_bool = 0; var_45_float = 0; var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_int = 0; var_50_object = Obj(); var_51_int = 0; var_52_float = 0; var_53_object = Obj(); var_54_bool = 0;
	var_55_int = 0;
	func_209(var_54_bool, var_55_int);
	var_81_bool = var_55_int == (int)0;
	if(var_81_bool != 0) {
		var_34_bool = 0;
		return 20;
	}
	var_82_object = Obj();
	func_265(var_54_bool, var_82_object);
	if(var_82_object != 0) {
		var_34_bool = 0;
		return 20;
	}
	
Label_508:
	var_98_int = 0;
	func_209(var_54_bool, var_98_int);
	var_99_bool = (int)0 < var_98_int;
	if(var_99_bool != 0) {
		var_100_object = Obj(); var_101_int = 0;
		var_49_int = var_101_int;
		func_234(var_54_bool, var_100_object, var_101_int);
		var_100_object = var_50_object;
		var_120_int = 0; var_121_object = Obj();
		var_50_object = var_121_object;
		func_301(var_120_int, var_121_object);
		var_120_int = var_51_int;
		@@@var_6_object:get(var_52_float, var_51_int);
		(float)0 = (float)0 + var_52_float;
		@@@var_5_object:get(var_52_float, var_51_int);
		(float)0 = (float)0 + var_52_float;
		@@@var_8_object:get(var_52_float, var_51_int);
		(float)1 = (float)1 * var_52_float;
		@@@var_7_object:get(var_52_float, var_51_int);
		(float)1 = (float)1 * var_52_float;
		var_50_object = 0;
		var_49_int = var_49_int + (int)1;
		goto Label_508;
	}
	var_45_float = var_45_float * var_47_float;
	var_46_float = var_46_float * var_48_float;
	var_135_bool = var_45_float > (int)0;
	if(var_135_bool != 0) {
	} else {
			var_45_float = -var_45_float;
	}
	var_137_bool = var_46_float > (int)0;
	if(var_137_bool != 0) {
	} else {
		var_46_float = -var_46_float;

	}
	var_45_float = var_45_float * (float)20.0;
	var_46_float = var_46_float * (float)15.0;
	var_141_bool = var_45_float > (int)100;
	if(var_141_bool != 0) {
		var_45_float = 100;
	}
	var_143_bool = var_46_float > (int)100;
	if(var_143_bool != 0) {
		var_46_float = 100;
	}
	CreateInvItem(var_53_object);
	@@var_53_object:SetItemName("grass_combination");
	var_147_float = var_45_float / (float)100.0;
	@@var_53_object:SetProperty("im_inc", var_147_float);
	var_150_float = var_46_float / (float)100.0;
	var_151_int = -var_150_float;
	@@var_53_object:SetProperty("hl_inc", var_151_int);
	@@@var_4_object:RemoveAllItems();
	@@@var_4_object:AddItem(var_54_bool, var_53_object, (int)0, (int)1);
	var_34_bool = 1;
	return 20;
	
}
EMIT "Stack[-2] = 0";


func_234(var_4_object, var_100_object, var_101_int)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_object = Obj(); var_106_int = 0; var_107_object = Obj(); var_108_int = 0; var_109_int = 0; var_110_int = 0; var_111_object = Obj(); var_112_int = 0; var_113_object = Obj();
	@@@var_4_object:GetItemCount(var_108_int);
	var_110_int = 0;
	
Label_239:
	var_114_bool = var_110_int < var_108_int;
	if(var_114_bool != 0) {
		@@@var_4_object:GetItem(var_111_object, var_110_int);
		var_115_bool = 0; var_116_object = Obj();
		var_111_object = var_116_object;
		func_290(var_115_bool, var_116_object);
		var_117_bool = var_115_bool == 0; //@nz
		if(var_117_bool != 0) {
		} else {
			@@@var_4_object:GetItemAmount(var_112_int, var_110_int);
			(int)0 = (int)0 + var_112_int;
			var_119_bool = var_109_int > var_101_int;
			if(var_119_bool != 0) {
				var_111_object = var_100_object;
				return 12;
			}
			var_111_object = 0;
	}
		var_113_object = 0;
		var_113_object = var_100_object;
		var_110_int = var_110_int + (int)1;
		goto Label_239;
	}
	return 12;
	
}
EMIT "Stack[-1] = 0";


func_1006()
{
	var_143_int = 0;
	func_995(var_143_int);
	SendMessage(var_143_int, "money");
	return 0;
}


func_371(var_3_object, var_4_object, var_163_bool, var_164_int)
{
	var_165_int = 0; var_166_bool = 0; var_167_int = 0; var_168_bool = 0;
	var_169_int = 0; var_170_int = 0;
	var_164_int = var_170_int;
	func_319(var_168_bool, var_169_int, var_170_int);
	var_169_int = var_167_int;
	var_188_bool = var_167_int == (int)-1;
	if(var_188_bool != 0) {
		var_163_bool = 0;
		return 4;
	}
	var_189_object = Obj(); var_190_int = 0;
	var_164_int = var_190_int;
	func_234(var_168_bool, var_189_object, var_190_int);
	@@@var_3_object:AddItem(var_168_bool, var_189_object, (int)4, (int)1);
	var_193_bool = var_168_bool == 0; //@nz
	if(var_193_bool != 0) {
		var_163_bool = 0;
		return 4;
	}
	@@@var_4_object:RemoveItem(var_167_int, (int)1);
	var_195_int = 0;
	func_981(var_168_bool, (int)4);
	var_163_bool = 1;
	return 4;
}


func_1013(var_44_int)
{
	var_46_bool = var_44_int != (int)0;
	if(var_46_bool != 0) {
		SendMessage((int)0, "button_weapon");
	} else {
						SendMessage((int)1, "button_weapon");
	}
	var_50_bool = var_44_int != (int)1;
	if(var_50_bool != 0) {
		SendMessage((int)0, "button_clothes");
	} else {
					SendMessage((int)1, "button_clothes");

	}
	var_54_bool = var_44_int != (int)2;
	if(var_54_bool != 0) {
		SendMessage((int)0, "button_medcine");
	} else {
				SendMessage((int)1, "button_medcine");

	}
	var_58_bool = var_44_int != (int)3;
	if(var_58_bool != 0) {
		SendMessage((int)0, "button_food");
	} else {
			SendMessage((int)1, "button_food");

	}
	var_62_bool = var_44_int != (int)4;
	if(var_62_bool != 0) {
		SendMessage((int)0, "button_other");
	} else {
		SendMessage((int)1, "button_other");

	}
	return 0;
	
}


