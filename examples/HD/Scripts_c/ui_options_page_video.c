// @IMPORTS: GetTextWidth/3,GetResolution/3,GetCurrentResolution/1,GetCurrentAnisotropic/1,GetGammaCorrection/1,GetPlayerFOV/1,SetOwnerDraw/1,ProcessEvents/0,Print/4,PrintInWidth/9,GetStringByID/2
// @STRINGS: W:default|W:x|A:get
// @RUN_OP: 0x51
// @RUN_TASK: 0
// @TASK_0: vars=string,string,string,string,bool,bool,bool,int,int,int,int params=0
// @EVENT_0: op=0x5a vars=
// @EVENT_200: op=0xea vars=int,string,object

task_0_event_0(var_0_string, var_1_string, var_2_string, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_int, var_8_int, var_9_int, var_10_int)
{
	var_14_string = ""; var_15_int = 0;
	func_285(var_14_string, (int)110);
	Print("default", (int)15, (int)12, var_14_string);
	Print("default", var_7_int, (int)29, var_1_string);
	var_23_string = ""; var_24_int = 0;
	func_285(var_23_string, (int)112);
	Print("default", (int)15, (int)62, var_23_string);
	Print("default", var_9_int, (int)62, var_2_string);
	var_30_string = ""; var_31_int = 0;
	func_285(var_30_string, (int)103);
	Print("default", (int)15, (int)112, var_30_string);
	Print("default", var_10_int, (int)112, var_0_string);
	var_37_string = ""; var_38_int = 0;
	func_285(var_37_string, (int)113);
	Print("default", (int)15, (int)162, var_37_string);
	Print("default", var_8_int, (int)162, var_3_string);
	var_44_string = ""; var_45_int = 0;
	func_285(var_44_string, (int)114);
	Print("default", (int)15, (int)223, var_44_string);
	var_49_string = ""; var_50_int = 0;
	func_285(var_49_string, (int)102);
	Print("default", (int)15, (int)249, var_49_string);
	var_54_string = ""; var_55_int = 0;
	func_285(var_54_string, (int)111);
	Print("default", (int)15, (int)275, var_54_string);
	var_59_string = ""; var_60_int = 0;
	func_285(var_59_string, (int)115);
	Print("default", (int)15, (int)300, var_59_string);
	var_64_string = ""; var_65_int = 0;
	func_285(var_64_string, (int)116);
	Print("default", (int)15, (int)325, var_64_string);
	var_69_string = ""; var_70_int = 0;
	func_285(var_69_string, (int)117);
	Print("default", (int)15, (int)351, var_69_string);
	var_74_string = ""; var_75_int = 0;
	func_285(var_74_string, (int)118);
	Print("default", (int)15, (int)375, var_74_string);
	var_76_bool = 0;
	var_76_bool = 1;
	var_77_bool = 0;
	var_77_bool = 1;
	var_78_bool = var_6_bool;
	if(var_78_bool != 1) {
		var_79_bool = var_4_bool;
		if(var_79_bool != 1) {
			var_77_bool = 0;
		}
	}
	if(var_77_bool != 1) {
		var_80_bool = var_5_bool;
		if(var_80_bool != 1) {
			var_76_bool = 0;
		}
	}
	if(var_76_bool != 0) {
		var_86_string = ""; var_87_int = 0;
		func_285(var_86_string, (int)119);
		PrintInWidth((int)50, "default", (int)15, (int)410, (int)300, var_86_string, (float)0.8999999761581421, (float)0.0, (float)0.0);
	}
	return 0;
}


