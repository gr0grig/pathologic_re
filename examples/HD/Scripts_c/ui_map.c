// @IMPORTS: GetMap/1,Trace/1,CreatePolyImage/4,GetWindowSize/2,GetVariable/2,SetVariable/2,SendMessage/2,CreateObjectVector/1,GetMainOutdoorScene/1,GetActiveScene/1,GetPlayerMapPos/2,ShowCursor/0,SetCursor/1,SetOwnerDraw/1,SetNeedUpdate/1,SetBackground/1,EnableClipping/1,CaptureKeyboard/0,PlaySound/1,ProcessEvents/0,LoadImage/1,SetRegionColor/5,GetStringByID/2,SetTooltip/2,SetTooltip/3,Blit/3,ClientToScreen/2,RenderMap/8,RenderRegions/8,ScreenToClient/2,GetScreenSize/2,StretchBlit/6,GetPlayerMapAngle/1,DestroyWindow/0,GetGameTime/1
// @STRINGS: W:Map not found|W:ui/ui_player.png|A:GetSize|A:GetMapParams|A:ConvertToMapCoordinates|W:map_chertez_force|W:tavro|A:GetName|W:pt_gmap_|W:indoor map: pt_gmap_|W:outdoor map|W:default|W:map_open|W:map_chertez_state|W:ui\ui_chertez_danko_bg.tex|W:ui\ui_chertez_danko_|W:ui\ui_chertez_burah_bg.tex|W:ui\ui_chertez_burah_|W:ui\ui_chertez_klara_bg.tex|W:ui\ui_chertez_klara_|A:clear|A:GetMarkCount|A:GetMark|A:GetLocator|A:add|A:GetObjectFromPoint|A:GetObjectID|A:CreateObjectHighlight|A:GetType|W:quest_mark|W:mainquest_mark|W:info_mark|A:Render|A:Blit|W:drag|W:button_plus|W:button_minus|A:ConvertToWorldCoordinates|A:SetMapParams|W:branch|W:Region|W:State|W:Can't find main outdoor scene|W:RMap
// @GLOBALS: 0:float:,1:float:
// @RUN_OP: 0x11
// @RUN_TASK: 0
// @TASK_0: vars=int,int,int,int,int,int,int,int,int,int,int,int,float,float,float,bool,bool,bool,bool,bool,object,object,object,object,object,cvector,string,bool,bool,bool,bool,bool,bool params=0
// @EVENT_1: op=0x13e vars=float
// @EVENT_0: op=0x2b1 vars=
// @EVENT_11: op=0x2e6 vars=int,int
// @EVENT_12: op=0x2fb vars=int,int,bool
// @EVENT_8: op=0x301 vars=int,int
// @EVENT_10: op=0x30e vars=
// @EVENT_15: op=0x310 vars=int,int,float
// @EVENT_200: op=0x358 vars=int,string,object
// @EVENT_102: op=0x37c vars=int
// @EVENT_101: op=0x3b2 vars=int
// @EVENT_100: op=0x3e8 vars=int
// @PE: 0x122,0x129,0x130,0x137,0x2e6,0x2fb,0x301,0x336,0x346,0x358,0x37c,0x3b2,0x401

