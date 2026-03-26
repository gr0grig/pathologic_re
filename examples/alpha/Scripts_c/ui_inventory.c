// @IMPORTS: SetCursor/1,ShowCursor/0,CaptureKeyboard/0,SetOwnerDraw/1,SetNeedUpdate/1,ProcessEvents/0,DestroyWindow/0,GetVariable/2,HasContainer/1,GetContainer/1,GetInvItemByName/2,Trace/1,GetPlayerContainer/1,GetInvItemProperty/3,GetPlayerMoneyCount/1,SetPlayerMoneyCount/1,SendMessage/2,SendMessage/3,HasInvItemProperty/3,SetPlayerHandsItem/1,UseItem/3
// @STRINGS: W:default|W:button_weapon|W:button_clothes|W:button_medcine|W:button_food|W:button_other|W:button_detector|W:button_anticeptic|W:noinv_drop|W:slot0|W:slot|W:cslot0|W:cslot|A:GetCapacity|W:Money|W:MoveToContainer|A:GetItemCount|A:GetItemAmount|A:GetItem|A:GetItemID|A:AddItem|A:RemoveItem|W:MoveToPlayerContainer|W:Category|W:money|A:IsItemSelected|W:Weapon|A:SelectItem|W:Group|A:SetItemAmount
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int params=0
// @EVENT_100: op=0x1f vars=int
// @EVENT_1: op=0x23 vars=float
// @EVENT_200: op=0x29 vars=int,string,object
// @PE: 0x1f,0x23,0xa1,0xb1,0x1b5

task_0_event_100(var_0_int, var_1_int)
{
	DestroyWindow();
	return 0;
}


task_0_event_1(var_0_int, var_1_float)
{
	var_2_int = 0;
	var_2_int = var_0_int;
	func_381(var_2_int);
	return 0;
}


task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0;
	var_17_bool = var_2_string == "button_weapon";
	if(var_17_bool != 0) {
		var_0_int = 0;
	} else {
		var_140_bool = var_2_string == "button_clothes";
		if(var_140_bool != 0) {
			var_0_int = 1;
			goto Label_149;
		}
		var_142_bool = var_2_string == "button_medcine";
		if(var_142_bool != 0) {
			var_0_int = 2;
			goto Label_149;
		}
		var_144_bool = var_2_string == "button_food";
		if(var_144_bool != 0) {
			var_0_int = 3;
			goto Label_149;
		}
		var_146_bool = var_2_string == "button_other";
		if(var_146_bool != 0) {
			var_0_int = 4;
			goto Label_149;
		}
		var_148_bool = var_2_string == "button_detector";
		if(var_148_bool != 0) {
			goto Label_149;
		}
		var_150_bool = var_2_string == "button_anticeptic";
		if(var_150_bool != 0) {
			goto Label_149;
		}
		var_152_bool = var_1_int != (int)0;
		if(var_152_bool != 0) {
			GetVariable("noinv_drop", var_10_int);
			var_154_int = var_10_int;
			if(var_154_int != 0) {
				return 12;
			}
		}

	Label_85:
		var_156_bool = (int)0 < (int)12;
		if(var_156_bool != 0) {
			var_157_string = ""; var_158_int = 0;
			var_11_int = var_158_int;
			func_161(var_157_string, var_158_int);
			var_159_bool = var_2_string == var_157_string;
			if(var_159_bool != 0) {
				var_160_bool = 0;
				func_193(var_160_bool);
				if(var_160_bool != 0) {
					var_161_bool = 0; var_162_int = 0; var_163_int = 0;
					var_162_int = var_0_int;
					var_11_int = var_163_int;
					func_223(var_161_bool, var_162_int, var_163_int);
					var_161_bool = var_12_int;
				} else {
					var_231_bool = var_1_int == (int)0;
					if(var_231_bool != 0) {
						var_232_int = 0; var_233_int = 0;
						var_232_int = var_0_int;
						var_11_int = var_233_int;
						func_499(var_232_int, var_233_int);
						goto Label_120;
					}
					var_304_bool = 0; var_305_int = 0; var_306_int = 0;
					var_305_int = var_0_int;
					var_11_int = var_306_int;
					func_223(var_304_bool, var_305_int, var_306_int);
					var_304_bool = var_13_int;
			}
				var_11_int = var_11_int + (int)1;
				goto Label_85;
			}
		Label_120:
			goto Label_124;
		}
	Label_124:

	Label_125:
		var_184_int = 0;
		func_198(var_184_int);
		var_185_bool = (int)0 < var_184_int;
		if(var_185_bool == 0) goto Label_149;
		var_186_string = ""; var_187_int = 0;
		var_14_int = var_187_int;
		func_177(var_186_string, var_187_int);
		var_188_bool = var_2_string == var_186_string;
		if(var_188_bool != 0) {
			var_189_int = 0; var_190_int = 0;
			var_14_int = var_190_int;
			func_259(var_189_int, var_190_int);
			var_189_int = var_15_int;
			var_228_bool = var_15_int != (int)-1;
			if(var_228_bool != 0) {
				var_0_int = var_15_int;
			}
			goto Label_149;
		}
		var_14_int = var_14_int + (int)1;
		goto Label_125;
	}
