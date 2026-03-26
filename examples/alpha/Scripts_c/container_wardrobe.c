// @IMPORTS: SetVisibility/1,GetScene/1,Hold/0,IsOverrideActive/1,Barter/1,AddItem/3,irand/2,AddItem/4,GetVariable/2,GetGameTime/1
// @STRINGS: W:nailed|A:GetProperty|W:Rifle|W:Revolver|W:rifle_ammo|W:revolver_ammo|W:halfboot_repel|W:drapery|W:cloak_repel|W:raincoat_repel|W:glove_disp|W:glove|W:boot_army|W:glove_army|W:balahon|A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0xc7 vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0;
	var_5_bool = 0;
	func_250(var_5_bool);
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
	var_0_object = Obj(); var_1_bool = 0; var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0;
	SetVisibility((bool)1);
	GetScene(var_4_object);
	@@var_4_object:GetProperty("nailed", var_5_bool);
	var_10_bool = var_5_bool;
	if(var_10_bool != 0) {
		var_11_string = ""; var_12_int = 0; var_13_int = 0;
		func_219("Rifle", (int)1, (int)150);
		var_22_string = ""; var_23_int = 0; var_24_int = 0;
		func_219("Revolver", (int)1, (int)100);
		var_25_string = ""; var_26_int = 0; var_27_int = 0; var_28_int = 0;
		func_230("rifle_ammo", (int)1, (int)15, (int)3);
		var_39_string = ""; var_40_int = 0; var_41_int = 0; var_42_int = 0;
		func_230("revolver_ammo", (int)1, (int)15, (int)6);
		func_256((int)0);
		var_43_int = var_6_int;
		var_50_bool = var_6_int >= (int)3;
		if(var_50_bool != 0) {
			var_51_string = ""; var_52_int = 0; var_53_int = 0;
			func_219("halfboot_repel", (int)1, (int)15);
			var_54_string = ""; var_55_int = 0; var_56_int = 0;
			func_219("boot_repel", (int)1, (int)20);
			var_57_string = ""; var_58_int = 0; var_59_int = 0;
			func_219("drapery", (int)1, (int)5);
			var_60_string = ""; var_61_int = 0; var_62_int = 0;
			func_219("cloak_repel", (int)1, (int)15);
			var_63_string = ""; var_64_int = 0; var_65_int = 0;
			func_219("raincoat_repel", (int)1, (int)35);
			var_66_string = ""; var_67_int = 0; var_68_int = 0;
			func_219("glove_disp", (int)1, (int)20);
			var_69_string = ""; var_70_int = 0; var_71_int = 0;
			func_219("glove", (int)1, (int)20);
		}
		var_73_bool = var_6_int >= (int)9;
		if(var_73_bool != 0) {
			var_74_string = ""; var_75_int = 0; var_76_int = 0;
			func_219("boot_army", (int)1, (int)40);
			var_77_string = ""; var_78_int = 0; var_79_int = 0;
			func_219("glove_army", (int)1, (int)50);
			var_80_string = ""; var_81_int = 0; var_82_int = 0;
			func_219("balahon", (int)1, (int)70);
		}
	} else {
		var_83_string = ""; var_84_int = 0; var_85_int = 0;
		func_219("Rifle", (int)1, (int)300);
		var_86_string = ""; var_87_int = 0; var_88_int = 0;
		func_219("Revolver", (int)1, (int)200);
		func_256((int)0);
		var_89_int = var_7_int;
		var_91_bool = var_7_int >= (int)3;
		if(var_91_bool != 0) {
			var_92_string = ""; var_93_int = 0; var_94_int = 0;
			func_219("halfboot_repel", (int)1, (int)30);
			var_95_string = ""; var_96_int = 0; var_97_int = 0;
			func_219("boot_repel", (int)1, (int)50);
			var_98_string = ""; var_99_int = 0; var_100_int = 0;
			func_219("drapery", (int)1, (int)10);
			var_101_string = ""; var_102_int = 0; var_103_int = 0;
			func_219("cloak_repel", (int)1, (int)20);
			var_104_string = ""; var_105_int = 0; var_106_int = 0;
			func_219("raincoat_repel", (int)1, (int)40);
			var_107_string = ""; var_108_int = 0; var_109_int = 0;
			func_219("glove_disp", (int)1, (int)30);
			var_110_string = ""; var_111_int = 0; var_112_int = 0;
			func_219("glove", (int)1, (int)30);
		}
		var_114_bool = var_7_int >= (int)9;
		if(var_114_bool == 0) goto Label_190;
		var_115_string = ""; var_116_int = 0; var_117_int = 0;
		func_219("boot_army", (int)1, (int)50);
		var_118_string = ""; var_119_int = 0; var_120_int = 0;
		func_219("glove_army", (int)1, (int)50);
		var_121_string = ""; var_122_int = 0; var_123_int = 0;
		func_219("balahon", (int)1, (int)100);
	}
Label_190:
	func_195();
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_256(var_43_int)
{
	var_44_float = 0; var_45_float = 0;
	GetGameTime(var_45_float);
	var_47_int = 0;
	var_47_int = var_45_float / (int)24;
	var_43_int = (int)1 + var_47_int;
	return 2;
}


func_195()
{
	
Label_195:
	Hold();
	goto Label_195;
}
EMIT "Return(); Pop(0)";


func_230(var_25_string, var_26_int, var_27_int, var_28_int)
{
	var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_bool = 0;
	var_33_bool = 0; var_34_int = 0; var_35_int = 0;
	var_26_int = var_34_int;
	var_27_int = var_35_int;
	func_245(var_33_bool, var_34_int, var_35_int);
	if(var_33_bool != 0) {
		irand(var_31_int, var_28_int);
		var_38_int = var_28_int + (int)1;
		AddItem(var_32_bool, var_25_string, (int)0, var_38_int);
	}
	return 4;
}


func_245(var_16_bool, var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0;
	irand(var_20_int, var_18_int);
	var_16_bool = var_20_int < var_17_int;
	return 2;
}


func_250(var_5_bool)
{
	var_6_int = 0; var_7_int = 0;
	GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
	return 2;
}


func_219(var_11_string, var_12_int, var_13_int)
{
	var_14_bool = 0; var_15_bool = 0;
	var_16_bool = 0; var_17_int = 0; var_18_int = 0;
	var_12_int = var_17_int;
	var_13_int = var_18_int;
	func_245(var_16_bool, var_17_int, var_18_int);
	if(var_16_bool != 0) {
		AddItem(var_15_bool, var_11_string, (int)0);
	}
	return 2;
}