task_0_event_1(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_float)
{
	var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_float = 0; var_41_float = 0; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_object = Obj(); var_46_string = ""; var_47_cvector = CVector(0,0,0); var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_string = ""; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_float = 0; var_60_float = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_object = Obj(); var_65_string = ""; var_66_cvector = CVector(0,0,0); var_67_int = 0; var_68_int = 0; var_69_int = 0; var_70_int = 0; var_71_string = "";
	var_72_bool = var_30_bool;
	if(var_72_bool != 0) {
		var_74_float = (int)500 * var_33_float;
		var_12_float = var_12_float + var_74_float;
	}
	var_75_bool = var_29_bool;
	if(var_75_bool != 0) {
		var_77_float = (int)500 * var_33_float;
		var_12_float = var_12_float - var_77_float;
	}
	var_78_bool = var_27_bool;
	if(var_78_bool != 0) {
		var_80_float = (int)500 * var_33_float;
		var_13_float = var_13_float - var_80_float;
	}
	var_81_bool = var_28_bool;
	if(var_81_bool != 0) {
		var_83_float = (int)500 * var_33_float;
		var_13_float = var_13_float + var_83_float;
	}
	var_84_bool = var_31_bool;
	if(var_84_bool != 0) {
		var_85_bool = var_18_bool == 0; //@nz
		if(var_85_bool != 0) {
			var_87_float = (float)1.100000023841858 * var_33_float;
			var_14_float = var_14_float + var_87_float;
			var_89_bool = var_14_float > (float)2.0;
			if(var_89_bool != 0) {
				var_14_float = 2.0;
			}
			var_0_int = var_0_int + (int)-1;
			var_92_bool = var_0_int < (int)0;
			if(var_92_bool != 0) {
			}
		}
	}
	var_93_bool = var_32_bool;
	if(var_93_bool != 0) {
		var_94_bool = var_18_bool == 0; //@nz
		if(var_94_bool != 0) {
			var_96_float = (float)1.100000023841858 * var_33_float;
			var_14_float = var_14_float - var_96_float;
			var_97_float = GlobalVars[0];
			var_98_bool = var_14_float < var_97_float;
			if(var_98_bool != 0) {
				var_99_float = GlobalVars[0];
				var_14_float = var_99_float;
				(int)0 = (int)0 + (int)1;
				var_102_bool = var_0_int > (int)2;
				if(var_102_bool != 0) {
					var_0_int = 2;
				}
			}
		}
	}
	var_103_float = var_3_int / var_14_float;
	var_105_float = var_103_float / (int)2;
	var_53_int = var_12_float - var_105_float;
	var_106_float = var_3_int / var_14_float;
	var_108_float = var_106_float / (int)2;
	var_54_int = var_12_float + var_108_float;
	var_109_float = var_4_int / var_14_float;
	var_111_float = var_109_float / (int)2;
	var_55_int = var_13_float - var_111_float;
	var_112_float = var_4_int / var_14_float;
	var_114_float = var_112_float / (int)2;
	var_56_int = var_13_float + var_114_float;
	var_57_int = 0;
	var_58_int = 0;
	var_116_bool = var_53_int < (int)0;
	if(var_116_bool != 0) {
		var_57_int = -var_53_int;
	} else {
				var_203_bool = var_54_int > (int)2048;
				if(var_203_bool == 0) goto Label_403;
				var_57_int = (int)2048 - var_54_int;
	}
Label_403:
	var_118_bool = var_55_int < (int)0;
	if(var_118_bool != 0) {
		var_58_int = -var_55_int;
	} else {
			var_200_bool = var_56_int > (int)2048;
			if(var_200_bool == 0) goto Label_413;
			var_58_int = (int)2048 - var_56_int;

	}
Label_413:
	var_12_float = var_12_float + var_57_int;
	var_13_float = var_13_float + var_58_int;
	var_119_bool = 0;
	var_120_bool = 0;
	func_0((bool)0, var_120_bool);
	var_132_bool = var_120_bool == 0; //@nz
	if(var_132_bool != 0) {
		var_133_bool = var_18_bool == 0; //@nz
		if(var_133_bool != 0) {
			var_119_bool = 1;
		}
	}
	if(var_119_bool != 0) {
		@@@var_20_object:clear();
		@@@var_22_object:GetMarkCount(var_61_int);
		var_63_int = 0;

	Label_432:
		var_134_bool = var_63_int < var_61_int;
		if(var_134_bool != 0) {
			@@@var_22_object:GetMark(var_63_int, var_64_object);
			@@var_64_object:GetLocator(var_65_string);
			var_135_cvector = CVector(0,0,0); var_136_string = "";
			var_65_string = var_136_string;
			func_1067(var_135_cvector, var_136_string);
			var_135_cvector = var_66_cvector;
			var_149_float = GetByIndex(var_66_cvector, 0);
			var_149_float = var_59_float;
			var_150_float = GetByIndex(var_66_cvector, 2);
			var_150_float = var_60_float;
			@@@var_22_object:ConvertToMapCoordinates(var_59_float, var_60_float);
			var_151_int = 0; var_152_int = 0;
			var_59_float = var_152_int;
			func_304(var_69_int, var_70_int, var_71_string, var_151_int, var_152_int);
			var_151_int = var_59_float;
			var_157_int = 0; var_158_int = 0;
			var_60_float = var_158_int;
			func_311(var_69_int, var_70_int, var_71_string, var_157_int, var_158_int);
			var_157_int = var_60_float;
			var_163_int = var_59_float - var_5_int;
			var_164_int = var_59_float - var_5_int;
			var_165_float = var_163_int * var_164_int;
			var_166_int = var_60_float - var_6_int;
			var_167_int = var_60_float - var_6_int;
			var_168_float = var_166_int * var_167_int;
			var_169_int = var_165_float + var_168_float;
			var_171_bool = var_169_int < (int)900;
			if(var_171_bool != 0) {
				@@@var_20_object:add(var_64_object);
				(int)0 = (int)0 + (int)1;
			}
			var_64_object = 0;
			var_63_int = var_63_int + (int)1;
			goto Label_432;
		}
		var_174_bool = var_62_int == 0; //@nz
		if(var_174_bool != 0) {
			var_175_int = 0; var_176_int = 0;
			var_176_int = var_5_int;
			func_290(var_69_int, var_70_int, var_71_string, var_175_int, var_176_int);
			var_175_int = var_69_int;
			var_181_int = 0; var_182_int = 0;
			var_182_int = var_6_int;
			func_297(var_69_int, var_70_int, var_71_string, var_181_int, var_182_int);
			var_181_int = var_70_int;
			@@@var_22_object:GetObjectFromPoint(var_67_int, var_69_int, var_70_int);
			var_188_bool = var_67_int >= (int)0;
			if(var_188_bool != 0) {
				@@@var_22_object:GetObjectID(var_68_int, var_67_int);
				var_190_int = var_68_int + (int)100000;
				GetStringByID(var_71_string, var_190_int);
				SetTooltip((int)5, var_71_string);
				var_192_bool = var_11_int != var_67_int;
				if(var_192_bool != 0) {
					@@@var_22_object:CreateObjectHighlight(var_23_object, var_67_int);
					var_11_int = var_67_int;
				}
			} else {
				SetTooltip((int)-1, "");
				var_23_object = 0;
				var_11_int = -1;
		}
			SetTooltip((int)2, "", var_20_object);
			var_23_object = 0;
			var_11_int = -1;
	}
		SetTooltip((int)-1, "");
		var_11_int = -1;
		var_23_object = 0;

	}
	goto Label_524;
	
Label_524:
	goto Label_531;
	
Label_531:
	return 38;
	
}


