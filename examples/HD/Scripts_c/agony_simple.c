// @IMPORTS: RemoveEnvelope/0,RemoveRTEnvelope/0,Hold/0,Is3DSoundLoaded/2,PlayGlobalSound/2,PlayAnimation/2,WaitForAnimEnd/1,StopGroup0/0,IsLoaded/1,rand/1
// @STRINGS: W:agony|W:all
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_5: op=0x27 vars=

task_0_event_5()
{
	StopGroup0();
	return 0;
}


main()
{
	var_0_bool = 0; var_1_bool = 0;
	RemoveEnvelope();
	RemoveRTEnvelope();
	
Label_5:
	var_2_bool = 0;
	func_42(var_2_bool);
	var_5_bool = var_2_bool == 0; //@nz
	if(var_5_bool != 0) {
		Hold();
		goto Label_5;
	}
	Is3DSoundLoaded(var_1_bool, "agony");
	var_7_bool = 0;
	var_7_bool = 0;
	var_8_bool = var_1_bool;
	if(var_8_bool != 0) {
		var_9_bool = 0; var_10_float = 0;
		func_47(var_9_bool, (float)0.3333333432674408);
		if(var_9_bool != 0) {
			var_7_bool = 1;
		}
	}
	if(var_7_bool != 0) {
		PlayGlobalSound("agony", CVector(0.0, 40.0, 0.0));
	}
	PlayAnimation("all", "agony");
	WaitForAnimEnd(var_1_bool);
	goto Label_5;
}
EMIT "Return(); Pop(2)";


func_42(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0;
	IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
	return 2;
}


func_47(var_9_bool, var_10_float)
{
	var_11_float = 0; var_12_float = 0;
	rand(var_12_float);
	var_9_bool = var_12_float < var_10_float;
	return 2;
}


