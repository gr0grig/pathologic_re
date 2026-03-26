// @IMPORTS: SetCursor/1,ShowCursor/0,CaptureKeyboard/0,SetOwnerDraw/1,GetWindowData/1,DestroyWindow/0,ProcessEvents/0,CreateObjectVector/1,CreateFloatVector/1,CreateIntVector/1,FindActor/2,HasInvItemProperty/3,GetInvItemProperty/3,SendMessage/2,SendMessage/3,Trace/1
// @STRINGS: W:default|W:agony|A:GetProperty|A:size|A:get|W:player|A:GetItemCount|A:GetItem|W:Agony|A:GetItemCountOfType|A:add|W:level|W:ok|W:cancel|W:disease|A:HasProperty|A:RemoveItem|W:Do |A:SetProperty|A:set|W:slot0|W:slot|A:GetItemID
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,object,float params=0
// @EVENT_100: op=0x74 vars=int
// @EVENT_200: op=0xcb vars=int,string,object
// @PE: 0x74,0x1ae

task_0_event_100(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int)
{
	DestroyWindow();
	return 0;
}


task_0_event_200(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_string, var_9_object)
{
	var_10_int = 0; var_11_int = 0;
	var_13_bool = var_8_string == "ok";
	if(var_13_bool != 0) {
		func_336(var_11_int);
	} else {
		var_97_bool = var_8_string == "cancel";
		if(var_97_bool != 0) {
			func_358(var_11_int);
			goto Label_242;
		}
		var_147_int = 0; var_148_int = 0; var_149_string = "";
		var_7_int = var_148_int;
		var_8_string = var_149_string;
		func_451(var_148_int, var_149_string);
		var_147_int = var_11_int;
		var_159_bool = var_11_int != (int)-1;
		if(var_159_bool == 0) goto Label_242;
		var_161_bool = var_7_int == (int)0;
		if(var_161_bool != 0) {
			var_162_int = 0;
			var_11_int = var_162_int;
			func_377(var_9_object, var_10_int, var_11_int, var_162_int);
			goto Label_242;
		}
		var_175_bool = var_7_int == (int)1;
		if(var_175_bool == 0) goto Label_242;
		var_176_int = 0;
		var_11_int = var_176_int;
		func_404(var_10_int, var_11_int, var_176_int);
	}
Label_242:
	return 2;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float)
{
	SetCursor("default");
	ShowCursor();
	CaptureKeyboard();
	SetOwnerDraw((bool)0);
	GetWindowData(var_5_object);
	var_9_bool = var_5_object == 0; //@nz
	if(var_9_bool != 0) {
		DestroyWindow();
		return 0;
	}
	@@@var_5_object:GetProperty("agony", var_6_float);
	func_54(var_2_object, var_3_object, var_4_object, var_5_object, var_6_float);
	func_150(var_4_object, var_5_object, var_6_float);
	func_141();
	ProcessEvents();
	return 0;
}


func_32(var_0_object, var_37_bool, var_38_int)
{
	var_39_int = 0; var_40_int = 0; var_41_object = Obj(); var_42_int = 0; var_43_int = 0; var_44_object = Obj();
	@@@var_0_object:size(var_42_int);
	var_43_int = 0;
	
Label_36:
	var_45_bool = var_43_int < var_42_int;
	if(var_45_bool != 0) {
		@@@var_0_object:get(var_44_object, var_43_int);
		var_46_int = 0; var_47_object = Obj();
		var_44_object = var_47_object;
		func_446(var_46_int, var_47_object);
		var_48_bool = var_46_int == var_38_int;
		if(var_48_bool != 0) {
			var_37_bool = 1;
			var_44_object = 0;
			var_43_int = var_43_int + (int)1;
			goto Label_36;
		}
		return 6;
	}
	var_37_bool = 0;
	return 6;
}