task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool)
{
	var_33_bool = var_18_bool;
	if(var_33_bool != 0) {
		func_674(var_32_bool);
	} else {
		func_604(var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool);
	}
	return 0;
	
}


task_0_event_11(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_int, var_34_int)
{
	var_35_bool = 0;
	var_36_bool = 0;
	func_0((bool)1, var_36_bool);
	if(var_36_bool != 1) {
		var_48_bool = var_18_bool;
		if(var_48_bool != 1) {
			var_35_bool = 0;
		}
	}
	if(var_35_bool != 0) {
		return 0;
	}
	var_15_bool = true;
	var_7_int = var_33_int;
	var_8_int = var_34_int;
	var_9_int = var_12_float;
	var_10_int = var_13_float;
	SetCursor("drag");
	return 0;
}


task_0_event_12(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_int, var_34_int, var_35_bool)
{
	var_15_bool = false;
	SetCursor("default");
	return 0;
}


task_0_event_8(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_int, var_34_int)
{
	var_5_int = var_33_int;
	var_6_int = var_34_int;
	var_16_bool = false;
	var_35_bool = var_15_bool;
	if(var_35_bool != 0) {
		var_36_int = var_7_int - var_33_int;
		var_37_float = var_36_int / var_14_float;
		var_12_float = var_9_int + var_37_float;
		var_38_int = var_8_int - var_34_int;
		var_39_float = var_38_int / var_14_float;
		var_13_float = var_10_int + var_39_float;
	}
	return 0;
}


task_0_event_10(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool)
{
	var_16_bool = true;
	return 0;
}


task_0_event_15(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_int, var_34_int, var_35_float)
{
	var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0;
	var_40_bool = var_18_bool;
	if(var_40_bool != 0) {
		return 4;
	}
	var_42_bool = var_35_float == (float)0.20000000298023224;
	if(var_42_bool != 0) {
	} else {
		var_44_bool = var_35_float == (float)-0.20000000298023224;
		if(var_44_bool != 0) {
			goto Label_821;
		}
		var_46_bool = var_35_float > (int)0;
		if(var_46_bool != 0) {
			var_38_int = 0;

		Label_800:
			var_47_bool = var_38_int < var_35_float;
			if(var_47_bool != 0) {
				var_48_float = 0;
				func_822(var_38_int, var_39_int, (float)1.100000023841858);
				var_38_int = var_38_int + (int)1;
				goto Label_800;
			}
			goto Label_821;
		}
		var_39_int = 0;

	Label_811:
		var_56_int = -var_35_float;
		var_57_bool = var_39_int < var_56_int;
		if(var_57_bool == 0) goto Label_821;
		var_58_float = 0;
		func_838(var_38_int, var_39_int, (float)1.100000023841858);
		var_39_int = var_39_int + (int)1;
		goto Label_811;
	}
Label_821:
	return 4;
	
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_int, var_34_string, var_35_object)
{
	var_37_bool = var_34_string == "button_plus";
	if(var_37_bool != 0) {
		var_38_float = 0;
		func_822(var_34_string, var_35_object, (float)1.399999976158142);
	} else {
		var_46_bool = var_34_string == "button_minus";
		if(var_46_bool != 0) {
			var_47_float = 0;
			func_838(var_34_string, var_35_object, (float)1.399999976158142);
			goto Label_891;
		}
		var_56_bool = var_34_string == "tavro";
		if(var_56_bool == 0) goto Label_891;
		var_18_bool = var_33_int == (int)0;
		var_58_bool = var_18_bool;
		if(var_58_bool != 0) {
			var_59_int = 1;
		} else {
			var_99_int = 0; //@pi
		}
		SendMessage(var_59_int, "tavro");
		var_61_bool = var_18_bool;
		if(var_61_bool == 0) goto Label_891;
		func_176(var_34_string, var_35_object);
	}
Label_891:
	return 0;
	
}


