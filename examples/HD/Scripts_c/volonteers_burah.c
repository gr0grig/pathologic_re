// @IMPORTS: CreateIntVector/1,Hold/0,Trace/1,irand/2,CreateObjectVector/1,CreateStringVector/1,SetVariable/2,GetVariable/2,GetMainOutdoorScene/1,GetSceneByName/2,FindActor/2,Trigger/2,GetGameTime/1,_strlwr/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,AddMessage/4
// @STRINGS: W:quest_b12_01|W:init_hidden_room|A:add|W:rescue|W:rescue_oneday|W:rescue_locked|W:kill|W:disease|W:update|W:cleanup|W:childs_letter|W:theater_letter|A:get|A:size|W:Volonteer : |W:Diseased volonteer : |W:Today volonteers: |W:, diseased: |W:Volonteers Cleanup...|A:Remove|W:Volonteers Init...|W:Volonteers count: |W:vol_|W:pt_volonteer_|W:pers_birdmask|W:vbirdmask_|W:.xml|A:set|W:outdoor|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:alexandr|W:andrei|W:anna|W:bigvlad|W:eva|W:georg|W:grif|W:han|W:julia|W:kapella|W:katerina|W:klara|W:laska|W:maria|W:mark|W:mat|W:mishka|W:mladvlad|W:notkin|W:ospina|W:petr|W:rubin|W:spi4ka|W:starshina|W:viktor|W:wasted_woman|W:wasted_male|W:alkash|W:boy|W:girl|W:littleboy|W:littlegirl|W:butcher|W:dohodyaga|W:unosha|W:vaxxabit|W:vaxxabitka|W:worker|W:whitemask|W:patrol|W:danko|W:alkash_d|W:boy_d|W:butcher_d|W:dohodyaga_d|W:girl_d|W:littleboy_d|W:littlegirl_d|W:unosha2|W:unosha_d|W:unosha2_d|W:vaxxabit_d|W:vaxxabitka_d|W:wasted_male_d|W:wasted_woman_d|W:worker2|W:worker_d|W:worker2_d|W:burah|W:gorbun_daughter|W:gorbun|W:albinos|W:aglaja|W:nude|W:block|W:officer|W:doberman|W:grabitel|W:gatherer_wife|W:rat_prophet|W:morlok|W:soldier|W:britva|W:kabaktchik|W:sanitar|W:salesman|W:ayyan|W:petrbirdmask|W:mogila|W:klikusha|W:karlik|W:lisa|W:cot_alexandr@door1|W:shouse1_kabak@door1|W:cot_anna@door1|W:cot_bigvlad@door1|W:cot_georg@door1|W:cot_maria@door1|W:cot_julia@door1|W:cot_kapella@door1|W:cot_katerina@door1|W:cot_lara@door1|W:vagon_mishka@door1|W:house_vlad@door1|W:warehouse_notkin@door1|W:dt_house_1_04@door1|W:house_petr@door1|W:house_petr@door2|W:house_spi4ka@door1|W:house_spi4ka@door2|W:cot_viktor@door1|W:storojka@door1|W:termitnik_mat@door1|W:termitnik|W:warehouse_grif@door1|W:warehouse_rubin@door1|W:cot_eva@door1|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Door |W: not found|W:dlocked|A:SetProperty
// @RUN_OP: 0x5d
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,object,int,bool,bool,bool,bool,bool params=0
// @EVENT_26: op=0xd1 vars=string,string
// @PE: 0x0,0x6,0x11,0x15,0x1a,0x46,0x55,0x5d,0x47d,0x483,0x63b,0x7f1,0x817,0x838,0x859,0xa36,0xa3f

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_string, var_13_string)
{
	var_14_int = 0; var_15_int = 0;
	Trace(var_12_string);
	var_17_bool = var_12_string == "rescue";
	if(var_17_bool != 0) {
		var_18_int = 0;
		var_19_int = 0; var_20_int = 0;
		var_21_int = 0; var_22_string = "";
		var_13_string = var_22_string;
		func_1155(var_21_int, var_22_string);
		var_21_int = var_20_int;
		func_734(var_18_int, var_19_int, var_20_int);
		var_19_int = var_18_int;
		func_951(var_14_int, var_15_int, var_18_int);
		func_102(var_12_string, var_13_string, var_14_int, var_15_int);
	} else {
		var_452_bool = var_12_string == "rescue_oneday";
		if(var_452_bool != 0) {
			var_453_int = 0;
			var_454_int = 0; var_455_int = 0;
			var_456_int = 0; var_457_string = "";
			var_13_string = var_457_string;
			func_1155(var_456_int, var_457_string);
			var_456_int = var_455_int;
			func_734(var_453_int, var_454_int, var_455_int);
			var_454_int = var_453_int;
			func_881(var_15_int, var_453_int);
			goto Label_358;
		}
		var_479_bool = var_12_string == "rescue_locked";
		if(var_479_bool != 0) {
			var_15_int = 0;

		Label_251:
			var_480_int = 0;
			func_729(var_15_int, var_480_int);
			var_481_bool = var_15_int < var_480_int;
			if(var_481_bool != 0) {
				var_482_bool = 0;
				var_482_bool = 0;
				var_483_bool = 0; var_484_int = 0;
				var_15_int = var_484_int;
				func_775(var_483_bool, var_484_int);
				if(var_483_bool != 0) {
					var_492_bool = 0; var_493_int = 0;
					var_494_int = 0; var_495_int = 0;
					var_15_int = var_495_int;
					func_752(var_493_int, var_494_int, var_495_int);
					var_494_int = var_493_int;
					func_26(var_492_bool, var_493_int);
					if(var_492_bool != 0) {
						var_482_bool = 1;
					}
				}
				if(var_482_bool != 0) {
					var_514_int = 0;
					var_15_int = var_514_int;
					func_951(var_14_int, var_15_int, var_514_int);
				}
				var_15_int = var_15_int + (int)1;
				goto Label_251;
			}
			func_102(var_12_string, var_13_string, var_14_int, var_15_int);
			goto Label_358;
		}
		var_517_bool = var_12_string == "kill";
		if(var_517_bool != 0) {
			var_518_int = 0;
			var_519_int = 0; var_520_int = 0;
			var_521_int = 0; var_522_string = "";
			var_13_string = var_522_string;
			func_1155(var_521_int, var_522_string);
			var_521_int = var_520_int;
			func_734(var_518_int, var_519_int, var_520_int);
			var_519_int = var_518_int;
			func_1002(var_14_int, var_15_int, var_518_int);
			goto Label_358;
		}
		var_758_bool = var_12_string == "disease";
		if(var_758_bool != 0) {
			var_759_int = 0;
			var_760_int = 0; var_761_int = 0;
			var_762_int = 0; var_763_string = "";
			var_13_string = var_763_string;
			func_1155(var_762_int, var_763_string);
			var_762_int = var_761_int;
			func_734(var_759_int, var_760_int, var_761_int);
			var_760_int = var_759_int;
			func_811(var_14_int, var_15_int, var_759_int);
			goto Label_358;
		}
		var_809_bool = var_12_string == "update";
		if(var_809_bool != 0) {
			func_433(var_14_int, var_15_int);
			goto Label_358;
		}
		var_1012_bool = var_12_string == "cleanup";
		if(var_1012_bool != 0) {
			func_639(var_15_int);
			goto Label_358;
		}
		var_1023_bool = var_12_string == "childs_letter";
		if(var_1023_bool != 0) {
			var_1024_bool = var_8_bool == 0; //@nz
			if(var_1024_bool != 0) {
				var_1025_float = 0;
				func_1127((float)0);
				var_1026_float = var_1025_float;
				func_6(var_1025_float);
				var_8_bool = true;
			}
			goto Label_358;
		}
		var_1028_bool = var_12_string == "theater_letter";
		if(var_1028_bool == 0) goto Label_358;
		var_1029_bool = var_7_bool == 0; //@nz
		if(var_1029_bool == 0) goto Label_358;
		var_1030_float = 0;
		func_1127((float)0);
		var_1031_float = var_1030_float;
		func_0(var_1030_float);
		var_7_bool = true;
	}
Label_358:
	return 2;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_661(var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool);
	var_7_bool = false;
	var_8_bool = false;
	
Label_98:
	Hold();
	goto Label_98;
}
EMIT "Return(); Pop(0)";


func_0(var_1030_float)
{
	var_1032_int = 0; var_1033_float = 0;
	var_1030_float = var_1033_float;
	func_2623(var_1032_int, var_1033_float);
	return 0;
}


