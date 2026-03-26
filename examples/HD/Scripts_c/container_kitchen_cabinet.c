// @IMPORTS: SetVisibility/1,DisableUpdate/0,GetScene/1,Hold/0,IsOverrideActive/1,GetItemCount/1,BroadcastSteal/2,Barter/1,AddItem/3,irand/2,AddItem/4,GetVariable/2
// @STRINGS: W:nailed|A:GetProperty|W:Knife|W:tvirin|W:lemon|W:funduk|W:peanut|W:walnut|W:Money|W:rusk|W:dried_fish|W:egg|W:vegetables|W:milk|W:dried_meat|W:smoked_meat|W:fresh_fish|W:fresh_meat|W:bread|A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0xaf vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_bool = 0; var_7_int = 0; var_8_object = Obj();
	var_9_bool = 0;
	var_9_bool = 1;
	var_10_bool = var_0_object == 0; //@nz
	if(var_10_bool != 1) {
		var_11_bool = 0;
		func_241(var_11_bool);
		var_15_bool = var_11_bool == 0; //@nz
		if(var_15_bool != 1) {
			var_9_bool = 0;
		}
	}
	if(var_9_bool != 0) {
		return 8;
	}
	@@var_0_object:IsOnGround(var_5_bool);
	var_16_bool = var_5_bool;
	if(var_16_bool != 0) {
		EventDisable(0);
		IsOverrideActive(var_6_bool);
		var_17_bool = var_6_bool == 0; //@nz
		if(var_17_bool != 0) {
			GetItemCount(var_7_int);
			var_18_int = var_7_int;
			if(var_18_int != 0) {
				GetScene(var_8_object);
				BroadcastSteal(var_0_object, var_8_object);
				var_8_object = 0;
			}
			Barter(var_0_object);
		}
		EventEnable(0);
	}
	return 8;
}


main()
{
	var_0_object = Obj(); var_1_bool = 0; var_2_object = Obj(); var_3_bool = 0;
	SetVisibility((bool)1);
	DisableUpdate();
	GetScene(var_2_object);
	@@var_2_object:GetProperty("nailed", var_3_bool);
	var_6_bool = var_3_bool;
	if(var_6_bool != 0) {
		var_7_string = ""; var_8_int = 0; var_9_int = 0;
		func_210("Knife", (int)1, (int)30);
		var_18_string = ""; var_19_int = 0; var_20_int = 0;
		func_210("tvirin", (int)1, (int)10);
		var_21_string = ""; var_22_int = 0; var_23_int = 0; var_24_int = 0;
		func_221("lemon", (int)1, (int)20, (int)2);
		var_35_string = ""; var_36_int = 0; var_37_int = 0;
		func_210("funduk", (int)1, (int)40);
		var_38_string = ""; var_39_int = 0; var_40_int = 0;
		func_210("peanut", (int)1, (int)40);
		var_41_string = ""; var_42_int = 0; var_43_int = 0;
		func_210("walnut", (int)1, (int)40);
		var_44_string = ""; var_45_int = 0; var_46_int = 0; var_47_int = 0;
		func_221("Money", (int)1, (int)2, (int)5);
	} else {
		var_48_string = ""; var_49_int = 0; var_50_int = 0;
		func_210("Knife", (int)1, (int)30);
		var_51_string = ""; var_52_int = 0; var_53_int = 0;
		func_210("tvirin", (int)1, (int)20);
		var_54_string = ""; var_55_int = 0; var_56_int = 0; var_57_int = 0;
		func_221("lemon", (int)1, (int)10, (int)2);
		var_58_string = ""; var_59_int = 0; var_60_int = 0; var_61_int = 0;
		func_221("funduk", (int)1, (int)50, (int)2);
		var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0;
		func_221("peanut", (int)1, (int)50, (int)2);
		var_66_string = ""; var_67_int = 0; var_68_int = 0; var_69_int = 0;
		func_221("walnut", (int)1, (int)50, (int)2);
		var_70_string = ""; var_71_int = 0; var_72_int = 0; var_73_int = 0;
		func_221("rusk", (int)1, (int)10, (int)2);
		var_74_string = ""; var_75_int = 0; var_76_int = 0;
		func_210("dried_fish", (int)1, (int)50);
		var_77_string = ""; var_78_int = 0; var_79_int = 0;
		func_210("egg", (int)1, (int)40);
		var_80_string = ""; var_81_int = 0; var_82_int = 0;
		func_210("vegetables", (int)1, (int)50);
		var_83_string = ""; var_84_int = 0; var_85_int = 0;
		func_210("milk", (int)1, (int)30);
		var_86_string = ""; var_87_int = 0; var_88_int = 0;
		func_210("dried_meat", (int)1, (int)50);
		var_89_string = ""; var_90_int = 0; var_91_int = 0;
		func_210("smoked_meat", (int)1, (int)50);
		var_92_string = ""; var_93_int = 0; var_94_int = 0;
		func_210("fresh_fish", (int)1, (int)50);
		var_95_string = ""; var_96_int = 0; var_97_int = 0;
		func_210("fresh_meat", (int)1, (int)50);
		var_98_string = ""; var_99_int = 0; var_100_int = 0;
		func_210("bread", (int)1, (int)10);
		var_101_string = ""; var_102_int = 0; var_103_int = 0; var_104_int = 0;
		func_221("Money", (int)1, (int)2, (int)3);
	}
	func_171();
	return 4;
	
}
EMIT "Stack[-2] = 0";


func_171()
{
	
Label_171:
	Hold();
	goto Label_171;
}
EMIT "Return(); Pop(0)";


func_236(var_12_bool, var_13_int, var_14_int)
{
	var_15_int = 0; var_16_int = 0;
	irand(var_16_int, var_14_int);
	var_12_bool = var_16_int < var_13_int;
	return 2;
}


func_241(var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	GetVariable("nouse_container", var_13_int);
	var_11_bool = !var_13_int;
	return 2;
}


func_210(var_7_string, var_8_int, var_9_int)
{
	var_10_bool = 0; var_11_bool = 0;
	var_12_bool = 0; var_13_int = 0; var_14_int = 0;
	var_8_int = var_13_int;
	var_9_int = var_14_int;
	func_236(var_12_bool, var_13_int, var_14_int);
	if(var_12_bool != 0) {
		AddItem(var_11_bool, var_7_string, (int)0);
	}
	return 2;
}


func_221(var_21_string, var_22_int, var_23_int, var_24_int)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0;
	var_29_bool = 0; var_30_int = 0; var_31_int = 0;
	var_22_int = var_30_int;
	var_23_int = var_31_int;
	func_236(var_29_bool, var_30_int, var_31_int);
	if(var_29_bool != 0) {
		irand(var_27_int, var_24_int);
		var_34_int = var_27_int + (int)1;
		AddItem(var_28_bool, var_21_string, (int)0, var_34_int);
	}
	return 4;
}


