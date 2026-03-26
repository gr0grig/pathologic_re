// @IMPORTS: CreateWindow/3,CreateStringVector/1,SendMessage/3,SendMessage/2,GetPlayerContainer/1,GetContainer/1,SetCursor/1,ShowCursor/0,CaptureKeyboard/0,SetOwnerDraw/1,SetNeedUpdate/1,ProcessEvents/0,DestroyWindow/0,GetVariable/2,GetInvItemProperty/3,HasInvItemProperty/3,SetPlayerHandsItem/1,GetInvItemByName/2
// @STRINGS: W:inventory_base.xml|W:$parent|A:add|A:GetItemCount|W:scrollbar|A:GetItem|A:GetItemID|A:GetItemAmount|W:default|A:IsItemSelected|W:button_weapon|W:button_clothes|W:button_medcine|W:button_food|W:button_other|W:button_detector|W:button_anticeptic|W:noinv_drop|W:money|A:GetProperty|A:SetProperty|W:Organ|A:HasProperty|A:RemoveProperty|W:Category|A:RemoveItem|A:AddItem|W:Weapon|W:slot0|W:slot|W:cslot0|W:cslot|W:Money
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,object,int,int params=0
// @EVENT_15: op=0x160 vars=int,int,float
// @EVENT_100: op=0x245 vars=int
// @EVENT_102: op=0x249 vars=int
// @EVENT_101: op=0x24f vars=int
// @EVENT_1: op=0x306 vars=float
// @EVENT_200: op=0x312 vars=int,string,object
// @PE: 0x3d,0x160,0x173,0x177,0x18e,0x245,0x249,0x24f,0x2f2,0x306,0x390,0x3ba,0x4d1,0x4e1

task_0_event_15(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int, var_5_int, var_6_float)
{
	var_8_bool = var_6_float > (int)0;
	if(var_8_bool != 0) {
	} else {
		var_40_bool = (float)1 < (int)0;
		if(var_40_bool == 0) goto Label_362;
		var_6_float = -1;
	}
Label_362:
	var_2_int = var_2_int + var_6_float;
	var_10_bool = var_2_int < (int)0;
	if(var_10_bool != 0) {
		var_2_int = 0;
	}
	func_411(var_6_float);
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
	func_152(var_4_int, var_5_int);
	return 0;
}


task_0_event_101(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int)
{
	var_6_bool = var_4_int == (int)266;
	if(var_6_bool != 0) {
		var_8_bool = var_0_int == (int)0;
		if(var_8_bool != 0) {
			var_9_int = 0;
			func_912(var_4_int, (int)1);
		} else {
			var_129_bool = var_0_int == (int)1;
			if(var_129_bool != 0) {
				var_130_int = 0;
				func_912(var_4_int, (int)2);
				goto Label_634;
			}
			var_132_bool = var_0_int == (int)2;
			if(var_132_bool != 0) {
				var_133_int = 0;
				func_912(var_4_int, (int)3);
				goto Label_634;
			}
			var_135_bool = var_0_int == (int)3;
			if(var_135_bool != 0) {
				var_136_int = 0;
				func_912(var_4_int, (int)4);
				goto Label_634;
			}
			var_138_bool = var_0_int == (int)4;
			if(var_138_bool == 0) goto Label_634;
			var_139_int = 0;
			func_912(var_4_int, (int)0);
	}
		var_141_bool = var_4_int == (int)265;
		if(var_141_bool == 0) goto Label_677;
		var_143_bool = var_0_int == (int)0;
		if(var_143_bool != 0) {
			var_144_int = 0;
			func_912(var_4_int, (int)4);
			goto Label_677;
		}
		var_146_bool = var_0_int == (int)1;
		if(var_146_bool != 0) {
			var_147_int = 0;
			func_912(var_4_int, (int)0);
			goto Label_677;
		}
		var_149_bool = var_0_int == (int)2;
		if(var_149_bool != 0) {
			var_150_int = 0;
			func_912(var_4_int, (int)1);
			goto Label_677;
		}
		var_152_bool = var_0_int == (int)3;
		if(var_152_bool != 0) {
			var_153_int = 0;
			func_912(var_4_int, (int)2);
			goto Label_677;
		}
		var_155_bool = var_0_int == (int)4;
		if(var_155_bool == 0) goto Label_677;
		var_156_int = 0;
		func_912(var_4_int, (int)3);
	}
Label_634:
	goto Label_677;
	
Label_677:
	var_44_int = 0;
	var_4_int = var_44_int;
	func_72(var_4_int, var_44_int);
	return 0;
	
}