Label_149:
	var_18_int = 0;
	var_18_int = var_0_int;
	func_437(var_18_int);
	var_49_int = 0;
	var_49_int = var_0_int;
	func_381(var_49_int);
	func_326();
	return 12;
	
}


main(var_0_int)
{
	var_0_int = 0;
	var_1_int = 0;
	var_1_int = var_0_int;
	func_437(var_1_int);
	var_32_int = 0;
	var_32_int = var_0_int;
	func_381(var_32_int);
	func_326();
	func_319();
	SetCursor("default");
	ShowCursor();
	CaptureKeyboard();
	SetOwnerDraw((bool)0);
	SetNeedUpdate((bool)1);
	ProcessEvents();
	return 0;
}


func_161(var_50_string, var_51_int)
{
	var_53_int = var_51_int + (int)1;
	var_55_bool = var_53_int < (int)10;
	if(var_55_bool != 0) {
		var_58_int = var_51_int + (int)1;
		var_50_string = "slot0" + var_58_int;
		return 0;
	}
	var_61_int = var_51_int + (int)1;
	var_50_string = "slot" + var_61_int;
	return 0;
}


func_193(var_87_bool)
{
	var_88_bool = 0; var_89_bool = 0;
	HasContainer(var_89_bool);
	var_89_bool = var_87_bool;
	return 2;
}


func_259(var_189_int, var_190_int)
{
	var_191_object = Obj(); var_192_object = Obj(); var_193_object = Obj(); var_194_int = 0; var_195_int = 0; var_196_int = 0; var_197_int = 0; var_198_int = 0; var_199_bool = 0; var_200_bool = 0; var_201_object = Obj(); var_202_object = Obj(); var_203_object = Obj(); var_204_int = 0; var_205_int = 0; var_206_int = 0; var_207_int = 0; var_208_int = 0; var_209_bool = 0; var_210_bool = 0;
	Trace("MoveToPlayerContainer");
	GetPlayerContainer(var_202_object);
	GetContainer(var_201_object);
	@@var_201_object:GetItemCount(var_204_int);
	var_212_bool = var_204_int <= var_190_int;
	if(var_212_bool != 0) {
		var_189_int = -1;
		return 20;
	}
	@@var_201_object:GetItemAmount(var_205_int, var_190_int);
	var_214_bool = var_205_int == (int)0;
	if(var_214_bool != 0) {
		var_189_int = -1;
		return 20;
	}
	@@var_201_object:GetItem(var_203_object, var_190_int);
	@@var_203_object:GetItemID(var_206_int);
	GetInvItemProperty(var_207_int, var_206_int, "Category");
	var_216_int = 0;
	func_217(var_216_int);
	var_220_bool = var_206_int == var_216_int;
	if(var_220_bool != 0) {
		GetPlayerMoneyCount(var_208_int);
		var_208_int = var_208_int + var_205_int;
		SetPlayerMoneyCount(var_208_int);
		@@var_201_object:RemoveItem(var_190_int, var_205_int);
		func_319();
		var_189_int = -1;
		return 20;
	}
	@@var_202_object:AddItem(var_210_bool, var_203_object, var_207_int, (int)1);
	var_225_bool = var_210_bool == 0; //@nz
	if(var_225_bool != 0) {
		var_189_int = -1;
		return 20;
	}
	@@var_201_object:RemoveItem(var_190_int, (int)1);
	var_207_int = var_189_int;
	return 20;
}
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";
EMIT "Stack[-10] = 0";