func_451(var_147_int, var_149_string)
{
	var_150_int = 0; var_151_int = 0;
	
Label_453:
	var_153_bool = (int)0 < (int)6;
	if(var_153_bool != 0) {
		var_154_string = ""; var_155_int = 0;
		var_151_int = var_155_int;
		func_430(var_154_string, var_155_int);
		var_156_bool = var_149_string == var_154_string;
		if(var_156_bool != 0) {
			var_151_int = var_147_int;
			var_151_int = var_151_int + (int)1;
			goto Label_453;
		}
		return 2;
	}
	var_147_int = -1;
	return 2;
}


func_358(var_3_object)
{
	var_98_int = 0; var_99_int = 0; var_100_int = 0; var_101_int = 0;
	@@@var_3_object:size(var_100_int);
	var_101_int = 0;
	
Label_362:
	var_102_bool = var_101_int < var_100_int;
	if(var_102_bool != 0) {
		@@@var_3_object:set(var_101_int, (int)0);
		var_101_int = var_101_int + (int)1;
		goto Label_362;
	}
	func_150(var_99_int, var_100_int, var_101_int);
	func_141();
	return 4;
}


func_141()
{
	var_90_int = 100;
	var_91_float = 0;
	func_120(var_4_object, var_5_object, var_6_float, var_90_int, var_91_float);
	var_107_float = var_90_int * var_91_float;
	SendMessage(var_107_float, "level");
	return 0;
}


func_430(var_67_string, var_68_int)
{
	var_70_int = var_68_int + (int)1;
	var_72_bool = var_70_int < (int)10;
	if(var_72_bool != 0) {
		var_75_int = var_68_int + (int)1;
		var_67_string = "slot0" + var_75_int;
		return 0;
	}
	var_78_int = var_68_int + (int)1;
	var_67_string = "slot" + var_78_int;
	return 0;
}


func_336(var_5_object)
{
	var_14_float = 0; var_15_float = 0;
	func_120(var_10_int, var_11_int, var_14_float, var_15_float, (float)0);
	var_16_float = var_15_float;
	var_33_bool = var_15_float < (float)0.0010000000474974513;
	if(var_33_bool != 0) {
		var_15_float = 0;
	}
	var_35_int = "Do " + var_15_float;
	Trace(var_35_int);
	@@@var_5_object:SetProperty("agony", var_15_float);
	func_305(var_14_float, var_15_float);
	DestroyWindow();
	return 2;
}


func_305(var_0_object, var_3_object)
{
	var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_object = Obj(); var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_object = Obj(); var_46_int = 0;
	@@@var_3_object:size(var_42_int);
	var_43_int = 0;
	
Label_309:
	var_47_bool = var_43_int < var_42_int;
	if(var_47_bool != 0) {
		@@@var_3_object:get(var_44_int, var_43_int);
		var_48_int = var_44_int;
		if(var_48_int != 0) {
			@@@var_0_object:get(var_45_object, var_43_int);
			var_46_int = 0;

		Label_318:
			var_49_bool = var_46_int < var_44_int;
			if(var_49_bool != 0) {
				var_50_int = 0;
				var_51_int = 0; var_52_object = Obj();
				var_45_object = var_52_object;
				func_446(var_51_int, var_52_object);
				var_51_int = var_50_int;
				func_243(var_46_int, var_50_int);
				var_46_int = var_46_int + (int)1;
				goto Label_318;
			}
			var_45_object = 0;
		}
		var_43_int = var_43_int + (int)1;
		goto Label_309;
	}
	return 10;
}


