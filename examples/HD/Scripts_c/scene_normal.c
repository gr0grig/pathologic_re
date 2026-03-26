// @IMPORTS: GetLocator/3,irand/2,GetProperty/2,GetLocator/4,RandOneOf/11,AddActorByType/6,RandVec2D/2,RandOneOf/15,RandOneOf/13,CreateIntVector/1,Hold/0,RemoveActor/1,self/1,rand/1,CreateObjectVector/1,Trace/1,AddActor/6
// @STRINGS: W:pt_child|A:add|W:pt_woman|W:pt_man|W:pers_littleboy|W:pers_littlegirl|W:pers_boy|W:pers_girl|W:pers_woman|W:pers_wasted_girl|W:pers_unosha|W:pers_worker|W:pers_wasted_male|W:ilittleboy.xml|W:ilittlegirl.xml|W:iboy.xml|W:igirl.xml|W:igirl2.xml|W:iwoman.xml|W:iwasted_girl.xml|W:iunosha.xml|W:iunosha2.xml|W:iworker.xml|W:iworker2.xml|W:iwasted_male.xml|W:nailed|W:pt_item_food|W:pt_item_pfood|W:pt_item_knife|W:pt_item_bottle|W:bread|W:bottle_water|W:milk|W:vegetables|W:lemon|W:scripted_container|W:item_|W:_steal.xml|W:item_plate.xml|W:rusk|W:dried_fish|W:dried_meat|W:smoked_meat|W:fresh_fish|W:fresh_meat|W:tvirin|W:item_knife_steal.xml|W:bottle_empty|W:egg|A:size|A:get|A:IsDead|W:ToDie|A:remove|W:HasProperty|A:HasProperty|A:GetLocator|W:Locator |W: doesn't exist|A:clear
// @RUN_OP: 0xfe
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_5: op=0x23d vars=
// @EVENT_6: op=0x27d vars=
// @PE: 0x41,0x58,0xab,0xfe

task_0_event_5(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_string = ""; var_8_string = ""; var_9_string = ""; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_string = ""; var_17_string = "";
	var_18_bool = var_1_object == 0; //@nz
	if(var_18_bool != 0) {
		var_19_object = Obj();
		func_705(var_19_object);
		var_1_object = var_19_object;
	}
	var_22_bool = var_0_object == 0; //@nz
	if(var_22_bool != 0) {
		CreateIntVector(var_0_object);
	}
	var_23_object = Obj();
	var_23_object = var_1_object;
	func_729(var_23_object);
	@@@var_0_object:size(var_10_int);
	var_11_int = 0;
	
Label_591:
	var_34_bool = var_11_int < var_10_int;
	if(var_34_bool != 0) {
		@@@var_0_object:get(var_12_int, var_11_int);
		var_36_int = var_11_int + (int)1;
		@@@var_0_object:get(var_13_int, var_36_int);
		var_38_int = var_11_int + (int)2;
		@@@var_0_object:get(var_14_int, var_38_int);
		var_39_string = ""; var_40_int = 0; var_41_int = 0;
		var_12_int = var_40_int;
		var_13_int = var_41_int;
		func_65(var_39_string, var_40_int, var_41_int);
		var_39_string = var_15_string;
		var_51_string = ""; var_52_int = 0; var_53_int = 0;
		var_12_int = var_52_int;
		var_14_int = var_53_int;
		func_88(var_51_string, var_52_int, var_53_int);
		var_51_string = var_16_string;
		var_84_string = ""; var_85_int = 0; var_86_int = 0;
		var_12_int = var_85_int;
		var_14_int = var_86_int;
		func_171(var_84_string, var_85_int, var_86_int);
		var_84_string = var_17_string;
		var_117_object = Obj(); var_118_object = Obj(); var_119_string = ""; var_120_string = ""; var_121_string = "";
		func_694(Obj());
		var_122_object = var_118_object;
		var_15_string = var_119_string;
		var_16_string = var_120_string;
		var_17_string = var_121_string;
		func_711(var_117_object, var_118_object, var_119_string, var_120_string, var_121_string);
		@@@var_1_object:add(var_117_object);
		var_11_int = var_11_int + (int)3;
		goto Label_591;
	}
	return 16;
}


