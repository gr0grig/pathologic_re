// @IMPORTS: SetOwnerDraw/1,ProcessEvents/0,UITrace/1,GetContainerItemCount/1,GetContainerSize/1
// @STRINGS: W:scalpel|W:has slot|W:squirt
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_200: op=0x9 vars=int,string,object
// @PE: 0x9

task_0_event_200(var_0_int, var_1_string, var_2_object)
{
	var_4_bool = var_1_string == "scalpel";
	if(var_4_bool != 0) {
		var_5_bool = 0;
		func_32(var_5_bool);
		if(var_5_bool != 0) {
			UITrace("has slot");
		}
	} else {
		var_13_bool = var_1_string == "squirt";
		if(var_13_bool == 0) goto Label_31;
		var_14_bool = 0;
		func_32(var_14_bool);
		if(var_14_bool == 0) goto Label_31;
		UITrace("has slot");
	}
Label_31:
	return 0;
	
}


main()
{
	SetOwnerDraw((bool)0);
	func_43();
	ProcessEvents();
	return 0;
}


func_32(var_5_bool)
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0;
	GetContainerItemCount(var_8_int);
	GetContainerSize(var_9_int);
	var_10_bool = var_8_int >= var_9_int;
	if(var_10_bool != 0) {
		var_5_bool = 0;
		return 4;
	}
	var_5_bool = 1;
	return 4;
}


func_43()
{
	return 0;
}