func_243(var_2_object, var_50_int)
{
	var_55_int = 0; var_56_int = 0; var_57_float = 0; var_58_int = 0; var_59_object = Obj(); var_60_int = 0; var_61_bool = 0; var_62_float = 0; var_63_int = 0; var_64_int = 0; var_65_float = 0; var_66_int = 0; var_67_object = Obj(); var_68_int = 0; var_69_bool = 0; var_70_float = 0;
	@@@var_2_object:GetItemCount(var_63_int, (int)2);
	var_64_int = -1;
	var_66_int = 0;
	
Label_249:
	var_72_bool = var_66_int < var_63_int;
	if(var_72_bool != 0) {
		@@@var_2_object:GetItem(var_67_object, var_66_int, (int)2);
		var_74_int = 0; var_75_object = Obj();
		var_67_object = var_75_object;
		func_446(var_74_int, var_75_object);
		var_74_int = var_68_int;
		var_76_bool = var_68_int == var_50_int;
		if(var_76_bool != 0) {
			@@var_67_object:HasProperty(var_69_bool, "disease");
			var_78_bool = var_69_bool == 0; //@nz
			if(var_78_bool != 0) {
				var_79_bool = 0;
				var_79_bool = 1;
				var_81_bool = var_64_int == (int)-1;
				if(var_81_bool != 1) {
					var_83_bool = var_65_float > (int)0;
					if(var_83_bool != 1) {
						var_79_bool = 0;
					}
				}
				if(var_79_bool != 0) {
					var_66_int = var_64_int;
					var_65_float = 0;
				}
			} else {
				@@var_67_object:GetProperty(var_70_float, "disease");
				var_86_bool = 0;
				var_86_bool = 1;
				var_88_bool = var_64_int == (int)-1;
				if(var_88_bool != 1) {
					var_89_bool = var_70_float < var_65_float;
					if(var_89_bool != 1) {
						var_86_bool = 0;
					}
				}
				if(var_86_bool == 0) goto Label_293;
				var_66_int = var_64_int;
				var_70_float = var_65_float;
	}
			var_91_bool = var_64_int != (int)-1;
			if(var_91_bool != 0) {
				@@@var_2_object:RemoveItem(var_64_int, (int)1, (int)2);
			}
			return 16;
		}
	}
Label_293:
	var_67_object = 0;
	var_66_int = var_66_int + (int)1;
	goto Label_249;
	
}


func_404(var_0_object, var_3_object, var_176_int)
{
	var_177_int = 0; var_178_object = Obj(); var_179_int = 0; var_180_int = 0; var_181_object = Obj(); var_182_int = 0;
	@@@var_3_object:size(var_180_int);
	var_183_bool = var_176_int >= var_180_int;
	if(var_183_bool != 0) {
		return 6;
	}
	@@@var_0_object:get(var_181_object, var_176_int);
	@@@var_3_object:get(var_182_int, var_176_int);
	var_185_bool = var_182_int == (int)0;
	if(var_185_bool != 0) {
		return 6;
	}
	var_182_int = var_182_int - (int)1;
	@@@var_3_object:set(var_176_int, var_182_int);
	func_150(var_180_int, var_181_object, var_182_int);
	func_141();
	return 6;
}
EMIT "Stack[-2] = 0";


func_150(var_0_object, var_3_object, var_4_object)
{
	var_52_int = 0; var_53_int = 0; var_54_object = Obj(); var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_object = Obj(); var_60_int = 0; var_61_int = 0;
	@@@var_0_object:size(var_57_int);
	var_58_int = 0;
	
Label_154:
	var_63_bool = var_58_int < (int)6;
	if(var_63_bool != 0) {
		var_64_bool = var_58_int < var_57_int;
		if(var_64_bool != 0) {
			@@@var_0_object:get(var_59_object, var_58_int);
			@@@var_3_object:get(var_60_int, var_58_int);
			@@@var_4_object:get(var_61_int, var_58_int);
			var_65_int = var_60_int;
			if(var_65_int != 0) {
				var_67_string = ""; var_68_int = 0;
				var_58_int = var_68_int;
				func_430(var_67_string, var_68_int);
				SendMessage((int)16384, var_67_string, var_59_object);
			} else {
				var_85_string = ""; var_86_int = 0;
				var_58_int = var_86_int;
				func_430(var_85_string, var_86_int);
				SendMessage((int)0, var_85_string, var_59_object);
		}
			var_88_string = ""; var_89_int = 0;
			var_58_int = var_89_int;
			func_430(var_88_string, var_89_int);
			SendMessage((int)32768, var_88_string);
	}
		var_80_int = var_60_int | (int)65536;
		var_81_string = ""; var_82_int = 0;
		var_58_int = var_82_int;
		func_430(var_81_string, var_82_int);
		SendMessage(var_80_int, var_81_string);
		var_59_object = 0;
		goto Label_199;
		var_58_int = var_58_int + (int)1;
		goto Label_154;
	}
	return 10;
	
}


