// @IMPORTS: CreateWindow/3,CreateStringVector/1,SendMessage/3,SendMessage/2,GetPlayerContainer/1,GetContainer/1,PlaySound/1,SetCursor/1,ShowCursor/0,CaptureKeyboard/0,SetOwnerDraw/1,SetNeedUpdate/1,ProcessEvents/0,DestroyWindow/0,GetVariable/2,GetInvItemProperty/3,HasInvItemProperty/3,SetPlayerHandsItem/1,GetInvItemByName/2
// @STRINGS: W:inventory_base.xml|W:$parent|A:add|A:GetItemCount|W:scrollbar|W:take_organ|A:GetItem|A:GetItemID|A:GetItemAmount|W:Organ|A:HasProperty|W:default|A:IsItemSelected|W:button_weapon|W:button_clothes|W:button_medcine|W:button_food|W:button_other|W:button_detector|W:button_anticeptic|W:noinv_drop|W:money|A:GetProperty|A:SetProperty|A:RemoveProperty|W:Category|A:RemoveItem|A:AddItem|W:Weapon|W:slot0|W:slot|W:cslot0|W:cslot|W:ccslot0|W:ccslot|W:Money
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,object,int,int params=0
// @EVENT_15: op=0x260 vars=int,int,float
// @EVENT_100: op=0x3ec vars=int
// @EVENT_102: op=0x3f0 vars=int
// @EVENT_101: op=0x3f6 vars=int
// @EVENT_1: op=0x4ad vars=float
// @EVENT_200: op=0x4b9 vars=int,string,object
// @PE: 0x260,0x273,0x277,0x29e,0x3ec,0x3f0,0x3f6,0x499,0x4ad,0x537,0x561,0x678,0x688,0x698

task_0_event_15(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int, var_5_int, var_6_float)
{
	var_8_bool = var_6_float > (int)0;
	if(var_8_bool != 0) {
	} else {
		var_60_bool = (float)1 < (int)0;
		if(var_60_bool == 0) goto Label_618;
		var_6_float = -1;
	}
Label_618:
	var_2_int = var_2_int + var_6_float;
	var_10_bool = var_2_int < (int)0;
	if(var_10_bool != 0) {
		var_2_int = 0;
	}
	func_683(var_6_float);
	return 0;
	
}


task_0_event_100(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int)
{
	DestroyWindow();
	return 0;
}


task_0_event_102(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int)
{
	var_5_int = 0;
	var_4_int = var_5_int;
	func_288(var_4_int, var_5_int);
	return 0;
}


task_0_event_101(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int)
{
	var_6_bool = var_4_int == (int)266;
	if(var_6_bool != 0) {
		var_8_bool = var_0_int == (int)0;
		if(var_8_bool != 0) {
			var_9_int = 0;
			func_1335(var_4_int, (int)1);
		} else {
			var_183_bool = var_0_int == (int)1;
			if(var_183_bool != 0) {
				var_184_int = 0;
				func_1335(var_4_int, (int)2);
				goto Label_1057;
			}
			var_186_bool = var_0_int == (int)2;
			if(var_186_bool != 0) {
				var_187_int = 0;
				func_1335(var_4_int, (int)3);
				goto Label_1057;
			}
			var_189_bool = var_0_int == (int)3;
			if(var_189_bool != 0) {
				var_190_int = 0;
				func_1335(var_4_int, (int)4);
				goto Label_1057;
			}
			var_192_bool = var_0_int == (int)4;
			if(var_192_bool == 0) goto Label_1057;
			var_193_int = 0;
			func_1335(var_4_int, (int)0);
	}
		var_195_bool = var_4_int == (int)265;
		if(var_195_bool == 0) goto Label_1100;
		var_197_bool = var_0_int == (int)0;
		if(var_197_bool != 0) {
			var_198_int = 0;
			func_1335(var_4_int, (int)4);
			goto Label_1100;
		}
		var_200_bool = var_0_int == (int)1;
		if(var_200_bool != 0) {
			var_201_int = 0;
			func_1335(var_4_int, (int)0);
			goto Label_1100;
		}
		var_203_bool = var_0_int == (int)2;
		if(var_203_bool != 0) {
			var_204_int = 0;
			func_1335(var_4_int, (int)1);
			goto Label_1100;
		}
		var_206_bool = var_0_int == (int)3;
		if(var_206_bool != 0) {
			var_207_int = 0;
			func_1335(var_4_int, (int)2);
			goto Label_1100;
		}
		var_209_bool = var_0_int == (int)4;
		if(var_209_bool == 0) goto Label_1100;
		var_210_int = 0;
		func_1335(var_4_int, (int)3);
	}
Label_1057:
	goto Label_1100;
	
Label_1100:
	var_44_int = 0;
	var_4_int = var_44_int;
	func_122(var_4_int, var_44_int);
	return 0;
	
}


task_0_event_1(var_0_int, var_1_object, var_2_int, var_3_int, var_4_float)
{
	var_5_int = 0;
	var_5_int = var_0_int;
	func_1569(var_5_int);
	func_1370();
	func_627();
	return 0;
}