task_0_event_102(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_int)
{
	var_34_bool = 0;
	var_34_bool = 1;
	var_36_bool = var_33_int == (int)270;
	if(var_36_bool != 1) {
		var_38_bool = var_33_int == (int)271;
		if(var_38_bool != 1) {
			var_34_bool = 0;
		}
	}
	if(var_34_bool != 0) {
		var_30_bool = false;
	}
	var_39_bool = 0;
	var_39_bool = 1;
	var_41_bool = var_33_int == (int)269;
	if(var_41_bool != 1) {
		var_43_bool = var_33_int == (int)273;
		if(var_43_bool != 1) {
			var_39_bool = 0;
		}
	}
	if(var_39_bool != 0) {
		var_29_bool = false;
	}
	var_44_bool = 0;
	var_44_bool = 1;
	var_46_bool = var_33_int == (int)267;
	if(var_46_bool != 1) {
		var_48_bool = var_33_int == (int)272;
		if(var_48_bool != 1) {
			var_44_bool = 0;
		}
	}
	if(var_44_bool != 0) {
		var_27_bool = false;
	}
	var_49_bool = 0;
	var_49_bool = 1;
	var_51_bool = var_33_int == (int)268;
	if(var_51_bool != 1) {
		var_53_bool = var_33_int == (int)274;
		if(var_53_bool != 1) {
			var_49_bool = 0;
		}
	}
	if(var_49_bool != 0) {
		var_28_bool = false;
	}
	var_55_bool = var_33_int == (int)275;
	if(var_55_bool != 0) {
		var_31_bool = false;
	}
	var_57_bool = var_33_int == (int)276;
	if(var_57_bool != 0) {
		var_32_bool = false;
	}
	return 0;
}


task_0_event_101(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_int)
{
	var_34_bool = 0;
	var_34_bool = 1;
	var_36_bool = var_33_int == (int)270;
	if(var_36_bool != 1) {
		var_38_bool = var_33_int == (int)271;
		if(var_38_bool != 1) {
			var_34_bool = 0;
		}
	}
	if(var_34_bool != 0) {
		var_30_bool = true;
	}
	var_39_bool = 0;
	var_39_bool = 1;
	var_41_bool = var_33_int == (int)269;
	if(var_41_bool != 1) {
		var_43_bool = var_33_int == (int)273;
		if(var_43_bool != 1) {
			var_39_bool = 0;
		}
	}
	if(var_39_bool != 0) {
		var_29_bool = true;
	}
	var_44_bool = 0;
	var_44_bool = 1;
	var_46_bool = var_33_int == (int)267;
	if(var_46_bool != 1) {
		var_48_bool = var_33_int == (int)272;
		if(var_48_bool != 1) {
			var_44_bool = 0;
		}
	}
	if(var_44_bool != 0) {
		var_27_bool = true;
	}
	var_49_bool = 0;
	var_49_bool = 1;
	var_51_bool = var_33_int == (int)268;
	if(var_51_bool != 1) {
		var_53_bool = var_33_int == (int)274;
		if(var_53_bool != 1) {
			var_49_bool = 0;
		}
	}
	if(var_49_bool != 0) {
		var_28_bool = true;
	}
	var_55_bool = var_33_int == (int)275;
	if(var_55_bool != 0) {
		var_31_bool = true;
	}
	var_57_bool = var_33_int == (int)276;
	if(var_57_bool != 0) {
		var_32_bool = true;
	}
	return 0;
}


