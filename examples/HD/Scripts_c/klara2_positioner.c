// @IMPORTS: CreateBoolVector/1,Hold/0,Trace/1,Trigger/2,RemoveActor/1,GetSceneByName/2,AddActor/6,GetGameTime/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,AddMessage/4,SetVariable/2
// @STRINGS: A:add|W:sleep_end|W:remove_klara|W:klara_stay|W:cleanup|A:set|A:get|W:Klara scene: |W:pt_klara|W:NPC_Klara|W:k2system_klara2.xml|W:day|A:SetProperty|W:ERROR: Klara2 scene was not found: |A:GetLocator|W:Locator |W: doesn't exist|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:K2System|W:lc_House6_04|W:r2_house3_03|W:house1_se_04r|W:r7_house3_02_i2|W:house5_15|W:r5_house2_01|W:k2system_klara_day
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,object,object,object params=0
// @EVENT_26: op=0x2c vars=string
// @PE: 0x2c,0xd9,0xe2,0xeb,0xf4,0xfd,0x106,0x174,0x17f,0x1a5,0x1fa

task_0_event_26(var_0_int, var_1_object, var_2_object, var_3_object, var_4_string)
{
	Trace(var_4_string);
	var_6_bool = var_4_string == "sleep_end";
	if(var_6_bool != 0) {
		var_7_int = 0;
		func_208((int)0);
		var_8_int = var_7_int;
		func_100(var_2_object, var_3_object, var_4_string, var_7_int);
		var_65_int = 0; var_66_float = 0;
		func_208((int)0);
		var_67_int = var_65_int;
		func_203((float)0);
		var_68_float = var_66_float;
		func_149(var_4_string, var_65_int, var_66_float);
	} else {
		var_164_bool = var_4_string == "remove_klara";
		if(var_164_bool != 0) {
			func_86(var_2_object, var_3_object, var_4_string);
			func_297();
			goto Label_85;
		}
		var_194_bool = var_4_string == "klara_stay";
		if(var_194_bool == 0) goto Label_85;
		func_310();
	}
Label_85:
	return 0;
	
}


main(var_0_int, var_1_object, var_2_object, var_3_object)
{
	var_4_int = 0; var_5_int = 0;
	var_0_int = -1;
	CreateBoolVector(var_2_object);
	CreateBoolVector(var_3_object);
	var_5_int = 0;
	
Label_7:
	var_7_bool = var_5_int < (int)12;
	if(var_7_bool != 0) {
		@@@var_2_object:add((bool)0);
		var_9_bool = 0;
		var_9_bool = 1;
		var_11_int = var_5_int + (int)1;
		var_13_bool = var_11_int < (int)6;
		if(var_13_bool != 1) {
			var_15_int = var_5_int + (int)1;
			var_17_bool = var_15_int == (int)12;
			if(var_17_bool != 1) {
				var_9_bool = 0;
			}
		}
		if(var_9_bool != 0) {
			@@@var_3_object:add((bool)0);
		} else {
			@@@var_3_object:add((bool)1);
	}
		func_168(var_5_int);

	Label_40:
		Hold();
		goto Label_40;
	}
	var_5_int = var_5_int + (int)1;
	goto Label_7;
	
}
EMIT "Return(); Pop(2)";