task_0_event_200(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int, var_5_string, var_6_object)
{
	var_7_bool = 0; var_8_int = 0; var_9_int = 0; var_10_object = Obj(); var_11_int = 0; var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_object = Obj();
	var_20_bool = var_4_int < (int)0;
	if(var_20_bool != 0) {
		var_21_bool = 0; var_22_int = 0; var_23_string = ""; var_24_object = Obj();
		var_4_int = var_22_int;
		var_5_string = var_23_string;
		var_6_object = var_24_object;
		func_460(var_18_object, var_21_bool, var_22_int, var_23_string, var_24_object);
		var_21_bool = (bool)0;
		return 12;
	}
	var_369_bool = var_5_string == "button_weapon";
	if(var_369_bool != 0) {
		var_370_int = 0;
		func_1335(var_18_object, (int)0);
		var_13_bool = 1;
	} else {
		var_378_bool = var_5_string == "button_clothes";
		if(var_378_bool != 0) {
			var_379_int = 0;
			func_1335(var_18_object, (int)1);
			var_13_bool = 1;
			goto Label_1323;
		}
		var_381_bool = var_5_string == "button_medcine";
		if(var_381_bool != 0) {
			var_382_int = 0;
			func_1335(var_18_object, (int)2);
			var_13_bool = 1;
			goto Label_1323;
		}
		var_384_bool = var_5_string == "button_food";
		if(var_384_bool != 0) {
			var_385_int = 0;
			func_1335(var_18_object, (int)3);
			var_13_bool = 1;
			goto Label_1323;
		}
		var_387_bool = var_5_string == "button_other";
		if(var_387_bool != 0) {
			var_388_int = 0;
			func_1335(var_18_object, (int)4);
			var_13_bool = 1;
			goto Label_1323;
		}
		var_390_bool = var_5_string == "button_detector";
		if(var_390_bool != 0) {
			goto Label_1323;
		}
		var_392_bool = var_5_string == "button_anticeptic";
		if(var_392_bool != 0) {
			goto Label_1323;
		}
		var_394_bool = var_4_int != (int)0;
		if(var_394_bool != 0) {
			GetVariable("noinv_drop", var_14_int);
			var_396_int = var_14_int;
			if(var_396_int != 0) {
				return 12;
			}
		}

	Label_1285:
		var_398_bool = (int)0 < (int)12;
		if(var_398_bool == 0) goto Label_1323;
		var_399_string = ""; var_400_int = 0;
		var_15_int = var_400_int;
		func_1656(var_399_string, var_400_int);
		var_411_bool = var_5_string == var_399_string;
		if(var_411_bool != 0) {
			func_454(Obj());
			var_412_object = var_16_object;
			@@var_16_object:GetItemCount(var_17_int, var_0_int);
			var_413_bool = var_17_int > var_15_int;
			if(var_413_bool != 0) {
				@@var_16_object:GetItem(var_18_object, var_15_int, var_0_int);
				var_414_bool = 0; var_415_object = Obj();
				var_18_object = var_415_object;
				func_1177(var_415_object);
				var_416_bool = var_414_bool == 0; //@nz
				if(var_416_bool != 0) {
					var_417_bool = 0; var_418_int = 0; var_419_int = 0;
					var_15_int = var_418_int;
					var_419_int = var_4_int == (int)0;
					func_670(var_18_object, var_417_bool, var_418_int, var_419_int);
					var_417_bool = var_13_bool;
				}
				var_18_object = 0;
			}
			goto Label_1323;
		EMIT "Stack[-3] = 0";
		}
		var_15_int = var_15_int + (int)1;
		goto Label_1285;
	}
Label_1323:
	var_371_bool = var_13_bool == 0; //@nz
	if(var_371_bool != 0) {
		var_372_bool = 0; var_373_int = 0; var_374_string = ""; var_375_object = Obj();
		var_4_int = var_373_int;
		var_5_string = var_374_string;
		var_6_object = var_375_object;
		func_460(var_18_object, var_372_bool, var_373_int, var_374_string, var_375_object);
		var_372_bool = var_13_bool;
	}
	var_376_bool = var_13_bool;
	if(var_376_bool != 0) {
	}
	return 12;
	
}


main(var_0_int, var_1_object, var_2_int, var_3_int)
{
	var_4_int = 0; var_5_object = Obj(); var_6_string = ""; var_7_string = ""; var_8_int = 0; var_9_object = Obj(); var_10_int = 0; var_11_object = Obj(); var_12_string = ""; var_13_string = ""; var_14_int = 0; var_15_object = Obj();
	CreateWindow("inventory_base.xml", (bool)0, var_1_object);
	func_683(var_15_object);
	var_3_int = 2;
	var_10_int = 0;
	
Label_10:
	var_67_bool = var_10_int < (int)4;
	if(var_67_bool != 0) {
		CreateStringVector(var_11_object);
		var_69_int = var_10_int - (int)1;
		var_71_bool = var_69_int >= (int)0;
		if(var_71_bool != 0) {
			var_72_string = ""; var_73_int = 0;
			var_73_int = var_10_int - (int)1;
			func_1672(var_72_string, var_73_int);
			var_72_string = var_12_string;
		} else {
				var_12_string = "$parent";
	}
			var_14_int = 0;

		Label_57:
			var_97_bool = var_14_int < (int)4;
			if(var_97_bool != 0) {
				CreateStringVector(var_15_object);
				var_98_string = ""; var_99_int = 0;
				var_101_int = var_14_int + (int)4;
				var_103_int = var_101_int - (int)1;
				var_99_int = var_103_int % (int)4;
				func_1688(var_98_string, var_99_int);
				@@var_15_object:add(var_98_string);
				var_115_string = ""; var_116_int = 0;
				var_118_int = var_14_int + (int)4;
				var_120_int = var_118_int + (int)1;
				var_116_int = var_120_int % (int)4;
				func_1688(var_115_string, var_116_int);
				@@var_15_object:add(var_115_string);
				var_123_string = ""; var_124_int = 0;
				var_14_int = var_124_int;
				func_1688(var_123_string, var_124_int);
				SendMessage((int)-1, var_123_string, var_15_object);
				var_15_object = 0;
				var_14_int = var_14_int + (int)1;
				goto Label_57;
			}
			var_126_int = 0;
			func_930(var_15_object, (int)0);
			return 12;
	}
	var_86_int = var_10_int + (int)1;
	var_88_bool = var_86_int < (int)4;
	if(var_88_bool != 0) {
		var_89_string = ""; var_90_int = 0;
		var_90_int = var_10_int + (int)1;
		func_1672(var_89_string, var_90_int);
		var_89_string = var_13_string;
	} else {
		var_13_string = "$parent";

	}
	@@var_11_object:add(var_12_string);
	@@var_11_object:add(var_13_string);
	var_93_string = ""; var_94_int = 0;
	var_10_int = var_94_int;
	func_1672(var_93_string, var_94_int);
	SendMessage((int)-1, var_93_string, var_11_object);
	var_11_object = 0;
	var_10_int = var_10_int + (int)1;
	goto Label_10;
	
}


func_900(var_24_int)
{
	var_25_object = Obj(); var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_object = Obj(); var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_object = Obj(); var_38_int = 0; var_39_int = 0; var_40_bool = 0;
	GetContainer(var_33_object);
	@@var_33_object:GetItemCount(var_34_int);
	var_36_int = 0;
	
Label_907:
	var_41_bool = var_36_int < var_34_int;
	if(var_41_bool != 0) {
		@@var_33_object:GetItem(var_37_object, var_36_int);
		@@var_37_object:GetItemID(var_38_int);
		@@var_33_object:GetItemAmount(var_39_int, var_36_int);
		var_40_bool = 0;
		@@var_37_object:HasProperty(var_40_bool, "Organ");
		var_43_bool = var_40_bool == 0; //@nz
		if(var_43_bool != 0) {
			(int)0 = (int)0 + (int)1;
		}
		var_37_object = 0;
		var_36_int = var_36_int + (int)1;
		goto Label_907;
	}
	var_35_int = var_24_int;
	return 16;
}
EMIT "Stack[-8] = 0";


