maintask task_0
{
	void init(int var_0_int, object var_1_object, int var_2_int)
	{
		@CreateWindow("inventory_base.xml", false, var_1_object);
		func_116(var_2_int);
		func_204(var_2_int, 0);
	}

	// @pe
	void OnPlayerHolsterWeapon(int var_0_int, object var_1_object, int var_2_int, int var_3_int, int var_4_int, float var_5_float)
	{
		if((var_2_int + var_5_float) < 0)
			var_2_int = 0;
		func_116(var_5_float);
	}

	// @pe
	void event_100(int var_0_int, object var_1_object, int var_2_int, int var_3_int)
	{
		@DestroyWindow();
	}

	// @pe
	void OnSee(int var_0_int, object var_1_object, int var_2_int, float var_3_float)
	{
		func_621(var_0_int);
		func_422();
		func_76();
	}

	void event_200(int var_0_int, object var_1_object, int var_2_int, int var_3_int, string var_4_string, object var_5_object)
	{
		bool var_12_bool; int var_13_int; int var_14_int; object var_15_object; int var_16_int; object var_17_object;
		var_12_bool = false;
		if(var_4_string == "button_weapon") {
			func_387(var_17_object, 0);
			var_12_bool = true;
		} else if(var_4_string == "button_clothes") {
				func_387(var_17_object, 1);
				var_12_bool = true;
		}
	Label_375:
		for(;;) {
			if(!var_12_bool) { //@nz
				bool var_56_bool; int var_57_int; string var_58_string; object var_59_object;
				var_3_int = var_57_int;
				var_4_string = var_58_string;
				var_5_object = var_59_object;
				func_18(var_56_bool, var_57_int, var_58_string, var_59_object);
				var_56_bool = var_12_bool;
			}
			if(var_12_bool != 0) {
			}
			return 12;

		}
	
		if(var_4_string == "button_medcine") {
			func_387(var_17_object, 2);
			var_12_bool = true;
		} else if(var_4_string == "button_food") {
			func_387(var_17_object, 3);
			var_12_bool = true;
		} else if(var_4_string == "button_other") {
			func_387(var_17_object, 4);
		} else if(var_4_string == "button_detector") {
		} else if(var_4_string == "button_anticeptic") {
		}
		if(var_3_int != 0) {
			@GetVariable("noinv_drop", var_13_int);
			if(var_13_int != 0)
				return 12;
		}
	
		for(;;) {
			if(!(0 < 12)) goto Label_375;
			string var_236_string; int var_237_int;
			var_14_int = var_237_int;
			func_708(var_236_string, var_237_int);
			if(var_4_string == var_236_string) {
				object var_249_object;
				func_12(var_249_object);
				var_249_object = var_15_object;
				var_15_object->GetItemCount(var_16_int, var_0_int);
				if(var_16_int > var_14_int) {
					var_15_object->GetItem(var_17_object, var_14_int, var_0_int);
					bool var_251_bool; object var_252_object;
					func_240(var_252_object);
					if(!var_251_bool) { //@nz
						bool var_254_bool; int var_255_int; bool var_256_bool;
						var_14_int = var_255_int;
						var_256_bool = var_3_int == 0;
						func_103(var_252_object, var_254_bool, var_255_int, var_256_bool);
						var_254_bool = true;
					}
					var_17_object = null;
				}
				goto Label_375;
			EMIT "Stack[-3] = 0";
			}
			var_14_int += 1;
		}
	}

}


// @pe
void func_387(int var_0_int, int var_34_int)
{
	if(var_34_int == -1)
		return 0;
	if(var_0_int == var_34_int)
		return 0;
	func_429(var_34_int);
}


void func_12(object var_84_object)
{
	object var_86_object;
	@GetPlayerContainer(var_86_object);
	var_86_object = var_84_object;
}
EMIT "Stack[-1] = 0";


void func_401(int var_134_int)
{
	object var_139_object;
	func_12(var_139_object);
	object var_137_object;
	var_139_object = var_137_object;
	int var_138_int;
	var_137_object->GetProperty("money", var_138_int);
	var_138_int = var_134_int;
}
EMIT "Stack[-2] = 0";