task_0_event_1(var_0_int, var_1_object, var_2_int, var_3_int, var_4_float)
{
	var_5_int = 0;
	var_5_int = var_0_int;
	func_1146(var_5_int);
	func_947();
	func_371();
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
		func_238(var_18_object, var_21_bool, var_22_int, var_23_string, var_24_object);
		var_21_bool = (bool)0;
		return 12;
	}
	var_239_bool = var_5_string == "button_weapon";
	if(var_239_bool != 0) {
		var_240_int = 0;
		func_912(var_18_object, (int)0);
		var_13_bool = 1;
	} else {
		var_248_bool = var_5_string == "button_clothes";
		if(var_248_bool != 0) {
			var_249_int = 0;
			func_912(var_18_object, (int)1);
			var_13_bool = 1;
			goto Label_900;
		}
		var_251_bool = var_5_string == "button_medcine";
		if(var_251_bool != 0) {
			var_252_int = 0;
			func_912(var_18_object, (int)2);
			var_13_bool = 1;
			goto Label_900;
		}
		var_254_bool = var_5_string == "button_food";
		if(var_254_bool != 0) {
			var_255_int = 0;
			func_912(var_18_object, (int)3);
			var_13_bool = 1;
			goto Label_900;
		}
		var_257_bool = var_5_string == "button_other";
		if(var_257_bool != 0) {
			var_258_int = 0;
			func_912(var_18_object, (int)4);
			var_13_bool = 1;
			goto Label_900;
		}
		var_260_bool = var_5_string == "button_detector";
		if(var_260_bool != 0) {
			goto Label_900;
		}
		var_262_bool = var_5_string == "button_anticeptic";
		if(var_262_bool != 0) {
			goto Label_900;
		}
		var_264_bool = var_4_int != (int)0;
		if(var_264_bool != 0) {
			GetVariable("noinv_drop", var_14_int);
			var_266_int = var_14_int;
			if(var_266_int != 0) {
				return 12;
			}
		}

	Label_862:
		var_268_bool = (int)0 < (int)12;
		if(var_268_bool == 0) goto Label_900;
		var_269_string = ""; var_270_int = 0;
		var_15_int = var_270_int;
		func_1233(var_269_string, var_270_int);
		var_281_bool = var_5_string == var_269_string;
		if(var_281_bool != 0) {
			func_232(Obj());
			var_282_object = var_16_object;
			@@var_16_object:GetItemCount(var_17_int, var_0_int);
			var_283_bool = var_17_int > var_15_int;
			if(var_283_bool != 0) {
				@@var_16_object:GetItem(var_18_object, var_15_int, var_0_int);
				var_284_bool = 0; var_285_object = Obj();
				var_18_object = var_285_object;
				func_754(var_285_object);
				var_286_bool = var_284_bool == 0; //@nz
				if(var_286_bool != 0) {
					var_287_bool = 0; var_288_int = 0; var_289_bool = 0;
					var_15_int = var_288_int;
					var_289_bool = var_4_int == (int)0;
					func_398(var_18_object, var_287_bool, var_288_int, var_289_bool);
					var_287_bool = var_13_bool;
				}
				var_18_object = 0;
			}
			goto Label_900;
		EMIT "Stack[-3] = 0";
		}
		var_15_int = var_15_int + (int)1;
		goto Label_862;
	}
Label_900:
	var_241_bool = var_13_bool == 0; //@nz
	if(var_241_bool != 0) {
		var_242_bool = 0; var_243_int = 0; var_244_string = ""; var_245_object = Obj();
		var_4_int = var_243_int;
		var_5_string = var_244_string;
		var_6_object = var_245_object;
		func_238(var_18_object, var_242_bool, var_243_int, var_244_string, var_245_object);
		var_242_bool = var_13_bool;
	}
	var_246_bool = var_13_bool;
	if(var_246_bool != 0) {
	}
	return 12;
	
}


main(var_0_int, var_1_object, var_2_int, var_3_int)
{
	var_4_int = 0; var_5_object = Obj(); var_6_string = ""; var_7_string = ""; var_8_int = 0; var_9_object = Obj(); var_10_string = ""; var_11_string = "";
	CreateWindow("inventory_base.xml", (bool)0, var_1_object);
	func_411(var_11_string);
	var_3_int = 2;
	var_8_int = 0;
	
Label_10:
	var_43_bool = var_8_int < (int)4;
	if(var_43_bool != 0) {
		CreateStringVector(var_9_object);
		var_45_int = var_8_int - (int)1;
		var_47_bool = var_45_int >= (int)0;
		if(var_47_bool != 0) {
			var_48_string = ""; var_49_int = 0;
			var_49_int = var_8_int - (int)1;
			func_1249(var_48_string, var_49_int);
			var_48_string = var_10_string;
		} else {
				var_10_string = "$parent";
	}
			var_72_int = 0;
			func_499(var_11_string, (int)0);
			return 8;
	}
	var_62_int = var_8_int + (int)1;
	var_64_bool = var_62_int < (int)4;
	if(var_64_bool != 0) {
		var_65_string = ""; var_66_int = 0;
		var_66_int = var_8_int + (int)1;
		func_1249(var_65_string, var_66_int);
		var_65_string = var_11_string;
	} else {
		var_11_string = "$parent";

	}
	@@var_9_object:add(var_10_string);
	@@var_9_object:add(var_11_string);
	var_69_string = ""; var_70_int = 0;
	var_8_int = var_70_int;
	func_1249(var_69_string, var_70_int);
	SendMessage((int)-1, var_69_string, var_9_object);
	var_9_object = 0;
	var_8_int = var_8_int + (int)1;
	goto Label_10;
	
}


