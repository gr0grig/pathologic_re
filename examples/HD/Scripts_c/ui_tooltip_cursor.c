// @IMPORTS: SetOwnerDraw/1,SetNeedUpdate/1,ProcessEvents/0,ClientToScreen/2,Blit/3,HasInvItemProperty/3,GetInvItemProperty/3,GetInvItemName/2,GetGameTime/1,GetContainer/1,GetInvItemSprite2/2,LoadImage/1,BlitClipped/8,StretchBlit/6,GetStringByID/2,GetTextHeightInWidth/4,GetFontHeight/2,GetScreenSize/2,ScreenToClient/2,PrintInWidth/10
// @STRINGS: A:GetTooltipType|A:GetTooltipText|A:GetTooltipObject|W:default|A:GetItemID|W:Price|W:durability|A:HasProperty|A:GetProperty|W:BarterPrice|W:sellf|W:buyf|W:barter|W:bg|W:border|W:Description|W:Error: Item doesnt have description (FIXME!)|W:HasDurability|W: |W:%|W:HasUses|W:uses|W:grass_combination|W:im_inc|W:hl_inc|W:%
|W:organ_combination|W:DiseaseRate|W:HealthIncrease|W:: |A:size|A:get|A:GetTime|A:GetTextID|W::0|W::|A:remove|W:


// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,string,int,float params=0
// @EVENT_16: op=0x9 vars=object,object
// @EVENT_1: op=0x1d vars=float
// @EVENT_0: op=0x48 vars=
// @PE: 0x9,0x125,0x161

task_0_event_16(var_0_object, var_1_object, var_2_string, var_3_int, var_4_float, var_5_object, var_6_object)
{
	var_7_object = var_5_object;
	if(var_7_object != 0) {
		var_1_object = var_5_object;
		var_4_float = 0;
		@@@var_1_object:GetTooltipType(var_3_int);
		@@@var_1_object:GetTooltipText(var_2_string);
		@@@var_1_object:GetTooltipObject(var_0_object);
		var_8_int = 0; var_9_string = ""; var_10_object = Obj();
		var_8_int = var_3_int;
		var_9_string = var_2_string;
		var_10_object = var_0_object;
		func_280(var_10_object);
	} else {
		var_1_object = 0;
	}
	return 0;
	
}


task_0_event_1(var_0_object, var_1_object, var_2_string, var_3_int, var_4_float, var_5_float)
{
	var_6_int = 0; var_7_string = ""; var_8_object = Obj(); var_9_int = 0; var_10_string = ""; var_11_object = Obj();
	var_12_bool = var_1_object == 0; //@nz
	if(var_12_bool != 0) {
		return 6;
	}
	@@@var_1_object:GetTooltipType(var_9_int);
	@@@var_1_object:GetTooltipText(var_10_string);
	@@@var_1_object:GetTooltipObject(var_11_object);
	var_13_bool = 0;
	var_13_bool = 1;
	var_14_bool = 0;
	var_14_bool = 1;
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj();
	var_11_object = var_16_object;
	var_17_object = var_0_object;
	func_1218(var_15_bool, var_16_object, var_17_object);
	var_39_bool = var_15_bool == 0; //@nz
	if(var_39_bool != 1) {
		var_40_bool = var_9_int != var_3_int;
		if(var_40_bool != 1) {
			var_14_bool = 0;
		}
	}
	if(var_14_bool != 1) {
		var_41_bool = var_10_string != var_2_string;
		if(var_41_bool != 1) {
			var_13_bool = 0;
		}
	}
	if(var_13_bool != 0) {
		var_3_int = var_9_int;
		var_2_string = var_10_string;
		var_0_object = var_11_object;
		var_42_int = 0; var_43_string = ""; var_44_object = Obj();
		var_42_int = var_3_int;
		var_43_string = var_2_string;
		var_44_object = var_0_object;
		func_280(var_44_object);
	} else {
		(float)0 = (float)0 + var_5_float;
	}
	return 6;
	
}
EMIT "Stack[-1] = 0";


task_0_event_0(var_0_object, var_1_object, var_2_string, var_3_int, var_4_float)
{
	var_5_float = 0; var_6_int = 0; var_7_int = 0; var_8_float = 0; var_9_int = 0; var_10_int = 0;
	var_11_bool = var_1_object == 0; //@nz
	if(var_11_bool != 0) {
		return 6;
	}
	var_13_bool = var_4_float < (float)0.5;
	if(var_13_bool != 0) {
		var_8_float = 0;
	} else {
		var_786_bool = var_4_float < (float)0.6499999761581421;
		if(var_786_bool != 0) {
			var_788_int = var_4_float - (float)0.5;
			var_8_float = var_788_int / (float)0.15000000596046448;
			goto Label_90;
		}
		var_8_float = 1;
	}
Label_90:
	ClientToScreen((int)0, (int)0);
	var_14_int = 0; var_15_string = ""; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_float = 0;
	var_14_int = var_3_int;
	var_15_string = var_2_string;
	var_16_object = var_0_object;
	var_9_int = var_17_int;
	var_10_int = var_18_int;
	var_8_float = var_19_float;
	func_293(var_14_int, var_15_string, var_16_object, var_17_int, var_18_int, var_19_float);
	Blit("default", (int)0, (int)0);
	return 6;
	
}


main(var_0_object, var_1_object, var_2_string, var_3_int, var_4_float)
{
	SetOwnerDraw((bool)1);
	SetNeedUpdate((bool)1);
	ProcessEvents();
	return 0;
}


func_193(var_140_string, var_141_object)
{
	var_142_int = 0; var_143_string = ""; var_144_int = 0; var_145_string = "";
	var_146_int = 0; var_147_object = Obj();
	var_141_object = var_147_object;
	func_109(var_146_int, var_147_object);
	var_146_int = var_144_int;
	GetInvItemName(var_145_string, var_144_int);
	var_145_string = var_140_string;
	return 4;
}