task_0_event_100(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_int)
{
	var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0;
	var_36_int = var_12_float;
	var_37_int = var_13_float;
	@@@var_22_object:ConvertToWorldCoordinates(var_36_int, var_37_int);
	@@@var_22_object:SetMapParams(var_36_int, var_37_int, var_14_float);
	DestroyWindow();
	return 4;
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool)
{
	var_33_float = 0; var_34_float = 0; var_35_int = 0; var_36_object = Obj(); var_37_string = ""; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_float = 0; var_43_float = 0; var_44_int = 0; var_45_object = Obj(); var_46_string = ""; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0;
	GetMap(var_22_object);
	var_51_bool = var_22_object == 0; //@ne
	if(var_51_bool != 0) {
		Trace("Map not found");
		return 18;
	}
	CreatePolyImage(var_24_object, (int)16, (int)16, "ui/ui_player.png");
	@@@var_22_object:GetSize(var_1_int, var_2_int);
	@@@var_22_object:GetMapParams(var_42_float, var_43_float, var_14_float);
	@@@var_22_object:ConvertToMapCoordinates(var_42_float, var_43_float);
	var_12_float = var_42_float;
	var_13_float = var_43_float;
	var_27_bool = false;
	var_28_bool = false;
	var_29_bool = false;
	var_30_bool = false;
	var_31_bool = false;
	var_32_bool = false;
	var_16_bool = true;
	GetWindowSize(var_3_int, var_4_int);
	var_56_float = GlobalVars[0];
	var_56_float = var_3_int / (float)2048.0;
	GlobalVars[0] = var_56_float;
	var_58_float = GlobalVars[1];
	var_59_float = GlobalVars[0];
	var_59_float = var_58_float;
	GlobalVars[1] = var_58_float;
	var_19_bool = false;
	var_61_bool = var_14_float < (int)0;
	if(var_61_bool != 0) {
		var_18_bool = true;
		func_176(var_49_int, var_50_int);
		var_14_float = 2;
	}
	var_99_float = GlobalVars[0];
	var_100_bool = var_14_float < var_99_float;
	if(var_100_bool != 0) {
		var_101_float = GlobalVars[0];
		var_14_float = var_101_float;
	}
	GetVariable("map_chertez_force", var_44_int);
	var_103_int = var_44_int;
	if(var_103_int != 0) {
		var_18_bool = true;
		func_176(var_49_int, var_50_int);
		SetVariable("map_chertez_force", (int)0);
	}
	var_106_bool = var_18_bool;
	if(var_106_bool != 0) {
		var_107_int = 1;
	} else {
			var_187_int = 0; //@pi
	}
	SendMessage(var_107_int, "tavro");
	var_0_int = 0;
	var_5_int = -1;
	var_6_int = -1;
	var_15_bool = false;
	var_23_object = 0;
	var_11_int = -1;
	CreateObjectVector(var_20_object);
	GetMainOutdoorScene(var_45_object);
	GetActiveScene(var_21_object);
	var_109_bool = var_45_object != var_21_object;
	if(var_109_bool != 0) {
		var_17_bool = true;
		@@@var_21_object:GetName(var_46_string);
		var_110_cvector = CVector(0,0,0); var_111_string = "";
		var_111_string = "pt_gmap_" + var_46_string;
		func_1067(var_110_cvector, var_111_string);
		var_25_cvector = var_110_cvector;
		var_125_float = GetByIndex(var_25_cvector, 0);
		var_125_float = var_47_int;
		var_126_float = GetByIndex(var_25_cvector, 2);
		var_126_float = var_48_int;
		@@@var_22_object:ConvertToMapCoordinates(var_47_int, var_48_int);
		var_127_float = GetByIndex(var_25_cvector, 0);
		var_47_int = var_127_float;
		SetByIndex(var_25_cvector, 0) = var_127_float;
		var_128_float = GetByIndex(var_25_cvector, 2);
		var_48_int = var_128_float;
		SetByIndex(var_25_cvector, 2) = var_128_float;
		var_130_int = "indoor map: pt_gmap_" + var_46_string;
		Trace(var_130_int);
	} else {
		Trace("outdoor map");
		var_17_bool = false;
		GetPlayerMapPos(var_49_int, var_50_int);
		var_185_float = GetByIndex(var_25_cvector, 0);
		var_49_int = var_185_float;
		SetByIndex(var_25_cvector, 0) = var_185_float;
		var_186_float = GetByIndex(var_25_cvector, 2);
		var_50_int = var_186_float;
		SetByIndex(var_25_cvector, 2) = var_186_float;

	}
	func_246();
	ShowCursor();
	SetCursor("default");
	SetOwnerDraw((bool)1);
	SetNeedUpdate((bool)1);
	SetBackground("default");
	EnableClipping((bool)1);
	CaptureKeyboard();
	PlaySound("map_open");
	ProcessEvents();
	return 18;
	
}
EMIT "Stack[-6] = 0";


