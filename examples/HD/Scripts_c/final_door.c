// @IMPORTS: Trace/1,TriggerWorld/1,FindActor/2,Hold/0,PlaySound/1,ClassifyActor/2,GetOpenSide/1,Open/1,Close/0,GetProperty/2
// @STRINGS: W:on use|W:open|W:trigger |W:player|W:door_closed|W:Door is locked
// @RUN_OP: 0x1a
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x0 vars=object
// @EVENT_26: op=0x9 vars=string
// @EVENT_38: op=0x4c vars=object
// @PE: 0x0,0x60

task_0_event_0(var_0_object)
{
	EventDisable(0);
	Trace("on use");
	TriggerWorld("open");
	return 0;
}


task_0_event_26(var_0_string)
{
	var_1_object = Obj(); var_2_object = Obj();
	var_4_int = "trigger " + var_0_string;
	Trace(var_4_int);
	var_6_bool = var_0_string == "open";
	if(var_6_bool != 0) {
		FindActor(var_2_object, "player");
		var_8_object = Obj();
		var_2_object = var_8_object;
		func_30(var_8_object);
		var_2_object = 0;
	}
	return 2;
}


task_0_event_38(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0;
	var_3_bool = 0;
	var_3_bool = 1;
	var_4_bool = var_0_object == 0; //@nz
	if(var_4_bool != 1) {
		var_5_bool = 0; var_6_object = Obj();
		var_0_object = var_6_object;
		func_96(var_6_object);
		var_12_bool = var_5_bool == 0; //@nz
		if(var_12_bool != 1) {
			var_3_bool = 0;
		}
	}
	if(var_3_bool != 0) {
		return 2;
	}
	ClassifyActor(var_2_bool, var_0_object);
	var_13_bool = var_2_bool == 0; //@nz
	Open(var_13_bool);
	return 2;
}


main()
{
	
Label_26:
	Hold();
	goto Label_26;
}
EMIT "Return(); Pop(0)";


func_96(var_5_bool)
{
	var_7_bool = 0;
	func_102(var_7_bool);
	var_5_bool = !var_7_bool;
	return 0;
}


func_102(var_7_bool)
{
	var_8_int = 0; var_9_int = 0;
	GetProperty("locked", var_9_int);
	var_7_bool = var_9_int != (int)0;
	return 2;
}


func_30(var_8_object)
{
	var_9_bool = 0; var_10_int = 0; var_11_bool = 0; var_12_int = 0;
	var_13_bool = var_8_object == 0; //@nz
	if(var_13_bool != 0) {
		return 4;
	}
	var_14_bool = 0; var_15_object = Obj();
	var_8_object = var_15_object;
	func_96(var_15_object);
	var_21_bool = var_14_bool == 0; //@nz
	if(var_21_bool != 0) {
		PlaySound("door_closed");
		Trace("Door is locked");
		return 4;
	}
	ClassifyActor(var_11_bool, var_8_object);
	var_11_bool = !var_11_bool;
	GetOpenSide(var_12_int);
	var_24_bool = var_12_int == 0; //@nz
	if(var_24_bool != 0) {
		Open(var_11_bool);
	} else {
		var_26_bool = var_12_int > (int)0;
		if(var_26_bool != 0) {
			var_27_bool = var_11_bool;
			if(var_27_bool != 0) {
				Close();
			} else {
				Open(var_11_bool);
		}
			var_28_bool = var_11_bool;
			if(var_28_bool != 0) {
				Open(var_11_bool);
				goto Label_75;
			}
			Close();
		}
		goto Label_75;
	}
Label_75:
	return 4;
	
}