task_0_event_200(var_0_string, var_1_string, var_2_string, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_string, var_13_object)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_13_object != 0; //@nn
	if(var_16_bool != 0) {
		@@var_13_object:get(var_15_float, (int)0);
		var_19_bool = var_11_int == (int)100;
		if(var_19_bool != 0) {
			var_20_float = 0;
			var_15_float = var_20_float;
			func_11(var_14_float, var_15_float, var_20_float);
		} else {
			var_28_bool = var_11_int == (int)101;
			if(var_28_bool != 0) {
				var_29_float = 0;
				var_15_float = var_29_float;
				func_21(var_14_float, var_15_float, var_29_float);
				@@var_13_object:get(var_4_bool, (int)1);
				goto Label_284;
			}
			var_44_bool = var_11_int == (int)103;
			if(var_44_bool != 0) {
				var_45_float = 0;
				var_15_float = var_45_float;
				func_35(var_14_float, var_15_float, var_45_float);
				@@var_13_object:get(var_5_bool, (int)1);
				goto Label_284;
			}
			var_62_bool = var_11_int == (int)104;
			if(var_62_bool != 0) {
				var_63_float = 0;
				var_15_float = var_63_float;
				func_0(var_14_float, var_15_float, var_63_float);
				goto Label_284;
			}
			var_73_bool = var_11_int == (int)112;
			if(var_73_bool == 0) goto Label_284;
			@@var_13_object:get(var_6_bool, (int)1);
		}
	}
Label_284:
	return 2;
	
}


main(var_0_string, var_1_string, var_2_string, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_int, var_8_int, var_9_int, var_10_int)
{
	SetOwnerDraw((bool)1);
	func_55();
	ProcessEvents();
	return 0;
}


func_0(var_3_string, var_8_int, var_55_float)
{
	var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0;
	var_55_float = var_59_int;
	var_3_string = var_59_int;
	GetTextWidth(var_58_int, "default", var_3_string);
	var_63_float = var_58_int / (int)2;
	var_8_int = (int)305 - var_63_float;
	return 4;
}


func_35(var_2_string, var_9_int, var_33_float)
{
	var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0;
	var_33_float = var_37_int;
	var_39_bool = var_37_int == (int)0;
	if(var_39_bool != 0) {
		var_40_string = ""; var_41_int = 0;
		func_285(var_40_string, (int)124);
		var_2_string = var_40_string;
	} else {
		var_2_string = var_37_int;
	}
	GetTextWidth(var_36_int, "default", var_2_string);
	var_47_float = var_36_int / (int)2;
	var_9_int = (int)305 - var_47_float;
	return 4;
	
}


func_11(var_0_string, var_10_int, var_48_float)
{
	var_49_int = 0; var_50_int = 0;
	var_0_string = var_48_float;
	GetTextWidth(var_50_int, "default", var_0_string);
	var_54_float = var_50_int / (int)2;
	var_10_int = (int)305 - var_54_float;
	return 2;
}


func_21(var_1_string, var_7_int, var_20_float)
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0;
	GetResolution(var_20_float, var_24_int, var_25_int);
	var_28_int = var_24_int + "x";
	var_1_string = var_28_int + var_25_int;
	GetTextWidth(var_26_int, "default", var_1_string);
	var_31_int = (int)332 - var_26_int;
	var_7_int = var_31_int / (int)2;
	return 6;
}


func_55()
{
	var_12_float = 0; var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0; var_17_float = 0; var_18_float = 0; var_19_float = 0;
	GetCurrentResolution(var_16_float);
	var_20_float = 0;
	var_16_float = var_20_float;
	func_21(var_18_float, var_19_float, var_20_float);
	GetCurrentAnisotropic(var_17_float);
	var_33_float = 0;
	var_17_float = var_33_float;
	func_35(var_18_float, var_19_float, var_33_float);
	GetGammaCorrection(var_18_float);
	var_48_float = 0;
	var_18_float = var_48_float;
	func_11(var_18_float, var_19_float, var_48_float);
	GetPlayerFOV(var_19_float);
	var_55_float = 0;
	var_19_float = var_55_float;
	func_0(var_18_float, var_19_float, var_55_float);
	return 8;
}


func_285(var_40_string, var_41_int)
{
	var_42_string = ""; var_43_string = "";
	GetStringByID(var_43_string, var_41_int);
	var_43_string = var_40_string;
	return 2;
}


