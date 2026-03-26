// @IMPORTS: SetVisibility/1,DisableUpdate/0,Hold/0,IsOverrideActive/1,Barter/1,AddItem/3,irand/2,AddItem/4,GetVariable/2
// @STRINGS: W:Knife|W:tvirin|W:lemon|W:funduk|W:peanut|W:walnut|W:rifle_ammo|W:revolver_ammo|W:samopal_ammo|A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x45 vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0;
	var_5_bool = 0;
	var_5_bool = 1;
	var_6_bool = var_0_object == 0; //@nz
	if(var_6_bool != 1) {
		var_7_bool = 0;
		func_126(var_7_bool);
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
	DisableUpdate();
	var_1_string = ""; var_2_int = 0; var_3_int = 0;
	func_95("Knife", (int)1, (int)15);
	var_12_string = ""; var_13_int = 0; var_14_int = 0;
	func_95("tvirin", (int)1, (int)7);
	var_15_string = ""; var_16_int = 0; var_17_int = 0; var_18_int = 0;
	func_106("lemon", (int)1, (int)5, (int)2);
	var_29_string = ""; var_30_int = 0; var_31_int = 0;
	func_95("funduk", (int)1, (int)30);
	var_32_string = ""; var_33_int = 0; var_34_int = 0;
	func_95("peanut", (int)1, (int)30);
	var_35_string = ""; var_36_int = 0; var_37_int = 0;
	func_95("walnut", (int)1, (int)30);
	var_38_string = ""; var_39_int = 0; var_40_int = 0;
	func_95("rifle_ammo", (int)1, (int)10);
	var_41_string = ""; var_42_int = 0; var_43_int = 0; var_44_int = 0;
	func_106("revolver_ammo", (int)1, (int)10, (int)2);
	var_45_string = ""; var_46_int = 0; var_47_int = 0;
	func_95("samopal_ammo", (int)1, (int)13);
	func_65();
	return 0;
}


func_65()
{
	
Label_65:
	Hold();
	goto Label_65;
}
EMIT "Return(); Pop(0)";


func_106(var_15_string, var_16_int, var_17_int, var_18_int)
{
	var_19_int = 0; var_20_bool = 0; var_21_int = 0; var_22_bool = 0;
	var_23_bool = 0; var_24_int = 0; var_25_int = 0;
	var_16_int = var_24_int;
	var_17_int = var_25_int;
	func_121(var_23_bool, var_24_int, var_25_int);
	if(var_23_bool != 0) {
		irand(var_21_int, var_18_int);
		var_28_int = var_21_int + (int)1;
		AddItem(var_22_bool, var_15_string, (int)0, var_28_int);
	}
	return 4;
}


func_121(var_6_bool, var_7_int, var_8_int)
{
	var_9_int = 0; var_10_int = 0;
	irand(var_10_int, var_8_int);
	var_6_bool = var_10_int < var_7_int;
	return 2;
}


func_126(var_7_bool)
{
	var_8_int = 0; var_9_int = 0;
	GetVariable("nouse_container", var_9_int);
	var_7_bool = !var_9_int;
	return 2;
}


func_95(var_1_string, var_2_int, var_3_int)
{
	var_4_bool = 0; var_5_bool = 0;
	var_6_bool = 0; var_7_int = 0; var_8_int = 0;
	var_2_int = var_7_int;
	var_3_int = var_8_int;
	func_121(var_6_bool, var_7_int, var_8_int);
	if(var_6_bool != 0) {
		AddItem(var_5_bool, var_1_string, (int)0);
	}
	return 2;
}