func_1672(var_72_string, var_73_int)
{
	var_76_int = var_73_int + (int)1;
	var_78_bool = var_76_int < (int)10;
	if(var_78_bool != 0) {
		var_81_int = var_73_int + (int)1;
		var_72_string = "cslot0" + var_81_int;
		return 0;
	}
	var_84_int = var_73_int + (int)1;
	var_72_string = "cslot" + var_84_int;
	return 0;
}


func_654(var_2_int, var_344_int)
{
	var_349_bool = 0; var_350_bool = 0;
	var_351_int = 0;
	var_352_int = 0; var_353_bool = 0; var_354_int = 0;
	var_350_bool = var_353_bool;
	var_354_int = var_344_int + var_2_int;
	func_1439(var_352_int, var_353_bool, var_354_int);
	var_352_int = var_351_int;
	func_1335(var_350_bool, var_351_int);
	var_355_bool = var_350_bool == 0; //@nz
	if(var_355_bool != 0) {
	}
	func_683(var_350_bool);
	return 2;
}


func_1688(var_98_string, var_99_int)
{
	var_106_int = var_99_int + (int)1;
	var_108_bool = var_106_int < (int)10;
	if(var_108_bool != 0) {
		var_111_int = var_99_int + (int)1;
		var_98_string = "ccslot0" + var_111_int;
		return 0;
	}
	var_114_int = var_99_int + (int)1;
	var_98_string = "ccslot" + var_114_int;
	return 0;
}


func_1177(var_196_bool)
{
	var_196_bool = 0;
	return 0;
}


func_1180(var_187_bool, var_188_int, var_189_int)
{
	var_190_bool = 0; var_191_bool = 0;
	var_192_object = Obj();
	func_454(var_192_object);
	func_454(Obj());
	func_454(Obj());
	func_454(Obj());
	@@var_192_object:IsItemSelected(var_191_bool, var_188_int, var_189_int);
	var_191_bool = var_187_bool;
	return 2;
}


func_670(var_0_int, var_2_int, var_417_bool, var_418_int)
{
	var_421_bool = 0; var_422_int = 0; var_423_int = 0;
	var_422_int = var_0_int;
	var_418_int = var_423_int;
	func_1519(var_419_int, var_421_bool, var_422_int, var_423_int);
	var_2_int = var_2_int + (int)1;
	func_683(var_419_int);
	var_417_bool = 1;
	return 0;
}


func_1439(var_244_int, var_245_bool, var_246_int)
{
	var_247_object = Obj(); var_248_object = Obj(); var_249_object = Obj(); var_250_int = 0; var_251_int = 0; var_252_int = 0; var_253_bool = 0; var_254_int = 0; var_255_int = 0; var_256_bool = 0; var_257_bool = 0; var_258_object = Obj(); var_259_object = Obj(); var_260_object = Obj(); var_261_int = 0; var_262_int = 0; var_263_int = 0; var_264_bool = 0; var_265_int = 0; var_266_int = 0; var_267_bool = 0; var_268_bool = 0;
	var_245_bool = 0;
	var_270_bool = var_246_int == (int)-1;
	if(var_270_bool != 0) {
		var_244_int = -1;
		return 22;
	}
	func_454(Obj());
	var_271_object = var_259_object;
	GetContainer(var_258_object);
	@@var_258_object:GetItemCount(var_261_int);
	var_274_bool = var_261_int <= var_246_int;
	if(var_274_bool != 0) {
		var_244_int = -1;
		return 22;
	}
	@@var_258_object:GetItemAmount(var_262_int, var_246_int);
	var_276_bool = var_262_int == (int)0;
	if(var_276_bool != 0) {
		var_244_int = -1;
		return 22;
	}
	@@var_258_object:GetItem(var_260_object, var_246_int);
	@@var_260_object:GetItemID(var_263_int);
	var_264_bool = 0;
	@@var_260_object:HasProperty(var_264_bool, "Organ");
	var_278_bool = var_264_bool;
	if(var_278_bool != 0) {
		@@var_260_object:RemoveProperty("Organ");
	}
	GetInvItemProperty(var_265_int, var_263_int, "Category");
	var_281_int = 0;
	func_1704(var_281_int);
	var_285_bool = var_263_int == var_281_int;
	if(var_285_bool != 0) {
		func_1349((int)0);
		var_286_int = var_266_int;
		var_266_int = var_266_int + var_262_int;
		var_293_int = 0;
		var_266_int = var_293_int;
		func_1360(var_293_int);
		@@var_258_object:RemoveItem(var_246_int, var_262_int);
		func_1370();
		var_245_bool = 1;
		var_244_int = -1;
		return 22;
	}
	@@var_259_object:AddItem(var_268_bool, var_260_object, var_265_int, (int)1);
	var_301_bool = var_268_bool == 0; //@nz
	if(var_301_bool != 0) {
		var_265_int = var_244_int;
		return 22;
	}
	var_245_bool = 1;
	@@var_258_object:RemoveItem(var_246_int, (int)1);
	var_265_int = var_244_int;
	return 22;
}
EMIT "Stack[-9] = 0";
EMIT "Stack[-10] = 0";
EMIT "Stack[-11] = 0";


func_288(var_3_int, var_5_int)
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0;
	var_19_bool = var_5_int == (int)272;
	if(var_19_bool != 0) {
		var_21_bool = var_3_int == (int)0;
		if(var_21_bool != 0) {
			var_3_int = 1;

		Label_297:
			var_23_bool = (int)0 < (int)4;
			if(var_23_bool != 0) {
				var_25_string = ""; var_26_int = 0;
				var_12_int = var_26_int;
				func_1688(var_25_string, var_26_int);
				SendMessage((int)-7, var_25_string);
				var_12_int = var_12_int + (int)1;
				goto Label_297;
			}
		} else {
							var_132_bool = 0;
							var_132_bool = 1;
							var_134_bool = var_3_int == (int)1;
							if(var_134_bool != 1) {
								var_136_bool = var_3_int == (int)2;
								if(var_136_bool != 1) {
									var_132_bool = 0;
								}
							}
							if(var_132_bool == 0) goto Label_336;
							var_3_int = 2;

						Label_323:
							var_138_bool = (int)0 < (int)4;
							if(var_138_bool == 0) goto Label_336;
							var_140_string = ""; var_141_int = 0;
							var_13_int = var_141_int;
							func_1672(var_140_string, var_141_int);
							SendMessage((int)-7, var_140_string);
							var_13_int = var_13_int + (int)1;
							goto Label_323;
		}
	}
