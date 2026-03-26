// @IMPORTS: GetGameTime/1,GetItemPosByID/4,GetItem/3,SetItem/4,sync/0,GetProperty/2,SetProperty/2
// @STRINGS: W:durability|A:HasProperty|A:GetProperty|A:SetProperty|W:armor|W:armor_fire|W:armor_phys|W:armor_bullet|W:armor_disease
// @GLOBALS: 0:int:ItemID1,1:int:ItemID2,2:int:Container,3:int:,4:int:,5:int:,6:int:,7:int:,8:int:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_32: op=0x56 vars=
// @EVENT_34: op=0x9a vars=object,int,int,int
// @EVENT_35: op=0xa2 vars=object,int,int,bool,int
// @STANDALONE_EVENT_22: op=0x11f vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x171 vars=object,int,float,float,cvector,cvector
// @PE: 0x9a,0xa2,0xac,0xc9,0xd4,0x171

	task_0_event_32(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_7_int, var_8_int, var_9_int)
	{
	var_18_string = ""; var_19_int = 0;
	var_18_string = "armor";
	var_20_int = GlobalVars[3];
	var_19_int = -var_20_int;
	func_194(var_18_string, var_19_int);
	var_24_string = ""; var_25_int = 0;
	var_24_string = "armor_fire";
	var_26_int = GlobalVars[4];
	var_25_int = -var_26_int;
	func_194(var_24_string, var_25_int);
	var_27_string = ""; var_28_int = 0;
	var_27_string = "armor_phys";
	var_29_int = GlobalVars[5];
	var_28_int = -var_29_int;
	func_194(var_27_string, var_28_int);
	var_30_string = ""; var_31_int = 0;
	var_30_string = "armor_bullet";
	var_32_int = GlobalVars[6];
	var_31_int = -var_32_int;
	func_194(var_30_string, var_31_int);
	var_33_string = ""; var_34_int = 0;
	var_33_string = "armor_disease";
	var_35_int = GlobalVars[7];
	var_34_int = -var_35_int;
	func_194(var_33_string, var_34_int);
	var_0_bool = true;
	return 0;
	}


task_0_event_34(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_int)
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0;
	var_2_int = var_5_int;
	var_3_int = var_6_int;
	var_4_int = var_7_int;
	func_172(var_5_int, var_6_int, var_7_int);
	return 0;
}


task_0_event_35(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int)
{
	var_6_bool = var_4_bool == 0; //@nz
	if(var_6_bool != 0) {
		var_7_int = 0; var_8_int = 0; var_9_int = 0;
		var_2_int = var_7_int;
		var_3_int = var_8_int;
		var_5_int = var_9_int;
		func_172(var_7_int, var_8_int, var_9_int);
	}
	return 0;
}


	event_22(var_0_bool, var_1_object, var_2_int, var_3_float, var_4_float, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_float, var_10_float)
	{
	var_11_int = 0; var_12_int = 0; var_13_float = 0; var_14_int = 0; var_15_object = Obj(); var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_float = 0; var_22_int = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_int = 0;
	var_27_int = 5;
	var_28_bool = var_8_int == var_27_int;
	if(var_28_bool != 0) {
	} else {
		var_29_int = GlobalVars[3];
		var_29_int = var_19_int;
		var_30_int = 4;
		var_31_bool = var_8_int == var_30_int;
		if(var_31_bool != 0) {
			var_32_int = GlobalVars[4];
			var_19_int = var_19_int + var_32_int;
		} else {
				var_106_int = 2;
				var_107_bool = var_8_int == var_106_int;
				if(var_107_bool != 0) {
					var_108_int = GlobalVars[6];
					var_19_int = var_19_int + var_108_int;
					goto Label_309;
				}
				var_109_int = GlobalVars[5];
				var_19_int = var_19_int + var_109_int;
		}
	Label_309:
		var_33_string = "armor";
		GetProperty(var_33_string, var_20_int);
		var_34_bool = var_20_int == 0; //@nz
		if(var_34_bool != 0) {
			var_21_float = 1;
		} else {
			var_105_float = 0;
			var_19_int = var_105_float;
			var_21_float = var_105_float / var_20_int;

		}
		var_35_float = 0.75;
		var_21_float = var_21_float * var_35_float;
		var_36_int = 0; //@pi
		var_37_bool = var_21_float > var_36_int;
		if(var_37_bool == 0) goto Label_368;
		var_38_int = GlobalVars[0];
		var_39_int = GlobalVars[1];
		var_40_int = GlobalVars[2];
		GetItemPosByID(var_22_int, var_38_int, var_39_int, var_40_int);
		var_41_int = -1;
		var_42_bool = var_22_int != var_41_int;
		if(var_42_bool == 0) goto Label_368;
		var_43_int = GlobalVars[2];
		GetItem(var_23_object, var_22_int, var_43_int);
		var_44_string = "durability";
		@@var_23_object:HasProperty(var_24_bool, var_44_string);
		var_45_bool = var_24_bool;
		if(var_45_bool != 0) {
			var_46_int = 0;
			var_47_float = var_21_float * var_10_float;
			var_48_float = 100.0;
			var_46_int = var_47_float * var_48_float;
			var_46_int = var_25_int;
			var_49_string = "durability";
			@@var_23_object:GetProperty(var_26_int, var_49_string);
			var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0;
			var_51_int = var_26_int - var_25_int;
			var_52_int = 0;
			var_53_int = 100;
			func_201(var_50_int, var_51_int, var_52_int, var_53_int);
			var_50_int = var_26_int;
			var_56_string = "durability";
			@@var_23_object:SetProperty(var_56_string, var_26_int);
			var_57_int = 1;
			var_58_int = GlobalVars[2];
			SetItem(var_23_object, var_57_int, var_22_int, var_58_int);
			var_59_int = 0;
			var_26_int = var_59_int;
			func_212(var_59_int);
		}
		var_23_object = 0;
	}
Label_368:
	return 16;
	
	}


