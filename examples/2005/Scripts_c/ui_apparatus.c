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
	void OnSee(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, float var_9_float)
	{
		func_845(var_0_int);
		func_776();
		func_136();
	}

	void event_200(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, int var_9_int, string var_10_string, object var_11_object)
	{
		bool var_18_bool; int var_19_int; int var_20_int; object var_21_object; int var_22_int; object var_23_object;
		var_18_bool = false;
		if(var_10_string == "button_weapon") {
			func_751(var_23_object, 0);
			var_18_bool = true;
		} else if(var_10_string == "button_clothes") {
				func_751(var_23_object, 1);
				var_18_bool = true;
		}
	Label_739:
		for(;;) {
			if(!var_18_bool) { //@nz
				bool var_62_bool; int var_63_int; string var_64_string; object var_65_object;
				var_9_int = var_63_int;
				var_10_string = var_64_string;
				var_11_object = var_65_object;
				func_97(var_64_string, var_65_object);
				var_62_bool = var_18_bool;
			}
			if(var_18_bool != 0) {
			}
			return 12;

		}
	
		if(var_10_string == "button_medcine") {
			func_751(var_23_object, 2);
			var_18_bool = true;
		} else if(var_10_string == "button_food") {
			func_751(var_23_object, 3);
			var_18_bool = true;
		} else if(var_10_string == "button_other") {
			func_751(var_23_object, 4);
		} else if(var_10_string == "button_detector") {
		} else if(var_10_string == "button_anticeptic") {
		}
		if(var_9_int != 0) {
			@GetVariable("noinv_drop", var_19_int);
			if(var_19_int != 0)
				return 12;
		}
	
		for(;;) {
			if(!(0 < 12)) goto Label_739;
			string var_286_string; int var_287_int;
			var_20_int = var_287_int;
			func_932(var_286_string, var_287_int);
			if(var_10_string == var_286_string) {
				object var_299_object;
				func_95(var_23_object, var_299_object);
				var_299_object = var_21_object;
				var_21_object->GetItemCount(var_22_int, var_0_int);
				if(var_22_int > var_20_int) {
					var_21_object->GetItem(var_23_object, var_20_int, var_0_int);
					bool var_301_bool; object var_302_object;
					var_23_object = var_302_object;
					func_143(var_301_bool, var_302_object);
					if(!var_301_bool) { //@nz
						bool var_306_bool; int var_307_int; bool var_308_bool;
						var_20_int = var_307_int;
						var_308_bool = var_9_int == 0;
						func_154(var_306_bool, var_307_int, var_308_bool);
						var_306_bool = true;
					}
					var_23_object = null;
				}
				goto Label_739;
			EMIT "Stack[-3] = 0";
			}
			var_20_int += 1;
		}
	}

}


void func_776(void)
{
	int var_139_int;
	func_765(var_139_int);
	@SendMessage(var_139_int, "money");
}