Label_336:
	var_39_bool = var_5_int == (int)274;
	if(var_39_bool != 0) {
		var_40_bool = 0;
		var_40_bool = 1;
		var_42_bool = var_3_int == (int)1;
		if(var_42_bool != 1) {
			var_44_bool = var_3_int == (int)0;
			if(var_44_bool != 1) {
				var_40_bool = 0;
			}
		}
		if(var_40_bool != 0) {

		Label_351:
			var_46_bool = (int)0 < (int)12;
			if(var_46_bool != 0) {
				var_48_string = ""; var_49_int = 0;
				var_14_int = var_49_int;
				func_1656(var_48_string, var_49_int);
				SendMessage((int)-7, var_48_string);
				var_14_int = var_14_int + (int)1;
				goto Label_351;
			}
		} else {
					var_125_bool = (int)0 == (int)2;
					if(var_125_bool == 0) goto Label_383;
					var_3_int = 1;

				Label_370:
					var_127_bool = (int)0 < (int)4;
					if(var_127_bool == 0) goto Label_383;
					var_129_string = ""; var_130_int = 0;
					var_15_int = var_130_int;
					func_1688(var_129_string, var_130_int);
					SendMessage((int)-7, var_129_string);
					var_15_int = var_15_int + (int)1;
					goto Label_370;

		}
	}
Label_383:
	var_62_bool = var_3_int == (int)0;
	if(var_62_bool != 0) {
		var_63_int = 0;
		var_5_int = var_63_int;
		func_1141(var_63_int);
		return 12;
	}
	var_85_bool = var_5_int == (int)273;
	if(var_85_bool != 0) {

	Label_395:
		var_87_bool = (int)0 < (int)4;
		if(var_87_bool != 0) {
			var_89_bool = var_3_int == (int)2;
			if(var_89_bool != 0) {
				var_91_string = ""; var_92_int = 0;
				var_16_int = var_92_int;
				func_1672(var_91_string, var_92_int);
				SendMessage((int)-2, var_91_string);
			} else {
				var_105_bool = var_3_int == (int)1;
				if(var_105_bool == 0) goto Label_419;
				var_107_string = ""; var_108_int = 0;
				var_16_int = var_108_int;
				func_1688(var_107_string, var_108_int);
				SendMessage((int)-2, var_107_string);
		}
	}
		var_110_bool = var_5_int == (int)271;
		if(var_110_bool != 0) {

		Label_426:
			var_112_bool = (int)0 < (int)4;
			if(var_112_bool != 0) {
				var_114_bool = var_3_int == (int)2;
				if(var_114_bool != 0) {
					var_116_string = ""; var_117_int = 0;
					var_17_int = var_117_int;
					func_1672(var_116_string, var_117_int);
					SendMessage((int)-3, var_116_string);
				} else {
					var_120_bool = var_3_int == (int)1;
					if(var_120_bool == 0) goto Label_450;
					var_122_string = ""; var_123_int = 0;
					var_17_int = var_123_int;
					func_1688(var_122_string, var_123_int);
					SendMessage((int)-3, var_122_string);
			}
		}
			return 12;

		}
	Label_450:
		var_17_int = var_17_int + (int)1;
		goto Label_426;
	}
Label_419:
	var_16_int = var_16_int + (int)1;
	goto Label_395;
	
}


func_1569(var_166_int)
{
	var_167_object = Obj(); var_168_int = 0; var_169_int = 0; var_170_object = Obj(); var_171_int = 0; var_172_bool = 0; var_173_bool = 0; var_174_object = Obj(); var_175_int = 0; var_176_int = 0; var_177_object = Obj(); var_178_int = 0; var_179_bool = 0; var_180_bool = 0;
	func_454(Obj());
	var_181_object = var_174_object;
	@@var_174_object:GetItemCount(var_175_int, var_166_int);
	var_176_int = 0;
	
Label_1577:
	var_185_bool = var_176_int < (int)12;
	if(var_185_bool != 0) {
		var_186_bool = var_176_int < var_175_int;
		if(var_186_bool != 0) {
			@@var_174_object:GetItem(var_177_object, var_176_int, var_166_int);
			@@var_174_object:GetItemAmount(var_178_int, var_176_int, var_166_int);
			var_187_bool = 0; var_188_int = 0; var_189_int = 0;
			var_176_int = var_188_int;
			var_166_int = var_189_int;
			func_1180(var_187_bool, var_188_int, var_189_int);
			var_187_bool = var_179_bool;
			var_196_bool = 0; var_197_object = Obj();
			var_177_object = var_197_object;
			func_1177(var_197_object);
			var_196_bool = var_180_bool;
			var_198_bool = var_179_bool;
			if(var_198_bool != 0) {
				var_199_bool = var_180_bool;
				if(var_199_bool != 0) {
					var_201_string = ""; var_202_int = 0;
					var_176_int = var_202_int;
					func_1656(var_201_string, var_202_int);
					SendMessage((int)0, var_201_string, var_177_object);
				} else {
					var_219_string = ""; var_220_int = 0;
					var_176_int = var_220_int;
					func_1656(var_219_string, var_220_int);
					SendMessage((int)16384, var_219_string, var_177_object);
			}
				var_221_bool = var_180_bool;
				if(var_221_bool != 0) {
					var_223_string = ""; var_224_int = 0;
					var_176_int = var_224_int;
					func_1656(var_223_string, var_224_int);
					SendMessage((int)131072, var_223_string, var_177_object);
					goto Label_1634;
				}
				var_226_string = ""; var_227_int = 0;
				var_176_int = var_227_int;
				func_1656(var_226_string, var_227_int);
				SendMessage((int)0, var_226_string, var_177_object);
		}
			var_229_string = ""; var_230_int = 0;
			var_176_int = var_230_int;
			func_1656(var_229_string, var_230_int);
			SendMessage((int)32768, var_229_string);
	}
		goto Label_1634;
		var_214_int = var_178_int | (int)65536;
		var_215_string = ""; var_216_int = 0;
		var_176_int = var_216_int;
		func_1656(var_215_string, var_216_int);
		SendMessage(var_214_int, var_215_string);
		var_177_object = 0;
		goto Label_1651;
		var_176_int = var_176_int + (int)1;
		goto Label_1577;
	}
	return 14;
	
}
EMIT "Stack[-7] = 0";


