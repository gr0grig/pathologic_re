// @IMPORTS: SetVisibility/1,DisableUpdate/0,GetScene/1,Hold/0,IsOverrideActive/1,GetItemCount/1,BroadcastSteal/2,Barter/1,AddItem/3,irand/2,AddItem/4,GetVariable/2,GetGameTime/1
// @STRINGS: W:nailed|A:GetProperty|W:Rifle|W:Revolver|W:halfboot_repel|W:drapery|W:glove_disp|W:cloak_repel|W:glove|W:raincoat_repel|W:Money|A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0xa5 vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_bool = 0; var_7_int = 0; var_8_object = Obj();
	var_9_bool = 0;
	var_9_bool = 1;
	var_10_bool = var_0_object == 0; //@nz
	if(var_10_bool != 1) {
		var_11_bool = 0;
		func_231(var_11_bool);
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
	var_0_object = Obj(); var_1_bool = 0; var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0;
	SetVisibility((bool)1);
	DisableUpdate();
	GetScene(var_4_object);
	@@var_4_object:GetProperty("nailed", var_5_bool);
	var_10_bool = var_5_bool;
	if(var_10_bool != 0) {
		var_11_string = ""; var_12_int = 0; var_13_int = 0;
		func_200("Rifle", (int)1, (int)250);
		var_22_string = ""; var_23_int = 0; var_24_int = 0;
		func_200("Revolver", (int)1, (int)250);
		func_237((int)0);
		var_25_int = var_6_int;
		var_32_bool = var_6_int >= (int)3;
		if(var_32_bool != 0) {
			var_33_string = ""; var_34_int = 0; var_35_int = 0;
			func_200("halfboot_repel", (int)1, (int)40);
			var_36_string = ""; var_37_int = 0; var_38_int = 0;
			func_200("drapery", (int)1, (int)30);
			var_39_string = ""; var_40_int = 0; var_41_int = 0;
			func_200("glove_disp", (int)1, (int)40);
		}
		var_43_bool = var_6_int >= (int)5;
		if(var_43_bool != 0) {
			var_44_string = ""; var_45_int = 0; var_46_int = 0;
			func_200("cloak_repel", (int)1, (int)40);
			var_47_string = ""; var_48_int = 0; var_49_int = 0;
			func_200("glove", (int)1, (int)40);
		}
		var_51_bool = var_6_int >= (int)6;
		if(var_51_bool != 0) {
			var_52_string = ""; var_53_int = 0; var_54_int = 0;
			func_200("boot_repel", (int)1, (int)70);
		}
		var_56_bool = var_6_int >= (int)8;
		if(var_56_bool != 0) {
			var_57_string = ""; var_58_int = 0; var_59_int = 0;
			func_200("raincoat_repel", (int)1, (int)60);
		}
		var_60_string = ""; var_61_int = 0; var_62_int = 0; var_63_int = 0;
		func_211("Money", (int)1, (int)2, (int)5);
	} else {
		func_237((int)0);
		var_74_int = var_7_int;
		var_76_bool = var_7_int >= (int)3;
		if(var_76_bool != 0) {
			var_77_string = ""; var_78_int = 0; var_79_int = 0;
			func_200("halfboot_repel", (int)1, (int)60);
			var_80_string = ""; var_81_int = 0; var_82_int = 0;
			func_200("drapery", (int)1, (int)40);
			var_83_string = ""; var_84_int = 0; var_85_int = 0;
			func_200("glove_disp", (int)1, (int)60);
		}
		var_87_bool = var_7_int >= (int)5;
		if(var_87_bool != 0) {
			var_88_string = ""; var_89_int = 0; var_90_int = 0;
			func_200("cloak_repel", (int)1, (int)60);
			var_91_string = ""; var_92_int = 0; var_93_int = 0;
			func_200("glove", (int)1, (int)60);
		}
		var_95_bool = var_7_int >= (int)8;
		if(var_95_bool != 0) {
			var_96_string = ""; var_97_int = 0; var_98_int = 0;
			func_200("boot_repel", (int)1, (int)80);
		}
		var_100_bool = var_7_int >= (int)8;
		if(var_100_bool != 0) {
			var_101_string = ""; var_102_int = 0; var_103_int = 0;
			func_200("raincoat_repel", (int)1, (int)80);
		}
		var_104_string = ""; var_105_int = 0; var_106_int = 0; var_107_int = 0;
		func_211("Money", (int)1, (int)2, (int)3);
	}
	func_161();
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_161()
{
	
Label_161:
	Hold();
	goto Label_161;
}
EMIT "Return(); Pop(0)";


func_226(var_16_bool, var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0;
	irand(var_20_int, var_18_int);
	var_16_bool = var_20_int < var_17_int;
	return 2;
}


func_231(var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	GetVariable("nouse_container", var_13_int);
	var_11_bool = !var_13_int;
	return 2;
}


func_200(var_11_string, var_12_int, var_13_int)
{
	var_14_bool = 0; var_15_bool = 0;
	var_16_bool = 0; var_17_int = 0; var_18_int = 0;
	var_12_int = var_17_int;
	var_13_int = var_18_int;
	func_226(var_16_bool, var_17_int, var_18_int);
	if(var_16_bool != 0) {
		AddItem(var_15_bool, var_11_string, (int)0);
	}
	return 2;
}


func_237(var_25_int)
{
	var_26_float = 0; var_27_float = 0;
	GetGameTime(var_27_float);
	var_29_int = 0;
	var_29_int = var_27_float / (int)24;
	var_25_int = (int)1 + var_29_int;
	return 2;
}


func_211(var_60_string, var_61_int, var_62_int, var_63_int)
{
	var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_bool = 0;
	var_68_bool = 0; var_69_int = 0; var_70_int = 0;
	var_61_int = var_69_int;
	var_62_int = var_70_int;
	func_226(var_68_bool, var_69_int, var_70_int);
	if(var_68_bool != 0) {
		irand(var_66_int, var_63_int);
		var_73_int = var_66_int + (int)1;
		AddItem(var_67_bool, var_60_string, (int)0, var_73_int);
	}
	return 4;
}


