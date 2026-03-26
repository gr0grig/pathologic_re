// @IMPORTS: GetMap/1,Trace/1,GetWindowSize/2,CreateObjectVector/1,GetMainOutdoorScene/1,GetActiveScene/1,GetPlayerMapPos/2,ShowCursor/0,SetCursor/1,SetOwnerDraw/1,SetNeedUpdate/1,SetBackground/1,CaptureKeyboard/0,PlaySound/1,ProcessEvents/0,GetStringByID/2,SetTooltip/2,SetTooltip/3,ClientToScreen/2,RenderMap/8,Blit/3,GetPlayerMapAngle/1,DestroyWindow/0
// @STRINGS: W:Map not found|A:GetSize|A:GetMapParams|A:ConvertToMapCoordinates|A:GetName|W:pt_gmap_|W:indoor map: pt_gmap_|W:outdoor map|W:default|W:map_open|A:clear|A:GetMarkCount|A:GetMark|A:GetLocator|A:add|A:GetObjectFromPoint|A:GetObjectID|A:CreateObjectHighlight|A:Render|A:GetType|W:quest_mark|W:mainquest_mark|W:info_mark|W:player|W:player0|W:drag|W:button_plus|W:button_minus|A:ConvertToWorldCoordinates|A:SetMapParams|W:Can't find main outdoor scene
// @GLOBALS: 0:float:,1:float:
// @RUN_OP: 0x9
// @RUN_TASK: 0
// @TASK_0: vars=int,int,int,int,int,int,int,int,int,int,int,float,float,float,bool,bool,bool,object,object,object,object,cvector params=0
// @EVENT_1: op=0x8e vars=float
// @EVENT_0: op=0x11a vars=
// @EVENT_11: op=0x1b7 vars=int,int
// @EVENT_12: op=0x1c6 vars=int,int,bool
// @EVENT_8: op=0x1cc vars=int,int
// @EVENT_10: op=0x1d9 vars=
// @EVENT_200: op=0x1eb vars=int,string,object
// @EVENT_101: op=0x1f9 vars=int
// @PE: 0x72,0x79,0x80,0x87,0x1b7,0x1c6,0x1cc,0x1eb