func_1218(var_15_bool, var_16_object, var_17_object)
{
	var_18_int = 0; var_19_string = ""; var_20_string = ""; var_21_int = 0; var_22_string = ""; var_23_string = "";
	var_24_bool = 0;
	var_24_bool = 0;
	var_25_bool = var_16_object == 0; //@ne
	if(var_25_bool != 0) {
		var_26_bool = var_17_object != 0; //@nn
		if(var_26_bool != 0) {
			var_24_bool = 1;
		}
	}
	if(var_24_bool != 0) {
		var_15_bool = 0;
		return 6;
	}
	var_27_bool = 0;
	var_27_bool = 0;
	var_28_bool = var_17_object == 0; //@ne
	if(var_28_bool != 0) {
		var_29_bool = var_16_object != 0; //@nn
		if(var_29_bool != 0) {
			var_27_bool = 1;
		}
	}
	if(var_27_bool != 0) {
		var_15_bool = 0;
		return 6;
	}
	var_30_bool = 0;
	var_30_bool = 0;
	var_31_bool = var_16_object == 0; //@ne
	if(var_31_bool != 0) {
		var_32_bool = var_17_object == 0; //@ne
		if(var_32_bool != 0) {
			var_30_bool = 1;
		}
	}
	if(var_30_bool != 0) {
		var_15_bool = 1;
		return 6;
	}
	var_33_int = 0; var_34_object = Obj();
	var_16_object = var_34_object;
	func_109(var_33_int, var_34_object);
	var_33_int = var_21_int;
	GetInvItemSprite2(var_22_string, var_21_int);
	var_37_int = 0; var_38_object = Obj();
	var_17_object = var_38_object;
	func_109(var_37_int, var_38_object);
	var_37_int = var_21_int;
	GetInvItemSprite2(var_23_string, var_21_int);
	var_15_bool = var_22_string == var_23_string;
	return 6;
}


func_353(var_172_int, var_173_int, var_174_int, var_175_int, var_176_float)
{
	BlitClipped("bg", var_172_int, var_173_int, var_172_int, var_173_int, var_174_int, var_175_int, var_176_float);
	StretchBlit("border", var_172_int, var_173_int, var_174_int, (int)1, var_176_float);
	var_181_int = var_173_int + var_175_int;
	var_183_int = var_181_int - (int)1;
	StretchBlit("border", var_172_int, var_183_int, var_174_int, (int)1, var_176_float);
	StretchBlit("border", var_172_int, var_173_int, (int)1, var_175_int, var_176_float);
	var_188_int = var_172_int + var_174_int;
	var_190_int = var_188_int - (int)1;
	StretchBlit("border", var_190_int, var_173_int, (int)1, var_175_int, var_176_float);
	return 0;
}


func_293(var_14_int, var_15_string, var_16_object, var_17_int, var_18_int, var_19_float)
{
	var_21_bool = var_14_int == (int)1;
	if(var_21_bool != 0) {
		var_22_int = 0; var_23_int = 0; var_24_object = Obj(); var_25_string = ""; var_26_float = 0;
		var_17_int = var_22_int;
		var_18_int = var_23_int;
		var_16_object = var_24_object;
		var_15_string = var_25_string;
		var_19_float = var_26_float;
		func_424(var_22_int, var_23_int, var_24_object, var_25_string, var_26_float);
	} else {
		var_298_bool = var_14_int == (int)2;
		if(var_298_bool != 0) {
			var_299_int = 0; var_300_int = 0; var_301_object = Obj(); var_302_float = 0;
			var_17_int = var_299_int;
			var_18_int = var_300_int;
			var_16_object = var_301_object;
			var_19_float = var_302_float;
			func_1044(var_299_int, var_300_int, var_301_object, var_302_float);
			goto Label_352;
		}
		var_392_bool = var_14_int == (int)3;
		if(var_392_bool != 0) {
			var_393_int = 0; var_394_int = 0; var_395_object = Obj(); var_396_bool = 0; var_397_float = 0;
			var_17_int = var_393_int;
			var_18_int = var_394_int;
			var_16_object = var_395_object;
			var_19_float = var_397_float;
			func_717(var_393_int, var_394_int, var_395_object, (bool)1, var_397_float);
			goto Label_352;
		}
		var_733_bool = var_14_int == (int)4;
		if(var_733_bool != 0) {
			var_734_int = 0; var_735_int = 0; var_736_object = Obj(); var_737_bool = 0; var_738_float = 0;
			var_17_int = var_734_int;
			var_18_int = var_735_int;
			var_16_object = var_736_object;
			var_19_float = var_738_float;
			func_717(var_734_int, var_735_int, var_736_object, (bool)0, var_738_float);
			goto Label_352;
		}
		var_740_bool = var_14_int == (int)5;
		if(var_740_bool == 0) goto Label_352;
		var_741_int = 0; var_742_int = 0; var_743_string = ""; var_744_object = Obj(); var_745_float = 0;
		var_17_int = var_741_int;
		var_18_int = var_742_int;
		var_15_string = var_743_string;
		var_16_object = var_744_object;
		var_19_float = var_745_float;
		func_1167(var_742_int, var_743_string, var_744_object, var_745_float);
	}
Label_352:
	return 0;
	
}


