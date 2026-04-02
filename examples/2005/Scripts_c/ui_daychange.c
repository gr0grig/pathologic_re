maintask task_0
{
	void init(int var_0_int, int var_1_int, int var_2_int, string var_3_string, float var_4_float)
	{
		int var_5_int; string var_6_string; int var_7_int; string var_8_string;
		int var_9_int;
		func_130(var_9_int);
		if(var_9_int == 0) {
			var_7_int = 12;
		} else {
				int var_203_int;
				func_130(var_203_int);
				if(!(var_203_int == 1)) goto Label_17;
				var_7_int = 0;
		}
		for(;;) {
			string var_15_string; int var_16_int;
			int var_17_int;
			func_116(var_17_int);
			var_17_int = var_16_int;
			func_136(var_15_string, var_16_int);
			var_15_string = var_8_string;
			if(var_8_string != "") {
				string var_188_string;
				func_58(var_5_int, var_6_string, var_7_int, var_188_string, var_188_string, (float)10);
			}
			int var_196_int;
			func_116(var_196_int);
			func_49((((300 + var_7_int) + var_196_int) - 1), (float)8);
			@DestroyWindow();

		}
	
	Label_17:
		var_7_int = 24;
	}

	void OnUse(int var_0_int, int var_1_int, int var_2_int, string var_3_string, float var_4_float)
	{
		float var_7_float;
		if(var_4_float <= 0) {
		}
		if(var_4_float < 1.0)
			var_7_float = var_4_float / 1.0;
		else
			var_7_float = 1;
		int var_8_int;
		@GetTextHeightInWidth(var_8_int, "default", var_0_int, var_3_string);
		@PrintInWidth(var_8_int, "default", 0, ((var_1_int - var_8_int) / 2), var_0_int, var_3_string, 1.0, 1.0, 1.0, var_7_float);
	
	}

	// @pe
	void OnSee(int var_0_int, int var_1_int, int var_2_int, string var_3_string, float var_4_float, float var_5_float)
	{
		bool var_6_bool = false;
		if((var_4_float - var_5_float) <= 0) {
			bool var_9_bool;
			func_114(var_9_bool);
			if(var_9_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0)
			@StopEventProcessing();
	}

}


void func_353(int var_105_int, int var_106_int)
{
	int var_110_int; int var_111_int; int var_112_int;
	if(var_106_int == 2) {
		var_110_int = 5;
		var_111_int = 10;
	} else if(var_106_int == 3) {
			var_110_int = 10;
			var_111_int = 15;
	}

	for(;;) {
		@irand(var_112_int, (var_111_int - var_110_int));
		var_105_int = var_112_int + var_110_int;
		return 6;

	}
	
	if(var_106_int == 4) {
		var_110_int = 15;
		var_111_int = 35;
	} else if(var_106_int == 5) {
		var_110_int = 15;
		var_111_int = 35;
	} else if(var_106_int == 6) {
		var_110_int = 10;
		var_111_int = 30;
	} else if(var_106_int == 7) {
		var_110_int = 10;
		var_111_int = 30;
	} else if(var_106_int == 8) {
		var_110_int = 30;
		var_111_int = 60;
	} else if(var_106_int == 9) {
		var_110_int = 30;
		var_111_int = 60;
	} else if(var_106_int == 10) {
		var_110_int = 120;
		var_111_int = 140;
	} else if(var_106_int == 11) {
		var_110_int = 120;
		var_111_int = 140;
	} else if(var_106_int == 12) {
		var_110_int = 120;
		var_111_int = 140;
	}
	var_105_int = 0;
}


void func_130(int var_9_int)
{
	int var_11_int;
	@GetVariable("branch", var_11_int);
	var_11_int = var_9_int;
}


void func_136(string var_15_string, int var_16_int)
{
	bool var_35_bool = true;
	var_37_bool = var_16_int < 2;
	if(var_37_bool != 1) {
		var_39_bool = var_16_int > 12;
		if(var_39_bool != 1)
			var_35_bool = false;
	}
	if(var_35_bool != 0) {
		var_15_string = "";
		return 12;
	}
	int var_40_int; int var_41_int;
	var_16_int = var_41_int;
	func_200(var_40_int, var_41_int);
	int var_29_int;
	var_40_int = var_29_int;
	int var_71_int; int var_72_int;
	var_16_int = var_72_int;
	func_274(var_71_int, var_72_int);
	int var_30_int;
	var_71_int = var_30_int;
	int var_105_int; int var_106_int;
	var_16_int = var_106_int;
	func_353(var_105_int, var_106_int);
	int var_31_int;
	var_105_int = var_31_int;
	int var_136_int; int var_137_int;
	var_16_int = var_137_int;
	func_427(var_136_int, var_137_int);
	int var_32_int;
	var_136_int = var_32_int;
	int var_167_int; int var_168_int;
	func_185(var_167_int, var_168_int);
	int var_33_int;
	var_167_int = var_33_int;
	string var_179_string;
	func_125(var_179_string, (550 + (var_168_int - 2)));
	string var_34_string;
	@format(var_34_string, var_179_string, var_29_int, var_30_int, var_31_int, var_33_int, var_32_int);
	var_34_string = var_15_string;
}


void func_200(int var_40_int, int var_41_int)
{
	int var_45_int; int var_46_int; int var_47_int;
	if(var_41_int == 2) {
		var_45_int = 20;
		var_46_int = 30;
	} else if(var_41_int == 3) {
			var_45_int = 30;
			var_46_int = 50;
	}

	for(;;) {
		@irand(var_47_int, (var_46_int - var_45_int));
		var_40_int = var_47_int + var_45_int;
		return 6;

	}
	
	if(var_41_int == 4) {
		var_45_int = 40;
		var_46_int = 60;
	} else if(var_41_int == 5) {
		var_45_int = 100;
		var_46_int = 130;
	} else if(var_41_int == 6) {
		var_45_int = 150;
		var_46_int = 200;
	} else if(var_41_int == 7) {
		var_45_int = 170;
		var_46_int = 220;
	} else if(var_41_int == 8) {
		var_45_int = 200;
		var_46_int = 250;
	} else if(var_41_int == 9) {
		var_45_int = 330;
		var_46_int = 390;
	} else if(var_41_int == 10) {
		var_45_int = 330;
		var_46_int = 390;
	} else if(var_41_int == 11) {
		var_45_int = 330;
		var_46_int = 390;
	} else if(var_41_int == 12) {
		var_45_int = 330;
		var_46_int = 390;
	}
	var_40_int = 0;
}


void func_427(int var_136_int, int var_137_int)
{
	int var_141_int; int var_142_int; int var_143_int;
	if(var_137_int == 2) {
		var_141_int = 20;
		var_142_int = 30;
	} else if(var_137_int == 3) {
			var_141_int = 40;
			var_142_int = 60;
	}

	for(;;) {
		@irand(var_143_int, (var_142_int - var_141_int));
		var_136_int = var_143_int + var_141_int;
		return 6;

	}
	
	if(var_137_int == 4) {
		var_141_int = 50;
		var_142_int = 70;
	} else if(var_137_int == 5) {
		var_141_int = 90;
		var_142_int = 110;
	} else if(var_137_int == 6) {
		var_141_int = 310;
		var_142_int = 360;
	} else if(var_137_int == 7) {
		var_141_int = 360;
		var_142_int = 460;
	} else if(var_137_int == 8) {
		var_141_int = 500;
		var_142_int = 590;
	} else if(var_137_int == 9) {
		var_141_int = 500;
		var_142_int = 590;
	} else if(var_137_int == 10) {
		var_141_int = 500;
		var_142_int = 590;
	} else if(var_137_int == 11) {
		var_141_int = 500;
		var_142_int = 590;
	} else if(var_137_int == 12) {
		var_141_int = 500;
		var_142_int = 590;
	}
	var_136_int = 0;
}


void func_49(int var_192_int, float var_193_float)
{
	string var_200_string;
	@GetStringByID(var_200_string, var_192_int);
	string var_201_string; float var_202_float;
	string var_199_string;
	func_58(var_192_int, var_202_float, var_199_string, var_201_string, var_201_string, var_202_float);
}


void func_114(bool var_9_bool)
{
	var_9_bool = true;
}


void func_274(int var_71_int, int var_72_int)
{
	int var_76_int; int var_77_int; int var_78_int;
	if(var_72_int == 2) {
		var_76_int = 10;
		var_77_int = 20;
	} else if(var_72_int == 3) {
			var_76_int = 30;
			var_77_int = 40;
	}

	for(;;) {
		@irand(var_78_int, (var_77_int - var_76_int));
		@SetVariable(("ps_dead_count" + var_72_int), (var_78_int + var_76_int));
		var_71_int = var_78_int + var_76_int;
		return 6;

	}
	
	if(var_72_int == 4) {
		var_76_int = 50;
		var_77_int = 60;
	} else if(var_72_int == 5) {
		var_76_int = 70;
		var_77_int = 90;
	} else if(var_72_int == 6) {
		var_76_int = 110;
		var_77_int = 170;
	} else if(var_72_int == 7) {
		var_76_int = 310;
		var_77_int = 360;
	} else if(var_72_int == 8) {
		var_76_int = 360;
		var_77_int = 430;
	} else if(var_72_int == 9) {
		var_76_int = 400;
		var_77_int = 490;
	} else if(var_72_int == 10) {
		var_76_int = 600;
		var_77_int = 690;
	} else if(var_72_int == 11) {
		var_76_int = 600;
		var_77_int = 690;
	} else if(var_72_int == 12) {
		var_76_int = 600;
		var_77_int = 690;
	}
	var_71_int = 0;
}


void func_116(int var_17_int)
{
	float var_19_float;
	@GetGameTime(var_19_float);
	var_17_int = 1 + (var_19_float / 24);
}


void func_185(int var_167_int, int var_168_int)
{
	int var_172_int; int var_174_int;
	var_172_int = 0;
	int var_173_int = 1;
	
	while(var_173_int <= var_168_int) {
		@GetVariable(("ps_dead_count" + var_168_int), var_174_int);
		var_172_int += var_174_int;
		var_173_int += 1;
	}
	
	var_172_int = var_167_int;
}


// @pe
void func_58(int var_0_int, int var_1_int, string var_3_string, float var_4_float, string var_188_string, float var_189_float)
{
	var_3_string = var_188_string;
	var_4_float = var_189_float;
	@GetWindowSize(var_0_int, var_1_int);
	@SetOwnerDraw(true);
	@SetNeedUpdate(true);
	@ProcessEvents();
}


void func_125(string var_179_string, int var_180_int)
{
	string var_185_string;
	@GetStringByID(var_185_string, var_180_int);
	var_185_string = var_179_string;
}