func_1155(var_21_int, var_22_string)
{
	_strlwr(var_22_string);
	var_24_bool = var_22_string == "alexandr";
	if(var_24_bool != 0) {
		var_21_int = 1;
		return 0;
	}
	var_26_bool = var_22_string == "andrei";
	if(var_26_bool != 0) {
		var_21_int = 2;
		return 0;
	}
	var_28_bool = var_22_string == "anna";
	if(var_28_bool != 0) {
		var_21_int = 3;
		return 0;
	}
	var_30_bool = var_22_string == "bigvlad";
	if(var_30_bool != 0) {
		var_21_int = 4;
		return 0;
	}
	var_32_bool = var_22_string == "eva";
	if(var_32_bool != 0) {
		var_21_int = 5;
		return 0;
	}
	var_34_bool = var_22_string == "georg";
	if(var_34_bool != 0) {
		var_21_int = 6;
		return 0;
	}
	var_36_bool = var_22_string == "grif";
	if(var_36_bool != 0) {
		var_21_int = 7;
		return 0;
	}
	var_38_bool = var_22_string == "han";
	if(var_38_bool != 0) {
		var_21_int = 8;
		return 0;
	}
	var_40_bool = var_22_string == "julia";
	if(var_40_bool != 0) {
		var_21_int = 9;
		return 0;
	}
	var_42_bool = var_22_string == "kapella";
	if(var_42_bool != 0) {
		var_21_int = 10;
		return 0;
	}
	var_44_bool = var_22_string == "katerina";
	if(var_44_bool != 0) {
		var_21_int = 11;
		return 0;
	}
	var_46_bool = var_22_string == "klara";
	if(var_46_bool != 0) {
		var_21_int = 12;
		return 0;
	}
	var_48_bool = var_22_string == "lara";
	if(var_48_bool != 0) {
		var_21_int = 13;
		return 0;
	}
	var_50_bool = var_22_string == "laska";
	if(var_50_bool != 0) {
		var_21_int = 14;
		return 0;
	}
	var_52_bool = var_22_string == "maria";
	if(var_52_bool != 0) {
		var_21_int = 15;
		return 0;
	}
	var_54_bool = var_22_string == "mark";
	if(var_54_bool != 0) {
		var_21_int = 16;
		return 0;
	}
	var_56_bool = var_22_string == "mat";
	if(var_56_bool != 0) {
		var_21_int = 17;
		return 0;
	}
	var_58_bool = var_22_string == "mishka";
	if(var_58_bool != 0) {
		var_21_int = 18;
		return 0;
	}
	var_60_bool = var_22_string == "mladvlad";
	if(var_60_bool != 0) {
		var_21_int = 19;
		return 0;
	}
	var_62_bool = var_22_string == "notkin";
	if(var_62_bool != 0) {
		var_21_int = 20;
		return 0;
	}
	var_64_bool = var_22_string == "ospina";
	if(var_64_bool != 0) {
		var_21_int = 21;
		return 0;
	}
	var_66_bool = var_22_string == "petr";
	if(var_66_bool != 0) {
		var_21_int = 22;
		return 0;
	}
	var_68_bool = var_22_string == "rubin";
	if(var_68_bool != 0) {
		var_21_int = 23;
		return 0;
	}
	var_70_bool = var_22_string == "spi4ka";
	if(var_70_bool != 0) {
		var_21_int = 24;
		return 0;
	}
	var_72_bool = var_22_string == "starshina";
	if(var_72_bool != 0) {
		var_21_int = 25;
		return 0;
	}
	var_74_bool = var_22_string == "viktor";
	if(var_74_bool != 0) {
		var_21_int = 26;
		return 0;
	}
	var_76_bool = var_22_string == "wasted_woman";
	if(var_76_bool != 0) {
		var_21_int = 27;
		return 0;
	}
	var_78_bool = var_22_string == "wasted_male";
	if(var_78_bool != 0) {
		var_21_int = 28;
		return 0;
	}
	var_80_bool = var_22_string == "alkash";
	if(var_80_bool != 0) {
		var_21_int = 29;
		return 0;
	}
	var_82_bool = var_22_string == "boy";
	if(var_82_bool != 0) {
		var_21_int = 30;
		return 0;
	}
	var_84_bool = var_22_string == "girl";
	if(var_84_bool != 0) {
		var_21_int = 31;
		return 0;
	}
	var_86_bool = var_22_string == "littleboy";
	if(var_86_bool != 0) {
		var_21_int = 32;
		return 0;
	}
	var_88_bool = var_22_string == "littlegirl";
	if(var_88_bool != 0) {
		var_21_int = 33;
		return 0;
	}
	var_90_bool = var_22_string == "butcher";
	if(var_90_bool != 0) {
		var_21_int = 34;
		return 0;
	}
	var_92_bool = var_22_string == "dohodyaga";
	if(var_92_bool != 0) {
		var_21_int = 35;
		return 0;
	}
	var_94_bool = var_22_string == "unosha";
	if(var_94_bool != 0) {
		var_21_int = 36;
		return 0;
	}
	var_96_bool = var_22_string == "vaxxabit";
	if(var_96_bool != 0) {
		var_21_int = 37;
		return 0;
	}
	var_98_bool = var_22_string == "vaxxabitka";
	if(var_98_bool != 0) {
		var_21_int = 38;
		return 0;
	}
	var_100_bool = var_22_string == "woman";
	if(var_100_bool != 0) {
		var_21_int = 39;
		return 0;
	}
	var_102_bool = var_22_string == "worker";
	if(var_102_bool != 0) {
		var_21_int = 40;
		return 0;
	}
	var_104_bool = var_22_string == "whitemask";
	if(var_104_bool != 0) {
		var_21_int = 42;
		return 0;
	}
	var_106_bool = var_22_string == "birdmask";
	if(var_106_bool != 0) {
		var_21_int = 43;
		return 0;
	}
	var_108_bool = var_22_string == "birdmask";
	if(var_108_bool != 0) {
		var_21_int = 44;
		return 0;
	}
	var_110_bool = var_22_string == "patrol";
	if(var_110_bool != 0) {
		var_21_int = 46;
		return 0;
	}
	var_112_bool = var_22_string == "danko";
	if(var_112_bool != 0) {
		var_21_int = 47;
		return 0;
	}
	var_114_bool = var_22_string == "alkash_d";
	if(var_114_bool != 0) {
		var_21_int = 48;
		return 0;
	}
	var_116_bool = var_22_string == "boy_d";
	if(var_116_bool != 0) {
		var_21_int = 49;
		return 0;
	}
	var_118_bool = var_22_string == "butcher_d";
	if(var_118_bool != 0) {
		var_21_int = 50;
		return 0;
	}
	var_120_bool = var_22_string == "dohodyaga_d";
	if(var_120_bool != 0) {
		var_21_int = 51;
		return 0;
	}
	var_122_bool = var_22_string == "girl_d";
	if(var_122_bool != 0) {
		var_21_int = 52;
		return 0;
	}
	var_124_bool = var_22_string == "littleboy_d";
	if(var_124_bool != 0) {
		var_21_int = 53;
		return 0;
	}
	var_126_bool = var_22_string == "littlegirl_d";
	if(var_126_bool != 0) {
		var_21_int = 54;
		return 0;
	}
	var_128_bool = var_22_string == "unosha2";
	if(var_128_bool != 0) {
		var_21_int = 55;
		return 0;
	}
	var_130_bool = var_22_string == "unosha_d";
	if(var_130_bool != 0) {
		var_21_int = 56;
		return 0;
	}
	var_132_bool = var_22_string == "unosha2_d";
	if(var_132_bool != 0) {
		var_21_int = 57;
		return 0;
	}
	var_134_bool = var_22_string == "vaxxabit_d";
	if(var_134_bool != 0) {
		var_21_int = 58;
		return 0;
	}
	var_136_bool = var_22_string == "vaxxabitka_d";
	if(var_136_bool != 0) {
		var_21_int = 59;
		return 0;
	}
	var_138_bool = var_22_string == "wasted_male_d";
	if(var_138_bool != 0) {
		var_21_int = 60;
		return 0;
	}
	var_140_bool = var_22_string == "wasted_woman_d";
	if(var_140_bool != 0) {
		var_21_int = 61;
		return 0;
	}
	var_142_bool = var_22_string == "woman_d";
	if(var_142_bool != 0) {
		var_21_int = 62;
		return 0;
	}
	var_144_bool = var_22_string == "worker2";
	if(var_144_bool != 0) {
		var_21_int = 63;
		return 0;
	}
	var_146_bool = var_22_string == "worker_d";
	if(var_146_bool != 0) {
		var_21_int = 64;
		return 0;
	}
	var_148_bool = var_22_string == "worker2_d";
	if(var_148_bool != 0) {
		var_21_int = 65;
		return 0;
	}
	var_150_bool = var_22_string == "burah";
	if(var_150_bool != 0) {
		var_21_int = 66;
		return 0;
	}
	var_152_bool = var_22_string == "gorbun_daughter";
	if(var_152_bool != 0) {
		var_21_int = 67;
		return 0;
	}
	var_154_bool = var_22_string == "gorbun";
	if(var_154_bool != 0) {
		var_21_int = 68;
		return 0;
	}
	var_156_bool = var_22_string == "albinos";
	if(var_156_bool != 0) {
		var_21_int = 69;
		return 0;
	}
	var_158_bool = var_22_string == "aglaja";
	if(var_158_bool != 0) {
		var_21_int = 70;
		return 0;
	}
	var_160_bool = var_22_string == "nude";
	if(var_160_bool != 0) {
		var_21_int = 71;
		return 0;
	}
	var_162_bool = var_22_string == "block";
	if(var_162_bool != 0) {
		var_21_int = 72;
		return 0;
	}
	var_164_bool = var_22_string == "officer";
	if(var_164_bool != 0) {
		var_21_int = 73;
		return 0;
	}
	var_166_bool = var_22_string == "doberman";
	if(var_166_bool != 0) {
		var_21_int = 74;
		return 0;
	}
	var_168_bool = var_22_string == "grabitel";
	if(var_168_bool != 0) {
		var_21_int = 75;
		return 0;
	}
	var_170_bool = var_22_string == "gatherer_wife";
	if(var_170_bool != 0) {
		var_21_int = 76;
		return 0;
	}
	var_172_bool = var_22_string == "rat_prophet";
	if(var_172_bool != 0) {
		var_21_int = 77;
		return 0;
	}
	var_174_bool = var_22_string == "morlok";
	if(var_174_bool != 0) {
		var_21_int = 78;
		return 0;
	}
	var_176_bool = var_22_string == "soldier";
	if(var_176_bool != 0) {
		var_21_int = 79;
		return 0;
	}
	var_178_bool = var_22_string == "britva";
	if(var_178_bool != 0) {
		var_21_int = 80;
		return 0;
	}
	var_180_bool = var_22_string == "kabaktchik";
	if(var_180_bool != 0) {
		var_21_int = 81;
		return 0;
	}
	var_182_bool = var_22_string == "sanitar";
	if(var_182_bool != 0) {
		var_21_int = 82;
		return 0;
	}
	var_184_bool = var_22_string == "salesman";
	if(var_184_bool != 0) {
		var_21_int = 83;
		return 0;
	}
	var_186_bool = var_22_string == "ayyan";
	if(var_186_bool != 0) {
		var_21_int = 84;
		return 0;
	}
	var_188_bool = var_22_string == "petrbirdmask";
	if(var_188_bool != 0) {
		var_21_int = 85;
		return 0;
	}
	var_190_bool = var_22_string == "mogila";
	if(var_190_bool != 0) {
		var_21_int = 86;
		return 0;
	}
	var_192_bool = var_22_string == "klikusha";
	if(var_192_bool != 0) {
		var_21_int = 87;
		return 0;
	}
	var_194_bool = var_22_string == "karlik";
	if(var_194_bool != 0) {
		var_21_int = 88;
		return 0;
	}
	var_196_bool = var_22_string == "lisa";
	if(var_196_bool != 0) {
		var_21_int = 89;
		return 0;
	}
	var_21_int = -1;
	return 0;
}