func_398(var_0_int, var_2_int, var_287_bool, var_288_int)
{
	var_291_bool = 0; var_292_int = 0; var_293_int = 0;
	var_292_int = var_0_int;
	var_288_int = var_293_int;
	func_1096(var_289_bool, var_291_bool, var_292_int, var_293_int);
	var_2_int = var_2_int + (int)1;
	func_411(var_289_bool);
	var_287_bool = 1;
	return 0;
}


func_912(var_0_int, var_77_int)
{
	var_79_bool = var_77_int == (int)-1;
	if(var_79_bool != 0) {
		return 0;
	}
	var_80_bool = var_0_int == var_77_int;
	if(var_80_bool != 0) {
		return 0;
	}
	var_0_int = var_77_int;
	var_81_int = 0;
	var_81_int = var_0_int;
	func_954(var_81_int);
	return 0;
}


func_152(var_3_int, var_5_int)
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0;
	var_15_bool = var_5_int == (int)272;
	if(var_15_bool != 0) {
		var_3_int = 2;

	Label_158:
		var_17_bool = (int)0 < (int)4;
		if(var_17_bool != 0) {
			var_19_string = ""; var_20_int = 0;
			var_10_int = var_20_int;
			func_1249(var_19_string, var_20_int);
			SendMessage((int)-7, var_19_string);
			var_10_int = var_10_int + (int)1;
			goto Label_158;
		}
	}
	var_33_bool = var_5_int == (int)274;
	if(var_33_bool != 0) {
		var_3_int = 0;

	Label_176:
		var_35_bool = (int)0 < (int)12;
		if(var_35_bool != 0) {
			var_37_string = ""; var_38_int = 0;
			var_11_int = var_38_int;
			func_1233(var_37_string, var_38_int);
			SendMessage((int)-7, var_37_string);
			var_11_int = var_11_int + (int)1;
			goto Label_176;
		}
	}
	var_51_bool = var_3_int == (int)0;
	if(var_51_bool != 0) {
		var_52_int = 0;
		var_5_int = var_52_int;
		func_718(var_52_int);
		return 8;
	}
	var_74_bool = var_5_int == (int)273;
	if(var_74_bool != 0) {

	Label_201:
		var_76_bool = (int)0 < (int)4;
		if(var_76_bool != 0) {
			var_78_string = ""; var_79_int = 0;
			var_12_int = var_79_int;
			func_1249(var_78_string, var_79_int);
			SendMessage((int)-2, var_78_string);
			var_12_int = var_12_int + (int)1;
			goto Label_201;
		}
	}
	var_82_bool = var_5_int == (int)271;
	if(var_82_bool != 0) {

	Label_218:
		var_84_bool = (int)0 < (int)4;
		if(var_84_bool != 0) {
			var_86_string = ""; var_87_int = 0;
			var_13_int = var_87_int;
			func_1249(var_86_string, var_87_int);
			SendMessage((int)-3, var_86_string);
			var_13_int = var_13_int + (int)1;
			goto Label_218;
		}
	}
	return 8;
}


