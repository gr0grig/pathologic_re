// @IMPORTS: CreateWindow/3,GetPlayerContainer/1,HasInvItemProperty/3,SetPlayerHandsItem/1,GetInvItemProperty/3,UseItem/3,CreateStringVector/1,SendMessage/3,SetCursor/1,ShowCursor/0,CaptureKeyboard/0,SetOwnerDraw/1,SetNeedUpdate/1,ProcessEvents/0,SendMessage/2,DestroyWindow/0,GetVariable/2,GetContainer/1
// @STRINGS: W:inventory_base.xml|A:GetItemCount|A:GetItem|A:GetItemID|A:GetItemAmount|A:IsItemSelected|W:Weapon|A:SelectItem|W:Group|A:RemoveItem|A:SetItemAmount|A:add|W:default|W:button_weapon|W:button_clothes|W:button_medcine|W:button_food|W:button_other|W:button_detector|W:button_anticeptic|W:noinv_drop|W:money|A:GetProperty|A:AddItem|W:slot0|W:slot
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,object params=0
// @EVENT_100: op=0xef vars=int
// @EVENT_102: op=0xf3 vars=int
// @EVENT_101: op=0xf9 vars=int
// @EVENT_1: op=0x1b0 vars=float
// @EVENT_200: op=0x1bc vars=int,string,object
// @PE: 0xf,0x14,0xef,0xf3,0xf9,0x19c,0x1b0,0x23a,0x25a,0x321

task_0_event_100(var_0_int, var_1_object, var_2_int)
{
	DestroyWindow();
	return 0;
}


task_0_event_102(var_0_int, var_1_object, var_2_int)
{
	var_3_int = 0;
	var_2_int = var_3_int;
	func_376(var_3_int);
	return 0;
}


task_0_event_101(var_0_int, var_1_object, var_2_int)
{
	var_4_bool = var_2_int == (int)266;
	if(var_4_bool != 0) {
		var_6_bool = var_0_int == (int)0;
		if(var_6_bool != 0) {
			var_7_int = 0;
			func_570(var_2_int, (int)1);
		} else {
			var_74_bool = var_0_int == (int)1;
			if(var_74_bool != 0) {
				var_75_int = 0;
				func_570(var_2_int, (int)2);
				goto Label_292;
			}
			var_77_bool = var_0_int == (int)2;
			if(var_77_bool != 0) {
				var_78_int = 0;
				func_570(var_2_int, (int)3);
				goto Label_292;
			}
			var_80_bool = var_0_int == (int)3;
			if(var_80_bool != 0) {
				var_81_int = 0;
				func_570(var_2_int, (int)4);
				goto Label_292;
			}
			var_83_bool = var_0_int == (int)4;
			if(var_83_bool == 0) goto Label_292;
			var_84_int = 0;
			func_570(var_2_int, (int)0);
	}
		var_86_bool = var_2_int == (int)265;
		if(var_86_bool == 0) goto Label_335;
		var_88_bool = var_0_int == (int)0;
		if(var_88_bool != 0) {
			var_89_int = 0;
			func_570(var_2_int, (int)4);
			goto Label_335;
		}
		var_91_bool = var_0_int == (int)1;
		if(var_91_bool != 0) {
			var_92_int = 0;
			func_570(var_2_int, (int)0);
			goto Label_335;
		}
		var_94_bool = var_0_int == (int)2;
		if(var_94_bool != 0) {
			var_95_int = 0;
			func_570(var_2_int, (int)1);
			goto Label_335;
		}
		var_97_bool = var_0_int == (int)3;
		if(var_97_bool != 0) {
			var_98_int = 0;
			func_570(var_2_int, (int)2);
			goto Label_335;
		}
		var_100_bool = var_0_int == (int)4;
		if(var_100_bool == 0) goto Label_335;
		var_101_int = 0;
		func_570(var_2_int, (int)3);
	}
Label_292:
	goto Label_335;
	
Label_335:
	var_42_int = 0;
	var_2_int = var_42_int;
	func_340(var_42_int);
	return 0;
	
}


task_0_event_1(var_0_int, var_1_object, var_2_float)
{
	var_3_int = 0;
	var_3_int = var_0_int;
	func_714(var_3_int);
	func_595();
	func_18();
	return 0;
}