task_0_event_1(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector, var_22_float)
{
	var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_float = 0; var_30_float = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_object = Obj(); var_35_string = ""; var_36_cvector = CVector(0,0,0); var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_string = ""; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_float = 0; var_49_float = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_object = Obj(); var_54_string = ""; var_55_cvector = CVector(0,0,0); var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_string = "";
	var_61_float = var_2_int / var_13_float;
	var_63_float = var_61_float / (int)2;
	var_42_int = var_11_float - var_63_float;
	var_64_float = var_2_int / var_13_float;
	var_66_float = var_64_float / (int)2;
	var_43_int = var_11_float + var_66_float;
	var_67_float = var_3_int / var_13_float;
	var_69_float = var_67_float / (int)2;
	var_44_int = var_12_float - var_69_float;
	var_70_float = var_3_int / var_13_float;
	var_72_float = var_70_float / (int)2;
	var_45_int = var_12_float + var_72_float;
	var_46_int = 0;
	var_47_int = 0;
	var_74_bool = var_42_int < (int)0;
	if(var_74_bool != 0) {
		var_46_int = -var_42_int;
	} else {
				var_144_bool = var_43_int > (int)2048;
				if(var_144_bool == 0) goto Label_171;
				var_46_int = (int)2048 - var_43_int;
	}
Label_171:
	var_76_bool = var_44_int < (int)0;
	if(var_76_bool != 0) {
		var_47_int = -var_44_int;
	} else {
			var_141_bool = var_45_int > (int)2048;
			if(var_141_bool == 0) goto Label_181;
			var_47_int = (int)2048 - var_45_int;

	}
Label_181:
	var_11_float = var_11_float + var_46_int;
	var_12_float = var_12_float + var_47_int;
	@@@var_17_object:clear();
	@@@var_19_object:GetMarkCount(var_50_int);
	var_52_int = 0;
	
Label_189:
	var_77_bool = var_52_int < var_50_int;
	if(var_77_bool != 0) {
		@@@var_19_object:GetMark(var_52_int, var_53_object);
		@@var_53_object:GetLocator(var_54_string);
		var_78_cvector = CVector(0,0,0); var_79_string = "";
		var_54_string = var_79_string;
		func_529(var_78_cvector, var_79_string);
		var_78_cvector = var_55_cvector;
		var_92_float = GetByIndex(var_55_cvector, 0);
		var_92_float = var_48_float;
		var_93_float = GetByIndex(var_55_cvector, 2);
		var_93_float = var_49_float;
		@@@var_19_object:ConvertToMapCoordinates(var_48_float, var_49_float);
		var_94_int = 0; var_95_int = 0;
		var_48_float = var_95_int;
		func_128(var_58_int, var_59_int, var_60_string, var_94_int, var_95_int);
		var_94_int = var_48_float;
		var_100_int = 0; var_101_int = 0;
		var_49_float = var_101_int;
		func_135(var_58_int, var_59_int, var_60_string, var_100_int, var_101_int);
		var_100_int = var_49_float;
		var_106_int = var_48_float - var_4_int;
		var_107_int = var_48_float - var_4_int;
		var_108_float = var_106_int * var_107_int;
		var_109_int = var_49_float - var_5_int;
		var_110_int = var_49_float - var_5_int;
		var_111_float = var_109_int * var_110_int;
		var_112_int = var_108_float + var_111_float;
		var_114_bool = var_112_int < (int)900;
		if(var_114_bool != 0) {
			@@@var_17_object:add(var_53_object);
			(int)0 = (int)0 + (int)1;
		}
		var_53_object = 0;
		var_52_int = var_52_int + (int)1;
		goto Label_189;
	}
	var_117_bool = var_51_int == 0; //@nz
	if(var_117_bool != 0) {
		var_118_int = 0; var_119_int = 0;
		var_119_int = var_4_int;
		func_114(var_58_int, var_59_int, var_60_string, var_118_int, var_119_int);
		var_118_int = var_58_int;
		var_124_int = 0; var_125_int = 0;
		var_125_int = var_5_int;
		func_121(var_58_int, var_59_int, var_60_string, var_124_int, var_125_int);
		var_124_int = var_59_int;
		@@@var_19_object:GetObjectFromPoint(var_56_int, var_58_int, var_59_int);
		var_131_bool = var_56_int >= (int)0;
		if(var_131_bool != 0) {
			@@@var_19_object:GetObjectID(var_57_int, var_56_int);
			var_133_int = var_57_int + (int)100000;
			GetStringByID(var_60_string, var_133_int);
			SetTooltip((int)5, var_60_string);
			var_135_bool = var_10_int != var_56_int;
			if(var_135_bool != 0) {
				@@@var_19_object:CreateObjectHighlight(var_20_object, var_56_int);
				var_10_int = var_56_int;
			}
		} else {
			SetTooltip((int)-1, "");
			var_20_object = 0;
			var_10_int = -1;
	}
		SetTooltip((int)2, "", var_17_object);
		var_20_object = 0;
		var_10_int = -1;

	}
	goto Label_281;
	
Label_281:
	return 38;
	
}


task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector)
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_float = 0; var_29_float = 0; var_30_int = 0; var_31_int = 0; var_32_object = Obj(); var_33_string = ""; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_float = 0; var_45_float = 0; var_46_int = 0; var_47_int = 0; var_48_object = Obj(); var_49_string = ""; var_50_int = 0; var_51_cvector = CVector(0,0,0); var_52_float = 0; var_53_int = 0;
	var_54_bool = 0;
	func_0(var_53_int, var_54_bool);
	if(var_54_bool != 0) {
		return 32;
	}
	var_59_float = var_2_int / var_13_float;
	var_61_float = var_59_float / (int)2;
	var_38_int = var_11_float - var_61_float;
	var_62_float = var_2_int / var_13_float;
	var_64_float = var_62_float / (int)2;
	var_39_int = var_11_float + var_64_float;
	var_65_float = var_3_int / var_13_float;
	var_67_float = var_65_float / (int)2;
	var_40_int = var_12_float - var_67_float;
	var_68_float = var_3_int / var_13_float;
	var_70_float = var_68_float / (int)2;
	var_41_int = var_12_float + var_70_float;
	var_42_int = 0;
	var_43_int = 0;
	ClientToScreen(var_42_int, var_43_int);
	var_71_int = var_2_int + var_42_int;
	var_72_int = var_3_int + var_43_int;
	RenderMap(var_42_int, var_43_int, var_71_int, var_72_int, var_38_int, var_40_int, var_39_int, var_41_int);
	var_73_object = var_20_object;
	if(var_73_object != 0) {
		var_74_int = var_2_int + var_42_int;
		var_75_int = var_3_int + var_43_int;
		@@@var_20_object:Render(var_42_int, var_43_int, var_74_int, var_75_int, var_38_int, var_40_int, var_39_int, var_41_int);
	}
	@@@var_19_object:GetMarkCount(var_46_int);
	var_47_int = 0;
	
