// @IMPORTS: Hold/0,IsPlayerActor/2,FindActor/2,Trigger/2
// @STRINGS: W:activate|W:deactivate|W:quest_b11_01|W:shaft_drop|W:health|A:SetProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_26: op=0x4 vars=string
// @EVENT_23: op=0xf vars=object
// @PE: 0x4

task_0_event_26(var_0_bool, var_1_string)
{
	var_3_bool = var_1_string == "activate";
	if(var_3_bool != 0) {
		var_0_bool = true;
	} else {
		var_5_bool = var_1_string == "deactivate";
		if(var_5_bool == 0) goto Label_14;
		var_0_bool = false;
	}
Label_14:
	return 0;
	
}


task_0_event_23(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0;
	IsPlayerActor(var_1_object, var_3_bool);
	var_4_bool = var_3_bool;
	if(var_4_bool != 0) {
		var_5_bool = var_0_bool;
		if(var_5_bool != 0) {
			var_6_bool = 0; var_7_string = ""; var_8_string = "";
			func_33(var_6_bool, "quest_b11_01", "shaft_drop");
		} else {
			@@var_1_object:SetProperty("health", (int)0);
		}
	}
	return 2;
	
}


main(var_0_bool)
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_33(var_6_bool, var_7_string, var_8_string)
{
	var_9_object = Obj(); var_10_object = Obj();
	FindActor(var_10_object, var_7_string);
	var_11_bool = var_10_object == 0; //@ne
	if(var_11_bool != 0) {
		var_6_bool = 0;
		return 2;
	}
	Trigger(var_10_object, var_8_string);
	var_6_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


