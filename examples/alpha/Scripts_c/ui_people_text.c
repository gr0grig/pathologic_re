// @IMPORTS: GetWindowSize/2,EnableClipping/1,SetOwnerDraw/1,ProcessEvents/0,CreateIntVector/1,LoadImage/1,Blit/3,GetStringByID/2,PrintInWidth/9,CreateStringVector/1,GetVariable/2
// @STRINGS: A:size|A:get|W:default|W:***|W:birdmask|W:scrollbar|W:ui/NPC_Black.png|W:ui/NPC_Andrei.png|W:ui/NPC_Anna.png|W:ui/NPC_BigVlad.png|W:ui/NPC_Eva.png|W:ui/NPC_Georg.png|W:ui/NPC_Grif.png|W:ui/NPC_Han.png|W:ui/NPC_Julia.png|W:ui/NPC_Kapella.png|W:ui/NPC_Klara.png|W:ui/NPC_Lara.png|W:ui/NPC_Laska.png|W:ui/NPC_Maria.png|W:ui/NPC_Mark.png|W:ui/NPC_Mat.png|W:ui/NPC_Mishka.png|W:ui/NPC_MladVlad.png|W:ui/NPC_Notkin.png|W:ui/NPC_Ospina.png|W:ui/NPC_Petr.png|W:ui/NPC_Rubin.png|W:ui/NPC_Spi4ka.png|W:ui/NPC_Starshina.png|W:ui/NPC_Viktor.png|W:ui/NPC_None.png|W:ui/NPC_Bakalavr.png|W:ui/NPC_Burah.png|W:ui/NPC_Aglaja.png|A:add|W:cot_alexandr@door1|W:shouse1_kabak@door1|W:cot_anna@door1|W:cot_bigvad@door1|W:cot_georg@door1|W:cot_georg@door2|W:cot_julia@door1|W:cot_kapella@door1|W:cot_katerina@door1|W:cot_lara@door1|W:vagon_mishka@door1|W:house_vlad@door1|W:warehouse_notkin@door1|W:dt_house_1_04@door1|W:house_petr@door1|W:house_spi4ka@door1|W:house_spi4ka@door2|W:cot_viktor@door1|W:cot_viktor@door2|W:vol_
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,int,int,int,int,object params=0
// @EVENT_0: op=0x3b vars=
// @EVENT_200: op=0xc6 vars=int,string,object
// @PE: 0xc6,0xd0,0x236

task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_int = 0; var_9_int = 0;
	var_9_int = var_1_int;
	func_77(var_6_int, var_7_int, var_8_int, var_9_int);
	var_8_int = var_7_int;
	var_346_int = 0; var_347_int = 0;
	var_7_int = var_347_int;
	func_139(var_6_int, var_7_int, var_346_int, var_347_int);
	var_346_int = var_7_int;
	var_400_int = var_7_int - var_1_int;
	var_2_int = var_400_int - var_4_int;
	var_402_bool = var_2_int < (int)0;
	if(var_402_bool != 0) {
		var_2_int = 0;
	}
	return 2;
}


task_0_event_200(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_int, var_7_string, var_8_object)
{
	var_10_bool = var_7_string == "scrollbar";
	if(var_10_bool != 0) {
		var_11_int = -var_2_int;
		var_12_float = var_11_int * var_6_int;
		var_1_int = var_12_float / (int)100;
		return 0;
	}
	return 0;
}


main(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object)
{
	var_1_int = 0;
	GetWindowSize(var_3_int, var_4_int);
	EnableClipping((bool)1);
	SetOwnerDraw((bool)1);
	func_15(var_5_object);
	ProcessEvents();
	return 0;
}


func_1128(var_375_bool, var_376_int)
{
	var_377_int = 0; var_378_int = 0;
	var_380_int = "vol_" + var_376_int;
	GetVariable(var_380_int, var_378_int);
	var_382_int = var_378_int & (int)4;
	var_375_bool = var_382_int != (int)0;
	return 2;
}


