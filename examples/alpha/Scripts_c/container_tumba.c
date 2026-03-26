// @IMPORTS: SetVisibility/1,GetScene/1,Hold/0,IsOverrideActive/1,Barter/1,AddItem/3,irand/2,AddItem/4,GetVariable/2,GetGameTime/1
// @STRINGS: W:nailed|A:GetProperty|W:revolver_ammo|W:rifle_ammo|W:alpha_pills|W:beta_pills|W:gamma_pills|W:delta_pills|W:tvirin|W:lemon|W:neomicin|W:monomicin|W:feromicin|W:meradorm|W:novocaine|W:morfin|W:etorfin|W:syringe|W:kerosene|W:lockpick|W:Scalpel|W:glove_disp|W:glove|W:mask|W:bandage|W:tourniquet|W:packet|W:needle|W:hook|W:flower|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x101 vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0;
	var_5_bool = 0;
	func_308(var_5_bool);
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
	var_0_object = Obj(); var_1_bool = 0; var_2_int = 0; var_3_object = Obj(); var_4_bool = 0; var_5_int = 0;
	SetVisibility((bool)1);
	GetScene(var_3_object);
	@@var_3_object:GetProperty("nailed", var_4_bool);
	var_8_bool = var_4_bool;
	if(var_8_bool != 0) {
		var_9_string = ""; var_10_int = 0; var_11_int = 0;
		func_277("revolver_ammo", (int)1, (int)10);
		var_20_string = ""; var_21_int = 0; var_22_int = 0;
		func_277("rifle_ammo", (int)1, (int)15);
		var_23_string = ""; var_24_int = 0; var_25_int = 0; var_26_int = 0;
		func_288("alpha_pills", (int)1, (int)4, (int)4);
		var_37_string = ""; var_38_int = 0; var_39_int = 0; var_40_int = 0;
		func_288("beta_pills", (int)1, (int)8, (int)3);
		var_41_string = ""; var_42_int = 0; var_43_int = 0; var_44_int = 0;
		func_288("gamma_pills", (int)1, (int)12, (int)2);
		var_45_string = ""; var_46_int = 0; var_47_int = 0;
		func_277("delta_pills", (int)1, (int)15);
		var_48_string = ""; var_49_int = 0; var_50_int = 0;
		func_277("tvirin", (int)1, (int)20);
		var_51_string = ""; var_52_int = 0; var_53_int = 0;
		func_277("lemon", (int)1, (int)10);
		var_54_string = ""; var_55_int = 0; var_56_int = 0;
		func_277("neomicin", (int)1, (int)15);
		var_57_string = ""; var_58_int = 0; var_59_int = 0;
		func_277("monomicin", (int)1, (int)25);
		var_60_string = ""; var_61_int = 0; var_62_int = 0;
		func_277("feromicin", (int)1, (int)35);
		var_63_string = ""; var_64_int = 0; var_65_int = 0;
		func_277("meradorm", (int)1, (int)25);
		var_66_string = ""; var_67_int = 0; var_68_int = 0;
		func_277("novocaine", (int)1, (int)35);
		var_69_string = ""; var_70_int = 0; var_71_int = 0;
		func_277("morfin", (int)1, (int)40);
		var_72_string = ""; var_73_int = 0; var_74_int = 0;
		func_277("etorfin", (int)1, (int)40);
		var_75_string = ""; var_76_int = 0; var_77_int = 0;
		func_277("syringe", (int)1, (int)20);
		var_78_string = ""; var_79_int = 0; var_80_int = 0; var_81_int = 0;
		func_288("kerosene", (int)1, (int)2, (int)10);
		var_82_string = ""; var_83_int = 0; var_84_int = 0;
		func_277("lockpick", (int)1, (int)15);
		var_85_string = ""; var_86_int = 0; var_87_int = 0;
		func_277("Scalpel", (int)1, (int)25);
		func_314((int)0);
		var_88_int = var_5_int;
		var_95_bool = var_5_int >= (int)3;
		if(var_95_bool != 0) {
			var_96_string = ""; var_97_int = 0; var_98_int = 0;
			func_277("glove_disp", (int)1, (int)30);
			var_99_string = ""; var_100_int = 0; var_101_int = 0;
			func_277("glove", (int)1, (int)30);
			var_102_string = ""; var_103_int = 0; var_104_int = 0;
			func_277("mask", (int)1, (int)50);
		}
	} else {
		var_105_string = ""; var_106_int = 0; var_107_int = 0;
		func_277("bandage", (int)1, (int)50);
		var_108_string = ""; var_109_int = 0; var_110_int = 0;
		func_277("tourniquet", (int)1, (int)50);
		var_111_string = ""; var_112_int = 0; var_113_int = 0;
		func_277("packet", (int)1, (int)50);
		var_114_string = ""; var_115_int = 0; var_116_int = 0; var_117_int = 0;
		func_288("needle", (int)1, (int)15, (int)2);
		var_118_string = ""; var_119_int = 0; var_120_int = 0; var_121_int = 0;
		func_288("hook", (int)1, (int)15, (int)3);
		var_122_string = ""; var_123_int = 0; var_124_int = 0; var_125_int = 0;
		func_288("flower", (int)1, (int)10, (int)2);
		var_126_string = ""; var_127_int = 0; var_128_int = 0;
		func_277("syringe", (int)1, (int)30);
		var_129_string = ""; var_130_int = 0; var_131_int = 0;
		func_277("watch", (int)1, (int)30);
		var_132_string = ""; var_133_int = 0; var_134_int = 0;
		func_277("razor", (int)1, (int)30);
		var_135_string = ""; var_136_int = 0; var_137_int = 0;
		func_277("beads", (int)1, (int)20);
		var_138_string = ""; var_139_int = 0; var_140_int = 0;
		func_277("bracelet", (int)1, (int)20);
		var_141_string = ""; var_142_int = 0; var_143_int = 0;
		func_277("ear_ring", (int)1, (int)20);
		var_144_string = ""; var_145_int = 0; var_146_int = 0;
		func_277("gold_ring", (int)1, (int)50);
		var_147_string = ""; var_148_int = 0; var_149_int = 0;
		func_277("silver_ring", (int)1, (int)30);
		var_150_string = ""; var_151_int = 0; var_152_int = 0;
		func_277("glove", (int)1, (int)40);
	}
	func_253();
	return 6;
	
}
EMIT "Stack[-3] = 0";


