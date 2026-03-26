// @IMPORTS: GetWindowSize/2,EnableClipping/1,SetOwnerDraw/1,ProcessEvents/0,CreateIntVector/1,LoadImage/1,GetStringByID/2,GetTextHeightInWidth/4,PrintInWidth/9,StretchBlit/5,Blit/3,SendMessage/2,GetVariable/2
// @STRINGS: A:size|A:get|W:default|W:name|W:separator|W:birdmask|W:scrollbar|W:people|W:ui/NPC_Alexandr.png|W:ui/NPC_Andrei.png|W:ui/NPC_Anna.png|W:ui/NPC_BigVlad.png|W:ui/NPC_Eva.png|W:ui/NPC_Georg.png|W:ui/NPC_Grif.png|W:ui/NPC_Han.png|W:ui/NPC_Julia.png|W:ui/NPC_Kapella.png|W:ui/NPC_Katerina.png|W:ui/NPC_Klara.png|W:ui/NPC_Lara.png|W:ui/NPC_Laska.png|W:ui/NPC_Maria.png|W:ui/NPC_Mark.png|W:ui/NPC_Mat.png|W:ui/NPC_Mishka.png|W:ui/NPC_MladVlad.png|W:ui/NPC_Notkin.png|W:ui/NPC_Ospina.png|W:ui/NPC_Petr.png|W:ui/NPC_Rubin.png|W:ui/NPC_Spi4ka.png|W:ui/NPC_Starshina.png|W:ui/NPC_Viktor.png|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen1.png|W:ui/NPC_wmask.png|W:ui/NPC_Black.png|W:ui/NPC_bmask.png|W:ui/NPC_Bakalavr.png|W:ui/NPC_Burah.png|W:ui/NPC_Albinos.png|W:ui/NPC_Aglaja.png|W:ui/NPC_Block.png|W:ui/NPC_Prophet.png|A:add|W:vol_|W:branch
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,int,int,int,int,object params=0
// @EVENT_0: op=0x54 vars=
// @EVENT_15: op=0x121 vars=int,int,float
// @EVENT_200: op=0x156 vars=int,string,object
// @PE: 0x156,0x171,0x327,0x4dd,0x4fe,0x51f

task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object)
{
	var_6_int = 0; var_7_string = ""; var_8_int = 0; var_9_int = 0; var_10_string = ""; var_11_int = 0;
	var_9_int = 0;
	GetStringByID(var_10_string, (int)200);
	GetTextHeightInWidth(var_9_int, "default", var_3_int, var_10_string);
	var_14_int = 0; var_15_int = 0;
	var_15_int = var_1_int + var_9_int;
	func_119(var_10_string, var_11_int, var_14_int, var_15_int);
	var_14_int = var_11_int;
	var_439_int = 0; var_440_int = 0;
	var_11_int = var_440_int;
	func_211(var_10_string, var_11_int, var_439_int, var_440_int);
	var_439_int = var_11_int;
	var_512_int = var_1_int + var_9_int;
	var_513_bool = var_512_int < var_11_int;
	if(var_513_bool != 0) {
		PrintInWidth(var_9_int, "default", (int)0, var_1_int, var_3_int, var_10_string, (float)1.0, (float)1.0, (float)1.0);
	}
	var_519_int = var_11_int - var_1_int;
	var_2_int = var_519_int - var_4_int;
	var_521_bool = var_2_int < (int)0;
	if(var_521_bool != 0) {
		var_2_int = 0;
	}
	return 6;
}


task_0_event_15(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_int, var_7_int, var_8_float)
{
	var_9_int = 0; var_10_int = 0;
	var_12_float = var_8_float * (int)140;
	var_10_int = var_12_float / (int)2;
	var_1_int = var_1_int + var_10_int;
	func_313(var_9_int, var_10_int);
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
	EMIT "GOTO 0x170";
	}
	var_15_bool = var_7_string == "people";
	if(var_15_bool != 0) {
		var_17_bool = var_6_int == (int)1000;
		if(var_17_bool != 0) {
			func_306(var_8_object);
		} else {
			var_36_bool = var_6_int == (int)1001;
			if(var_36_bool == 0) goto Label_368;
			func_299(var_8_object);
		}
	}
Label_368:
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


func_1343(var_474_bool, var_475_int)
{
	var_476_int = 0; var_477_int = 0;
	var_479_int = "vol_" + var_475_int;
	GetVariable(var_479_int, var_477_int);
	var_481_int = var_477_int & (int)4;
	var_474_bool = var_481_int != (int)0;
	return 2;
}


