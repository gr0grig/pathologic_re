// @IMPORTS: ModBlurLevel/1,CameraPlayRel/2,Sleep/1,CameraWaitForPlayFinish/0,Hold/0,ModDarkenLevel/1,sync/1
// @STRINGS: W:danko_death.mot
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	ModBlurLevel((float)0.15000000596046448);
	CameraPlayRel("danko_death.mot", (bool)1);
	Sleep((float)1.5);
	var_4_float = 0; var_5_float = 0; var_6_float = 0;
	func_21((float)0, (float)1, (float)1.25);
	CameraWaitForPlayFinish();
	Hold();
	return 0;
}


func_21(var_4_float, var_5_float, var_6_float)
{
	var_7_bool = 0; var_8_float = 0; var_9_float = 0; var_10_bool = 0; var_11_float = 0; var_12_float = 0;
	var_10_bool = var_5_float > var_4_float;
	var_13_int = var_5_float - var_4_float;
	var_11_float = var_13_int / var_6_float;
	
Label_25:
	var_14_bool = var_10_bool;
	if(var_14_bool != 0) {
		var_15_bool = var_4_float < var_5_float;
	} else {
		var_17_bool = var_5_float < var_4_float;
	}
	if(var_15_bool != 0) {
		ModDarkenLevel(var_4_float);
		sync(var_12_float);
		var_16_float = var_12_float * var_11_float;
		var_4_float = var_4_float + var_16_float;
		goto Label_25;
	}
	ModDarkenLevel(var_5_float);
	return 6;
	
}


