// @IMPORTS: GetLocator/3,irand/2,CreateIntVector/1,Hold/0,GetProperty/2,GetLocator/4,RandOneOf/11,AddActorByType/6,RandOneOf/15,RandVec2D/2,RandOneOf/13,RemoveActor/1,self/1,rand/1,CreateObjectVector/1,Trace/1,AddActor/6
// @STRINGS: W:pt_child|A:add|W:pt_woman|W:pt_man|W:pers_littleboy|W:pers_littlegirl|W:pers_boy|W:pers_girl|W:pers_woman|W:pers_wasted_girl|W:pers_unosha|W:pers_worker|W:pers_wasted_male|W:ilittleboy.xml|W:ilittlegirl.xml|W:iboy.xml|W:igirl.xml|W:igirl2.xml|W:iwoman.xml|W:iwasted_girl.xml|W:iunosha.xml|W:iunosha2.xml|W:iworker.xml|W:iworker2.xml|W:iwasted_male.xml|W:nailed|W:pt_item_food|W:pt_item_pfood|W:pt_item_knife|W:pt_item_bottle|W:bread|W:bottle_water|W:milk|W:vegetables|W:lemon|W:scripted_container|W:item_|W:_steal.xml|W:rusk|W:dried_fish|W:dried_meat|W:smoked_meat|W:fresh_fish|W:fresh_meat|W:tvirin|W:item_plate.xml|W:item_knife_steal.xml|W:bottle_empty|W:egg|A:size|A:get|A:IsDead|W:ToDie|A:remove|W:HasProperty|A:HasProperty|A:GetLocator|W:Locator |W: doesn't exist|A:clear
// @RUN_OP: 0xfe
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_5: op=0x207 vars=
// @EVENT_6: op=0x247 vars=
// @PE: 0x41,0x58,0xab

task_0_event_5(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_string = ""; var_8_string = ""; var_9_string = ""; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_string = ""; var_17_string = "";
	var_18_bool = var_1_object == 0; //@nz
	if(var_18_bool != 0) {
		var_19_object = Obj();
		func_651(var_19_object);
		var_1_object = var_19_object;
	}
	var_22_bool = var_0_object == 0; //@nz
	if(var_22_bool != 0) {
		CreateIntVector(var_0_object);
	}
	var_23_object = Obj();
	var_23_object = var_1_object;
	func_675(var_23_object);
	@@@var_0_object:size(var_10_int);
	var_11_int = 0;
	
Label_537:
	var_33_bool = var_11_int < var_10_int;
	if(var_33_bool != 0) {
		@@@var_0_object:get(var_12_int, var_11_int);
		var_35_int = var_11_int + (int)1;
		@@@var_0_object:get(var_13_int, var_35_int);
		var_37_int = var_11_int + (int)2;
		@@@var_0_object:get(var_14_int, var_37_int);
		var_38_string = ""; var_39_int = 0; var_40_int = 0;
		var_12_int = var_39_int;
		var_13_int = var_40_int;
		func_65(var_38_string, var_39_int, var_40_int);
		var_38_string = var_15_string;
		var_50_string = ""; var_51_int = 0; var_52_int = 0;
		var_12_int = var_51_int;
		var_14_int = var_52_int;
		func_88(var_50_string, var_51_int, var_52_int);
		var_50_string = var_16_string;
		var_83_string = ""; var_84_int = 0; var_85_int = 0;
		var_12_int = var_84_int;
		var_14_int = var_85_int;
		func_171(var_83_string, var_84_int, var_85_int);
		var_83_string = var_17_string;
		var_116_object = Obj(); var_117_object = Obj(); var_118_string = ""; var_119_string = ""; var_120_string = "";
		func_640(Obj());
		var_121_object = var_117_object;
		var_15_string = var_118_string;
		var_16_string = var_119_string;
		var_17_string = var_120_string;
		func_657(var_116_object, var_117_object, var_118_string, var_119_string, var_120_string);
		@@@var_1_object:add(var_116_object);
		var_11_int = var_11_int + (int)3;
		goto Label_537;
	}
	return 16;
}