func_223(var_161_bool, var_162_int, var_163_int)
{
	var_164_object = Obj(); var_165_object = Obj(); var_166_object = Obj(); var_167_int = 0; var_168_int = 0; var_169_int = 0; var_170_bool = 0; var_171_object = Obj(); var_172_object = Obj(); var_173_object = Obj(); var_174_int = 0; var_175_int = 0; var_176_int = 0; var_177_bool = 0;
	Trace("MoveToContainer");
	GetPlayerContainer(var_172_object);
	GetContainer(var_171_object);
	@@var_172_object:GetItemCount(var_174_int, var_162_int);
	var_179_bool = var_174_int <= var_163_int;
	if(var_179_bool != 0) {
		var_161_bool = 0;
		return 14;
	}
	@@var_172_object:GetItemAmount(var_175_int, var_163_int, var_162_int);
	@@var_172_object:GetItem(var_173_object, var_163_int, var_162_int);
	@@var_173_object:GetItemID(var_176_int);
	@@var_171_object:AddItem(var_177_bool, var_173_object, (int)0, (int)1);
	var_182_bool = var_177_bool == 0; //@nz
	if(var_182_bool != 0) {
		var_161_bool = 0;
		return 14;
	}
	@@var_172_object:RemoveItem(var_163_int, (int)1, var_162_int);
	var_161_bool = 1;
	return 14;
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";


func_326()
{
	var_73_object = Obj(); var_74_int = 0; var_75_int = 0; var_76_int = 0; var_77_object = Obj(); var_78_int = 0; var_79_int = 0; var_80_object = Obj(); var_81_int = 0; var_82_int = 0; var_83_int = 0; var_84_object = Obj(); var_85_int = 0; var_86_int = 0;
	var_87_bool = 0;
	func_193(var_87_bool);
	var_90_bool = var_87_bool == 0; //@nz
	if(var_90_bool != 0) {
		return 14;
	}
	GetContainer(var_80_object);
	@@var_80_object:GetItemCount(var_81_int);
	func_198((int)0);
	var_91_int = var_82_int;
	var_83_int = 0;
	
Label_342:
	var_99_bool = var_83_int < var_82_int;
	if(var_99_bool != 0) {
		var_100_bool = var_83_int < var_81_int;
		if(var_100_bool != 0) {
			@@var_80_object:GetItem(var_84_object, var_83_int);
			@@var_84_object:GetItemID(var_85_int);
			@@var_80_object:GetItemAmount(var_86_int, var_83_int);
			var_102_string = ""; var_103_int = 0;
			var_83_int = var_103_int;
			func_177(var_102_string, var_103_int);
			SendMessage((int)0, var_102_string, var_84_object);
			var_115_int = var_86_int | (int)65536;
			var_116_string = ""; var_117_int = 0;
			var_83_int = var_117_int;
			func_177(var_116_string, var_117_int);
			SendMessage(var_115_int, var_116_string);
			var_84_object = 0;
		} else {
			var_120_string = ""; var_121_int = 0;
			var_83_int = var_121_int;
			func_177(var_120_string, var_121_int);
			SendMessage((int)32768, var_120_string);
	}
		var_83_int = var_83_int + (int)1;
		goto Label_342;
	}
	return 14;
	
}
EMIT "Stack[-7] = 0";


func_198(var_91_int)
{
	var_92_object = Obj(); var_93_int = 0; var_94_object = Obj(); var_95_int = 0;
	var_96_bool = 0;
	func_193(var_96_bool);
	var_97_bool = var_96_bool == 0; //@nz
	if(var_97_bool != 0) {
		var_91_int = 0;
		return 4;
	}
	GetContainer(var_94_object);
	var_98_bool = var_94_object == 0; //@ne
	if(var_98_bool != 0) {
		var_91_int = 0;
		return 4;
	}
	@@var_94_object:GetCapacity(var_95_int);
	var_95_int = var_91_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_177(var_102_string, var_103_int)
{
	var_105_int = var_103_int + (int)1;
	var_107_bool = var_105_int < (int)10;
	if(var_107_bool != 0) {
		var_110_int = var_103_int + (int)1;
		var_102_string = "cslot0" + var_110_int;
		return 0;
	}
	var_113_int = var_103_int + (int)1;
	var_102_string = "cslot" + var_113_int;
	return 0;
}


func_499(var_232_int, var_233_int)
{
	var_234_object = Obj(); var_235_int = 0; var_236_object = Obj(); var_237_int = 0; var_238_int = 0; var_239_bool = 0; var_240_bool = 0; var_241_int = 0; var_242_bool = 0; var_243_int = 0; var_244_int = 0; var_245_bool = 0; var_246_object = Obj(); var_247_int = 0; var_248_bool = 0; var_249_int = 0; var_250_bool = 0; var_251_bool = 0; var_252_object = Obj(); var_253_int = 0; var_254_object = Obj(); var_255_int = 0; var_256_int = 0; var_257_bool = 0; var_258_bool = 0; var_259_int = 0; var_260_bool = 0; var_261_int = 0; var_262_int = 0; var_263_bool = 0; var_264_object = Obj(); var_265_int = 0; var_266_bool = 0; var_267_int = 0; var_268_bool = 0; var_269_bool = 0;
	GetPlayerContainer(var_252_object);
	@@var_252_object:GetItemCount(var_253_int, var_232_int);
	var_270_bool = var_233_int >= var_253_int;
	if(var_270_bool != 0) {
		return 36;
	}
	@@var_252_object:GetItem(var_254_object, var_233_int, var_232_int);
	@@var_254_object:GetItemID(var_255_int);
	@@var_252_object:GetItemAmount(var_256_int, var_233_int, var_232_int);
	@@var_252_object:IsItemSelected(var_257_bool, var_233_int, var_232_int);
	var_272_bool = var_232_int == (int)0;
	if(var_272_bool != 0) {
		HasInvItemProperty(var_258_bool, var_255_int, "Weapon");
		var_274_bool = var_258_bool == 0; //@nz
		if(var_274_bool != 0) {
			return 36;
		}
		var_275_bool = var_257_bool;
		if(var_275_bool != 0) {
			@@var_252_object:SelectItem(var_233_int, (bool)0, var_232_int);
			SetPlayerHandsItem((int)-1);
		} else {
			SetPlayerHandsItem(var_255_int);
			var_259_int = 0;

		Label_536:
			var_279_bool = var_259_int < var_253_int;
			if(var_279_bool != 0) {
				@@var_252_object:SelectItem(var_259_int, (bool)0, var_232_int);
				var_259_int = var_259_int + (int)1;
				goto Label_536;
			}
			@@var_252_object:SelectItem(var_233_int, (bool)1, var_232_int);
	}
		var_284_bool = var_232_int == (int)1;
		if(var_284_bool != 0) {
			HasInvItemProperty(var_260_bool, var_255_int, "Group");
			var_286_bool = var_260_bool == 0; //@nz
			if(var_286_bool != 0) {
				return 36;
			}
			GetInvItemProperty(var_261_int, var_255_int, "Group");
			var_288_bool = var_257_bool;
			if(var_288_bool != 0) {
				@@var_252_object:SelectItem(var_233_int, (bool)0, var_232_int);
			} else {
				var_262_int = 0;

			Label_567:
				var_290_bool = var_262_int < var_253_int;
				if(var_290_bool != 0) {
					@@var_252_object:IsItemSelected(var_263_bool, var_262_int, var_232_int);
					var_291_bool = var_263_bool == 0; //@nz
					if(var_291_bool != 0) {
					} else {
						@@var_252_object:GetItem(var_264_object, var_262_int, var_232_int);
						@@var_264_object:GetItemID(var_265_int);
						HasInvItemProperty(var_266_bool, var_265_int, "Group");
						var_294_bool = var_266_bool == 0; //@nz
						if(var_294_bool != 0) {
							goto Label_594;
						}
						GetInvItemProperty(var_267_int, var_265_int, "Group");
						var_296_bool = var_267_int == var_261_int;
						if(var_296_bool != 0) {
							@@var_252_object:SelectItem(var_262_int, (bool)0, var_232_int);
						} else {
							var_264_object = 0;
		}
						UseItem(var_233_int, var_232_int, var_268_bool);
						var_299_bool = var_268_bool;
						if(var_299_bool == 0) goto Label_616;
						var_256_int = var_256_int + (int)-1;
						var_302_bool = var_256_int == (int)0;
						if(var_302_bool != 0) {
							@@var_252_object:RemoveItem(var_233_int, (int)1, var_232_int);
							goto Label_616;
						}
						@@var_252_object:SetItemAmount(var_256_int, var_233_int, var_232_int);
					}
			}
				@@var_252_object:SelectItem(var_233_int, (bool)1, var_232_int);
			}
		Label_594:
			var_262_int = var_262_int + (int)1;
			goto Label_567;
		}
		goto Label_616;
	}
	goto Label_616;
	
Label_616:
	var_278_int = 0;
	var_232_int = var_278_int;
	func_381(var_278_int);
	return 36;
	
}
EMIT "Stack[-16] = 0";
EMIT "Stack[-18] = 0";


func_437(var_1_int)
{
	var_3_bool = var_1_int != (int)0;
	if(var_3_bool != 0) {
		SendMessage((int)0, "button_weapon");
	} else {
						SendMessage((int)1, "button_weapon");
	}
	var_7_bool = var_1_int != (int)1;
	if(var_7_bool != 0) {
		SendMessage((int)0, "button_clothes");
	} else {
					SendMessage((int)1, "button_clothes");

	}
	var_11_bool = var_1_int != (int)2;
	if(var_11_bool != 0) {
		SendMessage((int)0, "button_medcine");
	} else {
				SendMessage((int)1, "button_medcine");

	}
	var_15_bool = var_1_int != (int)3;
	if(var_15_bool != 0) {
		SendMessage((int)0, "button_food");
	} else {
			SendMessage((int)1, "button_food");

	}
	var_19_bool = var_1_int != (int)4;
	if(var_19_bool != 0) {
		SendMessage((int)0, "button_other");
	} else {
		SendMessage((int)1, "button_other");

	}
	return 0;
	
}


func_217(var_216_int)
{
	var_217_int = 0; var_218_int = 0;
	GetInvItemByName(var_218_int, "Money");
	var_218_int = var_216_int;
	return 2;
}


func_381(var_32_int)
{
	var_33_object = Obj(); var_34_int = 0; var_35_int = 0; var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; var_39_object = Obj(); var_40_int = 0; var_41_int = 0; var_42_object = Obj(); var_43_int = 0; var_44_bool = 0;
	GetPlayerContainer(var_39_object);
	@@var_39_object:GetItemCount(var_40_int, var_32_int);
	var_41_int = 0;
	
Label_387:
	var_46_bool = var_41_int < (int)12;
	if(var_46_bool != 0) {
		var_47_bool = var_41_int < var_40_int;
		if(var_47_bool != 0) {
			@@var_39_object:GetItem(var_42_object, var_41_int, var_32_int);
			@@var_39_object:GetItemAmount(var_43_int, var_41_int, var_32_int);
			@@var_39_object:IsItemSelected(var_44_bool, var_41_int, var_32_int);
			var_48_bool = var_44_bool;
			if(var_48_bool != 0) {
				var_50_string = ""; var_51_int = 0;
				var_41_int = var_51_int;
				func_161(var_50_string, var_51_int);
				SendMessage((int)16384, var_50_string, var_42_object);
			} else {
				var_68_string = ""; var_69_int = 0;
				var_41_int = var_69_int;
				func_161(var_68_string, var_69_int);
				SendMessage((int)0, var_68_string, var_42_object);
		}
			var_71_string = ""; var_72_int = 0;
			var_41_int = var_72_int;
			func_161(var_71_string, var_72_int);
			SendMessage((int)32768, var_71_string);
	}
		var_63_int = var_43_int | (int)65536;
		var_64_string = ""; var_65_int = 0;
		var_41_int = var_65_int;
		func_161(var_64_string, var_65_int);
		SendMessage(var_63_int, var_64_string);
		var_42_object = 0;
		goto Label_432;
		var_41_int = var_41_int + (int)1;
		goto Label_387;
	}
	return 12;
	
}
EMIT "Stack[-6] = 0";


func_319()
{
	var_122_int = 0; var_123_int = 0;
	GetPlayerMoneyCount(var_123_int);
	SendMessage(var_123_int, "money");
	return 2;
}