void func_18(int var_2_int, bool var_56_bool, int var_57_int, string var_58_string)
{
	int var_63_int; object var_64_object; int var_65_int;
	
	while(0 < 4) {
		string var_68_string; int var_69_int;
		var_63_int = var_69_int;
		func_724(var_68_string, var_69_int);
		if(var_58_string == var_68_string) {
			int var_81_int; bool var_82_bool;
			var_63_int = var_81_int;
			var_82_bool = var_57_int == 0;
			func_87(var_81_int, var_82_bool);
			var_56_bool = true;
			return 6;
		}
		var_63_int += 1;
	}
	
	if(var_58_string == "scrollbar") {
		@GetContainer(var_64_object);
		var_64_object->GetItemCount(var_65_int);
		if((((0.01 * (var_65_int - 4)) * var_57_int) + 0.5) < 0)
			var_2_int = 0;
		func_157(var_65_int);
		var_56_bool = true;
		return 6;
	EMIT "Stack[-2] = 0";
	}
	var_56_bool = false;
}


void func_412(int var_136_int)
{
	object var_139_object;
	func_12(var_139_object);
	object var_138_object;
	var_139_object = var_138_object;
	var_138_object->SetProperty("money", var_136_int);
}
EMIT "Stack[-1] = 0";


void func_157(int var_2_int)
{
	object var_151_object; object var_154_object; int var_155_int; int var_156_int;
	@GetContainer(var_151_object);
	int var_152_int;
	var_151_object->GetItemCount(var_152_int);
	int var_153_int = var_2_int;
	
	for(;;) {
		if(var_153_int < (var_2_int + 4)) {
			if(var_153_int < var_152_int) {
				var_151_object->GetItem(var_154_object, var_153_int);
				var_154_object->GetItemID(var_155_int);
				var_151_object->GetItemAmount(var_156_int, var_153_int);
				string var_162_string;
				func_724(var_162_string, (var_153_int - var_2_int));
				@SendMessage(0, var_162_string, var_154_object);
				string var_176_string;
				func_724(var_176_string, (var_153_int - var_2_int));
				@SendMessage((var_156_int | 65536), var_176_string);
				var_154_object = null;
			} else {
			string var_180_string;
			func_724(var_180_string, (var_153_int - var_2_int));
			@SendMessage(32768, var_180_string);
		}
		}
		var_153_int += 1;
	}
	
}
EMIT "Stack[-6] = 0";


void func_422(void)
{
	int var_134_int;
	func_401(var_134_int);
	@SendMessage(var_134_int, "money");
}


// @pe
void func_429(int var_38_int)
{
	if(var_38_int != 0)
		@SendMessage(0, "button_weapon");
	else
		@SendMessage(1, "button_weapon");
	if(var_38_int != 1)
		@SendMessage(0, "button_clothes");
	else
		@SendMessage(1, "button_clothes");

	if(var_38_int != 2)
		@SendMessage(0, "button_medcine");
	else
		@SendMessage(1, "button_medcine");

	if(var_38_int != 3)
		@SendMessage(0, "button_food");
	else
		@SendMessage(1, "button_food");

	if(var_38_int != 4)
		@SendMessage(0, "button_other");
	else
		@SendMessage(1, "button_other");

	
}


void func_571(int var_0_int, bool var_258_bool, int var_259_int, int var_260_int)
{
	int var_276_int; bool var_277_bool; bool var_278_bool;
	object var_279_object;
	func_12(var_279_object);
	object var_271_object;
	var_279_object = var_271_object;
	object var_270_object;
	@GetContainer(var_270_object);
	int var_273_int;
	var_271_object->GetItemCount(var_273_int, var_259_int);
	if(var_273_int <= var_260_int) {
		var_258_bool = false;
		return 18;
	}
	int var_274_int;
	var_271_object->GetItemAmount(var_274_int, var_260_int, var_259_int);
	object var_272_object;
	var_271_object->GetItem(var_272_object, var_260_int, var_259_int);
	bool var_275_bool;
	var_270_object->AddItem(var_275_bool, var_272_object, 0, 1);
	if(!var_275_bool) { //@nz
		var_258_bool = false;
		return 18;
	}
	if(var_0_int == 0) {
		var_272_object->GetItemID(var_276_int);
		@HasInvItemProperty(var_277_bool, var_276_int, "Weapon");
		if(var_277_bool != 0) {
			var_271_object->IsItemSelected(var_278_bool, var_260_int, var_0_int);
			if(var_278_bool != 0)
				@SetPlayerHandsItem(-1);
		}
	}
	var_271_object->RemoveItem(var_260_int, 1, var_259_int);
	var_258_bool = true;
}
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


