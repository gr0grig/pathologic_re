// @IMPORTS: GetScene/1,GetPosition/1,sync/1,GetMainOutdoorScene/1,rand/2,SetProperty/2,irand/2,self/1,rand/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1
// @STRINGS: W:walk_distance|W:flower|W:peanut|W:hook|W:beads|W:bracelet|W:silver_ring|W:gold_ring|W:funduk|W:needle|W:razor|A:GetRegionByPt|A:GetProperty|A:SetProperty|A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:SetItemName
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,cvector,float params=0
// @PE: 0x4f

main(var_0_object, var_1_cvector, var_2_float)
{
	var_3_float = 0; var_4_float = 0;
	GetScene(var_0_object);
	GetPosition(var_1_cvector);
	var_5_float = GetByIndex(var_1_cvector, 1);
	SetByIndex(var_1_cvector, 1) = (float)0;
	
Label_8:
	sync(var_4_float);
	var_6_float = 0;
	var_4_float = var_6_float;
	func_16(var_3_float, var_4_float, var_6_float);
	goto Label_8;
}
EMIT "Return(); Pop(2)";


func_450(var_69_bool, var_70_object, var_71_object, var_72_int)
{
	var_77_int = 0; var_78_int = 0; var_79_bool = 0; var_80_int = 0; var_81_int = 0; var_82_bool = 0;
	@@var_71_object:GetItemID(var_80_int);
	GetInvItemProperty(var_81_int, var_80_int, "Category");
	@@var_70_object:AddItem(var_82_bool, var_71_object, var_81_int, var_72_int);
	var_84_bool = var_82_bool;
	if(var_84_bool != 0) {
		var_85_int = 0; var_86_int = 0;
		var_80_int = var_85_int;
		var_72_int = var_86_int;
		func_419(var_85_int, var_86_int);
	}
	var_82_bool = var_69_bool;
	return 6;
}


func_391(var_137_object, var_138_string, var_139_int)
{
	var_140_int = 0; var_141_int = 0;
	@@var_137_object:GetProperty(var_138_string, var_141_int);
	var_142_int = var_141_int + var_139_int;
	@@var_137_object:SetProperty(var_138_string, var_142_int);
	return 2;
}


func_136()
{
	var_47_int = 0; var_48_int = 0;
	var_49_bool = 0; var_50_float = 0;
	func_409(var_49_bool, (float)0.14000000059604645);
	if(var_49_bool != 0) {
		irand(var_48_int, (int)3);
		var_55_bool = var_48_int == (int)0;
		if(var_55_bool != 0) {
			var_56_string = ""; var_57_int = 0; var_58_int = 0; var_59_int = 0;
			func_467("flower", (int)1, (int)5, (int)1);
		} else {
			var_91_bool = var_48_int == (int)1;
			if(var_91_bool != 0) {
				var_92_string = ""; var_93_int = 0; var_94_int = 0; var_95_int = 0;
				func_467("peanut", (int)1, (int)5, (int)1);
				goto Label_177;
			}
			var_97_bool = var_48_int == (int)2;
			if(var_97_bool == 0) goto Label_177;
			var_98_string = ""; var_99_int = 0; var_100_int = 0; var_101_int = 0;
			func_467("hook", (int)1, (int)5, (int)1);
		}
	}
Label_177:
	return 2;
	
}


