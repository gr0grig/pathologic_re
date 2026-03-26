// @IMPORTS: GetTextWidth/3,GetVolMaster/1,GetVolMusic/1,GetVolVoice/1,GetVolSounds/1,SetOwnerDraw/1,ProcessEvents/0,Print/4,GetStringByID/2
// @STRINGS: W:%|W:default|A:get
// @RUN_OP: 0x72
// @RUN_TASK: 0
// @TASK_0: vars=string,string,string,string,int,int,int,int params=0
// @EVENT_0: op=0x7b vars=
// @EVENT_200: op=0xb0 vars=int,string,object

task_0_event_0(var_0_string, var_1_string, var_2_string, var_3_string, var_4_int, var_5_int, var_6_int, var_7_int)
{
	var_11_string = ""; var_12_int = 0;
	func_214(var_11_string, (int)104);
	Print("default", (int)15, (int)15, var_11_string);
	Print("default", var_4_int, (int)15, var_0_string);
	var_20_string = ""; var_21_int = 0;
	func_214(var_20_string, (int)105);
	Print("default", (int)15, (int)98, var_20_string);
	Print("default", var_5_int, (int)98, var_1_string);
	var_27_string = ""; var_28_int = 0;
	func_214(var_27_string, (int)106);
	Print("default", (int)16, (int)182, var_27_string);
	Print("default", var_6_int, (int)182, var_2_string);
	var_34_string = ""; var_35_int = 0;
	func_214(var_34_string, (int)107);
	Print("default", (int)16, (int)265, var_34_string);
	Print("default", var_7_int, (int)265, var_3_string);
	return 0;
}


task_0_event_200(var_0_string, var_1_string, var_2_string, var_3_string, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_string, var_10_object)
{
	var_11_float = 0; var_12_float = 0;
	var_13_bool = var_10_object != 0; //@nn
	if(var_13_bool != 0) {
		@@var_10_object:get(var_12_float, (int)0);
		var_16_bool = var_8_int == (int)105;
		if(var_16_bool != 0) {
			var_17_float = 0;
			var_12_float = var_17_float;
			func_0(var_11_float, var_12_float, var_17_float);
		} else {
			var_35_bool = var_8_int == (int)106;
			if(var_35_bool != 0) {
				var_36_float = 0;
				var_12_float = var_36_float;
				func_22(var_11_float, var_12_float, var_36_float);
				goto Label_213;
			}
			var_52_bool = var_8_int == (int)107;
			if(var_52_bool != 0) {
				var_53_float = 0;
				var_12_float = var_53_float;
				func_44(var_11_float, var_12_float, var_53_float);
				goto Label_213;
			}
			var_69_bool = var_8_int == (int)108;
			if(var_69_bool == 0) goto Label_213;
			var_70_float = 0;
			var_12_float = var_70_float;
			func_66(var_11_float, var_12_float, var_70_float);
		}
	}
Label_213:
	return 2;
	
}


main(var_0_string, var_1_string, var_2_string, var_3_string, var_4_int, var_5_int, var_6_int, var_7_int)
{
	SetOwnerDraw((bool)1);
	func_88();
	ProcessEvents();
	return 0;
}


func_0(var_0_string, var_4_int, var_17_float)
{
	var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0;
	var_21_int = var_17_float * (int)100;
	var_24_bool = var_21_int == (int)0;
	if(var_24_bool != 0) {
		var_25_string = ""; var_26_int = 0;
		func_214(var_25_string, (int)124);
		var_0_string = var_25_string;
	} else {
		var_0_string = var_21_int + "%";
	}
	GetTextWidth(var_20_int, "default", var_0_string);
	var_32_float = var_20_int / (int)2;
	var_4_int = (int)305 - var_32_float;
	return 4;
	
}


func_66(var_3_string, var_7_int, var_64_float)
{
	var_65_int = 0; var_66_int = 0; var_67_int = 0; var_68_int = 0;
	var_68_int = var_64_float * (int)100;
	var_71_bool = var_68_int == (int)0;
	if(var_71_bool != 0) {
		var_72_string = ""; var_73_int = 0;
		func_214(var_72_string, (int)124);
		var_3_string = var_72_string;
	} else {
		var_3_string = var_68_int + "%";
	}
	GetTextWidth(var_67_int, "default", var_3_string);
	var_77_float = var_67_int / (int)2;
	var_7_int = (int)305 - var_77_float;
	return 4;
	
}


func_44(var_2_string, var_6_int, var_49_float)
{
	var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0;
	var_53_int = var_49_float * (int)100;
	var_56_bool = var_53_int == (int)0;
	if(var_56_bool != 0) {
		var_57_string = ""; var_58_int = 0;
		func_214(var_57_string, (int)124);
		var_2_string = var_57_string;
	} else {
		var_2_string = var_53_int + "%";
	}
	GetTextWidth(var_52_int, "default", var_2_string);
	var_62_float = var_52_int / (int)2;
	var_6_int = (int)305 - var_62_float;
	return 4;
	
}


func_214(var_25_string, var_26_int)
{
	var_27_string = ""; var_28_string = "";
	GetStringByID(var_28_string, var_26_int);
	var_28_string = var_25_string;
	return 2;
}


func_22(var_1_string, var_5_int, var_34_float)
{
	var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0;
	var_38_int = var_34_float * (int)100;
	var_41_bool = var_38_int == (int)0;
	if(var_41_bool != 0) {
		var_42_string = ""; var_43_int = 0;
		func_214(var_42_string, (int)124);
		var_1_string = var_42_string;
	} else {
		var_1_string = var_38_int + "%";
	}
	GetTextWidth(var_37_int, "default", var_1_string);
	var_47_float = var_37_int / (int)2;
	var_5_int = (int)305 - var_47_float;
	return 4;
	
}


func_88()
{
	var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0;
	GetVolMaster(var_13_float);
	GetVolMusic(var_14_float);
	GetVolVoice(var_15_float);
	GetVolSounds(var_16_float);
	var_17_float = 0;
	var_13_float = var_17_float;
	func_0(var_15_float, var_16_float, var_17_float);
	var_34_float = 0;
	var_14_float = var_34_float;
	func_22(var_15_float, var_16_float, var_34_float);
	var_49_float = 0;
	var_15_float = var_49_float;
	func_44(var_15_float, var_16_float, var_49_float);
	var_64_float = 0;
	var_16_float = var_64_float;
	func_66(var_15_float, var_16_float, var_64_float);
	return 8;
}