func_807(var_45_string, var_46_int)
{
	var_48_bool = var_46_int == (int)1;
	if(var_48_bool != 0) {
		var_45_string = "ui/NPC_Alexandr.png";
		return 0;
	}
	var_50_bool = var_46_int == (int)2;
	if(var_50_bool != 0) {
		var_45_string = "ui/NPC_Andrei.png";
		return 0;
	}
	var_52_bool = var_46_int == (int)3;
	if(var_52_bool != 0) {
		var_45_string = "ui/NPC_Anna.png";
		return 0;
	}
	var_54_bool = var_46_int == (int)4;
	if(var_54_bool != 0) {
		var_45_string = "ui/NPC_BigVlad.png";
		return 0;
	}
	var_56_bool = var_46_int == (int)5;
	if(var_56_bool != 0) {
		var_45_string = "ui/NPC_Eva.png";
		return 0;
	}
	var_58_bool = var_46_int == (int)6;
	if(var_58_bool != 0) {
		var_45_string = "ui/NPC_Georg.png";
		return 0;
	}
	var_60_bool = var_46_int == (int)7;
	if(var_60_bool != 0) {
		var_45_string = "ui/NPC_Grif.png";
		return 0;
	}
	var_62_bool = var_46_int == (int)8;
	if(var_62_bool != 0) {
		var_45_string = "ui/NPC_Han.png";
		return 0;
	}
	var_64_bool = var_46_int == (int)9;
	if(var_64_bool != 0) {
		var_45_string = "ui/NPC_Julia.png";
		return 0;
	}
	var_66_bool = var_46_int == (int)10;
	if(var_66_bool != 0) {
		var_45_string = "ui/NPC_Kapella.png";
		return 0;
	}
	var_68_bool = var_46_int == (int)11;
	if(var_68_bool != 0) {
		var_45_string = "ui/NPC_Katerina.png";
		return 0;
	}
	var_70_bool = var_46_int == (int)12;
	if(var_70_bool != 0) {
		var_45_string = "ui/NPC_Klara.png";
		return 0;
	}
	var_72_bool = var_46_int == (int)13;
	if(var_72_bool != 0) {
		var_45_string = "ui/NPC_Lara.png";
		return 0;
	}
	var_74_bool = var_46_int == (int)14;
	if(var_74_bool != 0) {
		var_45_string = "ui/NPC_Laska.png";
		return 0;
	}
	var_76_bool = var_46_int == (int)15;
	if(var_76_bool != 0) {
		var_45_string = "ui/NPC_Maria.png";
		return 0;
	}
	var_78_bool = var_46_int == (int)16;
	if(var_78_bool != 0) {
		var_45_string = "ui/NPC_Mark.png";
		return 0;
	}
	var_80_bool = var_46_int == (int)17;
	if(var_80_bool != 0) {
		var_45_string = "ui/NPC_Mat.png";
		return 0;
	}
	var_82_bool = var_46_int == (int)18;
	if(var_82_bool != 0) {
		var_45_string = "ui/NPC_Mishka.png";
		return 0;
	}
	var_84_bool = var_46_int == (int)19;
	if(var_84_bool != 0) {
		var_45_string = "ui/NPC_MladVlad.png";
		return 0;
	}
	var_86_bool = var_46_int == (int)20;
	if(var_86_bool != 0) {
		var_45_string = "ui/NPC_Notkin.png";
		return 0;
	}
	var_88_bool = var_46_int == (int)21;
	if(var_88_bool != 0) {
		var_45_string = "ui/NPC_Ospina.png";
		return 0;
	}
	var_90_bool = var_46_int == (int)22;
	if(var_90_bool != 0) {
		var_45_string = "ui/NPC_Petr.png";
		return 0;
	}
	var_92_bool = var_46_int == (int)23;
	if(var_92_bool != 0) {
		var_45_string = "ui/NPC_Rubin.png";
		return 0;
	}
	var_94_bool = var_46_int == (int)24;
	if(var_94_bool != 0) {
		var_45_string = "ui/NPC_Spi4ka.png";
		return 0;
	}
	var_96_bool = var_46_int == (int)25;
	if(var_96_bool != 0) {
		var_45_string = "ui/NPC_Starshina.png";
		return 0;
	}
	var_98_bool = var_46_int == (int)26;
	if(var_98_bool != 0) {
		var_45_string = "ui/NPC_Viktor.png";
		return 0;
	}
	var_100_bool = var_46_int == (int)27;
	if(var_100_bool != 0) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	var_102_bool = var_46_int == (int)28;
	if(var_102_bool != 0) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	var_104_bool = var_46_int == (int)29;
	if(var_104_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_106_bool = var_46_int == (int)30;
	if(var_106_bool != 0) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	var_108_bool = var_46_int == (int)31;
	if(var_108_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_110_bool = var_46_int == (int)32;
	if(var_110_bool != 0) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	var_112_bool = var_46_int == (int)33;
	if(var_112_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_114_bool = var_46_int == (int)34;
	if(var_114_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_116_bool = var_46_int == (int)35;
	if(var_116_bool != 0) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	var_118_bool = var_46_int == (int)36;
	if(var_118_bool != 0) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	var_120_bool = var_46_int == (int)37;
	if(var_120_bool != 0) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	var_122_bool = var_46_int == (int)38;
	if(var_122_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_124_bool = var_46_int == (int)39;
	if(var_124_bool != 0) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	var_126_bool = var_46_int == (int)40;
	if(var_126_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_128_bool = var_46_int == (int)42;
	if(var_128_bool != 0) {
		var_45_string = "ui/NPC_wmask.png";
		return 0;
	}
	var_130_bool = var_46_int == (int)43;
	if(var_130_bool != 0) {
		var_45_string = "ui/NPC_Black.png";
		return 0;
	}
	var_132_bool = var_46_int == (int)44;
	if(var_132_bool != 0) {
		var_45_string = "ui/NPC_bmask.png";
		return 0;
	}
	var_134_bool = var_46_int == (int)46;
	if(var_134_bool != 0) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	var_136_bool = var_46_int == (int)47;
	if(var_136_bool != 0) {
		var_45_string = "ui/NPC_Bakalavr.png";
		return 0;
	}
	var_138_bool = var_46_int == (int)48;
	if(var_138_bool != 0) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	var_140_bool = var_46_int == (int)49;
	if(var_140_bool != 0) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	var_142_bool = var_46_int == (int)50;
	if(var_142_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_144_bool = var_46_int == (int)51;
	if(var_144_bool != 0) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	var_146_bool = var_46_int == (int)52;
	if(var_146_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_148_bool = var_46_int == (int)53;
	if(var_148_bool != 0) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	var_150_bool = var_46_int == (int)54;
	if(var_150_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_152_bool = var_46_int == (int)55;
	if(var_152_bool != 0) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	var_154_bool = var_46_int == (int)56;
	if(var_154_bool != 0) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	var_156_bool = var_46_int == (int)57;
	if(var_156_bool != 0) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	var_158_bool = var_46_int == (int)58;
	if(var_158_bool != 0) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	var_160_bool = var_46_int == (int)59;
	if(var_160_bool != 0) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	var_162_bool = var_46_int == (int)60;
	if(var_162_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_164_bool = var_46_int == (int)61;
	if(var_164_bool != 0) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	var_166_bool = var_46_int == (int)62;
	if(var_166_bool != 0) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	var_168_bool = var_46_int == (int)63;
	if(var_168_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_170_bool = var_46_int == (int)64;
	if(var_170_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_172_bool = var_46_int == (int)65;
	if(var_172_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_174_bool = var_46_int == (int)66;
	if(var_174_bool != 0) {
		var_45_string = "ui/NPC_Burah.png";
		return 0;
	}
	var_176_bool = var_46_int == (int)67;
	if(var_176_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_178_bool = var_46_int == (int)68;
	if(var_178_bool != 0) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	var_180_bool = var_46_int == (int)69;
	if(var_180_bool != 0) {
		var_45_string = "ui/NPC_Albinos.png";
		return 0;
	}
	var_182_bool = var_46_int == (int)70;
	if(var_182_bool != 0) {
		var_45_string = "ui/NPC_Aglaja.png";
		return 0;
	}
	var_184_bool = var_46_int == (int)71;
	if(var_184_bool != 0) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	var_186_bool = var_46_int == (int)72;
	if(var_186_bool != 0) {
		var_45_string = "ui/NPC_Block.png";
		return 0;
	}
	var_188_bool = var_46_int == (int)73;
	if(var_188_bool != 0) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	var_190_bool = var_46_int == (int)74;
	if(var_190_bool != 0) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	var_192_bool = var_46_int == (int)75;
	if(var_192_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_194_bool = var_46_int == (int)76;
	if(var_194_bool != 0) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	var_196_bool = var_46_int == (int)77;
	if(var_196_bool != 0) {
		var_45_string = "ui/NPC_Prophet.png";
		return 0;
	}
	var_198_bool = var_46_int == (int)78;
	if(var_198_bool != 0) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	var_200_bool = var_46_int == (int)79;
	if(var_200_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_202_bool = var_46_int == (int)80;
	if(var_202_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_204_bool = var_46_int == (int)81;
	if(var_204_bool != 0) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	var_206_bool = var_46_int == (int)82;
	if(var_206_bool != 0) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	var_208_bool = var_46_int == (int)83;
	if(var_208_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_210_bool = var_46_int == (int)84;
	if(var_210_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_212_bool = var_46_int == (int)85;
	if(var_212_bool != 0) {
		var_45_string = "ui/NPC_Petr.png";
		return 0;
	}
	var_214_bool = var_46_int == (int)86;
	if(var_214_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_216_bool = var_46_int == (int)87;
	if(var_216_bool != 0) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	var_218_bool = var_46_int == (int)88;
	if(var_218_bool != 0) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	var_220_bool = var_46_int == (int)89;
	if(var_220_bool != 0) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_45_string = "";
	return 0;
}


func_1353(var_36_bool, var_37_int)
{
	var_38_int = 0; var_39_int = 0;
	var_41_int = "vol_" + var_37_int;
	GetVariable(var_41_int, var_39_int);
	var_43_int = var_39_int & (int)2;
	var_36_bool = var_43_int != (int)0;
	return 2;
}


func_299(var_1_int)
{
	var_37_int = 0; var_38_int = 0;
	var_38_int = 140;
	var_1_int = var_1_int + var_38_int;
	func_313(var_37_int, var_38_int);
	return 2;
}


func_15(var_5_object)
{
	var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0;
	CreateIntVector(var_5_object);
	var_14_int = 0;
	func_1373(var_14_int);
	var_19_bool = var_14_int == (int)1;
	if(var_19_bool != 0) {
		var_20_object = Obj(); var_21_bool = 0; var_22_int = 0;
		var_20_object = var_5_object;
		func_1245(var_20_object, (bool)0, (int)1);
	} else {
			var_233_int = 0;
			func_1373(var_233_int);
			var_235_bool = var_233_int == (int)0;
			if(var_235_bool != 0) {
				var_236_object = Obj(); var_237_bool = 0; var_238_int = 0;
				var_236_object = var_5_object;
				func_1278(var_236_object, (bool)0, (int)0);
				goto Label_50;
			}
			var_251_object = Obj(); var_252_bool = 0; var_253_int = 0;
			var_251_object = var_5_object;
			func_1311((bool)0, (int)2);
	}
Label_50:
	@@@var_5_object:size(var_11_int);
	var_12_int = 0;
	
Label_53:
	var_35_bool = var_12_int < var_11_int;
	if(var_35_bool != 0) {
		@@@var_5_object:get(var_13_int, var_12_int);
		var_36_bool = 0; var_37_int = 0;
		var_13_int = var_37_int;
		func_1353(var_36_bool, var_37_int);
		if(var_36_bool != 0) {
			var_45_string = ""; var_46_int = 0;
			var_13_int = var_46_int;
			func_807(var_45_string, var_46_int);
			LoadImage(var_45_string);
		} else {
			var_222_bool = 0; var_223_int = 0;
			var_13_int = var_223_int;
			func_1363(var_222_bool, var_223_int);
			if(var_222_bool == 0) goto Label_80;
			var_231_string = ""; var_232_int = 0;
			var_13_int = var_232_int;
			func_807(var_231_string, var_232_int);
			LoadImage(var_231_string);
	}
		var_12_int = var_12_int + (int)1;
		goto Label_53;
	}
	return 6;
	
}


func_369(var_226_int, var_227_int)
{
	var_229_bool = var_227_int == (int)1;
	if(var_229_bool != 0) {
		var_226_int = 502854;
		return 0;
	}
	var_231_bool = var_227_int == (int)2;
	if(var_231_bool != 0) {
		var_226_int = 502855;
		return 0;
	}
	var_233_bool = var_227_int == (int)3;
	if(var_233_bool != 0) {
		var_226_int = 502856;
		return 0;
	}
	var_235_bool = var_227_int == (int)4;
	if(var_235_bool != 0) {
		var_226_int = 502857;
		return 0;
	}
	var_237_bool = var_227_int == (int)5;
	if(var_237_bool != 0) {
		var_226_int = 502858;
		return 0;
	}
	var_239_bool = var_227_int == (int)6;
	if(var_239_bool != 0) {
		var_226_int = 502859;
		return 0;
	}
	var_241_bool = var_227_int == (int)7;
	if(var_241_bool != 0) {
		var_226_int = 502860;
		return 0;
	}
	var_243_bool = var_227_int == (int)8;
	if(var_243_bool != 0) {
		var_226_int = 502861;
		return 0;
	}
	var_245_bool = var_227_int == (int)9;
	if(var_245_bool != 0) {
		var_226_int = 502862;
		return 0;
	}
	var_247_bool = var_227_int == (int)10;
	if(var_247_bool != 0) {
		var_226_int = 502863;
		return 0;
	}
	var_249_bool = var_227_int == (int)11;
	if(var_249_bool != 0) {
		var_226_int = 502864;
		return 0;
	}
	var_251_bool = var_227_int == (int)12;
	if(var_251_bool != 0) {
		var_226_int = 502865;
		return 0;
	}
	var_253_bool = var_227_int == (int)13;
	if(var_253_bool != 0) {
		var_226_int = 502866;
		return 0;
	}
	var_255_bool = var_227_int == (int)14;
	if(var_255_bool != 0) {
		var_226_int = 502867;
		return 0;
	}
	var_257_bool = var_227_int == (int)15;
	if(var_257_bool != 0) {
		var_226_int = 502868;
		return 0;
	}
	var_259_bool = var_227_int == (int)16;
	if(var_259_bool != 0) {
		var_226_int = 502869;
		return 0;
	}
	var_261_bool = var_227_int == (int)17;
	if(var_261_bool != 0) {
		var_226_int = 502870;
		return 0;
	}
	var_263_bool = var_227_int == (int)18;
	if(var_263_bool != 0) {
		var_226_int = 502871;
		return 0;
	}
	var_265_bool = var_227_int == (int)19;
	if(var_265_bool != 0) {
		var_226_int = 502872;
		return 0;
	}
	var_267_bool = var_227_int == (int)20;
	if(var_267_bool != 0) {
		var_226_int = 502873;
		return 0;
	}
	var_269_bool = var_227_int == (int)21;
	if(var_269_bool != 0) {
		var_226_int = 502874;
		return 0;
	}
	var_271_bool = var_227_int == (int)22;
	if(var_271_bool != 0) {
		var_226_int = 502875;
		return 0;
	}
	var_273_bool = var_227_int == (int)23;
	if(var_273_bool != 0) {
		var_226_int = 502876;
		return 0;
	}
	var_275_bool = var_227_int == (int)24;
	if(var_275_bool != 0) {
		var_226_int = 502877;
		return 0;
	}
	var_277_bool = var_227_int == (int)25;
	if(var_277_bool != 0) {
		var_226_int = 502878;
		return 0;
	}
	var_279_bool = var_227_int == (int)26;
	if(var_279_bool != 0) {
		var_226_int = 502879;
		return 0;
	}
	var_281_bool = var_227_int == (int)27;
	if(var_281_bool != 0) {
		var_226_int = 503340;
		return 0;
	}
	var_283_bool = var_227_int == (int)28;
	if(var_283_bool != 0) {
		var_226_int = 503341;
		return 0;
	}
	var_285_bool = var_227_int == (int)29;
	if(var_285_bool != 0) {
		var_226_int = 503342;
		return 0;
	}
	var_287_bool = var_227_int == (int)30;
	if(var_287_bool != 0) {
		var_226_int = 503343;
		return 0;
	}
	var_289_bool = var_227_int == (int)31;
	if(var_289_bool != 0) {
		var_226_int = 503344;
		return 0;
	}
	var_291_bool = var_227_int == (int)32;
	if(var_291_bool != 0) {
		var_226_int = 503345;
		return 0;
	}
	var_293_bool = var_227_int == (int)33;
	if(var_293_bool != 0) {
		var_226_int = 503346;
		return 0;
	}
	var_295_bool = var_227_int == (int)34;
	if(var_295_bool != 0) {
		var_226_int = 503347;
		return 0;
	}
	var_297_bool = var_227_int == (int)35;
	if(var_297_bool != 0) {
		var_226_int = 503348;
		return 0;
	}
	var_299_bool = var_227_int == (int)36;
	if(var_299_bool != 0) {
		var_226_int = 503349;
		return 0;
	}
	var_301_bool = var_227_int == (int)37;
	if(var_301_bool != 0) {
		var_226_int = 503350;
		return 0;
	}
	var_303_bool = var_227_int == (int)38;
	if(var_303_bool != 0) {
		var_226_int = 503351;
		return 0;
	}
	var_305_bool = var_227_int == (int)39;
	if(var_305_bool != 0) {
		var_226_int = 503352;
		return 0;
	}
	var_307_bool = var_227_int == (int)40;
	if(var_307_bool != 0) {
		var_226_int = 503353;
		return 0;
	}
	var_309_bool = var_227_int == (int)42;
	if(var_309_bool != 0) {
		var_226_int = 503354;
		return 0;
	}
	var_311_bool = var_227_int == (int)43;
	if(var_311_bool != 0) {
		var_226_int = 503355;
		return 0;
	}
	var_313_bool = var_227_int == (int)44;
	if(var_313_bool != 0) {
		var_226_int = 504029;
		return 0;
	}
	var_315_bool = var_227_int == (int)46;
	if(var_315_bool != 0) {
		var_226_int = 504031;
		return 0;
	}
	var_317_bool = var_227_int == (int)47;
	if(var_317_bool != 0) {
		var_226_int = 504032;
		return 0;
	}
	var_319_bool = var_227_int == (int)48;
	if(var_319_bool != 0) {
		var_226_int = 506270;
		return 0;
	}
	var_321_bool = var_227_int == (int)49;
	if(var_321_bool != 0) {
		var_226_int = 506271;
		return 0;
	}
	var_323_bool = var_227_int == (int)50;
	if(var_323_bool != 0) {
		var_226_int = 506272;
		return 0;
	}
	var_325_bool = var_227_int == (int)51;
	if(var_325_bool != 0) {
		var_226_int = 506273;
		return 0;
	}
	var_327_bool = var_227_int == (int)52;
	if(var_327_bool != 0) {
		var_226_int = 506274;
		return 0;
	}
	var_329_bool = var_227_int == (int)53;
	if(var_329_bool != 0) {
		var_226_int = 506275;
		return 0;
	}
	var_331_bool = var_227_int == (int)54;
	if(var_331_bool != 0) {
		var_226_int = 506276;
		return 0;
	}
	var_333_bool = var_227_int == (int)55;
	if(var_333_bool != 0) {
		var_226_int = 506277;
		return 0;
	}
	var_335_bool = var_227_int == (int)56;
	if(var_335_bool != 0) {
		var_226_int = 506278;
		return 0;
	}
	var_337_bool = var_227_int == (int)57;
	if(var_337_bool != 0) {
		var_226_int = 506279;
		return 0;
	}
	var_339_bool = var_227_int == (int)58;
	if(var_339_bool != 0) {
		var_226_int = 506280;
		return 0;
	}
	var_341_bool = var_227_int == (int)59;
	if(var_341_bool != 0) {
		var_226_int = 506281;
		return 0;
	}
	var_343_bool = var_227_int == (int)60;
	if(var_343_bool != 0) {
		var_226_int = 506282;
		return 0;
	}
	var_345_bool = var_227_int == (int)61;
	if(var_345_bool != 0) {
		var_226_int = 506283;
		return 0;
	}
	var_347_bool = var_227_int == (int)62;
	if(var_347_bool != 0) {
		var_226_int = 506284;
		return 0;
	}
	var_349_bool = var_227_int == (int)63;
	if(var_349_bool != 0) {
		var_226_int = 506285;
		return 0;
	}
	var_351_bool = var_227_int == (int)64;
	if(var_351_bool != 0) {
		var_226_int = 506286;
		return 0;
	}
	var_353_bool = var_227_int == (int)65;
	if(var_353_bool != 0) {
		var_226_int = 506287;
		return 0;
	}
	var_355_bool = var_227_int == (int)66;
	if(var_355_bool != 0) {
		var_226_int = 511961;
		return 0;
	}
	var_357_bool = var_227_int == (int)67;
	if(var_357_bool != 0) {
		var_226_int = 512582;
		return 0;
	}
	var_359_bool = var_227_int == (int)68;
	if(var_359_bool != 0) {
		var_226_int = 512583;
		return 0;
	}
	var_361_bool = var_227_int == (int)69;
	if(var_361_bool != 0) {
		var_226_int = 512611;
		return 0;
	}
	var_363_bool = var_227_int == (int)70;
	if(var_363_bool != 0) {
		var_226_int = 513334;
		return 0;
	}
	var_365_bool = var_227_int == (int)71;
	if(var_365_bool != 0) {
		var_226_int = 514839;
		return 0;
	}
	var_367_bool = var_227_int == (int)72;
	if(var_367_bool != 0) {
		var_226_int = 514840;
		return 0;
	}
	var_369_bool = var_227_int == (int)73;
	if(var_369_bool != 0) {
		var_226_int = 514841;
		return 0;
	}
	var_371_bool = var_227_int == (int)74;
	if(var_371_bool != 0) {
		var_226_int = 518096;
		return 0;
	}
	var_373_bool = var_227_int == (int)75;
	if(var_373_bool != 0) {
		var_226_int = 518410;
		return 0;
	}
	var_375_bool = var_227_int == (int)76;
	if(var_375_bool != 0) {
		var_226_int = 518606;
		return 0;
	}
	var_377_bool = var_227_int == (int)77;
	if(var_377_bool != 0) {
		var_226_int = 518715;
		return 0;
	}
	var_379_bool = var_227_int == (int)78;
	if(var_379_bool != 0) {
		var_226_int = 521047;
		return 0;
	}
	var_381_bool = var_227_int == (int)79;
	if(var_381_bool != 0) {
		var_226_int = 527720;
		return 0;
	}
	var_383_bool = var_227_int == (int)80;
	if(var_383_bool != 0) {
		var_226_int = 529825;
		return 0;
	}
	var_385_bool = var_227_int == (int)81;
	if(var_385_bool != 0) {
		var_226_int = 529835;
		return 0;
	}
	var_387_bool = var_227_int == (int)82;
	if(var_387_bool != 0) {
		var_226_int = 530493;
		return 0;
	}
	var_389_bool = var_227_int == (int)83;
	if(var_389_bool != 0) {
		var_226_int = 531556;
		return 0;
	}
	var_391_bool = var_227_int == (int)84;
	if(var_391_bool != 0) {
		var_226_int = 533304;
		return 0;
	}
	var_393_bool = var_227_int == (int)85;
	if(var_393_bool != 0) {
		var_226_int = 539027;
		return 0;
	}
	var_395_bool = var_227_int == (int)86;
	if(var_395_bool != 0) {
		var_226_int = 541571;
		return 0;
	}
	var_397_bool = var_227_int == (int)87;
	if(var_397_bool != 0) {
		var_226_int = 541581;
		return 0;
	}
	var_399_bool = var_227_int == (int)88;
	if(var_399_bool != 0) {
		var_226_int = 543370;
		return 0;
	}
	var_401_bool = var_227_int == (int)89;
	if(var_401_bool != 0) {
		var_226_int = 543372;
		return 0;
	}
	var_226_int = -1;
	return 0;
}


func_306(var_1_int)
{
	var_18_int = 0; var_19_int = 0;
	var_19_int = -140;
	var_1_int = var_1_int + var_19_int;
	func_313(var_18_int, var_19_int);
	return 2;
}


func_1363(var_222_bool, var_223_int)
{
	var_224_int = 0; var_225_int = 0;
	var_227_int = "vol_" + var_223_int;
	GetVariable(var_227_int, var_225_int);
	var_229_int = var_225_int & (int)8;
	var_222_bool = var_229_int != (int)0;
	return 2;
}


func_211(var_3_int, var_5_object, var_439_int, var_440_int)
{
	var_441_int = 0; var_442_int = 0; var_443_int = 0; var_444_bool = 0; var_445_int = 0; var_446_int = 0; var_447_int = 0; var_448_string = ""; var_449_int = 0; var_450_int = 0; var_451_int = 0; var_452_int = 0; var_453_bool = 0; var_454_int = 0; var_455_int = 0; var_456_int = 0; var_457_string = ""; var_458_int = 0;
	var_440_int = var_450_int;
	@@@var_5_object:size(var_452_int);
	var_453_bool = 1;
	var_454_int = 0;
	
Label_217:
	var_459_bool = var_454_int < var_452_int;
	if(var_459_bool != 0) {
		@@@var_5_object:get(var_455_int, var_454_int);
		var_460_bool = 0; var_461_int = 0;
		var_455_int = var_461_int;
		func_1363(var_460_bool, var_461_int);
		if(var_460_bool != 0) {
			var_453_bool = 0;
			var_469_string = ""; var_470_int = 0;
			var_455_int = var_470_int;
			func_807(var_469_string, var_470_int);
			StretchBlit(var_469_string, (int)0, var_450_int, (int)152, (int)126);
			var_474_bool = 0; var_475_int = 0;
			var_455_int = var_475_int;
			func_1343(var_474_bool, var_475_int);
			if(var_474_bool != 0) {
				Blit("birdmask", (int)0, var_450_int);
			}
			var_485_int = 0; var_486_int = 0;
			var_455_int = var_486_int;
			func_369(var_485_int, var_486_int);
			var_485_int = var_456_int;
			GetStringByID(var_457_string, var_456_int);
			var_489_float = (int)2 * var_3_int;
			var_491_float = var_489_float / (int)5;
			GetTextHeightInWidth(var_458_int, "name", var_491_float, var_457_string);
			var_494_float = (int)3 * var_3_int;
			var_496_float = var_494_float / (int)5;
			var_498_int = var_450_int + (int)140;
			var_499_int = var_498_int - var_458_int;
			var_501_int = var_499_int - (int)15;
			var_503_float = (int)2 * var_3_int;
			var_505_float = var_503_float / (int)5;
			PrintInWidth(var_458_int, "name", var_496_float, var_501_int, var_505_float, var_457_string, (float)0.6000000238418579, (float)0.6000000238418579, (float)0.6000000238418579);
			var_450_int = var_450_int + (int)140;
		}
		var_454_int = var_454_int + (int)1;
		goto Label_217;
	}
	var_511_bool = var_453_bool;
	if(var_511_bool != 0) {
		var_440_int = var_439_int;
		return 18;
	}
	var_450_int = var_439_int;
	return 18;
}


func_119(var_3_int, var_5_object, var_14_int, var_15_int)
{
	var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_string = ""; var_24_int = 0; var_25_string = ""; var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_string = ""; var_34_int = 0; var_35_string = "";
	var_26_int = var_15_int + (int)15;
	var_28_bool = 1;
	@@@var_5_object:size(var_29_int);
	var_30_int = 0;
	
Label_126:
	var_37_bool = var_30_int < var_29_int;
	if(var_37_bool != 0) {
		@@@var_5_object:get(var_31_int, var_30_int);
		var_38_bool = 0; var_39_int = 0;
		var_31_int = var_39_int;
		func_1353(var_38_bool, var_39_int);
		if(var_38_bool != 0) {
			var_47_string = ""; var_48_int = 0;
			var_31_int = var_48_int;
			func_807(var_47_string, var_48_int);
			StretchBlit(var_47_string, (int)0, var_26_int, (int)152, (int)126);
			var_226_int = 0; var_227_int = 0;
			var_31_int = var_227_int;
			func_369(var_226_int, var_227_int);
			var_226_int = var_32_int;
			GetStringByID(var_33_string, var_32_int);
			var_404_float = (int)2 * var_3_int;
			var_406_float = var_404_float / (int)5;
			GetTextHeightInWidth(var_34_int, "name", var_406_float, var_33_string);
			var_409_float = (int)3 * var_3_int;
			var_411_float = var_409_float / (int)5;
			var_413_int = var_26_int + (int)140;
			var_414_int = var_413_int - var_34_int;
			var_416_float = (int)2 * var_3_int;
			var_418_float = var_416_float / (int)5;
			PrintInWidth(var_34_int, "name", var_411_float, var_414_int, var_418_float, var_33_string, (float)0.6000000238418579, (float)0.6000000238418579, (float)0.6000000238418579);
			var_423_bool = var_34_int > (int)140;
			if(var_423_bool != 0) {
				var_26_int = var_26_int + var_34_int;
			} else {
				var_26_int = var_26_int + (int)140;
	}
			var_426_bool = (bool)0;
			if(var_426_bool != 0) {
				var_15_int = var_14_int;
				return 20;
			}
			GetStringByID(var_35_string, (int)201);
			PrintInWidth(var_27_int, "default", (int)0, var_26_int, var_3_int, var_35_string, (float)1.0, (float)1.0, (float)1.0);
			var_434_int = var_27_int + (int)7;
			var_26_int = var_26_int + var_434_int;
			StretchBlit("separator", (int)0, var_26_int, var_3_int, (int)1);
			var_14_int = var_26_int + (int)7;
			return 20;
		}
	}
	var_30_int = var_30_int + (int)1;
	goto Label_126;
	
}


func_313(var_1_int, var_2_int)
{
	var_21_bool = var_2_int < (int)0;
	if(var_21_bool != 0) {
		var_2_int = 0;
	}
	var_22_int = -var_1_int;
	var_23_bool = var_22_int > var_2_int;
	if(var_23_bool != 0) {
		var_1_int = -var_2_int;
	} else {
			var_34_bool = var_1_int > (int)0;
			if(var_34_bool == 0) goto Label_326;
			var_1_int = 0;
	}
Label_326:
	var_25_bool = var_2_int == (int)0;
	if(var_25_bool != 0) {
		SendMessage((int)16384, "scrollbar");
	} else {
		var_28_int = -var_1_int;
		var_30_float = var_28_int * (int)100;
		var_31_float = var_30_float / var_2_int;
		SendMessage(var_31_float, "scrollbar");

	}
	return 0;
	
}


func_1373(var_14_int)
{
	var_15_int = 0; var_16_int = 0;
	GetVariable("branch", var_16_int);
	var_16_int = var_14_int;
	return 2;
}


func_1245(var_20_object, var_21_bool, var_22_int)
{
	@@var_20_object:add((int)18);
	@@var_20_object:add((int)24);
	@@var_20_object:add((int)20);
	@@var_20_object:add((int)14);
	var_28_bool = var_21_bool == (bool)0;
	if(var_28_bool != 0) {
		@@var_20_object:add((int)10);
		@@var_20_object:add((int)17);
		@@var_20_object:add((int)8);
	} else {
		var_33_bool = var_22_int != (int)1;
		if(var_33_bool == 0) goto Label_1277;
		@@var_20_object:add((int)10);
	}
Label_1277:
	return 0;
	
}


func_1278(var_236_object, var_237_bool, var_238_int)
{
	@@var_236_object:add((int)6);
	@@var_236_object:add((int)26);
	@@var_236_object:add((int)2);
	@@var_236_object:add((int)22);
	var_244_bool = var_237_bool == (bool)0;
	if(var_244_bool != 0) {
		@@var_236_object:add((int)15);
		@@var_236_object:add((int)5);
		@@var_236_object:add((int)16);
	} else {
		var_249_bool = var_238_int != (int)0;
		if(var_249_bool == 0) goto Label_1310;
		@@var_236_object:add((int)15);
	}
Label_1310:
	return 0;
	
}


func_1311(var_251_object, var_252_bool)
{
	@@var_251_object:add((int)7);
	@@var_251_object:add((int)23);
	@@var_251_object:add((int)21);
	@@var_251_object:add((int)9);
	@@var_251_object:add((int)3);
	@@var_251_object:add((int)1);
	@@var_251_object:add((int)11);
	@@var_251_object:add((int)13);
	var_263_bool = var_252_bool == (bool)0;
	if(var_263_bool != 0) {
		@@var_251_object:add((int)25);
	}
	return 0;
}


