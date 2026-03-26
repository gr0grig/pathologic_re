// @IMPORTS: DestroyWindow/0,GetStringByID/2,GetWindowSize/2,SetOwnerDraw/1,SetNeedUpdate/1,ProcessEvents/0,GetTextHeightInWidth/4,PrintInWidth/10,StopEventProcessing/0,GetGameTime/1,GetVariable/2,format/7,irand/2,SetVariable/2
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,int,string,float params=0
// @EVENT_0: op=0x48 vars=
// @EVENT_1: op=0x62 vars=float
// @PE: 0x3a,0x62

task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_string, var_4_float)
{
	var_5_float = 0; var_6_int = 0; var_7_float = 0; var_8_int = 0;
	var_10_bool = var_4_float <= (int)0;
	if(var_10_bool != 0) {
		return 4;
	}
	var_12_bool = var_4_float < (float)1.0;
	if(var_12_bool != 0) {
		var_7_float = var_4_float / (float)1.0;
	} else {
		var_7_float = 1;
	}
	GetTextHeightInWidth(var_8_int, "default", var_0_int, var_3_string);
	var_17_int = var_1_int - var_8_int;
	var_19_float = var_17_int / (int)2;
	PrintInWidth(var_8_int, "default", (int)0, var_19_float, var_0_int, var_3_string, (float)1.0, (float)1.0, (float)1.0, var_7_float);
	return 4;
	
}