// @pe
void func_708(string var_104_string, int var_105_int)
{
	if((var_105_int + 1) < 10)
		var_104_string = "slot0" + (var_105_int + 1);
	var_104_string = "slot" + (var_105_int + 1);
}


// @pe
void func_204(int var_0_int, int var_33_int)
{
	int var_34_int;
	func_387(var_34_int, var_34_int);
	func_621(-1);
	func_422();
	@SetCursor("default");
	@ShowCursor();
	@CaptureKeyboard();
	@SetOwnerDraw(false);
	@SetNeedUpdate(true);
	func_80();
	@ProcessEvents();
}


// @pe
void func_76(void)
{
	func_157(var_3_float);
}


// @pe
void func_80(void)
{
	func_116(var_33_int);
	func_157(var_33_int);
}


// @pe
void func_724(string var_162_string, int var_163_int)
{
	if((var_163_int + 1) < 10)
		var_162_string = "cslot0" + (var_163_int + 1);
	var_162_string = "cslot" + (var_163_int + 1);
}


void func_87(int var_2_int, int var_81_int)
{
	bool var_85_bool;
	bool var_88_bool;
	var_85_bool = var_88_bool;
	int var_87_int;
	func_491(var_87_int, var_88_bool, (var_81_int + var_2_int));
	int var_86_int;
	var_87_int = var_86_int;
	func_387(var_85_bool, var_86_int);
	if(!var_85_bool) { //@nz
	}
	func_116(var_85_bool);
}


void func_740(int var_124_int)
{
	int var_126_int;
	@GetInvItemByName(var_126_int, "Money");
	var_126_int = var_124_int;
}


// @pe
void func_103(int var_0_int, int var_2_int, bool var_254_bool, int var_255_int)
{
	int var_260_int;
	var_255_int = var_260_int;
	bool var_258_bool;
	func_571(var_256_bool, var_258_bool, var_0_int, var_260_int);
	var_2_int += 1;
	func_116(var_256_bool);
	var_254_bool = true;
}


void func_491(int var_87_int, bool var_88_bool, int var_89_int)
{
	int var_109_int;
	var_88_bool = false;
	if(var_89_int == -1) {
		var_87_int = -1;
		return 22;
	}
	object var_114_object;
	func_12(var_114_object);
	object var_102_object;
	var_114_object = var_102_object;
	object var_101_object;
	@GetContainer(var_101_object);
	int var_104_int;
	var_101_object->GetItemCount(var_104_int);
	if(var_104_int <= var_89_int) {
		var_87_int = -1;
		return 22;
	}
	int var_105_int;
	var_101_object->GetItemAmount(var_105_int, var_89_int);
	if(var_105_int == 0) {
		var_87_int = -1;
		return 22;
	}
	object var_103_object;
	var_101_object->GetItem(var_103_object, var_89_int);
	int var_106_int;
	var_103_object->GetItemID(var_106_int);
	bool var_107_bool = false;
	var_103_object->HasProperty(var_107_bool, "Organ");
	if(var_107_bool != 0)
		var_103_object->RemoveProperty("Organ");
	int var_108_int;
	@GetInvItemProperty(var_108_int, var_106_int, "Category");
	int var_124_int;
	func_740(var_124_int);
	if(var_106_int == var_124_int) {
		int var_129_int;
		func_401(var_129_int);
		var_129_int = var_109_int;
		var_109_int += var_105_int;
		int var_136_int;
		var_109_int = var_136_int;
		func_412(var_136_int);
		var_101_object->RemoveItem(var_89_int, var_105_int);
		func_422();
		var_88_bool = true;
		var_87_int = -1;
		return 22;
	}
	bool var_111_bool;
	var_102_object->AddItem(var_111_bool, var_103_object, var_108_int, 1);
	if(!var_111_bool) { //@nz
		var_108_int = var_87_int;
		return 22;
	}
	var_88_bool = true;
	var_101_object->RemoveItem(var_89_int, 1);
	var_108_int = var_87_int;
}
EMIT "Stack[-9] = 0";
EMIT "Stack[-10] = 0";
EMIT "Stack[-11] = 0";


