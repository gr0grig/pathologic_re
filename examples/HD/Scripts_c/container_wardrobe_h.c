// @IMPORTS: SetVisibility/1,DisableUpdate/0,Hold/0,IsOverrideActive/1,Barter/1,AddItem/3,irand/2,AddItem/4,GetVariable/2,GetGameTime/1
// @STRINGS: W:Rifle|W:rifle_ammo|W:revolver_ammo|W:halfboot_repel|W:drapery|W:glove_disp|W:cloak_repel|W:glove|W:raincoat_repel|W:needle|A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x63 vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0;
	var_5_bool = 0;
	var_5_bool = 1;
	var_6_bool = var_0_object == 0; //@nz
	if(var_6_bool != 1) {
		var_7_bool = 0;
		func_156(var_7_bool);
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
	var_0_int = 0; var_1_int = 0;
	SetVisibility((bool)1);
	DisableUpdate();
	var_3_string = ""; var_4_int = 0; var_5_int = 0;
	func_125("Rifle", (int)1, (int)250);
	var_14_string = ""; var_15_int = 0; var_16_int = 0; var_17_int = 0;
	func_136("rifle_ammo", (int)1, (int)20, (int)2);
	var_28_string = ""; var_29_int = 0; var_30_int = 0; var_31_int = 0;
	func_136("revolver_ammo", (int)1, (int)20, (int)2);
	func_162((int)0);
	var_32_int = var_1_int;
	var_39_bool = var_1_int >= (int)3;
	if(var_39_bool != 0) {
		var_40_string = ""; var_41_int = 0; var_42_int = 0;
		func_125("halfboot_repel", (int)1, (int)30);
		var_43_string = ""; var_44_int = 0; var_45_int = 0;
		func_125("drapery", (int)1, (int)40);
		var_46_string = ""; var_47_int = 0; var_48_int = 0;
		func_125("glove_disp", (int)1, (int)40);
	}
	var_50_bool = var_1_int >= (int)5;
	if(var_50_bool != 0) {
		var_51_string = ""; var_52_int = 0; var_53_int = 0;
		func_125("cloak_repel", (int)1, (int)70);
		var_54_string = ""; var_55_int = 0; var_56_int = 0;
		func_125("glove", (int)1, (int)70);
	}
	var_58_bool = var_1_int >= (int)6;
	if(var_58_bool != 0) {
		var_59_string = ""; var_60_int = 0; var_61_int = 0;
		func_125("boot_repel", (int)1, (int)40);
	}
	var_63_bool = var_1_int >= (int)8;
	if(var_63_bool != 0) {
		var_64_string = ""; var_65_int = 0; var_66_int = 0;
		func_125("raincoat_repel", (int)1, (int)80);
	}
	var_67_string = ""; var_68_int = 0; var_69_int = 0; var_70_int = 0;
	func_136("needle", (int)1, (int)5, (int)1);
	func_95();
	return 2;
}


func_162(var_32_int)
{
	var_33_float = 0; var_34_float = 0;
	GetGameTime(var_34_float);
	var_36_int = 0;
	var_36_int = var_34_float / (int)24;
	var_32_int = (int)1 + var_36_int;
	return 2;
}


func_136(var_14_string, var_15_int, var_16_int, var_17_int)
{
	var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_bool = 0;
	var_22_bool = 0; var_23_int = 0; var_24_int = 0;
	var_15_int = var_23_int;
	var_16_int = var_24_int;
	func_151(var_22_bool, var_23_int, var_24_int);
	if(var_22_bool != 0) {
		irand(var_20_int, var_17_int);
		var_27_int = var_20_int + (int)1;
		AddItem(var_21_bool, var_14_string, (int)0, var_27_int);
	}
	return 4;
}


func_151(var_8_bool, var_9_int, var_10_int)
{
	var_11_int = 0; var_12_int = 0;
	irand(var_12_int, var_10_int);
	var_8_bool = var_12_int < var_9_int;
	return 2;
}


func_156(var_7_bool)
{
	var_8_int = 0; var_9_int = 0;
	GetVariable("nouse_container", var_9_int);
	var_7_bool = !var_9_int;
	return 2;
}


func_125(var_3_string, var_4_int, var_5_int)
{
	var_6_bool = 0; var_7_bool = 0;
	var_8_bool = 0; var_9_int = 0; var_10_int = 0;
	var_4_int = var_9_int;
	var_5_int = var_10_int;
	func_151(var_8_bool, var_9_int, var_10_int);
	if(var_8_bool != 0) {
		AddItem(var_7_bool, var_3_string, (int)0);
	}
	return 2;
}


func_95()
{
	
Label_95:
	Hold();
	goto Label_95;
}
EMIT "Return(); Pop(0)";


