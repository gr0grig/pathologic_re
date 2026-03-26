// @IMPORTS: IsPlayerActor/2,RemoveActor/1,Hold/0,IsLoaded/1,self/1,FindActor/2,Trigger/2
// @STRINGS: W:quest_d3_02|W:butcher_trigger|W:cleanup|W:restore
// @RUN_OP: 0x11
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_23: op=0x0 vars=object
// @EVENT_26: op=0x15 vars=string
// @EVENT_6: op=0x31 vars=

task_0_event_23(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0;
	IsPlayerActor(var_1_object, var_3_bool);
	var_4_bool = var_3_bool;
	if(var_4_bool != 0) {
		EventDisable(23);
		var_5_bool = 0; var_6_string = ""; var_7_string = "";
		func_73(var_5_bool, "quest_d3_02", "butcher_trigger");
		var_11_object = Obj();
		func_67(var_11_object);
		RemoveActor(var_11_object);
	}
	return 2;
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0;
	var_5_bool = var_1_string == "cleanup";
	if(var_5_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_3_bool);
		var_6_bool = 0;
		var_6_bool = 0;
		var_7_bool = var_3_bool == 0; //@nz
		if(var_7_bool != 0) {
			var_8_bool = 0;
			func_65(var_8_bool);
			if(var_8_bool != 0) {
				var_6_bool = 1;
			}
		}
		if(var_6_bool != 0) {
			var_9_object = Obj();
			func_67(var_9_object);
			RemoveActor(var_9_object);
		}
	} else {
		var_13_bool = var_1_string == "restore";
		if(var_13_bool == 0) goto Label_48;
		var_0_bool = false;
	}
Label_48:
	return 2;
	
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0;
	var_1_bool = 0;
	var_2_bool = var_0_bool;
	if(var_2_bool != 0) {
		var_3_bool = 0;
		func_65(var_3_bool);
		if(var_3_bool != 0) {
			var_1_bool = 1;
		}
	}
	if(var_1_bool != 0) {
		var_4_object = Obj();
		func_67(var_4_object);
		RemoveActor(var_4_object);
	}
	return 0;
}


main(var_0_bool)
{
	
Label_17:
	Hold();
	goto Label_17;
}
EMIT "Return(); Pop(0)";


func_65(var_3_bool)
{
	var_3_bool = 1;
	return 0;
}


func_73(var_5_bool, var_6_string, var_7_string)
{
	var_8_object = Obj(); var_9_object = Obj();
	FindActor(var_9_object, var_6_string);
	var_10_bool = var_9_object == 0; //@ne
	if(var_10_bool != 0) {
		var_5_bool = 0;
		return 2;
	}
	Trigger(var_9_object, var_7_string);
	var_5_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_67(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj();
	self(var_6_object);
	var_6_object = var_4_object;
	return 2;
}
EMIT "Stack[-1] = 0";