task_0_event_200(var_0_int, var_1_object, var_2_int, var_3_string, var_4_object)
{
	var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_int = 0; var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_object = Obj();
	var_18_bool = var_2_int < (int)0;
	if(var_18_bool != 0) {
		var_19_bool = 0; var_20_int = 0; var_21_string = ""; var_22_object = Obj();
		var_2_int = var_20_int;
		var_3_string = var_21_string;
		var_4_object = var_22_object;
		func_15(var_22_object);
		var_19_bool = (bool)0;
		return 12;
	}
	var_24_bool = var_3_string == "button_weapon";
	if(var_24_bool != 0) {
		var_25_int = 0;
		func_570(var_16_object, (int)0);
		var_11_bool = 1;
	} else {
		var_67_bool = var_3_string == "button_clothes";
		if(var_67_bool != 0) {
			var_68_int = 0;
			func_570(var_16_object, (int)1);
			var_11_bool = 1;
			goto Label_558;
		}
		var_70_bool = var_3_string == "button_medcine";
		if(var_70_bool != 0) {
			var_71_int = 0;
			func_570(var_16_object, (int)2);
			var_11_bool = 1;
			goto Label_558;
		}
		var_73_bool = var_3_string == "button_food";
		if(var_73_bool != 0) {
			var_74_int = 0;
			func_570(var_16_object, (int)3);
			var_11_bool = 1;
			goto Label_558;
		}
		var_76_bool = var_3_string == "button_other";
		if(var_76_bool != 0) {
			var_77_int = 0;
			func_570(var_16_object, (int)4);
			var_11_bool = 1;
			goto Label_558;
		}
		var_79_bool = var_3_string == "button_detector";
		if(var_79_bool != 0) {
			goto Label_558;
		}
		var_81_bool = var_3_string == "button_anticeptic";
		if(var_81_bool != 0) {
			goto Label_558;
		}
		var_83_bool = var_2_int != (int)0;
		if(var_83_bool != 0) {
			GetVariable("noinv_drop", var_12_int);
			var_85_int = var_12_int;
			if(var_85_int != 0) {
				return 12;
			}
		}

	Label_520:
		var_87_bool = (int)0 < (int)12;
		if(var_87_bool == 0) goto Label_558;
		var_88_string = ""; var_89_int = 0;
		var_13_int = var_89_int;
		func_801(var_88_string, var_89_int);
		var_100_bool = var_3_string == var_88_string;
		if(var_100_bool != 0) {
			func_9(Obj());
			var_101_object = var_14_object;
			@@var_14_object:GetItemCount(var_15_int, var_0_int);
			var_104_bool = var_15_int > var_13_int;
			if(var_104_bool != 0) {
				@@var_14_object:GetItem(var_16_object, var_13_int, var_0_int);
				var_105_bool = 0; var_106_object = Obj();
				var_16_object = var_106_object;
				func_412(var_106_object);
				var_107_bool = var_105_bool == 0; //@nz
				if(var_107_bool != 0) {
					var_108_bool = 0; var_109_int = 0; var_110_bool = 0;
					var_13_int = var_109_int;
					var_110_bool = var_2_int == (int)0;
					func_20(var_16_object, var_108_bool, var_109_int, var_110_bool);
					var_108_bool = var_11_bool;
				}
				var_16_object = 0;
			}
			goto Label_558;
		EMIT "Stack[-3] = 0";
		}
		var_13_int = var_13_int + (int)1;
		goto Label_520;
	}
Label_558:
	var_60_bool = var_11_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_61_bool = 0; var_62_int = 0; var_63_string = ""; var_64_object = Obj();
		var_2_int = var_62_int;
		var_3_string = var_63_string;
		var_4_object = var_64_object;
		func_15(var_64_object);
		var_61_bool = var_11_bool;
	}
	var_65_bool = var_11_bool;
	if(var_65_bool != 0) {
	}
	return 12;
	
}


main(var_0_int, var_1_object)
{
	CreateWindow("inventory_base.xml", (bool)0, var_1_object);
	var_4_int = 0;
	func_157(var_1_object, (int)0);
	return 0;
}


