// @IMPORTS: GetContainer/1,CreateObjectVector/1,CreateIntVector/1,GetGameTime/1,ShowCursor/0,SetCursor/1,CaptureKeyboard/0,ProcessEvents/0,DestroyWindow/0,GetPlayerMoneyCount/1,SendMessage/2,SendMessage/3,GetPlayerContainer/1,Trace/1,SetPlayerMoneyCount/1,HasInvItemProperty/3,GetInvItemProperty/3,GetItemMaxStackSize/2
// @STRINGS: A:size|A:get|A:remove|A:add|W:default|W:cancel_button|W:l_scroll_button_top|W:l_scroll_button_bottom|W:r_scroll_button_top|W:r_scroll_button_bottom|W:l_scrollbar|W:r_scrollbar|W:ok_button|A:clear|W:r_money_slot|W:l_money_slot|W:Error: failed to remove item|W:Error: failed to add item|A:set|W:l_slot0|W:l_slot|W:r_slot0|W:r_slot|W:sellf|A:HasProperty|A:GetProperty|W:buyf|W:barter|W:Price|W:Item with id :|W: doesn't have price|W:BarterPrice|A:GetItemID|W:Category|A:GetItemCount|A:GetItem|A:GetItemAmount|A:RemoveItem|A:AddItem
// @RUN_OP: 0x30
// @RUN_TASK: 0
// @TASK_0: vars=int,int,int,int,object,object,object,object,object,object,object,object,object,object,object,object,object,object,object,object,object,object,object,object,int,int,object params=0
// @EVENT_100: op=0x6e vars=int
// @EVENT_200: op=0x72 vars=int,string,object
// @PE: 0x6e,0x3e9,0x51d,0x52d,0x62c,0x637

task_0_event_100(var_0_int, var_1_int, var_2_int, var_3_int, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_int, var_25_int, var_26_object, var_27_int)
{
	DestroyWindow();
	return 0;
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object)
{
	var_30_int = 0; var_31_int = 0;
	var_32_int = 0; var_33_int = 0; var_34_string = "";
	var_27_int = var_33_int;
	var_28_string = var_34_string;
	func_1341(var_33_int, var_34_string);
	var_32_int = var_31_int;
	var_54_bool = var_31_int != (int)-1;
	if(var_54_bool != 0) {
		var_56_bool = var_27_int == (int)0;
		if(var_56_bool != 0) {
			var_57_int = 0;
			var_31_int = var_57_int;
			func_1011(var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_57_int);
		} else {
			var_383_int = 0;
			var_31_int = var_383_int;
			func_1077(var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_383_int);
	}
		var_477_int = 0; var_478_int = 0; var_479_string = "";
		var_27_int = var_478_int;
		var_28_string = var_479_string;
		func_1359(var_478_int, var_479_string);
		var_477_int = var_31_int;
		var_489_bool = var_31_int != (int)-1;
		if(var_489_bool != 0) {
			var_491_bool = var_27_int == (int)0;
			if(var_491_bool != 0) {
				var_492_int = 0;
				var_31_int = var_492_int;
				func_1141(var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_492_int);
			} else {
				var_542_int = 0;
				var_31_int = var_542_int;
				func_1204(var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_542_int);
		}
			var_587_bool = var_28_string == "cancel_button";
			if(var_587_bool != 0) {
				func_242(var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int);
				return 2;
			}
			var_704_bool = var_28_string == "l_scroll_button_top";
			if(var_704_bool != 0) {
				var_0_int = var_0_int - (int)2;
				func_521(var_29_object, var_30_int, var_31_int);
				return 2;
			}
			var_707_bool = var_28_string == "l_scroll_button_bottom";
			if(var_707_bool != 0) {
				var_0_int = var_0_int + (int)2;
				func_521(var_29_object, var_30_int, var_31_int);
				return 2;
			}
			var_710_bool = var_28_string == "r_scroll_button_top";
			if(var_710_bool != 0) {
				var_1_int = var_1_int - (int)2;
				func_604(var_28_string, var_29_object, var_30_int, var_31_int);
				return 2;
			}
			var_713_bool = var_28_string == "r_scroll_button_bottom";
			if(var_713_bool != 0) {
				func_604(var_28_string, var_29_object, var_30_int, var_31_int);
				return 2;
			}
			var_715_bool = var_28_string == "l_scrollbar";
			if(var_715_bool != 0) {
				var_716_int = 0;
				func_485(var_31_int, var_716_int);
				var_730_float = var_716_int * var_27_int;
				var_732_float = var_730_float / (float)100.0;
				var_0_int = var_732_float + (float)0.5;
				var_0_int = var_0_int * (int)2;
				func_521(var_29_object, var_30_int, var_31_int);
				return 2;
			}
			var_736_bool = var_28_string == "r_scrollbar";
			if(var_736_bool != 0) {
				var_737_int = 0;
				func_503(var_31_int, var_737_int);
				var_751_float = var_737_int * var_27_int;
				var_753_float = var_751_float / (float)100.0;
				var_1_int = var_753_float + (float)0.5;
				var_1_int = var_1_int * (int)2;
				func_604(var_28_string, var_29_object, var_30_int, var_31_int);
				return 2;
			}
			var_757_bool = var_28_string == "ok_button";
			if(var_757_bool != 0) {
				func_698(var_27_int, var_28_string, var_29_object, var_30_int, var_31_int);
				return 2;
			}
			return 2;
		}
		return 2;
	}
	return 2;
	
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_int, var_25_int, var_26_object)
{
	var_27_float = 0; var_28_float = 0;
	GetContainer(var_26_object);
	CreateObjectVector(var_20_object);
	CreateObjectVector(var_21_object);
	CreateObjectVector(var_4_object);
	CreateIntVector(var_5_object);
	CreateIntVector(var_6_object);
	CreateObjectVector(var_7_object);
	CreateIntVector(var_8_object);
	CreateIntVector(var_9_object);
	CreateObjectVector(var_10_object);
	CreateIntVector(var_11_object);
	CreateObjectVector(var_12_object);
	CreateIntVector(var_13_object);
	CreateObjectVector(var_14_object);
	CreateIntVector(var_15_object);
	CreateObjectVector(var_16_object);
	CreateIntVector(var_17_object);
	CreateObjectVector(var_18_object);
	CreateIntVector(var_19_object);
	var_29_int = 0;
	func_1429(var_29_int);
	var_25_int = var_29_int;
	func_242(var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_int, var_25_int, var_26_object, var_27_float, var_28_float);
	GetGameTime(var_28_float);
	var_322_float = var_28_float / (int)24;
	var_24_int = (int)1 + var_322_float;
	ShowCursor();
	SetCursor("default");
	CaptureKeyboard();
	ProcessEvents();
	return 2;
}


func_0(var_20_object, var_21_object, var_235_object)
{
	var_236_int = 0; var_237_object = Obj(); var_238_int = 0; var_239_int = 0; var_240_object = Obj(); var_241_int = 0;
	@@@var_21_object:size(var_239_int);
	var_241_int = 0;
	
Label_4:
	var_242_bool = var_241_int < var_239_int;
	if(var_242_bool != 0) {
		@@@var_21_object:get(var_240_object, var_241_int);
		var_243_bool = 0; var_244_object = Obj(); var_245_object = Obj();
		var_240_object = var_244_object;
		var_235_object = var_245_object;
		func_1580(var_243_bool, var_244_object, var_245_object);
		if(var_243_bool != 0) {
			@@@var_21_object:remove(var_241_int);
			var_241_int = var_241_int + (int)1;
			goto Label_4;
		}
		return 6;
	}
	@@@var_20_object:add(var_235_object);
	return 6;
}
EMIT "Stack[-2] = 0";