func_424(var_22_int, var_23_int, var_24_object, var_25_string, var_26_float)
{
	var_27_int = 0; var_28_string = ""; var_29_string = ""; var_30_string = ""; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_string = ""; var_44_bool = 0; var_45_float = 0; var_46_float = 0; var_47_string = ""; var_48_string = ""; var_49_string = ""; var_50_int = 0; var_51_int = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; var_55_float = 0; var_56_string = ""; var_57_string = ""; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_string = ""; var_66_string = ""; var_67_string = ""; var_68_bool = 0; var_69_int = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0; var_73_bool = 0; var_74_int = 0; var_75_int = 0; var_76_bool = 0; var_77_bool = 0; var_78_int = 0; var_79_int = 0; var_80_string = ""; var_81_bool = 0; var_82_float = 0; var_83_float = 0; var_84_string = ""; var_85_string = ""; var_86_string = ""; var_87_int = 0; var_88_int = 0; var_89_float = 0; var_90_float = 0; var_91_float = 0; var_92_float = 0; var_93_string = ""; var_94_string = ""; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_int = 0; var_99_int = 0; var_100_int = 0;
	var_101_bool = var_24_object == 0; //@nz
	if(var_101_bool != 0) {
		return 74;
	}
	var_102_int = 0; var_103_object = Obj();
	var_24_object = var_103_object;
	func_109(var_102_int, var_103_object);
	var_102_int = var_64_int;
	HasInvItemProperty(var_68_bool, var_64_int, "Description");
	var_107_bool = var_68_bool;
	if(var_107_bool != 0) {
		GetInvItemProperty(var_69_int, var_64_int, "Description");
		GetStringByID(var_65_string, var_69_int);
	} else {
									var_65_string = "Error: Item doesnt have description (FIXME!)";
	}
	GetTextHeightInWidth(var_70_int, "default", (int)268, var_65_string);
	GetFontHeight(var_71_int, "default");
	var_70_int = var_70_int + var_71_int;
	HasInvItemProperty(var_72_bool, var_64_int, "HasDurability");
	@@var_24_object:HasProperty(var_73_bool, "durability");
	var_114_bool = 0;
	var_114_bool = 1;
	var_115_bool = var_73_bool;
	if(var_115_bool != 1) {
		var_116_bool = var_72_bool;
		if(var_116_bool != 1) {
			var_114_bool = 0;
		}
	}
	if(var_114_bool != 0) {
		var_117_bool = var_73_bool;
		if(var_117_bool != 0) {
			@@var_24_object:GetProperty(var_74_int, "durability");
		} else {
								var_74_int = 100;

		}
		GetStringByID(var_66_string, (int)7);
		var_121_int = " " + var_74_int;
		var_123_int = var_121_int + "%";
		var_66_string = var_66_string + var_123_int;
		GetTextHeightInWidth(var_75_int, "default", (int)268, var_66_string);
		var_127_float = var_75_int * (int)2;
		var_70_int = var_70_int + var_127_float;
	}
	HasInvItemProperty(var_76_bool, var_64_int, "HasUses");
	@@var_24_object:HasProperty(var_77_bool, "uses");
	var_130_bool = 0;
	var_130_bool = 1;
	var_131_bool = var_77_bool;
	if(var_131_bool != 1) {
		var_132_bool = var_76_bool;
		if(var_132_bool != 1) {
			var_130_bool = 0;
		}
	}
	if(var_130_bool != 0) {
		var_133_bool = var_77_bool;
		if(var_133_bool != 0) {
			@@var_24_object:GetProperty(var_78_int, "uses");
		} else {
						var_78_int = 1;

		}
		GetStringByID(var_67_string, (int)1006);
		var_137_int = " " + var_78_int;
		var_67_string = var_67_string + var_137_int;
		GetTextHeightInWidth(var_79_int, "default", (int)268, var_67_string);
		var_70_int = var_70_int + var_79_int;
	}
	var_81_bool = 0;
	var_140_string = ""; var_141_object = Obj();
	var_24_object = var_141_object;
	func_193(var_140_string, var_141_object);
	var_149_bool = var_140_string == "grass_combination";
	if(var_149_bool != 0) {
		var_81_bool = 1;
		@@var_24_object:GetProperty(var_82_float, "im_inc");
		@@var_24_object:GetProperty(var_83_float, "hl_inc");
		GetStringByID(var_84_string, (int)8);
		GetStringByID(var_86_string, (int)9);
		var_87_int = var_82_float * (int)100;
		var_156_int = var_84_string + " ";
		var_157_int = var_156_int + var_87_int;
		var_158_string = "%
	";
		var_80_string = var_157_int + var_158_string;
		var_87_int = var_83_float * (int)100;
		var_161_int = var_86_string + " ";
		var_162_int = var_161_int + var_87_int;
		var_163_string = "%
	";
		var_164_int = var_162_int + var_163_string;
		var_80_string = var_80_string + var_164_int;
		GetTextHeightInWidth(var_88_int, "default", (int)268, var_80_string);
		var_70_int = var_70_int + var_88_int;
	} else {
				var_276_string = ""; var_277_object = Obj();
				var_24_object = var_277_object;
				func_193(var_276_string, var_277_object);
				var_279_bool = var_276_string == "organ_combination";
				if(var_279_bool == 0) goto Label_603;
				var_81_bool = 1;
				@@var_24_object:GetProperty(var_89_float, "DiseaseRate");
				@@var_24_object:GetProperty(var_91_float, "HealthIncrease");
				GetStringByID(var_93_string, (int)11);
				GetStringByID(var_94_string, (int)13);
				var_95_int = var_89_float * (int)100;
				var_286_int = var_93_string + " ";
				var_287_int = var_286_int + var_95_int;
				var_288_string = "%
			";
				var_80_string = var_287_int + var_288_string;
				var_95_int = var_91_float * (int)100;
				var_291_int = var_94_string + " ";
				var_292_int = var_291_int + var_95_int;
				var_293_string = "%
			";
				var_294_int = var_292_int + var_293_string;
				var_80_string = var_80_string + var_294_int;
				GetTextHeightInWidth(var_96_int, "default", (int)268, var_80_string);
				var_70_int = var_70_int + var_96_int;

	}
Label_603:
	GetScreenSize(var_97_int, var_98_int);
	var_70_int = var_70_int + (int)266;
	var_168_int = var_97_int - var_22_int;
	var_170_bool = var_168_int > (int)300;
	if(var_170_bool != 0) {
		var_22_int = var_99_int;
	} else {
			var_99_int = var_22_int - (int)300;

	}
	var_171_bool = var_23_int > var_70_int;
	if(var_171_bool != 0) {
		var_100_int = var_23_int - var_70_int;
	} else {
		var_23_int = var_100_int;
		var_271_int = var_100_int + var_70_int;
		var_273_bool = var_271_int > (int)600;
		if(var_273_bool == 0) goto Label_626;
		var_100_int = (int)600 - var_70_int;

	}
Label_626:
	ScreenToClient(var_99_int, var_100_int);
	var_172_int = 0; var_173_int = 0; var_174_int = 0; var_175_int = 0; var_176_float = 0;
	var_99_int = var_172_int;
	var_100_int = var_173_int;
	var_70_int = var_175_int;
	var_26_float = var_176_float;
	func_353(var_172_int, var_173_int, (int)300, var_175_int, var_176_float);
	var_192_int = 0; var_193_int = 0; var_194_object = Obj(); var_195_float = 0;
	var_192_int = var_99_int + (int)41;
	var_193_int = var_100_int + (int)16;
	var_24_object = var_194_object;
	var_26_float = var_195_float;
	func_380(var_192_int, var_193_int, var_194_object, var_195_float);
	var_100_int = var_100_int + (int)250;
	var_230_int = var_99_int + (int)16;
	PrintInWidth(var_70_int, "default", var_230_int, var_100_int, (int)268, var_65_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_26_float);
	var_235_int = var_70_int + var_71_int;
	var_100_int = var_100_int + var_235_int;
	var_236_bool = 0;
	var_236_bool = 1;
	var_237_bool = var_73_bool;
	if(var_237_bool != 1) {
		var_238_bool = var_72_bool;
		if(var_238_bool != 1) {
			var_236_bool = 0;
		}
	}
	if(var_236_bool != 0) {
		var_241_int = var_99_int + (int)16;
		PrintInWidth(var_70_int, "default", var_241_int, var_100_int, (int)268, var_66_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_26_float);
		var_100_int = var_100_int + var_70_int;
	}
	var_246_bool = 0;
	var_246_bool = 1;
	var_247_bool = var_77_bool;
	if(var_247_bool != 1) {
		var_248_bool = var_76_bool;
		if(var_248_bool != 1) {
			var_246_bool = 0;
		}
	}
	if(var_246_bool != 0) {
		var_251_int = var_99_int + (int)16;
		PrintInWidth(var_70_int, "default", var_251_int, var_100_int, (int)268, var_67_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_26_float);
		var_100_int = var_100_int + var_70_int;
	}
	var_256_bool = var_81_bool;
	if(var_256_bool != 0) {
		var_259_int = var_99_int + (int)16;
		PrintInWidth(var_70_int, "default", var_259_int, var_100_int, (int)268, var_80_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_26_float);
		var_100_int = var_100_int + var_70_int;
	}
	var_266_int = var_99_int + (int)16;
	PrintInWidth(var_70_int, "default", var_266_int, var_100_int, (int)268, var_25_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_26_float);
	var_100_int = var_100_int + var_70_int;
	return 74;
	
}


