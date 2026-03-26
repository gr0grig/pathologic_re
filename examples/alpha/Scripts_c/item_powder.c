// @IMPORTS: GetProperty/2,SetProperty/2
// @STRINGS: W:health|W:disease
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	var_0_float = 0; var_1_float = 0;
	GetProperty("health", var_1_float);
	var_4_bool = var_1_float > (float)0.05000000074505806;
	if(var_4_bool != 0) {
		SetProperty("health", (float)0.05000000074505806);
	}
	SetProperty("disease", (int)0);
	return 2;
}