func_1538(var_82_int, var_83_int)
{
	var_84_int = 0; var_85_object = Obj(); var_86_int = 0; var_87_object = Obj();
	GetPlayerContainer(var_87_object);
	@@var_87_object:GetItemCount(var_86_int, var_83_int);
	var_86_int = var_82_int;
	return 4;
}
EMIT "Stack[-1] = 0";


func_1283(var_0_int, var_9_object, var_168_int, var_169_int)
{
	var_170_int = 0; var_171_int = 0; var_172_int = 0; var_173_int = 0;
	@@@var_9_object:size(var_172_int);
	var_174_int = var_169_int + var_0_int;
	var_175_bool = var_174_int >= var_172_int;
	if(var_175_bool != 0) {
		var_168_int = 0;
		return 4;
	}
	var_176_int = var_169_int + var_0_int;
	@@@var_9_object:get(var_173_int, var_176_int);
	var_173_int = var_168_int;
	return 4;
}


func_521(var_0_int, var_7_object, var_25_int)
{
	var_142_int = 0; var_143_int = 0; var_144_int = 0; var_145_object = Obj(); var_146_int = 0; var_147_int = 0; var_148_int = 0; var_149_int = 0; var_150_object = Obj(); var_151_int = 0;
	@@@var_7_object:size(var_147_int);
	var_153_int = var_0_int + (int)18;
	var_154_bool = var_153_int > var_147_int;
	if(var_154_bool != 0) {
		var_156_int = var_147_int % (int)2;
		var_158_bool = var_156_int == (int)0;
		if(var_158_bool != 0) {
			var_160_int = var_0_int + (int)18;
			var_161_int = var_160_int - var_147_int;
			var_0_int = var_0_int - var_161_int;
		} else {
				var_231_int = var_0_int + (int)18;
				var_232_int = var_231_int - var_147_int;
				var_234_int = var_232_int - (int)1;
				var_0_int = var_0_int - var_234_int;
		}
	}
	var_163_bool = var_0_int < (int)0;
	if(var_163_bool != 0) {
		var_0_int = 0;
	}
	var_149_int = var_0_int;
	
Label_549:
	var_165_int = var_0_int + (int)18;
	var_166_bool = var_149_int < var_165_int;
	if(var_166_bool != 0) {
		var_167_bool = var_149_int < var_147_int;
		if(var_167_bool != 0) {
			@@@var_7_object:get(var_150_object, var_149_int);
			var_168_int = 0; var_169_int = 0;
			var_169_int = var_149_int - var_0_int;
			func_1283(var_150_object, var_151_int, var_168_int, var_169_int);
			var_168_int = var_151_int;
			var_178_bool = var_151_int > (int)0;
			if(var_178_bool != 0) {
				(int)0 = (int)0 | (int)16384;
			}
			var_180_bool = 0; var_181_object = Obj(); var_182_int = 0; var_183_bool = 0;
			var_150_object = var_181_object;
			var_182_int = var_25_int;
			func_1602(var_180_bool, var_181_object, var_182_int, (bool)0);
			if(var_180_bool != 0) {
				var_148_int = var_148_int | (int)131072;
			}
			var_211_int = var_151_int | (int)65536;
			var_212_string = ""; var_213_int = 0;
			var_213_int = var_149_int - var_0_int;
			func_1309(var_212_string, var_213_int);
			SendMessage(var_211_int, var_212_string);
			var_224_string = ""; var_225_int = 0;
			var_225_int = var_149_int - var_0_int;
			func_1309(var_224_string, var_225_int);
			SendMessage(var_148_int, var_224_string, var_150_object);
			var_150_object = 0;
		} else {
			var_228_string = ""; var_229_int = 0;
			var_229_int = var_149_int - var_0_int;
			func_1309(var_228_string, var_229_int);
			SendMessage((int)32768, var_228_string);
	}
		var_149_int = var_149_int + (int)1;
		goto Label_549;
	}
	return 10;
	
}