func_264(var_489_int)
{
	var_490_object = Obj(); var_491_bool = 0; var_492_int = 0; var_493_object = Obj(); var_494_bool = 0; var_495_int = 0;
	GetContainer(var_493_object);
	@@var_493_object:HasProperty("barter", var_494_bool);
	var_497_bool = var_494_bool == 0; //@nz
	if(var_497_bool != 0) {
		var_489_int = 0;
		return 6;
	}
	@@var_493_object:GetProperty("barter", var_495_int);
	var_495_int = var_489_int;
	return 6;
}
EMIT "Stack[-3] = 0";


func_203(var_519_int)
{
	var_520_float = 0; var_521_float = 0;
	GetGameTime(var_521_float);
	var_523_int = 0;
	var_523_int = var_521_float / (int)24;
	var_519_int = (int)1 + var_523_int;
	return 2;
}


func_109(var_102_int, var_103_object)
{
	var_104_int = 0; var_105_int = 0;
	@@var_103_object:GetItemID(var_105_int);
	var_105_int = var_102_int;
	return 2;
}


func_717(var_393_int, var_394_int, var_395_object, var_396_bool, var_397_float)
{
	var_398_object = Obj(); var_399_float = 0; var_400_int = 0; var_401_int = 0; var_402_int = 0; var_403_float = 0; var_404_string = ""; var_405_bool = 0; var_406_int = 0; var_407_string = ""; var_408_int = 0; var_409_string = ""; var_410_bool = 0; var_411_bool = 0; var_412_int = 0; var_413_int = 0; var_414_string = ""; var_415_bool = 0; var_416_bool = 0; var_417_int = 0; var_418_int = 0; var_419_string = ""; var_420_bool = 0; var_421_float = 0; var_422_float = 0; var_423_float = 0; var_424_string = ""; var_425_string = ""; var_426_string = ""; var_427_int = 0; var_428_int = 0; var_429_float = 0; var_430_float = 0; var_431_string = ""; var_432_string = ""; var_433_int = 0; var_434_int = 0; var_435_int = 0; var_436_int = 0; var_437_int = 0; var_438_int = 0; var_439_object = Obj(); var_440_float = 0; var_441_int = 0; var_442_int = 0; var_443_int = 0; var_444_float = 0; var_445_string = ""; var_446_bool = 0; var_447_int = 0; var_448_string = ""; var_449_int = 0; var_450_string = ""; var_451_bool = 0; var_452_bool = 0; var_453_int = 0; var_454_int = 0; var_455_string = ""; var_456_bool = 0; var_457_bool = 0; var_458_int = 0; var_459_int = 0; var_460_string = ""; var_461_bool = 0; var_462_float = 0; var_463_float = 0; var_464_float = 0; var_465_string = ""; var_466_string = ""; var_467_string = ""; var_468_int = 0; var_469_int = 0; var_470_float = 0; var_471_float = 0; var_472_string = ""; var_473_string = ""; var_474_int = 0; var_475_int = 0; var_476_int = 0; var_477_int = 0; var_478_int = 0; var_479_int = 0;
	var_480_bool = var_395_object == 0; //@nz
	if(var_480_bool != 0) {
		return 82;
	}
	GetContainer(var_439_object);
	GetGameTime(var_440_float);
	var_483_float = var_440_float / (int)24;
	var_441_int = (int)1 + var_483_float;
	var_484_int = 0; var_485_object = Obj();
	var_395_object = var_485_object;
	func_109(var_484_int, var_485_object);
	var_484_int = var_442_int;
	var_486_int = 0; var_487_object = Obj(); var_488_int = 0;
	var_395_object = var_487_object;
	func_264((int)0);
	var_489_int = var_488_int;
	func_114(var_486_int, var_487_object, var_488_int);
	var_486_int = var_443_int;
	var_554_bool = var_396_bool;
	if(var_554_bool != 0) {
		var_555_float = 0; var_556_object = Obj(); var_557_int = 0; var_558_int = 0;
		var_439_object = var_556_object;
		var_441_int = var_557_int;
		func_264((int)0);
		var_559_int = var_558_int;
		func_212(var_555_float, var_556_object, var_557_int, var_558_int);
		var_555_float = var_444_float;
	} else {
										var_711_float = 0; var_712_object = Obj(); var_713_int = 0; var_714_int = 0;
										var_439_object = var_712_object;
										var_441_int = var_713_int;
										func_264((int)0);
										var_715_int = var_714_int;
										func_238(var_711_float, var_712_object, var_713_int, var_714_int);
										var_711_float = var_444_float;
	}
	var_443_int = var_443_int * var_444_float;
	HasInvItemProperty(var_446_bool, var_442_int, "Description");
	var_577_bool = var_446_bool;
	if(var_577_bool != 0) {
		GetInvItemProperty(var_447_int, var_442_int, "Description");
		GetStringByID(var_445_string, var_447_int);
	} else {
									var_445_string = "Error: Item doesnt have description (FIXME!)";

	}
	var_579_string = "
";
	var_445_string = var_445_string + var_579_string;
	GetStringByID(var_448_string, (int)5);
	var_582_int = var_448_string + ": ";
	var_583_int = var_582_int + var_443_int;
	var_445_string = var_445_string + var_583_int;
	GetTextHeightInWidth(var_449_int, "default", (int)268, var_445_string);
	var_449_int = var_449_int + (int)266;
	HasInvItemProperty(var_451_bool, var_442_int, "HasDurability");
	@@var_395_object:HasProperty(var_452_bool, "durability");
	var_589_bool = 0;
	var_589_bool = 1;
	var_590_bool = var_452_bool;
	if(var_590_bool != 1) {
		var_591_bool = var_451_bool;
		if(var_591_bool != 1) {
			var_589_bool = 0;
		}
	}
	if(var_589_bool != 0) {
		var_592_bool = var_452_bool;
		if(var_592_bool != 0) {
			@@var_395_object:GetProperty(var_453_int, "durability");
		} else {
								var_453_int = 100;

		}
		GetStringByID(var_450_string, (int)7);
		var_596_int = " " + var_453_int;
		var_598_int = var_596_int + "%";
		var_450_string = var_450_string + var_598_int;
		GetTextHeightInWidth(var_454_int, "default", (int)268, var_450_string);
		var_449_int = var_449_int + var_454_int;
	}
	HasInvItemProperty(var_456_bool, var_442_int, "HasUses");
	@@var_395_object:HasProperty(var_457_bool, "uses");
	var_603_bool = 0;
	var_603_bool = 1;
	var_604_bool = var_457_bool;
	if(var_604_bool != 1) {
		var_605_bool = var_456_bool;
		if(var_605_bool != 1) {
			var_603_bool = 0;
		}
	}
	if(var_603_bool != 0) {
		var_606_bool = var_457_bool;
		if(var_606_bool != 0) {
			@@var_395_object:GetProperty(var_458_int, "uses");
		} else {
						var_458_int = 1;

		}
		GetStringByID(var_455_string, (int)1006);
		var_610_int = " " + var_458_int;
		var_455_string = var_455_string + var_610_int;
		GetTextHeightInWidth(var_459_int, "default", (int)268, var_455_string);
		var_449_int = var_449_int + var_459_int;
	}
	var_461_bool = 0;
	var_613_string = ""; var_614_object = Obj();
	var_395_object = var_614_object;
	func_193(var_613_string, var_614_object);
	var_616_bool = var_613_string == "grass_combination";
	if(var_616_bool != 0) {
		var_461_bool = 1;
		@@var_395_object:GetProperty(var_462_float, "im_inc");
		@@var_395_object:GetProperty(var_463_float, "hl_inc");
		GetStringByID(var_465_string, (int)8);
		GetStringByID(var_467_string, (int)9);
		var_468_int = var_462_float * (int)100;
		var_623_int = var_465_string + " ";
		var_624_int = var_623_int + var_468_int;
		var_625_string = "%
	";
		var_460_string = var_624_int + var_625_string;
		var_468_int = var_463_float * (int)100;
		var_628_int = var_467_string + " ";
		var_629_int = var_628_int + var_468_int;
		var_630_string = "%
	";
		var_631_int = var_629_int + var_630_string;
		var_460_string = var_460_string + var_631_int;
		GetTextHeightInWidth(var_469_int, "default", (int)268, var_460_string);
		var_449_int = var_449_int + var_469_int;
	} else {
				var_690_string = ""; var_691_object = Obj();
				var_395_object = var_691_object;
				func_193(var_690_string, var_691_object);
				var_693_bool = var_690_string == "organ_combination";
				if(var_693_bool == 0) goto Label_942;
				var_461_bool = 1;
				@@var_395_object:GetProperty(var_470_float, "DiseaseRate");
				@@var_395_object:GetProperty(var_471_float, "HealthIncrease");
				GetStringByID(var_472_string, (int)11);
				GetStringByID(var_473_string, (int)13);
				var_474_int = var_470_float * (int)100;
				var_700_int = var_472_string + " ";
				var_701_int = var_700_int + var_474_int;
				var_702_string = "%
			";
				var_460_string = var_701_int + var_702_string;
				var_474_int = var_471_float * (int)100;
				var_705_int = var_473_string + " ";
				var_706_int = var_705_int + var_474_int;
				var_707_string = "%
			";
				var_708_int = var_706_int + var_707_string;
				var_460_string = var_460_string + var_708_int;
				GetTextHeightInWidth(var_475_int, "default", (int)268, var_460_string);
				var_449_int = var_449_int + var_475_int;

	}
Label_942:
	GetScreenSize(var_476_int, var_477_int);
	var_634_int = var_476_int - var_393_int;
	var_636_bool = var_634_int > (int)300;
	if(var_636_bool != 0) {
		var_393_int = var_478_int;
	} else {
			var_478_int = var_393_int - (int)300;

	}
	var_637_bool = var_394_int > var_449_int;
	if(var_637_bool != 0) {
		var_479_int = var_394_int - var_449_int;
	} else {
		var_394_int = var_479_int;
		var_685_int = var_479_int + var_449_int;
		var_687_bool = var_685_int > (int)600;
		if(var_687_bool == 0) goto Label_963;
		var_479_int = (int)600 - var_449_int;

	}
Label_963:
	ScreenToClient(var_478_int, var_479_int);
	var_638_int = 0; var_639_int = 0; var_640_int = 0; var_641_int = 0; var_642_float = 0;
	var_478_int = var_638_int;
	var_479_int = var_639_int;
	var_449_int = var_641_int;
	var_397_float = var_642_float;
	func_353(var_638_int, var_639_int, (int)300, var_641_int, var_642_float);
	var_643_int = 0; var_644_int = 0; var_645_object = Obj(); var_646_float = 0;
	var_643_int = var_478_int + (int)16;
	var_644_int = var_479_int + (int)16;
	var_395_object = var_645_object;
	var_397_float = var_646_float;
	func_380(var_643_int, var_644_int, var_645_object, var_646_float);
	var_479_int = var_479_int + (int)250;
	var_652_int = var_478_int + (int)16;
	PrintInWidth(var_449_int, "default", var_652_int, var_479_int, (int)268, var_445_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_397_float);
	var_479_int = var_479_int + var_449_int;
	var_657_bool = 0;
	var_657_bool = 1;
	var_658_bool = var_452_bool;
	if(var_658_bool != 1) {
		var_659_bool = var_451_bool;
		if(var_659_bool != 1) {
			var_657_bool = 0;
		}
	}
	if(var_657_bool != 0) {
		var_662_int = var_478_int + (int)16;
		PrintInWidth(var_449_int, "default", var_662_int, var_479_int, (int)268, var_450_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_397_float);
		var_479_int = var_479_int + var_449_int;
	}
	var_667_bool = 0;
	var_667_bool = 1;
	var_668_bool = var_457_bool;
	if(var_668_bool != 1) {
		var_669_bool = var_456_bool;
		if(var_669_bool != 1) {
			var_667_bool = 0;
		}
	}
	if(var_667_bool != 0) {
		var_672_int = var_478_int + (int)16;
		PrintInWidth(var_449_int, "default", var_672_int, var_479_int, (int)268, var_455_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_397_float);
		var_479_int = var_479_int + var_449_int;
	}
	var_677_bool = var_461_bool;
	if(var_677_bool != 0) {
		var_680_int = var_478_int + (int)16;
		PrintInWidth(var_449_int, "default", var_680_int, var_479_int, (int)268, var_460_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_397_float);
		var_479_int = var_479_int + var_449_int;
	}
	return 82;
	
}
EMIT "Stack[-41] = 0";


