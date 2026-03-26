// @IMPORTS: SetVisibility/1,SetTimeEvent/2,RemoveActor/1,Hold/0,IsOverrideActive/1,Barter/1,IsLoaded/1,self/1,GetVariable/2
// @STRINGS: A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_9: op=0xc vars=int,float
// @EVENT_6: op=0x1a vars=
// @EVENT_0: op=0x26 vars=object
// @PE: 0xc

task_0_event_9(var_0_bool, var_1_int, var_2_float)
{
	var_3_bool = 0;
	func_64(var_3_bool);
	var_6_bool = var_3_bool == 0; //@nz
	if(var_6_bool != 0) {
		var_7_object = Obj();
		func_69(var_7_object);
		RemoveActor(var_7_object);
	} else {
		var_0_bool = true;
	}
	return 0;
	
}


task_0_event_6(var_0_bool)
{
	var_1_bool = var_0_bool;
	if(var_1_bool != 0) {
		var_2_object = Obj();
		func_69(var_2_object);
		RemoveActor(var_2_object);
	}
	return 0;
}


task_0_event_0(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0;
	var_6_bool = 0;
	var_6_bool = 1;
	var_7_bool = var_1_object == 0; //@nz
	if(var_7_bool != 1) {
		var_8_bool = 0;
		func_75(var_8_bool);
		var_12_bool = var_8_bool == 0; //@nz
		if(var_12_bool != 1) {
			var_6_bool = 0;
		}
	}
	if(var_6_bool != 0) {
		return 4;
	}
	@@var_1_object:IsOnGround(var_4_bool);
	var_13_bool = var_4_bool;
	if(var_13_bool != 0) {
		EventDisable(0);
		IsOverrideActive(var_5_bool);
		var_14_bool = var_5_bool == 0; //@nz
		if(var_14_bool != 0) {
			Barter(var_1_object);
		}
		EventEnable(0);
	}
	return 4;
}


main(var_0_bool)
{
	SetVisibility((bool)1);
	var_0_bool = false;
	SetTimeEvent((int)0, (int)24);
	func_34();
	return 0;
}


func_64(var_3_bool)
{
	var_4_bool = 0; var_5_bool = 0;
	IsLoaded(var_5_bool);
	var_5_bool = var_3_bool;
	return 2;
}


func_34()
{
	
Label_34:
	Hold();
	goto Label_34;
}
EMIT "Return(); Pop(0)";


func_75(var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	GetVariable("nouse_container", var_10_int);
	var_8_bool = !var_10_int;
	return 2;
}


func_69(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	self(var_4_object);
	var_4_object = var_2_object;
	return 2;
}
EMIT "Stack[-1] = 0";