func_54(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_11_int = 0; var_12_int = 0; var_13_object = Obj(); var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_int = 0;
	CreateObjectVector(var_0_object);
	CreateFloatVector(var_1_object);
	CreateIntVector(var_3_object);
	CreateIntVector(var_4_object);
	FindActor(var_2_object, "player");
	var_26_bool = var_2_object == 0; //@nz
	if(var_26_bool != 0) {
		DestroyWindow();
		return 14;
	}
	@@@var_2_object:GetItemCount(var_18_int, (int)2);
	var_19_int = 0;
	
Label_75:
	var_28_bool = var_19_int < var_18_int;
	if(var_28_bool != 0) {
		@@@var_2_object:GetItem(var_20_object, var_19_int, (int)2);
		var_30_int = 0; var_31_object = Obj();
		var_20_object = var_31_object;
		func_446(var_30_int, var_31_object);
		var_30_int = var_21_int;
		HasInvItemProperty(var_22_bool, var_21_int, "Agony");
		var_35_bool = var_22_bool == 0; //@nz
		if(var_35_bool != 0) {
		} else {
			var_37_bool = 0; var_38_int = 0;
			var_21_int = var_38_int;
			func_32(var_24_int, var_37_bool, var_38_int);
			if(var_37_bool != 0) {
				goto Label_112;
			}
			GetInvItemProperty(var_23_float, var_21_int, "Agony");
			@@@var_2_object:GetItemCountOfType(var_24_int, var_21_int);
			@@@var_0_object:add(var_20_object);
			@@@var_1_object:add(var_23_float);
			@@@var_4_object:add(var_24_int);
			@@@var_3_object:add((int)0);
			var_20_object = 0;
	}
		var_19_int = var_19_int + (int)1;
		goto Label_75;
	}
	return 14;
	
}


func_120(var_0_object, var_1_object, var_3_object, var_6_float, var_91_float)
{
	var_92_float = 0; var_93_int = 0; var_94_int = 0; var_95_object = Obj(); var_96_float = 0; var_97_int = 0; var_98_float = 0; var_99_int = 0; var_100_int = 0; var_101_object = Obj(); var_102_float = 0; var_103_int = 0;
	var_98_float = var_6_float;
	@@@var_0_object:size(var_99_int);
	var_100_int = 0;
	
Label_125:
	var_104_bool = var_100_int < var_99_int;
	if(var_104_bool != 0) {
		@@@var_0_object:get(var_101_object, var_100_int);
		@@@var_1_object:get(var_102_float, var_100_int);
		@@@var_3_object:get(var_103_int, var_100_int);
		var_105_float = var_103_int * var_102_float;
		var_98_float = var_98_float - var_105_float;
		var_101_object = 0;
		var_100_int = var_100_int + (int)1;
		goto Label_125;
	}
	var_98_float = var_91_float;
	return 12;
}


func_377(var_0_object, var_3_object, var_4_object, var_162_int)
{
	var_163_int = 0; var_164_object = Obj(); var_165_int = 0; var_166_int = 0; var_167_int = 0; var_168_object = Obj(); var_169_int = 0; var_170_int = 0;
	@@@var_3_object:size(var_167_int);
	var_171_bool = var_162_int >= var_167_int;
	if(var_171_bool != 0) {
		return 8;
	}
	@@@var_0_object:get(var_168_object, var_162_int);
	@@@var_4_object:get(var_169_int, var_162_int);
	@@@var_3_object:get(var_170_int, var_162_int);
	var_172_bool = var_169_int <= var_170_int;
	if(var_172_bool != 0) {
		return 8;
	}
	var_170_int = var_170_int + (int)1;
	@@@var_3_object:set(var_162_int, var_170_int);
	func_150(var_168_object, var_169_int, var_170_int);
	func_141();
	return 8;
}
EMIT "Stack[-3] = 0";


func_446(var_30_int, var_31_object)
{
	var_32_int = 0; var_33_int = 0;
	@@var_31_object:GetItemID(var_33_int);
	var_33_int = var_30_int;
	return 2;
}


