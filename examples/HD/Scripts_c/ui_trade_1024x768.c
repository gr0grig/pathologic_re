// @IMPORTS: HasInvItemProperty/3,GetInvItemProperty/3,GetContainer/1,CreateObjectVector/1,CreateIntVector/1,CreateStringVector/1,SendMessage/3,SendMessage/2,GetGameTime/1,ShowCursor/0,SetCursor/1,CaptureKeyboard/0,ProcessEvents/0,DestroyWindow/0,Trace/1,GetPlayerMoneyCount/1,GetPlayerContainer/1,SetPlayerMoneyCount/1,GetWindowSize/2,GetItemMaxStackSize/2
// @STRINGS: W:BarterPrice|A:size|A:get|A:remove|A:add|W:$parent|W:default|W:cancel_button|W:ok_button|W:iSlotResetButtons|W:background_left|W:background_right|W:l_scroll_button_top|W:l_scroll_button_bottom|W:r_scroll_button_top|W:r_scroll_button_bottom|W:l_scrollbar|W:r_scrollbar|A:clear|W:r_money_slot|W:l_money_slot|W:Error: failed to remove item|W:Error: failed to add item|A:set|W:l_slot0|W:l_slot|W:r_slot0|W:r_slot|W:sellf|A:HasProperty|A:GetProperty|W:buyf|W:barter|A:GetItemID|W:durability|W:Category|A:GetItemCount|A:GetItem|A:GetItemAmount|A:IsItemSelected|A:Compare|A:RemoveItem|A:AddItem
// @RUN_OP: 0x62
// @RUN_TASK: 0
// @TASK_0: vars=int,int,int,int,int,object,object,object,object,object,object,object,object,object,object,object,object,object,object,object,object,object,string,object,object,object,object,int,int,object params=0
// @EVENT_101: op=0x154 vars=int
// @EVENT_102: op=0x1d6 vars=int
// @EVENT_100: op=0x258 vars=int
// @EVENT_200: op=0x25c vars=int,string,object
// @PE: 0x258,0x6cb,0x816,0x826,0xa0f

task_0_event_101(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_string, var_23_object, var_24_object, var_25_object, var_26_object, var_27_int, var_28_int, var_29_object, var_30_int)
{
	var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0;
	var_40_bool = var_30_int == (int)269;
	if(var_40_bool != 0) {
		var_42_bool = var_22_string == "";
		if(var_42_bool != 0) {

		Label_348:
			var_43_bool = (int)0 < var_0_int;
			if(var_43_bool != 0) {
				var_45_string = ""; var_46_int = 0;
				var_35_int = var_46_int;
				func_2086(var_45_string, var_46_int);
				SendMessage((int)-13, var_45_string);
				var_58_string = ""; var_59_int = 0;
				var_35_int = var_59_int;
				func_2070(var_58_string, var_59_int);
				SendMessage((int)-13, var_58_string);
				var_35_int = var_35_int + (int)1;
				goto Label_348;
			}
		}
	}
	var_72_bool = var_30_int == (int)270;
	if(var_72_bool != 0) {
		var_74_bool = var_22_string == "";
		if(var_74_bool != 0) {

		Label_374:
			var_75_bool = (int)0 < var_0_int;
			if(var_75_bool != 0) {
				var_77_string = ""; var_78_int = 0;
				var_36_int = var_78_int;
				func_2086(var_77_string, var_78_int);
				SendMessage((int)-14, var_77_string);
				var_80_string = ""; var_81_int = 0;
				var_36_int = var_81_int;
				func_2070(var_80_string, var_81_int);
				SendMessage((int)-14, var_80_string);
				var_36_int = var_36_int + (int)1;
				goto Label_374;
			}
		}
	}
	var_84_bool = var_30_int == (int)267;
	if(var_84_bool != 0) {
		var_86_bool = var_22_string == "cancel_button";
		if(var_86_bool != 0) {
			SendMessage((int)-4, "ok_button");
			var_22_string = "ok_button";
		} else {

				Label_406:
					var_108_bool = (int)0 < var_0_int;
					if(var_108_bool == 0) goto Label_425;
					var_110_string = ""; var_111_int = 0;
					var_37_int = var_111_int;
					func_2086(var_110_string, var_111_int);
					SendMessage((int)-15, var_110_string);
					var_113_string = ""; var_114_int = 0;
					var_37_int = var_114_int;
					func_2070(var_113_string, var_114_int);
					SendMessage((int)-15, var_113_string);
					var_37_int = var_37_int + (int)1;
					goto Label_406;
		}
	}
Label_425:
	var_90_bool = var_30_int == (int)268;
	if(var_90_bool != 0) {
		var_92_bool = var_22_string == "cancel_button";
		if(var_92_bool != 0) {
			var_94_string = ""; var_95_int = 0;
			func_2086(var_94_string, (int)1);
			SendMessage((int)-4, var_94_string);
		} else {
			if("" == "ok_button" != 0) {
				SendMessage((int)-4, "cancel_button");
				var_22_string = "cancel_button";
				goto Label_469;
			}

		Label_450:
			var_100_bool = (int)0 < var_0_int;
			if(var_100_bool == 0) goto Label_469;
			var_102_string = ""; var_103_int = 0;
			var_38_int = var_103_int;
			func_2086(var_102_string, var_103_int);
			SendMessage((int)-16, var_102_string);
			var_105_string = ""; var_106_int = 0;
			var_38_int = var_106_int;
			func_2070(var_105_string, var_106_int);
			SendMessage((int)-16, var_105_string);
			var_38_int = var_38_int + (int)1;
			goto Label_450;

		}
	}
Label_469:
	return 8;
	
}


task_0_event_102(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_string, var_23_object, var_24_object, var_25_object, var_26_object, var_27_int, var_28_int, var_29_object, var_30_int)
{
	var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0;
	var_40_bool = var_30_int == (int)273;
	if(var_40_bool != 0) {
		var_42_bool = var_22_string == "";
		if(var_42_bool != 0) {

		Label_478:
			var_43_bool = (int)0 < var_0_int;
			if(var_43_bool != 0) {
				var_45_string = ""; var_46_int = 0;
				var_35_int = var_46_int;
				func_2086(var_45_string, var_46_int);
				SendMessage((int)-13, var_45_string);
				var_58_string = ""; var_59_int = 0;
				var_35_int = var_59_int;
				func_2070(var_58_string, var_59_int);
				SendMessage((int)-13, var_58_string);
				var_35_int = var_35_int + (int)1;
				goto Label_478;
			}
		}
	}
	var_72_bool = var_30_int == (int)271;
	if(var_72_bool != 0) {
		var_74_bool = var_22_string == "";
		if(var_74_bool != 0) {

		Label_504:
			var_75_bool = (int)0 < var_0_int;
			if(var_75_bool != 0) {
				var_77_string = ""; var_78_int = 0;
				var_36_int = var_78_int;
				func_2086(var_77_string, var_78_int);
				SendMessage((int)-14, var_77_string);
				var_80_string = ""; var_81_int = 0;
				var_36_int = var_81_int;
				func_2070(var_80_string, var_81_int);
				SendMessage((int)-14, var_80_string);
				var_36_int = var_36_int + (int)1;
				goto Label_504;
			}
		}
	}
	var_84_bool = var_30_int == (int)272;
	if(var_84_bool != 0) {
		var_86_bool = var_22_string == "cancel_button";
		if(var_86_bool != 0) {
			SendMessage((int)-4, "ok_button");
			var_22_string = "ok_button";
		} else {

				Label_536:
					var_108_bool = (int)0 < var_0_int;
					if(var_108_bool == 0) goto Label_555;
					var_110_string = ""; var_111_int = 0;
					var_37_int = var_111_int;
					func_2086(var_110_string, var_111_int);
					SendMessage((int)-15, var_110_string);
					var_113_string = ""; var_114_int = 0;
					var_37_int = var_114_int;
					func_2070(var_113_string, var_114_int);
					SendMessage((int)-15, var_113_string);
					var_37_int = var_37_int + (int)1;
					goto Label_536;
		}
	}
Label_555:
	var_90_bool = var_30_int == (int)274;
	if(var_90_bool != 0) {
		var_92_bool = var_22_string == "cancel_button";
		if(var_92_bool != 0) {
			var_94_string = ""; var_95_int = 0;
			func_2086(var_94_string, (int)1);
			SendMessage((int)-4, var_94_string);
		} else {
			if("" == "ok_button" != 0) {
				SendMessage((int)-4, "cancel_button");
				var_22_string = "cancel_button";
				goto Label_599;
			}

		Label_580:
			var_100_bool = (int)0 < var_0_int;
			if(var_100_bool == 0) goto Label_599;
			var_102_string = ""; var_103_int = 0;
			var_38_int = var_103_int;
			func_2086(var_102_string, var_103_int);
			SendMessage((int)-16, var_102_string);
			var_105_string = ""; var_106_int = 0;
			var_38_int = var_106_int;
			func_2070(var_105_string, var_106_int);
			SendMessage((int)-16, var_105_string);
			var_38_int = var_38_int + (int)1;
			goto Label_580;

		}
	}
Label_599:
	return 8;
	
}


