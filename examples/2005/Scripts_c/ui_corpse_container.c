maintask task_0
{
	void init(int var_0_int, object var_1_object, int var_2_int)
	{
		@CreateWindow("inventory_base.xml", false, var_1_object);
		func_160(var_2_int);
		func_407(var_2_int, 0);
	}

	// @pe
	void OnPlayerHolsterWeapon(int var_0_int, object var_1_object, int var_2_int, int var_3_int, int var_4_int, float var_5_float)
	{
		if((var_2_int + var_5_float) < 0)
			var_2_int = 0;
		func_160(var_5_float);
	}

	// @pe
	void event_100(int var_0_int, object var_1_object, int var_2_int, int var_3_int)
	{
		@DestroyWindow();
	}

	// @pe
	void OnSee(int var_0_int, object var_1_object, int var_2_int, float var_3_float)
	{
		func_824(var_0_int);
		func_625();
		func_104();
	}

	void event_200(int var_0_int, object var_1_object, int var_2_int, int var_3_int, string var_4_string, object var_5_object)
	{
		bool var_12_bool; int var_13_int; int var_14_int; object var_15_object; int var_16_int; object var_17_object;
		var_12_bool = false;
		if(var_4_string == "button_weapon") {
			func_590(var_17_object, 0);
			var_12_bool = true;
		} else if(var_4_string == "button_clothes") {
				func_590(var_17_object, 1);
				var_12_bool = true;
		}
	Label_578:
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
			func_590(var_17_object, 2);
			var_12_bool = true;
		} else if(var_4_string == "button_food") {
			func_590(var_17_object, 3);
			var_12_bool = true;
		} else if(var_4_string == "button_other") {
			func_590(var_17_object, 4);
		} else if(var_4_string == "button_detector") {
		} else if(var_4_string == "button_anticeptic") {
		}
		if(var_3_int != 0) {
			@GetVariable("noinv_drop", var_13_int);
			if(var_13_int != 0)
				return 12;
		}
	
		for(;;) {
			if(!(0 < 12)) goto Label_578;
			string var_364_string; int var_365_int;
			var_14_int = var_365_int;
			func_911(var_364_string, var_365_int);
			if(var_4_string == var_364_string) {
				object var_377_object;
				func_12(var_377_object);
				var_377_object = var_15_object;
				var_15_object->GetItemCount(var_16_int, var_0_int);
				if(var_16_int > var_14_int) {
					var_15_object->GetItem(var_17_object, var_14_int, var_0_int);
					bool var_379_bool; object var_380_object;
					func_443(var_380_object);
					if(!var_379_bool) { //@nz
						bool var_382_bool; int var_383_int; int var_384_int;
						var_14_int = var_383_int;
						var_384_int = var_3_int == 0;
						func_147(var_380_object, var_382_bool, var_383_int, var_384_int);
						var_382_bool = true;
					}
					var_17_object = null;
				}
				goto Label_578;
			EMIT "Stack[-3] = 0";
			}
			var_14_int += 1;
		}
	}

}


void func_131(int var_2_int, int var_196_int)
{
	bool var_202_bool;
	bool var_205_bool;
	var_202_bool = var_205_bool;
	int var_204_int;
	func_694(var_204_int, var_205_bool, (var_196_int + var_2_int));
	int var_203_int;
	var_204_int = var_203_int;
	func_590(var_202_bool, var_203_int);
	if(!var_202_bool) { //@nz
	}
	func_160(var_202_bool);
}


void func_323(int var_83_int, int var_84_int, bool var_85_bool)
{
	object var_95_object; object var_100_object; int var_101_int; int var_102_int; bool var_103_bool;
	@GetContainer(var_95_object);
	int var_96_int;
	var_95_object->GetItemCount(var_96_int);
	int var_97_int = 0;
	int var_98_int = 0;
	int var_99_int = 0;
	
	for(;;) {
		if(var_99_int < var_96_int) {
			var_95_object->GetItem(var_100_object, var_99_int);
			var_100_object->GetItemID(var_101_int);
			var_95_object->GetItemAmount(var_102_int, var_99_int);
			var_103_bool = false;
			var_100_object->HasProperty(var_103_bool, "Organ");
			if(var_103_bool != 0) {
				bool var_107_bool = false;
				if(var_85_bool != 0) {
					if(var_97_int == var_84_int)
						var_107_bool = true;
				}
				if(var_107_bool != 0) {
					var_99_int = var_83_int;
					return 18;
				}
				var_97_int += 1;
			} else {
			bool var_112_bool = false;
			if(!var_85_bool) { //@nz
				if(var_98_int == var_84_int)
					var_112_bool = true;
			}
			if(var_112_bool != 0) {
				var_99_int = var_83_int;
				return 18;
			}
			var_98_int += 1;
		}
		var_83_int = -1;
		return 18;
		}
		var_100_object = null;
		var_99_int += 1;
	}
	
}
EMIT "Stack[-9] = 0";