func_930(var_0_int, var_126_int)
{
	var_127_int = 0; var_128_object = Obj(); var_129_int = 0; var_130_object = Obj();
	var_131_int = 0;
	var_126_int = var_131_int;
	func_1335(var_130_object, var_131_int);
	var_166_int = 0;
	var_166_int = (int)-1;
	func_1569(var_166_int);
	func_1370();
	var_129_int = 0;
	
Label_944:
	var_240_bool = var_129_int < (int)12;
	if(var_240_bool != 0) {
		CreateStringVector(var_130_object);
		var_241_string = ""; var_242_int = 0;
		var_244_int = var_129_int + (int)12;
		var_246_int = var_244_int - (int)1;
		var_242_int = var_246_int % (int)12;
		func_1656(var_241_string, var_242_int);
		@@var_130_object:add(var_241_string);
		var_248_string = ""; var_249_int = 0;
		var_251_int = var_129_int + (int)12;
		var_253_int = var_251_int + (int)1;
		var_249_int = var_253_int % (int)12;
		func_1656(var_248_string, var_249_int);
		@@var_130_object:add(var_248_string);
		var_256_string = ""; var_257_int = 0;
		var_129_int = var_257_int;
		func_1656(var_256_string, var_257_int);
		SendMessage((int)-1, var_256_string, var_130_object);
		var_130_object = 0;
		var_129_int = var_129_int + (int)1;
		goto Label_944;
	}
	func_100();
	SetCursor("default");
	ShowCursor();
	CaptureKeyboard();
	SetOwnerDraw((bool)0);
	SetNeedUpdate((bool)1);
	func_631();
	ProcessEvents();
	return 4;
}


func_1704(var_281_int)
{
	var_282_int = 0; var_283_int = 0;
	GetInvItemByName(var_283_int, "Money");
	var_283_int = var_281_int;
	return 2;
}


func_683(var_2_int)
{
	var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0;
	func_900((int)0);
	var_24_int = var_21_int;
	var_47_bool = var_21_int <= (int)4;
	if(var_47_bool != 0) {
		SendMessage((int)16384, "scrollbar");
		var_2_int = 0;
	} else {
		var_51_int = var_2_int + (int)4;
		var_52_bool = var_51_int > var_21_int;
		if(var_52_bool != 0) {
			var_54_int = var_2_int + (int)4;
			var_55_int = var_54_int - var_21_int;
			var_2_int = var_2_int - var_55_int;
			var_57_float = var_2_int * (int)100;
			var_59_int = var_21_int - (int)4;
			var_22_int = var_57_float / var_59_int;
			SendMessage(var_22_int, "scrollbar");
			goto Label_722;
		}
		var_62_float = var_2_int * (int)100;
		var_64_int = var_21_int - (int)4;
		var_23_int = var_62_float / var_64_int;
		SendMessage(var_23_int, "scrollbar");
	}
Label_722:
	return 6;
	
}


func_1335(var_0_int, var_131_int)
{
	var_133_bool = var_131_int == (int)-1;
	if(var_133_bool != 0) {
		return 0;
	}
	var_134_bool = var_0_int == var_131_int;
	if(var_134_bool != 0) {
		return 0;
	}
	var_0_int = var_131_int;
	var_135_int = 0;
	var_135_int = var_0_int;
	func_1377(var_135_int);
	return 0;
}