func_1167(var_741_int, var_742_int, var_743_string, var_745_float)
{
	var_746_int = 0; var_747_int = 0; var_748_int = 0; var_749_int = 0; var_750_int = 0; var_751_int = 0; var_752_int = 0; var_753_int = 0; var_754_int = 0; var_755_int = 0;
	var_745_float = 1;
	GetTextHeightInWidth(var_751_int, "default", (int)268, var_743_string);
	var_751_int = var_751_int + (int)32;
	GetScreenSize(var_752_int, var_753_int);
	var_759_int = var_752_int - var_741_int;
	var_761_bool = var_759_int > (int)300;
	if(var_761_bool != 0) {
		var_741_int = var_754_int;
	} else {
			var_754_int = var_741_int - (int)300;
	}
	var_762_bool = var_742_int > var_751_int;
	if(var_762_bool != 0) {
		var_755_int = var_742_int - var_751_int;
	} else {
		var_742_int = var_755_int;
		var_777_int = var_755_int + var_751_int;
		var_779_bool = var_777_int > (int)600;
		if(var_779_bool == 0) goto Label_1196;
		var_755_int = (int)600 - var_751_int;

	}
Label_1196:
	ScreenToClient(var_754_int, var_755_int);
	var_763_int = 0; var_764_int = 0; var_765_int = 0; var_766_int = 0; var_767_float = 0;
	var_754_int = var_763_int;
	var_755_int = var_764_int;
	var_751_int = var_766_int;
	var_745_float = var_767_float;
	func_353(var_763_int, var_764_int, (int)300, var_766_int, var_767_float);
	var_770_int = var_754_int + (int)16;
	var_772_int = var_755_int + (int)16;
	PrintInWidth(var_751_int, "default", var_770_int, var_772_int, (int)268, var_743_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_745_float);
	return 10;
	
}