func_323(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj();
	GetDiaryRoot(var_108_object);
	var_109_bool = var_108_object == 0; //@nz
	if(var_109_bool != 0) {
		Trace("Can't retrieve diary root");
		var_106_object = 0;
		return 2;
	}
	var_108_object = var_106_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_262(var_141_int, var_142_float)
{
	var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_float = 0;
	var_142_float = var_146_float;
	func_364(var_143_int, (int)538510, (int)538509, var_146_float);
	var_143_int = var_141_int;
	return 0;
}


func_203(var_68_float)
{
	var_69_float = 0; var_70_float = 0;
	GetGameTime(var_70_float);
	var_70_float = var_68_float;
	return 2;
}


func_271()
{
	var_92_object = Obj(); var_93_object = Obj();
	CreateDiaryEntry(var_93_object, (int)723, (int)2, (int)539102);
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0;
	var_93_object = var_98_object;
	func_336(var_97_bool, var_98_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_208(var_8_int)
{
	var_9_float = 0; var_10_float = 0;
	GetGameTime(var_10_float);
	var_12_int = 0;
	var_12_int = var_10_float / (int)24;
	var_8_int = (int)1 + var_12_int;
	return 2;
}


func_336(var_97_bool, var_98_object, var_99_int)
{
	var_100_object = Obj(); var_101_object = Obj(); var_102_int = 0; var_103_object = Obj(); var_104_object = Obj(); var_105_int = 0;
	func_323(Obj());
	var_106_object = var_103_object;
	@@var_103_object:Find(var_99_int, var_104_object);
	var_111_bool = var_104_object == 0; //@nz
	if(var_111_bool != 0) {
		var_113_int = "Can't find diary parent with id: " + var_99_int;
		Trace(var_113_int);
		var_97_bool = 0;
		return 6;
	}
	@@var_104_object:AddChild(var_98_object);
	SendWorldWndMessage((int)7);
	@@var_98_object:GetCategory(var_105_int);
	SetDiarySection(var_105_int);
	var_97_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_149(var_2_object, var_65_int, var_66_float)
{
	var_71_bool = 0; var_72_bool = 0;
	var_74_int = var_65_int - (int)1;
	@@@var_2_object:get(var_72_bool, var_74_int);
	var_75_bool = var_72_bool;
	if(var_75_bool != 0) {
		return 2;
	}
	var_77_int = var_65_int - (int)1;
	@@@var_2_object:set(var_77_int, (bool)1);
	var_79_int = 0; var_80_float = 0;
	var_65_int = var_79_int;
	var_66_float = var_80_float;
	func_421(var_79_int, var_80_float);
	return 2;
}


func_86(var_0_int, var_1_object, var_3_object)
{
	var_165_object = var_1_object;
	if(var_165_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_168_int = var_0_int - (int)1;
	@@@var_3_object:set(var_168_int, (bool)0);
	func_168(var_4_string);
	return 0;
}


func_217(var_149_int, var_150_float)
{
	var_151_int = 0; var_152_int = 0; var_153_int = 0; var_154_float = 0;
	var_150_float = var_154_float;
	func_364(var_151_int, (int)538512, (int)538511, var_154_float);
	var_151_int = var_149_int;
	return 0;
}


func_284()
{
	var_115_object = Obj(); var_116_object = Obj();
	CreateDiaryEntry(var_116_object, (int)724, (int)2, (int)539103);
	var_120_bool = 0; var_121_object = Obj(); var_122_int = 0;
	var_116_object = var_121_object;
	func_336(var_120_bool, var_121_object, (int)723);
	return 2;
}
EMIT "Stack[-1] = 0";


func_226(var_157_int, var_158_float)
{
	var_159_int = 0; var_160_int = 0; var_161_int = 0; var_162_float = 0;
	var_158_float = var_162_float;
	func_364(var_159_int, (int)538514, (int)538513, var_162_float);
	var_159_int = var_157_int;
	return 0;
}


func_100(var_0_int, var_1_object, var_3_object, var_7_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_string = ""; var_17_bool = 0; var_18_object = Obj(); var_19_string = "";
	var_20_object = var_1_object;
	if(var_20_object != 0) {
		RemoveActor(var_1_object);
	}
	var_22_int = var_7_int - (int)1;
	@@@var_3_object:get(var_17_bool, var_22_int);
	var_23_bool = var_17_bool == 0; //@nz
	if(var_23_bool != 0) {
		return 6;
	}
	var_24_string = ""; var_25_int = 0;
	var_7_int = var_25_int;
	func_383(var_24_string, var_25_int);
	var_24_string = var_19_string;
	var_39_int = "Klara scene: " + var_19_string;
	Trace(var_39_int);
	GetSceneByName(var_18_object, var_19_string);
	var_40_object = var_18_object;
	if(var_40_object != 0) {
		var_41_object = Obj(); var_42_object = Obj(); var_43_string = ""; var_44_string = ""; var_45_string = "";
		var_18_object = var_42_object;
		var_43_string = "pt_klara" + var_7_int;
		func_185(var_41_object, var_42_object, var_43_string, "NPC_Klara", "k2system_klara2.xml");
		var_1_object = var_41_object;
		@@@var_1_object:SetProperty("day", var_7_int);
		var_61_int = 0;
		var_7_int = var_61_int;
		func_506(var_61_int);
		var_0_int = var_7_int;
	} else {
		var_64_int = "ERROR: Klara2 scene was not found: " + var_19_string;
		Trace(var_64_int);
	}
	return 6;
	
}
EMIT "Stack[-2] = 0";


func_421(var_79_int, var_80_float)
{
	var_82_bool = var_79_int == (int)6;
	if(var_82_bool != 0) {
		var_83_int = 0; var_84_float = 0;
		var_80_float = var_84_float;
		func_235(var_83_int, var_84_float);
		func_271();
		func_284();
	} else {
		var_124_bool = var_79_int == (int)7;
		if(var_124_bool != 0) {
			var_125_int = 0; var_126_float = 0;
			var_80_float = var_126_float;
			func_244(var_125_int, var_126_float);
			func_271();
			func_284();
			goto Label_505;
		}
		var_132_bool = var_79_int == (int)8;
		if(var_132_bool != 0) {
			var_133_int = 0; var_134_float = 0;
			var_80_float = var_134_float;
			func_253(var_133_int, var_134_float);
			func_271();
			func_284();
			goto Label_505;
		}
		var_140_bool = var_79_int == (int)9;
		if(var_140_bool != 0) {
			var_141_int = 0; var_142_float = 0;
			var_80_float = var_142_float;
			func_262(var_141_int, var_142_float);
			func_271();
			func_284();
			goto Label_505;
		}
		var_148_bool = var_79_int == (int)10;
		if(var_148_bool != 0) {
			var_149_int = 0; var_150_float = 0;
			var_80_float = var_150_float;
			func_217(var_149_int, var_150_float);
			func_271();
			func_284();
			goto Label_505;
		}
		var_156_bool = var_79_int == (int)11;
		if(var_156_bool == 0) goto Label_505;
		var_157_int = 0; var_158_float = 0;
		var_80_float = var_158_float;
		func_226(var_157_int, var_158_float);
		func_271();
		func_284();
	}
Label_505:
	return 0;
	
}


func_168(var_3_object)
{
	var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_23_int = 0;
	
Label_170:
	var_26_bool = var_23_int < (int)12;
	if(var_26_bool != 0) {
		@@@var_3_object:get(var_24_bool, var_23_int);
		var_27_int = 0; var_28_bool = 0;
		var_27_int = var_23_int + (int)1;
		var_24_bool = var_28_bool;
		func_372(var_27_int, var_28_bool);
		var_23_int = var_23_int + (int)1;
		goto Label_170;
	}
	return 4;
}


func_297()
{
	var_185_object = Obj(); var_186_object = Obj();
	CreateDiaryEntry(var_186_object, (int)725, (int)2, (int)539104);
	var_190_bool = 0; var_191_object = Obj(); var_192_int = 0;
	var_186_object = var_191_object;
	func_336(var_190_bool, var_191_object, (int)723);
	return 2;
}
EMIT "Stack[-1] = 0";


func_235(var_83_int, var_84_float)
{
	var_85_int = 0; var_86_int = 0; var_87_int = 0; var_88_float = 0;
	var_84_float = var_88_float;
	func_364(var_85_int, (int)538504, (int)538503, var_88_float);
	var_85_int = var_83_int;
	return 0;
}


func_364(var_85_int, var_86_int, var_87_int, var_88_float)
{
	var_89_int = 0; var_90_int = 0;
	AddMessage(var_86_int, var_87_int, var_88_float, var_90_int);
	SendWorldWndMessage((int)6);
	var_90_int = var_85_int;
	return 2;
}


func_372(var_27_int, var_28_bool)
{
	var_31_int = "K2System" + var_27_int;
	var_32_bool = var_28_bool;
	if(var_32_bool != 0) {
		var_33_int = 1;
	} else {
		var_34_int = 0; //@pi
	}
	SetVariable(var_31_int, var_33_int);
	return 0;
	
}


func_244(var_125_int, var_126_float)
{
	var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_float = 0;
	var_126_float = var_130_float;
	func_364(var_127_int, (int)538506, (int)538505, var_130_float);
	var_127_int = var_125_int;
	return 0;
}


func_310()
{
	var_195_object = Obj(); var_196_object = Obj();
	CreateDiaryEntry(var_196_object, (int)726, (int)2, (int)539105);
	var_200_bool = 0; var_201_object = Obj(); var_202_int = 0;
	var_196_object = var_201_object;
	func_336(var_200_bool, var_201_object, (int)723);
	return 2;
}
EMIT "Stack[-1] = 0";


func_185(var_41_object, var_42_object, var_43_string, var_44_string, var_45_string)
{
	var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_object = Obj(); var_51_bool = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_object = Obj();
	@@var_42_object:GetLocator(var_43_string, var_51_bool, var_52_cvector, var_53_cvector);
	var_55_bool = var_51_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_57_int = "Locator " + var_43_string;
		var_59_int = var_57_int + " doesn't exist";
		Trace(var_59_int);
	} else {
		AddActor(Obj(), var_44_string, var_42_object, var_52_cvector, var_53_cvector, var_45_string);
	}
	var_54_object = var_41_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_506(var_61_int)
{
	SetVariable("k2system_klara_day", var_61_int);
	return 0;
}


func_253(var_133_int, var_134_float)
{
	var_135_int = 0; var_136_int = 0; var_137_int = 0; var_138_float = 0;
	var_134_float = var_138_float;
	func_364(var_135_int, (int)538508, (int)538507, var_138_float);
	var_135_int = var_133_int;
	return 0;
}


func_383(var_24_string, var_25_int)
{
	var_27_bool = var_25_int == (int)6;
	if(var_27_bool != 0) {
		var_24_string = "lc_House6_04";
		return 0;
	EMIT "GOTO 0x1a3";
	}
	var_29_bool = var_25_int == (int)7;
	if(var_29_bool != 0) {
		var_24_string = "r2_house3_03";
		return 0;
	EMIT "GOTO 0x1a3";
	}
	var_31_bool = var_25_int == (int)8;
	if(var_31_bool != 0) {
		var_24_string = "house1_se_04r";
		return 0;
	EMIT "GOTO 0x1a3";
	}
	var_33_bool = var_25_int == (int)9;
	if(var_33_bool != 0) {
		var_24_string = "r7_house3_02_i2";
		return 0;
	EMIT "GOTO 0x1a3";
	}
	var_35_bool = var_25_int == (int)10;
	if(var_35_bool != 0) {
		var_24_string = "house5_15";
		return 0;
	EMIT "GOTO 0x1a3";
	}
	var_37_bool = var_25_int == (int)11;
	if(var_37_bool != 0) {
		var_24_string = "r5_house2_01";
		return 0;
	}
	var_24_string = "";
	return 0;
}


