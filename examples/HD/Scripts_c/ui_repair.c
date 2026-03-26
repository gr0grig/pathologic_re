// @IMPORTS: SetCursor/1,ShowCursor/0,CaptureKeyboard/0,SetOwnerDraw/1,GetChooseItems/1,GetAdditionalData/1,GetReturnValue/1,CreateStringVector/1,SendMessage/3,SendMessage/2,ProcessEvents/0,DestroyWindow/0,FindActor/2
// @STRINGS: W:default|W:$parent|A:add|W:cancel|W:ok|A:size|A:get|A:remove|A:clear|W:scrollbar|W:money_slot|W:sel_money_slot|W:slot0|W:player|W:money|A:GetProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,int,int,int,int params=0
// @EVENT_101: op=0x55 vars=int
// @EVENT_102: op=0xbf vars=int
// @EVENT_100: op=0x15f vars=int
// @EVENT_15: op=0x165 vars=int,int,float
// @EVENT_200: op=0x1c7 vars=int,string,object
// @PE: 0x15f,0x165,0x254,0x25d,0x266

task_0_event_101(var_0_object, var_1_object, var_2_object, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int)
{
	var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0;
	var_15_bool = var_7_int == (int)267;
	if(var_15_bool != 0) {
		var_17_bool = var_6_int == (int)0;
		if(var_17_bool != 0) {
			var_6_int = 1;
			SendMessage((int)-4, "cancel");
		} else {
					var_63_bool = 0;
					var_63_bool = 1;
					var_65_bool = var_6_int == (int)1;
					if(var_65_bool != 1) {
						var_67_bool = var_6_int == (int)2;
						if(var_67_bool != 1) {
							var_63_bool = 0;
						}
					}
					if(var_63_bool == 0) goto Label_123;
					var_6_int = 2;

				Label_110:
					var_69_bool = (int)0 < (int)4;
					if(var_69_bool == 0) goto Label_123;
					var_71_string = ""; var_72_int = 0;
					var_11_int = var_72_int;
					func_614(var_71_string, var_72_int);
					SendMessage((int)-7, var_71_string);
					var_11_int = var_11_int + (int)1;
					goto Label_110;
		}
	}
Label_123:
	var_21_bool = var_7_int == (int)268;
	if(var_21_bool != 0) {
		var_22_bool = 0;
		var_22_bool = 1;
		var_24_bool = var_6_int == (int)1;
		if(var_24_bool != 1) {
			var_26_bool = var_6_int == (int)0;
			if(var_26_bool != 1) {
				var_22_bool = 0;
			}
		}
		if(var_22_bool != 0) {
			SendMessage((int)-4, "ok");
		} else {
			var_60_bool = (int)0 == (int)2;
			if(var_60_bool == 0) goto Label_150;
			var_6_int = 1;
			SendMessage((int)-4, "cancel");

		}
	}
Label_150:
	var_30_bool = var_7_int == (int)269;
	if(var_30_bool != 0) {

	Label_154:
		var_32_bool = (int)0 < (int)4;
		if(var_32_bool != 0) {
			var_34_bool = var_6_int == (int)2;
			if(var_34_bool != 0) {
				var_36_string = ""; var_37_int = 0;
				var_12_int = var_37_int;
				func_614(var_36_string, var_37_int);
				SendMessage((int)-2, var_36_string);
			}
			var_12_int = var_12_int + (int)1;
			goto Label_154;
		}
	}
	var_50_bool = var_7_int == (int)270;
	if(var_50_bool != 0) {

	Label_174:
		var_52_bool = (int)0 < (int)4;
		if(var_52_bool != 0) {
			var_54_bool = var_6_int == (int)2;
			if(var_54_bool != 0) {
				var_56_string = ""; var_57_int = 0;
				var_13_int = var_57_int;
				func_614(var_56_string, var_57_int);
				SendMessage((int)-3, var_56_string);
			}
			var_13_int = var_13_int + (int)1;
			goto Label_174;
		}
	}
	return 6;
	
}