Label_321:
	var_76_bool = var_47_int < var_46_int;
	if(var_76_bool != 0) {
		@@@var_19_object:GetMark(var_47_int, var_48_object);
		@@var_48_object:GetLocator(var_49_string);
		@@var_48_object:GetType(var_50_int);
		var_77_cvector = CVector(0,0,0); var_78_string = "";
		var_49_string = var_78_string;
		func_529(var_77_cvector, var_78_string);
		var_77_cvector = var_51_cvector;
		var_91_float = GetByIndex(var_51_cvector, 0);
		var_91_float = var_44_float;
		var_92_float = GetByIndex(var_51_cvector, 2);
		var_92_float = var_45_float;
		@@@var_19_object:ConvertToMapCoordinates(var_44_float, var_45_float);
		var_93_int = 0; var_94_int = 0;
		var_44_float = var_94_int;
		func_128(var_51_cvector, var_52_float, var_53_int, var_93_int, var_94_int);
		var_93_int = var_44_float;
		var_99_int = 0; var_100_int = 0;
		var_45_float = var_100_int;
		func_135(var_51_cvector, var_52_float, var_53_int, var_99_int, var_100_int);
		var_99_int = var_45_float;
		var_106_bool = var_50_int == (int)0;
		if(var_106_bool != 0) {
			var_109_int = var_44_float - (int)16;
			var_111_int = var_45_float - (int)16;
			Blit("quest_mark", var_109_int, var_111_int);
		}
		var_113_bool = var_50_int == (int)1;
		if(var_113_bool != 0) {
			var_116_int = var_44_float - (int)16;
			var_118_int = var_45_float - (int)16;
			Blit("mainquest_mark", var_116_int, var_118_int);
		}
		var_120_bool = var_50_int == (int)3;
		if(var_120_bool != 0) {
			var_123_int = var_44_float - (int)16;
			var_125_int = var_45_float - (int)16;
			Blit("info_mark", var_123_int, var_125_int);
		}
		var_48_object = 0;
		var_47_int = var_47_int + (int)1;
		goto Label_321;
	}
	var_127_bool = var_16_bool == 0; //@nz
	if(var_127_bool != 0) {
		GetPlayerMapAngle(var_52_float);
		var_129_float = var_52_float / (float)6.28000020980835;
		var_53_int = var_129_float * (int)16;
		var_131_int = 0; var_132_int = 0;
		var_133_float = GetByIndex(var_21_cvector, 0);
		var_133_float = var_132_int;
		func_128(var_51_cvector, var_52_float, var_53_int, var_131_int, var_132_int);
		var_131_int = var_44_float;
		var_134_int = 0; var_135_int = 0;
		var_136_float = GetByIndex(var_21_cvector, 2);
		var_136_float = var_135_int;
		func_135(var_51_cvector, var_52_float, var_53_int, var_134_int, var_135_int);
		var_134_int = var_45_float;
		var_138_int = "player" + var_53_int;
		var_140_int = var_44_float - (int)8;
		var_142_int = var_45_float - (int)8;
		Blit(var_138_int, var_140_int, var_142_int);
	} else {
		var_143_int = 0; var_144_int = 0;
		var_145_float = GetByIndex(var_21_cvector, 0);
		var_145_float = var_144_int;
		func_128(var_51_cvector, var_52_float, var_53_int, var_143_int, var_144_int);
		var_143_int = var_44_float;
		var_146_int = 0; var_147_int = 0;
		var_148_float = GetByIndex(var_21_cvector, 2);
		var_148_float = var_147_int;
		func_135(var_51_cvector, var_52_float, var_53_int, var_146_int, var_147_int);
		var_146_int = var_45_float;
		var_151_int = var_44_float - (int)8;
		var_153_int = var_45_float - (int)8;
		Blit("player0", var_151_int, var_153_int);
	}
	return 32;
	
}


