// @IMPORTS: HasProperty/2,GetProperty/2,SetProperty/2
// @STRINGS: W:health|W:immunity|W:disease|W:hunger|W:tiredness
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x37

main()
{
	var_0_bool = 0; var_1_string = ""; var_2_float = 0; var_3_float = 0; var_4_float = 0;
	func_36(var_0_bool, "health", (float)-0.10000000149011612, (float)0, (float)1);
	var_16_bool = 0; var_17_string = ""; var_18_float = 0; var_19_float = 0; var_20_float = 0;
	func_36(var_16_bool, "immunity", (float)0.15000000596046448, (float)0, (float)1);
	var_21_bool = 0; var_22_string = ""; var_23_float = 0; var_24_float = 0; var_25_float = 0;
	func_36(var_21_bool, "disease", (float)0.0, (float)0, (float)1);
	var_26_bool = 0; var_27_string = ""; var_28_float = 0; var_29_float = 0; var_30_float = 0;
	func_36(var_26_bool, "hunger", (float)0.0, (float)0, (float)1);
	var_31_bool = 0; var_32_string = ""; var_33_float = 0; var_34_float = 0; var_35_float = 0;
	func_36(var_31_bool, "tiredness", (float)0.0, (float)0, (float)1);
	return 0;
}


func_36(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float)
{
	var_5_bool = 0; var_6_float = 0; var_7_bool = 0; var_8_float = 0;
	HasProperty(var_1_string, var_7_bool);
	var_9_bool = var_7_bool == 0; //@nz
	if(var_9_bool != 0) {
		var_0_bool = 0;
		return 4;
	}
	GetProperty(var_1_string, var_8_float);
	var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0;
	var_11_float = var_8_float + var_2_float;
	var_3_float = var_12_float;
	var_4_float = var_13_float;
	func_55(var_10_float, var_11_float, var_12_float, var_13_float);
	SetProperty(var_1_string, var_10_float);
	var_0_bool = 1;
	return 4;
}


func_55(var_10_float, var_11_float, var_12_float, var_13_float)
{
	var_14_bool = var_11_float < var_12_float;
	if(var_14_bool != 0) {
		var_12_float = var_10_float;
		return 0;
	}
	var_15_bool = var_11_float > var_13_float;
	if(var_15_bool != 0) {
		var_13_float = var_10_float;
		return 0;
	}
	var_11_float = var_10_float;
	return 0;
}