task_0_event_102(var_0_object, var_1_object, var_2_object, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int)
{
	var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0;
	var_15_bool = var_7_int == (int)272;
	if(var_15_bool != 0) {
		var_17_bool = var_6_int == (int)0;
		if(var_17_bool != 0) {
			var_6_int = 1;
			SendMessage((int)-4, "cancel");
		} else {
					var_63_bool = 0;
					var_63_bool = 1;
					var_65_bool = var_6_int == (int)1;
					if(var_65_bool != 1) {
						var_67_bool = var_6_int == (int)2;
						if(var_67_bool != 1) {
							var_63_bool = 0;
						}
					}
					if(var_63_bool == 0) goto Label_229;
					var_6_int = 2;

				Label_216:
					var_69_bool = (int)0 < (int)4;
					if(var_69_bool == 0) goto Label_229;
					var_71_string = ""; var_72_int = 0;
					var_11_int = var_72_int;
					func_614(var_71_string, var_72_int);
					SendMessage((int)-7, var_71_string);
					var_11_int = var_11_int + (int)1;
					goto Label_216;
		}
	}
Label_229:
	var_21_bool = var_7_int == (int)274;
	if(var_21_bool != 0) {
		var_22_bool = 0;
		var_22_bool = 1;
		var_24_bool = var_6_int == (int)1;
		if(var_24_bool != 1) {
			var_26_bool = var_6_int == (int)0;
			if(var_26_bool != 1) {
				var_22_bool = 0;
			}
		}
		if(var_22_bool != 0) {
			SendMessage((int)-4, "ok");
		} else {
			var_60_bool = (int)0 == (int)2;
			if(var_60_bool == 0) goto Label_256;
			var_6_int = 1;
			SendMessage((int)-4, "cancel");

		}
	}
Label_256:
	var_30_bool = var_7_int == (int)273;
	if(var_30_bool != 0) {

	Label_260:
		var_32_bool = (int)0 < (int)4;
		if(var_32_bool != 0) {
			var_34_bool = var_6_int == (int)2;
			if(var_34_bool != 0) {
				var_36_string = ""; var_37_int = 0;
				var_12_int = var_37_int;
				func_614(var_36_string, var_37_int);
				SendMessage((int)-2, var_36_string);
			}
			var_12_int = var_12_int + (int)1;
			goto Label_260;
		}
	}
	var_50_bool = var_7_int == (int)271;
	if(var_50_bool != 0) {

	Label_280:
		var_52_bool = (int)0 < (int)4;
		if(var_52_bool != 0) {
			var_54_bool = var_6_int == (int)2;
			if(var_54_bool != 0) {
				var_56_string = ""; var_57_int = 0;
				var_13_int = var_57_int;
				func_614(var_56_string, var_57_int);
				SendMessage((int)-3, var_56_string);
			}
			var_13_int = var_13_int + (int)1;
			goto Label_280;
		}
	}
	return 6;
	
}


task_0_event_100(var_0_object, var_1_object, var_2_object, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int)
{
	@@@var_2_object:clear();
	DestroyWindow();
	return 0;
}


task_0_event_15(var_0_object, var_1_object, var_2_object, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float)
{
	var_5_int = var_5_int + var_9_float;
	var_11_bool = var_5_int < (int)0;
	if(var_11_bool != 0) {
		var_5_int = 0;
	}
	func_370(var_8_int, var_9_float);
	func_399(var_6_int, var_7_int, var_8_int, var_9_float);
	return 0;
}