event_43(var_0_bool, var_1_object, var_2_int, var_3_float, var_4_float, var_5_cvector, var_6_cvector)
{
	var_7_object = Obj(); var_8_int = 0; var_9_float = 0; var_10_float = 0;
	var_1_object = var_7_object;
	var_2_int = var_8_int;
	var_3_float = var_9_float;
	var_4_float = var_10_float;
	func_287();
	return 0;
}


main(var_0_bool)
{
	var_1_float = 0; var_2_float = 0; var_3_float = 0; var_4_int = 0; var_5_int = 0; var_6_object = Obj(); var_7_bool = 0; var_8_int = 0; var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0;
	var_0_bool = false;
	var_17_int = GlobalVars[3];
	GlobalVars[3] = (int)0;
	var_18_int = GlobalVars[4];
	GlobalVars[4] = (int)0;
	var_19_int = GlobalVars[5];
	GlobalVars[5] = (int)0;
	var_20_int = GlobalVars[6];
	GlobalVars[6] = (int)0;
	var_21_int = GlobalVars[7];
	GlobalVars[7] = (int)0;
	var_22_int = GlobalVars[8];
	GlobalVars[8] = (int)0;
	func_153();
	func_118();
	GetGameTime(var_9_float);
	
Label_28:
	GetGameTime(var_10_float);
	var_11_float = var_10_float - var_9_float;
	var_12_int = var_11_float / (float)1.440000057220459;
	var_91_bool = var_12_int > (int)0;
	if(var_91_bool != 0) {
		var_93_int = var_11_float % (float)1.440000057220459;
		var_9_float = var_10_float - var_93_int;
		var_94_int = GlobalVars[0];
		var_95_int = GlobalVars[1];
		var_96_int = GlobalVars[2];
		GetItemPosByID(var_13_int, var_94_int, var_95_int, var_96_int);
		var_98_bool = var_13_int != (int)-1;
		if(var_98_bool != 0) {
			var_99_int = GlobalVars[2];
			GetItem(var_14_object, var_13_int, var_99_int);
			@@var_14_object:HasProperty(var_15_bool, "durability");
			var_101_bool = var_15_bool;
			if(var_101_bool != 0) {
				@@var_14_object:GetProperty(var_16_int, "durability");
				var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
				var_104_int = var_16_int - var_12_int;
				func_201(var_103_int, var_104_int, (int)0, (int)100);
				var_103_int = var_16_int;
			} else {
					var_16_int = 100;
			}
			@@var_14_object:SetProperty("durability", var_16_int);
			var_111_int = GlobalVars[2];
			SetItem(var_14_object, (int)1, var_13_int, var_111_int);
			var_112_int = 0;
			var_16_int = var_112_int;
			func_212(var_112_int);
			var_14_object = 0;
		}
	}
	sync();
	var_113_bool = var_0_bool;
	if(var_113_bool != 0) {
	} else {
		goto Label_28;

	}
	return 16;
	
}


func_194(var_55_string, var_56_int)
{
	var_57_int = 0; var_58_int = 0;
	GetProperty(var_55_string, var_58_int);
	var_59_int = var_58_int + var_56_int;
	SetProperty(var_55_string, var_59_int);
	return 2;
}


func_201(var_103_int, var_104_int, var_105_int, var_106_int)
{
	var_107_bool = var_104_int < var_105_int;
	if(var_107_bool != 0) {
		var_105_int = var_103_int;
		return 0;
	}
	var_108_bool = var_104_int > var_106_int;
	if(var_108_bool != 0) {
		var_106_int = var_103_int;
		return 0;
	}
	var_104_int = var_103_int;
	return 0;
}