func_0(var_0_int, var_36_bool)
{
	var_37_bool = 0;
	var_37_bool = 0;
	var_39_bool = var_0_int == (int)2;
	if(var_39_bool != 0) {
		var_40_int = 0;
		func_1016(var_40_int);
		var_47_bool = var_40_int >= (int)8;
		if(var_47_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		var_36_bool = 1;
		return 0;
	}
	var_36_bool = 0;
	return 0;
}


func_1025(var_139_string, var_140_int)
{
	var_142_int = "Region" + var_140_int;
	var_139_string = var_142_int + "State";
	return 0;
}


func_1031(var_135_bool, var_136_int)
{
	var_137_int = 0; var_138_int = 0;
	var_139_string = ""; var_140_int = 0;
	var_136_int = var_140_int;
	func_1025(var_139_string, var_140_int);
	GetVariable(var_139_string, var_138_int);
	var_145_int = var_138_int & (int)3;
	var_135_bool = var_145_int == (int)0;
	return 2;
}


func_1043(var_152_bool, var_153_int)
{
	var_154_int = 0; var_155_int = 0;
	var_156_string = ""; var_157_int = 0;
	var_153_int = var_157_int;
	func_1025(var_156_string, var_157_int);
	GetVariable(var_156_string, var_155_int);
	var_159_int = var_155_int & (int)3;
	var_152_bool = var_159_int == (int)1;
	return 2;
}


func_532(var_105_object, var_106_int)
{
	var_107_float = 0; var_108_float = 0; var_109_int = 0; var_110_int = 0; var_111_object = Obj(); var_112_string = ""; var_113_int = 0; var_114_cvector = CVector(0,0,0); var_115_float = 0; var_116_float = 0; var_117_int = 0; var_118_int = 0; var_119_object = Obj(); var_120_string = ""; var_121_int = 0; var_122_cvector = CVector(0,0,0);
	@@var_105_object:GetMarkCount(var_117_int);
	var_118_int = 0;
	
Label_536:
	var_123_bool = var_118_int < var_117_int;
	if(var_123_bool != 0) {
		@@var_105_object:GetMark(var_118_int, var_119_object);
		@@var_119_object:GetLocator(var_120_string);
		@@var_119_object:GetType(var_121_int);
		var_124_cvector = CVector(0,0,0); var_125_string = "";
		var_120_string = var_125_string;
		func_1067(var_124_cvector, var_125_string);
		var_124_cvector = var_122_cvector;
		var_138_float = GetByIndex(var_122_cvector, 0);
		var_138_float = var_115_float;
		var_139_float = GetByIndex(var_122_cvector, 2);
		var_139_float = var_116_float;
		@@var_105_object:ConvertToMapCoordinates(var_115_float, var_116_float);
		var_140_int = 0; var_141_int = 0;
		var_115_float = var_141_int;
		func_304(var_120_string, var_121_int, var_122_cvector, var_140_int, var_141_int);
		var_140_int = var_115_float;
		var_146_int = 0; var_147_int = 0;
		var_116_float = var_147_int;
		func_311(var_120_string, var_121_int, var_122_cvector, var_146_int, var_147_int);
		var_146_int = var_116_float;
		var_152_bool = var_121_int == var_106_int;
		if(var_152_bool != 0) {
			var_154_bool = var_121_int == (int)0;
			if(var_154_bool != 0) {
				var_157_int = var_115_float - (int)16;
				var_159_int = var_116_float - (int)16;
				Blit("quest_mark", var_157_int, var_159_int);
			}
			var_161_bool = var_121_int == (int)1;
			if(var_161_bool != 0) {
				var_164_int = var_115_float - (int)16;
				var_166_int = var_116_float - (int)16;
				Blit("mainquest_mark", var_164_int, var_166_int);
			}
			var_168_bool = var_121_int == (int)3;
			if(var_168_bool != 0) {
				var_171_int = var_115_float - (int)16;
				var_173_int = var_116_float - (int)16;
				Blit("info_mark", var_171_int, var_173_int);
			}
		}
		var_119_object = 0;
		var_118_int = var_118_int + (int)1;
		goto Label_536;
	}
	return 16;
}


func_1055(var_165_bool, var_166_int)
{
	var_167_int = 0; var_168_int = 0;
	var_169_string = ""; var_170_int = 0;
	var_166_int = var_170_int;
	func_1025(var_169_string, var_170_int);
	GetVariable(var_169_string, var_168_int);
	var_172_int = var_168_int & (int)3;
	var_165_bool = var_172_int == (int)2;
	return 2;
}


func_290(var_3_int, var_12_float, var_14_float, var_175_int, var_176_int)
{
	var_178_float = var_3_int / (int)2;
	var_179_int = var_176_int - var_178_float;
	var_180_float = var_179_int / var_14_float;
	var_175_int = var_12_float + var_180_float;
	return 0;
}


func_674(var_26_string)
{
	var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_float = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_float = 0;
	var_39_int = 0;
	var_40_int = 0;
	ScreenToClient(var_39_int, var_40_int);
	GetScreenSize(var_41_int, var_42_int);
	var_43_float = var_42_int / (float)768.0;
	var_46_float = var_43_float * (int)1024;
	StretchBlit(var_26_string, var_39_int, var_40_int, var_41_int, var_46_float, (int)1);
	return 10;
}


func_297(var_4_int, var_13_float, var_14_float, var_181_int, var_182_int)
{
	var_184_float = var_4_int / (int)2;
	var_185_int = var_182_int - var_184_float;
	var_186_float = var_185_int / var_14_float;
	var_181_int = var_13_float + var_186_float;
	return 0;
}


func_1067(var_110_cvector, var_111_string)
{
	var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_object = Obj(); var_116_object = Obj(); var_117_bool = 0; var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_object = Obj(); var_121_object = Obj(); var_122_bool = 0;
	GetMainOutdoorScene(var_120_object);
	var_123_bool = var_120_object == 0; //@ne
	if(var_123_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_118_cvector = CVector(0.0, 0.0, 0.0);
		var_118_cvector = var_110_cvector;
		return 10;
	}
	@@var_120_object:GetLocator(var_111_string, var_122_bool, var_118_cvector, var_119_cvector);
	var_118_cvector = var_110_cvector;
	return 10;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_176(var_19_bool, var_26_string)
{
	var_62_int = 0; var_63_int = 0;
	var_64_bool = var_19_bool;
	if(var_64_bool != 0) {
		return 2;
	}
	GetVariable("map_chertez_state", var_63_int);
	var_66_int = 0;
	func_1010(var_66_int);
	var_71_bool = var_66_int == (int)0;
	if(var_71_bool != 0) {
		var_26_string = "ui\ui_chertez_danko_bg.tex";
		var_72_bool = 0;
		var_72_bool = 0;
		var_74_bool = var_63_int >= (int)1;
		if(var_74_bool != 0) {
			var_76_bool = var_63_int <= (int)6;
			if(var_76_bool != 0) {
				var_72_bool = 1;
			}
		}
		if(var_72_bool != 0) {
			var_78_int = "ui\ui_chertez_danko_" + var_63_int;
			var_26_string = var_78_int + ".tex";
		}
	} else {
		var_80_int = 0;
		func_1010(var_80_int);
		var_82_bool = var_80_int == (int)1;
		if(var_82_bool != 0) {
			var_26_string = "ui\ui_chertez_burah_bg.tex";
			var_83_bool = 0;
			var_83_bool = 0;
			var_85_bool = var_63_int >= (int)1;
			if(var_85_bool != 0) {
				var_87_bool = var_63_int <= (int)6;
				if(var_87_bool != 0) {
					var_83_bool = 1;
				}
			}
			if(var_83_bool != 0) {
				var_89_int = "ui\ui_chertez_burah_" + var_63_int;
				var_26_string = var_89_int + ".tex";
			}
			goto Label_242;
		}
		var_26_string = "ui\ui_chertez_klara_bg.tex";
		var_91_bool = 0;
		var_91_bool = 0;
		var_93_bool = var_63_int >= (int)1;
		if(var_93_bool != 0) {
			var_95_bool = var_63_int <= (int)6;
			if(var_95_bool != 0) {
				var_91_bool = 1;
			}
		}
		if(var_91_bool == 0) goto Label_242;
		var_97_int = "ui\ui_chertez_klara_" + var_63_int;
		var_26_string = var_97_int + ".tex";
	}
Label_242:
	LoadImage(var_26_string);
	var_19_bool = true;
	return 2;
	
}


func_304(var_3_int, var_12_float, var_14_float, var_140_int, var_141_int)
{
	var_142_int = var_141_int - var_12_float;
	var_143_float = var_142_int * var_14_float;
	var_145_float = var_3_int / (int)2;
	var_140_int = var_143_float + var_145_float;
	return 0;
}


func_822(var_0_int, var_14_float, var_38_float)
{
	var_39_bool = var_18_bool;
	if(var_39_bool != 0) {
		return 0;
	}
	var_14_float = var_14_float * var_38_float;
	var_41_bool = var_14_float > (float)2.0;
	if(var_41_bool != 0) {
		var_14_float = 2.0;
	}
	var_0_int = var_0_int + (int)-1;
	var_44_bool = var_0_int < (int)0;
	if(var_44_bool != 0) {
		var_0_int = 0;
	}
	return 0;
}


func_311(var_4_int, var_13_float, var_14_float, var_146_int, var_147_int)
{
	var_148_int = var_147_int - var_13_float;
	var_149_float = var_148_int * var_14_float;
	var_151_float = var_4_int / (int)2;
	var_146_int = var_149_float + var_151_float;
	return 0;
}


func_699(var_17_bool, var_24_object, var_25_cvector)
{
	var_179_int = 0; var_180_int = 0; var_181_float = 0; var_182_int = 0; var_183_int = 0; var_184_float = 0;
	var_185_bool = var_17_bool == 0; //@nz
	if(var_185_bool != 0) {
		GetPlayerMapAngle(var_184_float);
		var_186_int = 0; var_187_int = 0;
		var_188_float = GetByIndex(var_25_cvector, 0);
		var_188_float = var_187_int;
		func_304(var_182_int, var_183_int, var_184_float, var_186_int, var_187_int);
		var_186_int = var_182_int;
		var_189_int = 0; var_190_int = 0;
		var_191_float = GetByIndex(var_25_cvector, 2);
		var_191_float = var_190_int;
		func_311(var_182_int, var_183_int, var_184_float, var_189_int, var_190_int);
		var_189_int = var_183_int;
		ClientToScreen(var_182_int, var_183_int);
		@@@var_24_object:Blit(var_182_int, var_183_int, var_184_float);
	} else {
		var_192_int = 0; var_193_int = 0;
		var_194_float = GetByIndex(var_25_cvector, 0);
		var_194_float = var_193_int;
		func_304(var_182_int, var_183_int, var_184_float, var_192_int, var_193_int);
		var_192_int = var_182_int;
		var_195_int = 0; var_196_int = 0;
		var_197_float = GetByIndex(var_25_cvector, 2);
		var_197_float = var_196_int;
		func_311(var_182_int, var_183_int, var_184_float, var_195_int, var_196_int);
		var_195_int = var_183_int;
		ClientToScreen(var_182_int, var_183_int);
		@@@var_24_object:Blit(var_182_int, var_183_int);
	}
	return 6;
	
}


func_1084(var_91_bool)
{
	var_92_int = 0; var_93_int = 0; var_94_int = 0; var_95_int = 0;
	func_1016((int)0);
	var_96_int = var_94_int;
	var_98_int = "RMap" + var_94_int;
	GetVariable(var_98_int, var_95_int);
	var_91_bool = var_95_int != (int)0;
	return 4;
}


func_838(var_0_int, var_14_float, var_47_float)
{
	var_48_bool = var_18_bool;
	if(var_48_bool != 0) {
		return 0;
	}
	var_14_float = var_14_float / var_47_float;
	var_49_float = GlobalVars[0];
	var_50_bool = var_14_float < var_49_float;
	if(var_50_bool != 0) {
		var_51_float = GlobalVars[0];
		var_14_float = var_51_float;
		var_0_int = var_0_int + (int)1;
		var_54_bool = var_0_int > (int)2;
		if(var_54_bool != 0) {
			var_0_int = 2;
		}
	}
	return 0;
}


func_604(var_3_int, var_4_int, var_12_float, var_13_float, var_14_float, var_22_object, var_23_object)
{
	var_48_float = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_float = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0;
	var_62_bool = 0;
	func_0(var_61_int, var_62_bool);
	if(var_62_bool != 0) {
		return 14;
	}
	var_55_float = var_14_float;
	var_74_float = GlobalVars[0];
	var_75_bool = var_55_float < var_74_float;
	if(var_75_bool != 0) {
		var_76_float = GlobalVars[0];
		var_76_float = var_55_float;
	}
	var_77_float = var_3_int / var_55_float;
	var_79_float = var_77_float / (int)2;
	var_56_int = var_12_float - var_79_float;
	var_80_float = var_3_int / var_55_float;
	var_82_float = var_80_float / (int)2;
	var_57_int = var_12_float + var_82_float;
	var_83_float = var_4_int / var_55_float;
	var_85_float = var_83_float / (int)2;
	var_58_int = var_13_float - var_85_float;
	var_86_float = var_4_int / var_55_float;
	var_88_float = var_86_float / (int)2;
	var_59_int = var_13_float + var_88_float;
	var_60_int = 0;
	var_61_int = 0;
	ClientToScreen(var_60_int, var_61_int);
	var_89_int = var_3_int + var_60_int;
	var_90_int = var_4_int + var_61_int;
	RenderMap(var_60_int, var_61_int, var_89_int, var_90_int, var_56_int, var_58_int, var_57_int, var_59_int);
	var_91_bool = 0;
	func_1084(var_91_bool);
	if(var_91_bool != 0) {
		var_100_int = var_3_int + var_60_int;
		var_101_int = var_4_int + var_61_int;
		RenderRegions(var_60_int, var_61_int, var_100_int, var_101_int, var_56_int, var_58_int, var_57_int, var_59_int);
	}
	var_102_object = var_23_object;
	if(var_102_object != 0) {
		var_103_int = var_3_int + var_60_int;
		var_104_int = var_4_int + var_61_int;
		@@@var_23_object:Render(var_60_int, var_61_int, var_103_int, var_104_int, var_56_int, var_58_int, var_57_int, var_59_int);
	}
	var_105_object = Obj(); var_106_int = 0;
	var_105_object = var_22_object;
	func_532(var_105_object, (int)3);
	var_175_object = Obj(); var_176_int = 0;
	var_175_object = var_22_object;
	func_532(var_175_object, (int)0);
	var_177_object = Obj(); var_178_int = 0;
	var_177_object = var_22_object;
	func_532(var_177_object, (int)1);
	func_699(var_59_int, var_60_int, var_61_int);
	return 14;
}


func_1010(var_66_int)
{
	var_67_int = 0; var_68_int = 0;
	GetVariable("branch", var_68_int);
	var_68_int = var_66_int;
	return 2;
}


func_246()
{
	var_131_int = 0; var_132_int = 0;
	
Label_248:
	var_134_bool = (int)0 < (int)16;
	if(var_134_bool != 0) {
		var_135_bool = 0; var_136_int = 0;
		var_132_int = var_136_int;
		func_1031(var_135_bool, var_136_int);
		if(var_135_bool != 0) {
			SetRegionColor(var_132_int, (float)0.5, (float)0.5, (float)0.5, (float)0.0);
		} else {
			var_152_bool = 0; var_153_int = 0;
			var_132_int = var_153_int;
			func_1043(var_152_bool, var_153_int);
			if(var_152_bool != 0) {
				SetRegionColor(var_132_int, (float)0.5, (float)0.0, (float)0.0, (float)0.5);
				goto Label_286;
			}
			var_165_bool = 0; var_166_int = 0;
			var_132_int = var_166_int;
			func_1055(var_165_bool, var_166_int);
			if(var_165_bool == 0) goto Label_286;
			SetRegionColor(var_132_int, (float)0.0, (float)0.0, (float)0.0, (float)0.5);
	}
		var_132_int = var_132_int + (int)1;
		goto Label_248;
	}
	return 2;
	
}


func_1016(var_40_int)
{
	var_41_float = 0; var_42_float = 0;
	GetGameTime(var_42_float);
	var_44_int = 0;
	var_44_int = var_42_float / (int)24;
	var_40_int = (int)1 + var_44_int;
	return 2;
}