func_411(var_2_int)
{
	var_14_object = Obj(); var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_object = Obj(); var_19_int = 0; var_20_int = 0; var_21_int = 0;
	GetContainer(var_18_object);
	@@var_18_object:GetItemCount(var_19_int);
	var_23_bool = var_19_int <= (int)4;
	if(var_23_bool != 0) {
		SendMessage((int)16384, "scrollbar");
		var_2_int = 0;
	} else {
		var_27_int = var_2_int + (int)4;
		var_28_bool = var_27_int > var_19_int;
		if(var_28_bool != 0) {
			var_30_int = var_2_int + (int)4;
			var_31_int = var_30_int - var_19_int;
			var_2_int = var_2_int - var_31_int;
			var_33_float = var_2_int * (int)100;
			var_35_int = var_19_int - (int)4;
			var_20_int = var_33_float / var_35_int;
			SendMessage(var_20_int, "scrollbar");
			goto Label_450;
		}
		var_38_float = var_2_int * (int)100;
		var_40_int = var_19_int - (int)4;
		var_21_int = var_38_float / var_40_int;
		SendMessage(var_21_int, "scrollbar");
	}
Label_450:
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_926(var_177_int)
{
	var_178_object = Obj(); var_179_int = 0; var_180_object = Obj(); var_181_int = 0;
	func_232(Obj());
	var_182_object = var_180_object;
	@@var_180_object:GetProperty("money", var_181_int);
	var_181_int = var_177_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_937(var_182_int)
{
	var_183_object = Obj(); var_184_object = Obj();
	func_232(Obj());
	var_185_object = var_184_object;
	@@var_184_object:SetProperty("money", var_182_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_682(var_91_int)
{
	var_92_int = 0; var_93_int = 0; var_94_int = 0; var_95_int = 0;
	var_97_bool = var_91_int == (int)269;
	if(var_97_bool != 0) {

	Label_687:
		var_99_bool = (int)0 < (int)12;
		if(var_99_bool != 0) {
			var_101_string = ""; var_102_int = 0;
			var_94_int = var_102_int;
			func_1233(var_101_string, var_102_int);
			SendMessage((int)-2, var_101_string);
			var_94_int = var_94_int + (int)1;
			goto Label_687;
		}
	}
	var_105_bool = var_91_int == (int)270;
	if(var_105_bool != 0) {

	Label_704:
		var_107_bool = (int)0 < (int)12;
		if(var_107_bool != 0) {
			var_109_string = ""; var_110_int = 0;
			var_95_int = var_110_int;
			func_1233(var_109_string, var_110_int);
			SendMessage((int)-3, var_109_string);
			var_95_int = var_95_int + (int)1;
			goto Label_704;
		}
	}
	return 4;
}


func_947()
{
	var_177_int = 0;
	func_926(var_177_int);
	SendMessage(var_177_int, "money");
	return 0;
}


func_954(var_81_int)
{
	var_83_bool = var_81_int != (int)0;
	if(var_83_bool != 0) {
		SendMessage((int)0, "button_weapon");
	} else {
						SendMessage((int)1, "button_weapon");
	}
	var_87_bool = var_81_int != (int)1;
	if(var_87_bool != 0) {
		SendMessage((int)0, "button_clothes");
	} else {
					SendMessage((int)1, "button_clothes");

	}
	var_91_bool = var_81_int != (int)2;
	if(var_91_bool != 0) {
		SendMessage((int)0, "button_medcine");
	} else {
				SendMessage((int)1, "button_medcine");

	}
	var_95_bool = var_81_int != (int)3;
	if(var_95_bool != 0) {
		SendMessage((int)0, "button_food");
	} else {
			SendMessage((int)1, "button_food");

	}
	var_99_bool = var_81_int != (int)4;
	if(var_99_bool != 0) {
		SendMessage((int)0, "button_other");
	} else {
		SendMessage((int)1, "button_other");

	}
	return 0;
	
}


func_61()
{
	func_573();
	var_209_string = ""; var_210_int = 0;
	func_1249(var_209_string, (int)0);
	SendMessage((int)-6, var_209_string);
	return 0;
}


func_573()
{
	var_206_string = ""; var_207_int = 0;
	func_1233(var_206_string, (int)0);
	SendMessage((int)-6, var_206_string);
	return 0;
}


func_452(var_2_int)
{
	var_214_object = Obj(); var_215_int = 0; var_216_int = 0; var_217_object = Obj(); var_218_int = 0; var_219_int = 0; var_220_object = Obj(); var_221_int = 0; var_222_int = 0; var_223_object = Obj(); var_224_int = 0; var_225_int = 0;
	GetContainer(var_220_object);
	@@var_220_object:GetItemCount(var_221_int);
	var_222_int = var_2_int;
	
Label_458:
	var_227_int = var_2_int + (int)4;
	var_228_bool = var_222_int < var_227_int;
	if(var_228_bool != 0) {
		var_229_bool = var_222_int < var_221_int;
		if(var_229_bool != 0) {
			@@var_220_object:GetItem(var_223_object, var_222_int);
			@@var_223_object:GetItemID(var_224_int);
			@@var_220_object:GetItemAmount(var_225_int, var_222_int);
			var_231_string = ""; var_232_int = 0;
			var_232_int = var_222_int - var_2_int;
			func_1249(var_231_string, var_232_int);
			SendMessage((int)0, var_231_string, var_223_object);
			var_234_int = var_225_int | (int)65536;
			var_235_string = ""; var_236_int = 0;
			var_236_int = var_222_int - var_2_int;
			func_1249(var_235_string, var_236_int);
			SendMessage(var_234_int, var_235_string);
			var_223_object = 0;
		} else {
			var_239_string = ""; var_240_int = 0;
			var_240_int = var_222_int - var_2_int;
			func_1249(var_239_string, var_240_int);
			SendMessage((int)32768, var_239_string);
	}
		var_222_int = var_222_int + (int)1;
		goto Label_458;
	}
	return 12;
	
}
EMIT "Stack[-6] = 0";


func_1096(var_0_int, var_291_bool, var_292_int, var_293_int)
{
	var_294_object = Obj(); var_295_object = Obj(); var_296_object = Obj(); var_297_int = 0; var_298_int = 0; var_299_bool = 0; var_300_int = 0; var_301_bool = 0; var_302_bool = 0; var_303_object = Obj(); var_304_object = Obj(); var_305_object = Obj(); var_306_int = 0; var_307_int = 0; var_308_bool = 0; var_309_int = 0; var_310_bool = 0; var_311_bool = 0;
	func_232(Obj());
	var_312_object = var_304_object;
	GetContainer(var_303_object);
	@@var_304_object:GetItemCount(var_306_int, var_292_int);
	var_313_bool = var_306_int <= var_293_int;
	if(var_313_bool != 0) {
		var_291_bool = 0;
		return 18;
	}
	@@var_304_object:GetItemAmount(var_307_int, var_293_int, var_292_int);
	@@var_304_object:GetItem(var_305_object, var_293_int, var_292_int);
	@@var_303_object:AddItem(var_308_bool, var_305_object, (int)0, (int)1);
	var_316_bool = var_308_bool == 0; //@nz
	if(var_316_bool != 0) {
		var_291_bool = 0;
		return 18;
	}
	var_318_bool = var_0_int == (int)0;
	if(var_318_bool != 0) {
		@@var_305_object:GetItemID(var_309_int);
		HasInvItemProperty(var_310_bool, var_309_int, "Weapon");
		var_320_bool = var_310_bool;
		if(var_320_bool != 0) {
			@@var_304_object:IsItemSelected(var_311_bool, var_293_int, var_0_int);
			var_321_bool = var_311_bool;
			if(var_321_bool != 0) {
				SetPlayerHandsItem((int)-1);
			}
		}
	}
	@@var_304_object:RemoveItem(var_293_int, (int)1, var_292_int);
	var_291_bool = 1;
	return 18;
}
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


func_72(var_3_int, var_44_int)
{
	var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0;
	var_54_bool = var_44_int == (int)267;
	if(var_54_bool != 0) {
		var_3_int = 2;

	Label_78:
		var_56_bool = (int)0 < (int)4;
		if(var_56_bool != 0) {
			var_58_string = ""; var_59_int = 0;
			var_49_int = var_59_int;
			func_1249(var_58_string, var_59_int);
			SendMessage((int)-7, var_58_string);
			var_49_int = var_49_int + (int)1;
			goto Label_78;
		}
	}
	var_72_bool = var_44_int == (int)268;
	if(var_72_bool != 0) {
		var_3_int = 0;

	Label_96:
		var_74_bool = (int)0 < (int)12;
		if(var_74_bool != 0) {
			var_76_string = ""; var_77_int = 0;
			var_50_int = var_77_int;
			func_1233(var_76_string, var_77_int);
			SendMessage((int)-7, var_76_string);
			var_50_int = var_50_int + (int)1;
			goto Label_96;
		}
	}
	var_90_bool = var_3_int == (int)0;
	if(var_90_bool != 0) {
		var_91_int = 0;
		var_44_int = var_91_int;
		func_682(var_91_int);
		return 8;
	}
	var_113_bool = var_44_int == (int)269;
	if(var_113_bool != 0) {

	Label_121:
		var_115_bool = (int)0 < (int)4;
		if(var_115_bool != 0) {
			var_117_string = ""; var_118_int = 0;
			var_51_int = var_118_int;
			func_1249(var_117_string, var_118_int);
			SendMessage((int)-2, var_117_string);
			var_51_int = var_51_int + (int)1;
			goto Label_121;
		}
	}
	var_121_bool = var_44_int == (int)270;
	if(var_121_bool != 0) {

	Label_138:
		var_123_bool = (int)0 < (int)4;
		if(var_123_bool != 0) {
			var_125_string = ""; var_126_int = 0;
			var_52_int = var_126_int;
			func_1249(var_125_string, var_126_int);
			SendMessage((int)-3, var_125_string);
			var_52_int = var_52_int + (int)1;
			goto Label_138;
		}
	}
	return 8;
}


func_718(var_52_int)
{
	var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0;
	var_58_bool = var_52_int == (int)273;
	if(var_58_bool != 0) {

	Label_723:
		var_60_bool = (int)0 < (int)12;
		if(var_60_bool != 0) {
			var_62_string = ""; var_63_int = 0;
			var_55_int = var_63_int;
			func_1233(var_62_string, var_63_int);
			SendMessage((int)-2, var_62_string);
			var_55_int = var_55_int + (int)1;
			goto Label_723;
		}
	}
	var_66_bool = var_52_int == (int)271;
	if(var_66_bool != 0) {

	Label_740:
		var_68_bool = (int)0 < (int)12;
		if(var_68_bool != 0) {
			var_70_string = ""; var_71_int = 0;
			var_56_int = var_71_int;
			func_1233(var_70_string, var_71_int);
			SendMessage((int)-3, var_70_string);
			var_56_int = var_56_int + (int)1;
			goto Label_740;
		}
	}
	return 4;
}


func_1233(var_147_string, var_148_int)
{
	var_150_int = var_148_int + (int)1;
	var_152_bool = var_150_int < (int)10;
	if(var_152_bool != 0) {
		var_155_int = var_148_int + (int)1;
		var_147_string = "slot0" + var_155_int;
		return 0;
	}
	var_158_int = var_148_int + (int)1;
	var_147_string = "slot" + var_158_int;
	return 0;
}


func_1249(var_48_string, var_49_int)
{
	var_52_int = var_49_int + (int)1;
	var_54_bool = var_52_int < (int)10;
	if(var_54_bool != 0) {
		var_57_int = var_49_int + (int)1;
		var_48_string = "cslot0" + var_57_int;
		return 0;
	}
	var_60_int = var_49_int + (int)1;
	var_48_string = "cslot" + var_60_int;
	return 0;
}


func_232(var_127_object)
{
	var_128_object = Obj(); var_129_object = Obj();
	GetPlayerContainer(var_129_object);
	var_129_object = var_127_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_238(var_2_int, var_3_int, var_21_bool, var_22_int, var_23_string)
{
	var_25_object = Obj(); var_26_int = 0; var_27_int = 0; var_28_object = Obj(); var_29_int = 0; var_30_object = Obj(); var_31_int = 0; var_32_int = 0; var_33_object = Obj(); var_34_int = 0;
	var_36_bool = var_22_int == (int)-4;
	if(var_36_bool != 0) {
		var_37_string = ""; var_38_int = 0;
		func_1249(var_37_string, (int)0);
		var_49_bool = var_23_string == var_37_string;
		if(var_49_bool != 0) {
			var_51_bool = var_2_int > (int)0;
			if(var_51_bool != 0) {
				var_2_int = var_2_int + (int)-1;
				func_452(var_34_int);
				func_411(var_34_int);
			}
		} else {
			var_109_string = ""; var_110_int = 0;
			func_1249(var_109_string, (int)3);
			var_111_bool = var_23_string == var_109_string;
			if(var_111_bool == 0) goto Label_283;
			GetContainer(var_30_object);
			@@var_30_object:GetItemCount(var_31_int);
			var_113_int = var_2_int + (int)4;
			var_114_bool = var_113_int <= var_31_int;
			if(var_114_bool != 0) {
				var_2_int = var_2_int + (int)1;
				func_452(var_34_int);
				func_411(var_34_int);
			}
			var_30_object = 0;
	}
		var_117_bool = var_22_int == (int)-8;
		if(var_117_bool != 0) {
			var_3_int = 0;
			var_21_bool = 1;
			return 10;
		}
		var_119_bool = var_22_int == (int)-9;
		if(var_119_bool != 0) {
			var_3_int = 2;
			var_21_bool = 1;
			return 10;
		}
		var_121_bool = var_22_int < (int)0;
		if(var_121_bool != 0) {
			var_21_bool = 1;
			return 10;
		}

	Label_306:
		var_123_bool = (int)0 < (int)4;
		if(var_123_bool != 0) {
			var_124_string = ""; var_125_int = 0;
			var_32_int = var_125_int;
			func_1249(var_124_string, var_125_int);
			var_126_bool = var_23_string == var_124_string;
			if(var_126_bool != 0) {
				var_127_int = 0; var_128_bool = 0;
				var_32_int = var_127_int;
				var_128_bool = var_22_int == (int)0;
				func_382(var_127_int, var_128_bool);
				var_21_bool = 1;
				var_32_int = var_32_int + (int)1;
				goto Label_306;
			}
			return 10;
		}
		var_229_bool = var_23_string == "scrollbar";
		if(var_229_bool != 0) {
			GetContainer(var_33_object);
			@@var_33_object:GetItemCount(var_34_int);
			var_232_int = var_34_int - (int)4;
			var_233_float = (float)0.009999999776482582 * var_232_int;
			var_234_float = var_233_float * var_22_int;
			var_2_int = var_234_float + (float)0.5;
			var_237_bool = var_2_int < (int)0;
			if(var_237_bool != 0) {
				var_2_int = 0;
			}
			func_452(var_34_int);
			var_21_bool = 1;
			return 10;
		EMIT "Stack[-2] = 0";
		}
		var_21_bool = 0;
		return 10;
	}
Label_283:
	SendMessage((int)-4, var_23_string);
	var_21_bool = 1;
	return 10;
	
}


func_1265(var_170_int)
{
	var_171_int = 0; var_172_int = 0;
	GetInvItemByName(var_172_int, "Money");
	var_172_int = var_170_int;
	return 2;
}


func_754(var_142_bool)
{
	var_142_bool = 0;
	return 0;
}


func_499(var_0_int, var_72_int)
{
	var_73_int = 0; var_74_object = Obj(); var_75_int = 0; var_76_object = Obj();
	var_77_int = 0;
	var_72_int = var_77_int;
	func_912(var_76_object, var_77_int);
	var_112_int = 0;
	var_112_int = (int)-1;
	func_1146(var_112_int);
	func_947();
	var_75_int = 0;
	
Label_513:
	var_186_bool = var_75_int < (int)12;
	if(var_186_bool != 0) {
		CreateStringVector(var_76_object);
		var_187_string = ""; var_188_int = 0;
		var_190_int = var_75_int + (int)12;
		var_192_int = var_190_int - (int)1;
		var_188_int = var_192_int % (int)12;
		func_1233(var_187_string, var_188_int);
		@@var_76_object:add(var_187_string);
		var_194_string = ""; var_195_int = 0;
		var_197_int = var_75_int + (int)12;
		var_199_int = var_197_int + (int)1;
		var_195_int = var_199_int % (int)12;
		func_1233(var_194_string, var_195_int);
		@@var_76_object:add(var_194_string);
		var_202_string = ""; var_203_int = 0;
		var_75_int = var_203_int;
		func_1233(var_202_string, var_203_int);
		SendMessage((int)-1, var_202_string, var_76_object);
		var_76_object = 0;
		var_75_int = var_75_int + (int)1;
		goto Label_513;
	}
	func_61();
	SetCursor("default");
	ShowCursor();
	CaptureKeyboard();
	SetOwnerDraw((bool)0);
	SetNeedUpdate((bool)1);
	func_375();
	ProcessEvents();
	return 4;
}


func_371()
{
	func_452(var_4_float);
	return 0;
}


func_757(var_133_bool, var_134_int, var_135_int)
{
	var_136_bool = 0; var_137_bool = 0;
	var_138_object = Obj();
	func_232(var_138_object);
	func_232(Obj());
	func_232(Obj());
	func_232(Obj());
	@@var_138_object:IsItemSelected(var_137_bool, var_134_int, var_135_int);
	var_137_bool = var_133_bool;
	return 2;
}


func_375()
{
	func_411(var_76_object);
	func_452(var_76_object);
	return 0;
}


func_1016(var_133_int, var_134_bool, var_135_int)
{
	var_136_object = Obj(); var_137_object = Obj(); var_138_object = Obj(); var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_int = 0; var_145_bool = 0; var_146_bool = 0; var_147_object = Obj(); var_148_object = Obj(); var_149_object = Obj(); var_150_int = 0; var_151_int = 0; var_152_int = 0; var_153_bool = 0; var_154_int = 0; var_155_int = 0; var_156_bool = 0; var_157_bool = 0;
	var_134_bool = 0;
	var_159_bool = var_135_int == (int)-1;
	if(var_159_bool != 0) {
		var_133_int = -1;
		return 22;
	}
	func_232(Obj());
	var_160_object = var_148_object;
	GetContainer(var_147_object);
	@@var_147_object:GetItemCount(var_150_int);
	var_163_bool = var_150_int <= var_135_int;
	if(var_163_bool != 0) {
		var_133_int = -1;
		return 22;
	}
	@@var_147_object:GetItemAmount(var_151_int, var_135_int);
	var_165_bool = var_151_int == (int)0;
	if(var_165_bool != 0) {
		var_133_int = -1;
		return 22;
	}
	@@var_147_object:GetItem(var_149_object, var_135_int);
	@@var_149_object:GetItemID(var_152_int);
	var_153_bool = 0;
	@@var_149_object:HasProperty(var_153_bool, "Organ");
	var_167_bool = var_153_bool;
	if(var_167_bool != 0) {
		@@var_149_object:RemoveProperty("Organ");
	}
	GetInvItemProperty(var_154_int, var_152_int, "Category");
	var_170_int = 0;
	func_1265(var_170_int);
	var_174_bool = var_152_int == var_170_int;
	if(var_174_bool != 0) {
		func_926((int)0);
		var_175_int = var_155_int;
		var_155_int = var_155_int + var_151_int;
		var_182_int = 0;
		var_155_int = var_182_int;
		func_937(var_182_int);
		@@var_147_object:RemoveItem(var_135_int, var_151_int);
		func_947();
		var_134_bool = 1;
		var_133_int = -1;
		return 22;
	}
	@@var_148_object:AddItem(var_157_bool, var_149_object, var_154_int, (int)1);
	var_190_bool = var_157_bool == 0; //@nz
	if(var_190_bool != 0) {
		var_154_int = var_133_int;
		return 22;
	}
	var_134_bool = 1;
	@@var_147_object:RemoveItem(var_135_int, (int)1);
	var_154_int = var_133_int;
	return 22;
}
EMIT "Stack[-9] = 0";
EMIT "Stack[-10] = 0";
EMIT "Stack[-11] = 0";


func_1146(var_112_int)
{
	var_113_object = Obj(); var_114_int = 0; var_115_int = 0; var_116_object = Obj(); var_117_int = 0; var_118_bool = 0; var_119_bool = 0; var_120_object = Obj(); var_121_int = 0; var_122_int = 0; var_123_object = Obj(); var_124_int = 0; var_125_bool = 0; var_126_bool = 0;
	func_232(Obj());
	var_127_object = var_120_object;
	@@var_120_object:GetItemCount(var_121_int, var_112_int);
	var_122_int = 0;
	
Label_1154:
	var_131_bool = var_122_int < (int)12;
	if(var_131_bool != 0) {
		var_132_bool = var_122_int < var_121_int;
		if(var_132_bool != 0) {
			@@var_120_object:GetItem(var_123_object, var_122_int, var_112_int);
			@@var_120_object:GetItemAmount(var_124_int, var_122_int, var_112_int);
			var_133_bool = 0; var_134_int = 0; var_135_int = 0;
			var_122_int = var_134_int;
			var_112_int = var_135_int;
			func_757(var_133_bool, var_134_int, var_135_int);
			var_133_bool = var_125_bool;
			var_142_bool = 0; var_143_object = Obj();
			var_123_object = var_143_object;
			func_754(var_143_object);
			var_142_bool = var_126_bool;
			var_144_bool = var_125_bool;
			if(var_144_bool != 0) {
				var_145_bool = var_126_bool;
				if(var_145_bool != 0) {
					var_147_string = ""; var_148_int = 0;
					var_122_int = var_148_int;
					func_1233(var_147_string, var_148_int);
					SendMessage((int)0, var_147_string, var_123_object);
				} else {
					var_165_string = ""; var_166_int = 0;
					var_122_int = var_166_int;
					func_1233(var_165_string, var_166_int);
					SendMessage((int)16384, var_165_string, var_123_object);
			}
				var_167_bool = var_126_bool;
				if(var_167_bool != 0) {
					var_169_string = ""; var_170_int = 0;
					var_122_int = var_170_int;
					func_1233(var_169_string, var_170_int);
					SendMessage((int)131072, var_169_string, var_123_object);
					goto Label_1211;
				}
				var_172_string = ""; var_173_int = 0;
				var_122_int = var_173_int;
				func_1233(var_172_string, var_173_int);
				SendMessage((int)0, var_172_string, var_123_object);
		}
			var_175_string = ""; var_176_int = 0;
			var_122_int = var_176_int;
			func_1233(var_175_string, var_176_int);
			SendMessage((int)32768, var_175_string);
	}
		goto Label_1211;
		var_160_int = var_124_int | (int)65536;
		var_161_string = ""; var_162_int = 0;
		var_122_int = var_162_int;
		func_1233(var_161_string, var_162_int);
		SendMessage(var_160_int, var_161_string);
		var_123_object = 0;
		goto Label_1228;
		var_122_int = var_122_int + (int)1;
		goto Label_1154;
	}
	return 14;
	
}
EMIT "Stack[-7] = 0";


func_382(var_2_int, var_127_int)
{
	var_130_bool = 0; var_131_bool = 0;
	var_132_int = 0;
	var_133_int = 0; var_134_bool = 0; var_135_int = 0;
	var_131_bool = var_134_bool;
	var_135_int = var_127_int + var_2_int;
	func_1016(var_133_int, var_134_bool, var_135_int);
	var_133_int = var_132_int;
	func_912(var_131_bool, var_132_int);
	var_226_bool = var_131_bool == 0; //@nz
	if(var_226_bool != 0) {
	}
	func_411(var_131_bool);
	return 2;
}