func_172(var_7_int, var_8_int, var_9_int)
{
	var_10_bool = 0;
	var_10_bool = 0;
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_int = GlobalVars[0];
	var_13_bool = var_7_int == var_12_int;
	if(var_13_bool != 0) {
		var_14_int = GlobalVars[1];
		var_15_bool = var_8_int == var_14_int;
		if(var_15_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_16_int = GlobalVars[2];
		var_17_bool = var_16_int == var_9_int;
		if(var_17_bool != 0) {
			var_10_bool = 1;
		}
	}
	if(var_10_bool != 0) {
		func_86();
	}
	return 0;
}


func_274(var_44_int, var_45_string, var_46_int, var_47_int, var_48_int)
{
	var_50_int = 0; var_51_int = 0;
	var_53_float = var_47_int / (float)100.0;
	var_51_int = var_48_int * var_53_float;
	var_54_bool = var_51_int != var_46_int;
	if(var_54_bool != 0) {
		var_55_string = ""; var_56_int = 0;
		var_45_string = var_55_string;
		var_56_int = var_51_int - var_46_int;
		func_194(var_55_string, var_56_int);
	}
	var_51_int = var_44_int;
	return 2;
}


func_212(var_42_int)
{
	var_43_int = GlobalVars[3];
	var_44_int = 0; var_45_string = ""; var_46_int = 0; var_47_int = 0; var_48_int = 0;
	var_49_int = GlobalVars[3];
	var_49_int = var_46_int;
	var_42_int = var_47_int;
	func_274(var_44_int, "armor", var_46_int, var_47_int, (int)30);
	var_44_int = var_43_int;
	GlobalVars[3] = var_43_int;
	var_60_int = GlobalVars[4];
	var_61_int = 0; var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0;
	var_66_int = GlobalVars[4];
	var_66_int = var_63_int;
	var_42_int = var_64_int;
	func_274(var_61_int, "armor_fire", var_63_int, var_64_int, (int)0);
	var_61_int = var_60_int;
	GlobalVars[4] = var_60_int;
	var_67_int = GlobalVars[5];
	var_68_int = 0; var_69_string = ""; var_70_int = 0; var_71_int = 0; var_72_int = 0;
	var_73_int = GlobalVars[5];
	var_73_int = var_70_int;
	var_42_int = var_71_int;
	func_274(var_68_int, "armor_phys", var_70_int, var_71_int, (int)0);
	var_68_int = var_67_int;
	GlobalVars[5] = var_67_int;
	var_74_int = GlobalVars[6];
	var_75_int = 0; var_76_string = ""; var_77_int = 0; var_78_int = 0; var_79_int = 0;
	var_80_int = GlobalVars[6];
	var_80_int = var_77_int;
	var_42_int = var_78_int;
	func_274(var_75_int, "armor_bullet", var_77_int, var_78_int, (int)0);
	var_75_int = var_74_int;
	GlobalVars[6] = var_74_int;
	var_81_int = GlobalVars[7];
	var_82_int = 0; var_83_string = ""; var_84_int = 0; var_85_int = 0; var_86_int = 0;
	var_87_int = GlobalVars[7];
	var_87_int = var_84_int;
	var_42_int = var_85_int;
	func_274(var_82_int, "armor_disease", var_84_int, var_85_int, (int)50);
	var_82_int = var_81_int;
	GlobalVars[7] = var_81_int;
	return 0;
}


func_118()
{
	var_23_int = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_object = Obj(); var_29_bool = 0; var_30_int = 0;
	var_31_int = GlobalVars[0];
	var_32_int = GlobalVars[1];
	var_33_int = GlobalVars[2];
	GetItemPosByID(var_27_int, var_31_int, var_32_int, var_33_int);
	var_35_bool = var_27_int != (int)-1;
	if(var_35_bool != 0) {
		var_36_int = GlobalVars[2];
		GetItem(var_28_object, var_27_int, var_36_int);
		@@var_28_object:HasProperty(var_29_bool, "durability");
		var_38_bool = var_29_bool == 0; //@nz
		if(var_38_bool != 0) {
			var_30_int = 100;
			@@var_28_object:SetProperty("durability", var_30_int);
			var_41_int = GlobalVars[2];
			SetItem(var_28_object, (int)1, var_27_int, var_41_int);
		} else {
			@@var_28_object:GetProperty(var_30_int, "durability");
		}
		var_42_int = 0;
		var_30_int = var_42_int;
		func_212(var_42_int);
		var_28_object = 0;
	}
	return 8;
	
}


func_153()
{
	return 0;
}