func_6(var_383_float)
{
	var_387_int = 0; var_388_float = 0;
	var_383_float = var_388_float;
	func_2614(var_387_int, var_388_float);
	var_396_bool = 0; var_397_string = ""; var_398_string = "";
	func_1115(var_396_bool, "quest_b12_01", "init_hidden_room");
	return 0;
}


func_775(var_483_bool, var_484_int)
{
	var_485_int = 0; var_486_int = 0;
	var_487_string = ""; var_488_int = 0;
	var_484_int = var_488_int;
	func_757(var_486_int, var_487_string, var_488_int);
	GetVariable(var_487_string, var_486_int);
	var_490_int = var_486_int & (int)2;
	var_483_bool = var_490_int != (int)0;
	return 2;
}


func_2699(var_389_int, var_390_int, var_391_int, var_392_float)
{
	var_393_int = 0; var_394_int = 0;
	AddMessage(var_390_int, var_391_int, var_392_float, var_394_int);
	SendWorldWndMessage((int)6);
	var_394_int = var_389_int;
	return 2;
}


func_639(var_3_object)
{
	var_1013_int = 0; var_1014_object = Obj(); var_1015_int = 0; var_1016_object = Obj();
	EventDisable(26);
	Trace("Volonteers Cleanup...");
	var_1015_int = 0;
	
Label_645:
	var_1018_int = 0;
	func_729(var_1016_object, var_1018_int);
	var_1019_bool = var_1015_int < var_1018_int;
	if(var_1019_bool != 0) {
		@@@var_3_object:get(var_1016_object, var_1015_int);
		var_1020_bool = var_1016_object != 0; //@nn
		if(var_1020_bool != 0) {
			@@var_1016_object:Remove();
		}
		var_1016_object = 0;
		var_1015_int = var_1015_int + (int)1;
		goto Label_645;
	}
	return 4;
}


func_17()
{
	func_2645();
	return 0;
}


func_787(var_947_bool, var_948_int)
{
	var_949_int = 0; var_950_int = 0;
	var_951_string = ""; var_952_int = 0;
	var_948_int = var_952_int;
	func_757(var_950_int, var_951_string, var_952_int);
	GetVariable(var_951_string, var_950_int);
	var_954_int = var_950_int & (int)1;
	var_947_bool = var_954_int == (int)0;
	return 2;
}


func_915(var_4_object, var_856_int)
{
	var_857_int = 0; var_858_object = Obj(); var_859_int = 0; var_860_int = 0; var_861_string = ""; var_862_int = 0; var_863_object = Obj(); var_864_int = 0; var_865_int = 0; var_866_string = "";
	var_867_string = ""; var_868_int = 0;
	var_856_int = var_868_int;
	func_757(var_866_string, var_867_string, var_868_int);
	GetVariable(var_867_string, var_862_int);
	var_869_string = ""; var_870_int = 0;
	var_856_int = var_870_int;
	func_757(var_866_string, var_869_string, var_870_int);
	var_872_int = var_862_int | (int)32;
	var_874_int = var_872_int - (int)32;
	SetVariable(var_869_string, var_874_int);
	@@@var_4_object:get(var_863_object, var_856_int);
	@@var_863_object:size(var_864_int);
	var_865_int = 0;
	
Label_937:
	var_875_bool = var_865_int < var_864_int;
	if(var_875_bool != 0) {
		@@var_863_object:get(var_866_string, var_865_int);
		var_876_string = ""; var_877_int = 0;
		var_866_string = var_876_string;
		func_2707(var_876_string, (int)1);
		var_865_int = var_865_int + (int)1;
		goto Label_937;
	}
	return 10;
}
EMIT "Stack[-4] = 0";


func_21()
{
	func_2632();
	return 0;
}