func_288(var_23_string, var_24_int, var_25_int, var_26_int)
{
	var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_bool = 0;
	var_31_bool = 0; var_32_int = 0; var_33_int = 0;
	var_24_int = var_32_int;
	var_25_int = var_33_int;
	func_303(var_31_bool, var_32_int, var_33_int);
	if(var_31_bool != 0) {
		irand(var_29_int, var_26_int);
		var_36_int = var_26_int + (int)1;
		AddItem(var_30_bool, var_23_string, (int)0, var_36_int);
	}
	return 4;
}


func_303(var_14_bool, var_15_int, var_16_int)
{
	var_17_int = 0; var_18_int = 0;
	irand(var_18_int, var_16_int);
	var_14_bool = var_18_int < var_15_int;
	return 2;
}


func_308(var_5_bool)
{
	var_6_int = 0; var_7_int = 0;
	GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
	return 2;
}


func_277(var_9_string, var_10_int, var_11_int)
{
	var_12_bool = 0; var_13_bool = 0;
	var_14_bool = 0; var_15_int = 0; var_16_int = 0;
	var_10_int = var_15_int;
	var_11_int = var_16_int;
	func_303(var_14_bool, var_15_int, var_16_int);
	if(var_14_bool != 0) {
		AddItem(var_13_bool, var_9_string, (int)0);
	}
	return 2;
}


func_314(var_88_int)
{
	var_89_float = 0; var_90_float = 0;
	GetGameTime(var_90_float);
	var_92_int = 0;
	var_92_int = var_90_float / (int)24;
	var_88_int = (int)1 + var_92_int;
	return 2;
}


func_253()
{
	
Label_253:
	Hold();
	goto Label_253;
}
EMIT "Return(); Pop(0)";


