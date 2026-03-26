// @IMPORTS: GetProperty/2,SetProperty/2,GetItemPosByID/4,RemoveItem/3
// @STRINGS: W:visir
// @GLOBALS: 0:int:ItemID1,1:int:ItemID2,2:int:Container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	var_0_int = 0; var_1_int = 0; var_2_int = 0; var_3_int = 0;
	GetProperty("visir", var_2_int);
	var_5_bool = 0;
	var_5_bool = 0;
	var_6_int = var_2_int;
	if(var_6_int != 0) {
		var_8_bool = var_2_int < (int)4;
		if(var_8_bool != 0) {
			var_5_bool = 1;
		}
	}
	if(var_5_bool != 0) {
		var_11_int = var_2_int + (int)1;
		SetProperty("visir", var_11_int);
		var_12_int = GlobalVars[0];
		var_13_int = GlobalVars[1];
		var_14_int = GlobalVars[2];
		GetItemPosByID(var_3_int, var_12_int, var_13_int, var_14_int);
		var_16_int = GlobalVars[2];
		RemoveItem(var_3_int, (int)1, var_16_int);
	}
	return 4;
}