task_0_event_6(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_bool = 0;
	@@@var_1_object:size(var_6_int);
	var_7_int = 0;
	
Label_641:
	var_10_bool = var_7_int < var_6_int;
	if(var_10_bool != 0) {
		@@@var_1_object:get(var_8_object, var_7_int);
		var_11_bool = var_8_object != 0; //@nn
		if(var_11_bool != 0) {
			@@var_8_object:IsDead(var_9_bool);
			var_12_bool = var_9_bool == 0; //@nz
			if(var_12_bool == 0) goto Label_661;
			var_13_bool = 0; var_14_object = Obj(); var_15_string = "";
			var_8_object = var_14_object;
			func_682(var_13_bool, var_14_object, "ToDie");
			var_22_bool = var_13_bool == 0; //@nz
			if(var_22_bool != 0) {
				var_7_int = var_7_int + (int)1;
			} else {
				RemoveActor(var_8_object);
		}
			@@@var_1_object:remove(var_7_int);
			var_25_float = var_7_int * (int)3;
			var_27_int = var_7_int + (int)1;
			var_29_float = var_27_int * (int)3;
			@@@var_0_object:remove(var_25_float, var_29_float);
			var_6_int = var_6_int + (int)-1;
			var_8_object = 0;
	}
		var_31_object = Obj();
		var_31_object = var_1_object;
		func_729(var_31_object);
		goto Label_641;
	}
	return 8;
	
}


main(var_0_object, var_1_object)
{
	func_261();
	func_555(var_0_object, var_1_object);
	return 0;
}


func_0(var_207_object)
{
	var_208_int = 0; var_209_string = ""; var_210_bool = 0; var_211_cvector = CVector(0,0,0); var_212_int = 0; var_213_int = 0; var_214_string = ""; var_215_bool = 0; var_216_cvector = CVector(0,0,0); var_217_int = 0; var_218_int = 0; var_219_string = ""; var_220_bool = 0; var_221_cvector = CVector(0,0,0); var_222_int = 0; var_223_int = 0; var_224_string = ""; var_225_bool = 0; var_226_cvector = CVector(0,0,0); var_227_int = 0; var_228_int = 0; var_229_string = ""; var_230_bool = 0; var_231_cvector = CVector(0,0,0); var_232_int = 0; var_233_int = 0; var_234_string = ""; var_235_bool = 0; var_236_cvector = CVector(0,0,0); var_237_int = 0;
	var_223_int = 1;
	
Label_2:
	var_224_string = "pt_child" + var_223_int;
	GetLocator(var_224_string, var_225_bool, var_226_cvector);
	var_239_bool = var_225_bool == 0; //@nz
	if(var_239_bool != 0) {
	} else {
				@@var_207_object:add((int)0);
				@@var_207_object:add(var_223_int);
				irand(var_227_int, (int)5);
				@@var_207_object:add(var_227_int);
				var_223_int = var_223_int + (int)1;
				goto Label_2;
	}
	var_228_int = 1;
	
Label_23:
	var_229_string = "pt_woman" + var_228_int;
	GetLocator(var_229_string, var_230_bool, var_231_cvector);
	var_241_bool = var_230_bool == 0; //@nz
	if(var_241_bool != 0) {
	} else {
			@@var_207_object:add((int)1);
			@@var_207_object:add(var_228_int);
			irand(var_232_int, (int)2);
			@@var_207_object:add(var_232_int);
			var_228_int = var_228_int + (int)1;
			goto Label_23;

	}
	var_233_int = 1;
	
Label_44:
	var_234_string = "pt_man" + var_233_int;
	GetLocator(var_234_string, var_235_bool, var_236_cvector);
	var_243_bool = var_235_bool == 0; //@nz
	if(var_243_bool != 0) {
	} else {
		@@var_207_object:add((int)2);
		@@var_207_object:add(var_233_int);
		irand(var_237_int, (int)5);
		@@var_207_object:add(var_237_int);
		var_233_int = var_233_int + (int)1;
		goto Label_44;

	}
	return 30;
	
}