task_0_event_6(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_bool = 0;
	@@@var_1_object:size(var_6_int);
	var_7_int = 0;
	
Label_587:
	var_10_bool = var_7_int < var_6_int;
	if(var_10_bool != 0) {
		@@@var_1_object:get(var_8_object, var_7_int);
		var_11_bool = var_8_object != 0; //@nn
		if(var_11_bool != 0) {
			@@var_8_object:IsDead(var_9_bool);
			var_12_bool = var_9_bool == 0; //@nz
			if(var_12_bool == 0) goto Label_607;
			var_13_bool = 0; var_14_object = Obj(); var_15_string = "";
			var_8_object = var_14_object;
			func_628(var_13_bool, var_14_object, "ToDie");
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
		func_675(var_31_object);
		goto Label_587;
	}
	return 8;
	
}


main(var_0_object, var_1_object)
{
	var_2_bool = var_1_object == 0; //@nz
	if(var_2_bool != 0) {
		var_3_object = Obj();
		func_651(var_3_object);
		var_1_object = var_3_object;
	}
	var_6_bool = var_0_object == 0; //@nz
	if(var_6_bool != 0) {
		CreateIntVector(var_0_object);
	}
	func_275();
	var_175_object = Obj();
	var_175_object = var_0_object;
	func_0(var_175_object);
	
Label_271:
	Hold();
	goto Label_271;
}
EMIT "Return(); Pop(0)";


func_0(var_175_object)
{
	var_176_int = 0; var_177_string = ""; var_178_bool = 0; var_179_cvector = CVector(0,0,0); var_180_int = 0; var_181_int = 0; var_182_string = ""; var_183_bool = 0; var_184_cvector = CVector(0,0,0); var_185_int = 0; var_186_int = 0; var_187_string = ""; var_188_bool = 0; var_189_cvector = CVector(0,0,0); var_190_int = 0; var_191_int = 0; var_192_string = ""; var_193_bool = 0; var_194_cvector = CVector(0,0,0); var_195_int = 0; var_196_int = 0; var_197_string = ""; var_198_bool = 0; var_199_cvector = CVector(0,0,0); var_200_int = 0; var_201_int = 0; var_202_string = ""; var_203_bool = 0; var_204_cvector = CVector(0,0,0); var_205_int = 0;
	var_191_int = 1;
	
Label_2:
	var_192_string = "pt_child" + var_191_int;
	GetLocator(var_192_string, var_193_bool, var_194_cvector);
	var_207_bool = var_193_bool == 0; //@nz
	if(var_207_bool != 0) {
	} else {
				@@var_175_object:add((int)0);
				@@var_175_object:add(var_191_int);
				irand(var_195_int, (int)5);
				@@var_175_object:add(var_195_int);
				var_191_int = var_191_int + (int)1;
				goto Label_2;
	}
	var_196_int = 1;
	
Label_23:
	var_197_string = "pt_woman" + var_196_int;
	GetLocator(var_197_string, var_198_bool, var_199_cvector);
	var_209_bool = var_198_bool == 0; //@nz
	if(var_209_bool != 0) {
	} else {
			@@var_175_object:add((int)1);
			@@var_175_object:add(var_196_int);
			irand(var_200_int, (int)2);
			@@var_175_object:add(var_200_int);
			var_196_int = var_196_int + (int)1;
			goto Label_23;

	}
	var_201_int = 1;
	
Label_44:
	var_202_string = "pt_man" + var_201_int;
	GetLocator(var_202_string, var_203_bool, var_204_cvector);
	var_211_bool = var_203_bool == 0; //@nz
	if(var_211_bool != 0) {
	} else {
		@@var_175_object:add((int)2);
		@@var_175_object:add(var_201_int);
		irand(var_205_int, (int)5);
		@@var_175_object:add(var_205_int);
		var_201_int = var_201_int + (int)1;
		goto Label_44;

	}
	return 30;
	
}


func_640(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj();
	self(var_47_object);
	var_47_object = var_45_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_65(var_38_string, var_39_int, var_40_int)
{
	var_42_bool = var_39_int == (int)0;
	if(var_42_bool != 0) {
		var_38_string = "pt_child" + var_40_int;
		return 0;
	EMIT "GOTO 0x56";
	}
	var_45_bool = var_39_int == (int)1;
	if(var_45_bool != 0) {
		var_38_string = "pt_woman" + var_40_int;
		return 0;
	EMIT "GOTO 0x56";
	}
	var_48_bool = var_39_int == (int)2;
	if(var_48_bool != 0) {
		var_38_string = "pt_man" + var_40_int;
		return 0;
	}
	var_38_string = "";
	return 0;
}


func_646(var_29_bool, var_30_float)
{
	var_32_float = 0; var_33_float = 0;
	rand(var_33_float);
	var_29_bool = var_33_float < var_30_float;
	return 2;
}


func_651(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj();
	CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_334(var_110_bool)
{
	var_111_int = 0; var_112_bool = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_int = 0; var_116_bool = 0; var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0);
	var_115_int = 1;
	
Label_336:
	var_120_int = "pt_item_knife" + var_115_int;
	GetLocator(var_120_int, var_116_bool, var_117_cvector, var_118_cvector);
	var_121_bool = var_116_bool == 0; //@nz
	if(var_121_bool != 0) {
	} else {
		var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_bool = 0;
		var_117_cvector = var_122_cvector;
		var_118_cvector = var_123_cvector;
		var_110_bool = var_124_bool;
		func_464(var_122_cvector, var_123_cvector, var_124_bool);
		var_115_int = var_115_int + (int)1;
		goto Label_336;
	}
	return 8;
	
}


func_464(var_122_cvector, var_123_cvector, var_124_bool)
{
	var_125_object = Obj(); var_126_object = Obj();
	var_127_bool = 0; var_128_float = 0;
	var_129_bool = var_124_bool;
	if(var_129_bool != 0) {
		var_128_float = 0.10000000149011612;
	} else {
		var_128_float = 0.10000000149011612;
	}
	func_646(var_127_bool, var_128_float);
	if(var_127_bool != 0) {
		var_131_object = Obj();
		func_640(var_131_object);
		AddActorByType(var_126_object, "scripted_container", var_131_object, var_122_cvector, var_123_cvector, "item_knife_steal.xml");
		var_126_object = 0;
	}
	return 2;
	
}


func_657(var_116_object, var_117_object, var_118_string, var_119_string, var_120_string)
{
	var_124_bool = 0; var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_object = Obj(); var_128_bool = 0; var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_object = Obj();
	@@var_117_object:GetLocator(var_118_string, var_128_bool, var_129_cvector, var_130_cvector);
	var_132_bool = var_128_bool == 0; //@nz
	if(var_132_bool != 0) {
		var_134_int = "Locator " + var_118_string;
		var_136_int = var_134_int + " doesn't exist";
		Trace(var_136_int);
	} else {
		AddActor(Obj(), var_119_string, var_117_object, var_129_cvector, var_130_cvector, var_120_string);
	}
	var_131_object = var_116_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_275()
{
	var_7_bool = 0; var_8_bool = 0;
	GetProperty("nailed", var_8_bool);
	var_10_bool = 0;
	var_8_bool = var_10_bool;
	func_296(var_10_bool);
	var_53_bool = 0;
	var_8_bool = var_53_bool;
	func_315(var_53_bool);
	var_110_bool = 0;
	var_8_bool = var_110_bool;
	func_334(var_110_bool);
	var_134_bool = 0;
	var_8_bool = var_134_bool;
	func_353(var_134_bool);
	return 2;
}


func_406(var_65_cvector, var_66_cvector, var_67_bool)
{
	var_68_string = ""; var_69_object = Obj(); var_70_float = 0; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_string = ""; var_74_object = Obj(); var_75_float = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0);
	var_78_bool = 0; var_79_float = 0;
	var_80_bool = var_67_bool;
	if(var_80_bool != 0) {
		var_79_float = 0.10000000149011612;
	} else {
		var_79_float = 0.20000000298023224;
	}
	func_646(var_78_bool, var_79_float);
	if(var_78_bool != 0) {
		RandOneOf(var_73_string, (int)8, (int)3, (int)3, (int)3, (int)2, (int)2, (int)1, "rusk", "dried_fish", "dried_meat", "smoked_meat", "fresh_fish", "fresh_meat", "tvirin");
		RandVec2D(var_75_float, var_76_float);
		var_95_float = GetByIndex(var_77_cvector, 0);
		var_75_float = var_95_float;
		SetByIndex(var_77_cvector, 0) = var_95_float;
		var_96_float = GetByIndex(var_77_cvector, 1);
		SetByIndex(var_77_cvector, 1) = (float)0;
		var_97_float = GetByIndex(var_77_cvector, 2);
		var_76_float = var_97_float;
		SetByIndex(var_77_cvector, 2) = var_97_float;
		var_99_object = Obj();
		func_640(var_99_object);
		AddActorByType(var_74_object, "scripted_container", var_99_object, var_65_cvector, var_77_cvector, "item_plate.xml");
		var_102_object = Obj();
		func_640(var_102_object);
		var_104_int = var_65_cvector + CVector(0.0, 5.0, 0.0);
		var_106_int = "item_" + var_73_string;
		var_108_int = var_106_int + "_steal.xml";
		AddActorByType(var_74_object, "scripted_container", var_102_object, var_104_int, var_66_cvector, var_108_int);
		var_74_object = 0;
	}
	return 10;
	
}


func_88(var_50_string, var_51_int, var_52_int)
{
	var_54_bool = var_51_int == (int)0;
	if(var_54_bool != 0) {
		var_56_bool = var_52_int == (int)0;
		if(var_56_bool != 0) {
			var_50_string = "pers_littleboy";
			return 0;
		EMIT "GOTO 0x79";
		}
		var_58_bool = var_52_int == (int)1;
		if(var_58_bool != 0) {
			var_50_string = "pers_littlegirl";
			return 0;
		EMIT "GOTO 0x79";
		}
		var_60_bool = var_52_int == (int)2;
		if(var_60_bool != 0) {
			var_50_string = "pers_boy";
			return 0;
		EMIT "GOTO 0x79";
		}
		var_62_bool = var_52_int == (int)3;
		if(var_62_bool != 0) {
			var_50_string = "pers_girl";
			return 0;
		EMIT "GOTO 0x79";
		}
		var_64_bool = var_52_int == (int)4;
		if(var_64_bool != 0) {
			var_50_string = "pers_girl";
			return 0;
		}
	} else {
		var_66_bool = var_51_int == (int)1;
		if(var_66_bool != 0) {
			var_68_bool = var_52_int == (int)0;
			if(var_68_bool != 0) {
				var_50_string = "pers_woman";
				return 0;
			EMIT "GOTO 0x88";
			}
			var_70_bool = var_52_int == (int)1;
			if(var_70_bool != 0) {
				var_50_string = "pers_wasted_girl";
				return 0;
			}
			goto Label_169;
		}
		var_72_bool = var_51_int == (int)2;
		if(var_72_bool == 0) goto Label_169;
		var_74_bool = var_52_int == (int)0;
		if(var_74_bool != 0) {
			var_50_string = "pers_unosha";
			return 0;
		EMIT "GOTO 0xa9";
		}
		var_76_bool = var_52_int == (int)1;
		if(var_76_bool != 0) {
			var_50_string = "pers_unosha";
			return 0;
		EMIT "GOTO 0xa9";
		}
		var_78_bool = var_52_int == (int)2;
		if(var_78_bool != 0) {
			var_50_string = "pers_worker";
			return 0;
		EMIT "GOTO 0xa9";
		}
		var_80_bool = var_52_int == (int)3;
		if(var_80_bool != 0) {
			var_50_string = "pers_worker";
			return 0;
		EMIT "GOTO 0xa9";
		}
		var_82_bool = var_52_int == (int)4;
		if(var_82_bool == 0) goto Label_169;
		var_50_string = "pers_wasted_male";
		return 0;
	}
Label_169:
	var_50_string = "";
	return 0;
	
}


func_353(var_134_bool)
{
	var_135_int = 0; var_136_bool = 0; var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_int = 0; var_140_bool = 0; var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0);
	var_139_int = 1;
	
Label_355:
	var_144_int = "pt_item_bottle" + var_139_int;
	GetLocator(var_144_int, var_140_bool, var_141_cvector, var_142_cvector);
	var_145_bool = var_140_bool == 0; //@nz
	if(var_145_bool != 0) {
	} else {
		var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_bool = 0;
		var_141_cvector = var_146_cvector;
		var_142_cvector = var_147_cvector;
		var_134_bool = var_148_bool;
		func_483(var_146_cvector, var_147_cvector, var_148_bool);
		var_139_int = var_139_int + (int)1;
		goto Label_355;
	}
	return 8;
	
}


func_675(var_31_object)
{
	var_32_int = 0; var_33_int = 0; var_34_object = Obj(); var_35_int = 0; var_36_int = 0; var_37_object = Obj();
	@@var_31_object:size(var_35_int);
	var_36_int = 0;
	
Label_679:
	var_38_bool = var_36_int < var_35_int;
	if(var_38_bool != 0) {
		@@var_31_object:get(var_37_object, var_36_int);
		var_39_object = var_37_object;
		if(var_39_object != 0) {
			RemoveActor(var_37_object);
		}
		var_37_object = 0;
		var_36_int = var_36_int + (int)1;
		goto Label_679;
	}
	@@var_31_object:clear();
	return 6;
}


func_483(var_146_cvector, var_147_cvector, var_148_bool)
{
	var_149_string = ""; var_150_object = Obj(); var_151_string = ""; var_152_object = Obj();
	var_153_bool = 0; var_154_float = 0;
	var_155_bool = var_148_bool;
	if(var_155_bool != 0) {
		var_154_float = 0.20000000298023224;
	} else {
		var_154_float = 0.4000000059604645;
	}
	func_646(var_153_bool, var_154_float);
	if(var_153_bool != 0) {
		RandOneOf(var_151_string, (int)10, (int)15, (int)3, (int)3, (int)3, (int)1, "bottle_water", "bottle_empty", "vegetables", "milk", "egg", "tvirin");
		var_169_object = Obj();
		func_640(var_169_object);
		var_171_int = "item_" + var_151_string;
		var_173_int = var_171_int + "_steal.xml";
		AddActorByType(var_152_object, "scripted_container", var_169_object, var_146_cvector, var_147_cvector, var_173_int);
		var_152_object = 0;
	}
	return 4;
	
}


func_296(var_10_bool)
{
	var_11_int = 0; var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0);
	var_15_int = 1;
	
Label_298:
	var_20_int = "pt_item_food" + var_15_int;
	GetLocator(var_20_int, var_16_bool, var_17_cvector, var_18_cvector);
	var_21_bool = var_16_bool == 0; //@nz
	if(var_21_bool != 0) {
	} else {
		var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_bool = 0;
		var_17_cvector = var_22_cvector;
		var_18_cvector = var_23_cvector;
		var_10_bool = var_24_bool;
		func_372(var_22_cvector, var_23_cvector, var_24_bool);
		var_15_int = var_15_int + (int)1;
		goto Label_298;
	}
	return 8;
	
}


