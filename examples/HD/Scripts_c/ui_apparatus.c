maintask task_0
{
	void init(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object)
	{
		@FindActor(var_3_object, "player");
		if(!var_3_object) { //@nz
			@DestroyWindow();
			return 0;
		}
		@GetWindowData(var_4_object);
		if(!var_4_object) { //@nz
			@Trace("null apparatus");
			@DestroyWindow();
			return 0;
		}
		@CreateFloatVector(var_6_object);
		@CreateFloatVector(var_5_object);
		@CreateFloatVector(var_7_object);
		@CreateFloatVector(var_8_object);
		var_6_object->add(0.3); //@t
		var_5_object->add(0.4); //@t
		var_8_object->add(1); //@t
		var_7_object->add(1); //@t
		var_6_object->add(-0.3); //@t
		var_5_object->add(0.4); //@t
		var_8_object->add(1); //@t
		var_7_object->add(1); //@t
		var_6_object->add(1.0); //@t
		var_5_object->add(-1.0); //@t
		var_8_object->add(1); //@t
		var_7_object->add(1); //@t
		var_6_object->add(0); //@t
		var_5_object->add(0); //@t
		var_8_object->add(2.0); //@t
		var_7_object->add(1); //@t
		var_6_object->add(0); //@t
		var_5_object->add(0); //@t
		var_8_object->add(1); //@t
		var_7_object->add(0.5); //@t
		@CreateWindow("inventory_base.xml", false, var_1_object);
		func_588(var_8_object, 4);
	}

	// @pe
	void event_100(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, int var_9_int)
	{
		@DestroyWindow();
	}

	// @pe
	void event_102(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, int var_9_int)
	{
		int var_10_int;
		var_9_int = var_10_int;
		func_807(var_10_int);
	}

	// @pe
	void event_101(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, int var_9_int)
	{
		if(var_9_int == 266) {
			if(var_0_int == 0) {
				func_981(var_9_int, 1);
			} else {
					if(var_0_int == 1)
						func_981(var_9_int, 2);

				for(;;) {
					} else {
				if(var_0_int == 2) {
					func_981(var_9_int, 3);
				} else if(var_0_int == 3) {
					func_981(var_9_int, 4);
				} else if(var_0_int == 4) {
					func_981(var_9_int, 0);
				}
		}
			if(!(var_9_int == 265)) goto Label_766;
			if(var_0_int == 0) {
				func_981(var_9_int, 4);
			} else if(var_0_int == 1) {
				func_981(var_9_int, 0);
			} else if(var_0_int == 2) {
				func_981(var_9_int, 1);
			} else if(var_0_int == 3) {
				func_981(var_9_int, 2);
			} else if(var_0_int == 4) {
				func_981(var_9_int, 3);
				}
			}
		Label_766:
			int var_49_int;
			var_9_int = var_49_int;
			func_771(var_49_int);
			return 0;

		}
	
	}

	// @pe
	void OnSee(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, float var_9_float)
	{
		func_1075(var_0_int);
		func_1006();
		func_136();
	}

	void event_200(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, int var_9_int, string var_10_string, object var_11_object)
	{
		bool var_18_bool; int var_19_int; int var_20_int; object var_21_object; int var_22_int; object var_23_object;
		if(var_9_int < 0) {
			bool var_26_bool; int var_27_int; string var_28_string; object var_29_object;
			var_9_int = var_27_int;
			var_10_string = var_28_string;
			var_11_object = var_29_object;
			func_97(var_28_string, var_29_object);
			var_26_bool = false;
			return 12;
		}
		if(var_10_string == "button_weapon") {
			func_981(var_23_object, 0);
			var_18_bool = true;
		} else if(var_10_string == "button_clothes") {
				func_981(var_23_object, 1);
				var_18_bool = true;
		}
	Label_969:
		for(;;) {
			if(!var_18_bool) { //@nz
				bool var_265_bool; int var_266_int; string var_267_string; object var_268_object;
				var_9_int = var_266_int;
				var_10_string = var_267_string;
				var_11_object = var_268_object;
				func_97(var_267_string, var_268_object);
				var_265_bool = var_18_bool;
			}
			if(var_18_bool != 0) {
			}
			return 12;

		}
	
		if(var_10_string == "button_medcine") {
			func_981(var_23_object, 2);
			var_18_bool = true;
		} else if(var_10_string == "button_food") {
			func_981(var_23_object, 3);
			var_18_bool = true;
		} else if(var_10_string == "button_other") {
			func_981(var_23_object, 4);
		} else if(var_10_string == "button_detector") {
		} else if(var_10_string == "button_anticeptic") {
		}
		if(var_9_int != 0) {
			@GetVariable("noinv_drop", var_19_int);
			if(var_19_int != 0)
				return 12;
		}
	
		for(;;) {
			if(!(0 < 12)) goto Label_969;
			string var_292_string; int var_293_int;
			var_20_int = var_293_int;
			func_1162(var_292_string, var_293_int);
			if(var_10_string == var_292_string) {
				object var_305_object;
				func_95(var_23_object, var_305_object);
				var_305_object = var_21_object;
				var_21_object->GetItemCount(var_22_int, var_0_int);
				if(var_22_int > var_20_int) {
					var_21_object->GetItem(var_23_object, var_20_int, var_0_int);
					bool var_307_bool; object var_308_object;
					var_23_object = var_308_object;
					func_143(var_307_bool, var_308_object);
					if(!var_307_bool) { //@nz
						bool var_312_bool; int var_313_int; bool var_314_bool;
						var_20_int = var_313_int;
						var_314_bool = var_9_int == 0;
						func_154(var_312_bool, var_313_int, var_314_bool);
						var_312_bool = true;
					}
					var_23_object = null;
				}
				goto Label_969;
			EMIT "Stack[-3] = 0";
			}
			var_20_int += 1;
		}
	}

}