func_320(var_137_bool)
{
	var_138_int = 0; var_139_bool = 0; var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_int = 0; var_143_bool = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0);
	var_142_int = 1;
	
Label_322:
	var_147_int = "pt_item_knife" + var_142_int;
	GetLocator(var_147_int, var_143_bool, var_144_cvector, var_145_cvector);
	var_148_bool = var_143_bool == 0; //@nz
	if(var_148_bool != 0) {
	} else {
		var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_bool = 0;
		var_144_cvector = var_149_cvector;
		var_145_cvector = var_150_cvector;
		var_137_bool = var_151_bool;
		func_500(var_149_cvector, var_150_cvector, var_151_bool);
		var_142_int = var_142_int + (int)1;
		goto Label_322;
	}
	return 8;
	
}


func_705(var_203_object)
{
	var_204_object = Obj(); var_205_object = Obj();
	CreateObjectVector(var_205_object);
	var_205_object = var_203_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_65(var_39_string, var_40_int, var_41_int)
{
	var_43_bool = var_40_int == (int)0;
	if(var_43_bool != 0) {
		var_39_string = "pt_child" + var_41_int;
		return 0;
	EMIT "GOTO 0x56";
	}
	var_46_bool = var_40_int == (int)1;
	if(var_46_bool != 0) {
		var_39_string = "pt_woman" + var_41_int;
		return 0;
	EMIT "GOTO 0x56";
	}
	var_49_bool = var_40_int == (int)2;
	if(var_49_bool != 0) {
		var_39_string = "pt_man" + var_41_int;
		return 0;
	}
	var_39_string = "";
	return 0;
}


func_261()
{
	var_2_bool = 0; var_3_bool = 0;
	GetProperty("nailed", var_3_bool);
	var_5_bool = 0;
	var_3_bool = var_5_bool;
	func_282(var_5_bool);
	var_64_bool = 0;
	var_3_bool = var_64_bool;
	func_301(var_64_bool);
	var_137_bool = 0;
	var_3_bool = var_137_bool;
	func_320(var_137_bool);
	var_161_bool = 0;
	var_3_bool = var_161_bool;
	func_339(var_161_bool);
	return 2;
}


func_519(var_173_cvector, var_174_cvector, var_175_bool)
{
	var_176_string = ""; var_177_object = Obj(); var_178_string = ""; var_179_object = Obj();
	var_180_bool = 0; var_181_float = 0;
	var_182_bool = var_175_bool;
	if(var_182_bool != 0) {
		var_181_float = 0.20000000298023224;
	} else {
		var_181_float = 0.4000000059604645;
	}
	func_700(var_180_bool, var_181_float);
	if(var_180_bool != 0) {
		RandOneOf(var_178_string, (int)10, (int)15, (int)3, (int)3, (int)3, (int)1, "bottle_water", "bottle_empty", "vegetables", "milk", "egg", "tvirin");
		var_196_object = Obj();
		func_694(var_196_object);
		var_198_int = "item_" + var_178_string;
		var_200_int = var_198_int + "_steal.xml";
		AddActorByType(var_179_object, "scripted_container", var_196_object, var_173_cvector, var_174_cvector, var_200_int);
		var_179_object = 0;
	}
	return 4;
	
}


func_711(var_117_object, var_118_object, var_119_string, var_120_string, var_121_string)
{
	var_125_bool = 0; var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_object = Obj(); var_129_bool = 0; var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_object = Obj();
	@@var_118_object:GetLocator(var_119_string, var_129_bool, var_130_cvector, var_131_cvector);
	var_133_bool = var_129_bool == 0; //@nz
	if(var_133_bool != 0) {
		var_135_int = "Locator " + var_119_string;
		var_137_int = var_135_int + " doesn't exist";
		Trace(var_137_int);
	} else {
		AddActor(Obj(), var_120_string, var_118_object, var_130_cvector, var_131_cvector, var_121_string);
	}
	var_132_object = var_117_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_339(var_161_bool)
{
	var_162_int = 0; var_163_bool = 0; var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_int = 0; var_167_bool = 0; var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0);
	var_166_int = 1;
	
Label_341:
	var_171_int = "pt_item_bottle" + var_166_int;
	GetLocator(var_171_int, var_167_bool, var_168_cvector, var_169_cvector);
	var_172_bool = var_167_bool == 0; //@nz
	if(var_172_bool != 0) {
	} else {
		var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_bool = 0;
		var_168_cvector = var_173_cvector;
		var_169_cvector = var_174_cvector;
		var_161_bool = var_175_bool;
		func_519(var_173_cvector, var_174_cvector, var_175_bool);
		var_166_int = var_166_int + (int)1;
		goto Label_341;
	}
	return 8;
	
}


func_88(var_51_string, var_52_int, var_53_int)
{
	var_55_bool = var_52_int == (int)0;
	if(var_55_bool != 0) {
		var_57_bool = var_53_int == (int)0;
		if(var_57_bool != 0) {
			var_51_string = "pers_littleboy";
			return 0;
		EMIT "GOTO 0x79";
		}
		var_59_bool = var_53_int == (int)1;
		if(var_59_bool != 0) {
			var_51_string = "pers_littlegirl";
			return 0;
		EMIT "GOTO 0x79";
		}
		var_61_bool = var_53_int == (int)2;
		if(var_61_bool != 0) {
			var_51_string = "pers_boy";
			return 0;
		EMIT "GOTO 0x79";
		}
		var_63_bool = var_53_int == (int)3;
		if(var_63_bool != 0) {
			var_51_string = "pers_girl";
			return 0;
		EMIT "GOTO 0x79";
		}
		var_65_bool = var_53_int == (int)4;
		if(var_65_bool != 0) {
			var_51_string = "pers_girl";
			return 0;
		}
	} else {
		var_67_bool = var_52_int == (int)1;
		if(var_67_bool != 0) {
			var_69_bool = var_53_int == (int)0;
			if(var_69_bool != 0) {
				var_51_string = "pers_woman";
				return 0;
			EMIT "GOTO 0x88";
			}
			var_71_bool = var_53_int == (int)1;
			if(var_71_bool != 0) {
				var_51_string = "pers_wasted_girl";
				return 0;
			}
			goto Label_169;
		}
		var_73_bool = var_52_int == (int)2;
		if(var_73_bool == 0) goto Label_169;
		var_75_bool = var_53_int == (int)0;
		if(var_75_bool != 0) {
			var_51_string = "pers_unosha";
			return 0;
		EMIT "GOTO 0xa9";
		}
		var_77_bool = var_53_int == (int)1;
		if(var_77_bool != 0) {
			var_51_string = "pers_unosha";
			return 0;
		EMIT "GOTO 0xa9";
		}
		var_79_bool = var_53_int == (int)2;
		if(var_79_bool != 0) {
			var_51_string = "pers_worker";
			return 0;
		EMIT "GOTO 0xa9";
		}
		var_81_bool = var_53_int == (int)3;
		if(var_81_bool != 0) {
			var_51_string = "pers_worker";
			return 0;
		EMIT "GOTO 0xa9";
		}
		var_83_bool = var_53_int == (int)4;
		if(var_83_bool == 0) goto Label_169;
		var_51_string = "pers_wasted_male";
		return 0;
	}
Label_169:
	var_51_string = "";
	return 0;
	
}


func_729(var_31_object)
{
	var_32_int = 0; var_33_int = 0; var_34_object = Obj(); var_35_int = 0; var_36_int = 0; var_37_object = Obj();
	var_38_object = var_31_object;
	if(var_38_object != 0) {
		@@var_31_object:size(var_35_int);
		var_36_int = 0;

	Label_735:
		var_39_bool = var_36_int < var_35_int;
		if(var_39_bool != 0) {
			@@var_31_object:get(var_37_object, var_36_int);
			var_40_object = var_37_object;
			if(var_40_object != 0) {
				RemoveActor(var_37_object);
			}
			var_37_object = 0;
			var_36_int = var_36_int + (int)1;
			goto Label_735;
		}
		@@var_31_object:clear();
	}
	return 6;
}


func_282(var_5_bool)
{
	var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_int = 0; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0);
	var_10_int = 1;
	
Label_284:
	var_15_int = "pt_item_food" + var_10_int;
	GetLocator(var_15_int, var_11_bool, var_12_cvector, var_13_cvector);
	var_16_bool = var_11_bool == 0; //@nz
	if(var_16_bool != 0) {
	} else {
		var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0;
		var_12_cvector = var_17_cvector;
		var_13_cvector = var_18_cvector;
		var_5_bool = var_19_bool;
		func_358(var_17_cvector, var_18_cvector, var_19_bool);
		var_10_int = var_10_int + (int)1;
		goto Label_284;
	}
	return 8;
	
}