func_171(var_83_string, var_84_int, var_85_int)
{
	var_87_bool = var_84_int == (int)0;
	if(var_87_bool != 0) {
		var_89_bool = var_85_int == (int)0;
		if(var_89_bool != 0) {
			var_83_string = "ilittleboy.xml";
			return 0;
		EMIT "GOTO 0xcc";
		}
		var_91_bool = var_85_int == (int)1;
		if(var_91_bool != 0) {
			var_83_string = "ilittlegirl.xml";
			return 0;
		EMIT "GOTO 0xcc";
		}
		var_93_bool = var_85_int == (int)2;
		if(var_93_bool != 0) {
			var_83_string = "iboy.xml";
			return 0;
		EMIT "GOTO 0xcc";
		}
		var_95_bool = var_85_int == (int)3;
		if(var_95_bool != 0) {
			var_83_string = "igirl.xml";
			return 0;
		EMIT "GOTO 0xcc";
		}
		var_97_bool = var_85_int == (int)4;
		if(var_97_bool != 0) {
			var_83_string = "igirl2.xml";
			return 0;
		}
	} else {
		var_99_bool = var_84_int == (int)1;
		if(var_99_bool != 0) {
			var_101_bool = var_85_int == (int)0;
			if(var_101_bool != 0) {
				var_83_string = "iwoman.xml";
				return 0;
			EMIT "GOTO 0xdb";
			}
			var_103_bool = var_85_int == (int)1;
			if(var_103_bool != 0) {
				var_83_string = "iwasted_girl.xml";
				return 0;
			}
			goto Label_252;
		}
		var_105_bool = var_84_int == (int)2;
		if(var_105_bool == 0) goto Label_252;
		var_107_bool = var_85_int == (int)0;
		if(var_107_bool != 0) {
			var_83_string = "iunosha.xml";
			return 0;
		EMIT "GOTO 0xfc";
		}
		var_109_bool = var_85_int == (int)1;
		if(var_109_bool != 0) {
			var_83_string = "iunosha2.xml";
			return 0;
		EMIT "GOTO 0xfc";
		}
		var_111_bool = var_85_int == (int)2;
		if(var_111_bool != 0) {
			var_83_string = "iworker.xml";
			return 0;
		EMIT "GOTO 0xfc";
		}
		var_113_bool = var_85_int == (int)3;
		if(var_113_bool != 0) {
			var_83_string = "iworker2.xml";
			return 0;
		EMIT "GOTO 0xfc";
		}
		var_115_bool = var_85_int == (int)4;
		if(var_115_bool == 0) goto Label_252;
		var_83_string = "iwasted_male.xml";
		return 0;
	}
Label_252:
	var_83_string = "";
	return 0;
	
}


