// @IMPORTS: SetVisibility/1,Hold/0,IsOverrideActive/1,Barter/1,AddItem/3,irand/2,AddItem/4,GetVariable/2,GetGameTime/1
// @STRINGS: W:Rifle|W:Revolver|W:rifle_ammo|W:revolver_ammo|W:halfboot_repel|W:drapery|W:cloak_repel|W:raincoat_repel|W:glove_disp|W:glove|W:boot_army|W:glove_army|W:balahon|A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x6c vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0;
	var_5_bool = 0;
	func_159(var_5_bool);
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
	var_0_int = 0; var_1_int = 0;
	SetVisibility((bool)1);
	var_3_string = ""; var_4_int = 0; var_5_int = 0;
	func_128("Rifle", (int)1, (int)200);
	var_14_string = ""; var_15_int = 0; var_16_int = 0;
	func_128("Revolver", (int)1, (int)150);
	var_17_string = ""; var_18_int = 0; var_19_int = 0; var_20_int = 0;
	func_139("rifle_ammo", (int)1, (int)20, (int)3);
	var_31_string = ""; var_32_int = 0; var_33_int = 0; var_34_int = 0;
	func_139("revolver_ammo", (int)1, (int)20, (int)6);
	func_165((int)0);
	var_35_int = var_1_int;
	var_42_bool = var_1_int >= (int)3;
	if(var_42_bool != 0) {
		var_43_string = ""; var_44_int = 0; var_45_int = 0;
		func_128("halfboot_repel", (int)1, (int)15);
		var_46_string = ""; var_47_int = 0; var_48_int = 0;
		func_128("boot_repel", (int)1, (int)20);
		var_49_string = ""; var_50_int = 0; var_51_int = 0;
		func_128("drapery", (int)1, (int)5);
		var_52_string = ""; var_53_int = 0; var_54_int = 0;
		func_128("cloak_repel", (int)1, (int)15);
		var_55_string = ""; var_56_int = 0; var_57_int = 0;
		func_128("raincoat_repel", (int)1, (int)35);
		var_58_string = ""; var_59_int = 0; var_60_int = 0;
		func_128("glove_disp", (int)1, (int)20);
		var_61_string = ""; var_62_int = 0; var_63_int = 0;
		func_128("glove", (int)1, (int)20);
	}
	var_65_bool = var_1_int >= (int)9;
	if(var_65_bool != 0) {
		var_66_string = ""; var_67_int = 0; var_68_int = 0;
		func_128("boot_army", (int)1, (int)40);
		var_69_string = ""; var_70_int = 0; var_71_int = 0;
		func_128("glove_army", (int)1, (int)50);
		var_72_string = ""; var_73_int = 0; var_74_int = 0;
		func_128("balahon", (int)1, (int)80);
	}
	func_104();
	return 2;
}


func_128(var_3_string, var_4_int, var_5_int)
{
	var_6_bool = 0; var_7_bool = 0;
	var_8_bool = 0; var_9_int = 0; var_10_int = 0;
	var_4_int = var_9_int;
	var_5_int = var_10_int;
	func_154(var_8_bool, var_9_int, var_10_int);
	if(var_8_bool != 0) {
		AddItem(var_7_bool, var_3_string, (int)0);
	}
	return 2;
}


func_165(var_35_int)
{
	var_36_float = 0; var_37_float = 0;
	GetGameTime(var_37_float);
	var_39_int = 0;
	var_39_int = var_37_float / (int)24;
	var_35_int = (int)1 + var_39_int;
	return 2;
}


func_104()
{
	
Label_104:
	Hold();
	goto Label_104;
}
EMIT "Return(); Pop(0)";


func_139(var_17_string, var_18_int, var_19_int, var_20_int)
{
	var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_25_bool = 0; var_26_int = 0; var_27_int = 0;
	var_18_int = var_26_int;
	var_19_int = var_27_int;
	func_154(var_25_bool, var_26_int, var_27_int);
	if(var_25_bool != 0) {
		irand(var_23_int, var_20_int);
		var_30_int = var_20_int + (int)1;
		AddItem(var_24_bool, var_17_string, (int)0, var_30_int);
	}
	return 4;
}


func_154(var_8_bool, var_9_int, var_10_int)
{
	var_11_int = 0; var_12_int = 0;
	irand(var_12_int, var_10_int);
	var_8_bool = var_12_int < var_9_int;
	return 2;
}


func_159(var_5_bool)
{
	var_6_int = 0; var_7_int = 0;
	GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
	return 2;
}