func_417(var_76_cvector, var_77_cvector, var_78_bool)
{
	var_79_string = ""; var_80_object = Obj(); var_81_float = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_object = Obj(); var_85_float = 0; var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_string = ""; var_89_object = Obj(); var_90_float = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_float = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0);
	var_97_bool = 0; var_98_float = 0;
	var_99_bool = var_78_bool;
	if(var_99_bool != 0) {
		var_98_float = 0.05000000074505806;
	} else {
			var_98_float = 0.20000000298023224;
	}
	func_700(var_97_bool, var_98_float);
	if(var_97_bool != 0) {
		RandOneOf(var_88_string, (int)8, (int)3, (int)3, (int)3, (int)2, (int)2, (int)1, "rusk", "dried_fish", "dried_meat", "smoked_meat", "fresh_fish", "fresh_meat", "tvirin");
		RandVec2D(var_90_float, var_91_float);
		var_114_float = GetByIndex(var_92_cvector, 0);
		var_90_float = var_114_float;
		SetByIndex(var_92_cvector, 0) = var_114_float;
		var_115_float = GetByIndex(var_92_cvector, 1);
		SetByIndex(var_92_cvector, 1) = (float)0;
		var_116_float = GetByIndex(var_92_cvector, 2);
		var_91_float = var_116_float;
		SetByIndex(var_92_cvector, 2) = var_116_float;
		var_118_object = Obj();
		func_694(var_118_object);
		AddActorByType(var_89_object, "scripted_container", var_118_object, var_76_cvector, var_92_cvector, "item_plate.xml");
		var_121_object = Obj();
		func_694(var_121_object);
		var_123_int = var_76_cvector + CVector(0.0, 5.0, 0.0);
		var_125_int = "item_" + var_88_string;
		var_127_int = var_125_int + "_steal.xml";
		AddActorByType(var_89_object, "scripted_container", var_121_object, var_123_int, var_77_cvector, var_127_int);
		var_89_object = 0;
	} else {
		var_128_bool = 0; var_129_float = 0;
		func_700(var_128_bool, (float)0.5);
		if(var_128_bool == 0) goto Label_499;
		RandVec2D(var_94_float, var_95_float);
		var_130_float = GetByIndex(var_96_cvector, 0);
		var_94_float = var_130_float;
		SetByIndex(var_96_cvector, 0) = var_130_float;
		var_131_float = GetByIndex(var_96_cvector, 1);
		SetByIndex(var_96_cvector, 1) = (float)0;
		var_132_float = GetByIndex(var_96_cvector, 2);
		var_95_float = var_132_float;
		SetByIndex(var_96_cvector, 2) = var_132_float;
		var_134_object = Obj();
		func_694(var_134_object);
		AddActorByType(var_93_object, "scripted_container", var_134_object, var_76_cvector, var_96_cvector, "item_plate.xml");
		var_93_object = 0;

	}