func_661(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_int = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; var_27_object = Obj();
	Trace("Volonteers Init...");
	CreateIntVector(var_20_object);
	CreateObjectVector(var_21_object);
	CreateStringVector(var_22_object);
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj();
	var_20_object = var_29_object;
	var_21_object = var_30_object;
	var_22_object = var_31_object;
	func_2169(var_29_object, var_30_object, var_31_object);
	var_0_object = var_20_object;
	var_4_object = var_21_object;
	var_5_object = var_22_object;
	CreateObjectVector(var_23_object);
	CreateObjectVector(var_24_object);
	var_158_object = Obj(); var_159_object = Obj();
	var_23_object = var_158_object;
	var_24_object = var_159_object;
	func_33(var_158_object, var_159_object);
	var_1_object = var_23_object;
	var_2_object = var_24_object;
	CreateObjectVector(var_25_object);
	var_3_object = var_25_object;
	
Label_695:
	var_213_int = 0;
	func_729(var_27_object, var_213_int);
	var_216_bool = (int)0 < var_213_int;
	if(var_216_bool != 0) {
		var_217_string = ""; var_218_int = 0;
		var_26_int = var_218_int;
		func_757(var_27_object, var_217_string, var_218_int);
		SetVariable(var_217_string, (int)0);
		@@@var_3_object:add(Obj());
		var_27_object = 0;
		var_26_int = var_26_int + (int)1;
		goto Label_695;
	}
	var_6_int = 0;
	var_224_string = "Volonteers count: ";
	var_225_int = 0;
	func_729(var_224_string, var_225_int);
	var_226_int = var_224_string + var_225_int;
	Trace(var_226_int);
	return 16;
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";


func_2071(var_166_object, var_167_bool, var_168_int)
{
	@@var_166_object:add((int)18);
	@@var_166_object:add((int)24);
	@@var_166_object:add((int)20);
	@@var_166_object:add((int)14);
	var_174_bool = var_167_bool == (bool)0;
	if(var_174_bool != 0) {
		@@var_166_object:add((int)10);
		@@var_166_object:add((int)17);
		@@var_166_object:add((int)8);
	} else {
		var_179_bool = var_168_int != (int)1;
		if(var_179_bool == 0) goto Label_2103;
		@@var_166_object:add((int)10);
	}
Label_2103:
	return 0;
	
}


func_2838(var_263_bool)
{
	var_264_int = 0; var_265_int = 0;
	var_266_bool = 0;
	func_2800(var_266_bool);
	if(var_266_bool != 0) {
		(int)0 = (int)0 + (int)1;
	}
	var_311_bool = 0;
	func_2762(var_311_bool);
	if(var_311_bool != 0) {
		var_265_int = var_265_int + (int)1;
	}
	var_343_bool = 0;
	func_2724(var_343_bool);
	if(var_343_bool != 0) {
		var_265_int = var_265_int + (int)1;
	}
	var_263_bool = var_265_int >= (int)2;
	return 2;
}


func_25()
{
	return 0;
}


func_26(var_492_bool, var_493_int)
{
	var_498_bool = 0; var_499_int = 0;
	var_493_int = var_499_int;
	func_2033(var_498_bool, var_499_int);
	var_498_bool = var_492_bool;
	return 0;
}


func_2707(var_240_string, var_241_int)
{
	var_242_object = Obj(); var_243_object = Obj();
	FindActor(var_243_object, var_240_string);
	var_244_bool = var_243_object == 0; //@nz
	if(var_244_bool != 0) {
		var_246_int = "Door " + var_240_string;
		var_248_int = var_246_int + " not found";
		Trace(var_248_int);
	} else {
		@@var_243_object:SetProperty("dlocked", var_241_int);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_799(var_880_bool, var_881_int)
{
	var_882_int = 0; var_883_int = 0;
	var_884_string = ""; var_885_int = 0;
	var_881_int = var_885_int;
	func_757(var_883_int, var_884_string, var_885_int);
	GetVariable(var_884_string, var_883_int);
	var_887_int = var_883_int & (int)4;
	var_880_bool = var_887_int != (int)0;
	return 2;
}


func_33(var_158_object, var_159_object)
{
	var_160_object = Obj(); var_161_object = Obj(); var_162_int = 0; var_163_object = Obj(); var_164_object = Obj(); var_165_int = 0;
	CreateIntVector(var_163_object);
	var_166_object = Obj(); var_167_bool = 0; var_168_int = 0;
	var_163_object = var_166_object;
	func_2071(var_166_object, (bool)1, (int)1);
	CreateIntVector(var_164_object);
	var_181_object = Obj(); var_182_bool = 0; var_183_int = 0;
	var_164_object = var_181_object;
	func_2104(var_181_object, (bool)1, (int)1);
	var_196_object = Obj(); var_197_bool = 0; var_198_int = 0;
	var_164_object = var_196_object;
	func_2137((bool)1, (int)1);
	var_165_int = 0;
	
Label_57:
	var_211_bool = var_165_int < (int)12;
	if(var_211_bool != 0) {
		@@var_158_object:add(var_163_object);
		@@var_159_object:add(var_164_object);
		var_165_int = var_165_int + (int)1;
		goto Label_57;
	}
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2594(var_300_bool, var_301_int)
{
	var_302_int = 0; var_303_int = 0;
	var_305_int = "vol_" + var_301_int;
	GetVariable(var_305_int, var_303_int);
	var_307_int = var_303_int & (int)4;
	var_300_bool = var_307_int != (int)0;
	return 2;
}


func_2724(var_343_bool)
{
	var_344_object = Obj(); var_345_int = 0; var_346_int = 0; var_347_int = 0; var_348_object = Obj(); var_349_int = 0; var_350_int = 0; var_351_int = 0;
	CreateIntVector(var_348_object);
	var_352_object = Obj(); var_353_bool = 0; var_354_int = 0;
	var_348_object = var_352_object;
	func_2071(var_352_object, (bool)0, (int)-1);
	@@var_348_object:size(var_349_int);
	var_350_int = 0;
	
Label_2736:
	var_367_bool = var_350_int < var_349_int;
	if(var_367_bool != 0) {
		@@var_348_object:get(var_351_int, var_350_int);
		var_368_bool = 0;
		var_368_bool = 1;
		var_369_bool = 0; var_370_int = 0;
		var_351_int = var_370_int;
		func_2604(var_369_bool, var_370_int);
		if(var_369_bool != 1) {
			var_371_bool = 0; var_372_int = 0;
			var_351_int = var_372_int;
			func_2594(var_371_bool, var_372_int);
			if(var_371_bool != 1) {
				var_368_bool = 0;
			}
		}
		if(var_368_bool != 0) {
			var_343_bool = 0;
			var_350_int = var_350_int + (int)1;
			goto Label_2736;
		}
		return 8;
	}
	var_343_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1063(var_5_object, var_543_object, var_544_int)
{
	var_545_string = ""; var_546_object = Obj(); var_547_object = Obj(); var_548_string = ""; var_549_object = Obj(); var_550_object = Obj();
	@@@var_5_object:get(var_548_string, var_544_int);
	var_552_bool = var_548_string == "outdoor";
	if(var_552_bool != 0) {
		GetMainOutdoorScene(var_549_object);
		var_549_object = var_543_object;
		return 6;
	EMIT "Stack[-2] = 0";
	}
	GetSceneByName(var_550_object, var_548_string);
	var_550_object = var_543_object;
	return 6;
}
EMIT "Stack[-1] = 0";


func_811(var_3_object, var_4_object, var_759_int)
{
	var_764_int = 0; var_765_object = Obj(); var_766_object = Obj(); var_767_string = ""; var_768_object = Obj(); var_769_int = 0; var_770_int = 0; var_771_string = ""; var_772_int = 0; var_773_object = Obj(); var_774_object = Obj(); var_775_string = ""; var_776_object = Obj(); var_777_int = 0; var_778_int = 0; var_779_string = "";
	var_780_string = ""; var_781_int = 0;
	var_759_int = var_781_int;
	func_757(var_779_string, var_780_string, var_781_int);
	GetVariable(var_780_string, var_772_int);
	var_782_string = ""; var_783_int = 0;
	var_759_int = var_783_int;
	func_757(var_779_string, var_782_string, var_783_int);
	var_785_int = var_772_int & (int)8;
	var_787_int = var_785_int | (int)5;
	SetVariable(var_782_string, var_787_int);
	@@@var_3_object:get(var_773_object, var_759_int);
	var_788_bool = var_773_object == 0; //@ne
	if(var_788_bool != 0) {
		var_789_object = Obj(); var_790_int = 0;
		var_759_int = var_790_int;
		func_1063(var_779_string, var_789_object, var_790_int);
		var_789_object = var_774_object;
		var_791_string = ""; var_792_int = 0;
		var_793_int = 0; var_794_int = 0;
		var_759_int = var_794_int;
		func_752(var_792_int, var_793_int, var_794_int);
		var_793_int = var_792_int;
		func_1595(var_791_string, var_792_int);
		var_791_string = var_775_string;
		var_795_object = Obj(); var_796_object = Obj(); var_797_string = ""; var_798_string = ""; var_799_string = "";
		var_774_object = var_796_object;
		var_797_string = "pt_volonteer_" + var_775_string;
		var_802_int = "vbirdmask_" + var_775_string;
		var_799_string = var_802_int + ".xml";
		func_1097(var_795_object, var_796_object, var_797_string, "pers_birdmask", var_799_string);
		var_795_object = var_773_object;
		@@@var_3_object:set(var_759_int, var_773_object);
		var_774_object = 0;
	}
	@@@var_4_object:get(var_776_object, var_759_int);
	@@var_776_object:size(var_777_int);
	var_778_int = 0;
	
Label_866:
	var_804_bool = var_778_int < var_777_int;
	if(var_804_bool != 0) {
		@@var_776_object:get(var_779_string, var_778_int);
		var_805_string = ""; var_806_int = 0;
		var_779_string = var_805_string;
		func_2707(var_805_string, (int)1);
		var_778_int = var_778_int + (int)1;
		goto Label_866;
	}
	return 16;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


func_2604(var_291_bool, var_292_int)
{
	var_293_int = 0; var_294_int = 0;
	var_296_int = "vol_" + var_292_int;
	GetVariable(var_296_int, var_294_int);
	var_298_int = var_294_int & (int)16;
	var_291_bool = var_298_int != (int)0;
	return 2;
}


func_433(var_4_object, var_6_int)
{
	var_810_int = 0; var_811_int = 0; var_812_object = Obj(); var_813_int = 0; var_814_int = 0; var_815_string = ""; var_816_int = 0; var_817_int = 0; var_818_int = 0; var_819_int = 0; var_820_int = 0; var_821_int = 0; var_822_int = 0; var_823_int = 0; var_824_object = Obj(); var_825_int = 0; var_826_int = 0; var_827_string = ""; var_828_int = 0; var_829_int = 0; var_830_int = 0; var_831_int = 0; var_832_int = 0; var_833_int = 0;
	Trace((int)1);
	
Label_438:
	var_835_int = 0;
	func_729(var_833_int, var_835_int);
	var_836_bool = (int)0 < var_835_int;
	if(var_836_bool != 0) {
		Trace((int)2);
		var_838_int = 0; var_839_int = 0;
		var_822_int = var_839_int;
		func_752(var_833_int, var_838_int, var_839_int);
		var_838_int = var_823_int;
		Trace((int)3);
		var_841_bool = 0; var_842_int = 0;
		var_822_int = var_842_int;
		func_775(var_841_bool, var_842_int);
		if(var_841_bool != 0) {
			Trace((int)4);
			var_844_int = 0;
			var_822_int = var_844_int;
			func_811(var_832_int, var_833_int, var_844_int);
		}
		Trace((int)5);
		var_846_bool = 0; var_847_int = 0;
		var_822_int = var_847_int;
		func_763(var_846_bool, var_847_int);
		if(var_846_bool != 0) {
			Trace((int)6);
			var_856_int = 0;
			var_822_int = var_856_int;
			func_915(var_833_int, var_856_int);
		}
		Trace((int)7);
		var_880_bool = 0; var_881_int = 0;
		var_822_int = var_881_int;
		func_799(var_880_bool, var_881_int);
		if(var_880_bool != 0) {
			Trace((int)8);
			@@@var_4_object:get(var_824_object, var_822_int);
			Trace((int)9);
			@@var_824_object:size(var_825_int);
			Trace((int)10);
			var_826_int = 0;

		Label_503:
			var_892_bool = var_826_int < var_825_int;
			if(var_892_bool != 0) {
				Trace((int)11);
				@@var_824_object:get(var_827_string, var_826_int);
				var_894_string = ""; var_895_int = 0;
				var_827_string = var_894_string;
				func_2707(var_894_string, (int)1);
				var_826_int = var_826_int + (int)1;
				goto Label_503;
			}
			Trace((int)12);
			var_824_object = 0;
		}
		Trace((int)13);
		var_822_int = var_822_int + (int)1;
		goto Label_438;
	}
	Trace((int)14);
	var_6_int = var_6_int + (int)1;
	var_902_int = 0; var_903_int = 0; var_904_int = 0;
	var_905_int = 0; var_906_int = 0;
	var_906_int = var_6_int;
	func_70(var_905_int, var_906_int);
	var_905_int = var_902_int;
	var_912_int = 0; var_913_int = 0;
	var_913_int = var_6_int;
	func_85(var_912_int, var_913_int);
	var_912_int = var_903_int;
	var_904_int = var_6_int;
	func_359(var_902_int, var_903_int, var_904_int);
	Trace((int)15);
	
Label_552:
	var_975_int = 0;
	func_729(var_833_int, var_975_int);
	var_976_bool = (int)0 < var_975_int;
	if(var_976_bool != 0) {
		Trace((int)16);
		var_978_int = 0; var_979_int = 0;
		var_829_int = var_979_int;
		func_752(var_833_int, var_978_int, var_979_int);
		var_978_int = var_830_int;
		Trace((int)17);
		var_981_bool = 0; var_982_int = 0;
		var_829_int = var_982_int;
		func_775(var_981_bool, var_982_int);
		if(var_981_bool != 0) {
			Trace((int)18);
			var_985_string = ""; var_986_int = 0;
			var_830_int = var_986_int;
			func_1595(var_985_string, var_986_int);
			var_987_int = "Volonteer : " + var_985_string;
			Trace(var_987_int);
			(int)0 = (int)0 + (int)1;
		}
		var_829_int = var_829_int + (int)1;
		goto Label_552;
	}
	Trace((int)19);
	
Label_594:
	var_991_int = 0;
	func_729(var_833_int, var_991_int);
	var_992_bool = (int)0 < var_991_int;
	if(var_992_bool != 0) {
		Trace((int)20);
		var_994_int = 0; var_995_int = 0;
		var_832_int = var_995_int;
		func_752(var_833_int, var_994_int, var_995_int);
		var_994_int = var_833_int;
		var_996_bool = 0; var_997_int = 0;
		var_832_int = var_997_int;
		func_799(var_996_bool, var_997_int);
		if(var_996_bool != 0) {
			Trace((int)21);
			(int)0 = (int)0 + (int)1;
			var_1001_string = ""; var_1002_int = 0;
			var_833_int = var_1002_int;
			func_1595(var_1001_string, var_1002_int);
			var_1003_int = "Diseased volonteer : " + var_1001_string;
			Trace(var_1003_int);
		}
		var_832_int = var_832_int + (int)1;
		goto Label_594;
	}
	Trace((int)22);
	var_1007_int = "Today volonteers: " + var_828_int;
	var_1009_int = var_1007_int + ", diseased: ";
	var_1010_int = var_1009_int + var_831_int;
	Trace(var_1010_int);
	return 24;
}


func_2614(var_387_int, var_388_float)
{
	var_389_int = 0; var_390_int = 0; var_391_int = 0; var_392_float = 0;
	var_388_float = var_392_float;
	func_2699(var_389_int, (int)522709, (int)522708, var_392_float);
	var_389_int = var_387_int;
	return 0;
}


func_951(var_3_object, var_4_object, var_18_int)
{
	var_207_int = 0; var_208_object = Obj(); var_209_object = Obj(); var_210_int = 0; var_211_int = 0; var_212_string = ""; var_213_int = 0; var_214_object = Obj(); var_215_object = Obj(); var_216_int = 0; var_217_int = 0; var_218_string = "";
	var_219_string = ""; var_220_int = 0;
	var_18_int = var_220_int;
	func_757(var_218_string, var_219_string, var_220_int);
	GetVariable(var_219_string, var_213_int);
	var_224_string = ""; var_225_int = 0;
	var_18_int = var_225_int;
	func_757(var_218_string, var_224_string, var_225_int);
	var_227_int = var_213_int | (int)4;
	var_229_int = var_227_int | (int)1;
	var_231_int = var_229_int | (int)2;
	var_233_int = var_231_int - (int)4;
	var_235_int = var_233_int - (int)1;
	var_237_int = var_235_int - (int)2;
	SetVariable(var_224_string, var_237_int);
	@@@var_3_object:get(var_214_object, var_18_int);
	var_238_bool = var_214_object != 0; //@nn
	if(var_238_bool != 0) {
		@@var_214_object:Remove();
	}
	@@@var_4_object:get(var_215_object, var_18_int);
	@@var_215_object:size(var_216_int);
	var_217_int = 0;
	
Label_987:
	var_239_bool = var_217_int < var_216_int;
	if(var_239_bool != 0) {
		@@var_215_object:get(var_218_string, var_217_int);
		var_240_string = ""; var_241_int = 0;
		var_218_string = var_240_string;
		func_2707(var_240_string, (int)0);
		var_217_int = var_217_int + (int)1;
		goto Label_987;
	}
	return 12;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


func_2104(var_181_object, var_182_bool, var_183_int)
{
	@@var_181_object:add((int)6);
	@@var_181_object:add((int)26);
	@@var_181_object:add((int)2);
	@@var_181_object:add((int)22);
	var_189_bool = var_182_bool == (bool)0;
	if(var_189_bool != 0) {
		@@var_181_object:add((int)15);
		@@var_181_object:add((int)5);
		@@var_181_object:add((int)16);
	} else {
		var_194_bool = var_183_int != (int)0;
		if(var_194_bool == 0) goto Label_2136;
		@@var_181_object:add((int)15);
	}
Label_2136:
	return 0;
	
}


func_1079(var_956_int)
{
	var_957_int = 0; var_958_int = 0;
	var_959_string = ""; var_960_int = 0;
	var_956_int = var_960_int;
	func_757(var_958_int, var_959_string, var_960_int);
	GetVariable(var_959_string, var_958_int);
	var_961_string = ""; var_962_int = 0;
	var_956_int = var_962_int;
	func_757(var_958_int, var_961_string, var_962_int);
	var_964_int = var_958_int & (int)8;
	var_966_int = var_964_int | (int)3;
	SetVariable(var_961_string, var_966_int);
	return 2;
}


func_1595(var_553_string, var_554_int)
{
	var_558_bool = var_554_int == (int)1;
	if(var_558_bool != 0) {
		var_553_string = "alexandr";
		return 0;
	}
	var_560_bool = var_554_int == (int)2;
	if(var_560_bool != 0) {
		var_553_string = "andrei";
		return 0;
	}
	var_562_bool = var_554_int == (int)3;
	if(var_562_bool != 0) {
		var_553_string = "anna";
		return 0;
	}
	var_564_bool = var_554_int == (int)4;
	if(var_564_bool != 0) {
		var_553_string = "bigvlad";
		return 0;
	}
	var_566_bool = var_554_int == (int)5;
	if(var_566_bool != 0) {
		var_553_string = "eva";
		return 0;
	}
	var_568_bool = var_554_int == (int)6;
	if(var_568_bool != 0) {
		var_553_string = "georg";
		return 0;
	}
	var_570_bool = var_554_int == (int)7;
	if(var_570_bool != 0) {
		var_553_string = "grif";
		return 0;
	}
	var_572_bool = var_554_int == (int)8;
	if(var_572_bool != 0) {
		var_553_string = "han";
		return 0;
	}
	var_574_bool = var_554_int == (int)9;
	if(var_574_bool != 0) {
		var_553_string = "julia";
		return 0;
	}
	var_576_bool = var_554_int == (int)10;
	if(var_576_bool != 0) {
		var_553_string = "kapella";
		return 0;
	}
	var_578_bool = var_554_int == (int)11;
	if(var_578_bool != 0) {
		var_553_string = "katerina";
		return 0;
	}
	var_580_bool = var_554_int == (int)12;
	if(var_580_bool != 0) {
		var_553_string = "klara";
		return 0;
	}
	var_582_bool = var_554_int == (int)13;
	if(var_582_bool != 0) {
		var_553_string = "lara";
		return 0;
	}
	var_584_bool = var_554_int == (int)14;
	if(var_584_bool != 0) {
		var_553_string = "laska";
		return 0;
	}
	var_586_bool = var_554_int == (int)15;
	if(var_586_bool != 0) {
		var_553_string = "maria";
		return 0;
	}
	var_588_bool = var_554_int == (int)16;
	if(var_588_bool != 0) {
		var_553_string = "mark";
		return 0;
	}
	var_590_bool = var_554_int == (int)17;
	if(var_590_bool != 0) {
		var_553_string = "mat";
		return 0;
	}
	var_592_bool = var_554_int == (int)18;
	if(var_592_bool != 0) {
		var_553_string = "mishka";
		return 0;
	}
	var_594_bool = var_554_int == (int)19;
	if(var_594_bool != 0) {
		var_553_string = "mladvlad";
		return 0;
	}
	var_596_bool = var_554_int == (int)20;
	if(var_596_bool != 0) {
		var_553_string = "notkin";
		return 0;
	}
	var_598_bool = var_554_int == (int)21;
	if(var_598_bool != 0) {
		var_553_string = "ospina";
		return 0;
	}
	var_600_bool = var_554_int == (int)22;
	if(var_600_bool != 0) {
		var_553_string = "petr";
		return 0;
	}
	var_602_bool = var_554_int == (int)23;
	if(var_602_bool != 0) {
		var_553_string = "rubin";
		return 0;
	}
	var_604_bool = var_554_int == (int)24;
	if(var_604_bool != 0) {
		var_553_string = "spi4ka";
		return 0;
	}
	var_606_bool = var_554_int == (int)25;
	if(var_606_bool != 0) {
		var_553_string = "starshina";
		return 0;
	}
	var_608_bool = var_554_int == (int)26;
	if(var_608_bool != 0) {
		var_553_string = "viktor";
		return 0;
	}
	var_610_bool = var_554_int == (int)27;
	if(var_610_bool != 0) {
		var_553_string = "wasted_woman";
		return 0;
	}
	var_612_bool = var_554_int == (int)28;
	if(var_612_bool != 0) {
		var_553_string = "wasted_male";
		return 0;
	}
	var_614_bool = var_554_int == (int)29;
	if(var_614_bool != 0) {
		var_553_string = "alkash";
		return 0;
	}
	var_616_bool = var_554_int == (int)30;
	if(var_616_bool != 0) {
		var_553_string = "boy";
		return 0;
	}
	var_618_bool = var_554_int == (int)31;
	if(var_618_bool != 0) {
		var_553_string = "girl";
		return 0;
	}
	var_620_bool = var_554_int == (int)32;
	if(var_620_bool != 0) {
		var_553_string = "littleboy";
		return 0;
	}
	var_622_bool = var_554_int == (int)33;
	if(var_622_bool != 0) {
		var_553_string = "littlegirl";
		return 0;
	}
	var_624_bool = var_554_int == (int)34;
	if(var_624_bool != 0) {
		var_553_string = "butcher";
		return 0;
	}
	var_626_bool = var_554_int == (int)35;
	if(var_626_bool != 0) {
		var_553_string = "dohodyaga";
		return 0;
	}
	var_628_bool = var_554_int == (int)36;
	if(var_628_bool != 0) {
		var_553_string = "unosha";
		return 0;
	}
	var_630_bool = var_554_int == (int)37;
	if(var_630_bool != 0) {
		var_553_string = "vaxxabit";
		return 0;
	}
	var_632_bool = var_554_int == (int)38;
	if(var_632_bool != 0) {
		var_553_string = "vaxxabitka";
		return 0;
	}
	var_634_bool = var_554_int == (int)39;
	if(var_634_bool != 0) {
		var_553_string = "woman";
		return 0;
	}
	var_636_bool = var_554_int == (int)40;
	if(var_636_bool != 0) {
		var_553_string = "worker";
		return 0;
	}
	var_638_bool = var_554_int == (int)42;
	if(var_638_bool != 0) {
		var_553_string = "whitemask";
		return 0;
	}
	var_640_bool = var_554_int == (int)43;
	if(var_640_bool != 0) {
		var_553_string = "birdmask";
		return 0;
	}
	var_642_bool = var_554_int == (int)44;
	if(var_642_bool != 0) {
		var_553_string = "birdmask";
		return 0;
	}
	var_644_bool = var_554_int == (int)46;
	if(var_644_bool != 0) {
		var_553_string = "patrol";
		return 0;
	}
	var_646_bool = var_554_int == (int)47;
	if(var_646_bool != 0) {
		var_553_string = "danko";
		return 0;
	}
	var_648_bool = var_554_int == (int)48;
	if(var_648_bool != 0) {
		var_553_string = "alkash_d";
		return 0;
	}
	var_650_bool = var_554_int == (int)49;
	if(var_650_bool != 0) {
		var_553_string = "boy_d";
		return 0;
	}
	var_652_bool = var_554_int == (int)50;
	if(var_652_bool != 0) {
		var_553_string = "butcher_d";
		return 0;
	}
	var_654_bool = var_554_int == (int)51;
	if(var_654_bool != 0) {
		var_553_string = "dohodyaga_d";
		return 0;
	}
	var_656_bool = var_554_int == (int)52;
	if(var_656_bool != 0) {
		var_553_string = "girl_d";
		return 0;
	}
	var_658_bool = var_554_int == (int)53;
	if(var_658_bool != 0) {
		var_553_string = "littleboy_d";
		return 0;
	}
	var_660_bool = var_554_int == (int)54;
	if(var_660_bool != 0) {
		var_553_string = "littlegirl_d";
		return 0;
	}
	var_662_bool = var_554_int == (int)55;
	if(var_662_bool != 0) {
		var_553_string = "unosha2";
		return 0;
	}
	var_664_bool = var_554_int == (int)56;
	if(var_664_bool != 0) {
		var_553_string = "unosha_d";
		return 0;
	}
	var_666_bool = var_554_int == (int)57;
	if(var_666_bool != 0) {
		var_553_string = "unosha2_d";
		return 0;
	}
	var_668_bool = var_554_int == (int)58;
	if(var_668_bool != 0) {
		var_553_string = "vaxxabit_d";
		return 0;
	}
	var_670_bool = var_554_int == (int)59;
	if(var_670_bool != 0) {
		var_553_string = "vaxxabitka_d";
		return 0;
	}
	var_672_bool = var_554_int == (int)60;
	if(var_672_bool != 0) {
		var_553_string = "wasted_male_d";
		return 0;
	}
	var_674_bool = var_554_int == (int)61;
	if(var_674_bool != 0) {
		var_553_string = "wasted_woman_d";
		return 0;
	}
	var_676_bool = var_554_int == (int)62;
	if(var_676_bool != 0) {
		var_553_string = "woman_d";
		return 0;
	}
	var_678_bool = var_554_int == (int)63;
	if(var_678_bool != 0) {
		var_553_string = "worker2";
		return 0;
	}
	var_680_bool = var_554_int == (int)64;
	if(var_680_bool != 0) {
		var_553_string = "worker_d";
		return 0;
	}
	var_682_bool = var_554_int == (int)65;
	if(var_682_bool != 0) {
		var_553_string = "worker2_d";
		return 0;
	}
	var_684_bool = var_554_int == (int)66;
	if(var_684_bool != 0) {
		var_553_string = "burah";
		return 0;
	}
	var_686_bool = var_554_int == (int)67;
	if(var_686_bool != 0) {
		var_553_string = "gorbun_daughter";
		return 0;
	}
	var_688_bool = var_554_int == (int)68;
	if(var_688_bool != 0) {
		var_553_string = "gorbun";
		return 0;
	}
	var_690_bool = var_554_int == (int)69;
	if(var_690_bool != 0) {
		var_553_string = "albinos";
		return 0;
	}
	var_692_bool = var_554_int == (int)70;
	if(var_692_bool != 0) {
		var_553_string = "aglaja";
		return 0;
	}
	var_694_bool = var_554_int == (int)71;
	if(var_694_bool != 0) {
		var_553_string = "nude";
		return 0;
	}
	var_696_bool = var_554_int == (int)72;
	if(var_696_bool != 0) {
		var_553_string = "block";
		return 0;
	}
	var_698_bool = var_554_int == (int)73;
	if(var_698_bool != 0) {
		var_553_string = "officer";
		return 0;
	}
	var_700_bool = var_554_int == (int)74;
	if(var_700_bool != 0) {
		var_553_string = "doberman";
		return 0;
	}
	var_702_bool = var_554_int == (int)75;
	if(var_702_bool != 0) {
		var_553_string = "grabitel";
		return 0;
	}
	var_704_bool = var_554_int == (int)76;
	if(var_704_bool != 0) {
		var_553_string = "gatherer_wife";
		return 0;
	}
	var_706_bool = var_554_int == (int)77;
	if(var_706_bool != 0) {
		var_553_string = "rat_prophet";
		return 0;
	}
	var_708_bool = var_554_int == (int)78;
	if(var_708_bool != 0) {
		var_553_string = "morlok";
		return 0;
	}
	var_710_bool = var_554_int == (int)79;
	if(var_710_bool != 0) {
		var_553_string = "soldier";
		return 0;
	}
	var_712_bool = var_554_int == (int)80;
	if(var_712_bool != 0) {
		var_553_string = "britva";
		return 0;
	}
	var_714_bool = var_554_int == (int)81;
	if(var_714_bool != 0) {
		var_553_string = "kabaktchik";
		return 0;
	}
	var_716_bool = var_554_int == (int)82;
	if(var_716_bool != 0) {
		var_553_string = "sanitar";
		return 0;
	}
	var_718_bool = var_554_int == (int)83;
	if(var_718_bool != 0) {
		var_553_string = "salesman";
		return 0;
	}
	var_720_bool = var_554_int == (int)84;
	if(var_720_bool != 0) {
		var_553_string = "ayyan";
		return 0;
	}
	var_722_bool = var_554_int == (int)85;
	if(var_722_bool != 0) {
		var_553_string = "petrbirdmask";
		return 0;
	}
	var_724_bool = var_554_int == (int)86;
	if(var_724_bool != 0) {
		var_553_string = "mogila";
		return 0;
	}
	var_726_bool = var_554_int == (int)87;
	if(var_726_bool != 0) {
		var_553_string = "klikusha";
		return 0;
	}
	var_728_bool = var_554_int == (int)88;
	if(var_728_bool != 0) {
		var_553_string = "karlik";
		return 0;
	}
	var_730_bool = var_554_int == (int)89;
	if(var_730_bool != 0) {
		var_553_string = "lisa";
		return 0;
	}
	var_553_string = "";
	return 0;
}


func_2623(var_1032_int, var_1033_float)
{
	var_1034_int = 0; var_1035_int = 0; var_1036_int = 0; var_1037_float = 0;
	var_1033_float = var_1037_float;
	func_2699(var_1034_int, (int)522711, (int)522710, var_1037_float);
	var_1034_int = var_1032_int;
	return 0;
}


func_70(var_905_int, var_906_int)
{
	var_907_bool = 0;
	var_907_bool = 1;
	var_909_bool = var_906_int < (int)1;
	if(var_909_bool != 1) {
		var_911_bool = var_906_int >= (int)11;
		if(var_911_bool != 1) {
			var_907_bool = 0;
		}
	}
	if(var_907_bool != 0) {
		var_905_int = 0;
		return 0;
	}
	var_905_int = 1;
	return 0;
}


func_2632()
{
	var_408_object = Obj(); var_409_object = Obj();
	CreateDiaryEntry(var_409_object, (int)697, (int)1, (int)535405);
	var_413_bool = 0; var_414_object = Obj(); var_415_int = 0;
	var_409_object = var_414_object;
	func_2671(var_413_bool, var_414_object, (int)695);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1097(var_731_object, var_732_object, var_733_string, var_734_string, var_735_string)
{
	var_740_bool = 0; var_741_cvector = CVector(0,0,0); var_742_cvector = CVector(0,0,0); var_743_object = Obj(); var_744_bool = 0; var_745_cvector = CVector(0,0,0); var_746_cvector = CVector(0,0,0); var_747_object = Obj();
	@@var_732_object:GetLocator(var_733_string, var_744_bool, var_745_cvector, var_746_cvector);
	var_748_bool = var_744_bool == 0; //@nz
	if(var_748_bool != 0) {
		var_750_int = "Locator " + var_733_string;
		var_752_int = var_750_int + " doesn't exist";
		Trace(var_752_int);
	} else {
		@@var_732_object:AddStationaryActor(Obj(), var_745_cvector, var_746_cvector, var_734_string, var_735_string);
	}
	var_747_object = var_731_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_2762(var_311_bool)
{
	var_312_object = Obj(); var_313_int = 0; var_314_int = 0; var_315_int = 0; var_316_object = Obj(); var_317_int = 0; var_318_int = 0; var_319_int = 0;
	CreateIntVector(var_316_object);
	var_320_object = Obj(); var_321_bool = 0; var_322_int = 0;
	var_316_object = var_320_object;
	func_2104(var_320_object, (bool)0, (int)-1);
	@@var_316_object:size(var_317_int);
	var_318_int = 0;
	
Label_2774:
	var_335_bool = var_318_int < var_317_int;
	if(var_335_bool != 0) {
		@@var_316_object:get(var_319_int, var_318_int);
		var_336_bool = 0;
		var_336_bool = 1;
		var_337_bool = 0; var_338_int = 0;
		var_319_int = var_338_int;
		func_2604(var_337_bool, var_338_int);
		if(var_337_bool != 1) {
			var_339_bool = 0; var_340_int = 0;
			var_319_int = var_340_int;
			func_2594(var_339_bool, var_340_int);
			if(var_339_bool != 1) {
				var_336_bool = 0;
			}
		}
		if(var_336_bool != 0) {
			var_311_bool = 0;
			var_318_int = var_318_int + (int)1;
			goto Label_2774;
		}
		return 8;
	}
	var_311_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2645()
{
	var_443_object = Obj(); var_444_object = Obj();
	CreateDiaryEntry(var_444_object, (int)698, (int)1, (int)535406);
	var_448_bool = 0; var_449_object = Obj(); var_450_int = 0;
	var_444_object = var_449_object;
	func_2671(var_448_bool, var_449_object, (int)696);
	return 2;
}
EMIT "Stack[-1] = 0";


func_85(var_912_int, var_913_int)
{
	var_915_bool = var_913_int < (int)5;
	if(var_915_bool != 0) {
		var_912_int = 0;
		return 0;
	}
	var_912_int = 1;
	return 0;
}


func_2137(var_196_object, var_197_bool)
{
	@@var_196_object:add((int)7);
	@@var_196_object:add((int)23);
	@@var_196_object:add((int)21);
	@@var_196_object:add((int)9);
	@@var_196_object:add((int)3);
	@@var_196_object:add((int)1);
	@@var_196_object:add((int)11);
	@@var_196_object:add((int)13);
	var_208_bool = var_197_bool == (bool)0;
	if(var_208_bool != 0) {
		@@var_196_object:add((int)25);
	}
	return 0;
}


func_729(var_0_object, var_213_int)
{
	var_214_int = 0; var_215_int = 0;
	@@@var_0_object:size(var_215_int);
	var_215_int = var_213_int;
	return 2;
}


func_1115(var_396_bool, var_397_string, var_398_string)
{
	var_399_object = Obj(); var_400_object = Obj();
	FindActor(var_400_object, var_397_string);
	var_401_bool = var_400_object == 0; //@ne
	if(var_401_bool != 0) {
		var_396_bool = 0;
		return 2;
	}
	Trigger(var_400_object, var_398_string);
	var_396_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_734(var_0_object, var_19_int, var_20_int)
{
	var_197_int = 0; var_198_int = 0; var_199_int = 0; var_200_int = 0;
	var_199_int = 0;
	
Label_736:
	var_201_int = 0;
	func_729(var_200_int, var_201_int);
	var_204_bool = var_199_int < var_201_int;
	if(var_204_bool != 0) {
		@@@var_0_object:get(var_200_int, var_199_int);
		var_205_bool = var_20_int == var_200_int;
		if(var_205_bool != 0) {
			var_199_int = var_19_int;
			var_199_int = var_199_int + (int)1;
			goto Label_736;
		}
		return 4;
	}
	var_19_int = -1;
	return 4;
}


func_2658(var_422_object)
{
	var_423_object = Obj(); var_424_object = Obj();
	GetDiaryRoot(var_424_object);
	var_425_bool = var_424_object == 0; //@nz
	if(var_425_bool != 0) {
		Trace("Can't retrieve diary root");
		var_422_object = 0;
		return 2;
	}
	var_424_object = var_422_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_102(var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	var_251_bool = 0;
	var_251_bool = 0;
	var_252_bool = 0;
	var_252_bool = 0;
	var_253_bool = 0;
	var_253_bool = 0;
	var_254_bool = var_8_bool == 0; //@nz
	if(var_254_bool != 0) {
		var_255_bool = 0; var_256_int = 0;
		func_1149(var_255_bool, (int)12);
		if(var_255_bool != 0) {
			var_253_bool = 1;
		}
	}
	if(var_253_bool != 0) {
		var_263_bool = 0;
		func_2838(var_263_bool);
		if(var_263_bool != 0) {
			var_252_bool = 1;
		}
	}
	if(var_252_bool != 0) {
		var_376_int = 0;
		func_1141(var_376_int);
		var_382_bool = var_376_int >= (int)8;
		if(var_382_bool != 0) {
			var_251_bool = 1;
		}
	}
	if(var_251_bool != 0) {
		var_383_float = 0;
		func_1127((float)0);
		var_384_float = var_383_float;
		func_6(var_383_float);
		var_8_bool = true;
	}
	var_402_bool = 0;
	var_402_bool = 0;
	var_403_bool = 0;
	var_403_bool = 0;
	var_404_bool = var_9_bool == 0; //@nz
	if(var_404_bool != 0) {
		var_405_bool = 0; var_406_int = 0;
		func_1149(var_405_bool, (int)12);
		if(var_405_bool != 0) {
			var_403_bool = 1;
		}
	}
	if(var_403_bool != 0) {
		var_407_bool = 0;
		func_2762(var_407_bool);
		if(var_407_bool != 0) {
			var_402_bool = 1;
		}
	}
	if(var_402_bool != 0) {
		var_9_bool = true;
		func_21();
	}
	var_431_bool = 0;
	var_431_bool = 0;
	var_432_bool = 0;
	var_432_bool = 0;
	var_433_bool = var_10_bool == 0; //@nz
	if(var_433_bool != 0) {
		var_434_bool = 0; var_435_int = 0;
		func_1149(var_434_bool, (int)12);
		if(var_434_bool != 0) {
			var_432_bool = 1;
		}
	}
	if(var_432_bool != 0) {
		var_436_bool = 0;
		func_2724(var_436_bool);
		if(var_436_bool != 0) {
			var_431_bool = 1;
		}
	}
	if(var_431_bool != 0) {
		var_10_bool = true;
		func_25();
	}
	var_437_bool = 0;
	var_437_bool = 0;
	var_438_bool = 0;
	var_438_bool = 0;
	var_439_bool = var_11_bool == 0; //@nz
	if(var_439_bool != 0) {
		var_440_bool = 0; var_441_int = 0;
		func_1149(var_440_bool, (int)12);
		if(var_440_bool != 0) {
			var_438_bool = 1;
		}
	}
	if(var_438_bool != 0) {
		var_442_bool = 0;
		func_2800(var_442_bool);
		if(var_442_bool != 0) {
			var_437_bool = 1;
		}
	}
	if(var_437_bool != 0) {
		var_11_bool = true;
		func_17();
	}
	return 0;
}


func_1127(var_384_float)
{
	var_385_float = 0; var_386_float = 0;
	GetGameTime(var_386_float);
	var_386_float = var_384_float;
	return 2;
}


func_359(var_902_int, var_903_int, var_904_int)
{
	var_916_int = 0; var_917_int = 0; var_918_int = 0; var_919_int = 0;
	var_918_int = 0;
	
Label_361:
	var_920_bool = var_918_int < var_902_int;
	if(var_920_bool != 0) {
		var_921_int = 0; var_922_int = 0; var_923_bool = 0;
		var_904_int = var_922_int;
		func_383(var_918_int, var_919_int, var_921_int, var_922_int, (bool)1);
		var_918_int = var_918_int + (int)1;
		goto Label_361;
	}
	var_919_int = 0;
	
Label_372:
	var_969_bool = var_919_int < var_903_int;
	if(var_969_bool != 0) {
		var_970_int = 0; var_971_int = 0; var_972_bool = 0;
		var_904_int = var_971_int;
		func_383(var_918_int, var_919_int, var_970_int, var_971_int, (bool)0);
		var_919_int = var_919_int + (int)1;
		goto Label_372;
	}
	return 4;
}


func_1002(var_3_object, var_4_object, var_518_int)
{
	var_523_int = 0; var_524_object = Obj(); var_525_object = Obj(); var_526_string = ""; var_527_object = Obj(); var_528_int = 0; var_529_int = 0; var_530_string = ""; var_531_int = 0; var_532_object = Obj(); var_533_object = Obj(); var_534_string = ""; var_535_object = Obj(); var_536_int = 0; var_537_int = 0; var_538_string = "";
	var_539_string = ""; var_540_int = 0;
	var_518_int = var_540_int;
	func_757(var_538_string, var_539_string, var_540_int);
	SetVariable(var_539_string, (int)17);
	@@@var_3_object:get(var_532_object, var_518_int);
	var_542_bool = var_532_object == 0; //@ne
	if(var_542_bool != 0) {
		var_543_object = Obj(); var_544_int = 0;
		var_518_int = var_544_int;
		func_1063(var_538_string, var_543_object, var_544_int);
		var_543_object = var_533_object;
		var_553_string = ""; var_554_int = 0;
		var_555_int = 0; var_556_int = 0;
		var_518_int = var_556_int;
		func_752(var_554_int, var_555_int, var_556_int);
		var_555_int = var_554_int;
		func_1595(var_553_string, var_554_int);
		var_553_string = var_534_string;
		var_731_object = Obj(); var_732_object = Obj(); var_733_string = ""; var_734_string = ""; var_735_string = "";
		var_533_object = var_732_object;
		var_733_string = "pt_volonteer_" + var_534_string;
		var_738_int = "vbirdmask_" + var_534_string;
		var_735_string = var_738_int + ".xml";
		func_1097(var_731_object, var_732_object, var_733_string, "pers_birdmask", var_735_string);
		var_731_object = var_532_object;
		@@@var_3_object:set(var_518_int, var_532_object);
		var_533_object = 0;
	}
	@@@var_4_object:get(var_535_object, var_518_int);
	@@var_535_object:size(var_536_int);
	var_537_int = 0;
	
Label_1048:
	var_753_bool = var_537_int < var_536_int;
	if(var_753_bool != 0) {
		@@var_535_object:get(var_538_string, var_537_int);
		var_754_string = ""; var_755_int = 0;
		var_538_string = var_754_string;
		func_2707(var_754_string, (int)2);
		var_537_int = var_537_int + (int)1;
		goto Label_1048;
	}
	return 16;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


func_1132(var_257_int)
{
	var_258_float = 0; var_259_float = 0;
	GetGameTime(var_259_float);
	var_261_int = 0;
	var_261_int = var_259_float / (int)24;
	var_257_int = (int)1 + var_261_int;
	return 2;
}


func_2671(var_413_bool, var_414_object, var_415_int)
{
	var_416_object = Obj(); var_417_object = Obj(); var_418_int = 0; var_419_object = Obj(); var_420_object = Obj(); var_421_int = 0;
	func_2658(Obj());
	var_422_object = var_419_object;
	@@var_419_object:Find(var_415_int, var_420_object);
	var_427_bool = var_420_object == 0; //@nz
	if(var_427_bool != 0) {
		var_429_int = "Can't find diary parent with id: " + var_415_int;
		Trace(var_429_int);
		var_413_bool = 0;
		return 6;
	}
	@@var_420_object:AddChild(var_414_object);
	SendWorldWndMessage((int)7);
	@@var_414_object:GetCategory(var_421_int);
	SetDiarySection(var_421_int);
	var_413_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2800(var_266_bool)
{
	var_267_object = Obj(); var_268_int = 0; var_269_int = 0; var_270_int = 0; var_271_object = Obj(); var_272_int = 0; var_273_int = 0; var_274_int = 0;
	CreateIntVector(var_271_object);
	var_275_object = Obj(); var_276_bool = 0; var_277_int = 0;
	var_271_object = var_275_object;
	func_2137((bool)0, (int)-1);
	@@var_271_object:size(var_272_int);
	var_273_int = 0;
	
Label_2812:
	var_289_bool = var_273_int < var_272_int;
	if(var_289_bool != 0) {
		@@var_271_object:get(var_274_int, var_273_int);
		var_290_bool = 0;
		var_290_bool = 1;
		var_291_bool = 0; var_292_int = 0;
		var_274_int = var_292_int;
		func_2604(var_291_bool, var_292_int);
		if(var_291_bool != 1) {
			var_300_bool = 0; var_301_int = 0;
			var_274_int = var_301_int;
			func_2594(var_300_bool, var_301_int);
			if(var_300_bool != 1) {
				var_290_bool = 0;
			}
		}
		if(var_290_bool != 0) {
			var_266_bool = 0;
			var_273_int = var_273_int + (int)1;
			goto Label_2812;
		}
		return 8;
	}
	var_266_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2033(var_498_bool, var_499_int)
{
	var_501_bool = var_499_int == (int)18;
	if(var_501_bool != 0) {
		var_498_bool = 1;
		return 0;
	}
	var_503_bool = var_499_int == (int)24;
	if(var_503_bool != 0) {
		var_498_bool = 1;
		return 0;
	}
	var_505_bool = var_499_int == (int)20;
	if(var_505_bool != 0) {
		var_498_bool = 1;
		return 0;
	}
	var_507_bool = var_499_int == (int)14;
	if(var_507_bool != 0) {
		var_498_bool = 1;
		return 0;
	}
	var_509_bool = var_499_int == (int)10;
	if(var_509_bool != 0) {
		var_498_bool = 1;
		return 0;
	}
	var_511_bool = var_499_int == (int)17;
	if(var_511_bool != 0) {
		var_498_bool = 1;
		return 0;
	}
	var_513_bool = var_499_int == (int)8;
	if(var_513_bool != 0) {
		var_498_bool = 1;
		return 0;
	}
	var_498_bool = 0;
	return 0;
}


func_881(var_4_object, var_453_int)
{
	var_458_int = 0; var_459_object = Obj(); var_460_int = 0; var_461_int = 0; var_462_string = ""; var_463_int = 0; var_464_object = Obj(); var_465_int = 0; var_466_int = 0; var_467_string = "";
	var_468_string = ""; var_469_int = 0;
	var_453_int = var_469_int;
	func_757(var_467_string, var_468_string, var_469_int);
	GetVariable(var_468_string, var_463_int);
	var_470_string = ""; var_471_int = 0;
	var_453_int = var_471_int;
	func_757(var_467_string, var_470_string, var_471_int);
	var_473_int = var_463_int | (int)32;
	SetVariable(var_470_string, var_473_int);
	@@@var_4_object:get(var_464_object, var_453_int);
	@@var_464_object:size(var_465_int);
	var_466_int = 0;
	
Label_901:
	var_474_bool = var_466_int < var_465_int;
	if(var_474_bool != 0) {
		@@var_464_object:get(var_467_string, var_466_int);
		var_475_string = ""; var_476_int = 0;
		var_467_string = var_475_string;
		func_2707(var_475_string, (int)0);
		var_466_int = var_466_int + (int)1;
		goto Label_901;
	}
	return 10;
}
EMIT "Stack[-4] = 0";


func_752(var_0_object, var_494_int, var_495_int)
{
	var_496_int = 0; var_497_int = 0;
	@@@var_0_object:get(var_497_int, var_495_int);
	var_497_int = var_494_int;
	return 2;
}


func_1141(var_376_int)
{
	var_377_float = 0; var_378_float = 0;
	GetGameTime(var_378_float);
	var_379_int = 0;
	var_378_float = var_379_int;
	var_376_int = var_379_int % (int)24;
	return 2;
}


func_757(var_0_object, var_217_string, var_218_int)
{
	var_219_int = 0; var_220_int = 0;
	@@@var_0_object:get(var_220_int, var_218_int);
	var_217_string = "vol_" + var_220_int;
	return 2;
}


func_2169(var_29_object, var_30_object, var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj();
	@@var_29_object:add((int)1);
	var_35_object = var_30_object;
	if(var_35_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("cot_alexandr@door1");
		@@var_30_object:add(var_33_object);
	}
	var_37_object = var_31_object;
	if(var_37_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)2);
	var_40_object = var_30_object;
	if(var_40_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("shouse1_kabak@door1");
		@@var_30_object:add(var_33_object);
	}
	var_42_object = var_31_object;
	if(var_42_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)3);
	var_45_object = var_30_object;
	if(var_45_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("cot_anna@door1");
		@@var_30_object:add(var_33_object);
	}
	var_47_object = var_31_object;
	if(var_47_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)4);
	var_50_object = var_30_object;
	if(var_50_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("cot_bigvlad@door1");
		@@var_30_object:add(var_33_object);
	}
	var_52_object = var_31_object;
	if(var_52_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)6);
	var_55_object = var_30_object;
	if(var_55_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("cot_georg@door1");
		@@var_30_object:add(var_33_object);
	}
	var_57_object = var_31_object;
	if(var_57_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)15);
	var_60_object = var_30_object;
	if(var_60_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("cot_maria@door1");
		@@var_30_object:add(var_33_object);
	}
	var_62_object = var_31_object;
	if(var_62_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)9);
	var_65_object = var_30_object;
	if(var_65_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("cot_julia@door1");
		@@var_30_object:add(var_33_object);
	}
	var_67_object = var_31_object;
	if(var_67_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)10);
	var_70_object = var_30_object;
	if(var_70_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("cot_kapella@door1");
		@@var_30_object:add(var_33_object);
	}
	var_72_object = var_31_object;
	if(var_72_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)11);
	var_75_object = var_30_object;
	if(var_75_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("cot_katerina@door1");
		@@var_30_object:add(var_33_object);
	}
	var_77_object = var_31_object;
	if(var_77_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)13);
	var_80_object = var_30_object;
	if(var_80_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("cot_lara@door1");
		@@var_30_object:add(var_33_object);
	}
	var_82_object = var_31_object;
	if(var_82_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)18);
	var_85_object = var_30_object;
	if(var_85_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("vagon_mishka@door1");
		@@var_30_object:add(var_33_object);
	}
	var_87_object = var_31_object;
	if(var_87_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)19);
	var_90_object = var_30_object;
	if(var_90_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("house_vlad@door1");
		@@var_30_object:add(var_33_object);
	}
	var_92_object = var_31_object;
	if(var_92_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)20);
	var_95_object = var_30_object;
	if(var_95_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("warehouse_notkin@door1");
		@@var_30_object:add(var_33_object);
	}
	var_97_object = var_31_object;
	if(var_97_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)21);
	var_100_object = var_30_object;
	if(var_100_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("dt_house_1_04@door1");
		@@var_30_object:add(var_33_object);
	}
	var_102_object = var_31_object;
	if(var_102_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)22);
	var_105_object = var_30_object;
	if(var_105_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("house_petr@door1");
		@@var_33_object:add("house_petr@door2");
		@@var_30_object:add(var_33_object);
	}
	var_108_object = var_31_object;
	if(var_108_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)24);
	var_111_object = var_30_object;
	if(var_111_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("house_spi4ka@door1");
		@@var_33_object:add("house_spi4ka@door2");
		@@var_30_object:add(var_33_object);
	}
	var_114_object = var_31_object;
	if(var_114_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)26);
	var_117_object = var_30_object;
	if(var_117_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("cot_viktor@door1");
		@@var_30_object:add(var_33_object);
	}
	var_119_object = var_31_object;
	if(var_119_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)8);
	var_122_object = var_30_object;
	if(var_122_object != 0) {
		CreateStringVector(var_33_object);
		@@var_30_object:add(var_33_object);
	}
	var_123_object = var_31_object;
	if(var_123_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)14);
	var_126_object = var_30_object;
	if(var_126_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("storojka@door1");
		@@var_30_object:add(var_33_object);
	}
	var_128_object = var_31_object;
	if(var_128_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)17);
	var_131_object = var_30_object;
	if(var_131_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("termitnik_mat@door1");
		@@var_30_object:add(var_33_object);
	}
	var_133_object = var_31_object;
	if(var_133_object != 0) {
		@@var_31_object:add("termitnik");
	}
	@@var_29_object:add((int)16);
	var_136_object = var_30_object;
	if(var_136_object != 0) {
		CreateStringVector(var_33_object);
		@@var_30_object:add(var_33_object);
	}
	var_137_object = var_31_object;
	if(var_137_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)7);
	var_140_object = var_30_object;
	if(var_140_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("warehouse_grif@door1");
		@@var_30_object:add(var_33_object);
	}
	var_142_object = var_31_object;
	if(var_142_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)23);
	var_145_object = var_30_object;
	if(var_145_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("warehouse_rubin@door1");
		@@var_30_object:add(var_33_object);
	}
	var_147_object = var_31_object;
	if(var_147_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)5);
	var_150_object = var_30_object;
	if(var_150_object != 0) {
		CreateStringVector(var_33_object);
		@@var_33_object:add("cot_eva@door1");
		@@var_30_object:add(var_33_object);
	}
	var_152_object = var_31_object;
	if(var_152_object != 0) {
		@@var_31_object:add("outdoor");
	}
	@@var_29_object:add((int)25);
	var_155_object = var_30_object;
	if(var_155_object != 0) {
		CreateStringVector(var_33_object);
		@@var_30_object:add(var_33_object);
	}
	var_156_object = var_31_object;
	if(var_156_object != 0) {
		@@var_31_object:add("outdoor");
	}
	return 2;
}
EMIT "Stack[-1] = 0";


