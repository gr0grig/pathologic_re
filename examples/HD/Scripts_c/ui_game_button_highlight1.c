// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,StretchBlit/5,SendMessageToParent/1
// @STRINGS: W:default|W:disabled
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool params=0
// @EVENT_0: op=0xb vars=
// @EVENT_2: op=0x1b vars=int,int
// @EVENT_9: op=0x22 vars=
// @EVENT_10: op=0x27 vars=
// @EVENT_200: op=0x2c vars=int,string,object
// @PE: 0x1b,0x2c

task_0_event_0(var_0_bool, var_1_bool)
{
	var_2_bool = 0;
	var_2_bool = 1;
	var_3_bool = var_0_bool == 0; //@nz
	if(var_3_bool != 1) {
		var_4_bool = var_1_bool;
		if(var_4_bool != 1) {
			var_2_bool = 0;
		}
	}
	if(var_2_bool != 0) {
		StretchBlit("disabled", (int)0, (int)0, (int)250, (int)297);
	}
	return 0;
}


task_0_event_2(var_0_bool, var_1_bool, var_2_int, var_3_int)
{
	var_4_bool = var_1_bool == 0; //@nz
	if(var_4_bool != 0) {
		SendMessageToParent((int)0);
	}
	return 0;
}


task_0_event_9(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	SendMessageToParent((int)1);
	return 0;
}


task_0_event_10(var_0_bool, var_1_bool)
{
	var_0_bool = false;
	SendMessageToParent((int)2);
	return 0;
}


task_0_event_200(var_0_bool, var_1_bool, var_2_int, var_3_string, var_4_object)
{
	var_6_bool = (int)131072 == var_2_int;
	if(var_6_bool != 0) {
		var_1_bool = true;
	} else {
		var_8_bool = var_2_int == (int)0;
		if(var_8_bool != 0) {
			var_0_bool = false;
			SendMessageToParent((int)2);
			goto Label_74;
		}
		var_11_bool = var_2_int == (int)1;
		if(var_11_bool != 0) {
			var_0_bool = true;
			SendMessageToParent((int)1);
			goto Label_74;
		}
		var_14_bool = var_2_int == (int)2;
		if(var_14_bool == 0) goto Label_74;
		var_15_bool = var_1_bool == 0; //@nz
		if(var_15_bool == 0) goto Label_74;
		SendMessageToParent((int)0);
	}
Label_74:
	return 0;
	
}


main(var_0_bool, var_1_bool)
{
	var_0_bool = false;
	var_1_bool = false;
	SetBackground("default");
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


