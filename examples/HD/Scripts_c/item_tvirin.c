// @IMPORTS: GetGameTime/1,sync/0,HasProperty/2,GetProperty/2,SetProperty/2,CreateFloatVector/1,SendWorldWndMessage/2,RumblePlay/2
// @STRINGS: W:health|W:immunity|W:tiredness|W:sleeping|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @PE: 0x26,0x75

main(var_0_bool)
{
	var_1_bool = 0; var_2_string = ""; var_3_float = 0; var_4_float = 0; var_5_float = 0;
	func_85(var_1_bool, "health", (float)0.05000000074505806, (float)0, (float)1);
	var_17_float = 0;
	func_148((float)0.05000000074505806);
	var_25_bool = 0; var_26_string = ""; var_27_float = 0; var_28_float = 0; var_29_float = 0;
	func_85(var_25_bool, "immunity", (float)0.05000000074505806, (float)0, (float)1);
	var_30_float = 0;
	func_138((float)0.05000000074505806);
	var_34_bool = 0; var_35_string = ""; var_36_float = 0; var_37_float = 0; var_38_float = 0;
	func_85(var_34_bool, "tiredness", (float)0.05000000074505806, (float)0, (float)1);
	var_39_float = 0;
	func_128((float)0.05000000074505806);
	var_43_float = 0;
	func_53((float)12.0);
	return 0;
}


func_128(var_39_float)
{
	var_40_object = Obj(); var_41_object = Obj();
	CreateFloatVector(var_41_object);
	@@var_41_object:add(var_39_float);
	SendWorldWndMessage((int)11, var_41_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_38(var_55_bool, var_56_float)
{
	var_57_bool = 0;
	func_104(var_57_bool);
	if(var_57_bool != 0) {
		var_65_bool = 0; var_66_string = ""; var_67_float = 0; var_68_float = 0; var_69_float = 0;
		var_67_float = var_56_float * (float)-0.10000000149011612;
		func_85(var_65_bool, "tiredness", var_67_float, (float)0, (float)1);
	}
	var_55_bool = 0;
	return 0;
}


func_104(var_57_bool)
{
	var_58_bool = 0; var_59_bool = 0; var_60_bool = 0; var_61_bool = 0;
	HasProperty("sleeping", var_60_bool);
	var_63_bool = var_60_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_57_bool = 0;
		return 4;
	}
	GetProperty("sleeping", var_61_bool);
	var_61_bool = var_57_bool;
	return 4;
}


func_138(var_30_float)
{
	var_31_object = Obj(); var_32_object = Obj();
	CreateFloatVector(var_32_object);
	@@var_32_object:add(var_30_float);
	SendWorldWndMessage((int)13, var_32_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_148(var_17_float)
{
	var_18_object = Obj(); var_19_object = Obj();
	CreateFloatVector(var_19_object);
	@@var_19_object:add(var_17_float);
	var_21_bool = var_17_float < (int)0;
	if(var_21_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_19_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_53(var_43_float)
{
	var_44_float = 0; var_45_float = 0; var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0; var_50_float = 0; var_51_float = 0;
	GetGameTime(var_48_float);
	var_49_float = var_48_float + var_43_float;
	var_48_float = var_50_float;
	
Label_58:
	sync();
	var_52_bool = var_0_bool;
	if(var_52_bool != 0) {
	} else {
		GetGameTime(var_51_float);
		var_53_bool = var_51_float <= var_50_float;
		if(var_53_bool != 0) {
		} else {
			var_54_bool = var_51_float >= var_49_float;
			if(var_54_bool != 0) {
				var_55_bool = 0; var_56_float = 0;
				var_56_float = var_49_float - var_50_float;
				func_38(var_55_bool, var_56_float);
				goto Label_84;
			EMIT "GOTO 0x53";
			}
			var_71_bool = 0; var_72_float = 0;
			var_72_float = var_51_float - var_50_float;
			func_38(var_71_bool, var_72_float);
			if(var_71_bool != 0) {
				goto Label_84;
			}
			var_51_float = var_50_float;
		}
		goto Label_58;
	}
Label_84:
	return 8;
	
}


func_85(var_1_bool, var_2_string, var_3_float, var_4_float, var_5_float)
{
	var_6_bool = 0; var_7_float = 0; var_8_bool = 0; var_9_float = 0;
	HasProperty(var_2_string, var_8_bool);
	var_10_bool = var_8_bool == 0; //@nz
	if(var_10_bool != 0) {
		var_1_bool = 0;
		return 4;
	}
	GetProperty(var_2_string, var_9_float);
	var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0;
	var_12_float = var_9_float + var_3_float;
	var_4_float = var_13_float;
	var_5_float = var_14_float;
	func_117(var_11_float, var_12_float, var_13_float, var_14_float);
	SetProperty(var_2_string, var_11_float);
	var_1_bool = 1;
	return 4;
}


func_117(var_11_float, var_12_float, var_13_float, var_14_float)
{
	var_15_bool = var_12_float < var_13_float;
	if(var_15_bool != 0) {
		var_13_float = var_11_float;
		return 0;
	}
	var_16_bool = var_12_float > var_14_float;
	if(var_16_bool != 0) {
		var_14_float = var_11_float;
		return 0;
	}
	var_12_float = var_11_float;
	return 0;
}