func_1349(var_231_int)
{
	var_232_object = Obj(); var_233_int = 0; var_234_object = Obj(); var_235_int = 0;
	func_454(Obj());
	var_236_object = var_234_object;
	@@var_234_object:GetProperty("money", var_235_int);
	var_235_int = var_231_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_454(var_181_object)
{
	var_182_object = Obj(); var_183_object = Obj();
	GetPlayerContainer(var_183_object);
	var_183_object = var_181_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_460(var_2_int, var_3_int, var_21_bool, var_22_int, var_23_string)
{
	var_25_object = Obj(); var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_object = Obj(); var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0;
	var_36_bool = var_22_int == (int)-4;
	if(var_36_bool != 0) {
		var_37_string = ""; var_38_int = 0;
		func_1672(var_37_string, (int)0);
		var_49_bool = var_23_string == var_37_string;
		if(var_49_bool != 0) {
			var_51_bool = var_2_int > (int)0;
			if(var_51_bool != 0) {
				var_2_int = var_2_int + (int)-1;
				func_723(var_34_int);
				func_683(var_34_int);
			}
		} else {
			var_185_string = ""; var_186_int = 0;
			func_1672(var_185_string, (int)3);
			var_187_bool = var_23_string == var_185_string;
			if(var_187_bool == 0) goto Label_505;
			GetContainer(var_30_object);
			@@var_30_object:GetItemCount(var_31_int);
			var_189_int = var_2_int + (int)4;
			var_190_bool = var_189_int <= var_31_int;
			if(var_190_bool != 0) {
				var_2_int = var_2_int + (int)1;
				func_723(var_34_int);
				func_683(var_34_int);
			}
			var_30_object = 0;
	}
		var_193_bool = var_22_int == (int)-8;
		if(var_193_bool != 0) {
			var_3_int = 0;
			var_21_bool = 1;
			return 10;
		}
		var_195_bool = var_22_int == (int)-10;
		if(var_195_bool != 0) {
			var_3_int = 1;
			var_21_bool = 1;
			return 10;
		}
		var_197_bool = var_22_int == (int)-9;
		if(var_197_bool != 0) {
			var_3_int = 2;
			var_21_bool = 1;
			return 10;
		}
		var_199_bool = var_22_int < (int)0;
		if(var_199_bool != 0) {
			var_21_bool = 1;
			return 10;
		}

	Label_534:
		var_201_bool = (int)0 < (int)4;
		if(var_201_bool != 0) {
			var_202_string = ""; var_203_int = 0;
			var_32_int = var_203_int;
			func_1688(var_202_string, var_203_int);
			var_204_bool = var_23_string == var_202_string;
			if(var_204_bool != 0) {
				var_205_int = 0; var_206_bool = 0;
				var_207_int = 0; var_208_int = 0; var_209_bool = 0;
				var_32_int = var_208_int;
				func_846(var_207_int, var_208_int, (bool)1);
				var_207_int = var_205_int;
				func_638((bool)1);
				var_21_bool = 1;
				var_32_int = var_32_int + (int)1;
				goto Label_534;
			}
			return 10;
		}

	Label_559:
		var_340_bool = (int)0 < (int)4;
		if(var_340_bool != 0) {
			var_341_string = ""; var_342_int = 0;
			var_33_int = var_342_int;
			func_1672(var_341_string, var_342_int);
			var_343_bool = var_23_string == var_341_string;
			if(var_343_bool != 0) {
				var_344_int = 0; var_345_bool = 0;
				var_346_int = 0; var_347_int = 0; var_348_bool = 0;
				var_33_int = var_347_int;
				func_846(var_346_int, var_347_int, (bool)0);
				var_346_int = var_344_int;
				func_654(var_344_int, (bool)1);
				var_21_bool = 1;
				var_33_int = var_33_int + (int)1;
				goto Label_559;
			}
			return 10;
		}
		var_358_bool = var_23_string == "scrollbar";
		if(var_358_bool != 0) {
			func_900((int)0);
			var_359_int = var_34_int;
			var_362_int = var_34_int - (int)4;
			var_363_float = (float)0.009999999776482582 * var_362_int;
			var_364_float = var_363_float * var_22_int;
			var_2_int = var_364_float + (float)0.5;
			var_367_bool = var_2_int < (int)0;
			if(var_367_bool != 0) {
				var_2_int = 0;
			}
			func_723(var_34_int);
			var_21_bool = 1;
			return 10;
		}
		var_21_bool = 0;
		return 10;
	}
Label_505:
	SendMessage((int)-4, var_23_string);
	var_21_bool = 1;
	return 10;
	
}


func_846(var_207_int, var_208_int, var_209_bool)
{
	var_210_object = Obj(); var_211_int = 0; var_212_int = 0; var_213_int = 0; var_214_int = 0; var_215_object = Obj(); var_216_int = 0; var_217_int = 0; var_218_bool = 0; var_219_object = Obj(); var_220_int = 0; var_221_int = 0; var_222_int = 0; var_223_int = 0; var_224_object = Obj(); var_225_int = 0; var_226_int = 0; var_227_bool = 0;
	GetContainer(var_219_object);
	@@var_219_object:GetItemCount(var_220_int);
	var_221_int = 0;
	var_222_int = 0;
	var_223_int = 0;
	
Label_854:
	var_228_bool = var_223_int < var_220_int;
	if(var_228_bool != 0) {
		@@var_219_object:GetItem(var_224_object, var_223_int);
		@@var_224_object:GetItemID(var_225_int);
		@@var_219_object:GetItemAmount(var_226_int, var_223_int);
		var_227_bool = 0;
		@@var_224_object:HasProperty(var_227_bool, "Organ");
		var_230_bool = var_227_bool;
		if(var_230_bool != 0) {
			var_231_bool = 0;
			var_231_bool = 0;
			var_232_bool = var_209_bool;
			if(var_232_bool != 0) {
				var_233_bool = var_221_int == var_208_int;
				if(var_233_bool != 0) {
					var_231_bool = 1;
				}
			}
			if(var_231_bool != 0) {
				var_223_int = var_207_int;
				return 18;
			}
			var_221_int = var_221_int + (int)1;
		} else {
			var_236_bool = 0;
			var_236_bool = 0;
			var_237_bool = var_209_bool == 0; //@nz
			if(var_237_bool != 0) {
				var_238_bool = var_222_int == var_208_int;
				if(var_238_bool != 0) {
					var_236_bool = 1;
				}
			}
			if(var_236_bool != 0) {
				var_223_int = var_207_int;
				return 18;
			}
			var_222_int = var_222_int + (int)1;
	}
		var_207_int = -1;
		var_224_object = 0;
		var_223_int = var_223_int + (int)1;
		goto Label_854;
	}
	return 18;
	
}
EMIT "Stack[-9] = 0";


func_1360(var_293_int)
{
	var_294_object = Obj(); var_295_object = Obj();
	func_454(Obj());
	var_296_object = var_295_object;
	@@var_295_object:SetProperty("money", var_293_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1105(var_102_int)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	var_108_bool = var_102_int == (int)269;
	if(var_108_bool != 0) {

	Label_1110:
		var_110_bool = (int)0 < (int)12;
		if(var_110_bool != 0) {
			var_112_string = ""; var_113_int = 0;
			var_105_int = var_113_int;
			func_1656(var_112_string, var_113_int);
			SendMessage((int)-2, var_112_string);
			var_105_int = var_105_int + (int)1;
			goto Label_1110;
		}
	}
	var_116_bool = var_102_int == (int)270;
	if(var_116_bool != 0) {

	Label_1127:
		var_118_bool = (int)0 < (int)12;
		if(var_118_bool != 0) {
			var_120_string = ""; var_121_int = 0;
			var_106_int = var_121_int;
			func_1656(var_120_string, var_121_int);
			SendMessage((int)-3, var_120_string);
			var_106_int = var_106_int + (int)1;
			goto Label_1127;
		}
	}
	return 4;
}


func_723(var_2_int)
{
	var_271_object = Obj(); var_272_int = 0; var_273_int = 0; var_274_int = 0; var_275_object = Obj(); var_276_int = 0; var_277_int = 0; var_278_bool = 0; var_279_int = 0; var_280_int = 0; var_281_object = Obj(); var_282_int = 0; var_283_int = 0; var_284_bool = 0; var_285_int = 0; var_286_object = Obj(); var_287_int = 0; var_288_int = 0; var_289_int = 0; var_290_object = Obj(); var_291_int = 0; var_292_int = 0; var_293_bool = 0; var_294_int = 0; var_295_int = 0; var_296_object = Obj(); var_297_int = 0; var_298_int = 0; var_299_bool = 0; var_300_int = 0;
	GetContainer(var_286_object);
	@@var_286_object:GetItemCount(var_287_int);
	var_288_int = 0;
	var_289_int = 0;
	
Label_730:
	var_301_bool = var_289_int < var_287_int;
	if(var_301_bool != 0) {
		@@var_286_object:GetItem(var_290_object, var_289_int);
		@@var_290_object:GetItemID(var_291_int);
		@@var_286_object:GetItemAmount(var_292_int, var_289_int);
		var_293_bool = 0;
		@@var_290_object:HasProperty(var_293_bool, "Organ");
		var_303_bool = var_293_bool;
		if(var_303_bool != 0) {
		} else {
			var_305_bool = var_288_int >= var_2_int;
			if(var_305_bool != 0) {
				var_307_string = ""; var_308_int = 0;
				var_308_int = var_288_int - var_2_int;
				func_1672(var_307_string, var_308_int);
				SendMessage((int)0, var_307_string, var_290_object);
				var_310_int = var_292_int | (int)65536;
				var_311_string = ""; var_312_int = 0;
				var_312_int = var_288_int - var_2_int;
				func_1672(var_311_string, var_312_int);
				SendMessage(var_310_int, var_311_string);
			}
			var_288_int = var_288_int + (int)1;
			var_315_int = (int)4 + var_2_int;
			var_316_bool = var_288_int >= var_315_int;
			if(var_316_bool != 0) {
			} else {
							var_290_object = 0;
			}
	}
		var_294_int = var_288_int + var_2_int;

	Label_774:
		var_318_int = (int)4 + var_2_int;
		var_319_bool = var_294_int < var_318_int;
		if(var_319_bool != 0) {
			var_321_string = ""; var_322_int = 0;
			var_322_int = var_294_int - var_2_int;
			func_1672(var_321_string, var_322_int);
			SendMessage((int)32768, var_321_string);
			var_294_int = var_294_int + (int)1;
			goto Label_774;
		}
		var_288_int = 0;
		var_295_int = 0;

	Label_790:
		var_324_bool = var_295_int < var_287_int;
		if(var_324_bool != 0) {
			@@var_286_object:GetItem(var_296_object, var_295_int);
			@@var_296_object:GetItemID(var_297_int);
			@@var_286_object:GetItemAmount(var_298_int, var_295_int);
			var_299_bool = 0;
			@@var_296_object:HasProperty(var_299_bool, "Organ");
			var_326_bool = var_299_bool == 0; //@nz
			if(var_326_bool != 0) {
			} else {
				var_329_string = ""; var_330_int = 0;
				var_288_int = var_330_int;
				func_1688(var_329_string, var_330_int);
				SendMessage((int)0, var_329_string, var_296_object);
				var_332_int = var_298_int | (int)65536;
				var_333_string = ""; var_334_int = 0;
				var_288_int = var_334_int;
				func_1688(var_333_string, var_334_int);
				SendMessage(var_332_int, var_333_string);
				var_288_int = var_288_int + (int)1;
				var_337_bool = var_288_int >= (int)4;
				if(var_337_bool != 0) {
				} else {
					var_296_object = 0;

				}
		}
			var_288_int = var_300_int;

		Label_831:
			var_339_bool = var_300_int < (int)4;
			if(var_339_bool != 0) {
				var_341_string = ""; var_342_int = 0;
				var_300_int = var_342_int;
				func_1688(var_341_string, var_342_int);
				SendMessage((int)32768, var_341_string);
				var_300_int = var_300_int + (int)1;
				goto Label_831;
			}
			var_295_int = var_295_int + (int)1;
			goto Label_790;
		}
		var_289_int = var_289_int + (int)1;
		goto Label_730;
	}
	return 30;
	
}
EMIT "Stack[-15] = 0";


func_1370()
{
	var_231_int = 0;
	func_1349(var_231_int);
	SendMessage(var_231_int, "money");
	return 0;
}


func_1377(var_135_int)
{
	var_137_bool = var_135_int != (int)0;
	if(var_137_bool != 0) {
		SendMessage((int)0, "button_weapon");
	} else {
						SendMessage((int)1, "button_weapon");
	}
	var_141_bool = var_135_int != (int)1;
	if(var_141_bool != 0) {
		SendMessage((int)0, "button_clothes");
	} else {
					SendMessage((int)1, "button_clothes");

	}
	var_145_bool = var_135_int != (int)2;
	if(var_145_bool != 0) {
		SendMessage((int)0, "button_medcine");
	} else {
				SendMessage((int)1, "button_medcine");

	}
	var_149_bool = var_135_int != (int)3;
	if(var_149_bool != 0) {
		SendMessage((int)0, "button_food");
	} else {
			SendMessage((int)1, "button_food");

	}
	var_153_bool = var_135_int != (int)4;
	if(var_153_bool != 0) {
		SendMessage((int)0, "button_other");
	} else {
		SendMessage((int)1, "button_other");

	}
	return 0;
	
}


func_100()
{
	var_260_string = ""; var_261_int = 0;
	func_1656(var_260_string, (int)0);
	SendMessage((int)-6, var_260_string);
	var_263_string = ""; var_264_int = 0;
	func_1688(var_263_string, (int)0);
	SendMessage((int)-6, var_263_string);
	var_266_string = ""; var_267_int = 0;
	func_1672(var_266_string, (int)0);
	SendMessage((int)-6, var_266_string);
	return 0;
}


func_1519(var_0_int, var_421_bool, var_422_int, var_423_int)
{
	var_424_object = Obj(); var_425_object = Obj(); var_426_object = Obj(); var_427_int = 0; var_428_int = 0; var_429_bool = 0; var_430_int = 0; var_431_bool = 0; var_432_bool = 0; var_433_object = Obj(); var_434_object = Obj(); var_435_object = Obj(); var_436_int = 0; var_437_int = 0; var_438_bool = 0; var_439_int = 0; var_440_bool = 0; var_441_bool = 0;
	func_454(Obj());
	var_442_object = var_434_object;
	GetContainer(var_433_object);
	@@var_434_object:GetItemCount(var_436_int, var_422_int);
	var_443_bool = var_436_int <= var_423_int;
	if(var_443_bool != 0) {
		var_421_bool = 0;
		return 18;
	}
	@@var_434_object:GetItemAmount(var_437_int, var_423_int, var_422_int);
	@@var_434_object:GetItem(var_435_object, var_423_int, var_422_int);
	@@var_433_object:AddItem(var_438_bool, var_435_object, (int)0, (int)1);
	var_446_bool = var_438_bool == 0; //@nz
	if(var_446_bool != 0) {
		var_421_bool = 0;
		return 18;
	}
	var_448_bool = var_0_int == (int)0;
	if(var_448_bool != 0) {
		@@var_435_object:GetItemID(var_439_int);
		HasInvItemProperty(var_440_bool, var_439_int, "Weapon");
		var_450_bool = var_440_bool;
		if(var_450_bool != 0) {
			@@var_434_object:IsItemSelected(var_441_bool, var_423_int, var_0_int);
			var_451_bool = var_441_bool;
			if(var_451_bool != 0) {
				SetPlayerHandsItem((int)-1);
			}
		}
	}
	@@var_434_object:RemoveItem(var_423_int, (int)1, var_422_int);
	var_421_bool = 1;
	return 18;
}
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


func_627()
{
	func_723(var_4_float);
	return 0;
}


func_1141(var_63_int)
{
	var_64_int = 0; var_65_int = 0; var_66_int = 0; var_67_int = 0;
	var_69_bool = var_63_int == (int)273;
	if(var_69_bool != 0) {

	Label_1146:
		var_71_bool = (int)0 < (int)12;
		if(var_71_bool != 0) {
			var_73_string = ""; var_74_int = 0;
			var_66_int = var_74_int;
			func_1656(var_73_string, var_74_int);
			SendMessage((int)-2, var_73_string);
			var_66_int = var_66_int + (int)1;
			goto Label_1146;
		}
	}
	var_77_bool = var_63_int == (int)271;
	if(var_77_bool != 0) {

	Label_1163:
		var_79_bool = (int)0 < (int)12;
		if(var_79_bool != 0) {
			var_81_string = ""; var_82_int = 0;
			var_67_int = var_82_int;
			func_1656(var_81_string, var_82_int);
			SendMessage((int)-3, var_81_string);
			var_67_int = var_67_int + (int)1;
			goto Label_1163;
		}
	}
	return 4;
}


func_631()
{
	func_683(var_130_object);
	func_723(var_130_object);
	return 0;
}


func_1656(var_201_string, var_202_int)
{
	var_204_int = var_202_int + (int)1;
	var_206_bool = var_204_int < (int)10;
	if(var_206_bool != 0) {
		var_209_int = var_202_int + (int)1;
		var_201_string = "slot0" + var_209_int;
		return 0;
	}
	var_212_int = var_202_int + (int)1;
	var_201_string = "slot" + var_212_int;
	return 0;
}


func_122(var_3_int, var_44_int)
{
	var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0;
	var_58_bool = var_44_int == (int)267;
	if(var_58_bool != 0) {
		var_60_bool = var_3_int == (int)0;
		if(var_60_bool != 0) {
			var_3_int = 1;

		Label_131:
			var_62_bool = (int)0 < (int)4;
			if(var_62_bool != 0) {
				var_64_string = ""; var_65_int = 0;
				var_51_int = var_65_int;
				func_1688(var_64_string, var_65_int);
				SendMessage((int)-7, var_64_string);
				var_51_int = var_51_int + (int)1;
				goto Label_131;
			}
		} else {
							var_171_bool = 0;
							var_171_bool = 1;
							var_173_bool = var_3_int == (int)1;
							if(var_173_bool != 1) {
								var_175_bool = var_3_int == (int)2;
								if(var_175_bool != 1) {
									var_171_bool = 0;
								}
							}
							if(var_171_bool == 0) goto Label_170;
							var_3_int = 2;

						Label_157:
							var_177_bool = (int)0 < (int)4;
							if(var_177_bool == 0) goto Label_170;
							var_179_string = ""; var_180_int = 0;
							var_52_int = var_180_int;
							func_1672(var_179_string, var_180_int);
							SendMessage((int)-7, var_179_string);
							var_52_int = var_52_int + (int)1;
							goto Label_157;
		}
	}
Label_170:
	var_78_bool = var_44_int == (int)268;
	if(var_78_bool != 0) {
		var_79_bool = 0;
		var_79_bool = 1;
		var_81_bool = var_3_int == (int)1;
		if(var_81_bool != 1) {
			var_83_bool = var_3_int == (int)0;
			if(var_83_bool != 1) {
				var_79_bool = 0;
			}
		}
		if(var_79_bool != 0) {

		Label_185:
			var_85_bool = (int)0 < (int)12;
			if(var_85_bool != 0) {
				var_87_string = ""; var_88_int = 0;
				var_53_int = var_88_int;
				func_1656(var_87_string, var_88_int);
				SendMessage((int)-7, var_87_string);
				var_53_int = var_53_int + (int)1;
				goto Label_185;
			}
		} else {
					var_164_bool = (int)0 == (int)2;
					if(var_164_bool == 0) goto Label_217;
					var_3_int = 1;

				Label_204:
					var_166_bool = (int)0 < (int)4;
					if(var_166_bool == 0) goto Label_217;
					var_168_string = ""; var_169_int = 0;
					var_54_int = var_169_int;
					func_1688(var_168_string, var_169_int);
					SendMessage((int)-7, var_168_string);
					var_54_int = var_54_int + (int)1;
					goto Label_204;

		}
	}
Label_217:
	var_101_bool = var_3_int == (int)0;
	if(var_101_bool != 0) {
		var_102_int = 0;
		var_44_int = var_102_int;
		func_1105(var_102_int);
		return 12;
	}
	var_124_bool = var_44_int == (int)269;
	if(var_124_bool != 0) {

	Label_229:
		var_126_bool = (int)0 < (int)4;
		if(var_126_bool != 0) {
			var_128_bool = var_3_int == (int)2;
			if(var_128_bool != 0) {
				var_130_string = ""; var_131_int = 0;
				var_55_int = var_131_int;
				func_1672(var_130_string, var_131_int);
				SendMessage((int)-2, var_130_string);
			} else {
				var_144_bool = var_3_int == (int)1;
				if(var_144_bool == 0) goto Label_253;
				var_146_string = ""; var_147_int = 0;
				var_55_int = var_147_int;
				func_1688(var_146_string, var_147_int);
				SendMessage((int)-2, var_146_string);
		}
	}
		var_149_bool = var_44_int == (int)270;
		if(var_149_bool != 0) {

		Label_260:
			var_151_bool = (int)0 < (int)4;
			if(var_151_bool != 0) {
				var_153_bool = var_3_int == (int)2;
				if(var_153_bool != 0) {
					var_155_string = ""; var_156_int = 0;
					var_56_int = var_156_int;
					func_1672(var_155_string, var_156_int);
					SendMessage((int)-3, var_155_string);
				} else {
					var_159_bool = var_3_int == (int)1;
					if(var_159_bool == 0) goto Label_284;
					var_161_string = ""; var_162_int = 0;
					var_56_int = var_162_int;
					func_1688(var_161_string, var_162_int);
					SendMessage((int)-3, var_161_string);
			}
		}
			return 12;

		}
	Label_284:
		var_56_int = var_56_int + (int)1;
		goto Label_260;
	}
Label_253:
	var_55_int = var_55_int + (int)1;
	goto Label_229;
	
}


func_638(var_205_int)
{
	var_240_bool = 0; var_241_bool = 0;
	PlaySound("take_organ");
	var_243_int = 0;
	var_244_int = 0; var_245_bool = 0; var_246_int = 0;
	var_241_bool = var_245_bool;
	var_205_int = var_246_int;
	func_1439(var_244_int, var_245_bool, var_246_int);
	var_244_int = var_243_int;
	func_1335(var_241_bool, var_243_int);
	var_337_bool = var_241_bool == 0; //@nz
	if(var_337_bool != 0) {
	}
	return 2;
}