Label_499:
	return 18;
	
}


func_358(var_17_cvector, var_18_cvector, var_19_bool)
{
	var_20_string = ""; var_21_object = Obj(); var_22_object = Obj(); var_23_float = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_object = Obj(); var_29_float = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0);
	var_32_bool = 0; var_33_float = 0;
	var_34_bool = var_19_bool;
	if(var_34_bool != 0) {
		var_33_float = 0.05000000074505806;
	} else {
			var_33_float = 0.20000000298023224;
	}
	func_700(var_32_bool, var_33_float);
	if(var_32_bool != 0) {
		RandOneOf(var_26_string, (int)5, (int)5, (int)3, (int)2, (int)3, "bread", "bottle_water", "milk", "vegetables", "lemon");
		var_48_object = Obj();
		func_694(var_48_object);
		var_52_int = "item_" + var_26_string;
		var_54_int = var_52_int + "_steal.xml";
		AddActorByType(var_27_object, "scripted_container", var_48_object, var_17_cvector, var_18_cvector, var_54_int);
		var_27_object = 0;
	} else {
		var_55_bool = 0; var_56_float = 0;
		func_700(var_55_bool, (float)0.5);
		if(var_55_bool == 0) goto Label_416;
		RandVec2D(var_29_float, var_30_float);
		var_57_float = GetByIndex(var_31_cvector, 0);
		var_29_float = var_57_float;
		SetByIndex(var_31_cvector, 0) = var_57_float;
		var_58_float = GetByIndex(var_31_cvector, 1);
		SetByIndex(var_31_cvector, 1) = (float)0;
		var_59_float = GetByIndex(var_31_cvector, 2);
		var_30_float = var_59_float;
		SetByIndex(var_31_cvector, 2) = var_59_float;
		var_61_object = Obj();
		func_694(var_61_object);
		AddActorByType(var_28_object, "scripted_container", var_61_object, var_17_cvector, var_31_cvector, "item_plate.xml");
		var_28_object = 0;

	}