func_398(var_73_object)
{
	var_74_object = Obj(); var_75_object = Obj();
	self(var_75_object);
	var_75_object = var_73_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_79(var_36_int)
{
	var_46_bool = var_36_int == (int)6;
	if(var_46_bool != 0) {
		func_136();
	} else {
		var_102_bool = 0;
		var_102_bool = 0;
		var_104_bool = var_36_int >= (int)1;
		if(var_104_bool != 0) {
			var_106_bool = var_36_int <= (int)5;
			if(var_106_bool != 0) {
				var_102_bool = 1;
			}
		}
		if(var_102_bool != 0) {
			func_178();
			goto Label_135;
		}
		var_153_bool = 0;
		var_153_bool = 1;
		var_155_bool = var_36_int == (int)0;
		if(var_155_bool != 1) {
			var_156_bool = 0;
			var_156_bool = 0;
			var_158_bool = var_36_int >= (int)7;
			if(var_158_bool != 0) {
				var_160_bool = var_36_int <= (int)13;
				if(var_160_bool != 0) {
					var_156_bool = 1;
				}
			}
			if(var_156_bool != 1) {
				var_153_bool = 0;
			}
		}
		if(var_153_bool != 0) {
			func_240();
			goto Label_135;
		}
		var_200_bool = 0;
		var_200_bool = 1;
		var_202_bool = var_36_int == (int)14;
		if(var_202_bool != 1) {
			var_204_bool = var_36_int == (int)15;
			if(var_204_bool != 1) {
				var_200_bool = 0;
			}
		}
		if(var_200_bool == 0) goto Label_135;
		func_313();
	}
Label_135:
	return 0;
	
}


func_16(var_0_object, var_1_cvector, var_2_float)
{
	var_7_object = Obj(); var_8_object = Obj(); var_9_cvector = CVector(0,0,0); var_10_float = 0; var_11_float = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_float = 0;
	GetScene(var_12_object);
	GetMainOutdoorScene(var_13_object);
	var_17_bool = var_13_object != var_12_object;
	if(var_17_bool != 0) {
		return 10;
	}
	GetPosition(var_14_cvector);
	var_18_float = GetByIndex(var_14_cvector, 1);
	SetByIndex(var_14_cvector, 1) = (float)0;
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0);
	var_14_cvector = var_20_cvector;
	var_21_cvector = var_1_cvector;
	func_404(var_19_float, var_20_cvector, var_21_cvector);
	var_19_float = var_15_float;
	var_25_bool = 0;
	var_25_bool = 1;
	var_26_bool = var_12_object != var_0_object;
	if(var_26_bool != 1) {
		var_28_bool = var_15_float > (int)1000;
		if(var_28_bool != 1) {
			var_25_bool = 0;
		}
	}
	if(var_25_bool != 0) {
		var_0_object = var_12_object;
		var_1_cvector = var_14_cvector;
		return 10;
	}
	rand(var_16_float, (float)0.5);
	var_16_float = var_16_float + (float)0.5;
	var_31_float = var_16_float * var_15_float;
	var_33_float = var_31_float / (float)100.0;
	var_2_float = var_2_float + var_33_float;
	var_1_cvector = var_14_cvector;
	var_0_object = var_12_object;
	var_35_bool = var_2_float > (float)50.0;
	if(var_35_bool != 0) {
		var_36_int = 0;
		func_380((int)0);
		var_37_int = var_36_int;
		func_79(var_36_int);
		var_2_float = 0;
	}
	var_240_float = (int)1000 * var_2_float;
	var_242_float = var_240_float / (float)50.0;
	SetProperty("walk_distance", var_242_float);
	return 10;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


func_467(var_56_string, var_57_int, var_58_int, var_59_int)
{
	var_60_int = 0; var_61_object = Obj(); var_62_int = 0; var_63_object = Obj();
	var_64_bool = 0; var_65_int = 0; var_66_int = 0;
	var_57_int = var_65_int;
	var_58_int = var_66_int;
	func_414(var_64_bool, var_65_int, var_66_int);
	if(var_64_bool != 0) {
		irand(var_62_int, var_59_int);
		CreateInvItem(var_63_object);
		@@var_63_object:SetItemName(var_56_string);
		var_69_bool = 0; var_70_object = Obj(); var_71_object = Obj(); var_72_int = 0;
		func_398(Obj());
		var_73_object = var_70_object;
		var_63_object = var_71_object;
		var_72_int = var_62_int + (int)1;
		func_450(var_69_bool, var_70_object, var_71_object, var_72_int);
		var_63_object = 0;
	}
	return 4;
}


func_404(var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0);
	var_23_cvector = var_21_cvector - var_20_cvector;
	var_24_int = var_23_cvector | var_23_cvector;
	var_19_float = sqrt(var_24_int);
	return 2;
}


func_409(var_49_bool, var_50_float)
{
	var_51_float = 0; var_52_float = 0;
	rand(var_52_float);
	var_49_bool = var_52_float < var_50_float;
	return 2;
}


func_414(var_64_bool, var_65_int, var_66_int)
{
	var_67_int = 0; var_68_int = 0;
	irand(var_68_int, var_66_int);
	var_64_bool = var_68_int < var_65_int;
	return 2;
}


