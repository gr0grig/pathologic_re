// @IMPORTS: CreateIntVector/1,Hold/0,Trace/1,irand/2,CreateObjectVector/1,SetVariable/2,GetVariable/2,GetMainOutdoorScene/1,FindActor/2,_strlwr/1,CreateStringVector/1
// @STRINGS: A:add|A:get|W:rescue|W:rescue_locked|W:update|W:cleanup|A:size|W:Volonteers update...|W:Volonteer : |W:Diseased volonteer : |W:Today volonteers: |W:, diseased: |W:Volonteers Cleanup...|A:Remove|W:Volonteers Init...|W:Volonteers count: |W:vol_|W:pt_volonteer_|W:pers_birdmask|W:vbirdmask_|W:.xml|A:set|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|A:SetProperty|W:alexandr|W:andrei|W:anna|W:bigvlad|W:eva|W:georg|W:grif|W:han|W:julia|W:kapella|W:katerina|W:klara|W:laska|W:maria|W:mark|W:mat|W:mishka|W:mladvlad|W:notkin|W:ospina|W:petr|W:rubin|W:spi4ka|W:starshina|W:viktor|W:wasted_woman|W:wasted_male|W:alkash|W:boy|W:girl|W:littleboy|W:littlegirl|W:butcher|W:dohodyaga|W:unosha|W:vaxxabit|W:vaxxabitka|W:worker|W:whitemask|W:patrol|W:danko|W:alkash_d|W:boy_d|W:butcher_d|W:dohodyaga_d|W:girl_d|W:littleboy_d|W:littlegirl_d|W:unosha2|W:unosha_d|W:unosha2_d|W:vaxxabit_d|W:vaxxabitka_d|W:wasted_male_d|W:wasted_woman_d|W:worker2|W:worker_d|W:worker2_d|W:burah|W:gorbun_daughter|W:gorbun|W:albinos|W:aglaja|W:nude|W:block|W:officer|W:cot_alexandr@door1|W:shouse1_kabak@door1|W:cot_anna@door1|W:cot_bigvad@door1|W:cot_georg@door1|W:cot_georg@door2|W:cot_julia@door1|W:cot_kapella@door1|W:cot_katerina@door1|W:cot_lara@door1|W:vagon_mishka@door1|W:house_vlad@door1|W:warehouse_notkin@door1|W:dt_house_1_04@door1|W:house_petr@door1|W:house_spi4ka@door1|W:house_spi4ka@door2|W:cot_viktor@door1|W:cot_viktor@door2
// @RUN_OP: 0x19e
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,int params=0
// @EVENT_26: op=0x1a5 vars=string,string
// @PE: 0x19b,0x3b4,0x51c

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_string, var_6_string)
{
	var_7_int = 0; var_8_int = 0;
	Trace(var_5_string);
	var_10_bool = var_5_string == "rescue";
	if(var_10_bool != 0) {
		var_11_int = 0;
		var_12_int = 0; var_13_int = 0;
		var_14_int = 0; var_15_string = "";
		var_6_string = var_15_string;
		func_948(var_14_int, var_15_string);
		var_14_int = var_13_int;
		func_742(var_11_int, var_12_int, var_13_int);
		var_12_int = var_11_int;
		func_856(var_7_int, var_8_int, var_11_int);
	} else {
		var_202_bool = var_5_string == "rescue_locked";
		if(var_202_bool != 0) {
			var_8_int = 0;

		Label_444:
			var_203_int = 0;
			func_737(var_8_int, var_203_int);
			var_204_bool = var_8_int < var_203_int;
			if(var_204_bool != 0) {
				var_205_bool = 0; var_206_int = 0;
				var_8_int = var_206_int;
				func_771(var_205_bool, var_206_int);
				if(var_205_bool != 0) {
					var_214_int = 0;
					var_8_int = var_214_int;
					func_856(var_7_int, var_8_int, var_214_int);
				}
				var_8_int = var_8_int + (int)1;
				goto Label_444;
			}
			goto Label_475;
		}
		var_217_bool = var_5_string == "update";
		if(var_217_bool != 0) {
			func_528(var_7_int, var_8_int);
			goto Label_475;
		}
		var_531_bool = var_5_string == "cleanup";
		if(var_531_bool == 0) goto Label_475;
		func_657(var_8_int);
	}
Label_475:
	return 2;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int)
{
	func_679(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int);
	
Label_417:
	Hold();
	goto Label_417;
}
EMIT "Return(); Pop(0)";


func_896(var_488_int)
{
	var_489_int = 0; var_490_int = 0;
	var_491_string = ""; var_492_int = 0;
	var_488_int = var_492_int;
	func_765(var_490_int, var_491_string, var_492_int);
	GetVariable(var_491_string, var_490_int);
	var_493_string = ""; var_494_int = 0;
	var_488_int = var_494_int;
	func_765(var_490_int, var_493_string, var_494_int);
	var_496_int = var_490_int & (int)8;
	var_498_int = var_496_int | (int)3;
	SetVariable(var_493_string, var_498_int);
	return 2;
}