task_0_event_200(var_0_object, var_1_object, var_2_object, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_string, var_9_object)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0;
	var_17_bool = var_7_int == (int)-4;
	if(var_17_bool != 0) {
		var_18_string = ""; var_19_int = 0;
		func_614(var_18_string, (int)0);
		var_30_bool = var_8_string == var_18_string;
		if(var_30_bool != 0) {
			var_32_bool = var_5_int > (int)0;
			if(var_32_bool != 0) {
				var_5_int = var_5_int + (int)-1;
				func_399(var_12_int, var_13_int, var_14_int, var_15_int);
				func_370(var_14_int, var_15_int);
			}
		} else {
			var_96_string = ""; var_97_int = 0;
			func_614(var_96_string, (int)3);
			var_98_bool = var_8_string == var_96_string;
			if(var_98_bool == 0) goto Label_497;
			@@@var_0_object:size(var_13_int);
			var_100_int = var_5_int + (int)4;
			var_101_bool = var_100_int <= var_13_int;
			if(var_101_bool == 0) goto Label_497;
			var_5_int = var_5_int + (int)1;
			func_399(var_12_int, var_13_int, var_14_int, var_15_int);
			func_370(var_14_int, var_15_int);
	}
		var_104_bool = var_7_int == (int)-11;
		if(var_104_bool != 0) {
			var_6_int = 0;
			return 6;
		}
		var_106_bool = var_7_int == (int)-12;
		if(var_106_bool != 0) {
			var_6_int = 1;
			return 6;
		}
		var_108_bool = var_7_int == (int)-9;
		if(var_108_bool != 0) {
			var_6_int = 2;
			return 6;
		}
		var_110_bool = var_7_int < (int)0;
		if(var_110_bool != 0) {
			return 6;
		}
		var_112_bool = var_8_string == "ok";
		if(var_112_bool != 0) {
			func_582();
		} else {
			var_114_bool = var_8_string == "cancel";
			if(var_114_bool != 0) {
				func_585(var_13_int, var_14_int, var_15_int);
				goto Label_581;
			}
			var_117_bool = var_8_string == "scrollbar";
			if(var_117_bool != 0) {
				@@@var_0_object:size(var_14_int);
				var_120_int = var_14_int - (int)4;
				var_121_float = (float)0.009999999776482582 * var_120_int;
				var_122_float = var_121_float * var_7_int;
				var_5_int = var_122_float + (float)0.5;
				var_125_bool = var_5_int < (int)0;
				if(var_125_bool != 0) {
					var_5_int = 0;
				}
				func_370(var_14_int, var_15_int);
				func_399(var_12_int, var_13_int, var_14_int, var_15_int);
				goto Label_581;
			}
			var_126_int = 0; var_127_int = 0; var_128_string = "";
			var_7_int = var_127_int;
			var_8_string = var_128_string;
			func_630(var_127_int, var_128_string);
			var_126_int = var_15_int;
			var_138_bool = var_15_int != (int)-1;
			if(var_138_bool == 0) goto Label_581;
			var_140_bool = var_7_int == (int)0;
			if(var_140_bool != 0) {
				var_141_int = 0;
				var_141_int = var_15_int + var_5_int;
				func_596(var_141_int);
				goto Label_581;
			}
			var_149_bool = var_7_int == (int)1;
			if(var_149_bool == 0) goto Label_581;
			var_150_int = 0;
			var_150_int = var_15_int + var_5_int;
			func_605(var_150_int);
		}
	Label_581:
		return 6;
	}
Label_497:
	SendMessage((int)-4, var_8_string);
	return 6;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_object = Obj(); var_9_string = ""; var_10_string = ""; var_11_int = 0; var_12_object = Obj(); var_13_string = ""; var_14_string = "";
	SetCursor("default");
	ShowCursor();
	CaptureKeyboard();
	SetOwnerDraw((bool)0);
	var_17_int = 0;
	func_648(var_17_int);
	var_3_int = var_17_int;
	GetChooseItems(var_0_object);
	GetAdditionalData(var_1_object);
	GetReturnValue(var_2_object);
	var_6_int = 2;
	var_11_int = 0;
	
