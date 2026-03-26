// @IMPORTS: SetVariable/2,Trace/1,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,FindActor/2
// @STRINGS: W:d10q02|W:cot_georg@door1|W:cot_maria@door1|W:cot_viktor@door1|W:warehouse_rubin@door1|W:unlock_georg|W:fail|W:completed|W:Door |W: not found|W:locked|A:SetProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_26: op=0x1d vars=string
// @EVENT_9: op=0x6c vars=int,float
// @PE: 0x1d,0x6c

task_0_event_26(var_0_string)
{
	Trace(var_0_string);
	var_2_bool = var_0_string == "unlock_georg";
	if(var_2_bool != 0) {
		var_3_string = ""; var_4_bool = 0;
		func_119("cot_georg@door1", (bool)0);
	} else {
		var_14_bool = var_0_string == "fail";
		if(var_14_bool != 0) {
			func_66();
			goto Label_54;
		}
		var_21_bool = var_0_string == "completed";
		if(var_21_bool == 0) goto Label_54;
		func_74();
	}
Label_54:
	return 0;
	
}


task_0_event_9(var_0_int, var_1_float)
{
	func_55();
	return 0;
}


main()
{
	SetVariable("d10q02", (int)1);
	var_2_string = ""; var_3_bool = 0;
	func_119("cot_georg@door1", (bool)1);
	var_12_string = ""; var_13_bool = 0;
	func_119("cot_maria@door1", (bool)0);
	var_14_string = ""; var_15_bool = 0;
	func_119("cot_viktor@door1", (bool)0);
	var_16_string = ""; var_17_bool = 0;
	func_119("warehouse_rubin@door1", (bool)0);
	var_18_int = 0;
	func_89((int)10);
	return 0;
}


func_66()
{
	SetVariable("d10q02", (int)-1);
	func_82();
	return 0;
}


func_74()
{
	SetVariable("d10q02", (int)1000);
	func_82();
	return 0;
}


func_113(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj();
	self(var_26_object);
	var_26_object = var_24_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_82()
{
	EventDisable(26);
	var_24_object = Obj();
	func_113(var_24_object);
	RemoveActor(var_24_object);
	return 0;
}


func_55()
{
	var_2_int = 0; var_3_int = 0;
	GetVariable("d10q02", var_3_int);
	var_6_bool = var_3_int != (int)1000;
	if(var_6_bool != 0) {
		func_66();
	}
	return 2;
}


func_119(var_2_string, var_3_bool)
{
	var_4_object = Obj(); var_5_object = Obj();
	FindActor(var_5_object, var_2_string);
	var_6_bool = var_5_object == 0; //@nz
	if(var_6_bool != 0) {
		var_8_int = "Door " + var_2_string;
		var_10_int = var_8_int + " not found";
		Trace(var_10_int);
	} else {
		@@var_5_object:SetProperty("locked", var_3_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_89(var_18_int)
{
	var_19_float = 0; var_20_float = 0;
	GetGameTime(var_20_float);
	var_22_float = var_18_int * (int)24;
	var_23_bool = var_20_float >= var_22_float;
	if(var_23_bool != 0) {
		func_82();
	} else {
		var_29_float = var_18_int * (int)24;
		SetTimeEvent((int)0, var_29_float);
		Hold();
	}
	return 2;
	
}


