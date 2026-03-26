// @IMPORTS: SetVisibility/1,Hold/0,SetUsable/1,StopGroup0/0,SetUsable/0,GetMainOutdoorScene/1,AddBlankActor/4
// @STRINGS: W:quest_b10_01_cutscene|W:enable_use|W:disable_use|W:.bin
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_0: op=0xc vars=object
// @EVENT_26: op=0x1a vars=string
// @PE: 0xc,0x1a

task_0_event_0(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_string = "";
	func_40(var_2_object, "quest_b10_01_cutscene");
	func_21(var_1_object);
	return 0;
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_3_bool = var_1_string == "enable_use";
	if(var_3_bool != 0) {
		SetUsable();
	} else {
		var_5_bool = var_1_string == "disable_use";
		if(var_5_bool == 0) goto Label_39;
		func_21(var_1_string);
	}
Label_39:
	return 0;
	
}


main(var_0_bool)
{
	SetVisibility((bool)1);
	
Label_3:
	var_2_bool = var_0_bool == 0; //@nz
	if(var_2_bool != 0) {
		Hold();
		goto Label_3;
	}
	SetUsable((bool)0);
	return 0;
}


func_40(var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj();
	GetMainOutdoorScene(var_6_object);
	var_9_int = var_3_string + ".bin";
	AddBlankActor(var_7_object, var_6_object, var_3_string, var_9_int);
	var_7_object = var_2_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_21(var_0_bool)
{
	var_0_bool = true;
	StopGroup0();
	EventDisable(0);
	return 0;
}


