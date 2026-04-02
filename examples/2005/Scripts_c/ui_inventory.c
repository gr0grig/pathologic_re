maintask task_0
{
	void init(int var_0_int, object var_1_object)
	{
		@CreateWindow("inventory_base.xml", false, var_1_object);
		func_157(var_1_object, 0);
	}

	// @pe
	void event_100(int var_0_int, object var_1_object, int var_2_int)
	{
		@DestroyWindow();
	}

	// @pe
	void OnSee(int var_0_int, object var_1_object, float var_2_float)
	{
		func_484(var_0_int);
		func_365();
		func_18();
	}

	void event_200(int var_0_int, object var_1_object, int var_2_int, string var_3_string, object var_4_object)
	{
		bool var_11_bool; int var_12_int; int var_13_int; object var_14_object; int var_15_int; object var_16_object;
		var_11_bool = false;
		if(var_3_string == "button_weapon") {
			func_340(var_16_object, 0);
			var_11_bool = true;
		} else if(var_3_string == "button_clothes") {
				func_340(var_16_object, 1);
				var_11_bool = true;
		}
	Label_328:
		for(;;) {
			if(!var_11_bool) { //@nz
				bool var_55_bool; int var_56_int; string var_57_string; object var_58_object;
				var_2_int = var_56_int;
				var_3_string = var_57_string;
				var_4_object = var_58_object;
				func_15(var_58_object);
				var_55_bool = var_11_bool;
			}
			if(var_11_bool != 0) {
			}
			return 12;

		}
	
		if(var_3_string == "button_medcine") {
			func_340(var_16_object, 2);
			var_11_bool = true;
		} else if(var_3_string == "button_food") {
			func_340(var_16_object, 3);
			var_11_bool = true;
		} else if(var_3_string == "button_other") {
			func_340(var_16_object, 4);
		} else if(var_3_string == "button_detector") {
		} else if(var_3_string == "button_anticeptic") {
		}
		if(var_2_int != 0) {
			@GetVariable("noinv_drop", var_12_int);
			if(var_12_int != 0)
				return 12;
		}
	
		for(;;) {
			if(!(0 < 12)) goto Label_328;
			string var_82_string; int var_83_int;
			var_13_int = var_83_int;
			func_571(var_82_string, var_83_int);
			if(var_3_string == var_82_string) {
				object var_95_object;
				func_9(var_95_object);
				var_95_object = var_14_object;
				var_14_object->GetItemCount(var_15_int, var_0_int);
				if(var_15_int > var_13_int) {
					var_14_object->GetItem(var_16_object, var_13_int, var_0_int);
					bool var_99_bool; object var_100_object;
					func_193(var_100_object);
					if(!var_99_bool) { //@nz
						bool var_102_bool; int var_103_int; bool var_104_bool;
						var_13_int = var_103_int;
						var_104_bool = var_2_int == 0;
						func_20(var_100_object, var_102_bool, var_103_int, var_104_bool);
						var_102_bool = true;
					}
					var_16_object = null;
				}
				goto Label_328;
			EMIT "Stack[-3] = 0";
			}
			var_13_int += 1;
		}
	}

}


// @pe
void func_193(bool var_70_bool)
{
	var_70_bool = false;
}


void func_354(int var_105_int)
{
	object var_110_object;
	func_9(var_110_object);
	object var_108_object;
	var_110_object = var_108_object;
	int var_109_int;
	var_108_object->GetProperty("money", var_109_int);
	var_109_int = var_105_int;
}
EMIT "Stack[-2] = 0";