Label_23:
	var_25_bool = var_11_int < (int)4;
	if(var_25_bool != 0) {
		CreateStringVector(var_12_object);
		var_27_int = var_11_int - (int)1;
		var_29_bool = var_27_int >= (int)0;
		if(var_29_bool != 0) {
			var_30_string = ""; var_31_int = 0;
			var_31_int = var_11_int - (int)1;
			func_614(var_30_string, var_31_int);
			var_30_string = var_13_string;
		} else {
				var_13_string = "$parent";
	}
			var_55_string = ""; var_56_int = 0;
			func_614(var_55_string, (int)0);
			SendMessage((int)-6, var_55_string);
			func_370(var_13_string, var_14_string);
			func_399(var_11_int, var_12_object, var_13_string, var_14_string);
			ProcessEvents();
			return 8;
	}
	var_44_int = var_11_int + (int)1;
	var_46_bool = var_44_int < (int)4;
	if(var_46_bool != 0) {
		var_47_string = ""; var_48_int = 0;
		var_48_int = var_11_int + (int)1;
		func_614(var_47_string, var_48_int);
		var_47_string = var_14_string;
	} else {
		var_14_string = "$parent";

	}
	@@var_12_object:add(var_13_string);
	@@var_12_object:add(var_14_string);
	var_51_string = ""; var_52_int = 0;
	var_11_int = var_52_int;
	func_614(var_51_string, var_52_int);
	SendMessage((int)-1, var_51_string, var_12_object);
	var_12_object = 0;
	var_11_int = var_11_int + (int)1;
	goto Label_23;
	
}


func_614(var_30_string, var_31_int)
{
	var_34_int = var_31_int + (int)1;
	var_36_bool = var_34_int < (int)10;
	if(var_36_bool != 0) {
		var_39_int = var_31_int + (int)1;
		var_30_string = "slot0" + var_39_int;
		return 0;
	}
	var_42_int = var_31_int + (int)1;
	var_30_string = "slot" + var_42_int;
	return 0;
}


func_582()
{
	DestroyWindow();
	return 0;
}