func_0(var_73_object)
{
	var_74_int = 0; var_75_object = Obj(); var_76_object = Obj(); var_77_int = 0; var_78_object = Obj(); var_79_object = Obj();
	var_77_int = 0;
	
Label_2:
	var_81_bool = var_77_int < (int)12;
	if(var_81_bool != 0) {
		CreateIntVector(var_78_object);
		@@var_73_object:add(var_78_object);
		var_78_object = 0;
		var_77_int = var_77_int + (int)1;
		goto Label_2;
	}
	@@var_73_object:get(var_79_object, (int)0);
	@@var_73_object:get(var_79_object, (int)1);
	var_85_int = 0; var_86_int = 0;
	func_742(var_79_object, var_85_int, (int)11);
	@@var_79_object:add(var_85_int);
	var_97_int = 0; var_98_int = 0;
	func_742(var_79_object, var_97_int, (int)18);
	@@var_79_object:add(var_97_int);
	var_99_int = 0; var_100_int = 0;
	func_742(var_79_object, var_99_int, (int)21);
	@@var_79_object:add(var_99_int);
	@@var_73_object:get(var_79_object, (int)2);
	var_102_int = 0; var_103_int = 0;
	func_742(var_79_object, var_102_int, (int)2);
	@@var_79_object:add(var_102_int);
	var_104_int = 0; var_105_int = 0;
	func_742(var_79_object, var_104_int, (int)9);
	@@var_79_object:add(var_104_int);
	var_106_int = 0; var_107_int = 0;
	func_742(var_79_object, var_106_int, (int)11);
	@@var_79_object:add(var_106_int);
	var_108_int = 0; var_109_int = 0;
	func_742(var_79_object, var_108_int, (int)13);
	@@var_79_object:add(var_108_int);
	var_110_int = 0; var_111_int = 0;
	func_742(var_79_object, var_110_int, (int)24);
	@@var_79_object:add(var_110_int);
	@@var_73_object:get(var_79_object, (int)3);
	var_113_int = 0; var_114_int = 0;
	func_742(var_79_object, var_113_int, (int)10);
	@@var_79_object:add(var_113_int);
	var_115_int = 0; var_116_int = 0;
	func_742(var_79_object, var_115_int, (int)11);
	@@var_79_object:add(var_115_int);
	var_117_int = 0; var_118_int = 0;
	func_742(var_79_object, var_117_int, (int)18);
	@@var_79_object:add(var_117_int);
	var_119_int = 0; var_120_int = 0;
	func_742(var_79_object, var_119_int, (int)20);
	@@var_79_object:add(var_119_int);
	var_121_int = 0; var_122_int = 0;
	func_742(var_79_object, var_121_int, (int)24);
	@@var_79_object:add(var_121_int);
	var_123_int = 0; var_124_int = 0;
	func_742(var_79_object, var_123_int, (int)26);
	@@var_79_object:add(var_123_int);
	@@var_73_object:get(var_79_object, (int)4);
	var_126_int = 0; var_127_int = 0;
	func_742(var_79_object, var_126_int, (int)9);
	@@var_79_object:add(var_126_int);
	var_128_int = 0; var_129_int = 0;
	func_742(var_79_object, var_128_int, (int)10);
	@@var_79_object:add(var_128_int);
	var_130_int = 0; var_131_int = 0;
	func_742(var_79_object, var_130_int, (int)18);
	@@var_79_object:add(var_130_int);
	var_132_int = 0; var_133_int = 0;
	func_742(var_79_object, var_132_int, (int)20);
	@@var_79_object:add(var_132_int);
	var_134_int = 0; var_135_int = 0;
	func_742(var_79_object, var_134_int, (int)21);
	@@var_79_object:add(var_134_int);
	var_136_int = 0; var_137_int = 0;
	func_742(var_79_object, var_136_int, (int)24);
	@@var_79_object:add(var_136_int);
	@@var_73_object:get(var_79_object, (int)5);
	var_139_int = 0; var_140_int = 0;
	func_742(var_79_object, var_139_int, (int)20);
	@@var_79_object:add(var_139_int);
	@@var_73_object:get(var_79_object, (int)6);
	var_142_int = 0; var_143_int = 0;
	func_742(var_79_object, var_142_int, (int)3);
	@@var_79_object:add(var_142_int);
	var_144_int = 0; var_145_int = 0;
	func_742(var_79_object, var_144_int, (int)9);
	@@var_79_object:add(var_144_int);
	var_146_int = 0; var_147_int = 0;
	func_742(var_79_object, var_146_int, (int)10);
	@@var_79_object:add(var_146_int);
	var_148_int = 0; var_149_int = 0;
	func_742(var_79_object, var_148_int, (int)11);
	@@var_79_object:add(var_148_int);
	var_150_int = 0; var_151_int = 0;
	func_742(var_79_object, var_150_int, (int)13);
	@@var_79_object:add(var_150_int);
	var_152_int = 0; var_153_int = 0;
	func_742(var_79_object, var_152_int, (int)18);
	@@var_79_object:add(var_152_int);
	var_154_int = 0; var_155_int = 0;
	func_742(var_79_object, var_154_int, (int)19);
	@@var_79_object:add(var_154_int);
	var_156_int = 0; var_157_int = 0;
	func_742(var_79_object, var_156_int, (int)20);
	@@var_79_object:add(var_156_int);
	var_158_int = 0; var_159_int = 0;
	func_742(var_79_object, var_158_int, (int)21);
	@@var_79_object:add(var_158_int);
	var_160_int = 0; var_161_int = 0;
	func_742(var_79_object, var_160_int, (int)24);
	@@var_79_object:add(var_160_int);
	var_162_int = 0; var_163_int = 0;
	func_742(var_79_object, var_162_int, (int)26);
	@@var_79_object:add(var_162_int);
	@@var_73_object:get(var_79_object, (int)7);
	var_165_int = 0; var_166_int = 0;
	func_742(var_79_object, var_165_int, (int)3);
	@@var_79_object:add(var_165_int);
	var_167_int = 0; var_168_int = 0;
	func_742(var_79_object, var_167_int, (int)9);
	@@var_79_object:add(var_167_int);
	var_169_int = 0; var_170_int = 0;
	func_742(var_79_object, var_169_int, (int)11);
	@@var_79_object:add(var_169_int);
	var_171_int = 0; var_172_int = 0;
	func_742(var_79_object, var_171_int, (int)13);
	@@var_79_object:add(var_171_int);
	var_173_int = 0; var_174_int = 0;
	func_742(var_79_object, var_173_int, (int)18);
	@@var_79_object:add(var_173_int);
	var_175_int = 0; var_176_int = 0;
	func_742(var_79_object, var_175_int, (int)19);
	@@var_79_object:add(var_175_int);
	var_177_int = 0; var_178_int = 0;
	func_742(var_79_object, var_177_int, (int)20);
	@@var_79_object:add(var_177_int);
	var_179_int = 0; var_180_int = 0;
	func_742(var_79_object, var_179_int, (int)21);
	@@var_79_object:add(var_179_int);
	var_181_int = 0; var_182_int = 0;
	func_742(var_79_object, var_181_int, (int)24);
	@@var_79_object:add(var_181_int);
	var_183_int = 0; var_184_int = 0;
	func_742(var_79_object, var_183_int, (int)26);
	@@var_79_object:add(var_183_int);
	@@var_73_object:get(var_79_object, (int)8);
	var_186_int = 0; var_187_int = 0;
	func_742(var_79_object, var_186_int, (int)3);
	@@var_79_object:add(var_186_int);
	var_188_int = 0; var_189_int = 0;
	func_742(var_79_object, var_188_int, (int)9);
	@@var_79_object:add(var_188_int);
	var_190_int = 0; var_191_int = 0;
	func_742(var_79_object, var_190_int, (int)10);
	@@var_79_object:add(var_190_int);
	var_192_int = 0; var_193_int = 0;
	func_742(var_79_object, var_192_int, (int)11);
	@@var_79_object:add(var_192_int);
	var_194_int = 0; var_195_int = 0;
	func_742(var_79_object, var_194_int, (int)13);
	@@var_79_object:add(var_194_int);
	var_196_int = 0; var_197_int = 0;
	func_742(var_79_object, var_196_int, (int)18);
	@@var_79_object:add(var_196_int);
	var_198_int = 0; var_199_int = 0;
	func_742(var_79_object, var_198_int, (int)19);
	@@var_79_object:add(var_198_int);
	var_200_int = 0; var_201_int = 0;
	func_742(var_79_object, var_200_int, (int)20);
	@@var_79_object:add(var_200_int);
	var_202_int = 0; var_203_int = 0;
	func_742(var_79_object, var_202_int, (int)21);
	@@var_79_object:add(var_202_int);
	var_204_int = 0; var_205_int = 0;
	func_742(var_79_object, var_204_int, (int)24);
	@@var_79_object:add(var_204_int);
	@@var_73_object:get(var_79_object, (int)9);
	var_207_int = 0; var_208_int = 0;
	func_742(var_79_object, var_207_int, (int)3);
	@@var_79_object:add(var_207_int);
	var_209_int = 0; var_210_int = 0;
	func_742(var_79_object, var_209_int, (int)9);
	@@var_79_object:add(var_209_int);
	var_211_int = 0; var_212_int = 0;
	func_742(var_79_object, var_211_int, (int)10);
	@@var_79_object:add(var_211_int);
	var_213_int = 0; var_214_int = 0;
	func_742(var_79_object, var_213_int, (int)11);
	@@var_79_object:add(var_213_int);
	var_215_int = 0; var_216_int = 0;
	func_742(var_79_object, var_215_int, (int)13);
	@@var_79_object:add(var_215_int);
	var_217_int = 0; var_218_int = 0;
	func_742(var_79_object, var_217_int, (int)18);
	@@var_79_object:add(var_217_int);
	var_219_int = 0; var_220_int = 0;
	func_742(var_79_object, var_219_int, (int)19);
	@@var_79_object:add(var_219_int);
	var_221_int = 0; var_222_int = 0;
	func_742(var_79_object, var_221_int, (int)21);
	@@var_79_object:add(var_221_int);
	var_223_int = 0; var_224_int = 0;
	func_742(var_79_object, var_223_int, (int)24);
	@@var_79_object:add(var_223_int);
	return 6;
}
EMIT "Stack[-1] = 0";