void func_774(int var_0_int, bool var_386_bool, int var_387_int, int var_388_int)
{
	int var_404_int; bool var_405_bool; bool var_406_bool;
	object var_407_object;
	func_12(var_407_object);
	object var_399_object;
	var_407_object = var_399_object;
	object var_398_object;
	@GetContainer(var_398_object);
	int var_401_int;
	var_399_object->GetItemCount(var_401_int, var_387_int);
	if(var_401_int <= var_388_int) {
		var_386_bool = false;
		return 18;
	}
	int var_402_int;
	var_399_object->GetItemAmount(var_402_int, var_388_int, var_387_int);
	object var_400_object;
	var_399_object->GetItem(var_400_object, var_388_int, var_387_int);
	bool var_403_bool;
	var_398_object->AddItem(var_403_bool, var_400_object, 0, 1);
	if(!var_403_bool) { //@nz
		var_386_bool = false;
		return 18;
	}
	if(var_0_int == 0) {
		var_400_object->GetItemID(var_404_int);
		@HasInvItemProperty(var_405_bool, var_404_int, "Weapon");
		if(var_405_bool != 0) {
			var_399_object->IsItemSelected(var_406_bool, var_388_int, var_0_int);
			if(var_406_bool != 0)
				@SetPlayerHandsItem(-1);
		}
	}
	var_399_object->RemoveItem(var_388_int, 1, var_387_int);
	var_386_bool = true;
}
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


void func_200(int var_2_int)
{
	object var_180_object; object var_184_object; int var_185_int; int var_186_int; bool var_187_bool; int var_188_int; int var_189_int; object var_190_object; int var_191_int; int var_192_int; bool var_193_bool; int var_194_int;
	@GetContainer(var_180_object);
	int var_181_int;
	var_180_object->GetItemCount(var_181_int);
	int var_182_int = 0;
	int var_183_int = 0;
	
	for(;;) {
		if(var_183_int < var_181_int) {
			var_180_object->GetItem(var_184_object, var_183_int);
			var_184_object->GetItemID(var_185_int);
			var_180_object->GetItemAmount(var_186_int, var_183_int);
			var_187_bool = false;
			var_184_object->HasProperty(var_187_bool, "Organ");
			if(var_187_bool != 0) {
			} else {
			if(var_182_int >= var_2_int) {
				string var_201_string;
				func_927(var_201_string, (var_182_int - var_2_int));
				@SendMessage(0, var_201_string, var_184_object);
				string var_215_string;
				func_927(var_215_string, (var_182_int - var_2_int));
				@SendMessage((var_186_int | 65536), var_215_string);
			}
			var_182_int += 1;
			if(var_182_int >= (4 + var_2_int)) {
			} else {
							var_184_object = null;
			}
		}
		var_188_int = var_182_int + var_2_int;

		while(var_188_int < (4 + var_2_int)) {
			string var_225_string;
			func_927(var_225_string, (var_188_int - var_2_int));
			@SendMessage(32768, var_225_string);
			var_188_int += 1;
		}

		var_182_int = 0;
		var_189_int = 0;

		for(;;) {
			if(var_189_int < var_181_int) {
				var_180_object->GetItem(var_190_object, var_189_int);
				var_190_object->GetItemID(var_191_int);
				var_180_object->GetItemAmount(var_192_int, var_189_int);
				var_193_bool = false;
				var_190_object->HasProperty(var_193_bool, "Organ");
				if(!var_193_bool) { //@nz
				} else {
				string var_233_string; int var_234_int;
				var_182_int = var_234_int;
				func_943(var_233_string, var_234_int);
				@SendMessage(0, var_233_string, var_190_object);
				string var_247_string; int var_248_int;
				func_943(var_247_string, var_248_int);
				@SendMessage((var_192_int | 65536), var_247_string);
				if((var_248_int + 1) >= 4) {
				} else {
					var_190_object = null;

				}
			}
			var_182_int = var_194_int;

			while(var_194_int < 4) {
				string var_255_string; int var_256_int;
				var_194_int = var_256_int;
				func_943(var_255_string, var_256_int);
				@SendMessage(32768, var_255_string);
				var_194_int += 1;
			}

			}
			var_189_int += 1;
		}
		}
		var_183_int += 1;
	}
	
}
EMIT "Stack[-15] = 0";