void func_35(int var_0_int, int var_107_int)
{
	bool var_132_bool; int var_133_int; bool var_134_bool; int var_135_int; int var_136_int; bool var_137_bool; object var_138_object; int var_139_int; bool var_140_bool; int var_141_int; bool var_142_bool;
	object var_144_object;
	func_9(var_144_object);
	object var_126_object;
	var_144_object = var_126_object;
	int var_127_int;
	var_126_object->GetItemCount(var_127_int, var_0_int);
	if(var_107_int >= var_127_int)
		return 36;
	object var_128_object;
	var_126_object->GetItem(var_128_object, var_107_int, var_0_int);
	int var_129_int;
	var_128_object->GetItemID(var_129_int);
	int var_130_int;
	var_126_object->GetItemAmount(var_130_int, var_107_int, var_0_int);
	bool var_131_bool;
	var_126_object->IsItemSelected(var_131_bool, var_107_int, var_0_int);
	if(var_0_int == 0) {
		@HasInvItemProperty(var_132_bool, var_129_int, "Weapon");
		if(!var_132_bool) //@nz
			return 36;
		if(var_131_bool != 0) {
			var_126_object->SelectItem(var_107_int, false, var_0_int);
			@SetPlayerHandsItem(-1);
		} else {
				@SetPlayerHandsItem(var_129_int);
				var_133_int = 0;

				while(var_133_int < var_127_int) {
					var_126_object->SelectItem(var_133_int, false, var_0_int);
					var_133_int += 1;
				}

				var_126_object->SelectItem(var_107_int, true, var_0_int);
	}
			if(var_0_int == 1) {
				@HasInvItemProperty(var_134_bool, var_129_int, "Group");
				if(!var_134_bool) //@nz
					return 36;
				@GetInvItemProperty(var_135_int, var_129_int, "Group");
				if(var_131_bool != 0) {
					var_126_object->SelectItem(var_107_int, false, var_0_int);
				} else {
				var_136_int = 0;

				for(;;) {
					if(var_136_int < var_127_int) {
						var_126_object->IsItemSelected(var_137_bool, var_136_int, var_0_int);
						if(!var_137_bool) { //@nz
						} else {
						var_126_object->GetItem(var_138_object, var_136_int, var_0_int);
						var_138_object->GetItemID(var_139_int);
						@HasInvItemProperty(var_140_bool, var_139_int, "Group");
						if(!var_140_bool) { //@nz
							goto Label_132;
						}
						@GetInvItemProperty(var_141_int, var_139_int, "Group");
						if(var_141_int == var_135_int)
							var_126_object->SelectItem(var_136_int, false, var_0_int);
						else
							var_138_object = null;
						@UseItem(var_107_int, var_0_int, var_142_bool);
						if(var_142_bool == 0) goto Label_154;
						var_130_int += -1;
						if(var_130_int == 0) {
							var_126_object->RemoveItem(var_107_int, 1, var_0_int);
							goto Label_154;
						}
						var_126_object->SetItemAmount(var_130_int, var_107_int, var_0_int);
					}
				}
				var_126_object->SelectItem(var_107_int, true, var_0_int);
				}
			Label_132:
				var_136_int += 1;
			}
			}
	}
	goto Label_154;
	
Label_154:
	for(;;) {
		return 36;

	}
	
}
EMIT "Stack[-16] = 0";
EMIT "Stack[-18] = 0";


void func_196(bool var_61_bool, int var_62_int, int var_63_int)
{
	object var_66_object;
	func_9(var_66_object);
	object var_67_object;
	func_9(var_67_object);
	object var_68_object;
	func_9(var_68_object);
	object var_69_object;
	func_9(var_69_object);
	bool var_65_bool;
	var_66_object->IsItemSelected(var_65_bool, var_62_int, var_63_int);
	var_65_bool = var_61_bool;
}