func_924(var_16_object, var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	@@var_16_object:add((int)1);
	var_21_object = var_17_object;
	if(var_21_object != 0) {
		CreateStringVector(var_19_object);
		@@var_19_object:add("cot_alexandr@door1");
		@@var_17_object:add(var_19_object);
	}
	@@var_16_object:add((int)2);
	var_24_object = var_17_object;
	if(var_24_object != 0) {
		CreateStringVector(var_19_object);
		@@var_19_object:add("shouse1_kabak@door1");
		@@var_17_object:add(var_19_object);
	}
	@@var_16_object:add((int)3);
	var_27_object = var_17_object;
	if(var_27_object != 0) {
		CreateStringVector(var_19_object);
		@@var_19_object:add("cot_anna@door1");
		@@var_17_object:add(var_19_object);
	}
	@@var_16_object:add((int)4);
	var_30_object = var_17_object;
	if(var_30_object != 0) {
		CreateStringVector(var_19_object);
		@@var_19_object:add("cot_bigvad@door1");
		@@var_17_object:add(var_19_object);
	}
	@@var_16_object:add((int)6);
	var_33_object = var_17_object;
	if(var_33_object != 0) {
		CreateStringVector(var_19_object);
		@@var_19_object:add("cot_georg@door1");
		@@var_19_object:add("cot_georg@door2");
		@@var_17_object:add(var_19_object);
	}
	@@var_16_object:add((int)9);
	var_37_object = var_17_object;
	if(var_37_object != 0) {
		CreateStringVector(var_19_object);
		@@var_19_object:add("cot_julia@door1");
		@@var_17_object:add(var_19_object);
	}
	@@var_16_object:add((int)10);
	var_40_object = var_17_object;
	if(var_40_object != 0) {
		CreateStringVector(var_19_object);
		@@var_19_object:add("cot_kapella@door1");
		@@var_17_object:add(var_19_object);
	}
	@@var_16_object:add((int)11);
	var_43_object = var_17_object;
	if(var_43_object != 0) {
		CreateStringVector(var_19_object);
		@@var_19_object:add("cot_katerina@door1");
		@@var_17_object:add(var_19_object);
	}
	@@var_16_object:add((int)13);
	var_46_object = var_17_object;
	if(var_46_object != 0) {
		CreateStringVector(var_19_object);
		@@var_19_object:add("cot_lara@door1");
		@@var_17_object:add(var_19_object);
	}
	@@var_16_object:add((int)18);
	var_49_object = var_17_object;
	if(var_49_object != 0) {
		CreateStringVector(var_19_object);
		@@var_19_object:add("vagon_mishka@door1");
		@@var_17_object:add(var_19_object);
	}
	@@var_16_object:add((int)19);
	var_52_object = var_17_object;
	if(var_52_object != 0) {
		CreateStringVector(var_19_object);
		@@var_19_object:add("house_vlad@door1");
		@@var_17_object:add(var_19_object);
	}
	@@var_16_object:add((int)20);
	var_55_object = var_17_object;
	if(var_55_object != 0) {
		CreateStringVector(var_19_object);
		@@var_19_object:add("warehouse_notkin@door1");
		@@var_17_object:add(var_19_object);
	}
	@@var_16_object:add((int)21);
	var_58_object = var_17_object;
	if(var_58_object != 0) {
		CreateStringVector(var_19_object);
		@@var_19_object:add("dt_house_1_04@door1");
		@@var_17_object:add(var_19_object);
	}
	@@var_16_object:add((int)22);
	var_61_object = var_17_object;
	if(var_61_object != 0) {
		CreateStringVector(var_19_object);
		@@var_19_object:add("house_petr@door1");
		@@var_17_object:add(var_19_object);
	}
	@@var_16_object:add((int)24);
	var_64_object = var_17_object;
	if(var_64_object != 0) {
		CreateStringVector(var_19_object);
		@@var_19_object:add("house_spi4ka@door1");
		@@var_19_object:add("house_spi4ka@door2");
		@@var_17_object:add(var_19_object);
	}
	@@var_16_object:add((int)26);
	var_68_object = var_17_object;
	if(var_68_object != 0) {
		CreateStringVector(var_19_object);
		@@var_19_object:add("cot_viktor@door1");
		@@var_19_object:add("cot_viktor@door2");
		@@var_17_object:add(var_19_object);
	}
	return 2;
}
EMIT "Stack[-1] = 0";