void func_12(object var_104_object)
{
	object var_106_object;
	@GetPlayerContainer(var_106_object);
	var_106_object = var_104_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_590(int var_0_int, int var_54_int)
{
	if(var_54_int == -1)
		return 0;
	if(var_0_int == var_54_int)
		return 0;
	func_632(var_54_int);
}


// @pe
void func_911(string var_124_string, int var_125_int)
{
	if((var_125_int + 1) < 10)
		var_124_string = "slot0" + (var_125_int + 1);
	var_124_string = "slot" + (var_125_int + 1);
}


void func_18(int var_2_int, bool var_56_bool, int var_57_int, string var_58_string)
{
	int var_63_int; int var_64_int; int var_65_int;
	
	while(0 < 4) {
		string var_68_string; int var_69_int;
		var_63_int = var_69_int;
		func_943(var_68_string, var_69_int);
		if(var_58_string == var_68_string) {
			int var_81_int;
			int var_83_int; int var_84_int;
			var_63_int = var_84_int;
			func_323(var_83_int, var_84_int, true);
			var_83_int = var_81_int;
			func_115(true);
			var_56_bool = true;
			return 6;
		}
		var_63_int += 1;
	}
	
	
	while(0 < 4) {
		string var_183_string; int var_184_int;
		var_64_int = var_184_int;
		func_927(var_183_string, var_184_int);
		if(var_58_string == var_183_string) {
			int var_196_int;
			int var_198_int; int var_199_int;
			var_64_int = var_199_int;
			func_323(var_198_int, var_199_int, false);
			var_198_int = var_196_int;
			func_131(var_196_int, true);
			var_56_bool = true;
			return 6;
		}
		var_64_int += 1;
	}
	
	if(var_58_string == "scrollbar") {
		int var_259_int;
		func_377(var_259_int);
		var_259_int = var_65_int;
		if((((0.01 * (var_65_int - 4)) * var_57_int) + 0.5) < 0)
			var_2_int = 0;
		func_200(var_65_int);
		var_56_bool = true;
		return 6;
	}
	var_56_bool = false;
}


// @pe
void func_147(int var_0_int, int var_2_int, bool var_382_bool, int var_383_int)
{
	int var_388_int;
	var_383_int = var_388_int;
	bool var_386_bool;
	func_774(var_384_int, var_386_bool, var_0_int, var_388_int);
	var_2_int += 1;
	func_160(var_384_int);
	var_382_bool = true;
}


// @pe
void func_407(int var_0_int, int var_53_int)
{
	int var_54_int;
	func_590(var_54_int, var_54_int);
	func_824(-1);
	func_625();
	@SetCursor("default");
	@ShowCursor();
	@CaptureKeyboard();
	@SetOwnerDraw(false);
	@SetNeedUpdate(true);
	func_108();
	@ProcessEvents();
}


void func_604(int var_154_int)
{
	object var_159_object;
	func_12(var_159_object);
	object var_157_object;
	var_159_object = var_157_object;
	int var_158_int;
	var_157_object->GetProperty("money", var_158_int);
	var_158_int = var_154_int;
}
EMIT "Stack[-2] = 0";


// @pe
void func_927(string var_201_string, int var_202_int)
{
	if((var_202_int + 1) < 10)
		var_201_string = "cslot0" + (var_202_int + 1);
	var_201_string = "cslot" + (var_202_int + 1);
}


void func_160(int var_2_int)
{
	int var_11_int;
	func_377(var_11_int);
	int var_8_int;
	var_11_int = var_8_int;
	if(var_8_int <= 4) {
		@SendMessage(16384, "scrollbar");
		var_2_int = 0;
	} else if((var_2_int + 4) > var_8_int) {
			var_2_int -= ((var_2_int + 4) - var_8_int);
			@SendMessage(((var_2_int * 100) / (var_8_int - 4)), "scrollbar");
	}
	
	@SendMessage(((var_2_int * 100) / (var_8_int - 4)), "scrollbar");
}


void func_615(int var_169_int)
{
	object var_172_object;
	func_12(var_172_object);
	object var_171_object;
	var_172_object = var_171_object;
	var_171_object->SetProperty("money", var_169_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_104(void)
{
	func_200(var_3_float);
}


// @pe
void func_108(void)
{
	func_160(var_53_int);
	func_200(var_53_int);
}


// @pe
void func_632(int var_58_int)
{
	if(var_58_int != 0)
		@SendMessage(0, "button_weapon");
	else
		@SendMessage(1, "button_weapon");
	if(var_58_int != 1)
		@SendMessage(0, "button_clothes");
	else
		@SendMessage(1, "button_clothes");

	if(var_58_int != 2)
		@SendMessage(0, "button_medcine");
	else
		@SendMessage(1, "button_medcine");

	if(var_58_int != 3)
		@SendMessage(0, "button_food");
	else
		@SendMessage(1, "button_food");

	if(var_58_int != 4)
		@SendMessage(0, "button_other");
	else
		@SendMessage(1, "button_other");

	
}


// @pe
void func_943(string var_233_string, int var_234_int)
{
	if((var_234_int + 1) < 10)
		var_233_string = "ccslot0" + (var_234_int + 1);
	var_233_string = "ccslot" + (var_234_int + 1);
}


void func_625(void)
{
	int var_154_int;
	func_604(var_154_int);
	@SendMessage(var_154_int, "money");
}


void func_115(int var_81_int)
{
	@PlaySound("take_organ");
	int var_119_int;
	int var_120_int; bool var_121_bool; int var_122_int;
	bool var_117_bool = var_121_bool;
	var_81_int = var_122_int;
	func_694(var_120_int, var_121_bool, var_122_int);
	var_120_int = var_119_int;
	func_590(var_117_bool, var_119_int);
	if(!var_117_bool) { //@nz
	}
}


void func_694(int var_120_int, bool var_121_bool, int var_122_int)
{
	int var_142_int;
	var_121_bool = false;
	if(var_122_int == -1) {
		var_120_int = -1;
		return 22;
	}
	object var_147_object;
	func_12(var_147_object);
	object var_135_object;
	var_147_object = var_135_object;
	object var_134_object;
	@GetContainer(var_134_object);
	int var_137_int;
	var_134_object->GetItemCount(var_137_int);
	if(var_137_int <= var_122_int) {
		var_120_int = -1;
		return 22;
	}
	int var_138_int;
	var_134_object->GetItemAmount(var_138_int, var_122_int);
	if(var_138_int == 0) {
		var_120_int = -1;
		return 22;
	}
	object var_136_object;
	var_134_object->GetItem(var_136_object, var_122_int);
	int var_139_int;
	var_136_object->GetItemID(var_139_int);
	bool var_140_bool = false;
	var_136_object->HasProperty(var_140_bool, "Organ");
	if(var_140_bool != 0)
		var_136_object->RemoveProperty("Organ");
	int var_141_int;
	@GetInvItemProperty(var_141_int, var_139_int, "Category");
	int var_157_int;
	func_959(var_157_int);
	if(var_139_int == var_157_int) {
		int var_162_int;
		func_604(var_162_int);
		var_162_int = var_142_int;
		var_142_int += var_138_int;
		int var_169_int;
		var_142_int = var_169_int;
		func_615(var_169_int);
		var_134_object->RemoveItem(var_122_int, var_138_int);
		func_625();
		var_121_bool = true;
		var_120_int = -1;
		return 22;
	}
	bool var_144_bool;
	var_135_object->AddItem(var_144_bool, var_136_object, var_141_int, 1);
	if(!var_144_bool) { //@nz
		var_141_int = var_120_int;
		return 22;
	}
	var_121_bool = true;
	var_134_object->RemoveItem(var_122_int, 1);
	var_141_int = var_120_int;
}
EMIT "Stack[-9] = 0";
EMIT "Stack[-10] = 0";
EMIT "Stack[-11] = 0";


void func_824(int var_89_int)
{
	object var_100_object; int var_101_int; bool var_102_bool; bool var_103_bool;
	object var_104_object;
	func_12(var_104_object);
	object var_97_object;
	var_104_object = var_97_object;
	int var_98_int;
	var_97_object->GetItemCount(var_98_int, var_89_int);
	int var_99_int = 0;
	
	for(;;) {
		if(var_99_int < 12) {
			if(var_99_int < var_98_int) {
				var_97_object->GetItem(var_100_object, var_99_int, var_89_int);
				var_97_object->GetItemAmount(var_101_int, var_99_int, var_89_int);
				bool var_110_bool; int var_111_int; int var_112_int;
				var_99_int = var_111_int;
				var_89_int = var_112_int;
				func_446(var_110_bool, var_111_int, var_112_int);
				var_110_bool = var_102_bool;
				bool var_119_bool; object var_120_object;
				var_100_object = var_120_object;
				func_443(var_120_object);
				var_119_bool = var_103_bool;
				if(var_102_bool != 0) {
					if(var_103_bool != 0) {
						string var_124_string; int var_125_int;
						var_99_int = var_125_int;
						func_911(var_124_string, var_125_int);
						@SendMessage(0, var_124_string, var_100_object);
					} else {
					string var_142_string; int var_143_int;
					var_99_int = var_143_int;
					func_911(var_142_string, var_143_int);
					@SendMessage(16384, var_142_string, var_100_object);
				}
				if(var_103_bool != 0) {
					string var_146_string; int var_147_int;
					var_99_int = var_147_int;
					func_911(var_146_string, var_147_int);
					@SendMessage(131072, var_146_string, var_100_object);
					goto Label_889;
				}
				string var_149_string; int var_150_int;
				var_99_int = var_150_int;
				func_911(var_149_string, var_150_int);
				@SendMessage(0, var_149_string, var_100_object);
			}
			string var_152_string; int var_153_int;
			var_99_int = var_153_int;
			func_911(var_152_string, var_153_int);
			@SendMessage(32768, var_152_string);
		}
		}
		goto Label_889;

	Label_889:
		string var_138_string; int var_139_int;
		var_99_int = var_139_int;
		func_911(var_138_string, var_139_int);
		@SendMessage((var_101_int | 65536), var_138_string);
		var_100_object = null;
		goto Label_906;

	Label_906:
		var_99_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


void func_377(int var_11_int)
{
	object var_20_object; object var_24_object; int var_25_int; int var_26_int; bool var_27_bool;
	@GetContainer(var_20_object);
	int var_21_int;
	var_20_object->GetItemCount(var_21_int);
	int var_22_int = 0;
	int var_23_int = 0;
	
	while(var_23_int < var_21_int) {
		var_20_object->GetItem(var_24_object, var_23_int);
		var_24_object->GetItemID(var_25_int);
		var_20_object->GetItemAmount(var_26_int, var_23_int);
		var_27_bool = false;
		var_24_object->HasProperty(var_27_bool, "Organ");
		if(!var_27_bool) //@nz
			var_22_int += 1;
		var_24_object = null;
		var_23_int += 1;
	}
	
	var_22_int = var_11_int;
}
EMIT "Stack[-8] = 0";


// @pe
void func_443(bool var_119_bool)
{
	var_119_bool = false;
}


void func_446(bool var_110_bool, int var_111_int, int var_112_int)
{
	object var_115_object;
	func_12(var_115_object);
	object var_116_object;
	func_12(var_116_object);
	object var_117_object;
	func_12(var_117_object);
	object var_118_object;
	func_12(var_118_object);
	bool var_114_bool;
	var_115_object->IsItemSelected(var_114_bool, var_111_int, var_112_int);
	var_114_bool = var_110_bool;
}


void func_959(int var_157_int)
{
	int var_159_int;
	@GetInvItemByName(var_159_int, "Money");
	var_159_int = var_157_int;
}