func_648(var_17_int)
{
	var_18_object = Obj(); var_19_int = 0; var_20_object = Obj(); var_21_int = 0;
	FindActor(var_20_object, "player");
	@@var_20_object:GetProperty("money", var_21_int);
	var_21_int = var_17_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_585(var_2_object, var_3_int, var_4_int)
{
	@@@var_2_object:clear();
	var_115_int = 0;
	func_648(var_115_int);
	var_3_int = var_115_int;
	var_4_int = 0;
	func_399(var_12_int, var_13_int, var_14_int, var_15_int);
	return 0;
}


func_297(var_2_object, var_91_bool, var_92_int)
{
	var_93_int = 0; var_94_int = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_int = 0;
	@@@var_2_object:size(var_96_int);
	var_97_int = 0;
	
Label_301:
	var_99_bool = var_97_int < var_96_int;
	if(var_99_bool != 0) {
		@@@var_2_object:get(var_98_int, var_97_int);
		var_100_bool = var_98_int == var_92_int;
		if(var_100_bool != 0) {
			var_91_bool = 1;
			var_97_int = var_97_int + (int)1;
			goto Label_301;
		}
		return 6;
	}
	var_91_bool = 0;
	return 6;
}


func_330(var_1_object, var_2_object, var_3_int, var_4_int, var_151_int)
{
	var_152_int = 0; var_153_int = 0; var_154_int = 0; var_155_int = 0; var_156_int = 0; var_157_int = 0; var_158_int = 0; var_159_int = 0;
	@@@var_2_object:size(var_156_int);
	var_157_int = 0;
	
Label_334:
	var_160_bool = var_157_int < var_156_int;
	if(var_160_bool != 0) {
		@@@var_2_object:get(var_158_int, var_157_int);
		var_161_bool = var_158_int == var_151_int;
		if(var_161_bool != 0) {
			@@@var_2_object:remove(var_157_int);
			@@@var_1_object:get(var_159_int, var_151_int);
			var_3_int = var_3_int + var_159_int;
			var_4_int = var_4_int - var_159_int;
		} else {
			var_157_int = var_157_int + (int)1;
			goto Label_334;
		}
	}
	return 8;
	
}


func_399(var_0_object, var_1_object, var_4_int, var_5_int)
{
	var_76_int = 0; var_77_int = 0; var_78_object = Obj(); var_79_int = 0; var_80_int = 0; var_81_int = 0; var_82_object = Obj(); var_83_int = 0;
	var_84_int = 0;
	func_648(var_84_int);
	SendMessage(var_84_int, "money_slot");
	SendMessage(var_4_int, "sel_money_slot");
	@@@var_0_object:size(var_80_int);
	var_81_int = var_5_int;
	
Label_412:
	var_88_int = var_5_int + (int)4;
	var_89_bool = var_81_int < var_88_int;
	if(var_89_bool != 0) {
		var_90_bool = var_81_int < var_80_int;
		if(var_90_bool != 0) {
			@@@var_0_object:get(var_82_object, var_81_int);
			@@@var_1_object:get(var_83_int, var_81_int);
			var_91_bool = 0; var_92_int = 0;
			var_81_int = var_92_int;
			func_297(var_83_int, var_91_bool, var_92_int);
			if(var_91_bool != 0) {
				var_103_int = (int)16384 | var_83_int;
				var_104_string = ""; var_105_int = 0;
				var_105_int = var_81_int - var_5_int;
				func_614(var_104_string, var_105_int);
				SendMessage(var_103_int, var_104_string, var_82_object);
			} else {
				var_107_string = ""; var_108_int = 0;
				var_108_int = var_81_int - var_5_int;
				func_614(var_107_string, var_108_int);
				SendMessage(var_83_int, var_107_string, var_82_object);
		}
			var_110_string = ""; var_111_int = 0;
			var_111_int = var_81_int - var_5_int;
			func_614(var_110_string, var_111_int);
			SendMessage((int)32768, var_110_string);
	}
		var_82_object = 0;
		goto Label_451;
		var_81_int = var_81_int + (int)1;
		goto Label_412;
	}
	return 8;
	
}


func_370(var_0_object, var_5_int)
{
	var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0;
	@@@var_0_object:size(var_59_int);
	var_62_bool = var_59_int <= (int)4;
	if(var_62_bool != 0) {
		SendMessage((int)16384, "scrollbar");
		var_5_int = 0;
	} else {
		var_66_int = var_5_int + (int)4;
		var_67_bool = var_66_int > var_59_int;
		if(var_67_bool == 0) goto Label_398;
		var_69_int = var_5_int + (int)4;
		var_70_int = var_69_int - var_59_int;
		var_5_int = var_5_int - var_70_int;
		var_72_float = var_5_int * (int)100;
		var_74_int = var_59_int - (int)4;
		var_60_int = var_72_float / var_74_int;
		SendMessage(var_60_int, "scrollbar");
	}
Label_398:
	return 4;
	
}


func_596(var_141_int)
{
	var_142_int = 0;
	var_141_int = var_142_int;
	func_314(var_13_int, var_14_int, var_15_int, var_141_int, var_142_int);
	func_399(var_13_int, var_14_int, var_15_int, var_141_int);
	return 0;
}


func_630(var_126_int, var_128_string)
{
	var_129_int = 0; var_130_int = 0;
	
Label_632:
	var_132_bool = (int)0 < (int)4;
	if(var_132_bool != 0) {
		var_133_string = ""; var_134_int = 0;
		var_130_int = var_134_int;
		func_614(var_133_string, var_134_int);
		var_135_bool = var_128_string == var_133_string;
		if(var_135_bool != 0) {
			var_130_int = var_126_int;
			var_130_int = var_130_int + (int)1;
			goto Label_632;
		}
		return 2;
	}
	var_126_int = -1;
	return 2;
}


func_314(var_1_object, var_2_object, var_3_int, var_4_int, var_142_int)
{
	var_143_int = 0; var_144_int = 0;
	var_145_bool = 0; var_146_int = 0;
	var_142_int = var_146_int;
	func_297(var_144_int, var_145_bool, var_146_int);
	if(var_145_bool != 0) {
		return 2;
	}
	@@@var_1_object:get(var_144_int, var_142_int);
	var_147_bool = var_3_int >= var_144_int;
	if(var_147_bool != 0) {
		var_3_int = var_3_int - var_144_int;
		var_4_int = var_4_int + var_144_int;
		@@@var_2_object:add(var_142_int);
	}
	return 2;
}


func_605(var_150_int)
{
	var_151_int = 0;
	var_150_int = var_151_int;
	func_330(var_13_int, var_14_int, var_15_int, var_150_int, var_151_int);
	func_399(var_13_int, var_14_int, var_15_int, var_150_int);
	return 0;
}