void func_771(int var_49_int)
{
	int var_52_int; int var_53_int;
	if(var_49_int == 269) {

		for(;;) {
			if(!(0 < 12)) goto Label_789;
			string var_59_string; int var_60_int;
			var_52_int = var_60_int;
			func_1162(var_59_string, var_60_int);
			@SendMessage(-2, var_59_string);
			var_52_int += 1;
		}
	}
Label_789:
	if(var_49_int == 270) {

		for(;;) {
			if(!(0 < 12)) goto Label_806;
			string var_77_string; int var_78_int;
			var_53_int = var_78_int;
			func_1162(var_77_string, var_78_int);
			@SendMessage(-3, var_77_string);
			var_53_int += 1;
		}
	}
Label_806:
}


// @pe
void func_136(void)
{
	func_434();
	func_470();
}


void func_265(object var_4_object, object var_82_object)
{
	int var_88_int; object var_91_object;
	var_4_object->GetItemCount(var_88_int); //@t
	int var_89_int = 0;
	int var_90_int = 0;
	
	while(var_90_int < var_88_int) {
		var_4_object->GetItem(var_91_object, var_90_int); //@t
		bool var_94_bool; object var_95_object;
		var_91_object = var_95_object;
		func_290(var_94_bool, var_95_object);
		if(!var_94_bool) //@nz
			var_91_object = var_82_object;
		var_91_object = null;
		var_90_int += 1;
	}
	
	object var_92_object = null;
	var_92_object = var_82_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1162(string var_113_string, int var_114_int)
{
	if((var_114_int + 1) < 10)
		var_113_string = "slot0" + (var_114_int + 1);
	var_113_string = "slot" + (var_114_int + 1);
}


// @pe
void func_143(bool var_97_bool, object var_98_object)
{
	object var_100_object;
	var_98_object = var_100_object;
	bool var_99_bool;
	func_290(var_99_bool, var_100_object);
	var_97_bool = !var_99_bool;
}


void func_403(object var_3_object, object var_4_object, bool var_233_bool)
{
	bool var_239_bool;
	object var_240_object;
	func_265(var_239_bool, var_240_object);
	object var_237_object;
	var_240_object = var_237_object;
	if(!var_237_object) { //@nz
		var_233_bool = false;
		return 6;
	}
	int var_242_int;
	func_348(var_239_bool, var_242_int);
	int var_238_int;
	var_242_int = var_238_int;
	var_3_object->AddItem(var_239_bool, var_237_object, 2, 1); //@t
	if(!var_239_bool) { //@nz
		var_233_bool = false;
		return 6;
	}
	var_4_object->RemoveItem(var_238_int, 1); //@t
	func_981(var_239_bool, 2);
	var_233_bool = true;
}
EMIT "Stack[-3] = 0";


void func_662(void)
{
	string var_172_string;
	func_1162(var_172_string, 0);
	@SendMessage(-6, var_172_string);
}


// @pe
void func_150(bool var_94_bool)
{
	var_94_bool = false;
}


void func_153(void)
{
}


// @pe
void func_154(bool var_312_bool, int var_313_int, bool var_314_bool)
{
	if(var_314_bool != 0) {
		bool var_317_bool; int var_318_int;
		func_165(var_318_int, var_314_bool, var_317_bool, var_318_int);
		var_312_bool = true;
		return 0;
	}
	var_312_bool = false;
}


void func_1178(int var_105_int, object var_106_object)
{
	int var_108_int;
	var_106_object->GetItemID(var_108_int);
	var_108_int = var_105_int;
}


void func_290(bool var_99_bool, object var_100_object)
{
	object var_106_object;
	var_100_object = var_106_object;
	int var_105_int;
	func_1178(var_105_int, var_106_object);
	int var_103_int;
	var_105_int = var_103_int;
	bool var_104_bool;
	@HasInvItemProperty(var_104_bool, var_103_int, "Grass");
	var_104_bool = var_99_bool;
}


void func_165(object var_3_object, object var_4_object, bool var_317_bool, int var_318_int)
{
	bool var_329_bool;
	func_203(var_329_bool);
	if(!var_329_bool) { //@nz
		var_317_bool = false;
		return 10;
	}
	int var_325_int;
	var_3_object->GetItemCount(var_325_int, 4); //@t
	if(var_325_int <= var_318_int) {
		var_317_bool = false;
		return 10;
	}
	int var_326_int;
	var_3_object->GetItemAmount(var_326_int, var_318_int, 4); //@t
	object var_324_object;
	var_3_object->GetItem(var_324_object, var_318_int, 4); //@t
	int var_327_int;
	var_324_object->GetItemID(var_327_int);
	bool var_328_bool;
	var_4_object->AddItem(var_328_bool, var_324_object, 0, 1); //@t
	if(!var_328_bool) { //@nz
		var_317_bool = false;
		return 10;
	}
	var_3_object->RemoveItem(var_318_int, 1, 4); //@t
	var_317_bool = true;
}
EMIT "Stack[-5] = 0";


void func_807(int var_10_int)
{
	int var_13_int; int var_14_int;
	if(var_10_int == 273) {

		for(;;) {
			if(!(0 < 12)) goto Label_825;
			string var_20_string; int var_21_int;
			var_13_int = var_21_int;
			func_1162(var_20_string, var_21_int);
			@SendMessage(-2, var_20_string);
			var_13_int += 1;
		}
	}
Label_825:
	if(var_10_int == 271) {

		for(;;) {
			if(!(0 < 12)) goto Label_842;
			string var_38_string; int var_39_int;
			var_14_int = var_39_int;
			func_1162(var_38_string, var_39_int);
			@SendMessage(-3, var_38_string);
			var_14_int += 1;
		}
	}
Label_842:
}


void func_301(int var_120_int, object var_121_object)
{
	object var_129_object;
	var_121_object = var_129_object;
	int var_128_int;
	func_1178(var_128_int, var_129_object);
	int var_125_int;
	var_128_int = var_125_int;
	bool var_126_bool;
	@HasInvItemProperty(var_126_bool, var_125_int, "Grass");
	if(!var_126_bool) //@nz
		var_120_int = -1;
	int var_127_int;
	@GetInvItemProperty(var_127_int, var_125_int, "Grass");
	var_127_int = var_120_int;
}


void func_434(void)
{
	int var_90_int; object var_91_object;
	int var_92_int;
	func_209(var_91_object, var_92_int);
	int var_89_int;
	var_92_int = var_89_int;
	
	for(;;) {
		if(0 < 4) {
			object var_110_object; int var_111_int;
			var_90_int = var_111_int;
			func_234(var_91_object, var_110_object, var_111_int);
			var_110_object = var_91_object;
			if(var_91_object != 0)
				@SendMessage(0, ("input0" + (var_90_int + 1)), var_91_object);
			else
				@SendMessage(32768, ("input0" + (var_90_int + 1)));
		}
		var_91_object = null;
		var_90_int += 1;
	}
	
}


void func_1075(int var_75_int)
{
	object var_86_object; int var_87_int; bool var_88_bool; bool var_89_bool;
	object var_90_object;
	func_95(var_89_bool, var_90_object);
	object var_83_object;
	var_90_object = var_83_object;
	int var_84_int;
	var_83_object->GetItemCount(var_84_int, var_75_int);
	int var_85_int = 0;
	
	for(;;) {
		if(var_85_int < 12) {
			if(var_85_int < var_84_int) {
				var_83_object->GetItem(var_86_object, var_85_int, var_75_int);
				var_83_object->GetItemAmount(var_87_int, var_85_int, var_75_int);
				bool var_94_bool; int var_95_int; int var_96_int;
				var_85_int = var_95_int;
				var_75_int = var_96_int;
				func_150(var_96_int);
				var_94_bool = var_88_bool;
				bool var_97_bool; object var_98_object;
				var_86_object = var_98_object;
				func_143(var_97_bool, var_98_object);
				var_97_bool = var_89_bool;
				if(var_88_bool != 0) {
					if(var_89_bool != 0) {
						string var_113_string; int var_114_int;
						var_85_int = var_114_int;
						func_1162(var_113_string, var_114_int);
						@SendMessage(0, var_113_string, var_86_object);
					} else {
					string var_131_string; int var_132_int;
					var_85_int = var_132_int;
					func_1162(var_131_string, var_132_int);
					@SendMessage(16384, var_131_string, var_86_object);
				}
				if(var_89_bool != 0) {
					string var_135_string; int var_136_int;
					var_85_int = var_136_int;
					func_1162(var_135_string, var_136_int);
					@SendMessage(131072, var_135_string, var_86_object);
					goto Label_1140;
				}
				string var_138_string; int var_139_int;
				var_85_int = var_139_int;
				func_1162(var_138_string, var_139_int);
				@SendMessage(0, var_138_string, var_86_object);
			}
			string var_141_string; int var_142_int;
			var_85_int = var_142_int;
			func_1162(var_141_string, var_142_int);
			@SendMessage(32768, var_141_string);
		}
		}
		goto Label_1140;

	Label_1140:
		string var_127_string; int var_128_int;
		var_85_int = var_128_int;
		func_1162(var_127_string, var_128_int);
		@SendMessage((var_87_int | 65536), var_127_string);
		var_86_object = null;
		goto Label_1157;

	Label_1157:
		var_85_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


void func_319(object var_4_object, int var_169_int, int var_170_int)
{
	int var_176_int; object var_179_object; int var_180_int;
	var_4_object->GetItemCount(var_176_int); //@t
	int var_177_int = 0;
	int var_178_int = 0;
	
	for(;;) {
		if(var_178_int < var_176_int) {
			var_4_object->GetItem(var_179_object, var_178_int); //@t
			bool var_182_bool; object var_183_object;
			var_179_object = var_183_object;
			func_290(var_182_bool, var_183_object);
			if(!var_182_bool) { //@nz
			} else {
			var_4_object->GetItemAmount(var_180_int, var_178_int); //@t
			if((var_177_int + var_180_int) > var_170_int) {
				var_178_int = var_169_int;
				return 10;
			}
			var_179_object = null;
		}
		var_169_int = -1;
		return 10;
		}
		var_178_int += 1;
	}
	
}


void func_203(bool var_329_bool)
{
	int var_330_int;
	func_209(var_329_bool, var_330_int);
	var_329_bool = var_330_int < 4;
}


void func_588(int var_0_int, int var_35_int)
{
	int var_40_int;
	var_35_int = var_40_int;
	object var_39_object;
	func_981(var_39_object, var_40_int);
	func_1075(-1);
	func_1006();
	int var_38_int = 0;
	
	while(var_38_int < 12) {
		@CreateStringVector(var_39_object);
		string var_153_string;
		func_1162(var_153_string, (((var_38_int + 12) - 1) % 12));
		var_39_object->add(var_153_string);
		string var_160_string;
		func_1162(var_160_string, (((var_38_int + 12) + 1) % 12));
		var_39_object->add(var_160_string);
		string var_168_string; int var_169_int;
		var_38_int = var_169_int;
		func_1162(var_168_string, var_169_int);
		@SendMessage(-1, var_168_string, var_39_object);
		var_39_object = null;
		var_38_int += 1;
	}
	
	func_662();
	@SetCursor("default");
	@ShowCursor();
	@CaptureKeyboard();
	@SetOwnerDraw(false);
	@SetNeedUpdate(true);
	func_153();
	@ProcessEvents();
}


void func_209(object var_4_object, int var_55_int)
{
	int var_61_int; object var_64_object; int var_65_int;
	var_4_object->GetItemCount(var_61_int); //@t
	int var_62_int = 0;
	int var_63_int = 0;
	
	for(;;) {
		if(var_63_int < var_61_int) {
			var_4_object->GetItem(var_64_object, var_63_int); //@t
			bool var_67_bool; object var_68_object;
			var_64_object = var_68_object;
			func_290(var_67_bool, var_68_object);
			if(!var_67_bool) { //@nz
			} else {
			var_4_object->GetItemAmount(var_65_int, var_63_int); //@t
			var_62_int += var_65_int;
			var_64_object = null;
		}
		var_62_int = var_55_int;
		}
		var_63_int += 1;
	}
	
}


// @pe
void func_981(int var_0_int, int var_40_int)
{
	if(var_40_int == -1)
		return 0;
	if(var_0_int == var_40_int)
		return 0;
	func_1013(var_40_int);
}


void func_470(void)
{
	object var_143_object;
	object var_144_object;
	func_265(var_143_object, var_144_object);
	var_144_object = var_143_object;
	if(var_143_object != 0)
		@SendMessage(0, "output", var_143_object);
	else
		@SendMessage(32768, "output");
	
}
EMIT "Stack[-1] = 0";


void func_348(object var_4_object, int var_242_int)
{
	int var_247_int; object var_250_object;
	var_4_object->GetItemCount(var_247_int); //@t
	int var_248_int = 0;
	int var_249_int = 0;
	
	while(var_249_int < var_247_int) {
		var_4_object->GetItem(var_250_object, var_249_int); //@t
		bool var_252_bool; object var_253_object;
		var_250_object = var_253_object;
		func_290(var_252_bool, var_253_object);
		if(!var_252_bool) //@nz
			var_249_int = var_242_int;
		var_250_object = null;
		var_249_int += 1;
	}
	
	var_242_int = -1;
}


void func_95(object var_3_object, object var_90_object)
{
	var_90_object = var_3_object;
}


void func_97(bool var_26_bool, string var_28_string)
{
	int var_30_int; int var_31_int;
	if(var_28_string == "combine") {
		bool var_34_bool;
		func_488(var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_34_bool);
		var_26_bool = true;
	}
	var_31_int = 0;
	
	while(var_31_int < 4) {
		if(var_28_string == ("input0" + (var_31_int + 1))) {
			int var_161_int;
			func_209(var_31_int, var_161_int);
			if(var_161_int > var_31_int) {
				bool var_163_bool; int var_164_int;
				var_31_int = var_164_int;
				func_371(var_30_int, var_31_int, var_163_bool, var_164_int);
			}
		}
	}
	
	if(var_28_string == "output") {
		bool var_233_bool;
		func_403(var_30_int, (var_31_int + 1), var_233_bool);
	}
	var_26_bool = false;
}


void func_995(int var_143_int)
{
	int var_147_int;
	object var_148_object;
	func_95(var_147_int, var_148_object);
	object var_146_object;
	var_148_object = var_146_object;
	var_146_object->GetProperty("money", var_147_int);
	var_147_int = var_143_int;
}
EMIT "Stack[-2] = 0";


void func_488(object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_34_bool)
{
	int var_49_int; object var_50_object; int var_51_int; float var_52_float; bool var_54_bool;
	int var_55_int;
	func_209(var_54_bool, var_55_int);
	if(var_55_int == 0) {
		var_34_bool = false;
		return 20;
	}
	object var_82_object;
	func_265(var_54_bool, var_82_object);
	if(var_82_object != 0) {
		var_34_bool = false;
		return 20;
	}
	float var_45_float = 0;
	float var_46_float = 0;
	float var_47_float = 1;
	float var_48_float = 1;
	
	for(;;) {
		int var_98_int;
		func_209(var_54_bool, var_98_int);
		if(!(0 < var_98_int)) goto Label_539;
		object var_100_object; int var_101_int;
		var_49_int = var_101_int;
		func_234(var_54_bool, var_100_object, var_101_int);
		var_100_object = var_50_object;
		int var_120_int; object var_121_object;
		var_50_object = var_121_object;
		func_301(var_120_int, var_121_object);
		var_120_int = var_51_int;
		var_6_object->get(var_52_float, var_51_int); //@t
		var_45_float += var_52_float;
		var_5_object->get(var_52_float, var_51_int); //@t
		var_46_float += var_52_float;
		var_8_object->get(var_52_float, var_51_int); //@t
		var_47_float *= var_52_float;
		var_7_object->get(var_52_float, var_51_int); //@t
		var_48_float *= var_52_float;
		var_50_object = null;
		var_49_int += 1;
	}
	
Label_539:
	var_45_float *= var_47_float;
	var_46_float *= var_48_float;
	if(var_45_float > 0) {
	} else {
			var_45_float = -var_45_float;
	}
	if(var_46_float > 0) {
	} else {
		var_46_float = -var_46_float;

	}
	if((var_45_float * 20.0) > 100)
		var_45_float = 100;
	if((var_46_float * 15.0) > 100)
		var_46_float = 100;
	object var_53_object;
	@CreateInvItem(var_53_object);
	var_53_object->SetItemName("grass_combination");
	var_53_object->SetProperty("im_inc", (var_45_float / 100.0));
	var_53_object->SetProperty("hl_inc", (-(var_46_float / 100.0)));
	var_4_object->RemoveAllItems(); //@t
	var_4_object->AddItem(var_54_bool, var_53_object, 0, 1); //@t
	var_34_bool = true;
	
}
EMIT "Stack[-2] = 0";


void func_234(object var_4_object, object var_100_object, int var_101_int)
{
	int var_108_int; object var_111_object; int var_112_int; object var_113_object;
	var_4_object->GetItemCount(var_108_int); //@t
	int var_109_int = 0;
	int var_110_int = 0;
	
	for(;;) {
		if(var_110_int < var_108_int) {
			var_4_object->GetItem(var_111_object, var_110_int); //@t
			bool var_115_bool; object var_116_object;
			var_111_object = var_116_object;
			func_290(var_115_bool, var_116_object);
			if(!var_115_bool) { //@nz
			} else {
			var_4_object->GetItemAmount(var_112_int, var_110_int); //@t
			if((var_109_int + var_112_int) > var_101_int) {
				var_111_object = var_100_object;
				return 12;
			}
			var_111_object = null;
		}
		var_113_object = null;
		var_113_object = var_100_object;
		return 12;
		}
		var_110_int += 1;
	}
	
}
EMIT "Stack[-1] = 0";


void func_1006(void)
{
	int var_143_int;
	func_995(var_143_int);
	@SendMessage(var_143_int, "money");
}


void func_371(object var_3_object, object var_4_object, bool var_163_bool, int var_164_int)
{
	int var_170_int;
	var_164_int = var_170_int;
	bool var_168_bool;
	int var_169_int;
	func_319(var_168_bool, var_169_int, var_170_int);
	int var_167_int;
	var_169_int = var_167_int;
	if(var_167_int == -1) {
		var_163_bool = false;
		return 4;
	}
	object var_189_object; int var_190_int;
	var_164_int = var_190_int;
	func_234(var_168_bool, var_189_object, var_190_int);
	var_3_object->AddItem(var_168_bool, var_189_object, 4, 1); //@t
	if(!var_168_bool) { //@nz
		var_163_bool = false;
		return 4;
	}
	var_4_object->RemoveItem(var_167_int, 1); //@t
	func_981(var_168_bool, 4);
	var_163_bool = true;
}


// @pe
void func_1013(int var_44_int)
{
	if(var_44_int != 0)
		@SendMessage(0, "button_weapon");
	else
		@SendMessage(1, "button_weapon");
	if(var_44_int != 1)
		@SendMessage(0, "button_clothes");
	else
		@SendMessage(1, "button_clothes");

	if(var_44_int != 2)
		@SendMessage(0, "button_medcine");
	else
		@SendMessage(1, "button_medcine");

	if(var_44_int != 3)
		@SendMessage(0, "button_food");
	else
		@SendMessage(1, "button_food");

	if(var_44_int != 4)
		@SendMessage(0, "button_other");
	else
		@SendMessage(1, "button_other");

	
}