func_139(var_3_int, var_5_object, var_346_int, var_347_int)
{
	var_348_int = 0; var_349_int = 0; var_350_int = 0; var_351_int = 0; var_352_int = 0; var_353_string = ""; var_354_int = 0; var_355_int = 0; var_356_int = 0; var_357_int = 0; var_358_int = 0; var_359_int = 0; var_360_string = ""; var_361_int = 0;
	var_347_int = var_355_int;
	@@@var_5_object:size(var_356_int);
	var_357_int = 0;
	
Label_144:
	var_362_bool = var_357_int < var_356_int;
	if(var_362_bool != 0) {
		@@@var_5_object:get(var_358_int, var_357_int);
		var_363_bool = 0; var_364_int = 0;
		var_358_int = var_364_int;
		func_1148(var_363_bool, var_364_int);
		if(var_363_bool != 0) {
			var_372_string = ""; var_373_int = 0;
			var_358_int = var_373_int;
			func_566(var_372_string, var_373_int);
			Blit(var_372_string, (int)0, var_355_int);
			var_375_bool = 0; var_376_int = 0;
			var_358_int = var_376_int;
			func_1128(var_375_bool, var_376_int);
			if(var_375_bool != 0) {
				Blit("birdmask", (int)0, var_355_int);
			}
			var_386_int = 0; var_387_int = 0;
			var_358_int = var_387_int;
			func_208(var_386_int, var_387_int);
			var_386_int = var_359_int;
			GetStringByID(var_360_string, var_359_int);
			var_390_float = var_3_int / (int)2;
			var_392_float = var_3_int / (int)2;
			PrintInWidth(var_361_int, "default", var_390_float, var_355_int, var_392_float, var_360_string, (float)1.0, (float)1.0, (float)1.0);
			var_397_bool = var_361_int > (int)140;
			if(var_397_bool != 0) {
				var_355_int = var_355_int + var_361_int;
			} else {
				var_355_int = var_355_int + (int)140;
	}
			var_355_int = var_346_int;
			return 14;
		}
	}
	var_357_int = var_357_int + (int)1;
	goto Label_144;
	
}


func_77(var_3_int, var_5_object, var_8_int, var_9_int)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_string = ""; var_24_int = 0; var_25_int = 0;
	var_9_int = var_18_int;
	@@@var_5_object:size(var_19_int);
	var_20_int = 0;
	
Label_82:
	var_26_bool = var_20_int < var_19_int;
	if(var_26_bool != 0) {
		@@@var_5_object:get(var_21_int, var_20_int);
		var_27_bool = 0; var_28_int = 0;
		var_21_int = var_28_int;
		func_1138(var_27_bool, var_28_int);
		if(var_27_bool != 0) {
			var_36_string = ""; var_37_int = 0;
			var_21_int = var_37_int;
			func_566(var_36_string, var_37_int);
			Blit(var_36_string, (int)0, var_18_int);
			var_181_int = 0; var_182_int = 0;
			var_21_int = var_182_int;
			func_208(var_181_int, var_182_int);
			var_181_int = var_22_int;
			GetStringByID(var_23_string, var_22_int);
			var_327_float = var_3_int / (int)2;
			var_329_float = var_3_int / (int)2;
			PrintInWidth(var_24_int, "default", var_327_float, var_18_int, var_329_float, var_23_string, (float)1.0, (float)1.0, (float)1.0);
			var_334_bool = var_24_int > (int)140;
			if(var_334_bool != 0) {
				var_18_int = var_18_int + var_24_int;
			} else {
				var_18_int = var_18_int + (int)140;
	}
			var_339_float = var_3_int / (int)2;
			var_341_int = var_339_float - (int)20;
			PrintInWidth(var_25_int, "default", var_341_int, var_18_int, var_3_int, "***", (float)1.0, (float)1.0, (float)1.0);
			var_18_int = var_18_int + var_25_int;
			var_18_int = var_8_int;
			return 16;
		}
	}
	var_20_int = var_20_int + (int)1;
	goto Label_82;
	
}


