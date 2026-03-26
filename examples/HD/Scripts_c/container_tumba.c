// @IMPORTS: SetVisibility/1,DisableUpdate/0,GetScene/1,Hold/0,IsOverrideActive/1,GetItemCount/1,BroadcastSteal/2,Barter/1,AddItem/3,irand/2,AddItem/4,GetVariable/2,GetGameTime/1
// @STRINGS: W:nailed|A:GetProperty|W:alpha_pills|W:tvirin|W:lemon|W:meradorm|W:syringe|W:kerosene|W:hook|W:needle|W:Money|W:neomicin|W:glove_disp|W:novocaine|W:beta_pills|W:Scalpel|W:packet|W:monomicin|W:morfin|W:gamma_pills|W:feromicin|W:delta_pills|W:etorfin|W:bandage|W:tourniquet|W:flower|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:glove|A:IsOnGround|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x123 vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_bool = 0; var_7_int = 0; var_8_object = Obj();
	var_9_bool = 0;
	var_9_bool = 1;
	var_10_bool = var_0_object == 0; //@nz
	if(var_10_bool != 1) {
		var_11_bool = 0;
		func_357(var_11_bool);
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
		var_11_string = ""; var_12_int = 0; var_13_int = 0; var_14_int = 0;
		func_337("alpha_pills", (int)1, (int)2, (int)3);
		var_27_string = ""; var_28_int = 0; var_29_int = 0;
		func_326("tvirin", (int)1, (int)20);
		var_36_string = ""; var_37_int = 0; var_38_int = 0;
		func_326("lemon", (int)1, (int)10);
		var_39_string = ""; var_40_int = 0; var_41_int = 0;
		func_326("meradorm", (int)1, (int)25);
		var_42_string = ""; var_43_int = 0; var_44_int = 0;
		func_326("syringe", (int)1, (int)20);
		var_45_string = ""; var_46_int = 0; var_47_int = 0; var_48_int = 0;
		func_337("kerosene", (int)1, (int)3, (int)10);
		var_49_string = ""; var_50_int = 0; var_51_int = 0; var_52_int = 0;
		func_337("hook", (int)1, (int)15, (int)3);
		var_53_string = ""; var_54_int = 0; var_55_int = 0; var_56_int = 0;
		func_337("needle", (int)1, (int)5, (int)2);
		var_57_string = ""; var_58_int = 0; var_59_int = 0; var_60_int = 0;
		func_337("Money", (int)1, (int)2, (int)5);
		func_363((int)0);
		var_61_int = var_6_int;
		var_68_bool = var_6_int >= (int)4;
		if(var_68_bool != 0) {
			var_69_string = ""; var_70_int = 0; var_71_int = 0;
			func_326("neomicin", (int)1, (int)15);
			var_72_string = ""; var_73_int = 0; var_74_int = 0;
			func_326("glove_disp", (int)1, (int)30);
		}
		var_76_bool = var_6_int >= (int)5;
		if(var_76_bool != 0) {
			var_77_string = ""; var_78_int = 0; var_79_int = 0;
			func_326("novocaine", (int)1, (int)20);
			var_80_string = ""; var_81_int = 0; var_82_int = 0; var_83_int = 0;
			func_337("beta_pills", (int)1, (int)4, (int)2);
			var_84_string = ""; var_85_int = 0; var_86_int = 0;
			func_326("Scalpel", (int)1, (int)45);
		}
		var_88_bool = var_6_int >= (int)7;
		if(var_88_bool != 0) {
			var_89_string = ""; var_90_int = 0; var_91_int = 0;
			func_326("packet", (int)1, (int)25);
			var_92_string = ""; var_93_int = 0; var_94_int = 0;
			func_326("monomicin", (int)1, (int)25);
			var_95_string = ""; var_96_int = 0; var_97_int = 0;
			func_326("morfin", (int)1, (int)25);
			var_98_string = ""; var_99_int = 0; var_100_int = 0; var_101_int = 0;
			func_337("gamma_pills", (int)1, (int)8, (int)2);
		}
		var_103_bool = var_6_int >= (int)10;
		if(var_103_bool != 0) {
			var_104_string = ""; var_105_int = 0; var_106_int = 0;
			func_326("feromicin", (int)1, (int)35);
			var_107_string = ""; var_108_int = 0; var_109_int = 0;
			func_326("delta_pills", (int)1, (int)16);
			var_110_string = ""; var_111_int = 0; var_112_int = 0;
			func_326("etorfin", (int)1, (int)40);
		}
	} else {
		func_363((int)0);
		var_113_int = var_7_int;
		var_114_string = ""; var_115_int = 0; var_116_int = 0;
		func_326("bandage", (int)1, (int)50);
		var_117_string = ""; var_118_int = 0; var_119_int = 0;
		func_326("tourniquet", (int)1, (int)50);
		var_120_string = ""; var_121_int = 0; var_122_int = 0; var_123_int = 0;
		func_337("alpha_pills", (int)1, (int)4, (int)3);
		var_125_bool = var_7_int <= (int)7;
		if(var_125_bool != 0) {
			var_126_string = ""; var_127_int = 0; var_128_int = 0;
			func_326("packet", (int)1, (int)50);
		} else {
			var_170_string = ""; var_171_int = 0; var_172_int = 0;
			func_326("packet", (int)1, (int)20);
		}
		var_129_string = ""; var_130_int = 0; var_131_int = 0; var_132_int = 0;
		func_337("needle", (int)1, (int)15, (int)2);
		var_133_string = ""; var_134_int = 0; var_135_int = 0;
		func_326("hook", (int)1, (int)5);
		var_136_string = ""; var_137_int = 0; var_138_int = 0;
		func_326("flower", (int)1, (int)10);
		var_139_string = ""; var_140_int = 0; var_141_int = 0;
		func_326("syringe", (int)1, (int)30);
		var_142_string = ""; var_143_int = 0; var_144_int = 0;
		func_326("watch", (int)1, (int)30);
		var_145_string = ""; var_146_int = 0; var_147_int = 0;
		func_326("razor", (int)1, (int)30);
		var_148_string = ""; var_149_int = 0; var_150_int = 0;
		func_326("beads", (int)1, (int)20);
		var_151_string = ""; var_152_int = 0; var_153_int = 0;
		func_326("bracelet", (int)1, (int)20);
		var_154_string = ""; var_155_int = 0; var_156_int = 0;
		func_326("ear_ring", (int)1, (int)20);
		var_157_string = ""; var_158_int = 0; var_159_int = 0;
		func_326("gold_ring", (int)1, (int)50);
		var_160_string = ""; var_161_int = 0; var_162_int = 0;
		func_326("silver_ring", (int)1, (int)30);
		var_163_string = ""; var_164_int = 0; var_165_int = 0;
		func_326("glove", (int)1, (int)80);
		var_166_string = ""; var_167_int = 0; var_168_int = 0; var_169_int = 0;
		func_337("Money", (int)1, (int)2, (int)3);
	}
	func_287();
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_352(var_19_bool, var_20_int, var_21_int)
{
	var_22_int = 0; var_23_int = 0;
	irand(var_23_int, var_21_int);
	var_19_bool = var_23_int < var_20_int;
	return 2;
}