func_238(var_711_float, var_712_object, var_713_int, var_714_int)
{
	var_716_float = 0; var_717_int = 0; var_718_bool = 0; var_719_float = 0; var_720_int = 0; var_721_bool = 0;
	var_723_bool = var_714_int != (int)0;
	if(var_723_bool != 0) {
		var_711_float = 1;
		return 6;
	}
	var_719_float = 1;
	var_720_int = 1;
	
Label_246:
	var_724_bool = var_720_int <= var_713_int;
	if(var_724_bool != 0) {
		var_726_int = "buyf" + var_720_int;
		@@var_712_object:HasProperty(var_726_int, var_721_bool);
		var_727_bool = var_721_bool;
		if(var_727_bool != 0) {
			var_729_int = "buyf" + var_720_int;
			@@var_712_object:GetProperty(var_729_int, var_719_float);
		}
		var_720_int = var_720_int + (int)1;
		goto Label_246;
	}
	var_711_float = var_719_float / (int)100;
	return 6;
}


func_114(var_486_int, var_487_object, var_488_int)
{
	var_499_int = 0; var_500_int = 0; var_501_int = 0; var_502_string = ""; var_503_bool = 0; var_504_bool = 0; var_505_int = 0; var_506_bool = 0; var_507_int = 0; var_508_int = 0; var_509_int = 0; var_510_int = 0; var_511_string = ""; var_512_bool = 0; var_513_bool = 0; var_514_int = 0; var_515_bool = 0; var_516_int = 0;
	var_518_bool = var_488_int == (int)0;
	if(var_518_bool != 0) {
		func_203((int)0);
		var_519_int = var_508_int;
		var_509_int = 0;
		var_510_int = 1;

	Label_124:
		var_525_bool = var_510_int <= var_508_int;
		if(var_525_bool != 0) {
			var_527_bool = var_510_int != (int)1;
			if(var_527_bool != 0) {
				"Price" = "Price" + var_510_int;
			}
			var_528_int = 0; var_529_object = Obj();
			var_487_object = var_529_object;
			func_109(var_528_int, var_529_object);
			HasInvItemProperty(var_512_bool, var_528_int, var_511_string);
			var_530_bool = var_512_bool == 0; //@nz
			if(var_530_bool != 0) {
			} else {
				var_532_int = 0; var_533_object = Obj();
				var_487_object = var_533_object;
				func_109(var_532_int, var_533_object);
				GetInvItemProperty(var_509_int, var_532_int, var_511_string);
		}
			@@var_487_object:HasProperty(var_513_bool, "durability");
			var_535_bool = var_513_bool;
			if(var_535_bool != 0) {
				@@var_487_object:GetProperty(var_514_int, "durability");
				var_540_float = var_514_int / (float)100.0;
				var_541_int = (float)1.0 + var_540_float;
				var_542_float = (float)0.5 * var_541_int;
				var_509_int = var_509_int * var_542_float;
			}
			var_509_int = var_486_int;
			return 18;
	}
		var_543_int = 0; var_544_object = Obj();
		var_487_object = var_544_object;
		func_109(var_543_int, var_544_object);
		var_546_int = "BarterPrice" + var_488_int;
		HasInvItemProperty(var_515_bool, var_543_int, var_546_int);
		var_547_bool = var_515_bool == 0; //@nz
		if(var_547_bool != 0) {
			return 18;
		}
		var_548_int = 0; var_549_object = Obj();
		var_487_object = var_549_object;
		func_109(var_548_int, var_549_object);
		var_551_int = "BarterPrice" + var_488_int;
		GetInvItemProperty(var_516_int, var_548_int, var_551_int);
		var_553_bool = var_516_int > (int)0;
		if(var_553_bool != 0) {
			var_516_int = (int)0;
			return 18;
		}
		var_486_int = -var_516_int;
		return 18;
	}
	var_510_int = var_510_int + (int)1;
	goto Label_124;
	
}