void func_265(object var_4_object, object var_118_object)
{
	int var_124_int; object var_127_object;
	var_4_object->GetItemCount(var_124_int); //@t
	int var_125_int = 0;
	int var_126_int = 0;
	
	while(var_126_int < var_124_int) {
		var_4_object->GetItem(var_127_object, var_126_int); //@t
		bool var_130_bool; object var_131_object;
		var_127_object = var_131_object;
		func_290(var_130_bool, var_131_object);
		if(!var_130_bool) //@nz
			var_127_object = var_118_object;
		var_127_object = null;
		var_126_int += 1;
	}
	
	object var_128_object = null;
	var_128_object = var_118_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_136(void)
{
	func_434();
	func_470();
}


void func_203(bool var_323_bool)
{
	int var_324_int;
	func_209(var_323_bool, var_324_int);
	var_323_bool = var_324_int < 4;
}


// @pe
void func_588(int var_0_int, int var_35_int)
{
	int var_36_int;
	func_751(var_36_int, var_36_int);
	func_845(-1);
	func_776();
	@SetCursor("default");
	@ShowCursor();
	@CaptureKeyboard();
	@SetOwnerDraw(false);
	@SetNeedUpdate(true);
	func_153();
	@ProcessEvents();
}


void func_845(int var_71_int)
{
	object var_82_object; int var_83_int; bool var_84_bool; bool var_85_bool;
	object var_86_object;
	func_95(var_85_bool, var_86_object);
	object var_79_object;
	var_86_object = var_79_object;
	int var_80_int;
	var_79_object->GetItemCount(var_80_int, var_71_int);
	int var_81_int = 0;
	
	for(;;) {
		if(var_81_int < 12) {
			if(var_81_int < var_80_int) {
				var_79_object->GetItem(var_82_object, var_81_int, var_71_int);
				var_79_object->GetItemAmount(var_83_int, var_81_int, var_71_int);
				bool var_90_bool; int var_91_int; int var_92_int;
				var_81_int = var_91_int;
				var_71_int = var_92_int;
				func_150(var_92_int);
				var_90_bool = var_84_bool;
				bool var_93_bool; object var_94_object;
				var_82_object = var_94_object;
				func_143(var_93_bool, var_94_object);
				var_93_bool = var_85_bool;
				if(var_84_bool != 0) {
					if(var_85_bool != 0) {
						string var_109_string; int var_110_int;
						var_81_int = var_110_int;
						func_932(var_109_string, var_110_int);
						@SendMessage(0, var_109_string, var_82_object);
					} else {
					string var_127_string; int var_128_int;
					var_81_int = var_128_int;
					func_932(var_127_string, var_128_int);
					@SendMessage(16384, var_127_string, var_82_object);
				}
				if(var_85_bool != 0) {
					string var_131_string; int var_132_int;
					var_81_int = var_132_int;
					func_932(var_131_string, var_132_int);
					@SendMessage(131072, var_131_string, var_82_object);
					goto Label_910;
				}
				string var_134_string; int var_135_int;
				var_81_int = var_135_int;
				func_932(var_134_string, var_135_int);
				@SendMessage(0, var_134_string, var_82_object);
			}
			string var_137_string; int var_138_int;
			var_81_int = var_138_int;
			func_932(var_137_string, var_138_int);
			@SendMessage(32768, var_137_string);
		}
		}
		goto Label_910;

	Label_910:
		string var_123_string; int var_124_int;
		var_81_int = var_124_int;
		func_932(var_123_string, var_124_int);
		@SendMessage((var_83_int | 65536), var_123_string);
		var_82_object = null;
		goto Label_927;

	Label_927:
		var_81_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


// @pe
void func_783(int var_40_int)
{
	if(var_40_int != 0)
		@SendMessage(0, "button_weapon");
	else
		@SendMessage(1, "button_weapon");
	if(var_40_int != 1)
		@SendMessage(0, "button_clothes");
	else
		@SendMessage(1, "button_clothes");

	if(var_40_int != 2)
		@SendMessage(0, "button_medcine");
	else
		@SendMessage(1, "button_medcine");

	if(var_40_int != 3)
		@SendMessage(0, "button_food");
	else
		@SendMessage(1, "button_food");

	if(var_40_int != 4)
		@SendMessage(0, "button_other");
	else
		@SendMessage(1, "button_other");

	
}


// @pe
void func_143(bool var_93_bool, object var_94_object)
{
	object var_96_object;
	var_94_object = var_96_object;
	bool var_95_bool;
	func_290(var_95_bool, var_96_object);
	var_93_bool = !var_95_bool;
}


void func_209(object var_4_object, int var_91_int)
{
	int var_97_int; object var_100_object; int var_101_int;
	var_4_object->GetItemCount(var_97_int); //@t
	int var_98_int = 0;
	int var_99_int = 0;
	
	for(;;) {
		if(var_99_int < var_97_int) {
			var_4_object->GetItem(var_100_object, var_99_int); //@t
			bool var_103_bool; object var_104_object;
			var_100_object = var_104_object;
			func_290(var_103_bool, var_104_object);
			if(!var_103_bool) { //@nz
			} else {
			var_4_object->GetItemAmount(var_101_int, var_99_int); //@t
			var_98_int += var_101_int;
			var_100_object = null;
		}
		var_98_int = var_91_int;
		}
		var_99_int += 1;
	}
	
}


void func_403(object var_3_object, object var_4_object, bool var_235_bool)
{
	bool var_241_bool;
	object var_242_object;
	func_265(var_241_bool, var_242_object);
	object var_239_object;
	var_242_object = var_239_object;
	if(!var_239_object) { //@nz
		var_235_bool = false;
		return 6;
	}
	int var_244_int;
	func_348(var_241_bool, var_244_int);
	int var_240_int;
	var_244_int = var_240_int;
	var_3_object->AddItem(var_241_bool, var_239_object, 2, 1); //@t
	if(!var_241_bool) { //@nz
		var_235_bool = false;
		return 6;
	}
	var_4_object->RemoveItem(var_240_int, 1); //@t
	func_751(var_241_bool, 2);
	var_235_bool = true;
}
EMIT "Stack[-3] = 0";


// @pe
void func_150(bool var_90_bool)
{
	var_90_bool = false;
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


void func_153(void)
{
}


// @pe
void func_154(bool var_306_bool, int var_307_int, bool var_308_bool)
{
	if(var_308_bool != 0) {
		bool var_311_bool; int var_312_int;
		func_165(var_312_int, var_308_bool, var_311_bool, var_312_int);
		var_306_bool = true;
		return 0;
	}
	var_306_bool = false;
}


void func_348(object var_4_object, int var_244_int)
{
	int var_249_int; object var_252_object;
	var_4_object->GetItemCount(var_249_int); //@t
	int var_250_int = 0;
	int var_251_int = 0;
	
	while(var_251_int < var_249_int) {
		var_4_object->GetItem(var_252_object, var_251_int); //@t
		bool var_254_bool; object var_255_object;
		var_252_object = var_255_object;
		func_290(var_254_bool, var_255_object);
		if(!var_254_bool) //@nz
			var_251_int = var_244_int;
		var_252_object = null;
		var_251_int += 1;
	}
	
	var_244_int = -1;
}


void func_95(object var_3_object, object var_86_object)
{
	var_86_object = var_3_object;
}


void func_97(bool var_62_bool, string var_64_string)
{
	int var_66_int; int var_67_int;
	if(var_64_string == "combine") {
		bool var_70_bool;
		func_488(var_63_int, var_64_string, var_65_object, var_66_int, var_67_int, var_70_bool);
		var_62_bool = true;
	}
	var_67_int = 0;
	
	while(var_67_int < 4) {
		if(var_64_string == ("input0" + (var_67_int + 1))) {
			int var_197_int;
			func_209(var_67_int, var_197_int);
			if(var_197_int > var_67_int) {
				bool var_199_bool; int var_200_int;
				var_67_int = var_200_int;
				func_371(var_66_int, var_67_int, var_199_bool, var_200_int);
			}
		}
	}
	
	if(var_64_string == "output") {
		bool var_235_bool;
		func_403(var_66_int, (var_67_int + 1), var_235_bool);
	}
	var_62_bool = false;
}


void func_290(bool var_95_bool, object var_96_object)
{
	object var_102_object;
	var_96_object = var_102_object;
	int var_101_int;
	func_948(var_101_int, var_102_object);
	int var_99_int;
	var_101_int = var_99_int;
	bool var_100_bool;
	@HasInvItemProperty(var_100_bool, var_99_int, "Grass");
	var_100_bool = var_95_bool;
}


// @pe
void func_932(string var_109_string, int var_110_int)
{
	if((var_110_int + 1) < 10)
		var_109_string = "slot0" + (var_110_int + 1);
	var_109_string = "slot" + (var_110_int + 1);
}


void func_165(object var_3_object, object var_4_object, bool var_311_bool, int var_312_int)
{
	bool var_323_bool;
	func_203(var_323_bool);
	if(!var_323_bool) { //@nz
		var_311_bool = false;
		return 10;
	}
	int var_319_int;
	var_3_object->GetItemCount(var_319_int, 4); //@t
	if(var_319_int <= var_312_int) {
		var_311_bool = false;
		return 10;
	}
	int var_320_int;
	var_3_object->GetItemAmount(var_320_int, var_312_int, 4); //@t
	object var_318_object;
	var_3_object->GetItem(var_318_object, var_312_int, 4); //@t
	int var_321_int;
	var_318_object->GetItemID(var_321_int);
	bool var_322_bool;
	var_4_object->AddItem(var_322_bool, var_318_object, 0, 1); //@t
	if(!var_322_bool) { //@nz
		var_311_bool = false;
		return 10;
	}
	var_3_object->RemoveItem(var_312_int, 1, 4); //@t
	var_311_bool = true;
}
EMIT "Stack[-5] = 0";


void func_488(object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_70_bool)
{
	int var_85_int; object var_86_object; int var_87_int; float var_88_float; bool var_90_bool;
	int var_91_int;
	func_209(var_90_bool, var_91_int);
	if(var_91_int == 0) {
		var_70_bool = false;
		return 20;
	}
	object var_118_object;
	func_265(var_90_bool, var_118_object);
	if(var_118_object != 0) {
		var_70_bool = false;
		return 20;
	}
	float var_81_float = 0;
	float var_82_float = 0;
	float var_83_float = 1;
	float var_84_float = 1;
	
	for(;;) {
		int var_134_int;
		func_209(var_90_bool, var_134_int);
		if(!(0 < var_134_int)) goto Label_539;
		object var_136_object; int var_137_int;
		var_85_int = var_137_int;
		func_234(var_90_bool, var_136_object, var_137_int);
		var_136_object = var_86_object;
		int var_156_int; object var_157_object;
		var_86_object = var_157_object;
		func_301(var_156_int, var_157_object);
		var_156_int = var_87_int;
		var_6_object->get(var_88_float, var_87_int); //@t
		var_81_float += var_88_float;
		var_5_object->get(var_88_float, var_87_int); //@t
		var_82_float += var_88_float;
		var_8_object->get(var_88_float, var_87_int); //@t
		var_83_float *= var_88_float;
		var_7_object->get(var_88_float, var_87_int); //@t
		var_84_float *= var_88_float;
		var_86_object = null;
		var_85_int += 1;
	}
	
Label_539:
	var_81_float *= var_83_float;
	var_82_float *= var_84_float;
	if(var_81_float > 0) {
	} else {
			var_81_float = -var_81_float;
	}
	if(var_82_float > 0) {
	} else {
		var_82_float = -var_82_float;

	}
	if((var_81_float * 20.0) > 100)
		var_81_float = 100;
	if((var_82_float * 15.0) > 100)
		var_82_float = 100;
	object var_89_object;
	@CreateInvItem(var_89_object);
	var_89_object->SetItemName("grass_combination");
	var_89_object->SetProperty("im_inc", (var_81_float / 100.0));
	var_89_object->SetProperty("hl_inc", (-(var_82_float / 100.0)));
	var_4_object->RemoveAllItems(); //@t
	var_4_object->AddItem(var_90_bool, var_89_object, 0, 1); //@t
	var_70_bool = true;
	
}
EMIT "Stack[-2] = 0";


void func_234(object var_4_object, object var_136_object, int var_137_int)
{
	int var_144_int; object var_147_object; int var_148_int; object var_149_object;
	var_4_object->GetItemCount(var_144_int); //@t
	int var_145_int = 0;
	int var_146_int = 0;
	
	for(;;) {
		if(var_146_int < var_144_int) {
			var_4_object->GetItem(var_147_object, var_146_int); //@t
			bool var_151_bool; object var_152_object;
			var_147_object = var_152_object;
			func_290(var_151_bool, var_152_object);
			if(!var_151_bool) { //@nz
			} else {
			var_4_object->GetItemAmount(var_148_int, var_146_int); //@t
			if((var_145_int + var_148_int) > var_137_int) {
				var_147_object = var_136_object;
				return 12;
			}
			var_147_object = null;
		}
		var_149_object = null;
		var_149_object = var_136_object;
		return 12;
		}
		var_146_int += 1;
	}
	
}
EMIT "Stack[-1] = 0";


void func_301(int var_156_int, object var_157_object)
{
	object var_165_object;
	var_157_object = var_165_object;
	int var_164_int;
	func_948(var_164_int, var_165_object);
	int var_161_int;
	var_164_int = var_161_int;
	bool var_162_bool;
	@HasInvItemProperty(var_162_bool, var_161_int, "Grass");
	if(!var_162_bool) //@nz
		var_156_int = -1;
	int var_163_int;
	@GetInvItemProperty(var_163_int, var_161_int, "Grass");
	var_163_int = var_156_int;
}


// @pe
void func_751(int var_0_int, int var_36_int)
{
	if(var_36_int == -1)
		return 0;
	if(var_0_int == var_36_int)
		return 0;
	func_783(var_36_int);
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


void func_371(object var_3_object, object var_4_object, bool var_199_bool, int var_200_int)
{
	int var_206_int;
	var_200_int = var_206_int;
	bool var_204_bool;
	int var_205_int;
	func_319(var_204_bool, var_205_int, var_206_int);
	int var_203_int;
	var_205_int = var_203_int;
	if(var_203_int == -1) {
		var_199_bool = false;
		return 4;
	}
	object var_225_object; int var_226_int;
	var_200_int = var_226_int;
	func_234(var_204_bool, var_225_object, var_226_int);
	var_3_object->AddItem(var_204_bool, var_225_object, 4, 1); //@t
	if(!var_204_bool) { //@nz
		var_199_bool = false;
		return 4;
	}
	var_4_object->RemoveItem(var_203_int, 1); //@t
	func_751(var_204_bool, 4);
	var_199_bool = true;
}


void func_948(int var_101_int, object var_102_object)
{
	int var_104_int;
	var_102_object->GetItemID(var_104_int);
	var_104_int = var_101_int;
}


void func_765(int var_139_int)
{
	int var_143_int;
	object var_144_object;
	func_95(var_143_int, var_144_object);
	object var_142_object;
	var_144_object = var_142_object;
	var_142_object->GetProperty("money", var_143_int);
	var_143_int = var_139_int;
}
EMIT "Stack[-2] = 0";


void func_319(object var_4_object, int var_205_int, int var_206_int)
{
	int var_212_int; object var_215_object; int var_216_int;
	var_4_object->GetItemCount(var_212_int); //@t
	int var_213_int = 0;
	int var_214_int = 0;
	
	for(;;) {
		if(var_214_int < var_212_int) {
			var_4_object->GetItem(var_215_object, var_214_int); //@t
			bool var_218_bool; object var_219_object;
			var_215_object = var_219_object;
			func_290(var_218_bool, var_219_object);
			if(!var_218_bool) { //@nz
			} else {
			var_4_object->GetItemAmount(var_216_int, var_214_int); //@t
			if((var_213_int + var_216_int) > var_206_int) {
				var_214_int = var_205_int;
				return 10;
			}
			var_215_object = null;
		}
		var_205_int = -1;
		return 10;
		}
		var_214_int += 1;
	}
	
}


