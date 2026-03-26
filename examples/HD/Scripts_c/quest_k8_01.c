// @IMPORTS: Hold/0,Trace/1,GetVariable/2,SetVariable/2,RemoveActor/1,self/1,FindActor/2,Trigger/2,GetSceneByName/2
// @STRINGS: W:boiny@door1|W:unlock_boiny|W:fail|W:completed|W:cleanup|W:k8q01|W:Door |W: not found|W:locked|A:SetProperty|W:klara2_npc_positioner|W:init|W:burah_home|W:noburah
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_26: op=0xf vars=string
// @PE: 0x0

task_0_event_26(var_0_string)
{
	var_1_int = 0; var_2_int = 0;
	Trace(var_0_string);
	var_4_bool = var_0_string == "unlock_boiny";
	if(var_4_bool != 0) {
		var_5_string = ""; var_6_bool = 0;
		func_95("boiny@door1", (bool)0);
	} else {
		var_16_bool = var_0_string == "fail";
		if(var_16_bool != 0) {
			func_57();
			goto Label_56;
		}
		var_22_bool = var_0_string == "completed";
		if(var_22_bool != 0) {
			func_65();
			goto Label_56;
		}
		var_26_bool = var_0_string == "cleanup";
		if(var_26_bool == 0) goto Label_56;
		GetVariable("k8q01", var_2_int);
		var_29_bool = var_2_int != (int)1000;
		if(var_29_bool != 0) {
			func_57();
		}
		func_79();
	}
Label_56:
	return 2;
	
}


main()
{
	func_124();
	func_130();
	var_10_string = ""; var_11_bool = 0;
	func_95("boiny@door1", (bool)1);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_65()
{
	SetVariable("k8q01", (int)1000);
	func_73();
	return 0;
}


func_130()
{
	var_6_object = Obj(); var_7_object = Obj();
	GetSceneByName(var_7_object, "burah_home");
	Trigger(var_7_object, "noburah");
	return 2;
}
EMIT "Stack[-1] = 0";


func_73()
{
	var_19_string = ""; var_20_bool = 0;
	func_95("boiny@door1", (bool)1);
	return 0;
}


func_139()
{
	var_30_object = Obj(); var_31_object = Obj();
	GetSceneByName(var_31_object, "burah_home");
	Trigger(var_31_object, "burah");
	return 2;
}
EMIT "Stack[-1] = 0";


func_57()
{
	SetVariable("k8q01", (int)-1);
	func_73();
	return 0;
}


func_79()
{
	EventDisable(26);
	func_139();
	var_34_object = Obj();
	func_89(var_34_object);
	RemoveActor(var_34_object);
	return 0;
}


func_112(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj();
	FindActor(var_4_object, var_1_string);
	var_5_bool = var_4_object == 0; //@ne
	if(var_5_bool != 0) {
		var_0_bool = 0;
		return 2;
	}
	Trigger(var_4_object, var_2_string);
	var_0_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_89(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj();
	self(var_36_object);
	var_36_object = var_34_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_124()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = "";
	func_112(var_0_bool, "klara2_npc_positioner", "init");
	return 0;
}


func_95(var_10_string, var_11_bool)
{
	var_12_object = Obj(); var_13_object = Obj();
	FindActor(var_13_object, var_10_string);
	var_14_bool = var_13_object == 0; //@nz
	if(var_14_bool != 0) {
		var_16_int = "Door " + var_10_string;
		var_18_int = var_16_int + " not found";
		Trace(var_18_int);
	} else {
		@@var_13_object:SetProperty("locked", var_11_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