func_1044(var_299_int, var_300_int, var_301_object, var_302_float)
{
	var_303_int = 0; var_304_object = Obj(); var_305_string = ""; var_306_string = ""; var_307_int = 0; var_308_int = 0; var_309_float = 0; var_310_int = 0; var_311_float = 0; var_312_float = 0; var_313_int = 0; var_314_int = 0; var_315_int = 0; var_316_int = 0; var_317_int = 0; var_318_int = 0; var_319_int = 0; var_320_int = 0; var_321_object = Obj(); var_322_string = ""; var_323_string = ""; var_324_int = 0; var_325_int = 0; var_326_float = 0; var_327_int = 0; var_328_float = 0; var_329_float = 0; var_330_int = 0; var_331_int = 0; var_332_int = 0; var_333_int = 0; var_334_int = 0; var_335_int = 0; var_336_int = 0;
	var_337_bool = var_301_object == 0; //@nz
	if(var_337_bool != 0) {
		return 34;
	}
	var_302_float = 1;
	@@var_301_object:size(var_320_int);
	var_338_bool = var_320_int == 0; //@nz
	if(var_338_bool != 0) {
		return 34;
	}
Label_1054:
	var_339_int = var_320_int;
	if(var_339_int != 0) {
		var_325_int = 0;
		var_326_float = 0;
		var_327_int = 0;

	Label_1059:
		var_340_bool = var_327_int < var_320_int;
		if(var_340_bool != 0) {
			@@var_301_object:get(var_321_object, var_327_int);
			@@var_321_object:GetTime(var_328_float);
			var_341_bool = var_328_float > var_326_float;
			if(var_341_bool != 0) {
				var_328_float = var_326_float;
				var_327_int = var_325_int;
			}
			var_327_int = var_327_int + (int)1;
			goto Label_1059;
		}
		@@var_301_object:get(var_321_object, var_325_int);
		@@var_321_object:GetTextID(var_324_int);
		GetStringByID(var_323_string, var_324_int);
		@@var_321_object:GetTime(var_329_float);
		var_329_float = (int)0;
		var_343_int = var_330_int;
		var_345_int = var_329_float - var_330_int;
		var_331_int = (int)60 * var_345_int;
		var_347_bool = var_331_int < (int)10;
		if(var_347_bool != 0) {
			var_349_int = var_330_int % (int)24;
			var_351_int = var_349_int + ":0";
			var_352_int = var_351_int + var_331_int;
			var_354_int = var_352_int + " ";
			var_322_string = var_322_string + var_354_int;
		} else {
			var_359_int = var_330_int % (int)24;
			var_361_int = var_359_int + ":";
			var_362_int = var_361_int + var_331_int;
			var_364_int = var_362_int + " ";
			var_322_string = var_322_string + var_364_int;
	}
		GetTextHeightInWidth(var_332_int, "default", (int)268, var_322_string);
		var_332_int = var_332_int + (int)32;
		GetScreenSize(var_333_int, var_334_int);
		var_368_int = var_333_int - var_299_int;
		var_370_bool = var_368_int > (int)300;
		if(var_370_bool != 0) {
			var_299_int = var_335_int;
		} else {
				var_335_int = var_299_int - (int)300;
		}
		var_371_bool = var_300_int > var_332_int;
		if(var_371_bool != 0) {
			var_336_int = var_300_int - var_332_int;
		} else {
			var_300_int = var_336_int;
			var_386_int = var_336_int + var_332_int;
			var_388_bool = var_386_int > (int)600;
			if(var_388_bool == 0) goto Label_1144;
			var_336_int = (int)600 - var_332_int;

		}
	Label_1144:
		ScreenToClient(var_335_int, var_336_int);
		var_372_int = 0; var_373_int = 0; var_374_int = 0; var_375_int = 0; var_376_float = 0;
		var_335_int = var_372_int;
		var_336_int = var_373_int;
		var_332_int = var_375_int;
		var_302_float = var_376_float;
		func_353(var_372_int, var_373_int, (int)300, var_375_int, var_376_float);
		var_379_int = var_335_int + (int)16;
		var_381_int = var_336_int + (int)16;
		PrintInWidth(var_332_int, "default", var_379_int, var_381_int, (int)268, var_322_string, (float)0.6470588445663452, (float)0.6470588445663452, (float)0.6470588445663452, var_302_float);
		return 34;
	}
	var_322_string = var_322_string + var_323_string;
	@@var_301_object:remove(var_325_int);
	var_320_int = var_320_int + (int)-1;
	var_356_int = var_320_int;
	if(var_356_int != 0) {
		var_357_string = "

	";
		var_322_string = var_322_string + var_357_string;
	}
	goto Label_1054;
	
}
EMIT "Stack[-16] = 0";


