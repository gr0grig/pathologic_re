// @IMPORTS: SetVisibility/1,Hold/0,IsOverrideActive/1,Barter/1,GetVariable/2
// @STRINGS: A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0xb vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0;
	var_5_bool = 0;
	var_5_bool = 1;
	var_6_bool = var_0_object == 0; //@nz
	if(var_6_bool != 1) {
		var_7_bool = 0;
		func_37(var_7_bool);
		var_11_bool = var_7_bool == 0; //@nz
		if(var_11_bool != 1) {
			var_5_bool = 0;
		}
	}
	if(var_5_bool != 0) {
		return 4;
	}
	@@var_0_object:IsOnGround(var_3_bool);
	var_12_bool = var_3_bool;
	if(var_12_bool != 0) {
		EventDisable(0);
		IsOverrideActive(var_4_bool);
		var_13_bool = var_4_bool == 0; //@nz
		if(var_13_bool != 0) {
			Barter(var_0_object);
		}
		EventEnable(0);
	}
	return 4;
}


main()
{
	SetVisibility((bool)1);
	func_7();
	return 0;
}


func_37(var_7_bool)
{
	var_8_int = 0; var_9_int = 0;
	GetVariable("nouse_container", var_9_int);
	var_7_bool = !var_9_int;
	return 2;
}


func_7()
{
	
Label_7:
	Hold();
	goto Label_7;
}
EMIT "Return(); Pop(0)";