func_15(var_5_object)
{
	var_8_object = Obj(); var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_object = Obj(); var_13_int = 0; var_14_int = 0; var_15_int = 0;
	CreateIntVector(var_5_object);
	var_12_object = 0;
	var_16_object = Obj(); var_17_object = Obj();
	var_16_object = var_5_object;
	var_12_object = var_17_object;
	func_924(var_16_object, var_17_object);
	@@@var_5_object:size(var_13_int);
	var_14_int = 0;
	
Label_27:
	var_71_bool = var_14_int < var_13_int;
	if(var_71_bool != 0) {
		@@@var_5_object:get(var_15_int, var_14_int);
		var_72_bool = 0; var_73_int = 0;
		var_15_int = var_73_int;
		func_1138(var_72_bool, var_73_int);
		if(var_72_bool != 0) {
			var_81_string = ""; var_82_int = 0;
			var_15_int = var_82_int;
			func_566(var_81_string, var_82_int);
			LoadImage(var_81_string);
		} else {
			var_226_bool = 0; var_227_int = 0;
			var_15_int = var_227_int;
			func_1148(var_226_bool, var_227_int);
			if(var_226_bool == 0) goto Label_54;
			var_235_string = ""; var_236_int = 0;
			var_15_int = var_236_int;
			func_566(var_235_string, var_236_int);
			LoadImage(var_235_string);
	}
		var_14_int = var_14_int + (int)1;
		goto Label_27;
	}
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_208(var_181_int, var_182_int)
{
	var_184_bool = var_182_int == (int)1;
	if(var_184_bool != 0) {
		var_181_int = 2854;
		return 0;
	}
	var_186_bool = var_182_int == (int)2;
	if(var_186_bool != 0) {
		var_181_int = 2855;
		return 0;
	}
	var_188_bool = var_182_int == (int)3;
	if(var_188_bool != 0) {
		var_181_int = 2856;
		return 0;
	}
	var_190_bool = var_182_int == (int)4;
	if(var_190_bool != 0) {
		var_181_int = 2857;
		return 0;
	}
	var_192_bool = var_182_int == (int)5;
	if(var_192_bool != 0) {
		var_181_int = 2858;
		return 0;
	}
	var_194_bool = var_182_int == (int)6;
	if(var_194_bool != 0) {
		var_181_int = 2859;
		return 0;
	}
	var_196_bool = var_182_int == (int)7;
	if(var_196_bool != 0) {
		var_181_int = 2860;
		return 0;
	}
	var_198_bool = var_182_int == (int)8;
	if(var_198_bool != 0) {
		var_181_int = 2861;
		return 0;
	}
	var_200_bool = var_182_int == (int)9;
	if(var_200_bool != 0) {
		var_181_int = 2862;
		return 0;
	}
	var_202_bool = var_182_int == (int)10;
	if(var_202_bool != 0) {
		var_181_int = 2863;
		return 0;
	}
	var_204_bool = var_182_int == (int)11;
	if(var_204_bool != 0) {
		var_181_int = 2864;
		return 0;
	}
	var_206_bool = var_182_int == (int)12;
	if(var_206_bool != 0) {
		var_181_int = 2865;
		return 0;
	}
	var_208_bool = var_182_int == (int)13;
	if(var_208_bool != 0) {
		var_181_int = 2866;
		return 0;
	}
	var_210_bool = var_182_int == (int)14;
	if(var_210_bool != 0) {
		var_181_int = 2867;
		return 0;
	}
	var_212_bool = var_182_int == (int)15;
	if(var_212_bool != 0) {
		var_181_int = 2868;
		return 0;
	}
	var_214_bool = var_182_int == (int)16;
	if(var_214_bool != 0) {
		var_181_int = 2869;
		return 0;
	}
	var_216_bool = var_182_int == (int)17;
	if(var_216_bool != 0) {
		var_181_int = 2870;
		return 0;
	}
	var_218_bool = var_182_int == (int)18;
	if(var_218_bool != 0) {
		var_181_int = 2871;
		return 0;
	}
	var_220_bool = var_182_int == (int)19;
	if(var_220_bool != 0) {
		var_181_int = 2872;
		return 0;
	}
	var_222_bool = var_182_int == (int)20;
	if(var_222_bool != 0) {
		var_181_int = 2873;
		return 0;
	}
	var_224_bool = var_182_int == (int)21;
	if(var_224_bool != 0) {
		var_181_int = 2874;
		return 0;
	}
	var_226_bool = var_182_int == (int)22;
	if(var_226_bool != 0) {
		var_181_int = 2875;
		return 0;
	}
	var_228_bool = var_182_int == (int)23;
	if(var_228_bool != 0) {
		var_181_int = 2876;
		return 0;
	}
	var_230_bool = var_182_int == (int)24;
	if(var_230_bool != 0) {
		var_181_int = 2877;
		return 0;
	}
	var_232_bool = var_182_int == (int)25;
	if(var_232_bool != 0) {
		var_181_int = 2878;
		return 0;
	}
	var_234_bool = var_182_int == (int)26;
	if(var_234_bool != 0) {
		var_181_int = 2879;
		return 0;
	}
	var_236_bool = var_182_int == (int)27;
	if(var_236_bool != 0) {
		var_181_int = 3340;
		return 0;
	}
	var_238_bool = var_182_int == (int)28;
	if(var_238_bool != 0) {
		var_181_int = 3341;
		return 0;
	}
	var_240_bool = var_182_int == (int)29;
	if(var_240_bool != 0) {
		var_181_int = 3342;
		return 0;
	}
	var_242_bool = var_182_int == (int)30;
	if(var_242_bool != 0) {
		var_181_int = 3343;
		return 0;
	}
	var_244_bool = var_182_int == (int)31;
	if(var_244_bool != 0) {
		var_181_int = 3344;
		return 0;
	}
	var_246_bool = var_182_int == (int)32;
	if(var_246_bool != 0) {
		var_181_int = 3345;
		return 0;
	}
	var_248_bool = var_182_int == (int)33;
	if(var_248_bool != 0) {
		var_181_int = 3346;
		return 0;
	}
	var_250_bool = var_182_int == (int)34;
	if(var_250_bool != 0) {
		var_181_int = 3347;
		return 0;
	}
	var_252_bool = var_182_int == (int)35;
	if(var_252_bool != 0) {
		var_181_int = 3348;
		return 0;
	}
	var_254_bool = var_182_int == (int)36;
	if(var_254_bool != 0) {
		var_181_int = 3349;
		return 0;
	}
	var_256_bool = var_182_int == (int)37;
	if(var_256_bool != 0) {
		var_181_int = 3350;
		return 0;
	}
	var_258_bool = var_182_int == (int)38;
	if(var_258_bool != 0) {
		var_181_int = 3351;
		return 0;
	}
	var_260_bool = var_182_int == (int)39;
	if(var_260_bool != 0) {
		var_181_int = 3352;
		return 0;
	}
	var_262_bool = var_182_int == (int)40;
	if(var_262_bool != 0) {
		var_181_int = 3353;
		return 0;
	}
	var_264_bool = var_182_int == (int)42;
	if(var_264_bool != 0) {
		var_181_int = 3354;
		return 0;
	}
	var_266_bool = var_182_int == (int)43;
	if(var_266_bool != 0) {
		var_181_int = 3355;
		return 0;
	}
	var_268_bool = var_182_int == (int)44;
	if(var_268_bool != 0) {
		var_181_int = 4029;
		return 0;
	}
	var_270_bool = var_182_int == (int)46;
	if(var_270_bool != 0) {
		var_181_int = 4031;
		return 0;
	}
	var_272_bool = var_182_int == (int)47;
	if(var_272_bool != 0) {
		var_181_int = 4032;
		return 0;
	}
	var_274_bool = var_182_int == (int)48;
	if(var_274_bool != 0) {
		var_181_int = 6270;
		return 0;
	}
	var_276_bool = var_182_int == (int)49;
	if(var_276_bool != 0) {
		var_181_int = 6271;
		return 0;
	}
	var_278_bool = var_182_int == (int)50;
	if(var_278_bool != 0) {
		var_181_int = 6272;
		return 0;
	}
	var_280_bool = var_182_int == (int)51;
	if(var_280_bool != 0) {
		var_181_int = 6273;
		return 0;
	}
	var_282_bool = var_182_int == (int)52;
	if(var_282_bool != 0) {
		var_181_int = 6274;
		return 0;
	}
	var_284_bool = var_182_int == (int)53;
	if(var_284_bool != 0) {
		var_181_int = 6275;
		return 0;
	}
	var_286_bool = var_182_int == (int)54;
	if(var_286_bool != 0) {
		var_181_int = 6276;
		return 0;
	}
	var_288_bool = var_182_int == (int)55;
	if(var_288_bool != 0) {
		var_181_int = 6277;
		return 0;
	}
	var_290_bool = var_182_int == (int)56;
	if(var_290_bool != 0) {
		var_181_int = 6278;
		return 0;
	}
	var_292_bool = var_182_int == (int)57;
	if(var_292_bool != 0) {
		var_181_int = 6279;
		return 0;
	}
	var_294_bool = var_182_int == (int)58;
	if(var_294_bool != 0) {
		var_181_int = 6280;
		return 0;
	}
	var_296_bool = var_182_int == (int)59;
	if(var_296_bool != 0) {
		var_181_int = 6281;
		return 0;
	}
	var_298_bool = var_182_int == (int)60;
	if(var_298_bool != 0) {
		var_181_int = 6282;
		return 0;
	}
	var_300_bool = var_182_int == (int)61;
	if(var_300_bool != 0) {
		var_181_int = 6283;
		return 0;
	}
	var_302_bool = var_182_int == (int)62;
	if(var_302_bool != 0) {
		var_181_int = 6284;
		return 0;
	}
	var_304_bool = var_182_int == (int)63;
	if(var_304_bool != 0) {
		var_181_int = 6285;
		return 0;
	}
	var_306_bool = var_182_int == (int)64;
	if(var_306_bool != 0) {
		var_181_int = 6286;
		return 0;
	}
	var_308_bool = var_182_int == (int)65;
	if(var_308_bool != 0) {
		var_181_int = 6287;
		return 0;
	}
	var_310_bool = var_182_int == (int)66;
	if(var_310_bool != 0) {
		var_181_int = 11961;
		return 0;
	}
	var_312_bool = var_182_int == (int)67;
	if(var_312_bool != 0) {
		var_181_int = 12582;
		return 0;
	}
	var_314_bool = var_182_int == (int)68;
	if(var_314_bool != 0) {
		var_181_int = 12583;
		return 0;
	}
	var_316_bool = var_182_int == (int)69;
	if(var_316_bool != 0) {
		var_181_int = 12611;
		return 0;
	}
	var_318_bool = var_182_int == (int)70;
	if(var_318_bool != 0) {
		var_181_int = 13334;
		return 0;
	}
	var_320_bool = var_182_int == (int)71;
	if(var_320_bool != 0) {
		var_181_int = 14839;
		return 0;
	}
	var_322_bool = var_182_int == (int)72;
	if(var_322_bool != 0) {
		var_181_int = 14840;
		return 0;
	}
	var_324_bool = var_182_int == (int)73;
	if(var_324_bool != 0) {
		var_181_int = 14841;
		return 0;
	}
	var_181_int = -1;
	return 0;
}


func_1138(var_72_bool, var_73_int)
{
	var_74_int = 0; var_75_int = 0;
	var_77_int = "vol_" + var_73_int;
	GetVariable(var_77_int, var_75_int);
	var_79_int = var_75_int & (int)2;
	var_72_bool = var_79_int != (int)0;
	return 2;
}


func_566(var_81_string, var_82_int)
{
	var_84_bool = var_82_int == (int)1;
	if(var_84_bool != 0) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	var_86_bool = var_82_int == (int)2;
	if(var_86_bool != 0) {
		var_81_string = "ui/NPC_Andrei.png";
		return 0;
	}
	var_88_bool = var_82_int == (int)3;
	if(var_88_bool != 0) {
		var_81_string = "ui/NPC_Anna.png";
		return 0;
	}
	var_90_bool = var_82_int == (int)4;
	if(var_90_bool != 0) {
		var_81_string = "ui/NPC_BigVlad.png";
		return 0;
	}
	var_92_bool = var_82_int == (int)5;
	if(var_92_bool != 0) {
		var_81_string = "ui/NPC_Eva.png";
		return 0;
	}
	var_94_bool = var_82_int == (int)6;
	if(var_94_bool != 0) {
		var_81_string = "ui/NPC_Georg.png";
		return 0;
	}
	var_96_bool = var_82_int == (int)7;
	if(var_96_bool != 0) {
		var_81_string = "ui/NPC_Grif.png";
		return 0;
	}
	var_98_bool = var_82_int == (int)8;
	if(var_98_bool != 0) {
		var_81_string = "ui/NPC_Han.png";
		return 0;
	}
	var_100_bool = var_82_int == (int)9;
	if(var_100_bool != 0) {
		var_81_string = "ui/NPC_Julia.png";
		return 0;
	}
	var_102_bool = var_82_int == (int)10;
	if(var_102_bool != 0) {
		var_81_string = "ui/NPC_Kapella.png";
		return 0;
	}
	var_104_bool = var_82_int == (int)11;
	if(var_104_bool != 0) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	var_106_bool = var_82_int == (int)12;
	if(var_106_bool != 0) {
		var_81_string = "ui/NPC_Klara.png";
		return 0;
	}
	var_108_bool = var_82_int == (int)13;
	if(var_108_bool != 0) {
		var_81_string = "ui/NPC_Lara.png";
		return 0;
	}
	var_110_bool = var_82_int == (int)14;
	if(var_110_bool != 0) {
		var_81_string = "ui/NPC_Laska.png";
		return 0;
	}
	var_112_bool = var_82_int == (int)15;
	if(var_112_bool != 0) {
		var_81_string = "ui/NPC_Maria.png";
		return 0;
	}
	var_114_bool = var_82_int == (int)16;
	if(var_114_bool != 0) {
		var_81_string = "ui/NPC_Mark.png";
		return 0;
	}
	var_116_bool = var_82_int == (int)17;
	if(var_116_bool != 0) {
		var_81_string = "ui/NPC_Mat.png";
		return 0;
	}
	var_118_bool = var_82_int == (int)18;
	if(var_118_bool != 0) {
		var_81_string = "ui/NPC_Mishka.png";
		return 0;
	}
	var_120_bool = var_82_int == (int)19;
	if(var_120_bool != 0) {
		var_81_string = "ui/NPC_MladVlad.png";
		return 0;
	}
	var_122_bool = var_82_int == (int)20;
	if(var_122_bool != 0) {
		var_81_string = "ui/NPC_Notkin.png";
		return 0;
	}
	var_124_bool = var_82_int == (int)21;
	if(var_124_bool != 0) {
		var_81_string = "ui/NPC_Ospina.png";
		return 0;
	}
	var_126_bool = var_82_int == (int)22;
	if(var_126_bool != 0) {
		var_81_string = "ui/NPC_Petr.png";
		return 0;
	}
	var_128_bool = var_82_int == (int)23;
	if(var_128_bool != 0) {
		var_81_string = "ui/NPC_Rubin.png";
		return 0;
	}
	var_130_bool = var_82_int == (int)24;
	if(var_130_bool != 0) {
		var_81_string = "ui/NPC_Spi4ka.png";
		return 0;
	}
	var_132_bool = var_82_int == (int)25;
	if(var_132_bool != 0) {
		var_81_string = "ui/NPC_Starshina.png";
		return 0;
	}
	var_134_bool = var_82_int == (int)26;
	if(var_134_bool != 0) {
		var_81_string = "ui/NPC_Viktor.png";
		return 0;
	}
	var_136_bool = var_82_int == (int)27;
	if(var_136_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_138_bool = var_82_int == (int)28;
	if(var_138_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_140_bool = var_82_int == (int)29;
	if(var_140_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_142_bool = var_82_int == (int)30;
	if(var_142_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_144_bool = var_82_int == (int)31;
	if(var_144_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_146_bool = var_82_int == (int)32;
	if(var_146_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_148_bool = var_82_int == (int)33;
	if(var_148_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_150_bool = var_82_int == (int)34;
	if(var_150_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_152_bool = var_82_int == (int)35;
	if(var_152_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_154_bool = var_82_int == (int)36;
	if(var_154_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_156_bool = var_82_int == (int)37;
	if(var_156_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_158_bool = var_82_int == (int)38;
	if(var_158_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_160_bool = var_82_int == (int)39;
	if(var_160_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_162_bool = var_82_int == (int)40;
	if(var_162_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_164_bool = var_82_int == (int)42;
	if(var_164_bool != 0) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	var_166_bool = var_82_int == (int)43;
	if(var_166_bool != 0) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	var_168_bool = var_82_int == (int)44;
	if(var_168_bool != 0) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	var_170_bool = var_82_int == (int)46;
	if(var_170_bool != 0) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	var_172_bool = var_82_int == (int)47;
	if(var_172_bool != 0) {
		var_81_string = "ui/NPC_Bakalavr.png";
		return 0;
	}
	var_174_bool = var_82_int == (int)48;
	if(var_174_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_176_bool = var_82_int == (int)49;
	if(var_176_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_178_bool = var_82_int == (int)50;
	if(var_178_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_180_bool = var_82_int == (int)51;
	if(var_180_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_182_bool = var_82_int == (int)52;
	if(var_182_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_184_bool = var_82_int == (int)53;
	if(var_184_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_186_bool = var_82_int == (int)54;
	if(var_186_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_188_bool = var_82_int == (int)55;
	if(var_188_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_190_bool = var_82_int == (int)56;
	if(var_190_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_192_bool = var_82_int == (int)57;
	if(var_192_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_194_bool = var_82_int == (int)58;
	if(var_194_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_196_bool = var_82_int == (int)59;
	if(var_196_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_198_bool = var_82_int == (int)60;
	if(var_198_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_200_bool = var_82_int == (int)61;
	if(var_200_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_202_bool = var_82_int == (int)62;
	if(var_202_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_204_bool = var_82_int == (int)63;
	if(var_204_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_206_bool = var_82_int == (int)64;
	if(var_206_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_208_bool = var_82_int == (int)65;
	if(var_208_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_210_bool = var_82_int == (int)66;
	if(var_210_bool != 0) {
		var_81_string = "ui/NPC_Burah.png";
		return 0;
	}
	var_212_bool = var_82_int == (int)67;
	if(var_212_bool != 0) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	var_214_bool = var_82_int == (int)68;
	if(var_214_bool != 0) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	var_216_bool = var_82_int == (int)69;
	if(var_216_bool != 0) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	var_218_bool = var_82_int == (int)70;
	if(var_218_bool != 0) {
		var_81_string = "ui/NPC_Aglaja.png";
		return 0;
	}
	var_220_bool = var_82_int == (int)71;
	if(var_220_bool != 0) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	var_222_bool = var_82_int == (int)72;
	if(var_222_bool != 0) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	var_224_bool = var_82_int == (int)73;
	if(var_224_bool != 0) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	var_81_string = "";
	return 0;
}


func_1148(var_226_bool, var_227_int)
{
	var_228_int = 0; var_229_int = 0;
	var_231_int = "vol_" + var_227_int;
	GetVariable(var_231_int, var_229_int);
	var_233_int = var_229_int & (int)8;
	var_226_bool = var_233_int != (int)0;
	return 2;
}