void func_484(int var_40_int)
{
	object var_51_object; int var_52_int; bool var_53_bool; bool var_54_bool;
	object var_55_object;
	func_9(var_55_object);
	object var_48_object;
	var_55_object = var_48_object;
	int var_49_int;
	var_48_object->GetItemCount(var_49_int, var_40_int);
	int var_50_int = 0;
	
	for(;;) {
		if(var_50_int < 12) {
			if(var_50_int < var_49_int) {
				var_48_object->GetItem(var_51_object, var_50_int, var_40_int);
				var_48_object->GetItemAmount(var_52_int, var_50_int, var_40_int);
				bool var_61_bool; int var_62_int; int var_63_int;
				var_50_int = var_62_int;
				var_40_int = var_63_int;
				func_196(var_61_bool, var_62_int, var_63_int);
				var_61_bool = var_53_bool;
				bool var_70_bool; object var_71_object;
				var_51_object = var_71_object;
				func_193(var_71_object);
				var_70_bool = var_54_bool;
				if(var_53_bool != 0) {
					if(var_54_bool != 0) {
						string var_75_string; int var_76_int;
						var_50_int = var_76_int;
						func_571(var_75_string, var_76_int);
						@SendMessage(0, var_75_string, var_51_object);
					} else {
					string var_93_string; int var_94_int;
					var_50_int = var_94_int;
					func_571(var_93_string, var_94_int);
					@SendMessage(16384, var_93_string, var_51_object);
				}
				if(var_54_bool != 0) {
					string var_97_string; int var_98_int;
					var_50_int = var_98_int;
					func_571(var_97_string, var_98_int);
					@SendMessage(131072, var_97_string, var_51_object);
					goto Label_549;
				}
				string var_100_string; int var_101_int;
				var_50_int = var_101_int;
				func_571(var_100_string, var_101_int);
				@SendMessage(0, var_100_string, var_51_object);
			}
			string var_103_string; int var_104_int;
			var_50_int = var_104_int;
			func_571(var_103_string, var_104_int);
			@SendMessage(32768, var_103_string);
		}
		}
		goto Label_549;

	Label_549:
		string var_89_string; int var_90_int;
		var_50_int = var_90_int;
		func_571(var_89_string, var_90_int);
		@SendMessage((var_52_int | 65536), var_89_string);
		var_51_object = null;
		goto Label_566;

	Label_566:
		var_50_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


void func_9(object var_55_object)
{
	object var_57_object;
	@GetPlayerContainer(var_57_object);
	var_57_object = var_55_object;
}
EMIT "Stack[-1] = 0";


void func_365(void)
{
	int var_105_int;
	func_354(var_105_int);
	@SendMessage(var_105_int, "money");
}


// @pe
void func_15(bool var_55_bool)
{
	var_55_bool = false;
}


void func_434(int var_0_int, bool var_178_bool, int var_179_int, int var_180_int)
{
	int var_196_int; bool var_197_bool; bool var_198_bool;
	object var_199_object;
	func_9(var_199_object);
	object var_191_object;
	var_199_object = var_191_object;
	object var_190_object;
	@GetContainer(var_190_object);
	int var_193_int;
	var_191_object->GetItemCount(var_193_int, var_179_int);
	if(var_193_int <= var_180_int) {
		var_178_bool = false;
		return 18;
	}
	int var_194_int;
	var_191_object->GetItemAmount(var_194_int, var_180_int, var_179_int);
	object var_192_object;
	var_191_object->GetItem(var_192_object, var_180_int, var_179_int);
	bool var_195_bool;
	var_190_object->AddItem(var_195_bool, var_192_object, 0, 1);
	if(!var_195_bool) { //@nz
		var_178_bool = false;
		return 18;
	}
	if(var_0_int == 0) {
		var_192_object->GetItemID(var_196_int);
		@HasInvItemProperty(var_197_bool, var_196_int, "Weapon");
		if(var_197_bool != 0) {
			var_191_object->IsItemSelected(var_198_bool, var_180_int, var_0_int);
			if(var_198_bool != 0)
				@SetPlayerHandsItem(-1);
		}
	}
	var_191_object->RemoveItem(var_180_int, 1, var_179_int);
	var_178_bool = true;
}
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


void func_19(void)
{
}


// @pe
void func_340(int var_0_int, int var_5_int)
{
	if(var_5_int == -1)
		return 0;
	if(var_0_int == var_5_int)
		return 0;
	func_372(var_5_int);
}


void func_18(void)
{
}


// @pe
void func_20(int var_0_int, bool var_102_bool, int var_103_int, bool var_104_bool)
{
	if(var_104_bool != 0) {
		int var_107_int;
		var_103_int = var_107_int;
		func_35(var_104_bool, var_107_int);
	} else {
		bool var_178_bool; int var_180_int;
		var_103_int = var_180_int;
		func_434(var_104_bool, var_178_bool, var_0_int, var_180_int);
	}
	var_102_bool = true;
	
}


// @pe
void func_372(int var_9_int)
{
	if(var_9_int != 0)
		@SendMessage(0, "button_weapon");
	else
		@SendMessage(1, "button_weapon");
	if(var_9_int != 1)
		@SendMessage(0, "button_clothes");
	else
		@SendMessage(1, "button_clothes");

	if(var_9_int != 2)
		@SendMessage(0, "button_medcine");
	else
		@SendMessage(1, "button_medcine");

	if(var_9_int != 3)
		@SendMessage(0, "button_food");
	else
		@SendMessage(1, "button_food");

	if(var_9_int != 4)
		@SendMessage(0, "button_other");
	else
		@SendMessage(1, "button_other");

	
}


// @pe
void func_571(string var_75_string, int var_76_int)
{
	if((var_76_int + 1) < 10)
		var_75_string = "slot0" + (var_76_int + 1);
	var_75_string = "slot" + (var_76_int + 1);
}


// @pe
void func_157(int var_0_int, int var_4_int)
{
	int var_5_int;
	func_340(var_5_int, var_5_int);
	func_484(-1);
	func_365();
	@SetCursor("default");
	@ShowCursor();
	@CaptureKeyboard();
	@SetOwnerDraw(false);
	@SetNeedUpdate(true);
	func_19();
	@ProcessEvents();
}