void func_621(int var_69_int)
{
	object var_80_object; int var_81_int; bool var_82_bool; bool var_83_bool;
	object var_84_object;
	func_12(var_84_object);
	object var_77_object;
	var_84_object = var_77_object;
	int var_78_int;
	var_77_object->GetItemCount(var_78_int, var_69_int);
	int var_79_int = 0;
	
	for(;;) {
		if(var_79_int < 12) {
			if(var_79_int < var_78_int) {
				var_77_object->GetItem(var_80_object, var_79_int, var_69_int);
				var_77_object->GetItemAmount(var_81_int, var_79_int, var_69_int);
				bool var_90_bool; int var_91_int; int var_92_int;
				var_79_int = var_91_int;
				var_69_int = var_92_int;
				func_243(var_90_bool, var_91_int, var_92_int);
				var_90_bool = var_82_bool;
				bool var_99_bool; object var_100_object;
				var_80_object = var_100_object;
				func_240(var_100_object);
				var_99_bool = var_83_bool;
				if(var_82_bool != 0) {
					if(var_83_bool != 0) {
						string var_104_string; int var_105_int;
						var_79_int = var_105_int;
						func_708(var_104_string, var_105_int);
						@SendMessage(0, var_104_string, var_80_object);
					} else {
					string var_122_string; int var_123_int;
					var_79_int = var_123_int;
					func_708(var_122_string, var_123_int);
					@SendMessage(16384, var_122_string, var_80_object);
				}
				if(var_83_bool != 0) {
					string var_126_string; int var_127_int;
					var_79_int = var_127_int;
					func_708(var_126_string, var_127_int);
					@SendMessage(131072, var_126_string, var_80_object);
					goto Label_686;
				}
				string var_129_string; int var_130_int;
				var_79_int = var_130_int;
				func_708(var_129_string, var_130_int);
				@SendMessage(0, var_129_string, var_80_object);
			}
			string var_132_string; int var_133_int;
			var_79_int = var_133_int;
			func_708(var_132_string, var_133_int);
			@SendMessage(32768, var_132_string);
		}
		}
		goto Label_686;

	Label_686:
		string var_118_string; int var_119_int;
		var_79_int = var_119_int;
		func_708(var_118_string, var_119_int);
		@SendMessage((var_81_int | 65536), var_118_string);
		var_80_object = null;
		goto Label_703;

	Label_703:
		var_79_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


// @pe
void func_240(bool var_99_bool)
{
	var_99_bool = false;
}


void func_243(bool var_90_bool, int var_91_int, int var_92_int)
{
	object var_95_object;
	func_12(var_95_object);
	object var_96_object;
	func_12(var_96_object);
	object var_97_object;
	func_12(var_97_object);
	object var_98_object;
	func_12(var_98_object);
	bool var_94_bool;
	var_95_object->IsItemSelected(var_94_bool, var_91_int, var_92_int);
	var_94_bool = var_90_bool;
}


void func_116(int var_2_int)
{
	object var_9_object;
	@GetContainer(var_9_object);
	int var_10_int;
	var_9_object->GetItemCount(var_10_int);
	if(var_10_int <= 4) {
		@SendMessage(16384, "scrollbar");
		var_2_int = 0;
	} else if((var_2_int + 4) > var_10_int) {
			var_2_int -= ((var_2_int + 4) - var_10_int);
			@SendMessage(((var_2_int * 100) / (var_10_int - 4)), "scrollbar");
	}
	
	@SendMessage(((var_2_int * 100) / (var_10_int - 4)), "scrollbar");
}
EMIT "Stack[-4] = 0";


