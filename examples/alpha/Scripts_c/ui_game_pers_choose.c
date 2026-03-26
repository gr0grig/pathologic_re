// @IMPORTS: SetOwnerDraw/1,SetModal/1,ProcessEvents/0,SendToParent/1,DestroyWindow/0
// @STRINGS: W:danko_button|W:klara_button|W:burah_button
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_200: op=0x9 vars=int,string,object
// @PE: 0x9

task_0_event_200(var_0_int, var_1_string, var_2_object)
{
	var_4_bool = var_1_string == "danko_button";
	if(var_4_bool != 0) {
		SendToParent((int)0);
		DestroyWindow();
	}
	var_7_bool = var_1_string == "klara_button";
	if(var_7_bool != 0) {
		SendToParent((int)1);
	}
	var_10_bool = var_1_string == "burah_button";
	if(var_10_bool != 0) {
		SendToParent((int)2);
	}
	return 0;
}


main()
{
	SetOwnerDraw((bool)0);
	SetModal((bool)1);
	ProcessEvents();
	return 0;
}


