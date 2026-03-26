// @IMPORTS: Trace/1,GetMainOutdoorScene/1,Trigger/2,GetVariable/2,SetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6
// @STRINGS: W:place_trigger|W:b10q02_trigger|W:b10q02_trigger.xml|W:place_bomb|W:b10q02_bomb|W:b10q02_bomb.xml|W:remove_bomb|W:cleanup|W:fail|W:completed|W:b10q02
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_26: op=0x5 vars=string
// @EVENT_9: op=0x78 vars=int,float
// @PE: 0x78

task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj();
	Trace(var_2_string);
	var_8_bool = var_2_string == "place_trigger";
	if(var_8_bool != 0) {
		GetMainOutdoorScene(var_5_object);
		var_9_object = Obj(); var_10_object = Obj(); var_11_string = ""; var_12_string = "";
		var_5_object = var_10_object;
		func_131(var_9_object, var_10_object, "b10q02_trigger", "b10q02_trigger.xml");
		var_0_object = var_9_object;
		var_5_object = 0;
	} else {
		var_18_bool = var_2_string == "place_bomb";
		if(var_18_bool != 0) {
			GetMainOutdoorScene(var_6_object);
			var_19_object = Obj(); var_20_object = Obj(); var_21_string = ""; var_22_string = "";
			var_6_object = var_20_object;
			func_131(var_19_object, var_20_object, "b10q02_bomb", "b10q02_bomb.xml");
			var_1_object = var_19_object;
			var_6_object = 0;
			goto Label_56;
		}
		var_24_bool = var_2_string == "remove_bomb";
		if(var_24_bool != 0) {
			Trigger(var_1_object, "cleanup");
			goto Label_56;
		}
		var_27_bool = var_2_string == "fail";
		if(var_27_bool != 0) {
			func_68();
			goto Label_56;
		}
		var_38_bool = var_2_string == "completed";
		if(var_38_bool == 0) goto Label_56;
		func_76();
	}
Label_56:
	return 4;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_57();
	return 0;
}


main(var_0_object, var_1_object)
{
	var_2_int = 0;
	func_101((int)10);
	return 0;
}


func_131(var_9_object, var_10_object, var_11_string, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj();
	AddActor(var_14_object, var_11_string, var_10_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), var_12_string);
	var_14_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_68()
{
	SetVariable("b10q02", (int)-1);
	func_84(var_4_int, var_5_int);
	return 0;
}


func_101(var_2_int)
{
	var_3_float = 0; var_4_float = 0;
	GetGameTime(var_4_float);
	var_6_float = var_2_int * (int)24;
	var_7_bool = var_4_float >= var_6_float;
	if(var_7_bool != 0) {
		func_84(var_3_float, var_4_float);
	} else {
		var_17_float = var_2_int * (int)24;
		SetTimeEvent((int)0, var_17_float);
		Hold();
	}
	return 2;
	
}


func_76()
{
	SetVariable("b10q02", (int)1000);
	func_84(var_5_object, var_6_object);
	return 0;
}


func_84(var_0_object, var_1_object)
{
	EventDisable(26);
	var_8_object = var_0_object;
	if(var_8_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_10_object = var_1_object;
	if(var_10_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_12_object = Obj();
	func_125(var_12_object);
	RemoveActor(var_12_object);
	return 0;
}


func_57()
{
	var_4_int = 0; var_5_int = 0;
	GetVariable("b10q02", var_5_int);
	var_8_bool = var_5_int != (int)1000;
	if(var_8_bool != 0) {
		func_68();
	}
	return 2;
}


func_125(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj();
	self(var_14_object);
	var_14_object = var_12_object;
	return 2;
}
EMIT "Stack[-1] = 0";


