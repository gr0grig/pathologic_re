// @IMPORTS: SetVisibility/1,rand/2,GameSleep/1,RemoveAllItems/0,IsOverrideActive/1,Barter/1,AddItem/3,irand/2,AddItem/4,GetVariable/2
// @STRINGS: W:bottle_empty|W:watch|W:razor|W:needle|W:gold_ring|A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x3c vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0;
	var_5_bool = 0;
	func_111(var_5_bool);
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
	var_39_int = var_1_float + (int)1;
	GameSleep(var_39_int);
	
Label_14:
	func_26();
	rand(var_1_float, (int)2);
	var_42_int = var_1_float + (int)12;
	GameSleep(var_42_int);
	goto Label_14;
}
EMIT "Return(); Pop(2)";


func_106(var_11_bool, var_12_int, var_13_int)
{
	var_14_int = 0; var_15_int = 0;
	irand(var_15_int, var_13_int);
	var_11_bool = var_15_int < var_12_int;
	return 2;
}


func_111(var_5_bool)
{
	var_6_int = 0; var_7_int = 0;
	GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
	return 2;
}


func_80(var_19_string, var_20_int, var_21_int)
{
	var_22_bool = 0; var_23_bool = 0;
	var_24_bool = 0; var_25_int = 0; var_26_int = 0;
	var_20_int = var_25_int;
	var_21_int = var_26_int;
	func_106(var_24_bool, var_25_int, var_26_int);
	if(var_24_bool != 0) {
		AddItem(var_23_bool, var_19_string, (int)0);
	}
	return 2;
}


func_26()
{
	RemoveAllItems();
	var_3_string = ""; var_4_int = 0; var_5_int = 0; var_6_int = 0;
	func_91("bottle_empty", (int)1, (int)2, (int)1);
	var_19_string = ""; var_20_int = 0; var_21_int = 0;
	func_80("watch", (int)1, (int)20);
	var_28_string = ""; var_29_int = 0; var_30_int = 0;
	func_80("razor", (int)1, (int)12);
	var_31_string = ""; var_32_int = 0; var_33_int = 0;
	func_80("needle", (int)1, (int)12);
	var_34_string = ""; var_35_int = 0; var_36_int = 0;
	func_80("gold_ring", (int)1, (int)60);
	return 0;
}


func_91(var_3_string, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_bool = 0; var_9_int = 0; var_10_bool = 0;
	var_11_bool = 0; var_12_int = 0; var_13_int = 0;
	var_4_int = var_12_int;
	var_5_int = var_13_int;
	func_106(var_11_bool, var_12_int, var_13_int);
	if(var_11_bool != 0) {
		irand(var_9_int, var_6_int);
		var_18_int = var_9_int + (int)1;
		AddItem(var_10_bool, var_3_string, (int)0, var_18_int);
	}
	return 4;
}