func_372(var_22_cvector, var_23_cvector, var_24_bool)
{
	var_25_string = ""; var_26_object = Obj(); var_27_string = ""; var_28_object = Obj();
	var_29_bool = 0; var_30_float = 0;
	var_31_bool = var_24_bool;
	if(var_31_bool != 0) {
		var_30_float = 0.10000000149011612;
	} else {
		var_30_float = 0.20000000298023224;
	}
	func_646(var_29_bool, var_30_float);
	if(var_29_bool != 0) {
		RandOneOf(var_27_string, (int)5, (int)5, (int)3, (int)2, (int)3, "bread", "bottle_water", "milk", "vegetables", "lemon");
		var_45_object = Obj();
		func_640(var_45_object);
		var_49_int = "item_" + var_27_string;
		var_51_int = var_49_int + "_steal.xml";
		AddActorByType(var_28_object, "scripted_container", var_45_object, var_22_cvector, var_23_cvector, var_51_int);
		var_28_object = 0;
	}
	return 4;
	
}


func_628(var_13_bool, var_14_object, var_15_string)
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


func_315(var_53_bool)
{
	var_54_int = 0; var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_int = 0; var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0);
	var_58_int = 1;
	
Label_317:
	var_63_int = "pt_item_pfood" + var_58_int;
	GetLocator(var_63_int, var_59_bool, var_60_cvector, var_61_cvector);
	var_64_bool = var_59_bool == 0; //@nz
	if(var_64_bool != 0) {
	} else {
		var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0;
		var_60_cvector = var_65_cvector;
		var_61_cvector = var_66_cvector;
		var_53_bool = var_67_bool;
		func_406(var_65_cvector, var_66_cvector, var_67_bool);
		var_58_int = var_58_int + (int)1;
		goto Label_317;
	}
	return 8;
	
}