func_212(var_555_float, var_556_object, var_557_int, var_558_int)
{
	var_560_float = 0; var_561_int = 0; var_562_bool = 0; var_563_float = 0; var_564_int = 0; var_565_bool = 0;
	var_567_bool = var_558_int != (int)0;
	if(var_567_bool != 0) {
		var_555_float = 1;
		return 6;
	}
	var_563_float = 1;
	var_564_int = 1;
	
Label_220:
	var_568_bool = var_564_int <= var_557_int;
	if(var_568_bool != 0) {
		var_570_int = "sellf" + var_564_int;
		@@var_556_object:HasProperty(var_570_int, var_565_bool);
		var_571_bool = var_565_bool;
		if(var_571_bool != 0) {
			var_573_int = "sellf" + var_564_int;
			@@var_556_object:GetProperty(var_573_int, var_563_float);
		}
		var_564_int = var_564_int + (int)1;
		goto Label_220;
	}
	var_555_float = var_563_float / (int)100;
	return 6;
}


func_280(var_44_object)
{
	var_45_int = 0; var_46_string = ""; var_47_int = 0; var_48_string = "";
	var_49_object = var_44_object;
	if(var_49_object != 0) {
		var_50_int = 0; var_51_object = Obj();
		var_44_object = var_51_object;
		func_109(var_50_int, var_51_object);
		var_50_int = var_47_int;
		GetInvItemSprite2(var_48_string, var_47_int);
		LoadImage(var_48_string);
	}
	return 4;
}


func_380(var_192_int, var_193_int, var_194_object, var_195_float)
{
	var_198_int = 0; var_199_string = ""; var_200_int = 0; var_201_string = "";
	var_202_bool = var_194_object == 0; //@nz
	if(var_202_bool != 0) {
		return 4;
	}
	var_203_int = 0; var_204_object = Obj();
	var_194_object = var_204_object;
	func_109(var_203_int, var_204_object);
	var_203_int = var_200_int;
	GetInvItemSprite2(var_201_string, var_200_int);
	StretchBlit(var_201_string, var_192_int, var_193_int, (int)218, (int)218, var_195_float);
	StretchBlit("border", var_192_int, var_193_int, (int)218, (int)1, var_195_float);
	var_212_int = var_193_int + (int)218;
	var_214_int = var_212_int - (int)1;
	StretchBlit("border", var_192_int, var_214_int, (int)218, (int)1, var_195_float);
	StretchBlit("border", var_192_int, var_193_int, (int)1, (int)218, var_195_float);
	var_222_int = var_192_int + (int)218;
	var_224_int = var_222_int - (int)1;
	StretchBlit("border", var_224_int, var_193_int, (int)1, (int)218, var_195_float);
	return 4;
}