func_9(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj();
	GetPlayerContainer(var_61_object);
	var_61_object = var_59_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_15(var_19_bool)
{
	var_19_bool = 0;
	return 0;
}


func_18()
{
	return 0;
}


func_19()
{
	return 0;
}


func_20(var_0_int, var_108_bool, var_109_int, var_110_bool)
{
	var_112_bool = var_110_bool;
	if(var_112_bool != 0) {
		var_113_int = 0;
		var_109_int = var_113_int;
		func_35(var_110_bool, var_113_int);
	} else {
		var_184_bool = 0; var_185_int = 0; var_186_int = 0;
		var_185_int = var_0_int;
		var_109_int = var_186_int;
		func_664(var_110_bool, var_184_bool, var_185_int, var_186_int);
	}
	var_108_bool = 1;
	return 0;
	
}


func_664(var_0_int, var_184_bool, var_185_int, var_186_int)
{
	var_187_object = Obj(); var_188_object = Obj(); var_189_object = Obj(); var_190_int = 0; var_191_int = 0; var_192_bool = 0; var_193_int = 0; var_194_bool = 0; var_195_bool = 0; var_196_object = Obj(); var_197_object = Obj(); var_198_object = Obj(); var_199_int = 0; var_200_int = 0; var_201_bool = 0; var_202_int = 0; var_203_bool = 0; var_204_bool = 0;
	func_9(Obj());
	var_205_object = var_197_object;
	GetContainer(var_196_object);
	@@var_197_object:GetItemCount(var_199_int, var_185_int);
	var_206_bool = var_199_int <= var_186_int;
	if(var_206_bool != 0) {
		var_184_bool = 0;
		return 18;
	}
	@@var_197_object:GetItemAmount(var_200_int, var_186_int, var_185_int);
	@@var_197_object:GetItem(var_198_object, var_186_int, var_185_int);
	@@var_196_object:AddItem(var_201_bool, var_198_object, (int)0, (int)1);
	var_209_bool = var_201_bool == 0; //@nz
	if(var_209_bool != 0) {
		var_184_bool = 0;
		return 18;
	}
	var_211_bool = var_0_int == (int)0;
	if(var_211_bool != 0) {
		@@var_198_object:GetItemID(var_202_int);
		HasInvItemProperty(var_203_bool, var_202_int, "Weapon");
		var_213_bool = var_203_bool;
		if(var_213_bool != 0) {
			@@var_197_object:IsItemSelected(var_204_bool, var_186_int, var_0_int);
			var_214_bool = var_204_bool;
			if(var_214_bool != 0) {
				SetPlayerHandsItem((int)-1);
			}
		}
	}
	@@var_197_object:RemoveItem(var_186_int, (int)1, var_185_int);
	var_184_bool = 1;
	return 18;
}
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


func_412(var_74_bool)
{
	var_74_bool = 0;
	return 0;
}


func_157(var_0_int, var_4_int)
{
	var_5_int = 0; var_6_object = Obj(); var_7_int = 0; var_8_object = Obj();
	var_9_int = 0;
	var_4_int = var_9_int;
	func_570(var_8_object, var_9_int);
	var_44_int = 0;
	var_44_int = (int)-1;
	func_714(var_44_int);
	func_595();
	var_7_int = 0;
	
Label_171:
	var_118_bool = var_7_int < (int)12;
	if(var_118_bool != 0) {
		CreateStringVector(var_8_object);
		var_119_string = ""; var_120_int = 0;
		var_122_int = var_7_int + (int)12;
		var_124_int = var_122_int - (int)1;
		var_120_int = var_124_int % (int)12;
		func_801(var_119_string, var_120_int);
		@@var_8_object:add(var_119_string);
		var_126_string = ""; var_127_int = 0;
		var_129_int = var_7_int + (int)12;
		var_131_int = var_129_int + (int)1;
		var_127_int = var_131_int % (int)12;
		func_801(var_126_string, var_127_int);
		@@var_8_object:add(var_126_string);
		var_134_string = ""; var_135_int = 0;
		var_7_int = var_135_int;
		func_801(var_134_string, var_135_int);
		SendMessage((int)-1, var_134_string, var_8_object);
		var_8_object = 0;
		var_7_int = var_7_int + (int)1;
		goto Label_171;
	}
	func_231();
	SetCursor("default");
	ShowCursor();
	CaptureKeyboard();
	SetOwnerDraw((bool)0);
	SetNeedUpdate((bool)1);
	func_19();
	ProcessEvents();
	return 4;
}


func_415(var_65_bool, var_66_int, var_67_int)
{
	var_68_bool = 0; var_69_bool = 0;
	var_70_object = Obj();
	func_9(var_70_object);
	func_9(Obj());
	func_9(Obj());
	func_9(Obj());
	@@var_70_object:IsItemSelected(var_69_bool, var_66_int, var_67_int);
	var_69_bool = var_65_bool;
	return 2;
}


func_801(var_79_string, var_80_int)
{
	var_82_int = var_80_int + (int)1;
	var_84_bool = var_82_int < (int)10;
	if(var_84_bool != 0) {
		var_87_int = var_80_int + (int)1;
		var_79_string = "slot0" + var_87_int;
		return 0;
	}
	var_90_int = var_80_int + (int)1;
	var_79_string = "slot" + var_90_int;
	return 0;
}


func_35(var_0_int, var_113_int)
{
	var_114_object = Obj(); var_115_int = 0; var_116_object = Obj(); var_117_int = 0; var_118_int = 0; var_119_bool = 0; var_120_bool = 0; var_121_int = 0; var_122_bool = 0; var_123_int = 0; var_124_int = 0; var_125_bool = 0; var_126_object = Obj(); var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_bool = 0; var_131_bool = 0; var_132_object = Obj(); var_133_int = 0; var_134_object = Obj(); var_135_int = 0; var_136_int = 0; var_137_bool = 0; var_138_bool = 0; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_int = 0; var_143_bool = 0; var_144_object = Obj(); var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_bool = 0; var_149_bool = 0;
	func_9(Obj());
	var_150_object = var_132_object;
	@@var_132_object:GetItemCount(var_133_int, var_0_int);
	var_151_bool = var_113_int >= var_133_int;
	if(var_151_bool != 0) {
		return 36;
	}
	@@var_132_object:GetItem(var_134_object, var_113_int, var_0_int);
	@@var_134_object:GetItemID(var_135_int);
	@@var_132_object:GetItemAmount(var_136_int, var_113_int, var_0_int);
	@@var_132_object:IsItemSelected(var_137_bool, var_113_int, var_0_int);
	var_153_bool = var_0_int == (int)0;
	if(var_153_bool != 0) {
		HasInvItemProperty(var_138_bool, var_135_int, "Weapon");
		var_155_bool = var_138_bool == 0; //@nz
		if(var_155_bool != 0) {
			return 36;
		}
		var_156_bool = var_137_bool;
		if(var_156_bool != 0) {
			@@var_132_object:SelectItem(var_113_int, (bool)0, var_0_int);
			SetPlayerHandsItem((int)-1);
		} else {
			SetPlayerHandsItem(var_135_int);
			var_139_int = 0;

		Label_74:
			var_159_bool = var_139_int < var_133_int;
			if(var_159_bool != 0) {
				@@var_132_object:SelectItem(var_139_int, (bool)0, var_0_int);
				var_139_int = var_139_int + (int)1;
				goto Label_74;
			}
			@@var_132_object:SelectItem(var_113_int, (bool)1, var_0_int);
	}
		var_164_bool = var_0_int == (int)1;
		if(var_164_bool != 0) {
			HasInvItemProperty(var_140_bool, var_135_int, "Group");
			var_166_bool = var_140_bool == 0; //@nz
			if(var_166_bool != 0) {
				return 36;
			}
			GetInvItemProperty(var_141_int, var_135_int, "Group");
			var_168_bool = var_137_bool;
			if(var_168_bool != 0) {
				@@var_132_object:SelectItem(var_113_int, (bool)0, var_0_int);
			} else {
				var_142_int = 0;

			Label_105:
				var_170_bool = var_142_int < var_133_int;
				if(var_170_bool != 0) {
					@@var_132_object:IsItemSelected(var_143_bool, var_142_int, var_0_int);
					var_171_bool = var_143_bool == 0; //@nz
					if(var_171_bool != 0) {
					} else {
						@@var_132_object:GetItem(var_144_object, var_142_int, var_0_int);
						@@var_144_object:GetItemID(var_145_int);
						HasInvItemProperty(var_146_bool, var_145_int, "Group");
						var_174_bool = var_146_bool == 0; //@nz
						if(var_174_bool != 0) {
							goto Label_132;
						}
						GetInvItemProperty(var_147_int, var_145_int, "Group");
						var_176_bool = var_147_int == var_141_int;
						if(var_176_bool != 0) {
							@@var_132_object:SelectItem(var_142_int, (bool)0, var_0_int);
						} else {
							var_144_object = 0;
		}
						UseItem(var_113_int, var_0_int, var_148_bool);
						var_179_bool = var_148_bool;
						if(var_179_bool == 0) goto Label_154;
						var_136_int = var_136_int + (int)-1;
						var_182_bool = var_136_int == (int)0;
						if(var_182_bool != 0) {
							@@var_132_object:RemoveItem(var_113_int, (int)1, var_0_int);
							goto Label_154;
						}
						@@var_132_object:SetItemAmount(var_136_int, var_113_int, var_0_int);
					}
			}
				@@var_132_object:SelectItem(var_113_int, (bool)1, var_0_int);
			}
		Label_132:
			var_142_int = var_142_int + (int)1;
			goto Label_105;
		}
		goto Label_154;
	}
	goto Label_154;
	
Label_154:
	return 36;
	
}
EMIT "Stack[-16] = 0";
EMIT "Stack[-18] = 0";


func_570(var_0_int, var_9_int)
{
	var_11_bool = var_9_int == (int)-1;
	if(var_11_bool != 0) {
		return 0;
	}
	var_12_bool = var_0_int == var_9_int;
	if(var_12_bool != 0) {
		return 0;
	}
	var_0_int = var_9_int;
	var_13_int = 0;
	var_13_int = var_0_int;
	func_602(var_13_int);
	return 0;
}


func_584(var_109_int)
{
	var_110_object = Obj(); var_111_int = 0; var_112_object = Obj(); var_113_int = 0;
	func_9(Obj());
	var_114_object = var_112_object;
	@@var_112_object:GetProperty("money", var_113_int);
	var_113_int = var_109_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_714(var_44_int)
{
	var_45_object = Obj(); var_46_int = 0; var_47_int = 0; var_48_object = Obj(); var_49_int = 0; var_50_bool = 0; var_51_bool = 0; var_52_object = Obj(); var_53_int = 0; var_54_int = 0; var_55_object = Obj(); var_56_int = 0; var_57_bool = 0; var_58_bool = 0;
	func_9(Obj());
	var_59_object = var_52_object;
	@@var_52_object:GetItemCount(var_53_int, var_44_int);
	var_54_int = 0;
	
Label_722:
	var_63_bool = var_54_int < (int)12;
	if(var_63_bool != 0) {
		var_64_bool = var_54_int < var_53_int;
		if(var_64_bool != 0) {
			@@var_52_object:GetItem(var_55_object, var_54_int, var_44_int);
			@@var_52_object:GetItemAmount(var_56_int, var_54_int, var_44_int);
			var_65_bool = 0; var_66_int = 0; var_67_int = 0;
			var_54_int = var_66_int;
			var_44_int = var_67_int;
			func_415(var_65_bool, var_66_int, var_67_int);
			var_65_bool = var_57_bool;
			var_74_bool = 0; var_75_object = Obj();
			var_55_object = var_75_object;
			func_412(var_75_object);
			var_74_bool = var_58_bool;
			var_76_bool = var_57_bool;
			if(var_76_bool != 0) {
				var_77_bool = var_58_bool;
				if(var_77_bool != 0) {
					var_79_string = ""; var_80_int = 0;
					var_54_int = var_80_int;
					func_801(var_79_string, var_80_int);
					SendMessage((int)0, var_79_string, var_55_object);
				} else {
					var_97_string = ""; var_98_int = 0;
					var_54_int = var_98_int;
					func_801(var_97_string, var_98_int);
					SendMessage((int)16384, var_97_string, var_55_object);
			}
				var_99_bool = var_58_bool;
				if(var_99_bool != 0) {
					var_101_string = ""; var_102_int = 0;
					var_54_int = var_102_int;
					func_801(var_101_string, var_102_int);
					SendMessage((int)131072, var_101_string, var_55_object);
					goto Label_779;
				}
				var_104_string = ""; var_105_int = 0;
				var_54_int = var_105_int;
				func_801(var_104_string, var_105_int);
				SendMessage((int)0, var_104_string, var_55_object);
		}
			var_107_string = ""; var_108_int = 0;
			var_54_int = var_108_int;
			func_801(var_107_string, var_108_int);
			SendMessage((int)32768, var_107_string);
	}
		goto Label_779;
		var_92_int = var_56_int | (int)65536;
		var_93_string = ""; var_94_int = 0;
		var_54_int = var_94_int;
		func_801(var_93_string, var_94_int);
		SendMessage(var_92_int, var_93_string);
		var_55_object = 0;
		goto Label_796;
		var_54_int = var_54_int + (int)1;
		goto Label_722;
	}
	return 14;
	
}
EMIT "Stack[-7] = 0";


func_595()
{
	var_109_int = 0;
	func_584(var_109_int);
	SendMessage(var_109_int, "money");
	return 0;
}


func_340(var_42_int)
{
	var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0;
	var_48_bool = var_42_int == (int)269;
	if(var_48_bool != 0) {

	Label_345:
		var_50_bool = (int)0 < (int)12;
		if(var_50_bool != 0) {
			var_52_string = ""; var_53_int = 0;
			var_45_int = var_53_int;
			func_801(var_52_string, var_53_int);
			SendMessage((int)-2, var_52_string);
			var_45_int = var_45_int + (int)1;
			goto Label_345;
		}
	}
	var_66_bool = var_42_int == (int)270;
	if(var_66_bool != 0) {

	Label_362:
		var_68_bool = (int)0 < (int)12;
		if(var_68_bool != 0) {
			var_70_string = ""; var_71_int = 0;
			var_46_int = var_71_int;
			func_801(var_70_string, var_71_int);
			SendMessage((int)-3, var_70_string);
			var_46_int = var_46_int + (int)1;
			goto Label_362;
		}
	}
	return 4;
}


func_602(var_13_int)
{
	var_15_bool = var_13_int != (int)0;
	if(var_15_bool != 0) {
		SendMessage((int)0, "button_weapon");
	} else {
						SendMessage((int)1, "button_weapon");
	}
	var_19_bool = var_13_int != (int)1;
	if(var_19_bool != 0) {
		SendMessage((int)0, "button_clothes");
	} else {
					SendMessage((int)1, "button_clothes");

	}
	var_23_bool = var_13_int != (int)2;
	if(var_23_bool != 0) {
		SendMessage((int)0, "button_medcine");
	} else {
				SendMessage((int)1, "button_medcine");

	}
	var_27_bool = var_13_int != (int)3;
	if(var_27_bool != 0) {
		SendMessage((int)0, "button_food");
	} else {
			SendMessage((int)1, "button_food");

	}
	var_31_bool = var_13_int != (int)4;
	if(var_31_bool != 0) {
		SendMessage((int)0, "button_other");
	} else {
		SendMessage((int)1, "button_other");

	}
	return 0;
	
}


func_231()
{
	var_138_string = ""; var_139_int = 0;
	func_801(var_138_string, (int)0);
	SendMessage((int)-6, var_138_string);
	return 0;
}


func_376(var_3_int)
{
	var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0;
	var_9_bool = var_3_int == (int)273;
	if(var_9_bool != 0) {

	Label_381:
		var_11_bool = (int)0 < (int)12;
		if(var_11_bool != 0) {
			var_13_string = ""; var_14_int = 0;
			var_6_int = var_14_int;
			func_801(var_13_string, var_14_int);
			SendMessage((int)-2, var_13_string);
			var_6_int = var_6_int + (int)1;
			goto Label_381;
		}
	}
	var_27_bool = var_3_int == (int)271;
	if(var_27_bool != 0) {

	Label_398:
		var_29_bool = (int)0 < (int)12;
		if(var_29_bool != 0) {
			var_31_string = ""; var_32_int = 0;
			var_7_int = var_32_int;
			func_801(var_31_string, var_32_int);
			SendMessage((int)-3, var_31_string);
			var_7_int = var_7_int + (int)1;
			goto Label_398;
		}
	}
	return 4;
}