func_357(var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	GetVariable("nouse_container", var_13_int);
	var_11_bool = !var_13_int;
	return 2;
}


func_326(var_27_string, var_28_int, var_29_int)
{
	var_30_bool = 0; var_31_bool = 0;
	var_32_bool = 0; var_33_int = 0; var_34_int = 0;
	var_28_int = var_33_int;
	var_29_int = var_34_int;
	func_352(var_32_bool, var_33_int, var_34_int);
	if(var_32_bool != 0) {
		AddItem(var_31_bool, var_27_string, (int)0);
	}
	return 2;
}


func_363(var_61_int)
{
	var_62_float = 0; var_63_float = 0;
	GetGameTime(var_63_float);
	var_65_int = 0;
	var_65_int = var_63_float / (int)24;
	var_61_int = (int)1 + var_65_int;
	return 2;
}


func_337(var_11_string, var_12_int, var_13_int, var_14_int)
{
	var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_bool = 0;
	var_19_bool = 0; var_20_int = 0; var_21_int = 0;
	var_12_int = var_20_int;
	var_13_int = var_21_int;
	func_352(var_19_bool, var_20_int, var_21_int);
	if(var_19_bool != 0) {
		irand(var_17_int, var_14_int);
		var_26_int = var_17_int + (int)1;
		AddItem(var_18_bool, var_11_string, (int)0, var_26_int);
	}
	return 4;
}


func_287()
{
	
Label_287:
	Hold();
	goto Label_287;
}
EMIT "Return(); Pop(0)";


