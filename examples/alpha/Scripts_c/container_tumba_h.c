// @IMPORTS: SetVisibility/1,Hold/0,IsOverrideActive/1,Barter/1,AddItem/3,irand/2,AddItem/4,GetVariable/2,GetGameTime/1
// @STRINGS: W:revolver_ammo|W:rifle_ammo|W:alpha_pills|W:beta_pills|W:gamma_pills|W:delta_pills|W:tvirin|W:lemon|W:powder|W:neomicin|W:monomicin|W:feromicin|W:meradorm|W:novocaine|W:morfin|W:etorfin|W:syringe|W:kerosene|W:lockpick|W:glove_disp|W:glove|W:mask|A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x9e vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0;
	var_5_bool = 0;
	func_209(var_5_bool);
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
	var_3_string = ""; var_4_int = 0; var_5_int = 0; var_6_int = 0;
	func_189("revolver_ammo", (int)1, (int)15, (int)2);
	var_19_string = ""; var_20_int = 0; var_21_int = 0; var_22_int = 0;
	func_189("rifle_ammo", (int)1, (int)20, (int)2);
	var_23_string = ""; var_24_int = 0; var_25_int = 0; var_26_int = 0;
	func_189("alpha_pills", (int)1, (int)3, (int)4);
	var_27_string = ""; var_28_int = 0; var_29_int = 0; var_30_int = 0;
	func_189("beta_pills", (int)1, (int)6, (int)3);
	var_31_string = ""; var_32_int = 0; var_33_int = 0; var_34_int = 0;
	func_189("gamma_pills", (int)1, (int)8, (int)2);
	var_35_string = ""; var_36_int = 0; var_37_int = 0;
	func_178("delta_pills", (int)1, (int)12);
	var_44_string = ""; var_45_int = 0; var_46_int = 0;
	func_178("tvirin", (int)1, (int)12);
	var_47_string = ""; var_48_int = 0; var_49_int = 0; var_50_int = 0;
	func_189("lemon", (int)1, (int)10, (int)2);
	var_51_string = ""; var_52_int = 0; var_53_int = 0;
	func_178("powder", (int)1, (int)500);
	var_54_string = ""; var_55_int = 0; var_56_int = 0;
	func_178("neomicin", (int)1, (int)10);
	var_57_string = ""; var_58_int = 0; var_59_int = 0;
	func_178("monomicin", (int)1, (int)20);
	var_60_string = ""; var_61_int = 0; var_62_int = 0;
	func_178("feromicin", (int)1, (int)30);
	var_63_string = ""; var_64_int = 0; var_65_int = 0;
	func_178("meradorm", (int)1, (int)20);
	var_66_string = ""; var_67_int = 0; var_68_int = 0;
	func_178("novocaine", (int)1, (int)10);
	var_69_string = ""; var_70_int = 0; var_71_int = 0;
	func_178("morfin", (int)1, (int)20);
	var_72_string = ""; var_73_int = 0; var_74_int = 0;
	func_178("etorfin", (int)1, (int)30);
	var_75_string = ""; var_76_int = 0; var_77_int = 0;
	func_178("syringe", (int)1, (int)20);
	var_78_string = ""; var_79_int = 0; var_80_int = 0; var_81_int = 0;
	func_189("kerosene", (int)2, (int)5, (int)10);
	var_82_string = ""; var_83_int = 0; var_84_int = 0;
	func_178("lockpick", (int)1, (int)20);
	func_215((int)0);
	var_85_int = var_1_int;
	var_92_bool = var_1_int >= (int)3;
	if(var_92_bool != 0) {
		var_93_string = ""; var_94_int = 0; var_95_int = 0;
		func_178("glove_disp", (int)1, (int)20);
		var_96_string = ""; var_97_int = 0; var_98_int = 0;
		func_178("glove", (int)1, (int)20);
		var_99_string = ""; var_100_int = 0; var_101_int = 0;
		func_178("mask", (int)1, (int)40);
	}
	func_154();
	return 2;
}


func_204(var_11_bool, var_12_int, var_13_int)
{
	var_14_int = 0; var_15_int = 0;
	irand(var_15_int, var_13_int);
	var_11_bool = var_15_int < var_12_int;
	return 2;
}


func_209(var_5_bool)
{
	var_6_int = 0; var_7_int = 0;
	GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
	return 2;
}


func_178(var_35_string, var_36_int, var_37_int)
{
	var_38_bool = 0; var_39_bool = 0;
	var_40_bool = 0; var_41_int = 0; var_42_int = 0;
	var_36_int = var_41_int;
	var_37_int = var_42_int;
	func_204(var_40_bool, var_41_int, var_42_int);
	if(var_40_bool != 0) {
		AddItem(var_39_bool, var_35_string, (int)0);
	}
	return 2;
}


func_215(var_85_int)
{
	var_86_float = 0; var_87_float = 0;
	GetGameTime(var_87_float);
	var_89_int = 0;
	var_89_int = var_87_float / (int)24;
	var_85_int = (int)1 + var_89_int;
	return 2;
}


func_154()
{
	
Label_154:
	Hold();
	goto Label_154;
}
EMIT "Return(); Pop(0)";


func_189(var_3_string, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_bool = 0; var_9_int = 0; var_10_bool = 0;
	var_11_bool = 0; var_12_int = 0; var_13_int = 0;
	var_4_int = var_12_int;
	var_5_int = var_13_int;
	func_204(var_11_bool, var_12_int, var_13_int);
	if(var_11_bool != 0) {
		irand(var_9_int, var_6_int);
		var_18_int = var_6_int + (int)1;
		AddItem(var_10_bool, var_3_string, (int)0, var_18_int);
	}
	return 4;
}