task_0_event_11(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector, var_22_int, var_23_int)
{
	var_24_bool = 0;
	func_0(var_23_int, var_24_bool);
	if(var_24_bool != 0) {
		return 0;
	}
	var_14_bool = true;
	var_6_int = var_22_int;
	var_7_int = var_23_int;
	var_8_int = var_11_float;
	var_9_int = var_12_float;
	SetCursor("drag");
	return 0;
}


task_0_event_12(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector, var_22_int, var_23_int, var_24_bool)
{
	var_14_bool = false;
	SetCursor("default");
	return 0;
}


task_0_event_8(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector, var_22_int, var_23_int)
{
	var_4_int = var_22_int;
	var_5_int = var_23_int;
	var_15_bool = false;
	var_24_bool = var_14_bool;
	if(var_24_bool != 0) {
		var_25_int = var_6_int - var_22_int;
		var_26_float = var_25_int / var_13_float;
		var_11_float = var_8_int + var_26_float;
		var_27_int = var_7_int - var_23_int;
		var_28_float = var_27_int / var_13_float;
		var_12_float = var_9_int + var_28_float;
	}
	return 0;
}


task_0_event_10(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector)
{
	var_15_bool = true;
	return 0;
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector, var_22_int, var_23_string, var_24_object)
{
	var_26_bool = var_23_string == "button_plus";
	if(var_26_bool != 0) {
		func_475(var_24_object);
	}
	var_31_bool = var_23_string == "button_minus";
	if(var_31_bool != 0) {
		func_482(var_24_object);
	}
	return 0;
}


task_0_event_101(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector, var_22_int)
{
	var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0;
	var_28_bool = var_22_int == (int)107;
	if(var_28_bool != 0) {
		func_475(var_26_int);
		return 4;
	}
	var_33_bool = var_22_int == (int)109;
	if(var_33_bool != 0) {
		func_482(var_26_int);
		return 4;
	}
	var_25_int = var_11_float;
	var_26_int = var_12_float;
	@@@var_19_object:ConvertToWorldCoordinates(var_25_int, var_26_int);
	@@@var_19_object:SetMapParams(var_25_int, var_26_int, var_13_float);
	DestroyWindow();
	return 4;
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector)
{
	var_22_float = 0; var_23_float = 0; var_24_object = Obj(); var_25_string = ""; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_float = 0; var_31_float = 0; var_32_object = Obj(); var_33_string = ""; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0;
	GetMap(var_19_object);
	var_38_bool = var_19_object == 0; //@ne
	if(var_38_bool != 0) {
		Trace("Map not found");
		return 16;
	}
	@@@var_19_object:GetSize(var_0_int, var_1_int);
	@@@var_19_object:GetMapParams(var_30_float, var_31_float, var_13_float);
	@@@var_19_object:ConvertToMapCoordinates(var_30_float, var_31_float);
	var_11_float = var_30_float;
	var_12_float = var_31_float;
	var_15_bool = true;
	GetWindowSize(var_2_int, var_3_int);
	var_40_float = GlobalVars[0];
	var_40_float = var_2_int / (float)2048.0;
	GlobalVars[0] = var_40_float;
	var_42_float = GlobalVars[1];
	var_43_float = GlobalVars[0];
	var_43_float = var_42_float;
	GlobalVars[1] = var_42_float;
	var_4_int = -1;
	var_5_int = -1;
	var_14_bool = false;
	var_20_object = 0;
	var_10_int = -1;
	CreateObjectVector(var_17_object);
	GetMainOutdoorScene(var_32_object);
	GetActiveScene(var_18_object);
	var_44_bool = var_32_object != var_18_object;
	if(var_44_bool != 0) {
		var_16_bool = true;
		@@@var_18_object:GetName(var_33_string);
		var_45_cvector = CVector(0,0,0); var_46_string = "";
		var_46_string = "pt_gmap_" + var_33_string;
		func_529(var_45_cvector, var_46_string);
		var_21_cvector = var_45_cvector;
		var_60_float = GetByIndex(var_21_cvector, 0);
		var_60_float = var_34_int;
		var_61_float = GetByIndex(var_21_cvector, 2);
		var_61_float = var_35_int;
		@@@var_19_object:ConvertToMapCoordinates(var_34_int, var_35_int);
		var_62_float = GetByIndex(var_21_cvector, 0);
		var_34_int = var_62_float;
		SetByIndex(var_21_cvector, 0) = var_62_float;
		var_63_float = GetByIndex(var_21_cvector, 2);
		var_35_int = var_63_float;
		SetByIndex(var_21_cvector, 2) = var_63_float;
		var_65_int = "indoor map: pt_gmap_" + var_33_string;
		Trace(var_65_int);
	} else {
		Trace("outdoor map");
		var_16_bool = false;
		GetPlayerMapPos(var_36_int, var_37_int);
		var_72_float = GetByIndex(var_21_cvector, 0);
		var_36_int = var_72_float;
		SetByIndex(var_21_cvector, 0) = var_72_float;
		var_73_float = GetByIndex(var_21_cvector, 2);
		var_37_int = var_73_float;
		SetByIndex(var_21_cvector, 2) = var_73_float;
	}
	ShowCursor();
	SetCursor("default");
	SetOwnerDraw((bool)1);
	SetNeedUpdate((bool)1);
	SetBackground("default");
	CaptureKeyboard();
	PlaySound("map_open");
	ProcessEvents();
	return 16;
	
}
EMIT "Stack[-6] = 0";


