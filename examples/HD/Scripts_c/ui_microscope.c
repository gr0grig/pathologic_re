// @IMPORTS: FindActor/2,DestroyWindow/0,CreateWindow/3,HasInvItemProperty/3,SendMessage/2,GetInvItemProperty/3,SetVariable/2,CreateStringVector/1,SendMessage/3,SetCursor/1,ShowCursor/0,CaptureKeyboard/0,SetOwnerDraw/1,SetNeedUpdate/1,ProcessEvents/0,GetVariable/2,GetInvItemName/2
// @STRINGS: W:player|W:inventory_base.xml|A:GetItemID|W:Microscope|A:GetItem|W:video|W:microscope_|A:add|W:default|W:button_weapon|W:button_clothes|W:button_medcine|W:button_food|W:button_other|W:button_detector|W:button_anticeptic|W:noinv_drop|A:GetItemCount|W:money|A:GetProperty|A:GetItemAmount|W:slot0|W:slot|A:Compare
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,object,object,object params=0
// @EVENT_100: op=0xc0 vars=int
// @EVENT_102: op=0xc4 vars=int
// @EVENT_101: op=0xca vars=int
// @EVENT_1: op=0x16d vars=float
// @EVENT_200: op=0x179 vars=int,string,object
// @PE: 0x13,0x37,0xc0,0xc4,0xca,0x16d,0x1f7,0x217,0x2ac

task_0_event_100(var_0_int, var_1_object, var_2_object, var_3_object, var_4_int)
{
	DestroyWindow();
	return 0;
}


task_0_event_102(var_0_int, var_1_object, var_2_object, var_3_object, var_4_int)
{
	var_5_int = 0;
	var_4_int = var_5_int;
	func_329(var_5_int);
	return 0;
}


task_0_event_101(var_0_int, var_1_object, var_2_object, var_3_object, var_4_int)
{
	var_6_bool = var_4_int == (int)266;
	if(var_6_bool != 0) {
		var_8_bool = var_0_int == (int)0;
		if(var_8_bool != 0) {
			var_9_int = 0;
			func_503(var_4_int, (int)1);
		} else {
			var_76_bool = var_0_int == (int)1;
			if(var_76_bool != 0) {
				var_77_int = 0;
				func_503(var_4_int, (int)2);
				goto Label_245;
			}
			var_79_bool = var_0_int == (int)2;
			if(var_79_bool != 0) {
				var_80_int = 0;
				func_503(var_4_int, (int)3);
				goto Label_245;
			}
			var_82_bool = var_0_int == (int)3;
			if(var_82_bool != 0) {
				var_83_int = 0;
				func_503(var_4_int, (int)4);
				goto Label_245;
			}
			var_85_bool = var_0_int == (int)4;
			if(var_85_bool == 0) goto Label_245;
			var_86_int = 0;
			func_503(var_4_int, (int)0);
	}
		var_88_bool = var_4_int == (int)265;
		if(var_88_bool == 0) goto Label_288;
		var_90_bool = var_0_int == (int)0;
		if(var_90_bool != 0) {
			var_91_int = 0;
			func_503(var_4_int, (int)4);
			goto Label_288;
		}
		var_93_bool = var_0_int == (int)1;
		if(var_93_bool != 0) {
			var_94_int = 0;
			func_503(var_4_int, (int)0);
			goto Label_288;
		}
		var_96_bool = var_0_int == (int)2;
		if(var_96_bool != 0) {
			var_97_int = 0;
			func_503(var_4_int, (int)1);
			goto Label_288;
		}
		var_99_bool = var_0_int == (int)3;
		if(var_99_bool != 0) {
			var_100_int = 0;
			func_503(var_4_int, (int)2);
			goto Label_288;
		}
		var_102_bool = var_0_int == (int)4;
		if(var_102_bool == 0) goto Label_288;
		var_103_int = 0;
		func_503(var_4_int, (int)3);
	}
Label_245:
	goto Label_288;
	
Label_288:
	var_44_int = 0;
	var_4_int = var_44_int;
	func_293(var_44_int);
	return 0;
	
}


task_0_event_1(var_0_int, var_1_object, var_2_object, var_3_object, var_4_float)
{
	var_5_int = 0;
	var_5_int = var_0_int;
	func_597(var_5_int);
	func_528();
	func_22();
	return 0;
}


