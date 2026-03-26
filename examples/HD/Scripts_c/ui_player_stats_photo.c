// @IMPORTS: EnableClipping/1,LoadImage/1,SetOwnerDraw/1,ProcessEvents/0,Blit/3,GetVariable/2
// @STRINGS: W:ui/stat_Danko.png|W:ui/stat_Burah.png|W:ui/stat_Klara.png|W:branch
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string params=0
// @EVENT_0: op=0x1c vars=

task_0_event_0(var_0_string)
{
	Blit(var_0_string, (int)0, (int)0);
	return 0;
}


main(var_0_string)
{
	EnableClipping((bool)1);
	var_2_int = 0;
	func_33(var_2_int);
	var_7_bool = var_2_int == (int)0;
	if(var_7_bool != 0) {
		var_0_string = "ui/stat_Danko.png";
	} else {
		var_9_int = 0;
		func_33(var_9_int);
		var_11_bool = var_9_int == (int)1;
		if(var_11_bool != 0) {
			var_0_string = "ui/stat_Burah.png";
			goto Label_20;
		}
		var_0_string = "ui/stat_Klara.png";
	}
Label_20:
	LoadImage(var_0_string);
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
	
}


func_33(var_2_int)
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("branch", var_4_int);
	var_4_int = var_2_int;
	return 2;
}


