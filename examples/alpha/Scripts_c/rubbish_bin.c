// @IMPORTS: SetVisibility/1,rand/2,GameSleep/1,RemoveAllItems/0,irand/2,AddItem/3,AddItem/4,IsOverrideActive/1,Barter/1,GetVariable/2
// @STRINGS: W:watch|W:bottle_empty|W:razor|W:gold_ring|A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x50 vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0;
	var_5_bool = 0;
	func_100(var_5_bool);
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
	var_36_int = var_1_float + (int)1;
	GameSleep(var_36_int);
	
Label_14:
	func_26();
	rand(var_1_float, (int)2);
	var_39_int = var_1_float + (int)12;
	GameSleep(var_39_int);
	goto Label_14;
}
EMIT "Return(); Pop(2)";


func_26()
{
	var_3_int = 0; var_4_bool = 0; var_5_int = 0; var_6_bool = 0;
	RemoveAllItems();
	irand(var_5_int, (int)20);
	var_9_bool = var_5_int > (int)18;
	if(var_9_bool != 0) {
		AddItem(var_6_bool, "watch", (int)0);
	} else {
		var_25_bool = var_5_int > (int)10;
		if(var_25_bool != 0) {
			AddItem(var_6_bool, "bottle_empty", (int)0, (int)2);
			goto Label_57;
		}
		var_30_bool = var_5_int > (int)3;
		if(var_30_bool == 0) goto Label_57;
		AddItem(var_6_bool, "bottle_empty", (int)0, (int)1);
	}
Label_57:
	irand(var_5_int, (int)20);
	var_14_bool = var_5_int > (int)16;
	if(var_14_bool != 0) {
		AddItem(var_6_bool, "razor", (int)0, (int)1);
	}
	irand(var_5_int, (int)60);
	var_20_bool = var_5_int == (int)0;
	if(var_20_bool != 0) {
		AddItem(var_6_bool, "gold_ring", (int)0, (int)1);
	}
	return 4;
	
}


func_100(var_5_bool)
{
	var_6_int = 0; var_7_int = 0;
	GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
	return 2;
}


