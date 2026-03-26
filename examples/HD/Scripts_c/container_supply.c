// @IMPORTS: SetVisibility/1,GetGameTime/1,SetTimeEvent/2,AddItem/3,HasProperty/2,GetProperty/2,CreateInvItem/1,Hold/0,IsOverrideActive/1,Barter/1,CreateObjectVector/1,GetVariable/2
// @STRINGS: A:size|A:get|A:clear|W:enabled|W:alpha_pills|A:SetItemName|A:add|A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_9: op=0x21 vars=int,float
// @EVENT_5: op=0x28 vars=
// @EVENT_0: op=0x55 vars=object
// @PE: 0x21

task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	var_3_int = 0;
	var_3_int = var_1_int + (int)1;
	func_61(var_3_int);
	return 0;
}


task_0_event_5(var_0_object)
{
	var_1_int = 0; var_2_int = 0; var_3_object = Obj(); var_4_bool = 0; var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_bool = 0;
	var_9_bool = var_0_object == 0; //@nz
	if(var_9_bool != 0) {
		return 8;
	}
	@@@var_0_object:size(var_5_int);
	var_6_int = 0;
	
Label_47:
	var_10_bool = var_6_int < var_5_int;
	if(var_10_bool != 0) {
		@@@var_0_object:get(var_7_object, var_6_int);
		AddItem(var_8_bool, var_7_object, (int)0);
		var_7_object = 0;
		var_6_int = var_6_int + (int)1;
		goto Label_47;
	}
	@@@var_0_object:clear();
	return 8;
}


task_0_event_0(var_0_object, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0;
	var_6_bool = 0;
	var_6_bool = 1;
	var_7_bool = var_1_object == 0; //@nz
	if(var_7_bool != 1) {
		var_8_bool = 0;
		func_117(var_8_bool);
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


main(var_0_object)
{
	var_1_object = Obj();
	func_111(var_1_object);
	var_0_object = var_1_object;
	SetVisibility((bool)1);
	func_14();
	func_81();
	return 0;
}


func_14()
{
	var_5_float = 0; var_6_int = 0; var_7_float = 0; var_8_int = 0;
	GetGameTime(var_7_float);
	var_9_int = 0;
	var_9_int = var_7_float / (int)24;
	var_8_int = var_9_int + (int)1;
	
Label_22:
	var_13_bool = var_8_int < (int)12;
	if(var_13_bool != 0) {
		var_15_float = var_8_int * (int)24;
		SetTimeEvent(var_8_int, var_15_float);
		var_8_int = var_8_int + (int)1;
		goto Label_22;
	}
	return 4;
}


func_111(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj();
	CreateObjectVector(var_3_object);
	var_3_object = var_1_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_81()
{
	
Label_81:
	Hold();
	goto Label_81;
}
EMIT "Return(); Pop(0)";


func_117(var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	GetVariable("nouse_container", var_10_int);
	var_8_bool = !var_10_int;
	return 2;
}


func_61(var_0_object)
{
	var_5_bool = 0; var_6_bool = 0; var_7_object = Obj(); var_8_bool = 0; var_9_bool = 0; var_10_object = Obj();
	HasProperty("enabled", var_8_bool);
	var_12_bool = var_8_bool;
	if(var_12_bool != 0) {
		GetProperty("enabled", var_9_bool);
		var_14_bool = var_9_bool;
		if(var_14_bool != 0) {
			CreateInvItem(var_10_object);
			@@var_10_object:SetItemName("alpha_pills");
			@@@var_0_object:add(var_10_object);
			var_10_object = 0;
		}
	}
	return 6;
}