func_419(var_85_int, var_86_int)
{
	var_87_object = Obj(); var_88_object = Obj();
	CreateIntVector(var_88_object);
	@@var_88_object:add(var_85_int);
	@@var_88_object:add(var_86_int);
	SendWorldWndMessage((int)3, var_88_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_431(var_131_object, var_132_int)
{
	var_135_int = 0; var_136_int = 0;
	var_137_object = Obj(); var_138_string = ""; var_139_int = 0;
	var_131_object = var_137_object;
	var_132_int = var_139_int;
	func_391(var_137_object, "money", var_139_int);
	var_144_bool = var_132_int > (int)0;
	if(var_144_bool != 0) {
		GetInvItemByName(var_136_int, "Money");
		var_146_int = 0; var_147_int = 0;
		var_136_int = var_146_int;
		var_132_int = var_147_int;
		func_419(var_146_int, var_147_int);
	}
	return 2;
}


func_240()
{
	var_161_int = 0; var_162_int = 0; var_163_int = 0; var_164_int = 0; var_165_int = 0; var_166_int = 0;
	var_167_bool = 0; var_168_float = 0;
	func_409(var_167_bool, (float)0.14000000059604645);
	if(var_167_bool != 0) {
		irand(var_164_int, (int)3);
		var_171_bool = var_164_int == (int)0;
		if(var_171_bool != 0) {
			var_172_string = ""; var_173_int = 0; var_174_int = 0; var_175_int = 0;
			func_467("silver_ring", (int)1, (int)5, (int)1);
		} else {
			var_177_bool = var_164_int == (int)1;
			if(var_177_bool != 0) {
				var_178_string = ""; var_179_int = 0; var_180_int = 0; var_181_int = 0;
				func_467("gold_ring", (int)1, (int)10, (int)1);
				goto Label_281;
			}
			var_183_bool = var_164_int == (int)2;
			if(var_183_bool == 0) goto Label_281;
			var_184_string = ""; var_185_int = 0; var_186_int = 0; var_187_int = 0;
			func_467("funduk", (int)1, (int)5, (int)1);
	}
		var_188_bool = 0; var_189_float = 0;
		func_409(var_188_bool, (float)0.10000000149011612);
		if(var_188_bool != 0) {
			irand(var_165_int, (int)10);
			var_191_object = Obj(); var_192_int = 0;
			func_398(Obj());
			var_193_object = var_191_object;
			var_192_int = var_165_int + (int)1;
			func_431(var_191_object, var_192_int);
			goto Label_312;
		}
		irand(var_166_int, (int)3);
		var_196_object = Obj(); var_197_int = 0;
		func_398(Obj());
		var_198_object = var_196_object;
		var_197_int = var_166_int + (int)1;
		func_431(var_196_object, var_197_int);
	}
Label_281:
	goto Label_312;
	
Label_312:
	return 6;
	
}


func_178()
{
	var_107_int = 0; var_108_int = 0; var_109_int = 0; var_110_int = 0; var_111_int = 0; var_112_int = 0;
	var_113_bool = 0; var_114_float = 0;
	func_409(var_113_bool, (float)0.14000000059604645);
	if(var_113_bool != 0) {
		irand(var_110_int, (int)2);
		var_117_bool = var_110_int == (int)0;
		if(var_117_bool != 0) {
			var_118_string = ""; var_119_int = 0; var_120_int = 0; var_121_int = 0;
			func_467("beads", (int)1, (int)9, (int)1);
		} else {
			var_123_bool = var_110_int == (int)1;
			if(var_123_bool == 0) goto Label_208;
			var_124_string = ""; var_125_int = 0; var_126_int = 0; var_127_int = 0;
			func_467("bracelet", (int)1, (int)5, (int)1);
	}
		var_128_bool = 0; var_129_float = 0;
		func_409(var_128_bool, (float)0.10000000149011612);
		if(var_128_bool != 0) {
			irand(var_111_int, (int)10);
			var_131_object = Obj(); var_132_int = 0;
			func_398(Obj());
			var_133_object = var_131_object;
			var_132_int = var_111_int + (int)1;
			func_431(var_131_object, var_132_int);
			goto Label_239;
		}
		irand(var_112_int, (int)3);
		var_149_object = Obj(); var_150_int = 0;
		func_398(Obj());
		var_151_object = var_149_object;
		var_150_int = var_112_int + (int)1;
		func_431(var_149_object, var_150_int);
	}
Label_208:
	goto Label_239;
	
Label_239:
	return 6;
	
}


func_375(var_42_cvector)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	GetPosition(var_44_cvector);
	var_44_cvector = var_42_cvector;
	return 2;
}


func_313()
{
	var_205_int = 0; var_206_int = 0; var_207_int = 0; var_208_int = 0; var_209_int = 0; var_210_int = 0;
	var_211_bool = 0; var_212_float = 0;
	func_409(var_211_bool, (float)0.14000000059604645);
	if(var_211_bool != 0) {
		irand(var_208_int, (int)2);
		var_215_bool = var_208_int == (int)0;
		if(var_215_bool != 0) {
			var_216_string = ""; var_217_int = 0; var_218_int = 0; var_219_int = 0;
			func_467("needle", (int)1, (int)6, (int)1);
		} else {
			var_221_bool = var_208_int == (int)1;
			if(var_221_bool == 0) goto Label_343;
			var_222_string = ""; var_223_int = 0; var_224_int = 0; var_225_int = 0;
			func_467("razor", (int)1, (int)7, (int)1);
	}
		var_226_bool = 0; var_227_float = 0;
		func_409(var_226_bool, (float)0.10000000149011612);
		if(var_226_bool != 0) {
			irand(var_209_int, (int)10);
			var_229_object = Obj(); var_230_int = 0;
			func_398(Obj());
			var_231_object = var_229_object;
			var_230_int = var_209_int + (int)1;
			func_431(var_229_object, var_230_int);
			goto Label_374;
		}
		irand(var_210_int, (int)3);
		var_234_object = Obj(); var_235_int = 0;
		func_398(Obj());
		var_236_object = var_234_object;
		var_235_int = var_210_int + (int)1;
		func_431(var_234_object, var_235_int);
	}
Label_343:
	goto Label_374;
	
Label_374:
	return 6;
	
}


func_380(var_37_int)
{
	var_38_object = Obj(); var_39_int = 0; var_40_object = Obj(); var_41_int = 0;
	GetScene(var_40_object);
	var_42_cvector = CVector(0,0,0);
	func_375(var_42_cvector);
	@@var_40_object:GetRegionByPt(var_41_int, var_42_cvector);
	var_41_int = var_37_int;
	return 4;
}
EMIT "Stack[-2] = 0";