task_0_event_200(var_0_int, var_1_object, var_2_object, var_3_object, var_4_int, var_5_string, var_6_object)
{
	var_7_bool = 0; var_8_int = 0; var_9_int = 0; var_10_object = Obj(); var_11_int = 0; var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_object = Obj();
	var_20_bool = var_4_int < (int)0;
	if(var_20_bool != 0) {
		var_21_bool = 0; var_22_int = 0; var_23_string = ""; var_24_object = Obj();
		var_4_int = var_22_int;
		var_5_string = var_23_string;
		var_6_object = var_24_object;
		func_19(var_24_object);
		var_21_bool = (bool)0;
		return 12;
	}
	var_26_bool = var_5_string == "button_weapon";
	if(var_26_bool != 0) {
		var_27_int = 0;
		func_503(var_18_object, (int)0);
		var_13_bool = 1;
	} else {
		var_69_bool = var_5_string == "button_clothes";
		if(var_69_bool != 0) {
			var_70_int = 0;
			func_503(var_18_object, (int)1);
			var_13_bool = 1;
			goto Label_491;
		}
		var_72_bool = var_5_string == "button_medcine";
		if(var_72_bool != 0) {
			var_73_int = 0;
			func_503(var_18_object, (int)2);
			var_13_bool = 1;
			goto Label_491;
		}
		var_75_bool = var_5_string == "button_food";
		if(var_75_bool != 0) {
			var_76_int = 0;
			func_503(var_18_object, (int)3);
			var_13_bool = 1;
			goto Label_491;
		}
		var_78_bool = var_5_string == "button_other";
		if(var_78_bool != 0) {
			var_79_int = 0;
			func_503(var_18_object, (int)4);
			var_13_bool = 1;
			goto Label_491;
		}
		var_81_bool = var_5_string == "button_detector";
		if(var_81_bool != 0) {
			goto Label_491;
		}
		var_83_bool = var_5_string == "button_anticeptic";
		if(var_83_bool != 0) {
			goto Label_491;
		}
		var_85_bool = var_4_int != (int)0;
		if(var_85_bool != 0) {
			GetVariable("noinv_drop", var_14_int);
			var_87_int = var_14_int;
			if(var_87_int != 0) {
				return 12;
			}
		}

	Label_453:
		var_89_bool = (int)0 < (int)12;
		if(var_89_bool == 0) goto Label_491;
		var_90_string = ""; var_91_int = 0;
		var_15_int = var_91_int;
		func_684(var_90_string, var_91_int);
		var_102_bool = var_5_string == var_90_string;
		if(var_102_bool != 0) {
			func_17(var_18_object, Obj());
			var_103_object = var_16_object;
			@@var_16_object:GetItemCount(var_17_int, var_0_int);
			var_104_bool = var_17_int > var_15_int;
			if(var_104_bool != 0) {
				@@var_16_object:GetItem(var_18_object, var_15_int, var_0_int);
				var_105_bool = 0; var_106_object = Obj();
				var_18_object = var_106_object;
				func_23(var_105_bool, var_106_object);
				var_112_bool = var_105_bool == 0; //@nz
				if(var_112_bool != 0) {
					var_113_bool = 0; var_114_int = 0; var_115_bool = 0;
					var_15_int = var_114_int;
					var_115_bool = var_4_int == (int)0;
					func_55(var_113_bool, var_114_int, var_115_bool);
					var_113_bool = var_13_bool;
				}
				var_18_object = 0;
			}
			goto Label_491;
		EMIT "Stack[-3] = 0";
		}
		var_15_int = var_15_int + (int)1;
		goto Label_453;
	}
Label_491:
	var_62_bool = var_13_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_63_bool = 0; var_64_int = 0; var_65_string = ""; var_66_object = Obj();
		var_4_int = var_64_int;
		var_5_string = var_65_string;
		var_6_object = var_66_object;
		func_19(var_66_object);
		var_63_bool = var_13_bool;
	}
	var_67_bool = var_13_bool;
	if(var_67_bool != 0) {
	}
	return 12;
	
}


main(var_0_int, var_1_object, var_2_object, var_3_object)
{
	FindActor(var_3_object, "player");
	var_5_bool = var_3_object == 0; //@nz
	if(var_5_bool != 0) {
		DestroyWindow();
		return 0;
	}
	CreateWindow("inventory_base.xml", (bool)0, var_1_object);
	var_8_int = 0;
	func_110(var_3_object, (int)4);
	return 0;
}


