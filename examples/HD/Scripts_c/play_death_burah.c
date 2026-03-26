// @IMPORTS: RemoveOverride/0,ModBlurLevel/1,CameraSwitchToNormal/0,RemoveActor/1,CameraPlayRel/2,Sleep/1,CameraWaitForPlayFinish/0,GameOver/1,Hold/0,FindActor/2,ModDarkenLevel/1,sync/1
// @STRINGS: W:danko_death.mot|W:gameover.xml|W:player
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	RemoveOverride();
	ModBlurLevel((float)0.15000000596046448);
	CameraSwitchToNormal();
	var_1_object = Obj();
	func_33(var_1_object);
	RemoveActor(var_1_object);
	CameraPlayRel("danko_death.mot", (bool)1);
	Sleep((float)1.5);
	var_8_float = 0; var_9_float = 0; var_10_float = 0;
	func_40((float)0, (float)1, (float)1.25);
	CameraWaitForPlayFinish();
	GameOver("gameover.xml");
	Hold();
	return 0;
}


func_40(var_8_float, var_9_float, var_10_float)
{
	var_11_bool = 0; var_12_float = 0; var_13_float = 0; var_14_bool = 0; var_15_float = 0; var_16_float = 0;
	var_14_bool = var_9_float > var_8_float;
	var_17_int = var_9_float - var_8_float;
	var_15_float = var_17_int / var_10_float;
	
Label_44:
	var_18_bool = var_14_bool;
	if(var_18_bool != 0) {
		var_19_bool = var_8_float < var_9_float;
	} else {
		var_21_bool = var_9_float < var_8_float;
	}
	if(var_19_bool != 0) {
		ModDarkenLevel(var_8_float);
		sync(var_16_float);
		var_20_float = var_16_float * var_15_float;
		var_8_float = var_8_float + var_20_float;
		goto Label_44;
	}
	ModDarkenLevel(var_9_float);
	return 6;
	
}


func_33(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj();
	FindActor(var_3_object, "player");
	var_3_object = var_1_object;
	return 2;
}
EMIT "Stack[-1] = 0";