func_128(var_2_int, var_11_float, var_13_float, var_93_int, var_94_int)
{
	var_95_int = var_94_int - var_11_float;
	var_96_float = var_95_int * var_13_float;
	var_98_float = var_2_int / (int)2;
	var_93_int = var_96_float + var_98_float;
	return 0;
}


func_0(var_13_float, var_24_bool)
{
	var_25_float = GlobalVars[0];
	var_27_int = var_25_float + (float)0.009999999776482582;
	var_28_bool = var_13_float < var_27_int;
	if(var_28_bool != 0) {
		var_24_bool = 1;
		return 0;
	}
	var_24_bool = 0;
	return 0;
}


func_482(var_13_float)
{
	var_13_float = var_13_float / (float)1.399999976158142;
	var_35_float = GlobalVars[0];
	var_36_bool = var_13_float < var_35_float;
	if(var_36_bool != 0) {
		var_37_float = GlobalVars[0];
		var_13_float = var_37_float;
	}
	return 0;
}


func_135(var_3_int, var_12_float, var_13_float, var_99_int, var_100_int)
{
	var_101_int = var_100_int - var_12_float;
	var_102_float = var_101_int * var_13_float;
	var_104_float = var_3_int / (int)2;
	var_99_int = var_102_float + var_104_float;
	return 0;
}


func_529(var_45_cvector, var_46_string)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_object = Obj(); var_51_object = Obj(); var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_object = Obj(); var_56_object = Obj(); var_57_bool = 0;
	GetMainOutdoorScene(var_55_object);
	var_58_bool = var_55_object == 0; //@ne
	if(var_58_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_53_cvector = CVector(0.0, 0.0, 0.0);
		var_53_cvector = var_45_cvector;
		return 10;
	}
	@@var_55_object:GetLocator(var_46_string, var_57_bool, var_53_cvector, var_54_cvector);
	var_53_cvector = var_45_cvector;
	return 10;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_114(var_2_int, var_11_float, var_13_float, var_118_int, var_119_int)
{
	var_121_float = var_2_int / (int)2;
	var_122_int = var_119_int - var_121_float;
	var_123_float = var_122_int / var_13_float;
	var_118_int = var_11_float + var_123_float;
	return 0;
}


func_121(var_3_int, var_12_float, var_13_float, var_124_int, var_125_int)
{
	var_127_float = var_3_int / (int)2;
	var_128_int = var_125_int - var_127_float;
	var_129_float = var_128_int / var_13_float;
	var_124_int = var_12_float + var_129_float;
	return 0;
}


func_475(var_13_float)
{
	var_13_float = var_13_float * (float)1.399999976158142;
	var_31_bool = var_13_float > (float)2.0;
	if(var_31_bool != 0) {
		var_13_float = 2.0;
	}
	return 0;
}