func_517(var_124_int)
{
	var_125_object = Obj(); var_126_int = 0; var_127_object = Obj(); var_128_int = 0;
	func_17(var_128_int, Obj());
	var_129_object = var_127_object;
	@@var_127_object:GetProperty("money", var_128_int);
	var_128_int = var_124_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_528()
{
	var_124_int = 0;
	func_517(var_124_int);
	SendMessage(var_124_int, "money");
	return 0;
}


func_17(var_3_object, var_63_object)
{
	var_63_object = var_3_object;
	return 0;
}


func_19(var_21_bool)
{
	var_21_bool = 0;
	return 0;
}


func_22()
{
	return 0;
}


func_535(var_17_int)
{
	var_19_bool = var_17_int != (int)0;
	if(var_19_bool != 0) {
		SendMessage((int)0, "button_weapon");
	} else {
						SendMessage((int)1, "button_weapon");
	}
	var_23_bool = var_17_int != (int)1;
	if(var_23_bool != 0) {
		SendMessage((int)0, "button_clothes");
	} else {
					SendMessage((int)1, "button_clothes");

	}
	var_27_bool = var_17_int != (int)2;
	if(var_27_bool != 0) {
		SendMessage((int)0, "button_medcine");
	} else {
				SendMessage((int)1, "button_medcine");

	}
	var_31_bool = var_17_int != (int)3;
	if(var_31_bool != 0) {
		SendMessage((int)0, "button_food");
	} else {
			SendMessage((int)1, "button_food");

	}
	var_35_bool = var_17_int != (int)4;
	if(var_35_bool != 0) {
		SendMessage((int)0, "button_other");
	} else {
		SendMessage((int)1, "button_other");

	}
	return 0;
	
}


func_23(var_84_bool, var_85_object)
{
	var_86_int = 0; var_87_bool = 0; var_88_int = 0; var_89_bool = 0;
	@@var_85_object:GetItemID(var_88_int);
	HasInvItemProperty(var_89_bool, var_88_int, "Microscope");
	var_84_bool = !var_89_bool;
	return 4;
}


func_31(var_2_object, var_67_bool, var_68_int, var_69_int)
{
	var_70_object = Obj(); var_71_object = Obj();
	var_72_object = Obj();
	func_17(var_71_object, var_72_object);
	func_17(var_72_object, Obj());
	func_17(var_72_object, Obj());
	func_17(var_72_object, Obj());
	@@var_72_object:GetItem(var_71_object, var_68_int, var_69_int);
	var_76_bool = 0; var_77_object = Obj(); var_78_object = Obj();
	var_77_object = var_2_object;
	var_71_object = var_78_object;
	func_715(var_76_bool, var_77_object, var_78_object);
	var_76_bool = var_67_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_293(var_44_int)
{
	var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0;
	var_50_bool = var_44_int == (int)269;
	if(var_50_bool != 0) {

	Label_298:
		var_52_bool = (int)0 < (int)12;
		if(var_52_bool != 0) {
			var_54_string = ""; var_55_int = 0;
			var_47_int = var_55_int;
			func_684(var_54_string, var_55_int);
			SendMessage((int)-2, var_54_string);
			var_47_int = var_47_int + (int)1;
			goto Label_298;
		}
	}
	var_68_bool = var_44_int == (int)270;
	if(var_68_bool != 0) {

	Label_315:
		var_70_bool = (int)0 < (int)12;
		if(var_70_bool != 0) {
			var_72_string = ""; var_73_int = 0;
			var_48_int = var_73_int;
			func_684(var_72_string, var_73_int);
			SendMessage((int)-3, var_72_string);
			var_48_int = var_48_int + (int)1;
			goto Label_315;
		}
	}
	return 4;
}


func_684(var_94_string, var_95_int)
{
	var_97_int = var_95_int + (int)1;
	var_99_bool = var_97_int < (int)10;
	if(var_99_bool != 0) {
		var_102_int = var_95_int + (int)1;
		var_94_string = "slot0" + var_102_int;
		return 0;
	}
	var_105_int = var_95_int + (int)1;
	var_94_string = "slot" + var_105_int;
	return 0;
}


func_54()
{
	return 0;
}


func_55(var_113_bool, var_114_int, var_115_bool)
{
	var_117_bool = var_115_bool;
	if(var_117_bool != 0) {
		var_118_int = 0;
		var_114_int = var_118_int;
		func_66(var_114_int, var_115_bool, var_118_int);
		var_113_bool = 1;
		return 0;
	}
	var_113_bool = 0;
	return 0;
}


func_184()
{
	var_153_string = ""; var_154_int = 0;
	func_684(var_153_string, (int)0);
	SendMessage((int)-6, var_153_string);
	return 0;
}


func_700(var_139_int, var_140_object)
{
	var_141_int = 0; var_142_int = 0;
	@@var_140_object:GetItemID(var_142_int);
	var_142_int = var_139_int;
	return 2;
}


func_705(var_146_string, var_147_object)
{
	var_148_int = 0; var_149_string = ""; var_150_int = 0; var_151_string = "";
	var_152_int = 0; var_153_object = Obj();
	var_147_object = var_153_object;
	func_700(var_152_int, var_153_object);
	var_152_int = var_150_int;
	GetInvItemName(var_151_string, var_150_int);
	var_151_string = var_146_string;
	return 4;
}


func_66(var_0_int, var_2_object, var_118_int)
{
	var_119_object = Obj(); var_120_object = Obj(); var_121_bool = 0; var_122_int = 0; var_123_object = Obj(); var_124_object = Obj(); var_125_bool = 0; var_126_int = 0;
	func_17(var_126_int, Obj());
	var_127_object = var_123_object;
	@@var_123_object:GetItem(var_124_object, var_118_int, var_0_int);
	var_128_bool = 0; var_129_object = Obj(); var_130_object = Obj();
	var_129_object = var_2_object;
	var_124_object = var_130_object;
	func_715(var_128_bool, var_129_object, var_130_object);
	var_128_bool = var_125_bool;
	var_136_bool = var_125_bool;
	if(var_136_bool != 0) {
		var_2_object = 0;
		SendMessage((int)0, "video");
	} else {
		var_139_int = 0; var_140_object = Obj();
		var_124_object = var_140_object;
		func_700(var_139_int, var_140_object);
		GetInvItemProperty(var_126_int, var_139_int, "Microscope");
		SendMessage(var_126_int, "video");
		var_146_string = ""; var_147_object = Obj();
		var_124_object = var_147_object;
		func_705(var_146_string, var_147_object);
		var_154_int = "microscope_" + var_146_string;
		SetVariable(var_154_int, (int)1);
		var_2_object = var_124_object;
	}
	return 8;
	
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_329(var_5_int)
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0;
	var_11_bool = var_5_int == (int)273;
	if(var_11_bool != 0) {

	Label_334:
		var_13_bool = (int)0 < (int)12;
		if(var_13_bool != 0) {
			var_15_string = ""; var_16_int = 0;
			var_8_int = var_16_int;
			func_684(var_15_string, var_16_int);
			SendMessage((int)-2, var_15_string);
			var_8_int = var_8_int + (int)1;
			goto Label_334;
		}
	}
	var_29_bool = var_5_int == (int)271;
	if(var_29_bool != 0) {

	Label_351:
		var_31_bool = (int)0 < (int)12;
		if(var_31_bool != 0) {
			var_33_string = ""; var_34_int = 0;
			var_9_int = var_34_int;
			func_684(var_33_string, var_34_int);
			SendMessage((int)-3, var_33_string);
			var_9_int = var_9_int + (int)1;
			goto Label_351;
		}
	}
	return 4;
}


func_715(var_76_bool, var_77_object, var_78_object)
{
	var_79_bool = 0; var_80_bool = 0;
	var_81_bool = 0;
	var_81_bool = 1;
	var_82_bool = var_77_object == 0; //@nz
	if(var_82_bool != 1) {
		var_83_bool = var_78_object == 0; //@nz
		if(var_83_bool != 1) {
			var_81_bool = 0;
		}
	}
	if(var_81_bool != 0) {
		var_76_bool = 0;
		return 2;
	}
	@@var_77_object:Compare(var_80_bool, var_78_object);
	var_80_bool = var_76_bool;
	return 2;
}


func_597(var_48_int)
{
	var_49_object = Obj(); var_50_int = 0; var_51_int = 0; var_52_object = Obj(); var_53_int = 0; var_54_bool = 0; var_55_bool = 0; var_56_object = Obj(); var_57_int = 0; var_58_int = 0; var_59_object = Obj(); var_60_int = 0; var_61_bool = 0; var_62_bool = 0;
	func_17(var_62_bool, Obj());
	var_63_object = var_56_object;
	@@var_56_object:GetItemCount(var_57_int, var_48_int);
	var_58_int = 0;
	
Label_605:
	var_65_bool = var_58_int < (int)12;
	if(var_65_bool != 0) {
		var_66_bool = var_58_int < var_57_int;
		if(var_66_bool != 0) {
			@@var_56_object:GetItem(var_59_object, var_58_int, var_48_int);
			@@var_56_object:GetItemAmount(var_60_int, var_58_int, var_48_int);
			var_67_bool = 0; var_68_int = 0; var_69_int = 0;
			var_58_int = var_68_int;
			var_48_int = var_69_int;
			func_31(var_62_bool, var_67_bool, var_68_int, var_69_int);
			var_67_bool = var_61_bool;
			var_84_bool = 0; var_85_object = Obj();
			var_59_object = var_85_object;
			func_23(var_84_bool, var_85_object);
			var_84_bool = var_62_bool;
			var_91_bool = var_61_bool;
			if(var_91_bool != 0) {
				var_92_bool = var_62_bool;
				if(var_92_bool != 0) {
					var_94_string = ""; var_95_int = 0;
					var_58_int = var_95_int;
					func_684(var_94_string, var_95_int);
					SendMessage((int)0, var_94_string, var_59_object);
				} else {
					var_112_string = ""; var_113_int = 0;
					var_58_int = var_113_int;
					func_684(var_112_string, var_113_int);
					SendMessage((int)16384, var_112_string, var_59_object);
			}
				var_114_bool = var_62_bool;
				if(var_114_bool != 0) {
					var_116_string = ""; var_117_int = 0;
					var_58_int = var_117_int;
					func_684(var_116_string, var_117_int);
					SendMessage((int)131072, var_116_string, var_59_object);
					goto Label_662;
				}
				var_119_string = ""; var_120_int = 0;
				var_58_int = var_120_int;
				func_684(var_119_string, var_120_int);
				SendMessage((int)0, var_119_string, var_59_object);
		}
			var_122_string = ""; var_123_int = 0;
			var_58_int = var_123_int;
			func_684(var_122_string, var_123_int);
			SendMessage((int)32768, var_122_string);
	}
		goto Label_662;
		var_107_int = var_60_int | (int)65536;
		var_108_string = ""; var_109_int = 0;
		var_58_int = var_109_int;
		func_684(var_108_string, var_109_int);
		SendMessage(var_107_int, var_108_string);
		var_59_object = 0;
		goto Label_679;
		var_58_int = var_58_int + (int)1;
		goto Label_605;
	}
	return 14;
	
}
EMIT "Stack[-7] = 0";


func_110(var_0_int, var_8_int)
{
	var_9_int = 0; var_10_object = Obj(); var_11_int = 0; var_12_object = Obj();
	var_13_int = 0;
	var_8_int = var_13_int;
	func_503(var_12_object, var_13_int);
	var_48_int = 0;
	var_48_int = (int)-1;
	func_597(var_48_int);
	func_528();
	var_11_int = 0;
	
Label_124:
	var_133_bool = var_11_int < (int)12;
	if(var_133_bool != 0) {
		CreateStringVector(var_12_object);
		var_134_string = ""; var_135_int = 0;
		var_137_int = var_11_int + (int)12;
		var_139_int = var_137_int - (int)1;
		var_135_int = var_139_int % (int)12;
		func_684(var_134_string, var_135_int);
		@@var_12_object:add(var_134_string);
		var_141_string = ""; var_142_int = 0;
		var_144_int = var_11_int + (int)12;
		var_146_int = var_144_int + (int)1;
		var_142_int = var_146_int % (int)12;
		func_684(var_141_string, var_142_int);
		@@var_12_object:add(var_141_string);
		var_149_string = ""; var_150_int = 0;
		var_11_int = var_150_int;
		func_684(var_149_string, var_150_int);
		SendMessage((int)-1, var_149_string, var_12_object);
		var_12_object = 0;
		var_11_int = var_11_int + (int)1;
		goto Label_124;
	}
	func_184();
	SetCursor("default");
	ShowCursor();
	CaptureKeyboard();
	SetOwnerDraw((bool)0);
	SetNeedUpdate((bool)1);
	func_54();
	ProcessEvents();
	return 4;
}


func_503(var_0_int, var_13_int)
{
	var_15_bool = var_13_int == (int)-1;
	if(var_15_bool != 0) {
		return 0;
	}
	var_16_bool = var_0_int == var_13_int;
	if(var_16_bool != 0) {
		return 0;
	}
	var_0_int = var_13_int;
	var_17_int = 0;
	var_17_int = var_0_int;
	func_535(var_17_int);
	return 0;
}