func_393(var_7_object, var_8_object, var_9_object)
{
	var_43_int = 0; var_44_int = 0; var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0;
	func_1530((int)0);
	var_53_int = var_48_int;
	
Label_399:
	var_58_bool = (int)0 < var_48_int;
	if(var_58_bool != 0) {
		var_59_int = 0; var_60_int = 0;
		var_52_int = var_60_int;
		func_1572(var_59_int, var_60_int);
		var_59_int = var_49_int;
		var_65_object = Obj(); var_66_int = 0;
		var_52_int = var_66_int;
		func_1563(var_65_object, var_66_int);
		var_65_object = var_51_object;
		@@@var_7_object:add(var_51_object);
		@@@var_8_object:add(var_49_int);
		@@@var_9_object:add((int)0);
		var_52_int = var_52_int + (int)1;
		goto Label_399;
	}
	return 10;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1546(var_96_object, var_97_int, var_98_int)
{
	var_99_object = Obj(); var_100_object = Obj(); var_101_object = Obj(); var_102_object = Obj();
	GetPlayerContainer(var_101_object);
	@@var_101_object:GetItem(var_102_object, var_98_int, var_97_int);
	var_102_object = var_96_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1677(var_793_bool, var_794_object, var_795_object, var_796_int)
{
	var_797_bool = 0; var_798_bool = 0;
	@@var_794_object:AddItem(var_798_bool, var_795_object, var_796_int, (int)1);
	var_798_bool = var_793_bool;
	return 2;
}


func_1296(var_1_int, var_6_object, var_264_int, var_265_int)
{
	var_266_int = 0; var_267_int = 0; var_268_int = 0; var_269_int = 0;
	@@@var_6_object:size(var_268_int);
	var_270_int = var_265_int + var_1_int;
	var_271_bool = var_270_int >= var_268_int;
	if(var_271_bool != 0) {
		var_264_int = 0;
		return 4;
	}
	var_272_int = var_265_int + var_1_int;
	@@@var_6_object:get(var_269_int, var_272_int);
	var_269_int = var_264_int;
	return 4;
}


func_914(var_174_bool, var_175_object, var_176_object, var_177_object)
{
	var_178_int = 0; var_179_object = Obj(); var_180_int = 0; var_181_int = 0; var_182_int = 0; var_183_object = Obj(); var_184_int = 0; var_185_int = 0;
	@@var_176_object:size(var_182_int);
	var_186_int = 0; var_187_object = Obj();
	var_175_object = var_187_object;
	func_1521(var_186_int, var_187_object);
	var_193_bool = var_186_int > (int)1;
	if(var_193_bool != 0) {
		var_184_int = 0;

	Label_925:
		var_194_bool = var_184_int < var_182_int;
		if(var_194_bool != 0) {
			@@var_176_object:get(var_183_object, var_184_int);
			@@var_177_object:get(var_185_int, var_184_int);
			var_195_bool = 0; var_196_object = Obj(); var_197_object = Obj();
			var_175_object = var_196_object;
			var_183_object = var_197_object;
			func_1591(var_195_bool, var_196_object, var_197_object);
			if(var_195_bool != 0) {
				var_202_int = 0; var_203_object = Obj();
				var_175_object = var_203_object;
				func_1521(var_202_int, var_203_object);
				var_204_bool = var_185_int < var_202_int;
				if(var_204_bool != 0) {
					var_206_int = var_185_int + (int)1;
					@@var_177_object:set(var_184_int, var_206_int);
				}
				var_174_bool = 1;
				var_184_int = var_184_int + (int)1;
				goto Label_925;
			}
			return 8;
		}
	}
	var_209_bool = var_182_int < (int)12;
	if(var_209_bool != 0) {
		@@var_176_object:add(var_175_object);
		@@var_177_object:add((int)1);
		var_174_bool = 1;
		return 8;
	}
	var_174_bool = 0;
	return 8;
}
EMIT "Stack[-3] = 0";


func_1555(var_89_int, var_90_int, var_91_int)
{
	var_92_object = Obj(); var_93_int = 0; var_94_object = Obj(); var_95_int = 0;
	GetPlayerContainer(var_94_object);
	@@var_94_object:GetItemAmount(var_95_int, var_91_int, var_90_int);
	var_95_int = var_89_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1429(var_29_int)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_int = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0;
	GetContainer(var_33_object);
	@@var_33_object:HasProperty("barter", var_34_bool);
	var_37_bool = var_34_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_29_int = 0;
		return 6;
	}
	@@var_33_object:GetProperty("barter", var_35_int);
	var_35_int = var_29_int;
	return 6;
}
EMIT "Stack[-3] = 0";


func_792(var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_161_bool, var_162_object)
{
	var_163_int = 0; var_164_int = 0;
	var_165_int = 0; var_166_object = Obj();
	var_162_object = var_166_object;
	func_1511(var_165_int, var_166_object);
	var_165_int = var_164_int;
	var_173_bool = var_164_int == (int)0;
	if(var_173_bool != 0) {
		var_174_bool = 0; var_175_object = Obj(); var_176_object = Obj(); var_177_object = Obj();
		var_162_object = var_175_object;
		var_176_object = var_10_object;
		var_177_object = var_11_object;
		func_914(var_174_bool, var_175_object, var_176_object, var_177_object);
		var_174_bool = var_161_bool;
		return 2;
	EMIT "GOTO 0x34d";
	}
	var_212_bool = var_164_int == (int)1;
	if(var_212_bool != 0) {
		var_213_bool = 0; var_214_object = Obj(); var_215_object = Obj(); var_216_object = Obj();
		var_162_object = var_214_object;
		var_215_object = var_12_object;
		var_216_object = var_13_object;
		func_914(var_213_bool, var_214_object, var_215_object, var_216_object);
		var_213_bool = var_161_bool;
		return 2;
	EMIT "GOTO 0x34d";
	}
	var_218_bool = var_164_int == (int)2;
	if(var_218_bool != 0) {
		var_219_bool = 0; var_220_object = Obj(); var_221_object = Obj(); var_222_object = Obj();
		var_162_object = var_220_object;
		var_221_object = var_14_object;
		var_222_object = var_15_object;
		func_914(var_219_bool, var_220_object, var_221_object, var_222_object);
		var_219_bool = var_161_bool;
		return 2;
	EMIT "GOTO 0x34d";
	}
	var_224_bool = var_164_int == (int)3;
	if(var_224_bool != 0) {
		var_225_bool = 0; var_226_object = Obj(); var_227_object = Obj(); var_228_object = Obj();
		var_162_object = var_226_object;
		var_227_object = var_16_object;
		var_228_object = var_17_object;
		func_914(var_225_bool, var_226_object, var_227_object, var_228_object);
		var_225_bool = var_161_bool;
		return 2;
	}
	var_229_bool = 0; var_230_object = Obj(); var_231_object = Obj(); var_232_object = Obj();
	var_162_object = var_230_object;
	var_231_object = var_18_object;
	var_232_object = var_19_object;
	func_914(var_229_bool, var_230_object, var_231_object, var_232_object);
	var_229_bool = var_161_bool;
	return 2;
}


func_24(var_20_object, var_21_object, var_455_object)
{
	var_456_int = 0; var_457_object = Obj(); var_458_int = 0; var_459_int = 0; var_460_object = Obj(); var_461_int = 0;
	@@@var_20_object:size(var_459_int);
	var_461_int = 0;
	
Label_28:
	var_462_bool = var_461_int < var_459_int;
	if(var_462_bool != 0) {
		@@@var_20_object:get(var_460_object, var_461_int);
		var_463_bool = 0; var_464_object = Obj(); var_465_object = Obj();
		var_460_object = var_464_object;
		var_455_object = var_465_object;
		func_1580(var_463_bool, var_464_object, var_465_object);
		if(var_463_bool != 0) {
			@@@var_20_object:remove(var_461_int);
			var_461_int = var_461_int + (int)1;
			goto Label_28;
		}
		return 6;
	}
	@@@var_21_object:add(var_455_object);
	return 6;
}
EMIT "Stack[-2] = 0";


func_1563(var_65_object, var_66_int)
{
	var_67_object = Obj(); var_68_object = Obj(); var_69_object = Obj(); var_70_object = Obj();
	GetContainer(var_69_object);
	@@var_69_object:GetItem(var_70_object, var_66_int);
	var_70_object = var_65_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1309(var_212_string, var_213_int)
{
	var_215_int = var_213_int + (int)1;
	var_217_bool = var_215_int < (int)10;
	if(var_217_bool != 0) {
		var_220_int = var_213_int + (int)1;
		var_212_string = "l_slot0" + var_220_int;
		return 0;
	}
	var_223_int = var_213_int + (int)1;
	var_212_string = "l_slot" + var_223_int;
	return 0;
}


func_1572(var_59_int, var_60_int)
{
	var_61_object = Obj(); var_62_int = 0; var_63_object = Obj(); var_64_int = 0;
	GetContainer(var_63_object);
	@@var_63_object:GetItemAmount(var_64_int, var_60_int);
	var_64_int = var_59_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1445(var_103_int, var_104_object, var_105_int)
{
	var_106_bool = 0; var_107_int = 0; var_108_bool = 0; var_109_int = 0; var_110_bool = 0; var_111_int = 0; var_112_bool = 0; var_113_int = 0;
	var_115_bool = var_105_int == (int)0;
	if(var_115_bool != 0) {
		var_116_int = 0; var_117_object = Obj();
		var_104_object = var_117_object;
		func_1506(var_116_int, var_117_object);
		HasInvItemProperty(var_110_bool, var_116_int, "Price");
		var_119_bool = var_110_bool == 0; //@nz
		if(var_119_bool != 0) {
			var_121_int = 0; var_122_object = Obj();
			var_104_object = var_122_object;
			func_1506(var_121_int, var_122_object);
			var_123_int = "Item with id :" + var_121_int;
			var_125_int = var_123_int + " doesn't have price";
			Trace(var_125_int);
			var_103_int = 1;
			return 8;
		}
		var_126_int = 0; var_127_object = Obj();
		var_104_object = var_127_object;
		func_1506(var_126_int, var_127_object);
		GetInvItemProperty(var_111_int, var_126_int, "Price");
		var_111_int = var_103_int;
		return 8;
	}
	var_129_int = 0; var_130_object = Obj();
	var_104_object = var_130_object;
	func_1506(var_129_int, var_130_object);
	var_132_int = "BarterPrice" + var_105_int;
	HasInvItemProperty(var_112_bool, var_129_int, var_132_int);
	var_133_bool = var_112_bool == 0; //@nz
	if(var_133_bool != 0) {
		return 8;
	}
	var_134_int = 0; var_135_object = Obj();
	var_104_object = var_135_object;
	func_1506(var_134_int, var_135_object);
	var_137_int = "BarterPrice" + var_105_int;
	GetInvItemProperty(var_113_int, var_134_int, var_137_int);
	var_139_bool = var_113_int > (int)0;
	if(var_139_bool != 0) {
		var_113_int = (int)0;
		return 8;
	}
	var_103_int = -var_113_int;
	return 8;
}


func_424(var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object)
{
	var_109_int = 0; var_110_object = Obj(); var_111_object = Obj();
	var_110_object = var_10_object;
	var_111_object = var_11_object;
	func_455((int)0, var_110_object, var_111_object);
	var_130_int = 0; var_131_object = Obj(); var_132_object = Obj();
	var_131_object = var_12_object;
	var_132_object = var_13_object;
	func_455((int)1, var_131_object, var_132_object);
	var_133_int = 0; var_134_object = Obj(); var_135_object = Obj();
	var_134_object = var_14_object;
	var_135_object = var_15_object;
	func_455((int)2, var_134_object, var_135_object);
	var_136_int = 0; var_137_object = Obj(); var_138_object = Obj();
	var_137_object = var_16_object;
	var_138_object = var_17_object;
	func_455((int)3, var_137_object, var_138_object);
	var_139_int = 0; var_140_object = Obj(); var_141_object = Obj();
	var_140_object = var_18_object;
	var_141_object = var_19_object;
	func_455((int)4, var_140_object, var_141_object);
	return 0;
}


func_1580(var_243_bool, var_244_object, var_245_object)
{
	var_246_int = 0; var_247_object = Obj();
	var_244_object = var_247_object;
	func_1506(var_246_int, var_247_object);
	var_248_int = 0; var_249_object = Obj();
	var_245_object = var_249_object;
	func_1506(var_248_int, var_249_object);
	var_243_bool = var_246_int == var_248_int;
	return 0;
}


func_1325(var_284_string, var_285_int)
{
	var_287_int = var_285_int + (int)1;
	var_289_bool = var_287_int < (int)10;
	if(var_289_bool != 0) {
		var_292_int = var_285_int + (int)1;
		var_284_string = "r_slot0" + var_292_int;
		return 0;
	}
	var_295_int = var_285_int + (int)1;
	var_284_string = "r_slot" + var_295_int;
	return 0;
}


func_690(var_2_int)
{
	SendMessage(var_2_int, "r_money_slot");
	return 0;
}


func_1204(var_1_int, var_2_int, var_4_object, var_5_object, var_6_object, var_24_int, var_25_int, var_26_object, var_542_int)
{
	var_543_int = 0; var_544_object = Obj(); var_545_int = 0; var_546_int = 0; var_547_int = 0; var_548_int = 0; var_549_object = Obj(); var_550_int = 0; var_551_int = 0; var_552_int = 0;
	@@@var_6_object:size(var_548_int);
	var_553_int = var_542_int + var_1_int;
	var_554_bool = var_553_int >= var_548_int;
	if(var_554_bool != 0) {
		return 10;
	}
	var_555_int = var_542_int + var_1_int;
	@@@var_4_object:get(var_549_object, var_555_int);
	var_556_bool = 0; var_557_object = Obj(); var_558_int = 0; var_559_bool = 0;
	var_549_object = var_557_object;
	var_558_int = var_25_int;
	func_1602(var_556_bool, var_557_object, var_558_int, (bool)1);
	if(var_556_bool != 0) {
		return 10;
	}
	var_560_int = var_542_int + var_1_int;
	@@@var_6_object:get(var_550_int, var_560_int);
	var_561_int = var_542_int + var_1_int;
	@@@var_5_object:get(var_551_int, var_561_int);
	var_563_bool = var_550_int > (int)0;
	if(var_563_bool != 0) {
		var_564_int = 0; var_565_object = Obj(); var_566_int = 0;
		var_549_object = var_565_object;
		var_566_int = var_25_int;
		func_1445(var_564_int, var_565_object, var_566_int);
		var_567_float = 0; var_568_object = Obj(); var_569_int = 0; var_570_int = 0;
		var_568_object = var_26_object;
		var_569_int = var_24_int;
		var_570_int = var_25_int;
		func_1377(var_567_float, var_568_object, var_569_int, var_570_int);
		var_552_int = var_564_int * var_567_float;
		var_571_bool = var_552_int <= var_2_int;
		if(var_571_bool != 0) {
			var_572_bool = 0; var_573_object = Obj();
			var_549_object = var_573_object;
			func_792(var_543_int, var_544_object, var_545_int, var_546_int, var_547_int, var_548_int, var_549_object, var_550_int, var_551_int, var_552_int, var_572_bool, var_573_object);
			if(var_572_bool != 0) {
				var_550_int = var_550_int + (int)-1;
				var_575_object = Obj();
				var_549_object = var_575_object;
				func_0(var_551_int, var_552_int, var_575_object);
				var_576_int = var_542_int + var_1_int;
				@@@var_6_object:set(var_576_int, var_550_int);
				var_577_int = 0;
				var_578_int = 0; var_579_object = Obj(); var_580_int = 0;
				var_549_object = var_579_object;
				var_580_int = var_25_int;
				func_1445(var_578_int, var_579_object, var_580_int);
				var_581_int = -var_578_int;
				var_582_float = 0; var_583_object = Obj(); var_584_int = 0; var_585_int = 0;
				var_583_object = var_26_object;
				var_584_int = var_24_int;
				var_585_int = var_25_int;
				func_1377(var_582_float, var_583_object, var_584_int, var_585_int);
				var_577_int = var_581_int * var_582_float;
				func_1001(var_551_int, var_552_int, var_577_int);
			}
		}
	}
	func_521(var_550_int, var_551_int, var_552_int);
	func_604(var_549_object, var_550_int, var_551_int, var_552_int);
	return 10;
}
EMIT "Stack[-4] = 0";


func_1077(var_0_int, var_7_object, var_8_object, var_9_object, var_24_int, var_25_int, var_26_object, var_383_int)
{
	var_384_int = 0; var_385_object = Obj(); var_386_int = 0; var_387_int = 0; var_388_int = 0; var_389_int = 0; var_390_object = Obj(); var_391_int = 0; var_392_int = 0; var_393_int = 0;
	@@@var_9_object:size(var_389_int);
	var_394_int = var_383_int + var_0_int;
	var_395_bool = var_394_int >= var_389_int;
	if(var_395_bool != 0) {
		return 10;
	}
	var_396_int = var_383_int + var_0_int;
	@@@var_7_object:get(var_390_object, var_396_int);
	var_397_bool = 0; var_398_object = Obj(); var_399_int = 0; var_400_bool = 0;
	var_390_object = var_398_object;
	var_399_int = var_25_int;
	func_1602(var_397_bool, var_398_object, var_399_int, (bool)0);
	if(var_397_bool != 0) {
		return 10;
	}
	var_401_int = var_383_int + var_0_int;
	@@@var_9_object:get(var_391_int, var_401_int);
	var_402_int = var_383_int + var_0_int;
	@@@var_8_object:get(var_392_int, var_402_int);
	var_404_bool = var_391_int > (int)0;
	if(var_404_bool != 0) {
		var_405_bool = 0; var_406_object = Obj();
		var_390_object = var_406_object;
		func_853(var_384_int, var_385_object, var_386_int, var_387_int, var_388_int, var_389_int, var_390_object, var_391_int, var_392_int, var_393_int, var_405_bool, var_406_object);
		var_455_object = Obj();
		var_390_object = var_455_object;
		func_24(var_392_int, var_393_int, var_455_object);
		var_391_int = var_391_int + (int)-1;
		var_468_int = var_383_int + var_0_int;
		@@@var_9_object:set(var_468_int, var_391_int);
		var_469_int = 0; var_470_object = Obj(); var_471_int = 0;
		var_390_object = var_470_object;
		var_471_int = var_25_int;
		func_1445(var_469_int, var_470_object, var_471_int);
		var_472_float = 0; var_473_object = Obj(); var_474_int = 0; var_475_int = 0;
		var_473_object = var_26_object;
		var_474_int = var_24_int;
		var_475_int = var_25_int;
		func_1403(var_472_float, var_473_object, var_474_int, var_475_int);
		var_393_int = var_469_int * var_472_float;
		var_476_int = 0;
		var_393_int = var_476_int;
		func_1001(var_392_int, var_393_int, var_476_int);
	}
	func_521(var_391_int, var_392_int, var_393_int);
	func_604(var_390_object, var_391_int, var_392_int, var_393_int);
	return 10;
}
EMIT "Stack[-4] = 0";


func_694(var_3_int)
{
	SendMessage(var_3_int, "l_money_slot");
	return 0;
}


func_1591(var_195_bool, var_196_object, var_197_object)
{
	var_198_int = 0; var_199_object = Obj();
	var_196_object = var_199_object;
	func_1506(var_198_int, var_199_object);
	var_200_int = 0; var_201_object = Obj();
	var_197_object = var_201_object;
	func_1506(var_200_int, var_201_object);
	var_195_bool = var_198_int == var_200_int;
	return 0;
}


func_698(var_2_int, var_3_int, var_20_object, var_21_object, var_25_int)
{
	var_758_int = 0; var_759_bool = 0; var_760_object = Obj(); var_761_object = Obj(); var_762_object = Obj(); var_763_int = 0; var_764_int = 0; var_765_int = 0; var_766_bool = 0; var_767_object = Obj(); var_768_object = Obj(); var_769_object = Obj(); var_770_int = 0; var_771_int = 0;
	GetContainer(var_768_object);
	GetPlayerContainer(var_769_object);
	@@@var_21_object:size(var_765_int);
	var_770_int = 0;
	
Label_706:
	var_772_bool = var_770_int < var_765_int;
	if(var_772_bool != 0) {
		@@@var_21_object:get(var_767_object, var_770_int);
		var_773_bool = 0; var_774_object = Obj(); var_775_object = Obj(); var_776_int = 0;
		var_769_object = var_774_object;
		var_767_object = var_775_object;
		var_777_int = 0; var_778_object = Obj();
		var_767_object = var_778_object;
		func_1511(var_777_int, var_778_object);
		var_777_int = var_776_int;
		func_1652(var_773_bool, var_774_object, var_775_object, var_776_int);
		var_773_bool = var_766_bool;
		var_791_bool = var_766_bool == 0; //@nz
		if(var_791_bool != 0) {
			Trace("Error: failed to remove item");
		}
		var_793_bool = 0; var_794_object = Obj(); var_795_object = Obj(); var_796_int = 0;
		var_768_object = var_794_object;
		var_767_object = var_795_object;
		func_1677(var_793_bool, var_794_object, var_795_object, (int)0);
		var_793_bool = var_766_bool;
		var_800_bool = var_766_bool == 0; //@nz
		if(var_800_bool != 0) {
			Trace("Error: failed to add item");
		}
		var_770_int = var_770_int + (int)1;
		goto Label_706;
	}
	@@@var_20_object:size(var_765_int);
	var_771_int = 0;
	
Label_744:
	var_803_bool = var_771_int < var_765_int;
	if(var_803_bool != 0) {
		@@@var_20_object:get(var_767_object, var_771_int);
		var_804_bool = 0; var_805_object = Obj(); var_806_object = Obj(); var_807_int = 0;
		var_768_object = var_805_object;
		var_767_object = var_806_object;
		func_1652(var_804_bool, var_805_object, var_806_object, (int)0);
		var_804_bool = var_766_bool;
		var_808_bool = var_766_bool == 0; //@nz
		if(var_808_bool != 0) {
			Trace("Error: failed to remove item");
		}
		var_810_bool = 0; var_811_object = Obj(); var_812_object = Obj(); var_813_int = 0;
		var_769_object = var_811_object;
		var_767_object = var_812_object;
		var_814_int = 0; var_815_object = Obj();
		var_767_object = var_815_object;
		func_1511(var_814_int, var_815_object);
		var_814_int = var_813_int;
		func_1677(var_810_bool, var_811_object, var_812_object, var_813_int);
		var_810_bool = var_766_bool;
		var_816_bool = var_766_bool == 0; //@nz
		if(var_816_bool != 0) {
			Trace("Error: failed to add item");
		}
		var_771_int = var_771_int + (int)1;
		goto Label_744;
	}
	var_820_bool = var_25_int == (int)0;
	if(var_820_bool != 0) {
		SetPlayerMoneyCount(var_2_int);
	}
	var_3_int = 0;
	func_242(var_23_object, var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_758_int, var_759_bool, var_760_object, var_761_object, var_762_object, var_763_int, var_764_int, var_765_int, var_766_bool, var_767_object, var_768_object, var_769_object, var_770_int, var_771_int);
	return 14;
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


func_1341(var_32_int, var_34_string)
{
	var_35_int = 0; var_36_int = 0;
	
Label_1343:
	var_38_bool = (int)0 < (int)18;
	if(var_38_bool != 0) {
		var_39_string = ""; var_40_int = 0;
		var_36_int = var_40_int;
		func_1309(var_39_string, var_40_int);
		var_51_bool = var_34_string == var_39_string;
		if(var_51_bool != 0) {
			var_36_int = var_32_int;
			var_36_int = var_36_int + (int)1;
			goto Label_1343;
		}
		return 2;
	}
	var_32_int = -1;
	return 2;
}


func_1602(var_180_bool, var_181_object, var_182_int, var_183_bool)
{
	var_184_bool = 0; var_185_int = 0; var_186_bool = 0; var_187_int = 0;
	var_189_bool = var_182_int == (int)0;
	if(var_189_bool != 0) {
		var_180_bool = 0;
		return 4;
	}
	var_190_int = 0; var_191_object = Obj();
	var_181_object = var_191_object;
	func_1506(var_190_int, var_191_object);
	var_195_int = "BarterPrice" + var_182_int;
	HasInvItemProperty(var_186_bool, var_190_int, var_195_int);
	var_196_bool = var_186_bool == 0; //@nz
	if(var_196_bool != 0) {
		var_180_bool = 1;
		return 4;
	}
	var_197_int = 0; var_198_object = Obj();
	var_181_object = var_198_object;
	func_1506(var_197_int, var_198_object);
	var_200_int = "BarterPrice" + var_182_int;
	GetInvItemProperty(var_187_int, var_197_int, var_200_int);
	var_201_bool = 0;
	var_201_bool = 0;
	var_202_bool = var_183_bool;
	if(var_202_bool != 0) {
		var_204_bool = var_187_int > (int)0;
		if(var_204_bool != 0) {
			var_201_bool = 1;
		}
	}
	if(var_201_bool != 0) {
		var_180_bool = 0;
		return 4;
	}
	var_205_bool = 0;
	var_205_bool = 0;
	var_206_bool = var_183_bool == 0; //@nz
	if(var_206_bool != 0) {
		var_208_bool = var_187_int < (int)0;
		if(var_208_bool != 0) {
			var_205_bool = 1;
		}
	}
	if(var_205_bool != 0) {
		var_180_bool = 0;
		return 4;
	}
	var_180_bool = 1;
	return 4;
}


func_965(var_413_bool, var_414_object, var_415_object, var_416_object)
{
	var_417_int = 0; var_418_object = Obj(); var_419_int = 0; var_420_int = 0; var_421_int = 0; var_422_object = Obj(); var_423_int = 0; var_424_int = 0;
	@@var_415_object:size(var_421_int);
	var_423_int = 0;
	
Label_969:
	var_425_bool = var_423_int < var_421_int;
	if(var_425_bool != 0) {
		@@var_415_object:get(var_422_object, var_423_int);
		@@var_416_object:get(var_424_int, var_423_int);
		var_426_bool = 0; var_427_object = Obj(); var_428_object = Obj();
		var_414_object = var_427_object;
		var_422_object = var_428_object;
		func_1591(var_426_bool, var_427_object, var_428_object);
		if(var_426_bool != 0) {
			var_424_int = var_424_int + (int)-1;
			var_431_bool = var_424_int == (int)0;
			if(var_431_bool != 0) {
				@@var_415_object:remove(var_423_int);
				@@var_416_object:remove(var_423_int);
			} else {
				@@var_416_object:set(var_423_int, var_424_int);
		}
			var_423_int = var_423_int + (int)1;
			goto Label_969;
	}
		var_413_bool = 0;
		return 8;
	}
	var_413_bool = 1;
	return 8;
	
}
EMIT "Stack[-3] = 0";


func_455(var_109_int, var_110_object, var_111_object)
{
	var_112_object = Obj(); var_113_int = 0; var_114_int = 0; var_115_int = 0; var_116_object = Obj(); var_117_int = 0; var_118_int = 0; var_119_int = 0;
	var_120_int = 0; var_121_int = 0;
	var_109_int = var_121_int;
	func_1538(var_120_int, var_121_int);
	var_120_int = var_117_int;
	
Label_462:
	var_122_bool = (int)0 < var_117_int;
	if(var_122_bool != 0) {
		var_123_int = 0; var_124_int = 0; var_125_int = 0;
		var_109_int = var_124_int;
		var_119_int = var_125_int;
		func_1555(var_123_int, var_124_int, var_125_int);
		var_123_int = var_118_int;
		var_126_object = Obj(); var_127_int = 0; var_128_int = 0;
		var_109_int = var_127_int;
		var_119_int = var_128_int;
		func_1546(var_126_object, var_127_int, var_128_int);
		var_126_object = var_116_object;
		@@var_110_object:add(var_116_object);
		@@var_111_object:add(var_118_int);
		var_119_int = var_119_int + (int)1;
		goto Label_462;
	}
	return 8;
}
EMIT "Stack[-4] = 0";


func_1359(var_477_int, var_479_string)
{
	var_480_int = 0; var_481_int = 0;
	
Label_1361:
	var_483_bool = (int)0 < (int)18;
	if(var_483_bool != 0) {
		var_484_string = ""; var_485_int = 0;
		var_481_int = var_485_int;
		func_1325(var_484_string, var_485_int);
		var_486_bool = var_479_string == var_484_string;
		if(var_486_bool != 0) {
			var_481_int = var_477_int;
			var_481_int = var_481_int + (int)1;
			goto Label_1361;
		}
		return 2;
	}
	var_477_int = -1;
	return 2;
}


func_339()
{
	var_73_int = 0;
	func_360(var_28_float, var_39_int, var_40_int, (int)0);
	var_105_int = 0;
	func_360(var_28_float, var_39_int, var_40_int, (int)1);
	var_106_int = 0;
	func_360(var_28_float, var_39_int, var_40_int, (int)2);
	var_107_int = 0;
	func_360(var_28_float, var_39_int, var_40_int, (int)3);
	var_108_int = 0;
	func_360(var_28_float, var_39_int, var_40_int, (int)4);
	return 0;
}


func_853(var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_405_bool, var_406_object)
{
	var_407_int = 0; var_408_int = 0;
	var_409_int = 0; var_410_object = Obj();
	var_406_object = var_410_object;
	func_1511(var_409_int, var_410_object);
	var_409_int = var_408_int;
	var_412_bool = var_408_int == (int)0;
	if(var_412_bool != 0) {
		var_413_bool = 0; var_414_object = Obj(); var_415_object = Obj(); var_416_object = Obj();
		var_406_object = var_414_object;
		var_415_object = var_10_object;
		var_416_object = var_11_object;
		func_965(var_413_bool, var_414_object, var_415_object, var_416_object);
		var_413_bool = var_405_bool;
		return 2;
	EMIT "GOTO 0x38a";
	}
	var_434_bool = var_408_int == (int)1;
	if(var_434_bool != 0) {
		var_435_bool = 0; var_436_object = Obj(); var_437_object = Obj(); var_438_object = Obj();
		var_406_object = var_436_object;
		var_437_object = var_12_object;
		var_438_object = var_13_object;
		func_965(var_435_bool, var_436_object, var_437_object, var_438_object);
		var_435_bool = var_405_bool;
		return 2;
	EMIT "GOTO 0x38a";
	}
	var_440_bool = var_408_int == (int)2;
	if(var_440_bool != 0) {
		var_441_bool = 0; var_442_object = Obj(); var_443_object = Obj(); var_444_object = Obj();
		var_406_object = var_442_object;
		var_443_object = var_14_object;
		var_444_object = var_15_object;
		func_965(var_441_bool, var_442_object, var_443_object, var_444_object);
		var_441_bool = var_405_bool;
		return 2;
	EMIT "GOTO 0x38a";
	}
	var_446_bool = var_408_int == (int)3;
	if(var_446_bool != 0) {
		var_447_bool = 0; var_448_object = Obj(); var_449_object = Obj(); var_450_object = Obj();
		var_406_object = var_448_object;
		var_449_object = var_16_object;
		var_450_object = var_17_object;
		func_965(var_447_bool, var_448_object, var_449_object, var_450_object);
		var_447_bool = var_405_bool;
		return 2;
	}
	var_451_bool = 0; var_452_object = Obj(); var_453_object = Obj(); var_454_object = Obj();
	var_406_object = var_452_object;
	var_453_object = var_18_object;
	var_454_object = var_19_object;
	func_965(var_451_bool, var_452_object, var_453_object, var_454_object);
	var_451_bool = var_405_bool;
	return 2;
}


func_604(var_1_int, var_4_object, var_5_object, var_25_int)
{
	var_236_int = 0; var_237_object = Obj(); var_238_int = 0; var_239_int = 0; var_240_int = 0; var_241_int = 0; var_242_int = 0; var_243_object = Obj(); var_244_int = 0; var_245_int = 0; var_246_int = 0; var_247_int = 0;
	@@@var_4_object:size(var_242_int);
	var_249_int = var_1_int + (int)18;
	var_250_bool = var_249_int > var_242_int;
	if(var_250_bool != 0) {
		var_252_int = var_242_int % (int)2;
		var_254_bool = var_252_int == (int)0;
		if(var_254_bool != 0) {
			var_256_int = var_1_int + (int)18;
			var_257_int = var_256_int - var_242_int;
			var_1_int = var_1_int - var_257_int;
		} else {
				var_303_int = var_1_int + (int)18;
				var_304_int = var_303_int - var_242_int;
				var_306_int = var_304_int - (int)1;
				var_1_int = var_1_int - var_306_int;
		}
	}
	var_259_bool = var_1_int < (int)0;
	if(var_259_bool != 0) {
		var_1_int = 0;
	}
	var_246_int = var_1_int;
	
Label_632:
	var_261_int = var_1_int + (int)18;
	var_262_bool = var_246_int < var_261_int;
	if(var_262_bool != 0) {
		var_263_bool = var_246_int < var_242_int;
		if(var_263_bool != 0) {
			@@@var_4_object:get(var_243_object, var_246_int);
			@@@var_5_object:get(var_245_int, var_246_int);
			var_264_int = 0; var_265_int = 0;
			var_265_int = var_246_int - var_1_int;
			func_1296(var_246_int, var_247_int, var_264_int, var_265_int);
			var_264_int = var_247_int;
			var_274_bool = var_247_int > (int)0;
			if(var_274_bool != 0) {
				(int)0 = (int)0 | (int)16384;
			}
			var_276_bool = 0; var_277_object = Obj(); var_278_int = 0; var_279_bool = 0;
			var_243_object = var_277_object;
			var_278_int = var_25_int;
			func_1602(var_276_bool, var_277_object, var_278_int, (bool)1);
			if(var_276_bool != 0) {
				var_244_int = var_244_int | (int)131072;
			}
			var_281_int = var_245_int - var_247_int;
			var_283_int = var_281_int | (int)65536;
			var_284_string = ""; var_285_int = 0;
			var_285_int = var_246_int - var_1_int;
			func_1325(var_284_string, var_285_int);
			SendMessage(var_283_int, var_284_string);
			var_296_string = ""; var_297_int = 0;
			var_297_int = var_246_int - var_1_int;
			func_1325(var_296_string, var_297_int);
			SendMessage(var_244_int, var_296_string, var_243_object);
		} else {
			var_300_string = ""; var_301_int = 0;
			var_301_int = var_246_int - var_1_int;
			func_1325(var_300_string, var_301_int);
			SendMessage((int)32768, var_300_string);
	}
		var_246_int = var_246_int + (int)1;
		goto Label_632;
	}
	return 12;
	
}
EMIT "Stack[-5] = 0";


func_1377(var_521_float, var_522_object, var_523_int, var_524_int)
{
	var_525_float = 0; var_526_int = 0; var_527_bool = 0; var_528_float = 0; var_529_int = 0; var_530_bool = 0;
	var_532_bool = var_524_int != (int)0;
	if(var_532_bool != 0) {
		var_521_float = 1;
		return 6;
	}
	var_528_float = 1;
	var_529_int = 1;
	
Label_1385:
	var_533_bool = var_529_int <= var_523_int;
	if(var_533_bool != 0) {
		var_535_int = "sellf" + var_529_int;
		@@var_522_object:HasProperty(var_535_int, var_530_bool);
		var_536_bool = var_530_bool;
		if(var_536_bool != 0) {
			var_538_int = "sellf" + var_529_int;
			@@var_522_object:GetProperty(var_538_int, var_528_float);
		}
		var_529_int = var_529_int + (int)1;
		goto Label_1385;
	}
	var_521_float = var_528_float / (int)100;
	return 6;
}


func_1506(var_190_int, var_191_object)
{
	var_192_int = 0; var_193_int = 0;
	@@var_191_object:GetItemID(var_193_int);
	var_193_int = var_190_int;
	return 2;
}


func_485(var_7_object, var_716_int)
{
	var_717_int = 0; var_718_int = 0; var_719_int = 0; var_720_int = 0;
	@@@var_7_object:size(var_719_int);
	var_722_int = var_719_int + (int)2;
	var_724_int = var_722_int - (int)1;
	var_726_float = var_724_int / (int)2;
	var_720_int = var_726_float - (int)9;
	var_729_bool = var_720_int < (int)0;
	if(var_729_bool != 0) {
		var_716_int = 0;
		return 4;
	}
	var_720_int = var_716_int;
	return 4;
}


func_1511(var_165_int, var_166_object)
{
	var_167_int = 0; var_168_int = 0;
	var_169_int = 0; var_170_object = Obj();
	var_166_object = var_170_object;
	func_1506(var_169_int, var_170_object);
	GetInvItemProperty(var_168_int, var_169_int, "Category");
	var_168_int = var_165_int;
	return 2;
}


func_360(var_4_object, var_5_object, var_6_object, var_73_int)
{
	var_74_object = Obj(); var_75_int = 0; var_76_int = 0; var_77_int = 0; var_78_object = Obj(); var_79_int = 0; var_80_int = 0; var_81_int = 0;
	var_82_int = 0; var_83_int = 0;
	var_73_int = var_83_int;
	func_1538(var_82_int, var_83_int);
	var_82_int = var_79_int;
	
Label_367:
	var_88_bool = (int)0 < var_79_int;
	if(var_88_bool != 0) {
		var_89_int = 0; var_90_int = 0; var_91_int = 0;
		var_73_int = var_90_int;
		var_81_int = var_91_int;
		func_1555(var_89_int, var_90_int, var_91_int);
		var_89_int = var_80_int;
		var_96_object = Obj(); var_97_int = 0; var_98_int = 0;
		var_73_int = var_97_int;
		var_81_int = var_98_int;
		func_1546(var_96_object, var_97_int, var_98_int);
		var_96_object = var_78_object;
		@@@var_4_object:add(var_78_object);
		@@@var_5_object:add(var_80_int);
		@@@var_6_object:add((int)0);
		var_81_int = var_81_int + (int)1;
		goto Label_367;
	}
	return 8;
}
EMIT "Stack[-4] = 0";


func_1001(var_2_int, var_3_int, var_251_int)
{
	var_2_int = var_2_int + var_251_int;
	var_3_int = var_3_int - var_251_int;
	func_690(var_251_int);
	func_694(var_251_int);
	return 0;
}


func_1521(var_186_int, var_187_object)
{
	var_188_int = 0; var_189_int = 0;
	var_190_int = 0; var_191_object = Obj();
	var_187_object = var_191_object;
	func_1506(var_190_int, var_191_object);
	GetItemMaxStackSize(var_190_int, var_189_int);
	var_189_int = var_186_int;
	return 2;
}


func_242(var_0_int, var_1_int, var_2_int, var_3_int, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_25_int)
{
	var_39_int = 0; var_40_int = 0;
	var_0_int = 0;
	var_1_int = 0;
	var_3_int = 0;
	var_42_bool = var_25_int == (int)0;
	if(var_42_bool != 0) {
		GetPlayerMoneyCount(var_2_int);
	} else {
				var_2_int = 0;
	}
	@@@var_20_object:clear();
	@@@var_21_object:clear();
	@@@var_4_object:clear();
	@@@var_5_object:clear();
	@@@var_6_object:clear();
	@@@var_7_object:clear();
	@@@var_8_object:clear();
	@@@var_9_object:clear();
	@@@var_10_object:clear();
	@@@var_11_object:clear();
	@@@var_12_object:clear();
	@@@var_13_object:clear();
	@@@var_14_object:clear();
	@@@var_15_object:clear();
	@@@var_16_object:clear();
	@@@var_17_object:clear();
	@@@var_18_object:clear();
	@@@var_19_object:clear();
	func_393(var_28_float, var_39_int, var_40_int);
	func_339();
	func_424(var_21_object, var_22_object, var_23_object, var_24_int, var_25_int, var_26_object, var_27_float, var_28_float, var_39_int, var_40_int);
	func_521(var_28_float, var_39_int, var_40_int);
	func_694(var_40_int);
	func_604(var_27_float, var_28_float, var_39_int, var_40_int);
	func_690(var_40_int);
	@@@var_7_object:size(var_40_int);
	var_309_bool = var_40_int <= (int)18;
	if(var_309_bool != 0) {
		SendMessage((int)16384, "l_scrollbar");
	} else {
			SendMessage((int)0, "l_scrollbar");

	}
	@@@var_4_object:size(var_40_int);
	var_313_bool = var_40_int <= (int)18;
	if(var_313_bool != 0) {
		SendMessage((int)16384, "r_scrollbar");
	} else {
		SendMessage((int)0, "r_scrollbar");

	}
	return 2;
	
}


func_1011(var_0_int, var_2_int, var_7_object, var_8_object, var_9_object, var_24_int, var_25_int, var_26_object, var_57_int)
{
	var_58_int = 0; var_59_object = Obj(); var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_object = Obj(); var_65_int = 0; var_66_int = 0; var_67_int = 0;
	@@@var_9_object:size(var_63_int);
	var_68_int = var_57_int + var_0_int;
	var_69_bool = var_68_int >= var_63_int;
	if(var_69_bool != 0) {
		return 10;
	}
	var_70_int = var_57_int + var_0_int;
	@@@var_7_object:get(var_64_object, var_70_int);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; var_74_bool = 0;
	var_64_object = var_72_object;
	var_73_int = var_25_int;
	func_1602(var_71_bool, var_72_object, var_73_int, (bool)0);
	if(var_71_bool != 0) {
		return 10;
	}
	var_100_int = var_57_int + var_0_int;
	@@@var_9_object:get(var_65_int, var_100_int);
	var_101_int = var_57_int + var_0_int;
	@@@var_8_object:get(var_66_int, var_101_int);
	var_102_bool = var_65_int < var_66_int;
	if(var_102_bool != 0) {
		var_103_int = 0; var_104_object = Obj(); var_105_int = 0;
		var_64_object = var_104_object;
		var_105_int = var_25_int;
		func_1445(var_103_int, var_104_object, var_105_int);
		var_140_float = 0; var_141_object = Obj(); var_142_int = 0; var_143_int = 0;
		var_141_object = var_26_object;
		var_142_int = var_24_int;
		var_143_int = var_25_int;
		func_1403(var_140_float, var_141_object, var_142_int, var_143_int);
		var_67_int = var_103_int * var_140_float;
		var_160_bool = var_67_int <= var_2_int;
		if(var_160_bool != 0) {
			var_161_bool = 0; var_162_object = Obj();
			var_64_object = var_162_object;
			func_792(var_58_int, var_59_object, var_60_int, var_61_int, var_62_int, var_63_int, var_64_object, var_65_int, var_66_int, var_67_int, var_161_bool, var_162_object);
			if(var_161_bool != 0) {
				var_65_int = var_65_int + (int)1;
				var_234_int = var_57_int + var_0_int;
				@@@var_9_object:set(var_234_int, var_65_int);
				var_235_object = Obj();
				var_64_object = var_235_object;
				func_0(var_66_int, var_67_int, var_235_object);
				var_251_int = 0;
				var_251_int = -var_67_int;
				func_1001(var_66_int, var_67_int, var_251_int);
			}
		}
	}
	func_521(var_65_int, var_66_int, var_67_int);
	func_604(var_64_object, var_65_int, var_66_int, var_67_int);
	return 10;
}
EMIT "Stack[-4] = 0";


func_1652(var_773_bool, var_774_object, var_775_object, var_776_int)
{
	var_779_int = 0; var_780_object = Obj(); var_781_int = 0; var_782_int = 0; var_783_object = Obj(); var_784_int = 0;
	@@var_774_object:GetItemCount(var_782_int, var_776_int);
	var_784_int = 0;
	
Label_1656:
	var_785_bool = var_784_int < var_782_int;
	if(var_785_bool != 0) {
		@@var_774_object:GetItem(var_783_object, var_784_int, var_776_int);
		var_786_bool = 0; var_787_object = Obj(); var_788_object = Obj();
		var_775_object = var_787_object;
		var_783_object = var_788_object;
		func_1580(var_786_bool, var_787_object, var_788_object);
		if(var_786_bool != 0) {
			@@var_774_object:RemoveItem(var_784_int, (int)1, var_776_int);
			var_773_bool = 1;
			var_784_int = var_784_int + (int)1;
			goto Label_1656;
		}
		return 6;
	}
	var_773_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";


func_1141(var_1_int, var_4_object, var_5_object, var_6_object, var_24_int, var_25_int, var_26_object, var_492_int)
{
	var_493_int = 0; var_494_object = Obj(); var_495_int = 0; var_496_int = 0; var_497_int = 0; var_498_int = 0; var_499_object = Obj(); var_500_int = 0; var_501_int = 0; var_502_int = 0;
	@@@var_6_object:size(var_498_int);
	var_503_int = var_492_int + var_1_int;
	var_504_bool = var_503_int >= var_498_int;
	if(var_504_bool != 0) {
		return 10;
	}
	var_505_int = var_492_int + var_1_int;
	@@@var_4_object:get(var_499_object, var_505_int);
	var_506_bool = 0; var_507_object = Obj(); var_508_int = 0; var_509_bool = 0;
	var_499_object = var_507_object;
	var_508_int = var_25_int;
	func_1602(var_506_bool, var_507_object, var_508_int, (bool)1);
	if(var_506_bool != 0) {
		return 10;
	}
	var_510_int = var_492_int + var_1_int;
	@@@var_6_object:get(var_500_int, var_510_int);
	var_511_int = var_492_int + var_1_int;
	@@@var_5_object:get(var_501_int, var_511_int);
	var_512_bool = var_500_int < var_501_int;
	if(var_512_bool != 0) {
		var_513_bool = 0; var_514_object = Obj();
		var_499_object = var_514_object;
		func_853(var_493_int, var_494_object, var_495_int, var_496_int, var_497_int, var_498_int, var_499_object, var_500_int, var_501_int, var_502_int, var_513_bool, var_514_object);
		var_515_object = Obj();
		var_499_object = var_515_object;
		func_24(var_501_int, var_502_int, var_515_object);
		var_500_int = var_500_int + (int)1;
		var_517_int = var_492_int + var_1_int;
		@@@var_6_object:set(var_517_int, var_500_int);
		var_518_int = 0; var_519_object = Obj(); var_520_int = 0;
		var_499_object = var_519_object;
		var_520_int = var_25_int;
		func_1445(var_518_int, var_519_object, var_520_int);
		var_521_float = 0; var_522_object = Obj(); var_523_int = 0; var_524_int = 0;
		var_522_object = var_26_object;
		var_523_int = var_24_int;
		var_524_int = var_25_int;
		func_1377(var_521_float, var_522_object, var_523_int, var_524_int);
		var_502_int = var_518_int * var_521_float;
		var_541_int = 0;
		var_502_int = var_541_int;
		func_1001(var_501_int, var_502_int, var_541_int);
	}
	func_521(var_500_int, var_501_int, var_502_int);
	func_604(var_499_object, var_500_int, var_501_int, var_502_int);
	return 10;
}
EMIT "Stack[-4] = 0";


func_503(var_4_object, var_737_int)
{
	var_738_int = 0; var_739_int = 0; var_740_int = 0; var_741_int = 0;
	@@@var_4_object:size(var_740_int);
	var_743_int = var_740_int + (int)2;
	var_745_int = var_743_int - (int)1;
	var_747_float = var_745_int / (int)2;
	var_741_int = var_747_float - (int)9;
	var_750_bool = var_741_int < (int)0;
	if(var_750_bool != 0) {
		var_737_int = 0;
		return 4;
	}
	var_741_int = var_737_int;
	return 4;
}


func_1530(var_53_int)
{
	var_54_int = 0; var_55_object = Obj(); var_56_int = 0; var_57_object = Obj();
	GetContainer(var_57_object);
	@@var_57_object:GetItemCount(var_56_int);
	var_56_int = var_53_int;
	return 4;
}
EMIT "Stack[-1] = 0";


func_1403(var_140_float, var_141_object, var_142_int, var_143_int)
{
	var_144_float = 0; var_145_int = 0; var_146_bool = 0; var_147_float = 0; var_148_int = 0; var_149_bool = 0;
	var_151_bool = var_143_int != (int)0;
	if(var_151_bool != 0) {
		var_140_float = 1;
		return 6;
	}
	var_147_float = 1;
	var_148_int = 1;
	
Label_1411:
	var_152_bool = var_148_int <= var_142_int;
	if(var_152_bool != 0) {
		var_154_int = "buyf" + var_148_int;
		@@var_141_object:HasProperty(var_154_int, var_149_bool);
		var_155_bool = var_149_bool;
		if(var_155_bool != 0) {
			var_157_int = "buyf" + var_148_int;
			@@var_141_object:GetProperty(var_157_int, var_147_float);
		}
		var_148_int = var_148_int + (int)1;
		goto Label_1411;
	}
	var_140_float = var_147_float / (int)100;
	return 6;
}


