// @IMPORTS: SetVisibility/1,DisableUpdate/0,Hold/0,IsOverrideActive/1,Barter/1,AddItem/3,irand/2,AddItem/4,GetVariable/2,GetGameTime/1
// @STRINGS: W:meradorm|W:alpha_pills|W:tvirin|W:lemon|W:novocaine|W:morfin|W:etorfin|W:revolver_ammo|W:rifle_ammo|W:powder|W:syringe|W:kerosene|W:lockpick|W:hook|W:needle|W:glove|A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x81 vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0;
	var_5_bool = 0;
	var_5_bool = 1;
	var_6_bool = var_0_object == 0; //@nz
	if(var_6_bool != 1) {
		var_7_bool = 0;
		func_186(var_7_bool);
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
	func_155("meradorm", (int)1, (int)20);
	var_14_string = ""; var_15_int = 0; var_16_int = 0; var_17_int = 0;
	func_166("alpha_pills", (int)1, (int)25, (int)4);
	var_28_string = ""; var_29_int = 0; var_30_int = 0;
	func_155("tvirin", (int)1, (int)12);
	var_31_string = ""; var_32_int = 0; var_33_int = 0; var_34_int = 0;
	func_166("lemon", (int)1, (int)10, (int)2);
	func_192((int)0);
	var_35_int = var_1_int;
	var_42_bool = var_1_int >= (int)5;
	if(var_42_bool != 0) {
		var_43_string = ""; var_44_int = 0; var_45_int = 0;
		func_155("novocaine", (int)1, (int)10);
	}
	var_47_bool = var_1_int >= (int)7;
	if(var_47_bool != 0) {
		var_48_string = ""; var_49_int = 0; var_50_int = 0;
		func_155("morfin", (int)1, (int)20);
	}
	var_52_bool = var_1_int >= (int)10;
	if(var_52_bool != 0) {
		var_53_string = ""; var_54_int = 0; var_55_int = 0;
		func_155("etorfin", (int)1, (int)30);
	}
	var_56_string = ""; var_57_int = 0; var_58_int = 0; var_59_int = 0;
	func_166("revolver_ammo", (int)1, (int)20, (int)2);
	var_60_string = ""; var_61_int = 0; var_62_int = 0;
	func_155("rifle_ammo", (int)1, (int)10);
	var_63_string = ""; var_64_int = 0; var_65_int = 0;
	func_155("powder", (int)1, (int)500);
	var_66_string = ""; var_67_int = 0; var_68_int = 0;
	func_155("syringe", (int)1, (int)20);
	var_69_string = ""; var_70_int = 0; var_71_int = 0; var_72_int = 0;
	func_166("kerosene", (int)1, (int)4, (int)10);
	var_73_string = ""; var_74_int = 0; var_75_int = 0;
	func_155("lockpick", (int)1, (int)20);
	var_76_string = ""; var_77_int = 0; var_78_int = 0; var_79_int = 0;
	func_166("hook", (int)1, (int)15, (int)5);
	var_80_string = ""; var_81_int = 0; var_82_int = 0; var_83_int = 0;
	func_166("needle", (int)1, (int)15, (int)3);
	var_84_string = ""; var_85_int = 0; var_86_int = 0;
	func_155("glove", (int)1, (int)70);
	func_125();
	return 2;
}


func_192(var_35_int)
{
	var_36_float = 0; var_37_float = 0;
	GetGameTime(var_37_float);
	var_39_int = 0;
	var_39_int = var_37_float / (int)24;
	var_35_int = (int)1 + var_39_int;
	return 2;
}


func_166(var_14_string, var_15_int, var_16_int, var_17_int)
{
	var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_bool = 0;
	var_22_bool = 0; var_23_int = 0; var_24_int = 0;
	var_15_int = var_23_int;
	var_16_int = var_24_int;
	func_181(var_22_bool, var_23_int, var_24_int);
	if(var_22_bool != 0) {
		irand(var_20_int, var_17_int);
		var_27_int = var_20_int + (int)1;
		AddItem(var_21_bool, var_14_string, (int)0, var_27_int);
	}
	return 4;
}


func_181(var_8_bool, var_9_int, var_10_int)
{
	var_11_int = 0; var_12_int = 0;
	irand(var_12_int, var_10_int);
	var_8_bool = var_12_int < var_9_int;
	return 2;
}


func_186(var_7_bool)
{
	var_8_int = 0; var_9_int = 0;
	GetVariable("nouse_container", var_9_int);
	var_7_bool = !var_9_int;
	return 2;
}


func_155(var_3_string, var_4_int, var_5_int)
{
	var_6_bool = 0; var_7_bool = 0;
	var_8_bool = 0; var_9_int = 0; var_10_int = 0;
	var_4_int = var_9_int;
	var_5_int = var_10_int;
	func_181(var_8_bool, var_9_int, var_10_int);
	if(var_8_bool != 0) {
		AddItem(var_7_bool, var_3_string, (int)0);
	}
	return 2;
}


func_125()
{
	
Label_125:
	Hold();
	goto Label_125;
}
EMIT "Return(); Pop(0)";