func_1666(var_18_object, var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	@@var_18_object:add((int)1);
	var_23_object = var_19_object;
	if(var_23_object != 0) {
		CreateStringVector(var_21_object);
		@@var_21_object:add("cot_alexandr@door1");
		@@var_19_object:add(var_21_object);
	}
	@@var_18_object:add((int)2);
	var_26_object = var_19_object;
	if(var_26_object != 0) {
		CreateStringVector(var_21_object);
		@@var_21_object:add("shouse1_kabak@door1");
		@@var_19_object:add(var_21_object);
	}
	@@var_18_object:add((int)3);
	var_29_object = var_19_object;
	if(var_29_object != 0) {
		CreateStringVector(var_21_object);
		@@var_21_object:add("cot_anna@door1");
		@@var_19_object:add(var_21_object);
	}
	@@var_18_object:add((int)4);
	var_32_object = var_19_object;
	if(var_32_object != 0) {
		CreateStringVector(var_21_object);
		@@var_21_object:add("cot_bigvad@door1");
		@@var_19_object:add(var_21_object);
	}
	@@var_18_object:add((int)6);
	var_35_object = var_19_object;
	if(var_35_object != 0) {
		CreateStringVector(var_21_object);
		@@var_21_object:add("cot_georg@door1");
		@@var_21_object:add("cot_georg@door2");
		@@var_19_object:add(var_21_object);
	}
	@@var_18_object:add((int)9);
	var_39_object = var_19_object;
	if(var_39_object != 0) {
		CreateStringVector(var_21_object);
		@@var_21_object:add("cot_julia@door1");
		@@var_19_object:add(var_21_object);
	}
	@@var_18_object:add((int)10);
	var_42_object = var_19_object;
	if(var_42_object != 0) {
		CreateStringVector(var_21_object);
		@@var_21_object:add("cot_kapella@door1");
		@@var_19_object:add(var_21_object);
	}
	@@var_18_object:add((int)11);
	var_45_object = var_19_object;
	if(var_45_object != 0) {
		CreateStringVector(var_21_object);
		@@var_21_object:add("cot_katerina@door1");
		@@var_19_object:add(var_21_object);
	}
	@@var_18_object:add((int)13);
	var_48_object = var_19_object;
	if(var_48_object != 0) {
		CreateStringVector(var_21_object);
		@@var_21_object:add("cot_lara@door1");
		@@var_19_object:add(var_21_object);
	}
	@@var_18_object:add((int)18);
	var_51_object = var_19_object;
	if(var_51_object != 0) {
		CreateStringVector(var_21_object);
		@@var_21_object:add("vagon_mishka@door1");
		@@var_19_object:add(var_21_object);
	}
	@@var_18_object:add((int)19);
	var_54_object = var_19_object;
	if(var_54_object != 0) {
		CreateStringVector(var_21_object);
		@@var_21_object:add("house_vlad@door1");
		@@var_19_object:add(var_21_object);
	}
	@@var_18_object:add((int)20);
	var_57_object = var_19_object;
	if(var_57_object != 0) {
		CreateStringVector(var_21_object);
		@@var_21_object:add("warehouse_notkin@door1");
		@@var_19_object:add(var_21_object);
	}
	@@var_18_object:add((int)21);
	var_60_object = var_19_object;
	if(var_60_object != 0) {
		CreateStringVector(var_21_object);
		@@var_21_object:add("dt_house_1_04@door1");
		@@var_19_object:add(var_21_object);
	}
	@@var_18_object:add((int)22);
	var_63_object = var_19_object;
	if(var_63_object != 0) {
		CreateStringVector(var_21_object);
		@@var_21_object:add("house_petr@door1");
		@@var_19_object:add(var_21_object);
	}
	@@var_18_object:add((int)24);
	var_66_object = var_19_object;
	if(var_66_object != 0) {
		CreateStringVector(var_21_object);
		@@var_21_object:add("house_spi4ka@door1");
		@@var_21_object:add("house_spi4ka@door2");
		@@var_19_object:add(var_21_object);
	}
	@@var_18_object:add((int)26);
	var_70_object = var_19_object;
	if(var_70_object != 0) {
		CreateStringVector(var_21_object);
		@@var_21_object:add("cot_viktor@door1");
		@@var_21_object:add("cot_viktor@door2");
		@@var_19_object:add(var_21_object);
	}
	return 2;
}
EMIT "Stack[-1] = 0";


func_771(var_205_bool, var_206_int)
{
	var_207_int = 0; var_208_int = 0;
	var_209_string = ""; var_210_int = 0;
	var_206_int = var_210_int;
	func_765(var_208_int, var_209_string, var_210_int);
	GetVariable(var_209_string, var_208_int);
	var_212_int = var_208_int & (int)2;
	var_205_bool = var_212_int != (int)0;
	return 2;
}


func_783(var_479_bool, var_480_int)
{
	var_481_int = 0; var_482_int = 0;
	var_483_string = ""; var_484_int = 0;
	var_480_int = var_484_int;
	func_765(var_482_int, var_483_string, var_484_int);
	GetVariable(var_483_string, var_482_int);
	var_486_int = var_482_int & (int)1;
	var_479_bool = var_486_int == (int)0;
	return 2;
}