Label_416:
	return 12;
	
}


func_682(var_13_bool, var_14_object, var_15_string)
{
	var_16_bool = 0; var_17_bool = 0;
	var_20_bool = IsFuncExist(var_14_object, "HasProperty", (int)2);
	var_21_bool = var_20_bool == 0; //@nz
	if(var_21_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	@@var_14_object:HasProperty(var_15_string, var_17_bool);
	var_17_bool = var_13_bool;
	return 2;
}


func_555(var_0_object, var_1_object)
{
	var_202_bool = var_1_object == 0; //@nz
	if(var_202_bool != 0) {
		var_203_object = Obj();
		func_705(var_203_object);
		var_1_object = var_203_object;
	}
	var_206_bool = var_0_object == 0; //@nz
	if(var_206_bool != 0) {
		CreateIntVector(var_0_object);
	}
	var_207_object = Obj();
	var_207_object = var_0_object;
	func_0(var_207_object);
	
Label_569:
	Hold();
	goto Label_569;
}
EMIT "Return(); Pop(0)";


func_171(var_84_string, var_85_int, var_86_int)
{
	var_88_bool = var_85_int == (int)0;
	if(var_88_bool != 0) {
		var_90_bool = var_86_int == (int)0;
		if(var_90_bool != 0) {
			var_84_string = "ilittleboy.xml";
			return 0;
		EMIT "GOTO 0xcc";
		}
		var_92_bool = var_86_int == (int)1;
		if(var_92_bool != 0) {
			var_84_string = "ilittlegirl.xml";
			return 0;
		EMIT "GOTO 0xcc";
		}
		var_94_bool = var_86_int == (int)2;
		if(var_94_bool != 0) {
			var_84_string = "iboy.xml";
			return 0;
		EMIT "GOTO 0xcc";
		}
		var_96_bool = var_86_int == (int)3;
		if(var_96_bool != 0) {
			var_84_string = "igirl.xml";
			return 0;
		EMIT "GOTO 0xcc";
		}
		var_98_bool = var_86_int == (int)4;
		if(var_98_bool != 0) {
			var_84_string = "igirl2.xml";
			return 0;
		}
	} else {
		var_100_bool = var_85_int == (int)1;
		if(var_100_bool != 0) {
			var_102_bool = var_86_int == (int)0;
			if(var_102_bool != 0) {
				var_84_string = "iwoman.xml";
				return 0;
			EMIT "GOTO 0xdb";
			}
			var_104_bool = var_86_int == (int)1;
			if(var_104_bool != 0) {
				var_84_string = "iwasted_girl.xml";
				return 0;
			}
			goto Label_252;
		}
		var_106_bool = var_85_int == (int)2;
		if(var_106_bool == 0) goto Label_252;
		var_108_bool = var_86_int == (int)0;
		if(var_108_bool != 0) {
			var_84_string = "iunosha.xml";
			return 0;
		EMIT "GOTO 0xfc";
		}
		var_110_bool = var_86_int == (int)1;
		if(var_110_bool != 0) {
			var_84_string = "iunosha2.xml";
			return 0;
		EMIT "GOTO 0xfc";
		}
		var_112_bool = var_86_int == (int)2;
		if(var_112_bool != 0) {
			var_84_string = "iworker.xml";
			return 0;
		EMIT "GOTO 0xfc";
		}
		var_114_bool = var_86_int == (int)3;
		if(var_114_bool != 0) {
			var_84_string = "iworker2.xml";
			return 0;
		EMIT "GOTO 0xfc";
		}
		var_116_bool = var_86_int == (int)4;
		if(var_116_bool == 0) goto Label_252;
		var_84_string = "iwasted_male.xml";
		return 0;
	}
Label_252:
	var_84_string = "";
	return 0;
	
}


func_301(var_64_bool)
{
	var_65_int = 0; var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_int = 0; var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	var_69_int = 1;
	
Label_303:
	var_74_int = "pt_item_pfood" + var_69_int;
	GetLocator(var_74_int, var_70_bool, var_71_cvector, var_72_cvector);
	var_75_bool = var_70_bool == 0; //@nz
	if(var_75_bool != 0) {
	} else {
		var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0;
		var_71_cvector = var_76_cvector;
		var_72_cvector = var_77_cvector;
		var_64_bool = var_78_bool;
		func_417(var_76_cvector, var_77_cvector, var_78_bool);
		var_69_int = var_69_int + (int)1;
		goto Label_303;
	}
	return 8;
	
}


func_500(var_149_cvector, var_150_cvector, var_151_bool)
{
	var_152_object = Obj(); var_153_object = Obj();
	var_154_bool = 0; var_155_float = 0;
	var_156_bool = var_151_bool;
	if(var_156_bool != 0) {
		var_155_float = 0.05000000074505806;
	} else {
		var_155_float = 0.05000000074505806;
	}
	func_700(var_154_bool, var_155_float);
	if(var_154_bool != 0) {
		var_158_object = Obj();
		func_694(var_158_object);
		AddActorByType(var_153_object, "scripted_container", var_158_object, var_149_cvector, var_150_cvector, "item_knife_steal.xml");
		var_153_object = 0;
	}
	return 2;
	
}


func_694(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj();
	self(var_50_object);
	var_50_object = var_48_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_700(var_32_bool, var_33_float)
{
	var_35_float = 0; var_36_float = 0;
	rand(var_36_float);
	var_32_bool = var_36_float < var_33_float;
	return 2;
}


