// @IMPORTS: SetVariable/2,Trace/1,GetMainOutdoorScene/1,AddActor/6,GetVariable/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1
// @STRINGS: W:d7q02|W:completed|W:fail|W:place_corpse|W:d7q02_corpse|W:d7q02_corpse.xml|W:cleanup
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x9 vars=string
// @EVENT_9: op=0x6f vars=int,float
// @PE: 0x6f

task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj();
	Trace(var_1_string);
	var_5_bool = var_1_string == "completed";
	if(var_5_bool != 0) {
		func_58();
	} else {
		var_22_bool = var_1_string == "fail";
		if(var_22_bool != 0) {
			func_50();
			goto Label_38;
		}
		var_26_bool = var_1_string == "place_corpse";
		if(var_26_bool == 0) goto Label_38;
		GetMainOutdoorScene(var_3_object);
		AddActor(var_0_object, "d7q02_corpse", var_3_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "d7q02_corpse.xml");
		var_3_object = 0;
	}
Label_38:
	return 2;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_39();
	return 0;
}


main(var_0_object)
{
	SetVariable("d7q02", (int)1);
	var_3_int = 0;
	func_92((int)7);
	return 0;
}


func_39()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("d7q02", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_50();
	}
	return 2;
}


func_80(var_0_object)
{
	EventDisable(26);
	var_9_object = var_0_object;
	if(var_9_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_11_object = Obj();
	func_116(var_11_object);
	RemoveActor(var_11_object);
	return 0;
}


func_50()
{
	SetVariable("d7q02", (int)-1);
	func_80(var_4_int);
	return 0;
}


func_116(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	self(var_13_object);
	var_13_object = var_11_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_58()
{
	var_6_int = 0; var_7_int = 0;
	GetVariable("d7q02", var_7_int);
	var_9_bool = 0;
	var_9_bool = 0;
	var_11_bool = var_7_int != (int)1000;
	if(var_11_bool != 0) {
		var_13_bool = var_7_int != (int)-1;
		if(var_13_bool != 0) {
			var_9_bool = 1;
		}
	}
	if(var_9_bool != 0) {
		SetVariable("d7q02", (int)1000);
		func_80(var_7_int);
	}
	return 2;
}


func_92(var_3_int)
{
	var_4_float = 0; var_5_float = 0;
	GetGameTime(var_5_float);
	var_7_float = var_3_int * (int)24;
	var_8_bool = var_5_float >= var_7_float;
	if(var_8_bool != 0) {
		func_80(var_5_float);
	} else {
		var_16_float = var_3_int * (int)24;
		SetTimeEvent((int)0, var_16_float);
		Hold();
	}
	return 2;
	
}