func_528(var_3_object, var_4_int)
{
	var_218_int = 0; var_219_int = 0; var_220_object = Obj(); var_221_int = 0; var_222_int = 0; var_223_string = ""; var_224_int = 0; var_225_int = 0; var_226_int = 0; var_227_int = 0; var_228_int = 0; var_229_int = 0; var_230_int = 0; var_231_int = 0; var_232_object = Obj(); var_233_int = 0; var_234_int = 0; var_235_string = ""; var_236_int = 0; var_237_int = 0; var_238_int = 0; var_239_int = 0; var_240_int = 0; var_241_int = 0;
	Trace("Volonteers update...");
	
Label_533:
	var_243_int = 0;
	func_737(var_241_int, var_243_int);
	var_244_bool = (int)0 < var_243_int;
	if(var_244_bool != 0) {
		var_245_int = 0; var_246_int = 0;
		var_230_int = var_246_int;
		func_760(var_241_int, var_245_int, var_246_int);
		var_245_int = var_231_int;
		var_249_bool = 0; var_250_int = 0;
		var_230_int = var_250_int;
		func_771(var_249_bool, var_250_int);
		if(var_249_bool != 0) {
			var_251_int = 0;
			var_230_int = var_251_int;
			func_807(var_241_int, var_251_int);
		}
		var_437_bool = 0; var_438_int = 0;
		var_230_int = var_438_int;
		func_795(var_437_bool, var_438_int);
		if(var_437_bool != 0) {
			@@@var_3_object:get(var_232_object, var_230_int);
			@@var_232_object:size(var_233_int);
			var_234_int = 0;

		Label_562:
			var_446_bool = var_234_int < var_233_int;
			if(var_446_bool != 0) {
				@@var_232_object:get(var_235_string, var_234_int);
				var_447_string = ""; var_448_bool = 0;
				var_235_string = var_447_string;
				func_932(var_447_string, (bool)1);
				var_234_int = var_234_int + (int)1;
				goto Label_562;
			}
			var_232_object = 0;
		}
		var_230_int = var_230_int + (int)1;
		goto Label_533;
	}
	var_4_int = var_4_int + (int)1;
	var_452_int = 0; var_453_int = 0;
	var_454_int = 0; var_455_int = 0;
	var_455_int = var_4_int;
	func_411(var_455_int);
	var_454_int = var_452_int;
	var_453_int = var_4_int;
	func_476(var_452_int, var_453_int);
	
Label_591:
	var_501_int = 0;
	func_737(var_241_int, var_501_int);
	var_502_bool = (int)0 < var_501_int;
	if(var_502_bool != 0) {
		var_503_int = 0; var_504_int = 0;
		var_237_int = var_504_int;
		func_760(var_241_int, var_503_int, var_504_int);
		var_503_int = var_238_int;
		var_505_bool = 0; var_506_int = 0;
		var_237_int = var_506_int;
		func_771(var_505_bool, var_506_int);
		if(var_505_bool != 0) {
			var_508_string = ""; var_509_int = 0;
			var_238_int = var_509_int;
			func_1308(var_508_string, var_509_int);
			var_510_int = "Volonteer : " + var_508_string;
			Trace(var_510_int);
			(int)0 = (int)0 + (int)1;
		}
		var_237_int = var_237_int + (int)1;
		goto Label_591;
	}
	
Label_621:
	var_513_int = 0;
	func_737(var_241_int, var_513_int);
	var_514_bool = (int)0 < var_513_int;
	if(var_514_bool != 0) {
		var_515_int = 0; var_516_int = 0;
		var_240_int = var_516_int;
		func_760(var_241_int, var_515_int, var_516_int);
		var_515_int = var_241_int;
		var_517_bool = 0; var_518_int = 0;
		var_240_int = var_518_int;
		func_795(var_517_bool, var_518_int);
		if(var_517_bool != 0) {
			(int)0 = (int)0 + (int)1;
			var_521_string = ""; var_522_int = 0;
			var_241_int = var_522_int;
			func_1308(var_521_string, var_522_int);
			var_523_int = "Diseased volonteer : " + var_521_string;
			Trace(var_523_int);
		}
		var_240_int = var_240_int + (int)1;
		goto Label_621;
	}
	var_526_int = "Today volonteers: " + var_236_int;
	var_528_int = var_526_int + ", diseased: ";
	var_529_int = var_528_int + var_239_int;
	Trace(var_529_int);
	return 24;
}


func_657(var_2_object)
{
	var_532_int = 0; var_533_object = Obj(); var_534_int = 0; var_535_object = Obj();
	EventDisable(26);
	Trace("Volonteers Cleanup...");
	var_534_int = 0;
	
Label_663:
	var_537_int = 0;
	func_737(var_535_object, var_537_int);
	var_538_bool = var_534_int < var_537_int;
	if(var_538_bool != 0) {
		@@@var_2_object:get(var_535_object, var_534_int);
		var_539_bool = var_535_object != 0; //@nn
		if(var_539_bool != 0) {
			@@var_535_object:Remove();
		}
		var_535_object = 0;
		var_534_int = var_534_int + (int)1;
		goto Label_663;
	}
	return 4;
}


