// @IMPORTS: SetVisibility/1,GetScene/1,Hold/0,IsOverrideActive/1,Barter/1,AddItem/3,irand/2,AddItem/4,GetVariable/2
// @STRINGS: W:nailed|A:GetProperty|W:Knife|W:tvirin|W:lemon|W:funduk|W:peanut|W:walnut|W:rusk|W:dried_fish|W:egg|W:vegetables|W:milk|W:dried_meat|W:smoked_meat|W:fresh_fish|W:fresh_meat|W:bread|A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0xa3 vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0;
	var_5_bool = 0;
	func_214(var_5_bool);
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
	var_0_object = Obj(); var_1_bool = 0; var_2_object = Obj(); var_3_bool = 0;
	SetVisibility((bool)1);
	GetScene(var_2_object);
	@@var_2_object:GetProperty("nailed", var_3_bool);
	var_6_bool = var_3_bool;
	if(var_6_bool != 0) {
		var_7_string = ""; var_8_int = 0; var_9_int = 0;
		func_183("Knife", (int)1, (int)10);
		var_18_string = ""; var_19_int = 0; var_20_int = 0; var_21_int = 0;
		func_194("tvirin", (int)1, (int)10, (int)1);
		var_32_string = ""; var_33_int = 0; var_34_int = 0; var_35_int = 0;
		func_194("lemon", (int)1, (int)20, (int)2);
		var_36_string = ""; var_37_int = 0; var_38_int = 0; var_39_int = 0;
		func_194("funduk", (int)1, (int)40, (int)1);
		var_40_string = ""; var_41_int = 0; var_42_int = 0; var_43_int = 0;
		func_194("peanut", (int)1, (int)40, (int)1);
		var_44_string = ""; var_45_int = 0; var_46_int = 0; var_47_int = 0;
		func_194("walnut", (int)1, (int)40, (int)1);
	} else {
		var_48_string = ""; var_49_int = 0; var_50_int = 0;
		func_183("Knife", (int)1, (int)20);
		var_51_string = ""; var_52_int = 0; var_53_int = 0;
		func_183("tvirin", (int)1, (int)20);
		var_54_string = ""; var_55_int = 0; var_56_int = 0; var_57_int = 0;
		func_194("lemon", (int)1, (int)10, (int)2);
		var_58_string = ""; var_59_int = 0; var_60_int = 0; var_61_int = 0;
		func_194("funduk", (int)1, (int)50, (int)2);
		var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0;
		func_194("peanut", (int)1, (int)50, (int)2);
		var_66_string = ""; var_67_int = 0; var_68_int = 0; var_69_int = 0;
		func_194("walnut", (int)1, (int)50, (int)2);
		var_70_string = ""; var_71_int = 0; var_72_int = 0; var_73_int = 0;
		func_194("rusk", (int)1, (int)10, (int)2);
		var_74_string = ""; var_75_int = 0; var_76_int = 0;
		func_183("dried_fish", (int)1, (int)50);
		var_77_string = ""; var_78_int = 0; var_79_int = 0;
		func_183("egg", (int)1, (int)40);
		var_80_string = ""; var_81_int = 0; var_82_int = 0;
		func_183("vegetables", (int)1, (int)50);
		var_83_string = ""; var_84_int = 0; var_85_int = 0;
		func_183("milk", (int)1, (int)30);
		var_86_string = ""; var_87_int = 0; var_88_int = 0;
		func_183("dried_meat", (int)1, (int)50);
		var_89_string = ""; var_90_int = 0; var_91_int = 0;
		func_183("smoked_meat", (int)1, (int)50);
		var_92_string = ""; var_93_int = 0; var_94_int = 0;
		func_183("fresh_fish", (int)1, (int)50);
		var_95_string = ""; var_96_int = 0; var_97_int = 0;
		func_183("fresh_meat", (int)1, (int)50);
		var_98_string = ""; var_99_int = 0; var_100_int = 0;
		func_183("bread", (int)1, (int)10);
	}
	func_159();
	return 4;
	
}
EMIT "Stack[-2] = 0";


func_194(var_18_string, var_19_int, var_20_int, var_21_int)
{
	var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_bool = 0;
	var_26_bool = 0; var_27_int = 0; var_28_int = 0;
	var_19_int = var_27_int;
	var_20_int = var_28_int;
	func_209(var_26_bool, var_27_int, var_28_int);
	if(var_26_bool != 0) {
		irand(var_24_int, var_21_int);
		var_31_int = var_21_int + (int)1;
		AddItem(var_25_bool, var_18_string, (int)0, var_31_int);
	}
	return 4;
}


func_209(var_12_bool, var_13_int, var_14_int)
{
	var_15_int = 0; var_16_int = 0;
	irand(var_16_int, var_14_int);
	var_12_bool = var_16_int < var_13_int;
	return 2;
}


func_214(var_5_bool)
{
	var_6_int = 0; var_7_int = 0;
	GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
	return 2;
}


func_183(var_7_string, var_8_int, var_9_int)
{
	var_10_bool = 0; var_11_bool = 0;
	var_12_bool = 0; var_13_int = 0; var_14_int = 0;
	var_8_int = var_13_int;
	var_9_int = var_14_int;
	func_209(var_12_bool, var_13_int, var_14_int);
	if(var_12_bool != 0) {
		AddItem(var_11_bool, var_7_string, (int)0);
	}
	return 2;
}


func_159()
{
	
Label_159:
	Hold();
	goto Label_159;
}
EMIT "Return(); Pop(0)";


