// @IMPORTS: SetVisibility/1,rand/2,GameSleep/1,RemoveAllItems/0,IsOverrideActive/1,Barter/1,irand/2,AddItem/4,GetVariable/2
// @STRINGS: W:bottle_empty|A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x24 vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0;
	var_5_bool = 0;
	func_76(var_5_bool);
	var_9_bool = var_5_bool == 0; //@nz
	if(var_9_bool != 0) {
		return 4;
	}
	@@var_0_object:IsOnGround(var_3_bool);
	var_10_bool = var_3_bool;
	if(var_10_bool != 0) {
		EventDisable(0);
		IsOverrideActive(var_4_bool);
		var_11_bool = var_4_bool == 0; //@nz
		if(var_11_bool != 0) {
			Barter(var_0_object);
		}
		EventEnable(0);
	}
	return 4;
}


main()
{
	var_0_float = 0; var_1_float = 0;
	SetVisibility((bool)1);
	func_26();
	rand(var_1_float, (int)13);
	var_21_int = var_1_float + (int)1;
	GameSleep(var_21_int);
	
Label_14:
	func_26();
	rand(var_1_float, (int)2);
	var_24_int = var_1_float + (int)12;
	GameSleep(var_24_int);
	goto Label_14;
}
EMIT "Return(); Pop(2)";


func_56(var_3_string, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_bool = 0; var_9_int = 0; var_10_bool = 0;
	var_11_bool = 0; var_12_int = 0; var_13_int = 0;
	var_4_int = var_12_int;
	var_5_int = var_13_int;
	func_71(var_11_bool, var_12_int, var_13_int);
	if(var_11_bool != 0) {
		irand(var_9_int, var_6_int);
		var_18_int = var_9_int + (int)1;
		AddItem(var_10_bool, var_3_string, (int)0, var_18_int);
	}
	return 4;
}


func_26()
{
	RemoveAllItems();
	var_3_string = ""; var_4_int = 0; var_5_int = 0; var_6_int = 0;
	func_56("bottle_empty", (int)1, (int)2, (int)2);
	return 0;
}


func_76(var_5_bool)
{
	var_6_int = 0; var_7_int = 0;
	GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
	return 2;
}


func_71(var_11_bool, var_12_int, var_13_int)
{
	var_14_int = 0; var_15_int = 0;
	irand(var_15_int, var_13_int);
	var_11_bool = var_15_int < var_12_int;
	return 2;
}