func_914(var_415_object, var_416_object, var_417_string, var_418_string, var_419_string)
{
	var_424_bool = 0; var_425_cvector = CVector(0,0,0); var_426_cvector = CVector(0,0,0); var_427_object = Obj(); var_428_bool = 0; var_429_cvector = CVector(0,0,0); var_430_cvector = CVector(0,0,0); var_431_object = Obj();
	@@var_416_object:GetLocator(var_417_string, var_428_bool, var_429_cvector, var_430_cvector);
	var_432_bool = var_428_bool == 0; //@nz
	if(var_432_bool != 0) {
		var_434_int = "Locator " + var_417_string;
		var_436_int = var_434_int + " doesn't exist";
		Trace(var_436_int);
	} else {
		@@var_416_object:AddStationaryActor(Obj(), var_429_cvector, var_430_cvector, var_418_string, var_419_string);
	}
	var_431_object = var_415_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_856(var_2_object, var_3_object, var_11_int)
{
	var_168_int = 0; var_169_object = Obj(); var_170_object = Obj(); var_171_int = 0; var_172_int = 0; var_173_string = ""; var_174_int = 0; var_175_object = Obj(); var_176_object = Obj(); var_177_int = 0; var_178_int = 0; var_179_string = "";
	var_180_string = ""; var_181_int = 0;
	var_11_int = var_181_int;
	func_765(var_179_string, var_180_string, var_181_int);
	GetVariable(var_180_string, var_174_int);
	var_185_string = ""; var_186_int = 0;
	var_11_int = var_186_int;
	func_765(var_179_string, var_185_string, var_186_int);
	SetVariable(var_185_string, (int)1);
	@@@var_2_object:get(var_175_object, var_11_int);
	var_188_bool = var_175_object != 0; //@nn
	if(var_188_bool != 0) {
		@@var_175_object:Remove();
	}
	@@@var_3_object:get(var_176_object, var_11_int);
	@@var_176_object:size(var_177_int);
	var_178_int = 0;
	
Label_881:
	var_189_bool = var_178_int < var_177_int;
	if(var_189_bool != 0) {
		@@var_176_object:get(var_179_string, var_178_int);
		var_190_string = ""; var_191_bool = 0;
		var_179_string = var_190_string;
		func_932(var_190_string, (bool)0);
		var_178_int = var_178_int + (int)1;
		goto Label_881;
	}
	return 12;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


func_795(var_437_bool, var_438_int)
{
	var_439_int = 0; var_440_int = 0;
	var_441_string = ""; var_442_int = 0;
	var_438_int = var_442_int;
	func_765(var_440_int, var_441_string, var_442_int);
	GetVariable(var_441_string, var_440_int);
	var_444_int = var_440_int & (int)4;
	var_437_bool = var_444_int != (int)0;
	return 2;
}


func_411(var_454_int)
{
	var_454_int = 2;
	return 0;
}


func_1308(var_269_string, var_270_int)
{
	var_274_bool = var_270_int == (int)1;
	if(var_274_bool != 0) {
		var_269_string = "alexandr";
		return 0;
	}
	var_276_bool = var_270_int == (int)2;
	if(var_276_bool != 0) {
		var_269_string = "andrei";
		return 0;
	}
	var_278_bool = var_270_int == (int)3;
	if(var_278_bool != 0) {
		var_269_string = "anna";
		return 0;
	}
	var_280_bool = var_270_int == (int)4;
	if(var_280_bool != 0) {
		var_269_string = "bigvlad";
		return 0;
	}
	var_282_bool = var_270_int == (int)5;
	if(var_282_bool != 0) {
		var_269_string = "eva";
		return 0;
	}
	var_284_bool = var_270_int == (int)6;
	if(var_284_bool != 0) {
		var_269_string = "georg";
		return 0;
	}
	var_286_bool = var_270_int == (int)7;
	if(var_286_bool != 0) {
		var_269_string = "grif";
		return 0;
	}
	var_288_bool = var_270_int == (int)8;
	if(var_288_bool != 0) {
		var_269_string = "han";
		return 0;
	}
	var_290_bool = var_270_int == (int)9;
	if(var_290_bool != 0) {
		var_269_string = "julia";
		return 0;
	}
	var_292_bool = var_270_int == (int)10;
	if(var_292_bool != 0) {
		var_269_string = "kapella";
		return 0;
	}
	var_294_bool = var_270_int == (int)11;
	if(var_294_bool != 0) {
		var_269_string = "katerina";
		return 0;
	}
	var_296_bool = var_270_int == (int)12;
	if(var_296_bool != 0) {
		var_269_string = "klara";
		return 0;
	}
	var_298_bool = var_270_int == (int)13;
	if(var_298_bool != 0) {
		var_269_string = "lara";
		return 0;
	}
	var_300_bool = var_270_int == (int)14;
	if(var_300_bool != 0) {
		var_269_string = "laska";
		return 0;
	}
	var_302_bool = var_270_int == (int)15;
	if(var_302_bool != 0) {
		var_269_string = "maria";
		return 0;
	}
	var_304_bool = var_270_int == (int)16;
	if(var_304_bool != 0) {
		var_269_string = "mark";
		return 0;
	}
	var_306_bool = var_270_int == (int)17;
	if(var_306_bool != 0) {
		var_269_string = "mat";
		return 0;
	}
	var_308_bool = var_270_int == (int)18;
	if(var_308_bool != 0) {
		var_269_string = "mishka";
		return 0;
	}
	var_310_bool = var_270_int == (int)19;
	if(var_310_bool != 0) {
		var_269_string = "mladvlad";
		return 0;
	}
	var_312_bool = var_270_int == (int)20;
	if(var_312_bool != 0) {
		var_269_string = "notkin";
		return 0;
	}
	var_314_bool = var_270_int == (int)21;
	if(var_314_bool != 0) {
		var_269_string = "ospina";
		return 0;
	}
	var_316_bool = var_270_int == (int)22;
	if(var_316_bool != 0) {
		var_269_string = "petr";
		return 0;
	}
	var_318_bool = var_270_int == (int)23;
	if(var_318_bool != 0) {
		var_269_string = "rubin";
		return 0;
	}
	var_320_bool = var_270_int == (int)24;
	if(var_320_bool != 0) {
		var_269_string = "spi4ka";
		return 0;
	}
	var_322_bool = var_270_int == (int)25;
	if(var_322_bool != 0) {
		var_269_string = "starshina";
		return 0;
	}
	var_324_bool = var_270_int == (int)26;
	if(var_324_bool != 0) {
		var_269_string = "viktor";
		return 0;
	}
	var_326_bool = var_270_int == (int)27;
	if(var_326_bool != 0) {
		var_269_string = "wasted_woman";
		return 0;
	}
	var_328_bool = var_270_int == (int)28;
	if(var_328_bool != 0) {
		var_269_string = "wasted_male";
		return 0;
	}
	var_330_bool = var_270_int == (int)29;
	if(var_330_bool != 0) {
		var_269_string = "alkash";
		return 0;
	}
	var_332_bool = var_270_int == (int)30;
	if(var_332_bool != 0) {
		var_269_string = "boy";
		return 0;
	}
	var_334_bool = var_270_int == (int)31;
	if(var_334_bool != 0) {
		var_269_string = "girl";
		return 0;
	}
	var_336_bool = var_270_int == (int)32;
	if(var_336_bool != 0) {
		var_269_string = "littleboy";
		return 0;
	}
	var_338_bool = var_270_int == (int)33;
	if(var_338_bool != 0) {
		var_269_string = "littlegirl";
		return 0;
	}
	var_340_bool = var_270_int == (int)34;
	if(var_340_bool != 0) {
		var_269_string = "butcher";
		return 0;
	}
	var_342_bool = var_270_int == (int)35;
	if(var_342_bool != 0) {
		var_269_string = "dohodyaga";
		return 0;
	}
	var_344_bool = var_270_int == (int)36;
	if(var_344_bool != 0) {
		var_269_string = "unosha";
		return 0;
	}
	var_346_bool = var_270_int == (int)37;
	if(var_346_bool != 0) {
		var_269_string = "vaxxabit";
		return 0;
	}
	var_348_bool = var_270_int == (int)38;
	if(var_348_bool != 0) {
		var_269_string = "vaxxabitka";
		return 0;
	}
	var_350_bool = var_270_int == (int)39;
	if(var_350_bool != 0) {
		var_269_string = "woman";
		return 0;
	}
	var_352_bool = var_270_int == (int)40;
	if(var_352_bool != 0) {
		var_269_string = "worker";
		return 0;
	}
	var_354_bool = var_270_int == (int)42;
	if(var_354_bool != 0) {
		var_269_string = "whitemask";
		return 0;
	}
	var_356_bool = var_270_int == (int)43;
	if(var_356_bool != 0) {
		var_269_string = "birdmask";
		return 0;
	}
	var_358_bool = var_270_int == (int)44;
	if(var_358_bool != 0) {
		var_269_string = "birdmask";
		return 0;
	}
	var_360_bool = var_270_int == (int)46;
	if(var_360_bool != 0) {
		var_269_string = "patrol";
		return 0;
	}
	var_362_bool = var_270_int == (int)47;
	if(var_362_bool != 0) {
		var_269_string = "danko";
		return 0;
	}
	var_364_bool = var_270_int == (int)48;
	if(var_364_bool != 0) {
		var_269_string = "alkash_d";
		return 0;
	}
	var_366_bool = var_270_int == (int)49;
	if(var_366_bool != 0) {
		var_269_string = "boy_d";
		return 0;
	}
	var_368_bool = var_270_int == (int)50;
	if(var_368_bool != 0) {
		var_269_string = "butcher_d";
		return 0;
	}
	var_370_bool = var_270_int == (int)51;
	if(var_370_bool != 0) {
		var_269_string = "dohodyaga_d";
		return 0;
	}
	var_372_bool = var_270_int == (int)52;
	if(var_372_bool != 0) {
		var_269_string = "girl_d";
		return 0;
	}
	var_374_bool = var_270_int == (int)53;
	if(var_374_bool != 0) {
		var_269_string = "littleboy_d";
		return 0;
	}
	var_376_bool = var_270_int == (int)54;
	if(var_376_bool != 0) {
		var_269_string = "littlegirl_d";
		return 0;
	}
	var_378_bool = var_270_int == (int)55;
	if(var_378_bool != 0) {
		var_269_string = "unosha2";
		return 0;
	}
	var_380_bool = var_270_int == (int)56;
	if(var_380_bool != 0) {
		var_269_string = "unosha_d";
		return 0;
	}
	var_382_bool = var_270_int == (int)57;
	if(var_382_bool != 0) {
		var_269_string = "unosha2_d";
		return 0;
	}
	var_384_bool = var_270_int == (int)58;
	if(var_384_bool != 0) {
		var_269_string = "vaxxabit_d";
		return 0;
	}
	var_386_bool = var_270_int == (int)59;
	if(var_386_bool != 0) {
		var_269_string = "vaxxabitka_d";
		return 0;
	}
	var_388_bool = var_270_int == (int)60;
	if(var_388_bool != 0) {
		var_269_string = "wasted_male_d";
		return 0;
	}
	var_390_bool = var_270_int == (int)61;
	if(var_390_bool != 0) {
		var_269_string = "wasted_woman_d";
		return 0;
	}
	var_392_bool = var_270_int == (int)62;
	if(var_392_bool != 0) {
		var_269_string = "woman_d";
		return 0;
	}
	var_394_bool = var_270_int == (int)63;
	if(var_394_bool != 0) {
		var_269_string = "worker2";
		return 0;
	}
	var_396_bool = var_270_int == (int)64;
	if(var_396_bool != 0) {
		var_269_string = "worker_d";
		return 0;
	}
	var_398_bool = var_270_int == (int)65;
	if(var_398_bool != 0) {
		var_269_string = "worker2_d";
		return 0;
	}
	var_400_bool = var_270_int == (int)66;
	if(var_400_bool != 0) {
		var_269_string = "burah";
		return 0;
	}
	var_402_bool = var_270_int == (int)67;
	if(var_402_bool != 0) {
		var_269_string = "gorbun_daughter";
		return 0;
	}
	var_404_bool = var_270_int == (int)68;
	if(var_404_bool != 0) {
		var_269_string = "gorbun";
		return 0;
	}
	var_406_bool = var_270_int == (int)69;
	if(var_406_bool != 0) {
		var_269_string = "albinos";
		return 0;
	}
	var_408_bool = var_270_int == (int)70;
	if(var_408_bool != 0) {
		var_269_string = "aglaja";
		return 0;
	}
	var_410_bool = var_270_int == (int)71;
	if(var_410_bool != 0) {
		var_269_string = "nude";
		return 0;
	}
	var_412_bool = var_270_int == (int)72;
	if(var_412_bool != 0) {
		var_269_string = "block";
		return 0;
	}
	var_414_bool = var_270_int == (int)73;
	if(var_414_bool != 0) {
		var_269_string = "officer";
		return 0;
	}
	var_269_string = "";
	return 0;
}


func_476(var_452_int, var_453_int)
{
	var_456_int = 0; var_457_int = 0;
	var_457_int = 0;
	
Label_478:
	var_458_bool = var_457_int < var_452_int;
	if(var_458_bool != 0) {
		var_459_int = 0; var_460_int = 0;
		var_453_int = var_460_int;
		func_488(var_457_int, var_459_int, var_460_int);
		var_457_int = var_457_int + (int)1;
		goto Label_478;
	}
	return 2;
}


func_737(var_0_object, var_91_int)
{
	var_92_int = 0; var_93_int = 0;
	@@@var_0_object:size(var_93_int);
	var_93_int = var_91_int;
	return 2;
}


func_932(var_190_string, var_191_bool)
{
	var_192_object = Obj(); var_193_object = Obj();
	FindActor(var_193_object, var_190_string);
	var_194_bool = var_193_object == 0; //@nz
	if(var_194_bool != 0) {
		var_196_int = "Door " + var_190_string;
		var_198_int = var_196_int + " not found";
		Trace(var_198_int);
	}
	@@var_193_object:SetProperty("locked", var_191_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_742(var_0_object, var_85_int, var_86_int)
{
	var_87_int = 0; var_88_int = 0; var_89_int = 0; var_90_int = 0;
	var_89_int = 0;
	
Label_744:
	var_91_int = 0;
	func_737(var_90_int, var_91_int);
	var_94_bool = var_89_int < var_91_int;
	if(var_94_bool != 0) {
		@@@var_0_object:get(var_90_int, var_89_int);
		var_95_bool = var_86_int == var_90_int;
		if(var_95_bool != 0) {
			var_89_int = var_85_int;
			var_89_int = var_89_int + (int)1;
			goto Label_744;
		}
		return 4;
	}
	var_85_int = -1;
	return 4;
}


func_679(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_int = 0; var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_int = 0; var_16_object = Obj();
	Trace("Volonteers Init...");
	CreateIntVector(var_11_object);
	CreateObjectVector(var_12_object);
	var_18_object = Obj(); var_19_object = Obj();
	var_11_object = var_18_object;
	var_12_object = var_19_object;
	func_1666(var_18_object, var_19_object);
	var_0_object = var_11_object;
	var_3_object = var_12_object;
	CreateObjectVector(var_13_object);
	var_73_object = Obj();
	var_13_object = var_73_object;
	func_0(var_73_object);
	var_1_object = var_13_object;
	CreateObjectVector(var_14_object);
	var_2_object = var_14_object;
	
Label_705:
	var_225_int = 0;
	func_737(var_16_object, var_225_int);
	var_226_bool = (int)0 < var_225_int;
	if(var_226_bool != 0) {
		var_227_string = ""; var_228_int = 0;
		var_15_int = var_228_int;
		func_765(var_16_object, var_227_string, var_228_int);
		SetVariable(var_227_string, (int)0);
		@@@var_2_object:add(Obj());
		var_16_object = 0;
		var_15_int = var_15_int + (int)1;
		goto Label_705;
	}
	var_4_int = 0;
	var_234_string = "Volonteers count: ";
	var_235_int = 0;
	func_737(var_234_string, var_235_int);
	var_236_int = var_234_string + var_235_int;
	Trace(var_236_int);
	return 12;
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";


func_807(var_2_object, var_251_int)
{
	var_252_int = 0; var_253_object = Obj(); var_254_object = Obj(); var_255_string = ""; var_256_int = 0; var_257_object = Obj(); var_258_object = Obj(); var_259_string = "";
	var_260_string = ""; var_261_int = 0;
	var_251_int = var_261_int;
	func_765(var_259_string, var_260_string, var_261_int);
	GetVariable(var_260_string, var_256_int);
	var_262_string = ""; var_263_int = 0;
	var_251_int = var_263_int;
	func_765(var_259_string, var_262_string, var_263_int);
	var_265_int = var_256_int & (int)8;
	var_267_int = var_265_int | (int)5;
	SetVariable(var_262_string, var_267_int);
	@@@var_2_object:get(var_257_object, var_251_int);
	var_268_bool = var_257_object == 0; //@ne
	if(var_268_bool != 0) {
		GetMainOutdoorScene(var_258_object);
		var_269_string = ""; var_270_int = 0;
		var_271_int = 0; var_272_int = 0;
		var_251_int = var_272_int;
		func_760(var_270_int, var_271_int, var_272_int);
		var_271_int = var_270_int;
		func_1308(var_269_string, var_270_int);
		var_269_string = var_259_string;
		var_415_object = Obj(); var_416_object = Obj(); var_417_string = ""; var_418_string = ""; var_419_string = "";
		var_258_object = var_416_object;
		var_417_string = "pt_volonteer_" + var_259_string;
		var_422_int = "vbirdmask_" + var_259_string;
		var_419_string = var_422_int + ".xml";
		func_914(var_415_object, var_416_object, var_417_string, "pers_birdmask", var_419_string);
		var_415_object = var_257_object;
		@@@var_2_object:set(var_251_int, var_257_object);
		var_258_object = 0;
	}
	return 8;
}
EMIT "Stack[-3] = 0";


func_488(var_1_object, var_459_int, var_460_int)
{
	var_461_object = Obj(); var_462_int = 0; var_463_int = 0; var_464_int = 0; var_465_int = 0; var_466_int = 0; var_467_object = Obj(); var_468_int = 0; var_469_int = 0; var_470_int = 0; var_471_int = 0; var_472_int = 0;
	@@@var_1_object:get(var_467_object, var_460_int);
	@@var_467_object:size(var_468_int);
	var_474_bool = var_468_int == (int)0;
	if(var_474_bool != 0) {
		return 12;
	}
	var_469_int = 0;
	var_476_bool = var_468_int > (int)1;
	if(var_476_bool != 0) {
		irand(var_469_int, var_468_int);
	}
	var_470_int = 0;
	
Label_505:
	var_477_bool = var_470_int < var_468_int;
	if(var_477_bool != 0) {
		var_478_int = var_470_int + var_469_int;
		var_471_int = var_478_int % var_468_int;
		@@var_467_object:get(var_472_int, var_471_int);
		var_479_bool = 0; var_480_int = 0;
		var_472_int = var_480_int;
		func_783(var_479_bool, var_480_int);
		if(var_479_bool != 0) {
			var_488_int = 0;
			var_472_int = var_488_int;
			func_896(var_488_int);
			var_472_int = (int)-1;
			var_470_int = var_470_int + (int)1;
			goto Label_505;
		}
		return 12;
	}
	var_459_int = -1;
	return 12;
}
EMIT "Stack[-6] = 0";


func_948(var_14_int, var_15_string)
{
	_strlwr(var_15_string);
	var_17_bool = var_15_string == "alexandr";
	if(var_17_bool != 0) {
		var_14_int = 1;
		return 0;
	}
	var_19_bool = var_15_string == "andrei";
	if(var_19_bool != 0) {
		var_14_int = 2;
		return 0;
	}
	var_21_bool = var_15_string == "anna";
	if(var_21_bool != 0) {
		var_14_int = 3;
		return 0;
	}
	var_23_bool = var_15_string == "bigvlad";
	if(var_23_bool != 0) {
		var_14_int = 4;
		return 0;
	}
	var_25_bool = var_15_string == "eva";
	if(var_25_bool != 0) {
		var_14_int = 5;
		return 0;
	}
	var_27_bool = var_15_string == "georg";
	if(var_27_bool != 0) {
		var_14_int = 6;
		return 0;
	}
	var_29_bool = var_15_string == "grif";
	if(var_29_bool != 0) {
		var_14_int = 7;
		return 0;
	}
	var_31_bool = var_15_string == "han";
	if(var_31_bool != 0) {
		var_14_int = 8;
		return 0;
	}
	var_33_bool = var_15_string == "julia";
	if(var_33_bool != 0) {
		var_14_int = 9;
		return 0;
	}
	var_35_bool = var_15_string == "kapella";
	if(var_35_bool != 0) {
		var_14_int = 10;
		return 0;
	}
	var_37_bool = var_15_string == "katerina";
	if(var_37_bool != 0) {
		var_14_int = 11;
		return 0;
	}
	var_39_bool = var_15_string == "klara";
	if(var_39_bool != 0) {
		var_14_int = 12;
		return 0;
	}
	var_41_bool = var_15_string == "lara";
	if(var_41_bool != 0) {
		var_14_int = 13;
		return 0;
	}
	var_43_bool = var_15_string == "laska";
	if(var_43_bool != 0) {
		var_14_int = 14;
		return 0;
	}
	var_45_bool = var_15_string == "maria";
	if(var_45_bool != 0) {
		var_14_int = 15;
		return 0;
	}
	var_47_bool = var_15_string == "mark";
	if(var_47_bool != 0) {
		var_14_int = 16;
		return 0;
	}
	var_49_bool = var_15_string == "mat";
	if(var_49_bool != 0) {
		var_14_int = 17;
		return 0;
	}
	var_51_bool = var_15_string == "mishka";
	if(var_51_bool != 0) {
		var_14_int = 18;
		return 0;
	}
	var_53_bool = var_15_string == "mladvlad";
	if(var_53_bool != 0) {
		var_14_int = 19;
		return 0;
	}
	var_55_bool = var_15_string == "notkin";
	if(var_55_bool != 0) {
		var_14_int = 20;
		return 0;
	}
	var_57_bool = var_15_string == "ospina";
	if(var_57_bool != 0) {
		var_14_int = 21;
		return 0;
	}
	var_59_bool = var_15_string == "petr";
	if(var_59_bool != 0) {
		var_14_int = 22;
		return 0;
	}
	var_61_bool = var_15_string == "rubin";
	if(var_61_bool != 0) {
		var_14_int = 23;
		return 0;
	}
	var_63_bool = var_15_string == "spi4ka";
	if(var_63_bool != 0) {
		var_14_int = 24;
		return 0;
	}
	var_65_bool = var_15_string == "starshina";
	if(var_65_bool != 0) {
		var_14_int = 25;
		return 0;
	}
	var_67_bool = var_15_string == "viktor";
	if(var_67_bool != 0) {
		var_14_int = 26;
		return 0;
	}
	var_69_bool = var_15_string == "wasted_woman";
	if(var_69_bool != 0) {
		var_14_int = 27;
		return 0;
	}
	var_71_bool = var_15_string == "wasted_male";
	if(var_71_bool != 0) {
		var_14_int = 28;
		return 0;
	}
	var_73_bool = var_15_string == "alkash";
	if(var_73_bool != 0) {
		var_14_int = 29;
		return 0;
	}
	var_75_bool = var_15_string == "boy";
	if(var_75_bool != 0) {
		var_14_int = 30;
		return 0;
	}
	var_77_bool = var_15_string == "girl";
	if(var_77_bool != 0) {
		var_14_int = 31;
		return 0;
	}
	var_79_bool = var_15_string == "littleboy";
	if(var_79_bool != 0) {
		var_14_int = 32;
		return 0;
	}
	var_81_bool = var_15_string == "littlegirl";
	if(var_81_bool != 0) {
		var_14_int = 33;
		return 0;
	}
	var_83_bool = var_15_string == "butcher";
	if(var_83_bool != 0) {
		var_14_int = 34;
		return 0;
	}
	var_85_bool = var_15_string == "dohodyaga";
	if(var_85_bool != 0) {
		var_14_int = 35;
		return 0;
	}
	var_87_bool = var_15_string == "unosha";
	if(var_87_bool != 0) {
		var_14_int = 36;
		return 0;
	}
	var_89_bool = var_15_string == "vaxxabit";
	if(var_89_bool != 0) {
		var_14_int = 37;
		return 0;
	}
	var_91_bool = var_15_string == "vaxxabitka";
	if(var_91_bool != 0) {
		var_14_int = 38;
		return 0;
	}
	var_93_bool = var_15_string == "woman";
	if(var_93_bool != 0) {
		var_14_int = 39;
		return 0;
	}
	var_95_bool = var_15_string == "worker";
	if(var_95_bool != 0) {
		var_14_int = 40;
		return 0;
	}
	var_97_bool = var_15_string == "whitemask";
	if(var_97_bool != 0) {
		var_14_int = 42;
		return 0;
	}
	var_99_bool = var_15_string == "birdmask";
	if(var_99_bool != 0) {
		var_14_int = 43;
		return 0;
	}
	var_101_bool = var_15_string == "birdmask";
	if(var_101_bool != 0) {
		var_14_int = 44;
		return 0;
	}
	var_103_bool = var_15_string == "patrol";
	if(var_103_bool != 0) {
		var_14_int = 46;
		return 0;
	}
	var_105_bool = var_15_string == "danko";
	if(var_105_bool != 0) {
		var_14_int = 47;
		return 0;
	}
	var_107_bool = var_15_string == "alkash_d";
	if(var_107_bool != 0) {
		var_14_int = 48;
		return 0;
	}
	var_109_bool = var_15_string == "boy_d";
	if(var_109_bool != 0) {
		var_14_int = 49;
		return 0;
	}
	var_111_bool = var_15_string == "butcher_d";
	if(var_111_bool != 0) {
		var_14_int = 50;
		return 0;
	}
	var_113_bool = var_15_string == "dohodyaga_d";
	if(var_113_bool != 0) {
		var_14_int = 51;
		return 0;
	}
	var_115_bool = var_15_string == "girl_d";
	if(var_115_bool != 0) {
		var_14_int = 52;
		return 0;
	}
	var_117_bool = var_15_string == "littleboy_d";
	if(var_117_bool != 0) {
		var_14_int = 53;
		return 0;
	}
	var_119_bool = var_15_string == "littlegirl_d";
	if(var_119_bool != 0) {
		var_14_int = 54;
		return 0;
	}
	var_121_bool = var_15_string == "unosha2";
	if(var_121_bool != 0) {
		var_14_int = 55;
		return 0;
	}
	var_123_bool = var_15_string == "unosha_d";
	if(var_123_bool != 0) {
		var_14_int = 56;
		return 0;
	}
	var_125_bool = var_15_string == "unosha2_d";
	if(var_125_bool != 0) {
		var_14_int = 57;
		return 0;
	}
	var_127_bool = var_15_string == "vaxxabit_d";
	if(var_127_bool != 0) {
		var_14_int = 58;
		return 0;
	}
	var_129_bool = var_15_string == "vaxxabitka_d";
	if(var_129_bool != 0) {
		var_14_int = 59;
		return 0;
	}
	var_131_bool = var_15_string == "wasted_male_d";
	if(var_131_bool != 0) {
		var_14_int = 60;
		return 0;
	}
	var_133_bool = var_15_string == "wasted_woman_d";
	if(var_133_bool != 0) {
		var_14_int = 61;
		return 0;
	}
	var_135_bool = var_15_string == "woman_d";
	if(var_135_bool != 0) {
		var_14_int = 62;
		return 0;
	}
	var_137_bool = var_15_string == "worker2";
	if(var_137_bool != 0) {
		var_14_int = 63;
		return 0;
	}
	var_139_bool = var_15_string == "worker_d";
	if(var_139_bool != 0) {
		var_14_int = 64;
		return 0;
	}
	var_141_bool = var_15_string == "worker2_d";
	if(var_141_bool != 0) {
		var_14_int = 65;
		return 0;
	}
	var_143_bool = var_15_string == "burah";
	if(var_143_bool != 0) {
		var_14_int = 66;
		return 0;
	}
	var_145_bool = var_15_string == "gorbun_daughter";
	if(var_145_bool != 0) {
		var_14_int = 67;
		return 0;
	}
	var_147_bool = var_15_string == "gorbun";
	if(var_147_bool != 0) {
		var_14_int = 68;
		return 0;
	}
	var_149_bool = var_15_string == "albinos";
	if(var_149_bool != 0) {
		var_14_int = 69;
		return 0;
	}
	var_151_bool = var_15_string == "aglaja";
	if(var_151_bool != 0) {
		var_14_int = 70;
		return 0;
	}
	var_153_bool = var_15_string == "nude";
	if(var_153_bool != 0) {
		var_14_int = 71;
		return 0;
	}
	var_155_bool = var_15_string == "block";
	if(var_155_bool != 0) {
		var_14_int = 72;
		return 0;
	}
	var_157_bool = var_15_string == "officer";
	if(var_157_bool != 0) {
		var_14_int = 73;
		return 0;
	}
	var_14_int = -1;
	return 0;
}


func_760(var_0_object, var_245_int, var_246_int)
{
	var_247_int = 0; var_248_int = 0;
	@@@var_0_object:get(var_248_int, var_246_int);
	var_248_int = var_245_int;
	return 2;
}


func_765(var_0_object, var_227_string, var_228_int)
{
	var_229_int = 0; var_230_int = 0;
	@@@var_0_object:get(var_230_int, var_228_int);
	var_227_string = "vol_" + var_230_int;
	return 2;
}