task_0_event_100(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_string, var_23_object, var_24_object, var_25_object, var_26_object, var_27_int, var_28_int, var_29_object, var_30_int)
{
	DestroyWindow();
	return 0;
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_string, var_23_object, var_24_object, var_25_object, var_26_object, var_27_int, var_28_int, var_29_object, var_30_int, var_31_string, var_32_object)
{
	var_33_int = 0; var_34_int = 0;
	var_36_bool = var_30_int == (int)-20;
	if(var_36_bool != 0) {
		var_22_string = "";
		Trace("iSlotResetButtons");
		return 2;
	}
	var_39_bool = var_30_int == (int)-4;
	if(var_39_bool != 0) {
		var_40_bool = 0;
		var_40_bool = 1;
		var_41_string = ""; var_42_int = 0;
		func_2086(var_41_string, (int)0);
		var_53_bool = var_31_string == var_41_string;
		if(var_53_bool != 1) {
			var_54_string = ""; var_55_int = 0;
			func_2086(var_54_string, (int)1);
			var_56_bool = var_31_string == var_54_string;
			if(var_56_bool != 1) {
				var_40_bool = 0;
			}
		}
		if(var_40_bool != 0) {
			var_58_bool = var_2_int < (int)2;
			if(var_58_bool != 0) {
				var_22_string = "cancel_button";
				SendMessage((int)-4, var_22_string);
				return 2;
			EMIT "GOTO 0x286";
			}
			var_2_int = var_2_int - (int)2;
			func_1332(var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
		}
		var_148_bool = 0;
		var_148_bool = 1;
		var_149_string = ""; var_150_int = 0;
		var_150_int = var_0_int - (int)1;
		func_2086(var_149_string, var_150_int);
		var_152_bool = var_31_string == var_149_string;
		if(var_152_bool != 1) {
			var_153_string = ""; var_154_int = 0;
			var_154_int = var_0_int - (int)2;
			func_2086(var_153_string, var_154_int);
			var_156_bool = var_31_string == var_153_string;
			if(var_156_bool != 1) {
				var_148_bool = 0;
			}
		}
		if(var_148_bool != 0) {
			var_2_int = var_2_int + (int)2;
			func_1332(var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
		}
		var_158_bool = 0;
		var_158_bool = 1;
		var_159_string = ""; var_160_int = 0;
		func_2070(var_159_string, (int)0);
		var_171_bool = var_31_string == var_159_string;
		if(var_171_bool != 1) {
			var_172_string = ""; var_173_int = 0;
			func_2070(var_172_string, (int)1);
			var_174_bool = var_31_string == var_172_string;
			if(var_174_bool != 1) {
				var_158_bool = 0;
			}
		}
		if(var_158_bool != 0) {
			var_1_int = var_1_int - (int)2;
			func_1245(var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
		}
		var_233_bool = 0;
		var_233_bool = 1;
		var_234_string = ""; var_235_int = 0;
		var_235_int = var_0_int - (int)1;
		func_2070(var_234_string, var_235_int);
		var_237_bool = var_31_string == var_234_string;
		if(var_237_bool != 1) {
			var_238_string = ""; var_239_int = 0;
			var_239_int = var_0_int - (int)2;
			func_2070(var_238_string, var_239_int);
			var_241_bool = var_31_string == var_238_string;
			if(var_241_bool != 1) {
				var_233_bool = 0;
			}
		}
		if(var_233_bool != 0) {
			var_1_int = var_1_int + (int)2;
			func_1245(var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
		}
		SendMessage((int)-4, var_31_string);
		return 2;
	}
	var_244_int = 0; var_245_int = 0; var_246_string = "";
	var_30_int = var_245_int;
	var_31_string = var_246_string;
	func_2299(var_245_int, var_246_string);
	var_244_int = var_34_int;
	var_344_bool = var_34_int != (int)-1;
	if(var_344_bool != 0) {
		var_346_bool = var_30_int == (int)0;
		if(var_346_bool != 0) {
			var_347_int = 0;
			var_34_int = var_347_int;
			func_1749(var_27_int, var_28_int, var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int, var_347_int);
		} else {
			var_537_int = 0;
			var_34_int = var_537_int;
			func_1815(var_28_int, var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int, var_537_int);
	}
		var_631_int = 0; var_632_int = 0; var_633_string = "";
		var_30_int = var_632_int;
		var_31_string = var_633_string;
		func_2320(var_632_int, var_633_string);
		var_631_int = var_34_int;
		var_645_bool = var_34_int != (int)-1;
		if(var_645_bool != 0) {
			var_647_bool = var_30_int == (int)0;
			if(var_647_bool != 0) {
				var_648_int = 0;
				var_34_int = var_648_int;
				func_1879(var_27_int, var_28_int, var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int, var_648_int);
			} else {
				var_703_int = 0;
				var_34_int = var_703_int;
				func_1949(var_26_object, var_27_int, var_28_int, var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int, var_703_int);
		}
			var_753_bool = var_31_string == "cancel_button";
			if(var_753_bool != 0) {
				func_872(var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_string, var_23_object, var_24_object, var_25_object, var_26_object, var_27_int, var_28_int, var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
				return 2;
			}
			var_913_bool = var_31_string == "background_left";
			if(var_913_bool != 0) {
				var_915_int = "background_left" + var_30_int;
				Trace(var_915_int);
				var_917_float = (int)2 * var_30_int;
				var_1_int = var_1_int - var_917_float;
				func_1245(var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
			}
			var_919_bool = var_31_string == "background_right";
			if(var_919_bool != 0) {
				var_921_int = "background_right" + var_30_int;
				Trace(var_921_int);
				var_923_float = (int)2 * var_30_int;
				var_2_int = var_2_int - var_923_float;
				func_1332(var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
			}
			var_925_bool = var_31_string == "l_scroll_button_top";
			if(var_925_bool != 0) {
				var_1_int = var_1_int - (int)2;
				func_1245(var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
				return 2;
			}
			var_928_bool = var_31_string == "l_scroll_button_bottom";
			if(var_928_bool != 0) {
				var_1_int = var_1_int + (int)2;
				func_1245(var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
				return 2;
			}
			var_931_bool = var_31_string == "r_scroll_button_top";
			if(var_931_bool != 0) {
				var_2_int = var_2_int - (int)2;
				func_1332(var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
				return 2;
			}
			var_934_bool = var_31_string == "r_scroll_button_bottom";
			if(var_934_bool != 0) {
				var_2_int = var_2_int + (int)2;
				func_1332(var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
				return 2;
			}
			var_937_bool = var_31_string == "l_scrollbar";
			if(var_937_bool != 0) {
				var_938_int = 0;
				func_1207(var_33_int, var_34_int, var_938_int);
				var_953_float = var_938_int * var_30_int;
				var_955_float = var_953_float / (float)100.0;
				var_1_int = var_955_float + (float)0.5;
				var_1_int = var_1_int * (int)2;
				func_1245(var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
				return 2;
			}
			var_959_bool = var_31_string == "r_scrollbar";
			if(var_959_bool != 0) {
				var_960_int = 0;
				func_1226(var_33_int, var_34_int, var_960_int);
				var_975_float = var_960_int * var_30_int;
				var_977_float = var_975_float / (float)100.0;
				var_2_int = var_977_float + (float)0.5;
				var_2_int = var_2_int * (int)2;
				func_1332(var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
				return 2;
			}
			var_981_bool = var_31_string == "ok_button";
			if(var_981_bool != 0) {
				func_1436(var_30_int, var_31_string, var_32_object, var_33_int, var_34_int);
				return 2;
			}
			return 2;
		}
		return 2;
	}
	return 2;
	
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_string, var_23_object, var_24_object, var_25_object, var_26_object, var_27_int, var_28_int, var_29_object)
{
	var_30_int = 0; var_31_string = ""; var_32_string = ""; var_33_string = ""; var_34_string = ""; var_35_object = Obj(); var_36_object = Obj(); var_37_int = 0; var_38_string = ""; var_39_string = ""; var_40_string = ""; var_41_string = ""; var_42_object = Obj(); var_43_object = Obj(); var_44_float = 0; var_45_int = 0; var_46_string = ""; var_47_string = ""; var_48_string = ""; var_49_string = ""; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; var_53_string = ""; var_54_string = ""; var_55_string = ""; var_56_string = ""; var_57_object = Obj(); var_58_object = Obj(); var_59_float = 0;
	var_60_int = 0;
	func_2102(var_60_int);
	var_0_int = var_60_int;
	GetContainer(var_29_object);
	CreateObjectVector(var_23_object);
	CreateObjectVector(var_24_object);
	CreateObjectVector(var_5_object);
	CreateIntVector(var_6_object);
	CreateIntVector(var_7_object);
	CreateIntVector(var_8_object);
	CreateObjectVector(var_9_object);
	CreateIntVector(var_10_object);
	CreateIntVector(var_11_object);
	CreateObjectVector(var_12_object);
	CreateIntVector(var_13_object);
	CreateObjectVector(var_14_object);
	CreateIntVector(var_15_object);
	CreateObjectVector(var_16_object);
	CreateIntVector(var_17_object);
	CreateObjectVector(var_18_object);
	CreateIntVector(var_19_object);
	CreateObjectVector(var_20_object);
	CreateIntVector(var_21_object);
	var_147_int = 0;
	func_2393(var_147_int);
	var_28_int = var_147_int;
	var_22_string = "";
	var_45_int = 0;
	
Label_149:
	var_157_bool = var_45_int < var_0_int;
	if(var_157_bool != 0) {
		var_46_string = "";
		var_47_string = "";
		var_48_string = "$parent";
		var_49_string = "$parent";
		var_159_int = var_45_int % (int)2;
		var_161_bool = var_159_int == (int)0;
		if(var_161_bool != 0) {
			var_162_string = ""; var_163_int = 0;
			var_163_int = var_45_int + (int)1;
			func_2086(var_162_string, var_163_int);
			var_162_string = var_47_string;
			var_175_string = ""; var_176_int = 0;
			var_176_int = var_45_int + (int)1;
			func_2070(var_175_string, var_176_int);
			var_175_string = var_46_string;
		} else {
			var_206_string = ""; var_207_int = 0;
			var_207_int = var_45_int - (int)1;
			func_2086(var_206_string, var_207_int);
			var_206_string = var_46_string;
	}
		var_52_int = 0;

	Label_232:
		var_209_bool = var_52_int < var_0_int;
		if(var_209_bool != 0) {
			var_53_string = "";
			var_54_string = "";
			var_55_string = "$parent";
			var_56_string = "$parent";
			var_211_int = var_52_int % (int)2;
			var_213_bool = var_211_int == (int)0;
			if(var_213_bool != 0) {
				var_214_string = ""; var_215_int = 0;
				var_215_int = var_52_int + (int)1;
				func_2070(var_214_string, var_215_int);
				var_214_string = var_54_string;
			} else {
				var_235_string = ""; var_236_int = 0;
				var_236_int = var_52_int - (int)1;
				func_2070(var_235_string, var_236_int);
				var_235_string = var_53_string;
				var_238_string = ""; var_239_int = 0;
				var_239_int = var_52_int - (int)1;
				func_2086(var_238_string, var_239_int);
				var_238_string = var_54_string;
		}
			var_242_string = ""; var_243_int = 0;
			func_2086(var_242_string, (int)0);
			SendMessage((int)-6, var_242_string);
			func_872(var_35_object, var_36_object, var_37_int, var_38_string, var_39_string, var_40_string, var_41_string, var_42_object, var_43_object, var_44_float, var_45_int, var_46_string, var_47_string, var_48_string, var_49_string, var_50_object, var_51_object, var_52_int, var_53_string, var_54_string, var_55_string, var_56_string, var_57_object, var_58_object, var_59_float);
			GetGameTime(var_59_float);
			var_550_float = var_59_float / (int)24;
			var_27_int = (int)1 + var_550_float;
			ShowCursor();
			SetCursor("default");
			CaptureKeyboard();
			ProcessEvents();
			return 30;
		}
		var_218_bool = var_52_int > (int)1;
		if(var_218_bool != 0) {
			var_219_string = ""; var_220_int = 0;
			var_220_int = var_52_int - (int)2;
			func_2070(var_219_string, var_220_int);
			var_219_string = var_55_string;
		}
		var_223_int = var_0_int - (int)2;
		var_224_bool = var_52_int < var_223_int;
		if(var_224_bool != 0) {
			var_225_string = ""; var_226_int = 0;
			var_226_int = var_52_int + (int)2;
			func_2070(var_225_string, var_226_int);
			var_225_string = var_56_string;
		}
		CreateStringVector(var_57_object);
		@@var_57_object:add(var_53_string);
		@@var_57_object:add(var_54_string);
		@@var_57_object:add(var_55_string);
		@@var_57_object:add(var_56_string);
		var_229_string = ""; var_230_int = 0;
		var_52_int = var_230_int;
		func_2070(var_229_string, var_230_int);
		SendMessage((int)-1, var_229_string, var_57_object);
		CreateIntVector(var_58_object);
		@@var_58_object:add(var_0_int);
		var_232_string = ""; var_233_int = 0;
		var_52_int = var_233_int;
		func_2070(var_232_string, var_233_int);
		SendMessage((int)-19, var_232_string, var_58_object);
		var_58_object = 0;
		var_57_object = 0;
		var_52_int = var_52_int + (int)1;
		goto Label_232;
	}
	var_189_bool = var_45_int > (int)1;
	if(var_189_bool != 0) {
		var_190_string = ""; var_191_int = 0;
		var_191_int = var_45_int - (int)2;
		func_2086(var_190_string, var_191_int);
		var_190_string = var_48_string;
	}
	var_194_int = var_0_int - (int)2;
	var_195_bool = var_45_int < var_194_int;
	if(var_195_bool != 0) {
		var_196_string = ""; var_197_int = 0;
		var_197_int = var_45_int + (int)2;
		func_2086(var_196_string, var_197_int);
		var_196_string = var_49_string;
	}
	CreateStringVector(var_50_object);
	@@var_50_object:add(var_46_string);
	@@var_50_object:add(var_47_string);
	@@var_50_object:add(var_48_string);
	@@var_50_object:add(var_49_string);
	var_200_string = ""; var_201_int = 0;
	var_45_int = var_201_int;
	func_2086(var_200_string, var_201_int);
	SendMessage((int)-1, var_200_string, var_50_object);
	CreateIntVector(var_51_object);
	@@var_51_object:add(var_0_int);
	var_203_string = ""; var_204_int = 0;
	var_45_int = var_204_int;
	func_2086(var_203_string, var_204_int);
	SendMessage((int)-19, var_203_string, var_51_object);
	var_51_object = 0;
	var_50_object = 0;
	var_45_int = var_45_int + (int)1;
	goto Label_149;
	
}


func_0(var_325_bool, var_326_object, var_327_int, var_328_bool)
{
	var_329_bool = 0; var_330_int = 0; var_331_bool = 0; var_332_int = 0;
	var_334_bool = var_327_int == (int)0;
	if(var_334_bool != 0) {
		var_325_bool = 0;
		return 4;
	}
	var_335_int = 0; var_336_object = Obj();
	var_326_object = var_336_object;
	func_2409(var_335_int, var_336_object);
	var_340_int = "BarterPrice" + var_327_int;
	HasInvItemProperty(var_331_bool, var_335_int, var_340_int);
	var_341_bool = var_331_bool == 0; //@nz
	if(var_341_bool != 0) {
		var_325_bool = 1;
		return 4;
	}
	var_342_int = 0; var_343_object = Obj();
	var_326_object = var_343_object;
	func_2409(var_342_int, var_343_object);
	var_345_int = "BarterPrice" + var_327_int;
	GetInvItemProperty(var_332_int, var_342_int, var_345_int);
	var_346_bool = 0;
	var_346_bool = 0;
	var_347_bool = var_328_bool;
	if(var_347_bool != 0) {
		var_349_bool = var_332_int > (int)0;
		if(var_349_bool != 0) {
			var_346_bool = 1;
		}
	}
	if(var_346_bool != 0) {
		var_325_bool = 0;
		return 4;
	}
	var_350_bool = 0;
	var_350_bool = 0;
	var_351_bool = var_328_bool == 0; //@nz
	if(var_351_bool != 0) {
		var_353_bool = var_332_int < (int)0;
		if(var_353_bool != 0) {
			var_350_bool = 1;
		}
	}
	if(var_350_bool != 0) {
		var_325_bool = 0;
		return 4;
	}
	var_325_bool = 1;
	return 4;
}


func_2048(var_2_int, var_7_object, var_504_int, var_505_int)
{
	var_506_int = 0; var_507_int = 0; var_508_int = 0; var_509_int = 0;
	@@@var_7_object:size(var_508_int);
	var_510_int = var_505_int + var_2_int;
	var_511_bool = var_510_int >= var_508_int;
	if(var_511_bool != 0) {
		var_504_int = 0;
		return 4;
	}
	var_512_int = var_505_int + var_2_int;
	@@@var_7_object:get(var_509_int, var_512_int);
	var_509_int = var_504_int;
	return 4;
}


func_2562(var_264_int, var_265_int)
{
	var_266_object = Obj(); var_267_int = 0; var_268_object = Obj(); var_269_int = 0;
	GetContainer(var_268_object);
	@@var_268_object:GetItemAmount(var_269_int, var_265_int);
	var_269_int = var_264_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1146(var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object)
{
	var_384_int = 0; var_385_object = Obj(); var_386_object = Obj();
	var_385_object = var_12_object;
	var_386_object = var_13_object;
	func_1177((int)0, var_385_object, var_386_object);
	var_405_int = 0; var_406_object = Obj(); var_407_object = Obj();
	var_406_object = var_14_object;
	var_407_object = var_15_object;
	func_1177((int)1, var_406_object, var_407_object);
	var_408_int = 0; var_409_object = Obj(); var_410_object = Obj();
	var_409_object = var_16_object;
	var_410_object = var_17_object;
	func_1177((int)2, var_409_object, var_410_object);
	var_411_int = 0; var_412_object = Obj(); var_413_object = Obj();
	var_412_object = var_18_object;
	var_413_object = var_19_object;
	func_1177((int)3, var_412_object, var_413_object);
	var_414_int = 0; var_415_object = Obj(); var_416_object = Obj();
	var_415_object = var_20_object;
	var_416_object = var_21_object;
	func_1177((int)4, var_415_object, var_416_object);
	return 0;
}


func_2570(var_484_bool, var_485_object, var_486_object)
{
	var_487_bool = 0; var_488_bool = 0;
	@@var_485_object:Compare(var_488_bool, var_486_object);
	var_488_bool = var_484_bool;
	return 2;
}


func_2061(var_391_int)
{
	var_392_float = 0; var_393_float = 0;
	GetGameTime(var_393_float);
	var_395_int = 0;
	var_395_int = var_393_float / (int)24;
	var_391_int = (int)1 + var_395_int;
	return 2;
}


func_2575(var_481_bool, var_482_object, var_483_object)
{
	var_484_bool = 0; var_485_object = Obj(); var_486_object = Obj();
	var_482_object = var_485_object;
	var_483_object = var_486_object;
	func_2570(var_484_bool, var_485_object, var_486_object);
	var_484_bool = var_481_bool;
	return 0;
}


func_2320(var_631_int, var_633_string)
{
	var_634_int = 0; var_635_int = 0; var_636_int = 0; var_637_int = 0;
	func_2102((int)0);
	var_638_int = var_636_int;
	
Label_2326:
	var_639_bool = (int)0 < var_636_int;
	if(var_639_bool != 0) {
		var_640_string = ""; var_641_int = 0;
		var_637_int = var_641_int;
		func_2086(var_640_string, var_641_int);
		var_642_bool = var_633_string == var_640_string;
		if(var_642_bool != 0) {
			var_637_int = var_631_int;
			var_637_int = var_637_int + (int)1;
			goto Label_2326;
		}
		return 4;
	}
	var_631_int = -1;
	return 4;
}


func_1428(var_3_int)
{
	SendMessage(var_3_int, "r_money_slot");
	return 0;
}


func_2070(var_175_string, var_176_int)
{
	var_179_int = var_176_int + (int)1;
	var_181_bool = var_179_int < (int)10;
	if(var_181_bool != 0) {
		var_184_int = var_176_int + (int)1;
		var_175_string = "l_slot0" + var_184_int;
		return 0;
	}
	var_187_int = var_176_int + (int)1;
	var_175_string = "l_slot" + var_187_int;
	return 0;
}


func_2583(var_997_bool, var_998_object, var_999_object, var_1000_int)
{
	var_1003_int = 0; var_1004_object = Obj(); var_1005_int = 0; var_1006_int = 0; var_1007_object = Obj(); var_1008_int = 0;
	@@var_998_object:GetItemCount(var_1006_int, var_1000_int);
	var_1008_int = 0;
	
Label_2587:
	var_1009_bool = var_1008_int < var_1006_int;
	if(var_1009_bool != 0) {
		@@var_998_object:GetItem(var_1007_object, var_1008_int, var_1000_int);
		var_1010_bool = 0; var_1011_object = Obj(); var_1012_object = Obj();
		var_999_object = var_1011_object;
		var_1007_object = var_1012_object;
		func_2570(var_1010_bool, var_1011_object, var_1012_object);
		if(var_1010_bool != 0) {
			@@var_998_object:RemoveItem(var_1008_int, (int)1, var_1000_int);
			var_997_bool = 1;
			var_1008_int = var_1008_int + (int)1;
			goto Label_2587;
		}
		return 6;
	}
	var_997_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";


func_1815(var_1_int, var_9_object, var_10_object, var_11_object, var_27_int, var_28_int, var_29_object, var_537_int)
{
	var_538_int = 0; var_539_object = Obj(); var_540_int = 0; var_541_int = 0; var_542_int = 0; var_543_int = 0; var_544_object = Obj(); var_545_int = 0; var_546_int = 0; var_547_int = 0;
	@@@var_11_object:size(var_543_int);
	var_548_int = var_537_int + var_1_int;
	var_549_bool = var_548_int >= var_543_int;
	if(var_549_bool != 0) {
		return 10;
	}
	var_550_int = var_537_int + var_1_int;
	@@@var_9_object:get(var_544_object, var_550_int);
	var_551_bool = 0; var_552_object = Obj(); var_553_int = 0; var_554_bool = 0;
	var_544_object = var_552_object;
	var_553_int = var_28_int;
	func_0(var_551_bool, var_552_object, var_553_int, (bool)0);
	if(var_551_bool != 0) {
		return 10;
	}
	var_555_int = var_537_int + var_1_int;
	@@@var_11_object:get(var_545_int, var_555_int);
	var_556_int = var_537_int + var_1_int;
	@@@var_10_object:get(var_546_int, var_556_int);
	var_558_bool = var_545_int > (int)0;
	if(var_558_bool != 0) {
		var_559_bool = 0; var_560_object = Obj();
		var_544_object = var_560_object;
		func_1591(var_538_int, var_539_object, var_540_int, var_541_int, var_542_int, var_543_int, var_544_object, var_545_int, var_546_int, var_547_int, var_559_bool, var_560_object);
		var_609_object = Obj();
		var_544_object = var_609_object;
		func_74(var_546_int, var_547_int, var_609_object);
		var_545_int = var_545_int + (int)-1;
		var_622_int = var_537_int + var_1_int;
		@@@var_11_object:set(var_622_int, var_545_int);
		var_623_int = 0; var_624_object = Obj(); var_625_int = 0;
		var_544_object = var_624_object;
		var_625_int = var_28_int;
		func_2414(var_623_int, var_624_object, var_625_int);
		var_626_float = 0; var_627_object = Obj(); var_628_int = 0; var_629_int = 0;
		var_627_object = var_29_object;
		var_628_int = var_27_int;
		var_629_int = var_28_int;
		func_2367(var_626_float, var_627_object, var_628_int, var_629_int);
		var_547_int = var_623_int * var_626_float;
		var_630_int = 0;
		var_547_int = var_630_int;
		func_1739(var_546_int, var_547_int, var_630_int);
	}
	func_1245(var_543_int, var_544_object, var_545_int, var_546_int, var_547_int);
	func_1332(var_542_int, var_543_int, var_544_object, var_545_int, var_546_int, var_547_int);
	return 10;
}
EMIT "Stack[-4] = 0";


func_1432(var_4_int)
{
	SendMessage(var_4_int, "l_money_slot");
	return 0;
}


func_1177(var_384_int, var_385_object, var_386_object)
{
	var_387_object = Obj(); var_388_int = 0; var_389_int = 0; var_390_int = 0; var_391_object = Obj(); var_392_int = 0; var_393_int = 0; var_394_int = 0;
	var_395_int = 0; var_396_int = 0;
	var_384_int = var_396_int;
	func_2520(var_395_int, var_396_int);
	var_395_int = var_392_int;
	
Label_1184:
	var_397_bool = (int)0 < var_392_int;
	if(var_397_bool != 0) {
		var_398_int = 0; var_399_int = 0; var_400_int = 0;
		var_384_int = var_399_int;
		var_394_int = var_400_int;
		func_2537(var_398_int, var_399_int, var_400_int);
		var_398_int = var_393_int;
		var_401_object = Obj(); var_402_int = 0; var_403_int = 0;
		var_384_int = var_402_int;
		var_394_int = var_403_int;
		func_2528(var_401_object, var_402_int, var_403_int);
		var_401_object = var_391_object;
		@@var_385_object:add(var_391_object);
		@@var_386_object:add(var_393_int);
		var_394_int = var_394_int + (int)1;
		goto Label_1184;
	}
	return 8;
}
EMIT "Stack[-4] = 0";


func_1436(var_3_int, var_4_int, var_23_object, var_24_object, var_28_int)
{
	var_982_int = 0; var_983_bool = 0; var_984_object = Obj(); var_985_object = Obj(); var_986_object = Obj(); var_987_int = 0; var_988_int = 0; var_989_int = 0; var_990_bool = 0; var_991_object = Obj(); var_992_object = Obj(); var_993_object = Obj(); var_994_int = 0; var_995_int = 0;
	GetContainer(var_992_object);
	GetPlayerContainer(var_993_object);
	@@@var_24_object:size(var_989_int);
	var_994_int = 0;
	
Label_1444:
	var_996_bool = var_994_int < var_989_int;
	if(var_996_bool != 0) {
		@@@var_24_object:get(var_991_object, var_994_int);
		var_997_bool = 0; var_998_object = Obj(); var_999_object = Obj(); var_1000_int = 0;
		var_993_object = var_998_object;
		var_991_object = var_999_object;
		var_1001_int = 0; var_1002_object = Obj();
		var_991_object = var_1002_object;
		func_2493(var_1001_int, var_1002_object);
		var_1001_int = var_1000_int;
		func_2583(var_997_bool, var_998_object, var_999_object, var_1000_int);
		var_997_bool = var_990_bool;
		var_1015_bool = var_990_bool == 0; //@nz
		if(var_1015_bool != 0) {
			Trace("Error: failed to remove item");
		}
		var_1017_bool = 0; var_1018_object = Obj(); var_1019_object = Obj(); var_1020_int = 0;
		var_992_object = var_1018_object;
		var_991_object = var_1019_object;
		func_2608(var_1017_bool, var_1018_object, var_1019_object, (int)0);
		var_1017_bool = var_990_bool;
		var_1024_bool = var_990_bool == 0; //@nz
		if(var_1024_bool != 0) {
			Trace("Error: failed to add item");
		}
		var_994_int = var_994_int + (int)1;
		goto Label_1444;
	}
	@@@var_23_object:size(var_989_int);
	var_995_int = 0;
	
Label_1482:
	var_1027_bool = var_995_int < var_989_int;
	if(var_1027_bool != 0) {
		@@@var_23_object:get(var_991_object, var_995_int);
		var_1028_bool = 0; var_1029_object = Obj(); var_1030_object = Obj(); var_1031_int = 0;
		var_992_object = var_1029_object;
		var_991_object = var_1030_object;
		func_2583(var_1028_bool, var_1029_object, var_1030_object, (int)0);
		var_1028_bool = var_990_bool;
		var_1032_bool = var_990_bool == 0; //@nz
		if(var_1032_bool != 0) {
			Trace("Error: failed to remove item");
		}
		var_1034_bool = 0; var_1035_object = Obj(); var_1036_object = Obj(); var_1037_int = 0;
		var_993_object = var_1035_object;
		var_991_object = var_1036_object;
		var_1038_int = 0; var_1039_object = Obj();
		var_991_object = var_1039_object;
		func_2493(var_1038_int, var_1039_object);
		var_1038_int = var_1037_int;
		func_2608(var_1034_bool, var_1035_object, var_1036_object, var_1037_int);
		var_1034_bool = var_990_bool;
		var_1040_bool = var_990_bool == 0; //@nz
		if(var_1040_bool != 0) {
			Trace("Error: failed to add item");
		}
		var_995_int = var_995_int + (int)1;
		goto Label_1482;
	}
	var_1044_bool = var_28_int == (int)0;
	if(var_1044_bool != 0) {
		SetPlayerMoneyCount(var_3_int);
	}
	var_4_int = 0;
	func_872(var_24_object, var_25_object, var_26_object, var_27_int, var_28_int, var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int, var_982_int, var_983_bool, var_984_object, var_985_object, var_986_object, var_987_int, var_988_int, var_989_int, var_990_bool, var_991_object, var_992_object, var_993_object, var_994_int, var_995_int);
	return 14;
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


func_1949(var_2_int, var_3_int, var_5_object, var_6_object, var_7_object, var_8_object, var_27_int, var_28_int, var_29_object, var_703_int)
{
	var_704_int = 0; var_705_object = Obj(); var_706_int = 0; var_707_int = 0; var_708_int = 0; var_709_int = 0; var_710_int = 0; var_711_object = Obj(); var_712_int = 0; var_713_int = 0; var_714_int = 0; var_715_int = 0;
	@@@var_7_object:size(var_710_int);
	var_716_int = var_703_int + var_2_int;
	var_717_bool = var_716_int >= var_710_int;
	if(var_717_bool != 0) {
		return 12;
	}
	var_718_int = var_703_int + var_2_int;
	@@@var_5_object:get(var_711_object, var_718_int);
	var_719_bool = 0; var_720_object = Obj(); var_721_int = 0; var_722_bool = 0;
	var_711_object = var_720_object;
	var_721_int = var_28_int;
	func_0(var_719_bool, var_720_object, var_721_int, (bool)1);
	if(var_719_bool != 0) {
		return 12;
	}
	var_723_int = var_703_int + var_2_int;
	@@@var_8_object:get(var_712_int, var_723_int);
	var_725_bool = var_712_int > (int)0;
	if(var_725_bool != 0) {
		return 12;
	}
	var_726_int = var_703_int + var_2_int;
	@@@var_7_object:get(var_713_int, var_726_int);
	var_727_int = var_703_int + var_2_int;
	@@@var_6_object:get(var_714_int, var_727_int);
	var_729_bool = var_713_int > (int)0;
	if(var_729_bool != 0) {
		var_730_int = 0; var_731_object = Obj(); var_732_int = 0;
		var_711_object = var_731_object;
		var_732_int = var_28_int;
		func_2414(var_730_int, var_731_object, var_732_int);
		var_733_float = 0; var_734_object = Obj(); var_735_int = 0; var_736_int = 0;
		var_734_object = var_29_object;
		var_735_int = var_27_int;
		var_736_int = var_28_int;
		func_2341(var_733_float, var_734_object, var_735_int, var_736_int);
		var_715_int = var_730_int * var_733_float;
		var_737_bool = var_715_int <= var_3_int;
		if(var_737_bool != 0) {
			var_738_bool = 0; var_739_object = Obj();
			var_711_object = var_739_object;
			func_1530(var_706_int, var_707_int, var_708_int, var_709_int, var_710_int, var_711_object, var_712_int, var_713_int, var_714_int, var_715_int, var_738_bool, var_739_object);
			if(var_738_bool != 0) {
				var_713_int = var_713_int + (int)-1;
				var_741_object = Obj();
				var_711_object = var_741_object;
				func_50(var_714_int, var_715_int, var_741_object);
				var_742_int = var_703_int + var_2_int;
				@@@var_7_object:set(var_742_int, var_713_int);
				var_743_int = 0;
				var_744_int = 0; var_745_object = Obj(); var_746_int = 0;
				var_711_object = var_745_object;
				var_746_int = var_28_int;
				func_2414(var_744_int, var_745_object, var_746_int);
				var_747_int = -var_744_int;
				var_748_float = 0; var_749_object = Obj(); var_750_int = 0; var_751_int = 0;
				var_749_object = var_29_object;
				var_750_int = var_27_int;
				var_751_int = var_28_int;
				func_2341(var_748_float, var_749_object, var_750_int, var_751_int);
				var_743_int = var_747_int * var_748_float;
				func_1739(var_714_int, var_715_int, var_743_int);
			}
		}
	}
	func_1245(var_711_object, var_712_int, var_713_int, var_714_int, var_715_int);
	func_1332(var_710_int, var_711_object, var_712_int, var_713_int, var_714_int, var_715_int);
	return 12;
}
EMIT "Stack[-5] = 0";


func_2341(var_682_float, var_683_object, var_684_int, var_685_int)
{
	var_686_float = 0; var_687_int = 0; var_688_bool = 0; var_689_float = 0; var_690_int = 0; var_691_bool = 0;
	var_693_bool = var_685_int != (int)0;
	if(var_693_bool != 0) {
		var_682_float = 1;
		return 6;
	}
	var_689_float = 1;
	var_690_int = 1;
	
Label_2349:
	var_694_bool = var_690_int <= var_684_int;
	if(var_694_bool != 0) {
		var_696_int = "sellf" + var_690_int;
		@@var_683_object:HasProperty(var_696_int, var_691_bool);
		var_697_bool = var_691_bool;
		if(var_697_bool != 0) {
			var_699_int = "sellf" + var_690_int;
			@@var_683_object:GetProperty(var_699_int, var_689_float);
		}
		var_690_int = var_690_int + (int)1;
		goto Label_2349;
	}
	var_682_float = var_689_float / (int)100;
	return 6;
}


func_2086(var_162_string, var_163_int)
{
	var_166_int = var_163_int + (int)1;
	var_168_bool = var_166_int < (int)10;
	if(var_168_bool != 0) {
		var_171_int = var_163_int + (int)1;
		var_162_string = "r_slot0" + var_171_int;
		return 0;
	}
	var_174_int = var_163_int + (int)1;
	var_162_string = "r_slot" + var_174_int;
	return 0;
}


func_1703(var_567_bool, var_568_object, var_569_object, var_570_object)
{
	var_571_int = 0; var_572_object = Obj(); var_573_int = 0; var_574_int = 0; var_575_int = 0; var_576_object = Obj(); var_577_int = 0; var_578_int = 0;
	@@var_569_object:size(var_575_int);
	var_577_int = 0;
	
Label_1707:
	var_579_bool = var_577_int < var_575_int;
	if(var_579_bool != 0) {
		@@var_569_object:get(var_576_object, var_577_int);
		@@var_570_object:get(var_578_int, var_577_int);
		var_580_bool = 0; var_581_object = Obj(); var_582_object = Obj();
		var_568_object = var_581_object;
		var_576_object = var_582_object;
		func_2575(var_580_bool, var_581_object, var_582_object);
		if(var_580_bool != 0) {
			var_578_int = var_578_int + (int)-1;
			var_585_bool = var_578_int == (int)0;
			if(var_585_bool != 0) {
				@@var_569_object:remove(var_577_int);
				@@var_570_object:remove(var_577_int);
			} else {
				@@var_570_object:set(var_577_int, var_578_int);
		}
			var_577_int = var_577_int + (int)1;
			goto Label_1707;
	}
		var_567_bool = 0;
		return 8;
	}
	var_567_bool = 1;
	return 8;
	
}
EMIT "Stack[-3] = 0";


func_2608(var_1017_bool, var_1018_object, var_1019_object, var_1020_int)
{
	var_1021_bool = 0; var_1022_bool = 0;
	@@var_1018_object:AddItem(var_1022_bool, var_1019_object, var_1020_int, (int)1);
	var_1022_bool = var_1017_bool;
	return 2;
}


func_50(var_23_object, var_24_object, var_522_object)
{
	var_523_int = 0; var_524_object = Obj(); var_525_int = 0; var_526_int = 0; var_527_object = Obj(); var_528_int = 0;
	@@@var_24_object:size(var_526_int);
	var_528_int = 0;
	
Label_54:
	var_529_bool = var_528_int < var_526_int;
	if(var_529_bool != 0) {
		@@@var_24_object:get(var_527_object, var_528_int);
		var_530_bool = 0; var_531_object = Obj(); var_532_object = Obj();
		var_527_object = var_531_object;
		var_522_object = var_532_object;
		func_2570(var_530_bool, var_531_object, var_532_object);
		if(var_530_bool != 0) {
			@@@var_24_object:remove(var_528_int);
			var_528_int = var_528_int + (int)1;
			goto Label_54;
		}
		return 6;
	}
	@@@var_23_object:add(var_522_object);
	return 6;
}
EMIT "Stack[-2] = 0";


func_1332(var_0_int, var_2_int, var_5_object, var_6_object, var_8_object, var_28_int)
{
	var_475_int = 0; var_476_object = Obj(); var_477_int = 0; var_478_int = 0; var_479_int = 0; var_480_int = 0; var_481_int = 0; var_482_object = Obj(); var_483_int = 0; var_484_object = Obj(); var_485_int = 0; var_486_int = 0; var_487_int = 0; var_488_int = 0; var_489_int = 0; var_490_object = Obj();
	@@@var_5_object:size(var_483_int);
	var_491_int = var_2_int + var_0_int;
	var_492_bool = var_491_int > var_483_int;
	if(var_492_bool != 0) {
		var_494_int = var_483_int % (int)2;
		var_496_bool = var_494_int == (int)0;
		if(var_496_bool != 0) {
			var_497_int = var_2_int + var_0_int;
			var_498_int = var_497_int - var_483_int;
			var_2_int = var_2_int - var_498_int;
		} else {
				var_533_int = var_2_int + var_0_int;
				var_534_int = var_533_int - var_483_int;
				var_536_int = var_534_int - (int)1;
				var_2_int = var_2_int - var_536_int;
		}
	}
	var_500_bool = var_2_int < (int)0;
	if(var_500_bool != 0) {
		var_2_int = 0;
	}
	var_487_int = var_2_int;
	
Label_1357:
	var_501_int = var_2_int + var_0_int;
	var_502_bool = var_487_int < var_501_int;
	if(var_502_bool != 0) {
		var_503_bool = var_487_int < var_483_int;
		if(var_503_bool != 0) {
			@@@var_5_object:get(var_484_object, var_487_int);
			@@@var_6_object:get(var_486_int, var_487_int);
			var_504_int = 0; var_505_int = 0;
			var_505_int = var_487_int - var_2_int;
			func_2048(var_489_int, var_490_object, var_504_int, var_505_int);
			var_504_int = var_488_int;
			var_514_bool = var_488_int > (int)0;
			if(var_514_bool != 0) {
				(int)0 = (int)0 | (int)16384;
			}
			@@@var_8_object:get(var_489_int, var_487_int);
			var_516_bool = 0;
			var_516_bool = 1;
			var_517_bool = 0; var_518_object = Obj(); var_519_int = 0; var_520_bool = 0;
			var_484_object = var_518_object;
			var_519_int = var_28_int;
			func_0(var_517_bool, var_518_object, var_519_int, (bool)1);
			if(var_517_bool != 1) {
				var_522_bool = var_489_int > (int)0;
				if(var_522_bool != 1) {
					var_516_bool = 0;
				}
			}
			if(var_516_bool != 0) {
				var_485_int = var_485_int | (int)131072;
			}
			CreateIntVector(var_490_object);
			@@var_490_object:add(var_488_int);
			@@var_490_object:add(var_486_int);
			var_525_string = ""; var_526_int = 0;
			var_526_int = var_487_int - var_2_int;
			func_2086(var_525_string, var_526_int);
			SendMessage((int)65536, var_525_string, var_490_object);
			var_527_string = ""; var_528_int = 0;
			var_528_int = var_487_int - var_2_int;
			func_2086(var_527_string, var_528_int);
			SendMessage(var_485_int, var_527_string, var_484_object);
			var_490_object = 0;
		} else {
			var_531_string = ""; var_532_int = 0;
			var_532_int = var_487_int - var_2_int;
			func_2086(var_531_string, var_532_int);
			SendMessage((int)32768, var_531_string);
	}
		var_487_int = var_487_int + (int)1;
		goto Label_1357;
	}
	return 16;
	
}
EMIT "Stack[-7] = 0";


func_2102(var_60_int)
{
	var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_int = 0; var_66_int = 0;
	GetWindowSize(var_65_int, var_66_int);
	var_64_int = 18;
	var_67_bool = 0;
	var_67_bool = 0;
	var_69_bool = var_65_int == (int)1024;
	if(var_69_bool != 0) {
		var_71_bool = var_66_int == (int)768;
		if(var_71_bool != 0) {
			var_67_bool = 1;
		}
	}
	if(var_67_bool != 0) {
		var_64_int = 24;
	} else {
		var_72_bool = 0;
		var_72_bool = 0;
		var_74_bool = var_65_int == (int)1280;
		if(var_74_bool != 0) {
			var_76_bool = var_66_int == (int)1024;
			if(var_76_bool != 0) {
				var_72_bool = 1;
			}
		}
		if(var_72_bool != 0) {
			var_64_int = 32;
			goto Label_2297;
		}
		var_77_bool = 0;
		var_77_bool = 0;
		var_79_bool = var_65_int == (int)1280;
		if(var_79_bool != 0) {
			var_81_bool = var_66_int == (int)720;
			if(var_81_bool != 0) {
				var_77_bool = 1;
			}
		}
		if(var_77_bool != 0) {
			var_64_int = 22;
			goto Label_2297;
		}
		var_82_bool = 0;
		var_82_bool = 0;
		var_84_bool = var_65_int == (int)1280;
		if(var_84_bool != 0) {
			var_86_bool = var_66_int == (int)768;
			if(var_86_bool != 0) {
				var_82_bool = 1;
			}
		}
		if(var_82_bool != 0) {
			var_64_int = 24;
			goto Label_2297;
		}
		var_87_bool = 0;
		var_87_bool = 0;
		var_89_bool = var_65_int == (int)1280;
		if(var_89_bool != 0) {
			var_91_bool = var_66_int == (int)800;
			if(var_91_bool != 0) {
				var_87_bool = 1;
			}
		}
		if(var_87_bool != 0) {
			var_64_int = 24;
			goto Label_2297;
		}
		var_92_bool = 0;
		var_92_bool = 0;
		var_94_bool = var_65_int == (int)1360;
		if(var_94_bool != 0) {
			var_96_bool = var_66_int == (int)768;
			if(var_96_bool != 0) {
				var_92_bool = 1;
			}
		}
		if(var_92_bool != 0) {
			var_64_int = 24;
			goto Label_2297;
		}
		var_97_bool = 0;
		var_97_bool = 0;
		var_99_bool = var_65_int == (int)1366;
		if(var_99_bool != 0) {
			var_101_bool = var_66_int == (int)768;
			if(var_101_bool != 0) {
				var_97_bool = 1;
			}
		}
		if(var_97_bool != 0) {
			var_64_int = 24;
			goto Label_2297;
		}
		var_102_bool = 0;
		var_102_bool = 0;
		var_104_bool = var_65_int == (int)1440;
		if(var_104_bool != 0) {
			var_106_bool = var_66_int == (int)900;
			if(var_106_bool != 0) {
				var_102_bool = 1;
			}
		}
		if(var_102_bool != 0) {
			var_64_int = 28;
			goto Label_2297;
		}
		var_107_bool = 0;
		var_107_bool = 0;
		var_109_bool = var_65_int == (int)1536;
		if(var_109_bool != 0) {
			var_111_bool = var_66_int == (int)864;
			if(var_111_bool != 0) {
				var_107_bool = 1;
			}
		}
		if(var_107_bool != 0) {
			var_64_int = 26;
			goto Label_2297;
		}
		var_112_bool = 0;
		var_112_bool = 0;
		var_114_bool = var_65_int == (int)1600;
		if(var_114_bool != 0) {
			var_116_bool = var_66_int == (int)1200;
			if(var_116_bool != 0) {
				var_112_bool = 1;
			}
		}
		if(var_112_bool != 0) {
			var_64_int = 38;
			goto Label_2297;
		}
		var_117_bool = 0;
		var_117_bool = 0;
		var_119_bool = var_65_int == (int)1600;
		if(var_119_bool != 0) {
			var_121_bool = var_66_int == (int)1200;
			if(var_121_bool != 0) {
				var_117_bool = 1;
			}
		}
		if(var_117_bool != 0) {
			var_64_int = 38;
			goto Label_2297;
		}
		var_122_bool = 0;
		var_122_bool = 0;
		var_124_bool = var_65_int == (int)1600;
		if(var_124_bool != 0) {
			var_126_bool = var_66_int == (int)900;
			if(var_126_bool != 0) {
				var_122_bool = 1;
			}
		}
		if(var_122_bool != 0) {
			var_64_int = 28;
			goto Label_2297;
		}
		var_127_bool = 0;
		var_127_bool = 0;
		var_129_bool = var_65_int == (int)1600;
		if(var_129_bool != 0) {
			var_131_bool = var_66_int == (int)1050;
			if(var_131_bool != 0) {
				var_127_bool = 1;
			}
		}
		if(var_127_bool != 0) {
			var_64_int = 32;
			goto Label_2297;
		}
		var_132_bool = 0;
		var_132_bool = 0;
		var_134_bool = var_65_int == (int)1600;
		if(var_134_bool != 0) {
			var_136_bool = var_66_int == (int)1050;
			if(var_136_bool != 0) {
				var_132_bool = 1;
			}
		}
		if(var_132_bool != 0) {
			var_64_int = 32;
			goto Label_2297;
		}
		var_137_bool = 0;
		var_137_bool = 0;
		var_139_bool = var_65_int == (int)1920;
		if(var_139_bool != 0) {
			var_141_bool = var_66_int == (int)1080;
			if(var_141_bool != 0) {
				var_137_bool = 1;
			}
		}
		if(var_137_bool != 0) {
			var_64_int = 34;
			goto Label_2297;
		}
		var_142_bool = 0;
		var_142_bool = 0;
		var_144_bool = var_65_int == (int)1920;
		if(var_144_bool != 0) {
			var_146_bool = var_66_int == (int)1200;
			if(var_146_bool != 0) {
				var_142_bool = 1;
			}
		}
		if(var_142_bool == 0) goto Label_2297;
		var_64_int = 38;
	}
Label_2297:
	var_64_int = var_60_int;
	return 6;
	
}


func_1207(var_0_int, var_9_object, var_938_int)
{
	var_939_int = 0; var_940_int = 0; var_941_int = 0; var_942_int = 0;
	@@@var_9_object:size(var_941_int);
	var_944_int = var_941_int + (int)2;
	var_946_int = var_944_int - (int)1;
	var_948_float = var_946_int / (int)2;
	var_950_float = var_0_int / (int)2;
	var_942_int = var_948_float - var_950_float;
	var_952_bool = var_942_int < (int)0;
	if(var_952_bool != 0) {
		var_938_int = 0;
		return 4;
	}
	var_942_int = var_938_int;
	return 4;
}


func_1591(var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_559_bool, var_560_object)
{
	var_561_int = 0; var_562_int = 0;
	var_563_int = 0; var_564_object = Obj();
	var_560_object = var_564_object;
	func_2493(var_563_int, var_564_object);
	var_563_int = var_562_int;
	var_566_bool = var_562_int == (int)0;
	if(var_566_bool != 0) {
		var_567_bool = 0; var_568_object = Obj(); var_569_object = Obj(); var_570_object = Obj();
		var_560_object = var_568_object;
		var_569_object = var_12_object;
		var_570_object = var_13_object;
		func_1703(var_567_bool, var_568_object, var_569_object, var_570_object);
		var_567_bool = var_559_bool;
		return 2;
	EMIT "GOTO 0x66c";
	}
	var_588_bool = var_562_int == (int)1;
	if(var_588_bool != 0) {
		var_589_bool = 0; var_590_object = Obj(); var_591_object = Obj(); var_592_object = Obj();
		var_560_object = var_590_object;
		var_591_object = var_14_object;
		var_592_object = var_15_object;
		func_1703(var_589_bool, var_590_object, var_591_object, var_592_object);
		var_589_bool = var_559_bool;
		return 2;
	EMIT "GOTO 0x66c";
	}
	var_594_bool = var_562_int == (int)2;
	if(var_594_bool != 0) {
		var_595_bool = 0; var_596_object = Obj(); var_597_object = Obj(); var_598_object = Obj();
		var_560_object = var_596_object;
		var_597_object = var_16_object;
		var_598_object = var_17_object;
		func_1703(var_595_bool, var_596_object, var_597_object, var_598_object);
		var_595_bool = var_559_bool;
		return 2;
	EMIT "GOTO 0x66c";
	}
	var_600_bool = var_562_int == (int)3;
	if(var_600_bool != 0) {
		var_601_bool = 0; var_602_object = Obj(); var_603_object = Obj(); var_604_object = Obj();
		var_560_object = var_602_object;
		var_603_object = var_18_object;
		var_604_object = var_19_object;
		func_1703(var_601_bool, var_602_object, var_603_object, var_604_object);
		var_601_bool = var_559_bool;
		return 2;
	}
	var_605_bool = 0; var_606_object = Obj(); var_607_object = Obj(); var_608_object = Obj();
	var_560_object = var_606_object;
	var_607_object = var_20_object;
	var_608_object = var_21_object;
	func_1703(var_605_bool, var_606_object, var_607_object, var_608_object);
	var_605_bool = var_559_bool;
	return 2;
}


func_2493(var_451_int, var_452_object)
{
	var_453_int = 0; var_454_int = 0;
	var_455_int = 0; var_456_object = Obj();
	var_452_object = var_456_object;
	func_2409(var_455_int, var_456_object);
	GetInvItemProperty(var_454_int, var_455_int, "Category");
	var_454_int = var_451_int;
	return 2;
}


func_2367(var_426_float, var_427_object, var_428_int, var_429_int)
{
	var_430_float = 0; var_431_int = 0; var_432_bool = 0; var_433_float = 0; var_434_int = 0; var_435_bool = 0;
	var_437_bool = var_429_int != (int)0;
	if(var_437_bool != 0) {
		var_426_float = 1;
		return 6;
	}
	var_433_float = 1;
	var_434_int = 1;
	
Label_2375:
	var_438_bool = var_434_int <= var_428_int;
	if(var_438_bool != 0) {
		var_440_int = "buyf" + var_434_int;
		@@var_427_object:HasProperty(var_440_int, var_435_bool);
		var_441_bool = var_435_bool;
		if(var_441_bool != 0) {
			var_443_int = "buyf" + var_434_int;
			@@var_427_object:GetProperty(var_443_int, var_433_float);
		}
		var_434_int = var_434_int + (int)1;
		goto Label_2375;
	}
	var_426_float = var_433_float / (int)100;
	return 6;
}


func_2503(var_472_int, var_473_object)
{
	var_474_int = 0; var_475_int = 0;
	var_476_int = 0; var_477_object = Obj();
	var_473_object = var_477_object;
	func_2409(var_476_int, var_477_object);
	GetItemMaxStackSize(var_476_int, var_475_int);
	var_475_int = var_472_int;
	return 2;
}


func_969()
{
	var_278_int = 0; var_279_bool = 0;
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, (int)0, (bool)0);
	var_366_int = 0; var_367_bool = 0;
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, (int)1, (bool)0);
	var_368_int = 0; var_369_bool = 0;
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, (int)2, (bool)0);
	var_370_int = 0; var_371_bool = 0;
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, (int)3, (bool)0);
	var_372_int = 0; var_373_bool = 0;
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, (int)4, (bool)0);
	var_374_int = 0; var_375_bool = 0;
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, (int)0, (bool)1);
	var_376_int = 0; var_377_bool = 0;
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, (int)1, (bool)1);
	var_378_int = 0; var_379_bool = 0;
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, (int)2, (bool)1);
	var_380_int = 0; var_381_bool = 0;
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, (int)3, (bool)1);
	var_382_int = 0; var_383_bool = 0;
	func_1020(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int, (int)4, (bool)1);
	return 0;
}


func_1226(var_0_int, var_5_object, var_960_int)
{
	var_961_int = 0; var_962_int = 0; var_963_int = 0; var_964_int = 0;
	@@@var_5_object:size(var_963_int);
	var_966_int = var_963_int + (int)2;
	var_968_int = var_966_int - (int)1;
	var_970_float = var_968_int / (int)2;
	var_972_float = var_0_int / (int)2;
	var_964_int = var_970_float - var_972_float;
	var_974_bool = var_964_int < (int)0;
	if(var_974_bool != 0) {
		var_960_int = 0;
		return 4;
	}
	var_964_int = var_960_int;
	return 4;
}


func_1739(var_3_int, var_4_int, var_534_int)
{
	var_3_int = var_3_int + var_534_int;
	var_4_int = var_4_int - var_534_int;
	func_1428(var_534_int);
	func_1432(var_534_int);
	return 0;
}


func_74(var_23_object, var_24_object, var_609_object)
{
	var_610_int = 0; var_611_object = Obj(); var_612_int = 0; var_613_int = 0; var_614_object = Obj(); var_615_int = 0;
	@@@var_23_object:size(var_613_int);
	var_615_int = 0;
	
Label_78:
	var_616_bool = var_615_int < var_613_int;
	if(var_616_bool != 0) {
		@@@var_23_object:get(var_614_object, var_615_int);
		var_617_bool = 0; var_618_object = Obj(); var_619_object = Obj();
		var_614_object = var_618_object;
		var_609_object = var_619_object;
		func_2570(var_617_bool, var_618_object, var_619_object);
		if(var_617_bool != 0) {
			@@@var_23_object:remove(var_615_int);
			var_615_int = var_615_int + (int)1;
			goto Label_78;
		}
		return 6;
	}
	@@@var_24_object:add(var_609_object);
	return 6;
}
EMIT "Stack[-2] = 0";


func_2512(var_258_int)
{
	var_259_int = 0; var_260_object = Obj(); var_261_int = 0; var_262_object = Obj();
	GetContainer(var_262_object);
	@@var_262_object:GetItemCount(var_261_int);
	var_261_int = var_258_int;
	return 4;
}
EMIT "Stack[-1] = 0";


func_1749(var_1_int, var_3_int, var_9_object, var_10_object, var_11_object, var_27_int, var_28_int, var_29_object, var_347_int)
{
	var_348_int = 0; var_349_object = Obj(); var_350_int = 0; var_351_int = 0; var_352_int = 0; var_353_int = 0; var_354_object = Obj(); var_355_int = 0; var_356_int = 0; var_357_int = 0;
	@@@var_11_object:size(var_353_int);
	var_358_int = var_347_int + var_1_int;
	var_359_bool = var_358_int >= var_353_int;
	if(var_359_bool != 0) {
		return 10;
	}
	var_360_int = var_347_int + var_1_int;
	@@@var_9_object:get(var_354_object, var_360_int);
	var_361_bool = 0; var_362_object = Obj(); var_363_int = 0; var_364_bool = 0;
	var_354_object = var_362_object;
	var_363_int = var_28_int;
	func_0(var_361_bool, var_362_object, var_363_int, (bool)0);
	if(var_361_bool != 0) {
		return 10;
	}
	var_365_int = var_347_int + var_1_int;
	@@@var_11_object:get(var_355_int, var_365_int);
	var_366_int = var_347_int + var_1_int;
	@@@var_10_object:get(var_356_int, var_366_int);
	var_367_bool = var_355_int < var_356_int;
	if(var_367_bool != 0) {
		var_368_int = 0; var_369_object = Obj(); var_370_int = 0;
		var_354_object = var_369_object;
		var_370_int = var_28_int;
		func_2414(var_368_int, var_369_object, var_370_int);
		var_426_float = 0; var_427_object = Obj(); var_428_int = 0; var_429_int = 0;
		var_427_object = var_29_object;
		var_428_int = var_27_int;
		var_429_int = var_28_int;
		func_2367(var_426_float, var_427_object, var_428_int, var_429_int);
		var_357_int = var_368_int * var_426_float;
		var_446_bool = var_357_int <= var_3_int;
		if(var_446_bool != 0) {
			var_447_bool = 0; var_448_object = Obj();
			var_354_object = var_448_object;
			func_1530(var_348_int, var_349_object, var_350_int, var_351_int, var_352_int, var_353_int, var_354_object, var_355_int, var_356_int, var_357_int, var_447_bool, var_448_object);
			if(var_447_bool != 0) {
				var_355_int = var_355_int + (int)1;
				var_521_int = var_347_int + var_1_int;
				@@@var_11_object:set(var_521_int, var_355_int);
				var_522_object = Obj();
				var_354_object = var_522_object;
				func_50(var_356_int, var_357_int, var_522_object);
				var_534_int = 0;
				var_534_int = -var_357_int;
				func_1739(var_356_int, var_357_int, var_534_int);
			}
		}
	}
	func_1245(var_353_int, var_354_object, var_355_int, var_356_int, var_357_int);
	func_1332(var_352_int, var_353_int, var_354_object, var_355_int, var_356_int, var_357_int);
	return 10;
}
EMIT "Stack[-4] = 0";


func_1879(var_2_int, var_5_object, var_6_object, var_7_object, var_8_object, var_27_int, var_28_int, var_29_object, var_648_int)
{
	var_649_int = 0; var_650_object = Obj(); var_651_int = 0; var_652_int = 0; var_653_int = 0; var_654_int = 0; var_655_int = 0; var_656_object = Obj(); var_657_int = 0; var_658_int = 0; var_659_int = 0; var_660_int = 0;
	@@@var_7_object:size(var_655_int);
	var_661_int = var_648_int + var_2_int;
	var_662_bool = var_661_int >= var_655_int;
	if(var_662_bool != 0) {
		return 12;
	}
	var_663_int = var_648_int + var_2_int;
	@@@var_5_object:get(var_656_object, var_663_int);
	var_664_bool = 0; var_665_object = Obj(); var_666_int = 0; var_667_bool = 0;
	var_656_object = var_665_object;
	var_666_int = var_28_int;
	func_0(var_664_bool, var_665_object, var_666_int, (bool)1);
	if(var_664_bool != 0) {
		return 12;
	}
	var_668_int = var_648_int + var_2_int;
	@@@var_8_object:get(var_657_int, var_668_int);
	var_670_bool = var_657_int > (int)0;
	if(var_670_bool != 0) {
		return 12;
	}
	var_671_int = var_648_int + var_2_int;
	@@@var_7_object:get(var_658_int, var_671_int);
	var_672_int = var_648_int + var_2_int;
	@@@var_6_object:get(var_659_int, var_672_int);
	var_673_bool = var_658_int < var_659_int;
	if(var_673_bool != 0) {
		var_674_bool = 0; var_675_object = Obj();
		var_656_object = var_675_object;
		func_1591(var_651_int, var_652_int, var_653_int, var_654_int, var_655_int, var_656_object, var_657_int, var_658_int, var_659_int, var_660_int, var_674_bool, var_675_object);
		var_676_object = Obj();
		var_656_object = var_676_object;
		func_74(var_659_int, var_660_int, var_676_object);
		var_658_int = var_658_int + (int)1;
		var_678_int = var_648_int + var_2_int;
		@@@var_7_object:set(var_678_int, var_658_int);
		var_679_int = 0; var_680_object = Obj(); var_681_int = 0;
		var_656_object = var_680_object;
		var_681_int = var_28_int;
		func_2414(var_679_int, var_680_object, var_681_int);
		var_682_float = 0; var_683_object = Obj(); var_684_int = 0; var_685_int = 0;
		var_683_object = var_29_object;
		var_684_int = var_27_int;
		var_685_int = var_28_int;
		func_2341(var_682_float, var_683_object, var_684_int, var_685_int);
		var_660_int = var_679_int * var_682_float;
		var_702_int = 0;
		var_660_int = var_702_int;
		func_1739(var_659_int, var_660_int, var_702_int);
	}
	func_1245(var_656_object, var_657_int, var_658_int, var_659_int, var_660_int);
	func_1332(var_655_int, var_656_object, var_657_int, var_658_int, var_659_int, var_660_int);
	return 12;
}
EMIT "Stack[-5] = 0";


func_2520(var_290_int, var_291_int)
{
	var_292_int = 0; var_293_object = Obj(); var_294_int = 0; var_295_object = Obj();
	GetPlayerContainer(var_295_object);
	@@var_295_object:GetItemCount(var_294_int, var_291_int);
	var_294_int = var_290_int;
	return 4;
}
EMIT "Stack[-1] = 0";


func_2393(var_147_int)
{
	var_148_object = Obj(); var_149_bool = 0; var_150_int = 0; var_151_object = Obj(); var_152_bool = 0; var_153_int = 0;
	GetContainer(var_151_object);
	@@var_151_object:HasProperty("barter", var_152_bool);
	var_155_bool = var_152_bool == 0; //@nz
	if(var_155_bool != 0) {
		var_147_int = 0;
		return 6;
	}
	@@var_151_object:GetProperty("barter", var_153_int);
	var_153_int = var_147_int;
	return 6;
}
EMIT "Stack[-3] = 0";


func_1115(var_9_object, var_10_object, var_11_object)
{
	var_248_int = 0; var_249_int = 0; var_250_object = Obj(); var_251_object = Obj(); var_252_int = 0; var_253_int = 0; var_254_int = 0; var_255_object = Obj(); var_256_object = Obj(); var_257_int = 0;
	func_2512((int)0);
	var_258_int = var_253_int;
	
Label_1121:
	var_263_bool = (int)0 < var_253_int;
	if(var_263_bool != 0) {
		var_264_int = 0; var_265_int = 0;
		var_257_int = var_265_int;
		func_2562(var_264_int, var_265_int);
		var_264_int = var_254_int;
		var_270_object = Obj(); var_271_int = 0;
		var_257_int = var_271_int;
		func_2553(var_270_object, var_271_int);
		var_270_object = var_256_object;
		@@@var_9_object:add(var_256_object);
		@@@var_10_object:add(var_254_int);
		@@@var_11_object:add((int)0);
		var_257_int = var_257_int + (int)1;
		goto Label_1121;
	}
	return 10;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1245(var_0_int, var_1_int, var_9_object, var_10_object, var_28_int)
{
	var_417_int = 0; var_418_int = 0; var_419_int = 0; var_420_object = Obj(); var_421_int = 0; var_422_int = 0; var_423_object = Obj(); var_424_int = 0; var_425_int = 0; var_426_int = 0; var_427_object = Obj(); var_428_int = 0; var_429_int = 0; var_430_object = Obj();
	@@@var_9_object:size(var_424_int);
	var_431_int = var_1_int + var_0_int;
	var_432_bool = var_431_int > var_424_int;
	if(var_432_bool != 0) {
		var_434_int = var_424_int % (int)2;
		var_436_bool = var_434_int == (int)0;
		if(var_436_bool != 0) {
			var_437_int = var_1_int + var_0_int;
			var_438_int = var_437_int - var_424_int;
			var_1_int = var_1_int - var_438_int;
		} else {
				var_470_int = var_1_int + var_0_int;
				var_471_int = var_470_int - var_424_int;
				var_473_int = var_471_int - (int)1;
				var_1_int = var_1_int - var_473_int;
		}
	}
	var_440_bool = var_1_int < (int)0;
	if(var_440_bool != 0) {
		var_1_int = 0;
	}
	var_426_int = var_1_int;
	
Label_1270:
	var_441_int = var_1_int + var_0_int;
	var_442_bool = var_426_int < var_441_int;
	if(var_442_bool != 0) {
		var_443_bool = var_426_int < var_424_int;
		if(var_443_bool != 0) {
			@@@var_9_object:get(var_427_object, var_426_int);
			@@@var_10_object:get(var_428_int, var_426_int);
			var_444_int = 0; var_445_int = 0;
			var_445_int = var_426_int - var_1_int;
			func_2035(var_429_int, var_430_object, var_444_int, var_445_int);
			var_444_int = var_429_int;
			var_454_bool = var_429_int > (int)0;
			if(var_454_bool != 0) {
				(int)0 = (int)0 | (int)16384;
			}
			var_456_bool = 0; var_457_object = Obj(); var_458_int = 0; var_459_bool = 0;
			var_427_object = var_457_object;
			var_458_int = var_28_int;
			func_0(var_456_bool, var_457_object, var_458_int, (bool)0);
			if(var_456_bool != 0) {
				var_425_int = var_425_int | (int)131072;
			}
			CreateIntVector(var_430_object);
			@@var_430_object:add(var_429_int);
			@@var_430_object:add(var_428_int);
			var_462_string = ""; var_463_int = 0;
			var_463_int = var_426_int - var_1_int;
			func_2070(var_462_string, var_463_int);
			SendMessage((int)65536, var_462_string, var_430_object);
			var_464_string = ""; var_465_int = 0;
			var_465_int = var_426_int - var_1_int;
			func_2070(var_464_string, var_465_int);
			SendMessage(var_425_int, var_464_string, var_427_object);
			var_430_object = 0;
			var_427_object = 0;
		} else {
			var_468_string = ""; var_469_int = 0;
			var_469_int = var_426_int - var_1_int;
			func_2070(var_468_string, var_469_int);
			SendMessage((int)32768, var_468_string);
	}
		var_426_int = var_426_int + (int)1;
		goto Label_1270;
	}
	return 14;
	
}


func_2528(var_315_object, var_316_int, var_317_int)
{
	var_318_object = Obj(); var_319_object = Obj(); var_320_object = Obj(); var_321_object = Obj();
	GetPlayerContainer(var_320_object);
	@@var_320_object:GetItem(var_321_object, var_317_int, var_316_int);
	var_321_object = var_315_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_872(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_23_object, var_24_object, var_28_int)
{
	var_244_int = 0; var_245_int = 0;
	var_1_int = 0;
	var_2_int = 0;
	var_4_int = 0;
	var_247_bool = var_28_int == (int)0;
	if(var_247_bool != 0) {
		GetPlayerMoneyCount(var_3_int);
	} else {
				var_3_int = 0;
	}
	@@@var_23_object:clear();
	@@@var_24_object:clear();
	@@@var_5_object:clear();
	@@@var_6_object:clear();
	@@@var_7_object:clear();
	@@@var_8_object:clear();
	@@@var_9_object:clear();
	@@@var_10_object:clear();
	@@@var_11_object:clear();
	@@@var_12_object:clear();
	@@@var_13_object:clear();
	@@@var_14_object:clear();
	@@@var_15_object:clear();
	@@@var_16_object:clear();
	@@@var_17_object:clear();
	@@@var_18_object:clear();
	@@@var_19_object:clear();
	@@@var_20_object:clear();
	@@@var_21_object:clear();
	func_1115(var_59_float, var_244_int, var_245_int);
	func_969();
	func_1146(var_52_int, var_53_string, var_54_string, var_55_string, var_56_string, var_57_object, var_58_object, var_59_float, var_244_int, var_245_int);
	func_1245(var_57_object, var_58_object, var_59_float, var_244_int, var_245_int);
	func_1432(var_245_int);
	func_1332(var_56_string, var_57_object, var_58_object, var_59_float, var_244_int, var_245_int);
	func_1428(var_245_int);
	@@@var_9_object:size(var_245_int);
	var_538_bool = var_245_int <= var_0_int;
	if(var_538_bool != 0) {
		SendMessage((int)16384, "l_scrollbar");
	} else {
			SendMessage((int)0, "l_scrollbar");

	}
	@@@var_5_object:size(var_245_int);
	var_541_bool = var_245_int <= var_0_int;
	if(var_541_bool != 0) {
		SendMessage((int)16384, "r_scrollbar");
	} else {
		SendMessage((int)0, "r_scrollbar");

	}
	return 2;
	
}


func_2409(var_335_int, var_336_object)
{
	var_337_int = 0; var_338_int = 0;
	@@var_336_object:GetItemID(var_338_int);
	var_338_int = var_335_int;
	return 2;
}


func_2537(var_308_int, var_309_int, var_310_int)
{
	var_311_object = Obj(); var_312_int = 0; var_313_object = Obj(); var_314_int = 0;
	GetPlayerContainer(var_313_object);
	@@var_313_object:GetItemAmount(var_314_int, var_310_int, var_309_int);
	var_314_int = var_308_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_2414(var_368_int, var_369_object, var_370_int)
{
	var_371_int = 0; var_372_int = 0; var_373_int = 0; var_374_string = ""; var_375_bool = 0; var_376_bool = 0; var_377_int = 0; var_378_bool = 0; var_379_int = 0; var_380_int = 0; var_381_int = 0; var_382_int = 0; var_383_string = ""; var_384_bool = 0; var_385_bool = 0; var_386_int = 0; var_387_bool = 0; var_388_int = 0;
	var_390_bool = var_370_int == (int)0;
	if(var_390_bool != 0) {
		func_2061((int)0);
		var_391_int = var_380_int;
		var_381_int = 0;
		var_382_int = 1;

	Label_2424:
		var_397_bool = var_382_int <= var_380_int;
		if(var_397_bool != 0) {
			var_399_bool = var_382_int != (int)1;
			if(var_399_bool != 0) {
				"Price" = "Price" + var_382_int;
			}
			var_400_int = 0; var_401_object = Obj();
			var_369_object = var_401_object;
			func_2409(var_400_int, var_401_object);
			HasInvItemProperty(var_384_bool, var_400_int, var_383_string);
			var_402_bool = var_384_bool == 0; //@nz
			if(var_402_bool != 0) {
			} else {
				var_404_int = 0; var_405_object = Obj();
				var_369_object = var_405_object;
				func_2409(var_404_int, var_405_object);
				GetInvItemProperty(var_381_int, var_404_int, var_383_string);
		}
			@@var_369_object:HasProperty(var_385_bool, "durability");
			var_407_bool = var_385_bool;
			if(var_407_bool != 0) {
				@@var_369_object:GetProperty(var_386_int, "durability");
				var_412_float = var_386_int / (float)100.0;
				var_413_int = (float)1.0 + var_412_float;
				var_414_float = (float)0.5 * var_413_int;
				var_381_int = var_381_int * var_414_float;
			}
			var_381_int = var_368_int;
			return 18;
	}
		var_415_int = 0; var_416_object = Obj();
		var_369_object = var_416_object;
		func_2409(var_415_int, var_416_object);
		var_418_int = "BarterPrice" + var_370_int;
		HasInvItemProperty(var_387_bool, var_415_int, var_418_int);
		var_419_bool = var_387_bool == 0; //@nz
		if(var_419_bool != 0) {
			return 18;
		}
		var_420_int = 0; var_421_object = Obj();
		var_369_object = var_421_object;
		func_2409(var_420_int, var_421_object);
		var_423_int = "BarterPrice" + var_370_int;
		GetInvItemProperty(var_388_int, var_420_int, var_423_int);
		var_425_bool = var_388_int > (int)0;
		if(var_425_bool != 0) {
			var_388_int = (int)0;
			return 18;
		}
		var_368_int = -var_388_int;
		return 18;
	}
	var_382_int = var_382_int + (int)1;
	goto Label_2424;
	
}


func_2545(var_297_bool, var_298_int, var_299_int)
{
	var_300_object = Obj(); var_301_bool = 0; var_302_object = Obj(); var_303_bool = 0;
	GetPlayerContainer(var_302_object);
	@@var_302_object:IsItemSelected(var_303_bool, var_299_int, var_298_int);
	var_303_bool = var_297_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_2035(var_1_int, var_11_object, var_444_int, var_445_int)
{
	var_446_int = 0; var_447_int = 0; var_448_int = 0; var_449_int = 0;
	@@@var_11_object:size(var_448_int);
	var_450_int = var_445_int + var_1_int;
	var_451_bool = var_450_int >= var_448_int;
	if(var_451_bool != 0) {
		var_444_int = 0;
		return 4;
	}
	var_452_int = var_445_int + var_1_int;
	@@@var_11_object:get(var_449_int, var_452_int);
	var_449_int = var_444_int;
	return 4;
}


func_1652(var_460_bool, var_461_object, var_462_object, var_463_object)
{
	var_464_int = 0; var_465_object = Obj(); var_466_int = 0; var_467_int = 0; var_468_int = 0; var_469_object = Obj(); var_470_int = 0; var_471_int = 0;
	@@var_462_object:size(var_468_int);
	var_472_int = 0; var_473_object = Obj();
	var_461_object = var_473_object;
	func_2503(var_472_int, var_473_object);
	var_479_bool = var_472_int > (int)1;
	if(var_479_bool != 0) {
		var_470_int = 0;

	Label_1663:
		var_480_bool = var_470_int < var_468_int;
		if(var_480_bool != 0) {
			@@var_462_object:get(var_469_object, var_470_int);
			@@var_463_object:get(var_471_int, var_470_int);
			var_481_bool = 0; var_482_object = Obj(); var_483_object = Obj();
			var_461_object = var_482_object;
			var_469_object = var_483_object;
			func_2575(var_481_bool, var_482_object, var_483_object);
			if(var_481_bool != 0) {
				var_489_int = 0; var_490_object = Obj();
				var_461_object = var_490_object;
				func_2503(var_489_int, var_490_object);
				var_491_bool = var_471_int < var_489_int;
				if(var_491_bool != 0) {
					var_493_int = var_471_int + (int)1;
					@@var_463_object:set(var_470_int, var_493_int);
				}
				var_460_bool = 1;
				var_470_int = var_470_int + (int)1;
				goto Label_1663;
			}
			return 8;
		}
	}
	var_496_bool = var_468_int < (int)12;
	if(var_496_bool != 0) {
		@@var_462_object:add(var_461_object);
		@@var_463_object:add((int)1);
		var_460_bool = 1;
		return 8;
	}
	var_460_bool = 0;
	return 8;
}
EMIT "Stack[-3] = 0";


func_2553(var_270_object, var_271_int)
{
	var_272_object = Obj(); var_273_object = Obj(); var_274_object = Obj(); var_275_object = Obj();
	GetContainer(var_274_object);
	@@var_274_object:GetItem(var_275_object, var_271_int);
	var_275_object = var_270_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1530(var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_447_bool, var_448_object)
{
	var_449_int = 0; var_450_int = 0;
	var_451_int = 0; var_452_object = Obj();
	var_448_object = var_452_object;
	func_2493(var_451_int, var_452_object);
	var_451_int = var_450_int;
	var_459_bool = var_450_int == (int)0;
	if(var_459_bool != 0) {
		var_460_bool = 0; var_461_object = Obj(); var_462_object = Obj(); var_463_object = Obj();
		var_448_object = var_461_object;
		var_462_object = var_12_object;
		var_463_object = var_13_object;
		func_1652(var_460_bool, var_461_object, var_462_object, var_463_object);
		var_460_bool = var_447_bool;
		return 2;
	EMIT "GOTO 0x62f";
	}
	var_499_bool = var_450_int == (int)1;
	if(var_499_bool != 0) {
		var_500_bool = 0; var_501_object = Obj(); var_502_object = Obj(); var_503_object = Obj();
		var_448_object = var_501_object;
		var_502_object = var_14_object;
		var_503_object = var_15_object;
		func_1652(var_500_bool, var_501_object, var_502_object, var_503_object);
		var_500_bool = var_447_bool;
		return 2;
	EMIT "GOTO 0x62f";
	}
	var_505_bool = var_450_int == (int)2;
	if(var_505_bool != 0) {
		var_506_bool = 0; var_507_object = Obj(); var_508_object = Obj(); var_509_object = Obj();
		var_448_object = var_507_object;
		var_508_object = var_16_object;
		var_509_object = var_17_object;
		func_1652(var_506_bool, var_507_object, var_508_object, var_509_object);
		var_506_bool = var_447_bool;
		return 2;
	EMIT "GOTO 0x62f";
	}
	var_511_bool = var_450_int == (int)3;
	if(var_511_bool != 0) {
		var_512_bool = 0; var_513_object = Obj(); var_514_object = Obj(); var_515_object = Obj();
		var_448_object = var_513_object;
		var_514_object = var_18_object;
		var_515_object = var_19_object;
		func_1652(var_512_bool, var_513_object, var_514_object, var_515_object);
		var_512_bool = var_447_bool;
		return 2;
	}
	var_516_bool = 0; var_517_object = Obj(); var_518_object = Obj(); var_519_object = Obj();
	var_448_object = var_517_object;
	var_518_object = var_20_object;
	var_519_object = var_21_object;
	func_1652(var_516_bool, var_517_object, var_518_object, var_519_object);
	var_516_bool = var_447_bool;
	return 2;
}


func_2299(var_244_int, var_246_string)
{
	var_247_int = 0; var_248_int = 0; var_249_int = 0; var_250_int = 0;
	func_2102((int)0);
	var_251_int = var_249_int;
	
Label_2305:
	var_338_bool = (int)0 < var_249_int;
	if(var_338_bool != 0) {
		var_339_string = ""; var_340_int = 0;
		var_250_int = var_340_int;
		func_2070(var_339_string, var_340_int);
		var_341_bool = var_246_string == var_339_string;
		if(var_341_bool != 0) {
			var_250_int = var_244_int;
			var_250_int = var_250_int + (int)1;
			goto Label_2305;
		}
		return 4;
	}
	var_244_int = -1;
	return 4;
}


func_1020(var_5_object, var_6_object, var_7_object, var_8_object, var_28_int, var_278_int, var_279_bool)
{
	var_280_object = Obj(); var_281_int = 0; var_282_int = 0; var_283_int = 0; var_284_bool = 0; var_285_object = Obj(); var_286_int = 0; var_287_int = 0; var_288_int = 0; var_289_bool = 0;
	var_290_int = 0; var_291_int = 0;
	var_278_int = var_291_int;
	func_2520(var_290_int, var_291_int);
	var_290_int = var_286_int;
	
Label_1027:
	var_296_bool = (int)0 < var_286_int;
	if(var_296_bool != 0) {
		var_297_bool = 0; var_298_int = 0; var_299_int = 0;
		var_278_int = var_298_int;
		var_288_int = var_299_int;
		func_2545(var_297_bool, var_298_int, var_299_int);
		var_297_bool = var_289_bool;
		var_304_bool = 0;
		var_304_bool = 0;
		var_305_bool = var_279_bool == 0; //@nz
		if(var_305_bool != 0) {
			var_306_bool = var_289_bool;
			if(var_306_bool != 0) {
				var_304_bool = 1;
			}
		}
		if(var_304_bool != 0) {
		} else {
			var_308_int = 0; var_309_int = 0; var_310_int = 0;
			var_278_int = var_309_int;
			var_288_int = var_310_int;
			func_2537(var_308_int, var_309_int, var_310_int);
			var_308_int = var_287_int;
			var_315_object = Obj(); var_316_int = 0; var_317_int = 0;
			var_278_int = var_316_int;
			var_288_int = var_317_int;
			func_2528(var_315_object, var_316_int, var_317_int);
			var_315_object = var_285_object;
			var_322_bool = 0;
			var_322_bool = 0;
			var_323_bool = var_279_bool;
			if(var_323_bool != 0) {
				var_324_bool = 0;
				var_324_bool = 1;
				var_325_bool = 0; var_326_object = Obj(); var_327_int = 0; var_328_bool = 0;
				var_285_object = var_326_object;
				var_327_int = var_28_int;
				func_0(var_325_bool, var_326_object, var_327_int, (bool)1);
				if(var_325_bool != 1) {
					var_354_bool = var_289_bool;
					if(var_354_bool != 1) {
						var_324_bool = 0;
					}
				}
				if(var_324_bool != 0) {
					var_322_bool = 1;
				}
			}
			if(var_322_bool != 0) {
				@@@var_5_object:add(var_285_object);
				@@@var_6_object:add(var_287_int);
				@@@var_7_object:add((int)0);
				@@@var_8_object:add((int)1);
				goto Label_1110;
			}
			var_357_bool = 0;
			var_357_bool = 0;
			var_358_bool = var_279_bool == 0; //@nz
			if(var_358_bool != 0) {
				var_359_bool = 0; var_360_object = Obj(); var_361_int = 0; var_362_bool = 0;
				var_285_object = var_360_object;
				var_361_int = var_28_int;
				func_0(var_359_bool, var_360_object, var_361_int, (bool)1);
				var_363_bool = var_359_bool == 0; //@nz
				if(var_363_bool != 0) {
					var_357_bool = 1;
				}
			}
			if(var_357_bool == 0) goto Label_1110;
			@@@var_5_object:add(var_285_object);
			@@@var_6_object:add(var_287_int);
			@@@var_7_object:add((int)0);
			@@@var_8_object:add((int)0);
	}
		var_288_int = var_288_int + (int)1;
		goto Label_1027;
	}
	return 10;
	
}
EMIT "Stack[-5] = 0";