func_763(var_846_bool, var_847_int)
{
	var_848_int = 0; var_849_int = 0;
	var_850_string = ""; var_851_int = 0;
	var_847_int = var_851_int;
	func_757(var_849_int, var_850_string, var_851_int);
	GetVariable(var_850_string, var_849_int);
	var_853_int = var_849_int & (int)32;
	var_846_bool = var_853_int != (int)0;
	return 2;
}


func_1149(var_255_bool, var_256_int)
{
	var_257_int = 0;
	func_1132(var_257_int);
	var_255_bool = var_257_int == var_256_int;
	return 0;
}


func_383(var_1_object, var_2_object, var_921_int, var_922_int, var_923_bool)
{
	var_924_object = Obj(); var_925_int = 0; var_926_int = 0; var_927_int = 0; var_928_int = 0; var_929_int = 0; var_930_int = 0; var_931_object = Obj(); var_932_int = 0; var_933_int = 0; var_934_int = 0; var_935_int = 0; var_936_int = 0; var_937_int = 0;
	var_938_bool = var_923_bool;
	if(var_938_bool != 0) {
		@@@var_1_object:get(var_931_object, var_922_int);
	} else {
		@@@var_2_object:get(var_931_object, var_922_int);
	}
	@@var_931_object:size(var_932_int);
	var_940_bool = var_932_int == (int)0;
	if(var_940_bool != 0) {
		return 14;
	}
	var_933_int = 0;
	var_942_bool = var_932_int > (int)1;
	if(var_942_bool != 0) {
		irand(var_933_int, var_932_int);
	}
	var_934_int = 0;
	
Label_405:
	var_943_bool = var_934_int < var_932_int;
	if(var_943_bool != 0) {
		var_944_int = var_934_int + var_933_int;
		var_935_int = var_944_int % var_932_int;
		@@var_931_object:get(var_936_int, var_935_int);
		var_945_int = 0; var_946_int = 0;
		var_936_int = var_946_int;
		func_734(var_937_int, var_945_int, var_946_int);
		var_945_int = var_937_int;
		var_947_bool = 0; var_948_int = 0;
		var_937_int = var_948_int;
		func_787(var_947_bool, var_948_int);
		if(var_947_bool != 0) {
			var_956_int = 0;
			var_937_int = var_956_int;
			func_1079(var_956_int);
			var_937_int = (int)-1;
			var_934_int = var_934_int + (int)1;
			goto Label_405;
		}
		return 14;
	}
	var_921_int = -1;
	return 14;
	
}
EMIT "Stack[-7] = 0";