task_0_event_1(var_0_int, var_1_int, var_2_int, var_3_string, var_4_float, var_5_float)
{
	var_4_float = var_4_float - var_5_float;
	var_6_bool = 0;
	var_6_bool = 0;
	var_8_bool = var_4_float <= (int)0;
	if(var_8_bool != 0) {
		var_9_bool = 0;
		func_114(var_9_bool);
		if(var_9_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		StopEventProcessing();
	}
	return 0;
}


main(var_0_int, var_1_int, var_2_int, var_3_string, var_4_float)
{
	var_5_int = 0; var_6_string = ""; var_7_int = 0; var_8_string = "";
	var_9_int = 0;
	func_130(var_9_int);
	var_14_bool = var_9_int == (int)0;
	if(var_14_bool != 0) {
		var_7_int = 12;
	} else {
		var_203_int = 0;
		func_130(var_203_int);
		var_205_bool = var_203_int == (int)1;
		if(var_205_bool != 0) {
			var_7_int = 0;
			goto Label_18;
		}
		var_7_int = 24;
	}
Label_18:
	var_15_string = ""; var_16_int = 0;
	func_116((int)0);
	var_17_int = var_16_int;
	func_136(var_15_string, var_16_int);
	var_15_string = var_8_string;
	var_187_bool = var_8_string != "";
	if(var_187_bool != 0) {
		var_188_string = ""; var_189_float = 0;
		var_8_string = var_188_string;
		func_58(var_5_int, var_6_string, var_7_int, var_8_string, var_188_string, (float)10);
	}
	var_192_int = 0; var_193_float = 0;
	var_195_int = (int)300 + var_7_int;
	var_196_int = 0;
	func_116(var_196_int);
	var_197_int = var_195_int + var_196_int;
	var_192_int = var_197_int - (int)1;
	func_49(var_192_int, (float)8);
	DestroyWindow();
	return 4;
	
}


func_353(var_105_int, var_106_int)
{
	var_107_int = 0; var_108_int = 0; var_109_int = 0; var_110_int = 0; var_111_int = 0; var_112_int = 0;
	var_114_bool = var_106_int == (int)2;
	if(var_114_bool != 0) {
		var_110_int = 5;
		var_111_int = 10;
	} else {
		var_117_bool = var_106_int == (int)3;
		if(var_117_bool != 0) {
			var_110_int = 10;
			var_111_int = 15;
			goto Label_422;
		}
		var_119_bool = var_106_int == (int)4;
		if(var_119_bool != 0) {
			var_110_int = 15;
			var_111_int = 35;
			goto Label_422;
		}
		var_121_bool = var_106_int == (int)5;
		if(var_121_bool != 0) {
			var_110_int = 15;
			var_111_int = 35;
			goto Label_422;
		}
		var_123_bool = var_106_int == (int)6;
		if(var_123_bool != 0) {
			var_110_int = 10;
			var_111_int = 30;
			goto Label_422;
		}
		var_125_bool = var_106_int == (int)7;
		if(var_125_bool != 0) {
			var_110_int = 10;
			var_111_int = 30;
			goto Label_422;
		}
		var_127_bool = var_106_int == (int)8;
		if(var_127_bool != 0) {
			var_110_int = 30;
			var_111_int = 60;
			goto Label_422;
		}
		var_129_bool = var_106_int == (int)9;
		if(var_129_bool != 0) {
			var_110_int = 30;
			var_111_int = 60;
			goto Label_422;
		}
		var_131_bool = var_106_int == (int)10;
		if(var_131_bool != 0) {
			var_110_int = 120;
			var_111_int = 140;
			goto Label_422;
		}
		var_133_bool = var_106_int == (int)11;
		if(var_133_bool != 0) {
			var_110_int = 120;
			var_111_int = 140;
			goto Label_422;
		}
		var_135_bool = var_106_int == (int)12;
		if(var_135_bool != 0) {
			var_110_int = 120;
			var_111_int = 140;
			goto Label_422;
		}
		var_105_int = 0;
		return 6;
	}
Label_422:
	var_115_int = var_111_int - var_110_int;
	irand(var_112_int, var_115_int);
	var_105_int = var_112_int + var_110_int;
	return 6;
	
}


func_130(var_9_int)
{
	var_10_int = 0; var_11_int = 0;
	GetVariable("branch", var_11_int);
	var_11_int = var_9_int;
	return 2;
}


func_136(var_15_string, var_16_int)
{
	var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_string = ""; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_string = "";
	var_35_bool = 0;
	var_35_bool = 1;
	var_37_bool = var_16_int < (int)2;
	if(var_37_bool != 1) {
		var_39_bool = var_16_int > (int)12;
		if(var_39_bool != 1) {
			var_35_bool = 0;
		}
	}
	if(var_35_bool != 0) {
		var_15_string = "";
		return 12;
	}
	var_40_int = 0; var_41_int = 0;
	var_16_int = var_41_int;
	func_200(var_40_int, var_41_int);
	var_40_int = var_29_int;
	var_71_int = 0; var_72_int = 0;
	var_16_int = var_72_int;
	func_274(var_71_int, var_72_int);
	var_71_int = var_30_int;
	var_105_int = 0; var_106_int = 0;
	var_16_int = var_106_int;
	func_353(var_105_int, var_106_int);
	var_105_int = var_31_int;
	var_136_int = 0; var_137_int = 0;
	var_16_int = var_137_int;
	func_427(var_136_int, var_137_int);
	var_136_int = var_32_int;
	var_167_int = 0; var_168_int = 0;
	var_16_int = var_168_int;
	func_185(var_167_int, var_168_int);
	var_167_int = var_33_int;
	var_179_string = ""; var_180_int = 0;
	var_183_int = var_16_int - (int)2;
	var_180_int = (int)550 + var_183_int;
	func_125(var_179_string, var_180_int);
	format(var_34_string, var_179_string, var_29_int, var_30_int, var_31_int, var_33_int, var_32_int);
	var_34_string = var_15_string;
	return 12;
}


func_200(var_40_int, var_41_int)
{
	var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0;
	var_49_bool = var_41_int == (int)2;
	if(var_49_bool != 0) {
		var_45_int = 20;
		var_46_int = 30;
	} else {
		var_52_bool = var_41_int == (int)3;
		if(var_52_bool != 0) {
			var_45_int = 30;
			var_46_int = 50;
			goto Label_269;
		}
		var_54_bool = var_41_int == (int)4;
		if(var_54_bool != 0) {
			var_45_int = 40;
			var_46_int = 60;
			goto Label_269;
		}
		var_56_bool = var_41_int == (int)5;
		if(var_56_bool != 0) {
			var_45_int = 100;
			var_46_int = 130;
			goto Label_269;
		}
		var_58_bool = var_41_int == (int)6;
		if(var_58_bool != 0) {
			var_45_int = 150;
			var_46_int = 200;
			goto Label_269;
		}
		var_60_bool = var_41_int == (int)7;
		if(var_60_bool != 0) {
			var_45_int = 170;
			var_46_int = 220;
			goto Label_269;
		}
		var_62_bool = var_41_int == (int)8;
		if(var_62_bool != 0) {
			var_45_int = 200;
			var_46_int = 250;
			goto Label_269;
		}
		var_64_bool = var_41_int == (int)9;
		if(var_64_bool != 0) {
			var_45_int = 330;
			var_46_int = 390;
			goto Label_269;
		}
		var_66_bool = var_41_int == (int)10;
		if(var_66_bool != 0) {
			var_45_int = 330;
			var_46_int = 390;
			goto Label_269;
		}
		var_68_bool = var_41_int == (int)11;
		if(var_68_bool != 0) {
			var_45_int = 330;
			var_46_int = 390;
			goto Label_269;
		}
		var_70_bool = var_41_int == (int)12;
		if(var_70_bool != 0) {
			var_45_int = 330;
			var_46_int = 390;
			goto Label_269;
		}
		var_40_int = 0;
		return 6;
	}
Label_269:
	var_50_int = var_46_int - var_45_int;
	irand(var_47_int, var_50_int);
	var_40_int = var_47_int + var_45_int;
	return 6;
	
}


func_427(var_136_int, var_137_int)
{
	var_138_int = 0; var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0;
	var_145_bool = var_137_int == (int)2;
	if(var_145_bool != 0) {
		var_141_int = 20;
		var_142_int = 30;
	} else {
		var_148_bool = var_137_int == (int)3;
		if(var_148_bool != 0) {
			var_141_int = 40;
			var_142_int = 60;
			goto Label_496;
		}
		var_150_bool = var_137_int == (int)4;
		if(var_150_bool != 0) {
			var_141_int = 50;
			var_142_int = 70;
			goto Label_496;
		}
		var_152_bool = var_137_int == (int)5;
		if(var_152_bool != 0) {
			var_141_int = 90;
			var_142_int = 110;
			goto Label_496;
		}
		var_154_bool = var_137_int == (int)6;
		if(var_154_bool != 0) {
			var_141_int = 310;
			var_142_int = 360;
			goto Label_496;
		}
		var_156_bool = var_137_int == (int)7;
		if(var_156_bool != 0) {
			var_141_int = 360;
			var_142_int = 460;
			goto Label_496;
		}
		var_158_bool = var_137_int == (int)8;
		if(var_158_bool != 0) {
			var_141_int = 500;
			var_142_int = 590;
			goto Label_496;
		}
		var_160_bool = var_137_int == (int)9;
		if(var_160_bool != 0) {
			var_141_int = 500;
			var_142_int = 590;
			goto Label_496;
		}
		var_162_bool = var_137_int == (int)10;
		if(var_162_bool != 0) {
			var_141_int = 500;
			var_142_int = 590;
			goto Label_496;
		}
		var_164_bool = var_137_int == (int)11;
		if(var_164_bool != 0) {
			var_141_int = 500;
			var_142_int = 590;
			goto Label_496;
		}
		var_166_bool = var_137_int == (int)12;
		if(var_166_bool != 0) {
			var_141_int = 500;
			var_142_int = 590;
			goto Label_496;
		}
		var_136_int = 0;
		return 6;
	}
Label_496:
	var_146_int = var_142_int - var_141_int;
	irand(var_143_int, var_146_int);
	var_136_int = var_143_int + var_141_int;
	return 6;
	
}


func_49(var_192_int, var_193_float)
{
	var_199_string = ""; var_200_string = "";
	GetStringByID(var_200_string, var_192_int);
	var_201_string = ""; var_202_float = 0;
	var_200_string = var_201_string;
	var_193_float = var_202_float;
	func_58(var_192_int, var_193_float, var_199_string, var_200_string, var_201_string, var_202_float);
	return 2;
}


func_114(var_9_bool)
{
	var_9_bool = 1;
	return 0;
}


func_274(var_71_int, var_72_int)
{
	var_73_int = 0; var_74_int = 0; var_75_int = 0; var_76_int = 0; var_77_int = 0; var_78_int = 0;
	var_80_bool = var_72_int == (int)2;
	if(var_80_bool != 0) {
		var_76_int = 10;
		var_77_int = 20;
	} else {
		var_86_bool = var_72_int == (int)3;
		if(var_86_bool != 0) {
			var_76_int = 30;
			var_77_int = 40;
			goto Label_343;
		}
		var_88_bool = var_72_int == (int)4;
		if(var_88_bool != 0) {
			var_76_int = 50;
			var_77_int = 60;
			goto Label_343;
		}
		var_90_bool = var_72_int == (int)5;
		if(var_90_bool != 0) {
			var_76_int = 70;
			var_77_int = 90;
			goto Label_343;
		}
		var_92_bool = var_72_int == (int)6;
		if(var_92_bool != 0) {
			var_76_int = 110;
			var_77_int = 170;
			goto Label_343;
		}
		var_94_bool = var_72_int == (int)7;
		if(var_94_bool != 0) {
			var_76_int = 310;
			var_77_int = 360;
			goto Label_343;
		}
		var_96_bool = var_72_int == (int)8;
		if(var_96_bool != 0) {
			var_76_int = 360;
			var_77_int = 430;
			goto Label_343;
		}
		var_98_bool = var_72_int == (int)9;
		if(var_98_bool != 0) {
			var_76_int = 400;
			var_77_int = 490;
			goto Label_343;
		}
		var_100_bool = var_72_int == (int)10;
		if(var_100_bool != 0) {
			var_76_int = 600;
			var_77_int = 690;
			goto Label_343;
		}
		var_102_bool = var_72_int == (int)11;
		if(var_102_bool != 0) {
			var_76_int = 600;
			var_77_int = 690;
			goto Label_343;
		}
		var_104_bool = var_72_int == (int)12;
		if(var_104_bool != 0) {
			var_76_int = 600;
			var_77_int = 690;
			goto Label_343;
		}
		var_71_int = 0;
		return 6;
	}
Label_343:
	var_81_int = var_77_int - var_76_int;
	irand(var_78_int, var_81_int);
	var_83_int = "ps_dead_count" + var_72_int;
	var_84_int = var_78_int + var_76_int;
	SetVariable(var_83_int, var_84_int);
	var_71_int = var_78_int + var_76_int;
	return 6;
	
}


func_116(var_17_int)
{
	var_18_float = 0; var_19_float = 0;
	GetGameTime(var_19_float);
	var_21_int = 0;
	var_21_int = var_19_float / (int)24;
	var_17_int = (int)1 + var_21_int;
	return 2;
}


func_185(var_167_int, var_168_int)
{
	var_169_int = 0; var_170_int = 0; var_171_int = 0; var_172_int = 0; var_173_int = 0; var_174_int = 0;
	var_173_int = 1;
	
Label_188:
	var_175_bool = var_173_int <= var_168_int;
	if(var_175_bool != 0) {
		var_177_int = "ps_dead_count" + var_168_int;
		GetVariable(var_177_int, var_174_int);
		(int)0 = (int)0 + var_174_int;
		var_173_int = var_173_int + (int)1;
		goto Label_188;
	}
	var_172_int = var_167_int;
	return 6;
}


func_58(var_0_int, var_1_int, var_3_string, var_4_float, var_188_string, var_189_float)
{
	var_3_string = var_188_string;
	var_4_float = var_189_float;
	GetWindowSize(var_0_int, var_1_int);
	SetOwnerDraw((bool)1);
	SetNeedUpdate((bool)1);
	ProcessEvents();
	return 0;
}


func_125(var_179_string, var_180_int)
{
	var_184_string = ""; var_185_string = "";
	GetStringByID(var_185_string, var_180_int);
	var_185_string = var_179_string;
	return 2;
}


